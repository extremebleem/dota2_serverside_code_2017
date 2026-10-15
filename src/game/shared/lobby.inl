
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::ILobby::~ILobby  (line 23, @0x00000000029a7440, libserver.so)  // inlines: ~IPlayerGroup
void __fastcall GCSDK::ILobby::~ILobby(GCSDK::ILobby *const this)
{
  this->_vptr_IPlayerGroup = off_4303FD0;
}


// GCSDK::ILobby::~ILobby  (line 23, @0x00000000029a8240, libserver.so)  // inlines: ~ILobby, ~IPlayerGroup
// calls: operator delete
void __fastcall GCSDK::ILobby::~ILobby(GCSDK::ILobby *const this)
{
  this->_vptr_IPlayerGroup = off_4303FD0;
  operator delete(this);
}


