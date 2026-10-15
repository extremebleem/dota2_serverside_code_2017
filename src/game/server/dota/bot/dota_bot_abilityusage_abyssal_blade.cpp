
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_AbyssalBlade::CDOTA_Bot_AbilityUsage_AbyssalBlade  (line 23, @0x00000000028970f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_AbyssalBlade::CDOTA_Bot_AbilityUsage_AbyssalBlade(
        CDOTA_Bot_AbilityUsage_AbyssalBlade *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5950;
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire  (line 30, @0x0000000002897d30, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGenericStunDesire, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetOpposingTeamCommander, DOTACommander, CDOTA_Commander::GetIllusionState, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes (18 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_AbyssalBlade *const this)
{
  int v2; // eax
  __m128i v3; // xmm0
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_BaseNPC_Hero *v5; // r12
  int v6; // eax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rsi
  CDOTA_Bot *v9; // r12
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rdi
  CDOTA_Bot *v16; // r12
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // rdx
  CEntityInstance *v19; // rax
  CEntityInstance *v20; // r12
  __int64 v21; // rax
  CEntityInstance *v22; // rax
  CDOTA_Bot *v23; // rdi
  CEntityIdentity *m_pEntity; // rdx
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v28; // rax
  CDOTA_Bot *v29; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  unsigned __int8 (__fastcall *v35)(CDOTA_Bot_AbilityUsage_AbyssalBlade *const, _QWORD); // r14
  CDOTA_Commander *v36; // rax
  DOTA_BOT_ILLUSION_STATE v37; // eax
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC *v39; // rsi
  CDOTA_Bot *v40; // rax
  CEntityIdentity *v41; // rax
  int v42; // edx
  __int16 v43; // cx
  CDOTA_Bot *v44; // r12
  CEntityInstance *v45; // rax
  CDOTA_BaseNPC *v46; // rdi
  CDOTA_Bot *v47; // rdi
  CEntityInstance *v48; // rax
  const CBaseEntity *v49; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v51; // r14
  int v52; // r13d
  CEntityInstance *v53; // rax
  CDOTA_BaseNPC_Hero *v54; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v56)(CDOTA_Bot_AbilityUsage_AbyssalBlade *const, _QWORD); // r15
  CDOTA_Commander *v57; // rax
  DOTA_BOT_ILLUSION_STATE v58; // eax
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rsi
  CEntityInstance *v61; // rax
  CDOTA_BaseNPC *v62; // rsi
  float v63; // xmm0_4
  int v64; // eax
  __int16 v65; // cx
  unsigned __int8 (__fastcall *v66)(CDOTA_Bot_AbilityUsage_AbyssalBlade *const, _QWORD); // r13
  CDOTA_Commander *v67; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v69; // rax
  CDOTA_BaseNPC *v70; // rsi
  CDOTA_Bot *v71; // r12
  CEntityInstance *v72; // rax
  CDOTA_BaseNPC *v73; // r13
  CEntityInstance *v74; // rax
  CDOTA_BaseNPC *v75; // rdi
  CEntityInstance *v76; // rax
  CDOTA_BaseNPC *v77; // rdi
  CDOTA_Bot *v78; // r12
  CEntityInstance *v79; // rax
  CDOTA_BaseNPC *v80; // rdx
  float fMaxRange; // [rsp+Ch] [rbp-E4h]
  CEntityHandle v82; // [rsp+10h] [rbp-E0h] BYREF
  float pChannelTimeRemaining; // [rsp+14h] [rbp-DCh] BYREF
  CDOTA_BaseNPC *ppTarget; // [rsp+18h] [rbp-D8h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > pHeroes; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v86[23]; // [rsp+38h] [rbp-B8h] BYREF

  v86[16] = __readfsqword(0x28u);
  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v3 = 0x43480000u;
  m_pBot = this->m_pBot;
  ppTarget = 0;
  pChannelTimeRemaining = 0.0;
  *v3.m128i_i32 = v2 + 200.0;
  fMaxRange = v2;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(m_pBot, v3, &ppTarget, &pChannelTimeRemaining) != 0 )
  {
    v5 = ppTarget;
    if ( ppTarget != 0 && ((ppTarget->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
    {
      if ( (ppTarget->m_iUnitType & 1) != 0 )
      {
        v66 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v67 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v67, v5);
        if ( v66(this, IllusionState) == 0 )
          goto LABEL_5;
        v5 = ppTarget;
      }
      v61 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v61 == 0 || (v62 = v61, BYTE3(v61[7]._vptr_IHandleEntity) == 0) )
        v62 = 0;
      if ( IsBotTargetStatusValidCore(v5, v62, 251, -1.0, this->m_pAbility) )
      {
        v63 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
        if ( pChannelTimeRemaining > v63 )
        {
          if ( ppTarget == 0 )
            goto LABEL_37;
          m_pEntity = ppTarget->m_pEntity;
          if ( m_pEntity == 0 )
            goto LABEL_37;
LABEL_99:
          v64 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v65 = 0x7FFF;
          else
            v65 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hTarget.m_Index) = v65 | this->m_hTarget.m_Index & 0x8000;
          this->m_hTarget.m_Index = (v64 << 15) | this->m_hTarget.m_Index & 0x7FFF;
          return 3;
        }
      }
    }
  }
LABEL_5:
  v6 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v6 == 2 )
  {
    v69 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v69 != 0 && BYTE3(v69[7]._vptr_IHandleEntity) != 0 )
      v70 = v69;
    else
      v70 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v70) )
    {
      v71 = this->m_pBot;
      v72 = CEntityHandle::operator CEntityInstance *(&v71->m_hUnit);
      if ( v72 != 0 && BYTE3(v72[7]._vptr_IHandleEntity) != 0 )
        v73 = v72;
      else
        v73 = 0;
      v74 = CEntityHandle::operator CEntityInstance *(&v71->m_hTarget);
      if ( v74 != 0 && BYTE3(v74[7]._vptr_IHandleEntity) != 0 )
        v75 = v74;
      else
        v75 = 0;
      if ( IsBotTargetStatusValidCore(v75, v73, 251, fMaxRange, this->m_pAbility) )
      {
        v76 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v76 == 0 || (v77 = v76, BYTE3(v76[7]._vptr_IHandleEntity) == 0) )
          v77 = 0;
        if ( !CDOTA_BaseNPC::IsMovementImpaired(v77) )
        {
          v78 = this->m_pBot;
          v79 = CEntityHandle::operator CEntityInstance *(&v78->m_hTarget);
          if ( v79 != 0 && BYTE3(v79[7]._vptr_IHandleEntity) != 0 )
            v80 = v79;
          else
            v80 = 0;
          if ( !CDOTA_TeamCommander::HasIncomingStun(v78->m_pTeamCommander, v78, v80) )
          {
            this->m_hTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
            return 3;
          }
        }
      }
    }
    goto LABEL_90;
  }
  if ( v6 <= 2 )
  {
    if ( v6 == 1 )
    {
      for ( i = 0; i < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size; ++i )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( OpposingTeamCommander->m_BotList.m_Size > i && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
        {
          v28 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v29 = 0;
          if ( i < v28->m_BotList.m_Size )
            v29 = v28->m_BotList.m_Memory.m_pMemory[i];
          m_Index = v29->m_hUnit.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v31 = v29->m_hUnit.m_Index;
            v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v31 >> 9) & 0x3F];
            if ( v32 != 0 )
            {
              v33 = &v32[v31 & 0x1FF];
              if ( v33 != 0 && m_Index == v33->m_EHandle.m_Index )
              {
                m_pInstance = v33->m_pInstance;
                if ( v33->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
                {
                  if ( (m_pInstance->m_iUnitType & 1) == 0
                    || (v35 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                        v36 = DOTACommander(),
                        v37 = CDOTA_Commander::GetIllusionState(v36, m_pInstance),
                        v35(this, v37) != 0) )
                  {
                    v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                    if ( v38 == 0 || (v39 = v38, BYTE3(v38[7]._vptr_IHandleEntity) == 0) )
                      v39 = 0;
                    if ( IsBotTargetStatusValidCore(m_pInstance, v39, 251, fMaxRange, this->m_pAbility) )
                    {
                      v40 = m_pInstance->m_pBot;
                      if ( v40 != 0 && v40->m_nAttackingTowers > 0 )
                      {
                        v41 = m_pInstance->m_pEntity;
                        if ( v41 != 0 )
                        {
                          v42 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
                          if ( v41->m_EHandle.m_Index == -1 )
                            v43 = 0x7FFF;
                          else
                            v43 = v41->m_EHandle.m_Index & 0x7FFF;
                          LOWORD(this->m_hTarget.m_Index) = v43 | this->m_hTarget.m_Index & 0x8000;
                          this->m_hTarget.m_Index = (v42 << 15) | this->m_hTarget.m_Index & 0x7FFF;
                          return 2;
                        }
                        else
                        {
                          this->m_hTarget.m_Index = -1;
                          return 2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_90;
  }
  if ( v6 != 4 )
  {
    if ( v6 == 18 )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        v8 = v7;
      else
        v8 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v8) )
      {
        v9 = this->m_pBot;
        v10 = CEntityHandle::operator CEntityInstance *(&v9->m_hUnit);
        if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
          v11 = v10;
        else
          v11 = 0;
        v12 = CEntityHandle::operator CEntityInstance *(&v9->m_hTarget);
        if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
          v13 = v12;
        else
          v13 = 0;
        if ( IsBotTargetStatusValidCore(v13, v11, 251, fMaxRange, this->m_pAbility) )
        {
          v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
          if ( v14 == 0 || (v15 = v14, BYTE3(v14[7]._vptr_IHandleEntity) == 0) )
            v15 = 0;
          if ( !CDOTA_BaseNPC::IsMovementImpaired(v15) )
          {
            v16 = this->m_pBot;
            v17 = CEntityHandle::operator CEntityInstance *(&v16->m_hTarget);
            if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
              v18 = v17;
            else
              v18 = 0;
            if ( !CDOTA_TeamCommander::HasIncomingStun(v16->m_pTeamCommander, v16, v18) )
            {
              v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
              v20 = v19;
              if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 && (v19[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v21 = *&v19[45].m_worldGroupId.m_nHashCode;
                if ( v21 != 0 )
                {
                  v82.m_Index = *(v21 + 712);
                  v22 = CEntityHandle::operator CEntityInstance *(&v82);
                  if ( v22 != 0
                    && BYTE3(v22[7]._vptr_IHandleEntity) != 0
                    && (v22[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v23 = *&v22[45].m_worldGroupId.m_nHashCode;
                    if ( v23 != 0 && CDOTA_Bot::IsAboutToDie(v23) )
                    {
                      m_pEntity = v20->m_pEntity;
                      if ( m_pEntity == 0 )
                      {
LABEL_37:
                        this->m_hTarget.m_Index = -1;
                        return 3;
                      }
                      goto LABEL_99;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_90:
    this->m_hTarget.m_Index = -1;
    return 0;
  }
  v44 = this->m_pBot;
  if ( v44->m_fModeDesires[(*(v44->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v44->m_pActiveBotMode)] < 0.75 )
    goto LABEL_90;
  v45 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v45 != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
    v46 = v45;
  else
    v46 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v46) <= 2.0 )
    goto LABEL_90;
  v47 = this->m_pBot;
  pHeroes.m_Size = 0;
  pHeroes.m_Memory.m_nAllocationCount = 32;
  pHeroes.m_Memory.m_nGrowSize = 0x80000000;
  pHeroes.m_Memory.m_pMemory = v86;
  CDOTA_Bot::GetNearbyHeroes(v47, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &pHeroes, fMaxRange);
  v48 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 )
    v49 = v48;
  else
    v49 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v49);
  SortEHANDLEVectorByLocation(&pHeroes, AbsOrigin, 0);
  if ( pHeroes.m_Size <= 0 )
  {
LABEL_87:
    pHeroes.m_Size = 0;
    if ( (pHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&pHeroes.m_Memory);
      if ( (pHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&pHeroes.m_Memory);
    }
    goto LABEL_90;
  }
  v51 = 0;
  v52 = 0;
  while ( 1 )
  {
    v53 = CEntityHandle::operator CEntityInstance *(&pHeroes.m_Memory.m_pMemory[v51]);
    v54 = v53;
    if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v53[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 1) != 0 && ((m_Id & 3) != 0 || this->m_bUseOnCreeps) )
      {
        v56 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v57 = DOTACommander();
        v58 = CDOTA_Commander::GetIllusionState(v57, v54);
        if ( v56(this, v58) != 0 )
        {
          v59 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v59 == 0 || (v60 = v59, BYTE3(v59[7]._vptr_IHandleEntity) == 0) )
            v60 = 0;
          if ( IsBotTargetStatusValidCore(v54, v60, 251, fMaxRange, this->m_pAbility)
            && !CDOTA_BaseNPC::IsMovementImpaired(v54)
            && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v54) )
          {
            break;
          }
        }
      }
    }
    ++v52;
    ++v51;
    if ( v52 >= pHeroes.m_Size )
      goto LABEL_87;
  }
  this->m_hTarget.m_Index = pHeroes.m_Memory.m_pMemory[v51].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&pHeroes);
  return 2;
}


// CDOTA_Bot_AbilityUsage_AbyssalBlade::UseAbility  (line 37, @0x0000000002899610, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, GetItem, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*, operator float, operator int
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_AbyssalBlade::UseAbility(CDOTA_Bot_AbilityUsage_AbyssalBlade *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *m_pAbility; // r14
  int EffectiveLevel; // r15d
  float v8; // xmm1_4
  DOTASpecialAbility_t *SpecialAbility; // r12
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v12; // edx
  bool v13; // cc
  fieldtype_t m_FieldType; // eax
  fieldtype_t *v15; // r15
  __int16 v16; // ax
  int v17; // r15d
  int v18; // r15d
  float v19; // xmm0_4
  fieldtype_t v20; // eax
  float v21; // xmm0_4
  CDOTABaseAbility *v22; // r12
  CDOTA_Bot *m_pBot; // r15
  CDOTA_BotAction_UseAbility *v24; // r14
  fieldtype_t *v25; // r15
  float v26; // xmm0_4
  float v27; // [rsp+Ch] [rbp-44h]
  float pflMultiply; // [rsp+18h] [rbp-38h] BYREF
  float pflAdd[13]; // [rsp+1Ch] [rbp-34h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return;
  v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return;
  if ( m_Index != v4->m_EHandle.m_Index )
    return;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return;
  m_pAbility = this->m_pAbility;
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(m_pAbility);
  if ( EffectiveLevel == -1 )
    goto LABEL_27;
  SpecialAbility = CDOTABaseAbility::GetSpecialAbility(m_pAbility, "stun_duration");
  if ( SpecialAbility == 0 )
    goto LABEL_27;
  pflMultiply = 1.0;
  pflAdd[0] = 0.0;
  if ( CDOTABaseAbility::GetCaster(m_pAbility) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(m_pAbility);
    CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "stun_duration", &pflMultiply, pflAdd);
  }
  m_nCount = SpecialAbility->m_nCount;
  v12 = m_nCount - 1;
  v13 = EffectiveLevel < m_nCount;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( !v13 )
    EffectiveLevel = v12;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v25 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    if ( *(v25 + 8) == 34 )
      v26 = *(v25 + 1);
    else
      v26 = *(v25 + 2);
    v18 = 0;
    v19 = (v26 * pflMultiply) + pflAdd[0];
  }
  else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
  {
    v15 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    v16 = *(v15 + 8);
    if ( v16 == 1 )
    {
      v17 = *(v15 + 2);
    }
    else if ( v16 == 34 )
    {
      v17 = *(v15 + 1);
    }
    else
    {
      v17 = *(v15 + 2);
    }
    v18 = ((v17 * pflMultiply) + pflAdd[0]);
    v19 = 0.0;
  }
  else
  {
    v18 = 0;
    v19 = 0.0;
  }
  v27 = v19;
  CDOTABaseAbility::GetCaster(m_pAbility);
  v20 = SpecialAbility->m_FieldType;
  v21 = v27;
  if ( v20 != fieldtype_t::FIELD_FLOAT )
  {
    if ( v20 == fieldtype_t::FIELD_INTEGER )
      v21 = v18;
    else
LABEL_27:
      v21 = 0.0;
  }
  CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, m_pInstance, v21, v8);
  v22 = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( v22 == 0 || (*(v22->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    v22 = 0;
  v24 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v24, m_pBot, v22, m_pInstance);
  CDOTA_Bot::PushAction(this->m_pBot, v24);
}


