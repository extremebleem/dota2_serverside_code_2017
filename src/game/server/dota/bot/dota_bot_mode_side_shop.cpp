
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_SideShop::CDOTA_BotMode_SideShop  (line 24, @0x000000000282a900, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_SideShop::CDOTA_BotMode_SideShop(CDOTA_BotMode_SideShop *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_hShop.m_Index = -1;
  this->_vptr_CDOTA_BotMode = off_42B8E30;
  this->m_iShop = DOTA_SHOP_TYPE::DOTA_SHOP_NONE;
}


// CDOTA_BotMode_SideShop::OnStart  (line 32, @0x0000000002828cc0, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_SideShop::OnStart(CDOTA_BotMode_SideShop *const this)
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


// CDOTA_BotMode_SideShop::OnEnd  (line 42, @0x00000000028278b0, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_SideShop::OnEnd(CDOTA_BotMode_SideShop *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// CDOTA_BotMode_SideShop::Think  (line 51, @0x000000000282a070, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_Bot::SetMoveAction, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "CDOTA_BotMode_SideShop::Think"
void __fastcall CDOTA_BotMode_SideShop::Think(CDOTA_BotMode_SideShop *const this)
{
  int m_enabled; // eax
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
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_SideShop::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_SideShop::Think",
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


// CDOTA_BotMode_SideShop::CalculateDesiredLocation  (line 66, @0x000000000282a210, libserver.so)  // inlines: Get, GetInstance, operator->
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::IsInRangeOfShop, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*
Vector __fastcall CDOTA_BotMode_SideShop::CalculateDesiredLocation(CDOTA_BotMode_SideShop *const this)
{
  DOTA_SHOP_TYPE m_iShop; // r12d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  __int64 v6; // rdx
  const CBaseEntity *v9; // rax
  const Vector *v10; // rax
  float z; // xmm0_4
  vec_t x; // xmm2_4
  __int64 v13; // [rsp+10h] [rbp-20h]
  vec_t v14; // [rsp+18h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_iShop = this->m_iShop;
  Unit = CDOTA_BotMode::GetUnit(this);
  if ( CDOTA_BaseNPC::IsInRangeOfShop(Unit, m_iShop, 0) )
  {
    v4 = CDOTA_BotMode::GetUnit(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    v13 = v6;
    v14 = *&AbsOrigin;
  }
  else
  {
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hShop);
    v10 = CBaseEntity::GetAbsOrigin(v9);
    z = v10->z;
    x = v10->x;
    HIDWORD(v13) = LODWORD(v10->y);
    v14 = z;
    *&v13 = x;
  }
  *&result.x = v13;
  result.z = v14;
  return result;
}


// CDOTA_BotMode_SideShop::GetDesire  (line 78, @0x000000000283f890, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, CalculateAmountAlongLane, DOTAGameRules, EnterScope, FStrEq, FastSqrt, FindTotalAvoidanceForPath, Get, GetEHandle, GetElapsed, GetEntryIndex, GetInstance, GetLaneFrontAmount, GetSerialNumber, GetTeamNumber, GetTimebaseRegister, InTargetThread, IsEnabled, Length2D, PLAT_CPU_TIME, RemapValClamped, Set, String, ToCStr, ToDOTABaseNPCHero, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-, operator->, operator=, operator==<CBaseEntity>, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetUnit, CDOTA_Bot::FindNearbyEnemiesInMode, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CBaseEntity::GetHealth, CDOTA_BaseNPC_Hero::GetNextItemToPurchase, IsPurchasedFromSideShop, GetItemCost, CDOTA_BaseNPC_Hero::HasRoomForItem (24 total)
// strings: "CDOTA_BotMode_SideShop::GetDesire", "item_tpscroll"
float __fastcall CDOTA_BotMode_SideShop::GetDesire(CDOTA_BotMode_SideShop *const this)
{
  int m_enabled; // r8d
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_BaseNPC *Unit; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC_Hero *v13; // r14
  const char *m_Id; // rdi
  const char *v15; // rdi
  int ItemCost; // r15d
  const char *v17; // rsi
  CBaseEntity *Shop; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v20; // cx
  CBaseEntity *v21; // rax
  CEntityIdentity *v22; // rdx
  __int16 v23; // cx
  const CBaseEntity *v24; // r15
  const Vector *AbsOrigin; // r15
  const Vector *v26; // rax
  const CBaseEntity *v27; // rax
  const Vector *v28; // r15
  const Vector *v29; // rax
  float v30; // xmm0_4
  DOTA_SHOP_TYPE v31; // r15d
  const CBaseEntity *v32; // rax
  CDOTA_TeamCommander *v33; // rax
  CDOTA_TeamCommander *v34; // rax
  const CBaseEntity *v35; // rax
  const Vector *v36; // rax
  const char *v37; // rdi
  int v38; // eax
  uint32 v39; // edx
  const CBaseEntity *v40; // rax
  CDOTA_TeamCommander *TeamCommander; // rax
  int Health; // eax
  __int64 v43; // rdx
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  __m128i v46; // xmm0
  __m128i v47; // xmm7
  float v48; // r14d
  float v49; // xmm0_4
  float v50; // xmm0_4
  const char *v51; // rdi
  float v52; // xmm2_4
  uint32 m_Index; // eax
  CDOTA_UnitInventory *Inventory; // rax
  float v55; // xmm1_4
  float v56; // xmm0_4
  uint32 v57; // eax
  uint32 v58; // eax
  Vector *vLoc; // [rsp+8h] [rbp-88h]
  DOTA_LANE lane; // [rsp+10h] [rbp-80h]
  const Vector *lanea; // [rsp+10h] [rbp-80h]
  float v62; // [rsp+18h] [rbp-78h]
  float v63; // [rsp+18h] [rbp-78h]
  int fThresholdDist; // [rsp+20h] [rbp-70h]
  float fThresholdDista; // [rsp+20h] [rbp-70h]
  float fThresholdDistb; // [rsp+20h] [rbp-70h]
  Vector *fThresholdDistd; // [rsp+20h] [rbp-70h]
  int fThresholdDistc; // [rsp+20h] [rbp-70h]
  float pLoadoutItema; // [rsp+28h] [rbp-68h]
  sLoadoutItem *pLoadoutItem; // [rsp+28h] [rbp-68h]
  EHANDLE hShop1; // [rsp+30h] [rbp-60h] BYREF
  EHANDLE hShop2; // [rsp+40h] [rbp-50h] BYREF
  EHANDLE hShop; // [rsp+50h] [rbp-40h] BYREF
  float fShopAmount[13]; // [rsp+5Ch] [rbp-34h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_SideShop::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_SideShop::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v10 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v10->m_BudgetFlags |= 4u;
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
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, Unit) <= 0 )
    {
      v11 = CDOTA_BotMode::GetUnit(this);
      if ( CBaseEntity::GetHealth(v11) != 0 )
      {
        v12 = CDOTA_BotMode::GetUnit(this);
        v13 = v12;
        if ( v12 != 0 && (v12->m_iUnitType & 1) != 0 )
        {
          pLoadoutItem = CDOTA_BaseNPC_Hero::GetNextItemToPurchase(v12, 1);
          if ( pLoadoutItem != 0 )
          {
            m_Id = "";
            if ( pLoadoutItem->name.u.m_Id != 0 )
              m_Id = pLoadoutItem->name.u.m_Id;
            if ( IsPurchasedFromSideShop(m_Id) )
            {
              v15 = "";
              fThresholdDist = pLoadoutItem->iFlags;
              if ( pLoadoutItem->name.u.m_Id != 0 )
                v15 = pLoadoutItem->name.u.m_Id;
              ItemCost = GetItemCost(v15);
              if ( ItemCost <= (*(v13->_vptr_IHandleEntity + 397))(v13) )
              {
                v17 = "";
                if ( pLoadoutItem->name.u.m_Id != 0 )
                  v17 = pLoadoutItem->name.u.m_Id;
                if ( CDOTA_BaseNPC_Hero::HasRoomForItem(v13, v17, 0, (fThresholdDist & 0x40) == 0) != 4 )
                {
                  Shop = CDOTAGamerules::GetShop(g_pGameRules, v13->m_iTeamNum.m_Value, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE);
                  hShop1.m_Index = -1;
                  if ( Shop != 0 )
                  {
                    m_pEntity = Shop->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      if ( m_pEntity->m_EHandle.m_Index == -1 )
                        v20 = 0x7FFF;
                      else
                        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      hShop1.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                     | v20 & 0x7FFF;
                    }
                  }
                  v21 = CDOTAGamerules::GetShop(g_pGameRules, v13->m_iTeamNum.m_Value, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE2);
                  hShop2.m_Index = -1;
                  if ( v21 != 0 )
                  {
                    v22 = v21->m_pEntity;
                    if ( v22 != 0 )
                    {
                      if ( v22->m_EHandle.m_Index == -1 )
                        v23 = 0x7FFF;
                      else
                        v23 = v22->m_EHandle.m_Index & 0x7FFF;
                      hShop2.m_Index = (((v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1)) << 15) | v23 & 0x7FFF;
                    }
                  }
                  v24 = CEntityHandle::operator CEntityInstance *(&hShop1);
                  if ( v24 != 0 && CEntityHandle::operator CEntityInstance *(&hShop2) != 0 )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
                    v26 = CBaseEntity::GetAbsOrigin(v13);
                    fThresholdDista = fsqrt(
                                        ((v26->x - AbsOrigin->x) * (v26->x - AbsOrigin->x))
                                      + ((v26->y - AbsOrigin->y) * (v26->y - AbsOrigin->y)));
                    v27 = CEntityHandle::operator CEntityInstance *(&hShop2);
                    v28 = CBaseEntity::GetAbsOrigin(v27);
                    v29 = CBaseEntity::GetAbsOrigin(v13);
                    v30 = fsqrt(((v29->x - v28->x) * (v29->x - v28->x)) + ((v29->y - v28->y) * (v29->y - v28->y)));
                    v62 = v30;
                    if ( v30 > fThresholdDista )
                    {
                      v31 = DOTA_SHOP_TYPE::DOTA_SHOP_SIDE;
                      v62 = fThresholdDista;
                      hShop.m_Index = hShop1.m_Index;
                    }
                    else
                    {
                      v31 = 3 * (v30 <= fThresholdDista) + 1;
                      hShop.m_Index = hShop2.m_Index;
                    }
                    if ( CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame )
                    {
                      v40 = CEntityHandle::operator CEntityInstance *(&hShop);
                      fThresholdDistd = CBaseEntity::GetAbsOrigin(v40);
                      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
                      fThresholdDistc = 100
                                      * CDOTA_TeamCommander::GetPotentialDamage(
                                          TeamCommander,
                                          v13,
                                          4000.0,
                                          fThresholdDistd);
                      Health = CBaseEntity::GetHealth(v13);
                      v43 = (fThresholdDistc >> 31);
                      v44.m128_f32[0] = ((fThresholdDistc / Health) - 10.0) / 40.0;
                      if ( v44.m128_f32[0] < 0.0 )
                      {
                        v46 = 0;
                      }
                      else
                      {
                        v45 = _mm_cmplt_ss(0x3F800000u, v44);
                        v46 = _mm_or_ps(_mm_andnot_ps(v45, v44), _mm_and_ps(0x3F800000u, v45));
                      }
                      *v46.m128i_i32 = *v46.m128i_i32 * -0.75;
                      v47 = v46;
                      *v47.m128i_i32 = *v46.m128i_i32 + 1.0;
                      v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
                      v49 = (v62 - 500.0) / 4500.0;
                      if ( v49 < 0.0 )
                        v50 = 0.0;
                      else
                        v50 = fminf(1.0, v49);
                      v63 = (v50 * -0.75) + 1.0;
                      LODWORD(v43) = fThresholdDistc % Health;
                      if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 13))(this->m_pBot, 1, v43) == 0
                        && (v51 = pLoadoutItem->name.u.m_Id, pLoadoutItem->name.u.m_Id != 0)
                        && (v51 == "item_tpscroll" || strcmp(v51, "item_tpscroll") == 0) )
                      {
                        v52 = 1.0;
                      }
                      else
                      {
                        v52 = 0.75;
                      }
                      m_Index = hShop.m_Index;
                      this->m_iShop = v31;
                      this->m_hShop.m_Index = m_Index;
                      result = ((v48 * 0.75) * v63) * v52;
                      goto LABEL_3;
                    }
                    if ( CDOTA_BotMode::GetTeamCommander(this)->m_fDefendLaneUrgencyDesire[1] > 0.80000001
                      || CDOTA_BotMode::GetTeamCommander(this)->m_fDefendLaneUrgencyDesire[3] > 0.80000001
                      || CDOTA_BotMode::GetTeamCommander(this)->m_fDefendLaneUrgencyDesire[2] > 0.80000001 )
                    {
                      if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 13))(this->m_pBot, 1) != 0
                        || (Inventory = CDOTA_BaseNPC::GetInventory(v13),
                            CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_tpscroll", 1, 0, -1) != 0) )
                      {
                        fThresholdDistb = 4000.0;
                      }
                      else
                      {
                        fThresholdDistb = 7500.0;
                      }
                    }
                    else
                    {
                      fThresholdDistb = 4000.0;
                    }
                    if ( fThresholdDistb > v62 )
                    {
                      fShopAmount[0] = 0.0;
                      lane = 2 * (v31 == DOTA_SHOP_TYPE::DOTA_SHOP_SIDE) + 1;
                      v32 = CEntityHandle::operator CEntityInstance *(&hShop);
                      vLoc = CBaseEntity::GetAbsOrigin(v32);
                      v33 = CDOTA_BotMode::GetTeamCommander(this);
                      CDOTA_TeamCommander::CalculateAmountAlongLane(v33, lane, vLoc, fShopAmount, 0);
                      LODWORD(vLoc) = CDOTA_BaseNPC::GetOpposingTeamNumber(v13);
                      v34 = CDOTA_BotMode::GetTeamCommander(this);
                      if ( v34->m_LaneFrontTowersAmounts[vLoc != 2][lane] > fShopAmount[0] )
                      {
                        v35 = CEntityHandle::operator CEntityInstance *(&hShop);
                        lanea = CBaseEntity::GetAbsOrigin(v35);
                        v36 = CBaseEntity::GetAbsOrigin(v13);
                        if ( CDOTA_Bot_Pathing::FindTotalAvoidanceForPath(
                               &this->m_pBot->m_AvoidancePathing,
                               v36,
                               lanea,
                               0) <= 49 )
                        {
                          v37 = pLoadoutItem->name.u.m_Id;
                          if ( pLoadoutItem->name.u.m_Id != 0 )
                          {
                            if ( v37 == "item_tpscroll" )
                            {
                              v58 = hShop.m_Index;
                              this->m_iShop = v31;
                              this->m_hShop.m_Index = v58;
LABEL_50:
                              if ( fThresholdDistb == 2000.0 )
                              {
                                if ( (v62 - 2000.0) < 0.0 )
                                  result = 0.75;
                                else
                                  result = 0.89999998;
                              }
                              else
                              {
                                v55 = (v62 - fThresholdDistb) / (2000.0 - fThresholdDistb);
                                v56 = 0.0;
                                if ( v55 >= 0.0 )
                                  v56 = fminf(1.0, v55);
                                result = (v56 * 0.14999998) + 0.75;
                              }
                              goto LABEL_3;
                            }
                            v38 = strcmp(v37, "item_tpscroll");
                            v39 = hShop.m_Index;
                            this->m_iShop = v31;
                            this->m_hShop.m_Index = v39;
                            if ( v38 == 0 )
                              goto LABEL_50;
                          }
                          else
                          {
                            v57 = hShop.m_Index;
                            this->m_iShop = v31;
                            this->m_hShop.m_Index = v57;
                          }
                          result = 0.5;
                          goto LABEL_3;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    result = 0.0;
  }
LABEL_3:
  if ( v3 )
  {
    pLoadoutItema = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return pLoadoutItema;
  }
  return result;
}


// CDOTA_BotMode_SideShop::GetDebugColor  (line 182, @0x0000000002827690, libserver.so)
color24 __fastcall CDOTA_BotMode_SideShop::GetDebugColor(CDOTA_BotMode_SideShop *const this)
{
  return 7929660;
}


