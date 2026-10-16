
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode::~CDOTA_BotMode  (line 27, @0x0000000002811aa0, libserver.so)
void __fastcall CDOTA_BotMode::~CDOTA_BotMode(CDOTA_BotMode *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode::~CDOTA_BotMode  (line 27, @0x0000000002812220, libserver.so)  // inlines: ~CDOTA_BotMode
// calls: operator delete
void __fastcall CDOTA_BotMode::~CDOTA_BotMode(CDOTA_BotMode *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode::OnDidDamage  (line 37, @0x0000000002811ab0, libserver.so)
void __fastcall CDOTA_BotMode::OnDidDamage(
        CDOTA_BotMode *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        int iAmount)
{
  ;
}


// CDOTA_BotMode::OnTakeDamage  (line 38, @0x0000000002811ac0, libserver.so)
void __fastcall CDOTA_BotMode::OnTakeDamage(CDOTA_BotMode *const this, const CTakeDamageInfo *const info)
{
  ;
}


// CDOTA_BotMode::OnAbilityExecuted  (line 39, @0x0000000002811ad0, libserver.so)
void __fastcall CDOTA_BotMode::OnAbilityExecuted(
        CDOTA_BotMode *const this,
        CDOTABaseAbility *pAbility,
        CBaseEntity *pTarget)
{
  ;
}


// CDOTA_BotMode::OnAttacked  (line 40, @0x0000000002811ae0, libserver.so)
void __fastcall CDOTA_BotMode::OnAttacked(CDOTA_BotMode *const this, const CDOTA_AttackRecord *pRecord)
{
  ;
}


// CDOTA_BotMode::GetDebugValue  (line 56, @0x0000000002811af0, libserver.so)
const char *__fastcall CDOTA_BotMode::GetDebugValue(CDOTA_BotMode *const this)
{
  return "";
}


