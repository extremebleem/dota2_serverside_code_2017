
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Cyclone::CDOTA_Bot_AbilityUsage_Cyclone  (line 23, @0x000000000289bff0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Cyclone::CDOTA_Bot_AbilityUsage_Cyclone(
        CDOTA_Bot_AbilityUsage_Cyclone *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5FD0;
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Cyclone::GetCurrentUsageDesire  (line 30, @0x000000000289d1d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotTargetStatus, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, Random, RemoveAll, Set, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, GetBotTargetStatusCore, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_BaseNPC::IsMovementImpaired, CUtlMemory<CDOTA_Bot*, int>::Purge, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::FindAndRemove, RandomInt, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Cyclone::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Cyclone *const this)
{
  CDOTA_Bot *v3; // rbx
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rdi
  CDOTA_Bot *m_pBot; // rax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTABaseAbility *m_pAbility; // rbx
  CDOTABaseAbility *v12; // rdi
  int v13; // eax
  __int64 v14; // r13
  int v15; // r14d
  CDOTA_Bot *v16; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v18; // si
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_Bot *v22; // rdx
  CDOTA_BaseNPC *v23; // rdi
  CEntityIdentity *v24; // rsi
  CEntityIdentity *v25; // rsi
  uint32 v26; // eax
  unsigned __int16 v27; // si
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CDOTA_BaseNPC *v30; // rsi
  CEntityIdentity *m_pEntity; // rax
  int v32; // edx
  __int16 v33; // cx
  CEntityInstance *v34; // rax
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  CDOTA_Bot *v38; // rax
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // r13
  CDOTABaseAbility *v41; // rbx
  CDOTABaseAbility *v42; // rdi
  int v43; // eax
  int m_Size; // esi
  CDOTA_BaseNPC *v45; // rbx
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // rsi
  int v48; // eax
  CEntityInstance *v49; // rax
  int v50; // eax
  CEntityInstance *v51; // rax
  CEntityIdentity *v52; // rax
  int v53; // edx
  __int16 v54; // cx
  CDOTA_Bot *src; // [rsp+0h] [rbp-60h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > EnemyGankingBots; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
  {
    m_pBot = this->m_pBot;
    EnemyGankingBots.m_Size = 0;
    EnemyGankingBots.m_Memory.m_pMemory = 0;
    EnemyGankingBots.m_Memory.m_nAllocationCount = 0;
    EnemyGankingBots.m_Memory.m_nGrowSize = 0;
    v9 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    m_pAbility = this->m_pAbility;
    if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
      v12 = m_pAbility;
    else
      v12 = 0;
    v13 = (*(v12->_vptr_IHandleEntity + 226))(v12, &vec3_origin, 0);
    CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, v13, &EnemyGankingBots, v10);
    if ( EnemyGankingBots.m_Size > 0 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = EnemyGankingBots.m_Memory.m_pMemory[v14];
        m_Index = v16->m_hUnit.m_Index;
        if ( m_Index + 2 <= 1
          || (v18 = v16->m_hUnit.m_Index,
              (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F]) == 0)
          || (v20 = &v19[v18 & 0x1FF]) == 0
          || m_Index != v20->m_EHandle.m_Index
          || (m_pInstance = v20->m_pInstance, v20->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        v22 = this->m_pBot;
        v23 = 0;
        LODWORD(src) = v22->m_hTarget.m_Index;
        if ( (src + 2) > 1 )
        {
          v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(src >> 9) & 0x3F];
          if ( v24 != 0 )
          {
            v25 = &v24[src & 0x1FF];
            if ( v25 != 0 && src == v25->m_EHandle.m_Index )
              v23 = v25->m_pInstance;
          }
        }
        if ( m_pInstance != v23 )
        {
          v26 = v22->m_hUnit.m_Index;
          if ( v26 + 2 <= 1
            || (v27 = v22->m_hUnit.m_Index,
                (v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v27 >> 9) & 0x3F]) == 0)
            || (v29 = &v28[v27 & 0x1FF]) == 0
            || v26 != v29->m_EHandle.m_Index
            || (v30 = v29->m_pInstance, v29->m_pInstance == 0)
            || !v30->m_bIsDOTANPC )
          {
            v30 = 0;
          }
          if ( (GetBotTargetStatusCore(m_pInstance, v30, -1.0, this->m_pAbility) & 0xFB) == 0
            && m_pInstance->m_pBot != 0
            && !CDOTA_BaseNPC::IsMovementImpaired(m_pInstance)
            && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, m_pInstance) )
          {
            break;
          }
        }
        ++v15;
        ++v14;
        if ( EnemyGankingBots.m_Size <= v15 )
          goto LABEL_41;
      }
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v32 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v33 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v33 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v32 << 15) | this->m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
      }
      EnemyGankingBots.m_Size = 0;
      if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
        if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
      }
      return 2;
    }
