
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Butterfly::CDOTA_Bot_AbilityUsage_Butterfly  (line 17, @0x00000000028972e0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Butterfly::CDOTA_Bot_AbilityUsage_Butterfly(
        CDOTA_Bot_AbilityUsage_Butterfly *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5CB0;
}


// CDOTA_Bot_AbilityUsage_Butterfly::GetCurrentUsageDesire  (line 24, @0x00000000028976e0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Element, FastSqrt, Get, GetAction, GetAttackRange, GetDestination, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetTargetNPC, GetTeamNumber, GetUnit, IndexToIdentity, IsHero, IsListeningToEvent, Length2D, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABotActionMoveTo, Top, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::IsDangerouslyLow, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Butterfly::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Butterfly *const this)
{
  int v2; // eax
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *v4; // rbx
  CEntityInstance *v5; // rax
  CEntityInstance *v6; // r13
  CEntityInstance *v7; // rax
  const CBaseEntity *v8; // rdi
  const Vector *v9; // rbx
  const Vector *v10; // rax
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v15; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm0_4
  __int64 v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  CDOTA_Bot *v28; // rbx
  CDOTA_Bot *v29; // rax
  CDOTA_BaseNPC *v30; // r13
  CEntityInstance *v31; // rax
  const Vector *v32; // r14
  CEntityInstance *v33; // rax
  CEntityInstance *v34; // rdx
  CHandle<CBaseEntity> *m_pMemory; // rax
  CHandle<CBaseEntity> *v36; // rdi
  int v37; // r9d
  int v38; // r8d
  CEntityIdentity *v39; // rsi
  CEntityIdentity *v40; // rsi
  CEntityInstance *m_pInstance; // rdx
  int m_Id; // edx
  CDOTA_Bot *m_pBot; // rax
  int m_Size; // edx
  float *v45; // rbx
  CEntityInstance *v46; // rax
  const CBaseEntity *v47; // rdi
  float x; // xmm0_4
  float y; // xmm1_4
  float v50; // xmm0_4
  __int64 v51; // rax
  float v53; // [rsp+24h] [rbp-5Ch]
  float v54; // [rsp+24h] [rbp-5Ch]
  float v55; // [rsp+28h] [rbp-58h]
  float v56; // [rsp+28h] [rbp-58h]
  float v57; // [rsp+28h] [rbp-58h]
  float v58; // [rsp+28h] [rbp-58h]
  float v59; // [rsp+28h] [rbp-58h]
  float v60; // [rsp+2Ch] [rbp-54h]
  float v61; // [rsp+2Ch] [rbp-54h]
  EHANDLE hEnemy; // [rsp+30h] [rbp-50h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+40h] [rbp-40h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 3 )
  {
    m_pBot = this->m_pBot;
    m_Size = m_pBot->m_ActionStack.m_Size;
    if ( m_Size > 0 )
    {
      v45 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
      if ( v45 != 0 && (*(*v45 + 16LL))(v45) == 2 )
      {
        v59 = v45[18];
        v61 = v45[19];
        v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
          v47 = v46;
        else
          v47 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v47);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        LODWORD(AbsOrigin) = 2;
        v50 = fsqrt(((x - v59) * (x - v59)) + ((y - v61) * (y - v61)));
        if ( v50 <= 2000.0 )
          return v50 > 1000.0;
        return AbsOrigin;
      }
    }
LABEL_4:
    LODWORD(AbsOrigin) = 0;
    return AbsOrigin;
  }
  if ( v2 != 4 )
  {
    if ( v2 != 2 )
      goto LABEL_4;
    v4 = this->m_pBot;
    if ( v4->m_nAttackingCreeps > 2 )
      goto LABEL_4;
    if ( v4->m_nAttackingHeroes > 0 )
      goto LABEL_4;
    v5 = CEntityHandle::operator CEntityInstance *(&v4->m_hTarget);
    v6 = v5;
    if ( v5 == 0 || BYTE3(v5[7]._vptr_IHandleEntity) == 0 || (v5[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      goto LABEL_4;
    v7 = CEntityHandle::operator CEntityInstance *(&v4->m_hUnit);
    if ( v7 == 0 || (v8 = v7, BYTE3(v7[7]._vptr_IHandleEntity) == 0) )
      v8 = 0;
    v9 = CBaseEntity::GetAbsOrigin(v8);
    v10 = CBaseEntity::GetAbsOrigin(v6);
    v60 = fsqrt(((v10->x - v9->x) * (v10->x - v9->x)) + ((v10->y - v9->y) * (v10->y - v9->y)));
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
      v12 = v11;
    else
      v12 = 0;
    m_hScope_high = HIBYTE(v12[67].m_hPrivateScope.m_hScope);
    Modifier_Constant_Highest_Internal = 0.0;
    if ( m_hScope_high != 0xFF && *(*&v12[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             &v12[64].m_worldGroupId,
                                             modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                             &CModifierParams::s_Default);
    v15 = BYTE5(v12[67].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = 0.0;
    m_hScope_low = SLODWORD(v12[47].m_hPrivateScope.m_hScope);
    if ( v15 != 0xFF && *(*&v12[65].m_worldGroupId.m_nHashCode + 24 * v15) > 0 )
    {
      v53 = Modifier_Constant_Highest_Internal;
      v55 = SLODWORD(v12[47].m_hPrivateScope.m_hScope);
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &v12[64].m_worldGroupId,
                                              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v53;
      m_hScope_low = v55;
    }
    v18 = BYTE6(v12[67].m_hPrivateScope.m_hScope);
    v19 = m_hScope_low + Modifier_Constant_Additive_Internal;
    v20 = 0.0;
    if ( v18 != 0xFF && *(*&v12[65].m_worldGroupId.m_nHashCode + 24 * v18) > 0 )
    {
      v54 = Modifier_Constant_Highest_Internal;
      v56 = v19;
      v20 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v12[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v54;
      v19 = v56;
    }
    if ( Modifier_Constant_Highest_Internal > (v19 + v20) )
    {
      v51 = HIBYTE(v12[67].m_hPrivateScope.m_hScope);
      v27 = 0.0;
      if ( v51 != 0xFF && *(*&v12[65].m_worldGroupId.m_nHashCode + 24 * v51) > 0 )
        v27 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &v12[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                &CModifierParams::s_Default);
    }
    else
    {
      v21 = BYTE5(v12[67].m_hPrivateScope.m_hScope);
      v22 = 0.0;
      v23 = SLODWORD(v12[47].m_hPrivateScope.m_hScope);
      if ( v21 != 0xFF && *(*&v12[65].m_worldGroupId.m_nHashCode + 24 * v21) > 0 )
      {
        v57 = SLODWORD(v12[47].m_hPrivateScope.m_hScope);
        v22 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                &v12[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                &CModifierParams::s_Default);
        v23 = v57;
      }
      v24 = BYTE6(v12[67].m_hPrivateScope.m_hScope);
      v25 = v23 + v22;
      v26 = 0.0;
      if ( v24 != 0xFF && *(*&v12[65].m_worldGroupId.m_nHashCode + 24 * v24) > 0 )
      {
        v58 = v25;
        v26 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &v12[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                &CModifierParams::s_Default);
        v25 = v58;
      }
      v27 = v26 + v25;
    }
    if ( v27 >= v60 )
      goto LABEL_4;
    v28 = *&v6[45].m_worldGroupId.m_nHashCode;
    if ( v28 == 0 || !CDOTA_Bot::IsAboutToDie(*&v6[45].m_worldGroupId.m_nHashCode) && !CDOTA_Bot::IsDangerouslyLow(v28) )
      goto LABEL_4;
LABEL_59:
    LODWORD(AbsOrigin) = 2;
    return AbsOrigin;
  }
  v29 = this->m_pBot;
  hNearbyEnemies.m_Size = 0;
  v30 = 0;
  hNearbyEnemies.m_Memory.m_pMemory = 0;
  hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemies.m_Memory.m_nGrowSize = 0;
  v31 = CEntityHandle::operator CEntityInstance *(&v29->m_hUnit);
  if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
    v30 = v31;
  v32 = CBaseEntity::GetAbsOrigin(v30);
  v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
    v34 = v33;
  else
    v34 = 0;
  FindUnitsInRadius(HIBYTE(v34[7].m_CScriptComponent), v32, v30, 600.0, &hNearbyEnemies, 2, 3, 0, 0, 0);
  m_pMemory = hNearbyEnemies.m_Memory.m_pMemory;
  v36 = &hNearbyEnemies.m_Memory.m_pMemory[hNearbyEnemies.m_Size];
  if ( hNearbyEnemies.m_Memory.m_pMemory == v36 )
  {
LABEL_58:
    hNearbyEnemies.m_Size = 0;
    if ( (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory);
      if ( (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory);
    }
    goto LABEL_59;
  }
  v37 = 0;
  v38 = 0;
  do
  {
    while ( 1 )
    {
      hEnemy.m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEnemy.m_Index) >> 9) & 0x3F];
        if ( v39 == 0 )
          goto LABEL_46;
        v40 = &v39[hEnemy.m_Index & 0x1FF];
        if ( v40 == 0 )
          goto LABEL_46;
        if ( m_pMemory->m_Index != v40->m_EHandle.m_Index )
          goto LABEL_46;
        m_pInstance = v40->m_pInstance;
        if ( v40->m_pInstance == 0
          || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
          || *&m_pInstance[45].m_worldGroupId.m_nHashCode == 0 )
        {
          goto LABEL_46;
        }
        m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
        if ( (m_Id & 0x80u) != 0 )
          break;
        v37 -= ((m_Id & 1) == 0) - 1;
      }
LABEL_46:
      if ( v36 == ++m_pMemory )
        goto LABEL_56;
    }
    ++m_pMemory;
    ++v38;
  }
  while ( v36 != m_pMemory );
LABEL_56:
  if ( v38 <= 2 && v37 <= 1 )
    goto LABEL_58;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
  LODWORD(AbsOrigin) = 0;
  return AbsOrigin;
}


// CDOTA_Bot_AbilityUsage_Butterfly::UseAbility  (line 108, @0x0000000002896110, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Butterfly::UseAbility(CDOTA_Bot_AbilityUsage_Butterfly *const this)
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


