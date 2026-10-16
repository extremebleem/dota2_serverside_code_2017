// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/rendergamesystem.cpp:54
class GameToolEventToolEvent_SFMRecordingStateChanged_tInternal {
	// sizeof = 1
};

// src/game/shared/rendergamesystem.cpp:54
class GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0> BaseClass;
	GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem(GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem &);
	GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem(const GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem &);
	GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem *);
	virtual ~GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRenderGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 52, @0x0000000001f37840, libserver.so)
void __cdecl CRenderGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 54, @0x0000000001f37850, libserver.so)
void __cdecl GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 54, @0x0000000001f72260, libserver.so)
void __fastcall GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::DoesGameSystemReallocate  (line 54, @0x0000000001f72270, libserver.so)
// globals: GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 54, @0x0000000001f72290, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem  (line 54, @0x0000000001f74130, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem(
        GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCDDB0;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem  (line 54, @0x0000000001f74150, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem(
        GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCDDB0;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CRenderGameSystem::CRenderGameSystem  (line 65, @0x0000000001f6fea0, libserver.so)  // inlines: CCopyableLock, CEventDispatcher, CEventDispatcher_Identified, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlFixedLinkedList, CUtlFixedMemory, CUtlLinkedList, CUtlMap, CUtlMemory, CUtlRBTree, CUtlSignaller, CUtlSignaller_Base, CUtlSignaller_Identified, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT, CWorkListTransient, ClosurePtr, ConstructList, CopyFrom<FastDelegate1<CUtlSlot*, void> >, FastDelegate1, IGameSystem, Init, ResetDbgInfo, SetLessFunc, SetMementoFrom, memset, operator=, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~CUtlSignaller, ~CUtlVector
// calls: CEventDispatcher_Base::CEventDispatcher_Base, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t, unsigned int>, unsigned int>::CUtlMemory, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> >::Purge, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> >::Purge, CRender::CRender, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, _Unwind_Resume, CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::~CWorkListTransient, CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::RemoveAll, CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >::~CUtlSignaller_Identified, CUtlVectorBase<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int> >::~CUtlVectorBase
// callers: CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::CreateGameSystem
// globals: CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<uint,CEventSignature_Void_0>>::IDLessFunc(uint const&,uint const&), CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<uint,CEventSignature_Void_0>>::SlotDeletionHandler(CUtlSlot *), CDefOps<CUtlStringToken>::LessFunc(CUtlStringToken const&,CUtlStringToken const&)
void __fastcall CRenderGameSystem::CRenderGameSystem(CRenderGameSystem *const this)
{
  detail::GenericClass *v1; // r15
  CEventDispatcher<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> > *p_m_Dispatcher; // rdi
  CUtlRBTree<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int,CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int>,unsigned int> >::Node_t *m_pMemory; // rax
  CRenderGameSystem *p_m_sceneObjectUpdater; // rdx
  CUtlVectorBase<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> >::CAllocator *p_m_Memory; // rsi
  CUtlVectorBase<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> >::CAllocator *v7; // rcx
  CRenderGameSystem *v8; // rax
  signed __int64 v9; // rax

  v1 = &this->CUtlSignaller<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >;
  p_m_Dispatcher = &this->m_Dispatcher;
  LODWORD(p_m_Dispatcher[-2].m_EventListenerMap.m_Tree.m_pElements) = 0;
  p_m_Dispatcher[-1].m_Lock.m_ownerID = 0;
  p_m_Dispatcher[-1].m_Lock.m_depth = 0;
  *(&p_m_Dispatcher[-1].m_Lock.m_depth + 1) = 0;
  p_m_Dispatcher[-1].m_pActiveIterators = 0;
  LODWORD(p_m_Dispatcher[-1].m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc) = 0;
  *&p_m_Dispatcher[-2].m_EventListenerMap.m_Tree.m_Root = off_3FC4070;
  p_m_Dispatcher[-1].m_EventListenerMap.m_Tree.m_Elements.m_pMemory = 0;
  p_m_Dispatcher[-1].m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount = 0;
  *&p_m_Dispatcher[-1].m_EventListenerMap.m_Tree.m_Root = 0;
  *&p_m_Dispatcher[-1].m_EventListenerMap.m_Tree.m_FirstFree = 0;
  p_m_Dispatcher[-1].m_EventListenerMap.m_Tree.m_pElements = 0;
  CEventDispatcher_Base::CEventDispatcher_Base(p_m_Dispatcher);
  this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc = CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::IDLessFunc;
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned int>,unsigned int>::CUtlMemory(
    &this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements,
    0,
    1);
  m_pMemory = this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
  this->m_SlotDeletionDelegate.m_Closure.m_pthis = v1;
  this->m_Dispatcher.m_EventListenerMap.m_Tree.m_Root = -1;
  this->m_Dispatcher.m_EventListenerMap.m_Tree.m_NumElements = 0;
  this->m_Dispatcher.m_EventListenerMap.m_Tree.m_FirstFree = -1;
  this->m_Dispatcher.m_EventListenerMap.m_Tree.m_pElements = m_pMemory;
  this->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn = CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::SlotDeletionHandler;
  this->m_Dispatcher.m_EventListenerMap.m_Tree.m_LastAlloc.index = -1;
  this->m_ConnectedSlots.m_Size = 0;
  this->m_ConnectedSlots.m_Memory.m_pMemory = 0;
  this->m_ConnectedSlots.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSlots.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSlots.m_ownerID = 0;
  this->m_ConnectedSlots.m_depth = 0;
  this->m_ConnectedSlots.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSlots.Mutex_t.m_depth = 0;
  this->m_ConnectedSignalQueues.m_Size = 0;
  this->m_ConnectedSignalQueues.m_Memory.m_pMemory = 0;
  this->m_ConnectedSignalQueues.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSignalQueues.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSignalQueues.m_ownerID = 0;
  this->m_ConnectedSignalQueues.m_depth = 0;
  this->m_ConnectedSignalQueues.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSignalQueues.Mutex_t.m_depth = 0;
  this->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta = 0;
  this->_vptr_IGameSystem = off_3FCE0D0;  // vptr: CRenderGameSystem
  this->m_changedRenderComponentsMutex.m_ownerID = 0;
  this->m_changedRenderComponentsMutex.m_depth = 0;
  this->m_changedRenderComponents.m_Memory.m_pBlocks = 0;
  this->m_changedRenderComponents.m_Memory.m_nAllocationCount = 0;
  this->m_changedRenderComponents.m_Memory.m_nGrowSize = 0;
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>::Purge(&this->m_changedRenderComponents.m_Memory);
  this->m_changedRenderComponents.m_Memory.m_nGrowSize = 0;
  this->m_changedRenderComponents.m_LastAlloc.m_pBlockHeader = 0;
  p_m_sceneObjectUpdater = &this->m_sceneObjectUpdater;
  this->m_changedRenderComponents.m_LastAlloc.m_nIndex = 0;
  this->m_changedRenderComponents.m_Head = 0;
  p_m_Memory = &this->m_sceneObjectUpdater.m_activeItems[0][0].m_Memory;
  this->m_changedRenderComponents.m_Tail = 0;
  this->m_changedRenderComponents.m_FirstFree = 0;
  v7 = &this->m_sceneObjectUpdater.m_activeItems[0][1].m_Memory;
  this->m_changedRenderComponents.m_ElementCount = 0;
  this->m_changedRenderComponents.m_NumAlloced = 0;
  this->m_changedRenderComponents.m_pElements = 0;
  do
  {
    LODWORD(p_m_sceneObjectUpdater->_vptr_IGameSystem) = 0;
    v8 = p_m_sceneObjectUpdater;
    p_m_sceneObjectUpdater = (p_m_sceneObjectUpdater + 48);
    v9 = v8 - &this->m_sceneObjectUpdater;
    *(&p_m_Memory->m_pMemory + v9) = 0;
    *(&p_m_Memory->m_nAllocationCount + v9) = 0;
    *(&p_m_Memory->m_nGrowSize + v9) = 0;
    *(&this->m_sceneObjectUpdater.m_activeItems[0][1].m_Size + v9) = 0;
    *(&v7->m_pMemory + v9) = 0;
    *(&v7->m_nAllocationCount + v9) = 0;
    *(&v7->m_nGrowSize + v9) = 0;
  }
  while ( p_m_sceneObjectUpdater != &this->m_sceneObjectUpdater.m_workItems );
  this->m_sceneObjectUpdater.m_workItems.m_Memory.m_pBlocks = 0;
  this->m_sceneObjectUpdater.m_workItems.m_Memory.m_nAllocationCount = 0;
  this->m_sceneObjectUpdater.m_workItems.m_Memory.m_nGrowSize = 0;
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long>>::Purge(&this->m_sceneObjectUpdater.m_workItems.m_Memory);
  this->m_sceneObjectUpdater.m_workItems.m_Memory.m_nGrowSize = 0;
  this->m_sceneObjectUpdater.m_workItems.m_LastAlloc.m_pBlockHeader = 0;
  this->m_sceneObjectUpdater.m_workItems.m_LastAlloc.m_nIndex = 0;
  this->m_sceneObjectUpdater.m_workItems.m_Head = 0;
  this->m_sceneObjectUpdater.m_workItems.m_Tail = 0;
  this->m_sceneObjectUpdater.m_workItems.m_FirstFree = 0;
  this->m_sceneObjectUpdater.m_workItems.m_ElementCount = 0;
  this->m_sceneObjectUpdater.m_workItems.m_NumAlloced = 0;
  this->m_sceneObjectUpdater.m_workItems.m_pElements = 0;
  this->m_sceneObjectUpdater.m_bAllowAddsToActiveWorkList = 1;
  *this->m_sceneObjectUpdater.m_pWorkFrameCount = 0;
  *&this->m_sceneObjectUpdater.m_pWorkFrameCount[2] = 0;
  CRender::CRender(&this->m_RenderState);
  this->m_nLastTickSceneSystemFrameCount = 0;
  this->m_secondarySceneWorlds.m_Tree.m_NumElements = 0;
  this->m_secondarySceneWorlds.m_Tree.m_FirstFree = -1;
  this->m_secondarySceneWorlds.m_Tree.m_LastAlloc.index = -1;
  this->m_nLastFrameSceneSystemFrameCount = 0;
  this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory = 0;
  this->m_secondarySceneWorlds.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_secondarySceneWorlds.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_secondarySceneWorlds.m_Tree.m_Root = -1;
  this->m_secondarySceneWorlds.m_Tree.m_pElements = 0;
  this->m_bIsSFMRecording = 0;
  this->m_secondarySceneWorlds.m_Tree.m_LessFunc.m_LessFunc = CDefOps<CUtlStringToken>::LessFunc;
}


// CRenderGameSystem::~CRenderGameSystem  (line 71, @0x0000000001f57040, libserver.so)  // inlines: Purge, RemoveAll, ~CRender, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlSignaller, ~CUtlVector, ~CUtlVectorBase, ~CWorkListTransient
// calls: CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::~CUtlStack, CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> >::Purge, CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Purge, CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> >::Purge, CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >::~CUtlSignaller_Identified, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int>::Purge
// callers: CRenderGameSystem::~CRenderGameSystem
void __fastcall CRenderGameSystem::~CRenderGameSystem(CRenderGameSystem *const this)
{
  CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)> *p_m_secondarySceneWorlds; // rdi
  bool v3; // zf
  CUtlFixedLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t> *p_m_workItems; // rbx
  CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4> *p_m_sceneObjectUpdater; // r13
  CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> *p_m_nIndex; // rdi

  p_m_secondarySceneWorlds = &this->m_secondarySceneWorlds;
  *&p_m_secondarySceneWorlds[-49].m_Tree.m_Root = off_3FCE0D0;
  CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&p_m_secondarySceneWorlds->m_Tree);
  v3 = (this->m_secondarySceneWorlds.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_secondarySceneWorlds.m_Tree.m_FirstFree = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_secondarySceneWorlds.m_Tree.m_Elements);
    v3 = (this->m_secondarySceneWorlds.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_secondarySceneWorlds.m_Tree.m_LastAlloc.index = -1;
    if ( v3 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_secondarySceneWorlds.m_Tree.m_Elements);
  }
  else
  {
    this->m_secondarySceneWorlds.m_Tree.m_LastAlloc.index = -1;
  }
  this->m_RenderState._vptr_CRender = off_3FCE250;
  p_m_workItems = &this->m_sceneObjectUpdater.m_workItems;
  CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int>>::~CUtlStack(&this->m_RenderState.m_ViewStack);
  p_m_sceneObjectUpdater = &this->m_sceneObjectUpdater;
  CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long>>>::RemoveAll(&this->m_sceneObjectUpdater.m_workItems);
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long>>::Purge(&this->m_sceneObjectUpdater.m_workItems.m_Memory);
  if ( &this->m_sceneObjectUpdater.m_workItems != &this->m_sceneObjectUpdater )
  {
    do
    {
      while ( 1 )
      {
        v3 = (HIDWORD(p_m_workItems[-1].m_pElements) & 0xC0000000) == 0;
        LODWORD(p_m_workItems[-1].m_LastAlloc.m_pBlockHeader) = 0;
        if ( v3 )
        {
          CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Purge(&p_m_workItems[-1].m_LastAlloc.m_nIndex);
          if ( (HIDWORD(p_m_workItems[-1].m_pElements) & 0xC0000000) == 0 )
            break;
        }
        p_m_workItems = (p_m_workItems - 24);
        if ( p_m_sceneObjectUpdater == p_m_workItems )
          goto LABEL_9;
      }
      p_m_nIndex = &p_m_workItems[-1].m_LastAlloc.m_nIndex;
      p_m_workItems = (p_m_workItems - 24);
      CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Purge(p_m_nIndex);
    }
    while ( p_m_sceneObjectUpdater != p_m_workItems );
  }
LABEL_9:
  CUtlLinkedList<CRenderComponent *,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>>::RemoveAll(&this->m_changedRenderComponents);
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>::Purge(&this->m_changedRenderComponents.m_Memory);
  CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::~CUtlSignaller_Identified(&this->CUtlSignaller<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >);
  CUtlSlot::~CUtlSlot(&this->CUtlSlot);
  IGameSystem::~IGameSystem(this);
}


