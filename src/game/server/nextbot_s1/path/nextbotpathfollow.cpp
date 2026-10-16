// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/path/nextbotpathfollow.cpp:57
class CDetachPath {
	CDetachPath(CPathFollower *);
	bool operator()(INextBot *);

	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathFollower::CPathFollower  (line 43, @0x0000000002f3a0d0, libserver.so)  // inlines: CEntityHandle, CHandle, Set, operator=
// calls: CountdownTimer::CountdownTimer
// callers: CSimpleBot::CSimpleBotIntention::Reset, CSimpleBot::CSimpleBotIntention::CSimpleBotIntention
void __fastcall CPathFollower::CPathFollower(CPathFollower *const this, CNavPathNB *const rPath)
{
  CountdownTimer *p_m_avoidTimer; // rdi

  p_m_avoidTimer = &this->m_avoidTimer;
  *&p_m_avoidTimer[-3].m_bUseGlobalsTime = off_47B6610;
  *&p_m_avoidTimer[-2].m_duration.m_Value = rPath;
  p_m_avoidTimer[-2]._vptr_CountdownTimer = 0;
  p_m_avoidTimer[-2].m_bUseGlobalsTime = 0;
  *(&p_m_avoidTimer[-2].m_bUseGlobalsTime + 1) = 0;
  p_m_avoidTimer[-1]._vptr_CountdownTimer = 0;
  p_m_avoidTimer[-1].m_duration.m_Value = -1.0;
  p_m_avoidTimer[-1].m_timestamp.m_Value = NAN;
  CountdownTimer::CountdownTimer(p_m_avoidTimer);
  CountdownTimer::CountdownTimer(&this->m_waitTimer);
  CountdownTimer::CountdownTimer(&this->m_lookAheadTimer);
  this->m_bDidAvoidCheck = 0;
  this->m_hHindranceEntity.m_Index = -1;
}


// CPathFollower::~CPathFollower  (line 76, @0x0000000002f39600, libserver.so)  // inlines: ForEachBot<CDetachPath>, operator(), operator[]
// callers: CPathAndFollower<CNavPathNB>::~CPathAndFollower, CSimpleBotRoam::~CSimpleBotRoam, CSimpleBot::CSimpleBotIntention::Reset, CSimpleBot::CSimpleBotIntention::CSimpleBotIntention
void __fastcall CPathFollower::~CPathFollower(CPathFollower *const this)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v4; // rbx

  this->_vptr_IPathFollower = off_47B6610;  // vptr: CPathFollower
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v4 = m_Head;
      (*(m_pMemory[v4].m_Element->_vptr_INextBotEventResponder + 87))(m_pMemory[v4].m_Element, this);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v4].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
}


// CPathFollower::~CPathFollower  (line 76, @0x0000000002f39670, libserver.so)  // inlines: ForEachBot<CDetachPath>, operator(), operator[], ~CPathFollower
// calls: operator delete
void __fastcall CPathFollower::~CPathFollower(CPathFollower *const this)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v4; // rbx

  this->_vptr_IPathFollower = off_47B6610;  // vptr: CPathFollower
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v4 = m_Head;
      (*(m_pMemory[v4].m_Element->_vptr_INextBotEventResponder + 87))(m_pMemory[v4].m_Element, this);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v4].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
  operator delete(this);
}


// CPathFollower::OnPathInvalidated  (line 85, @0x0000000002f39560, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=, operator=<float>
void __fastcall CPathFollower::OnPathInvalidated(CPathFollower *const this)
{
  if ( this->m_avoidTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_avoidTimer._vptr_CountdownTimer + 2))(&this->m_avoidTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_avoidTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_waitTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_waitTimer._vptr_CountdownTimer + 2))(&this->m_waitTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_waitTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_hHindranceEntity.m_Index = -1;
}


// CPathFollower::OnPathChanged  (line 94, @0x0000000002f38790, libserver.so)  // inlines: FirstSegment
void __fastcall CPathFollower::OnPathChanged(CPathFollower *const this)
{
  CNavPathNB *m_rPath; // rdx
  const CPathSegment *m_path; // rax

  m_rPath = this->m_rPath;
  m_path = 0;
  if ( m_rPath->m_nSegmentCount > 0 )
    m_path = m_rPath->m_path;
  this->m_pGoal = m_path;
}


// CPathFollower::AdjustSpeed  (line 102, @0x0000000002f3a150, libserver.so)  // inlines: Min<float>
// calls: CPathData::MoveCursorToClosestPosition, CPathData::GetCursorData
// callers: CPathFollower::UpdateFollow
void __fastcall CPathFollower::AdjustSpeed(CPathFollower *const this)
{
  __int64 v2; // rbx
  const CPathSegment *m_pGoal; // rax
  const Vector *v4; // rax
  const CPathData::PathCursorData *CursorData; // r12
  __m128i v6; // xmm0
  float v7; // xmm0_4
  double v8; // xmm2_8
  float v9; // [rsp+8h] [rbp-18h]
  float flMaxSpeedForCurvature; // [rsp+Ch] [rbp-14h]
  unsigned int flMaxSpeedForCurvaturea; // [rsp+Ch] [rbp-14h]

  v2 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  m_pGoal = this->m_pGoal;
  if ( m_pGoal != 0 && m_pGoal->type == CPathSegment::SegmentType::PATH_SEG_JUMP_OVER_GAP || (*(*v2 + 664LL))(v2) == 0 )
  {
    (*(*v2 + 600LL))(v2);
  }
  else
  {
    v4 = (*(this->m_pBot->_vptr_INextBotEventResponder + 73))(this->m_pBot);
    CPathData::MoveCursorToClosestPosition(this->m_rPath, v4, 0, 0.0);
    CursorData = CPathData::GetCursorData(this->m_rPath);
    flMaxSpeedForCurvature = (*(*v2 + 816LL))(v2);
    v9 = fabs(CursorData->flCurvature);
    *v6.m128i_i64 = (*(*v2 + 824LL))(v2);
    *&flMaxSpeedForCurvaturea = flMaxSpeedForCurvature
                              + ((COERCE_FLOAT(_mm_cvtsi128_si32(v6)) - (*(*v2 + 816LL))(v2)) * v9);
    v7 = (*(*v2 + 640LL))(v2);
    *&v8 = flMaxSpeedForCurvaturea;
    *&v8 = fminf(*&flMaxSpeedForCurvaturea, v7);
    (*(*v2 + 632LL))(v2, v8);
  }
}


// CPathFollower::IsAtGoal  (line 126, @0x0000000002f3a270, libserver.so)  // inlines: DotProduct2D, NextSegment, PriorSegment, Vector2DAdd, VectorSubtract, abs<float>, operator+, operator-, operator=
// calls: CLocomotionBase::HasPotentialGap, _Unwind_Resume
// callers: CPathFollower::CheckProgress
bool __fastcall CPathFollower::IsAtGoal(const CPathFollower *const this)
{
  const CLocomotionBase *v2; // r12
  __int64 v3; // rax
  CPathSegment *m_path; // rsi
  const CPathSegment *m_pGoal; // rdx
  CNavPathNB *m_rPath; // rcx
  __int64 v7; // r13
  int m_nSegmentCount; // eax
  CPathSegment *v9; // rsi
  double v10; // xmm0_8
  double v11; // xmm1_8
  const CPathSegment *v12; // rax
  __int64 v13; // rcx
  double v14; // xmm2_8
  double v15; // xmm0_8
  CPathSegment::SegmentType type; // edx
  double v17; // xmm4_8
  double v18; // xmm3_8
  double v19; // xmm5_8
  CNavPathNB *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rbx
  float y; // xmm2_4
  float v24; // xmm5_4
  unsigned __int8 (__fastcall *v25)(const CLocomotionBase *, double *, const Vector *, __int64, _QWORD); // r15
  const Vector *p_vPos; // rbx
  float v27; // xmm1_4
  vec_t v28; // xmm1_4
  float v29; // xmm0_4
  bool result; // al
  float v31; // xmm0_4
  CNavPathNB *v32; // rdx
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rbx
  float v36; // xmm1_4
  CNavPathNB *v37; // rdx
  int v38; // ecx
  __int64 v39; // rax
  double v40; // xmm0_8
  const CPathSegment *v41; // rax
  float v42; // xmm1_4
  float v43; // [rsp+Ch] [rbp-64h]
  float v44; // [rsp+10h] [rbp-60h]
  float v45; // [rsp+14h] [rbp-5Ch]
  __int64 v46; // [rsp+18h] [rbp-58h]
  float v47; // [rsp+18h] [rbp-58h]
  float v48; // [rsp+18h] [rbp-58h]
  float z; // [rsp+18h] [rbp-58h]
  double v50; // [rsp+20h] [rbp-50h] BYREF
  float v51; // [rsp+28h] [rbp-48h]
  Vector vFrom; // [rsp+30h] [rbp-40h] BYREF

  v2 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  v3 = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))(this->m_pBot);
  m_pGoal = this->m_pGoal;
  m_rPath = this->m_rPath;
  if ( m_pGoal == 0
    || (v7 = v3, (m_nSegmentCount = m_rPath->m_nSegmentCount) <= 0)
    || (m_path = m_rPath->m_path, (m_pGoal = (0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - m_rPath->m_path) >> 3))) <= 0)
    || m_nSegmentCount <= m_pGoal )
  {
    (*(v2->_vptr_INextBotEventResponder + 98))(v2, m_path, m_pGoal, m_rPath);
    return 1;
  }
  v46 = &m_rPath->m_path[m_pGoal - 1];
  v10 = (*(v2->_vptr_INextBotEventResponder + 98))(v2);
  v12 = this->m_pGoal;
  *&vFrom.x = v10;
  v13 = v46;
  vFrom.z = *&v11;
  *&v14 = LODWORD(v10);
  *&v15 = HIDWORD(v10);
  type = v12->type;
  *&v17 = LODWORD(v12->vPos.x);
  *&v18 = LODWORD(v12->vPos.y);
  *&v19 = LODWORD(v12->vPos.z);
  if ( type == CPathSegment::SegmentType::PATH_SEG_DROP_DOWN )
  {
    v32 = this->m_rPath;
    v33 = v32->m_nSegmentCount;
    if ( v33 > 0 )
    {
      v34 = 0x2E8BA2E8BA2E8BA3LL * ((v12 - v32->m_path) >> 3);
      if ( v34 >= 0 && v34 < v33 - 1 )
      {
        v35 = &v32->m_path[v34 + 1];
        v50 = (*(v2->_vptr_INextBotEventResponder + 98))(v2, *&v15, v11, *&v14, *&v18, *&v17, *&v19);
        v51 = v36;
        v48 = v36 - *(v35 + 16);
        return (*(v2->_vptr_INextBotEventResponder + 99))(v2) > v48;
      }
    }
    return 1;
  }
  if ( type == CPathSegment::SegmentType::PATH_SEG_CLIMB_UP )
  {
    v37 = this->m_rPath;
    v38 = v37->m_nSegmentCount;
    if ( v38 > 0 )
    {
      v39 = 0x2E8BA2E8BA2E8BA3LL * ((v12 - v37->m_path) >> 3);
      if ( v39 >= 0 && v39 < v38 - 1 )
      {
        v40 = (*(v2->_vptr_INextBotEventResponder + 98))(v2, *&v15, v11, *&v14, *&v18, *&v17, *&v19);
        v41 = this->m_pGoal;
        vFrom.z = v42;
        *&vFrom.x = v40;
        z = v41->vPos.z;
        return v42 > ((*(v2->_vptr_INextBotEventResponder + 99))(v2) + z);
      }
    }
    return 1;
  }
  v20 = this->m_rPath;
  *&v17 = *&v17 - *&v14;
  *&v18 = *&v18 - *&v15;
  v47 = *&v17;
  v21 = v20->m_nSegmentCount;
  v45 = *&v18;
  if ( v21 > 0 )
  {
    v9 = v20->m_path;
    v22 = 0x2E8BA2E8BA2E8BA3LL * ((v12 - v20->m_path) >> 3);
    if ( v22 >= 0 )
    {
      v21 = (v21 - 1);
      if ( v22 < v21 )
      {
        if ( *(v13 + 24) != 0 )
        {
          *&v15 = LODWORD(v12->vForward.x);
          y = v12->vForward.y;
        }
        else
        {
          *&v15 = *(v13 + 36);
          *&v15 = *&v15 + v12->vForward.x;
          y = *(v13 + 40) + v12->vForward.y;
        }
        *&v15 = (*&v15 * *&v17) + (y * *&v18);
        *&v14 = 953267991;
        if ( *&v15 < 0.000099999997 )
        {
          v24 = *&v19 - *&v11;
          v44 = v24;
          v43 = v24 < 0.0 ? -v24 : v24;
          *&v15 = (*(*v7 + 760LL))(v7);
          if ( *&v15 > v43 )
          {
            if ( (*(v2->_vptr_INextBotEventResponder + 99))(v2) > v44 )
              return 1;
            v25 = *(v2->_vptr_INextBotEventResponder + 109);
            p_vPos = &v20->m_path[v22 + 1].vPos;
            v50 = (*(v2->_vptr_INextBotEventResponder + 98))(v2);
            v51 = v27;
            if ( v25(v2, &v50, p_vPos, 1, 0) != 0 )
            {
              *&vFrom.x = (*(v2->_vptr_INextBotEventResponder + 98))(v2);
              vFrom.z = v28;
              if ( !CLocomotionBase::HasPotentialGap(v2, &vFrom, p_vPos, 0) )
                return 1;
            }
          }
        }
      }
    }
  }
  v29 = (*(*v7 + 744LL))(v7, v9, v21, v13, v15, v11, v14, v18, v17, v19);
  result = 0;
  v31 = v29 * 0.5;
  if ( v31 > fabs(v47) )
    return v31 > fabs(v45);
  return result;
}


// CPathFollower::LadderUpdate  (line 254, @0x0000000002f3a660, libserver.so)  // inlines: CHeadLookParams, DotProduct2D, FastSqrt, GetArea, GetFloat, IsLengthGreaterThan, Length, LengthSqr, NextSegment, NormalizeInPlace, PriorSegment, Vector2D, Vector2DLength, Vector2DNormalize, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator+=, operator-, operator-=, operator/=, operator[]
// calls: NDebugOverlay::Sphere
// callers: CPathFollower::UpdateFollow
// strings: "Mounting upward ladder", "Mounting downward ladder"
// local variable allocation has failed, the output may be wrong!
bool __fastcall CPathFollower::LadderUpdate(CPathFollower *const this)
{
  __int64 v2; // r15
  __int64 v3; // r13
  char v4; // bl
  const CPathSegment *m_pGoal; // rax
  NavTraverseType how; // eax
  float v8; // xmm1_4
  float v9; // xmm0_4
  const CPathSegment *v10; // rax
  CNavPathNB *v11; // rcx
  int v12; // esi
  __int64 v13; // rdx
  double v14; // xmm0_8
  const CPathSegment *v15; // rax
  int v16; // xmm1_4
  const CNavLadder *v17; // rax
  float v18; // xmm0_4
  const CNavLadder *v19; // rax
  float v20; // xmm6_4
  float x; // xmm2_4
  vec_t v22; // xmm1_4
  void (__fastcall *v23)(__int64, Vector *, __int128 *); // rax
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float m_fValue; // xmm0_4
  const CNavLadder *v29; // rax
  float v30; // xmm6_4
  float v31; // xmm2_4
  float v32; // xmm7_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm9_4
  bool v36; // zf
  float *p_x; // r14
  float v38; // xmm0_4
  const CNavLadder *v39; // rax
  vec_t v40; // xmm2_4
  vec_t v41; // xmm1_4
  vec_t v42; // xmm0_4
  double v43; // xmm0_8
  int v44; // xmm1_4
  float v45; // xmm4_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  const CNavLadder *v48; // rax
  vec_t v49; // xmm0_4
  vec_t v50; // xmm1_4
  void (__fastcall *v51)(__int64, Vector *, __int128 *); // rax
  CNavPathNB *v52; // rdx
  int v53; // esi
  __int64 v54; // rcx
  double v55; // xmm0_8
  const CPathSegment *v56; // rax
  float v57; // xmm1_4
  float v58; // r14d
  const CPathSegment *v59; // rdx
  CNavPathNB *v60; // rsi
  int v61; // ecx
  __int64 v62; // rax
  CNavPathNB *m_rPath; // rdx
  int m_nSegmentCount; // ecx
  __int64 v65; // rax
  const CPathSegment *v66; // r14
  const CNavLadder *pLadder; // rdx
  CNavPathNB *v68; // rdx
  int v69; // ecx
  __int64 v70; // rax
  int v71; // xmm1_4
  float v72; // xmm1_4
  float to; // [rsp+8h] [rbp-A8h]
  Vector2D toa; // [rsp+8h] [rbp-A8h]
  float v75; // [rsp+14h] [rbp-9Ch]
  float v76; // [rsp+14h] [rbp-9Ch]
  float m_flLength; // [rsp+14h] [rbp-9Ch]
  float z; // [rsp+14h] [rbp-9Ch]
  float v79; // [rsp+14h] [rbp-9Ch]
  float v80; // [rsp+18h] [rbp-98h]
  float v81; // [rsp+18h] [rbp-98h]
  float v82; // [rsp+18h] [rbp-98h]
  float v83; // [rsp+18h] [rbp-98h]
  float v84; // [rsp+18h] [rbp-98h]
  Vector vMountPoint; // [rsp+40h] [rbp-70h] BYREF
  Vector vLookPos; // [rsp+50h] [rbp-60h] BYREF
  __int128 goal; // [rsp+60h] [rbp-50h] OVERLAPPED BYREF
  const char *v88; // [rsp+70h] [rbp-40h]
  char v89; // [rsp+78h] [rbp-38h]
  int v90; // [rsp+7Ch] [rbp-34h]

  v2 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  v3 = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))(this->m_pBot);
  v4 = (*(*v2 + 720LL))(v2);
  if ( v4 != 0 )
    return 1;
  m_pGoal = this->m_pGoal;
  if ( m_pGoal->pLadder == 0 )
  {
    v36 = *((*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot) + 341) == 9;
    m_pGoal = this->m_pGoal;
    if ( v36 )
    {
      m_rPath = this->m_rPath;
      if ( m_pGoal == 0 )
        return v4;
      m_nSegmentCount = m_rPath->m_nSegmentCount;
      if ( m_nSegmentCount <= 0 )
        return v4;
      v65 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - m_rPath->m_path) >> 3);
      if ( v65 <= 0 || m_nSegmentCount <= v65 )
        return v4;
      toa = &m_rPath->m_path[v65 - 1];
      v66 = toa;
      while ( 1 )
      {
        pLadder = v66->pLadder;
        if ( pLadder != 0 && v66->how == NavTraverseType::GO_LADDER_DOWN )
        {
          m_flLength = pLadder->m_flLength;
          if ( m_flLength > (*(*v2 + 800LL))(v2) )
          {
            z = v66->vPos.z;
            (*(*v2 + 784LL))(v2);
            if ( (*(*v2 + 800LL))(v2) > fabs(z - v72) )
              break;
          }
        }
        v68 = this->m_rPath;
        v69 = v68->m_nSegmentCount;
        if ( v69 > 0 )
        {
          v70 = 0x2E8BA2E8BA2E8BA3LL * ((v66 - v68->m_path) >> 3);
          if ( v70 >= 0 && v70 < v69 - 1 )
          {
            v66 = &v68->m_path[v70 + 1];
            if ( *&toa == v66 )
              continue;
            *&goal = (*(*v2 + 784LL))(v2);
            DWORD2(goal) = v71;
            if ( (((v66->vPos.x - *&goal) * (v66->vPos.x - *&goal))
                + ((v66->vPos.y - *(&goal + 1)) * (v66->vPos.y - *(&goal + 1)))) <= 2500.0 )
              continue;
          }
        }
        m_pGoal = this->m_pGoal;
        goto LABEL_26;
      }
      this->m_pGoal = v66;
      m_pGoal = v66;
    }
