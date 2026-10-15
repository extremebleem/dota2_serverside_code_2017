
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CProtoBufSharedObjectBase::~CProtoBufSharedObjectBase  (line 35, @0x00000000032389a0, libserver.so)  // inlines: ~CSharedObject
void __fastcall GCSDK::CProtoBufSharedObjectBase::~CProtoBufSharedObjectBase(
        GCSDK::CProtoBufSharedObjectBase *const this)
{
  this->_vptr_CSharedObject = off_40DB630;
}


// GCSDK::CProtoBufSharedObjectBase::~CProtoBufSharedObjectBase  (line 35, @0x00000000032389b0, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: operator delete
void __fastcall GCSDK::CProtoBufSharedObjectBase::~CProtoBufSharedObjectBase(
        GCSDK::CProtoBufSharedObjectBase *const this)
{
  this->_vptr_CSharedObject = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge, 2010>::~CProtoBufSharedObject  (line 78, @0x00000000024b4170, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge
void __fastcall GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010> *const this)
{
  CSODOTAPlayerChallenge *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_40DE2B0;
  CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge, 2010>::~CProtoBufSharedObject  (line 78, @0x00000000024b41b0, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge, operator delete
void __fastcall GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010> *const this)
{
  CSODOTAPlayerChallenge *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_40DE2B0;
  CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge(v2);
  *this = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState, 2008>::~CProtoBufSharedObject  (line 78, @0x00000000027dfe00, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAMapLocationState::~CSODOTAMapLocationState
void __fastcall GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008> *const this)
{
  CSODOTAMapLocationState *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_42B4C50;
  CSODOTAMapLocationState::~CSODOTAMapLocationState(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState, 2008>::~CProtoBufSharedObject  (line 78, @0x00000000027dfe40, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAMapLocationState::~CSODOTAMapLocationState, operator delete
void __fastcall GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008> *const this)
{
  CSODOTAMapLocationState *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_42B4C50;
  CSODOTAMapLocationState::~CSODOTAMapLocationState(v2);
  *this = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSODOTALobby, 2004>::~CProtoBufSharedObject  (line 78, @0x00000000029a8a90, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTALobby::~CSODOTALobby
void __fastcall GCSDK::CProtoBufSharedObject<CSODOTALobby,2004>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSODOTALobby,2004> *const this)
{
  CSODOTALobby *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_4304110;
  CSODOTALobby::~CSODOTALobby(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufSharedObject<CSODOTALobby, 2004>::~CProtoBufSharedObject  (line 78, @0x00000000029a8ad0, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTALobby::~CSODOTALobby, operator delete
void __fastcall GCSDK::CProtoBufSharedObject<CSODOTALobby,2004>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSODOTALobby,2004> *const this)
{
  CSODOTALobby *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_4304110;
  CSODOTALobby::~CSODOTALobby(v2);
  *this = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus, 38>::~CProtoBufSharedObject  (line 78, @0x0000000002ec17a0, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38> *const this)
{
  CSOEconItemDropRateBonus *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6990;
  CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus, 38>::~CProtoBufSharedObject  (line 78, @0x0000000002ec17e0, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus, operator delete
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38> *const this)
{
  CSOEconItemDropRateBonus *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6990;
  CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus(v2);
  *this = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass, 39>::~CProtoBufSharedObject  (line 78, @0x0000000002ec18a0, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39> *const this)
{
  CSOEconItemLeagueViewPass *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6A90;
  CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass, 39>::~CProtoBufSharedObject  (line 78, @0x0000000002ec18e0, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass, operator delete
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39> *const this)
{
  CSOEconItemLeagueViewPass *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6A90;
  CSOEconItemLeagueViewPass::~CSOEconItemLeagueViewPass(v2);
  *this = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket, 40>::~CProtoBufSharedObject  (line 78, @0x0000000002ec19a0, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemEventTicket::~CSOEconItemEventTicket
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40> *const this)
{
  CSOEconItemEventTicket *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6B90;
  CSOEconItemEventTicket::~CSOEconItemEventTicket(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket, 40>::~CProtoBufSharedObject  (line 78, @0x0000000002ec19e0, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemEventTicket::~CSOEconItemEventTicket, operator delete
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40> *const this)
{
  CSOEconItemEventTicket *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6B90;
  CSOEconItemEventTicket::~CSOEconItemEventTicket(v2);
  *this = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport, 42>::~CProtoBufSharedObject  (line 78, @0x0000000002ec1aa0, libserver.so)  // inlines: ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42> *const this)
{
  CSOEconItemTournamentPassport *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6C90;
  CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport, 42>::~CProtoBufSharedObject  (line 78, @0x0000000002ec1ae0, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport, operator delete
void __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42>::~CProtoBufSharedObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42> *const this)
{
  CSOEconItemTournamentPassport *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6C90;
  CSOEconItemTournamentPassport::~CSOEconItemTournamentPassport(v2);
  *this = off_40DB630;
  operator delete(this);
}


// GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge, 2010>::GetTypeID  (line 86, @0x0000000002498d60, libserver.so)
int __fastcall GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010>::GetTypeID(
        const GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010> *const this)
{
  return 2010;
}


// GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState, 2008>::GetTypeID  (line 86, @0x00000000027cecd0, libserver.so)
int __fastcall GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008>::GetTypeID(
        const GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008> *const this)
{
  return 2008;
}


// GCSDK::CProtoBufSharedObject<CSODOTALobby, 2004>::GetTypeID  (line 86, @0x00000000029a7f40, libserver.so)
int __fastcall GCSDK::CProtoBufSharedObject<CSODOTALobby,2004>::GetTypeID(
        const GCSDK::CProtoBufSharedObject<CSODOTALobby,2004> *const this)
{
  return 2004;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport, 42>::GetTypeID  (line 86, @0x0000000002ea2ba0, libserver.so)
int __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42>::GetTypeID(
        const GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42> *const this)
{
  return 42;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket, 40>::GetTypeID  (line 86, @0x0000000002ea2bc0, libserver.so)
int __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40>::GetTypeID(
        const GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40> *const this)
{
  return 40;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass, 39>::GetTypeID  (line 86, @0x0000000002ea2be0, libserver.so)
int __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39>::GetTypeID(
        const GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39> *const this)
{
  return 39;
}


// GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus, 38>::GetTypeID  (line 86, @0x0000000002ea2c00, libserver.so)
int __fastcall GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38>::GetTypeID(
        const GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38> *const this)
{
  return 38;
}


// GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge, 2010>::GetPObject  (line 96, @0x0000000002498d70, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010>::GetPObject(
        GCSDK::CProtoBufSharedObject<CSODOTAPlayerChallenge,2010> *const this)
{
  return (this + 8);
}


// GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState, 2008>::GetPObject  (line 96, @0x00000000027cece0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008>::GetPObject(
        GCSDK::CProtoBufSharedObject<CSODOTAMapLocationState,2008> *const this)
{
  return (this + 8);
}


// GCSDK::CProtoBufSharedObject<CSODOTALobby, 2004>::GetPObject  (line 96, @0x00000000029a7f50, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObject<CSODOTALobby,2004>::GetPObject(
        GCSDK::CProtoBufSharedObject<CSODOTALobby,2004> *const this)
{
  return (this + 8);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport, 42>::GetPObject  (line 96, @0x0000000002ea2bb0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42>::GetPObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemTournamentPassport,42> *const this)
{
  return (this + 8);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket, 40>::GetPObject  (line 96, @0x0000000002ea2bd0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40>::GetPObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemEventTicket,40> *const this)
{
  return (this + 8);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass, 39>::GetPObject  (line 96, @0x0000000002ea2bf0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39>::GetPObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemLeagueViewPass,39> *const this)
{
  return (this + 8);
}


// GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus, 38>::GetPObject  (line 96, @0x0000000002ea2c10, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38>::GetPObject(
        GCSDK::CProtoBufSharedObject<CSOEconItemDropRateBonus,38> *const this)
{
  return (this + 8);
}


// GCSDK::CProtoBufCachedSharedObject<CSODOTALobby, 2004>::~CProtoBufCachedSharedObject  (line 106, @0x00000000029a8b10, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTALobby::~CSODOTALobby
void __fastcall GCSDK::CProtoBufCachedSharedObject<CSODOTALobby,2004>::~CProtoBufCachedSharedObject(
        GCSDK::CProtoBufCachedSharedObject<CSODOTALobby,2004> *const this)
{
  CSODOTALobby *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_4304110;
  CSODOTALobby::~CSODOTALobby(v2);
  *this = off_40DB630;
}


// GCSDK::CProtoBufCachedSharedObject<CSODOTALobby, 2004>::~CProtoBufCachedSharedObject  (line 106, @0x00000000029a8b50, libserver.so)  // inlines: ~CProtoBufCachedSharedObject, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTALobby::~CSODOTALobby, operator delete
void __fastcall GCSDK::CProtoBufCachedSharedObject<CSODOTALobby,2004>::~CProtoBufCachedSharedObject(
        GCSDK::CProtoBufCachedSharedObject<CSODOTALobby,2004> *const this)
{
  CSODOTALobby *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_4304110;
  CSODOTALobby::~CSODOTALobby(v2);
  *this = off_40DB630;
  operator delete(this);
}


