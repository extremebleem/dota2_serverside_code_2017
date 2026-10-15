
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Omniknight::CDOTA_Bot_Hero_Omniknight  (line 21, @0x00000000028d5ed0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "omniknight_purification", "omniknight_guardian_angel"
void __fastcall CDOTA_Bot_Hero_Omniknight::CDOTA_Bot_Hero_Omniknight(
        CDOTA_Bot_Hero_Omniknight *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CE950;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityPurification = CDOTA_BaseNPC::FindAbilityByName(v6, "omniknight_purification", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityRepel = CDOTA_BaseNPC::FindAbilityByName(v8, "omniknight_repel", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityGuardianAngel = CDOTA_BaseNPC::FindAbilityByName(v10, "omniknight_guardian_angel", 1);
}


// CDOTA_Bot_AbilityUsage_Omniknight_Purification::CDOTA_Bot_AbilityUsage_Omniknight_Purification  (line 33, @0x00000000028d5fc0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Omniknight_Purification::CDOTA_Bot_AbilityUsage_Omniknight_Purification(
        CDOTA_Bot_AbilityUsage_Omniknight_Purification *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CEAB0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Omniknight_Purification::GetCurrentUsageDesire  (line 40, @0x00000000028dd020, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetHealthDeficit, GetInstance, GetUnit, Length2D, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::IsAboutToDie, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, _Unwind_Resume, __stack_chk_fail
int __fastcall CDOTA_Bot_AbilityUsage_Omniknight_Purification::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Omniknight_Purification *const this)
{
  int LevelSpecialValue; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v4; // r13d
  int v5; // eax
  CEntityInstance *v6; // rax
  int j; // ebx
  const CBaseEntity *v8; // r12
  CDOTA_Bot *m_pConnections; // rdi
  int v10; // r15d
  int v11; // esi
  CEntityInstance *v12; // rax
  int v13; // ebx
  int v15; // r15d
  int v16; // eax
  const CEntityHandle *p_m_hUnit; // r12
  CEntityInstance *v18; // rax
  CEntityInstance *v19; // rdi
  CDOTALocomotor *v20; // rax
  float v21; // xmm1_4
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // rdi
  const Vector *AbsOrigin; // rax
  CDOTA_Bot_Hero_Omniknight *m_pBot; // rdi
  int m_Size; // r15d
  int v27; // ebx
  CEntityInstance *v28; // rax
  const CBaseEntity *v29; // r12
  __m128i v30; // xmm0
  float v31; // r15d
  CDOTALocomotor *v32; // rax
  float v33; // xmm1_4
  unsigned __int64 v34; // xmm0_8
  __m128i v35; // xmm3
  float v36; // r15d
  const Vector *v37; // rax
  int v38; // esi
  CEntityInstance *v39; // rax
  const CBaseEntity *v40; // rdi
  const Vector *v41; // rax
  EHANDLE hBestTarget; // [rsp+4h] [rbp-27Ch]
  int nBestAffected; // [rsp+Ch] [rbp-274h]
  __int64 i; // [rsp+30h] [rbp-250h]
  int radius; // [rsp+48h] [rbp-238h]
  float vPredictedTargetLocation; // [rsp+4Ch] [rbp-234h]
  float vPredictedTargetLocation_4; // [rsp+50h] [rbp-230h]
  float vPredictedTargetLocation_4a; // [rsp+50h] [rbp-230h]
  float vPredictedTargetLocation_8; // [rsp+54h] [rbp-22Ch]
  CDOTA_Bot *pAlliedBot; // [rsp+58h] [rbp-228h]
  float pAlliedBota; // [rsp+58h] [rbp-228h]
  unsigned __int64 v52; // [rsp+60h] [rbp-220h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyAlliedHeroes; // [rsp+70h] [rbp-210h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyTargetAllies; // [rsp+110h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyTargetEnemies; // [rsp+1B0h] [rbp-D0h] BYREF
  unsigned __int64 v56; // [rsp+248h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "heal", -1, 1);
  m_pAbility = this->m_pAbility;
  v4 = LevelSpecialValue;
  hNearbyAlliedHeroes.m_Size = 0;
  hNearbyAlliedHeroes.m_Memory.m_nAllocationCount = 32;
  hNearbyAlliedHeroes.m_Memory.m_nGrowSize = 0x80000000;
  hNearbyAlliedHeroes.m_Memory.m_pMemory = &hNearbyAlliedHeroes.m_FixedMemory;
  v5 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(
    this->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
    &hNearbyAlliedHeroes,
    v5 + 100.0);
  if ( hNearbyAlliedHeroes.m_Size <= 0 )
    goto LABEL_51;
  i = 0;
  hBestTarget.m_Index = -1;
  nBestAffected = 0;
  while ( 1 )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedHeroes.m_Memory.m_pMemory[i]);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    {
      pAlliedBot = *&v6[45].m_worldGroupId.m_nHashCode;
      if ( pAlliedBot != 0 )
        break;
    }
LABEL_23:
    v16 = i++;
    if ( hNearbyAlliedHeroes.m_Size <= v16 + 1 )
    {
      if ( nBestAffected > 1 )
      {
        v13 = 2;
        this->m_hDesiredTarget = hBestTarget;
        goto LABEL_19;
      }
LABEL_51:
      v13 = 0;
      goto LABEL_19;
    }
  }
  hNearbyTargetAllies.m_Size = 0;
  hNearbyTargetAllies.m_Memory.m_nAllocationCount = 32;
  hNearbyTargetAllies.m_Memory.m_nGrowSize = 0x80000000;
  vPredictedTargetLocation_8 = radius;
  hNearbyTargetAllies.m_Memory.m_pMemory = &hNearbyTargetAllies.m_FixedMemory;
  CDOTA_Bot::GetNearbyHeroes(
    pAlliedBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
    &hNearbyTargetAllies,
    radius);
  for ( j = 0; hNearbyTargetAllies.m_Size > j; ++j )
  {
    v12 = CEntityHandle::operator CEntityInstance *(&hNearbyTargetAllies.m_Memory.m_pMemory[j]);
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      v8 = v12;
    else
      v8 = 0;
    m_pConnections = v8[2].m_OnUser1.m_pConnections;
    if ( m_pConnections != 0 && CDOTA_Bot::IsAboutToDie(m_pConnections) )
    {
      this->m_hDesiredTarget.m_Index = hNearbyAlliedHeroes.m_Memory.m_pMemory[i].m_Index;
      goto LABEL_18;
    }
    v10 = (*(v8->_vptr_IHandleEntity + 156))(v8);
    if ( v4 > v10 - CBaseEntity::GetHealth(v8) )
    {
      v11 = j--;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hNearbyTargetAllies, v11);
    }
  }
  vPredictedTargetLocation_4 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  p_m_hUnit = &pAlliedBot->m_hUnit;
  v18 = CEntityHandle::operator CEntityInstance *(&pAlliedBot->m_hUnit);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v19 = v18;
  else
    v19 = 0;
  v20 = (*(v19->_vptr_IHandleEntity + 376))(v19);
  v52 = CDOTALocomotor::GetAverageVelocityOverTime(v20, 1.0, v21).m128i_u64[0];
  v22 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
    v23 = v22;
  else
    v23 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v23);
  m_pBot = this->m_pBot;
  if ( pAlliedBot == m_pBot )
  {
    v39 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
      v40 = v39;
    else
      v40 = 0;
    v41 = CBaseEntity::GetAbsOrigin(v40);
    m_pBot = this->m_pBot;
    vPredictedTargetLocation = v41->x;
    vPredictedTargetLocation_4a = v41->y;
  }
  else
  {
    vPredictedTargetLocation = AbsOrigin->x + (*&v52 * vPredictedTargetLocation_4);
    vPredictedTargetLocation_4a = AbsOrigin->y + (vPredictedTargetLocation_4 * *(&v52 + 1));
  }
  hNearbyTargetEnemies.m_Size = 0;
  hNearbyTargetEnemies.m_Memory.m_nAllocationCount = 32;
  hNearbyTargetEnemies.m_Memory.m_nGrowSize = 0x80000000;
  hNearbyTargetEnemies.m_Memory.m_pMemory = &hNearbyTargetEnemies.m_FixedMemory;
  CDOTA_Bot::GetNearbyHeroes(
    m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &hNearbyTargetEnemies,
    vPredictedTargetLocation_8 + 400.0);
  m_Size = hNearbyTargetEnemies.m_Size;
  if ( hNearbyTargetEnemies.m_Size <= 0 )
  {
LABEL_20:
    v15 = hNearbyTargetAllies.m_Size + m_Size;
    if ( v15 >= nBestAffected )
    {
      nBestAffected = v15;
      hBestTarget.m_Index = hNearbyAlliedHeroes.m_Memory.m_pMemory[i].m_Index;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargetEnemies);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargetAllies);
    goto LABEL_23;
  }
  v27 = 0;
  while ( 2 )
  {
    v28 = CEntityHandle::operator CEntityInstance *(&hNearbyTargetEnemies.m_Memory.m_pMemory[v27]);
    v29 = v28;
    if ( v28 == 0 || BYTE3(v28[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_38;
    *v30.m128i_i64 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
    v31 = COERCE_FLOAT(_mm_cvtsi128_si32(v30));
    v32 = (*(v29->_vptr_IHandleEntity + 376))(v29);
    v34 = CDOTALocomotor::GetAverageVelocityOverTime(v32, 1.0, v33).m128i_u64[0];
    v35 = _mm_cvtsi32_si128(LODWORD(v31));
    *v35.m128i_i32 = *v35.m128i_i32 * *(&v34 + 1);
    pAlliedBota = v31 * *&v34;
    v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
    v37 = CBaseEntity::GetAbsOrigin(v29);
    if ( vPredictedTargetLocation_8 <= fsqrt(
                                         ((vPredictedTargetLocation - (pAlliedBota + v37->x))
                                        * (vPredictedTargetLocation - (pAlliedBota + v37->x)))
                                       + ((vPredictedTargetLocation_4a - (v36 + v37->y))
                                        * (vPredictedTargetLocation_4a - (v36 + v37->y)))) )
    {
      v38 = v27--;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hNearbyTargetEnemies, v38);
LABEL_37:
      m_Size = hNearbyTargetEnemies.m_Size;
LABEL_38:
      if ( m_Size <= ++v27 )
        goto LABEL_20;
      continue;
    }
    break;
  }
  if ( v4 <= CBaseEntity::GetHealth(v29) )
    goto LABEL_37;
  this->m_hDesiredTarget.m_Index = hNearbyAlliedHeroes.m_Memory.m_pMemory[i].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargetEnemies);
LABEL_18:
  v13 = 3;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargetAllies);
