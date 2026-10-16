
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Axe::CDOTA_Bot_Hero_Axe  (line 21, @0x00000000028ae200, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_Axe::CDOTA_TutorialBot_Hero_Axe
// strings: "axe_culling_blade"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Axe::CDOTA_Bot_Hero_Axe(
        CDOTA_Bot_Hero_Axe *const this,
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
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C80F0;
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
  this->m_pAbilityBerserkersCall = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "axe_berserkers_call", 1);
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
  this->m_pAbilityBattleHunger = CDOTA_BaseNPC::FindAbilityByName(v12, "axe_battle_hunger", 1);
  v13 = this->m_hUnit.m_Index;
  if ( v13 + 2 <= 1
    || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v15 = &v14[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v13 != v15->m_EHandle.m_Index
    || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
    || !v16->m_bIsDOTANPC )
  {
    v16 = 0;
  }
  this->m_pAbilityCullingBlade = CDOTA_BaseNPC::FindAbilityByName(v16, "axe_culling_blade", 1);
}


// CDOTA_Bot_Hero_Axe::CreateMode  (line 32, @0x00000000028aae20, libserver.so)  // inlines: CDOTA_BotMode_Attack_Axe, CDOTA_BotMode_Laning_Axe
// calls: operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, CDOTA_Bot::CreateMode, CDOTA_BotMode_Laning::CDOTA_BotMode_Laning, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Axe::CreateMode(CDOTA_Bot_Hero_Axe *const this, int iMode)
{
  CDOTA_BotMode_Attack *v3; // r12
  CDOTA_BotMode_Laning *v5; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 1 )
  {
    if ( iMode == 2 )
    {
      v3 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Axe (size matches)
      CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v3, this);
      v3->_vptr_CDOTA_BotMode = off_42C81F0;  // vptr: CDOTA_BotMode_Attack_Axe
      return v3;
    }
    return CDOTA_Bot::CreateMode(this, iMode);
  }
  v5 = operator new(0xF0u);  // new CDOTA_BotMode_Laning_Axe (size matches)
  CDOTA_BotMode_Laning::CDOTA_BotMode_Laning(v5, this);
  v5->_vptr_CDOTA_BotMode = off_42C8290;  // vptr: CDOTA_BotMode_Laning_Axe
  return v5;
}


// CDOTA_Bot_Hero_Axe::GetAggressionFactor  (line 48, @0x00000000028ab970, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetAggressionFactor, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
float __fastcall CDOTA_Bot_Hero_Axe::GetAggressionFactor(CDOTA_Bot_Hero_Axe *const this)
{
  CDOTABaseAbility *m_pAbilityBerserkersCall; // r12
  CDOTABaseAbility *m_pAbilityCullingBlade; // r12
  float v4; // xmm0_4
  float fBonus; // [rsp+Ch] [rbp-14h]

  m_pAbilityBerserkersCall = this->m_pAbilityBerserkersCall;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityBerserkersCall) >= 0
    && (*(m_pAbilityBerserkersCall->_vptr_IHandleEntity + 245))(m_pAbilityBerserkersCall) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityBerserkersCall)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityBerserkersCall, -1) )
  {
    fBonus = 1.1;
  }
  else
  {
    fBonus = 1.0;
  }
  m_pAbilityCullingBlade = this->m_pAbilityCullingBlade;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityCullingBlade) >= 0
    && (*(m_pAbilityCullingBlade->_vptr_IHandleEntity + 245))(m_pAbilityCullingBlade) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityCullingBlade)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityCullingBlade, -1) )
  {
    v4 = 0.2;
  }
  else
  {
    v4 = 0.0;
  }
  return CDOTA_Bot::GetAggressionFactor(this) * (v4 + fBonus);
}


