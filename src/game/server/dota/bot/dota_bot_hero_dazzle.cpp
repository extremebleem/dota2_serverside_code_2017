
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Dazzle::CDOTA_Bot_Hero_Dazzle  (line 21, @0x00000000028b7460, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "dazzle_shadow_wave", "dazzle_weave"
void __fastcall CDOTA_Bot_Hero_Dazzle::CDOTA_Bot_Hero_Dazzle(
        CDOTA_Bot_Hero_Dazzle *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CAF30;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityPoisonTouch = CDOTA_BaseNPC::FindAbilityByName(v6, "dazzle_poison_touch", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityShallowGrave = CDOTA_BaseNPC::FindAbilityByName(v8, "dazzle_shallow_grave", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityShadowWave = CDOTA_BaseNPC::FindAbilityByName(v10, "dazzle_shadow_wave", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityWeave = CDOTA_BaseNPC::FindAbilityByName(v12, "dazzle_weave", 1);
}


// CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch  (line 34, @0x00000000028b7590, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch(
        CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB090;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::GetCurrentUsageDesire  (line 41, @0x00000000028b8550, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActiveModeDesire, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot_AbilityUsage::IsValidBotTarget (14 total)
int __fastcall CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v3; // xmm0
  int v4; // eax
  int v5; // eax
  float v7; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CDOTA_Bot_Hero_Dazzle *m_pBot; // r12
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  CDOTABaseAbility *v14; // rdi
  int v15; // eax
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v19; // r14
  int v20; // r13d
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC_Hero *v22; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v24)(CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch *const, _QWORD); // r15
  CDOTA_Commander *v25; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rsi
  CEntityInstance *v29; // rax
  CEntityInstance *v30; // r12
  CEntityInstance *v31; // rax
  CDOTA_BaseNPC *v32; // rsi
  CEntityInstance *v33; // rax
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // rsi
  __int64 v36; // rax
  CEntityInstance *v37; // rax
  float fChannelTimeRemaining; // [rsp+14h] [rbp-5Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+18h] [rbp-58h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  pChannelTarget = 0;
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v3.m128i_i32 = v4 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v3, &pChannelTarget, &fChannelTimeRemaining) != 0
    && SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) >= 0 )
  {
    v7 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
    if ( fChannelTimeRemaining > v7 )
    {
      if ( pChannelTarget != 0 )
      {
        m_pEntity = pChannelTarget->m_pEntity;
        if ( m_pEntity != 0 )
        {
LABEL_10:
          v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v10 = 0x7FFF;
          else
            v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hDesiredTarget.m_Index) = v10 | this->m_hDesiredTarget.m_Index & 0x8000;
          this->m_hDesiredTarget.m_Index = (v9 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
          return 3;
        }
      }
LABEL_46:
      this->m_hDesiredTarget.m_Index = -1;
      return 3;
    }
  }
  v5 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v5 != 4 )
  {
    if ( v5 == 18 )
    {
      v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
        v30 = v33;
      else
        v30 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v30) )
      {
        v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
          v35 = v34;
        else
          v35 = 0;
        if ( IsBotTargetStatusValidCore(v30, v35, 251, -1.0, this->m_pAbility)
          && !CDOTA_BaseNPC::IsMovementImpaired(v30)
          && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v30)
          && v30 != 0
          && (v30[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v36 = *&v30[45].m_worldGroupId.m_nHashCode;
          if ( v36 != 0 )
          {
            hEntities.m_Size = *(v36 + 712);
            v37 = CEntityHandle::operator CEntityInstance *(&hEntities);
            if ( v37 != 0
              && BYTE3(v37[7]._vptr_IHandleEntity) != 0
              && (v37[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && *&v37[45].m_worldGroupId.m_nHashCode != 0
              && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v37) < 4.0 )
            {
LABEL_65:
              m_pEntity = v30->m_pEntity;
              if ( m_pEntity != 0 )
                goto LABEL_10;
              goto LABEL_46;
            }
          }
        }
      }
    }
    else if ( v5 == 2 )
    {
      v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
        v30 = v29;
      else
        v30 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v30) )
      {
        v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
          v32 = v31;
        else
          v32 = 0;
        if ( IsBotTargetStatusValidCore(v30, v32, 251, -1.0, this->m_pAbility)
          && !CDOTA_BaseNPC::IsMovementImpaired(v30)
          && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v30) )
        {
          if ( v30 == 0 )
            goto LABEL_46;
          goto LABEL_65;
        }
      }
    }
