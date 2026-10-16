
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Armlet::CDOTA_Bot_AbilityUsage_Armlet  (line 23, @0x0000000002897180, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Armlet::CDOTA_Bot_AbilityUsage_Armlet(
        CDOTA_Bot_AbilityUsage_Armlet *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5A70;  // vptr: CDOTA_Bot_AbilityUsage_Armlet
}


// CDOTA_Bot_AbilityUsage_Armlet::GetCurrentUsageDesire  (line 30, @0x0000000002895cd0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Armlet::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Armlet *const this)
{
  return 3 * ((*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2);
}


// CDOTA_Bot_AbilityUsage_Armlet::UseAbility  (line 37, @0x0000000002895e90, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Armlet::UseAbility(CDOTA_Bot_AbilityUsage_Armlet *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_UseAbility *v4; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


