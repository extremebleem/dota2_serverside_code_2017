
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_ArcaneBoots::CDOTA_Bot_AbilityUsage_ArcaneBoots  (line 23, @0x0000000002899900, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "replenish_amount", "replenish_radius"
void __fastcall CDOTA_Bot_AbilityUsage_ArcaneBoots::CDOTA_Bot_AbilityUsage_ArcaneBoots(
        CDOTA_Bot_AbilityUsage_ArcaneBoots *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5A10;  // vptr: CDOTA_Bot_AbilityUsage_ArcaneBoots
  this->m_iManaAmount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "replenish_amount", -1, 1);
  this->m_iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "replenish_radius", -1, 1);
}


// CDOTA_Bot_AbilityUsage_ArcaneBoots::GetCurrentUsageDesire  (line 32, @0x00000000028974d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetManaPercent, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Min<float>, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyHeroes, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_ArcaneBoots::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_ArcaneBoots *const this)
{
  CDOTA_Bot *m_pBot; // r13
  CEntityInstance *v3; // rax
  CHandle<CBaseEntity> *m_pMemory; // rcx
  int v5; // r8d
  int m_iManaAmount; // r10d
  CHandle<CBaseEntity> *v7; // rax
  CHandle<CBaseEntity> *v8; // rdi
  uint32 m_Index; // esi
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rdx
  int v14; // r13d
  CEntityInstance *v16; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAllies; // [rsp+0h] [rbp-40h] BYREF

  hNearbyAllies.m_Size = 0;
  m_pBot = this->m_pBot;
  hNearbyAllies.m_Memory.m_pMemory = 0;
  hNearbyAllies.m_Memory.m_nAllocationCount = 0;
  hNearbyAllies.m_Memory.m_nGrowSize = 0;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    v3 = 0;
  CDOTA_Bot::FindNearbyHeroes(m_pBot, this->m_iRadius, HIBYTE(v3[7].m_CScriptComponent), &hNearbyAllies);
  if ( hNearbyAllies.m_Size > 0 )
  {
    m_pMemory = hNearbyAllies.m_Memory.m_pMemory;
    v5 = 0;
    m_iManaAmount = this->m_iManaAmount;
    v7 = hNearbyAllies.m_Memory.m_pMemory + 1;
    v8 = &hNearbyAllies.m_Memory.m_pMemory[hNearbyAllies.m_Size - 1 + 1];
    while ( 1 )
    {
      m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1
        && (m_Index_low = LOWORD(m_pMemory->m_Index),
            (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
        && (v12 = &v11[m_Index_low & 0x1FF]) != 0
        && m_Index == v12->m_EHandle.m_Index
        && (m_pInstance = v12->m_pInstance) != 0
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pMemory = v7;
        v5 = (v5
            + fminf(
                m_iManaAmount,
                *&m_pInstance[44].m_worldGroupId.m_nHashCode - *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id));
        if ( v7 == v8 )
          goto LABEL_14;
      }
      else
      {
        m_pMemory = v7;
        if ( v7 == v8 )
          goto LABEL_14;
      }
      ++v7;
    }
  }
  m_iManaAmount = this->m_iManaAmount;
  v5 = 0;
LABEL_14:
  v14 = 3;
  if ( 2 * m_iManaAmount >= v5 )
  {
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
      v16 = 0;
    v14 = 2 * (((100.0 * *&v16[44].m_iszPrivateVScripts.u.m_Id) / *&v16[44].m_worldGroupId.m_nHashCode) <= 49);
  }
  hNearbyAllies.m_Size = 0;
  if ( (hNearbyAllies.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v14;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAllies.m_Memory);
  if ( (hNearbyAllies.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v14;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAllies.m_Memory);
  return v14;
}


// CDOTA_Bot_AbilityUsage_ArcaneBoots::UseAbility  (line 58, @0x0000000002895e10, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_ArcaneBoots::UseAbility(CDOTA_Bot_AbilityUsage_ArcaneBoots *const this)
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


