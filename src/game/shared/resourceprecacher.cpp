// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/resourceprecacher.cpp:25
class CResourcePrecacherGameSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)>, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_SpawnGroupPrecacheDelegates;  // +0x18
	typedef CAutoGameSystem BaseClass;
	CResourcePrecacherGameSystem(CResourcePrecacherGameSystem &);
	CResourcePrecacherGameSystem(const CResourcePrecacherGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CResourcePrecacherGameSystem *);
	CResourcePrecacherGameSystem();
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	void AddSpawnGroupPrecacheCallback(SpawnGroupHandle_t, SpawnGroupPrecacheDelegate_t);
	void RemoveSpawnGroupPrecacheCallback(SpawnGroupHandle_t);
	virtual ~CResourcePrecacherGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[12] SpawnGroupPrecache
	// sizeof = 64
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResourcePrecacherGameSystem::~CResourcePrecacherGameSystem  (line 25, @0x0000000001efdae0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CResourcePrecacherGameSystem::~CResourcePrecacherGameSystem(CResourcePrecacherGameSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_3FC2410;  // vptr: CResourcePrecacherGameSystem
  CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_SpawnGroupPrecacheDelegates.m_Tree);
  v2 = (this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpawnGroupPrecacheDelegates.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements);
    v2 = (this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_SpawnGroupPrecacheDelegates.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements);
  }
  else
  {
    this->m_SpawnGroupPrecacheDelegates.m_Tree.m_LastAlloc.index = -1;
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CResourcePrecacherGameSystem::~CResourcePrecacherGameSystem  (line 25, @0x0000000001efdb60, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CResourcePrecacherGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CResourcePrecacherGameSystem::~CResourcePrecacherGameSystem(CResourcePrecacherGameSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_3FC2410;  // vptr: CResourcePrecacherGameSystem
  CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_SpawnGroupPrecacheDelegates.m_Tree);
  v2 = (this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpawnGroupPrecacheDelegates.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements);
    v2 = (this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_SpawnGroupPrecacheDelegates.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements);
  }
  else
  {
    this->m_SpawnGroupPrecacheDelegates.m_Tree.m_LastAlloc.index = -1;
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CResourcePrecacherGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 27, @0x0000000001efd050, libserver.so)
void __fastcall CResourcePrecacherGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CResourcePrecacherGameSystem *const this)
{
  ;
}


// CResourcePrecacherGameSystem::DoesGameSystemReallocate  (line 27, @0x0000000001efd060, libserver.so)
// globals: CResourcePrecacherGameSystem::sm_Factory
bool __fastcall CResourcePrecacherGameSystem::DoesGameSystemReallocate(const CResourcePrecacherGameSystem *const this)
{
  return (*(CResourcePrecacherGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CResourcePrecacherGameSystem::sm_Factory);
}


// CResourcePrecacherGameSystem::SetGameSystemGlobalPtrs  (line 27, @0x0000000001efd080, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CResourcePrecacherGameSystem::sm_Factory
void __fastcall CResourcePrecacherGameSystem::SetGameSystemGlobalPtrs(
        CResourcePrecacherGameSystem *const this,
        void *pValue)
{
  if ( CResourcePrecacherGameSystem::sm_Factory != 0 )
    (*(CResourcePrecacherGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CResourcePrecacherGameSystem::sm_Factory,
      pValue);
}


// CResourcePrecacherGameSystem::SpawnGroupPrecache  (line 35, @0x0000000001efe6d0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, FastDelegate1, Find, FreeNode, IsIdxValid, IsValidIndex, LeftChild, Node_t, RemoveAt, SetLeftChild, SetRightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::Unlink
void __fastcall CResourcePrecacherGameSystem::SpawnGroupPrecache(
        CResourcePrecacherGameSystem *const this,
        const EventSpawnGroupPrecache_t *const msg)
{
  CUtlMap<unsigned int,CUtlDelegate<void(const EventSpawnGroupPrecache_t&)>,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_SpawnGroupPrecacheDelegates; // r13
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r12
  __int64 v7; // r15
  UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t,short unsigned int> *v8; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v10; // rdi
  CUtlMap<unsigned int,CUtlDelegate<void(const EventSpawnGroupPrecache_t&)>,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-50h] BYREF

  p_m_SpawnGroupPrecacheDelegates = &this->m_SpawnGroupPrecacheDelegates;
  memset(&search.elem, 0, sizeof(search.elem));
  search.key = msg->m_SpawnGroupHandle;
  v5 = CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_SpawnGroupPrecacheDelegates.m_Tree,
         &search);
  v6 = v5;
  if ( v5 < this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_nAllocationCount
    && v5 <= this->m_SpawnGroupPrecacheDelegates.m_Tree.m_LastAlloc.index
    && v5 != 0xFFFF )
  {
    v7 = v5;
    v8 = &this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[v7];
    if ( v6 != v8->m_Left )
    {
      pfn = v8->m_Data.elem.m_Closure.m_pFunction.__pfn;
      v10 = (v8->m_Data.elem.m_Closure.m_pthis + v8->m_Data.elem.m_Closure.m_pFunction.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v10 - 1);
      (pfn)(v10, msg);
      CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &p_m_SpawnGroupPrecacheDelegates->m_Tree,
        v6);
      this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[v7].m_Left = v6;
      this->m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[v7].m_Right = this->m_SpawnGroupPrecacheDelegates.m_Tree.m_FirstFree;
      --this->m_SpawnGroupPrecacheDelegates.m_Tree.m_NumElements;
      this->m_SpawnGroupPrecacheDelegates.m_Tree.m_FirstFree = v6;
    }
  }
}


// CResourcePrecacherGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 60, @0x0000000001efc7f0, libserver.so)
void __cdecl CResourcePrecacherGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CResourcePrecacher::CResourcePrecacher  (line 63, @0x0000000001efc800, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CResourcePrecacher::CResourcePrecacher(CResourcePrecacher *const this)
{
  this->m_PrecacheList.m_Size = 0;
  this->m_PrecacheList.m_Memory.m_pMemory = 0;
  this->m_PrecacheList.m_Memory.m_nAllocationCount = 0;
  this->m_PrecacheList.m_Memory.m_nGrowSize = 0;
  this->m_hSpawngroup = 0;
  this->m_bPrecacheListChanged = 0;
}


// CResourcePrecacher::~CResourcePrecacher  (line 70, @0x0000000001efcb40, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CResourcePrecacher::UnloadSpawngroup, CUtlMemory<CUtlPair<CUtlSymbol, CUtlSymbol>, int>::Purge
void __fastcall CResourcePrecacher::~CResourcePrecacher(CResourcePrecacher *const this)
{
  bool v2; // zf

  CResourcePrecacher::UnloadSpawngroup(this, 1);
  v2 = (this->m_PrecacheList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PrecacheList.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlPair<CUtlSymbol,CUtlSymbol>,int>::Purge(&this->m_PrecacheList.m_Memory);
    if ( (this->m_PrecacheList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlPair<CUtlSymbol,CUtlSymbol>,int>::Purge(&this->m_PrecacheList.m_Memory);
  }
}


// CResourcePrecacher::UnloadSpawngroup  (line 78, @0x0000000001efca50, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, FastDelegate1, FreeNode, Links, Node_t, Remove, RemoveAt, RemoveSpawnGroupPrecacheCallback, SetLeftChild, SetRightChild, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::Unlink
// callers: CResourcePrecacher::~CResourcePrecacher, CResourcePrecacher::DispatchPrecache
void __fastcall CResourcePrecacher::UnloadSpawngroup(CResourcePrecacher *const this, bool bRelease)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r12
  __int64 v6; // rax
  CUtlMap<unsigned int,CUtlDelegate<void(const EventSpawnGroupPrecache_t&)>,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_hSpawngroup != 0 )
  {
    search.key = this->m_hSpawngroup;
    memset(&search.elem, 0, sizeof(search.elem));
    v4 = CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree,
           &search);
    v5 = v4;
    if ( v4 != 0xFFFF )
    {
      CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree,
        v4);
      v6 = v5;
      s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[v6].m_Left = v5;
      s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[v6].m_Right = s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_FirstFree;
      --s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_NumElements;
      s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_FirstFree = v5;
    }
    (*(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 9))(g_pSpawnGroupMgr, this->m_hSpawngroup, 0);
    if ( bRelease )
      (*(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 1))(g_pSpawnGroupMgr, this->m_hSpawngroup);
    this->m_hSpawngroup = 0;
  }
}