LABEL_26:
    if ( m_pGoal->pLadder == 0 )
      return v4;
  }
  how = m_pGoal->how;
  if ( how == NavTraverseType::GO_LADDER_UP )
  {
    if ( (*(*v2 + 720LL))(v2) != 0
      || (v55 = (*(*v2 + 784LL))(v2),
          v56 = this->m_pGoal,
          vMountPoint.z = v57,
          *&vMountPoint.x = v55,
          v58 = v56->pLadder->m_vTop.z,
          v57 <= (v58 - (*(*v2 + 792LL))(v2))) )
    {
      v14 = (*(*v2 + 784LL))(v2);
      v15 = this->m_pGoal;
      *&goal = v14;
      DWORD2(goal) = v16;
      v17 = v15->pLadder;
      to = v17->m_vBottom.x - *&v14;
      v81 = v17->m_vBottom.y - *(&v14 + 1);
      v18 = (*(*v3 + 768LL))(v3);
      v19 = this->m_pGoal->pLadder;
      v20 = v19->m_vNormal.x * 50.0;
      x = v19->m_vTop.x;
      v22 = (v19->m_vTop.y - (v19->m_vNormal.y * 50.0)) + 0.0;
      vLookPos.z = v18 + (v19->m_vTop.z - (v19->m_vNormal.z * 50.0));
      vLookPos.y = v22;
      vLookPos.x = (x - v20) + 0.0;
      v23 = *(*v3 + 552LL);
      goal = 0x4000000000000003uLL;
      v88 = "Mounting upward ladder";
      v89 = 1;
      v90 = 1048576000;
      v23(v3, &vLookPos, &goal);
      v24 = fsqrt((to * to) + (v81 * v81));
      v25 = v24;
      if ( v24 == 0.0 )
      {
        v27 = 0.0;
        v26 = 0.0;
      }
      else
      {
        v26 = to * (1.0 / v24);
        v27 = v81 * (1.0 / v24);
      }
      m_fValue = NextBotLadderAlignRange.m_pParent->m_Value.m_fValue;
      if ( m_fValue > v25 )
      {
        v29 = this->m_pGoal->pLadder;
        v30 = v29->m_vNormal.x;
        v31 = (v30 * v26) + (v29->m_vNormal.y * v27);
        if ( v31 < -0.89999998 )
        {
          v84 = v25;
          (*(*v2 + 528LL))(v2, &v29->m_vBottom, 1.0);
          if ( v84 < 25.0 )
            (*(*v2 + 704LL))(
              v2,
              this->m_pGoal->pLadder,
              TheNavMesh->m_NavAreas.m_Memory.m_pMemory[this->m_pGoal->m_nAreaIndex]);
        }
        else
        {
          v32 = -v29->m_vNormal.y;
          *&goal = *&v29->m_vBottom.x;
          DWORD2(goal) = LODWORD(v29->m_vBottom.z);
          if ( v31 < 0.0 )
            m_fValue = ((m_fValue - 25.0) * (v31 + 1.0)) + 25.0;
          v33 = *(&goal + 1) - (m_fValue * v27);
          v34 = *&goal - (m_fValue * v26);
          v35 = -v27 * 10.0;
          if ( ((v32 * v26) + (v27 * v30)) < 0.0 )
          {
            *&goal = v35 + v34;
            *(&goal + 2) = *(&goal + 2) + 0.0;
            *(&goal + 1) = (v26 * 10.0) + v33;
          }
          else
          {
            *&goal = v34 - v35;
            *(&goal + 1) = v33 - (v26 * 10.0);
          }
          (*(*v2 + 528LL))(v2, &goal, 1.0);
        }
        return 1;
      }
    }
    else
    {
      v59 = this->m_pGoal;
      v60 = this->m_rPath;
      if ( v59 != 0 )
      {
        v61 = v60->m_nSegmentCount;
        if ( v61 <= 0 )
        {
          v59 = 0;
        }
        else
        {
          v62 = 0x2E8BA2E8BA2E8BA3LL * ((v59 - v60->m_path) >> 3);
          v59 = 0;
          if ( v62 >= 0 && v62 < v61 - 1 )
            v59 = &v60->m_path[v62 + 1];
        }
      }
      this->m_pGoal = v59;
    }
  }
  else
  {
    if ( how != NavTraverseType::GO_LADDER_DOWN )
      return 1;
    (*(*v2 + 784LL))(v2);
    v75 = v8;
    v80 = this->m_pGoal->pLadder->m_vBottom.z;
    v9 = (*(*v2 + 792LL))(v2);
    v10 = this->m_pGoal;
    if ( (v9 + v80) > v75 )
    {
      v11 = this->m_rPath;
      if ( v10 == 0 )
      {
LABEL_13:
        this->m_pGoal = v10;
        return 1;
      }
      v12 = v11->m_nSegmentCount;
      if ( v12 > 0 )
      {
        v13 = 0x2E8BA2E8BA2E8BA3LL * ((v10 - v11->m_path) >> 3);
        if ( v13 >= 0 )
        {
          v10 = 0;
          if ( v13 < v12 - 1 )
            v10 = &v11->m_path[v13 + 1];
          goto LABEL_13;
        }
      }
LABEL_24:
      v10 = 0;
      goto LABEL_13;
    }
    p_x = &v10->pLadder->m_vTop.x;
    v38 = (*(*v3 + 744LL))(v3) * 0.5;
    v39 = this->m_pGoal->pLadder;
    v40 = (p_x[21] * v38) + v39->m_vTop.y;
    v41 = (p_x[22] * v38) + v39->m_vTop.z;
    v42 = (v38 * p_x[20]) + v39->m_vTop.x;
    vMountPoint.y = v40;
    vMountPoint.z = v41;
    vMountPoint.x = v42;
    v43 = (*(*v2 + 784LL))(v2);
    v36 = !this->m_bIsDebugging;
    *&goal = v43;
    DWORD2(goal) = v44;
    v45 = vMountPoint.x - *&v43;
    v46 = vMountPoint.y - *(&v43 + 1);
    if ( !v36 )
    {
      v79 = vMountPoint.y - *(&v43 + 1);
      v83 = vMountPoint.x - *&v43;
      NDebugOverlay::Sphere(&vMountPoint, COERCE_DOUBLE(1084227584), 0xFFu, 0, 0xFFu, 1, 0.1);
      v46 = v79;
      v45 = v83;
    }
    v76 = v46;
    v82 = v45;
    v47 = (*(*v3 + 768LL))(v3);
    v48 = this->m_pGoal->pLadder;
    v49 = v47 + ((v48->m_vNormal.z * 50.0) + v48->m_vBottom.z);
    v50 = ((50.0 * v48->m_vNormal.x) + v48->m_vBottom.x) + 0.0;
    vLookPos.y = ((v48->m_vNormal.y * 50.0) + v48->m_vBottom.y) + 0.0;
    vLookPos.z = v49;
    vLookPos.x = v50;
    v51 = *(*v3 + 552LL);
    v88 = "Mounting downward ladder";
    goal = 0x3F80000000000003uLL;
    v89 = 1;
    v90 = 1048576000;
    v51(v3, &vLookPos, &goal);
    if ( fsqrt((v82 * v82) + (v76 * v76)) < 25.0
      || *((*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot) + 341) == 9 )
    {
      (*(*v2 + 712LL))(
        v2,
        this->m_pGoal->pLadder,
        TheNavMesh->m_NavAreas.m_Memory.m_pMemory[this->m_pGoal->m_nAreaIndex]);
      v10 = this->m_pGoal;
      v52 = this->m_rPath;
      if ( v10 == 0 )
        goto LABEL_13;
      v53 = v52->m_nSegmentCount;
      if ( v53 > 0 )
      {
        v54 = 0x2E8BA2E8BA2E8BA3LL * ((v10 - v52->m_path) >> 3);
        if ( v54 >= 0 )
        {
          v10 = 0;
          if ( v54 < v53 - 1 )
            v10 = &v52->m_path[v54 + 1];
          goto LABEL_13;
        }
      }
      goto LABEL_24;
    }
  }
  return v4;
}


