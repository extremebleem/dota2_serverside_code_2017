
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Mjollnir::CDOTA_Bot_AbilityUsage_Mjollnir  (line 23, @0x00000000028a4ad0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Mjollnir::CDOTA_Bot_AbilityUsage_Mjollnir(
        CDOTA_Bot_AbilityUsage_Mjollnir *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6850;  // vptr: CDOTA_Bot_AbilityUsage_Mjollnir
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Mjollnir::GetCurrentUsageDesire  (line 30, @0x00000000028a3e40, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=
// calls: CDOTA_Bot::FindNearbyEnemiesInMode
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Mjollnir::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Mjollnir *const this)
{
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *v6; // rax
  __int64 v7; // rax
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_Bot *m_pBot; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // rcx
  CDOTA_Bot *v16; // rdx
  uint32 v17; // eax
  unsigned __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_15;
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[m_pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v14->m_EHandle.m_Index
    || (m_pInstance = v14->m_pInstance, v14->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Bot::FindNearbyEnemiesInMode(m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, m_pInstance) > 0 )
  {
    v16 = this->m_pBot;
    v17 = v16->m_hUnit.m_Index;
    if ( v17 + 2 > 1
      && (v18 = v16->m_hUnit.m_Index, (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F]) != 0)
      && (v20 = &v19[v18 & 0x1FF]) != 0
      && v17 == v20->m_EHandle.m_Index
      && (v21 = v20->m_pInstance, v20->m_pInstance != 0)
      && BYTE3(v21[7]._vptr_IHandleEntity) != 0
      && (m_pEntity = v21->m_pEntity) != 0 )
    {
      v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v24 = 0x7FFF;
      else
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v24 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v23 << 15) | this->m_hTarget.m_Index & 0x7FFF;
      return 2;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
      return 2;
    }
  }
  else
  {
LABEL_15:
    if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 18 )
      return 0;
    v3 = this->m_pBot->m_hTarget.m_Index;
    if ( v3 + 2 <= 1 )
      return 0;
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F];
    if ( v4 != 0
      && (v5 = &v4[v3 & 0x1FF]) != 0
      && v3 == v5->m_EHandle.m_Index
      && (v6 = v5->m_pInstance, v5->m_pInstance != 0)
      && BYTE3(v6[7]._vptr_IHandleEntity) != 0
      && (v6[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && (v7 = *&v6[45].m_worldGroupId.m_nHashCode) != 0
      && (v8 = *(v7 + 712)) + 2 > 1
      && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) != 0
      && (v10 = &v9[v8 & 0x1FF]) != 0
      && v8 == v10->m_EHandle.m_Index )
    {
      this->m_hTarget.m_Index = v8;
      return 2;
    }
    else
    {
      return 0;
    }
  }
}


// CDOTA_Bot_AbilityUsage_Mjollnir::UseAbility  (line 61, @0x00000000028a39e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Mjollnir::UseAbility(CDOTA_Bot_AbilityUsage_Mjollnir *const this)
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


