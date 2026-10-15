
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTier3AppSystem<ISource2GameEntities, 0>::~CTier3AppSystem  (line 18, @0x0000000002248950, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier2AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CTier3AppSystem<ISource2GameEntities,0>::~CTier3AppSystem(
        CTier3AppSystem<ISource2GameEntities,0> *const this)
{
  bool v2; // zf
  CUtlVectorBase<ResourceManifestDesc_t*,CUtlMemory<ResourceManifestDesc_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IAppSystem = off_404E270;
  this->m_manualManifests.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_manualManifests.m_Memory,
        CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory),
        (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IAppSystem = &off_403F870;
  }
  else
  {
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(p_m_Memory);
    this->_vptr_IAppSystem = &off_403F870;
  }
}


// CTier3AppSystem<ISource2GameEntities, 0>::~CTier3AppSystem  (line 18, @0x0000000002248b00, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: operator delete, CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CTier3AppSystem<ISource2GameEntities,0>::~CTier3AppSystem(
        CTier3AppSystem<ISource2GameEntities,0> *const this)
{
  bool v2; // zf
  CUtlVectorBase<ResourceManifestDesc_t*,CUtlMemory<ResourceManifestDesc_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IAppSystem = off_404E270;
  this->m_manualManifests.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_manualManifests.m_Memory;
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
    if ( (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ResourceManifestDesc_t *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IAppSystem = &off_403F870;
  operator delete(this);
}


// CTier3AppSystem<IGameConfiguration, 0>::GetTier  (line 23, @0x0000000001f03dd0, libserver.so)
AppSystemTier_t __fastcall CTier3AppSystem<IGameConfiguration,0>::GetTier(
        CTier3AppSystem<IGameConfiguration,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER3;
}


// CTier3AppSystem<ISource2ServerSerializers, 0>::GetTier  (line 23, @0x00000000020f3730, libserver.so)
AppSystemTier_t __fastcall CTier3AppSystem<ISource2ServerSerializers,0>::GetTier(
        CTier3AppSystem<ISource2ServerSerializers,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER3;
}


// CTier3AppSystem<ISource2GameEntities, 0>::GetTier  (line 23, @0x0000000002245e30, libserver.so)
AppSystemTier_t __fastcall CTier3AppSystem<ISource2GameEntities,0>::GetTier(
        CTier3AppSystem<ISource2GameEntities,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER3;
}


// CTier3AppSystem<ISource2Server, 0>::GetTier  (line 23, @0x0000000002245f10, libserver.so)
AppSystemTier_t __fastcall CTier3AppSystem<ISource2Server,0>::GetTier(CTier3AppSystem<ISource2Server,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER3;
}


// CTier3AppSystem<ISource2GameClients, 0>::GetTier  (line 23, @0x0000000002245f60, libserver.so)
AppSystemTier_t __fastcall CTier3AppSystem<ISource2GameClients,0>::GetTier(
        CTier3AppSystem<ISource2GameClients,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER3;
}