// CPathFollower::CheckProgress  (line 447, @0x0000000002f3b030, libserver.so)  // inlines: DotProduct, FastSqrt, GetElapsedTime, GetPathAge, IsElapsed, LengthSqr, NetworkStateChanged, NextSegment, Set, Square<float>, Start, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=<float>
// calls: CountdownTimer::Now, CPathFollower::IsAtGoal, CLocomotionBase::HasPotentialGap, IntervalTimer::Now, DevMsg(char const*,...)
// callers: CPathFollower::UpdateFollow
// strings: "CPathFollower: OnMoveToSuccess\n"
// globals: CPathFollower::gm_frameLastLookedAhead
bool __fastcall CPathFollower::CheckProgress(CPathFollower *const this)
{
  const CLocomotionBase *v2; // r12
  bool result; // al
  __int64 v4; // rsi
  const CPathSegment *v5; // rdx
  CNavPathNB *v6; // rcx
  double v7; // xmm0_8
  const CPathSegment *m_pGoal; // rax
  float m_minLookAheadRange; // xmm7_4
  vec_t v10; // xmm1_4
  __int64 v11; // r14
  int v12; // r15d
  CNavPathNB *m_rPath; // rax
  int m_nSegmentCount; // edx
  __int64 v15; // r9
  __int64 v16; // r9
  float v17; // xmm1_4
  const CPathSegment *v18; // rax
  float v19; // xmm0_4
  CNavPathNB *v20; // r12
  float v21; // xmm0_4
  float v22; // [rsp+4h] [rbp-7Ch]
  const CountdownTimer *p_m_lookAheadTimer; // [rsp+8h] [rbp-78h]
  const CPathSegment *pInitialSegment; // [rsp+10h] [rbp-70h]
  float v25; // [rsp+18h] [rbp-68h]
  float flDistLooked; // [rsp+1Ch] [rbp-64h]
  float vMyFeet; // [rsp+20h] [rbp-60h]
  float vDesiredTo; // [rsp+28h] [rbp-58h]
  float vDesiredToa; // [rsp+28h] [rbp-58h]
  Vector v30; // [rsp+30h] [rbp-50h] BYREF
  double v31; // [rsp+40h] [rbp-40h]
  float v32; // [rsp+48h] [rbp-38h]

  v2 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  if ( gpGlobals->framecount != CPathFollower::gm_frameLastLookedAhead )
  {
    p_m_lookAheadTimer = &this->m_lookAheadTimer;
    if ( CountdownTimer::Now(&this->m_lookAheadTimer) >= this->m_lookAheadTimer.m_timestamp.m_Value
      && this->m_minLookAheadRange > 0.0 )
    {
      v7 = (*(v2->_vptr_INextBotEventResponder + 98))(v2);
      m_pGoal = this->m_pGoal;
      m_minLookAheadRange = this->m_minLookAheadRange;
      *&v30.x = v7;
      v30.z = v10;
      v22 = m_minLookAheadRange;
      pInitialSegment = m_pGoal;
      if ( m_pGoal != 0 && m_pGoal->type == CPathSegment::SegmentType::PATH_SEG_ON_GROUND )
      {
        v11 = m_pGoal;
        v12 = 3;
        flDistLooked = 0.0;
        do
        {
          if ( (*(v2->_vptr_INextBotEventResponder + 83))(v2) == 0 )
            break;
          v25 = ((*(v11 + 16) - v30.z) * (*(v11 + 16) - v30.z))
              + (((*(v11 + 12) - v30.y) * (*(v11 + 12) - v30.y)) + ((*(v11 + 8) - v30.x) * (*(v11 + 8) - v30.x)));
          if ( (v22 * v22) <= v25 )
            break;
          m_rPath = this->m_rPath;
          m_nSegmentCount = m_rPath->m_nSegmentCount;
          if ( m_nSegmentCount <= 0 )
            break;
          v15 = 0x2E8BA2E8BA2E8BA3LL * ((v11 - m_rPath->m_path) >> 3);
          if ( v15 < 0 )
            break;
          if ( v15 >= m_nSegmentCount - 1 )
            break;
          v16 = v15 + 1;
          v11 = &m_rPath->m_path[v16];
          if ( m_rPath->m_path[v16].type != CPathSegment::SegmentType::PATH_SEG_ON_GROUND )
            break;
          v31 = (*(v2->_vptr_INextBotEventResponder + 106))(v2);
          v32 = v17;
          if ( (((*&v31 * *(v11 + 36)) + (*(&v31 + 1) * *(v11 + 40))) + (v17 * *(v11 + 44))) <= 0.1 )
            break;
          vMyFeet = *(v11 + 16);
          vDesiredTo = v30.z;
          if ( vMyFeet > ((*(v2->_vptr_INextBotEventResponder + 99))(v2) + vDesiredTo) )
            break;
          v18 = this->m_pGoal;
          if ( v18 == pInitialSegment
            || ((((v18->vPos.x - *(v11 + 8)) * (v18->vPos.x - *(v11 + 8)))
               + ((v18->vPos.y - *(v11 + 12)) * (v18->vPos.y - *(v11 + 12))))
              + ((v18->vPos.z - *(v11 + 16)) * (v18->vPos.z - *(v11 + 16)))) >= 576.0 )
          {
            flDistLooked = fsqrt(v25 + 0.00000011920929) + flDistLooked;
            if ( flDistLooked > (1.25 * this->m_minLookAheadRange) )
              break;
            CPathFollower::gm_frameLastLookedAhead = gpGlobals->framecount;
            v19 = CountdownTimer::Now(p_m_lookAheadTimer) + 0.1;
            if ( v19 != this->m_lookAheadTimer.m_timestamp.m_Value )
            {
              vDesiredToa = v19;
              (*(this->m_lookAheadTimer._vptr_CountdownTimer + 2))(p_m_lookAheadTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_lookAheadTimer.m_timestamp.m_Value = vDesiredToa;
            }
            if ( this->m_lookAheadTimer.m_duration.m_Value != 0.1 )
            {
              (*(this->m_lookAheadTimer._vptr_CountdownTimer + 2))(p_m_lookAheadTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_lookAheadTimer.m_duration.m_Value = 0.1;
            }
            if ( (*(v2->_vptr_INextBotEventResponder + 109))(v2, &v30, v11 + 8, 1, 0) == 0
              || CLocomotionBase::HasPotentialGap(v2, &v30, (v11 + 8), 0) )
            {
              break;
            }
            this->m_pGoal = v11;
          }
          --v12;
        }
        while ( v12 != 0 && *(v11 + 32) == 0 );
      }
    }
  }
  result = CPathFollower::IsAtGoal(this);
  if ( result )
  {
    v5 = this->m_pGoal;
    v6 = this->m_rPath;
    if ( v5 != 0 )
    {
      v4 = v6->m_nSegmentCount;
      if ( v4 > 0 )
      {
        v5 = (0x2E8BA2E8BA2E8BA3LL * ((v5 - v6->m_path) >> 3));
        if ( v5 >= 0 )
        {
          v4 = (v4 - 1);
          if ( v5 < v4 )
          {
            this->m_pGoal = &v6->m_path[v5 + 1];
            return result;
          }
        }
      }
    }
    if ( (*(v2->_vptr_INextBotEventResponder + 83))(v2, v4, v5, v6) != 0 )
    {
      (*(v2->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 8))(v2->m_bot);
      if ( this->m_bIsDebugging )
        DevMsg("CPathFollower: OnMoveToSuccess\n");
      v20 = this->m_rPath;
      if ( v20->m_ageTimer.m_timestamp.m_Value <= 0.0 )
      {
LABEL_42:
        (*(v20->_vptr_CPathData + 2))(v20);
        return 0;
      }
      v21 = IntervalTimer::Now(&v20->m_ageTimer);
      result = 0;
      if ( (v21 - v20->m_ageTimer.m_timestamp.m_Value) > 0.0 )
      {
        v20 = this->m_rPath;
        goto LABEL_42;
      }
      return result;
    }
  }
  return 1;
}


// CPathFollower::UpdateFollow  (line 567, @0x0000000002f3f680, libserver.so)  // inlines: CrossProduct, GetElapsedTime, GetPathAge, IsDebugging, IsElapsed, IsLengthLessThan, IsZero, LengthSqr, NextSegment, NormalizeInPlace, PriorSegment, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CountdownTimer::Now, CPathFollower::LadderUpdate, NextBotManager::IsDebugFilterMatch, CPathFollower::AdjustSpeed, CPathFollower::CheckProgress, VectorNormalize, DevMsg(char const*,...), NDebugOverlay::Line, CPathFollower::Climbing, CPathFollower::JumpOverGaps, CPathFollower::Avoid, NDebugOverlay::Cross3D (14 total)
// callers: CSimpleBotRoam::Update, CPathFollower::UpdatePathAndFollow, CPathFollowerDirect::UpdatePathAndFollow
// strings: "CPathFollower: OnMoveToFailure( FAIL_STUCK ) because forward and left are ZERO\n", "CPathFollower: OnMoveToFailure( FAIL_FELL_OFF )\n"
void __fastcall CPathFollower::UpdateFollow(CPathFollower *const this, INextBot *const rBot)
{
  char IsDebugFilterMatch; // al
  INextBot *m_pBot; // r12
  _QWORD **v5; // r12
  const CPathSegment *m_pGoal; // rsi
  CNavPathNB *m_rPath; // rdx
  int m_nSegmentCount; // ecx
  __int64 v9; // rax
  double v10; // xmm0_8
  const CPathSegment *v11; // rax
  float v12; // xmm1_4
  bool v13; // zf
  vec_t v14; // xmm2_4
  float v15; // xmm0_4
  CNavPathNB *v16; // r12
  double v17; // xmm0_8
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  vec_t v23; // xmm1_4
  float v24; // xmm1_4
  vec_t v25; // xmm1_4
  float v26; // xmm1_4
  vec_t v27; // xmm1_4
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // r15
  float v31; // xmm0_4
  const CPathSegment *v32; // rax
  double v33; // xmm0_8
  vec_t v34; // xmm1_4
  float v35; // xmm0_4
  const CPathSegment *v36; // rax
  const CPathSegment *v37; // rax
  __int64 v38; // rax
  vec_t v39; // xmm1_4
  CNavPathNB *v40; // rdx
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // r13
  vec_t v44; // xmm1_4
  vec_t v45; // xmm1_4
  __int64 v46; // rax
  float z; // r15d
  double v48; // xmm0_8
  float v49; // xmm1_4
  double v50; // xmm0_8
  const CPathSegment *v51; // rax
  int v52; // xmm1_4
  double v53; // xmm0_8
  __int64 v54; // xmm1_8
  char v55; // cl
  double v56; // xmm2_8
  double v57; // xmm0_8
  CNavPathNB *v58; // rdx
  int v59; // esi
  __int64 v60; // rax
  int *p_m_nAreaIndex; // r15
  float v62; // xmm1_4
  CNavPathNB *v63; // r12
  vec_t v64; // xmm1_4
  float v65; // [rsp+0h] [rbp-E0h]
  float v66; // [rsp+4h] [rbp-DCh]
  float v67; // [rsp+8h] [rbp-D8h]
  double v68; // [rsp+Ch] [rbp-D4h]
  float v69; // [rsp+14h] [rbp-CCh]
  float v70; // [rsp+14h] [rbp-CCh]
  float flTooHighDistance; // [rsp+18h] [rbp-C8h]
  float flTooHighDistancea; // [rsp+18h] [rbp-C8h]
  float flTooHighDistanceb; // [rsp+18h] [rbp-C8h]
  float flTooHighDistancec; // [rsp+18h] [rbp-C8h]
  unsigned int flTooHighDistanced; // [rsp+18h] [rbp-C8h]
  unsigned __int8 (__fastcall *flTooHighDistancee)(_QWORD **, Vector *, int *, __int64, _QWORD); // [rsp+18h] [rbp-C8h]
  Vector vForward; // [rsp+20h] [rbp-C0h] BYREF
  Vector vLeft; // [rsp+30h] [rbp-B0h] BYREF
  Vector vNormal; // [rsp+40h] [rbp-A0h]
  double v80; // [rsp+50h] [rbp-90h]
  float v81; // [rsp+58h] [rbp-88h]
  double v82; // [rsp+60h] [rbp-80h]
  int v83; // [rsp+68h] [rbp-78h]
  double v84; // [rsp+70h] [rbp-70h]
  int v85; // [rsp+78h] [rbp-68h]
  Vector origin; // [rsp+80h] [rbp-60h] BYREF
  Vector vGoalPos; // [rsp+90h] [rbp-50h] BYREF
  Vector target; // [rsp+A0h] [rbp-40h] BYREF

  this->m_pBot = rBot;
  (*(this->m_rPath->_vptr_CPathData + 6))(this->m_rPath, this);
  IsDebugFilterMatch = 0;
  m_pBot = this->m_pBot;
  if ( (g_NextBotManager.m_debugType & 4) != 0 )
  {
    IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_pBot);
    if ( IsDebugFilterMatch != 0 )
      IsDebugFilterMatch = (*(m_pBot->_vptr_INextBotEventResponder + 96))(m_pBot, 4);
    m_pBot = this->m_pBot;
  }
  this->m_bIsDebugging = IsDebugFilterMatch;
  (*(m_pBot->_vptr_INextBotEventResponder + 86))(m_pBot, this);
  v5 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  if ( this->m_rPath->m_nSegmentCount > 0
    && this->m_pGoal != 0
    && CountdownTimer::Now(&this->m_waitTimer) >= this->m_waitTimer.m_timestamp.m_Value )
  {
    if ( this->m_bIsDebugging )
    {
      m_pGoal = this->m_pGoal;
      if ( m_pGoal != 0 )
      {
        m_rPath = this->m_rPath;
        m_nSegmentCount = m_rPath->m_nSegmentCount;
        if ( m_nSegmentCount <= 0 )
        {
          m_pGoal = 0;
        }
        else
        {
          v9 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - m_rPath->m_path) >> 3);
          m_pGoal = 0;
          if ( v9 > 0 && m_nSegmentCount > v9 )
            m_pGoal = &m_rPath->m_path[v9 - 1];
        }
      }
      (*(this->_vptr_IPathFollower + 5))(this, m_pGoal);
    }
    if ( !CPathFollower::LadderUpdate(this) )
    {
      CPathFollower::AdjustSpeed(this);
      if ( CPathFollower::CheckProgress(this) )
      {
        v10 = ((*v5)[98])(v5);
        v11 = this->m_pGoal;
        *&target.x = v10;
        target.z = v12;
        v13 = v11->type == CPathSegment::SegmentType::PATH_SEG_CLIMB_UP;
        *&v10 = v11->vPos.z - v12;
        v14 = v11->vPos.x - target.x;
        vForward.y = v11->vPos.y - target.y;
        vForward.z = *&v10;
        vForward.x = v14;
        if ( v13 )
        {
          v40 = this->m_rPath;
          v41 = v40->m_nSegmentCount;
          if ( v41 > 0 )
          {
            v42 = 0x2E8BA2E8BA2E8BA3LL * ((v11 - v40->m_path) >> 3);
            if ( v42 >= 0 && v42 < v41 - 1 )
            {
              v43 = &v40->m_path[v42 + 1];
              *&target.x = ((*v5)[98])(v5);
              target.z = v44;
              v45 = *(v43 + 8) - target.x;
              vForward.y = *(v43 + 12) - target.y;
              vForward.x = v45;
            }
          }
        }
        vForward.z = 0.0;
        v15 = VectorNormalize(&vForward);
        vLeft.z = 0.0;
        flTooHighDistance = v15;
        vLeft.y = vForward.x;
        vLeft.x = -vForward.y;
        if ( -vForward.y > -0.0099999998
          && -vForward.y < 0.0099999998
          && vForward.x > -0.0099999998
          && vForward.x < 0.0099999998 )
        {
          (*(*v5[2] + 72LL))(v5[2], 1);
          v16 = this->m_rPath;
          if ( v16->m_ageTimer.m_timestamp.m_Value > 0.0 )
          {
            if ( (IntervalTimer::Now(&v16->m_ageTimer) - v16->m_ageTimer.m_timestamp.m_Value) <= 0.0 )
            {
LABEL_25:
              if ( this->m_bIsDebugging )
                DevMsg("CPathFollower: OnMoveToFailure( FAIL_STUCK ) because forward and left are ZERO\n");
              goto LABEL_13;
            }
            v16 = this->m_rPath;
          }
          (*(v16->_vptr_CPathData + 2))(v16);
          goto LABEL_25;
        }
        v17 = ((*v5)[85])(v5);
        vNormal.z = v18;
        v13 = !this->m_bIsDebugging;
        *&vNormal.x = v17;
        v19 = (vLeft.x * *(&v17 + 1)) - (vLeft.y * *&v17);
        vForward.z = v19;
        v20 = (*&v17 * vLeft.z) - (vLeft.x * v18);
        v21 = (vLeft.y * v18) - (vLeft.z * *(&v17 + 1));
        vForward.y = v20;
        vForward.x = v21;
        vLeft.x = (*(&v17 + 1) * v19) - (v18 * v20);
        vLeft.y = (v18 * v21) - (*&v17 * v19);
        vLeft.z = (*&v17 * v20) - (*(&v17 + 1) * v21);
        if ( !v13 )
        {
          v65 = v18;
          v68 = v17;
          v66 = v21;
          v67 = v20;
          v69 = v19;
          *&vGoalPos.x = ((*v5)[98])(v5);
          vGoalPos.z = v22;
          target.z = (v69 * 25.0) + v22;
          target.y = (v67 * 25.0) + vGoalPos.y;
          target.x = (v66 * 25.0) + vGoalPos.x;
          *&origin.x = ((*v5)[98])(v5);
          origin.z = v23;
          NDebugOverlay::Line(&origin, &target, 0xFFu, 0, 0, 1, 0.1);
          *&vGoalPos.x = ((*v5)[98])(v5);
          vGoalPos.z = v24;
          target.y = (*(&v68 + 1) * 25.0) + vGoalPos.y;
          target.z = (v65 * 25.0) + v24;
          target.x = (*&v68 * 25.0) + vGoalPos.x;
          *&origin.x = ((*v5)[98])(v5);
          origin.z = v25;
          NDebugOverlay::Line(&origin, &target, 0, 0xFFu, 0, 1, 0.1);
          *&v68 = vLeft.x * 25.0;
          *(&v68 + 1) = vLeft.y * 25.0;
          v70 = 25.0 * vLeft.z;
          *&vGoalPos.x = ((*v5)[98])(v5);
          vGoalPos.z = v26;
          target.y = *(&v68 + 1) + vGoalPos.y;
          target.z = v26 + v70;
          target.x = *&v68 + vGoalPos.x;
          *&origin.x = ((*v5)[98])(v5);
          origin.z = v27;
          NDebugOverlay::Line(&origin, &target, 0, 0, 0xFFu, 1, 0.1);
        }
        if ( CPathFollower::Climbing(this, this->m_pGoal, &vForward, &vLeft, flTooHighDistance) == 0 )
        {
          if ( this->m_rPath->m_nSegmentCount <= 0 )
            goto LABEL_13;
          CPathFollower::JumpOverGaps(this, this->m_pGoal, &vForward, &vLeft, LODWORD(flTooHighDistance));
        }
        if ( this->m_rPath->m_nSegmentCount <= 0 )
          goto LABEL_13;
        v28 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
        v29 = (*(*v28 + 2888LL))(v28);
        v30 = v29 != 0 && (*(v29 + 216) & 0x1000LL) != 0;
        v31 = ((*v5)[100])(v5);
        v32 = this->m_pGoal;
        flTooHighDistancea = v31;
        if ( v32->pLadder != 0 )
          goto LABEL_37;
        v13 = ((*v5)[71])(v5) == 0;
        v32 = this->m_pGoal;
        if ( !v13 || v30 )
          goto LABEL_37;
        z = v32->vPos.z;
        v48 = ((*v5)[98])(v5);
        v81 = v49;
        v80 = v48;
        if ( z > (v49 + flTooHighDistancea) )
        {
          v50 = ((*v5)[98])(v5);
          v51 = this->m_pGoal;
          v84 = v50;
          v85 = v52;
          flTooHighDistanceb = *(&v50 + 1) - v51->vPos.y;
          v53 = ((*v5)[98])(v5);
          v55 = *(v5 + 64);
          v32 = this->m_pGoal;
          v82 = v53;
          *&v57 = LODWORD(v53);
          v83 = v54;
          *&v56 = LODWORD(flTooHighDistanceb);
          *&v57 = *&v53 - v32->vPos.x;
          if ( v55 == 0 )
          {
            v54 = 1142702080;
            *&v56 = flTooHighDistanceb * flTooHighDistanceb;
            *&v57 = (*&v57 * *&v57) + (flTooHighDistanceb * flTooHighDistanceb);
            if ( *&v57 >= 625.0 )
              goto LABEL_37;
          }
          v58 = this->m_rPath;
          v59 = v58->m_nSegmentCount;
          if ( v59 <= 0 )
            goto LABEL_66;
          v60 = 0x2E8BA2E8BA2E8BA3LL * ((v32 - v58->m_path) >> 3);
          if ( v60 < 0 )
            goto LABEL_66;
          if ( v60 >= v59 - 1 )
            goto LABEL_66;
          p_m_nAreaIndex = &v58->m_path[v60].m_nAreaIndex;
          if ( v55 != 0 )
            goto LABEL_66;
          flTooHighDistancec = *(p_m_nAreaIndex + 6);
          *&origin.x = ((*v5)[98])(v5, v57);
          origin.z = v62;
          *&flTooHighDistanced = flTooHighDistancec - v62;
          *&v57 = ((*v5)[100])(v5);
          *&v56 = flTooHighDistanced;
          if ( *&flTooHighDistanced > *&v57
            || (flTooHighDistancee = (*v5)[109],
                *&target.x = ((*v5)[98])(v5),
                target.z = v64,
                flTooHighDistancee(v5, &target, p_m_nAreaIndex + 4, 1, 0) == 0) )
          {
LABEL_66:
            (*(*v5[2] + 72LL))(v5[2], 2, v57, *&v54, v56);
            v63 = this->m_rPath;
            if ( v63->m_ageTimer.m_timestamp.m_Value > 0.0 )
            {
              if ( (IntervalTimer::Now(&v63->m_ageTimer) - v63->m_ageTimer.m_timestamp.m_Value) <= 0.0 )
              {
LABEL_68:
                if ( this->m_bIsDebugging )
                  DevMsg("CPathFollower: OnMoveToFailure( FAIL_FELL_OFF )\n");
                goto LABEL_13;
              }
              v63 = this->m_rPath;
            }
            (*(v63->_vptr_CPathData + 2))(v63);
            goto LABEL_68;
          }
        }
        v32 = this->m_pGoal;
LABEL_37:
        vGoalPos = v32->vPos;
        v33 = ((*v5)[98])(v5);
        vForward.z = 0.0;
        *&target.x = v33;
        target.z = v34;
        vForward.y = vGoalPos.y - *(&v33 + 1);
        vForward.x = vGoalPos.x - *&v33;
        v35 = VectorNormalize(&vForward);
        vLeft.z = 0.0;
        vLeft.x = -vForward.y;
        vLeft.y = vForward.x;
        if ( v35 > 50.0 || (v36 = this->m_pGoal) != 0 && v36->type != CPathSegment::SegmentType::PATH_SEG_CLIMB_UP )
        {
          target = CPathFollower::Avoid(this, &vGoalPos, &vForward, &vLeft);
          vGoalPos = target;
        }
        if ( ((*v5)[83])(v5) != 0 )
          ((*v5)[93])(v5, &vGoalPos);
        ((*v5)[66])(v5, &vGoalPos, 1.0);
        v37 = this->m_pGoal;
        if ( v37 != 0 && (v37->type - 3) <= 1 )
        {
          v46 = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))(this->m_pBot);
          (*(*v46 + 656LL))(v46, 0);
        }
        if ( this->m_bIsDebugging )
        {
          NDebugOverlay::Cross3D(&vGoalPos, 5.0, 0x96u, 0x96u, 0xFFu, 1, 0.1);
          v38 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
          *&target.x = (*(*v38 + 496LL))(v38);
          target.z = v39;
          NDebugOverlay::Line(&target, &vGoalPos, 0xFFu, 0xFFu, 0, 1, 0.1);
        }
      }
    }
  }
LABEL_13:
  this->m_pBot = 0;
}


