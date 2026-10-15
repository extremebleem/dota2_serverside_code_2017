
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Assemble::CDOTA_BotMode_Assemble  (line 21, @0x00000000027f6640, libserver.so)  // inlines: CDOTA_BotMode, operator=
void __fastcall CDOTA_BotMode_Assemble::CDOTA_BotMode_Assemble(CDOTA_BotMode_Assemble *const this, CDOTA_Bot *pBot)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm0_4

  this->m_DebugStringBuffer[0] = 0;
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_vDesiredLocation.x = x;
  this->m_vDesiredLocation.y = vec3_origin.y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B7690;
  this->m_vDesiredLocation.z = z;
}


// CDOTA_BotMode_Assemble::OnStart  (line 28, @0x00000000027f5ff0, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_Assemble::OnStart(CDOTA_BotMode_Assemble *const this)
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


// CDOTA_BotMode_Assemble::OnEnd  (line 38, @0x00000000027f64a0, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Assemble::OnEnd(CDOTA_BotMode_Assemble *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// CDOTA_BotMode_Assemble::Think  (line 54, @0x00000000028082f0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Element, EnterScope, GetAction, GetElapsed, GetHealthPercent, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, Top, operator!=, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, ThreadGetCurrentId, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetFountain, CDOTA_TeamCommander::GetLatestRequest, CBaseEntity::GetHealth, CDOTA_TeamCommander::GetBaseLocation, CDOTA_Bot::SetMoveAction, CVProfile::ExitScope, CVProfNode::GetSubNode(char const*,int,char const*,int) (14 total)
// strings: "CDOTA_BotMode_Assemble::Think"
void __fastcall CDOTA_BotMode_Assemble::Think(CDOTA_BotMode_Assemble *const this)
{
  int m_enabled; // ecx
  bool v3; // r13
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v5; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_Bot *m_pBot; // rax
  CDOTA_BotAction *v9; // rdi
  int m_Size; // edx
  CDOTA_BaseNPC *v11; // r15
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  CDOTA_Bot *v16; // rdi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  double v19; // xmm0_8
  CDOTA_Bot *v20; // rdi
  vec_t v21; // xmm1_4
  Vector vLoc; // [rsp+0h] [rbp-50h] BYREF
  Vector v23; // [rsp+10h] [rbp-40h] BYREF
  Vector LatestRequest; // 0:kr00_12.12
  Vector BaseLocation; // 0:kr14_12.12

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v5 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Assemble::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Assemble::Think",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v5 + __rdtsc();
  }
  if ( CDOTA_BotMode::DoScriptThink(this) )
    goto LABEL_3;
  if ( CDOTA_Bot::IsUsingAbility(this->m_pBot) )
    goto LABEL_3;
  if ( CDOTA_Bot::IsUsingItem(this->m_pBot) )
    goto LABEL_3;
  Unit = CDOTA_BotMode::GetUnit(this);
  if ( CDOTA_BaseNPC::GetFountain(Unit) == 0 )
    goto LABEL_3;
  m_pBot = this->m_pBot;
  v9 = 0;
  m_Size = m_pBot->m_ActionStack.m_Size;
  if ( m_Size > 0 )
    v9 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  if ( (*(v9->_vptr_CDOTA_BotAction + 2))(v9) == 2 )
    goto LABEL_3;
  LatestRequest = CDOTA_TeamCommander::GetLatestRequest(this->m_pBot->m_pTeamCommander, 2);
  vLoc = LatestRequest;
  if ( vec3_origin.x != LatestRequest.x || vec3_origin.y != vLoc.y || vec3_origin.z != LatestRequest.z )
  {
    CDOTA_Bot::SetMoveAction(this->m_pBot, &vLoc, 0, 0);
LABEL_3:
    if ( v3 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    return;
  }
  v11 = CDOTA_BotMode::GetUnit(this);
  v12 = 100LL * CBaseEntity::GetHealth(v11);
  v13 = (*(v11->_vptr_IHandleEntity + 156))(v11);
  v15 = 1;
  if ( v13 > 0 )
    v15 = v13;
  if ( (v12 / v15) <= 74 )
  {
    BaseLocation = CDOTA_TeamCommander::GetBaseLocation(this->m_pBot->m_pTeamCommander);
    v16 = this->m_pBot;
    v23 = BaseLocation;
    CDOTA_Bot::SetMoveAction(v16, &v23, 0, 1);
    goto LABEL_3;
  }
  v19 = (*(this->_vptr_CDOTA_BotMode + 11))(this, v14, v12 % v15);
  v20 = this->m_pBot;
  *&v23.x = v19;
  v23.z = v21;
  CDOTA_Bot::SetMoveAction(v20, &v23, 0, 1);
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Assemble::CalculateDesiredLocation  (line 92, @0x00000000027fea50, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, QAngle, RandomYawVector, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator->, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_TeamCommander::GetLeadBuildingInLane, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetBaseLocation, RandomFloat, RandomGaussianFloat, CDOTA_Bot::FindAvoidLocation, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_BotMode::GetUnit, SortEHANDLEVectorByLocation, AngleVectors (15 total)
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Assemble::CalculateDesiredLocation(CDOTA_BotMode_Assemble *const this)
{
  CDOTA_Bot *m_pBot; // rax
  int *v3; // r15
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  __int64 v5; // r12
  int v6; // ebx
  CDOTA_Bot *v7; // r13
  CDOTA_BotMode *m_pActiveBotMode; // rdi
  uint32 m_Index; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  __int64 m_Size; // r13
  int v13; // eax
  vec_t *p_m_Index; // rax
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rbx
  CDOTA_BaseNPC_Building *v16; // r12
  CDOTA_BaseNPC_Building *v17; // rax
  const CBaseEntity *v18; // r13
  const Vector *AbsOrigin; // rax
  const Vector *v20; // rax
  const Vector *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm13_4
  float v27; // xmm0_4
  float v28; // xmm12_4
  float v29; // xmm10_4
  float v30; // xmm8_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  CDOTA_Bot *v33; // rdi
  vec_t v34; // xmm1_4
  CDOTA_BaseNPC *Unit; // rax
  const Vector *v38; // rax
  __m128i v39; // xmm0
  __m128i x_low; // xmm7
  float v41; // ebx
  __m128i y_low; // xmm7
  float v43; // r13d
  float v44; // r12d
  const CBaseEntity *v45; // rax
  const Vector *v46; // rax
  vec_t v47; // xmm0_4
  vec_t v48; // xmm2_4
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v51; // cx
  float v52; // [rsp+Ch] [rbp-F4h]
  float v53; // [rsp+1Ch] [rbp-E4h]
  float fTowerWeight; // [rsp+28h] [rbp-D8h]
  float fTowerWeight_4; // [rsp+2Ch] [rbp-D4h]
  float fTowerWeight_8; // [rsp+30h] [rbp-D0h]
  float v57; // [rsp+34h] [rbp-CCh]
  float v58; // [rsp+38h] [rbp-C8h]
  float v59; // [rsp+38h] [rbp-C8h]
  float v60; // [rsp+3Ch] [rbp-C4h]
  float v61; // [rsp+40h] [rbp-C0h]
  float v62; // [rsp+44h] [rbp-BCh]
  float v63; // [rsp+44h] [rbp-BCh]
  float z; // [rsp+48h] [rbp-B8h]
  float v65; // [rsp+48h] [rbp-B8h]
  float y; // [rsp+50h] [rbp-B0h]
  float v67; // [rsp+50h] [rbp-B0h]
  float x; // [rsp+58h] [rbp-A8h]
  float v69; // [rsp+58h] [rbp-A8h]
  Vector vBaseLocation; // [rsp+70h] [rbp-90h] BYREF
  Vector forward; // [rsp+80h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hHangOutWithHeroes; // [rsp+90h] [rbp-70h] BYREF
  int iGroupByModes[7]; // [rsp+B0h] [rbp-50h] BYREF
  int v74; // [rsp+CCh] [rbp-34h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBot = this->m_pBot;
  if ( m_pBot->m_iDifficulty <= 2 )
  {
LABEL_21:
    LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(m_pBot->m_pTeamCommander, DOTA_LANE::DOTA_LANE_TOP);
    v16 = CDOTA_TeamCommander::GetLeadBuildingInLane(this->m_pBot->m_pTeamCommander, DOTA_LANE::DOTA_LANE_MIDDLE);
    v17 = CDOTA_TeamCommander::GetLeadBuildingInLane(this->m_pBot->m_pTeamCommander, DOTA_LANE::DOTA_LANE_BOTTOM);
    v18 = v17;
    if ( LeadBuildingInLane == 0 || v16 == 0 || v17 == 0 )
      goto LABEL_30;
    AbsOrigin = CBaseEntity::GetAbsOrigin(LeadBuildingInLane);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
    v20 = CBaseEntity::GetAbsOrigin(v16);
    v62 = v20->x;
    v61 = v20->y;
    v60 = v20->z;
    v21 = CBaseEntity::GetAbsOrigin(v18);
    v58 = v21->x;
    v57 = v21->y;
    fTowerWeight_8 = v21->z;
    vBaseLocation = CDOTA_TeamCommander::GetBaseLocation(this->m_pBot->m_pTeamCommander);
    v52 = ((vBaseLocation.z - z) * 0.75) + z;
    v53 = ((vBaseLocation.x - v58) * 0.75) + v58;
    fTowerWeight = RandomFloat(0.0, 1.0);
    fTowerWeight_4 = RandomFloat(0.0, 1.0);
    v22 = RandomFloat(0.0, 1.0);
    v23 = (fTowerWeight + fTowerWeight_4) + v22;
    v24 = fTowerWeight / v23;
    v25 = fTowerWeight_4 / v23;
    v26 = (((vBaseLocation.x - x) * 0.75) + x) * (fTowerWeight / v23);
    v27 = v22 / v23;
    v28 = (((vBaseLocation.x - v62) * 0.75) + v62) * (fTowerWeight_4 / v23);
    v29 = ((((vBaseLocation.y - v61) * 0.75) + v61) * (fTowerWeight_4 / v23))
        + ((((vBaseLocation.y - y) * 0.75) + y) * (fTowerWeight / v23));
    v69 = ((v62 * (fTowerWeight_4 / v23)) + (x * (fTowerWeight / v23))) + (v58 * v27);
    v59 = (v57 * v27) + ((v61 * (fTowerWeight_4 / v23)) + (y * (fTowerWeight / v23)));
    v30 = (fTowerWeight_8 * v27) + ((v60 * (fTowerWeight_4 / v23)) + (z * (fTowerWeight / v23)));
    v65 = ((((vBaseLocation.y - v57) * 0.75) + v57) * v27) + v29;
    v63 = (v53 * v27) + (v28 + v26);
    v67 = ((((vBaseLocation.z - fTowerWeight_8) * 0.75) + fTowerWeight_8) * v27)
        + ((v25 * (((vBaseLocation.z - v60) * 0.75) + v60)) + (v24 * v52));
    v31 = RandomGaussianFloat(0.66000003, 1.0);
    if ( v31 <= 0.89999998 )
    {
      if ( v31 >= 0.30000001 )
      {
        v32 = 1.0 - v31;
      }
      else
      {
        v32 = 0.69999999;
        v31 = 0.30000001;
      }
    }
    else
    {
      v32 = 0.10000002;
      v31 = 0.89999998;
    }
    v33 = this->m_pBot;
    *&hHangOutWithHeroes.m_Size = (v63 * v32) + (v69 * v31);
    *(&hHangOutWithHeroes.m_Size + 1) = (v65 * v32) + (v59 * v31);
    *&hHangOutWithHeroes.m_Memory.m_pMemory = (v32 * v67) + (v31 * v30);
    if ( CDOTA_Bot::FindAvoidLocation(v33, &hHangOutWithHeroes, 1000.0, 5, iGroupByModes, 0) != 0 )
    {
      forward = *iGroupByModes;
    }
    else
    {
LABEL_30:
      *&forward.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
      forward.z = v34;
    }
  }
  else
  {
    v3 = iGroupByModes;
    iGroupByModes[0] = 8;
    iGroupByModes[1] = 9;
    iGroupByModes[2] = 8;
    iGroupByModes[3] = 11;
    iGroupByModes[4] = 12;
    iGroupByModes[5] = 13;
    iGroupByModes[6] = 17;
    while ( 1 )
    {
      hHangOutWithHeroes.m_Size = 0;
      hHangOutWithHeroes.m_Memory.m_pMemory = 0;
      hHangOutWithHeroes.m_Memory.m_nAllocationCount = 0;
      hHangOutWithHeroes.m_Memory.m_nGrowSize = 0;
      m_pTeamCommander = m_pBot->m_pTeamCommander;
      if ( m_pTeamCommander->m_BotList.m_Size > 0 )
      {
        v5 = 0;
        v6 = 0;
        do
        {
          v7 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v5];
          if ( v7 != 0 )
          {
            m_pActiveBotMode = v7->m_pActiveBotMode;
            if ( m_pActiveBotMode != 0 && (*(m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pActiveBotMode) == *v3 )
            {
              m_Index = v7->m_hUnit.m_Index;
              if ( m_Index + 2 > 1
                && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
                && (v11 = &v10[v7->m_hUnit.m_Index & 0x1FF]) != 0
                && m_Index == v11->m_EHandle.m_Index
                && (m_pInstance = v11->m_pInstance) != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                forward.x = NAN;
                m_pEntity = m_pInstance->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v51 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v51 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LODWORD(forward.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                     | v51 & 0x7FFF;
                }
              }
              else
              {
                forward.x = NAN;
              }
              m_Size = hHangOutWithHeroes.m_Size;
              v13 = hHangOutWithHeroes.m_Size;
              if ( hHangOutWithHeroes.m_Size == hHangOutWithHeroes.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hHangOutWithHeroes.m_Memory, 1);
                v13 = hHangOutWithHeroes.m_Size;
              }
              hHangOutWithHeroes.m_Size = v13 + 1;
              p_m_Index = &hHangOutWithHeroes.m_Memory.m_pMemory[m_Size].m_Index;
              if ( p_m_Index != 0 )
                *p_m_Index = forward.x;
            }
          }
          ++v6;
          ++v5;
          m_pTeamCommander = this->m_pBot->m_pTeamCommander;
        }
        while ( v6 < m_pTeamCommander->m_BotList.m_Size );
        if ( hHangOutWithHeroes.m_Size > 0 )
          break;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hHangOutWithHeroes);
      if ( (hHangOutWithHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHangOutWithHeroes.m_Memory);
        if ( (hHangOutWithHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHangOutWithHeroes.m_Memory);
      }
      ++v3;
      m_pBot = this->m_pBot;
      if ( v3 == &v74 )
        goto LABEL_21;
    }
    Unit = CDOTA_BotMode::GetUnit(this);
    v38 = CBaseEntity::GetAbsOrigin(Unit);
    SortEHANDLEVectorByLocation(&hHangOutWithHeroes, v38, 0);
    vBaseLocation.y = RandomFloat(0.0, 360.0);
    vBaseLocation.x = 0.0;
    vBaseLocation.z = 0.0;
    AngleVectors(&vBaseLocation, &forward, 0, 0);
    v39 = 0x43C80000u;
    x_low = LODWORD(forward.x);
    *x_low.m128i_i32 = forward.x * 400.0;
    v41 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    y_low = LODWORD(forward.y);
    *y_low.m128i_i32 = forward.y * 400.0;
    *v39.m128i_i32 = 400.0 * forward.z;
    v43 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
    v45 = CEntityHandle::operator CEntityInstance *(hHangOutWithHeroes.m_Memory.m_pMemory);
    v46 = CBaseEntity::GetAbsOrigin(v45);
    v47 = v44 + v46->z;
    v48 = v41 + v46->x;
    forward.y = v43 + v46->y;
    forward.z = v47;
    forward.x = v48;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hHangOutWithHeroes);
  }
  *&result.x = *&forward.x;
  result.z = forward.z;
  return result;
}


// CDOTA_BotMode_Assemble::GetDesire  (line 173, @0x00000000027fcc60, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, FastSqrt, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, Length2D, PLAT_CPU_TIME, RemapValClamped, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator!=, operator-, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, ThreadGetCurrentId, CVProfNode::ExitScope(void), CDOTA_TeamCommander::GetLatestRequest, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// strings: "CDOTA_BotMode_Assemble::GetDesire"
float __fastcall CDOTA_BotMode_Assemble::GetDesire(CDOTA_BotMode_Assemble *const this)
{
  int m_enabled; // r8d
  bool v3; // r13
  __m128i v4; // xmm0
  int v5; // r15d
  unsigned __int64 v7; // r12
  ThreadId_t v8; // r13
  uint64 v9; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v11; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // rax
  __m128i v16; // xmm0
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  float v19; // [rsp+Ch] [rbp-44h]
  Vector LatestRequest; // 0:kr00_12.12

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v11 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Assemble::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Assemble::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v11 + __rdtsc();
  }
  *v4.m128i_i32 = CDOTA_BotMode::GetScriptDesire(this);
  v5 = _mm_cvtsi128_si32(v4);
  if ( *v4.m128i_i32 < 0.0 )
  {
    LatestRequest = CDOTA_TeamCommander::GetLatestRequest(this->m_pBot->m_pTeamCommander, 2);
    if ( LatestRequest.x == vec3_origin.x && vec3_origin.y == LatestRequest.y && vec3_origin.z == LatestRequest.z )
    {
      v5 = 0;
      if ( this->m_pBot->m_pTeamCommander->m_bLateGame )
        v5 = _mm_cvtsi128_si32(0x3DCCCCCDu);
    }
    else
    {
      Unit = CDOTA_BotMode::GetUnit(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
      v19 = ((AbsOrigin->x - LatestRequest.x) * (AbsOrigin->x - LatestRequest.x))
          + ((AbsOrigin->y - LatestRequest.y) * (AbsOrigin->y - LatestRequest.y));
      v16 = LODWORD(v19);
      *v16.m128i_i32 = (fsqrt(v19) - 2000.0) / 3000.0;
      if ( *v16.m128i_i32 < 0.0 )
      {
        v5 = _mm_cvtsi128_si32(0x3F400000u);
      }
      else
      {
        v5 = _mm_cvtsi128_si32(0x3E800000u);
        if ( *v16.m128i_i32 <= 1.0 )
        {
          *v16.m128i_i32 = (*v16.m128i_i32 * -0.5) + 0.75;
          v5 = _mm_cvtsi128_si32(v16);
        }
      }
    }
  }
  if ( v3 )
  {
    v7 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v8 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v8 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v9 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v9 - v7 + __rdtsc();
  }
  return *&v5;
}


// CDOTA_BotMode_Assemble::GetDebugColor  (line 200, @0x00000000027e0180, libserver.so)
color24 __fastcall CDOTA_BotMode_Assemble::GetDebugColor(CDOTA_BotMode_Assemble *const this)
{
  return 5944575;
}


// CDOTA_BotMode_Assemble_Human::GetDesire  (line 212, @0x00000000027e0190, libserver.so)
float __fastcall CDOTA_BotMode_Assemble_Human::GetDesire(CDOTA_BotMode_Assemble_Human *const this)
{
  float result; // xmm0_4

  result = 0.0;
  if ( this->m_pBot->m_pTeamCommander->m_bLateGame )
    return 0.1;
  return result;
}


