
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_DeathProphet::CDOTA_Bot_Hero_DeathProphet  (line 21, @0x00000000028b7660, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "death_prophet_carrion_swarm", "death_prophet_silence", "death_prophet_spirit_siphon", "death_prophet_exorcism"
void __fastcall CDOTA_Bot_Hero_DeathProphet::CDOTA_Bot_Hero_DeathProphet(
        CDOTA_Bot_Hero_DeathProphet *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CB270;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityCarrionSwarm = CDOTA_BaseNPC::FindAbilityByName(v6, "death_prophet_carrion_swarm", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilitySilence = CDOTA_BaseNPC::FindAbilityByName(v8, "death_prophet_silence", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilitySpiritSiphon = CDOTA_BaseNPC::FindAbilityByName(v10, "death_prophet_spirit_siphon", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityExorcism = CDOTA_BaseNPC::FindAbilityByName(v12, "death_prophet_exorcism", 1);
}


// CDOTA_Bot_Hero_DeathProphet::GetAggressionFactor  (line 33, @0x00000000028b4d70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::GetAggressionFactor, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_death_prophet_exorcism"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Hero_DeathProphet::GetAggressionFactor(CDOTA_Bot_Hero_DeathProphet *const this)
{
  float AggressionFactor; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  float v8; // [rsp+Ch] [rbp-14h]

  AggressionFactor = CDOTA_Bot::GetAggressionFactor(this);
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
  v8 = AggressionFactor;
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_death_prophet_exorcism", 0) != 0 )
    return v8 * 1.3;
  else
    return v8 * 1.0;
}


// CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm  (line 42, @0x00000000028b7790, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm(
        CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB370;  // vptr: CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm
}


// CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::FindFilter  (line 49, @0x00000000028b5070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::FindFilter(
        CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm *const this,
        _DWORD *hUnit)
{
  _BOOL4 m_bIsDOTANPC; // ebx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // r13
  int v8; // eax
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
  if ( !m_bIsDOTANPC )
    return m_bIsDOTANPC;
  v8 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v8 != 1 && v8 != 17 )
    return m_bIsDOTANPC;
  Health = CBaseEntity::GetHealth(m_pInstance);
  LOBYTE(Health) = Health < (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  return Health;
}


// CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::GetCurrentUsageDesire  (line 72, @0x00000000028bcc00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBotTargetStatus, GetInstance, GetManaPercent, GetTargetNPC, GetTeamNumber, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Length2D, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTABaseAbility::IsFullyCastable, CDOTALocomotor::GetAverageVelocityOverTime, CDOTA_Bot::GetNearbyHeroes, DOTACommander (16 total)
// strings: "end_radius"
// globals: jpt_28BCC79
int __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm *const this)
{
  int LevelSpecialValue; // r15d
  int v3; // r12d
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rdi
  const Vector *v6; // r13
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rdx
  CEntityInstance *v10; // rax
  const CBaseEntity *v11; // rdi
  const Vector *v12; // r13
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // rdx
  CDOTA_Bot_Hero_DeathProphet *v15; // r12
  unsigned __int8 (__fastcall *v16)(CDOTA_Bot_Hero_DeathProphet *, _QWORD); // r13
  unsigned int v17; // eax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_Bot_Hero_DeathProphet *v19; // r13
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // r14
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC *v23; // rdi
  int v24; // r12d
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rdi
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // rdi
  int Health; // r13d
  CEntityInstance *v30; // rax
  CEntityInstance *v31; // rdi
  CDOTALocomotor *v32; // rax
  float v33; // xmm1_4
  unsigned __int64 v34; // xmm0_8
  CDOTA_Bot_Hero_DeathProphet *v35; // rax
  __m128i v36; // xmm3
  float v37; // xmm1_4
  __m128i v38; // xmm4
  __m128i v39; // xmm1
  float v40; // r13d
  float v41; // r12d
  float v42; // r14d
  CEntityInstance *v43; // rax
  const CBaseEntity *v44; // rdi
  const Vector *v45; // rax
  vec_t v46; // xmm0_4
  vec_t v47; // xmm2_4
  CEntityInstance *v48; // rax
  const CBaseEntity *v49; // rdi
  const Vector *AbsOrigin; // r13
  CEntityInstance *v51; // rax
  CEntityInstance *v52; // rdx
  CEntityInstance *v53; // rax
  const CBaseEntity *v54; // rdi
  const Vector *v55; // r13
  CEntityInstance *v56; // rax
  CEntityInstance *v57; // rdx
  CDOTA_Bot_Hero_DeathProphet *m_pBot; // rdi
  __int64 v59; // r13
  int v60; // r14d
  CEntityInstance *v61; // rax
  CDOTA_BaseNPC_Hero *v62; // r12
  int m_Id; // eax
  CDOTA_Commander *v64; // rax
  __int64 IllusionState; // rsi
  CEntityInstance *v66; // rax
  CDOTA_BaseNPC *v67; // rsi
  const Vector *v68; // rax
  CEntityInstance *v69; // rax
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  int v71; // [rsp+1Ch] [rbp-84h]
  float fTimeInFuture; // [rsp+28h] [rbp-78h]
  float fTimeInFuturea; // [rsp+28h] [rbp-78h]
  unsigned __int8 (__fastcall *fTimeInFuturec)(CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm *const, __int64); // [rsp+28h] [rbp-78h]
  float fTimeInFutureb; // [rsp+28h] [rbp-78h]
  int iTargetCount; // [rsp+3Ch] [rbp-64h] BYREF
  Vector vTargetLoc_0; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyHeroes; // [rsp+50h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "end_radius", -1, 1);
  v3 = LevelSpecialValue + CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "range", -1, 1);
  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
      fTimeInFuturea = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility) + 0.2;
      v48 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 )
        v49 = v48;
      else
        v49 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v49);
      v51 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
        v52 = v51;
      else
        v52 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v52[7].m_CScriptComponent),
        2,
        2,
        AbsOrigin,
        v3,
        fTimeInFuturea,
        LevelSpecialValue,
        &vTargetLoc_0,
        &iTargetCount);
      if ( iTargetCount > 2 )
      {
        this->m_vDesiredLocation = vTargetLoc_0;
        return 2;
      }
      m_pBot = this->m_pBot;
      hNearbyHeroes.m_Size = 0;
      hNearbyHeroes.m_Memory.m_pMemory = 0;
      hNearbyHeroes.m_Memory.m_nAllocationCount = 0;
      hNearbyHeroes.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyHeroes, v3);
      if ( hNearbyHeroes.m_Size <= 0 )
        goto LABEL_86;
      v59 = 0;
      v60 = 0;
      while ( 1 )
      {
        v61 = CEntityHandle::operator CEntityInstance *(&hNearbyHeroes.m_Memory.m_pMemory[v59]);
        v62 = v61;
        if ( v61 != 0 && BYTE3(v61[7]._vptr_IHandleEntity) != 0 )
        {
          m_Id = v61[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 3) != 0 || this->m_bUseOnCreeps )
          {
            if ( (m_Id & 1) == 0
              || (fTimeInFuturec = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                  v64 = DOTACommander(),
                  IllusionState = CDOTA_Commander::GetIllusionState(v64, v62),
                  fTimeInFuturec(this, IllusionState) != 0) )
            {
              v66 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v66 == 0 || (v67 = v66, BYTE3(v66[7]._vptr_IHandleEntity) == 0) )
                v67 = 0;
              if ( IsBotTargetStatusValidCore(v62, v67, 251, -1.0, this->m_pAbility) )
              {
                v68 = CBaseEntity::GetAbsOrigin(v62);
                if ( LevelSpecialValue > fsqrt(
                                           ((v68->x - vTargetLoc_0.x) * (v68->x - vTargetLoc_0.x))
                                         + ((v68->y - vTargetLoc_0.y) * (v68->y - vTargetLoc_0.y))) )
                {
                  fTimeInFutureb = CDOTA_BaseNPC::GetArmorReductionForDamageType(v62, 2);
                  v71 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
                  v69 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                  if ( v69 == 0 || BYTE3(v69[7]._vptr_IHandleEntity) == 0 )
                    v69 = 0;
                  if ( (((100.0 * *&v69[44].m_iszPrivateVScripts.u.m_Id) / *&v69[44].m_worldGroupId.m_nHashCode) < 76)
                     + 1 <= iTargetCount
                    || ((1.0 - fTimeInFutureb) * v71) > CBaseEntity::GetHealth(v62) )
                  {
                    break;
                  }
                }
              }
            }
          }
        }
        ++v60;
        ++v59;
        if ( hNearbyHeroes.m_Size <= v60 )
        {
LABEL_86:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyHeroes);
          goto LABEL_9;
        }
      }
      this->m_vDesiredLocation = vTargetLoc_0;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyHeroes);
      return 2;
    case 2u:
      v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v18 != 0 && v18->m_bIsDOTANPC )
      {
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v18) )
          goto LABEL_52;
      }
      else if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, 0) )
      {
        goto LABEL_52;
      }
      v19 = this->m_pBot;
      v20 = CEntityHandle::operator CEntityInstance *(&v19->m_hUnit);
      if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
        v21 = v20;
      else
        v21 = 0;
      v22 = CEntityHandle::operator CEntityInstance *(&v19->m_hTarget);
      if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
        v23 = v22;
      else
        v23 = 0;
      GetBotTargetStatusCore(v23, v21, -1.0, this->m_pAbility);
      if ( v3 == 0 )
      {
        v24 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
        v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v25 == 0 || (v26 = v25, BYTE3(v25[7]._vptr_IHandleEntity) == 0) )
          v26 = 0;
        fTimeInFuture = CDOTA_BaseNPC::GetArmorReductionForDamageType(v26, 2);
        v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
          v28 = v27;
        else
          v28 = 0;
        Health = CBaseEntity::GetHealth(v28);
        if ( !CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityExorcism)
          || (v24 * (1.0 - fTimeInFuture)) > Health
          || (m_pBotUsage = this->m_pBot->m_pAbilityExorcism->m_pBotUsage,
              (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage) <= 0) )
        {
          v30 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
          if ( v30 == 0 || (v31 = v30, BYTE3(v30[7]._vptr_IHandleEntity) == 0) )
            v31 = 0;
          v32 = (*(v31->_vptr_IHandleEntity + 376))(v31);
          v34 = CDOTALocomotor::GetAverageVelocityOverTime(v32, 1.0, v33).m128i_u64[0];
          v35 = this->m_pBot;
          *&hNearbyHeroes.m_Size = v34;
          v36 = v34;
          *&hNearbyHeroes.m_Memory.m_pMemory = v37;
          v38 = HIDWORD(v34);
          *v39.m128i_i32 = v37 * 0.5;
          *v36.m128i_i32 = *&v34 * 0.5;
          *v38.m128i_i32 = *(&v34 + 1) * 0.5;
          v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
          v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
          v42 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
          v43 = CEntityHandle::operator CEntityInstance *(&v35->m_hTarget);
          if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
            v44 = v43;
          else
            v44 = 0;
          v45 = CBaseEntity::GetAbsOrigin(v44);
          v46 = v40 + v45->z;
          v47 = v41 + v45->x;
          this->m_vDesiredLocation.y = v42 + v45->y;
          this->m_vDesiredLocation.z = v46;
          this->m_vDesiredLocation.x = v47;
          return 3;
        }
