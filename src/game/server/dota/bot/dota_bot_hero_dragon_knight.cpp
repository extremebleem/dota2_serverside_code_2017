
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_DragonKnight::CDOTA_Bot_Hero_DragonKnight  (line 21, @0x00000000028b7840, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_DragonKnight::CDOTA_TutorialBot_Hero_DragonKnight
// strings: "dragon_knight_breathe_fire", "dragon_knight_dragon_tail", "dragon_knight_elder_dragon_form"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_DragonKnight::CDOTA_Bot_Hero_DragonKnight(
        CDOTA_Bot_Hero_DragonKnight *const this,
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
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CB550;
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
  this->m_pAbilityBreatheFire = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "dragon_knight_breathe_fire", 1);
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
  this->m_pAbilityDragonTail = CDOTA_BaseNPC::FindAbilityByName(v12, "dragon_knight_dragon_tail", 1);
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  this->m_pAbilityElderDragonForm = CDOTA_BaseNPC::FindAbilityByName(v14, "dragon_knight_elder_dragon_form", 1);
}


// CDOTA_Bot_Hero_DragonKnight::GetAggressionFactor  (line 31, @0x00000000028b4e30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::GetAggressionFactor
// strings: "modifier_dragon_knight_dragon_form"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Hero_DragonKnight::GetAggressionFactor(CDOTA_Bot_Hero_DragonKnight *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // r12
  float AggressionFactor; // xmm0_4

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_dragon_knight_dragon_form", 0);
  AggressionFactor = CDOTA_Bot::GetAggressionFactor(this);
  if ( ModifierByName != 0 )
    return AggressionFactor * 1.2;
  else
    return AggressionFactor * 1.0;
}


// CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire  (line 42, @0x00000000028b79c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire(
        CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB650;
}


// CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::FindFilter  (line 49, @0x00000000028b4fb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::FindFilter(
        CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire *const this,
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


// CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::GetCurrentUsageDesire  (line 71, @0x00000000028bac30, libserver.so)  // inlines: Get, GetInstance, GetTargetNPC, GetTeamNumber, GetUnit, IsBotTargetStatusValid, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
// strings: "end_radius"
int __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire *const this)
{
  int v2; // r13d
  int LevelSpecialValue; // r14d
  int v4; // eax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Bot_Hero_DragonKnight *v6; // r15
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rsi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  int v13; // r15d
  CEntityInstance *v14; // rax
  const CBaseEntity *v15; // rdi
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // rdi
  CDOTALocomotor *v18; // rax
  float v19; // xmm1_4
  unsigned __int64 v20; // xmm0_8
  CDOTA_Bot_Hero_DragonKnight *v21; // rax
  __m128i v22; // xmm3
  float v23; // xmm1_4
  __m128i v24; // xmm4
  __m128i v25; // xmm1
  float v26; // r13d
  float v27; // r12d
  float v28; // r14d
  CEntityInstance *v29; // rax
  const CBaseEntity *v30; // rdi
  const Vector *v31; // rax
  vec_t v32; // xmm0_4
  vec_t v33; // xmm2_4
  int v34; // r13d
  CEntityInstance *v35; // rax
  const CBaseEntity *v36; // rdi
  const Vector *v37; // r15
  CEntityInstance *v38; // rax
  CEntityInstance *v39; // rdx
  int v41; // r13d
  CEntityInstance *v42; // rax
  const CBaseEntity *v43; // rdi
  const Vector *AbsOrigin; // r15
  CEntityInstance *v45; // rax
  CEntityInstance *v46; // rdx
  CDOTA_Bot_Hero_DragonKnight *m_pBot; // r13
  unsigned __int8 (__fastcall *v48)(CDOTA_Bot_Hero_DragonKnight *, _QWORD); // r14
  unsigned int v49; // eax
  int v50; // r13d
  CEntityInstance *v51; // rax
  const CBaseEntity *v52; // rdi
  const Vector *v53; // r15
  CEntityInstance *v54; // rax
  CEntityInstance *v55; // rdx
  CDOTA_BaseNPC *pAttacker; // [rsp+18h] [rbp-58h]
  float pAttackera; // [rsp+18h] [rbp-58h]
  int iTargetCount; // [rsp+2Ch] [rbp-44h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-40h] BYREF

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "end_radius", -1, 1);
  v4 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v4 > 13 )
  {
    if ( v4 == 17 )
    {
      v41 = (v2 + 100.0);
      v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
        v43 = v42;
      else
        v43 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v43);
      v45 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v45 != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
        v46 = v45;
      else
        v46 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v46[7].m_CScriptComponent),
        2,
        2,
        AbsOrigin,
        v41,
        0.0,
        LevelSpecialValue,
        &vTargetLoc,
        &iTargetCount);
      if ( iTargetCount <= 2 )
        goto LABEL_34;
