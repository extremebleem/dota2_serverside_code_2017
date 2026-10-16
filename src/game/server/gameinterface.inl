
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSource2GameClients::~CSource2GameClients  (line 27, @0x0000000002248820, libserver.so)  // inlines: Purge, RemoveAll, ~CGameAppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CSource2GameClients::~CSource2GameClients(CSource2GameClients *const this)
{
  bool v2; // zf
  CUtlVectorBase<ResourceManifestDesc_t*,CUtlMemory<ResourceManifestDesc_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IAppSystem = off_404CD30;  // vptr: CTier2AppSystem<ISource2GameClients,0>
  this->m_manualManifests.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_manualManifests.m_Memory;
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
    if ( (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ResourceManifestDesc_t *,int>::Purge(p_m_Memory);
  }
}


// CSource2Server::~CSource2Server  (line 76, @0x00000000022488f0, libserver.so)  // inlines: Purge, RemoveAll, ~CGameAppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CSource2Server::~CSource2Server(CSource2Server *const this)
{
  bool v2; // zf
  CUtlVectorBase<ResourceManifestDesc_t*,CUtlMemory<ResourceManifestDesc_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IStreamEntitiesFromFileCompletion = &off_404E010;
  this->_vptr_IAppSystem = off_404D750;  // vptr: CTier2AppSystem<ISource2Server,0>
  this->m_manualManifests.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_manualManifests.m_Memory;
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
    if ( (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ResourceManifestDesc_t *,int>::Purge(p_m_Memory);
  }
}