// CDOTA_BotMode_Attack_Axe::CalculateDesiredLocation  (line 63, @0x00000000028b16c0, libserver.so)  // inlines: GetTeamNumber, IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode_Attack::CalculateDesiredLocation, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
Vector __fastcall CDOTA_BotMode_Attack_Axe::CalculateDesiredLocation(CDOTA_BotMode_Attack_Axe *const this)
{
  CDOTA_Bot *m_pBot; // r13
  CDOTABaseAbility *vptr_CDOTA_Bot; // r12
  int v6; // r14d
  int iRadius; // r15d
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v10; // rax
  int iTargetCount; // [rsp+3Ch] [rbp-54h] BYREF
  Vector vTargetLoc; // [rsp+40h] [rbp-50h] BYREF
  Vector v13; // [rsp+50h] [rbp-40h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBot = this->m_pBot;
  vptr_CDOTA_Bot = m_pBot[1]._vptr_CDOTA_Bot;
  if ( CDOTABaseAbility::GetEffectiveLevel(vptr_CDOTA_Bot) >= 0
    && (*(vptr_CDOTA_Bot->_vptr_IHandleEntity + 245))(vptr_CDOTA_Bot) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(vptr_CDOTA_Bot)
    && CDOTABaseAbility::IsOwnersGoldEnough(vptr_CDOTA_Bot, -1)
    && (v6 = (*(this->m_pBot->_vptr_CDOTA_Bot + 16))(this->m_pBot),
        iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pBot[1]._vptr_CDOTA_Bot, "radius", -1, 1),
        Unit = CDOTA_BotMode::GetUnit(this),
        AbsOrigin = CBaseEntity::GetAbsOrigin(Unit),
        v10 = CDOTA_BotMode::GetUnit(this),
        CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
          *(m_pBot[1]._vptr_CDOTA_Bot + 97),
          v10->m_iTeamNum.m_Value,
          1,
          2,
          AbsOrigin,
          (v6 + 500.0),
          0.0,
          iRadius,
          &vTargetLoc,
          &iTargetCount),
        iTargetCount > 1) )
  {
    v13 = vTargetLoc;
  }
  else
  {
    v13 = CDOTA_BotMode_Attack::CalculateDesiredLocation(this);
  }
  *&result.x = *&v13.x;
  result.z = v13.z;
  return result;
}


// CDOTA_BotMode_Laning_Axe::GetBaseAmountBackFromLane  (line 90, @0x00000000028aac50, libserver.so)
float __fastcall CDOTA_BotMode_Laning_Axe::GetBaseAmountBackFromLane(CDOTA_BotMode_Laning_Axe *const this)
{
  return -200.0;
}


// CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::CDOTA_Bot_AbilityUsage_Axe_BerserkersCall  (line 100, @0x00000000028ae3d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::CDOTA_Bot_AbilityUsage_Axe_BerserkersCall(
        CDOTA_Bot_AbilityUsage_Axe_BerserkersCall *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8330;  // vptr: CDOTA_Bot_AbilityUsage_Axe_BerserkersCall
}


// CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::GetCurrentUsageDesire  (line 107, @0x00000000028b1fc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBotByIndex, GetBotTargetStatus, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetManaPercent, GetOpposingTeamCommander, GetTeamNumber, GetUnit, IndexToIdentity, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, Length, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_TeamCommander::GetOpposingTeamCommander, DOTACommander, CDOTA_Commander::GetIllusionState, GetBotTargetStatusCore, CDOTA_TeamCommander::HasIncomingStun, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Axe_BerserkersCall *const this)
{
  char v2; // dl
  int result; // eax
  int v4; // eax
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // r12
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r12
  int v11; // r14d
  int LevelSpecialValue; // eax
  CDOTA_Bot_Hero_Axe *m_pBot; // r15
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v15; // rax
  CDOTA_Bot *v16; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r13
  unsigned __int8 (__fastcall *v22)(CDOTA_Bot_AbilityUsage_Axe_BerserkersCall *const, _QWORD); // r15
  CDOTA_Commander *v23; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rsi
  const CBaseEntity *v27; // rax
  float v28; // xmm0_4
  int v29; // eax
  const Vector *AbsOrigin; // r15
  const Vector *v31; // rax
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  CDOTA_BaseNPC *v35; // r12
  int v36; // eax
  __m128i v37; // xmm3
  CDOTA_Bot_Hero_Axe *v38; // rax
  float v39; // r14d
  CEntityInstance *v40; // rax
  const Vector *v41; // r15
  CEntityInstance *v42; // rax
  CEntityInstance *v43; // rdx
  int v44; // [rsp+24h] [rbp-5Ch]
  int v45; // [rsp+28h] [rbp-58h]
  int nAlmostInRangeHeroes; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+30h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->_vptr_CDOTA_Bot + 27))(this->m_pBot);
  result = 0;
  if ( v2 != 0 )
    return result;
  v4 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v4 == 2 )
  {
    v10 = 0;
    v11 = 0;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
    m_pBot = this->m_pBot;
    nAlmostInRangeHeroes = 0;
    v45 = LevelSpecialValue;
    v44 = LevelSpecialValue + 200;
    while ( v10 < CDOTA_TeamCommander::GetOpposingTeamCommander(m_pBot->m_pTeamCommander)->m_BotList.m_Size )
    {
      OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
      if ( v10 >= OpposingTeamCommander->m_BotList.m_Size
        || OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v10] == 0 )
      {
        goto LABEL_14;
      }
      v15 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
      v16 = 0;
      if ( v10 < v15->m_BotList.m_Size )
        v16 = v15->m_BotList.m_Memory.m_pMemory[v10];
      m_Index = v16->m_hUnit.m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_14;
      v18 = v16->m_hUnit.m_Index;
      v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F];
      if ( v19 == 0 )
        goto LABEL_14;
      v20 = &v19[v18 & 0x1FF];
      if ( v20 == 0 )
        goto LABEL_14;
      if ( m_Index != v20->m_EHandle.m_Index )
        goto LABEL_14;
      m_pInstance = v20->m_pInstance;
      if ( v20->m_pInstance == 0
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) == 0 && !this->m_bUseOnCreeps )
      {
        goto LABEL_14;
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        v22 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v23 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v23, m_pInstance);
        if ( v22(this, IllusionState) == 0 )
          goto LABEL_14;
      }
      v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v25 == 0 || (v26 = v25, BYTE3(v25[7]._vptr_IHandleEntity) == 0) )
        v26 = 0;
      if ( (GetBotTargetStatusCore(m_pInstance, v26, -1.0, this->m_pAbility) & 0xFB) == 0
        && (m_pInstance[58]._vptr_IHandleEntity & 0x20) == 0
        && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, m_pInstance) )
      {
        m_pBot = this->m_pBot;
        v27 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
        if ( v27 != 0 && v27->m_bIsDOTANPC )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(v27);
          v31 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v32 = (v31->x - AbsOrigin->x) * (v31->x - AbsOrigin->x);
          v33 = v31->z - AbsOrigin->z;
          v34 = (v31->y - AbsOrigin->y) * (v31->y - AbsOrigin->y);
          m_pBot = this->m_pBot;
          v28 = fsqrt((v32 + v34) + (v33 * v33));
        }
        else
        {
          v28 = -1.0;
        }
        if ( v28 > v45 )
        {
          v29 = nAlmostInRangeHeroes + 1;
          if ( v44 <= v28 )
            v29 = nAlmostInRangeHeroes;
          nAlmostInRangeHeroes = v29;
        }
        if ( v45 > v28 )
          ++v11;
      }
      else
      {
LABEL_14:
        m_pBot = this->m_pBot;
      }
      ++v10;
    }
    result = 3;
    if ( v11 <= 1 )
    {
      if ( nAlmostInRangeHeroes != 0 )
        return 0;
      LOBYTE(result) = 2;
      if ( v11 <= 0 )
        return 0;
    }
    return result;
  }
  if ( v4 < 2 || (v4 - 8) > 5 )
    return 0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
  {
    v6 = v5;
    if ( ((100.0 * *&v5[44].m_iszPrivateVScripts.u.m_Id) / *&v5[44].m_worldGroupId.m_nHashCode) > 49 )
      goto LABEL_9;
    return 0;
  }
  v6 = 0;
  if ( ((100.0 * 0.0) / COERCE_FLOAT(7496)) <= 49 )
    return 0;
