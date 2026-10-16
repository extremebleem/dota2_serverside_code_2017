
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Luna::CDOTA_Bot_Hero_Luna  (line 21, @0x00000000028c3df0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "luna_lucent_beam"
void __fastcall CDOTA_Bot_Hero_Luna::CDOTA_Bot_Hero_Luna(
        CDOTA_Bot_Hero_Luna *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CDB70;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityLucentBeam = CDOTA_BaseNPC::FindAbilityByName(v6, "luna_lucent_beam", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityMoonGlaive = CDOTA_BaseNPC::FindAbilityByName(v8, "luna_moon_glaive", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityLunarBlessing = CDOTA_BaseNPC::FindAbilityByName(v10, "luna_lunar_blessing", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityEclipse = CDOTA_BaseNPC::FindAbilityByName(v12, "luna_eclipse", 1);
}


// CDOTA_Bot_Hero_Luna::GetAggressionFactor  (line 32, @0x00000000028c02a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::GetAggressionFactor, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_luna_eclipse"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Hero_Luna::GetAggressionFactor(CDOTA_Bot_Hero_Luna *const this)
{
  float AggressionFactor; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  float v8; // [rsp+Ch] [rbp-14h]

  AggressionFactor = CDOTA_Bot::GetAggressionFactor(this);
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = AggressionFactor;
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_luna_eclipse", 0) != 0 )
    return v8 * 1.4;
  else
    return v8 * 1.0;
}


// CDOTA_Bot_AbilityUsage_Luna_LucentBeam::CDOTA_Bot_AbilityUsage_Luna_LucentBeam  (line 41, @0x00000000028c3f20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Luna_LucentBeam::CDOTA_Bot_AbilityUsage_Luna_LucentBeam(
        CDOTA_Bot_AbilityUsage_Luna_LucentBeam *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CDC70;  // vptr: CDOTA_Bot_AbilityUsage_Luna_LucentBeam
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Luna_LucentBeam::GetCurrentUsageDesire  (line 48, @0x00000000028c2730, libserver.so)  // inlines: Get, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=
// calls: CDOTA_Bot::FindNearbyChannelingEnemy, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTA_TeamCommander::GetOpposingTeamCommander, GetBotTargetStatusCore, CDOTABaseAbility::IsFullyCastable
int __fastcall CDOTA_Bot_AbilityUsage_Luna_LucentBeam::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Luna_LucentBeam *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v3; // xmm0
  int v4; // eax
  int v5; // eax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rsi
  CDOTA_Bot *v10; // rax
  int v11; // r13d
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  CDOTA_Bot_Hero_Luna *m_pBot; // r13
  int v16; // r12d
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // rdx
  float v19; // xmm0_4
  __int64 v20; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v22; // rax
  const CEntityHandle *v23; // rdi
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // r13
  CEntityInstance *v26; // rax
  CDOTA_BaseNPC *v27; // rsi
  CEntityIdentity *v28; // rdx
  int v29; // eax
  __int16 v30; // cx
  float v31; // xmm0_4
  int v32; // eax
  __int16 v33; // cx
  int v34; // r13d
  CEntityInstance *v35; // rax
  CEntityIdentity *v36; // rdx
  float fMaxRangeb; // [rsp+Ch] [rbp-34h]
  float fMaxRange; // [rsp+Ch] [rbp-34h]
  float fMaxRangea; // [rsp+Ch] [rbp-34h]
  float fChannelTimeRemaining; // [rsp+14h] [rbp-2Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+18h] [rbp-28h] BYREF

  pChannelTarget = 0;
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v3.m128i_i32 = v4 + 200.0;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v3, &pChannelTarget, &fChannelTimeRemaining) != 0
    && SLOBYTE(pChannelTarget->m_nUnitState64.m_Value) >= 0 )
  {
    v31 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
    if ( fChannelTimeRemaining > v31 )
    {
      if ( pChannelTarget != 0 )
      {
        m_pEntity = pChannelTarget->m_pEntity;
        if ( m_pEntity != 0 )
          goto LABEL_46;
      }
LABEL_17:
      this->m_hDesiredTarget.m_Index = -1;
      return 3;
    }
  }
  v5 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v5 == 1 )
  {
    v14 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    m_pBot = this->m_pBot;
    v16 = v14;
    v17 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
      v18 = v17;
    else
      v18 = 0;
    v19 = (4 * v16);
    v20 = 0;
    if ( *&v18[44].m_iszPrivateVScripts.u.m_Id > v19 )
    {
      while ( v20 < CDOTA_TeamCommander::GetOpposingTeamCommander(m_pBot->m_pTeamCommander)->m_BotList.m_Size )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( v20 < OpposingTeamCommander->m_BotList.m_Size
          && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v20] != 0 )
        {
          v22 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v23 = 0;
          if ( v20 < v22->m_BotList.m_Size )
            v23 = v22->m_BotList.m_Memory.m_pMemory[v20];
          v24 = CEntityHandle::operator CEntityInstance *(v23 + 39);
          if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
            v25 = v24;
          else
            v25 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v25) )
          {
            fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
            v26 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
              v27 = v26;
            else
              v27 = 0;
            if ( (GetBotTargetStatusCore(v25, v27, fMaxRange, this->m_pAbility) & 0xFB) == 0 )
            {
              if ( v25 != 0 && (v28 = v25->m_pEntity) != 0 )
              {
                v29 = (v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1);
                if ( v28->m_EHandle.m_Index == -1 )
                  v30 = 0x7FFF;
                else
                  v30 = v28->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hDesiredTarget.m_Index) = v30 | this->m_hDesiredTarget.m_Index & 0x8000;
                this->m_hDesiredTarget.m_Index = (v29 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
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
        m_pBot = this->m_pBot;
        ++v20;
      }
    }
    goto LABEL_42;
  }
  if ( v5 != 2 )
    goto LABEL_42;
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v6 == 0 || BYTE3(v6[7]._vptr_IHandleEntity) == 0 || (v7 = v6, (v6[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    v7 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v7)
    || ((v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
     && BYTE3(v8[7]._vptr_IHandleEntity) != 0
      ? (v9 = v8)
      : (v9 = 0),
        !IsBotTargetStatusValidCore(v7, v9, 251, -1.0, this->m_pAbility)) )
  {
LABEL_42:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v10 = v7->m_pBot;
  if ( v10 == 0 || (*(v10->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v10->m_pActiveBotMode) != 4 )
  {
    v11 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
    fMaxRangeb = CDOTA_BaseNPC::GetArmorReductionForDamageType(v7, 2);
    if ( (v11 * (1.0 - fMaxRangeb)) <= CBaseEntity::GetHealth(v7) )
    {
      if ( CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityLucentBeam) )
      {
        v34 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
        fMaxRangea = ((*(this->m_pBot->m_pAbilityLucentBeam->_vptr_IHandleEntity + 273))(
                        this->m_pBot->m_pAbilityLucentBeam,
                        0xFFFFFFFFLL)
                    + v34);
        v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v35 == 0 || BYTE3(v35[7]._vptr_IHandleEntity) == 0 )
          v35 = 0;
        if ( *&v35[44].m_iszPrivateVScripts.u.m_Id > fMaxRangea )
        {
          v36 = v7->m_pEntity;
          if ( v36 != 0 )
          {
            v32 = (v36->m_EHandle.m_Index >> 15) - (v36->m_flags & 1);
            if ( v36->m_EHandle.m_Index == -1 )
              v33 = 0x7FFF;
            else
              v33 = v36->m_EHandle.m_Index & 0x7FFF;
            goto LABEL_48;
          }
          goto LABEL_17;
        }
      }
      goto LABEL_42;
    }
  }
  m_pEntity = v7->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_17;
LABEL_46:
  v32 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v33 = 0x7FFF;
  else
    v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
LABEL_48:
  LOWORD(this->m_hDesiredTarget.m_Index) = v33 | this->m_hDesiredTarget.m_Index & 0x8000;
  this->m_hDesiredTarget.m_Index = (v32 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Luna_LucentBeam::UseAbility  (line 126, @0x00000000028c0bc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Luna_LucentBeam::UseAbility(CDOTA_Bot_AbilityUsage_Luna_LucentBeam *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Luna *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Luna_Eclipse::CDOTA_Bot_AbilityUsage_Luna_Eclipse  (line 139, @0x00000000028c3f50, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Luna_Eclipse::CDOTA_Bot_AbilityUsage_Luna_Eclipse(
        CDOTA_Bot_AbilityUsage_Luna_Eclipse *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  __int64 v3; // rdx
  vec_t z; // eax

  this->m_pAbility = pAbility;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CDCD0;  // vptr: CDOTA_Bot_AbilityUsage_Luna_Eclipse
  this->m_pBot = pBot;
  this->m_hTargetUnit.m_Index = -1;
  v3 = *&vec3_invalid.x;
  this->m_bUseOnCreeps = 1;
  z = vec3_invalid.z;
  *&this->m_vTargetLocation.x = v3;
  this->m_vTargetLocation.z = z;
}


// CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetCurrentUsageDesire  (line 149, @0x00000000028cf390, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetUnit, GrowMemory, IndexToIdentity, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::HasScepter, CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetLocationScore, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot_AbilityUsage::BuildLocationList, CDOTA_Bot::GetNearbyHeroes, CUtlMemory<Vector, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Luna_Eclipse *const this)
{
  int LevelSpecialValue; // eax
  int v3; // ebx
  CDOTA_Bot_Hero_Luna *m_pBot; // rax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CEntityInstance *v7; // rax
  __int64 m_Size; // rbx
  CHandle<CBaseEntity> *v9; // rax
  int v10; // r13d
  Vector *m_pMemory; // rbx
  Vector *v12; // r12
  int LocationScore; // eax
  CHandle<CBaseEntity> *v14; // r12
  uint32 m_Index; // ebx
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *v19; // rax
  int v20; // eax
  int v21; // ebx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v24; // cx
  int v25; // r12d
  CEntityInstance *v26; // rax
  const CBaseEntity *v27; // rdi
  const Vector *AbsOrigin; // r15
  CEntityInstance *v29; // rax
  int v30; // eax
  vec_t x; // xmm0_4
  EHANDLE hBestAlly; // [rsp+18h] [rbp-98h]
  CHandle<CBaseEntity> *v33; // [rsp+28h] [rbp-88h]
  int hAlly; // [rsp+30h] [rbp-80h]
  EHANDLE hAllya; // [rsp+30h] [rbp-80h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > vLocations; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAllies; // [rsp+60h] [rbp-50h] BYREF
  Vector v38; // 0:^1C.12

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  vLocations.m_Size = 0;
  v3 = LevelSpecialValue;
  m_pBot = this->m_pBot;
  vLocations.m_Memory.m_pMemory = 0;
  vLocations.m_Memory.m_nAllocationCount = 0;
  vLocations.m_Memory.m_nGrowSize = 0;
  hAllies.m_Size = 0;
  hAllies.m_Memory.m_pMemory = 0;
  hAllies.m_Memory.m_nAllocationCount = 0;
  hAllies.m_Memory.m_nGrowSize = 0;
  v5 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  if ( CDOTA_BaseNPC::HasScepter(v6) )
  {
    v25 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
    v26 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
      v27 = v26;
    else
      v27 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v27);
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v29 == 0 || BYTE3(v29[7]._vptr_IHandleEntity) == 0 )
      v29 = 0;
    CDOTA_Bot_AbilityUsage::BuildLocationList(
      this,
      HIBYTE(v29[7].m_CScriptComponent),
      1,
      2,
      AbsOrigin,
      v25,
      0.0,
      v3,
      &vLocations);
    v30 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
    CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hAllies, v30);
  }
  else
  {
    v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    {
      hAlly = -1;
      m_pEntity = v7->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v24 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hAlly = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v24 & 0x7FFF;
      }
    }
    else
    {
      hAlly = -1;
    }
    m_Size = hAllies.m_Size;
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hAllies.m_Memory, 1);
    ++hAllies.m_Size;
    v9 = &hAllies.m_Memory.m_pMemory[m_Size];
    if ( v9 != 0 )
      v9->m_Index = hAlly;
  }
  v10 = 0;
  m_pMemory = vLocations.m_Memory.m_pMemory;
  v38 = vec3_invalid;
  v12 = &vLocations.m_Memory.m_pMemory[vLocations.m_Size];
  if ( vLocations.m_Memory.m_pMemory != v12 )
  {
    do
    {
      LocationScore = CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetLocationScore(this, m_pMemory);
      if ( v10 < LocationScore )
      {
        v10 = LocationScore;
        v38 = *m_pMemory;
      }
      ++m_pMemory;
    }
    while ( v12 != m_pMemory );
  }
  hBestAlly.m_Index = -1;
  v14 = hAllies.m_Memory.m_pMemory;
  v33 = &hAllies.m_Memory.m_pMemory[hAllies.m_Size];
  if ( hAllies.m_Memory.m_pMemory != v33 )
  {
    do
    {
      while ( 1 )
      {
        m_Index = v14->m_Index;
        hAllya.m_Index = v14->m_Index;
        if ( v14->m_Index + 2 > 1 )
        {
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hAllya.m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[hAllya.m_Index & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
            {
              m_pInstance = v17->m_pInstance;
              if ( v17->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v19 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v20 = CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetLocationScore(this, v19);
                if ( v20 > v10 )
                  break;
              }
            }
          }
        }
        if ( v33 == ++v14 )
          goto LABEL_27;
      }
      ++v14;
      hBestAlly.m_Index = m_Index;
      v10 = v20;
      v38 = vec3_invalid;
    }
    while ( v33 != v14 );
  }
LABEL_27:
  if ( v10 <= 0 )
  {
    x = vec3_invalid.x;
    this->m_hTargetUnit.m_Index = -1;
    v21 = 0;
    this->m_vTargetLocation.x = x;
    this->m_vTargetLocation.y = vec3_invalid.y;
    this->m_vTargetLocation.z = vec3_invalid.z;
  }
  else
  {
    v21 = 3;
    this->m_vTargetLocation = v38;
    this->m_hTargetUnit = hBestAlly;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAllies);
  vLocations.m_Size = 0;
  if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
    if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
  }
  return v21;
}


// CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetLocationScore  (line 215, @0x00000000028cb950, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetTeamNumber, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, FindUnitsInRadius, CDOTA_BaseNPC::HasScepter, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CBaseEntity::GetHealth, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetCurrentUsageDesire
// strings: "beams", "hit_count", "beams_scepter", "hit_count_scepter"
int __fastcall CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetLocationScore(
        CDOTA_Bot_AbilityUsage_Luna_Eclipse *const this,
        const Vector *const vLocation)
{
  int LevelSpecialValue; // eax
  float v5; // xmm0_4
  CDOTA_Bot_Hero_Luna *m_pBot; // rax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdx
  int m_Size; // ebx
  CDOTA_Bot_Hero_Luna *v10; // r14
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  bool HasScepter; // al
  CDOTABaseAbility *m_pAbility; // rdi
  int v15; // eax
  int v16; // r12d
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // rdi
  bool v19; // al
  CDOTABaseAbility *v20; // rdi
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // esi
  int v25; // eax
  __int64 v26; // r12
  int v27; // r15d
  CEntityInstance *v28; // rax
  CEntityInstance *v29; // rbx
  int m_Id; // eax
  unsigned __int8 (__fastcall *v31)(CDOTA_Bot_AbilityUsage_Luna_Eclipse *const, _QWORD); // r14
  CDOTA_Commander *v32; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // rsi
  int iHeroKills; // [rsp+2Ch] [rbp-64h]
  int iHeroesHit; // [rsp+30h] [rbp-60h]
  int v39; // [rsp+34h] [rbp-5Ch]
  float ArmorReductionForDamageType; // [rsp+38h] [rbp-58h]
  float fRadius; // [rsp+3Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+40h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  hTargets.m_Size = 0;
  v5 = LevelSpecialValue;
  m_pBot = this->m_pBot;
  hTargets.m_Memory.m_pMemory = 0;
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  fRadius = v5;
  v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  v8 = 0;
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, vLocation, v8, fRadius, &hTargets, 2, 3, 0, 0, 0);
  m_Size = hTargets.m_Size;
  if ( hTargets.m_Size != 0 )
  {
    v10 = this->m_pBot;
    v11 = CEntityHandle::operator CEntityInstance *(&v10->m_hUnit);
    if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
      v12 = v11;
    else
      v12 = 0;
    HasScepter = CDOTA_BaseNPC::HasScepter(v12);
    m_pAbility = this->m_pAbility;
    if ( HasScepter )
      v15 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbility, "beams", -1, 1);
    else
      v15 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbility, "beams_scepter", -1, 1);
    v16 = v15;
    v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
      v18 = v17;
    else
      v18 = 0;
    v19 = CDOTA_BaseNPC::HasScepter(v18);
    v20 = this->m_pAbility;
    if ( v19 )
      v21 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v20, "hit_count", -1, 1);
    else
      v21 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v20, "hit_count_scepter", -1, 1);
    v22 = v21;
    v23 = (*(v10->m_pAbilityLucentBeam->_vptr_IHandleEntity + 247))(v10->m_pAbilityLucentBeam);
    v24 = v22 * v23;
    v25 = v23 * v16 / hTargets.m_Size;
    if ( v25 <= v24 )
      v24 = v25;
    v39 = v24;
    if ( hTargets.m_Size <= 0 )
    {
      m_Size = 0;
    }
    else
    {
      v26 = 0;
      iHeroKills = 0;
      v27 = 0;
      iHeroesHit = 0;
      do
      {
        v28 = CEntityHandle::operator CEntityInstance *(&hTargets.m_Memory.m_pMemory[v26]);
        v29 = v28;
        if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
        {
          m_Id = v28[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 3) != 0 || this->m_bUseOnCreeps )
          {
            if ( (m_Id & 1) == 0
              || (v31 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2),
                  v32 = DOTACommander(),
                  IllusionState = CDOTA_Commander::GetIllusionState(v32, v29),
                  v31(this, IllusionState) != 0) )
            {
              v34 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v34 == 0 || (v35 = v34, BYTE3(v34[7]._vptr_IHandleEntity) == 0) )
                v35 = 0;
              if ( IsBotTargetStatusValidCore(v29, v35, 251, -1.0, this->m_pAbility) )
              {
                ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v29, 2);
                if ( (v29[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  ++iHeroesHit;
                  iHeroKills += ((1.0 - ArmorReductionForDamageType) * v39) > CBaseEntity::GetHealth(v29);
                }
                else
                {
                  ++v27;
                }
              }
            }
          }
        }
        ++v26;
      }
      while ( hTargets.m_Size > v26 );
      m_Size = iHeroesHit - v27 + 2 * iHeroKills;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
  return m_Size;
}


