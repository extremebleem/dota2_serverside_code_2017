
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// FS_LocalToGlobal_t::FS_LocalToGlobal_t  (line 16, @0x0000000001efa0f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, ~CUtlVector
// calls: CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >::SetCount, CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall FS_LocalToGlobal_t::FS_LocalToGlobal_t(
        FS_LocalToGlobal_t *const this,
        const FS_LocalToGlobal_t *const src)
{
  int m_Size; // r13d
  LocalFlexController_t *m_pMemory; // r12
  unsigned __int64 v5; // rax

  this->m_Mapping.m_Size = 0;
  this->m_Mapping.m_Memory.m_pMemory = 0;
  this->m_Mapping.m_Memory.m_nAllocationCount = 0;
  this->m_Mapping.m_Memory.m_nGrowSize = 0;
  m_Size = src->m_Mapping.m_Size;
  m_pMemory = src->m_Mapping.m_Memory.m_pMemory;
  CUtlVectorBase<LocalFlexController_t,CUtlMemory<LocalFlexController_t,int>>::SetCount(
    &this->m_Mapping,
    src->m_Mapping.m_Size);
  if ( m_Size > 0 )
  {
    v5 = 0;
    do
    {
      this->m_Mapping.m_Memory.m_pMemory[v5 / 4] = m_pMemory[v5 / 4];
      v5 += 4LL;
    }
    while ( v5 != 4LL * (m_Size - 1) + 4 );
  }
}


