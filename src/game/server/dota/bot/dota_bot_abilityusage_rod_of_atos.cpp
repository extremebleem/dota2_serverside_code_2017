
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_RodOfAtos::CDOTA_Bot_AbilityUsage_RodOfAtos  (line 23, @0x00000000028a4c50, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_RodOfAtos::CDOTA_Bot_AbilityUsage_RodOfAtos(
        CDOTA_Bot_AbilityUsage_RodOfAtos *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6A90;
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_RodOfAtos::GetCurrentUsageDesire  (line 30, @0x00000000028a40e0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_RodOfAtos::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_RodOfAtos *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  unsigned __int8 (__fastcall *v9)(CDOTA_Bot_AbilityUsage_RodOfAtos *const, _QWORD); // r13
  CDOTA_Commander *v10; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CDOTABaseAbility *m_pAbility; // r13
  CDOTABaseAbility *v13; // rdi
  int v14; // eax
  CDOTA_Bot *v15; // rcx
  float v16; // xmm0_4
  uint32 v17; // edx
  unsigned __int16 v18; // ax
  CEntityIdentity *v19; // rcx
  CEntityIdentity *v20; // rax
  CDOTA_BaseNPC *v21; // rsi
  CDOTA_Bot *v22; // rax
  CDOTA_BotMode *m_pActiveBotMode; // rdi

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_2;
  v5 = m_pBot->m_hTarget.m_Index;
  v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
  if ( v6 == 0 )
    goto LABEL_2;
  v7 = &v6[v5 & 0x1FF];
  if ( v7 == 0 )
    goto LABEL_2;
  if ( m_Index != v7->m_EHandle.m_Index )
    goto LABEL_2;
  m_pInstance = v7->m_pInstance;
  if ( v7->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || (m_pInstance->m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
  {
    goto LABEL_2;
  }
  if ( (m_pInstance->m_iUnitType & 1) != 0 )
  {
    v9 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v10 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v10, m_pInstance);
    if ( v9(this, IllusionState) == 0 )
      goto LABEL_2;
  }
  m_pAbility = this->m_pAbility;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v13 = m_pAbility;
  else
    v13 = 0;
  v14 = (*(v13->_vptr_IHandleEntity + 226))(v13, &vec3_origin, 0);
  v15 = this->m_pBot;
  v16 = v14;
  v17 = v15->m_hUnit.m_Index;
  if ( v17 + 2 <= 1
    || (v18 = v15->m_hUnit.m_Index, (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F]) == 0)
    || (v20 = &v19[v18 & 0x1FF]) == 0
    || v17 != v20->m_EHandle.m_Index
    || (v21 = v20->m_pInstance, v20->m_pInstance == 0)
    || !v21->m_bIsDOTANPC )
  {
    v21 = 0;
  }
  if ( IsBotTargetStatusValidCore(m_pInstance, v21, 251, v16, this->m_pAbility)
    && (v22 = m_pInstance->m_pBot) != 0
    && (m_pActiveBotMode = v22->m_pActiveBotMode) != 0
    && (*(m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pActiveBotMode) == 4 )
  {
    this->m_hTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
    return 2;
  }
  else
  {
LABEL_2:
    this->m_hTarget.m_Index = -1;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_RodOfAtos::UseAbility  (line 52, @0x00000000028a3bc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_RodOfAtos::UseAbility(CDOTA_Bot_AbilityUsage_RodOfAtos *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r15
  CDOTA_BotAction_UseAbility *v8; // r13

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pAbility = this->m_pAbility;
          m_pBot = this->m_pBot;
          if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
            m_pAbility = 0;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