// CRenderGameSystem::~CRenderGameSystem  (line 71, @0x0000000001f571a0, libserver.so)
// calls: CRenderGameSystem::~CRenderGameSystem, operator delete
void __fastcall CRenderGameSystem::~CRenderGameSystem(CRenderGameSystem *const this)
{
  CRenderGameSystem::~CRenderGameSystem(this);
  operator delete(this);
}


// CRenderGameSystem::GameActivate  (line 79, @0x0000000001f2db00, libserver.so)  // inlines: CUtlDelegate<CRenderGameSystem, CRenderGameSystem>, Convert<CRenderGameSystem, void (CRenderGameSystem::*)(const ToolEvent_SFMRecordingStateChanged_t&), void (detail::GenericClass::*)()>, FastDelegate1<CRenderGameSystem, CRenderGameSystem>, FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>, FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>, RegisterGameToolEventHandler<ToolEvent_SFMRecordingStateChanged_t>, ResetLightStyles, UtlMakeDelegate<CRenderGameSystem, CRenderGameSystem, const ToolEvent_SFMRecordingStateChanged_t&, void>, bindmemfunc<CRenderGameSystem, void (CRenderGameSystem::*)(const ToolEvent_SFMRecordingStateChanged_t&)>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent, CRenderGameSystem::OnSFMRecordingStateChanged(ToolEvent_SFMRecordingStateChanged_t const&), INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_SFMRecordingStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
void __fastcall CRenderGameSystem::GameActivate(CRenderGameSystem *const this, const EventGameActivate_t *const msg)
{
  IToolGameSimulationDispatcher *v3; // r12
  __int64 v4; // rcx
  CUtlSlot *v5; // r13
  __int64 i; // rax
  _QWORD v7[8]; // [rsp+10h] [rbp-40h] BYREF

  v3 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    v4 = IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent;
    v7[0] = this;
    v5 = &this->CUtlSlot;
    v7[2] = 0;
    v7[1] = CRenderGameSystem::OnSFMRecordingStateChanged;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent == 0 )
    {
      v4 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_SFMRecordingStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 0, 1);
        v4 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent = v4;
    }
    (*(*v3 + 96LL))(v3, v5, v7, v4, 0);
  }
  for ( i = 0; i != 256; ++i )
    this->d_lightstylevalue[i] = 264;
}


// CRenderGameSystem::GameDeactivate  (line 94, @0x0000000001f2ed80, libserver.so)  // inlines: CUtlDelegate<CRenderGameSystem, CRenderGameSystem>, Convert<CRenderGameSystem, void (CRenderGameSystem::*)(const ToolEvent_SFMRecordingStateChanged_t&), void (detail::GenericClass::*)()>, FastDelegate1<CRenderGameSystem, CRenderGameSystem>, FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>, FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>, UnregisterGameToolEventHandler<ToolEvent_SFMRecordingStateChanged_t>, UtlMakeDelegate<CRenderGameSystem, CRenderGameSystem, const ToolEvent_SFMRecordingStateChanged_t&, void>, bindmemfunc<CRenderGameSystem, void (CRenderGameSystem::*)(const ToolEvent_SFMRecordingStateChanged_t&)>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent, CRenderGameSystem::OnSFMRecordingStateChanged(ToolEvent_SFMRecordingStateChanged_t const&), INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_SFMRecordingStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
void __fastcall CRenderGameSystem::GameDeactivate(
        CRenderGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  IToolGameSimulationDispatcher *v2; // rbx
  CUtlSlot *v3; // r12
  __int64 v4; // rcx
  CRenderGameSystem *thisa; // [rsp+10h] [rbp-30h] BYREF
  void (__fastcall *v6)(CRenderGameSystem *const, const ToolEvent_SFMRecordingStateChanged_t *const); // [rsp+18h] [rbp-28h]
  __int64 v7; // [rsp+20h] [rbp-20h]

  v2 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    thisa = this;
    v3 = &this->CUtlSlot;
    v7 = 0;
    v6 = CRenderGameSystem::OnSFMRecordingStateChanged;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent == 0 )
    {
      v4 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_SFMRecordingStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 0, 1);
        v4 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent = v4;
    }
    (*(*v2 + 104LL))(v2, v3, &thisa);
  }
}


// CRenderGameSystem::GameShutdown  (line 102, @0x0000000001f42a10, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, RemoveAll, operator[]
// calls: CRenderGameSystem::FreeSecondarySceneWorld, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll
void __fastcall CRenderGameSystem::GameShutdown(CRenderGameSystem *const this, const EventGameShutdown_t *const msg)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v5; // rdx
  unsigned __int16 m_Left; // cx
  CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)> *p_m_secondarySceneWorlds; // r13

  m_Root = this->m_secondarySceneWorlds.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    p_m_secondarySceneWorlds = &this->m_secondarySceneWorlds;
  }
  else
  {
    m_pMemory = this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
      v5 = m_Left;
    }
    p_m_secondarySceneWorlds = &this->m_secondarySceneWorlds;
    while ( 1 )
    {
      CRenderGameSystem::FreeSecondarySceneWorld(this, m_pMemory[v5].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_secondarySceneWorlds.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&p_m_secondarySceneWorlds->m_Tree);
}


// CRenderGameSystem::PreSpawnGroupLoad  (line 122, @0x0000000001f691f0, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Get, Insert, InsertAt, LeftChild, RightChild, V_memset, memset, operator(), operator[]
// calls: CSpawnGroupMgrGameSystem::GetOwnerSpawnGroup, CSpawnGroupMgrGameSystem::GetWorldGroupId, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// strings: "<unknown>"
// globals: g_pSpawnGroupMgr
void __fastcall CRenderGameSystem::PreSpawnGroupLoad(
        CRenderGameSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  SpawnGroupHandle_t m_SpawnGroupHandle; // esi
  WorldGroupId_t v5; // eax
  uint32 m_nHashCode; // r14d
  __int64 v7; // rax
  __int64 (__fastcall *v8)(ISceneSystem *, const char *); // r15
  const char *v9; // rax
  ISceneSystem *v10; // rdi
  const char *v11; // rsi
  ISceneWorld *v12; // rax
  unsigned __int16 m_Root; // r15
  unsigned __int16 m_Right; // ax
  bool v15; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v17; // r14
  unsigned __int16 v18; // ax
  int index; // [rsp+Ch] [rbp-64h]
  CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t search; // [rsp+20h] [rbp-50h] BYREF

  m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
  if ( m_SpawnGroupHandle != 0
    && CSpawnGroupMgrGameSystem::GetOwnerSpawnGroup(g_pSpawnGroupMgr, m_SpawnGroupHandle) == 0 )
  {
    v5.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
    m_nHashCode = v5.m_nHashCode;
    if ( v5.m_nHashCode != 0 )
    {
      search.key = v5;
      v7 = CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &this->m_secondarySceneWorlds.m_Tree,
             &search);
      if ( v7 == 0xFFFF )
      {
        v8 = *(*g_pSceneSystem + 304LL);
        if ( g_pStringTokenSystem != 0 )
        {
          v9 = (*(*g_pStringTokenSystem + 88LL))(g_pStringTokenSystem, m_nHashCode);
          v10 = g_pSceneSystem;
        }
        else
        {
          v10 = g_pSceneSystem;
          v9 = "";
        }
        v11 = "<unknown>";
        if ( *v9 != 0 )
          v11 = v9;
        v12 = v8(v10, v11);
        search.key.m_nHashCode = m_nHashCode;
        m_Root = this->m_secondarySceneWorlds.m_Tree.m_Root;
        *&search.elem.m_nRefCount = 0;
        search.elem.m_pSceneWorld = v12;
        if ( m_Root == 0xFFFF )
        {
          v17 = 0;
        }
        else
        {
          while ( 1 )
          {
            v15 = !this->m_secondarySceneWorlds.m_Tree.m_LessFunc.m_LessFunc(
                     &search,
                     &this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
            m_pMemory = this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory;
            if ( v15 )
            {
              m_Right = m_pMemory[m_Root].m_Right;
              v17 = 0;
            }
            else
            {
              m_Right = m_pMemory[m_Root].m_Left;
              v17 = 1;
            }
            if ( m_Right == 0xFFFF )
              break;
            m_Root = m_Right;
          }
        }
        v18 = CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                &this->m_secondarySceneWorlds.m_Tree,
                &search);
        index = v18;
        CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
          &this->m_secondarySceneWorlds.m_Tree,
          v18,
          m_Root,
          v17);
        v7 = index;
        ++this->m_secondarySceneWorlds.m_Tree.m_NumElements;
      }
      ++this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.m_nRefCount;
    }
  }
}


// CRenderGameSystem::PostSpawnGroupUnload  (line 146, @0x0000000001f693a0, libserver.so)  // inlines: Element, Find, FreeNode, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: CSpawnGroupMgrGameSystem::GetOwnerSpawnGroup, CSpawnGroupMgrGameSystem::GetWorldGroupId, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Find, CRenderGameSystem::FreeSecondarySceneWorld, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Unlink
// globals: g_pSpawnGroupMgr
void __fastcall CRenderGameSystem::PostSpawnGroupUnload(
        CRenderGameSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  SpawnGroupHandle_t m_SpawnGroupHandle; // esi
  WorldGroupId_t v5; // eax
  uint32 m_nHashCode; // ebx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t>::Node_t,short unsigned int> *v9; // rcx
  unsigned __int16 index; // [rsp+Ch] [rbp-54h]
  CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t search; // [rsp+10h] [rbp-50h] BYREF

  m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
  if ( m_SpawnGroupHandle != 0
    && CSpawnGroupMgrGameSystem::GetOwnerSpawnGroup(g_pSpawnGroupMgr, m_SpawnGroupHandle) == 0 )
  {
    v5.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
    m_nHashCode = v5.m_nHashCode;
    if ( v5.m_nHashCode != 0 )
    {
      search.key = v5;
      v7 = CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &this->m_secondarySceneWorlds.m_Tree,
             &search);
      v8 = v7;
      if ( v7 != 0xFFFF )
      {
        v9 = &this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory[v7];
        if ( v9->m_Data.elem.m_nRefCount-- == 1 )
        {
          index = v7;
          CRenderGameSystem::FreeSecondarySceneWorld(this, m_nHashCode);
          if ( v8 != 0xFFFF )
          {
            CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
              &this->m_secondarySceneWorlds.m_Tree,
              index);
            this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory[v8].m_Left = v8;
            this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory[v8].m_Right = this->m_secondarySceneWorlds.m_Tree.m_FirstFree;
            --this->m_secondarySceneWorlds.m_Tree.m_NumElements;
            this->m_secondarySceneWorlds.m_Tree.m_FirstFree = v8;
          }
        }
      }
    }
  }
}


// CRenderGameSystem::FreeSecondarySceneWorld  (line 172, @0x0000000001f429a0, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CRenderGameSystem::GameShutdown, CRenderGameSystem::PostSpawnGroupUnload
void __fastcall CRenderGameSystem::FreeSecondarySceneWorld(CRenderGameSystem *const this, WorldGroupId_t worldGroupId)
{
  unsigned __int16 v3; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t>::Node_t,short unsigned int> *v4; // rbx
  CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  search.key = worldGroupId;
  v3 = CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_secondarySceneWorlds.m_Tree,
         &search);
  if ( v3 != 0xFFFF )
  {
    v4 = &this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4->m_Data.elem.m_pSceneWorld != 0 )
    {
      (*(*g_pSceneSystem + 312LL))(g_pSceneSystem);
      v4->m_Data.elem.m_pSceneWorld = 0;
    }
  }
}


// CRenderGameSystem::DumpSecondarySceneWorlds  (line 190, @0x0000000001f428c0, libserver.so)  // inlines: Count, Element, FirstInorder, LeftChild, NextInorder, operator[]
// calls: Msg, CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// strings: "Listing %d secondary scene worlds:\n"
void __fastcall CRenderGameSystem::DumpSecondarySceneWorlds(CRenderGameSystem *const this)
{
  __int64 v2; // rsi
  unsigned int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // cx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t>::Node_t,short unsigned int> *v7; // rax
  ISceneWorld *m_pSceneWorld; // rdi
  const char *v9; // rdx
  unsigned int m_nRefCount; // r14d

  Msg("Listing %d secondary scene worlds:\n", this->m_secondarySceneWorlds.m_Tree.m_NumElements);
  m_Root = this->m_secondarySceneWorlds.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
      v5 = m_Left;
    }
    while ( 1 )
    {
      v7 = &m_pMemory[v5];
      m_pSceneWorld = v7->m_Data.elem.m_pSceneWorld;
      v9 = "";
      m_nRefCount = v7->m_Data.elem.m_nRefCount;
      if ( m_pSceneWorld != 0 )
        v9 = (*(*m_pSceneWorld + 112LL))(m_pSceneWorld, v2, "");
      Msg(&stru_32D9EEC.IPhysicsWorldEventListener, m_Root, v9, m_nRefCount);
      LOWORD(v5) = CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                     &this->m_secondarySceneWorlds.m_Tree,
                     m_Root);
      m_Root = v5;
      if ( v5 == 0xFFFF )
        break;
      m_pMemory = this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory;
      v5 = v5;
    }
  }
}


// CRenderGameSystem::GetSceneWorld  (line 212, @0x0000000001f42ad0, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CLightComponent::CreateLightObject, CEnvSky::UpdateSceneObjects, CRenderGameSystem::IsSceneObjectInSceneWorld
ISceneWorld *__fastcall CRenderGameSystem::GetSceneWorld(
        const CRenderGameSystem *const this,
        WorldGroupId_t worldGroupId)
{
  unsigned __int16 v3; // ax
  CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( worldGroupId.m_nHashCode == 0 )
    return (*(*g_pRenderService + 240LL))(g_pRenderService);
  search.key = worldGroupId;
  v3 = CUtlRBTree<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CRenderGameSystem::SecondarySceneWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_secondarySceneWorlds.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_secondarySceneWorlds.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_pSceneWorld;
}


