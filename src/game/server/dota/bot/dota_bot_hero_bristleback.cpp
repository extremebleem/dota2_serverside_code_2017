
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Bristleback::CDOTA_Bot_Hero_Bristleback  (line 21, @0x00000000028b6720, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "bristleback_viscous_nasal_goo", "bristleback_quill_spray", "bristleback_bristleback"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Bristleback::CDOTA_Bot_Hero_Bristleback(
        CDOTA_Bot_Hero_Bristleback *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *v14; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C9F90;
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
  this->m_pAbilityViscousNasalGoo = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "bristleback_viscous_nasal_goo", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityQuillSpray = CDOTA_BaseNPC::FindAbilityByName(v10, "bristleback_quill_spray", 1);
  v11 = this->m_hUnit.m_Index;
  if ( v11 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v11 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || !v14->m_bIsDOTANPC )
  {
    v14 = 0;
  }
  this->m_pAbilityBristleback = CDOTA_BaseNPC::FindAbilityByName(v14, "bristleback_bristleback", 1);
}


// CDOTA_Bot_Hero_Bristleback::GetGankDistance  (line 29, @0x00000000028b59f0, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Bristleback::GetGankDistance(CDOTA_Bot_Hero_Bristleback *const this)
{
  CDOTABaseAbility *m_pAbilityViscousNasalGoo; // rbx
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v7; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v10; // rax
  float v11; // xmm3_4
  float v12; // xmm0_4
  __int64 v13; // rax
  float v14; // xmm0_4
  float v15; // xmm1_4
  __int64 v16; // rax
  float v17; // xmm1_4
  float v18; // xmm0_4
  int result; // eax
  __int64 v20; // rdx
  float v21; // [rsp+8h] [rbp-18h]
  float v22; // [rsp+8h] [rbp-18h]
  float v23; // [rsp+Ch] [rbp-14h]
  float v24; // [rsp+Ch] [rbp-14h]
  float v25; // [rsp+Ch] [rbp-14h]
  float v26; // [rsp+Ch] [rbp-14h]

  m_pAbilityViscousNasalGoo = this->m_pAbilityViscousNasalGoo;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityViscousNasalGoo) >= 0
    && (*(m_pAbilityViscousNasalGoo->_vptr_IHandleEntity + 245))(m_pAbilityViscousNasalGoo) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityViscousNasalGoo)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityViscousNasalGoo, -1) )
  {
    return (*(this->m_pAbilityViscousNasalGoo->_vptr_IHandleEntity + 226))(
             this->m_pAbilityViscousNasalGoo,
             &vec3_origin,
             0)
         + 200;
  }
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  m_hScope_high = HIBYTE(v4[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Highest_Internal = 0.0;
  if ( m_hScope_high != 0xFF && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v4[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v7 = BYTE5(v4[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(v4[47].m_hPrivateScope.m_hScope);
  if ( v7 != 0xFF && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v7) > 0 )
  {
    v21 = Modifier_Constant_Highest_Internal;
    v23 = SLODWORD(v4[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v4[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v21;
    m_hScope_low = v23;
  }
  v10 = BYTE6(v4[67].m_hPrivateScope.m_hScope);
  v11 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v12 = 0.0;
  if ( v10 != 0xFF && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v10) > 0 )
  {
    v22 = Modifier_Constant_Highest_Internal;
    v24 = v11;
    v12 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v4[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v22;
    v11 = v24;
  }
  if ( Modifier_Constant_Highest_Internal > (v11 + v12) )
  {
    v20 = HIBYTE(v4[67].m_hPrivateScope.m_hScope);
    result = 500;
    if ( v20 != 0xFF && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v20) > 0 )
      return (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &v4[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                &CModifierParams::s_Default)
            + 500.0);
  }
  else
  {
    v13 = BYTE5(v4[67].m_hPrivateScope.m_hScope);
    v14 = 0.0;
    v15 = SLODWORD(v4[47].m_hPrivateScope.m_hScope);
    if ( v13 != 0xFF && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v13) > 0 )
    {
      v25 = SLODWORD(v4[47].m_hPrivateScope.m_hScope);
      v14 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v4[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v15 = v25;
    }
    v16 = BYTE6(v4[67].m_hPrivateScope.m_hScope);
    v17 = v15 + v14;
    v18 = 0.0;
    if ( v16 != 0xFF && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v16) > 0 )
    {
      v26 = v17;
      v18 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v4[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v17 = v26;
    }
    return ((v18 + v17) + 500.0);
  }
  return result;
}


// CDOTA_Bot_Hero_Bristleback::GetAggressionFactor  (line 39, @0x00000000028b40d0, libserver.so)  // inlines: GetLevel
// calls: CDOTA_Bot::GetAggressionFactor
float __fastcall CDOTA_Bot_Hero_Bristleback::GetAggressionFactor(CDOTA_Bot_Hero_Bristleback *const this)
{
  float flAggressionBonus; // [rsp+Ch] [rbp-4h]

  flAggressionBonus = this->m_pAbilityBristleback->m_iLevel.m_Value * 0.050000001;
  return CDOTA_Bot::GetAggressionFactor(this) * (flAggressionBonus + 1.0);
}


// CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo::CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo  (line 53, @0x00000000028b68a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo::CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo(
        CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA090;  // vptr: CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo::GetCurrentUsageDesire  (line 58, @0x00000000028bd5c0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsValid, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander (16 total)
// strings: "modifier_bristleback_viscous_nasal_goo", "stack_limit"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo *const this)
{
  int v2; // eax
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r12
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CDOTA_Buff *ModifierByName; // rax
  int v9; // r13d
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rsi
  __int64 v16; // rax
  CEntityInstance *v17; // rax
  CDOTA_Bot_Hero_Bristleback *m_pBot; // r12
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rdi
  CDOTABaseAbility *m_pAbility; // rdi
  int v22; // eax
  CEntityInstance *v23; // rax
  const CBaseEntity *v24; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v26; // r13
  int v27; // r12d
  CHandle<CBaseEntity> *v28; // rdx
  uint32 m_Index; // eax
  __int16 v30; // cx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  uint32 m_iUnitType; // eax
  unsigned __int8 (__fastcall *v35)(CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo *const, _QWORD); // r15
  CDOTA_Commander *v36; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC *v39; // rsi
  CEntityHandle v40; // [rsp+10h] [rbp-E0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEntities; // [rsp+20h] [rbp-D0h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 != 4 )
  {
    if ( v2 == 18 )
    {
      v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        v5 = v13;
      else
        v5 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
      {
        v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
          v15 = v14;
        else
          v15 = 0;
        if ( IsBotTargetStatusValidCore(v5, v15, 251, -1.0, this->m_pAbility)
          && !CDOTA_BaseNPC::IsMovementImpaired(v5)
          && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v5)
          && v5 != 0
          && (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v16 = *&v5[45].m_worldGroupId.m_nHashCode;
          if ( v16 != 0 )
          {
            v40.m_Index = *(v16 + 712);
            v17 = CEntityHandle::operator CEntityInstance *(&v40);
            if ( v17 != 0
              && BYTE3(v17[7]._vptr_IHandleEntity) != 0
              && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v17) < 4.0 )
            {
LABEL_16:
              m_pEntity = v5->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                if ( m_pEntity->m_EHandle.m_Index == -1 )
                  v12 = 0x7FFF;
                else
                  v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hDesiredTarget.m_Index) = v12 | this->m_hDesiredTarget.m_Index & 0x8000;
                this->m_hDesiredTarget.m_Index = (v11 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                return 3;
              }
LABEL_74:
              this->m_hDesiredTarget.m_Index = -1;
              return 3;
            }
          }
        }
      }
    }
    else if ( v2 == 2 )
    {
      v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
        v5 = v4;
      else
        v5 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
      {
        v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
          v7 = v6;
        else
          v7 = 0;
        if ( IsBotTargetStatusValidCore(v5, v7, 251, -1.0, this->m_pAbility) )
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v5, "modifier_bristleback_viscous_nasal_goo", 0);
          if ( ModifierByName == 0
            || (v9 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName)) < CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                                                                     this->m_pAbility,
                                                                                     "stack_limit",
                                                                                     -1,
                                                                                     1) )
          {
            if ( v5 == 0 )
              goto LABEL_74;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_4:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  m_pBot = this->m_pBot;
  if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] <= 0.89999998 )
    goto LABEL_4;
  v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
    v20 = v19;
  else
    v20 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v20) <= 2.0 )
    goto LABEL_4;
  m_pAbility = this->m_pAbility;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_nAllocationCount = 32;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  v22 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v22);
  v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
    v24 = v23;
  else
    v24 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
  SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_72:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    goto LABEL_4;
  }
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    v28 = &hEntities.m_Memory.m_pMemory[v26];
    m_Index = hEntities.m_Memory.m_pMemory[v26].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v30 = v28->m_Index;
      v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
      if ( v31 != 0 )
      {
        v32 = &v31[v30 & 0x1FF];
        if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
        {
          m_pInstance = v32->m_pInstance;
          if ( v32->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            m_iUnitType = m_pInstance->m_iUnitType;
            if ( (m_iUnitType & 1) != 0 && ((m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
            {
              v35 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
              v36 = DOTACommander();
              IllusionState = CDOTA_Commander::GetIllusionState(v36, m_pInstance);
              if ( v35(this, IllusionState) != 0 )
              {
                v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v38 == 0 || (v39 = v38, BYTE3(v38[7]._vptr_IHandleEntity) == 0) )
                  v39 = 0;
                if ( IsBotTargetStatusValidCore(m_pInstance, v39, 251, -1.0, this->m_pAbility)
                  && !CDOTA_BaseNPC::IsMovementImpaired(m_pInstance)
                  && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, m_pInstance) )
                {
                  break;
                }
              }
            }
          }
        }
      }
    }
    ++v27;
    ++v26;
    if ( hEntities.m_Size <= v27 )
      goto LABEL_72;
  }
  this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v26].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo::UseAbility  (line 136, @0x00000000028b5210, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo::UseAbility(
        CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Bristleback *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray  (line 149, @0x00000000028b68d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray(
        CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA0F0;  // vptr: CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray
}


// CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::GetCurrentUsageDesire  (line 154, @0x00000000028bdbd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CountValidTargets, CDOTA_Bot::GetNearbyCreeps, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, __stack_chk_fail, _Unwind_Resume
// globals: CSWTCH.12429, CSWTCH.12430
int __fastcall CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray *const this)
{
  __int64 v2; // rax
  int v3; // r14d
  int v4; // r13d
  int LevelSpecialValue; // eax
  CDOTA_Bot_Hero_Bristleback *m_pBot; // rdi
  __m128i v7; // xmm1
  float v8; // r15d
  int valid; // eax
  CDOTA_Bot_Hero_Bristleback *v10; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hCreeps; // [rsp+0h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hHeroes; // [rsp+20h] [rbp-D0h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 2;
  if ( v2 > 0x12 )
  {
    v4 = 0;
    v3 = 3;
  }
  else
  {
    v3 = CSWTCH_12429[v2];
    v4 = CSWTCH_12430[v2];
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  m_pBot = this->m_pBot;
  *v7.m128i_i32 = LevelSpecialValue;
  hHeroes.m_Memory.m_pMemory = &hHeroes.m_FixedMemory;
  hHeroes.m_Size = 0;
  hHeroes.m_Memory.m_nAllocationCount = 32;
  hHeroes.m_Memory.m_nGrowSize = 0x80000000;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hHeroes, LevelSpecialValue);
  valid = CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CountValidTargets(&hHeroes);
  hHeroes.m_Size = 0;
  if ( v3 <= valid )
  {
    if ( (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory);
      if ( (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory);
    }
  }
  else
  {
    if ( (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0
      || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory),
          (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
    {
      if ( v4 <= 0 )
        return 0;
    }
    else
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory);
      if ( v4 <= 0 )
        return 0;
    }
    v10 = this->m_pBot;
    hCreeps.m_Size = 0;
    hCreeps.m_Memory.m_pMemory = 0;
    hCreeps.m_Memory.m_nAllocationCount = 0;
    hCreeps.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::GetNearbyCreeps(v10, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hCreeps, v8);
    if ( v4 > CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CountValidTargets(&hCreeps) )
    {
      hCreeps.m_Size = 0;
      if ( (hCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hCreeps.m_Memory);
        if ( (hCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hCreeps.m_Memory);
      }
      return 0;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
  }
  return 1;
}


// CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CountValidTargets  (line 214, @0x00000000028b68f0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, LookupEntity, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CountValidTargets(
        const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *const hTargets)
{
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CHandle<CBaseEntity> *v2; // r8
  int result; // eax
  CEntityIdentity *v4; // rsi
  CEntityIdentity *v5; // rsi
  CEntityInstance *m_pInstance; // rcx
  int (**vptr_IHandleEntity)(...); // rcx
  EHANDLE hTarget; // [rsp+0h] [rbp-18h]

  m_pMemory = hTargets->m_Memory.m_pMemory;
  v2 = &m_pMemory[hTargets->m_Size];
  if ( m_pMemory == v2 )
    return 0;
  result = 0;
  do
  {
    while ( 1 )
    {
      hTarget.m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
        if ( v4 != 0 )
        {
          v5 = &v4[hTarget.m_Index & 0x1FF];
          if ( v5 != 0 && m_pMemory->m_Index == v5->m_EHandle.m_Index )
          {
            m_pInstance = v5->m_pInstance;
            if ( v5->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
            {
              vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
              if ( (BYTE1(vptr_IHandleEntity) & 1) == 0 )
                break;
            }
          }
        }
      }
      if ( v2 == ++m_pMemory )
        return result;
    }
    result += (vptr_IHandleEntity & 0x200) == 0;
    ++m_pMemory;
  }
  while ( v2 != m_pMemory );
  return result;
}


// CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::UseAbility  (line 232, @0x00000000028b4110, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::UseAbility(
        CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray *const this)
{
  CDOTA_Bot_Hero_Bristleback *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


