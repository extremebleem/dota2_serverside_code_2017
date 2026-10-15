
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// EnableRenderingInfo_t::GetDebugString  (line 45, @0x0000000001ec48f0, libserver.so)  // inlines: CUtlString
// calls: CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString
// strings: "Enable : %d SplitScreen %X"
CUtlString __fastcall EnableRenderingInfo_t::GetDebugString(CUtlString *a1, const EnableRenderingInfo_t *const this)
{
  a1->m_pString = 0;
  CUtlString::Format(a1, "Enable : %d SplitScreen %X", this->m_bEnableRendering, this->m_nSplitscreenFlags);
  return a1;
}


