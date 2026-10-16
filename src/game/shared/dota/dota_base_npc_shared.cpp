
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CC_dota_dump_asset_modifiers  (line 48, @0x0000000002465ef0, libserver.so)  // inlines: CEntityHandle, DumpAssetModifiers, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: UTIL_GetCommandClient, CAssetModifierContainer::DumpContents
void __fastcall CC_dota_dump_asset_modifiers(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v3; // rbx
  unsigned int m_Value; // ecx
  unsigned int v5; // r8d
  unsigned __int16 v6; // ax
  int v7; // r9d
  int v8; // edx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityInstance *m_pInstance; // rax
  unsigned __int16 v12; // dx
  int v13; // ecx
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CAssetModifierContainer *v17; // rdi
  CAssetModifierContainer *v18; // rax

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    m_Value = v3[1].m_iMaxHealth.m_Value;
    v5 = m_Value >> 15;
    if ( m_Value == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = v3[1].m_iMaxHealth.m_Value & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Value == -1 )
            {
              v12 = 0x7FFF;
              v13 = 0x7FFF;
            }
            else
            {
              v12 = v3[1].m_iMaxHealth.m_Value & 0x7FFF;
              v13 = v12;
            }
            v14 = (v5 << 15) | v12 & 0x7FFF;
            if ( (v14 + 2) > 1
              && (v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9]) != 0
              && (v16 = &v15[v13 & 0x1FF]) != 0
              && v14 == v16->m_EHandle.m_Index
              && (v18 = v16->m_pInstance, v16->m_pInstance != 0)
              && HIBYTE(v18[8].m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount) != 0 )
            {
              v17 = 0;
              if ( (v18[52].m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory & 1) != 0 )
                v17 = v16->m_pInstance;
            }
            else
            {
              v17 = 0;
            }
            CAssetModifierContainer::DumpContents(v17 + 86);
          }
        }
      }
    }
  }
}


// CDOTA_BaseNPC::GetRangeToUnit  (line 75, @0x00000000024683a0, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTABaseAbility::CastAbility, CDOTA_BaseNPC::IsEntityInRange, CDOTA_Modifier_Tornado_Tempest::OnIntervalThink, CDOTA_Modifier_BlackDragon_SplashAttack::OnAttacked, CDOTA_Bot::FindClosestBuilding, CDOTABehaviorCommandMoveToNPCToGive::Update, CDOTABehaviorCommandMoveToNPC::Update, CDOTA_BaseNPC::Script_GetRangeToUnit, CDOTA_BaseNPC::AngerNearbyUnits, CDOTA_BaseNPC::GetBestEnemy, CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_BaseNPC::AlertNearbyUnits (22 total)
float __fastcall CDOTA_BaseNPC::GetRangeToUnit(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pNPC)
{
  const Vector *AbsOrigin; // r12
  const Vector *v4; // rax

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v4 = CBaseEntity::GetAbsOrigin(pNPC);
  return fsqrt(((v4->x - AbsOrigin->x) * (v4->x - AbsOrigin->x)) + ((v4->y - AbsOrigin->y) * (v4->y - AbsOrigin->y)))
       - pNPC->m_flHullRadius;
}


// CDOTA_BaseNPC::IsEntityInRange  (line 82, @0x0000000002468400, libserver.so)  // inlines: FastSqrt, Length2D, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetRangeToUnit
// callers: DOTA_ExecuteOrders, CDOTA_BotMode_PushTower_Human::GetDesire, CDOTA_BaseNPC::IsEntityInRangeForAttack, CDOTA_BaseNPC::IsEntityInRangeForCast, DamageImpact, CDOTA_Ability_Pudge_FleshHeap::OnHeroDiedNearby, CDOTA_Unit_Hero_MonkeyKing::CalculateActivityModifiers, CDOTA_Unit_Hero_MonkeyKing::AddCustomVisibility, CDOTA_Modifier_Visage_GravekeepersCloak::GetModifierTotal_ConstantBlock, CDOTA_Modifier_Item_Bloodstone::OnDeath, CDOTA_Modifier_Item_MagicWand::OnAbilityExecuted, CDOTA_Modifier_Item_MagicStick::OnAbilityExecuted (13 total)
bool __fastcall CDOTA_BaseNPC::IsEntityInRange(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC *pEntity,
        float a3,
        float flRange)
{
  const Vector *AbsOrigin; // r12
  const Vector *v6; // rax

  if ( pEntity != 0 && pEntity->m_bIsDOTANPC )
    return a3 >= CDOTA_BaseNPC::GetRangeToUnit(this, pEntity);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = CBaseEntity::GetAbsOrigin(pEntity);
  return a3 >= fsqrt(((v6->x - AbsOrigin->x) * (v6->x - AbsOrigin->x)) + ((v6->y - AbsOrigin->y) * (v6->y - AbsOrigin->y)));
}


// CDOTA_BaseNPC::IsEntityExceptToAttack  (line 96, @0x00000000024684a0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetModifier_Constant_Highest, GetSerialNumber, IsListeningToEvent, Set, SetUnit, operator=
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTABehaviorAttackPhase::Update, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorMoveToNPCToAttack::Update
bool __fastcall CDOTA_BaseNPC::IsEntityExceptToAttack(CDOTA_BaseNPC *const this, CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  __int64 v4; // rax
  bool v5; // bl
  CModifierParams params; // [rsp+0h] [rbp-A0h] BYREF

  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v3 = 0x7FFF;
      else
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  v4 = this->m_ModifierManager.m_buffsForModifiers[112];
  v5 = 0;
  if ( v4 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
    return CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_ALWAYS_ALLOW_ATTACK,
             &params) == 1.0;
  return v5;
}


// CDOTA_BaseNPC::IsInRangeOfFountain  (line 106, @0x0000000002468630, libserver.so)
// calls: CDOTAGamerules::IsInRangeOfFountain
// callers: CDOTA_UnitInventory::PickupItem, CDOTA_BotMode_Retreat::OnStart, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Retreat::CalculateDesiredLocation, CDOTA_BotMode_Retreat::GetDesire, CDOTA_Bot_AbilityUsage_Bottle::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Omniknight_Repel::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Windrunner_Windrun::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sven_Warcry::GetCurrentUsageDesire, CDOTA_BaseNPC_Hero::PurchaseItems, CDOTA_Modifier_Disruptor_Glimpse_Thinker::OnIntervalThink
bool __fastcall CDOTA_BaseNPC::IsInRangeOfFountain(CDOTA_BaseNPC *const this)
{
  return CDOTAGamerules::IsInRangeOfFountain(g_pGameRules, this);
}


// CDOTA_BaseNPC::IsInRangeOfShop  (line 113, @0x0000000002468650, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetAssignedHero, GetEntryIndex, GetGameMode, GetHandleEntity, GetInstance, GetPlayerID, GetSerialNumber, IndexToIdentity, Init, IsAddOnGame, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_PlayerResource::GetPlayer, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*
// callers: DOTA_ExecuteOrders, CDOTA_UnitInventory::SwapItems, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_BotMode_SecretShop::CalculateDesiredLocation, CDOTA_Bot_Script::DistanceFromSideShop, CDOTA_Bot_Script::DistanceFromSecretShop, CDOTA_BotMode_SideShop::CalculateDesiredLocation, CDOTABehaviorCommandMoveToNPCToGive::Update, CDOTA_BaseNPC::SellItem, CDOTA_BaseNPC::SetItemCombineLocked, CDOTA_BaseNPC::GiveItem, CDOTA_BaseNPC::MoveItem (18 total)
bool __fastcall CDOTA_BaseNPC::IsInRangeOfShop(CDOTA_BaseNPC *const this, DOTA_SHOP_TYPE iShopType, bool bSpecific)
{
  int v5; // eax
  int v7; // r13d
  CDOTAPlayer *Player; // rax
  unsigned __int16 v9; // dx
  int v10; // esi
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityInstance *v15; // rax
  CEntityHandle v16; // [rsp+0h] [rbp-40h] BYREF

  v5 = *&g_pGameRules[6].m_szQuestName[68];
  if ( (v5 == 15 || v5 == 19)
    && g_pGameRules[6].m_szQuestName[91] != 0
    && this->m_iCurShop.m_Value != DOTA_SHOP_TYPE::DOTA_SHOP_NONE )
  {
    return 1;
  }
  if ( v5 != 20 )
    return iShopType == this->m_iCurShop.m_Value;
  if ( this == 0 )
    return iShopType == this->m_iCurShop.m_Value;
  if ( (this->m_iUnitType & 1) == 0 )
    return iShopType == this->m_iCurShop.m_Value;
  v7 = *(this + 1200);
  Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v7);
  if ( Player == 0 )
    return iShopType == this->m_iCurShop.m_Value;
  if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v9 = 0x7FFF;
    v10 = 0x7FFF;
  }
  else
  {
    v9 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v10 = v9;
  }
  v11 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
  v16.m_Index = v11;
  if ( v11 + 2 > 1
    && (v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9]) != 0
    && (v13 = &v12[v10 & 0x1FF]) != 0
    && v11 == v13->m_EHandle.m_Index
    && (m_pInstance = v13->m_pInstance, v13->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && this == m_pInstance
    && (CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, v7),
        (v15 = CEntityHandle::operator CEntityInstance *(&v16)) != 0)
    && BYTE3(v15[7]._vptr_IHandleEntity) != 0
    && (v15[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && (*(v15->_vptr_IHandleEntity + 408))(v15) == 0 )
  {
    return 1;
  }
  else
  {
    return iShopType == this->m_iCurShop.m_Value;
  }
}


// CDOTA_BaseNPC::IsDeniable  (line 146, @0x0000000002468830, libserver.so)
// calls: CDOTA_BaseNPC::HealthFraction
// callers: DOTA_ExecuteOrders, CDOTA_BotMode_DefendTower::Think, CDOTA_Bot::DoCreepAttackAndDeny, CDOTABehaviorCommandMoveToTargetToAttack::Update
bool __fastcall CDOTA_BaseNPC::IsDeniable(CDOTA_BaseNPC *const this)
{
  bool result; // al
  uint32 m_iUnitType; // edx

  result = 1;
  if ( (this->m_nUnitState64.m_Value & 0x20000) == 0 )
  {
    m_iUnitType = this->m_iUnitType;
    result = 0;
    if ( (m_iUnitType & 1) == 0 && (m_iUnitType & 0x120) == 0 )
    {
      if ( (m_iUnitType & 0x10) != 0 )
        return CDOTA_BaseNPC::HealthFraction(this) <= 0.1;
      else
        return CDOTA_BaseNPC::HealthFraction(this) <= 0.5;
    }
  }
  return result;
}


// CDOTA_BaseNPC::SharedLoadNPCData  (line 162, @0x0000000002477640, libserver.so)  // inlines: AssignTo, Base, Element, FStrEq, FindKeyHash, GetRaw, GetValue, GetValue<float>, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, TempString, V_strlen, _V_strcmp, atof, atoi, operator=, operator=<DOTAUnitAttackCapability_t>, operator[]
// calls: strlen, CUtlString::operator=, AllocPooledString, Warning, strtod, VariantFieldTypeName, strtol
// callers: CDOTA_BaseNPC::LoadNPCData
// strings: "DOTA_UNIT_CAP_NO_ATTACK", "DOTA_UNIT_CAP_MELEE_ATTACK", "DOTA_UNIT_CAP_RANGED_ATTACK", "DOTA_UNIT_CAP_MOVE_NONE", "DOTA_UNIT_CAP_MOVE_GROUND", "DOTA_UNIT_CAP_MOVE_FLY" (29 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2477C2E, INVALID_ITEM_DEF_INDEX, jpt_24780F3
void __fastcall CDOTA_BaseNPC::SharedLoadNPCData(CDOTA_BaseNPC *const this, const CEntityKeyValues *pKV)
{
  int v4; // r13d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *v9; // rax
  const char *v10; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v11; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v13; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rdx
  CEntityVariant *v15; // rax
  const char *v16; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // cx
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rdx
  const char *v21; // rsi
  CEntityVariant *v22; // rax
  int v23; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // cx
  __int64 v25; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  const char *v28; // rsi
  CEntityVariant *v29; // rax
  int v30; // r13d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rdx
  CEntityVariant *v35; // rax
  const char *v36; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // cx
  __int64 m; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rdx
  float m_float; // xmm0_4
  CEntityVariant *v42; // rdx
  int16 v43; // ax
  int v44; // r13d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v45; // cx
  __int64 n; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v47; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rdx
  CEntityVariant *v49; // rax
  const char *v50; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v51; // cx
  __int64 ii; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v53; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rdx
  CEntityVariant *v55; // rax
  const char *v56; // rbx
  int m_nCount; // esi
  uint64 m_uint64; // r13
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v60; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *v65; // rax
  __int64 v66; // rdx
  const char *v67; // rax
  const char *v68; // rax
  UtlSymLargeId_t v69[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( (this->m_iUnitType & 1) != 0 )
    goto LABEL_2;
  m_nCount = pKV->m_keyHashes.m_nCount;
  LOWORD(m_uint64) = INVALID_ITEM_DEF_INDEX;
  if ( m_nCount <= 0 )
  {
LABEL_178:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_179;
  }
  m_nAllocated = pKV->m_keyHashes.m_nAllocated;
  v60 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v60) == 277925525 )
      goto LABEL_169;
LABEL_166:
    if ( m_nCount <= ++v60 )
      goto LABEL_178;
  }
  m_pElements = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKV->m_keyHashes.m_pElements;
  if ( m_pElements[v60] != 277925525 )
    goto LABEL_166;
LABEL_169:
  if ( pKV->m_keyValues.m_nAllocated != 0 )
    v62 = pKV->m_keyValues.m_pElements;
  else
    v62 = 0;
  p_m_value = &v62[v60].m_value;
LABEL_179:
  m_type = p_m_value->m_type;
  if ( m_type != 0 )
  {
    switch ( m_type )
    {
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        break;
      case 5:
        LOWORD(m_uint64) = LOWORD(p_m_value->m_float);
        break;
      case 6:
        LOWORD(m_uint64) = p_m_value->m_char;
        break;
      case 26:
        LOWORD(m_uint64) = -1;
        if ( p_m_value->m_int64 <= 0x7FFFFFFF )
        {
          LOWORD(m_uint64) = 0;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = p_m_value->m_uint64;
        }
        break;
      case 30:
        LOWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        break;
      case 33:
        LOWORD(m_uint64) = -1;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          LOWORD(m_uint64) = p_m_value->m_uint64;
        break;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        break;
      case 37:
        LOWORD(m_uint64) = -1;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          LOWORD(m_uint64) = p_m_value->m_int;
        break;
      default:
        v68 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v68);
        break;
    }
  }
  this->m_nWearableDefIndex.m_Data = m_uint64;
LABEL_2:
  v4 = pKV->m_keyHashes.m_nCount;
  if ( v4 > 0 )
  {
    v5 = pKV->m_keyHashes.m_nAllocated;
    for ( i = 0; v4 > i; ++i )
    {
      if ( v5 != 0 )
      {
        v7 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v5 > 9 )
          v7 = pKV->m_keyHashes.m_pElements;
        if ( v7[i] == -1584197003 )
        {
LABEL_10:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v8 = pKV->m_keyValues.m_pElements;
          else
            v8 = 0;
          v9 = &v8[i].m_value;
          if ( v9->m_type == 30 )
            goto LABEL_13;
          goto LABEL_24;
        }
      }
      else if ( *(4 * i) == -1584197003 )
      {
        goto LABEL_10;
      }
    }
  }
  v9 = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_13:
    v10 = v9->m_uint64;
    if ( v9->m_uint64 != 0 && strlen(v9->m_pszString) > 0 )
    {
      if ( v10 == "DOTA_UNIT_CAP_NO_ATTACK" || strcmp(v10, "DOTA_UNIT_CAP_NO_ATTACK") == 0 )
      {
        if ( this->m_iAttackCapabilities.m_Value != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iAttackCapabilities.m_Value = 0;
          v4 = pKV->m_keyHashes.m_nCount;
        }
      }
      else if ( v10 == "DOTA_UNIT_CAP_MELEE_ATTACK" || strcmp(v10, "DOTA_UNIT_CAP_MELEE_ATTACK") == 0 )
      {
        if ( this->m_iAttackCapabilities.m_Value != 1 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iAttackCapabilities.m_Value = 1;
          v4 = pKV->m_keyHashes.m_nCount;
        }
      }
      else if ( v10 == "DOTA_UNIT_CAP_RANGED_ATTACK" || strcmp(v10, "DOTA_UNIT_CAP_RANGED_ATTACK") == 0 )
      {
        if ( this->m_iAttackCapabilities.m_Value != 2 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iAttackCapabilities.m_Value = 2;
          v4 = pKV->m_keyHashes.m_nCount;
        }
      }
      else
      {
        Warning("Unknown Attack Capabilities during parse! (%s)\n", v10);
        v4 = pKV->m_keyHashes.m_nCount;
      }
    }
  }
LABEL_24:
  if ( v4 > 0 )
  {
    v11 = pKV->m_keyHashes.m_nAllocated;
    for ( j = 0; v4 > j; ++j )
    {
      if ( v11 != 0 )
      {
        v13 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v11 > 9 )
          v13 = pKV->m_keyHashes.m_pElements;
        if ( v13[j] == -1220127342 )
        {
LABEL_32:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v14 = pKV->m_keyValues.m_pElements;
          else
            v14 = 0;
          v15 = &v14[j].m_value;
          if ( v15->m_type == 30 )
            goto LABEL_35;
          goto LABEL_45;
        }
      }
      else if ( *(4 * j) == -1220127342 )
      {
        goto LABEL_32;
      }
    }
  }
  v15 = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_35:
    v16 = v15->m_uint64;
    if ( v15->m_uint64 != 0 && strlen(v15->m_pszString) > 0 )
    {
      if ( v16 == "DOTA_UNIT_CAP_MOVE_NONE" || strcmp(v16, "DOTA_UNIT_CAP_MOVE_NONE") == 0 )
      {
        this->m_iMoveCapabilities = 0;
        v4 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v16 == "DOTA_UNIT_CAP_MOVE_GROUND" || strcmp(v16, "DOTA_UNIT_CAP_MOVE_GROUND") == 0 )
      {
        this->m_iMoveCapabilities = 1;
        v4 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v16 == "DOTA_UNIT_CAP_MOVE_FLY" || strcmp(v16, "DOTA_UNIT_CAP_MOVE_FLY") == 0 )
      {
        this->m_iMoveCapabilities = 2;
        v4 = pKV->m_keyHashes.m_nCount;
      }
      else
      {
        Warning("Unknown Movement Capabilities during parse! (%s)\n", v16);
        v4 = pKV->m_keyHashes.m_nCount;
      }
    }
  }
LABEL_45:
  if ( v4 <= 0 )
  {
LABEL_57:
    v22 = &CEntityKeyValues::sm_EmptyVariant;
    v21 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_56;
    goto LABEL_58;
  }
  v17 = pKV->m_keyHashes.m_nAllocated;
  v18 = 0;
  while ( 2 )
  {
    if ( v17 == 0 )
    {
      if ( *(4 * v18) == 1311643360 )
        break;
      goto LABEL_50;
    }
    v19 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
    if ( v17 > 9 )
      v19 = pKV->m_keyHashes.m_pElements;
    if ( v19[v18] != 1311643360 )
    {
LABEL_50:
      if ( v4 <= ++v18 )
        goto LABEL_57;
      continue;
    }
    break;
  }
  if ( pKV->m_keyValues.m_nAllocated != 0 )
    v20 = pKV->m_keyValues.m_pElements;
  else
    v20 = 0;
  v21 = 0;
  v22 = &v20[v18].m_value;
  if ( v22->m_type == 30 )
LABEL_56:
    v21 = v22->m_uint64;
LABEL_58:
  CUtlString::operator=(&this->m_szUnitLabel, v21);
  v23 = pKV->m_keyHashes.m_nCount;
  if ( v23 <= 0 )
  {
LABEL_70:
    v29 = &CEntityKeyValues::sm_EmptyVariant;
    v28 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_69;
    goto LABEL_71;
  }
  v24 = pKV->m_keyHashes.m_nAllocated;
  v25 = 0;
  while ( 2 )
  {
    if ( v24 == 0 )
    {
      if ( *(4 * v25) == -471879449 )
        break;
      goto LABEL_63;
    }
    v26 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
    if ( v24 > 9 )
      v26 = pKV->m_keyHashes.m_pElements;
    if ( v26[v25] != -471879449 )
    {
LABEL_63:
      if ( v23 <= ++v25 )
        goto LABEL_70;
      continue;
    }
    break;
  }
  if ( pKV->m_keyValues.m_nAllocated != 0 )
    v27 = pKV->m_keyValues.m_pElements;
  else
    v27 = 0;
  v28 = 0;
  v29 = &v27[v25].m_value;
  if ( v29->m_type == 30 )
LABEL_69:
    v28 = v29->m_uint64;
