
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_EvasiveManeuvers::CDOTA_BotMode_EvasiveManeuvers  (line 22, @0x000000000281b370, libserver.so)
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_EvasiveManeuvers::CDOTA_BotMode_EvasiveManeuvers(
        CDOTA_BotMode_EvasiveManeuvers *const this,
        CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->_vptr_CDOTA_BotMode = off_42B7FD0;
}


// CDOTA_BotMode_EvasiveManeuvers::OnStart  (line 29, @0x0000000002817520, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_EvasiveManeuvers::OnStart(CDOTA_BotMode_EvasiveManeuvers *const this)
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


// CDOTA_BotMode_EvasiveManeuvers::OnEnd  (line 39, @0x0000000002816420, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_EvasiveManeuvers::OnEnd(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// CDOTA_BotMode_EvasiveManeuvers::Think  (line 48, @0x000000000281e440, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsEnabled, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_Bot::SetMoveAction, CVProfile::EnterScope, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetAttackRange, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetOpposingTeamNumber (18 total)
// strings: "CDOTA_BotMode_EvasiveManeuvers::Think"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_EvasiveManeuvers::Think(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  int m_enabled; // edx
  bool v3; // r15
  unsigned int m_iAvoidType; // eax
  double v5; // xmm0_8
  CDOTA_Bot *m_pBot; // rdi
  int v7; // xmm1_4
  CDOTA_BaseNPC *Unit; // rax
  float AttackRange; // xmm0_4
  __int64 v10; // r12
  int v11; // ebx
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  int OpposingTeamNumber; // r12d
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm0_4
  CDOTA_BaseNPC *v23; // rax
  int m_Size; // eax
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rsi
  double v27; // xmm0_8
  CDOTA_Bot *v28; // rdi
  vec_t v29; // xmm1_4
  CDOTA_BaseNPC *pTarget; // [rsp+10h] [rbp-90h]
  int iBestHealth; // [rsp+1Ch] [rbp-84h]
  Vector vLoc; // [rsp+20h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyCreeps; // [rsp+50h] [rbp-50h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_EvasiveManeuvers::Think", 0, "Bots", 0, 4);
  if ( !CDOTA_BotMode::DoScriptThink(this)
    && !CDOTA_Bot::IsUsingAbility(this->m_pBot)
    && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    m_iAvoidType = this->m_iAvoidType;
    if ( m_iAvoidType != 0 )
    {
      if ( m_iAvoidType <= 2 )
      {
        v5 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
        m_pBot = this->m_pBot;
        *&hEnemyCreeps.m_Size = v5;
        LODWORD(hEnemyCreeps.m_Memory.m_pMemory) = v7;
        CDOTA_Bot::SetMoveAction(m_pBot, &hEnemyCreeps, 1, 1);
      }
      goto LABEL_4;
    }
    hEnemyHeroes.m_Size = 0;
    hEnemyHeroes.m_Memory.m_pMemory = 0;
    hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
    hEnemyHeroes.m_Memory.m_nGrowSize = 0;
    Unit = CDOTA_BotMode::GetUnit(this);
    AttackRange = CDOTA_BaseNPC::GetAttackRange(Unit);
    CDOTA_Bot::GetNearbyHeroes(
      this->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &hEnemyHeroes,
      AttackRange + 100.0);
    if ( hEnemyHeroes.m_Size <= 0 )
    {
      iBestHealth = 99999;
      pTarget = 0;
    }
    else
    {
      iBestHealth = 99999;
      v10 = 0;
      v11 = 0;
      pTarget = 0;
      do
      {
        v12 = &hEnemyHeroes.m_Memory.m_pMemory[v10];
        m_Index = hEnemyHeroes.m_Memory.m_pMemory[v10].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v18 = CDOTA_BotMode::GetUnit(this);
                if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v18, m_pInstance)
                  && CBaseEntity::GetHealth(m_pInstance) < iBestHealth )
                {
                  iBestHealth = CBaseEntity::GetHealth(m_pInstance);
                  pTarget = m_pInstance;
                }
              }
            }
          }
        }
        ++v11;
        ++v10;
      }
      while ( hEnemyHeroes.m_Size > v11 );
    }
    hEnemyCreeps.m_Size = 0;
    hEnemyCreeps.m_Memory.m_pMemory = 0;
    hEnemyCreeps.m_Memory.m_nAllocationCount = 0;
    hEnemyCreeps.m_Memory.m_nGrowSize = 0;
    v19 = CDOTA_BotMode::GetUnit(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v19);
    v21 = CDOTA_BotMode::GetUnit(this);
    v22 = CDOTA_BaseNPC::GetAttackRange(v21);
    CDOTA_Bot::FindNearbyCreeps(this->m_pBot, v22 + 100.0, OpposingTeamNumber, 0, &hEnemyCreeps);
    if ( pTarget != 0 )
    {
      v23 = CDOTA_BotMode::GetUnit(this);
      if ( 2 * CDOTA_BaseNPC::GetAttackDamage(v23) > iBestHealth
        || (m_Size = hEnemyCreeps.m_Size, hEnemyCreeps.m_Size == 0) )
      {
        CDOTA_Bot::SetAttackAction(this->m_pBot, pTarget, 0);
LABEL_30:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreeps);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
        goto LABEL_4;
      }
    }
    else
    {
      m_Size = hEnemyCreeps.m_Size;
    }
    if ( m_Size <= 0 )
    {
      v27 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
      v28 = this->m_pBot;
      *&vLoc.x = v27;
      vLoc.z = v29;
      CDOTA_Bot::SetMoveAction(v28, &vLoc, 1, 1);
    }
    else
    {
      v25 = CEntityHandle::operator CEntityInstance *(hEnemyCreeps.m_Memory.m_pMemory);
      if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
        v26 = v25;
      else
        v26 = 0;
      CDOTA_Bot::SetAttackAction(this->m_pBot, v26, 0);
    }
    goto LABEL_30;
  }
