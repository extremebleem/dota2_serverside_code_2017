
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Dagon::CDOTA_Bot_AbilityUsage_Dagon  (line 23, @0x000000000289e470, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle, GetItem, ToDOTAItem, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Dagon::CDOTA_Bot_AbilityUsage_Dagon(
        CDOTA_Bot_AbilityUsage_Dagon *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  CDOTABaseAbility *v5; // rdi

  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6030;
  this->m_hTarget.m_Index = -1;
  if ( pAbility != 0 && (*(pAbility->_vptr_IHandleEntity + 223))(pAbility) != 0 )
    v5 = pAbility;
  else
    v5 = 0;
  this->m_iDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 1);
}


// CDOTA_Bot_AbilityUsage_Dagon::GetCurrentUsageDesire  (line 31, @0x000000000289c320, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IndexToIdentity, IsValid, Length, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyHeroes, GetBotTargetStatusCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CBaseEntity::GetAbsOrigin, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Dagon::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Dagon *const this)
{
  CDOTA_Bot *v2; // rax
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rdi
  int OpposingTeamNumber; // eax
  CDOTABaseAbility *v6; // rbx
  int v7; // r12d
  CDOTABaseAbility *v8; // rdi
  int v9; // eax
  __int64 v10; // r12
  int v11; // r13d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // si
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_Bot *v18; // rdx
  uint32 v19; // eax
  unsigned __int16 v20; // si
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *v23; // rsi
  int v24; // eax
  int v26; // r15d
  CEntityIdentity *m_pEntity; // rdx
  int v28; // eax
  __int16 v29; // cx
  CDOTA_Bot *m_pBot; // rbx
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // r13
  CEntityInstance *v33; // rax
  const CBaseEntity *v34; // r12
  const Vector *AbsOrigin; // rbx
  const Vector *v36; // rax
  CDOTABaseAbility *m_pAbility; // rbx
  CDOTABaseAbility *v38; // rdi
  CEntityIdentity *v39; // rdx
  int v40; // eax
  __int16 v41; // cx
  int v42; // [rsp+Ch] [rbp-54h]
  float m_iDamage; // [rsp+Ch] [rbp-54h]
  float v44; // [rsp+Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
  {
    m_pBot = this->m_pBot;
    v31 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
    if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 && SLOBYTE(v31[43].m_iszPrivateVScripts.u.m_Id) < 0 )
      return 0;
    hEnemyHeroes.m_Size = m_pBot->m_hTarget.m_Index;
    v32 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes);
    v33 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v33 == 0 || (v34 = v33, BYTE3(v33[7]._vptr_IHandleEntity) == 0) )
      v34 = 0;
    if ( v32 != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v32);
      v36 = CBaseEntity::GetAbsOrigin(v34);
      v44 = fsqrt(
              (((v36->x - AbsOrigin->x) * (v36->x - AbsOrigin->x)) + ((v36->y - AbsOrigin->y) * (v36->y - AbsOrigin->y)))
            + ((v36->z - AbsOrigin->z) * (v36->z - AbsOrigin->z)));
    }
    else
    {
      v44 = -1.0;
    }
    m_pAbility = this->m_pAbility;
    if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
      v38 = m_pAbility;
    else
      v38 = 0;
    if ( (*(v38->_vptr_IHandleEntity + 226))(v38, &vec3_origin, 0) > v44 )
    {
      this->m_hTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
      return 2;
    }
  }
  v2 = this->m_pBot;
  hEnemyHeroes.m_Size = 0;
  hEnemyHeroes.m_Memory.m_pMemory = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0;
  v3 = CEntityHandle::operator CEntityInstance *(&v2->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v4);
  v6 = this->m_pAbility;
  v7 = OpposingTeamNumber;
  if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v8 = v6;
  else
    v8 = 0;
  v9 = (*(v8->_vptr_IHandleEntity + 226))(v8, &vec3_origin, 0);
  CDOTA_Bot::FindNearbyHeroes(this->m_pBot, v9, v7, &hEnemyHeroes);
  if ( hEnemyHeroes.m_Size <= 0 )
  {
LABEL_22:
    this->m_hTarget.m_Index = -1;
    v24 = 0;
    goto LABEL_23;
  }
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = &hEnemyHeroes.m_Memory.m_pMemory[v10];
    m_Index = hEnemyHeroes.m_Memory.m_pMemory[v10].m_Index;
    if ( m_Index + 2 <= 1
      || (v14 = v12->m_Index,
          (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F]) == 0)
      || (v16 = &v15[v14 & 0x1FF]) == 0
      || m_Index != v16->m_EHandle.m_Index
      || (m_pInstance = v16->m_pInstance, v16->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    {
      m_pInstance = 0;
    }
    v18 = this->m_pBot;
    v19 = v18->m_hUnit.m_Index;
    if ( v19 + 2 <= 1
      || (v20 = v18->m_hUnit.m_Index, (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v20 >> 9) & 0x3F]) == 0)
      || (v22 = &v21[v20 & 0x1FF]) == 0
      || v19 != v22->m_EHandle.m_Index
      || (v23 = v22->m_pInstance, v22->m_pInstance == 0)
      || !v23->m_bIsDOTANPC )
    {
      v23 = 0;
    }
    if ( (GetBotTargetStatusCore(m_pInstance, v23, -1.0, this->m_pAbility) & 0xFB) != 0 )
      goto LABEL_21;
    m_iDamage = this->m_iDamage;
    v26 = (m_iDamage * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(m_pInstance, 2)));
    if ( CBaseEntity::GetHealth(m_pInstance) - v26 < 0 )
      break;
    if ( v26 > (CBaseEntity::GetHealth(m_pInstance) - (1.5 * v26)) )
    {
      if ( m_pInstance != 0 && (m_pEntity = m_pInstance->m_pEntity) != 0 )
      {
        v28 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v29 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v29 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v28 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        v24 = 2;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
        v24 = 2;
      }
      goto LABEL_23;
    }
LABEL_21:
    ++v11;
    ++v10;
    if ( hEnemyHeroes.m_Size <= v11 )
      goto LABEL_22;
  }
  if ( m_pInstance != 0 && (v39 = m_pInstance->m_pEntity) != 0 )
  {
    v40 = (v39->m_EHandle.m_Index >> 15) - (v39->m_flags & 1);
    v41 = 0x7FFF;
    if ( v39->m_EHandle.m_Index != -1 )
      v41 = v39->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v41 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v40 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    v24 = 3;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
    v24 = 3;
  }
LABEL_23:
  v42 = v24;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
  return v42;
}


// CDOTA_Bot_AbilityUsage_Dagon::UseAbility  (line 75, @0x000000000289b9a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Dagon::UseAbility(CDOTA_Bot_AbilityUsage_Dagon *const this)
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


