
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// prevent_interaction_t::Schema_DynamicBinding  (line 51, @0x00000000021df090, libserver.so)
// globals: prevent_interaction_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall prevent_interaction_t::Schema_DynamicBinding(
        const prevent_interaction_t *const this)
{
  return prevent_interaction_t::s_pSchemaBinding;
}


// CInteractionManager::Schema_DynamicBinding  (line 65, @0x00000000021df0a0, libserver.so)
// globals: CInteractionManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInteractionManager::Schema_DynamicBinding(
        const CInteractionManager *const this)
{
  return CInteractionManager::s_pSchemaBinding;
}


