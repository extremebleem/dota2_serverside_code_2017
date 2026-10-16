
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Companion::CDOTA_BotMode_Companion  (line 27, @0x00000000027f6d70, libserver.so)  // inlines: CDOTA_BotMode, CEntityHandle, CHandle, Init, operator=
// callers: CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CreateMode
void __fastcall CDOTA_BotMode_Companion::CDOTA_BotMode_Companion(CDOTA_BotMode_Companion *const this, CDOTA_Bot *pBot)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->m_DebugStringBuffer[0] = 0;
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_hEnemy.m_Index = -1;
  this->m_vDesiredLocation.x = x;
  y = vec3_origin.y;
  this->m_hFriendly.m_Index = -1;
  this->m_vDesiredLocation.y = y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B79B0;  // vptr: CDOTA_BotMode_Companion
  this->m_vDesiredLocation.z = z;
  this->m_nSubMode = 0;
  this->m_flOffsetTimer = 0.0;
  this->m_flForwardOffset = 0.0;
  this->m_flSideOffset = 0.0;
  this->m_nLastSubMode = 0;
  this->m_vTargetPos.x = 0.0;
  this->m_vTargetPos.y = 0.0;
  this->m_vTargetPos.z = 0.0;
  this->m_bUpdateAction = 0;
  this->m_flIdleTimer = 0.0;
  this->m_flActionTimer = 0.0;
}


// CDOTA_BotMode_Companion::OnStart  (line 46, @0x00000000027f6370, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_Companion::OnStart(CDOTA_BotMode_Companion *const this)
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


// CDOTA_BotMode_Companion::OnEnd  (line 56, @0x00000000027f64b0, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Companion::OnEnd(CDOTA_BotMode_Companion *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// CDOTA_BotMode_Companion::UpdateCompanionPositionOffsets  (line 65, @0x00000000027f6e40, libserver.so)  // inlines: curtime
// calls: CDOTA_BotMode::GetUnit, RandomFloat, RandomInt
// callers: CDOTA_BotMode_Companion::GetCompanionPosition
void __fastcall CDOTA_BotMode_Companion::UpdateCompanionPositionOffsets(CDOTA_BotMode_Companion *const this)
{
  float m_flCurrentTime; // xmm1_4
  float m_flOffsetTimer; // xmm0_4
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v6; // eax
  float v7; // xmm1_4
  CGlobalVars *v8; // rbx
  void (__fastcall *v9)(__int64); // rax
  float v10; // xmm0_4
  float v11; // [rsp-24h] [rbp-2Ch]
  float m_flCompanionDistance; // [rsp-24h] [rbp-2Ch]
  float v13; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  m_flOffsetTimer = this->m_flOffsetTimer;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = this->m_flOffsetTimer;
        (m_pfnWarningFunc)(1, m_flOffsetTimer, 0.0);
        m_flOffsetTimer = v11;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( m_flOffsetTimer <= m_flCurrentTime )
  {
    m_flCompanionDistance = CDOTA_BotMode::GetUnit(this)->m_flCompanionDistance;
    this->m_flForwardOffset = -RandomFloat(0.64999998 * m_flCompanionDistance, m_flCompanionDistance);
    v13 = RandomFloat(0.75 * m_flCompanionDistance, m_flCompanionDistance);
    v6 = RandomInt(0, 1);
    v7 = 1.0;
    if ( v6 != 0 )
      v7 = -1.0;
    v8 = gpGlobals;
    this->m_flSideOffset = v13 * v7;
    if ( v8 != 0 )
    {
      if ( !v8->m_bEnableAssertions && !v8->m_bInSimulation )
      {
        v9 = v8->m_pfnWarningFunc;
        if ( v9 != 0 )
          v9(1);
      }
      v10 = v8->m_flCurrentTime + 3.0;
    }
    else
    {
      v10 = 3.0;
    }
    this->m_flOffsetTimer = v10;
  }
}


