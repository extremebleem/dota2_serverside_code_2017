
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Necrolyte::CDOTA_Bot_Hero_Necrolyte  (line 21, @0x00000000028c3fb0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "necrolyte_death_pulse", "necrolyte_sadist", "necrolyte_reapers_scythe"
void __fastcall CDOTA_Bot_Hero_Necrolyte::CDOTA_Bot_Hero_Necrolyte(
        CDOTA_Bot_Hero_Necrolyte *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CDD30;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityDeathPulse = CDOTA_BaseNPC::FindAbilityByName(v6, "necrolyte_death_pulse", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilitySadist = CDOTA_BaseNPC::FindAbilityByName(v8, "necrolyte_sadist", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityScythe = CDOTA_BaseNPC::FindAbilityByName(v10, "necrolyte_reapers_scythe", 1);
}


// CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse  (line 33, @0x00000000028c40a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse(
        CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CDE90;
}


// CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::GetCurrentUsageDesire  (line 40, @0x00000000028cd540, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetHealthDeficit, GetInstance, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator bool, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Bot::GetNearbyCreeps, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetHealthEstimate, CConcreteEntityList::LookupEntity, CBaseEntity::GetDistanceToEntity, CDOTA_BaseNPC::GetArmorReductionForDamageType (15 total)
// strings: "area_of_effect", "regen_duration"
// globals: jpt_28CD5E5, CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse *const this)
{
  int LevelSpecialValue; // r15d
  int v3; // ebx
  int v4; // eax
  CDOTA_Bot_Hero_Necrolyte *v5; // rdi
  __int64 v6; // rbx
  const Vector *AbsOrigin; // r14
  const Vector *v8; // rax
  CEntityInstance *v9; // rax
  const CBaseEntity *v10; // r12
  const CBaseEntity *v11; // rax
  int Health; // eax
  int v13; // edx
  bool v14; // cc
  int v15; // eax
  int result; // eax
  int NearbyHeroes; // eax
  CDOTA_Bot_Hero_Necrolyte *m_pBot; // rdi
  int v19; // ebx
  __int64 v20; // r15
  int v21; // r14d
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // r12
  CDOTA_Bot_Hero_Necrolyte *v24; // rdi
  __int64 v25; // r14
  float HealthEstimate; // xmm0_4
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // r12
  const CBaseEntity *v29; // rax
  CDOTA_Bot_Hero_Necrolyte *v30; // rbx
  __m128i v31; // xmm7
  CEntityInstance *v32; // rax
  const CBaseEntity *v33; // r12
  CEntityInstance *v34; // rax
  const CBaseEntity *v35; // rdi
  float DistanceToEntity; // xmm0_4
  __m128i v37; // xmm7
  int v38; // r15d
  __int64 v39; // r12
  int v40; // r14d
  int v41; // r15d
  CEntityInstance *v42; // rax
  CDOTA_BaseNPC *v43; // rbx
  CEntityInstance *v44; // rax
  CDOTA_Bot_Hero_Necrolyte *v45; // rbx
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // rcx
  int NearbyEnemiesInMode; // edx
  int NearbyCreeps; // edx
  CDOTA_Bot_Hero_Necrolyte *v50; // rdi
  __int64 v51; // r12
  int v52; // r13d
  CEntityInstance *v53; // rax
  const CBaseEntity *v54; // rbx
  int v55; // r14d
  int iManaRegenForKill; // [rsp+1Ch] [rbp-84h]
  float iManaRegenForKilla; // [rsp+1Ch] [rbp-84h]
  int iValidCreeps; // [rsp+20h] [rbp-80h]
  int iValidCreepsa; // [rsp+20h] [rbp-80h]
  int iManaCost; // [rsp+24h] [rbp-7Ch]
  int iManaCosta; // [rsp+24h] [rbp-7Ch]
  char iManaCostb; // [rsp+24h] [rbp-7Ch]
  float iManaCostc; // [rsp+24h] [rbp-7Ch]
  int iManaCostd; // [rsp+24h] [rbp-7Ch]
  int iDamage; // [rsp+28h] [rbp-78h]
  int iHeal; // [rsp+2Ch] [rbp-74h]
  int iHeala; // [rsp+2Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAlliedHeroes; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAlliedHeroes_0; // [rsp+50h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "area_of_effect", -1, 1);
  iHeal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "heal", -1, 1);
  iManaCost = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "projectile_speed", -1, 1);
  iDamage = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
      iManaRegenForKilla = LevelSpecialValue;
      NearbyHeroes = CDOTA_Bot::GetNearbyHeroes(
                       this->m_pBot,
                       DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
                       0,
                       LevelSpecialValue);
      m_pBot = this->m_pBot;
      v19 = NearbyHeroes;
      hAlliedHeroes.m_Size = 0;
      hAlliedHeroes.m_Memory.m_pMemory = 0;
      hAlliedHeroes.m_Memory.m_nAllocationCount = 0;
      hAlliedHeroes.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyHeroes(
        m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
        &hAlliedHeroes,
        LevelSpecialValue);
      if ( hAlliedHeroes.m_Size > 0 )
      {
        v20 = 0;
        v21 = 0;
        iValidCreepsa = 2 * iHeal;
        do
        {
          v22 = CEntityHandle::operator CEntityInstance *(&hAlliedHeroes.m_Memory.m_pMemory[v20]);
          v23 = v22;
          if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
          {
            iHeala = (*(v22->_vptr_IHandleEntity + 156))(v22);
            if ( iValidCreepsa < iHeala - CBaseEntity::GetHealth(v23) )
              v19 += 2;
          }
          ++v21;
          ++v20;
        }
        while ( hAlliedHeroes.m_Size > v21 );
      }
      v24 = this->m_pBot;
      hAlliedHeroes_0.m_Size = 0;
      hAlliedHeroes_0.m_Memory.m_pMemory = 0;
      hAlliedHeroes_0.m_Memory.m_nAllocationCount = 0;
      hAlliedHeroes_0.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyCreeps(
        v24,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &hAlliedHeroes_0,
        iManaRegenForKilla);
      if ( hAlliedHeroes_0.m_Size > 0 )
      {
        v25 = 0;
        do
        {
          v27 = CEntityHandle::operator CEntityInstance *(&hAlliedHeroes_0.m_Memory.m_pMemory[v25]);
          v28 = v27;
          if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
          {
            v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v29 != 0 && v29->m_bIsDOTANPC )
            {
              CBaseEntity::GetAbsOrigin(v29);
              CBaseEntity::GetAbsOrigin(v28);
            }
            HealthEstimate = CDOTA_BaseNPC::GetHealthEstimate(v28, iManaCost);
            if ( HealthEstimate > 0.0 && iDamage > HealthEstimate )
              ++v19;
          }
          ++v25;
        }
        while ( hAlliedHeroes_0.m_Size > v25 );
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes_0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
      if ( v19 <= 3 )
        return 0;
      else
        return 3;
    case 2u:
    case 0x12u:
      v30 = this->m_pBot;
      hAlliedHeroes_0.m_Size = v30->m_hTarget.m_Index;
      if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &hAlliedHeroes_0) != 0 )
      {
        v32 = CEntityHandle::operator CEntityInstance *(&v30->m_hUnit);
        if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
          v33 = v32;
        else
          v33 = 0;
        v34 = CEntityHandle::operator CEntityInstance *(&v30->m_hTarget);
        if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
          v35 = v34;
        else
          v35 = 0;
        DistanceToEntity = CBaseEntity::GetDistanceToEntity(v35, v33);
        *v37.m128i_i32 = LevelSpecialValue;
        v14 = LevelSpecialValue <= DistanceToEntity;
        v38 = _mm_cvtsi128_si32(v37);
        if ( !v14 )
          return 3;
        v30 = this->m_pBot;
      }
      else
      {
        *v31.m128i_i32 = LevelSpecialValue;
        v38 = _mm_cvtsi128_si32(v31);
      }
      hAlliedHeroes_0.m_Size = 0;
      hAlliedHeroes_0.m_Memory.m_pMemory = 0;
      hAlliedHeroes_0.m_Memory.m_nAllocationCount = 0;
      hAlliedHeroes_0.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyHeroes(v30, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hAlliedHeroes_0, *&v38);
      CDOTA_Bot::GetNearbyHeroes(
        this->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
        &hAlliedHeroes_0,
        *&v38);
      if ( hAlliedHeroes_0.m_Size <= 0 )
        goto LABEL_57;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      break;
    case 4u:
      if ( !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
        return 0;
      v45 = this->m_pBot;
      v46 = CEntityHandle::operator CEntityInstance *(&v45->m_hUnit);
      if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
        v47 = v46;
      else
        v47 = 0;
      NearbyEnemiesInMode = CDOTA_Bot::FindNearbyEnemiesInMode(v45, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, v47);
      result = 3;
      if ( NearbyEnemiesInMode <= 0 )
        return 0;
      return result;
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
      NearbyCreeps = CDOTA_Bot::GetNearbyCreeps(
                       this->m_pBot,
                       DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
                       0,
                       LevelSpecialValue);
      result = 3;
      if ( NearbyCreeps > 3 )
        return result;
      v50 = this->m_pBot;
      hAlliedHeroes_0.m_Size = 0;
      hAlliedHeroes_0.m_Memory.m_pMemory = 0;
      hAlliedHeroes_0.m_Memory.m_nAllocationCount = 0;
      hAlliedHeroes_0.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyHeroes(
        v50,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
        &hAlliedHeroes_0,
        LevelSpecialValue);
      if ( hAlliedHeroes_0.m_Size <= 0 )
        goto LABEL_57;
      v51 = 0;
      v52 = 0;
      do
      {
        v53 = CEntityHandle::operator CEntityInstance *(&hAlliedHeroes_0.m_Memory.m_pMemory[v51]);
        v54 = v53;
        if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
        {
          v55 = (*(v53->_vptr_IHandleEntity + 156))(v53);
          v52 += iHeal < v55 - CBaseEntity::GetHealth(v54);
        }
        ++v51;
      }
      while ( hAlliedHeroes_0.m_Size > v51 );
      if ( v52 <= 2 )
        goto LABEL_57;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes_0);
      return 2;
    case 0x11u:
      v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pBot->m_pAbilitySadist, "mana_regen", -1, 1);
      iManaRegenForKill = (v3
                         * CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                             this->m_pBot->m_pAbilitySadist,
                             "regen_duration",
                             -1,
                             1));
      v4 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      v5 = this->m_pBot;
      iManaCosta = v4;
      hAlliedHeroes_0.m_Size = 0;
      hAlliedHeroes_0.m_Memory.m_pMemory = 0;
      hAlliedHeroes_0.m_Memory.m_nAllocationCount = 0;
      hAlliedHeroes_0.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyCreeps(v5, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hAlliedHeroes_0, 0.0);
      if ( hAlliedHeroes_0.m_Size <= 0 )
        goto LABEL_57;
      v6 = 0;
      iValidCreeps = 0;
      do
      {
LABEL_6:
        v9 = CEntityHandle::operator CEntityInstance *(&hAlliedHeroes_0.m_Memory.m_pMemory[v6]);
        v10 = v9;
        if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
        {
LABEL_5:
          if ( hAlliedHeroes_0.m_Size <= ++v6 )
            break;
          goto LABEL_6;
        }
        v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v11 != 0 && v11->m_bIsDOTANPC )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
          v8 = CBaseEntity::GetAbsOrigin(v10);
          if ( LevelSpecialValue <= fsqrt(
                                      (((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x))
                                     + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y)))
                                    + ((v8->z - AbsOrigin->z) * (v8->z - AbsOrigin->z))) )
            goto LABEL_5;
        }
        else if ( LevelSpecialValue <= -1.0 )
        {
          goto LABEL_5;
        }
        ++iValidCreeps;
        Health = CBaseEntity::GetHealth(v10);
        v13 = iManaCosta - iManaRegenForKill;
        v14 = iDamage <= Health;
        v15 = v6 + 1;
        if ( v14 )
          v13 = iManaCosta;
        ++v6;
        iManaCosta = v13;
      }
      while ( hAlliedHeroes_0.m_Size > v15 );
      if ( iValidCreeps != 0 && (iManaCosta / iValidCreeps) < 50.0 )
      {
LABEL_16:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes_0);
        return 3;
      }
      else
      {
LABEL_57:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes_0);
        return 0;
      }
    default:
      return 0;
  }
  while ( 1 )
  {
    v42 = CEntityHandle::operator CEntityInstance *(&hAlliedHeroes_0.m_Memory.m_pMemory[v39]);
    v43 = v42;
    if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
    {
      iManaCostb = HIBYTE(v42[7].m_CScriptComponent);
      v44 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
      {
        if ( iManaCostb != HIBYTE(v44[7].m_CScriptComponent) )
          goto LABEL_53;
      }
      else if ( iManaCostb != 0 )
      {
LABEL_53:
        iManaCostc = CBaseEntity::GetHealth(v43);
        if ( ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v43, 2)) * iDamage) > iManaCostc )
          goto LABEL_16;
        ++v41;
        goto LABEL_55;
      }
      iManaCostd = (*(v43->_vptr_IHandleEntity + 156))(v43);
      v41 += iHeal < iManaCostd - CBaseEntity::GetHealth(v43);
    }
