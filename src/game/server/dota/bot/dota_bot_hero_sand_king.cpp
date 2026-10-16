
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_SandKing::CDOTA_Bot_Hero_SandKing  (line 21, @0x00000000028d6ab0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "sandking_burrowstrike", "sandking_epicenter"
void __fastcall CDOTA_Bot_Hero_SandKing::CDOTA_Bot_Hero_SandKing(
        CDOTA_Bot_Hero_SandKing *const this,
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

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CFD90;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityBurrowStrike = CDOTA_BaseNPC::FindAbilityByName(v6, "sandking_burrowstrike", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilitySandStorm = CDOTA_BaseNPC::FindAbilityByName(v8, "sandking_sand_storm", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityEpicenter = CDOTA_BaseNPC::FindAbilityByName(v10, "sandking_epicenter", 1);
}


// CDOTA_Bot_Hero_SandKing::IsSavingBlink  (line 31, @0x00000000028d5ac0, libserver.so)  // inlines: FastSqrt, Get, GetActiveModeDesire, GetDistanceToEntity, GetInstance, GetMana, GetTargetNPC, GetUnit, IsFullyCastable, IsTrained, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::IsFullyCastable, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth
bool __fastcall CDOTA_Bot_Hero_SandKing::IsSavingBlink(CDOTA_Bot_Hero_SandKing *const this)
{
  bool v1; // r12
  bool v3; // r13
  CDOTABaseAbility *m_pAbilityEpicenter; // rbx
  bool result; // al
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // r13
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // r15
  const Vector *AbsOrigin; // r14
  const Vector *v11; // rax
  CEntityInstance *v12; // rax
  float v13; // r15d
  int v14; // r14d
  int v15; // r14d
  float fBurrowstrikeDamage; // [rsp+10h] [rbp-40h]
  float fBurrowstrikeDamagea; // [rsp+10h] [rbp-40h]

  v1 = 0;
  if ( (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) == 4 )
    v1 = this->m_fModeDesires[(*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode)] >= 0.75;
  v3 = 0;
  if ( (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) == 2 )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    v7 = v6;
    if ( v6 == 0 || BYTE3(v6[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_23;
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v8 == 0 || (v9 = v8, BYTE3(v8[7]._vptr_IHandleEntity) == 0) )
      v9 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    v11 = CBaseEntity::GetAbsOrigin(v9);
    fBurrowstrikeDamage = fsqrt(
                            (((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x))
                           + ((v11->y - AbsOrigin->y) * (v11->y - AbsOrigin->y)))
                          + ((v11->z - AbsOrigin->z) * (v11->z - AbsOrigin->z)));
    if ( fBurrowstrikeDamage <= ((*(this->_vptr_CDOTA_Bot + 16))(this) / 2)
      || !CDOTABaseAbility::IsFullyCastable(this->m_pAbilityBurrowStrike) )
    {
      goto LABEL_23;
    }
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
      v12 = 0;
    v13 = *&v12[44].m_iszPrivateVScripts.u.m_Id;
    v14 = (*(this->m_pAbilityBurrowStrike->_vptr_IHandleEntity + 273))(this->m_pAbilityBurrowStrike, 0xFFFFFFFFLL);
    if ( v13 > ((*(this->_vptr_CDOTA_Bot + 15))(this) + v14) )
    {
      v15 = (*(this->m_pAbilityBurrowStrike->_vptr_IHandleEntity + 247))(this->m_pAbilityBurrowStrike);
      fBurrowstrikeDamagea = v15 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v7, 2));
      v3 = fBurrowstrikeDamagea > CBaseEntity::GetHealth(v7);
    }
    else
    {
LABEL_23:
      v3 = 0;
    }
  }
  m_pAbilityEpicenter = this->m_pAbilityEpicenter;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityEpicenter) < 0 )
    return 0;
  if ( (*(m_pAbilityEpicenter->_vptr_IHandleEntity + 245))(m_pAbilityEpicenter) == 0 )
    return 0;
  if ( !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityEpicenter) )
    return 0;
  if ( !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityEpicenter, -1) )
    return 0;
  if ( v1 )
    return 0;
  result = 1;
  if ( v3 )
    return 0;
  return result;
}


// CDOTA_BotMode_Attack_SandKing::GetDesire  (line 57, @0x00000000028d25b0, libserver.so)
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::FindModifierByName, CDOTA_BotMode_Attack::GetDesire
// strings: "modifier_sand_king_epicenter"
float __fastcall CDOTA_BotMode_Attack_SandKing::GetDesire(CDOTA_BotMode_Attack_SandKing *const this)
{
  CDOTA_BaseNPC *Unit; // rax

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2
    && (Unit = CDOTA_BotMode::GetUnit(this),
        CDOTA_BaseNPC::FindModifierByName(Unit, "modifier_sand_king_epicenter", 0) != 0) )
  {
    return 0.89999998;
  }
  else
  {
    return CDOTA_BotMode_Attack::GetDesire(this);
  }
}


