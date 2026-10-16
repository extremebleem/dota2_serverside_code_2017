
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_TeleportScroll::CDOTA_Bot_AbilityUsage_TeleportScroll  (line 22, @0x00000000028a7610, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_TeleportScroll::CDOTA_Bot_AbilityUsage_TeleportScroll(
        CDOTA_Bot_AbilityUsage_TeleportScroll *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6E50;  // vptr: CDOTA_Bot_AbilityUsage_TeleportScroll
}


// CDOTA_Bot_AbilityUsage_TeleportScroll::GetCurrentUsageDesire  (line 30, @0x00000000028a8d00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, Element, FastSqrt, Get, GetAction, GetActiveModeDesire, GetDestination, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetMoveDuration, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABotActionMoveTo, Top, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::GetStunDuration, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_TeamCommander::GetBaseLocation, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage_TeleportScroll::FindTeleportTarget, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTAFogOfWarSystem::IsLocationVisible, CDOTA_BaseNPC::GetHealthEstimate, CDOTA_Bot::IsDangerouslyLow, CDOTA_BaseNPC::FindModifierByName (15 total)
// strings: "modifier_flask_healing", "modifier_bottle_regeneration"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
int __fastcall CDOTA_Bot_AbilityUsage_TeleportScroll::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_TeleportScroll *const this)
{
  CDOTA_Bot *m_pBot; // rdi
  __int64 v3; // r14
  int v4; // r13d
  unsigned __int16 *v5; // rdx
  int v6; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v10; // r15
  CDOTA_Bot *v11; // rdi
  int v12; // ebx
  CDOTA_Bot *v13; // r15
  int m_Size; // eax
  CDOTA_BotAction *v15; // r13
  float v17; // xmm0_4
  CDOTA_Bot *v18; // rax
  uint32 m_Index; // edx
  unsigned __int16 v20; // cx
  CEntityIdentity *v21; // rax
  CEntityIdentity *v22; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  float v25; // xmm3_4
  int v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  CDOTA_BaseNPC *TeleportTarget; // r14
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // rdi
  const Vector *v33; // r15
  const Vector *v34; // rax
  int v35; // eax
  CDOTA_Bot *v36; // r13
  CDOTA_Bot *v37; // r13
  __m128 v38; // rt1
  __m128 v39; // xmm0
  float v40; // xmm0_4
  CDOTA_Bot *v41; // rbx
  CEntityInstance *v42; // rax
  const CBaseEntity *v43; // rdi
  const Vector *v44; // r15
  CEntityInstance *v45; // rax
  CDOTA_BaseNPC *v46; // rdi
  int OpposingTeamNumber; // eax
  CEntityInstance *v48; // rax
  float v49; // xmm1_4
  CDOTA_BaseNPC *v50; // rdi
  CEntityInstance *v51; // rax
  float v52; // xmm1_4
  CDOTA_BaseNPC *v53; // rdi
  float v54; // xmm1_4
  CEntityInstance *v55; // rax
  float v56; // xmm1_4
  CDOTA_BaseNPC *v57; // rdi
  CDOTA_Bot *v58; // rax
  uint32 v59; // ecx
  CEntityIdentity *v60; // rdx
  CEntityIdentity *v61; // rax
  CDOTA_BaseNPC *v62; // rdi
  CEntityInstance *v63; // rax
  CDOTA_BaseNPC *v64; // rdi
  CDOTA_BaseNPC *v65; // rax
  CDOTA_Bot *v66; // rdi
  __int64 v67; // r15
  int v68; // r13d
  unsigned __int16 *v69; // rdx
  int v70; // eax
  __int16 v71; // cx
  CEntityIdentity *v72; // rdx
  CEntityIdentity *v73; // rdx
  CEntityInstance *v74; // rax
  CDOTA_Bot *v75; // rdi
  float v76; // [rsp-8h] [rbp-100h]
  float v77; // [rsp-4h] [rbp-FCh]
  __int64 fTPDistance; // [rsp+0h] [rbp-F8h] OVERLAPPED BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+8h] [rbp-F0h]
  int v80; // [rsp+20h] [rbp-D8h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyEnemyHeroes; // [rsp+28h] [rbp-D0h] BYREF
  Vector BaseLocation; // 0:kr00_12.12

  v80 = 0;
  *&hNearbyEnemyHeroes.m_FixedMemory.m_Data[120] = __readfsqword(0x28u);
  m_pBot = this->m_pBot;
  hNearbyEnemyHeroes.m_Memory.m_pMemory = 0x8000000000000020LL;
  *&hNearbyEnemyHeroes.m_Size = &hNearbyEnemyHeroes.m_Memory.m_nAllocationCount;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &v80, 0.0);
  if ( v80 <= 0 )
  {
LABEL_15:
    v13 = this->m_pBot;
    m_Size = v13->m_ActionStack.m_Size;
    if ( m_Size <= 0 )
      goto LABEL_19;
    v15 = v13->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
    if ( v15 == 0 )
      goto LABEL_19;
    if ( (*(v15->_vptr_CDOTA_BotAction + 2))(v15) != 2 )
      goto LABEL_18;
    v17 = 0.0;
    if ( g_pGameRules != 0 )
      v17 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v17 - *&v15[2].m_pBot) <= 2.0 )
      goto LABEL_18;
    v18 = this->m_pBot;
    m_Index = v18->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v20 = v18->m_hUnit.m_Index, (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v20 >> 9) & 0x3F]) == 0)
      || (v22 = &v21[v20 & 0x1FF]) == 0
      || m_Index != v22->m_EHandle.m_Index
      || (m_pInstance = v22->m_pInstance, v22->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v25 = *(&v15[3]._vptr_CDOTA_BotAction + 1);
    v26 = v15[3].m_pBot;
    v27 = *&v15[3]._vptr_CDOTA_BotAction - AbsOrigin->x;
    v28 = v25 - AbsOrigin->y;
    LODWORD(fTPDistance) = v15[3]._vptr_CDOTA_BotAction;
    *(&fTPDistance + 1) = v25;
    hNearbyEnemies.m_Size = v26;
    v29 = v28 * v28;
    v77 = fsqrt((v27 * v27) + v29);
    TeleportTarget = CDOTA_Bot_AbilityUsage_TeleportScroll::FindTeleportTarget(this, &fTPDistance, v77 * 0.5, v29);
    if ( TeleportTarget == 0 )
      goto LABEL_18;
    v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
      v32 = v31;
    else
      v32 = 0;
    v33 = CBaseEntity::GetAbsOrigin(v32);
    v34 = CBaseEntity::GetAbsOrigin(TeleportTarget);
    v76 = fsqrt(((v34->x - v33->x) * (v34->x - v33->x)) + ((v34->y - v33->y) * (v34->y - v33->y)));
    v35 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
    if ( v35 != 4 )
    {
      if ( v35 != 16 )
      {
        if ( v35 != 1 )
        {
          v36 = this->m_pBot;
          if ( v36->m_fModeDesires[(*(v36->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v36->m_pActiveBotMode)] > 0.5 )
          {
            v37 = this->m_pBot;
            v38.m128_i32[0] = LODWORD(v37->m_fModeDesires[(*(v37->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v37->m_pActiveBotMode)]);
            v39 = _mm_cmple_ss(0x3F666666u, v38);
            LODWORD(v40) = _mm_andnot_ps(v39, 0x45EA6000u).m128_u32[0] | v39.m128_i32[0] & 0x457A0000;
            if ( v76 > v40 && v77 > v40 )
            {
              this->m_vLocation = *CBaseEntity::GetAbsOrigin(TeleportTarget);
              v41 = this->m_pBot;
              v12 = 3
                  - (v41->m_fModeDesires[(*(v41->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v41->m_pActiveBotMode)] < 0.89999998);
              goto LABEL_21;
            }
          }
          goto LABEL_18;
        }
        if ( v76 > 6000.0 && v77 > 6000.0 )
        {
LABEL_85:
          this->m_vLocation = *CBaseEntity::GetAbsOrigin(TeleportTarget);
          v12 = 2;
          goto LABEL_21;
        }
      }
LABEL_18:
      v13 = this->m_pBot;
LABEL_19:
      if ( v13->m_nFailedPaths > 5 )
      {
        BaseLocation = CDOTA_TeamCommander::GetBaseLocation(v13->m_pTeamCommander);
        fTPDistance = *&BaseLocation.x;
        this->m_vLocation.z = BaseLocation.z;
        hNearbyEnemies.m_Size = LODWORD(BaseLocation.z);
        this->m_vLocation.x = BaseLocation.x;
        this->m_vLocation.y = *(&fTPDistance + 1);
        v12 = 2;
      }
      else
      {
        this->m_vLocation = vec3_origin;
        v12 = 0;
      }
      goto LABEL_21;
    }
    v13 = this->m_pBot;
    v42 = CEntityHandle::operator CEntityInstance *(&v13->m_hUnit);
    if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
    {
      if ( SLOBYTE(v42[58]._vptr_IHandleEntity) < 0 )
        goto LABEL_62;
      v43 = v42;
    }
    else
    {
      v43 = 0;
    }
    v44 = CBaseEntity::GetAbsOrigin(v43);
    v45 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v45 != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
      v46 = v45;
    else
      v46 = 0;
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v46);
    if ( !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, OpposingTeamNumber, v44, 0.0) )
    {
      v48 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 )
        v50 = v48;
      else
        v50 = 0;
      if ( CDOTA_BaseNPC::GetHealthEstimate(v50, v49) > 0.0 )
      {
        v51 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
          v53 = v51;
        else
          v53 = 0;
        if ( CDOTA_BaseNPC::GetHealthEstimate(v53, v52) < 0.0 && v76 > 3000.0 )
        {
          v66 = this->m_pBot;
          LODWORD(fTPDistance) = 0;
          *&hNearbyEnemies.m_Size = 0;
          hNearbyEnemies.m_Memory.m_pMemory = 0;
          CDOTA_Bot::GetNearbyHeroes(v66, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &fTPDistance, 0.0);
          if ( fTPDistance <= 0 )
          {
LABEL_111:
            this->m_vLocation = *CBaseEntity::GetAbsOrigin(TeleportTarget);
            v12 = 4;
          }
          else
          {
            v67 = 0;
            v68 = 0;
            while ( 1 )
            {
              v69 = (*&hNearbyEnemies.m_Size + v67);
              v70 = *(*&hNearbyEnemies.m_Size + v67);
              if ( (v70 + 2) > 1 )
              {
                v71 = *v69;
                v72 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v69 >> 9) & 0x3F];
                if ( v72 != 0 )
                {
                  v73 = &v72[v71 & 0x1FF];
                  if ( v73 != 0 && v70 == v73->m_EHandle.m_Index )
                  {
                    v74 = v73->m_pInstance;
                    if ( v73->m_pInstance != 0
                      && BYTE3(v74[7]._vptr_IHandleEntity) != 0
                      && (v74[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                    {
                      v75 = *&v74[45].m_worldGroupId.m_nHashCode;
                      if ( v75 != 0 && CDOTA_Bot::GetStunDuration(v75, 1) > 0.0 )
                        break;
                    }
                  }
                }
              }
              ++v68;
              v67 += 4;
              if ( fTPDistance <= v68 )
                goto LABEL_111;
            }
            this->m_vLocation = vec3_origin;
            v12 = 0;
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&fTPDistance);
          goto LABEL_21;
        }
      }
    }
    v13 = this->m_pBot;
LABEL_62:
    v54 = 0.0;
    if ( g_pGameRules != 0 )
      v54 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v54 - *&v15[2].m_pBot) <= 5.0 )
      goto LABEL_19;
    if ( CDOTA_Bot::IsDangerouslyLow(v13) )
      goto LABEL_18;
    v55 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
      v57 = v55;
    else
      v57 = 0;
    if ( CDOTA_BaseNPC::GetHealthEstimate(v57, v56) <= 0.0 )
      goto LABEL_18;
    v58 = this->m_pBot;
    v59 = v58->m_hUnit.m_Index;
    if ( v59 + 2 > 1
      && (v60 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v58->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
      && (v61 = &v60[v58->m_hUnit.m_Index & 0x1FF]) != 0
      && v59 == v61->m_EHandle.m_Index
      && (v65 = v61->m_pInstance) != 0
      && v65->m_bIsDOTANPC )
    {
      v62 = v65;
    }
    else
    {
      v62 = 0;
    }
    if ( CDOTA_BaseNPC::FindModifierByName(v62, "modifier_flask_healing", 0) != 0 )
      goto LABEL_18;
    v63 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v63 != 0 && BYTE3(v63[7]._vptr_IHandleEntity) != 0 )
      v64 = v63;
    else
      v64 = 0;
    if ( CDOTA_BaseNPC::FindModifierByName(v64, "modifier_bottle_regeneration", 0) != 0
      || v76 <= 5000.0
      || v77 <= 5000.0 )
    {
      goto LABEL_18;
    }
    goto LABEL_85;
  }
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = (*&hNearbyEnemyHeroes.m_Size + v3);
    v6 = *(*&hNearbyEnemyHeroes.m_Size + v3);
    if ( (v6 + 2) > 1 )
    {
      v7 = *v5;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v5 >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
        {
          v10 = v9->m_pInstance;
          if ( v9->m_pInstance != 0
            && BYTE3(v10[7]._vptr_IHandleEntity) != 0
            && (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (*(v10->_vptr_IHandleEntity + 408))(v9->m_pInstance) != 0 )
          {
            v11 = *&v10[45].m_worldGroupId.m_nHashCode;
            if ( v11 != 0 && CDOTA_Bot::GetStunDuration(v11, 1) > 0.0 )
              break;
          }
        }
      }
    }
    ++v4;
    v3 += 4;
    if ( v80 <= v4 )
      goto LABEL_15;
  }
  v12 = 0;
