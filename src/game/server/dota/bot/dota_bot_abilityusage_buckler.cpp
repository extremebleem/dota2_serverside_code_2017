
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Buckler::CDOTA_Bot_AbilityUsage_Buckler  (line 23, @0x00000000028972a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Buckler::CDOTA_Bot_AbilityUsage_Buckler(
        CDOTA_Bot_AbilityUsage_Buckler *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5C50;
}


// CDOTA_Bot_AbilityUsage_Buckler::GetCurrentUsageDesire  (line 30, @0x0000000002895d40, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Buckler::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Buckler *const this)
{
  return 3 * ((*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2);
}


// CDOTA_Bot_AbilityUsage_Buckler::UseAbility  (line 40, @0x0000000002896090, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Buckler::UseAbility(CDOTA_Bot_AbilityUsage_Buckler *const this)
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


