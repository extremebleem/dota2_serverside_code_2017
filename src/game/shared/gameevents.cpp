// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameevents.cpp:50
class GameEvent_RegisterInternal {
	// sizeof = 1
};

// src/game/shared/gameevents.cpp:50
class GameEvent_RegisterHookupGameSystem : public CStartupHookGameSystem<GameEvent_RegisterInternal, 17408> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameEvent_RegisterInternal, 17408> BaseClass;
	GameEvent_RegisterHookupGameSystem(GameEvent_RegisterHookupGameSystem &);
	GameEvent_RegisterHookupGameSystem(const GameEvent_RegisterHookupGameSystem &);
	GameEvent_RegisterHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameEvent_RegisterHookupGameSystem *);
	virtual ~GameEvent_RegisterHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GameEventRegister_t::GameEventRegister_t  (line 12, @0x00000000020a8880, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, CopyFrom<FastDelegate0<bool> >, CopyFrom<FastDelegate0<void> >, FastDelegate0, SetMementoFrom
// callers: _GLOBAL__sub_I_base_clientui_ent.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_base_09.cpp
// globals: s_pGameEvents
void __fastcall GameEventRegister_t::GameEventRegister_t(
        GameEventRegister_t *const this,
        const char *pName,
        const CUtlDelegate<bool()> *const init,
        const CUtlDelegate<void()> *const shutdown)
{
  __int64 delta; // r10
  detail::GenericClass *m_pthis; // rax
  __int64 v6; // rdx
  GameEventRegister_t *v7; // rax

  this->m_pName = pName;
  this->m_init.m_Closure.m_pthis = 0;
  this->m_init.m_Closure.m_pFunction.__pfn = 0;
  this->m_init.m_Closure.m_pFunction.__delta = 0;
  delta = init->m_Closure.m_pFunction.__delta;
  this->m_init.m_Closure.m_pFunction.__pfn = init->m_Closure.m_pFunction.__pfn;
  this->m_init.m_Closure.m_pFunction.__delta = delta;
  m_pthis = init->m_Closure.m_pthis;
  this->m_shutdown.m_Closure.m_pthis = 0;
  this->m_shutdown.m_Closure.m_pFunction.__pfn = 0;
  this->m_shutdown.m_Closure.m_pFunction.__delta = 0;
  this->m_init.m_Closure.m_pthis = m_pthis;
  v6 = shutdown->m_Closure.m_pFunction.__delta;
  this->m_shutdown.m_Closure.m_pFunction.__pfn = shutdown->m_Closure.m_pFunction.__pfn;
  this->m_shutdown.m_Closure.m_pFunction.__delta = v6;
  this->m_shutdown.m_Closure.m_pthis = shutdown->m_Closure.m_pthis;
  v7 = s_pGameEvents;
  s_pGameEvents = this;
  this->m_pNext = v7;
}


// RegisterGameEventMessages  (line 21, @0x00000000020ee0a0, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, Element, FindInsertionPosition, First, FirstInorder, Insert, InsertAt, LeafCodeInfo_t, LeftChild, MemAlloc_StrDupFunc, Next, NextInorder, Purge, ResetDbgInfo, RightChild, SetCompareType, SetLessFunc, operator(), operator[], strcpy, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CUtlRBTree<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlDict<GameEventRegister_t*, int>::Purge, CUtlRBTree<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess (14 total)
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameevent, "RegisterGameEventMessages", "Unable to init game event %s\n"
// globals: FastCaselessStringLessThan(char const* const&,char const* const&), s_pGameEvents
bool __cdecl RegisterGameEventMessages()
{
  GameEventRegister_t *v0; // r14
  const char *m_pName; // rbx
  size_t v2; // rax
  char *v3; // rax
  char *v4; // rax
  int m_Root; // r12d
  int m_Left; // eax
  bool v7; // bl
  int v8; // eax
  UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v10; // rax
  int Inorder; // ebx
  CUtlMap<char const*,GameEventRegister_t*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // r12
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  const char *v20; // r8
  int v21; // ebx
  int v22; // edx
  int v23; // ecx
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  LeafCodeInfo_t pCopyFrom; // [rsp+0h] [rbp-80h] BYREF
  CUtlDict<GameEventRegister_t*,int> sorted; // [rsp+20h] [rbp-60h] BYREF

  sorted.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  v0 = s_pGameEvents;
  sorted.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  sorted.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  sorted.m_Elements.m_Tree.m_Root = -1;
  sorted.m_Elements.m_Tree.m_NumElements = 0;
  sorted.m_Elements.m_Tree.m_FirstFree = -1;
  sorted.m_Elements.m_Tree.m_LastAlloc.index = -1;
  sorted.m_Elements.m_Tree.m_pElements = 0;
  sorted.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  if ( s_pGameEvents != 0 )
  {
    do
    {
      m_pName = v0->m_pName;
      if ( v0->m_pName != 0 )
      {
        v2 = strlen(v0->m_pName);
        v3 = (**g_pMemAlloc)(g_pMemAlloc, v2 + 1);
        v4 = strcpy(v3, m_pName);
      }
      else
      {
        v4 = 0;
      }
      m_Root = sorted.m_Elements.m_Tree.m_Root;
      pCopyFrom.m_szFile = v4;
      *&pCopyFrom.m_nLine = v0;
      if ( sorted.m_Elements.m_Tree.m_Root != -1 )
      {
        while ( 1 )
        {
          if ( sorted.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                 &pCopyFrom,
                 &sorted.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) != 0 )
          {
            m_Left = sorted.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
            v7 = 1;
            if ( m_Left == -1 )
              goto LABEL_10;
          }
          else
          {
            m_Left = sorted.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Right;
            v7 = 0;
            if ( m_Left == -1 )
              goto LABEL_10;
          }
          m_Root = m_Left;
        }
      }
      v7 = 0;
LABEL_10:
      v8 = CUtlRBTree<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
             &sorted.m_Elements.m_Tree,
             &pCopyFrom);
      CUtlRBTree<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
        &sorted.m_Elements.m_Tree,
        v8,
        m_Root,
        v7);
      v0 = v0->m_pNext;
      ++sorted.m_Elements.m_Tree.m_NumElements;
    }
    while ( v0 != 0 );
    if ( sorted.m_Elements.m_Tree.m_Root != -1 )
    {
      m_pMemory = sorted.m_Elements.m_Tree.m_Elements.m_pMemory;
      v10 = sorted.m_Elements.m_Tree.m_Root;
      Inorder = sorted.m_Elements.m_Tree.m_Elements.m_pMemory[sorted.m_Elements.m_Tree.m_Root].m_Left;
      if ( Inorder == -1 )
      {
        Inorder = sorted.m_Elements.m_Tree.m_Root;
      }
      else
      {
        while ( 1 )
        {
          v10 = Inorder;
          if ( sorted.m_Elements.m_Tree.m_Elements.m_pMemory[Inorder].m_Left == -1 )
            break;
          Inorder = sorted.m_Elements.m_Tree.m_Elements.m_pMemory[Inorder].m_Left;
        }
      }
      while ( 1 )
      {
        elem = m_pMemory[v10].m_Data.elem;
        pfn = elem->m_init.m_Closure.m_pFunction.__pfn;
        v14 = (elem->m_init.m_Closure.m_pthis + elem->m_init.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v14 - 1);
        if ( (pfn)(v14) == 0 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v20 = elem->m_pName;
            pCopyFrom.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameevents.cpp";
            pCopyFrom.m_szFunction = "RegisterGameEventMessages";
            pCopyFrom.m_nLine = 39;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &pCopyFrom,
              "Unable to init game event %s\n",
              v20);
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
            loc_0 = -559038737;
          v21 = Plat_ExitProcess(1);
          CUtlDict<GameEventRegister_t *,int>::Purge(&sorted);
          CUtlRBTree<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::~CUtlRBTree(&sorted.m_Elements.m_Tree);
          Unwind_Resume(v21, v24, v22, v23, v25, v26, pCopyFrom.m_szFile);
        }
        Inorder = CUtlRBTree<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                    &sorted.m_Elements.m_Tree,
                    Inorder);
        if ( Inorder == -1 )
          break;
        m_pMemory = sorted.m_Elements.m_Tree.m_Elements.m_pMemory;
        v10 = Inorder;
      }
    }
  }
  CUtlDict<GameEventRegister_t *,int>::Purge(&sorted);
  CUtlRBTree<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&sorted.m_Elements.m_Tree);
  if ( (sorted.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&sorted.m_Elements.m_Tree.m_Elements);
  return 1;
}


