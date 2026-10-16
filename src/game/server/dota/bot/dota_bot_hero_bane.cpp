
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Bane::CDOTA_Bot_Hero_Bane  (line 21, @0x00000000028ae5e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "bane_brain_sap"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Bane::CDOTA_Bot_Hero_Bane(
        CDOTA_Bot_Hero_Bane *const this,
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
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C85B0;
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
  this->m_pAbilityEnfeeble = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "bane_enfeeble", 1);
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
  this->m_pAbilityBrainSap = CDOTA_BaseNPC::FindAbilityByName(v12, "bane_brain_sap", 1);
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
  this->m_pAbilityNightmare = CDOTA_BaseNPC::FindAbilityByName(v16, "bane_nightmare", 1);
  v17 = this->m_hUnit.m_Index;
  if ( v17 + 2 <= 1
    || (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v19 = &v18[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v17 != v19->m_EHandle.m_Index
    || (v20 = v19->m_pInstance, v19->m_pInstance == 0)
    || !v20->m_bIsDOTANPC )
  {
    v20 = 0;
  }
  this->m_pAbilityFiendsGrip = CDOTA_BaseNPC::FindAbilityByName(v20, "bane_fiends_grip", 1);
}


// CDOTA_Bot_Hero_Bane::CreateMode  (line 32, @0x00000000028aadb0, libserver.so)  // inlines: CDOTA_BotMode_Attack_Bane
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Bane::CreateMode(CDOTA_Bot_Hero_Bane *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Bane (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42C86B0;  // vptr: CDOTA_BotMode_Attack_Bane
  return v4;
}


// CDOTA_Bot_Hero_Bane::GetMaxRoamDistance  (line 47, @0x00000000028ab860, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Bane::GetMaxRoamDistance(CDOTA_Bot_Hero_Bane *const this)
{
  CDOTABaseAbility *m_pAbilityFiendsGrip; // rbx

  m_pAbilityFiendsGrip = this->m_pAbilityFiendsGrip;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFiendsGrip) >= 0
    && (*(m_pAbilityFiendsGrip->_vptr_IHandleEntity + 245))(m_pAbilityFiendsGrip) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFiendsGrip)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFiendsGrip, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BotMode_Attack_Bane::GetDesire  (line 59, @0x00000000028aaf20, libserver.so)
// calls: CDOTA_BotMode_Attack::GetDesire
float __fastcall CDOTA_BotMode_Attack_Bane::GetDesire(CDOTA_BotMode_Attack_Bane *const this)
{
  CDOTA_Bot *m_pBot; // r12

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 2
    && *(*&m_pBot[1].m_bForceIdle + 788LL) != 0 )
  {
    return 0.89999998;
  }
  else
  {
    return CDOTA_BotMode_Attack::GetDesire(this);
  }
}


// CDOTA_Bot_AbilityUsage_Bane_Enfeeble::CDOTA_Bot_AbilityUsage_Bane_Enfeeble  (line 84, @0x00000000028ae830, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bane_Enfeeble::CDOTA_Bot_AbilityUsage_Bane_Enfeeble(
        CDOTA_Bot_AbilityUsage_Bane_Enfeeble *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8750;  // vptr: CDOTA_Bot_AbilityUsage_Bane_Enfeeble
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Bane_Enfeeble::GetCurrentUsageDesire  (line 91, @0x00000000028afca0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bane_Enfeeble::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bane_Enfeeble *const this)
{
  unsigned int v2; // ecx
  CDOTABaseAbility *m_pAbility; // rdi
  int v5; // eax
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // rax
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rdx
  __int64 v13; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+0h] [rbp-30h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 2;
  if ( v2 > 0xB || ((1LL << v2) & 0xE01) == 0 )
    goto LABEL_3;
  m_pAbility = this->m_pAbility;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v5 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v5);
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_25:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_3:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  m_pMemory = hEntities.m_Memory.m_pMemory;
  while ( 1 )
  {
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[m_pMemory->m_Index & 0x1FF];
        if ( v11 != 0 && m_pMemory->m_Index == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v13 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
            if ( v13 != 0 && (*(v13 + 168) & 0x10) != 0 )
              break;
          }
        }
      }
    }
    if ( ++m_pMemory == &hEntities.m_Memory.m_pMemory[hEntities.m_Size - 1 + 1] )
      goto LABEL_25;
  }
  m_pEntity = m_pInstance->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v16 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v16 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v15 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Bane_Enfeeble::UseAbility  (line 124, @0x00000000028abeb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Bane_Enfeeble::UseAbility(CDOTA_Bot_AbilityUsage_Bane_Enfeeble *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Bane *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Bane_BrainSap::CDOTA_Bot_AbilityUsage_Bane_BrainSap  (line 137, @0x00000000028ae860, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bane_BrainSap::CDOTA_Bot_AbilityUsage_Bane_BrainSap(
        CDOTA_Bot_AbilityUsage_Bane_BrainSap *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C87B0;  // vptr: CDOTA_Bot_AbilityUsage_Bane_BrainSap
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Bane_BrainSap::GetCurrentUsageDesire  (line 144, @0x00000000028b0630, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHealthDeficit, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTABaseAbility::IsFullyCastable, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CBaseEntity::GetHealth (15 total)
// globals: jpt_28B067C, CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bane_BrainSap::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bane_BrainSap *const this)
{
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rdi
  CDOTABaseAbility *m_pAbility; // rdi
  int v6; // eax
  CEntityInstance *v7; // rax
  const CBaseEntity *v8; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v10; // r13
  int v11; // r12d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  unsigned __int8 (__fastcall *v18)(CDOTA_Bot_AbilityUsage_Bane_BrainSap *const, _QWORD); // r15
  CDOTA_Commander *v19; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rsi
  CDOTA_Bot_Hero_Bane *m_pBot; // rdi
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // rsi
  CDOTA_Bot_Hero_Bane *v26; // r12
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // r13
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rdi
  int v31; // r12d
  int v32; // r13d
  CEntityInstance *v33; // rax
  const CBaseEntity *v34; // r13
  int v35; // r12d
  int v36; // r12d
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v39; // rax
  const CEntityHandle *v40; // rdi
  CEntityInstance *v41; // rax
  CDOTA_BaseNPC *v42; // r13
  CEntityInstance *v43; // rax
  CDOTA_BaseNPC *v44; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v46; // eax
  __int16 v47; // cx
  float v48; // [rsp+8h] [rbp-D8h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEntities; // [rsp+10h] [rbp-D0h] BYREF
  unsigned __int64 v50; // [rsp+A8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
    case 5u:
    case 6u:
      v31 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      v32 = (*(this->m_pBot->m_pAbilityFiendsGrip->_vptr_IHandleEntity + 273))(
              this->m_pBot->m_pAbilityFiendsGrip,
              0xFFFFFFFFLL);
      v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
      {
        if ( *&v33[44].m_iszPrivateVScripts.u.m_Id <= (v32 + 2 * v31) )
          goto LABEL_3;
        v34 = v33;
      }
      else
      {
        if ( (v32 + 2 * v31) >= 0.0 )
          goto LABEL_3;
        v34 = 0;
      }
      v35 = (*(v34->_vptr_IHandleEntity + 156))(v34);
      v36 = v35 - CBaseEntity::GetHealth(v34);
      if ( (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility) >= v36 )
        goto LABEL_3;
      for ( i = 0; ; ++i )
      {
        if ( i >= CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
          goto LABEL_3;
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( i < OpposingTeamCommander->m_BotList.m_Size && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
        {
          v39 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v40 = 0;
          if ( i < v39->m_BotList.m_Size )
            v40 = v39->m_BotList.m_Memory.m_pMemory[i];
          v41 = CEntityHandle::operator CEntityInstance *(v40 + 39);
          if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
            v42 = v41;
          else
            v42 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v42) )
          {
            v48 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) + 100.0;
            v43 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
              v44 = v43;
            else
              v44 = 0;
            if ( IsBotTargetStatusValidCore(v42, v44, 251, v48, this->m_pAbility) )
              break;
          }
        }
      }
      if ( v42 != 0 && (m_pEntity = v42->m_pEntity) != 0 )
      {
        v46 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v47 = 0x7FFF;
        else
          v47 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v47 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v46 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        return 1;
      }
      else
      {
        this->m_hDesiredTarget.m_Index = -1;
        return 1;
      }
    case 2u:
      if ( CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityFiendsGrip) )
        goto LABEL_3;
      m_pBot = this->m_pBot;
      if ( m_pBot->m_pAbilityFiendsGrip->m_bChanneling )
        goto LABEL_3;
      v24 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
      if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
        v25 = v24;
      else
        v25 = 0;
      if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v25) )
        goto LABEL_3;
      v26 = this->m_pBot;
      v27 = CEntityHandle::operator CEntityInstance *(&v26->m_hUnit);
      if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
        v28 = v27;
      else
        v28 = 0;
      v29 = CEntityHandle::operator CEntityInstance *(&v26->m_hTarget);
      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
        v30 = v29;
      else
        v30 = 0;
      if ( !IsBotTargetStatusValidCore(v30, v28, 251, -1.0, this->m_pAbility) )
        goto LABEL_3;
      this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
      return 2;
    case 4u:
      v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
        v4 = v3;
      else
        v4 = 0;
      if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v4) >= 5.0 )
        goto LABEL_3;
      m_pAbility = this->m_pAbility;
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_nAllocationCount = 32;
      hEntities.m_Memory.m_nGrowSize = 0x80000000;
      hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
      v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
      CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v6);
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        v8 = v7;
      else
        v8 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
      if ( hEntities.m_Size <= 0 )
        goto LABEL_2;
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v12 = &hEntities.m_Memory.m_pMemory[v10];
        m_Index = hEntities.m_Memory.m_pMemory[v10].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
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
        ++v11;
        ++v10;
        if ( hEntities.m_Size <= v11 )
        {
LABEL_2:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
          goto LABEL_3;
        }
      }
      this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v10].m_Index;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
      return 1;
    default:
