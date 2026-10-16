
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Lion::CDOTA_Bot_Hero_Lion  (line 21, @0x00000000028c3be0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
void __fastcall CDOTA_Bot_Hero_Lion::CDOTA_Bot_Hero_Lion(
        CDOTA_Bot_Hero_Lion *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CD890;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityImpale = CDOTA_BaseNPC::FindAbilityByName(v6, "lion_impale", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityVoodoo = CDOTA_BaseNPC::FindAbilityByName(v8, "lion_voodoo", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityManaDrain = CDOTA_BaseNPC::FindAbilityByName(v10, "lion_mana_drain", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityFingerOfDeath = CDOTA_BaseNPC::FindAbilityByName(v12, "lion_finger_of_death", 1);
}


// CDOTA_Bot_Hero_Lion::HasLocationStun  (line 32, @0x00000000028bfdf0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
bool __fastcall CDOTA_Bot_Hero_Lion::HasLocationStun(CDOTA_Bot_Hero_Lion *const this)
{
  CDOTABaseAbility *m_pAbilityImpale; // rbx

  m_pAbilityImpale = this->m_pAbilityImpale;
  return CDOTABaseAbility::GetEffectiveLevel(m_pAbilityImpale) >= 0
      && (*(m_pAbilityImpale->_vptr_IHandleEntity + 245))(m_pAbilityImpale) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityImpale)
      && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityImpale, -1);
}


// CDOTA_Bot_AbilityUsage_Lion_Impale::CDOTA_Bot_AbilityUsage_Lion_Impale  (line 41, @0x00000000028c3d10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lion_Impale::CDOTA_Bot_AbilityUsage_Lion_Impale(
        CDOTA_Bot_AbilityUsage_Lion_Impale *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD990;  // vptr: CDOTA_Bot_AbilityUsage_Lion_Impale
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lion_Impale::GetCurrentUsageDesire  (line 48, @0x00000000028ccc60, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::GetGenericStunDesire
// strings: "length_buffer"
int __fastcall CDOTA_Bot_AbilityUsage_Lion_Impale::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lion_Impale *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // eax

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "length_buffer", -1, 1);
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 229))(this->m_pAbility, &vec3_origin, 0);
  return CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::GetGenericStunDesire(
           this,
           1,
           &this->m_hDesiredTarget,
           (v3 + LevelSpecialValue));
}


