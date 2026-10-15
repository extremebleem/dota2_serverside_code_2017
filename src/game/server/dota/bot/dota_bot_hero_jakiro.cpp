
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Jakiro::CDOTA_Bot_Hero_Jakiro  (line 21, @0x00000000028c2e60, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "jakiro_liquid_fire"
void __fastcall CDOTA_Bot_Hero_Jakiro::CDOTA_Bot_Hero_Jakiro(
        CDOTA_Bot_Hero_Jakiro *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CC4B0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityDualBreath = CDOTA_BaseNPC::FindAbilityByName(v6, "jakiro_dual_breath", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityIcePath = CDOTA_BaseNPC::FindAbilityByName(v8, "jakiro_ice_path", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityLiquidFire = CDOTA_BaseNPC::FindAbilityByName(v10, "jakiro_liquid_fire", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityMacropyre = CDOTA_BaseNPC::FindAbilityByName(v12, "jakiro_macropyre", 1);
}


// CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::CDOTA_Bot_AbilityUsage_Jakiro_DualBreath  (line 34, @0x00000000028c2f90, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::CDOTA_Bot_AbilityUsage_Jakiro_DualBreath(
        CDOTA_Bot_AbilityUsage_Jakiro_DualBreath *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC610;
}


// CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::FindFilter  (line 41, @0x00000000028c1e50, libserver.so)  // inlines: Get, GetAggroTarget, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::FindFilter(
        CDOTA_Bot_AbilityUsage_Jakiro_DualBreath *const this,
        _DWORD *hUnit)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CEntityInstance *v9; // rax

  if ( (*hUnit + 2) > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hUnit >> 9) & 0x3F]) != 0
    && (v4 = &v3[*hUnit & 0x1FF]) != 0
    && *hUnit == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    if ( this->m_bOnlyUnitsWithTargets )
    {
      v9 = CEntityHandle::operator CEntityInstance *(&m_pInstance->m_hAggroTarget);
      if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
        return 0;
    }
  }
  else
  {
    m_pInstance = 0;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  return IsBotTargetStatusValidCore(m_pInstance, v7, 251, -1.0, this->m_pAbility);
}


// CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::GetCurrentUsageDesire  (line 56, @0x00000000028c7480, libserver.so)  // inlines: Get, GetInstance, GetMana, GetTeamNumber, GetUnit, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetLinearLocation, CDOTABaseAbility::IsOwnersGoldEnough
// strings: "end_radius"
int __fastcall CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Jakiro_DualBreath *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  int v4; // eax
  CDOTABaseAbility *m_pAbilityIcePath; // r14
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rdx
  int v11; // eax
  CEntityInstance *v13; // rax
  float v14; // r14d
  CDOTABaseAbility *m_pAbility; // rdi
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // rdi
  const Vector *v18; // r14
  CEntityInstance *v19; // rax
  CEntityInstance *v20; // rdx
  CDOTA_Bot_Hero_Jakiro *m_pBot; // r14
  CEntityInstance *v22; // rax
  int v23; // r14d
  float fTimeInFuture; // [rsp+1Ch] [rbp-44h]
  float fTimeInFuturea; // [rsp+1Ch] [rbp-44h]
  float fTimeInFutureb; // [rsp+1Ch] [rbp-44h]
  int nTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  this->m_bOnlyUnitsWithTargets = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "range", -1, 1);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "end_radius", -1, 1);
  v4 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v4 > 13 )
  {
    if ( v4 != 17 )
      goto LABEL_33;
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v13 == 0 || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
      v13 = 0;
    v14 = *&v13[44].m_iszPrivateVScripts.u.m_Id;
    if ( v14 <= (3 * (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL)) )
      goto LABEL_33;
  }
  else if ( v4 < 8 )
  {
    if ( v4 == 2 )
    {
      m_pAbilityIcePath = this->m_pBot->m_pAbilityIcePath;
      if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityIcePath) < 0
        || (*(m_pAbilityIcePath->_vptr_IHandleEntity + 245))(m_pAbilityIcePath) == 0
        || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityIcePath)
        || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityIcePath, -1) )
      {
        goto LABEL_7;
      }
      m_pBot = this->m_pBot;
      v22 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v22 == 0 || BYTE3(v22[7]._vptr_IHandleEntity) == 0 )
        v22 = 0;
      fTimeInFutureb = *&v22[44].m_iszPrivateVScripts.u.m_Id;
      v23 = (*(m_pBot->m_pAbilityIcePath->_vptr_IHandleEntity + 273))(m_pBot->m_pAbilityIcePath, 0xFFFFFFFFLL);
      if ( ((*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL) + v23) <= fTimeInFutureb )
      {
LABEL_7:
        fTimeInFuture = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
        v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v6 == 0 || (v7 = v6, BYTE3(v6[7]._vptr_IHandleEntity) == 0) )
          v7 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
        v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
          v10 = v9;
        else
          v10 = 0;
        CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
          this,
          HIBYTE(v10[7].m_CScriptComponent),
          1,
          2,
          AbsOrigin,
          LevelSpecialValue,
          fTimeInFuture,
          v3,
          &vTargetLoc,
          &nTargetCount);
        v11 = nTargetCount;
        if ( nTargetCount > 0 )
        {
          this->m_vDesiredLocation = vTargetLoc;
          return 2 * (v11 != 1) + 1;
        }
      }
    }
    goto LABEL_33;
  }
  m_pAbility = this->m_pAbility;
  this->m_bOnlyUnitsWithTargets = 1;
  fTimeInFuturea = (*(m_pAbility->_vptr_IHandleEntity + 231))(m_pAbility);
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  v18 = CBaseEntity::GetAbsOrigin(v17);
  v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
    v20 = v19;
  else
    v20 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
    this,
    HIBYTE(v20[7].m_CScriptComponent),
    2,
    2,
    v18,
    LevelSpecialValue,
    fTimeInFuturea,
    v3,
    &vTargetLoc,
    &nTargetCount);
  if ( nTargetCount > 3 )
  {
    this->m_vDesiredLocation = vTargetLoc;
    return 1;
  }
