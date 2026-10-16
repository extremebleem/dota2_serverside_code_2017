
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Riki::CDOTA_Bot_Hero_Riki  (line 21, @0x00000000028d68f0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "riki_blink_strike", "riki_permanent_invisibility", "riki_tricks_of_the_trade"
void __fastcall CDOTA_Bot_Hero_Riki::CDOTA_Bot_Hero_Riki(
        CDOTA_Bot_Hero_Riki *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CF9B0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilitySmokeScreen = CDOTA_BaseNPC::FindAbilityByName(v6, "riki_smoke_screen", 0);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityBlinkStrike = CDOTA_BaseNPC::FindAbilityByName(v8, "riki_blink_strike", 0);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityPermanentInvisibility = CDOTA_BaseNPC::FindAbilityByName(v10, "riki_permanent_invisibility", 0);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityTricksOfTheTrade = CDOTA_BaseNPC::FindAbilityByName(v12, "riki_tricks_of_the_trade", 0);
}


// CDOTA_Bot_Hero_Riki::CreateMode  (line 30, @0x00000000028d2900, libserver.so)  // inlines: CDOTA_BotMode_Attack_Riki, CDOTA_BotMode_Roam_Riki
// calls: operator new, CDOTA_BotMode_Roam::CDOTA_BotMode_Roam, CDOTA_Bot::CreateMode, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Riki::CreateMode(CDOTA_Bot_Hero_Riki *const this, int iMode)
{
  CDOTA_BotMode_Roam *v3; // r12
  CDOTA_BotMode_Attack *v5; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 2 )
  {
    if ( iMode == 3 )
    {
      v3 = operator new(0x108u);  // new CDOTA_BotMode_Roam_Riki (size matches)
      CDOTA_BotMode_Roam::CDOTA_BotMode_Roam(v3, this);
      v3->_vptr_CDOTA_BotMode = off_42CFB50;  // vptr: CDOTA_BotMode_Roam_Riki
      return v3;
    }
    return CDOTA_Bot::CreateMode(this, iMode);
  }
  v5 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Riki (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v5, this);
  v5->_vptr_CDOTA_BotMode = off_42CFAB0;  // vptr: CDOTA_BotMode_Attack_Riki
  return v5;
}


