
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_UnitFilterCache::~CDOTA_UnitFilterCache  (line 287, @0x00000000027d5e50, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, IGameSystem::~IGameSystem
void __fastcall CDOTA_UnitFilterCache::~CDOTA_UnitFilterCache(CDOTA_UnitFilterCache *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_unitcategories; // r13
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v3; // rbx

  m_unitcategories = this->m_unitcategories;
  v3 = (this + 1);
  this->_vptr_IGameSystem = off_42B4430;
  this->_vptr_IEntityListener = &off_42B4588;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(--v3);
      if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v3->m_Memory);
        if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_unitcategories == v3 )
        goto LABEL_6;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v3->m_Memory);
  }
  while ( m_unitcategories != v3 );
LABEL_6:
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_UnitFilterCache::~CDOTA_UnitFilterCache  (line 287, @0x00000000027d5ee0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CDOTA_UnitFilterCache, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTA_UnitFilterCache::~CDOTA_UnitFilterCache(CDOTA_UnitFilterCache *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_unitcategories; // r13
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v3; // rbx

  m_unitcategories = this->m_unitcategories;
  v3 = (this + 1);
  this->_vptr_IGameSystem = off_42B4430;
  this->_vptr_IEntityListener = &off_42B4588;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(--v3);
      if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v3->m_Memory);
        if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_unitcategories == v3 )
        goto LABEL_6;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v3->m_Memory);
  }
  while ( m_unitcategories != v3 );
LABEL_6:
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_UnitFilterCache::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 289, @0x00000000027ce6f0, libserver.so)
void __fastcall CDOTA_UnitFilterCache::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_UnitFilterCache *const this)
{
  ;
}


// CDOTA_UnitFilterCache::DoesGameSystemReallocate  (line 289, @0x00000000027ce700, libserver.so)
// globals: CDOTA_UnitFilterCache::sm_Factory
bool __fastcall CDOTA_UnitFilterCache::DoesGameSystemReallocate(const CDOTA_UnitFilterCache *const this)
{
  return (*(CDOTA_UnitFilterCache::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_UnitFilterCache::sm_Factory);
}


// CDOTA_UnitFilterCache::SetGameSystemGlobalPtrs  (line 289, @0x00000000027ce720, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_UnitFilterCache::sm_Factory
void __fastcall CDOTA_UnitFilterCache::SetGameSystemGlobalPtrs(CDOTA_UnitFilterCache *const this, void *pValue)
{
  if ( CDOTA_UnitFilterCache::sm_Factory != 0 )
    (*(CDOTA_UnitFilterCache::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_UnitFilterCache::sm_Factory, pValue);
}


// CDOTA_Grinder::~CDOTA_Grinder  (line 327, @0x00000000027d6610, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CEntityHandle, int>::Purge
void __fastcall CDOTA_Grinder::~CDOTA_Grinder(CDOTA_Grinder *const this)
{
  this->_vptr_IGameSystem = off_42B45D0;
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&this->m_Buildings);
  if ( (this->m_Buildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_Buildings.m_Memory);
    if ( (this->m_Buildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&this->m_Buildings.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_Grinder::~CDOTA_Grinder  (line 327, @0x00000000027d6670, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CDOTA_Grinder, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CEntityHandle, int>::Purge
void __fastcall CDOTA_Grinder::~CDOTA_Grinder(CDOTA_Grinder *const this)
{
  this->_vptr_IGameSystem = off_42B45D0;
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&this->m_Buildings);
  if ( (this->m_Buildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_Buildings.m_Memory);
    if ( (this->m_Buildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&this->m_Buildings.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_Grinder::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 329, @0x00000000027ce750, libserver.so)
void __fastcall CDOTA_Grinder::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTA_Grinder *const this)
{
  ;
}


// CDOTA_Grinder::DoesGameSystemReallocate  (line 329, @0x00000000027ce760, libserver.so)
// globals: CDOTA_Grinder::sm_Factory
bool __fastcall CDOTA_Grinder::DoesGameSystemReallocate(const CDOTA_Grinder *const this)
{
  return (*(CDOTA_Grinder::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_Grinder::sm_Factory);
}


// CDOTA_Grinder::SetGameSystemGlobalPtrs  (line 329, @0x00000000027ce780, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_Grinder::sm_Factory
void __fastcall CDOTA_Grinder::SetGameSystemGlobalPtrs(CDOTA_Grinder *const this, void *pValue)
{
  if ( CDOTA_Grinder::sm_Factory != 0 )
    (*(CDOTA_Grinder::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_Grinder::sm_Factory, pValue);
}


