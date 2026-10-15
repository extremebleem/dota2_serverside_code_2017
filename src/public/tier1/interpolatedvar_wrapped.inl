
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IWrappedInterpolatedVar::State_t::~State_t  (line 113, @0x0000000001b3ac30, libserver.so)  // inlines: Clear, Purge, ResetDbgInfo, ~CUtlMemory, ~CUtlStack
// calls: CUtlMemory<CInterpolationTimeContext, int>::Purge
void __fastcall IWrappedInterpolatedVar::State_t::~State_t(IWrappedInterpolatedVar::State_t *const this)
{
  bool v2; // zf

  this->m_InterpolationTimeStack.m_Size = 0;
  if ( (this->m_InterpolationTimeStack.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_InterpolationTimeStack.m_pElements = this->m_InterpolationTimeStack.m_Memory.m_pMemory;
  }
  else
  {
    CUtlMemory<CInterpolationTimeContext,int>::Purge(&this->m_InterpolationTimeStack.m_Memory);
    v2 = (this->m_InterpolationTimeStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_InterpolationTimeStack.m_pElements = this->m_InterpolationTimeStack.m_Memory.m_pMemory;
    if ( v2 )
      CUtlMemory<CInterpolationTimeContext,int>::Purge(&this->m_InterpolationTimeStack.m_Memory);
  }
}


