
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ParseFile  (line 29, @0x0000000002f480b0, libserver.so)  // inlines: InitializeCharacterSets
// calls: CharacterSetBuild
// callers: ParseKeyValue, ParseFile
// strings: "{}()'", "{}()':"
// globals: InitializeCharacterSets(void)::s_CharacterSetInitialized, g_BreakSet, g_BreakSetIncludingColons
const char *__fastcall ParseFile(const char *pFileBytes, char *pToken, bool *pWasQuoted, characterset_t *pCharSet)
{
  const char *v7; // rbx
  characterset_t *v8; // rsi
  char i; // al
  int v10; // ecx
  char v11; // di
  char v12; // dl
  const char *result; // rax
  __int64 v14; // rdi
  char *v15; // rcx
  char v16; // r8
  bool v17; // zf
  const char *v18; // rax
  int v19; // ecx
  char *v20; // rdx
  __int64 v21; // rax

  v7 = pFileBytes;
  if ( pWasQuoted != 0 )
    *pWasQuoted = 0;
  if ( pFileBytes == 0 )
    return 0;
  if ( InitializeCharacterSets(void)::s_CharacterSetInitialized == 0 )
  {
    CharacterSetBuild(&g_BreakSet, "{}()'");
    CharacterSetBuild(&g_BreakSetIncludingColons, "{}()':");
    InitializeCharacterSets(void)::s_CharacterSetInitialized = 1;
  }
  *pToken = 0;
  v8 = &g_BreakSetIncludingColons;
  if ( pCharSet != 0 )
    v8 = pCharSet;
  i = *v7;
  v10 = *v7;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v10;
      if ( v10 > 32 )
        break;
      if ( v10 == 0 )
        return 0;
      i = *++v7;
      v10 = i;
    }
    if ( v10 != 47 )
      break;
    v16 = v7[1];
    if ( v16 == 47 )
    {
      if ( i != 10 && i != 0 )
      {
        for ( i = 47; ; i = v7[1] )
        {
          ++v7;
          if ( i == 10 || i == 0 )
            break;
        }
        goto LABEL_31;
      }
    }
    else
    {
      if ( v16 != 42 )
        goto LABEL_40;
      i = v7[2];
      v7 += 2;
      if ( i != 0 )
      {
        while ( 1 )
        {
          v17 = i == 42;
          i = v7[1];
          if ( v17 && i == 47 )
            break;
          ++v7;
          if ( i == 0 )
            goto LABEL_32;
        }
        v18 = v7;
        v7 += 2;
        i = v18[2];
LABEL_31:
        v10 = i;
      }
      else
      {
        i = 0;
LABEL_32:
        v10 = 0;
      }
    }
  }
  if ( v10 != 34 )
  {
LABEL_40:
    v19 = v7;
    v20 = pToken;
    if ( v8->set[i] != 0 )
    {
      *pToken = i;
      pToken[1] = 0;
      return v7 + 1;
    }
    else
    {
      do
      {
        *v20 = v11;
        v21 = *++v7;
        v11 = *v7;
        if ( v8->set[v21] != 0 )
          break;
        ++v20;
      }
      while ( v21 > 32 );
      pToken[v7 - v19] = 0;
      return v7;
    }
  }
  if ( pWasQuoted != 0 )
    *pWasQuoted = 1;
  v12 = v7[1];
  result = v7 + 2;
  if ( v12 != 34 && (LODWORD(v14) = 0, v15 = pToken, v12 != 0) )
  {
    do
    {
      *v15 = v12;
      ++result;
      LODWORD(v14) = v14 + 1;
      v12 = *(result - 1);
      ++v15;
    }
    while ( v12 != 0 && v12 != 34 );
    v14 = v14;
  }
  else
  {
    v14 = 0;
  }
  pToken[v14] = 0;
  return result;
}


// ParseFile  (line 131, @0x0000000002f482e0, libserver.so)
// calls: ParseFile
char *__fastcall ParseFile(char *pFileBytes, char *pToken, bool *pWasQuoted)
{
  return ParseFile(pFileBytes, pToken, pWasQuoted, 0);
}


