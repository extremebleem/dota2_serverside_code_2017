
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAPlayerInventory::~CDOTAPlayerInventory  (line 686, @0x0000000002e5f2f0, libserver.so)  // inlines: Purge, ~CLoadoutSlotShuffle, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<itemid_t, CUtlMemory<itemid_t, int> >::RemoveAll, CUtlMemory<itemid_t, int>::Purge, CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlRBTree<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CPlayerInventory::~CPlayerInventory, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAPlayerInventory::~CDOTAPlayerInventory(CDOTAPlayerInventory *const this)
{
  CLoadoutSlotShuffle *p_m_ShuffledPlayerLoadoutSlots; // r14
  CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int> > *v3; // rbx
  bool v4; // zf

  p_m_ShuffledPlayerLoadoutSlots = &this->m_ShuffledPlayerLoadoutSlots;
  v3 = (this + 1);
  this->_vptr_ISharedObjectListener = &off_47A0650;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int>>::RemoveAll(--v3);
      if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<itemid_t,int>::Purge(&v3->m_Memory);
        if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( p_m_ShuffledPlayerLoadoutSlots == v3 )
        goto LABEL_6;
    }
    CUtlMemory<itemid_t,int>::Purge(&v3->m_Memory);
  }
  while ( p_m_ShuffledPlayerLoadoutSlots != v3 );
LABEL_6:
  CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_FreeLoadoutItems.m_Tree);
  v4 = (this->m_FreeLoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_FreeLoadoutItems.m_Tree.m_FirstFree = -1;
  if ( v4 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_FreeLoadoutItems.m_Tree.m_Elements);
    v4 = (this->m_FreeLoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_FreeLoadoutItems.m_Tree.m_LastAlloc.index = -1;
    if ( v4 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_FreeLoadoutItems.m_Tree.m_Elements);
  }
  else
  {
    this->m_FreeLoadoutItems.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_LoadoutItems.m_Tree);
  v4 = (this->m_LoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_LoadoutItems.m_Tree.m_FirstFree = -1;
  if ( !v4 )
  {
    this->m_LoadoutItems.m_Tree.m_LastAlloc.index = -1;
LABEL_10:
    CPlayerInventory::~CPlayerInventory(this);
    return;
  }
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_LoadoutItems.m_Tree.m_Elements);
  v4 = (this->m_LoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_LoadoutItems.m_Tree.m_LastAlloc.index = -1;
  if ( !v4 )
    goto LABEL_10;
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_LoadoutItems.m_Tree.m_Elements);
  CPlayerInventory::~CPlayerInventory(this);
}


// CDOTAPlayerInventory::~CDOTAPlayerInventory  (line 686, @0x0000000002e5f450, libserver.so)  // inlines: Purge, ~CDOTAPlayerInventory, ~CLoadoutSlotShuffle, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<itemid_t, CUtlMemory<itemid_t, int> >::RemoveAll, CUtlMemory<itemid_t, int>::Purge, CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlRBTree<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CPlayerInventory::~CPlayerInventory, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAPlayerInventory::~CDOTAPlayerInventory(CDOTAPlayerInventory *const this)
{
  CLoadoutSlotShuffle *p_m_ShuffledPlayerLoadoutSlots; // r14
  CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int> > *v3; // rbx
  bool v4; // zf

  p_m_ShuffledPlayerLoadoutSlots = &this->m_ShuffledPlayerLoadoutSlots;
  v3 = (this + 1);
  this->_vptr_ISharedObjectListener = &off_47A0650;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int>>::RemoveAll(--v3);
      if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<itemid_t,int>::Purge(&v3->m_Memory);
        if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( p_m_ShuffledPlayerLoadoutSlots == v3 )
        goto LABEL_6;
    }
    CUtlMemory<itemid_t,int>::Purge(&v3->m_Memory);
  }
  while ( p_m_ShuffledPlayerLoadoutSlots != v3 );
