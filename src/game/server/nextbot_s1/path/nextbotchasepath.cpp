
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ChasePath::ChasePath  (line 34, @0x0000000002f39fb0, libserver.so)  // inlines: CEntityHandle, CHandle, CNavPathNB, CNavTarget, GetFloat, Invalidate, operator=, ~CNavPathNB, ~CPath, ~CPathData
// calls: CPath::CPath, CountdownTimer::CountdownTimer, _Unwind_Resume
// globals: ChasePath::ms_flRepathToleranceMin, ChasePath::ms_flRepathToleranceMax, ChasePath::ms_flRepathToleranceGrowthRate
void __fastcall ChasePath::ChasePath(ChasePath *const this)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  CPath::CPath(this);
  this->m_pBot = 0;
  this->m_Target.m_bUseEntity = 1;
  this->m_Target.m_hTargetEntity.m_Index = -1;
  this->m_Target.m_bIsOpenGoal = 0;
  x = vec3_invalid.x;
  this->m_LastTarget.m_bUseEntity = 1;
  y = vec3_invalid.y;
  this->m_LastTarget.m_hTargetEntity.m_Index = -1;
  z = vec3_invalid.z;
  this->m_Target.m_vTargetPoint.x = x;
  this->m_Target.m_vTargetPoint.y = y;
  this->m_Target.m_vTargetPoint.z = z;
  this->m_LastTarget.m_bIsOpenGoal = 0;
  this->m_LastTarget.m_vTargetPoint.x = x;
  this->m_LastTarget.m_vTargetPoint.y = y;
  this->m_LastTarget.m_vTargetPoint.z = z;
  this->_vptr_CPathData = off_47B6510;  // vptr: ChasePath
  this->m_bShouldLeadTarget = 0;
  this->m_bAllowRepathDueToStuck = 1;
  CountdownTimer::CountdownTimer(&this->m_failTimer);
  CountdownTimer::CountdownTimer(&this->m_throttleTimer);
  ChasePath::ms_flRepathToleranceMin = nav_pathfind_repath_tolerance_min.m_pParent->m_Value.m_fValue;
  ChasePath::ms_flRepathToleranceMax = nav_pathfind_repath_tolerance_max.m_pParent->m_Value.m_fValue;
  ChasePath::ms_flRepathToleranceGrowthRate = nav_pathfind_repath_tolerance_growth_rate.m_pParent->m_Value.m_fValue;
}


