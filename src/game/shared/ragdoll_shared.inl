
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdollLRURetirement::~CRagdollLRURetirement  (line 115, @0x000000000237e960, libserver.so)  // inlines: ~CAutoGameSystem, ~CUtlLinkedList, ~CUtlMemory
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem
void __fastcall CRagdollLRURetirement::~CRagdollLRURetirement(CRagdollLRURetirement *const this)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRUImportantRagdolls; // r12

  p_m_LRUImportantRagdolls = &this->m_LRUImportantRagdolls;
  this->_vptr_IGameSystem = off_40A3670;  // vptr: CRagdollLRURetirement
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRUImportantRagdolls);
  CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>::Purge(&p_m_LRUImportantRagdolls->m_Memory);
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRU);
  CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>::Purge(&this->m_LRU.m_Memory);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CRagdollLRURetirement::~CRagdollLRURetirement  (line 115, @0x000000000237e9c0, libserver.so)  // inlines: ~CAutoGameSystem, ~CRagdollLRURetirement, ~CUtlLinkedList, ~CUtlMemory
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CRagdollLRURetirement::~CRagdollLRURetirement(CRagdollLRURetirement *const this)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRUImportantRagdolls; // r12

  p_m_LRUImportantRagdolls = &this->m_LRUImportantRagdolls;
  this->_vptr_IGameSystem = off_40A3670;  // vptr: CRagdollLRURetirement
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRUImportantRagdolls);
  CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>::Purge(&p_m_LRUImportantRagdolls->m_Memory);
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRU);
  CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>::Purge(&this->m_LRU.m_Memory);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CRagdollLRURetirement::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 117, @0x0000000002370540, libserver.so)
void __fastcall CRagdollLRURetirement::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CRagdollLRURetirement *const this)
{
  ;
}


// CRagdollLRURetirement::DoesGameSystemReallocate  (line 117, @0x0000000002370550, libserver.so)
// globals: CRagdollLRURetirement::sm_Factory
bool __fastcall CRagdollLRURetirement::DoesGameSystemReallocate(const CRagdollLRURetirement *const this)
{
  return (*(CRagdollLRURetirement::sm_Factory->_vptr_IGameSystemFactory + 8))(CRagdollLRURetirement::sm_Factory);
}


// CRagdollLRURetirement::SetGameSystemGlobalPtrs  (line 117, @0x0000000002370570, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CRagdollLRURetirement::sm_Factory
void __fastcall CRagdollLRURetirement::SetGameSystemGlobalPtrs(CRagdollLRURetirement *const this, void *pValue)
{
  if ( CRagdollLRURetirement::sm_Factory != 0 )
    (*(CRagdollLRURetirement::sm_Factory->_vptr_IGameSystemFactory + 7))(CRagdollLRURetirement::sm_Factory, pValue);
}


// CRagdollLowViolenceManager::~CRagdollLowViolenceManager  (line 151, @0x0000000002372c70, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CRagdollLowViolenceManager::~CRagdollLowViolenceManager(CRagdollLowViolenceManager *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CRagdollLowViolenceManager::~CRagdollLowViolenceManager  (line 151, @0x0000000002372c90, libserver.so)  // inlines: ~CAutoGameSystem, ~CRagdollLowViolenceManager
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CRagdollLowViolenceManager::~CRagdollLowViolenceManager(CRagdollLowViolenceManager *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CRagdollLowViolenceManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 153, @0x00000000023705a0, libserver.so)
void __fastcall CRagdollLowViolenceManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CRagdollLowViolenceManager *const this)
{
  ;
}


// CRagdollLowViolenceManager::DoesGameSystemReallocate  (line 153, @0x00000000023705b0, libserver.so)
// globals: CRagdollLowViolenceManager::sm_Factory
bool __fastcall CRagdollLowViolenceManager::DoesGameSystemReallocate(const CRagdollLowViolenceManager *const this)
{
  return (*(CRagdollLowViolenceManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CRagdollLowViolenceManager::sm_Factory);
}


// CRagdollLowViolenceManager::SetGameSystemGlobalPtrs  (line 153, @0x00000000023705d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CRagdollLowViolenceManager::sm_Factory
void __fastcall CRagdollLowViolenceManager::SetGameSystemGlobalPtrs(
        CRagdollLowViolenceManager *const this,
        void *pValue)
{
  if ( CRagdollLowViolenceManager::sm_Factory != 0 )
    (*(CRagdollLowViolenceManager::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CRagdollLowViolenceManager::sm_Factory,
      pValue);
}


