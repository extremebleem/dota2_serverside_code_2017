
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Beastmaster::CDOTA_Bot_Hero_Beastmaster  (line 21, @0x00000000028aec00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "beastmaster_wild_axes", "beastmaster_call_of_the_wild", "beastmaster_primal_roar"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Beastmaster::CDOTA_Bot_Hero_Beastmaster(
        CDOTA_Bot_Hero_Beastmaster *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rdi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C8C10;
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_pAbilityWildAxes = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "beastmaster_wild_axes", 1);
  v9 = this->m_hUnit.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  this->m_pAbilityCallOfTheWild = CDOTA_BaseNPC::FindAbilityByName(v12, "beastmaster_call_of_the_wild", 1);
  v13 = this->m_hUnit.m_Index;
  if ( v13 + 2 <= 1
    || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v15 = &v14[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v13 != v15->m_EHandle.m_Index
    || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
    || !v16->m_bIsDOTANPC )
  {
    v16 = 0;
  }
  this->m_pAbilityPrimalRoar = CDOTA_BaseNPC::FindAbilityByName(v16, "beastmaster_primal_roar", 1);
}


// CDOTA_Bot_Hero_Beastmaster::GetGankDistance  (line 31, @0x00000000028ac8e0, libserver.so)  // inlines: Get, GetAttackRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IndexToIdentity, IsFullyCastable, IsListeningToEvent, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Hero_Beastmaster::GetGankDistance(CDOTA_Bot_Hero_Beastmaster *const this)
{
  CDOTABaseAbility *m_pAbilityPrimalRoar; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v9; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v12; // rax
  float v13; // xmm3_4
  float v14; // xmm0_4
  __int64 v15; // rax
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rax
  float v19; // xmm1_4
  float v20; // xmm0_4
  int result; // eax
  __int64 v22; // rdx
  float v23; // [rsp+8h] [rbp-18h]
  float v24; // [rsp+8h] [rbp-18h]
  float v25; // [rsp+Ch] [rbp-14h]
  float v26; // [rsp+Ch] [rbp-14h]
  float v27; // [rsp+Ch] [rbp-14h]
  float v28; // [rsp+Ch] [rbp-14h]

  m_pAbilityPrimalRoar = this->m_pAbilityPrimalRoar;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityPrimalRoar) >= 0
    && (*(m_pAbilityPrimalRoar->_vptr_IHandleEntity + 245))(m_pAbilityPrimalRoar) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityPrimalRoar)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityPrimalRoar, -1) )
  {
    return (*(this->m_pAbilityPrimalRoar->_vptr_IHandleEntity + 226))(this->m_pAbilityPrimalRoar, &vec3_origin, 0) + 200;
  }
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  m_hScope_high = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Highest_Internal = 0.0;
  if ( m_hScope_high != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &m_pInstance[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v9 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
  if ( v9 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v9) > 0 )
  {
    v23 = Modifier_Constant_Highest_Internal;
    v25 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &m_pInstance[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v23;
    m_hScope_low = v25;
  }
  v12 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
  v13 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v14 = 0.0;
  if ( v12 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v12) > 0 )
  {
    v24 = Modifier_Constant_Highest_Internal;
    v26 = v13;
    v14 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &m_pInstance[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v24;
    v13 = v26;
  }
  if ( Modifier_Constant_Highest_Internal > (v13 + v14) )
  {
    v22 = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
    result = 500;
    if ( v22 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v22) > 0 )
      return (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &m_pInstance[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                &CModifierParams::s_Default)
            + 500.0);
  }
  else
  {
    v15 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
    v16 = 0.0;
    v17 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
    if ( v15 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v15) > 0 )
    {
      v27 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
      v16 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &m_pInstance[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v17 = v27;
    }
    v18 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
    v19 = v17 + v16;
    v20 = 0.0;
    if ( v18 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v18) > 0 )
    {
      v28 = v19;
      v20 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &m_pInstance[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v19 = v28;
    }
    return ((v20 + v19) + 500.0);
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes  (line 45, @0x00000000028aedd0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes(
        CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8D10;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::GetCurrentUsageDesire  (line 52, @0x00000000028aace0, libserver.so)  // inlines: operator=
int __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes *const this)
{
  this->m_vDesiredLocation = vec3_invalid;
  return 0;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::UseAbility  (line 60, @0x00000000028aaf80, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::UseAbility(
        CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes *const this)
{
  CDOTA_Bot_Hero_Beastmaster *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild::CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild  (line 69, @0x00000000028aedf0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild::CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild(
        CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8D70;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild::GetCurrentUsageDesire  (line 76, @0x00000000028aad10, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild::UseAbility  (line 83, @0x00000000028aad20, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild::UseAbility(
        CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar::CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar  (line 91, @0x00000000028aee10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar::CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar(
        CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8DD0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar::GetCurrentUsageDesire  (line 98, @0x00000000028aad30, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar::UseAbility  (line 105, @0x00000000028aad40, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar::UseAbility(
        CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar *const this)
{
  ;
}


