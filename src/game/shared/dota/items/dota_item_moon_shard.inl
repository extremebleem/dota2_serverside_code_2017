
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_Item_Moonshard_Consumed::~CDOTA_Modifier_Item_Moonshard_Consumed  (line 24, @0x0000000002dd6b60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::~CDOTA_Modifier_Item_Moonshard_Consumed(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4722170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Moonshard_Consumed::~CDOTA_Modifier_Item_Moonshard_Consumed  (line 24, @0x0000000002dd6b80, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Moonshard_Consumed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::~CDOTA_Modifier_Item_Moonshard_Consumed(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4722170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Moonshard_Consumed::IsHidden  (line 32, @0x0000000002dd38a0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::IsHidden(CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Moonshard_Consumed::IsPurgable  (line 33, @0x0000000002dd38b0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::IsPurgable(CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Moonshard_Consumed::RemoveOnDeath  (line 34, @0x0000000002dd38c0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::RemoveOnDeath(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Moonshard_Consumed::GetTexture  (line 35, @0x0000000002dd38d0, libserver.so)
const char *__fastcall CDOTA_Modifier_Item_Moonshard_Consumed::GetTexture(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  return "item_moon_shard";
}


// CDOTA_Modifier_Item_Moonshard_Consumed::GetMatchPermanentBuff  (line 36, @0x0000000002dd38e0, libserver.so)
EMatchPermanentBuff __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::GetMatchPermanentBuff(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  return EMatchPermanentBuff::MATCH_PERMANENT_BUFF_MOON_SHARD;
}