LABEL_71:
  AllocPooledString(v69, v28);
  this->m_iszAnimationModifier.u.m_Id = v69[0];
  v30 = pKV->m_keyHashes.m_nCount;
  if ( v30 > 0 )
  {
    v31 = pKV->m_keyHashes.m_nAllocated;
    for ( k = 0; v30 > k; ++k )
    {
      if ( v31 != 0 )
      {
        v33 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v31 > 9 )
          v33 = pKV->m_keyHashes.m_pElements;
        if ( v33[k] == -1588268315 )
        {
LABEL_79:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v34 = pKV->m_keyValues.m_pElements;
          else
            v34 = 0;
          v35 = &v34[k].m_value;
          if ( v35->m_type == 30 )
            goto LABEL_82;
          goto LABEL_102;
        }
      }
      else if ( *(4 * k) == -1588268315 )
      {
        goto LABEL_79;
      }
    }
  }
  v35 = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_82:
    v36 = v35->m_uint64;
    if ( v35->m_uint64 != 0 && strlen(v35->m_pszString) > 0 )
    {
      if ( v36 == "DOTA_HULL_SIZE_SMALL" || strcmp(v36, "DOTA_HULL_SIZE_SMALL") == 0 )
      {
        this->m_flHullRadius = 8.0;
        this->m_flCollisionPadding = 10.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_REGULAR" || strcmp(v36, "DOTA_HULL_SIZE_REGULAR") == 0 )
      {
        this->m_flHullRadius = 16.0;
        this->m_flCollisionPadding = 20.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_HERO" || strcmp(v36, "DOTA_HULL_SIZE_HERO") == 0 )
      {
        this->m_flHullRadius = 24.0;
        this->m_flCollisionPadding = 3.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_SIEGE" || strcmp(v36, "DOTA_HULL_SIZE_SIEGE") == 0 )
      {
        this->m_flHullRadius = 16.0;
        this->m_flCollisionPadding = 24.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_TOWER" || strcmp(v36, "DOTA_HULL_SIZE_TOWER") == 0 )
      {
        this->m_flHullRadius = 144.0;
        this->m_flCollisionPadding = 0.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_HUGE" || strcmp(v36, "DOTA_HULL_SIZE_HUGE") == 0 )
      {
        this->m_flHullRadius = 80.0;
        this->m_flCollisionPadding = 0.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_BUILDING" || strcmp(v36, "DOTA_HULL_SIZE_BUILDING") == 0 )
      {
        this->m_flHullRadius = 0.0;
        this->m_flCollisionPadding = 16.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_BARRACKS" || strcmp(v36, "DOTA_HULL_SIZE_BARRACKS") == 0 )
      {
        this->m_flHullRadius = 144.0;
        this->m_flCollisionPadding = 16.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v36 == "DOTA_HULL_SIZE_FILLER" || strcmp(v36, "DOTA_HULL_SIZE_FILLER") == 0 )
      {
        this->m_flHullRadius = 96.0;
        this->m_flCollisionPadding = 16.0;
        v30 = pKV->m_keyHashes.m_nCount;
      }
      else
      {
        Warning("Unknown Hull Name during parse! (%s)\n", v36);
        v30 = pKV->m_keyHashes.m_nCount;
      }
    }
  }
LABEL_102:
  if ( v30 > 0 )
  {
    v37 = pKV->m_keyHashes.m_nAllocated;
    for ( m = 0; v30 > m; ++m )
    {
      if ( v37 != 0 )
      {
        v39 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v37 > 9 )
          v39 = pKV->m_keyHashes.m_pElements;
        if ( v39[m] == 1570043924 )
        {
LABEL_110:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v40 = pKV->m_keyValues.m_pElements;
          else
            v40 = 0;
          m_float = 0.0;
          v42 = &v40[m].m_value;
          v43 = v42->m_type;
          if ( v43 != 0 )
            goto LABEL_113;
          goto LABEL_115;
        }
      }
      else if ( *(4 * m) == 1570043924 )
      {
        goto LABEL_110;
      }
    }
  }
  v42 = &CEntityKeyValues::sm_EmptyVariant;
  m_float = 0.0;
  v43 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v43 != 0 )
  {
LABEL_113:
    switch ( v43 )
    {
      case 1:
        m_float = v42->m_float;
        break;
      case 5:
        m_float = v42->m_int;
        break;
      case 6:
        m_float = v42->m_char;
        break;
      case 26:
        m_float = v42->m_uint64;
        break;
      case 30:
        m_float = strtod(v42->m_pszString, 0);
        break;
      case 33:
        v65 = v42->m_uint64;
        if ( v42->m_int64 >= 0 )
          goto LABEL_191;
        v66 = v42->m_uint64 & 1 | (v42->m_uint64 >> 1);
        m_float = v66 + v66;
        break;
      case 34:
        m_float = v42->m_float64;
        break;
      case 37:
        LODWORD(v65) = v42->m_int;
LABEL_191:
        m_float = v65;
        break;
      default:
        v67 = VariantFieldTypeName(v43);
        Warning("No conversion from %s to float now\n", v67);
        m_float = 0.0;
        break;
    }
  }
LABEL_115:
  this->m_flProjectileCollisionSize = m_float;
  v44 = pKV->m_keyHashes.m_nCount;
  if ( v44 > 0 )
  {
    v45 = pKV->m_keyHashes.m_nAllocated;
    for ( n = 0; v44 > n; ++n )
    {
      if ( v45 != 0 )
      {
        v47 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v45 > 9 )
          v47 = pKV->m_keyHashes.m_pElements;
        if ( v47[n] == -2123460034 )
        {
LABEL_123:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v48 = pKV->m_keyValues.m_pElements;
          else
            v48 = 0;
          v49 = &v48[n].m_value;
          if ( v49->m_type == 30 )
            goto LABEL_126;
          goto LABEL_138;
        }
      }
      else if ( *(4 * n) == -2123460034 )
      {
        goto LABEL_123;
      }
    }
  }
  v49 = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_126:
    v50 = v49->m_uint64;
    if ( v49->m_uint64 != 0 && strlen(v49->m_pszString) > 0 )
    {
      if ( v50 == "DOTA_COMBAT_CLASS_ATTACK_HERO" || strcmp(v50, "DOTA_COMBAT_CLASS_ATTACK_HERO") == 0 )
      {
        this->m_iCombatClassAttack = 0;
        v44 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v50 == "DOTA_COMBAT_CLASS_ATTACK_BASIC" || strcmp(v50, "DOTA_COMBAT_CLASS_ATTACK_BASIC") == 0 )
      {
        this->m_iCombatClassAttack = 1;
        v44 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v50 == "DOTA_COMBAT_CLASS_ATTACK_PIERCE" || strcmp(v50, "DOTA_COMBAT_CLASS_ATTACK_PIERCE") == 0 )
      {
        this->m_iCombatClassAttack = 2;
        v44 = pKV->m_keyHashes.m_nCount;
      }
      else if ( v50 == "DOTA_COMBAT_CLASS_ATTACK_SIEGE" || strcmp(v50, "DOTA_COMBAT_CLASS_ATTACK_SIEGE") == 0 )
      {
        this->m_iCombatClassAttack = 3;
        v44 = pKV->m_keyHashes.m_nCount;
      }
      else
      {
        Warning("Unknown Combat Class Attack during parse! (%s)\n", v50);
        v44 = pKV->m_keyHashes.m_nCount;
      }
    }
  }
LABEL_138:
  if ( v44 > 0 )
  {
    v51 = pKV->m_keyHashes.m_nAllocated;
    for ( ii = 0; v44 > ii; ++ii )
    {
      if ( v51 != 0 )
      {
        v53 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v51 > 9 )
          v53 = pKV->m_keyHashes.m_pElements;
        if ( v53[ii] == -1914659766 )
        {
LABEL_146:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v54 = pKV->m_keyValues.m_pElements;
          else
            v54 = 0;
          v55 = &v54[ii].m_value;
          if ( v55->m_type == 30 )
            goto LABEL_149;
          return;
        }
      }
      else if ( *(4 * ii) == -1914659766 )
      {
        goto LABEL_146;
      }
    }
  }
  v55 = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_149:
    v56 = v55->m_uint64;
    if ( v55->m_uint64 != 0 && strlen(v55->m_pszString) > 0 )
    {
      if ( v56 == "DOTA_COMBAT_CLASS_DEFEND_STRUCTURE" || strcmp(v56, "DOTA_COMBAT_CLASS_DEFEND_STRUCTURE") == 0 )
      {
        this->m_iCombatClassDefend = 0;
      }
      else if ( v56 == "DOTA_COMBAT_CLASS_DEFEND_HERO" || strcmp(v56, "DOTA_COMBAT_CLASS_DEFEND_HERO") == 0 )
      {
        this->m_iCombatClassDefend = 1;
      }
      else
      {
        if ( v56 != "DOTA_COMBAT_CLASS_DEFEND_BASIC" && strcmp(v56, "DOTA_COMBAT_CLASS_DEFEND_BASIC") != 0 )
          Warning("Unknown Combat Class Defend during parse! (%s)\n", v56);
        this->m_iCombatClassDefend = 2;
      }
    }
  }
}


// CDOTA_BaseNPC::CreateCollisionBounds  (line 331, @0x00000000024688a0, libserver.so)  // inlines: SetCollisionBounds, Vector
// calls: CCollisionProperty::SetCollisionBounds, CBaseEntity::GetModel
// callers: CDOTA_BaseNPC::ManageModelChanges, CDOTA_BaseNPC::Spawn
void __fastcall CDOTA_BaseNPC::CreateCollisionBounds(CDOTA_BaseNPC *const this)
{
  float m_flHullRadius; // xmm0_4
  void (__fastcall *v3)(IGameModelInfo *, _QWORD *, Vector *, Vector *); // r15
  _QWORD v4[2]; // [rsp+0h] [rbp-60h] BYREF
  Vector vMins; // [rsp+10h] [rbp-50h] BYREF
  Vector vMaxs; // [rsp+20h] [rbp-40h] BYREF

  m_flHullRadius = this->m_flHullRadius;
  if ( m_flHullRadius == 0.0 )
  {
    v3 = *(modelinfo->_vptr_IAppSystem + 16);
    CBaseEntity::GetModel(v4, this);
    v3(modelinfo, v4, &vMins, &vMaxs);
    m_flHullRadius = ((vMaxs.x - vMins.x) * 0.5) - this->m_flCollisionPadding;
    this->m_flHullRadius = m_flHullRadius;
  }
  vMaxs.x = m_flHullRadius;
  vMaxs.y = m_flHullRadius;
  vMaxs.z = 72.0;
  vMins.x = -m_flHullRadius;
  vMins.y = -m_flHullRadius;
  vMins.z = 0.0;
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, &vMins, &vMaxs);
}


// CDOTA_BaseNPC::GetCurrentVisionRange  (line 346, @0x0000000002468990, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, InState, IsBlind, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_BaseNPC::GetNightTimeVisionRange, CDOTA_BaseNPC::GetDayTimeVisionRange
// callers: CDOTAFogOfWarSystem::UpdateFogOfWar, CDOTAFogOfWarSystem::AddFOWEntity, CDOTA_Unit_Hero_MonkeyKing::AddCustomVisibility
int __fastcall CDOTA_BaseNPC::GetCurrentVisionRange(CDOTA_BaseNPC *const this)
{
  float v2; // xmm0_4

  if ( (*(this->_vptr_IHandleEntity + 408))(this) == 0
    || this->m_bIsWaitingToSpawn.m_Value
    || (this->m_nUnitState64.m_Value & 0x40000000) != 0 )
  {
    return 0;
  }
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0 )
    return CDOTA_BaseNPC::GetNightTimeVisionRange(this);
  if ( BYTE1(g_pGameRules[14].m_nQuestPhase) != 0 )
    return CDOTA_BaseNPC::GetNightTimeVisionRange(this);
  v2 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
  if ( v2 < 0.0 || v2 > 1.0 || (v2 + 0.0) < 0.25 || (v2 + 0.0) > 0.75 )
    return CDOTA_BaseNPC::GetNightTimeVisionRange(this);
  return CDOTA_BaseNPC::GetDayTimeVisionRange(this);
}


// CDOTA_BaseNPC::EnableAutoStyles  (line 355, @0x0000000002468a50, libserver.so)  // inlines: CAutoStyleCriteria, CUtlHashtable, CUtlMemory
// calls: operator new
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC::EnableAutoStyles(CDOTA_BaseNPC *const this)
{
  CAutoStyleCriteria *v2; // rax

  if ( this->m_pAutoStyleCriteria == 0 )
  {
    v2 = operator new(0x20u);
    v2->m_criteria.m_table.m_pMemory = 0;
    v2->m_criteria.m_table.m_nAllocationCount = 0;
    v2->m_criteria.m_table.m_nGrowSize = 0;
    v2->m_criteria.m_nUsed = 0;
    v2->m_criteria.m_nMinSize = 32;
    v2->m_criteria.m_bSizeLocked = 0;
    this->m_pAutoStyleCriteria = v2;
  }
}


// CDOTA_BaseNPC::ClearAutoStyleCriteria  (line 363, @0x00000000024768a0, libserver.so)  // inlines: Clear, Purge
// calls: CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge
void __fastcall CDOTA_BaseNPC::ClearAutoStyleCriteria(CDOTA_BaseNPC *const this)
{
  CAutoStyleCriteria *m_pAutoStyleCriteria; // rbx

  m_pAutoStyleCriteria = this->m_pAutoStyleCriteria;
  if ( m_pAutoStyleCriteria != 0 )
  {
    CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(&this->m_pAutoStyleCriteria->m_criteria);
    if ( (m_pAutoStyleCriteria->m_criteria.m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&m_pAutoStyleCriteria->m_criteria.m_table);
  }
}


// CDOTA_BaseNPC::GetAutoStyleCriteria  (line 371, @0x0000000002468ab0, libserver.so)
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
const CAutoStyleCriteria *__fastcall CDOTA_BaseNPC::GetAutoStyleCriteria(const CDOTA_BaseNPC *const this)
{
  return this->m_pAutoStyleCriteria;
}


// CDOTA_BaseNPC::SetAutoStyleCriteria  (line 376, @0x00000000024817a0, libserver.so)  // inlines: CUtlKeyValuePair<CUtlStringToken>, Construct<CUtlKeyValuePair<CUtlStringToken, float>, CUtlStringToken>, DoInsert<const CUtlStringToken&>, DoLookup<const CUtlStringToken&>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, HashItem<unsigned int>, IdealIndex, IndexToIdentity, Insert, IsValid, LookupEntity, SetCriteria, operator CEconWearable*, operator CEntityInstance*, operator(), operator==, operator[]
// calls: MurmurHash2, CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed, CEconWearable::SelectAutoStyle, CDOTA_BaseNPC::UpdateAssetModifiers
// callers: CDOTA_BaseNPC::CopyAutoStyleCriteriaFrom, npc_test_autostyle, CDOTA_BaseNPC_Hero::UpgradeAbility, CDOTA_BaseNPC_Hero::HeroLevelUp
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::SetAutoStyleCriteria(
        CDOTA_BaseNPC *const this,
        CUtlStringToken criteria,
        float a3,
        float flValue)
{
  CAutoStyleCriteria *m_pAutoStyleCriteria; // rbx
  uint32 v6; // eax
  float v7; // xmm0_4
  int inserted; // eax
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  int m_Size; // eax
  unsigned __int64 v13; // rbx
  char v14; // r15
  __int64 v15; // r12
  CHandle<CEconWearable> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  int v21; // edi
  int flags_and_hash; // r8d
  uint32 key[16]; // [rsp+10h] [rbp-40h] BYREF

  m_pAutoStyleCriteria = this->m_pAutoStyleCriteria;
  if ( m_pAutoStyleCriteria == 0 )
    return;
  key[0] = criteria.m_nHashCode;
  v6 = MurmurHash2(key, 4, 0x3501A674u);
  v7 = a3;
  if ( m_pAutoStyleCriteria->m_criteria.m_nUsed == 0 )
    goto LABEL_3;
  m_pMemory = m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory;
  v21 = m_pAutoStyleCriteria->m_criteria.m_table.m_nAllocationCount - 1;
  flags_and_hash = m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory[v21 & v6].flags_and_hash;
  if ( (v21 & v6) != (v21 & flags_and_hash | (flags_and_hash >> 31)) )
    goto LABEL_3;
  LODWORD(v10) = v21 & v6;
  while ( 1 )
  {
    if ( (v21 & v6) == (v21 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((v6 ^ flags_and_hash) & 0x3FFFFFFF) == 0 && key[0] == m_pMemory[v10].data[0] )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        goto LABEL_3;
    }
    LODWORD(v10) = v21 & (v10 + 1);
    flags_and_hash = m_pMemory[v10].flags_and_hash;
  }
  if ( v10 == -1 )
  {
LABEL_3:
    inserted = CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsertUnconstructed(
                 &m_pAutoStyleCriteria->m_criteria,
                 v6,
                 1);
    m_pMemory = m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory;
    v10 = inserted;
    v7 = a3;
    v11 = &m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory[inserted];
    if ( v11 != -4 )
    {
      *(v11 + 4) = key[0];
      m_pMemory = m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory;
    }
    goto LABEL_5;
  }
  v10 = v10;
LABEL_5:
  *&m_pMemory[v10].data[1] = v7;
  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v16 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v13 / 4];
        m_Index = v16->m_Index;
        if ( v16->m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index && v20->m_pInstance != 0 )
              break;
          }
        }
        v13 += 4LL;
        if ( v13 == v15 )
          goto LABEL_16;
      }
      if ( CEconWearable::SelectAutoStyle(v20->m_pInstance, this->m_pAutoStyleCriteria) )
        v14 = 1;
      v13 += 4LL;
    }
    while ( v13 != v15 );
LABEL_16:
    if ( v14 != 0 )
      CDOTA_BaseNPC::UpdateAssetModifiers(this);
  }
}


// CDOTA_BaseNPC::CopyAutoStyleCriteriaFrom  (line 400, @0x00000000024819b0, libserver.so)  // inlines: Clear, ClearAutoStyleCriteria, FirstCriteria, FirstHandle, GetAutoStyleCriteria, GetCriteria, Key, NextCriteria, NextHandle, Purge, operator[]
// calls: CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, CDOTA_BaseNPC::SetAutoStyleCriteria
void __fastcall CDOTA_BaseNPC::CopyAutoStyleCriteriaFrom(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pNPC)
{
  float v2; // xmm1_4
  CAutoStyleCriteria *m_pAutoStyleCriteria; // r12
  CAutoStyleCriteria *v6; // r14
  int m_nAllocationCount; // ecx
  int *p_flags_and_hash; // rsi
  int *v9; // rdx
  int v10; // eax
  __int64 v11; // r13
  int v12; // ecx
  int v13; // eax
  int *v14; // rdx
  int v15; // r12d

  m_pAutoStyleCriteria = this->m_pAutoStyleCriteria;
  if ( m_pAutoStyleCriteria != 0 )
  {
    CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(&this->m_pAutoStyleCriteria->m_criteria);
    if ( (m_pAutoStyleCriteria->m_criteria.m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&m_pAutoStyleCriteria->m_criteria.m_table);
  }
  if ( pNPC != 0 )
  {
    v6 = pNPC->m_pAutoStyleCriteria;
    if ( v6 != 0 )
    {
      m_nAllocationCount = v6->m_criteria.m_table.m_nAllocationCount;
      p_flags_and_hash = &v6->m_criteria.m_table.m_pMemory->flags_and_hash;
      if ( m_nAllocationCount > 0 )
      {
        v9 = p_flags_and_hash + 3;
        v10 = 0;
        if ( *p_flags_and_hash >= 0 )
        {
          v15 = 0;
          goto LABEL_14;
        }
        while ( ++v10 != m_nAllocationCount )
        {
          v9 += 3;
          if ( *(v9 - 3) >= 0 )
          {
            if ( v10 != -1 )
            {
              v15 = v10;
LABEL_14:
              while ( 1 )
              {
                v11 = 3LL * v15;
                CDOTA_BaseNPC::SetAutoStyleCriteria(this, p_flags_and_hash[v11 + 1], *&p_flags_and_hash[v11 + 2], v2);
                v12 = v6->m_criteria.m_table.m_nAllocationCount;
                v13 = v15 + 1;
                p_flags_and_hash = &v6->m_criteria.m_table.m_pMemory->flags_and_hash;
                if ( v15 + 1 >= v12 )
                  break;
                v14 = &p_flags_and_hash[3 * v13 + 3];
                if ( p_flags_and_hash[v11 + 3] < 0 )
                {
                  while ( ++v13 != v12 )
                  {
                    v14 += 3;
                    if ( *(v14 - 3) >= 0 )
                      goto LABEL_20;
                  }
                  return;
                }
LABEL_20:
                v15 = v13;
                if ( v13 == -1 )
                  return;
              }
            }
            return;
          }
        }
      }
    }
  }
}


// npc_test_autostyle  (line 418, @0x0000000002481ad0, libserver.so)  // inlines: Arg, MakeStringToken, ToDOTABaseNPC, operator[]
// calls: V_atof, UTIL_GetCommandClient, GetNextCommandEntity, CEntityInstance::IsAuthoritative, CDOTA_BaseNPC::SetAutoStyleCriteria, MurmurHash2LowerCase, RegisterStringToken
void __fastcall npc_test_autostyle(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r13
  const char *v7; // rbx
  const char *v8; // rdi
  __m128i v9; // xmm0
  CUtlStringToken v10; // r14d
  float v11; // r15d
  CDOTA_BaseNPC *v12; // rbx
  CBasePlayer *CommandClient; // rax
  CBaseEntity *NextCommandEntity; // rax
  float v15; // xmm1_4
  uint32 v16; // eax
  uint32 v17; // [rsp+Ch] [rbp-34h]

  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc == 3 )
  {
    v4 = 2;
    v5 = 1;
    v6 = 0;
  }
  else
  {
    if ( m_nArgc != 4 )
      return;
    v6 = args->m_ppArgv[1];
    v4 = 3;
    v5 = 2;
  }
  v7 = args->m_ppArgv[v5];
  if ( m_nArgc > v4 )
    v8 = args->m_ppArgv[v4];
  else
    v8 = "";
  *v9.m128i_i32 = V_atof(v8);
  v10.m_nHashCode = 0;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  if ( v7 != 0 && *v7 != 0 )
  {
    v16 = MurmurHash2LowerCase(v7, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v17 = v16;
      RegisterStringToken(v16, v7, 0, 1);
      v16 = v17;
    }
    v10.m_nHashCode = v16;
  }
  v12 = 0;
  while ( 1 )
  {
    CommandClient = UTIL_GetCommandClient(ctx);
    NextCommandEntity = GetNextCommandEntity(CommandClient, v6, v12);
    v12 = NextCommandEntity;
    if ( NextCommandEntity == 0 )
      break;
    if ( CEntityInstance::IsAuthoritative(NextCommandEntity) && v12->m_bIsDOTANPC )
      CDOTA_BaseNPC::SetAutoStyleCriteria(v12, v10, v11, v15);
  }
}


// CDOTA_BaseNPC::SetStyleOverride  (line 444, @0x000000000246a390, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CEconWearable::SetStyleOverride, CDOTA_BaseNPC::UpdateAssetModifiers
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::SetStyleOverride(CDOTA_BaseNPC *const this, style_index_t nStyle)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  char v6; // r15
  CEconWearable *m_pInstance; // rdi
  CHandle<CEconWearable> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // si
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-38h]

  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    v13 = 4LL * (m_Size - 1) + 4;
    do
    {
      m_pInstance = 0;
      v8 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v5 / 4];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 > 1 )
      {
        v10 = v8->m_Index;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[v10 & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      if ( CEconWearable::SetStyleOverride(m_pInstance, nStyle) )
        v6 = 1;
      v5 += 4LL;
    }
    while ( v5 != v13 );
    if ( v6 != 0 )
      CDOTA_BaseNPC::UpdateAssetModifiers(this);
  }
}


// CDOTA_BaseNPC::ClearActivityModifiers  (line 463, @0x0000000002468ac0, libserver.so)  // inlines: RemoveAll
void __fastcall CDOTA_BaseNPC::ClearActivityModifiers(CDOTA_BaseNPC *const this)
{
  this->m_ActivityModifiers.m_Size = 0;
}


// CDOTA_BaseNPC::AddActivityModifier  (line 468, @0x000000000247d990, libserver.so)  // inlines: AddToTail, CUtlSymbol, CopyConstruct<CUtlSymbol>, Element, Find, GrowMemory, HasElement, operator==, operator[]
// calls: FindOrAddActivityModifier, CUtlMemory<CUtlSymbol, int>::Grow
// callers: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC_Pet::CalculateActivityModifiers, CDOTA_Unit_Hero_Nevermore::CalculateActivityModifiers, CDOTA_Unit_Hero_Tiny::CalculateActivityModifiers, CDOTA_Unit_Hero_PhantomAssassin::CalculateActivityModifiers, CDOTA_Unit_Hero_Sniper::CalculateActivityModifiers, CDOTA_Unit_Hero_Viper::CalculateActivityModifiers, CDOTA_Unit_Hero_Abaddon::CalculateActivityModifiers, CDOTA_Unit_Hero_AbyssalUnderlord::CalculateActivityModifiers, CDOTA_Unit_Hero_ArcWarden::CalculateActivityModifiers, CDOTA_Unit_Hero_Oracle::CalculateActivityModifiers, CDOTA_Unit_Hero_MonkeyKing::CalculateActivityModifiers (16 total)
UtlSymId_t *__fastcall CDOTA_BaseNPC::AddActivityModifier(
        UtlSymId_t *a1,
        CDOTA_BaseNPC *const this,
        const char *szName)
{
  UtlSymId_t *result; // rax
  __int64 m_Size; // rbx
  CUtlSymbol *m_pMemory; // rcx
  UtlSymId_t v7; // r8
  int v8; // edx
  int v9; // edx
  CUtlSymbol *v10; // rdx
  UtlSymId_t v12; // [rsp-8h] [rbp-28h]

  result = a1;
  if ( szName == 0 || *szName == 0 )
  {
    *a1 = -1;
    return result;
  }
  FindOrAddActivityModifier(szName);
  m_Size = this->m_ActivityModifiers.m_Size;
  result = a1;
  if ( m_Size <= 0 )
    goto LABEL_9;
  m_pMemory = this->m_ActivityModifiers.m_Memory.m_pMemory;
  v7 = v12;
  if ( m_pMemory->m_Id != v12 )
  {
    v8 = 0;
    while ( ++v8 != m_Size )
    {
      ++m_pMemory;
      if ( m_pMemory->m_Id == v12 )
      {
        if ( v8 < 0 )
          break;
        *a1 = v12;
        return result;
      }
    }
LABEL_9:
    v9 = this->m_ActivityModifiers.m_Size;
    if ( m_Size == this->m_ActivityModifiers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlSymbol,int>::Grow(&this->m_ActivityModifiers.m_Memory, 1);
      v9 = this->m_ActivityModifiers.m_Size;
      result = a1;
    }
    this->m_ActivityModifiers.m_Size = v9 + 1;
    v10 = &this->m_ActivityModifiers.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
      v10->m_Id = v12;
    v7 = v12;
  }
  *result = v7;
  return result;
}