// CDOTA_Bot_AbilityUsage_Lion_Impale::UseAbility  (line 57, @0x00000000028c8550, libserver.so)  // inlines: FastSqrt, Get, GetInstance, GetUnit, Length2D, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTALocomotor::GetAverageVelocityOverTime, VectorNormalize, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Lion_Impale::UseAbility(CDOTA_Bot_AbilityUsage_Lion_Impale *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // r12
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rdi
  const Vector *AbsOrigin; // r13
  const Vector *v7; // rax
  float v8; // xmm1_4
  __m128i x_low; // xmm0
  float v10; // r15d
  int LevelSpecialValue; // r14d
  double v12; // xmm0_8
  CDOTALocomotor *v13; // rax
  float v14; // xmm1_4
  vec_t v15; // xmm1_4
  const Vector *v16; // rax
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rdi
  const Vector *v19; // rax
  vec_t v20; // xmm2_4
  vec_t v21; // xmm0_4
  float v22; // xmm0_4
  CDOTABaseAbility *v23; // r12
  CDOTA_Bot_Hero_Lion *v24; // r14
  int v25; // eax
  __m128i y_low; // xmm6
  __m128i v27; // xmm7
  float v28; // r13d
  CEntityInstance *v29; // rax
  const CBaseEntity *v30; // rdi
  const Vector *v31; // rax
  vec_t v32; // xmm0_4
  vec_t v33; // xmm2_4
  CDOTA_BotAction_UseAbility *v34; // r13
  CDOTA_Bot_Hero_Lion *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  float v37; // [rsp+8h] [rbp-58h]
  float v38; // [rsp+8h] [rbp-58h]
  float v39; // [rsp+8h] [rbp-58h]
  Vector vToTargetLocation; // [rsp+Ch] [rbp-54h] BYREF
  float v41; // [rsp+18h] [rbp-48h]
  Vector vLocation; // [rsp+20h] [rbp-40h] BYREF

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hDesiredTarget);
  v3 = v2;
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v4 == 0 || (v5 = v4, BYTE3(v4[7]._vptr_IHandleEntity) == 0) )
      v5 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    v7 = CBaseEntity::GetAbsOrigin(v3);
    v8 = v7->y - AbsOrigin->y;
    vToTargetLocation.x = ((v7->x - AbsOrigin->x) * (v7->x - AbsOrigin->x)) + (v8 * v8);
    x_low = LODWORD(vToTargetLocation.x);
    *x_low.m128i_i32 = fsqrt(vToTargetLocation.x);
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    if ( v10 <= (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) )
    {
      m_pBot = this->m_pBot;
      m_pAbility = this->m_pAbility;
      v34 = operator new(0xC0u);
      CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v34, m_pBot, m_pAbility, v3);
    }
    else
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "speed", -1, 1);
      v12 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      vToTargetLocation.x = *&v12 + (v10 / LevelSpecialValue);
      v13 = (*(v3->_vptr_IHandleEntity + 376))(v3);
      *&vLocation.x = CDOTALocomotor::GetAverageVelocityOverTime(v13, 1.0, v14).m128i_u64[0];
      vLocation.z = v15;
      v37 = vToTargetLocation.x * vLocation.y;
      v16 = CBaseEntity::GetAbsOrigin(v3);
      vToTargetLocation.x = (vLocation.x * vToTargetLocation.x) + v16->x;
      v38 = v37 + v16->y;
      v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
        v18 = v17;
      else
        v18 = 0;
      v19 = CBaseEntity::GetAbsOrigin(v18);
      v20 = v38 - v19->y;
      v21 = vToTargetLocation.x - v19->x;
      v41 = 0.0;
      vToTargetLocation.z = v20;
      vToTargetLocation.y = v21;
      v22 = VectorNormalize(&vToTargetLocation.y);
      v23 = this->m_pAbility;
      v24 = this->m_pBot;
      v25 = (*(v23->_vptr_IHandleEntity + 226))(v23, &vec3_origin, 0, v22);
      y_low = LODWORD(vToTargetLocation.y);
      *y_low.m128i_i32 = vToTargetLocation.y * v25;
      v27 = y_low;
      *v27.m128i_i32 = *y_low.m128i_i32 * 0.5;
      v39 = (vToTargetLocation.z * v25) * 0.5;
      v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
      vToTargetLocation.x = 0.5 * (v25 * v41);
      v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
        v30 = v29;
      else
        v30 = 0;
      v31 = CBaseEntity::GetAbsOrigin(v30);
      v32 = vToTargetLocation.x + v31->z;
      v33 = v28 + v31->x;
      vLocation.y = v39 + v31->y;
      vLocation.z = v32;
      vLocation.x = v33;
      v34 = operator new(0xC0u);
      CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v34, v24, v23, &vLocation);
    }
    CDOTA_Bot::PushAction(this->m_pBot, v34);
  }
}


// CDOTA_Bot_AbilityUsage_Lion_Voodoo::CDOTA_Bot_AbilityUsage_Lion_Voodoo  (line 84, @0x00000000028c3d40, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lion_Voodoo::CDOTA_Bot_AbilityUsage_Lion_Voodoo(
        CDOTA_Bot_AbilityUsage_Lion_Voodoo *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD9F0;  // vptr: CDOTA_Bot_AbilityUsage_Lion_Voodoo
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lion_Voodoo::GetCurrentUsageDesire  (line 91, @0x00000000028c6850, libserver.so)
// calls: CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::GetGenericStunDesire
int __fastcall CDOTA_Bot_AbilityUsage_Lion_Voodoo::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lion_Voodoo *const this)
{
  return CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::GetGenericStunDesire(
           this,
           0,
           &this->m_hDesiredTarget,
           0.0);
}


