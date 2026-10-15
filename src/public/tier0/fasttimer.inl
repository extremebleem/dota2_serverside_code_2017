
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCycleCount::GetMicroseconds64  (line 299, @0x0000000002f06f50, libserver.so)  // inlines: Plat_TickDiffMicroSec
// calls: Plat_GetCPUFrequency
// callers: CNavGenerator::PostCreateNavAreas, CNavGeneratorAAQuad::MergeGeneratedAreas
uint64 __fastcall CCycleCount::GetMicroseconds64(const CCycleCount *const this)
{
  unsigned __int64 CPUFrequency; // rax

  CPUFrequency = Plat_GetCPUFrequency();
  return 1000000 * (this->m_Int64 / CPUFrequency) + 1000000 * (this->m_Int64 % CPUFrequency) / CPUFrequency;
}


// CCycleCount::GetMilliseconds64  (line 314, @0x0000000002f06f90, libserver.so)  // inlines: Plat_TickDiffMilliSec
// calls: Plat_GetCPUFrequency
// callers: CNavGenerator::PostCreateNavAreas, CNavGeneratorAAQuad::MergeGeneratedAreas
uint64 __fastcall CCycleCount::GetMilliseconds64(const CCycleCount *const this)
{
  unsigned __int64 CPUFrequency; // rax

  CPUFrequency = Plat_GetCPUFrequency();
  return 1000 * (this->m_Int64 / CPUFrequency) + 1000 * (this->m_Int64 % CPUFrequency) / CPUFrequency;
}