// CPathFollower::FindBlocker  (line 795, @0x0000000002f3b500, libserver.so)  // inlines: CGameTrace, DidHit, DidHitNonWorldEntity, DotProduct, EnableInteractsWith, Init, LengthSqr, NextBotTraceFilterOnlyActors, NextSegment, NormalizeInPlace, QAngle, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-, operator=
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CPathData::MoveCursorToClosestPosition, CPathData::GetCursorData, VectorNormalize, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetAbsOrigin, NDebugOverlay::Circle, NDebugOverlay::HorzArrow
// callers: CPathFollower::Avoid
CBaseEntity *__fastcall CPathFollower::FindBlocker(CPathFollower *const this)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  const CBaseEntity *v5; // rax
  float v6; // xmm1_4
  double v7; // xmm0_8
  CNavPathNB *m_rPath; // rdi
  vec_t v9; // xmm1_4
  const CPathSegment *pSegmentPrior; // r13
  float v11; // xmm2_4
  float v12; // xmm5_4
  float z; // xmm4_4
  float v14; // xmm7_4
  vec_t v15; // xmm0_4
  vec_t v16; // xmm2_4
  float v17; // xmm0_4
  __int64 v18; // rax
  CNavPathNB *v19; // rax
  int m_nSegmentCount; // edx
  __int64 v21; // r8
  __int64 v23; // rax
  vec_t v24; // xmm1_4
  const Vector *AbsOrigin; // rax
  INextBot *m_pBot; // rdi
  __int64 v27; // rax
  vec_t v28; // xmm1_4
  const Vector *v29; // rbx
  __int64 v30; // rax
  double v31; // xmm0_8
  vec_t v32; // xmm1_4
  IIntention *pThink; // [rsp+10h] [rbp-1F0h]
  float v34; // [rsp+1Ch] [rbp-1E4h]
  float v35; // [rsp+20h] [rbp-1E0h]
  float v36; // [rsp+24h] [rbp-1DCh]
  float v37; // [rsp+24h] [rbp-1DCh]
  float flSize; // [rsp+48h] [rbp-1B8h]
  float flSizea; // [rsp+48h] [rbp-1B8h]
  float v40; // [rsp+4Ch] [rbp-1B4h]
  float v41; // [rsp+4Ch] [rbp-1B4h]
  float flTraceRange; // [rsp+50h] [rbp-1B0h]
  float flTraceRangea; // [rsp+50h] [rbp-1B0h]
  float flTraceRangeb; // [rsp+50h] [rbp-1B0h]
  float flRange; // [rsp+54h] [rbp-1ACh]
  double v46; // [rsp+58h] [rbp-1A8h]
  double vFrom; // [rsp+60h] [rbp-1A0h]
  Vector vTraceForward; // [rsp+70h] [rbp-190h] BYREF
  Vector position; // [rsp+80h] [rbp-180h] BYREF
  NextBotTraceFilterOnlyActors filter; // [rsp+90h] [rbp-170h] BYREF
  Ray_t vPos; // [rsp+D0h] [rbp-130h] BYREF
  trace_t v52; // [rsp+120h] [rbp-E0h] BYREF

  pThink = (*(this->m_pBot->_vptr_INextBotEventResponder + 70))(this->m_pBot);
  if ( (*(pThink->_vptr_INextBotEventResponder + 70))(pThink, this->m_pBot, -1) != 1 )
    return 0;
  v2 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  v3 = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))(this->m_pBot);
  memset(&v52.m_ShapeAttributes, 0, 31);
  v4 = v3;
  v52.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v52);
  v5 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
  CTraceFilterSimple::CTraceFilterSimple(&filter, 2, v5, 4, 0);
  filter._vptr_CTraceFilter = off_47B6490;
  flSize = 0.25 * (*(*v4 + 744LL))(v4);
  v36 = (*(*v2 + 792LL))(v2);
  v40 = (*(*v4 + 768LL))(v4);
  vFrom = (*(*v2 + 784LL))(v2);
  flTraceRange = v6;
  v46 = vFrom;
  v7 = (*(*v2 + 784LL))(v2);
  m_rPath = this->m_rPath;
  vPos.m_Start.z = v9;
  *&vPos.m_Start.x = v7;
  CPathData::MoveCursorToClosestPosition(m_rPath, &vPos.m_Start, 0, 0.0);
  pSegmentPrior = CPathData::GetCursorData(this->m_rPath)->pSegmentPrior;
  if ( pSegmentPrior == 0 )
    return 0;
  v11 = flSize;
  flRange = 0.0;
  v12 = v36;
  z = flTraceRange;
  flSizea = flSize + flSize;
  v14 = v40 - v36;
  v37 = v11 - v11;
  v34 = v14;
  v35 = v12 + v40;
  while ( 1 )
  {
    v41 = z;
    v15 = pSegmentPrior->vPos.z - z;
    v16 = pSegmentPrior->vPos.x - *&v46;
    vTraceForward.y = pSegmentPrior->vPos.y - *(&v46 + 1);
    vTraceForward.z = v15;
    vTraceForward.x = v16;
    flTraceRangea = VectorNormalize(&vTraceForward);
    v17 = (*(*v4 + 744LL))(v4);
    flTraceRangeb = fmaxf(v17 + v17, flTraceRangea);
    v18 = (*(*v4 + 792LL))(v4);
    vPos.m_Start.w = 0.0;
    vPos.m_Delta.w = 0.0;
    vPos.m_StartOffset.w = 0.0;
    vPos.m_Extents.w = 0.0;
    vPos.m_flRadius = 0.0;
    vPos.m_Delta.x = ((vTraceForward.x * flTraceRangeb) + *&v46) - *&v46;
    vPos.m_Delta.y = ((vTraceForward.y * flTraceRangeb) + *(&v46 + 1)) - *(&v46 + 1);
    vPos.m_Delta.z = ((flTraceRangeb * vTraceForward.z) + v41) - v41;
    vPos.m_Extents.z = 0.5 * v34;
    vPos.m_Extents.x = 0.5 * flSizea;
    vPos.m_Extents.y = 0.5 * flSizea;
    vPos.m_IsSwept = (((vPos.m_Delta.x * vPos.m_Delta.x) + (vPos.m_Delta.y * vPos.m_Delta.y))
                    + (vPos.m_Delta.z * vPos.m_Delta.z)) != 0.0;
    vPos.m_IsRay = ((((0.5 * flSizea) * (0.5 * flSizea)) + ((0.5 * flSizea) * (0.5 * flSizea)))
                  + (vPos.m_Extents.z * vPos.m_Extents.z)) < 0.000001;
    vPos.m_Start.x = *&v46 + (0.5 * v37);
    vPos.m_Start.y = *(&v46 + 1) + (0.5 * v37);
    vPos.m_Start.z = v41 + (0.5 * v35);
    vPos.m_StartOffset.x = -(0.5 * v37);
    vPos.m_StartOffset.y = vPos.m_StartOffset.x;
    vPos.m_StartOffset.z = -(0.5 * v35);
    filter.m_attr.m_nInteractsWith |= v18;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vPos, &filter, &v52);
    if ( v52.fraction >= 1.0 && !v52.startsolid )
    {
      v46 = *&pSegmentPrior->vPos.x;
      goto LABEL_7;
    }
    if ( v52.m_ShapeAttributes.m_nEntityId == 0x8000 )
    {
      v46 = *&pSegmentPrior->vPos.x;
      goto LABEL_7;
    }
    v23 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
    *&vPos.m_Start.x = (*(*v23 + 784LL))(v23);
    vPos.m_Start.z = v24;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v52.m_pEnt);
    if ( ((((AbsOrigin->x - vPos.m_Start.x) * (pSegmentPrior->vPos.x - *&v46))
         + ((AbsOrigin->y - vPos.m_Start.y) * (pSegmentPrior->vPos.y - *(&v46 + 1))))
        + ((AbsOrigin->z - vPos.m_Start.z) * 0.0)) > 0.0 )
      break;
    v46 = *&pSegmentPrior->vPos.x;
LABEL_7:
    v19 = this->m_rPath;
    z = pSegmentPrior->vPos.z;
    m_nSegmentCount = v19->m_nSegmentCount;
    flRange = flRange + pSegmentPrior->flLength;
    if ( m_nSegmentCount > 0 )
    {
      v21 = 0x2E8BA2E8BA2E8BA3LL * ((pSegmentPrior - v19->m_path) >> 3);
      if ( v21 >= 0 && v21 < m_nSegmentCount - 1 )
      {
        pSegmentPrior = &v19->m_path[v21 + 1];
        if ( flRange < 750.0 )
          continue;
      }
    }
    return 0;
  }
  if ( (*(pThink->_vptr_INextBotEventResponder + 70))(pThink, this->m_pBot, v52.m_pEnt) != 1 )
  {
    v46 = *&pSegmentPrior->vPos.x;
    goto LABEL_7;
  }
  if ( this->m_bIsDebugging )
  {
    vPos.m_Start.x = -90.0;
    m_pBot = this->m_pBot;
    vPos.m_Start.y = 0.0;
    vPos.m_Start.z = 0.0;
    v27 = (*(m_pBot->_vptr_INextBotEventResponder + 68))(m_pBot);
    *&position.x = (*(*v27 + 784LL))(v27);
    position.z = v28;
    NDebugOverlay::Circle(&position, &vPos, 10.0, 0xFFu, 0, 0, 255, 1.0, 1);
    v29 = CBaseEntity::GetAbsOrigin(v52.m_pEnt);
    v30 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
    v31 = (*(*v30 + 784LL))(v30);
    vPos.m_Start.z = v32;
    *&vPos.m_Start.x = v31;
    NDebugOverlay::HorzArrow(&vPos.m_Start, v29, 1.0, 0xFFu, 0, 0, 255, 1.0, 1);
  }
  return v52.m_pEnt;
}