LABEL_19:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedHeroes);
  return v13;
}


// CDOTA_Bot_AbilityUsage_Omniknight_Purification::UseAbility  (line 136, @0x00000000028d3f60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Omniknight_Purification::UseAbility(
        CDOTA_Bot_AbilityUsage_Omniknight_Purification *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Omniknight *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Omniknight_Repel::CDOTA_Bot_AbilityUsage_Omniknight_Repel  (line 149, @0x00000000028d5ff0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Omniknight_Repel::CDOTA_Bot_AbilityUsage_Omniknight_Repel(
        CDOTA_Bot_AbilityUsage_Omniknight_Repel *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CEB10;
  this->m_hDesiredTarget.m_Index = -1;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_Omniknight_Repel::GetCurrentUsageDesire  (line 157, @0x00000000028d93b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_Bot::FindNearbyTeammatesInMode, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CDOTA_Bot*, int>::Purge, CDOTA_BaseNPC::IsInRangeOfFountain, _Unwind_Resume, __stack_chk_fail
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Omniknight_Repel::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Omniknight_Repel *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  int v3; // eax
  __int64 v4; // rbx
  int v5; // r12d
  CDOTA_BaseNPC *m_pInstance; // r13
  int v7; // eax
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTABaseAbility *v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  CDOTA_Bot *v16; // rcx
  CEntityInstance *v17; // rax
  CEntityIdentity *v18; // rax
  int v19; // edx
  __int16 v20; // cx
  int v21; // r12d
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CDOTA_Bot_Hero_Omniknight *m_pBot; // rbx
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rdi
  CEntityInstance *v29; // rax
  __int64 v30; // rax
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > hAlliesGanking; // [rsp+10h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hHeroes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v33; // [rsp+C8h] [rbp-38h]

  hHeroes.m_Size = 0;
  v33 = __readfsqword(0x28u);
  m_pAbility = this->m_pAbility;
  hHeroes.m_Memory.m_pMemory = &hHeroes.m_FixedMemory;
  hHeroes.m_Memory.m_nAllocationCount = 32;
  hHeroes.m_Memory.m_nGrowSize = 0x80000000;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hHeroes, v3 + 200.0);
  v4 = 0;
  v5 = 0;
  if ( hHeroes.m_Size > 0 )
  {
    while ( 1 )
    {
      v8 = &hHeroes.m_Memory.m_pMemory[v4];
      m_Index = hHeroes.m_Memory.m_pMemory[v4].m_Index;
      if ( m_Index + 2 <= 1
        || (v10 = v8->m_Index,
            (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F]) == 0)
        || (v12 = &v11[v10 & 0x1FF]) == 0
        || m_Index != v12->m_EHandle.m_Index
        || (m_pInstance = v12->m_pInstance, v12->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v7 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
      if ( CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, v7, 0, m_pInstance) > 1 )
        break;
      ++v5;
      ++v4;
      if ( hHeroes.m_Size <= v5 )
        goto LABEL_13;
    }
    if ( m_pInstance == 0 )
      goto LABEL_44;
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_44;
LABEL_28:
    v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v24 = 0x7FFF;
    else
      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v21 = 3;
    LOWORD(this->m_hDesiredTarget.m_Index) = v24 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v23 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    goto LABEL_31;
  }
LABEL_13:
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] > 0.75 )
    {
      v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
        v28 = v27;
      else
        v28 = 0;
      if ( !CDOTA_BaseNPC::IsInRangeOfFountain(v28) )
      {
        v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v29 == 0 || BYTE3(v29[7]._vptr_IHandleEntity) == 0 || (m_pEntity = v29->m_pEntity) == 0 )
        {
LABEL_44:
          this->m_hDesiredTarget.m_Index = -1;
          v21 = 3;
          goto LABEL_31;
        }
        goto LABEL_28;
      }
    }
  }
  v13 = this->m_pAbility;
  hAlliesGanking.m_Size = 0;
  hAlliesGanking.m_Memory.m_pMemory = 0;
  hAlliesGanking.m_Memory.m_nAllocationCount = 0;
  hAlliesGanking.m_Memory.m_nGrowSize = 0;
  v14 = (*(v13->_vptr_IHandleEntity + 226))(v13, &vec3_origin, 0);
  if ( CDOTA_Bot::FindNearbyTeammatesInMode(
         this->m_pBot,
         DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
         v14 + 200.0,
         &hAlliesGanking,
         0) <= 2
    || hAlliesGanking.m_Size <= 0 )
  {
LABEL_32:
    this->m_hDesiredTarget.m_Index = -1;
    v21 = 0;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = hAlliesGanking.m_Memory.m_pMemory[v15];
      if ( v16 != 0 && (v16->m_iUnitType & 0x10) != 0 )
        break;
      if ( hAlliesGanking.m_Size <= ++v15 )
      {
        v30 = 0;
        while ( 1 )
        {
          v16 = hAlliesGanking.m_Memory.m_pMemory[v30];
          if ( v16 != 0 && (v16->m_iUnitType & 0x20) != 0 )
            goto LABEL_20;
          if ( hAlliesGanking.m_Size <= ++v30 )
            goto LABEL_32;
        }
      }
    }
