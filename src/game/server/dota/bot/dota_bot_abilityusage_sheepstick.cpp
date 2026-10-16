
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Sheepstick::CDOTA_Bot_AbilityUsage_Sheepstick  (line 23, @0x00000000028a4ce0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Sheepstick::CDOTA_Bot_AbilityUsage_Sheepstick(
        CDOTA_Bot_AbilityUsage_Sheepstick *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6B50;  // vptr: CDOTA_Bot_AbilityUsage_Sheepstick
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire  (line 30, @0x00000000028a5290, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGenericStunDesire, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetOpposingTeamCommander, DOTACommander, CDOTA_Commander::GetIllusionState, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath (17 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Sheepstick *const this)
{
  int v2; // eax
  __m128i v3; // xmm0
  CDOTA_Bot *m_pBot; // rdi
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  float v7; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  int v12; // eax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CDOTA_Bot *v15; // r12
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CDOTA_Bot *v22; // r12
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
  CDOTA_Bot *v33; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v35; // cx
  CEntityIdentity *v36; // rdx
  CEntityIdentity *v37; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  unsigned __int8 (__fastcall *v39)(CDOTA_Bot_AbilityUsage_Sheepstick *const, _QWORD); // r14
  CDOTA_Commander *v40; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v42; // rax
  CDOTA_BaseNPC *v43; // rsi
  CDOTA_Bot *v44; // rax
  CEntityIdentity *v45; // rax
  int v46; // edx
  __int16 v47; // cx
  CDOTA_Bot *v48; // r12
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *v50; // rdi
  CDOTA_Bot *v51; // rdi
  CEntityInstance *v52; // rax
  const CBaseEntity *v53; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v55; // r13
  int v56; // r12d
  CHandle<CBaseEntity> *v57; // rdx
  uint32 v58; // eax
  __int16 v59; // cx
  CEntityIdentity *v60; // rdx
  CEntityIdentity *v61; // rdx
  CDOTA_BaseNPC_Hero *v62; // r14
  uint32 m_iUnitType; // eax
  unsigned __int8 (__fastcall *v64)(CDOTA_Bot_AbilityUsage_Sheepstick *const, _QWORD); // r15
  CDOTA_Commander *v65; // rax
  DOTA_BOT_ILLUSION_STATE v66; // eax
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // rsi
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
            LOWORD(this->m_hTarget.m_Index) = v10 | this->m_hTarget.m_Index & 0x8000;
            this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
            return 3;
          }
        }
LABEL_45:
        this->m_hTarget.m_Index = -1;
        return 3;
      }
    }
  }
  v12 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v12 == 2 )
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
    goto LABEL_74;
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
          m_Index = v33->m_hUnit.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v35 = v33->m_hUnit.m_Index;
            v36 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v35 >> 9) & 0x3F];
            if ( v36 != 0 )
            {
              v37 = &v36[v35 & 0x1FF];
              if ( v37 != 0 && m_Index == v37->m_EHandle.m_Index )
              {
                m_pInstance = v37->m_pInstance;
                if ( v37->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
                {
                  if ( (m_pInstance->m_iUnitType & 1) == 0
                    || (v39 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                        v40 = DOTACommander(),
                        IllusionState = CDOTA_Commander::GetIllusionState(v40, m_pInstance),
                        v39(this, IllusionState) != 0) )
                  {
                    v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                    if ( v42 == 0 || (v43 = v42, BYTE3(v42[7]._vptr_IHandleEntity) == 0) )
                      v43 = 0;
                    if ( IsBotTargetStatusValidCore(m_pInstance, v43, 251, fMaxRange, this->m_pAbility) )
                    {
                      v44 = m_pInstance->m_pBot;
                      if ( v44 != 0 && v44->m_nAttackingTowers > 0 )
                      {
                        v45 = m_pInstance->m_pEntity;
                        if ( v45 != 0 )
                        {
                          v46 = (v45->m_EHandle.m_Index >> 15) - (v45->m_flags & 1);
                          if ( v45->m_EHandle.m_Index == -1 )
                            v47 = 0x7FFF;
                          else
                            v47 = v45->m_EHandle.m_Index & 0x7FFF;
                          LOWORD(this->m_hTarget.m_Index) = v47 | this->m_hTarget.m_Index & 0x8000;
                          this->m_hTarget.m_Index = (v46 << 15) | this->m_hTarget.m_Index & 0x7FFF;
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
    goto LABEL_74;
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
                  v82.m_Index = *(v27 + 712);
                  v28 = CEntityHandle::operator CEntityInstance *(&v82);
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
LABEL_74:
    this->m_hTarget.m_Index = -1;
    return 0;
  }
  v48 = this->m_pBot;
  if ( v48->m_fModeDesires[(*(v48->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v48->m_pActiveBotMode)] < 0.75 )
    goto LABEL_74;
  v49 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
    v50 = v49;
  else
    v50 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v50) <= 2.0 )
    goto LABEL_74;
  v51 = this->m_pBot;
  pHeroes.m_Size = 0;
  pHeroes.m_Memory.m_nAllocationCount = 32;
  pHeroes.m_Memory.m_nGrowSize = 0x80000000;
  pHeroes.m_Memory.m_pMemory = v86;
  CDOTA_Bot::GetNearbyHeroes(v51, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &pHeroes, fMaxRange);
  v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 )
    v53 = v52;
  else
    v53 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v53);
  SortEHANDLEVectorByLocation(&pHeroes, AbsOrigin, 0);
  if ( pHeroes.m_Size <= 0 )
  {
LABEL_73:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&pHeroes);
    goto LABEL_74;
  }
  v55 = 0;
  v56 = 0;
  while ( 1 )
  {
    v57 = &pHeroes.m_Memory.m_pMemory[v55];
    v58 = pHeroes.m_Memory.m_pMemory[v55].m_Index;
    if ( v58 + 2 > 1 )
    {
      v59 = v57->m_Index;
      v60 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v57->m_Index) >> 9) & 0x3F];
      if ( v60 != 0 )
      {
        v61 = &v60[v59 & 0x1FF];
        if ( v61 != 0 && v58 == v61->m_EHandle.m_Index )
        {
          v62 = v61->m_pInstance;
          if ( v61->m_pInstance != 0 && v62->m_bIsDOTANPC )
          {
            m_iUnitType = v62->m_iUnitType;
            if ( (m_iUnitType & 1) != 0 && ((m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
            {
              v64 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
              v65 = DOTACommander();
              v66 = CDOTA_Commander::GetIllusionState(v65, v62);
              if ( v64(this, v66) != 0 )
              {
                v67 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v67 == 0 || (v68 = v67, BYTE3(v67[7]._vptr_IHandleEntity) == 0) )
                  v68 = 0;
                if ( IsBotTargetStatusValidCore(v62, v68, 251, fMaxRange, this->m_pAbility)
                  && !CDOTA_BaseNPC::IsMovementImpaired(v62)
                  && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v62) )
                {
                  break;
                }
              }
            }
          }
        }
      }
    }
    ++v56;
    ++v55;
    if ( v56 >= pHeroes.m_Size )
      goto LABEL_73;
  }
  this->m_hTarget.m_Index = pHeroes.m_Memory.m_pMemory[v55].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&pHeroes);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Sheepstick::UseAbility  (line 37, @0x00000000028a3ad0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Sheepstick::UseAbility(CDOTA_Bot_AbilityUsage_Sheepstick *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r15
  CDOTA_BotAction_UseAbility *v8; // r13

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pAbility = this->m_pAbility;
          m_pBot = this->m_pBot;
          if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
            m_pAbility = 0;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