LABEL_41:
    EnemyGankingBots.m_Size = 0;
    if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
      if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
    }
  }
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 18 )
  {
    v3 = this->m_pBot;
    v4 = CEntityHandle::operator CEntityInstance *(&v3->m_hUnit);
    if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
      v5 = v4;
    else
      v5 = 0;
    v6 = CEntityHandle::operator CEntityInstance *(&v3->m_hTarget);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    if ( (GetBotTargetStatusCore(v7, v5, -1.0, this->m_pAbility) & 0xFB) == 0 )
    {
      this->m_hTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
      return 2;
    }
  }
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 4 )
  {
LABEL_4:
    this->m_hTarget.m_Index = -1;
    return 0;
  }
  if ( CDOTA_Bot::IsAboutToDie(this->m_pBot) )
  {
    v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
    {
      v35 = v34->m_pEntity;
      if ( v35 != 0 )
      {
        v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
        if ( v35->m_EHandle.m_Index == -1 )
          v37 = 0x7FFF;
        else
          v37 = v35->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v37 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v36 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        return 2;
      }
    }
    this->m_hTarget.m_Index = -1;
    return 2;
  }
  v38 = this->m_pBot;
  EnemyGankingBots.m_Size = 0;
  EnemyGankingBots.m_Memory.m_pMemory = 0;
  EnemyGankingBots.m_Memory.m_nAllocationCount = 0;
  EnemyGankingBots.m_Memory.m_nGrowSize = 0;
  v39 = CEntityHandle::operator CEntityInstance *(&v38->m_hUnit);
  if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
    v40 = v39;
  else
    v40 = 0;
  v41 = this->m_pAbility;
  if ( v41 != 0 && (*(v41->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v42 = v41;
  else
    v42 = 0;
  v43 = (*(v42->_vptr_IHandleEntity + 226))(v42, &vec3_origin, 0);
  if ( CDOTA_Bot::FindNearbyEnemiesInMode(
         this->m_pBot,
         DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
         v43,
         &EnemyGankingBots,
         v40) == 0
    || (m_Size = EnemyGankingBots.m_Size, EnemyGankingBots.m_Size <= 0) )
  {
LABEL_97:
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&EnemyGankingBots);
    goto LABEL_4;
  }
  while ( 1 )
  {
    v48 = RandomInt(0, (m_Size - 1));
    v49 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots.m_Memory.m_pMemory[v48]->m_hUnit);
    if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
      v45 = v49;
    else
      v45 = 0;
    v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
      v47 = v46;
    else
      v47 = 0;
    if ( (GetBotTargetStatusCore(v45, v47, -1.0, this->m_pAbility) & 0xFB) == 0
      && !CDOTA_BaseNPC::IsMovementImpaired(v45)
      && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v45) )
    {
      break;
    }
    src = v45->m_pBot;
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndRemove(&EnemyGankingBots, &src);
    m_Size = EnemyGankingBots.m_Size;
    if ( EnemyGankingBots.m_Size <= 0 )
      goto LABEL_97;
  }
  v50 = RandomInt(0, (EnemyGankingBots.m_Size - 1));
  v51 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots.m_Memory.m_pMemory[v50]->m_hUnit);
  if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 && (v52 = v51->m_pEntity) != 0 )
  {
    v53 = (v52->m_EHandle.m_Index >> 15) - (v52->m_flags & 1);
    v54 = 0x7FFF;
    if ( v52->m_EHandle.m_Index != -1 )
      v54 = v52->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v54 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v53 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&EnemyGankingBots);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Cyclone::UseAbility  (line 112, @0x000000000289b7c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Cyclone::UseAbility(CDOTA_Bot_AbilityUsage_Cyclone *const this)
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


