
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Flask::CDOTA_Bot_AbilityUsage_Flask  (line 20, @0x000000000289c0f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Flask::CDOTA_Bot_AbilityUsage_Flask(
        CDOTA_Bot_AbilityUsage_Flask *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C61B0;
}


// CDOTA_Bot_AbilityUsage_Flask::GetCurrentUsageDesire  (line 28, @0x000000000289e560, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHealthPercent, GetInstance, GetItem, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, WasRecentlyHitByCreep, WasRecentlyHitByTower, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_Bot::WasRecentlyHitByHero, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "modifier_tango_heal", "modifier_flask_healing", "modifier_bottle_regeneration", "modifier_fountain_aura_buff", "total_health"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Flask::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Flask *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  CDOTA_Bot *v15; // rdx
  uint32 v16; // eax
  unsigned __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *v20; // rdi
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *v22; // rdi
  float m_HitByCreepTime; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  CDOTA_Bot *v26; // rdx
  CEntityInstance *v27; // rax
  CEntityInstance *v28; // rdi
  CEntityInstance *v29; // rax
  const CBaseEntity *v30; // rdi
  CEntityInstance *v31; // rax
  CEntityInstance *v32; // rdi
  int LevelSpecialValue; // eax
  CDOTABaseAbility *m_pAbility; // r12
  int v35; // r14d
  CDOTABaseAbility *v36; // rdi
  int v37; // r15d
  CEntityInstance *v38; // rax
  const CBaseEntity *v39; // r13
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // rcx
  CEntityInstance *v43; // rax
  const CBaseEntity *v44; // rdi
  float v45; // [rsp+4h] [rbp-3Ch]
  int Health; // [rsp+8h] [rbp-38h]
  int v47; // [rsp+Ch] [rbp-34h]

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
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_tango_heal", 0) != 0 )
    return 0;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v10, "modifier_flask_healing", 0) != 0 )
    return 0;
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v12, "modifier_bottle_regeneration", 0) != 0 )
    return 0;
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v14, "modifier_fountain_aura_buff", 0) != 0
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
  {
    return 0;
  }
  v15 = this->m_pBot;
  v16 = v15->m_hUnit.m_Index;
  if ( v16 + 2 > 1
    && (v17 = v15->m_hUnit.m_Index, (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9) & 0x3F]) != 0)
    && (v19 = &v18[v17 & 0x1FF]) != 0
    && v16 == v19->m_EHandle.m_Index
    && (v20 = v19->m_pInstance, v19->m_pInstance != 0)
    && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (BYTE1(v20[58]._vptr_IHandleEntity) & 2) != 0 )
      return 0;
  }
  else
  {
    v20 = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
  if ( CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, AbsOrigin, 0) > 5 )
    return 0;
  v22 = this->m_pBot;
  if ( v22->m_nAttackingTowers + v22->m_nAttackingHeroes + v22->m_nAttackingCreeps > 0 )
    return 0;
  m_HitByCreepTime = v22->m_HitByCreepTime;
  v24 = g_pGameRules != 0 ? *&g_pGameRules[18].m_szQuestName[20] - 3.0 : -3.0;
  if ( m_HitByCreepTime > v24 || CDOTA_Bot::WasRecentlyHitByHero(v22, 3.0, m_HitByCreepTime) )
    return 0;
  v25 = 0.0;
  v26 = this->m_pBot;
  if ( g_pGameRules != 0 )
    v25 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v26->m_HitByTowerTime > (v25 - 3.0) )
    return 0;
  v27 = CEntityHandle::operator CEntityInstance *(&v26->m_hUnit);
  if ( v27 == 0 || (v28 = v27, BYTE3(v27[7]._vptr_IHandleEntity) == 0) )
    v28 = 0;
  v47 = (*(v28->_vptr_IHandleEntity + 156))(v28);
  v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
    v30 = v29;
  else
    v30 = 0;
  Health = CBaseEntity::GetHealth(v30);
  v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
    v32 = v31;
  else
    v32 = 0;
  v45 = (*(v32->_vptr_IHandleEntity + 430))(v32);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "buff_duration", -1, 1);
  m_pAbility = this->m_pAbility;
  v35 = LevelSpecialValue;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v36 = m_pAbility;
  else
    v36 = 0;
  v37 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v36, "total_health", -1, 1);
  v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
    v39 = v38;
  else
    v39 = 0;
  v40 = 100LL * CBaseEntity::GetHealth(v39);
  v41 = (*(v39->_vptr_IHandleEntity + 156))(v39);
  v42 = 1;
  if ( v41 > 0 )
    v42 = v41;
  if ( (v40 / v42) > 24 )
  {
    v43 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
      v44 = v43;
    else
      v44 = 0;
    if ( CBaseEntity::GetHealth(v44) > 149 && v47 - Health < v37 + (v35 * v45) - 49 )
      return 0;
  }
  return 2;
}


// CDOTA_Bot_AbilityUsage_Flask::UseAbility  (line 84, @0x000000000289ba90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Flask::UseAbility(CDOTA_Bot_AbilityUsage_Flask *const this)
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


