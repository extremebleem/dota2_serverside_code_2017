
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Kunkka::CDOTA_Bot_Hero_Kunkka  (line 25, @0x00000000028c3610, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "kunkka_x_marks_the_spot", "kunkka_return", "kunkka_ghostship"
void __fastcall CDOTA_Bot_Hero_Kunkka::CDOTA_Bot_Hero_Kunkka(
        CDOTA_Bot_Hero_Kunkka *const this,
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
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CCED0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityTorrent = CDOTA_BaseNPC::FindAbilityByName(v6, "kunkka_torrent", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityTidebringer = CDOTA_BaseNPC::FindAbilityByName(v8, "kunkka_tidebringer", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityXMarksTheSpot = CDOTA_BaseNPC::FindAbilityByName(v10, "kunkka_x_marks_the_spot", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityReturn = CDOTA_BaseNPC::FindAbilityByName(v12, "kunkka_return", 1);
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  this->m_pAbilityGhostShip = CDOTA_BaseNPC::FindAbilityByName(v14, "kunkka_ghostship", 1);
}


// CDOTA_Bot_Hero_Kunkka::CreateMode  (line 37, @0x00000000028bf620, libserver.so)  // inlines: CDOTA_BotMode_Attack_Kunkka, CDOTA_BotMode_Laning_Kunkka
// calls: operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, CDOTA_Bot::CreateMode, CDOTA_BotMode_Laning::CDOTA_BotMode_Laning, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Kunkka::CreateMode(CDOTA_Bot_Hero_Kunkka *const this, int iMode)
{
  CDOTA_BotMode_Attack *v3; // r12
  CDOTA_BotMode_Laning *v5; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 1 )
  {
    if ( iMode == 2 )
    {
      v3 = operator new(0xE8u);
      CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v3, this);
      v3->_vptr_CDOTA_BotMode = off_42CD070;
      return v3;
    }
    return CDOTA_Bot::CreateMode(this, iMode);
  }
  v5 = operator new(0xF0u);
  CDOTA_BotMode_Laning::CDOTA_BotMode_Laning(v5, this);
  v5->_vptr_CDOTA_BotMode = off_42CCFD0;
  return v5;
}


// CDOTA_Bot_Hero_Kunkka::HasLocationStun  (line 53, @0x00000000028bfcd0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
bool __fastcall CDOTA_Bot_Hero_Kunkka::HasLocationStun(CDOTA_Bot_Hero_Kunkka *const this)
{
  CDOTABaseAbility *m_pAbilityTorrent; // rbx

  m_pAbilityTorrent = this->m_pAbilityTorrent;
  return CDOTABaseAbility::GetEffectiveLevel(m_pAbilityTorrent) >= 0
      && (*(m_pAbilityTorrent->_vptr_IHandleEntity + 245))(m_pAbilityTorrent) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityTorrent)
      && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityTorrent, -1);
}


