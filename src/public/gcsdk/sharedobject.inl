
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CSharedObject::~CSharedObject  (line 35, @0x0000000002496da0, libserver.so)
void __fastcall GCSDK::CSharedObject::~CSharedObject(GCSDK::CSharedObject *const this)
{
  this->_vptr_CSharedObject = off_40DB630;
}


// GCSDK::CSharedObject::~CSharedObject  (line 35, @0x0000000002499110, libserver.so)  // inlines: ~CSharedObject
// calls: operator delete
void __fastcall GCSDK::CSharedObject::~CSharedObject(GCSDK::CSharedObject *const this)
{
  this->_vptr_CSharedObject = off_40DB630;
  operator delete(this);
}


// GCSDK::CreateSharedObjectSubclass<CDOTAPlayerChallenge>  (line 121, @0x00000000029a8670, libserver.so)  // inlines: CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: operator new, CSODOTAPlayerChallenge::CSODOTAPlayerChallenge, operator delete, _Unwind_Resume
GCSDK::CSharedObject *__cdecl GCSDK::CreateSharedObjectSubclass<CDOTAPlayerChallenge>()
{
  GCSDK::CSharedObject *v0; // rbx

  v0 = operator new(0x58u);
  memset(v0, 0, 0x58u);
  v0->_vptr_CSharedObject = &off_40DE2B0;
  CSODOTAPlayerChallenge::CSODOTAPlayerChallenge(&v0[1]);
  v0->_vptr_CSharedObject = off_40DE330;
  return v0;
}


// GCSDK::CreateSharedObjectSubclass<CDOTALobby>  (line 121, @0x00000000029af850, libserver.so)
// calls: operator new, CDOTALobby::CDOTALobby, operator delete, _Unwind_Resume
GCSDK::CSharedObject *__cdecl GCSDK::CreateSharedObjectSubclass<CDOTALobby>()
{
  CDOTALobby *v0; // rbx

  v0 = operator new(0x228u);
  CDOTALobby::CDOTALobby(v0);
  return v0;
}


// GCSDK::CreateSharedObjectSubclass<CEconItemTournamentPassport>  (line 121, @0x0000000002ea3810, libserver.so)  // inlines: CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: operator new, CSOEconItemTournamentPassport::CSOEconItemTournamentPassport, operator delete, _Unwind_Resume
GCSDK::CSharedObject *__cdecl GCSDK::CreateSharedObjectSubclass<CEconItemTournamentPassport>()
{
  GCSDK::CSharedObject *v0; // rbx

  v0 = operator new(0x48u);
  memset(v0, 0, 0x48u);
  v0->_vptr_CSharedObject = &off_47A6C90;
  CSOEconItemTournamentPassport::CSOEconItemTournamentPassport(&v0[1]);
  v0->_vptr_CSharedObject = off_47A6D10;
  return v0;
}


// GCSDK::CreateSharedObjectSubclass<CEconItemEventTicket>  (line 121, @0x0000000002ea3880, libserver.so)  // inlines: CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: operator new, CSOEconItemEventTicket::CSOEconItemEventTicket, operator delete, _Unwind_Resume
GCSDK::CSharedObject *__cdecl GCSDK::CreateSharedObjectSubclass<CEconItemEventTicket>()
{
  GCSDK::CSharedObject *v0; // rbx

  v0 = operator new(0x30u);
  memset(v0, 0, 0x30u);
  v0->_vptr_CSharedObject = &off_47A6B90;
  CSOEconItemEventTicket::CSOEconItemEventTicket(&v0[1]);
  v0->_vptr_CSharedObject = off_47A6C10;
  return v0;
}


// GCSDK::CreateSharedObjectSubclass<CEconItemLeagueViewPass>  (line 121, @0x0000000002ea38f0, libserver.so)  // inlines: CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: operator new, CSOEconItemLeagueViewPass::CSOEconItemLeagueViewPass, operator delete, _Unwind_Resume
GCSDK::CSharedObject *__cdecl GCSDK::CreateSharedObjectSubclass<CEconItemLeagueViewPass>()
{
  GCSDK::CSharedObject *v0; // rbx

  v0 = operator new(0x30u);
  memset(v0, 0, 0x30u);
  v0->_vptr_CSharedObject = &off_47A6A90;
  CSOEconItemLeagueViewPass::CSOEconItemLeagueViewPass(&v0[1]);
  v0->_vptr_CSharedObject = off_47A6B10;
  return v0;
}


// GCSDK::CreateSharedObjectSubclass<CEconItemDropRateBonus>  (line 121, @0x0000000002ea3960, libserver.so)  // inlines: CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: operator new, CSOEconItemDropRateBonus::CSOEconItemDropRateBonus, operator delete, _Unwind_Resume
GCSDK::CSharedObject *__cdecl GCSDK::CreateSharedObjectSubclass<CEconItemDropRateBonus>()
{
  GCSDK::CSharedObject *v0; // rbx

  v0 = operator new(0x48u);
  memset(v0, 0, 0x48u);
  v0->_vptr_CSharedObject = &off_47A6990;
  CSOEconItemDropRateBonus::CSOEconItemDropRateBonus(&v0[1]);
  v0->_vptr_CSharedObject = off_47A6A10;
  return v0;
}


// GCSDK::CreateSharedObjectSubclass<CEconItem>  (line 121, @0x0000000002ea39d0, libserver.so)
// calls: operator new, CEconItem::CEconItem, operator delete, _Unwind_Resume
GCSDK::CSharedObject *__cdecl GCSDK::CreateSharedObjectSubclass<CEconItem>()
{
  CEconItem *v0; // rbx

  v0 = operator new(0x50u);
  CEconItem::CEconItem(v0);
  return v0;
}


