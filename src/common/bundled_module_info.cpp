
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
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  const char *const *v11; // rbx

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
    v5 = CommandLine();
    if ( (*(*v5 + 32LL))(v5, "-use_tier2_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier2Bundle = 0;
    v6 = CommandLine();
    if ( (*(*v6 + 32LL))(v6, "-use_tier3_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier3Bundle = 0;
    v7 = CommandLine();
    if ( (*(*v7 + 32LL))(v7, "-no_tier2_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier2Bundle = 1;
    v8 = CommandLine();
    if ( (*(*v8 + 32LL))(v8, "-no_tier3_bundle") != 0 )
      RemapBundledModuleName(char const*)::s_bNoTier3Bundle = 1;
    v9 = CommandLine();
    v2 = (*(*v9 + 80LL))(v9, "-no_bundle_module", "");
    RemapBundledModuleName(char const*)::s_bCheckedCmd = 1;
    RemapBundledModuleName(char const*)::s_pNoBundleModule = v2;
  }
  if ( v2 == 0 || *v2 == 0 || (v10 = V_stricmp_fast(pModuleName, v2), result = pModuleName, v10 != 0) )
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
        v11 = s_pTier3BundleModules;
        while ( V_stricmp_fast(pModuleName, *v11) != 0 )
        {
          if ( ++v11 == &unk_3F6DD70 )
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


