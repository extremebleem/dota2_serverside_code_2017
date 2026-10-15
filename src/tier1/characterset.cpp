
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CharacterSetBuild  (line 25, @0x0000000002f6d470, libserver.so)  // inlines: memset
// callers: CDOTA_ActionRunner::ValueNeedsExpressionCalculation, ParseFile, CCommand::CCommand, CSceneTokenProcessor::CSceneTokenProcessor, CUtlTokenizer::SetTokenDelimiters, CUtlTokenizer::CUtlTokenizer
void __fastcall CharacterSetBuild(characterset_t *pSetBuffer, const char *pszSetString)
{
  __int64 v2; // rax
  const char *v3; // rsi

  if ( pSetBuffer != 0 && pszSetString != 0 )
  {
    memset(pSetBuffer, 0, sizeof(characterset_t));
    v2 = *pszSetString;
    if ( v2 != 0 )
    {
      v3 = pszSetString + 1;
      do
      {
        ++v3;
        pSetBuffer->set[v2] = 1;
        v2 = *(v3 - 1);
      }
      while ( v2 != 0 );
    }
  }
}


