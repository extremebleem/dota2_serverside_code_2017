
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Attack::CDOTA_BotMode_Attack  (line 27, @0x00000000027f6750, libserver.so)  // inlines: CDOTA_BotMode, CEntityHandle, CHandle, operator=
// callers: CDOTA_Bot_Hero_Bane::CreateMode, CDOTA_Bot_Hero_Axe::CreateMode, CDOTA_Bot_Hero_Bloodseeker::CreateMode, CDOTA_Bot_Hero_BountyHunter::CreateMode, CDOTA_Bot_Hero_CrystalMaiden::CreateMode, CDOTA_Bot_Hero_Earthshaker::CreateMode, CDOTA_Bot_Hero_Juggernaut::CreateMode, CDOTA_Bot_Hero_Lina::CreateMode, CDOTA_Bot_Hero_Kunkka::CreateMode, CDOTA_Bot_Hero_Nevermore::CreateMode, CDOTA_Bot_Hero_Oracle::CreateMode, CDOTA_Bot_Hero_Pudge::CreateMode (20 total)
void __fastcall CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(CDOTA_BotMode_Attack *const this, CDOTA_Bot *pBot)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->m_DebugStringBuffer[0] = 0;
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_hPotentialGankTarget.m_Index = -1;
  this->m_vDesiredLocation.x = x;
  y = vec3_origin.y;
  this->m_fCurrentTargetScore = 0.0;
  this->m_vDesiredLocation.y = y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B7870;
  this->m_vDesiredLocation.z = z;
}


// CDOTA_BotMode_Attack::OnStart  (line 35, @0x00000000027f61b0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetBotDebugData, SetTarget, String, ToCStr, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CEntityInstance::GetEntityIndex, CDOTA_BotMode::GetUnit, CDOTA_TeamCommander::ChatMessageRequest
// strings: "DOTA_Chat_Bot_RoamGank"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Attack::OnStart(CDOTA_BotMode_Attack *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r12
  int v6; // r14d
  int v7; // r14d
  CDOTA_BaseNPC *Unit; // r13
  CEntityIdentity *m_pEntity; // rax
  __int16 v10; // cx
  CDOTA_Bot *m_pBot; // rax
  const char *m_pAsString; // r13
  CDOTA_BaseNPC *v13; // rax
  CDOTAPlayer *v14; // rax
  uint32 v15; // [rsp+0h] [rbp-30h]

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    m_Index = this->m_hPotentialGankTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPotentialGankTarget.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hPotentialGankTarget.m_Index & 0x1FF];
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
            v15 = -1;
            if ( m_pEntity != 0 )
            {
              v10 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
            }
            this->m_pBot->m_hTarget.m_Index = v15;
            m_pBot = this->m_pBot;
            this->m_fCurrentTargetScore = 0.0;
            if ( m_pBot->m_iPreviousBotModeType == 3 )
            {
              m_pAsString = "";
              if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
                m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
              v13 = CDOTA_BotMode::GetUnit(this);
              v14 = (*(v13->_vptr_IHandleEntity + 413))(v13);
              CDOTA_TeamCommander::ChatMessageRequest(
                this->m_pBot->m_pTeamCommander,
                v14,
                "DOTA_Chat_Bot_RoamGank",
                m_pAsString,
                1,
                1);
            }
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_Attack::OnEnd  (line 56, @0x00000000027f6520, libserver.so)  // inlines: SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Attack::OnEnd(CDOTA_BotMode_Attack *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_Attack::Think  (line 66, @0x0000000002808df0, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Element, EnterScope, Get, GetAction, GetBotTargetStatus, GetBotTargetStatusCore, GetEHandle, GetElapsed, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetTeamNumber, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, Set, SetTarget, ToDOTABaseNPC, ToDOTABotActionAttack, Top, operator CBaseEntity*, operator=, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CEntityHandle::operator CEntityInstance*, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_BotMode::GetUnit, CBaseModelEntity::CanBeSeenByTeam, GetBotTargetStatusCore, CDOTA_Bot::SetAttackAction, ThreadGetCurrentId, CDOTA_Bot::SetMoveAction, CVProfNode::GetSubNode(char const*,int,char const*,int) (14 total)
// callers: CDOTA_BotMode_Attack_BountyHunter::Think, CDOTA_BotMode_Attack_Juggernaut::Think, CDOTA_BotMode_Attack_Lina::Think, CDOTA_BotMode_Attack_Kunkka::Think, CDOTA_BotMode_Attack_WitchDoctor::Think, CDOTA_BotMode_Attack_Windrunner::Think, CDOTA_BotMode_Attack_Tiny::Think
// strings: "CDOTA_BotMode_Attack::Think"
void __fastcall CDOTA_BotMode_Attack::Think(CDOTA_BotMode_Attack *const this)
{
  int m_enabled; // r8d
  bool v3; // r13
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r14
  CDOTA_Bot *m_pBot; // r15
  CEntityInstance *v7; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // cx
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // rax
  CBaseModelEntity *v12; // rdi
  CDOTA_Bot *v13; // rax
  int m_Size; // edx
  CDOTA_BotAction **m_pMemory; // rcx
  __int64 v16; // rdx
  const CEntityHandle *v17; // r14
  CDOTA_BaseNPC *v18; // r14
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_Bot *v20; // r12
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rsi
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v24; // r14
  uint64 m_numTimeBaseTicks; // rcx
  vec_t v26; // xmm1_4
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v28; // rax
  CEntityInstance *v29; // rax
  CEntityInstance *v30; // r15
  CEntityInstance *v31; // rax
  int iTeam; // [rsp+Ch] [rbp-44h]
  Vector vLoc; // [rsp+10h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v24 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Attack::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Attack::Think",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v28 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v28->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v24 + __rdtsc();
  }
  if ( CDOTA_BotMode::DoScriptThink(this) )
    goto LABEL_14;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hPotentialGankTarget);
  v5 = v4;
  if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_12;
  m_pBot = this->m_pBot;
  v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  if ( v7 == 0 || BYTE3(v7[7]._vptr_IHandleEntity) == 0 || v5 != v7 )
  {
    vLoc.x = NAN;
    m_pEntity = v5->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(vLoc.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
    m_pBot->m_hTarget.m_Index = LODWORD(vLoc.x);
LABEL_12:
    m_pBot = this->m_pBot;
    v10 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
    if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_14;
  }
  if ( CDOTA_Bot::IsUsingAbility(m_pBot) || CDOTA_Bot::IsUsingItem(this->m_pBot) )
    goto LABEL_14;
  iTeam = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
    v12 = 0;
  if ( !CBaseModelEntity::CanBeSeenByTeam(v12, iTeam) )
    goto LABEL_38;
  v13 = this->m_pBot;
  m_Size = v13->m_ActionStack.m_Size;
  if ( m_Size <= 0 )
    goto LABEL_27;
  m_pMemory = v13->m_ActionStack.m_Memory.m_pMemory;
  v16 = m_Size - 1;
  v17 = m_pMemory[v16];
  if ( v17 == 0 )
    goto LABEL_27;
  if ( (*(*&v17->m_Index + 16LL))(m_pMemory[v16]) != 3 )
  {
    v13 = this->m_pBot;
LABEL_27:
    v18 = CEntityHandle::operator CEntityInstance *(&v13->m_hTarget);
    goto LABEL_28;
  }
  v29 = CEntityHandle::operator CEntityInstance *(v17 + 5);
  if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
    v30 = v29;
  else
    v30 = 0;
  v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  v18 = v31;
  if ( v31 == 0 || BYTE3(v31[7]._vptr_IHandleEntity) == 0 )
    v31 = 0;
  if ( v30 != v31 )
  {
LABEL_28:
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( v18 != 0 && v18->m_bIsDOTANPC && (GetBotTargetStatusCore(v18, Unit, -1.0, 0) & 0xFD) == 0 )
    {
      v20 = this->m_pBot;
      v21 = CEntityHandle::operator CEntityInstance *(&v20->m_hTarget);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      CDOTA_Bot::SetAttackAction(v20, v22, 0);
      goto LABEL_14;
    }
LABEL_38:
    *&vLoc.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    vLoc.z = v26;
    CDOTA_Bot::SetMoveAction(this->m_pBot, &vLoc, 0, 1);
  }
LABEL_14:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Attack::CalculateDesiredLocation  (line 112, @0x00000000027e30f0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLoc, GetTargetNPC, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CDOTALocomotor::GetAverageVelocityOverTime, VectorNormalize
// callers: CDOTA_BotMode_Attack_BountyHunter::CalculateDesiredLocation, CDOTA_BotMode_Attack_Axe::CalculateDesiredLocation, CDOTA_BotMode_Attack_Earthshaker::CalculateDesiredLocation, CDOTA_BotMode_Attack_Juggernaut::CalculateDesiredLocation, CDOTA_BotMode_Attack_SandKing::CalculateDesiredLocation, CDOTA_BotMode_Attack_Nevermore::CalculateDesiredLocation, CDOTA_BotMode_Attack_Riki::CalculateDesiredLocation, CDOTA_BotMode_Attack_WarlockGolem::CalculateDesiredLocation, CDOTA_BotMode_Attack_Tidehunter::CalculateDesiredLocation
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Attack::CalculateDesiredLocation(CDOTA_BotMode_Attack *const this)
{
  CDOTA_Bot *m_pBot; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  float v6; // xmm1_4
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // rdi
  const Vector *v13; // rax
  double v14; // rdx
  CEntityInstance *v15; // rax
  CEntityInstance *v16; // rdi
  CDOTALocomotor *v17; // rax
  float v18; // xmm1_4
  CDOTA_Bot *v19; // rax
  vec_t v20; // xmm1_4
  float v21; // xmm0_4
  __int64 v22; // xmm0_8
  float x; // [rsp+8h] [rbp-48h]
  float y; // [rsp+Ch] [rbp-44h]
  Vector vLastDir; // [rsp+20h] [rbp-30h] BYREF
  double v26; // [rsp+30h] [rbp-20h]
  vec_t v27; // [rsp+38h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[m_pBot->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    x = m_pBot->m_vTargetLoc.x;
    y = m_pBot->m_vTargetLoc.y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    if ( fsqrt(((AbsOrigin->x - x) * (AbsOrigin->x - x)) + ((AbsOrigin->y - y) * (AbsOrigin->y - y))) >= 200.0 )
    {
      v15 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
        v16 = v15;
      else
        v16 = 0;
      v17 = (*(v16->_vptr_IHandleEntity + 376))(v16);
      v22 = *&CDOTALocomotor::GetAverageVelocityOverTime(v17, v18).x;
      vLastDir.z = 0.0;
      *&vLastDir.x = v22;
      VectorNormalize(&vLastDir);
      v19 = this->m_pBot;
      v20 = (vLastDir.z * 800.0) + v19->m_vTargetLoc.z;
      v21 = (800.0 * vLastDir.x) + v19->m_vTargetLoc.x;
      *(&v26 + 1) = (vLastDir.y * 800.0) + v19->m_vTargetLoc.y;
      v27 = v20;
      *&v26 = v21;
    }
    else
    {
      v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
        v12 = v11;
      else
        v12 = 0;
      v13 = CBaseEntity::GetAbsOrigin(v12);
      v14 = *&v13->x;
      *&v13 = v13->z;
      v26 = v14;
      v27 = *&v13;
    }
  }
  else
  {
    v26 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v27 = v6;
  }
  *&result.x = v26;
  result.z = v27;
  return result;
}


// CDOTA_BotMode_Attack::GetDesire  (line 134, @0x00000000028020c0, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetEHandle, GetElapsed, GetEntryIndex, GetSerialNumber, GetTimebaseRegister, InTargetThread, IsEnabled, Min<float>, PLAT_CPU_TIME, RemapValClamped, Set, clamp<float, float>, operator=, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, ThreadGetCurrentId, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC_Hero::WillReincarnate, CDOTA_BotMode_Attack::FindPotentialAttackTarget, CDOTA_TeamCommander::CreateHumanRequest, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTA_Bot::FindNearbyTeammatesInMode, CVProfile::ExitScope, _Unwind_Resume (13 total)
// callers: CDOTA_BotMode_Attack_Bane::GetDesire, CDOTA_BotMode_Attack_Bloodseeker::GetDesire, CDOTA_BotMode_Attack_CrystalMaiden::GetDesire, CDOTA_BotMode_Attack_Juggernaut::GetDesire, CDOTA_BotMode_Attack_Oracle::GetDesire, CDOTA_BotMode_Attack_Pudge::GetDesire, CDOTA_BotMode_Attack_Riki::GetDesire, CDOTA_BotMode_Attack_SandKing::GetDesire, CDOTA_BotMode_Attack_Sven::GetDesire, CDOTA_BotMode_Attack_Tiny::GetDesire
// strings: "CDOTA_BotMode_Attack::GetDesire"
float __fastcall CDOTA_BotMode_Attack::GetDesire(CDOTA_BotMode_Attack *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  __m128i v4; // xmm0
  int v5; // r15d
  unsigned __int64 v7; // r12
  ThreadId_t v8; // r13
  uint64 v9; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v11; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BaseNPC *Unit; // rax
  int v15; // eax
  CDOTA_BaseNPC *v16; // rax
  __int64 v17; // rcx
  __m128i v18; // xmm0
  float v19; // r14d
  CEntityIdentity *m_pEntity; // rdx
  __int16 v21; // cx
  CDOTA_BaseNPC *v22; // rax
  __m128 v23; // xmm0
  CEntityIdentity *v24; // rdx
  int v25; // eax
  __int16 v26; // cx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  __int64 v31; // rcx
  __m128i v32; // xmm0
  float v33; // r14d
  CDOTA_BaseNPC *v34; // rax
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  CDOTA_BaseNPC *v38; // rax
  __int64 v39; // rcx
  __m128i v40; // xmm0
  float v41; // r14d
  CDOTA_BaseNPC *v42; // rax
  CEntityIdentity *v43; // rdx
  int v44; // eax
  __int16 v45; // cx
  CDOTA_BaseNPC *v46; // rax
  __int64 v47; // rcx
  __m128i v48; // xmm0
  float v49; // r14d
  CDOTA_BaseNPC *v50; // rax
  CEntityIdentity *v51; // rdx
  int v52; // eax
  __int16 v53; // cx
  __m128 v54; // xmm1
  float fMaxScore; // [rsp+Ch] [rbp-44h]
  EHANDLE hEntity; // [rsp+10h] [rbp-40h] BYREF
  float fScore; // [rsp+14h] [rbp-3Ch] BYREF
  CDOTA_BaseNPC *pTarget; // [rsp+18h] [rbp-38h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v11 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Attack::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Attack::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v29 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v29->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v11 + __rdtsc();
  }
  *v4.m128i_i32 = CDOTA_BotMode::GetScriptDesire(this);
  *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( *v4.m128i_i32 < 0.0 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_iDifficulty == 0 )
      goto LABEL_36;
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( (Unit->m_iUnitType & 1) != 0 )
    {
      if ( CDOTA_BaseNPC_Hero::WillReincarnate(Unit)
        && CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1200.0, 0, 0) > 1 )
      {
        m_pBot = this->m_pBot;
        fMaxScore = 0.0;
      }
      else
      {
        m_pBot = this->m_pBot;
        fMaxScore = 2.0;
      }
    }
    else
    {
      fMaxScore = 2.0;
    }
    v15 = (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode);
    if ( v15 == 3 )
    {
LABEL_19:
      pTarget = 0;
      fScore = 0.0;
      v16 = CDOTA_BotMode::GetUnit(this);
      v18 = 0x3F000000u;
      if ( SLOBYTE(v16->m_nUnitState64.m_Value) < 0 )
        v18 = 0x3ECCCCCDu;
      *v18.m128i_i32 = fminf(*v18.m128i_i32, fMaxScore);
      v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
      if ( CDOTA_BotMode_Attack::FindPotentialAttackTarget(this, *v18.m128i_i32, &pTarget, &fScore, v17) )
      {
        hEntity.m_Index = -1;
        if ( pTarget != 0 )
        {
          m_pEntity = pTarget->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v21 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            hEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
          }
        }
        CDOTA_TeamCommander::CreateHumanRequest(this->m_pBot->m_pTeamCommander, 1, &hEntity, 0, 8.0);
        v22 = pTarget;
        v23 = LODWORD(fScore);
        this->m_fCurrentTargetScore = fScore;
        if ( v22 != 0 && (v24 = v22->m_pEntity) != 0 )
        {
          v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
          v26 = 0x7FFF;
          if ( v24->m_EHandle.m_Index != -1 )
            v26 = v24->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hPotentialGankTarget.m_Index) = v26 | this->m_hPotentialGankTarget.m_Index & 0x8000;
          this->m_hPotentialGankTarget.m_Index = (v25 << 15) | this->m_hPotentialGankTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hPotentialGankTarget.m_Index = -1;
        }
        if ( v19 != 3.0 )
        {
          v23.m128_f32[0] = (v23.m128_f32[0] - 3.0) / (v19 - 3.0);
          if ( v23.m128_f32[0] >= 0.0 )
          {
            *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F000000u));
            if ( v23.m128_f32[0] > 1.0 )
              goto LABEL_3;
            goto LABEL_35;
          }