// CDOTA_Bot_Hero_Riki::GetGankDistance  (line 44, @0x00000000028d4b20, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Riki::GetGankDistance(CDOTA_Bot_Hero_Riki *const this)
{
  CDOTABaseAbility *m_pAbilityBlinkStrike; // rbx
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

  m_pAbilityBlinkStrike = this->m_pAbilityBlinkStrike;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityBlinkStrike) >= 0
    && (*(m_pAbilityBlinkStrike->_vptr_IHandleEntity + 245))(m_pAbilityBlinkStrike) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityBlinkStrike)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityBlinkStrike, -1) )
  {
    return (*(this->m_pAbilityBlinkStrike->_vptr_IHandleEntity + 226))(this->m_pAbilityBlinkStrike, &vec3_origin, 0)
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


// CDOTA_Bot_Hero_Riki::GetAggressionFactor  (line 54, @0x00000000028d2450, libserver.so)  // inlines: GetLevel
// calls: CDOTA_Bot::GetAggressionFactor
float __fastcall CDOTA_Bot_Hero_Riki::GetAggressionFactor(CDOTA_Bot_Hero_Riki *const this)
{
  float fAggressionBonus; // [rsp+Ch] [rbp-4h]

  fAggressionBonus = this->m_pAbilityPermanentInvisibility->m_iLevel.m_Value * 0.1;
  return CDOTA_Bot::GetAggressionFactor(this) * (fAggressionBonus + 1.0);
}


// CDOTA_Bot_Hero_Riki::SetAttackMoveAction  (line 64, @0x00000000028d7770, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::SetAttackMoveAction, FindUnitsInRadius, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Bot::SetAttackAction, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Riki::SetAttackMoveAction(CDOTA_Bot_Hero_Riki *const this, const Vector *const vLoc)
{
  EHANDLE *p_m_hUnit; // r13
  CEntityInstance *v5; // rax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rdx
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CHandle<CBaseEntity> *v9; // rdi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CDOTA_BaseNPC *m_pInstance; // rsi
  EHANDLE hTarget; // [rsp+20h] [rbp-50h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+30h] [rbp-40h] BYREF

  p_m_hUnit = &this->m_hUnit;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 && SLOBYTE(v5[58]._vptr_IHandleEntity) < 0 )
  {
    hTargets.m_Size = 0;
    hTargets.m_Memory.m_pMemory = 0;
    hTargets.m_Memory.m_nAllocationCount = 0;
    hTargets.m_Memory.m_nGrowSize = 0;
    v6 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    v7 = 0;
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, vLoc, v7, 200.0, &hTargets, 2, 2, 144, 1, 0);
    m_pMemory = hTargets.m_Memory.m_pMemory;
    v9 = &hTargets.m_Memory.m_pMemory[hTargets.m_Size];
    if ( hTargets.m_Memory.m_pMemory == v9 )
    {
LABEL_16:
      CDOTA_Bot::SetAttackMoveAction(this, vLoc);
      hTargets.m_Size = 0;
      if ( (hTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets.m_Memory);
        if ( (hTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets.m_Memory);
      }
    }
    else
    {
      while ( 1 )
      {
        hTarget.m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 > 1 )
        {
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[hTarget.m_Index & 0x1FF];
            if ( v11 != 0 && m_pMemory->m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( v9 == ++m_pMemory )
          goto LABEL_16;
      }
      CDOTA_Bot::SetAttackAction(this, m_pInstance, 0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
    }
  }
  else
  {
    CDOTA_Bot::SetAttackMoveAction(this, vLoc);
  }
}


// CDOTA_BotMode_Attack_Riki::GetAttackScore  (line 95, @0x00000000028d31d0, libserver.so)  // inlines: FastSqrt, GetDistanceToEntity, GetTeamNumber, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BaseNPC::FindModifierByName, CDOTAGamerules::GetTeamTower, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTAGamerules::GetNumTeamTowers
// strings: "modifier_item_gem_of_true_sight"
float __fastcall CDOTA_BotMode_Attack_Riki::GetAttackScore(
        CDOTA_BotMode_Attack_Riki *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_Buff *ModifierByName; // rax
  float result; // xmm0_4
  int i; // ebx
  CDOTA_BaseNPC_Tower *TeamTower; // r14
  CDOTA_BaseNPC *Unit; // r15
  const Vector *AbsOrigin; // r14
  const Vector *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  float fGankScore; // [rsp+8h] [rbp-38h]

  fGankScore = CDOTA_BotMode_Attack::GetAttackScore(this, pTarget);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_item_gem_of_true_sight", 0);
  result = fGankScore;
  if ( ModifierByName == 0 )
  {
    for ( i = 0; i < CDOTAGamerules::GetNumTeamTowers(g_pGameRules, pTarget->m_iTeamNum.m_Value); ++i )
    {
      TeamTower = CDOTAGamerules::GetTeamTower(g_pGameRules, pTarget->m_iTeamNum.m_Value, i);
      if ( TeamTower != 0 )
      {
        Unit = CDOTA_BotMode::GetUnit(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(TeamTower);
        v9 = CBaseEntity::GetAbsOrigin(Unit);
        if ( fsqrt(
               (((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x)) + ((v9->y - AbsOrigin->y) * (v9->y - AbsOrigin->y)))
             + ((v9->z - AbsOrigin->z) * (v9->z - AbsOrigin->z))) < 2200.0 )
          return fGankScore;
      }
    }
    v10 = CDOTA_BotMode::GetUnit(this);
    result = fGankScore;
    if ( SLOBYTE(v10->m_nUnitState64.m_Value) < 0 )
      return fGankScore * 1.8;
  }
  return result;
}


// CDOTA_BotMode_Attack_Riki::CalculateDesiredLocation  (line 128, @0x00000000028d4ed0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BotMode_Attack::CalculateDesiredLocation
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Attack_Riki::CalculateDesiredLocation(CDOTA_BotMode_Attack_Riki *const this)
{
  CDOTA_Bot *m_pBot; // r12
  CEntityInstance *v3; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v9; // rdx
  Vector v12; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( SLOBYTE(CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value) < 0
    && (m_pBot = this->m_pBot, (v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget)) != 0)
    && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    m_Index = m_pBot->m_hTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[m_pBot->m_hTarget.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v9 = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    *&v12.x = v9;
    LODWORD(v12.z) = AbsOrigin;
  }
  else
  {
    v12 = CDOTA_BotMode_Attack::CalculateDesiredLocation(this);
  }
  *&result.x = *&v12.x;
  result.z = v12.z;
  return result;
}


// CDOTA_BotMode_Attack_Riki::GetDesire  (line 140, @0x00000000028d2550, libserver.so)
// calls: CDOTA_BotMode_Attack::GetDesire
float __fastcall CDOTA_BotMode_Attack_Riki::GetDesire(CDOTA_BotMode_Attack_Riki *const this)
{
  CDOTA_Bot *m_pBot; // r12

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 2
    && *(*&m_pBot[1].m_bForceIdle + 788LL) != 0 )
  {
    return 0.89999998;
  }
  else
  {
    return CDOTA_BotMode_Attack::GetDesire(this);
  }
}


// CDOTA_BotMode_Roam_Riki::GetDesire  (line 163, @0x00000000028d29a0, libserver.so)
// calls: CDOTA_BotMode_Roam::GetDesire, CDOTA_BotMode::GetUnit
float __fastcall CDOTA_BotMode_Roam_Riki::GetDesire(CDOTA_BotMode_Roam_Riki *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  float v3; // xmm1_4
  float Desire; // [rsp+Ch] [rbp-14h]

  Desire = CDOTA_BotMode_Roam::GetDesire(this);
  Unit = CDOTA_BotMode::GetUnit(this);
  v3 = 1.0;
  if ( SLOBYTE(Unit->m_nUnitState64.m_Value) < 0 )
    v3 = 1.5;
  return Desire * v3;
}


// CDOTA_Bot_AbilityUsage_Riki_SmokeScreen::CDOTA_Bot_AbilityUsage_Riki_SmokeScreen  (line 172, @0x00000000028d6a10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Riki_SmokeScreen::CDOTA_Bot_AbilityUsage_Riki_SmokeScreen(
        CDOTA_Bot_AbilityUsage_Riki_SmokeScreen *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  vec_t z; // eax

  this->m_pAbility = pAbility;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CFC10;  // vptr: CDOTA_Bot_AbilityUsage_Riki_SmokeScreen
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  z = vec3_origin.z;
  *&this->m_vDesiredLocation.x = *&vec3_origin.x;
  this->m_vDesiredLocation.z = z;
}


// CDOTA_Bot_AbilityUsage_Riki_SmokeScreen::GetCurrentUsageDesire  (line 178, @0x00000000028de360, libserver.so)  // inlines: DistTo, FastSqrt, Get, GetInstance, GetTargetNPC, GetTeamNumber, GetUnit, IsBotTargetStatusValid, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetAttackRange
int __fastcall CDOTA_Bot_AbilityUsage_Riki_SmokeScreen::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Riki_SmokeScreen *const this)
{
  int v2; // r14d
  int LevelSpecialValue; // r13d
  int v4; // eax
  int v5; // r14d
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // r15
  CEntityInstance *v9; // rax
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CEntityInstance *v15; // rax
  const Vector *v16; // r14
  const Vector *v17; // rax
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  int v20; // r14d
  CEntityInstance *v21; // rax
  const CBaseEntity *v22; // rdi
  const Vector *v23; // r15
  CEntityInstance *v24; // rax
  float fTimeInFuture; // [rsp+1Ch] [rbp-54h]
  float fTimeInFuturea; // [rsp+1Ch] [rbp-54h]
  float fTimeInFutureb; // [rsp+1Ch] [rbp-54h]
  int iTargetCount; // [rsp+2Ch] [rbp-44h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-40h] BYREF

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "radius", -1, 1);
  v4 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v4 != 2 )
  {
    if ( v4 == 18 )
    {
      fTimeInFuture = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      v5 = (v2 + 100.0);
      v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
        v7 = v6;
      else
        v7 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
        v9 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v9[7].m_CScriptComponent),
        1,
        2,
        AbsOrigin,
        v5,
        fTimeInFuture,
        LevelSpecialValue,
        &vTargetLoc,
        &iTargetCount);
      if ( iTargetCount > 0 )
      {
        this->m_vDesiredLocation = vTargetLoc;
        return 2;
      }
    }
    goto LABEL_25;
  }
  fTimeInFutureb = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  v20 = (v2 + 100.0);
  v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
    v22 = v21;
  else
    v22 = 0;
  v23 = CBaseEntity::GetAbsOrigin(v22);
  v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v24 == 0 || BYTE3(v24[7]._vptr_IHandleEntity) == 0 )
    v24 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v24[7].m_CScriptComponent),
    1,
    2,
    v23,
    v20,
    fTimeInFutureb,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  if ( iTargetCount <= 2 )
  {
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
      v12 = v11;
    else
      v12 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v12) )
      goto LABEL_25;
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
      v14 = v13;
    else
      v14 = 0;
    if ( !IsBotTargetStatusValidCore(v12, v14, 251, -1.0, this->m_pAbility)
      || (v15 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
      && BYTE3(v15[7]._vptr_IHandleEntity) != 0
      && SLOBYTE(v15[58]._vptr_IHandleEntity) < 0
      && ((v16 = CBaseEntity::GetAbsOrigin(v15),
           v17 = CBaseEntity::GetAbsOrigin(v12),
           fTimeInFuturea = fsqrt(
                              (((v17->x - v16->x) * (v17->x - v16->x)) + ((v17->y - v16->y) * (v17->y - v16->y)))
                            + ((v17->z - v16->z) * (v17->z - v16->z))),
           (v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0)
       || BYTE3(v18[7]._vptr_IHandleEntity) == 0
        ? (v19 = 0)
        : (v19 = v18),
          CDOTA_BaseNPC::GetAttackRange(v19) < fTimeInFuturea) )
    {
LABEL_25:
      this->m_vDesiredLocation = vec3_origin;
      return 0;
    }
  }
  this->m_vDesiredLocation = vTargetLoc;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Riki_SmokeScreen::UseAbility  (line 233, @0x00000000028d27c0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Riki_SmokeScreen::UseAbility(
        CDOTA_Bot_AbilityUsage_Riki_SmokeScreen *const this)
{
  CDOTA_Bot_Hero_Riki *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::CDOTA_Bot_AbilityUsage_Riki_BlinkStrike  (line 242, @0x00000000028d6a40, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::CDOTA_Bot_AbilityUsage_Riki_BlinkStrike(
        CDOTA_Bot_AbilityUsage_Riki_BlinkStrike *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CFC70;  // vptr: CDOTA_Bot_AbilityUsage_Riki_BlinkStrike
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::GetCurrentUsageDesire  (line 247, @0x00000000028df950, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DEG2RAD, DistTo, DotProduct, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, Length, Length2D, LookupEntity, Set, ToDOTABaseNPC, VectorLength, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator-, operator=, operator==<CBaseEntity>, ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetFountain, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetAttackRange, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float> (18 total)
// strings: "modifier_item_dustofappearance", "riki_permanent_invisibility", "backstab_angle", "modifier_truesight"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Riki_BlinkStrike *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rdi
  int v5; // eax
  CDOTA_Bot_Hero_Riki *m_pBot; // rdi
  __m128i v7; // xmm7
  float v8; // ebx
  CEntityInstance *v9; // rax
  const CBaseEntity *v10; // rdi
  const Vector *v11; // rax
  float v12; // r14d
  float y; // r12d
  vec_t z; // ebx
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rdi
  CBaseEntity *Fountain; // rax
  const Vector *v18; // rax
  float v19; // xmm1_4
  float v20; // xmm0_4
  vec_t *p_m_Index; // rbx
  CHandle<CBaseEntity> *v22; // r14
  vec_t v23; // r12d
  unsigned int v24; // eax
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *v28; // rax
  float v29; // xmm0_4
  CEntityInstance *v31; // rax
  CDOTA_BaseNPC *v32; // rbx
  CEntityInstance *v33; // rax
  CDOTA_BaseNPC *v34; // rsi
  CEntityInstance *v35; // rax
  CDOTA_BaseNPC *v36; // rdi
  CEntityInstance *v37; // rax
  const CBaseEntity *v38; // rdi
  const Vector *AbsOrigin; // rax
  const Vector *v40; // rax
  float v41; // xmm0_4
  CEntityInstance *v42; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float LevelSpecialValue; // xmm0_4
  const QAngle *AbsAngles; // rax
  CEntityInstance *v46; // rax
  CEntityInstance *v47; // rdi
  CDOTALocomotor *v48; // rax
  float v49; // xmm1_4
  int v50; // xmm1_4
  CDOTALocomotor *v51; // rax
  float v52; // xmm1_4
  int v53; // xmm1_4
  float v54; // xmm1_4
  CEntityInstance *v55; // rax
  CDOTA_BaseNPC *v56; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v58; // eax
  __int16 v59; // cx
  float __for_range; // [rsp+0h] [rbp-90h]
  float fCurrentDistanceFromDesiredLoc; // [rsp+8h] [rbp-88h]
  float fCurrentDistanceFromDesiredLoca; // [rsp+8h] [rbp-88h]
  float fCurrentDistanceFromDesiredLocb; // [rsp+8h] [rbp-88h]
  float v64; // [rsp+Ch] [rbp-84h]
  float x; // [rsp+Ch] [rbp-84h]
  float v66; // [rsp+Ch] [rbp-84h]
  float fDotThreshold; // [rsp+10h] [rbp-80h]
  float fDotThresholdb; // [rsp+10h] [rbp-80h]
  vec_t fDotThresholda; // [rsp+10h] [rbp-80h]
  float fDotThresholdc; // [rsp+10h] [rbp-80h]
  float fAttackRange; // [rsp+14h] [rbp-7Ch]
  float fAttackRangea; // [rsp+14h] [rbp-7Ch]
  float fRikiSpeed; // [rsp+18h] [rbp-78h]
  float fRikiSpeeda; // [rsp+18h] [rbp-78h]
  float fRikiSpeedb; // [rsp+18h] [rbp-78h]
  float vRikiPosition; // [rsp+1Ch] [rbp-74h]
  float vRikiPositiona; // [rsp+1Ch] [rbp-74h]
  Vector vTargetForward; // [rsp+20h] [rbp-70h] BYREF
  Vector vCasterForward; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyTargets; // [rsp+40h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 )
  {
    v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
      v32 = v31;
    else
      v32 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v32) )
      goto LABEL_27;
    v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
      v34 = v33;
    else
      v34 = 0;
    if ( !IsBotTargetStatusValidCore(v32, v34, 251, -1.0, this->m_pAbility) )
      goto LABEL_27;
    v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v35 == 0 || (v36 = v35, BYTE3(v35[7]._vptr_IHandleEntity) == 0) )
      v36 = 0;
    fAttackRangea = CDOTA_BaseNPC::GetAttackRange(v36);
    v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
      v38 = v37;
    else
      v38 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v38);
    fRikiSpeeda = AbsOrigin->x;
    vRikiPositiona = AbsOrigin->y;
    fDotThresholdb = AbsOrigin->z;
    v40 = CBaseEntity::GetAbsOrigin(v32);
    v41 = fsqrt(
            (((fRikiSpeeda - v40->x) * (fRikiSpeeda - v40->x)) + ((vRikiPositiona - v40->y) * (vRikiPositiona - v40->y)))
          + ((fDotThresholdb - v40->z) * (fDotThresholdb - v40->z)));
    if ( fAttackRangea > v41 )
      goto LABEL_27;
    fCurrentDistanceFromDesiredLoca = v41;
    x = v40->x;
    fDotThresholda = v40->y;
    v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 && SLOBYTE(v42[58]._vptr_IHandleEntity) < 0 )
    {
      __for_range = fCurrentDistanceFromDesiredLoca;
      fCurrentDistanceFromDesiredLocb = x;
      v66 = fDotThresholda;
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v42, "riki_permanent_invisibility", 0);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "backstab_angle", -1, 1);
      fDotThresholdc = cosf(LevelSpecialValue * 0.017453292);
      AbsAngles = CBaseEntity::GetAbsAngles(v32);
      AngleVectors(AbsAngles, &vTargetForward, 0, 0);
      vTargetForward.z = 0.0;
      VectorNormalize(&vTargetForward);
      vCasterForward.z = 0.0;
      vCasterForward.x = fCurrentDistanceFromDesiredLocb - fRikiSpeeda;
      vCasterForward.y = v66 - vRikiPositiona;
      VectorNormalize(&vCasterForward);
      if ( (((vTargetForward.x * vCasterForward.x) + (vTargetForward.y * vCasterForward.y))
          + (vTargetForward.z * vCasterForward.z)) <= fDotThresholdc )
        goto LABEL_27;
      v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
        v47 = v46;
      else
        v47 = 0;
      v48 = (*(v47->_vptr_IHandleEntity + 376))(v47);
      *&hNearbyTargets.m_Size = CDOTALocomotor::GetAverageVelocityOverTime(v48, 2.0, v49).m128i_u64[0];
      LODWORD(hNearbyTargets.m_Memory.m_pMemory) = v50;
      fRikiSpeedb = fsqrt(
                      (*&hNearbyTargets.m_Size * *&hNearbyTargets.m_Size)
                    + (*(&hNearbyTargets.m_Size + 1) * *(&hNearbyTargets.m_Size + 1)));
      v51 = (*(v32->_vptr_IHandleEntity + 376))(v32);
      *&hNearbyTargets.m_Size = CDOTALocomotor::GetAverageVelocityOverTime(v51, 2.0, v52).m128i_u64[0];
      LODWORD(hNearbyTargets.m_Memory.m_pMemory) = v53;
      v54 = fsqrt(
              (*&hNearbyTargets.m_Size * *&hNearbyTargets.m_Size)
            + (*(&hNearbyTargets.m_Size + 1) * *(&hNearbyTargets.m_Size + 1)));
      if ( fRikiSpeedb > v54 && (fRikiSpeedb - v54) >= ((__for_range - fAttackRangea) * 0.5) )
        goto LABEL_27;
    }
    else if ( v32 == 0 )
    {
LABEL_73:
      this->m_hDesiredTarget.m_Index = -1;
      return 2;
    }
    m_pEntity = v32->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v58 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v59 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v59 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v59 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v58 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 2;
    }
    goto LABEL_73;
  }
  if ( v2 != 4 )
    goto LABEL_27;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v4, "modifier_item_dustofappearance", 0) == 0 )
  {
    v55 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
      v56 = v55;
    else
      v56 = 0;
    if ( CDOTA_BaseNPC::FindAbilityByName(v56, "modifier_truesight", 0) == 0 )
      goto LABEL_27;
  }
  v5 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  m_pBot = this->m_pBot;
  *v7.m128i_i32 = v5;
  hNearbyTargets.m_Size = 0;
  hNearbyTargets.m_Memory.m_pMemory = 0;
  hNearbyTargets.m_Memory.m_nAllocationCount = 0;
  hNearbyTargets.m_Memory.m_nGrowSize = 0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  CDOTA_Bot::GetNearbyCreeps(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyTargets, v5);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyTargets, v8);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  v11 = CBaseEntity::GetAbsOrigin(v10);
  v12 = v11->x;
  y = v11->y;
  z = v11->z;
  v15 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  Fountain = CDOTA_BaseNPC::GetFountain(v16);
  v18 = CBaseEntity::GetAbsOrigin(Fountain);
  v19 = z;
  v20 = v12 - v18->x;
  p_m_Index = &hNearbyTargets.m_Memory.m_pMemory->m_Index;
  fCurrentDistanceFromDesiredLoc = v18->x;
  v64 = v18->y;
  fAttackRange = v18->z;
  vTargetForward.x = NAN;
  fRikiSpeed = 0.0;
  v22 = &hNearbyTargets.m_Memory.m_pMemory[hNearbyTargets.m_Size];
  fDotThreshold = fsqrt(((v20 * v20) + ((y - v64) * (y - v64))) + ((v19 - fAttackRange) * (v19 - fAttackRange)));
  if ( hNearbyTargets.m_Memory.m_pMemory != v22 )
  {
    do
    {
      v23 = *p_m_Index;
      v24 = *p_m_Index + 2;
      vCasterForward.x = *p_m_Index;
      if ( v24 > 1 )
      {
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vCasterForward.x) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[LOWORD(vCasterForward.x) & 0x1FF];
          if ( v26 != 0 && LODWORD(v23) == v26->m_EHandle.m_Index )
          {
            m_pInstance = v26->m_pInstance;
            if ( v26->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              v28 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v29 = fsqrt(
                      (((v28->x - fCurrentDistanceFromDesiredLoc) * (v28->x - fCurrentDistanceFromDesiredLoc))
                     + ((v28->y - v64) * (v28->y - v64)))
                    + ((v28->z - fAttackRange) * (v28->z - fAttackRange)));
              if ( (fDotThreshold - v29) >= 350.0 )
              {
                vRikiPosition = v29;
                if ( CEntityHandle::operator CEntityInstance *(&vTargetForward) == 0 || fRikiSpeed > vRikiPosition )
                {
                  vTargetForward.x = v23;
                  fRikiSpeed = vRikiPosition;
                }
              }
            }
          }
        }
      }
      ++p_m_Index;
    }
    while ( v22 != p_m_Index );
  }
  if ( CEntityHandle::operator CEntityInstance *(&vTargetForward) == 0 )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargets);