// CDOTA_Bot_AbilityUsage_Luna_Eclipse::UseAbility  (line 273, @0x00000000028c1f30, libserver.so)  // inlines: Get, GetInstance, GetUnit, IsFinite, IsValid, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::HasScepter, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Luna_Eclipse::UseAbility(CDOTA_Bot_AbilityUsage_Luna_Eclipse *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_Bot_Hero_Luna *v5; // r14
  CDOTABaseAbility *v6; // r15
  CDOTA_BotAction_UseAbility *v7; // r13
  CDOTA_Bot_Hero_Luna *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v10; // r12
  CDOTA_Bot_Hero_Luna *v11; // r13
  CDOTABaseAbility *v12; // r14

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v2 != 0 && v2->m_bIsDOTANPC )
  {
    if ( CDOTA_BaseNPC::HasScepter(v2) )
      goto LABEL_4;
LABEL_9:
    m_pBot = this->m_pBot;
    m_pAbility = this->m_pAbility;
    v10 = operator new(0xC0u);
    CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v10, m_pBot, m_pAbility);
LABEL_10:
    CDOTA_Bot::PushAction(this->m_pBot, v10);
    return;
  }
  if ( !CDOTA_BaseNPC::HasScepter(0) )
    goto LABEL_9;
LABEL_4:
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hTargetUnit);
  v4 = v3;
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    v5 = this->m_pBot;
    v6 = this->m_pAbility;
    v7 = operator new(0xC0u);
    CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v7, v5, v6, v4);
    CDOTA_Bot::PushAction(this->m_pBot, v7);
    return;
  }
  if ( (LODWORD(this->m_vTargetLocation.x) & 0x7F800000) != 0x7F800000
    && (LODWORD(this->m_vTargetLocation.y) & 0x7F800000) != 0x7F800000
    && (LODWORD(this->m_vTargetLocation.z) & 0x7F800000) != 0x7F800000 )
  {
    v11 = this->m_pBot;
    v12 = this->m_pAbility;
    v10 = operator new(0xC0u);
    CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v10, v11, v12, &this->m_vTargetLocation);
    goto LABEL_10;
  }
}