// CDOTA_Bot_AbilityUsage_Lion_Voodoo::UseAbility  (line 98, @0x00000000028c0d80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lion_Voodoo::UseAbility(CDOTA_Bot_AbilityUsage_Lion_Voodoo *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lion *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Lion_ManaDrain::CDOTA_Bot_AbilityUsage_Lion_ManaDrain  (line 111, @0x00000000028c3d70, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lion_ManaDrain::CDOTA_Bot_AbilityUsage_Lion_ManaDrain(
        CDOTA_Bot_AbilityUsage_Lion_ManaDrain *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CDA50;  // vptr: CDOTA_Bot_AbilityUsage_Lion_ManaDrain
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lion_ManaDrain::GetCurrentUsageDesire  (line 118, @0x00000000028cd280, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetInstance, GetMaxMana, GetSerialNumber, GetUnit, IsBotTargetStatusValid, Set, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyCreeps, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "mana_per_second"
int __fastcall CDOTA_Bot_AbilityUsage_Lion_ManaDrain::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lion_ManaDrain *const this)
{
  CEntityInstance *v2; // rax
  const CBaseEntity *v3; // rdi
  const Vector *AbsOrigin; // rax
  int LevelSpecialValue; // eax
  CDOTA_Bot_Hero_Lion *m_pBot; // r12
  CEntityInstance *v8; // rax
  float v9; // xmm0_4
  unsigned int v10; // ecx
  CDOTABaseAbility *m_pAbility; // rdi
  int v12; // eax
  __int64 v13; // r12
  int v14; // r13d
  CDOTA_BaseNPC *v15; // r14
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rsi
  CEntityInstance *v18; // rax
  CEntityIdentity *m_pEntity; // rax
  int v20; // edx
  __int16 v21; // cx
  float fDuration; // [rsp+8h] [rbp-58h]
  float fManaGained; // [rsp+Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyCreeps; // [rsp+10h] [rbp-50h] BYREF

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  if ( CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, AbsOrigin, 0) > 10 )
    goto LABEL_5;
  fDuration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "duration", -1, 1);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "mana_per_second", -1, 1);
  m_pBot = this->m_pBot;
  fManaGained = LevelSpecialValue * fDuration;
  v8 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
  {
    v9 = *&v8[44].m_worldGroupId.m_nHashCode;
  }
  else
  {
    LODWORD(v9) = 7496;
    v8 = 0;
  }
  if ( (v9 - *&v8[44].m_iszPrivateVScripts.u.m_Id) <= fManaGained )
    goto LABEL_5;
  v10 = (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) - 1;
  if ( v10 > 0x10 || ((1LL << v10) & 0x10381) == 0 )
    goto LABEL_5;
  m_pAbility = this->m_pAbility;
  hNearbyEnemyCreeps.m_Size = 0;
  hNearbyEnemyCreeps.m_Memory.m_pMemory = 0;
  hNearbyEnemyCreeps.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemyCreeps.m_Memory.m_nGrowSize = 0;
  v12 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyCreeps(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyCreeps, v12);
  v13 = 0;
  v14 = 0;
  if ( hNearbyEnemyCreeps.m_Size <= 0 )
  {
LABEL_33:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyCreeps);
LABEL_5:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  while ( 1 )
  {
    v18 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyCreeps.m_Memory.m_pMemory[v13]);
    if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
      v15 = v18;
    else
      v15 = 0;
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
      v17 = v16;
    else
      v17 = 0;
    if ( IsBotTargetStatusValidCore(v15, v17, 251, -1.0, this->m_pAbility)
      && v15->m_flMana.m_Value > fManaGained
      && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v15) > fDuration )
    {
      break;
    }
    ++v14;
    ++v13;
    if ( hNearbyEnemyCreeps.m_Size <= v14 )
      goto LABEL_33;
  }
  m_pEntity = v15->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v21 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v21 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v20 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyCreeps);
  return 1;
}


