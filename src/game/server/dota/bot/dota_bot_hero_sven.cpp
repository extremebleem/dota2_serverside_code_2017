
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Sven::CDOTA_Bot_Hero_Sven  (line 21, @0x00000000028e6a50, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "sven_storm_bolt"
void __fastcall CDOTA_Bot_Hero_Sven::CDOTA_Bot_Hero_Sven(
        CDOTA_Bot_Hero_Sven *const this,
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
  this->_vptr_CDOTA_Bot = &off_42D0FF0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityStormBolt = CDOTA_BaseNPC::FindAbilityByName(v6, "sven_storm_bolt", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityGreatCleave = CDOTA_BaseNPC::FindAbilityByName(v8, "sven_great_cleave", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityWarcry = CDOTA_BaseNPC::FindAbilityByName(v10, "sven_warcry", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityGodsStrength = CDOTA_BaseNPC::FindAbilityByName(v12, "sven_gods_strength", 1);
}


// CDOTA_Bot_Hero_Sven::CreateMode  (line 32, @0x00000000028e2100, libserver.so)  // inlines: CDOTA_BotMode_Attack_Sven
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Sven::CreateMode(CDOTA_Bot_Hero_Sven *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42D10F0;
  return v4;
}


// CDOTA_Bot_Hero_Sven::GetGankDistance  (line 47, @0x00000000028e3390, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetGankDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Sven::GetGankDistance(CDOTA_Bot_Hero_Sven *const this)
{
  CDOTABaseAbility *m_pAbilityStormBolt; // rbx

  m_pAbilityStormBolt = this->m_pAbilityStormBolt;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityStormBolt) >= 0
    && (*(m_pAbilityStormBolt->_vptr_IHandleEntity + 245))(m_pAbilityStormBolt) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityStormBolt)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityStormBolt, -1) )
  {
    return (*(this->m_pAbilityStormBolt->_vptr_IHandleEntity + 226))(this->m_pAbilityStormBolt, &vec3_origin, 0) + 200;
  }
  else
  {
    return CDOTA_Bot::GetGankDistance(this);
  }
}


// CDOTA_Bot_Hero_Sven::GetMaxRoamDistance  (line 59, @0x00000000028e31c0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Sven::GetMaxRoamDistance(CDOTA_Bot_Hero_Sven *const this)
{
  CDOTABaseAbility *m_pAbilityStormBolt; // rbx

  m_pAbilityStormBolt = this->m_pAbilityStormBolt;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityStormBolt) >= 0
    && (*(m_pAbilityStormBolt->_vptr_IHandleEntity + 245))(m_pAbilityStormBolt) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityStormBolt)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityStormBolt, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot_Hero_Sven::GetCleavePercent  (line 69, @0x00000000028eafa0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetCleavePercent
// strings: "great_cleave_damage"
float __fastcall CDOTA_Bot_Hero_Sven::GetCleavePercent(CDOTA_Bot_Hero_Sven *const this)
{
  int LevelSpecialValue; // r12d

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                        this->m_pAbilityGreatCleave,
                        "great_cleave_damage",
                        -1,
                        1);
  return (LevelSpecialValue / 100.0) + CDOTA_Bot::GetCleavePercent(this);
}


// CDOTA_BotMode_Attack_Sven::GetDesire  (line 80, @0x00000000028e4920, libserver.so)  // inlines: Get, GetInstance, GetTargetNPC, Max<float>, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetBotTargetStatus, CDOTA_BaseNPC::FindModifierByName, CDOTA_BotMode_Attack::GetDesire, CDOTABaseAbility::GetCooldownTimeRemaining
// strings: "modifier_stunned"
float __fastcall CDOTA_BotMode_Attack_Sven::GetDesire(CDOTA_BotMode_Attack_Sven *const this)
{
  CDOTA_Bot *m_pBot; // r12
  CDOTA_BaseNPC *Unit; // r13
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // rsi
  CDOTA_BaseNPC *v6; // rax
  float result; // xmm0_4
  __m128i v8; // xmm0

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 2 )
    return CDOTA_BotMode_Attack::GetDesire(this);
  Unit = CDOTA_BotMode::GetUnit(this);
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  if ( (CDOTA_BotMode::GetBotTargetStatus(this, v5, Unit, -1.0) & 0xF9) != 0
    || (*(*m_pBot[1]._vptr_CDOTA_Bot + 245))(m_pBot[1]._vptr_CDOTA_Bot) != 0
    || (*v8.m128i_i64 = (*(*m_pBot[1]._vptr_CDOTA_Bot + 242))(m_pBot[1]._vptr_CDOTA_Bot, 0xFFFFFFFFLL),
        (COERCE_FLOAT(_mm_cvtsi128_si32(v8)) - CDOTABaseAbility::GetCooldownTimeRemaining(m_pBot[1]._vptr_CDOTA_Bot)) >= 2.0) )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v6 == 0 || !v6->m_bIsDOTANPC || CDOTA_BaseNPC::FindModifierByName(v6, "modifier_stunned", 0) == 0 )
      return CDOTA_BotMode_Attack::GetDesire(this);
  }
  result = CDOTA_BotMode_Attack::GetDesire(this);
  if ( result <= 0.75 )
    return 0.75;
  return result;
}


