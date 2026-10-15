
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NavHull_t::NavHullAny  (line 347, @0x0000000002f07260, libserver.so)
// calls: NavHull_t::NavHull_t
// callers: GetNavHullForSelectionConstraints, CPath::GetStartAreaAndPos
NavHull_t __cdecl NavHull_t::NavHullAny()
{
  float v0; // xmm2_4
  NavHull_t v3; // [rsp+10h] [rbp-20h] BYREF
  NavHull_t result; // 0:rax.8,8:xmm0_4.4

  NavHull_t::NavHull_t(&v3, -1.0, v0, 7u);
  *&result.m_hullCategory = *&v3.m_hullCategory;
  result.m_flHullHeight = v3.m_flHullHeight;
  return result;
}


