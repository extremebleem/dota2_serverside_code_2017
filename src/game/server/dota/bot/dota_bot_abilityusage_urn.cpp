
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Urn::CDOTA_Bot_AbilityUsage_Urn  (line 23, @0x00000000028a9c30, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "soul_heal_amount", "soul_damage_amount"
void __fastcall CDOTA_Bot_AbilityUsage_Urn::CDOTA_Bot_AbilityUsage_Urn(
        CDOTA_Bot_AbilityUsage_Urn *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6F10;
  this->m_hTarget.m_Index = -1;
  this->m_iHeal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "soul_heal_amount", -1, 1);
  this->m_iDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "soul_damage_amount", -1, 1);
}


// CDOTA_Bot_AbilityUsage_Urn::GetCurrentUsageDesire  (line 32, @0x00000000028a8030, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetBotTargetStatus, GetCurrentCharges, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHealthPercent, GetInstance, GetItem, GetSerialNumber, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, WasRecentlyHitByTower, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyHeroes, CDOTA_Bot::WasRecentlyHitByHero, CDOTA_Bot::IsDangerouslyLow, CDOTA_BaseNPC::GetOpposingTeamNumber, GetBotTargetStatusCore, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Urn::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Urn *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  int result; // eax
  CDOTA_Bot *m_pBot; // rax
  CEntityInstance *v5; // rax
  CDOTABaseAbility *v6; // r12
  int m_CScriptComponent_high; // r13d
  CDOTABaseAbility *v8; // rdi
  int v9; // eax
  float m_HitByTowerTime; // xmm1_4
  __int64 v11; // r12
  int v12; // r13d
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_Bot *v19; // rdi
  bool v20; // r15
  CDOTA_Bot *v21; // rdi
  float v22; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v24; // edx
  __int16 v25; // cx
  int v26; // eax
  CDOTA_Bot *v27; // rax
  CEntityInstance *v28; // rax
  CDOTA_BaseNPC *v29; // rdi
  int OpposingTeamNumber; // eax
  CDOTABaseAbility *v31; // r12
  int v32; // r13d
  CDOTABaseAbility *v33; // rdi
  int v34; // eax
  float v35; // xmm1_4
  __int64 v36; // r13
  int v37; // r14d
  CHandle<CBaseEntity> *v38; // rdx
  uint32 v39; // eax
  __int16 v40; // si
  CEntityIdentity *v41; // rdx
  CEntityIdentity *v42; // rdx
  CEntityInstance *v43; // r12
  CDOTA_Bot *v44; // rdx
  uint32 v45; // eax
  unsigned __int16 v46; // si
  CEntityIdentity *v47; // rdx
  CEntityIdentity *v48; // rdx
  CDOTA_BaseNPC *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r12
  int v52; // r13d
  CHandle<CBaseEntity> *v53; // rdx
  uint32 v54; // eax
  __int16 v55; // cx
  CEntityIdentity *v56; // rdx
  CEntityIdentity *v57; // rdx
  CEntityInstance *v58; // r14
  CDOTA_Bot *v59; // rdi
  bool v60; // r15
  bool v61; // zf
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // r15
  int v65; // eax
  __int64 v66; // rcx
  CEntityIdentity *v67; // rax
  int v68; // edx
  __int16 v69; // cx
  int v70; // eax
  CEntityIdentity *v71; // rdx
  int v72; // eax
  __int16 v73; // cx
  float v74; // xmm0_4
  bool bHasBeenAttacked; // [rsp+1Ch] [rbp-74h]
  int bHasBeenAttackeda; // [rsp+1Ch] [rbp-74h]
  int bHasBeenAttackedb; // [rsp+1Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAlliedHeroes; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyHeroes; // [rsp+40h] [rbp-50h] BYREF

  m_pAbility = this->m_pAbility;
  if ( m_pAbility != 0
    && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0
    && (result = HIDWORD(m_pAbility[1].m_pDummyPhysicsComponent)) == 0 )
  {
    this->m_hTarget.m_Index = -1;
  }
  else
  {
    m_pBot = this->m_pBot;
    hNearbyAlliedHeroes.m_Size = 0;
    hNearbyAlliedHeroes.m_Memory.m_pMemory = 0;
    hNearbyAlliedHeroes.m_Memory.m_nAllocationCount = 0;
    hNearbyAlliedHeroes.m_Memory.m_nGrowSize = 0;
    v5 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v5 == 0 || BYTE3(v5[7]._vptr_IHandleEntity) == 0 )
      v5 = 0;
    v6 = this->m_pAbility;
    m_CScriptComponent_high = HIBYTE(v5[7].m_CScriptComponent);
    if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 223))(v6) != 0 )
      v8 = v6;
    else
      v8 = 0;
    v9 = (*(v8->_vptr_IHandleEntity + 226))(v8, &vec3_origin, 0);
    CDOTA_Bot::FindNearbyHeroes(this->m_pBot, v9, m_CScriptComponent_high, &hNearbyAlliedHeroes);
    v11 = 0;
    v12 = 0;
    if ( hNearbyAlliedHeroes.m_Size > 0 )
    {
      while ( 1 )
      {
        v13 = &hNearbyAlliedHeroes.m_Memory.m_pMemory[v11];
        m_Index = hNearbyAlliedHeroes.m_Memory.m_pMemory[v11].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v15 = v13->m_Index;
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[v15 & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
            {
              m_pInstance = v17->m_pInstance;
              if ( v17->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v19 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
                if ( v19 != 0 )
                {
                  v20 = 1;
                  if ( v19->m_nAttackingHeroes == 0 )
                    v20 = v19->m_nAttackingTowers != 0;
                  if ( !CDOTA_Bot::WasRecentlyHitByHero(v19, 2.0, m_HitByTowerTime) )
                  {
                    v21 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
                    m_HitByTowerTime = v21->m_HitByTowerTime;
                    v22 = g_pGameRules != 0 ? *&g_pGameRules[18].m_szQuestName[20] - 2.0 : -2.0;
                    if ( m_HitByTowerTime <= v22 && !v20 && CDOTA_Bot::IsDangerouslyLow(v21) )
                      break;
                  }
                }
              }
            }
          }
        }
        ++v12;
        ++v11;
        if ( hNearbyAlliedHeroes.m_Size <= v12 )
          goto LABEL_34;
      }
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v25 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v25 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v24 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        v26 = 3;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
        v26 = 3;
      }
    }
    else
    {
LABEL_34:
      v27 = this->m_pBot;
      hNearbyEnemyHeroes.m_Size = 0;
      hNearbyEnemyHeroes.m_Memory.m_pMemory = 0;
      hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 0;
      hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0;
      v28 = CEntityHandle::operator CEntityInstance *(&v27->m_hUnit);
      if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
        v29 = v28;
      else
        v29 = 0;
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v29);
      v31 = this->m_pAbility;
      v32 = OpposingTeamNumber;
      if ( v31 != 0 && (*(v31->_vptr_IHandleEntity + 223))(v31) != 0 )
        v33 = v31;
      else
        v33 = 0;
      v34 = (*(v33->_vptr_IHandleEntity + 226))(v33, &vec3_origin, 0);
      CDOTA_Bot::FindNearbyHeroes(this->m_pBot, v34, v32, &hNearbyEnemyHeroes);
      if ( hNearbyEnemyHeroes.m_Size <= 0 )
      {
LABEL_56:
        if ( hNearbyAlliedHeroes.m_Size <= 0 )
        {
LABEL_89:
          this->m_hTarget.m_Index = -1;
          v70 = 0;
        }
        else
        {
          v51 = 0;
          v52 = 0;
          while ( 1 )
          {
            v53 = &hNearbyAlliedHeroes.m_Memory.m_pMemory[v51];
            v54 = hNearbyAlliedHeroes.m_Memory.m_pMemory[v51].m_Index;
            if ( v54 + 2 > 1 )
            {
              v55 = v53->m_Index;
              v56 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v53->m_Index) >> 9) & 0x3F];
              if ( v56 != 0 )
              {
                v57 = &v56[v55 & 0x1FF];
                if ( v57 != 0 && v54 == v57->m_EHandle.m_Index )
                {
                  v58 = v57->m_pInstance;
                  if ( v57->m_pInstance != 0
                    && BYTE3(v58[7]._vptr_IHandleEntity) != 0
                    && (v58[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v59 = *&v58[45].m_worldGroupId.m_nHashCode;
                    if ( v59 != 0 )
                    {
                      v60 = 1;
                      if ( v59->m_nAttackingHeroes == 0 )
                        v60 = v59->m_nAttackingTowers != 0;
                      v61 = !CDOTA_Bot::WasRecentlyHitByHero(v59, 2.0, v35);
                      v62 = *&v58[45].m_worldGroupId.m_nHashCode;
                      if ( v61 )
                      {
                        v74 = g_pGameRules != 0 ? *&g_pGameRules[18].m_szQuestName[20] - 2.0 : -2.0;
                        bHasBeenAttacked = *(v62 + 432) > v74;
                      }
                      else
                      {
                        bHasBeenAttacked = 1;
                      }
                      v63 = (*(**(v62 + 34056) + 16LL))(*(v62 + 34056));
                      if ( !v60 && !bHasBeenAttacked && v63 != 4 )
                      {
                        v64 = 100LL * CBaseEntity::GetHealth(v58);
                        v65 = (*(v58->_vptr_IHandleEntity + 156))(v58);
                        v66 = v65;
                        if ( v65 <= 0 )
                          v66 = 1;
                        if ( (v64 / v66) <= 39 )
                          break;
                      }
                    }
                  }
                }
              }
            }
            ++v52;
            ++v51;
            if ( hNearbyAlliedHeroes.m_Size <= v52 )
              goto LABEL_89;
          }
          v67 = v58->m_pEntity;
          if ( v67 != 0 )
          {
            v68 = (v67->m_EHandle.m_Index >> 15) - (v67->m_flags & 1);
            v69 = 0x7FFF;
            if ( v67->m_EHandle.m_Index != -1 )
              v69 = v67->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hTarget.m_Index) = v69 | this->m_hTarget.m_Index & 0x8000;
            this->m_hTarget.m_Index = (v68 << 15) | this->m_hTarget.m_Index & 0x7FFF;
            v70 = 1;
          }
          else
          {
            this->m_hTarget.m_Index = -1;
            v70 = 1;
          }
        }
      }
      else
      {
        v36 = 0;
        v37 = 0;
        while ( 1 )
        {
          v38 = &hNearbyEnemyHeroes.m_Memory.m_pMemory[v36];
          v39 = hNearbyEnemyHeroes.m_Memory.m_pMemory[v36].m_Index;
          if ( v39 + 2 <= 1
            || (v40 = v38->m_Index,
                (v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v38->m_Index) >> 9) & 0x3F]) == 0)
            || (v42 = &v41[v40 & 0x1FF]) == 0
            || v39 != v42->m_EHandle.m_Index
            || (v43 = v42->m_pInstance, v42->m_pInstance == 0)
            || BYTE3(v43[7]._vptr_IHandleEntity) == 0
            || (v43[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          {
            v43 = 0;
          }
          v44 = this->m_pBot;
          v45 = v44->m_hUnit.m_Index;
          if ( v45 + 2 <= 1
            || (v46 = v44->m_hUnit.m_Index,
                (v47 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v46 >> 9) & 0x3F]) == 0)
            || (v48 = &v47[v46 & 0x1FF]) == 0
            || v45 != v48->m_EHandle.m_Index
            || (v49 = v48->m_pInstance, v48->m_pInstance == 0)
            || !v49->m_bIsDOTANPC )
          {
            v49 = 0;
          }
          if ( (GetBotTargetStatusCore(v43, v49, -1.0, this->m_pAbility) & 0xFB) == 0 )
          {
            v50 = *&v43[45].m_worldGroupId.m_nHashCode;
            if ( v50 != 0
              && (*(**(v50 + 34056) + 16LL))(*(v50 + 34056)) == 4
              && CBaseEntity::GetHealth(v43) < this->m_iDamage )
            {
              break;
            }
          }
          ++v37;
          ++v36;
          if ( hNearbyEnemyHeroes.m_Size <= v37 )
            goto LABEL_56;
        }
        v71 = v43->m_pEntity;
        if ( v71 != 0 )
        {
          v72 = (v71->m_EHandle.m_Index >> 15) - (v71->m_flags & 1);
          v73 = 0x7FFF;
          if ( v71->m_EHandle.m_Index != -1 )
            v73 = v71->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hTarget.m_Index) = v73 | this->m_hTarget.m_Index & 0x8000;
          this->m_hTarget.m_Index = (v72 << 15) | this->m_hTarget.m_Index & 0x7FFF;
          v70 = 3;
        }
        else
        {
          this->m_hTarget.m_Index = -1;
          v70 = 3;
        }
      }
      bHasBeenAttackeda = v70;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
      v26 = bHasBeenAttackeda;
    }
    bHasBeenAttackedb = v26;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedHeroes);
    return bHasBeenAttackedb;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Urn::UseAbility  (line 101, @0x00000000028a7240, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Urn::UseAbility(CDOTA_Bot_AbilityUsage_Urn *const this)
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


