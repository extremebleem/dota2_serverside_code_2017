
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_VeilOfDischord::CDOTA_Bot_AbilityUsage_VeilOfDischord  (line 23, @0x00000000028a76b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_VeilOfDischord::CDOTA_Bot_AbilityUsage_VeilOfDischord(
        CDOTA_Bot_AbilityUsage_VeilOfDischord *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6F70;  // vptr: CDOTA_Bot_AbilityUsage_VeilOfDischord
}


// CDOTA_Bot_AbilityUsage_VeilOfDischord::FindFilter  (line 30, @0x00000000028a7150, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: IsBotTargetStatusValidCore
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_VeilOfDischord::FindFilter(
        CDOTA_Bot_AbilityUsage_VeilOfDischord *const this,
        unsigned __int16 *hUnit)
{
  CDOTA_Bot *m_pBot; // rsi
  uint32 m_Index; // edx
  unsigned __int16 v6; // r8
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi
  CDOTA_BaseNPC *m_pInstance; // rsi
  int v10; // edx
  __int16 v11; // r8
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  CDOTA_BaseNPC *v14; // rdi

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = m_pBot->m_hUnit.m_Index, (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) == 0)
    || (v8 = &v7[v6 & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance) == 0
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v10 = *hUnit;
  if ( (*hUnit + 2) <= 1
    || (v11 = *hUnit, (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hUnit >> 9) & 0x3F]) == 0)
    || (v13 = &v12[v11 & 0x1FF]) == 0
    || v10 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || !v14->m_bIsDOTANPC )
  {
    v14 = 0;
  }
  return IsBotTargetStatusValidCore(v14, m_pInstance, 251, -1.0, this->m_pAbility);
}


// CDOTA_Bot_AbilityUsage_VeilOfDischord::GetCurrentUsageDesire  (line 37, @0x00000000028a9cc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
// strings: "debuff_radius"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_VeilOfDischord::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_VeilOfDischord *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTABaseAbility *v3; // rdi
  int LevelSpecialValue; // r12d
  CDOTABaseAbility *v6; // r13
  CDOTABaseAbility *v7; // rdi
  int v8; // eax
  CDOTA_Bot *m_pBot; // rdx
  float v10; // xmm0_4
  uint32 m_Index; // eax
  int v12; // r13d
  unsigned __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *v18; // rcx
  const Vector *v19; // r8
  uint32 v20; // edx
  unsigned __int16 v21; // ax
  CEntityIdentity *v22; // rcx
  CEntityIdentity *v23; // rcx
  CEntityInstance *v24; // rdx
  int iTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  m_pAbility = this->m_pAbility;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v3 = m_pAbility;
  else
    v3 = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v3, "debuff_radius", -1, 1);
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_5;
  v6 = this->m_pAbility;
  if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v7 = v6;
  else
    v7 = 0;
  v8 = (*(v7->_vptr_IHandleEntity + 226))(v7, &vec3_origin, 0);
  m_pBot = this->m_pBot;
  v10 = v8;
  m_Index = m_pBot->m_hUnit.m_Index;
  v12 = (v10 + 100.0);
  if ( m_Index + 2 <= 1
    || (v13 = m_pBot->m_hUnit.m_Index, (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F]) == 0)
    || (v15 = &v14[v13 & 0x1FF]) == 0
    || m_Index != v15->m_EHandle.m_Index
    || (m_pInstance = v15->m_pInstance, v15->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v18 = this->m_pBot;
  v19 = AbsOrigin;
  v20 = v18->m_hUnit.m_Index;
  if ( v20 + 2 <= 1
    || (v21 = v18->m_hUnit.m_Index, (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v21 >> 9) & 0x3F]) == 0)
    || (v23 = &v22[v21 & 0x1FF]) == 0
    || v20 != v23->m_EHandle.m_Index
    || (v24 = v23->m_pInstance, v23->m_pInstance == 0)
    || BYTE3(v24[7]._vptr_IHandleEntity) == 0 )
  {
    v24 = 0;
  }
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v24[7].m_CScriptComponent),
    1,
    2,
    v19,
    v12,
    0.0,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  if ( iTargetCount > 1 )
  {
    this->m_vTargetLocation = vTargetLoc;
    return 3;
  }
  else
  {
LABEL_5:
    this->m_vTargetLocation = vec3_invalid;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_VeilOfDischord::UseAbility  (line 60, @0x00000000028a6a50, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_VeilOfDischord::UseAbility(CDOTA_Bot_AbilityUsage_VeilOfDischord *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_UseAbility *v4; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vTargetLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


