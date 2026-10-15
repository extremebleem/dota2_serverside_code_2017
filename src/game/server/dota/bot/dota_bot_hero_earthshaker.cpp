
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Earthshaker::CDOTA_Bot_Hero_Earthshaker  (line 23, @0x00000000028c2cb0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "earthshaker_enchant_totem", "earthshaker_aftershock", "earthshaker_echo_slam"
void __fastcall CDOTA_Bot_Hero_Earthshaker::CDOTA_Bot_Hero_Earthshaker(
        CDOTA_Bot_Hero_Earthshaker *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CC1F0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityFissure = CDOTA_BaseNPC::FindAbilityByName(v6, "earthshaker_fissure", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityEnchantTotem = CDOTA_BaseNPC::FindAbilityByName(v8, "earthshaker_enchant_totem", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityAftershock = CDOTA_BaseNPC::FindAbilityByName(v10, "earthshaker_aftershock", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityEchoSlam = CDOTA_BaseNPC::FindAbilityByName(v12, "earthshaker_echo_slam", 1);
}


// CDOTA_Bot_Hero_Earthshaker::CreateMode  (line 34, @0x00000000028bf000, libserver.so)  // inlines: CDOTA_BotMode_Attack_Earthshaker
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Earthshaker::CreateMode(CDOTA_Bot_Hero_Earthshaker *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42CC2F0;
  return v4;
}


// CDOTA_Bot_Hero_Earthshaker::HasLocationStun  (line 49, @0x00000000028bfd90, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
bool __fastcall CDOTA_Bot_Hero_Earthshaker::HasLocationStun(CDOTA_Bot_Hero_Earthshaker *const this)
{
  CDOTABaseAbility *m_pAbilityEchoSlam; // rbx

  m_pAbilityEchoSlam = this->m_pAbilityEchoSlam;
  return CDOTABaseAbility::GetEffectiveLevel(m_pAbilityEchoSlam) >= 0
      && (*(m_pAbilityEchoSlam->_vptr_IHandleEntity + 245))(m_pAbilityEchoSlam) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityEchoSlam)
      && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityEchoSlam, -1);
}


// CDOTA_Bot_Hero_Earthshaker::GetGankDistance  (line 56, @0x00000000028c6cb0, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "echo_slam_echo_search_range"
int __fastcall CDOTA_Bot_Hero_Earthshaker::GetGankDistance(CDOTA_Bot_Hero_Earthshaker *const this)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v3; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v6; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v9; // rax
  float v10; // xmm3_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18; // ebx
  CDOTABaseAbility *m_pAbilityEchoSlam; // r13
  CDOTABaseAbility *m_pAbilityFissure; // r13
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  int v25; // edx
  float v26; // [rsp+8h] [rbp-28h]
  float v27; // [rsp+8h] [rbp-28h]
  float v28; // [rsp+Ch] [rbp-24h]
  float v29; // [rsp+Ch] [rbp-24h]
  float v30; // [rsp+Ch] [rbp-24h]
  float v31; // [rsp+Ch] [rbp-24h]

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  m_hScope_high = HIBYTE(v3[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Highest_Internal = 0.0;
  if ( m_hScope_high != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v3[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v6 = BYTE5(v3[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
  if ( v6 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v6) > 0 )
  {
    v26 = Modifier_Constant_Highest_Internal;
    v28 = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v3[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v26;
    m_hScope_low = v28;
  }
  v9 = BYTE6(v3[67].m_hPrivateScope.m_hScope);
  v10 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v11 = 0.0;
  if ( v9 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v9) > 0 )
  {
    v27 = Modifier_Constant_Highest_Internal;
    v29 = v10;
    v11 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v3[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v27;
    v10 = v29;
  }
  if ( Modifier_Constant_Highest_Internal > (v10 + v11) )
  {
    v24 = HIBYTE(v3[67].m_hPrivateScope.m_hScope);
    v25 = 500;
    if ( v24 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v24) > 0 )
      v25 = (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               &v3[64].m_worldGroupId,
               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
               &CModifierParams::s_Default)
           + 500.0);
    v18 = v25;
  }
  else
  {
    v12 = BYTE5(v3[67].m_hPrivateScope.m_hScope);
    v13 = 0.0;
    v14 = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
    if ( v12 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v12) > 0 )
    {
      v30 = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
      v13 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v3[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v14 = v30;
    }
    v15 = BYTE6(v3[67].m_hPrivateScope.m_hScope);
    v16 = v14 + v13;
    v17 = 0.0;
    if ( v15 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v15) > 0 )
    {
      v31 = v16;
      v17 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v3[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v16 = v31;
    }
    v18 = ((v17 + v16) + 500.0);
  }
  m_pAbilityEchoSlam = this->m_pAbilityEchoSlam;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityEchoSlam) >= 0
    && (*(m_pAbilityEchoSlam->_vptr_IHandleEntity + 245))(m_pAbilityEchoSlam) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityEchoSlam)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityEchoSlam, -1) )
  {
    v23 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbilityEchoSlam, "echo_slam_echo_search_range", -1, 1)
        + 200;
    if ( v18 < v23 )
      v18 = v23;
  }
  m_pAbilityFissure = this->m_pAbilityFissure;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFissure) < 0
    || (*(m_pAbilityFissure->_vptr_IHandleEntity + 245))(m_pAbilityFissure) == 0
    || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFissure)
    || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFissure, -1) )
  {
    return v18;
  }
  v22 = (*(this->m_pAbilityFissure->_vptr_IHandleEntity + 226))(this->m_pAbilityFissure, &vec3_origin, 0) + 200;
  if ( v18 < v22 )
    return v22;
  return v18;
}


// CDOTA_Bot_Hero_Earthshaker::GetAggressionFactor  (line 75, @0x00000000028bffa0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTA_Bot::GetAggressionFactor, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
float __fastcall CDOTA_Bot_Hero_Earthshaker::GetAggressionFactor(CDOTA_Bot_Hero_Earthshaker *const this)
{
  float AggressionFactor; // xmm0_4
  CDOTABaseAbility *m_pAbilityEchoSlam; // rbx
  float v4; // xmm0_4
  float v6; // [rsp+Ch] [rbp-14h]

  AggressionFactor = CDOTA_Bot::GetAggressionFactor(this);
  m_pAbilityEchoSlam = this->m_pAbilityEchoSlam;
  v6 = AggressionFactor;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityEchoSlam) >= 0
    && (*(m_pAbilityEchoSlam->_vptr_IHandleEntity + 245))(m_pAbilityEchoSlam) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityEchoSlam)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityEchoSlam, -1) )
  {
    v4 = 1.3;
  }
  else
  {
    v4 = 1.0;
  }
  return v4 * v6;
}


// CDOTA_Bot_Hero_Earthshaker::GetMaxRoamDistance  (line 83, @0x00000000028bfec0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Earthshaker::GetMaxRoamDistance(CDOTA_Bot_Hero_Earthshaker *const this)
{
  CDOTABaseAbility *m_pAbilityFissure; // rbx

  m_pAbilityFissure = this->m_pAbilityFissure;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFissure) >= 0
    && (*(m_pAbilityFissure->_vptr_IHandleEntity + 245))(m_pAbilityFissure) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFissure)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFissure, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BotMode_Attack_Earthshaker::CalculateDesiredLocation  (line 95, @0x00000000028c6fe0, libserver.so)  // inlines: GetTeamNumber, IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::HasBlink, CDOTA_BotMode_Attack::CalculateDesiredLocation, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