// CPathFollower::Avoid  (line 873, @0x0000000002f3bcb0, libserver.so)  // inlines: CGameTrace, DidHit, DidHitNonWorldEntity, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsElapsed, LookupEntity, NetworkStateChanged, NextBotTraceFilterOnlyActors, NextBotTraversableTraceFilter, NormalizeInPlace, RnCollisionAttr_t, Set, Start, VectorAdd, VectorMultiply, VectorSubtract, operator CEntityInstance*, operator!=<CBaseEntity>, operator*, operator+, operator-, operator=, operator=<float>
// calls: CountdownTimer::Now, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CPathFollower::FindBlocker, UTIL_TraceHull, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin, NDebugOverlay::Axis, NDebugOverlay::Line, CountdownTimer::Invalidate, __dynamic_cast (14 total)
// callers: CPathFollower::UpdateFollow
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CPathFollower::Avoid(
        CPathFollower *const this,
        const Vector *const vGoalPos,
        const Vector *const vForward,
        const Vector *const vLeft)
{
  CountdownTimer *p_m_avoidTimer; // rbx
  float v11; // xmm0_4
  char m_isRightClear; // r14
  char v13; // al
  const CBaseEntity *v14; // rax
  CBaseEntity *Blocker; // rax
  CConcreteEntityList *v16; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  uint32 v20; // eax
  CEntityIdentity *v21; // rdx
  __int64 v22; // rcx
  CEntityIdentity *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // al
  int v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm7_4
  double v31; // xmm0_8
  float v32; // xmm1_4
  vec_t v33; // xmm1_4
  float v34; // xmm5_4
  INextBot *m_pBot; // r8
  vec_t v36; // xmm3_4
  float v37; // xmm1_4
  const CBaseEntity *v38; // rax
  float fraction; // xmm0_4
  float v40; // xmm4_4
  float v41; // xmm2_4
  bool v42; // r10
  bool startsolid; // al
  float v44; // xmm5_4
  double v45; // xmm0_8
  float v46; // xmm1_4
  vec_t v47; // xmm1_4
  vec_t v48; // xmm6_4
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  bool v52; // r10
  __m128 v53; // xmm5
  __m128 v54; // xmm0
  const QAngle *AbsAngles; // rax
  const Vector *AbsOrigin; // rax
  bool v57; // zf
  vec_t v58; // xmm0_4
  vec_t v59; // xmm2_4
  const QAngle *v60; // r12
  const Vector *v61; // rax
  const Vector *v62; // rax
  float v63; // xmm1_4
  vec_t v64; // xmm2_4
  float v65; // xmm0_4
  float v66; // xmm5_4
  vec_t v67; // xmm1_4
  float v68; // xmm0_4
  double v69; // xmm0_8
  float v70; // xmm1_4
  CBasePropDoor *v71; // rax
  __m128 v72; // xmm6
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm0_4
  vec_t v76; // xmm1_4
  float leftAvoid; // [rsp+14h] [rbp-21Ch]
  bool v78; // [rsp+18h] [rbp-218h]
  float v79; // [rsp+1Ch] [rbp-214h]
  float v80; // [rsp+1Ch] [rbp-214h]
  bool v81; // [rsp+20h] [rbp-210h]
  float v82; // [rsp+20h] [rbp-210h]
  float v83; // [rsp+20h] [rbp-210h]
  float v84; // [rsp+24h] [rbp-20Ch]
  float v85; // [rsp+24h] [rbp-20Ch]
  bool v86; // [rsp+24h] [rbp-20Ch]
  float flRange; // [rsp+28h] [rbp-208h]
  bool hullMax; // [rsp+30h] [rbp-200h]
  float hullMaxa; // [rsp+30h] [rbp-200h]
  float hullMaxb; // [rsp+30h] [rbp-200h]
  char pDoor; // [rsp+40h] [rbp-1F0h]
  CBasePropDoor *pDoora; // [rsp+40h] [rbp-1F0h]
  float pDoorc; // [rsp+40h] [rbp-1F0h]
  INextBot *pDoord; // [rsp+40h] [rbp-1F0h]
  CBasePropDoor *pDoorb; // [rsp+40h] [rbp-1F0h]
  __int64 mask; // [rsp+48h] [rbp-1E8h]
  float v97; // [rsp+50h] [rbp-1E0h]
  float vAdjustedGoal; // [rsp+54h] [rbp-1DCh]
  float vAdjustedGoala; // [rsp+54h] [rbp-1DCh]
  float vAdjustedGoal_4; // [rsp+58h] [rbp-1D8h]
  float vAdjustedGoal_4a; // [rsp+58h] [rbp-1D8h]
  float vAdjustedGoal_8; // [rsp+5Ch] [rbp-1D4h]
  float vAdjustedGoal_8a; // [rsp+5Ch] [rbp-1D4h]
  float vAdjustedGoal_8b; // [rsp+5Ch] [rbp-1D4h]
  float vAdjustedGoal_8c; // [rsp+5Ch] [rbp-1D4h]
  __int64 flRightAvoid; // [rsp+60h] [rbp-1D0h]
  float flRightAvoida; // [rsp+60h] [rbp-1D0h]
  vec_t flRightAvoidc; // [rsp+60h] [rbp-1D0h]
  float flRightAvoidd; // [rsp+60h] [rbp-1D0h]
  float flRightAvoide; // [rsp+60h] [rbp-1D0h]
  unsigned __int32 flRightAvoidf; // [rsp+60h] [rbp-1D0h]
  float flRightAvoidb; // [rsp+60h] [rbp-1D0h]
  float flRightAvoidg; // [rsp+60h] [rbp-1D0h]
  CLocomotionBase *pMover; // [rsp+68h] [rbp-1C8h]
  float pMovera; // [rsp+68h] [rbp-1C8h]
  float pMoverb; // [rsp+68h] [rbp-1C8h]
  Vector vDoorForward; // [rsp+80h] [rbp-1B0h] BYREF
  Vector vDoorRight; // [rsp+90h] [rbp-1A0h] BYREF
  Vector vAvoidDir; // [rsp+A0h] [rbp-190h] BYREF
  Vector vDoorEdge; // [rsp+B0h] [rbp-180h] BYREF
  NextBotTraceFilterOnlyActors filter; // [rsp+C0h] [rbp-170h] BYREF
  NextBotTraversableTraceFilter traverseFilter; // [rsp+100h] [rbp-130h] BYREF
  trace_t ptr; // [rsp+150h] [rbp-E0h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( NextBotAllowAvoiding.m_pParent->m_Value.m_nValue == 0
    || (p_m_avoidTimer = &this->m_avoidTimer,
        CountdownTimer::Now(&this->m_avoidTimer) < this->m_avoidTimer.m_timestamp.m_Value) )
  {
    vDoorEdge = *vGoalPos;
    goto LABEL_3;
  }
  v11 = CountdownTimer::Now(p_m_avoidTimer) + 0.5;
  if ( v11 != this->m_avoidTimer.m_timestamp.m_Value )
  {
    pMovera = v11;
    (*(this->m_avoidTimer._vptr_CountdownTimer + 2))(p_m_avoidTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_avoidTimer.m_timestamp.m_Value = pMovera;
  }
  if ( this->m_avoidTimer.m_duration.m_Value != 0.5 )
  {
    (*(this->m_avoidTimer._vptr_CountdownTimer + 2))(p_m_avoidTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_avoidTimer.m_duration.m_Value = 0.5;
  }
  pMover = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot);
  flRightAvoid = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))(this->m_pBot);
  mask = (*(*flRightAvoid + 792LL))(flRightAvoid);
  vAdjustedGoal_4 = vGoalPos->x;
  vAdjustedGoal_8 = vGoalPos->y;
  vAdjustedGoal = vGoalPos->z;
  m_isRightClear = (*(pMover->_vptr_INextBotEventResponder + 71))(pMover);
  if ( m_isRightClear != 0 || (v13 = (*(pMover->_vptr_INextBotEventResponder + 83))(pMover)) == 0 )
  {
    vDoorEdge.x = vAdjustedGoal_4;
    vDoorEdge.y = vAdjustedGoal_8;
    vDoorEdge.z = vAdjustedGoal;
    goto LABEL_3;
  }
  pDoor = v13;
  memset(&ptr.m_ShapeAttributes, 0, 31);
  ptr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&ptr);
  v14 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
  CTraceFilterSimple::CTraceFilterSimple(&filter, 2, v14, 4, 0);
  filter._vptr_CTraceFilter = off_47B6490;
  Blocker = CPathFollower::FindBlocker(this);
  if ( Blocker == 0 || (m_pEntity = Blocker->m_pEntity) == 0 )
  {
    this->m_hHindranceEntity.m_Index = -1;
    goto LABEL_20;
  }
  v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v19 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v16 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hHindranceEntity.m_Index) = v19 | this->m_hHindranceEntity.m_Index & 0x8000;
  v20 = (v18 << 15) | this->m_hHindranceEntity.m_Index & 0x7FFF;
  this->m_hHindranceEntity.m_Index = v20;
  if ( v20 + 2 <= 1
    || (v21 = v16->m_pIdentityChunks[(LOWORD(this->m_hHindranceEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v22 = this->m_hHindranceEntity.m_Index & 0x1FF, v16 = (8 * v22), (v23 = &v21[v22]) == 0)
    || v23->m_EHandle.m_Index != v20
    || v23->m_pInstance == 0 )
  {
LABEL_20:
    v24 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot, v16);
    v25 = (*(*v24 + 2888LL))(v24);
    if ( v25 != 0 && (*(v25 + 216) & 4) != 0 )
    {
      vDoorEdge.x = vAdjustedGoal_4;
      vDoorEdge.z = vAdjustedGoal;
      vDoorEdge.y = vAdjustedGoal_8;
      goto LABEL_3;
    }
    this->m_bDidAvoidCheck = 1;
    hullMax = pDoor;
    pDoora = flRightAvoid;
    flRightAvoida = (0.25 * (*(*flRightAvoid + 744LL))(flRightAvoid)) + 2.0;
    v26 = (*(pMover->_vptr_INextBotEventResponder + 78))(pMover);
    *&v27 = 30.0;
    if ( v26 != 0 )
      *&v27 = 50.0;
    v81 = hullMax;
    flRange = *&v27;
    hullMaxa = flRightAvoida;
    flRightAvoidc = 0.25 * (*(pDoora->_vptr_IHandleEntity + 93))(pDoora);
    v28 = (*(pMover->_vptr_INextBotEventResponder + 99))(pMover);
    this->m_hullMin.x = -flRightAvoidc;
    this->m_hullMin.y = -flRightAvoidc;
    this->m_hullMin.z = v28 + 0.1;
    this->m_hullMax.z = (*(pDoora->_vptr_IHandleEntity + 96))(pDoora);
    this->m_hullMax.x = flRightAvoidc;
    this->m_hullMax.y = flRightAvoidc;
    (*(pMover->_vptr_INextBotEventResponder + 99))(pMover);
    v84 = hullMaxa;
    v29 = vLeft->y * hullMaxa;
    v30 = hullMaxa * vLeft->z;
    hullMaxb = vLeft->x * hullMaxa;
    pDoorc = v29;
    flRightAvoidd = v30;
    v31 = (*(pMover->_vptr_INextBotEventResponder + 98))(pMover);
    *&traverseFilter.m_attr.m_nInteractsWith = v32;
    *&traverseFilter._vptr_CTraceFilter = v31;
    v33 = v32 + flRightAvoidd;
    v34 = hullMaxb + *&v31;
    this->m_vLeftFrom.z = v33;
    this->m_vLeftFrom.x = hullMaxb + *&v31;
    m_pBot = this->m_pBot;
    this->m_vLeftFrom.y = pDoorc + *(&v31 + 1);
    *&v31 = pDoorc + *(&v31 + 1);
    pDoord = m_pBot;
    v36 = (vForward->y * flRange) + *&v31;
    *&v31 = (vForward->z * flRange) + v33;
    v37 = flRange * vForward->x;
    this->m_isLeftClear = 1;
    this->m_vLeftTo.y = v36;
    this->m_vLeftTo.z = *&v31;
    this->m_vLeftTo.x = v37 + v34;
    v38 = (*(m_pBot->_vptr_INextBotEventResponder + 66))(m_pBot);
    CTraceFilterSimple::CTraceFilterSimple(&traverseFilter, v38, 4, 0);
    traverseFilter._vptr_CTraceFilter = off_47B2490;
    traverseFilter.m_bot = pDoord;
    traverseFilter.m_when = CLocomotionBase::TraverseWhenType::EVENTUALLY;
    UTIL_TraceHull(
      &this->m_vLeftFrom,
      &this->m_vLeftTo,
      &this->m_hullMin,
      &this->m_hullMax,
      mask,
      &traverseFilter,
      &ptr);
    fraction = ptr.fraction;
    v40 = flRange;
    v41 = v84;
    v42 = v81;
    if ( ptr.fraction < 1.0 )
    {
      startsolid = ptr.startsolid;
      if ( !ptr.startsolid )
      {
        v44 = 1.0 - ptr.fraction;
        if ( (1.0 - ptr.fraction) <= 1.0 )
        {
          if ( v44 >= 0.0 )
            goto LABEL_29;
          v44 = 0.0;
        }
        else
        {
          v44 = 1.0;
        }
        this->m_isLeftClear = 0;
LABEL_45:
        pDoorb = 0;
        if ( ptr.m_ShapeAttributes.m_nEntityId != 0x8000 && ptr.m_pEnt != 0 )
        {
          v86 = v81;
          v80 = v44;
          v83 = v41;
          pDoorb = __dynamic_cast(ptr.m_pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePropDoor, 0);
          v44 = v80;
          v41 = v83;
          v42 = v86;
          v40 = flRange;
        }
LABEL_32:
        leftAvoid = v44;
        v78 = v42;
        v79 = v40;
        v97 = vLeft->x * v41;
        v85 = vLeft->y * v41;
        v82 = v41 * vLeft->z;
        v45 = (*(pMover->_vptr_INextBotEventResponder + 98))(pMover);
        *&vDoorEdge.x = v45;
        vDoorEdge.z = v46;
        v47 = v46 - v82;
        *&v45 = *&v45 - v97;
        this->m_rightFrom.z = v47;
        this->m_rightFrom.y = *(&v45 + 1) - v85;
        this->m_rightFrom.x = *&v45;
        v48 = (vForward->y * v79) + (*(&v45 + 1) - v85);
        v49 = vForward->z * v79;
        v50 = v79 * vForward->x;
        this->m_isRightClear = 1;
        this->m_rightTo.y = v48;
        this->m_rightTo.z = v49 + v47;
        this->m_rightTo.x = v50 + *&v45;
        UTIL_TraceHull(
          &this->m_rightFrom,
          &this->m_rightTo,
          &this->m_hullMin,
          &this->m_hullMax,
          mask,
          &traverseFilter,
          &ptr);
        v51 = ptr.fraction;
        v52 = v78;
        v53 = LODWORD(leftAvoid);
        if ( ptr.fraction < 1.0 )
        {
          if ( !ptr.startsolid )
          {
            v54 = 0x3F800000u;
            v54.m128_f32[0] = 1.0 - ptr.fraction;
            if ( (1.0 - ptr.fraction) <= 1.0 )
            {
              if ( v54.m128_f32[0] >= 0.0 )
              {
                v52 = 0;
LABEL_35:
                this->m_isRightClear = 0;
                if ( pDoorb != 0 )
                  goto LABEL_36;
                if ( v51 >= 1.0 && !v52 )
                  goto LABEL_66;
                goto LABEL_61;
              }
              v54 = 0;
            }
            else
            {
              v54 = 0x3F800000u;
            }
            this->m_isRightClear = 0;
            if ( pDoorb != 0 )
            {
LABEL_36:
              if ( !this->m_isLeftClear )
              {
LABEL_37:
                AbsAngles = CBaseEntity::GetAbsAngles(pDoorb);
                AngleVectors(AbsAngles, &vDoorForward, &vDoorRight, &vAvoidDir);
                pMoverb = vDoorRight.x * 100.0;
                flRightAvoide = vDoorRight.y * 100.0;
                vAdjustedGoal_8a = 100.0 * vDoorRight.z;
                AbsOrigin = CBaseEntity::GetAbsOrigin(pDoorb);
                v57 = !this->m_bIsDebugging;
                v58 = AbsOrigin->z - vAdjustedGoal_8a;
                v59 = AbsOrigin->x - pMoverb;
                vDoorEdge.y = AbsOrigin->y - flRightAvoide;
                vDoorEdge.z = v58;
                vDoorEdge.x = v59;
                if ( !v57 )
                {
                  v60 = CBaseEntity::GetAbsAngles(pDoorb);
                  v61 = CBaseEntity::GetAbsOrigin(pDoorb);
                  NDebugOverlay::Axis(v61, v60, 20.0, 1, 10.0);
                  v62 = CBaseEntity::GetAbsOrigin(pDoorb);
                  NDebugOverlay::Line(v62, &vDoorEdge, 0xFFu, 0xFFu, 0, 1, 10.0);
                }
                vAdjustedGoal_4 = vDoorEdge.x;
                vAdjustedGoal_8 = vDoorEdge.y;
                CountdownTimer::Invalidate(p_m_avoidTimer);
                goto LABEL_40;
              }
LABEL_56:
              v53.m128_f32[0] = -v54.m128_f32[0];
LABEL_53:
              v63 = 0.5 * vForward->z;
              v64 = (0.5 * vForward->y) - (vLeft->y * v53.m128_f32[0]);
              v65 = vLeft->z * v53.m128_f32[0];
              v66 = v53.m128_f32[0] * vLeft->x;
              vAvoidDir.y = v64;
              v67 = v63 - v65;
              v68 = 0.5 * vForward->x;
              vAvoidDir.z = v67;
              vAvoidDir.x = v68 - v66;
              VectorNormalize(&vAvoidDir);
              vAdjustedGoal_4a = vAvoidDir.x * 100.0;
              vAdjustedGoal_8b = vAvoidDir.y * 100.0;
              vAdjustedGoala = 100.0 * vAvoidDir.z;
              v69 = (*(pMover->_vptr_INextBotEventResponder + 98))(pMover);
              vDoorEdge.z = v70;
              *&vDoorEdge.x = v69;
              vAdjustedGoal = v70 + vAdjustedGoala;
              vAdjustedGoal_4 = vAdjustedGoal_4a + *&v69;
              vAdjustedGoal_8 = vAdjustedGoal_8b + *(&v69 + 1);
              CountdownTimer::Invalidate(p_m_avoidTimer);
LABEL_40:
              vDoorEdge.x = vAdjustedGoal_4;
              vDoorEdge.y = vAdjustedGoal_8;
              vDoorEdge.z = vAdjustedGoal;
              goto LABEL_3;
            }
LABEL_61:
            if ( ptr.m_ShapeAttributes.m_nEntityId == 0x8000 || ptr.m_pEnt == 0 )
              goto LABEL_66;
            flRightAvoidf = v54.m128_i32[0];
            v71 = __dynamic_cast(ptr.m_pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePropDoor, 0);
            v53 = LODWORD(leftAvoid);
            pDoorb = v71;
            v54 = flRightAvoidf;
LABEL_50:
            if ( pDoorb != 0 )
            {
              if ( !this->m_isLeftClear )
              {
                if ( m_isRightClear == 0 )
                  goto LABEL_37;
                goto LABEL_53;
              }
LABEL_55:
              if ( m_isRightClear != 0 )
                goto LABEL_40;
              goto LABEL_56;
            }
LABEL_66:
            if ( !this->m_isLeftClear )
            {
              if ( !this->m_isRightClear )
              {
                if ( fabs(v54.m128_f32[0] - v53.m128_f32[0]) < 0.0099999998 )
                {
                  vDoorEdge.x = vAdjustedGoal_4;
                  vDoorEdge.y = vAdjustedGoal_8;
                  vDoorEdge.z = vAdjustedGoal;
                  goto LABEL_3;
                }
                v72 = _mm_cmpge_ss(v53, v54);
                v53.m128_i32[0] = _mm_andnot_ps(v72, _mm_xor_ps(v54, *&angleDegrees)).m128_u32[0]
                                | v53.m128_i32[0] & v72.m128_i32[0];
              }
              goto LABEL_53;
            }
            m_isRightClear = this->m_isRightClear;
            goto LABEL_55;
          }
        }
        else if ( !ptr.startsolid )
        {
          m_isRightClear = this->m_isRightClear;
          v54 = 0;
          goto LABEL_50;
        }
        v51 = 0.0;
        v54 = 0x3F800000u;
        ptr.fraction = 0.0;
        goto LABEL_35;
      }
    }
    else if ( !ptr.startsolid )
    {
      pDoorb = 0;
      v44 = 0.0;
      goto LABEL_32;
    }
    fraction = 0.0;
    startsolid = v81;
    v44 = 1.0;
    ptr.fraction = 0.0;
LABEL_29:
    this->m_isLeftClear = 0;
    if ( fraction >= 1.0 && !startsolid )
    {
      pDoorb = 0;
      goto LABEL_32;
    }
    goto LABEL_45;
  }
  flRightAvoidb = 0.5 * RandomFloat(1.0, 2.0);
  v73 = CountdownTimer::Now(&this->m_waitTimer);
  v74 = flRightAvoidb;
  v75 = v73 + flRightAvoidb;
  if ( v75 != this->m_waitTimer.m_timestamp.m_Value )
  {
    vAdjustedGoal_8c = v75;
    (*(this->m_waitTimer._vptr_CountdownTimer + 2))(&this->m_waitTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v74 = flRightAvoidb;
    this->m_waitTimer.m_timestamp.m_Value = vAdjustedGoal_8c;
  }
  if ( v74 != this->m_waitTimer.m_duration.m_Value )
  {
    flRightAvoidg = v74;
    (*(this->m_waitTimer._vptr_CountdownTimer + 2))(&this->m_waitTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_waitTimer.m_duration.m_Value = flRightAvoidg;
  }
  *&vDoorEdge.x = (*(pMover->_vptr_INextBotEventResponder + 98))(pMover);
  vDoorEdge.z = v76;
LABEL_3:
  *&result.x = *&vDoorEdge.x;
  result.z = vDoorEdge.z;
  return result;
}


// CPathFollower::Climbing  (line 1138, @0x0000000002f3cbb0, libserver.so)  // inlines: CGameTrace, Color, DidHit, DidHitNonWorldEntity, EnableInteractsWith, GetArea, GetBool, GetInt, HasAnyFlags, HasAttributes, Init, IsLengthGreaterThan, Length2DSqr, LengthSqr, Min<float>, NextBotTraversableTraceFilter, NextSegment, NormalizeInPlace, PriorSegment, Ray_t, RnCollisionAttr_t, SetColor, TraceRay, UTIL_TraceHull, Vector, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator+=, operator-, operator-=, operator=, operator[]
// calls: VectorNormalize, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_TraceHull, NDebugOverlay::SweptBox, NDebugOverlay::HorzArrow, CGlobalVarsBase::curtime, DevMsg(char const*,...), NDebugOverlay::Cross3D, CNavPoly::GetClosestPointOnPoly, INextBot::DebugConColorMsg (15 total)
// callers: CPathFollower::UpdateFollow
// strings: "%3.2f: Climbing - skipping overhead climb we can walk/crawl under.\n", "%3.2f: CANT FIND LEDGE TO CLIMB\n", "%3.2f: %s ON STAIRS\n", "%3.2f: Climbing - found wall.\n", "%s backing up when looking for max ledge height\n", "%3.2f: STARTING LEDGE CLIMB UP\n" (7 total)
__int64 __fastcall CPathFollower::Climbing(
        CPathFollower *const this,
        const CPathSegment *pGoalSeg,
        const Vector *const vForward,
        const Vector *const vRight,
        float flGoalRange)
{
  _BYTE *v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // r13d
  float v13; // xmm0_4
  float v14; // xmm0_4
  const CPathSegment *m_pGoal; // rax
  CNavPathNB *v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  double v19; // xmm0_8
  const CPathSegment *v20; // rax
  float v21; // xmm1_4
  vec_t v22; // xmm2_4
  float v23; // xmm0_4
  unsigned __int8 (__fastcall *v24)(_BYTE *, NextBotTraversableTraceFilter *, Vector *, _QWORD, _QWORD); // r14
  float v25; // xmm1_4
  int v26; // xmm1_4
  __int64 v27; // r14
  CNavPathNB *v28; // rdx
  int v29; // ecx
  __int64 v30; // r14
  vec_t v31; // xmm1_4
  const CBaseEntity *v32; // rax
  double v33; // xmm0_8
  double v34; // xmm0_8
  vec_t v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm12_4
  float v38; // xmm14_4
  float v39; // xmm9_4
  float z; // xmm10_4
  float v41; // xmm6_4
  float v42; // xmm0_4
  double v43; // xmm1_8
  float v44; // xmm6_4
  char v45; // al
  double v46; // xmm0_8
  const CPathSegment *v47; // rax
  float v48; // xmm6_4
  char v49; // r13
  float v50; // xmm0_4
  float v51; // xmm3_4
  float x; // xmm12_4
  float v53; // xmm2_4
  float y; // xmm14_4
  float v55; // xmm15_4
  float v56; // xmm11_4
  float v57; // xmm0_4
  float v58; // xmm13_4
  float v59; // xmm6_4
  float v60; // xmm4_4
  float v61; // xmm1_4
  float v62; // xmm10_4
  float v63; // xmm13_4
  float v64; // xmm5_4
  float v65; // xmm0_4
  float v66; // xmm6_4
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm0_4
  float v70; // xmm0_4
  double v71; // xmm0_8
  vec_t v72; // xmm1_4
  __int64 v73; // rbx
  float v74; // xmm0_4
  CNavPathNB *m_rPath; // rcx
  int m_nSegmentCount; // esi
  __int64 v77; // rdx
  double v78; // xmm0_8
  vec_t v79; // xmm1_4
  double v80; // xmm0_8
  float v81; // xmm1_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  float v84; // xmm4_4
  float v85; // r13d
  float v86; // xmm0_4
  double v87; // xmm0_8
  double v88; // xmm1_8
  double v89; // xmm3_8
  double v90; // xmm4_8
  double v91; // xmm5_8
  double v92; // xmm2_8
  double v93; // xmm6_8
  bool v94; // cc
  const char *v95; // rax
  INextBot *m_pBot; // rdi
  float v97; // xmm0_4
  float v98; // xmm2_4
  float v99; // xmm0_4
  float v100; // xmm7_4
  float v101; // xmm5_4
  bool m_bIsDebugging; // al
  CNavPathNB *v103; // rdx
  int v104; // ecx
  __int64 v105; // rax
  CNavArea *v106; // rax
  __m128 v107; // xmm4
  __m128 v108; // xmm1
  __m128 m_flDiameterMin_low; // xmm0
  __m128 v110; // xmm4
  __m128 v111; // xmm7
  const char *v112; // r13
  float v113; // xmm0_4
  CBaseEntity *v114; // [rsp+28h] [rbp-368h]
  float ledgeFrontWallDepth; // [rsp+40h] [rbp-350h]
  float thisa; // [rsp+48h] [rbp-348h]
  float flMinLedgeDepth; // [rsp+50h] [rbp-340h]
  float maxBackUp; // [rsp+58h] [rbp-338h]
  char bFoundWall; // [rsp+5Ch] [rbp-334h]
  float flHalfSize; // [rsp+70h] [rbp-320h]
  float climbUpLedgeTolerance; // [rsp+74h] [rbp-31Ch]
  uint64 mask; // [rsp+78h] [rbp-318h]
  float climbUpLedgeHeightDelta; // [rsp+80h] [rbp-310h]
  float flLedgeHeightIncrement; // [rsp+84h] [rbp-30Ch]
  float flLedgeHeightIncrementa; // [rsp+84h] [rbp-30Ch]
  char backUpSoFar; // [rsp+98h] [rbp-2F8h]
  float backUpSoFara; // [rsp+98h] [rbp-2F8h]
  float v128; // [rsp+9Ch] [rbp-2F4h]
  float v129; // [rsp+9Ch] [rbp-2F4h]
  float v130; // [rsp+9Ch] [rbp-2F4h]
  float v131; // [rsp+9Ch] [rbp-2F4h]
  float flLedgeTopLookAheadRangea; // [rsp+A0h] [rbp-2F0h]
  float flLedgeTopLookAheadRangeb; // [rsp+A0h] [rbp-2F0h]
  float flLedgeTopLookAheadRange; // [rsp+A0h] [rbp-2F0h]
  float flMinHullHeight; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightg; // [rsp+A8h] [rbp-2E8h]
  INextBot *flMinHullHeighth; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeighta; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeighti; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightj; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightb; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightc; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightl; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightd; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeighte; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightm; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightn; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightf; // [rsp+A8h] [rbp-2E8h]
  float flMinHullHeightk; // [rsp+A8h] [rbp-2E8h]
  const CPathSegment *pSeg; // [rsp+B0h] [rbp-2E0h]
  unsigned int pSegh; // [rsp+B0h] [rbp-2E0h]
  float pSega; // [rsp+B0h] [rbp-2E0h]
  float pSegb; // [rsp+B0h] [rbp-2E0h]
  CNavArea *pSegc; // [rsp+B0h] [rbp-2E0h]
  float pSegd; // [rsp+B0h] [rbp-2E0h]
  float pSege; // [rsp+B0h] [rbp-2E0h]
  float pSegf; // [rsp+B0h] [rbp-2E0h]
  float pSegi; // [rsp+B0h] [rbp-2E0h]
  unsigned int pSegg; // [rsp+B0h] [rbp-2E0h]
  float flLedgeHeightc; // [rsp+B8h] [rbp-2D8h]
  float flLedgeHeight; // [rsp+B8h] [rbp-2D8h]
  float flLedgeHeightd; // [rsp+B8h] [rbp-2D8h]
  float flLedgeHeighta; // [rsp+B8h] [rbp-2D8h]
  float flLedgeHeightb; // [rsp+B8h] [rbp-2D8h]
  float flLedgeHeighte; // [rsp+B8h] [rbp-2D8h]
  Vector vClimbDirection; // [rsp+C0h] [rbp-2D0h] BYREF
  Vector toGoal; // [rsp+D0h] [rbp-2C0h] BYREF
  Vector vSkipStepHeightHullMin; // [rsp+E0h] [rbp-2B0h] BYREF
  Vector vSkipStepHeightHullMax; // [rsp+F0h] [rbp-2A0h] BYREF
  Vector vFeet; // [rsp+100h] [rbp-290h] BYREF
  Vector climbHullMax; // [rsp+110h] [rbp-280h] BYREF
  Vector vLedgePos; // [rsp+120h] [rbp-270h] BYREF
  Vector vClimbHullMin; // [rsp+130h] [rbp-260h] BYREF
  Vector vClimbHullMax; // [rsp+140h] [rbp-250h] BYREF
  Vector wallBottomLeft; // [rsp+150h] [rbp-240h] BYREF
  Vector wallBottomRight; // [rsp+160h] [rbp-230h] BYREF
  Vector wallTopLeft; // [rsp+170h] [rbp-220h] BYREF
  Vector wallTopRight; // [rsp+180h] [rbp-210h] BYREF
  Vector ledgeLeft; // [rsp+190h] [rbp-200h] BYREF
  NextBotTraversableTraceFilter filter; // [rsp+1A0h] [rbp-1F0h] BYREF
  Vector vNearClimbGoal; // [rsp+1F0h] [rbp-1A0h] BYREF
  Vector v182; // [rsp+1FCh] [rbp-194h] BYREF
  float v183; // [rsp+208h] [rbp-188h]
  float v184; // [rsp+20Ch] [rbp-184h]
  float v185; // [rsp+210h] [rbp-180h]
  float v186; // [rsp+214h] [rbp-17Ch]
  float v187; // [rsp+218h] [rbp-178h]
  float v188; // [rsp+21Ch] [rbp-174h]
  __int64 v189; // [rsp+220h] [rbp-170h]
  char v190; // [rsp+228h] [rbp-168h]
  __int64 v191; // [rsp+230h] [rbp-160h]
  CBaseEntity *pObstacle; // [rsp+238h] [rbp-158h]
  __int64 v193; // [rsp+240h] [rbp-150h]
  __int64 v194; // [rsp+248h] [rbp-148h]
  __int64 v195; // [rsp+250h] [rbp-140h]
  __int64 v196; // [rsp+258h] [rbp-138h]
  __int64 v197; // [rsp+260h] [rbp-130h]
  __int64 v198; // [rsp+268h] [rbp-128h]
  __int64 v199; // [rsp+270h] [rbp-120h]
  int v200; // [rsp+278h] [rbp-118h]
  int v201; // [rsp+27Ch] [rbp-114h]
  int v202; // [rsp+280h] [rbp-110h]
  int v203; // [rsp+284h] [rbp-10Ch]
  int v204; // [rsp+288h] [rbp-108h]
  int v205; // [rsp+28Ch] [rbp-104h]
  int v206; // [rsp+290h] [rbp-100h]
  __int16 v207; // [rsp+294h] [rbp-FCh]
  __int16 v208; // [rsp+296h] [rbp-FAh]
  Vector ledgeRight; // [rsp+2A0h] [rbp-F0h] BYREF
  Vector v210; // [rsp+2ACh] [rbp-E4h]
  float v211; // [rsp+2B8h] [rbp-D8h]
  float v212; // [rsp+2BCh] [rbp-D4h]
  float v213; // [rsp+2C0h] [rbp-D0h]
  float v214; // [rsp+2C4h] [rbp-CCh]
  float v215; // [rsp+2C8h] [rbp-C8h]
  float v216; // [rsp+2CCh] [rbp-C4h]
  __int64 v217; // [rsp+2D0h] [rbp-C0h]
  float v218; // [rsp+2D8h] [rbp-B8h]
  float v219; // [rsp+2DCh] [rbp-B4h]
  __int64 v220; // [rsp+2E0h] [rbp-B0h]
  CBaseEntity *v221; // [rsp+2E8h] [rbp-A8h]
  __int64 v222; // [rsp+2F0h] [rbp-A0h]
  __int64 v223; // [rsp+2F8h] [rbp-98h]
  __int64 v224; // [rsp+300h] [rbp-90h]
  __int64 v225; // [rsp+308h] [rbp-88h]
  __int64 v226; // [rsp+310h] [rbp-80h]
  __int64 v227; // [rsp+318h] [rbp-78h]
  __int64 v228; // [rsp+320h] [rbp-70h]
  int v229; // [rsp+328h] [rbp-68h]
  int v230; // [rsp+32Ch] [rbp-64h]
  int v231; // [rsp+330h] [rbp-60h]
  int v232; // [rsp+334h] [rbp-5Ch]
  int v233; // [rsp+338h] [rbp-58h]
  int v234; // [rsp+33Ch] [rbp-54h]
  int v235; // [rsp+340h] [rbp-50h]
  __int16 v236; // [rsp+344h] [rbp-4Ch]
  __int16 v237; // [rsp+346h] [rbp-4Ah]
  Color color; // [rsp+350h] [rbp-40h] BYREF
  unsigned __int64 v239; // [rsp+358h] [rbp-38h]

  v239 = __readfsqword(0x28u);
  v7 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot, pGoalSeg, vForward, vRight, flGoalRange);
  v8 = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))(this->m_pBot);
  v9 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
  v10 = (*(*v9 + 2888LL))(v9);
  if ( NextBotAllowClimbing.m_pParent->m_Value.m_nValue == 0 )
    return 0;
  if ( (*(*v7 + 776LL))(v7) == 0 )
    return 0;
  vClimbDirection.z = 0.0;
  *&vClimbDirection.x = *&vForward->x;
  v13 = VectorNormalize(&vClimbDirection);
  flMinHullHeight = (*(*v8 + 744LL))(v8, v13);
  if ( (*(*v7 + 568LL))(v7) != 0 )
    return 0;
  v11 = (*(*v7 + 728LL))(v7);
  if ( v11 != 0 || (*(*v7 + 664LL))(v7) == 0 )
    return 0;
  if ( this->m_pGoal == 0 )
    return v11;
  v14 = (*(*v8 + 768LL))(v8);
  m_pGoal = this->m_pGoal;
  climbUpLedgeTolerance = v14;
  if ( m_pGoal->type == CPathSegment::SegmentType::PATH_SEG_CLIMB_UP )
  {
    m_rPath = this->m_rPath;
    m_nSegmentCount = m_rPath->m_nSegmentCount;
    if ( m_nSegmentCount <= 0
      || (v77 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - m_rPath->m_path) >> 3)) < 0
      || v77 >= m_nSegmentCount - 1 )
    {
      climbUpLedgeHeightDelta = -1.0;
    }
    else
    {
      pSegc = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[m_rPath->m_path[v77 + 1].m_nAreaIndex];
      if ( pSegc != 0 )
      {
        v78 = (*(*v7 + 784LL))(v7);
        ledgeRight.z = v79;
        *&ledgeRight.x = v78;
        vNearClimbGoal = CNavPoly::GetClosestPointOnPoly(pSegc, &ledgeRight);
        v80 = (*(*v7 + 784LL))(v7);
        vClimbDirection.z = 0.0;
        *&ledgeRight.x = v80;
        ledgeRight.z = v81;
        climbUpLedgeHeightDelta = vNearClimbGoal.z - v81;
        vClimbDirection.y = vNearClimbGoal.y - *(&v80 + 1);
        vClimbDirection.x = vNearClimbGoal.x - *&v80;
        VectorNormalize(&vClimbDirection);
        m_pGoal = this->m_pGoal;
      }
      else
      {
        climbUpLedgeHeightDelta = -1.0;
      }
    }
  }
  else
  {
    climbUpLedgeHeightDelta = -1.0;
  }
  if ( (TheNavMesh->m_NavAreas.m_Memory.m_pMemory[m_pGoal->m_nAreaIndex]->m_AreaAttributes.m_Flags & 0x1000) != 0
    || v10 != 0 && (*(v10 + 217) & 0x10) != 0 )
  {
    if ( this->m_bIsDebugging )
    {
      v71 = (*(*v7 + 784LL))(v7);
      ledgeRight.z = v72;
      *&ledgeRight.x = v71;
      NDebugOverlay::Cross3D(&ledgeRight, 5.0, 0, 0xFFu, 0xFFu, 1, 5.0);
      v73 = (*(this->m_pBot->_vptr_INextBotEventResponder + 97))(this->m_pBot);
      v74 = CGlobalVarsBase::curtime(gpGlobals, 0);
      DevMsg("%3.2f: %s ON STAIRS\n", v73, v74);
    }
  }
  else
  {
    v16 = this->m_rPath;
    v17 = v16->m_nSegmentCount;
    if ( v17 <= 0 )
      return v11;
    v18 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - v16->m_path) >> 3);
    if ( v18 <= 0 )
      return v11;
    if ( v17 <= v18 )
      return v11;
    pSeg = &v16->m_path[v18 - 1];
    v19 = (*(*v7 + 784LL))(v7);
    v20 = this->m_pGoal;
    *&ledgeRight.x = v19;
    ledgeRight.z = v21;
    *&v19 = v20->vPos.z - v21;
    v22 = v20->vPos.x - ledgeRight.x;
    toGoal.y = v20->vPos.y - ledgeRight.y;
    toGoal.z = *&v19;
    toGoal.x = v22;
    v23 = VectorNormalize(&toGoal);
    flLedgeTopLookAheadRangea = toGoal.z;
    thisa = flMinHullHeight - 1.0;
    if ( (*(*v7 + 864LL))(v7, v23) > flLedgeTopLookAheadRangea
      && v7[64] == 0
      && this->m_pGoal->type != CPathSegment::SegmentType::PATH_SEG_CLIMB_UP )
    {
      v24 = *(*v7 + 872LL);
      flMinHullHeightg = toGoal.x * (thisa + thisa);
      flLedgeTopLookAheadRangeb = toGoal.y * (thisa + thisa);
      v128 = toGoal.z * (thisa + thisa);
      *&vNearClimbGoal.x = (*(*v7 + 784LL))(v7);
      vNearClimbGoal.z = v25;
      ledgeRight.x = flMinHullHeightg + vNearClimbGoal.x;
      ledgeRight.y = flLedgeTopLookAheadRangeb + vNearClimbGoal.y;
      ledgeRight.z = v25 + v128;
      filter._vptr_CTraceFilter = COERCE_INT_((*(*v7 + 784LL))(v7));
      LODWORD(filter.m_attr.m_nInteractsWith) = v26;
      if ( v24(v7, &filter, &ledgeRight, 0, 0) != 0 )
        return v11;
    }
    v27 = pSeg;
    while ( *(v27 + 32) != 4 )
    {
      v28 = this->m_rPath;
      v29 = v28->m_nSegmentCount;
      if ( v29 > 0 )
      {
        v30 = 0x2E8BA2E8BA2E8BA3LL * ((v27 - v28->m_path) >> 3);
        if ( v30 >= 0 && v30 < v29 - 1 )
        {
          v27 = &v28->m_path[v30 + 1];
          if ( pSeg == v27 )
            continue;
          *&ledgeRight.x = (*(*v7 + 784LL))(v7);
          ledgeRight.z = v31;
          if ( (((*(v27 + 8) - ledgeRight.x) * (*(v27 + 8) - ledgeRight.x))
              + ((*(v27 + 12) - ledgeRight.y) * (*(v27 + 12) - ledgeRight.y))) <= 22500.0 )
            continue;
        }
      }
      backUpSoFar = 0;
      goto LABEL_29;
    }
    backUpSoFar = 1;
