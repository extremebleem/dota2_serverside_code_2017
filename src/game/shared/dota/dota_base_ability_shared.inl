
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DOTAAbilityData_t::DOTAAbilityData_t  (line 117, @0x000000000245ae00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CDOTABaseAbility::LoadAbilityData
void __fastcall DOTAAbilityData_t::DOTAAbilityData_t(DOTAAbilityData_t *const this)
{
  this->m_vecItemCombinesInto.m_Size = 0;
  this->m_vecItemCombinesInto.m_Memory.m_pMemory = 0;
  this->m_vecItemCombinesInto.m_Memory.m_nAllocationCount = 0;
  this->m_vecItemCombinesInto.m_Memory.m_nGrowSize = 0;
  this->m_InvalidHeroes.m_Size = 0;
  this->m_InvalidHeroes.m_Memory.m_pMemory = 0;
  this->m_InvalidHeroes.m_Memory.m_nAllocationCount = 0;
  this->m_InvalidHeroes.m_Memory.m_nGrowSize = 0;
}