LABEL_9:
  v7 = 100LL * CBaseEntity::GetHealth(v6);
  v8 = (*(v6->_vptr_IHandleEntity + 156))(v6);
  v9 = 1;
  if ( v8 > 0 )
    v9 = v8;
  if ( (v7 / v9) <= 49 )
    return 0;
  v35 = 0;
  v36 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  hNearbyEnemies.m_Size = 0;
  *v37.m128i_i32 = v36;
  v38 = this->m_pBot;
  hNearbyEnemies.m_Memory.m_pMemory = 0;
  hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemies.m_Memory.m_nGrowSize = 0;
  v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
  v40 = CEntityHandle::operator CEntityInstance *(&v38->m_hUnit);
  if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 )
    v35 = v40;
  v41 = CBaseEntity::GetAbsOrigin(v35);
  v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
    v43 = v42;
  else
    v43 = 0;
  FindUnitsInRadius(HIBYTE(v43[7].m_CScriptComponent), v41, v35, v39, &hNearbyEnemies, 2, 3, 0, 0, 0);
  if ( hNearbyEnemies.m_Size > 5 )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
    return 1;
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::UseAbility  (line 186, @0x00000000028b2900, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume (13 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::UseAbility(
        CDOTA_Bot_AbilityUsage_Axe_BerserkersCall *const this)
{
  CDOTA_BaseNPC *v2; // rbx
  int LevelSpecialValue; // r12d
  float v4; // xmm0_4
  CDOTA_Bot_Hero_Axe *m_pBot; // rax
  __m128i v6; // xmm1
  float v7; // r12d
  CEntityInstance *v8; // rax
  const Vector *AbsOrigin; // r15
  CEntityInstance *v10; // rax
  float v11; // xmm1_4
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v13; // r12
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTA_Bot_Hero_Axe *v17; // r12
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v19; // rbx
  float fDuration; // [rsp+1Ch] [rbp-64h]
  EHANDLE hEnemy; // [rsp+20h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+30h] [rbp-50h] BYREF

  v2 = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "duration", -1, 1);
  m_pBot = this->m_pBot;
  *v6.m128i_i32 = LevelSpecialValue;
  fDuration = v4;
  hNearbyEnemies.m_Size = 0;
  hNearbyEnemies.m_Memory.m_pMemory = 0;
  hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  hNearbyEnemies.m_Memory.m_nGrowSize = 0;
  v8 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v2 = v8;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v2);
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
    v10 = 0;
  FindUnitsInRadius(HIBYTE(v10[7].m_CScriptComponent), AbsOrigin, v2, v7, &hNearbyEnemies, 2, 1, 0, 0, 0);
  m_pMemory = hNearbyEnemies.m_Memory.m_pMemory;
  v13 = &hNearbyEnemies.m_Memory.m_pMemory[hNearbyEnemies.m_Size];
  if ( hNearbyEnemies.m_Memory.m_pMemory != v13 )
  {
    do
    {
      while ( 1 )
      {
        hEnemy.m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 > 1 )
        {
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEnemy.m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[hEnemy.m_Index & 0x1FF];
            if ( v15 != 0 && m_pMemory->m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( v13 == ++m_pMemory )
          goto LABEL_16;
      }
      CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, m_pInstance, fDuration, v11);
      ++m_pMemory;
    }
    while ( v13 != m_pMemory );
  }
LABEL_16:
  v17 = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v19 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v19, v17, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v19);
  hNearbyEnemies.m_Size = 0;
  if ( (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory);
    if ( (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory);
  }
}


