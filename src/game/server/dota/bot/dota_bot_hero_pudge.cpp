
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Pudge::CDOTA_Bot_Hero_Pudge  (line 23, @0x00000000028d6560, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
void __fastcall CDOTA_Bot_Hero_Pudge::CDOTA_Bot_Hero_Pudge(
        CDOTA_Bot_Hero_Pudge *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CF270;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityMeatHook = CDOTA_BaseNPC::FindAbilityByName(v6, "pudge_meat_hook", 0);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityRot = CDOTA_BaseNPC::FindAbilityByName(v8, "pudge_rot", 0);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityDismember = CDOTA_BaseNPC::FindAbilityByName(v10, "pudge_dismember", 0);
}


// CDOTA_Bot_Hero_Pudge::CreateMode  (line 31, @0x00000000028d26b0, libserver.so)  // inlines: CDOTA_BotMode_Attack_Pudge, CDOTA_BotMode_Laning_Pudge, CEntityHandle, CHandle
// calls: operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, CDOTA_Bot::CreateMode, CDOTA_BotMode_Laning::CDOTA_BotMode_Laning, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Pudge::CreateMode(CDOTA_Bot_Hero_Pudge *const this, int iMode)
{
  CDOTA_BotMode_Attack *v3; // r12
  CDOTA_BotMode_Laning *v5; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 1 )
  {
    if ( iMode == 2 )
    {
      v3 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Pudge (size matches)
      CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v3, this);
      v3->_vptr_CDOTA_BotMode = off_42CF370;  // vptr: CDOTA_BotMode_Attack_Pudge
      return v3;
    }
    return CDOTA_Bot::CreateMode(this, iMode);
  }
  v5 = operator new(0xF0u);  // new CDOTA_BotMode_Laning_Pudge (size matches)
  CDOTA_BotMode_Laning::CDOTA_BotMode_Laning(v5, this);
  *(&v5->m_vForceMove + 3) = -1;
  v5->_vptr_CDOTA_BotMode = off_42CF410;  // vptr: CDOTA_BotMode_Laning_Pudge
  return v5;
}


// CDOTA_Bot_Hero_Pudge::GetGankDistance  (line 45, @0x00000000028dae00, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "hook_distance"
int __fastcall CDOTA_Bot_Hero_Pudge::GetGankDistance(CDOTA_Bot_Hero_Pudge *const this)
{
  CDOTABaseAbility *m_pAbilityMeatHook; // rbx
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

  m_pAbilityMeatHook = this->m_pAbilityMeatHook;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityMeatHook) >= 0
    && (*(m_pAbilityMeatHook->_vptr_IHandleEntity + 245))(m_pAbilityMeatHook) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityMeatHook)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityMeatHook, -1) )
  {
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbilityMeatHook, "hook_distance", -1, 1) + 200;
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


// CDOTA_Bot_Hero_Pudge::GetAggressionFactor  (line 56, @0x00000000028d46e0, libserver.so)  // inlines: Get, GetHealthPercent, GetInstance, GetUnit, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTA_Bot::GetAggressionFactor, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
float __fastcall CDOTA_Bot_Hero_Pudge::GetAggressionFactor(CDOTA_Bot_Hero_Pudge *const this)
{
  CDOTABaseAbility *m_pAbilityMeatHook; // r12
  CDOTABaseAbility *m_pAbilityDismember; // r12
  float v4; // xmm0_4
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // r12
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  float fBonus; // [rsp+Ch] [rbp-24h]
  float fBonusa; // [rsp+Ch] [rbp-24h]

  m_pAbilityMeatHook = this->m_pAbilityMeatHook;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityMeatHook) >= 0
    && (*(m_pAbilityMeatHook->_vptr_IHandleEntity + 245))(m_pAbilityMeatHook) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityMeatHook)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityMeatHook, -1) )
  {
    fBonus = 1.1;
  }
  else
  {
    fBonus = 1.0;
  }
  m_pAbilityDismember = this->m_pAbilityDismember;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityDismember) >= 0
    && (*(m_pAbilityDismember->_vptr_IHandleEntity + 245))(m_pAbilityDismember) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityDismember)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityDismember, -1) )
  {
    v4 = 0.1;
  }
  else
  {
    v4 = 0.0;
  }
  fBonusa = v4 + fBonus;
  if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pAbilityRot) >= 0 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    v7 = 100LL * CBaseEntity::GetHealth(v6);
    v8 = (*(v6->_vptr_IHandleEntity + 156))(v6);
    v9 = 1;
    if ( v8 > 0 )
      v9 = v8;
    if ( (v7 / v9) > 70 )
      fBonusa = fBonusa + 0.1;
  }
  return CDOTA_Bot::GetAggressionFactor(this) * fBonusa;
}


