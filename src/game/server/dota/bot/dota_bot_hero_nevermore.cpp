
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Nevermore::CDOTA_Bot_Hero_Nevermore  (line 21, @0x00000000028d5d50, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "nevermore_shadowraze1", "nevermore_shadowraze2", "nevermore_shadowraze3"
void __fastcall CDOTA_Bot_Hero_Nevermore::CDOTA_Bot_Hero_Nevermore(
        CDOTA_Bot_Hero_Nevermore *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CE6F0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityShadowraze1 = CDOTA_BaseNPC::FindAbilityByName(v6, "nevermore_shadowraze1", 0);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityShadowraze2 = CDOTA_BaseNPC::FindAbilityByName(v8, "nevermore_shadowraze2", 0);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityShadowraze3 = CDOTA_BaseNPC::FindAbilityByName(v10, "nevermore_shadowraze3", 0);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityRequiem = CDOTA_BaseNPC::FindAbilityByName(v12, "nevermore_requiem", 0);
}


// CDOTA_Bot_Hero_Nevermore::CreateMode  (line 32, @0x00000000028d2010, libserver.so)  // inlines: CDOTA_BotMode_Attack_Nevermore
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Nevermore::CreateMode(CDOTA_Bot_Hero_Nevermore *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42CE7F0;
  return v4;
}


// CDOTA_Bot_Hero_Nevermore::GetGankDistance  (line 47, @0x00000000028da8b0, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsListeningToEvent, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "shadowraze_range"
int __fastcall CDOTA_Bot_Hero_Nevermore::GetGankDistance(CDOTA_Bot_Hero_Nevermore *const this)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v3; // r12
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm3_4
  __int64 v6; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm1_4
  __int64 v9; // rax
  float v10; // xmm2_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18; // ebx
  CDOTABaseAbility *m_pAbilityShadowraze1; // rdi
  CDOTABaseAbility **v20; // r12
  int v21; // eax
  __int64 v23; // rax
  float v24; // [rsp+8h] [rbp-48h]
  float v25; // [rsp+8h] [rbp-48h]
  float v26; // [rsp+Ch] [rbp-44h]
  float v27; // [rsp+Ch] [rbp-44h]
  float v28; // [rsp+Ch] [rbp-44h]
  float v29; // [rsp+Ch] [rbp-44h]
  CDOTABaseAbility *pShadowrazes[3]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v31; // [rsp+28h] [rbp-28h] BYREF

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  m_hScope_high = HIBYTE(v3[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Highest_Internal = 0.0;
  if ( m_hScope_high != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v3[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v6 = BYTE5(v3[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
  if ( v6 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v6) > 0 )
  {
    v24 = Modifier_Constant_Highest_Internal;
    v26 = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v3[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v24;
    m_hScope_low = v26;
  }
  v9 = BYTE6(v3[67].m_hPrivateScope.m_hScope);
  v10 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v11 = 0.0;
  if ( v9 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v9) > 0 )
  {
    v25 = Modifier_Constant_Highest_Internal;
    v27 = v10;
    v11 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v3[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v25;
    v10 = v27;
  }
  if ( Modifier_Constant_Highest_Internal > (v10 + v11) )
  {
    v23 = HIBYTE(v3[67].m_hPrivateScope.m_hScope);
    v18 = 200;
    if ( v23 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v23) > 0 )
      v18 = (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               &v3[64].m_worldGroupId,
               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
               &CModifierParams::s_Default)
           + 200.0);
  }
  else
  {
    v12 = BYTE5(v3[67].m_hPrivateScope.m_hScope);
    v13 = 0.0;
    v14 = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
    if ( v12 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v12) > 0 )
    {
      v28 = SLODWORD(v3[47].m_hPrivateScope.m_hScope);
      v13 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v3[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v14 = v28;
    }
    v15 = BYTE6(v3[67].m_hPrivateScope.m_hScope);
    v16 = v14 + v13;
    v17 = 0.0;
    if ( v15 != 0xFF && *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v15) > 0 )
    {
      v29 = v16;
      v17 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v3[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v16 = v29;
    }
    v18 = ((v17 + v16) + 200.0);
  }
  m_pAbilityShadowraze1 = this->m_pAbilityShadowraze1;
  pShadowrazes[1] = this->m_pAbilityShadowraze2;
  v20 = &pShadowrazes[1];
  pShadowrazes[2] = this->m_pAbilityShadowraze3;
  while ( 1 )
  {
    v21 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbilityShadowraze1, "shadowraze_range", -1, 1) + 200;
    if ( v18 < v21 )
      v18 = v21;
    if ( v20 == &v31 )
      break;
    m_pAbilityShadowraze1 = *v20++;
  }
  return v18;
}


// CDOTA_BotMode_Attack_Nevermore::CalculateDesiredLocation  (line 64, @0x00000000028d4de0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BotMode_Attack::CalculateDesiredLocation
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Attack_Nevermore::CalculateDesiredLocation(CDOTA_BotMode_Attack_Nevermore *const this)
{
  CDOTA_Bot *m_pBot; // r12
  CEntityInstance *v3; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v9; // rdx
  Vector v12; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( SLOBYTE(CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value) < 0
    && (m_pBot = this->m_pBot, (v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget)) != 0)
    && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    m_Index = m_pBot->m_hTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[m_pBot->m_hTarget.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v9 = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    *&v12.x = v9;
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


// CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze  (line 79, @0x00000000028d5e70, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze(
        CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility,
        int iShadowrazeLevel)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CE890;
  this->m_iShadowrazeLevel = iShadowrazeLevel;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::GetCurrentUsageDesire  (line 88, @0x00000000028dbb60, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetTeamNumber, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Length2D, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTALocomotor::GetAverageVelocityOverTime, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "shadowraze_range", "shadowraze_radius"
// globals: jpt_28DBB9D, CEntityHandle::gm_pEntityList, CSWTCH.12529
int __fastcall CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze *const this)
{
  CDOTA_Bot_Hero_Nevermore *v2; // rbx
  CEntityInstance *v3; // rax
  int v4; // ebx
  CDOTA_Bot_Hero_Nevermore *v6; // rbx
  unsigned __int8 (__fastcall *v7)(CDOTA_Bot_Hero_Nevermore *, _QWORD); // r12
  unsigned int v8; // eax
  CDOTA_Bot_Hero_Nevermore *m_pBot; // rbx
  unsigned __int8 (__fastcall *v10)(CDOTA_Bot_Hero_Nevermore *, _QWORD); // r12
  unsigned int v11; // eax
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // rdi
  int LevelSpecialValue; // r12d
  __m128i v15; // xmm0
  __m128i x_low; // xmm5
  __m128i y_low; // xmm6
  float v18; // r14d
  float v19; // ebx
  float v20; // r12d
  CEntityInstance *v21; // rax
  const CBaseEntity *v22; // rdi
  const Vector *AbsOrigin; // rax
  vec_t v24; // xmm1_4
  vec_t v25; // xmm2_4
  vec_t v26; // xmm0_4
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rdx
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v30; // r14
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  unsigned __int8 (__fastcall *v34)(CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze *const, _QWORD); // r15
  CDOTA_Commander *v35; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // rsi
  CDOTALocomotor *v39; // rax
  float v40; // xmm1_4
  unsigned __int64 v41; // xmm0_8
  int v42; // xmm1_4
  const Vector *v43; // rax
  char v44; // di
  __int64 v45; // rax
  int iRequiredEnemyHeroCount; // [rsp+18h] [rbp-C8h]
  int v47; // [rsp+1Ch] [rbp-C4h]
  CDOTA_BaseNPC_Hero *v48; // [rsp+28h] [rbp-B8h]
  char v49; // [rsp+32h] [rbp-AEh]
  char v50; // [rsp+33h] [rbp-ADh]
  int iEnemyHeroCount; // [rsp+34h] [rbp-ACh]
  int iEnemyTargetCount; // [rsp+38h] [rbp-A8h]
  bool bFoundRequiredTarget; // [rsp+3Fh] [rbp-A1h]
  int iRadius; // [rsp+40h] [rbp-A0h]
  float v55; // [rsp+44h] [rbp-9Ch]
  float flRadius; // [rsp+48h] [rbp-98h]
  float fCastPoint; // [rsp+4Ch] [rbp-94h]
  EHANDLE hEnemy; // [rsp+50h] [rbp-90h]
  Vector vDirection; // [rsp+60h] [rbp-80h] BYREF
  Vector vLoc; // [rsp+70h] [rbp-70h] BYREF
  unsigned __int64 v61; // [rsp+80h] [rbp-60h]
  int v62; // [rsp+88h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemies; // [rsp+90h] [rbp-50h] BYREF

  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
      m_pBot = this->m_pBot;
      v10 = *(m_pBot->_vptr_CDOTA_Bot + 10);
      v11 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v10(m_pBot, v11) == 0 )
        return 0;
      iRequiredEnemyHeroCount = 1;
      goto LABEL_10;
    case 2u:
      v2 = this->m_pBot;
      v3 = CEntityHandle::operator CEntityInstance *(&v2->m_hTarget);
      v48 = v3;
      if ( v3 == 0 )
        return 0;
      v49 = BYTE3(v3[7]._vptr_IHandleEntity);
      if ( v49 == 0 )
        return 0;
      v50 = 0;
      iRequiredEnemyHeroCount = 0;
      v47 = 0;
      goto LABEL_11;
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0x11u:
      v6 = this->m_pBot;
      v7 = *(v6->_vptr_CDOTA_Bot + 10);
      v8 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v7(v6, v8) == 0 )
        return 0;
      iRequiredEnemyHeroCount = 0;
LABEL_10:
      v2 = this->m_pBot;
      v49 = 0;
      v50 = 1;
      v47 = 3;
      v48 = 0;
LABEL_11:
      v12 = CEntityHandle::operator CEntityInstance *(&v2->m_hUnit);
      if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
        v13 = v12;
      else
        v13 = 0;
      (*(v13->_vptr_IHandleEntity + 61))(v13, &vDirection, 0, 0);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "shadowraze_range", -1, 1);
      iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "shadowraze_radius", -1, 1);
      *v15.m128i_i64 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      x_low = LODWORD(vDirection.x);
      fCastPoint = *v15.m128i_i32;
      y_low = LODWORD(vDirection.y);
      *x_low.m128i_i32 = vDirection.x * LevelSpecialValue;
      *y_low.m128i_i32 = vDirection.y * LevelSpecialValue;
      *v15.m128i_i32 = LevelSpecialValue * vDirection.z;
      v18 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
      v19 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
      v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
      v24 = v19 + AbsOrigin->y;
      v25 = v18 + AbsOrigin->x;
      hEnemies.m_Size = 0;
      v26 = v20 + AbsOrigin->z;
      hEnemies.m_Memory.m_pMemory = 0;
      vLoc.y = v24;
      vLoc.x = v25;
      vLoc.z = v26;
      hEnemies.m_Memory.m_nAllocationCount = 0;
      hEnemies.m_Memory.m_nGrowSize = 0;
      v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      v28 = 0;
      if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
        v28 = v27;
      FindUnitsInRadius(v28->m_iTeamNum.m_Value, &vLoc, v28, (2 * iRadius), &hEnemies, 2, 3, 0, 0, 0);
      iEnemyHeroCount = 0;
      m_pMemory = hEnemies.m_Memory.m_pMemory;
      iEnemyTargetCount = 0;
      v30 = &hEnemies.m_Memory.m_pMemory[hEnemies.m_Size];
      if ( hEnemies.m_Memory.m_pMemory == v30 )
        goto LABEL_41;
      bFoundRequiredTarget = 0;
      break;
    default:
      return 0;
  }
  do
  {
    while ( 1 )
    {
      hEnemy.m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEnemy.m_Index) >> 9) & 0x3F];
        if ( v31 != 0 )
        {
          v32 = &v31[hEnemy.m_Index & 0x1FF];
          if ( v32 != 0 && m_pMemory->m_Index == v32->m_EHandle.m_Index )
          {
            m_pInstance = v32->m_pInstance;
            if ( v32->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
            {
              if ( (m_pInstance->m_iUnitType & 1) == 0
                || (v34 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                    v35 = DOTACommander(),
                    IllusionState = CDOTA_Commander::GetIllusionState(v35, m_pInstance),
                    v34(this, IllusionState) != 0) )
              {
                v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v37 == 0 || (v38 = v37, BYTE3(v37[7]._vptr_IHandleEntity) == 0) )
                  v38 = 0;
                if ( IsBotTargetStatusValidCore(m_pInstance, v38, 251, -1.0, this->m_pAbility) )
                {
                  v39 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
                  v41 = CDOTALocomotor::GetAverageVelocityOverTime(v39, fCastPoint, v40).m128i_u64[0];
                  v62 = v42;
                  v61 = v41;
                  flRadius = *&v41 * fCastPoint;
                  v55 = fCastPoint * *(&v41 + 1);
                  v43 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  if ( fsqrt(
                         (((flRadius + v43->x) - vLoc.x) * ((flRadius + v43->x) - vLoc.x))
                       + (((v55 + v43->y) - vLoc.y) * ((v55 + v43->y) - vLoc.y))) <= iRadius )
                    break;
                }
              }
            }
          }
        }
      }
      if ( v30 == ++m_pMemory )
        goto LABEL_40;
    }
    ++iEnemyTargetCount;
    v44 = bFoundRequiredTarget;
    iEnemyHeroCount -= ((m_pInstance->m_iUnitType & 1) == 0) - 1;
    if ( m_pInstance == v48 )
      v44 = 1;
    ++m_pMemory;
    bFoundRequiredTarget = v44;
  }
  while ( v30 != m_pMemory );
