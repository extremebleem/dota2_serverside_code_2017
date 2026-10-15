
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// MemAlloc_AllocAlignedFunc  (line 384, @0x0000000001ec3e80, libserver.so)  // inlines: ValueIsPowerOfTwo
// calls: Plat_IsInDebugSessionRaw
// callers: CRenderComponent::Connect, CSchemaMetadataSet::AddDynamicEntry, CSchemaClassInfo::RemoveNoschemaData
void *__fastcall MemAlloc_AllocAlignedFunc(size_t size, size_t align)
{
  size_t v2; // r12
  size_t v3; // rbx
  __int64 v4; // rax

  if ( size == 0 )
    return 0;
  if ( (align & (align - 1)) != 0 )
  {
    if ( Plat_IsInDebugSessionRaw() != 0 )
      __debugbreak();
    return 0;
  }
  else
  {
    v2 = -8;
    v3 = 15;
    if ( align > 8 )
    {
      v3 = align + 7;
      v2 = ~(align - 1);
    }
    v4 = (**g_pMemAlloc)(g_pMemAlloc, v3 + size);
    *((v2 & (v4 + v3)) - 8) = v4;
    return (v2 & (v4 + v3));
  }
}