// ChasePath::IsRepathNeeded  (line 46, @0x0000000002f396e0, libserver.so)  // inlines: FastSqrt, Get, GetCurrentPosition, GetEndPosition, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Invalidate, IsDebugging, IsElapsed, IsLengthGreaterThan, IsTargetSameEntity, IsValid, Length, LengthSqr, LookupEntity, Min<float>, NetworkStateChanged, Set, Start, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, entindex, operator CEntityInstance*, operator bool, operator-, operator->, operator=<float>, operator==<const CBaseEntity>
// calls: CountdownTimer::Now, CConcreteEntityList::LookupEntity, CBaseEntity::GetAbsOrigin, NextBotManager::IsDebugFilterMatch, CEntityInstance::GetEntityIndex, DevMsg(char const*,...), CEntityHandle::operator CEntityInstance*
// strings: "%3.2f: bot(#%d) ChasePath::IsRepathNeeded? No, bot is on a ladder.\n", "%3.2f: bot(#%d) ChasePath::IsRepathNeeded? No, fail timer hasn't elapsed.\n", "%3.2f: bot(#%d) Chase path subject changed (from %p(%d) / (%0.2f, %0.2f, %0.2f) to %p(%d)
// globals: CEntityHandle::gm_pEntityList, ChasePath::ms_flRepathToleranceGrowthRate, ChasePath::ms_flRepathToleranceMax, ChasePath::ms_flRepathToleranceMin
bool __fastcall ChasePath::IsRepathNeeded(ChasePath *const this)
{
  __int64 v2; // rax
  float v3; // xmm0_4
  float m_Value; // xmm1_4
  bool m_bIsOpenGoal; // r13
  bool m_bUseEntity; // al
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // r8
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  uint32 v11; // edx
  CEntityInstance *v12; // rdi
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx
  uint32 v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rax
  const CBaseEntity *v19; // rdi
  const Vector *AbsOrigin; // rax
  INextBot *m_pBot; // rbx
  float v22; // xmm0_4
  INextBot *v24; // r13
  const CEntityInstance *v25; // rax
  CEntityIndex v26; // eax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v28; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  vec_t v30; // xmm0_4
  vec_t v31; // xmm3_4
  vec_t v32; // xmm5_4
  float *v33; // rax
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  int m_nSegmentCount; // eax
  float v38; // xmm2_4
  Vector *p_vPos; // rax
  __int64 v40; // rax
  INextBot *v41; // rbx
  const CEntityInstance *v42; // rax
  CEntityIndex v43; // eax
  double v44; // xmm0_8
  CGlobalVars *v45; // rbx
  FnGlobalVarsWarningFunc v46; // rdx
  INextBot *v47; // rbx
  CEntityInstance *v48; // r13
  CEntityInstance *v49; // rax
  CConcreteEntityList *v50; // rsi
  CEntityInstance *v51; // r14
  double v52; // xmm6_8
  uint32 v53; // eax
  CEntityIdentity *v54; // rdx
  __int64 v55; // rcx
  CEntityIdentity *v56; // rdx
  const CEntityInstance *v57; // rax
  CEntityIndex v58; // eax
  double v59; // xmm0_8
  double v60; // xmm6_8
  double v61; // xmm5_8
  double v62; // xmm4_8
  CGlobalVars *v63; // r15
  double v64; // xmm3_8
  double v65; // xmm2_8
  double v66; // xmm1_8
  FnGlobalVarsWarningFunc v67; // rdx
  int32 v68; // [rsp+4h] [rbp-6Ch]
  double v69; // [rsp+8h] [rbp-68h]
  double v70; // [rsp+10h] [rbp-60h]
  double v71; // [rsp+18h] [rbp-58h]
  double z; // [rsp+20h] [rbp-50h]
  double v73; // [rsp+20h] [rbp-50h]
  double y; // [rsp+28h] [rbp-48h]
  float v75; // [rsp+30h] [rbp-40h]
  double x; // [rsp+30h] [rbp-40h]
  double v77; // [rsp+30h] [rbp-40h]
  float v78; // [rsp+38h] [rbp-38h]
  _BOOL4 v79; // [rsp+38h] [rbp-38h]
  int32 m_Data; // [rsp+3Ch] [rbp-34h]
  float v81; // [rsp+3Ch] [rbp-34h]
  float v82; // [rsp+3Ch] [rbp-34h]
  int32 v83; // [rsp+3Ch] [rbp-34h]
  _BOOL4 v84; // [rsp+3Ch] [rbp-34h]

  v2 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  if ( this->m_nSegmentCount > 0 && (*(*v2 + 720LL))(v2) != 0 )
  {
    m_pBot = this->m_pBot;
    if ( (g_NextBotManager.m_debugType & 4) != 0
      && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_pBot)
      && (*(m_pBot->_vptr_INextBotEventResponder + 96))(m_pBot, 4) != 0 )
    {
      v25 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
      v26.m_Data = CEntityInstance::GetEntityIndex(v25).m_Data;
      m_flCurrentTime = 0.0;
      v28 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            m_Data = v26.m_Data;
            (m_pfnWarningFunc)(1, 0.0);
            v26.m_Data = m_Data;
          }
        }
        m_flCurrentTime = v28->m_flCurrentTime;
      }
      DevMsg("%3.2f: bot(#%d) ChasePath::IsRepathNeeded? No, bot is on a ladder.\n", m_flCurrentTime, v26.m_Data);
    }
    v22 = CountdownTimer::Now(&this->m_throttleTimer) + 1.0;
    if ( v22 != this->m_throttleTimer.m_timestamp.m_Value )
    {
      v82 = v22;
      (*(this->m_throttleTimer._vptr_CountdownTimer + 2))(&this->m_throttleTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_throttleTimer.m_timestamp.m_Value = v82;
    }
    if ( this->m_throttleTimer.m_duration.m_Value != 1.0 )
    {
      (*(this->m_throttleTimer._vptr_CountdownTimer + 2))(&this->m_throttleTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_throttleTimer.m_duration.m_Value = 1.0;
    }
    return 0;
  }
  v3 = CountdownTimer::Now(&this->m_failTimer);
  m_Value = this->m_failTimer.m_timestamp.m_Value;
  if ( v3 >= m_Value )
  {
    if ( this->m_LastTarget.m_bIsOpenGoal )
      goto LABEL_37;
    m_bIsOpenGoal = this->m_Target.m_bIsOpenGoal;
    if ( m_bIsOpenGoal )
      goto LABEL_37;
    m_bUseEntity = this->m_LastTarget.m_bUseEntity;
    if ( m_bUseEntity != this->m_Target.m_bUseEntity )
      goto LABEL_37;
    if ( !m_bUseEntity )
      goto LABEL_19;
    m_Index = this->m_LastTarget.m_hTargetEntity.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_LastTarget.m_hTargetEntity.m_Index) >> 9)
                                                          & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_LastTarget.m_hTargetEntity.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    v11 = this->m_Target.m_hTargetEntity.m_Index;
    v12 = 0;
    if ( v11 + 2 > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Target.m_hTargetEntity.m_Index) >> 9)
                                                           & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[this->m_Target.m_hTargetEntity.m_Index & 0x1FF];
        if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
          v12 = v14->m_pInstance;
      }
    }
    if ( m_pInstance != v12 )
    {
LABEL_37:
      v24 = this->m_pBot;
      if ( (g_NextBotManager.m_debugType & 4) != 0 )
      {
        if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_pBot)
          && (*(v24->_vptr_INextBotEventResponder + 96))(v24, 4) != 0 )
        {
          v48 = 0;
          z = this->m_Target.m_vTargetPoint.z;
          y = this->m_Target.m_vTargetPoint.y;
          x = this->m_Target.m_vTargetPoint.x;
          v84 = this->m_Target.m_bUseEntity;
          v49 = CEntityHandle::operator CEntityInstance *(&this->m_Target.m_hTargetEntity);
          v50 = CEntityHandle::gm_pEntityList;
          v51 = v49;
          v52 = z;
          v79 = this->m_LastTarget.m_bUseEntity;
          v53 = this->m_LastTarget.m_hTargetEntity.m_Index;
          if ( v53 + 2 > 1 )
          {
            v54 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_LastTarget.m_hTargetEntity.m_Index) >> 9)
                                                                 & 0x3F];
            if ( v54 != 0 )
            {
              v55 = this->m_LastTarget.m_hTargetEntity.m_Index & 0x1FF;
              v50 = (8 * v55);
              v56 = &v54[v55];
              if ( v56 != 0 && v53 == v56->m_EHandle.m_Index )
                v48 = v56->m_pInstance;
            }
          }
          v69 = this->m_LastTarget.m_vTargetPoint.x;
          v70 = this->m_LastTarget.m_vTargetPoint.y;
          v71 = this->m_LastTarget.m_vTargetPoint.z;
          v73 = x;
          v77 = v52;
          v57 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot, v50);
          v58.m_Data = CEntityInstance::GetEntityIndex(v57).m_Data;
          v59 = 0.0;
          v60 = v77;
          v61 = y;
          v62 = v73;
          v63 = gpGlobals;
          v64 = v71;
          v65 = v70;
          v66 = v69;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              v67 = gpGlobals->m_pfnWarningFunc;
              if ( v67 != 0 )
              {
                v68 = v58.m_Data;
                (v67)(1, 0.0);
                v58.m_Data = v68;
                v66 = v69;
                v65 = v70;
                v64 = v71;
                v62 = v73;
                v61 = y;
                v60 = v77;
              }
            }
            v59 = v63->m_flCurrentTime;
          }
          DevMsg(
            "%3.2f: bot(#%d) Chase path subject changed (from %p(%d) / (%0.2f, %0.2f, %0.2f) to %p(%d) (%0.2f, %0.2f, %0.2f).\n",
            v59,
            v58.m_Data,
            v48,
            v79,
            v66,
            v65,
            v64,
            v51,
            v84,
            v62,
            v61,
            v60);
        }
        m_Value = this->m_failTimer.m_timestamp.m_Value;
      }
      if ( m_Value != -1.0 )
      {
        (*(this->m_failTimer._vptr_CountdownTimer + 2))(&this->m_failTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_failTimer.m_timestamp.m_Value = -1.0;
      }
    }
    else
    {
LABEL_19:
      if ( this->m_nSegmentCount > 0 )
      {
        if ( CountdownTimer::Now(&this->m_throttleTimer) < this->m_throttleTimer.m_timestamp.m_Value )
        {
          v47 = this->m_pBot;
          if ( (g_NextBotManager.m_debugType & 4) != 0
            && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_pBot) )
          {
            (*(v47->_vptr_INextBotEventResponder + 96))(v47, 4);
            return m_bIsOpenGoal;
          }
          return 0;
        }
        m_bUseEntity = this->m_Target.m_bUseEntity;
      }
      if ( m_bUseEntity )
      {
        v15 = this->m_Target.m_hTargetEntity.m_Index;
        if ( v15 + 2 > 1
          && (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Target.m_hTargetEntity.m_Index) >> 9)
                                                                   & 0x3F]) != 0
          && (v17 = &v16[this->m_Target.m_hTargetEntity.m_Index & 0x1FF]) != 0
          && v15 == v17->m_EHandle.m_Index )
        {
          v18 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &this->m_Target.m_hTargetEntity);
          if ( v18 != 0 )
            v19 = v18->m_pInstance;
          else
            v19 = 0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
        }
        else
        {
          AbsOrigin = &vec3_origin;
        }
        v30 = AbsOrigin->x;
        v31 = AbsOrigin->y;
        v32 = AbsOrigin->z;
      }
      else
      {
        v30 = this->m_Target.m_vTargetPoint.x;
        v31 = this->m_Target.m_vTargetPoint.y;
        v32 = this->m_Target.m_vTargetPoint.z;
      }
      v75 = v31;
      v78 = v32;
      v81 = v30;
      v33 = (*(this->m_pBot->_vptr_INextBotEventResponder + 73))(this->m_pBot);
      v34 = v75 - v33[1];
      v35 = v78 - v33[2];
      v36 = (v81 - *v33) * (v81 - *v33);
      m_nSegmentCount = this->m_nSegmentCount;
      v38 = fminf(
              ChasePath::ms_flRepathToleranceMax,
              (ChasePath::ms_flRepathToleranceGrowthRate * fsqrt((v36 + (v34 * v34)) + (v35 * v35)))
            + ChasePath::ms_flRepathToleranceMin);
      if ( m_nSegmentCount <= 0 )
        p_vPos = &vec3_origin;
      else
        p_vPos = &this->m_path[m_nSegmentCount - 1].vPos;
      if ( ((((v81 - p_vPos->x) * (v81 - p_vPos->x)) + ((v75 - p_vPos->y) * (v75 - p_vPos->y)))
          + ((v78 - p_vPos->z) * (v78 - p_vPos->z))) <= (v38 * v38) )
      {
        if ( !this->m_bAllowRepathDueToStuck )
          return 0;
        if ( *((*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot) + 64) == 0 )
          return 0;
        v40 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
        if ( (*(*v40 + 888LL))(v40) <= 2.0 )
          return 0;
      }
    }
    return 1;
  }
  v41 = this->m_pBot;
  if ( (g_NextBotManager.m_debugType & 4) == 0
    || !NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_pBot)
    || (*(v41->_vptr_INextBotEventResponder + 96))(v41, 4) == 0 )
  {
    return 0;
  }
  v42 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
  v43.m_Data = CEntityInstance::GetEntityIndex(v42).m_Data;
  v44 = 0.0;
  v45 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v46 = gpGlobals->m_pfnWarningFunc;
      if ( v46 != 0 )
      {
        v83 = v43.m_Data;
        (v46)(1, 0.0);
        v43.m_Data = v83;
      }
    }
    v44 = v45->m_flCurrentTime;
  }
  DevMsg("%3.2f: bot(#%d) ChasePath::IsRepathNeeded? No, fail timer hasn't elapsed.\n", v44, v43.m_Data);
  return 0;
}


