
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SchemaTypeScope  (line 115, @0x0000000001f7a670, libserver.so)
// calls: GetNameOfModule
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, CDOTAVScriptGameSystem::InstallScriptBindings, CEntitySystem::AddComponentFieldUnserializer
ISchemaSystemTypeScope *__cdecl SchemaTypeScope()
{
  ISchemaSystemTypeScope *(__fastcall *v0)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax

  v0 = *(*g_pSchemaSystem + 104LL);
  NameOfModule = GetNameOfModule();
  return v0(g_pSchemaSystem, NameOfModule);
}