LABEL_43:
      m_pBot = this->m_pBot;
      v48 = *(m_pBot->_vptr_CDOTA_Bot + 10);
      v49 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v48(m_pBot, v49) != 0 )
      {
        this->m_vDesiredLocation = vTargetLoc;
        return 2;
      }
    }
LABEL_34:
    this->m_vDesiredLocation = vec3_origin;
    return 0;
  }
  if ( v4 >= 8 )
  {
    v34 = (v2 + 100.0);
    v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
      v36 = v35;
    else
      v36 = 0;
    v37 = CBaseEntity::GetAbsOrigin(v36);
    v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
      v39 = v38;
    else
      v39 = 0;
    CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
      this,
      HIBYTE(v39[7].m_CScriptComponent),
      2,
      2,
      v37,
      v34,
      0.0,
      LevelSpecialValue,
      &vTargetLoc,
      &iTargetCount);
    if ( iTargetCount <= 3 )
      goto LABEL_34;
    goto LABEL_43;
  }
  if ( v4 != 2 )
    goto LABEL_34;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v5 != 0 && v5->m_bIsDOTANPC )
  {
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
      goto LABEL_47;
  }
  else if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, 0) )
  {
    goto LABEL_47;
  }
  v6 = this->m_pBot;
  v7 = CEntityHandle::operator CEntityInstance *(&v6->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  pAttacker = v8;
  v9 = CEntityHandle::operator CEntityInstance *(&v6->m_hTarget);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  if ( IsBotTargetStatusValidCore(v10, pAttacker, 251, -1.0, this->m_pAbility) )
  {
    pAttackera = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
      v12 = 0;
    v13 = ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v12, 2)) * pAttackera);
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    if ( v13 > CBaseEntity::GetHealth(v15) )
    {
      v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
        v17 = v16;
      else
        v17 = 0;
      v18 = (*(v17->_vptr_IHandleEntity + 376))(v17);
      v20 = CDOTALocomotor::GetAverageVelocityOverTime(v18, 1.0, v19).m128i_u64[0];
      v21 = this->m_pBot;
      *&vTargetLoc.x = v20;
      v22 = v20;
      vTargetLoc.z = v23;
      v24 = HIDWORD(v20);
      *v25.m128i_i32 = v23 * 0.5;
      *v22.m128i_i32 = *&v20 * 0.5;
      *v24.m128i_i32 = *(&v20 + 1) * 0.5;
      v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v25));
      v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
      v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
      v29 = CEntityHandle::operator CEntityInstance *(&v21->m_hTarget);
      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
        v30 = v29;
      else
        v30 = 0;
      v31 = CBaseEntity::GetAbsOrigin(v30);
      v32 = v26 + v31->z;
      v33 = v27 + v31->x;
      this->m_vDesiredLocation.y = v28 + v31->y;
      this->m_vDesiredLocation.z = v32;
      this->m_vDesiredLocation.x = v33;
      return 3;
    }
  }
