
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameConfiguration::OnClientFullyConnect  (line 48, @0x0000000001f037b0, libserver.so)
void __fastcall CGameConfiguration::OnClientFullyConnect(CGameConfiguration *const this, CEntityIndex nEntityIndex)
{
  ;
}


// CGameConfiguration::GetEncryptionKey  (line 57, @0x0000000001f037d0, libserver.so)
const unsigned __int8 *__fastcall CGameConfiguration::GetEncryptionKey(CGameConfiguration *const this)
{
  return 0;
}


// CGameConfiguration::FindProceduralEntity  (line 58, @0x0000000001f037e0, libserver.so)
CEntityInstance *__fastcall CGameConfiguration::FindProceduralEntity(CGameConfiguration *const this, const char *pName)
{
  return 0;
}


// CGameConfiguration::GetCurrentGameSessionConfigKeyValues  (line 71, @0x0000000001f037f0, libserver.so)
KeyValues *__fastcall CGameConfiguration::GetCurrentGameSessionConfigKeyValues(CGameConfiguration *const this)
{
  return this->m_pCurrentGameSessionConfigKeyValues;
}