LABEL_4:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_EvasiveManeuvers::CalculateDesiredLocation  (line 113, @0x0000000002816c90, libserver.so)  // inlines: DotProduct, QAngle, Vector, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator!=, operator*, operator+, operator-, operator=
// calls: CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::IsLocationPassable, VectorRotate, CDOTA_Bot_Pathing::IsPathClear, CDOTA_Bot::GetAvoidanceAmountForLocation
Vector __fastcall CDOTA_BotMode_EvasiveManeuvers::CalculateDesiredLocation(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  int m_iAvoidType; // eax
  vec_t v3; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Unit; // rax
  int v8; // ebx
  const Vector *AbsOrigin; // rax
  float x; // xmm3_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // r14d
  float v16; // r13d
  __m128 v17; // xmm3
  __m128 v18; // xmm7
  int v19; // xmm3_4
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  CDOTA_TeamCommander *TeamCommander; // rax
  bool IsLocationPassable; // al
  CDOTA_BaseNPC *v26; // rax
  Vector *v27; // r14
  const Vector *v28; // rax
  vec_t v29; // xmm0_4
  Vector *v30; // r12
  float v31; // xmm3_4
  int v32; // ebx
  CDOTA_Bot_Pathing *p_m_Pathing; // rdi
  vec_t v34; // xmm1_4
  vec_t v35; // xmm2_4
  bool IsPathClear; // al
  vec_t v37; // ebx
  vec_t v38; // r12d
  Vector *v39; // r14
  float v40; // xmm0_4
  float v41; // xmm1_4
  int AvoidanceAmountForLocation; // eax
  float fSign; // [rsp+10h] [rbp-1A0h]
  float vStarta; // [rsp+18h] [rbp-198h]
  float vStart; // [rsp+18h] [rbp-198h]
  float vEnda; // [rsp+20h] [rbp-190h]
  float vEndb; // [rsp+20h] [rbp-190h]
  vec_t vEnd; // [rsp+20h] [rbp-190h]
  float fBestAvoidance; // [rsp+2Ch] [rbp-184h]
  float fBestAvoidancea; // [rsp+2Ch] [rbp-184h]
  float fBestAvoidanceb; // [rsp+2Ch] [rbp-184h]
  Vector vBaseLoc; // [rsp+40h] [rbp-170h] BYREF
  Vector vTargetLoc; // [rsp+50h] [rbp-160h] BYREF
  Vector vAwayDirs[12]; // [rsp+60h] [rbp-150h] BYREF
  Vector vTargetLocs[12]; // [rsp+F0h] [rbp-C0h] BYREF
  _BYTE v56[48]; // [rsp+180h] [rbp-30h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_iAvoidType = this->m_iAvoidType;
  if ( m_iAvoidType != 1 )
  {
    if ( m_iAvoidType == 2 )
    {
      if ( this->m_pBot->m_iDifficulty <= 1 )
        goto LABEL_4;
      Unit = CDOTA_BotMode::GetUnit(this);
      v8 = 2;
      AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
      z = AbsOrigin->z;
      vAwayDirs[0].y = -this->m_vAvoidVector.x;
      v13 = x - this->m_vAvoidLoc.x;
      vAwayDirs[0].z = 0.0;
      vStarta = v13;
      vEnda = y - this->m_vAvoidLoc.y;
      fBestAvoidance = z - this->m_vAvoidLoc.z;
      vAwayDirs[0].x = this->m_vAvoidVector.y;
      VectorNormalize(vAwayDirs);
      v14 = vStarta;
      vStart = vAwayDirs[0].x;
      v15 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vAwayDirs[0].y)));
      v16 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vAwayDirs[0].z)));
      v17.m128_f32[0] = ((v14 * vAwayDirs[0].x) + (vEnda * vAwayDirs[0].y)) + (fBestAvoidance * vAwayDirs[0].z);
      v18 = _mm_cmplt_ss(0LL, v17);
      LODWORD(fSign) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v18, 0xBF800000).m128_f32[0]) | v18.m128_i32[0] & 0x3F800000;
      *&v19 = 100.0;
      while ( 1 )
      {
        vEndb = *&v19;
        v20 = CDOTA_BotMode::GetUnit(this);
        v21 = CBaseEntity::GetAbsOrigin(v20);
        v22 = (((v16 * fSign) * v8) * vEndb) + v21->z;
        v23 = (((vStart * fSign) * v8) * vEndb) + v21->x;
        vTargetLocs[0].y = (((v15 * fSign) * v8) * vEndb) + v21->y;
        vTargetLocs[0].z = v22;
        vTargetLocs[0].x = v23;
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        IsLocationPassable = CDOTA_TeamCommander::IsLocationPassable(TeamCommander, vTargetLocs);
        *&v19 = vEndb;
        if ( IsLocationPassable )
          break;
        if ( ++v8 == 10 )
          goto LABEL_4;
        v15 = vAwayDirs[0].y;
        v16 = vAwayDirs[0].z;
        vStart = vAwayDirs[0].x;
      }
      vTargetLoc = vTargetLocs[0];
    }
    else
    {
      if ( m_iAvoidType != 0 )
        goto LABEL_4;
      v6 = CDOTA_BotMode::GetUnit(this);
      vTargetLoc = *CBaseEntity::GetAbsOrigin(v6);
    }
    goto LABEL_5;
  }
  v26 = CDOTA_BotMode::GetUnit(this);
  v27 = vAwayDirs;
  v28 = CBaseEntity::GetAbsOrigin(v26);
  *&vBaseLoc.x = *&v28->x;
  *&v28 = v28->z;
  vAwayDirs[0].z = 0.0;
  v29 = vBaseLoc.y - this->m_vAvoidLoc.y;
  vAwayDirs[0].x = vBaseLoc.x - this->m_vAvoidLoc.x;
  LODWORD(vBaseLoc.z) = v28;
  vAwayDirs[0].y = v29;
  VectorNormalize(vAwayDirs);
  v30 = vTargetLocs;
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = 30.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[1]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = -30.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[2]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = 60.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[3]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = -60.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[4]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = 90.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[5]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = -90.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[6]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = 120.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[7]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = -120.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[8]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = 150.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[9]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = -150.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[10]);
  vTargetLocs[0].x = 0.0;
  vTargetLocs[0].y = 180.0;
  vTargetLocs[0].z = 0.0;
  VectorRotate(vAwayDirs, vTargetLocs, &vAwayDirs[11]);
  v31 = 100.0;
  do
  {
    v32 = 6;
    while ( 1 )
    {
      fBestAvoidancea = v31;
      p_m_Pathing = &this->m_pBot->m_Pathing;
      v34 = ((v27->y * v32) * v31) + vBaseLoc.y;
      v35 = ((v32 * v27->x) * v31) + vBaseLoc.x;
      vTargetLoc.z = ((v27->z * v32) * v31) + vBaseLoc.z;
      vTargetLoc.y = v34;
      vTargetLoc.x = v35;
      IsPathClear = CDOTA_Bot_Pathing::IsPathClear(p_m_Pathing, &vBaseLoc, &vTargetLoc, 40.0, 1, 0);
      v31 = fBestAvoidancea;
      if ( IsPathClear )
        break;
      if ( --v32 == 2 )
      {
        *v30 = vec3_origin;
        goto LABEL_18;
      }
    }
    *v30 = vTargetLoc;
LABEL_18:
    ++v30;
    ++v27;
  }
  while ( v30 != v56 );
  v37 = vec3_origin.x;
  v38 = vec3_origin.y;
  vEnd = vec3_origin.z;
  v39 = vTargetLocs;
  v40 = vec3_origin.x;
  v41 = 40.0;
  while ( v40 == v39->x && vec3_origin.y == v39->y && vec3_origin.z == v39->z )
  {
    if ( v56 == ++v39 )
      goto LABEL_28;
LABEL_23:
    v40 = vec3_origin.x;
  }
  fBestAvoidanceb = v41;
  AvoidanceAmountForLocation = CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, v39, 0);
  v41 = fBestAvoidanceb;
  if ( (fBestAvoidanceb - 5.0) > AvoidanceAmountForLocation )
  {
    v37 = v39->x;
    v41 = AvoidanceAmountForLocation;
    v38 = v39->y;
    vEnd = v39->z;
  }
  if ( v56 != ++v39 )
    goto LABEL_23;
