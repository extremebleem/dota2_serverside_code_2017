
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_ChaosKnight::CDOTA_Bot_Hero_ChaosKnight  (line 21, @0x00000000028b6b80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "chaos_knight_chaos_bolt", "chaos_knight_reality_rift", "chaos_knight_phantasm"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_ChaosKnight::CDOTA_Bot_Hero_ChaosKnight(
        CDOTA_Bot_Hero_ChaosKnight *const this,
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
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CA3D0;
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
  this->m_pAbilityChaosBolt = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "chaos_knight_chaos_bolt", 1);
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
  this->m_pAbilityRealityRift = CDOTA_BaseNPC::FindAbilityByName(v12, "chaos_knight_reality_rift", 1);
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  this->m_pAbilityPhantasm = CDOTA_BaseNPC::FindAbilityByName(v14, "chaos_knight_phantasm", 1);
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt  (line 33, @0x00000000028b6d00, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt(
        CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA530;  // vptr: CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::GetCurrentUsageDesire  (line 40, @0x00000000028b90a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntryIndex, GetGenericStunDesire, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetOpposingTeamCommander, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin (15 total)
int __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt *const this)
{
  int v2; // eax
  __m128i v3; // xmm0
  CDOTA_Bot_Hero_ChaosKnight *m_pBot; // rdi
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  float v7; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  int v12; // eax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CDOTA_Bot_Hero_ChaosKnight *v15; // r12
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CDOTA_Bot_Hero_ChaosKnight *v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rdx
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // r12
  __int64 v27; // rax
  CEntityInstance *v28; // rax
  CDOTA_Bot *v29; // rdi
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v32; // rax
  const CEntityHandle *v33; // rdi
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // r13
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rsi
  CDOTA_Bot *v38; // rax
  CEntityIdentity *v39; // rax
  int v40; // edx
  __int16 v41; // cx
  CDOTA_Bot_Hero_ChaosKnight *v42; // r12
  CEntityInstance *v43; // rax
  CDOTA_BaseNPC *v44; // rdi
  CDOTA_Bot_Hero_ChaosKnight *v45; // rdi
  CEntityInstance *v46; // rax
  const CBaseEntity *v47; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v49; // r12
  CDOTA_BaseNPC *v50; // rsi
  CEntityInstance *v51; // rax
  CDOTA_BaseNPC *v52; // r13
  CEntityInstance *v53; // rax
  CEntityInstance *v54; // rax
  CDOTA_BaseNPC *v55; // rsi
  CDOTA_Bot_Hero_ChaosKnight *v56; // r12
  CEntityInstance *v57; // rax
  CDOTA_BaseNPC *v58; // r13
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rdi
  CEntityInstance *v61; // rax
  CDOTA_BaseNPC *v62; // rdi
  CDOTA_Bot_Hero_ChaosKnight *v63; // r12
  CEntityInstance *v64; // rax
  CDOTA_BaseNPC *v65; // rdx
  float fMaxRange; // [rsp+Ch] [rbp-E4h]
  CEntityHandle v67; // [rsp+10h] [rbp-E0h] BYREF
  float pChannelTimeRemaining; // [rsp+14h] [rbp-DCh] BYREF
  CDOTA_BaseNPC *ppTarget; // [rsp+18h] [rbp-D8h] BYREF
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > v70; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v71[23]; // [rsp+38h] [rbp-B8h] BYREF

  v71[16] = __readfsqword(0x28u);
  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v3 = 0x43480000u;
  m_pBot = this->m_pBot;
  ppTarget = 0;
  pChannelTimeRemaining = 0.0;
  *v3.m128i_i32 = v2 + 200.0;
  fMaxRange = v2;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v3, &ppTarget, &pChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, ppTarget) )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    if ( IsBotTargetStatusValidCore(ppTarget, v6, 251, -1.0, this->m_pAbility) )
    {
      v7 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      if ( pChannelTimeRemaining > v7 )
      {
        if ( ppTarget != 0 )
        {
          m_pEntity = ppTarget->m_pEntity;
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
LABEL_45:
        this->m_hDesiredTarget.m_Index = -1;
        return 3;
      }
    }
  }
  v12 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v12 == 2 )
  {
    v54 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v54 != 0 && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
      v55 = v54;
    else
      v55 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v55) )
    {
      v56 = this->m_pBot;
      v57 = CEntityHandle::operator CEntityInstance *(&v56->m_hUnit);
      if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
        v58 = v57;
      else
        v58 = 0;
      v59 = CEntityHandle::operator CEntityInstance *(&v56->m_hTarget);
      if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
        v60 = v59;
      else
        v60 = 0;
      if ( IsBotTargetStatusValidCore(v60, v58, 251, fMaxRange, this->m_pAbility) )
      {
        v61 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v61 == 0 || (v62 = v61, BYTE3(v61[7]._vptr_IHandleEntity) == 0) )
          v62 = 0;
        if ( !CDOTA_BaseNPC::IsMovementImpaired(v62) )
        {
          v63 = this->m_pBot;
          v64 = CEntityHandle::operator CEntityInstance *(&v63->m_hTarget);
          if ( v64 != 0 && BYTE3(v64[7]._vptr_IHandleEntity) != 0 )
            v65 = v64;
          else
            v65 = 0;
          if ( !CDOTA_TeamCommander::HasIncomingStun(v63->m_pTeamCommander, v63, v65) )
          {
            this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
            return 3;
          }
        }
      }
    }
    goto LABEL_69;
  }
  if ( v12 <= 2 )
  {
    if ( v12 == 1 )
    {
      for ( i = 0; i < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size; ++i )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( OpposingTeamCommander->m_BotList.m_Size > i && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
        {
          v32 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v33 = 0;
          if ( i < v32->m_BotList.m_Size )
            v33 = v32->m_BotList.m_Memory.m_pMemory[i];
          v34 = CEntityHandle::operator CEntityInstance *(v33 + 39);
          if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
            v35 = v34;
          else
            v35 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v35) )
          {
            v36 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
              v37 = v36;
            else
              v37 = 0;
            if ( IsBotTargetStatusValidCore(v35, v37, 251, fMaxRange, this->m_pAbility) )
            {
              v38 = v35->m_pBot;
              if ( v38 != 0 && v38->m_nAttackingTowers > 0 )
              {
                v39 = v35->m_pEntity;
                if ( v39 != 0 )
                {
                  v40 = (v39->m_EHandle.m_Index >> 15) - (v39->m_flags & 1);
                  if ( v39->m_EHandle.m_Index == -1 )
                    v41 = 0x7FFF;
                  else
                    v41 = v39->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hDesiredTarget.m_Index) = v41 | this->m_hDesiredTarget.m_Index & 0x8000;
                  this->m_hDesiredTarget.m_Index = (v40 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  return 2;
                }
                else
                {
                  this->m_hDesiredTarget.m_Index = -1;
                  return 2;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_69;
  }
  if ( v12 != 4 )
  {
    if ( v12 == 18 )
    {
      v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        v14 = v13;
      else
        v14 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v14) )
      {
        v15 = this->m_pBot;
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
        if ( IsBotTargetStatusValidCore(v19, v17, 251, fMaxRange, this->m_pAbility) )
        {
          v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
          if ( v20 == 0 || (v21 = v20, BYTE3(v20[7]._vptr_IHandleEntity) == 0) )
            v21 = 0;
          if ( !CDOTA_BaseNPC::IsMovementImpaired(v21) )
          {
            v22 = this->m_pBot;
            v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hTarget);
            if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
              v24 = v23;
            else
              v24 = 0;
            if ( !CDOTA_TeamCommander::HasIncomingStun(v22->m_pTeamCommander, v22, v24) )
            {
              v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
              v26 = v25;
              if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 && (v25[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v27 = *&v25[45].m_worldGroupId.m_nHashCode;
                if ( v27 != 0 )
                {
                  v67.m_Index = *(v27 + 712);
                  v28 = CEntityHandle::operator CEntityInstance *(&v67);
                  if ( v28 != 0
                    && BYTE3(v28[7]._vptr_IHandleEntity) != 0
                    && (v28[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v29 = *&v28[45].m_worldGroupId.m_nHashCode;
                    if ( v29 != 0 && CDOTA_Bot::IsAboutToDie(v29) )
                    {
                      m_pEntity = v26->m_pEntity;
                      if ( m_pEntity != 0 )
                        goto LABEL_10;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_69:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v42 = this->m_pBot;
  if ( v42->m_fModeDesires[(*(v42->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v42->m_pActiveBotMode)] < 0.75 )
    goto LABEL_69;
  v43 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
    v44 = v43;
  else
    v44 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v44) <= 2.0 )
    goto LABEL_69;
  v45 = this->m_pBot;
  v70.m_Size = 0;
  v70.m_Memory.m_nAllocationCount = 32;
  v70.m_Memory.m_nGrowSize = 0x80000000;
  v70.m_Memory.m_pMemory = v71;
  CDOTA_Bot::GetNearbyHeroes(v45, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &v70, fMaxRange);
  v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
    v47 = v46;
  else
    v47 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v47);
  SortEHANDLEVectorByLocation(&v70, AbsOrigin, 0);
  if ( v70.m_Size <= 0 )
  {
LABEL_68:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v70);
    goto LABEL_69;
  }
  v49 = 0;
  while ( 1 )
  {
    v51 = CEntityHandle::operator CEntityInstance *(&v70.m_Memory.m_pMemory[v49]);
    if ( v51 == 0
      || BYTE3(v51[7]._vptr_IHandleEntity) == 0
      || (v52 = v51, (v51[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v52 = 0;
    }
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v52) )
    {
      v53 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
        v50 = v53;
      else
        v50 = 0;
      if ( IsBotTargetStatusValidCore(v52, v50, 251, fMaxRange, this->m_pAbility)
        && !CDOTA_BaseNPC::IsMovementImpaired(v52)
        && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v52) )
      {
        break;
      }
    }
    if ( v70.m_Size <= ++v49 )
      goto LABEL_68;
  }
  this->m_hDesiredTarget.m_Index = v70.m_Memory.m_pMemory[v49].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v70);
  return 2;
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::UseAbility  (line 47, @0x00000000028ba7e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// strings: "stun_min", "stun_max"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::UseAbility(
        CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int LevelSpecialValue; // r13d
  int v7; // eax
  CDOTA_Bot_Hero_ChaosKnight *m_pBot; // r14
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
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "stun_min", -1, 1);
          v7 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "stun_max", -1, 1);
          CDOTA_TeamCommander::SetIncomingStun(
            this->m_pBot->m_pTeamCommander,
            m_pInstance,
            (LevelSpecialValue + v7) * 0.5,
            v7);
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


// CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift  (line 63, @0x00000000028b6d30, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift(
        CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA590;  // vptr: CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire  (line 70, @0x00000000028b61e0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, Length2D, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator!=<CBaseEntity>, operator*, operator+, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_TeamCommander::IsMovementImpaired, CDOTA_TeamCommander::GetOpposingTeamCommander, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetRawAvoidanceForLocation, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::WasRecentlyHitByHero
int __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  int v8; // eax
  CDOTA_Bot_Hero_ChaosKnight *m_pBot; // r14
  int v10; // r12d
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // rdx
  __int64 v13; // r12
  int v14; // r15d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v16; // rax
  const CEntityHandle *v17; // rdi
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // r13
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rsi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v23; // rax
  const CBaseEntity *v24; // rdi
  const Vector *v25; // rax
  vec_t v26; // xmm1_4
  vec_t v27; // xmm0_4
  CDOTA_TeamCommander *m_pTeamCommander; // rdi
  CDOTA_TeamCommander *v29; // rax
  int RawAvoidanceForLocation; // eax
  _BOOL8 v31; // rdx
  CEntityIdentity *m_pEntity; // rcx
  __int16 v33; // si
  CDOTA_Bot *v34; // r13
  float v35; // xmm1_4
  const Vector *v36; // r12
  CEntityInstance *v37; // rax
  const CBaseEntity *v38; // rdi
  const Vector *v39; // rax
  float fMaxRange; // [rsp+10h] [rbp-60h]
  float fMaxRangea; // [rsp+10h] [rbp-60h]
  EHANDLE hBestTarget; // [rsp+20h] [rbp-50h] BYREF
  Vector vMidLocation; // [rsp+30h] [rbp-40h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 1 )
  {
    v8 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    m_pBot = this->m_pBot;
    v10 = v8;
    v11 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
      v12 = v11;
    else
      v12 = 0;
    if ( *&v12[44].m_iszPrivateVScripts.u.m_Id > (2 * v10) )
    {
      hBestTarget.m_Index = -1;
      v13 = 0;
      v14 = -40;
      while ( v13 < CDOTA_TeamCommander::GetOpposingTeamCommander(m_pBot->m_pTeamCommander)->m_BotList.m_Size )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( v13 < OpposingTeamCommander->m_BotList.m_Size
          && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v13] != 0 )
        {
          v16 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v17 = 0;
          if ( v13 < v16->m_BotList.m_Size )
            v17 = v16->m_BotList.m_Memory.m_pMemory[v13];
          v18 = CEntityHandle::operator CEntityInstance *(v17 + 39);
          if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
            v19 = v18;
          else
            v19 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v19) )
          {
            fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
            v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
              v21 = v20;
            else
              v21 = 0;
            if ( (GetBotTargetStatusCore(v19, v21, fMaxRange, this->m_pAbility) & 0xFB) == 0 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
              v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v23 == 0 || (v24 = v23, BYTE3(v23[7]._vptr_IHandleEntity) == 0) )
                v24 = 0;
              v25 = CBaseEntity::GetAbsOrigin(v24);
              v26 = (v25->y + AbsOrigin->y) * 0.5;
              v27 = (v25->z + AbsOrigin->z) * 0.5;
              m_pTeamCommander = this->m_pBot->m_pTeamCommander;
              vMidLocation.x = (v25->x + AbsOrigin->x) * 0.5;
              vMidLocation.y = v26;
              vMidLocation.z = v27;
              v29 = CDOTA_TeamCommander::GetOpposingTeamCommander(m_pTeamCommander);
              RawAvoidanceForLocation = CDOTA_TeamCommander::GetRawAvoidanceForLocation(v29, &vMidLocation);
              LODWORD(v31) = 0;
              if ( RawAvoidanceForLocation != 10 )
                v31 = CDOTA_TeamCommander::GetRawAvoidanceForLocation(this->m_pBot->m_pTeamCommander, &vMidLocation) <= 9;
              if ( v14 < v31 )
              {
                if ( v19 != 0 && (m_pEntity = v19->m_pEntity) != 0 )
                {
                  v33 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  v14 = v31;
                  hBestTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                      | v33 & 0x7FFF;
                }
                else
                {
                  hBestTarget.m_Index = -1;
                  v14 = v31;
                }
              }
            }
          }
        }
        m_pBot = this->m_pBot;
        ++v13;
      }
      if ( CEntityHandle::operator CEntityInstance *(&hBestTarget) != 0 )
      {
        this->m_hDesiredTarget = hBestTarget;
        return 3;
      }
    }
    return 0;
  }
  if ( v2 != 2 )
    return 0;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 || (v4 = v3, (v3[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    v4 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4) )
    return 0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  if ( (GetBotTargetStatusCore(v4, v6, -1.0, this->m_pAbility) & 0xFB) != 0 )
    return 0;
  if ( CDOTA_TeamCommander::IsMovementImpaired(this->m_pBot->m_pTeamCommander, this->m_pBot, v4) )
    return 0;
  if ( CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v4) )
    return 0;
  v34 = v4->m_pBot;
  if ( v34 == 0
    || (*(v34->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v34->m_pActiveBotMode) != 4
    && CDOTA_Bot::WasRecentlyHitByHero(v34, 3.0, v35) )
  {
    return 0;
  }
  v36 = CBaseEntity::GetAbsOrigin(v4);
  v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v37 == 0 || (v38 = v37, BYTE3(v37[7]._vptr_IHandleEntity) == 0) )
    v38 = 0;
  v39 = CBaseEntity::GetAbsOrigin(v38);
  fMaxRangea = fsqrt(((v39->x - v36->x) * (v39->x - v36->x)) + ((v39->y - v36->y) * (v39->y - v36->y)));
  if ( fMaxRangea <= ((*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) * 0.5) )
    return 0;
  this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
  return 3;
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::UseAbility  (line 141, @0x00000000028b5760, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::CreateHumanRequest, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::UseAbility(
        CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift *const this)
{
  double v1; // xmm1_8
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // si
  CDOTA_Bot_Hero_ChaosKnight *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v11; // r12
  EHANDLE hEntity; // [rsp+0h] [rbp-40h] BYREF

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
          m_pEntity = m_pInstance->m_pEntity;
          hEntity.m_Index = -1;
          if ( m_pEntity != 0 )
          {
            v8 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            hEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
          }
          CDOTA_TeamCommander::CreateHumanRequest(
            this->m_pBot->m_pTeamCommander,
            1,
            &hEntity.m_Index,
            1,
            COERCE_DOUBLE(1082130432),
            v1);
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v11 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v11, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v11);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm::CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm  (line 156, @0x00000000028b6d60, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm::CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm(
        CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA5F0;  // vptr: CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm::GetCurrentUsageDesire  (line 163, @0x00000000028b5d60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetTargetNPC, GetUnit, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm *const this)
{
  CDOTA_Bot_Hero_ChaosKnight *m_pBot; // r12
  CDOTA_Bot_Hero_ChaosKnight *v3; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTABaseAbility *m_pAbilityRealityRift; // r13
  int result; // eax
  CEntityInstance *v10; // rax
  float v11; // r13d
  int v12; // r12d
  CEntityInstance *m_pInstance; // rdx

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 2 )
    return 0;
  v3 = this->m_pBot;
  m_Index = v3->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = v3->m_hTarget.m_Index, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) == 0)
    || (v7 = &v6[v5 & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance) == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (result = 0, SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) >= 0) )
  {
    m_pAbilityRealityRift = m_pBot->m_pAbilityRealityRift;
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityRealityRift) >= 0
      && (*(m_pAbilityRealityRift->_vptr_IHandleEntity + 245))(m_pAbilityRealityRift) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityRealityRift)
      && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityRealityRift, -1) )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
        v10 = 0;
      v11 = *&v10[44].m_iszPrivateVScripts.u.m_Id;
      v12 = (*(m_pBot->m_pAbilityRealityRift->_vptr_IHandleEntity + 273))(m_pBot->m_pAbilityRealityRift, 0xFFFFFFFFLL);
      if ( v11 <= ((*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL) + v12) )
        return 0;
    }
    return 3;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm::UseAbility  (line 192, @0x00000000028b4170, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm::UseAbility(
        CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm *const this)
{
  CDOTA_Bot_Hero_ChaosKnight *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


