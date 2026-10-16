
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_BountyHunter::CDOTA_Bot_Hero_BountyHunter  (line 21, @0x00000000028af2e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "bounty_hunter_shuriken_toss", "bounty_hunter_wind_walk"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_BountyHunter::CDOTA_Bot_Hero_BountyHunter(
        CDOTA_Bot_Hero_BountyHunter *const this,
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
  this->_vptr_CDOTA_Bot = &off_42C9270;
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
  this->m_pAbilityShurikenToss = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "bounty_hunter_shuriken_toss", 1);
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
  this->m_pAbilityWindWalk = CDOTA_BaseNPC::FindAbilityByName(v12, "bounty_hunter_wind_walk", 1);
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
  this->m_pAbilityTrack = CDOTA_BaseNPC::FindAbilityByName(v16, "bounty_hunter_track", 1);
}


// CDOTA_Bot_Hero_BountyHunter::CreateMode  (line 31, @0x00000000028ab0e0, libserver.so)  // inlines: CDOTA_BotMode_Attack_BountyHunter, CDOTA_BotMode_Roam_BountyHunter
// calls: operator new, CDOTA_BotMode_Roam::CDOTA_BotMode_Roam, CDOTA_Bot::CreateMode, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_BountyHunter::CreateMode(CDOTA_Bot_Hero_BountyHunter *const this, int iMode)
{
  CDOTA_BotMode_Roam *v3; // r12
  CDOTA_BotMode_Attack *v5; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 2 )
  {
    if ( iMode == 3 )
    {
      v3 = operator new(0x108u);  // new CDOTA_BotMode_Roam_BountyHunter (size matches)
      CDOTA_BotMode_Roam::CDOTA_BotMode_Roam(v3, this);
      v3->_vptr_CDOTA_BotMode = off_42C9410;  // vptr: CDOTA_BotMode_Roam_BountyHunter
      return v3;
    }
    return CDOTA_Bot::CreateMode(this, iMode);
  }
  v5 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_BountyHunter (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v5, this);
  v5->_vptr_CDOTA_BotMode = off_42C9370;  // vptr: CDOTA_BotMode_Attack_BountyHunter
  return v5;
}


// CDOTA_Bot_Hero_BountyHunter::GetGankDistance  (line 47, @0x00000000028ac7f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetGankDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Hero_BountyHunter::GetGankDistance(CDOTA_Bot_Hero_BountyHunter *const this)
{
  CDOTABaseAbility *m_pAbilityWindWalk; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax

  m_pAbilityWindWalk = this->m_pAbilityWindWalk;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityWindWalk) >= 0
    && (*(m_pAbilityWindWalk->_vptr_IHandleEntity + 245))(m_pAbilityWindWalk) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityWindWalk)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityWindWalk, -1) )
  {
    return 1500;
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
  if ( SLOBYTE(m_pInstance[58]._vptr_IHandleEntity) < 0 )
    return 1500;
  else
    return CDOTA_Bot::GetGankDistance(this);
}


