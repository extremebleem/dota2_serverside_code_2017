
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage::ShouldBreakChannel  (line 46, @0x000000000289ae40, libserver.so)
bool __fastcall CDOTA_Bot_AbilityUsage::ShouldBreakChannel(CDOTA_Bot_AbilityUsage *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage::ClearsIllusionState  (line 48, @0x000000000289ae50, libserver.so)
bool __fastcall CDOTA_Bot_AbilityUsage::ClearsIllusionState(CDOTA_Bot_AbilityUsage *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage::FindFilter  (line 58, @0x000000000289ae60, libserver.so)
__int64 __fastcall CDOTA_Bot_AbilityUsage::FindFilter(CDOTA_Bot_AbilityUsage *const this, EHANDLE hUnit)
{
  return 1;
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x000000000289ae70, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5890;
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x000000000289af20, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsage, ~CDOTA_Bot_AbilityUsageSpecific
// calls: operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5890;
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b2df0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C7850;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b2e10, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C7850;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b2f80, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C7C30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b2fa0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C7C30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3160, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C7F70;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3180, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C7F70;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3250, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8090;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3270, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8090;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3390, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8550;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b33b0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8550;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3520, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C89D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3540, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C89D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b36b0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8BB0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b36d0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8BB0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b37f0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8E30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3810, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C8E30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3930, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C9210;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3950, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C9210;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3a70, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C96F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028b3a90, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C96F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028bdf50, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C9F30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028bdf70, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42C9F30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be040, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CA250;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be060, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CA250;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be180, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CA4D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be1a0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CA4D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be2c0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CA750;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be2e0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CA750;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be450, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CAA30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be470, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CAA30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be5e0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CAC10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be600, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CAC10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be720, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB030;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be740, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB030;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be8b0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB210;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028be8d0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB210;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028bea40, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB4F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028bea60, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB4F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028beb80, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB870;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028beba0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CB870;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d02f0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CC190;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0310, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CC190;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0430, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CC5B0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0450, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CC5B0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d05c0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CC790;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d05e0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CC790;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0700, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CCCB0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0720, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CCCB0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d07a0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CCE70;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d07c0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CCE70;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d08e0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CD330;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0900, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CD330;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0a70, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CD510;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0a90, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CD510;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0bb0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CD830;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0bd0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CD830;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0d40, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDB10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0d60, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDB10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0e30, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDE30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028d0e50, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDE30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e0d90, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CE690;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e0db0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CE690;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e0e80, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEA50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e0ea0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEA50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e0fc0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEBD0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e0fe0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEBD0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1150, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEF50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1170, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEF50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1240, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CF210;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1260, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CF210;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1380, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CF6D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e13a0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CF6D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e14c0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CF950;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e14e0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CF950;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1600, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CFD30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1620, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CFD30;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1740, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0050;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1760, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0050;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e17e0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0310;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028e1800, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0310;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0040, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0D70;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0060, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0D70;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0130, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0F90;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0150, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0F90;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0270, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D12B0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0290, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D12B0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f03b0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D16D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f03d0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D16D0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f04a0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D1BD0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f04c0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D1BD0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f05e0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D1F50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0600, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D1F50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f06d0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D2270;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f06f0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D2270;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0860, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D25F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0880, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D25F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f09f0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D2970;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f0a10, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D2970;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f4db0, libserver.so)
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D3030;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus>::~CDOTA_Bot_AbilityUsageSpecific  (line 77, @0x00000000028f4dd0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus>::~CDOTA_Bot_AbilityUsageSpecific(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus> *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D3030;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsage::IsValidBotTarget  (line 101, @0x000000000289b080, libserver.so)  // inlines: IsConsideredHero, ToDOTABaseNPCHero
// calls: DOTACommander, CDOTA_Commander::GetIllusionState
// callers: CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_BrainSap::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_Nightmare::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::GetCurrentUsageDesire (57 total)
bool __fastcall CDOTA_Bot_AbilityUsage::IsValidBotTarget(CDOTA_Bot_AbilityUsage *const this, CDOTA_BaseNPC *pTarget)
{
  uint32 m_iUnitType; // eax
  unsigned __int8 (__fastcall *v5)(CDOTA_Bot_AbilityUsage *const, _QWORD); // r12
  CDOTA_Commander *v6; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax

  if ( pTarget == 0 )
    return 0;
  m_iUnitType = pTarget->m_iUnitType;
  if ( (m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
    return 0;
  if ( (m_iUnitType & 1) == 0 )
    return 1;
  v5 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
  v6 = DOTACommander();
  IllusionState = CDOTA_Commander::GetIllusionState(v6, pTarget);
  return v5(this, IllusionState) != 0;
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::GetGenericStunDesire  (line 119, @0x00000000028d1330, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetActiveModeDesire, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Length2D, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, GetBotTargetStatusCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie (16 total)
// callers: CDOTA_Bot_AbilityUsage_Lion_Voodoo::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lion_Impale::GetCurrentUsageDesire
// globals: jpt_28D14CA
__int64 __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::GetGenericStunDesire(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion> *const this,
        bool bUseWhenDefending,
        EHANDLE *phTarget,
        float fOverrideRange)
{
  __m128i v7; // xmm0
  CDOTA_Bot_Hero_Lion *m_pBot; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  float v11; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CDOTA_Bot_Hero_Lion *v16; // rdi
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rdi
  const Vector *v19; // rax
  __int64 v20; // r12
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // r13
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  CEntityInstance *v25; // rax
  const CBaseEntity *v26; // rdi
  const Vector *v27; // r14
  const Vector *v28; // rax
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rsi
  CDOTA_Bot_Hero_Lion *v31; // r12
  CEntityInstance *v32; // rax
  CDOTA_BaseNPC *v33; // r13
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // rdi
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rdi
  CDOTA_Bot_Hero_Lion *v38; // r12
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // rdx
  CEntityInstance *v41; // rax
  CEntityInstance *v42; // rbx
  __int64 v43; // rax
  CEntityInstance *v44; // rax
  CDOTA_Bot *v45; // rdi
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v48; // rax
  const CEntityHandle *v49; // rdi
  CEntityInstance *v50; // rax
  CDOTA_BaseNPC *v51; // r13
  CEntityInstance *v52; // rax
  CDOTA_BaseNPC *v53; // rsi
  CDOTA_Bot *v54; // rax
  CEntityIdentity *v55; // rax
  int v56; // edx
  __int16 v57; // cx
  CDOTA_Bot_Hero_Lion *v58; // r12
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rdi
  CDOTA_Bot_Hero_Lion *v61; // rdi
  CEntityInstance *v62; // rax
  const CBaseEntity *v63; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v65; // r12
  CDOTA_BaseNPC *v66; // rsi
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // r13
  CEntityInstance *v69; // rax
  CEntityInstance *v70; // rax
  CDOTA_BaseNPC *v71; // rsi
  CDOTA_Bot_Hero_Lion *v72; // r12
  CEntityInstance *v73; // rax
  CDOTA_BaseNPC *v74; // r13
  CEntityInstance *v75; // rax
  CDOTA_BaseNPC *v76; // rdi
  CEntityInstance *v77; // rax
  CDOTA_BaseNPC *v78; // rdi
  CDOTA_Bot_Hero_Lion *v79; // r12
  CEntityInstance *v80; // rax
  CDOTA_BaseNPC *v81; // rdx
  CEntityIdentity *v82; // rdx
  int v83; // eax
  __int16 v84; // cx
  float fRange; // [rsp+1Ch] [rbp-104h]
  float fChannelTimeRemaining; // [rsp+24h] [rbp-FCh] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+28h] [rbp-F8h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEntities_0; // [rsp+50h] [rbp-D0h] BYREF
  unsigned __int64 v90; // [rsp+E8h] [rbp-38h]

  fRange = fOverrideRange;
  v90 = __readfsqword(0x28u);
  if ( fOverrideRange == 0.0 )
    fRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v7 = LODWORD(fRange);
  pChannelTarget = 0;
  m_pBot = this->m_pBot;
  fChannelTimeRemaining = 0.0;
  *v7.m128i_i32 = fRange + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v7, &pChannelTarget, &fChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, pChannelTarget)
    && ((v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
     && BYTE3(v9[7]._vptr_IHandleEntity) != 0
      ? (v10 = v9)
      : (v10 = 0),
        IsBotTargetStatusValidCore(pChannelTarget, v10, 251, -1.0, this->m_pAbility)
     && (v11 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining > v11)) )
  {
    if ( pChannelTarget != 0 && (m_pEntity = pChannelTarget->m_pEntity) != 0 )
    {
LABEL_11:
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(phTarget->m_Index) = v14 | phTarget->m_Index & 0x8000;
      phTarget->m_Index = (v13 << 15) | phTarget->m_Index & 0x7FFF;
      return 3;
    }
    else
    {
LABEL_66:
      phTarget->m_Index = -1;
      return 3;
    }
  }
  else
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 1u:
        for ( i = 0; ; ++i )
        {
          if ( i >= CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
            goto LABEL_35;
          OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          if ( i < OpposingTeamCommander->m_BotList.m_Size
            && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
          {
            v48 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
            v49 = 0;
            if ( i < v48->m_BotList.m_Size )
              v49 = v48->m_BotList.m_Memory.m_pMemory[i];
            v50 = CEntityHandle::operator CEntityInstance *(v49 + 39);
            if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
              v51 = v50;
            else
              v51 = 0;
            if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v51) )
            {
              v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 )
                v53 = v52;
              else
                v53 = 0;
              if ( IsBotTargetStatusValidCore(v51, v53, 251, fRange, this->m_pAbility) )
              {
                v54 = v51->m_pBot;
                if ( v54 != 0 && v54->m_nAttackingTowers > 0 )
                  break;
              }
            }
          }
        }
        v55 = v51->m_pEntity;
        if ( v55 != 0 )
        {
          v56 = (v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1);
          if ( v55->m_EHandle.m_Index == -1 )
            v57 = 0x7FFF;
          else
            v57 = v55->m_EHandle.m_Index & 0x7FFF;
          LOWORD(phTarget->m_Index) = v57 | phTarget->m_Index & 0x8000;
          phTarget->m_Index = (v56 << 15) | phTarget->m_Index & 0x7FFF;
          return 2;
        }
        else
        {
          phTarget->m_Index = -1;
          return 2;
        }
      case 2u:
        v70 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v70 != 0 && BYTE3(v70[7]._vptr_IHandleEntity) != 0 )
          v71 = v70;
        else
          v71 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v71) )
          goto LABEL_35;
        v72 = this->m_pBot;
        v73 = CEntityHandle::operator CEntityInstance *(&v72->m_hUnit);
        if ( v73 != 0 && BYTE3(v73[7]._vptr_IHandleEntity) != 0 )
          v74 = v73;
        else
          v74 = 0;
        v75 = CEntityHandle::operator CEntityInstance *(&v72->m_hTarget);
        if ( v75 != 0 && BYTE3(v75[7]._vptr_IHandleEntity) != 0 )
          v76 = v75;
        else
          v76 = 0;
        if ( !IsBotTargetStatusValidCore(v76, v74, 251, fRange, this->m_pAbility) )
          goto LABEL_35;
        v77 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v77 == 0 || (v78 = v77, BYTE3(v77[7]._vptr_IHandleEntity) == 0) )
          v78 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v78) )
          goto LABEL_35;
        v79 = this->m_pBot;
        v80 = CEntityHandle::operator CEntityInstance *(&v79->m_hTarget);
        if ( v80 != 0 && BYTE3(v80[7]._vptr_IHandleEntity) != 0 )
          v81 = v80;
        else
          v81 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v79->m_pTeamCommander, v79, v81) )
          goto LABEL_35;
        phTarget->m_Index = this->m_pBot->m_hTarget;
        return 3;
      case 4u:
        v58 = this->m_pBot;
        if ( v58->m_fModeDesires[(*(v58->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v58->m_pActiveBotMode)] < 0.75 )
          goto LABEL_35;
        v59 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
          v60 = v59;
        else
          v60 = 0;
        if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v60) <= 2.0 )
          goto LABEL_35;
        v61 = this->m_pBot;
        hEntities_0.m_Size = 0;
        hEntities_0.m_Memory.m_nAllocationCount = 32;
        hEntities_0.m_Memory.m_nGrowSize = 0x80000000;
        hEntities_0.m_Memory.m_pMemory = &hEntities_0.m_FixedMemory;
        CDOTA_Bot::GetNearbyHeroes(v61, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities_0, fRange);
        v62 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
          v63 = v62;
        else
          v63 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v63);
        SortEHANDLEVectorByLocation(&hEntities_0, AbsOrigin, 0);
        if ( hEntities_0.m_Size <= 0 )
          goto LABEL_146;
        v65 = 0;
        while ( 1 )
        {
          v67 = CEntityHandle::operator CEntityInstance *(&hEntities_0.m_Memory.m_pMemory[v65]);
          if ( v67 == 0
            || BYTE3(v67[7]._vptr_IHandleEntity) == 0
            || (v68 = v67, (v67[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
          {
            v68 = 0;
          }
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v68) )
          {
            v69 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v69 != 0 && BYTE3(v69[7]._vptr_IHandleEntity) != 0 )
              v66 = v69;
            else
              v66 = 0;
            if ( IsBotTargetStatusValidCore(v68, v66, 251, fRange, this->m_pAbility)
              && !CDOTA_BaseNPC::IsMovementImpaired(v68)
              && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v68) )
            {
              break;
            }
          }
          if ( hEntities_0.m_Size <= ++v65 )
          {
LABEL_146:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities_0);
            goto LABEL_35;
          }
        }
        phTarget->m_Index = hEntities_0.m_Memory.m_pMemory[v65];
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities_0);
        return 2;
      case 0xBu:
      case 0xCu:
      case 0xDu:
        if ( !bUseWhenDefending )
          goto LABEL_35;
        v16 = this->m_pBot;
        hEntities.m_Size = 0;
        hEntities.m_Memory.m_pMemory = 0;
        hEntities.m_Memory.m_nAllocationCount = 0;
        hEntities.m_Memory.m_nGrowSize = 0;
        CDOTA_Bot::GetNearbyHeroes(v16, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, fRange);
        v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          v18 = v17;
        else
          v18 = 0;
        v19 = CBaseEntity::GetAbsOrigin(v18);
        SortEHANDLEVectorByLocation(&hEntities, v19, 0);
        if ( hEntities.m_Size <= 0 )
          goto LABEL_34;
        v20 = 0;
        break;
      case 0x12u:
        v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
          v30 = v29;
        else
          v30 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v30) )
          goto LABEL_35;
        v31 = this->m_pBot;
        v32 = CEntityHandle::operator CEntityInstance *(&v31->m_hUnit);
        if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
          v33 = v32;
        else
          v33 = 0;
        v34 = CEntityHandle::operator CEntityInstance *(&v31->m_hTarget);
        if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
          v35 = v34;
        else
          v35 = 0;
        if ( !IsBotTargetStatusValidCore(v35, v33, 251, fRange, this->m_pAbility) )
          goto LABEL_35;
        v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v36 == 0 || (v37 = v36, BYTE3(v36[7]._vptr_IHandleEntity) == 0) )
          v37 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v37) )
          goto LABEL_35;
        v38 = this->m_pBot;
        v39 = CEntityHandle::operator CEntityInstance *(&v38->m_hTarget);
        if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
          v40 = v39;
        else
          v40 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v38->m_pTeamCommander, v38, v40) )
          goto LABEL_35;
        v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        v42 = v41;
        if ( v41 == 0 )
          goto LABEL_35;
        if ( BYTE3(v41[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_35;
        if ( (v41[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_35;
        v43 = *&v41[45].m_worldGroupId.m_nHashCode;
        if ( v43 == 0 )
          goto LABEL_35;
        hEntities.m_Size = *(v43 + 712);
        v44 = CEntityHandle::operator CEntityInstance *(&hEntities);
        if ( v44 == 0 )
          goto LABEL_35;
        if ( BYTE3(v44[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_35;
        if ( (v44[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_35;
        v45 = *&v44[45].m_worldGroupId.m_nHashCode;
        if ( v45 == 0 || !CDOTA_Bot::IsAboutToDie(v45) )
          goto LABEL_35;
        m_pEntity = v42->m_pEntity;
        if ( m_pEntity == 0 )
          goto LABEL_66;
        goto LABEL_11;
      default:
        goto LABEL_35;
    }
    do
    {
      v21 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v20]);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v22) )
      {
        v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v24 = v23;
        else
          v24 = 0;
        if ( (GetBotTargetStatusCore(v22, v24, -1.0, this->m_pAbility) & 0xFB) == 0 )
        {
          v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v25 == 0 || (v26 = v25, BYTE3(v25[7]._vptr_IHandleEntity) == 0) )
            v26 = 0;
          v27 = CBaseEntity::GetAbsOrigin(v26);
          v28 = CBaseEntity::GetAbsOrigin(v22);
          if ( (fsqrt(((v28->x - v27->x) * (v28->x - v27->x)) + ((v28->y - v27->y) * (v28->y - v27->y))) - fRange) < 100.0 )
          {
            if ( v22 != 0 && (v82 = v22->m_pEntity) != 0 )
            {
              v83 = (v82->m_EHandle.m_Index >> 15) - (v82->m_flags & 1);
              v84 = 0x7FFF;
              if ( v82->m_EHandle.m_Index != -1 )
                v84 = v82->m_EHandle.m_Index & 0x7FFF;
              LOWORD(phTarget->m_Index) = v84 | phTarget->m_Index & 0x8000;
              phTarget->m_Index = (v83 << 15) | phTarget->m_Index & 0x7FFF;
            }
            else
            {
              phTarget->m_Index = -1;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
            return 2;
          }
        }
      }
      ++v20;
    }
    while ( hEntities.m_Size > v20 );
LABEL_34:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_35:
    phTarget->m_Index = -1;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::GetGenericStunDesire  (line 119, @0x00000000028f1030, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetActiveModeDesire, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Length2D, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, GetBotTargetStatusCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie (16 total)
// callers: CDOTA_Bot_AbilityUsage_Sven_StormBolt::GetCurrentUsageDesire
// globals: jpt_28F11CA
__int64 __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::GetGenericStunDesire(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven> *const this,
        bool bUseWhenDefending,
        EHANDLE *phTarget,
        float fOverrideRange)
{
  __m128i v7; // xmm0
  CDOTA_Bot_Hero_Sven *m_pBot; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  float v11; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CDOTA_Bot_Hero_Sven *v16; // rdi
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rdi
  const Vector *v19; // rax
  __int64 v20; // r12
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // r13
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  CEntityInstance *v25; // rax
  const CBaseEntity *v26; // rdi
  const Vector *v27; // r14
  const Vector *v28; // rax
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rsi
  CDOTA_Bot_Hero_Sven *v31; // r12
  CEntityInstance *v32; // rax
  CDOTA_BaseNPC *v33; // r13
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // rdi
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rdi
  CDOTA_Bot_Hero_Sven *v38; // r12
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // rdx
  CEntityInstance *v41; // rax
  CEntityInstance *v42; // rbx
  __int64 v43; // rax
  CEntityInstance *v44; // rax
  CDOTA_Bot *v45; // rdi
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v48; // rax
  const CEntityHandle *v49; // rdi
  CEntityInstance *v50; // rax
  CDOTA_BaseNPC *v51; // r13
  CEntityInstance *v52; // rax
  CDOTA_BaseNPC *v53; // rsi
  CDOTA_Bot *v54; // rax
  CEntityIdentity *v55; // rax
  int v56; // edx
  __int16 v57; // cx
  CDOTA_Bot_Hero_Sven *v58; // r12
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rdi
  CDOTA_Bot_Hero_Sven *v61; // rdi
  CEntityInstance *v62; // rax
  const CBaseEntity *v63; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v65; // r12
  CDOTA_BaseNPC *v66; // rsi
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // r13
  CEntityInstance *v69; // rax
  CEntityInstance *v70; // rax
  CDOTA_BaseNPC *v71; // rsi
  CDOTA_Bot_Hero_Sven *v72; // r12
  CEntityInstance *v73; // rax
  CDOTA_BaseNPC *v74; // r13
  CEntityInstance *v75; // rax
  CDOTA_BaseNPC *v76; // rdi
  CEntityInstance *v77; // rax
  CDOTA_BaseNPC *v78; // rdi
  CDOTA_Bot_Hero_Sven *v79; // r12
  CEntityInstance *v80; // rax
  CDOTA_BaseNPC *v81; // rdx
  CEntityIdentity *v82; // rdx
  int v83; // eax
  __int16 v84; // cx
  float fRange; // [rsp+1Ch] [rbp-104h]
  float fChannelTimeRemaining; // [rsp+24h] [rbp-FCh] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+28h] [rbp-F8h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEntities_0; // [rsp+50h] [rbp-D0h] BYREF
  unsigned __int64 v90; // [rsp+E8h] [rbp-38h]

  fRange = fOverrideRange;
  v90 = __readfsqword(0x28u);
  if ( fOverrideRange == 0.0 )
    fRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v7 = LODWORD(fRange);
  pChannelTarget = 0;
  m_pBot = this->m_pBot;
  fChannelTimeRemaining = 0.0;
  *v7.m128i_i32 = fRange + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v7, &pChannelTarget, &fChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, pChannelTarget)
    && ((v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
     && BYTE3(v9[7]._vptr_IHandleEntity) != 0
      ? (v10 = v9)
      : (v10 = 0),
        IsBotTargetStatusValidCore(pChannelTarget, v10, 251, -1.0, this->m_pAbility)
     && (v11 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining > v11)) )
  {
    if ( pChannelTarget != 0 && (m_pEntity = pChannelTarget->m_pEntity) != 0 )
    {
LABEL_11:
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(phTarget->m_Index) = v14 | phTarget->m_Index & 0x8000;
      phTarget->m_Index = (v13 << 15) | phTarget->m_Index & 0x7FFF;
      return 3;
    }
    else
    {
LABEL_66:
      phTarget->m_Index = -1;
      return 3;
    }
  }
  else
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 1u:
        for ( i = 0; ; ++i )
        {
          if ( i >= CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
            goto LABEL_35;
          OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          if ( i < OpposingTeamCommander->m_BotList.m_Size
            && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
          {
            v48 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
            v49 = 0;
            if ( i < v48->m_BotList.m_Size )
              v49 = v48->m_BotList.m_Memory.m_pMemory[i];
            v50 = CEntityHandle::operator CEntityInstance *(v49 + 39);
            if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
              v51 = v50;
            else
              v51 = 0;
            if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v51) )
            {
              v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 )
                v53 = v52;
              else
                v53 = 0;
              if ( IsBotTargetStatusValidCore(v51, v53, 251, fRange, this->m_pAbility) )
              {
                v54 = v51->m_pBot;
                if ( v54 != 0 && v54->m_nAttackingTowers > 0 )
                  break;
              }
            }
          }
        }
        v55 = v51->m_pEntity;
        if ( v55 != 0 )
        {
          v56 = (v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1);
          if ( v55->m_EHandle.m_Index == -1 )
            v57 = 0x7FFF;
          else
            v57 = v55->m_EHandle.m_Index & 0x7FFF;
          LOWORD(phTarget->m_Index) = v57 | phTarget->m_Index & 0x8000;
          phTarget->m_Index = (v56 << 15) | phTarget->m_Index & 0x7FFF;
          return 2;
        }
        else
        {
          phTarget->m_Index = -1;
          return 2;
        }
      case 2u:
        v70 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v70 != 0 && BYTE3(v70[7]._vptr_IHandleEntity) != 0 )
          v71 = v70;
        else
          v71 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v71) )
          goto LABEL_35;
        v72 = this->m_pBot;
        v73 = CEntityHandle::operator CEntityInstance *(&v72->m_hUnit);
        if ( v73 != 0 && BYTE3(v73[7]._vptr_IHandleEntity) != 0 )
          v74 = v73;
        else
          v74 = 0;
        v75 = CEntityHandle::operator CEntityInstance *(&v72->m_hTarget);
        if ( v75 != 0 && BYTE3(v75[7]._vptr_IHandleEntity) != 0 )
          v76 = v75;
        else
          v76 = 0;
        if ( !IsBotTargetStatusValidCore(v76, v74, 251, fRange, this->m_pAbility) )
          goto LABEL_35;
        v77 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v77 == 0 || (v78 = v77, BYTE3(v77[7]._vptr_IHandleEntity) == 0) )
          v78 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v78) )
          goto LABEL_35;
        v79 = this->m_pBot;
        v80 = CEntityHandle::operator CEntityInstance *(&v79->m_hTarget);
        if ( v80 != 0 && BYTE3(v80[7]._vptr_IHandleEntity) != 0 )
          v81 = v80;
        else
          v81 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v79->m_pTeamCommander, v79, v81) )
          goto LABEL_35;
        phTarget->m_Index = this->m_pBot->m_hTarget;
        return 3;
      case 4u:
        v58 = this->m_pBot;
        if ( v58->m_fModeDesires[(*(v58->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v58->m_pActiveBotMode)] < 0.75 )
          goto LABEL_35;
        v59 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
          v60 = v59;
        else
          v60 = 0;
        if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v60) <= 2.0 )
          goto LABEL_35;
        v61 = this->m_pBot;
        hEntities_0.m_Size = 0;
        hEntities_0.m_Memory.m_nAllocationCount = 32;
        hEntities_0.m_Memory.m_nGrowSize = 0x80000000;
        hEntities_0.m_Memory.m_pMemory = &hEntities_0.m_FixedMemory;
        CDOTA_Bot::GetNearbyHeroes(v61, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities_0, fRange);
        v62 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
          v63 = v62;
        else
          v63 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v63);
        SortEHANDLEVectorByLocation(&hEntities_0, AbsOrigin, 0);
        if ( hEntities_0.m_Size <= 0 )
          goto LABEL_146;
        v65 = 0;
        while ( 1 )
        {
          v67 = CEntityHandle::operator CEntityInstance *(&hEntities_0.m_Memory.m_pMemory[v65]);
          if ( v67 == 0
            || BYTE3(v67[7]._vptr_IHandleEntity) == 0
            || (v68 = v67, (v67[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
          {
            v68 = 0;
          }
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v68) )
          {
            v69 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v69 != 0 && BYTE3(v69[7]._vptr_IHandleEntity) != 0 )
              v66 = v69;
            else
              v66 = 0;
            if ( IsBotTargetStatusValidCore(v68, v66, 251, fRange, this->m_pAbility)
              && !CDOTA_BaseNPC::IsMovementImpaired(v68)
              && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v68) )
            {
              break;
            }
          }
          if ( hEntities_0.m_Size <= ++v65 )
          {
LABEL_146:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities_0);
            goto LABEL_35;
          }
        }
        phTarget->m_Index = hEntities_0.m_Memory.m_pMemory[v65];
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities_0);
        return 2;
      case 0xBu:
      case 0xCu:
      case 0xDu:
        if ( !bUseWhenDefending )
          goto LABEL_35;
        v16 = this->m_pBot;
        hEntities.m_Size = 0;
        hEntities.m_Memory.m_pMemory = 0;
        hEntities.m_Memory.m_nAllocationCount = 0;
        hEntities.m_Memory.m_nGrowSize = 0;
        CDOTA_Bot::GetNearbyHeroes(v16, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, fRange);
        v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          v18 = v17;
        else
          v18 = 0;
        v19 = CBaseEntity::GetAbsOrigin(v18);
        SortEHANDLEVectorByLocation(&hEntities, v19, 0);
        if ( hEntities.m_Size <= 0 )
          goto LABEL_34;
        v20 = 0;
        break;
      case 0x12u:
        v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
          v30 = v29;
        else
          v30 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v30) )
          goto LABEL_35;
        v31 = this->m_pBot;
        v32 = CEntityHandle::operator CEntityInstance *(&v31->m_hUnit);
        if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
          v33 = v32;
        else
          v33 = 0;
        v34 = CEntityHandle::operator CEntityInstance *(&v31->m_hTarget);
        if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
          v35 = v34;
        else
          v35 = 0;
        if ( !IsBotTargetStatusValidCore(v35, v33, 251, fRange, this->m_pAbility) )
          goto LABEL_35;
        v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v36 == 0 || (v37 = v36, BYTE3(v36[7]._vptr_IHandleEntity) == 0) )
          v37 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v37) )
          goto LABEL_35;
        v38 = this->m_pBot;
        v39 = CEntityHandle::operator CEntityInstance *(&v38->m_hTarget);
        if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
          v40 = v39;
        else
          v40 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v38->m_pTeamCommander, v38, v40) )
          goto LABEL_35;
        v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        v42 = v41;
        if ( v41 == 0 )
          goto LABEL_35;
        if ( BYTE3(v41[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_35;
        if ( (v41[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_35;
        v43 = *&v41[45].m_worldGroupId.m_nHashCode;
        if ( v43 == 0 )
          goto LABEL_35;
        hEntities.m_Size = *(v43 + 712);
        v44 = CEntityHandle::operator CEntityInstance *(&hEntities);
        if ( v44 == 0 )
          goto LABEL_35;
        if ( BYTE3(v44[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_35;
        if ( (v44[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_35;
        v45 = *&v44[45].m_worldGroupId.m_nHashCode;
        if ( v45 == 0 || !CDOTA_Bot::IsAboutToDie(v45) )
          goto LABEL_35;
        m_pEntity = v42->m_pEntity;
        if ( m_pEntity == 0 )
          goto LABEL_66;
        goto LABEL_11;
      default:
        goto LABEL_35;
    }
    do
    {
      v21 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v20]);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v22) )
      {
        v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v24 = v23;
        else
          v24 = 0;
        if ( (GetBotTargetStatusCore(v22, v24, -1.0, this->m_pAbility) & 0xFB) == 0 )
        {
          v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v25 == 0 || (v26 = v25, BYTE3(v25[7]._vptr_IHandleEntity) == 0) )
            v26 = 0;
          v27 = CBaseEntity::GetAbsOrigin(v26);
          v28 = CBaseEntity::GetAbsOrigin(v22);
          if ( (fsqrt(((v28->x - v27->x) * (v28->x - v27->x)) + ((v28->y - v27->y) * (v28->y - v27->y))) - fRange) < 100.0 )
          {
            if ( v22 != 0 && (v82 = v22->m_pEntity) != 0 )
            {
              v83 = (v82->m_EHandle.m_Index >> 15) - (v82->m_flags & 1);
              v84 = 0x7FFF;
              if ( v82->m_EHandle.m_Index != -1 )
                v84 = v82->m_EHandle.m_Index & 0x7FFF;
              LOWORD(phTarget->m_Index) = v84 | phTarget->m_Index & 0x8000;
              phTarget->m_Index = (v83 << 15) | phTarget->m_Index & 0x7FFF;
            }
            else
            {
              phTarget->m_Index = -1;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
            return 2;
          }
        }
      }
      ++v20;
    }
    while ( hEntities.m_Size > v20 );
LABEL_34:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_35:
    phTarget->m_Index = -1;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::GetGenericStunDesire  (line 119, @0x00000000028f1c90, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetActiveModeDesire, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Length2D, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, GetBotTargetStatusCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie (16 total)
// callers: CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::GetCurrentUsageDesire
// globals: jpt_28F1E2A
__int64 __fastcall CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::GetGenericStunDesire(
        CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor> *const this,
        bool bUseWhenDefending,
        EHANDLE *phTarget,
        float fOverrideRange)
{
  __m128i v7; // xmm0
  CDOTA_Bot_Hero_WitchDoctor *m_pBot; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  float v11; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CDOTA_Bot_Hero_WitchDoctor *v16; // rdi
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rdi
  const Vector *v19; // rax
  __int64 v20; // r12
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // r13
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  CEntityInstance *v25; // rax
  const CBaseEntity *v26; // rdi
  const Vector *v27; // r14
  const Vector *v28; // rax
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rsi
  CDOTA_Bot_Hero_WitchDoctor *v31; // r12
  CEntityInstance *v32; // rax
  CDOTA_BaseNPC *v33; // r13
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // rdi
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rdi
  CDOTA_Bot_Hero_WitchDoctor *v38; // r12
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // rdx
  CEntityInstance *v41; // rax
  CEntityInstance *v42; // rbx
  __int64 v43; // rax
  CEntityInstance *v44; // rax
  CDOTA_Bot *v45; // rdi
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v48; // rax
  const CEntityHandle *v49; // rdi
  CEntityInstance *v50; // rax
  CDOTA_BaseNPC *v51; // r13
  CEntityInstance *v52; // rax
  CDOTA_BaseNPC *v53; // rsi
  CDOTA_Bot *v54; // rax
  CEntityIdentity *v55; // rax
  int v56; // edx
  __int16 v57; // cx
  CDOTA_Bot_Hero_WitchDoctor *v58; // r12
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rdi
  CDOTA_Bot_Hero_WitchDoctor *v61; // rdi
  CEntityInstance *v62; // rax
  const CBaseEntity *v63; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v65; // r12
  CDOTA_BaseNPC *v66; // rsi
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // r13
  CEntityInstance *v69; // rax
  CEntityInstance *v70; // rax
  CDOTA_BaseNPC *v71; // rsi
  CDOTA_Bot_Hero_WitchDoctor *v72; // r12
  CEntityInstance *v73; // rax
  CDOTA_BaseNPC *v74; // r13
  CEntityInstance *v75; // rax
  CDOTA_BaseNPC *v76; // rdi
  CEntityInstance *v77; // rax
  CDOTA_BaseNPC *v78; // rdi
  CDOTA_Bot_Hero_WitchDoctor *v79; // r12
  CEntityInstance *v80; // rax
  CDOTA_BaseNPC *v81; // rdx
  CEntityIdentity *v82; // rdx
  int v83; // eax
  __int16 v84; // cx
  float fRange; // [rsp+1Ch] [rbp-104h]
  float fChannelTimeRemaining; // [rsp+24h] [rbp-FCh] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+28h] [rbp-F8h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEntities_0; // [rsp+50h] [rbp-D0h] BYREF
  unsigned __int64 v90; // [rsp+E8h] [rbp-38h]

  fRange = fOverrideRange;
  v90 = __readfsqword(0x28u);
  if ( fOverrideRange == 0.0 )
    fRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v7 = LODWORD(fRange);
  pChannelTarget = 0;
  m_pBot = this->m_pBot;
  fChannelTimeRemaining = 0.0;
  *v7.m128i_i32 = fRange + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v7, &pChannelTarget, &fChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, pChannelTarget)
    && ((v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
     && BYTE3(v9[7]._vptr_IHandleEntity) != 0
      ? (v10 = v9)
      : (v10 = 0),
        IsBotTargetStatusValidCore(pChannelTarget, v10, 251, -1.0, this->m_pAbility)
     && (v11 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining > v11)) )
  {
    if ( pChannelTarget != 0 && (m_pEntity = pChannelTarget->m_pEntity) != 0 )
    {
LABEL_11:
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(phTarget->m_Index) = v14 | phTarget->m_Index & 0x8000;
      phTarget->m_Index = (v13 << 15) | phTarget->m_Index & 0x7FFF;
      return 3;
    }
    else
    {
LABEL_66:
      phTarget->m_Index = -1;
      return 3;
    }
  }
  else
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 1u:
        for ( i = 0; ; ++i )
        {
          if ( i >= CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
            goto LABEL_35;
          OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          if ( i < OpposingTeamCommander->m_BotList.m_Size
            && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
          {
            v48 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
            v49 = 0;
            if ( i < v48->m_BotList.m_Size )
              v49 = v48->m_BotList.m_Memory.m_pMemory[i];
            v50 = CEntityHandle::operator CEntityInstance *(v49 + 39);
            if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
              v51 = v50;
            else
              v51 = 0;
            if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v51) )
            {
              v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 )
                v53 = v52;
              else
                v53 = 0;
              if ( IsBotTargetStatusValidCore(v51, v53, 251, fRange, this->m_pAbility) )
              {
                v54 = v51->m_pBot;
                if ( v54 != 0 && v54->m_nAttackingTowers > 0 )
                  break;
              }
            }
          }
        }
        v55 = v51->m_pEntity;
        if ( v55 != 0 )
        {
          v56 = (v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1);
          if ( v55->m_EHandle.m_Index == -1 )
            v57 = 0x7FFF;
          else
            v57 = v55->m_EHandle.m_Index & 0x7FFF;
          LOWORD(phTarget->m_Index) = v57 | phTarget->m_Index & 0x8000;
          phTarget->m_Index = (v56 << 15) | phTarget->m_Index & 0x7FFF;
          return 2;
        }
        else
        {
          phTarget->m_Index = -1;
          return 2;
        }
      case 2u:
        v70 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v70 != 0 && BYTE3(v70[7]._vptr_IHandleEntity) != 0 )
          v71 = v70;
        else
          v71 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v71) )
          goto LABEL_35;
        v72 = this->m_pBot;
        v73 = CEntityHandle::operator CEntityInstance *(&v72->m_hUnit);
        if ( v73 != 0 && BYTE3(v73[7]._vptr_IHandleEntity) != 0 )
          v74 = v73;
        else
          v74 = 0;
        v75 = CEntityHandle::operator CEntityInstance *(&v72->m_hTarget);
        if ( v75 != 0 && BYTE3(v75[7]._vptr_IHandleEntity) != 0 )
          v76 = v75;
        else
          v76 = 0;
        if ( !IsBotTargetStatusValidCore(v76, v74, 251, fRange, this->m_pAbility) )
          goto LABEL_35;
        v77 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v77 == 0 || (v78 = v77, BYTE3(v77[7]._vptr_IHandleEntity) == 0) )
          v78 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v78) )
          goto LABEL_35;
        v79 = this->m_pBot;
        v80 = CEntityHandle::operator CEntityInstance *(&v79->m_hTarget);
        if ( v80 != 0 && BYTE3(v80[7]._vptr_IHandleEntity) != 0 )
          v81 = v80;
        else
          v81 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v79->m_pTeamCommander, v79, v81) )
          goto LABEL_35;
        phTarget->m_Index = this->m_pBot->m_hTarget;
        return 3;
      case 4u:
        v58 = this->m_pBot;
        if ( v58->m_fModeDesires[(*(v58->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v58->m_pActiveBotMode)] < 0.75 )
          goto LABEL_35;
        v59 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
          v60 = v59;
        else
          v60 = 0;
        if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v60) <= 2.0 )
          goto LABEL_35;
        v61 = this->m_pBot;
        hEntities_0.m_Size = 0;
        hEntities_0.m_Memory.m_nAllocationCount = 32;
        hEntities_0.m_Memory.m_nGrowSize = 0x80000000;
        hEntities_0.m_Memory.m_pMemory = &hEntities_0.m_FixedMemory;
        CDOTA_Bot::GetNearbyHeroes(v61, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities_0, fRange);
        v62 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
          v63 = v62;
        else
          v63 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v63);
        SortEHANDLEVectorByLocation(&hEntities_0, AbsOrigin, 0);
        if ( hEntities_0.m_Size <= 0 )
          goto LABEL_146;
        v65 = 0;
        while ( 1 )
        {
          v67 = CEntityHandle::operator CEntityInstance *(&hEntities_0.m_Memory.m_pMemory[v65]);
          if ( v67 == 0
            || BYTE3(v67[7]._vptr_IHandleEntity) == 0
            || (v68 = v67, (v67[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
          {
            v68 = 0;
          }
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v68) )
          {
            v69 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v69 != 0 && BYTE3(v69[7]._vptr_IHandleEntity) != 0 )
              v66 = v69;
            else
              v66 = 0;
            if ( IsBotTargetStatusValidCore(v68, v66, 251, fRange, this->m_pAbility)
              && !CDOTA_BaseNPC::IsMovementImpaired(v68)
              && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v68) )
            {
              break;
            }
          }
          if ( hEntities_0.m_Size <= ++v65 )
          {
LABEL_146:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities_0);
            goto LABEL_35;
          }
        }
        phTarget->m_Index = hEntities_0.m_Memory.m_pMemory[v65];
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities_0);
        return 2;
      case 0xBu:
      case 0xCu:
      case 0xDu:
        if ( !bUseWhenDefending )
          goto LABEL_35;
        v16 = this->m_pBot;
        hEntities.m_Size = 0;
        hEntities.m_Memory.m_pMemory = 0;
        hEntities.m_Memory.m_nAllocationCount = 0;
        hEntities.m_Memory.m_nGrowSize = 0;
        CDOTA_Bot::GetNearbyHeroes(v16, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, fRange);
        v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          v18 = v17;
        else
          v18 = 0;
        v19 = CBaseEntity::GetAbsOrigin(v18);
        SortEHANDLEVectorByLocation(&hEntities, v19, 0);
        if ( hEntities.m_Size <= 0 )
          goto LABEL_34;
        v20 = 0;
        break;
      case 0x12u:
        v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
          v30 = v29;
        else
          v30 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v30) )
          goto LABEL_35;
        v31 = this->m_pBot;
        v32 = CEntityHandle::operator CEntityInstance *(&v31->m_hUnit);
        if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
          v33 = v32;
        else
          v33 = 0;
        v34 = CEntityHandle::operator CEntityInstance *(&v31->m_hTarget);
        if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
          v35 = v34;
        else
          v35 = 0;
        if ( !IsBotTargetStatusValidCore(v35, v33, 251, fRange, this->m_pAbility) )
          goto LABEL_35;
        v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v36 == 0 || (v37 = v36, BYTE3(v36[7]._vptr_IHandleEntity) == 0) )
          v37 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v37) )
          goto LABEL_35;
        v38 = this->m_pBot;
        v39 = CEntityHandle::operator CEntityInstance *(&v38->m_hTarget);
        if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
          v40 = v39;
        else
          v40 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v38->m_pTeamCommander, v38, v40) )
          goto LABEL_35;
        v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        v42 = v41;
        if ( v41 == 0 )
          goto LABEL_35;
        if ( BYTE3(v41[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_35;
        if ( (v41[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_35;
        v43 = *&v41[45].m_worldGroupId.m_nHashCode;
        if ( v43 == 0 )
          goto LABEL_35;
        hEntities.m_Size = *(v43 + 712);
        v44 = CEntityHandle::operator CEntityInstance *(&hEntities);
        if ( v44 == 0 )
          goto LABEL_35;
        if ( BYTE3(v44[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_35;
        if ( (v44[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_35;
        v45 = *&v44[45].m_worldGroupId.m_nHashCode;
        if ( v45 == 0 || !CDOTA_Bot::IsAboutToDie(v45) )
          goto LABEL_35;
        m_pEntity = v42->m_pEntity;
        if ( m_pEntity == 0 )
          goto LABEL_66;
        goto LABEL_11;
      default:
        goto LABEL_35;
    }
    do
    {
      v21 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v20]);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v22) )
      {
        v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v24 = v23;
        else
          v24 = 0;
        if ( (GetBotTargetStatusCore(v22, v24, -1.0, this->m_pAbility) & 0xFB) == 0 )
        {
          v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v25 == 0 || (v26 = v25, BYTE3(v25[7]._vptr_IHandleEntity) == 0) )
            v26 = 0;
          v27 = CBaseEntity::GetAbsOrigin(v26);
          v28 = CBaseEntity::GetAbsOrigin(v22);
          if ( (fsqrt(((v28->x - v27->x) * (v28->x - v27->x)) + ((v28->y - v27->y) * (v28->y - v27->y))) - fRange) < 100.0 )
          {
            if ( v22 != 0 && (v82 = v22->m_pEntity) != 0 )
            {
              v83 = (v82->m_EHandle.m_Index >> 15) - (v82->m_flags & 1);
              v84 = 0x7FFF;
              if ( v82->m_EHandle.m_Index != -1 )
                v84 = v82->m_EHandle.m_Index & 0x7FFF;
              LOWORD(phTarget->m_Index) = v84 | phTarget->m_Index & 0x8000;
              phTarget->m_Index = (v83 << 15) | phTarget->m_Index & 0x7FFF;
            }
            else
            {
              phTarget->m_Index = -1;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
            return 2;
          }
        }
      }
      ++v20;
    }
    while ( hEntities.m_Size > v20 );
LABEL_34:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_35:
    phTarget->m_Index = -1;
    return 0;
  }
}


