
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Juggernaut::CDOTA_Bot_Hero_Juggernaut  (line 21, @0x00000000028c3050, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_Juggernaut::CDOTA_TutorialBot_Hero_Juggernaut
// strings: "juggernaut_blade_fury", "juggernaut_healing_ward", "juggernaut_blade_dance", "juggernaut_omni_slash"
void __fastcall CDOTA_Bot_Hero_Juggernaut::CDOTA_Bot_Hero_Juggernaut(
        CDOTA_Bot_Hero_Juggernaut *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CC7F0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityBladeFury = CDOTA_BaseNPC::FindAbilityByName(v6, "juggernaut_blade_fury", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityHealingWard = CDOTA_BaseNPC::FindAbilityByName(v8, "juggernaut_healing_ward", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityBladeDance = CDOTA_BaseNPC::FindAbilityByName(v10, "juggernaut_blade_dance", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityOmniSlash = CDOTA_BaseNPC::FindAbilityByName(v12, "juggernaut_omni_slash", 1);
}


// CDOTA_Bot_Hero_Juggernaut::CreateMode  (line 32, @0x00000000028bf070, libserver.so)  // inlines: CDOTA_BotMode_Attack_Juggernaut
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Juggernaut::CreateMode(CDOTA_Bot_Hero_Juggernaut *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Juggernaut (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42CC8F0;  // vptr: CDOTA_BotMode_Attack_Juggernaut
  return v4;
}


// CDOTA_Bot_Hero_Juggernaut::GetGankDistance  (line 47, @0x00000000028c14c0, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Juggernaut::GetGankDistance(CDOTA_Bot_Hero_Juggernaut *const this)
{
  CDOTABaseAbility *m_pAbilityOmniSlash; // rbx
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

  m_pAbilityOmniSlash = this->m_pAbilityOmniSlash;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityOmniSlash) >= 0
    && (*(m_pAbilityOmniSlash->_vptr_IHandleEntity + 245))(m_pAbilityOmniSlash) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityOmniSlash)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityOmniSlash, -1) )
  {
    return (*(this->m_pAbilityOmniSlash->_vptr_IHandleEntity + 226))(this->m_pAbilityOmniSlash, &vec3_origin, 0) + 200;
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


// CDOTA_Bot_Hero_Juggernaut::GetMaxRoamDistance  (line 59, @0x00000000028bff30, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Juggernaut::GetMaxRoamDistance(CDOTA_Bot_Hero_Juggernaut *const this)
{
  CDOTABaseAbility *m_pAbilityOmniSlash; // rbx

  m_pAbilityOmniSlash = this->m_pAbilityOmniSlash;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityOmniSlash) >= 0
    && (*(m_pAbilityOmniSlash->_vptr_IHandleEntity + 245))(m_pAbilityOmniSlash) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityOmniSlash)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityOmniSlash, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot_Hero_Juggernaut::DoMinionThink  (line 69, @0x00000000028c1cf0, libserver.so)  // inlines: FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, _V_strcmp, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CEntityInstance::GetEntityIndex, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot::Action_MoveTo, CDOTA_Bot::DoMinionThink
// strings: "npc_dota_juggernaut_healing_ward"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Juggernaut::DoMinionThink(CDOTA_Bot_Hero_Juggernaut *const this)
{
  __int64 v2; // rbx
  EHANDLE *p_m_hUnit; // r13
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *m_pAsString; // rdi
  CEntityIndex v11; // r15d
  CEntityInstance *v12; // rax
  const CBaseEntity *v13; // rdi
  const Vector *AbsOrigin; // rax

  if ( !this->m_bHuman && this->m_hMinions.m_Size > 0 )
  {
    v2 = 0;
    p_m_hUnit = &this->m_hUnit;
    do
    {
      v4 = &this->m_hMinions.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 <= 1
        || (v6 = v4->m_Index,
            (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F]) == 0)
        || (v8 = &v7[v6 & 0x1FF]) == 0
        || m_Index != v8->m_EHandle.m_Index
        || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) == 0 )
      {
        m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        if ( m_pAsString != 0
          && (m_pAsString == "npc_dota_juggernaut_healing_ward"
           || strcmp("npc_dota_juggernaut_healing_ward", m_pAsString) == 0) )
        {
          v11.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
          v12 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v12 == 0 || (v13 = v12, BYTE3(v12[7]._vptr_IHandleEntity) == 0) )
            v13 = 0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
          CDOTA_Bot::Action_MoveTo(this, AbsOrigin, v11);
        }
      }
      ++v2;
    }
    while ( this->m_hMinions.m_Size > v2 );
  }
  CDOTA_Bot::DoMinionThink(this);
}


