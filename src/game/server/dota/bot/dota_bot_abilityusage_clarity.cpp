
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Clarity::CDOTA_Bot_AbilityUsage_Clarity  (line 22, @0x000000000289bf50, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Clarity::CDOTA_Bot_AbilityUsage_Clarity(
        CDOTA_Bot_AbilityUsage_Clarity *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5EB0;
}


// CDOTA_Bot_AbilityUsage_Clarity::GetCurrentUsageDesire  (line 30, @0x000000000289e0d0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, WasRecentlyHitByCreep, WasRecentlyHitByTower, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_Bot::WasRecentlyHitByHero, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "modifier_clarity_potion", "modifier_fountain_aura_buff", "total_mana"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Clarity::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Clarity *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CDOTA_Bot *v11; // rax
  uint32 v12; // edx
  unsigned __int16 v13; // cx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CEntityInstance *v16; // rdi
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *v18; // rdi
  float m_HitByCreepTime; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  CDOTA_Bot *v22; // rdx
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // rdi
  int v25; // r12d
  int LevelSpecialValue; // r13d
  float v27; // [rsp+Ch] [rbp-24h]

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = m_pBot->m_hUnit.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
    || (v6 = &v5[v4 & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_clarity_potion", 0) != 0 )
    return 0;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v10, "modifier_fountain_aura_buff", 0) != 0
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4 )
  {
    return 0;
  }
  v11 = this->m_pBot;
  v12 = v11->m_hUnit.m_Index;
  if ( v12 + 2 > 1
    && (v13 = v11->m_hUnit.m_Index, (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F]) != 0)
    && (v15 = &v14[v13 & 0x1FF]) != 0
    && v12 == v15->m_EHandle.m_Index
    && (v16 = v15->m_pInstance, v15->m_pInstance != 0)
    && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (BYTE1(v16[58]._vptr_IHandleEntity) & 2) != 0 )
      return 0;
  }
  else
  {
    v16 = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
  if ( CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, AbsOrigin, 0) > 5 )
    return 0;
  v18 = this->m_pBot;
  if ( v18->m_nAttackingTowers + v18->m_nAttackingHeroes + v18->m_nAttackingCreeps > 0 )
    return 0;
  m_HitByCreepTime = v18->m_HitByCreepTime;
  v20 = g_pGameRules != 0 ? *&g_pGameRules[18].m_szQuestName[20] - 3.0 : -3.0;
  if ( m_HitByCreepTime > v20 || CDOTA_Bot::WasRecentlyHitByHero(v18, 3.0, m_HitByCreepTime) )
    return 0;
  v21 = 0.0;
  v22 = this->m_pBot;
  if ( g_pGameRules != 0 )
    v21 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v22->m_HitByTowerTime > (v21 - 3.0) )
    return 0;
  v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hUnit);
  if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
  {
    v24 = v23;
    v25 = (*&v23[44].m_iszPrivateVScripts.u.m_Id - *&v23[44].m_worldGroupId.m_nHashCode);
  }
  else
  {
    v24 = 0;
    v25 = (0.0 - COERCE_FLOAT(7496));
  }
  v27 = (*(v24->_vptr_IHandleEntity + 431))(v24);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "buff_duration", -1, 1);
  if ( (LevelSpecialValue * v27)
     + v25
     + CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "total_mana", -1, 1) >= -49 )
    return 0;
  return 2;
}


// CDOTA_Bot_AbilityUsage_Clarity::UseAbility  (line 85, @0x000000000289bba0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Clarity::UseAbility(CDOTA_Bot_AbilityUsage_Clarity *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  char v4; // al
  CDOTA_Bot *v5; // rcx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BotAction_UseAbility *v11; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 )
  {
    v5 = this->m_pBot;
    goto LABEL_10;
  }
  v4 = (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility);
  v5 = this->m_pBot;
  if ( v4 == 0 )
LABEL_10:
    m_pAbility = 0;
  m_Index = v5->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(v5->m_hUnit.m_Index),
        (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v9 = &v8[m_Index_low & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v11 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v11, m_pBot, m_pAbility, m_pInstance);
  CDOTA_Bot::PushAction(this->m_pBot, v11);
}


