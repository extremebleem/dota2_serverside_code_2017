
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_SecretShop::CDOTA_BotMode_SecretShop  (line 23, @0x000000000281e3f0, libserver.so)
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_SecretShop::CDOTA_BotMode_SecretShop(
        CDOTA_BotMode_SecretShop *const this,
        CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_fSecretShopDesire = 0.0;
  this->_vptr_CDOTA_BotMode = off_42B8970;  // vptr: CDOTA_BotMode_SecretShop
}


// CDOTA_BotMode_SecretShop::OnStart  (line 31, @0x0000000002817590, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_SecretShop::OnStart(CDOTA_BotMode_SecretShop *const this)
{
  int v2; // r12d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v4; // rbx

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
    Unit = CDOTA_BotMode::GetUnit(this);
    v4 = Unit;
    if ( v2 != Unit->m_iBotDebugData.m_Value )
    {
      (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v4->m_iBotDebugData.m_Value = v2;
    }
  }
}


// CDOTA_BotMode_SecretShop::OnEnd  (line 41, @0x0000000002816450, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_SecretShop::OnEnd(CDOTA_BotMode_SecretShop *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// CDOTA_BotMode_SecretShop::Think  (line 49, @0x0000000002819160, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_Bot::SetMoveAction, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "CDOTA_BotMode_SecretShop::Think"
void __fastcall CDOTA_BotMode_SecretShop::Think(CDOTA_BotMode_SecretShop *const this)
{
  int m_enabled; // r14d
  bool v3; // r13
  double v4; // xmm0_8
  CDOTA_Bot *m_pBot; // rdi
  vec_t v6; // xmm1_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v8; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v11; // rax
  Vector vLoc; // [rsp+0h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v8 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_SecretShop::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_SecretShop::Think",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v11 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v11->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v8 + __rdtsc();
  }
  if ( !CDOTA_BotMode::DoScriptThink(this)
    && !CDOTA_Bot::IsUsingAbility(this->m_pBot)
    && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    v4 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    m_pBot = this->m_pBot;
    *&vLoc.x = v4;
    vLoc.z = v6;
    CDOTA_Bot::SetMoveAction(m_pBot, &vLoc, 0, 0);
  }
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_SecretShop::CalculateDesiredLocation  (line 64, @0x0000000002818a60, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator->
// calls: CDOTA_BotMode::GetUnit, CDOTAGamerules::GetShop, CDOTA_BaseNPC::IsInRangeOfShop, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_SecretShop::CalculateDesiredLocation(CDOTA_BotMode_SecretShop *const this)
{
  _BOOL4 v2; // ebx
  CDOTA_BaseNPC *Unit; // rax
  DOTA_SHOP_TYPE v4; // ebx
  CBaseEntity *Shop; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  int hDestinationShop; // [rsp+10h] [rbp-30h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value != 2;
  Unit = CDOTA_BotMode::GetUnit(this);
  v4 = 3 * v2 + 2;
  Shop = CDOTAGamerules::GetShop(g_pGameRules, Unit->m_iTeamNum.m_Value, v4);
  hDestinationShop = -1;
  if ( Shop != 0 )
  {
    m_pEntity = Shop->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hDestinationShop = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
  }
  v8 = CDOTA_BotMode::GetUnit(this);
  if ( CDOTA_BaseNPC::IsInRangeOfShop(v8, v4, 0) )
  {
    m_pInstance = CDOTA_BotMode::GetUnit(this);
  }
  else
  {
    m_pInstance = 0;
    if ( (hDestinationShop + 2) > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hDestinationShop >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[hDestinationShop & 0x1FF];
        if ( v14 != 0 && hDestinationShop == v14->m_EHandle.m_Index )
          m_pInstance = v14->m_pInstance;
      }
    }
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_BotMode_SecretShop::GetDesire  (line 79, @0x000000000281ab60, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, FastSqrt, Get, GetEHandle, GetElapsed, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetTimebaseRegister, InTargetThread, IsEnabled, Length2D, PLAT_CPU_TIME, RemapValClamped, Set, String, ToCStr, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator!, operator-, operator->, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC_Hero::GetNextItemToPurchase, IsPurchasedFromSecretShop, CDOTA_BaseNPC_Hero::HasRoomForItem, GetItemCost, CDOTAGamerules::GetShop, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, RemapValClamped (16 total)
// strings: "CDOTA_BotMode_SecretShop::GetDesire"
float __fastcall CDOTA_BotMode_SecretShop::GetDesire(CDOTA_BotMode_SecretShop *const this)
{
  int m_enabled; // edi
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC_Hero *v9; // r14
  sLoadoutItem *NextItemToPurchase; // rax
  const char **v11; // r15
  const char *m_Id; // rdi
  const char *v13; // rsi
  const char *v14; // rdi
  int ItemCost; // r15d
  CBaseEntity *Shop; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v18; // cx
  const CBaseEntity *v19; // rax
  const Vector *v20; // rax
  float v21; // xmm1_4
  float v22; // xmm5_4
  int v23; // eax
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  __m128i v29; // xmm0
  float v30; // r14d
  CDOTA_TeamCommander *TeamCommander; // rax
  float v32; // xmm5_4
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v34; // rax
  const Vector *AbsOrigin; // [rsp+0h] [rbp-50h]
  float fEarlyGamePenalty; // [rsp+8h] [rbp-48h]
  EHANDLE hDestinationShop; // [rsp+10h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_SecretShop::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_SecretShop::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v34 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v34->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    this->m_fSecretShopDesire = 0.0;
    Unit = CDOTA_BotMode::GetUnit(this);
    v9 = Unit;
    if ( Unit == 0 )
      goto LABEL_31;
    if ( (Unit->m_iUnitType & 1) == 0 )
      goto LABEL_31;
    NextItemToPurchase = CDOTA_BaseNPC_Hero::GetNextItemToPurchase(Unit, 0);
    v11 = NextItemToPurchase;
    if ( NextItemToPurchase == 0 )
      goto LABEL_31;
    m_Id = "";
    if ( NextItemToPurchase->name.u.m_Id != 0 )
      m_Id = NextItemToPurchase->name.u.m_Id;
    if ( !IsPurchasedFromSecretShop(m_Id) )
      goto LABEL_31;
    v13 = "";
    if ( *v11 != 0 )
      v13 = *v11;
    if ( CDOTA_BaseNPC_Hero::HasRoomForItem(v9, v13, 0, 1) == 4 )
      goto LABEL_31;
    v14 = "";
    if ( *v11 != 0 )
      v14 = *v11;
    ItemCost = GetItemCost(v14);
    if ( ItemCost >= (*(v9->_vptr_IHandleEntity + 397))(v9) )
      goto LABEL_31;
    Shop = CDOTAGamerules::GetShop(g_pGameRules, v9->m_iTeamNum.m_Value, (3 * (v9->m_iTeamNum.m_Value != 2) + 2));
    hDestinationShop.m_Index = -1;
    if ( Shop != 0 )
    {
      m_pEntity = Shop->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hDestinationShop.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v18 & 0x7FFF;
      }
    }
    if ( CEntityHandle::operator CEntityInstance *(&hDestinationShop) != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      v19 = CEntityHandle::operator CEntityInstance *(&hDestinationShop);
      v20 = CBaseEntity::GetAbsOrigin(v19);
      v21 = v20->y - AbsOrigin->y;
      this->m_fSecretShopDesire = RemapValClamped(
                                    fsqrt(((v20->x - AbsOrigin->x) * (v20->x - AbsOrigin->x)) + (v21 * v21)),
                                    4000.0,
                                    1000.0,
                                    0.0,
                                    0.5,
                                    v22)
                                + this->m_fSecretShopDesire;
      v23 = (*(v9->_vptr_IHandleEntity + 397))(v9);
      v25 = RemapValClamped(v23, 1000.0, 4000.0, 0.25, 0.75, v24);
      v27 = 0.0;
      v28 = v25 + this->m_fSecretShopDesire;
      this->m_fSecretShopDesire = v28;
      if ( v9->m_bDoesNextItemCompleteRecipe )
        v27 = 0.30000001;
      this->m_fSecretShopDesire = v28 + v27;
      *v29.m128i_i32 = RemapValClamped(ItemCost, 1000.0, 3000.0, 0.75, 0.89999998, v26);
      v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      v32 = 0.5;
      if ( TeamCommander->m_bLateGame )
        v32 = 1.0;
      result = RemapValClamped(this->m_fSecretShopDesire, 0.25, 1.0, 0.25, v30, v32) * v32;
    }
    else
    {
LABEL_31:
      result = 0.0;
    }
  }
  if ( v3 )
  {
    fEarlyGamePenalty = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fEarlyGamePenalty;
  }
  return result;
}


// CDOTA_BotMode_SecretShop::GetDebugColor  (line 127, @0x00000000028163d0, libserver.so)
color24 __fastcall CDOTA_BotMode_SecretShop::GetDebugColor(CDOTA_BotMode_SecretShop *const this)
{
  return 7929660;
}


