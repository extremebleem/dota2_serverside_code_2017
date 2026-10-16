
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityDebugGameSystem::~CEntityDebugGameSystem  (line 107, @0x0000000001f959d0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CCommandMemberInitializer_OnEntityReport, ~CCommandMemberInitializer_OnEntitySummary, ~CConCommandMemberAccessor, ~CUtlHashtable, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlRBTree<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int>::Purge, ConCommandBase::Shutdown, ConCommand::~ConCommand, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CUtlString, int>::Purge
void __fastcall CEntityDebugGameSystem::~CEntityDebugGameSystem(CEntityDebugGameSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_3FCC5F0;  // vptr: CEntityDebugGameSystem
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&this->m_StickyEntTextNames);
  if ( (this->m_StickyEntTextNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_StickyEntTextNames.m_Memory);
    if ( (this->m_StickyEntTextNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_StickyEntTextNames.m_Memory);
  }
  CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_ScrollingMessageLists.m_Tree);
  this->m_ScrollingMessageLists.m_Tree.m_FirstFree = -1;
  if ( (this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index = -1;
  }
  else
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScrollingMessageLists.m_Tree.m_Elements);
    v2 = (this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScrollingMessageLists.m_Tree.m_Elements);
  }
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&this->m_renderDebugEntities);
  if ( (this->m_renderDebugEntities.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>::Purge(&this->m_renderDebugEntities.m_table);
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&this->m_simDebugEntities);
  if ( (this->m_simDebugEntities.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>::Purge(&this->m_simDebugEntities.m_table);
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCADF0;
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCAE98;
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCAEB0;
  ConCommandBase::Shutdown(&this->m_OnEntitySummary_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnEntitySummary_register.m_ConCommandAccessor);
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCADF0;
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCAE98;
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCAEB0;
  ConCommandBase::Shutdown(&this->m_OnEntityReport_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnEntityReport_register.m_ConCommandAccessor);
  CUtlSlot::~CUtlSlot(&this->CUtlSlot);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CEntityDebugGameSystem::~CEntityDebugGameSystem  (line 107, @0x0000000001f95ba0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CCommandMemberInitializer_OnEntityReport, ~CCommandMemberInitializer_OnEntitySummary, ~CConCommandMemberAccessor, ~CEntityDebugGameSystem, ~CUtlHashtable, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlRBTree<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int>::Purge, ConCommandBase::Shutdown, ConCommand::~ConCommand, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CUtlString, int>::Purge
void __fastcall CEntityDebugGameSystem::~CEntityDebugGameSystem(CEntityDebugGameSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_3FCC5F0;  // vptr: CEntityDebugGameSystem
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&this->m_StickyEntTextNames);
  if ( (this->m_StickyEntTextNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_StickyEntTextNames.m_Memory);
    if ( (this->m_StickyEntTextNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_StickyEntTextNames.m_Memory);
  }
  CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_ScrollingMessageLists.m_Tree);
  v2 = (this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_ScrollingMessageLists.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScrollingMessageLists.m_Tree.m_Elements);
    v2 = (this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScrollingMessageLists.m_Tree.m_Elements);
  }
  else
  {
    this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&this->m_renderDebugEntities);
  if ( (this->m_renderDebugEntities.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>::Purge(&this->m_renderDebugEntities.m_table);
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&this->m_simDebugEntities);
  if ( (this->m_simDebugEntities.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>::Purge(&this->m_simDebugEntities.m_table);
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCADF0;
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCAE98;
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCAEB0;
  ConCommandBase::Shutdown(&this->m_OnEntitySummary_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnEntitySummary_register.m_ConCommandAccessor);
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCADF0;
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCAE98;
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCAEB0;
  ConCommandBase::Shutdown(&this->m_OnEntityReport_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnEntityReport_register.m_ConCommandAccessor);
  CUtlSlot::~CUtlSlot(&this->CUtlSlot);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CEntityDebugGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 109, @0x0000000001f71b80, libserver.so)
void __fastcall CEntityDebugGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CEntityDebugGameSystem *const this)
{
  ;
}


// CEntityDebugGameSystem::DoesGameSystemReallocate  (line 109, @0x0000000001f71b90, libserver.so)
// globals: CEntityDebugGameSystem::sm_Factory
bool __fastcall CEntityDebugGameSystem::DoesGameSystemReallocate(const CEntityDebugGameSystem *const this)
{
  return (*(CEntityDebugGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CEntityDebugGameSystem::sm_Factory);
}


// CEntityDebugGameSystem::SetGameSystemGlobalPtrs  (line 109, @0x0000000001f71bb0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CEntityDebugGameSystem::sm_Factory
void __fastcall CEntityDebugGameSystem::SetGameSystemGlobalPtrs(CEntityDebugGameSystem *const this, void *pValue)
{
  if ( CEntityDebugGameSystem::sm_Factory != 0 )
    (*(CEntityDebugGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CEntityDebugGameSystem::sm_Factory, pValue);
}


// CEntityDebugGameSystem::OnClientGamePostSimulate  (line 170, @0x0000000001f9e0c0, libserver.so)
// calls: CEntityDebugGameSystem::OnPostSimulate
void __fastcall CEntityDebugGameSystem::OnClientGamePostSimulate(
        CEntityDebugGameSystem *const this,
        const EventClientGamePostSimulate_t *const msg)
{
  CEntityDebugGameSystem::OnPostSimulate(this, msg);
}


// CEntityDebugGameSystem::OnServerGamePostSimulate  (line 170, @0x0000000001f9e0d0, libserver.so)
// calls: CEntityDebugGameSystem::OnPostSimulate
void __fastcall CEntityDebugGameSystem::OnServerGamePostSimulate(
        CEntityDebugGameSystem *const this,
        const EventServerGamePostSimulate_t *const msg)
{
  CEntityDebugGameSystem::OnPostSimulate(this, msg);
}


