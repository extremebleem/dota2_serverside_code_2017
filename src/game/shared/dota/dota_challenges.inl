
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAChallengeSystem::~CDOTAChallengeSystem  (line 32, @0x00000000024af1a0, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, StopListeningForAllEvents, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoGameSystem, ~CAutoLockT, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CGameEventListener, ~CUtlMemory, ~CUtlSlot, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT, ~IGameEventListener2
// calls: CUtlVectorBase<challenge_instance_t, CUtlMemory<challenge_instance_t, int> >::RemoveAll, CUtlVectorBase<CMsgServerToGCRerollPlayerChallenge, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int> >::RemoveAll, CClientMessageDelegateHook<CDOTAClientMsg_QuestStatus_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::Release, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::Release, ThreadGetCurrentId, ThreadInterlockedExchange64, CUtlVectorBase<challenge_template_t, CUtlMemory<challenge_template_t, int> >::RemoveAll, IGameSystem::~IGameSystem, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<challenge_template_t, int>::Purge (17 total)
void __fastcall CDOTAChallengeSystem::~CDOTAChallengeSystem(CDOTAChallengeSystem *const this)
{
  bool v2; // zf
  signed __int64 CurrentId; // rsi
  __int64 i; // r12
  CUtlSignaller_Base *v5; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v7; // rdi
  CUtlVectorBase<challenge_quest_t*,CUtlMemory<challenge_quest_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pQuests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40DE410;  // vptr: CDOTAChallengeSystem
  this->_vptr_IGameEventListener2 = off_40DE580;
  this->m_pQuests.m_Size = 0;
  this->_vptr_ICombatAnalyzerQueryUpdateNotify = &off_40DE5A8;
  if ( v2 )
  {
    p_m_Memory = &this->m_pQuests.m_Memory;
    CUtlMemory<challenge_quest_t *,int>::Purge(&this->m_pQuests.m_Memory);
    if ( (this->m_pQuests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_quest_t *,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<challenge_instance_t,CUtlMemory<challenge_instance_t,int>>::RemoveAll(&this->m_pInstances);
  if ( (this->m_pInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<challenge_instance_t,int>::Purge(&this->m_pInstances.m_Memory);
    if ( (this->m_pInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_instance_t,int>::Purge(&this->m_pInstances.m_Memory);
  }
  CUtlVectorBase<CMsgServerToGCRerollPlayerChallenge,CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>>::RemoveAll(&this->m_vecRerollsToSendAtSignout);
  if ( (this->m_vecRerollsToSendAtSignout.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>::Purge(&this->m_vecRerollsToSendAtSignout.m_Memory);
    if ( (this->m_vecRerollsToSendAtSignout.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>::Purge(&this->m_vecRerollsToSendAtSignout.m_Memory);
  }
  v2 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_QuestStatus_tHook._vptr_IClientMessageDelegateHook = off_40DCAB0;
  CClientMessageDelegateHook<CDOTAClientMsg_QuestStatus_t>::Release(&this->m_CDOTAClientMsg_QuestStatus_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_QuestStatus_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_ChallengeReroll_tHook._vptr_IClientMessageDelegateHook = off_40DE290;
  CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::Release(&this->m_CDOTAClientMsg_ChallengeReroll_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_ChallengeReroll_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_ChallengeSelect_tHook._vptr_IClientMessageDelegateHook = off_40DE270;
  CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::Release(&this->m_CDOTAClientMsg_ChallengeSelect_tHook);
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Size > i; ++i )
  {
    v5 = this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v5->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v7 = (v5->m_SlotDeletionDelegate.m_Closure.m_pthis + v5->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v7 - 1);
    (pfn)(v7, &this->m_CDOTAClientMsg_ChallengeSelect_tHook.CUtlSlot);
  }
  if ( --this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(
      &this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      0);
  v2 = (this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory);
    if ( (this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory);
  }
  CUtlVectorBase<challenge_template_t,CUtlMemory<challenge_template_t,int>>::RemoveAll(&this->m_pTemplates);
  if ( (this->m_pTemplates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<challenge_template_t,int>::Purge(&this->m_pTemplates.m_Memory);
    if ( (this->m_pTemplates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_template_t,int>::Purge(&this->m_pTemplates.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTAChallengeSystem::CDOTAChallengeSystem  (line 32, @0x00000000024af500, libserver.so)  // inlines: CClientMessageContainer, CClientMessageDelegateHook, CCopyableLock, CGameEventListener, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT, ClosurePtr, FastDelegate2
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
void __fastcall CDOTAChallengeSystem::CDOTAChallengeSystem(CDOTAChallengeSystem *const this)
{
  this->_vptr_IGameSystem = off_40DE410;  // vptr: CDOTAChallengeSystem
  this->_vptr_IGameEventListener2 = off_40DE580;
  this->_vptr_ICombatAnalyzerQueryUpdateNotify = &off_40DE5A8;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook._vptr_IClientMessageDelegateHook = off_40DE270;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook._vptr_IClientMessageDelegateHook = off_40DE290;
  this->m_bRegisteredForEvents = 0;
  this->m_pTemplates.m_Size = 0;
  this->m_pTemplates.m_Memory.m_pMemory = 0;
  this->m_pTemplates.m_Memory.m_nAllocationCount = 0;
  this->m_pTemplates.m_Memory.m_nGrowSize = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Size = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_ownerID = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.m_depth = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_ConnectedSignallers.Mutex_t.m_depth = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_delegate.m_Closure.m_pthis = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_delegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_delegate.m_Closure.m_pFunction.__delta = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_bInitialized = 0;
  this->m_CDOTAClientMsg_ChallengeSelect_tHook.m_bDestructionAllowed = 1;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Size = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_ownerID = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_depth = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.Mutex_t.m_depth = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_delegate.m_Closure.m_pthis = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_delegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_delegate.m_Closure.m_pFunction.__delta = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_bInitialized = 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_bDestructionAllowed = 1;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.m_Size = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.m_ownerID = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.m_depth = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_ConnectedSignallers.Mutex_t.m_depth = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook._vptr_IClientMessageDelegateHook = off_40DCAB0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_delegate.m_Closure.m_pthis = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_delegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_delegate.m_Closure.m_pFunction.__delta = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_bInitialized = 0;
  this->m_CDOTAClientMsg_QuestStatus_tHook.m_bDestructionAllowed = 1;
  this->m_ClientMessageContainer.m_Size = 0;
  this->m_ClientMessageContainer.m_Memory.m_pMemory = 0;
  this->m_ClientMessageContainer.m_Memory.m_nAllocationCount = 0;
  this->m_ClientMessageContainer.m_Memory.m_nGrowSize = 0;
  this->m_ClientMessageContainer.m_bReleased = 1;
  this->m_vecRerollsToSendAtSignout.m_Size = 0;
  this->m_vecRerollsToSendAtSignout.m_Memory.m_pMemory = 0;
  this->m_vecRerollsToSendAtSignout.m_Memory.m_nAllocationCount = 0;
  this->m_vecRerollsToSendAtSignout.m_Memory.m_nGrowSize = 0;
  this->m_pInstances.m_Size = 0;
  this->m_pInstances.m_Memory.m_pMemory = 0;
  this->m_pInstances.m_Memory.m_nAllocationCount = 0;
  this->m_pInstances.m_Memory.m_nGrowSize = 0;
  this->m_pQuests.m_Size = 0;
  this->m_pQuests.m_Memory.m_pMemory = 0;
  this->m_pQuests.m_Memory.m_nAllocationCount = 0;
  this->m_pQuests.m_Memory.m_nGrowSize = 0;
}


// CDOTAChallengeSystem::~CDOTAChallengeSystem  (line 32, @0x00000000024af7a0, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, StopListeningForAllEvents, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoGameSystem, ~CAutoLockT, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTAChallengeSystem, ~CGameEventListener, ~CUtlMemory, ~CUtlSlot, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT, ~IGameEventListener2
// calls: CUtlVectorBase<challenge_instance_t, CUtlMemory<challenge_instance_t, int> >::RemoveAll, CUtlVectorBase<CMsgServerToGCRerollPlayerChallenge, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int> >::RemoveAll, CClientMessageDelegateHook<CDOTAClientMsg_QuestStatus_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::Release, ThreadGetCurrentId, ThreadInterlockedExchange64, CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::Release, CUtlVectorBase<challenge_template_t, CUtlMemory<challenge_template_t, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CThreadFastMutex::Lock(ulong long,uint) (18 total)
void __fastcall CDOTAChallengeSystem::~CDOTAChallengeSystem(CDOTAChallengeSystem *const this)
{
  bool v2; // zf
  signed __int64 CurrentId; // rsi
  __int64 i; // r12
  CUtlSignaller_Base *v5; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v7; // rdi
  CUtlVectorBase<challenge_quest_t*,CUtlMemory<challenge_quest_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pQuests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40DE410;  // vptr: CDOTAChallengeSystem
  this->_vptr_IGameEventListener2 = off_40DE580;
  this->m_pQuests.m_Size = 0;
  this->_vptr_ICombatAnalyzerQueryUpdateNotify = &off_40DE5A8;
  if ( v2 )
  {
    p_m_Memory = &this->m_pQuests.m_Memory;
    CUtlMemory<challenge_quest_t *,int>::Purge(&this->m_pQuests.m_Memory);
    if ( (this->m_pQuests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_quest_t *,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<challenge_instance_t,CUtlMemory<challenge_instance_t,int>>::RemoveAll(&this->m_pInstances);
  if ( (this->m_pInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<challenge_instance_t,int>::Purge(&this->m_pInstances.m_Memory);
    if ( (this->m_pInstances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_instance_t,int>::Purge(&this->m_pInstances.m_Memory);
  }
  CUtlVectorBase<CMsgServerToGCRerollPlayerChallenge,CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>>::RemoveAll(&this->m_vecRerollsToSendAtSignout);
  if ( (this->m_vecRerollsToSendAtSignout.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>::Purge(&this->m_vecRerollsToSendAtSignout.m_Memory);
    if ( (this->m_vecRerollsToSendAtSignout.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMsgServerToGCRerollPlayerChallenge,int>::Purge(&this->m_vecRerollsToSendAtSignout.m_Memory);
  }
  v2 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_QuestStatus_tHook._vptr_IClientMessageDelegateHook = off_40DCAB0;
  CClientMessageDelegateHook<CDOTAClientMsg_QuestStatus_t>::Release(&this->m_CDOTAClientMsg_QuestStatus_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_QuestStatus_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_ChallengeReroll_tHook._vptr_IClientMessageDelegateHook = off_40DE290;
  CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>::Release(&this->m_CDOTAClientMsg_ChallengeReroll_tHook);
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Size > i; ++i )
  {
    v5 = this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v5->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v7 = (v5->m_SlotDeletionDelegate.m_Closure.m_pthis + v5->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v7 - 1);
    (pfn)(v7, &this->m_CDOTAClientMsg_ChallengeReroll_tHook.CUtlSlot);
  }
  if ( --this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(
      &this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      0);
  v2 = (this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory);
    if ( (this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_CDOTAClientMsg_ChallengeReroll_tHook.m_ConnectedSignallers.m_Memory);
  }
  this->m_CDOTAClientMsg_ChallengeSelect_tHook._vptr_IClientMessageDelegateHook = off_40DE270;
  CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t>::Release(&this->m_CDOTAClientMsg_ChallengeSelect_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_ChallengeSelect_tHook.CUtlSlot);
  CUtlVectorBase<challenge_template_t,CUtlMemory<challenge_template_t,int>>::RemoveAll(&this->m_pTemplates);
  if ( (this->m_pTemplates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<challenge_template_t,int>::Purge(&this->m_pTemplates.m_Memory);
    if ( (this->m_pTemplates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_template_t,int>::Purge(&this->m_pTemplates.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTAChallengeSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 37, @0x0000000002497630, libserver.so)
void __fastcall CDOTAChallengeSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTAChallengeSystem *const this)
{
  ;
}


// CDOTAChallengeSystem::DoesGameSystemReallocate  (line 37, @0x0000000002497640, libserver.so)
// globals: CDOTAChallengeSystem::sm_Factory
bool __fastcall CDOTAChallengeSystem::DoesGameSystemReallocate(const CDOTAChallengeSystem *const this)
{
  return (*(CDOTAChallengeSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAChallengeSystem::sm_Factory);
}


// CDOTAChallengeSystem::SetGameSystemGlobalPtrs  (line 37, @0x0000000002497660, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAChallengeSystem::sm_Factory
void __fastcall CDOTAChallengeSystem::SetGameSystemGlobalPtrs(CDOTAChallengeSystem *const this, void *pValue)
{
  if ( CDOTAChallengeSystem::sm_Factory != 0 )
    (*(CDOTAChallengeSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAChallengeSystem::sm_Factory, pValue);
}