// CDOTA_Bot_Hero_BountyHunter::GetMaxRoamDistance  (line 59, @0x00000000028b26e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::GetMaxRoamDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "modifier_bounty_hunter_wind_walk"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Hero_BountyHunter::GetMaxRoamDistance(CDOTA_Bot_Hero_BountyHunter *const this)
{
  CDOTABaseAbility *m_pAbilityWindWalk; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // rax
  float v8; // r12d
  __m128i v9; // xmm0
  uint32 v10; // eax
  CConcreteEntityList *v11; // rsi
  CEntityIdentity *v12; // rdx
  __int64 v13; // rcx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rdi
  float v16; // xmm0_4
  float v17; // xmm2_4
  int result; // eax
  __m128i v19; // xmm0
  float v20; // [rsp+8h] [rbp-18h]
  float v21; // [rsp+Ch] [rbp-14h]

  m_pAbilityWindWalk = this->m_pAbilityWindWalk;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityWindWalk) >= 0
    && (*(m_pAbilityWindWalk->_vptr_IHandleEntity + 245))(m_pAbilityWindWalk) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityWindWalk)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityWindWalk, -1) )
  {
    *v19.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbilityWindWalk, "duration", -1, 1);
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
  }
  else
  {
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
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_bounty_hunter_wind_walk", 0);
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    if ( ModifierByName != 0 )
    {
      *v9.m128i_i64 = (*(ModifierByName->_vptr_CDOTA_Buff + 33))(ModifierByName);
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
    }
  }
  v10 = this->m_hUnit.m_Index;
  v11 = CEntityHandle::gm_pEntityList;
  if ( v10 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = this->m_hUnit.m_Index & 0x1FF, v11 = (8 * v13), (v14 = &v12[v13]) == 0)
    || v10 != v14->m_EHandle.m_Index
    || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
    || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
  {
    v15 = 0;
  }
  v16 = (*(v15->_vptr_IHandleEntity + 386))(v15, v11) * 30.0;
  v17 = 0.0;
  if ( (v8 / 30.0) >= 0.0 )
    v17 = fminf(1.0, v8 / 30.0);
  v20 = v17;
  v21 = v16;
  result = CDOTA_Bot::GetMaxRoamDistance(this);
  if ( ((v21 * v20) + 0.0) >= result )
    return ((v21 * v20) + 0.0);
  return result;
}


// CDOTA_BotMode_Attack_BountyHunter::Think  (line 85, @0x00000000028ab180, libserver.so)
// calls: CDOTA_BotMode_Attack::Think
void __fastcall CDOTA_BotMode_Attack_BountyHunter::Think(CDOTA_BotMode_Attack_BountyHunter *const this)
{
  CDOTA_BotMode_Attack::Think(this);
}


// CDOTA_BotMode_Attack_BountyHunter::GetAttackScore  (line 93, @0x00000000028ad850, libserver.so)  // inlines: FastSqrt, GetDistanceToEntity, GetTeamNumber, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BaseNPC::FindModifierByName, CDOTAGamerules::GetTeamTower, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTAGamerules::GetNumTeamTowers, CDOTABaseAbility::IsFullyCastable
// strings: "modifier_item_gem_of_true_sight"
float __fastcall CDOTA_BotMode_Attack_BountyHunter::GetAttackScore(
        CDOTA_BotMode_Attack_BountyHunter *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_Buff *ModifierByName; // rax
  float result; // xmm0_4
  int i; // ebx
  CDOTA_BaseNPC_Tower *TeamTower; // r15
  const Vector *AbsOrigin; // r15
  const Vector *v9; // rax
  bool IsFullyCastable; // al
  CDOTA_Bot *m_pBot; // [rsp+8h] [rbp-48h]
  float fGankScore; // [rsp+14h] [rbp-3Ch]
  CDOTA_BaseNPC *Unit; // [rsp+18h] [rbp-38h]

  m_pBot = this->m_pBot;
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
    if ( SLOBYTE(CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value) >= 0 )
    {
      IsFullyCastable = CDOTABaseAbility::IsFullyCastable(m_pBot[1].m_References.m_pHead);
      result = fGankScore;
      if ( IsFullyCastable )
        return fGankScore * 1.5;
    }
    else
    {
      return fGankScore * 1.8;
    }
  }
  return result;
}