// strings: "echo_slam_echo_search_range"
Vector __fastcall CDOTA_BotMode_Attack_Earthshaker::CalculateDesiredLocation(
        CDOTA_BotMode_Attack_Earthshaker *const this)
{
  CDOTA_Bot *m_pBot; // r12
  int iRadius; // r13d
  int v4; // r14d
  CDOTABaseAbility *v7; // r15
  int v8; // r15d
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v11; // rax
  int v12; // [rsp+1Ch] [rbp-74h]
  int iTargetCount; // [rsp+3Ch] [rbp-54h] BYREF
  Vector vTargetLoc; // [rsp+40h] [rbp-50h] BYREF
  Vector v15; // [rsp+50h] [rbp-40h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBot = this->m_pBot;
  iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
              *&m_pBot[1].m_bForceIdle,
              "echo_slam_echo_search_range",
              -1,
              1);
  v4 = (*(this->m_pBot->_vptr_CDOTA_Bot + 16))(this->m_pBot);
  if ( CDOTA_Bot::HasBlink(m_pBot, 1)
    && (v7 = *&m_pBot[1].m_bForceIdle, CDOTABaseAbility::GetEffectiveLevel(v7) >= 0)
    && (*(v7->_vptr_IHandleEntity + 245))(v7) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(v7)
    && CDOTABaseAbility::IsOwnersGoldEnough(v7, -1)
    && (v8 = (*(m_pBot->_vptr_CDOTA_Bot + 15))(m_pBot),
        v12 = (*(**&m_pBot[1].m_bForceIdle + 2184LL))(*&m_pBot[1].m_bForceIdle, 0xFFFFFFFFLL),
        CDOTA_BotMode::GetUnit(this)->m_flMana.m_Value > (v12 + v8))
    && (Unit = CDOTA_BotMode::GetUnit(this),
        AbsOrigin = CBaseEntity::GetAbsOrigin(Unit),
        v11 = CDOTA_BotMode::GetUnit(this),
        CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
          *(*&m_pBot[1].m_bForceIdle + 776LL),
          v11->m_iTeamNum.m_Value,
          1,
          2,
          AbsOrigin,
          (v4 + 500.0),
          0.0,
          iRadius,
          &vTargetLoc,
          &iTargetCount),
        iTargetCount > 1) )
  {
    v15 = vTargetLoc;
  }
  else
  {
    v15 = CDOTA_BotMode_Attack::CalculateDesiredLocation(this);
  }
  *&result.x = *&v15.x;
  result.z = v15.z;
  return result;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::CDOTA_Bot_AbilityUsage_Earthshaker_Fissure  (line 125, @0x00000000028c2de0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::CDOTA_Bot_AbilityUsage_Earthshaker_Fissure(
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC390;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindFilter  (line 132, @0x00000000028c0420, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindFilter(
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *const this,
        _DWORD *hUnit)
{
  _BOOL4 m_bIsDOTANPC; // ebx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // r13
  int Health; // ebx

  m_bIsDOTANPC = 0;
  if ( (*hUnit + 2) <= 1 )
    return m_bIsDOTANPC;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hUnit >> 9) & 0x3F];
  if ( v4 == 0 )
    return m_bIsDOTANPC;
  v5 = &v4[*hUnit & 0x1FF];
  if ( v5 == 0 )
    return m_bIsDOTANPC;
  if ( *hUnit != v5->m_EHandle.m_Index )
    return m_bIsDOTANPC;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return m_bIsDOTANPC;
  m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
  if ( !m_bIsDOTANPC
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 17 )
  {
    return m_bIsDOTANPC;
  }
  Health = CBaseEntity::GetHealth(m_pInstance);
  LOBYTE(Health) = Health < (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  return Health;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire  (line 154, @0x00000000028cbcc0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActiveModeDesire, GetBotTargetStatus, GetInstance, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator*, operator+, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::FindNearbyChannelingEnemy, IsInvisibleToBots, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetLinearLocation, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureLaningLocation, CDOTA_TeamCommander::CreateHumanRequest, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureGankLocation, CDOTA_Bot::IsAboutToDie, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindMultiTargetFissureLocation, CDOTA_BaseNPC::GetOpposingTeamNumber (21 total)
// strings: "fissure_radius"
// globals: jpt_28CBD8A
// local variable allocation has failed, the output may be wrong!
int __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *const this)
{
  int v2; // r13d
  int LevelSpecialValue; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v5; // r14d
  __m128i v6; // xmm0
  int v7; // eax
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // rdi
  const Vector *v10; // r15
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // rdx
  int result; // eax
  float v14; // xmm0_4
  double v15; // xmm1_8
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // rdx
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // r13
  CEntityInstance *v19; // rax
  const CBaseEntity *v20; // rdi
  const Vector *AbsOrigin; // r15
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC *v23; // rdi
  int OpposingTeamNumber; // eax
  CDOTA_Bot_Hero_Earthshaker *v25; // r13
  unsigned __int8 (__fastcall *v26)(CDOTA_Bot_Hero_Earthshaker *, _QWORD); // r14
  unsigned int v27; // eax
  CEntityInstance *v28; // rax
  const CBaseEntity *v29; // r13
  __int64 v30; // rax
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // r15
  CDOTA_Bot *v33; // rdi
  CDOTALocomotor *v34; // rax
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  const Vector *v39; // rax
  const Vector *v40; // r12
  const Vector *v41; // rax
  float v42; // xmm1_4
  vec_t v43; // xmm0_4
  vec_t v44; // xmm2_4
  CDOTA_Bot_Hero_Earthshaker *v45; // rax
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // r13
  int v48; // eax
  int v49; // r13d
  CDOTA_BaseNPC *v50; // r15
  CEntityInstance *v51; // rax
  CDOTA_BaseNPC *v52; // rdi
  int v53; // esi
  CEntityInstance *v54; // rax
  CEntityInstance *v55; // rax
  CDOTA_BaseNPC *v56; // rdi
  CEntityInstance *v57; // rax
  CDOTA_BaseNPC *v58; // rdx
  CEntityInstance *v59; // rax
  const CBaseEntity *v60; // rdi
  float v61; // [rsp+20h] [rbp-80h]
  float v62; // [rsp+20h] [rbp-80h]
  float vTargetLoc_0; // [rsp+24h] [rbp-7Ch]
  float vTargetLoc_0a; // [rsp+24h] [rbp-7Ch]
  float vTargetLoc_0_4; // [rsp+28h] [rbp-78h]
  float vTargetLoc_0_4a; // [rsp+28h] [rbp-78h]
  float vTargetLoc_0_4b; // [rsp+28h] [rbp-78h]
  EHANDLE hTarget; // [rsp+30h] [rbp-70h] BYREF
  float fChannelTimeRemaining; // [rsp+3Ch] [rbp-64h] BYREF
  int iTargetCount; // [rsp+40h] [rbp-60h] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+48h] [rbp-58h] BYREF
  __int128 vTargetToAlly; // [rsp+50h] [rbp-50h] OVERLAPPED BYREF
  int v73; // [rsp+60h] [rbp-40h]
  int v74; // [rsp+64h] [rbp-3Ch]

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "fissure_radius", -1, 1);
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  pChannelTarget = 0;
  v5 = LevelSpecialValue;
  v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v6.m128i_i32 = v7 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v6, &pChannelTarget, &fChannelTimeRemaining) == 0
    || IsInvisibleToBots(pChannelTarget)
    || (v14 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining <= v14) )
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 1u:
        hTarget.m_Index = -1;
        if ( !CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureLaningLocation(this, &hTarget, &vTargetToAlly) )
          goto LABEL_11;
        goto LABEL_16;
      case 2u:
        v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        v17 = v16;
        if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
        {
          result = 0;
          if ( SLOBYTE(v17[43].m_iszPrivateVScripts.u.m_Id) < 0 )
            return result;
        }
        iTargetCount = -1;
        if ( !CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureGankLocation(
                this,
                &iTargetCount,
                &vTargetToAlly) )
          goto LABEL_11;
        goto LABEL_17;
      case 3u:
      case 0x10u:
        hTarget.m_Index = -1;
        if ( !CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureGankLocation(this, &hTarget, &vTargetToAlly) )
          goto LABEL_11;
LABEL_16:
        iTargetCount = hTarget.m_Index;
        CDOTA_TeamCommander::CreateHumanRequest(
          this->m_pBot->m_pTeamCommander,
          1,
          &iTargetCount,
          1,
          COERCE_DOUBLE(1082130432),
          v15);
LABEL_17:
        *&this->m_vDesiredLocation.x = vTargetToAlly;
        this->m_vDesiredLocation.z = *(&vTargetToAlly + 2);
        return 3;
      case 4u:
        m_pBot = this->m_pBot;
        if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] < 0.75 )
          goto LABEL_11;
        if ( !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
          goto LABEL_26;
        v45 = this->m_pBot;
        LODWORD(vTargetToAlly) = 0;
        *(&vTargetToAlly + 1) = 0;
        v73 = 0;
        v74 = 0;
        v46 = CEntityHandle::operator CEntityInstance *(&v45->m_hUnit);
        if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
          v47 = v46;
        else
          v47 = 0;
        v48 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, v48, &vTargetToAlly, v47);
        if ( vTargetToAlly <= 0 )
          goto LABEL_87;
        v49 = 0;
        do
        {
          v54 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v54 != 0 && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
            v50 = v54;
          else
            v50 = 0;
          v51 = CEntityHandle::operator CEntityInstance *((*(*(&vTargetToAlly + 1) + 8LL * v49) + 156LL));
          if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
            v52 = v51;
          else
            v52 = 0;
          if ( (GetBotTargetStatusCore(v52, v50, -1.0, this->m_pAbility) & 0xFB) != 0
            || ((v55 = CEntityHandle::operator CEntityInstance *((*(*(&vTargetToAlly + 1) + 8LL * v49) + 156LL))) == 0
             || BYTE3(v55[7]._vptr_IHandleEntity) == 0
              ? (v56 = 0)
              : (v56 = v55),
                CDOTA_BaseNPC::IsMovementImpaired(v56)
             || ((v57 = CEntityHandle::operator CEntityInstance *((*(*(&vTargetToAlly + 1) + 8LL * v49) + 156LL))) == 0
              || BYTE3(v57[7]._vptr_IHandleEntity) == 0
               ? (v58 = 0)
               : (v58 = v57),
                 CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v58))) )
          {
            v53 = v49--;
            CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::Remove(&vTargetToAlly, v53);
          }
          ++v49;
        }
        while ( vTargetToAlly > v49 );
        if ( vTargetToAlly <= 0 )
        {
LABEL_87:
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&vTargetToAlly);
LABEL_26:
          if ( CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindMultiTargetFissureLocation(this, &vTargetToAlly, 2) )
          {
LABEL_27:
            *&this->m_vDesiredLocation.x = vTargetToAlly;
            this->m_vDesiredLocation.z = *(&vTargetToAlly + 2);
            result = 2;
          }
          else
          {
LABEL_11:
            result = 0;
            this->m_vDesiredLocation = vec3_origin;
          }
        }
        else
        {
          v59 = CEntityHandle::operator CEntityInstance *((**(&vTargetToAlly + 1) + 156LL));
          if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
            v60 = v59;
          else
            v60 = 0;
          this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v60);
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&vTargetToAlly);
          result = 3;
        }
        break;
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
        v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
          v20 = v19;
        else
          v20 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
        v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
          v23 = v22;
        else
          v23 = 0;
        OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v23);
        CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
          this,
          OpposingTeamNumber,
          3,
          1,
          AbsOrigin,
          v2,
          0.0,
          v5,
          &vTargetToAlly,
          &iTargetCount);
        if ( iTargetCount > 3 )
          goto LABEL_35;
        goto LABEL_11;
      case 0x11u:
        v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
          v9 = v8;
        else
          v9 = 0;
        v10 = CBaseEntity::GetAbsOrigin(v9);
        v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
          v12 = v11;
        else
          v12 = 0;
        CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
          this,
          HIBYTE(v12[7].m_CScriptComponent),
          2,
          2,
          v10,
          v2,
          0.0,
          v5,
          &vTargetToAlly,
          &iTargetCount);
        if ( iTargetCount <= 2 )
          goto LABEL_11;