LABEL_9:
        this->m_vDesiredLocation = vec3_invalid;
        return 0;
      }
LABEL_52:
      v53 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v53 == 0 || (v54 = v53, BYTE3(v53[7]._vptr_IHandleEntity) == 0) )
        v54 = 0;
      v55 = CBaseEntity::GetAbsOrigin(v54);
      v56 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v56 != 0 && BYTE3(v56[7]._vptr_IHandleEntity) != 0 )
        v57 = v56;
      else
        v57 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v57[7].m_CScriptComponent),
        1,
        2,
        v55,
        v3,
        0.0,
        LevelSpecialValue,
        &hNearbyHeroes,
        &vTargetLoc_0);
      if ( SLODWORD(vTargetLoc_0.x) <= 1 )
        goto LABEL_9;
      LODWORD(this->m_vDesiredLocation.x) = hNearbyHeroes.m_Size;
      this->m_vDesiredLocation.y = *(&hNearbyHeroes.m_Size + 1);
      this->m_vDesiredLocation.z = *&hNearbyHeroes.m_Memory.m_pMemory;
      return 3;
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        v11 = v10;
      else
        v11 = 0;
      v12 = CBaseEntity::GetAbsOrigin(v11);
      v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        v14 = v13;
      else
        v14 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v14[7].m_CScriptComponent),
        2,
        2,
        v12,
        v3,
        0.0,
        LevelSpecialValue,
        &hNearbyHeroes,
        &vTargetLoc_0);
      if ( SLODWORD(vTargetLoc_0.x) > 3 )
        goto LABEL_17;
      goto LABEL_9;
    case 0x11u:
      v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
        v5 = v4;
      else
        v5 = 0;
      v6 = CBaseEntity::GetAbsOrigin(v5);
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        v8 = v7;
      else
        v8 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v8[7].m_CScriptComponent),
        2,
        2,
        v6,
        v3,
        0.0,
        LevelSpecialValue,
        &hNearbyHeroes,
        &vTargetLoc_0);
      if ( SLODWORD(vTargetLoc_0.x) <= 2 )
        goto LABEL_9;
