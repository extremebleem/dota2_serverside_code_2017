
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_SkeletonKing::~CDOTA_Bot_Hero_SkeletonKing  (line 17, @0x00000000028e1b00, libserver.so)
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_Bot_Hero_SkeletonKing::~CDOTA_Bot_Hero_SkeletonKing(CDOTA_Bot_Hero_SkeletonKing *const this)
{
  this->_vptr_CDOTA_Bot = &off_42D00B0;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_Bot_Hero_SkeletonKing::~CDOTA_Bot_Hero_SkeletonKing  (line 17, @0x00000000028e1b20, libserver.so)  // inlines: ~CDOTA_Bot_Hero_SkeletonKing
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_Bot_Hero_SkeletonKing::~CDOTA_Bot_Hero_SkeletonKing(CDOTA_Bot_Hero_SkeletonKing *const this)
{
  this->_vptr_CDOTA_Bot = &off_42D00B0;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::~CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast  (line 35, @0x00000000028e1790, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::~CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast(
        CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0050;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::~CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast  (line 35, @0x00000000028e17b0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::~CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast(
        CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42D0050;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_TutorialBot_Hero_SkeletonKing::~CDOTA_TutorialBot_Hero_SkeletonKing  (line 56, @0x00000000028e1b50, libserver.so)  // inlines: ~CDOTA_Bot_Hero_SkeletonKing
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_TutorialBot_Hero_SkeletonKing::~CDOTA_TutorialBot_Hero_SkeletonKing(
        CDOTA_TutorialBot_Hero_SkeletonKing *const this)
{
  this->_vptr_CDOTA_Bot = &off_42D00B0;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_TutorialBot_Hero_SkeletonKing::~CDOTA_TutorialBot_Hero_SkeletonKing  (line 56, @0x00000000028e1b70, libserver.so)  // inlines: ~CDOTA_Bot_Hero_SkeletonKing, ~CDOTA_TutorialBot_Hero_SkeletonKing
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_TutorialBot_Hero_SkeletonKing::~CDOTA_TutorialBot_Hero_SkeletonKing(
        CDOTA_TutorialBot_Hero_SkeletonKing *const this)
{
  this->_vptr_CDOTA_Bot = &off_42D00B0;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_TutorialBot_Hero_SkeletonKing::IsTutorial  (line 64, @0x00000000028e0bc0, libserver.so)
bool __fastcall CDOTA_TutorialBot_Hero_SkeletonKing::IsTutorial(CDOTA_TutorialBot_Hero_SkeletonKing *const this)
{
  return 1;
}