// CDOTA_BotMode_Attack_SandKing::CalculateDesiredLocation  (line 78, @0x00000000028d29f0, libserver.so)  // inlines: GetRequestedBlink
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::HasRequestedBlink, CDOTA_BotMode_Attack::CalculateDesiredLocation
// strings: "modifier_sand_king_epicenter"
Vector __fastcall CDOTA_BotMode_Attack_SandKing::CalculateDesiredLocation(CDOTA_BotMode_Attack_SandKing *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_Bot *m_pBot; // rax
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  Vector v8; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Unit = CDOTA_BotMode::GetUnit(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Unit, "modifier_sand_king_epicenter", 0) != 0
    && CDOTA_Bot::HasRequestedBlink(this->m_pBot) )
  {
    m_pBot = this->m_pBot;
    z = m_pBot->m_vRequestedBlinkLoc.z;
    x = m_pBot->m_vRequestedBlinkLoc.x;
    v8.y = m_pBot->m_vRequestedBlinkLoc.y;
    v8.z = z;
    v8.x = x;
  }
  else
  {
    v8 = CDOTA_BotMode_Attack::CalculateDesiredLocation(this);
  }
  *&result.x = *&v8.x;
  result.z = v8.z;
  return result;
}


// CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike  (line 96, @0x00000000028d6ba0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike(
        CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CFF30;  // vptr: CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::GetCurrentUsageDesire  (line 103, @0x00000000028db0c0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetActiveModeDesire, GetEHandle, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator*, operator+, operator-, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTALocomotor::GetAverageVelocityOverTime, VectorNormalize, CBaseEntity::GetAbsOrigin (15 total)