LABEL_17:
      v15 = this->m_pBot;
      v16 = *(v15->_vptr_CDOTA_Bot + 10);
      v17 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v16(v15, v17) == 0 )
        goto LABEL_9;
      LODWORD(this->m_vDesiredLocation.x) = hNearbyHeroes.m_Size;
      this->m_vDesiredLocation.y = *(&hNearbyHeroes.m_Size + 1);
      this->m_vDesiredLocation.z = *&hNearbyHeroes.m_Memory.m_pMemory;
      return 2;
    default:
      goto LABEL_9;
  }
}


// CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::UseAbility  (line 191, @0x00000000028b5ef0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator*, operator+, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, VectorNormalize, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::UseAbility(
        CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm *const this)
{
  CEntityInstance *v2; // rax
  const CBaseEntity *v3; // rdi
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  __m128i v7; // xmm0
  __m128i x_low; // xmm3
  __m128i y_low; // xmm4
  float v10; // r12d
  float v11; // r14d
  float v12; // r13d
  CEntityInstance *v13; // rax
  const CBaseEntity *v14; // rdi
  const Vector *v15; // rax
  vec_t v16; // xmm0_4
  vec_t v17; // xmm2_4
  CDOTA_Bot_Hero_DeathProphet *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v20; // r12
  float fDistance; // [rsp+Ch] [rbp-34h]
  Vector vToDesiredLocation; // [rsp+10h] [rbp-30h] BYREF

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = this->m_vDesiredLocation.y - AbsOrigin->y;
  v6 = this->m_vDesiredLocation.x - AbsOrigin->x;
  vToDesiredLocation.z = 0.0;
  vToDesiredLocation.y = v5;
  vToDesiredLocation.x = v6;
  fDistance = VectorNormalize(&vToDesiredLocation);
  if ( fDistance > (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) )
  {
    v7 = 0x42C80000u;
    x_low = LODWORD(vToDesiredLocation.x);
    y_low = LODWORD(vToDesiredLocation.y);
    *x_low.m128i_i32 = vToDesiredLocation.x * 100.0;
    *y_low.m128i_i32 = vToDesiredLocation.y * 100.0;
    *v7.m128i_i32 = 100.0 * vToDesiredLocation.z;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
      v14 = v13;
    else
      v14 = 0;
    v15 = CBaseEntity::GetAbsOrigin(v14);
    v16 = v12 + v15->z;
    v17 = v10 + v15->x;
    this->m_vDesiredLocation.y = v11 + v15->y;
    this->m_vDesiredLocation.z = v16;
    this->m_vDesiredLocation.x = v17;
  }
  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v20 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v20, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v20);
}


