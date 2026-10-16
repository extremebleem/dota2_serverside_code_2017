
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Windrunner::CDOTA_Bot_Hero_Windrunner  (line 23, @0x00000000028e76b0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "windrunner_shackleshot", "windrunner_powershot"
void __fastcall CDOTA_Bot_Hero_Windrunner::CDOTA_Bot_Hero_Windrunner(
        CDOTA_Bot_Hero_Windrunner *const this,
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
  this->_vptr_CDOTA_Bot = &off_42D2650;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityShackleshot = CDOTA_BaseNPC::FindAbilityByName(v6, "windrunner_shackleshot", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityPowershot = CDOTA_BaseNPC::FindAbilityByName(v8, "windrunner_powershot", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityWindrun = CDOTA_BaseNPC::FindAbilityByName(v10, "windrunner_windrun", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityFocusFire = CDOTA_BaseNPC::FindAbilityByName(v12, "windrunner_focusfire", 1);
}


// CDOTA_Bot_Hero_Windrunner::CreateMode  (line 34, @0x00000000028e22d0, libserver.so)  // inlines: CDOTA_BotMode_Attack_Windrunner
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Windrunner::CreateMode(CDOTA_Bot_Hero_Windrunner *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Windrunner (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42D2750;  // vptr: CDOTA_BotMode_Attack_Windrunner
  return v4;
}


// CDOTA_Bot_Hero_Windrunner::IsWillingToSpendMana  (line 49, @0x00000000028e3930, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Hero_Windrunner::IsWillingToSpendMana(CDOTA_Bot_Hero_Windrunner *const this, int iMana)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  return *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id > 250.0;
}


// CDOTA_Bot_Hero_Windrunner::GetMaxRoamDistance  (line 56, @0x00000000028e3230, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Windrunner::GetMaxRoamDistance(CDOTA_Bot_Hero_Windrunner *const this)
{
  CDOTABaseAbility *m_pAbilityShackleshot; // rbx

  m_pAbilityShackleshot = this->m_pAbilityShackleshot;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityShackleshot) >= 0
    && (*(m_pAbilityShackleshot->_vptr_IHandleEntity + 245))(m_pAbilityShackleshot) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityShackleshot)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityShackleshot, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BotMode_Attack_Windrunner::Think  (line 68, @0x00000000028e5270, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, IndexToIdentity, IsFullyCastable, IsTrained, Length, LookupEntity, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator!, operator-, operator->
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode_Attack::Think, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange, CDOTA_Bot::SetMoveAction
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Attack_Windrunner::Think(CDOTA_BotMode_Attack_Windrunner *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTABaseAbility *v5; // r12
  __int64 v6; // rdi
  CUtlReference<CDOTA_Bot> *m_pPrev; // rdi
  CDOTA_BaseNPC *Unit; // r12
  const Vector *v9; // r14
  const Vector *v10; // rax
  float v11; // xmm1_4
  const CBaseEntity *v12; // rax
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v14; // [rsp+0h] [rbp-50h]
  EHANDLE hTarget; // [rsp+10h] [rbp-40h] BYREF

  m_pBot = this->m_pBot;
  hTarget.m_Index = m_pBot->m_hTarget.m_Index;
  if ( hTarget.m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && hTarget.m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        v5 = *&m_pBot[1].m_bForceIdle;
        if ( v5 == 0 )
          goto LABEL_12;
        if ( m_pBot[1]._vptr_CDOTA_Bot == 0 )
          goto LABEL_12;
        if ( m_pBot[1].m_References.m_pHead == 0 )
          goto LABEL_12;
        if ( CDOTABaseAbility::GetEffectiveLevel(*&m_pBot[1].m_bForceIdle) < 0 )
          goto LABEL_12;
        if ( (*(v5->_vptr_IHandleEntity + 245))(v5) == 0 )
          goto LABEL_12;
        if ( !CDOTABaseAbility::IsOwnersManaEnough(v5) )
          goto LABEL_12;
        if ( !CDOTABaseAbility::IsOwnersGoldEnough(v5, -1) )
          goto LABEL_12;
        v6 = *(m_pBot[1]._vptr_CDOTA_Bot + 97);
        if ( v6 == 0 )
          goto LABEL_12;
        if ( (*(*v6 + 40LL))(v6) == 0
          && (m_pPrev = m_pBot[1].m_References.m_pHead[24].m_pPrev) != 0
          && (m_pPrev->m_pNext[1].m_pPrev)(m_pPrev) == 0
          && (Unit = CDOTA_BotMode::GetUnit(this)) != 0
          && (v14 = CEntityHandle::operator CEntityInstance *(&hTarget),
              v9 = CBaseEntity::GetAbsOrigin(Unit),
              v10 = CBaseEntity::GetAbsOrigin(v14),
              v11 = v10->z - v9->z,
              LODWORD(v14) = fsqrt(
                               (((v10->x - v9->x) * (v10->x - v9->x)) + ((v10->y - v9->y) * (v10->y - v9->y)))
                             + (v11 * v11)),
              *&v14 > (CDOTA_BaseNPC::GetAttackRange(Unit) * 0.5)) )
        {
          v12 = CEntityHandle::operator CEntityInstance *(&hTarget);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
          CDOTA_Bot::SetMoveAction(m_pBot, AbsOrigin, 1, 1);
        }
        else
        {
LABEL_12:
          CDOTA_BotMode_Attack::Think(this);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot  (line 105, @0x00000000028e77e0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot(
        CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D27F0;  // vptr: CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::GetCurrentUsageDesire  (line 112, @0x00000000028ee990, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetActiveModeDesire, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, Length2D, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, GetBotTargetStatusCore, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath (14 total)
// strings: "modifier_windrunner_windrun"
// globals: jpt_28EEA7A
int __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v3; // xmm0
  int v4; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  CDOTABaseAbility *v7; // rdi
  int v8; // eax
  CEntityInstance *v9; // rax
  const CBaseEntity *v10; // rdi
  const Vector *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const CBaseEntity *v13; // r13
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rsi
  CDOTA_Bot_Hero_Windrunner *v17; // r12
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // r13
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC *v23; // rdi
  CDOTA_Bot_Hero_Windrunner *v24; // r12
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rdx
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // r12
  __int64 v29; // rax
  CEntityInstance *v30; // rax
  CEntityIdentity *v31; // rdx
  int v32; // eax
  __int16 v33; // cx
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // rsi
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r12
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // r13
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // rdi
  CEntityInstance *v41; // rax
  CDOTA_BaseNPC *v42; // rdi
  CDOTA_Bot_Hero_Windrunner *v43; // r12
  CEntityInstance *v44; // rax
  CDOTA_BaseNPC *v45; // rdx
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // rsi
  CDOTA_Bot_Hero_Windrunner *v48; // r12
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *v50; // rdi
  CEntityInstance *v51; // rax
  CDOTA_BaseNPC *v52; // rdi
  CDOTABaseAbility *v53; // rdi
  int v54; // eax
  CEntityInstance *v55; // rax
  const CBaseEntity *v56; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v58; // r13
  CDOTA_BaseNPC *v59; // rsi
  CEntityInstance *v60; // rax
  CDOTA_BaseNPC *v61; // r15
  CEntityInstance *v62; // rax
  float v63; // xmm0_4
  CEntityInstance *v64; // rax
  const CBaseEntity *v65; // rdi
  const Vector *v66; // r14
  const Vector *v67; // rax
  __m128i v68; // xmm0
  CEntityIdentity *m_pEntity; // rdx
  int v70; // eax
  __int16 v71; // cx
  float v72; // [rsp+Ch] [rbp-64h]
  float fChannelTimeRemaining; // [rsp+14h] [rbp-5Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+18h] [rbp-58h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  pChannelTarget = 0;
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v3.m128i_i32 = v4 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v3, &pChannelTarget, &fChannelTimeRemaining) == 0
    || !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, pChannelTarget)
    || ((v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
     && BYTE3(v5[7]._vptr_IHandleEntity) != 0
      ? (v6 = v5)
      : (v6 = 0),
        (GetBotTargetStatusCore(pChannelTarget, v6, -1.0, this->m_pAbility) & 0xFB) != 0
     || SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) < 0
     || (v63 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining <= v63)) )
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 2u:
        v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
          v35 = v34;
        else
          v35 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v35) )
          goto LABEL_17;
        m_pBot = this->m_pBot;
        v37 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
        if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
          v38 = v37;
        else
          v38 = 0;
        v39 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
        if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
          v40 = v39;
        else
          v40 = 0;
        if ( (GetBotTargetStatusCore(v40, v38, -1.0, this->m_pAbility) & 0xFB) != 0 )
          goto LABEL_17;
        v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v41 == 0 || (v42 = v41, BYTE3(v41[7]._vptr_IHandleEntity) == 0) )
          v42 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v42) )
          goto LABEL_17;
        v43 = this->m_pBot;
        v44 = CEntityHandle::operator CEntityInstance *(&v43->m_hTarget);
        if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
          v45 = v44;
        else
          v45 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v43->m_pTeamCommander, v43, v45) )
          goto LABEL_17;
        v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
          v47 = v46;
        else
          v47 = 0;
        if ( !CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle(this, v47) )
          goto LABEL_17;
        this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
        return 3;
      case 4u:
        v48 = this->m_pBot;
        if ( v48->m_fModeDesires[(*(v48->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v48->m_pActiveBotMode)] <= 0.89999998 )
          goto LABEL_17;
        v49 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
          v50 = v49;
        else
          v50 = 0;
        if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v50) <= 2.0 )
          goto LABEL_17;
        v51 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v51 == 0 || (v52 = v51, BYTE3(v51[7]._vptr_IHandleEntity) == 0) )
          v52 = 0;
        if ( CDOTA_BaseNPC::FindModifierByName(v52, "modifier_windrunner_windrun", 0) != 0 )
          goto LABEL_17;
        v53 = this->m_pAbility;
        hEntities.m_Size = 0;
        hEntities.m_Memory.m_pMemory = 0;
        hEntities.m_Memory.m_nAllocationCount = 0;
        hEntities.m_Memory.m_nGrowSize = 0;
        v54 = (*(v53->_vptr_IHandleEntity + 226))(v53, &vec3_origin, 0);
        CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v54);
        v55 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
          v56 = v55;
        else
          v56 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v56);
        SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
        if ( hEntities.m_Size <= 0 )
          goto LABEL_16;
        v58 = 0;
        while ( 1 )
        {
          v60 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v58]);
          if ( v60 == 0
            || BYTE3(v60[7]._vptr_IHandleEntity) == 0
            || (v61 = v60, (v60[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
          {
            v61 = 0;
          }
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v61) )
          {
            v62 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
              v59 = v62;
            else
              v59 = 0;
            if ( (GetBotTargetStatusCore(v61, v59, -1.0, this->m_pAbility) & 0xFB) == 0
              && !CDOTA_BaseNPC::IsMovementImpaired(v61)
              && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v61)
              && CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle(this, v61) )
            {
              break;
            }
          }
          if ( hEntities.m_Size <= ++v58 )
            goto LABEL_16;
        }
        this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v58].m_Index;
        goto LABEL_120;
      case 0xBu:
      case 0xCu:
      case 0xDu:
        v7 = this->m_pAbility;
        hEntities.m_Size = 0;
        hEntities.m_Memory.m_pMemory = 0;
        hEntities.m_Memory.m_nAllocationCount = 0;
        hEntities.m_Memory.m_nGrowSize = 0;
        v8 = (*(v7->_vptr_IHandleEntity + 226))(v7, &vec3_origin, 0);
        CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v8);
        v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
          v10 = v9;
        else
          v10 = 0;
        v11 = CBaseEntity::GetAbsOrigin(v10);
        SortEHANDLEVectorByLocation(&hEntities, v11, 0);
        if ( hEntities.m_Size <= 0 )
          goto LABEL_16;
        v12 = CEntityHandle::operator CEntityInstance *(hEntities.m_Memory.m_pMemory);
        v13 = v12;
        if ( v12 == 0 || !v12->m_bIsDOTANPC || !CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle(this, v12) )
          goto LABEL_16;
        v64 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v64 != 0 && BYTE3(v64[7]._vptr_IHandleEntity) != 0 )
          v65 = v64;
        else
          v65 = 0;
        v66 = CBaseEntity::GetAbsOrigin(v65);
        v67 = CBaseEntity::GetAbsOrigin(v13);
        v72 = ((v67->x - v66->x) * (v67->x - v66->x)) + ((v67->y - v66->y) * (v67->y - v66->y));
        v68 = LODWORD(v72);
        *v68.m128i_i32 = fsqrt(v72);
        if ( (COERCE_FLOAT(_mm_cvtsi128_si32(v68))
            - (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0)) < 100.0 )
        {
          m_pEntity = v13->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v70 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v71 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v71 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hDesiredTarget.m_Index) = v71 | this->m_hDesiredTarget.m_Index & 0x8000;
            this->m_hDesiredTarget.m_Index = (v70 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hDesiredTarget.m_Index = -1;
          }
