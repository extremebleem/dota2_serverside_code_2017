
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Item::~CDOTA_BotMode_Item  (line 15, @0x0000000002827090, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Item::~CDOTA_BotMode_Item(CDOTA_BotMode_Item *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Item::~CDOTA_BotMode_Item  (line 15, @0x0000000002827250, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Item
// calls: operator delete
void __fastcall CDOTA_BotMode_Item::~CDOTA_BotMode_Item(CDOTA_BotMode_Item *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_Item::GetModeType  (line 22, @0x0000000002826ce0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Item::GetModeType(CDOTA_BotMode_Item *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_ITEM;
}


