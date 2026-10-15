
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSource2Server::ApplyGameSettings  (line 36, @0x000000000214d4b0, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetName, V_stricmp_fast, KeyValues::GetString, KeyValues::FindKey, KeyValues::GetInt, HasLaunchOption, KeyValues::SetInt
// strings: "::ExecGameTypeCfg", "map/mapname", "launchoptions", "changelevel2", "reserved", "Members/numSlots"
void __fastcall CSource2Server::ApplyGameSettings(CSource2Server *const this, KeyValues *pKV)
{
  const char *Name; // rax
  const char *String; // rax
  KeyValues *Key; // rax
  KeyValues *v6; // r12

  if ( pKV != 0 )
  {
    Name = KeyValues::GetName(pKV);
    if ( V_stricmp_fast(Name, "::ExecGameTypeCfg") == 0 && engine != 0 )
    {
      String = KeyValues::GetString(pKV, "map/mapname", "", 0, 0);
      if ( String != 0 && *String != 0 )
      {
        Key = KeyValues::FindKey(pKV, "launchoptions", 0);
        v6 = Key;
        if ( (Key == 0 || KeyValues::GetInt(Key, "changelevel", 0) == 0 && KeyValues::GetInt(v6, "changelevel2", 0) == 0)
          && HasLaunchOption(v6, "reserved") )
        {
          KeyValues::SetInt(pKV, "Members/numSlots", 1);
        }
      }
    }
  }
}