// CDOTA_Bot_AbilityUsage_DeathProphet_Silence::CDOTA_Bot_AbilityUsage_DeathProphet_Silence  (line 208, @0x00000000028b77b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_Silence::CDOTA_Bot_AbilityUsage_DeathProphet_Silence(
        CDOTA_Bot_AbilityUsage_DeathProphet_Silence *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB3D0;  // vptr: CDOTA_Bot_AbilityUsage_DeathProphet_Silence
}


// CDOTA_Bot_AbilityUsage_DeathProphet_Silence::FindFilter  (line 215, @0x00000000028b58b0, libserver.so)  // inlines: Get, GetInstance, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
bool __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_Silence::FindFilter(
        CDOTA_Bot_AbilityUsage_DeathProphet_Silence *const this,
        const CEntityHandle *hUnit)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // r13
  int v4; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v6; // r12
  bool result; // al

  v2 = CEntityHandle::operator CEntityInstance *(hUnit);
  v3 = v2;
  if ( v2 == 0 || BYTE3(v2[7]._vptr_IHandleEntity) == 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v3, v4);
    v6 = AbilityByIndex;
    if ( AbilityByIndex != 0
      && CDOTABaseAbility::GetEffectiveLevel(AbilityByIndex) >= 0
      && (*(v6->_vptr_IHandleEntity + 245))(v6) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(v6) )
    {
      result = CDOTABaseAbility::IsOwnersGoldEnough(v6, -1);
      if ( result )
        break;
    }
    if ( ++v4 == 24 )
      return 0;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_DeathProphet_Silence::GetCurrentUsageDesire  (line 235, @0x00000000028baab0, libserver.so)  // inlines: Get, GetInstance, GetTeamNumber, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
