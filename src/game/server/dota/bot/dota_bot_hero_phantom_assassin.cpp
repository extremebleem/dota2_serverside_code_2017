
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_PhantomAssassin::CDOTA_Bot_Hero_PhantomAssassin  (line 21, @0x00000000028d6400, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "phantom_assassin_stifling_dagger", "phantom_assassin_phantom_strike", "phantom_assassin_coup_de_grace"
void __fastcall CDOTA_Bot_Hero_PhantomAssassin::CDOTA_Bot_Hero_PhantomAssassin(
        CDOTA_Bot_Hero_PhantomAssassin *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CEFB0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityStiflingDagger = CDOTA_BaseNPC::FindAbilityByName(v6, "phantom_assassin_stifling_dagger", 0);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityPhantomStrike = CDOTA_BaseNPC::FindAbilityByName(v8, "phantom_assassin_phantom_strike", 0);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityCoupDeGrace = CDOTA_BaseNPC::FindAbilityByName(v10, "phantom_assassin_coup_de_grace", 0);
}


// CDOTA_Bot_Hero_PhantomAssassin::CreateMode  (line 29, @0x00000000028d2620, libserver.so)  // inlines: CDOTA_BotMode_Farm_PhantomAssassin
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Farm::CDOTA_BotMode_Farm, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_PhantomAssassin::CreateMode(
        CDOTA_Bot_Hero_PhantomAssassin *const this,
        int iMode)
{
  CDOTA_BotMode_Farm *v4; // r12

  if ( this->m_bHuman || iMode != 17 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0x110u);  // new CDOTA_BotMode_Farm_PhantomAssassin (size matches)
  CDOTA_BotMode_Farm::CDOTA_BotMode_Farm(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42CF0B0;  // vptr: CDOTA_BotMode_Farm_PhantomAssassin
  return v4;
}


// CDOTA_Bot_Hero_PhantomAssassin::GetGankDistance  (line 43, @0x00000000028d4870, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_PhantomAssassin::GetGankDistance(CDOTA_Bot_Hero_PhantomAssassin *const this)
{
  CDOTABaseAbility *m_pAbilityPhantomStrike; // rbx
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

  m_pAbilityPhantomStrike = this->m_pAbilityPhantomStrike;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityPhantomStrike) >= 0
    && (*(m_pAbilityPhantomStrike->_vptr_IHandleEntity + 245))(m_pAbilityPhantomStrike) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityPhantomStrike)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityPhantomStrike, -1) )
  {
    return (*(this->m_pAbilityPhantomStrike->_vptr_IHandleEntity + 226))(this->m_pAbilityPhantomStrike, &vec3_origin, 0)
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


// CDOTA_Bot_Hero_PhantomAssassin::IsWillingToSpendMana  (line 53, @0x00000000028d3680, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Hero_PhantomAssassin::IsWillingToSpendMana(
        CDOTA_Bot_Hero_PhantomAssassin *const this,
        int iMana)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rcx
  char v7; // dl
  float v8; // xmm0_4
  CEntityInstance *v9; // rax
  bool v10; // zf

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0.0 >= 200.0;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0.0 >= 200.0;
  v4 = &v3[this->m_hUnit.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 0.0 >= 200.0;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 0.0 >= 200.0;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 0.0 >= 200.0;
  v7 = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
  if ( v7 != 0 )
  {
    v8 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
    v9 = m_pInstance;
  }
  else
  {
    v8 = 0.0;
    v9 = 0;
  }
  v10 = v8 == *&v9[44].m_worldGroupId.m_nHashCode;
  result = 1;
  if ( !v10 )
  {
    if ( v7 != 0 )
      return *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id >= 200.0;
    else
      return 0.0 >= 200.0;
  }
  return result;
}


