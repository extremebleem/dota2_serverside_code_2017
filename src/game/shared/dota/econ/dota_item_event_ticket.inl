
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconItemEventTicket::~CEconItemEventTicket  (line 20, @0x0000000002ec1a20, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemEventTicket::~CSOEconItemEventTicket
void __fastcall CEconItemEventTicket::~CEconItemEventTicket(CEconItemEventTicket *const this)
{
  CSOEconItemEventTicket *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6B90;
  CSOEconItemEventTicket::~CSOEconItemEventTicket(v2);
  *this = off_40DB630;
}


// CEconItemEventTicket::~CEconItemEventTicket  (line 20, @0x0000000002ec1a60, libserver.so)  // inlines: ~CEconItemEventTicket, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemEventTicket::~CSOEconItemEventTicket, operator delete
void __fastcall CEconItemEventTicket::~CEconItemEventTicket(CEconItemEventTicket *const this)
{
  CSOEconItemEventTicket *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6B90;
  CSOEconItemEventTicket::~CSOEconItemEventTicket(v2);
  *this = off_40DB630;
  operator delete(this);
}