LABEL_40:
  if ( bFoundRequiredTarget )
    goto LABEL_42;
LABEL_41:
  v4 = 0;
  if ( v50 != 0 )
  {
LABEL_42:
    if ( iEnemyTargetCount >= v47 || (v4 = 0, v49 != 0) )
    {
      if ( iEnemyHeroCount >= iRequiredEnemyHeroCount || (v4 = 0, iRequiredEnemyHeroCount == 0) )
      {
        v4 = 2;
        v45 = (this->m_iShadowrazeLevel - 1);
        if ( v45 <= 2 )
          v4 = CSWTCH_12529[v45];
      }
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemies);
  return v4;
}


// CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::UseAbility  (line 197, @0x00000000028d20f0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::UseAbility(
        CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze *const this)
{
  CDOTA_Bot_Hero_Nevermore *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Nevermore_Requiem::CDOTA_Bot_AbilityUsage_Nevermore_Requiem  (line 206, @0x00000000028d5e90, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Nevermore_Requiem::CDOTA_Bot_AbilityUsage_Nevermore_Requiem(
        CDOTA_Bot_AbilityUsage_Nevermore_Requiem *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CE8F0;
}


// CDOTA_Bot_AbilityUsage_Nevermore_Requiem::GetCurrentUsageDesire  (line 213, @0x00000000028dc120, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetTeamNumber, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, end, operator CBaseEntity*, operator CEntityInstance*, ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTA_Bot_AbilityUsage_Nevermore_Requiem::EstimateTargetLinesHit, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "requiem_radius"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Nevermore_Requiem::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Nevermore_Requiem *const this)
{
  int v2; // ebx
  CEntityInstance *v4; // rax
  int LevelSpecialValue; // eax
  __m128i v6; // xmm1
  CDOTA_Bot_Hero_Nevermore *m_pBot; // rax
  float v8; // r12d
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rbx
  const Vector *AbsOrigin; // r14
  CEntityInstance *v12; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v14; // r14
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  unsigned __int8 (__fastcall *v18)(CDOTA_Bot_AbilityUsage_Nevermore_Requiem *const, _QWORD); // r15
  CDOTA_Commander *v19; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rsi
  int v23; // eax
  CDOTA_BaseNPC *pTarget; // [rsp+20h] [rbp-70h]
  int iLinesHittingHeroes; // [rsp+2Ch] [rbp-64h]
  EHANDLE hEnemyHero; // [rsp+30h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+40h] [rbp-50h] BYREF

  v2 = 0;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    pTarget = v4;
    if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "requiem_radius", -1, 1);
      hEnemyHeroes.m_Size = 0;
      *v6.m128i_i32 = LevelSpecialValue;
      m_pBot = this->m_pBot;
      hEnemyHeroes.m_Memory.m_pMemory = 0;
      hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
      hEnemyHeroes.m_Memory.m_nGrowSize = 0;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      v9 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v9 != 0 )
      {
        v10 = 0;
        if ( BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
          v10 = v9;
      }
      else
      {
        v10 = 0;
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
        v12 = 0;
      FindUnitsInRadius(HIBYTE(v12[7].m_CScriptComponent), AbsOrigin, v10, v8, &hEnemyHeroes, 2, 1, 0, 0, 0);
      m_pMemory = hEnemyHeroes.m_Memory.m_pMemory;
      v14 = &hEnemyHeroes.m_Memory.m_pMemory[hEnemyHeroes.m_Size];
      if ( hEnemyHeroes.m_Memory.m_pMemory == v14 )
        goto LABEL_32;
      iLinesHittingHeroes = 0;
      do
      {
        while ( 1 )
        {
          hEnemyHero.m_Index = m_pMemory->m_Index;
          if ( m_pMemory->m_Index + 2 > 1 )
          {
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEnemyHero.m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[hEnemyHero.m_Index & 0x1FF];
              if ( v16 != 0 && m_pMemory->m_Index == v16->m_EHandle.m_Index )
              {
                m_pInstance = v16->m_pInstance;
                if ( v16->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
                {
                  if ( (m_pInstance->m_iUnitType & 1) == 0
                    || (v18 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                        v19 = DOTACommander(),
                        IllusionState = CDOTA_Commander::GetIllusionState(v19, m_pInstance),
                        v18(this, IllusionState) != 0) )
                  {
                    v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                    if ( v21 == 0 || (v22 = v21, BYTE3(v21[7]._vptr_IHandleEntity) == 0) )
                      v22 = 0;
                    if ( IsBotTargetStatusValidCore(m_pInstance, v22, 251, -1.0, this->m_pAbility) )
                      break;
                  }
                }
              }
            }
          }
          if ( v14 == ++m_pMemory )
            goto LABEL_29;
        }
        v23 = CDOTA_Bot_AbilityUsage_Nevermore_Requiem::EstimateTargetLinesHit(this, m_pInstance);
        if ( pTarget == m_pInstance )
          v23 *= 2;
        ++m_pMemory;
        iLinesHittingHeroes += v23;
      }
      while ( v14 != m_pMemory );
LABEL_29:
      v2 = 3;
      if ( iLinesHittingHeroes <= 11 )
      {
LABEL_32:
        v2 = 0;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
      }
      else
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
      }
    }
  }
  return v2;
}


