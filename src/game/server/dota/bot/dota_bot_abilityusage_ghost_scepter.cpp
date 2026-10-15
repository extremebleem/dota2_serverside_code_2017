
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_GhostScepter::CDOTA_Bot_AbilityUsage_GhostScepter  (line 23, @0x00000000028a2680, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "ethereal_damage_bonus"
void __fastcall CDOTA_Bot_AbilityUsage_GhostScepter::CDOTA_Bot_AbilityUsage_GhostScepter(
        CDOTA_Bot_AbilityUsage_GhostScepter *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C63B0;
  this->m_hTarget.m_Index = -1;
  this->m_iEtherealDamageBonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                   pAbility,
                                   "ethereal_damage_bonus",
                                   -1,
                                   1);
}


// CDOTA_Bot_AbilityUsage_GhostScepter::GetCurrentUsageDesire  (line 31, @0x00000000028a1740, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotTargetStatus, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, GetBotTargetStatusCore, CDOTA_Bot::FindNearbyTeammatesInMode, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::FindNearbyEnemiesInMode, CUtlMemory<CDOTA_Bot*, int>::Purge, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_GhostScepter::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_GhostScepter *const this)
{
  CDOTA_Bot *m_pBot; // r13
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CDOTA_BaseNPC *v8; // rdi
  CDOTA_Bot *v9; // r12
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rcx
  __int64 v12; // r12
  int v13; // r13d
  int v14; // r14d
  int v15; // r15d
  CDOTA_Bot *v16; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdx
  int EstimatedDamageToTarget; // eax
  CDOTA_Bot *v23; // rdx
  uint32 v24; // eax
  unsigned __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CDOTA_BaseNPC *v28; // rdx
  bool v29; // zf
  uint32 v30; // eax
  CDOTA_Bot *v31; // r12
  CEntityInstance *v32; // rax
  CDOTA_BaseNPC *v33; // rcx
  __int64 v34; // r12
  int v35; // r13d
  int v36; // r14d
  int v37; // r15d
  CDOTA_BaseNPC *v38; // rdx
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // rdx
  CEntityInstance *v41; // rax
  CEntityInstance *v42; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v44; // eax
  __int16 v45; // cx
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > hEnemyBotList; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  m_pBot = this->m_pBot;
  v4 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v5 = v4;
  if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 || SLOBYTE(v4[43].m_iszPrivateVScripts.u.m_Id) >= 0 )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v6 == 0 || (v7 = v6, BYTE3(v6[7]._vptr_IHandleEntity) == 0) )
      v7 = 0;
    if ( v5 != 0 && v5->m_bIsDOTANPC )
      v8 = v5;
    else
      v8 = 0;
    if ( (GetBotTargetStatusCore(v8, v7, -1.0, this->m_pAbility) & 0xFB) == 0 )
    {
      v9 = this->m_pBot;
      hEnemyBotList.m_Size = 0;
      hEnemyBotList.m_Memory.m_pMemory = 0;
      hEnemyBotList.m_Memory.m_nAllocationCount = 0;
      hEnemyBotList.m_Memory.m_nGrowSize = 0;
      v10 = CEntityHandle::operator CEntityInstance *(&v9->m_hTarget);
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        v11 = v10;
      else
        v11 = 0;
      CDOTA_Bot::FindNearbyTeammatesInMode(v9, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 800.0, &hEnemyBotList, v11);
      if ( hEnemyBotList.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = this->m_pBot;
          m_Index = v16->m_hTarget.m_Index;
          if ( m_Index + 2 <= 1
            || (v18 = v16->m_hTarget.m_Index,
                (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F]) == 0)
            || (v20 = &v19[v18 & 0x1FF]) == 0
            || m_Index != v20->m_EHandle.m_Index
            || (m_pInstance = v20->m_pInstance) == 0
            || !m_pInstance->m_bIsDOTANPC )
          {
            m_pInstance = 0;
          }
          EstimatedDamageToTarget = CDOTA_Bot::GetEstimatedDamageToTarget(
                                      hEnemyBotList.m_Memory.m_pMemory[v12],
                                      1,
                                      m_pInstance,
                                      5.0,
                                      2);
          v23 = this->m_pBot;
          v15 += EstimatedDamageToTarget;
          v24 = v23->m_hTarget.m_Index;
          if ( v24 + 2 <= 1
            || (v25 = v23->m_hTarget.m_Index,
                (v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v25 >> 9) & 0x3F]) == 0)
            || (v27 = &v26[v25 & 0x1FF]) == 0
            || v24 != v27->m_EHandle.m_Index
            || (v28 = v27->m_pInstance) == 0
            || !v28->m_bIsDOTANPC )
          {
            v28 = 0;
          }
          ++v13;
          v14 += CDOTA_Bot::GetEstimatedDamageToTarget(hEnemyBotList.m_Memory.m_pMemory[v12++], 1, v28, 5.0, 1);
        }
        while ( hEnemyBotList.m_Size > v13 );
        if ( this->m_iEtherealDamageBonus * v15 / 100 > v14 )
        {
          v29 = (hEnemyBotList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
          v30 = this->m_pBot->m_hTarget.m_Index;
          hEnemyBotList.m_Size = 0;
          this->m_hTarget.m_Index = v30;
          if ( v29 )
          {
            CUtlMemory<CDOTA_Bot *,int>::Purge(&hEnemyBotList.m_Memory);
            if ( (hEnemyBotList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CDOTA_Bot *,int>::Purge(&hEnemyBotList.m_Memory);
          }
          return 2;
        }
      }
      hEnemyBotList.m_Size = 0;
      if ( (hEnemyBotList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Bot *,int>::Purge(&hEnemyBotList.m_Memory);
        if ( (hEnemyBotList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTA_Bot *,int>::Purge(&hEnemyBotList.m_Memory);
      }
    }
LABEL_2:
    if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4
      && !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
    {
      v31 = this->m_pBot;
      hEnemyBotList.m_Size = 0;
      hEnemyBotList.m_Memory.m_pMemory = 0;
      hEnemyBotList.m_Memory.m_nAllocationCount = 0;
      hEnemyBotList.m_Memory.m_nGrowSize = 0;
      v32 = CEntityHandle::operator CEntityInstance *(&v31->m_hUnit);
      if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
        v33 = v32;
      else
        v33 = 0;
      CDOTA_Bot::FindNearbyEnemiesInMode(v31, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, &hEnemyBotList, v33);
      if ( hEnemyBotList.m_Size > 0 )
      {
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        do
        {
          v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
            v38 = v41;
          else
            v38 = 0;
          v37 += CDOTA_Bot::GetEstimatedDamageToTarget(hEnemyBotList.m_Memory.m_pMemory[v34], 1, v38, 5.0, 2);
          v39 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
            v40 = v39;
          else
            v40 = 0;
          ++v35;
          v36 += CDOTA_Bot::GetEstimatedDamageToTarget(hEnemyBotList.m_Memory.m_pMemory[v34++], 1, v40, 5.0, 1);
        }
        while ( hEnemyBotList.m_Size > v35 );
        if ( this->m_iEtherealDamageBonus * v37 / 100 < v36 )
        {
          v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 && (m_pEntity = v42->m_pEntity) != 0 )
          {
            v44 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v45 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v45 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hTarget.m_Index) = v45 | this->m_hTarget.m_Index & 0x8000;
            this->m_hTarget.m_Index = (v44 << 15) | this->m_hTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hTarget.m_Index = -1;
          }
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&hEnemyBotList);
          return 2;
        }
      }
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&hEnemyBotList);
    }
    this->m_hTarget.m_Index = -1;
    return 0;
  }
  return 0;
}


// CDOTA_Bot_AbilityUsage_GhostScepter::UseAbility  (line 93, @0x000000000289fb10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_GhostScepter::UseAbility(CDOTA_Bot_AbilityUsage_GhostScepter *const this)
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