LABEL_28:
  if ( v41 != 40.0 )
  {
    vTargetLoc.x = v37;
    vTargetLoc.y = v38;
    vTargetLoc.z = vEnd;
    goto LABEL_5;
  }
LABEL_4:
  *&vTargetLoc.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
  vTargetLoc.z = v3;
LABEL_5:
  *&result.x = *&vTargetLoc.x;
  result.z = vTargetLoc.z;
  return result;
}


// CDOTA_BotMode_EvasiveManeuvers::GetDesire  (line 222, @0x000000000281c260, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode_EvasiveManeuvers::WantsToNotMove, CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidLocation, CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidVector, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "CDOTA_BotMode_EvasiveManeuvers::GetDesire"
float __fastcall CDOTA_BotMode_EvasiveManeuvers::GetDesire(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  int m_enabled; // r10d
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  float fNoMove; // [rsp+8h] [rbp-38h]
  float fAvoidLocationa; // [rsp+Ch] [rbp-34h]
  float fAvoidLocation; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_EvasiveManeuvers::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_EvasiveManeuvers::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
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
    fNoMove = CDOTA_BotMode_EvasiveManeuvers::WantsToNotMove(this);
    fAvoidLocation = CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidLocation(
                       this,
                       &this->m_vAvoidLoc,
                       &this->m_fAvoidRadius);
    result = CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidVector(
               this,
               &this->m_vAvoidLoc,
               &this->m_vAvoidVector,
               &this->m_fAvoidRadius);
    if ( fNoMove <= fAvoidLocation || fNoMove <= result )
    {
      if ( fAvoidLocation > result )
      {
        this->m_iAvoidType = 1;
        result = fAvoidLocation;
      }
      else if ( result <= 0.0 )
      {
        result = 0.0;
      }
      else
      {
        this->m_iAvoidType = 2;
      }
    }
    else
    {
      this->m_iAvoidType = 0;
      result = fNoMove;
    }
  }
  if ( v3 )
  {
    fAvoidLocationa = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fAvoidLocationa;
  }
  return result;
}


