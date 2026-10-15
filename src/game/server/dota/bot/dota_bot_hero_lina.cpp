
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Lina::CDOTA_Bot_Hero_Lina  (line 21, @0x00000000028c3a20, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "lina_light_strike_array", "lina_dragon_slave"
void __fastcall CDOTA_Bot_Hero_Lina::CDOTA_Bot_Hero_Lina(
        CDOTA_Bot_Hero_Lina *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CD570;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityLightStrikeArray = CDOTA_BaseNPC::FindAbilityByName(v6, "lina_light_strike_array", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityDragonSlave = CDOTA_BaseNPC::FindAbilityByName(v8, "lina_dragon_slave", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityFierySoul = CDOTA_BaseNPC::FindAbilityByName(v10, "lina_fiery_soul", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityLagunaBlade = CDOTA_BaseNPC::FindAbilityByName(v12, "lina_laguna_blade", 1);
}


// CDOTA_Bot_Hero_Lina::CreateMode  (line 32, @0x00000000028bf0e0, libserver.so)  // inlines: CDOTA_BotMode_Attack_Lina
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Lina::CreateMode(CDOTA_Bot_Hero_Lina *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42CD670;
  return v4;
}


// CDOTA_Bot_Hero_Lina::HasLocationStun  (line 47, @0x00000000028bfd30, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
bool __fastcall CDOTA_Bot_Hero_Lina::HasLocationStun(CDOTA_Bot_Hero_Lina *const this)
{
  CDOTABaseAbility *m_pAbilityLightStrikeArray; // rbx

  m_pAbilityLightStrikeArray = this->m_pAbilityLightStrikeArray;
  return CDOTABaseAbility::GetEffectiveLevel(m_pAbilityLightStrikeArray) >= 0
      && (*(m_pAbilityLightStrikeArray->_vptr_IHandleEntity + 245))(m_pAbilityLightStrikeArray) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityLightStrikeArray)
      && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityLightStrikeArray, -1);
}


// CDOTA_Bot_Hero_Lina::GetGankDistance  (line 54, @0x00000000028c1a40, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Lina::GetGankDistance(CDOTA_Bot_Hero_Lina *const this)
{
  CDOTABaseAbility *m_pAbilityLagunaBlade; // rbx
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

  m_pAbilityLagunaBlade = this->m_pAbilityLagunaBlade;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityLagunaBlade) >= 0
    && (*(m_pAbilityLagunaBlade->_vptr_IHandleEntity + 245))(m_pAbilityLagunaBlade) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityLagunaBlade)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityLagunaBlade, -1) )
  {
    return (*(this->m_pAbilityLagunaBlade->_vptr_IHandleEntity + 226))(this->m_pAbilityLagunaBlade, &vec3_origin, 0)
         + 200;
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
    result = 200;
    if ( v20 != 0xFF && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v20) > 0 )
      return (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &v4[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                &CModifierParams::s_Default)
            + 200.0);
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
    return ((v18 + v17) + 200.0);
  }
  return result;
}


