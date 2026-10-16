
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_AncientJanggo::CDOTA_Bot_AbilityUsage_AncientJanggo  (line 23, @0x00000000028998a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, _Unwind_Resume
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_AncientJanggo::CDOTA_Bot_AbilityUsage_AncientJanggo(
        CDOTA_Bot_AbilityUsage_AncientJanggo *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C59B0;  // vptr: CDOTA_Bot_AbilityUsage_AncientJanggo
  this->m_iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "radius", -1, 1);
}


// CDOTA_Bot_AbilityUsage_AncientJanggo::GetCurrentUsageDesire  (line 31, @0x0000000002897300, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyHeroes, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_AncientJanggo::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_AncientJanggo *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  CEntityInstance *v3; // rax
  __int64 v4; // r12
  int v5; // ebx
  int v6; // r13d
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rax
  __int64 v13; // rax
  int v14; // ebx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAlliedHeroes; // [rsp+0h] [rbp-40h] BYREF

  hNearbyAlliedHeroes.m_Size = 0;
  m_pBot = this->m_pBot;
  hNearbyAlliedHeroes.m_Memory.m_pMemory = 0;
  hNearbyAlliedHeroes.m_Memory.m_nAllocationCount = 0;
  hNearbyAlliedHeroes.m_Memory.m_nGrowSize = 0;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    v3 = 0;
  CDOTA_Bot::FindNearbyHeroes(m_pBot, this->m_iRadius, HIBYTE(v3[7].m_CScriptComponent), &hNearbyAlliedHeroes);
  if ( hNearbyAlliedHeroes.m_Size <= 0 )
    goto LABEL_21;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = &hNearbyAlliedHeroes.m_Memory.m_pMemory[v4];
      m_Index = hNearbyAlliedHeroes.m_Memory.m_pMemory[v4].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v13 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
              if ( v13 != 0 )
                break;
            }
          }
        }
      }
      ++v5;
      ++v4;
      if ( hNearbyAlliedHeroes.m_Size <= v5 )
        goto LABEL_15;
    }
    ++v5;
    ++v4;
    v6 += (*(**(v13 + 34056) + 16LL))(*(v13 + 34056)) == 2;
  }
  while ( hNearbyAlliedHeroes.m_Size > v5 );
LABEL_15:
  v14 = 3;
  if ( v6 <= 1 )
LABEL_21:
    v14 = 0;
  hNearbyAlliedHeroes.m_Size = 0;
  if ( (hNearbyAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v14;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAlliedHeroes.m_Memory);
  if ( (hNearbyAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v14;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAlliedHeroes.m_Memory);
  return v14;
}


// CDOTA_Bot_AbilityUsage_AncientJanggo::UseAbility  (line 58, @0x0000000002895d90, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_AncientJanggo::UseAbility(CDOTA_Bot_AbilityUsage_AncientJanggo *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_UseAbility *v4; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