// CResourcePrecacher::DispatchPrecache  (line 93, @0x0000000001efcba0, libserver.so)  // inlines: AddSpawnGroupPrecacheCallback, CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CResourcePrecacher, CResourcePrecacher>, CUtlMemory, CUtlStringToken, CUtlVector, CUtlVectorBase, ClosurePtr, Convert<CResourcePrecacher, void (CResourcePrecacher::*)(const EventSpawnGroupPrecache_t&), void (detail::GenericClass::*)()>, CopyFrom<FastDelegate1<const EventSpawnGroupPrecache_t&, void> >, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, Element, FastDelegate1, FastDelegate1<CResourcePrecacher, CResourcePrecacher>, FastDelegate2, Find, FindInsertionPosition, Insert, InsertAt, InsertOrReplace, IsEmpty, LeftChild, Node_t, Purge, RemoveAll, RightChild, SetMementoFrom, SetToIdentity, SpawnGroupDesc_t, UtlMakeDelegate<CResourcePrecacher, CResourcePrecacher, const EventSpawnGroupPrecache_t&, void>, bindmemfunc<CResourcePrecacher, void (CResourcePrecacher::*)(const EventSpawnGroupPrecache_t&)>, operator!, operator(), operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CResourcePrecacher::UnloadSpawngroup, SetIdentityMatrix, CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::Find, CGameEntitySystem::ListenForSpawnGroupToFinish, CUtlMemory<CEntityHandle, int>::Purge, CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int, CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, _Unwind_Resume
// strings: "CResourcePrecacher"
// globals: CResourcePrecacher::PrecacheCallback(EventSpawnGroupPrecache_t const&)
void __fastcall CResourcePrecacher::DispatchPrecache(
        CResourcePrecacher *const this,
        SpawnGroupHandle_t hOwnerSpawnGroup,
        CBaseEntity *pCompletionListener,
        _QWORD *a4)
{
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  void (__fastcall *v11)(_QWORD *, __int64, SpawnGroupDesc_t *); // rax
  SpawnGroupHandle_t v14; // r15d
  unsigned __int16 v15; // ax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t,short unsigned int> *v16; // rax
  detail::GenericClass *v17; // rax
  void (*v18)(detail::GenericClass *); // rdx
  SpawnGroupHandle_t m_hSpawngroup; // esi
  unsigned __int16 m_Left; // ax
  unsigned __int8 v21; // dl
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // r15
  int v24; // ecx
  SpawnGroupCompletionDelegate_t pCopyFrom; // [rsp+0h] [rbp-120h]
  unsigned __int16 isLeft; // [rsp+Ch] [rbp-114h]
  CUtlMap<unsigned int,CUtlDelegate<void(const EventSpawnGroupPrecache_t&)>,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+30h] [rbp-F0h] BYREF
  SpawnGroupDesc_t desc; // [rsp+50h] [rbp-D0h] BYREF

  if ( this->m_bPrecacheListChanged )
  {
    this->m_bPrecacheListChanged = 0;
    CResourcePrecacher::UnloadSpawngroup(this, 0);
    memset(&desc.m_pWorldName, 0, 72);
    desc.m_iPriorityLoader = -2;
    desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    desc.m_flTimeoutInterval = 0.0;
    desc.m_pSaveFileName = 0;
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
    desc.m_bDontSpawnEntities = 0;
    desc.m_bBlockUntilLoaded = 0;
    desc.m_bLoadStreamingData = 1;
    desc.m_bCreateNewSceneWorld = 0;
    desc.m_bManualCompletion = 0;
    desc.m_bSetActivePostLoad = 0;
    SetIdentityMatrix(&desc.m_vecWorldOffset);
    desc.m_hOwner = hOwnerSpawnGroup;
    desc.m_pDescriptiveName = "CResourcePrecacher";
    desc.m_pWorldName = 0;
    desc.m_pEntityLumpName = 0;
    desc.m_pEntityFilterName = 0;
    desc.m_flTimeoutInterval = 2.0;
    desc.m_iPriorityLoader = -2;
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 1;
    desc.m_bDontSpawnEntities = 1;
    v14 = (*(*engine + 456LL))(engine, &desc);
    this->m_hSpawngroup = v14;
    memset(&search.elem, 0, sizeof(search.elem));
    search.key = v14;
    pCopyFrom.m_Closure.m_pthis = &search;
    v15 = CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
            &s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree,
            &search);
    if ( v15 == 0xFFFF )
    {
      search.key = v14;
      search.elem.m_Closure.m_pFunction.__pfn = CResourcePrecacher::PrecacheCallback;
      search.elem.m_Closure.m_pFunction.__delta = 0;
      search.elem.m_Closure.m_pthis = this;
      isLeft = s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Root;
      if ( s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Root == 0xFFFF )
      {
        v23 = -1;
        v24 = 0;
      }
      else
      {
        while ( 1 )
        {
          if ( s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_LessFunc.m_LessFunc(
                 &search.key,
                 &s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[isLeft].m_Data.key) )
          {
            m_Left = s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[isLeft].m_Left;
            v21 = 1;
          }
          else
          {
            m_Left = s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[isLeft].m_Right;
            v21 = 0;
          }
          if ( m_Left == 0xFFFF )
            break;
          isLeft = m_Left;
        }
        v23 = isLeft;
        v24 = v21;
      }
      HIDWORD(pCopyFrom.m_Closure.m_pFunction.__pfn) = v24;
      v22 = CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree,
              &search);
      CUtlRBTree<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CUtlDelegate<void ()(EventSpawnGroupPrecache_t const&)>,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree,
        v22,
        v23,
        SBYTE4(pCopyFrom.m_Closure.m_pFunction.__pfn));
      ++s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_NumElements;
    }
    else
    {
      v16 = &s_ResourcePrecacherGameSystem.m_SpawnGroupPrecacheDelegates.m_Tree.m_Elements.m_pMemory[v15];
      v16->m_Data.elem.m_Closure.m_pFunction.__pfn = CResourcePrecacher::PrecacheCallback;
      v16->m_Data.elem.m_Closure.m_pFunction.__delta = 0;
      v16->m_Data.elem.m_Closure.m_pthis = this;
    }
    if ( *a4 != 0 || a4[1] != 0 )
    {
      v17 = a4[1];
      *&search.key = *a4;
      v18 = a4[2];
      m_hSpawngroup = this->m_hSpawngroup;
      search.elem.m_Closure.m_pthis = v17;
      search.elem.m_Closure.m_pFunction.__pfn = v18;
      CGameEntitySystem::ListenForSpawnGroupToFinish(g_pGameEntitySystem, m_hSpawngroup, pCompletionListener, pCopyFrom);
    }
  }
  else
  {
    v6 = *a4;
    v7 = a4[1];
    if ( *a4 != 0 || v7 != 0 )
    {
      desc.m_vecWorldOffset.m_flMatVal[0][0] = 0.0;
      v8 = a4[2];
      *&desc.m_vecWorldOffset.m_flMatVal[0][2] = 0;
      v9 = this->m_hSpawngroup;
      *&desc.m_vecWorldOffset.m_flMatVal[1][0] = 0;
      v10 = (v6 + v8);
      v11 = v7;
      if ( (v7 & 1) != 0 )
        v11 = *&v7[*v10 - 1];
      v11(v10, v9, &desc);
      desc.m_vecWorldOffset.m_flMatVal[0][0] = 0.0;
      if ( (LODWORD(desc.m_vecWorldOffset.m_flMatVal[1][1]) & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityHandle,int>::Purge(&desc.m_vecWorldOffset.m_flMatVal[0][2]);
        if ( (LODWORD(desc.m_vecWorldOffset.m_flMatVal[1][1]) & 0xC0000000) == 0 )
          CUtlMemory<CEntityHandle,int>::Purge(&desc.m_vecWorldOffset.m_flMatVal[0][2]);
      }
    }
  }
}


