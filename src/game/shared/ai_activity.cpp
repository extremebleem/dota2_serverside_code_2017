
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ActivityList_RegisterActivityEnum  (line 18, @0x000000000205e170, libserver.so)  // inlines: ActivityList_RegisterSharedActivity, Count, Element, GetEnumerator, GetEnumeratorCount, SchemaTypeScope, operator[]
// calls: GetNameOfModule
// callers: ActivityList_RegisterSharedActivities, ActivityList_RegisterDotaActivities
void __fastcall ActivityList_RegisterActivityEnum(const char *pEnumName)
{
  __int64 (__fastcall *v2)(ISchemaSystem *, const char *); // r13
  const char *NameOfModule; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r12

  v2 = *(*g_pSchemaSystem + 104LL);
  NameOfModule = GetNameOfModule();
  v4 = v2(g_pSchemaSystem, NameOfModule);
  v5 = (*(*v4 + 24LL))(v4, pEnumName);
  v6 = v5;
  if ( v5 != 0 )
  {
    v7 = abs32(*(v5 + 40));
    if ( v7 != 0 )
    {
      v8 = 0;
      v9 = 56 * (v7 - 1 + 1LL);
      do
      {
        if ( g_pAnimationSystem != 0 )
          (*(*g_pAnimationSystem + 288LL))(g_pAnimationSystem, *(*(v6 + 32) + v8), *(*(v6 + 32) + v8 + 16));
        v8 += 56;
      }
      while ( v8 != v9 );
    }
  }
}


// ActivityList_RegisterSharedActivities  (line 34, @0x000000000205e220, libserver.so)
// calls: ActivityList_RegisterActivityEnum
// callers: CSource1GameConfiguration::RegisterGameActivities
// strings: "BaseActivity_t"
void __cdecl ActivityList_RegisterSharedActivities()
{
  ActivityList_RegisterActivityEnum("BaseActivity_t");
}