// CDOTA_Bot_Hero_Lina::GetMaxRoamDistance  (line 68, @0x00000000028c01f0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Lina::GetMaxRoamDistance(CDOTA_Bot_Hero_Lina *const this)
{
  CDOTABaseAbility *m_pAbilityLightStrikeArray; // rbx
  CDOTABaseAbility *m_pAbilityLagunaBlade; // rbx

  m_pAbilityLightStrikeArray = this->m_pAbilityLightStrikeArray;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityLightStrikeArray) >= 0
    && (*(m_pAbilityLightStrikeArray->_vptr_IHandleEntity + 245))(m_pAbilityLightStrikeArray) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityLightStrikeArray)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityLightStrikeArray, -1)
    && (m_pAbilityLagunaBlade = this->m_pAbilityLagunaBlade,
        CDOTABaseAbility::GetEffectiveLevel(m_pAbilityLagunaBlade) >= 0)
    && (*(m_pAbilityLagunaBlade->_vptr_IHandleEntity + 245))(m_pAbilityLagunaBlade) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityLagunaBlade)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityLagunaBlade, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BotMode_Attack_Lina::Think  (line 80, @0x00000000028c20b0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetEHandle, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GetTarget, IsFullyCastable, IsTrained, Length2D, Set, SetTarget, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator!=, operator-, operator->, operator=, operator==<CBaseEntity>
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_BotMode_Attack::Think, CDOTA_Bot::SetMoveAction, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
void __fastcall CDOTA_BotMode_Attack_Lina::Think(CDOTA_BotMode_Attack_Lina *const this)
{
  CDOTA_Bot *m_pBot; // r12
  uint32 m_Index; // r15d
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r14
  CEntityIdentity *m_pEntity; // rax
  int v7; // edx
  __int16 v8; // cx
  uint32 v9; // eax
  CDOTABaseAbility *vptr_CDOTA_Bot; // r14
  bool v11; // r15
  CDOTABaseAbility *m_pHead; // r14
  char v13; // r14
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r15
  const CBaseEntity *v16; // rax
  const Vector *v17; // rax
  float v18; // xmm0_4
  const CBaseEntity *v19; // rax
  const Vector *v20; // rax
  float m_Value; // [rsp+4h] [rbp-5Ch]
  int v22; // [rsp+8h] [rbp-58h]
  int v23; // [rsp+Ch] [rbp-54h]
  CEntityHandle v24; // [rsp+20h] [rbp-40h] BYREF

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  v24.m_Index = m_Index;
  if ( CEntityHandle::operator CEntityInstance *(&v24) != 0 )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hPotentialGankTarget);
    v5 = v4;
    if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    {
      v24.m_Index = m_Index;
      if ( v4 != CEntityHandle::operator CEntityInstance *(&v24) )
      {
        v24.m_Index = -1;
        m_pEntity = v5->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v8 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v24.m_Index) = v8 | v24.m_Index & 0x8000;
          v9 = (v7 << 15) | v24.m_Index & 0x7FFF;
          v24.m_Index = v9;
        }
        else
        {
          v9 = -1;
        }
        m_pBot->m_hTarget.m_Index = v9;
      }
    }
    vptr_CDOTA_Bot = m_pBot[1]._vptr_CDOTA_Bot;
    v11 = CDOTABaseAbility::GetEffectiveLevel(vptr_CDOTA_Bot) >= 0
       && (*(vptr_CDOTA_Bot->_vptr_IHandleEntity + 245))(vptr_CDOTA_Bot) != 0
       && CDOTABaseAbility::IsOwnersManaEnough(vptr_CDOTA_Bot)
       && CDOTABaseAbility::IsOwnersGoldEnough(vptr_CDOTA_Bot, -1);
    m_pHead = m_pBot[1].m_References.m_pHead;
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pHead) >= 0
      && (*(m_pHead->_vptr_IHandleEntity + 245))(m_pHead) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pHead) )
    {
      v13 = v11 & CDOTABaseAbility::IsOwnersGoldEnough(m_pHead, -1);
    }
    else
    {
      v13 = 0;
    }
    m_Value = CDOTA_BotMode::GetUnit(this)->m_flMana.m_Value;
    v23 = (*(*m_pBot[1]._vptr_CDOTA_Bot + 273))(m_pBot[1]._vptr_CDOTA_Bot, 0xFFFFFFFFLL);
    v22 = (m_pBot[1].m_References.m_pHead->m_pNext[68].m_pPrev)(m_pBot[1].m_References.m_pHead, 0xFFFFFFFFLL);
    Unit = CDOTA_BotMode::GetUnit(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
    v24.m_Index = this->m_pBot->m_hTarget.m_Index;
    v16 = CEntityHandle::operator CEntityInstance *(&v24);
    v17 = CBaseEntity::GetAbsOrigin(v16);
    v18 = fsqrt(((v17->x - AbsOrigin->x) * (v17->x - AbsOrigin->x)) + ((v17->y - AbsOrigin->y) * (v17->y - AbsOrigin->y)));
    if ( v13 != 0
      && m_Value > (v22 + v23)
      && v18 > ((*(*m_pBot[1]._vptr_CDOTA_Bot + 226))(m_pBot[1]._vptr_CDOTA_Bot, &vec3_origin, 0) - 100.0) )
    {
      v24.m_Index = this->m_pBot->m_hTarget.m_Index;
      v19 = CEntityHandle::operator CEntityInstance *(&v24);
      v20 = CBaseEntity::GetAbsOrigin(v19);
      CDOTA_Bot::SetMoveAction(this->m_pBot, v20, 1, 1);
    }
    else
    {
      CDOTA_BotMode_Attack::Think(this);
    }
  }
}


// CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::CDOTA_Bot_AbilityUsage_Lina_LightStrikearray  (line 113, @0x00000000028c3b50, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::CDOTA_Bot_AbilityUsage_Lina_LightStrikearray(
        CDOTA_Bot_AbilityUsage_Lina_LightStrikearray *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD710;
}


// CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::FindFilter  (line 120, @0x00000000028c0360, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::FindFilter(
        CDOTA_Bot_AbilityUsage_Lina_LightStrikearray *const this,
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


// CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::GetCurrentUsageDesire  (line 142, @0x00000000028ceb30, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActiveModeDesire, GetBotTargetStatus, GetInstance, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Bot::GetBotLag, CDOTA_Bot::FindNearbyChannelingEnemy, IsInvisibleToBots, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, GetBotTargetStatusCore, CDOTABaseAbility::IsFullyCastable, WantsCastOnEstimatedLocation (17 total)
// strings: "light_strike_array_aoe", "light_strike_array_delay_time"
// globals: jpt_28CEC3A
// local variable allocation has failed, the output may be wrong!
int __fastcall CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lina_LightStrikearray *const this)
{
  int v2; // r14d
  int LevelSpecialValue; // r13d
  float BotLag; // xmm0_4
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v6; // xmm0
  int v7; // eax
  int result; // eax
  int v9; // r14d
  CEntityInstance *v10; // rax
  const CBaseEntity *v11; // rdi
  const Vector *v12; // r15
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // rdx
  CDOTA_Bot_Hero_Lina *v15; // r13
  CDOTABaseAbility *m_pAbilityLightStrikeArray; // rdi
  unsigned __int8 (__fastcall *v17)(CDOTA_Bot_Hero_Lina *, _QWORD); // r14
  CDOTA_Bot_Hero_Lina *m_pBot; // r13
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // r14
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rdi
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r13
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rdi
  CDOTA_Bot_Hero_Lina *v27; // r13
  CDOTA_Bot_Hero_Lina *v28; // rax
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // r13
  int v31; // eax
  __int64 v32; // r13
  CDOTA_BaseNPC *v33; // rsi
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // r15
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rdi
  __m128i v38; // xmm3
  float v39; // r15d
  CEntityInstance *v40; // rax
  CDOTA_BaseNPC *v41; // r14
  CEntityInstance *v42; // rax
  CDOTA_BaseNPC *v43; // rdi
  CEntityInstance *v44; // rax
  int v45; // r14d
  CEntityInstance *v46; // rax
  const CBaseEntity *v47; // rdi
  const Vector *AbsOrigin; // r15
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *v50; // rdi
  int OpposingTeamNumber; // eax
  unsigned int v52; // eax
  float v53; // xmm0_4
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  float fCastRange; // [rsp+28h] [rbp-78h]
  float fCastRangea; // [rsp+28h] [rbp-78h]
  float fDelayb; // [rsp+2Ch] [rbp-74h]
  float fDelay; // [rsp+2Ch] [rbp-74h]
  float fDelaya; // [rsp+2Ch] [rbp-74h]
  float fChannelTimeRemaining; // [rsp+34h] [rbp-6Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+38h] [rbp-68h] BYREF
  int iTargetCount; // [rsp+40h] [rbp-60h] BYREF
  vec_t v63; // [rsp+44h] [rbp-5Ch]
  vec_t v64; // [rsp+48h] [rbp-58h]
  __int128 vTargetLoc; // [rsp+50h] [rbp-50h] OVERLAPPED BYREF
  int v66; // [rsp+60h] [rbp-40h]
  int v67; // [rsp+64h] [rbp-3Ch]

  v2 = (*(this->m_pBot->m_pAbilityLightStrikeArray->_vptr_IHandleEntity + 226))(
         this->m_pBot->m_pAbilityLightStrikeArray,
         &vec3_origin,
         0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                        this->m_pBot->m_pAbilityLightStrikeArray,
                        "light_strike_array_aoe",
                        -1,
                        1);
  fDelayb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "light_strike_array_delay_time", -1, 1);
  BotLag = CDOTA_Bot::GetBotLag(this->m_pBot);
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  pChannelTarget = 0;
  fDelay = fDelayb + BotLag;
  v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v6.m128i_i32 = v7 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v6, &pChannelTarget, &fChannelTimeRemaining) == 0
    || IsInvisibleToBots(pChannelTarget)
    || (v53 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining <= (v53 + fDelay)) )
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 2u:
      case 3u:
      case 0x10u:
      case 0x12u:
        m_pBot = this->m_pBot;
        v19 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
        if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
          v20 = v19;
        else
          v20 = 0;
        v21 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
        if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
          v22 = v21;
        else
          v22 = 0;
        if ( (GetBotTargetStatusCore(v22, v20, -1.0, this->m_pAbility) & 0xFB) != 0 )
          goto LABEL_5;
        if ( CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityLagunaBlade) )
        {
          m_pBotUsage = this->m_pBot->m_pAbilityLagunaBlade->m_pBotUsage;
          if ( (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage) > 0 )
            goto LABEL_5;
        }
        LODWORD(vTargetLoc) = this->m_pBot->m_hTarget.m_Index;
        v23 = CEntityHandle::operator CEntityInstance *(&vTargetLoc);
        v24 = v23;
        if ( v23 == 0 || BYTE3(v23[7]._vptr_IHandleEntity) == 0 || (v23[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_5;
        fCastRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        fDelaya = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility) + fDelay;
        v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v25 == 0 || (v26 = v25, BYTE3(v25[7]._vptr_IHandleEntity) == 0) )
          v26 = 0;
        if ( WantsCastOnEstimatedLocation(v26, v24, COERCE_DOUBLE(LODWORD(fDelaya)), fCastRange, &vTargetLoc) == 0 )
          goto LABEL_5;
        *&this->m_vDesiredLocation.x = vTargetLoc;
        this->m_vDesiredLocation.z = *(&vTargetLoc + 2);
        return 3;
      case 4u:
        v27 = this->m_pBot;
        if ( v27->m_fModeDesires[(*(v27->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v27->m_pActiveBotMode)] < 0.75
          || !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
        {
          goto LABEL_5;
        }
        v28 = this->m_pBot;
        LODWORD(vTargetLoc) = 0;
        *(&vTargetLoc + 1) = 0;
        v66 = 0;
        v67 = 0;
        v29 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
        if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
          v30 = v29;
        else
          v30 = 0;
        v31 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, v31, &vTargetLoc, v30);
        if ( vTargetLoc <= 0 )
          goto LABEL_4;
        v32 = 0;
        while ( 1 )
        {
          v44 = CEntityHandle::operator CEntityInstance *((*(*(&vTargetLoc + 1) + 8 * v32) + 156LL));
          if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
            v33 = v44;
          else
            v33 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v33) )
          {
            v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
              v35 = v34;
            else
              v35 = 0;
            v36 = CEntityHandle::operator CEntityInstance *((*(*(&vTargetLoc + 1) + 8 * v32) + 156LL));
            if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
              v37 = v36;
            else
              v37 = 0;
            if ( (GetBotTargetStatusCore(v37, v35, -1.0, this->m_pAbility) & 0xFB) == 0 )
            {
              *v38.m128i_i32 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
              v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
              fCastRangea = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility) + fDelay;
              v40 = CEntityHandle::operator CEntityInstance *((*(*(&vTargetLoc + 1) + 8 * v32) + 156LL));
              if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 )
                v41 = v40;
              else
                v41 = 0;
              v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
                v43 = v42;
              else
                v43 = 0;
              if ( WantsCastOnEstimatedLocation(v43, v41, COERCE_DOUBLE(LODWORD(fCastRangea)), v39, &iTargetCount) != 0 )
                break;
            }
          }
          if ( vTargetLoc <= ++v32 )
          {
LABEL_4:
            CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&vTargetLoc);
            goto LABEL_5;
          }
        }
        LODWORD(this->m_vDesiredLocation.x) = iTargetCount;
        this->m_vDesiredLocation.y = v63;
        this->m_vDesiredLocation.z = v64;
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&vTargetLoc);
        return 3;
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
        v45 = (v2 + 100.0);
        v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
          v47 = v46;
        else
          v47 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v47);
        v49 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
          v50 = v49;
        else
          v50 = 0;
        OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v50);
        CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
          this,
          OpposingTeamNumber,
          2,
          1,
          AbsOrigin,
          v45,
          0.0,
          LevelSpecialValue,
          &vTargetLoc,
          &iTargetCount);
        if ( iTargetCount <= 3 )
          goto LABEL_5;
        v15 = this->m_pBot;
        m_pAbilityLightStrikeArray = v15->m_pAbilityLightStrikeArray;
        v17 = *(v15->_vptr_CDOTA_Bot + 10);
        goto LABEL_64;
      case 0x11u:
        v9 = (v2 + 100.0);
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
          v9,
          0.0,
          LevelSpecialValue,
          &vTargetLoc,
          &iTargetCount);
        if ( iTargetCount <= 2 )
          goto LABEL_5;
        v15 = this->m_pBot;
        m_pAbilityLightStrikeArray = this->m_pAbility;
        v17 = *(v15->_vptr_CDOTA_Bot + 10);