LABEL_55:
    ++v40;
    ++v39;
    if ( hAlliedHeroes_0.m_Size <= v40 )
    {
      if ( v41 > 2 )
        goto LABEL_16;
      goto LABEL_57;
    }
  }
}


// CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::UseAbility  (line 228, @0x00000000028bf570, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::UseAbility(
        CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse *const this)
{
  CDOTA_Bot_Hero_Necrolyte *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::CDOTA_Bot_AbilityUsage_Necrolyte_Scythe  (line 237, @0x00000000028c40c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::CDOTA_Bot_AbilityUsage_Necrolyte_Scythe(
        CDOTA_Bot_AbilityUsage_Necrolyte_Scythe *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CDEF0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::GetCurrentUsageDesire  (line 244, @0x00000000028cde60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetHealthDeficit, GetInstance, GetSerialNumber, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot::TimeSinceHitByHero (13 total)
// strings: "damage_per_health_scepter", "damage_per_health"
int __fastcall CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Necrolyte_Scythe *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  int v3; // eax
  __int64 v4; // r12
  int v5; // r13d
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // rbx
  int m_Id; // eax
  unsigned __int8 (__fastcall *v9)(CDOTA_Bot_AbilityUsage_Necrolyte_Scythe *const, _QWORD); // r15
  CDOTA_Commander *v10; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rdi
  bool HasScepter; // al
  CDOTABaseAbility *v17; // rdi
  float v18; // xmm0_4
  int v19; // r15d
  int v20; // ebx
  CDOTA_Bot *m_pBot; // rdi
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // cx
  int v25; // edx
  CEntityIdentity *v26; // rdx
  int v27; // eax
  __int16 v28; // cx
  float fOverkilla; // [rsp+Ch] [rbp-54h]
  float fOverkillb; // [rsp+Ch] [rbp-54h]
  float fOverkill; // [rsp+Ch] [rbp-54h]
  float fOverkillc; // [rsp+Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+10h] [rbp-50h] BYREF

  hEnemyHeroes.m_Size = 0;
  m_pAbility = this->m_pAbility;
  hEnemyHeroes.m_Memory.m_pMemory = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(
    this->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &hEnemyHeroes,
    v3 + 300.0);
  if ( hEnemyHeroes.m_Size <= 0 )
  {
LABEL_20:
    this->m_hDesiredTarget.m_Index = -1;
    v20 = 0;
    goto LABEL_21;
  }
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v4]);
    v7 = v6;
    if ( v6 == 0 )
      goto LABEL_19;
    if ( BYTE3(v6[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_19;
    m_Id = v6[43].m_iszPrivateVScripts.u.m_Id;
    if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
      goto LABEL_19;
    if ( (m_Id & 1) != 0 )
    {
      v9 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
      v10 = DOTACommander();
      IllusionState = CDOTA_Commander::GetIllusionState(v10, v7);
      if ( v9(this, IllusionState) == 0 )
        goto LABEL_19;
    }
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v12 == 0 || (v13 = v12, BYTE3(v12[7]._vptr_IHandleEntity) == 0) )
      v13 = 0;
    if ( !IsBotTargetStatusValidCore(v7, v13, 251, -1.0, this->m_pAbility)
      || CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v7) <= 2.0 )
    {
      goto LABEL_19;
    }
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    HasScepter = CDOTA_BaseNPC::HasScepter(v15);
    v17 = this->m_pAbility;
    v18 = HasScepter
        ? CDOTABaseAbility::GetLevelSpecialValueFor<float>(v17, "damage_per_health_scepter", -1, 1)
        : CDOTABaseAbility::GetLevelSpecialValueFor<float>(v17, "damage_per_health", -1, 1);
    fOverkilla = v18;
    v19 = (*(v7->_vptr_IHandleEntity + 156))(v7);
    fOverkillb = fOverkilla * (v19 - CBaseEntity::GetHealth(v7));
    fOverkill = fOverkillb * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v7, 2));
    if ( fOverkill <= CBaseEntity::GetHealth(v7) )
      goto LABEL_19;
    fOverkillc = fOverkill - CBaseEntity::GetHealth(v7);
    if ( (CBaseEntity::GetHealth(v7) * 0.30000001) > fOverkillc )
      break;
    m_pBot = v7->m_pBot;
    if ( m_pBot != 0 && CDOTA_Bot::TimeSinceHitByHero(m_pBot) > 2.0 )
    {
      m_pEntity = v7->m_pEntity;
      if ( m_pEntity != 0 )
      {
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v24 = 0x7FFF;
        else
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v25 = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15;
        LOWORD(this->m_hDesiredTarget.m_Index) = v24 | this->m_hDesiredTarget.m_Index & 0x8000;
LABEL_32:
        v20 = 3;
        this->m_hDesiredTarget.m_Index = v25 | this->m_hDesiredTarget.m_Index & 0x7FFF;
        goto LABEL_21;
      }
      goto LABEL_38;
    }
LABEL_19:
    ++v5;
    ++v4;
    if ( hEnemyHeroes.m_Size <= v5 )
      goto LABEL_20;
  }
  v26 = v7->m_pEntity;
  if ( v26 != 0 )
  {
    v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
    if ( v26->m_EHandle.m_Index == -1 )
      v28 = 0x7FFF;
    else
      v28 = v26->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v28 | this->m_hDesiredTarget.m_Index & 0x8000;
    v25 = v27 << 15;
    goto LABEL_32;
  }
LABEL_38:
  this->m_hDesiredTarget.m_Index = -1;
  v20 = 3;
LABEL_21:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
  return v20;
}


// CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::UseAbility  (line 286, @0x00000000028c0a00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::UseAbility(
        CDOTA_Bot_AbilityUsage_Necrolyte_Scythe *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Necrolyte *m_pBot; // r14
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


