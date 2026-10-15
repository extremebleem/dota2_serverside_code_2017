
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_DiffusalBlade::CDOTA_Bot_AbilityUsage_DiffusalBlade  (line 23, @0x000000000289c060, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_DiffusalBlade::CDOTA_Bot_AbilityUsage_DiffusalBlade(
        CDOTA_Bot_AbilityUsage_DiffusalBlade *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6090;
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_DiffusalBlade::GetCurrentUsageDesire  (line 30, @0x000000000289c860, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotTargetStatus, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::FindModifierByName, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CEntityHandle::operator CEntityInstance*, GetBotTargetStatusCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_bloodseeker_rupture"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_DiffusalBlade::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_DiffusalBlade *const this)
{
  CDOTA_Bot *m_pBot; // rdi
  __int64 v3; // r12
  int v4; // ebx
  unsigned __int16 *v5; // rdx
  int v6; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CEntityIdentity *m_pEntity; // rax
  int v12; // edx
  __int16 v13; // cx
  __int16 m_Index; // ax
  int v15; // ebx
  bool v16; // zf
  CDOTA_Bot *v18; // rbx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  CDOTA_Bot *v25; // rax
  CEntityHandle v26; // [rsp-18h] [rbp-68h] BYREF
  int v27; // [rsp-8h] [rbp-58h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAllies; // [rsp+0h] [rbp-50h] BYREF

  v27 = 0;
  m_pBot = this->m_pBot;
  *&hNearbyAllies.m_Size = 0;
  hNearbyAllies.m_Memory.m_pMemory = 0;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &v27, 0.0);
  v3 = 0;
  v4 = 0;
  if ( v27 > 0 )
  {
    while ( 1 )
    {
      v5 = (*&hNearbyAllies.m_Size + v3);
      v6 = *(*&hNearbyAllies.m_Size + v3);
      if ( (v6 + 2) > 1 )
      {
        v7 = *v5;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v5 >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_bloodseeker_rupture", 0) != 0 )
            {
              break;
            }
          }
        }
      }
      ++v4;
      v3 += 4;
      if ( v27 <= v4 )
        goto LABEL_17;
    }
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_38;
  }
  else
  {
LABEL_17:
    if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
      goto LABEL_18;
    v18 = this->m_pBot;
    v26.m_Index = v18->m_hTarget.m_Index;
    if ( v26.m_Index + 2 <= 1 )
      goto LABEL_18;
    v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v26.m_Index) >> 9) & 0x3F];
    if ( v19 == 0 )
      goto LABEL_18;
    v20 = &v19[v26.m_Index & 0x1FF];
    if ( v20 == 0 || v26.m_Index != v20->m_EHandle.m_Index )
      goto LABEL_18;
    v21 = CEntityHandle::operator CEntityInstance *(&v26);
    if ( v21 == 0
      || BYTE3(v21[7]._vptr_IHandleEntity) == 0
      || (v22 = v21, (v21[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v22 = 0;
    }
    v23 = CEntityHandle::operator CEntityInstance *(&v18->m_hUnit);
    if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
      v24 = v23;
    else
      v24 = 0;
    if ( (GetBotTargetStatusCore(v22, v24, -1.0, this->m_pAbility) & 0xFB) != 0
      || CDOTA_BaseNPC::IsMovementImpaired(v22)
      || CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v22)
      || (v25 = v22->m_pBot) == 0
      || (*(v25->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v25->m_pActiveBotMode) != 4 )
    {
LABEL_18:
      this->m_hTarget.m_Index = -1;
      v15 = 0;
      goto LABEL_19;
    }
    m_pEntity = v22->m_pEntity;
    if ( m_pEntity == 0 )
    {
LABEL_38:
      this->m_hTarget.m_Index = -1;
      v15 = 2;
LABEL_19:
      v27 = 0;
      if ( (HIDWORD(hNearbyAllies.m_Memory.m_pMemory) & 0xC0000000) != 0 )
        return v15;
      goto LABEL_15;
    }
  }
  v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v13 = 0x7FFF;
  else
    v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  m_Index = this->m_hTarget.m_Index;
  v15 = 2;
  v27 = 0;
  LOWORD(this->m_hTarget.m_Index) = v13 | m_Index & 0x8000;
  v16 = (HIDWORD(hNearbyAllies.m_Memory.m_pMemory) & 0xC0000000) == 0;
  this->m_hTarget.m_Index = (v12 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  if ( v16 )
  {
LABEL_15:
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAllies);
    if ( (HIDWORD(hNearbyAllies.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAllies);
  }
  return v15;
}


// CDOTA_Bot_AbilityUsage_DiffusalBlade::UseAbility  (line 75, @0x000000000289b6d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_DiffusalBlade::UseAbility(CDOTA_Bot_AbilityUsage_DiffusalBlade *const this)
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