// CDOTA_Bot_Hero_Pudge::IsSavingBlink  (line 71, @0x00000000028dc410, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsTrained, LookupEntity, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CUtlVector
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetCooldownTime, CDOTABaseAbility::GetCooldownTimeRemaining, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyHeroes, CDOTA_BaseNPC::FindModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "hook_distance", "modifier_pudge_meat_hook"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Hero_Pudge::IsSavingBlink(CDOTA_Bot_Hero_Pudge *const this)
{
  char v2; // r12
  __m128i v4; // xmm0
  int LevelSpecialValue; // eax
  int v6; // r13d
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  int OpposingTeamNumber; // eax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v11; // r13
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  bool m_bIsDOTANPC; // r15
  EHANDLE hTarget; // [rsp+0h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+10h] [rbp-50h] BYREF

  if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pAbilityMeatHook) < 0 )
    return 0;
  v2 = (*(this->m_pAbilityMeatHook->_vptr_IHandleEntity + 245))(this->m_pAbilityMeatHook);
  if ( v2 != 0 )
    return 0;
  *v4.m128i_i32 = CDOTABaseAbility::GetCooldownTime(this->m_pAbilityMeatHook);
  if ( (COERCE_FLOAT(_mm_cvtsi128_si32(v4)) - CDOTABaseAbility::GetCooldownTimeRemaining(this->m_pAbilityMeatHook)) > 3.0 )
    return 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbilityMeatHook, "hook_distance", -1, 1);
  hTargets.m_Size = 0;
  v6 = LevelSpecialValue;
  hTargets.m_Memory.m_pMemory = 0;
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v8);
  CDOTA_Bot::FindNearbyHeroes(this, v6, OpposingTeamNumber, &hTargets);
  m_pMemory = hTargets.m_Memory.m_pMemory;
  v11 = &hTargets.m_Memory.m_pMemory[hTargets.m_Size];
  if ( hTargets.m_Memory.m_pMemory != v11 )
  {
    while ( 1 )
    {
      hTarget.m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[hTarget.m_Index & 0x1FF];
          if ( v13 != 0 && m_pMemory->m_Index == v13->m_EHandle.m_Index )
          {
            m_pInstance = v13->m_pInstance;
            if ( v13->m_pInstance != 0 )
            {
              m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
              if ( m_bIsDOTANPC && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_pudge_meat_hook", 0) != 0 )
                break;
            }
          }
        }
      }
      if ( v11 == ++m_pMemory )
        goto LABEL_20;
    }
    v2 = m_bIsDOTANPC;
  }
LABEL_20:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
  return v2;
}