LABEL_6:
  CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_FreeLoadoutItems.m_Tree);
  v4 = (this->m_FreeLoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_FreeLoadoutItems.m_Tree.m_FirstFree = -1;
  if ( v4 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_FreeLoadoutItems.m_Tree.m_Elements);
    v4 = (this->m_FreeLoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_FreeLoadoutItems.m_Tree.m_LastAlloc.index = -1;
    if ( v4 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_FreeLoadoutItems.m_Tree.m_Elements);
  }
  else
  {
    this->m_FreeLoadoutItems.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_LoadoutItems.m_Tree);
  v4 = (this->m_LoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_LoadoutItems.m_Tree.m_FirstFree = -1;
  if ( v4 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_LoadoutItems.m_Tree.m_Elements);
    v4 = (this->m_LoadoutItems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_LoadoutItems.m_Tree.m_LastAlloc.index = -1;
    if ( v4 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_LoadoutItems.m_Tree.m_Elements);
  }
  else
  {
    this->m_LoadoutItems.m_Tree.m_LastAlloc.index = -1;
  }
  CPlayerInventory::~CPlayerInventory(this);
  operator delete(this);
}


// CDOTAPlayerInventory::GetItemInLoadout  (line 696, @0x0000000002e5bf20, libserver.so)
// calls: CDOTAPlayerInventory::GetItemInLoadout
CEconItemView *__fastcall CDOTAPlayerInventory::GetItemInLoadout(
        CDOTAPlayerInventory *const this,
        int nHeroID,
        int iSlotIndex)
{
  return CDOTAPlayerInventory::GetItemInLoadout(this, nHeroID, iSlotIndex, 0);
}


// CDOTAInventoryManager::~CDOTAInventoryManager  (line 847, @0x0000000002e5bab0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CInventoryManager, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int>::Purge, CUtlVectorBase<itemid_t, CUtlMemory<itemid_t, int> >::RemoveAll, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int>::Purge, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int>::Purge, IGameSystem::~IGameSystem, CUtlMemory<itemid_t, int>::Purge, CUtlMemory<CInventoryManager::inventories_t, int>::Purge
void __fastcall CDOTAInventoryManager::~CDOTAInventoryManager(CDOTAInventoryManager *const this)
{
  CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> *v2; // rbx
  CDOTAInventoryManager *v3; // rbx
  bool v4; // zf

  v2 = (this + 3624);
  *this = &off_47A04D0;
  CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::RemoveAll((this + 3624));
  if ( (*(this + 909) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>::Purge(v2);
  v3 = (this + 3584);
  CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int>>::RemoveAll((this + 3584));
  if ( (*(this + 901) & 0xC0000000) == 0 )
  {
    CUtlMemory<itemid_t,int>::Purge((this + 3592));
    if ( (*(this + 901) & 0xC0000000) == 0 )
      CUtlMemory<itemid_t,int>::Purge((this + 3592));
  }
  while ( (this + 128) != v3 )
  {
    v3 = (v3 - 216);
    (*(*v3 + 8LL))(v3);
  }
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::RemoveAll((this + 80));
  if ( (*(this + 23) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>::Purge(this + 5);
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::RemoveAll((this + 48));
  if ( (*(this + 15) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>::Purge(this + 3);
  *(this + 4) = 0;
  v4 = (*(this + 9) & 0xC0000000) == 0;
  *this = off_47A6E10;
  if ( v4 )
  {
    CUtlMemory<CInventoryManager::inventories_t,int>::Purge((this + 24));
    if ( (*(this + 9) & 0xC0000000) == 0 )
      CUtlMemory<CInventoryManager::inventories_t,int>::Purge((this + 24));
  }
  *this = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTAInventoryManager::~CDOTAInventoryManager  (line 847, @0x0000000002e5bc20, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTAInventoryManager, ~CInventoryManager, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int>::Purge, CUtlVectorBase<itemid_t, CUtlMemory<itemid_t, int> >::RemoveAll, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int>::Purge, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int>::Purge, IGameSystem::~IGameSystem, operator delete, CUtlMemory<itemid_t, int>::Purge, CUtlMemory<CInventoryManager::inventories_t, int>::Purge
void __fastcall CDOTAInventoryManager::~CDOTAInventoryManager(CDOTAInventoryManager *const this)
{
  CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> *v2; // rbx
  CDOTAInventoryManager *v3; // rbx
  bool v4; // zf

  v2 = (this + 3624);
  *this = &off_47A04D0;
  CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::RemoveAll((this + 3624));
  if ( (*(this + 909) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>::Purge(v2);
  v3 = (this + 3584);
  CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int>>::RemoveAll((this + 3584));
  if ( (*(this + 901) & 0xC0000000) == 0 )
  {
    CUtlMemory<itemid_t,int>::Purge((this + 3592));
    if ( (*(this + 901) & 0xC0000000) == 0 )
      CUtlMemory<itemid_t,int>::Purge((this + 3592));
  }
  while ( (this + 128) != v3 )
  {
    v3 = (v3 - 216);
    (*(*v3 + 8LL))(v3);
  }
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::RemoveAll((this + 80));
  if ( (*(this + 23) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>::Purge(this + 5);
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::RemoveAll((this + 48));
  if ( (*(this + 15) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>::Purge(this + 3);
  *(this + 4) = 0;
  v4 = (*(this + 9) & 0xC0000000) == 0;
  *this = off_47A6E10;
  if ( v4 )
  {
    CUtlMemory<CInventoryManager::inventories_t,int>::Purge((this + 24));
    if ( (*(this + 9) & 0xC0000000) == 0 )
      CUtlMemory<CInventoryManager::inventories_t,int>::Purge((this + 24));
  }
  *this = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTAInventoryManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 849, @0x0000000002e4eec0, libserver.so)
void __fastcall CDOTAInventoryManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTAInventoryManager *const this)
{
  ;
}


// CDOTAInventoryManager::DoesGameSystemReallocate  (line 849, @0x0000000002e4eed0, libserver.so)
// globals: CDOTAInventoryManager::sm_Factory
bool __fastcall CDOTAInventoryManager::DoesGameSystemReallocate(const CDOTAInventoryManager *const this)
{
  return (*(CDOTAInventoryManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAInventoryManager::sm_Factory);
}


// CDOTAInventoryManager::SetGameSystemGlobalPtrs  (line 849, @0x0000000002e4eef0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAInventoryManager::sm_Factory
void __fastcall CDOTAInventoryManager::SetGameSystemGlobalPtrs(CDOTAInventoryManager *const this, void *pValue)
{
  if ( CDOTAInventoryManager::sm_Factory != 0 )
    (*(CDOTAInventoryManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAInventoryManager::sm_Factory, pValue);
}


// CDOTAInventoryManager::GeneratePlayerInventoryObject  (line 980, @0x0000000002e5f2b0, libserver.so)
// calls: operator new, CDOTAPlayerInventory::CDOTAPlayerInventory, operator delete, _Unwind_Resume
CPlayerInventory *__fastcall CDOTAInventoryManager::GeneratePlayerInventoryObject(
        const CDOTAInventoryManager *const this)
{
  CDOTAPlayerInventory *v1; // rbx

  v1 = operator new(0x228u);
  CDOTAPlayerInventory::CDOTAPlayerInventory(v1);
  return v1;
}


