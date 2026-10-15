
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Manta::CDOTA_Bot_AbilityUsage_Manta  (line 23, @0x00000000028a0630, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Manta::CDOTA_Bot_AbilityUsage_Manta(
        CDOTA_Bot_AbilityUsage_Manta *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6590;
}


// CDOTA_Bot_AbilityUsage_Manta::GetCurrentUsageDesire  (line 30, @0x000000000289f370, libserver.so)
// calls: CDOTA_Bot::IsAboutToDie
int __fastcall CDOTA_Bot_AbilityUsage_Manta::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Manta *const this)
{
  int v2; // eax
  __int64 v3; // rsi
  int v4; // edx
  int v6; // eax

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  v4 = 3;
  if ( v2 != 2 )
  {
    v6 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode, v3, 3);
    v4 = 0;
    if ( v6 == 4 )
      return CDOTA_Bot::IsAboutToDie(this->m_pBot) ? 3 : 0;
  }
  return v4;
}


// CDOTA_Bot_AbilityUsage_Manta::UseAbility  (line 46, @0x000000000289f1f0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Manta::UseAbility(CDOTA_Bot_AbilityUsage_Manta *const this)
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