// CDOTA_BotMode_Attack_Pudge::GetDesire  (line 106, @0x00000000028d24f0, libserver.so)
// calls: CDOTA_BotMode_Attack::GetDesire
float __fastcall CDOTA_BotMode_Attack_Pudge::GetDesire(CDOTA_BotMode_Attack_Pudge *const this)
{
  CDOTA_BotMode *m_pActiveBotMode; // rdi

  m_pActiveBotMode = this->m_pBot->m_pActiveBotMode;
  if ( m_pActiveBotMode != 0
    && (*(m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pActiveBotMode) == 2
    && *(*&this->m_pBot[1].m_iLifesteal + 788LL) != 0 )
  {
    return 0.89999998;
  }
  else
  {
    return CDOTA_BotMode_Attack::GetDesire(this);
  }
}


// CDOTA_BotMode_Laning_Pudge::CDOTA_BotMode_Laning_Pudge  (line 136, @0x00000000028d6640, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_BotMode_Laning::CDOTA_BotMode_Laning
void __fastcall CDOTA_BotMode_Laning_Pudge::CDOTA_BotMode_Laning_Pudge(
        CDOTA_BotMode_Laning_Pudge *const this,
        CDOTA_Bot *pBot)
{
  CDOTA_BotMode_Laning::CDOTA_BotMode_Laning(this, pBot);
  this->m_hHookTarget.m_Index = -1;
  this->_vptr_CDOTA_BotMode = off_42CF410;  // vptr: CDOTA_BotMode_Laning_Pudge
}


// CDOTA_BotMode_Laning_Pudge::CalculateDesiredLocation  (line 141, @0x00000000028e0730, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, Purge, RemoveAll, Set, ToDOTABaseNPC, end, operator CBaseEntity*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::IsFullyCastable, CDOTA_BotMode::GetUnit, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyHeroes, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode_Laning_Pudge::BuildHookStartLocationListForTarget, CDOTA_BotMode_Laning_Pudge::GetHookLocationDesireForTarget, CDOTA_BotMode_Laning::CalculateDesiredLocation, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<Vector, int>::Purge, _Unwind_Resume
// strings: "hook_distance"
Vector __fastcall CDOTA_BotMode_Laning_Pudge::CalculateDesiredLocation(CDOTA_BotMode_Laning_Pudge *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  int v3; // r12d
  int LevelSpecialValue; // eax
  int v5; // r12d
  CDOTA_BaseNPC *Unit; // rax
  int OpposingTeamNumber; // eax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // r12
  Vector *m_pMemory; // rbx
  Vector *v11; // r13
  float HookLocationDesireForTarget; // xmm0_4
  CHandle<CBaseEntity> *__for_end; // [rsp+28h] [rbp-C8h]
  CHandle<CBaseEntity> *__for_begin; // [rsp+30h] [rbp-C0h]
  vec_t z; // [rsp+3Ch] [rbp-B4h]
  EHANDLE hBestTarget; // [rsp+40h] [rbp-B0h]
  int x_low; // [rsp+44h] [rbp-ACh]
  vec_t y; // [rsp+48h] [rbp-A8h]
  float fBestTargetDesire; // [rsp+4Ch] [rbp-A4h]
  EHANDLE hEnemyHero; // [rsp+60h] [rbp-90h] BYREF
  Vector vLocation; // [rsp+70h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecEnemyHeroes; // [rsp+80h] [rbp-70h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > vecHookLocations; // [rsp+A0h] [rbp-50h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  this->m_hHookTarget.m_Index = -1;
  m_pBot = this->m_pBot;
  if ( CDOTABaseAbility::IsFullyCastable(m_pBot[1]._vptr_CDOTA_Bot)
    && (v3 = (*(*m_pBot[1]._vptr_CDOTA_Bot + 273))(m_pBot[1]._vptr_CDOTA_Bot, 0xFFFFFFFFLL),
        (2 * v3) <= CDOTA_BotMode::GetUnit(this)->m_flMana.m_Value) )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                          m_pBot[1]._vptr_CDOTA_Bot,
                          "hook_distance",
                          -1,
                          1);
    vecEnemyHeroes.m_Size = 0;
    v5 = LevelSpecialValue;
    vecEnemyHeroes.m_Memory.m_pMemory = 0;
    vecEnemyHeroes.m_Memory.m_nAllocationCount = 0;
    vecEnemyHeroes.m_Memory.m_nGrowSize = 0;
    Unit = CDOTA_BotMode::GetUnit(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Unit);
    CDOTA_Bot::FindNearbyHeroes(m_pBot, v5, OpposingTeamNumber, &vecEnemyHeroes);
    if ( vecEnemyHeroes.m_Size == 0 )
      goto LABEL_19;
    if ( vecEnemyHeroes.m_Size > 2 )
      goto LABEL_19;
    x_low = LODWORD(vec3_origin.x);
    y = vec3_origin.y;
    z = vec3_origin.z;
    __for_end = &vecEnemyHeroes.m_Memory.m_pMemory[vecEnemyHeroes.m_Size];
    if ( vecEnemyHeroes.m_Memory.m_pMemory == __for_end )
      goto LABEL_19;
    __for_begin = vecEnemyHeroes.m_Memory.m_pMemory;
    hBestTarget.m_Index = -1;
    fBestTargetDesire = 0.0;
    do
    {
      hEnemyHero.m_Index = __for_begin->m_Index;
      v8 = CEntityHandle::operator CEntityInstance *(&hEnemyHero);
      v9 = v8;
      if ( v8 != 0 && v8->m_bIsDOTANPC )
      {
        vecHookLocations.m_Size = 0;
        vecHookLocations.m_Memory.m_pMemory = 0;
        vecHookLocations.m_Memory.m_nAllocationCount = 0;
        vecHookLocations.m_Memory.m_nGrowSize = 0;
        CDOTA_BotMode_Laning_Pudge::BuildHookStartLocationListForTarget(this, v8, &vecHookLocations);
        m_pMemory = vecHookLocations.m_Memory.m_pMemory;
        v11 = &vecHookLocations.m_Memory.m_pMemory[vecHookLocations.m_Size];
        if ( vecHookLocations.m_Memory.m_pMemory != v11 )
        {
          do
          {
            vLocation = *m_pMemory;
            HookLocationDesireForTarget = CDOTA_BotMode_Laning_Pudge::GetHookLocationDesireForTarget(
                                            this,
                                            &vLocation,
                                            v9);
            if ( HookLocationDesireForTarget > fBestTargetDesire )
            {
              fBestTargetDesire = HookLocationDesireForTarget;
              x_low = LODWORD(vLocation.x);
              y = vLocation.y;
              z = vLocation.z;
              hBestTarget.m_Index = hEnemyHero.m_Index;
            }
            ++m_pMemory;
          }
          while ( v11 != m_pMemory );
        }
        vecHookLocations.m_Size = 0;
        if ( (vecHookLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<Vector,int>::Purge(&vecHookLocations.m_Memory);
          if ( (vecHookLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<Vector,int>::Purge(&vecHookLocations.m_Memory);
        }
      }
      ++__for_begin;
    }
    while ( __for_end != __for_begin );
    if ( fBestTargetDesire < 0.5 )
    {
LABEL_19:
      *&vecHookLocations.m_Size = CDOTA_BotMode_Laning::CalculateDesiredLocation(this);
    }
    else
    {
      vecHookLocations.m_Size = x_low;
      this->m_hHookTarget = hBestTarget;
      *(&vecHookLocations.m_Size + 1) = y;
      *&vecHookLocations.m_Memory.m_pMemory = z;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecEnemyHeroes);
  }
  else
  {
    *&vecHookLocations.m_Size = CDOTA_BotMode_Laning::CalculateDesiredLocation(this);
  }
  *&result.x = *&vecHookLocations.m_Size;
  result.z = *&vecHookLocations.m_Memory.m_pMemory;
  return result;
}


// CDOTA_BotMode_Laning_Pudge::GetHookLocationDesireForTarget  (line 194, @0x00000000028dee80, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClear, CDOTA_Bot::GetAvoidanceAmountForLocation
// callers: CDOTA_BotMode_Laning_Pudge::CalculateDesiredLocation
float __fastcall CDOTA_BotMode_Laning_Pudge::GetHookLocationDesireForTarget(
        CDOTA_BotMode_Laning_Pudge *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  float result; // xmm0_4
  CDOTA_Bot *m_pBot; // rdi
  int AvoidanceAmountForLocation; // eax
  float v9; // xmm1_4

  if ( !CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClear(
          *(this->m_pBot[1]._vptr_CDOTA_Bot + 97),
          vLocation,
          pTarget,
          0) )
    return 0.0;
  if ( CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, vLocation, 0) > 4 )
    return 0.0;
  m_pBot = pTarget->m_pBot;
  if ( m_pBot == 0 )
    return 0.0;
  AvoidanceAmountForLocation = CDOTA_Bot::GetAvoidanceAmountForLocation(m_pBot, vLocation, 0);
  if ( AvoidanceAmountForLocation <= 5 )
    return 0.0;
  v9 = (AvoidanceAmountForLocation - 5.0) / 35.0;
  if ( v9 < 0.0 )
    return 0.25;
  result = 0.89999998;
  if ( v9 <= 1.0 )
    return (v9 * 0.64999998) + 0.25;
  return result;
}


// CDOTA_BotMode_Laning_Pudge::BuildHookStartLocationListForTarget  (line 218, @0x00000000028e05d0, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, Element, GrowMemory, VectorAdd, VectorSubtract, operator+, operator-, operator[]
// calls: CBaseEntity::GetAbsOrigin, CDOTA_BotMode::GetUnit, VectorYawRotate, CUtlMemory<Vector, int>::Grow
// callers: CDOTA_BotMode_Laning_Pudge::CalculateDesiredLocation
void __fastcall CDOTA_BotMode_Laning_Pudge::BuildHookStartLocationListForTarget(
        CDOTA_BotMode_Laning_Pudge *const this,
        CDOTA_BaseNPC *pTarget,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const vecLocations)
{
  int v4; // r14d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Unit; // rax
  const Vector *v9; // rax
  float v10; // xmm1_4
  vec_t v11; // xmm0_4
  const Vector *v12; // rax
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  __int64 m_Size; // rax
  float v17; // xmm2_4
  float v18; // xmm0_4
  int v19; // ecx
  Vector *v20; // rax
  int v21; // [rsp+8h] [rbp-68h]
  float v22; // [rsp+Ch] [rbp-64h]
  float v23; // [rsp+10h] [rbp-60h]
  float v24; // [rsp+14h] [rbp-5Ch]
  Vector vBase; // [rsp+20h] [rbp-50h] BYREF
  Vector vRotated; // [rsp+30h] [rbp-40h] BYREF

  v4 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  Unit = CDOTA_BotMode::GetUnit(this);
  v9 = CBaseEntity::GetAbsOrigin(Unit);
  v10 = v9->y - AbsOrigin->y;
  v11 = v9->z - AbsOrigin->z;
  vBase.x = v9->x - AbsOrigin->x;
  vBase.y = v10;
  vBase.z = v11;
  do
  {
    VectorYawRotate(&vBase, v10, &vRotated);
    v12 = CBaseEntity::GetAbsOrigin(pTarget);
    x = v12->x;
    y = v12->y;
    z = v12->z;
    m_Size = vecLocations->m_Size;
    v17 = x + vRotated.x;
    v10 = y + vRotated.y;
    v18 = z + vRotated.z;
    v19 = vecLocations->m_Size;
    if ( m_Size == vecLocations->m_Memory.m_nAllocationCount )
    {
      v21 = vecLocations->m_Size;
      v22 = v18;
      v23 = v10;
      v24 = v17;
      CUtlMemory<Vector,int>::Grow(&vecLocations->m_Memory, 1);
      v19 = vecLocations->m_Size;
      m_Size = v21;
      v18 = v22;
      v10 = v23;
      v17 = v24;
    }
    vecLocations->m_Size = v19 + 1;
    v20 = &vecLocations->m_Memory.m_pMemory[m_Size];
    if ( v20 != 0 )
    {
      v20->x = v17;
      v20->y = v10;
      v20->z = v18;
    }
    ++v4;
  }
  while ( v4 != 7 );
}


// CDOTA_Bot_AbilityUsage_Pudge_MeatHook::CDOTA_Bot_AbilityUsage_Pudge_MeatHook  (line 243, @0x00000000028d6670, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Pudge_MeatHook::CDOTA_Bot_AbilityUsage_Pudge_MeatHook(
        CDOTA_Bot_AbilityUsage_Pudge_MeatHook *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF4B0;  // vptr: CDOTA_Bot_AbilityUsage_Pudge_MeatHook
}