// CDOTA_Bot_AbilityUsage_Sven_StormBolt::CDOTA_Bot_AbilityUsage_Sven_StormBolt  (line 114, @0x00000000028e6b80, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Sven_StormBolt::CDOTA_Bot_AbilityUsage_Sven_StormBolt(
        CDOTA_Bot_AbilityUsage_Sven_StormBolt *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1190;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Sven_StormBolt::GetCurrentUsageDesire  (line 121, @0x00000000028eab00, libserver.so)
// calls: CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::GetGenericStunDesire
int __fastcall CDOTA_Bot_AbilityUsage_Sven_StormBolt::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Sven_StormBolt *const this)
{
  return CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>::GetGenericStunDesire(
           this,
           1,
           &this->m_hDesiredTarget,
           0.0);
}


// CDOTA_Bot_AbilityUsage_Sven_StormBolt::UseAbility  (line 128, @0x00000000028e4550, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Sven_StormBolt::UseAbility(CDOTA_Bot_AbilityUsage_Sven_StormBolt *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_Sven *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v9; // r13

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, v5->m_pInstance, 2.0, v1);
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v9 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v9);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_Sven_Warcry::CDOTA_Bot_AbilityUsage_Sven_Warcry  (line 142, @0x00000000028e6bb0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Sven_Warcry::CDOTA_Bot_AbilityUsage_Sven_Warcry(
        CDOTA_Bot_AbilityUsage_Sven_Warcry *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D11F0;
}


// CDOTA_Bot_AbilityUsage_Sven_Warcry::GetCurrentUsageDesire  (line 149, @0x00000000028e56c0, libserver.so)  // inlines: Element, FastSqrt, Get, GetAction, GetActiveModeDesire, GetDestination, GetDistanceToEntity, GetInstance, GetManaPercent, GetTargetNPC, GetUnit, Length, Length2D, ToDOTABaseNPC, ToDOTABotActionMoveTo, Top, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_BaseNPC::GetHealthEstimate, CDOTABaseAbility::IsFullyCastable, CBaseEntity::GetAbsOrigin
// globals: jpt_28E56F8
int __fastcall CDOTA_Bot_AbilityUsage_Sven_Warcry::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Sven_Warcry *const this)
{
  CDOTA_Bot_Hero_Sven *m_pBot; // r12
  CEntityInstance *v3; // rax
  int m_Size; // eax
  float *v5; // r12
  __int64 v6; // rax
  CDOTA_Bot_Hero_Sven *v7; // r12
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdi
  CEntityInstance *v10; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rdi
  CDOTA_Bot_Hero_Sven *v13; // r12
  CEntityInstance *v14; // rax
  CDOTA_Bot_Hero_Sven *v15; // r12
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // rbx
  const CBaseEntity *v18; // rax
  const Vector *v19; // r12
  const Vector *v20; // rax
  CEntityInstance *v21; // rax
  const CBaseEntity *v22; // rdi
  const Vector *AbsOrigin; // rax
  float v25; // [rsp+8h] [rbp-18h]
  float v26; // [rsp+Ch] [rbp-14h]

  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
    case 5u:
    case 6u:
      m_pBot = this->m_pBot;
      v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
        v3 = 0;
      if ( ((100.0 * *&v3[44].m_iszPrivateVScripts.u.m_Id) / *&v3[44].m_worldGroupId.m_nHashCode) <= 90 )
        goto LABEL_9;
      m_Size = m_pBot->m_ActionStack.m_Size;
      if ( m_Size <= 0 )
        goto LABEL_9;
      v5 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
      if ( v5 == 0 || (*(*v5 + 16LL))(v5) != 2 )
        goto LABEL_9;
      v25 = v5[18];
      v26 = v5[19];
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
      return fsqrt(((AbsOrigin->x - v25) * (AbsOrigin->x - v25)) + ((AbsOrigin->y - v26) * (AbsOrigin->y - v26))) > 1500.0;
    case 2u:
      v13 = this->m_pBot;
      v14 = CEntityHandle::operator CEntityInstance *(&v13->m_hTarget);
      if ( (v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 || SLOBYTE(v14[43].m_iszPrivateVScripts.u.m_Id) >= 0)
        && !CDOTABaseAbility::IsFullyCastable(v13->m_pAbilityStormBolt) )
      {
        v15 = this->m_pBot;
        v16 = CEntityHandle::operator CEntityInstance *(&v15->m_hTarget);
        v17 = v16;
        if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
        {
          v18 = CEntityHandle::operator CEntityInstance *(&v15->m_hUnit);
          if ( v18 != 0 && v18->m_bIsDOTANPC )
          {
            v19 = CBaseEntity::GetAbsOrigin(v18);
            v20 = CBaseEntity::GetAbsOrigin(v17);
            if ( fsqrt(
                   (((v20->x - v19->x) * (v20->x - v19->x)) + ((v20->y - v19->y) * (v20->y - v19->y)))
                 + ((v20->z - v19->z) * (v20->z - v19->z))) > 500.0 )
              goto LABEL_19;
          }
        }
      }
      goto LABEL_9;
    case 4u:
      v7 = this->m_pBot;
      if ( v7->m_fModeDesires[(*(v7->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v7->m_pActiveBotMode)] < 0.75 )
        goto LABEL_9;
      v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
        v9 = v8;
      else
        v9 = 0;
      if ( CDOTA_BaseNPC::IsInRangeOfFountain(v9) )
        goto LABEL_9;
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        v12 = v10;
      else
        v12 = 0;
      if ( CDOTA_BaseNPC::GetHealthEstimate(v12, v11) <= 0 )
        goto LABEL_9;
LABEL_19:
      LODWORD(v6) = 1;
      break;
    default:
LABEL_9:
      LODWORD(v6) = 0;
      break;
  }
  return v6;
}


