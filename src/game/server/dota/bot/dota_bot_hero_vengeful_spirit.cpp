
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_VengefulSpirit::CDOTA_Bot_Hero_VengefulSpirit  (line 22, @0x00000000028e7130, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_VengefulSpirit::CDOTA_TutorialBot_Hero_VengefulSpirit
// strings: "vengefulspirit_magic_missile", "vengefulspirit_wave_of_terror", "vengefulspirit_command_aura", "vengefulspirit_nether_swap"
void __fastcall CDOTA_Bot_Hero_VengefulSpirit::CDOTA_Bot_Hero_VengefulSpirit(
        CDOTA_Bot_Hero_VengefulSpirit *const this,
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
  this->_vptr_CDOTA_Bot = &off_42D1C30;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityMagicMissile = CDOTA_BaseNPC::FindAbilityByName(v6, "vengefulspirit_magic_missile", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityWaveOfTerror = CDOTA_BaseNPC::FindAbilityByName(v8, "vengefulspirit_wave_of_terror", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityCommandAura = CDOTA_BaseNPC::FindAbilityByName(v10, "vengefulspirit_command_aura", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityNetherSwap = CDOTA_BaseNPC::FindAbilityByName(v12, "vengefulspirit_nether_swap", 1);
}


// CDOTA_Bot_Hero_VengefulSpirit::GetMaxRoamDistance  (line 33, @0x00000000028e3150, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_VengefulSpirit::GetMaxRoamDistance(CDOTA_Bot_Hero_VengefulSpirit *const this)
{
  CDOTABaseAbility *m_pAbilityMagicMissile; // rbx

  m_pAbilityMagicMissile = this->m_pAbilityMagicMissile;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityMagicMissile) >= 0
    && (*(m_pAbilityMagicMissile->_vptr_IHandleEntity + 245))(m_pAbilityMagicMissile) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityMagicMissile)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityMagicMissile, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile  (line 45, @0x00000000028e7260, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1D30;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::GetCurrentUsageDesire  (line 52, @0x00000000028ea180, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntryIndex, GetGenericStunDesire, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetOpposingTeamCommander, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin (15 total)
int __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile *const this)
{
  int v2; // eax
  __m128i v3; // xmm0
  CDOTA_Bot_Hero_VengefulSpirit *m_pBot; // rdi
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  float v7; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  int v12; // eax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CDOTA_Bot_Hero_VengefulSpirit *v15; // r12
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CDOTA_Bot_Hero_VengefulSpirit *v22; // r12
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
  CDOTA_Bot_Hero_VengefulSpirit *v42; // r12
  CEntityInstance *v43; // rax
  CDOTA_BaseNPC *v44; // rdi
  CDOTA_Bot_Hero_VengefulSpirit *v45; // rdi
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
  CDOTA_Bot_Hero_VengefulSpirit *v56; // r12
  CEntityInstance *v57; // rax
  CDOTA_BaseNPC *v58; // r13
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rdi
  CEntityInstance *v61; // rax
  CDOTA_BaseNPC *v62; // rdi
  CDOTA_Bot_Hero_VengefulSpirit *v63; // r12
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


// CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::UseAbility  (line 59, @0x00000000028e4460, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::UseAbility(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_VengefulSpirit *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror::CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror  (line 73, @0x00000000028e7290, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror::CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1D90;
}


// CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror::GetCurrentUsageDesire  (line 80, @0x00000000028e5c00, libserver.so)  // inlines: FastSqrt, Get, GetBotTargetStatus, GetDistanceToEntity, GetInstance, GetTargetNPC, GetUnit, Length, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange
int __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // rsi
  CDOTA_Bot_Hero_VengefulSpirit *m_pBot; // r12
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CDOTA_Bot_Hero_VengefulSpirit *v9; // r13
  CEntityInstance *v10; // rax
  const CBaseEntity *v11; // r12
  CEntityInstance *v12; // rax
  const CBaseEntity *v13; // r14
  const Vector *AbsOrigin; // r12
  const Vector *v15; // rax
  __m128i v16; // xmm0
  float v17; // r14d
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  const CBaseEntity *v21; // rdi
  float v23; // [rsp+Ch] [rbp-24h]

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_29;
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v3) )
    goto LABEL_29;
  m_pBot = this->m_pBot;
  v5 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  if ( (GetBotTargetStatusCore(v8, v6, -1.0, this->m_pAbility) & 0xFB) != 0 )
    goto LABEL_29;
  v9 = this->m_pBot;
  v10 = CEntityHandle::operator CEntityInstance *(&v9->m_hUnit);
  if ( v10 == 0 || (v11 = v10, BYTE3(v10[7]._vptr_IHandleEntity) == 0) )
    v11 = 0;
  v12 = CEntityHandle::operator CEntityInstance *(&v9->m_hTarget);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    v13 = v12;
  else
    v13 = 0;
  if ( v11 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    v15 = CBaseEntity::GetAbsOrigin(v13);
    v9 = this->m_pBot;
    v23 = (((v15->x - AbsOrigin->x) * (v15->x - AbsOrigin->x)) + ((v15->y - AbsOrigin->y) * (v15->y - AbsOrigin->y)))
        + ((v15->z - AbsOrigin->z) * (v15->z - AbsOrigin->z));
    v16 = LODWORD(v23);
    *v16.m128i_i32 = fsqrt(v23);
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  }
  else
  {
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(0xBF800000));
  }
  if ( v17 <= (*(v9->m_pAbilityMagicMissile->_vptr_IHandleEntity + 226))(v9->m_pAbilityMagicMissile, &vec3_origin, 0) )
    goto LABEL_29;
  v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v19 = v18;
  else
    v19 = 0;
  if ( v17 > CDOTA_BaseNPC::GetAttackRange(v19) )
  {
    v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v20 == 0 || (v21 = v20, BYTE3(v20[7]._vptr_IHandleEntity) == 0) )
      v21 = 0;
    this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v21);
    return 2;
  }
  else
  {
LABEL_29:
    this->m_vDesiredLocation = vec3_origin;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror::UseAbility  (line 109, @0x00000000028e1ec0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror::UseAbility(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror *const this)
{
  CDOTA_Bot_Hero_VengefulSpirit *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap  (line 118, @0x00000000028e72b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1DF0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::GetCurrentUsageDesire  (line 125, @0x00000000028e8110, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBotByIndex, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, Length, Length2D, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, GetBotTargetStatusCore, CDOTAGamerules::GetTower, CBaseEntity::GetAbsOrigin, CDOTAGamerules::GetNumTowers, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_TeamCommander::GetRawAvoidanceForLocation, CDOTA_BaseNPC::GetAttackRange (19 total)
int __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v3; // xmm0
  int v4; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  int v7; // eax
  int v8; // r12d
  CDOTA_BaseNPC *v9; // r15
  const Vector *v10; // rax
  float v11; // xmm0_4
  CDOTA_BaseNPC_Tower *Tower; // r14
  CEntityInstance *v13; // rax
  CDOTABaseAbility *v14; // rdi
  __m128i v15; // xmm7
  CDOTA_BaseNPC *v16; // r12
  float v17; // r13d
  CEntityInstance *v18; // rax
  const Vector *v19; // r14
  CEntityInstance *v20; // rax
  CEntityInstance *v21; // rdx
  __int64 i; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r13
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rsi
  CDOTA_Bot *v27; // rax
  CDOTA_Bot_Hero_VengefulSpirit *v28; // rax
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // r14
  const Vector *v31; // r15
  CEntityInstance *v32; // rax
  CEntityInstance *v34; // rax
  CDOTABaseAbility *v35; // rdi
  __m128i v36; // xmm6
  float v37; // r13d
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC *v39; // r12
  const Vector *AbsOrigin; // r14
  CEntityInstance *v41; // rax
  __int64 v42; // r14
  int v43; // r12d
  CEntityInstance *v44; // rax
  CDOTA_BaseNPC *v45; // r13
  __int64 v46; // rax
  const Vector *v47; // rax
  __m128i v48; // xmm5
  float v49; // r15d
  CEntityInstance *v50; // rax
  const CBaseEntity *v51; // rdi
  const Vector *v52; // rax
  CEntityIdentity *v53; // rdx
  int v54; // eax
  __int16 v55; // cx
  const Vector *v56; // r12
  CEntityInstance *v57; // rax
  const CBaseEntity *v58; // rdi
  const Vector *v59; // rax
  float v60; // xmm1_4
  CDOTABaseAbility *v61; // rdi
  __m128i v62; // xmm5
  CDOTA_BaseNPC *v63; // r12
  float v64; // r13d
  CEntityInstance *v65; // rax
  const Vector *v66; // r14
  CEntityInstance *v67; // rax
  CEntityInstance *v68; // rdx
  __int64 v69; // r13
  int v70; // r14d
  CEntityInstance *v71; // rax
  const CBaseEntity *v72; // r12
  __int64 v73; // rax
  CEntityInstance *v74; // rax
  const CBaseEntity *v75; // rdi
  const Vector *v76; // r15
  CDOTA_TeamCommander *v77; // rax
  float v78; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v80; // eax
  __int16 v81; // cx
  const Vector *v82; // r15
  CDOTA_TeamCommander *v83; // rax
  CEntityIdentity *v84; // rdx
  int v85; // eax
  __int16 v86; // cx
  CDOTA_Bot *TargetBot; // rax
  CDOTA_Bot_Hero_VengefulSpirit *m_pBot; // r13
  CEntityInstance *v89; // rax
  const CBaseEntity *v90; // r12
  CEntityInstance *v91; // rax
  const CBaseEntity *v92; // rdi
  CEntityInstance *v93; // rax
  CDOTA_BaseNPC *v94; // rdi
  __m128i v95; // xmm0
  float v96; // r12d
  const Vector *v97; // r13
  CEntityInstance *v98; // rax
  __int64 v99; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v101; // rax
  const CEntityHandle *v102; // rdi
  CEntityInstance *v103; // rax
  CDOTA_BaseNPC *v104; // r13
  CEntityInstance *v105; // rax
  CDOTA_BaseNPC *v106; // rsi
  CEntityIdentity *v107; // rdx
  int v108; // eax
  __int16 v109; // cx
  CEntityIdentity *v110; // rdx
  int v111; // eax
  __int16 v112; // cx
  CBaseEntity *v113; // [rsp+20h] [rbp-A0h]
  const Vector *v114; // [rsp+20h] [rbp-A0h]
  CDOTA_BaseNPC_Tower *fDistb; // [rsp+28h] [rbp-98h]
  float fDist; // [rsp+28h] [rbp-98h]
  float fDista; // [rsp+28h] [rbp-98h]
  float fBestDist; // [rsp+30h] [rbp-90h]
  float fBestDista; // [rsp+30h] [rbp-90h]
  float fChannelTimeRemaining; // [rsp+44h] [rbp-7Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+48h] [rbp-78h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAlliedHeroes; // [rsp+70h] [rbp-50h] BYREF

  pChannelTarget = 0;
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
    if ( (GetBotTargetStatusCore(pChannelTarget, v6, -1.0, this->m_pAbility) & 0xFB) == 0
      && SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) >= 0 )
    {
      v78 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      if ( fChannelTimeRemaining > v78 )
      {
        if ( pChannelTarget != 0 && (m_pEntity = pChannelTarget->m_pEntity) != 0 )
        {
          v80 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v81 = 0x7FFF;
          else
            v81 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hDesiredTarget.m_Index) = v81 | this->m_hDesiredTarget.m_Index & 0x8000;
          this->m_hDesiredTarget.m_Index = (v80 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
          return 3;
        }
        else
        {
          this->m_hDesiredTarget.m_Index = -1;
          return 3;
        }
      }
    }
  }
  v7 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v7 == 2 )
  {
    v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 && SLOBYTE(v34[43].m_iszPrivateVScripts.u.m_Id) < 0 )
      return 0;
    v35 = this->m_pAbility;
    hAlliedHeroes.m_Size = 0;
    hAlliedHeroes.m_Memory.m_nAllocationCount = 0;
    hAlliedHeroes.m_Memory.m_pMemory = 0;
    hAlliedHeroes.m_Memory.m_nGrowSize = 0;
    *v36.m128i_i32 = (*(v35->_vptr_IHandleEntity + 226))(v35, &vec3_origin, 0);
    v37 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
    v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v38 != 0 )
    {
      v39 = 0;
      if ( BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
        v39 = v38;
    }
    else
    {
      v39 = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(v39);
    v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v41 == 0 || BYTE3(v41[7]._vptr_IHandleEntity) == 0 )
      v41 = 0;
    FindUnitsInRadius(HIBYTE(v41[7].m_CScriptComponent), AbsOrigin, v39, v37, &hAlliedHeroes, 1, 1, 0, 0, 0);
    if ( hAlliedHeroes.m_Size <= 0 )
    {
LABEL_127:
      TargetBot = CDOTA_Bot::GetTargetBot(this->m_pBot);
      if ( TargetBot == 0
        || !TargetBot->m_bHuman
        || (*(TargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(TargetBot->m_pActiveBotMode) != 4 )
      {
        goto LABEL_99;
      }
      m_pBot = this->m_pBot;
      v89 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v89 == 0 || (v90 = v89, BYTE3(v89[7]._vptr_IHandleEntity) == 0) )
        v90 = 0;
      v91 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
      if ( v91 != 0 && BYTE3(v91[7]._vptr_IHandleEntity) != 0 )
        v92 = v91;
      else
        v92 = 0;
      if ( (fDist = CBaseEntity::GetDistanceToEntity(v92, v90),
            CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, 0, 0.0) <= 2)
        || (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) <= fDist
        || ((v93 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0
         || BYTE3(v93[7]._vptr_IHandleEntity) == 0
          ? (v94 = 0)
          : (v94 = v93),
            CDOTA_BaseNPC::GetRecentIncomingDPS(v94, 0) >= 10.0) )
      {
LABEL_99:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
        this->m_hDesiredTarget.m_Index = -1;
        return 0;
      }
      this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
    }
    else
    {
      v42 = 0;
      v43 = 0;
      while ( 1 )
      {
        v44 = CEntityHandle::operator CEntityInstance *(&hAlliedHeroes.m_Memory.m_pMemory[v42]);
        v45 = v44;
        if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 && (v44[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v46 = *&v44[45].m_worldGroupId.m_nHashCode;
          if ( v46 != 0 && (*(v46 + 168) & 0x10) != 0 && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v45) < 2.0 )
          {
            v47 = CBaseEntity::GetAbsOrigin(v45);
            *v48.m128i_i32 = CDOTA_TeamCommander::GetRawAvoidanceForLocation(this->m_pBot->m_pTeamCommander, v47);
            v49 = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
            v50 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
              v51 = v50;
            else
              v51 = 0;
            v52 = CBaseEntity::GetAbsOrigin(v51);
            if ( v49 > CDOTA_TeamCommander::GetRawAvoidanceForLocation(this->m_pBot->m_pTeamCommander, v52) )
              break;
          }
        }
        ++v43;
        ++v42;
        if ( hAlliedHeroes.m_Size <= v43 )
          goto LABEL_127;
      }
      v53 = v45->m_pEntity;
      if ( v53 != 0 )
      {
        v54 = (v53->m_EHandle.m_Index >> 15) - (v53->m_flags & 1);
        v55 = 0x7FFF;
        if ( v53->m_EHandle.m_Index != -1 )
          v55 = v53->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v55 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v54 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hDesiredTarget.m_Index = -1;
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
    return 3;
  }
  if ( v7 > 2 )
  {
    if ( (v7 - 8) <= 5 )
    {
      v14 = this->m_pAbility;
      hEnemyHeroes.m_Size = 0;
      hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
      hEnemyHeroes.m_Memory.m_pMemory = 0;
      hEnemyHeroes.m_Memory.m_nGrowSize = 0;
      *v15.m128i_i32 = (*(v14->_vptr_IHandleEntity + 226))(v14, &vec3_origin, 0);
      v16 = 0;
      v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
      v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
        v16 = v18;
      v19 = CBaseEntity::GetAbsOrigin(v16);
      v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
        v21 = v20;
      else
        v21 = 0;
      FindUnitsInRadius(HIBYTE(v21[7].m_CScriptComponent), v19, v16, v17, &hEnemyHeroes, 2, 1, 0, 0, 0);
      if ( hEnemyHeroes.m_Size > 0 )
      {
        for ( i = 0; hEnemyHeroes.m_Size > i; ++i )
        {
          v23 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[i]);
          if ( v23 == 0
            || BYTE3(v23[7]._vptr_IHandleEntity) == 0
            || (v24 = v23, (v23[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
          {
            v24 = 0;
          }
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v24) )
          {
            v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
              v26 = v25;
            else
              v26 = 0;
            if ( (GetBotTargetStatusCore(v24, v26, -1.0, this->m_pAbility) & 0xFB) == 0 )
            {
              v27 = v24->m_pBot;
              if ( v27 != 0 && (v27->m_iUnitType & 0x30) != 0 )
              {
                v28 = this->m_pBot;
                hAlliedHeroes.m_Size = 0;
                hAlliedHeroes.m_Memory.m_pMemory = 0;
                hAlliedHeroes.m_Memory.m_nAllocationCount = 0;
                hAlliedHeroes.m_Memory.m_nGrowSize = 0;
                v29 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
                if ( v29 != 0 )
                {
                  v30 = 0;
                  if ( BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
                    v30 = v29;
                }
                else
                {
                  v30 = 0;
                }
                v31 = CBaseEntity::GetAbsOrigin(v30);
                v32 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v32 == 0 || BYTE3(v32[7]._vptr_IHandleEntity) == 0 )
                  v32 = 0;
                FindUnitsInRadius(HIBYTE(v32[7].m_CScriptComponent), v31, v30, 400.0, &hAlliedHeroes, 1, 1, 0, 0, 0);
                if ( hAlliedHeroes.m_Size > 2 )
                {
                  v110 = v24->m_pEntity;
                  if ( v110 != 0 )
                  {
                    v111 = (v110->m_EHandle.m_Index >> 15) - (v110->m_flags & 1);
                    v112 = 0x7FFF;
                    if ( v110->m_EHandle.m_Index != -1 )
                      v112 = v110->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(this->m_hDesiredTarget.m_Index) = v112 | this->m_hDesiredTarget.m_Index & 0x8000;
                    this->m_hDesiredTarget.m_Index = (v111 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  }
                  else
                  {
                    this->m_hDesiredTarget.m_Index = -1;
                  }
                  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
                  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
                  return 3;
                }
                hAlliedHeroes.m_Size = 0;
                if ( (hAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hAlliedHeroes.m_Memory);
                  if ( (hAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hAlliedHeroes.m_Memory);
                }
              }
            }
          }
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
    }
  }
  else if ( v7 == 1 )
  {
    v8 = 0;
    v9 = 0;
    fBestDist = 0.0;
    while ( v8 < CDOTAGamerules::GetNumTowers(g_pGameRules) )
    {
      Tower = CDOTAGamerules::GetTower(g_pGameRules, v8);
      if ( Tower != 0 )
      {
        v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        {
          v113 = v13;
          fDistb = CDOTAGamerules::GetTower(g_pGameRules, v8);
          v114 = CBaseEntity::GetAbsOrigin(v113);
          v10 = CBaseEntity::GetAbsOrigin(fDistb);
          v11 = fsqrt(
                  (((v10->x - v114->x) * (v10->x - v114->x)) + ((v10->y - v114->y) * (v10->y - v114->y)))
                + ((v10->z - v114->z) * (v10->z - v114->z)));
        }
        else
        {
          CDOTAGamerules::GetTower(g_pGameRules, v8);
          v11 = -1.0;
        }
        if ( v9 == 0 || fBestDist > v11 )
        {
          fBestDist = v11;
          v9 = Tower;
        }
      }
      ++v8;
    }
    if ( v9 != 0 )
    {
      v56 = CBaseEntity::GetAbsOrigin(v9);
      v57 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
        v58 = v57;
      else
        v58 = 0;
      v59 = CBaseEntity::GetAbsOrigin(v58);
      v60 = v59->y - v56->y;
      fBestDista = fsqrt(((v59->x - v56->x) * (v59->x - v56->x)) + (v60 * v60));
      if ( CDOTA_BaseNPC::GetAttackRange(v9) > fBestDista )
      {
        hAlliedHeroes.m_Size = 0;
        hAlliedHeroes.m_Memory.m_pMemory = 0;
        hAlliedHeroes.m_Memory.m_nAllocationCount = 0;
        hAlliedHeroes.m_Memory.m_nGrowSize = 0;
        *v95.m128i_i32 = CDOTA_BaseNPC::GetAttackRange(v9);
        v96 = COERCE_FLOAT(_mm_cvtsi128_si32(v95));
        v97 = CBaseEntity::GetAbsOrigin(v9);
        v98 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v98 == 0 || BYTE3(v98[7]._vptr_IHandleEntity) == 0 )
          v98 = 0;
        FindUnitsInRadius(HIBYTE(v98[7].m_CScriptComponent), v97, v9, v96, &hAlliedHeroes, 2, 3, 128, 0, 0);
        v99 = 0;
        if ( hAlliedHeroes.m_Size == 0 )
        {
          while ( v99 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
          {
            OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
            if ( v99 < OpposingTeamCommander->m_BotList.m_Size
              && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v99] != 0 )
            {
              v101 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
              v102 = 0;
              if ( v99 < v101->m_BotList.m_Size )
                v102 = v101->m_BotList.m_Memory.m_pMemory[v99];
              v103 = CEntityHandle::operator CEntityInstance *(v102 + 39);
              if ( v103 != 0 && BYTE3(v103[7]._vptr_IHandleEntity) != 0 )
                v104 = v103;
              else
                v104 = 0;
              if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v104) )
              {
                fDista = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
                v105 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v105 != 0 && BYTE3(v105[7]._vptr_IHandleEntity) != 0 )
                  v106 = v105;
                else
                  v106 = 0;
                if ( (GetBotTargetStatusCore(v104, v106, fDista, this->m_pAbility) & 0xFB) == 0 )
                {
                  if ( v104 != 0 && (v107 = v104->m_pEntity) != 0 )
                  {
                    v108 = (v107->m_EHandle.m_Index >> 15) - (v107->m_flags & 1);
                    v109 = 0x7FFF;
                    if ( v107->m_EHandle.m_Index != -1 )
                      v109 = v107->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(this->m_hDesiredTarget.m_Index) = v109 | this->m_hDesiredTarget.m_Index & 0x8000;
                    this->m_hDesiredTarget.m_Index = (v108 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  }
                  else
                  {
                    this->m_hDesiredTarget.m_Index = -1;
                  }
                  hAlliedHeroes.m_Size = 0;
                  if ( (hAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  {
                    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hAlliedHeroes.m_Memory);
                    if ( (hAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hAlliedHeroes.m_Memory);
                  }
                  return 3;
                }
              }
            }
            ++v99;
          }
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
      }
    }
    v61 = this->m_pAbility;
    hAlliedHeroes.m_Size = 0;
    hAlliedHeroes.m_Memory.m_pMemory = 0;
    hAlliedHeroes.m_Memory.m_nAllocationCount = 0;
    hAlliedHeroes.m_Memory.m_nGrowSize = 0;
    *v62.m128i_i32 = (*(v61->_vptr_IHandleEntity + 226))(v61, &vec3_origin, 0);
    v63 = 0;
    v64 = COERCE_FLOAT(_mm_cvtsi128_si32(v62));
    v65 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v65 != 0 && BYTE3(v65[7]._vptr_IHandleEntity) != 0 )
      v63 = v65;
    v66 = CBaseEntity::GetAbsOrigin(v63);
    v67 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
      v68 = v67;
    else
      v68 = 0;
    FindUnitsInRadius(HIBYTE(v68[7].m_CScriptComponent), v66, v63, v64, &hAlliedHeroes, 2, 1, 0, 0, 0);
    if ( hAlliedHeroes.m_Size <= 0 )
      goto LABEL_99;
    v69 = 0;
    v70 = 0;
    while ( 1 )
    {
      v71 = CEntityHandle::operator CEntityInstance *(&hAlliedHeroes.m_Memory.m_pMemory[v69]);
      v72 = v71;
      if ( v71 != 0 && BYTE3(v71[7]._vptr_IHandleEntity) != 0 && (v71[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        v73 = *&v71[45].m_worldGroupId.m_nHashCode;
        if ( v73 != 0 && (*(v73 + 168) & 0x30) != 0 )
        {
          v74 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v74 == 0 || (v75 = v74, BYTE3(v74[7]._vptr_IHandleEntity) == 0) )
            v75 = 0;
          v76 = CBaseEntity::GetAbsOrigin(v75);
          v77 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          if ( CDOTA_TeamCommander::GetRawAvoidanceForLocation(v77, v76) > 15 )
          {
            v82 = CBaseEntity::GetAbsOrigin(v72);
            v83 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
            if ( CDOTA_TeamCommander::GetRawAvoidanceForLocation(v83, v82) <= 4 )
              break;
          }
        }
      }
      ++v70;
      ++v69;
      if ( hAlliedHeroes.m_Size <= v70 )
        goto LABEL_99;
    }
    v84 = v72->m_pEntity;
    if ( v84 != 0 )
    {
      v85 = (v84->m_EHandle.m_Index >> 15) - (v84->m_flags & 1);
      v86 = 0x7FFF;
      if ( v84->m_EHandle.m_Index != -1 )
        v86 = v84->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v86 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v85 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
    return 3;
  }
  this->m_hDesiredTarget.m_Index = -1;
  return 0;
}


// CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::UseAbility  (line 291, @0x00000000028e4820, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::CreateHumanRequest, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::UseAbility(
        CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap *const this)
{
  double v1; // xmm1_8
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_VengefulSpirit *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v9; // r12
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
          hEntity.m_Index = this->m_hDesiredTarget.m_Index;
          CDOTA_TeamCommander::CreateHumanRequest(
            this->m_pBot->m_pTeamCommander,
            1,
            &hEntity.m_Index,
            0,
            COERCE_DOUBLE(1077936128),
            v1);
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


// CDOTA_TutorialBot_Hero_VengefulSpirit::CDOTA_TutorialBot_Hero_VengefulSpirit  (line 313, @0x00000000028e72e0, libserver.so)
// calls: CDOTA_Bot_Hero_VengefulSpirit::CDOTA_Bot_Hero_VengefulSpirit
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_VengefulSpirit::CDOTA_TutorialBot_Hero_VengefulSpirit(
        CDOTA_TutorialBot_Hero_VengefulSpirit *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_VengefulSpirit::CDOTA_Bot_Hero_VengefulSpirit(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42D1E50;
}


// CDOTA_TutorialBot_Hero_VengefulSpirit::Think  (line 323, @0x00000000028e34b0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::Think
void __fastcall CDOTA_TutorialBot_Hero_VengefulSpirit::Think(CDOTA_TutorialBot_Hero_VengefulSpirit *const this)
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


