
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavSplice::~CNavSplice  (line 118, @0x0000000002f06d20, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CNavSplice::ExpansionConnection, int>::Purge, CUtlMemory<CNavEdge, int>::Purge, CUtlMemory<CNavCrossMeshConnection, int>::Purge, CUtlMemory<CNavArea*, int>::Purge, CUtlMemory<NavDirType, int>::Purge
void __fastcall CNavSplice::~CNavSplice(CNavSplice *const this)
{
  bool v2; // zf
  CUtlVectorBase<CNavSplice::ExpansionConnection,CUtlMemory<CNavSplice::ExpansionConnection,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_ExpansionConnections.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExpansionConnections.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_ExpansionConnections.m_Memory;
    CUtlMemory<CNavSplice::ExpansionConnection,int>::Purge(&this->m_ExpansionConnections.m_Memory);
    if ( (this->m_ExpansionConnections.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavSplice::ExpansionConnection,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_ExpansionCrossConnections.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExpansionCrossConnections.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavCrossMeshConnection,int>::Purge(&this->m_ExpansionCrossConnections.m_Memory);
    if ( (this->m_ExpansionCrossConnections.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavCrossMeshConnection,int>::Purge(&this->m_ExpansionCrossConnections.m_Memory);
  }
  v2 = (this->m_ExpansionAreaDirs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExpansionAreaDirs.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<NavDirType,int>::Purge(&this->m_ExpansionAreaDirs.m_Memory);
    if ( (this->m_ExpansionAreaDirs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NavDirType,int>::Purge(&this->m_ExpansionAreaDirs.m_Memory);
  }
  v2 = (this->m_ExpansionAreaSources.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExpansionAreaSources.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_ExpansionAreaSources.m_Memory);
    if ( (this->m_ExpansionAreaSources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_ExpansionAreaSources.m_Memory);
  }
  v2 = (this->m_ExpansionAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExpansionAreas.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_ExpansionAreas.m_Memory);
    if ( (this->m_ExpansionAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_ExpansionAreas.m_Memory);
  }
  v2 = (this->m_BlockedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_BlockedAreas.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&this->m_BlockedAreas.m_Memory);
    if ( (this->m_BlockedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&this->m_BlockedAreas.m_Memory);
  }
  v2 = (this->m_PerimeterEdges.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PerimeterEdges.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavEdge,int>::Purge(&this->m_PerimeterEdges.m_Memory);
    if ( (this->m_PerimeterEdges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavEdge,int>::Purge(&this->m_PerimeterEdges.m_Memory);
  }
  v2 = (this->m_HotEdges.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_HotEdges.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CNavEdge,int>::Purge(&this->m_HotEdges.m_Memory);
    if ( (this->m_HotEdges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavEdge,int>::Purge(&this->m_HotEdges.m_Memory);
  }
}