// strings: "burrow_width"
// globals: jpt_28DB181
int __fastcall CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike *const this)
{
  int v2; // r12d
  int LevelSpecialValue; // eax
  __m128i v4; // xmm3
  CDOTA_Bot_Hero_SandKing *m_pBot; // rdi
  __m128i v6; // xmm0
  int v7; // r13d
  float v8; // r14d
  int result; // eax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rsi
  int v12; // eax
  CDOTA_Bot_Hero_SandKing *v13; // r12
  __m128i v14; // xmm7
  float v15; // r13d
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r14
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CDOTA_Bot_Hero_SandKing *v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rdx
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // r12
  __int64 v27; // rax
  CEntityInstance *v28; // rax
  CDOTA_Bot *v29; // rdi
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *v31; // rax
  CDOTA_BaseNPC *v32; // rsi
  int v33; // eax
  CDOTA_Bot_Hero_SandKing *v34; // r12
  __m128i v35; // xmm7
  float v36; // r13d
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // r14
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // rdi
  CEntityInstance *v41; // rax
  CDOTA_BaseNPC *v42; // rdi
  CDOTA_Bot_Hero_SandKing *v43; // r12
  CEntityInstance *v44; // rax
  CDOTA_BaseNPC *v45; // rdx
  CDOTA_Bot_Hero_SandKing *v46; // r12
  CEntityInstance *v47; // rax
  CDOTA_BaseNPC *v48; // rcx
  CDOTA_Bot_Hero_SandKing *v49; // r12
  CEntityInstance *v50; // rax
  CEntityInstance *v51; // rdi
  CDOTALocomotor *v52; // rax
  float v53; // xmm1_4
  unsigned __int64 v54; // xmm0_8
  CEntityInstance *v55; // rax
  const CBaseEntity *v56; // rdi
  const Vector *AbsOrigin; // r13
  vec_t v58; // xmm0_4
  vec_t v59; // xmm1_4
  __m128i v60; // xmm5
  CDOTA_Bot_Hero_SandKing *v61; // rax
  __m128i x_low; // xmm4
  float v63; // r12d
  float v64; // r13d
  __m128i z_low; // xmm5
  float v66; // r14d
  CEntityInstance *v67; // rax
  const CBaseEntity *v68; // rdi
  const Vector *v69; // rax
  vec_t v70; // xmm0_4
  vec_t v71; // xmm2_4
  CDOTA_Bot_Hero_SandKing *v72; // r14
  CEntityInstance *v73; // rax
  int v74; // r14d
  CEntityInstance *v75; // rax
  const CBaseEntity *v76; // rdi
  const Vector *v77; // r14
  CEntityInstance *v78; // rax
  CDOTA_BaseNPC *v79; // rdi
  int OpposingTeamNumber; // eax
  CEntityInstance *v81; // rax
  const CBaseEntity *v82; // rdi
  const Vector *v83; // rax
  vec_t v84; // xmm0_4
  vec_t v85; // xmm1_4
  float v86; // xmm0_4
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v88; // xmm0
  __m128i v89; // xmm6
  int v90; // eax
  __m128i y_low; // xmm7
  float v92; // r12d
  float v93; // r13d
  float v94; // r14d
  CEntityInstance *v95; // rax
  const CBaseEntity *v96; // rdi
  const Vector *v97; // rax
  vec_t v98; // xmm0_4
  vec_t v99; // xmm2_4
  CEntityInstance *v100; // rax
  CDOTA_BaseNPC *v101; // rsi
  float v102; // xmm0_4
  int v103; // eax
  __int16 v104; // cx
  float fMaxRangea; // [rsp+1Ch] [rbp-64h]
  float fMaxRange; // [rsp+1Ch] [rbp-64h]
  float fChannelTimeRemaining; // [rsp+20h] [rbp-60h] BYREF
  int nTargetCount; // [rsp+24h] [rbp-5Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+28h] [rbp-58h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-50h] BYREF
  Vector vToTarget; // [rsp+40h] [rbp-40h] BYREF

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "burrow_width", -1, 1);
  *v4.m128i_i32 = v2;
  m_pBot = this->m_pBot;
  v6 = 0x43480000u;
  v7 = LevelSpecialValue;
  pChannelTarget = 0;
  fChannelTimeRemaining = 0.0;
  *v6.m128i_i32 = v2 + 200.0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v6, &pChannelTarget, &fChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, pChannelTarget)
    && ((fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0),
         (v100 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0)
     || BYTE3(v100[7]._vptr_IHandleEntity) == 0
      ? (v101 = 0)
      : (v101 = v100),
        IsBotTargetStatusValidCore(pChannelTarget, v101, 251, fMaxRange, this->m_pAbility)
     && (v102 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining > v102)) )
  {
    if ( pChannelTarget != 0 && (m_pEntity = pChannelTarget->m_pEntity) != 0 )
    {
LABEL_97:
      v103 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v104 = 0x7FFF;
      else
        v104 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v104 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v103 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 3;
    }
    else
    {
LABEL_34:
      this->m_hDesiredTarget.m_Index = -1;
      return 3;
    }
  }
  else
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 2u:
        v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
          v32 = v31;
        else
          v32 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v32) )
          goto LABEL_4;
        v33 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        v34 = this->m_pBot;
        *v35.m128i_i32 = v33;
        v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
        v37 = CEntityHandle::operator CEntityInstance *(&v34->m_hUnit);
        if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
          v38 = v37;
        else
          v38 = 0;
        v39 = CEntityHandle::operator CEntityInstance *(&v34->m_hTarget);
        if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
          v40 = v39;
        else
          v40 = 0;
        if ( !IsBotTargetStatusValidCore(v40, v38, 251, v36, this->m_pAbility) )
          goto LABEL_4;
        v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v41 == 0 || (v42 = v41, BYTE3(v41[7]._vptr_IHandleEntity) == 0) )
          v42 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v42) )
          goto LABEL_4;
        v43 = this->m_pBot;
        v44 = CEntityHandle::operator CEntityInstance *(&v43->m_hTarget);
        if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
          v45 = v44;
        else
          v45 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v43->m_pTeamCommander, v43, v45) )
          goto LABEL_4;
        this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
        result = 3;
        break;
      case 4u:
        v46 = this->m_pBot;
        v47 = CEntityHandle::operator CEntityInstance *(&v46->m_hUnit);
        if ( v47 != 0 && BYTE3(v47[7]._vptr_IHandleEntity) != 0 )
          v48 = v47;
        else
          v48 = 0;
        if ( CDOTA_Bot::FindNearbyEnemiesInMode(v46, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, v48) <= 0 )
          goto LABEL_4;
        v49 = this->m_pBot;
        if ( v49->m_fModeDesires[(*(v49->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v49->m_pActiveBotMode)] < 0.75 )
          goto LABEL_4;
        v50 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
          v51 = v50;
        else
          v51 = 0;
        v52 = (*(v51->_vptr_IHandleEntity + 376))(v51);
        v54 = CDOTALocomotor::GetAverageVelocityOverTime(v52, 2.0, v53).m128i_u64[0];
        vTargetLoc.z = 0.0;
        *&vTargetLoc.x = v54;
        if ( VectorNormalize(&vTargetLoc) < 10.0 )
        {
          v55 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
            v56 = v55;
          else
            v56 = 0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v56);
          vToTarget = CDOTA_TeamCommander::GetBaseLocation(this->m_pBot->m_pTeamCommander);
          v58 = vToTarget.y - AbsOrigin->y;
          v59 = vToTarget.x - AbsOrigin->x;
          vTargetLoc.z = 0.0;
          vTargetLoc.y = v58;
          vTargetLoc.x = v59;
          VectorNormalize(&vTargetLoc);
        }
        v60 = _mm_cvtsi32_si128(LODWORD(v8));
        v61 = this->m_pBot;
        this->m_hDesiredTarget.m_Index = -1;
        x_low = LODWORD(vTargetLoc.x);
        *x_low.m128i_i32 = vTargetLoc.x * *v60.m128i_i32;
        *v60.m128i_i32 = *v60.m128i_i32 * vTargetLoc.y;
        v63 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
        v64 = COERCE_FLOAT(_mm_cvtsi128_si32(v60));
        z_low = LODWORD(vTargetLoc.z);
        *z_low.m128i_i32 = vTargetLoc.z * v8;
        v66 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
        v67 = CEntityHandle::operator CEntityInstance *(&v61->m_hUnit);
        if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
          v68 = v67;
        else
          v68 = 0;
        v69 = CBaseEntity::GetAbsOrigin(v68);
        v70 = v66 + v69->z;
        v71 = v63 + v69->x;
        this->m_vDesiredLocation.y = v64 + v69->y;
        this->m_vDesiredLocation.z = v70;
        this->m_vDesiredLocation.x = v71;
        result = 3;
        break;
      case 8u:
      case 9u:
      case 0xAu:
        if ( (*(this->m_pBot->m_pAbilityEpicenter->_vptr_IHandleEntity + 245))(this->m_pBot->m_pAbilityEpicenter) == 0 )
          goto LABEL_76;
        v72 = this->m_pBot;
        v73 = CEntityHandle::operator CEntityInstance *(&v72->m_hUnit);
        if ( v73 == 0 || BYTE3(v73[7]._vptr_IHandleEntity) == 0 )
          v73 = 0;
        fMaxRangea = *&v73[44].m_iszPrivateVScripts.u.m_Id;
        v74 = (*(v72->m_pAbilityEpicenter->_vptr_IHandleEntity + 273))(v72->m_pAbilityEpicenter, 0xFFFFFFFFLL);
        if ( (((*(this->m_pBot->m_pAbilityBurrowStrike->_vptr_IHandleEntity + 273))(
                 this->m_pBot->m_pAbilityBurrowStrike,
                 0xFFFFFFFFLL)
             + v74)
            + 100.0) > fMaxRangea )
        {
          this->m_hDesiredTarget.m_Index = -1;
          this->m_vDesiredLocation = vec3_invalid;
          result = 0;
        }
        else
        {
LABEL_76:
          v75 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v75 != 0 && BYTE3(v75[7]._vptr_IHandleEntity) != 0 )
            v76 = v75;
          else
            v76 = 0;
          v77 = CBaseEntity::GetAbsOrigin(v76);
          v78 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v78 != 0 && BYTE3(v78[7]._vptr_IHandleEntity) != 0 )
            v79 = v78;
          else
            v79 = 0;
          OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v79);
          CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
            this,
            OpposingTeamNumber,
            3,
            1,
            v77,
            v2,
            0.0,
            v7,
            &vTargetLoc,
            &nTargetCount);
          result = 0;
          if ( nTargetCount > 3 )
          {
            v81 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v81 != 0 && BYTE3(v81[7]._vptr_IHandleEntity) != 0 )
              v82 = v81;
            else
              v82 = 0;
            v83 = CBaseEntity::GetAbsOrigin(v82);
            v84 = vTargetLoc.y - v83->y;
            v85 = vTargetLoc.x - v83->x;
            vToTarget.z = 0.0;
            vToTarget.y = v84;
            vToTarget.x = v85;
            v86 = VectorNormalize(&vToTarget);
            m_pAbility = this->m_pAbility;
            this->m_hDesiredTarget.m_Index = -1;
            v88 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0, v86);
            v89 = LODWORD(vToTarget.x);
            y_low = LODWORD(vToTarget.y);
            *v89.m128i_i32 = vToTarget.x * v90;
            *y_low.m128i_i32 = vToTarget.y * v90;
            *v88.m128i_i32 = v90 * vToTarget.z;
            v92 = COERCE_FLOAT(_mm_cvtsi128_si32(v89));
            v93 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
            v94 = COERCE_FLOAT(_mm_cvtsi128_si32(v88));
            v95 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v95 != 0 && BYTE3(v95[7]._vptr_IHandleEntity) != 0 )
              v96 = v95;
            else
              v96 = 0;
            v97 = CBaseEntity::GetAbsOrigin(v96);
            v98 = v94 + v97->z;
            v99 = v92 + v97->x;
            this->m_vDesiredLocation.y = v93 + v97->y;
            this->m_vDesiredLocation.z = v98;
            this->m_vDesiredLocation.x = v99;
            result = 1;
          }
        }
        break;
      case 0x12u:
        v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
          v11 = v10;
        else
          v11 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v11) )
          goto LABEL_4;
        v12 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        v13 = this->m_pBot;
        *v14.m128i_i32 = v12;
        v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
        v16 = CEntityHandle::operator CEntityInstance *(&v13->m_hUnit);
        if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
          v17 = v16;
        else
          v17 = 0;
        v18 = CEntityHandle::operator CEntityInstance *(&v13->m_hTarget);
        if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
          v19 = v18;
        else
          v19 = 0;
        if ( !IsBotTargetStatusValidCore(v19, v17, 251, v15, this->m_pAbility) )
          goto LABEL_4;
        v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v20 == 0 || (v21 = v20, BYTE3(v20[7]._vptr_IHandleEntity) == 0) )
          v21 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v21) )
          goto LABEL_4;
        v22 = this->m_pBot;
        v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hTarget);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v24 = v23;
        else
          v24 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v22->m_pTeamCommander, v22, v24) )
          goto LABEL_4;
        v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        v26 = v25;
        if ( v25 == 0 )
          goto LABEL_4;
        if ( BYTE3(v25[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_4;
        if ( (v25[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_4;
        v27 = *&v25[45].m_worldGroupId.m_nHashCode;
        if ( v27 == 0 )
          goto LABEL_4;
        vToTarget.x = *(v27 + 712);
        v28 = CEntityHandle::operator CEntityInstance *(&vToTarget);
        if ( v28 == 0 )
          goto LABEL_4;
        if ( BYTE3(v28[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_4;
        if ( (v28[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_4;
        v29 = *&v28[45].m_worldGroupId.m_nHashCode;
        if ( v29 == 0 || !CDOTA_Bot::IsAboutToDie(v29) )
          goto LABEL_4;
        m_pEntity = v26->m_pEntity;
        if ( m_pEntity == 0 )
          goto LABEL_34;
        goto LABEL_97;
      default:
LABEL_4:
        result = 0;
        break;
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::UseAbility  (line 226, @0x00000000028d4200, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::UseAbility(
        CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot_Hero_SandKing *v5; // r13
  CDOTABaseAbility *v6; // r14
  CDOTA_BotAction_UseAbility *v7; // r12
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_SandKing *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    m_pBot = this->m_pBot;
    m_pAbility = this->m_pAbility;
    v7 = operator new(0xC0u);
    CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v7, m_pBot, m_pAbility, m_pInstance);
  }
  else
  {
    v5 = this->m_pBot;
    v6 = this->m_pAbility;
    v7 = operator new(0xC0u);
    CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v7, v5, v6, &this->m_vDesiredLocation);
  }
  CDOTA_Bot::PushAction(this->m_pBot, v7);
}


// CDOTA_Bot_AbilityUsage_SandKing_SandStorm::CDOTA_Bot_AbilityUsage_SandKing_SandStorm  (line 243, @0x00000000028d6bd0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SandKing_SandStorm::CDOTA_Bot_AbilityUsage_SandKing_SandStorm(
        CDOTA_Bot_AbilityUsage_SandKing_SandStorm *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CFF90;  // vptr: CDOTA_Bot_AbilityUsage_SandKing_SandStorm
}


// CDOTA_Bot_AbilityUsage_SandKing_SandStorm::GetCurrentUsageDesire  (line 250, @0x00000000028d7940, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActiveModeDesire, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_Bot::GetNearbyHeroes, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_item_dustofappearance", "modifier_truesight"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_SandKing_SandStorm::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SandKing_SandStorm *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // rdi
  int result; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CDOTA_Bot_Hero_SandKing *v7; // rbx
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdx
  bool HasIncomingStun; // dl
  CDOTA_Bot_Hero_SandKing *m_pBot; // r12
  CDOTA_Bot_Hero_SandKing *v12; // r12
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rcx
  CDOTA_Bot_Hero_SandKing *v15; // rdi
  __int64 v16; // r12
  int v17; // ebx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CEntityInstance *m_pInstance; // rax
  __int64 v23; // rdi
  int v24; // eax
  int v25; // [rsp+Ch] [rbp-44h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+10h] [rbp-40h] BYREF

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v3, "modifier_item_dustofappearance", 0) != 0 )
    return 0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v6, "modifier_truesight", 0) != 0 )
    return 0;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] >= 0.75 )
    {
      v12 = this->m_pBot;
      v13 = CEntityHandle::operator CEntityInstance *(&v12->m_hUnit);
      if ( v13 == 0 || (v14 = v13, BYTE3(v13[7]._vptr_IHandleEntity) == 0) )
        v14 = 0;
      if ( CDOTA_Bot::FindNearbyEnemiesInMode(v12, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, v14) > 0 )
      {
        v15 = this->m_pBot;
        hNearbyEnemies.m_Size = 0;
        hNearbyEnemies.m_Memory.m_pMemory = 0;
        hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
        hNearbyEnemies.m_Memory.m_nGrowSize = 0;
        CDOTA_Bot::GetNearbyHeroes(v15, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemies, 1000.0);
        v16 = 0;
        v17 = 0;
        if ( hNearbyEnemies.m_Size > 0 )
        {
          while ( 1 )
          {
            m_Index = hNearbyEnemies.m_Memory.m_pMemory[v16].m_Index;
            if ( m_Index + 2 > 1 )
            {
              m_Index_low = LOWORD(hNearbyEnemies.m_Memory.m_pMemory[v16].m_Index);
              v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
              if ( v20 != 0 )
              {
                v21 = &v20[m_Index_low & 0x1FF];
                if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index )
                {
                  m_pInstance = v21->m_pInstance;
                  if ( v21->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  {
                    v23 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
                    if ( v23 != 0 && (*(*v23 + 136LL))(v23) != 0 )
                      break;
                  }
                }
              }
            }
            ++v17;
            ++v16;
            if ( hNearbyEnemies.m_Size <= v17 )
              goto LABEL_37;
          }
          v24 = 0;
        }
        else
        {
LABEL_37:
          v24 = 3;
        }
        v25 = v24;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
        return v25;
      }
    }
  }
  v7 = this->m_pBot;
  v8 = CEntityHandle::operator CEntityInstance *(&v7->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  HasIncomingStun = CDOTA_TeamCommander::HasIncomingStun(v7->m_pTeamCommander, v7, v9);
  result = 3;
  if ( HasIncomingStun )
    return result;
  return 0;
}


// CDOTA_Bot_AbilityUsage_SandKing_SandStorm::UseAbility  (line 285, @0x00000000028d2390, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_SandKing_SandStorm::UseAbility(
        CDOTA_Bot_AbilityUsage_SandKing_SandStorm *const this)
{
  CDOTA_Bot_Hero_SandKing *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_SandKing_SandStorm::ShouldBreakChannel  (line 292, @0x00000000028d4fc0, libserver.so)  // inlines: Get, GetInstance, GetUnit, InState, IsInvisible, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::HasBlink, CEntityHandle::operator CEntityInstance*
bool __fastcall CDOTA_Bot_AbilityUsage_SandKing_SandStorm::ShouldBreakChannel(
        CDOTA_Bot_AbilityUsage_SandKing_SandStorm *const this)
{
  CEntityInstance *v3; // rax

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 4
    || CDOTA_Bot::HasBlink(this->m_pBot, 1) )
  {
    return 1;
  }
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    v3 = 0;
  return (v3[58]._vptr_IHandleEntity & 0x80) == 0;
}


// CDOTA_Bot_AbilityUsage_SandKing_Epicenter::CDOTA_Bot_AbilityUsage_SandKing_Epicenter  (line 301, @0x00000000028d6bf0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SandKing_Epicenter::CDOTA_Bot_AbilityUsage_SandKing_Epicenter(
        CDOTA_Bot_AbilityUsage_SandKing_Epicenter *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CFFF0;  // vptr: CDOTA_Bot_AbilityUsage_SandKing_Epicenter
}


