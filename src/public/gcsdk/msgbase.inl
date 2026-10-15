
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::IMsgNetPacket::~IMsgNetPacket  (line 80, @0x0000000003221570, libserver.so)  // inlines: ~CRefCount
void __fastcall GCSDK::IMsgNetPacket::~IMsgNetPacket(GCSDK::IMsgNetPacket *const this)
{
  this->_vptr_CRefCount = off_47D0430;
}


// GCSDK::IMsgNetPacket::~IMsgNetPacket  (line 80, @0x0000000003221680, libserver.so)  // inlines: ~CRefCount, ~IMsgNetPacket
// calls: operator delete
void __fastcall GCSDK::IMsgNetPacket::~IMsgNetPacket(GCSDK::IMsgNetPacket *const this)
{
  this->_vptr_CRefCount = off_47D0430;
  operator delete(this);
}


