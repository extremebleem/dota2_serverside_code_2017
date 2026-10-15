
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconItemDropRateBonus::~CEconItemDropRateBonus  (line 20, @0x0000000002ec1820, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus
void __fastcall CEconItemDropRateBonus::~CEconItemDropRateBonus(CEconItemDropRateBonus *const this)
{
  CSOEconItemDropRateBonus *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6990;
  CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus(v2);
  *this = off_40DB630;
}


// CEconItemDropRateBonus::~CEconItemDropRateBonus  (line 20, @0x0000000002ec1860, libserver.so)  // inlines: ~CEconItemDropRateBonus, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus, operator delete
void __fastcall CEconItemDropRateBonus::~CEconItemDropRateBonus(CEconItemDropRateBonus *const this)
{
  CSOEconItemDropRateBonus *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_47A6990;
  CSOEconItemDropRateBonus::~CSOEconItemDropRateBonus(v2);
  *this = off_40DB630;
  operator delete(this);
}