// CDOTA_BaseNPC::CalculateActivityModifiers  (line 484, @0x0000000002481bf0, libserver.so)  // inlines: CAssetModifierIndex, CEntityHandle, CHandle, CModifierParams, Find, Get, GetAssetModifiers<CActivityModifier>, GetAssetModifiers<CDOTA_BaseNPC, CActivityModifier>, GetGeneratingEconItem, GetHealthPercent, GetInateAnimationModifier, GetModifier, GetString, IsEmpty, IsIdxValid, IsValidIndex, LeftChild, ModifierVariant_t, Purge, RemoveAll, String, ToCStr, operator char const*, operator[]
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABaseAbility::GetCursorTarget, CActivityModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::Get, CDOTA_BaseNPC::AddActivityModifier, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetFunctionValue, CDOTA_BaseNPC::FindModifierByName, CFmtStrN<256, false>::CFmtStrN, CDOTA_BaseNPC::IsExpired, strlen (14 total)
// callers: CDOTA_BaseNPC_Pet::CalculateActivityModifiers, CDOTA_Unit_Hero_Nevermore::CalculateActivityModifiers, CDOTA_Unit_Hero_Tiny::CalculateActivityModifiers, CDOTA_Unit_Hero_PhantomAssassin::CalculateActivityModifiers, CDOTA_Unit_Hero_Sniper::CalculateActivityModifiers, CDOTA_Unit_Hero_Viper::CalculateActivityModifiers, CDOTA_Unit_Hero_Abaddon::CalculateActivityModifiers, CDOTA_Unit_Hero_AbyssalUnderlord::CalculateActivityModifiers, CDOTA_Unit_Hero_ArcWarden::CalculateActivityModifiers, CDOTA_Unit_Hero_Oracle::CalculateActivityModifiers, CDOTA_Unit_Hero_MonkeyKing::CalculateActivityModifiers, CDOTA_Unit_Hero_TrollWarlord::CalculateActivityModifiers (15 total)
// strings: "FCVAR_NEVER_AS_STRING", "modifier_skeleton_king_reincarnation_scepter_active", "item_style_%d", "expired", "injured_aggressive", "injured"
void __fastcall CDOTA_BaseNPC::CalculateActivityModifiers(CDOTA_BaseNPC *const this, Activity iActivity)
{
  CDOTABaseAbility *CurrentActiveAbility; // rax
  unsigned __int16 v5; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r15
  __int64 v8; // r12
  int v9; // r14d
  const CAssetModifier *v10; // rax
  const char *v11; // rax
  int i; // r12d
  CDOTA_Buff *BuffByIndex; // rax
  const char *v14; // rdx
  bool v15; // r13
  CEconItemView *m_p; // rdi
  unsigned __int8 v17; // al
  char *m_pString; // rax
  const char *m_pAsString; // rdx
  char *m_pszString; // r12
  int v21; // eax
  const char *v22; // rax
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rcx
  bool v26; // zf
  UtlSymId_t v27[8]; // [rsp+10h] [rbp-200h] BYREF
  ModifierVariant_t returnvalue; // [rsp+20h] [rbp-1F0h] BYREF
  CModifierParams params; // [rsp+30h] [rbp-1E0h] BYREF
  CFmtStrN<256,false> v30; // [rsp+C0h] [rbp-150h] BYREF
  unsigned __int64 v31; // [rsp+1D8h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  if ( this->m_ActivityModifiers.m_Size != 0 )
  {
    v26 = (this->m_ActivityModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ActivityModifiers.m_Size = 0;
    if ( v26 )
    {
      if ( this->m_ActivityModifiers.m_Memory.m_pMemory != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        this->m_ActivityModifiers.m_Memory.m_pMemory = 0;
      }
      this->m_ActivityModifiers.m_Memory.m_nAllocationCount = 0;
    }
  }
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(this);
  if ( CurrentActiveAbility != 0 && CDOTABaseAbility::GetCursorTarget(CurrentActiveAbility) == this )
    CDOTA_BaseNPC::AddActivityModifier(v27, this, "self");
  params.ability.m_Index = CActivityModifier::StaticType();
  v5 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &params);
  if ( v5 < this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v5 <= this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v5 != 0xFFFF )
  {
    v6 = &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v5];
    if ( v5 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size > 0 )
      {
        v8 = 0;
        v9 = 0;
        do
        {
          v10 = elem->m_Memory.m_pMemory[v8];
          if ( v10 != 0 && (*(&v10->m_nPriority + 1) == iActivity || LOBYTE(v10[1]._vptr_CAssetModifier) != 0) )
          {
            v11 = CUtlString::Get(&v10->m_strModifier);
            CDOTA_BaseNPC::AddActivityModifier(v27, this, v11);
          }
          ++v9;
          ++v8;
        }
        while ( elem->m_Size > v9 );
      }
    }
  }
  for ( i = 0; i < this->m_ModifierManager.m_bufflist.m_Size; ++i )
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&this->m_ModifierManager, i, 0);
    if ( BuffByIndex != 0 && BuffByIndex->m_Functions[155].__pfn != 0 )
    {
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
      params.fOriginalDamage = 0.0;
      params.bTooltip = 0;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bCraniumBasherTested = 0;
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      params.nActivity = iActivity;
      returnvalue.m_eType = ModifierVariant_t::VariantType_t::Variant_Null;
      returnvalue.m_flVal = 0.0;
      returnvalue.m_szVal = 0;
      if ( CDOTA_Buff::GetFunctionValue(BuffByIndex, 155, &returnvalue, &params)
        && returnvalue.m_eType == ModifierVariant_t::VariantType_t::Variant_String )
      {
        CDOTA_BaseNPC::AddActivityModifier(v27, this, returnvalue.m_szVal);
      }
    }
  }
  if ( (dota_animation_force_modifier.m_nFlags & 0x1000) != 0 )
  {
    v14 = "FCVAR_NEVER_AS_STRING";
LABEL_26:
    CDOTA_BaseNPC::AddActivityModifier(v27, this, v14);
    goto LABEL_27;
  }
  m_pszString = dota_animation_force_modifier.m_pParent->m_Value.m_pszString;
  if ( m_pszString != 0 )
  {
    v21 = strlen(dota_animation_force_modifier.m_pParent->m_Value.m_pszString);
    v14 = m_pszString;
    if ( v21 != 0 )
      goto LABEL_26;
  }
LABEL_27:
  v15 = CDOTA_BaseNPC::FindModifierByName(this, "modifier_skeleton_king_reincarnation_scepter_active", 0) != 0;
  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 )
  {
    v23 = 100LL * CBaseEntity::GetHealth(this);
    v24 = (*(this->_vptr_IHandleEntity + 156))(this);
    v25 = 1;
    if ( v24 > 0 )
      v25 = v24;
    if ( (v23 / v25) <= 25 && !v15 )
      CDOTA_BaseNPC::AddActivityModifier(v27, this, "injured");
  }
  m_p = this->m_pGeneratingEconItem.m_p;
  if ( m_p != 0 )
  {
    v17 = (*(m_p->_vptr_IEconItemInterface + 16))(m_p);
    CFmtStrN<256,false>::CFmtStrN(&v30, "item_style_%d", v17);
    CDOTA_BaseNPC::AddActivityModifier(v27, this, v30.m_szBuf);
  }
  m_pString = this->m_strAnimationModifier.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
  {
    v22 = CUtlString::Get(&this->m_strAnimationModifier);
    CDOTA_BaseNPC::AddActivityModifier(v27, this, v22);
  }
  if ( this->m_bInInjuredAggressiveStance && !v15 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v27, this, "injured_aggressive");
    if ( !this->m_bInAggressiveStance )
      goto LABEL_36;
LABEL_46:
    CDOTA_BaseNPC::AddActivityModifier(v27, this, "aggressive");
    goto LABEL_36;
  }
  if ( this->m_bInAggressiveStance )
    goto LABEL_46;
LABEL_36:
  if ( this->m_iszAnimationModifier.u.m_Id != 0 )
  {
    m_pAsString = this->m_iszAnimationModifier.u.m_pAsString;
    if ( *m_pAsString != 0 )
      CDOTA_BaseNPC::AddActivityModifier(v27, this, m_pAsString);
  }
  if ( CDOTA_BaseNPC::IsExpired(this) )
    CDOTA_BaseNPC::AddActivityModifier(v27, this, "expired");
  this->m_bActivityModifiersDirty = 0;
}


// CDOTA_BaseNPC::ShouldWearableMatchAnimation  (line 588, @0x0000000002468ad0, libserver.so)
// calls: CBaseEntity::GetModel, CBaseAnimating::IsUsingClientSideAnimation
// callers: CDOTA_BaseNPC::UpdateWearablesAnimation, CDOTA_BaseNPC::OnPlaybackRateChanged
bool __fastcall CDOTA_BaseNPC::ShouldWearableMatchAnimation(
        const CDOTA_BaseNPC *const this,
        CDOTAWearableItem *pWearable)
{
  bool result; // al
  _QWORD v4[4]; // [rsp+0h] [rbp-20h] BYREF

  result = pWearable != 0
        && (CBaseEntity::GetModel(v4, pWearable), v4[0] != 0)
        && CBaseAnimating::IsUsingClientSideAnimation(pWearable);
  return result;
}


// CDOTA_BaseNPC::UpdateWearablesAnimation  (line 599, @0x0000000002468b10, libserver.so)  // inlines: Get, GetCycle, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlaybackRate, GetPrevCycle, GetSequence, GetWearable, IndexToIdentity, IsValid, LookupEntity, ResetSequence, SetPlaybackRate, V_isempty, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CBaseAnimating::GetSequenceName, CDOTA_BaseNPC::ShouldWearableMatchAnimation, CBaseAnimating::SelectWeightedSequenceFromModifiers, CBaseAnimating::IsValidSequence, CBaseAnimating::GetBaseAnimatingController, CDOTAWearableItem::ShouldMatchCycleToParent, CBaseAnimating::LookupSequence, CBaseAnimating::SetPrevCycle, CBaseAnimating::SetCycle
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC::UpdateWearablesAnimation(
        CDOTA_BaseNPC *const this,
        Activity iActivityOverride,
        HSequence iSequenceOverride)
{
  const char *SequenceName; // r14
  int m_Size; // eax
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  HSequence v8; // esi
  CBaseAnimatingController *v9; // rax
  CBaseAnimatingController *v10; // rax
  CDOTAWearableItem *m_pInstance; // rbx
  CHandle<CEconWearable> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  const CBaseAnimatingController *v18; // rax
  float v19; // xmm1_4
  const CBaseAnimatingController *v20; // rax
  float v21; // xmm1_4
  const CBaseAnimatingController *BaseAnimatingController; // rax
  unsigned int iActivityOverridea; // [rsp+8h] [rbp-38h]
  bool hSequence; // [rsp+Ch] [rbp-34h]
  HSequence hSequencea; // [rsp+Ch] [rbp-34h]
  float hSequenceb; // [rsp+Ch] [rbp-34h]

  iActivityOverridea = iActivityOverride;
  if ( iActivityOverride == -1 )
  {
    iActivityOverridea = this->m_NetworkActivity.m_Value;
    if ( iSequenceOverride.m_Data != -1 )
      goto LABEL_3;
  }
  else if ( iSequenceOverride.m_Data != -1 )
  {
    goto LABEL_3;
  }
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  iSequenceOverride.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
LABEL_3:
  SequenceName = CBaseAnimating::GetSequenceName(this, iSequenceOverride);
  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v6 = 0;
  hSequence = 0;
  v7 = 4LL * (m_Size - 1) + 4;
  do
  {
    m_pInstance = 0;
    v12 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v6 / 4];
    m_Index = v12->m_Index;
    if ( v12->m_Index + 2 > 1 )
    {
      v14 = v12->m_Index;
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
      if ( v15 != 0 )
      {
        v16 = &v15[v14 & 0x1FF];
        if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          m_pInstance = v16->m_pInstance;
      }
    }
    if ( CDOTA_BaseNPC::ShouldWearableMatchAnimation(this, m_pInstance) )
    {
      if ( SequenceName == 0
        || *SequenceName == 0
        || (v8.m_Data = CBaseAnimating::LookupSequence(m_pInstance, SequenceName).m_Data) == -1 )
      {
        if ( iActivityOverridea == -1
          || ((*(this->_vptr_IHandleEntity + 442))(this, iActivityOverridea),
              (v8.m_Data = CBaseAnimating::SelectWeightedSequenceFromModifiers(
                             m_pInstance,
                             iActivityOverridea,
                             this->m_ActivityModifiers.m_Memory.m_pMemory,
                             this->m_ActivityModifiers.m_Size).m_Data) == -1) )
        {
          (*(this->_vptr_IHandleEntity + 442))(this, 1500);
          v8.m_Data = CBaseAnimating::SelectWeightedSequenceFromModifiers(
                        m_pInstance,
                        1500,
                        this->m_ActivityModifiers.m_Memory.m_pMemory,
                        this->m_ActivityModifiers.m_Size).m_Data;
          if ( v8.m_Data == -1 )
            v8.m_Data = -!CBaseAnimating::IsValidSequence(m_pInstance, 0);
        }
      }
      hSequencea.m_Data = v8.m_Data;
      v9 = CBaseAnimating::GetBaseAnimatingController(m_pInstance);
      (*(v9->_vptr_CSkeletonAnimationController + 23))(v9, hSequencea.m_Data, 1);
      if ( CDOTAWearableItem::ShouldMatchCycleToParent(m_pInstance) )
      {
        v18 = CBaseAnimating::GetBaseAnimatingController(this);
        CBaseAnimating::SetPrevCycle(m_pInstance, COERCE_DOUBLE(LODWORD(v18->m_baseLayer.m_flPrevCycle.m_Value)), v19);
        v20 = CBaseAnimating::GetBaseAnimatingController(this);
        CBaseAnimating::SetCycle(m_pInstance, COERCE_DOUBLE(LODWORD(v20->m_baseLayer.m_flCycle.m_Value)), v21);
      }
      hSequenceb = CBaseAnimating::GetBaseAnimatingController(this)->m_flPlaybackRate.m_Value.m_Value;
      v10 = CBaseAnimating::GetBaseAnimatingController(m_pInstance);
      (*(v10->_vptr_CSkeletonAnimationController + 22))(v10, hSequenceb);
      hSequence = 1;
    }
    v6 += 4LL;
  }
  while ( v6 != v7 );
  return hSequence;
}


// CDOTA_BaseNPC::OnPlaybackRateChanged  (line 700, @0x0000000002468da0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlaybackRate, GetWearable, IndexToIdentity, IsValid, LookupEntity, SetPlaybackRate, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CBaseAnimating::GetBaseAnimatingController, CDOTA_BaseNPC::ShouldWearableMatchAnimation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::OnPlaybackRateChanged(CDOTA_BaseNPC *const this)
{
  __m128i m_Value_low; // xmm1
  int m_Size; // eax
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  CDOTAWearableItem *m_pInstance; // r13
  CHandle<CEconWearable> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CBaseAnimatingController *BaseAnimatingController; // rax

  m_Value_low = LODWORD(CBaseAnimating::GetBaseAnimatingController(this)->m_flPlaybackRate.m_Value.m_Value);
  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v4 = _mm_cvtsi128_si32(m_Value_low);
    v5 = 0;
    v6 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        m_pInstance = 0;
        v8 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v5 / 4];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
              m_pInstance = v12->m_pInstance;
          }
        }
        if ( CDOTA_BaseNPC::ShouldWearableMatchAnimation(this, m_pInstance) )
          break;
        v5 += 4LL;
        if ( v5 == v6 )
          return;
      }
      v5 += 4LL;
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(m_pInstance);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(
        BaseAnimatingController,
        *_mm_cvtsi32_si128(v4).m128i_i64);
    }
    while ( v5 != v6 );
  }
}


// CDOTA_BaseNPC::SetHealthBarOffsetOverride  (line 717, @0x0000000002468ea0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: CEntityInstance::IsAuthoritative
// callers: CDOTA_BaseNPC::ApplyWearableModifiers
void __fastcall CDOTA_BaseNPC::SetHealthBarOffsetOverride(CDOTA_BaseNPC *const this, int nOffset)
{
  if ( CEntityInstance::IsAuthoritative(this) && this->m_nHealthBarOffsetOverride.m_Value != nOffset )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nHealthBarOffsetOverride.m_Value = nOffset;
  }
}


// CDOTA_BaseNPC::ApplyWearableModifiers  (line 726, @0x00000000024821a0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, Element, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, Get, GetAnimationModifier, GetEntityIdentity, GetEntityModel, GetEntryIndex, GetGeneratingEconItem, GetInstance, GetModifier, GetTypedRef, GetUnitName, GetWearable, IndexToIdentity, IsCustomizableCourier, IsValid, LookupEntity, SetOriginalModel, String, ToCStr, operator CEconWearable*, operator CEntityInstance*, operator const CEconItemAttributeDefinition*, operator=, operator[]
// calls: CEntityInstance::IsAuthoritative, FindAssetModifier<CDOTA_BaseNPC, CEntityModelModifier>, CUtlString::Get, MakeEntitySystemString, CDOTA_BaseNPC::ManageModelChanges, FindAssetModifier<CDOTA_BaseNPC, CSkinChangeModifier>, CBaseEntity::GetModelName, FindAssetModifier<CDOTA_BaseNPC, CEntityScaleModifier>, FindAssetModifier<CDOTA_BaseNPC, CEntityHealthBarModifier>, CDOTA_BaseNPC::SetHealthBarOffsetOverride, CEconItemView::GetSkin, CBaseAnimating::SetSkin (23 total)
// callers: CDOTA_BaseNPC::OnAssetModifiersUpdated
// strings: "skin index", "use animation modifier"
// globals: `guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex, CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex, `guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier, CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier, CEntityHandle::gm_pEntityList, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
void __fastcall CDOTA_BaseNPC::ApplyWearableModifiers(CDOTA_BaseNPC *const this)
{
  const char *m_pAsString; // r12
  const CEntityModelModifier *Asset; // rax
  const char *v4; // rax
  const CSkinChangeModifier *v5; // r13
  const CEntityScaleModifier *v6; // rax
  const CEntityHealthBarModifier *v7; // rax
  CEconItemView *m_p; // r12
  int Skin; // eax
  customizable_courier_t *m_pCustomizableCourier; // rax
  CUtlString *p_m_strAnimationModifier; // r15
  uint32 m_unResetCount; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSchema *v15; // rax
  uint32 v16; // ebx
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v18; // r13
  CEconItemSchema *v19; // rax
  __int64 v20; // rbx
  CEconItemAssetInfo *AssetInfo; // rax
  const char *v22; // rsi
  CUtlVector<CEconSchemaSymbol,CUtlMemory<CEconSchemaSymbol,int> > *m_pVecAnimationModifiers; // rax
  const char **v24; // rax
  int m_Size; // eax
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  CHandle<CEconWearable> *v28; // rdx
  uint32 m_Index; // eax
  __int16 v30; // cx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  uint32 iCourierSkin; // [rsp+8h] [rbp-58h] BYREF
  uint32 iUseAnimationModifier; // [rsp+Ch] [rbp-54h] BYREF
  CIterateAllAttributes *v35; // [rsp+10h] [rbp-50h] BYREF
  const CEconItemAttributeDefinition *v36; // [rsp+18h] [rbp-48h]
  uint32 *p_iCourierSkin; // [rsp+20h] [rbp-40h]
  char v38; // [rsp+28h] [rbp-38h]

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
    else
      m_pAsString = "";
    Asset = FindAssetModifier<CDOTA_BaseNPC,CEntityModelModifier>(this, m_pAsString);
    if ( Asset != 0 )
    {
      v4 = CUtlString::Get(&Asset->m_strModifier);
      MakeEntitySystemString(v4);
      this->m_iszOriginalModel.u.m_Id = v35;
      CDOTA_BaseNPC::ManageModelChanges(this);
    }
    v5 = FindAssetModifier<CDOTA_BaseNPC,CSkinChangeModifier>(this, m_pAsString);
    if ( v5 != 0 )
    {
      CBaseEntity::GetModelName(&v35, this);
      if ( v35 == this->m_iszOriginalModel.u.m_Id )
        CBaseAnimating::SetSkin(this, v5->m_nSkin);
    }
    v6 = FindAssetModifier<CDOTA_BaseNPC,CEntityScaleModifier>(this, m_pAsString);
    if ( v6 != 0 )
      (*(this->_vptr_IHandleEntity + 222))(this, v6->m_flScaleSize);
    v7 = FindAssetModifier<CDOTA_BaseNPC,CEntityHealthBarModifier>(this, m_pAsString);
    if ( v7 != 0 )
      CDOTA_BaseNPC::SetHealthBarOffsetOverride(this, v7->m_nHealthBarOffset);
    m_p = this->m_pGeneratingEconItem.m_p;
    if ( m_p != 0 )
    {
      Skin = CEconItemView::GetSkin(this->m_pGeneratingEconItem.m_p);
      CBaseAnimating::SetSkin(this, Skin);
      m_pCustomizableCourier = CEconItemView::GetStaticData(m_p)->m_pCustomizableCourier;
      if ( m_pCustomizableCourier != 0 && m_pCustomizableCourier->m_symCourier.u.m_Id != 0 )
      {
        p_m_strAnimationModifier = &this->m_strAnimationModifier;
        CBaseAnimating::SetSkin(this, 0);
        CUtlString::operator=(&this->m_strAnimationModifier, "");
        if ( `guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex == 0
          && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex) != 0 )
        {
          CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
            &CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex,
            "skin index");
          __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex);
          __cxa_atexit(
            CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
            &CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex,
            &_dso_handle);
        }
        if ( CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex.m_szName != 0 )
        {
          m_unResetCount = GEconItemSchema()->m_unResetCount;
          m_pRef = CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex.m_pRef;
          if ( m_unResetCount != CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex.m_unSchemaGeneration )
          {
            m_szName = CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex.m_szName;
            v15 = GEconItemSchema();
            m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v15, m_szName);
            CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex.m_unSchemaGeneration = m_unResetCount;
            CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_SkinIndex.m_pRef = m_pRef;
          }
          if ( m_pRef != 0 )
          {
            v36 = m_pRef;
            v35 = &wrapper;
            p_iCourierSkin = &iCourierSkin;
            v38 = 0;
            (*(m_p->_vptr_IEconItemInterface + 28))(m_p, &v35);
            if ( v38 != 0 )
            {
              CBaseAnimating::SetSkin(this, iCourierSkin);
              m_Size = this->m_hMyWearables.m_Vector.m_Size;
              if ( m_Size > 0 )
              {
                v26 = 0;
                v27 = 4LL * (m_Size - 1) + 4;
                do
                {
                  v28 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v26 / 4];
                  m_Index = v28->m_Index;
                  if ( v28->m_Index + 2 > 1 )
                  {
                    v30 = v28->m_Index;
                    v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
                    if ( v31 != 0 )
                    {
                      v32 = &v31[v30 & 0x1FF];
                      if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index && v32->m_pInstance != 0 )
                        CBaseAnimating::SetSkin(v32->m_pInstance, iCourierSkin);
                    }
                  }
                  v26 += 4LL;
                }
                while ( v26 != v27 );
              }
            }
          }
        }
        if ( `guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier == 0
          && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier) != 0 )
        {
          CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
            &CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier,
            "use animation modifier");
          __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier);
          __cxa_atexit(
            CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
            &CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier,
            &_dso_handle);
        }
        if ( CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier.m_szName != 0 )
        {
          v16 = GEconItemSchema()->m_unResetCount;
          AttributeDefinitionByName = CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier.m_pRef;
          if ( v16 != CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier.m_unSchemaGeneration )
          {
            v18 = CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier.m_szName;
            v19 = GEconItemSchema();
            AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v19, v18);
            CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier.m_unSchemaGeneration = v16;
            CDOTA_BaseNPC::ApplyWearableModifiers(void)::pAttr_UseAnimationModifier.m_pRef = AttributeDefinitionByName;
          }
          if ( AttributeDefinitionByName != 0 )
          {
            v36 = AttributeDefinitionByName;
            v35 = &wrapper;
            p_iCourierSkin = &iUseAnimationModifier;
            v38 = 0;
            (*(m_p->_vptr_IEconItemInterface + 28))(m_p, &v35);
            if ( v38 != 0 )
            {
              v20 = iUseAnimationModifier;
              AssetInfo = CEconItemView::GetAssetInfo(m_p);
              v22 = 0;
              m_pVecAnimationModifiers = AssetInfo->m_pVecAnimationModifiers;
              if ( m_pVecAnimationModifiers != 0 && v20 >= 0 && v20 < m_pVecAnimationModifiers->m_Size )
              {
                v22 = "";
                v24 = &m_pVecAnimationModifiers->m_Memory.m_pMemory[v20];
                if ( *v24 != 0 )
                  v22 = *v24;
              }
              CUtlString::operator=(p_m_strAnimationModifier, v22);
            }
          }
        }
      }
    }
  }
}


// CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy  (line 814, @0x0000000002468ef0, libserver.so)
// calls: CBaseAnimating::SelectWeightedSequenceFromModifiers
// callers: CDOTAAnimState::ResetSlotActivity, CDOTAAnimState::AddToGestureSlot, CDOTAAnimState::OnNewModel, CDOTABody::StartAnimation, CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorIdle::OnAnimationActivityComplete, CDOTABehaviorTutorialIdle::OnAnimationActivityComplete, CDOTABehaviorTutorialVictory::OnStart, CDOTA_BaseNPC::TranslateActivity, CDOTA_Modifier_Slardar_Bash::GetModifierPreAttack, CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPreAttack, CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack (13 total)
HSequence __fastcall CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(CDOTA_BaseNPC *const this, Activity iActivity)
{
  int m_Size; // ecx
  CUtlSymbol *m_pMemory; // rdx

  m_Size = this->m_ActivityModifiers.m_Size;
  m_pMemory = this->m_ActivityModifiers.m_Memory.m_pMemory;
  this->m_bActivityModifiersDirty = 0;
  return CBaseAnimating::SelectWeightedSequenceFromModifiers(this, iActivity, m_pMemory, m_Size);
}


// CDOTA_BaseNPC::GetBaseAttackTime  (line 823, @0x0000000002468f10, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// callers: CDOTA_Bot_Hero_Clinkz::GetAttacksPerSecondWithBonus, CDOTA_BaseNPC_Creature::CreatureLevelUp
float __fastcall CDOTA_BaseNPC::GetBaseAttackTime(CDOTA_BaseNPC *const this)
{
  __int64 v2; // rax
  float result; // xmm0_4

  v2 = this->m_ModifierManager.m_buffsForModifiers[26];
  if ( v2 == 0xFF )
    return this->m_flBaseAttackTime;
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size <= 0 )
    return this->m_flBaseAttackTime;
  result = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT,
             &CModifierParams::s_Default);
  if ( result <= 0.0 )
    return this->m_flBaseAttackTime;
  return result;
}


// CDOTA_BaseNPC::GetSecondsPerAttack  (line 835, @0x0000000002469290, libserver.so)
// calls: CDOTA_BaseNPC::GetAttacksPerSecond
// callers: CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_Bot_Script::GetSecondsPerAttack, CDOTA_Bot_Script::GetEstimatedDamageToTarget, CDOTA_TeamCommander::DoCreepHealthAnalysis, CDOTABehaviorAttackPhase::OnStart, CDOTA_BaseNPC::AttackReady, CDOTA_BaseNPC::PerformAttack, CDOTA_Ability_Riki_Permanent_Invisibility::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_Clinkz_SearingArrows::GetAbilityDamageToTargetOverInterval
float __fastcall CDOTA_BaseNPC::GetSecondsPerAttack(CDOTA_BaseNPC *const this)
{
  return 1.0 / CDOTA_BaseNPC::GetAttacksPerSecond(this);
}


// CDOTA_BaseNPC::GetHasteFactor  (line 842, @0x00000000024692b0, libserver.so)  // inlines: GetBaseAttackTime, GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::GetAttacksPerSecond
// callers: CDOTA_Ability_ControllerTest_MeleeAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetCastPoint, CDOTA_Ability_ControllerTest_MeleeAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenOverheadAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenSweepingAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenThrustingAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SlarkSpinAttack::OnAbilityPhaseStart, CDOTABody::GetAnimationSpeed, CDOTABehaviorAttackPhase::OnStart (16 total)
float __fastcall CDOTA_BaseNPC::GetHasteFactor(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  float m_flBaseAttackTime; // xmm2_4

  p_m_ModifierManager = &this->m_ModifierManager;
  v3 = this->m_ModifierManager.m_buffsForModifiers[26];
  if ( (v3 == 0xFF
     || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0
     || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
          p_m_ModifierManager,
          modifierfunction::MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT,
          &CModifierParams::s_Default) <= 0.0)
    && this->m_flBaseAttackTime == 0.0 )
  {
    return 1.0;
  }
  v4 = this->m_ModifierManager.m_buffsForModifiers[26];
  if ( v4 == 0xFF
    || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size <= 0
    || (m_flBaseAttackTime = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                               p_m_ModifierManager,
                               modifierfunction::MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT,
                               &CModifierParams::s_Default)) <= 0.0 )
  {
    m_flBaseAttackTime = this->m_flBaseAttackTime;
  }
  return CDOTA_BaseNPC::GetAttacksPerSecond(this) / (1.0 / m_flBaseAttackTime);
}


// CDOTA_BaseNPC::GetMinHaste  (line 865, @0x0000000002468f70, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetMinimumAttackSpeed
// calls: CDOTAGamerules::GetGameModeEntity
// callers: CDOTA_BaseNPC::GetAttacksPerSecond
float __fastcall CDOTA_BaseNPC::GetMinHaste(CDOTA_BaseNPC *const this)
{
  if ( g_pGameRules != 0 && CDOTAGamerules::GetGameModeEntity(g_pGameRules) != 0 )
    return CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_flMinimumAttackSpeed.m_Value;
  else
    return dota_min_haste.m_pParent->m_Value.m_fValue;
}


// CDOTA_BaseNPC::GetMaxHaste  (line 875, @0x0000000002468fd0, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetMaximumAttackSpeed
// calls: CDOTAGamerules::GetGameModeEntity
// callers: CDOTA_BaseNPC::GetAttacksPerSecond
float __fastcall CDOTA_BaseNPC::GetMaxHaste(CDOTA_BaseNPC *const this)
{
  if ( g_pGameRules != 0 && CDOTAGamerules::GetGameModeEntity(g_pGameRules) != 0 )
    return CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_flMaximumAttackSpeed.m_Value;
  else
    return dota_max_haste.m_pParent->m_Value.m_fValue;
}


// CDOTA_BaseNPC::GetIncreasedAttackSpeed  (line 885, @0x0000000002469030, libserver.so)  // inlines: GetModifier_Constant_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: CDOTA_BaseNPC_Hero::GetIncreasedAttackSpeed
float __fastcall CDOTA_BaseNPC::GetIncreasedAttackSpeed(CDOTA_BaseNPC *const this)
{
  __int64 v1; // rax
  float result; // xmm0_4

  v1 = this->m_ModifierManager.m_buffsForModifiers[24];
  result = 0.0;
  if ( v1 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v1].m_Size > 0 )
    return CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_ATTACKSPEED_BONUS_CONSTANT,
             &CModifierParams::s_Default)
         / 100.0;
  return result;
}


// CDOTA_BaseNPC::GetAttackSpeed  (line 894, @0x0000000002469080, libserver.so)  // inlines: GetModifier_Constant_Lowest, IsListeningToEvent, Max<float>
// calls: CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal, Warning
// callers: CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_Bot_Script::GetAttackSpeed, CDOTA_Unit_Hero_Nevermore::CalculateActivityModifiers, CDOTA_Ability_Windrunner_FocusFire::GetAbilityDamageToTargetOverInterval, CDOTA_Unit_Hero_PhantomAssassin::CalculateActivityModifiers, CDOTA_Unit_Hero_Sniper::CalculateActivityModifiers, CDOTA_Ability_PhantomAssassin_PhantomStrike::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_Ursa_Overpower::GetAbilityDamageToTargetOverInterval, CDOTA_Unit_Hero_Viper::CalculateActivityModifiers, CDOTA_Ability_LoneDruid_Rabid::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_NightStalker_Darkness::GetAbilityDamageToTargetOverInterval, CDOTA_Unit_Hero_AbyssalUnderlord::CalculateActivityModifiers (20 total)
// strings: "Attack speed is <= 0 in GetAttackSpeed()! Check for uninitialized modifier values or extr
float __fastcall CDOTA_BaseNPC::GetAttackSpeed(CDOTA_BaseNPC *const this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  __int64 v4; // rax
  float result; // xmm0_4
  float flAttackSpeed; // [rsp+Ch] [rbp-14h]
  float flAttackSpeeda; // [rsp+Ch] [rbp-14h]

  v2 = (*(this->_vptr_IHandleEntity + 435))(this);
  v3 = 0.19999999;
  if ( v2 >= -0.80000001 )
    v3 = v2 + 1.0;
  v4 = this->m_ModifierManager.m_buffsForModifiers[22];
  if ( v4 == 0xFF
    || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size <= 0
    || (flAttackSpeed = v3,
        result = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                   &this->m_ModifierManager,
                   modifierfunction::MODIFIER_PROPERTY_ATTACKSPEED_BASE_OVERRIDE,
                   &CModifierParams::s_Default),
        v3 = flAttackSpeed,
        result <= 0.0) )
  {
    if ( v3 <= 0.0 )
    {
      flAttackSpeeda = v3;
      Warning(
        "Attack speed is <= 0 in GetAttackSpeed()! Check for uninitialized modifier values or extreme modifier combinations.\n");
      return flAttackSpeeda;
    }
    return v3;
  }
  return result;
}


// CDOTA_BaseNPC::GetAttacksPerSecond  (line 912, @0x0000000002469150, libserver.so)  // inlines: GetBaseAttackTime, GetModifier_Constant_First, GetModifier_Constant_Lowest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetMaxHaste, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::GetMinHaste
// callers: CDOTA_BaseNPC::GetSecondsPerAttack, CDOTA_BaseNPC::GetHasteFactor, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::GetGankingEstimatedDamage, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_TeamCommander::UpdateDefendLaneDesires, CDOTA_TeamCommander::UpdatePushLaneDesires, CDOTA_BaseNPC::DrawDebugTextOverlays, CDOTA_Ability_PhantomLancer_SpiritLance::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_Windrunner_FocusFire::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_PhantomAssassin_PhantomStrike::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_Slardar_Bash::GetAbilityDamageToTargetOverInterval (33 total)
float __fastcall CDOTA_BaseNPC::GetAttacksPerSecond(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v3; // rax
  float Modifier_Constant_Lowest_Internal; // xmm1_4
  float MaxHaste; // xmm2_4
  __int64 v7; // rax
  float m_flBaseAttackTime; // xmm0_4
  float AttackSpeed; // xmm0_4
  float fClampedAttackSpeed; // [rsp+Ch] [rbp-14h]
  float fClampedAttackSpeeda; // [rsp+Ch] [rbp-14h]
  float fClampedAttackSpeedb; // [rsp+Ch] [rbp-14h]

  p_m_ModifierManager = &this->m_ModifierManager;
  v3 = this->m_ModifierManager.m_buffsForModifiers[23];
  if ( v3 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0 )
  {
    Modifier_Constant_Lowest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                                          &this->m_ModifierManager,
                                          modifierfunction::MODIFIER_PROPERTY_FIXED_ATTACK_RATE,
                                          &CModifierParams::s_Default);
    if ( Modifier_Constant_Lowest_Internal > 0.0 )
      return 1.0 / Modifier_Constant_Lowest_Internal;
  }
  fClampedAttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(this);
  if ( fClampedAttackSpeed <= CDOTA_BaseNPC::GetMaxHaste(this) )
  {
    fClampedAttackSpeedb = CDOTA_BaseNPC::GetAttackSpeed(this);
    if ( CDOTA_BaseNPC::GetMinHaste(this) <= fClampedAttackSpeedb )
      AttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(this);
    else
      AttackSpeed = CDOTA_BaseNPC::GetMinHaste(this);
    MaxHaste = AttackSpeed;
  }
  else
  {
    MaxHaste = CDOTA_BaseNPC::GetMaxHaste(this);
  }
  v7 = this->m_ModifierManager.m_buffsForModifiers[26];
  if ( v7 == 0xFF
    || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size <= 0
    || (fClampedAttackSpeeda = MaxHaste,
        m_flBaseAttackTime = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                               p_m_ModifierManager,
                               modifierfunction::MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT,
                               &CModifierParams::s_Default),
        MaxHaste = fClampedAttackSpeeda,
        m_flBaseAttackTime <= 0.0) )
  {
    m_flBaseAttackTime = this->m_flBaseAttackTime;
  }
  return MaxHaste / m_flBaseAttackTime;
}


// CDOTA_BaseNPC::GetMoveSpeedModifier  (line 924, @0x00000000024693c0, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetModifier_Constant_Lowest, GetModifier_Percentage_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal
// callers: CDOTA_BaseNPC::GetIdealSpeed
float __fastcall CDOTA_BaseNPC::GetMoveSpeedModifier(CDOTA_BaseNPC *const this, float a2, const float flBaseSpeed)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i v7; // xmm1
  float v8; // r13d
  __int64 v9; // rax
  float v10; // r14d
  __m128i v11; // xmm0
  __int64 v12; // rax
  float v13; // r15d
  __m128i v14; // xmm0
  __int64 v15; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v17; // rax
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v19; // rax
  float v20; // xmm3_4
  float Modifier_Constant_Highest_Internal; // xmm0_4
  __int64 v22; // rax
  float v23; // xmm4_4
  float v24; // xmm0_4
  __int64 v25; // rax
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  bool v29; // zf
  __m128i v31; // xmm0
  __int32 v32; // [rsp+4h] [rbp-4Ch]
  __int32 v33; // [rsp+8h] [rbp-48h]
  float v34; // [rsp+8h] [rbp-48h]
  __int32 flPercentSpeedUnique; // [rsp+Ch] [rbp-44h]
  __int32 flPercentSpeedUniquea; // [rsp+Ch] [rbp-44h]
  float flPercentSpeedUniqueb; // [rsp+Ch] [rbp-44h]
  float flPercentSpeedUniquec; // [rsp+Ch] [rbp-44h]
  __int32 v40; // [rsp+14h] [rbp-3Ch]
  float v41; // [rsp+14h] [rbp-3Ch]
  unsigned __int32 v42; // [rsp+18h] [rbp-38h]
  __int32 v43; // [rsp+18h] [rbp-38h]
  float v44; // [rsp+18h] [rbp-38h]
  float flMaxSpeed; // [rsp+1Ch] [rbp-34h]

  p_m_ModifierManager = &this->m_ModifierManager;
  v5 = this->m_ModifierManager.m_buffsForModifiers[21];
  if ( v5 == 0xFF
    || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size <= 0
    || (flMaxSpeed = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                       p_m_ModifierManager,
                       modifierfunction::MODIFIER_PROPERTY_MOVESPEED_MAX,
                       &CModifierParams::s_Default)) < 550.0 )
  {
    v6 = this->m_ModifierManager.m_buffsForModifiers[20];
    flMaxSpeed = 550.0;
    if ( v6 == 0xFF )
      goto LABEL_5;
  }
  else
  {
    v6 = this->m_ModifierManager.m_buffsForModifiers[20];
    if ( v6 == 0xFF )
      goto LABEL_5;
  }
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
  {
    *v31.m128i_i32 = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                       p_m_ModifierManager,
                       modifierfunction::MODIFIER_PROPERTY_MOVESPEED_LIMIT,
                       &CModifierParams::s_Default);
    v7 = 0;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v31));
    goto LABEL_6;
  }
LABEL_5:
  v7 = 0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
LABEL_6:
  v9 = this->m_ModifierManager.m_buffsForModifiers[18];
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  if ( v9 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size > 0 )
  {
    v42 = v7.m128i_i32[0];
    *v11.m128i_i32 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                       p_m_ModifierManager,
                       modifierfunction::MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE,
                       &CModifierParams::s_Default);
    v7 = v42;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  }
  v12 = this->m_ModifierManager.m_buffsForModifiers[19];
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  if ( v12 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v12].m_Size > 0 )
  {
    v43 = v7.m128i_i32[0];
    *v14.m128i_i32 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                       p_m_ModifierManager,
                       modifierfunction::MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE_MIN,
                       &CModifierParams::s_Default);
    v7.m128i_i32[0] = v43;
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  }
  v15 = this->m_ModifierManager.m_buffsForModifiers[11];
  v44 = *v7.m128i_i32;
  if ( v15 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v15].m_Size > 0 )
  {
    v40 = v7.m128i_i32[0];
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT,
                                            &CModifierParams::s_Default);
    v7.m128i_i32[0] = v40;
    v44 = Modifier_Constant_Additive_Internal;
  }
  v17 = this->m_ModifierManager.m_buffsForModifiers[13];
  v41 = 1.0;
  if ( v17 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
  {
    flPercentSpeedUnique = v7.m128i_i32[0];
    Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                              p_m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE,
                                              &CModifierParams::s_Default);
    v7.m128i_i32[0] = flPercentSpeedUnique;
    v41 = Modifier_Percentage_Additive_Internal;
  }
  v19 = this->m_ModifierManager.m_buffsForModifiers[14];
  v20 = *v7.m128i_i32;
  if ( v19 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v19].m_Size > 0 )
  {
    flPercentSpeedUniquea = v7.m128i_i32[0];
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           p_m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE,
                                           &CModifierParams::s_Default);
    v7.m128i_i32[0] = flPercentSpeedUniquea;
    v20 = Modifier_Constant_Highest_Internal / 100.0;
  }
  v22 = this->m_ModifierManager.m_buffsForModifiers[16];
  v23 = *v7.m128i_i32;
  if ( v22 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v22].m_Size > 0 )
  {
    v33 = v7.m128i_i32[0];
    flPercentSpeedUniqueb = v20;
    v24 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    v7.m128i_i32[0] = v33;
    v20 = flPercentSpeedUniqueb;
    v23 = v24;
  }
  v25 = this->m_ModifierManager.m_buffsForModifiers[17];
  v26 = *v7.m128i_i32;
  if ( v25 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v25].m_Size > 0 )
  {
    v32 = v7.m128i_i32[0];
    v34 = v23;
    flPercentSpeedUniquec = v20;
    v26 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE_2,
            &CModifierParams::s_Default);
    v7.m128i_i32[0] = v32;
    v23 = v34;
    v20 = flPercentSpeedUniquec;
  }
  v27 = (((a2 + v44) + v23) + v26) * (v20 + v41);
  if ( v27 > flMaxSpeed )
  {
    v28 = flMaxSpeed;
    if ( v10 > *v7.m128i_i32 )
    {
LABEL_29:
      if ( flMaxSpeed <= 550.0 )
      {
        if ( v13 <= *v7.m128i_i32 )
        {
          v28 = fminf(v10, flMaxSpeed);
          goto LABEL_32;
        }
        goto LABEL_31;
      }
      goto LABEL_40;
    }
  }
  else
  {
    v28 = fmaxf(100.0, v27);
    if ( v10 > *v7.m128i_i32 )
      goto LABEL_29;
  }
  if ( v13 <= *v7.m128i_i32 )
    goto LABEL_32;
  if ( flMaxSpeed <= 550.0 )
  {
LABEL_31:
    v28 = fmaxf(v13, v28);
LABEL_32:
    v29 = v8 == *v7.m128i_i32;
    goto LABEL_41;
  }
LABEL_40:
  v29 = v8 == *v7.m128i_i32;
  v28 = fmaxf(v10, v28);
LABEL_41:
  if ( v29 )
    return v28;
  else
    return fminf(v8, v28);
}


// CDOTA_BaseNPC::GetIdealSpeed  (line 968, @0x00000000024697e0, libserver.so)
// calls: CDOTA_BaseNPC::GetMoveSpeedModifier
float __fastcall CDOTA_BaseNPC::GetIdealSpeed(CDOTA_BaseNPC *const this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4

  v2 = (*(this->_vptr_IHandleEntity + 433))(this);
  return CDOTA_BaseNPC::GetMoveSpeedModifier(this, v2, v3);
}


// CDOTA_BaseNPC::GetBaseMoveSpeed  (line 973, @0x0000000002469810, libserver.so)  // inlines: GetModifier_Constant_Lowest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal
// callers: CDOTA_Unit_Courier::GetBaseMoveSpeed
float __fastcall CDOTA_BaseNPC::GetBaseMoveSpeed(CDOTA_BaseNPC *const this)
{
  __int64 v2; // rax
  float result; // xmm0_4

  v2 = this->m_ModifierManager.m_buffsForModifiers[12];
  if ( v2 == 0xFF )
    return this->m_iMoveSpeed.m_Value;
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size <= 0 )
    return this->m_iMoveSpeed.m_Value;
  result = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BASE_OVERRIDE,
             &CModifierParams::s_Default);
  if ( result <= 0.0 )
    return this->m_iMoveSpeed.m_Value;
  return result;
}


// CDOTA_BaseNPC::GetBaseMagicalResistanceValue  (line 983, @0x0000000002469870, libserver.so)
float __fastcall CDOTA_BaseNPC::GetBaseMagicalResistanceValue(CDOTA_BaseNPC *const this)
{
  return this->m_flMagicalResistanceValue.m_Value;
}


// CDOTA_BaseNPC::GetMagicalArmorValue  (line 988, @0x0000000002469880, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Constant_Lowest, GetModifier_Percentage_Multiplicative, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal
float __fastcall CDOTA_BaseNPC::GetMagicalArmorValue(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __m128i v3; // xmm0
  __int64 v4; // rax
  float v5; // r14d
  float v6; // xmm0_4
  __int64 v7; // rax
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  __int64 v11; // rax
  float v12; // xmm4_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float Modifier_Constant_Lowest_Internal; // xmm0_4
  float fResistance_Decrepify_Unique; // [rsp+8h] [rbp-28h]
  float fResistance_Bonus; // [rsp+Ch] [rbp-24h]
  float fResistance_Bonusa; // [rsp+Ch] [rbp-24h]

  p_m_ModifierManager = &this->m_ModifierManager;
  *v3.m128i_i64 = (*(this->_vptr_IHandleEntity + 425))(this);
  v4 = this->m_ModifierManager.m_buffsForModifiers[49];
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( v4 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size <= 0 )
  {
    v7 = this->m_ModifierManager.m_buffsForModifiers[50];
    v8 = 1.0;
    v9 = 1.0;
    v10 = 1.0;
    if ( v7 == 0xFF )
      goto LABEL_4;
  }
  else
  {
    v6 = CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal(
           p_m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS,
           &CModifierParams::s_Default);
    v7 = this->m_ModifierManager.m_buffsForModifiers[50];
    v8 = 1.0;
    v9 = 2.0 - v6;
    v10 = 1.0;
    if ( v7 == 0xFF )
      goto LABEL_4;
  }
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
  {
    fResistance_Bonusa = v9;
    Modifier_Constant_Lowest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                                          p_m_ModifierManager,
                                          modifierfunction::MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DECREPIFY_UNIQUE,
                                          &CModifierParams::s_Default);
    v8 = 1.0;
    v9 = fResistance_Bonusa;
    v10 = 1.0 - (Modifier_Constant_Lowest_Internal / 100.0);
  }
LABEL_4:
  v11 = this->m_ModifierManager.m_buffsForModifiers[48];
  v12 = 0.0;
  if ( v11 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
  {
    fResistance_Decrepify_Unique = v10;
    fResistance_Bonus = v9;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DIRECT_MODIFICATION,
                                            &CModifierParams::s_Default);
    v8 = 1.0;
    v10 = fResistance_Decrepify_Unique;
    v9 = fResistance_Bonus;
    v12 = 1.0 - ((Modifier_Constant_Additive_Internal + 100.0) / 100.0);
  }
  if ( this->m_bIsIllusion.m_Value )
    v9 = 1.0;
  if ( (this->m_nUnitState64.m_Value & 0x200) == 0 )
    return 1.0 - ((((1.0 - (v5 / 100.0)) + v12) * v9) * v10);
  return v8;
}


// CDOTA_BaseNPC::GetArmorForDamageType  (line 1006, @0x0000000002469a50, libserver.so)
// callers: CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTA_Bot::GetGankingEstimatedDamage, RoshanTankSort, CDOTA_Bot_Script::GetArmor, CDOTA_Bot_Script::GetMagicResist, CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::GetCurrentUsageDesire
float __fastcall CDOTA_BaseNPC::GetArmorForDamageType(CDOTA_BaseNPC *const this, int iDamageType)
{
  if ( iDamageType == 1 )
    return (*(this->_vptr_IHandleEntity + 418))(this);
  if ( iDamageType == 2 )
    return (*(this->_vptr_IHandleEntity + 419))(this);
  return 0.0;
}