LABEL_35:
        v25 = this->m_pBot;
        v26 = *(v25->_vptr_CDOTA_Bot + 10);
        v27 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
        if ( v26(v25, v27) == 0 )
          goto LABEL_11;
        goto LABEL_27;
      case 0x12u:
        LODWORD(vTargetToAlly) = this->m_pBot->m_hTarget.m_Index;
        v28 = CEntityHandle::operator CEntityInstance *(&vTargetToAlly);
        v29 = v28;
        if ( v28 == 0 )
          goto LABEL_11;
        if ( BYTE3(v28[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_11;
        if ( (v28[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_11;
        v30 = *&v28[45].m_worldGroupId.m_nHashCode;
        if ( v30 == 0 )
          goto LABEL_11;
        LODWORD(vTargetToAlly) = *(v30 + 712);
        v31 = CEntityHandle::operator CEntityInstance *(&vTargetToAlly);
        v32 = v31;
        if ( v31 == 0 )
          goto LABEL_11;
        if ( BYTE3(v31[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_11;
        if ( (v31[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_11;
        v33 = *&v31[45].m_worldGroupId.m_nHashCode;
        if ( v33 == 0 || !CDOTA_Bot::IsAboutToDie(v33) )
          goto LABEL_11;
        vTargetLoc_0_4 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
        v34 = (*(v29->_vptr_IHandleEntity + 376))(v29);
        *&vTargetToAlly = CDOTALocomotor::GetAverageVelocityOverTime(v34, 1.0, v35).m128i_u64[0];
        *(&vTargetToAlly + 2) = v36;
        v37 = *(&vTargetToAlly + 1) * vTargetLoc_0_4;
        v38 = vTargetLoc_0_4 * v36;
        vTargetLoc_0_4a = *&vTargetToAlly * vTargetLoc_0_4;
        vTargetLoc_0 = v37;
        v61 = v38;
        v39 = CBaseEntity::GetAbsOrigin(v29);
        vTargetLoc_0_4b = vTargetLoc_0_4a + v39->x;
        v62 = v61 + v39->z;
        vTargetLoc_0a = vTargetLoc_0 + v39->y;
        v40 = CBaseEntity::GetAbsOrigin(v29);
        v41 = CBaseEntity::GetAbsOrigin(v32);
        v42 = v41->x - v40->x;
        *(&vTargetToAlly + 4) = COERCE_UNSIGNED_INT(v41->y - v40->y);
        *&vTargetToAlly = v42;
        VectorNormalize(&vTargetToAlly);
        v43 = (*(&vTargetToAlly + 2) * 100.0) + v62;
        v44 = (100.0 * *&vTargetToAlly) + vTargetLoc_0_4b;
        this->m_vDesiredLocation.y = (*(&vTargetToAlly + 1) * 100.0) + vTargetLoc_0a;
        this->m_vDesiredLocation.z = v43;
        this->m_vDesiredLocation.x = v44;
        result = 3;
        break;
      default:
        goto LABEL_11;
    }
  }
  else
  {
    this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(pChannelTarget);
    return 3;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::UseAbility  (line 327, @0x00000000028bf150, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::UseAbility(
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *const this)
{
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindMultiTargetFissureLocation  (line 334, @0x00000000028c8890, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, Get, GetBotTargetStatus, GetInstance, GetUnit, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator-, operator->, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, GetBotTargetStatusCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CBaseEntity::GetAbsOrigin, VectorNormalize, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureGankLocation, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire
// strings: "fissure_radius"
bool __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindMultiTargetFissureLocation(
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *const this,
        Vector *pLocation,
        int iMinimumCount)
{
  int LevelSpecialValue; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v6; // eax
  int v7; // ebx
  CDOTA_BaseNPC *v8; // rsi
  int m_Size; // eax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // r12
  CEntityInstance *v12; // rax
  __int64 v13; // r15
  CEntityInstance *v14; // rax
  const CBaseEntity *v15; // rdi
  const Vector *AbsOrigin; // rbx
  const CBaseEntity *v17; // rax
  const Vector *v18; // rax
  vec_t v19; // xmm1_4
  vec_t v20; // xmm0_4
  __int64 v21; // rbx
  int v22; // r13d
  const CBaseEntity *v23; // rdi
  const Vector *v24; // r12
  const CBaseEntity *v25; // rax
  const Vector *v26; // rax
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // rax
  const Vector *v29; // rax
  bool v30; // bl
  vec_t y; // [rsp+14h] [rbp-8Ch]
  vec_t z; // [rsp+18h] [rbp-88h]
  vec_t x; // [rsp+1Ch] [rbp-84h]
  int iBestCount; // [rsp+30h] [rbp-70h]
  float fRadius; // [rsp+34h] [rbp-6Ch]
  float v39; // [rsp+38h] [rbp-68h]
  float v40; // [rsp+3Ch] [rbp-64h]
  Vector vDir; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyHeroes; // [rsp+50h] [rbp-50h] BYREF

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "fissure_radius", -1, 1);
  m_pAbility = this->m_pAbility;
  hNearbyEnemyHeroes.m_Size = 0;
  hNearbyEnemyHeroes.m_Memory.m_pMemory = 0;
  hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0;
  fRadius = LevelSpecialValue;
  v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyHeroes, v6);
  if ( hNearbyEnemyHeroes.m_Size <= 0 )
    goto LABEL_40;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v7]);
      if ( v10 == 0
        || BYTE3(v10[7]._vptr_IHandleEntity) == 0
        || (v11 = v10, (v10[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
      {
        v11 = 0;
      }
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
        v8 = v12;
      else
        v8 = 0;
      if ( (GetBotTargetStatusCore(v11, v8, -1.0, this->m_pAbility) & 0xFB) == 0
        && !CDOTA_BaseNPC::IsMovementImpaired(v11)
        && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v11) )
      {
        break;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hNearbyEnemyHeroes, v7);
      m_Size = hNearbyEnemyHeroes.m_Size;
      if ( hNearbyEnemyHeroes.m_Size <= v7 )
        goto LABEL_16;
    }
    m_Size = hNearbyEnemyHeroes.m_Size;
    ++v7;
  }
  while ( hNearbyEnemyHeroes.m_Size > v7 );
LABEL_16:
  if ( m_Size <= 0 )
  {
LABEL_40:
    iBestCount = 0;
  }
  else
  {
    v13 = 0;
    iBestCount = 0;
    do
    {
      v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
        v15 = v14;
      else
        v15 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
      v17 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v13]);
      v18 = CBaseEntity::GetAbsOrigin(v17);
      v19 = v18->x - AbsOrigin->x;
      v20 = v18->y - AbsOrigin->y;
      vDir.z = 0.0;
      vDir.x = v19;
      vDir.y = v20;
      VectorNormalize(&vDir);
      v40 = -vDir.x;
      v39 = vDir.y;
      if ( hNearbyEnemyHeroes.m_Size > 0 )
      {
        v21 = 0;
        v22 = 0;
        do
        {
          v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
            v23 = v27;
          else
            v23 = 0;
          v24 = CBaseEntity::GetAbsOrigin(v23);
          v25 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v21]);
          v26 = CBaseEntity::GetAbsOrigin(v25);
          if ( fRadius > fabs((((v26->x - v24->x) * v39) + ((v26->y - v24->y) * v40)) + ((v26->z - v24->z) * 0.0)) )
            ++v22;
          ++v21;
        }
        while ( hNearbyEnemyHeroes.m_Size > v21 );
        if ( v22 > iBestCount )
        {
          v28 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v13]);
          v29 = CBaseEntity::GetAbsOrigin(v28);
          iBestCount = v22;
          x = v29->x;
          y = v29->y;
          z = v29->z;
        }
      }
      ++v13;
    }
    while ( hNearbyEnemyHeroes.m_Size > v13 );
  }
  if ( iMinimumCount > iBestCount )
  {
    v30 = 0;
    if ( pLocation != 0 )
      *pLocation = vec3_origin;
  }
  else
  {
    v30 = 1;
    if ( pLocation != 0 )
    {
      pLocation->x = x;
      pLocation->y = y;
      pLocation->z = z;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
  return v30;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureLaningLocation  (line 392, @0x00000000028c4110, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, FastSqrt, Get, GetAttackTarget, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetUnit, Length2D, RemapValClamped, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorDivide, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator*, operator+, operator-, operator/, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTALocomotor::GetAverageVelocityOverTime, VectorNormalize, CDOTA_TeamCommander::IsLocationPassable, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, FindUnitsInRadius, CDOTA_Bot::GetOffensivePower (14 total)
// callers: CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire
bool __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureLaningLocation(
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *const this,
        EHANDLE *pTarget,
        Vector *pLocation)
{
  float v4; // xmm0_4
  CDOTABaseAbility *m_pAbility; // rdi
  int v6; // eax
  __int64 v7; // r15
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // r13
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rsi
  const Vector *AbsOrigin; // rax
  CDOTALocomotor *v13; // rax
  float v14; // xmm1_4
  unsigned __int64 v15; // xmm0_8
  float v16; // xmm1_4
  __m128i v17; // xmm6
  float v18; // r12d
  __m128i v19; // xmm1
  float v20; // ebx
  const Vector *v21; // rax
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // rdi
  const Vector *v24; // rax
  vec_t v25; // xmm0_4
  vec_t v26; // xmm1_4
  float v27; // xmm0_4
  CEntityInstance *v28; // rax
  const CBaseEntity *v29; // rdi
  const Vector *v30; // rax
  vec_t v31; // xmm0_4
  vec_t v32; // xmm1_4
  float v33; // xmm0_4
  int v34; // eax
  CEntityInstance *v35; // rax
  const CBaseEntity *v36; // rdi
  const Vector *v37; // rax
  vec_t v38; // xmm1_4
  vec_t v39; // xmm0_4
  vec_t v40; // xmm2_4
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // rax
  __m128i v42; // xmm0
  __m128i v43; // xmm7
  float v44; // ebx
  float v45; // r12d
  CEntityInstance *v46; // rax
  const CBaseEntity *v47; // rdi
  const Vector *v48; // rax
  float v49; // xmm1_4
  float v50; // xmm0_4
  int v51; // xmm2_4
  CDOTA_Bot_Hero_Earthshaker *v52; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v54; // eax
  __int16 v55; // cx
  bool v56; // bl
  __m128i v58; // xmm2
  __m128i v59; // xmm3
  float v60; // r12d
  float v61; // ebx
  CEntityInstance *v62; // rax
  const CBaseEntity *v63; // rdi
  const Vector *v64; // rax
  vec_t v65; // xmm2_4
  CDOTABaseAbility *v66; // rdi
  vec_t v67; // xmm1_4
  __m128 v68; // xmm0
  __m128 v69; // xmm6
  CEntityInstance *v70; // rax
  CDOTA_BaseNPC *v71; // rdx
  __int64 v72; // r12
  CEntityInstance *v73; // rax
  CEntityInstance *v74; // rbx
  int m_Id; // eax
  CDOTALocomotor *v76; // rax
  float v77; // xmm1_4
  unsigned __int64 v78; // xmm0_8
  float v79; // xmm1_4
  float v80; // xmm4_4
  const Vector *v81; // rax
  CEntityInstance *v82; // rax
  const Vector *v83; // rax
  float v84; // xmm0_4
  __m128 v85; // xmm6
  __m128 v86; // xmm7
  __m128i v87; // xmm6
  float v88; // ebx
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *v90; // rax
  float v91; // xmm0_4
  float v92; // xmm1_4
  __m128i v93; // xmm4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96; // xmm0_4
  __m128 v97; // xmm4
  __m128 v98; // xmm2
  CDOTALocomotor *v99; // rax
  float v100; // xmm1_4
  unsigned __int64 v101; // xmm0_8
  float v102; // xmm1_4
  float v103; // xmm7_4
  const Vector *v104; // rax
  __m128i v105; // xmm7
  float v106; // ebx
  const Vector *v107; // rax
  __m128i v108; // xmm0
  float v109; // ebx
  float v110; // xmm0_4
  __m128 v111; // xmm7
  float v112; // xmm0_4
  float v113; // xmm1_4
  float v114; // xmm1_4
  float v115; // xmm0_4
  vec_t x; // [rsp+30h] [rbp-120h]
  vec_t y; // [rsp+34h] [rbp-11Ch]
  CDOTA_BaseNPC *pBestTarget; // [rsp+38h] [rbp-118h]
  vec_t z; // [rsp+40h] [rbp-110h]
  float fCastPoint; // [rsp+44h] [rbp-10Ch]
  float fBestOffensivePowerRatio; // [rsp+48h] [rbp-108h]
  float v124; // [rsp+4Ch] [rbp-104h]
  float v125; // [rsp+58h] [rbp-F8h]
  float v126; // [rsp+5Ch] [rbp-F4h]
  float v127; // [rsp+68h] [rbp-E8h]
  float v128; // [rsp+6Ch] [rbp-E4h]
  float v129; // [rsp+70h] [rbp-E0h]
  float v130; // [rsp+74h] [rbp-DCh]
  float v131; // [rsp+78h] [rbp-D8h]
  float fEnemyOffensivePower; // [rsp+7Ch] [rbp-D4h]
  int j; // [rsp+80h] [rbp-D0h]
  float fAlliedOffensivePower; // [rsp+84h] [rbp-CCh]
  float v135; // [rsp+88h] [rbp-C8h]
  float v136; // [rsp+8Ch] [rbp-C4h]
  float fTargetDotSign; // [rsp+90h] [rbp-C0h]
  float v138; // [rsp+94h] [rbp-BCh]
  float v139; // [rsp+94h] [rbp-BCh]
  float v140; // [rsp+94h] [rbp-BCh]
  float v141; // [rsp+94h] [rbp-BCh]
  float v142; // [rsp+98h] [rbp-B8h]
  float v143; // [rsp+98h] [rbp-B8h]
  float v144; // [rsp+98h] [rbp-B8h]
  float v145; // [rsp+98h] [rbp-B8h]
  float v146; // [rsp+98h] [rbp-B8h]
  float OffensivePower; // [rsp+98h] [rbp-B8h]
  float v148; // [rsp+98h] [rbp-B8h]
  float v149; // [rsp+98h] [rbp-B8h]
  float flRadiuse; // [rsp+9Ch] [rbp-B4h]
  float flRadius; // [rsp+9Ch] [rbp-B4h]
  float flRadiusa; // [rsp+9Ch] [rbp-B4h]
  float flRadiusf; // [rsp+9Ch] [rbp-B4h]
  float flRadiusg; // [rsp+9Ch] [rbp-B4h]
  float flRadiusb; // [rsp+9Ch] [rbp-B4h]
  float flRadiusc; // [rsp+9Ch] [rbp-B4h]
  float flRadiush; // [rsp+9Ch] [rbp-B4h]
  float flRadiusi; // [rsp+9Ch] [rbp-B4h]
  float flRadiusd; // [rsp+9Ch] [rbp-B4h]
  float flRadiusj; // [rsp+9Ch] [rbp-B4h]
  Vector vToTarget; // [rsp+A0h] [rbp-B0h] BYREF
  Vector vTestVector; // [rsp+B0h] [rbp-A0h] BYREF
  Vector vFissureCenter; // [rsp+C0h] [rbp-90h] BYREF
  Vector vToFountain; // [rsp+D0h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyHeroes; // [rsp+E0h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hFissureAffectedHeroes; // [rsp+100h] [rbp-50h] BYREF

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  v4 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  m_pAbility = this->m_pAbility;
  hNearbyEnemyHeroes.m_Size = 0;
  hNearbyEnemyHeroes.m_Memory.m_pMemory = 0;
  hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0;
  fCastPoint = v4;
  v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyHeroes, v6);
  if ( hNearbyEnemyHeroes.m_Size <= 0 )
    goto LABEL_94;
  pBestTarget = 0;
  v7 = 0;
  fBestOffensivePowerRatio = 1.5;
  do
  {
    v8 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v7]);
    v9 = v8;
    if ( v8 == 0 || BYTE3(v8[7]._vptr_IHandleEntity) == 0 || (v8[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      v9 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v9) )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        v11 = v10;
      else
        v11 = 0;
      if ( (GetBotTargetStatusCore(v9, v11, -1.0, this->m_pAbility) & 0xFB) == 0 && v9->m_pBot != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
        if ( CDOTA_Bot::GetAvoidanceAmountForLocation(v9->m_pBot, AbsOrigin, 0) > 10 )
        {
          v13 = (*(v9->_vptr_IHandleEntity + 376))(v9);
          v15 = CDOTALocomotor::GetAverageVelocityOverTime(v13, 1.0, v14).m128i_u64[0];
          *&hFissureAffectedHeroes.m_Memory.m_pMemory = v16;
          *&hFissureAffectedHeroes.m_Size = v15;
          v17 = v15;
          *v17.m128i_i32 = *&v15 * fCastPoint;
          v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
          *v19.m128i_i32 = v16 * fCastPoint;
          v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
          flRadiuse = fCastPoint * *(&v15 + 1);
          v21 = CBaseEntity::GetAbsOrigin(v9);
          v131 = v18 + v21->x;
          v130 = flRadiuse + v21->y;
          v124 = v20 + v21->z;
          v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
            v23 = v22;
          else
            v23 = 0;
          v24 = CBaseEntity::GetAbsOrigin(v23);
          v25 = v130 - v24->y;
          v26 = v131 - v24->x;
          vToTarget.z = 0.0;
          vToTarget.y = v25;
          vToTarget.x = v26;
          VectorNormalize(&vToTarget);
          j = 0;
          v127 = -vToTarget.x;
          v126 = vToTarget.y;
          while ( 1 )
          {
            if ( j != 0 )
            {
              v27 = -1.0;
              v125 = -0.0;
            }
            else
            {
              v27 = 1.0;
              v125 = 0.0;
            }
            v129 = v126 * v27;
            v128 = v27 * v127;
            v28 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
              v29 = v28;
            else
              v29 = 0;
            v30 = CBaseEntity::GetAbsOrigin(v29);
            v31 = ((v128 * 100.0) + v130) - v30->y;
            v32 = ((100.0 * v129) + v131) - v30->x;
            vTestVector.z = 0.0;
            vTestVector.y = v31;
            vTestVector.x = v32;
            v33 = VectorNormalize(&vTestVector);
            v34 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0, v33);
            flRadius = vTestVector.x * v34;
            v142 = vTestVector.y * v34;
            v138 = v34 * vTestVector.z;
            v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
              v36 = v35;
            else
              v36 = 0;
            v37 = CBaseEntity::GetAbsOrigin(v36);
            v38 = v142 + v37->y;
            v39 = v138 + v37->z;
            v40 = flRadius + v37->x;
            m_pBot = this->m_pBot;
            vToFountain.y = v38;
            vToFountain.x = v40;
            vToFountain.z = v39;
            if ( CDOTA_TeamCommander::IsLocationPassable(m_pBot->m_pTeamCommander, &vToFountain) )
            {
              v42 = 0x3F400000u;
              v43 = LODWORD(v142);
              *v43.m128i_i32 = v142 * 0.75;
              *v42.m128i_i32 = 0.75 * v138;
              v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
              v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
              v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
                v47 = v46;
              else
                v47 = 0;
              v48 = CBaseEntity::GetAbsOrigin(v47);
              v49 = v44 + v48->y;
              v50 = v45 + v48->z;
              *&v51 = (flRadius * 0.75) + v48->x;
              v52 = this->m_pBot;
              *(&hFissureAffectedHeroes.m_Size + 1) = v49;
              *&hFissureAffectedHeroes.m_Memory.m_pMemory = v50;
              hFissureAffectedHeroes.m_Size = v51;
              if ( CDOTA_TeamCommander::IsLocationPassable(v52->m_pTeamCommander, &hFissureAffectedHeroes) )
                goto LABEL_31;
            }
            v58 = 0x3F000000u;
            v59 = 0x3F000000u;
            *v58.m128i_i32 = 0.5 * flRadius;
            *v59.m128i_i32 = 0.5 * v138;
            v60 = COERCE_FLOAT(_mm_cvtsi128_si32(v58));
            v61 = COERCE_FLOAT(_mm_cvtsi128_si32(v59));
            v62 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
              v63 = v62;
            else
              v63 = 0;
            v64 = CBaseEntity::GetAbsOrigin(v63);
            v65 = (0.5 * v142) + v64->y;
            vFissureCenter.x = v60 + v64->x;
            vFissureCenter.y = v65;
            v66 = this->m_pAbility;
            v67 = v61 + v64->z;
            hFissureAffectedHeroes.m_Size = 0;
            v136 = -vTestVector.x;
            hFissureAffectedHeroes.m_Memory.m_pMemory = 0;
            vFissureCenter.z = v67;
            hFissureAffectedHeroes.m_Memory.m_nAllocationCount = 0;
            hFissureAffectedHeroes.m_Memory.m_nGrowSize = 0;
            v135 = vTestVector.y;
            v68.m128_f32[0] = (((v131 - vFissureCenter.x) * vTestVector.y) + ((v130 - v65) * -vTestVector.x))
                            + ((v124 - v67) * 0.0);
            v69 = _mm_cmplt_ss(0LL, v68);
            LODWORD(fTargetDotSign) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v69, 0xBF800000).m128_f32[0])
                                    | v69.m128_i32[0] & 0x3F800000;
            flRadiusa = (*(v66->_vptr_IHandleEntity + 226))(v66, &vec3_origin, 0) * 0.5;
            v70 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            v71 = 0;
            if ( v70 != 0 && BYTE3(v70[7]._vptr_IHandleEntity) != 0 )
              v71 = v70;
            FindUnitsInRadius(
              v71->m_iTeamNum.m_Value,
              &vFissureCenter,
              v71,
              flRadiusa,
              &hFissureAffectedHeroes,
              3,
              3,
              128,
              0,
              0);
            if ( hFissureAffectedHeroes.m_Size > 0 )
              break;
LABEL_74:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hFissureAffectedHeroes);
LABEL_31:
            if ( ++j == 2 )
              goto LABEL_32;
          }
          fEnemyOffensivePower = 0.0;
          v72 = 0;
          fAlliedOffensivePower = 0.0;
          while ( 1 )
          {
            while ( 1 )
            {
              v73 = CEntityHandle::operator CEntityInstance *(&hFissureAffectedHeroes.m_Memory.m_pMemory[v72]);
              v74 = v73;
              if ( v73 != 0 && BYTE3(v73[7]._vptr_IHandleEntity) != 0 )
              {
                m_Id = v73[43].m_iszPrivateVScripts.u.m_Id;
                if ( (m_Id & 1) == 0 || *&v74[45].m_worldGroupId.m_nHashCode == 0 )
                {
                  if ( (m_Id & 0x80u) != 0
                    && v9 == CEntityHandle::operator CEntityInstance *(&v74[59].m_iszPrivateVScripts.u.m_pAsString + 1) )
                  {
                    flRadiush = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
                    v99 = (*(v74->_vptr_IHandleEntity + 376))(v74);
                    v101 = CDOTALocomotor::GetAverageVelocityOverTime(v99, 1.0, v100).m128i_u64[0];
                    vToFountain.z = v102;
                    *&vToFountain.x = v101;
                    v103 = *(&v101 + 1) * flRadiush;
                    v141 = v102 * flRadiush;
                    flRadiusi = *&v101 * flRadiush;
                    v149 = v103;
                    v104 = CBaseEntity::GetAbsOrigin(v74);
                    v105 = LODWORD(v149);
                    *v105.m128i_i32 = v149 + v104->y;
                    flRadiusd = flRadiusi + v104->x;
                    v106 = COERCE_FLOAT(_mm_cvtsi128_si32(v105));
                    if ( (((((flRadiusd - vFissureCenter.x) * v135) + ((*v105.m128i_i32 - vFissureCenter.y) * v136))
                         + (((v141 + v104->z) - vFissureCenter.z) * 0.0))
                        * fTargetDotSign) > 0.0 )
                    {
                      v107 = CBaseEntity::GetAbsOrigin(v9);
                      flRadiusj = ((flRadiusd - v107->x) * (flRadiusd - v107->x))
                                + ((v106 - v107->y) * (v106 - v107->y));
                      v108 = LODWORD(flRadiusj);
                      *v108.m128i_i32 = fsqrt(flRadiusj);
                      v109 = COERCE_FLOAT(_mm_cvtsi128_si32(v108));
                      v110 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
                      if ( v110 == 0.0 )
                      {
                        v111.m128_f32[0] = v109 - v110;
                        v112 = _mm_andnot_ps(_mm_cmple_ss(0LL, v111), 0x42200000u).m128_f32[0];
                      }
                      else
                      {
                        v113 = v109 / v110;
                        v112 = 40.0;
                        if ( v113 >= 0.0 )
                        {
                          v112 = 0.0;
                          if ( v113 <= 1.0 )
                            v112 = (-40.0 * v113) + 40.0;
                        }
                      }
                      fAlliedOffensivePower = v112 + fAlliedOffensivePower;
                    }
                  }
                  goto LABEL_55;
                }
                flRadiusf = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
                v76 = (*(v74->_vptr_IHandleEntity + 376))(v74);
                v78 = CDOTALocomotor::GetAverageVelocityOverTime(v76, 1.0, v77).m128i_u64[0];
                vToFountain.z = v79;
                *&vToFountain.x = v78;
                v80 = *(&v78 + 1) * flRadiusf;
                v139 = v79 * flRadiusf;
                flRadiusg = *&v78 * flRadiusf;
                v143 = v80;
                v81 = CBaseEntity::GetAbsOrigin(v74);
                flRadiusb = flRadiusg + v81->x;
                v144 = v143 + v81->y;
                v140 = v139 + v81->z;
                v82 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v82 != 0 && BYTE3(v82[7]._vptr_IHandleEntity) != 0 && v74 == v82 )
                  break;
                if ( (((((flRadiusb - vFissureCenter.x) * v135) + ((v144 - vFissureCenter.y) * v136))
                     + ((v140 - vFissureCenter.z) * 0.0))
                    * fTargetDotSign) > 0.0 )
                  break;
              }
LABEL_55:
              if ( hFissureAffectedHeroes.m_Size <= ++v72 )
                goto LABEL_68;
            }
            v83 = CBaseEntity::GetAbsOrigin(v9);
            flRadiusc = fsqrt(((flRadiusb - v83->x) * (flRadiusb - v83->x)) + ((v144 - v83->y) * (v144 - v83->y)));
            if ( HIBYTE(v74[7].m_CScriptComponent) == v9->m_iTeamNum.m_Value )
            {
              OffensivePower = CDOTA_Bot::GetOffensivePower(*&v74[45].m_worldGroupId.m_nHashCode);
              v96 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
              if ( v96 == 0.0 )
              {
                v97.m128_f32[0] = flRadiusc - v96;
                v98 = _mm_cmpgt_ss(0LL, v97);
                LODWORD(v148) = _mm_andnot_ps(v98, 0LL).m128_u32[0] | LODWORD(OffensivePower) & v98.m128_i32[0];
              }
              else
              {
                v114 = flRadiusc / v96;
                v115 = 0.0;
                if ( v114 >= 0.0 )
                  v115 = fminf(1.0, v114);
                v148 = ((0.0 - OffensivePower) * v115) + OffensivePower;
              }
              fEnemyOffensivePower = fEnemyOffensivePower + v148;
              goto LABEL_55;
            }
            v145 = CDOTA_Bot::GetOffensivePower(*&v74[45].m_worldGroupId.m_nHashCode);
            v84 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
            if ( v84 == 0.0 )
            {
              v85.m128_f32[0] = flRadiusc - v84;
              v86 = _mm_cmpgt_ss(0LL, v85);
              LODWORD(v146) = _mm_andnot_ps(v86, 0LL).m128_u32[0] | LODWORD(v145) & v86.m128_i32[0];
            }
            else
            {
              v94 = flRadiusc / v84;
              v95 = 0.0;
              if ( v94 >= 0.0 )
                v95 = fminf(1.0, v94);
              v146 = ((0.0 - v145) * v95) + v145;
            }
            ++v72;
            fAlliedOffensivePower = fAlliedOffensivePower + v146;
            if ( hFissureAffectedHeroes.m_Size <= v72 )
            {
LABEL_68:
              if ( fEnemyOffensivePower > 0.0 )
              {
                v87 = LODWORD(fAlliedOffensivePower);
                *v87.m128i_i32 = fAlliedOffensivePower / fEnemyOffensivePower;
                v88 = COERCE_FLOAT(_mm_cvtsi128_si32(v87));
                Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v9->m_iTeamNum.m_Value);
                if ( Fountain != 0 )
                {
                  v90 = CBaseEntity::GetAbsOrigin(Fountain);
                  v91 = v90->y;
                  v92 = v90->x;
                  vToFountain.z = 0.0;
                  vToFountain.y = v91 - v130;
                  vToFountain.x = v92 - v131;
                  VectorNormalize(&vToFountain);
                  if ( (((v129 * vToFountain.x) + (v128 * vToFountain.y)) + (v125 * vToFountain.z)) > 0.0 )
                  {
                    v93 = _mm_cvtsi32_si128(LODWORD(v88));
                    *v93.m128i_i32 = *v93.m128i_i32 * 1.5;
                    v88 = COERCE_FLOAT(_mm_cvtsi128_si32(v93));
                  }
                }
                if ( v88 > fBestOffensivePowerRatio )
                {
                  pBestTarget = v9;
                  fBestOffensivePowerRatio = v88;
                  x = vFissureCenter.x;
                  y = vFissureCenter.y;
                  z = vFissureCenter.z;
                }
              }
              goto LABEL_74;
            }
          }
        }
      }
    }
LABEL_32:
    ++v7;
  }
  while ( hNearbyEnemyHeroes.m_Size > v7 );
  if ( pBestTarget != 0 )
  {
    if ( pTarget != 0 )
    {
      m_pEntity = pBestTarget->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v54 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v55 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v55 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(pTarget->m_Index) = v55 | pTarget->m_Index & 0x8000;
        pTarget->m_Index = (v54 << 15) | pTarget->m_Index & 0x7FFF;
      }
      else
      {
        pTarget->m_Index = -1;
      }
    }
    v56 = 1;
    if ( pLocation != 0 )
    {
      pLocation->x = x;
      pLocation->y = y;
      pLocation->z = z;
    }
    goto LABEL_41;
  }
