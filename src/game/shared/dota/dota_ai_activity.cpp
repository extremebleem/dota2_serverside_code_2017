
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ActivityList_RegisterDotaActivities  (line 11, @0x0000000002426380, libserver.so)
// calls: ActivityList_RegisterActivityEnum
// callers: CDOTAGameConfiguration::RegisterGameActivities
// strings: "GameActivity_t"
void __cdecl ActivityList_RegisterDotaActivities()
{
  ActivityList_RegisterActivityEnum("GameActivity_t");
}


