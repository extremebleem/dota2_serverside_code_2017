
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconItemLeagueViewPass::~CEconItemLeagueViewPass  (line 20, @0x0000000002ec1920, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass
void __fastcall CEconItemLeagueViewPass::~CEconItemLeagueViewPass(CEconItemLeagueViewPass *const this)
{
  CSOEconItemLeagueViewPass *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6A90;
  CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass(v2);
  *this = off_40DB630;
}


// CEconItemLeagueViewPass::~CEconItemLeagueViewPass  (line 20, @0x0000000002ec1960, libserver.so)  // inlines: ~CEconItemLeagueViewPass, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass, operator delete
void __fastcall CEconItemLeagueViewPass::~CEconItemLeagueViewPass(CEconItemLeagueViewPass *const this)
{
  CSOEconItemLeagueViewPass *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6A90;
  CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass(v2);
  *this = off_40DB630;
  operator delete(this);
}


