
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_HandOfMidas::CDOTA_Bot_AbilityUsage_HandOfMidas  (line 23, @0x00000000028a0510, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_HandOfMidas::CDOTA_Bot_AbilityUsage_HandOfMidas(
        CDOTA_Bot_AbilityUsage_HandOfMidas *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6410;  // vptr: CDOTA_Bot_AbilityUsage_HandOfMidas
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_HandOfMidas::GetCurrentUsageDesire  (line 30, @0x00000000028a0700, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetNearbyCreeps, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_HandOfMidas::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_HandOfMidas *const this)
{
  CDOTA_Bot *m_pBot; // rdi
  CEntityInstance *v3; // rax
  const CBaseEntity *v4; // rdi
  const Vector *AbsOrigin; // rax
  uint32 *v6; // rax
  uint32 v7; // ecx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rdx
  bool v11; // zf
  int v12; // ebx
  int v14; // [rsp-8h] [rbp-38h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyCreeps; // [rsp+0h] [rbp-30h] BYREF

  v14 = 0;
  m_pBot = this->m_pBot;
  *&hNearbyCreeps.m_Size = 0;
  hNearbyCreeps.m_Memory.m_pMemory = 0;
  CDOTA_Bot::GetNearbyCreeps(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &v14, 0.0);
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  SortEHANDLEVectorByLocation(&v14, AbsOrigin, 0);
  if ( v14 <= 0 )
  {
LABEL_17:
    this->m_hTarget.m_Index = -1;
    v12 = 0;
    v14 = 0;
    if ( (HIDWORD(hNearbyCreeps.m_Memory.m_pMemory) & 0xC0000000) != 0 )
      return v12;
  }
  else
  {
    v6 = *&hNearbyCreeps.m_Size;
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 + 2 > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v6 >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[*v6 & 0x1FF];
          if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && BYTE5(m_pInstance[45]._vptr_IHandleEntity) == 0 )
            {
              break;
            }
          }
        }
      }
      if ( ++v6 == (*&hNearbyCreeps.m_Size + 4LL * (v14 - 1) + 4) )
        goto LABEL_17;
    }
    v11 = (HIDWORD(hNearbyCreeps.m_Memory.m_pMemory) & 0xC0000000) == 0;
    this->m_hTarget.m_Index = v7;
    v12 = 2;
    v14 = 0;
    if ( !v11 )
      return v12;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyCreeps);
  if ( (HIDWORD(hNearbyCreeps.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyCreeps);
    return v12;
  }
  return v12;
}


// CDOTA_Bot_AbilityUsage_HandOfMidas::UseAbility  (line 53, @0x000000000289f930, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_HandOfMidas::UseAbility(CDOTA_Bot_AbilityUsage_HandOfMidas *const this)
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


