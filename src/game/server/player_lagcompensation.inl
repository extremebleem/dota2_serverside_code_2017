
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLagCompensationManager::~CLagCompensationManager  (line 111, @0x0000000002341ea0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem
void __fastcall CLagCompensationManager::~CLagCompensationManager(CLagCompensationManager *const this)
{
  CUtlRBTree<CHandle<CBaseEntity>,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,short unsigned int>,short unsigned int> > *p_m_AdditionalEntities; // rdi

  p_m_AdditionalEntities = &this->m_AdditionalEntities;
  p_m_AdditionalEntities[-4].m_pElements = off_408AFB0;
  p_m_AdditionalEntities[-3].m_Elements.m_pMemory = &off_408B128;
  CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::Purge(p_m_AdditionalEntities);
  if ( (this->m_AdditionalEntities.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>::Purge(&this->m_AdditionalEntities.m_Elements);
  CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_CompensatedEntities.m_Tree);
  if ( (this->m_CompensatedEntities.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompensatedEntities.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CLagCompensationManager::~CLagCompensationManager  (line 111, @0x0000000002341f20, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CLagCompensationManager, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CLagCompensationManager::~CLagCompensationManager(CLagCompensationManager *const this)
{
  CUtlRBTree<CHandle<CBaseEntity>,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,short unsigned int>,short unsigned int> > *p_m_AdditionalEntities; // rdi

  p_m_AdditionalEntities = &this->m_AdditionalEntities;
  p_m_AdditionalEntities[-4].m_pElements = off_408AFB0;
  p_m_AdditionalEntities[-3].m_Elements.m_pMemory = &off_408B128;
  CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::Purge(p_m_AdditionalEntities);
  if ( (this->m_AdditionalEntities.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>::Purge(&this->m_AdditionalEntities.m_Elements);
  CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_CompensatedEntities.m_Tree);
  if ( (this->m_CompensatedEntities.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompensatedEntities.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CLagCompensationManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 113, @0x0000000002339810, libserver.so)
void __fastcall CLagCompensationManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CLagCompensationManager *const this)
{
  ;
}


// CLagCompensationManager::DoesGameSystemReallocate  (line 113, @0x0000000002339820, libserver.so)
// globals: CLagCompensationManager::sm_Factory
bool __fastcall CLagCompensationManager::DoesGameSystemReallocate(const CLagCompensationManager *const this)
{
  return (*(CLagCompensationManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CLagCompensationManager::sm_Factory);
}


// CLagCompensationManager::SetGameSystemGlobalPtrs  (line 113, @0x0000000002339840, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CLagCompensationManager::sm_Factory
void __fastcall CLagCompensationManager::SetGameSystemGlobalPtrs(CLagCompensationManager *const this, void *pValue)
{
  if ( CLagCompensationManager::sm_Factory != 0 )
    (*(CLagCompensationManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CLagCompensationManager::sm_Factory, pValue);
}


// CLagCompensationManager::Shutdown  (line 126, @0x0000000002344fa0, libserver.so)  // inlines: ClearHistory, FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~EntityLagData
// calls: CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> >::Purge, operator delete, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::Purge
void __fastcall CLagCompensationManager::Shutdown(CLagCompensationManager *const this)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)> *p_m_CompensatedEntities; // r14
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // r12

  m_Root = this->m_CompensatedEntities.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    p_m_CompensatedEntities = &this->m_CompensatedEntities;
  }
  else
  {
    m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
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
    p_m_CompensatedEntities = &this->m_CompensatedEntities;
    while ( 1 )
    {
      elem = m_pMemory[v4].m_Data.elem;
      if ( elem != 0 )
      {
        CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::RemoveAll(&elem->m_LagRecords);
        CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Purge(&elem->m_LagRecords.m_Memory);
        operator delete(elem);
      }
      m_Root = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_CompensatedEntities.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_CompensatedEntities->m_Tree);
}


// CLagCompensationManager::GameShutdown  (line 131, @0x0000000002345070, libserver.so)  // inlines: ClearHistory, FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~EntityLagData
// calls: CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> >::Purge, operator delete, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::Purge
void __fastcall CLagCompensationManager::GameShutdown(
        CLagCompensationManager *const this,
        const EventGameShutdown_t *const msg)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // si
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)> *p_m_CompensatedEntities; // r14
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // r12

  m_Root = this->m_CompensatedEntities.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    p_m_CompensatedEntities = &this->m_CompensatedEntities;
  }
  else
  {
    m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_CompensatedEntities = &this->m_CompensatedEntities;
    while ( 1 )
    {
      elem = m_pMemory[v5].m_Data.elem;
      if ( elem != 0 )
      {
        CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::RemoveAll(&elem->m_LagRecords);
        CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Purge(&elem->m_LagRecords.m_Memory);
        operator delete(elem);
      }
      m_Root = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_CompensatedEntities.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_CompensatedEntities->m_Tree);
}


// CLagCompensationManager::IsCurrentlyDoingLagCompensation  (line 149, @0x0000000002339870, libserver.so)
bool __fastcall CLagCompensationManager::IsCurrentlyDoingLagCompensation(const CLagCompensationManager *const this)
{
  return this->m_isCurrentlyDoingCompensation;
}


