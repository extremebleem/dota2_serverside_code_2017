
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_SoulRing::CDOTA_Bot_AbilityUsage_SoulRing  (line 23, @0x00000000028a9bb0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "health_sacrifice", "mana_gain"
void __fastcall CDOTA_Bot_AbilityUsage_SoulRing::CDOTA_Bot_AbilityUsage_SoulRing(
        CDOTA_Bot_AbilityUsage_SoulRing *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6D90;  // vptr: CDOTA_Bot_AbilityUsage_SoulRing
  this->m_iHealthLoss = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "health_sacrifice", -1, 1);
  this->m_iManaGain = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "mana_gain", -1, 1);
}


// CDOTA_Bot_AbilityUsage_SoulRing::GetCurrentUsageDesire  (line 32, @0x00000000028a7330, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetAbilityByIndex
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_SoulRing::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_SoulRing *const this)
{
  CEntityInstance *v2; // rax
  const CBaseEntity *v3; // rdi
  int Health; // ecx
  int result; // eax
  int v6; // r12d
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v14; // rbx
  int v15; // eax
  CDOTA_Bot *v16; // rcx
  float v17; // xmm0_4
  uint32 v18; // edx
  unsigned __int16 v19; // ax
  CEntityIdentity *v20; // rcx
  CEntityIdentity *v21; // rcx
  CEntityInstance *v22; // rdx
  CEntityInstance *v23; // rax
  int v24; // eax
  float v25; // [rsp+Ch] [rbp-24h]

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  Health = CBaseEntity::GetHealth(v3);
  result = 0;
  if ( Health > 3 * this->m_iHealthLoss )
  {
    v6 = 0;
    while ( 1 )
    {
      m_pBot = this->m_pBot;
      m_Index = m_pBot->m_hUnit.m_Index;
      if ( m_Index + 2 <= 1
        || (v9 = m_pBot->m_hUnit.m_Index, (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F]) == 0)
        || (v11 = &v10[v9 & 0x1FF]) == 0
        || m_Index != v11->m_EHandle.m_Index
        || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v6);
      v14 = AbilityByIndex;
      if ( AbilityByIndex != 0
        && AbilityByIndex->m_pBotUsage != 0
        && (*(AbilityByIndex->_vptr_IHandleEntity + 245))(AbilityByIndex) != 0 )
      {
        v15 = (*(v14->_vptr_IHandleEntity + 273))(&v14->_vptr_IHandleEntity, 0xFFFFFFFFLL);
        v16 = this->m_pBot;
        v17 = v15;
        v18 = v16->m_hUnit.m_Index;
        if ( v18 + 2 <= 1
          || (v19 = v16->m_hUnit.m_Index,
              (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v19 >> 9) & 0x3F]) == 0)
          || (v21 = &v20[v19 & 0x1FF]) == 0
          || v18 != v21->m_EHandle.m_Index
          || (v22 = v21->m_pInstance, v21->m_pInstance == 0)
          || BYTE3(v22[7]._vptr_IHandleEntity) == 0 )
        {
          v22 = 0;
        }
        if ( v17 > *&v22[44].m_iszPrivateVScripts.u.m_Id )
        {
          v25 = (*(v14->_vptr_IHandleEntity + 273))(&v14->_vptr_IHandleEntity, 0xFFFFFFFFLL);
          v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v23 == 0 || BYTE3(v23[7]._vptr_IHandleEntity) == 0 )
            v23 = 0;
          if ( (this->m_iManaGain + *&v23[44].m_iszPrivateVScripts.u.m_Id) > v25 )
          {
            v24 = (*(v14->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(&v14->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage);
            if ( v24 > 2 )
              return 3;
            if ( v24 > 0 )
              return 2;
          }
        }
      }
      if ( ++v6 == 24 )
        return 0;
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_SoulRing::UseAbility  (line 62, @0x00000000028a6950, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_SoulRing::UseAbility(CDOTA_Bot_AbilityUsage_SoulRing *const this)
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