LABEL_29:
    pSegh = (*(*v8 + 792LL))(v8);
    v196 = 0;
    v197 = 0;
    v198 = 0;
    v199 = 0x700000000000000LL;
    CGameTrace::Init(&vNearClimbGoal);
    flMinHullHeighth = this->m_pBot;
    v32 = (*(flMinHullHeighth->_vptr_INextBotEventResponder + 66))(flMinHullHeighth);
    CTraceFilterSimple::CTraceFilterSimple(&filter, v32, 4, 0);
    filter.m_when = CLocomotionBase::TraverseWhenType::IMMEDIATELY;
    filter._vptr_CTraceFilter = off_47B2490;
    filter.m_bot = flMinHullHeighth;
    v33 = (*(*v8 + 744LL))(v8);
    maxBackUp = *&v33;
    flHalfSize = *&v33 * 0.5;
    v129 = (*(*v8 + 768LL))(v8);
    vSkipStepHeightHullMin.z = (*(*v7 + 792LL))(v7) + 0.1;
    vSkipStepHeightHullMax.x = flHalfSize;
    vSkipStepHeightHullMin.x = -flHalfSize;
    vSkipStepHeightHullMin.y = -flHalfSize;
    vSkipStepHeightHullMax.y = flHalfSize;
    vSkipStepHeightHullMax.z = v129 + 0.1;
    flLedgeHeightIncrement = vSkipStepHeightHullMin.z;
    v34 = (*(*v7 + 784LL))(v7);
    vFeet.z = v35;
    *&vFeet.x = v34;
    v36 = (*(*v7 + 800LL))(v7);
    v210.x = 0.0;
    v212 = 0.0;
    v216 = 0.0;
    v219 = 0.0;
    mask = pSegh;
    v210.y = (vFeet.x + 0.0) - vFeet.x;
    v210.z = (vFeet.y + 0.0) - vFeet.y;
    v211 = (v36 + vFeet.z) - vFeet.z;
    LODWORD(v220) = 0;
    v37 = (vSkipStepHeightHullMin.y + vSkipStepHeightHullMax.y) * 0.5;
    *(&v217 + 1) = (vSkipStepHeightHullMax.y - vSkipStepHeightHullMin.y) * 0.5;
    v38 = (vSkipStepHeightHullMin.x + vSkipStepHeightHullMax.x) * 0.5;
    *&v217 = (vSkipStepHeightHullMax.x - vSkipStepHeightHullMin.x) * 0.5;
    v39 = (vSkipStepHeightHullMin.z + vSkipStepHeightHullMax.z) * 0.5;
    ledgeRight.y = vFeet.y + v37;
    v218 = (vSkipStepHeightHullMax.z - vSkipStepHeightHullMin.z) * 0.5;
    BYTE5(v220) = (((v210.y * v210.y) + (v210.z * v210.z)) + (v211 * v211)) != 0.0;
    ledgeRight.x = vFeet.x + v38;
    v213 = -v38;
    ledgeRight.z = vFeet.z + v39;
    BYTE4(v220) = (((*&v217 * *&v217) + (*(&v217 + 1) * *(&v217 + 1))) + (v218 * v218)) < 0.000001;
    v214 = -v37;
    v215 = -v39;
    filter.m_attr.m_nInteractsWith |= pSegh;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ledgeRight, &filter, &vNearClimbGoal);
    pSega = v188;
    z = v129;
    v41 = flLedgeHeightIncrement;
    if ( v188 < 1.0 || v190 != 0 )
    {
      v225 = 0;
      v226 = 0;
      v227 = 0;
      v228 = 0x700000000000000LL;
      CGameTrace::Init(&ledgeRight);
      wallTopRight.y = vFeet.y - (vClimbDirection.y * (maxBackUp * 0.25));
      wallTopRight.z = vFeet.z - (vClimbDirection.z * (maxBackUp * 0.25));
      wallTopRight.x = vFeet.x - (vClimbDirection.x * (maxBackUp * 0.25));
      v42 = (*(*v7 + 800LL))(v7);
      ledgeLeft.y = wallTopRight.y + 0.0;
      ledgeLeft.x = wallTopRight.x + 0.0;
      ledgeLeft.z = v42 + wallTopRight.z;
      UTIL_TraceHull(
        &wallTopRight,
        &ledgeLeft,
        &vSkipStepHeightHullMin,
        &vSkipStepHeightHullMax,
        mask,
        &filter,
        &ledgeRight);
      v41 = flLedgeHeightIncrement;
      z = v129;
      if ( LOBYTE(v218) == 0 && v216 > pSega )
      {
        v95 = (*(this->m_pBot->_vptr_INextBotEventResponder + 97))(this->m_pBot, v216, v43, 0.0, 0.5);
        m_pBot = this->m_pBot;
        color._color[0] = -1;
        color._color[1] = -1;
        color._color[2] = -1;
        color._color[3] = -1;
        INextBot::DebugConColorMsg(
          m_pBot,
          NextBotDebugType::NEXTBOT_PATH,
          &color,
          "%s backing up when looking for max ledge height\n",
          v95);
        vNearClimbGoal = ledgeRight;
        v187 = v215;
        pSega = v216;
        v182 = v210;
        v188 = v216;
        v183 = v211;
        v189 = v217;
        v184 = v212;
        v185 = v213;
        v190 = LOBYTE(v218);
        v186 = v214;
        v191 = v220;
        v200 = v229;
        pObstacle = v221;
        v201 = v230;
        v202 = v231;
        v193 = v222;
        v203 = v232;
        v204 = v233;
        v194 = v223;
        v205 = v234;
        v195 = v224;
        v196 = v225;
        v197 = v226;
        v198 = v227;
        v199 = v228;
        v206 = v235;
        v207 = v236;
        v208 = v237;
        vFeet = wallTopRight;
        v41 = flLedgeHeightIncrement;
      }
    }
    flMinHullHeighta = v41;
    pSegb = pSega * (*(*v7 + 800LL))(v7);
    if ( (*(*v7 + 792LL))(v7) < pSegb )
    {
      vLedgePos = vFeet;
      ledgeRight.y = (vClimbDirection.y * thisa) + vFeet.y;
      ledgeRight.z = (vClimbDirection.z * thisa) + vFeet.z;
      climbHullMax.x = flHalfSize;
      climbHullMax.z = pSegb;
      climbHullMax.y = flHalfSize;
      ledgeRight.x = (thisa * vClimbDirection.x) + vFeet.x;
      UTIL_TraceHull(&vFeet, &ledgeRight, &vSkipStepHeightHullMin, &climbHullMax, mask, &filter, &vNearClimbGoal);
      v44 = flMinHullHeighta;
      if ( this->m_bIsDebugging && NextBotDebugClimbing.m_pParent->m_Value.m_nValue != 0 )
      {
        ledgeRight.z = (vClimbDirection.z * thisa) + vFeet.z;
        ledgeRight.y = (vClimbDirection.y * thisa) + vFeet.y;
        ledgeRight.x = (thisa * vClimbDirection.x) + vFeet.x;
        NDebugOverlay::SweptBox(
          &vFeet,
          &ledgeRight,
          &vSkipStepHeightHullMin,
          &climbHullMax,
          &vec3_angle,
          255,
          0.1,
          100,
          0,
          255);
        v44 = flMinHullHeighta;
      }
      if ( v188 < 1.0 && v190 == 0 )
      {
        if ( this->m_bIsDebugging && NextBotDebugClimbing.m_pParent->m_Value.m_nValue != 0 )
        {
          flMinHullHeighti = v44;
          ledgeRight.z = (vClimbDirection.z * thisa) + vFeet.z;
          ledgeRight.y = (vClimbDirection.y * thisa) + vFeet.y;
          ledgeRight.x = (vClimbDirection.x * thisa) + vFeet.x;
          NDebugOverlay::SweptBox(
            &vFeet,
            &ledgeRight,
            &vSkipStepHeightHullMin,
            &climbHullMax,
            &vec3_angle,
            255,
            4.0,
            100,
            0,
            100);
          ledgeRight.y = (vClimbDirection.y * 50.0) + vFeet.y;
          ledgeRight.z = (vClimbDirection.z * 50.0) + vFeet.z;
          ledgeRight.x = (50.0 * vClimbDirection.x) + vFeet.x;
          NDebugOverlay::HorzArrow(&vFeet, &ledgeRight, 2.0, 0, 0xFFu, 0, 255, 4.0, 1);
          v44 = flMinHullHeighti;
          v114 = pObstacle;
          if ( v188 >= 1.0 && v190 == 0 )
          {
LABEL_46:
            if ( this->m_bIsDebugging )
            {
              flMinHullHeightk = v44;
              v112 = (*(this->m_pBot->_vptr_INextBotEventResponder + 97))(this->m_pBot);
              v113 = CGlobalVarsBase::curtime(gpGlobals, 0);
              DevMsg("%3.2f: %s at potential ledge climb\n", v113, v112);
              v44 = flMinHullHeightk;
            }
            flMinHullHeightb = v44;
            ledgeFrontWallDepth = thisa * v188;
            v46 = (*(*v8 + 744LL))(v8);
            v47 = this->m_pGoal;
            v48 = flMinHullHeightb;
            flMinLedgeDepth = *&v46 * 0.5;
            if ( v47->type == CPathSegment::SegmentType::PATH_SEG_CLIMB_UP )
            {
              v103 = this->m_rPath;
              v104 = v103->m_nSegmentCount;
              if ( v104 > 0 )
              {
                v105 = 0x2E8BA2E8BA2E8BA3LL * ((v47 - v103->m_path) >> 3);
                if ( v105 >= 0 && v105 < v104 - 1 )
                {
                  v106 = TheNavMesh->m_NavAreas.m_Memory.m_pMemory[v103->m_path[v105 + 1].m_nAreaIndex];
                  if ( v106 != 0 )
                  {
                    ledgeRight.z = 0.0;
                    v108.m128_f32[0] = flMinLedgeDepth * vClimbDirection.y;
                    ledgeRight.x = vClimbDirection.x * flMinLedgeDepth;
                    ledgeRight.y = flMinLedgeDepth * vClimbDirection.y;
                    m_flDiameterMin_low = LODWORD(v106->m_flDiameterMin);
                    if ( fabs(vClimbDirection.x * flMinLedgeDepth) > m_flDiameterMin_low.m128_f32[0] )
                    {
                      v107.m128_f32[0] = vClimbDirection.x * flMinLedgeDepth;
                      v110 = _mm_cmplt_ss(0, v107);
                      LODWORD(ledgeRight.x) = _mm_andnot_ps(v110, _mm_xor_ps(m_flDiameterMin_low, *&angleDegrees)).m128_u32[0]
                                            | m_flDiameterMin_low.m128_i32[0] & v110.m128_i32[0];
                    }
                    if ( fabs(v108.m128_f32[0]) > m_flDiameterMin_low.m128_f32[0] )
                    {
                      v111 = _mm_cmplt_ss(0, v108);
                      LODWORD(ledgeRight.y) = _mm_andnot_ps(v111, _mm_xor_ps(m_flDiameterMin_low, *&angleDegrees)).m128_u32[0]
                                            | m_flDiameterMin_low.m128_i32[0] & v111.m128_i32[0];
                    }
                    flMinLedgeDepth = fminf(flMinLedgeDepth, VectorNormalize(&ledgeRight));
                    v48 = flMinHullHeightb;
                  }
                }
              }
            }
            v49 = 0;
            flLedgeHeightc = v48;
            v50 = (*(*v7 + 792LL))(v7);
            v51 = 0.5;
            x = flHalfSize;
            v53 = 0.0;
            y = flHalfSize;
            vClimbHullMin.z = 0.0;
            v55 = thisa;
            v56 = 0.0;
            vClimbHullMax.x = flHalfSize;
            flLedgeHeightIncrementa = v50 * 0.5;
            vClimbHullMax.y = flHalfSize;
            vClimbHullMin.x = -flHalfSize;
            v57 = -flHalfSize;
            v58 = -flHalfSize;
            vClimbHullMin.y = -flHalfSize;
            v59 = flLedgeHeightc;
            vClimbHullMax.z = z;
            bFoundWall = 0;
            while ( 1 )
            {
              v130 = v59;
              v210.x = v53;
              v212 = v53;
              v216 = v53;
              v219 = v53;
              *&v220 = v53;
              flMinHullHeightc = v53;
              flLedgeHeight = v51;
              v210.y = ((vClimbDirection.x * v55) + (vFeet.x + v53)) - (vFeet.x + v53);
              v211 = ((v55 * vClimbDirection.z) + (v59 + vFeet.z)) - (v59 + vFeet.z);
              v210.z = ((vClimbDirection.y * v55) + (vFeet.y + v53)) - (vFeet.y + v53);
              v60 = z - v56;
              v61 = x - v58;
              v62 = (z + v56) * v51;
              v218 = v60 * v51;
              v63 = (v58 + x) * v51;
              v64 = (y - v57) * v51;
              v215 = -v62;
              *&v217 = v61 * v51;
              ledgeRight.z = (v59 + vFeet.z) + v62;
              v213 = -v63;
              *(&v217 + 1) = v64;
              BYTE5(v220) = (((v210.y * v210.y) + (v210.z * v210.z)) + (v211 * v211)) != v53;
              v65 = (v57 + y) * v51;
              ledgeRight.x = (vFeet.x + v53) + v63;
              v214 = -v65;
              ledgeRight.y = (vFeet.y + v53) + v65;
              BYTE4(v220) = (((*&v217 * *&v217) + (v64 * v64)) + (v218 * v218)) < 0.000001;
              filter.m_attr.m_nInteractsWith |= mask;
              CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ledgeRight, &filter, &vNearClimbGoal);
              v51 = flLedgeHeight;
              v53 = flMinHullHeightc;
              v66 = v130;
              if ( v190 == 0 )
              {
                v67 = v188 * v55;
                if ( bFoundWall != 0 )
                {
                  if ( (v67 - ledgeFrontWallDepth) > flMinLedgeDepth )
                  {
                    vLedgePos = v182;
                    ledgeRight.z = v182.z - flLedgeHeightIncrementa;
                    ledgeRight.x = v182.x + flMinHullHeightc;
                    ledgeRight.y = v182.y + flMinHullHeightc;
                    UTIL_TraceHull(
                      &vLedgePos,
                      &ledgeRight,
                      &vClimbHullMin,
                      &vClimbHullMax,
                      mask,
                      &filter,
                      &vNearClimbGoal);
                    vLedgePos = v182;
                    v53 = flMinHullHeightc;
                    v51 = flLedgeHeight;
                    v66 = v130;
                    if ( v190 == 0
                      && v188 < 1.0
                      && v185 >= 0.69999999
                      && (climbUpLedgeHeightDelta <= flMinHullHeightc
                       || v199 != 0x8000
                       || fabs((v182.z - vFeet.z) - climbUpLedgeHeightDelta) <= climbUpLedgeTolerance) )
                    {
                      wallTopLeft = vLedgePos;
                      wallTopRight = vLedgePos;
                      if ( maxBackUp > 4.0 )
                      {
                        v84 = 4.0;
                        backUpSoFara = 4.0;
                        v85 = COERCE_FLOAT(_mm_cvtsi128_si32(0x40800000u));
                        do
                        {
                          flMinHullHeighte = v84;
                          pSegd = v53;
                          wallTopRight.x = wallTopRight.x - (v84 * vClimbDirection.x);
                          wallTopRight.y = wallTopRight.y - (vClimbDirection.y * v84);
                          ledgeRight.x = wallTopRight.x + v53;
                          wallTopRight.z = wallTopRight.z - (vClimbDirection.z * v84);
                          ledgeRight.y = wallTopRight.y + v53;
                          ledgeRight.z = wallTopRight.z - flLedgeHeightIncrementa;
                          UTIL_TraceHull(
                            &wallTopRight,
                            &ledgeRight,
                            &vClimbHullMin,
                            &vClimbHullMax,
                            mask,
                            &filter,
                            &vNearClimbGoal);
                          v53 = pSegd;
                          v84 = flMinHullHeighte;
                          if ( this->m_bIsDebugging && NextBotDebugClimbing.m_pParent->m_Value.m_nValue != 0 )
                          {
                            v86 = (*(*v7 + 792LL))(v7);
                            ledgeRight.z = wallTopRight.z - v86;
                            ledgeRight.x = wallTopRight.x + pSegd;
                            ledgeRight.y = wallTopRight.y + pSegd;
                            NDebugOverlay::SweptBox(
                              &wallTopRight,
                              &ledgeRight,
                              &vClimbHullMin,
                              &vClimbHullMax,
                              &vec3_angle,
                              255,
                              v85,
                              0,
                              0,
                              255);
                            v53 = pSegd;
                            v84 = flMinHullHeighte;
                          }
                          if ( v188 >= 1.0 && v190 == 0 )
                            break;
                          if ( v185 < 0.69999999 )
                            break;
                          vLedgePos = v182;
                          v94 = maxBackUp <= (backUpSoFara + v84);
                          backUpSoFara = backUpSoFara + v84;
                        }
                        while ( !v94 );
                        v66 = v130;
                      }
                      flMinHullHeightm = v66;
                      pSege = v53;
                      ledgeLeft = vClimbHullMin;
                      vLedgePos.x = (flHalfSize * vClimbDirection.x) + vLedgePos.x;
                      vLedgePos.y = (vClimbDirection.y * flHalfSize) + vLedgePos.y;
                      vLedgePos.z = (vClimbDirection.z * flHalfSize) + vLedgePos.z;
                      UTIL_TraceHull(
                        &wallTopLeft,
                        &vLedgePos,
                        &ledgeLeft,
                        &vClimbHullMax,
                        mask,
                        &filter,
                        &vNearClimbGoal);
                      vLedgePos = v182;
                      ledgeRight.x = v182.x + pSege;
                      ledgeRight.y = v182.y + pSege;
                      ledgeRight.z = v182.z + 18.0;
                      UTIL_TraceHull(
                        &ledgeRight,
                        &vLedgePos,
                        &vClimbHullMin,
                        &vClimbHullMax,
                        mask,
                        &filter,
                        &vNearClimbGoal);
                      *&v92 = LODWORD(pSege);
                      *&v93 = LODWORD(flMinHullHeightm);
                      if ( v190 == 0 )
                      {
                        vLedgePos = v182;
                        *&v87 = LODWORD(v182.z);
                      }
                      if ( this->m_bIsDebugging )
                      {
                        if ( NextBotDebugClimbing.m_pParent->m_Value.m_nValue == 0 )
                          goto LABEL_100;
                        flMinHullHeightf = pSege;
                        pSegg = LODWORD(v93);
                        NDebugOverlay::SweptBox(
                          &vLedgePos,
                          &vLedgePos,
                          &vClimbHullMin,
                          &vClimbHullMax,
                          &vec3_angle,
                          0,
                          4.0,
                          255,
                          0,
                          255);
                        *&v87 = LODWORD(vLedgePos.x);
                        *&v88 = LODWORD(vLedgePos.y);
                        *&v93 = pSegg;
                        *&v92 = LODWORD(flMinHullHeightf);
                        *&v88 = (vLedgePos.y - wallTopLeft.y) * (vLedgePos.y - wallTopLeft.y);
                        *&v87 = ((vLedgePos.x - wallTopLeft.x) * (vLedgePos.x - wallTopLeft.x)) + *&v88;
                        if ( *&v87 > 0.1 )
                        {
                          NDebugOverlay::SweptBox(
                            &wallTopLeft,
                            &wallTopLeft,
                            &vClimbHullMin,
                            &vClimbHullMax,
                            &vec3_angle,
                            255,
                            4.0,
                            0,
                            0,
                            255);
                          m_bIsDebugging = this->m_bIsDebugging;
                          *&v92 = LODWORD(flMinHullHeightf);
                          *&v93 = pSegg;
                        }
                        else
                        {
                          m_bIsDebugging = this->m_bIsDebugging;
                        }
                        if ( m_bIsDebugging )
                        {
LABEL_100:
                          pSegf = *&v92;
                          flLedgeHeightb = *&v93;
                          v97 = CGlobalVarsBase::curtime(gpGlobals, 0);
                          DevMsg("%3.2f: STARTING LEDGE CLIMB UP\n", v97);
                          *&v93 = LODWORD(flLedgeHeightb);
                          *&v92 = LODWORD(pSegf);
                          if ( NextBotDebugClimbing.m_pParent->m_Value.m_nValue != 0 )
                          {
                            v131 = flLedgeHeightb;
                            NDebugOverlay::Cross3D(&vLedgePos, 10.0, 0, 0xFFu, 0, 1, 4.0);
                            v98 = pSegf;
                            v99 = (vClimbDirection.z * flHalfSize) + vFeet.z;
                            v100 = vFeet.x + (vClimbDirection.x * flHalfSize);
                            pSegi = vClimbDirection.x * flHalfSize;
                            v101 = (flHalfSize * vClimbDirection.y) + vFeet.y;
                            flMinHullHeightn = -vClimbDirection.y * flHalfSize;
                            flLedgeHeighte = flHalfSize * v98;
                            wallBottomRight.z = v99 - (flHalfSize * v98);
                            wallBottomLeft.x = v100 + flMinHullHeightn;
                            wallBottomLeft.z = v99 + (flHalfSize * v98);
                            wallBottomRight.x = v100 - flMinHullHeightn;
                            wallBottomLeft.y = (vClimbDirection.x * flHalfSize) + v101;
                            wallBottomRight.y = v101 - (vClimbDirection.x * flHalfSize);
                            wallTopRight.z = wallBottomRight.z + v131;
                            wallTopLeft.x = (v100 + flMinHullHeightn) + v98;
                            wallTopLeft.y = wallBottomLeft.y + v98;
                            wallTopLeft.z = wallBottomLeft.z + v131;
                            wallTopRight.x = (v100 - flMinHullHeightn) + v98;
                            wallTopRight.y = v98 + wallBottomRight.y;
                            NDebugOverlay::Triangle(
                              &wallBottomRight,
                              &wallBottomLeft,
                              &wallTopLeft,
                              0xFFu,
                              0x64u,
                              0,
                              4.0,
                              100,
                              1);
                            NDebugOverlay::Triangle(
                              &wallBottomRight,
                              &wallTopLeft,
                              &wallTopRight,
                              0xFFu,
                              0x64u,
                              0,
                              4.0,
                              100,
                              1);
                            ledgeLeft.x = flMinHullHeightn + vLedgePos.x;
                            ledgeRight.x = vLedgePos.x - flMinHullHeightn;
                            ledgeLeft.y = pSegi + vLedgePos.y;
                            ledgeRight.y = vLedgePos.y - pSegi;
                            ledgeLeft.z = flLedgeHeighte + vLedgePos.z;
                            ledgeRight.z = vLedgePos.z - flLedgeHeighte;
                            NDebugOverlay::Triangle(&wallTopRight, &wallTopLeft, &ledgeLeft, 0, 0x64u, 255, 4.0, 100, 1);
                            NDebugOverlay::Triangle(&wallTopRight, &ledgeLeft, &ledgeRight, 0, 0x64u, 255, 4.0, 100, 1);
                          }
                        }
                      }
                      return (*(*v7 + 544LL))(v7, &vLedgePos, &vClimbDirection, v114, v87, v88, v92, v89, v90, v91, v93);
                    }
                  }
                }
                else if ( v188 < 1.0 )
                {
                  bFoundWall = 1;
                  v82 = fmaxf((v67 + flMinLedgeDepth) + 0.1, v55);
                  v55 = v82;
                  if ( this->m_bIsDebugging )
                  {
                    flLedgeTopLookAheadRange = v82;
                    flMinHullHeightd = flLedgeHeight;
                    flLedgeHeighta = v53;
                    v83 = CGlobalVarsBase::curtime(gpGlobals, 0);
                    DevMsg("%3.2f: Climbing - found wall.\n", v83);
                    v53 = flLedgeHeighta;
                    v51 = flMinHullHeightd;
                    v55 = flLedgeTopLookAheadRange;
                    v66 = v130;
                    if ( NextBotDebugClimbing.m_pParent->m_Value.m_nValue != 0 )
                    {
                      ledgeRight.y = (20.0 * v184) + v182.y;
                      ledgeRight.z = (20.0 * v185) + v182.z;
                      ledgeRight.x = (20.0 * v183) + v182.x;
                      NDebugOverlay::HorzArrow(&v182, &ledgeRight, 5.0, 0xFFu, 0x64u, 0, 255, 4.0, 1);
                      v53 = flLedgeHeighta;
                      v51 = flMinHullHeightd;
                      v55 = flLedgeTopLookAheadRange;
                      v66 = v130;
                    }
                  }
                }
                else
                {
                  flMinHullHeightl = flLedgeHeight;
                  flLedgeHeightd = v53;
                  v68 = (*(*v8 + 768LL))(v8, v188, v67);
                  v66 = v130;
                  v53 = flLedgeHeightd;
                  v51 = flMinHullHeightl;
                  if ( v130 > v68 && backUpSoFar == 0 )
                  {
                    if ( !this->m_bIsDebugging )
                      return 0;
                    v69 = CGlobalVarsBase::curtime(gpGlobals, 0);
                    DevMsg("%3.2f: Climbing - skipping overhead climb we can walk/crawl under.\n", v69);
LABEL_62:
                    if ( this->m_bIsDebugging )
                    {
                      v70 = CGlobalVarsBase::curtime(gpGlobals, 0);
                      DevMsg("%3.2f: CANT FIND LEDGE TO CLIMB\n", v70);
                    }
                    return 0;
                  }
                }
              }
              v59 = v66 + flLedgeHeightIncrementa;
              if ( v59 >= pSegb )
              {
                if ( v49 != 0 )
                  goto LABEL_62;
                v59 = pSegb;
                v49 = 1;
              }
              x = vClimbHullMax.x;
              v58 = vClimbHullMin.x;
              y = vClimbHullMax.y;
              v57 = vClimbHullMin.y;
              z = vClimbHullMax.z;
              v56 = vClimbHullMin.z;
            }
          }
        }
        else
        {
          v114 = pObstacle;
        }
        if ( v199 != 0x8000 )
        {
          flMinHullHeightj = v44;
          v45 = (*(this->m_pBot->_vptr_INextBotEventResponder + 77))(this->m_pBot, v114);
          v44 = flMinHullHeightj;
          if ( v45 == 0 )
            return v11;
        }
        goto LABEL_46;
      }
    }
  }
  return v11;
}