// CRenderGameSystem::IsSceneObjectInSceneWorld  (line 224, @0x0000000001f42b40, libserver.so)
// calls: CRenderGameSystem::GetSceneWorld
bool __fastcall CRenderGameSystem::IsSceneObjectInSceneWorld(
        const CRenderGameSystem *const this,
        CSceneObject *pSceneObject,
        WorldGroupId_t worldGroupId)
{
  ISceneWorld *m_pWorld; // rbx

  m_pWorld = pSceneObject->m_pWorld;
  return m_pWorld == CRenderGameSystem::GetSceneWorld(this, worldGroupId);
}


// CRenderGameSystem::DidSceneObjectRenderSinceLastTick  (line 230, @0x0000000001f37860, libserver.so)
bool __fastcall CRenderGameSystem::DidSceneObjectRenderSinceLastTick(
        const CRenderGameSystem *const this,
        CSceneObject *pSceneObject)
{
  bool v2; // r12
  uint16 v5; // ax
  uint16 m_nGameRenderCounter; // dx

  v2 = 0;
  if ( pSceneObject != 0 )
  {
    v5 = (*(*g_pSceneSystem + 656LL))(g_pSceneSystem);
    m_nGameRenderCounter = pSceneObject->m_nGameRenderCounter;
    if ( m_nGameRenderCounter >= this->m_nLastTickSceneSystemFrameCount )
      return m_nGameRenderCounter <= v5;
  }
  return v2;
}


// CRenderGameSystem::DidSceneObjectRenderLastFrame  (line 252, @0x0000000001f378c0, libserver.so)
bool __fastcall CRenderGameSystem::DidSceneObjectRenderLastFrame(
        const CRenderGameSystem *const this,
        CSceneObject *pSceneObject)
{
  bool v2; // r12
  uint16 v5; // ax
  uint16 m_nGameRenderCounter; // dx

  v2 = 0;
  if ( pSceneObject != 0 )
  {
    v5 = (*(*g_pSceneSystem + 656LL))(g_pSceneSystem);
    m_nGameRenderCounter = pSceneObject->m_nGameRenderCounter;
    if ( m_nGameRenderCounter > this->m_nLastFrameSceneSystemFrameCount )
      return m_nGameRenderCounter <= v5;
  }
  return v2;
}


// CRenderGameSystem::InstallCommonUpdaterFields  (line 275, @0x0000000001f37920, libserver.so)  // inlines: Init
void __fastcall CRenderGameSystem::InstallCommonUpdaterFields(
        CRenderGameSystem *const this,
        CRenderGameSystem::SceneObjectUpdater_t *const infoOut,
        CSceneObject *pSceneObject,
        CEntityInstance *pOwner,
        bool bIsEntityRenderingEnabled,
        bool bIsRenderingEnabled,
        bool bIsViewModel,
        uint32 nSplitScreenFlags)
{
  infoOut->m_pSceneObject = pSceneObject;
  infoOut->m_pOwner = pOwner;
  infoOut->m_LightGroup.m_nHashCode = 0;
  infoOut->m_vColorTint.x = 1.0;
  infoOut->m_vColorTint.y = 1.0;
  infoOut->m_vColorTint.z = 1.0;
  infoOut->m_vColorTint.w = 1.0;
  *(infoOut + 76) = (4 * (bIsViewModel & 3))
                  | (16 * nSplitScreenFlags)
                  | bIsRenderingEnabled
                  | (2 * bIsEntityRenderingEnabled) & 2;
}


// CRenderGameSystem::InstallSceneObjectUpdater  (line 303, @0x0000000001f37980, libserver.so)
SceneObjectUpdaterHandle_t __fastcall CRenderGameSystem::InstallSceneObjectUpdater(
        CRenderGameSystem *const this,
        CSkeletonInstance *pInstance,
        CSceneObject *pSceneObject,
        bool bIsEntityRenderingEnabled,
        bool bIsViewModel,
        uint32 nSplitScreenFlags,
        int16 nRigidSceneObjectBone)
{
  return 0;
}


// CRenderGameSystem::InstallSceneObjectUpdater  (line 333, @0x0000000001f37990, libserver.so)
SceneObjectUpdaterHandle_t __fastcall CRenderGameSystem::InstallSceneObjectUpdater(
        CRenderGameSystem *const this,
        CGameSceneNode *pSceneNode,
        CSceneObject *pSceneObject,
        bool bIsEntityRenderingEnabled,
        bool bIsRenderingEnabled,
        float flScale,
        CEntityInstance *pOwner)
{
  return 0;
}


// CRenderGameSystem::InstallSceneObjectUpdater  (line 357, @0x0000000001f379a0, libserver.so)
SceneObjectUpdaterHandle_t __fastcall CRenderGameSystem::InstallSceneObjectUpdater(
        CRenderGameSystem *const this,
        CSceneObject *pSceneObject,
        bool bIsEntityRenderingEnabled,
        bool bIsRenderingEnabled,
        CEntityInstance *pOwner,
        bool bIsViewModel)
{
  return 0;
}


// CRenderGameSystem::RemoveSceneObjectUpdater  (line 378, @0x0000000001f379b0, libserver.so)  // inlines: Element, FastRemove, Free, GetIndex, IsIdxAfter, IsInBlock, IsInList, IsValidIterator, Remove, RemoveWorkItem, Unlink, memcpy, operator[]
// callers: CRenderComponent::RemoveSceneObjectUpdater
void __fastcall CRenderGameSystem::RemoveSceneObjectUpdater(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *m_pBlockHeader; // rax
  intp m_nIndex; // rdx
  intp m_nBlockSize; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *v7; // r8
  SceneObjectUpdaterHandle_t v8; // rax
  __int64 v9; // rax
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v10; // rdx
  CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *v11; // r8
  int v12; // eax
  int v13; // ecx

  v2 = *(hUpdater + 87);
  v3 = this->m_sceneObjectUpdater.m_pWorkFrameCount[v2];
  if ( v3 == *(hUpdater + 20) )
  {
    v10 = &this->m_sceneObjectUpdater.m_activeItems[v2][v3 & 1];
    v11 = v10->m_Memory.m_pMemory[v10->m_Size - 1];
    *(v11 + 21) = hUpdater[21] & 0xFFFFFF | *(v11 + 21) & 0xFF000000;
    v12 = (*(hUpdater + 21) << 8) >> 8;
    if ( v10->m_Size > 0 )
    {
      v13 = v10->m_Size - 1;
      if ( v12 != v13 )
      {
        v10->m_Memory.m_pMemory[v12] = v10->m_Memory.m_pMemory[v13];
        v13 = v10->m_Size - 1;
      }
      v10->m_Size = v13;
    }
  }
  if ( hUpdater != 0 )
  {
    m_pBlockHeader = this->m_sceneObjectUpdater.m_workItems.m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_sceneObjectUpdater.m_workItems.m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v7 = m_pBlockHeader + 1;
          if ( hUpdater < &m_pBlockHeader[1] || hUpdater >= v7 + 26 * m_nBlockSize )
          {
            while ( 1 )
            {
              m_pBlockHeader = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader == 0 )
                break;
              if ( hUpdater >= &m_pBlockHeader[1] && hUpdater < &m_pBlockHeader[1] + 26 * m_pBlockHeader->m_nBlockSize )
                goto LABEL_3;
            }
          }
          else if ( hUpdater > (v7 + 26 * m_nIndex) )
          {
            goto LABEL_3;
          }
        }
      }
    }
    v8 = *(hUpdater + 11);
    if ( hUpdater != v8 )
    {
      if ( v8 != 0 )
        *(v8 + 12) = *(hUpdater + 12);
      else
        this->m_sceneObjectUpdater.m_workItems.m_Head = *(hUpdater + 12);
      v9 = *(hUpdater + 12);
      if ( v9 != 0 )
        *(v9 + 88) = *(hUpdater + 11);
      else
        this->m_sceneObjectUpdater.m_workItems.m_Tail = *(hUpdater + 11);
      *(hUpdater + 12) = hUpdater;
      *(hUpdater + 11) = hUpdater;
      --this->m_sceneObjectUpdater.m_workItems.m_ElementCount;
    }
  }
LABEL_3:
  *(hUpdater + 12) = this->m_sceneObjectUpdater.m_workItems.m_FirstFree;
  this->m_sceneObjectUpdater.m_workItems.m_FirstFree = hUpdater;
}


// CRenderGameSystem::RenderWithViewModels  (line 394, @0x0000000001f5ecf0, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, MarkChanged, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
// callers: CRenderComponent::RenderWithViewModels
void __fastcall CRenderGameSystem::RenderWithViewModels(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater,
        bool bViewModel)
{
  bool v3; // zf
  unsigned __int8 v5; // dl
  char v6; // dl
  __int64 v7; // rax
  unsigned int v8; // r12d
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v9; // r13
  int m_Size; // r14d
  int v11; // eax
  SceneObjectUpdaterHandle_t *v12; // rax
  int v13; // eax

  v3 = !bViewModel;
  v5 = *(hUpdater + 76);
  if ( v3 )
  {
    if ( (v5 & 4) == 0 )
      return;
    v6 = (4 * ((v5 >> 2) & 2)) | v5 & 0xF3;
    *(hUpdater + 76) = v6;
    if ( (v6 & 2) == 0 )
      return;
  }
  else
  {
    if ( (v5 & 4) != 0 )
      return;
    v6 = (4 * ((v5 >> 2) & 2 | 1)) | v5 & 0xF3;
    *(hUpdater + 76) = v6;
    if ( (v6 & 2) == 0 )
      return;
  }
  if ( (v6 & 1) != 0 )
  {
    v7 = *(hUpdater + 87);
    v8 = this->m_sceneObjectUpdater.m_pWorkFrameCount[v7];
    if ( v8 != *(hUpdater + 20) )
    {
      v9 = &this->m_sceneObjectUpdater.m_activeItems[v7][v8 & 1];
      m_Size = v9->m_Size;
      v3 = v9->m_Size == this->m_sceneObjectUpdater.m_activeItems[v7][v8 & 1].m_Memory.m_nAllocationCount;
      v11 = v9->m_Size;
      if ( v3 )
      {
        CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
          &v9->m_Memory,
          1);
        v11 = v9->m_Size;
      }
      v9->m_Size = v11 + 1;
      v12 = &v9->m_Memory.m_pMemory[m_Size];
      if ( v12 != 0 )
        *v12 = hUpdater;
      v13 = *(hUpdater + 21);
      *(hUpdater + 20) = v8;
      *(hUpdater + 21) = m_Size & 0xFFFFFF | v13 & 0xFF000000;
    }
  }
}


// CRenderGameSystem::IsRenderingWithViewModels  (line 417, @0x0000000001f37b50, libserver.so)
// callers: CSkeletonInstance::GetRenderBounds, CSkeletonInstance::GetRenderBoundsWorldSpace
bool __fastcall CRenderGameSystem::IsRenderingWithViewModels(
        const CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater)
{
  return hUpdater != 0 && (hUpdater[19] & 4) != 0;
}


// CRenderGameSystem::IsRigidAnimatedSceneObjectWithSkeleton  (line 427, @0x0000000001f37b70, libserver.so)  // inlines: IsRigidAnimatedSceneObjectWithSkeleton
bool __fastcall CRenderGameSystem::IsRigidAnimatedSceneObjectWithSkeleton(
        const CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater)
{
  return *(hUpdater + 6) != -1;
}


// CRenderGameSystem::EnableSplitscreenRendering  (line 433, @0x0000000001f5e810, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, MarkChanged, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
void __fastcall CRenderGameSystem::EnableSplitscreenRendering(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater,
        uint32 nSplitscreenFlags)
{
  char v4; // al
  __int64 v5; // rax
  unsigned int v6; // r13d
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v7; // r12
  int m_Size; // r14d
  bool v9; // zf
  int v10; // eax
  SceneObjectUpdaterHandle_t *v11; // rax
  int v12; // eax

  if ( *(hUpdater + 76) >> 4 != nSplitscreenFlags )
  {
    v4 = (16 * nSplitscreenFlags) | hUpdater[19] & 0xF;
    *(hUpdater + 76) = v4;
    if ( (v4 & 2) != 0 && (v4 & 1) != 0 )
    {
      v5 = *(hUpdater + 87);
      v6 = this->m_sceneObjectUpdater.m_pWorkFrameCount[v5];
      if ( v6 != *(hUpdater + 20) )
      {
        v7 = &this->m_sceneObjectUpdater.m_activeItems[v5][v6 & 1];
        m_Size = v7->m_Size;
        v9 = v7->m_Size == this->m_sceneObjectUpdater.m_activeItems[v5][v6 & 1].m_Memory.m_nAllocationCount;
        v10 = v7->m_Size;
        if ( v9 )
        {
          CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
            &v7->m_Memory,
            1);
          v10 = v7->m_Size;
        }
        v7->m_Size = v10 + 1;
        v11 = &v7->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = hUpdater;
        v12 = *(hUpdater + 21);
        *(hUpdater + 20) = v6;
        *(hUpdater + 21) = m_Size & 0xFFFFFF | v12 & 0xFF000000;
      }
    }
  }
}