LABEL_3:
      this->m_hDesiredTarget.m_Index = -1;
      return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Bane_BrainSap::UseAbility  (line 223, @0x00000000028abf90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Bane_BrainSap::UseAbility(CDOTA_Bot_AbilityUsage_Bane_BrainSap *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Bane *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Bane_Nightmare::CDOTA_Bot_AbilityUsage_Bane_Nightmare  (line 236, @0x00000000028ae890, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bane_Nightmare::CDOTA_Bot_AbilityUsage_Bane_Nightmare(
        CDOTA_Bot_AbilityUsage_Bane_Nightmare *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8810;  // vptr: CDOTA_Bot_AbilityUsage_Bane_Nightmare
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Bane_Nightmare::GetCurrentUsageDesire  (line 243, @0x00000000028b0cd0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_Bot::IsAboutToDie, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander, CDOTA_Commander::GetIllusionState, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (14 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bane_Nightmare::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bane_Nightmare *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v3; // xmm0
  int v4; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  int v7; // eax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rsi
  CDOTA_Bot *m_pBot; // rax
  CEntityInstance *v14; // rax
  CDOTA_Bot *v15; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rdi
  CDOTABaseAbility *v21; // rdi
  int v22; // eax
  CEntityInstance *v23; // rax
  const CBaseEntity *v24; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v26; // r13
  int v27; // r12d
  CHandle<CBaseEntity> *v28; // rdx
  uint32 m_Index; // eax
  __int16 v30; // cx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  unsigned __int8 (__fastcall *v34)(CDOTA_Bot_AbilityUsage_Bane_Nightmare *const, _QWORD); // r15
  CDOTA_Commander *v35; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // rsi
  float v39; // xmm0_4
  CEntityHandle v40; // [rsp+10h] [rbp-E0h] BYREF
  float fChannelTimeRemaining; // [rsp+14h] [rbp-DCh] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+18h] [rbp-D8h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEntities; // [rsp+20h] [rbp-D0h] BYREF
  unsigned __int64 v44; // [rsp+B8h] [rbp-38h]

  pChannelTarget = 0;
  v44 = __readfsqword(0x28u);
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v3.m128i_i32 = v4 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v3, &pChannelTarget, &fChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, pChannelTarget) )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    if ( IsBotTargetStatusValidCore(pChannelTarget, v6, 251, -1.0, this->m_pAbility)
      && SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) >= 0 )
    {
      v39 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      if ( fChannelTimeRemaining > v39 )
      {
        if ( pChannelTarget == 0 )
          goto LABEL_60;
        m_pEntity = pChannelTarget->m_pEntity;
        if ( m_pEntity == 0 )
          goto LABEL_60;
LABEL_26:
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v18 = 0x7FFF;
        else
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v18 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v17 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        return 3;
      }
    }
  }
  v7 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v7 != 4 )
  {
    if ( v7 == 18 )
    {
      v40.m_Index = this->m_pBot->m_hTarget.m_Index;
      v9 = CEntityHandle::operator CEntityInstance *(&v40);
      if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 || (v10 = v9, (v9[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
        v10 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v10) )
      {
        v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
          v12 = v11;
        else
          v12 = 0;
        if ( IsBotTargetStatusValidCore(pChannelTarget, v12, 251, -1.0, this->m_pAbility) )
        {
          m_pBot = v10->m_pBot;
          if ( m_pBot != 0 )
          {
            v40.m_Index = m_pBot->m_hTarget.m_Index;
            v14 = CEntityHandle::operator CEntityInstance *(&v40);
            if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 && (v14[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v15 = *&v14[45].m_worldGroupId.m_nHashCode;
              if ( v15 != 0 && CDOTA_Bot::IsAboutToDie(v15) )
              {
                m_pEntity = v10->m_pEntity;
                if ( m_pEntity == 0 )
                {
LABEL_60:
                  this->m_hDesiredTarget.m_Index = -1;
                  return 3;
                }
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_10:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
    v20 = v19;
  else
    v20 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v20) >= 5.0 )
    goto LABEL_10;
  v21 = this->m_pAbility;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_nAllocationCount = 32;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  v22 = (*(v21->_vptr_IHandleEntity + 226))(v21, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v22);
  v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
    v24 = v23;
  else
    v24 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
  SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_64:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    goto LABEL_10;
  }
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    v28 = &hEntities.m_Memory.m_pMemory[v26];
    m_Index = hEntities.m_Memory.m_pMemory[v26].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v30 = v28->m_Index;
      v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
      if ( v31 != 0 )
      {
        v32 = &v31[v30 & 0x1FF];
        if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
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
                break;
            }
          }
        }
      }
    }
    ++v27;
    ++v26;
    if ( hEntities.m_Size <= v27 )
      goto LABEL_64;
  }
  this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v26].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  return 1;
}


