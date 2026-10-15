
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IKeyValuesErrorSpew::Start  (line 219, @0x0000000002f7eed0, libserver.so)
void __fastcall IKeyValuesErrorSpew::Start(IKeyValuesErrorSpew *const this)
{
  ;
}


// IKeyValuesErrorSpew::Finish  (line 220, @0x0000000002f7eee0, libserver.so)
void __fastcall IKeyValuesErrorSpew::Finish(IKeyValuesErrorSpew *const this)
{
  ;
}


// KeyValues::GetString  (line 704, @0x0000000002ea6680, libserver.so)
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetString
// callers: CEconLootListDefinition::BInitFromKV, CEconItemDefinition::BInitFromKVOverride
const char *__fastcall KeyValues::GetString(
        KeyValues *const this,
        int keySymbol,
        const char *defaultValue,
        char *pScratchSpace,
        size_t nScratchSpaceCount)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(this, keySymbol);
  if ( Key != 0 )
    return CKeyValues_Data::Internal_GetString(Key, defaultValue, pScratchSpace, nScratchSpaceCount);
  else
    return defaultValue;
}


