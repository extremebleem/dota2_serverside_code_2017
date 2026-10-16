
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_AssembleWithHumans::CDOTA_BotMode_AssembleWithHumans  (line 21, @0x00000000027f66c0, libserver.so)  // inlines: CDOTA_BotMode, CEntityHandle, CHandle, operator=
void __fastcall CDOTA_BotMode_AssembleWithHumans::CDOTA_BotMode_AssembleWithHumans(
        CDOTA_BotMode_AssembleWithHumans *const this,
        CDOTA_Bot *pBot)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm0_4

  this->m_DebugStringBuffer[0] = 0;
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_hTarget.m_Index = -1;
  this->m_vDesiredLocation.x = x;
  this->m_vDesiredLocation.y = vec3_origin.y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B77D0;  // vptr: CDOTA_BotMode_AssembleWithHumans
  this->m_vDesiredLocation.z = z;
}


// CDOTA_BotMode_AssembleWithHumans::OnStart  (line 28, @0x00000000027f6060, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetBotDebugData, SetTarget, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CEntityInstance::GetEntityIndex, CDOTA_BotMode::GetUnit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_AssembleWithHumans::OnStart(CDOTA_BotMode_AssembleWithHumans *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r14
  int v6; // r13d
  int v7; // r13d
  CDOTA_BaseNPC *Unit; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v10; // cx
  uint32 v11; // [rsp+0h] [rbp-30h]

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
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
          if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v6 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
            v7 = (32 * CEntityInstance::GetEntityIndex(m_pInstance).m_Data) | v6;
            Unit = CDOTA_BotMode::GetUnit(this);
            if ( v7 != Unit->m_iBotDebugData.m_Value )
            {
              (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              Unit->m_iBotDebugData.m_Value = v7;
            }
            m_pEntity = m_pInstance->m_pEntity;
            v11 = -1;
            if ( m_pEntity != 0 )
            {
              v10 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
            }
            this->m_pBot->m_hTarget.m_Index = v11;
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_AssembleWithHumans::OnEnd  (line 43, @0x00000000027f64f0, libserver.so)  // inlines: SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_AssembleWithHumans::OnEnd(CDOTA_BotMode_AssembleWithHumans *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_AssembleWithHumans::Think  (line 53, @0x0000000002808620, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Element, EnterScope, ExitScope, GetAction, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, Top, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, ThreadGetCurrentId, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_Bot::SetMoveAction, CVProfile::ExitScope, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, std::terminate(void)
// strings: "CDOTA_BotMode_AssembleWithHumans::Think"
void __fastcall CDOTA_BotMode_AssembleWithHumans::Think(CDOTA_BotMode_AssembleWithHumans *const this)
{
  int m_enabled; // edi
  bool v3; // r13
  unsigned __int64 v4; // r12
  ThreadId_t v5; // r13
  uint64 v6; // rcx
  CDOTA_Bot *m_pBot; // rax
  CDOTA_BotAction *v8; // rdi
  int m_Size; // edx
  double v10; // xmm0_8
  CDOTA_Bot *v11; // rdi
  vec_t v12; // xmm1_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v14; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  Vector vLoc; // [rsp+0h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v14 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_AssembleWithHumans::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_AssembleWithHumans::Think",
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
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v14 + __rdtsc();
  }
  if ( CDOTA_BotMode::DoScriptThink(this)
    || CDOTA_Bot::IsUsingAbility(this->m_pBot)
    || CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    goto LABEL_3;
  }
  m_pBot = this->m_pBot;
  v8 = 0;
  m_Size = m_pBot->m_ActionStack.m_Size;
  if ( m_Size > 0 )
    v8 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  if ( (*(v8->_vptr_CDOTA_BotAction + 2))(v8) == 2 )
  {
LABEL_3:
    if ( v3 )
    {
      v4 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        v5 = g_VProfCurrentProfile.m_TargetThreadId;
        if ( v5 == ThreadGetCurrentId() )
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
      v6 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v6 - v4 + __rdtsc();
    }
  }
  else
  {
    v10 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v11 = this->m_pBot;
    *&vLoc.x = v10;
    vLoc.z = v12;
    CDOTA_Bot::SetMoveAction(v11, &vLoc, 0, 1);
    if ( v3 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_BotMode_AssembleWithHumans::CalculateDesiredLocation  (line 72, @0x00000000027e2910, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, QAngle, RandomYawVector, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator*, operator+
// calls: CDOTA_TeamCommander::GetLatestRequest, RandomFloat, AngleVectors, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_AssembleWithHumans::CalculateDesiredLocation(
        CDOTA_BotMode_AssembleWithHumans *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  float v9; // xmm1_4
  float x; // xmm2_4
  float y; // xmm0_4
  const CBaseEntity *m_pInstance; // r12
  const Vector *AbsOrigin; // rax
  float v14; // [rsp+4h] [rbp-5Ch]
  float v15; // [rsp+8h] [rbp-58h]
  float v16; // [rsp+Ch] [rbp-54h]
  QAngle angles; // [rsp+30h] [rbp-30h] BYREF
  Vector forward; // [rsp+40h] [rbp-20h] BYREF
  Vector LatestRequest; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  LatestRequest = CDOTA_TeamCommander::GetLatestRequest(this->m_pBot->m_pTeamCommander, 2);
  if ( LatestRequest.x == vec3_origin.x && LatestRequest.y == vec3_origin.y && LatestRequest.z == vec3_origin.z )
  {
    m_Index = this->m_hTarget.m_Index;
    v5 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1
      && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
      && (v7 = this->m_hTarget.m_Index & 0x1FF, v5 = (8 * v7), (v8 = &v6[v7]) != 0)
      && m_Index == v8->m_EHandle.m_Index
      && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      angles.y = RandomFloat(0.0, 360.0);
      angles.x = 0.0;
      angles.z = 0.0;
      AngleVectors(&angles, &forward, 0, 0);
      v14 = forward.x * 300.0;
      v15 = forward.y * 300.0;
      v16 = 300.0 * forward.z;
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      v9 = v16 + AbsOrigin->z;
      y = v15 + AbsOrigin->y;
      x = v14 + AbsOrigin->x;
    }
    else
    {
      *&forward.x = (*(this->_vptr_CDOTA_BotMode + 11))(this, v5);
      x = forward.x;
      y = forward.y;
    }
    angles.x = x;
    angles.y = y;
    angles.z = v9;
  }
  else
  {
    angles = LatestRequest;
  }
  *&result.x = *&angles.x;
  result.z = angles.z;
  return result;
}


// CDOTA_BotMode_AssembleWithHumans::GetDesire  (line 89, @0x00000000027fcfe0, libserver.so)  // inlines: CVProfScope, FastSqrt, Get, GetBotByIndex, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsEnabled, IsValid, Length, Length2D, LookupEntity, RemapValClamped, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, CVProfile::EnterScope, CDOTA_BotMode::GetUnit, CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, _Unwind_Resume
// strings: "CDOTA_BotMode_AssembleWithHumans::GetDesire"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_AssembleWithHumans::GetDesire(CDOTA_BotMode_AssembleWithHumans *const this)
{
  int m_enabled; // r11d
  float result; // xmm0_4
  CDOTA_BaseNPC *Unit; // r12
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  CDOTA_Bot *m_pBot; // rsi
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  CDOTA_Bot *v10; // rax
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // rdi
  char v13; // al
  int m_Size; // ecx
  __int64 v15; // rbx
  CDOTA_Bot *v16; // r13
  uint32 m_Index; // eax
  CConcreteEntityList *v18; // rsi
  CEntityIdentity *v19; // rdx
  __int64 v20; // rcx
  CEntityIdentity *v21; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityInstance *v23; // rax
  const CBaseEntity *v24; // r15
  CEntityInstance *v25; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v27; // rax
  int v28; // edi
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // r12
  CEntityInstance *v32; // rax
  const CBaseEntity *v33; // rdi
  const Vector *v34; // rax
  float v35; // xmm1_4
  float v36; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  int v38; // edx
  __int16 v39; // cx
  bool VProf_91; // [rsp+Fh] [rbp-61h]
  const CEntityHandle *v41; // [rsp+10h] [rbp-60h]
  CDOTA_Bot *pBot; // [rsp+18h] [rbp-58h]
  __int64 v43; // [rsp+20h] [rbp-50h]
  float iBestBotCount; // [rsp+28h] [rbp-48h]
  int iCount; // [rsp+2Ch] [rbp-44h]
  CEntityHandle *p_m_hUnit; // [rsp+30h] [rbp-40h]
  float v47; // [rsp+38h] [rbp-38h]
  CBaseEntity *v48; // [rsp+38h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_91 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_AssembleWithHumans::GetDesire", 0, "Bots", 0, 4);
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    if ( !this->m_pBot->m_pTeamCommander->m_bLateGame )
      goto LABEL_8;
    Unit = CDOTA_BotMode::GetUnit(this);
    v5 = 100LL * CBaseEntity::GetHealth(Unit);
    v6 = (*(Unit->_vptr_IHandleEntity + 156))(Unit);
    v7 = 1;
    if ( v6 > 0 )
      v7 = v6;
    if ( (v5 / v7) <= 75 )
      goto LABEL_8;
    m_pBot = this->m_pBot;
    m_pTeamCommander = m_pBot->m_pTeamCommander;
    if ( m_pTeamCommander->m_BotList.m_Size <= 0 )
      goto LABEL_8;
    v43 = 0;
    iBestBotCount = 0.0;
    v41 = 0;
    while ( 1 )
    {
      v10 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v43];
      pBot = v10;
      if ( v10 == 0
        || !v10->m_bHuman
        || ((p_m_hUnit = &v10->m_hUnit, (v11 = CEntityHandle::operator CEntityInstance *(&v10->m_hUnit)) == 0)
         || BYTE3(v11[7]._vptr_IHandleEntity) == 0
          ? (v12 = 0)
          : (v12 = v11),
            v13 = (*(v12->_vptr_IHandleEntity + 408))(v12),
            m_pBot = this->m_pBot,
            v13 == 0) )
      {
        m_pTeamCommander = m_pBot->m_pTeamCommander;
        m_Size = m_pTeamCommander->m_BotList.m_Size;
        goto LABEL_45;
      }
      m_pTeamCommander = m_pBot->m_pTeamCommander;
      m_Size = m_pTeamCommander->m_BotList.m_Size;
      if ( m_Size <= 0 )
        goto LABEL_45;
      v15 = 0;
      iCount = 0;
      do
      {
        if ( v43 != v15 )
        {
          v16 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v15];
          if ( v16 != 0 && v16->m_bHuman )
          {
            m_Index = v16->m_hUnit.m_Index;
            v18 = CEntityHandle::gm_pEntityList;
            if ( m_Index + 2 <= 1
              || (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
              || (v20 = v16->m_hUnit.m_Index & 0x1FF, v18 = (8 * v20), (v21 = &v19[v20]) == 0)
              || m_Index != v21->m_EHandle.m_Index
              || (m_pInstance = v21->m_pInstance, v21->m_pInstance == 0)
              || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
            {
              m_pInstance = 0;
            }
            if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v18) == 0 )
            {
LABEL_38:
              m_pBot = this->m_pBot;
              goto LABEL_39;
            }
            v23 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
            if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
              v24 = v23;
            else
              v24 = 0;
            v25 = CEntityHandle::operator CEntityInstance *(&v16->m_hUnit);
            if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
            {
              v48 = v25;
              if ( v24 != 0 )
              {
LABEL_37:
                AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
                v27 = CBaseEntity::GetAbsOrigin(v48);
                if ( fsqrt(
                       (((v27->x - AbsOrigin->x) * (v27->x - AbsOrigin->x))
                      + ((v27->y - AbsOrigin->y) * (v27->y - AbsOrigin->y)))
                     + ((v27->z - AbsOrigin->z) * (v27->z - AbsOrigin->z))) >= 1000.0 )
                  goto LABEL_38;
              }
            }
            else
            {
              v48 = 0;
              if ( v24 != 0 )
                goto LABEL_37;
            }
            ++iCount;
            m_pBot = this->m_pBot;
          }
        }
LABEL_39:
        m_pTeamCommander = m_pBot->m_pTeamCommander;
        ++v15;
      }
      while ( m_pTeamCommander->m_BotList.m_Size > v15 );
      m_Size = m_pTeamCommander->m_BotList.m_Size;
      if ( iCount != 0 )
      {
        if ( v41 != 0 )
        {
          if ( iCount > iBestBotCount )
          {
            iBestBotCount = iCount;
            goto LABEL_44;
          }
        }
        else
        {
          iBestBotCount = iCount;
LABEL_44:
          m_Size = m_pTeamCommander->m_BotList.m_Size;
          v41 = pBot;
        }
      }
LABEL_45:
      v28 = v43++;
      if ( v28 + 1 >= m_Size )
      {
        if ( v41 != 0 )
        {
          v29 = CEntityHandle::operator CEntityInstance *(v41 + 39);
          if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 && (m_pEntity = v29->m_pEntity) != 0 )
          {
            v38 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v39 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v39 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hTarget.m_Index) = v39 | this->m_hTarget.m_Index & 0x8000;
            this->m_hTarget.m_Index = (v38 << 15) | this->m_hTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hTarget.m_Index = -1;
          }
          v30 = CDOTA_BotMode::GetUnit(this);
          v31 = CBaseEntity::GetAbsOrigin(v30);
          v32 = CEntityHandle::operator CEntityInstance *(v41 + 39);
          if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
            v33 = v32;
          else
            v33 = 0;
          v34 = CBaseEntity::GetAbsOrigin(v33);
          v35 = v34->y - v31->y;
          v36 = fsqrt(((v34->x - v31->x) * (v34->x - v31->x)) + (v35 * v35)) / 3000.0;
          if ( v36 < 0.0 )
          {
            result = 0.2;
          }
          else
          {
            result = 0.60000002;
            if ( v36 <= 1.0 )
              result = (v36 * 0.40000004) + 0.2;
          }
          break;
        }
LABEL_8:
        this->m_hTarget.m_Index = -1;
        result = 0.0;
        break;
      }
    }
  }
  if ( VProf_91 )
  {
    v47 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v47;
  }
  return result;
}


// CDOTA_BotMode_AssembleWithHumans::GetDebugColor  (line 148, @0x00000000027e01c0, libserver.so)
color24 __fastcall CDOTA_BotMode_AssembleWithHumans::GetDebugColor(CDOTA_BotMode_AssembleWithHumans *const this)
{
  return 5944575;
}


// CDOTA_BotMode_AssembleWithHumans::GetDebugString  (line 159, @0x00000000027f96e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: V_sprintf_safe<128ul>
// strings: "Assembling with Humans - %s"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_AssembleWithHumans::GetDebugString(CDOTA_BotMode_AssembleWithHumans *const this)
{
  const char *m_pAsString; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  char *m_DebugStringBuffer; // rbx
  CEntityInstance *m_pInstance; // rax

  m_pAsString = "NULL";
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
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pAsString = "";
          if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(this->m_DebugStringBuffer, "Assembling with Humans - %s", m_pAsString);
  return m_DebugStringBuffer;
}