// CDOTA_BaseNPC::GetArmorReductionForDamageType  (line 1016, @0x0000000002469a90, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorForDamageType
// callers: CDOTA_Modifier_Tutorial_LastHitHelper::GetDamageRatio, CDOTA_Bot::GetTankRating, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_Bot::IsAboutToDie, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_Bot_Script::GetActualDamage, CDOTA_TeamCommander::UpdateDefendLaneDesires, CDOTA_TeamCommander::UpdatePushLaneDesires, CDOTA_Bot_Script::GetEstimatedDamageToTarget, CDOTA_TeamCommander::DoCreepHealthAnalysis, CDOTA_Bot_AbilityUsage_Dagon::GetCurrentUsageDesire (242 total)
float __fastcall CDOTA_BaseNPC::GetArmorReductionForDamageType(CDOTA_BaseNPC *const this, int iDamageType)
{
  float result; // xmm0_4
  float ArmorForDamageType; // xmm1_4
  float v4; // xmm0_4

  if ( iDamageType == 1 )
  {
    ArmorForDamageType = CDOTA_BaseNPC::GetArmorForDamageType(this, 1);
    v4 = fabs(ArmorForDamageType);
    result = (v4 * 0.059999999) / ((v4 * 0.059999999) + 1.0);
    if ( ArmorForDamageType < 0.0 )
      return -result;
  }
  else
  {
    result = 1.0;
    if ( iDamageType == 2 )
      return (*(this->_vptr_IHandleEntity + 419))(this, 1.0);
  }
  return result;
}


// CDOTA_BaseNPC::GetTotalPurchasedUpgradeGoldCost  (line 1037, @0x0000000002469b10, libserver.so)  // inlines: Get, GetAbilityByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC::GetTotalPurchasedUpgradeGoldCost(CDOTA_BaseNPC *const this)
{
  int v1; // r15d
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // r14
  int v3; // r13d
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int *m_pInstance; // r12
  int v7; // ebx
  __int64 v8; // rsi

  v1 = 24;
  p_m_hAbilities = &this->m_hAbilities;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
      {
        v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
        if ( v4 != 0 )
        {
          v5 = &v4[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
          if ( v5 != 0 && p_m_hAbilities->m_Value[0].m_Index == v5->m_EHandle.m_Index )
          {
            m_pInstance = v5->m_pInstance;
            if ( v5->m_pInstance != 0 && m_pInstance[203] > 0 )
              break;
          }
        }
      }
      p_m_hAbilities = (p_m_hAbilities + 4);
      if ( --v1 == 0 )
        return v3;
    }
    v7 = 0;
    do
    {
      v8 = (v7++ - 1);
      v3 += (*(*m_pInstance + 2216LL))(m_pInstance, v8);
    }
    while ( v7 < m_pInstance[203] );
    p_m_hAbilities = (p_m_hAbilities + 4);
    --v1;
  }
  while ( v1 != 0 );
  return v3;
}


// CDOTA_BaseNPC::FindReplacementSound  (line 1055, @0x0000000002482600, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CDOTA_BaseNPC, CSoundModifier>, FindAssetModifier<CSoundModifier>, GetAssetModifiers<CSoundModifier>, GetModifier, GetSoundOverride, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CSoundModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::Get
// callers: CDOTA_Modifier_Teleporting::OnCreated, DOTA_EmitSoundLocationWithCaster, CDOTA_BaseNPC::UnitEmitSound, DamageImpact, CDOTA_Modifier_Mirana_Starfall_Thinker::OnIntervalThink, CDOTA_Ability_Lina_LagunaBlade::OnSpellStart, CDOTA_Ability_Lich_FrostNova::OnSpellStart, CDOTA_Ability_PhantomLancer_SpiritLance::OnProjectileHit_ExtraData, CDOTA_Modifier_ShadowShaman_Voodoo::OnCreated, CDOTA_Ability_Windrunner_Powershot::OnChannelFinish, CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt, CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnDestroy (35 total)
const char *__fastcall CDOTA_BaseNPC::FindReplacementSound(CDOTA_BaseNPC *const this, const char *soundname)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CAssetModifier **m_pMemory; // rdx
  const CUtlString *v9; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( this == 0 )
    return soundname;
  if ( soundname == 0 )
    return soundname;
  search.key.m_nType = CSoundModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return soundname;
  if ( v4 > this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return soundname;
  if ( v4 == 0xFFFF )
    return soundname;
  v5 = &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return soundname;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return soundname;
  v7 = 0;
  while ( 1 )
  {
    m_pMemory = elem->m_Memory.m_pMemory;
    v9 = m_pMemory[v7];
    if ( v9 != 0 && (*(v9->m_pString + 6))(m_pMemory[v7], soundname) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return soundname;
  }
  return CUtlString::Get(v9 + 2);
}


// CDOTA_BaseNPC::GetAbilityModifierValues  (line 1064, @0x0000000002474260, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, FStrEq, HasSpecialValueFor, IsListeningToEvent, ModifierVariant_t, _V_strcmp
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetAbility, CDOTA_Buff::GetFunctionValue, strcmp, V_sprintf_safe<64ul>, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, __stack_chk_fail
// callers: CDOTABaseAbility_BotScript::GetSpecialValueInt, CDOTABaseAbility_BotScript::GetSpecialValueFloat, CDOTA_Ability_DataDriven::LookupValueSymbol, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_GreaterClarity::OnCreated, CDOTA_Modifier_Healing_Campfire_Heal::OnCreated, CDOTA_Modifier_UpgradedMortar::OnCreated, CDOTA_Modifier_Radar_Thinker::OnCreated, CDOTA_Item_DataDriven::LookupValueSymbol, CDOTA_Modifier_Special_Bonus_Gold_Income::OnCreated, CDOTA_Modifier_Special_Bonus_Cooldown_Reduction::OnCreated (42 total)
// strings: "multiply_%s", "add_%s"
void __fastcall CDOTA_BaseNPC::GetAbilityModifierValues(
        CDOTA_BaseNPC *const this,
        const char *pszAbilityValueName,
        float *pflMultiply,
        float *pflAdd)
{
  __int64 v5; // rax
  int v6; // ebx
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r13
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v9; // r15
  CDOTABaseAbility *Ability; // r14
  ModifierVariant_t returnvalue; // [rsp+30h] [rbp-120h] BYREF
  CModifierParams params; // [rsp+40h] [rbp-110h] BYREF
  char szBuffer[64]; // [rsp+D0h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+118h] [rbp-38h]

  *pflMultiply = 1.0;
  *pflAdd = 0.0;
  v5 = this->m_ModifierManager.m_buffsForModifiers[163];
  v17 = __readfsqword(0x28u);
  if ( v5 != 0xFF
    && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0
    && this->m_ModifierManager.m_bufflist.m_Size > 0 )
  {
    v6 = 0;
    p_m_ModifierManager = &this->m_ModifierManager;
    do
    {
      while ( 1 )
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v6, 0);
        v9 = BuffByIndex;
        if ( BuffByIndex != 0 && BuffByIndex->m_Functions[163].__pfn != 0 && CDOTA_Buff::GetAbility(BuffByIndex) != 0 )
        {
          Ability = CDOTA_Buff::GetAbility(v9);
          params.ability.m_Index = -1;
          params.fDamage = 0.0;
          params.fOriginalDamage = 0.0;
          params.nActivity = -1;
          params.bTooltip = 0;
          params.nTooltipParam = 0;
          params.bIgnoreInvis = 0;
          params.bNoCooldown = 0;
          params.bReincarnate = 0;
          params.bDoNotConsume = 0;
          params.fDistance = 0.0;
          params.inflictor.m_Index = -1;
          params.nDamageflags = 0;
          params.nDamageCategory = 0;
          memset(&params.pOrb, 0, 24);
          params.bCraniumBasherTested = 0;
          params.bHeartRegenApplied = 0;
          params.bDiffusalApplied = 0;
          params.bChainLightningConsidered = 0;
          params.bSuppressDamage = 0;
          params.bRangedAttack = 0;
          params.nPlayerids_stick = 0;
          params.hattacker.m_Index = -1;
          params.htarget.m_Index = -1;
          params.hunit.m_Index = -1;
          returnvalue.m_eType = ModifierVariant_t::VariantType_t::Variant_Null;
          returnvalue.m_flVal = 0.0;
          returnvalue.m_szVal = 0;
          if ( CDOTA_Buff::GetFunctionValue(v9, 163, &returnvalue, &params)
            && (returnvalue.m_szVal == pszAbilityValueName || strcmp(pszAbilityValueName, returnvalue.m_szVal) == 0) )
          {
            V_sprintf_safe<64ul>(szBuffer, "multiply_%s", pszAbilityValueName);
            if ( CDOTABaseAbility::GetSpecialAbility(Ability, szBuffer) != 0 )
              *pflMultiply = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, szBuffer, -1, 0) * *pflMultiply;
            V_sprintf_safe<64ul>(szBuffer, "add_%s", pszAbilityValueName);
            if ( CDOTABaseAbility::GetSpecialAbility(Ability, szBuffer) != 0 )
              break;
          }
        }
        if ( ++v6 >= this->m_ModifierManager.m_bufflist.m_Size )
          return;
      }
      ++v6;
      *pflAdd = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, szBuffer, -1, 0) + *pflAdd;
    }
    while ( v6 < this->m_ModifierManager.m_bufflist.m_Size );
  }
}


// CDOTA_BaseNPC::BuildWearableSpawnList  (line 1101, @0x000000000247e000, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, AssignTo, AssignTo<long long unsigned int>, Base, Construct<WearableSpawnInfo_t>, CopyConstruct<WearableSpawnInfo_t>, DOTAGameRules, EconItemIDs_t, Element, EnsureCapacity, FindKeyHash, GetGameMode, GetPtrValue, GetRaw, GetUnitName, GetValue, GetValue<bool>, GetValue<int>, GetValue<long long unsigned int>, GrowMemory, IsAddOnGame, MakeStringToken, Min<long long unsigned int>, Min<unsigned int>, String, ToCStr, WearableSpawnInfo_t, _V_strcmp, atoi, itemid_t, memcpy, operator!=, operator[], ~CEconItemLoadout
// calls: V_sprintf_safe<128ul>, DOTAGameManager, VariantFieldTypeName, Warning, MurmurHash2LowerCase, RegisterStringToken, CUtlMemory<WearableSpawnInfo_t, int>::Grow, V_stricmp_fast, memcpy, strtol, CEconItemLoadout::CEconItemLoadout, CDOTAGameManager::GetHeroIDByName (19 total)
// callers: CDOTA_BaseNPC_Hero::BuildWearableSpawnList
// strings: "EconItemView%d", "uint64", "No free conversion of %s variant to %s right now\n", "ar_test", "dota_command", "npc_dota_courier" (14 total)
// globals: jpt_247E0B5, CEntityKeyValues::sm_EmptyVariant, jpt_247E20E, INVALID_ITEM_DEF_INDEX, jpt_247E4F4, jpt_247E95B
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BaseNPC::BuildWearableSpawnList(
        CDOTA_BaseNPC *const this,
        const CEntityKeyValues *pKeyValues,
        CEntitySpawnerContextBase *pSpawnContext,
        CUtlVector<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int> > *pEconItems)
{
  __int64 v6; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  int m_float; // r13d
  CEntityVariant *p_m_value; // rax
  int16 m_type; // dx
  uint32 m_nGrowSize; // eax
  WearableSpawnInfo_t *v15; // rsi
  __int64 v16; // rax
  int v17; // r12d
  uint32 v18; // eax
  int v19; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v20; // dx
  __int64 i; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v22; // r8
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rdx
  CEntityVariant *v24; // rdx
  int16 v25; // ax
  CDOTAGameManager *v26; // rax
  int v27; // edx
  int v28; // ecx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v29; // si
  __int64 v30; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v31; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v32; // rdx
  CEntityVariant *v33; // rax
  int16 v34; // dx
  const char *v35; // rax
  double m_float64; // rcx
  __int64 m_Size; // rax
  int v38; // edx
  __int64 v39; // rax
  WearableSpawnInfo_t *v40; // rdx
  uint16 m_Data; // si
  WearableSpawnInfo_t *v42; // rax
  char *m_szAddOnGame; // r12
  double v44; // xmm0_8
  float v45; // xmm0_4
  WearableSpawnInfo_t *m_pMemory; // r12
  WearableSpawnInfo_t *v47; // rax
  unsigned int m_int; // eax
  __int64 m_uint64; // rax
  const char *v50; // rax
  char m_char; // dl
  const char *m_pAsString; // r12
  CDOTAGameManager *v53; // rax
  int HeroIDByName; // eax
  int v55; // r12d
  const char *v56; // rdi
  const char *v57; // rdi
  const char *v58; // rdi
  __int64 *v59; // rbx
  __int64 v60; // rax
  __int64 *v61; // rdi
  const char *v62; // rax
  const char *v63; // rax
  uint16 v64; // dx
  EconItemIDs_t *v65; // rax
  uint32 v66; // r13d
  int v67; // r12d
  int v68; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v69; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v71; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rdx
  CEntityVariant *v73; // rax
  int16 v74; // dx
  __int64 *v75; // rbx
  __int64 v76; // r12
  bool v77; // zf
  WearableSpawnInfo_t *v78; // r12
  __int64 v79; // r12
  int v80; // eax
  const char *v81; // rax
  __int64 v82; // rax
  unsigned int v83; // eax
  const char *v84; // rax
  const char *v85; // rax
  int pIDs; // [rsp+8h] [rbp-1008h]
  uint32 nItemCounta; // [rsp+10h] [rbp-1000h]
  double nItemCountb; // [rsp+10h] [rbp-1000h]
  int nItemCount; // [rsp+10h] [rbp-1000h]
  int thisb; // [rsp+18h] [rbp-FF8h]
  WearableSpawnInfo_t v92; // [rsp+20h] [rbp-FF0h] BYREF
  EconItemIDs_t pIds[8]; // [rsp+30h] [rbp-FE0h] BYREF
  _BYTE v94[8]; // [rsp+B0h] [rbp-F60h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-F58h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-F18h] BYREF
  __int64 v97; // [rsp+1B8h] [rbp-E58h] BYREF
  __int64 v98; // [rsp+E78h] [rbp-198h] BYREF
  char pKeyName[128]; // [rsp+F50h] [rbp-C0h] OVERLAPPED BYREF
  unsigned __int64 v100; // [rsp+FD8h] [rbp-38h]

  v100 = __readfsqword(0x28u);
  v6 = 0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    do
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[v6] == -1844714356 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v10 = pKeyValues->m_keyValues.m_pElements;
          else
            v10 = 0;
          m_float = 0;
          p_m_value = &v10[v6].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_14;
        }
      }
      else if ( *(4 * v6) == -1844714356 )
      {
        goto LABEL_9;
      }
      ++v6;
    }
    while ( m_nCount > v6 );
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_float = 0;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        m_float = p_m_value->m_float;
        break;
      case 5:
        m_float = p_m_value->m_int;
        break;
      case 6:
        m_float = p_m_value->m_char;
        break;
      case 26:
        m_uint64 = p_m_value->m_uint64;
        m_float = 0x7FFFFFFF;
        if ( m_uint64 <= 0x7FFFFFFF )
        {
          m_float = 0x80000000;
          if ( m_uint64 >= 0xFFFFFFFF80000000LL )
            m_float = m_uint64;
        }
        break;
      case 30:
        m_float = strtol(p_m_value->m_pszString, 0, 10);
        break;
      case 33:
        v50 = p_m_value->m_uint64;
        m_float = 0x7FFFFFFF;
        if ( v50 <= 0x7FFFFFFE )
          m_float = v50;
        break;
      case 34:
        m_float = p_m_value->m_float64;
        break;
      case 37:
        m_int = p_m_value->m_int;
        m_float = 0x7FFFFFFF;
        if ( m_int <= 0x7FFFFFFE )
          m_float = m_int;
        break;
      default:
        m_float = 0;
        v62 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v62);
        break;
    }
  }
LABEL_14:
  if ( m_float > pEconItems->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = pEconItems->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = pEconItems->m_Memory.m_pMemory;
        v47 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * m_float);
        pEconItems->m_Memory.m_pMemory = v47;
        if ( m_pMemory != 0 )
          memcpy(v47, m_pMemory, 16LL * pEconItems->m_Memory.m_nAllocationCount);
        pEconItems->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v15 = pEconItems->m_Memory.m_pMemory;
        v16 = *g_pMemAlloc;
        if ( v15 != 0 )
          pEconItems->m_Memory.m_pMemory = (*(v16 + 8))(g_pMemAlloc, v15, 16LL * m_float);
        else
          pEconItems->m_Memory.m_pMemory = (*v16)(g_pMemAlloc, 16LL * m_float);
      }
      pEconItems->m_Memory.m_nAllocationCount = m_float;
    }
  }
  v17 = 0;
  if ( m_float > 0 )
  {
    do
    {
      V_sprintf_safe<128ul>(pKeyName, "EconItemView%d", v17);
      v18 = 0;
      if ( pKeyName[0] != 0 )
      {
        v18 = MurmurHash2LowerCase(pKeyName, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          nItemCounta = v18;
          RegisterStringToken(v18, pKeyName, 0, 1);
          v18 = nItemCounta;
        }
      }
      v19 = pKeyValues->m_keyHashes.m_nCount;
      if ( v19 > 0 )
      {
        v20 = pKeyValues->m_keyHashes.m_nAllocated;
        for ( i = 0; v19 > i; ++i )
        {
          if ( v20 != 0 )
          {
            v22 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v20 > 9 )
              v22 = pKeyValues->m_keyHashes.m_pElements;
            if ( v18 == v22[i] )
            {
LABEL_30:
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v23 = pKeyValues->m_keyValues.m_pElements;
              else
                v23 = 0;
              v24 = &v23[i].m_value;
              v25 = v24->m_type;
              if ( v25 != 0 )
                goto LABEL_33;
              goto LABEL_40;
            }
          }
          else if ( v18 == *(4 * i) )
          {
            goto LABEL_30;
          }
        }
      }
      v24 = &CEntityKeyValues::sm_EmptyVariant;
      v25 = CEntityKeyValues::sm_EmptyVariant.m_type;
      if ( v25 != 0 )
      {
LABEL_33:
        if ( v25 == 33 )
        {
LABEL_60:
          m_float64 = v24->m_float64;
LABEL_61:
          if ( m_float64 != 0.0 )
          {
            m_Size = pEconItems->m_Size;
            v38 = pEconItems->m_Size;
            if ( m_Size == pEconItems->m_Memory.m_nAllocationCount )
            {
              pIDs = pEconItems->m_Size;
              nItemCountb = m_float64;
              CUtlMemory<WearableSpawnInfo_t,int>::Grow(&pEconItems->m_Memory, 1);
              v38 = pEconItems->m_Size;
              m_Size = pIDs;
              m_float64 = nItemCountb;
            }
            v39 = m_Size;
            pEconItems->m_Size = v38 + 1;
            v40 = &pEconItems->m_Memory.m_pMemory[v39];
            if ( v40 != 0 )
            {
              m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
              v40->m_pItem = 0;
              v40->m_bDeleteEconItemOnDestroy = 0;
              v40->m_bGeneratingEconItem = 0;
              v40->m_nItemDefIndex.m_Data = m_Data;
              v42 = &pEconItems->m_Memory.m_pMemory[v39];
            }
            else
            {
              v42 = 0;
            }
            *&v42->m_pItem = m_float64;
          }
        }
        else if ( (v25 & 0xFFFD) == 0x19 || (v25 - 3) <= 1u || v25 == 39 || v25 == 30 )
        {
          v35 = VariantFieldTypeName(v25);
          Warning("No free conversion of %s variant to %s right now\n", v35, "uint64");
        }
        else
        {
          switch ( v25 )
          {
            case 1:
              v45 = v24->m_float;
              if ( v24->m_float < 9.223372e18 )
                *&m_float64 = v45;
              else
                *&m_float64 = (v45 - 9.223372e18) ^ 0x8000000000000000LL;
              goto LABEL_61;
            case 5:
              *&m_float64 = v24->m_int;
              goto LABEL_61;
            case 6:
              *&m_float64 = v24->m_char;
              goto LABEL_61;
            case 8:
              *&m_float64 = v24->m_char;
              goto LABEL_61;
            case 26:
              goto LABEL_60;
            case 34:
              v44 = v24->m_float64;
              if ( v24->m_float64 < 9.223372036854776e18 )
                *&m_float64 = v44;
              else
                *&m_float64 = (v44 - 9.223372036854776e18) ^ 0x8000000000000000LL;
              goto LABEL_61;
            case 37:
              *&m_float64 = v24->m_uint;
              goto LABEL_61;
            default:
              break;
          }
        }
      }
LABEL_40:
      ++v17;
    }
    while ( v17 != m_float );
  }
  if ( g_pGameRules == 0 || DOTAGameManager() == 0 )
    return;
  v26 = DOTAGameManager();
  v27 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v27 == 15 || v27 == 19 )
  {
    m_szAddOnGame = v26->m_szAddOnGame;
    if ( V_stricmp_fast(v26->m_szAddOnGame, "ar_test") != 0 && V_stricmp_fast(m_szAddOnGame, "dota_command") != 0 )
      return;
  }
  v28 = pKeyValues->m_keyHashes.m_nCount;
  if ( v28 <= 0 )
  {
LABEL_81:
    v33 = &CEntityKeyValues::sm_EmptyVariant;
    v34 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v34 == 0 )
      return;
    goto LABEL_82;
  }
  v29 = pKeyValues->m_keyHashes.m_nAllocated;
  v30 = 0;
  while ( v29 == 0 )
  {
    if ( *(4 * v30) == -1283033504 )
      goto LABEL_53;
LABEL_50:
    if ( v28 <= ++v30 )
      goto LABEL_81;
  }
  v31 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v29 > 9 )
    v31 = pKeyValues->m_keyHashes.m_pElements;
  if ( v31[v30] != -1283033504 )
    goto LABEL_50;
LABEL_53:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v32 = pKeyValues->m_keyValues.m_pElements;
  else
    v32 = 0;
  v33 = &v32[v30].m_value;
  v34 = v33->m_type;
  if ( v34 == 0 )
    return;
