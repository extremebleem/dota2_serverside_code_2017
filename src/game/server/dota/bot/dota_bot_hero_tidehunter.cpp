
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Tidehunter::CDOTA_Bot_Hero_Tidehunter  (line 22, @0x00000000028e6c10, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_Tidehunter::CDOTA_TutorialBot_Hero_Tidehunter
// strings: "tidehunter_kraken_shell", "tidehunter_anchor_smash"
void __fastcall CDOTA_Bot_Hero_Tidehunter::CDOTA_Bot_Hero_Tidehunter(
        CDOTA_Bot_Hero_Tidehunter *const this,
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
  this->_vptr_CDOTA_Bot = &off_42D1310;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityGush = CDOTA_BaseNPC::FindAbilityByName(v6, "tidehunter_gush", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityKrakenShell = CDOTA_BaseNPC::FindAbilityByName(v8, "tidehunter_kraken_shell", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityAnchorSmash = CDOTA_BaseNPC::FindAbilityByName(v10, "tidehunter_anchor_smash", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityRavage = CDOTA_BaseNPC::FindAbilityByName(v12, "tidehunter_ravage", 1);
}


// CDOTA_Bot_Hero_Tidehunter::CreateMode  (line 35, @0x00000000028e2170, libserver.so)  // inlines: CDOTA_BotMode_Attack_Tidehunter
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
// callers: CDOTA_TutorialBot_Hero_Tidehunter::CreateMode
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Tidehunter::CreateMode(CDOTA_Bot_Hero_Tidehunter *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Tidehunter (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42D1410;  // vptr: CDOTA_BotMode_Attack_Tidehunter
  return v4;
}


// CDOTA_Bot_Hero_Tidehunter::GetGankDistance  (line 50, @0x00000000028eaff0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetGankDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Bot_Hero_Tidehunter::GetGankDistance(CDOTA_Bot_Hero_Tidehunter *const this)
{
  CDOTABaseAbility *m_pAbilityRavage; // r12
  CDOTABaseAbility *m_pAbilityGush; // r12

  m_pAbilityRavage = this->m_pAbilityRavage;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityRavage) >= 0
    && (*(m_pAbilityRavage->_vptr_IHandleEntity + 245))(m_pAbilityRavage) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityRavage)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityRavage, -1) )
  {
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbilityRavage, "radius", -1, 1) + 200;
  }
  m_pAbilityGush = this->m_pAbilityGush;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityGush) >= 0
    && (*(m_pAbilityGush->_vptr_IHandleEntity + 245))(m_pAbilityGush) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityGush)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityGush, -1) )
  {
    return (*(this->m_pAbilityGush->_vptr_IHandleEntity + 226))(this->m_pAbilityGush, &vec3_origin, 0) + 200;
  }
  else
  {
    return CDOTA_Bot::GetGankDistance(this);
  }
}


// CDOTA_Bot_Hero_Tidehunter::GetAggressionFactor  (line 67, @0x00000000028e3310, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTA_Bot::GetAggressionFactor, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
float __fastcall CDOTA_Bot_Hero_Tidehunter::GetAggressionFactor(CDOTA_Bot_Hero_Tidehunter *const this)
{
  float AggressionFactor; // xmm0_4
  CDOTABaseAbility *m_pAbilityRavage; // rbx
  float v4; // xmm0_4
  float v6; // [rsp+Ch] [rbp-14h]

  AggressionFactor = CDOTA_Bot::GetAggressionFactor(this);
  m_pAbilityRavage = this->m_pAbilityRavage;
  v6 = AggressionFactor;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityRavage) >= 0
    && (*(m_pAbilityRavage->_vptr_IHandleEntity + 245))(m_pAbilityRavage) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityRavage)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityRavage, -1) )
  {
    v4 = 1.3;
  }
  else
  {
    v4 = 1.0;
  }
  return v4 * v6;
}


