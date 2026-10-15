
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Bloodseeker::CDOTA_Bot_Hero_Bloodseeker  (line 21, @0x00000000028aee60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "bloodseeker_bloodrage", "bloodseeker_blood_bath"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Bloodseeker::CDOTA_Bot_Hero_Bloodseeker(
        CDOTA_Bot_Hero_Bloodseeker *const this,
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
  this->_vptr_CDOTA_Bot = &off_42C8E90;
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
  this->m_pAbilityBloodrage = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "bloodseeker_bloodrage", 1);
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
  this->m_pAbilityRupture = CDOTA_BaseNPC::FindAbilityByName(v12, "bloodseeker_rupture", 1);
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
  this->m_pAbilityBloodRite = CDOTA_BaseNPC::FindAbilityByName(v16, "bloodseeker_blood_bath", 1);
}


// CDOTA_Bot_Hero_Bloodseeker::CreateMode  (line 31, @0x00000000028ab040, libserver.so)  // inlines: CDOTA_BotMode_Attack_Bloodseeker, CDOTA_BotMode_Roam_Bloodseeker
// calls: operator new, CDOTA_BotMode_Roam::CDOTA_BotMode_Roam, CDOTA_Bot::CreateMode, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Bloodseeker::CreateMode(CDOTA_Bot_Hero_Bloodseeker *const this, int iMode)
{
  CDOTA_BotMode_Roam *v3; // r12
  CDOTA_BotMode_Attack *v5; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 2 )
  {
    if ( iMode == 3 )
    {
      v3 = operator new(0x108u);
      CDOTA_BotMode_Roam::CDOTA_BotMode_Roam(v3, this);
      v3->_vptr_CDOTA_BotMode = off_42C8F90;
      return v3;
    }
    return CDOTA_Bot::CreateMode(this, iMode);
  }
  v5 = operator new(0xE8u);
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v5, this);
  v5->_vptr_CDOTA_BotMode = off_42C9050;
  return v5;
}


// CDOTA_Bot_Hero_Bloodseeker::GetGankDistance  (line 47, @0x00000000028ad000, libserver.so)  // inlines: Get, GetAttackRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IndexToIdentity, IsFullyCastable, IsListeningToEvent, IsTrained, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Hero_Bloodseeker::GetGankDistance(CDOTA_Bot_Hero_Bloodseeker *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  float v8; // xmm0_4
  int result; // eax
  float v10; // xmm0_4
  CDOTABaseAbility *m_pAbilityRupture; // r12
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v16; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v19; // rax
  float v20; // xmm3_4
  float v21; // xmm0_4
  __int64 v22; // rax
  float v23; // xmm0_4
  float v24; // xmm1_4
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  __int64 v28; // rdx
  float v29; // [rsp+8h] [rbp-18h]
  float v30; // [rsp+8h] [rbp-18h]
  float v31; // [rsp+Ch] [rbp-14h]
  float v32; // [rsp+Ch] [rbp-14h]
  float v33; // [rsp+Ch] [rbp-14h]
  float v34; // [rsp+Ch] [rbp-14h]

  m_Index = this->m_hUnit.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = this->m_hUnit.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v8 = (*(m_pInstance->_vptr_IHandleEntity + 386))(m_pInstance, v3);
  if ( v8 <= 400.0 )
  {
    m_pAbilityRupture = this->m_pAbilityRupture;
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityRupture) >= 0
      && (*(m_pAbilityRupture->_vptr_IHandleEntity + 245))(m_pAbilityRupture) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityRupture)
      && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityRupture, -1) )
    {
      return (*(this->m_pAbilityRupture->_vptr_IHandleEntity + 226))(this->m_pAbilityRupture, &vec3_origin, 0) + 200;
    }
    else
    {
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
        v13 = v12;
      else
        v13 = 0;
      m_hScope_high = HIBYTE(v13[67].m_hPrivateScope.m_hScope);
      Modifier_Constant_Highest_Internal = 0.0;
      if ( m_hScope_high != 0xFF && *(*&v13[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
        Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                               &v13[64].m_worldGroupId,
                                               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                               &CModifierParams::s_Default);
      v16 = BYTE5(v13[67].m_hPrivateScope.m_hScope);
      Modifier_Constant_Additive_Internal = 0.0;
      m_hScope_low = SLODWORD(v13[47].m_hPrivateScope.m_hScope);
      if ( v16 != 0xFF && *(*&v13[65].m_worldGroupId.m_nHashCode + 24 * v16) > 0 )
      {
        v29 = Modifier_Constant_Highest_Internal;
        v31 = SLODWORD(v13[47].m_hPrivateScope.m_hScope);
        Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                &v13[64].m_worldGroupId,
                                                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                                &CModifierParams::s_Default);
        Modifier_Constant_Highest_Internal = v29;
        m_hScope_low = v31;
      }
      v19 = BYTE6(v13[67].m_hPrivateScope.m_hScope);
      v20 = m_hScope_low + Modifier_Constant_Additive_Internal;
      v21 = 0.0;
      if ( v19 != 0xFF && *(*&v13[65].m_worldGroupId.m_nHashCode + 24 * v19) > 0 )
      {
        v30 = Modifier_Constant_Highest_Internal;
        v32 = v20;
        v21 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &v13[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                &CModifierParams::s_Default);
        Modifier_Constant_Highest_Internal = v30;
        v20 = v32;
      }
      if ( Modifier_Constant_Highest_Internal > (v20 + v21) )
      {
        v28 = HIBYTE(v13[67].m_hPrivateScope.m_hScope);
        result = 500;
        if ( v28 != 0xFF && *(*&v13[65].m_worldGroupId.m_nHashCode + 24 * v28) > 0 )
          return (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                    &v13[64].m_worldGroupId,
                    modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                    &CModifierParams::s_Default)
                + 500.0);
      }
      else
      {
        v22 = BYTE5(v13[67].m_hPrivateScope.m_hScope);
        v23 = 0.0;
        v24 = SLODWORD(v13[47].m_hPrivateScope.m_hScope);
        if ( v22 != 0xFF && *(*&v13[65].m_worldGroupId.m_nHashCode + 24 * v22) > 0 )
        {
          v33 = SLODWORD(v13[47].m_hPrivateScope.m_hScope);
          v23 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                  &v13[64].m_worldGroupId,
                  modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                  &CModifierParams::s_Default);
          v24 = v33;
        }
        v25 = BYTE6(v13[67].m_hPrivateScope.m_hScope);
        v26 = v24 + v23;
        v27 = 0.0;
        if ( v25 != 0xFF && *(*&v13[65].m_worldGroupId.m_nHashCode + 24 * v25) > 0 )
        {
          v34 = v26;
          v27 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                  &v13[64].m_worldGroupId,
                  modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                  &CModifierParams::s_Default);
          v26 = v34;
        }
        return ((v27 + v26) + 500.0);
      }
    }
  }
  else
  {
    result = 1000;
    v10 = (v8 - 400.0) / 400.0;
    if ( v10 >= 0.0 )
    {
      LOWORD(result) = 4000;
      if ( v10 <= 1.0 )
        return ((v10 * 3000.0) + 1000.0);
    }
  }
  return result;
}