// CDOTA_Bot_Hero_Juggernaut::GetOmniSlashTotalDamage  (line 88, @0x00000000028c79b0, libserver.so)  // inlines: Get, GetInstance, GetUnit, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::HasScepter
// callers: CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::GetCurrentUsageDesire
// strings: "omni_slash_damage", "omni_slash_jumps_scepter", "omni_slash_jumps"
int __fastcall CDOTA_Bot_Hero_Juggernaut::GetOmniSlashTotalDamage(CDOTA_Bot_Hero_Juggernaut *const this)
{
  int EffectiveLevel; // eax
  int v3; // edx
  int LevelSpecialValue; // r12d
  int v5; // kr00_4
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rdi
  bool HasScepter; // al
  CDOTABaseAbility *m_pAbilityOmniSlash; // rdi
  int v10; // eax

  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this->m_pAbilityOmniSlash);
  v3 = 0;
  if ( EffectiveLevel >= 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                          this->m_pAbilityOmniSlash,
                          "omni_slash_damage",
                          0,
                          1);
    v5 = LevelSpecialValue
       + CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbilityOmniSlash, "omni_slash_damage", 1, 1);
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    HasScepter = CDOTA_BaseNPC::HasScepter(v7);
    m_pAbilityOmniSlash = this->m_pAbilityOmniSlash;
    if ( HasScepter )
      v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbilityOmniSlash, "omni_slash_jumps_scepter", -1, 1);
    else
      v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbilityOmniSlash, "omni_slash_jumps", -1, 1);
    return v5 / 2 * v10;
  }
  return v3;
}


// CDOTA_BotMode_Attack_Juggernaut::Think  (line 106, @0x00000000028bf6c0, libserver.so)
// calls: CDOTA_BotMode_Attack::Think, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::SetMoveAction
// strings: "modifier_juggernaut_blade_fury"
void __fastcall CDOTA_BotMode_Attack_Juggernaut::Think(CDOTA_BotMode_Attack_Juggernaut *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  double v3; // xmm0_8
  CDOTA_Bot *m_pBot; // rdi
  vec_t v5; // xmm1_4
  Vector vLoc; // [rsp+0h] [rbp-20h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2
    && (Unit = CDOTA_BotMode::GetUnit(this),
        CDOTA_BaseNPC::FindModifierByName(Unit, "modifier_juggernaut_blade_fury", 0) != 0) )
  {
    v3 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    m_pBot = this->m_pBot;
    *&vLoc.x = v3;
    vLoc.z = v5;
    CDOTA_Bot::SetMoveAction(m_pBot, &vLoc, 1, 1);
  }
  else
  {
    CDOTA_BotMode_Attack::Think(this);
  }
}


// CDOTA_BotMode_Attack_Juggernaut::GetDesire  (line 120, @0x00000000028c13c0, libserver.so)  // inlines: Get, GetInstance, GetTargetNPC, Max<float>, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::IsBotTargetStatusValid, CDOTA_BotMode_Attack::GetDesire
// strings: "modifier_juggernaut_blade_fury", "modifier_juggernaut_omnislash"
float __fastcall CDOTA_BotMode_Attack_Juggernaut::GetDesire(CDOTA_BotMode_Attack_Juggernaut *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v3; // r12
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // rsi
  float result; // xmm0_4
  __m128 v7; // xmm0
  __m128 v8; // xmm2
  CDOTA_BaseNPC *v9; // rax

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    return CDOTA_BotMode_Attack::GetDesire(this);
  Unit = CDOTA_BotMode::GetUnit(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Unit, "modifier_juggernaut_blade_fury", 0) == 0 )
  {
    v9 = CDOTA_BotMode::GetUnit(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v9, "modifier_juggernaut_omnislash", 0) == 0 )
      return CDOTA_BotMode_Attack::GetDesire(this);
  }
  v3 = CDOTA_BotMode::GetUnit(this);
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v4 == 0 || (v5 = v4, BYTE3(v4[7]._vptr_IHandleEntity) == 0) )
    v5 = 0;
  if ( !CDOTA_BotMode::IsBotTargetStatusValid(this, v5, v3, 249, -1.0) )
    return CDOTA_BotMode_Attack::GetDesire(this);
  v7.m128_f32[0] = CDOTA_BotMode_Attack::GetDesire(this);
  v8 = _mm_cmplt_ss(0x3F400000u, v7);
  LODWORD(result) = _mm_andnot_ps(v8, 0x3F400000u).m128_u32[0] | v7.m128_i32[0] & v8.m128_i32[0];
  return result;
}