LABEL_120:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
          return 2;
        }
        else
        {
LABEL_16:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_17:
          this->m_hDesiredTarget.m_Index = -1;
          return 0;
        }
      case 0x12u:
        v15 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
          v16 = v15;
        else
          v16 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v16) )
          goto LABEL_17;
        v17 = this->m_pBot;
        v18 = CEntityHandle::operator CEntityInstance *(&v17->m_hUnit);
        if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
          v19 = v18;
        else
          v19 = 0;
        v20 = CEntityHandle::operator CEntityInstance *(&v17->m_hTarget);
        if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
          v21 = v20;
        else
          v21 = 0;
        if ( (GetBotTargetStatusCore(v21, v19, -1.0, this->m_pAbility) & 0xFB) != 0 )
          goto LABEL_17;
        v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v22 == 0 || (v23 = v22, BYTE3(v22[7]._vptr_IHandleEntity) == 0) )
          v23 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v23) )
          goto LABEL_17;
        v24 = this->m_pBot;
        v25 = CEntityHandle::operator CEntityInstance *(&v24->m_hTarget);
        if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
          v26 = v25;
        else
          v26 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v24->m_pTeamCommander, v24, v26) )
          goto LABEL_17;
        hEntities.m_Size = this->m_pBot->m_hTarget.m_Index;
        v27 = CEntityHandle::operator CEntityInstance *(&hEntities);
        v28 = v27;
        if ( v27 == 0 )
          goto LABEL_17;
        if ( BYTE3(v27[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_17;
        if ( (v27[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_17;
        v29 = *&v27[45].m_worldGroupId.m_nHashCode;
        if ( v29 == 0 )
          goto LABEL_17;
        hEntities.m_Size = *(v29 + 712);
        v30 = CEntityHandle::operator CEntityInstance *(&hEntities);
        if ( v30 == 0
          || BYTE3(v30[7]._vptr_IHandleEntity) == 0
          || (v30[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
          || *&v30[45].m_worldGroupId.m_nHashCode == 0
          || !CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle(this, v28) )
        {
          goto LABEL_17;
        }
        v31 = v28->m_pEntity;
        if ( v31 != 0 )
          goto LABEL_46;
        goto LABEL_100;
      default:
        goto LABEL_17;
    }
  }
  if ( pChannelTarget != 0 && (v31 = pChannelTarget->m_pEntity) != 0 )
  {
LABEL_46:
    v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
    if ( v31->m_EHandle.m_Index == -1 )
      v33 = 0x7FFF;
    else
      v33 = v31->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v33 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v32 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
LABEL_100:
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle  (line 227, @0x00000000028ee3b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, FastSqrt, Get, GetInstance, GetTeamNumber, GetUnit, InState, IsInvulnerable, IsMagicImmune, Length2D, Purge, RemoveAll, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTALocomotor::GetAverageVelocityOverTime, VectorNormalize, FindUnitsInRadius, CGridNav::GetStandingTreesAroundPoint, CUtlMemory<CDOTA_Tree*, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::GetCurrentUsageDesire
// strings: "shackle_distance", "arrow_speed"
// local variable allocation has failed, the output may be wrong!
bool __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle(
        CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot *const this,
        CDOTA_BaseNPC *pTarget)
{
  int LevelSpecialValue; // r12d
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rdi
  const Vector *AbsOrigin; // r13
  const Vector *v7; // rax
  CDOTALocomotor *v8; // rax
  float v9; // xmm1_4
  __m128i v10; // xmm5
  float v11; // xmm1_4
  __m128i v12; // xmm6
  float v13; // r14d
  const Vector *v14; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  CDOTA_Bot_Hero_Windrunner *m_pBot; // rax
  CEntityInstance *v19; // rax
  const CBaseEntity *v20; // rdi
  const Vector *v21; // rax
  vec_t v22; // xmm0_4
  vec_t v23; // xmm1_4
  CDOTA_Bot_Hero_Windrunner *v24; // rdi
  CEntityInstance *v25; // rax
  __int64 v26; // r12
  int v27; // r13d
  CEntityInstance *v28; // rax
  CEntityInstance *v29; // rbx
  char v30; // r14
  int (**vptr_IHandleEntity)(...); // rax
  CDOTALocomotor *v32; // rax
  float v33; // xmm1_4
  unsigned __int64 v34; // xmm0_8
  int v35; // xmm1_4
  const Vector *v36; // rax
  float v37; // xmm1_4
  float v38; // xmm0_4
  __int64 v39; // rbx
  int v40; // r13d
  const CBaseEntity *v41; // rax
  const Vector *v42; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  float flRadius; // [rsp+2Ch] [rbp-C4h]
  float fLeadTimea; // [rsp+38h] [rbp-B8h]
  float fLeadTime; // [rsp+38h] [rbp-B8h]
  float v50; // [rsp+3Ch] [rbp-B4h]
  float v51; // [rsp+40h] [rbp-B0h]
  float v52; // [rsp+40h] [rbp-B0h]
  Vector vTargetProjectedLoc; // [rsp+50h] [rbp-A0h] BYREF
  Vector vToTarget; // [rsp+60h] [rbp-90h] BYREF
  Vector vToTree; // [rsp+70h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialUnits; // [rsp+80h] [rbp-70h] BYREF
  __int128 vToUnit; // [rsp+A0h] [rbp-50h] OVERLAPPED BYREF
  int v58; // [rsp+B0h] [rbp-40h]
  int v59; // [rsp+B4h] [rbp-3Ch]
  Vector v60; // 0:xmm0_8.8,8:xmm1_4.4

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "shackle_distance", -1, 1);
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CBaseEntity::GetAbsOrigin(pTarget);
  fLeadTimea = fsqrt(((v7->x - AbsOrigin->x) * (v7->x - AbsOrigin->x)) + ((v7->y - AbsOrigin->y) * (v7->y - AbsOrigin->y)))
             / CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "arrow_speed", -1, 1);
  fLeadTime = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility) + fLeadTimea;
  v8 = (*(pTarget->_vptr_IHandleEntity + 376))(pTarget);
  *&vToUnit = CDOTALocomotor::GetAverageVelocityOverTime(v8, 1.0, v9).m128i_u64[0];
  v10 = vToUnit;
  *(&vToUnit + 2) = v11;
  v12 = DWORD1(vToUnit);
  *v10.m128i_i32 = *&vToUnit * fLeadTime;
  *v12.m128i_i32 = *(&vToUnit + 1) * fLeadTime;
  v51 = v11 * fLeadTime;
  LODWORD(AbsOrigin) = _mm_cvtsi128_si32(v10);
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  v14 = CBaseEntity::GetAbsOrigin(pTarget);
  v15 = *&AbsOrigin + v14->x;
  v16 = v13 + v14->y;
  v17 = v51 + v14->z;
  m_pBot = this->m_pBot;
  vTargetProjectedLoc.x = v15;
  vTargetProjectedLoc.y = v16;
  vTargetProjectedLoc.z = v17;
  v19 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
    v20 = v19;
  else
    v20 = 0;
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = vTargetProjectedLoc.y - v21->y;
  v23 = vTargetProjectedLoc.x - v21->x;
  vToTarget.z = 0.0;
  vToTarget.y = v22;
  vToTarget.x = v23;
  VectorNormalize(&vToTarget);
  v24 = this->m_pBot;
  hPotentialUnits.m_Size = 0;
  hPotentialUnits.m_Memory.m_pMemory = 0;
  hPotentialUnits.m_Memory.m_nAllocationCount = 0;
  hPotentialUnits.m_Memory.m_nGrowSize = 0;
  flRadius = LevelSpecialValue;
  v25 = CEntityHandle::operator CEntityInstance *(&v24->m_hUnit);
  if ( v25 == 0 || BYTE3(v25[7]._vptr_IHandleEntity) == 0 )
    v25 = 0;
  FindUnitsInRadius(
    HIBYTE(v25[7].m_CScriptComponent),
    &vTargetProjectedLoc,
    pTarget,
    flRadius,
    &hPotentialUnits,
    2,
    3,
    0,
    0,
    0);
  if ( hPotentialUnits.m_Size <= 0 )
  {
LABEL_18:
    LODWORD(vToUnit) = 0;
    *(&vToUnit + 1) = 0;
    v58 = 0;
    v59 = 0;
    v60 = *CBaseEntity::GetAbsOrigin(pTarget);
    CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v60, flRadius, 0, &vToUnit);
    if ( vToUnit <= 0 )
    {
LABEL_30:
      v30 = 0;
    }
    else
    {
      v39 = 0;
      v40 = 0;
      while ( 1 )
      {
        v41 = (*(**(*(&vToUnit + 1) + v39) + 64LL))(*(*(&vToUnit + 1) + v39));
        v42 = CBaseEntity::GetAbsOrigin(v41);
        x = v42->x;
        y = v42->y;
        vToTree.z = 0.0;
        vToTree.x = x - vTargetProjectedLoc.x;
        vToTree.y = y - vTargetProjectedLoc.y;
        VectorNormalize(&vToTree);
        if ( (((vToTarget.x * vToTree.x) + (vToTarget.y * vToTree.y)) + (vToTarget.z * vToTree.z)) > 0.9 )
          break;
        ++v40;
        v39 += 8;
        if ( vToUnit <= v40 )
          goto LABEL_30;
      }
      v30 = 1;
    }
    LODWORD(vToUnit) = 0;
    if ( (v59 & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Tree *,int>::Purge((&vToUnit + 8));
      if ( (v59 & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Tree *,int>::Purge((&vToUnit + 8));
    }
  }
  else
  {
    v26 = 0;
    v27 = 0;
    while ( 1 )
    {
      v28 = CEntityHandle::operator CEntityInstance *(&hPotentialUnits.m_Memory.m_pMemory[v26]);
      v29 = v28;
      if ( v28 != 0 )
      {
        v30 = BYTE3(v28[7]._vptr_IHandleEntity);
        if ( v30 != 0 )
        {
          vptr_IHandleEntity = v28[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
            && LOBYTE(v29[71]._vptr_IHandleEntity) == 0
            && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
          {
            v32 = (*(v29->_vptr_IHandleEntity + 376))(v29);
            v34 = CDOTALocomotor::GetAverageVelocityOverTime(v32, 1.0, v33).m128i_u64[0];
            DWORD2(vToUnit) = v35;
            *&vToUnit = v34;
            v52 = *&v34 * fLeadTime;
            v50 = fLeadTime * *(&v34 + 1);
            v36 = CBaseEntity::GetAbsOrigin(v29);
            v37 = v52 + v36->x;
            v38 = v50 + v36->y;
            DWORD2(vToUnit) = 0;
            *&vToUnit = v37 - vTargetProjectedLoc.x;
            *(&vToUnit + 1) = v38 - vTargetProjectedLoc.y;
            VectorNormalize(&vToUnit);
            if ( (((vToTarget.x * *&vToUnit) + (vToTarget.y * *(&vToUnit + 1))) + (vToTarget.z * *(&vToUnit + 2))) > 0.89999998 )
              break;
          }
        }
      }
      ++v27;
      ++v26;
      if ( hPotentialUnits.m_Size <= v27 )
        goto LABEL_18;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialUnits);
  return v30;
}


// CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::UseAbility  (line 275, @0x00000000028e4640, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::UseAbility(
        CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v9; // r13

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, v5->m_pInstance, 2.0, v1);
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v9 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v9);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_Windrunner_Powershot::CDOTA_Bot_AbilityUsage_Windrunner_Powershot  (line 289, @0x00000000028e7810, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Powershot::CDOTA_Bot_AbilityUsage_Windrunner_Powershot(
        CDOTA_Bot_AbilityUsage_Windrunner_Powershot *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2850;  // vptr: CDOTA_Bot_AbilityUsage_Windrunner_Powershot
}


// CDOTA_Bot_AbilityUsage_Windrunner_Powershot::FindFilter  (line 296, @0x00000000028e3bf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Powershot::FindFilter(
        CDOTA_Bot_AbilityUsage_Windrunner_Powershot *const this,
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


// CDOTA_Bot_AbilityUsage_Windrunner_Powershot::GetCurrentUsageDesire  (line 319, @0x00000000028ebc70, libserver.so)  // inlines: FastSqrt, Get, GetBotTargetStatus, GetDistanceToEntity, GetInstance, GetTargetNPC, GetUnit, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot_AbilityUsage::FindTargetLinearLocation, CDOTA_BaseNPC::GetHealthEstimate, CDOTA_BaseNPC::FindModifierByName
// strings: "arrow_range", "arrow_width", "modifier_windrunner_shackle_shot"
int __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Powershot::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Windrunner_Powershot *const this)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // rsi
  CDOTA_Bot_Hero_Windrunner *v6; // r12
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  int v11; // r13d
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  float ArmorReductionForDamageType; // xmm0_4
  CDOTA_Bot_Hero_Windrunner *v15; // r12
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // r14
  CEntityInstance *v18; // rax
  const CBaseEntity *v19; // r15
  const Vector *v20; // r12
  const Vector *v21; // rax
  __m128i v22; // xmm0
  float v23; // r14d
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  CEntityInstance *v26; // rax
  const CBaseEntity *v27; // rdi
  int LevelSpecialValue; // r14d
  int v30; // eax
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r12
  int v32; // r13d
  unsigned __int8 (__fastcall *v33)(CDOTA_Bot_Hero_Windrunner *, _QWORD); // r15
  unsigned int v34; // eax
  int v35; // r14d
  int iRadius; // r12d
  CEntityInstance *v37; // rax
  const CBaseEntity *v38; // rdi
  const Vector *v39; // r13
  CEntityInstance *v40; // rax
  CDOTA_BaseNPC *v41; // rdi
  int v42; // eax
  int v43; // r13d
  CEntityInstance *v44; // rax
  const CBaseEntity *v45; // rdi
  const Vector *AbsOrigin; // r12
  CEntityInstance *v47; // rax
  CDOTA_BaseNPC *v48; // rdi
  int OpposingTeamNumber; // eax
  CEntityInstance *v50; // rax
  float v51; // xmm1_4
  CDOTA_BaseNPC *v52; // rdi
  int HealthEstimate; // eax
  CEntityInstance *v54; // rax
  const CBaseEntity *v55; // rdi
  CEntityInstance *v56; // rax
  CDOTA_BaseNPC *v57; // rdi
  float v58; // [rsp+18h] [rbp-58h]
  float fTimeInFutureb; // [rsp+1Ch] [rbp-54h]
  float fTimeInFuture; // [rsp+1Ch] [rbp-54h]
  float fTimeInFuturea; // [rsp+1Ch] [rbp-54h]
  int iTargetCount; // [rsp+2Ch] [rbp-44h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-40h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 1;
  if ( v2 > 0x11 )
    goto LABEL_35;
  v3 = 1LL << v2;
  if ( ((1LL << v2) & 0x20002) == 0 )
  {
    if ( (v3 & 0x10001) != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "arrow_range", -1, 1);
      v30 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "arrow_width", -1, 1);
      m_pBot = this->m_pBot;
      v32 = v30;
      v33 = *(m_pBot->_vptr_CDOTA_Bot + 10);
      v34 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v33(m_pBot, v34) == 0 )
        goto LABEL_35;
      v43 = v32 / 2;
      fTimeInFuturea = (*(this->m_pAbility->_vptr_IHandleEntity + 225))(this->m_pAbility) + 0.5;
      v44 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
        v45 = v44;
      else
        v45 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v45);
      v47 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v47 != 0 && BYTE3(v47[7]._vptr_IHandleEntity) != 0 )
        v48 = v47;
      else
        v48 = 0;
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v48);
      CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
        this,
        OpposingTeamNumber,
        3,
        1,
        AbsOrigin,
        LevelSpecialValue,
        fTimeInFuturea,
        v43,
        &vTargetLoc,
        &iTargetCount);
    }
    else
    {
      if ( (v3 & 0x1F80) == 0 )
        goto LABEL_35;
      v35 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "arrow_range", -1, 1);
      iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "arrow_width", -1, 1) / 2;
      fTimeInFuture = (*(this->m_pAbility->_vptr_IHandleEntity + 225))(this->m_pAbility) + 0.5;
      v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
        v38 = v37;
      else
        v38 = 0;
      v39 = CBaseEntity::GetAbsOrigin(v38);
      v40 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 )
        v41 = v40;
      else
        v41 = 0;
      v42 = CDOTA_BaseNPC::GetOpposingTeamNumber(v41);
      CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
        this,
        v42,
        2,
        1,
        v39,
        v35,
        fTimeInFuture,
        iRadius,
        &vTargetLoc,
        &iTargetCount);
    }
    if ( iTargetCount > 3 )
    {
      this->m_vDesiredLocation = vTargetLoc;
      return 3;
    }
