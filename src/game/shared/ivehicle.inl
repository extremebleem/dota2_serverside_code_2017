
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IVehicle::Schema_DynamicBinding  (line 26, @0x0000000002410b90, libserver.so)
// calls: IVehicle::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IVehicle::Schema_DynamicBinding(const IVehicle *const this)
{
  IVehicle::Schema_VerifyBindingIsRegistered();
  return IVehicle::s_pSchemaBinding;
}