// CPathFollower::JumpOverGaps  (line 1714, @0x0000000002f3f290, libserver.so)  // inlines: CGameTrace, GetBool, GetInt, NextBotTraversableTraceFilter, NextSegment, PriorSegment, RnCollisionAttr_t, VectorAdd, VectorMultiply, curtime, operator*, operator+
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CLocomotionBase::IsGap, NDebugOverlay::Cross3D, DevMsg(char const*,...)
// callers: CPathFollower::UpdateFollow
// strings: "%3.2f: GAP JUMP\n"
__int64 __fastcall CPathFollower::JumpOverGaps(
        CPathFollower *const this,
        const CPathSegment *pGoalSeg,
        const Vector *const vForward,
        const Vector *const vRight,
        __m128i flGoalRange)
{
  float v5; // r15d
  const CLocomotionBase *v7; // rbx
  __int64 v8; // r13
  __int64 result; // rax
  INextBot *m_pBot; // r14
  const CBaseEntity *v11; // rax
  float v12; // xmm0_4
  const CPathSegment *m_pGoal; // r13
  CNavPathNB *m_rPath; // rsi
  int m_nSegmentCount; // edi
  __int64 v16; // rax
  float v17; // xmm2_4
  __int64 v18; // rax
  int v19; // edi
  float i; // xmm1_4
  __int64 v21; // rax
  __int64 v22; // rax
  float v23; // xmm0_4
  __m128i x_low; // xmm3
  float v25; // r14d
  double v26; // xmm0_8
  float v27; // xmm1_4
  unsigned int v28; // eax
  CNavPathNB *v29; // rdx
  int v30; // ecx
  __int64 v31; // r13
  int *p_m_nAreaIndex; // rdx
  const Vector *v33; // r13
  const CPathSegment *v34; // r14
  _BOOL4 m_bIsDebugging; // r12d
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v37; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v39; // [rsp+0h] [rbp-158h]
  float v40; // [rsp+4h] [rbp-154h]
  unsigned int v41; // [rsp+4h] [rbp-154h]
  Vector pos; // [rsp+18h] [rbp-140h] BYREF
  NextBotTraversableTraceFilter filter; // [rsp+28h] [rbp-130h] BYREF
  trace_t v44; // [rsp+78h] [rbp-E0h] BYREF

  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(flGoalRange));
  v7 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot, pGoalSeg, vForward, vRight);
  v8 = (*(this->m_pBot->_vptr_INextBotEventResponder + 69))(this->m_pBot);
  if ( (*(v7->_vptr_INextBotEventResponder + 96))(v7) == 0 )
    return 0;
  if ( NextBotAllowGapJumping.m_pParent->m_Value.m_nValue == 0 )
    return 0;
  if ( (*(v7->_vptr_INextBotEventResponder + 71))(v7) != 0 )
    return 0;
  if ( (*(v7->_vptr_INextBotEventResponder + 91))(v7) != 0 )
    return 0;
  if ( (*(v7->_vptr_INextBotEventResponder + 83))(v7) == 0 )
    return 0;
  if ( (*(*v8 + 696LL))(v8, 0) == 0 )
    return 0;
  if ( this->m_pGoal == 0 )
    return 0;
  memset(&v44.m_ShapeAttributes, 0, 31);
  v44.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v44);
  m_pBot = this->m_pBot;
  v11 = (*(m_pBot->_vptr_INextBotEventResponder + 66))(m_pBot);
  CTraceFilterSimple::CTraceFilterSimple(&filter, v11, 4, 0);
  filter._vptr_CTraceFilter = off_47B2490;
  filter.m_bot = m_pBot;
  filter.m_when = CLocomotionBase::TraverseWhenType::IMMEDIATELY;
  (*(*v8 + 744LL))(v8);
  m_pGoal = this->m_pGoal;
  m_rPath = this->m_rPath;
  if ( m_pGoal == 0 )
    return 0;
  m_nSegmentCount = m_rPath->m_nSegmentCount;
  if ( m_nSegmentCount <= 0 )
    return 0;
  v16 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - m_rPath->m_path) >> 3);
  if ( v16 <= 0 || m_nSegmentCount <= v16 )
    return 0;
  v17 = v12 + v12;
  v18 = &m_rPath->m_path[v16 - 1];
  if ( *(v18 + 32) == 3 )
  {
    m_pGoal = v18;
  }
  else
  {
    if ( v5 > v17 )
      return 0;
    if ( m_pGoal->type != CPathSegment::SegmentType::PATH_SEG_JUMP_OVER_GAP )
    {
      v19 = m_nSegmentCount - 1;
      for ( i = v5 + m_pGoal->flLength; ; i = i + m_rPath->m_path[v21].flLength )
      {
        v22 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - m_rPath->m_path) >> 3);
        if ( v22 < 0 )
          break;
        if ( v22 >= v19 )
          break;
        v21 = v22 + 1;
        m_pGoal = &m_rPath->m_path[v21];
        if ( i > v17 )
          break;
        if ( m_rPath->m_path[v21].type == CPathSegment::SegmentType::PATH_SEG_JUMP_OVER_GAP )
          goto LABEL_25;
      }
      return 0;
    }
  }
