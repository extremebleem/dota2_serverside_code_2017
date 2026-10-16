
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_SideShop::~CDOTA_BotMode_SideShop  (line 15, @0x0000000002868aa0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_SideShop::~CDOTA_BotMode_SideShop(CDOTA_BotMode_SideShop *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_SideShop::~CDOTA_BotMode_SideShop  (line 15, @0x0000000002868c00, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_SideShop
// calls: operator delete
void __fastcall CDOTA_BotMode_SideShop::~CDOTA_BotMode_SideShop(CDOTA_BotMode_SideShop *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_SideShop::GetModeType  (line 22, @0x00000000028689d0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_SideShop::GetModeType(CDOTA_BotMode_SideShop *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_SIDE_SHOP;
}


// CDOTA_BotMode_SideShop::GetDebugString  (line 35, @0x00000000028689e0, libserver.so)
// strings: "Side Shop"
const char *__fastcall CDOTA_BotMode_SideShop::GetDebugString(CDOTA_BotMode_SideShop *const this)
{
  return "Side Shop";
}


