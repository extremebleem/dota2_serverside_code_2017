
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFourWheelVehiclePhysics::Schema_DynamicBinding  (line 35, @0x0000000002247220, libserver.so)
// calls: CFourWheelVehiclePhysics::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFourWheelVehiclePhysics::Schema_DynamicBinding(
        const CFourWheelVehiclePhysics_0 *const this)
{
  CFourWheelVehiclePhysics::Schema_VerifyBindingIsRegistered();
  return CFourWheelVehiclePhysics::s_pSchemaBinding;
}