LABEL_21:
  v80 = 0;
  if ( (HIDWORD(hNearbyEnemyHeroes.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes);
    if ( (HIDWORD(hNearbyEnemyHeroes.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes);
  }
  return v12;
}


// CDOTA_Bot_AbilityUsage_TeleportScroll::UseAbility  (line 170, @0x00000000028a6b50, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::SetAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_TeleportScroll::UseAbility(CDOTA_Bot_AbilityUsage_TeleportScroll *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_UseAbility *v4; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vLocation);
  CDOTA_Bot::SetAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_TeleportScroll::FindTeleportTarget  (line 177, @0x00000000028a8820, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, FindUnitsInRadius, SortEHANDLEVectorByLocation, CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetEstimatedDamageToTarget, CBaseEntity::GetHealth, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_Bot_AbilityUsage_TeleportScroll::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_Bot_AbilityUsage_TeleportScroll::FindTeleportTarget(
        CDOTA_Bot_AbilityUsage_TeleportScroll *const this,
        const Vector *const vTargetLocation,
        float a3,
        float fRadius)
{
  CDOTA_Bot *m_pBot; // rax
  CEntityInstance *v7; // rax
  __int64 v8; // r13
  int i; // r14d
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  const CBaseEntity *v16; // rdi
  const Vector *AbsOrigin; // rbx
  CEntityInstance *v18; // rax
  __int64 v19; // rbx
  CHandle<CBaseEntity> *v20; // rdx
  uint32 v21; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityInstance *v25; // rax
  CDOTA_Bot *v26; // rdi
  CDOTA_Bot *v27; // rdx
  uint32 v28; // eax
  unsigned __int64 v29; // rdx
  CEntityIdentity *v30; // rcx
  CEntityIdentity *v31; // rdx
  CDOTA_BaseNPC *v32; // rdx
  CEntityInstance *v33; // rax
  const CBaseEntity *v34; // rdi
  int Health; // eax
  float fIncomingDamagea; // [rsp+3Ch] [rbp-274h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hTargets; // [rsp+40h] [rbp-270h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hNearbyEnemyHeroes; // [rsp+160h] [rbp-150h] BYREF
  unsigned __int64 v41; // [rsp+278h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  hTargets.m_Size = 0;
  hTargets.m_Memory.m_pMemory = &hTargets.m_FixedMemory;
  m_pBot = this->m_pBot;
  hTargets.m_Memory.m_nAllocationCount = 64;
  hTargets.m_Memory.m_nGrowSize = 0x80000000;
  v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v7 == 0 || BYTE3(v7[7]._vptr_IHandleEntity) == 0 )
    v7 = 0;
  FindUnitsInRadius(HIBYTE(v7[7].m_CScriptComponent), vTargetLocation, 0, a3, &hTargets, 1, 4, 64, 1, 0);
  SortEHANDLEVectorByLocation(&hTargets, vTargetLocation, 0);
  if ( hTargets.m_Size > 0 )
  {
    v8 = 0;
    for ( i = 0; hTargets.m_Size > i; ++i )
    {
      v10 = &hTargets.m_Memory.m_pMemory[v8];
      m_Index = hTargets.m_Memory.m_pMemory[v8].m_Index;
      if ( m_Index + 2 > 1 )
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
              v16 = v14->m_pInstance;
              hNearbyEnemyHeroes.m_Size = 0;
              hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 64;
              hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
              hNearbyEnemyHeroes.m_Memory.m_pMemory = &hNearbyEnemyHeroes.m_FixedMemory;
              AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
              v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
                v18 = 0;
              FindUnitsInRadius(
                HIBYTE(v18[7].m_CScriptComponent),
                AbsOrigin,
                m_pInstance,
                1200.0,
                &hNearbyEnemyHeroes,
                2,
                1,
                128,
                0,
                0);
              if ( hNearbyEnemyHeroes.m_Size <= 0 )
              {
                fIncomingDamagea = 0.0;
              }
              else
              {
                fIncomingDamagea = 0.0;
                v19 = 0;
                do
                {
                  while ( 1 )
                  {
                    v20 = &hNearbyEnemyHeroes.m_Memory.m_pMemory[v19];
                    v21 = v20->m_Index;
                    if ( v20->m_Index + 2 > 1 )
                    {
                      v22 = v20->m_Index;
                      v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
                      if ( v23 != 0 )
                      {
                        v24 = &v23[v22 & 0x1FF];
                        if ( v24 != 0 && v21 == v24->m_EHandle.m_Index )
                        {
                          v25 = v24->m_pInstance;
                          if ( v24->m_pInstance != 0
                            && BYTE3(v25[7]._vptr_IHandleEntity) != 0
                            && (v25[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                          {
                            v26 = *&v25[45].m_worldGroupId.m_nHashCode;
                            if ( v26 != 0 )
                              break;
                          }
                        }
                      }
                    }
                    if ( hNearbyEnemyHeroes.m_Size <= ++v19 )
                      goto LABEL_31;
                  }
                  v27 = this->m_pBot;
                  v28 = v27->m_hUnit.m_Index;
                  if ( v28 + 2 <= 1
                    || (v29 = v27->m_hUnit.m_Index & 0x7FFF,
                        (v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v29 >> 9]) == 0)
                    || (v31 = &v30[v29 & 0x1FF]) == 0
                    || v28 != v31->m_EHandle.m_Index
                    || (v32 = v31->m_pInstance) == 0
                    || !v32->m_bIsDOTANPC )
                  {
                    v32 = 0;
                  }
                  ++v19;
                  fIncomingDamagea = CDOTA_Bot::GetEstimatedDamageToTarget(v26, 1, v32, 5.0, 7) + fIncomingDamagea;
                }
                while ( hNearbyEnemyHeroes.m_Size > v19 );
              }
LABEL_31:
              v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
              if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
                v34 = v33;
              else
                v34 = 0;
              Health = CBaseEntity::GetHealth(v34);
              if ( (Health + Health) > fIncomingDamagea )
              {
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
                goto LABEL_40;
              }
              hNearbyEnemyHeroes.m_Size = 0;
              if ( (hNearbyEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes.m_Memory);
                if ( (hNearbyEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes.m_Memory);
              }
            }
          }
        }
      }
      ++v8;
    }
  }
  m_pInstance = 0;
LABEL_40:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
  return m_pInstance;
}