// CDOTA_Bot_AbilityUsage_Pudge_MeatHook::GetCurrentUsageDesire  (line 248, @0x00000000028deff0, libserver.so)  // inlines: CEntityHandle, CHandle, DistTo, FastSqrt, Get, GetHookTarget, GetInstance, GetTarget, GetTargetLoc, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Length, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClearFromCurrentPosition, CBaseEntity::GetAbsOrigin
int __fastcall CDOTA_Bot_AbilityUsage_Pudge_MeatHook::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Pudge_MeatHook *const this)
{
  int v2; // eax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CDOTA_Bot_Hero_Pudge *m_pBot; // r14
  CEntityInstance *v9; // rax
  __int64 v10; // rax
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  float *v13; // rax
  CEntityInstance *v14; // rax
  const CBaseEntity *v15; // rdi
  const Vector *AbsOrigin; // rax
  const Vector *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // r12
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rsi
  float fPudgeDistance; // [rsp+0h] [rbp-50h]
  float v23; // [rsp+14h] [rbp-3Ch]
  float v24; // [rsp+18h] [rbp-38h]
  float v25; // [rsp+1Ch] [rbp-34h]
  Vector vHookLoc; // [rsp+20h] [rbp-30h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 )
  {
    v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    v19 = v18;
    if ( v18 == 0 || !v18->m_bIsDOTANPC || !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v18) )
      goto LABEL_4;
    v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      v21 = v20;
    else
      v21 = 0;
    if ( !IsBotTargetStatusValidCore(v19, v21, 251, -1.0, this->m_pAbility)
      || !CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClearFromCurrentPosition(this, v19, &vHookLoc) )
    {
      goto LABEL_4;
    }
  }
  else
  {
    if ( v2 != 18 )
    {
      if ( v2 == 1 )
      {
        vHookLoc.x = *&this->m_pBot->m_pActiveBotMode[1].m_DebugStringBuffer[4];
        v4 = CEntityHandle::operator CEntityInstance *(&vHookLoc);
        v5 = v4;
        if ( v4 != 0 && v4->m_bIsDOTANPC && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4) )
        {
          v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
            v7 = v6;
          else
            v7 = 0;
          if ( IsBotTargetStatusValidCore(v5, v7, 251, -1.0, this->m_pAbility)
            && CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClearFromCurrentPosition(this, v5, &vHookLoc) )
          {
            this->m_vDesiredLocation = vHookLoc;
            return 1;
          }
        }
      }
LABEL_4:
      this->m_vDesiredLocation = vec3_origin;
      return 0;
    }
    m_pBot = this->m_pBot;
    LODWORD(vHookLoc.x) = m_pBot->m_hTarget.m_Index;
    v9 = CEntityHandle::operator CEntityInstance *(&vHookLoc);
    if ( v9 == 0 )
      goto LABEL_4;
    if ( BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_4;
    if ( (v9[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      goto LABEL_4;
    v10 = *&v9[45].m_worldGroupId.m_nHashCode;
    if ( v10 == 0 )
      goto LABEL_4;
    vHookLoc.x = *(v10 + 712);
    v11 = CEntityHandle::operator CEntityInstance *(&vHookLoc);
    v12 = v11;
    if ( v11 == 0 )
      goto LABEL_4;
    if ( BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_4;
    if ( (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      goto LABEL_4;
    v13 = *&v11[45].m_worldGroupId.m_nHashCode;
    if ( v13 == 0 )
      goto LABEL_4;
    v24 = v13[179];
    v23 = v13[180];
    v25 = v13[181];
    v14 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
    fPudgeDistance = fsqrt(
                       (((AbsOrigin->x - v24) * (AbsOrigin->x - v24)) + ((AbsOrigin->y - v23) * (AbsOrigin->y - v23)))
                     + ((AbsOrigin->z - v25) * (AbsOrigin->z - v25)));
    v17 = CBaseEntity::GetAbsOrigin(v12);
    if ( (fsqrt((((v17->x - v24) * (v17->x - v24)) + ((v17->y - v23) * (v17->y - v23))) + ((v17->z - v25)
                                                                                         * (v17->z - v25)))
        - fPudgeDistance) < 300.0
      || !CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClearFromCurrentPosition(this, v12, &vHookLoc) )
    {
      goto LABEL_4;
    }
  }
  this->m_vDesiredLocation = vHookLoc;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Pudge_MeatHook::UseAbility  (line 333, @0x00000000028d2760, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Pudge_MeatHook::UseAbility(CDOTA_Bot_AbilityUsage_Pudge_MeatHook *const this)
{
  CDOTA_Bot_Hero_Pudge *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Pudge_MeatHook::UseOnIllusionState  (line 338, @0x00000000028d1fa0, libserver.so)
bool __fastcall CDOTA_Bot_AbilityUsage_Pudge_MeatHook::UseOnIllusionState(
        CDOTA_Bot_AbilityUsage_Pudge_MeatHook *const this,
        DOTA_BOT_ILLUSION_STATE iState)
{
  return iState <= DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
}


// CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClear  (line 351, @0x00000000028de8b0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, Length2D, Length2DSqr, LookupEntity, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTALocomotor::GetAverageVelocityOverTime, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CalcDistanceToLineSegment, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotMode_Laning_Pudge::GetHookLocationDesireForTarget, CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClearFromCurrentPosition
// strings: "hook_speed", "hook_width", "hook_distance"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClear(
        CDOTA_Bot_AbilityUsage_Pudge_MeatHook *const this,
        const Vector *const vStartHookLoc,
        CDOTA_BaseNPC *pTarget,
        Vector *pvTargetHookLoc)
{
  int LevelSpecialValue; // ebx
  const Vector *AbsOrigin; // rax
  int v10; // ebx
  float v11; // xmm0_4
  CDOTALocomotor *v13; // rax
  float v14; // xmm1_4
  __m128i m_Size; // xmm6
  float v16; // xmm1_4
  float v17; // ebx
  __m128i v18; // xmm6
  float v19; // r12d
  const Vector *v20; // rax
  vec_t v21; // xmm1_4
  __int64 v22; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v24; // r15
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityInstance *v28; // rax
  const Vector *v29; // rax
  CDOTALocomotor *v30; // rax
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  const Vector *v34; // rax
  vec_t v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  char v38; // al
  int iHookWidth; // [rsp+40h] [rbp-D0h]
  float v41; // [rsp+44h] [rbp-CCh]
  float fHookSpeed; // [rsp+50h] [rbp-C0h]
  float v44; // [rsp+54h] [rbp-BCh]
  float flRadius; // [rsp+58h] [rbp-B8h]
  float flRadiusa; // [rsp+58h] [rbp-B8h]
  float fHookLandingTimeOnNPC; // [rsp+5Ch] [rbp-B4h]
  float fHookLandingTimeOnNPCa; // [rsp+5Ch] [rbp-B4h]
  float fHookLandingTimeOnNPCb; // [rsp+5Ch] [rbp-B4h]
  float fHookLandingTimeOnNPCc; // [rsp+5Ch] [rbp-B4h]
  float fHookLandingTimeOnNPCd; // [rsp+5Ch] [rbp-B4h]
  bool fHookLandingTimeOnNPCe; // [rsp+5Ch] [rbp-B4h]
  EHANDLE hNPC; // [rsp+60h] [rbp-B0h]
  Vector vPredictedTargetLoc; // [rsp+70h] [rbp-A0h] BYREF
  Vector vPredictedTargetLoc2D; // [rsp+80h] [rbp-90h] BYREF
  Vector vStartHookLoc2D; // [rsp+90h] [rbp-80h] BYREF
  Vector vPredictedLoc; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v58; // [rsp+B0h] [rbp-60h]
  float v59; // [rsp+B8h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNPCs; // [rsp+C0h] [rbp-50h] BYREF

  fHookSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "hook_speed", -1, 1);
  iHookWidth = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "hook_width", -1, 1);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "hook_distance", -1, 1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  v10 = LevelSpecialValue - 200;
  v11 = fsqrt(
          ((vStartHookLoc->x - AbsOrigin->x) * (vStartHookLoc->x - AbsOrigin->x))
        + ((vStartHookLoc->y - AbsOrigin->y) * (vStartHookLoc->y - AbsOrigin->y)));
  if ( v11 <= v10 )
  {
    flRadius = v10;
    fHookLandingTimeOnNPC = (v11 / fHookSpeed) + (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
    v13 = (*(pTarget->_vptr_IHandleEntity + 376))(pTarget);
    *&hNPCs.m_Size = CDOTALocomotor::GetAverageVelocityOverTime(v13, fHookLandingTimeOnNPC, v14).m128i_u64[0];
    m_Size = hNPCs.m_Size;
    *&hNPCs.m_Memory.m_pMemory = v16;
    *m_Size.m128i_i32 = *&hNPCs.m_Size * fHookLandingTimeOnNPC;
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(m_Size));
    v18 = *(&hNPCs.m_Size + 1);
    *v18.m128i_i32 = *(&hNPCs.m_Size + 1) * fHookLandingTimeOnNPC;
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
    fHookLandingTimeOnNPCa = fHookLandingTimeOnNPC * v16;
    v20 = CBaseEntity::GetAbsOrigin(pTarget);
    v21 = v17 + v20->x;
    vPredictedTargetLoc.y = v19 + v20->y;
    vPredictedTargetLoc.x = v21;
    vPredictedTargetLoc.z = fHookLandingTimeOnNPCa + v20->z;
    *&vPredictedTargetLoc2D.x = *&vPredictedTargetLoc.x;
    v22 = *&vStartHookLoc->x;
    vPredictedTargetLoc2D.z = 0.0;
    vStartHookLoc2D.z = 0.0;
    hNPCs.m_Size = 0;
    *&vStartHookLoc2D.x = v22;
    hNPCs.m_Memory.m_pMemory = 0;
    hNPCs.m_Memory.m_nAllocationCount = 0;
    hNPCs.m_Memory.m_nGrowSize = 0;
    FindUnitsInRadius(2, &vPredictedTargetLoc, pTarget, flRadius, &hNPCs, 3, 3, 0, 0, 0);
    m_pMemory = hNPCs.m_Memory.m_pMemory;
    v24 = &hNPCs.m_Memory.m_pMemory[hNPCs.m_Size];
    v41 = ((vPredictedTargetLoc.y - vStartHookLoc->y) * (vPredictedTargetLoc.y - vStartHookLoc->y))
        + ((vPredictedTargetLoc.x - vStartHookLoc->x) * (vPredictedTargetLoc.x - vStartHookLoc->x));
    if ( hNPCs.m_Memory.m_pMemory == v24 )
    {
LABEL_23:
      if ( pvTargetHookLoc != 0 )
        *pvTargetHookLoc = vPredictedTargetLoc;
      v38 = 1;
    }
    else
    {
      while ( 1 )
      {
        hNPC.m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 > 1 )
        {
          v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hNPC.m_Index) >> 9) & 0x3F];
          if ( v25 != 0 )
          {
            v26 = &v25[hNPC.m_Index & 0x1FF];
            if ( v26 != 0 && m_pMemory->m_Index == v26->m_EHandle.m_Index )
            {
              m_pInstance = v26->m_pInstance;
              if ( v26->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && pTarget != m_pInstance )
              {
                v28 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v28 == 0 || BYTE3(v28[7]._vptr_IHandleEntity) == 0 || v28 != m_pInstance )
                {
                  v29 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  fHookLandingTimeOnNPCb = fsqrt(
                                             ((vStartHookLoc->x - v29->x) * (vStartHookLoc->x - v29->x))
                                           + ((vStartHookLoc->y - v29->y) * (vStartHookLoc->y - v29->y)))
                                         / fHookSpeed;
                  fHookLandingTimeOnNPCc = fHookLandingTimeOnNPCb
                                         + (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
                  v30 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
                  v58 = CDOTALocomotor::GetAverageVelocityOverTime(v30, fHookLandingTimeOnNPCc, v31).m128i_u64[0];
                  v59 = v32;
                  v33 = *(&v58 + 1) * fHookLandingTimeOnNPCc;
                  v44 = v32 * fHookLandingTimeOnNPCc;
                  fHookLandingTimeOnNPCd = *&v58 * fHookLandingTimeOnNPCc;
                  flRadiusa = v33;
                  v34 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v35 = flRadiusa + v34->y;
                  vPredictedLoc.x = fHookLandingTimeOnNPCd + v34->x;
                  v36 = vPredictedLoc.x - vStartHookLoc->x;
                  vPredictedLoc.y = v35;
                  v37 = (v35 - vStartHookLoc->y) * (v35 - vStartHookLoc->y);
                  vPredictedLoc.z = v44 + v34->z;
                  if ( ((v36 * v36) + v37) <= v41 )
                  {
                    vPredictedLoc.z = 0.0;
                    if ( CalcDistanceToLineSegment(&vPredictedLoc, &vStartHookLoc2D, &vPredictedTargetLoc2D, 0) <= (iHookWidth + 50.0) )
                      break;
                  }
                }
              }
            }
          }
        }
        if ( v24 == ++m_pMemory )
          goto LABEL_23;
      }
      if ( pvTargetHookLoc != 0 )
        *pvTargetHookLoc = vec3_origin;
      v38 = 0;
    }
    fHookLandingTimeOnNPCe = v38;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNPCs);
    return fHookLandingTimeOnNPCe;
  }
  else
  {
    if ( pvTargetHookLoc != 0 )
      *pvTargetHookLoc = vec3_origin;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClearFromCurrentPosition  (line 423, @0x00000000028def50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClear
// callers: CDOTA_Bot_AbilityUsage_Pudge_MeatHook::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClearFromCurrentPosition(
        CDOTA_Bot_AbilityUsage_Pudge_MeatHook *const this,
        CDOTA_BaseNPC *pTarget,
        Vector *pvTargetHookLoc)
{
  CDOTA_Bot_Hero_Pudge *m_pBot; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[m_pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  return CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClear(this, AbsOrigin, pTarget, pvTargetHookLoc);
}


// CDOTA_Bot_AbilityUsage_Pudge_Rot::CDOTA_Bot_AbilityUsage_Pudge_Rot  (line 432, @0x00000000028d6690, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Pudge_Rot::CDOTA_Bot_AbilityUsage_Pudge_Rot(
        CDOTA_Bot_AbilityUsage_Pudge_Rot *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF510;  // vptr: CDOTA_Bot_AbilityUsage_Pudge_Rot
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_Pudge_Rot::GetCurrentUsageDesire  (line 438, @0x00000000028df3c0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetUnit, IndexToIdentity, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator-, ~CUtlVector
// calls: CDOTA_Bot::HasBuffThatBreaksOnDamage, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetOpposingTeamNumber, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::IsDangerouslyLow, CDOTA_Bot::FindNearbyTeammatesInMode (14 total)
// strings: "rot_radius", "modifier_pudge_meat_hook"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Pudge_Rot::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Pudge_Rot *const this)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  int result; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  int v7; // r12d
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // rdi
  CDOTA_BaseNPC *v10; // r12
  __m128i v11; // xmm0
  CDOTA_Bot_Hero_Pudge *m_pBot; // rax
  float v13; // r13d
  CEntityInstance *v14; // rax
  const Vector *AbsOrigin; // r14
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  int OpposingTeamNumber; // eax
  int v19; // eax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v21; // r15
  int v22; // r13d
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int v26; // r14d
  int v27; // eax
  CEntityInstance *v28; // rax
  CDOTA_BaseNPC *v29; // rdi
  int v30; // r12d
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // rdi
  CDOTA_BaseNPC *v33; // rax
  const CBaseEntity *v34; // r12
  CDOTA_Bot_Hero_Pudge *v35; // rbx
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rcx
  int NearbyTeammatesInMode; // edx
  __m128i v39; // xmm0
  float v40; // r13d
  CEntityInstance *v41; // rax
  const CBaseEntity *v42; // rdi
  const Vector *v43; // rbx
  const Vector *v44; // rax
  int iRotDamage; // [rsp+28h] [rbp-68h]
  float v46; // [rsp+2Ch] [rbp-64h]
  float v47; // [rsp+2Ch] [rbp-64h]
  EHANDLE hCreep; // [rsp+30h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hCreeps; // [rsp+40h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 1;
  if ( v2 > 0x10 )
    return 0;
  v3 = 1LL << v2;
  if ( ((1LL << v2) & 0x11F81) != 0 )
  {
    if ( !CDOTA_Bot::HasBuffThatBreaksOnDamage(this->m_pBot) )
    {
      v46 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility) * 5.0;
      v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
        v6 = v5;
      else
        v6 = 0;
      v7 = (v46 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v6, 2)));
      v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
        v9 = v8;
      else
        v9 = 0;
      if ( v7 < CBaseEntity::GetHealth(v9) )
      {
        v10 = 0;
        *v11.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "rot_radius", -1, 1);
        m_pBot = this->m_pBot;
        hCreeps.m_Size = 0;
        v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
        hCreeps.m_Memory.m_pMemory = 0;
        hCreeps.m_Memory.m_nAllocationCount = 0;
        hCreeps.m_Memory.m_nGrowSize = 0;
        v14 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
        if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
          v10 = v14;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
        v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
          v17 = v16;
        else
          v17 = 0;
        OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v17);
        FindUnitsInRadius(OpposingTeamNumber, AbsOrigin, v10, v13, &hCreeps, 1, 2, 0, 0, 0);
        if ( hCreeps.m_Size > 1 )
        {
          v19 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
          m_pMemory = hCreeps.m_Memory.m_pMemory;
          iRotDamage = (v19 + v19);
          v21 = &hCreeps.m_Memory.m_pMemory[hCreeps.m_Size];
          if ( hCreeps.m_Memory.m_pMemory != v21 )
          {
            v22 = 0;
            do
            {
              hCreep.m_Index = m_pMemory->m_Index;
              if ( m_pMemory->m_Index + 2 > 1 )
              {
                v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hCreep.m_Index) >> 9) & 0x3F];
                if ( v23 != 0 )
                {
                  v24 = &v23[hCreep.m_Index & 0x1FF];
                  if ( v24 != 0 && m_pMemory->m_Index == v24->m_EHandle.m_Index )
                  {
                    m_pInstance = v24->m_pInstance;
                    if ( v24->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    {
                      v26 = (iRotDamage * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v24->m_pInstance, 2)));
                      v22 += v26 >= CBaseEntity::GetHealth(m_pInstance);
                    }
                  }
                }
              }
              ++m_pMemory;
            }
            while ( v21 != m_pMemory );
            if ( v22 > 1 )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
              return 1;
            }
          }
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
      }
    }
    return 0;
  }
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v27 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
      v47 = v27 + v27;
      v28 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
        v29 = v28;
      else
        v29 = 0;
      v30 = ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v29, 2)) * v47);
      v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
        v32 = v31;
      else
        v32 = 0;
      if ( v30 < CBaseEntity::GetHealth(v32) )
      {
        v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        v34 = v33;
        if ( v33 != 0 && v33->m_bIsDOTANPC )
        {
          if ( CDOTA_BaseNPC::FindModifierByName(v33, "modifier_pudge_meat_hook", 0) != 0 )
            return 2;
          *v39.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "rot_radius", -1, 1);
          v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
          v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
            v42 = v41;
          else
            v42 = 0;
          v43 = CBaseEntity::GetAbsOrigin(v42);
          v44 = CBaseEntity::GetAbsOrigin(v34);
          if ( v40 >= fsqrt(((v44->x - v43->x) * (v44->x - v43->x)) + ((v44->y - v43->y) * (v44->y - v43->y))) )
            return 2;
        }
      }
    }
    return 0;
  }
  if ( !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
    return 0;
  if ( !CDOTA_Bot::IsDangerouslyLow(this->m_pBot) )
    return 0;
  v35 = this->m_pBot;
  if ( v35->m_nAttackingHeroes <= 0 )
    return 0;
  v36 = CEntityHandle::operator CEntityInstance *(&v35->m_hUnit);
  if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
    v37 = v36;
  else
    v37 = 0;
  NearbyTeammatesInMode = CDOTA_Bot::FindNearbyTeammatesInMode(
                            v35,
                            DOTA_BOT_MODE::DOTA_BOT_MODE_DEFEND_ALLY,
                            700.0,
                            0,
                            v37);
  result = 1;
  if ( NearbyTeammatesInMode != 0 )
    return 0;
  return result;
}