LABEL_35:
    this->m_vDesiredLocation = vec3_origin;
    return 0;
  }
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
    goto LABEL_35;
  v6 = this->m_pBot;
  v7 = CEntityHandle::operator CEntityInstance *(&v6->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  v9 = CEntityHandle::operator CEntityInstance *(&v6->m_hTarget);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  if ( (GetBotTargetStatusCore(v10, v8, -1.0, this->m_pAbility) & 0xFB) != 0 )
    goto LABEL_35;
  v11 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v12 == 0 || (v13 = v12, BYTE3(v12[7]._vptr_IHandleEntity) == 0) )
    v13 = 0;
  ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v13, 2);
  v15 = this->m_pBot;
  v58 = ArmorReductionForDamageType;
  v16 = CEntityHandle::operator CEntityInstance *(&v15->m_hUnit);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  v18 = CEntityHandle::operator CEntityInstance *(&v15->m_hTarget);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v19 = v18;
  else
    v19 = 0;
  if ( v17 != 0 )
  {
    v20 = CBaseEntity::GetAbsOrigin(v17);
    v21 = CBaseEntity::GetAbsOrigin(v19);
    fTimeInFutureb = (((v21->x - v20->x) * (v21->x - v20->x)) + ((v21->y - v20->y) * (v21->y - v20->y)))
                   + ((v21->z - v20->z) * (v21->z - v20->z));
    v22 = LODWORD(fTimeInFutureb);
    *v22.m128i_i32 = fsqrt(fTimeInFutureb);
    v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
  }
  else
  {
    v23 = -1.0;
  }
  if ( v23 > (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) )
    goto LABEL_35;
  v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
    v25 = v24;
  else
    v25 = 0;
  if ( v23 > CDOTA_BaseNPC::GetAttackRange(v25) )
    goto LABEL_29;
  (*(this->m_pAbility->_vptr_IHandleEntity + 225))(this->m_pAbility);
  v50 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
    v52 = v50;
  else
    v52 = 0;
  HealthEstimate = CDOTA_BaseNPC::GetHealthEstimate(v52, v51);
  if ( (v11 * (1.0 - v58)) <= HealthEstimate || HealthEstimate <= 0 )
  {
    v56 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v56 != 0 && BYTE3(v56[7]._vptr_IHandleEntity) != 0 )
      v57 = v56;
    else
      v57 = 0;
    if ( CDOTA_BaseNPC::FindModifierByName(v57, "modifier_windrunner_shackle_shot", 0) != 0 )
    {
LABEL_29:
      v26 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
        v27 = v26;
      else
        v27 = 0;
      this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v27);
      return 3;
    }
    goto LABEL_35;
  }
  v54 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v54 != 0 && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
    v55 = v54;
  else
    v55 = 0;
  this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v55);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Windrunner_Powershot::UseAbility  (line 414, @0x00000000028e1fe0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Powershot::UseAbility(
        CDOTA_Bot_AbilityUsage_Windrunner_Powershot *const this)
{
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Windrunner_Windrun::CDOTA_Bot_AbilityUsage_Windrunner_Windrun  (line 423, @0x00000000028e7830, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Windrun::CDOTA_Bot_AbilityUsage_Windrunner_Windrun(
        CDOTA_Bot_AbilityUsage_Windrunner_Windrun *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D28B0;  // vptr: CDOTA_Bot_AbilityUsage_Windrunner_Windrun
}


// CDOTA_Bot_AbilityUsage_Windrunner_Windrun::GetCurrentUsageDesire  (line 430, @0x00000000028e5470, libserver.so)  // inlines: FastSqrt, Get, GetActiveModeDesire, GetDistanceToEntity, GetInstance, GetTargetNPC, GetUnit, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_Bot::GetTargetBot, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange
int __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Windrun::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Windrunner_Windrun *const this)
{
  int v2; // eax
  int result; // eax
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r12
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CDOTA_Bot_Hero_Windrunner *v7; // r12
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // rdx
  CDOTA_Bot *TargetBot; // rax
  CDOTA_Bot_Hero_Windrunner *v11; // r14
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // r12
  const CBaseEntity *v14; // r13
  CEntityInstance *v15; // rax
  const CBaseEntity *v16; // r14
  const Vector *AbsOrigin; // r12
  const Vector *v18; // rax
  __m128i v19; // xmm0
  float v20; // r13d
  CDOTA_BaseNPC *v21; // rdi
  float v22; // [rsp+Ch] [rbp-24h]

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 != 2 )
  {
    if ( v2 == 4 )
    {
      m_pBot = this->m_pBot;
      if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] > 0.75 )
      {
        v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
          v6 = v5;
        else
          v6 = 0;
        if ( !CDOTA_BaseNPC::IsInRangeOfFountain(v6) )
          return 2;
      }
    }
    return 0;
  }
  v7 = this->m_pBot;
  v8 = CEntityHandle::operator CEntityInstance *(&v7->m_hTarget);
  v9 = v8;
  if ( v8 == 0
    || BYTE3(v8[7]._vptr_IHandleEntity) == 0
    || (result = 0, SLOBYTE(v9[43].m_iszPrivateVScripts.u.m_Id) >= 0) )
  {
    TargetBot = CDOTA_Bot::GetTargetBot(v7);
    if ( TargetBot != 0 && (*(TargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(TargetBot->m_pActiveBotMode) == 4 )
    {
      v11 = this->m_pBot;
      v12 = CEntityHandle::operator CEntityInstance *(&v11->m_hUnit);
      v13 = v12;
      if ( v12 == 0 || (v14 = v12, BYTE3(v12[7]._vptr_IHandleEntity) == 0) )
        v14 = 0;
      v15 = CEntityHandle::operator CEntityInstance *(&v11->m_hTarget);
      if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
        v16 = v15;
      else
        v16 = 0;
      if ( v14 != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
        v18 = CBaseEntity::GetAbsOrigin(v16);
        v22 = (((v18->x - AbsOrigin->x) * (v18->x - AbsOrigin->x)) + ((v18->y - AbsOrigin->y) * (v18->y - AbsOrigin->y)))
            + ((v18->z - AbsOrigin->z) * (v18->z - AbsOrigin->z));
        v19 = LODWORD(v22);
        *v19.m128i_i32 = fsqrt(v22);
        v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
        v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      }
      else
      {
        v20 = -1.0;
      }
      v21 = v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 ? v13 : 0LL;
      if ( v20 > CDOTA_BaseNPC::GetAttackRange(v21) )
        return 2;
    }
    return 0;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Windrunner_Windrun::UseAbility  (line 468, @0x00000000028e25e0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_Windrun::UseAbility(
        CDOTA_Bot_AbilityUsage_Windrunner_Windrun *const this)
{
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Windrunner_FocusFire::CDOTA_Bot_AbilityUsage_Windrunner_FocusFire  (line 477, @0x00000000028e7850, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_FocusFire::CDOTA_Bot_AbilityUsage_Windrunner_FocusFire(
        CDOTA_Bot_AbilityUsage_Windrunner_FocusFire *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2910;  // vptr: CDOTA_Bot_AbilityUsage_Windrunner_FocusFire
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Windrunner_FocusFire::GetCurrentUsageDesire  (line 484, @0x00000000028e6430, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetActiveModeDesire, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, Length, Set, ToDOTABaseNPC, ToDOTABuilding, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_BaseNPC::GetAttackRange, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CBaseEntity::GetAbsOrigin
int __fastcall CDOTA_Bot_AbilityUsage_Windrunner_FocusFire::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Windrunner_FocusFire *const this)
{
  int v2; // eax
  CDOTA_Bot_Hero_Windrunner *v3; // r12
  CDOTA_Bot_Hero_Windrunner *v4; // r13
  CEntityInstance *v5; // rax
  CBaseEntity *v6; // r12
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  const CBaseEntity *v9; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rsi
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r12
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // r13
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rdi
  CDOTA_Bot_Hero_Windrunner *v23; // r14
  CEntityInstance *v24; // rax
  CEntityInstance *v25; // r12
  const CBaseEntity *v26; // r13
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // r14
  const Vector *AbsOrigin; // r12
  const Vector *v30; // rax
  CDOTA_BaseNPC *v31; // rdi
  const Vector *v32; // r13
  const Vector *v33; // rax
  CEntityInstance *v34; // rax
  float v35; // [rsp+Ch] [rbp-34h]
  float v36; // [rsp+Ch] [rbp-34h]
  CEntityHandle v37; // [rsp+10h] [rbp-30h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 )
  {
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
      v17 = v16;
    else
      v17 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v17) )
    {
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
      if ( (GetBotTargetStatusCore(v22, v20, -1.0, this->m_pAbility) & 0xFD) == 0 )
      {
        v23 = this->m_pBot;
        v24 = CEntityHandle::operator CEntityInstance *(&v23->m_hUnit);
        v25 = v24;
        if ( v24 == 0 || (v26 = v24, BYTE3(v24[7]._vptr_IHandleEntity) == 0) )
          v26 = 0;
        v27 = CEntityHandle::operator CEntityInstance *(&v23->m_hTarget);
        if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
          v28 = v27;
        else
          v28 = 0;
        if ( v26 != 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(v26);
          v30 = CBaseEntity::GetAbsOrigin(v28);
          v35 = fsqrt(
                  (((v30->x - AbsOrigin->x) * (v30->x - AbsOrigin->x))
                 + ((v30->y - AbsOrigin->y) * (v30->y - AbsOrigin->y)))
                + ((v30->z - AbsOrigin->z) * (v30->z - AbsOrigin->z)));
          v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        }
        else
        {
          v35 = -1.0;
        }
        v31 = v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 ? v25 : 0LL;
        if ( (CDOTA_BaseNPC::GetAttackRange(v31) * 0.5) > v35 )
        {
          this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
          return 3;
        }
      }
    }
LABEL_20:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  if ( v2 < 2 )
    goto LABEL_20;
  if ( (v2 - 8) > 2 )
    goto LABEL_20;
  v3 = this->m_pBot;
  if ( v3->m_fModeDesires[(*(v3->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v3->m_pActiveBotMode)] < 0.75 )
    goto LABEL_20;
  v4 = this->m_pBot;
  v37.m_Index = v4->m_hTarget.m_Index;
  v5 = CEntityHandle::operator CEntityInstance *(&v37);
  v6 = v5;
  if ( v5 == 0 || BYTE3(v5[7]._vptr_IHandleEntity) == 0 || (v5[43].m_iszPrivateVScripts.u.m_Id & 0x14) == 0 )
    goto LABEL_20;
  v7 = CEntityHandle::operator CEntityInstance *(&v4->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  if ( !CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v8, v6) )
    goto LABEL_20;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 != 0 )
  {
    v10 = -1.0;
    if ( v9->m_bIsDOTANPC
      && (v32 = CBaseEntity::GetAbsOrigin(v9),
          v33 = CBaseEntity::GetAbsOrigin(v6),
          v36 = fsqrt(
                  (((v33->x - v32->x) * (v33->x - v32->x)) + ((v33->y - v32->y) * (v33->y - v32->y)))
                + ((v33->z - v32->z) * (v33->z - v32->z))),
          v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit),
          v10 = v36,
          v34 != 0)
      && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
    {
      v11 = v34;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v10 = -1.0;
    v11 = 0;
  }
  if ( CDOTA_BaseNPC::GetAttackRange(v11) <= v10 )
    goto LABEL_20;
  m_pEntity = v6->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v14 = 0x7FFF;
    else
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v14 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v13 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Windrunner_FocusFire::UseAbility  (line 528, @0x00000000028e3f30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Windrunner_FocusFire::UseAbility(
        CDOTA_Bot_AbilityUsage_Windrunner_FocusFire *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Windrunner *m_pBot; // r14
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