LABEL_27:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  this->m_hDesiredTarget.m_Index = LODWORD(vTargetForward.x);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargets);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::UseAbility  (line 365, @0x00000000028d3a20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::UseAbility(
        CDOTA_Bot_AbilityUsage_Riki_BlinkStrike *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Riki *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::UseOnIllusionState  (line 374, @0x00000000028d1ff0, libserver.so)
bool __fastcall CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::UseOnIllusionState(
        CDOTA_Bot_AbilityUsage_Riki_BlinkStrike *const this,
        DOTA_BOT_ILLUSION_STATE iState)
{
  return iState <= DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
}


// CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade  (line 393, @0x00000000028d6a70, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade(
        CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CFCD0;  // vptr: CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade
}


// CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::GetCurrentUsageDesire  (line 398, @0x00000000028dc9a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Bot::CanEasilyBeKilled, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade *const this)
{
  int result; // eax
  int LevelSpecialValue; // eax
  CDOTA_Bot_Hero_Riki *m_pBot; // rdi
  int v5; // [rsp+Ch] [rbp-34h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyTargets; // [rsp+10h] [rbp-30h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    return 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "range", -1, 1);
  m_pBot = this->m_pBot;
  hNearbyTargets.m_Size = 0;
  hNearbyTargets.m_Memory.m_pMemory = 0;
  hNearbyTargets.m_Memory.m_nAllocationCount = 0;
  hNearbyTargets.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyHeroes(
    m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &hNearbyTargets,
    LevelSpecialValue);
  result = hNearbyTargets.m_Size > 1
        || hNearbyTargets.m_Size == 1 && CDOTA_Bot::CanEasilyBeKilled(this->m_pBot, &vec3_origin);
  hNearbyTargets.m_Size = 0;
  if ( (hNearbyTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v5 = result;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyTargets.m_Memory);
    result = v5;
    if ( (hNearbyTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyTargets.m_Memory);
      return v5;
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::UseAbility  (line 423, @0x00000000028d2330, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::UseAbility(
        CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade *const this)
{
  CDOTA_Bot_Hero_Riki *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