LABEL_82:
  switch ( v34 )
  {
    case 1:
      m_char = v33->m_float != 0.0;
      goto LABEL_104;
    case 5:
    case 37:
      m_char = v33->m_int != 0;
      goto LABEL_104;
    case 6:
      m_char = v33->m_char;
      goto LABEL_104;
    case 26:
    case 33:
      m_char = v33->m_uint64 != 0;
      goto LABEL_104;
    case 30:
      v63 = v33->m_uint64;
      if ( strcmp(v63, "0") == 0 || strcmp(v63, "false") == 0 || strcmp(v63, "no") == 0 )
        return;
      if ( strcmp(v63, "1") == 0 || strcmp(v63, "true") == 0 || strcmp(v63, "yes") == 0 )
        goto LABEL_105;
      Warning("Invalid conversion : CString '%s' to bool\n", v63);
      return;
    case 34:
      m_char = v33->m_float64 != 0.0;
LABEL_104:
      if ( m_char == 0 )
        return;
LABEL_105:
      CEconItemLoadout::CEconItemLoadout(v94);
      m_pAsString = "";
      if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
      v53 = DOTAGameManager();
      HeroIDByName = CDOTAGameManager::GetHeroIDByName(v53, m_pAsString);
      v55 = HeroIDByName;
      if ( HeroIDByName == 1000 || HeroIDByName < 0 )
      {
        v56 = "";
        if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
          v56 = this->m_iszUnitName.m_Value.u.m_pAsString;
        if ( V_stricmp_fast(v56, "npc_dota_courier") != 0 )
        {
          v57 = "";
          if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
            v57 = this->m_iszUnitName.m_Value.u.m_pAsString;
          if ( V_stricmp_fast(v57, "npc_dota_observer_wards") == 0 )
            goto LABEL_181;
          v58 = "";
          if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
            v58 = this->m_iszUnitName.m_Value.u.m_pAsString;
          if ( V_stricmp_fast(v58, "npc_dota_sentry_wards") != 0 )
          {
            if ( v55 == -1 )
              goto LABEL_118;
          }
          else
          {
LABEL_181:
            CEconItemLoadout::InitGlobalItemLoadout(v94, 33);
          }
        }
        else
        {
          CEconItemLoadout::InitGlobalItemLoadout(v94, 29);
        }
      }
      else
      {
        CEconItemLoadout::InitHeroLoadout(v94, HeroIDByName, -1);
      }
      v64 = INVALID_ITEM_DEF_INDEX.m_Data;
      v65 = pIds;
      do
      {
        v65->m_nItemID.m_Data = 0;
        ++v65;
        v65[-1].m_nItemDefIndex.m_Data = v64;
      }
      while ( v65 != v94 );
      thisb = 0;
      nItemCount = 0;
      break;
    default:
      v85 = VariantFieldTypeName(v34);
      Warning("No conversion from %s to bool now\n", v85);
      return;
  }
  do
  {
    V_sprintf_safe<32ul>(pKeyName, "item_def%d", thisb);
    v66 = 0;
    LOWORD(v67) = INVALID_ITEM_DEF_INDEX;
    if ( pKeyName[0] != 0 )
    {
      v66 = MurmurHash2LowerCase(pKeyName, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(v66, pKeyName, 0, 1);
    }
    v68 = pKeyValues->m_keyHashes.m_nCount;
    if ( v68 > 0 )
    {
      v69 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( j = 0; v68 > j; ++j )
      {
        if ( v69 != 0 )
        {
          v71 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v69 > 9 )
            v71 = pKeyValues->m_keyHashes.m_pElements;
          if ( v66 == v71[j] )
          {
LABEL_147:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v72 = pKeyValues->m_keyValues.m_pElements;
            else
              v72 = 0;
            v73 = &v72[j].m_value;
            v74 = v73->m_type;
            if ( v74 != 0 )
              goto LABEL_150;
            goto LABEL_152;
          }
        }
        else if ( v66 == *(4 * j) )
        {
          goto LABEL_147;
        }
      }
    }
    v73 = &CEntityKeyValues::sm_EmptyVariant;
    v74 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v74 != 0 )
    {
LABEL_150:
      switch ( v74 )
      {
        case 1:
          v67 = v73->m_float;
          break;
        case 5:
          LOWORD(v67) = LOWORD(v73->m_float);
          break;
        case 6:
          LOWORD(v67) = v73->m_char;
          break;
        case 26:
          v82 = v73->m_uint64;
          LOWORD(v67) = -1;
          if ( v82 <= 0x7FFFFFFF )
          {
            if ( v82 < 0xFFFFFFFF80000000LL )
              LOWORD(v82) = 0;
            LOWORD(v67) = v82;
          }
          break;
        case 30:
          LOWORD(v67) = strtol(v73->m_pszString, 0, 10);
          break;
        case 33:
          v81 = v73->m_uint64;
          LOWORD(v67) = -1;
          if ( v81 <= 0x7FFFFFFE )
            LOWORD(v67) = v81;
          break;
        case 34:
          v67 = v73->m_float64;
          break;
        case 37:
          v83 = v73->m_int;
          LOWORD(v67) = -1;
          if ( v83 <= 0x7FFFFFFE )
            LOWORD(v67) = v83;
          break;
        default:
          v84 = VariantFieldTypeName(v74);
          Warning("No conversion from %s to int now\n", v84);
          break;
      }
    }
LABEL_152:
    if ( INVALID_ITEM_DEF_INDEX.m_Data != v67 )
      pIds[nItemCount++].m_nItemDefIndex.m_Data = v67;
    ++thisb;
  }
  while ( thisb != 8 );
  CEconItemLoadout::SetItems(v94, EconItemLoadoutBehavior_t::SET_UNDEFINED_ITEMS_FROM_BASE_SET, nItemCount, pIds, 0);
  v75 = &v95;
  do
  {
    if ( INVALID_ITEM_DEF_INDEX.m_Data != *(v75 + 4) )
    {
      v79 = pEconItems->m_Size;
      v92.m_nItemDefIndex.m_Data = *(v75 + 4);
      v92.m_pItem = 0;
      v92.m_bDeleteEconItemOnDestroy = 0;
      v92.m_bGeneratingEconItem = 0;
      v80 = v79;
      if ( v79 == pEconItems->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<WearableSpawnInfo_t,int>::Grow(&pEconItems->m_Memory, 1);
        v80 = pEconItems->m_Size;
      }
      v76 = v79;
      v77 = &pEconItems->m_Memory.m_pMemory[v76] == 0;
      v78 = &pEconItems->m_Memory.m_pMemory[v76];
      pEconItems->m_Size = v80 + 1;
      if ( !v77 )
        *v78 = v92;
      WearableSpawnInfo_t::~WearableSpawnInfo_t(&v92);
    }
    v75 += 2;
  }
  while ( v75 != &v97 );
LABEL_118:
  v59 = &v98;
  do
  {
    v60 = *v59;
    v61 = v59;
    v59 -= 27;
    (*(v60 + 8))(v61);
  }
  while ( v59 != &v96 );
}


// CDOTA_BaseNPC::BuildWearableSpawnListInternal  (line 1183, @0x000000000247da90, libserver.so)  // inlines: AddToHead, AddToTail, AddToTailGetPtr, Construct<WearableSpawnInfo_t>, CopyConstruct<WearableSpawnInfo_t>, Element, GrowMemory, GrowVector, InsertBefore, ShiftElementsRight, V_memmove, WearableSpawnInfo_t, memmove, operator!=, operator[]
// calls: memmove, WearableSpawnInfo_t::~WearableSpawnInfo_t, CDOTA_BaseNPC::ComputeGeneratingItem, CUtlMemory<WearableSpawnInfo_t, int>::Grow, _Unwind_Resume
// callers: CDOTA_BaseNPC::PrecacheWearables, CDOTA_BaseNPC::SpawnWearables
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC::BuildWearableSpawnListInternal(
        CDOTA_BaseNPC *const this,
        const CEntityKeyValues *pKeyValues,
        CEntitySpawnerContextBase *pSpawnContext)
{
  int m_Size; // r12d
  int m_nAllocationCount; // eax
  int v8; // r14d
  WearableSpawnInfo_t *m_pMemory; // rax
  CEconItemView *v10; // rax
  int v11; // r12d
  int v12; // edx
  WearableSpawnInfo_t *v13; // rcx
  uint16 m_Data; // si
  WearableSpawnInfo_t *v15; // rdx
  CEconItemView *pGeneratingItem; // [rsp+8h] [rbp-38h]
  WearableSpawnInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  (*(this->_vptr_IHandleEntity + 484))(this, pSpawnContext);
  if ( this->m_wearableSpawnList.m_Size <= 0 )
  {
    (*(this->_vptr_IHandleEntity + 483))(this, pKeyValues, pSpawnContext, &this->m_wearableSpawnList);
    if ( INVALID_ITEM_DEF_INDEX.m_Data != this->m_nWearableDefIndex.m_Data )
    {
      m_Size = this->m_wearableSpawnList.m_Size;
      v17.m_nItemDefIndex.m_Data = this->m_nWearableDefIndex.m_Data;
      m_nAllocationCount = this->m_wearableSpawnList.m_Memory.m_nAllocationCount;
      v17.m_pItem = 0;
      v17.m_bDeleteEconItemOnDestroy = 0;
      v17.m_bGeneratingEconItem = 0;
      v8 = m_Size + 1;
      if ( m_Size + 1 > m_nAllocationCount )
        CUtlMemory<WearableSpawnInfo_t,int>::Grow(&this->m_wearableSpawnList.m_Memory, v8 - m_nAllocationCount);
      this->m_wearableSpawnList.m_Size = v8;
      if ( m_Size > 0 )
        memmove(
          &this->m_wearableSpawnList.m_Memory.m_pMemory[1],
          this->m_wearableSpawnList.m_Memory.m_pMemory,
          16LL * m_Size);
      m_pMemory = this->m_wearableSpawnList.m_Memory.m_pMemory;
      if ( m_pMemory != 0 )
        *m_pMemory = v17;
      WearableSpawnInfo_t::~WearableSpawnInfo_t(&v17);
    }
    v10 = CDOTA_BaseNPC::ComputeGeneratingItem(this, pKeyValues);
    if ( v10 != 0 )
    {
      v11 = this->m_wearableSpawnList.m_Size;
      v12 = v11;
      if ( v11 == this->m_wearableSpawnList.m_Memory.m_nAllocationCount )
      {
        pGeneratingItem = v10;
        CUtlMemory<WearableSpawnInfo_t,int>::Grow(&this->m_wearableSpawnList.m_Memory, 1);
        v12 = this->m_wearableSpawnList.m_Size;
        v10 = pGeneratingItem;
      }
      this->m_wearableSpawnList.m_Size = v12 + 1;
      v13 = &this->m_wearableSpawnList.m_Memory.m_pMemory[v11];
      if ( v13 != 0 )
      {
        m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
        v13->m_pItem = 0;
        v13->m_bDeleteEconItemOnDestroy = 0;
        v13->m_bGeneratingEconItem = 0;
        v13->m_nItemDefIndex.m_Data = m_Data;
        v15 = &this->m_wearableSpawnList.m_Memory.m_pMemory[v11];
      }
      else
      {
        v15 = 0;
      }
      v15->m_pItem = v10;
      v15->m_bGeneratingEconItem = 1;
    }
  }
}


// CDOTA_BaseNPC::FreeWearableSpawnListInternal  (line 1211, @0x00000000024768e0, libserver.so)  // inlines: Purge
// calls: CUtlVectorBase<WearableSpawnInfo_t, CUtlMemory<WearableSpawnInfo_t, int> >::RemoveAll, CUtlMemory<WearableSpawnInfo_t, int>::Purge
void __fastcall CDOTA_BaseNPC::FreeWearableSpawnListInternal(CDOTA_BaseNPC *const this)
{
  CUtlVectorBase<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int>>::RemoveAll(&this->m_wearableSpawnList);
  CUtlMemory<WearableSpawnInfo_t,int>::Purge(&this->m_wearableSpawnList.m_Memory);
}


// CDOTA_BaseNPC::FindWearableItemForSlotType  (line 1216, @0x0000000002469bf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CEconEntity::GetItem
// callers: CDOTA_BaseNPC::ComputeGeneratingItem
// globals: CEntityHandle::gm_pEntityList
CDOTAWearableItem *__fastcall CDOTA_BaseNPC::FindWearableItemForSlotType(CDOTA_BaseNPC *const this, int nSlotType)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  CHandle<CEconWearable> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTAWearableItem *m_pInstance; // r15
  CEconItemView *Item; // rax

  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v5 = 0;
  v6 = 4LL * (m_Size - 1) + 4;
  while ( 1 )
  {
    v7 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v5 / 4];
    m_Index = v7->m_Index;
    if ( v7->m_Index + 2 > 1 )
    {
      v9 = v7->m_Index;
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[v9 & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0 )
          {
            Item = CEconEntity::GetItem(v11->m_pInstance);
            if ( Item != 0 && *((*(Item->_vptr_IEconItemInterface + 12))(Item) + 408) == nSlotType )
              break;
          }
        }
      }
    }
    v5 += 4LL;
    if ( v5 == v6 )
      return 0;
  }
  return m_pInstance;
}


// CDOTA_BaseNPC::GetPlayerOwner  (line 1236, @0x0000000002469ce0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero
CDOTAPlayer *__fastcall CDOTA_BaseNPC::GetPlayerOwner(CDOTA_BaseNPC *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    return (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BaseNPC::GetPlayerOwnerID  (line 1245, @0x0000000002469db0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero
int __fastcall CDOTA_BaseNPC::GetPlayerOwnerID(CDOTA_BaseNPC *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    return (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
  }
  else
  {
    return -1;
  }
}


// CDOTA_BaseNPC::GetEconSpecifyingPlayerID  (line 1255, @0x0000000002469e80, libserver.so)
// calls: CDOTA_PlayerResource::IsFakeClient, CDOTA_PlayerResource::NumPlayers
// callers: CDOTAPlayer::OnReconnect, CDOTA_BaseNPC_Hero::ValidateEconItems, CDOTA_BaseNPC_Hero::GetGreevil, CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange, CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC_Hero::PerformAutoTaunt, CDOTA_BaseNPC_Hero::UpdateActionItemSlot, CDOTA_Unit_Courier::ComputeOverriddenGeneratingItem, CDOTA_NPC_Observer_Ward::ComputeOverriddenGeneratingItem
int __fastcall CDOTA_BaseNPC::GetEconSpecifyingPlayerID(CDOTA_BaseNPC *const this)
{
  int m_Value; // r13d
  int v3; // ebx
  bool IsFakeClient; // dl
  int result; // eax

  m_Value = (*(this->_vptr_IHandleEntity + 487))(this);
  if ( m_Value < 0 )
  {
    m_Value = (*(this->_vptr_IHandleEntity + 414))(this);
    if ( m_Value < 0 )
    {
      m_Value = this->m_nPlayerOwnerID.m_Value;
      if ( m_Value < 0 )
        return m_Value;
    }
  }
  v3 = 0;
  IsFakeClient = CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, m_Value);
  result = m_Value;
  if ( IsFakeClient )
  {
    while ( v3 < CDOTA_PlayerResource::NumPlayers(g_pDOTAPlayerResource) )
    {
      if ( !CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v3) )
        return v3;
      ++v3;
    }
    return m_Value;
  }
  return result;
}


// CDOTA_BaseNPC::ComputeGeneratingItem  (line 1286, @0x0000000002477210, libserver.so)  // inlines: AssignTo<CBaseEntity>, AssignTo<long long unsigned int>, Base, CEntityHandle, CHandle, Element, FindGeneratingSlotTypeForUnit, FindKeyHash, FromIndex, Get, Get<CHandle<CBaseEntity> >, GetEntityIdentity, GetEntryIndex, GetInstance, GetPtrValue, GetUnitName, GetValue, GetValue<CHandle<CBaseEntity> >, GetValue<long long unsigned int>, IndexToIdentity, LookupEntity, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CEntityInstance*, operator=, operator[]
// calls: CEntityKeyValues::HasValue, VariantFieldTypeName, Warning, CEntitySystem::FindFirstEntityHandleByName, DOTAInventoryManager, CDOTAInventoryManager::GetItemSlotsForHero, CUtlString::Get, V_stristr_fast(char const*,char const*), CDOTA_BaseNPC::FindWearableItemForSlotType, CEconEntity::GetItem
// callers: CDOTA_BaseNPC::BuildWearableSpawnListInternal
// strings: "No free conversion of %s variant to CHandle<T> right now\n", "uint64", "No free conversion of %s variant to %s right now\n"
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValues::sm_EmptyVariant, jpt_24773F0
CEconItemView *__fastcall CDOTA_BaseNPC::ComputeGeneratingItem(
        CDOTA_BaseNPC *const this,
        const CEntityKeyValues *pKeyValues)
{
  CEconItemView *result; // rax
  bool HasValue; // al
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // di
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  int m_int; // edi
  unsigned int v11; // eax
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v14; // di
  __int64 v15; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v16; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  const char *v19; // rax
  CEntityVariant *v20; // rcx
  int16 v21; // dx
  const char *v22; // rax
  float m_float; // xmm0_4
  double m_float64; // xmm0_8
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rdx
  int pfn; // r12d
  CDOTAInventoryManager *v28; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // r12
  const char *m_pAsString; // r13
  __int64 v31; // rbx
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v32; // rax
  unsigned __int64 v33; // r14
  const char *v34; // rax
  int v35; // esi
  CDOTAWearableItem *WearableItemForSlotType; // rax
  CDOTA_BaseNPC *m_pInstance; // [rsp+10h] [rbp-60h]
  __int64 v38; // [rsp+18h] [rbp-58h]
  EHANDLE hOwner; // [rsp+20h] [rbp-50h]
  int v40; // [rsp+30h] [rbp-40h]

  result = (*(this->_vptr_IHandleEntity + 486))(this);
  if ( result != 0 )
    return result;
  HasValue = CEntityKeyValues::HasValue(pKeyValues, -1872306864);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( HasValue )
  {
    if ( m_nCount <= 0 )
    {
LABEL_26:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      v8 = 0;
      while ( 1 )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        if ( m_pElements[v8] == -1872306864 )
          break;
        if ( m_nCount <= ++v8 )
          goto LABEL_26;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v26 = pKeyValues->m_keyValues.m_pElements;
      else
        v26 = 0;
      p_m_value = &v26[v8].m_value;
    }
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 13:
        m_int = p_m_value->m_int;
        hOwner.m_Index = p_m_value->m_int;
        v11 = p_m_value->m_int + 2;
        break;
      case 30:
        CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, p_m_value->m_pszString);
        m_int = v40;
        LOWORD(hOwner.m_Index) = v40;
        v11 = v40 + 2;
        break;
      case 0:
LABEL_81:
        goto LABEL_18;
      default:
        v19 = VariantFieldTypeName(m_type);
        Warning("No free conversion of %s variant to CHandle<T> right now\n", v19);
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
        goto LABEL_81;
    }
    if ( v11 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hOwner.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[hOwner.m_Index & 0x1FF];
        if ( v13 != 0 && v13->m_EHandle.m_Index == m_int )
        {
          m_pInstance = v13->m_pInstance;
          if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 )
          {
            pfn = m_pInstance[1].m_pfnMoveDone.__pfn;
            v28 = DOTAInventoryManager();
            ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v28, pfn);
            if ( ItemSlotsForHero != 0 )
            {
              m_pAsString = "";
              if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
                m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
              v31 = 0;
              while ( 1 )
              {
                v32 = ItemSlotsForHero->m_pSlotUnits[v31];
                if ( v32 != 0 && v32->m_Size > 0 )
                  break;
LABEL_77:
                if ( ++v31 == 16 )
                  goto LABEL_17;
              }
              v33 = 0;
              v38 = 8LL * (v32->m_Size - 1) + 8;
              while ( 1 )
              {
                v34 = CUtlString::Get(&v32->m_Memory.m_pMemory[v33 / 8]);
                if ( V_stristr_fast(m_pAsString, v34) != 0 )
                  break;
                v33 += 8LL;
                if ( v33 == v38 )
                  goto LABEL_77;
                v32 = ItemSlotsForHero->m_pSlotUnits[v31];
              }
              v35 = ItemSlotsForHero->m_nSlotTypes[v31];
              if ( v35 >= 0 )
              {
                WearableItemForSlotType = CDOTA_BaseNPC::FindWearableItemForSlotType(m_pInstance, v35);
                if ( WearableItemForSlotType != 0 )
                  return CEconEntity::GetItem(WearableItemForSlotType);
              }
            }
          }
        }
      }
    }
LABEL_17:
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
  }