// CDOTA_Bot_AbilityUsage_SandKing_Epicenter::FindFilter  (line 308, @0x00000000028d44d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: IsBotTargetStatusValidCore, CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_SandKing_Epicenter::FindFilter(
        CDOTA_Bot_AbilityUsage_SandKing_Epicenter *const this,
        unsigned __int16 *hUnit)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_SandKing *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v10; // si
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // rsi
  bool valid; // al
  unsigned int v15; // edx

  v3 = *hUnit;
  if ( (*hUnit + 2) <= 1
    || (v4 = *hUnit, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
    || (v6 = &v5[v4 & 0x1FF]) == 0
    || v3 != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v10 = m_pBot->m_hUnit.m_Index, (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F]) == 0)
    || (v12 = &v11[v10 & 0x1FF]) == 0
    || m_Index != v12->m_EHandle.m_Index
    || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
    || !v13->m_bIsDOTANPC )
  {
    v13 = 0;
  }
  valid = IsBotTargetStatusValidCore(m_pInstance, v13, 251, -1.0, this->m_pAbility);
  v15 = 0;
  if ( valid )
    LOBYTE(v15) = CBaseEntity::GetHealth(m_pInstance) < this->m_nFilterHealthThreshold;
  return v15;
}


// CDOTA_Bot_AbilityUsage_SandKing_Epicenter::GetCurrentUsageDesire  (line 317, @0x00000000028dcaa0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, Length, LookupEntity, Max<float>, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::GetStunDuration, CDOTA_Bot::HasMinistunOnAttack, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange, CDOTABaseAbility::IsFullyCastable, CDOTA_Bot::HasBlink, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "epicenter_pulses", "epicenter_damage"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_SandKing_Epicenter::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SandKing_Epicenter *const this)
{
  CDOTA_Bot_Hero_SandKing *m_pBot; // rdi
  __int64 v3; // rbx
  int v4; // r12d
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot *v11; // rdi
  const CBaseEntity *v12; // rax
  const Vector *v13; // r15
  const Vector *v14; // rax
  int v15; // ebx
  CDOTA_Bot_Hero_SandKing *v16; // rbx
  CEntityInstance *v17; // rax
  float v18; // r12d
  int v19; // ebx
  int v20; // ebx
  bool v21; // r12
  bool HasBlink; // al
  float v23; // xmm0_4
  __m128i v24; // xmm1
  unsigned int v25; // ebx
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v27; // xmm4
  float v28; // ebx
  __m128i v29; // xmm0
  float v30; // r12d
  int v31; // ebx
  CEntityInstance *v32; // rax
  const CBaseEntity *v33; // rdi
  const Vector *AbsOrigin; // r13
  CEntityInstance *v35; // rax
  CEntityInstance *v36; // rdx
  int LevelSpecialValue; // r12d
  int v38; // eax
  CDOTABaseAbility *v39; // rdi
  __m128i v40; // xmm0
  float v41; // r12d
  CEntityInstance *v42; // rax
  const CBaseEntity *v43; // rdi
  const Vector *v44; // r13
  CEntityInstance *v45; // rax
  CEntityInstance *v46; // rdx
  float v48; // [rsp+2Ch] [rbp-84h]
  int nTargetCount; // [rsp+38h] [rbp-78h] BYREF
  int nHurtTargetCount; // [rsp+3Ch] [rbp-74h] BYREF
  Vector vTargetLoc; // [rsp+40h] [rbp-70h] BYREF
  Vector vHurtTargetLoc; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+60h] [rbp-50h] BYREF

  hNearbyEnemies.m_Size = 0;
  m_pBot = this->m_pBot;
  hNearbyEnemies.m_Memory.m_pMemory = 0;
  hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemies.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemies, 600.0);
  if ( hNearbyEnemies.m_Size <= 0 )
  {
LABEL_18:
    if ( CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityBurrowStrike) )
    {
      v16 = this->m_pBot;
      v17 = CEntityHandle::operator CEntityInstance *(&v16->m_hUnit);
      if ( v17 == 0 || BYTE3(v17[7]._vptr_IHandleEntity) == 0 )
        v17 = 0;
      v18 = *&v17[44].m_iszPrivateVScripts.u.m_Id;
      v19 = (*(v16->m_pAbilityBurrowStrike->_vptr_IHandleEntity + 273))(v16->m_pAbilityBurrowStrike, 0xFFFFFFFFLL);
      v20 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL) + v19;
      v21 = v18 > ((*(this->m_pBot->_vptr_CDOTA_Bot + 15))(this->m_pBot) + v20);
    }
    else
    {
      v21 = 0;
    }
    HasBlink = CDOTA_Bot::HasBlink(this->m_pBot, 1);
    v23 = 0.0;
    v24 = 0;
    if ( !HasBlink
      || (*v24.m128i_i32 = (*(this->m_pBot->_vptr_CDOTA_Bot + 16))(this->m_pBot, 0.0, 0.0),
          v23 = 0.0,
          v25 = _mm_cvtsi128_si32(0LL),
          *v24.m128i_i32 >= 0.0) )
    {
      v25 = _mm_cvtsi128_si32(v24);
    }
    if ( v21 )
      v23 = (*(this->m_pBot->m_pAbilityBurrowStrike->_vptr_IHandleEntity + 226))(
              this->m_pBot->m_pAbilityBurrowStrike,
              &vec3_origin,
              0);
    m_pAbility = this->m_pAbility;
    this->m_nFilterHealthThreshold = 99999;
    v27 = _mm_cvtsi32_si128(v25);
    *v27.m128i_i32 = fmaxf(*v27.m128i_i32, v23);
    v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
    *v29.m128i_i64 = (*(m_pAbility->_vptr_IHandleEntity + 225))(m_pAbility);
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
    v31 = v28;
    v32 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
      v33 = v32;
    else
      v33 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v33);
    v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
      v36 = v35;
    else
      v36 = 0;
    CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
      this,
      HIBYTE(v36[7].m_CScriptComponent),
      1,
      2,
      AbsOrigin,
      v31,
      v30,
      700,
      &vTargetLoc,
      &nTargetCount);
    if ( nTargetCount > 2
      && CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, 0, 700.0) > 2 )
    {
      v15 = 3;
      this->m_vDesiredLocation = vTargetLoc;
      goto LABEL_41;
    }
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "epicenter_pulses", -1, 0);
    v38 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "epicenter_damage", -1, 1);
    v39 = this->m_pAbility;
    this->m_nFilterHealthThreshold = v38 * LevelSpecialValue;
    *v40.m128i_i64 = (*(v39->_vptr_IHandleEntity + 225))(v39);
    v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v40));
    v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
      v43 = v42;
    else
      v43 = 0;
    v44 = CBaseEntity::GetAbsOrigin(v43);
    v45 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v45 != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
      v46 = v45;
    else
      v46 = 0;
    CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
      this,
      HIBYTE(v46[7].m_CScriptComponent),
      1,
      2,
      v44,
      v31,
      v41,
      700,
      &vHurtTargetLoc,
      &nHurtTargetCount);
    if ( nHurtTargetCount > 1 )
    {
      v15 = 3;
      this->m_vDesiredLocation = vHurtTargetLoc;
      goto LABEL_41;
    }
  }
  else
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = &hNearbyEnemies.m_Memory.m_pMemory[v3];
      m_Index = hNearbyEnemies.m_Memory.m_pMemory[v3].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              v11 = m_pInstance->m_pBot;
              if ( v11 != 0 )
              {
                if ( CDOTA_Bot::GetStunDuration(v11, 1) > 0.0 )
                  break;
                if ( CDOTA_Bot::HasMinistunOnAttack(m_pInstance->m_pBot) )
                {
                  v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                  if ( v12 != 0 && v12->m_bIsDOTANPC )
                  {
                    v13 = CBaseEntity::GetAbsOrigin(v12);
                    v14 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    v48 = fsqrt(
                            (((v14->x - v13->x) * (v14->x - v13->x)) + ((v14->y - v13->y) * (v14->y - v13->y)))
                          + ((v14->z - v13->z) * (v14->z - v13->z)));
                  }
                  else
                  {
                    v48 = -1.0;
                  }
                  if ( CDOTA_BaseNPC::GetAttackRange(m_pInstance) > v48 )
                    break;
                }
              }
            }
          }
        }
      }
      ++v4;
      ++v3;
      if ( hNearbyEnemies.m_Size <= v4 )
        goto LABEL_18;
    }
  }
  v15 = 0;