// CDOTA_BotMode_EvasiveManeuvers::WantsToNotMove  (line 257, @0x000000000281b3a0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetHealth
// callers: CDOTA_BotMode_EvasiveManeuvers::GetDesire
// strings: "modifier_bloodseeker_rupture"
float __fastcall CDOTA_BotMode_EvasiveManeuvers::WantsToNotMove(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_Buff *ModifierByName; // rax
  float result; // xmm0_4
  CDOTA_BaseNPC *v5; // rax
  float v6; // xmm1_4

  Unit = CDOTA_BotMode::GetUnit(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Unit, "modifier_bloodseeker_rupture", 0);
  result = 0.0;
  if ( ModifierByName != 0 )
  {
    v5 = CDOTA_BotMode::GetUnit(this);
    v6 = (CBaseEntity::GetHealth(v5) - 100.0) / 1900.0;
    if ( v6 < 0.0 )
    {
      return 1.0;
    }
    else
    {
      result = 0.75;
      if ( v6 <= 1.0 )
        return (v6 * -0.25) + 1.0;
    }
  }
  return result;
}


// CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidLocation  (line 269, @0x000000000281b450, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, GetParent, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, Length2D, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator->, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetUnitList, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_ProjectileManager::GetTrackingProjectilesWithAvoidance, CGameSceneNode::GetOwnerEntity, CDOTA_Bot::GetTankRating, CUtlMemory<CDOTA_TrackingProjectileInfo*, int>::Purge, _Unwind_Resume
// callers: CDOTA_BotMode_EvasiveManeuvers::GetDesire
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
float __fastcall CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidLocation(
        CDOTA_BotMode_EvasiveManeuvers *const this,
        Vector *pLocation,
        float *pRadius)
{
  CDOTA_TeamCommander *TeamCommander; // rax
  __int64 v5; // kr00_8
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // r13
  CDOTA_ModifierManager *p_m_worldGroupId; // r14
  int v9; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v11; // r15
  float v12; // xmm0_4
  CDOTA_BaseNPC *Unit; // rax
  char v14; // al
  float v15; // xmm2_4
  char v16; // al
  float v17; // xmm2_4
  CDOTA_Buff *v18; // rbx
  unsigned int k; // r15d
  int v20; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // rax
  float v23; // xmm1_4
  int v24; // eax
  __int64 v25; // rbx
  CEntityInstance *m_pInstance; // rdi
  __int64 v27; // rdx
  int v28; // eax
  unsigned __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CEntityInstance *v32; // rax
  CEntityInstance *v33; // rax
  CEntityInstance *m_pObj; // rdi
  CBaseEntity *OwnerEntity; // rax
  unsigned __int8 m_Value; // r15
  CEntityInstance *v37; // rax
  __int64 v38; // r15
  CDOTA_BaseNPC *v39; // rax
  const Vector *v40; // rax
  float v41; // xmm0_4
  __int64 v42; // rax
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  float result; // xmm0_4
  CDOTA_BaseNPC *v46; // rax
  float TankRating; // xmm0_4
  int j; // [rsp+4h] [rbp-9Ch]
  float v51; // [rsp+18h] [rbp-88h]
  float fBestRadius; // [rsp+1Ch] [rbp-84h]
  vec_t x; // [rsp+28h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pUnitsToCheck; // [rsp+30h] [rbp-70h]
  __int64 i; // [rsp+38h] [rbp-68h]
  unsigned __int8 (__fastcall *fDesireb)(CDOTA_Buff *, CDOTA_BaseNPC *); // [rsp+40h] [rbp-60h]
  int fDesirec; // [rsp+40h] [rbp-60h]
  float fDesire; // [rsp+40h] [rbp-60h]
  float fDesirea; // [rsp+40h] [rbp-60h]
  float fRadius; // [rsp+48h] [rbp-58h]
  float fRadiusa; // [rsp+48h] [rbp-58h]
  float fRadiusb; // [rsp+48h] [rbp-58h]
  float fBestDesire; // [rsp+4Ch] [rbp-54h]
  float fBestDesirea; // [rsp+4Ch] [rbp-54h]
  __int128 vLocation; // [rsp+50h] [rbp-50h] OVERLAPPED BYREF
  int v66; // [rsp+60h] [rbp-40h]
  int v67; // [rsp+64h] [rbp-3Ch]

  TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
  pUnitsToCheck = CDOTA_TeamCommander::GetUnitList(
                    TeamCommander,
                    CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALL);
  x = vec3_invalid.x;
  v5 = *&vec3_invalid.y;
  if ( pUnitsToCheck->m_Size <= 0 )
  {
    fBestDesire = 0.0;
    fBestRadius = 0.0;
  }
  else
  {
    i = 0;
    fBestDesire = 0.0;
    fBestRadius = 0.0;
    do
    {
      v6 = CEntityHandle::operator CEntityInstance *(&pUnitsToCheck->m_Memory.m_pMemory[i]);
      v7 = v6;
      if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 && SLODWORD(v6[65]._vptr_IHandleEntity) > 0 )
      {
        p_m_worldGroupId = &v6[64].m_worldGroupId;
        v9 = 0;
        do
        {
          while ( 1 )
          {
            BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_worldGroupId, v9, 0);
            v11 = BuffByIndex;
            if ( BuffByIndex != 0 )
            {
              v12 = (*(BuffByIndex->_vptr_CDOTA_Buff + 77))(BuffByIndex, this->m_pBot);
              if ( fBestDesire < v12 )
              {
                fRadius = v12;
                fDesireb = *(v11->_vptr_CDOTA_Buff + 76);
                Unit = CDOTA_BotMode::GetUnit(this);
                if ( fDesireb(v11, Unit) != 0 )
                {
                  fDesirec = v11->m_iTeam;
                  if ( fDesirec != CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value )
                  {
                    v14 = (*(v11->_vptr_CDOTA_Buff + 79))(v11);
                    v15 = fRadius;
                    if ( v14 == 0
                      || (CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value & 0x200) == 0
                      && (v46 = CDOTA_BotMode::GetUnit(this), v15 = fRadius, !v46->m_bIsWaitingToSpawn.m_Value)
                      && (v46->m_nUnitState64.m_Value & 0x100) == 0 )
                    {
                      fDesire = v15;
                      v16 = (*(v11->_vptr_CDOTA_Buff + 80))(v11);
                      v17 = fDesire;
                      if ( v16 == 0 )
                        break;
                      TankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
                      v17 = fDesire;
                      if ( TankRating <= 0.69999999 )
                        break;
                    }
                  }
                }
              }
            }
            if ( ++v9 >= SLODWORD(v7[65]._vptr_IHandleEntity) )
              goto LABEL_21;
          }
          j = v9;
          v18 = v11;
          v51 = v17;
          for ( k = 0; k < (*(v18->_vptr_CDOTA_Buff + 74))(v18); ++k )
          {
            fRadiusa = (*(v18->_vptr_CDOTA_Buff + 78))(v18, k);
            *&vLocation = (*(v18->_vptr_CDOTA_Buff + 75))(v18, k);
            DWORD2(vLocation) = v20;
            v21 = CDOTA_BotMode::GetUnit(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
            v23 = fsqrt(
                    ((*&vLocation - AbsOrigin->x) * (*&vLocation - AbsOrigin->x))
                  + ((*(&vLocation + 1) - AbsOrigin->y) * (*(&vLocation + 1) - AbsOrigin->y)));
            if ( fRadiusa > 0.0 && fRadiusa > v23 )
            {
              v5 = *(&vLocation + 4);
              x = *&vLocation;
              fBestDesire = v51;
              fBestRadius = fRadiusa;
            }
          }
          v9 = j + 1;
        }
        while ( j + 1 < SLODWORD(v7[65]._vptr_IHandleEntity) );
      }
LABEL_21:
      v24 = i++;
    }
    while ( pUnitsToCheck->m_Size > v24 + 1 );
  }
  LODWORD(vLocation) = 0;
  *(&vLocation + 1) = 0;
  v66 = 0;
  v67 = 0;
  CDOTA_ProjectileManager::GetTrackingProjectilesWithAvoidance(&g_DOTAProjectileManager, &vLocation);
  if ( vLocation > 0 )
  {
    v25 = 0;
    while ( 1 )
    {
      m_pInstance = 0;
      v27 = *(*(&vLocation + 1) + 8 * v25);
      v28 = *(v27 + 40);
      if ( (v28 + 2) > 1 )
      {
        v29 = *(v27 + 40);
        v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v29 >> 9) & 0x3F];
        if ( v30 != 0 )
        {
          v31 = &v30[v29 & 0x1FF];
          if ( v31 != 0 && v28 == v31->m_EHandle.m_Index )
            m_pInstance = v31->m_pInstance;
        }
      }
      fDesirea = (*(m_pInstance->_vptr_IHandleEntity + 330))(m_pInstance, this->m_pBot);
      if ( fBestDesire >= fDesirea )
        goto LABEL_24;
      v32 = CEntityHandle::operator CEntityInstance *((*(*(&vLocation + 1) + 8 * v25) + 40LL));
      if ( (*(v32->_vptr_IHandleEntity + 328))(v32) != 0 )
      {
        if ( (CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value & 0x200) != 0 )
          goto LABEL_24;
        v43 = CDOTA_BotMode::GetUnit(this);
        if ( v43->m_bIsWaitingToSpawn.m_Value || (v43->m_nUnitState64.m_Value & 0x100) != 0 )
          goto LABEL_24;
      }
      v33 = CEntityHandle::operator CEntityInstance *((*(*(&vLocation + 1) + 8 * v25) + 40LL));
      if ( (*(v33->_vptr_IHandleEntity + 329))(v33) != 0 && CDOTA_Bot::GetTankRating(this->m_pBot) > 0.69999999 )
      {
        if ( vLocation <= ++v25 )
          break;
      }
      else
      {
        m_pObj = CEntityHandle::operator CEntityInstance *((*(*(&vLocation + 1) + 8 * v25) + 40LL))[3].m_CScriptComponent[1].m_pOwner.m_pObj;
        OwnerEntity = 0;
        if ( m_pObj != 0 )
          OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pObj);
        m_Value = OwnerEntity->m_iTeamNum.m_Value;
        if ( m_Value == CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value )
        {
          v37 = CEntityHandle::operator CEntityInstance *((*(*(&vLocation + 1) + 8 * v25) + 40LL));
          fRadiusb = (*(v37->_vptr_IHandleEntity + 327))(v37);
          v38 = *(*(&vLocation + 1) + 8 * v25);
          v39 = CDOTA_BotMode::GetUnit(this);
          v40 = CBaseEntity::GetAbsOrigin(v39);
          v41 = fsqrt(((v40->x - *(v38 + 4)) * (v40->x - *(v38 + 4))) + ((v40->y - *(v38 + 8)) * (v40->y - *(v38 + 8))));
          if ( fRadiusb > 0.0 && fRadiusb > v41 )
          {
            fBestDesire = fDesirea;
            v42 = *(*(&vLocation + 1) + 8 * v25);
            x = *(v42 + 4);
            fBestRadius = fRadiusb;
            v5 = *(v42 + 8);
          }
        }
