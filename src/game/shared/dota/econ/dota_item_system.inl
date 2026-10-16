
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAItemSystem::~CDOTAItemSystem  (line 41, @0x0000000002e53840, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, StopListeningForAllEvents, operator[], ~CGameEventListener, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlString::FreeMemoryBlock, CEconItemSystem::~CEconItemSystem, CUtlMemory<CUtlString, int>::Purge
void __fastcall CDOTAItemSystem::~CDOTAItemSystem(CDOTAItemSystem *const this)
{
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v4; // rdi
  bool v5; // zf

  this->_vptr_IEconItemSystem = off_47A0C50;  // vptr: CDOTAItemSystem
  m_Size = this->m_vecLeagueImageNames.m_Size;
  this->_vptr_IDotaItemSystem = &off_47A0CF0;
  this->_vptr_IGameEventListener2 = off_47A0D18;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v4 = (this->m_vecLeagueImageNames.m_Memory.m_pMemory + i);
    if ( v4->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v4);
  }
  v5 = (this->m_vecLeagueImageNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecLeagueImageNames.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_vecLeagueImageNames.m_Memory);
    if ( (this->m_vecLeagueImageNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_vecLeagueImageNames.m_Memory);
  }
  v5 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v5 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  CEconItemSystem::~CEconItemSystem(this);
}


// CDOTAItemSystem::~CDOTAItemSystem  (line 41, @0x0000000002e53970, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, StopListeningForAllEvents, operator[], ~CDOTAItemSystem, ~CGameEventListener, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlString::FreeMemoryBlock, CEconItemSystem::~CEconItemSystem, operator delete, CUtlMemory<CUtlString, int>::Purge
void __fastcall CDOTAItemSystem::~CDOTAItemSystem(CDOTAItemSystem *const this)
{
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v4; // rdi
  bool v5; // zf

  this->_vptr_IEconItemSystem = off_47A0C50;  // vptr: CDOTAItemSystem
  m_Size = this->m_vecLeagueImageNames.m_Size;
  this->_vptr_IDotaItemSystem = &off_47A0CF0;
  this->_vptr_IGameEventListener2 = off_47A0D18;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v4 = (this->m_vecLeagueImageNames.m_Memory.m_pMemory + i);
    if ( v4->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v4);
  }
  v5 = (this->m_vecLeagueImageNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecLeagueImageNames.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_vecLeagueImageNames.m_Memory);
    if ( (this->m_vecLeagueImageNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_vecLeagueImageNames.m_Memory);
  }
  v5 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v5 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  CEconItemSystem::~CEconItemSystem(this);
  operator delete(this);
}


