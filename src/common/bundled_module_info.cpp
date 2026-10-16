
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RemapBundledModuleName  (line 49, @0x000000000306cf00, libserver.so)  // inlines: FindBundledModuleName
// calls: V_stricmp_fast, Plat_GetEnv, CommandLine
// callers: CAppSystemDict::LoadModuleInPath
// strings: "SOURCE2_USE_BUNDLES", "SOURCE2_NO_BUNDLES", "-use_tier2_bundle", "-use_tier3_bundle", "-no_tier2_bundle", "-no_tier3_bundle" (7 total)
// globals: RemapBundledModuleName(char const*)::s_bCheckedCmd, RemapBundledModuleName(char const*)::s_pNoBundleModule, RemapBundledModuleName(char const*)::s_bNoTier2Bundle, s_pTier2BundleModules, RemapBundledModuleName(char const*)::s_bNoTier3Bundle, s_pTier3BundleModules
const char *__fastcall RemapBundledModuleName(const char *pModuleName)
{
  const char *v2; // rax
  const char *const *v3; // rbx
  const char *result; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  const char *const *v16; // rbx

  if ( RemapBundledModuleName(char const*)::s_bCheckedCmd )
  {
    v2 = RemapBundledModuleName(char const*)::s_pNoBundleModule;
  }
  else
  {
    if ( Plat_GetEnv("SOURCE2_USE_BUNDLES") != 0 )
    {
      RemapBundledModuleName(char const*)::s_bNoTier2Bundle = 0;
      RemapBundledModuleName(char const*)::s_bNoTier3Bundle = 0;
    }
    if ( Plat_GetEnv("SOURCE2_NO_BUNDLES") != 0 )
    {
      RemapBundledModuleName(char const*)::s_bNoTier2Bundle = 1;
      RemapBundledModuleName(char const*)::s_bNoTier3Bundle = 1;
    }
    v6 = CommandLine(v5);
    if ( (*(*v6 + 32LL))(v6, "-use_tier2_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier2Bundle = 0;
    v8 = CommandLine(v7);
    if ( (*(*v8 + 32LL))(v8, "-use_tier3_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier3Bundle = 0;
    v10 = CommandLine(v9);
    if ( (*(*v10 + 32LL))(v10, "-no_tier2_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier2Bundle = 1;
    v12 = CommandLine(v11);
    if ( (*(*v12 + 32LL))(v12, "-no_tier3_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier3Bundle = 1;
    v14 = CommandLine(v13);
    v2 = (*(*v14 + 80LL))(v14, "-no_bundle_module", "");
    RemapBundledModuleName(char const*)::s_bCheckedCmd = 1;
    RemapBundledModuleName(char const*)::s_pNoBundleModule = v2;
  }
  if ( v2 == 0 || *v2 == 0 || (v15 = V_stricmp_fast(pModuleName, v2), result = pModuleName, v15 != 0) )
  {
    v3 = s_pTier2BundleModules;
    if ( RemapBundledModuleName(char const*)::s_bNoTier2Bundle )
    {
LABEL_6:
      if ( RemapBundledModuleName(char const*)::s_bNoTier3Bundle )
      {
        return pModuleName;
      }
      else
      {
        v16 = s_pTier3BundleModules;
        while ( V_stricmp_fast(pModuleName, *v16) != 0 )
        {
          if ( ++v16 == &unk_3F6DD70 )
            return pModuleName;
        }
        return "tier3_bundle";
      }
    }
    else
    {
      while ( V_stricmp_fast(pModuleName, *v3) != 0 )
      {
        if ( ++v3 == &unk_3F6DDC8 )
          goto LABEL_6;
      }
      return "tier2_bundle";
    }
  }
  return result;
}