// CResourcePrecacher::PrecacheCallback  (line 130, @0x0000000001efba80, libserver.so)
void __fastcall CResourcePrecacher::PrecacheCallback(
        CResourcePrecacher *const this,
        const EventSpawnGroupPrecache_t *const msg)
{
  ;
}


// CResourcePrecacher::AddResource  (line 149, @0x0000000001efc8d0, libserver.so)  // inlines: AddToTail, CUtlPair, CUtlSymbol, CopyConstruct<CUtlPair<CUtlSymbol, CUtlSymbol> >, Element, GrowMemory, HasElement, operator[]
// calls: CUtlSymbol::CUtlSymbol, CUtlVectorBase<CUtlPair<CUtlSymbol, CUtlSymbol>, CUtlMemory<CUtlPair<CUtlSymbol, CUtlSymbol>, int> >::Find, CUtlMemory<CUtlPair<CUtlSymbol, CUtlSymbol>, int>::Grow
void __fastcall CResourcePrecacher::AddResource(
        CResourcePrecacher *const this,
        const char *pType,
        const char *pFilename)
{
  UtlSymId_t m_Id; // r13
  UtlSymId_t v6; // r12
  __int64 m_Size; // r14
  int v8; // eax
  CUtlPair<CUtlSymbol,CUtlSymbol> *v9; // rax
  CUtlSymbol v10; // [rsp+0h] [rbp-50h] BYREF
  CUtlSymbol v11; // [rsp+10h] [rbp-40h] BYREF
  CUtlPair<CUtlSymbol,CUtlSymbol> newElement; // [rsp+20h] [rbp-30h] BYREF

  CUtlSymbol::CUtlSymbol(&v11, pFilename);
  CUtlSymbol::CUtlSymbol(&v10, pType);
  m_Id = v10.m_Id;
  v6 = v11.m_Id;
  newElement.first = v10;
  newElement.second = v11;
  if ( CUtlVectorBase<CUtlPair<CUtlSymbol,CUtlSymbol>,CUtlMemory<CUtlPair<CUtlSymbol,CUtlSymbol>,int>>::Find(
         &this->m_PrecacheList,
         &newElement) < 0 )
  {
    m_Size = this->m_PrecacheList.m_Size;
    v8 = this->m_PrecacheList.m_Size;
    if ( m_Size == this->m_PrecacheList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlPair<CUtlSymbol,CUtlSymbol>,int>::Grow(&this->m_PrecacheList.m_Memory, 1);
      v8 = this->m_PrecacheList.m_Size;
    }
    this->m_PrecacheList.m_Size = v8 + 1;
    v9 = &this->m_PrecacheList.m_Memory.m_pMemory[m_Size];
    if ( v9 != 0 )
    {
      v9->first.m_Id = m_Id;
      v9->second.m_Id = v6;
    }
    this->m_bPrecacheListChanged = 1;
  }
}