LABEL_47:
  v50 = (v2 + 100.0);
  v51 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
    v52 = v51;
  else
    v52 = 0;
  v53 = CBaseEntity::GetAbsOrigin(v52);
  v54 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v54 != 0 && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
    v55 = v54;
  else
    v55 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v55[7].m_CScriptComponent),
    1,
    2,
    v53,
    v50,
    0.0,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  if ( iTargetCount <= 1 )
    goto LABEL_34;
  this->m_vDesiredLocation = vTargetLoc;
  return 3;
}


// CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::UseAbility  (line 149, @0x00000000028b4540, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::UseAbility(
        CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire *const this)
{
  CDOTA_Bot_Hero_DragonKnight *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail  (line 158, @0x00000000028b79e0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail(
        CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB6B0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::GetCurrentUsageDesire  (line 165, @0x00000000028b9a20, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntryIndex, GetGenericStunDesire, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetOpposingTeamCommander, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin (15 total)
int __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail *const this)
{
  int v2; // eax
  __m128i v3; // xmm0
  CDOTA_Bot_Hero_DragonKnight *m_pBot; // rdi
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  float v7; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  int v12; // eax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CDOTA_Bot_Hero_DragonKnight *v15; // r12
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CDOTA_Bot_Hero_DragonKnight *v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rdx
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // r12
  __int64 v27; // rax
  CEntityInstance *v28; // rax
  CDOTA_Bot *v29; // rdi
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v32; // rax
  const CEntityHandle *v33; // rdi
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // r13
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rsi
  CDOTA_Bot *v38; // rax
  CEntityIdentity *v39; // rax
  int v40; // edx
  __int16 v41; // cx
  CDOTA_Bot_Hero_DragonKnight *v42; // r12
  CEntityInstance *v43; // rax
  CDOTA_BaseNPC *v44; // rdi
  CDOTA_Bot_Hero_DragonKnight *v45; // rdi
  CEntityInstance *v46; // rax
  const CBaseEntity *v47; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v49; // r12
  CDOTA_BaseNPC *v50; // rsi
  CEntityInstance *v51; // rax
  CDOTA_BaseNPC *v52; // r13
  CEntityInstance *v53; // rax
  CEntityInstance *v54; // rax
  CDOTA_BaseNPC *v55; // rsi
  CDOTA_Bot_Hero_DragonKnight *v56; // r12
  CEntityInstance *v57; // rax
  CDOTA_BaseNPC *v58; // r13
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rdi
  CEntityInstance *v61; // rax
  CDOTA_BaseNPC *v62; // rdi
  CDOTA_Bot_Hero_DragonKnight *v63; // r12
  CEntityInstance *v64; // rax
  CDOTA_BaseNPC *v65; // rdx
  float fMaxRange; // [rsp+Ch] [rbp-E4h]
  CEntityHandle v67; // [rsp+10h] [rbp-E0h] BYREF
  float pChannelTimeRemaining; // [rsp+14h] [rbp-DCh] BYREF
  CDOTA_BaseNPC *ppTarget; // [rsp+18h] [rbp-D8h] BYREF
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > v70; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v71[23]; // [rsp+38h] [rbp-B8h] BYREF

  v71[16] = __readfsqword(0x28u);
  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v3 = 0x43480000u;
  m_pBot = this->m_pBot;
  ppTarget = 0;
  pChannelTimeRemaining = 0.0;
  *v3.m128i_i32 = v2 + 200.0;
  fMaxRange = v2;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v3, &ppTarget, &pChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, ppTarget) )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    if ( IsBotTargetStatusValidCore(ppTarget, v6, 251, -1.0, this->m_pAbility) )
    {
      v7 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      if ( pChannelTimeRemaining > v7 )
      {
        if ( ppTarget != 0 )
        {
          m_pEntity = ppTarget->m_pEntity;
          if ( m_pEntity != 0 )
          {
LABEL_10:
            v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index == -1 )
              v10 = 0x7FFF;
            else
              v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hDesiredTarget.m_Index) = v10 | this->m_hDesiredTarget.m_Index & 0x8000;
            this->m_hDesiredTarget.m_Index = (v9 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
            return 3;
          }
        }
LABEL_45:
        this->m_hDesiredTarget.m_Index = -1;
        return 3;
      }
    }
  }
  v12 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v12 == 2 )
  {
    v54 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v54 != 0 && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
      v55 = v54;
    else
      v55 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v55) )
    {
      v56 = this->m_pBot;
      v57 = CEntityHandle::operator CEntityInstance *(&v56->m_hUnit);
      if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
        v58 = v57;
      else
        v58 = 0;
      v59 = CEntityHandle::operator CEntityInstance *(&v56->m_hTarget);
      if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
        v60 = v59;
      else
        v60 = 0;
      if ( IsBotTargetStatusValidCore(v60, v58, 251, fMaxRange, this->m_pAbility) )
      {
        v61 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v61 == 0 || (v62 = v61, BYTE3(v61[7]._vptr_IHandleEntity) == 0) )
          v62 = 0;
        if ( !CDOTA_BaseNPC::IsMovementImpaired(v62) )
        {
          v63 = this->m_pBot;
          v64 = CEntityHandle::operator CEntityInstance *(&v63->m_hTarget);
          if ( v64 != 0 && BYTE3(v64[7]._vptr_IHandleEntity) != 0 )
            v65 = v64;
          else
            v65 = 0;
          if ( !CDOTA_TeamCommander::HasIncomingStun(v63->m_pTeamCommander, v63, v65) )
          {
            this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
            return 3;
          }
        }
      }
    }
    goto LABEL_69;
  }
  if ( v12 <= 2 )
  {
    if ( v12 == 1 )
    {
      for ( i = 0; i < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size; ++i )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( OpposingTeamCommander->m_BotList.m_Size > i && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
        {
          v32 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v33 = 0;
          if ( i < v32->m_BotList.m_Size )
            v33 = v32->m_BotList.m_Memory.m_pMemory[i];
          v34 = CEntityHandle::operator CEntityInstance *(v33 + 39);
          if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
            v35 = v34;
          else
            v35 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v35) )
          {
            v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
              v37 = v36;
            else
              v37 = 0;
            if ( IsBotTargetStatusValidCore(v35, v37, 251, fMaxRange, this->m_pAbility) )
            {
              v38 = v35->m_pBot;
              if ( v38 != 0 && v38->m_nAttackingTowers > 0 )
              {
                v39 = v35->m_pEntity;
                if ( v39 != 0 )
                {
                  v40 = (v39->m_EHandle.m_Index >> 15) - (v39->m_flags & 1);
                  if ( v39->m_EHandle.m_Index == -1 )
                    v41 = 0x7FFF;
                  else
                    v41 = v39->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hDesiredTarget.m_Index) = v41 | this->m_hDesiredTarget.m_Index & 0x8000;
                  this->m_hDesiredTarget.m_Index = (v40 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  return 2;
                }
                else
                {
                  this->m_hDesiredTarget.m_Index = -1;
                  return 2;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_69;
  }
  if ( v12 != 4 )
  {
    if ( v12 == 18 )
    {
      v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        v14 = v13;
      else
        v14 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v14) )
      {
        v15 = this->m_pBot;
        v16 = CEntityHandle::operator CEntityInstance *(&v15->m_hUnit);
        if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
          v17 = v16;
        else
          v17 = 0;
        v18 = CEntityHandle::operator CEntityInstance *(&v15->m_hTarget);
        if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
          v19 = v18;
        else
          v19 = 0;
        if ( IsBotTargetStatusValidCore(v19, v17, 251, fMaxRange, this->m_pAbility) )
        {
          v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
          if ( v20 == 0 || (v21 = v20, BYTE3(v20[7]._vptr_IHandleEntity) == 0) )
            v21 = 0;
          if ( !CDOTA_BaseNPC::IsMovementImpaired(v21) )
          {
            v22 = this->m_pBot;
            v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hTarget);
            if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
              v24 = v23;
            else
              v24 = 0;
            if ( !CDOTA_TeamCommander::HasIncomingStun(v22->m_pTeamCommander, v22, v24) )
            {
              v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
              v26 = v25;
              if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 && (v25[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v27 = *&v25[45].m_worldGroupId.m_nHashCode;
                if ( v27 != 0 )
                {
                  v67.m_Index = *(v27 + 712);
                  v28 = CEntityHandle::operator CEntityInstance *(&v67);
                  if ( v28 != 0
                    && BYTE3(v28[7]._vptr_IHandleEntity) != 0
                    && (v28[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v29 = *&v28[45].m_worldGroupId.m_nHashCode;
                    if ( v29 != 0 && CDOTA_Bot::IsAboutToDie(v29) )
                    {
                      m_pEntity = v26->m_pEntity;
                      if ( m_pEntity != 0 )
                        goto LABEL_10;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_69:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v42 = this->m_pBot;
  if ( v42->m_fModeDesires[(*(v42->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v42->m_pActiveBotMode)] < 0.75 )
    goto LABEL_69;
  v43 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
    v44 = v43;
  else
    v44 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v44) <= 2.0 )
    goto LABEL_69;
  v45 = this->m_pBot;
  v70.m_Size = 0;
  v70.m_Memory.m_nAllocationCount = 32;
  v70.m_Memory.m_nGrowSize = 0x80000000;
  v70.m_Memory.m_pMemory = v71;
  CDOTA_Bot::GetNearbyHeroes(v45, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &v70, fMaxRange);
  v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
    v47 = v46;
  else
    v47 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v47);
  SortEHANDLEVectorByLocation(&v70, AbsOrigin, 0);
  if ( v70.m_Size <= 0 )
  {
LABEL_68:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v70);
    goto LABEL_69;
  }
  v49 = 0;
  while ( 1 )
  {
    v51 = CEntityHandle::operator CEntityInstance *(&v70.m_Memory.m_pMemory[v49]);
    if ( v51 == 0
      || BYTE3(v51[7]._vptr_IHandleEntity) == 0
      || (v52 = v51, (v51[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v52 = 0;
    }
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v52) )
    {
      v53 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
        v50 = v53;
      else
        v50 = 0;
      if ( IsBotTargetStatusValidCore(v52, v50, 251, fMaxRange, this->m_pAbility)
        && !CDOTA_BaseNPC::IsMovementImpaired(v52)
        && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v52) )
      {
        break;
      }
    }
    if ( v70.m_Size <= ++v49 )
      goto LABEL_68;
  }
  this->m_hDesiredTarget.m_Index = v70.m_Memory.m_pMemory[v49].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v70);
  return 2;
}


// CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::UseAbility  (line 172, @0x00000000028b54b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::UseAbility(
        CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_DragonKnight *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm  (line 185, @0x00000000028b7a10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm(
        CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB710;
}


// CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::GetCurrentUsageDesire  (line 192, @0x00000000028b4600, libserver.so)
// calls: CDOTA_Bot::FindNearbyTeammatesInMode
int __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm *const this)
{
  return 3
       * (CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1200.0, 0, 0) >= 2);
}


// CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::UseAbility  (line 203, @0x00000000028b4290, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::UseAbility(
        CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm *const this)
{
  CDOTA_Bot_Hero_DragonKnight *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_TutorialBot_Hero_DragonKnight::CDOTA_TutorialBot_Hero_DragonKnight  (line 220, @0x00000000028b7a30, libserver.so)
// calls: CDOTA_Bot_Hero_DragonKnight::CDOTA_Bot_Hero_DragonKnight
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_DragonKnight::CDOTA_TutorialBot_Hero_DragonKnight(
        CDOTA_TutorialBot_Hero_DragonKnight *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_DragonKnight::CDOTA_Bot_Hero_DragonKnight(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42CB770;
}


// CDOTA_TutorialBot_Hero_DragonKnight::Think  (line 230, @0x00000000028b4ba0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::Think
void __fastcall CDOTA_TutorialBot_Hero_DragonKnight::Think(CDOTA_TutorialBot_Hero_DragonKnight *const this)
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


