
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CWorldGameSystem::~CWorldGameSystem  (line 54, @0x0000000001f94010, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlHashtable, ~CUtlMemory, ~WorldInfo_t
// calls: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int>::Purge, IGameSystem::~IGameSystem
void __fastcall CWorldGameSystem::~CWorldGameSystem(CWorldGameSystem *const this)
{
  CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *p_m_worldInfo; // r12

  this->_vptr_IGameSystem = off_3FCF090;
  p_m_worldInfo = &this->m_worldInfo;
  (*(*g_pDotaMapUtils + 96LL))(g_pDotaMapUtils, this->m_defaultWorldInfo.m_mapDataHandle);
  this->m_defaultWorldInfo.m_mapDataHandle = -1LL;
  CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::RemoveAll(p_m_worldInfo);
  if ( (this->m_worldInfo.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>::Purge(&p_m_worldInfo->m_table);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CWorldGameSystem::~CWorldGameSystem  (line 54, @0x0000000001f94080, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlHashtable, ~CUtlMemory, ~CWorldGameSystem, ~WorldInfo_t
// calls: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CWorldGameSystem::~CWorldGameSystem(CWorldGameSystem *const this)
{
  CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *p_m_worldInfo; // r12

  this->_vptr_IGameSystem = off_3FCF090;
  p_m_worldInfo = &this->m_worldInfo;
  (*(*g_pDotaMapUtils + 96LL))(g_pDotaMapUtils, this->m_defaultWorldInfo.m_mapDataHandle);
  this->m_defaultWorldInfo.m_mapDataHandle = -1LL;
  CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::RemoveAll(p_m_worldInfo);
  if ( (this->m_worldInfo.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>::Purge(&p_m_worldInfo->m_table);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CWorldGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 56, @0x0000000001f72170, libserver.so)
void __fastcall CWorldGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CWorldGameSystem *const this)
{
  ;
}


// CWorldGameSystem::DoesGameSystemReallocate  (line 56, @0x0000000001f72180, libserver.so)
// globals: CWorldGameSystem::sm_Factory
bool __fastcall CWorldGameSystem::DoesGameSystemReallocate(const CWorldGameSystem *const this)
{
  return (*(CWorldGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CWorldGameSystem::sm_Factory);
}


// CWorldGameSystem::SetGameSystemGlobalPtrs  (line 56, @0x0000000001f721a0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CWorldGameSystem::sm_Factory
void __fastcall CWorldGameSystem::SetGameSystemGlobalPtrs(CWorldGameSystem *const this, void *pValue)
{
  if ( CWorldGameSystem::sm_Factory != 0 )
    (*(CWorldGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CWorldGameSystem::sm_Factory, pValue);
}