// CDOTA_Bot_AbilityUsage_Axe_BattleHunger::CDOTA_Bot_AbilityUsage_Axe_BattleHunger  (line 209, @0x00000000028ae3f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Axe_BattleHunger::CDOTA_Bot_AbilityUsage_Axe_BattleHunger(
        CDOTA_Bot_AbilityUsage_Axe_BattleHunger *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8390;  // vptr: CDOTA_Bot_AbilityUsage_Axe_BattleHunger
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Axe_BattleHunger::GetCurrentUsageDesire  (line 216, @0x00000000028af7a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetManaPercent, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, end, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Axe_BattleHunger::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Axe_BattleHunger *const this)
{
  int m_Size; // r12d
  int v4; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  CEntityInstance *v10; // rax
  CDOTABaseAbility *m_pAbility; // rdi
  int v12; // eax
  CHandle<CBaseEntity> *m_pMemory; // r12
  int Health; // r14d
  const CBaseEntity *v15; // r15
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const CBaseEntity *m_pInstance; // r13
  CEntityInstance *v19; // rax
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CDOTABaseAbility *v22; // rdi
  int v23; // eax
  CEntityIdentity *v24; // rdx
  int v25; // eax
  __int16 v26; // cx
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // r13
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // cx
  CHandle<CBaseEntity> *__for_end; // [rsp+8h] [rbp-68h]
  EHANDLE hNearbyEnemyHero; // [rsp+10h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 27))(this->m_pBot) != 0 )
    goto LABEL_2;
  v4 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v4 == 2 )
  {
    v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    v6 = v19;
    if ( v19 == 0 || BYTE3(v19[7]._vptr_IHandleEntity) == 0 )
    {
      if ( CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget(this, 0) )
      {
LABEL_36:
        this->m_hDesiredTarget.m_Index = -1;
        return 1;
      }
LABEL_2:
      this->m_hDesiredTarget.m_Index = -1;
      return 0;
    }
LABEL_11:
    if ( CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget(this, v6) )
    {
      m_pEntity = v6->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v9 = 0x7FFF;
        else
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        m_Size = 1;
        LOWORD(this->m_hDesiredTarget.m_Index) = v9 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v8 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        return m_Size;
      }
      goto LABEL_36;
    }
    goto LABEL_2;
  }
  if ( v4 <= 2 )
  {
    if ( v4 != 1 )
      goto LABEL_2;
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
      v10 = 0;
    if ( ((100.0 * *&v10[44].m_iszPrivateVScripts.u.m_Id) / *&v10[44].m_worldGroupId.m_nHashCode) <= 90 )
      goto LABEL_2;
    m_pAbility = this->m_pAbility;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v12 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
    CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v12);
    m_pMemory = hEntities.m_Memory.m_pMemory;
    __for_end = &hEntities.m_Memory.m_pMemory[hEntities.m_Size];
    if ( hEntities.m_Memory.m_pMemory != __for_end )
    {
      Health = -1;
      v15 = 0;
      do
      {
        hNearbyEnemyHero.m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 > 1 )
        {
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hNearbyEnemyHero.m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[hNearbyEnemyHero.m_Index & 0x1FF];
            if ( v17 != 0 && m_pMemory->m_Index == v17->m_EHandle.m_Index )
            {
              m_pInstance = v17->m_pInstance;
              if ( v17->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (v15 == 0 || CBaseEntity::GetHealth(v17->m_pInstance) < Health) )
              {
                Health = CBaseEntity::GetHealth(m_pInstance);
                v15 = m_pInstance;
              }
            }
          }
        }
        ++m_pMemory;
      }
      while ( __for_end != m_pMemory );
      if ( v15 != 0 )
      {
        v24 = v15->m_pEntity;
        if ( v24 != 0 )
        {
          v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
          v26 = 0x7FFF;
          if ( v24->m_EHandle.m_Index != -1 )
            v26 = v24->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hDesiredTarget.m_Index) = v26 | this->m_hDesiredTarget.m_Index & 0x8000;
          this->m_hDesiredTarget.m_Index = (v25 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hDesiredTarget.m_Index = -1;
        }
        hEntities.m_Size = 0;
        if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
          if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
        }
        return 1;
      }
    }
    goto LABEL_43;
  }
  if ( v4 != 4 )
  {
    if ( v4 != 18 )
      goto LABEL_2;
    hEntities.m_Size = this->m_pBot->m_hTarget.m_Index;
    v5 = CEntityHandle::operator CEntityInstance *(&hEntities);
    v6 = v5;
    if ( v5 == 0 || BYTE3(v5[7]._vptr_IHandleEntity) == 0 || (v5[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      goto LABEL_2;
    goto LABEL_11;
  }
  v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
    v21 = v20;
  else
    v21 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v21) >= 5.0 )
    goto LABEL_2;
  v22 = this->m_pAbility;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v23 = (*(v22->_vptr_IHandleEntity + 226))(v22, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v23);
  m_Size = hEntities.m_Size;
  if ( hEntities.m_Size != 1
    || ((v27 = CEntityHandle::operator CEntityInstance *(hEntities.m_Memory.m_pMemory)) == 0
     || BYTE3(v27[7]._vptr_IHandleEntity) == 0
      ? (v28 = 0)
      : (v28 = v27),
        !CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget(this, v28)) )
  {
LABEL_43:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    goto LABEL_2;
  }
  if ( v28 != 0 && (v29 = v28->m_pEntity) != 0 )
  {
    v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
    v31 = 0x7FFF;
    if ( v29->m_EHandle.m_Index != -1 )
      v31 = v29->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v31 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v30 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  return m_Size;
}


// CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget  (line 315, @0x00000000028ae420, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsValid, IsValidBotTarget, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: IsBotTargetStatusValidCore, DOTACommander, CDOTA_Commander::GetIllusionState, CDOTA_BaseNPC::FindModifierByName
// callers: CDOTA_Bot_AbilityUsage_Axe_BattleHunger::GetCurrentUsageDesire
// strings: "modifier_axe_battle_hunger"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget(
        CDOTA_Bot_AbilityUsage_Axe_BattleHunger *const this,
        CDOTA_BaseNPC *pTarget)
{
  uint32 m_iUnitType; // eax
  CDOTA_Bot_Hero_Axe *m_pBot; // rax
  uint32 m_Index; // edx
  unsigned __int16 v7; // cx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // rsi
  unsigned __int8 (__fastcall *v12)(CDOTA_Bot_AbilityUsage_Axe_BattleHunger *const, _QWORD); // r13
  CDOTA_Commander *v13; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax

  if ( pTarget == 0 )
    return 0;
  m_iUnitType = pTarget->m_iUnitType;
  if ( (m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
    return 0;
  if ( (m_iUnitType & 1) != 0 )
  {
    v12 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v13 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v13, pTarget);
    if ( v12(this, IllusionState) == 0 )
      return 0;
  }
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v7 = m_pBot->m_hUnit.m_Index, (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F]) == 0)
    || (v9 = &v8[v7 & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  return IsBotTargetStatusValidCore(pTarget, m_pInstance, 251, -1.0, this->m_pAbility)
      && CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_axe_battle_hunger", 0) == 0;
}


// CDOTA_Bot_AbilityUsage_Axe_BattleHunger::UseAbility  (line 334, @0x00000000028ac150, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Axe_BattleHunger::UseAbility(
        CDOTA_Bot_AbilityUsage_Axe_BattleHunger *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Axe *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Axe_CullingBlade::CDOTA_Bot_AbilityUsage_Axe_CullingBlade  (line 347, @0x00000000028ae560, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Axe_CullingBlade::CDOTA_Bot_AbilityUsage_Axe_CullingBlade(
        CDOTA_Bot_AbilityUsage_Axe_CullingBlade *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C83F0;  // vptr: CDOTA_Bot_AbilityUsage_Axe_CullingBlade
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Axe_CullingBlade::GetCurrentUsageDesire  (line 354, @0x00000000028b1810, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, DOTACommander, CDOTA_Commander::GetIllusionState
// strings: "kill_threshold", "kill_threshold_scepter"
int __fastcall CDOTA_Bot_AbilityUsage_Axe_CullingBlade::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Axe_CullingBlade *const this)
{
  CDOTA_Bot_Hero_Axe *m_pBot; // r13
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC_Hero *v5; // r12
  int m_Id; // eax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rsi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  bool HasScepter; // al
  const char *v12; // rsi
  int LevelSpecialValue; // r13d
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  unsigned __int8 (__fastcall *v17)(CDOTA_Bot_AbilityUsage_Axe_CullingBlade *const, _QWORD); // r13
  CDOTA_Commander *v18; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax

  if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 27))(this->m_pBot) != 0 )
    goto LABEL_2;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  m_pBot = this->m_pBot;
  v4 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v5 = v4;
  if ( v4 == 0 )
    goto LABEL_2;
  if ( BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_2;
  m_Id = v4[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
    goto LABEL_2;
  if ( (m_Id & 1) != 0 )
  {
    v17 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v18 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v18, v5);
    if ( v17(this, IllusionState) != 0 )
    {
      m_pBot = this->m_pBot;
      goto LABEL_8;
    }
LABEL_2:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
LABEL_8:
  v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v7 == 0 || (v8 = v7, BYTE3(v7[7]._vptr_IHandleEntity) == 0) )
    v8 = 0;
  if ( !IsBotTargetStatusValidCore(v5, v8, 249, -1.0, this->m_pAbility) )
    goto LABEL_2;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 == 0 || (v10 = v9, BYTE3(v9[7]._vptr_IHandleEntity) == 0) )
    v10 = 0;
  HasScepter = CDOTA_BaseNPC::HasScepter(v10);
  v12 = "kill_threshold";
  if ( HasScepter )
    v12 = "kill_threshold_scepter";
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, v12, -1, 1);
  if ( LevelSpecialValue < CBaseEntity::GetHealth(v5) )
    goto LABEL_2;
  m_pEntity = v5->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v16 = 0x7FFF;
    else
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v16 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v15 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Axe_CullingBlade::UseAbility  (line 393, @0x00000000028ac070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Axe_CullingBlade::UseAbility(
        CDOTA_Bot_AbilityUsage_Axe_CullingBlade *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Axe *m_pBot; // r14
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


// CDOTA_TutorialBot_Hero_Axe::CDOTA_TutorialBot_Hero_Axe  (line 412, @0x00000000028ae590, libserver.so)
// calls: CDOTA_Bot_Hero_Axe::CDOTA_Bot_Hero_Axe
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_Axe::CDOTA_TutorialBot_Hero_Axe(
        CDOTA_TutorialBot_Hero_Axe *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_Axe::CDOTA_Bot_Hero_Axe(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42C8450;
}


// CDOTA_TutorialBot_Hero_Axe::Think  (line 422, @0x00000000028abb80, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::Think, CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam
void __fastcall CDOTA_TutorialBot_Hero_Axe::Think(CDOTA_TutorialBot_Hero_Axe *const this)
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

  if ( this->m_bHasSeenEnemy )
    goto LABEL_2;
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
            this->m_bHasSeenEnemy = 1;
            goto LABEL_2;
          }
        }
      }
    }
  }
LABEL_11:
  if ( this->m_bHasSeenEnemy )
LABEL_2:
    CDOTA_Bot::Think(this);
}


