
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconItemTournamentPassport::~CEconItemTournamentPassport  (line 31, @0x0000000002ec1b20, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport
void __fastcall CEconItemTournamentPassport::~CEconItemTournamentPassport(CEconItemTournamentPassport *const this)
{
  CSOEconItemTournamentPassport *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6C90;
  CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport(v2);
  *this = off_40DB630;
}


// CEconItemTournamentPassport::~CEconItemTournamentPassport  (line 31, @0x0000000002ec1b60, libserver.so)  // inlines: ~CEconItemTournamentPassport, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport, operator delete
void __fastcall CEconItemTournamentPassport::~CEconItemTournamentPassport(CEconItemTournamentPassport *const this)
{
  CSOEconItemTournamentPassport *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6C90;
  CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport(v2);
  *this = off_40DB630;
  operator delete(this);
}