LABEL_94:
  if ( pTarget != 0 )
    pTarget->m_Index = -1;
  v56 = 0;
  if ( pLocation != 0 )
    *pLocation = vec3_origin;
LABEL_41:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
  return v56;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureGankLocation  (line 528, @0x00000000028c8ce0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, DotProduct, FastSqrt, Get, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, Length2D, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator+=, operator-, operator->, operator/=, operator=, operator==<CBaseEntity>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyTeammatesInMode, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange, CDOTALocomotor::GetAverageVelocityOverTime, VectorNormalize, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindMultiTargetFissureLocation, CUtlMemory<CDOTA_Bot*, int>::Purge, CDOTAGamerules::GetFountain, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire
bool __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureGankLocation(
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *const this,
        EHANDLE *pTarget,
        Vector *pLocation)
{
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // rbx
  CEntityInstance *v5; // rax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rcx
  __int64 v9; // rbx
  int v10; // r12d
  const CBaseEntity *v11; // rax
  const Vector *AbsOrigin; // r13
  CEntityInstance *v13; // rax
  const CBaseEntity *v14; // rdi
  const Vector *v15; // rax
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  __m128i v18; // xmm0
  float v19; // r13d
  CEntityInstance *v20; // rax
  CEntityInstance *v21; // rdi
  CDOTALocomotor *v22; // rax
  float v23; // xmm1_4
  vec_t v24; // xmm1_4
  __m128i v25; // xmm6
  float v26; // r13d
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // rdi
  const Vector *v29; // rax
  float v30; // xmm0_4
  CEntityInstance *v31; // rax
  CEntityInstance *v32; // rdi
  CDOTALocomotor *v33; // rax
  float v34; // xmm1_4
  __m128i v35; // xmm3
  __m128i x_low; // xmm7
  float v37; // xmm1_4
  float v38; // r12d
  __m128i v39; // xmm1
  float v40; // ebx
  float v41; // r13d
  const CBaseEntity *v42; // rax
  const Vector *v43; // rax
  float v44; // xmm4_4
  float v45; // xmm7_4
  float v46; // xmm3_4
  vec_t v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  CEntityInstance *v51; // rax
  CEntityInstance *v52; // rax
  unsigned __int8 *v53; // r12
  __int64 v54; // rax
  CDOTA_BaseNPC *Fountain; // r14
  CDOTALocomotor *v56; // rax
  float v57; // xmm1_4
  float v58; // xmm1_4
  float v59; // xmm7_4
  const Vector *v60; // rax
  CEntityInstance *v61; // rax
  const CBaseEntity *v62; // rdi
  const Vector *v63; // rax
  vec_t v64; // xmm0_4
  vec_t v65; // xmm1_4
  const Vector *v66; // rax
  float y; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm3_4
  float v70; // xmm2_4
  float z; // xmm1_4
  __int64 v72; // rdx
  int v73; // eax
  __int16 v74; // cx
  CEntityIdentity *m_pEntity; // rdx
  int v76; // eax
  __int16 v77; // cx
  float v78; // xmm0_4
  __int64 v79; // rdx
  int v80; // eax
  __int16 v81; // cx
  float v84; // [rsp+20h] [rbp-90h]
  int iGankingAllies; // [rsp+28h] [rbp-88h]
  float x; // [rsp+2Ch] [rbp-84h]
  float v87; // [rsp+2Ch] [rbp-84h]
  float v88; // [rsp+2Ch] [rbp-84h]
  float v89; // [rsp+2Ch] [rbp-84h]
  float v90; // [rsp+2Ch] [rbp-84h]
  float v91; // [rsp+2Ch] [rbp-84h]
  float vTargetLoc; // [rsp+30h] [rbp-80h]
  float vTargetLoca; // [rsp+30h] [rbp-80h]
  float vTargetLocc; // [rsp+30h] [rbp-80h]
  float vTargetLocd; // [rsp+30h] [rbp-80h]
  float vTargetLocb; // [rsp+30h] [rbp-80h]
  char vTargetLoc_7; // [rsp+37h] [rbp-79h]
  CEntityInstance *vTargetLoc_8e; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8a; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8b; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8c; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8f; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8g; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8h; // [rsp+38h] [rbp-78h]
  float vTargetLoc_8d; // [rsp+38h] [rbp-78h]
  Vector vToTarget; // [rsp+40h] [rbp-70h] BYREF
  Vector vToFountain; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > AllyList; // [rsp+60h] [rbp-50h] BYREF

  m_pBot = this->m_pBot;
  v5 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  if ( v5 != 0 )
  {
    vTargetLoc_7 = BYTE3(v5[7]._vptr_IHandleEntity);
    if ( vTargetLoc_7 == 0 )
      return vTargetLoc_7;
    if ( (v5[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0 )
    {
      AllyList.m_Size = 0;
      AllyList.m_Memory.m_pMemory = 0;
      AllyList.m_Memory.m_nAllocationCount = 0;
      AllyList.m_Memory.m_nGrowSize = 0;
      v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
      if ( v7 == 0 || (v8 = v7, BYTE3(v7[7]._vptr_IHandleEntity) == 0) )
        v8 = 0;
      CDOTA_Bot::FindNearbyTeammatesInMode(m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, &AllyList, v8);
      if ( AllyList.m_Size > 0 )
      {
        v9 = 0;
        v10 = 0;
        iGankingAllies = 0;
        x = vec3_origin.x;
        vTargetLoc = vec3_origin.y;
        do
        {
          while ( 1 )
          {
            if ( (*(AllyList.m_Memory.m_pMemory[v9]->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(AllyList.m_Memory.m_pMemory[v9]->m_pActiveBotMode) == 2 )
            {
              LODWORD(vToFountain.x) = this->m_pBot->m_hTarget.m_Index;
              LODWORD(vToTarget.x) = AllyList.m_Memory.m_pMemory[v9]->m_hTarget.m_Index;
              vTargetLoc_8e = CEntityHandle::operator CEntityInstance *(&vToTarget);
              if ( vTargetLoc_8e == CEntityHandle::operator CEntityInstance *(&vToFountain) )
              {
                v11 = CEntityHandle::operator CEntityInstance *(&vToFountain);
                AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
                v13 = CEntityHandle::operator CEntityInstance *(&AllyList.m_Memory.m_pMemory[v9]->m_hUnit);
                if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
                  v14 = v13;
                else
                  v14 = 0;
                v15 = CBaseEntity::GetAbsOrigin(v14);
                vTargetLoc_8 = fsqrt(
                                 ((v15->x - AbsOrigin->x) * (v15->x - AbsOrigin->x))
                               + ((v15->y - AbsOrigin->y) * (v15->y - AbsOrigin->y)));
                v16 = CEntityHandle::operator CEntityInstance *(&AllyList.m_Memory.m_pMemory[v9]->m_hUnit);
                if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
                  v17 = v16;
                else
                  v17 = 0;
                if ( (CDOTA_BaseNPC::GetAttackRange(v17) + 100.0) > vTargetLoc_8 )
                  break;
              }
            }
            ++v10;
            ++v9;
            if ( AllyList.m_Size <= v10 )
              goto LABEL_26;
          }
          ++iGankingAllies;
          *v18.m128i_i64 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
          v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
          v20 = CEntityHandle::operator CEntityInstance *(&AllyList.m_Memory.m_pMemory[v9]->m_hUnit);
          if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
            v21 = v20;
          else
            v21 = 0;
          v22 = (*(v21->_vptr_IHandleEntity + 376))(v21);
          *&vToFountain.x = CDOTALocomotor::GetAverageVelocityOverTime(v22, 1.0, v23).m128i_u64[0];
          vToFountain.z = v24;
          v25 = _mm_cvtsi32_si128(LODWORD(v19));
          *v25.m128i_i32 = *v25.m128i_i32 * vToFountain.y;
          vTargetLoc_8a = v19 * vToFountain.x;
          v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v25));
          v27 = CEntityHandle::operator CEntityInstance *(&AllyList.m_Memory.m_pMemory[v9]->m_hUnit);
          if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
            v28 = v27;
          else
            v28 = 0;
          v29 = CBaseEntity::GetAbsOrigin(v28);
          ++v10;
          ++v9;
          x = (vTargetLoc_8a + v29->x) + x;
          vTargetLoc = (v26 + v29->y) + vTargetLoc;
        }
        while ( AllyList.m_Size > v10 );
LABEL_26:
        if ( iGankingAllies != 0 )
        {
          v30 = 1.0 / iGankingAllies;
          v87 = x * v30;
          vTargetLoca = v30 * vTargetLoc;
          vTargetLoc_8b = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
          v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
          if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
            v32 = v31;
          else
            v32 = 0;
          v33 = (*(v32->_vptr_IHandleEntity + 376))(v32);
          *&vToFountain.x = CDOTALocomotor::GetAverageVelocityOverTime(v33, 1.0, v34).m128i_u64[0];
          v35 = LODWORD(vTargetLoc_8b);
          x_low = LODWORD(vToFountain.x);
          vToFountain.z = v37;
          *x_low.m128i_i32 = vToFountain.x * vTargetLoc_8b;
          v38 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
          *v39.m128i_i32 = v37 * vTargetLoc_8b;
          *v35.m128i_i32 = vTargetLoc_8b * vToFountain.y;
          LODWORD(vToTarget.x) = this->m_pBot->m_hTarget.m_Index;
          v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
          v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
          v42 = CEntityHandle::operator CEntityInstance *(&vToTarget);
          v43 = CBaseEntity::GetAbsOrigin(v42);
          v44 = v38 + v43->x;
          v45 = v41 + v43->y;
          v46 = v40 + v43->z;
          vToFountain.z = 0.0;
          vTargetLoc_8c = v44;
          v47 = v44 - v87;
          v88 = v45;
          v84 = v46;
          vToFountain.x = v47;
          vToFountain.y = v45 - vTargetLoca;
          VectorNormalize(&vToFountain);
          v48 = (vToFountain.x * 150.0) + vTargetLoc_8c;
          v49 = v88 + (vToFountain.y * 150.0);
          v50 = (150.0 * vToFountain.z) + v84;
          if ( pTarget != 0 )
          {
            v89 = (150.0 * vToFountain.z) + v84;
            vTargetLocc = v49;
            vTargetLoc_8f = (vToFountain.x * 150.0) + vTargetLoc_8c;
            v51 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
            v48 = vTargetLoc_8f;
            v49 = vTargetLocc;
            v50 = v89;
            if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 && (m_pEntity = v51->m_pEntity) != 0 )
            {
              v76 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v77 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v77 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(pTarget->m_Index) = v77 | pTarget->m_Index & 0x8000;
              pTarget->m_Index = (v76 << 15) | pTarget->m_Index & 0x7FFF;
            }
            else
            {
              pTarget->m_Index = -1;
            }
          }
          if ( pLocation != 0 )
          {
            pLocation->x = v48;
            pLocation->y = v49;
            pLocation->z = v50;
          }
LABEL_49:
          AllyList.m_Size = 0;
          if ( (AllyList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CDOTA_Bot *,int>::Purge(&AllyList.m_Memory);
            if ( (AllyList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CDOTA_Bot *,int>::Purge(&AllyList.m_Memory);
          }
          return vTargetLoc_7;
        }
      }
      LODWORD(vToFountain.x) = this->m_pBot->m_hTarget.m_Index;
      v52 = CEntityHandle::operator CEntityInstance *(&vToFountain);
      v53 = v52;
      if ( v52 != 0 )
      {
        vTargetLoc_7 = BYTE3(v52[7]._vptr_IHandleEntity);
        if ( vTargetLoc_7 != 0 && (v52[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v54 = *&v52[45].m_worldGroupId.m_nHashCode;
          if ( v54 != 0 && (*(**(v54 + 34056) + 16LL))(*(v54 + 34056)) == 4 )
          {
            Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v53[383]);
            if ( Fountain != 0 )
            {
              vTargetLoc_8g = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
              v56 = (*(*v53 + 3008LL))(v53);
              *&vToFountain.x = CDOTALocomotor::GetAverageVelocityOverTime(v56, 1.0, v57).m128i_u64[0];
              vToFountain.z = v58;
              v59 = vToFountain.y * vTargetLoc_8g;
              v90 = v58 * vTargetLoc_8g;
              vTargetLoc_8h = vToFountain.x * vTargetLoc_8g;
              vTargetLocd = v59;
              v60 = CBaseEntity::GetAbsOrigin(v53);
              vTargetLoc_8d = vTargetLoc_8h + v60->x;
              vTargetLocb = vTargetLocd + v60->y;
              v91 = v90 + v60->z;
              v61 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v61 != 0 && BYTE3(v61[7]._vptr_IHandleEntity) != 0 )
                v62 = v61;
              else
                v62 = 0;
              v63 = CBaseEntity::GetAbsOrigin(v62);
              v64 = vTargetLocb - v63->y;
              v65 = vTargetLoc_8d - v63->x;
              vToTarget.z = 0.0;
              vToTarget.y = v64;
              vToTarget.x = v65;
              VectorNormalize(&vToTarget);
              v66 = CBaseEntity::GetAbsOrigin(Fountain);
              y = v66->y;
              v68 = v66->x;
              vToFountain.z = 0.0;
              vToFountain.y = y - vTargetLocb;
              vToFountain.x = v68 - vTargetLoc_8d;
              VectorNormalize(&vToFountain);
              v69 = vToFountain.x;
              v70 = vToFountain.y;
              z = vToFountain.z;
              if ( fabs(((vToTarget.x * vToFountain.x) + (vToTarget.y * vToFountain.y)) + (vToTarget.z * vToFountain.z)) < 0.40000001 )
              {
                if ( pTarget != 0 )
                {
                  v72 = *(v53 + 1);
                  if ( v72 != 0 )
                  {
                    v73 = (*(v72 + 16) >> 15) - (*(v72 + 48) & 1);
                    v74 = 0x7FFF;
                    if ( *(v72 + 16) != -1 )
                      v74 = *(v72 + 16) & 0x7FFF;
                    LOWORD(pTarget->m_Index) = v74 | pTarget->m_Index & 0x8000;
                    pTarget->m_Index = (v73 << 15) | pTarget->m_Index & 0x7FFF;
                  }
                  else
                  {
                    pTarget->m_Index = -1;
                  }
                }
                if ( pLocation != 0 )
                {
                  pLocation->x = (v69 * 200.0) + vTargetLoc_8d;
                  pLocation->y = (v70 * 200.0) + vTargetLocb;
                  pLocation->z = (z * 200.0) + v91;
                }
                goto LABEL_49;
              }
              v78 = 0.0;
              if ( g_pGameRules != 0 )
                v78 = *&g_pGameRules[18].m_szQuestName[20];
              if ( (v78 - *(v53 + 1192)) > 3.0 )
              {
                if ( pTarget != 0 )
                {
                  v79 = *(v53 + 1);
                  if ( v79 != 0 )
                  {
                    v80 = (*(v79 + 16) >> 15) - (*(v79 + 48) & 1);
                    v81 = 0x7FFF;
                    if ( *(v79 + 16) != -1 )
                      v81 = *(v79 + 16) & 0x7FFF;
                    LOWORD(pTarget->m_Index) = v81 | pTarget->m_Index & 0x8000;
                    pTarget->m_Index = (v80 << 15) | pTarget->m_Index & 0x7FFF;
                  }
                  else
                  {
                    pTarget->m_Index = -1;
                  }
                }
                if ( pLocation != 0 )
                {
                  pLocation->x = vTargetLoc_8d;
                  pLocation->y = vTargetLocb;
                  pLocation->z = v91;
                }
                goto LABEL_49;
              }
            }
          }
        }
      }
      vTargetLoc_7 = CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindMultiTargetFissureLocation(this, &vToFountain, 3);
      if ( vTargetLoc_7 != 0 )
      {
        if ( pTarget != 0 )
          pTarget->m_Index = -1;
        if ( pLocation != 0 )
          *pLocation = vToFountain;
      }
      else
      {
        if ( pTarget != 0 )
          pTarget->m_Index = -1;
        if ( pLocation != 0 )
          *pLocation = vec3_origin;
      }
      goto LABEL_49;
    }
  }
  return 0;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem  (line 625, @0x00000000028c2e00, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem(
        CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC3F0;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::GetCurrentUsageDesire  (line 632, @0x00000000028c9790, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBotTargetStatus, GetEntityIdentity, GetInstance, GetLevel, GetTarget, GetTargetNPC, GetUnit, Length2D, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator bool, operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::FindNearbyChannelingEnemy, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, CConcreteEntityList::LookupEntity, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyHeroes, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, IsInvisibleToBots (15 total)
// strings: "aftershock_range"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem *const this)
{
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // rax
  CDOTABaseAbility *m_pAbilityAftershock; // rdi
  int LevelSpecialValue; // eax
  CDOTA_Bot_Hero_Earthshaker *v5; // rdi
  __m128i v6; // xmm0
  int v7; // eax
  int result; // eax
  CDOTA_Bot_Hero_Earthshaker *v9; // rdi
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rsi
  CDOTA_Bot_Hero_Earthshaker *v12; // r12
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // r13
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rdi
  __m128i v17; // xmm0
  unsigned int v18; // r13d
  CEntityInstance *v19; // rax
  CEntityInstance *v20; // rdi
  CDOTALocomotor *v21; // rax
  float v22; // xmm1_4
  unsigned __int64 v23; // xmm0_8
  __m128i v24; // xmm6
  __m128i v25; // xmm7
  CDOTA_Bot_Hero_Earthshaker *v26; // rax
  int v27; // xmm1_4
  unsigned int v28; // r12d
  unsigned int v29; // r13d
  CEntityInstance *v30; // rax
  const CBaseEntity *v31; // rdi
  const Vector *v32; // rax
  __m128i v33; // xmm6
  __m128i v34; // xmm7
  float v35; // r12d
  float v36; // r13d
  CEntityInstance *v37; // rax
  const CBaseEntity *v38; // rdi
  const Vector *v39; // rax
  float v40; // xmm1_4
  CDOTA_Bot_Hero_Earthshaker *v41; // rax
  CDOTABaseAbility *v42; // r12
  int v43; // eax
  int v44; // r13d
  CDOTA_Bot_Hero_Earthshaker *v45; // rax
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // rdi
  int v48; // eax
  __m128i v49; // xmm5
  float v50; // xmm0_4
  float v51; // r13d
  int v52; // r12d
  CDOTA_BaseNPC *v53; // r15
  CEntityInstance *v54; // rax
  CDOTA_BaseNPC *v55; // rsi
  int v56; // esi
  CEntityInstance *v57; // rax
  CDOTABaseAbility *v58; // rdi
  int v59; // eax
  int v60; // r12d
  CDOTA_Bot_Hero_Earthshaker *v61; // rax
  CEntityInstance *v62; // rax
  CDOTA_BaseNPC *v63; // rdi
  int OpposingTeamNumber; // eax
  int m_Size; // edx
  int v66; // r12d
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // rsi
  int v69; // esi
  CEntityInstance *v70; // rax
  CDOTA_BaseNPC *v71; // r13
  __m128i v72; // xmm0
  float v73; // r15d
  CDOTALocomotor *v74; // rax
  float v75; // xmm1_4
  int v76; // xmm1_4
  const Vector *AbsOrigin; // rax
  __m128i v78; // xmm2
  __m128i v79; // xmm3
  float v80; // r13d
  float v81; // r15d
  CEntityInstance *v82; // rax
  const CBaseEntity *v83; // rdi
  const Vector *v84; // rax
  float v85; // xmm0_4
  int v86; // eax
  CEntityInstance *v87; // rax
  CDOTA_BaseNPC *v88; // rsi
  CDOTA_Bot_Hero_Earthshaker *v89; // r12
  CEntityInstance *v90; // rax
  CDOTA_BaseNPC *v91; // r15
  CEntityInstance *v92; // rax
  CDOTA_BaseNPC *v93; // rdi
  CEntityInstance *v94; // rax
  CDOTA_BaseNPC *v95; // rdi
  __m128i v96; // xmm0
  unsigned int v97; // r12d
  CEntityInstance *v98; // rax
  CEntityInstance *v99; // rdi
  CDOTALocomotor *v100; // rax
  float v101; // xmm1_4
  __m128i v102; // xmm5
  CDOTA_Bot_Hero_Earthshaker *v103; // rax
  int v104; // xmm1_4
  unsigned int v105; // r15d
  __m128i v106; // xmm5
  unsigned int v107; // r12d
  CEntityInstance *v108; // rax
  const CBaseEntity *v109; // rdi
  const Vector *v110; // rax
  __m128i v111; // xmm5
  float v112; // r15d
  __m128i v113; // xmm5
  float v114; // r12d
  CEntityInstance *v115; // rax
  const CBaseEntity *v116; // rdi
  const Vector *v117; // rax
  float v118; // [rsp+8h] [rbp-78h]
  unsigned int v119; // [rsp+Ch] [rbp-74h]
  float v120; // [rsp+10h] [rbp-70h]
  unsigned int v121; // [rsp+10h] [rbp-70h]
  int v122; // [rsp+10h] [rbp-70h]
  unsigned __int64 fChannelTimeRemaining; // [rsp+20h] [rbp-60h] BYREF
  int v124; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+30h] [rbp-50h] BYREF

  m_pBot = this->m_pBot;
  m_pAbilityAftershock = m_pBot->m_pAbilityAftershock;
  if ( m_pAbilityAftershock->m_iLevel.m_Value > 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbilityAftershock, "aftershock_range", -1, 1);
    v5 = this->m_pBot;
    *v6.m128i_i32 = LevelSpecialValue;
    *&hNearbyEnemies.m_Size = 0;
    LODWORD(fChannelTimeRemaining) = 0;
    if ( CDOTA_Bot::FindNearbyChannelingEnemy(v5, v6, &hNearbyEnemies, &fChannelTimeRemaining) != 0
      && !IsInvisibleToBots(*&hNearbyEnemies.m_Size) )
    {
      v85 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      if ( *&fChannelTimeRemaining > v85 )
        return 3;
    }
    m_pBot = this->m_pBot;
  }
  v7 = (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode);
  if ( v7 == 4 )
  {
    v58 = this->m_pBot->m_pAbilityAftershock;
    if ( v58->m_iLevel.m_Value > 2 )
    {
      v59 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v58, "aftershock_range", -1, 1);
      hNearbyEnemies.m_Size = 0;
      v60 = v59;
      v61 = this->m_pBot;
      hNearbyEnemies.m_Memory.m_pMemory = 0;
      hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
      hNearbyEnemies.m_Memory.m_nGrowSize = 0;
      v62 = CEntityHandle::operator CEntityInstance *(&v61->m_hUnit);
      if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
        v63 = v62;
      else
        v63 = 0;
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v63);
      v118 = v60;
      CDOTA_Bot::FindNearbyHeroes(this->m_pBot, v60 + 200.0, OpposingTeamNumber, &hNearbyEnemies);
      m_Size = hNearbyEnemies.m_Size;
      if ( hNearbyEnemies.m_Size <= 0 )
        goto LABEL_83;
      v66 = 0;
      do
      {
        v70 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemies.m_Memory.m_pMemory[v66]);
        if ( v70 != 0 && BYTE3(v70[7]._vptr_IHandleEntity) != 0 )
          v71 = v70;
        else
          v71 = 0;
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v71) )
        {
          v67 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
            v68 = v67;
          else
            v68 = 0;
          if ( (GetBotTargetStatusCore(v71, v68, -1.0, this->m_pAbility) & 0xFB) != 0 )
            goto LABEL_59;
        }
        *v72.m128i_i64 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
        v73 = COERCE_FLOAT(_mm_cvtsi128_si32(v72));
        v74 = (*(v71->_vptr_IHandleEntity + 376))(v71);
        fChannelTimeRemaining = CDOTALocomotor::GetAverageVelocityOverTime(v74, 1.0, v75).m128i_u64[0];
        v124 = v76;
        *&v121 = *&fChannelTimeRemaining * v73;
        *&v119 = v73 * *(&fChannelTimeRemaining + 1);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v71);
        v78 = v121;
        v79 = v119;
        *v78.m128i_i32 = *&v121 + AbsOrigin->x;
        *v79.m128i_i32 = *&v119 + AbsOrigin->y;
        v80 = COERCE_FLOAT(_mm_cvtsi128_si32(v78));
        v81 = COERCE_FLOAT(_mm_cvtsi128_si32(v79));
        v82 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v82 == 0 )
          goto LABEL_79;
        if ( BYTE3(v82[7]._vptr_IHandleEntity) != 0 )
          v83 = v82;
        else
LABEL_79:
          v83 = 0;
        v84 = CBaseEntity::GetAbsOrigin(v83);
        if ( fsqrt(((v80 - v84->x) * (v80 - v84->x)) + ((v81 - v84->y) * (v81 - v84->y))) > v118 )
        {
LABEL_59:
          v69 = v66--;
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hNearbyEnemies, v69);
        }
        m_Size = hNearbyEnemies.m_Size;
        ++v66;
      }
      while ( hNearbyEnemies.m_Size > v66 );
      if ( hNearbyEnemies.m_Size > 1 )
      {
        v86 = 3;
      }
      else
      {
LABEL_83:
        v86 = 2;
        if ( m_Size != 1 )
        {
LABEL_116:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
          return 0;
        }
      }
      v122 = v86;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
      return v122;
    }
    return 0;
  }
  if ( v7 != 18 )
  {
    if ( v7 == 2 )
    {
      v41 = this->m_pBot;
      v42 = v41->m_pAbilityAftershock;
      if ( v42->m_iLevel.m_Value > 2 )
      {
        hNearbyEnemies.m_Size = v41->m_hTarget.m_Index;
        if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &hNearbyEnemies) != 0 )
        {
          v43 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v42, "aftershock_range", -1, 1);
          hNearbyEnemies.m_Size = 0;
          v44 = v43;
          v45 = this->m_pBot;
          hNearbyEnemies.m_Memory.m_pMemory = 0;
          hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
          hNearbyEnemies.m_Memory.m_nGrowSize = 0;
          v46 = CEntityHandle::operator CEntityInstance *(&v45->m_hUnit);
          if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
            v47 = v46;
          else
            v47 = 0;
          v48 = CDOTA_BaseNPC::GetOpposingTeamNumber(v47);
          *v49.m128i_i32 = v44;
          v50 = v44;
          v51 = COERCE_FLOAT(_mm_cvtsi128_si32(v49));
          CDOTA_Bot::FindNearbyHeroes(this->m_pBot, v50, v48, &hNearbyEnemies);
          if ( hNearbyEnemies.m_Size <= 0 )
            goto LABEL_125;
          v52 = 0;
          do
          {
            v57 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemies.m_Memory.m_pMemory[v52]);
            if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
              v53 = v57;
            else
              v53 = 0;
            if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v53) )
            {
              v54 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v54 != 0 && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
                v55 = v54;
              else
                v55 = 0;
              if ( (GetBotTargetStatusCore(v53, v55, -1.0, this->m_pAbility) & 0xFB) != 0 )
              {
                v56 = v52--;
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hNearbyEnemies, v56);
              }
            }
            ++v52;
          }
          while ( hNearbyEnemies.m_Size > v52 );
          if ( hNearbyEnemies.m_Size <= 1 )
          {
LABEL_125:
            v87 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
            if ( v87 != 0 && BYTE3(v87[7]._vptr_IHandleEntity) != 0 )
              v88 = v87;
            else
              v88 = 0;
            if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v88) )
              goto LABEL_116;
            v89 = this->m_pBot;
            v90 = CEntityHandle::operator CEntityInstance *(&v89->m_hUnit);
            if ( v90 != 0 && BYTE3(v90[7]._vptr_IHandleEntity) != 0 )
              v91 = v90;
            else
              v91 = 0;
            v92 = CEntityHandle::operator CEntityInstance *(&v89->m_hTarget);
            if ( v92 != 0 && BYTE3(v92[7]._vptr_IHandleEntity) != 0 )
              v93 = v92;
            else
              v93 = 0;
            if ( (GetBotTargetStatusCore(v93, v91, -1.0, this->m_pAbility) & 0xFB) == 0 )
              goto LABEL_116;
            v94 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
            if ( v94 == 0 || (v95 = v94, BYTE3(v94[7]._vptr_IHandleEntity) == 0) )
              v95 = 0;
            if ( CDOTA_BaseNPC::IsMovementImpaired(v95) )
              goto LABEL_116;
            *v96.m128i_i64 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
            v97 = _mm_cvtsi128_si32(v96);
            v98 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
            if ( v98 != 0 && BYTE3(v98[7]._vptr_IHandleEntity) != 0 )
              v99 = v98;
            else
              v99 = 0;
            v100 = (*(v99->_vptr_IHandleEntity + 376))(v99);
            fChannelTimeRemaining = CDOTALocomotor::GetAverageVelocityOverTime(v100, 1.0, v101).m128i_u64[0];
            v102 = _mm_cvtsi32_si128(v97);
            v103 = this->m_pBot;
            *v102.m128i_i32 = *v102.m128i_i32 * *&fChannelTimeRemaining;
            v124 = v104;
            v105 = _mm_cvtsi128_si32(v102);
            v106 = _mm_cvtsi32_si128(v97);
            *v106.m128i_i32 = *v106.m128i_i32 * *(&fChannelTimeRemaining + 1);
            v107 = _mm_cvtsi128_si32(v106);
            v108 = CEntityHandle::operator CEntityInstance *(&v103->m_hTarget);
            if ( v108 == 0 )
              goto LABEL_121;
            if ( BYTE3(v108[7]._vptr_IHandleEntity) != 0 )
              v109 = v108;
            else
