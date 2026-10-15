
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SpawnGroupConnectionInfo_t::~SpawnGroupConnectionInfo_t  (line 25, @0x0000000001f84250, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CMapSpawnGroup::OnSpawnGroupLoad
void __fastcall SpawnGroupConnectionInfo_t::~SpawnGroupConnectionInfo_t(SpawnGroupConnectionInfo_t *const this)
{
  if ( this->m_LandmarkName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_LandmarkName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


// CSpawnGroupMgrGameSystem::~CSpawnGroupMgrGameSystem  (line 146, @0x0000000001f97f80, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CCommandMemberInitializer_OnSpawnGroupActivate, ~CCommandMemberInitializer_OnSpawnGroupList, ~CCommandMemberInitializer_OnSpawnGroupLoad, ~CCommandMemberInitializer_OnSpawnGroupSave, ~CCommandMemberInitializer_OnSpawnGroupUnload, ~CConCommandMemberAccessor, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, ConCommandBase::Shutdown, ConCommand::~ConCommand, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge
void __fastcall CSpawnGroupMgrGameSystem::~CSpawnGroupMgrGameSystem(CSpawnGroupMgrGameSystem *const this)
{
  bool v2; // zf
  CUtlVectorBase<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_QueuedUnloadRequests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSpawnGroupMgr = &off_3FCE6F0;
  this->_vptr_IGameSystem = off_3FCE7D0;
  this->m_QueuedUnloadRequests.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_QueuedUnloadRequests.m_Memory;
    CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int>::Purge(&this->m_QueuedUnloadRequests.m_Memory);
    if ( (this->m_QueuedUnloadRequests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int>::Purge(p_m_Memory);
  }
  CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_SpawnGroups.m_Tree);
  v2 = (this->m_SpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpawnGroups.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroups.m_Tree.m_Elements);
    v2 = (this->m_SpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_SpawnGroups.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroups.m_Tree.m_Elements);
  }
  else
  {
    this->m_SpawnGroups.m_Tree.m_LastAlloc.index = -1;
  }
  v2 = (this->m_SpawnEntitiesCallQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpawnEntitiesCallQueue.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_SpawnEntitiesCallQueue.m_Memory);
    if ( (this->m_SpawnEntitiesCallQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_SpawnEntitiesCallQueue.m_Memory);
  }
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupList_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupList_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupSave_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupSave_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(&this->CAutoGameSystem);
}


// CSpawnGroupMgrGameSystem::~CSpawnGroupMgrGameSystem  (line 146, @0x0000000001f98210, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CCommandMemberInitializer_OnSpawnGroupActivate, ~CCommandMemberInitializer_OnSpawnGroupList, ~CCommandMemberInitializer_OnSpawnGroupLoad, ~CCommandMemberInitializer_OnSpawnGroupSave, ~CCommandMemberInitializer_OnSpawnGroupUnload, ~CConCommandMemberAccessor, ~CSpawnGroupMgrGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int, CUtlMap<unsigned int, CMapSpawnGroup*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, ConCommandBase::Shutdown, ConCommand::~ConCommand, IGameSystem::~IGameSystem, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t, int>::Purge, CUtlMemory<unsigned int, int>::Purge
void __fastcall CSpawnGroupMgrGameSystem::~CSpawnGroupMgrGameSystem(CSpawnGroupMgrGameSystem *const this)
{
  bool v2; // zf
  CUtlVectorBase<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_QueuedUnloadRequests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSpawnGroupMgr = &off_3FCE6F0;
  this->_vptr_IGameSystem = off_3FCE7D0;
  this->m_QueuedUnloadRequests.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_QueuedUnloadRequests.m_Memory;
    CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int>::Purge(&this->m_QueuedUnloadRequests.m_Memory);
    if ( (this->m_QueuedUnloadRequests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t,int>::Purge(p_m_Memory);
  }
  CUtlRBTree<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_SpawnGroups.m_Tree);
  v2 = (this->m_SpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpawnGroups.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroups.m_Tree.m_Elements);
    v2 = (this->m_SpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_SpawnGroups.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMapSpawnGroup *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroups.m_Tree.m_Elements);
  }
  else
  {
    this->m_SpawnGroups.m_Tree.m_LastAlloc.index = -1;
  }
  v2 = (this->m_SpawnEntitiesCallQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpawnEntitiesCallQueue.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_SpawnEntitiesCallQueue.m_Memory);
    if ( (this->m_SpawnEntitiesCallQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_SpawnEntitiesCallQueue.m_Memory);
  }
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupList_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupList_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupList_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupSave_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupSave_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupSave_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupUnload_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupLoad_register.m_ConCommandAccessor);
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCCDB0;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCCE58;
  this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCCE70;
  ConCommandBase::Shutdown(&this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnSpawnGroupActivate_register.m_ConCommandAccessor);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(&this->CAutoGameSystem);
  operator delete(this);
}


// CSpawnGroupMgrGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 148, @0x0000000001f72050, libserver.so)
void __fastcall CSpawnGroupMgrGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CSpawnGroupMgrGameSystem *const this)
{
  ;
}


// CSpawnGroupMgrGameSystem::DoesGameSystemReallocate  (line 148, @0x0000000001f72070, libserver.so)
// globals: CSpawnGroupMgrGameSystem::sm_Factory
bool __fastcall CSpawnGroupMgrGameSystem::DoesGameSystemReallocate(const CSpawnGroupMgrGameSystem *const this)
{
  return (*(CSpawnGroupMgrGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CSpawnGroupMgrGameSystem::sm_Factory);
}


// CSpawnGroupMgrGameSystem::SetGameSystemGlobalPtrs  (line 148, @0x0000000001f720a0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSpawnGroupMgrGameSystem::sm_Factory
void __fastcall CSpawnGroupMgrGameSystem::SetGameSystemGlobalPtrs(CSpawnGroupMgrGameSystem *const this, void *pValue)
{
  if ( CSpawnGroupMgrGameSystem::sm_Factory != 0 )
    (*(CSpawnGroupMgrGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CSpawnGroupMgrGameSystem::sm_Factory,
      pValue);
}