// CDOTA_Bot_Hero_Kunkka::GetGankDistance  (line 60, @0x00000000028c1780, libserver.so)  // inlines: Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsFullyCastable, IsListeningToEvent, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Kunkka::GetGankDistance(CDOTA_Bot_Hero_Kunkka *const this)
{
  CDOTABaseAbility *m_pAbilityTorrent; // rbx
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

  m_pAbilityTorrent = this->m_pAbilityTorrent;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityTorrent) >= 0
    && (*(m_pAbilityTorrent->_vptr_IHandleEntity + 245))(m_pAbilityTorrent) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityTorrent)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityTorrent, -1) )
  {
    return (*(this->m_pAbilityTorrent->_vptr_IHandleEntity + 226))(this->m_pAbilityTorrent, &vec3_origin, 0) + 200;
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


// CDOTA_Bot_Hero_Kunkka::GetMaxRoamDistance  (line 72, @0x00000000028bfe50, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Kunkka::GetMaxRoamDistance(CDOTA_Bot_Hero_Kunkka *const this)
{
  CDOTABaseAbility *m_pAbilityTorrent; // rbx

  m_pAbilityTorrent = this->m_pAbilityTorrent;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityTorrent) >= 0
    && (*(m_pAbilityTorrent->_vptr_IHandleEntity + 245))(m_pAbilityTorrent) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityTorrent)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityTorrent, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BotMode_Laning_Kunkka::Think  (line 84, @0x00000000028c65b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Element, Get, GetAction, GetInstance, GetTarget, GetTeamNumber, IsFullyCastable, IsTrained, ToDOTABaseNPC, ToDOTABotActionAttack, Top, operator CBaseEntity*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode_Laning::Think, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetAttackRange, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindEstimatedAttackLocation, CDOTA_Bot::GetAvoidanceAmountForLocation, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (15 total)
void __fastcall CDOTA_BotMode_Laning_Kunkka::Think(CDOTA_BotMode_Laning_Kunkka *const this)
{
  CDOTABaseAbility *m_pHead; // r12
  CDOTA_Bot *m_pBot; // rax
  int m_Size; // edx
  const CEntityHandle *v5; // r12
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v7; // r14
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_Bot *v13; // rdi
  CDOTA_BaseNPC *v14; // rax
  CDOTA_Bot *v15; // rdi
  float flRadius; // [rsp+1Ch] [rbp-154h]
  Vector vAttackLoc; // [rsp+20h] [rbp-150h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hPotentialTargets; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v19; // [rsp+148h] [rbp-28h]
  Vector v20; // 0:kr00_12.12
  Vector EstimatedAttackLocation; // 0:kr14_12.12

  v19 = __readfsqword(0x28u);
  m_pHead = this->m_pBot[1].m_References.m_pHead;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pHead) < 0
    || (*(m_pHead->_vptr_IHandleEntity + 245))(m_pHead) == 0
    || !CDOTABaseAbility::IsOwnersManaEnough(m_pHead)
    || !CDOTABaseAbility::IsOwnersGoldEnough(m_pHead, -1) )
  {
    goto LABEL_3;
  }
  m_pBot = this->m_pBot;
  m_Size = m_pBot->m_ActionStack.m_Size;
  if ( m_Size > 0
    && (v5 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1]) != 0
    && (*(*&v5->m_Index + 16LL))(v5) == 3 )
  {
    v14 = CEntityHandle::operator CEntityInstance *(v5 + 5);
    if ( v14 == 0 )
      goto LABEL_3;
    if ( !v14->m_bIsDOTANPC )
      goto LABEL_3;
    EstimatedAttackLocation = CDOTA_Bot::FindEstimatedAttackLocation(this->m_pBot, v14);
    v15 = this->m_pBot;
    vAttackLoc = EstimatedAttackLocation;
    if ( CDOTA_Bot::GetAvoidanceAmountForLocation(v15, &vAttackLoc, 0) > 14 )
      goto LABEL_3;
  }
  else
  {
    hPotentialTargets.m_Size = 0;
    hPotentialTargets.m_Memory.m_nAllocationCount = 64;
    hPotentialTargets.m_Memory.m_nGrowSize = 0x80000000;
    hPotentialTargets.m_Memory.m_pMemory = &hPotentialTargets.m_FixedMemory;
    Unit = CDOTA_BotMode::GetUnit(this);
    flRadius = 4.0 * CDOTA_BaseNPC::GetAttackRange(Unit);
    v7 = CDOTA_BotMode::GetUnit(this);
    v8 = CDOTA_BotMode::GetUnit(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTA_BotMode::GetUnit(this);
    FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, v7, flRadius, &hPotentialTargets, 2, 2, 128, 1, 0);
    if ( hPotentialTargets.m_Size <= 0
      || (v11 = CEntityHandle::operator CEntityInstance *(hPotentialTargets.m_Memory.m_pMemory), v12 = v11, v11 == 0)
      || !v11->m_bIsDOTANPC
      || (v20 = CDOTA_Bot::FindEstimatedAttackLocation(this->m_pBot, v11),
          v13 = this->m_pBot,
          vAttackLoc = v20,
          CDOTA_Bot::GetAvoidanceAmountForLocation(v13, &vAttackLoc, 0) > 14) )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialTargets);
LABEL_3:
      CDOTA_BotMode_Laning::Think(this);
      return;
    }
    CDOTA_Bot::SetAttackAction(this->m_pBot, v12, 0);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialTargets);
  }
}