// UnregisterGameEventMessages  (line 45, @0x000000000209bfd0, libserver.so)
void __cdecl UnregisterGameEventMessages()
{
  ;
}


// GameEvent_RegisterHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 50, @0x00000000020a8900, libserver.so)
void __cdecl GameEvent_RegisterHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameEvent_RegisterHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 50, @0x00000000020f1600, libserver.so)
void __fastcall GameEvent_RegisterHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameEvent_RegisterHookupGameSystem *const this)
{
  ;
}


// GameEvent_RegisterHookupGameSystem::DoesGameSystemReallocate  (line 50, @0x00000000020f1610, libserver.so)
// globals: GameEvent_RegisterHookupGameSystem::sm_Factory
bool __fastcall GameEvent_RegisterHookupGameSystem::DoesGameSystemReallocate(
        const GameEvent_RegisterHookupGameSystem *const this)
{
  return (*(GameEvent_RegisterHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameEvent_RegisterHookupGameSystem::sm_Factory);
}


// GameEvent_RegisterHookupGameSystem::SetGameSystemGlobalPtrs  (line 50, @0x00000000020f1630, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameEvent_RegisterHookupGameSystem::sm_Factory
void __fastcall GameEvent_RegisterHookupGameSystem::SetGameSystemGlobalPtrs(
        GameEvent_RegisterHookupGameSystem *const this,
        void *pValue)
{
  if ( GameEvent_RegisterHookupGameSystem::sm_Factory != 0 )
    (*(GameEvent_RegisterHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameEvent_RegisterHookupGameSystem::sm_Factory,
      pValue);
}


// GameEvent_RegisterHookupGameSystem::~GameEvent_RegisterHookupGameSystem  (line 50, @0x00000000020f5e50, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameEvent_RegisterHookupGameSystem::~GameEvent_RegisterHookupGameSystem(
        GameEvent_RegisterHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF74F0;
  IGameSystem::~IGameSystem(this);
}


// GameEvent_RegisterHookupGameSystem::~GameEvent_RegisterHookupGameSystem  (line 50, @0x00000000020f5e70, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameEvent_RegisterHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameEvent_RegisterHookupGameSystem::~GameEvent_RegisterHookupGameSystem(
        GameEvent_RegisterHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF74F0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