// CDOTA_BotMode_Farm_PhantomAssassin::GetDesire  (line 69, @0x00000000028d2690, libserver.so)
// calls: CDOTA_BotMode_Farm::GetDesire
float __fastcall CDOTA_BotMode_Farm_PhantomAssassin::GetDesire(CDOTA_BotMode_Farm_PhantomAssassin *const this)
{
  return CDOTA_BotMode_Farm::GetDesire(this) * 1.2;
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger  (line 79, @0x00000000028d64e0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF150;  // vptr: CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::GetCurrentUsageDesire  (line 85, @0x00000000028d6f90, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, Length2D, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CDOTA_TeamCommander::HasIncomingStun (15 total)
// globals: jpt_28D6FCE
int __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger *const this)
{
  CDOTA_Bot_Hero_PhantomAssassin *v2; // r12
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rdi
  CDOTABaseAbility *m_pAbility; // rdi
  int v6; // eax
  CEntityInstance *v7; // rax
  const CBaseEntity *v8; // rdi
  const Vector *v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC_Hero *v13; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v15)(CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger *const, _QWORD); // r15
  CDOTA_Commander *v16; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rsi
  CEntityInstance *v21; // rax
  CEntityInstance *v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  __int64 v25; // rax
  CEntityInstance *v26; // rax
  CEntityIdentity *v27; // rdx
  int v28; // eax
  __int16 v29; // cx
  CEntityInstance *v30; // rax
  CEntityInstance *v31; // rax
  CDOTA_BaseNPC *v32; // rsi
  CEntityInstance *v33; // rax
  const CBaseEntity *v34; // rdi
  const Vector *AbsOrigin; // r13
  const Vector *v36; // rax
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // rdi
  CDOTA_Bot_Hero_PhantomAssassin *m_pBot; // r12
  unsigned __int8 (__fastcall *v40)(CDOTA_Bot_Hero_PhantomAssassin *, _QWORD); // r13
  unsigned int v41; // eax
  CDOTA_Bot_Hero_PhantomAssassin *v42; // rdi
  __int64 v43; // r12
  CDOTA_TeamCommander *v44; // rax
  const CEntityHandle *v45; // rdi
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // r13
  CEntityInstance *v48; // rax
  CDOTA_BaseNPC *v49; // rsi
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v52; // eax
  __int16 v53; // cx
  float hEntityList; // [rsp+8h] [rbp-58h]
  float hEntityLista; // [rsp+8h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+10h] [rbp-50h] BYREF

  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
    case 5u:
    case 6u:
      m_pBot = this->m_pBot;
      v40 = *(m_pBot->_vptr_CDOTA_Bot + 10);
      v41 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      v42 = m_pBot;
      v43 = 0;
      if ( v40(v42, v41) == 0 )
        goto LABEL_25;
      while ( 1 )
      {
        if ( v43 >= CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
          goto LABEL_25;
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( v43 < OpposingTeamCommander->m_BotList.m_Size
          && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v43] != 0 )
        {
          v44 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v45 = 0;
          if ( v43 < v44->m_BotList.m_Size )
            v45 = v44->m_BotList.m_Memory.m_pMemory[v43];
          v46 = CEntityHandle::operator CEntityInstance *(v45 + 39);
          if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
            v47 = v46;
          else
            v47 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v47) )
          {
            hEntityLista = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
            v48 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 )
              v49 = v48;
            else
              v49 = 0;
            if ( IsBotTargetStatusValidCore(v47, v49, 251, hEntityLista, this->m_pAbility) )
              break;
          }
        }
        ++v43;
      }
      if ( v47 != 0 && (m_pEntity = v47->m_pEntity) != 0 )
      {
        v52 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v53 = 0x7FFF;
        else
          v53 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v53 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v52 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        return 1;
      }
      else
      {
        this->m_hDesiredTarget.m_Index = -1;
        return 1;
      }
    case 2u:
      v30 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
        v22 = v30;
      else
        v22 = 0;
      if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v22) )
        goto LABEL_25;
      v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
        v32 = v31;
      else
        v32 = 0;
      if ( !IsBotTargetStatusValidCore(v22, v32, 251, -1.0, this->m_pAbility) )
        goto LABEL_25;
      v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v33 == 0 || (v34 = v33, BYTE3(v33[7]._vptr_IHandleEntity) == 0) )
        v34 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v34);
      v36 = CBaseEntity::GetAbsOrigin(v22);
      hEntityList = fsqrt(
                      ((v36->x - AbsOrigin->x) * (v36->x - AbsOrigin->x))
                    + ((v36->y - AbsOrigin->y) * (v36->y - AbsOrigin->y)));
      v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
        v38 = v37;
      else
        v38 = 0;
      if ( CDOTA_BaseNPC::GetAttackRange(v38) > hEntityList )
        goto LABEL_25;
      if ( v22 != 0 )
        goto LABEL_44;
      goto LABEL_63;
    case 4u:
      v2 = this->m_pBot;
      if ( v2->m_fModeDesires[(*(v2->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v2->m_pActiveBotMode)] <= 0.89999998 )
        goto LABEL_25;
      v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
        v4 = v3;
      else
        v4 = 0;
      if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v4) <= 2.0 )
        goto LABEL_25;
      m_pAbility = this->m_pAbility;
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
      CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v6);
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        v8 = v7;
      else
        v8 = 0;
      v9 = CBaseEntity::GetAbsOrigin(v8);
      SortEHANDLEVectorByLocation(&hEntities, v9, 0);
      if ( hEntities.m_Size <= 0 )
        goto LABEL_24;
      v10 = 0;
      v11 = 0;
      break;
    case 0x12u:
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v22) )
        goto LABEL_25;
      v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
        v24 = v23;
      else
        v24 = 0;
      if ( !IsBotTargetStatusValidCore(v22, v24, 251, -1.0, this->m_pAbility) )
        goto LABEL_25;
      if ( CDOTA_BaseNPC::IsMovementImpaired(v22) )
        goto LABEL_25;
      if ( CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v22) )
        goto LABEL_25;
      if ( v22 == 0 )
        goto LABEL_25;
      if ( (v22[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        goto LABEL_25;
      v25 = *&v22[45].m_worldGroupId.m_nHashCode;
      if ( v25 == 0 )
        goto LABEL_25;
      hEntities.m_Size = *(v25 + 712);
      v26 = CEntityHandle::operator CEntityInstance *(&hEntities);
      if ( v26 == 0
        || BYTE3(v26[7]._vptr_IHandleEntity) == 0
        || (v26[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
        || *&v26[45].m_worldGroupId.m_nHashCode == 0
        || CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v26) >= 4.0 )
      {
        goto LABEL_25;
      }
LABEL_44:
      v27 = v22->m_pEntity;
      if ( v27 != 0 )
      {
        v28 = (v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1);
        if ( v27->m_EHandle.m_Index == -1 )
          v29 = 0x7FFF;
        else
          v29 = v27->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v29 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v28 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        return 3;
      }
      else
      {
LABEL_63:
        this->m_hDesiredTarget.m_Index = -1;
        return 3;
      }
    default:
      goto LABEL_25;
  }
  do
  {
    v12 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v10]);
    v13 = v12;
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
      {
        v15 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v16 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v16, v13);
        if ( v15(this, IllusionState) != 0 )
        {
          v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v18 == 0 || (v19 = v18, BYTE3(v18[7]._vptr_IHandleEntity) == 0) )
            v19 = 0;
          if ( IsBotTargetStatusValidCore(v13, v19, 251, -1.0, this->m_pAbility)
            && !CDOTA_BaseNPC::IsMovementImpaired(v13)
            && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v13) )
          {
            this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v10].m_Index;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
            return 2;
          }
        }
      }
    }
    ++v11;
    ++v10;
  }
  while ( hEntities.m_Size > v11 );