// CDOTA_BotMode_Attack_Kunkka::Think  (line 132, @0x00000000028caa20, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, Element, Get, GetAction, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetTeamNumber, IndexToIdentity, IsFullyCastable, IsTrained, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABotActionAttack, Top, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTA_BotMode_Attack::Think, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_BaseNPC::GetAttackRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (14 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Attack_Kunkka::Think(CDOTA_BotMode_Attack_Kunkka *const this)
{
  CDOTA_Bot *m_pBot; // r12
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTABaseAbility *m_pHead; // r13
  __int64 v7; // rax
  CDOTA_Bot *v8; // rdx
  int m_Size; // eax
  const CEntityHandle *v10; // r13
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v13; // rax
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  float AttackRange; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm0_4
  CDOTA_BaseNPC *v20; // r13
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // r13
  int v25; // r14d
  CEntityInstance *v26; // rax
  CDOTA_BaseNPC *v27; // r12
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r15
  const Vector *v30; // rax
  vec_t v31; // xmm1_4
  vec_t v32; // xmm0_4
  CEntityInstance *v33; // rax
  CEntityInstance *v34; // r13
  float fDist; // [rsp+28h] [rbp-78h]
  float fDista; // [rsp+28h] [rbp-78h]
  Vector vToTarget; // [rsp+30h] [rbp-70h] BYREF
  Vector vToCandidate; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEntities; // [rsp+50h] [rbp-50h] BYREF

  m_pBot = this->m_pBot;
  hNearbyEntities.m_Size = m_pBot->m_hTarget.m_Index;
  if ( (hNearbyEntities.m_Size + 2) <= 1 )
    goto LABEL_5;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hNearbyEntities.m_Size) >> 9) & 0x3F];
  if ( v3 == 0 )
    goto LABEL_5;
  v4 = &v3[hNearbyEntities.m_Size & 0x1FF];
  if ( v4 == 0 )
    goto LABEL_5;
  if ( hNearbyEntities.m_Size != v4->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    goto LABEL_5;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    goto LABEL_5;
  m_pHead = m_pBot[1].m_References.m_pHead;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pHead) < 0 )
    goto LABEL_5;
  if ( (*(m_pHead->_vptr_IHandleEntity + 245))(m_pHead) == 0 )
    goto LABEL_5;
  if ( !CDOTABaseAbility::IsOwnersManaEnough(m_pHead) )
    goto LABEL_5;
  if ( !CDOTABaseAbility::IsOwnersGoldEnough(m_pHead, -1) )
    goto LABEL_5;
  v7 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
  if ( v7 == 0 || (*(**(v7 + 34056) + 16LL))(*(v7 + 34056)) != 4 )
    goto LABEL_5;
  v8 = this->m_pBot;
  m_Size = v8->m_ActionStack.m_Size;
  if ( m_Size > 0 )
  {
    v10 = v8->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
    if ( v10 != 0 && (*(*&v10->m_Index + 16LL))(v10) == 3 )
    {
      v33 = CEntityHandle::operator CEntityInstance *(v10 + 5);
      if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
        v34 = v33;
      else
        v34 = 0;
      hNearbyEntities.m_Size = this->m_pBot->m_hTarget.m_Index;
      if ( v34 != CEntityHandle::operator CEntityInstance *(&hNearbyEntities) )
        goto LABEL_5;
    }
  }
  Unit = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
  v13 = CBaseEntity::GetAbsOrigin(m_pInstance);
  v14 = v13->x - AbsOrigin->x;
  v15 = v13->y - AbsOrigin->y;
  vToTarget.z = 0.0;
  vToTarget.x = v14;
  vToTarget.y = v15;
  fDist = VectorNormalize(&vToTarget);
  v16 = CDOTA_BotMode::GetUnit(this);
  AttackRange = CDOTA_BaseNPC::GetAttackRange(v16);
  if ( fDist <= (AttackRange + AttackRange)
    || CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pBot[1]._vptr_CDOTA_Bot, "radius", -1, 1) <= fDist )
  {
    goto LABEL_5;
  }
  hNearbyEntities.m_Size = 0;
  hNearbyEntities.m_Memory.m_pMemory = 0;
  hNearbyEntities.m_Memory.m_nAllocationCount = 0;
  hNearbyEntities.m_Memory.m_nGrowSize = 0;
  v18 = CDOTA_BotMode::GetUnit(this);
  v19 = CDOTA_BaseNPC::GetAttackRange(v18);
  fDista = v19 + v19;
  v20 = CDOTA_BotMode::GetUnit(this);
  v21 = CDOTA_BotMode::GetUnit(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  v23 = CDOTA_BotMode::GetUnit(this);
  FindUnitsInRadius(v23->m_iTeamNum.m_Value, v22, v20, fDista, &hNearbyEntities, 2, 3, 128, 1, 0);
  if ( hNearbyEntities.m_Size <= 0 )
  {
LABEL_26:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEntities);
LABEL_5:
    CDOTA_BotMode_Attack::Think(this);
    return;
  }
  v24 = 0;
  v25 = 0;
  while ( 1 )
  {
    v26 = CEntityHandle::operator CEntityInstance *(&hNearbyEntities.m_Memory.m_pMemory[v24]);
    v27 = v26;
    if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
    {
      v28 = CDOTA_BotMode::GetUnit(this);
      v29 = CBaseEntity::GetAbsOrigin(v28);
      v30 = CBaseEntity::GetAbsOrigin(v27);
      v31 = v30->x - v29->x;
      v32 = v30->y - v29->y;
      vToCandidate.z = 0.0;
      vToCandidate.x = v31;
      vToCandidate.y = v32;
      VectorNormalize(&vToCandidate);
      if ( (((vToCandidate.x * vToTarget.x) + (vToCandidate.y * vToTarget.y)) + (vToCandidate.z * vToTarget.z)) > 0.866 )
        break;
    }
    ++v25;
    ++v24;
    if ( hNearbyEntities.m_Size <= v25 )
      goto LABEL_26;
  }
  CDOTA_Bot::SetAttackAction(this->m_pBot, v27, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEntities);
}