LABEL_25:
  v23 = v12 * 0.5;
  x_low = LODWORD(m_pGoal->vForward.x);
  *x_low.m128i_i32 = *x_low.m128i_i32 * v23;
  v25 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v39 = m_pGoal->vForward.y * v23;
  v40 = v23 * m_pGoal->vForward.z;
  v26 = (*(v7->_vptr_INextBotEventResponder + 98))(v7);
  pos.z = v27 + v40;
  pos.y = v39 + *(&v26 + 1);
  pos.x = v25 + *&v26;
  LOBYTE(v28) = CLocomotionBase::IsGap(v7, &pos, &m_pGoal->vForward);
  if ( v28 == 0 )
    return 0;
  v29 = this->m_rPath;
  v30 = v29->m_nSegmentCount;
  if ( v30 <= 0 )
    return 0;
  v31 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - v29->m_path) >> 3);
  if ( v31 < 0 || v31 >= v30 - 1 )
    return 0;
  v41 = v28;
  p_m_nAreaIndex = &v29->m_path[v31].m_nAreaIndex;
  v33 = (p_m_nAreaIndex + 4);
  v34 = (p_m_nAreaIndex + 2);
  (*(v7->_vptr_INextBotEventResponder + 69))(v7, p_m_nAreaIndex + 4, p_m_nAreaIndex + 11);
  this->m_pGoal = v34;
  m_bIsDebugging = this->m_bIsDebugging;
  result = v41;
  if ( m_bIsDebugging )
  {
    NDebugOverlay::Cross3D(v33, 5.0, 0, 0xFFu, 0xFFu, 1, 5.0);
    m_flCurrentTime = 0.0;
    v37 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v37->m_flCurrentTime;
    }
    DevMsg("%3.2f: GAP JUMP\n", m_flCurrentTime);
    return m_bIsDebugging;
  }
  return result;
}


// CPathFollower::Draw  (line 1814, @0x0000000002f387b0, libserver.so)  // inlines: PriorSegment, QAngle, VectorAdd, VectorSubtract, operator+, operator-
// calls: NDebugOverlay::SweptBox, NDebugOverlay::Sphere, NDebugOverlay::Line
void __fastcall CPathFollower::Draw(const CPathFollower *const this, const CPathSegment *pStartSeg)
{
  bool v3; // zf
  Vector *p_m_hullMax; // r13
  Vector *p_m_hullMin; // r12
  Vector *p_m_vLeftTo; // rsi
  Vector *p_m_vLeftFrom; // rdi
  Vector *p_m_rightTo; // rsi
  Vector *p_m_rightFrom; // rdi
  const CPathSegment *m_pGoal; // rdi
  const CPathSegment *v11; // rax
  float flPortalHalfWidth; // xmm1_4
  float y; // xmm2_4
  vec_t v14; // xmm5_4
  float z; // xmm0_4
  const CPathSegment *v16; // rsi
  CNavPathNB *m_rPath; // rdi
  int m_nSegmentCount; // edx
  __int64 v19; // rax
  float x; // xmm3_4
  vec_t v21; // xmm4_4
  vec_t v22; // xmm3_4
  Vector origin; // [rsp+20h] [rbp-40h] BYREF
  QAngle angles; // [rsp+30h] [rbp-30h] BYREF

  if ( this->m_bDidAvoidCheck )
  {
    v3 = !this->m_isLeftClear;
    p_m_hullMax = &this->m_hullMax;
    angles.x = 0.0;
    angles.y = 0.0;
    p_m_hullMin = &this->m_hullMin;
    angles.z = 0.0;
    p_m_vLeftTo = &this->m_vLeftTo;
    p_m_vLeftFrom = &this->m_vLeftFrom;
    if ( v3 )
      NDebugOverlay::SweptBox(p_m_vLeftFrom, p_m_vLeftTo, p_m_hullMin, p_m_hullMax, &angles, 255, 0.1, 0, 0, 255);
    else
      NDebugOverlay::SweptBox(p_m_vLeftFrom, p_m_vLeftTo, p_m_hullMin, p_m_hullMax, &angles, 0, 0.1, 255, 0, 255);
    p_m_rightTo = &this->m_rightTo;
    p_m_rightFrom = &this->m_rightFrom;
    if ( this->m_isRightClear )
      NDebugOverlay::SweptBox(p_m_rightFrom, p_m_rightTo, p_m_hullMin, p_m_hullMax, &angles, 0, 0.1, 255, 0, 255);
    else
      NDebugOverlay::SweptBox(p_m_rightFrom, p_m_rightTo, p_m_hullMin, p_m_hullMax, &angles, 255, 0.1, 0, 0, 255);
    this->m_bDidAvoidCheck = 0;
  }
  m_pGoal = this->m_pGoal;
  if ( m_pGoal == 0 )
    goto LABEL_19;
  NDebugOverlay::Sphere(&m_pGoal->vPos, COERCE_DOUBLE(1084227584), 0xFFu, 0xFFu, 0, 1, 0.1);
  v11 = this->m_pGoal;
  if ( v11->how == NavTraverseType::GO_NORTH || v11->how == NavTraverseType::GO_SOUTH )
  {
    x = v11->vPortalCenter.x;
    v21 = v11->flPortalHalfWidth + x;
    z = v11->vPortalCenter.z;
    v22 = x - v11->flPortalHalfWidth;
    origin.y = v11->vPortalCenter.y;
    angles.x = v21;
    origin.x = v22;
    angles.y = origin.y + 0.0;
    angles.z = z + 0.0;
  }
  else
  {
    flPortalHalfWidth = v11->flPortalHalfWidth;
    y = v11->vPortalCenter.y;
    v14 = v11->vPortalCenter.x + 0.0;
    z = v11->vPortalCenter.z;
    origin.x = v11->vPortalCenter.x;
    angles.x = v14;
    angles.z = z + 0.0;
    angles.y = flPortalHalfWidth + y;
    origin.y = y - flPortalHalfWidth;
  }
  origin.z = z;
  NDebugOverlay::Line(&origin, &angles, 0xFFu, 0, 0xFFu, 1, 0.1);
  v16 = this->m_pGoal;
  m_rPath = this->m_rPath;
  if ( v16 != 0 )
  {
    m_nSegmentCount = m_rPath->m_nSegmentCount;
    if ( m_nSegmentCount > 0 )
    {
      v19 = 0x2E8BA2E8BA2E8BA3LL * ((v16 - m_rPath->m_path) >> 3);
      if ( v19 > 0 && m_nSegmentCount > v19 )
      {
        NDebugOverlay::Line(&m_rPath->m_path[v19 - 1].vPos, &v16->vPos, 0xFFu, 0xFFu, 0, 1, 0.1);
LABEL_19:
        m_rPath = this->m_rPath;
      }
    }
  }
  (*(m_rPath->_vptr_CPathData + 4))(m_rPath, 0, 0.0);
}


// CPathFollower::IsDiscontinuityAhead  (line 1865, @0x0000000002f401f0, libserver.so)  // inlines: FastSqrt, Length, NextSegment, PriorSegment, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// callers: CPathFollowerDirect::DirectChase, PlayerLocomotion::IsClimbPossible
__int64 __fastcall CPathFollower::IsDiscontinuityAhead(
        const CPathFollower *const this,
        __int64 pBot,
        CPathSegment::SegmentType type,
        float flRange)
{
  const CPathSegment *m_pGoal; // rax
  CNavPathNB *m_rPath; // rdx
  int m_nSegmentCount; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  double v11; // xmm0_8
  const CPathSegment *v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  CNavPathNB *v15; // r8
  int v16; // esi
  float v17; // xmm1_4
  int v19; // esi
  __int64 v20; // rax

  m_pGoal = this->m_pGoal;
  if ( m_pGoal == 0 )
    return 0;
  m_rPath = this->m_rPath;
  m_nSegmentCount = m_rPath->m_nSegmentCount;
  if ( m_nSegmentCount > 0 )
  {
    pBot = 0x2E8BA2E8BA2E8BA3LL;
    v9 = 0x2E8BA2E8BA2E8BA3LL * ((m_pGoal - m_rPath->m_path) >> 3);
    if ( v9 > 0 && m_nSegmentCount > v9 && m_rPath->m_path[v9 - 1].type == type )
      return 1;
  }
  v10 = (*(this->m_pBot->_vptr_INextBotEventResponder + 68))(this->m_pBot, pBot);
  v11 = (*(*v10 + 784LL))(v10);
  v12 = this->m_pGoal;
  v14 = fsqrt(
          (((v12->vPos.x - *&v11) * (v12->vPos.x - *&v11)) + ((v12->vPos.y - *(&v11 + 1)) * (v12->vPos.y - *(&v11 + 1))))
        + ((v12->vPos.z - v13) * (v12->vPos.z - v13)));
  if ( v14 >= flRange )
    return 0;
  if ( type != v12->type )
  {
    v15 = this->m_rPath;
    v16 = v15->m_nSegmentCount;
    v17 = v14 + v12->flLength;
    if ( v16 > 0 )
    {
      v19 = v16 - 1;
      while ( 1 )
      {
        v20 = 0x2E8BA2E8BA2E8BA3LL * ((v12 - v15->m_path) >> 3);
        if ( v20 < 0 )
          break;
        if ( v20 >= v19 )
          break;
        v12 = &v15->m_path[v20 + 1];
        if ( v17 >= flRange )
          break;
        if ( type == v12->type )
          return 1;
        v17 = v17 + v12->flLength;
      }
    }
    return 0;
  }
  return 1;
}


// CPathFollower::NotifyPathTarget  (line 1902, @0x0000000002f40c80, libserver.so)
// callers: CPathFollower::UpdatePathAndFollow
void __fastcall CPathFollower::NotifyPathTarget(CPathFollower *const this)
{
  ;
}