// CDOTA_BotMode_Attack_BountyHunter::CalculateDesiredLocation  (line 131, @0x00000000028acbe0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BotMode::GetUnit, CDOTA_BotMode_Attack::CalculateDesiredLocation, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Attack_BountyHunter::CalculateDesiredLocation(
        CDOTA_BotMode_Attack_BountyHunter *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v11; // rdx
  Vector v12; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( SLOBYTE(CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value) < 0
    && (m_pBot = this->m_pBot, (m_Index = m_pBot->m_hTarget.m_Index) + 2 > 1)
    && (v4 = m_pBot->m_hTarget.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) != 0)
    && (v6 = &v5[v4 & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v11 = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    *&v12.x = v11;
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


// CDOTA_BotMode_Roam_BountyHunter::Think  (line 145, @0x00000000028ab190, libserver.so)
// calls: CDOTA_BotMode_Roam::Think
void __fastcall CDOTA_BotMode_Roam_BountyHunter::Think(CDOTA_BotMode_Roam_BountyHunter *const this)
{
  CDOTA_BotMode_Roam::Think(this);
}


// CDOTA_BotMode_Roam_BountyHunter::GetDesire  (line 153, @0x00000000028ab8d0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode::GetUnit, CDOTA_BotMode_Roam::GetDesire, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
float __fastcall CDOTA_BotMode_Roam_BountyHunter::GetDesire(CDOTA_BotMode_Roam_BountyHunter *const this)
{
  CDOTABaseAbility *m_pHead; // rbx

  m_pHead = this->m_pBot[1].m_References.m_pHead;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pHead) >= 0
    && (*(m_pHead->_vptr_IHandleEntity + 245))(m_pHead) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pHead)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pHead, -1)
    || SLOBYTE(CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value) < 0 )
  {
    return CDOTA_BotMode_Roam::GetDesire(this) * 1.5;
  }
  else
  {
    return CDOTA_BotMode_Roam::GetDesire(this) * 1.0;
  }
}


// CDOTA_BotMode_Roam_BountyHunter::CalculateDesiredLocation  (line 164, @0x00000000028ab1a0, libserver.so)
// calls: CDOTA_BotMode_Roam::CalculateDesiredLocation
Vector __fastcall CDOTA_BotMode_Roam_BountyHunter::CalculateDesiredLocation(
        CDOTA_BotMode_Roam_BountyHunter *const this)
{
  return CDOTA_BotMode_Roam::CalculateDesiredLocation(this);
}


// CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss  (line 177, @0x00000000028af4b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss(
        CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C94D0;  // vptr: CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::GetCurrentUsageDesire  (line 184, @0x00000000028b1a10, libserver.so)  // inlines: FastSqrt, Get, GetAttackRange, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsListeningToEvent, IsValidBotTarget, Length, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, DOTACommander, CDOTA_Commander::GetIllusionState, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CBaseEntity::GetHealth