// CDOTA_Bot_AbilityUsage_Nevermore_Requiem::UseAbility  (line 257, @0x00000000028d2150, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Nevermore_Requiem::UseAbility(
        CDOTA_Bot_AbilityUsage_Nevermore_Requiem *const this)
{
  CDOTA_Bot_Hero_Nevermore *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Nevermore_Requiem::EstimateTargetLinesHit  (line 264, @0x00000000028dab70, libserver.so)  // inlines: FastSqrt, Get, GetInstance, GetUnit, Length2D, RemapValClamped, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator*, operator+, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName
// callers: CDOTA_Bot_AbilityUsage_Nevermore_Requiem::GetCurrentUsageDesire
// strings: "requiem_radius", "modifier_nevermore_necromastery"
int __fastcall CDOTA_Bot_AbilityUsage_Nevermore_Requiem::EstimateTargetLinesHit(
        CDOTA_Bot_AbilityUsage_Nevermore_Requiem *const this,
        CDOTA_BaseNPC *pTarget)
{
  int LevelSpecialValue; // r13d
  CDOTALocomotor *v5; // rax
  float v6; // xmm1_4
  const Vector *AbsOrigin; // rax
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // rdi
  const Vector *v10; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  int result; // eax
  __m128i v14; // xmm0
  float v15; // r12d
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_Buff *ModifierByName; // rax
  double v19; // xmm0_8
  float v20; // xmm2_4
  float v21; // xmm1_4
  int v22; // eax
  __m128 v23; // xmm3
  __m128 v24; // xmm2
  float v25; // [rsp+8h] [rbp-38h]
  float v26; // [rsp+8h] [rbp-38h]
  float fCastPointb; // [rsp+Ch] [rbp-34h]
  float fCastPoint; // [rsp+Ch] [rbp-34h]
  float fCastPointa; // [rsp+Ch] [rbp-34h]
  unsigned __int64 v30; // [rsp+10h] [rbp-30h]

  fCastPointb = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "requiem_radius", -1, 1);
  v5 = (*(pTarget->_vptr_IHandleEntity + 376))(pTarget);
  v30 = CDOTALocomotor::GetAverageVelocityOverTime(v5, fCastPointb, v6).m128i_u64[0];
  v25 = fCastPointb * *(&v30 + 1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  fCastPoint = (*&v30 * fCastPointb) + AbsOrigin->x;
  v26 = v25 + AbsOrigin->y;
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  v10 = CBaseEntity::GetAbsOrigin(v9);
  x = v10->x;
  y = v10->y;
  result = 0;
  v14 = COERCE_UNSIGNED_INT(((x - fCastPoint) * (x - fCastPoint)) + ((y - v26) * (y - v26)));
  fCastPointa = LevelSpecialValue;
  *v14.m128i_i32 = fsqrt(*v14.m128i_i32);
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  if ( *v14.m128i_i32 <= LevelSpecialValue )
  {
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
      v17 = v16;
    else
      v17 = 0;
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v17, "modifier_nevermore_necromastery", 0);
    v20 = 0.0;
    v21 = 0.0;
    if ( ModifierByName != 0 )
    {
      v22 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName, v19, 0.0);
      v20 = 0.0;
      v21 = (v22 / 2) * 0.5;
    }
    if ( fCastPointa == 0.0 )
    {
      result = 1;
      if ( (v15 - 0.0) < 0.0 )
        return v21;
    }
    else
    {
      v23 = _mm_cvtsi32_si128(LODWORD(v15));
      v23.m128_f32[0] = v23.m128_f32[0] / fCastPointa;
      if ( v23.m128_f32[0] >= 0.0 )
      {
        v24 = _mm_cmplt_ss(0x3F800000u, v23);
        LODWORD(v20) = _mm_andnot_ps(v24, v23).m128_u32[0] | v24.m128_i32[0] & 0x3F800000;
      }
      return (((1.0 - v21) * v20) + v21);
    }
  }
  return result;
}


