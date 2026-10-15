
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaTypeOf<CUtlArray<int, 24ul> >::Get  (line 360, @0x00000000026af840, libserver.so)  // inlines: Get
// callers: CDOTA_PlayerResource::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE
CSchemaType *__fastcall CSchemaTypeOf<CUtlArray<int,24ul>>::Get(ISchemaSystemTypeScope *pTypeScope)
{
  CSchemaType *(__fastcall *v2)(ISchemaSystemTypeScope *, __int64, __int64); // r12
  __int64 v3; // rax

  v2 = *(*pTypeScope + 104LL);
  v3 = (*(*pTypeScope + 40LL))(pTypeScope, 7);
  return v2(pTypeScope, v3, 24);
}


