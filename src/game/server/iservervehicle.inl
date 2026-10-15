
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IServerVehicle::Schema_DynamicBinding  (line 25, @0x0000000002410bb0, libserver.so)
// calls: IServerVehicle::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IServerVehicle::Schema_DynamicBinding(const IServerVehicle *const this)
{
  IServerVehicle::Schema_VerifyBindingIsRegistered();
  return IServerVehicle::s_pSchemaBinding;
}