// CDOTA_Bot_AbilityUsage_Bane_Nightmare::UseAbility  (line 310, @0x00000000028abdd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Bane_Nightmare::UseAbility(CDOTA_Bot_AbilityUsage_Bane_Nightmare *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Bane *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::CDOTA_Bot_AbilityUsage_Bane_FiendsGrip  (line 323, @0x00000000028ae8c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::CDOTA_Bot_AbilityUsage_Bane_FiendsGrip(
        CDOTA_Bot_AbilityUsage_Bane_FiendsGrip *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8870;  // vptr: CDOTA_Bot_AbilityUsage_Bane_FiendsGrip
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::GetCurrentUsageDesire  (line 330, @0x00000000028ad390, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, DOTACommander, CDOTA_Commander::GetIllusionState
int __fastcall CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Bane_FiendsGrip *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v3; // xmm0
  int v4; // eax
  CDOTA_BaseNPC_Hero *v5; // r12
  CDOTA_Bot_Hero_Bane *m_pBot; // r13
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC_Hero *v8; // r12
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rsi
  float v12; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  int m_Id; // eax
  unsigned __int8 (__fastcall *v17)(CDOTA_Bot_AbilityUsage_Bane_FiendsGrip *const, _QWORD); // r13
  CDOTA_Commander *v18; // rax
  DOTA_BOT_ILLUSION_STATE v19; // eax
  int v20; // r13d
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rsi
  CDOTA_Bot_Hero_Bane *v23; // r12
  CEntityInstance *v24; // rax
  unsigned __int8 (__fastcall *v25)(CDOTA_Bot_AbilityUsage_Bane_FiendsGrip *const, _QWORD); // r13
  CDOTA_Commander *v26; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  float fChannelTimeRemaining; // [rsp+4h] [rbp-2Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+8h] [rbp-28h] BYREF

  pChannelTarget = 0;
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v3.m128i_i32 = v4 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v3, &pChannelTarget, &fChannelTimeRemaining) == 0 )
    goto LABEL_5;
  v5 = pChannelTarget;
  if ( pChannelTarget == 0 || (pChannelTarget->m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
    goto LABEL_5;
  if ( (pChannelTarget->m_iUnitType & 1) != 0 )
  {
    v25 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v26 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v26, v5);
    if ( v25(this, IllusionState) == 0 )
      goto LABEL_5;
    v5 = pChannelTarget;
  }
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v10 == 0 || (v11 = v10, BYTE3(v10[7]._vptr_IHandleEntity) == 0) )
    v11 = 0;
  if ( !IsBotTargetStatusValidCore(v5, v11, 251, -1.0, this->m_pAbility)
    || SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) < 0
    || (v12 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining <= v12) )
  {
LABEL_5:
    if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
      goto LABEL_8;
    m_pBot = this->m_pBot;
    v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
    v8 = v7;
    if ( v7 == 0 )
      goto LABEL_8;
    if ( BYTE3(v7[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_8;
    m_Id = v7[43].m_iszPrivateVScripts.u.m_Id;
    if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
      goto LABEL_8;
    if ( (m_Id & 1) != 0 )
    {
      v17 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
      v18 = DOTACommander();
      v19 = CDOTA_Commander::GetIllusionState(v18, v8);
      if ( v17(this, v19) == 0 )
        goto LABEL_8;
      m_pBot = this->m_pBot;
    }
    v20 = (*(m_pBot->m_pAbilityBrainSap->_vptr_IHandleEntity + 226))(m_pBot->m_pAbilityBrainSap, &vec3_origin, 0);
    v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v21 == 0 || (v22 = v21, BYTE3(v21[7]._vptr_IHandleEntity) == 0) )
      v22 = 0;
    if ( IsBotTargetStatusValidCore(v8, v22, 251, (v20 - 100), this->m_pAbility) )
    {
      v23 = this->m_pBot;
      v24 = CEntityHandle::operator CEntityInstance *(&v23->m_hTarget);
      if ( v24 == 0 || BYTE3(v24[7]._vptr_IHandleEntity) == 0 )
        v24 = 0;
      if ( (v24[58]._vptr_IHandleEntity & 0x20) == 0 )
      {
        this->m_hDesiredTarget.m_Index = v23->m_hTarget.m_Index;
        return 3;
      }
    }
LABEL_8:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  if ( pChannelTarget != 0 && (m_pEntity = pChannelTarget->m_pEntity) != 0 )
  {
    v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v15 = 0x7FFF;
    else
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v15 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v14 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::UseAbility  (line 372, @0x00000000028ac230, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::UseAbility(CDOTA_Bot_AbilityUsage_Bane_FiendsGrip *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Bane *m_pBot; // r14
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


