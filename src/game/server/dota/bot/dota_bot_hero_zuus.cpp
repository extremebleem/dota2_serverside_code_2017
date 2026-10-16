
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Zuus::CDOTA_Bot_Hero_Zuus  (line 21, @0x00000000028f3ba0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "zuus_lightning_bolt", "zuus_thundergods_wrath"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Zuus::CDOTA_Bot_Hero_Zuus(
        CDOTA_Bot_Hero_Zuus *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rdi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // rdi
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D3090;
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_pAbilityArcLightning = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "zuus_arc_lightning", 1);
  v9 = this->m_hUnit.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  this->m_pAbilityLightningBolt = CDOTA_BaseNPC::FindAbilityByName(v12, "zuus_lightning_bolt", 1);
  v13 = this->m_hUnit.m_Index;
  if ( v13 + 2 <= 1
    || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v15 = &v14[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v13 != v15->m_EHandle.m_Index
    || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
    || !v16->m_bIsDOTANPC )
  {
    v16 = 0;
  }
  this->m_pAbilityStaticField = CDOTA_BaseNPC::FindAbilityByName(v16, "zuus_static_field", 1);
  v17 = this->m_hUnit.m_Index;
  if ( v17 + 2 <= 1
    || (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v19 = &v18[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v17 != v19->m_EHandle.m_Index
    || (v20 = v19->m_pInstance, v19->m_pInstance == 0)
    || !v20->m_bIsDOTANPC )
  {
    v20 = 0;
  }
  this->m_pAbilityWrath = CDOTA_BaseNPC::FindAbilityByName(v20, "zuus_thundergods_wrath", 1);
}


// CDOTA_Bot_Hero_Zuus::GetGankDistance  (line 32, @0x00000000028f2e50, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetGankDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Zuus::GetGankDistance(CDOTA_Bot_Hero_Zuus *const this)
{
  CDOTABaseAbility *m_pAbilityLightningBolt; // r12
  CDOTABaseAbility *m_pAbilityArcLightning; // r12
  CDOTABaseAbility *v5; // rdi

  m_pAbilityLightningBolt = this->m_pAbilityLightningBolt;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityLightningBolt) >= 0
    && (*(m_pAbilityLightningBolt->_vptr_IHandleEntity + 245))(m_pAbilityLightningBolt) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityLightningBolt)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityLightningBolt, -1) )
  {
    v5 = this->m_pAbilityLightningBolt;
  }
  else
  {
    m_pAbilityArcLightning = this->m_pAbilityArcLightning;
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityArcLightning) < 0
      || (*(m_pAbilityArcLightning->_vptr_IHandleEntity + 245))(m_pAbilityArcLightning) == 0
      || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityArcLightning)
      || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityArcLightning, -1) )
    {
      return CDOTA_Bot::GetGankDistance(this);
    }
    v5 = this->m_pAbilityArcLightning;
  }
  return (*(v5->_vptr_IHandleEntity + 226))(v5, &vec3_origin, 0) + 200;
}


// CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::CDOTA_Bot_AbilityUsage_Zuus_ArcLightning  (line 51, @0x00000000028f3df0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::CDOTA_Bot_AbilityUsage_Zuus_ArcLightning(
        CDOTA_Bot_AbilityUsage_Zuus_ArcLightning *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D3190;  // vptr: CDOTA_Bot_AbilityUsage_Zuus_ArcLightning
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::GetCurrentUsageDesire  (line 58, @0x00000000028f42d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, IndexToIdentity, IsConsideredHero, IsHero, IsTrained, IsValid, IsValidBotTarget, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, CDOTA_Bot::GetNearbyCreeps, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_TeamCommander::GetOpposingTeamCommander, DOTACommander, CDOTA_Commander::GetIllusionState (19 total)
// strings: "damage_health_pct"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Zuus_ArcLightning *const this)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // rsi
  CDOTA_Bot_Hero_Zuus *v6; // r12
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  int v13; // r12d
  int v14; // r13d
  int LevelSpecialValue; // r12d
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // rdi
  CEntityInstance *v18; // rax
  const CBaseEntity *v19; // rdi
  CDOTA_Bot_Hero_Zuus *m_pBot; // rdi
  int v22; // r12d
  int v23; // r13d
  CDOTA_Bot_Hero_Zuus *v24; // r15
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // rdx
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v29; // rax
  CDOTA_Bot *v30; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v32; // cx
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  unsigned __int8 (__fastcall *v36)(CDOTA_Bot_AbilityUsage_Zuus_ArcLightning *const, _QWORD); // r15
  CDOTA_Commander *v37; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  int v39; // r15d
  CEntityInstance *v40; // rax
  CDOTA_BaseNPC *v41; // rsi
  const Vector *v42; // r15
  CEntityInstance *v43; // rax
  CDOTA_Bot_Hero_Zuus *v44; // r13
  unsigned __int8 (__fastcall *v45)(CDOTA_Bot_Hero_Zuus *, _QWORD); // r14
  unsigned int v46; // eax
  CEntityInstance *v47; // rax
  const CBaseEntity *v48; // rdi
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rax
  int v51; // edx
  __int16 v52; // cx
  CDOTA_Bot_Hero_Zuus *v53; // r12
  CEntityInstance *v54; // rax
  float v55; // r13d
  CDOTA_Bot_Hero_Zuus *v56; // r12
  CEntityInstance *v57; // rax
  int v58; // r12d
  int v59; // r13d
  int v60; // r14d
  float CooldownTimeRemaining; // xmm0_4
  CDOTA_Bot_Hero_Zuus *v62; // r12
  CEntityInstance *v63; // rax
  CEntityInstance *v64; // rdx
  float v65; // [rsp+28h] [rbp-178h]
  float v66; // [rsp+28h] [rbp-178h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyCreeps; // [rsp+30h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v69; // [rsp+168h] [rbp-38h]

  v69 = __readfsqword(0x28u);
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) - 1;
  if ( v2 > 0x10 )
    goto LABEL_30;
  v3 = 1LL << v2;
  if ( ((1LL << v2) & 0x11F80) != 0 )
  {
    m_pBot = this->m_pBot;
    hNearbyCreeps.m_Size = 0;
    hNearbyCreeps.m_Memory.m_pMemory = 0;
    hNearbyCreeps.m_Memory.m_nAllocationCount = 0;
    hNearbyCreeps.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::GetNearbyCreeps(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyCreeps, 0.0);
    if ( hNearbyCreeps.m_Size > 2 )
    {
      v44 = this->m_pBot;
      v45 = *(v44->_vptr_CDOTA_Bot + 10);
      v46 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v45(v44, v46) != 0 )
      {
        v47 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v47 == 0 || (v48 = v47, BYTE3(v47[7]._vptr_IHandleEntity) == 0) )
          v48 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v48);
        SortEHANDLEVectorByLocation(&hNearbyCreeps, AbsOrigin, 0);
        this->m_hDesiredTarget.m_Index = hNearbyCreeps.m_Memory.m_pMemory->m_Index;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
        return 2;
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
LABEL_30:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  if ( (v3 & 0x31) != 0 )
  {
    v22 = 0;
    if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityLightningBolt) >= 0 )
      v22 = (*(this->m_pBot->m_pAbilityLightningBolt->_vptr_IHandleEntity + 273))(
              this->m_pBot->m_pAbilityLightningBolt,
              0xFFFFFFFFLL);
    v23 = 0;
    if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityWrath) >= 0 )
      v23 = (*(this->m_pBot->m_pAbilityWrath->_vptr_IHandleEntity + 273))(this->m_pBot->m_pAbilityWrath, 0xFFFFFFFFLL);
    v24 = this->m_pBot;
    v25 = CEntityHandle::operator CEntityInstance *(&v24->m_hUnit);
    if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
      v26 = v25;
    else
      v26 = 0;
    if ( *&v26[44].m_iszPrivateVScripts.u.m_Id > (v23 + v22) )
    {
      for ( i = 0; i < CDOTA_TeamCommander::GetOpposingTeamCommander(v24->m_pTeamCommander)->m_BotList.m_Size; ++i )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( i < OpposingTeamCommander->m_BotList.m_Size && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
        {
          v29 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v30 = 0;
          if ( i < v29->m_BotList.m_Size )
            v30 = v29->m_BotList.m_Memory.m_pMemory[i];
          m_Index = v30->m_hUnit.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v32 = v30->m_hUnit.m_Index;
            v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v32 >> 9) & 0x3F];
            if ( v33 != 0 )
            {
              v34 = &v33[v32 & 0x1FF];
              if ( v34 != 0 && m_Index == v34->m_EHandle.m_Index )
              {
                m_pInstance = v34->m_pInstance;
                if ( v34->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
                {
                  if ( (m_pInstance->m_iUnitType & 1) == 0
                    || (v36 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                        v37 = DOTACommander(),
                        IllusionState = CDOTA_Commander::GetIllusionState(v37, m_pInstance),
                        v36(this, IllusionState) != 0) )
                  {
                    v39 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
                    v40 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                    if ( v40 == 0 || (v41 = v40, BYTE3(v40[7]._vptr_IHandleEntity) == 0) )
                      v41 = 0;
                    if ( (GetBotTargetStatusCore(m_pInstance, v41, v39, this->m_pAbility) & 0xFB) == 0 )
                    {
                      hEntities.m_Size = 0;
                      hEntities.m_Memory.m_nAllocationCount = 64;
                      hEntities.m_Memory.m_nGrowSize = 0x80000000;
                      hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
                      v42 = CBaseEntity::GetAbsOrigin(m_pInstance);
                      v43 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                      if ( v43 == 0 || BYTE3(v43[7]._vptr_IHandleEntity) == 0 )
                        v43 = 0;
                      FindUnitsInRadius(
                        HIBYTE(v43[7].m_CScriptComponent),
                        v42,
                        m_pInstance,
                        500.0,
                        &hEntities,
                        2,
                        2,
                        0,
                        0,
                        0);
                      if ( hEntities.m_Size > 4 )
                      {
                        m_pEntity = m_pInstance->m_pEntity;
                        if ( m_pEntity != 0 )
                        {
                          v51 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                          v52 = 0x7FFF;
                          if ( m_pEntity->m_EHandle.m_Index != -1 )
                            v52 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                          LOWORD(this->m_hDesiredTarget.m_Index) = v52 | this->m_hDesiredTarget.m_Index & 0x8000;
                          this->m_hDesiredTarget.m_Index = (v51 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                        }
                        else
                        {
                          this->m_hDesiredTarget.m_Index = -1;
                        }
                        hEntities.m_Size = 0;
                        if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                        {
                          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
                          if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
                        }
                        return 2;
                      }
                      hEntities.m_Size = 0;
                      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                      {
                        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
                        if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v24 = this->m_pBot;
      }
    }
    goto LABEL_30;
  }
  if ( (v3 & 2) == 0 )
    goto LABEL_30;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
    goto LABEL_30;
  v6 = this->m_pBot;
  v7 = CEntityHandle::operator CEntityInstance *(&v6->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  v9 = CEntityHandle::operator CEntityInstance *(&v6->m_hTarget);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  if ( (GetBotTargetStatusCore(v10, v8, -1.0, this->m_pAbility) & 0xFB) != 0 )
    goto LABEL_30;
  v65 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
    v12 = 0;
  v13 = 0;
  v14 = (CDOTA_BaseNPC::GetArmorReductionForDamageType(v12, 2) * v65);
  if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityStaticField) >= 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                          this->m_pBot->m_pAbilityStaticField,
                          "damage_health_pct",
                          -1,
                          1);
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
      v17 = v16;
    else
      v17 = 0;
    v13 = CBaseEntity::GetHealth(v17) * LevelSpecialValue / 100;
  }
  v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v19 = v18;
  else
    v19 = 0;
  if ( CBaseEntity::GetHealth(v19) < v14 + v13 )
    return 3;
  if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityLightningBolt) >= 0
    && (*(this->m_pBot->m_pAbilityLightningBolt->_vptr_IHandleEntity + 245))(this->m_pBot->m_pAbilityLightningBolt) != 0 )
  {
    v53 = this->m_pBot;
    v54 = CEntityHandle::operator CEntityInstance *(&v53->m_hUnit);
    if ( v54 == 0 || BYTE3(v54[7]._vptr_IHandleEntity) == 0 )
      v54 = 0;
    v55 = *&v54[44].m_iszPrivateVScripts.u.m_Id;
    if ( v55 > (*(v53->m_pAbilityLightningBolt->_vptr_IHandleEntity + 273))(v53->m_pAbilityLightningBolt, 0xFFFFFFFFLL) )
      goto LABEL_30;
  }
  if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityWrath) >= 0
    && (*(this->m_pBot->m_pAbilityWrath->_vptr_IHandleEntity + 245))(this->m_pBot->m_pAbilityWrath) != 0 )
  {
    v56 = this->m_pBot;
    v57 = CEntityHandle::operator CEntityInstance *(&v56->m_hUnit);
    if ( v57 == 0 || BYTE3(v57[7]._vptr_IHandleEntity) == 0 )
      v57 = 0;
    v66 = *&v57[44].m_iszPrivateVScripts.u.m_Id;
    v58 = (*(v56->m_pAbilityWrath->_vptr_IHandleEntity + 273))(v56->m_pAbilityWrath, 0xFFFFFFFFLL);
    if ( ((*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL) + v58) > v66 )
      goto LABEL_30;
  }
  if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityLightningBolt) < 0
    || CDOTABaseAbility::GetCooldownTimeRemaining(this->m_pBot->m_pAbilityLightningBolt) >= 4.0 )
  {
    v62 = this->m_pBot;
  }
  else
  {
    v59 = 0;
    if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pAbility) >= 0 )
      v59 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    v60 = 0;
    if ( CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityLightningBolt) >= 0 )
      v60 = (*(this->m_pBot->m_pAbilityLightningBolt->_vptr_IHandleEntity + 273))(
              this->m_pBot->m_pAbilityLightningBolt,
              0xFFFFFFFFLL);
    CooldownTimeRemaining = CDOTABaseAbility::GetCooldownTimeRemaining(this->m_pBot->m_pAbilityLightningBolt);
    v62 = this->m_pBot;
    if ( CooldownTimeRemaining < 4.0 )
    {
      v63 = CEntityHandle::operator CEntityInstance *(&v62->m_hUnit);
      if ( v63 != 0 && BYTE3(v63[7]._vptr_IHandleEntity) != 0 )
        v64 = v63;
      else
        v64 = 0;
      if ( *&v64[44].m_iszPrivateVScripts.u.m_Id > (v60 + v59) )
        return 3;
    }
  }
  this->m_hDesiredTarget.m_Index = v62->m_hTarget.m_Index;
  return 2;
}


// CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::UseAbility  (line 167, @0x00000000028f3000, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::UseAbility(
        CDOTA_Bot_AbilityUsage_Zuus_ArcLightning *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_Zuus *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r13

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0 )
        {
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_Zuus_LightningBolt::CDOTA_Bot_AbilityUsage_Zuus_LightningBolt  (line 180, @0x00000000028f3e20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Zuus_LightningBolt::CDOTA_Bot_AbilityUsage_Zuus_LightningBolt(
        CDOTA_Bot_AbilityUsage_Zuus_LightningBolt *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D31F0;  // vptr: CDOTA_Bot_AbilityUsage_Zuus_LightningBolt
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Zuus_LightningBolt::GetCurrentUsageDesire  (line 187, @0x00000000028f33c0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetBotByIndex, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, Length, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, DOTACommander, CDOTA_Commander::GetIllusionState, CEntityHandle::operator CEntityInstance*, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTA_TeamCommander::GetOpposingTeamCommander, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Zuus_LightningBolt::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Zuus_LightningBolt *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v3; // xmm0
  int v4; // eax
  int v5; // eax
  CDOTA_Bot_Hero_Zuus *v7; // r12
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC_Hero *v11; // r13
  unsigned __int8 (__fastcall *v12)(CDOTA_Bot_AbilityUsage_Zuus_LightningBolt *const, _QWORD); // r12
  CDOTA_Commander *v13; // rax
  DOTA_BOT_ILLUSION_STATE v14; // eax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // r13
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // rdi
  int v19; // r12d
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // rdi
  int v24; // eax
  CDOTA_Bot_Hero_Zuus *m_pBot; // rdx
  uint32 m_Index; // ecx
  CEntityIdentity *v27; // rsi
  CEntityIdentity *v28; // rsi
  CEntityInstance *m_pInstance; // rcx
  __int64 v30; // r12
  CDOTA_TeamCommander *v31; // rax
  CDOTA_Bot *v32; // rdx
  uint32 v33; // eax
  unsigned __int16 v34; // cx
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CDOTA_BaseNPC_Hero *v37; // r14
  unsigned __int8 (__fastcall *v38)(CDOTA_Bot_AbilityUsage_Zuus_LightningBolt *const, _QWORD); // r15
  CDOTA_Commander *v39; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  int v41; // eax
  CDOTA_Bot_Hero_Zuus *v42; // rcx
  uint32 v43; // edx
  unsigned __int16 v44; // si
  CEntityIdentity *v45; // rcx
  CEntityIdentity *v46; // rcx
  CDOTA_BaseNPC *v47; // rsi
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  float v49; // xmm0_4
  CEntityIdentity *v50; // rdx
  int v51; // eax
  __int16 v52; // cx
  CEntityIdentity *m_pEntity; // rdx
  int v54; // eax
  __int16 v55; // cx
  __int64 v56; // rax
  CEntityInstance *v57; // rax
  CDOTA_Bot_Hero_Zuus *v58; // r13
  CEntityInstance *v59; // rax
  CEntityInstance *v60; // r12
  const CBaseEntity *v61; // r14
  CEntityInstance *v62; // rax
  const CBaseEntity *v63; // r13
  const Vector *AbsOrigin; // r12
  const Vector *v65; // rax
  CDOTA_BaseNPC *v66; // rdi
  float ArmorReductionForDamageType; // [rsp+Ch] [rbp-44h]
  float v68; // [rsp+Ch] [rbp-44h]
  float fChannelTimeRemaining; // [rsp+14h] [rbp-3Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+18h] [rbp-38h] BYREF

  pChannelTarget = 0;
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v3.m128i_i32 = v4 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v3, &pChannelTarget, &fChannelTimeRemaining) == 0
    || SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) < 0
    || (v49 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining <= v49) )
  {
    v5 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
    if ( v5 != 2 )
    {
      if ( v5 > 2 )
      {
        if ( (v5 - 5) > 1 )
          goto LABEL_6;
      }
      else if ( v5 != 1 )
      {
LABEL_6:
        this->m_hDesiredTarget.m_Index = -1;
        return 0;
      }
      v24 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      m_pBot = this->m_pBot;
      m_Index = m_pBot->m_hUnit.m_Index;
      if ( m_Index + 2 <= 1
        || (v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
        || (v28 = &v27[m_pBot->m_hUnit.m_Index & 0x1FF]) == 0
        || m_Index != v28->m_EHandle.m_Index
        || (m_pInstance = v28->m_pInstance, v28->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      v30 = 0;
      if ( *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id > (4 * v24) )
      {
        while ( v30 < CDOTA_TeamCommander::GetOpposingTeamCommander(m_pBot->m_pTeamCommander)->m_BotList.m_Size )
        {
          OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          if ( v30 < OpposingTeamCommander->m_BotList.m_Size
            && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v30] != 0 )
          {
            v31 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
            v32 = 0;
            if ( v30 < v31->m_BotList.m_Size )
              v32 = v31->m_BotList.m_Memory.m_pMemory[v30];
            v33 = v32->m_hUnit.m_Index;
            if ( v33 + 2 > 1 )
            {
              v34 = v32->m_hUnit.m_Index;
              v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v34 >> 9) & 0x3F];
              if ( v35 != 0 )
              {
                v36 = &v35[v34 & 0x1FF];
                if ( v36 != 0 && v33 == v36->m_EHandle.m_Index )
                {
                  v37 = v36->m_pInstance;
                  if ( v36->m_pInstance != 0
                    && v37->m_bIsDOTANPC
                    && ((v37->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
                  {
                    if ( (v37->m_iUnitType & 1) == 0
                      || (v38 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                          v39 = DOTACommander(),
                          IllusionState = CDOTA_Commander::GetIllusionState(v39, v37),
                          v38(this, IllusionState) != 0) )
                    {
                      v41 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
                      v42 = this->m_pBot;
                      v43 = v42->m_hUnit.m_Index;
                      if ( v43 + 2 <= 1
                        || (v44 = v42->m_hUnit.m_Index,
                            (v45 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v44 >> 9) & 0x3F]) == 0)
                        || (v46 = &v45[v44 & 0x1FF]) == 0
                        || v43 != v46->m_EHandle.m_Index
                        || (v47 = v46->m_pInstance, v46->m_pInstance == 0)
                        || !v47->m_bIsDOTANPC )
                      {
                        v47 = 0;
                      }
                      if ( (GetBotTargetStatusCore(v37, v47, v41, this->m_pAbility) & 0xFB) == 0 )
                      {
                        m_pEntity = v37->m_pEntity;
                        if ( m_pEntity != 0 )
                        {
                          v54 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                          if ( m_pEntity->m_EHandle.m_Index == -1 )
                            v55 = 0x7FFF;
                          else
                            v55 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                          LOWORD(this->m_hDesiredTarget.m_Index) = v55 | this->m_hDesiredTarget.m_Index & 0x8000;
                          this->m_hDesiredTarget.m_Index = (v54 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                          return 2;
                        }
                        else
                        {
                          this->m_hDesiredTarget.m_Index = -1;
                          return 2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          m_pBot = this->m_pBot;
          ++v30;
        }
      }
      goto LABEL_6;
    }
    v7 = this->m_pBot;
    v8 = v7->m_hTarget.m_Index;
    if ( v8 + 2 <= 1 )
      goto LABEL_6;
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v9 == 0 )
      goto LABEL_6;
    v10 = &v9[v7->m_hTarget.m_Index & 0x1FF];
    if ( v10 == 0 )
      goto LABEL_6;
    if ( v8 != v10->m_EHandle.m_Index )
      goto LABEL_6;
    v11 = v10->m_pInstance;
    if ( v10->m_pInstance == 0 || !v11->m_bIsDOTANPC || (v11->m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
      goto LABEL_6;
    if ( (v11->m_iUnitType & 1) != 0 )
    {
      v12 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
      v13 = DOTACommander();
      v14 = CDOTA_Commander::GetIllusionState(v13, v11);
      if ( v12(this, v14) == 0 )
        goto LABEL_6;
      v7 = this->m_pBot;
    }
    v15 = CEntityHandle::operator CEntityInstance *(&v7->m_hUnit);
    if ( v15 == 0 || (v16 = v15, BYTE3(v15[7]._vptr_IHandleEntity) == 0) )
      v16 = 0;
    v17 = CEntityHandle::operator CEntityInstance *(&v7->m_hTarget);
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
      v18 = v17;
    else
      v18 = 0;
    if ( (GetBotTargetStatusCore(v18, v16, -1.0, this->m_pAbility) & 0xFB) != 0 )
      goto LABEL_6;
    v19 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
    v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v20 == 0 || (v21 = v20, BYTE3(v20[7]._vptr_IHandleEntity) == 0) )
      v21 = 0;
    ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v21, 2);
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    v23 = v22;
    if ( v22 == 0 || BYTE3(v22[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_77;
    if ( (v22[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      v56 = *&v22[45].m_worldGroupId.m_nHashCode;
      if ( v56 == 0 )
        goto LABEL_30;
      if ( (*(**(v56 + 34056) + 16LL))(*(v56 + 34056)) == 4 )
        goto LABEL_31;
      v57 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
        v23 = v57;
      else
LABEL_77:
        v23 = 0;
    }
LABEL_30:
    if ( (v19 * ArmorReductionForDamageType) < CBaseEntity::GetHealth(v23) )
    {
      v58 = this->m_pBot;
      v59 = CEntityHandle::operator CEntityInstance *(&v58->m_hUnit);
      v60 = v59;
      if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
        v61 = v59;
      else
        v61 = 0;
      v62 = CEntityHandle::operator CEntityInstance *(&v58->m_hTarget);
      if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
        v63 = v62;
      else
        v63 = 0;
      if ( v61 != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v61);
        v65 = CBaseEntity::GetAbsOrigin(v63);
        v68 = fsqrt(
                (((v65->x - AbsOrigin->x) * (v65->x - AbsOrigin->x))
               + ((v65->y - AbsOrigin->y) * (v65->y - AbsOrigin->y)))
              + ((v65->z - AbsOrigin->z) * (v65->z - AbsOrigin->z)));
        v60 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      }
      else
      {
        v68 = -1.0;
      }
      v66 = v60 != 0 && BYTE3(v60[7]._vptr_IHandleEntity) != 0 ? v60 : 0LL;
      if ( (CDOTA_BaseNPC::GetAttackRange(v66) + 50.0) <= v68 )
        goto LABEL_6;
    }
LABEL_31:
    this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
    return 3;
  }
  if ( pChannelTarget != 0 && (v50 = pChannelTarget->m_pEntity) != 0 )
  {
    v51 = (v50->m_EHandle.m_Index >> 15) - (v50->m_flags & 1);
    if ( v50->m_EHandle.m_Index == -1 )
      v52 = 0x7FFF;
    else
      v52 = v50->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v52 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v51 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Zuus_LightningBolt::UseAbility  (line 268, @0x00000000028f2f20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Zuus_LightningBolt::UseAbility(
        CDOTA_Bot_AbilityUsage_Zuus_LightningBolt *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Zuus *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r12

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath::CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath  (line 281, @0x00000000028f3e50, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath::CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath(
        CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D3250;  // vptr: CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath
}


// CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath::GetCurrentUsageDesire  (line 288, @0x00000000028f30f0, libserver.so)  // inlines: DOTAGameRules, Get, GetBotByIndex, GetBotTargetStatus, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetOpposingTeamCommander, GetTimeSinceLastSeen, GetUnit, IndexToIdentity, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::GetOpposingTeamCommander, DOTACommander, CDOTA_Commander::GetIllusionState, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::FindNearbyTeammatesInMode
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath *const this)
{
  __int64 v2; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_Bot *v4; // r15
  uint32 m_Index; // edx
  CConcreteEntityList *v6; // rsi
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  unsigned __int8 (__fastcall *v10)(CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath *const, _QWORD); // r13
  CDOTA_Commander *v11; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CDOTA_Bot_Hero_Zuus *m_pBot; // rdx
  uint32 v14; // eax
  unsigned __int16 v15; // di
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *v18; // rsi
  char BotTargetStatusCore; // al
  float v20; // xmm0_4
  int nHeroesVulnerable; // [rsp+4h] [rbp-3Ch]
  int iWrathDamage; // [rsp+8h] [rbp-38h]
  float ArmorReductionForDamageType; // [rsp+Ch] [rbp-34h]

  v2 = 0;
  nHeroesVulnerable = 0;
  iWrathDamage = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  while ( v2 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
  {
    OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
    if ( v2 < OpposingTeamCommander->m_BotList.m_Size )
    {
      v4 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v2];
      if ( v4 != 0 )
      {
        m_Index = v4->m_hUnit.m_Index;
        v6 = CEntityHandle::gm_pEntityList;
        if ( m_Index + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_hUnit.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v4->m_hUnit.m_Index & 0x1FF];
            if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
            {
              m_pInstance = v8->m_pInstance;
              if ( v8->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
              {
                if ( (m_pInstance->m_iUnitType & 1) != 0 )
                {
                  v10 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
                  v11 = DOTACommander();
                  IllusionState = CDOTA_Commander::GetIllusionState(v11, m_pInstance);
                  if ( v10(this, IllusionState) == 0 )
                    goto LABEL_2;
                  v6 = CEntityHandle::gm_pEntityList;
                }
                m_pBot = this->m_pBot;
                v14 = m_pBot->m_hUnit.m_Index;
                if ( v14 + 2 <= 1
                  || (v15 = m_pBot->m_hUnit.m_Index, (v16 = v6->m_pIdentityChunks[(v15 >> 9) & 0x3F]) == 0)
                  || (v17 = &v16[v15 & 0x1FF]) == 0
                  || v14 != v17->m_EHandle.m_Index
                  || (v18 = v17->m_pInstance, v17->m_pInstance == 0)
                  || !v18->m_bIsDOTANPC )
                {
                  v18 = 0;
                }
                BotTargetStatusCore = GetBotTargetStatusCore(m_pInstance, v18, -1.0, this->m_pAbility);
                if ( (BotTargetStatusCore & 8) != 0 )
                {
                  v20 = 0.0;
                  if ( g_pGameRules != 0 )
                    v20 = *&g_pGameRules[18].m_szQuestName[20];
                  if ( (v20 - v4->m_fLastSeen) < 5.0 )
                    goto LABEL_40;
                }
                if ( (BotTargetStatusCore & 0xFB) == 0 )
                {
LABEL_40:
                  ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(m_pInstance, 2);
                  if ( (iWrathDamage * (1.0 - ArmorReductionForDamageType)) > CBaseEntity::GetHealth(m_pInstance) )
                  {
                    ++nHeroesVulnerable;
                    if ( CDOTA_Bot::GetNearbyHeroes(v4, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, 0, 500.0) == 0 )
                      return 3;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_2:
    ++v2;
  }
  if ( nHeroesVulnerable > 1
    || CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, -1.0, 0, 0) > 3 )
  {
    return 3;
  }
  return 0;
}


// CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath::UseAbility  (line 343, @0x00000000028f28f0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath::UseAbility(
        CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath *const this)
{
  CDOTA_Bot_Hero_Zuus *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