// ChasePath::PredictTargetPosition  (line 130, @0x0000000002f38ab0, libserver.so)  // inlines: CacheEntry_t, CloseEnough, DotProduct, FastSqrt, GetAbsVelocity, Length, LengthSqr, NormalizeInPlace, Vector2DLength, Vector2DNormalize, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator/=, operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseCombatCharacter::GetNavHull, CNavMesh::GetNearestNavArea, CNavPoly::GetZ, __cxa_guard_acquire, __cxa_guard_release, CBaseEntity::CalcAbsoluteVelocity, sqrtf
// callers: ChasePath::PredictTargetPosition
// globals: `guard variable for'ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::cache, ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::iServer, ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::iNext, ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::cache
// local variable allocation has failed, the output may be wrong!
bool __fastcall ChasePath::PredictTargetPosition(
        const ChasePath *const this,
        const CBaseCombatCharacter *const rTarget,
        Vector *pPredictedPosOut)
{
  __int64 v6; // r13
  Vector *AbsOrigin; // rax
  INextBot *m_pBot; // rdi
  float *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4
  bool result; // al
  float v13; // xmm0_4
  __m128i v14; // xmm7
  __m128i v15; // xmm0
  float v16; // r12d
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  __int64 v21; // rax
  const CBaseCombatCharacter *v22; // rbx
  CNavArea *pArea; // rdi
  float v24; // xmm2_4
  float y; // xmm1_4
  int serverCount; // eax
  __int64 v27; // rcx
  float v28; // xmm0_4
  float v29; // ebx
  ChasePath::PredictTargetPosition::CacheEntry_t *v30; // rdx
  float z; // xmm7_4
  float v32; // xmm1_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm1_4
  float flRange; // [rsp+0h] [rbp-60h]
  float v37; // [rsp+4h] [rbp-5Ch]
  float v38; // [rsp+8h] [rbp-58h]
  float v39; // [rsp+Ch] [rbp-54h]
  Vector vSubjectPos; // [rsp+10h] [rbp-50h] BYREF
  Vector pathTarget; // [rsp+20h] [rbp-40h] BYREF
  NavHull_t fraction; // [rsp+30h] [rbp-30h] OVERLAPPED BYREF

  v6 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  AbsOrigin = CBaseEntity::GetAbsOrigin(rTarget);
  m_pBot = this->m_pBot;
  vSubjectPos = *AbsOrigin;
  v9 = (*(m_pBot->_vptr_INextBotEventResponder + 73))(m_pBot);
  v10 = vSubjectPos.x - *v9;
  v11 = vSubjectPos.y - v9[1];
  result = 0;
  v13 = ((v10 * v10) + (v11 * v11)) + 0.0;
  if ( v13 <= 250000.0 )
  {
    flRange = fsqrt(v13);
    v14 = 0x3F800000u;
    *v14.m128i_i32 = 1.0 / (flRange + 0.000099999997);
    v15 = v14;
    *v15.m128i_i32 = *v14.m128i_i32 * 0.0;
    v39 = v10 * *v14.m128i_i32;
    v38 = v11 * *v14.m128i_i32;
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v17 = (*(*v6 + 816LL))(v6);
    v18 = (flRange / (v17 + 0.000099999997)) + 0.5;
    if ( (rTarget->m_iEFlags & 0x1000) != 0 )
    {
      v37 = (flRange / (v17 + 0.000099999997)) + 0.5;
      CBaseEntity::CalcAbsoluteVelocity(&rTarget->CBaseFlex);
      v18 = v37;
    }
    v19 = rTarget->m_vecAbsVelocity.m_Value.x * v18;
    v20 = v18 * rTarget->m_vecAbsVelocity.m_Value.y;
    if ( (((v39 * v19) + (v38 * v20)) + (v16 * 0.0)) < 0.0 )
    {
      v32 = fsqrt((v39 * v39) + (v38 * v38));
      if ( v32 == 0.0 )
      {
        v33 = -0.0;
        v34 = 0.0;
      }
      else
      {
        v34 = v39 * (1.0 / v32);
        v33 = -((1.0 / v32) * v38);
      }
      v35 = (v19 * v33) + (v20 * v34);
      v19 = v33 * v35;
      v20 = v34 * v35;
    }
    pathTarget.y = vSubjectPos.y + v20;
    pathTarget.x = vSubjectPos.x + v19;
    pathTarget.z = vSubjectPos.z + 0.0;
    if ( (((v19 * v19) + (v20 * v20)) + 0.0) > 1296.0
      && (*(*v6 + 872LL))(v6, &vSubjectPos, &pathTarget, 0, &fraction) == 0 )
    {
      pathTarget.y = ((pathTarget.y - vSubjectPos.y) * *&fraction.m_hullCategory) + vSubjectPos.y;
      pathTarget.z = ((pathTarget.z - vSubjectPos.z) * *&fraction.m_hullCategory) + vSubjectPos.z;
      pathTarget.x = ((pathTarget.x - vSubjectPos.x) * *&fraction.m_hullCategory) + vSubjectPos.x;
    }
    v21 = (*(rTarget->_vptr_IHandleEntity + 148))(rTarget);
    v22 = v21;
    if ( v21 != 0
      && fabs(pathTarget.x - vSubjectPos.x) <= 3.0
      && fabs(pathTarget.y - vSubjectPos.y) <= 3.0
      && fabs(pathTarget.z - vSubjectPos.z) <= 3.0 )
    {
      pathTarget = vSubjectPos;
      pArea = (*(*v21 + 2888LL))(v21);
      if ( pArea != 0 )
      {
        y = pathTarget.y;
        goto LABEL_17;
      }
      return 0;
    }
    if ( `guard variable for'ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::cache == 0
      && __cxa_guard_acquire(&`guard variable for'ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::cache) != 0 )
    {
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[0].pArea = 0;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[1].pArea = 0;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[2].pArea = 0;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[3].pArea = 0;
      __cxa_guard_release(&`guard variable for'ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::cache);
    }
    if ( gpGlobals->serverCount == ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::iServer )
    {
      v30 = ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache;
      v24 = 2.0;
      while ( 1 )
      {
        pArea = v30->pArea;
        if ( pArea != 0 && fabs(v30->target.x - pathTarget.x) <= 2.0 )
        {
          y = v30->target.y;
          if ( fabs(y - pathTarget.y) <= 2.0 )
          {
            z = v30->target.z;
            if ( fabs(z - pathTarget.z) <= 2.0 )
              break;
          }
        }
        if ( ++v30 == &`guard variable for'ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)::cache )
          goto LABEL_15;
      }
      pathTarget.x = v30->target.x;
      pathTarget.y = y;
      pathTarget.z = z;
    }
    else
    {
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[3].pArea = 0;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[0].pArea = 0;
      serverCount = gpGlobals->serverCount;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[1].pArea = 0;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[2].pArea = 0;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::iServer = serverCount;
LABEL_15:
      fraction = CBaseCombatCharacter::GetNavHull(v22);
      pArea = CNavMesh::GetNearestNavArea(TheNavMesh, &pathTarget, fraction, 4, 10000.0);
      if ( pArea == 0 )
        return 0;
      y = pathTarget.y;
      v24 = pathTarget.z;
      v27 = ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::iNext;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::iNext = (ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::iNext
                                                                                          + 1)
                                                                                         & 3;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[v27].target = pathTarget;
      ChasePath::PredictTargetPosition(CBaseCombatCharacter const&,Vector *)const::cache[v27].pArea = pArea;
    }
LABEL_17:
    v28 = CNavPoly::GetZ(pArea, y, v24);
    v29 = pathTarget.z;
    if ( (v29 - (*(*v6 + 800LL))(v6)) <= v28 )
    {
      *pPredictedPosOut = pathTarget;
      return 1;
    }
    return 0;
  }
  return result;
}


// ChasePath::PredictTargetPosition  (line 130, @0x0000000002f390e0, libserver.so)
// calls: ChasePath::PredictTargetPosition
bool __fastcall ChasePath::PredictTargetPosition(
        const ChasePath *const this,
        const CBaseCombatCharacter *const rTarget,
        Vector *pPredictedPosOut)
{
  return this->m_bShouldLeadTarget && ChasePath::PredictTargetPosition(this, rTarget, pPredictedPosOut);
}


// CPathFollowerDirect::UpdatePathAndFollow  (line 280, @0x0000000002f407b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsDebugging, IsValid, LookupEntity, PathCapabilities_t, SetPathingBot, SetPredictedTargetPos, UpdatePathAndFollow, UpdatePathForTarget<INextBot>, curtime, entindex, operator CEntityInstance*, operator const CBaseEntity*, operator!=, operator=
// calls: CPathFollowerDirect::DirectChase, CPathFollower::UpdateFollow, NextBotManager::IsDebugFilterMatch, CPath::ComputePathToPosCore, CEntityInstance::GetEntityIndex, DevMsg(char const*,...), CPath::ComputePathToEntityCore, CBaseEntity::GetAbsOrigin
// strings: "%3.2f: bot(#%d) UpdatePathForTarget. Target point is invalid.\n", "%3.2f: Entity(#%d) UpdatePathForTarget failed. No subject.\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPathFollowerDirect::UpdatePathAndFollow(
        CPathFollowerDirect *const this,
        INextBot *const rMe,
        const CNavTarget *const rTarget,
        const CPathCostBase *const rPathCost)
{
  char m_bDirectSuccessful; // r13
  char v8; // al
  CNavPathNB *m_rPath; // rdi
  CNavPathNB *v10; // rdx
  CNavPathNB *v11; // r12
  CNavPathNB *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  _BOOL8 v18; // rsi
  CEntityIndex v19; // eax
  double v20; // xmm0_8
  CGlobalVars *v21; // r13
  FnGlobalVarsWarningFunc v22; // rdx
  CEntityIndex v23; // eax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v25; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  INextBot *m_pInstance; // rcx
  __int64 v28; // rax
  const CBaseEntity *v29; // r13
  bool v30; // al
  const Vector *AbsOrigin; // rax
  const INextBot *pBot; // [rsp+0h] [rbp-70h]
  INextBot *pBota; // [rsp+0h] [rbp-70h]
  int32 rPathCostb; // [rsp+8h] [rbp-68h]
  int32 rPathCostc; // [rsp+8h] [rbp-68h]
  Vector v37; // [rsp+10h] [rbp-60h] BYREF
  PathCapabilities_t rPathCaps; // [rsp+20h] [rbp-50h] BYREF

  this->m_rPath->m_vPredictedTargetPos = vec3_invalid;
  CPathFollowerDirect::DirectChase(this, rMe, rTarget);
  m_bDirectSuccessful = this->m_bDirectSuccessful;
  if ( m_bDirectSuccessful == 0 )
  {
    this->m_pBot = rMe;
    if ( (g_NextBotManager.m_debugType & 4) != 0 && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, rMe) )
      v8 = (*(rMe->_vptr_INextBotEventResponder + 96))(rMe, 4);
    else
      v8 = 0;
    m_rPath = this->m_rPath;
    this->m_bIsDebugging = v8;
    (*(m_rPath->_vptr_CPathData + 6))(m_rPath, this);
    v10 = this->m_rPath;
    v10->m_Target.m_hTargetEntity.m_Index = rTarget->m_hTargetEntity.m_Index;
    v10->m_Target.m_vTargetPoint.x = rTarget->m_vTargetPoint.x;
    v10->m_Target.m_vTargetPoint.y = rTarget->m_vTargetPoint.y;
    v10->m_Target.m_vTargetPoint.z = rTarget->m_vTargetPoint.z;
    v10->m_Target.m_bUseEntity = rTarget->m_bUseEntity;
    v10->m_Target.m_bIsOpenGoal = rTarget->m_bIsOpenGoal;
    this->m_rPath->m_pBot = this->m_pBot;
    v11 = this->m_rPath;
    pBot = this->m_pBot;
    if ( (*(v11->_vptr_CPathData + 9))(v11) != 0 )
    {
      rPathCaps.m_pPathingEntity = 0;
      rPathCaps.m_bIsDebugging = 0;
      rPathCaps.m_flMoverStepHeight = 1.0;
      rPathCaps.m_flMoverCrouchHullHeight = 1.0;
      rPathCaps.m_pPathCost = rPathCost;
      rPathCaps.m_pPathingEntity = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
      if ( (g_NextBotManager.m_debugType & 4) != 0 && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, pBot) )
        m_bDirectSuccessful = (*(pBot->_vptr_INextBotEventResponder + 96))(pBot, 4);
      rPathCaps.m_bIsDebugging = m_bDirectSuccessful;
      v13 = (*(pBot->_vptr_INextBotEventResponder + 69))(pBot);
      if ( v13 != 0 )
      {
        rPathCaps.m_flMoverCrouchHullHeight = (*(*v13 + 768LL))(v13);
        v14 = (*(pBot->_vptr_INextBotEventResponder + 68))(pBot);
        if ( v14 != 0 )
          rPathCaps.m_flMoverStepHeight = (*(*v14 + 792LL))(v14);
      }
      if ( rPathCaps.m_pPathingEntity != 0 )
      {
        if ( v11->m_Target.m_bUseEntity )
        {
          m_Index = v11->m_Target.m_hTargetEntity.m_Index;
          if ( m_Index + 2 > 1
            && (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Target.m_hTargetEntity.m_Index) >> 9)
                                                                     & 0x3F]) != 0
            && (v17 = &v16[v11->m_Target.m_hTargetEntity.m_Index & 0x1FF]) != 0
            && m_Index == v17->m_EHandle.m_Index
            && (m_pInstance = v17->m_pInstance) != 0 )
          {
            pBota = m_pInstance;
            v28 = (*(m_pInstance->_vptr_INextBotEventResponder + 148))(m_pInstance);
            v29 = v28;
            if ( v28 != 0 )
            {
              if ( (*(v11->_vptr_CPathData + 10))(v11, v28, &v37, pBota) != 0 )
                v30 = CPath::ComputePathToPosCore(v11, &rPathCaps, &v37, rPathCost);
              else
                v30 = CPath::ComputePathToEntityCore(v11, &rPathCaps, v29, rPathCost);
            }
            else
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(pBota);
              v30 = CPath::ComputePathToPosCore(v11, &rPathCaps, AbsOrigin, rPathCost);
            }
            v18 = v30;
          }
          else
          {
            v18 = 0;
            if ( rPathCaps.m_bIsDebugging )
            {
              v23.m_Data = CEntityInstance::GetEntityIndex(rPathCaps.m_pPathingEntity).m_Data;
              m_flCurrentTime = 0.0;
              v25 = gpGlobals;
              if ( gpGlobals != 0 )
              {
                if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
                {
                  m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                  if ( m_pfnWarningFunc != 0 )
                  {
                    rPathCostc = v23.m_Data;
                    (m_pfnWarningFunc)(1, 0.0);
                    v23.m_Data = rPathCostc;
                  }
                }
                m_flCurrentTime = v25->m_flCurrentTime;
              }
              DevMsg("%3.2f: Entity(#%d) UpdatePathForTarget failed. No subject.\n", v23.m_Data, m_flCurrentTime);
              v18 = 0;
            }
          }
        }
        else if ( vec3_invalid.x == v11->m_Target.m_vTargetPoint.x
               && vec3_invalid.y == v11->m_Target.m_vTargetPoint.y
               && vec3_invalid.z == v11->m_Target.m_vTargetPoint.z )
        {
          v18 = 0;
          if ( rPathCaps.m_bIsDebugging )
          {
            v19.m_Data = CEntityInstance::GetEntityIndex(rPathCaps.m_pPathingEntity).m_Data;
            v20 = 0.0;
            v21 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                v22 = gpGlobals->m_pfnWarningFunc;
                if ( v22 != 0 )
                {
                  rPathCostb = v19.m_Data;
                  (v22)(1, 0.0);
                  v19.m_Data = rPathCostb;
                }
              }
              v20 = v21->m_flCurrentTime;
            }
            DevMsg("%3.2f: bot(#%d) UpdatePathForTarget. Target point is invalid.\n", v20, v19.m_Data);
            v18 = 0;
          }
        }
        else
        {
          v18 = CPath::ComputePathToPosCore(v11, &rPathCaps, &v11->m_Target.m_vTargetPoint, rPathCost);
        }
      }
      else
      {
        v18 = 0;
      }
      (*(v11->_vptr_CPathData + 8))(v11, v18);
    }
    CPathFollower::UpdateFollow(this, this->m_pBot);
    v12 = this->m_rPath;
    this->m_pBot = rMe;
    (*(v12->_vptr_CPathData + 11))(v12);
    this->m_rPath->m_pBot = 0;
    this->m_pBot = 0;
  }
  this->m_rPath->m_vPredictedTargetPos = vec3_invalid;
}


