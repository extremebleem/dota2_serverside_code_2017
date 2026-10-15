
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_SecretShop::~CDOTA_BotMode_SecretShop  (line 15, @0x0000000002826fb0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_SecretShop::~CDOTA_BotMode_SecretShop(CDOTA_BotMode_SecretShop *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_SecretShop::~CDOTA_BotMode_SecretShop  (line 15, @0x0000000002827170, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_SecretShop
// calls: operator delete
void __fastcall CDOTA_BotMode_SecretShop::~CDOTA_BotMode_SecretShop(CDOTA_BotMode_SecretShop *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_SecretShop::GetModeType  (line 22, @0x0000000002826f90, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_SecretShop::GetModeType(CDOTA_BotMode_SecretShop *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_SECRET_SHOP;
}


// CDOTA_BotMode_SecretShop::GetDebugString  (line 35, @0x0000000002826fa0, libserver.so)
// strings: "Secret Shop"
const char *__fastcall CDOTA_BotMode_SecretShop::GetDebugString(CDOTA_BotMode_SecretShop *const this)
{
  return "Secret Shop";
}


// CDOTA_BotMode_SecretShop::GetDebugValue  (line 36, @0x0000000002827330, libserver.so)
// calls: CDOTA_BotMode::FormatDebugValue
const char *__fastcall CDOTA_BotMode_SecretShop::GetDebugValue(CDOTA_BotMode_SecretShop *const this)
{
  return CDOTA_BotMode::FormatDebugValue(this, "(%2.2f)", this->m_fSecretShopDesire);
}


