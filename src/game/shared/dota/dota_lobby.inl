
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTALobby::GetGroupID  (line 90, @0x00000000029a7450, libserver.so)
GCSDK::PlayerGroupID_t __fastcall CDOTALobby::GetGroupID(const CDOTALobby *const this)
{
  return *(this + 5);
}


// CDOTALobby::GetNumMembers  (line 92, @0x00000000029a7470, libserver.so)
int __fastcall CDOTALobby::GetNumMembers(const CDOTALobby *const this)
{
  return *(this + 14);
}


// CDOTALobby::GetSharedObject  (line 104, @0x00000000029a7490, libserver.so)
GCSDK::CSharedObject *__fastcall CDOTALobby::GetSharedObject(CDOTALobby *const this)
{
  return this;
}


// CDOTALobby::GetSharedObject  (line 105, @0x00000000029a74b0, libserver.so)
const GCSDK::CSharedObject *__fastcall CDOTALobby::GetSharedObject(const CDOTALobby *const this)
{
  return this;
}


// CDOTALobby::GetNumSentInvites  (line 203, @0x00000000029a74d0, libserver.so)
int __fastcall CDOTALobby::GetNumSentInvites(const CDOTALobby *const this)
{
  return *(this + 30);
}


// CDOTALobby::GetNumRecvInvites  (line 204, @0x00000000029a74f0, libserver.so)
int __fastcall CDOTALobby::GetNumRecvInvites(const CDOTALobby *const this)
{
  return 0;
}


// CDOTALobby::AllowInvites  (line 209, @0x00000000029a7510, libserver.so)
bool __fastcall CDOTALobby::AllowInvites(const CDOTALobby *const this)
{
  return 1;
}


// CDOTALobby::BPlayerMembershipLocked  (line 210, @0x00000000029a7530, libserver.so)  // inlines: BPlayersAllowedToLeave
bool __fastcall CDOTALobby::BPlayerMembershipLocked(const CDOTALobby *const this)
{
  bool result; // al

  result = 0;
  if ( *(this + 38) == 9 )
    return *(this + 33) != 3;
  return result;
}


