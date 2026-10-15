
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::IPlayerGroup::~IPlayerGroup  (line 49, @0x00000000029a73b0, libserver.so)
void __fastcall GCSDK::IPlayerGroup::~IPlayerGroup(GCSDK::IPlayerGroup *const this)
{
  this->_vptr_IPlayerGroup = off_4303FD0;
}


// GCSDK::IPlayerGroup::~IPlayerGroup  (line 49, @0x00000000029a8220, libserver.so)  // inlines: ~IPlayerGroup
// calls: operator delete
void __fastcall GCSDK::IPlayerGroup::~IPlayerGroup(GCSDK::IPlayerGroup *const this)
{
  this->_vptr_IPlayerGroup = off_4303FD0;
  operator delete(this);
}


// GCSDK::IPlayerGroup::BPlayerMembershipLocked  (line 71, @0x00000000029a73c0, libserver.so)
bool __fastcall GCSDK::IPlayerGroup::BPlayerMembershipLocked(const GCSDK::IPlayerGroup *const this)
{
  return 0;
}


// GCSDK::IPlayerGroup::BKickingAllowed  (line 72, @0x00000000029a73d0, libserver.so)
bool __fastcall GCSDK::IPlayerGroup::BKickingAllowed(const GCSDK::IPlayerGroup *const this)
{
  return 0;
}


