
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Refresher::CDOTA_Bot_AbilityUsage_Refresher  (line 23, @0x00000000028a4c10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Refresher::CDOTA_Bot_AbilityUsage_Refresher(
        CDOTA_Bot_AbilityUsage_Refresher *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6A30;  // vptr: CDOTA_Bot_AbilityUsage_Refresher
}


// CDOTA_Bot_AbilityUsage_Refresher::GetCurrentUsageDesire  (line 30, @0x00000000028a42f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetMana, GetUnit, IndexToIdentity, IsPassive, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetCooldownTimeRemaining
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Refresher::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Refresher *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  CConcreteEntityList *v3; // rsi
  uint32 m_Index; // eax
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rax
  CDOTABaseAbility *m_pAbility; // rbx
  float v11; // r14d
  CDOTABaseAbility *v12; // rdi
  int v13; // r12d
  int v14; // r14d
  CDOTA_Bot *v15; // rdx
  uint32 v16; // eax
  unsigned __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v22; // rbx
  int v24; // r15d
  float fAllowedRefreshTime; // [rsp+Ch] [rbp-34h]

  m_pBot = this->m_pBot;
  v3 = CEntityHandle::gm_pEntityList;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = m_pBot->m_hUnit.m_Index, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) == 0)
    || (v7 = v5 & 0x1FF, v3 = (8 * v7), (v8 = &v6[v7]) == 0)
    || m_Index != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  m_pAbility = this->m_pAbility;
  v11 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility, v3) != 0 )
    v12 = m_pAbility;
  else
    v12 = 0;
  v13 = 0;
  v14 = (v11 - (*(v12->_vptr_IHandleEntity + 273))(v12, 0xFFFFFFFFLL));
  while ( 1 )
  {
    v15 = this->m_pBot;
    v16 = v15->m_hUnit.m_Index;
    if ( v16 + 2 <= 1
      || (v17 = v15->m_hUnit.m_Index, (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9) & 0x3F]) == 0)
      || (v19 = &v18[v17 & 0x1FF]) == 0
      || v16 != v19->m_EHandle.m_Index
      || (v20 = v19->m_pInstance, v19->m_pInstance == 0)
      || !v20->m_bIsDOTANPC )
    {
      v20 = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v20, v13);
    v22 = AbilityByIndex;
    if ( AbilityByIndex != 0
      && AbilityByIndex->m_pBotUsage != 0
      && ((*(AbilityByIndex->_vptr_IHandleEntity + 251))(AbilityByIndex) & 2) == 0
      && ((*(v22->_vptr_IHandleEntity + 214))(v22) & 1) != 0 )
    {
      v24 = (*(v22->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(v22->m_pBotUsage);
      if ( v24 > 0
        && (*(v22->_vptr_IHandleEntity + 245))(v22) == 0
        && v14 > (*(v22->_vptr_IHandleEntity + 273))(v22, 0xFFFFFFFFLL) )
      {
        fAllowedRefreshTime = 15.0;
        if ( v24 > 2 )
          fAllowedRefreshTime = 5.0;
        if ( CDOTABaseAbility::GetCooldownTimeRemaining(v22) > fAllowedRefreshTime )
          break;
      }
    }
    if ( ++v13 == 5 )
      return 0;
  }
  return 2;
}


// CDOTA_Bot_AbilityUsage_Refresher::UseAbility  (line 59, @0x00000000028a3300, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Refresher::UseAbility(CDOTA_Bot_AbilityUsage_Refresher *const this)
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