LABEL_6:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  m_pBot = this->m_pBot;
  if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] <= 0.89999998 )
    goto LABEL_6;
  v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    v13 = v12;
  else
    v13 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v13) <= 2.0 )
    goto LABEL_6;
  v14 = this->m_pAbility;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v15 = (*(v14->_vptr_IHandleEntity + 226))(v14, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v15);
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
  SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_34:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    goto LABEL_6;
  }
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v21 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v19]);
    v22 = v21;
    if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v21[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
      {
        v24 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v25 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v25, v22);
        if ( v24(this, IllusionState) != 0 )
        {
          v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v27 == 0 || (v28 = v27, BYTE3(v27[7]._vptr_IHandleEntity) == 0) )
            v28 = 0;
          if ( IsBotTargetStatusValidCore(v22, v28, 251, -1.0, this->m_pAbility)
            && !CDOTA_BaseNPC::IsMovementImpaired(v22)
            && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v22) )
          {
            break;
          }
        }
      }
    }
    ++v20;
    ++v19;
    if ( hEntities.m_Size <= v20 )
      goto LABEL_34;
  }
  this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v19].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::UseAbility  (line 130, @0x00000000028b5590, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::UseAbility(
        CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Dazzle *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave  (line 143, @0x00000000028b75c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave(
        CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB0F0;
  this->m_hDesiredTarget.m_Index = -1;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::GetCurrentUsageDesire  (line 151, @0x00000000028b8b60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::FindNearbyEnemiesInMode, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  int v3; // eax
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v7; // r12
  int v8; // ebx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  int v18; // ebx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAllies; // [rsp+0h] [rbp-50h] BYREF

  hNearbyAllies.m_Size = 0;
  m_pAbility = this->m_pAbility;
  hNearbyAllies.m_Memory.m_pMemory = 0;
  hNearbyAllies.m_Memory.m_nAllocationCount = 0;
  hNearbyAllies.m_Memory.m_nGrowSize = 0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(
    this->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
    &hNearbyAllies,
    v3 + 200.0);
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  SortEHANDLEVectorByLocation(&hNearbyAllies, AbsOrigin, 0);
  if ( hNearbyAllies.m_Size <= 0 )
  {
LABEL_21:
    this->m_hDesiredTarget.m_Index = -1;
    v18 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = &hNearbyAllies.m_Memory.m_pMemory[v7];
      m_Index = hNearbyAllies.m_Memory.m_pMemory[v7].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v11 = v9->m_Index;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[v11 & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          {
            m_pInstance = v13->m_pInstance;
            if ( v13->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && (m_pInstance->m_iUnitType & 1) != 0
              && m_pInstance->m_pBot != 0
              && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v13->m_pInstance) < 2.0
              && CDOTA_Bot::FindNearbyEnemiesInMode(
                   m_pInstance->m_pBot,
                   DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                   1000.0,
                   0,
                   m_pInstance) > 0 )
            {
              break;
            }
          }
        }
      }
      ++v8;
      ++v7;
      if ( hNearbyAllies.m_Size <= v8 )
        goto LABEL_21;
    }
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v17 = 0x7FFF;
      else
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v18 = 4;
      LOWORD(this->m_hDesiredTarget.m_Index) = v17 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v16 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      v18 = 4;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAllies);
  return v18;
}


// CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::UseAbility  (line 174, @0x00000000028b52f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::UseAbility(
        CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Dazzle *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave  (line 187, @0x00000000028b75f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave(
        CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB150;
  this->m_hDesiredTarget.m_Index = -1;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::GetCurrentUsageDesire  (line 195, @0x00000000028bbfb0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Element, FastSqrt, Get, GetAggroTarget, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, Length, LookupEntity, Remove, Set, ShiftElementsLeft, ToDOTABaseNPC, ToDOTABaseNPCHero, V_memmove, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, memmove, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator==<CBaseEntity>, operator[], ~CUtlVector
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::GetNearbyCreeps, CBaseEntity::GetHealth, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::FindNearbyEnemiesInMode (17 total)
// strings: "bounce_radius"
// globals: jpt_28BBFED, CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave *const this)
{
  int v2; // eax
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // rbx
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CDOTA_Bot *v8; // rax
  CEntityInstance *v9; // rax
  CEntityIdentity *v10; // rax
  int v11; // edx
  __int16 v12; // cx
  CDOTA_Bot_Hero_Dazzle *v13; // rdi
  int v14; // ebx
  int Health; // r14d
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // rax
  const CBaseEntity *v18; // r12
  int m_Size; // eax
  CEntityInstance *v20; // rax
  const CBaseEntity *v21; // rdi
  const Vector *v22; // rax
  CDOTA_Bot_Hero_Dazzle *v23; // rbx
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // rcx
  CDOTABaseAbility *m_pAbility; // rdi
  int v27; // eax
  CDOTA_Bot_Hero_Dazzle *m_pBot; // rdi
  CEntityInstance *v29; // rax
  const CBaseEntity *v30; // rdi
  const Vector *AbsOrigin; // rax
  CEntityInstance *v32; // rax
  const CBaseEntity *v33; // rdi
  const Vector *v34; // rax
  CEntityInstance *v35; // rax
  CDOTA_BaseNPC *v36; // r14
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // rsi
  __int64 v39; // r12
  int v40; // r13d
  const Vector *v41; // rbx
  const Vector *v42; // rax
  float v43; // xmm0_4
  const CBaseEntity *v44; // rax
  int v45; // eax
  CEntityInstance *v46; // rax
  CEntityInstance *v47; // rdi
  int v48; // ebx
  CDOTA_Bot_Hero_Dazzle *v49; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v51; // rdx
  CEntityIdentity *v52; // rax
  const CBaseEntity *v53; // rdi
  signed int v54; // ebx
  int v55; // eax
  CEntityInstance *v56; // rax
  int v57; // ebx
  int v58; // ebx
  int v59; // eax
  __int64 v60; // rbx
  const Vector *v61; // r12
  const Vector *v62; // rax
  float v63; // xmm0_4
  CEntityInstance *v64; // rax
  const CBaseEntity *v65; // r12
  int v66; // r13d
  int v67; // r13d
  int v68; // r12d
  int v69; // eax
  const CBaseEntity *v70; // rax
  CEntityInstance *v71; // rax
  float v72; // ebx
  CEntityIdentity *m_pEntity; // rax
  int v74; // edx
  __int16 v75; // cx
  const CBaseEntity *m_pInstance; // rax
  __int64 v77; // [rsp+10h] [rbp-B0h]
  __int64 fAbilityDamage; // [rsp+18h] [rbp-A8h]
  float fAbilityDamagea; // [rsp+18h] [rbp-A8h]
  signed int iRawHeroHealthDeficit; // [rsp+20h] [rbp-A0h]
  int nDamageInstances; // [rsp+2Ch] [rbp-94h]
  int nDamageInstancesa; // [rsp+2Ch] [rbp-94h]
  float fDamageRadius; // [rsp+30h] [rbp-90h]
  const CBaseEntity *fDamageRadiusa; // [rsp+30h] [rbp-90h]
  float fTotalDamage; // [rsp+38h] [rbp-88h]
  int fTotalDamagea; // [rsp+38h] [rbp-88h]
  int nCreepsToHeal; // [rsp+3Ch] [rbp-84h]
  int nCreepsToHeala; // [rsp+3Ch] [rbp-84h]
  EHANDLE hClosestInRangeToDamage; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyHeroes; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAlliedCreeps; // [rsp+70h] [rbp-50h] BYREF

  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
    case 2u:
      m_pAbility = this->m_pAbility;
      hNearbyEnemyHeroes.m_Size = 0;
      hNearbyEnemyHeroes.m_Memory.m_pMemory = 0;
      hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 0;
      hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0;
      v27 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
      CDOTA_Bot::GetNearbyHeroes(
        this->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &hNearbyEnemyHeroes,
        v27 + 100.0);
      m_pBot = this->m_pBot;
      hNearbyAlliedCreeps.m_Size = 0;
      hNearbyAlliedCreeps.m_Memory.m_pMemory = 0;
      hNearbyAlliedCreeps.m_Memory.m_nAllocationCount = 0;
      hNearbyAlliedCreeps.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyCreeps(
        m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
        &hNearbyAlliedCreeps,
        0.0);
      CDOTA_Bot::GetNearbyHeroes(
        this->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
        &hNearbyAlliedCreeps,
        0.0);
      v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
        v30 = v29;
      else
        v30 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v30);
      SortEHANDLEVectorByLocation(&hNearbyEnemyHeroes, AbsOrigin, 0);
      v32 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
        v33 = v32;
      else
        v33 = 0;
      v34 = CBaseEntity::GetAbsOrigin(v33);
      SortEHANDLEVectorByLocation(&hNearbyAlliedCreeps, v34, 0);
      fDamageRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "damage_radius", -1, 1);
      fAbilityDamagea = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
      if ( hNearbyEnemyHeroes.m_Size <= 0 )
        goto LABEL_80;
      v77 = 0;
      do
      {
        v35 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v77]);
        if ( v35 == 0
          || BYTE3(v35[7]._vptr_IHandleEntity) == 0
          || (v36 = v35, (v35[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
        {
          v36 = 0;
        }
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v36) )
        {
          v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
            v38 = v37;
          else
            v38 = 0;
          if ( IsBotTargetStatusValidCore(v36, v38, 251, -1.0, this->m_pAbility) )
          {
            hClosestInRangeToDamage.m_Index = -1;
            if ( hNearbyAlliedCreeps.m_Size <= 0 )
            {
              nDamageInstances = 0;
              fTotalDamage = 0.0;
            }
            else
            {
              v39 = 0;
              v40 = 0;
              nDamageInstances = 0;
              fTotalDamage = 0.0;
              do
              {
                v44 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedCreeps.m_Memory.m_pMemory[v39]);
                if ( v44 != 0 )
                {
                  v41 = CBaseEntity::GetAbsOrigin(v44);
                  v42 = CBaseEntity::GetAbsOrigin(v36);
                  v43 = fsqrt(
                          (((v42->x - v41->x) * (v42->x - v41->x)) + ((v42->y - v41->y) * (v42->y - v41->y)))
                        + ((v42->z - v41->z) * (v42->z - v41->z)));
                }
                else
                {
                  v43 = -1.0;
                }
                if ( fDamageRadius > v43 )
                {
                  if ( CEntityHandle::operator CEntityInstance *(&hClosestInRangeToDamage) == 0 )
                    hClosestInRangeToDamage.m_Index = hNearbyAlliedCreeps.m_Memory.m_pMemory[v39].m_Index;
                  ++nDamageInstances;
                  fTotalDamage = fTotalDamage + fAbilityDamagea;
                }
                ++v40;
                ++v39;
              }
              while ( hNearbyAlliedCreeps.m_Size > v40 );
            }
            *&nCreepsToHeala = CDOTA_BaseNPC::GetArmorForDamageType(v36, 2);
            if ( nDamageInstances > 2 || ((1.0 - *&nCreepsToHeala) * fTotalDamage) > CBaseEntity::GetHealth(v36) )
            {
              this->m_hDesiredTarget = hClosestInRangeToDamage;
              goto LABEL_124;
            }
          }
        }
        v45 = v77++;
      }
      while ( hNearbyEnemyHeroes.m_Size > v45 + 1 );
LABEL_80:
      fTotalDamagea = 2 * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "bounce_radius", -1, 1);
      v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
        v47 = v46;
      else
        v47 = 0;
      v48 = (*(v47->_vptr_IHandleEntity + 156))(v47);
      v49 = this->m_pBot;
      m_Index = v49->m_hUnit.m_Index;
      if ( m_Index + 2 > 1
        && (v51 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v49->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
        && (v52 = &v51[v49->m_hUnit.m_Index & 0x1FF]) != 0
        && m_Index == v52->m_EHandle.m_Index
        && (m_pInstance = v52->m_pInstance) != 0
        && m_pInstance->m_bIsDOTANPC )
      {
        v53 = m_pInstance;
      }
      else
      {
        v53 = 0;
      }
      v54 = v48 - CBaseEntity::GetHealth(v53);
      iRawHeroHealthDeficit = v54;
      v55 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
      if ( v55 > v54 )
        v55 = v54;
      nDamageInstancesa = v55;
      if ( hNearbyAlliedCreeps.m_Size <= 0 )
      {
LABEL_3:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedCreeps);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
        goto LABEL_4;
      }
      fAbilityDamage = 0;
      while ( 1 )
      {
        v56 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedCreeps.m_Memory.m_pMemory[fAbilityDamage]);
        fDamageRadiusa = v56;
        if ( v56 != 0 && BYTE3(v56[7]._vptr_IHandleEntity) != 0 && (v56[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v57 = (*(v56->_vptr_IHandleEntity + 156))(v56);
          v58 = v57 - CBaseEntity::GetHealth(fDamageRadiusa);
          iRawHeroHealthDeficit += v58;
          v59 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
          if ( v59 > v58 )
            v59 = v58;
          nDamageInstancesa += v59;
          if ( hNearbyAlliedCreeps.m_Size > 0 )
          {
            v60 = 0;
            do
            {
              if ( fAbilityDamage != v60 )
              {
                v70 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedCreeps.m_Memory.m_pMemory[v60]);
                if ( v70 != 0 )
                {
                  v61 = CBaseEntity::GetAbsOrigin(v70);
                  v62 = CBaseEntity::GetAbsOrigin(fDamageRadiusa);
                  v63 = fsqrt(
                          (((v62->x - v61->x) * (v62->x - v61->x)) + ((v62->y - v61->y) * (v62->y - v61->y)))
                        + ((v62->z - v61->z) * (v62->z - v61->z)));
                }
                else
                {
                  v63 = -1.0;
                }
                if ( fTotalDamagea > v63 )
                {
                  v64 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedCreeps.m_Memory.m_pMemory[v60]);
                  v65 = v64;
                  if ( v64 != 0
                    && BYTE3(v64[7]._vptr_IHandleEntity) != 0
                    && (v64[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v66 = (*(v64->_vptr_IHandleEntity + 156))(v64);
                    v67 = v66 - CBaseEntity::GetHealth(v65);
                    iRawHeroHealthDeficit += v67;
                    v68 = v67;
                    v69 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
                    if ( v69 <= v67 )
                      v68 = v69;
                    nDamageInstancesa += v68;
                  }
                }
              }
              ++v60;
            }
            while ( hNearbyAlliedCreeps.m_Size > v60 );
          }
          if ( (2 * (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility)) <= nDamageInstancesa )
          {
            if ( (6 * (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility)) < iRawHeroHealthDeficit )
              break;
            v71 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v71 == 0 || BYTE3(v71[7]._vptr_IHandleEntity) == 0 )
              v71 = 0;
            v72 = *&v71[44].m_iszPrivateVScripts.u.m_Id;
            if ( v72 > (4 * (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL)) )
              break;
          }
        }
        v2 = fAbilityDamage++;
        if ( hNearbyAlliedCreeps.m_Size <= v2 + 1 )
          goto LABEL_3;
      }
      m_pEntity = fDamageRadiusa->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v74 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v75 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v75 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v75 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v74 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hDesiredTarget.m_Index = -1;
      }
