
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_CrimsonGuard::CDOTA_Bot_AbilityUsage_CrimsonGuard  (line 16, @0x000000000289e410, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "bonus_aoe_radius"
void __fastcall CDOTA_Bot_AbilityUsage_CrimsonGuard::CDOTA_Bot_AbilityUsage_CrimsonGuard(
        CDOTA_Bot_AbilityUsage_CrimsonGuard *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5F70;
  this->m_iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "bonus_aoe_radius", -1, 1);
}


// CDOTA_Bot_AbilityUsage_CrimsonGuard::GetCurrentUsageDesire  (line 24, @0x000000000289c110, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyHeroes, CDOTA_Bot::IsAboutToDie, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_CrimsonGuard::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_CrimsonGuard *const this)
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
  CEntityInstance *m_pInstance; // r15
  __int64 v13; // rax
  bool IsAboutToDie; // al
  int v15; // edx
  int result; // eax
  int v17; // [rsp+Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAlliedHeroes; // [rsp+10h] [rbp-50h] BYREF

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
    goto LABEL_25;
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
              if ( v13 != 0
                && ((*(**(v13 + 34056) + 16LL))(*(v13 + 34056)) == 2
                 || (*(**(*&m_pInstance[45].m_worldGroupId.m_nHashCode + 34056LL) + 16LL))(*(*&m_pInstance[45].m_worldGroupId.m_nHashCode
                                                                                           + 34056LL)) == 4) )
              {
                break;
              }
            }
          }
        }
      }
      ++v5;
      ++v4;
      if ( hNearbyAlliedHeroes.m_Size <= v5 )
        goto LABEL_19;
    }
    IsAboutToDie = CDOTA_Bot::IsAboutToDie(*&m_pInstance[45].m_worldGroupId.m_nHashCode);
    v15 = v6 + 1;
    v6 += 2;
    if ( !IsAboutToDie )
      v6 = v15;
    ++v5;
    ++v4;
  }
  while ( hNearbyAlliedHeroes.m_Size > v5 );
LABEL_19:
  result = 3;
  if ( v6 <= 2 )
LABEL_25:
    result = 0;
  hNearbyAlliedHeroes.m_Size = 0;
  if ( (hNearbyAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v17 = result;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAlliedHeroes.m_Memory);
    result = v17;
    if ( (hNearbyAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAlliedHeroes.m_Memory);
      return v17;
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_CrimsonGuard::UseAbility  (line 56, @0x000000000289b250, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_CrimsonGuard::UseAbility(CDOTA_Bot_AbilityUsage_CrimsonGuard *const this)
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