LABEL_18:
  if ( m_nCount <= 0 )
  {
LABEL_31:
    v20 = &CEntityKeyValues::sm_EmptyVariant;
  }
  else
  {
    v14 = pKeyValues->m_keyHashes.m_nAllocated;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 != 0 )
      {
        v16 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v14 > 9 )
          v16 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v16 = 0;
      }
      if ( v16[v15] == 1080045936 )
        break;
      if ( m_nCount <= ++v15 )
        goto LABEL_31;
    }
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
      v25 = pKeyValues->m_keyValues.m_pElements;
    else
      v25 = 0;
    v20 = &v25[v15].m_value;
  }
  v21 = v20->m_type;
  result = 0;
  if ( v21 != 0 )
  {
    if ( v21 == 33 )
    {
      return v20->m_uint64;
    }
    else if ( (v21 & 0xFFFD) == 0x19 || (v21 - 3) <= 1u || v21 == 39 || v21 == 30 )
    {
      v22 = VariantFieldTypeName(v21);
      Warning("No free conversion of %s variant to %s right now\n", v22, "uint64");
      return 0;
    }
    else
    {
      switch ( v21 )
      {
        case 1:
          m_float = v20->m_float;
          if ( v20->m_float >= 9.223372e18 )
            result = ((m_float - 9.223372e18) ^ 0x8000000000000000LL);
          else
            result = m_float;
          break;
        case 5:
          result = v20->m_int;
          break;
        case 6:
          result = v20->m_char;
          break;
        case 8:
          result = v20->m_char;
          break;
        case 26:
          return v20->m_uint64;
        case 34:
          m_float64 = v20->m_float64;
          if ( v20->m_float64 >= 9.223372036854776e18 )
            result = ((m_float64 - 9.223372036854776e18) ^ 0x8000000000000000LL);
          else
            result = m_float64;
          break;
        case 37:
          result = v20->m_uint;
          break;
        default:
          return 0;
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC::GetGeneratingEconItem  (line 1318, @0x0000000002469f40, libserver.so)
// callers: CDOTA_BaseNPC_Pet::UpdatePetLevel, CDOTA_BaseNPC::ManageModelChanges, CDOTA_Unit_Courier::AddCourierWearables, CDOTA_Unit_Courier::PrecacheCourierWearables, CDOTA_Unit_Courier::OnAssetModifiersUpdated, CDOTA_Modifier_MonkeyKing_Transform::OnIntervalThink
CEconItemView *__fastcall CDOTA_BaseNPC::GetGeneratingEconItem(CDOTA_BaseNPC *const this)
{
  return this->m_pGeneratingEconItem.m_p;
}


// CDOTA_BaseNPC::IsGeneratedByEconItem  (line 1323, @0x0000000002469f50, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsGeneratedByEconItem(CDOTA_BaseNPC *const this)
{
  return this->m_pGeneratingEconItem.m_p != 0;
}


// CDOTA_BaseNPC::PrecacheShared  (line 1331, @0x0000000002469f70, libserver.so)
// calls: EventList_RegisterPrivateEvent
// callers: CDOTA_BaseNPC::Precache
// strings: "AE_DOTA_SUPPRESS_CONSTANT_LAYER", "AE_DOTA_PLAY_SOUND_ATTACK_SPECIAL"
// globals: AE_DOTA_SUPPRESS_CONSTANT_LAYER, AE_DOTA_PLAY_SOUND_ATTACK_SPECIAL
void __fastcall CDOTA_BaseNPC::PrecacheShared(CDOTA_BaseNPC *const this, const CEntityPrecacheContext *pContext)
{
  AE_DOTA_SUPPRESS_CONSTANT_LAYER.m_Data = EventList_RegisterPrivateEvent("AE_DOTA_SUPPRESS_CONSTANT_LAYER", 1).m_Data;
  AE_DOTA_PLAY_SOUND_ATTACK_SPECIAL.m_Data = EventList_RegisterPrivateEvent("AE_DOTA_PLAY_SOUND_ATTACK_SPECIAL", 1).m_Data;
}


// CDOTA_BaseNPC::PrecacheWearables  (line 1337, @0x000000000247dc50, libserver.so)  // inlines: Attach, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, Construct<CEconItemView>, Delete, Detach, FastDelegate2, IsValid, operator[], ~CEntitySpawnerContext, ~CEntitySpawnerContextBase
// calls: CEntityInstance::IsAuthoritative, CEntityKeyValues::CEntityKeyValues, CDOTA_BaseNPC::BuildWearableSpawnListInternal, ItemGeneration, CItemGeneration::PrecacheItemFromScriptData, operator new, CEconItemView::CEconItemView, CEconItemView::GetSOCData, CEconItem::CEconItem, CEconItemView::SetNonSOEconItem, CItemGeneration::BuildAssetModifierContainer, CEntityKeyValues::~CEntityKeyValues (17 total)
// callers: CDOTA_BaseNPC::Precache
// globals: INVALID_STYLE_INDEX
void __fastcall CDOTA_BaseNPC::PrecacheWearables(CDOTA_BaseNPC *const this, const CEntityPrecacheContext *pContext)
{
  CEconItemView *m_p; // rdi
  void *v4; // rsp
  void *v5; // rsp
  __int64 v6; // rbx
  __int64 v7; // r12
  CEconItemView *m_pItem; // r14
  CItemGeneration *v9; // rax
  WearableSpawnInfo_t *v10; // rax
  const CEconItemView *v11; // r15
  CEconItemView *v12; // r14
  CEconItem *v13; // r14
  CEconItem *SOCData; // r14
  CEconItem *v15; // r12
  CItemGeneration *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  AccountID_t SteamAccountID; // r14d
  __int64 v20; // rax
  __int64 v21; // rax
  CEconItemView *v22; // r15
  CItemGeneration *v23; // rax
  CEconItemView *pScratch; // [rsp+10h] [rbp-F0h]
  CEconItemView **ppModifierList; // [rsp+18h] [rbp-E8h]
  int nScratchCount; // [rsp+20h] [rbp-E0h] BYREF
  int nEconItemViewCount; // [rsp+24h] [rbp-DCh]
  const CEntityPrecacheContext *pContexta; // [rsp+28h] [rbp-D8h]
  CEntitySpawnerContext<CBaseEntity> context; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp-38h]

  pContexta = pContext;
  v30 = __readfsqword(0x28u);
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    CEntityKeyValues::CEntityKeyValues(&context.m_entityKeyValues);
    context.m_pParent = 0;
    memset(&context.m_callback, 0, sizeof(context.m_callback));
    CDOTA_BaseNPC::BuildWearableSpawnListInternal(this, pContexta->m_pKeyValues, &context);
    m_p = this->m_pGeneratingEconItem.m_p;
    nEconItemViewCount = this->m_wearableSpawnList.m_Size;
    v4 = alloca(((216LL * nEconItemViewCount + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v5 = alloca(((8LL * nEconItemViewCount + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    pScratch = (&nScratchCount & 0xFFFFFFFFFFFFFFEFLL);
    ppModifierList = (&nScratchCount & 0xFFFFFFFFFFFFFFEFLL);
    if ( m_p != 0 )
    {
      this->m_pGeneratingEconItem.m_p = 0;
      (*(m_p->_vptr_IEconItemInterface + 2))(m_p);
    }
    if ( nEconItemViewCount > 0 )
    {
      nScratchCount = 0;
      v6 = 0;
      while ( 1 )
      {
        v7 = v6;
        m_pItem = this->m_wearableSpawnList.m_Memory.m_pMemory[v6].m_pItem;
        if ( m_pItem == 0 )
          break;
        v9 = ItemGeneration();
        CItemGeneration::PrecacheItemFromScriptData(v9, m_pItem, pContexta);
        ppModifierList[v6] = this->m_wearableSpawnList.m_Memory.m_pMemory[v6].m_pItem;
        v10 = &this->m_wearableSpawnList.m_Memory.m_pMemory[v7];
        if ( v10->m_bGeneratingEconItem
          && (v11 = v10->m_pItem,
              v12 = operator new(0xD8u),
              CEconItemView::CEconItemView(v12, v11),
              this->m_pGeneratingEconItem.m_p = v12,
              (v13 = CEconItemView::GetSOCData(v12)) == CEconItemView::GetSOCData(this->m_wearableSpawnList.m_Memory.m_pMemory[v6].m_pItem))
          && CEconItemView::GetSOCData(this->m_pGeneratingEconItem.m_p) != 0 )
        {
          SOCData = CEconItemView::GetSOCData(this->m_pGeneratingEconItem.m_p);
          v15 = operator new(0x50u);
          CEconItem::CEconItem(v15, SOCData);
          CEconItemView::SetNonSOEconItem(this->m_pGeneratingEconItem.m_p, v15);
          if ( nEconItemViewCount <= ++v6 )
            goto LABEL_12;
        }
        else
        {
LABEL_6:
          if ( nEconItemViewCount <= ++v6 )
            goto LABEL_12;
        }
      }
      v17 = (*(this->_vptr_IHandleEntity + 413))(this);
      if ( g_pDOTAPlayerResource != 0 && v17 != 0 )
      {
        v18 = (*(*v17 + 3144LL))(v17);
        SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v18);
      }
      else
      {
        SteamAccountID = 0;
      }
      v20 = 3LL * nScratchCount++;
      v21 = 9 * v20;
      v22 = (pScratch + 8 * v21);
      if ( v22 != 0 )
        CEconItemView::CEconItemView((pScratch + 8 * v21));
      CEconItemView::Init(
        v22,
        this->m_wearableSpawnList.m_Memory.m_pMemory[v7].m_nItemDefIndex,
        1,
        4,
        SteamAccountID,
        0,
        INVALID_STYLE_INDEX);
      v23 = ItemGeneration();
      CItemGeneration::PrecacheItemFromScriptData(v23, v22, pContexta);
      ppModifierList[v6] = v22;
      goto LABEL_6;
    }
LABEL_12:
    v16 = ItemGeneration();
    CItemGeneration::BuildAssetModifierContainer(v16, &this->m_AssetModifiers, nEconItemViewCount, ppModifierList);
    CEntityKeyValues::~CEntityKeyValues(&context.m_entityKeyValues);
  }
}


// CDOTA_BaseNPC::OnSpawnWearable  (line 1423, @0x0000000002469fb0, libserver.so)  // inlines: GetSlotIndexBySlotType, GetStaticDataForItemByDefIndex, IsWearableItemVisibleOnGeneratedEntity, SetAlwaysAllow, ToDOTABaseNPCHero
// calls: CEconItemView::GetSOCData, AddEconItemToStringTable, __dynamic_cast, CEconWearable::SelectAutoStyle, CEconItemView::IsBaseItem, CDOTAWearableItem::SetIsGeneratingEconItem, DOTAInventoryManager, CDOTAInventoryManager::IsDemoingHero, CDOTAInventoryManager::GetItemSlotsForHero, ItemSystem, CEconItemSchema::GetItemDefinition
// callers: CDOTA_BaseNPC::SpawnWearables
void __fastcall CDOTA_BaseNPC::OnSpawnWearable(
        CDOTA_BaseNPC *const this,
        CEntitySpawnerContext<CBaseEntity> *pContext,
        CBaseEntity *pItemEntity,
        CEconItemView *pEconItemView,
        item_definition_index_t nItemDefIndex,
        bool bGeneratingEconItem,
        bool bForceVisible)
{
  CEconItem *SOCData; // rax
  CEconWearable *v12; // rax
  CDOTAWearableItem *v13; // r15
  CAutoStyleCriteria *m_pAutoStyleCriteria; // rsi
  char v15; // dl
  CDOTAInventoryManager *v16; // rax
  const CEconItemDefinition *ItemDefinition; // rbx
  int v18; // r13d
  CDOTAInventoryManager *v19; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // rax
  __int64 v21; // rdx
  CEconItemSystem *v22; // rax
  int nHeroID; // [rsp+8h] [rbp-38h]

  if ( pItemEntity != 0 )
  {
    if ( pEconItemView != 0 && CEconItemView::GetSOCData(pEconItemView) != 0 )
    {
      SOCData = CEconItemView::GetSOCData(pEconItemView);
      AddEconItemToStringTable(SOCData);
    }
    v12 = __dynamic_cast(pItemEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAWearableItem, 0);
    v13 = v12;
    if ( v12 != 0 )
    {
      m_pAutoStyleCriteria = this->m_pAutoStyleCriteria;
      if ( m_pAutoStyleCriteria != 0 )
        CEconWearable::SelectAutoStyle(v12, m_pAutoStyleCriteria);
      if ( (this->m_iUnitType & 1) != 0 )
      {
        nHeroID = *(this + 1202);
        v16 = DOTAInventoryManager();
        if ( CDOTAInventoryManager::IsDemoingHero(v16, nHeroID) )
          v13->m_bAlwaysAllow = 1;
      }
      if ( pEconItemView == 0 || CEconItemView::IsBaseItem(pEconItemView) )
        v13->m_bAlwaysAllow = 1;
      if ( bGeneratingEconItem )
      {
        v15 = 1;
        if ( !bForceVisible )
        {
          if ( pEconItemView != 0 )
          {
            ItemDefinition = (*(pEconItemView->_vptr_IEconItemInterface + 12))(pEconItemView, m_pAutoStyleCriteria, 1);
          }
          else
          {
            v22 = ItemSystem();
            ItemDefinition = CEconItemSchema::GetItemDefinition(&v22->m_itemSchema, nItemDefIndex, 0);
          }
          if ( ItemDefinition != 0 && (v18 = (*(ItemDefinition->_vptr_IEconItemDefinition + 9))(ItemDefinition)) >= 0 )
          {
            v19 = DOTAInventoryManager();
            ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v19, v18);
            v21 = 0;
            while ( LODWORD(ItemDefinition[1].m_pKVItem) != ItemSlotsForHero->m_nSlotTypes[v21] )
            {
              if ( ++v21 == 16 )
                goto LABEL_26;
            }
            v15 = ItemSlotsForHero->m_bIsVisibleOnGeneratedUnits[v21];
          }
          else
          {
LABEL_26:
            v15 = 0;
          }
        }
        CDOTAWearableItem::SetIsGeneratingEconItem(v13, 1, v15);
      }
      (*(v13->_vptr_IHandleEntity + 262))(v13, this);
    }
  }
}


// CDOTA_BaseNPC::SpawnWearables  (line 1480, @0x0000000002488660, libserver.so)  // inlines: AssignTo, Base, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, Element, FastDelegate2, FindKeyHash, FreeWearableSpawnListInternal, GetSpawnGroupHandle, GetValue, GetValue<bool>, Purge, _V_strcmp, operator[], ~CEntitySpawnerContext, ~CEntitySpawnerContextBase
// calls: CEntityKeyValues::CEntityKeyValues, CDOTA_BaseNPC::BuildWearableSpawnListInternal, CEntityKeyValues::GetValueString, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, ItemGeneration, CItemGeneration::GenerateItemFromScriptData, CDOTA_BaseNPC::OnSpawnWearable, CDOTA_PlayerResource::GetSteamAccountID, CEconItemView::CEconItemView, CEconItemView::Init, CEconItemView::~CEconItemView (20 total)
// callers: CDOTA_BaseNPC::Spawn
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_2488716, CEntityKeyValues::sm_EmptyVariant, INVALID_STYLE_INDEX
void __fastcall CDOTA_BaseNPC::SpawnWearables(CDOTA_BaseNPC *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  const char *ValueString; // r13
  int m_Size; // eax
  unsigned __int64 v13; // r12
  SpawnGroupHandle_t hSpawnGroup; // r15d
  const QAngle *AbsAngles; // r14
  CItemGeneration *v16; // rax
  CBaseEntity *v17; // rdx
  CEntityIdentity *m_pEntity; // rax
  __int64 v19; // rax
  int v20; // eax
  AccountID_t SteamAccountID; // r14d
  CEntityIdentity *v22; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // r14d
  const QAngle *v24; // r15
  CItemGeneration *v25; // rax
  char m_char; // al
  const char *v27; // rax
  __int64 v28; // [rsp+10h] [rbp-1D0h]
  CEconItemView *pData; // [rsp+18h] [rbp-1C8h]
  const Vector *pItemWearable; // [rsp+20h] [rbp-1C0h]
  const Vector *pItemWearablea; // [rsp+20h] [rbp-1C0h]
  CDOTAWearableItem *pItemWearableb; // [rsp+20h] [rbp-1C0h]
  CEconItemView econItemView; // [rsp+30h] [rbp-1B0h] BYREF
  CEntitySpawnerContext<CBaseEntity> context; // [rsp+110h] [rbp-D0h] BYREF
  unsigned __int64 v35; // [rsp+1A8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v4 = 0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    do
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[v4] == 1526165316 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v8 = pKeyValues->m_keyValues.m_pElements;
          else
            v8 = 0;
          p_m_value = &v8[v4].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
LABEL_14:
          CEntityKeyValues::CEntityKeyValues(&context.m_entityKeyValues);
          context.m_pParent = 0;
          memset(&context.m_callback, 0, sizeof(context.m_callback));
          CDOTA_BaseNPC::BuildWearableSpawnListInternal(this, pKeyValues, &context);
          ValueString = CEntityKeyValues::GetValueString(pKeyValues, 5549773, 0);
          m_Size = this->m_wearableSpawnList.m_Size;
          if ( m_Size > 0 )
          {
            v13 = 0;
            v28 = 16 * ((m_Size - 1) + 1LL);
            do
            {
              if ( this->m_wearableSpawnList.m_Memory.m_pMemory[v13 / 0x10].m_pItem != 0 )
              {
                m_pEntity = this->m_pEntity;
                if ( m_pEntity != 0 )
                  hSpawnGroup = m_pEntity->m_hSpawnGroup;
                else
                  hSpawnGroup = 0;
                AbsAngles = CBaseEntity::GetAbsAngles(this);
                pItemWearable = CBaseEntity::GetAbsOrigin(this);
                pData = this->m_wearableSpawnList.m_Memory.m_pMemory[v13 / 0x10].m_pItem;
                v16 = ItemGeneration();
                v17 = CItemGeneration::GenerateItemFromScriptData(
                        v16,
                        pData,
                        pItemWearable,
                        AbsAngles,
                        ValueString,
                        &context,
                        hSpawnGroup);
              }
              else
              {
                v19 = (*(this->_vptr_IHandleEntity + 413))(this);
                if ( g_pDOTAPlayerResource != 0 && v19 != 0 )
                {
                  v20 = (*(*v19 + 3144LL))(v19);
                  SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v20);
                }
                else
                {
                  SteamAccountID = 0;
                }
                CEconItemView::CEconItemView(&econItemView);
                CEconItemView::Init(
                  &econItemView,
                  this->m_wearableSpawnList.m_Memory.m_pMemory[v13 / 0x10].m_nItemDefIndex,
                  1,
                  4,
                  SteamAccountID,
                  0,
                  INVALID_STYLE_INDEX);
                v22 = this->m_pEntity;
                if ( v22 != 0 )
                  m_hSpawnGroup = v22->m_hSpawnGroup;
                else
                  m_hSpawnGroup = 0;
                v24 = CBaseEntity::GetAbsAngles(this);
                pItemWearablea = CBaseEntity::GetAbsOrigin(this);
                v25 = ItemGeneration();
                pItemWearableb = CItemGeneration::GenerateItemFromScriptData(
                                   v25,
                                   &econItemView,
                                   pItemWearablea,
                                   v24,
                                   0,
                                   &context,
                                   m_hSpawnGroup);
                CEconItemView::~CEconItemView(&econItemView);
                v17 = pItemWearableb;
              }
              CDOTA_BaseNPC::OnSpawnWearable(
                this,
                &context,
                v17,
                this->m_wearableSpawnList.m_Memory.m_pMemory[v13 / 0x10].m_pItem,
                this->m_wearableSpawnList.m_Memory.m_pMemory[v13 / 0x10].m_nItemDefIndex,
                this->m_wearableSpawnList.m_Memory.m_pMemory[v13 / 0x10].m_bGeneratingEconItem,
                ValueString != 0);
              v13 += 16LL;
            }
            while ( v13 != v28 );
          }
          CDOTA_BaseNPC::UpdateAssetModifiers(this);
          CUtlVectorBase<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int>>::RemoveAll(&this->m_wearableSpawnList);
          CUtlMemory<WearableSpawnInfo_t,int>::Purge(&this->m_wearableSpawnList.m_Memory);
          CEntityKeyValues::~CEntityKeyValues(&context.m_entityKeyValues);
          return;
        }
      }
      else if ( *(4 * v4) == 1526165316 )
      {
        goto LABEL_9;
      }
      ++v4;
    }
    while ( m_nCount > v4 );
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type == 0 )
    goto LABEL_14;
LABEL_12:
  switch ( m_type )
  {
    case 1:
      m_char = p_m_value->m_float != 0.0;
      goto LABEL_32;
    case 5:
    case 37:
      m_char = p_m_value->m_int != 0;
      goto LABEL_32;
    case 6:
      m_char = p_m_value->m_char;
      goto LABEL_32;
    case 26:
    case 33:
      m_char = p_m_value->m_uint64 != 0;
      goto LABEL_32;
    case 30:
      if ( strcmp(p_m_value->m_pszString, "0") == 0
        || strcmp(p_m_value->m_pszString, "false") == 0
        || strcmp(p_m_value->m_pszString, "no") == 0 )
      {
        goto LABEL_14;
      }
      if ( strcmp(p_m_value->m_pszString, "1") == 0
        || strcmp(p_m_value->m_pszString, "true") == 0
        || strcmp(p_m_value->m_pszString, "yes") == 0 )
      {
        goto LABEL_33;
      }
      Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_pszString);
      goto LABEL_14;
    case 34:
      m_char = p_m_value->m_float64 != 0.0;
LABEL_32:
      if ( m_char == 0 )
        goto LABEL_14;
LABEL_33:
      CUtlVectorBase<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int>>::RemoveAll(&this->m_wearableSpawnList);
      CUtlMemory<WearableSpawnInfo_t,int>::Purge(&this->m_wearableSpawnList.m_Memory);
      break;
    default:
      v27 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v27);
      goto LABEL_14;
  }
}


// CDOTA_BaseNPC::UpdateAssetModifiers  (line 1540, @0x000000000246a180, libserver.so)  // inlines: Attach, Delete, Detach, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CAssetModifierContainer::PurgeAndDeleteElements, __dynamic_cast, CDOTAWearableItem::IsGeneratingEconItem, operator new, CEconItemView::CEconItemView, CEconItemView::GetSOCData, CAssetModifierContainer::CopyAssetModifiers, CEconItem::CEconItem, CEconItemView::SetNonSOEconItem, operator delete, _Unwind_Resume
// callers: CDOTA_BaseNPC::SetStyleOverride, CDOTA_BaseNPC::SetAutoStyleCriteria, CDOTA_BaseNPC::SpawnWearables, CDOTA_Unit_Courier::AddCourierWearables
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::UpdateAssetModifiers(CDOTA_BaseNPC *const this)
{
  CEconItemView *m_p; // rdi
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  CHandle<CEconWearable> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r15
  const CAssetModifierContainer *v11; // r12
  const CEconItemView *p_m_Root; // r14
  const CDOTAWearableItem *v13; // rax
  CEconItemView *v14; // r15
  CEconItem *SOCData; // r15
  CEconItem *v16; // r15
  CEconItem *v17; // r14
  CAssetModifierContainer *p_m_AssetModifiers; // [rsp+0h] [rbp-40h]
  __int64 v19; // [rsp+8h] [rbp-38h]

  p_m_AssetModifiers = &this->m_AssetModifiers;
  CAssetModifierContainer::PurgeAndDeleteElements(&this->m_AssetModifiers);
  m_p = this->m_pGeneratingEconItem.m_p;
  if ( m_p != 0 )
  {
    this->m_pGeneratingEconItem.m_p = 0;
    (*(m_p->_vptr_IEconItemInterface + 2))(m_p);
  }
  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v19 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v5 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v4 / 4];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 )
              {
                v11 = (*(m_pInstance->_vptr_IHandleEntity + 265))(v9->m_pInstance);
                p_m_Root = &v11[2].m_mapAssetModifiers.m_Tree.m_Root;
                if ( v11 != -104LL )
                  break;
              }
            }
          }
        }
        v4 += 4LL;
        if ( v4 == v19 )
          goto LABEL_16;
      }
      v13 = __dynamic_cast(m_pInstance, &`typeinfo for'CEconWearable, &`typeinfo for'CDOTAWearableItem, 0);
      if ( v13 != 0 && CDOTAWearableItem::IsGeneratingEconItem(v13) )
      {
        v14 = operator new(0xD8u);
        CEconItemView::CEconItemView(v14, p_m_Root);
        this->m_pGeneratingEconItem.m_p = v14;
        SOCData = CEconItemView::GetSOCData(v14);
        if ( SOCData == CEconItemView::GetSOCData(p_m_Root)
          && CEconItemView::GetSOCData(this->m_pGeneratingEconItem.m_p) != 0 )
        {
          v16 = CEconItemView::GetSOCData(this->m_pGeneratingEconItem.m_p);
          v17 = operator new(0x50u);
          CEconItem::CEconItem(v17, v16);
          CEconItemView::SetNonSOEconItem(this->m_pGeneratingEconItem.m_p, v17);
        }
      }
      v4 += 4LL;
      CAssetModifierContainer::CopyAssetModifiers(p_m_AssetModifiers, v11 + 7, 0, -1);
    }
    while ( v4 != v19 );
  }
LABEL_16:
  (*(this->_vptr_IHandleEntity + 482))(this);
}


// CDOTA_BaseNPC::OnAssetModifiersUpdated  (line 1586, @0x00000000024826e0, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CArcanaLevelModifier>, GetAssetModifiers<CDOTA_BaseNPC, CArcanaLevelModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CArcanaLevelModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_BaseNPC::ComputeColorGemValue
// callers: CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated, CDOTA_Unit_Courier::OnAssetModifiersUpdated
void __fastcall CDOTA_BaseNPC::OnAssetModifiersUpdated(CDOTA_BaseNPC *const this)
{
  unsigned __int16 v2; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v3; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdi
  __int64 v5; // rdx
  int v6; // eax
  const CAssetModifier *v7; // rcx
  int v8; // ecx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  this->m_nArcanaLevel = this->m_nDefaultArcanaLevel;
  search.key.m_nType = CArcanaLevelModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v2 < this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v2 <= this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v2 != 0xFFFF )
  {
    v3 = &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v2];
    if ( v2 != v3->m_Left )
    {
      elem = v3->m_Data.elem;
      if ( elem != 0 && elem->m_Size > 0 )
      {
        v5 = 0;
        v6 = 0;
        do
        {
          v7 = elem->m_Memory.m_pMemory[v5];
          if ( v7 != 0 )
          {
            v8 = *(&v7->m_nPriority + 1);
            if ( this->m_nArcanaLevel > v8 )
              LOBYTE(v8) = this->m_nArcanaLevel;
            this->m_nArcanaLevel = v8;
          }
          ++v6;
          ++v5;
        }
        while ( elem->m_Size > v6 );
      }
    }
  }
  CDOTA_BaseNPC::ApplyWearableModifiers(this);
  CDOTA_BaseNPC::ComputeColorGemValue(this, &this->m_colorGemColor);
}


// CDOTA_BaseNPC::DuplicateAssetModifiers  (line 1663, @0x000000000246a480, libserver.so)
// calls: CAssetModifierContainer::PurgeAndDeleteElements, CAssetModifierContainer::CopyAssetModifiers
// callers: OnCreateIllusionsSpawnCompletion
void __fastcall CDOTA_BaseNPC::DuplicateAssetModifiers(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pNPC)
{
  CAssetModifierContainer *p_m_AssetModifiers; // r13

  if ( pNPC != 0 )
  {
    p_m_AssetModifiers = &this->m_AssetModifiers;
    CAssetModifierContainer::PurgeAndDeleteElements(&this->m_AssetModifiers);
    CAssetModifierContainer::CopyAssetModifiers(p_m_AssetModifiers, &pNPC->m_AssetModifiers, 0, -1);
    (*(this->_vptr_IHandleEntity + 482))(this);
  }
}


// CDOTA_BaseNPC::GetAutoattackUnitType  (line 1675, @0x000000000246a4f0, libserver.so)  // inlines: IsHero
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_BaseNPC::Spawn
AutoattackUnitType_t __fastcall CDOTA_BaseNPC::GetAutoattackUnitType(CDOTA_BaseNPC *const this)
{
  AutoattackUnitType_t result; // eax

  result = AutoattackUnitType_t::AUTO_ATTACK_UNIT_SUMMONED;
  if ( !this->m_bIsSummoned.m_Value && !this->m_bIsIllusion.m_Value )
    return !(this->m_iUnitType & 1);
  return result;
}


// CDOTA_BaseNPC::BuildAttachedParticleFilter  (line 1683, @0x000000000246a520, libserver.so)  // inlines: GetUnitName, String, ToCStr
// calls: CUtlString::operator=
// callers: CDOTA_Unit_Courier::BuildAttachedParticleFilter, CDOTA_Unit_Hero_MonkeyKing::BuildAttachedParticleFilter
void __fastcall CDOTA_BaseNPC::BuildAttachedParticleFilter(
        CDOTA_BaseNPC *const this,
        AttachedParticleFilter_t *pFilter)
{
  const char *m_pAsString; // rsi
  unsigned __int8 m_Value; // al

  m_pAsString = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  CUtlString::operator=(&pFilter->m_unitName, m_pAsString);
  m_Value = this->m_iTeamNum.m_Value;
  if ( m_Value == 2 )
    pFilter->m_nTeamType = AttachedParticleTeam_t::ATTACHED_PARTICLE_TEAM_RADIANT;
  else
    pFilter->m_nTeamType = 2 * (m_Value == 3);
}


// CDOTA_BaseNPC::HasModifiedAbilityParticleName  (line 1697, @0x00000000024827b0, libserver.so)
// calls: FindAssetModifier<CDOTA_BaseNPC, CParticleModifier>
// callers: CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnAttackLanded, CDOTA_Modifier_Furion_WrathOfNature_Spawn::OnDestroy
bool __fastcall CDOTA_BaseNPC::HasModifiedAbilityParticleName(CDOTA_BaseNPC *const this, const char *pszEffectName)
{
  return FindAssetModifier<CDOTA_BaseNPC,CParticleModifier>(this, pszEffectName) != 0;
}