LABEL_24:
        if ( vLocation <= ++v25 )
          break;
      }
    }
  }
  if ( fBestDesire <= 0.0 )
  {
    result = 0.0;
  }
  else
  {
    if ( pLocation != 0 )
    {
      pLocation->x = x;
      *&pLocation->y = v5;
    }
    if ( pRadius != 0 )
    {
      v44 = CDOTA_BotMode::GetUnit(this);
      *pRadius = (v44->m_flHullRadius + v44->m_flCollisionPadding) + fBestRadius;
    }
    result = fBestDesire;
  }
  LODWORD(vLocation) = 0;
  if ( (v67 & 0xC0000000) == 0 )
  {
    fBestDesirea = result;
    CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Purge((&vLocation + 8));
    result = fBestDesirea;
    if ( (v67 & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Purge((&vLocation + 8));
      return fBestDesirea;
    }
  }
  return result;
}


// CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidVector  (line 362, @0x000000000281bb50, libserver.so)  // inlines: DistanceToRay, DotProduct, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLinearProjectileByIndex, GetPaddedCollisionRadius, GetParent, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, Length, Length2D, LookupEntity, NormalizeInPlace, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator bool, operator*, operator+, operator-, operator->, operator=
// calls: CEntityHandle::operator CEntityInstance*, CGameSceneNode::GetOwnerEntity, CDOTA_BotMode::GetUnit, CDOTAFogOfWarSystem::IsLocationVisible, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Bot::GetTankRating
// callers: CDOTA_BotMode_EvasiveManeuvers::GetDesire
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidVector(
        CDOTA_BotMode_EvasiveManeuvers *const this,
        Vector *pLocation,
        Vector *pVelocity,
        float *pRadius)
{
  __int64 v6; // r15
  CDOTA_LinearProjectileInfo *v7; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // rax
  CEntityInstance *m_pObj; // rdi
  CBaseEntity *OwnerEntity; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  CEntityInstance *v18; // rax
  vec_t y; // xmm2_4
  vec_t z; // xmm2_4
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  float result; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  float v33; // [rsp+4h] [rbp-BCh]
  float fDesire; // [rsp+8h] [rbp-B8h]
  float v35; // [rsp+Ch] [rbp-B4h]
  float v36; // [rsp+Ch] [rbp-B4h]
  float v37; // [rsp+10h] [rbp-B0h]
  const Vector *AbsOrigin; // [rsp+10h] [rbp-B0h]
  float v39; // [rsp+18h] [rbp-A8h]
  float v40; // [rsp+18h] [rbp-A8h]
  float v41; // [rsp+1Ch] [rbp-A4h]
  float v42; // [rsp+1Ch] [rbp-A4h]
  float v43; // [rsp+20h] [rbp-A0h]
  float v44; // [rsp+20h] [rbp-A0h]
  unsigned __int8 m_Value; // [rsp+24h] [rbp-9Ch]
  float v46; // [rsp+24h] [rbp-9Ch]
  float v47; // [rsp+24h] [rbp-9Ch]
  float v48; // [rsp+24h] [rbp-9Ch]
  float fMinimumTimeToNotice; // [rsp+30h] [rbp-90h]
  float fBestRadius; // [rsp+34h] [rbp-8Ch]
  __int64 v51; // [rsp+38h] [rbp-88h]
  const CEntityHandle *fRadius; // [rsp+50h] [rbp-70h]
  float fRadiusa; // [rsp+50h] [rbp-70h]
  float fRadiusb; // [rsp+50h] [rbp-70h]
  vec_t v57; // [rsp+58h] [rbp-68h]
  __int64 v58; // [rsp+5Ch] [rbp-64h]
  vec_t x; // [rsp+64h] [rbp-5Ch]
  float fBestDesire_1; // [rsp+68h] [rbp-58h]
  Vector vStart; // [rsp+70h] [rbp-50h] BYREF
  Vector vec; // [rsp+80h] [rbp-40h] BYREF

  x = vec3_invalid.x;
  HIDWORD(v58) = LODWORD(vec3_invalid.y);
  *&v58 = vec3_invalid.z;
  if ( this->m_pBot->m_iDifficulty <= 2 )
    fMinimumTimeToNotice = 0.1;
  else
    fMinimumTimeToNotice = 0.0;
  if ( g_DOTAProjectileManager.m_LinearProjectiles.m_Size <= 0 )
    return 0.0;
  v6 = 0;
  fBestDesire_1 = 0.0;
  v57 = vec3_invalid.x;
  v51 = v58;
  fBestRadius = 0.0;
  do
  {
    v7 = g_DOTAProjectileManager.m_LinearProjectiles.m_Memory.m_pMemory[v6];
    if ( v7 != 0 )
    {
      m_Index = v7->m_hAbility.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hAbility.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v7->m_hAbility.m_Index & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            fRadius = &v7->m_hAbility;
            fDesire = (*(v10->m_pInstance->_vptr_IHandleEntity + 330))(v10->m_pInstance, this->m_pBot);
            if ( fBestDesire_1 < fDesire )
            {
              v11 = CEntityHandle::operator CEntityInstance *(fRadius);
              if ( (*(v11->_vptr_IHandleEntity + 328))(v11) == 0
                || (CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value & 0x200) == 0
                && !(v32 = CDOTA_BotMode::GetUnit(this))->m_bIsWaitingToSpawn.m_Value
                && (v32->m_nUnitState64.m_Value & 0x100) == 0 )
              {
                v12 = CEntityHandle::operator CEntityInstance *(fRadius);
                if ( (*(v12->_vptr_IHandleEntity + 329))(v12) == 0
                  || CDOTA_Bot::GetTankRating(this->m_pBot) <= 0.69999999 )
                {
                  m_pObj = CEntityHandle::operator CEntityInstance *(fRadius)[3].m_CScriptComponent[1].m_pOwner.m_pObj;
                  OwnerEntity = 0;
                  if ( m_pObj != 0 )
                    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pObj);
                  m_Value = OwnerEntity->m_iTeamNum.m_Value;
                  if ( m_Value != CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value )
                  {
                    if ( fMinimumTimeToNotice <= 0.0
                      || (v15 = v7->m_vLocation.y - v7->m_vStartLocation.y,
                          v16 = fsqrt(
                                  ((v7->m_vLocation.x - v7->m_vStartLocation.x)
                                 * (v7->m_vLocation.x - v7->m_vStartLocation.x))
                                + (v15 * v15)),
                          (v17 = fsqrt((v7->m_vVelocity.x * v7->m_vVelocity.x) + (v7->m_vVelocity.y * v7->m_vVelocity.y))) <= 0.0)
                      || fMinimumTimeToNotice <= (v16 / v17) )
                    {
                      v18 = CEntityHandle::operator CEntityInstance *(fRadius);
                      fRadiusa = (*(v18->_vptr_IHandleEntity + 327))(v18);
                      if ( fRadiusa > 0.0 )
                      {
                        v46 = v7->m_vVelocity.x;
                        y = v7->m_vVelocity.y;
                        *&vStart.x = *&v7->m_vLocation.x;
                        v43 = y;
                        z = v7->m_vVelocity.z;
                        v37 = vStart.x;
                        vStart.z = v7->m_vLocation.z;
                        v41 = z;
                        v35 = vStart.z;
                        v39 = vStart.y;
                        Unit = CDOTA_BotMode::GetUnit(this);
                        if ( CDOTAFogOfWarSystem::IsLocationVisible(
                               &g_DOTAFogOfWarSystem,
                               Unit->m_iTeamNum.m_Value,
                               &vStart,
                               0.0) )
                        {
                          v33 = fRadiusa;
                          fRadiusb = v46 + v37;
                          v47 = v43 + v39;
                          v44 = v41 + v35;
                          v22 = CDOTA_BotMode::GetUnit(this);
                          AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
                          v36 = AbsOrigin->x - vStart.x;
                          v40 = AbsOrigin->y - vStart.y;
                          v42 = AbsOrigin->z - vStart.z;
                          vec.x = fRadiusb - vStart.x;
                          vec.y = v47 - vStart.y;
                          vec.z = v44 - vStart.z;
                          v23 = VectorNormalize(&vec);
                          v24 = ((v36 * vec.x) + (v40 * vec.y)) + (v42 * vec.z);
                          if ( v24 < 0.0 )
                          {
                            v25 = AbsOrigin->x - vStart.x;
                            v26 = AbsOrigin->y - vStart.y;
                            v27 = AbsOrigin->z - vStart.z;
                          }
                          else
                          {
                            if ( v24 <= v23 )
                            {
                              v28 = fsqrt(
                                      (((AbsOrigin->x - ((vec.x * v24) + vStart.x))
                                      * (AbsOrigin->x - ((vec.x * v24) + vStart.x)))
                                     + ((AbsOrigin->y - ((vec.y * v24) + vStart.y))
                                      * (AbsOrigin->y - ((vec.y * v24) + vStart.y))))
                                    + ((AbsOrigin->z - ((v24 * vec.z) + vStart.z))
                                     * (AbsOrigin->z - ((v24 * vec.z) + vStart.z))));
LABEL_26:
                              v48 = v28;
                              v29 = CDOTA_BotMode::GetUnit(this);
                              if ( ((v29->m_flHullRadius + v29->m_flCollisionPadding) + v33) > fabs(v48) )
                              {
                                fBestRadius = v33;
                                x = v7->m_vLocation.x;
                                HIDWORD(v51) = LODWORD(v7->m_vLocation.y);
                                *&v58 = v7->m_vLocation.z;
                                v57 = v7->m_vVelocity.x;
                                HIDWORD(v58) = LODWORD(v7->m_vVelocity.y);
                                *&v51 = v7->m_vVelocity.z;
                                fBestDesire_1 = fDesire;
                              }
                              goto LABEL_5;
                            }
                            v25 = AbsOrigin->x - fRadiusb;
                            v26 = AbsOrigin->y - v47;
                            v27 = AbsOrigin->z - v44;
                          }
                          v28 = -fsqrt(((v25 * v25) + (v26 * v26)) + (v27 * v27));
                          goto LABEL_26;
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
LABEL_5:
    ++v6;
  }
  while ( g_DOTAProjectileManager.m_LinearProjectiles.m_Size > v6 );
  if ( fBestDesire_1 <= 0.0 )
    return 0.0;
  if ( pLocation != 0 )
  {
    pLocation->x = x;
    pLocation->y = *(&v51 + 1);
    LODWORD(pLocation->z) = v58;
  }
  if ( pVelocity != 0 )
  {
    pVelocity->x = v57;
    pVelocity->y = *(&v58 + 1);
    LODWORD(pVelocity->z) = v51;
  }
  result = fBestDesire_1;
  if ( pRadius != 0 )
  {
    v31 = CDOTA_BotMode::GetUnit(this);
    result = fBestDesire_1;
    *pRadius = (v31->m_flHullRadius + v31->m_flCollisionPadding) + fBestRadius;
  }
  return result;
}


// CDOTA_BotMode_EvasiveManeuvers::GetDebugColor  (line 431, @0x00000000028162f0, libserver.so)
color24 __fastcall CDOTA_BotMode_EvasiveManeuvers::GetDebugColor(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  return 16755370;
}


// CDOTA_BotMode_EvasiveManeuvers::GetDebugString  (line 442, @0x0000000002820b90, libserver.so)
// calls: V_sprintf_safe<128ul>
// strings: "Stop Moving", "Avoid Location", "Avoid Projectile", "Evasive Maneuvers - %s"
const char *__fastcall CDOTA_BotMode_EvasiveManeuvers::GetDebugString(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  const char *v1; // rdx
  int m_iAvoidType; // eax
  char *m_DebugStringBuffer; // rbx

  v1 = "Stop Moving";
  m_iAvoidType = this->m_iAvoidType;
  if ( m_iAvoidType != 0 )
  {
    v1 = "Avoid Location";
    if ( m_iAvoidType != 1 )
      v1 = "Avoid Projectile";
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(this->m_DebugStringBuffer, "Evasive Maneuvers - %s", v1);
  return m_DebugStringBuffer;
}