LABEL_20:
    v17 = CEntityHandle::operator CEntityInstance *(&v16->m_hUnit);
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 && (v18 = v17->m_pEntity) != 0 )
    {
      v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
      v20 = 0x7FFF;
      if ( v18->m_EHandle.m_Index != -1 )
        v20 = v18->m_EHandle.m_Index & 0x7FFF;
      v21 = 3;
      LOWORD(this->m_hDesiredTarget.m_Index) = v20 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v19 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      v21 = 3;
    }
  }
  hAlliesGanking.m_Size = 0;
  if ( (hAlliesGanking.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot *,int>::Purge(&hAlliesGanking.m_Memory);
    if ( (hAlliesGanking.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot *,int>::Purge(&hAlliesGanking.m_Memory);
  }
LABEL_31:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hHeroes);
  return v21;
}


// CDOTA_Bot_AbilityUsage_Omniknight_Repel::UseAbility  (line 209, @0x00000000028d3da0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Omniknight_Repel::UseAbility(
        CDOTA_Bot_AbilityUsage_Omniknight_Repel *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Omniknight *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel::CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel  (line 222, @0x00000000028d6020, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel::CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel(
        CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CEB70;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel::GetCurrentUsageDesire  (line 230, @0x00000000028dad80, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::FindNearbyTeammatesInMode
int __fastcall CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel *const this)
{
  int NearbyTeammatesInMode; // r12d
  float fRange; // [rsp+Ch] [rbp-14h]

  fRange = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  NearbyTeammatesInMode = CDOTA_Bot::FindNearbyTeammatesInMode(
                            this->m_pBot,
                            DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                            fRange,
                            0,
                            0);
  return 3
       * ((CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_RETREAT, fRange, 0, 0)
         + NearbyTeammatesInMode) >= 3);
}


// CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel::UseAbility  (line 247, @0x00000000028d21b0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel::UseAbility(
        CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel *const this)
{
  CDOTA_Bot_Hero_Omniknight *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