// CDOTA_BotMode_Companion::GetCompanionPosition  (line 82, @0x00000000027f6fb0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_BotMode_Companion::UpdateCompanionPositionOffsets, CBaseEntity::GetAbsOrigin
// callers: CDOTA_BotMode_Companion::HandleModeCompanionAction
Vector __fastcall CDOTA_BotMode_Companion::GetCompanionPosition(
        CDOTA_BotMode_Companion *const this,
        CBaseEntity *pCompanionEntity)
{
  const QAngle *AbsAngles; // rax
  float m_flSideOffset; // xmm0_4
  float m_flForwardOffset; // xmm1_4
  const Vector *AbsOrigin; // rax
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v12; // [rsp+8h] [rbp-78h]
  float v13; // [rsp+Ch] [rbp-74h]
  float v14; // [rsp+10h] [rbp-70h]
  float v15; // [rsp+14h] [rbp-6Ch]
  float v16; // [rsp+18h] [rbp-68h]
  float v17; // [rsp+1Ch] [rbp-64h]
  Vector vForward; // [rsp+30h] [rbp-50h] BYREF
  Vector vRight; // [rsp+40h] [rbp-40h] BYREF
  Vector vUp; // [rsp+50h] [rbp-30h] BYREF
  float v21[8]; // [rsp+60h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(pCompanionEntity);
  AngleVectors(AbsAngles, &vForward, &vRight, &vUp);
  CDOTA_BotMode_Companion::UpdateCompanionPositionOffsets(this);
  m_flSideOffset = this->m_flSideOffset;
  m_flForwardOffset = this->m_flForwardOffset;
  v17 = vRight.x * m_flSideOffset;
  v16 = vRight.y * m_flSideOffset;
  v12 = vForward.x * m_flForwardOffset;
  v15 = m_flSideOffset * vRight.z;
  v13 = vForward.y * m_flForwardOffset;
  v14 = m_flForwardOffset * vForward.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pCompanionEntity);
  v8 = (v12 + AbsOrigin->x) + v17;
  v9 = v14 + AbsOrigin->z;
  v21[1] = (v13 + AbsOrigin->y) + v16;
  v21[0] = v8;
  *&result.x = *v21;
  result.z = v9 + v15;
  return result;
}


// CDOTA_BotMode_Companion::SwitchToSubMode  (line 98, @0x0000000002803fa0, libserver.so)  // inlines: Init, Set, operator=
// calls: CDOTA_Bot::ClearActions
// callers: CDOTA_BotMode_Companion::UpdateSubMode
void __fastcall CDOTA_BotMode_Companion::SwitchToSubMode(CDOTA_BotMode_Companion *const this, int nNewMode)
{
  int m_nSubMode; // eax

  m_nSubMode = this->m_nSubMode;
  if ( m_nSubMode != nNewMode )
  {
    switch ( m_nSubMode )
    {
      case 4:
        this->m_vTargetPos.x = 0.0;
        this->m_vTargetPos.y = 0.0;
        this->m_vTargetPos.z = 0.0;
        break;
      case 6:
        this->m_flActionTimer = 0.0;
        CDOTA_Bot::ClearActions(this->m_pBot, 1, 1);
        this->m_hEnemy.m_Index = -1;
        break;
      case 1:
        this->m_flIdleTimer = 0.0;
        this->m_hFriendly.m_Index = -1;
        break;
      default:
        break;
    }
    this->m_nSubMode = nNewMode;
    this->m_bUpdateAction = 1;
  }
}


