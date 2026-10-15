
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IHasAttributes::Schema_DynamicBinding  (line 36, @0x0000000002e4fe30, libserver.so)
// calls: IHasAttributes::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IHasAttributes::Schema_DynamicBinding(const IHasAttributes *const this)
{
  IHasAttributes::Schema_VerifyBindingIsRegistered();
  return IHasAttributes::s_pSchemaBinding;
}