// CDOTA_BotMode_Attack_Tidehunter::CalculateDesiredLocation  (line 77, @0x00000000028eb0e0, libserver.so)  // inlines: GetTeamNumber, IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode_Attack::CalculateDesiredLocation, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
Vector __fastcall CDOTA_BotMode_Attack_Tidehunter::CalculateDesiredLocation(
        CDOTA_BotMode_Attack_Tidehunter *const this)
{
  CDOTA_Bot *m_pBot; // r13
  CDOTABaseAbility *v3; // r12
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
  v3 = *&m_pBot[1].m_bForceIdle;
  if ( CDOTABaseAbility::GetEffectiveLevel(v3) >= 0
    && (*(v3->_vptr_IHandleEntity + 245))(v3) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(v3)
    && CDOTABaseAbility::IsOwnersGoldEnough(v3, -1)
    && (v6 = (*(this->m_pBot->_vptr_CDOTA_Bot + 16))(this->m_pBot),
        iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(*&m_pBot[1].m_bForceIdle, "radius", -1, 1),
        Unit = CDOTA_BotMode::GetUnit(this),
        AbsOrigin = CBaseEntity::GetAbsOrigin(Unit),
        v10 = CDOTA_BotMode::GetUnit(this),
        CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
          *(*&m_pBot[1].m_bForceIdle + 776LL),
          v10->m_iTeamNum.m_Value,
          1,
          2,
          AbsOrigin,
          (v6 + 500.0),
          0.0,
          iRadius,
          &vTargetLoc,
          &iTargetCount),
        iTargetCount > 2) )
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