// CResourcePrecacher::RemoveResource  (line 160, @0x0000000001efc830, libserver.so)  // inlines: CUtlPair, CUtlSymbol, Element, FastRemove, FindAndFastRemove, MakeUtlPair<CUtlSymbol, CUtlSymbol>, memcpy, operator[]
// calls: CUtlSymbol::CUtlSymbol, CUtlVectorBase<CUtlPair<CUtlSymbol, CUtlSymbol>, CUtlMemory<CUtlPair<CUtlSymbol, CUtlSymbol>, int> >::Find
void __fastcall CResourcePrecacher::RemoveResource(
        CResourcePrecacher *const this,
        const char *pType,
        const char *pFilename)
{
  int v5; // eax
  char v6; // dl
  int m_Size; // edx
  int v8; // edx
  CUtlSymbol v9; // [rsp+0h] [rbp-40h] BYREF
  CUtlSymbol v10; // [rsp+10h] [rbp-30h] BYREF
  CUtlPair<CUtlSymbol,CUtlSymbol> src; // [rsp+20h] [rbp-20h] BYREF

  CUtlSymbol::CUtlSymbol(&v10, pFilename);
  CUtlSymbol::CUtlSymbol(&v9, pType);
  src.first = v9;
  src.second = v10;
  v5 = CUtlVectorBase<CUtlPair<CUtlSymbol,CUtlSymbol>,CUtlMemory<CUtlPair<CUtlSymbol,CUtlSymbol>,int>>::Find(
         &this->m_PrecacheList,
         &src);
  v6 = 0;
  if ( v5 == -1 )
  {
LABEL_6:
    this->m_bPrecacheListChanged |= v6;
    return;
  }
  m_Size = this->m_PrecacheList.m_Size;
  if ( m_Size > 0 )
  {
    v8 = m_Size - 1;
    if ( v5 != v8 )
    {
      this->m_PrecacheList.m_Memory.m_pMemory[v5] = this->m_PrecacheList.m_Memory.m_pMemory[v8];
      v8 = this->m_PrecacheList.m_Size - 1;
    }
    this->m_PrecacheList.m_Size = v8;
    v6 = 1;
    goto LABEL_6;
  }
  this->m_bPrecacheListChanged |= 1u;
}


