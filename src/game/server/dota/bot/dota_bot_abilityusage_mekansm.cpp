
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Mekansm::CDOTA_Bot_AbilityUsage_Mekansm  (line 23, @0x00000000028a2d10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "heal_radius"
void __fastcall CDOTA_Bot_AbilityUsage_Mekansm::CDOTA_Bot_AbilityUsage_Mekansm(
        CDOTA_Bot_AbilityUsage_Mekansm *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C66B0;
  this->m_iHealAmount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "heal_amount", -1, 1);
  this->m_iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "heal_radius", -1, 1);
}


// CDOTA_Bot_AbilityUsage_Mekansm::GetCurrentUsageDesire  (line 32, @0x00000000028a08a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyHeroes, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CBaseEntity::GetHealth, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Bot::IsDangerouslyLow, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_fountain_aura_buff", "modifier_item_mekansm_noheal"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Mekansm::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Mekansm *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  int v8; // ebx
  CDOTA_Bot *v10; // rbx
  CEntityInstance *v11; // rax
  __int64 v12; // rbx
  int v13; // r15d
  CHandle<CBaseEntity> *v14; // rdx
  uint32 v15; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CEntityInstance *v19; // r12
  CModifieractoryDictionary *v20; // rax
  IModifierFactory *Factory; // rax
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rcx
  int v26; // r13d
  int m_iHealAmount; // r13d
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hNearbyAllies; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v29; // [rsp+128h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = m_pBot->m_hUnit.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
    || (v6 = &v5[v4 & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_fountain_aura_buff", 0) == 0 )
  {
    v10 = this->m_pBot;
    hNearbyAllies.m_Size = 0;
    hNearbyAllies.m_Memory.m_nAllocationCount = 64;
    hNearbyAllies.m_Memory.m_nGrowSize = 0x80000000;
    hNearbyAllies.m_Memory.m_pMemory = &hNearbyAllies.m_FixedMemory;
    v11 = CEntityHandle::operator CEntityInstance *(&v10->m_hUnit);
    if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
      v11 = 0;
    CDOTA_Bot::FindNearbyHeroes(v10, this->m_iRadius, HIBYTE(v11[7].m_CScriptComponent), &hNearbyAllies);
    if ( hNearbyAllies.m_Size > 0 )
    {
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = &hNearbyAllies.m_Memory.m_pMemory[v12];
        v15 = v14->m_Index;
        if ( v14->m_Index + 2 > 1 )
        {
          v16 = v14->m_Index;
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[v16 & 0x1FF];
            if ( v18 != 0 && v15 == v18->m_EHandle.m_Index )
            {
              v19 = v18->m_pInstance;
              if ( v18->m_pInstance != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
              {
                v20 = ModifierFactoryDictionary();
                Factory = CModifieractoryDictionary::FindFactory(v20, "modifier_item_mekansm_noheal");
                if ( CDOTA_ModifierManager::FindModifierByName(
                       &v19[64].m_worldGroupId,
                       Factory,
                       "modifier_item_mekansm_noheal",
                       0) == 0 )
                {
                  v22 = 100LL * CBaseEntity::GetHealth(v19);
                  v23 = (*(v19->_vptr_IHandleEntity + 156))(v19);
                  v25 = v23;
                  if ( v23 <= 0 )
                    v25 = 1;
                  if ( (v22 / v25) <= 9 )
                    goto LABEL_29;
                  v26 = (*(v19->_vptr_IHandleEntity + 156))(v19, v24, v22 % v25);
                  m_iHealAmount = v26 - CBaseEntity::GetHealth(v19);
                  if ( m_iHealAmount > this->m_iHealAmount )
                    m_iHealAmount = this->m_iHealAmount;
                  v13 += m_iHealAmount;
                }
              }
            }
          }
        }
        if ( hNearbyAllies.m_Size <= ++v12 )
          goto LABEL_28;
      }
    }
    v13 = 0;
LABEL_28:
    if ( 3 * this->m_iHealAmount < v13 || CDOTA_Bot::IsDangerouslyLow(this->m_pBot) )
LABEL_29:
      v8 = 3;
    else
      v8 = 0;
    hNearbyAllies.m_Size = 0;
    if ( (hNearbyAllies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAllies.m_Memory);
      if ( (hNearbyAllies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyAllies.m_Memory);
    }
  }
  return v8;
}


// CDOTA_Bot_AbilityUsage_Mekansm::UseAbility  (line 67, @0x000000000289f2f0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Mekansm::UseAbility(CDOTA_Bot_AbilityUsage_Mekansm *const this)
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