int __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss *const this)
{
  int v2; // eax
  CDOTA_Bot_Hero_BountyHunter *m_pBot; // rdi
  __m128i v4; // xmm4
  __m128i v5; // xmm0
  float v6; // r13d
  CDOTA_BaseNPC_Hero *v7; // r12
  int v8; // edx
  int result; // eax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rsi
  float v12; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  CDOTA_Bot_Hero_BountyHunter *v16; // r14
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC_Hero *v18; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v20)(CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss *const, _QWORD); // r14
  CDOTA_Commander *v21; // rax
  DOTA_BOT_ILLUSION_STATE v22; // eax
  unsigned __int8 (__fastcall *v23)(CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss *const, _QWORD); // r14
  CDOTA_Commander *v24; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v26; // rax
  CDOTA_BaseNPC *v27; // rsi
  CEntityInstance *v28; // rax
  const CBaseEntity *v29; // r14
  const Vector *AbsOrigin; // r13
  const Vector *v31; // rax
  int LevelSpecialValue; // r14d
  CEntityInstance *v33; // rax
  CEntityInstance *v34; // r15
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v37; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v40; // rax
  float v41; // xmm3_4
  float v42; // xmm0_4
  __int64 v43; // rax
  float v44; // xmm0_4
  float v45; // xmm1_4
  __int64 v46; // rax
  float v47; // xmm1_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  __int64 v50; // rax
  float v51; // [rsp+0h] [rbp-50h]
  float v52; // [rsp+0h] [rbp-50h]
  float v53; // [rsp+4h] [rbp-4Ch]
  float v54; // [rsp+4h] [rbp-4Ch]
  float v55; // [rsp+4h] [rbp-4Ch]
  float v56; // [rsp+4h] [rbp-4Ch]
  float ArmorReductionForDamageType; // [rsp+8h] [rbp-48h]
  float v58; // [rsp+Ch] [rbp-44h]
  float fChannelTimeRemaining; // [rsp+14h] [rbp-3Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+18h] [rbp-38h] BYREF

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  m_pBot = this->m_pBot;
  *v4.m128i_i32 = v2;
  pChannelTarget = 0;
  fChannelTimeRemaining = 0.0;
  v5 = v4;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *v5.m128i_i32 = v2 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v5, &pChannelTarget, &fChannelTimeRemaining) != 0 )
  {
    v7 = pChannelTarget;
    if ( pChannelTarget != 0 && ((pChannelTarget->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
    {
      if ( (pChannelTarget->m_iUnitType & 1) != 0 )
      {
        v23 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v24 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v24, v7);
        if ( v23(this, IllusionState) == 0 )
          goto LABEL_5;
        v7 = pChannelTarget;
      }
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v10 == 0 || (v11 = v10, BYTE3(v10[7]._vptr_IHandleEntity) == 0) )
        v11 = 0;
      if ( IsBotTargetStatusValidCore(v7, v11, 251, -1.0, this->m_pAbility) )
      {
        v12 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
        if ( fChannelTimeRemaining > v12 )
        {
          if ( pChannelTarget == 0 )
            goto LABEL_57;
          m_pEntity = pChannelTarget->m_pEntity;
          if ( m_pEntity == 0 )
            goto LABEL_57;
          goto LABEL_15;
        }
      }
    }
  }
LABEL_5:
  v8 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  result = 0;
  if ( v8 != 2 )
    return result;
  v16 = this->m_pBot;
  v17 = CEntityHandle::operator CEntityInstance *(&v16->m_hTarget);
  v18 = v17;
  if ( v17 == 0 )
    return 0;
  if ( BYTE3(v17[7]._vptr_IHandleEntity) == 0 )
    return 0;
  m_Id = v17[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
    return 0;
  if ( (m_Id & 1) != 0 )
  {
    v20 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v21 = DOTACommander();
    v22 = CDOTA_Commander::GetIllusionState(v21, v18);
    if ( v20(this, v22) == 0 )
      return 0;
    v16 = this->m_pBot;
  }
  v26 = CEntityHandle::operator CEntityInstance *(&v16->m_hUnit);
  if ( v26 == 0 || (v27 = v26, BYTE3(v26[7]._vptr_IHandleEntity) == 0) )
    v27 = 0;
  if ( !IsBotTargetStatusValidCore(v18, v27, 251, v6, this->m_pAbility) )
    return 0;
  v28 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v28 == 0 || (v29 = v28, BYTE3(v28[7]._vptr_IHandleEntity) == 0) )
    v29 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
  v31 = CBaseEntity::GetAbsOrigin(v29);
  v58 = fsqrt(
          (((v31->x - AbsOrigin->x) * (v31->x - AbsOrigin->x)) + ((v31->y - AbsOrigin->y) * (v31->y - AbsOrigin->y)))
        + ((v31->z - AbsOrigin->z) * (v31->z - AbsOrigin->z)));
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "bonus_damage", -1, 1);
  ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v18, 2);
  v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v33 == 0 || (v34 = v33, BYTE3(v33[7]._vptr_IHandleEntity) == 0) )
    v34 = 0;
  m_hScope_high = HIBYTE(v34[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Highest_Internal = 0.0;
  if ( m_hScope_high != 0xFF && *(*&v34[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v34[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v37 = BYTE5(v34[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(v34[47].m_hPrivateScope.m_hScope);
  if ( v37 != 0xFF && *(*&v34[65].m_worldGroupId.m_nHashCode + 24 * v37) > 0 )
  {
    v51 = Modifier_Constant_Highest_Internal;
    v53 = SLODWORD(v34[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v34[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v51;
    m_hScope_low = v53;
  }
  v40 = BYTE6(v34[67].m_hPrivateScope.m_hScope);
  v41 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v42 = 0.0;
  if ( v40 != 0xFF && *(*&v34[65].m_worldGroupId.m_nHashCode + 24 * v40) > 0 )
  {
    v52 = Modifier_Constant_Highest_Internal;
    v54 = v41;
    v42 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v34[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v52;
    v41 = v54;
  }
  if ( Modifier_Constant_Highest_Internal > (v41 + v42) )
  {
    v50 = HIBYTE(v34[67].m_hPrivateScope.m_hScope);
    v49 = 0.0;
    if ( v50 != 0xFF && *(*&v34[65].m_worldGroupId.m_nHashCode + 24 * v50) > 0 )
      v49 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v34[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
              &CModifierParams::s_Default);
  }
  else
  {
    v43 = BYTE5(v34[67].m_hPrivateScope.m_hScope);
    v44 = 0.0;
    v45 = SLODWORD(v34[47].m_hPrivateScope.m_hScope);
    if ( v43 != 0xFF && *(*&v34[65].m_worldGroupId.m_nHashCode + 24 * v43) > 0 )
    {
      v55 = SLODWORD(v34[47].m_hPrivateScope.m_hScope);
      v44 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v34[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v45 = v55;
    }
    v46 = BYTE6(v34[67].m_hPrivateScope.m_hScope);
    v47 = v45 + v44;
    v48 = 0.0;
    if ( v46 != 0xFF && *(*&v34[65].m_worldGroupId.m_nHashCode + 24 * v46) > 0 )
    {
      v56 = v47;
      v48 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v34[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v47 = v56;
    }
    v49 = v48 + v47;
  }
  if ( v58 <= v49 || (LevelSpecialValue * (1.0 - ArmorReductionForDamageType)) <= CBaseEntity::GetHealth(v18) )
    return 0;
  m_pEntity = v18->m_pEntity;
  if ( m_pEntity == 0 )
  {
LABEL_57:
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
LABEL_15:
  v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v15 = 0x7FFF;
  else
    v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hDesiredTarget.m_Index) = v15 | this->m_hDesiredTarget.m_Index & 0x8000;
  this->m_hDesiredTarget.m_Index = (v14 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  return 3;
}


// CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::UseAbility  (line 225, @0x00000000028ac4d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::UseAbility(
        CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_BountyHunter *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r13

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
        if ( v4->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0 )
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


// CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk::CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk  (line 238, @0x00000000028af4e0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk::CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk(
        CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C9530;  // vptr: CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk
}


// CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk::GetCurrentUsageDesire  (line 245, @0x00000000028ab1b0, libserver.so)  // inlines: GetActiveModeDesire
int __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk *const this)
{
  int v2; // edx
  int result; // eax
  CDOTA_Bot_Hero_BountyHunter *m_pBot; // rdx
  CDOTA_Bot_Hero_BountyHunter *v5; // rbx
  CDOTA_Bot_Hero_BountyHunter *v6; // r12

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  result = 3;
  if ( v2 != 3 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_fModeDesires[3] < 0.75 )
    {
      if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 2 )
      {
        v6 = this->m_pBot;
        if ( v6->m_fModeDesires[(*(v6->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v6->m_pActiveBotMode)] > 0.75 )
          return 3;
      }
      if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4
        && (v5 = this->m_pBot)->m_fModeDesires[(*(v5->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v5->m_pActiveBotMode)] > 0.89999998 )
      {
        return 3;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk::UseAbility  (line 264, @0x00000000028aaec0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk::UseAbility(
        CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk *const this)
{
  CDOTA_Bot_Hero_BountyHunter *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_BountyHunter_Track::CDOTA_Bot_AbilityUsage_BountyHunter_Track  (line 273, @0x00000000028af500, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_Track::CDOTA_Bot_AbilityUsage_BountyHunter_Track(
        CDOTA_Bot_AbilityUsage_BountyHunter_Track *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C9590;  // vptr: CDOTA_Bot_AbilityUsage_BountyHunter_Track
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_BountyHunter_Track::GetCurrentUsageDesire  (line 280, @0x00000000028b0320, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::HasInvisibility, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::FindNearbyEnemiesInMode, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_bounty_hunter_track"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_Track::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_BountyHunter_Track *const this)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v3; // rdx
  int result; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // r12d
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int v15; // eax
  int NearbyEnemiesInMode; // eax
  CEntityIdentity *v17; // rcx
  __int16 v18; // si
  int v19; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  int nBestGankingEnemy; // [rsp+Ch] [rbp-64h]
  int nBestGankingEnemya; // [rsp+Ch] [rbp-64h]
  EHANDLE hBestEnemy; // [rsp+10h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyHeores; // [rsp+20h] [rbp-50h] BYREF

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v2 == 0
    || BYTE3(v2[7]._vptr_IHandleEntity) == 0
    || (v3 = v2, result = 0, SLOBYTE(v3[58]._vptr_IHandleEntity) >= 0) )
  {
    m_pAbility = this->m_pAbility;
    hNearbyEnemyHeores.m_Size = 0;
    hNearbyEnemyHeores.m_Memory.m_pMemory = 0;
    hNearbyEnemyHeores.m_Memory.m_nAllocationCount = 0;
    hNearbyEnemyHeores.m_Memory.m_nGrowSize = 0;
    v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
    CDOTA_Bot::GetNearbyHeroes(
      this->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &hNearbyEnemyHeores,
      v6);
    hBestEnemy.m_Index = -1;
    if ( hNearbyEnemyHeores.m_Size <= 0 )
    {
LABEL_29:
      v19 = 0;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      nBestGankingEnemy = 0;
      do
      {
        v9 = &hNearbyEnemyHeores.m_Memory.m_pMemory[v7];
        m_Index = hNearbyEnemyHeores.m_Memory.m_pMemory[v7].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && m_pInstance->m_pBot != 0
                && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_bounty_hunter_track", 0) == 0 )
              {
                v15 = (*(m_pInstance->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pInstance->m_pBot->m_pActiveBotMode);
                if ( v15 == 4 || v15 == 2 )
                {
                  if ( CDOTA_Bot::HasInvisibility(m_pInstance->m_pBot, 1)
                    || CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(m_pInstance) < 2.0 )
                  {
                    m_pEntity = m_pInstance->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      v22 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(this->m_hDesiredTarget.m_Index) = v22 | this->m_hDesiredTarget.m_Index & 0x8000;
                      this->m_hDesiredTarget.m_Index = (v21 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                      v19 = 3;
                    }
                    else
                    {
                      this->m_hDesiredTarget.m_Index = -1;
                      v19 = 3;
                    }
                    goto LABEL_28;
                  }
                  NearbyEnemiesInMode = CDOTA_Bot::FindNearbyEnemiesInMode(
                                          m_pInstance->m_pBot,
                                          DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                                          800.0,
                                          0,
                                          m_pInstance);
                  if ( NearbyEnemiesInMode > nBestGankingEnemy )
                  {
                    v17 = m_pInstance->m_pEntity;
                    if ( v17 != 0 )
                    {
                      v18 = 0x7FFF;
                      if ( v17->m_EHandle.m_Index != -1 )
                        v18 = v17->m_EHandle.m_Index & 0x7FFF;
                      nBestGankingEnemy = NearbyEnemiesInMode;
                      hBestEnemy.m_Index = (((v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1)) << 15) | v18 & 0x7FFF;
                    }
                    else
                    {
                      hBestEnemy.m_Index = -1;
                      nBestGankingEnemy = NearbyEnemiesInMode;
                    }
                  }
                }
              }
            }
          }
        }
        ++v8;
        ++v7;
      }
      while ( hNearbyEnemyHeores.m_Size > v8 );
      if ( nBestGankingEnemy <= 0 )
        goto LABEL_29;
      this->m_hDesiredTarget = hBestEnemy;
      v19 = 2 * (nBestGankingEnemy != 1) + 1;
    }
LABEL_28:
    nBestGankingEnemya = v19;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeores);
    return nBestGankingEnemya;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_BountyHunter_Track::UseAbility  (line 338, @0x00000000028ac5c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_BountyHunter_Track::UseAbility(
        CDOTA_Bot_AbilityUsage_BountyHunter_Track *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_BountyHunter *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r13

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
        if ( v4->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0 )
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