// CDOTA_BaseNPC::GetModifiedAbilityParticleName  (line 1704, @0x00000000024827d0, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CDOTA_BaseNPC, CParticleCombined>, GetAssetModifiers<CParticleCombined>, GetModifier, GetReplacementName, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: FindAssetModifier<CDOTA_BaseNPC, CParticleModifier>, CUtlString::Get, CParticleCombined::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_ParticleManager::GetParticleReplacement, CDOTA_Modifier_Kunkka_Tidebringer::OnAttackLanded, CDOTA_Ability_Kunkka_GhostShip::OnSpellStart, CDOTA_Ability_Puck_IllusoryOrb::OnSpellStart, CDOTA_Ability_Shredder_Chakram::OnSpellStart, CDOTA_NPC_Observer_Ward::Precache
const char *__fastcall CDOTA_BaseNPC::GetModifiedAbilityParticleName(
        CDOTA_BaseNPC *const this,
        const char *pszEffectName)
{
  const char *v3; // rbx
  const CParticleModifier *Asset; // rax
  unsigned __int16 v5; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v7; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r12
  __int64 v9; // r13
  int v10; // r15d
  const CAssetModifier *v11; // r14
  CAssetModifierContainer *p_m_AssetModifiers; // [rsp+0h] [rbp-60h]
  int v14; // [rsp+1Ch] [rbp-44h]
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v15; // [rsp+20h] [rbp-40h] BYREF

  v3 = pszEffectName;
  Asset = FindAssetModifier<CDOTA_BaseNPC,CParticleModifier>(this, pszEffectName);
  if ( Asset != 0 )
  {
    v14 = 0;
    v3 = CUtlString::Get(&Asset->m_strModifier);
    p_m_AssetModifiers = &this->m_AssetModifiers;
    while ( this != 0 )
    {
      v15.key.m_nType = CParticleCombined::StaticType();
      v5 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
             &p_m_AssetModifiers->m_mapAssetModifiers.m_Tree,
             &v15);
      if ( v5 >= this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
        break;
      if ( v5 > this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
        break;
      if ( v5 == 0xFFFF )
        break;
      v7 = &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v5];
      if ( v5 == v7->m_Left )
        break;
      elem = v7->m_Data.elem;
      if ( elem == 0 || elem->m_Size <= 0 )
        break;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v11 = elem->m_Memory.m_pMemory[v9];
        if ( (*(v11->_vptr_CAssetModifier + 6))(v11, v3) != 0 && HIDWORD(v11[1]._vptr_CAssetModifier) == v14 )
          break;
        ++v10;
        ++v9;
        if ( elem->m_Size <= v10 )
          return v3;
      }
      ++v14;
      v3 = CUtlString::Get(&v11->m_strModifier);
    }
  }
  return v3;
}


// CDOTA_BaseNPC::ShowAmbientParticles  (line 1739, @0x000000000246a580, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CEconEntity::ShowAmbientParticles
// callers: CDOTABehaviorPet::StartEmote
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::ShowAmbientParticles(CDOTA_BaseNPC *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CHandle<CEconWearable> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v5 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v3 / 4];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
              break;
          }
        }
        v3 += 4LL;
        if ( v3 == v4 )
          return;
      }
      CEconEntity::ShowAmbientParticles(v9->m_pInstance);
      v3 += 4LL;
    }
    while ( v3 != v4 );
  }
}


// CDOTA_BaseNPC::HideAmbientParticles  (line 1754, @0x000000000246a630, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CEconEntity::HideAmbientParticles
// callers: CDOTABehaviorPet::FinishEmote
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::HideAmbientParticles(CDOTA_BaseNPC *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CHandle<CEconWearable> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_Size = this->m_hMyWearables.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v5 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v3 / 4];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
              break;
          }
        }
        v3 += 4LL;
        if ( v3 == v4 )
          return;
      }
      CEconEntity::HideAmbientParticles(v9->m_pInstance);
      v3 += 4LL;
    }
    while ( v3 != v4 );
  }
}


// CDOTA_BaseNPC::ComputeColorGemValue  (line 1773, @0x000000000246a6e0, libserver.so)  // inlines: CEntityHandle, CSocketIterator, CSocketPair, Get, GetEntityIdentity, GetEntryIndex, GetFirstSocket<CItemSocket_Color>, GetHandleEntity, GetInstance, GetItemIndex, GetOwnerEntity, GetRawColor, GetSerialNumber, GetSocket, GetWearable, IndexToIdentity, Init, IsValid, LookupEntity, SetColor, SetRawColor, TSocketIterator, operator CEconWearable*, operator CEntityInstance*, operator=, operator[]
// calls: CSocketIterator::GetSocket, CItemSocket_Color::GetColor, __dynamic_cast
// callers: CDOTA_BaseNPC::OnAssetModifiersUpdated
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::ComputeColorGemValue(CDOTA_BaseNPC *const this, Color *pColor)
{
  __int64 v3; // r12
  int v4; // r13d
  CHandle<CEconWearable> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rax
  __int16 v11; // ax
  CSocketIterator *m_Sockets; // rdx
  IItemSocket *Socket; // rax
  unsigned __int16 v14; // dx
  int v15; // esi
  uint32 v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *v19; // rax
  __int64 v21; // [rsp+10h] [rbp-100h]
  __int64 v22; // [rsp+18h] [rbp-F8h]
  CSocketIterator v23; // [rsp+20h] [rbp-F0h] BYREF

  while ( 1 )
  {
    v3 = 0;
    v4 = 0;
    if ( this->m_hMyWearables.m_Vector.m_Size > 0 )
      break;
LABEL_18:
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v14 = 0x7FFF;
      v15 = 0x7FFF;
    }
    else
    {
      v14 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v15 = v14;
    }
    v16 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
    LODWORD(v23._vptr_IEconItemAttributeIterator) = v16;
    if ( v16 + 2 <= 1
      || (v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9]) == 0
      || (v18 = &v17[v15 & 0x1FF]) == 0
      || v16 != v18->m_EHandle.m_Index
      || v18->m_pInstance == 0
      || (v19 = __dynamic_cast(v18->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0)) == 0 )
    {
      *pColor = this->m_defaultColorGemColor;
      return;
    }
    this = v19;
  }
  while ( 1 )
  {
    v5 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v3];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 <= 1 )
      goto LABEL_3;
    v7 = v5->m_Index;
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
    if ( v8 == 0 )
      goto LABEL_3;
    v9 = &v8[v7 & 0x1FF];
    if ( v9 == 0 )
      goto LABEL_3;
    if ( m_Index != v9->m_EHandle.m_Index )
      goto LABEL_3;
    if ( v9->m_pInstance == 0 )
      goto LABEL_3;
    v10 = (*(v9->m_pInstance->_vptr_IHandleEntity + 265))(v9->m_pInstance);
    if ( v10 == -104 )
      goto LABEL_3;
    v21 = v10;
    v22 = v10 + 104;
    if ( (*(*(v10 + 104) + 112LL))(v10 + 104) == 0 )
      break;
LABEL_13:
    m_Sockets = v23.m_Sockets;
    do
    {
      m_Sockets->_vptr_IEconItemAttributeIterator = 0;
      m_Sockets = (m_Sockets + 16);
      *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
    }
    while ( m_Sockets != &v23.m_nSocketCount );
    v23.m_nSocketCount = 0;
    v23.m_nGemCount = 0;
    v23.m_unAttribStorageTypeFlags = 1;
    v23._vptr_IEconItemAttributeIterator = off_40EE3D0;
    (*(*(v21 + 104) + 224LL))(v22, &v23);
    if ( v23.m_nGemCount > 0 )
    {
      Socket = CSocketIterator::GetSocket(&v23, 0);
      if ( Socket != 0 )
      {
        *pColor = CItemSocket_Color::GetColor(Socket);
        return;
      }
    }
LABEL_3:
    ++v4;
    ++v3;
    if ( v4 >= this->m_hMyWearables.m_Vector.m_Size )
      goto LABEL_18;
  }
  v11 = *(v21 + 112);
  if ( v11 != 5957 )
  {
    if ( v11 == 6879 )
    {
      pColor->_color[0] = -1;
      pColor->_color[1] = -81;
      pColor->_color[2] = 0;
      pColor->_color[3] = -1;
      return;
    }
    goto LABEL_13;
  }
  pColor->_color[0] = -1;
  pColor->_color[1] = 60;
  pColor->_color[2] = 40;
  pColor->_color[3] = -1;
}


// CDOTA_BaseNPC::RecreateAmbientParticles  (line 1833, @0x000000000246a9b0, libserver.so)
void __fastcall CDOTA_BaseNPC::RecreateAmbientParticles(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::SetForceDisableParticles  (line 1850, @0x000000000246a9c0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetForceDisableParticles(CDOTA_BaseNPC *const this, bool bForceDisable)
{
  ;
}


// CDOTA_BaseNPC::ModifyEconParticles  (line 1868, @0x000000000246a9d0, libserver.so)  // inlines: AsUint32, Vector
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CDOTA_BaseNPC::ModifyEconParticles(CDOTA_BaseNPC *const this, int iIndex, Color *pDefaultColor)
{
  Color m_colorGemColor; // eax
  Color v5; // edx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v7; // rax
  Vector v8; // [rsp+0h] [rbp-20h]
  Vector v9; // [rsp+0h] [rbp-20h]

  m_colorGemColor = this->m_colorGemColor;
  if ( pDefaultColor != 0 )
    v5 = *pDefaultColor;
  else
    v5 = 0;
  if ( v5 == m_colorGemColor )
  {
    v9.x = 0.0;
  }
  else
  {
    v8.z = m_colorGemColor._color[2];
    v8.y = m_colorGemColor._color[1];
    v8.x = m_colorGemColor._color[0];
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, iIndex, 15, v8);
    v9.x = 1.0;
  }
  *&v9.y = 0;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, iIndex, 16, v9);
}


// CDOTA_BaseNPC::ModifyOrAppendCriteria  (line 1885, @0x0000000002482900, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAsset, GetAssetModifiers<CDOTA_BaseNPC, CResponseCriteriaModifier>, GetAssetModifiers<CResponseCriteriaModifier>, GetCriteriaName, GetCriteriaValue, GetModifier, GetUnitName, IsIdxValid, IsValidIndex, LeftChild, String, ToCStr, V_isempty, operator[]
// calls: CBaseEntity::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria, CResponseCriteriaModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::Get
// callers: CDOTA_BaseNPC_Creep_Talking::ModifyOrAppendCriteria, CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_Unit_SpiritBear::ModifyOrAppendCriteria
// strings: "customresponse"
void __fastcall CDOTA_BaseNPC::ModifyOrAppendCriteria(CDOTA_BaseNPC *const this, CResponseCriteriaSet *const set)
{
  const char *m_pAsString; // rdx
  unsigned __int16 v5; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r14
  unsigned __int64 v8; // r12
  const CUtlString *v9; // r15
  const char *v10; // rax
  const char *v11; // rbx
  const char *v12; // rax
  __int64 v13; // [rsp+8h] [rbp-48h]
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  CBaseEntity::ModifyOrAppendCriteria(this, set);
  m_pAsString = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  CResponseCriteriaSet::AppendCriteria(set, "unitname", m_pAsString, 1.0);
  search.key.m_nType = CResponseCriteriaModifier::StaticType();
  v5 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v5 < this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v5 <= this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v5 != 0xFFFF )
  {
    v6 = &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v5];
    if ( v5 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size > 0 )
      {
        v8 = 0;
        v13 = 8LL * (elem->m_Size - 1) + 8;
        do
        {
          v9 = elem->m_Memory.m_pMemory[v8 / 8];
          v10 = CUtlString::Get(v9 + 2);
          v11 = v10;
          if ( v10 == 0 || *v10 == 0 )
            v11 = "customresponse";
          v8 += 8LL;
          v12 = CUtlString::Get(v9 + 1);
          CResponseCriteriaSet::AppendCriteria(set, v11, v12, 1.0);
        }
        while ( v8 != v13 );
      }
    }
  }
}


// CDOTA_BaseNPC_Creep_Talking::ModifyOrAppendCriteria  (line 1906, @0x0000000002482a30, libserver.so)  // inlines: CEntityHandle, Get, GetClassNameAsCStr, GetClassname, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetParentTalkName, GetSerialNumber, IndexToIdentity, Init, LookupEntity, String
// calls: CDOTA_BaseNPC::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria, CResponseCriteriaSet::Reset
// strings: "beastname"
void __fastcall CDOTA_BaseNPC_Creep_Talking::ModifyOrAppendCriteria(
        CDOTA_BaseNPC_Creep_Talking *const this,
        CResponseCriteriaSet *const set)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const char *m_pAsString; // rdx
  const char *v10; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rax

  CDOTA_BaseNPC::ModifyOrAppendCriteria(this, set);
  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    if ( v6 + 2 > 1
      && (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
      && (v8 = &v7[v5 & 0x1FF]) != 0
      && v6 == v8->m_EHandle.m_Index )
    {
      m_pInstance = v8->m_pInstance;
      m_pAsString = "none";
      if ( m_pInstance != 0 )
      {
        m_pEntity = m_pInstance->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      }
    }
    else
    {
      m_pAsString = "none";
    }
    CResponseCriteriaSet::AppendCriteria(set, "classname", m_pAsString, 1.0);
    v10 = (*(this->_vptr_IHandleEntity + 490))(this);
    CResponseCriteriaSet::AppendCriteria(set, "beastname", v10, 1.0);
  }
  else
  {
    CResponseCriteriaSet::Reset(set);
  }
}


// CDOTA_BaseNPC::GetAbilityByIndex  (line 1921, @0x000000000246aa90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: dota_ability_dump_refcounts, CDOTA_ActionRunner::PerformAction_RemoveAbility, CDOTA_ActionRunner::PerformAction_AddAbility, CDOTA_ActionRunner::PerformAction_SpawnUnit, CDOTAGamerules::ClientMsg_SpecialAbility, OnDemoHeroSpawnComplete, CDOTA_NPC_DataDriven::Spawn, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart, CDOTAPlayer::CheatHeroRefresh, CDOTA_PlayerResource::OnHeroReplaced, HeroRefresh, HeroMaxLevel (108 total)
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_BaseNPC::GetAbilityByIndex(CDOTA_BaseNPC *const this, int i)
{
  CDOTABaseAbility *result; // rax
  CHandle<CBaseEntity> *v3; // rcx
  uint32 m_Index; // edx
  __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  result = 0;
  v3 = &this->m_hAbilities.m_Value[i];
  m_Index = v3->m_Index;
  if ( v3->m_Index + 2 > 1 )
  {
    v5 = v3->m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        return v7->m_pInstance;
    }
  }
  return result;
}


// CDOTA_BaseNPC::HasInvisibilityBuff  (line 1926, @0x000000000246ab00, libserver.so)  // inlines: CDOTABuffState
// calls: CDOTA_ModifierManager::GetBuffByIndex
// callers: CDOTA_Modifier_TrueSight::OnCreated, CDOTABehaviorPet::Update_CheckNeedsToVanish, CDOTABehaviorPet::UpdateEmoting, CDOTABehaviorPet::RecalculateThreat, CDOTA_Modifier_GlimmerCape_Fade::GetModifierMagicalResistanceBonus, CDOTA_Modifier_Item_DustofAppearance::GetModifierMoveSpeedBonus_Percentage, CDOTA_Modifier_Item_DustofAppearance::HasInvisibilityBuff, CDOTA_Modifier_Item_DustofAppearance::OnCreated
bool __fastcall CDOTA_BaseNPC::HasInvisibilityBuff(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r13
  int v3; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTABuffState buffState; // [rsp+0h] [rbp-30h] BYREF

  p_m_ModifierManager = &this->m_ModifierManager;
  v3 = 0;
  if ( this->m_ModifierManager.m_bufflist.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v3, 0);
    if ( BuffByIndex != 0 )
    {
      buffState.m_nEnabledStateMask = 0;
      buffState.m_nDisabledStateMask = 0;
      (*(BuffByIndex->_vptr_CDOTA_Buff + 5))(BuffByIndex, &buffState);
      if ( SLOBYTE(buffState.m_nEnabledStateMask) < 0 )
        break;
    }
    if ( ++v3 >= this->m_ModifierManager.m_bufflist.m_Size )
      return 0;
  }
  return 1;
}


// CDOTA_BaseNPC::Script_HasModifier  (line 1945, @0x000000000246aba0, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
bool __fastcall CDOTA_BaseNPC::Script_HasModifier(CDOTA_BaseNPC *const this, const char *pszScriptName)
{
  return CDOTA_BaseNPC::FindModifierByName(this, pszScriptName, 0) != 0;
}


// CDOTA_BaseNPC::Script_GetModifierStackCount  (line 1950, @0x000000000246abc0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC::FindModifierByName
int __fastcall CDOTA_BaseNPC::Script_GetModifierStackCount(
        CDOTA_BaseNPC *const this,
        const char *pszScriptName,
        HSCRIPT hCaster)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v8; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( hCaster != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hCaster, Script)) != 0)
    && v8->m_bIsDOTANPC )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, pszScriptName, v8);
    if ( ModifierByName != 0 )
      return (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
  }
  else
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, pszScriptName, 0);
    if ( ModifierByName != 0 )
      return (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
  }
  return 0;
}


// CDOTA_BaseNPC::LoadVoiceFile  (line 1960, @0x000000000246ac70, libserver.so)
// calls: PrecacheGameSoundsFile, SoundSystemPreloadSounds
// callers: CDOTA_Unit_Announcer::Precache
void __fastcall CDOTA_BaseNPC::LoadVoiceFile(
        CDOTA_BaseNPC *const this,
        const char *pszFileName,
        const CEntityPrecacheContext *pContext)
{
  if ( pszFileName != 0 )
  {
    PrecacheGameSoundsFile(pszFileName, pContext, 0);
    SoundSystemPreloadSounds();
  }
}


// CDOTA_BaseNPC::HandleAnimEvent  (line 2003, @0x000000000246aca0, libserver.so)  // inlines: atoi
// calls: NextBotCombatCharacter::HandleAnimEvent, strtol, CDOTAAnimState::SuppressConstantLayer
// callers: CDOTA_BaseNPC_Pet::HandleAnimEvent, CDOTA_Unit_Hero_PhantomLancer::HandleAnimEvent
// globals: AE_DOTA_SUPPRESS_CONSTANT_LAYER
void __fastcall CDOTA_BaseNPC::HandleAnimEvent(CDOTA_BaseNPC *const this, animevent_t *pEvent)
{
  int v4; // eax

  if ( pEvent->event == AE_DOTA_SUPPRESS_CONSTANT_LAYER.m_Data )
  {
    v4 = strtol(pEvent->options, 0, 10);
    CDOTAAnimState::SuppressConstantLayer(this->m_pAnimState, v4 != 0, pEvent->m_nOrder);
  }
  else
  {
    NextBotCombatCharacter::HandleAnimEvent(this, pEvent);
  }
}


// CDOTA_BaseNPC::HasSpecialAbility  (line 2054, @0x000000000246acf0, libserver.so)
// callers: OnCreateIllusionsSpawnCompletion, CDOTA_Ability_Meepo_DividedWeStand::OnAbilityUpgrade, CDOTA_Ability_ArcWarden_TempestDouble::OnSpellStart
bool __fastcall CDOTA_BaseNPC::HasSpecialAbility(CDOTA_BaseNPC *const this, int iState)
{
  _BOOL4 v2; // eax

  switch ( iState )
  {
    case 1:
      return this->m_iSpecialAbility.m_Value & 1;
    case 2:
      LOBYTE(v2) = (this->m_iSpecialAbility.m_Value & 2) != 0;
      break;
    case 3:
      LOBYTE(v2) = (this->m_iSpecialAbility.m_Value & 4) != 0;
      break;
    case 4:
      LOBYTE(v2) = (this->m_iSpecialAbility.m_Value & 8) != 0;
      break;
    case 5:
      LOBYTE(v2) = (this->m_iSpecialAbility.m_Value & 0x10) != 0;
      break;
    case 6:
      LOBYTE(v2) = (this->m_iSpecialAbility.m_Value & 0x20) != 0;
      break;
    case 7:
      LOBYTE(v2) = (this->m_iSpecialAbility.m_Value & 0x40) != 0;
      break;
    default:
      LOBYTE(v2) = 0;
      if ( iState == 8 )
        LOBYTE(v2) = (this->m_iSpecialAbility.m_Value & 0x80) != 0;
      break;
  }
  return v2;
}


// CDOTA_BaseNPC::GetSpecialAbilityIndex  (line 2084, @0x000000000246adb0, libserver.so)  // inlines: Get, GetAbilityByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC::GetSpecialAbilityIndex(CDOTA_BaseNPC *const this, CDOTABaseAbility *pAbility)
{
  int v3; // r13d
  int v4; // r12d
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // rbx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTABaseAbility *m_pInstance; // r15

  v3 = 0;
  v4 = 24;
  p_m_hAbilities = &this->m_hAbilities;
  do
  {
    if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
        if ( v7 != 0 && p_m_hAbilities->m_Value[0].m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 214))(m_pInstance) == 2 )
          {
            ++v3;
            if ( pAbility == m_pInstance )
              return v3;
          }
        }
      }
    }
    p_m_hAbilities = (p_m_hAbilities + 4);
    --v4;
  }
  while ( v4 != 0 );
  return -1;
}


// CDOTA_BaseNPC::GetSpecialAbility  (line 2101, @0x000000000246ae80, libserver.so)  // inlines: Get, GetAbilityByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_BaseNPC::GetSpecialAbility(CDOTA_BaseNPC *const this, int nIndex)
{
  int v3; // r13d
  int v4; // r12d
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // rbx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTABaseAbility *m_pInstance; // r15

  v3 = 0;
  v4 = 24;
  p_m_hAbilities = &this->m_hAbilities;
  do
  {
    if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
        if ( v7 != 0 && p_m_hAbilities->m_Value[0].m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && (*(m_pInstance->_vptr_IHandleEntity + 214))(v7->m_pInstance) == 2
            && ++v3 == nIndex )
          {
            return m_pInstance;
          }
        }
      }
    }
    p_m_hAbilities = (p_m_hAbilities + 4);
    --v4;
  }
  while ( v4 != 0 );
  return 0;
}


// CDOTA_BaseNPC::GetAlternateSpecialAbilityIndex  (line 2121, @0x000000000246af50, libserver.so)
// globals: CSWTCH.13145
int __fastcall CDOTA_BaseNPC::GetAlternateSpecialAbilityIndex(CDOTA_BaseNPC *const this, int nIndex)
{
  __int64 v2; // rsi
  int result; // eax

  v2 = (nIndex - 1);
  result = -1;
  if ( v2 <= 7 )
    return CSWTCH_13145[v2];
  return result;
}


// CDOTA_BaseNPC::CanUpgradeSpecialAbility  (line 2140, @0x000000000246af70, libserver.so)
// callers: CDOTAGamerules::ClientMsg_SpecialAbility, DOTA_ExecuteOrders
bool __fastcall CDOTA_BaseNPC::CanUpgradeSpecialAbility(CDOTA_BaseNPC *const this, int iState)
{
  bool result; // al

  if ( (iState - 1) <= 1 )
  {
    result = 0;
    if ( (this->m_iSpecialAbility.m_Value & 3) != 0 )
      return result;
    if ( this->m_iCurrentLevel.m_Value > 9 )
      return 1;
  }
  if ( (iState - 3) <= 1 )
  {
    result = 0;
    if ( (this->m_iSpecialAbility.m_Value & 0xC) != 0 )
      return result;
    if ( this->m_iCurrentLevel.m_Value > 14 )
      return 1;
  }
  if ( (iState - 5) <= 1 )
  {
    result = 0;
    if ( (this->m_iSpecialAbility.m_Value & 0x30) != 0 )
      return result;
    if ( this->m_iCurrentLevel.m_Value > 19 )
      return 1;
  }
  result = 0;
  if ( (iState - 7) <= 1 && (this->m_iSpecialAbility.m_Value & 0xC0) == 0 && this->m_iCurrentLevel.m_Value > 24 )
    return 1;
  return result;
}


