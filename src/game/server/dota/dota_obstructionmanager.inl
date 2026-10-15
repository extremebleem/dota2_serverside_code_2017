
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CObstructionObject::Schema_DynamicBinding  (line 201, @0x00000000026a08b0, libserver.so)
// calls: CObstructionObject::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CObstructionObject::Schema_DynamicBinding(
        const CObstructionObject *const this)
{
  CObstructionObject::Schema_VerifyBindingIsRegistered();
  return CObstructionObject::s_pSchemaBinding;
}