// CDOTA_Bot_AbilityUsage_Sven_Warcry::UseAbility  (line 217, @0x00000000028e2460, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Sven_Warcry::UseAbility(CDOTA_Bot_AbilityUsage_Sven_Warcry *const this)
{
  CDOTA_Bot_Hero_Sven *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Sven_GodsStrength::CDOTA_Bot_AbilityUsage_Sven_GodsStrength  (line 226, @0x00000000028e6bd0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Sven_GodsStrength::CDOTA_Bot_AbilityUsage_Sven_GodsStrength(
        CDOTA_Bot_AbilityUsage_Sven_GodsStrength *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1250;
}


// CDOTA_Bot_AbilityUsage_Sven_GodsStrength::GetCurrentUsageDesire  (line 233, @0x00000000028e4e40, libserver.so)  // inlines: Get, GetInstance, GetMana, GetTargetNPC, GetUnit, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_AbilityUsage_Sven_GodsStrength::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Sven_GodsStrength *const this)
{
  CDOTA_Bot_Hero_Sven *m_pBot; // r12
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rdx
  int result; // eax
  CDOTABaseAbility *m_pAbilityStormBolt; // r12
  CDOTA_Bot_Hero_Sven *v7; // r12
  CEntityInstance *v8; // rax
  int v9; // r12d
  int v10; // r12d
  float v11; // [rsp+Ch] [rbp-14h]

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    return 0;
  m_pBot = this->m_pBot;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v4 = v3;
  if ( v3 == 0
    || BYTE3(v3[7]._vptr_IHandleEntity) == 0
    || (result = 0, SLOBYTE(v4[43].m_iszPrivateVScripts.u.m_Id) >= 0) )
  {
    m_pAbilityStormBolt = m_pBot->m_pAbilityStormBolt;
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityStormBolt) < 0
      || (*(m_pAbilityStormBolt->_vptr_IHandleEntity + 245))(m_pAbilityStormBolt) == 0
      || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityStormBolt)
      || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityStormBolt, -1) )
    {
      return 0;
    }
    v7 = this->m_pBot;
    v8 = CEntityHandle::operator CEntityInstance *(&v7->m_hUnit);
    if ( v8 == 0 || BYTE3(v8[7]._vptr_IHandleEntity) == 0 )
      v8 = 0;
    v11 = *&v8[44].m_iszPrivateVScripts.u.m_Id;
    v9 = (*(v7->m_pAbilityStormBolt->_vptr_IHandleEntity + 273))(v7->m_pAbilityStormBolt, 0xFFFFFFFFLL);
    v10 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL) + v9;
    result = 3;
    if ( v11 <= v10 )
      return 0;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Sven_GodsStrength::UseAbility  (line 257, @0x00000000028e24c0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Sven_GodsStrength::UseAbility(
        CDOTA_Bot_AbilityUsage_Sven_GodsStrength *const this)
{
  CDOTA_Bot_Hero_Sven *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


