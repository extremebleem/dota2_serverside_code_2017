
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Lich::CDOTA_Bot_Hero_Lich  (line 21, @0x00000000028c3810, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "lich_frost_nova", "lich_dark_ritual", "lich_chain_frost"
void __fastcall CDOTA_Bot_Hero_Lich::CDOTA_Bot_Hero_Lich(
        CDOTA_Bot_Hero_Lich *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CD230;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityFrostNova = CDOTA_BaseNPC::FindAbilityByName(v6, "lich_frost_nova", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityFrostArmor = CDOTA_BaseNPC::FindAbilityByName(v8, "lich_frost_armor", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityDarkRitual = CDOTA_BaseNPC::FindAbilityByName(v10, "lich_dark_ritual", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityChainFrost = CDOTA_BaseNPC::FindAbilityByName(v12, "lich_chain_frost", 1);
}


// CDOTA_Bot_AbilityUsage_Lich_FrostNova::CDOTA_Bot_AbilityUsage_Lich_FrostNova  (line 34, @0x00000000028c3940, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lich_FrostNova::CDOTA_Bot_AbilityUsage_Lich_FrostNova(
        CDOTA_Bot_AbilityUsage_Lich_FrostNova *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD390;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lich_FrostNova::GetCurrentUsageDesire  (line 41, @0x00000000028c5140, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetInstance, GetManaPercent, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::IsFullyCastable, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander, CDOTA_Commander::GetIllusionState, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_TeamCommander::HasIncomingStun (15 total)
int __fastcall CDOTA_Bot_AbilityUsage_Lich_FrostNova::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lich_FrostNova *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  CDOTA_Bot_Hero_Lich *m_pBot; // r12
  CEntityInstance *v9; // rax
  CDOTABaseAbility *m_pAbility; // rdi
  int v11; // eax
  CEntityInstance *v12; // rax
  const CBaseEntity *v13; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v15; // r14
  int v16; // r13d
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC_Hero *v18; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v20)(CDOTA_Bot_AbilityUsage_Lich_FrostNova *const, _QWORD); // r15
  CDOTA_Commander *v21; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  int v26; // r13d
  float ArmorReductionForDamageType; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v29; // r13d
  int v30; // eax
  __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  int v33; // eax
  __int16 v34; // cx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+10h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      if ( !CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityChainFrost)
        || (m_pBotUsage = this->m_pBot->m_pAbilityChainFrost->m_pBotUsage,
            (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage) == 0) )
      {
        v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v3 == 0 || (v4 = v3, BYTE3(v3[7]._vptr_IHandleEntity) == 0) )
          v4 = 0;
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4) )
        {
          v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
            v6 = v5;
          else
            v6 = 0;
          if ( IsBotTargetStatusValidCore(v4, v6, 251, -1.0, this->m_pAbility)
            && v4 != 0
            && !CDOTA_BaseNPC::IsMovementImpaired(v4)
            && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v4) )
          {
            v26 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
            ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v4, 2);
            m_pEntity = v4->m_pEntity;
            v29 = (v26 * (1.0 - ArmorReductionForDamageType));
            if ( m_pEntity != 0 )
            {
              v30 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v31 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v31 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(this->m_hDesiredTarget.m_Index) = v31 | this->m_hDesiredTarget.m_Index & 0x8000;
              this->m_hDesiredTarget.m_Index = (v30 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
            }
            else
            {
              this->m_hDesiredTarget.m_Index = -1;
            }
            return (v29 > (CBaseEntity::GetHealth(v4) * 0.75)) + 2;
          }
        }
      }
    }