LABEL_94:
          *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F733333u));
          goto LABEL_3;
        }
        goto LABEL_84;
      }
LABEL_36:
      *&v5 = 0.0;
      goto LABEL_3;
    }
    if ( v15 <= 3 )
    {
      if ( v15 != 2 )
      {
LABEL_70:
        pTarget = 0;
        fScore = 0.0;
        v46 = CDOTA_BotMode::GetUnit(this);
        v48 = 0x3F800000u;
        if ( SLOBYTE(v46->m_nUnitState64.m_Value) < 0 )
          v48 = 0x3F19999Au;
        *v48.m128i_i32 = fminf(*v48.m128i_i32, fMaxScore);
        v49 = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
        *&v5 = 0.0;
        if ( !CDOTA_BotMode_Attack::FindPotentialAttackTarget(this, *v48.m128i_i32, &pTarget, &fScore, v47) )
          goto LABEL_3;
        v50 = pTarget;
        v23 = LODWORD(fScore);
        this->m_fCurrentTargetScore = fScore;
        if ( v50 != 0 && (v51 = v50->m_pEntity) != 0 )
        {
          v52 = (v51->m_EHandle.m_Index >> 15) - (v51->m_flags & 1);
          v53 = 0x7FFF;
          if ( v51->m_EHandle.m_Index != -1 )
            v53 = v51->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hPotentialGankTarget.m_Index) = v53 | this->m_hPotentialGankTarget.m_Index & 0x8000;
          this->m_hPotentialGankTarget.m_Index = (v52 << 15) | this->m_hPotentialGankTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hPotentialGankTarget.m_Index = -1;
        }
        if ( v49 == 2.0 )
        {
          v23.m128_f32[0] = v23.m128_f32[0] - 2.0;
LABEL_80:
          v54 = _mm_cmple_ss(0LL, v23);
          *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_or_ps(_mm_andnot_ps(v54, 0x3F733333u), _mm_and_ps(0x3F000000u, v54))));
          goto LABEL_3;
        }
        v23.m128_f32[0] = (v23.m128_f32[0] - 2.0) / (v49 - 2.0);
        if ( v23.m128_f32[0] < 0.0 )
          goto LABEL_94;
        *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F000000u));
        if ( v23.m128_f32[0] > 1.0 )
          goto LABEL_3;
LABEL_35:
        v23.m128_f32[0] = (v23.m128_f32[0] * -0.44999999) + 0.94999999;
        *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
        goto LABEL_3;
      }
      pTarget = 0;
      fScore = 0.0;
      v30 = CDOTA_BotMode::GetUnit(this);
      v32 = 0x3F000000u;
      if ( SLOBYTE(v30->m_nUnitState64.m_Value) < 0 )
        v32 = 0x3ECCCCCDu;
      *v32.m128i_i32 = fminf(*v32.m128i_i32, fMaxScore);
      v33 = COERCE_FLOAT(_mm_cvtsi128_si32(v32));
      *&v5 = 0.0;
      if ( !CDOTA_BotMode_Attack::FindPotentialAttackTarget(this, *v32.m128i_i32, &pTarget, &fScore, v31) )
        goto LABEL_3;
      v34 = pTarget;
      v23 = LODWORD(fScore);
      this->m_fCurrentTargetScore = fScore;
      if ( v34 != 0 && (v35 = v34->m_pEntity) != 0 )
      {
        v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
        v37 = 0x7FFF;
        if ( v35->m_EHandle.m_Index != -1 )
          v37 = v35->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hPotentialGankTarget.m_Index) = v37 | this->m_hPotentialGankTarget.m_Index & 0x8000;
        this->m_hPotentialGankTarget.m_Index = (v36 << 15) | this->m_hPotentialGankTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hPotentialGankTarget.m_Index = -1;
      }
      if ( v33 != 3.0 )
      {
        v23.m128_f32[0] = (v23.m128_f32[0] - 3.0) / (v33 - 3.0);
        if ( v23.m128_f32[0] < 0.0 )
          goto LABEL_94;
        *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F000000u));
        if ( v23.m128_f32[0] > 1.0 )
          goto LABEL_3;
        goto LABEL_35;
      }
    }
    else
    {
      if ( v15 != 4 )
      {
        if ( v15 == 16 )
          goto LABEL_19;
        goto LABEL_70;
      }
      pTarget = 0;
      fScore = 0.0;
      v38 = CDOTA_BotMode::GetUnit(this);
      v40 = 0x40000000u;
      if ( SLOBYTE(v38->m_nUnitState64.m_Value) < 0 )
        v40 = 0x3FC00000u;
      *v40.m128i_i32 = fminf(*v40.m128i_i32, fMaxScore);
      v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v40));
      *&v5 = 0.0;
      if ( !CDOTA_BotMode_Attack::FindPotentialAttackTarget(this, *v40.m128i_i32, &pTarget, &fScore, v39) )
        goto LABEL_3;
      v42 = pTarget;
      v23 = LODWORD(fScore);
      this->m_fCurrentTargetScore = fScore;
      if ( v42 != 0 && (v43 = v42->m_pEntity) != 0 )
      {
        v44 = (v43->m_EHandle.m_Index >> 15) - (v43->m_flags & 1);
        v45 = 0x7FFF;
        if ( v43->m_EHandle.m_Index != -1 )
          v45 = v43->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hPotentialGankTarget.m_Index) = v45 | this->m_hPotentialGankTarget.m_Index & 0x8000;
        this->m_hPotentialGankTarget.m_Index = (v44 << 15) | this->m_hPotentialGankTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hPotentialGankTarget.m_Index = -1;
      }
      if ( v41 != 3.0 )
      {
        v23.m128_f32[0] = (v23.m128_f32[0] - 3.0) / (v41 - 3.0);
        if ( v23.m128_f32[0] < 0.0 )
          goto LABEL_94;
        *&v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F000000u));
        if ( v23.m128_f32[0] > 1.0 )
          goto LABEL_3;
        goto LABEL_35;
      }
    }
LABEL_84:
    v23.m128_f32[0] = v23.m128_f32[0] - 3.0;
    goto LABEL_80;
  }
LABEL_3:
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


// CDOTA_BotMode_Attack::GetDebugColor  (line 236, @0x00000000027e01d0, libserver.so)
color24 __fastcall CDOTA_BotMode_Attack::GetDebugColor(CDOTA_BotMode_Attack *const this)
{
  return 3947775;
}


// CDOTA_BotMode_Attack::GetDebugString  (line 247, @0x00000000027f9790, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: V_sprintf_safe<128ul>
// strings: "Attack - %s (%2.2f)"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_Attack::GetDebugString(CDOTA_BotMode_Attack *const this)
{
  const char *m_pAsString; // rdx
  CDOTA_Bot *m_pBot; // rcx
  uint32 m_Index; // eax
  unsigned __int16 v4; // si
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  char *m_DebugStringBuffer; // rbx
  CEntityInstance *m_pInstance; // rax

  m_pAsString = "NULL";
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = m_pBot->m_hTarget.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pAsString = "";
          if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(this->m_DebugStringBuffer, "Attack - %s (%2.2f)", m_pAsString, this->m_fCurrentTargetScore);
  return m_DebugStringBuffer;
}