// CDOTA_Bot_AbilityUsage_Pudge_Rot::UseAbility  (line 531, @0x00000000028d2210, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Pudge_Rot::UseAbility(CDOTA_Bot_AbilityUsage_Pudge_Rot *const this)
{
  CDOTA_Bot_Hero_Pudge *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Pudge_Dismember::CDOTA_Bot_AbilityUsage_Pudge_Dismember  (line 540, @0x00000000028d66b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Pudge_Dismember::CDOTA_Bot_AbilityUsage_Pudge_Dismember(
        CDOTA_Bot_AbilityUsage_Pudge_Dismember *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF570;  // vptr: CDOTA_Bot_AbilityUsage_Pudge_Dismember
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Pudge_Dismember::GetCurrentUsageDesire  (line 545, @0x00000000028d5570, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetUnit, Set, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_pudge_rot"
int __fastcall CDOTA_Bot_AbilityUsage_Pudge_Dismember::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Pudge_Dismember *const this)
{
  CDOTA_Bot_Hero_Pudge *m_pBot; // r13
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r12
  int v6; // r13d
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  int v9; // r13d
  CEntityInstance *v10; // rax
  const CBaseEntity *v11; // rdi
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  CEntityIdentity *m_pEntity; // rax
  int v15; // edx
  __int16 v16; // cx
  float v17; // [rsp+Ch] [rbp-24h]

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_5;
  m_pBot = this->m_pBot;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v4 = v3;
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 || (v3[58]._vptr_IHandleEntity & 0x20) != 0 )
    goto LABEL_5;
  v6 = (*(m_pBot->m_pAbilityRot->_vptr_IHandleEntity + 247))(m_pBot->m_pAbilityRot);
  v17 = (*(this->m_pAbility->_vptr_IHandleEntity + 225))(this->m_pAbility) * v6;
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  v9 = ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v8, 2)) * v17);
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v11 = v10;
  else
    v11 = 0;
  if ( v9 >= CBaseEntity::GetHealth(v11)
    || ((v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
     && BYTE3(v12[7]._vptr_IHandleEntity) != 0
      ? (v13 = v12)
      : (v13 = 0),
        CDOTA_BaseNPC::FindModifierByName(v13, "modifier_pudge_rot", 0) != 0) )
  {
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v16 = 0x7FFF;
      else
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v16 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v15 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 2;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      return 2;
    }
  }
  else
  {
LABEL_5:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Pudge_Dismember::UseAbility  (line 574, @0x00000000028d45e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Pudge_Dismember::UseAbility(CDOTA_Bot_AbilityUsage_Pudge_Dismember *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float v6; // xmm0_4
  float v7; // xmm1_4
  CDOTA_Bot_Hero_Pudge *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v10; // r13

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
          v6 = (*(this->m_pAbility->_vptr_IHandleEntity + 225))(this->m_pAbility);
          CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, m_pInstance, v6, v7);
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v10 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v10, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v10);
        }
      }
    }
  }
}


