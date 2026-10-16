
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Alchemist::CDOTA_Bot_Hero_Alchemist  (line 21, @0x00000000028ad9d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "alchemist_unstable_concoction", "alchemist_unstable_concoction_throw", "alchemist_chemical_rage"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Alchemist::CDOTA_Bot_Hero_Alchemist(
        CDOTA_Bot_Hero_Alchemist *const this,
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
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C78B0;
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
  this->m_pAbilityAcidSpray = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "alchemist_acid_spray", 1);
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
  this->m_pAbilityUnstableConcoction = CDOTA_BaseNPC::FindAbilityByName(v12, "alchemist_unstable_concoction", 1);
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
  this->m_pAbilityUnstableConcoctionThrow = CDOTA_BaseNPC::FindAbilityByName(
                                              v16,
                                              "alchemist_unstable_concoction_throw",
                                              1);
  v17 = this->m_hUnit.m_Index;
  if ( v17 + 2 <= 1
    || (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v19 = &v18[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v17 != v19->m_EHandle.m_Index
    || (v20 = v19->m_pInstance, v19->m_pInstance == 0)
    || !v20->m_bIsDOTANPC )
  {
    v20 = 0;
  }
  this->m_pAbilityChemicalRage = CDOTA_BaseNPC::FindAbilityByName(v20, "alchemist_chemical_rage", 1);
}


// CDOTA_Bot_Hero_Alchemist::GetGankDistance  (line 32, @0x00000000028acca0, libserver.so)  // inlines: Get, GetAttackRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IndexToIdentity, IsFullyCastable, IsListeningToEvent, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersGoldEnough
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Hero_Alchemist::GetGankDistance(CDOTA_Bot_Hero_Alchemist *const this)
{
  CDOTABaseAbility *m_pAbilityUnstableConcoction; // rbx
  CDOTABaseAbility *m_pAbilityUnstableConcoctionThrow; // rbx
  uint32 m_Index; // ecx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v10; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v13; // rax
  float v14; // xmm3_4
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm1_4
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  int result; // eax
  __int64 v23; // rdx
  float v24; // [rsp+8h] [rbp-18h]
  float v25; // [rsp+8h] [rbp-18h]
  float v26; // [rsp+Ch] [rbp-14h]
  float v27; // [rsp+Ch] [rbp-14h]
  float v28; // [rsp+Ch] [rbp-14h]
  float v29; // [rsp+Ch] [rbp-14h]

  m_pAbilityUnstableConcoction = this->m_pAbilityUnstableConcoction;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityUnstableConcoction) >= 0
    && (*(m_pAbilityUnstableConcoction->_vptr_IHandleEntity + 245))(m_pAbilityUnstableConcoction) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityUnstableConcoction)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityUnstableConcoction, -1) )
  {
    return (*(this->m_pAbilityUnstableConcoctionThrow->_vptr_IHandleEntity + 226))(
             this->m_pAbilityUnstableConcoctionThrow,
             &vec3_origin,
             0)
         + 200;
  }
  m_pAbilityUnstableConcoctionThrow = this->m_pAbilityUnstableConcoctionThrow;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityUnstableConcoctionThrow) >= 0
    && (*(m_pAbilityUnstableConcoctionThrow->_vptr_IHandleEntity + 245))(m_pAbilityUnstableConcoctionThrow) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityUnstableConcoctionThrow)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityUnstableConcoctionThrow, -1) )
  {
    return (*(this->m_pAbilityUnstableConcoctionThrow->_vptr_IHandleEntity + 226))(
             this->m_pAbilityUnstableConcoctionThrow,
             &vec3_origin,
             0)
         + 200;
  }
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
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
  v10 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
  if ( v10 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v10) > 0 )
  {
    v24 = Modifier_Constant_Highest_Internal;
    v26 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &m_pInstance[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v24;
    m_hScope_low = v26;
  }
  v13 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
  v14 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v15 = 0.0;
  if ( v13 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v13) > 0 )
  {
    v25 = Modifier_Constant_Highest_Internal;
    v27 = v14;
    v15 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &m_pInstance[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v25;
    v14 = v27;
  }
  if ( Modifier_Constant_Highest_Internal > (v14 + v15) )
  {
    v23 = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
    result = 200;
    if ( v23 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v23) > 0 )
      return (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &m_pInstance[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                &CModifierParams::s_Default)
            + 200.0);
  }
  else
  {
    v16 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
    v17 = 0.0;
    v18 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
    if ( v16 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v16) > 0 )
    {
      v28 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
      v17 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &m_pInstance[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v18 = v28;
    }
    v19 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
    v20 = v18 + v17;
    v21 = 0.0;
    if ( v19 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v19) > 0 )
    {
      v29 = v20;
      v21 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &m_pInstance[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v20 = v29;
    }
    return ((v21 + v20) + 200.0);
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray  (line 46, @0x00000000028adc20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray(
        CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C79B0;  // vptr: CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray
}


// CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::GetCurrentUsageDesire  (line 53, @0x00000000028aaaf0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::UseAbility  (line 60, @0x00000000028aab00, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::UseAbility(
        CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction::CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction  (line 69, @0x00000000028adc40, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction::CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction(
        CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7A10;  // vptr: CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction
}


// CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction::GetCurrentUsageDesire  (line 76, @0x00000000028aab10, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction::UseAbility  (line 83, @0x00000000028aab20, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction::UseAbility(
        CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow::CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow  (line 91, @0x00000000028adc60, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow::CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow(
        CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7A70;  // vptr: CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow
}


// CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow::GetCurrentUsageDesire  (line 98, @0x00000000028aab30, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow::UseAbility  (line 105, @0x00000000028aab40, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow::UseAbility(
        CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage  (line 113, @0x00000000028adc80, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage(
        CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7AD0;  // vptr: CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage
}


// CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::GetCurrentUsageDesire  (line 120, @0x00000000028aab50, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::UseAbility  (line 127, @0x00000000028aab60, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::UseAbility(
        CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage *const this)
{
  ;
}