// CDOTA_BotMode_Attack::GetDebugValue  (line 256, @0x00000000027e16e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_Attack::GetDebugValue(CDOTA_BotMode_Attack *const this)
{
  const char *result; // rax
  CDOTA_Bot *m_pBot; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v4; // si
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityInstance *m_pInstance; // rdx

  result = "";
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = m_pBot->m_hTarget.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
        {
          return m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  return result;
}


// CDOTA_BotMode_Attack::GetAttackScore  (line 263, @0x000000000280c930, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, FindEstimatedAttackLocation, FindTotalAvoidanceForPath, Get, GetActiveModeDesire, GetDesiredPush, GetEHandle, GetEntryIndex, GetIllusionState, GetInstance, GetLaneDefendMode, GetModeDesire, GetNPCAttackTarget, GetNearbyCreeps, GetNearbyHeroes, GetNearbyTowers, GetNearbyUnits, GetSerialNumber, GetSpecificMode, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, GrowMemory, HasElement, InState, IsMagicImmune, IsStunned, Length2D, Max<int>, Min<float>, RemapValClamped, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABuilding, ToDOTATower, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, end, operator CBaseEntity*, operator-, operator==, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_Bot::FindEstimatedAttackLocation, CBaseEntity::GetHealth, CDOTA_Bot::UpdateNearbyUnits, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::AddToTail, CDOTA_BaseNPC::GetAttackDamage, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetArmorReductionForDamageType, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find (35 total)
// callers: CDOTA_BotMode_Attack_BountyHunter::GetAttackScore, CDOTA_BotMode_Attack_Riki::GetAttackScore
// globals: g_DOTACommander, LanePushModes
// local variable allocation has failed, the output may be wrong!
float __fastcall CDOTA_BotMode_Attack::GetAttackScore(CDOTA_BotMode_Attack *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_Bot *m_pBot; // rbx
  const Vector *AbsOrigin; // rax
  __int64 v7; // rsi
  unsigned __int64 m_Value; // rdx
  int v9; // ecx
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  CDOTA_Bot *v14; // r13
  __int64 m_Size; // rax
  EHANDLE *p_m_hUnit; // r13
  const CHandle<CBaseEntity> *v17; // rbx
  const CHandle<CBaseEntity> *i; // r12
  CEntityInstance *v19; // rax
  char m_CScriptComponent_high; // r14
  CEntityInstance *v21; // rax
  __int64 v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rbx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_Bot *v26; // r13
  const CHandle<CBaseEntity> *m_pMemory; // rbx
  const CEntityHandle *v28; // r13
  const CHandle<CBaseEntity> *j; // r12
  CEntityInstance *v30; // rax
  char v31; // r14
  CEntityInstance *v32; // rax
  const CHandle<CBaseEntity> *v33; // rbx
  const CHandle<CBaseEntity> *k; // r12
  CEntityInstance *v35; // rax
  char v36; // r14
  CEntityInstance *v37; // rax
  __int64 v38; // r12
  int m; // ebx
  CHandle<CBaseEntity> *v40; // r13
  __int64 v41; // r14
  int v42; // eax
  CHandle<CBaseEntity> *v43; // rax
  __int64 v44; // r13
  int v45; // r12d
  __m128 v46; // xmm1
  __m128 v47; // xmm4
  CDOTA_BaseNPC *v48; // rax
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *v50; // rbx
  CDOTA_BaseNPC *v51; // rax
  const Vector *v52; // r14
  const Vector *v53; // rax
  __m128i v54; // xmm0
  float v55; // r14d
  float v56; // xmm0_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  CDOTA_Bot *v59; // r13
  __int64 v60; // rax
  EHANDLE *v61; // r13
  const CHandle<CBaseEntity> *v62; // rbx
  const CHandle<CBaseEntity> *n; // r12
  CEntityInstance *v64; // rax
  char v65; // r14
  CEntityInstance *v66; // rax
  __int64 v67; // rbx
  CEntityInstance *v68; // rax
  CDOTA_BaseNPC *v69; // r13
  CDOTA_BaseNPC *v70; // rax
  CDOTA_BaseNPC *v71; // rax
  CDOTA_BaseNPC *v72; // rbx
  const Vector *v73; // r12
  CDOTA_BaseNPC *v74; // rax
  __m128i v75; // xmm6
  float v76; // ebx
  CDOTA_BaseNPC *v77; // rax
  int Health; // eax
  float v79; // xmm2_4
  float v80; // xmm0_4
  CDOTA_BaseNPC *v81; // rax
  float v82; // xmm5_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v84; // cx
  CEntityIdentity *v85; // rax
  int v86; // edx
  __int16 v87; // cx
  __int64 v88; // r13
  const Vector *v89; // r14
  const Vector *v90; // rax
  __m128i v91; // xmm0
  float v92; // r14d
  float v93; // xmm0_4
  __m128 v94; // xmm0
  __m128 v95; // xmm0
  float v96; // xmm0_4
  float v97; // xmm4_4
  float v98; // xmm0_4
  CEntityInstance *v99; // rax
  CDOTA_BaseNPC *v100; // rbx
  CDOTA_Bot *v101; // r12
  bool v102; // r14
  float v103; // xmm1_4
  float v104; // xmm3_4
  float v105; // xmm1_4
  CDOTA_BaseNPC *v106; // rax
  float v107; // xmm0_4
  unsigned __int64 v108; // xmm1_8
  float v109; // xmm5_4
  double v110; // xmm2_8
  float v111; // xmm0_4
  double v112; // xmm0_8
  CDOTA_Bot *v113; // rbx
  const Vector *v114; // rax
  CDOTA_BaseNPC *v115; // rax
  const Vector *v116; // rax
  int TotalAvoidanceForPath; // eax
  float v118; // xmm1_4
  float v119; // xmm0_4
  float v120; // xmm1_4
  float v121; // xmm1_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float v124; // xmm0_4
  float v125; // xmm2_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm2_4
  float v129; // xmm1_4
  float v130; // xmm0_4
  float v131; // xmm0_4
  float v132; // xmm2_4
  bool IsMovementImpaired; // al
  float v134; // xmm0_4
  float v135; // xmm3_4
  float v136; // xmm2_4
  float v137; // xmm3_4
  float v138; // xmm1_4
  float v139; // xmm1_4
  float v140; // xmm2_4
  float v141; // xmm0_4
  float v142; // xmm2_4
  float v143; // xmm1_4
  float v144; // xmm0_4
  CDOTA_BaseNPC *v145; // rax
  __m128i v146; // xmm0
  float v147; // ebx
  CDOTA_BaseNPC *v148; // rax
  CDOTA_BaseNPC *v149; // rax
  float v150; // xmm0_4
  float v151; // xmm1_4
  float v152; // xmm7_4
  float v153; // xmm0_4
  float v154; // xmm1_4
  __m128 v155; // xmm1
  __m128 v156; // xmm1
  CDOTA_Bot *v157; // rbx
  CDOTA_Bot *v158; // rbx
  CDOTA_Bot *v159; // r14
  float v160; // xmm1_4
  float v161; // xmm0_4
  sIllusionState *IllusionState; // rax
  float v163; // xmm0_4
  const DOTA_BOT_MODE *v164; // rbx
  __int64 v165; // rax
  CDOTA_BotMode *v166; // rax
  CEntityInstance *v167; // rax
  CEntityInstance *v168; // r12
  CDOTA_BaseNPC *v169; // rax
  float v170; // xmm0_4
  float v171; // xmm1_4
  float v172; // xmm0_4
  const DOTA_BOT_MODE *v173; // rbx
  DOTA_BOT_MODE v174; // r12d
  int ii; // eax
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // r12
  CDOTA_BaseNPC *v177; // rax
  CDOTA_TeamCommander *m_pTeamCommander; // rdi
  CEntityIdentity *v179; // rax
  __int16 v180; // cx
  float v181; // xmm1_4
  float v182; // xmm0_4
  CEntityIdentity *v183; // rax
  int v184; // edx
  __int16 v185; // cx
  float v186; // xmm1_4
  float v187; // xmm0_4
  __m128 v188; // xmm0
  __m128 v189; // rt1
  CDOTA_BaseNPC *v190; // rax
  float AverageTrueAttackDamage; // xmm0_4
  float v192; // xmm1_4
  float v193; // xmm0_4
  __m128 v194; // rt1
  CDOTA_BaseNPC *v195; // rax
  CDOTA_Bot *v196; // rax
  float v197; // xmm0_4
  DOTA_LANE RoamTargetLane; // eax
  CDOTA_BaseNPC *v199; // rax
  float v200; // xmm1_4
  int v201; // eax
  float v202; // xmm0_4
  float v203; // xmm1_4
  CDOTA_BaseNPC *v204; // rax
  float v205; // xmm0_4
  CDOTA_BaseNPC *v206; // rax
  float v207; // xmm0_4
  __m128 v208; // xmm1
  float v209; // xmm0_4
  float v210; // xmm1_4
  CDOTA_BaseNPC *v211; // rax
  unsigned int v212; // r12d
  CDOTA_BaseNPC *v213; // rax
  const Vector *v214; // rbx
  const Vector *v215; // rax
  float v216; // xmm1_4
  double v217; // xmm0_8
  __m128 v218; // xmm1
  float v219; // xmm0_4
  __m128i v220; // xmm0
  int v221; // [rsp+1Ch] [rbp-2E4h]
  float fTargetHealth; // [rsp+20h] [rbp-2E0h]
  float fWorstCaseTimeUntilDeath; // [rsp+24h] [rbp-2DCh]
  float fIncomingHeroSlows; // [rsp+28h] [rbp-2D8h]
  float fIncomingHeroStuns; // [rsp+2Ch] [rbp-2D4h]
  CDOTA_BaseNPC_Hero *pHero; // [rsp+30h] [rbp-2D0h]
  float fTimeUntilDeath; // [rsp+38h] [rbp-2C8h]
  int nAlliesGanking; // [rsp+3Ch] [rbp-2C4h]
  CDOTA_Bot *pTargetBot; // [rsp+48h] [rbp-2B8h]
  int nHumansAttacking; // [rsp+60h] [rbp-2A0h]
  bool fAttackRange; // [rsp+64h] [rbp-29Ch]
  float fAttackRangea; // [rsp+64h] [rbp-29Ch]
  float v233; // [rsp+70h] [rbp-290h]
  float fHeroSpeed; // [rsp+74h] [rbp-28Ch]
  float fHeroSpeeda; // [rsp+74h] [rbp-28Ch]
  float fOutgoingSlows; // [rsp+78h] [rbp-288h]
  float fOutgoingStuns; // [rsp+7Ch] [rbp-284h]
  float fOutgoingStunsa; // [rsp+7Ch] [rbp-284h]
  float fBaseDesire; // [rsp+80h] [rbp-280h]
  float fBaseDesirea; // [rsp+80h] [rbp-280h]
  float fBaseDesireb; // [rsp+80h] [rbp-280h]
  int iTargetDamageType; // [rsp+84h] [rbp-27Ch]
  int iTargetDamageTypea; // [rsp+84h] [rbp-27Ch]
  float fMaxRangeh; // [rsp+88h] [rbp-278h]
  float fMaxRangei; // [rsp+88h] [rbp-278h]
  float fMaxRange; // [rsp+88h] [rbp-278h]
  float fMaxRangej; // [rsp+88h] [rbp-278h]
  float fMaxRangea; // [rsp+88h] [rbp-278h]
  float fMaxRangek; // [rsp+88h] [rbp-278h]
  float fMaxRangeb; // [rsp+88h] [rbp-278h]
  float fMaxRangec; // [rsp+88h] [rbp-278h]
  bool fMaxRanged; // [rsp+88h] [rbp-278h]
  float fMaxRangee; // [rsp+88h] [rbp-278h]
  float fMaxRangef; // [rsp+88h] [rbp-278h]
  float fMaxRangeg; // [rsp+88h] [rbp-278h]
  float fContributionFactor_1; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1l; // [rsp+94h] [rbp-26Ch]
  int fContributionFactor_1a; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1b; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1c; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1d; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1e; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1f; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1g; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1h; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1i; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1j; // [rsp+94h] [rbp-26Ch]
  float fContributionFactor_1k; // [rsp+94h] [rbp-26Ch]
  float pTargetb; // [rsp+98h] [rbp-268h]
  EHANDLE v271; // [rsp+A0h] [rbp-260h] BYREF
  Vector vAttackLocation; // [rsp+B0h] [rbp-250h] BYREF
  Vector iRequestCount; // [rsp+C0h] [rbp-240h] OVERLAPPED BYREF
  Vector v274; // [rsp+D0h] [rbp-230h]
  Vector hEntity; // [rsp+E0h] [rbp-220h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyCreeps; // [rsp+F0h] [rbp-210h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyEnemyHeroes; // [rsp+110h] [rbp-1F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyTargetEnemyHeroes; // [rsp+1B0h] [rbp-150h] BYREF
  unsigned __int64 v279; // [rsp+2C8h] [rbp-38h]
  Vector EstimatedAttackLocation; // 0:kr00_12.12

  v279 = __readfsqword(0x28u);
  Unit = CDOTA_BotMode::GetUnit(this);
  if ( (*(Unit->_vptr_IHandleEntity + 408))(Unit) == 0
    || (*(pTarget->_vptr_IHandleEntity + 408))(pTarget) == 0 && (*(pTarget->_vptr_IHandleEntity + 438))(pTarget) == 0 )
  {
    return 0.0;
  }
  if ( (pTarget->m_iUnitType & 1) != 0 )
    goto LABEL_5;
  v195 = CDOTA_BotMode::GetUnit(this);
  if ( CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1200.0, 0, v195) > 0 )
    return 0.0;
  pHero = 0;
  pTargetBot = 0;
  if ( (pTarget->m_iUnitType & 1) != 0 )
  {
LABEL_5:
    pHero = pTarget;
    pTargetBot = pTarget->m_pBot;
  }
  m_pBot = this->m_pBot;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  EstimatedAttackLocation = CDOTA_Bot::FindEstimatedAttackLocation(m_pBot, AbsOrigin);
  m_Value = pTarget->m_nUnitState64.m_Value;
  v274 = EstimatedAttackLocation;
  vAttackLocation = EstimatedAttackLocation;
  v9 = (m_Value & 0x200) == 0 ? 7 : 5;
  v10 = v9 & 0xFFFFFFFE;
  v11 = m_Value & 4;
  if ( v11 == 0 )
    v10 = v9;
  iTargetDamageType = v10;
  if ( (*(pTarget->_vptr_IHandleEntity + 438))(pTarget, v7, v11) != 0 )
    v12.m128_f32[0] = (*(pTarget->_vptr_IHandleEntity + 156))(pTarget);
  else
    v12.m128_f32[0] = CBaseEntity::GetHealth(pTarget);
  v13 = _mm_cmplt_ss(0x44BB8000u, v12);
  LODWORD(fTargetHealth) = _mm_andnot_ps(v13, v12).m128_u32[0] | v13.m128_i32[0] & 0x44BB8000;
  if ( pHero != 0 )
  {
    v14 = this->m_pBot;
    hNearbyEnemyCreeps.m_Size = 0;
    hNearbyEnemyCreeps.m_Memory.m_pMemory = 0;
    hNearbyEnemyCreeps.m_Memory.m_nAllocationCount = 0;
    hNearbyEnemyCreeps.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::UpdateNearbyUnits(v14);
    m_Size = v14->m_NearbyCreeps.m_Size;
    p_m_hUnit = &v14->m_hUnit;
    v17 = *&p_m_hUnit[99].m_Index;
    for ( i = &v17[2 * m_Size]; i != v17; v17 += 2 )
    {
      v19 = CEntityHandle::operator CEntityInstance *(v17);
      if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
      {
        m_CScriptComponent_high = HIBYTE(v19[7].m_CScriptComponent);
        v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
        if ( v21 == 0 || BYTE3(v21[7]._vptr_IHandleEntity) == 0 )
          v21 = 0;
        if ( m_CScriptComponent_high != HIBYTE(v21[7].m_CScriptComponent) )
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(&hNearbyEnemyCreeps, v17);
      }
    }
    if ( hNearbyEnemyCreeps.m_Size <= 0 )
    {
      fContributionFactor_1 = 0.0;
    }
    else
    {
      v22 = 0;
      fContributionFactor_1 = 0.0;
      do
      {
        v23 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyCreeps.m_Memory.m_pMemory[v22]);
        v24 = v23;
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 && LODWORD(v23[93].m_CScriptComponent) != 0 )
        {
          fMaxRangeh = CDOTA_BaseNPC::GetAttackDamage(v23);
          fMaxRangei = 10.0 * (fMaxRangeh * CDOTA_BaseNPC::GetAttacksPerSecond(v24));
          v25 = CDOTA_BotMode::GetUnit(this);
          fContributionFactor_1 = (fMaxRangei * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v25, 1)))
                                + fContributionFactor_1;
        }
        ++v22;
      }
      while ( hNearbyEnemyCreeps.m_Size > v22 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyCreeps);
  }
  else
  {
    fContributionFactor_1 = 0.0;
  }
  v26 = this->m_pBot;
  hNearbyEnemyHeroes.m_Size = 0;
  hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 32;
  hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
  hNearbyEnemyHeroes.m_Memory.m_pMemory = &hNearbyEnemyHeroes.m_FixedMemory;
  CDOTA_Bot::UpdateNearbyUnits(v26);
  m_pMemory = v26->m_NearbyHeroes.m_Memory.m_pMemory;
  v28 = &v26->m_hUnit;
  for ( j = &m_pMemory[2 * v28[103].m_Index]; j != m_pMemory; m_pMemory += 2 )
  {
    v30 = CEntityHandle::operator CEntityInstance *(m_pMemory);
    if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
    {
      v31 = HIBYTE(v30[7].m_CScriptComponent);
      v32 = CEntityHandle::operator CEntityInstance *(v28);
      if ( v32 == 0 || BYTE3(v32[7]._vptr_IHandleEntity) == 0 )
        v32 = 0;
      if ( v31 != HIBYTE(v32[7].m_CScriptComponent) )
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
          &hNearbyEnemyHeroes,
          m_pMemory);
    }
  }
  if ( pTargetBot != 0 )
  {
    hNearbyTargetEnemyHeroes.m_Size = 0;
    hNearbyTargetEnemyHeroes.m_Memory.m_nAllocationCount = 32;
    hNearbyTargetEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
    hNearbyTargetEnemyHeroes.m_Memory.m_pMemory = &hNearbyTargetEnemyHeroes.m_FixedMemory;
    CDOTA_Bot::UpdateNearbyUnits(pTargetBot);
    v33 = pTargetBot->m_NearbyHeroes.m_Memory.m_pMemory;
    for ( k = &v33[2 * pTargetBot->m_NearbyHeroes.m_Size]; k != v33; v33 += 2 )
    {
      v35 = CEntityHandle::operator CEntityInstance *(v33);
      if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
      {
        v36 = HIBYTE(v35[7].m_CScriptComponent);
        v37 = CEntityHandle::operator CEntityInstance *(&pTargetBot->m_hUnit);
        if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
        {
          if ( v36 == HIBYTE(v37[7].m_CScriptComponent) )
            goto LABEL_69;
        }
        else if ( v36 == 0 )
        {
LABEL_69:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
            &hNearbyTargetEnemyHeroes,
            v33);
        }
      }
    }
    v38 = 0;
    for ( m = 0; hNearbyTargetEnemyHeroes.m_Size > m; v43->m_Index = v40->m_Index )
    {
      while ( 1 )
      {
        v40 = &hNearbyTargetEnemyHeroes.m_Memory.m_pMemory[v38];
        if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
               &hNearbyEnemyHeroes,
               &hNearbyTargetEnemyHeroes.m_Memory.m_pMemory[v38]) < 0 )
        {
          v41 = hNearbyEnemyHeroes.m_Size;
          v42 = hNearbyEnemyHeroes.m_Size;
          if ( hNearbyEnemyHeroes.m_Size == hNearbyEnemyHeroes.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hNearbyEnemyHeroes.m_Memory, 1);
            v42 = hNearbyEnemyHeroes.m_Size;
          }
          hNearbyEnemyHeroes.m_Size = v42 + 1;
          v43 = &hNearbyEnemyHeroes.m_Memory.m_pMemory[v41];
          if ( v43 != 0 )
            break;
        }
        ++m;
        ++v38;
        if ( hNearbyTargetEnemyHeroes.m_Size <= m )
          goto LABEL_51;
      }
      ++m;
      ++v38;
    }