// CRenderGameSystem::SetSceneObjectColorTint  (line 444, @0x0000000001f5eaa0, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, MarkChanged, operator!=, operator=, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
// callers: CRenderComponent::SetColorTint
void __fastcall CRenderGameSystem::SetSceneObjectColorTint(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater,
        const Vector4D *const vTint)
{
  char v4; // al
  __int64 v5; // rax
  unsigned int v6; // r13d
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v7; // r12
  int m_Size; // r14d
  bool v9; // zf
  int v10; // eax
  SceneObjectUpdaterHandle_t *v11; // rax
  int v12; // eax

  if ( vTint->x != *(hUpdater + 14)
    || vTint->y != *(hUpdater + 15)
    || vTint->z != *(hUpdater + 16)
    || vTint->w != *(hUpdater + 17) )
  {
    hUpdater[14] = LODWORD(vTint->x);
    v4 = *(hUpdater + 76);
    hUpdater[15] = LODWORD(vTint->y);
    hUpdater[16] = LODWORD(vTint->z);
    hUpdater[17] = LODWORD(vTint->w);
    if ( (v4 & 2) != 0 && (v4 & 1) != 0 )
    {
      v5 = *(hUpdater + 87);
      v6 = this->m_sceneObjectUpdater.m_pWorkFrameCount[v5];
      if ( v6 != *(hUpdater + 20) )
      {
        v7 = &this->m_sceneObjectUpdater.m_activeItems[v5][v6 & 1];
        m_Size = v7->m_Size;
        v9 = v7->m_Size == this->m_sceneObjectUpdater.m_activeItems[v5][v6 & 1].m_Memory.m_nAllocationCount;
        v10 = v7->m_Size;
        if ( v9 )
        {
          CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
            &v7->m_Memory,
            1);
          v10 = v7->m_Size;
        }
        v7->m_Size = v10 + 1;
        v11 = &v7->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = hUpdater;
        v12 = *(hUpdater + 21);
        *(hUpdater + 20) = v6;
        *(hUpdater + 21) = m_Size & 0xFFFFFF | v12 & 0xFF000000;
      }
    }
  }
}


// CRenderGameSystem::SetSceneObjectLightGroup  (line 455, @0x0000000001f5e8f0, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, MarkChanged, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
// callers: CRenderComponent::SetLightGroup
void __fastcall CRenderGameSystem::SetSceneObjectLightGroup(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater,
        CUtlStringToken nLightGroup)
{
  char v4; // al
  __int64 v5; // rax
  unsigned int v6; // r13d
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v7; // r12
  int m_Size; // r14d
  bool v9; // zf
  int v10; // eax
  SceneObjectUpdaterHandle_t *v11; // rax
  int v12; // eax

  if ( nLightGroup.m_nHashCode != *(hUpdater + 18) )
  {
    v4 = *(hUpdater + 76);
    *(hUpdater + 18) = nLightGroup;
    if ( (v4 & 2) != 0 && (v4 & 1) != 0 )
    {
      v5 = *(hUpdater + 87);
      v6 = this->m_sceneObjectUpdater.m_pWorkFrameCount[v5];
      if ( v6 != *(hUpdater + 20) )
      {
        v7 = &this->m_sceneObjectUpdater.m_activeItems[v5][v6 & 1];
        m_Size = v7->m_Size;
        v9 = v7->m_Size == this->m_sceneObjectUpdater.m_activeItems[v5][v6 & 1].m_Memory.m_nAllocationCount;
        v10 = v7->m_Size;
        if ( v9 )
        {
          CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
            &v7->m_Memory,
            1);
          v10 = v7->m_Size;
        }
        v7->m_Size = v10 + 1;
        v11 = &v7->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = hUpdater;
        v12 = *(hUpdater + 21);
        *(hUpdater + 20) = v6;
        *(hUpdater + 21) = m_Size & 0xFFFFFF | v12 & 0xFF000000;
      }
    }
  }
}


// CRenderGameSystem::GetSceneObject  (line 470, @0x0000000001f37b80, libserver.so)
// callers: CRenderComponent::GetSceneObject
CSceneObject *__fastcall CRenderGameSystem::GetSceneObject(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater)
{
  if ( hUpdater != 0 )
    return *(hUpdater + 4);
  else
    return 0;
}


// CRenderGameSystem::GetSceneAnimatableObject  (line 487, @0x0000000001f37ba0, libserver.so)
CSceneAnimatableObject *__fastcall CRenderGameSystem::GetSceneAnimatableObject(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater)
{
  if ( *(hUpdater + 87) == 1 )
    return *(hUpdater + 4);
  else
    return 0;
}


// CRenderGameSystem::SetMaterialGroupHash  (line 504, @0x0000000001f5ebd0, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GetWorkItemType, GrowMemory, MarkChanged, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
void __fastcall CRenderGameSystem::SetMaterialGroupHash(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater,
        uint32 nMaterialGroupHash)
{
  __int64 v4; // rax
  char v5; // al
  unsigned int v6; // r12d
  __int64 v7; // rax
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v8; // r13
  int m_Size; // r14d
  bool v10; // zf
  int v11; // eax
  SceneObjectUpdaterHandle_t *v12; // rax
  int v13; // eax

  if ( hUpdater == 0 )
    return;
  v4 = *(hUpdater + 87);
  if ( v4 != 0 )
  {
    if ( v4 > 2u )
      return;
    if ( *(hUpdater + 2) == nMaterialGroupHash )
      return;
    *(hUpdater + 2) = nMaterialGroupHash;
    if ( (hUpdater[19] & 2) == 0 )
      return;
    if ( (hUpdater[19] & 1) == 0 )
      return;
    v6 = this->m_sceneObjectUpdater.m_pWorkFrameCount[v4];
    if ( v6 == *(hUpdater + 20) )
      return;
    v8 = &this->m_sceneObjectUpdater.m_activeItems[v4][v6 & 1];
    m_Size = v8->m_Size;
    v10 = v8->m_Size == this->m_sceneObjectUpdater.m_activeItems[v4][v6 & 1].m_Memory.m_nAllocationCount;
    v11 = v8->m_Size;
    if ( !v10 )
      goto LABEL_16;
  }
  else
  {
    if ( *hUpdater == nMaterialGroupHash )
      return;
    v5 = *(hUpdater + 76);
    *hUpdater = nMaterialGroupHash;
    if ( (v5 & 2) == 0 )
      return;
    if ( (v5 & 1) == 0 )
      return;
    v6 = this->m_sceneObjectUpdater.m_pWorkFrameCount[0];
    if ( v6 == *(hUpdater + 20) )
      return;
    v7 = v6 & 1;
    v8 = (&this->m_sceneObjectUpdater + 24 * v7);
    m_Size = v8->m_Size;
    v10 = v8->m_Size == this->m_sceneObjectUpdater.m_activeItems[0][v7].m_Memory.m_nAllocationCount;
    v11 = v8->m_Size;
    if ( !v10 )
      goto LABEL_16;
  }
  CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
    &v8->m_Memory,
    1);
  v11 = v8->m_Size;
LABEL_16:
  v8->m_Size = v11 + 1;
  v12 = &v8->m_Memory.m_pMemory[m_Size];
  if ( v12 != 0 )
    *v12 = hUpdater;
  v13 = *(hUpdater + 21);
  *(hUpdater + 20) = v6;
  *(hUpdater + 21) = m_Size & 0xFFFFFF | v13 & 0xFF000000;
}


// CRenderGameSystem::SetMeshGroupMask  (line 534, @0x0000000001f37bc0, libserver.so)
// callers: CModelState::OnMeshGroupMaskChanged
void __fastcall CRenderGameSystem::SetMeshGroupMask(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater,
        MeshGroupMask_t nMeshGroupMask)
{
  unsigned __int8 v3; // al

  v3 = *(hUpdater + 87);
  if ( v3 != 0 )
  {
    if ( v3 <= 2u )
      *(hUpdater + 2) = nMeshGroupMask;
  }
  else
  {
    *(hUpdater + 1) = nMeshGroupMask;
  }
}


// CRenderGameSystem::SetForceLOD  (line 552, @0x0000000001f5e9c0, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GetWorkItemType, GrowMemory, MarkChanged, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
void __fastcall CRenderGameSystem::SetForceLOD(
        CRenderGameSystem *const this,
        SceneObjectUpdaterHandle_t hUpdater,
        int nForceLOD)
{
  __int64 v4; // rcx
  char v5; // si
  char v6; // al
  unsigned int v7; // r13d
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v8; // r12
  int m_Size; // r14d
  int v10; // eax
  SceneObjectUpdaterHandle_t *v11; // rax
  int v12; // eax

  v4 = *(hUpdater + 87);
  if ( v4 <= 2u )
  {
    v5 = *(hUpdater + 77);
    if ( ((16 * v5) >> 4) != nForceLOD )
    {
      *(hUpdater + 77) = nForceLOD & 0xF | v5 & 0xF0;
      v6 = *(hUpdater + 76);
      if ( (v6 & 2) != 0 && (v6 & 1) != 0 )
      {
        v7 = this->m_sceneObjectUpdater.m_pWorkFrameCount[v4];
        if ( v7 != *(hUpdater + 20) )
        {
          v8 = &this->m_sceneObjectUpdater.m_activeItems[v4][v7 & 1];
          m_Size = v8->m_Size;
          v10 = v8->m_Size;
          if ( v8->m_Size == this->m_sceneObjectUpdater.m_activeItems[v4][v7 & 1].m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
              &this->m_sceneObjectUpdater.m_activeItems[v4][v7 & 1].m_Memory,
              1);
            v10 = v8->m_Size;
          }
          v8->m_Size = v10 + 1;
          v11 = &v8->m_Memory.m_pMemory[m_Size];
          if ( v11 != 0 )
            *v11 = hUpdater;
          v12 = *(hUpdater + 21);
          *(hUpdater + 20) = v7;
          *(hUpdater + 21) = m_Size & 0xFFFFFF | v12 & 0xFF000000;
        }
      }
    }
  }
}


// CRenderGameSystem::OnSFMRecordingStateChanged  (line 1016, @0x0000000001f2a140, libserver.so)
void __fastcall CRenderGameSystem::OnSFMRecordingStateChanged(
        CRenderGameSystem *const this,
        const ToolEvent_SFMRecordingStateChanged_t *const msg)
{
  this->m_bIsSFMRecording = *(msg + 24);
}


// CRenderGameSystem::UpdateLocalPlayerVisibility  (line 1021, @0x0000000001f37bf0, libserver.so)
void __fastcall CRenderGameSystem::UpdateLocalPlayerVisibility(CRenderGameSystem *const this)
{
  ;
}