// CDOTA_Bot_Hero_Bloodseeker::GetAggressionFactor  (line 62, @0x00000000028ac6b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::GetAggressionFactor, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// strings: "modifier_bloodseeker_thirst_vision"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Hero_Bloodseeker::GetAggressionFactor(CDOTA_Bot_Hero_Bloodseeker *const this)
{
  CDOTABaseAbility *m_pAbilityRupture; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // rax
  float fBonus; // [rsp+Ch] [rbp-14h]

  m_pAbilityRupture = this->m_pAbilityRupture;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityRupture) >= 0
    && (*(m_pAbilityRupture->_vptr_IHandleEntity + 245))(m_pAbilityRupture) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityRupture)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityRupture, -1) )
  {
    fBonus = 1.2;
  }
  else
  {
    fBonus = 1.0;
  }
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_bloodseeker_thirst_vision", 0);
  if ( ModifierByName != 0 )
    fBonus = ((*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) * 0.2) + fBonus;
  return CDOTA_Bot::GetAggressionFactor(this) * fBonus;
}


// CDOTA_Bot_Hero_Bloodseeker::CalculateAverageLifestealValue  (line 79, @0x00000000028abd30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CalculateAverageLifestealValue, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_bloodseeker_bloodrage"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Hero_Bloodseeker::CalculateAverageLifestealValue(CDOTA_Bot_Hero_Bloodseeker *const this)
{
  int v2; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  v2 = CDOTA_Bot::CalculateAverageLifestealValue(this);
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_bloodseeker_bloodrage", 0) != 0 )
    v2 += 15;
  return v2;
}


