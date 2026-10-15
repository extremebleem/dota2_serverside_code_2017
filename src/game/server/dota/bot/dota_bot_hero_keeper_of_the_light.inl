
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Keeper_Of_The_Light::~CDOTA_Bot_Hero_Keeper_Of_The_Light  (line 20, @0x00000000028d0fc0, libserver.so)
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_Bot_Hero_Keeper_Of_The_Light::~CDOTA_Bot_Hero_Keeper_Of_The_Light(
        CDOTA_Bot_Hero_Keeper_Of_The_Light *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CCBB0;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_Bot_Hero_Keeper_Of_The_Light::~CDOTA_Bot_Hero_Keeper_Of_The_Light  (line 20, @0x00000000028d0fe0, libserver.so)  // inlines: ~CDOTA_Bot_Hero_Keeper_Of_The_Light
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_Bot_Hero_Keeper_Of_The_Light::~CDOTA_Bot_Hero_Keeper_Of_The_Light(
        CDOTA_Bot_Hero_Keeper_Of_The_Light *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CCBB0;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::~CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic  (line 37, @0x00000000028d0750, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::~CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic(
        CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CCCB0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::~CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic  (line 37, @0x00000000028d0770, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::~CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic(
        CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CCCB0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::~CDOTA_TutorialBot_Hero_Keeper_Of_The_Light  (line 64, @0x00000000028d1010, libserver.so)  // inlines: ~CDOTA_Bot_Hero_Keeper_Of_The_Light
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::~CDOTA_TutorialBot_Hero_Keeper_Of_The_Light(
        CDOTA_TutorialBot_Hero_Keeper_Of_The_Light *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CCBB0;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::~CDOTA_TutorialBot_Hero_Keeper_Of_The_Light  (line 64, @0x00000000028d1030, libserver.so)  // inlines: ~CDOTA_Bot_Hero_Keeper_Of_The_Light, ~CDOTA_TutorialBot_Hero_Keeper_Of_The_Light
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::~CDOTA_TutorialBot_Hero_Keeper_Of_The_Light(
        CDOTA_TutorialBot_Hero_Keeper_Of_The_Light *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CCBB0;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::IsTutorial  (line 72, @0x00000000028d0190, libserver.so)
bool __fastcall CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::IsTutorial(
        CDOTA_TutorialBot_Hero_Keeper_Of_The_Light *const this)
{
  return 1;
}


// CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::GetInitialMode  (line 75, @0x00000000028d01a0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::GetInitialMode(
        CDOTA_TutorialBot_Hero_Keeper_Of_The_Light *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_COMPANION;
}


