
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// netadr_t::netadr_t  (line 31, @0x00000000029aec90, libserver.so)
// calls: netadr_t::SetIP, netadr_t::SetPort, netadr_t::SetType
// callers: CDOTAGCServerSystem::UpdateGCServerInfo, CDOTAGCServerSystem::MatchSignOut
void __fastcall netadr_t::netadr_t(netadr_t *const this)
{
  netadr_t::SetIP(this, 0);
  netadr_t::SetPort(this, 0);
  netadr_t::SetType(this, NA_IP);
}