// CPathFollowerDirect::DirectChase  (line 294, @0x0000000002f40370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetPathingBot, SetPredictedTargetPos, operator CEntityInstance*, operator bool, operator const CBaseEntity*, operator->, operator=
// calls: CPathFollower::IsDiscontinuityAhead, CBaseEntity::GetAbsOrigin, NavHull_t::NavHull_t, CNavMesh::TestRayToMesh, CEntityHandle::operator CEntityInstance*
// callers: CPathFollowerDirect::UpdatePathAndFollow
// globals: CEntityHandle::gm_pEntityList, CHeadLookParams::ms_Defaults
void __fastcall CPathFollowerDirect::DirectChase(
        CPathFollowerDirect *const this,
        INextBot *const rMe,
        const CNavTarget *const rNewTarget)
{
  CNavPathNB *m_rPath; // r12
  __int64 v5; // r13
  CNavPathNB *v6; // rax
  bool v7; // zf
  CNavPathNB *v8; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm2_4
  const CEntityHandle *v16; // rax
  uint32 v17; // edx
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx
  unsigned __int8 (__fastcall *v20)(__int64, NavHull_t *, Vector *, __int64, _QWORD); // r14
  float v21; // xmm1_4
  float v22; // xmm2_4
  vec_t v23; // xmm1_4
  float v24; // xmm3_4
  __int64 v25; // rax
  CNavPathNB *v26; // rax
  CEntityInstance *v27; // rax
  __int64 v28; // rsi
  __int128 v29; // [rsp+0h] [rbp-70h]
  const CBaseEntity *pTargetEntity; // [rsp+8h] [rbp-68h]
  Vector vTargetPos; // [rsp+10h] [rbp-60h] BYREF
  Vector vStart; // [rsp+20h] [rbp-50h] BYREF
  NavHull_t v33; // [rsp+30h] [rbp-40h] BYREF

  this->m_pBot = rMe;
  this->m_rPath->m_pBot = rMe;
  m_rPath = this->m_rPath;
  m_rPath->m_Target = *rNewTarget;
  this->m_bDirectSuccessful = 0;
  v5 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  if ( (*(this->m_pBot->_vptr_INextBotEventResponder + 81))(this->m_pBot) != 0
    || (*(*v5 + 592LL))(v5) != 0
    || CPathFollower::IsDiscontinuityAhead(this, this->m_pBot, CPathSegment::SegmentType::PATH_SEG_CLIMB_UP, -1.0) != 0 )
  {
    goto LABEL_2;
  }
  v7 = CPathFollower::IsDiscontinuityAhead(this, this->m_pBot, CPathSegment::SegmentType::PATH_SEG_JUMP_OVER_GAP, -1.0) == 0;
  v8 = this->m_rPath;
  if ( !v7 )
    goto LABEL_22;
  if ( !v8->m_Target.m_bUseEntity )
  {
    DWORD2(v29) = 0;
    vTargetPos = m_rPath->m_Target.m_vTargetPoint;
    goto LABEL_17;
  }
  m_Index = v8->m_Target.m_hTargetEntity.m_Index;
  if ( m_Index + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Target.m_hTargetEntity.m_Index) >> 9)
                                                             & 0x3F]) == 0
    || (v11 = &v10[v8->m_Target.m_hTargetEntity.m_Index & 0x1FF]) == 0
    || m_Index != v11->m_EHandle.m_Index
    || (*(&v29 + 1) = v11->m_pInstance, v11->m_pInstance == 0) )
  {
LABEL_22:
    this->m_pBot = 0;
    v8->m_pBot = 0;
    return;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11->m_pInstance);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  vTargetPos.x = AbsOrigin->x;
  v16 = this->m_rPath;
  vTargetPos.y = y;
  vTargetPos.z = z;
  v17 = v16[5682].m_Index;
  if ( v17 + 2 > 1 )
  {
    v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16[5682].m_Index) >> 9) & 0x3F];
    if ( v18 != 0 )
    {
      v19 = &v18[v16[5682].m_Index & 0x1FF];
      if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
      {
        v27 = CEntityHandle::operator CEntityInstance *(v16 + 5682);
        v28 = (*(v27->_vptr_IHandleEntity + 148))(v27);
        if ( v28 != 0 )
          (*(this->m_rPath->_vptr_CPathData + 10))(this->m_rPath, v28, &vTargetPos);
        v16 = this->m_rPath;
        x = vTargetPos.x;
        y = vTargetPos.y;
        z = vTargetPos.z;
      }
    }
  }
  *&v16[5692].m_Index = x;
  *&v16[5693].m_Index = y;
  *&v16[5694].m_Index = z;
