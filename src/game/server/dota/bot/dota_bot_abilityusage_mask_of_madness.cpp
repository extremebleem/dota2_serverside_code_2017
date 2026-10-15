
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_MaskOfMadness::CDOTA_Bot_AbilityUsage_MaskOfMadness  (line 23, @0x00000000028a0670, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_MaskOfMadness::CDOTA_Bot_AbilityUsage_MaskOfMadness(
        CDOTA_Bot_AbilityUsage_MaskOfMadness *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C65F0;
}


// CDOTA_Bot_AbilityUsage_MaskOfMadness::GetCurrentUsageDesire  (line 30, @0x000000000289fe20, libserver.so)  // inlines: Get, GetAttackTarget, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_MaskOfMadness::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_MaskOfMadness *const this)
{
  bool v2; // zf
  CDOTA_Bot *m_pBot; // rax
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // r12
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // rbx
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rcx
  uint32 m_Index; // ecx
  CEntityIdentity *v17; // rdx
  __int64 v18; // rdi
  CEntityIdentity *v19; // rdx
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v21; // r8
  const CBaseEntity *v22; // rdx
  int m_pCollision_high; // ecx
  unsigned __int16 v24; // r8
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  const CBaseEntity *v27; // rbx
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rcx

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2;
  m_pBot = this->m_pBot;
  if ( !v2 )
    goto LABEL_17;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) != 0 )
  {
    v18 = m_pBot->m_hUnit.m_Index & 0x1FF;
    v2 = &v17[v18] == 0;
    v19 = &v17[v18];
    m_pInstance = 0;
    v21 = v19;
    v22 = 0;
    if ( !v2 && m_Index == v21->m_EHandle.m_Index )
    {
      m_pInstance = v21->m_pInstance;
      if ( v21->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        v22 = v21->m_pInstance;
    }
  }
  else
  {
    m_pInstance = 0;
    v22 = 0;
  }
  m_pCollision_high = HIDWORD(v22[3].m_pCollision);
  if ( (m_pCollision_high + 2) > 1
    && (v24 = WORD2(v22[3].m_pCollision),
        (v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v24 >> 9) & 0x3F]) != 0)
    && (v26 = &v25[v24 & 0x1FF]) != 0
    && m_pCollision_high == v26->m_EHandle.m_Index
    && v26->m_pInstance != 0 )
  {
    if ( m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
      v27 = m_pInstance;
    else
      v27 = 0;
    v28 = 100LL * CBaseEntity::GetHealth(v27);
    v29 = (*(v27->_vptr_IHandleEntity + 156))(v27);
    v30 = 1;
    if ( v29 > 0 )
      v30 = v29;
    return ((v28 / v30) <= 74) + 2;
  }
  else
  {
LABEL_17:
    if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 17 )
      return 0;
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    v7 = 100LL * CBaseEntity::GetHealth(v6);
    v8 = (*(v6->_vptr_IHandleEntity + 156))(v6);
    v9 = 1;
    if ( v8 > 0 )
      v9 = v8;
    if ( (v7 / v9) > 49 )
      return 0;
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
      v10 = 0;
    v11 = CEntityHandle::operator CEntityInstance *(&v10[59].m_iszPrivateVScripts.u.m_pAsString + 1);
    v12 = v11;
    if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 || BYTE5(v11[45]._vptr_IHandleEntity) == 0 )
      return 0;
    v13 = 100LL * CBaseEntity::GetHealth(v11);
    v14 = (*(v12->_vptr_IHandleEntity + 156))(v12);
    v15 = 1;
    if ( v14 > 0 )
      v15 = v14;
    if ( (v13 / v15) > 75 )
      return 2;
    else
      return 0;
  }
}


// CDOTA_Bot_AbilityUsage_MaskOfMadness::UseAbility  (line 58, @0x000000000289f270, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_MaskOfMadness::UseAbility(CDOTA_Bot_AbilityUsage_MaskOfMadness *const this)
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