LABEL_64:
        v52 = (*(m_pAbilityLightStrikeArray->_vptr_IHandleEntity + 273))(m_pAbilityLightStrikeArray, 0xFFFFFFFFLL);
        if ( v17(v15, v52) != 0 )
        {
          *&this->m_vDesiredLocation.x = vTargetLoc;
          this->m_vDesiredLocation.z = *(&vTargetLoc + 2);
          result = 2;
        }
        else
        {
LABEL_5:
          this->m_vDesiredLocation = vec3_origin;
          result = 0;
        }
        break;
      default:
        goto LABEL_5;
    }
  }
  else
  {
    this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(pChannelTarget);
    return 3;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::UseAbility  (line 263, @0x00000000028bf390, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::UseAbility(
        CDOTA_Bot_AbilityUsage_Lina_LightStrikearray *const this)
{
  CDOTA_Bot_Hero_Lina *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Lina_DragonSlave::CDOTA_Bot_AbilityUsage_Lina_DragonSlave  (line 272, @0x00000000028c3b70, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lina_DragonSlave::CDOTA_Bot_AbilityUsage_Lina_DragonSlave(
        CDOTA_Bot_AbilityUsage_Lina_DragonSlave *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD770;
}


// CDOTA_Bot_AbilityUsage_Lina_DragonSlave::FindFilter  (line 279, @0x00000000028c04e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_Lina_DragonSlave::FindFilter(
        CDOTA_Bot_AbilityUsage_Lina_DragonSlave *const this,
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


// CDOTA_Bot_AbilityUsage_Lina_DragonSlave::GetCurrentUsageDesire  (line 301, @0x00000000028c7fe0, libserver.so)  // inlines: Get, GetBotTargetStatus, GetInstance, GetTargetNPC, GetTeamNumber, GetUnit, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTABaseAbility::IsFullyCastable, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
// strings: "dragon_slave_width_end"
int __fastcall CDOTA_Bot_AbilityUsage_Lina_DragonSlave::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lina_DragonSlave *const this)
{
  CDOTA_Bot_Hero_Lina *m_pBot; // r15
  int v3; // r14d
  int LevelSpecialValue; // r13d
  int v5; // eax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CDOTA_Bot_Hero_Lina *v8; // r13
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  CEntityInstance *v15; // rax
  const CBaseEntity *v16; // rdi
  int Health; // r13d
  CEntityInstance *v18; // rax
  CEntityInstance *v19; // rdi
  CDOTALocomotor *v20; // rax
  float v21; // xmm1_4
  unsigned __int64 v22; // xmm0_8
  CDOTA_Bot_Hero_Lina *v23; // rax
  __m128i v24; // xmm3
  float v25; // xmm1_4
  __m128i v26; // xmm4
  __m128i v27; // xmm1
  float v28; // r13d
  float v29; // r12d
  float v30; // r14d
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // rdi
  const Vector *v33; // rax
  vec_t v34; // xmm0_4
  vec_t v35; // xmm2_4
  int v37; // r14d
  CEntityInstance *v38; // rax
  const CBaseEntity *v39; // rdi
  const Vector *v40; // r15
  CEntityInstance *v41; // rax
  CDOTA_BaseNPC *v42; // rdi
  int OpposingTeamNumber; // eax
  int v44; // r14d
  CEntityInstance *v45; // rax
  const CBaseEntity *v46; // rdi
  const Vector *AbsOrigin; // r15
  CEntityInstance *v48; // rax
  CEntityInstance *v49; // rdx
  CDOTA_Bot_Hero_Lina *v50; // r13
  unsigned __int8 (__fastcall *v51)(CDOTA_Bot_Hero_Lina *, _QWORD); // r14
  unsigned int v52; // eax
  float v53; // [rsp+18h] [rbp-58h]
  float ArmorReductionForDamageType; // [rsp+1Ch] [rbp-54h]
  int iTargetCount; // [rsp+2Ch] [rbp-44h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-40h] BYREF

  m_pBot = this->m_pBot;
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "dragon_slave_width_end", -1, 1);
  v5 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v5 > 13 )
  {
    if ( v5 == 17 )
    {
      v44 = (v3 + 100.0);
      v45 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v45 != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
        v46 = v45;
      else
        v46 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v46);
      v48 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 )
        v49 = v48;
      else
        v49 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v49[7].m_CScriptComponent),
        2,
        2,
        AbsOrigin,
        v44,
        0.0,
        LevelSpecialValue,
        &vTargetLoc,
        &iTargetCount);
      if ( iTargetCount <= 2 )
        goto LABEL_36;