LABEL_17:
  v20 = *(*v5 + 872LL);
  *&v33.m_hullCategory = (*(*v5 + 784LL))(v5);
  v33.m_flHullHeight = v21;
  if ( v20(v5, &v33, &vTargetPos, 1, 0) == 0
    || (NavHull_t::NavHull_t(&v33, 0.0, v22, 1u),
        *&vStart.x = (*(*v5 + 784LL))(v5),
        vStart.z = v23,
        !CNavMesh::TestRayToMesh(TheNavMesh, &vStart, &vTargetPos, v29, 0, 0, -1.0, v24)) )
  {
LABEL_2:
    v6 = this->m_rPath;
    this->m_pBot = 0;
    v6->m_pBot = 0;
    return;
  }
  (*(*v5 + 744LL))(v5, &vTargetPos);
  (*(*v5 + 528LL))(v5, &vTargetPos, 1.0);
  v25 = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))();
  if ( pTargetEntity != 0 )
    (*(*v25 + 560LL))(v25, pTargetEntity, &CHeadLookParams::ms_Defaults);
  else
    (*(*v25 + 552LL))(v25, &vTargetPos, &CHeadLookParams::ms_Defaults);
  (*(this->m_rPath->_vptr_CPathData + 2))(this->m_rPath);
  v26 = this->m_rPath;
  this->m_bDirectSuccessful = 1;
  this->m_pBot = 0;
  v26->m_pBot = 0;
}


