
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IDamageHandler::Schema_DynamicBinding  (line 36, @0x000000000217b2e0, libserver.so)
// calls: IDamageHandler::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IDamageHandler::Schema_DynamicBinding(const IDamageHandler *const this)
{
  IDamageHandler::Schema_VerifyBindingIsRegistered();
  return IDamageHandler::s_pSchemaBinding;
}