LABEL_121:
              v109 = 0;
            v110 = CBaseEntity::GetAbsOrigin(v109);
            v111 = _mm_cvtsi32_si128(v105);
            *v111.m128i_i32 = *v111.m128i_i32 + v110->x;
            v112 = COERCE_FLOAT(_mm_cvtsi128_si32(v111));
            v113 = _mm_cvtsi32_si128(v107);
            *v113.m128i_i32 = *v113.m128i_i32 + v110->y;
            v114 = COERCE_FLOAT(_mm_cvtsi128_si32(v113));
            v115 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v115 == 0 )
              goto LABEL_120;
            if ( BYTE3(v115[7]._vptr_IHandleEntity) != 0 )
              v116 = v115;
            else
LABEL_120:
              v116 = 0;
            v117 = CBaseEntity::GetAbsOrigin(v116);
            if ( v51 <= fsqrt(((v112 - v117->x) * (v112 - v117->x)) + ((v114 - v117->y) * (v114 - v117->y))) )
              goto LABEL_116;
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
          return 2;
        }
      }
    }
    return 0;
  }
  v9 = this->m_pBot;
  if ( v9->m_pAbilityAftershock->m_iLevel.m_Value <= 2 )
    return 0;
  v10 = CEntityHandle::operator CEntityInstance *(&v9->m_hTarget);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v11 = v10;
  else
    v11 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v11) )
    return 0;
  v12 = this->m_pBot;
  v13 = CEntityHandle::operator CEntityInstance *(&v12->m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  v15 = CEntityHandle::operator CEntityInstance *(&v12->m_hTarget);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  if ( (GetBotTargetStatusCore(v16, v14, -1.0, this->m_pAbility) & 0xFB) != 0 )
    return 0;
  *v17.m128i_i64 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  v18 = _mm_cvtsi128_si32(v17);
  v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v19 == 0 || (v20 = v19, BYTE3(v19[7]._vptr_IHandleEntity) == 0) )
    v20 = 0;
  v21 = (*(v20->_vptr_IHandleEntity + 376))(v20);
  v23 = CDOTALocomotor::GetAverageVelocityOverTime(v21, 1.0, v22).m128i_u64[0];
  v24 = _mm_cvtsi32_si128(v18);
  v25 = v24;
  *&hNearbyEnemies.m_Size = v23;
  v26 = this->m_pBot;
  *v24.m128i_i32 = *v24.m128i_i32 * *&v23;
  LODWORD(hNearbyEnemies.m_Memory.m_pMemory) = v27;
  *v25.m128i_i32 = *v25.m128i_i32 * *(&v23 + 1);
  v28 = _mm_cvtsi128_si32(v24);
  v29 = _mm_cvtsi128_si32(v25);
  v30 = CEntityHandle::operator CEntityInstance *(&v26->m_hTarget);
  if ( v30 == 0 )
    goto LABEL_90;
  if ( BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
    v31 = v30;
  else
LABEL_90:
    v31 = 0;
  v32 = CBaseEntity::GetAbsOrigin(v31);
  v33 = _mm_cvtsi32_si128(v28);
  v34 = _mm_cvtsi32_si128(v29);
  *v33.m128i_i32 = *v33.m128i_i32 + v32->x;
  *v34.m128i_i32 = *v34.m128i_i32 + v32->y;
  v35 = COERCE_FLOAT(_mm_cvtsi128_si32(v33));
  v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v34));
  v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v37 == 0 )
    goto LABEL_89;
  if ( BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
    v38 = v37;
  else
LABEL_89:
    v38 = 0;
  v39 = CBaseEntity::GetAbsOrigin(v38);
  v120 = fsqrt(((v35 - v39->x) * (v35 - v39->x)) + ((v36 - v39->y) * (v36 - v39->y)));
  v40 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pBot->m_pAbilityAftershock, "aftershock_range", -1, 1);
  result = 2;
  if ( v40 <= v120 )
    return 0;
  return result;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::UseAbility  (line 755, @0x00000000028bf450, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::UseAbility(
        CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem *const this)
{
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam  (line 765, @0x00000000028c2e20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam(
        CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC450;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::GetCurrentUsageDesire  (line 772, @0x00000000028ca160, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBotTargetStatus, GetDistanceToEntity, GetInstance, GetTeamNumber, GetUnit, IsConsideredHero, IsUnitType, IsValidBotTarget, Length, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTACommander, CDOTA_Commander::GetIllusionState, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "echo_slam_damage_range", "echo_slam_echo_damage"
int __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam *const this)
{
  CDOTA_BaseNPC *v2; // rbx
  int LevelSpecialValue; // eax
  float v4; // xmm7_4
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // rax
  __m128i v6; // xmm7
  float v7; // r12d
  CEntityInstance *v8; // rax
  const Vector *AbsOrigin; // r14
  CEntityInstance *v10; // rax
  __int64 v11; // r12
  int v12; // r14d
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC_Hero *v14; // rbx
  int m_Id; // eax
  unsigned __int8 (__fastcall *v16)(CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam *const, _QWORD); // r15
  CDOTA_Commander *v17; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rsi
  int v21; // r15d
  int v22; // eax
  __m128i v23; // xmm4
  CEntityInstance *v24; // rax
  const Vector *v25; // r15
  const Vector *v26; // rax
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // rdi
  int v29; // ebx
  CDOTA_Bot *v31; // rax
  CEntityInstance *v32; // rax
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  int iKillableCarries; // [rsp+28h] [rbp-68h]
  int iKillableHeroes; // [rsp+2Ch] [rbp-64h]
  float v36; // [rsp+30h] [rbp-60h]
  int iNearbyKillableHeroes; // [rsp+34h] [rbp-5Ch]
  float fMagicReductiona; // [rsp+38h] [rbp-58h]
  const CBaseEntity *fMagicReduction; // [rsp+38h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  v2 = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "echo_slam_damage_range", -1, 1);
  hEntities.m_Size = 0;
  v4 = LevelSpecialValue;
  m_pBot = this->m_pBot;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v36 = v4;
  *v6.m128i_i32 = v4 + 200.0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v2 = v8;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v2);
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
    v10 = 0;
  FindUnitsInRadius(HIBYTE(v10[7].m_CScriptComponent), AbsOrigin, v2, v7, &hEntities, 2, 3, 128, 0, 0);
  if ( hEntities.m_Size <= 0 )
    goto LABEL_45;
  v11 = 0;
  v12 = 0;
  iNearbyKillableHeroes = 0;
  iKillableCarries = 0;
  iKillableHeroes = 0;
  do
  {
    v13 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v11]);
    v14 = v13;
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
      {
        v16 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v17 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v17, v14);
        if ( v16(this, IllusionState) != 0 )
        {
          v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v19 == 0 || (v20 = v19, BYTE3(v19[7]._vptr_IHandleEntity) == 0) )
            v20 = 0;
          if ( (GetBotTargetStatusCore(v14, v20, -1.0, this->m_pAbility) & 0xFB) == 0 )
          {
            ++v12;
            fMagicReductiona = 1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v14, 2);
            v21 = ((*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility) * fMagicReductiona);
            v22 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "echo_slam_echo_damage", -1, 1);
            *v23.m128i_i32 = (v21 + ((v22 * fMagicReductiona) * (hEntities.m_Size - 1)));
            if ( COERCE_FLOAT(_mm_cvtsi128_si32(v23)) > (CBaseEntity::GetHealth(v14) * 0.80000001)
              && v14->m_pBot != 0
              && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v14) > 2.0 )
            {
              v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v24 == 0 || (fMagicReduction = v24, BYTE3(v24[7]._vptr_IHandleEntity) == 0) )
                fMagicReduction = 0;
              v25 = CBaseEntity::GetAbsOrigin(v14);
              v26 = CBaseEntity::GetAbsOrigin(fMagicReduction);
              if ( v36 <= fsqrt(
                            (((v26->x - v25->x) * (v26->x - v25->x)) + ((v26->y - v25->y) * (v26->y - v25->y)))
                          + ((v26->z - v25->z) * (v26->z - v25->z))) )
              {
                v31 = v14->m_pBot;
                if ( v31 != 0 )
                  iKillableCarries -= ((v31->m_iUnitType & 0x10) == 0) - 1;
                ++iKillableHeroes;
              }
              else
              {
                ++iNearbyKillableHeroes;
              }
            }
          }
        }
      }
    }
    ++v11;
  }
  while ( hEntities.m_Size > v11 );
  if ( iNearbyKillableHeroes != 0 || iKillableHeroes != 1 )
  {
    if ( iNearbyKillableHeroes > 1 || iKillableHeroes <= 1 )
    {
LABEL_29:
      if ( v12 > 1 && hEntities.m_Size > 5 )
      {
        v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v27 != 0 )
        {
          v28 = v27;
          if ( BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
            goto LABEL_33;
        }
        goto LABEL_44;
      }
LABEL_45:
      v29 = 0;
      this->m_vDesiredLocation = vec3_origin;
      goto LABEL_34;
    }
  }
  else
  {
    if ( iKillableCarries != 1 )
      goto LABEL_29;
    m_pBotUsage = this->m_pBot->m_pAbilityFissure->m_pBotUsage;
    if ( (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage) != 0 )
      goto LABEL_29;
  }
  v32 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v32 != 0 )
  {
    v28 = v32;
    if ( BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
      goto LABEL_33;
  }
LABEL_44:
  v28 = 0;
LABEL_33:
  v29 = 3;
  this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v28);