LABEL_124:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedCreeps);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
      return 3;
    case 4u:
      if ( !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
        goto LABEL_4;
      v23 = this->m_pBot;
      v24 = CEntityHandle::operator CEntityInstance *(&v23->m_hUnit);
      if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
        v25 = v24;
      else
        v25 = 0;
      if ( CDOTA_Bot::FindNearbyEnemiesInMode(v23, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, v25) <= 0 )
        goto LABEL_4;
      v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_47;
LABEL_19:
      v10 = v9->m_pEntity;
      if ( v10 != 0 )
      {
        v11 = (v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1);
        if ( v10->m_EHandle.m_Index == -1 )
          v12 = 0x7FFF;
        else
          v12 = v10->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v12 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v11 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        return 3;
      }
      else
      {
LABEL_47:
        this->m_hDesiredTarget.m_Index = -1;
        return 3;
      }
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
      v13 = this->m_pBot;
      hNearbyAlliedCreeps.m_Size = 0;
      hNearbyAlliedCreeps.m_Memory.m_pMemory = 0;
      hNearbyAlliedCreeps.m_Memory.m_nAllocationCount = 0;
      hNearbyAlliedCreeps.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyCreeps(v13, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyAlliedCreeps, 0.0);
      if ( hNearbyAlliedCreeps.m_Size <= 0 )
        goto LABEL_77;
      nCreepsToHeal = 0;
      v14 = 0;
      break;
    case 0x12u:
      v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 || (v5 = v4, (v4[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
        v5 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
      {
        v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
          v7 = v6;
        else
          v7 = 0;
        if ( IsBotTargetStatusValidCore(v5, v7, 251, -1.0, this->m_pAbility)
          && !CDOTA_BaseNPC::IsMovementImpaired(v5)
          && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v5) )
        {
          v8 = v5->m_pBot;
          if ( v8 != 0 )
          {
            hNearbyAlliedCreeps.m_Size = v8->m_hTarget.m_Index;
            v9 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedCreeps);
            if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 && (v9[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              goto LABEL_19;
          }
        }
      }
      goto LABEL_4;
    default:
      goto LABEL_4;
  }
  do
  {
    while ( 1 )
    {
      v17 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedCreeps.m_Memory.m_pMemory[v14]);
      v18 = v17;
      if ( v17 == 0 )
        break;
      if ( !v17->m_bIsDOTANPC )
        break;
      Health = CBaseEntity::GetHealth(v17);
      if ( Health == (*(v18->_vptr_IHandleEntity + 156))(v18) )
        break;
      if ( (v18[3].m_NetworkTransmitComponent.m_PVSInfo.m_nHeadNode & 2) != 0 )
        break;
      v16 = CEntityHandle::operator CEntityInstance *(&v18[3].m_hEffectEntity.m_Value);
      if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
        break;
      ++v14;
      ++nCreepsToHeal;
      if ( v14 >= hNearbyAlliedCreeps.m_Size )
        goto LABEL_35;
    }
    m_Size = hNearbyAlliedCreeps.m_Size;
    if ( hNearbyAlliedCreeps.m_Size - v14 - 1 > 0 )
    {
      memmove(
        &hNearbyAlliedCreeps.m_Memory.m_pMemory[v14],
        &hNearbyAlliedCreeps.m_Memory.m_pMemory[v14 + 1],
        4LL * (hNearbyAlliedCreeps.m_Size - v14 - 1));
      m_Size = hNearbyAlliedCreeps.m_Size;
    }
    hNearbyAlliedCreeps.m_Size = m_Size - 1;
  }
  while ( v14 < m_Size - 1 );
LABEL_35:
  if ( nCreepsToHeal <= 2 )
  {
LABEL_77:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedCreeps);
LABEL_4:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  else
  {
    v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      v21 = v20;
    else
      v21 = 0;
    v22 = CBaseEntity::GetAbsOrigin(v21);
    SortEHANDLEVectorByLocation(&hNearbyAlliedCreeps, v22, 0);
    this->m_hDesiredTarget.m_Index = hNearbyAlliedCreeps.m_Memory.m_pMemory->m_Index;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedCreeps);
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::UseAbility  (line 372, @0x00000000028b5130, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::UseAbility(
        CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Dazzle *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Dazzle_Weave::CDOTA_Bot_AbilityUsage_Dazzle_Weave  (line 385, @0x00000000028b7620, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_Weave::CDOTA_Bot_AbilityUsage_Dazzle_Weave(
        CDOTA_Bot_AbilityUsage_Dazzle_Weave *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB1B0;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_Dazzle_Weave::GetCurrentUsageDesire  (line 393, @0x00000000028ba920, libserver.so)  // inlines: Get, GetInstance, GetTeamNumber, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
int __fastcall CDOTA_Bot_AbilityUsage_Dazzle_Weave::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Dazzle_Weave *const this)
{
  int LevelSpecialValue; // r12d
  int v4; // r13d
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // rdx
  int iTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v4 = ((*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) + 100.0);
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v9[7].m_CScriptComponent),
    1,
    2,
    AbsOrigin,
    v4,
    0.0,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  if ( iTargetCount > 2 )
  {
    this->m_vDesiredLocation = vTargetLoc;
    return 3;
  }
  else
  {
LABEL_2:
    this->m_vDesiredLocation = vec3_invalid;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Dazzle_Weave::UseAbility  (line 421, @0x00000000028b4480, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Dazzle_Weave::UseAbility(CDOTA_Bot_AbilityUsage_Dazzle_Weave *const this)
{
  CDOTA_Bot_Hero_Dazzle *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