// CDOTA_Bot_AbilityUsage_Kunkka_Torrent::CDOTA_Bot_AbilityUsage_Kunkka_Torrent  (line 185, @0x00000000028c3780, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Kunkka_Torrent::CDOTA_Bot_AbilityUsage_Kunkka_Torrent(
        CDOTA_Bot_AbilityUsage_Kunkka_Torrent *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD110;
}


// CDOTA_Bot_AbilityUsage_Kunkka_Torrent::GetCurrentUsageDesire  (line 192, @0x00000000028ce210, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetActiveModeDesire, GetGameTime, GetInstance, GetTargetNPC, GetUnit, IsBotTargetStatusValid, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Bot::GetBotLag, CDOTA_Bot::FindNearbyChannelingEnemy, IsInvisibleToBots, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::FindModifierByName, GetXMarksTheSpotLocation, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::FindNearbyEnemiesInMode, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::Remove (19 total)
// strings: "modifier_kunkka_x_marks_the_spot"
int __fastcall CDOTA_Bot_AbilityUsage_Kunkka_Torrent::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Kunkka_Torrent *const this)
{
  float BotLag; // xmm0_4
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v4; // xmm0
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v8; // rax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  CDOTA_Bot_Hero_Kunkka *m_pBot; // r13
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // r14
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rdi
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_Buff *ModifierByName; // r13
  float v19; // xmm0_4
  float v20; // xmm1_4
  CDOTA_Bot_Hero_Kunkka *v21; // r13
  CDOTA_Bot_Hero_Kunkka *v22; // r13
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r14
  int v25; // eax
  int v26; // r14d
  CDOTA_BaseNPC *v27; // rsi
  CEntityInstance *v28; // rax
  CDOTA_BaseNPC *v29; // rsi
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC *v31; // rdi
  int v32; // esi
  CEntityInstance *v33; // rax
  float v34; // xmm0_4
  CDOTABaseAbility *v35; // rdi
  int v36; // eax
  CEntityInstance *v37; // rax
  const CBaseEntity *v38; // rdi
  const Vector *AbsOrigin; // rax
  CEntityInstance *v40; // rax
  CDOTA_BaseNPC *v41; // r14
  CEntityInstance *v42; // rax
  CDOTA_BaseNPC *v43; // rsi
  __m128i v44; // xmm6
  float v45; // r15d
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // rdi
  float v48; // xmm0_4
  CDOTA_Bot_Hero_Kunkka *v49; // r13
  CEntityInstance *v50; // rax
  float v51; // xmm1_4
  CDOTA_BaseNPC *v52; // r14
  CEntityInstance *v53; // rax
  CDOTA_BaseNPC *v54; // rdi
  __int64 v55; // r14
  int v56; // r15d
  CDOTA_BaseNPC *v57; // rsi
  CEntityInstance *v58; // rax
  CDOTA_BaseNPC *v59; // rdi
  CEntityInstance *v60; // rax
  CDOTA_BaseNPC *pTarget; // [rsp+8h] [rbp-88h]
  float delayd; // [rsp+10h] [rbp-80h]
  float delay; // [rsp+10h] [rbp-80h]
  CDOTA_BaseNPC *delaya; // [rsp+10h] [rbp-80h]
  float delaye; // [rsp+10h] [rbp-80h]
  float delayb; // [rsp+10h] [rbp-80h]
  float delayc; // [rsp+10h] [rbp-80h]
  float v68; // [rsp+18h] [rbp-78h]
  float fDelayd; // [rsp+1Ch] [rbp-74h]
  float fDelay; // [rsp+1Ch] [rbp-74h]
  float fDelaya; // [rsp+1Ch] [rbp-74h]
  float fDelayb; // [rsp+1Ch] [rbp-74h]
  float fDelayc; // [rsp+1Ch] [rbp-74h]
  float fChannelTimeRemaining; // [rsp+24h] [rbp-6Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+28h] [rbp-68h] BYREF
  Vector vTargetLocation; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  fDelayd = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "delay", -1, 1);
  BotLag = CDOTA_Bot::GetBotLag(this->m_pBot);
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  pChannelTarget = 0;
  fDelay = fDelayd + BotLag;
  v4 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v4.m128i_i32 = v5 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v4, &pChannelTarget, &fChannelTimeRemaining) != 0
    && !IsInvisibleToBots(pChannelTarget) )
  {
    v34 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
    if ( fChannelTimeRemaining > (v34 + fDelay) )
    {
      this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(pChannelTarget);
      return 3;
    }
  }
  v6 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 2;
  if ( v6 > 0x10 )
  {
LABEL_4:
    this->m_vDesiredLocation = vec3_origin;
    return 0;
  }
  v8 = 1LL << v6;
  if ( ((1LL << v6) & 0x14003) != 0 )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v10) )
      goto LABEL_4;
    m_pBot = this->m_pBot;
    v12 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      v13 = v12;
    else
      v13 = 0;
    v14 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    if ( !IsBotTargetStatusValidCore(v15, v13, 251, -1.0, this->m_pAbility) )
      goto LABEL_4;
    delayd = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
    delay = delayd + CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "delay", -1, 1);
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v16 == 0 || (v17 = v16, BYTE3(v16[7]._vptr_IHandleEntity) == 0) )
      v17 = 0;
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v17, "modifier_kunkka_x_marks_the_spot", 0);
    if ( ModifierByName != 0 )
    {
      *&hEntities.m_Size = GetXMarksTheSpotLocation(this->m_pBot->m_pAbilityXMarksTheSpot);
      (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
      v20 = 0.0;
      if ( g_pGameRules != 0 )
        v20 = *&g_pGameRules[18].m_szQuestName[20];
      if ( delay <= (v19 - v20) )
        goto LABEL_4;
    }
    else
    {
      delaye = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
      v48 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      v49 = this->m_pBot;
      fDelayb = v48 + fDelay;
      v50 = CEntityHandle::operator CEntityInstance *(&v49->m_hTarget);
      v51 = delaye;
      if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
        v52 = v50;
      else
        v52 = 0;
      delayb = fDelayb;
      fDelayc = v51;
      v53 = CEntityHandle::operator CEntityInstance *(&v49->m_hUnit);
      if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
        v54 = v53;
      else
        v54 = 0;
      if ( WantsCastOnEstimatedLocation(v54, v52, COERCE_DOUBLE(LODWORD(delayb)), fDelayc, &hEntities) == 0 )
        goto LABEL_4;
    }
    LODWORD(this->m_vDesiredLocation.x) = hEntities.m_Size;
    this->m_vDesiredLocation.y = *(&hEntities.m_Size + 1);
    this->m_vDesiredLocation.z = *&hEntities.m_Memory.m_pMemory;
    return 3;
  }
  if ( (v8 & 0xE00) != 0 )
  {
    v35 = this->m_pAbility;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v36 = (*(v35->_vptr_IHandleEntity + 226))(v35, &vec3_origin, 0);
    CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v36);
    v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
      v38 = v37;
    else
      v38 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v38);
    SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
    if ( hEntities.m_Size <= 0 )
      goto LABEL_66;
    v40 = CEntityHandle::operator CEntityInstance *(hEntities.m_Memory.m_pMemory);
    if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 )
      v41 = v40;
    else
      v41 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v41)
      || ((v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0
       || BYTE3(v42[7]._vptr_IHandleEntity) == 0
        ? (v43 = 0)
        : (v43 = v42),
          !IsBotTargetStatusValidCore(v41, v43, 251, -1.0, this->m_pAbility)
       || ((*v44.m128i_i32 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0),
            v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v44)),
            fDelaya = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility) + fDelay,
            (v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0)
        || BYTE3(v46[7]._vptr_IHandleEntity) == 0
         ? (v47 = 0)
         : (v47 = v46),
           WantsCastOnEstimatedLocation(v47, v41, COERCE_DOUBLE(LODWORD(fDelaya)), v45, &vTargetLocation) == 0)) )
    {
LABEL_66:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
      goto LABEL_4;
    }
    this->m_vDesiredLocation = vTargetLocation;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    return 2;
  }
  else
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_4;
    v21 = this->m_pBot;
    if ( v21->m_fModeDesires[(*(v21->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v21->m_pActiveBotMode)] < 0.75
      || !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
    {
      goto LABEL_4;
    }
    v22 = this->m_pBot;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hUnit);
    if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
      v24 = v23;
    else
      v24 = 0;
    v25 = (*(v22->m_pAbilityTorrent->_vptr_IHandleEntity + 226))(v22->m_pAbilityTorrent, &vec3_origin, 0);
    CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, v25, &hEntities, v24);
    v26 = 0;
    if ( hEntities.m_Size <= 0 )
      goto LABEL_99;
    do
    {
      v33 = CEntityHandle::operator CEntityInstance *((*&hEntities.m_Memory.m_pMemory[2 * v26].m_Index + 156LL));
      if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
        v27 = v33;
      else
        v27 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v27) )
      {
        v28 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
          v29 = v28;
        else
          v29 = 0;
        delaya = v29;
        v30 = CEntityHandle::operator CEntityInstance *((*&hEntities.m_Memory.m_pMemory[2 * v26].m_Index + 156LL));
        if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
          v31 = v30;
        else
          v31 = 0;
        if ( IsBotTargetStatusValidCore(v31, delaya, 251, -1.0, this->m_pAbility) )
        {
          v32 = v26--;
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::Remove(&hEntities, v32);
        }
      }
      ++v26;
    }
    while ( hEntities.m_Size > v26 );
    if ( hEntities.m_Size <= 0 )
    {
LABEL_99:
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&hEntities);
      goto LABEL_4;
    }
    v55 = 0;
    v56 = 0;
    while ( 1 )
    {
      delayc = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
      v68 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility) + fDelay;
      v60 = CEntityHandle::operator CEntityInstance *((*&hEntities.m_Memory.m_pMemory[v55].m_Index + 156LL));
      if ( v60 != 0 && BYTE3(v60[7]._vptr_IHandleEntity) != 0 )
        v57 = v60;
      else
        v57 = 0;
      pTarget = v57;
      v58 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v58 != 0 && BYTE3(v58[7]._vptr_IHandleEntity) != 0 )
        v59 = v58;
      else
        v59 = 0;
      if ( WantsCastOnEstimatedLocation(v59, pTarget, COERCE_DOUBLE(LODWORD(v68)), delayc, &vTargetLocation) != 0 )
        break;
      ++v56;
      v55 += 2;
      if ( hEntities.m_Size <= v56 )
        goto LABEL_99;
    }
    this->m_vDesiredLocation = vTargetLocation;
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&hEntities);
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Kunkka_Torrent::UseAbility  (line 313, @0x00000000028bf2d0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Kunkka_Torrent::UseAbility(CDOTA_Bot_AbilityUsage_Kunkka_Torrent *const this)
{
  CDOTA_Bot_Hero_Kunkka *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot  (line 322, @0x00000000028c37a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot(
        CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD170;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::GetCurrentUsageDesire  (line 329, @0x00000000028c2380, libserver.so)  // inlines: FastSqrt, Get, GetActiveModeDesire, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Length2D, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTABaseAbility::IsFullyCastable, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange
int __fastcall CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rsi
  CDOTA_Bot_Hero_Kunkka *v5; // r12
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // r13
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdi
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // r12
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rsi
  CDOTA_Bot *m_pBot; // rax
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rdi
  const Vector *AbsOrigin; // r13
  const Vector *v20; // rax
  __m128i v21; // xmm0
  float v22; // r13d
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  __int64 v28; // r13
  float v29; // [rsp+Ch] [rbp-24h]

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 )
  {
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v13 == 0
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0
      || (v11 = v13, (v13[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v11 = 0;
    }
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v11) )
      goto LABEL_17;
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    if ( !IsBotTargetStatusValidCore(v11, v15, 251, -1.0, this->m_pAbility) )
      goto LABEL_17;
    m_pBot = v11->m_pBot;
    if ( m_pBot == 0
      || (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 4
      || CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityTorrent) )
    {
      goto LABEL_17;
    }
    v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
      v18 = v17;
    else
      v18 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
    v20 = CBaseEntity::GetAbsOrigin(v11);
    v29 = ((v20->x - AbsOrigin->x) * (v20->x - AbsOrigin->x)) + ((v20->y - AbsOrigin->y) * (v20->y - AbsOrigin->y));
    v21 = LODWORD(v29);
    *v21.m128i_i32 = fsqrt(v29);
    v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
    v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
      v24 = v23;
    else
      v24 = 0;
    if ( v22 <= CDOTA_BaseNPC::GetAttackRange(v24) )
      goto LABEL_17;
  }
  else
  {
    if ( v2 != 18 )
      goto LABEL_17;
    v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
      v4 = v3;
    else
      v4 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4) )
      goto LABEL_17;
    v5 = this->m_pBot;
    v6 = CEntityHandle::operator CEntityInstance *(&v5->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    v8 = CEntityHandle::operator CEntityInstance *(&v5->m_hTarget);
    if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
      v9 = v8;
    else
      v9 = 0;
    if ( !IsBotTargetStatusValidCore(v9, v7, 251, -1.0, this->m_pAbility)
      || (v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget), v11 = v10, v10 == 0)
      || BYTE3(v10[7]._vptr_IHandleEntity) == 0
      || (v10[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
      || (v28 = *&v10[45].m_worldGroupId.m_nHashCode) == 0
      || *(v28 + 4LL * (*(**(v28 + 34056) + 16LL))(*(v28 + 34056)) + 34272) < 0.75 )
    {
LABEL_17:
      this->m_hDesiredTarget.m_Index = -1;
      return 0;
    }
  }
  m_pEntity = v11->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v27 = 0x7FFF;
    else
      v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v27 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v26 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::UseAbility  (line 379, @0x00000000028c05a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::UseAbility(
        CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Kunkka *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Kunkka_GhostShip::CDOTA_Bot_AbilityUsage_Kunkka_GhostShip  (line 392, @0x00000000028c37d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Kunkka_GhostShip::CDOTA_Bot_AbilityUsage_Kunkka_GhostShip(
        CDOTA_Bot_AbilityUsage_Kunkka_GhostShip *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD1D0;
}


// CDOTA_Bot_AbilityUsage_Kunkka_GhostShip::GetCurrentUsageDesire  (line 399, @0x00000000028cc550, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetInstance, GetTeamNumber, GetUnit, IsBotTargetStatusValid, Purge, RemoveAll, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator*, operator+, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, VectorNormalize, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// strings: "ghostship_distance", "ghostship_width"
int __fastcall CDOTA_Bot_AbilityUsage_Kunkka_GhostShip::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Kunkka_GhostShip *const this)
{
  int LevelSpecialValue; // eax
  int v4; // edx
  CDOTA_Bot_Hero_Kunkka *m_pBot; // rax
  __m128i v6; // xmm3
  float v7; // r13d
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // r12
  const Vector *AbsOrigin; // r14
  CEntityInstance *v11; // rax
  int v12; // r12d
  CDOTA_BaseNPC *v13; // rsi
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  int v18; // esi
  CEntityInstance *v19; // rax
  __int64 v20; // r12
  int v21; // r15d
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // r13
  CEntityInstance *v24; // rax
  const CBaseEntity *v25; // rdi
  const Vector *v26; // r14
  const Vector *v27; // rax
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  __m128i y_low; // xmm4
  __m128i v31; // xmm0
  float v32; // r13d
  float v33; // r14d
  CEntityInstance *v34; // rax
  const CBaseEntity *v35; // rdi
  const Vector *v36; // rax
  vec_t v37; // xmm1_4
  vec_t v38; // xmm2_4
  vec_t v39; // xmm0_4
  CEntityInstance *v40; // rax
  CDOTA_BaseNPC *v41; // rdx
  int m_Size; // r13d
  __m128i v43; // xmm5
  __m128i v44; // xmm6
  float v45; // r14d
  int v46; // r15d
  CEntityInstance *v47; // rax
  const CBaseEntity *v48; // rdi
  const Vector *v49; // rax
  float v50; // xmm6_4
  float vBestLoc; // [rsp+30h] [rbp-2C0h]
  float vBestLoc_4; // [rsp+34h] [rbp-2BCh]
  float x; // [rsp+48h] [rbp-2A8h]
  int ghostship_width; // [rsp+4Ch] [rbp-2A4h]
  int ghostship_distance; // [rsp+58h] [rbp-298h]
  float flRadius; // [rsp+5Ch] [rbp-294h]
  float flRadiusa; // [rsp+5Ch] [rbp-294h]
  Vector vToTarget; // [rsp+60h] [rbp-290h] BYREF
  Vector vBoatTarget; // [rsp+70h] [rbp-280h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+80h] [rbp-270h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hBoatHitEntities; // [rsp+1A0h] [rbp-150h] BYREF
  unsigned __int64 v62; // [rsp+2B8h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  ghostship_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "ghostship_distance", -1, 1);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "ghostship_width", -1, 1);
  hEntities.m_Size = 0;
  v4 = LevelSpecialValue;
  ghostship_width = LevelSpecialValue;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  m_pBot = this->m_pBot;
  *v6.m128i_i32 = (v4 + ghostship_distance);
  hEntities.m_Memory.m_nAllocationCount = 64;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
    v11 = 0;
  FindUnitsInRadius(HIBYTE(v11[7].m_CScriptComponent), AbsOrigin, v9, v7, &hEntities, 2, 1, 128, 0, 0);
  v12 = 0;
  if ( hEntities.m_Size > 0 )
  {
    do
    {
      v19 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v12]);
      if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
        v13 = v19;
      else
        v13 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v13) )
      {
        v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
          v15 = v14;
        else
          v15 = 0;
        v16 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v12]);
        if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
          v17 = v16;
        else
          v17 = 0;
        if ( IsBotTargetStatusValidCore(v17, v15, 251, -1.0, this->m_pAbility) )
        {
          v18 = v12--;
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, v18);
        }
      }
      ++v12;
    }
    while ( hEntities.m_Size > v12 );
    x = vec3_origin.x;
    vBestLoc_4 = vec3_origin.y;
    vBestLoc = vec3_origin.z;
    if ( hEntities.m_Size > 0 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v20]);
        v23 = v22;
        if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
        {
          v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v24 == 0 || (v25 = v24, BYTE3(v24[7]._vptr_IHandleEntity) == 0) )
            v25 = 0;
          v26 = CBaseEntity::GetAbsOrigin(v25);
          v27 = CBaseEntity::GetAbsOrigin(v23);
          v28 = v27->x - v26->x;
          v29 = v27->y - v26->y;
          vToTarget.z = 0.0;
          vToTarget.x = v28;
          vToTarget.y = v29;
          VectorNormalize(&vToTarget);
          y_low = LODWORD(vToTarget.y);
          *y_low.m128i_i32 = vToTarget.y * ghostship_distance;
          *v31.m128i_i32 = ghostship_distance * vToTarget.z;
          flRadius = vToTarget.x * ghostship_distance;
          v32 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
          v33 = COERCE_FLOAT(_mm_cvtsi128_si32(v31));
          v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
            v35 = v34;
          else
            v35 = 0;
          v36 = CBaseEntity::GetAbsOrigin(v35);
          v37 = v32 + v36->y;
          v38 = flRadius + v36->x;
          hBoatHitEntities.m_Size = 0;
          v39 = v33 + v36->z;
          hBoatHitEntities.m_Memory.m_nAllocationCount = 64;
          vBoatTarget.y = v37;
          vBoatTarget.x = v38;
          vBoatTarget.z = v39;
          hBoatHitEntities.m_Memory.m_nGrowSize = 0x80000000;
          hBoatHitEntities.m_Memory.m_pMemory = &hBoatHitEntities.m_FixedMemory;
          v40 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          v41 = 0;
          if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 )
            v41 = v40;
          FindUnitsInRadius(
            v41->m_iTeamNum.m_Value,
            &vBoatTarget,
            v41,
            ghostship_width,
            &hBoatHitEntities,
            2,
            1,
            128,
            0,
            0);
          m_Size = hBoatHitEntities.m_Size;
          if ( hBoatHitEntities.m_Size > v21 )
          {
            v43 = 0x43480000u;
            v44 = 0x43480000u;
            *v43.m128i_i32 = 200.0 * vToTarget.x;
            *v44.m128i_i32 = 200.0 * vToTarget.y;
            v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
            *&v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v44));
            flRadiusa = 200.0 * vToTarget.z;
            v47 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v47 != 0 && BYTE3(v47[7]._vptr_IHandleEntity) != 0 )
              v48 = v47;
            else
              v48 = 0;
            v49 = CBaseEntity::GetAbsOrigin(v48);
            v50 = *&v46;
            v21 = m_Size;
            x = v45 + v49->x;
            vBestLoc_4 = v50 + v49->y;
            vBestLoc = flRadiusa + v49->z;
          }
          hBoatHitEntities.m_Size = 0;
          if ( (hBoatHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hBoatHitEntities.m_Memory);
            if ( (hBoatHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hBoatHitEntities.m_Memory);
          }
        }
        ++v20;
      }
      while ( hEntities.m_Size > v20 );
      if ( v21 > 1 )
      {
        this->m_vDesiredLocation.x = x;
        this->m_vDesiredLocation.y = vBestLoc_4;
        this->m_vDesiredLocation.z = vBestLoc;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
        return 3;
      }
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_2:
  this->m_vDesiredLocation = vec3_origin;
  return 0;
}


// CDOTA_Bot_AbilityUsage_Kunkka_GhostShip::UseAbility  (line 460, @0x00000000028bf330, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Kunkka_GhostShip::UseAbility(
        CDOTA_Bot_AbilityUsage_Kunkka_GhostShip *const this)
{
  CDOTA_Bot_Hero_Kunkka *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


