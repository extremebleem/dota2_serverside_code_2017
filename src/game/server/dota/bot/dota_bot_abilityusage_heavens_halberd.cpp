
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_HeavensHalberd::CDOTA_Bot_AbilityUsage_HeavensHalberd  (line 23, @0x00000000028a0560, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_HeavensHalberd::CDOTA_Bot_AbilityUsage_HeavensHalberd(
        CDOTA_Bot_AbilityUsage_HeavensHalberd *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6470;  // vptr: CDOTA_Bot_AbilityUsage_HeavensHalberd
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_HeavensHalberd::GetCurrentUsageDesire  (line 30, @0x00000000028a1d00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetSerialNumber, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::FindNearbyEnemiesInMode, DOTACommander, CDOTA_Commander::GetIllusionState, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CUtlMemory<CDOTA_Bot*, int>::Purge, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_HeavensHalberd::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_HeavensHalberd *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  CDOTABaseAbility *v4; // rdi
  int v5; // eax
  __int64 v6; // rbx
  int v7; // r12d
  CDOTA_Bot *v8; // r15
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  unsigned __int8 (__fastcall *v13)(CDOTA_Bot_AbilityUsage_HeavensHalberd *const, _QWORD); // r15
  CDOTA_Commander *v14; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r14
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v22; // eax
  __int16 v23; // cx
  int i; // r12d
  CDOTA_Bot *v25; // r15
  uint32 v26; // eax
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CDOTA_BaseNPC_Hero *v29; // r14
  unsigned __int8 (__fastcall *v30)(CDOTA_Bot_AbilityUsage_HeavensHalberd *const, _QWORD); // r15
  CDOTA_Commander *v31; // rax
  DOTA_BOT_ILLUSION_STATE v32; // eax
  CEntityInstance *v33; // rax
  CDOTA_BaseNPC *v34; // r14
  CEntityInstance *v35; // rax
  CDOTA_BaseNPC *v36; // rdi
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > hGankingEnemies; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
  {
LABEL_2:
    this->m_hTarget.m_Index = -1;
    return 0;
  }
  m_pAbility = this->m_pAbility;
  hGankingEnemies.m_Size = 0;
  hGankingEnemies.m_Memory.m_pMemory = 0;
  hGankingEnemies.m_Memory.m_nAllocationCount = 0;
  hGankingEnemies.m_Memory.m_nGrowSize = 0;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(m_pAbility) != 0 )
    v4 = m_pAbility;
  else
    v4 = 0;
  v5 = (*(v4->_vptr_IHandleEntity + 226))(v4, &vec3_origin, 0);
  CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, v5, &hGankingEnemies, 0);
  if ( hGankingEnemies.m_Size <= 0 )
    goto LABEL_61;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = hGankingEnemies.m_Memory.m_pMemory[v6];
    if ( (v8->m_iUnitType & 0x10) != 0 )
    {
      m_Index = v8->m_hUnit.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hUnit.m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v8->m_hUnit.m_Index & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
            {
              if ( (m_pInstance->m_iUnitType & 1) == 0 )
                goto LABEL_21;
              v13 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
              v14 = DOTACommander();
              IllusionState = CDOTA_Commander::GetIllusionState(v14, m_pInstance);
              if ( v13(this, IllusionState) != 0 )
                break;
            }
          }
        }
      }
    }
LABEL_8:
    ++v7;
    ++v6;
    if ( hGankingEnemies.m_Size <= v7 )
    {
      if ( hGankingEnemies.m_Size > 0 )
      {
        v6 = 0;
        for ( i = 0; hGankingEnemies.m_Size > i; ++i )
        {
          v25 = hGankingEnemies.m_Memory.m_pMemory[v6];
          if ( (v25->m_iUnitType & 0x20) == 0 )
            goto LABEL_39;
          v26 = v25->m_hUnit.m_Index;
          if ( v26 + 2 <= 1 )
            goto LABEL_39;
          v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_hUnit.m_Index) >> 9) & 0x3F];
          if ( v27 == 0 )
            goto LABEL_39;
          v28 = &v27[v25->m_hUnit.m_Index & 0x1FF];
          if ( v28 == 0 )
            goto LABEL_39;
          if ( v26 != v28->m_EHandle.m_Index )
            goto LABEL_39;
          v29 = v28->m_pInstance;
          if ( v28->m_pInstance == 0 || !v29->m_bIsDOTANPC || (v29->m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
            goto LABEL_39;
          if ( (v29->m_iUnitType & 1) != 0 )
          {
            v30 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
            v31 = DOTACommander();
            v32 = CDOTA_Commander::GetIllusionState(v31, v29);
            if ( v30(this, v32) == 0 )
              goto LABEL_39;
            v25 = hGankingEnemies.m_Memory.m_pMemory[v6];
          }
          v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v33 == 0 || (v34 = v33, BYTE3(v33[7]._vptr_IHandleEntity) == 0) )
            v34 = 0;
          v35 = CEntityHandle::operator CEntityInstance *(&v25->m_hUnit);
          if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
            v36 = v35;
          else
            v36 = 0;
          if ( IsBotTargetStatusValidCore(v36, v34, 251, -1.0, this->m_pAbility) )
            goto LABEL_28;
LABEL_39:
          ++v6;
        }
      }
LABEL_61:
      hGankingEnemies.m_Size = 0;
      if ( (hGankingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Bot *,int>::Purge(&hGankingEnemies.m_Memory);
        if ( (hGankingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTA_Bot *,int>::Purge(&hGankingEnemies.m_Memory);
      }
      goto LABEL_2;
    }
  }
  v8 = hGankingEnemies.m_Memory.m_pMemory[v6];
LABEL_21:
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v16 == 0 || (v17 = v16, BYTE3(v16[7]._vptr_IHandleEntity) == 0) )
    v17 = 0;
  v18 = CEntityHandle::operator CEntityInstance *(&v8->m_hUnit);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v19 = v18;
  else
    v19 = 0;
  if ( !IsBotTargetStatusValidCore(v19, v17, 251, -1.0, this->m_pAbility) )
    goto LABEL_8;
LABEL_28:
  v20 = CEntityHandle::operator CEntityInstance *(&hGankingEnemies.m_Memory.m_pMemory[v6]->m_hUnit);
  if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 && (m_pEntity = v20->m_pEntity) != 0 )
  {
    v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v23 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v23 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v22 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  hGankingEnemies.m_Size = 0;
  if ( (hGankingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot *,int>::Purge(&hGankingEnemies.m_Memory);
    if ( (hGankingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot *,int>::Purge(&hGankingEnemies.m_Memory);
  }
  return 3;
}


// CDOTA_Bot_AbilityUsage_HeavensHalberd::UseAbility  (line 68, @0x000000000289f750, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_HeavensHalberd::UseAbility(CDOTA_Bot_AbilityUsage_HeavensHalberd *const this)
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