// CDOTA_Bot_AbilityUsage_Tidehunter_Gush::CDOTA_Bot_AbilityUsage_Tidehunter_Gush  (line 104, @0x00000000028e6d40, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_Gush::CDOTA_Bot_AbilityUsage_Tidehunter_Gush(
        CDOTA_Bot_AbilityUsage_Tidehunter_Gush *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D14B0;  // vptr: CDOTA_Bot_AbilityUsage_Tidehunter_Gush
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Tidehunter_Gush::GetCurrentUsageDesire  (line 111, @0x00000000028e7ae0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTABaseAbility::IsFullyCastable, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::GetTargetBot, CBaseEntity::GetDistanceToEntity, GetBotTargetStatusCore, CDOTA_Bot::IsAboutToDie, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes (18 total)
int __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_Gush::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Tidehunter_Gush *const this)
{
  CDOTA_Bot_Hero_Tidehunter *m_pBot; // r12
  int v3; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rsi
  CDOTA_BaseNPC *v9; // rax
  CDOTA_Bot_Hero_Tidehunter *v10; // r12
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdx
  __m128i v13; // xmm1
  float v14; // r12d
  CDOTA_Bot *TargetBot; // rax
  __m128i v16; // xmm3
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rsi
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // r12
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rsi
  CDOTA_Bot *v23; // rax
  CEntityInstance *v24; // rax
  CDOTA_Bot *v25; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rdi
  CDOTABaseAbility *m_pAbility; // rdi
  int v32; // eax
  CEntityInstance *v33; // rax
  const CBaseEntity *v34; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v36; // r14
  int v37; // r13d
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC_Hero *v39; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v41)(CDOTA_Bot_AbilityUsage_Tidehunter_Gush *const, _QWORD); // r15
  CDOTA_Commander *v42; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v44; // rax
  CDOTA_BaseNPC *v45; // rsi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+10h] [rbp-50h] BYREF

  m_pBot = this->m_pBot;
  v3 = (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode);
  if ( v3 == 4 )
  {
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
      v30 = v29;
    else
      v30 = 0;
    if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v30) <= 2.0 )
      goto LABEL_4;
    m_pAbility = this->m_pAbility;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v32 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
    CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v32);
    v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
      v34 = v33;
    else
      v34 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v34);
    SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
    if ( hEntities.m_Size <= 0 )
    {
LABEL_68:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
      goto LABEL_4;
    }
    v36 = 0;
    v37 = 0;
    while ( 1 )
    {
      v38 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v36]);
      v39 = v38;
      if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
      {
        m_Id = v38[43].m_iszPrivateVScripts.u.m_Id;
        if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
        {
          v41 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
          v42 = DOTACommander();
          IllusionState = CDOTA_Commander::GetIllusionState(v42, v39);
          if ( v41(this, IllusionState) != 0 )
          {
            v44 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v44 == 0 || (v45 = v44, BYTE3(v44[7]._vptr_IHandleEntity) == 0) )
              v45 = 0;
            if ( (GetBotTargetStatusCore(v39, v45, -1.0, this->m_pAbility) & 0xFB) == 0
              && !CDOTA_BaseNPC::IsMovementImpaired(v39)
              && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v39) )
            {
              break;
            }
          }
        }
      }
      ++v37;
      ++v36;
      if ( hEntities.m_Size <= v37 )
        goto LABEL_68;
    }
    this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v36].m_Index;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    return 2;
  }
  else
  {
    if ( v3 != 18 )
    {
      if ( v3 == 2 )
      {
        v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
          v6 = v5;
        else
          v6 = 0;
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v6) )
        {
          v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
            v8 = v7;
          else
            v8 = 0;
          if ( IsBotTargetStatusValidCore(v6, v8, 251, -1.0, this->m_pAbility)
            && (!CDOTABaseAbility::IsFullyCastable(m_pBot->m_pAbilityRavage)
             || (*(m_pBot->m_pAbilityRavage->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBot->m_pAbilityRavage->m_pBotUsage) == 0) )
          {
            if ( (v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget)) == 0
              || !v9->m_bIsDOTANPC
              || !CDOTA_BaseNPC::IsMovementImpaired(v9)
              && ((v10 = this->m_pBot, (v11 = CEntityHandle::operator CEntityInstance *(&v10->m_hTarget)) == 0)
               || BYTE3(v11[7]._vptr_IHandleEntity) == 0
                ? (v12 = 0)
                : (v12 = v11),
                  !CDOTA_TeamCommander::HasIncomingStun(v10->m_pTeamCommander, v10, v12)) )
            {
              *v13.m128i_i32 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
              v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
              TargetBot = CDOTA_Bot::GetTargetBot(this->m_pBot);
              if ( TargetBot != 0
                && (*(TargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(TargetBot->m_pActiveBotMode) != 4 )
              {
                v16 = _mm_cvtsi32_si128(LODWORD(v14));
                *v16.m128i_i32 = *v16.m128i_i32 - 300.0;
                v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
              }
              v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
                v18 = v17;
              else
                v18 = 0;
              if ( v14 > CBaseEntity::GetDistanceToEntity(v6, v18) )
              {
                this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
                return 3;
              }
            }
          }
        }
      }
LABEL_4:
      this->m_hDesiredTarget.m_Index = -1;
      return 0;
    }
    hEntities.m_Size = this->m_pBot->m_hTarget.m_Index;
    v19 = CEntityHandle::operator CEntityInstance *(&hEntities);
    if ( v19 == 0
      || BYTE3(v19[7]._vptr_IHandleEntity) == 0
      || (v20 = v19, (v19[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v20 = 0;
    }
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v20) )
      goto LABEL_4;
    v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
      v22 = v21;
    else
      v22 = 0;
    if ( (GetBotTargetStatusCore(v20, v22, -1.0, this->m_pAbility) & 0xFB) != 0 )
      goto LABEL_4;
    if ( CDOTA_BaseNPC::IsMovementImpaired(v20) )
      goto LABEL_4;
    if ( CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v20) )
      goto LABEL_4;
    v23 = v20->m_pBot;
    if ( v23 == 0 )
      goto LABEL_4;
    hEntities.m_Size = v23->m_hTarget.m_Index;
    v24 = CEntityHandle::operator CEntityInstance *(&hEntities);
    if ( v24 == 0 )
      goto LABEL_4;
    if ( BYTE3(v24[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_4;
    if ( (v24[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      goto LABEL_4;
    v25 = *&v24[45].m_worldGroupId.m_nHashCode;
    if ( v25 == 0 || !CDOTA_Bot::IsAboutToDie(v25) )
      goto LABEL_4;
    m_pEntity = v20->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v28 = 0x7FFF;
      else
        v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v28 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v27 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 3;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      return 3;
    }
  }
}


// CDOTA_Bot_AbilityUsage_Tidehunter_Gush::UseAbility  (line 196, @0x00000000028e41d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_Gush::UseAbility(CDOTA_Bot_AbilityUsage_Tidehunter_Gush *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Tidehunter *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash::CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash  (line 209, @0x00000000028e6d70, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash::CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash(
        CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1510;  // vptr: CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash
}


// CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash::GetCurrentUsageDesire  (line 216, @0x00000000028ec760, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, Length, LookupEntity, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot::GetNearbyCreeps, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash *const this)
{
  int v2; // eax
  CDOTA_Bot_Hero_Tidehunter *m_pBot; // rdi
  CDOTA_Bot_Hero_Tidehunter *v4; // r12
  unsigned __int8 (__fastcall *v5)(CDOTA_Bot_Hero_Tidehunter *, _QWORD); // r13
  unsigned int v6; // eax
  CDOTA_Bot_Hero_Tidehunter *v8; // rdi
  int iRadius; // [rsp+4h] [rbp-5Ch]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyCreeps; // [rsp+10h] [rbp-50h] BYREF

  iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 > 13 )
  {
    if ( v2 != 17 )
      return 0;
  }
  else if ( v2 < 8 )
  {
    if ( v2 != 2 )
      return 0;
    m_pBot = this->m_pBot;
    hNearbyCreeps.m_Size = 0;
    hNearbyCreeps.m_Memory.m_pMemory = 0;
    hNearbyCreeps.m_Memory.m_nAllocationCount = 0;
    hNearbyCreeps.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyCreeps, iRadius);
    if ( hNearbyCreeps.m_Size <= 0
      || (v4 = this->m_pBot,
          v5 = *(v4->_vptr_CDOTA_Bot + 10),
          v6 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL),
          v5(v4, v6) == 0) )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
      return 0;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
    return 2;
  }
  v8 = this->m_pBot;
  hNearbyCreeps.m_Size = 0;
  hNearbyCreeps.m_Memory.m_pMemory = 0;
  hNearbyCreeps.m_Memory.m_nAllocationCount = 0;
  hNearbyCreeps.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyCreeps(v8, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, 0, 0.0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
  return 0;
}


// CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash::UseAbility  (line 269, @0x00000000028e2520, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash::UseAbility(
        CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash *const this)
{
  CDOTA_Bot_Hero_Tidehunter *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::CDOTA_Bot_AbilityUsage_Tidehunter_Ravage  (line 278, @0x00000000028e6d90, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::CDOTA_Bot_AbilityUsage_Tidehunter_Ravage(
        CDOTA_Bot_AbilityUsage_Tidehunter_Ravage *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1570;  // vptr: CDOTA_Bot_AbilityUsage_Tidehunter_Ravage
}


// CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::GetCurrentUsageDesire  (line 285, @0x00000000028eb230, libserver.so)  // inlines: FastSqrt, Get, GetBotByIndex, GetBotTargetStatus, GetDistanceToEntity, GetInstance, GetOpposingTeamCommander, GetUnit, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_TeamCommander::GetOpposingTeamCommander, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_TeamCommander::HasIncomingStun, CBaseEntity::GetAbsOrigin
int __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Tidehunter_Ravage *const this)
{
  int v2; // eax
  int result; // eax
  __int64 v4; // rbx
  int v5; // r14d
  CDOTA_Bot_Hero_Tidehunter *m_pBot; // r15
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v8; // rax
  const CEntityHandle *v9; // rdi
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r13
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  const CBaseEntity *v14; // rax
  float v15; // xmm0_4
  int v16; // eax
  const Vector *AbsOrigin; // r15
  const Vector *v18; // rax
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  int nAlmostInRangeHeroes; // [rsp+8h] [rbp-38h]
  int radius; // [rsp+Ch] [rbp-34h]

  radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 != 2 && v2 != 4 )
    return 0;
  v4 = 0;
  v5 = 0;
  m_pBot = this->m_pBot;
  nAlmostInRangeHeroes = 0;
  while ( v4 < CDOTA_TeamCommander::GetOpposingTeamCommander(m_pBot->m_pTeamCommander)->m_BotList.m_Size )
  {
    OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
    if ( v4 >= OpposingTeamCommander->m_BotList.m_Size || OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v4] == 0 )
      goto LABEL_6;
    v8 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
    v9 = 0;
    if ( v4 < v8->m_BotList.m_Size )
      v9 = v8->m_BotList.m_Memory.m_pMemory[v4];
    v10 = CEntityHandle::operator CEntityInstance *(v9 + 39);
    if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      v11 = v10;
    else
      v11 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v11)
      || ((v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0
       || BYTE3(v12[7]._vptr_IHandleEntity) == 0
        ? (v13 = 0)
        : (v13 = v12),
          (GetBotTargetStatusCore(v11, v13, -1.0, this->m_pAbility) & 0xFB) != 0
       || (v11[58]._vptr_IHandleEntity & 0x20) != 0
       || CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v11)) )
    {
LABEL_6:
      m_pBot = this->m_pBot;
    }
    else
    {
      m_pBot = this->m_pBot;
      v14 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v14 != 0 && v14->m_bIsDOTANPC )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
        v18 = CBaseEntity::GetAbsOrigin(v11);
        v19 = (v18->x - AbsOrigin->x) * (v18->x - AbsOrigin->x);
        v20 = v18->z - AbsOrigin->z;
        v21 = (v18->y - AbsOrigin->y) * (v18->y - AbsOrigin->y);
        m_pBot = this->m_pBot;
        v15 = fsqrt((v19 + v21) + (v20 * v20));
      }
      else
      {
        v15 = -1.0;
      }
      if ( v15 > radius )
      {
        v16 = nAlmostInRangeHeroes + 1;
        if ( (radius + 200) <= v15 )
          v16 = nAlmostInRangeHeroes;
        nAlmostInRangeHeroes = v16;
      }
      if ( radius > v15 )
        ++v5;
    }
    ++v4;
  }
  result = 4;
  if ( v5 <= 2 )
  {
    if ( nAlmostInRangeHeroes != 0 )
      return 0;
    LOBYTE(result) = 3;
    if ( v5 <= 1 )
      return 0;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::UseAbility  (line 341, @0x00000000028eb4f0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, GetUnit, IsConsideredHero, IsValidBotTarget, Length, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator[]
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, GetBotTargetStatusCore, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::CreateHumanRequest, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::UseAbility(
        CDOTA_Bot_AbilityUsage_Tidehunter_Ravage *const this)
{
  CDOTA_Bot_Hero_Tidehunter *m_pBot; // r12
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // rbx
  CDOTA_BotAction *v5; // rsi
  __int64 v6; // rbx
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC_Hero *v8; // r15
  int m_Id; // eax
  CDOTA_Commander *v10; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  CEntityInstance *v14; // rax
  CBaseEntity *v15; // rsi
  const Vector *AbsOrigin; // r14
  const Vector *v17; // rax
  double v18; // xmm1_8
  CEntityIdentity *m_pEntity; // rax
  int v20; // edx
  __int16 v21; // cx
  int radius; // [rsp+14h] [rbp-4Ch]
  CBaseEntity *v23; // [rsp+18h] [rbp-48h]
  CBaseEntity *v24; // [rsp+18h] [rbp-48h]
  uint32 v25[16]; // [rsp+20h] [rbp-40h] BYREF

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  v5 = v4;
  v6 = 0;
  CDOTA_Bot::PushAction(this->m_pBot, v5);
  radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    do
    {
      v7 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v6]);
      v8 = v7;
      if ( v7 != 0 )
      {
        m_Id = v7[43].m_iszPrivateVScripts.u.m_Id;
        if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
        {
          v23 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
          v10 = DOTACommander();
          IllusionState = CDOTA_Commander::GetIllusionState(v10, v8);
          if ( (v23)(this, IllusionState) != 0 )
          {
            v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v12 == 0 || (v13 = v12, BYTE3(v12[7]._vptr_IHandleEntity) == 0) )
              v13 = 0;
            if ( (GetBotTargetStatusCore(v8, v13, -1.0, this->m_pAbility) & 0xFB) == 0 )
            {
              v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v14 == 0 || (v15 = v14, BYTE3(v14[7]._vptr_IHandleEntity) == 0) )
                v15 = 0;
              v24 = v15;
              AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
              v17 = CBaseEntity::GetAbsOrigin(v24);
              *&v18 = LODWORD(v17->z);
              if ( radius > fsqrt(
                              (((v17->x - AbsOrigin->x) * (v17->x - AbsOrigin->x))
                             + ((v17->y - AbsOrigin->y) * (v17->y - AbsOrigin->y)))
                            + ((*&v18 - AbsOrigin->z) * (*&v18 - AbsOrigin->z))) )
              {
                m_pEntity = v8->m_pEntity;
                v25[0] = -1;
                if ( m_pEntity != 0 )
                {
                  v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v21 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v25[0]) = v21 | v25[0] & 0x8000;
                  v25[0] = (v20 << 15) | v25[0] & 0x7FFF;
                }
                *&v18 = radius;
                CDOTA_TeamCommander::CreateHumanRequest(
                  this->m_pBot->m_pTeamCommander,
                  1,
                  v25,
                  0,
                  COERCE_DOUBLE(1077936128),
                  v18);
              }
            }
          }
        }
      }
      ++v6;
    }
    while ( g_HeroList.m_hHeroList.m_Size > v6 );
  }
}


