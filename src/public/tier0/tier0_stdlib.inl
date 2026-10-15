
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// V_memset  (line 61, @0x000000000316b250, libserver.so)  // inlines: memset
// calls: memset
// callers: ConvertOldModelDiskDataToNewFormat<CMorphRectData, MorphRectData_t>, CMorphSetData::InitFromV0Data
void __fastcall V_memset(void *dest, int fill, size_t count)
{
  memset(dest, fill, count);
}