LABEL_33:
  this->m_vDesiredLocation = vec3_invalid;
  return 0;
}


// CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::UseAbility  (line 136, @0x00000000028bf1b0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::UseAbility(
        CDOTA_Bot_AbilityUsage_Jakiro_DualBreath *const this)
{
  CDOTA_Bot_Hero_Jakiro *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Jakiro_IcePath::CDOTA_Bot_AbilityUsage_Jakiro_IcePath  (line 145, @0x00000000028c2fb0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_IcePath::CDOTA_Bot_AbilityUsage_Jakiro_IcePath(
        CDOTA_Bot_AbilityUsage_Jakiro_IcePath *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC670;
}


// CDOTA_Bot_AbilityUsage_Jakiro_IcePath::FindFilter  (line 152, @0x00000000028c11f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: IsBotTargetStatusValidCore
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_Jakiro_IcePath::FindFilter(
        CDOTA_Bot_AbilityUsage_Jakiro_IcePath *const this,
        unsigned __int16 *hUnit)
{
  int v3; // edx
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Bot_Hero_Jakiro *m_pBot; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v10; // si
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CDOTA_BaseNPC *v13; // rsi

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
  return IsBotTargetStatusValidCore(m_pInstance, v13, 251, -1.0, this->m_pAbility);
}


// CDOTA_Bot_AbilityUsage_Jakiro_IcePath::GetCurrentUsageDesire  (line 161, @0x00000000028cccc0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetActiveModeDesire, GetInstance, GetTarget, GetTeamNumber, GetUnit, IsBotTargetStatusValid, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetLinearLocation, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTALocomotor::GetAverageVelocityOverTime, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath
// strings: "path_radius", "path_delay"
int __fastcall CDOTA_Bot_AbilityUsage_Jakiro_IcePath::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Jakiro_IcePath *const this)
{
  int v2; // r12d
  int LevelSpecialValue; // r13d
  int v4; // eax
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *v8; // r14
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rdx
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CDOTALocomotor *v15; // rax
  float v16; // xmm1_4
  unsigned __int64 v17; // xmm0_8
  __m128i v18; // xmm5
  __m128i v19; // xmm4
  float v20; // xmm1_4
  float v21; // r13d
  float v22; // r14d
  const Vector *v23; // rax
  vec_t v24; // xmm1_4
  vec_t v25; // xmm2_4
  CDOTA_Bot_Hero_Jakiro *m_pBot; // r14
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rdi
  CEntityInstance *v29; // rax
  const CBaseEntity *v30; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v32; // rax
  CEntityInstance *v33; // rdx
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // r12
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rsi
  CDOTALocomotor *v38; // rax
  float v39; // xmm1_4
  unsigned __int64 v40; // xmm0_8
  __m128i v41; // xmm7
  __m128i v42; // xmm6
  float v43; // xmm1_4
  float v44; // r13d
  float v45; // r14d
  const Vector *v46; // rax
  vec_t v47; // xmm1_4
  vec_t v48; // xmm2_4
  float fMaxRange; // [rsp+18h] [rbp-58h]
  float fMaxRangea; // [rsp+18h] [rbp-58h]
  float fDelaya; // [rsp+1Ch] [rbp-54h]
  float fDelay; // [rsp+1Ch] [rbp-54h]
  float fDelayb; // [rsp+1Ch] [rbp-54h]
  float fDelayc; // [rsp+1Ch] [rbp-54h]
  int nTargetCount; // [rsp+2Ch] [rbp-44h] BYREF
  int nTargetCount_0; // [rsp+30h] [rbp-40h] BYREF
  vec_t v57; // [rsp+34h] [rbp-3Ch]
  vec_t v58; // [rsp+38h] [rbp-38h]
  Vector vTargetLoc_0; // [rsp+40h] [rbp-30h] BYREF

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "path_radius", -1, 1);
  fDelaya = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "path_delay", -1, 1);
  fDelay = fDelaya + (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  v4 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v4 == 4 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] < 0.75 )
      goto LABEL_4;
    v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
      v28 = v27;
    else
      v28 = 0;
    if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v28) <= 2.0 )
      goto LABEL_4;
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v29 == 0 || (v30 = v29, BYTE3(v29[7]._vptr_IHandleEntity) == 0) )
      v30 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v30);
    v32 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
      v33 = v32;
    else
      v33 = 0;
    CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
      this,
      HIBYTE(v33[7].m_CScriptComponent),
      1,
      2,
      AbsOrigin,
      v2,
      fDelay,
      LevelSpecialValue,
      &vTargetLoc_0,
      &nTargetCount_0);
    if ( nTargetCount_0 <= 0 )
      goto LABEL_4;
    this->m_vDesiredLocation = vTargetLoc_0;
    return 3;
  }
  if ( v4 != 18 )
  {
    if ( v4 != 2 )
    {
LABEL_4:
      this->m_vDesiredLocation = vec3_invalid;
      return 0;
    }
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    v8 = CBaseEntity::GetAbsOrigin(v7);
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
      this,
      HIBYTE(v10[7].m_CScriptComponent),
      1,
      2,
      v8,
      v2,
      fDelay,
      LevelSpecialValue,
      &nTargetCount_0,
      &nTargetCount);
    if ( nTargetCount <= 1 )
    {
      LODWORD(vTargetLoc_0.x) = this->m_pBot->m_hTarget.m_Index;
      v34 = CEntityHandle::operator CEntityInstance *(&vTargetLoc_0);
      if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
        v35 = v34;
      else
        v35 = 0;
      if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v35) )
        goto LABEL_4;
      fMaxRangea = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
      v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
        v37 = v36;
      else
        v37 = 0;
      if ( !IsBotTargetStatusValidCore(v35, v37, 251, fMaxRangea, this->m_pAbility) )
        goto LABEL_4;
      v38 = (*(v35->_vptr_IHandleEntity + 376))(v35);
      v40 = CDOTALocomotor::GetAverageVelocityOverTime(v38, 2.0, v39).m128i_u64[0];
      v41 = LODWORD(fDelay);
      *&vTargetLoc_0.x = v40;
      v42 = v40;
      vTargetLoc_0.z = v43;
      *v42.m128i_i32 = *&v40 * fDelay;
      v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
      *v41.m128i_i32 = fDelay * *(&v40 + 1);
      fDelayc = v43 * fDelay;
      v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v41));
      v46 = CBaseEntity::GetAbsOrigin(v35);
      v47 = fDelayc + v46->z;
      v48 = v44 + v46->x;
      this->m_vDesiredLocation.y = v45 + v46->y;
      this->m_vDesiredLocation.z = v47;
      this->m_vDesiredLocation.x = v48;
    }
    else
    {
      LODWORD(this->m_vDesiredLocation.x) = nTargetCount_0;
      this->m_vDesiredLocation.y = v57;
      this->m_vDesiredLocation.z = v58;
    }
    return 3;
  }
  LODWORD(vTargetLoc_0.x) = this->m_pBot->m_hTarget.m_Index;
  v11 = CEntityHandle::operator CEntityInstance *(&vTargetLoc_0);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v12) )
    goto LABEL_4;
  fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  if ( !IsBotTargetStatusValidCore(v12, v14, 251, fMaxRange, this->m_pAbility) )
    goto LABEL_4;
  v15 = (*(v12->_vptr_IHandleEntity + 376))(v12);
  v17 = CDOTALocomotor::GetAverageVelocityOverTime(v15, 2.0, v16).m128i_u64[0];
  v18 = LODWORD(fDelay);
  *&vTargetLoc_0.x = v17;
  v19 = v17;
  vTargetLoc_0.z = v20;
  *v19.m128i_i32 = *&v17 * fDelay;
  v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
  *v18.m128i_i32 = fDelay * *(&v17 + 1);
  fDelayb = v20 * fDelay;
  v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
  v23 = CBaseEntity::GetAbsOrigin(v12);
  v24 = fDelayb + v23->z;
  v25 = v21 + v23->x;
  this->m_vDesiredLocation.y = v22 + v23->y;
  this->m_vDesiredLocation.z = v24;
  this->m_vDesiredLocation.x = v25;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Jakiro_IcePath::UseAbility  (line 230, @0x00000000028bf210, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_IcePath::UseAbility(CDOTA_Bot_AbilityUsage_Jakiro_IcePath *const this)
{
  CDOTA_Bot_Hero_Jakiro *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::CDOTA_Bot_AbilityUsage_Jakiro_Macropyre  (line 239, @0x00000000028c2fd0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::CDOTA_Bot_AbilityUsage_Jakiro_Macropyre(
        CDOTA_Bot_AbilityUsage_Jakiro_Macropyre *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC6D0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::FindFilter  (line 246, @0x00000000028c1100, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: IsBotTargetStatusValidCore
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::FindFilter(
        CDOTA_Bot_AbilityUsage_Jakiro_Macropyre *const this,
        unsigned __int16 *hUnit)
{
  int v3; // edx
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Bot_Hero_Jakiro *m_pBot; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v10; // si
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CDOTA_BaseNPC *v13; // rsi

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
  return IsBotTargetStatusValidCore(m_pInstance, v13, 251, -1.0, this->m_pAbility);
}


// CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::GetCurrentUsageDesire  (line 255, @0x00000000028c7840, libserver.so)  // inlines: Get, GetInstance, GetTeamNumber, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetLinearLocation
// strings: "path_radius"
int __fastcall CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Jakiro_Macropyre *const this)
{
  int v2; // eax
  int v4; // r12d
  int LevelSpecialValue; // r13d
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rdx
  float fDelay; // [rsp+1Ch] [rbp-44h]
  int nTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 != 2 && v2 != 4 )
    return 0;
  v4 = ((*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) + 200.0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "path_radius", -1, 1);
  fDelay = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
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
  CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
    this,
    HIBYTE(v10[7].m_CScriptComponent),
    1,
    2,
    AbsOrigin,
    v4,
    fDelay,
    LevelSpecialValue,
    &vTargetLoc,
    &nTargetCount);
  if ( nTargetCount <= 1 )
    return 0;
  this->m_vDesiredLocation = vTargetLoc;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::UseAbility  (line 285, @0x00000000028bf270, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::UseAbility(
        CDOTA_Bot_AbilityUsage_Jakiro_Macropyre *const this)
{
  CDOTA_Bot_Hero_Jakiro *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire::CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire  (line 294, @0x00000000028c3000, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire::CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire(
        CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CC730;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire::GetCurrentUsageDesire  (line 301, @0x00000000028befe0, libserver.so)  // inlines: GetAutoCastState
int __fastcall CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire *const this)
{
  return !this->m_pAbility->m_bAutoCastState.m_Value ? 3 : 0;
}


// CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire::UseAbility  (line 315, @0x00000000028bf4b0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire::UseAbility(
        CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire *const this)
{
  CDOTA_Bot_Hero_Jakiro *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