LABEL_51:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargetEnemyHeroes);
  }
  if ( hNearbyEnemyHeroes.m_Size <= 0 )
  {
    fOutgoingStuns = 0.0;
    fBaseDesire = 0.0;
  }
  else
  {
    v44 = 0;
    v45 = 0;
    fOutgoingStuns = 0.0;
    fBaseDesire = 0.0;
    do
    {
      v49 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v44]);
      v50 = v49;
      if ( v49 != 0
        && BYTE3(v49[7]._vptr_IHandleEntity) != 0
        && (v49[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && *&v49[45].m_worldGroupId.m_nHashCode != 0 )
      {
        v51 = CDOTA_BotMode::GetUnit(this);
        v52 = CBaseEntity::GetAbsOrigin(v51);
        v53 = CBaseEntity::GetAbsOrigin(v50);
        fMaxRangej = ((v53->x - v52->x) * (v53->x - v52->x)) + ((v53->y - v52->y) * (v53->y - v52->y));
        v54 = LODWORD(fMaxRangej);
        *v54.m128i_i32 = fsqrt(fMaxRangej);
        v55 = COERCE_FLOAT(_mm_cvtsi128_si32(v54));
        fMaxRangea = CDOTA_BaseNPC::GetAttackRange(v50) + 600.0;
        v56 = CDOTA_BaseNPC::GetAttackRange(v50) + 300.0;
        if ( fMaxRangea == v56 )
        {
          v46.m128_f32[0] = v55 - fMaxRangea;
          v47 = _mm_cmple_ss(0, v46);
          LODWORD(fMaxRange) = _mm_andnot_ps(v47, 0x3F800000u).m128_u32[0] | v47.m128_i32[0] & 0x3F000000;
        }
        else
        {
          v57 = fMaxRangea;
          fMaxRange = 1.0;
          v58 = (v55 - v56) / (v57 - v56);
          if ( v58 >= 0.0 )
          {
            fMaxRange = 0.5;
            if ( v58 <= 1.0 )
              fMaxRange = (v58 * -0.5) + 1.0;
          }
        }
        v48 = CDOTA_BotMode::GetUnit(this);
        fContributionFactor_1 = (CDOTA_Bot::GetEstimatedDamageToTarget(v50->m_pBot, 1, v48, 10.0, 7) * fMaxRange)
                              + fContributionFactor_1;
        fBaseDesire = (CDOTA_Bot::GetStunDuration(v50->m_pBot, 1) * fMaxRange) + fBaseDesire;
        fOutgoingStuns = (CDOTA_Bot::GetSlowDuration(v50->m_pBot, 1) * fMaxRange) + fOutgoingStuns;
      }
      ++v45;
      ++v44;
    }
    while ( hNearbyEnemyHeroes.m_Size > v45 );
  }
  v59 = this->m_pBot;
  hNearbyEnemyCreeps.m_Size = 0;
  hNearbyEnemyCreeps.m_Memory.m_pMemory = 0;
  hNearbyEnemyCreeps.m_Memory.m_nAllocationCount = 0;
  hNearbyEnemyCreeps.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::UpdateNearbyUnits(v59);
  v60 = v59->m_NearbyTowers.m_Size;
  v61 = &v59->m_hUnit;
  v62 = *&v61[111].m_Index;
  for ( n = &v62[2 * v60]; n != v62; v62 += 2 )
  {
    v64 = CEntityHandle::operator CEntityInstance *(v62);
    if ( v64 != 0 && BYTE3(v64[7]._vptr_IHandleEntity) != 0 )
    {
      v65 = HIBYTE(v64[7].m_CScriptComponent);
      v66 = CEntityHandle::operator CEntityInstance *(v61);
      if ( v66 == 0 || BYTE3(v66[7]._vptr_IHandleEntity) == 0 )
        v66 = 0;
      if ( v65 != HIBYTE(v66[7].m_CScriptComponent) )
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(&hNearbyEnemyCreeps, v62);
    }
  }
  v67 = 0;
  if ( hNearbyEnemyCreeps.m_Size > 0 )
  {
    while ( 1 )
    {
      v68 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyCreeps.m_Memory.m_pMemory[v67]);
      v69 = v68;
      if ( v68 == 0 || BYTE3(v68[7]._vptr_IHandleEntity) == 0 || (v68[43].m_iszPrivateVScripts.u.m_Id & 4) == 0 )
        goto LABEL_83;
      v70 = CEntityHandle::operator CEntityInstance *(&v68[59].m_iszPrivateVScripts.u.m_pAsString + 1);
      if ( v70 != 0 && v70->m_bIsDOTANPC )
      {
        if ( CDOTA_BotMode::GetUnit(this) != v70 )
          goto LABEL_83;
LABEL_90:
        fMaxRangek = 10.0 * CDOTA_BaseNPC::GetAttackDamage(v69);
        v71 = CDOTA_BotMode::GetUnit(this);
        ++v67;
        fContributionFactor_1 = (fMaxRangek * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v71, 1)))
                              + fContributionFactor_1;
        if ( hNearbyEnemyCreeps.m_Size <= v67 )
          break;
      }
      else
      {
        if ( CDOTA_BotMode::GetUnit(this) == 0 )
          goto LABEL_90;
LABEL_83:
        if ( hNearbyEnemyCreeps.m_Size <= ++v67 )
          break;
      }
    }
  }
  hNearbyTargetEnemyHeroes.m_Size = 0;
  hNearbyTargetEnemyHeroes.m_Memory.m_nAllocationCount = 64;
  hNearbyTargetEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
  hNearbyTargetEnemyHeroes.m_Memory.m_pMemory = &hNearbyTargetEnemyHeroes.m_FixedMemory;
  v72 = CDOTA_BotMode::GetUnit(this);
  v73 = CBaseEntity::GetAbsOrigin(v72);
  v74 = CDOTA_BotMode::GetUnit(this);
  FindUnitsInRadius(v74->m_iTeamNum.m_Value, v73, v72, 2000.0, &hNearbyTargetEnemyHeroes, 1, 1, 64, 0, 0);
  if ( hNearbyTargetEnemyHeroes.m_Size <= 0 )
  {
    v221 = 1;
    fMaxRangeb = 1.0;
  }
  else
  {
    v221 = hNearbyTargetEnemyHeroes.m_Size;
    fMaxRangeb = hNearbyTargetEnemyHeroes.m_Size;
  }
  v75 = LODWORD(fContributionFactor_1);
  *v75.m128i_i32 = fContributionFactor_1 / fMaxRangeb;
  v76 = COERCE_FLOAT(_mm_cvtsi128_si32(v75));
  fIncomingHeroStuns = fBaseDesire / fMaxRangeb;
  fIncomingHeroSlows = fOutgoingStuns / fMaxRangeb;
  v77 = CDOTA_BotMode::GetUnit(this);
  Health = CBaseEntity::GetHealth(v77);
  v79 = 1.0;
  v80 = (fMaxRangeb - 1.0) / 3.0;
  if ( v80 >= 0.0 )
  {
    v79 = 2.0;
    if ( v80 <= 1.0 )
      v79 = v80 + 1.0;
  }
  fWorstCaseTimeUntilDeath = v79 * (Health / (fContributionFactor_1 / 10.0));
  v81 = CDOTA_BotMode::GetUnit(this);
  iRequestCount.x = NAN;
  v82 = CBaseEntity::GetHealth(v81);
  m_pEntity = pTarget->m_pEntity;
  fTimeUntilDeath = v82 / (v76 / 10.0);
  if ( m_pEntity != 0 )
  {
    v84 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v84 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(iRequestCount.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v84 & 0x7FFF;
  }
  if ( CDOTA_TeamCommander::HasRequestActive(this->m_pBot->m_pTeamCommander, 0, &iRequestCount, 0) )
  {
    fAttackRange = 1;
  }
  else
  {
    hEntity.x = NAN;
    v85 = pTarget->m_pEntity;
    if ( v85 != 0 )
    {
      v86 = (v85->m_EHandle.m_Index >> 15) - (v85->m_flags & 1);
      v87 = 0x7FFF;
      if ( v85->m_EHandle.m_Index != -1 )
        v87 = v85->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hEntity.x) = v87 | LOWORD(hEntity.x) & 0x8000;
      LODWORD(hEntity.x) = (v86 << 15) | LOWORD(hEntity.x) & 0x7FFF;
    }
    fAttackRange = CDOTA_TeamCommander::HasRequestActive(this->m_pBot->m_pTeamCommander, 1, &hEntity, 0);
  }
  if ( hNearbyTargetEnemyHeroes.m_Size <= 0 )
  {
    nAlliesGanking = 0;
    nHumansAttacking = 0;
    v107 = 0.0;
    fOutgoingSlows = 0.0;
    fOutgoingStunsa = 0.0;
  }
  else
  {
    v88 = 0;
    nAlliesGanking = 0;
    nHumansAttacking = 0;
    fOutgoingSlows = 0.0;
    fOutgoingStunsa = 0.0;
    fBaseDesirea = 0.0;
    do
    {
      v99 = CEntityHandle::operator CEntityInstance *(&hNearbyTargetEnemyHeroes.m_Memory.m_pMemory[v88]);
      v100 = v99;
      if ( v99 != 0 && BYTE3(v99[7]._vptr_IHandleEntity) != 0 && (v99[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        v101 = *&v99[45].m_worldGroupId.m_nHashCode;
        if ( v101 != 0 )
        {
          fContributionFactor_1a = CDOTA_Bot::GetEstimatedDamageToTarget(
                                     *&v99[45].m_worldGroupId.m_nHashCode,
                                     1,
                                     pTarget,
                                     10.0,
                                     iTargetDamageType);
          if ( CDOTA_BotMode::GetUnit(this) != v100
            && (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 2 )
          {
            v106 = CEntityHandle::operator CEntityInstance *(&v101->m_hTarget);
            if ( v106 != 0 && v106->m_bIsDOTANPC )
              nAlliesGanking += pTarget == v106;
          }
          v102 = (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 11
              || (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 12
              || (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 13;
          fMaxRanged = (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 8
                    || (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 9
                    || (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 10;
          if ( CDOTA_BotMode::GetUnit(this) == v100
            || (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 2
            && (LODWORD(hEntity.x) = v101->m_hTarget.m_Index,
                pTarget == CEntityHandle::operator CEntityInstance *(&hEntity))
            || v102 )
          {
            if ( v101->m_bHuman )
              ++nHumansAttacking;
            fHeroSpeed = 1.0;
          }
          else if ( v101->m_fModeDesires[(*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode)] < 0.75 )
          {
            fHeroSpeed = 0.80000001;
          }
          else if ( fMaxRanged )
          {
            fHeroSpeed = 0.80000001;
          }
          else if ( (*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode) == 2 )
          {
            fHeroSpeed = 0.69999999;
          }
          else
          {
            v194.m128_i32[0] = 1063675494;
            LODWORD(fHeroSpeed) = _mm_cmplt_ss(
                                    LODWORD(v101->m_fModeDesires[(*(v101->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v101->m_pActiveBotMode)]),
                                    v194).m128_u32[0]
                                & 0x3F000000;
          }
          if ( fAttackRange )
          {
            fMaxRangec = 2000.0;
          }
          else if ( CDOTA_Bot::HasBlink(v101, 1) )
          {
            fMaxRangec = 2000.0;
          }
          else
          {
            fMaxRangec = CDOTA_BaseNPC::GetAttackRange(v100) + 600.0;
          }
          v89 = CBaseEntity::GetAbsOrigin(v100);
          v90 = CBaseEntity::GetAbsOrigin(pTarget);
          v233 = ((v90->x - v89->x) * (v90->x - v89->x)) + ((v90->y - v89->y) * (v90->y - v89->y));
          v91 = LODWORD(v233);
          *v91.m128i_i32 = fsqrt(v233);
          v92 = COERCE_FLOAT(_mm_cvtsi128_si32(v91));
          v93 = CDOTA_BaseNPC::GetAttackRange(v100) + 300.0;
          if ( fMaxRangec == v93 )
          {
            v94.m128_f32[0] = v92 - fMaxRangec;
            v95 = _mm_cmple_ss(0, v94);
            LODWORD(v96) = _mm_andnot_ps(v95, 0x3F800000u).m128_u32[0] | v95.m128_i32[0] & 0x3E99999A;
          }
          else
          {
            v103 = v92 - v93;
            v104 = fMaxRangec - v93;
            v96 = 1.0;
            v105 = v103 / v104;
            if ( v105 >= 0.0 )
            {
              v96 = 0.30000001;
              if ( v105 <= 1.0 )
                v96 = (-0.69999999 * v105) + 1.0;
            }
          }
          v97 = v96 * fHeroSpeed;
          v98 = fContributionFactor_1a;
          fContributionFactor_1l = v97;
          fBaseDesirea = (v98 * v97) + fBaseDesirea;
          fOutgoingSlows = (CDOTA_Bot::GetSlowDuration(v101, 1) * v97) + fOutgoingSlows;
          fOutgoingStunsa = (CDOTA_Bot::GetStunDuration(v101, 1) * fContributionFactor_1l) + fOutgoingStunsa;
        }
      }
      ++v88;
    }
    while ( hNearbyTargetEnemyHeroes.m_Size > v88 );
    v107 = fBaseDesirea / 10.0;
  }
  v108 = 0x80000000LL;
  v109 = fTargetHealth / v107;
  *&v110 = LODWORD(fTimeUntilDeath);
  fMaxRangee = fTargetHealth / v107;
  v111 = -((fWorstCaseTimeUntilDeath / (fTargetHealth / v107)) - 1.5);
  if ( v111 < 0.0 )
  {
    fBaseDesireb = 1.7;
  }
  else
  {
    fBaseDesireb = 0.0;
    if ( v111 > 1.0 )
      goto LABEL_155;
    fBaseDesireb = (v111 * -1.7) + 1.7;
  }
  if ( (pTarget->m_iUnitType & 1) == 0 )
  {
    v208 = _mm_cmpge_ss(0x3F666666u, LODWORD(fBaseDesireb));
    v108 = _mm_andnot_ps(v208, 0x3F666666u).m128_u64[0] | (LODWORD(fBaseDesireb) & v208.m128_i32[0]);
    fBaseDesireb = *&v108;
  }
LABEL_155:
  *&v110 = (fTimeUntilDeath / v109) - 2.0;
  fContributionFactor_1b = 1.5;
  HIDWORD(v112) = 0;
  *&v112 = *&v110 / -1.25;
  if ( (*&v110 / -1.25) >= 0.0 )
  {
    fContributionFactor_1b = 1.0;
    if ( *&v112 <= 1.0 )
    {
      *&v112 = (*&v112 * -0.5) + 0.5;
      fContributionFactor_1b = *&v112 + 1.0;
    }
  }
  if ( pTargetBot != 0
    && (*(pTargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(pTargetBot->m_pActiveBotMode, v112, *&v108, v110) == 4 )
  {
    *&v112 = CDOTA_Bot::GetStunDuration(this->m_pBot, 1);
    if ( *&v112 == 0.0 )
    {
      *&v112 = CDOTA_Bot::GetSlowDuration(this->m_pBot, 1);
      if ( *&v112 == 0.0 && !CDOTA_Bot::HasBlink(this->m_pBot, 1) )
      {
        v211 = CDOTA_BotMode::GetUnit(this);
        v212 = 0;
        fAttackRangea = CDOTA_BaseNPC::GetAttackRange(v211) + 100.0;
        if ( (pTarget->m_nUnitState64.m_Value & 1 | ((pTarget->m_nUnitState64.m_Value & 0x20) != 0)) == 0 )
        {
          *v220.m128i_i64 = (*(pTarget->_vptr_IHandleEntity + 386))(pTarget);
          v212 = _mm_cvtsi128_si32(v220);
        }
        v213 = CDOTA_BotMode::GetUnit(this);
        fHeroSpeeda = 0.0;
        if ( (v213->m_nUnitState64.m_Value & 1 | ((v213->m_nUnitState64.m_Value & 0x20) != 0)) == 0 )
        {
          fHeroSpeeda = (*(v213->_vptr_IHandleEntity + 386))(v213);
          v213 = CDOTA_BotMode::GetUnit(this);
        }
        v214 = CBaseEntity::GetAbsOrigin(v213);
        v215 = CBaseEntity::GetAbsOrigin(pTarget);
        v216 = v215->y - v214->y;
        *&v217 = ((v215->x - v214->x) * (v215->x - v214->x)) + (v216 * v216);
        v218.m128_u64[0] = _mm_cvtsi32_si128(v212).m128i_i64[0];
        v218.m128_f32[0] = (v218.m128_f32[0] - fHeroSpeeda) * 4.0;
        *&v217 = LODWORD(v217);
        *&v217 = fsqrt(*&v217);
        v110 = v217;
        *&v112 = _mm_cmpge_ss(0, v218).m128_u64[0] & v218.m128_u64[0];
        *&v112 = (((*&v112 + *&v110) - fAttackRangea) + 100.0) / 700.0;
        if ( *&v112 < 0.0 )
        {
          v108 = 1045220557;
        }
        else
        {
          v108 = 3206125978LL;
          if ( *&v112 <= 1.0 )
          {
            HIDWORD(v108) = 0;
            *&v108 = (-0.80000001 * *&v112) + 0.2;
          }
        }
        *&v108 = *&v108 + fContributionFactor_1b;
        fContributionFactor_1b = *&v108;
      }
    }
  }
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode, v112, *&v108, v110) == 2
    && pTargetBot != 0 )
  {
    v201 = (*(pTargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(pTargetBot->m_pActiveBotMode);
    v113 = this->m_pBot;
    if ( v201 != 4 )
      goto LABEL_162;
    LODWORD(hEntity.x) = v113->m_hTarget.m_Index;
    if ( pTarget != CEntityHandle::operator CEntityInstance *(&hEntity) )
      goto LABEL_162;
    v202 = (CDOTA_BotMode_Retreat::TimeSinceLastHitBy(pTargetBot->m_pActiveBotMode, v113) - 2.0) / 6.0;
    v203 = 0.0;
    if ( v202 >= 0.0 )
    {
      v203 = -1.5;
      if ( v202 <= 1.0 )
        v203 = (-1.5 * v202) + 0.0;
    }
    fContributionFactor_1b = v203 + fContributionFactor_1b;
  }
  v113 = this->m_pBot;
LABEL_162:
  if ( v113->m_CurrentLane != DOTA_LANE::DOTA_LANE_NONE
    && !v113->m_pTeamCommander->m_bLateGame
    && (pTarget->m_iUnitType & 1) != 0 )
  {
    v209 = 0.0;
    v210 = (fMaxRangee - 3.0) / 3.0;
    if ( v210 >= 0.0 )
    {
      v209 = -0.40000001;
      if ( v210 <= 1.0 )
        v209 = (-0.40000001 * v210) + 0.0;
    }
    fContributionFactor_1b = v209 + fContributionFactor_1b;
  }
  v114 = CBaseEntity::GetAbsOrigin(pTarget);
  hEntity = CDOTA_Bot::FindEstimatedAttackLocation(v113, v114);
  iRequestCount = hEntity;
  v115 = CDOTA_BotMode::GetUnit(this);
  v116 = CBaseEntity::GetAbsOrigin(v115);
  TotalAvoidanceForPath = CDOTA_Bot_Pathing::FindTotalAvoidanceForPath(
                            &this->m_pBot->m_AvoidancePathing,
                            v116,
                            &iRequestCount,
                            1);
  v118 = 0.0;
  v119 = TotalAvoidanceForPath / 100.0;
  if ( v119 >= 0.0 )
  {
    v118 = -1.0;
    if ( v119 <= 1.0 )
      v118 = 0.0 - v119;
  }
  fMaxRangef = v118 + fContributionFactor_1b;
  fContributionFactor_1c = 5.0;
  if ( (pTarget->m_iUnitType & 1) != 0 )
    fContributionFactor_1c = 15.0;
  v120 = (CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, &vAttackLocation, 0) / v221);
  if ( fContributionFactor_1c == 80.0 )
  {
    v155.m128_f32[0] = v120 - 80.0;
    LODWORD(v122) = _mm_cmple_ss(0, v155).m128_u32[0] & 0xBF800000;
  }
  else
  {
    v121 = (v120 - fContributionFactor_1c) / (80.0 - fContributionFactor_1c);
    v122 = 0.0;
    if ( v121 >= 0.0 )
    {
      v122 = -1.0;
      if ( v121 <= 1.0 )
        v122 = 0.0 - v121;
    }
  }
  v123 = fTimeUntilDeath * 0.25;
  v124 = v122 + fMaxRangef;
  if ( (fTimeUntilDeath * 0.25) < 0.0 )
  {
    v125 = -0.60000002;
  }
  else
  {
    v125 = 0.0;
    if ( v123 <= 1.0 )
      v125 = (v123 * 0.60000002) - 0.60000002;
  }
  fContributionFactor_1d = v124 + v125;
  if ( (iTargetDamageType & 2) != 0 )
  {
    v126 = fOutgoingStunsa / 5.0;
    v127 = 0.0;
    if ( (fOutgoingStunsa / 5.0) >= 0.0 )
    {
      v127 = 0.30000001;
      if ( v126 <= 1.0 )
        v127 = (0.30000001 * v126) + 0.0;
    }
    v128 = fOutgoingSlows / 5.0;
    v129 = v127 + fContributionFactor_1d;
    v130 = 0.0;
    if ( (fOutgoingSlows / 5.0) >= 0.0 )
    {
      v130 = 0.15000001;
      if ( v128 <= 1.0 )
        v130 = (0.15000001 * v128) + 0.0;
    }
    v131 = v130 + v129;
    v132 = 0.0;
    if ( (pTarget->m_nUnitState64.m_Value & 0x20) != 0 )
      v132 = 0.40000001;
    fContributionFactor_1e = v132 + v131;
    IsMovementImpaired = CDOTA_BaseNPC::IsMovementImpaired(pTarget);
    v134 = 0.0;
    if ( IsMovementImpaired )
      v134 = 0.2;
    fContributionFactor_1d = v134 + fContributionFactor_1e;
  }
  if ( CDOTA_BaseNPC::IsChanneling(pTarget) && CDOTA_Bot::HasMinistunOnAttack(this->m_pBot) )
    v135 = 0.5;
  else
    v135 = 0.0;
  v136 = fIncomingHeroStuns / 5.0;
  v137 = v135 + fContributionFactor_1d;
  v138 = 0.0;
  if ( (fIncomingHeroStuns / 5.0) >= 0.0 )
  {
    v138 = -0.30000001;
    if ( v136 <= 1.0 )
      v138 = (-0.30000001 * v136) + 0.0;
  }
  v139 = v138 + v137;
  v140 = fIncomingHeroSlows / 5.0;
  v141 = 0.0;
  if ( (fIncomingHeroSlows / 5.0) >= 0.0 )
  {
    v141 = -0.15000001;
    if ( v140 <= 1.0 )
      v141 = (-0.15000001 * v140) + 0.0;
  }
  v142 = v139 + v141;
  v143 = 0.0;
  v144 = nAlliesGanking * 0.5;
  if ( v144 >= 0.0 )
  {
    v143 = 0.40000001;
    if ( v144 <= 1.0 )
      v143 = (0.40000001 * v144) + 0.0;
  }
  fContributionFactor_1f = v142 + v143;
  v145 = CDOTA_BotMode::GetUnit(this);
  *v146.m128i_i32 = CBaseEntity::GetDistanceToEntity(pTarget, v145);
  v147 = COERCE_FLOAT(_mm_cvtsi128_si32(v146));
  if ( !CDOTA_Bot::HasInvisibility(this->m_pBot, 1) )
  {
    v148 = CDOTA_BotMode::GetUnit(this);
    *&iTargetDamageTypea = CDOTA_BaseNPC::GetAttackRange(v148) + 600.0;
    v149 = CDOTA_BotMode::GetUnit(this);
    v150 = CDOTA_BaseNPC::GetAttackRange(v149) + 300.0;
    if ( *&iTargetDamageTypea == v150 )
    {
      v156.m128_f32[0] = v147 - *&iTargetDamageTypea;
      LODWORD(v153) = _mm_cmple_ss(0, v156).m128_u32[0] & 0xBECCCCCD;
    }
    else
    {
      v151 = v147 - v150;
      v152 = *&iTargetDamageTypea - v150;
      v153 = 0.0;
      v154 = v151 / v152;
      if ( v154 >= 0.0 )
      {
        v153 = -0.40000001;
        if ( v154 <= 1.0 )
          v153 = (-0.40000001 * v154) + 0.0;
      }
    }
    fContributionFactor_1f = v153 + fContributionFactor_1f;
  }
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
  {
    v157 = this->m_pBot;
    LODWORD(iRequestCount.x) = v157->m_hTarget.m_Index;
    v206 = CEntityHandle::operator CEntityInstance *(&iRequestCount);
    v207 = 0.0;
    if ( pTarget == v206 )
      v207 = 0.1;
    fContributionFactor_1g = v207 + fContributionFactor_1f;
  }
  else
  {
    v157 = this->m_pBot;
    fContributionFactor_1g = fContributionFactor_1f + 0.0;
  }
  if ( (*(v157->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v157->m_pActiveBotMode) == 3 )
  {
    v158 = this->m_pBot;
    LODWORD(iRequestCount.x) = v158->m_hTarget.m_Index;
    v204 = CEntityHandle::operator CEntityInstance *(&iRequestCount);
    v205 = 0.0;
    if ( pTarget == v204 )
      v205 = 0.60000002;
    fContributionFactor_1h = v205 + fContributionFactor_1g;
  }
  else
  {
    v158 = this->m_pBot;
    fContributionFactor_1h = fContributionFactor_1g + 0.0;
  }
  if ( (*(v158->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v158->m_pActiveBotMode) == 16 )
  {
    v159 = this->m_pBot;
    LODWORD(iRequestCount.x) = v159->m_hTarget.m_Index;
    v199 = CEntityHandle::operator CEntityInstance *(&iRequestCount);
    v200 = 0.0;
    if ( pTarget == v199 )
      v200 = 0.60000002;
    v160 = v200 + fContributionFactor_1h;
  }
  else
  {
    v159 = this->m_pBot;
    v160 = fContributionFactor_1h + 0.0;
  }
  v161 = 0.0;
  if ( pTargetBot != 0 && (pTargetBot->m_iUnitType & 0x30) != 0 )
    v161 = 0.050000001;
  fContributionFactor_1i = v161 + v160;
  if ( v159->m_iDifficulty > 1 )
  {
    IllusionState = CDOTA_Commander::FindIllusionState(&g_DOTACommander, pHero);
    v163 = 0.0;
    if ( IllusionState != 0 && IllusionState->iState == DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_CONFIRMED )
      v163 = -0.30000001;
    fContributionFactor_1i = v163 + fContributionFactor_1i;
  }
  v164 = &LanePushModes[1];
  while ( 1 )
  {
    v165 = *v164;
    if ( v159->m_fModeDesires[v165] >= 0.75 )
    {
      v166 = v159->m_pBotModes[v165];
      if ( v166 == 0 )
        goto LABEL_231;
      iRequestCount.x = *(&v166[1]._vptr_CDOTA_BotMode + 1);
      v167 = CEntityHandle::operator CEntityInstance *(&iRequestCount);
      v168 = v167;
      if ( v167 == 0 || BYTE3(v167[7]._vptr_IHandleEntity) == 0 || (v167[43].m_iszPrivateVScripts.u.m_Id & 0x14) == 0 )
        goto LABEL_231;
      v169 = CDOTA_BotMode::GetUnit(this);
      if ( CBaseEntity::GetDistanceToEntity(v168, v169) < 1000.0 )
        break;
      v159 = this->m_pBot;
    }
LABEL_231:
    if ( ++v164 == &unk_33F5770 )
      goto LABEL_232;
  }
  v219 = 0.60000002;
  if ( (v168[43].m_iszPrivateVScripts.u.m_Id & 4) != 0 )
    v219 = 0.2;
  v159 = this->m_pBot;
  fContributionFactor_1i = fContributionFactor_1i - v219;
LABEL_232:
  v170 = 0.0;
  if ( v159->m_CurrentLane != DOTA_LANE::DOTA_LANE_NONE )
  {
    RoamTargetLane = CDOTA_TeamCommander::GetRoamTargetLane(v159->m_pTeamCommander);
    v159 = this->m_pBot;
    v170 = 0.0;
    if ( RoamTargetLane == v159->m_CurrentLane )
      v170 = -0.2;
  }
  v171 = fContributionFactor_1i + v170;
  v172 = 0.0;
  if ( nHumansAttacking != 0 )
    v172 = 0.40000001;
  v173 = &LaneDefendModes[1];
  v174 = DOTA_BOT_MODE::DOTA_BOT_MODE_DEFEND_TOWER_TOP;
  fContributionFactor_1j = v172 + v171;
  for ( ii = (*(v159->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v159->m_pActiveBotMode);
        ;
        ii = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    if ( ii == v174 )
    {
      LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(
                             this->m_pBot->m_pTeamCommander,
                             this->m_pBot->m_TargetLane);
      if ( LeadBuildingInLane != 0 )
      {
        v177 = CDOTA_BotMode::GetUnit(this);
        if ( CBaseEntity::GetDistanceToEntity(LeadBuildingInLane, v177) < 1200.0 )
          break;
      }
    }
    if ( ++v173 == LanePushModes )
      goto LABEL_242;
    v174 = *v173;
  }
  fContributionFactor_1j = fContributionFactor_1j + 0.30000001;
LABEL_242:
  if ( (pTarget->m_iUnitType & 1) == 0 || CDOTA_Bot::HasInvisibility(this->m_pBot, 1) )
  {
    m_pTeamCommander = this->m_pBot->m_pTeamCommander;
  }
  else
  {
    v196 = this->m_pBot;
    m_pTeamCommander = v196->m_pTeamCommander;
    if ( v196->m_CurrentLane == DOTA_LANE::DOTA_LANE_NONE || (v197 = -0.2, m_pTeamCommander->m_bLateGame) )
      v197 = 0.0;
    fContributionFactor_1j = v197 + fContributionFactor_1j;
  }
  iRequestCount.x = 0.0;
  v271.m_Index = -1;
  v179 = pTarget->m_pEntity;
  if ( v179 != 0 )
  {
    v180 = 0x7FFF;
    if ( v179->m_EHandle.m_Index != -1 )
      v180 = v179->m_EHandle.m_Index & 0x7FFF;
    v271.m_Index = (((v179->m_EHandle.m_Index >> 15) - (v179->m_flags & 1)) << 15) | v180 & 0x7FFF;
  }
  if ( CDOTA_TeamCommander::HasRequestActive(m_pTeamCommander, 0, &v271, &iRequestCount) )
  {
    v181 = 1.5;
    v182 = (SLODWORD(iRequestCount.x) - 1.0) * 0.5;
    if ( v182 >= 0.0 )
    {
      v181 = 2.0;
      if ( v182 <= 1.0 )
        v181 = (0.5 * v182) + 1.5;
    }
    fContributionFactor_1j = v181 + fContributionFactor_1j;
  }
  v271.m_Index = -1;
  v183 = pTarget->m_pEntity;
  if ( v183 != 0 )
  {
    v184 = (v183->m_EHandle.m_Index >> 15) - (v183->m_flags & 1);
    v185 = 0x7FFF;
    if ( v183->m_EHandle.m_Index != -1 )
      v185 = v183->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v271.m_Index) = v185 | v271.m_Index & 0x8000;
    v271.m_Index = (v184 << 15) | v271.m_Index & 0x7FFF;
  }
  if ( CDOTA_TeamCommander::HasRequestActive(this->m_pBot->m_pTeamCommander, 1, &v271, &iRequestCount) )
  {
    v186 = 1.0;
    v187 = (SLODWORD(iRequestCount.x) - 1.0) * 0.5;
    if ( v187 >= 0.0 )
    {
      v186 = 1.5;
      if ( v187 <= 1.0 )
        v186 = (0.5 * v187) + 1.0;
    }
    fContributionFactor_1j = v186 + fContributionFactor_1j;
  }
  v188 = 0;
  if ( (pTarget->m_nUnitState64.m_Value & 0x20) != 0 )
    v188 = 0x3F400000u;
  v188.m128_f32[0] = v188.m128_f32[0] + fContributionFactor_1j;
  if ( v188.m128_f32[0] > 3.0 )
  {
    fContributionFactor_1k = 3.0;
  }
  else
  {
    v189.m128_i32[0] = 0;
    LODWORD(fContributionFactor_1k) = v188.m128_i32[0] & _mm_cmpge_ss(v188, v189).m128_u32[0];
  }
  if ( (pTarget->m_iUnitType & 1) != 0 )
    goto LABEL_271;
  v190 = CDOTA_BotMode::GetUnit(this);
  fMaxRangeg = CDOTA_BaseNPC::GetAverageTrueAttackDamage(v190, 0);
  AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(pTarget, 0);
  if ( fMaxRangeg == 0.0 )
  {
    if ( (AverageTrueAttackDamage - fMaxRangeg) < 0.0 )
    {
LABEL_311:
      v193 = 0.69999999;
      goto LABEL_272;
    }
LABEL_271:
    v193 = 1.0;
    goto LABEL_272;
  }
  v192 = AverageTrueAttackDamage / fMaxRangeg;
  if ( (AverageTrueAttackDamage / fMaxRangeg) < 0.0 )
    goto LABEL_311;
  v193 = 1.0;
  if ( v192 <= 1.0 )
    v193 = (v192 * 0.30000001) + 0.69999999;
LABEL_272:
  pTargetb = (*(this->m_pBot->_vptr_CDOTA_Bot + 5))(this->m_pBot) * (fContributionFactor_1k * (v193 * fBaseDesireb));
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyTargetEnemyHeroes);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyCreeps);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
  return pTargetb;
}


// CDOTA_BotMode_Attack::FindPotentialAttackTarget  (line 636, @0x00000000027f67c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetModifier_Constant_First, InState, IndexToIdentity, IsInvulnerable, IsListeningToEvent, IsTempestDouble, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_TeamCommander::GetUnitList, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetUnit, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::FindModifierByName
// callers: CDOTA_BotMode_Attack::GetDesire
// strings: "modifier_brewmaster_primal_split", "modifier_life_stealer_infest"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode_Attack::FindPotentialAttackTarget(
        CDOTA_BotMode_Attack *const this,
        float fMinScore,
        CDOTA_BaseNPC **ppTarget,
        float *pScore,
        __int64 a5)
{
  __int64 v6; // r14
  int v7; // r13d
  CConcreteEntityList *v8; // r8
  CHandle<CDOTA_BaseNPC_Hero> *v9; // rsi
  uint32 m_Index; // eax
  __int16 v11; // di
  CEntityIdentity *v12; // rsi
  __int64 v13; // rdi
  CEntityIdentity *v14; // rsi
  CEntityInstance *m_pInstance; // r12
  float v16; // xmm0_4
  bool result; // al
  __int64 v18; // r12
  int v19; // r13d
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // r14
  int m_Id; // eax
  float v23; // xmm0_4
  __int64 v24; // r13
  int v25; // r12d
  CEntityInstance *v26; // rax
  CEntityInstance *v27; // r14
  __int64 v28; // rax
  int (**vptr_IHandleEntity)(...); // rax
  float v30; // xmm0_4
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pEnemyUnits; // [rsp+8h] [rbp-58h]
  CDOTA_BaseNPC *pBestTarget; // [rsp+20h] [rbp-40h]
  float fBestTargetScore; // [rsp+2Ch] [rbp-34h]

  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
  {
    fBestTargetScore = 0.0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    pBestTarget = 0;
    fBestTargetScore = 0.0;
    do
    {
      while ( 1 )
      {
        v8 = CEntityHandle::gm_pEntityList;
        v9 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v6];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 <= 1
          || (v11 = v9->m_Index,
              (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F]) == 0)
          || (v13 = v11 & 0x1FF, v8 = (8 * v13), (v14 = &v12[v13]) == 0)
          || m_Index != v14->m_EHandle.m_Index
          || (m_pInstance = v14->m_pInstance, v14->m_pInstance == 0)
          || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        {
          m_pInstance = 0;
        }
        if ( (*(this->_vptr_CDOTA_BotMode + 16))(this, m_pInstance, pScore, a5, v8) != 0 )
        {
          v16 = (*(this->_vptr_CDOTA_BotMode + 17))(this, m_pInstance);
          if ( fMinScore <= v16 && v16 > fBestTargetScore )
            break;
        }
        ++v7;
        ++v6;
        if ( v7 >= g_HeroList.m_hHeroList.m_Size )
          goto LABEL_13;
      }
      ++v7;
      ++v6;
      pBestTarget = m_pInstance;
      fBestTargetScore = v16;
    }
    while ( v7 < g_HeroList.m_hHeroList.m_Size );
LABEL_13:
    if ( pBestTarget != 0 )
    {
LABEL_14:
      result = 1;
      goto LABEL_15;
    }
  }
  pEnemyUnits = CDOTA_TeamCommander::GetUnitList(
                  this->m_pBot->m_pTeamCommander,
                  CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ENEMIES);
  if ( pEnemyUnits->m_Size > 0 )
  {
    v18 = 0;
    v19 = 0;
    pBestTarget = 0;
    do
    {
      v20 = CEntityHandle::operator CEntityInstance *(&pEnemyUnits->m_Memory.m_pMemory[v18]);
      v21 = v20;
      if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      {
        m_Id = v20[43].m_iszPrivateVScripts.u.m_Id;
        if ( ((m_Id & 0x193) == 0
           || (m_Id & 0x102) != 0
           || (m_Id & 0x80u) != 0 && v21->m_iIsControllableByPlayer64.m_Value != 0)
          && (*(this->_vptr_CDOTA_BotMode + 16))(this, v21) != 0 )
        {
          v23 = (*(this->_vptr_CDOTA_BotMode + 17))(this, v21);
          if ( fMinScore <= v23 && v23 > fBestTargetScore )
          {
            pBestTarget = v21;
            fBestTargetScore = v23;
          }
        }
      }
      ++v19;
      ++v18;
    }
    while ( pEnemyUnits->m_Size > v19 );
    if ( pBestTarget != 0 )
      goto LABEL_14;
  }
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v24 = 0;
    v25 = 0;
    pBestTarget = 0;
    while ( 1 )
    {
      v26 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v24]);
      v27 = v26;
      if ( v26 != 0 && (v26[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        if ( (*(this->_vptr_CDOTA_BotMode + 16))(this, v26) == 0
          && HIBYTE(v27[7].m_CScriptComponent) != CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value
          && (LOBYTE(v27[71].m_pEntity) == 0 || (v27[11].m_hPrivateScope.m_hScope & 0x20) == 0) )
        {
          v28 = BYTE6(v27[69].m_hPrivateScope.m_hScope);
          if ( v28 == 0xFF
            || *(*&v27[65].m_worldGroupId.m_nHashCode + 24 * v28) <= 0
            || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                 &v27[64].m_worldGroupId,
                 modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                 &CModifierParams::s_Default) != 1.0 )
          {
            vptr_IHandleEntity = v27[58]._vptr_IHandleEntity;
LABEL_48:
            if ( ((BYTE1(vptr_IHandleEntity) & 8) != 0
               || LOBYTE(v27[71]._vptr_IHandleEntity) != 0
               || (BYTE1(vptr_IHandleEntity) & 1) != 0
               || (*(v27->_vptr_IHandleEntity + 438))(v27) != 0)
              && CDOTA_BaseNPC::FindModifierByName(v27, "modifier_brewmaster_primal_split", 0) == 0
              && CDOTA_BaseNPC::FindModifierByName(v27, "modifier_life_stealer_infest", 0) == 0 )
            {
              v30 = (*(this->_vptr_CDOTA_BotMode + 17))(this, v27);
              if ( fMinScore <= v30 && v30 > fBestTargetScore )
              {
                pBestTarget = v27;
                fBestTargetScore = v30;
              }
            }
            goto LABEL_53;
          }
          if ( LOBYTE(v27[71]._vptr_IHandleEntity) == 0 )
          {
            vptr_IHandleEntity = v27[58]._vptr_IHandleEntity;
            if ( (BYTE1(vptr_IHandleEntity) & 1) == 0 )
              goto LABEL_48;
          }
        }
      }
      else
      {
        (*(this->_vptr_CDOTA_BotMode + 16))(this, 0);
      }
LABEL_53:
      ++v25;
      ++v24;
      if ( v25 >= g_HeroList.m_hHeroList.m_Size )
      {
        result = pBestTarget != 0;
        goto LABEL_15;
      }
    }
  }
  result = 0;
  pBestTarget = 0;
LABEL_15:
  if ( ppTarget != 0 )
    *ppTarget = pBestTarget;
  if ( pScore != 0 )
    *pScore = fBestTargetScore;
  return result;
}


// CDOTA_BotMode_Attack::IsValidAttackTarget  (line 736, @0x0000000002802a00, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, FastSqrt, GetBotTargetStatus, GetBotTargetStatusCore, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, GetTimeSinceLastSeen, GetUnitName, HasBeenSeenIn, InState, IsInvulnerable, IsNightmared, Length2D, Set, String, ToCStr, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BotMode::GetUnit, GetBotTargetStatusCore, V_stristr_fast(char const*,char const*), CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::HasRequestActive, CDOTA_Bot::FindNearbyTeammatesInMode, _Unwind_Resume
bool __fastcall CDOTA_BotMode_Attack::IsValidAttackTarget(CDOTA_BotMode_Attack *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Unit; // rax
  char BotTargetStatusCore; // al
  char v6; // r14
  bool v7; // r12
  const char *m_pAsString; // rdi
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v12; // rax
  float y; // xmm1_4
  float v14; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // cx
  CEntityIdentity *v17; // rax
  int v18; // edx
  __int16 v19; // cx
  CDOTA_Bot *m_pBot; // rax
  float v21; // xmm0_4
  float fDist; // [rsp+Ch] [rbp-54h]
  EHANDLE hEntity; // [rsp+10h] [rbp-50h] BYREF
  EHANDLE v24; // [rsp+20h] [rbp-40h] BYREF

  Unit = CDOTA_BotMode::GetUnit(this);
  if ( pTarget == 0 )
    return 0;
  BotTargetStatusCore = GetBotTargetStatusCore(pTarget, Unit, -1.0, 0);
  v6 = BotTargetStatusCore;
  if ( (BotTargetStatusCore & 0xB1) != 0 )
    return 0;
  if ( (BotTargetStatusCore & 6) == 6 )
    return 0;
  if ( (pTarget->m_nUnitState64.m_Value & 0x800) != 0 )
    return 0;
  if ( pTarget->m_bIsPhantom.m_Value )
    return 0;
  if ( pTarget->m_bIsWaitingToSpawn.m_Value )
    return 0;
  v7 = (pTarget->m_nUnitState64.m_Value & 0x100) != 0;
  if ( (pTarget->m_nUnitState64.m_Value & 0x100) != 0 )
    return 0;
  m_pAsString = "";
  if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
  if ( V_stristr_fast(m_pAsString, "plasma") != 0 )
    return 0;
  v10 = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CBaseEntity::GetAbsOrigin(pTarget);
  y = v12->y;
  v14 = v12->x - AbsOrigin->x;
  hEntity.m_Index = -1;
  m_pEntity = pTarget->m_pEntity;
  fDist = fsqrt((v14 * v14) + ((y - AbsOrigin->y) * (y - AbsOrigin->y)));
  if ( m_pEntity != 0 )
  {
    v16 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    hEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
  }
  if ( !CDOTA_TeamCommander::HasRequestActive(this->m_pBot->m_pTeamCommander, 0, &hEntity, 0) )
  {
    v17 = pTarget->m_pEntity;
    v24.m_Index = -1;
    if ( v17 != 0 )
    {
      v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
      v19 = 0x7FFF;
      if ( v17->m_EHandle.m_Index != -1 )
        v19 = v17->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v24.m_Index) = v19 | v24.m_Index & 0x8000;
      v24.m_Index = (v18 << 15) | v24.m_Index & 0x7FFF;
    }
    if ( !CDOTA_TeamCommander::HasRequestActive(this->m_pBot->m_pTeamCommander, 1, &v24, 0) )
      goto LABEL_29;
  }
  if ( fDist >= 2000.0 )
  {
LABEL_29:
    if ( CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 2000.0, 0, pTarget) == 0
      && fDist > (*(this->m_pBot->_vptr_CDOTA_Bot + 18))(this->m_pBot) )
    {
      return 0;
    }
    if ( (v6 & 8) != 0 )
    {
      if ( (pTarget->m_iUnitType & 1) == 0 )
        return v7;
      m_pBot = pTarget->m_pBot;
      if ( m_pBot == 0 )
        return v7;
      v21 = 0.0;
      if ( g_pGameRules != 0 )
        v21 = *&g_pGameRules[18].m_szQuestName[20];
      if ( (v21 - m_pBot->m_fLastSeen) >= 3.0 )
        return v7;
    }
  }
  return 1;
}


// CDOTA_BotMode_Attack_Human::CDOTA_BotMode_Attack_Human  (line 783, @0x00000000027f6bf0, libserver.so)  // inlines: CDOTA_BotMode, CDOTA_BotMode_Attack, CEntityHandle, CHandle, Invalidate, NetworkStateChanged, Set, operator=, operator=<float>, ~CDOTA_BotMode, ~CDOTA_BotMode_Attack
// calls: CountdownTimer::CountdownTimer, _Unwind_Resume
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_Attack_Human::CDOTA_BotMode_Attack_Human(
        CDOTA_BotMode_Attack_Human *const this,
        CDOTA_Bot *pBot)
{
  CountdownTimer *p_m_AbilityUseTimer; // r12
  vec_t z; // xmm0_4
  double v5; // xmm0_8
  __int64 v6; // xmm1_8

  p_m_AbilityUseTimer = &this->m_AbilityUseTimer;
  this->m_pBot = pBot;
  this->m_DebugStringBuffer[0] = 0;
  this->m_iDesireLocationFrame = 0;
  this->m_DebugValueBuffer[0] = 0;
  this->m_hPotentialGankTarget.m_Index = -1;
  this->m_fCurrentTargetScore = 0.0;
  this->m_vDesiredLocation.x = vec3_origin.x;
  this->m_vDesiredLocation.y = vec3_origin.y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B7910;
  this->m_vDesiredLocation.z = z;
  CountdownTimer::CountdownTimer(&this->m_AbilityUseTimer);
  CountdownTimer::CountdownTimer(&this->m_AggroTimer);
  v6 = 3212836864LL;
  this->m_hAbilityTarget.m_Index = -1;
  this->m_hAggroTarget.m_Index = -1;
  if ( this->m_AggroTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AggroTimer._vptr_CountdownTimer + 2))(&this->m_AggroTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_AggroTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_AbilityUseTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(
      p_m_AbilityUseTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v5,
      *&v6,
      -1.0);
    this->m_AbilityUseTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_fCurrentTargetScore = 0.0;
}


// CDOTA_BotMode_Attack_Human::OnStart  (line 792, @0x00000000027e3670, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsElapsed, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=
// calls: CEntityHandle::operator CEntityInstance*, CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Attack_Human::OnStart(CDOTA_BotMode_Attack_Human *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *v5; // rax
  uint32 v6; // edx
  CEntityIdentity *v7; // rcx
  __int16 v8; // si
  int v9; // eax
  __int16 v10; // dx
  CEntityInstance *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx

  m_Index = this->m_hAggroTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAggroTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hAggroTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0
    && this->m_AggroTimer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_AggroTimer) >= this->m_AggroTimer.m_timestamp.m_Value )
  {
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_hAggroTarget);
    v6 = -1;
    if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    {
      m_pEntity = v11->m_pEntity;
      if ( m_pEntity == 0 )
      {
        v6 = -1;
        goto LABEL_12;
      }
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10 = v13 | 0x8000;
      goto LABEL_11;
    }
  }
  else
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hAbilityTarget);
    v6 = -1;
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    {
      v7 = v5->m_pEntity;
      if ( v7 != 0 )
      {
        v8 = 0x7FFF;
        v9 = (v7->m_EHandle.m_Index >> 15) - (v7->m_flags & 1);
        if ( v7->m_EHandle.m_Index != -1 )
          v8 = v7->m_EHandle.m_Index & 0x7FFF;
        v10 = v8 | 0x8000;
LABEL_11:
        v6 = (v9 << 15) | v10 & 0x7FFF;
      }
    }
  }
