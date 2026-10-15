
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_MedallionOfCourage::CDOTA_Bot_AbilityUsage_MedallionOfCourage  (line 23, @0x00000000028a06b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_MedallionOfCourage::CDOTA_Bot_AbilityUsage_MedallionOfCourage(
        CDOTA_Bot_AbilityUsage_MedallionOfCourage *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6650;
  this->m_hTarget.m_Index = -1;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_MedallionOfCourage::GetCurrentUsageDesire  (line 31, @0x00000000028a0110, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetAggroTarget, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: DOTACommander, CDOTA_Commander::GetIllusionState, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_MedallionOfCourage::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_MedallionOfCourage *const this)
{
  bool v2; // zf
  CDOTA_Bot *m_pBot; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  unsigned __int8 (__fastcall *v9)(CDOTA_Bot_AbilityUsage_MedallionOfCourage *const, _QWORD); // r13
  CDOTA_Commander *v10; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC_Hero *v14; // r12
  int m_Id; // eax
  CDOTABaseAbility *v16; // r13
  CDOTABaseAbility *v17; // rdi
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rsi
  unsigned __int8 (__fastcall *v20)(CDOTA_Bot_AbilityUsage_MedallionOfCourage *const, _QWORD); // r13
  CDOTA_Commander *v21; // rax
  DOTA_BOT_ILLUSION_STATE v22; // eax
  CDOTABaseAbility *m_pAbility; // r13
  CDOTABaseAbility *v24; // rdi
  int v25; // eax
  CDOTA_Bot *v26; // rcx
  float v27; // xmm0_4
  uint32 v28; // edx
  unsigned __int16 v29; // ax
  CEntityIdentity *v30; // rcx
  CEntityIdentity *v31; // rcx
  CDOTA_BaseNPC *v32; // rsi
  float fMaxRange; // [rsp+Ch] [rbp-24h]

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2;
  m_pBot = this->m_pBot;
  if ( v2 )
  {
    m_Index = m_pBot->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[m_pBot->m_hTarget.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && m_pInstance->m_bIsDOTANPC
            && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
          {
            if ( (m_pInstance->m_iUnitType & 1) == 0
              || (v9 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                  v10 = DOTACommander(),
                  IllusionState = CDOTA_Commander::GetIllusionState(v10, m_pInstance),
                  v9(this, IllusionState) != 0) )
            {
              m_pAbility = this->m_pAbility;
              if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
                v24 = m_pAbility;
              else
                v24 = 0;
              v25 = (*(v24->_vptr_IHandleEntity + 226))(v24, &vec3_origin, 0);
              v26 = this->m_pBot;
              v27 = v25;
              v28 = v26->m_hUnit.m_Index;
              if ( v28 + 2 <= 1
                || (v29 = v26->m_hUnit.m_Index,
                    (v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v29 >> 9) & 0x3F]) == 0)
                || (v31 = &v30[v29 & 0x1FF]) == 0
                || v28 != v31->m_EHandle.m_Index
                || (v32 = v31->m_pInstance, v31->m_pInstance == 0)
                || !v32->m_bIsDOTANPC )
              {
                v32 = 0;
              }
              if ( IsBotTargetStatusValidCore(m_pInstance, v32, 251, v27, this->m_pAbility) )
                goto LABEL_31;
            }
            m_pBot = this->m_pBot;
          }
        }
      }
    }
  }
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 17 )
  {
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
      v12 = 0;
    v13 = CEntityHandle::operator CEntityInstance *(&v12[59].m_worldGroupId);
    v14 = v13;
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 3) != 0 || this->m_bUseOnCreeps )
      {
        if ( (m_Id & 1) == 0
          || (v20 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
              v21 = DOTACommander(),
              v22 = CDOTA_Commander::GetIllusionState(v21, v14),
              v20(this, v22) != 0) )
        {
          v16 = this->m_pAbility;
          if ( v16 != 0 && (*(v16->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
            v17 = v16;
          else
            v17 = 0;
          fMaxRange = (*(v17->_vptr_IHandleEntity + 226))(v17, &vec3_origin, 0);
          v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
            v19 = v18;
          else
            v19 = 0;
          if ( IsBotTargetStatusValidCore(v14, v19, 251, fMaxRange, this->m_pAbility)
            && (CBaseEntity::GetHealth(v14) > 600 || v14->m_iTeamNum.m_Value == 4 && CBaseEntity::GetHealth(v14) > 400) )
          {
LABEL_31:
            this->m_hTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
            return 2;
          }
        }
      }
    }
  }
  this->m_hTarget.m_Index = -1;
  return 0;
}


// CDOTA_Bot_AbilityUsage_MedallionOfCourage::UseAbility  (line 65, @0x000000000289f840, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_MedallionOfCourage::UseAbility(
        CDOTA_Bot_AbilityUsage_MedallionOfCourage *const this)
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