// CDOTA_BotMode_Companion::UpdateSubMode  (line 151, @0x000000000280bff0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetCompanionEntity, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetInstance, GetNearbyCreeps, GetNearbyUnits, GetSerialNumber, GetTeamNumber, GetUnit, Length, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::LevelAbilities, CDOTA_Bot::UseAbilities, CDOTA_Bot::IsUsingAbility, CDOTA_BotMode_Companion::SwitchToSubMode, CDOTA_Bot::UseItems, CDOTA_Bot::IsUsingItem, CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, CDOTA_ScriptedSpawner::GetCurrentMoveToTarget, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, __dynamic_cast (17 total)
// callers: CDOTA_BotMode_Companion::Think
void __fastcall CDOTA_BotMode_Companion::UpdateSubMode(CDOTA_BotMode_Companion *const this)
{
  CDOTA_BaseNPC *Unit; // r12
  CDOTA_ScriptedSpawner *v3; // rax
  CBaseEntity *CurrentMoveToTarget; // r12
  CEntityInstance *v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // rax
  int v8; // edx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  unsigned __int64 v11; // r13
  __int64 v12; // r15
  CEntityInstance *v13; // rax
  const CBaseEntity *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r14
  const Vector *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  int v22; // eax
  __int16 v23; // cx
  CDOTA_Bot *m_pBot; // r14
  __int64 m_Size; // rax
  EHANDLE *p_m_hUnit; // r14
  const CHandle<CBaseEntity> *v27; // r12
  const CHandle<CBaseEntity> *i; // r13
  CEntityInstance *v29; // rax
  char m_CScriptComponent_high; // r15
  CEntityInstance *v31; // rax
  unsigned __int64 v32; // r13
  __int64 v33; // r15
  CEntityInstance *v34; // rax
  const CBaseEntity *v35; // r12
  CDOTA_BaseNPC *v36; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v38; // rax
  CDOTA_BaseNPC *pClosestCreep; // [rsp+10h] [rbp-60h]
  CDOTA_BaseNPC *pClosestCreepa; // [rsp+10h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyCreeps; // [rsp+20h] [rbp-50h] BYREF

  CDOTA_Bot::LevelAbilities(this->m_pBot);
  CDOTA_Bot::UseAbilities(this->m_pBot);
  if ( CDOTA_Bot::IsUsingAbility(this->m_pBot) )
  {
    CDOTA_BotMode_Companion::SwitchToSubMode(this, 2);
    return;
  }
  CDOTA_Bot::UseItems(this->m_pBot);
  if ( CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    CDOTA_BotMode_Companion::SwitchToSubMode(this, 3);
    return;
  }
  Unit = CDOTA_BotMode::GetUnit(this);
  v3 = CEntityHandle::operator CEntityInstance *(&Unit->m_hTutorialSpawner);
  if ( v3 != 0 )
  {
    CurrentMoveToTarget = CDOTA_ScriptedSpawner::GetCurrentMoveToTarget(v3, Unit);
    if ( CurrentMoveToTarget != 0 )
    {
      CDOTA_BotMode_Companion::SwitchToSubMode(this, 4);
      this->m_vTargetPos = *CBaseEntity::GetAbsOrigin(CurrentMoveToTarget);
      this->m_angTargetAngles = *CBaseEntity::GetAbsAngles(CurrentMoveToTarget);
      return;
    }
    Unit = CDOTA_BotMode::GetUnit(this);
  }
  if ( !Unit->m_bIsPartyCompanion
    || (v5 = CEntityHandle::operator CEntityInstance *(&Unit->m_CompanionEntity)) == 0
    || (v6 = __dynamic_cast(v5, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0)) == 0 )
  {
    if ( Unit->m_bCanPartyCompanionAttack )
    {
      m_pBot = this->m_pBot;
      hEnemyCreeps.m_Size = 0;
      hEnemyCreeps.m_Memory.m_pMemory = 0;
      hEnemyCreeps.m_Memory.m_nAllocationCount = 0;
      hEnemyCreeps.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::UpdateNearbyUnits(m_pBot);
      m_Size = m_pBot->m_NearbyCreeps.m_Size;
      p_m_hUnit = &m_pBot->m_hUnit;
      v27 = *&p_m_hUnit[99].m_Index;
      for ( i = &v27[2 * m_Size]; i != v27; v27 += 2 )
      {
        v29 = CEntityHandle::operator CEntityInstance *(v27);
        if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
        {
          m_CScriptComponent_high = HIBYTE(v29[7].m_CScriptComponent);
          v31 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v31 == 0 || BYTE3(v31[7]._vptr_IHandleEntity) == 0 )
            v31 = 0;
          if ( m_CScriptComponent_high != HIBYTE(v31[7].m_CScriptComponent) )
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(&hEnemyCreeps, v27);
        }
      }
      if ( hEnemyCreeps.m_Size > 0 )
      {
        v32 = 0;
        pClosestCreepa = 0;
        v33 = 4LL * (hEnemyCreeps.m_Size - 1) + 4;
        do
        {
          v34 = CEntityHandle::operator CEntityInstance *(&hEnemyCreeps.m_Memory.m_pMemory[v32 / 4]);
          v35 = v34;
          if ( v34 == 0 || BYTE3(v34[7]._vptr_IHandleEntity) == 0 )
            v35 = 0;
          v36 = CDOTA_BotMode::GetUnit(this);
          if ( v36 == 0
            || (AbsOrigin = CBaseEntity::GetAbsOrigin(v36),
                v38 = CBaseEntity::GetAbsOrigin(v35),
                fsqrt(
                  (((v38->x - AbsOrigin->x) * (v38->x - AbsOrigin->x))
                 + ((v38->y - AbsOrigin->y) * (v38->y - AbsOrigin->y)))
                + ((v38->z - AbsOrigin->z) * (v38->z - AbsOrigin->z))) < 1024.0) )
          {
            pClosestCreepa = v35;
          }
          v32 += 4LL;
        }
        while ( v32 != v33 );
        if ( pClosestCreepa != 0 )
        {
          CDOTA_BotMode_Companion::SwitchToSubMode(this, 6);
          m_pEntity = pClosestCreepa->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v20 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hEnemy.m_Index) = v20 | this->m_hEnemy.m_Index & 0x8000;
            this->m_hEnemy.m_Index = (v19 << 15) | this->m_hEnemy.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hEnemy.m_Index = -1;
          }
          goto LABEL_33;
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreeps);
    }
    hEnemyCreeps.m_Size = 0;
    hEnemyCreeps.m_Memory.m_pMemory = 0;
    hEnemyCreeps.m_Memory.m_nAllocationCount = 0;
    hEnemyCreeps.m_Memory.m_nGrowSize = 0;
    v10 = CDOTA_BotMode::GetUnit(this);
    CDOTA_Bot::FindNearbyHeroes(this->m_pBot, 2000.0, v10->m_iTeamNum.m_Value, &hEnemyCreeps);
    if ( hEnemyCreeps.m_Size > 0 )
    {
      v11 = 0;
      pClosestCreep = 0;
      v12 = 4LL * (hEnemyCreeps.m_Size - 1) + 4;
      do
      {
        v13 = CEntityHandle::operator CEntityInstance *(&hEnemyCreeps.m_Memory.m_pMemory[v11 / 4]);
        v14 = v13;
        if ( v13 == 0 || BYTE3(v13[7]._vptr_IHandleEntity) == 0 || (v13[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          v14 = 0;
        v15 = CDOTA_BotMode::GetUnit(this);
        if ( v15 != v14 )
        {
          if ( v15 == 0
            || (v16 = CBaseEntity::GetAbsOrigin(v15),
                v17 = CBaseEntity::GetAbsOrigin(v14),
                fsqrt(
                  (((v17->x - v16->x) * (v17->x - v16->x)) + ((v17->y - v16->y) * (v17->y - v16->y)))
                + ((v17->z - v16->z) * (v17->z - v16->z))) < 2000.0) )
          {
            pClosestCreep = v14;
          }
        }
        v11 += 4LL;
      }
      while ( v11 != v12 );
      if ( pClosestCreep != 0 )
      {
        CDOTA_BotMode_Companion::SwitchToSubMode(this, 1);
        v21 = pClosestCreep->m_pEntity;
        if ( v21 != 0 )
        {
          v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
          v23 = 0x7FFF;
          if ( v21->m_EHandle.m_Index != -1 )
            v23 = v21->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hFriendly.m_Index) = v23 | this->m_hFriendly.m_Index & 0x8000;
          this->m_hFriendly.m_Index = (v22 << 15) | this->m_hFriendly.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hFriendly.m_Index = -1;
        }
      }
    }
LABEL_33:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreeps);
    return;
  }
  CDOTA_BotMode_Companion::SwitchToSubMode(this, 5);
  v7 = v6[1];
  if ( v7 != 0 )
  {
    v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
    v9 = 0x7FFF;
    if ( *(v7 + 16) != -1 )
      v9 = *(v7 + 16) & 0x7FFF;
    LOWORD(this->m_hFriendly.m_Index) = v9 | this->m_hFriendly.m_Index & 0x8000;
    this->m_hFriendly.m_Index = (v8 << 15) | this->m_hFriendly.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hFriendly.m_Index = -1;
  }
}


