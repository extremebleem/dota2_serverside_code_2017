
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_TravelBoots::CDOTA_Bot_AbilityUsage_TravelBoots  (line 20, @0x00000000028a7650, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_TravelBoots::CDOTA_Bot_AbilityUsage_TravelBoots(
        CDOTA_Bot_AbilityUsage_TravelBoots *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6EB0;  // vptr: CDOTA_Bot_AbilityUsage_TravelBoots
}


// CDOTA_Bot_AbilityUsage_TravelBoots::GetCurrentUsageDesire  (line 28, @0x00000000028a7b10, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Element, FastSqrt, Get, GetAction, GetActiveModeDesire, GetDestination, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABotActionMoveTo, Top, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator->, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::GetStunDuration, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_TeamCommander::GetBaseLocation, CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetAvoidanceAmountForLocation, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_TravelBoots::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_TravelBoots *const this)
{
  CDOTA_Bot *m_pBot; // rdi
  __int64 v3; // r12
  int v4; // ebx
  unsigned __int16 *v5; // rdx
  int v6; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v10; // rax
  CDOTA_Bot *v11; // rdi
  int v12; // ebx
  CDOTA_Bot *v14; // rax
  int m_Size; // edx
  CDOTA_BotAction **m_pMemory; // rcx
  __int64 v17; // rdx
  CDOTA_BotAction *v18; // rbx
  CDOTA_Bot *v19; // r12
  CDOTA_Bot *v20; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v22; // rcx
  CEntityIdentity *v23; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  float v26; // xmm2_4
  int v27; // xmm4_4
  CDOTA_Bot *v28; // rdi
  CDOTA_Bot *v29; // rax
  uint32 v30; // ecx
  vec_t v31; // xmm0_4
  vec_t v32; // xmm2_4
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rax
  CEntityInstance *v35; // rax
  const CBaseEntity *v36; // rdi
  CEntityIdentity *v37; // rdx
  CEntityIdentity *v38; // rax
  const Vector *v39; // rax
  bool v40; // zf
  vec_t z; // xmm0_4
  Vector v42; // [rsp+20h] [rbp-78h] BYREF
  int v43; // [rsp+30h] [rbp-68h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyHeroes; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45; // [rsp+50h] [rbp-48h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+58h] [rbp-40h] BYREF
  Vector BaseLocation; // 0:kr00_12.12

  v43 = 0;
  m_pBot = this->m_pBot;
  *&hNearbyEnemyHeroes.m_Size = 0;
  hNearbyEnemyHeroes.m_Memory.m_pMemory = 0;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &v43, 0.0);
  if ( v43 <= 0 )
  {
LABEL_16:
    v14 = this->m_pBot;
    m_Size = v14->m_ActionStack.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = v14->m_ActionStack.m_Memory.m_pMemory;
      v17 = m_Size - 1;
      v18 = m_pMemory[v17];
      if ( v18 != 0 )
      {
        if ( (*(v18->_vptr_CDOTA_BotAction + 2))(m_pMemory[v17]) == 2 )
        {
          v19 = this->m_pBot;
          if ( v19->m_fModeDesires[(*(v19->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v19->m_pActiveBotMode)] > 0.5 )
          {
            v20 = this->m_pBot;
            m_Index = v20->m_hUnit.m_Index;
            if ( m_Index + 2 <= 1
              || (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
              || (v23 = &v22[v20->m_hUnit.m_Index & 0x1FF]) == 0
              || m_Index != v23->m_EHandle.m_Index
              || (m_pInstance = v23->m_pInstance, v23->m_pInstance == 0)
              || !m_pInstance->m_bIsDOTANPC )
            {
              m_pInstance = 0;
            }
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v26 = *(&v18[3]._vptr_CDOTA_BotAction + 1);
            v27 = v18[3].m_pBot;
            if ( fsqrt(
                   ((*&v18[3]._vptr_CDOTA_BotAction - AbsOrigin->x) * (*&v18[3]._vptr_CDOTA_BotAction - AbsOrigin->x))
                 + ((v26 - AbsOrigin->y) * (v26 - AbsOrigin->y))) > 8000.0 )
            {
              v28 = this->m_pBot;
              LODWORD(v45) = v18[3]._vptr_CDOTA_BotAction;
              *(&v45 + 1) = v26;
              hTargets.m_Size = v27;
              if ( CDOTA_Bot::GetAvoidanceAmountForLocation(v28, &v45, 0) <= 9 )
              {
                v29 = this->m_pBot;
                LODWORD(v45) = 0;
                *&hTargets.m_Size = 0;
                hTargets.m_Memory.m_pMemory = 0;
                v30 = v29->m_hUnit.m_Index;
                v31 = *&v18[3].m_pBot;
                v32 = *&v18[3]._vptr_CDOTA_BotAction;
                v42.y = *(&v18[3]._vptr_CDOTA_BotAction + 1);
                v42.z = v31;
                v42.x = v32;
                if ( v30 + 2 <= 1
                  || (v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v29->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
                  || (v34 = &v33[v29->m_hUnit.m_Index & 0x1FF]) == 0
                  || v30 != v34->m_EHandle.m_Index
                  || (v35 = v34->m_pInstance) == 0
                  || BYTE3(v35[7]._vptr_IHandleEntity) == 0 )
                {
                  v35 = 0;
                }
                FindUnitsInRadius(HIBYTE(v35[7].m_CScriptComponent), &v42, 0, 1000.0, &v45, 1, 2, 0, 1, 0);
                if ( v45 > 0 )
                {
                  v36 = 0;
                  if ( (**&hTargets.m_Size + 2) > 1 )
                  {
                    v37 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(**&hTargets.m_Size >> 9) & 0x3F];
                    if ( v37 != 0 )
                    {
                      v38 = &v37[**&hTargets.m_Size & 0x1FF];
                      if ( v38 != 0 && **&hTargets.m_Size == v38->m_EHandle.m_Index )
                        v36 = v38->m_pInstance;
                    }
                  }
                  v39 = CBaseEntity::GetAbsOrigin(v36);
                  v40 = (HIDWORD(hTargets.m_Memory.m_pMemory) & 0xC0000000) == 0;
                  this->m_vLocation.x = v39->x;
                  this->m_vLocation.y = v39->y;
                  z = v39->z;
                  LODWORD(v45) = 0;
                  this->m_vLocation.z = z;
                  if ( v40 )
                  {
                    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets);
                    if ( (HIDWORD(hTargets.m_Memory.m_pMemory) & 0xC0000000) == 0 )
                      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets);
                  }
                  v12 = 3;
LABEL_22:
                  v43 = 0;
                  if ( (HIDWORD(hNearbyEnemyHeroes.m_Memory.m_pMemory) & 0xC0000000) != 0 )
                    return v12;
                  goto LABEL_14;
                }
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v45);
              }
            }
          }
        }
        v14 = this->m_pBot;
      }
    }
    if ( v14->m_nFailedPaths > 5 )
    {
      BaseLocation = CDOTA_TeamCommander::GetBaseLocation(v14->m_pTeamCommander);
      v45 = *&BaseLocation.x;
      v12 = 2;
      hTargets.m_Size = LODWORD(BaseLocation.z);
      this->m_vLocation.z = BaseLocation.z;
      this->m_vLocation.x = BaseLocation.x;
      this->m_vLocation.y = *(&v45 + 1);
    }
    else
    {
      v12 = 0;
      this->m_vLocation = vec3_origin;
    }
    goto LABEL_22;
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
            && (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
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
    if ( v43 <= v4 )
      goto LABEL_16;
  }
  v12 = 0;
  v43 = 0;
  if ( (HIDWORD(hNearbyEnemyHeroes.m_Memory.m_pMemory) & 0xC0000000) != 0 )
    return v12;
LABEL_14:
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes);
  if ( (HIDWORD(hNearbyEnemyHeroes.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes);
    return v12;
  }
  return v12;
}


// CDOTA_Bot_AbilityUsage_TravelBoots::UseAbility  (line 75, @0x00000000028a6bd0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::SetAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_TravelBoots::UseAbility(CDOTA_Bot_AbilityUsage_TravelBoots *const this)
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