LABEL_14:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  m_pBot = this->m_pBot;
  v9 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
    v9 = 0;
  if ( ((100.0 * *&v9[44].m_iszPrivateVScripts.u.m_Id) / *&v9[44].m_worldGroupId.m_nHashCode) <= 80
    && !CDOTABaseAbility::IsFullyCastable(m_pBot->m_pAbilityDarkRitual) )
  {
    goto LABEL_14;
  }
  m_pAbility = this->m_pAbility;
  hNearbyEnemies.m_Size = 0;
  hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemies.m_Memory.m_pMemory = 0;
  hNearbyEnemies.m_Memory.m_nGrowSize = 0;
  v11 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemies, v11);
  v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    v13 = v12;
  else
    v13 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  SortEHANDLEVectorByLocation(&hNearbyEnemies, AbsOrigin, 0);
  if ( hNearbyEnemies.m_Size <= 0 )
  {
LABEL_33:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
    goto LABEL_14;
  }
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemies.m_Memory.m_pMemory[v15]);
    v18 = v17;
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v17[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 3) != 0 || this->m_bUseOnCreeps )
      {
        if ( (m_Id & 1) == 0
          || (v20 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
              v21 = DOTACommander(),
              IllusionState = CDOTA_Commander::GetIllusionState(v21, v18),
              v20(this, IllusionState) != 0) )
        {
          v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v23 == 0 || (v24 = v23, BYTE3(v23[7]._vptr_IHandleEntity) == 0) )
            v24 = 0;
          if ( IsBotTargetStatusValidCore(v18, v24, 251, -1.0, this->m_pAbility) )
            break;
        }
      }
    }
    ++v16;
    ++v15;
    if ( hNearbyEnemies.m_Size <= v16 )
      goto LABEL_33;
  }
  v32 = v18->m_pEntity;
  if ( v32 != 0 )
  {
    v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
    v34 = 0x7FFF;
    if ( v32->m_EHandle.m_Index != -1 )
      v34 = v32->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v34 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v33 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Lich_FrostNova::UseAbility  (line 98, @0x00000000028c0f40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lich_FrostNova::UseAbility(CDOTA_Bot_AbilityUsage_Lich_FrostNova *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lich *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Lich_FrostArmor::CDOTA_Bot_AbilityUsage_Lich_FrostArmor  (line 111, @0x00000000028c3970, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lich_FrostArmor::CDOTA_Bot_AbilityUsage_Lich_FrostArmor(
        CDOTA_Bot_AbilityUsage_Lich_FrostArmor *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD3F0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lich_FrostArmor::GetCurrentUsageDesire  (line 118, @0x00000000028c55d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActiveModeDesire, GetEHandle, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GetUnit, IsFullyCastable, IsTrained, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsFullyCastable, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_lich_frost_armor"
int __fastcall CDOTA_Bot_AbilityUsage_Lich_FrostArmor::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lich_FrostArmor *const this)
{
  CDOTA_Bot_Hero_Lich *m_pBot; // rbx
  CDOTABaseAbility *m_pAbility; // rdi
  int v4; // eax
  CDOTABaseAbility *m_pAbilityChainFrost; // r12
  CDOTABaseAbility *m_pAbilityFrostNova; // r12
  CDOTA_Bot_Hero_Lich *v7; // rbx
  __int64 v8; // r13
  int v9; // r12d
  CEntityInstance *v10; // rax
  float v11; // ebx
  __int64 v12; // r13
  int v13; // r12d
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v17; // ebx
  int m_iUnitType; // eax
  int v19; // edx
  CDOTA_BaseNPC *v20; // rbx
  CEntityInstance *v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int16 v24; // cx
  __int16 m_Index; // dx
  bool v26; // zf
  CEntityInstance *v27; // rax
  int v28; // r12d
  CDOTA_BaseNPC_Hero *pCurrentTarget; // [rsp+8h] [rbp-58h]
  float pCurrentTargeta; // [rsp+8h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+10h] [rbp-50h] BYREF

  hEntities.m_Size = 0;
  m_pBot = this->m_pBot;
  hEntities.m_Memory.m_pMemory = 0;
  m_pAbility = this->m_pAbility;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v4 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hEntities, v4);
  m_pAbilityChainFrost = m_pBot->m_pAbilityChainFrost;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityChainFrost) >= 0
    && (*(m_pAbilityChainFrost->_vptr_IHandleEntity + 245))(m_pAbilityChainFrost) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityChainFrost)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityChainFrost, -1)
    && (*(m_pBot->m_pAbilityChainFrost->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBot->m_pAbilityChainFrost->m_pBotUsage) != 0 )
  {
    goto LABEL_54;
  }
  m_pAbilityFrostNova = m_pBot->m_pAbilityFrostNova;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFrostNova) >= 0
    && (*(m_pAbilityFrostNova->_vptr_IHandleEntity + 245))(m_pAbilityFrostNova) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFrostNova)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFrostNova, -1)
    && (*(m_pBot->m_pAbilityFrostNova->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBot->m_pAbilityFrostNova->m_pBotUsage) != 0 )
  {
    goto LABEL_54;
  }
  if ( CDOTABaseAbility::IsFullyCastable(m_pBot->m_pAbilityChainFrost) )
  {
    v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v27 == 0 || BYTE3(v27[7]._vptr_IHandleEntity) == 0 )
      v27 = 0;
    pCurrentTargeta = *&v27[44].m_iszPrivateVScripts.u.m_Id;
    v28 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    if ( ((*(m_pBot->m_pAbilityChainFrost->_vptr_IHandleEntity + 273))(m_pBot->m_pAbilityChainFrost, 0xFFFFFFFFLL) + v28) > pCurrentTargeta )
      goto LABEL_54;
  }
  v7 = this->m_pBot;
  if ( v7->m_fModeDesires[(*(v7->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v7->m_pActiveBotMode)] >= 0.75
    && ((*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4
     || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2) )
  {
    goto LABEL_54;
  }
  v8 = 0;
  v9 = 0;
  pCurrentTarget = 0;
  if ( hEntities.m_Size <= 0 )
  {
LABEL_8:
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
      v10 = 0;
    v11 = *&v10[44].m_iszPrivateVScripts.u.m_Id;
    if ( v11 <= (3 * (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL))
      || hEntities.m_Size <= 0 )
    {
LABEL_54:
      this->m_hDesiredTarget.m_Index = -1;
      v17 = 0;
      goto LABEL_55;
    }
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v12]);
      v15 = v14;
      if ( v14 != 0
        && BYTE3(v14[7]._vptr_IHandleEntity) != 0
        && (v14[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && *&v14[45].m_worldGroupId.m_nHashCode != 0
        && CDOTA_BaseNPC::FindModifierByName(v14, "modifier_lich_frost_armor", 0) == 0 )
      {
        break;
      }
      ++v13;
      ++v12;
      if ( hEntities.m_Size <= v13 )
        goto LABEL_54;
    }
    m_pEntity = v15->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_20;
LABEL_38:
    v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v24 = 0x7FFF;
    else
      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    m_Index = this->m_hDesiredTarget.m_Index;
    v17 = 3;
    hEntities.m_Size = 0;
    LOWORD(this->m_hDesiredTarget.m_Index) = v24 | m_Index & 0x8000;
    v26 = (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_hDesiredTarget.m_Index = (v23 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    if ( !v26 )
      return v17;
LABEL_41:
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    return v17;
  }
  do
  {
    while ( 1 )
    {
      v21 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v8]);
      v20 = v21;
      if ( v21 == 0 )
        goto LABEL_29;
      if ( BYTE3(v21[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_29;
      if ( (v21[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        goto LABEL_29;
      v22 = *&v21[45].m_worldGroupId.m_nHashCode;
      if ( v22 == 0 )
        goto LABEL_29;
      if ( (*(**(v22 + 34056) + 16LL))(*(v22 + 34056)) != 2 )
        break;
      if ( CDOTA_BaseNPC::FindModifierByName(v20, "modifier_lich_frost_armor", 0) == 0 )
      {
        if ( pCurrentTarget == 0 )
          goto LABEL_63;
        m_iUnitType = pCurrentTarget->m_pBot->CDOTA_BaseNPC_Additive::CDOTA_BaseNPC::m_iUnitType;
        if ( (m_iUnitType & 0x10) == 0 )
        {
          v19 = v20->m_pBot->m_iUnitType;
          if ( (v19 & 0x10) == 0 )
          {
            if ( (m_iUnitType & 0x20) == 0 )
            {
              if ( (v19 & 0x20) == 0 )
                v20 = pCurrentTarget;
              pCurrentTarget = v20;
            }
            goto LABEL_29;
          }
LABEL_63:
          pCurrentTarget = v20;
        }
      }
LABEL_29:
      ++v9;
      ++v8;
      if ( hEntities.m_Size <= v9 )
        goto LABEL_36;
    }
    ++v9;
    ++v8;
  }
  while ( hEntities.m_Size > v9 );
LABEL_36:
  if ( pCurrentTarget == 0 )
    goto LABEL_8;
  m_pEntity = pCurrentTarget->m_pEntity;
  if ( m_pEntity != 0 )
    goto LABEL_38;
LABEL_20:
  this->m_hDesiredTarget.m_Index = -1;
  v17 = 3;
LABEL_55:
  hEntities.m_Size = 0;
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    goto LABEL_41;
  return v17;
}


// CDOTA_Bot_AbilityUsage_Lich_FrostArmor::UseAbility  (line 201, @0x00000000028c1020, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lich_FrostArmor::UseAbility(CDOTA_Bot_AbilityUsage_Lich_FrostArmor *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lich *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Lich_DarkRitual::CDOTA_Bot_AbilityUsage_Lich_DarkRitual  (line 214, @0x00000000028c39a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lich_DarkRitual::CDOTA_Bot_AbilityUsage_Lich_DarkRitual(
        CDOTA_Bot_AbilityUsage_Lich_DarkRitual *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD450;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lich_DarkRitual::GetCurrentUsageDesire  (line 221, @0x00000000028cae30, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMaxMana, GetSerialNumber, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, Length, LookupEntity, Max<float>, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator-, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyCreeps, SortEHANDLEVectorByHealth, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CBaseEntity::GetHealth, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_PlayerResource::GetTeam, CBaseEntity::GetDistanceToEntity, _Unwind_Resume
// strings: "health_conversion", "modifier_boots_of_travel_incoming"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Lich_DarkRitual::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lich_DarkRitual *const this)
{
  CDOTA_Bot_Hero_Lich *m_pBot; // rbx
  CEntityInstance *v3; // rax
  float v4; // xmm0_4
  int v5; // ebx
  CDOTA_Bot_Hero_Lich *v6; // rdi
  int v7; // edx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v17; // r13
  unsigned __int8 m_Value; // r13
  CEntityInstance *v19; // rax
  int v20; // r13d
  int v21; // r13d
  CEntityInstance *v22; // rax
  const Vector *v23; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v25; // cx
  int v26; // eax
  CEntityInstance *v28; // rdx
  float v29; // xmm0_4
  int v30; // edx
  CEntityInstance *v31; // rax
  float v32; // xmm0_4
  int v33; // eax
  int Team; // r13d
  CEntityInstance *v35; // rax
  CEntityInstance *v36; // rax
  const CBaseEntity *v37; // rdi
  CEntityIdentity *v38; // rax
  int v39; // edx
  __int16 v40; // cx
  const Vector *AbsOrigin; // [rsp+8h] [rbp-88h]
  CBaseEntity *v42; // [rsp+10h] [rbp-80h]
  float v43; // [rsp+10h] [rbp-80h]
  float DistanceToEntity; // [rsp+10h] [rbp-80h]
  int iBestManaReturned; // [rsp+1Ch] [rbp-74h]
  int iManaNeededToCast; // [rsp+28h] [rbp-68h]
  int iHealthConversionPercent; // [rsp+2Ch] [rbp-64h]
  int iHealthConversionPercentc; // [rsp+2Ch] [rbp-64h]
  float iHealthConversionPercenta; // [rsp+2Ch] [rbp-64h]
  float iHealthConversionPercentb; // [rsp+2Ch] [rbp-64h]
  EHANDLE hBestCreep; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyCreeps; // [rsp+40h] [rbp-50h] BYREF

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pAbilityFrostNova->_vptr_IHandleEntity + 245))(m_pBot->m_pAbilityFrostNova) == 0 )
    goto LABEL_2;
  iHealthConversionPercentb = (*(m_pBot->m_pAbilityFrostNova->_vptr_IHandleEntity + 273))(
                                m_pBot->m_pAbilityFrostNova,
                                0xFFFFFFFFLL);
  v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v31 == 0 || BYTE3(v31[7]._vptr_IHandleEntity) == 0 )
    v31 = 0;
  v32 = iHealthConversionPercentb - *&v31[44].m_iszPrivateVScripts.u.m_Id;
  if ( v32 >= 0.0 )
  {
    v33 = 0;
    if ( v32 >= 0 )
      v33 = v32;
    iManaNeededToCast = v33;
  }
  else
  {
LABEL_2:
    iManaNeededToCast = 0;
  }
  if ( (*(m_pBot->m_pAbilityChainFrost->_vptr_IHandleEntity + 245))(m_pBot->m_pAbilityChainFrost) != 0 )
  {
    iHealthConversionPercenta = (*(m_pBot->m_pAbilityChainFrost->_vptr_IHandleEntity + 273))(
                                  m_pBot->m_pAbilityChainFrost,
                                  0xFFFFFFFFLL);
    v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
      v28 = v3;
    else
      v28 = 0;
    v29 = iHealthConversionPercenta - *&v28[44].m_iszPrivateVScripts.u.m_Id;
    v30 = 0;
    if ( v29 >= 0.0 )
      v30 = v29;
    if ( iManaNeededToCast >= v30 )
      v30 = iManaNeededToCast;
    iManaNeededToCast = v30;
  }
  else
  {
    v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  }
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    v4 = *&v3[44].m_worldGroupId.m_nHashCode;
  }
  else
  {
    LODWORD(v4) = 7496;
    v3 = 0;
  }
  v5 = (v4 - *&v3[44].m_iszPrivateVScripts.u.m_Id);
  iHealthConversionPercent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                               this->m_pAbility,
                               "health_conversion",
                               -1,
                               1);
  if ( v5 <= 0 && (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 1 )
  {
LABEL_55:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v6 = this->m_pBot;
  hNearbyCreeps.m_Size = 0;
  hNearbyCreeps.m_Memory.m_pMemory = 0;
  hNearbyCreeps.m_Memory.m_nAllocationCount = 0;
  hNearbyCreeps.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyCreeps(v6, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyCreeps, 0.0);
  SortEHANDLEVectorByHealth(&hNearbyCreeps);
  hBestCreep.m_Index = -1;
  v7 = hNearbyCreeps.m_Size - 1;
  if ( hNearbyCreeps.m_Size - 1 < 0 )
  {
LABEL_34:
    if ( CEntityHandle::operator CEntityInstance *(&hBestCreep) != 0 )
    {
      this->m_hDesiredTarget = hBestCreep;
      v26 = 2;
      goto LABEL_36;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
    goto LABEL_55;
  }
  iBestManaReturned = 0;
  v8 = 4LL * v7;
  v9 = 4 * (v7 - v7) - 4;
  while ( 1 )
  {
    v10 = &hNearbyCreeps.m_Memory.m_pMemory[v8 / 4];
    m_Index = hNearbyCreeps.m_Memory.m_pMemory[v8 / 4].m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_11;
    v12 = v10->m_Index;
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
    if ( v13 == 0 )
      goto LABEL_11;
    v14 = &v13[v12 & 0x1FF];
    if ( v14 == 0 )
      goto LABEL_11;
    if ( m_Index != v14->m_EHandle.m_Index )
      goto LABEL_11;
    m_pInstance = v14->m_pInstance;
    if ( v14->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
      goto LABEL_11;
    if ( m_pInstance->m_iIsControllableByPlayer64.m_Value != 0 )
    {
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_pInstance->m_nControllingPlayerID);
      v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v35 == 0 || BYTE3(v35[7]._vptr_IHandleEntity) == 0 )
        v35 = 0;
      if ( Team == HIBYTE(v35[7].m_CScriptComponent) )
        goto LABEL_11;
    }
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_boots_of_travel_incoming", 0);
    v17 = ModifierByName;
    if ( ModifierByName != 0 && CDOTA_Buff::GetCaster(ModifierByName) != 0 )
    {
      m_Value = CDOTA_Buff::GetCaster(v17)->m_iTeamNum.m_Value;
      v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v19 == 0 || BYTE3(v19[7]._vptr_IHandleEntity) == 0 )
        v19 = 0;
      if ( m_Value == HIBYTE(v19[7].m_CScriptComponent) )
        goto LABEL_11;
    }
    v20 = iHealthConversionPercent * CBaseEntity::GetHealth(m_pInstance) / 100;
    v21 = v20 - (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
      break;
    if ( v21 <= iBestManaReturned )
      goto LABEL_11;
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
      v42 = v22;
    else
      v42 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v23 = CBaseEntity::GetAbsOrigin(v42);
    v43 = fsqrt(
            (((v23->x - AbsOrigin->x) * (v23->x - AbsOrigin->x)) + ((v23->y - AbsOrigin->y) * (v23->y - AbsOrigin->y)))
          + ((v23->z - AbsOrigin->z) * (v23->z - AbsOrigin->z)));
    if ( ((*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) * 1.5) <= v43 )
      goto LABEL_11;
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v25 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v8 -= 4LL;
      iBestManaReturned = v21;
      hBestCreep.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v25 & 0x7FFF;
      if ( v8 == v9 )
        goto LABEL_34;
    }
    else
    {
      hBestCreep.m_Index = -1;
      iBestManaReturned = v21;
LABEL_11:
      v8 -= 4LL;
      if ( v8 == v9 )
        goto LABEL_34;
    }
  }
  if ( iManaNeededToCast > v21 )
    goto LABEL_11;
  v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
    v37 = v36;
  else
    v37 = 0;
  DistanceToEntity = CBaseEntity::GetDistanceToEntity(v37, m_pInstance);
  if ( (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) <= DistanceToEntity )
    goto LABEL_11;
  v38 = m_pInstance->m_pEntity;
  if ( v38 != 0 )
  {
    v39 = (v38->m_EHandle.m_Index >> 15) - (v38->m_flags & 1);
    v40 = 0x7FFF;
    if ( v38->m_EHandle.m_Index != -1 )
      v40 = v38->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v40 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v39 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    v26 = 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    v26 = 3;
  }
LABEL_36:
  iHealthConversionPercentc = v26;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
  return iHealthConversionPercentc;
}


// CDOTA_Bot_AbilityUsage_Lich_DarkRitual::UseAbility  (line 302, @0x00000000028c0760, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lich_DarkRitual::UseAbility(CDOTA_Bot_AbilityUsage_Lich_DarkRitual *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lich *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Lich_ChainFrost::CDOTA_Bot_AbilityUsage_Lich_ChainFrost  (line 315, @0x00000000028c39d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Lich_ChainFrost::CDOTA_Bot_AbilityUsage_Lich_ChainFrost(
        CDOTA_Bot_AbilityUsage_Lich_ChainFrost *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CD4B0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Lich_ChainFrost::GetCurrentUsageDesire  (line 322, @0x00000000028cb4b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, InState, IsInvulnerable, IsMagicImmune, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyCreeps, CBaseEntity::GetHealth, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::HasBlink, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "jump_range"
int __fastcall CDOTA_Bot_AbilityUsage_Lich_ChainFrost::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Lich_ChainFrost *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  int v3; // eax
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r15
  CDOTA_Bot *v6; // rbx
  CDOTABaseAbility *v7; // rdi
  int LevelSpecialValue; // eax
  int m_Size; // r14d
  __int64 v10; // r12
  int v11; // ebx
  int v12; // r13d
  CEntityInstance *v13; // rax
  int v14; // ebx
  int v15; // eax
  int v16; // r13d
  __int64 v17; // r12
  int v18; // r13d
  int v19; // r14d
  CEntityInstance *v20; // rax
  CEntityInstance *v21; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_Bot *v23; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v25; // eax
  __int16 v26; // cx
  int v27; // ebx
  float v29; // xmm1_4
  int iBounceDamage; // [rsp+14h] [rbp-BCh]
  __int64 v32; // [rsp+30h] [rbp-A0h]
  int i; // [rsp+38h] [rbp-98h]
  int iSplitDamage; // [rsp+3Ch] [rbp-94h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+40h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyHeroes; // [rsp+60h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyCreeps; // [rsp+80h] [rbp-50h] BYREF

  m_pAbility = this->m_pAbility;
  hEnemyHeroes.m_Size = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hEnemyHeroes.m_Memory.m_pMemory = 0;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemyHeroes, v3 * 1.5);
  if ( hEnemyHeroes.m_Size <= 0 )
  {
LABEL_40:
    v27 = 0;
    this->m_hDesiredTarget.m_Index = -1;
    goto LABEL_35;
  }
  v32 = 0;
  i = 0;
  while ( 1 )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v32]);
    v5 = v4;
    if ( v4 == 0 )
      goto LABEL_39;
    if ( BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_39;
    if ( (v4[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      goto LABEL_39;
    v6 = *&v4[45].m_worldGroupId.m_nHashCode;
    if ( v6 == 0 )
      goto LABEL_39;
    hNearbyHeroes.m_Size = 0;
    hNearbyHeroes.m_Memory.m_pMemory = 0;
    hNearbyHeroes.m_Memory.m_nAllocationCount = 0;
    v7 = this->m_pAbility;
    hNearbyHeroes.m_Memory.m_nGrowSize = 0;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "jump_range", -1, 1);
    CDOTA_Bot::GetNearbyHeroes(
      v6,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
      &hNearbyHeroes,
      LevelSpecialValue * 1.5);
    hNearbyCreeps.m_Size = 0;
    hNearbyCreeps.m_Memory.m_pMemory = 0;
    hNearbyCreeps.m_Memory.m_nAllocationCount = 0;
    hNearbyCreeps.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::GetNearbyCreeps(v6, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyCreeps, 0.0);
    m_Size = hNearbyHeroes.m_Size;
    if ( hNearbyCreeps.m_Size <= 0 )
    {
      v12 = 0;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = CEntityHandle::operator CEntityInstance *(&hNearbyCreeps.m_Memory.m_pMemory[v10]);
        if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
          v12 -= ((*(v13->_vptr_IHandleEntity + 408))(v13) == 0) - 1;
        ++v11;
        ++v10;
      }
      while ( hNearbyCreeps.m_Size > v11 );
    }
    v14 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "damage", -1, 1);
    iBounceDamage = v14;
    v15 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "jumps", -1, 1);
    v16 = m_Size + v12;
    iSplitDamage = v14;
    if ( v16 > 1 )
      iSplitDamage = v14 * v15 / v16;
    if ( hNearbyHeroes.m_Size <= 0 )
    {
      v29 = 0.0;
    }
    else
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = CEntityHandle::operator CEntityInstance *(&hNearbyHeroes.m_Memory.m_pMemory[v17]);
        v21 = v20;
        if ( v20 != 0
          && BYTE3(v20[7]._vptr_IHandleEntity) != 0
          && (v20[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && (*(v20->_vptr_IHandleEntity + 408))(v20) != 0 )
        {
          vptr_IHandleEntity = v21[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
            && LOBYTE(v21[71]._vptr_IHandleEntity) == 0
            && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
          {
            if ( iSplitDamage > CBaseEntity::GetHealth(v21) )
            {
              v23 = *&v21[45].m_worldGroupId.m_nHashCode;
              if ( v23 != 0
                && !CDOTA_Bot::IsAboutToDie(v23)
                && !CDOTA_Bot::HasBlink(*&v21[45].m_worldGroupId.m_nHashCode, 1) )
              {
                goto LABEL_30;
              }
            }
            v19 += iSplitDamage;
          }
        }
        ++v18;
        ++v17;
      }
      while ( hNearbyHeroes.m_Size > v18 );
      v29 = v19;
    }
    if ( v29 >= (iBounceDamage * 2.5) )
      break;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyHeroes);
LABEL_39:
    ++i;
    ++v32;
    if ( hEnemyHeroes.m_Size <= i )
      goto LABEL_40;
  }
LABEL_30:
  m_pEntity = v5->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v26 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v26 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v25 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  v27 = 3;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyHeroes);
LABEL_35:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
  return v27;
}


// CDOTA_Bot_AbilityUsage_Lich_ChainFrost::UseAbility  (line 390, @0x00000000028c0680, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Lich_ChainFrost::UseAbility(CDOTA_Bot_AbilityUsage_Lich_ChainFrost *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Lich *m_pBot; // r14
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