// CDOTA_BotMode_Roam_Bloodseeker::GetDesire  (line 96, @0x00000000028ab790, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_BotMode::GetUnit, CDOTA_BotMode_Roam::GetDesire
float __fastcall CDOTA_BotMode_Roam_Bloodseeker::GetDesire(CDOTA_BotMode_Roam_Bloodseeker *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm1_4

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
    return CDOTA_BotMode_Roam::GetDesire(this);
  Unit = CDOTA_BotMode::GetUnit(this);
  v3 = (*(Unit->_vptr_IHandleEntity + 386))(Unit);
  if ( v3 <= 400.0 || (v4 = (v3 - 400.0) / 400.0) < 0.0 )
  {
    v5 = 1.0;
  }
  else
  {
    v5 = 1.6;
    if ( v4 <= 1.0 )
      v5 = ((0.60000002 * v4) + 0.0) + 1.0;
  }
  return CDOTA_BotMode_Roam::GetDesire(this) * v5;
}


// CDOTA_BotMode_Attack_Bloodseeker::GetDesire  (line 118, @0x00000000028aba70, libserver.so)  // inlines: IsFullyCastable, IsTrained, RemapValClamped, clamp<float, float>
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode::GetUnit, CDOTA_BotMode_Attack::GetDesire, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
float __fastcall CDOTA_BotMode_Attack_Bloodseeker::GetDesire(CDOTA_BotMode_Attack_Bloodseeker *const this)
{
  CDOTABaseAbility *m_pHead; // r12
  CDOTA_BaseNPC *Unit; // rax
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float fBonus; // [rsp+Ch] [rbp-14h]

  m_pHead = this->m_pBot[1].m_References.m_pHead;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pHead) >= 0
    && (*(m_pHead->_vptr_IHandleEntity + 245))(m_pHead) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pHead) )
  {
    if ( CDOTABaseAbility::IsOwnersGoldEnough(m_pHead, -1) )
      fBonus = 1.2;
    else
      fBonus = 1.0;
  }
  else
  {
    fBonus = 1.0;
  }
  Unit = CDOTA_BotMode::GetUnit(this);
  v4 = (*(Unit->_vptr_IHandleEntity + 386))(Unit);
  if ( v4 > 400.0 )
  {
    v5 = (v4 - 400.0) / 400.0;
    v6 = 0.0;
    if ( v5 >= 0.0 )
    {
      v6 = 0.60000002;
      if ( v5 <= 1.0 )
        v6 = (0.60000002 * v5) + 0.0;
    }
    fBonus = v6 + fBonus;
  }
  return CDOTA_BotMode_Attack::GetDesire(this) * fBonus;
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage  (line 143, @0x00000000028af030, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage(
        CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C90F0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetCurrentUsageDesire  (line 151, @0x00000000028afec0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetSerialNumber, GetTeamNumber, GetUnit, IndexToIdentity, LookupEntity, Set, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, ~CUtlVector
// calls: CDOTA_Bot::GetNearbyCreeps, CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage *const this)
{
  unsigned int v2; // ecx
  CDOTA_Bot_Hero_Bloodseeker *m_pBot; // rdi
  CHandle<CBaseEntity> *v5; // rbx
  CHandle<CBaseEntity> *v6; // r15
  int v7; // r14d
  uint32 v8; // eax
  unsigned int v9; // edx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  const CBaseEntity *v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rsi
  CEntityInstance *v17; // rax
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v19; // xmm1
  CDOTA_BaseNPC *v20; // rbx
  float v21; // r12d
  CEntityInstance *v22; // rax
  const Vector *AbsOrigin; // r14
  CEntityInstance *v24; // rax
  CEntityInstance *v25; // rdx
  CHandle<CBaseEntity> *m_pMemory; // r12
  CHandle<CBaseEntity> *v27; // r14
  int v28; // r15d
  uint32 m_Index; // ebx
  unsigned int v30; // eax
  CEntityIdentity *v31; // rax
  CEntityIdentity *v32; // rax
  CDOTA_BaseNPC *m_pInstance; // rsi
  int BloodrageScore; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v36; // eax
  __int16 v37; // cx
  __int64 v38; // [rsp+28h] [rbp-78h]
  EHANDLE hBestTarget; // [rsp+30h] [rbp-70h] BYREF
  EHANDLE hTarget; // [rsp+40h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyTargets; // [rsp+50h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 1;
  if ( v2 > 0x10 )
    goto LABEL_4;
  if ( ((1LL << v2) & 0x11F81) == 0 )
  {
    if ( ((1LL << v2) & 2) == 0 )
    {
LABEL_4:
      this->m_hDesiredTarget.m_Index = -1;
      return 0;
    }
    m_pAbility = this->m_pAbility;
    hBestTarget.m_Index = -1;
    hNearbyTargets.m_Size = 0;
    hNearbyTargets.m_Memory.m_pMemory = 0;
    hNearbyTargets.m_Memory.m_nAllocationCount = 0;
    hNearbyTargets.m_Memory.m_nGrowSize = 0;
    *v19.m128i_i32 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
    v20 = 0;
    v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
      v20 = v22;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
    v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
      v25 = v24;
    else
      v25 = 0;
    FindUnitsInRadius(HIBYTE(v25[7].m_CScriptComponent), AbsOrigin, v20, v21, &hNearbyTargets, 3, 1, 139264, 0, 0);
    m_pMemory = hNearbyTargets.m_Memory.m_pMemory;
    v27 = &hNearbyTargets.m_Memory.m_pMemory[hNearbyTargets.m_Size];
    if ( hNearbyTargets.m_Memory.m_pMemory != v27 )
    {
      v28 = 0;
      do
      {
        m_Index = m_pMemory->m_Index;
        v30 = m_pMemory->m_Index + 2;
        hTarget.m_Index = m_pMemory->m_Index;
        if ( v30 > 1 )
        {
          v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
          if ( v31 != 0 )
          {
            v32 = &v31[hTarget.m_Index & 0x1FF];
            if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
            {
              m_pInstance = v32->m_pInstance;
              if ( v32->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                BloodrageScore = CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore(this, m_pInstance);
                if ( v28 < BloodrageScore )
                {
                  hBestTarget.m_Index = m_Index;
                  v28 = BloodrageScore;
                }
              }
            }
          }
        }
        ++m_pMemory;
      }
      while ( v27 != m_pMemory );
      if ( v28 > 0 && CEntityHandle::operator CEntityInstance *(&hBestTarget) != 0 )
      {
        this->m_hDesiredTarget = hBestTarget;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargets);
        return 2;
      }
    }
LABEL_43:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargets);
    goto LABEL_4;
  }
  m_pBot = this->m_pBot;
  hNearbyTargets.m_Size = 0;
  hNearbyTargets.m_Memory.m_pMemory = 0;
  hNearbyTargets.m_Memory.m_nAllocationCount = 0;
  hNearbyTargets.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyCreeps(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyTargets, 300.0);
  v5 = hNearbyTargets.m_Memory.m_pMemory;
  v6 = &hNearbyTargets.m_Memory.m_pMemory[hNearbyTargets.m_Size];
  if ( hNearbyTargets.m_Memory.m_pMemory == v6 )
    goto LABEL_43;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = v5->m_Index;
      v9 = v5->m_Index + 2;
      hTarget.m_Index = v5->m_Index;
      if ( v9 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[hTarget.m_Index & 0x1FF];
          if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
          {
            v12 = v11->m_pInstance;
            if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
              break;
          }
        }
      }
      if ( v6 == ++v5 )
        goto LABEL_17;
    }
    v38 = 100LL * CBaseEntity::GetHealth(v11->m_pInstance);
    v13 = (*(v12->_vptr_IHandleEntity + 156))(v12);
    v14 = v13;
    if ( v13 <= 0 )
      v14 = 1;
    ++v5;
    v7 += (v38 / v14) <= 50;
  }
  while ( v6 != v5 );