LABEL_24:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_25:
  this->m_hDesiredTarget.m_Index = -1;
  return 0;
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::UseAbility  (line 179, @0x00000000028d3b00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::UseAbility(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_PhantomAssassin *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike  (line 192, @0x00000000028d6510, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF1B0;  // vptr: CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike
  this->m_hDesiredTarget.m_Index = -1;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::GetCurrentUsageDesire  (line 199, @0x00000000028d86e0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetActiveModeDesire, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetTeamNumber, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsRealHero, Length, Length2D, LookupEntity, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator-, operator=, operator==<CBaseEntity>, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange, FindUnitsInRadius, CDOTA_Bot::IsAboutToDie, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_BaseNPC::GetFountain, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot::IsDangerouslyLow, __stack_chk_fail (13 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike *const this)
{
  int v2; // eax
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r14
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // rdi
  const Vector *v10; // r12
  const Vector *v11; // rax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  CDOTA_Bot_Hero_PhantomAssassin *v14; // rax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // r12
  const Vector *v17; // r13
  CEntityInstance *v18; // rax
  CEntityInstance *v19; // rcx
  vec_t *p_m_Index; // r12
  CEntityInstance *v21; // rax
  CEntityInstance *v22; // r13
  CEntityInstance *v23; // rax
  CDOTA_Bot *v24; // r15
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // r12
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rsi
  CDOTA_Bot_Hero_PhantomAssassin *v29; // r13
  unsigned __int8 (__fastcall *v30)(CDOTA_Bot_Hero_PhantomAssassin *, _QWORD); // r14
  unsigned int v31; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v33; // eax
  __int16 v34; // cx
  CDOTA_Bot_Hero_PhantomAssassin *m_pBot; // r12
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rdi
  CEntityInstance *v38; // rax
  const CBaseEntity *v39; // rdi
  const Vector *AbsOrigin; // rax
  CDOTABaseAbility *m_pAbility; // rdi
  CEntityInstance *v42; // rax
  CDOTA_BaseNPC *v43; // rdx
  CEntityInstance *v44; // rax
  CDOTA_BaseNPC *v45; // rdi
  CBaseEntity *Fountain; // rax
  const Vector *v47; // rax
  float x; // xmm7_4
  CHandle<CBaseEntity> *m_pMemory; // r12
  CHandle<CBaseEntity> *v50; // r14
  uint32 m_Index; // r13d
  unsigned int v52; // eax
  CEntityIdentity *v53; // rax
  CEntityIdentity *v54; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *v56; // rax
  float v57; // xmm0_4
  CDOTA_Bot_Hero_PhantomAssassin *v58; // r12
  unsigned __int8 (__fastcall *v59)(CDOTA_Bot_Hero_PhantomAssassin *, _QWORD); // r13
  unsigned int v60; // eax
  CEntityIdentity *v61; // rdx
  int v62; // eax
  __int16 v63; // cx
  float fBestDistance; // [rsp+20h] [rbp-1A0h]
  float y; // [rsp+24h] [rbp-19Ch]
  int iAllyCount; // [rsp+28h] [rbp-198h]
  int iAllyCounta; // [rsp+28h] [rbp-198h]
  int fCurrentDistanceFromDesiredLoc; // [rsp+2Ch] [rbp-194h]
  float fCurrentDistanceFromDesiredLoca; // [rsp+2Ch] [rbp-194h]
  float v70; // [rsp+30h] [rbp-190h]
  float fDistanceFromDesiredLoc; // [rsp+38h] [rbp-188h]
  CHandle<CBaseEntity> *fDistanceFromDesiredLoca; // [rsp+38h] [rbp-188h]
  float fDistanceFromDesiredLocb; // [rsp+38h] [rbp-188h]
  float fDistanceFromDesiredLocc; // [rsp+38h] [rbp-188h]
  EHANDLE hBestTarget; // [rsp+40h] [rbp-180h] BYREF
  EHANDLE hTarget; // [rsp+50h] [rbp-170h]
  Vector vCurrentLoc; // [rsp+60h] [rbp-160h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v79; // [rsp+188h] [rbp-38h]

  v79 = __readfsqword(0x28u);
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 4 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] <= 0.89999998
      || ((v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0
       || BYTE3(v36[7]._vptr_IHandleEntity) == 0
        ? (v37 = 0)
        : (v37 = v36),
          CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v37) <= 2.0) )
    {
      v58 = this->m_pBot;
      v59 = *(v58->_vptr_CDOTA_Bot + 10);
      v60 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v59(v58, v60) == 0 )
        goto LABEL_4;
    }
    v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v38 == 0 || (v39 = v38, BYTE3(v38[7]._vptr_IHandleEntity) == 0) )
      v39 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v39);
    m_pAbility = this->m_pAbility;
    *&vCurrentLoc.x = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_nAllocationCount = 64;
    hEntities.m_Memory.m_nGrowSize = 0x80000000;
    LODWORD(vCurrentLoc.z) = AbsOrigin;
    hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
    fDistanceFromDesiredLocb = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
    v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    v43 = 0;
    if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
      v43 = v42;
    FindUnitsInRadius(v43->m_iTeamNum.m_Value, &vCurrentLoc, v43, fDistanceFromDesiredLocb, &hEntities, 1, 3, 0, 0, 0);
    if ( hEntities.m_Size == 0 )
      goto LABEL_101;
    v44 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
      v45 = v44;
    else
      v45 = 0;
    Fountain = CDOTA_BaseNPC::GetFountain(v45);
    v47 = CBaseEntity::GetAbsOrigin(Fountain);
    x = v47->x;
    hBestTarget.m_Index = -1;
    v70 = x;
    y = v47->y;
    m_pMemory = hEntities.m_Memory.m_pMemory;
    fBestDistance = 0.0;
    iAllyCounta = SLODWORD(v47->z);
    v50 = &hEntities.m_Memory.m_pMemory[hEntities.m_Size];
    fCurrentDistanceFromDesiredLoca = fsqrt(
                                        ((vCurrentLoc.x - x) * (vCurrentLoc.x - x))
                                      + ((vCurrentLoc.y - y) * (vCurrentLoc.y - y)));
    if ( hEntities.m_Memory.m_pMemory != v50 )
    {
      do
      {
        m_Index = m_pMemory->m_Index;
        v52 = m_pMemory->m_Index + 2;
        hTarget.m_Index = m_pMemory->m_Index;
        if ( v52 > 1 )
        {
          v53 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
          if ( v53 != 0 )
          {
            v54 = &v53[hTarget.m_Index & 0x1FF];
            if ( v54 != 0 && m_Index == v54->m_EHandle.m_Index )
            {
              m_pInstance = v54->m_pInstance;
              if ( v54->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v56 = CBaseEntity::GetAbsOrigin(m_pInstance);
                if ( fsqrt(
                       ((v56->x - vCurrentLoc.x) * (v56->x - vCurrentLoc.x))
                     + ((v56->y - vCurrentLoc.y) * (v56->y - vCurrentLoc.y))) >= 350.0 )
                {
                  v57 = fsqrt(
                          (((v56->x - v70) * (v56->x - v70)) + ((v56->y - y) * (v56->y - y)))
                        + ((v56->z - *&iAllyCounta) * (v56->z - *&iAllyCounta)));
                  if ( v57 <= fCurrentDistanceFromDesiredLoca )
                  {
                    fDistanceFromDesiredLocc = v57;
                    if ( CEntityHandle::operator CEntityInstance *(&hBestTarget) == 0
                      || fBestDistance > fDistanceFromDesiredLocc )
                    {
                      hBestTarget.m_Index = m_Index;
                      fBestDistance = fDistanceFromDesiredLocc;
                    }
                  }
                }
              }
            }
          }
        }
        ++m_pMemory;
      }
      while ( v50 != m_pMemory );
    }
    if ( CEntityHandle::operator CEntityInstance *(&hBestTarget) == 0 )
      goto LABEL_101;
    this->m_hDesiredTarget = hBestTarget;
    goto LABEL_92;
  }
  if ( v2 == 17 )
  {
    v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
      v26 = v25;
    else
      v26 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v26) )
      goto LABEL_4;
    v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
      v28 = v27;
    else
      v28 = 0;
    if ( !IsBotTargetStatusValidCore(v26, v28, 251, -1.0, this->m_pAbility) )
      goto LABEL_4;
    v29 = this->m_pBot;
    v30 = *(v29->_vptr_CDOTA_Bot + 10);
    v31 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    if ( v30(v29, v31) == 0 )
      goto LABEL_4;
    if ( v26 != 0 && (m_pEntity = v26->m_pEntity) != 0 )
    {
      v33 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v34 = 0x7FFF;
      else
        v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v34 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v33 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 1;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      return 1;
    }
  }
  if ( v2 != 2 )
    goto LABEL_4;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
    goto LABEL_4;
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  if ( !IsBotTargetStatusValidCore(v5, v7, 251, -1.0, this->m_pAbility) )
    goto LABEL_4;
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v8 == 0 || (v9 = v8, BYTE3(v8[7]._vptr_IHandleEntity) == 0) )
    v9 = 0;
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v11 = CBaseEntity::GetAbsOrigin(v5);
  fDistanceFromDesiredLoc = fsqrt(((v11->x - v10->x) * (v11->x - v10->x)) + ((v11->y - v10->y) * (v11->y - v10->y)));
  v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    v13 = v12;
  else
    v13 = 0;
  if ( CDOTA_BaseNPC::GetAttackRange(v13) > fDistanceFromDesiredLoc )
    goto LABEL_4;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  v14 = this->m_pBot;
  hEntities.m_Memory.m_nAllocationCount = 64;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  v15 = CEntityHandle::operator CEntityInstance *(&v14->m_hUnit);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  v17 = CBaseEntity::GetAbsOrigin(v5);
  v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v19 = v18;
  else
    v19 = 0;
  FindUnitsInRadius(HIBYTE(v19[7].m_CScriptComponent), v17, v16, 400.0, &hEntities, 3, 1, 0, 0, 0);
  p_m_Index = &hEntities.m_Memory.m_pMemory->m_Index;
  fDistanceFromDesiredLoca = &hEntities.m_Memory.m_pMemory[hEntities.m_Size];
  if ( hEntities.m_Memory.m_pMemory == fDistanceFromDesiredLoca )
  {
LABEL_103:
    if ( v5 != 0 && (v61 = v5->m_pEntity) != 0 )
    {
      v62 = (v61->m_EHandle.m_Index >> 15) - (v61->m_flags & 1);
      v63 = 0x7FFF;
      if ( v61->m_EHandle.m_Index != -1 )
        v63 = v61->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v63 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v62 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
    }
LABEL_92:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    return 2;
  }
  iAllyCount = 0;
  fCurrentDistanceFromDesiredLoc = 0;
  do
  {
    vCurrentLoc.x = *p_m_Index;
    v21 = CEntityHandle::operator CEntityInstance *(&vCurrentLoc);
    v22 = v21;
    if ( v21 != 0
      && BYTE3(v21[7]._vptr_IHandleEntity) != 0
      && (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && LOBYTE(v5[71].m_pEntity) == 0 )
    {
      v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v23 == 0 || BYTE3(v23[7]._vptr_IHandleEntity) == 0 || v22 != v23 )
      {
        v24 = *&v22[45].m_worldGroupId.m_nHashCode;
        if ( v24 != 0 )
        {
          if ( CDOTA_Bot::IsAboutToDie(*&v22[45].m_worldGroupId.m_nHashCode) || CDOTA_Bot::IsDangerouslyLow(v24) )
            goto LABEL_28;
          v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        }
        if ( v23 == 0 || BYTE3(v23[7]._vptr_IHandleEntity) == 0 )
          v23 = 0;
        if ( HIBYTE(v22[7].m_CScriptComponent) == HIBYTE(v23[7].m_CScriptComponent) )
          ++iAllyCount;
        else
          ++fCurrentDistanceFromDesiredLoc;
      }
    }
LABEL_28:
    ++p_m_Index;
  }
  while ( fDistanceFromDesiredLoca != p_m_Index );
  if ( iAllyCount + 1 >= fCurrentDistanceFromDesiredLoc )
    goto LABEL_103;
LABEL_101:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_4:
  this->m_hDesiredTarget.m_Index = -1;
  return 0;
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::UseAbility  (line 326, @0x00000000028d3e80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::UseAbility(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_PhantomAssassin *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::UseOnIllusionState  (line 335, @0x00000000028d1f90, libserver.so)
bool __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::UseOnIllusionState(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike *const this,
        DOTA_BOT_ILLUSION_STATE iState)
{
  return iState <= DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
}


