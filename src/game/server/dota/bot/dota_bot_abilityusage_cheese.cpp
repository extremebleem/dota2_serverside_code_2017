
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Cheese::CDOTA_Bot_AbilityUsage_Cheese  (line 23, @0x000000000289bf10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Cheese::CDOTA_Bot_AbilityUsage_Cheese(
        CDOTA_Bot_AbilityUsage_Cheese *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5E50;
}


// CDOTA_Bot_AbilityUsage_Cheese::GetCurrentUsageDesire  (line 30, @0x000000000289ddf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetMaxMana, GetUnit, IndexToIdentity, IsValid, LookupEntity, Min<float>, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, CDOTA_Bot::IsAboutToDie
// strings: "health_restore", "mana_restore"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Cheese::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Cheese *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTABaseAbility *v3; // rdi
  int LevelSpecialValue; // eax
  CDOTABaseAbility *v5; // r12
  int v6; // r13d
  CDOTABaseAbility *v7; // rdi
  int v8; // eax
  CDOTA_Bot *m_pBot; // rdx
  int v10; // r12d
  CConcreteEntityList *v11; // rsi
  uint32 m_Index; // eax
  unsigned __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  __int64 v15; // rcx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v18; // r14d
  CDOTA_Bot *v19; // rax
  uint32 v20; // edx
  unsigned __int16 v21; // cx
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  const CBaseEntity *v24; // rdi
  int Health; // eax
  CDOTA_Bot *v26; // rdi
  int v27; // r14d
  uint32 v28; // edx
  CEntityIdentity *v29; // rax
  CEntityIdentity *v30; // rax
  __m128 m_nHashCode; // xmm0
  CEntityInstance *v32; // rax
  int v33; // eax
  __m128i v34; // xmm1
  __m128 v35; // xmm2
  float v36; // r12d
  int result; // eax
  int v38; // edx
  float v39; // [rsp+Ch] [rbp-24h]

  m_pAbility = this->m_pAbility;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v3 = m_pAbility;
  else
    v3 = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v3, "health_restore", -1, 1);
  v5 = this->m_pAbility;
  v6 = LevelSpecialValue;
  if ( v5 != 0 && (*(v5->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v7 = v5;
  else
    v7 = 0;
  v8 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "mana_restore", -1, 1);
  m_pBot = this->m_pBot;
  v10 = v8;
  v11 = CEntityHandle::gm_pEntityList;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v13 = m_pBot->m_hUnit.m_Index, (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F]) == 0)
    || (v15 = v13 & 0x1FF, v11 = (8 * v15), (v16 = &v14[v15]) == 0)
    || m_Index != v16->m_EHandle.m_Index
    || (m_pInstance = v16->m_pInstance, v16->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v18 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance, v11);
  v19 = this->m_pBot;
  v20 = v19->m_hUnit.m_Index;
  if ( v20 + 2 <= 1
    || (v21 = v19->m_hUnit.m_Index, (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v21 >> 9) & 0x3F]) == 0)
    || (v23 = &v22[v21 & 0x1FF]) == 0
    || v20 != v23->m_EHandle.m_Index
    || (v24 = v23->m_pInstance, v23->m_pInstance == 0)
    || !v24->m_bIsDOTANPC )
  {
    v24 = 0;
  }
  Health = CBaseEntity::GetHealth(v24);
  v26 = this->m_pBot;
  v27 = v18 - Health;
  v28 = v26->m_hUnit.m_Index;
  if ( v28 + 2 > 1
    && (v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v26->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v30 = &v29[v26->m_hUnit.m_Index & 0x1FF]) != 0
    && v28 == v30->m_EHandle.m_Index
    && (v32 = v30->m_pInstance) != 0
    && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
  {
    m_nHashCode = v32[44].m_worldGroupId.m_nHashCode;
  }
  else
  {
    m_nHashCode = 0x1D48u;
    v32 = 0;
  }
  v33 = (m_nHashCode.m128_f32[0] - *&v32[44].m_iszPrivateVScripts.u.m_Id);
  m_nHashCode.m128_f32[0] = v6 / v27;
  v34 = 0x3F800000u;
  v35 = _mm_cmplt_ss(0x3F800000u, m_nHashCode);
  LODWORD(v39) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v35, m_nHashCode).m128_f32[0]) | v35.m128_i32[0] & 0x3F800000;
  *v34.m128i_i32 = fminf(1.0, v10 / v33);
  v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v34));
  if ( CDOTA_Bot::IsAboutToDie(v26) )
    return 3;
  v38 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  result = 0;
  if ( v38 == 2 && (v36 + v39) > 1.5 )
    return 3;
  return result;
}


// CDOTA_Bot_AbilityUsage_Cheese::UseAbility  (line 52, @0x000000000289b150, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Cheese::UseAbility(CDOTA_Bot_AbilityUsage_Cheese *const this)
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


