
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// locksound_t::Schema_DynamicBinding  (line 20, @0x0000000001fba310, libserver.so)
// calls: locksound_t::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall locksound_t::Schema_DynamicBinding(const locksound_t *const this)
{
  locksound_t::Schema_VerifyBindingIsRegistered();
  return locksound_t::s_pSchemaBinding;
}


