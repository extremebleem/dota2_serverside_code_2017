
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_CrystalMaiden::CDOTA_Bot_Hero_CrystalMaiden  (line 21, @0x00000000028b72a0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "crystal_maiden_crystal_nova", "crystal_maiden_frostbite", "crystal_maiden_brilliance_aura", "crystal_maiden_freezing_field"
void __fastcall CDOTA_Bot_Hero_CrystalMaiden::CDOTA_Bot_Hero_CrystalMaiden(
        CDOTA_Bot_Hero_CrystalMaiden *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CAC70;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityCrystalNova = CDOTA_BaseNPC::FindAbilityByName(v6, "crystal_maiden_crystal_nova", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityFrostbite = CDOTA_BaseNPC::FindAbilityByName(v8, "crystal_maiden_frostbite", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityBrillianceAura = CDOTA_BaseNPC::FindAbilityByName(v10, "crystal_maiden_brilliance_aura", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityFreezingField = CDOTA_BaseNPC::FindAbilityByName(v12, "crystal_maiden_freezing_field", 1);
}


// CDOTA_Bot_Hero_CrystalMaiden::CreateMode  (line 32, @0x00000000028b4350, libserver.so)  // inlines: CDOTA_BotMode_Attack_CrystalMaiden
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_CrystalMaiden::CreateMode(CDOTA_Bot_Hero_CrystalMaiden *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42CAD70;
  return v4;
}


// CDOTA_Bot_Hero_CrystalMaiden::GetMaxRoamDistance  (line 47, @0x00000000028b4b30, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_CrystalMaiden::GetMaxRoamDistance(CDOTA_Bot_Hero_CrystalMaiden *const this)
{
  CDOTABaseAbility *m_pAbilityFrostbite; // rbx

  m_pAbilityFrostbite = this->m_pAbilityFrostbite;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFrostbite) >= 0
    && (*(m_pAbilityFrostbite->_vptr_IHandleEntity + 245))(m_pAbilityFrostbite) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFrostbite)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFrostbite, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BotMode_Attack_CrystalMaiden::GetDesire  (line 59, @0x00000000028b43c0, libserver.so)
// calls: CDOTA_BotMode_Attack::GetDesire
float __fastcall CDOTA_BotMode_Attack_CrystalMaiden::GetDesire(CDOTA_BotMode_Attack_CrystalMaiden *const this)
{
  CDOTA_Bot *m_pBot; // r12

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 2
    && *(*&m_pBot[1].m_bForceIdle + 788LL) != 0 )
  {
    return 0.89999998;
  }
  else
  {
    return CDOTA_BotMode_Attack::GetDesire(this);
  }
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova  (line 82, @0x00000000028b73d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CAE10;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::FindFilter  (line 90, @0x00000000028b4ef0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::FindFilter(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova *const this,
        _DWORD *hUnit)
{
  _BOOL4 m_bIsDOTANPC; // ebx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // r13
  int Health; // ebx

  m_bIsDOTANPC = 0;
  if ( (*hUnit + 2) <= 1 )
    return m_bIsDOTANPC;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hUnit >> 9) & 0x3F];
  if ( v4 == 0 )
    return m_bIsDOTANPC;
  v5 = &v4[*hUnit & 0x1FF];
  if ( v5 == 0 )
    return m_bIsDOTANPC;
  if ( *hUnit != v5->m_EHandle.m_Index )
    return m_bIsDOTANPC;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return m_bIsDOTANPC;
  m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
  if ( !m_bIsDOTANPC
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 17 )
  {
    return m_bIsDOTANPC;
  }
  Health = CBaseEntity::GetHealth(m_pInstance);
  LOBYTE(Health) = Health < (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  return Health;
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire  (line 112, @0x00000000028bb3d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotTargetStatus, GetInstance, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, IsConsideredHero, IsFullyCastable, IsHero, IsTrained, IsValidBotTarget, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetHealthEstimate, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander, CDOTA_Commander::GetIllusionState, GetBotTargetStatusCore, CDOTA_BaseNPC::IsMovementImpaired, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetOpposingTeamNumber (21 total)
// globals: jpt_28BB447
// local variable allocation has failed, the output may be wrong!
int __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova *const this)
{
  int v2; // r12d
  int LevelSpecialValue; // r13d
  CEntityInstance *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rdi
  CDOTA_Bot_Hero_CrystalMaiden *v7; // rdi
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v11; // r14
  int v12; // r13d
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC_Hero *v14; // r12
  int m_Id; // eax
  CDOTA_Commander *v16; // rax
  __int64 IllusionState; // rsi
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rsi
  int result; // eax
  CEntityInstance *v21; // rax
  const CBaseEntity *v22; // rdi
  const Vector *v23; // r14
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  int OpposingTeamNumber; // eax
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rsi
  CDOTA_Bot_Hero_CrystalMaiden *v29; // r12
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC *v31; // r13
  CEntityInstance *v32; // rax
  CDOTA_BaseNPC *v33; // rdi
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // r12
  CEntityInstance *v36; // rax
  CDOTA_Bot *v37; // rdi
  CDOTABaseAbility *m_pAbilityFrostbite; // r12
  CEntityInstance *v39; // rax
  CDOTA_BaseNPC *v40; // rsi
  CDOTA_Bot_Hero_CrystalMaiden *m_pBot; // r12
  CEntityInstance *v42; // rax
  CDOTA_BaseNPC *v43; // r13
  CEntityInstance *v44; // rax
  CDOTA_BaseNPC *v45; // rdi
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // rdi
  CDOTA_Bot_Hero_CrystalMaiden *v48; // r12
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *v50; // rdx
  CEntityInstance *v51; // rax
  const CBaseEntity *v52; // rdi
  const CEntityHandle *v53; // rdi
  int v54; // r12d
  CEntityInstance *v55; // rax
  const CBaseEntity *v56; // rdi
  const Vector *v57; // r14
  CEntityInstance *v58; // rax
  CEntityInstance *v59; // rdx
  CDOTA_Bot_Hero_CrystalMaiden *v60; // r12
  unsigned __int8 (__fastcall *v61)(CDOTA_Bot_Hero_CrystalMaiden *, _QWORD); // r13
  unsigned int v62; // eax
  CDOTA_Bot_Hero_CrystalMaiden *v63; // r12
  unsigned __int8 (__fastcall *v64)(CDOTA_Bot_Hero_CrystalMaiden *, _QWORD); // r13
  unsigned int v65; // eax
  unsigned __int8 (__fastcall *v66)(CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova *const, __int64); // [rsp+28h] [rbp-68h]
  int iTargetCount; // [rsp+3Ch] [rbp-54h] BYREF
  __int128 vTargetLoc; // [rsp+40h] [rbp-50h] OVERLAPPED BYREF
  int v69; // [rsp+50h] [rbp-40h]
  int v70; // [rsp+54h] [rbp-3Ch]

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 2u:
      m_pAbilityFrostbite = this->m_pBot->m_pAbilityFrostbite;
      if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFrostbite) >= 0
        && (*(m_pAbilityFrostbite->_vptr_IHandleEntity + 245))(m_pAbilityFrostbite) != 0
        && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFrostbite)
        && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFrostbite, -1)
        || CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityFreezingField) )
      {
        goto LABEL_24;
      }
      v39 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v39 == 0 || (v40 = v39, BYTE3(v39[7]._vptr_IHandleEntity) == 0) )
        v40 = 0;
      if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v40) )
        goto LABEL_24;
      m_pBot = this->m_pBot;
      v42 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
        v43 = v42;
      else
        v43 = 0;
      v44 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
      if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
        v45 = v44;
      else
        v45 = 0;
      if ( (GetBotTargetStatusCore(v45, v43, -1.0, this->m_pAbility) & 0xFB) != 0 )
        goto LABEL_24;
      v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v46 == 0 || (v47 = v46, BYTE3(v46[7]._vptr_IHandleEntity) == 0) )
        v47 = 0;
      if ( CDOTA_BaseNPC::IsMovementImpaired(v47) )
        goto LABEL_24;
      v48 = this->m_pBot;
      v49 = CEntityHandle::operator CEntityInstance *(&v48->m_hTarget);
      if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
        v50 = v49;
      else
        v50 = 0;
      if ( CDOTA_TeamCommander::HasIncomingStun(v48->m_pTeamCommander, v48, v50) )
        goto LABEL_24;
      v51 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v51 == 0 || (v52 = v51, BYTE3(v51[7]._vptr_IHandleEntity) == 0) )
        v52 = 0;
      this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v52);
      return 3;
    case 4u:
      v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
        v6 = v4;
      else
        v6 = 0;
      if ( CDOTA_BaseNPC::GetHealthEstimate(v6, v5) <= 200 )
        goto LABEL_24;
      v7 = this->m_pBot;
      LODWORD(vTargetLoc) = 0;
      *(&vTargetLoc + 1) = 0;
      v69 = 0;
      v70 = 0;
      CDOTA_Bot::GetNearbyHeroes(v7, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &vTargetLoc, v2);
      v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
        v9 = v8;
      else
        v9 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      SortEHANDLEVectorByLocation(&vTargetLoc, AbsOrigin, 0);
      if ( vTargetLoc <= 0 )
        goto LABEL_23;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = CEntityHandle::operator CEntityInstance *((*(&vTargetLoc + 1) + v11));
        v14 = v13;
        if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        {
          m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 3) != 0 || this->m_bUseOnCreeps )
          {
            if ( (m_Id & 1) == 0
              || (v66 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                  v16 = DOTACommander(),
                  IllusionState = CDOTA_Commander::GetIllusionState(v16, v14),
                  v66(this, IllusionState) != 0) )
            {
              v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v18 == 0 || (v19 = v18, BYTE3(v18[7]._vptr_IHandleEntity) == 0) )
                v19 = 0;
              if ( (GetBotTargetStatusCore(v14, v19, -1.0, this->m_pAbility) & 0xFB) == 0
                && !CDOTA_BaseNPC::IsMovementImpaired(v14)
                && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v14) )
              {
                break;
              }
            }
          }
        }
        ++v12;
        v11 += 4;
        if ( vTargetLoc <= v12 )
        {
LABEL_23:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vTargetLoc);
          goto LABEL_24;
        }
      }
      this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v14);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vTargetLoc);
      return 1;
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      v23 = CBaseEntity::GetAbsOrigin(v22);
      v24 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
        v25 = v24;
      else
        v25 = 0;
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v25);
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        OpposingTeamNumber,
        2,
        1,
        v23,
        v2,
        0.0,
        LevelSpecialValue,
        &vTargetLoc,
        &iTargetCount);
      if ( iTargetCount > 3 )
      {
        v63 = this->m_pBot;
        v64 = *(v63->_vptr_CDOTA_Bot + 10);
        v65 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
        if ( v64(v63, v65) != 0 )
          goto LABEL_93;
      }
      goto LABEL_32;
    case 0x11u:
      v53 = this->m_pBot;
      if ( v53[49].m_Index == 0 )
        goto LABEL_24;
      v54 = (v2 + 100.0);
      v55 = CEntityHandle::operator CEntityInstance *(v53 + 39);
      if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
        v56 = v55;
      else
        v56 = 0;
      v57 = CBaseEntity::GetAbsOrigin(v56);
      v58 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v58 != 0 && BYTE3(v58[7]._vptr_IHandleEntity) != 0 )
        v59 = v58;
      else
        v59 = 0;
      CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        this,
        HIBYTE(v59[7].m_CScriptComponent),
        2,
        2,
        v57,
        v54,
        0.0,
        LevelSpecialValue,
        &vTargetLoc,
        &iTargetCount);
      if ( iTargetCount <= 1 )
        goto LABEL_24;
      v60 = this->m_pBot;
      v61 = *(v60->_vptr_CDOTA_Bot + 10);
      v62 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v61(v60, v62) == 0 )
        goto LABEL_24;