LABEL_12:
  this->m_pBot->m_hTarget.m_Index = v6;
}


// CDOTA_BotMode_Attack_Human::OnEnd  (line 806, @0x00000000027e01e0, libserver.so)  // inlines: SetTarget, operator=
void __fastcall CDOTA_BotMode_Attack_Human::OnEnd(CDOTA_BotMode_Attack_Human *const this)
{
  this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_Attack_Human::Think  (line 814, @0x00000000027e1480, libserver.so)  // inlines: Invalidate, IsElapsed, NetworkStateChanged, Set, operator=, operator=<float>
// calls: CountdownTimer::Now
void __fastcall CDOTA_BotMode_Attack_Human::Think(CDOTA_BotMode_Attack_Human *const this)
{
  CountdownTimer *p_m_AbilityUseTimer; // r12
  float v3; // xmm0_4
  float m_Value; // xmm1_4

  p_m_AbilityUseTimer = &this->m_AbilityUseTimer;
  v3 = CountdownTimer::Now(&this->m_AbilityUseTimer);
  m_Value = this->m_AbilityUseTimer.m_timestamp.m_Value;
  if ( v3 >= m_Value )
  {
    if ( m_Value != -1.0 )
    {
      (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(p_m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AbilityUseTimer.m_timestamp.m_Value = -1.0;
    }
    this->m_hAbilityTarget.m_Index = -1;
  }
}


// CDOTA_BotMode_Attack_Human::OnDidDamage  (line 825, @0x00000000027f52e0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, IsPassive, NetworkStateChanged, Set, Start, operator=, operator=<float>
// calls: CDOTA_BotMode::GetUnit, CountdownTimer::Now
void __fastcall CDOTA_BotMode_Attack_Human::OnDidDamage(
        CDOTA_BotMode_Attack_Human *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        int iAmount)
{
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  float v10; // xmm0_4
  float v11; // [rsp-2Ch] [rbp-2Ch]

  if ( pInflictor != 0
    && ((*(pInflictor->_vptr_IHandleEntity + 251))(pInflictor) & 2) == 0
    && iAmount > 49
    && pTarget->m_iTeamNum.m_Value != CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbilityTarget.m_Index) = v9 | this->m_hAbilityTarget.m_Index & 0x8000;
      this->m_hAbilityTarget.m_Index = (v8 << 15) | this->m_hAbilityTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hAbilityTarget.m_Index = -1;
    }
    v10 = CountdownTimer::Now(&this->m_AbilityUseTimer) + 3.0;
    if ( v10 != this->m_AbilityUseTimer.m_timestamp.m_Value )
    {
      v11 = v10;
      (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AbilityUseTimer.m_timestamp.m_Value = v11;
    }
    if ( this->m_AbilityUseTimer.m_duration.m_Value != 3.0 )
    {
      (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AbilityUseTimer.m_duration.m_Value = 3.0;
    }
  }
}


// CDOTA_BotMode_Attack_Human::OnAbilityExecuted  (line 849, @0x00000000027f5450, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, operator=, operator=<float>
// calls: CDOTA_BotMode::GetUnit, CountdownTimer::Now
void __fastcall CDOTA_BotMode_Attack_Human::OnAbilityExecuted(
        CDOTA_BotMode_Attack_Human *const this,
        CDOTABaseAbility *pAbility,
        CBaseEntity *pTarget)
{
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  float v9; // xmm0_4
  float v10; // [rsp+Ch] [rbp-24h]

  if ( pTarget != 0
    && pTarget->m_bIsDOTANPC
    && (pTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
    && pTarget->m_iTeamNum.m_Value != CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value
    && ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x1000) == 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbilityTarget.m_Index) = v8 | this->m_hAbilityTarget.m_Index & 0x8000;
      this->m_hAbilityTarget.m_Index = (v7 << 15) | this->m_hAbilityTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hAbilityTarget.m_Index = -1;
    }
    v9 = CountdownTimer::Now(&this->m_AbilityUseTimer) + 3.0;
    if ( v9 != this->m_AbilityUseTimer.m_timestamp.m_Value )
    {
      v10 = v9;
      (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AbilityUseTimer.m_timestamp.m_Value = v10;
    }
    if ( this->m_AbilityUseTimer.m_duration.m_Value != 3.0 )
    {
      (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AbilityUseTimer.m_duration.m_Value = 3.0;
    }
  }
}


// CDOTA_BotMode_Attack_Human::GetDesire  (line 861, @0x00000000027f55e0, libserver.so)  // inlines: Get, GetAggroTarget, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Invalidate, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=, operator=<float>
// calls: CDOTA_BotMode::GetUnit, CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Attack_Human::GetDesire(CDOTA_BotMode_Attack_Human *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // si
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // r12
  uint32 v9; // esi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  float v12; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v14; // edx
  __int16 v15; // cx
  float v16; // [rsp+Ch] [rbp-24h]

  Unit = CDOTA_BotMode::GetUnit(this);
  m_Index = Unit->m_hAggroTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = Unit->m_hAggroTarget.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) != 0)
    && (v6 = &v5[v4 & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    v9 = this->m_hAggroTarget.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAggroTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[this->m_hAggroTarget.m_Index & 0x1FF]) == 0
      || v9 != v11->m_EHandle.m_Index
      || m_pInstance != v11->m_pInstance )
    {
      v12 = CountdownTimer::Now(&this->m_AggroTimer) + 2.0;
      if ( v12 != this->m_AggroTimer.m_timestamp.m_Value )
      {
        v16 = v12;
        (*(this->m_AggroTimer._vptr_CountdownTimer + 2))(&this->m_AggroTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_AggroTimer.m_timestamp.m_Value = v16;
      }
      if ( this->m_AggroTimer.m_duration.m_Value != 2.0 )
      {
        (*(this->m_AggroTimer._vptr_CountdownTimer + 2))(&this->m_AggroTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_AggroTimer.m_duration.m_Value = 2.0;
      }
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v15 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hAggroTarget.m_Index) = v15 | this->m_hAggroTarget.m_Index & 0x8000;
        this->m_hAggroTarget.m_Index = (v14 << 15) | this->m_hAggroTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hAggroTarget.m_Index = -1;
      }
    }
    if ( this->m_AggroTimer.m_timestamp.m_Value > 0.0
      && CountdownTimer::Now(&this->m_AggroTimer) >= this->m_AggroTimer.m_timestamp.m_Value )
    {
      return 0.89999998;
    }
  }
  else
  {
    if ( this->m_AggroTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_AggroTimer._vptr_CountdownTimer + 2))(&this->m_AggroTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
      this->m_AggroTimer.m_timestamp.m_Value = -1.0;
    }
    this->m_hAggroTarget.m_Index = -1;
  }
  if ( this->m_AbilityUseTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_AbilityUseTimer) >= this->m_AbilityUseTimer.m_timestamp.m_Value )
  {
    return 0.0;
  }
  return 0.89999998;
}


