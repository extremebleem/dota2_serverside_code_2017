
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// VPhysXWorldStepResults::~VPhysXWorldStepResults  (line 276, @0x0000000001f84190, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<void*, int>::Purge
// callers: CPhysicsGameSystem::OnSimulate
void __fastcall VPhysXWorldStepResults::~VPhysXWorldStepResults(VPhysXWorldStepResults *const this)
{
  bool v2; // zf
  CUtlVectorBase<void*,CUtlMemory<void*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_awake.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_awake.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_awake.m_Memory,
        CUtlMemory<void *,int>::Purge(&this->m_awake.m_Memory),
        (this->m_awake.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_asleep.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_asleep.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<void *,int>::Purge(p_m_Memory);
    v2 = (this->m_asleep.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_asleep.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<void *,int>::Purge(&this->m_asleep.m_Memory);
  if ( (this->m_asleep.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<void *,int>::Purge(&this->m_asleep.m_Memory);
    v2 = (this->m_wokeup.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_wokeup.m_Size = 0;
    if ( !v2 )
      return;
    goto LABEL_9;
  }
LABEL_3:
  v2 = (this->m_wokeup.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_wokeup.m_Size = 0;
  if ( !v2 )
    return;
LABEL_9:
  CUtlMemory<void *,int>::Purge(&this->m_wokeup.m_Memory);
  if ( (this->m_wokeup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<void *,int>::Purge(&this->m_wokeup.m_Memory);
}