LABEL_93:
      *&this->m_vDesiredLocation.x = vTargetLoc;
      this->m_vDesiredLocation.z = *(&vTargetLoc + 2);
      return 2;
    case 0x12u:
LABEL_32:
      v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
        v28 = v27;
      else
        v28 = 0;
      if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v28) )
        goto LABEL_24;
      v29 = this->m_pBot;
      v30 = CEntityHandle::operator CEntityInstance *(&v29->m_hUnit);
      if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
        v31 = v30;
      else
        v31 = 0;
      v32 = CEntityHandle::operator CEntityInstance *(&v29->m_hTarget);
      if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
        v33 = v32;
      else
        v33 = 0;
      if ( (GetBotTargetStatusCore(v33, v31, -1.0, this->m_pAbility) & 0xFB) != 0 )
        goto LABEL_24;
      LODWORD(vTargetLoc) = this->m_pBot->m_hTarget.m_Index;
      v34 = CEntityHandle::operator CEntityInstance *(&vTargetLoc);
      v35 = v34;
      if ( v34 == 0 )
        goto LABEL_24;
      if ( BYTE3(v34[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_24;
      if ( (v34[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        goto LABEL_24;
      if ( *&v34[45].m_worldGroupId.m_nHashCode == 0 )
        goto LABEL_24;
      if ( CDOTA_BaseNPC::IsMovementImpaired(v34) )
        goto LABEL_24;
      if ( CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v35) )
        goto LABEL_24;
      LODWORD(vTargetLoc) = v35->m_pBot->m_hTarget.m_Index;
      v36 = CEntityHandle::operator CEntityInstance *(&vTargetLoc);
      if ( v36 == 0 )
        goto LABEL_24;
      if ( BYTE3(v36[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_24;
      if ( (v36[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        goto LABEL_24;
      v37 = *&v36[45].m_worldGroupId.m_nHashCode;
      if ( v37 == 0 || !CDOTA_Bot::IsAboutToDie(v37) )
        goto LABEL_24;
      this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v35);
      result = 1;
      break;
    default:
LABEL_24:
      this->m_vDesiredLocation = vec3_origin;
      result = 0;
      break;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::UseAbility  (line 223, @0x00000000028b4420, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::UseAbility(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova *const this)
{
  CDOTA_Bot_Hero_CrystalMaiden *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite  (line 232, @0x00000000028b73f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CAE70;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::GetCurrentUsageDesire  (line 239, @0x00000000028b7c20, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetManaPercent, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsConsideredHero, IsHero, IsValid, IsValidBotTarget, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, DOTACommander, CDOTA_Commander::GetIllusionState, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (14 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  CDOTA_Bot *v7; // rax
  CEntityInstance *v8; // rax
  CDOTA_Bot *v9; // rdi
  CEntityIdentity *v10; // rax
  __int16 v11; // cx
  int v12; // edx
  CDOTABaseAbility *m_pAbility; // rdi
  int v15; // eax
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v19; // r13
  int v20; // r12d
  CHandle<CBaseEntity> *v21; // rdx
  uint32 m_Index; // eax
  __int16 v23; // cx
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  unsigned __int8 (__fastcall *v27)(CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite *const, _QWORD); // r15
  CDOTA_Commander *v28; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC *v31; // rsi
  CEntityIdentity *v32; // rdx
  int v33; // eax
  __int16 v34; // cx
  CDOTA_Bot_Hero_CrystalMaiden *v35; // r13
  CEntityInstance *v36; // rax
  __int64 v37; // r12
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC *v39; // rsi
  CDOTA_Bot_Hero_CrystalMaiden *m_pBot; // r12
  CEntityInstance *v41; // rax
  CDOTA_BaseNPC *v42; // r13
  CEntityInstance *v43; // rax
  CDOTA_BaseNPC *v44; // rdi
  CEntityInstance *v45; // rax
  CDOTA_BaseNPC *v46; // rdi
  CDOTA_Bot_Hero_CrystalMaiden *v47; // r12
  CEntityInstance *v48; // rax
  CDOTA_BaseNPC *v49; // rdx
  CEntityInstance *v50; // rax
  CDOTA_TeamCommander *v51; // rax
  const CEntityHandle *v52; // rdi
  CEntityInstance *v53; // rax
  CDOTA_BaseNPC *v54; // r13
  CEntityInstance *v55; // rax
  CDOTA_BaseNPC *v56; // rsi
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CEntityIdentity *v58; // rdx
  int v59; // eax
  __int16 v60; // cx
  CEntityIdentity *m_pEntity; // rdx
  int v62; // eax
  __int16 v63; // cx
  float fMaxRange; // [rsp+Ch] [rbp-54h]
  float fMaxRangea; // [rsp+Ch] [rbp-54h]
  float fMaxRangeb; // [rsp+Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+10h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 )
  {
    v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
      v39 = v38;
    else
      v39 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v39) )
    {
      m_pBot = this->m_pBot;
      v41 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
        v42 = v41;
      else
        v42 = 0;
      v43 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
      if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
        v44 = v43;
      else
        v44 = 0;
      if ( (GetBotTargetStatusCore(v44, v42, -1.0, this->m_pAbility) & 0xFB) == 0 )
      {
        v45 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v45 == 0 || (v46 = v45, BYTE3(v45[7]._vptr_IHandleEntity) == 0) )
          v46 = 0;
        if ( !CDOTA_BaseNPC::IsMovementImpaired(v46) )
        {
          v47 = this->m_pBot;
          v48 = CEntityHandle::operator CEntityInstance *(&v47->m_hTarget);
          if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 )
            v49 = v48;
          else
            v49 = 0;
          if ( !CDOTA_TeamCommander::HasIncomingStun(v47->m_pTeamCommander, v47, v49) )
          {
            v50 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
            if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
            {
              m_pEntity = v50->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v62 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                if ( m_pEntity->m_EHandle.m_Index == -1 )
                  v63 = 0x7FFF;
                else
                  v63 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hDesiredTarget.m_Index) = v63 | this->m_hDesiredTarget.m_Index & 0x8000;
                v12 = v62 << 15;
                goto LABEL_27;
              }
            }
            goto LABEL_84;
          }
        }
      }
    }
LABEL_56:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  if ( v2 <= 2 )
  {
    if ( v2 == 1 )
    {
      v35 = this->m_pBot;
      v36 = CEntityHandle::operator CEntityInstance *(&v35->m_hUnit);
      if ( v36 == 0 || BYTE3(v36[7]._vptr_IHandleEntity) == 0 )
        v36 = 0;
      if ( ((100.0 * *&v36[44].m_iszPrivateVScripts.u.m_Id) / *&v36[44].m_worldGroupId.m_nHashCode) > 90
        && v35->m_nAttackingCreeps == 0 )
      {
        v37 = 0;
        if ( v35->m_nNearbyEnemyCreeps <= 1 )
        {
          while ( v37 < CDOTA_TeamCommander::GetOpposingTeamCommander(v35->m_pTeamCommander)->m_BotList.m_Size )
          {
            OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
            if ( v37 < OpposingTeamCommander->m_BotList.m_Size
              && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v37] != 0 )
            {
              v51 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
              v52 = 0;
              if ( v37 < v51->m_BotList.m_Size )
                v52 = v51->m_BotList.m_Memory.m_pMemory[v37];
              v53 = CEntityHandle::operator CEntityInstance *(v52 + 39);
              if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
                v54 = v53;
              else
                v54 = 0;
              if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v54) )
              {
                fMaxRangeb = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) + 100.0;
                v55 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
                  v56 = v55;
                else
                  v56 = 0;
                if ( (GetBotTargetStatusCore(v54, v56, fMaxRangeb, this->m_pAbility) & 0xFB) == 0
                  && !CDOTA_BaseNPC::IsMovementImpaired(v54)
                  && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v54) )
                {
                  if ( v54 != 0 && (v58 = v54->m_pEntity) != 0 )
                  {
                    v59 = (v58->m_EHandle.m_Index >> 15) - (v58->m_flags & 1);
                    if ( v58->m_EHandle.m_Index == -1 )
                      v60 = 0x7FFF;
                    else
                      v60 = v58->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(this->m_hDesiredTarget.m_Index) = v60 | this->m_hDesiredTarget.m_Index & 0x8000;
                    this->m_hDesiredTarget.m_Index = (v59 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                    return 1;
                  }
                  else
                  {
                    this->m_hDesiredTarget.m_Index = -1;
                    return 1;
                  }
                }
              }
            }
            v35 = this->m_pBot;
            ++v37;
          }
        }
      }
    }
    goto LABEL_56;
  }
  if ( v2 != 4 )
  {
    if ( v2 == 18 )
    {
      hEntities.m_Size = this->m_pBot->m_hTarget.m_Index;
      v3 = CEntityHandle::operator CEntityInstance *(&hEntities);
      if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 || (v4 = v3, (v3[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
        v4 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4) )
      {
        fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) + 100.0;
        v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
          v6 = v5;
        else
          v6 = 0;
        if ( (GetBotTargetStatusCore(v4, v6, fMaxRange, this->m_pAbility) & 0xFB) == 0
          && !CDOTA_BaseNPC::IsMovementImpaired(v4)
          && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v4) )
        {
          v7 = v4->m_pBot;
          if ( v7 != 0 )
          {
            hEntities.m_Size = v7->m_hTarget.m_Index;
            v8 = CEntityHandle::operator CEntityInstance *(&hEntities);
            if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 && (v8[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v9 = *&v8[45].m_worldGroupId.m_nHashCode;
              if ( v9 != 0
                && CDOTA_Bot::IsAboutToDie(v9)
                && !CDOTA_BaseNPC::IsMovementImpaired(v4)
                && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v4) )
              {
                v10 = v4->m_pEntity;
                if ( v10 != 0 )
                {
                  if ( v10->m_EHandle.m_Index == -1 )
                    v11 = 0x7FFF;
                  else
                    v11 = v10->m_EHandle.m_Index & 0x7FFF;
                  v12 = ((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15;
                  LOWORD(this->m_hDesiredTarget.m_Index) = v11 | this->m_hDesiredTarget.m_Index & 0x8000;
LABEL_27:
                  this->m_hDesiredTarget.m_Index = v12 | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  return 3;
                }
LABEL_84:
                this->m_hDesiredTarget.m_Index = -1;
                return 3;
              }
            }
          }
        }
      }
    }
    goto LABEL_56;
  }
  m_pAbility = this->m_pAbility;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v15 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, v15);
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
  SortEHANDLEVectorByLocation(&hEntities, AbsOrigin, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_55:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    goto LABEL_56;
  }
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v21 = &hEntities.m_Memory.m_pMemory[v19];
    m_Index = hEntities.m_Memory.m_pMemory[v19].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v23 = v21->m_Index;
      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Index) >> 9) & 0x3F];
      if ( v24 != 0 )
      {
        v25 = &v24[v23 & 0x1FF];
        if ( v25 != 0 && m_Index == v25->m_EHandle.m_Index )
        {
          m_pInstance = v25->m_pInstance;
          if ( v25->m_pInstance != 0
            && m_pInstance->m_bIsDOTANPC
            && ((m_pInstance->m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
          {
            if ( (m_pInstance->m_iUnitType & 1) == 0
              || (v27 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                  v28 = DOTACommander(),
                  IllusionState = CDOTA_Commander::GetIllusionState(v28, m_pInstance),
                  v27(this, IllusionState) != 0) )
            {
              fMaxRangea = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) + 100.0;
              v30 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
                v31 = v30;
              else
                v31 = 0;
              if ( (GetBotTargetStatusCore(m_pInstance, v31, fMaxRangea, this->m_pAbility) & 0xFB) == 0
                && !CDOTA_BaseNPC::IsMovementImpaired(m_pInstance)
                && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, m_pInstance) )
              {
                break;
              }
            }
          }
        }
      }
    }
    ++v20;
    ++v19;
    if ( hEntities.m_Size <= v20 )
      goto LABEL_55;
  }
  v32 = m_pInstance->m_pEntity;
  if ( v32 != 0 )
  {
    v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
    v34 = 0x7FFF;
    if ( v32->m_EHandle.m_Index != -1 )
      v34 = v32->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v34 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v33 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  return 1;
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::UseAbility  (line 335, @0x00000000028b5670, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::UseAbility(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_CrystalMaiden *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v9; // r13

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, v5->m_pInstance, 2.0, v1);
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v9 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v9);
        }
      }
    }
  }
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField  (line 349, @0x00000000028b7420, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CAED0;
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::GetCurrentUsageDesire  (line 356, @0x00000000028bbcf0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotTargetStatus, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsConsideredHero, IsValid, IsValidBotTarget, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyHeroes, DOTACommander, CDOTA_Commander::GetIllusionState, GetBotTargetStatusCore, CDOTA_Bot::GetStunDuration, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField *const this)
{
  int LevelSpecialValue; // ebx
  CDOTA_Bot_Hero_CrystalMaiden *m_pBot; // rax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  int OpposingTeamNumber; // eax
  __int64 v8; // rbx
  int v9; // r14d
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  uint32 m_iUnitType; // eax
  unsigned __int8 (__fastcall *v17)(CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField *const, _QWORD); // r15
  CDOTA_Commander *v18; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rsi
  CEntityInstance *v22; // rax
  CDOTA_Bot *v23; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+10h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    return 0;
  m_pBot = this->m_pBot;
  hEnemyHeroes.m_Size = 0;
  hEnemyHeroes.m_Memory.m_pMemory = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0;
  v5 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v6);
  CDOTA_Bot::FindNearbyHeroes(this->m_pBot, (LevelSpecialValue * 1.25), OpposingTeamNumber, &hEnemyHeroes);
  if ( hEnemyHeroes.m_Size <= 0 )
    goto LABEL_31;
  v8 = 0;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v10 = &hEnemyHeroes.m_Memory.m_pMemory[v8];
      m_Index = v10->m_Index;
      if ( v10->m_Index + 2 > 1 )
      {
        v12 = v10->m_Index;
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[v12 & 0x1FF];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          {
            m_pInstance = v14->m_pInstance;
            if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              m_iUnitType = m_pInstance->m_iUnitType;
              if ( (m_iUnitType & 1) != 0 && ((m_iUnitType & 3) != 0 || this->m_bUseOnCreeps) )
              {
                v17 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
                v18 = DOTACommander();
                IllusionState = CDOTA_Commander::GetIllusionState(v18, m_pInstance);
                if ( v17(this, IllusionState) != 0 )
                {
                  v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                  if ( v20 == 0 || (v21 = v20, BYTE3(v20[7]._vptr_IHandleEntity) == 0) )
                    v21 = 0;
                  if ( (GetBotTargetStatusCore(m_pInstance, v21, -1.0, this->m_pAbility) & 0xFB) == 0 )
                    break;
                }
              }
            }
          }
        }
      }
      if ( hEnemyHeroes.m_Size <= ++v8 )
        goto LABEL_28;
    }
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v22 == 0 || BYTE3(v22[7]._vptr_IHandleEntity) == 0 )
      v22 = 0;
    if ( (BYTE1(v22[58]._vptr_IHandleEntity) & 2) == 0 )
    {
      v23 = m_pInstance->m_pBot;
      if ( v23 != 0 && CDOTA_Bot::GetStunDuration(v23, 1) > 0.0 )
        break;
    }
    ++v9;
    ++v8;
  }
  while ( hEnemyHeroes.m_Size > v8 );
LABEL_28:
  if ( v9 <= 1 )
  {
LABEL_31:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
    return 0;
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::UseAbility  (line 397, @0x00000000028b41d0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::UseAbility(
        CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField *const this)
{
  CDOTA_Bot_Hero_CrystalMaiden *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