// CDOTA_Bot_AbilityUsage_Lion_ManaDrain::UseAbility  (line 172, @0x00000000028c0840, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lion_ManaDrain::UseAbility(CDOTA_Bot_AbilityUsage_Lion_ManaDrain *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lion *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath  (line 185, @0x00000000028c3da0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath(
        CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CDAB0;  // vptr: CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::GetCurrentUsageDesire  (line 192, @0x00000000028c6040, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::FindNearbyTeammatesInMode, IsBotTargetStatusValidCore, CDOTA_Bot::IsAboutToDie, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath *const this)
{
  int v3; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v5; // eax
  __int64 v6; // r14
  int v7; // r13d
  CDOTA_BaseNPC *v8; // rsi
  CDOTA_Bot *m_pBot; // rdi
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // r12
  int m_Id; // eax
  CDOTA_Commander *v13; // rax
  __int64 IllusionState; // rsi
  CEntityInstance *v15; // rax
  __int64 v16; // r12
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // r13
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rsi
  CDOTA_Bot *v21; // rdi
  CEntityIdentity *m_pEntity; // rax
  int v23; // edx
  __int16 v24; // cx
  __int64 v25; // r13
  CEntityInstance *v26; // rax
  CDOTA_BaseNPC *v27; // r12
  CEntityInstance *v28; // rax
  CDOTA_BaseNPC *v29; // rsi
  int v30; // r14d
  int v31; // r14d
  CDOTA_Bot *v32; // rdi
  bool IsAboutToDie; // al
  bool v34; // zf
  int v35; // eax
  CEntityIdentity *v36; // rdx
  int v37; // eax
  __int16 v38; // cx
  CDOTA_BaseNPC_Hero *pBestTarget; // [rsp+8h] [rbp-68h]
  int iLagunaBladeDamage; // [rsp+10h] [rbp-60h]
  int iBestOverkill; // [rsp+14h] [rbp-5Ch]
  unsigned __int8 (__fastcall *fMaxRangec)(CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath *const, __int64); // [rsp+18h] [rbp-58h]
  float fMaxRange; // [rsp+18h] [rbp-58h]
  float fMaxRangea; // [rsp+18h] [rbp-58h]
  float fMaxRangeb; // [rsp+18h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+20h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 1 > 5 )
    goto LABEL_2;
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  m_pAbility = this->m_pAbility;
  hEnemyHeroes.m_Size = 0;
  hEnemyHeroes.m_Memory.m_pMemory = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0;
  iLagunaBladeDamage = v3;
  v5 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemyHeroes, v5);
  if ( CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, 0) <= 1
    || hEnemyHeroes.m_Size <= 0 )
  {
LABEL_70:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
LABEL_2:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v6 = 0;
  v7 = 0;
  do
  {
    v10 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v6]);
    v11 = v10;
    if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v10[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
      {
        fMaxRangec = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v13 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v13, v11);
        if ( fMaxRangec(this, IllusionState) != 0 )
        {
          fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
          v15 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
            v8 = v15;
          else
            v8 = 0;
          if ( IsBotTargetStatusValidCore(v11, v8, 251, fMaxRange, this->m_pAbility) )
          {
            m_pBot = v11->m_pBot;
            if ( m_pBot != 0
              && !CDOTA_Bot::IsAboutToDie(m_pBot)
              && (v11->m_pBot->CDOTA_BaseNPC_Additive::CDOTA_BaseNPC::m_iUnitType & 0x10) != 0 )
            {
              m_pEntity = v11->m_pEntity;
              if ( m_pEntity != 0 )
              {
LABEL_37:
                v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v24 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hDesiredTarget.m_Index) = v24 | this->m_hDesiredTarget.m_Index & 0x8000;
                this->m_hDesiredTarget.m_Index = (v23 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
              }
              else
              {
LABEL_43:
                this->m_hDesiredTarget.m_Index = -1;
              }
              goto LABEL_40;
            }
          }
        }
      }
    }
    ++v7;
    ++v6;
  }
  while ( hEnemyHeroes.m_Size > v7 );
  if ( hEnemyHeroes.m_Size <= 0 )
    goto LABEL_70;
  v16 = 0;
  do
  {
    v17 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v16]);
    if ( v17 == 0
      || BYTE3(v17[7]._vptr_IHandleEntity) == 0
      || (v18 = v17, (v17[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v18 = 0;
    }
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v18) )
    {
      fMaxRangea = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
      v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
        v20 = v19;
      else
        v20 = 0;
      if ( IsBotTargetStatusValidCore(v18, v20, 251, fMaxRangea, this->m_pAbility) )
      {
        v21 = v18->m_pBot;
        if ( v21 != 0 && !CDOTA_Bot::IsAboutToDie(v21) && (v18->m_pBot->m_iUnitType & 0x20) != 0 )
        {
          m_pEntity = v18->m_pEntity;
          if ( m_pEntity == 0 )
            goto LABEL_43;
          goto LABEL_37;
        }
      }
    }
    ++v16;
  }
  while ( hEnemyHeroes.m_Size > v16 );
  if ( hEnemyHeroes.m_Size <= 0 )
    goto LABEL_70;
  v25 = 0;
  iBestOverkill = 99999;
  pBestTarget = 0;
  do
  {
    while ( 1 )
    {
      v26 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v25]);
      v27 = v26;
      if ( v26 == 0 || BYTE3(v26[7]._vptr_IHandleEntity) == 0 || (v26[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        v27 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v27) )
      {
        fMaxRangeb = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        v28 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
          v29 = v28;
        else
          v29 = 0;
        if ( IsBotTargetStatusValidCore(v27, v29, 251, fMaxRangeb, this->m_pAbility) )
        {
          v30 = (iLagunaBladeDamage * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v27, 2)));
          v31 = v30 - CBaseEntity::GetHealth(v27);
          if ( v31 < iBestOverkill && v31 > 0 )
          {
            v32 = v27->m_pBot;
            if ( v32 != 0 )
              break;
          }
        }
      }
      if ( hEnemyHeroes.m_Size <= ++v25 )
        goto LABEL_64;
    }
    IsAboutToDie = CDOTA_Bot::IsAboutToDie(v32);
    v34 = !IsAboutToDie;
    if ( IsAboutToDie )
      v31 = iBestOverkill;
    v35 = v25 + 1;
    if ( !v34 )
      v27 = pBestTarget;
    ++v25;
    iBestOverkill = v31;
    pBestTarget = v27;
  }
  while ( hEnemyHeroes.m_Size > v35 );
LABEL_64:
  if ( pBestTarget == 0 )
    goto LABEL_70;
  v36 = pBestTarget->m_pEntity;
  if ( v36 == 0 )
    goto LABEL_43;
  v37 = (v36->m_EHandle.m_Index >> 15) - (v36->m_flags & 1);
  v38 = 0x7FFF;
  if ( v36->m_EHandle.m_Index != -1 )
    v38 = v36->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hDesiredTarget.m_Index) = v38 | this->m_hDesiredTarget.m_Index & 0x8000;
  this->m_hDesiredTarget.m_Index = (v37 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
LABEL_40:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
  return 3;
}


// CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::UseAbility  (line 274, @0x00000000028c0e60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::UseAbility(
        CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lion *m_pBot; // r14
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


