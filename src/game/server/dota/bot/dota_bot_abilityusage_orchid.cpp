
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Orchid::CDOTA_Bot_AbilityUsage_Orchid  (line 23, @0x00000000028a4b60, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Orchid::CDOTA_Bot_AbilityUsage_Orchid(
        CDOTA_Bot_AbilityUsage_Orchid *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6910;  // vptr: CDOTA_Bot_AbilityUsage_Orchid
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Orchid::GetCurrentUsageDesire  (line 30, @0x00000000028a4820, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetBotTargetStatus, GetEntityIdentity, GetEntryIndex, GetInstance, GetManaPercent, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: GetBotTargetStatusCore, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetCurrentActiveAbility
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Orchid::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Orchid *const this)
{
  CDOTA_Bot *m_pBot; // rax
  CDOTA_Bot *v4; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v6; // rcx
  __int64 v7; // rdi
  bool v8; // zf
  CEntityIdentity *v9; // rcx
  CEntityInstance *m_pInstance; // rdi
  uint32 v11; // edx
  unsigned __int16 v12; // cx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CDOTA_BaseNPC *v15; // rsi
  CDOTA_Bot *v16; // r12
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // rdi
  CDOTA_Bot *v19; // rdx
  uint32 v20; // eax
  unsigned __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CDOTA_BaseNPC *v24; // rdi

  m_pBot = this->m_pBot;
  if ( m_pBot->m_iDifficulty <= 1 )
    return 0;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_3;
  v4 = this->m_pBot;
  m_Index = v4->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_hTarget.m_Index) >> 9) & 0x3F]) != 0 )
  {
    v7 = v4->m_hTarget.m_Index & 0x1FF;
    v8 = &v6[v7] == 0;
    v9 = &v6[v7];
    m_pInstance = 0;
    if ( !v8 && m_Index == v9->m_EHandle.m_Index )
    {
      m_pInstance = v9->m_pInstance;
      if ( v9->m_pInstance != 0
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) < 0 )
      {
        return 0;
      }
    }
  }
  else
  {
    m_pInstance = 0;
  }
  v11 = v4->m_hUnit.m_Index;
  if ( v11 + 2 <= 1
    || (v12 = v4->m_hUnit.m_Index, (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v12 >> 9) & 0x3F]) == 0)
    || (v14 = &v13[v12 & 0x1FF]) == 0
    || v11 != v14->m_EHandle.m_Index
    || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
    || !v15->m_bIsDOTANPC )
  {
    v15 = 0;
  }
  if ( m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    m_pInstance = 0;
  if ( (GetBotTargetStatusCore(m_pInstance, v15, -1.0, this->m_pAbility) & 0xFB) != 0 )
    goto LABEL_3;
  v16 = this->m_pBot;
  v17 = CEntityHandle::operator CEntityInstance *(&v16->m_hTarget);
  if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
  {
    v18 = v17;
    if ( ((100.0 * *&v17[44].m_iszPrivateVScripts.u.m_Id) / *&v17[44].m_worldGroupId.m_nHashCode) > 25 )
      goto LABEL_20;
    goto LABEL_27;
  }
  v18 = 0;
  if ( ((100.0 * 0.0) / COERCE_FLOAT(7496)) <= 25 )
  {
LABEL_27:
    if ( CDOTA_BaseNPC::GetCurrentActiveAbility(v18) != 0 )
    {
      v19 = this->m_pBot;
      v20 = v19->m_hTarget.m_Index;
      if ( v20 + 2 <= 1
        || (v21 = v19->m_hTarget.m_Index,
            (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v21 >> 9) & 0x3F]) == 0)
        || (v23 = &v22[v21 & 0x1FF]) == 0
        || v20 != v23->m_EHandle.m_Index
        || (v24 = v23->m_pInstance, v23->m_pInstance == 0)
        || !v24->m_bIsDOTANPC )
      {
        v24 = 0;
      }
      if ( CDOTA_BaseNPC::GetCurrentActiveAbility(v24)->m_bChanneling )
      {
        v16 = this->m_pBot;
        goto LABEL_20;
      }
    }
LABEL_3:
    this->m_hTarget.m_Index = -1;
    return 0;
  }
LABEL_20:
  this->m_hTarget.m_Index = v16->m_hTarget.m_Index;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Orchid::UseAbility  (line 58, @0x00000000028a38f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Orchid::UseAbility(CDOTA_Bot_AbilityUsage_Orchid *const this)
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