// CDOTA_BotMode_Attack_Juggernaut::CalculateDesiredLocation  (line 145, @0x00000000028c7a90, libserver.so)  // inlines: Get, GetInstance, GetTargetNPC, GetTeamNumber, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::IsBotTargetStatusValid, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_BotMode_Attack::CalculateDesiredLocation
// strings: "modifier_juggernaut_blade_fury", "blade_fury_radius"
Vector __fastcall CDOTA_BotMode_Attack_Juggernaut::CalculateDesiredLocation(
        CDOTA_BotMode_Attack_Juggernaut *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CDOTA_Bot *m_pBot; // r12
  int LevelSpecialValue; // r15d
  int v9; // r14d
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rax
  int iTargetCount; // [rsp+3Ch] [rbp-54h] BYREF
  Vector vTargetLoc; // [rsp+40h] [rbp-50h] BYREF
  Vector v18; // [rsp+50h] [rbp-40h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Unit = CDOTA_BotMode::GetUnit(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Unit, "modifier_juggernaut_blade_fury", 0) != 0 )
  {
    v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
      v4 = v3;
    else
      v4 = 0;
    v5 = CDOTA_BotMode::GetUnit(this);
    if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v4, v5, 251, -1.0) )
    {
      if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v4) <= 2.0
        || (AbsOrigin = CBaseEntity::GetAbsOrigin(v4),
            CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, AbsOrigin, 0) <= 20) )
      {
        v6 = v4;
      }
      else
      {
        v6 = CDOTA_BotMode::GetUnit(this);
      }
      v18 = *CBaseEntity::GetAbsOrigin(v6);
    }
    else
    {
      m_pBot = this->m_pBot;
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                            m_pBot[1]._vptr_CDOTA_Bot,
                            "blade_fury_radius",
                            -1,
                            1);
      v9 = (*(this->m_pBot->_vptr_CDOTA_Bot + 18))(this->m_pBot);
      v10 = CDOTA_BotMode::GetUnit(this);
      v11 = CBaseEntity::GetAbsOrigin(v10);
      v12 = CDOTA_BotMode::GetUnit(this);
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        *(m_pBot[1]._vptr_CDOTA_Bot + 97),
        v12->m_iTeamNum.m_Value,
        1,
        2,
        v11,
        v9,
        0.0,
        LevelSpecialValue,
        &vTargetLoc,
        &iTargetCount);
      v18 = vTargetLoc;
    }
  }
  else
  {
    v18 = CDOTA_BotMode_Attack::CalculateDesiredLocation(this);
  }
  *&result.x = *&v18.x;
  result.z = v18.z;
  return result;
}


// CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury  (line 181, @0x00000000028c3180, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury(
        CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC990;  // vptr: CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury
}


// CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::GetCurrentUsageDesire  (line 188, @0x00000000028ca640, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBotTargetStatus, GetDistanceToEntity, GetInstance, GetTarget, GetTargetNPC, GetUnit, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::GetNearbyCreeps, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetDistanceToEntity, CDOTA_Bot::GetRawOffensivePower, _Unwind_Resume
// strings: "modifier_juggernaut_omnislash", "blade_fury_radius"
int __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rsi
  CDOTA_Bot_Hero_Juggernaut *m_pBot; // rbx
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdi
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rdi
  int result; // eax
  CDOTA_Bot_Hero_Juggernaut *v13; // rbx
  unsigned __int8 (__fastcall *v14)(CDOTA_Bot_Hero_Juggernaut *, _QWORD); // r12
  unsigned int v15; // eax
  CDOTA_Bot_Hero_Juggernaut *v16; // rdi
  __int64 v17; // rbx
  int v18; // r15d
  const CBaseEntity *v19; // r14
  const Vector *AbsOrigin; // r12
  const Vector *v21; // rax
  const CBaseEntity *v22; // r12
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  float EstimatedTimeUntilDeath; // xmm0_4
  int LevelSpecialValue; // eax
  CDOTA_Bot_Hero_Juggernaut *v28; // rbx
  int v29; // r12d
  const CBaseEntity *v30; // r14
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // rdi
  float RawOffensivePower; // xmm0_4
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyCreeps; // [rsp+10h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 4 )
  {
    v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
      v25 = v24;
    else
      v25 = 0;
    EstimatedTimeUntilDeath = CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v25);
    result = 3;
    if ( EstimatedTimeUntilDeath < 2.0 )
      return result;
    return 0;
  }
  if ( v2 <= 4 )
  {
    if ( v2 == 2 )
    {
      v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
        v4 = v3;
      else
        v4 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4) )
      {
        m_pBot = this->m_pBot;
        v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
        if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
          v7 = v6;
        else
          v7 = 0;
        v8 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
        if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
          v9 = v8;
        else
          v9 = 0;
        if ( (GetBotTargetStatusCore(v9, v7, -1.0, this->m_pAbility) & 0xFB) == 0 )
        {
          v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v10 == 0 || (v11 = v10, BYTE3(v10[7]._vptr_IHandleEntity) == 0) )
            v11 = 0;
          if ( CDOTA_BaseNPC::FindModifierByName(v11, "modifier_juggernaut_omnislash", 0) == 0 )
          {
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                  this->m_pAbility,
                                  "blade_fury_radius",
                                  -1,
                                  1);
            v28 = this->m_pBot;
            v29 = LevelSpecialValue;
            hNearbyCreeps.m_Size = v28->m_hTarget.m_Index;
            v30 = CEntityHandle::operator CEntityInstance *(&hNearbyCreeps);
            v31 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
            if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
              v32 = v31;
            else
              v32 = 0;
            if ( CBaseEntity::GetDistanceToEntity(v32, v30) <= (v29 + 50.0) )
            {
              RawOffensivePower = CDOTA_Bot::GetRawOffensivePower(this->m_pBot);
              result = 3;
              if ( RawOffensivePower <= 1200.0 )
                return result;
            }
          }
        }
      }
    }
    return 0;
  }
  if ( (v2 - 8) > 2 )
    return 0;
  v13 = this->m_pBot;
  v14 = *(v13->_vptr_CDOTA_Bot + 10);
  v15 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
  if ( v14(v13, v15) == 0 )
    return 0;
  v16 = this->m_pBot;
  hNearbyCreeps.m_Size = 0;
  hNearbyCreeps.m_Memory.m_pMemory = 0;
  hNearbyCreeps.m_Memory.m_nAllocationCount = 0;
  hNearbyCreeps.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyCreeps(v16, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyCreeps, 0.0);
  if ( hNearbyCreeps.m_Size <= 0 )
    goto LABEL_49;
  v17 = 0;
  v18 = 0;
  do
  {
    v22 = CEntityHandle::operator CEntityInstance *(&hNearbyCreeps.m_Memory.m_pMemory[v17]);
    v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
    {
      v19 = v23;
      if ( v22 != 0 )
        goto LABEL_26;
    }
    else
    {
      v19 = 0;
      if ( v22 != 0 )
      {
LABEL_26:
        AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
        v21 = CBaseEntity::GetAbsOrigin(v19);
        if ( fsqrt(
               (((v21->x - AbsOrigin->x) * (v21->x - AbsOrigin->x)) + ((v21->y - AbsOrigin->y) * (v21->y - AbsOrigin->y)))
             + ((v21->z - AbsOrigin->z) * (v21->z - AbsOrigin->z))) >= 400.0 )
          goto LABEL_27;
      }
    }
    ++v18;
LABEL_27:
    ++v17;
  }
  while ( hNearbyCreeps.m_Size > v17 );
  if ( v18 > 3 )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
    return 2;
  }
LABEL_49:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
  return 0;
}


// CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::UseAbility  (line 257, @0x00000000028bf510, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::UseAbility(
        CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury *const this)
{
  CDOTA_Bot_Hero_Juggernaut *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard  (line 266, @0x00000000028c31a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard(
        CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC9F0;  // vptr: CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard
}


// CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::GetCurrentUsageDesire  (line 273, @0x00000000028c7c70, libserver.so)  // inlines: Get, GetBotByIndex, GetInstance, GetUnit, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::IsFullyCastable, CEntityHandle::operator CEntityInstance*, IsValidAlliedTarget, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetHealthEstimate, CDOTA_BaseNPC::IsInRangeOfFountain
// strings: "healing_ward_aura_radius", "healing_ward_heal_amount"
int __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard *const this)
{
  int v2; // eax
  int LevelSpecialValue; // r15d
  __int64 v4; // r12
  int v5; // eax
  CDOTA_Bot_Hero_Juggernaut *m_pBot; // r14
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  const CEntityHandle *v8; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rbx
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  double v13; // xmm0_8
  CEntityInstance *v14; // rax
  float v15; // xmm1_4
  int result; // eax
  int v17; // r14d
  int v18; // r14d
  float v19; // xmm0_4
  int v20; // edx
  CEntityInstance *v21; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rdi
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  int iHealingWardMana; // [rsp+8h] [rbp-48h]
  int iOmniSlashMana; // [rsp+Ch] [rbp-44h]
  int iBladeFuryMana; // [rsp+10h] [rbp-40h]
  int iHelpfulHeals; // [rsp+14h] [rbp-3Ch]
  int iHealPercent; // [rsp+18h] [rbp-38h]
  int v31; // [rsp+1Ch] [rbp-34h]

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 4 )
  {
    v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
      v23 = v21;
    else
      v23 = 0;
    if ( CDOTA_BaseNPC::GetHealthEstimate(v23, v22) > 0 )
    {
      v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
        v25 = v24;
      else
        v25 = 0;
      if ( !CDOTA_BaseNPC::IsInRangeOfFountain(v25) )
        return 1;
    }
    return 0;
  }
  if ( v2 > 4 )
  {
    if ( (v2 - 8) > 5 )
      return 0;
  }
  else if ( v2 != 1 )
  {
    return 0;
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                        this->m_pAbility,
                        "healing_ward_aura_radius",
                        -1,
                        1);
  iHealPercent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "healing_ward_heal_amount", -1, 1);
  iBladeFuryMana = 0;
  if ( CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityBladeFury) )
    iBladeFuryMana = (*(this->m_pBot->m_pAbilityBladeFury->_vptr_IHandleEntity + 273))(
                       this->m_pBot->m_pAbilityBladeFury,
                       0xFFFFFFFFLL);
  iOmniSlashMana = 0;
  if ( CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityOmniSlash) )
    iOmniSlashMana = (*(this->m_pBot->m_pAbilityOmniSlash->_vptr_IHandleEntity + 273))(
                       this->m_pBot->m_pAbilityOmniSlash,
                       0xFFFFFFFFLL);
  v4 = 0;
  v5 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
  m_pBot = this->m_pBot;
  iHelpfulHeals = 0;
  iHealingWardMana = v5;
  m_pTeamCommander = m_pBot->m_pTeamCommander;
  if ( m_pTeamCommander->m_BotList.m_Size <= 0 )
    return 0;
  do
  {
    v8 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v4];
    if ( v8 == 0 )
      goto LABEL_17;
    v9 = CEntityHandle::operator CEntityInstance *(v8 + 39);
    if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 || (v10 = v9, (v9[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
      v10 = 0;
    v11 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    *&v13 = COERCE_UNSIGNED_INT(LevelSpecialValue);
    if ( v11 != 0 && v11->m_bIsDOTANPC )
    {
      if ( IsValidAlliedTarget(v10, v11, v13, v12) )
        goto LABEL_29;
    }
    else if ( IsValidAlliedTarget(v10, 0, v13, v12) )
    {
LABEL_29:
      v31 = (*(v10->_vptr_IHandleEntity + 156))(v10);
      v17 = (*(v10->_vptr_IHandleEntity + 156))(v10);
      v18 = v17 - CBaseEntity::GetHealth(v10);
      v19 = (*(v10->_vptr_IHandleEntity + 430))(v10) * 25.0;
      v20 = v31 * iHealPercent + 3;
      if ( v31 * iHealPercent >= 0 )
        v20 = v31 * iHealPercent;
      if ( v18 > (v19 + (v20 >> 2)) / 2 )
        ++iHelpfulHeals;
    }
    m_pBot = this->m_pBot;
LABEL_17:
    m_pTeamCommander = m_pBot->m_pTeamCommander;
    ++v4;
  }
  while ( v4 < m_pTeamCommander->m_BotList.m_Size );
  if ( iHelpfulHeals <= 1 )
    return 0;
  v14 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
    v14 = 0;
  v15 = *&v14[44].m_iszPrivateVScripts.u.m_Id;
  result = 2;
  if ( v15 <= (iHealingWardMana + iOmniSlashMana + iBladeFuryMana) )
    return 0;
  return result;
}


// CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::UseAbility  (line 341, @0x00000000028c12e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::UseAbility(
        CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard *const this)
{
  CDOTA_Bot_Hero_Juggernaut *m_pBot; // r12
  CDOTABaseAbility *m_pAbility; // r14
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // r15
  CDOTA_BotAction_UseAbility *v9; // r13

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[m_pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v9 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, m_pBot, m_pAbility, AbsOrigin);
  CDOTA_Bot::PushAction(this->m_pBot, v9);
}


// CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash  (line 350, @0x00000000028c31c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash(
        CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CCA50;  // vptr: CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::GetCurrentUsageDesire  (line 357, @0x00000000028cf8d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, GrowMemory, IndexToIdentity, IsConsideredHero, IsValid, Length, Length2DSqr, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator bool, operator-, operator->, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CDOTA_Bot_Hero_Juggernaut::GetOmniSlashTotalDamage, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "omni_slash_radius"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash *const this)
{
  CDOTA_Bot_Hero_Juggernaut *m_pBot; // rax
  __m128i v3; // xmm0
  int v4; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  CDOTA_Bot_Hero_Juggernaut *v7; // r12
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // r13
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rdi
  CDOTA_Bot_Hero_Juggernaut *v12; // r13
  CEntityInstance *v13; // rax
  const CBaseEntity *v14; // r12
  CEntityInstance *v15; // rax
  const CBaseEntity *v16; // r13
  const Vector *AbsOrigin; // r12
  const Vector *v18; // rax
  float v20; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v22; // eax
  __int16 v23; // cx
  int LevelSpecialValue; // eax
  int v25; // r12d
  int v26; // r15d
  CDOTA_Bot_Hero_Juggernaut *v27; // rax
  __m128i v28; // xmm3
  uint32 m_Index; // r14d
  float v30; // r12d
  CEntityInstance *v31; // rax
  CDOTA_BaseNPC *v32; // r13
  const CBaseEntity *v33; // rax
  const Vector *v34; // r14
  CEntityInstance *v35; // rax
  int v36; // r15d
  __int64 v37; // r12
  __int64 v38; // r13
  CHandle<CBaseEntity> *v39; // rdx
  uint32 v40; // eax
  __int16 v41; // cx
  CEntityIdentity *v42; // rdx
  CEntityIdentity *v43; // rdx
  const CBaseEntity *v44; // rax
  const Vector *v45; // r14
  const CBaseEntity *v46; // rax
  const Vector *v47; // rax
  __int64 m_Size; // r14
  CHandle<CBaseEntity> *v49; // r13
  int v50; // eax
  CHandle<CBaseEntity> *v51; // rax
  int OmniSlashTotalDamage; // eax
  int v53; // ecx
  __int64 v54; // r13
  int v55; // r12d
  int v56; // r14d
  int v57; // r15d
  const CBaseEntity *v58; // rax
  int Health; // eax
  int v60; // r15d
  __int64 v61; // r12
  int v62; // r13d
  CDOTA_BaseNPC *v63; // rsi
  CEntityInstance *v64; // rax
  CDOTA_BaseNPC *v65; // r14
  CEntityInstance *v66; // rax
  int v67; // eax
  CHandle<CBaseEntity> *m_pMemory; // rdi
  int v69; // r12d
  CHandle<CBaseEntity> *v70; // r14
  CHandle<CBaseEntity> *v71; // r13
  CEntityInstance *v72; // rax
  float v73; // [rsp+30h] [rbp-90h]
  CDOTA_Bot_Hero_Juggernaut *v74; // [rsp+38h] [rbp-88h]
  int v75; // [rsp+38h] [rbp-88h]
  CEntityHandle v76; // [rsp+40h] [rbp-80h] BYREF
  float fChannelTimeRemaining; // [rsp+44h] [rbp-7Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+48h] [rbp-78h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hFirstJumpEntities; // [rsp+70h] [rbp-50h] BYREF

  pChannelTarget = 0;
  m_pBot = this->m_pBot;
  fChannelTimeRemaining = 0.0;
  v74 = m_pBot;
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  *v3.m128i_i32 = v4 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v3, &pChannelTarget, &fChannelTimeRemaining) == 0
    || SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) < 0
    || (v20 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining <= v20) )
  {
    if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
      goto LABEL_24;
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v6) )
      goto LABEL_24;
    v7 = this->m_pBot;
    v8 = CEntityHandle::operator CEntityInstance *(&v7->m_hUnit);
    if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
      v9 = v8;
    else
      v9 = 0;
    v10 = CEntityHandle::operator CEntityInstance *(&v7->m_hTarget);
    if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      v11 = v10;
    else
      v11 = 0;
    if ( (GetBotTargetStatusCore(v11, v9, -1.0, this->m_pAbility) & 0xFB) != 0 )
      goto LABEL_24;
    v12 = this->m_pBot;
    v13 = CEntityHandle::operator CEntityInstance *(&v12->m_hUnit);
    if ( v13 == 0 || (v14 = v13, BYTE3(v13[7]._vptr_IHandleEntity) == 0) )
      v14 = 0;
    v15 = CEntityHandle::operator CEntityInstance *(&v12->m_hTarget);
    if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
      v16 = v15;
    else
      v16 = 0;
    if ( v14 != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
      v18 = CBaseEntity::GetAbsOrigin(v16);
      v73 = fsqrt(
              (((v18->x - AbsOrigin->x) * (v18->x - AbsOrigin->x)) + ((v18->y - AbsOrigin->y) * (v18->y - AbsOrigin->y)))
            + ((v18->z - AbsOrigin->z) * (v18->z - AbsOrigin->z)));
    }
    else
    {
      v73 = -1.0;
    }
    if ( (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) <= v73 )
      goto LABEL_24;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "omni_slash_radius", -1, 1);
    hEntities.m_Size = 0;
    v25 = 2 * LevelSpecialValue;
    v26 = LevelSpecialValue;
    v27 = this->m_pBot;
    *v28.m128i_i32 = v25;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    m_Index = v27->m_hTarget.m_Index;
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
    hFirstJumpEntities.m_Size = m_Index;
    v31 = CEntityHandle::operator CEntityInstance *(&hFirstJumpEntities);
    if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
      v32 = v31;
    else
      v32 = 0;
    v76.m_Index = m_Index;
    v33 = CEntityHandle::operator CEntityInstance *(&v76);
    v34 = CBaseEntity::GetAbsOrigin(v33);
    v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v35 == 0 || BYTE3(v35[7]._vptr_IHandleEntity) == 0 )
      v35 = 0;
    FindUnitsInRadius(HIBYTE(v35[7].m_CScriptComponent), v34, v32, v30, &hEntities, 2, 3, 128, 0, 0);
    hFirstJumpEntities.m_Size = 0;
    hFirstJumpEntities.m_Memory.m_pMemory = 0;
    hFirstJumpEntities.m_Memory.m_nAllocationCount = 0;
    hFirstJumpEntities.m_Memory.m_nGrowSize = 0;
    if ( hEntities.m_Size > 0 )
    {
      v36 = v26 * v26;
      v37 = 0;
      do
      {
        v38 = v37;
        v39 = &hEntities.m_Memory.m_pMemory[v37];
        v40 = v39->m_Index;
        if ( v39->m_Index + 2 > 1 )
        {
          v41 = v39->m_Index;
          v42 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v39->m_Index) >> 9) & 0x3F];
          if ( v42 != 0 )
          {
            v43 = &v42[v41 & 0x1FF];
            if ( v43 != 0 && v40 == v43->m_EHandle.m_Index )
            {
              v76.m_Index = this->m_pBot->m_hTarget.m_Index;
              v44 = CEntityHandle::operator CEntityInstance *(&v76);
              v45 = CBaseEntity::GetAbsOrigin(v44);
              v46 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v38]);
              v47 = CBaseEntity::GetAbsOrigin(v46);
              if ( v36 > (((v47->x - v45->x) * (v47->x - v45->x)) + ((v47->y - v45->y) * (v47->y - v45->y))) )
              {
                m_Size = hFirstJumpEntities.m_Size;
                v49 = &hEntities.m_Memory.m_pMemory[v38];
                v50 = hFirstJumpEntities.m_Size;
                if ( hFirstJumpEntities.m_Size == hFirstJumpEntities.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hFirstJumpEntities.m_Memory, 1);
                  v50 = hFirstJumpEntities.m_Size;
                }
                hFirstJumpEntities.m_Size = v50 + 1;
                v51 = &hFirstJumpEntities.m_Memory.m_pMemory[m_Size];
                if ( v51 != 0 )
                  v51->m_Index = v49->m_Index;
              }
            }
          }
        }
        ++v37;
      }
      while ( hEntities.m_Size > v37 );
    }
    OmniSlashTotalDamage = CDOTA_Bot_Hero_Juggernaut::GetOmniSlashTotalDamage(v74);
    v53 = hFirstJumpEntities.m_Size;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = OmniSlashTotalDamage;
    if ( hFirstJumpEntities.m_Size <= 0 )
    {
      v56 = 0;
    }
    else
    {
      do
      {
        v58 = CEntityHandle::operator CEntityInstance *(&hFirstJumpEntities.m_Memory.m_pMemory[v54]);
        Health = CBaseEntity::GetHealth(v58);
        v53 = hFirstJumpEntities.m_Size;
        ++v55;
        v56 += Health;
        ++v54;
      }
      while ( hFirstJumpEntities.m_Size > v55 );
    }
    if ( v56 >= v57 )
    {
      v60 = v57 / v53;
      if ( hFirstJumpEntities.m_Size <= 0 )
      {
LABEL_76:
        if ( hEntities.m_Size > 0 )
        {
          m_pMemory = hEntities.m_Memory.m_pMemory;
          v69 = 0;
          v70 = hEntities.m_Memory.m_pMemory + 1;
          v71 = &hEntities.m_Memory.m_pMemory[hEntities.m_Size - 1 + 1];
          while ( 1 )
          {
            v72 = CEntityHandle::operator CEntityInstance *(m_pMemory);
            if ( v72 == 0 || BYTE3(v72[7]._vptr_IHandleEntity) == 0 || (v72[43].m_iszPrivateVScripts.u.m_Id & 3) == 0 )
              ++v69;
            m_pMemory = v70;
            if ( v70 == v71 )
              break;
            ++v70;
          }
          if ( v69 != 0 )
          {
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hFirstJumpEntities);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_24:
            this->m_hDesiredTarget.m_Index = -1;
            return 0;
          }
        }
        this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
        v67 = 2;
LABEL_74:
        v75 = v67;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hFirstJumpEntities);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
        return v75;
      }
      v61 = 0;
      v62 = 0;
      while ( 1 )
      {
        v64 = CEntityHandle::operator CEntityInstance *(&hFirstJumpEntities.m_Memory.m_pMemory[v61]);
        if ( v64 == 0
          || BYTE3(v64[7]._vptr_IHandleEntity) == 0
          || (v65 = v64, (v64[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
        {
          v65 = 0;
        }
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v65) )
        {
          v66 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v66 != 0 && BYTE3(v66[7]._vptr_IHandleEntity) != 0 )
            v63 = v66;
          else
            v63 = 0;
          if ( (GetBotTargetStatusCore(v65, v63, -1.0, this->m_pAbility) & 0xFB) == 0
            && v60 > CBaseEntity::GetHealth(v65) )
          {
            break;
          }
        }
        ++v62;
        ++v61;
        if ( hFirstJumpEntities.m_Size <= v62 )
          goto LABEL_76;
      }
    }
    this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
    v67 = 3;
    goto LABEL_74;
  }
  if ( pChannelTarget != 0 && (m_pEntity = pChannelTarget->m_pEntity) != 0 )
  {
    v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v23 = 0x7FFF;
    else
      v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v23 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v22 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::UseAbility  (line 459, @0x00000000028c0ae0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::UseAbility(
        CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Juggernaut *m_pBot; // r14
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


// CDOTA_TutorialBot_Hero_Juggernaut::CDOTA_TutorialBot_Hero_Juggernaut  (line 480, @0x00000000028c31f0, libserver.so)
// calls: CDOTA_Bot_Hero_Juggernaut::CDOTA_Bot_Hero_Juggernaut
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_Juggernaut::CDOTA_TutorialBot_Hero_Juggernaut(
        CDOTA_TutorialBot_Hero_Juggernaut *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_Juggernaut::CDOTA_Bot_Hero_Juggernaut(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42CCAB0;
}


// CDOTA_TutorialBot_Hero_Juggernaut::Think  (line 490, @0x00000000028c0020, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::Think
void __fastcall CDOTA_TutorialBot_Hero_Juggernaut::Think(CDOTA_TutorialBot_Hero_Juggernaut *const this)
{
  CDOTA_BaseNPC_Hero *OwningHero; // r15
  CEntityIndex v3; // r12d
  CBasePlayer *v4; // rax
  CBasePlayer *v5; // rbx
  unsigned __int16 v6; // dx
  int v7; // esi
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rsi

  if ( dota_tutorial_see_enemy.m_pParent->m_Value.m_nValue == 0 )
  {
LABEL_23:
    this->m_bHasSeenEnemy = 1;
    goto LABEL_24;
  }
  if ( this->m_bHasSeenEnemy )
    goto LABEL_24;
  OwningHero = CDOTA_Bot::GetOwningHero(this);
  if ( OwningHero != 0 && gpGlobals->maxClients > 0 )
  {
    v3.m_Data = 1;
    while ( 1 )
    {
      v4 = UTIL_PlayerByIndex(v3);
      v5 = v4;
      if ( v4 != 0
        && (*(v4->_vptr_IHandleEntity + 140))(v4) != 0
        && (*(v5->_vptr_IHandleEntity + 391))(v5) == 0
        && !v5->m_pl.hltv )
      {
        break;
      }
      if ( gpGlobals->maxClients < ++v3.m_Data )
        goto LABEL_11;
    }
    if ( v5[1].m_iMaxHealth.m_Value == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = v5[1].m_iMaxHealth.m_Value & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5[1].m_iMaxHealth.m_Value >> 15 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(OwningHero, m_pInstance) )
          {
            goto LABEL_23;
          }
        }
      }
    }
  }
LABEL_11:
  if ( this->m_bHasSeenEnemy )
LABEL_24:
    CDOTA_Bot::Think(this);
}