// CDOTA_TutorialBot_Hero_Tidehunter::CDOTA_TutorialBot_Hero_Tidehunter  (line 376, @0x00000000028e6db0, libserver.so)
// calls: CDOTA_Bot_Hero_Tidehunter::CDOTA_Bot_Hero_Tidehunter
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_Tidehunter::CDOTA_TutorialBot_Hero_Tidehunter(
        CDOTA_TutorialBot_Hero_Tidehunter *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_Tidehunter::CDOTA_Bot_Hero_Tidehunter(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42D15D0;
  this->m_nActivityDeath = -1;
}


// CDOTA_TutorialBot_Hero_Tidehunter::CreateMode  (line 387, @0x00000000028e26a0, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTA_Bot_Hero_Tidehunter::CreateMode, operator new, CDOTA_BotMode_TutorialBoss::CDOTA_BotMode_TutorialBoss, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_TutorialBot_Hero_Tidehunter::CreateMode(
        CDOTA_TutorialBot_Hero_Tidehunter *const this,
        int iMode)
{
  CDOTA_BotMode *result; // rax
  CDOTA_BotMode_TutorialBoss *v4; // r12

  if ( this->m_bHuman || dota_bot_tutorial_boss.m_pParent->m_Value.m_nValue == 0 )
    return CDOTA_Bot_Hero_Tidehunter::CreateMode(this, iMode);
  result = 0;
  if ( iMode == 24 )
  {
    v4 = operator new(0x118u);
    CDOTA_BotMode_TutorialBoss::CDOTA_BotMode_TutorialBoss(v4, this);
    return v4;
  }
  return result;
}