LABEL_34:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  return v29;
}


// CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::UseAbility  (line 847, @0x00000000028c7190, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetBotByIndex, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetUnit, IsConsideredHero, IsHero, IsValidBotTarget, Length, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_TeamCommander::GetOpposingTeamCommander, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, GetBotTargetStatusCore, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::CreateHumanRequest, operator delete (13 total)
// strings: "echo_slam_echo_range"
void __fastcall CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::UseAbility(
        CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam *const this)
{
  CDOTA_Bot_Hero_Earthshaker *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // rbx
  CDOTA_BotAction *v5; // rsi
  __int64 v6; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v8; // rax
  const CEntityHandle *v9; // rdi
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // r13
  int m_Id; // eax
  unsigned __int8 (__fastcall *v13)(CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam *const, _QWORD); // r14
  CDOTA_Commander *v14; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rsi
  CEntityInstance *v18; // rax
  const CBaseEntity *v19; // r15
  const Vector *AbsOrigin; // r14
  const Vector *v21; // rax
  double v22; // xmm1_8
  CEntityIdentity *m_pEntity; // rax
  int v24; // edx
  __int16 v25; // cx
  int radius; // [rsp+8h] [rbp-48h]
  uint32 v27[16]; // [rsp+10h] [rbp-40h] BYREF

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  v5 = v4;
  v6 = 0;
  CDOTA_Bot::PushAction(this->m_pBot, v5);
  radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "echo_slam_echo_range", -1, 1);
  while ( v6 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
  {
    OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
    if ( v6 < OpposingTeamCommander->m_BotList.m_Size && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v6] != 0 )
    {
      v8 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
      v9 = 0;
      if ( v6 < v8->m_BotList.m_Size )
        v9 = v8->m_BotList.m_Memory.m_pMemory[v6];
      v10 = CEntityHandle::operator CEntityInstance *(v9 + 39);
      v11 = v10;
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      {
        m_Id = v10[43].m_iszPrivateVScripts.u.m_Id;
        if ( (m_Id & 3) != 0 || this->m_bUseOnCreeps )
        {
          if ( (m_Id & 1) == 0
            || (v13 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                v14 = DOTACommander(),
                IllusionState = CDOTA_Commander::GetIllusionState(v14, v11),
                v13(this, IllusionState) != 0) )
          {
            v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v16 == 0 || (v17 = v16, BYTE3(v16[7]._vptr_IHandleEntity) == 0) )
              v17 = 0;
            if ( (GetBotTargetStatusCore(v11, v17, -1.0, this->m_pAbility) & 0xFB) == 0 )
            {
              v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v18 == 0 || (v19 = v18, BYTE3(v18[7]._vptr_IHandleEntity) == 0) )
                v19 = 0;
              AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
              v21 = CBaseEntity::GetAbsOrigin(v19);
              *&v22 = LODWORD(v21->z);
              if ( radius > fsqrt(
                              (((v21->x - AbsOrigin->x) * (v21->x - AbsOrigin->x))
                             + ((v21->y - AbsOrigin->y) * (v21->y - AbsOrigin->y)))
                            + ((*&v22 - AbsOrigin->z) * (*&v22 - AbsOrigin->z))) )
              {
                m_pEntity = v11->m_pEntity;
                v27[0] = -1;
                if ( m_pEntity != 0 )
                {
                  v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v25 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v27[0]) = v25 | v27[0] & 0x8000;
                  v27[0] = (v24 << 15) | v27[0] & 0x7FFF;
                }
                *&v22 = radius;
                CDOTA_TeamCommander::CreateHumanRequest(
                  this->m_pBot->m_pTeamCommander,
                  1,
                  v27,
                  0,
                  COERCE_DOUBLE(1077936128),
                  v22);
              }
            }
          }
        }
      }
    }
    ++v6;
  }
}