LABEL_17:
  if ( v7 == 0 )
    goto LABEL_43;
  v15 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  if ( CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore(this, v16) == 0 )
    goto LABEL_43;
  v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 && (m_pEntity = v17->m_pEntity) != 0 )
  {
    v36 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v37 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v37 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v37 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v36 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargets);
  return 1;
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore  (line 228, @0x00000000028af060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, InState, IndexToIdentity, IsSilenced, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::FindNearbyTeammatesInMode, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::IsDangerouslyLow, CEntityHandle::operator CEntityInstance*, CDOTA_TeamCommander::HasIncomingStun
// callers: CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetCurrentUsageDesire
// strings: "modifier_bloodseeker_bloodrage"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore(
        CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_Bot *m_pBot; // r12
  CDOTA_Bot_Hero_Bloodseeker *v6; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v8; // si
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rax
  int v12; // eax
  int NearbyTeammatesInMode; // r14d
  CDOTA_BaseNPC *v14; // rax
  _BOOL4 v15; // ecx
  unsigned int m_iUnitType; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // ecx

  m_pBot = pTarget->m_pBot;
  if ( m_pBot == 0 || CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_bloodseeker_bloodrage", 0) != 0 )
    return 0;
  v6 = this->m_pBot;
  m_Index = v6->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = v6->m_hUnit.m_Index, (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
    || (v10 = &v9[v8 & 0x1FF]) == 0
    || m_Index != v10->m_EHandle.m_Index
    || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  if ( pTarget->m_iTeamNum.m_Value == HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    if ( CDOTA_Bot::IsAboutToDie(m_pBot) || CDOTA_Bot::IsDangerouslyLow(m_pBot) )
      return 0;
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v14 != 0 )
    {
      v15 = 0;
      if ( v14->m_bIsDOTANPC )
        v15 = pTarget == v14;
    }
    else
    {
      v15 = 0;
    }
    m_iUnitType = m_pBot->m_iUnitType;
    v17 = v15 + ((m_iUnitType >> 3) & 2);
    v18 = 0;
    if ( (m_iUnitType & 0x80u) != 0 )
      v18 = (pTarget->m_nUnitState64.m_Value & 8) == 0 ? 2 : 0;
    return v17 + v18 + ((m_iUnitType & 0x20) != 0);
  }
  else
  {
    v12 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
    NearbyTeammatesInMode = CDOTA_Bot::FindNearbyTeammatesInMode(
                              this->m_pBot,
                              DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                              v12,
                              0,
                              pTarget);
    if ( (pTarget->m_nUnitState64.m_Value & 0x20) != 0
      || CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, pTarget) )
    {
      return NearbyTeammatesInMode + 1;
    }
    else
    {
      v19 = 0;
      if ( (m_pBot->m_iUnitType & 0x80u) != 0 )
        v19 = (pTarget->m_nUnitState64.m_Value & 8) == 0 ? 2 : 0;
      return NearbyTeammatesInMode - 1 - ((m_pBot->m_iUnitType >> 3) & 2) - v19 - ((m_pBot->m_iUnitType & 0x20) != 0);
    }
  }
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::UseAbility  (line 275, @0x00000000028ac3f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::UseAbility(
        CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Bloodseeker *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r12

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite  (line 288, @0x00000000028af260, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite(
        CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  vec_t z; // eax

  this->m_pAbility = pAbility;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C9150;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  z = vec3_invalid.z;
  *&this->m_vDesiredLocation.x = *&vec3_invalid.x;
  this->m_vDesiredLocation.z = z;
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::GetCurrentUsageDesire  (line 296, @0x00000000028b2510, libserver.so)  // inlines: Get, GetInstance, GetTeamNumber, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
int __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite *const this)
{
  int v3; // r13d
  int LevelSpecialValue; // r12d
  int v5; // r13d
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rdx
  float fDelaya; // [rsp+1Ch] [rbp-44h]
  float fDelay; // [rsp+1Ch] [rbp-44h]
  int iTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  fDelaya = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  fDelay = fDelaya + CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "delay", -1, 1);
  v5 = (v3 + 100.0);
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v10[7].m_CScriptComponent),
    1,
    2,
    AbsOrigin,
    v5,
    fDelay,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  if ( iTargetCount > 0 )
  {
    this->m_vDesiredLocation = vTargetLoc;
    return 2;
  }
  else
  {
LABEL_2:
    this->m_vDesiredLocation = vec3_invalid;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::UseAbility  (line 325, @0x00000000028aafe0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::UseAbility(
        CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite *const this)
{
  CDOTA_Bot_Hero_Bloodseeker *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture  (line 334, @0x00000000028af290, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture(
        CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C91B0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::GetCurrentUsageDesire  (line 342, @0x00000000028ad6a0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: DOTACommander, CDOTA_Commander::GetIllusionState, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  uint32 m_iUnitType; // eax
  unsigned __int8 (__fastcall *v8)(CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture *const, _QWORD); // r13
  CDOTA_Commander *v9; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_6;
  m_Index = this->m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_6;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
  if ( v3 == 0 )
    goto LABEL_6;
  v4 = &v3[m_Index & 0x1FF];
  if ( v4 == 0 )
    goto LABEL_6;
  if ( m_Index != v4->m_EHandle.m_Index )
    goto LABEL_6;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    goto LABEL_6;
  if ( !m_pInstance->m_bIsDOTANPC )
    goto LABEL_6;
  m_iUnitType = m_pInstance->m_iUnitType;
  if ( (m_iUnitType & 1) == 0 || (m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
    goto LABEL_6;
  v8 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
  v9 = DOTACommander();
  IllusionState = CDOTA_Commander::GetIllusionState(v9, m_pInstance);
  if ( v8(this, IllusionState) == 0 )
    goto LABEL_6;
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
    v12 = 0;
  if ( IsBotTargetStatusValidCore(m_pInstance, v12, 249, -1.0, this->m_pAbility) )
  {
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v15 = 0x7FFF;
      else
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v15 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v14 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 3;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      return 3;
    }
  }
  else
  {
LABEL_6:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::UseAbility  (line 366, @0x00000000028ac310, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::UseAbility(
        CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Bloodseeker *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r12

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