LABEL_41:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
  return v15;
}


// CDOTA_Bot_AbilityUsage_SandKing_Epicenter::UseAbility  (line 378, @0x00000000028d7bf0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetTeamNumber, GetUnit, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, FindUnitsInRadius, CDOTA_TeamCommander::CreateHumanRequest, CDOTA_Bot::SetRequestedBlink, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, operator delete, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_SandKing_Epicenter::UseAbility(
        CDOTA_Bot_AbilityUsage_SandKing_Epicenter *const this)
{
  CDOTA_Bot_Hero_SandKing *m_pBot; // rax
  CEntityInstance *v3; // rax
  Vector *p_m_vDesiredLocation; // r15
  CDOTA_BaseNPC *v5; // rdx
  double v6; // xmm1_8
  __int64 v7; // r12
  int v8; // ebx
  CDOTA_Bot_Hero_SandKing *v9; // r12
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v11; // rbx
  EHANDLE hEntity; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargetEntities; // [rsp+30h] [rbp-50h] BYREF

  hTargetEntities.m_Size = 0;
  m_pBot = this->m_pBot;
  hTargetEntities.m_Memory.m_pMemory = 0;
  hTargetEntities.m_Memory.m_nAllocationCount = 0;
  hTargetEntities.m_Memory.m_nGrowSize = 0;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    p_m_vDesiredLocation = &this->m_vDesiredLocation;
    v5 = v3;
  }
  else
  {
    p_m_vDesiredLocation = &this->m_vDesiredLocation;
    v5 = 0;
  }
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, p_m_vDesiredLocation, v5, 700.0, &hTargetEntities, 2, 1, 128, 0, 0);
  if ( hTargetEntities.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      hEntity.m_Index = hTargetEntities.m_Memory.m_pMemory[v7].m_Index;
      CDOTA_TeamCommander::CreateHumanRequest(
        this->m_pBot->m_pTeamCommander,
        0,
        &hEntity.m_Index,
        0,
        COERCE_DOUBLE(1084227584),
        v6);
      ++v8;
      ++v7;
    }
    while ( hTargetEntities.m_Size > v8 );
  }
  CDOTA_Bot::SetRequestedBlink(this->m_pBot, p_m_vDesiredLocation, 4.0, *&v6);
  v9 = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v11 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v11, v9, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v11);
  hTargetEntities.m_Size = 0;
  if ( (hTargetEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargetEntities.m_Memory);
    if ( (hTargetEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargetEntities.m_Memory);
  }
}