// CDOTA_TutorialBot_Hero_Tidehunter::GetInitialMode  (line 404, @0x00000000028e1e20, libserver.so)  // inlines: GetBool, GetInt
DOTA_BOT_MODE __fastcall CDOTA_TutorialBot_Hero_Tidehunter::GetInitialMode(
        CDOTA_TutorialBot_Hero_Tidehunter *const this)
{
  if ( !this->m_bHuman && dota_bot_tutorial_boss.m_pParent->m_Value.m_nValue != 0 )
    return DOTA_BOT_MODE::DOTA_BOT_MODE_TUTORIAL_BOSS;
  else
    return DOTA_BOT_MODE::DOTA_BOT_MODE_LANING;
}


// CDOTA_TutorialBot_Hero_Tidehunter::Think  (line 416, @0x00000000028e2eb0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::Think
void __fastcall CDOTA_TutorialBot_Hero_Tidehunter::Think(CDOTA_TutorialBot_Hero_Tidehunter *const this)
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

  if ( dota_tutorial_see_enemy.m_pParent->m_Value.m_nValue == 0 )
  {
LABEL_23:
    this->m_bHasSeenEnemy = 1;
    goto LABEL_24;
  }
  if ( this->m_bHasSeenEnemy )
    goto LABEL_24;
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
            goto LABEL_23;
          }
        }
      }
    }
  }
LABEL_11:
  if ( this->m_bHasSeenEnemy )
LABEL_24:
    CDOTA_Bot::Think(this);
}


// CDOTA_TutorialBot_Hero_Tidehunter::TranslateActivity  (line 465, @0x00000000028e1e60, libserver.so)
int __fastcall CDOTA_TutorialBot_Hero_Tidehunter::TranslateActivity(
        CDOTA_TutorialBot_Hero_Tidehunter *const this,
        int nActivity)
{
  int result; // eax

  result = nActivity;
  if ( nActivity == 1506 )
    return this->m_nActivityDeath;
  return result;
}