// CDOTA_BotMode_Companion::Think  (line 260, @0x000000000280c640, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DistTo, EnterScope, FastSqrt, Get, GetElapsed, GetInstance, GetTimebaseRegister, InTargetThread, IsEnabled, Length, PLAT_CPU_TIME, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_Companion::HandleModeCompanionIdle, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTA_Bot::SetAttackAction, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_BotMode_Companion::HandleModeCompanionAction, CVProfNode::GetSubNode(char const*,int,char const*,int) (15 total)
// strings: "CDOTA_BotMode_Companion::Think"
void __fastcall CDOTA_BotMode_Companion::Think(CDOTA_BotMode_Companion *const this)
{
  int m_enabled; // r8d
  bool v3; // r13
  int m_nSubMode; // eax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v8; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v15; // rax
  float x; // [rsp+8h] [rbp-38h]
  float y; // [rsp+Ch] [rbp-34h]

  if ( !CDOTA_BotMode::DoScriptThink(this) && !this->m_pBot->m_bHuman )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v3 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      v8 = __rdtsc();
      if ( m_TargetThreadId == ThreadGetCurrentId() )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Companion::Think" )
        {
          m_pCurNode = CVProfNode::GetSubNode(
                         g_VProfCurrentProfile.m_pCurNode,
                         "CDOTA_BotMode_Companion::Think",
                         0,
                         "Bots",
                         4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v15 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v15->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v8 + __rdtsc();
    }
    CDOTA_BotMode_Companion::UpdateSubMode(this);
    m_nSubMode = this->m_nSubMode;
    if ( (m_nSubMode - 2) > 1 )
    {
      switch ( m_nSubMode )
      {
        case 4:
          x = this->m_vTargetPos.x;
          y = this->m_vTargetPos.y;
          Unit = CDOTA_BotMode::GetUnit(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
          if ( fsqrt((((AbsOrigin->x - x) * (AbsOrigin->x - x)) + ((AbsOrigin->y - y) * (AbsOrigin->y - y))) + 0.0) >= 100.0 )
          {
            CDOTA_Bot::SetMoveAction(this->m_pBot, &this->m_vTargetPos, 0, 0);
          }
          else
          {
            v12 = CDOTA_BotMode::GetUnit(this);
            v13 = (*(v12->_vptr_IHandleEntity + 376))(v12);
            (*(*v13 + 920LL))(v13, this->m_angTargetAngles.y);
          }
          break;
        case 5:
          CDOTA_BotMode_Companion::HandleModeCompanionAction(this);
          break;
        case 6:
          v5 = CEntityHandle::operator CEntityInstance *(&this->m_hEnemy);
          if ( v5 != 0 )
            v6 = __dynamic_cast(v5, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
          else
            v6 = 0;
          CDOTA_Bot::SetAttackAction(this->m_pBot, v6, 0);
          break;
        case 1:
          CDOTA_BotMode_Companion::HandleModeCompanionIdle(this);
          break;
        default:
          goto LABEL_15;
      }
      m_nSubMode = this->m_nSubMode;
    }
    this->m_nLastSubMode = m_nSubMode;
LABEL_15:
    if ( v3 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_BotMode_Companion::HandleModeCompanionAction  (line 333, @0x0000000002808900, libserver.so)  // inlines: DistTo, FastSqrt, Get, GetAttackTarget, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, Length, LookupEntity, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator CEntityInstance*, operator*, operator+, operator-, operator=
// calls: __dynamic_cast, CBaseEntity::GetAbsOrigin, CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, VectorNormalize, CDOTA_Bot::SetMoveAction, FindClearSpaceForUnit, CDOTA_BotMode_Companion::GetCompanionPosition
// callers: CDOTA_BotMode_Companion::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Companion::HandleModeCompanionAction(CDOTA_BotMode_Companion *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *v5; // rax
  const CEntityHandle *v6; // r12
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm4_4
  vec_t z; // xmm5_4
  CDOTA_BaseNPC *Unit; // rax
  const Vector *v11; // rax
  __m128i v12; // xmm0
  float v13; // r13d
  const CBaseEntity *v14; // rax
  const Vector *v15; // rax
  vec_t v16; // xmm0_4
  vec_t v17; // xmm2_4
  CGlobalVars *v18; // r12
  FnGlobalVarsWarningFunc v19; // rax
  float v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  float m_flCurrentTime; // xmm1_4
  float m_flActionTimer; // xmm0_4
  CGlobalVars *v24; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *v26; // rax
  float v27; // [rsp+0h] [rbp-60h]
  float vHeroPos; // [rsp+4h] [rbp-5Ch]
  unsigned __int64 vHeroPos_4; // [rsp+8h] [rbp-58h]
  float vHeroPos_8; // [rsp+Ch] [rbp-54h]
  Vector vTargetPos; // [rsp+10h] [rbp-50h] BYREF
  Vector vPos; // [rsp+20h] [rbp-40h]
  Vector vRay; // [rsp+30h] [rbp-30h] BYREF
  Vector v34; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_hFriendly.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFriendly.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hFriendly.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        v5 = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
        v6 = v5;
        if ( v5 != 0 )
        {
          vTargetPos.x = 0.0;
          vTargetPos.y = 0.0;
          vTargetPos.z = 0.0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
          y = AbsOrigin->y;
          z = AbsOrigin->z;
          vPos = *AbsOrigin;
          vHeroPos_4 = __PAIR64__(LODWORD(y), LODWORD(vPos.x));
          vHeroPos = z;
          Unit = CDOTA_BotMode::GetUnit(this);
          v11 = CBaseEntity::GetAbsOrigin(Unit);
          v27 = (((*&vHeroPos_4 - v11->x) * (*&vHeroPos_4 - v11->x))
               + ((*(&vHeroPos_4 + 1) - v11->y) * (*(&vHeroPos_4 + 1) - v11->y)))
              + ((vHeroPos - v11->z) * (vHeroPos - v11->z));
          v12 = LODWORD(v27);
          *v12.m128i_i32 = fsqrt(v27);
          v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
          if ( *v12.m128i_i32 > 3500.0 )
          {
            v21 = CDOTA_BotMode::GetUnit(this);
            v34.z = vHeroPos;
            *&vPos.x = vHeroPos_4;
            *&v34.x = vHeroPos_4;
            FindClearSpaceForUnit(v21, v34, 1);
          }
          else
          {
            v14 = CEntityHandle::operator CEntityInstance *(v6 + 715);
            if ( v14 != 0 )
            {
              v15 = CBaseEntity::GetAbsOrigin(v14);
              v16 = vHeroPos - v15->z;
              v17 = vPos.x - v15->x;
              vRay.y = *(&vHeroPos_4 + 1) - v15->y;
              vRay.z = v16;
              vRay.x = v17;
              VectorNormalize(&vRay);
              vTargetPos.z = 0.0;
              vTargetPos.y = (vRay.y * 512.0) + *(&vHeroPos_4 + 1);
              vTargetPos.x = (512.0 * vRay.x) + vPos.x;
            }
            else
            {
              v26 = CEntityHandle::operator CEntityInstance *(&this->m_hFriendly);
              vTargetPos.z = 0.0;
              vRay = CDOTA_BotMode_Companion::GetCompanionPosition(this, v26);
              *&vTargetPos.x = *&vRay.x;
            }
            if ( v13 > 1024.0 )
              goto LABEL_12;
            m_flCurrentTime = 0.0;
            m_flActionTimer = this->m_flActionTimer;
            v24 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                if ( m_pfnWarningFunc != 0 )
                {
                  vHeroPos_8 = this->m_flActionTimer;
                  (m_pfnWarningFunc)(1, m_flActionTimer, 0.0);
                  m_flActionTimer = vHeroPos_8;
                }
              }
              m_flCurrentTime = v24->m_flCurrentTime;
            }
            if ( m_flCurrentTime > m_flActionTimer )
            {
LABEL_12:
              CDOTA_Bot::SetMoveAction(this->m_pBot, &vTargetPos, 0, 0);
              v18 = gpGlobals;
              if ( gpGlobals != 0 )
              {
                if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
                {
                  v19 = gpGlobals->m_pfnWarningFunc;
                  if ( v19 != 0 )
                    v19(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                }
                v20 = v18->m_flCurrentTime + 10.0;
              }
              else
              {
                v20 = 10.0;
              }
              this->m_flActionTimer = v20;
            }
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_Companion::HandleModeCompanionIdle  (line 384, @0x0000000002803750, libserver.so)
// calls: CDOTA_Bot::Action_Hold
// callers: CDOTA_BotMode_Companion::Think
void __fastcall CDOTA_BotMode_Companion::HandleModeCompanionIdle(CDOTA_BotMode_Companion *const this)
{
  if ( this->m_nSubMode == 1 && this->m_nLastSubMode != 1 )
    CDOTA_Bot::Action_Hold(this->m_pBot);
}


// CDOTA_BotMode_Companion::CalculateDesiredLocation  (line 395, @0x00000000027e0200, libserver.so)
Vector __fastcall CDOTA_BotMode_Companion::CalculateDesiredLocation(CDOTA_BotMode_Companion *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_Companion::GetDesire  (line 402, @0x00000000027e1e10, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, std::terminate(void)
// strings: "CDOTA_BotMode_Assemble::GetDesire"
float __fastcall CDOTA_BotMode_Companion::GetDesire(CDOTA_BotMode_Companion *const this)
{
  ThreadId_t m_TargetThreadId; // r13
  unsigned __int64 v3; // r12
  bool m_fAtRoot; // di
  uint64 m_numCalls; // rsi
  unsigned __int64 m_numTimeBaseTicks; // rcx
  unsigned __int64 v7; // r12
  ThreadId_t v8; // r13
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v11; // rax

  if ( g_VProfCurrentProfile.m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v3 = __rdtsc();
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
      v11 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v11->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
      m_fAtRoot = 0;
    }
    else
    {
      m_fAtRoot = g_VProfCurrentProfile.m_fAtRoot;
    }
    m_numCalls = g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls + 1;
    m_numTimeBaseTicks = __rdtsc() + g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks - v3;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls = m_numCalls;
    v7 = __rdtsc();
    if ( !m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
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
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        m_numCalls = g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
      else
      {
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        m_numCalls = g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      }
    }
    g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls = m_numCalls + 1;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v7 + __rdtsc();
  }
  return 1.0;
}


// CDOTA_BotMode_Companion::GetDebugColor  (line 411, @0x00000000027e0220, libserver.so)
color24 __fastcall CDOTA_BotMode_Companion::GetDebugColor(CDOTA_BotMode_Companion *const this)
{
  return 255;
}