int __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_Silence::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DeathProphet_Silence *const this)
{
  int v2; // r13d
  int LevelSpecialValue; // r12d
  int v4; // r13d
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // rdx
  int result; // eax
  int iTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v4 = (v2 + 100.0);
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v9[7].m_CScriptComponent),
    1,
    2,
    AbsOrigin,
    v4,
    0.0,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  result = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( result == 2 && iTargetCount > 0 )
  {
    this->m_vDesiredLocation = vTargetLoc;
  }
  else
  {
    this->m_vDesiredLocation = vec3_invalid;
    return 0;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_DeathProphet_Silence::UseAbility  (line 265, @0x00000000028b44e0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_Silence::UseAbility(
        CDOTA_Bot_AbilityUsage_DeathProphet_Silence *const this)
{
  CDOTA_Bot_Hero_DeathProphet *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon::CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon  (line 274, @0x00000000028b77d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon::CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon(
        CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB430;  // vptr: CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon::GetCurrentUsageDesire  (line 282, @0x00000000028b8da0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsConsideredHero, IsHero, IsValidBotTarget, Length, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, DOTACommander, CDOTA_Commander::GetIllusionState, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_death_prophet_spirit_siphon"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  int v4; // eax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v6; // r15
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  unsigned __int8 (__fastcall *v10)(CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon *const, _QWORD); // r14
  CDOTA_Commander *v11; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v15; // rax
  float v16; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  float flBestTargetDistance; // [rsp+Ch] [rbp-74h]
  CDOTA_BaseNPC *pBestTarget; // [rsp+10h] [rbp-70h]
  EHANDLE hEnemyHero; // [rsp+20h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecEnemyHeroes; // [rsp+30h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    return 0;
  m_pAbility = this->m_pAbility;
  vecEnemyHeroes.m_Size = 0;
  vecEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  vecEnemyHeroes.m_Memory.m_pMemory = 0;
  vecEnemyHeroes.m_Memory.m_nGrowSize = 0;
  v4 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &vecEnemyHeroes, v4);
  if ( vecEnemyHeroes.m_Size == 0 )
    goto LABEL_29;
  m_pMemory = vecEnemyHeroes.m_Memory.m_pMemory;
  v6 = &vecEnemyHeroes.m_Memory.m_pMemory[vecEnemyHeroes.m_Size];
  if ( vecEnemyHeroes.m_Memory.m_pMemory == v6 )
    goto LABEL_29;
  pBestTarget = 0;
  flBestTargetDistance = 0.0;
  do
  {
    while ( 1 )
    {
      hEnemyHero.m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEnemyHero.m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[hEnemyHero.m_Index & 0x1FF];
          if ( v8 != 0 && m_pMemory->m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
            {
              if ( (m_pInstance->m_iUnitType & 1) == 0
                || (v10 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                    v11 = DOTACommander(),
                    IllusionState = CDOTA_Commander::GetIllusionState(v11, m_pInstance),
                    v10(this, IllusionState) != 0) )
              {
                if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_death_prophet_spirit_siphon", 0) == 0 )
                {
                  Caster = CDOTABaseAbility::GetCaster(this->m_pAbility);
                  if ( Caster != 0 )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
                    v15 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    v16 = fsqrt(
                            (((v15->x - AbsOrigin->x) * (v15->x - AbsOrigin->x))
                           + ((v15->y - AbsOrigin->y) * (v15->y - AbsOrigin->y)))
                          + ((v15->z - AbsOrigin->z) * (v15->z - AbsOrigin->z)));
                  }
                  else
                  {
                    v16 = -1.0;
                  }
                  if ( pBestTarget == 0 || flBestTargetDistance > v16 )
                    break;
                }
              }
            }
          }
        }
      }
      if ( v6 == ++m_pMemory )
        goto LABEL_23;
    }
    ++m_pMemory;
    flBestTargetDistance = v16;
    pBestTarget = m_pInstance;
  }
  while ( v6 != m_pMemory );
LABEL_23:
  if ( pBestTarget != 0 )
  {
    m_pEntity = pBestTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v19 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v19 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v18 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecEnemyHeroes);
    return 1;
  }
  else
  {
LABEL_29:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecEnemyHeroes);
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon::UseAbility  (line 330, @0x00000000028b53d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon::UseAbility(
        CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_DeathProphet *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism  (line 343, @0x00000000028b7800, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism(
        CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB490;  // vptr: CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism
}


// CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::GetCurrentUsageDesire  (line 350, @0x00000000028b6080, libserver.so)  // inlines: Get, GetAggroTarget, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyTeammatesInMode, CDOTA_Bot::FindNearbyEnemiesInMode
int __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rbx
  const CEntityHandle *v5; // rdi
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rax
  int result; // eax
  int NearbyEnemiesInMode; // edx

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 != 2 )
  {
    if ( v2 >= 2 && (v2 - 8) <= 2 )
    {
      v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      v4 = v3;
      if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
        v5 = v3;
      else
        v5 = 0;
      v6 = CEntityHandle::operator CEntityInstance *(v5 + 716);
      if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      {
        if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
          v4 = 0;
        v7 = CEntityHandle::operator CEntityInstance *(&v4[59].m_worldGroupId);
        if ( v7 == 0 || BYTE3(v7[7]._vptr_IHandleEntity) == 0 )
          v7 = 0;
        if ( (v7[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
          return 3;
      }
    }
  }
  else if ( CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, 0) > 1 )
  {
    NearbyEnemiesInMode = CDOTA_Bot::FindNearbyEnemiesInMode(
                            this->m_pBot,
                            DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                            1000.0,
                            0,
                            0);
    result = 3;
    if ( NearbyEnemiesInMode > 1 )
      return result;
  }
  return 0;
}


// CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::UseAbility  (line 386, @0x00000000028b4230, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::UseAbility(
        CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism *const this)
{
  CDOTA_Bot_Hero_DeathProphet *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