// CDOTA_BotMode_Attack_Human::GetDebugString  (line 892, @0x00000000027f9850, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRemainingTime, GetTargetNPC, GetUnitName, HasStarted, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator><float>
// calls: CountdownTimer::Now, V_sprintf_safe<128ul>
// strings: "Inferred Ganking - %s (%2.2f)"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_Attack_Human::GetDebugString(CDOTA_BotMode_Attack_Human *const this)
{
  double v1; // xmm0_8
  CDOTA_Bot *m_pBot; // rcx
  const char *m_pAsString; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v6; // si
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  char *m_DebugStringBuffer; // rbx
  CEntityInstance *m_pInstance; // rax
  float m_Value; // [rsp-14h] [rbp-1Ch]

  v1 = 0.0;
  if ( this->m_AbilityUseTimer.m_timestamp.m_Value > 0.0 )
  {
    m_Value = this->m_AbilityUseTimer.m_timestamp.m_Value;
    v1 = (m_Value - CountdownTimer::Now(&this->m_AbilityUseTimer));
  }
  m_pBot = this->m_pBot;
  m_pAsString = 0;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = m_pBot->m_hTarget.m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pAsString = "";
          if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(m_DebugStringBuffer, "Inferred Ganking - %s (%2.2f)", m_pAsString, v1);
  return m_DebugStringBuffer;
}


