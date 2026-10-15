
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLightComponent::Schema_DynamicBinding  (line 29, @0x0000000001ec1c40, libserver.so)
// calls: CLightComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CLightComponent::Schema_DynamicBinding(const CLightComponent *const this)
{
  CLightComponent::Schema_VerifyBindingIsRegistered();
  return CLightComponent::s_pSchemaBinding;
}


