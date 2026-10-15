
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHitboxSystem::~CHitboxSystem  (line 37, @0x0000000001ec2c00, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<unsigned int, int>::Purge, CUtlMemory<__vector(4) float, int>::Purge
void __fastcall CHitboxSystem::~CHitboxSystem(CHitboxSystem *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_nFreeList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nFreeList.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_nFreeList.m_Memory,
        CUtlMemory<unsigned int,int>::Purge(&this->m_nFreeList.m_Memory),
        (this->m_nFreeList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_nEntityIds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_nEntityIds.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<unsigned int,int>::Purge(p_m_Memory);
    v2 = (this->m_nEntityIds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_nEntityIds.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<unsigned int,int>::Purge(&this->m_nEntityIds.m_Memory);
  if ( (this->m_nEntityIds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_nEntityIds.m_Memory);
    v2 = (this->m_fl4Bounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_fl4Bounds.m_Size = 0;
    if ( !v2 )
      return;
    goto LABEL_9;
  }
LABEL_3:
  v2 = (this->m_fl4Bounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_fl4Bounds.m_Size = 0;
  if ( !v2 )
    return;
LABEL_9:
  CUtlMemory<float  {__vector},int>::Purge(&this->m_fl4Bounds.m_Memory);
  if ( (this->m_fl4Bounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float  {__vector},int>::Purge(&this->m_fl4Bounds.m_Memory);
}


