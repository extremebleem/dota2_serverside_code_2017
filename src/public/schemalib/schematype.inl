
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaType::InternalAs  (line 216, @0x00000000027d1d00, libserver.so)
// callers: CDOTAVScriptGameSystem::InstallScriptBindings, CEntitySystem::AddComponentProceduralKeys, CEntitySystem::AddKeyToUnserialize, CEntitySystem::AddComponentFieldUnserializer
const void *__fastcall CSchemaType::InternalAs(
        const CSchemaType *const this,
        SchemaTypeCategory_t nTypeCategory,
        SchemaAtomicCategory_t nAtomicCategory)
{
  const void *v4; // r12

  v4 = 0;
  if ( (**this)(this) != nTypeCategory )
    return v4;
  if ( nAtomicCategory != (*(*this + 48LL))(this) )
  {
    if ( nAtomicCategory == SchemaAtomicCategory_t::SCHEMA_ATOMIC_PLAIN )
      return this;
    return v4;
  }
  return this;
}