LABEL_45:
      v50 = this->m_pBot;
      v51 = *(v50->_vptr_CDOTA_Bot + 10);
      v52 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v51(v50, v52) != 0 )
      {
        this->m_vDesiredLocation = vTargetLoc;
        return 2;
      }
    }
LABEL_36:
    this->m_vDesiredLocation = vec3_origin;
    return 0;
  }
  if ( v5 >= 8 )
  {
    v37 = (v3 + 100.0);
    v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
      v39 = v38;
    else
      v39 = 0;
    v40 = CBaseEntity::GetAbsOrigin(v39);
    v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
      v42 = v41;
    else
      v42 = 0;
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v42);
    CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
      this,
      OpposingTeamNumber,
      2,
      2,
      v40,
      v37,
      0.0,
      LevelSpecialValue,
      &vTargetLoc,
      &iTargetCount);
    if ( iTargetCount <= 3 )
      goto LABEL_36;
    goto LABEL_45;
  }
  if ( v5 != 2 )
    goto LABEL_36;
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v7) )
    goto LABEL_36;
  v8 = this->m_pBot;
  v9 = CEntityHandle::operator CEntityInstance *(&v8->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  v11 = CEntityHandle::operator CEntityInstance *(&v8->m_hTarget);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  if ( (GetBotTargetStatusCore(v12, v10, -1.0, this->m_pAbility) & 0xFB) != 0 )
    goto LABEL_36;
  v53 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v13 == 0 || (v14 = v13, BYTE3(v13[7]._vptr_IHandleEntity) == 0) )
    v14 = 0;
  ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v14, 2);
  v15 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  Health = CBaseEntity::GetHealth(v16);
  if ( CDOTABaseAbility::IsFullyCastable(m_pBot->m_pAbilityLightStrikeArray)
    && ((1.0 - ArmorReductionForDamageType) * v53) <= Health )
  {
    goto LABEL_36;
  }
  if ( CDOTABaseAbility::IsFullyCastable(m_pBot->m_pAbilityLagunaBlade)
    && (*(m_pBot->m_pAbilityLagunaBlade->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBot->m_pAbilityLagunaBlade->m_pBotUsage) > 0 )
  {
    goto LABEL_36;
  }
  v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v18 == 0 || (v19 = v18, BYTE3(v18[7]._vptr_IHandleEntity) == 0) )
    v19 = 0;
  v20 = (*(v19->_vptr_IHandleEntity + 376))(v19);
  v22 = CDOTALocomotor::GetAverageVelocityOverTime(v20, 1.0, v21).m128i_u64[0];
  v23 = this->m_pBot;
  *&vTargetLoc.x = v22;
  v24 = v22;
  vTargetLoc.z = v25;
  v26 = HIDWORD(v22);
  *v27.m128i_i32 = v25 * 0.5;
  *v24.m128i_i32 = *&v22 * 0.5;
  *v26.m128i_i32 = *(&v22 + 1) * 0.5;
  v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
  v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
  v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
  v31 = CEntityHandle::operator CEntityInstance *(&v23->m_hTarget);
  if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
    v32 = v31;
  else
    v32 = 0;
  v33 = CBaseEntity::GetAbsOrigin(v32);
  v34 = v28 + v33->z;
  v35 = v29 + v33->x;
  this->m_vDesiredLocation.y = v30 + v33->y;
  this->m_vDesiredLocation.z = v34;
  this->m_vDesiredLocation.x = v35;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Lina_DragonSlave::UseAbility  (line 371, @0x00000000028bf3f0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Lina_DragonSlave::UseAbility(
        CDOTA_Bot_AbilityUsage_Lina_DragonSlave *const this)
{
  CDOTA_Bot_Hero_Lina *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::CDOTA_Bot_AbilityUsage_Lina_LagunaBlade  (line 380, @0x00000000028c3b90, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::CDOTA_Bot_AbilityUsage_Lina_LagunaBlade(
        CDOTA_Bot_AbilityUsage_Lina_LagunaBlade *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD7D0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::GetCurrentUsageDesire  (line 387, @0x00000000028c5ad0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::FindNearbyTeammatesInMode, IsBotTargetStatusValidCore, CDOTA_Bot::IsAboutToDie, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lina_LagunaBlade *const this)
{
  unsigned int v2; // edx
  int result; // eax
  int v4; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v6; // eax
  __int64 v7; // r14
  int v8; // r13d
  CDOTA_BaseNPC *v9; // rsi
  CDOTA_Bot *m_pBot; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC_Hero *v12; // r12
  int m_Id; // eax
  CDOTA_Commander *v14; // rax
  __int64 IllusionState; // rsi
  CEntityInstance *v16; // rax
  __int64 v17; // r12
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // r13
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rsi
  CDOTA_Bot *v22; // rdi
  CEntityIdentity *m_pEntity; // rax
  int v24; // edx
  __int16 v25; // cx
  __int64 v26; // r13
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // r12
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rsi
  int v31; // r14d
  int v32; // r14d
  CDOTA_Bot *v33; // rdi
  bool IsAboutToDie; // al
  bool v35; // zf
  int v36; // eax
  CEntityIdentity *v37; // rdx
  int v38; // eax
  __int16 v39; // cx
  CDOTA_BaseNPC_Hero *pBestTarget; // [rsp+8h] [rbp-68h]
  int iLagunaBladeDamage; // [rsp+10h] [rbp-60h]
  int iBestOverkill; // [rsp+14h] [rbp-5Ch]
  unsigned __int8 (__fastcall *fMaxRangec)(CDOTA_Bot_AbilityUsage_Lina_LagunaBlade *const, __int64); // [rsp+18h] [rbp-58h]
  float fMaxRange; // [rsp+18h] [rbp-58h]
  float fMaxRangea; // [rsp+18h] [rbp-58h]
  float fMaxRangeb; // [rsp+18h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+20h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 1;
  result = 0;
  if ( v2 <= 5 )
  {
    v4 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
    m_pAbility = this->m_pAbility;
    hEnemyHeroes.m_Size = 0;
    hEnemyHeroes.m_Memory.m_pMemory = 0;
    hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
    hEnemyHeroes.m_Memory.m_nGrowSize = 0;
    iLagunaBladeDamage = v4;
    v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
    CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemyHeroes, v6);
    if ( CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, 0) <= 1
      || hEnemyHeroes.m_Size <= 0 )
    {
LABEL_69:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
      return 0;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v11 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v7]);
        v12 = v11;
        if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
        {
          m_Id = v11[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
          {
            fMaxRangec = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
            v14 = DOTACommander();
            IllusionState = CDOTA_Commander::GetIllusionState(v14, v12);
            if ( fMaxRangec(this, IllusionState) != 0 )
            {
              fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
              v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
                v9 = v16;
              else
                v9 = 0;
              if ( IsBotTargetStatusValidCore(v12, v9, 251, fMaxRange, this->m_pAbility) )
              {
                m_pBot = v12->m_pBot;
                if ( m_pBot != 0
                  && !CDOTA_Bot::IsAboutToDie(m_pBot)
                  && (v12->m_pBot->CDOTA_BaseNPC_Additive::CDOTA_BaseNPC::m_iUnitType & 0x10) != 0 )
                {
                  m_pEntity = v12->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
LABEL_36:
                    v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v25 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(this->m_hDesiredTarget.m_Index) = v25 | this->m_hDesiredTarget.m_Index & 0x8000;
                    this->m_hDesiredTarget.m_Index = (v24 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  }
                  else
                  {
LABEL_42:
                    this->m_hDesiredTarget.m_Index = -1;
                  }
                  goto LABEL_39;
                }
              }
            }
          }
        }
        ++v8;
        ++v7;
      }
      while ( hEnemyHeroes.m_Size > v8 );
      if ( hEnemyHeroes.m_Size <= 0 )
        goto LABEL_69;
      v17 = 0;
      do
      {
        v18 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v17]);
        if ( v18 == 0
          || BYTE3(v18[7]._vptr_IHandleEntity) == 0
          || (v19 = v18, (v18[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
        {
          v19 = 0;
        }
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v19) )
        {
          fMaxRangea = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
          v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
            v21 = v20;
          else
            v21 = 0;
          if ( IsBotTargetStatusValidCore(v19, v21, 251, fMaxRangea, this->m_pAbility) )
          {
            v22 = v19->m_pBot;
            if ( v22 != 0 && !CDOTA_Bot::IsAboutToDie(v22) && (v19->m_pBot->m_iUnitType & 0x20) != 0 )
            {
              m_pEntity = v19->m_pEntity;
              if ( m_pEntity == 0 )
                goto LABEL_42;
              goto LABEL_36;
            }
          }
        }
        ++v17;
      }
      while ( hEnemyHeroes.m_Size > v17 );
      if ( hEnemyHeroes.m_Size <= 0 )
        goto LABEL_69;
      v26 = 0;
      iBestOverkill = 99999;
      pBestTarget = 0;
      do
      {
        while ( 1 )
        {
          v27 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v26]);
          v28 = v27;
          if ( v27 == 0 || BYTE3(v27[7]._vptr_IHandleEntity) == 0 || (v27[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
            v28 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v28) )
          {
            fMaxRangeb = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
            v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
              v30 = v29;
            else
              v30 = 0;
            if ( IsBotTargetStatusValidCore(v28, v30, 251, fMaxRangeb, this->m_pAbility) )
            {
              v31 = (iLagunaBladeDamage * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v28, 2)));
              v32 = v31 - CBaseEntity::GetHealth(v28);
              if ( v32 < iBestOverkill && v32 > 0 )
              {
                v33 = v28->m_pBot;
                if ( v33 != 0 )
                  break;
              }
            }
          }
          if ( hEnemyHeroes.m_Size <= ++v26 )
            goto LABEL_63;
        }
        IsAboutToDie = CDOTA_Bot::IsAboutToDie(v33);
        v35 = !IsAboutToDie;
        if ( IsAboutToDie )
          v32 = iBestOverkill;
        v36 = v26 + 1;
        if ( !v35 )
          v28 = pBestTarget;
        ++v26;
        iBestOverkill = v32;
        pBestTarget = v28;
      }
      while ( hEnemyHeroes.m_Size > v36 );
LABEL_63:
      if ( pBestTarget == 0 )
        goto LABEL_69;
      v37 = pBestTarget->m_pEntity;
      if ( v37 == 0 )
        goto LABEL_42;
      v38 = (v37->m_EHandle.m_Index >> 15) - (v37->m_flags & 1);
      v39 = 0x7FFF;
      if ( v37->m_EHandle.m_Index != -1 )
        v39 = v37->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v39 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v38 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
LABEL_39:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
      return 3;
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::UseAbility  (line 468, @0x00000000028c0ca0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::UseAbility(
        CDOTA_Bot_AbilityUsage_Lina_LagunaBlade *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lina *m_pBot; // r14
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