// ComputeViewMatrices  (line 1048, @0x0000000001f2ee30, libserver.so)  // inlines: ComputeViewMatrix, MatrixRotate, MatrixTranslate, Vector, operator-
// calls: VMatrix::operator=, MatrixBuildRotationAboutAxis, MatrixMultiply, MatrixBuildTranslation, MatrixBuildPerspectiveX, __cxa_guard_acquire, __cxa_guard_release, MatrixBuildPerspectiveOffCenterX, MatrixBuildOrtho
// callers: CRenderGameSystem::GetMatricesForView, CRender::Push3DView
// globals: `guard variable for'ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation, ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::bDidInit, ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation
float __fastcall ComputeViewMatrices(
        VMatrix *pWorldToView,
        VMatrix *pViewToProjection,
        VMatrix *pWorldToProjection,
        const CViewSetup *const viewSetup)
{
  float v4; // xmm1_4
  double v5; // xmm8_8
  float y; // xmm2_4
  float x; // xmm3_4
  double v10; // xmm4_8
  double v11; // xmm6_8
  int height; // eax
  float v14; // xmm1_4
  float flAspectRatio; // [rsp+2Ch] [rbp-C4h]
  Vector vAxisOfRot; // [rsp+30h] [rbp-C0h] BYREF
  VMatrix dst; // [rsp+40h] [rbp-B0h] BYREF
  VMatrix mOther; // [rsp+80h] [rbp-70h] BYREF

  flAspectRatio = viewSetup->m_flAspectRatio;
  if ( flAspectRatio == 0.0 && (height = viewSetup->height, flAspectRatio = 1.0, height != 0) )
  {
    flAspectRatio = viewSetup->width / height;
    if ( `guard variable for'ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation != 0 )
      goto LABEL_3;
  }
  else if ( `guard variable for'ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation != 0 )
  {
    goto LABEL_3;
  }
  if ( __cxa_guard_acquire(&`guard variable for'ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation) != 0 )
    __cxa_guard_release(&`guard variable for'ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation);
LABEL_3:
  if ( ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::bDidInit == 0 )
  {
    *&mOther.m[0][0] = 1065353216;
    mOther.m[0][2] = 0.0;
    MatrixBuildRotationAboutAxis(&ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation, &mOther, v4);
    vAxisOfRot.x = 0.0;
    vAxisOfRot.y = 0.0;
    vAxisOfRot.z = 1.0;
    MatrixBuildRotationAboutAxis(&dst, &vAxisOfRot, v14);
    MatrixMultiply(&ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation, &dst, &mOther);
    VMatrix::operator=(&ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation, &mOther);
    ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::bDidInit = 1;
  }
  VMatrix::operator=(pWorldToView, &ComputeViewMatrix(VMatrix *,Vector const&,QAngle const&)::baseRotation);
  vAxisOfRot.x = 1.0;
  vAxisOfRot.y = 0.0;
  vAxisOfRot.z = 0.0;
  MatrixBuildRotationAboutAxis(&dst, &vAxisOfRot, -0.0);
  MatrixMultiply(pWorldToView, &dst, &mOther);
  VMatrix::operator=(pWorldToView, &mOther);
  vAxisOfRot.x = 0.0;
  vAxisOfRot.y = 1.0;
  vAxisOfRot.z = 0.0;
  MatrixBuildRotationAboutAxis(&dst, &vAxisOfRot, -0.0);
  MatrixMultiply(pWorldToView, &dst, &mOther);
  VMatrix::operator=(pWorldToView, &mOther);
  vAxisOfRot.x = 0.0;
  vAxisOfRot.y = 0.0;
  vAxisOfRot.z = 1.0;
  MatrixBuildRotationAboutAxis(&dst, &vAxisOfRot, -0.0);
  MatrixMultiply(pWorldToView, &dst, &mOther);
  VMatrix::operator=(pWorldToView, &mOther);
  y = viewSetup->origin.y;
  x = viewSetup->origin.x;
  vAxisOfRot.z = -viewSetup->origin.z;
  vAxisOfRot.y = -y;
  vAxisOfRot.x = -x;
  MatrixBuildTranslation(&dst, &vAxisOfRot);
  MatrixMultiply(pWorldToView, &dst, &mOther);
  VMatrix::operator=(pWorldToView, &mOther);
  if ( viewSetup->m_bOrtho )
  {
    MatrixBuildOrtho(
      pViewToProjection,
      viewSetup->m_OrthoTop,
      viewSetup->m_OrthoRight,
      viewSetup->m_OrthoBottom,
      viewSetup->zNear,
      viewSetup->zFar,
      v11);
  }
  else if ( (*(viewSetup + 1192) & 1) != 0 )
  {
    MatrixBuildPerspectiveOffCenterX(
      pViewToProjection,
      flAspectRatio,
      viewSetup->zNear,
      viewSetup->zFar,
      viewSetup->m_flOffCenterBottom,
      viewSetup->m_flOffCenterTop,
      viewSetup->m_flOffCenterLeft,
      viewSetup->m_flOffCenterRight,
      v5);
  }
  else
  {
    MatrixBuildPerspectiveX(pViewToProjection, flAspectRatio, viewSetup->zNear, viewSetup->zFar, v10);
  }
  MatrixMultiply(pViewToProjection, pWorldToView, pWorldToProjection);
  return flAspectRatio;
}


// CRenderGameSystem::GetMatricesForView  (line 1100, @0x0000000001f37c00, libserver.so)  // inlines: ComputeWorldToScreenMatrix, Init, VMatrix
// calls: ComputeViewMatrices, MatrixMultiply
// globals: g_ProjectionToOffset
void __fastcall CRenderGameSystem::GetMatricesForView(
        CRenderGameSystem *const this,
        const CViewSetup *const view,
        VMatrix *pWorldToView,
        VMatrix *pViewToProjection,
        VMatrix *pWorldToProjection,
        VMatrix *pWorldToPixels)
{
  unsigned int v9; // xmm2_4
  float x; // xmm3_4
  unsigned int v11; // xmm0_4
  VMatrix src1; // [rsp+0h] [rbp-A0h] BYREF
  VMatrix dst; // [rsp+40h] [rbp-60h] BYREF

  ComputeViewMatrices(pWorldToView, pViewToProjection, pWorldToProjection, view);
  *&v9 = view->height;
  x = view->x;
  *&v11 = view->width;
  src1.m[1][3] = view->y;
  *&src1.m[1][1] = v9;
  src1.m[0][3] = x;
  *&src1.m[0][0] = v11;
  src1.m[0][2] = 0.0;
  src1.m[1][0] = 0.0;
  src1.m[2][0] = 0.0;
  *&src1.m[2][1] = 0x3F80000000000000LL;
  src1.m[2][3] = 0.0;
  *&src1.m[3][0] = 0;
  *&src1.m[3][2] = 0x3F80000000000000LL;
  MatrixMultiply(&src1, &g_ProjectionToOffset, &dst);
  MatrixMultiply(&dst, pWorldToProjection, pWorldToPixels);
}


// CRenderGameSystem::Push3DView  (line 1107, @0x0000000001f57ce0, libserver.so)
// calls: CRender::Push3DView
void __fastcall CRenderGameSystem::Push3DView(
        CRenderGameSystem *const this,
        const CViewSetup *const view,
        int nFlags,
        ITexture *pRenderTarget,
        VPlane *frustumPlanes)
{
  CRender::Push3DView(&this->m_RenderState, view, nFlags, pRenderTarget, frustumPlanes);
}


// CRenderGameSystem::Push2DView  (line 1112, @0x0000000001f58730, libserver.so)
// calls: CRender::Push2DView
void __fastcall CRenderGameSystem::Push2DView(
        CRenderGameSystem *const this,
        const CViewSetup *const view,
        int nFlags,
        ITexture *pRenderTarget,
        VPlane *frustumPlanes)
{
  CRender::Push2DView(&this->m_RenderState, view, nFlags, pRenderTarget, frustumPlanes);
}


// CRenderGameSystem::PopView  (line 1117, @0x0000000001f38020, libserver.so)
// calls: CRender::PopView
void __fastcall CRenderGameSystem::PopView(CRenderGameSystem *const this, VPlane *frustumPlanes)
{
  CRender::PopView(&this->m_RenderState, frustumPlanes);
}


// CRenderGameSystem::ViewMatrix  (line 1122, @0x0000000001f2a150, libserver.so)  // inlines: Element, Top, ViewMatrix, operator[]
const VMatrix *__fastcall CRenderGameSystem::ViewMatrix(CRenderGameSystem *const this)
{
  int m_Size; // edx
  const VMatrix *result; // rax

  m_Size = this->m_RenderState.m_ViewStack.m_Size;
  result = &this->m_RenderState.m_matrixView;
  if ( m_Size > 1 )
    return &this->m_RenderState.m_ViewStack.m_Memory.m_pMemory[m_Size - 1].m_matrixView;
  return result;
}


// CRenderGameSystem::AnimateLight  (line 1136, @0x0000000001f37d00, libserver.so)  // inlines: rendertime
// strings: "lightstyle"
void __fastcall CRenderGameSystem::AnimateLight(CRenderGameSystem *const this)
{
  __int64 v2; // r15
  CGlobalVars *v3; // rbx
  int v4; // r14d
  __int64 i; // rbx
  int v6; // eax
  _BYTE *v7; // rcx
  int v8; // esi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int length[13]; // [rsp+Ch] [rbp-34h] BYREF

  v2 = (*(g_pNetworkStringTable->_vptr_IAppSystem + 15))(g_pNetworkStringTable, "lightstyle");
  if ( v2 != 0 )
  {
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_RENDERTIME_CALLED_DURING_SIMULATION);
      }
      v4 = (10.0 * v3->m_flRenderTime);
    }
    else
    {
      v4 = 0;
    }
    for ( i = 0; i != 64; ++i )
    {
      while ( 1 )
      {
        v7 = (*(*v2 + 88LL))(v2, i, length);
        v8 = --length[0];
        if ( v7 != 0 && *v7 != 0 )
          break;
        this->d_lightstylevalue[i++] = 256;
        if ( i == 64 )
          return;
      }
      v6 = 22 * (v7[v4 % v8] - 97);
      if ( this->d_lightstylevalue[i] != v6 )
        this->d_lightstylevalue[i] = v6;
    }
  }
}


// CRenderGameSystem::ResetLightStyles  (line 1171, @0x0000000001f37e20, libserver.so)
void __fastcall CRenderGameSystem::ResetLightStyles(CRenderGameSystem *const this)
{
  __int64 i; // rax

  for ( i = 0; i != 256; ++i )
    this->d_lightstylevalue[i] = 264;
}


// CRenderGameSystem::StaticShutdown  (line 1180, @0x0000000001f37e50, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<RenderAttrGatherInfo_t, int>::Purge
// globals: CRenderGameSystem::ms_entityRenderAttrGatherTable
void __cdecl CRenderGameSystem::StaticShutdown()
{
  CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Size = 0;
  if ( (CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<RenderAttrGatherInfo_t,int>::Purge(&CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Memory);
}


// CRenderGameSystem::BuildEntityRenderAttrGatherTable  (line 1185, @0x0000000001f64b00, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ConvertToExternalMemory, CopyConstruct<RenderAttrGatherInfo_t>, Count, Element, Get, GetAllPtrs, GetPtr, GetValue, GrowMemory, IsPresent, MakeStringToken, Purge, Purge_FixedGrowable, RemoveAll, RenderAttrGatherInfo_t, SchemaMetaGetAllPtrs2<RenderAttrUpdater_t*>, SchemaMetaGetPtr2, SchemaMetaIsPresent2, SchemaTypeOf<bool>, SchemaTypeOf<double>, SchemaTypeOf<float>, SchemaTypeOf<int>, SchemaTypeOf<unsigned int>, SchemaTypeScope, V_memcmp, _V_strcmp, operator[], ~CSchemaFieldIterator, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSchemaFieldIterator::CSchemaFieldIterator, CSchemaFieldIterator::IsValid, CSchemaFieldIterator::GetRawFieldHandle, CSchemaFieldIterator::GetFieldMemoryOffset, CSchemaFieldIterator::GetType, CSchemaFieldIterator::Advance, MurmurHash2LowerCase, RegisterStringToken, SchemaTypeOf<Vector>, SchemaTypeOf<Vector4D>, CUtlMemory<RenderAttrGatherInfo_t, int>::Grow, GetNameOfModule (22 total)
// callers: CRenderComponent::Connect
// strings: "MRenderAttr", "MRenderAttrUpdater"
// globals: SchemaTypeOf<int>(void)::s_pTypeOf, SchemaTypeOf<uint>(void)::s_pTypeOf, SchemaTypeOf<bool>(void)::s_pTypeOf, SchemaTypeOf<float>(void)::s_pTypeOf, SchemaTypeOf<double>(void)::s_pTypeOf, CRenderGameSystem::ms_entityRenderAttrGatherTable
void __fastcall CRenderGameSystem::BuildEntityRenderAttrGatherTable(
        CRenderGameSystem *const this,
        const CSchemaClassBindingBase *pBinding,
        int *pTableOffsetOut,
        int *pRenderAttrCountOut)
{
  int v4; // r12d
  FieldIntrospectionHandle_t RawFieldHandle; // rax
  unsigned int v6; // ecx
  const char **m_pImplElements; // rdx
  __int64 v8; // r8
  FieldIntrospectionHandle_t v9; // rax
  unsigned int v10; // ecx
  char *v11; // rdx
  __int64 v12; // r8
  const char **v13; // rax
  const char *v14; // r14
  uint32 v15; // r15d
  CSchemaType *Type; // r14
  int m_Size; // eax
  __int64 v18; // r14
  bool v19; // zf
  RenderAttrGatherInfo_t *v20; // r14
  unsigned int v21; // edx
  const char **v22; // rax
  __int64 v23; // r8
  unsigned int v24; // edx
  char *v25; // rax
  __int64 v26; // r8
  CSchemaType *v27; // r14
  CSchemaType *v28; // r14
  char v29; // al
  CSchemaType *v30; // r14
  CSchemaType *v31; // rax
  char v32; // al
  CSchemaType *v33; // r14
  __int64 v34; // rax
  char v35; // al
  CSchemaType *v36; // r14
  CSchemaType *v37; // rsi
  char v38; // al
  CSchemaType *v39; // r14
  CSchemaType *v40; // rsi
  const char *NameOfModule; // rax
  __int64 v42; // rax
  uint32 v43; // eax
  CSchemaClassInfo *m_pClassInfo_N; // rdi
  __int64 v45; // r13
  void (*pFunc)(void *, void *, RenderAttrType_t *); // r15
  int v47; // eax
  __int64 v48; // rbx
  RenderAttrGatherInfo_t *v49; // rbx
  uint32 v50; // r14d
  RenderAttrUpdater_t *v51; // rax
  const char *pName; // rbx
  int v53; // ebx
  int v54; // r14d
  RenderAttrGatherInfo_t *m_pMemory; // r15
  int v56; // r13d
  uint32 nNameHash; // r12d
  ISchemaSystemTypeScope *v58; // rax
  int v59; // r14d
  ISchemaSystemTypeScope *v60; // rax
  ISchemaSystemTypeScope *v61; // rax
  const char *v62; // rax
  __int64 v63; // rax
  __int64 (__fastcall *v67)(ISchemaSystem *, const char *); // [rsp+20h] [rbp-160h]
  __int64 (__fastcall *v68)(ISchemaSystem *, const char *); // [rsp+20h] [rbp-160h]
  int nOffset; // [rsp+28h] [rbp-158h]
  uint16 FieldMemoryOffset; // [rsp+30h] [rbp-150h]
  CUtlMemory<RenderAttrGatherInfo_t,int> *v71; // [rsp+30h] [rbp-150h]
  unsigned __int8 (__fastcall *n)(CSchemaType *); // [rsp+38h] [rbp-148h]
  __int16 na; // [rsp+38h] [rbp-148h]
  unsigned __int8 (__fastcall *nb)(CSchemaType *); // [rsp+38h] [rbp-148h]
  __int64 (__fastcall *nc)(CSchemaType *); // [rsp+38h] [rbp-148h]
  __int64 (__fastcall *nd)(CSchemaType *, CSchemaType *); // [rsp+38h] [rbp-148h]
  __int64 (__fastcall *ne)(CSchemaType *, __int64); // [rsp+38h] [rbp-148h]
  __int64 (__fastcall *nh)(CSchemaType *, CSchemaType *); // [rsp+38h] [rbp-148h]
  unsigned __int8 (__fastcall *ni)(CSchemaType *, CSchemaType *); // [rsp+38h] [rbp-148h]
  int nf; // [rsp+38h] [rbp-148h]
  __int64 ng; // [rsp+38h] [rbp-148h]
  CUtlVector<RenderAttrGatherInfo_t,CUtlMemory<RenderAttrGatherInfo_t,int> > newTable; // [rsp+40h] [rbp-140h] BYREF
  CUtlVector<RenderAttrUpdater_t*,CUtlMemory<RenderAttrUpdater_t*,int> > renderAttrUpdaters; // [rsp+60h] [rbp-120h] BYREF
  CSchemaFieldIterator it; // [rsp+80h] [rbp-100h] BYREF
  unsigned __int64 v85; // [rsp+148h] [rbp-38h]

  v85 = __readfsqword(0x28u);
  newTable.m_Size = 0;
  newTable.m_Memory.m_pMemory = 0;
  newTable.m_Memory.m_nAllocationCount = 0;
  newTable.m_Memory.m_nGrowSize = 0;
  CSchemaFieldIterator::CSchemaFieldIterator(&it, pBinding, SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
  v4 = 0;
  while ( CSchemaFieldIterator::IsValid(&it) )
  {
    RawFieldHandle = CSchemaFieldIterator::GetRawFieldHandle(&it);
    v6 = abs32(RawFieldHandle->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
    if ( v6 != 0 )
    {
      m_pImplElements = RawFieldHandle->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
      v8 = &m_pImplElements[4 * v6];
      while ( strcmp(*m_pImplElements, "MRenderAttr") != 0 )
      {
        m_pImplElements += 4;
        if ( m_pImplElements == v8 )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      v21 = abs32(RawFieldHandle->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
      if ( v21 == 0 )
        goto LABEL_23;
      v22 = RawFieldHandle->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
      v23 = &v22[4 * v21];
      while ( strcmp(*v22, "MRenderAttr") != 0 )
      {
        v22 += 4;
        if ( v22 == v23 )
          goto LABEL_23;
      }
    }
    FieldMemoryOffset = CSchemaFieldIterator::GetFieldMemoryOffset(&it);
    v9 = CSchemaFieldIterator::GetRawFieldHandle(&it);
    v10 = abs32(v9->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
    if ( v10 != 0 )
    {
      v11 = v9->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
      v12 = &v11[32 * v10];
      while ( strcmp(*v11, "MRenderAttr") != 0 )
      {
        v11 += 32;
        if ( v11 == v12 )
          goto LABEL_29;
      }
      v13 = *(v11 + 3);
      if ( v13 == 0 )
      {
LABEL_34:
        v14 = "";
        v15 = 0;
        if ( asc_32DB004[2] == 0 )
          goto LABEL_14;
        goto LABEL_35;
      }
    }
    else
    {
LABEL_29:
      v24 = abs32(v9->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
      if ( v24 == 0 )
        goto LABEL_34;
      v25 = v9->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
      v26 = &v25[32 * v24];
      while ( strcmp(*v25, "MRenderAttr") != 0 )
      {
        v25 += 32;
        if ( v25 == v26 )
          goto LABEL_34;
      }
      v13 = *(v25 + 3);
      if ( v13 == 0 )
        goto LABEL_34;
    }
    v14 = *v13;
    if ( *v13 == 0 )
    {
      v15 = 0;
      goto LABEL_14;
    }
    v15 = 0;
    if ( *v14 != 0 )
    {
LABEL_35:
      v15 = MurmurHash2LowerCase(v14, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(v15, v14, 0, 1);
    }
LABEL_14:
    Type = CSchemaFieldIterator::GetType(&it);
    n = *(*Type + 112LL);
    if ( SchemaTypeOf<int>(void)::s_pTypeOf == 0 )
    {
      v67 = *(*g_pSchemaSystem + 104LL);
      NameOfModule = GetNameOfModule();
      v42 = v67(g_pSchemaSystem, NameOfModule);
      SchemaTypeOf<int>(void)::s_pTypeOf = (*(*v42 + 40LL))(v42, 7);
    }
    if ( n(Type) != 0 )
      goto LABEL_17;
    v27 = CSchemaFieldIterator::GetType(&it);
    nb = *(*v27 + 112LL);
    if ( SchemaTypeOf<unsigned int>(void)::s_pTypeOf == 0 )
    {
      v58 = SchemaTypeScope();
      SchemaTypeOf<unsigned int>(void)::s_pTypeOf = (*(*v58 + 40LL))(v58, 8);
    }
    if ( nb(v27) != 0 )
    {
LABEL_17:
      na = 1;
    }
    else
    {
      v28 = CSchemaFieldIterator::GetType(&it);
      nc = *(*v28 + 112LL);
      if ( SchemaTypeOf<bool>(void)::s_pTypeOf == 0 )
      {
        v60 = SchemaTypeScope();
        SchemaTypeOf<bool>(void)::s_pTypeOf = (*(*v60 + 40LL))(v60, 13);
      }
      v29 = nc(v28);
      na = 0;
      if ( v29 == 0 )
      {
        v30 = CSchemaFieldIterator::GetType(&it);
        nd = *(*v30 + 112LL);
        v31 = SchemaTypeOf<float>(void)::s_pTypeOf;
        if ( SchemaTypeOf<float>(void)::s_pTypeOf == 0 )
        {
          v61 = SchemaTypeScope();
          v31 = (*(*v61 + 40LL))(v61, 11);
          SchemaTypeOf<float>(void)::s_pTypeOf = v31;
        }
        v32 = nd(v30, v31);
        na = 2;
        if ( v32 == 0 )
        {
          v33 = CSchemaFieldIterator::GetType(&it);
          ne = *(*v33 + 112LL);
          v34 = SchemaTypeOf<double>(void)::s_pTypeOf;
          if ( SchemaTypeOf<double>(void)::s_pTypeOf == 0 )
          {
            v68 = *(*g_pSchemaSystem + 104LL);
            v62 = GetNameOfModule();
            v63 = v68(g_pSchemaSystem, v62);
            v34 = (*(*v63 + 40LL))(v63, 12);
            SchemaTypeOf<double>(void)::s_pTypeOf = v34;
          }
          v35 = ne(v33, v34);
          na = 3;
          if ( v35 == 0 )
          {
            v36 = CSchemaFieldIterator::GetType(&it);
            nh = *(*v36 + 112LL);
            v37 = SchemaTypeOf<Vector>();
            v38 = nh(v36, v37);
            na = 4;
            if ( v38 == 0 )
            {
              v39 = CSchemaFieldIterator::GetType(&it);
              ni = *(*v39 + 112LL);
              v40 = SchemaTypeOf<Vector4D>();
              if ( ni(v39, v40) == 0 )
                goto LABEL_23;
              na = 5;
            }
          }
        }
      }
    }
    m_Size = newTable.m_Size;
    if ( newTable.m_Size == newTable.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<RenderAttrGatherInfo_t,int>::Grow(&newTable.m_Memory, 1);
      m_Size = newTable.m_Size;
    }
    v18 = newTable.m_Size;
    v19 = &newTable.m_Memory.m_pMemory[v18] == 0;
    v20 = &newTable.m_Memory.m_pMemory[v18];
    newTable.m_Size = m_Size + 1;
    if ( !v19 )
    {
      v20->nNameHash = v15;
      v20->pUpdaterFunc = 0;
      v20->dataType = na;
      v20->nByteOffset = FieldMemoryOffset;
    }
    ++v4;
LABEL_23:
    CSchemaFieldIterator::Advance(&it);
  }
  nf = v4;
  it.m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  v43 = it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize & 0xC0000000;
  if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount < 0
    || it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory == &it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory )
  {
    if ( v43 == 0 )
      CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Purge(&it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory);
  }
  else if ( it.m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory != 0 && v43 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  renderAttrUpdaters.m_Size = 0;
  renderAttrUpdaters.m_Memory.m_pMemory = 0;
  renderAttrUpdaters.m_Memory.m_nAllocationCount = 0;
  m_pClassInfo_N = pBinding->m_pClassInfo_N;
  renderAttrUpdaters.m_Memory.m_nGrowSize = 0;
  CSchemaClassInfo::MetaGetAllPtrs<RenderAttrUpdater_t *>(
    m_pClassInfo_N,
    "MRenderAttrUpdater",
    &renderAttrUpdaters,
    SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
    0);
  if ( renderAttrUpdaters.m_Size <= 0 )
  {
    if ( v4 != 0 )
      goto LABEL_70;
    v59 = -1;
    *pRenderAttrCountOut = 0;
  }
  else
  {
    v45 = 0;
    do
    {
      v50 = 0;
      v51 = renderAttrUpdaters.m_Memory.m_pMemory[v45];
      pName = v51->pName;
      if ( v51->pName != 0 && *pName != 0 )
      {
        v50 = MurmurHash2LowerCase(v51->pName, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
          RegisterStringToken(v50, pName, 0, 1);
        v51 = renderAttrUpdaters.m_Memory.m_pMemory[v45];
      }
      pFunc = v51->pFunc;
      v47 = newTable.m_Size;
      if ( newTable.m_Size == newTable.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<RenderAttrGatherInfo_t,int>::Grow(&newTable.m_Memory, 1);
        v47 = newTable.m_Size;
      }
      v48 = newTable.m_Size;
      v19 = &newTable.m_Memory.m_pMemory[v48] == 0;
      v49 = &newTable.m_Memory.m_pMemory[v48];
      newTable.m_Size = v47 + 1;
      if ( !v19 )
      {
        v49->nNameHash = v50;
        v49->dataType = 0;
        v49->nByteOffset = 0;
        v49->pUpdaterFunc = pFunc;
      }
      ++v4;
      ++v45;
    }
    while ( renderAttrUpdaters.m_Size > v4 - nf );
LABEL_70:
    nOffset = CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Size;
    v53 = CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Size - v4;
    if ( CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Size - v4 >= 0 )
    {
      v54 = 0;
      m_pMemory = CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Memory.m_pMemory;
      v71 = newTable.m_Memory.m_pMemory;
      ng = 16LL * v4;
      v56 = v4;
      nNameHash = newTable.m_Memory.m_pMemory->nNameHash;
      do
      {
        if ( m_pMemory->nNameHash == nNameHash && memcmp(m_pMemory, v71, ng) == 0 )
        {
          v4 = v56;
          nOffset = v54;
          goto LABEL_80;
        }
        ++v54;
        ++m_pMemory;
      }
      while ( v53 >= v54 );
      v4 = v56;
    }
    CUtlVectorBase<RenderAttrGatherInfo_t,CUtlMemory<RenderAttrGatherInfo_t,int>>::AddVectorToTail<CUtlMemory<RenderAttrGatherInfo_t,int>>(
      &CRenderGameSystem::ms_entityRenderAttrGatherTable,
      &newTable);
LABEL_80:
    v59 = nOffset;
    *pRenderAttrCountOut = v4;
  }
  renderAttrUpdaters.m_Size = 0;
  v19 = (renderAttrUpdaters.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  *pTableOffsetOut = v59;
  if ( v19 )
  {
    CUtlMemory<RenderAttrUpdater_t *,int>::Purge(&renderAttrUpdaters.m_Memory);
    if ( (renderAttrUpdaters.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<RenderAttrUpdater_t *,int>::Purge(&renderAttrUpdaters.m_Memory);
  }
  newTable.m_Size = 0;
  if ( (newTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<RenderAttrGatherInfo_t,int>::Purge(&newTable.m_Memory);
    if ( (newTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<RenderAttrGatherInfo_t,int>::Purge(&newTable.m_Memory);
  }
}


// CRenderGameSystem::SuppressLatchSimulationState  (line 1287, @0x0000000001f37e80, libserver.so)
// globals: CRenderGameSystem::s_bSuppressLatchSimulation
bool __fastcall CRenderGameSystem::SuppressLatchSimulationState(bool bSuppress)
{
  bool result; // al

  result = CRenderGameSystem::s_bSuppressLatchSimulation;
  if ( CRenderGameSystem::s_bSuppressLatchSimulation != bSuppress )
    CRenderGameSystem::s_bSuppressLatchSimulation = bSuppress;
  return result;
}


// CRenderGameSystem::IsSuppressingLatchSimulationState  (line 1299, @0x0000000001f37ea0, libserver.so)
// callers: CGameSceneNode::PerformInvalidatePhysicsRecursive, CSkeletonInstance::PerformInvalidatePhysicsRecursive
// globals: CRenderGameSystem::s_bSuppressLatchSimulation
bool __cdecl CRenderGameSystem::IsSuppressingLatchSimulationState()
{
  return CRenderGameSystem::s_bSuppressLatchSimulation;
}


// CRenderGameSystem::MarkChanged  (line 1304, @0x0000000001f61b60, libserver.so)  // inlines: AddToTail, CAutoLockT, CopyConstruct<CRenderComponent*>, GetIndex, InsertBefore, IsIdxAfter, IsInBlock, IsInList, IsValidIterator, LinkBefore, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlink, Unlock, ~CAutoLockT
// calls: CRenderComponent::HasSchemaRenderAttributes, ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::AllocInternal, ThreadInterlockedExchange64, _Unwind_Resume
// callers: CRenderComponent::MarkChanged
intp __fastcall CRenderGameSystem::MarkChanged(CRenderGameSystem *const this, CRenderComponent *pComponent)
{
  __int64 v4; // rdi
  signed __int64 CurrentId; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t **v6; // r12
  intp result; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pBlockHeader; // rax
  intp m_nIndex; // rdx
  intp m_nBlockSize; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *v11; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *v12; // rax
  __int64 m_Tail; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *v14; // rsi

  if ( !CRenderComponent::HasSchemaRenderAttributes(pComponent) )
    return -1;
  CurrentId = ThreadGetCurrentId(v4);
  if ( CurrentId == this->m_changedRenderComponentsMutex.m_ownerID
    || _InterlockedCompareExchange64(&this->m_changedRenderComponentsMutex, CurrentId, 0) == 0 )
  {
    ++this->m_changedRenderComponentsMutex.m_depth;
  }
  else
  {
    _mm_pause();
    CThreadFastMutex::Lock(&this->m_changedRenderComponentsMutex, CurrentId, 0);
  }
  v6 = CUtlLinkedList<CRenderComponent *,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>>::AllocInternal(
         &this->m_changedRenderComponents,
         0);
  if ( v6 != 0 )
  {
    m_pBlockHeader = this->m_changedRenderComponents.m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_changedRenderComponents.m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v14 = m_pBlockHeader + 1;
          if ( v6 < &m_pBlockHeader[1].m_pNext || v6 >= &v14->m_pNext + 3 * m_nBlockSize )
          {
            while ( 1 )
            {
              m_pBlockHeader = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader == 0 )
                break;
              if ( v6 >= &m_pBlockHeader[1].m_pNext
                && v6 < &m_pBlockHeader[1].m_pNext + 3 * m_pBlockHeader->m_nBlockSize )
              {
                goto LABEL_19;
              }
            }
          }
          else if ( v6 > (&v14->m_pNext + 3 * m_nIndex) )
          {
LABEL_19:
            v6[2] = 0;
            m_Tail = this->m_changedRenderComponents.m_Tail;
            v6[1] = m_Tail;
            this->m_changedRenderComponents.m_Tail = v6;
            if ( m_Tail != 0 )
              *(m_Tail + 16) = v6;
            else
              this->m_changedRenderComponents.m_Head = v6;
            ++this->m_changedRenderComponents.m_ElementCount;
            *v6 = pComponent;
            goto LABEL_7;
          }
        }
      }
    }
    if ( v6 != v6[1] )
    {
      v11 = v6[1];
      if ( v11 != 0 )
        v11[1].m_pNext = v6[2];
      else
        this->m_changedRenderComponents.m_Head = v6[2];
      v12 = v6[2];
      if ( v12 != 0 )
        v12->m_nBlockSize = v6[1];
      else
        this->m_changedRenderComponents.m_Tail = v6[1];
      v6[2] = v6;
      v6[1] = v6;
      --this->m_changedRenderComponents.m_ElementCount;
    }
    goto LABEL_19;
  }
LABEL_7:
  --this->m_changedRenderComponentsMutex.m_depth;
  result = v6;
  if ( this->m_changedRenderComponentsMutex.m_depth == 0 )
  {
    ThreadInterlockedExchange64(&this->m_changedRenderComponentsMutex, 0);
    return v6;
  }
  return result;
}


// CRender::CRender  (line 1319, @0x0000000001f571c0, libserver.so)  // inlines: CUtlMemory, CUtlStack, ResetDbgInfo, memset, operator[]
// calls: CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::Push, memset, CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::~CUtlStack, _Unwind_Resume
// callers: CRenderGameSystem::CRenderGameSystem
void __fastcall CRender::CRender(CRender *const this)
{
  __int64 v2; // r12

  this->_vptr_CRender = off_3FCE250;  // vptr: CRender
  this->m_ViewStack.m_Memory.m_pMemory = 0;
  this->m_ViewStack.m_Memory.m_nAllocationCount = 0;
  this->m_ViewStack.m_Memory.m_nGrowSize = 0;
  this->m_ViewStack.m_Size = 0;
  this->m_ViewStack.m_pElements = 0;
  v2 = CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int>>::Push(&this->m_ViewStack);
  memset(&this->m_ViewStack.m_Memory.m_pMemory[v2], 0, 0x4D0u);
  this->m_ViewStack.m_Memory.m_pMemory[v2].m_bIs2DView = 1;
}


// CRender::ViewMatrix  (line 1327, @0x0000000001f37eb0, libserver.so)  // inlines: Element, Top, operator[]
const VMatrix *__fastcall CRender::ViewMatrix(CRender *const this)
{
  int m_Size; // edx
  const VMatrix *result; // rax

  m_Size = this->m_ViewStack.m_Size;
  result = &this->m_matrixView;
  if ( m_Size > 1 )
    return &this->m_ViewStack.m_Memory.m_pMemory[m_Size - 1].m_matrixView;
  return result;
}


// CRender::WorldToScreenMatrix  (line 1337, @0x0000000001f37ee0, libserver.so)  // inlines: Element, Top, operator[]
const VMatrix *__fastcall CRender::WorldToScreenMatrix(CRender *const this)
{
  int m_Size; // edx
  const VMatrix *result; // rax

  m_Size = this->m_ViewStack.m_Size;
  result = &this->m_matrixWorldToScreen;
  if ( m_Size > 1 )
    return &this->m_ViewStack.m_Memory.m_pMemory[m_Size - 1].m_matrixWorldToScreen;
  return result;
}


// CRender::ClearView  (line 1350, @0x0000000001f37f20, libserver.so)
void __fastcall CRender::ClearView(
        CRender *const this,
        CViewSetup *const view,
        int nFlags,
        ITexture *pRenderTarget,
        ITexture *pDepthTexture)
{
  ;
}


// CRender::Push3DView  (line 1401, @0x0000000001f57260, libserver.so)  // inlines: Element, Top, operator=, operator[]
// calls: CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::Push, memcpy, VMatrix::operator=, ComputeViewMatrices, CRender::ExtractMatrices
// callers: CRenderGameSystem::Push3DView
void __fastcall CRender::Push3DView(
        CRender *const this,
        const CViewSetup *const view,
        int nFlags,
        ITexture *pRenderTarget,
        VPlane *frustumPlanes)
{
  char v5; // r14
  __int64 v8; // r15
  CRender::ViewStack_t *v9; // rbx
  char v10; // dl
  char v11; // si
  char v12; // dl
  char v13; // dl
  char v14; // dl
  char v15; // dl
  char v16; // dl
  char v17; // dl
  char v18; // dl
  char v19; // si
  char v20; // si
  CRender::ViewStack_t *m_pMemory; // rax
  const CViewSetup *p_m_View; // rbx
  int height; // eax
  float v24; // xmm0_4
  CRender::ViewStack_t *v25; // rdi

  v5 = nFlags;
  v8 = CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int>>::Push(&this->m_ViewStack);
  v9 = &this->m_ViewStack.m_Memory.m_pMemory[v8];
  v9->m_View.m_calculatedFrustum.m_camera = view->m_calculatedFrustum.m_camera;
  memcpy(
    &v9->m_View.m_calculatedFrustum.m_frustumStruct,
    &view->m_calculatedFrustum.m_frustumStruct,
    sizeof(v9->m_View.m_calculatedFrustum.m_frustumStruct));
  v9->m_View.m_calculatedFrustum.m_flClipSpaceBottomLeftX = view->m_calculatedFrustum.m_flClipSpaceBottomLeftX;
  v9->m_View.m_calculatedFrustum.m_flClipSpaceBottomLeftY = view->m_calculatedFrustum.m_flClipSpaceBottomLeftY;
  v9->m_View.m_calculatedFrustum.m_flClipSpaceTopRightX = view->m_calculatedFrustum.m_flClipSpaceTopRightX;
  v9->m_View.m_calculatedFrustum.m_flClipSpaceTopRightY = view->m_calculatedFrustum.m_flClipSpaceTopRightY;
  v9->m_View.m_calculatedFrustum.m_bUseD3DClippingRange = view->m_calculatedFrustum.m_bUseD3DClippingRange;
  v9->m_View.m_calculatedFrustum.m_forward = view->m_calculatedFrustum.m_forward;
  v9->m_View.m_calculatedFrustum.m_left = view->m_calculatedFrustum.m_left;
  v9->m_View.m_calculatedFrustum.m_up = view->m_calculatedFrustum.m_up;
  v9->m_View.m_calculatedFrustum.m_cameraToWorld = view->m_calculatedFrustum.m_cameraToWorld;
  v9->m_View.m_calculatedFrustum.m_worldToView = view->m_calculatedFrustum.m_worldToView;
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_projection, &view->m_calculatedFrustum.m_projection);
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_invProjection, &view->m_calculatedFrustum.m_invProjection);
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_viewProj, &view->m_calculatedFrustum.m_viewProj);
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_invViewProj, &view->m_calculatedFrustum.m_invViewProj);
  v9->m_View.m_calculatedFrustum.m_bHaveOverrideProjectionMatrix = view->m_calculatedFrustum.m_bHaveOverrideProjectionMatrix;
  VMatrix::operator=(
    &v9->m_View.m_calculatedFrustum.m_overrideProjection,
    &view->m_calculatedFrustum.m_overrideProjection);
  v9->m_View.m_calculatedFrustum.m_vOriginBeforeVr = view->m_calculatedFrustum.m_vOriginBeforeVr;
  v9->m_View.m_calculatedFrustum.m_vAnglesBeforeVr = view->m_calculatedFrustum.m_vAnglesBeforeVr;
  v9->m_View.x = view->x;
  v9->m_View.m_nUnscaledX = view->m_nUnscaledX;
  v9->m_View.y = view->y;
  v9->m_View.m_nUnscaledY = view->m_nUnscaledY;
  v9->m_View.width = view->width;
  v9->m_View.m_nUnscaledWidth = view->m_nUnscaledWidth;
  v9->m_View.height = view->height;
  v9->m_View.m_nUnscaledHeight = view->m_nUnscaledHeight;
  v9->m_View.m_pFogParams = view->m_pFogParams;
  v9->m_View.m_pFogParams3DSkyBox = view->m_pFogParams3DSkyBox;
  v9->m_View.m_bOrtho = view->m_bOrtho;
  v9->m_View.m_OrthoLeft = view->m_OrthoLeft;
  v9->m_View.m_OrthoTop = view->m_OrthoTop;
  v9->m_View.m_OrthoRight = view->m_OrthoRight;
  v9->m_View.m_OrthoBottom = view->m_OrthoBottom;
  v9->m_View.m_bCustomViewMatrix = view->m_bCustomViewMatrix;
  v9->m_View.m_matCustomViewMatrix = view->m_matCustomViewMatrix;
  v9->m_View.fov = view->fov;
  v9->m_View.fovViewmodel = view->fovViewmodel;
  v9->m_View.origin = view->origin;
  v9->m_View.origin3DSkyBox = view->origin3DSkyBox;
  v9->m_View.angles = view->angles;
  v9->m_View.zNear = view->zNear;
  v9->m_View.zFar = view->zFar;
  v9->m_View.originBeforeVr = view->originBeforeVr;
  v9->m_View.anglesBeforeVr = view->anglesBeforeVr;
  v9->m_View.zNearViewmodel = view->zNearViewmodel;
  v9->m_View.zFarViewmodel = view->zFarViewmodel;
  v9->m_View.m_flAspectRatio = view->m_flAspectRatio;
  v9->m_View.m_flNearBlurDepth = view->m_flNearBlurDepth;
  v9->m_View.m_flNearFocusDepth = view->m_flNearFocusDepth;
  v9->m_View.m_flFarFocusDepth = view->m_flFarFocusDepth;
  v9->m_View.m_flFarBlurDepth = view->m_flFarBlurDepth;
  v9->m_View.m_flNearBlurRadius = view->m_flNearBlurRadius;
  v9->m_View.m_flFarBlurRadius = view->m_flFarBlurRadius;
  v9->m_View.m_nDoFQuality = view->m_nDoFQuality;
  v9->m_View.m_nMotionBlurMode = view->m_nMotionBlurMode;
  v9->m_View.m_flShutterTime = view->m_flShutterTime;
  v9->m_View.m_vShutterOpenPosition = view->m_vShutterOpenPosition;
  v9->m_View.m_shutterOpenAngles = view->m_shutterOpenAngles;
  v9->m_View.m_vShutterClosePosition = view->m_vShutterClosePosition;
  v10 = *(&v9->m_View + 1192);
  v11 = *(&v9->m_View + 1193);
  v9->m_View.m_shutterCloseAngles = view->m_shutterCloseAngles;
  v9->m_View.m_flOffCenterTop = view->m_flOffCenterTop;
  v9->m_View.m_flOffCenterBottom = view->m_flOffCenterBottom;
  v9->m_View.m_flOffCenterLeft = view->m_flOffCenterLeft;
  v9->m_View.m_flOffCenterRight = view->m_flOffCenterRight;
  v9->m_View.m_nOverrideLODLevel = view->m_nOverrideLODLevel;
  v12 = *(view + 1192) & 1 | v10 & 0xFE;
  *(&v9->m_View + 1192) = v12;
  v13 = *(view + 1192) & 2 | v12 & 0xFD;
  *(&v9->m_View + 1192) = v13;
  v14 = *(view + 1192) & 4 | v13 & 0xFB;
  *(&v9->m_View + 1192) = v14;
  v15 = *(view + 1192) & 8 | v14 & 0xF7;
  *(&v9->m_View + 1192) = v15;
  v16 = *(view + 1192) & 0x10 | v15 & 0xEF;
  *(&v9->m_View + 1192) = v16;
  v17 = *(view + 1192) & 0x20 | v16 & 0xDF;
  *(&v9->m_View + 1192) = v17;
  v18 = *(view + 1192) & 0x40 | v17 & 0xBF;
  *(&v9->m_View + 1192) = v18;
  *(&v9->m_View + 1192) = *(view + 1192) & 0x80 | v18 & 0x7F;
  v19 = *(view + 1193) & 1 | v11 & 0xFE;
  *(&v9->m_View + 1193) = v19;
  v20 = *(view + 1193) & 2 | v19 & 0xFD;
  *(&v9->m_View + 1193) = v20;
  *(&v9->m_View + 1193) = *(view + 1193) & 4 | v20 & 0xFB;
  v9->m_View.m_bEnableRadialDistortion = view->m_bEnableRadialDistortion;
  v9->m_View.m_flRadialDistortionK1 = view->m_flRadialDistortionK1;
  v9->m_View.m_flRadialDistortionK2 = view->m_flRadialDistortionK2;
  v9->m_View.m_vecCenterShift = view->m_vecCenterShift;
  v9->m_View.m_vecProjectionArea = view->m_vecProjectionArea;
  v9->m_View.m_flPreDistortionRenderSizeFactor = view->m_flPreDistortionRenderSizeFactor;
  this->m_ViewStack.m_Memory.m_pMemory[v8].m_bIs2DView = 0;
  this->m_ViewStack.m_Memory.m_pMemory[v8].m_bNoDraw = (v5 & 8) != 0;
  m_pMemory = this->m_ViewStack.m_Memory.m_pMemory;
  p_m_View = &m_pMemory[v8].m_View;
  if ( m_pMemory[v8].m_View.m_flAspectRatio == 0.0 )
  {
    height = p_m_View->height;
    v24 = 1.0;
    if ( height != 0 )
      v24 = p_m_View->width / height;
    p_m_View->m_flAspectRatio = v24;
    m_pMemory = this->m_ViewStack.m_Memory.m_pMemory;
  }
  v25 = &m_pMemory[this->m_ViewStack.m_Size - 1];
  p_m_View->m_flAspectRatio = ComputeViewMatrices(
                                &v25->m_matrixView,
                                &v25->m_matrixProjection,
                                &v25->m_matrixWorldToScreen,
                                p_m_View);
  CRender::ExtractMatrices(this);
}


// CRender::Push2DView  (line 1454, @0x0000000001f57d00, libserver.so)  // inlines: operator=, operator[]
// calls: CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::Push, memcpy, VMatrix::operator=
// callers: CRenderGameSystem::Push2DView
void __fastcall CRender::Push2DView(
        CRender *const this,
        const CViewSetup *const view,
        int nFlags,
        ITexture *pRenderTarget,
        VPlane *frustumPlanes)
{
  char v5; // r15
  __int64 v8; // r14
  CRender::ViewStack_t *v9; // rbx
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al

  v5 = nFlags;
  v8 = CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int>>::Push(&this->m_ViewStack);
  v9 = &this->m_ViewStack.m_Memory.m_pMemory[v8];
  v9->m_View.m_calculatedFrustum.m_camera = view->m_calculatedFrustum.m_camera;
  memcpy(
    &v9->m_View.m_calculatedFrustum.m_frustumStruct,
    &view->m_calculatedFrustum.m_frustumStruct,
    sizeof(v9->m_View.m_calculatedFrustum.m_frustumStruct));
  v9->m_View.m_calculatedFrustum.m_flClipSpaceBottomLeftX = view->m_calculatedFrustum.m_flClipSpaceBottomLeftX;
  v9->m_View.m_calculatedFrustum.m_flClipSpaceBottomLeftY = view->m_calculatedFrustum.m_flClipSpaceBottomLeftY;
  v9->m_View.m_calculatedFrustum.m_flClipSpaceTopRightX = view->m_calculatedFrustum.m_flClipSpaceTopRightX;
  v9->m_View.m_calculatedFrustum.m_flClipSpaceTopRightY = view->m_calculatedFrustum.m_flClipSpaceTopRightY;
  v9->m_View.m_calculatedFrustum.m_bUseD3DClippingRange = view->m_calculatedFrustum.m_bUseD3DClippingRange;
  v9->m_View.m_calculatedFrustum.m_forward = view->m_calculatedFrustum.m_forward;
  v9->m_View.m_calculatedFrustum.m_left = view->m_calculatedFrustum.m_left;
  v9->m_View.m_calculatedFrustum.m_up = view->m_calculatedFrustum.m_up;
  v9->m_View.m_calculatedFrustum.m_cameraToWorld = view->m_calculatedFrustum.m_cameraToWorld;
  v9->m_View.m_calculatedFrustum.m_worldToView = view->m_calculatedFrustum.m_worldToView;
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_projection, &view->m_calculatedFrustum.m_projection);
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_invProjection, &view->m_calculatedFrustum.m_invProjection);
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_viewProj, &view->m_calculatedFrustum.m_viewProj);
  VMatrix::operator=(&v9->m_View.m_calculatedFrustum.m_invViewProj, &view->m_calculatedFrustum.m_invViewProj);
  v9->m_View.m_calculatedFrustum.m_bHaveOverrideProjectionMatrix = view->m_calculatedFrustum.m_bHaveOverrideProjectionMatrix;
  VMatrix::operator=(
    &v9->m_View.m_calculatedFrustum.m_overrideProjection,
    &view->m_calculatedFrustum.m_overrideProjection);
  v9->m_View.m_calculatedFrustum.m_vOriginBeforeVr = view->m_calculatedFrustum.m_vOriginBeforeVr;
  v9->m_View.m_calculatedFrustum.m_vAnglesBeforeVr = view->m_calculatedFrustum.m_vAnglesBeforeVr;
  v9->m_View.x = view->x;
  v9->m_View.m_nUnscaledX = view->m_nUnscaledX;
  v9->m_View.y = view->y;
  v9->m_View.m_nUnscaledY = view->m_nUnscaledY;
  v9->m_View.width = view->width;
  v9->m_View.m_nUnscaledWidth = view->m_nUnscaledWidth;
  v9->m_View.height = view->height;
  v9->m_View.m_nUnscaledHeight = view->m_nUnscaledHeight;
  v9->m_View.m_pFogParams = view->m_pFogParams;
  v9->m_View.m_pFogParams3DSkyBox = view->m_pFogParams3DSkyBox;
  v9->m_View.m_bOrtho = view->m_bOrtho;
  v9->m_View.m_OrthoLeft = view->m_OrthoLeft;
  v9->m_View.m_OrthoTop = view->m_OrthoTop;
  v9->m_View.m_OrthoRight = view->m_OrthoRight;
  v9->m_View.m_OrthoBottom = view->m_OrthoBottom;
  v9->m_View.m_bCustomViewMatrix = view->m_bCustomViewMatrix;
  v9->m_View.m_matCustomViewMatrix = view->m_matCustomViewMatrix;
  v9->m_View.fov = view->fov;
  v9->m_View.fovViewmodel = view->fovViewmodel;
  v9->m_View.origin = view->origin;
  v9->m_View.origin3DSkyBox = view->origin3DSkyBox;
  v9->m_View.angles = view->angles;
  v9->m_View.zNear = view->zNear;
  v9->m_View.zFar = view->zFar;
  v9->m_View.originBeforeVr = view->originBeforeVr;
  v9->m_View.anglesBeforeVr = view->anglesBeforeVr;
  v9->m_View.zNearViewmodel = view->zNearViewmodel;
  v9->m_View.zFarViewmodel = view->zFarViewmodel;
  v9->m_View.m_flAspectRatio = view->m_flAspectRatio;
  v9->m_View.m_flNearBlurDepth = view->m_flNearBlurDepth;
  v9->m_View.m_flNearFocusDepth = view->m_flNearFocusDepth;
  v9->m_View.m_flFarFocusDepth = view->m_flFarFocusDepth;
  v9->m_View.m_flFarBlurDepth = view->m_flFarBlurDepth;
  v9->m_View.m_flNearBlurRadius = view->m_flNearBlurRadius;
  v9->m_View.m_flFarBlurRadius = view->m_flFarBlurRadius;
  v9->m_View.m_nDoFQuality = view->m_nDoFQuality;
  v9->m_View.m_nMotionBlurMode = view->m_nMotionBlurMode;
  v9->m_View.m_flShutterTime = view->m_flShutterTime;
  v9->m_View.m_vShutterOpenPosition = view->m_vShutterOpenPosition;
  v9->m_View.m_shutterOpenAngles = view->m_shutterOpenAngles;
  v9->m_View.m_vShutterClosePosition = view->m_vShutterClosePosition;
  v9->m_View.m_shutterCloseAngles = view->m_shutterCloseAngles;
  v9->m_View.m_flOffCenterTop = view->m_flOffCenterTop;
  v9->m_View.m_flOffCenterBottom = view->m_flOffCenterBottom;
  v9->m_View.m_flOffCenterLeft = view->m_flOffCenterLeft;
  v9->m_View.m_flOffCenterRight = view->m_flOffCenterRight;
  v9->m_View.m_nOverrideLODLevel = view->m_nOverrideLODLevel;
  v10 = *(view + 1192) & 1 | *(&v9->m_View + 1192) & 0xFE;
  *(&v9->m_View + 1192) = v10;
  v11 = *(view + 1192) & 2 | v10 & 0xFD;
  *(&v9->m_View + 1192) = v11;
  v12 = *(view + 1192) & 4 | v11 & 0xFB;
  *(&v9->m_View + 1192) = v12;
  v13 = *(view + 1192) & 8 | v12 & 0xF7;
  *(&v9->m_View + 1192) = v13;
  v14 = *(view + 1192) & 0x10 | v13 & 0xEF;
  *(&v9->m_View + 1192) = v14;
  v15 = *(view + 1192) & 0x20 | v14 & 0xDF;
  *(&v9->m_View + 1192) = v15;
  v16 = *(view + 1192) & 0x40 | v15 & 0xBF;
  *(&v9->m_View + 1192) = v16;
  *(&v9->m_View + 1192) = *(view + 1192) & 0x80 | v16 & 0x7F;
  v17 = *(view + 1193) & 1 | *(&v9->m_View + 1193) & 0xFE;
  *(&v9->m_View + 1193) = v17;
  v18 = *(view + 1193) & 2 | v17 & 0xFD;
  *(&v9->m_View + 1193) = v18;
  *(&v9->m_View + 1193) = *(view + 1193) & 4 | v18 & 0xFB;
  v9->m_View.m_bEnableRadialDistortion = view->m_bEnableRadialDistortion;
  v9->m_View.m_flRadialDistortionK1 = view->m_flRadialDistortionK1;
  v9->m_View.m_flRadialDistortionK2 = view->m_flRadialDistortionK2;
  v9->m_View.m_vecCenterShift = view->m_vecCenterShift;
  v9->m_View.m_vecProjectionArea = view->m_vecProjectionArea;
  v9->m_View.m_flPreDistortionRenderSizeFactor = view->m_flPreDistortionRenderSizeFactor;
  this->m_ViewStack.m_Memory.m_pMemory[v8].m_bIs2DView = 1;
  this->m_ViewStack.m_Memory.m_pMemory[v8].m_bNoDraw = (v5 & 8) != 0;
  VMatrix::operator=(&this->m_ViewStack.m_Memory.m_pMemory[v8].m_matrixView, &this->m_matrixView);
  VMatrix::operator=(&this->m_ViewStack.m_Memory.m_pMemory[v8].m_matrixProjection, &this->m_matrixProjection);
  VMatrix::operator=(&this->m_ViewStack.m_Memory.m_pMemory[v8].m_matrixWorldToScreen, &this->m_matrixWorldToScreen);
}


// CRender::PopView  (line 1496, @0x0000000001f37fd0, libserver.so)  // inlines: Element, Pop, Top, operator[]
// calls: CRender::ExtractMatrices
// callers: CRenderGameSystem::PopView
void __fastcall CRender::PopView(CRender *const this, VPlane *frustumPlanes)
{
  int m_Size; // eax

  m_Size = this->m_ViewStack.m_Size;
  this->m_ViewStack.m_Size = m_Size - 1;
  if ( m_Size > 1 && !this->m_ViewStack.m_Memory.m_pMemory[m_Size - 2].m_bIs2DView )
    CRender::ExtractMatrices(this);
}


// CRender::ClipTransform  (line 1531, @0x0000000001f2a190, libserver.so)  // inlines: Element, Top, WorldToScreenMatrix, operator[]
bool __fastcall CRender::ClipTransform(CRender *const this, const Vector *const point, Vector *pClip)
{
  int m_Size; // ecx
  float *p_m_matrixWorldToScreen; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  bool result; // al
  float v9; // xmm1_4
  float v10; // xmm0_4

  m_Size = this->m_ViewStack.m_Size;
  p_m_matrixWorldToScreen = &this->m_matrixWorldToScreen;
  if ( m_Size > 1 )
    p_m_matrixWorldToScreen = &this->m_ViewStack.m_Memory.m_pMemory[m_Size - 1].m_matrixWorldToScreen;
  v5 = (((*p_m_matrixWorldToScreen * point->x) + (p_m_matrixWorldToScreen[1] * point->y))
      + (p_m_matrixWorldToScreen[2] * point->z))
     + p_m_matrixWorldToScreen[3];
  pClip->x = v5;
  v6 = (((p_m_matrixWorldToScreen[4] * point->x) + (p_m_matrixWorldToScreen[5] * point->y))
      + (p_m_matrixWorldToScreen[6] * point->z))
     + p_m_matrixWorldToScreen[7];
  pClip->y = v6;
  v7 = (((p_m_matrixWorldToScreen[12] * point->x) + (p_m_matrixWorldToScreen[13] * point->y))
      + (p_m_matrixWorldToScreen[14] * point->z))
     + p_m_matrixWorldToScreen[15];
  pClip->z = 0.0;
  if ( v7 < 0.001 )
  {
    result = 1;
    v9 = v5 * 100000.0;
    v10 = v6 * 100000.0;
  }
  else
  {
    result = 0;
    v9 = v5 * (1.0 / v7);
    v10 = v6 * (1.0 / v7);
  }
  pClip->x = v9;
  pClip->y = v10;
  return result;
}


// CRender::ScreenTransform  (line 1566, @0x0000000001f2a2a0, libserver.so)  // inlines: CurrentView, Element, Top, operator[]
bool __fastcall CRender::ScreenTransform(CRender *const this, const Vector *const point, Vector *pScreen)
{
  bool result; // al
  float v6; // xmm0_4
  CRender::ViewStack_t *v7; // rdx
  CRender::ViewStack_t *v8; // rdx

  result = (*this->_vptr_CRender)(this, point);
  v6 = (pScreen->y + 1.0) * 0.5;
  v7 = &this->m_ViewStack.m_Memory.m_pMemory[this->m_ViewStack.m_Size - 1];
  pScreen->x = (((pScreen->x + 1.0) * 0.5) * v7->m_View.width) + v7->m_View.x;
  v8 = &this->m_ViewStack.m_Memory.m_pMemory[this->m_ViewStack.m_Size - 1];
  pScreen->y = (v6 * v8->m_View.height) + v8->m_View.y;
  return result;
}


// CRender::ExtractMatrices  (line 1576, @0x0000000001f37f30, libserver.so)  // inlines: Element, Top, operator[]
// calls: VMatrix::operator=
// callers: CRender::PopView, CRender::Push3DView
void __fastcall CRender::ExtractMatrices(CRender *const this)
{
  VMatrix::operator=(
    &this->m_matrixView,
    &this->m_ViewStack.m_Memory.m_pMemory[this->m_ViewStack.m_Size - 1].m_matrixView);
  VMatrix::operator=(
    &this->m_matrixProjection,
    &this->m_ViewStack.m_Memory.m_pMemory[this->m_ViewStack.m_Size - 1].m_matrixProjection);
  VMatrix::operator=(
    &this->m_matrixWorldToScreen,
    &this->m_ViewStack.m_Memory.m_pMemory[this->m_ViewStack.m_Size - 1].m_matrixWorldToScreen);
}


