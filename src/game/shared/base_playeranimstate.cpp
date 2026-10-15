// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/base_playeranimstate.cpp:151
struct FlexToPose {
	const char * flexController;  // +0x0
	const char * poseParameter;  // +0x8

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBasePlayerAnimState::CBasePlayerAnimState  (line 90, @0x00000000021693e0, libserver.so)  // inlines: CSequenceTransitioner, CUtlMemory, CUtlVector, CUtlVectorBase, HSequence, Init
// calls: CountdownTimer::CountdownTimer
void __fastcall CBasePlayerAnimState::CBasePlayerAnimState(
        CBasePlayerAnimState *const this,
        const void **const __vtt_parm)
{
  CountdownTimer *p_m_poseParamCacheTimer; // rdi
  _QWORD *v4; // rax

  p_m_poseParamCacheTimer = &this->m_poseParamCacheTimer;
  v4 = *__vtt_parm;
  p_m_poseParamCacheTimer[-2]._vptr_CountdownTimer = *__vtt_parm;
  *(&p_m_poseParamCacheTimer[-2]._vptr_CountdownTimer + *(v4 - 9)) = __vtt_parm[1];
  CountdownTimer::CountdownTimer(p_m_poseParamCacheTimer);
  this->m_bCurrentFeetYawInitialized = 0;
  this->m_poseParamMoveX = -1;
  this->m_poseParamMoveY = -1;
  this->m_poseParamMoveYaw = -1;
  this->m_poseParamHeadPitch = -1;
  this->m_poseParamBodyPitch = -1;
  this->m_poseParamHeadYaw = -1;
  this->m_poseParamBodyYaw = -1;
  this->m_hCurrent8WayIdleSequence.m_Data = -1;
  this->m_hCurrent8WayCrouchIdleSequence.m_Data = -1;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Size = 0;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_pMemory = 0;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nAllocationCount = 0;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Size = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_pMemory = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nAllocationCount = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize = 0;
  this->m_flEyeYaw = 0.0;
  this->m_flEyePitch = 0.0;
  this->m_flCurrentTorsoYaw = 0.0;
  this->m_flMaxGroundSpeed = 0.0;
  *&this->m_flGaitYaw = 0;
  this->m_flGoalFeetYaw = 0.0;
  this->m_isBackpedaling = 0;
  this->m_flCurrentFeetYaw = 0.0;
  this->m_flLastYaw = 0.0;
  this->m_flLastTurnTime = 0.0;
  this->m_angRender.x = 0.0;
  this->m_angRender.y = 0.0;
  this->m_angRender.z = 0.0;
  this->m_vLastMovePose.x = 0.0;
  this->m_vLastMovePose.y = 0.0;
  this->m_flLastBodyHeadTurnTime = 0.0;
  this->m_flLastEyeYaw = 0.0;
  this->m_flSnapBodyToEyesTime = 0.0;
  this->m_pOuter = 0;
  this->m_pOuterFlex = 0;
  this->m_eCurrentMainSequenceActivity = 1;
  this->m_flLastAnimationStateClearTime = 0.0;
}


// CBasePlayerAnimState::CBasePlayerAnimState  (line 90, @0x0000000002169550, libserver.so)  // inlines: CSequenceTransitioner, CUtlMemory, CUtlVector, CUtlVectorBase, HSequence, Init
// calls: CountdownTimer::CountdownTimer
void __fastcall CBasePlayerAnimState::CBasePlayerAnimState(CBasePlayerAnimState *const this)
{
  CountdownTimer *p_m_poseParamCacheTimer; // rdi

  p_m_poseParamCacheTimer = &this->m_poseParamCacheTimer;
  p_m_poseParamCacheTimer[-2]._vptr_CountdownTimer = off_4002388;
  CountdownTimer::CountdownTimer(p_m_poseParamCacheTimer);
  this->m_bCurrentFeetYawInitialized = 0;
  this->m_poseParamMoveX = -1;
  this->m_poseParamMoveY = -1;
  this->m_poseParamMoveYaw = -1;
  this->m_poseParamHeadPitch = -1;
  this->m_poseParamBodyPitch = -1;
  this->m_poseParamHeadYaw = -1;
  this->m_poseParamBodyYaw = -1;
  this->m_hCurrent8WayIdleSequence.m_Data = -1;
  this->m_hCurrent8WayCrouchIdleSequence.m_Data = -1;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Size = 0;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_pMemory = 0;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nAllocationCount = 0;
  this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Size = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_pMemory = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nAllocationCount = 0;
  this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize = 0;
  this->m_flEyeYaw = 0.0;
  this->m_flEyePitch = 0.0;
  this->m_flCurrentTorsoYaw = 0.0;
  this->m_flMaxGroundSpeed = 0.0;
  *&this->m_flGaitYaw = 0;
  this->m_flGoalFeetYaw = 0.0;
  this->m_isBackpedaling = 0;
  this->m_flCurrentFeetYaw = 0.0;
  this->m_flLastYaw = 0.0;
  this->m_flLastTurnTime = 0.0;
  this->m_angRender.x = 0.0;
  this->m_angRender.y = 0.0;
  this->m_angRender.z = 0.0;
  this->m_vLastMovePose.x = 0.0;
  this->m_vLastMovePose.y = 0.0;
  this->m_flLastBodyHeadTurnTime = 0.0;
  this->m_flLastEyeYaw = 0.0;
  this->m_flSnapBodyToEyesTime = 0.0;
  this->m_pOuter = 0;
  this->m_pOuterFlex = 0;
  this->m_eCurrentMainSequenceActivity = 1;
  this->m_flLastAnimationStateClearTime = 0.0;
}


// CBasePlayerAnimState::~CBasePlayerAnimState  (line 123, @0x0000000002168150, libserver.so)  // inlines: Purge, ~CSequenceTransitioner, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >::RemoveAll, CUtlMemory<CAnimationLayer, int>::Purge
void __fastcall CBasePlayerAnimState::~CBasePlayerAnimState(CBasePlayerAnimState *const this)
{
  *this->gap0 = off_4002388;
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_SequenceTransitioner.m_animationQueue);
  if ( (this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAnimationLayer,int>::Purge(&this->m_SequenceTransitioner.m_animationQueue.m_Memory);
    if ( (this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAnimationLayer,int>::Purge(&this->m_SequenceTransitioner.m_animationQueue.m_Memory);
  }
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_IdleSequenceTransitioner.m_animationQueue);
  if ( (this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAnimationLayer,int>::Purge(&this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory);
    if ( (this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAnimationLayer,int>::Purge(&this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory);
  }
}


// CBasePlayerAnimState::~CBasePlayerAnimState  (line 123, @0x00000000021681f0, libserver.so)  // inlines: Purge, ~CSequenceTransitioner, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >::RemoveAll, CUtlMemory<CAnimationLayer, int>::Purge
void __fastcall CBasePlayerAnimState::~CBasePlayerAnimState(
        CBasePlayerAnimState *const this,
        const void **const __vtt_parm)
{
  _QWORD *v2; // rax
  CSequenceTransitioner *p_m_SequenceTransitioner; // rdi

  v2 = *__vtt_parm;
  p_m_SequenceTransitioner = &this->m_SequenceTransitioner;
  p_m_SequenceTransitioner[-7].m_animationQueue.m_Memory.m_pMemory = *__vtt_parm;
  *(&p_m_SequenceTransitioner[-6] + *(v2 - 9) - 32) = __vtt_parm[1];
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&p_m_SequenceTransitioner->m_animationQueue);
  if ( (this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAnimationLayer,int>::Purge(&this->m_SequenceTransitioner.m_animationQueue.m_Memory);
    if ( (this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAnimationLayer,int>::Purge(&this->m_SequenceTransitioner.m_animationQueue.m_Memory);
  }
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_IdleSequenceTransitioner.m_animationQueue);
  if ( (this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAnimationLayer,int>::Purge(&this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory);
    if ( (this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAnimationLayer,int>::Purge(&this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory);
  }
}


// CBasePlayerAnimState::~CBasePlayerAnimState  (line 123, @0x00000000021682a0, libserver.so)  // inlines: Purge, ~CBasePlayerAnimState, ~CSequenceTransitioner, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >::RemoveAll, operator delete, CUtlMemory<CAnimationLayer, int>::Purge
void __fastcall CBasePlayerAnimState::~CBasePlayerAnimState(CBasePlayerAnimState *const this)
{
  *this->gap0 = off_4002388;
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_SequenceTransitioner.m_animationQueue);
  if ( (this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAnimationLayer,int>::Purge(&this->m_SequenceTransitioner.m_animationQueue.m_Memory);
    if ( (this->m_SequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAnimationLayer,int>::Purge(&this->m_SequenceTransitioner.m_animationQueue.m_Memory);
  }
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_IdleSequenceTransitioner.m_animationQueue);
  if ( (this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CAnimationLayer,int>::Purge(&this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory),
        (this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<CAnimationLayer,int>::Purge(&this->m_IdleSequenceTransitioner.m_animationQueue.m_Memory);
    operator delete(this);
  }
}


// CBasePlayerAnimState::Init  (line 128, @0x000000000214d590, libserver.so)
// calls: CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingOverlayController::SetOrderIsExternallyControlled, __dynamic_cast
// globals: `typeinfo for'CBaseFlex
void __fastcall CBasePlayerAnimState::Init(
        CBasePlayerAnimState *const this,
        CBaseAnimatingOverlay *pPlayer,
        const CModAnimConfig *const config)
{
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  CBaseAnimatingOverlay *m_pOuter; // rdi
  CBaseFlex *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  this->m_pOuter = pPlayer;
  BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(pPlayer);
  CBaseAnimatingOverlayController::SetOrderIsExternallyControlled(BaseAnimatingOverlayController, 1);
  m_pOuter = this->m_pOuter;
  if ( m_pOuter != 0 )
    v7 = __dynamic_cast(m_pOuter, &`typeinfo for'CBaseAnimatingOverlay, &`typeinfo for'CBaseFlex, 0);
  else
    v7 = 0;
  this->m_pOuterFlex = v7;
  v8 = *&config->m_LegAnimType;
  *&this->m_AnimConfig.m_flMaxBodyYawDegrees = *&config->m_flMaxBodyYawDegrees;
  v9 = *this->gap0;
  *&this->m_AnimConfig.m_LegAnimType = v8;
  (*(v9 + 24))(this);
}


// CBasePlayerAnimState::Release  (line 145, @0x000000000213ccc0, libserver.so)
void __fastcall CBasePlayerAnimState::Release(CBasePlayerAnimState *const this)
{
  if ( this != 0 )
    (*(*this->gap0 + 56LL))(this);
}


// CBasePlayerAnimState::OnNewModel  (line 165, @0x0000000002168010, libserver.so)  // inlines: NetworkStateChanged, RemoveAll, Set, Start, operator=<float>
// calls: CBaseFlex::FindFlexController, CBaseAnimating::LookupPoseParameter, CountdownTimer::Now, CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >::RemoveAll
// globals: CBaseButton::DrawDebugTextOverlays(ulong long,int)::pszStates, s_flexToPose
void __fastcall CBasePlayerAnimState::OnNewModel(CBasePlayerAnimState *const this)
{
  const FlexToPose *v1; // r12
  CBasePlayerAnimState *v3; // r13
  CBaseFlex *m_pOuterFlex; // rdi
  const char *flexController; // rsi
  float v6; // xmm0_4
  float v7; // [rsp+Ch] [rbp-24h]

  v1 = s_flexToPose;
  v3 = this;
  m_pOuterFlex = this->m_pOuterFlex;
  if ( m_pOuterFlex != 0 )
  {
    while ( 1 )
    {
      flexController = v1->flexController;
      ++v1;
      v3 = (v3 + 4);
      LODWORD(v3->m_flStoredCycle) = CBaseFlex::FindFlexController(m_pOuterFlex, flexController);
      v3->m_flexControllers[3] = CBaseAnimating::LookupPoseParameter(this->m_pOuterFlex, v1[-1].poseParameter);
      if ( v1 == CBaseButton::DrawDebugTextOverlays(unsigned long long,int)::pszStates )
        break;
      m_pOuterFlex = this->m_pOuterFlex;
    }
  }
  v6 = CountdownTimer::Now(&this->m_poseParamCacheTimer) + 1.0;
  if ( v6 != this->m_poseParamCacheTimer.m_timestamp.m_Value )
  {
    v7 = v6;
    (*(this->m_poseParamCacheTimer._vptr_CountdownTimer + 2))(
      &this->m_poseParamCacheTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_poseParamCacheTimer.m_timestamp.m_Value = v7;
  }
  if ( this->m_poseParamCacheTimer.m_duration.m_Value != 1.0 )
  {
    (*(this->m_poseParamCacheTimer._vptr_CountdownTimer + 2))(
      &this->m_poseParamCacheTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_poseParamCacheTimer.m_duration.m_Value = 1.0;
  }
  (*(*this->gap0 + 184LL))(this);
  (*(*this->gap0 + 24LL))(this);
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_IdleSequenceTransitioner.m_animationQueue);
  CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_SequenceTransitioner.m_animationQueue);
}


// CBasePlayerAnimState::CachePoseParameters  (line 186, @0x000000000213e240, libserver.so)
// calls: CBaseAnimating::LookupPoseParameter
// strings: "move_x", "move_y", "move_yaw", "head_pitch", "body_pitch", "head_yaw" (7 total)
void __fastcall CBasePlayerAnimState::CachePoseParameters(CBasePlayerAnimState *const this)
{
  int v2; // eax
  CBaseAnimatingOverlay *m_pOuter; // rdi
  int v4; // eax
  CBaseAnimatingOverlay *v5; // rdi
  int v6; // eax
  CBaseAnimatingOverlay *v7; // rdi
  int v8; // eax
  CBaseAnimatingOverlay *v9; // rdi
  int v10; // eax
  CBaseAnimatingOverlay *v11; // rdi
  int v12; // eax
  CBaseAnimatingOverlay *v13; // rdi

  v2 = CBaseAnimating::LookupPoseParameter(this->m_pOuter, "move_x");
  m_pOuter = this->m_pOuter;
  this->m_poseParamMoveX = v2;
  v4 = CBaseAnimating::LookupPoseParameter(m_pOuter, "move_y");
  v5 = this->m_pOuter;
  this->m_poseParamMoveY = v4;
  v6 = CBaseAnimating::LookupPoseParameter(v5, "move_yaw");
  v7 = this->m_pOuter;
  this->m_poseParamMoveYaw = v6;
  v8 = CBaseAnimating::LookupPoseParameter(v7, "head_pitch");
  v9 = this->m_pOuter;
  this->m_poseParamHeadPitch = v8;
  v10 = CBaseAnimating::LookupPoseParameter(v9, "body_pitch");
  v11 = this->m_pOuter;
  this->m_poseParamBodyPitch = v10;
  v12 = CBaseAnimating::LookupPoseParameter(v11, "head_yaw");
  v13 = this->m_pOuter;
  this->m_poseParamHeadYaw = v12;
  this->m_poseParamBodyYaw = CBaseAnimating::LookupPoseParameter(v13, "body_yaw");
}


// CBasePlayerAnimState::ClearAnimationState  (line 198, @0x0000000002143b80, libserver.so)  // inlines: curtime
void __fastcall CBasePlayerAnimState::ClearAnimationState(CBasePlayerAnimState *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  (*(*this->gap0 + 64LL))(this);
  this->m_bCurrentFeetYawInitialized = 0;
  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  this->m_flLastAnimationStateClearTime = m_flCurrentTime;
}


// CBasePlayerAnimState::TimeSinceLastAnimationStateClear  (line 206, @0x000000000214d610, libserver.so)  // inlines: curtime
float __fastcall CBasePlayerAnimState::TimeSinceLastAnimationStateClear(const CBasePlayerAnimState *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  return m_flCurrentTime - this->m_flLastAnimationStateClearTime;
}


// CBasePlayerAnimState::IsDebugPlayer  (line 212, @0x000000000214d670, libserver.so)  // inlines: GetInt, entindex
// calls: CEntityInstance::GetEntityIndex
// callers: CBasePlayerAnimState::Update
bool __fastcall CBasePlayerAnimState::IsDebugPlayer(const CBasePlayerAnimState *const this)
{
  int m_nValue; // ebx

  m_nValue = sv_showanimstate.m_pParent->m_Value.m_nValue;
  return CEntityInstance::GetEntityIndex(this->m_pOuter).m_Data == m_nValue;
}


// CBasePlayerAnimState::Update  (line 263, @0x000000000214de10, libserver.so)  // inlines: Invalidate, IsElapsed, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now, CBaseAnimating::GetModelPtr, AngleNormalize, CBasePlayerAnimState::ComputePlaybackRate, CBasePlayerAnimState::IsDebugPlayer
void __fastcall CBasePlayerAnimState::Update(CBasePlayerAnimState *const this, double a2, float eyeYaw, float eyePitch)
{
  float v5; // xmm0_4
  const CModel *ModelPtr; // r12
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // [rsp+4h] [rbp-24h]

  (*(*this->gap0 + 64LL))(this, a2, eyeYaw, eyePitch);
  if ( (*(*this->gap0 + 72LL))(this) != 0 )
  {
    if ( this->m_poseParamCacheTimer.m_timestamp.m_Value > 0.0
      && CountdownTimer::Now(&this->m_poseParamCacheTimer) >= this->m_poseParamCacheTimer.m_timestamp.m_Value )
    {
      (*(*this->gap0 + 184LL))(this);
      if ( this->m_poseParamCacheTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_poseParamCacheTimer._vptr_CountdownTimer + 2))(
          &this->m_poseParamCacheTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          -1.0);
        this->m_poseParamCacheTimer.m_timestamp.m_Value = -1.0;
      }
      if ( this->m_poseParamMoveX < 0 || this->m_poseParamMoveY < 0 )
      {
        v5 = CountdownTimer::Now(&this->m_poseParamCacheTimer) + 1.0;
        if ( v5 != this->m_poseParamCacheTimer.m_timestamp.m_Value )
        {
          v11 = v5;
          (*(this->m_poseParamCacheTimer._vptr_CountdownTimer + 2))(
            &this->m_poseParamCacheTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_poseParamCacheTimer.m_timestamp.m_Value = v11;
        }
        if ( this->m_poseParamCacheTimer.m_duration.m_Value != 1.0 )
        {
          (*(this->m_poseParamCacheTimer._vptr_CountdownTimer + 2))(
            &this->m_poseParamCacheTimer,
            8,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_poseParamCacheTimer.m_duration.m_Value = 1.0;
        }
      }
    }
    ModelPtr = CBaseAnimating::GetModelPtr(this->m_pOuter);
    if ( ModelPtr != 0 )
    {
      this->m_flEyeYaw = AngleNormalize(v7);
      v9 = AngleNormalize(v8);
      v10 = *this->gap0;
      this->m_flEyePitch = v9;
      (*(v10 + 216))(this, &this->m_AnimConfig);
      (*(*this->gap0 + 80LL))(this, ModelPtr);
      (*(*this->gap0 + 240LL))(this, ModelPtr);
      (*(*this->gap0 + 248LL))(this);
      (*(*this->gap0 + 232LL))(this, ModelPtr);
      (*(*this->gap0 + 256LL))(this, ModelPtr);
      CBasePlayerAnimState::ComputePlaybackRate(this);
      if ( CBasePlayerAnimState::IsDebugPlayer(this) )
        (*(*this->gap0 + 144LL))(this, 45);
    }
  }
  else
  {
    (*(*this->gap0 + 24LL))(this);
  }
}


// CBasePlayerAnimState::ShouldUpdateAnimState  (line 335, @0x000000000213ccf0, libserver.so)  // inlines: GetOuter
bool __fastcall CBasePlayerAnimState::ShouldUpdateAnimState(CBasePlayerAnimState *const this)
{
  return (*(this->m_pOuter->_vptr_IHandleEntity + 139))(this->m_pOuter);
}


// CBasePlayerAnimState::ShouldChangeSequences  (line 343, @0x000000000213cd10, libserver.so)
bool __fastcall CBasePlayerAnimState::ShouldChangeSequences(const CBasePlayerAnimState *const this)
{
  return 1;
}


// CBasePlayerAnimState::SetOuterPoseParameter  (line 349, @0x000000000214d6a0, libserver.so)
// calls: CBaseAnimating::SetPoseParameter
float __fastcall CBasePlayerAnimState::SetOuterPoseParameter(
        CBasePlayerAnimState *const this,
        int iParam,
        double a3,
        float flValue)
{
  return CBaseAnimating::SetPoseParameter(this->m_pOuter, iParam, a3, flValue);
}


// CBasePlayerAnimState::ClearAnimationLayers  (line 356, @0x000000000213e4a0, libserver.so)
// calls: CBaseAnimatingOverlay::SetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay, CAnimationLayer::SetOrder, CAnimationLayer::ClearFlags, CBaseAnimatingOverlay::GetNumAnimOverlays
void __fastcall CBasePlayerAnimState::ClearAnimationLayers(CBasePlayerAnimState *const this)
{
  CBaseAnimatingOverlay *m_pOuter; // rdi
  int v3; // ebx
  CAnimationLayer *AnimOverlay; // rax
  int v5; // esi
  CAnimationLayer *v6; // rax

  m_pOuter = this->m_pOuter;
  if ( m_pOuter != 0 )
  {
    v3 = 0;
    CBaseAnimatingOverlay::SetNumAnimOverlays(m_pOuter, 5);
    while ( v3 < CBaseAnimatingOverlay::GetNumAnimOverlays(this->m_pOuter) )
    {
      AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, v3);
      CAnimationLayer::SetOrder(AnimOverlay, 15, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
      v5 = v3++;
      v6 = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, v5);
      CAnimationLayer::ClearFlags(v6);
    }
  }
}


// CBasePlayerAnimState::RestartMainSequence  (line 373, @0x000000000214d6b0, libserver.so)  // inlines: GetOuter, curtime
// calls: CBaseEntity::SetAnimTime, CBaseAnimating::SetCycle
void __fastcall CBasePlayerAnimState::RestartMainSequence(CBasePlayerAnimState *const this)
{
  float v1; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CBaseAnimatingOverlay *m_pOuter; // r12
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // xmm1_4

  m_flCurrentTime = 0.0;
  m_pOuter = this->m_pOuter;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(m_pOuter, m_flCurrentTime, v1, 0);
  CBaseAnimating::SetCycle(m_pOuter, 0.0, v6);
}


// CBasePlayerAnimState::OnMainActivityChanged  (line 389, @0x000000000213cd20, libserver.so)
void __fastcall CBasePlayerAnimState::OnMainActivityChanged(
        CBasePlayerAnimState *const this,
        Activity newActivity,
        Activity oldActivity)
{
  this->m_eCurrentMainSequenceActivity = newActivity;
}


// CBasePlayerAnimState::ComputeSequences  (line 410, @0x000000000214dd00, libserver.so)  // inlines: UpdateInterpolators
// calls: CBasePlayerAnimState::ComputeMainSequence, CBasePlayerAnimState::ComputeAimSequence
void __fastcall CBasePlayerAnimState::ComputeSequences(CBasePlayerAnimState *const this, const CModel *pStudioHdr)
{
  float v3; // xmm0_4
  bool v4; // zf

  CBasePlayerAnimState::ComputeMainSequence(this);
  v3 = (*(*this->gap0 + 136LL))(this);
  v4 = !this->m_AnimConfig.m_bUseAimSequences;
  this->m_flMaxGroundSpeed = v3;
  if ( !v4 )
    CBasePlayerAnimState::ComputeAimSequence(this);
}


// CBasePlayerAnimState::ResetGroundSpeed  (line 432, @0x000000000213cd40, libserver.so)
void __fastcall CBasePlayerAnimState::ResetGroundSpeed(CBasePlayerAnimState *const this)
{
  this->m_flMaxGroundSpeed = (*(*this->gap0 + 136LL))(this);
}


// CBasePlayerAnimState::ComputeMainSequence  (line 437, @0x000000000214d710, libserver.so)  // inlines: GetCycle, GetOuter, GetSequence, ResetSequence, ToBasePlayer
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::GetSequenceActivity
// callers: CBasePlayerAnimState::ComputeSequences
void __fastcall CBasePlayerAnimState::ComputeMainSequence(CBasePlayerAnimState *const this)
{
  CBaseAnimatingOverlay *m_pOuter; // r12
  unsigned int v3; // eax
  unsigned int m_eCurrentMainSequenceActivity; // r14d
  unsigned int v5; // eax
  __int64 v6; // rdx
  HSequence v7; // r13d
  unsigned __int8 (__fastcall *v8)(CBasePlayerAnimState *const, _QWORD, _QWORD); // r15
  const CBaseAnimatingController *BaseAnimatingController; // rax
  unsigned int v10; // eax
  float m_Value; // ebx
  CBaseAnimatingController *v12; // rax
  CBaseAnimatingOverlay *v13; // rbx
  void (__fastcall *v14)(CBaseAnimatingOverlay *, _QWORD, _QWORD); // r15
  unsigned int SequenceActivity; // eax
  CBaseAnimatingController *v16; // rax

  m_pOuter = this->m_pOuter;
  v3 = (*(*this->gap0 + 88LL))(this);
  m_eCurrentMainSequenceActivity = this->m_eCurrentMainSequenceActivity;
  v5 = (*(*this->gap0 + 160LL))(this, v3);
  v6 = *this->gap0;
  this->m_eCurrentMainSequenceActivity = v5;
  v7.m_Data = (*(v6 + 176))(this, v5);
  v8 = *(*this->gap0 + 304LL);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(m_pOuter);
  v10 = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  if ( v8(this, v10, v7.m_Data) != 0 )
  {
    if ( v7.m_Data == -1 )
      v7.m_Data = 0;
    m_Value = CBaseAnimating::GetBaseAnimatingController(m_pOuter)->m_baseLayer.m_flCycle.m_Value;
    if ( (*(m_pOuter->_vptr_IHandleEntity + 225))(m_pOuter) != 0 )
    {
      v12 = CBaseAnimating::GetBaseAnimatingController(m_pOuter);
      (*(v12->_vptr_CSkeletonAnimationController + 23))(v12, v7.m_Data, 1);
      if ( (*(m_pOuter->_vptr_IHandleEntity + 140))(m_pOuter) == 0 )
        return;
      goto LABEL_6;
    }
    v16 = CBaseAnimating::GetBaseAnimatingController(m_pOuter);
    (*(v16->_vptr_CSkeletonAnimationController + 23))(v16, v7.m_Data, 1);
    if ( (*(m_pOuter->_vptr_IHandleEntity + 140))(m_pOuter) != 0 )
    {
      if ( m_Value < 0.99000001 )
      {
        v13 = 0;
        if ( (*(m_pOuter->_vptr_IHandleEntity + 140))(m_pOuter) != 0 )
          v13 = m_pOuter;
        v14 = *(v13->_vptr_IHandleEntity + 427);
        goto LABEL_9;
      }
LABEL_6:
      v13 = 0;
      if ( (*(m_pOuter->_vptr_IHandleEntity + 140))(m_pOuter) != 0 )
        v13 = m_pOuter;
      v14 = *(v13->_vptr_IHandleEntity + 426);
LABEL_9:
      SequenceActivity = CBaseAnimating::GetSequenceActivity(m_pOuter, v7);
      v14(v13, SequenceActivity, m_eCurrentMainSequenceActivity);
    }
  }
}


// CBasePlayerAnimState::ShouldResetMainSequence  (line 491, @0x000000000213e510, libserver.so)  // inlines: GetOuter
// calls: CBaseAnimating::GetSequenceActivity
bool __fastcall CBasePlayerAnimState::ShouldResetMainSequence(
        CBasePlayerAnimState *const this,
        HSequence hCurrentSequence,
        HSequence hNewSequence)
{
  bool result; // al
  CBaseAnimatingOverlay *m_pOuter; // rdi
  Activity SequenceActivity; // r13d

  result = 0;
  m_pOuter = this->m_pOuter;
  if ( m_pOuter != 0 )
  {
    SequenceActivity = CBaseAnimating::GetSequenceActivity(m_pOuter, hCurrentSequence);
    return SequenceActivity == CBaseAnimating::GetSequenceActivity(this->m_pOuter, hNewSequence);
  }
  return result;
}


// CBasePlayerAnimState::ShouldResetGroundSpeed  (line 499, @0x000000000213cd70, libserver.so)
bool __fastcall CBasePlayerAnimState::ShouldResetGroundSpeed(
        CBasePlayerAnimState *const this,
        Activity oldActivity,
        Activity idealActivity)
{
  bool result; // al

  if ( oldActivity == 1 )
    return idealActivity == 6 || idealActivity == 12;
  result = 0;
  if ( oldActivity == 45 )
    return idealActivity == 6 || idealActivity == 12;
  return result;
}


// CBasePlayerAnimState::UpdateAimSequenceLayers  (line 506, @0x000000000214d8a0, libserver.so)  // inlines: Clamp<float>, GetWeight, operator=, operator[]
// calls: CBaseAnimatingOverlay::GetAnimOverlay, CAnimationLayer::CopyFrom, CAnimationLayer::SetWeight, CAnimationLayer::SetOrder, CAnimationLayer::SetFlags, CAnimationLayer::SetCycle
// callers: CBasePlayerAnimState::ComputeAimSequence
void __fastcall CBasePlayerAnimState::UpdateAimSequenceLayers(
        CBasePlayerAnimState *const this,
        float flCycle,
        int iFirstLayer,
        bool bForceIdle,
        CSequenceTransitioner *pTransitioner,
        float flWeightScale)
{
  int v9; // r14d
  __int64 v10; // rax
  CAnimationLayer *AnimOverlay; // rbx
  CAnimationLayer *v12; // r12
  float v13; // xmm1_4
  CAnimationLayer *v14; // rsi
  CAnimationLayer *v15; // r15
  double v16; // xmm0_8
  float m_Value; // xmm0_4
  double v18; // xmm0_8
  double v19; // xmm0_8
  float v20; // xmm1_4
  float v21; // xmm0_4
  double v22; // xmm1_8
  float v23; // xmm1_4
  float v24; // xmm1_4
  CAnimationLayer *m_pMemory; // rsi
  float v26; // xmm1_4
  float flCyclea[4]; // [rsp+Ch] [rbp-44h] BYREF
  float flAimSequenceWeight[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v9 = iFirstLayer + 1;
  flCyclea[0] = flCycle;
  v10 = *this->gap0;
  flAimSequenceWeight[0] = 1.0;
  (*(v10 + 96))(this, flCyclea, flAimSequenceWeight, bForceIdle);
  AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, iFirstLayer);
  v12 = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, v9);
  if ( pTransitioner->m_animationQueue.m_Size == 1 )
  {
    m_pMemory = pTransitioner->m_animationQueue.m_Memory.m_pMemory;
    if ( AnimOverlay != m_pMemory )
      CAnimationLayer::CopyFrom(AnimOverlay, m_pMemory);
    CAnimationLayer::SetWeight(
      AnimOverlay,
      COERCE_DOUBLE(1065353216),
      v13,
      LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetWeight(v12, 0.0, v26, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetOrder(AnimOverlay, iFirstLayer, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetFlags(AnimOverlay, 1);
  }
  else if ( pTransitioner->m_animationQueue.m_Size > 1 )
  {
    v14 = pTransitioner->m_animationQueue.m_Memory.m_pMemory;
    v15 = v14 + 1;
    if ( AnimOverlay != v14 )
      CAnimationLayer::CopyFrom(AnimOverlay, v14);
    if ( v12 != v15 )
      CAnimationLayer::CopyFrom(v12, v15);
    CAnimationLayer::SetWeight(
      v12,
      COERCE_DOUBLE(COERCE_UNSIGNED_INT(1.0 - AnimOverlay->m_op.m_flWeight.m_Value.m_Value)),
      v13,
      LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetOrder(AnimOverlay, iFirstLayer, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetOrder(v12, v9, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetFlags(AnimOverlay, 1);
    CAnimationLayer::SetFlags(v12, 1);
  }
  *&v16 = LODWORD(flWeightScale);
  *&v16 = (flWeightScale * AnimOverlay->m_op.m_flWeight.m_Value.m_Value) * flAimSequenceWeight[0];
  CAnimationLayer::SetWeight(AnimOverlay, v16, v13, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  m_Value = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
  if ( m_Value < 0.0 )
    v18 = 0.0;
  else
    *&v18 = COERCE_UNSIGNED_INT(fminf(1.0, m_Value));
  CAnimationLayer::SetWeight(AnimOverlay, v18, 0.0, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  *&v19 = LODWORD(flWeightScale);
  *&v19 = (flWeightScale * v12->m_op.m_flWeight.m_Value.m_Value) * flAimSequenceWeight[0];
  CAnimationLayer::SetWeight(v12, v19, v20, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  v21 = v12->m_op.m_flWeight.m_Value.m_Value;
  v22 = 0.0;
  if ( v21 >= 0.0 )
  {
    HIDWORD(v22) = 0;
    *&v22 = fminf(1.0, v21);
  }
  CAnimationLayer::SetWeight(v12, v22, *&v22, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  CAnimationLayer::SetCycle(AnimOverlay, flCyclea[0], v23, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  CAnimationLayer::SetCycle(v12, flCyclea[0], v24, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
}


// CBasePlayerAnimState::OptimizeLayerWeights  (line 587, @0x000000000214daa0, libserver.so)  // inlines: GetWeight
// calls: CBaseAnimatingOverlay::GetAnimOverlay, CAnimationLayer::IsActive, CAnimationLayer::SetOrder, CAnimationLayer::ClearFlags, CAnimationLayer::SetWeight
// callers: CBasePlayerAnimState::ComputeAimSequence
void __fastcall CBasePlayerAnimState::OptimizeLayerWeights(
        CBasePlayerAnimState *const this,
        int iFirstLayer,
        int nLayers)
{
  int v6; // ebx
  CAnimationLayer *AnimOverlay; // r15
  float m_Value; // xmm0_4
  CAnimationLayer *v9; // rbx
  float v10; // xmm1_4
  int v11; // ebx
  CAnimationLayer *v12; // r15
  int v13; // eax
  int v14; // ebx
  int v15; // esi
  CAnimationLayer *v16; // r14
  float totalWeight; // [rsp+8h] [rbp-38h]
  int iLastOne; // [rsp+Ch] [rbp-34h]
  int iLastOnea; // [rsp+Ch] [rbp-34h]

  if ( nLayers <= 1 )
  {
    totalWeight = 0.0;
  }
  else
  {
    v6 = iFirstLayer + 1;
    iLastOne = nLayers + iFirstLayer;
    totalWeight = 0.0;
    do
    {
      while ( 1 )
      {
        AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, v6);
        if ( CAnimationLayer::IsActive(AnimOverlay) )
        {
          m_Value = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
          if ( m_Value > 0.0 )
            break;
        }
        if ( ++v6 == iLastOne )
          goto LABEL_7;
      }
      ++v6;
      totalWeight = m_Value + totalWeight;
    }
    while ( v6 != iLastOne );
  }
LABEL_7:
  v9 = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, iFirstLayer);
  if ( CAnimationLayer::IsActive(v9) && v9->m_op.m_flWeight.m_Value.m_Value > 0.0 )
    CAnimationLayer::SetWeight(
      v9,
      COERCE_DOUBLE(COERCE_UNSIGNED_INT(fmaxf(1.0 - totalWeight, 0.0))),
      v10,
      LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  v11 = 0;
  iLastOnea = -1;
  if ( nLayers > 0 )
  {
    do
    {
      while ( 1 )
      {
        v12 = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, v11 + iFirstLayer);
        if ( CAnimationLayer::IsActive(v12) )
          break;
        if ( ++v11 == nLayers )
          goto LABEL_15;
      }
      v13 = iLastOnea;
      if ( v12->m_op.m_flWeight.m_Value.m_Value > 0.99 )
        v13 = v11;
      ++v11;
      iLastOnea = v13;
    }
    while ( v11 != nLayers );
LABEL_15:
    if ( iLastOnea != -1 )
    {
      v14 = iLastOnea - 1;
      if ( iLastOnea != 0 )
      {
        do
        {
          v15 = iFirstLayer + v14--;
          v16 = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, v15);
          CAnimationLayer::SetOrder(v16, 15, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          CAnimationLayer::ClearFlags(v16);
        }
        while ( v14 != -1 );
      }
    }
  }
}


// CBasePlayerAnimState::ShouldBlendAimSequenceToIdle  (line 639, @0x000000000213cda0, libserver.so)
bool __fastcall CBasePlayerAnimState::ShouldBlendAimSequenceToIdle(CBasePlayerAnimState *const this)
{
  Activity m_eCurrentMainSequenceActivity; // eax

  m_eCurrentMainSequenceActivity = this->m_eCurrentMainSequenceActivity;
  return m_eCurrentMainSequenceActivity == 6
      || m_eCurrentMainSequenceActivity == 10
      || m_eCurrentMainSequenceActivity == 12;
}


// CBasePlayerAnimState::ComputeAimSequence  (line 650, @0x000000000214dc50, libserver.so)  // inlines: GetCycle
// calls: CBaseAnimating::GetBaseAnimatingController, CBasePlayerAnimState::UpdateAimSequenceLayers, CBasePlayerAnimState::OptimizeLayerWeights
// callers: CBasePlayerAnimState::ComputeSequences
void __fastcall CBasePlayerAnimState::ComputeAimSequence(CBasePlayerAnimState *const this)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax
  float v3; // r14d
  float v4; // xmm0_4
  bool bIsMoving[17]; // [rsp+Fh] [rbp-11h] BYREF

  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(BaseAnimatingController->m_baseLayer.m_flCycle.m_Value)));
  CBasePlayerAnimState::UpdateAimSequenceLayers(
    this,
    BaseAnimatingController->m_baseLayer.m_flCycle.m_Value,
    1,
    1,
    &this->m_IdleSequenceTransitioner,
    1.0);
  if ( (*(*this->gap0 + 112LL))(this) != 0 )
  {
    (*(*this->gap0 + 152LL))(this, bIsMoving);
    if ( bIsMoving[0] )
      CBasePlayerAnimState::UpdateAimSequenceLayers(this, v3, 3, 0, &this->m_SequenceTransitioner, v4);
  }
  CBasePlayerAnimState::OptimizeLayerWeights(this, 1, 4);
}


// CBasePlayerAnimState::CalcSequenceIndex  (line 676, @0x0000000002178f90, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, Element, Find, LeftChild, ResetDbgInfo, RightChild, SetCompareType, SetLessFunc, operator(), operator[]
// calls: V_vsnprintf, CBaseAnimating::LookupSequence, CUtlDict<int, int>::Insert, Warning, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __stack_chk_fail
// strings: "CalcSequenceIndex: can't find '%s'.\n"
// globals: `guard variable for'CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict, CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict, FastCaselessStringLessThan(char const* const&,char const* const&), __dso_handle, CUtlDict<int,int>::~CUtlDict()
HSequence CBasePlayerAnimState::CalcSequenceIndex(CBasePlayerAnimState *const this, const char *pBaseName, ...)
{
  HSequence v3; // ebx
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v7; // rbx
  int element[2]; // [rsp+0h] [rbp-310h] BYREF
  va_list marker; // [rsp+18h] [rbp-2F8h] BYREF
  char szFullName[520]; // [rsp+30h] [rbp-2E0h] BYREF
  unsigned __int64 v11; // [rsp+238h] [rbp-D8h]

  va_start(marker, pBaseName);
  v11 = __readfsqword(0x28u);
  V_vsnprintf(szFullName, 512, pBaseName, marker);
  v3.m_Data = CBaseAnimating::LookupSequence(this->m_pOuter, szFullName).m_Data;
  if ( v3.m_Data == -1 )
  {
    if ( `guard variable for'CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict) != 0 )
    {
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Root = -1;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_FirstFree = -1;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_LastAlloc.index = -1;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_NumElements = 0;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_pElements = 0;
      CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
      __cxa_guard_release(&`guard variable for'CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict);
      __cxa_atexit(
        CUtlDict<int,int>::~CUtlDict,
        &CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict,
        &_dso_handle);
    }
    m_Root = CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Root;
    *element = szFullName;
    if ( CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Root == -1 )
    {
LABEL_10:
      element[0] = 0;
      CUtlDict<int,int>::Insert(&CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict, szFullName, element);
      Warning("CalcSequenceIndex: can't find '%s'.\n", szFullName);
    }
    else
    {
      m_pMemory = CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = m_Root;
          if ( !CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                  element,
                  &m_pMemory[v7].m_Data.key) )
            break;
          m_pMemory = CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Left;
          if ( m_Root == -1 )
            goto LABEL_10;
        }
        if ( !CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                &CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.key,
                element) )
          break;
        m_pMemory = CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = CBasePlayerAnimState::CalcSequenceIndex(char const*,...)::dict.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Right;
        if ( m_Root == -1 )
          goto LABEL_10;
      }
    }
    return 0;
  }
  return v3;
}


// CBasePlayerAnimState::UpdateInterpolators  (line 703, @0x000000000214dd50, libserver.so)
void __fastcall CBasePlayerAnimState::UpdateInterpolators(CBasePlayerAnimState *const this)
{
  this->m_flMaxGroundSpeed = (*(*this->gap0 + 136LL))(this);
}


// CBasePlayerAnimState::GetInterpolatedGroundSpeed  (line 713, @0x000000000214dd80, libserver.so)
float __fastcall CBasePlayerAnimState::GetInterpolatedGroundSpeed(CBasePlayerAnimState *const this)
{
  return this->m_flMaxGroundSpeed;
}


// CBasePlayerAnimState::CalcMovementPlaybackRate  (line 719, @0x000000000215c490, libserver.so)  // inlines: Clamp<float>, FastSqrt, GetInterpolatedGroundSpeed, Length2D, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBasePlayerAnimState::GetOuterAbsVelocity
float __fastcall CBasePlayerAnimState::CalcMovementPlaybackRate(CBasePlayerAnimState *const this, bool *bIsMoving)
{
  float x; // xmm0_4
  float v5; // xmm0_4
  float m_flMaxGroundSpeed; // xmm2_4
  float v8; // xmm1_4
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  float speed; // [rsp+Ch] [rbp-24h]
  Vector vel; // [rsp+10h] [rbp-20h] BYREF

  CBasePlayerAnimState::GetOuterAbsVelocity(this, &vel);
  x = vel.x;
  *bIsMoving = 0;
  v5 = fsqrt((x * x) + (vel.y * vel.y));
  if ( v5 <= 0.5 )
    return 1.0;
  speed = v5;
  if ( (*(*this->gap0 + 128LL))(this) == 0 )
    return 1.0;
  m_flMaxGroundSpeed = this->m_flMaxGroundSpeed;
  v8 = 0.0099999998;
  if ( m_flMaxGroundSpeed >= 0.001 )
  {
    v9.m128_f32[0] = speed / m_flMaxGroundSpeed;
    if ( (speed / m_flMaxGroundSpeed) < 0.0099999998 )
    {
      v8 = 0.0099999998;
    }
    else
    {
      v10 = _mm_cmpge_ss(0x41200000u, v9);
      LODWORD(v8) = _mm_andnot_ps(v10, 0x41200000u).m128_u32[0] | v9.m128_i32[0] & v10.m128_i32[0];
    }
  }
  *bIsMoving = 1;
  return v8;
}


// CBasePlayerAnimState::CanThePlayerMove  (line 751, @0x000000000213cdd0, libserver.so)
bool __fastcall CBasePlayerAnimState::CanThePlayerMove(CBasePlayerAnimState *const this)
{
  return 1;
}


// CBasePlayerAnimState::ComputePlaybackRate  (line 757, @0x000000000214dd90, libserver.so)  // inlines: SetPlaybackRate
// calls: CBaseAnimating::GetBaseAnimatingController
// callers: CBasePlayerAnimState::Update
void __fastcall CBasePlayerAnimState::ComputePlaybackRate(CBasePlayerAnimState *const this)
{
  float v2; // xmm0_4
  CBaseAnimatingController *BaseAnimatingController; // rax
  CBaseAnimatingController *v4; // rax
  float flRate; // [rsp+Ch] [rbp-24h]
  bool bIsMoving[17]; // [rsp+1Fh] [rbp-11h] BYREF

  if ( this->m_AnimConfig.m_LegAnimType > LEGANIM_8WAY )
  {
    (*(*this->gap0 + 152LL))(this, bIsMoving);
    if ( bIsMoving[0] )
    {
      flRate = v2;
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, flRate);
    }
    else
    {
      v4 = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter);
      (*(v4->_vptr_CSkeletonAnimationController + 22))(v4, 1.0);
    }
  }
}


// CBasePlayerAnimState::GetOuter  (line 778, @0x000000000214e060, libserver.so)
CBaseAnimatingOverlay *__fastcall CBasePlayerAnimState::GetOuter(const CBasePlayerAnimState *const this)
{
  return this->m_pOuter;
}


// CBasePlayerAnimState::EstimateYaw  (line 787, @0x000000000215c580, libserver.so)  // inlines: FastSqrt, Length2D, RAD2DEG, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBasePlayerAnimState::GetOuterAbsVelocity, atan2, AngleNormalize
// callers: CBasePlayerAnimState::ComputePoseParam_MoveYaw
void __fastcall CBasePlayerAnimState::EstimateYaw(CBasePlayerAnimState *const this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  Vector est_velocity; // [rsp+10h] [rbp-20h] BYREF

  CBasePlayerAnimState::GetOuterAbsVelocity(this, &est_velocity);
  if ( fsqrt((est_velocity.x * est_velocity.x) + (est_velocity.y * est_velocity.y)) > 0.5 )
  {
    v2 = atan2(est_velocity.y, est_velocity.x);
    this->m_flGaitYaw = v2 * 57.295776;
    this->m_flGaitYaw = AngleNormalize(v3);
  }
}


// CBasePlayerAnimState::ComputePoseParam_MoveYaw  (line 805, @0x000000000215c610, libserver.so)  // inlines: DEG2RAD, QAngle, Vector2D, operator=
// calls: CBasePlayerAnimState::EstimateYaw, AngleNormalize, CBaseAnimating::SetPoseParameter, CBaseEntity::SetLocalAngles, sincos
void __fastcall CBasePlayerAnimState::ComputePoseParam_MoveYaw(
        CBasePlayerAnimState *const this,
        const CModel *pStudioHdr)
{
  LegAnimType_t m_LegAnimType; // eax
  float m_flEyeYaw; // xmm0_4
  float v5; // xmm1_4
  LegAnimType_t v6; // eax
  int m_poseParamMoveYaw; // esi
  float m_flCurrentFeetYaw; // xmm0_4
  CBaseAnimatingOverlay *m_pOuter; // rdi
  CBaseAnimatingOverlay *v10; // rdi
  float v11; // xmm0_4
  __m128d v12; // xmm1
  double v13; // xmm2_8
  vec_t v14; // r12d
  float v15; // xmm1_4
  float flPlaybackRate; // [rsp+8h] [rbp-38h]
  float flAdjustYaw; // [rsp+Ch] [rbp-34h]
  float flAdjustYawb; // [rsp+Ch] [rbp-34h]
  float flAdjustYawa; // [rsp+Ch] [rbp-34h]
  vec_t flAdjustYawc; // [rsp+Ch] [rbp-34h]
  double cosx; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 sinx; // [rsp+18h] [rbp-28h] BYREF
  int bIsMoving; // [rsp+20h] [rbp-20h] BYREF
  float v24; // [rsp+24h] [rbp-1Ch]
  int v25; // [rsp+28h] [rbp-18h]

  m_LegAnimType = this->m_AnimConfig.m_LegAnimType;
  if ( m_LegAnimType == LEGANIM_GOLDSRC )
  {
    m_flCurrentFeetYaw = this->m_flCurrentFeetYaw;
    bIsMoving = 0;
    m_pOuter = this->m_pOuter;
    v25 = 0;
    v24 = m_flCurrentFeetYaw;
    CBaseEntity::SetLocalAngles(m_pOuter, &bIsMoving);
    m_LegAnimType = this->m_AnimConfig.m_LegAnimType;
  }
  if ( m_LegAnimType <= LEGANIM_8WAY )
  {
    CBasePlayerAnimState::EstimateYaw(this);
    m_flEyeYaw = this->m_flEyeYaw;
    if ( m_flEyeYaw <= 180.0 )
    {
      if ( m_flEyeYaw < -180.0 )
        m_flEyeYaw = m_flEyeYaw + 360.0;
    }
    else
    {
      m_flEyeYaw = m_flEyeYaw - 360.0;
    }
    flAdjustYaw = m_flEyeYaw;
    if ( (*(*this->gap0 + 272LL))(this) != 0 )
    {
      v5 = flAdjustYaw - this->m_flGaitYaw;
    }
    else
    {
      v5 = this->m_flCurrentFeetYaw - this->m_flGoalFeetYaw;
      if ( this->m_isBackpedaling )
        v5 = v5 + 180.0;
    }
    flAdjustYawb = v5;
    AngleNormalize(v5);
    flAdjustYawa = -flAdjustYawb - (360 * (-flAdjustYawb / 360.0));
    AngleNormalize(flAdjustYawa);
    v6 = this->m_AnimConfig.m_LegAnimType;
    this->m_flLastMoveYaw = flAdjustYawa;
    if ( v6 != LEGANIM_9WAY )
    {
      m_poseParamMoveYaw = this->m_poseParamMoveYaw;
      if ( m_poseParamMoveYaw >= 0 )
      {
        CBaseAnimating::SetPoseParameter(
          this->m_pOuter,
          m_poseParamMoveYaw,
          COERCE_DOUBLE(LODWORD(flAdjustYawa)),
          flAdjustYawa);
        this->m_flLastMoveYaw = flAdjustYawa;
      }
    }
    else
    {
      v10 = this->m_pOuter;
      bIsMoving = 0;
      v11 = this->m_flCurrentFeetYaw;
      v25 = 0;
      v24 = v11;
      CBaseEntity::SetLocalAngles(v10, &bIsMoving);
      if ( this->m_poseParamMoveX >= 0 && this->m_poseParamMoveY >= 0 )
      {
        flPlaybackRate = (*(*this->gap0 + 152LL))(this, &bIsMoving);
        if ( bIsMoving != 0 )
        {
          sincos((flAdjustYawa * 0.017453292), &sinx, &cosx);
          v12 = _mm_xor_pd(sinx, 0x8000000000000000LL);
          v12.m128d_f64[0] = v12.m128d_f64[0] * flPlaybackRate;
          v13 = cosx * flPlaybackRate;
          v14 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v12))));
        }
        else
        {
          v14 = 0.0;
          *&v13 = _mm_cvtsi32_si128(0).m128i_u64[0];
        }
        flAdjustYawc = *&v13;
        CBaseAnimating::SetPoseParameter(this->m_pOuter, this->m_poseParamMoveX, v13, *v12.m128d_f64);
        CBaseAnimating::SetPoseParameter(
          this->m_pOuter,
          this->m_poseParamMoveY,
          *_mm_cvtsi32_si128(LODWORD(v14)).m128i_i64,
          v15);
        this->m_vLastMovePose.y = v14;
        this->m_vLastMovePose.x = flAdjustYawc;
      }
    }
  }
}


// CBasePlayerAnimState::ComputePoseParam_BodyPitch  (line 961, @0x000000000214e600, libserver.so)  // inlines: Clamp<float>
// calls: CBasePlayerAnimState::ConvergePoseParams
// globals: g_flLastBodyPitch
void __fastcall CBasePlayerAnimState::ComputePoseParam_BodyPitch(
        CBasePlayerAnimState *const this,
        const CModel *pStudioHdr)
{
  __m128 m_flEyePitch_low; // xmm1
  float v3; // xmm0_4
  __m128 v4; // xmm0
  int m_poseParamBodyPitch; // edx

  m_flEyePitch_low = LODWORD(this->m_flEyePitch);
  if ( m_flEyePitch_low.m128_f32[0] > 180.0 )
    m_flEyePitch_low.m128_f32[0] = m_flEyePitch_low.m128_f32[0] - 360.0;
  v3 = -90.0;
  if ( m_flEyePitch_low.m128_f32[0] >= -90.0 )
  {
    v4 = _mm_cmplt_ss(0x42B40000u, m_flEyePitch_low);
    LODWORD(v3) = _mm_andnot_ps(v4, m_flEyePitch_low).m128_u32[0] | v4.m128_i32[0] & 0x42B40000;
  }
  m_poseParamBodyPitch = this->m_poseParamBodyPitch;
  if ( m_poseParamBodyPitch >= 0 )
    g_flLastBodyPitch = CBasePlayerAnimState::ConvergePoseParams(
                          this,
                          v3,
                          this->m_poseParamHeadPitch,
                          m_poseParamBodyPitch);
}


// CBasePlayerAnimState::ConvergeAngles  (line 991, @0x000000000213e2e0, libserver.so)  // inlines: Clamp<float>
// calls: AngleNormalize, Msg
// strings: "jumped = %f\n"
__int64 __fastcall CBasePlayerAnimState::ConvergeAngles(
        CBasePlayerAnimState *const this,
        __m128i a2,
        float goal,
        float maxrate,
        float maxgap,
        float dt,
        float *const current)
{
  int v7; // r12d
  float v9; // xmm5_4
  float v10; // xmm4_4
  int v11; // xmm7_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  unsigned int v18; // r12d
  float v19; // xmm0_4
  float maxmove; // [rsp+0h] [rbp-2Ch]
  float flTooFara; // [rsp+4h] [rbp-28h]
  float anglediffa; // [rsp+8h] [rbp-24h]

  v7 = _mm_cvtsi128_si32(a2);
  v9 = AngleNormalize(goal);
  v10 = fabs(v9);
  *&v11 = 1.0;
  v12 = goal;
  if ( v10 > 45.0 || (v13 = v10 / 45.0, *&v11 = 0.0099999998, (v10 / 45.0) < 0.0099999998) || (*&v11 = 1.0, v13 > 1.0) )
    v13 = *&v11;
  v14 = (maxgap * goal) * v13;
  if ( v10 > maxrate )
  {
    v15 = fminf(v10 - maxrate, 5.0 * v14);
    if ( v9 <= 0.0 )
      v16 = *current - v15;
    else
      v16 = *current + v15;
    *current = v16;
    maxmove = v14;
    flTooFara = v15;
    *current = AngleNormalize(v15);
    anglediffa = AngleNormalize(v17);
    Msg("jumped = %f\n", flTooFara);
    v14 = maxmove;
    v9 = anglediffa;
    v10 = fabs(anglediffa);
  }
  if ( v14 > v10 )
  {
    *current = v7;
    v18 = 0;
  }
  else if ( v9 <= 0.0 )
  {
    v18 = 2;
    *current = *current - v14;
  }
  else
  {
    v18 = 1;
    *current = v14 + *current;
  }
  v19 = AngleNormalize(v12);
  *current = v19;
  return v18;
}


// CBasePlayerAnimState::UpdateFootYaws  (line 1056, @0x000000000215c8d0, libserver.so)  // inlines: DEG2RAD, Dot, DotProduct, FastSqrt, GetFloat, Length2D, RAD2DEG, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime
// calls: CBasePlayerAnimState::GetOuterAbsVelocity, atan2, sincosf, AngleNormalize
void __fastcall CBasePlayerAnimState::UpdateFootYaws(CBasePlayerAnimState *const this)
{
  float x; // xmm1_4
  float v3; // xmm2_4
  __m128d v4; // xmm0
  float v5; // xmm2_4
  float v6; // xmm2_4
  float m_flEyeYaw; // xmm0_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v11; // xmm0_4
  float m_flMaxBodyYawDegrees; // xmm1_4
  float v13; // [rsp+Ch] [rbp-44h]
  float v14; // [rsp+10h] [rbp-40h]
  float v15; // [rsp+14h] [rbp-3Ch]
  float cosx; // [rsp+18h] [rbp-38h] BYREF
  float sinx; // [rsp+1Ch] [rbp-34h] BYREF
  Vector vel; // [rsp+20h] [rbp-30h] BYREF

  CBasePlayerAnimState::GetOuterAbsVelocity(this, &vel);
  x = vel.x;
  this->m_isBackpedaling = 0;
  v3 = fsqrt((x * x) + (vel.y * vel.y));
  if ( !this->m_bCurrentFeetYawInitialized )
  {
    m_flEyeYaw = this->m_flEyeYaw;
    this->m_bCurrentFeetYawInitialized = 1;
    this->m_flLastTurnTime = 0.0;
    this->m_flCurrentFeetYaw = m_flEyeYaw;
    this->m_flGoalFeetYaw = m_flEyeYaw;
    return;
  }
  if ( v3 > 0.5 )
  {
    if ( this->m_AnimConfig.m_LegAnimType > LEGANIM_8WAY )
    {
      v4.m128d_f64[0] = atan2(vel.y, x);
      v5 = _mm_movedup_pd(v4).m128d_f64[0];
      v6 = v5 * 57.295776;
      *v4.m128d_f64 = 0.017453292 * this->m_flEyeYaw;
      this->m_flGoalFeetYaw = v6;
      v13 = v6;
      sincosf(*v4.m128d_f64, &sinx, &cosx);
      v14 = cosx;
      v15 = sinx;
      sincosf(0.017453292 * v13, &sinx, &cosx);
      if ( (((v14 * cosx) + (v15 * sinx)) + 0.0) < -0.01 )
        this->m_flGoalFeetYaw = v13 + 180.0;
      return;
    }
LABEL_8:
    this->m_flGoalFeetYaw = this->m_flEyeYaw;
    return;
  }
  m_flCurrentTime = 0.0;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  if ( (m_flCurrentTime - this->m_flLastTurnTime) > mp_facefronttime.m_pParent->m_Value.m_fValue )
    goto LABEL_8;
  v11 = AngleNormalize(x);
  m_flMaxBodyYawDegrees = this->m_AnimConfig.m_flMaxBodyYawDegrees;
  if ( fabs(v11) > m_flMaxBodyYawDegrees )
  {
    if ( v11 <= 0.0 )
      this->m_flGoalFeetYaw = m_flMaxBodyYawDegrees + this->m_flGoalFeetYaw;
    else
      this->m_flGoalFeetYaw = this->m_flGoalFeetYaw - m_flMaxBodyYawDegrees;
    (*(*this->gap0 + 208LL))(this);
  }
}


// CBasePlayerAnimState::ComputePoseParam_BodyYaw  (line 1117, @0x00000000021476e0, libserver.so)  // inlines: GetFloat, curtime
// calls: AngleNormalize
// globals: g_flLastBodyYaw
void __fastcall CBasePlayerAnimState::ComputePoseParam_BodyYaw(CBasePlayerAnimState *const this)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float m_flCurrentFeetYaw; // xmm3_4
  float v6; // xmm0_4
  __int64 v7; // rax
  float v8; // xmm0_4
  double v9; // xmm1_8
  __int64 v10; // xmm2_8
  CGlobalVars *v11; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float maxYaw; // [rsp+8h] [rbp-18h]
  float flCurrentTorsoYaw; // [rsp+Ch] [rbp-14h]
  float flCurrentTorsoYawa; // [rsp+Ch] [rbp-14h]

  (*(*this->gap0 + 264LL))(this);
  v3 = AngleNormalize(v2);
  m_flCurrentFeetYaw = this->m_flCurrentFeetYaw;
  this->m_flGoalFeetYaw = v3;
  if ( v3 != m_flCurrentFeetYaw )
  {
    maxYaw = this->m_AnimConfig.m_flMaxBodyYawDegrees;
    flCurrentTorsoYawa = mp_feetyawrate.m_pParent->m_Value.m_fValue;
    v8 = AngleNormalize(flCurrentTorsoYawa);
    *&v9 = LODWORD(flCurrentTorsoYawa);
    v10 = LODWORD(maxYaw);
    if ( this->m_AnimConfig.m_flMinBodyYawDegrees > v8 || v8 > this->m_AnimConfig.m_flMaxBodyYawDegrees )
    {
      v10 = 1135869952;
      *&v9 = LODWORD(mp_feetyawrate_max.m_pParent->m_Value.m_fValue);
    }
    (*(*this->gap0 + 224LL))(this, &this->m_flCurrentFeetYaw, this->m_flGoalFeetYaw, v9, *&v10, gpGlobals->frametime);
    v11 = gpGlobals;
    m_flCurrentTime = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v11->m_flCurrentTime;
    }
    this->m_flLastTurnTime = m_flCurrentTime;
  }
  v6 = AngleNormalize(v4);
  v7 = *this->gap0;
  this->m_angRender.z = 0.0;
  flCurrentTorsoYaw = v6;
  this->m_angRender.y = this->m_flCurrentFeetYaw;
  this->m_angRender.x = 0.0;
  (*(v7 + 120))(this, v6);
  g_flLastBodyYaw = flCurrentTorsoYaw;
}


// CBasePlayerAnimState::SetOuterBodyYaw  (line 1156, @0x000000000214e5e0, libserver.so)
// calls: CBasePlayerAnimState::ConvergePoseParams
double __fastcall CBasePlayerAnimState::SetOuterBodyYaw(CBasePlayerAnimState *const this, float a2, float flValue)
{
  int m_poseParamBodyYaw; // edx
  double result; // xmm0_8

  m_poseParamBodyYaw = this->m_poseParamBodyYaw;
  if ( m_poseParamBodyYaw < 0 )
    return 0.0;
  *&result = CBasePlayerAnimState::ConvergePoseParams(this, a2, this->m_poseParamHeadYaw, m_poseParamBodyYaw);
  return result;
}


// CBasePlayerAnimState::SnapPoseParams  (line 1170, @0x000000000214e070, libserver.so)  // inlines: SetOuterPoseParameter, curtime
// calls: CBaseAnimating::GetPoseParameterRange, CBaseAnimating::GetPoseParameter, CBaseAnimating::SetPoseParameter
float __fastcall CBasePlayerAnimState::SnapPoseParams(
        CBasePlayerAnimState *const this,
        int leadingParam,
        int trailingParam,
        float target,
        float duration)
{
  CGlobalVars *v8; // r15
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v11; // xmm0_8
  float v12; // xmm1_4
  CGlobalVars *v13; // r12
  float v14; // xmm0_4
  FnGlobalVarsWarningFunc v16; // rax
  float currentTrailingParama; // [rsp+8h] [rbp-48h]
  float currentTrailingParam; // [rsp+8h] [rbp-48h]
  float minLeadingParam; // [rsp+18h] [rbp-38h] BYREF
  unsigned int maxLeadingParam[13]; // [rsp+1Ch] [rbp-34h] BYREF

  if ( leadingParam < 0 || trailingParam < 0 )
    return 0.0;
  if ( duration > 0.0 )
  {
    v8 = gpGlobals;
    m_flCurrentTime = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          currentTrailingParama = duration;
          (m_pfnWarningFunc)(1, 0.0);
          duration = currentTrailingParama;
        }
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    this->m_flSnapBodyToEyesTime = duration + m_flCurrentTime;
  }
  CBaseAnimating::GetPoseParameterRange(this->m_pOuter, leadingParam, &minLeadingParam, maxLeadingParam);
  currentTrailingParam = CBaseAnimating::GetPoseParameter(this->m_pOuter, trailingParam);
  *&v11 = maxLeadingParam[0];
  *&v11 = ((*maxLeadingParam - minLeadingParam) * 0.5) + minLeadingParam;
  CBaseAnimating::SetPoseParameter(this->m_pOuter, leadingParam, v11, minLeadingParam);
  CBaseAnimating::SetPoseParameter(this->m_pOuter, trailingParam, COERCE_DOUBLE(LODWORD(target)), v12);
  v13 = gpGlobals;
  v14 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v16 = gpGlobals->m_pfnWarningFunc;
      if ( v16 != 0 )
        (v16)(1, 0.0);
    }
    v14 = v13->m_flCurrentTime;
  }
  this->m_flLastBodyHeadTurnTime = v14;
  this->m_flLastEyeYaw = this->m_flEyeYaw;
  return target - currentTrailingParam;
}


// CBasePlayerAnimState::ConvergePoseParams  (line 1203, @0x000000000214e1e0, libserver.so)  // inlines: SetOuterPoseParameter, SnapPoseParams, curtime
// calls: CBaseAnimating::GetPoseParameterRange, CBaseAnimating::GetPoseParameter, CBaseAnimating::SetPoseParameter, CGlobalVarsBase::curtime
// callers: CBasePlayerAnimState::SetOuterBodyYaw, CBasePlayerAnimState::ComputePoseParam_BodyPitch
float __fastcall CBasePlayerAnimState::ConvergePoseParams(
        CBasePlayerAnimState *const this,
        float flValue,
        int leadParam,
        int trailParam)
{
  float m_flCurrentTime; // xmm1_4
  float m_flSnapBodyToEyesTime; // xmm0_4
  CGlobalVars *v9; // r12
  double v10; // xmm0_8
  float v11; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v14; // xmm1_4
  double v15; // xmm0_8
  float m_flEyeYaw; // xmm3_4
  float v17; // xmm5_4
  CGlobalVars *v18; // r12
  CGlobalVars *v19; // rax
  float v20; // xmm1_4
  void (__fastcall *v21)(__int64, double, double); // rax
  float m_flLastBodyHeadTurnTime; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  double v27; // xmm2_8
  double v28; // xmm0_8
  CGlobalVars *v29; // rdx
  FnGlobalVarsWarningFunc v30; // rcx
  float v31; // xmm1_4
  CGlobalVars *v32; // r12
  float v33; // xmm1_4
  FnGlobalVarsWarningFunc v34; // rax
  float v35; // xmm1_4
  CGlobalVars *v36; // [rsp-14h] [rbp-60h]
  float v37; // [rsp-8h] [rbp-54h]
  float v38; // [rsp-8h] [rbp-54h]
  float v39; // [rsp-8h] [rbp-54h]
  float v40; // [rsp-4h] [rbp-50h]
  unsigned int v41; // [rsp-4h] [rbp-50h]
  float v42; // [rsp-4h] [rbp-50h]
  unsigned int v43; // [rsp-4h] [rbp-50h]
  int v44; // [rsp-4h] [rbp-50h]
  unsigned int v46; // [rsp+Ch] [rbp-40h] BYREF
  unsigned int v47; // [rsp+10h] [rbp-3Ch] BYREF

  m_flCurrentTime = 0.0;
  m_flSnapBodyToEyesTime = this->m_flSnapBodyToEyesTime;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v40 = this->m_flSnapBodyToEyesTime;
        (m_pfnWarningFunc)(1, m_flSnapBodyToEyesTime, 0.0);
        m_flSnapBodyToEyesTime = v40;
      }
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  if ( m_flSnapBodyToEyesTime >= m_flCurrentTime || (*(*this->gap0 + 296LL))(this, leadParam, trailParam) == 0 )
  {
    if ( leadParam >= 0 && trailParam >= 0 )
    {
      CBaseAnimating::GetPoseParameterRange(this->m_pOuter, leadParam, &v46, &v47);
      CBaseAnimating::GetPoseParameter(this->m_pOuter, trailParam);
      *&v10 = v47;
      *&v10 = ((*&v47 - *&v46) * 0.5) + *&v46;
      CBaseAnimating::SetPoseParameter(this->m_pOuter, leadParam, v10, *&v46);
      CBaseAnimating::SetPoseParameter(this->m_pOuter, trailParam, COERCE_DOUBLE(LODWORD(flValue)), v11);
      this->m_flLastBodyHeadTurnTime = CGlobalVarsBase::curtime(gpGlobals, 0);
      this->m_flLastEyeYaw = this->m_flEyeYaw;
    }
    return flValue;
  }
  if ( trailParam < 0 )
    return 0.0;
  if ( leadParam >= 0 )
  {
    CBaseAnimating::GetPoseParameterRange(this->m_pOuter, leadParam, &v46, &v47);
    *&v15 = CBaseAnimating::GetPoseParameter(this->m_pOuter, trailParam);
    m_flEyeYaw = this->m_flEyeYaw;
    v17 = flValue - *&v15;
    if ( fabs(m_flEyeYaw - this->m_flLastEyeYaw) > 1.0 )
    {
      v19 = gpGlobals;
      v29 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        v18 = gpGlobals;
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v30 = gpGlobals->m_pfnWarningFunc;
          v18 = gpGlobals;
          if ( v30 != 0 )
          {
            v36 = gpGlobals;
            v38 = flValue - *&v15;
            v43 = LODWORD(v15);
            v30(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            v18 = gpGlobals;
            v29 = v36;
            m_flEyeYaw = this->m_flEyeYaw;
            v17 = v38;
            v19 = gpGlobals;
            *&v15 = v43;
          }
        }
        v31 = v29->m_flCurrentTime;
      }
      else
      {
        v18 = 0;
        v31 = 0.0;
      }
      this->m_flLastBodyHeadTurnTime = v31;
      this->m_flLastEyeYaw = m_flEyeYaw;
    }
    else
    {
      v18 = gpGlobals;
      v19 = gpGlobals;
    }
    v20 = 0.0;
    if ( v19 != 0 )
    {
      if ( !v18->m_bEnableAssertions && !v18->m_bInSimulation )
      {
        v21 = v18->m_pfnWarningFunc;
        if ( v21 != 0 )
        {
          v37 = v17;
          v41 = LODWORD(v15);
          v21(1, v15, 0.0);
          v17 = v37;
          *&v15 = v41;
        }
      }
      v20 = v18->m_flCurrentTime;
    }
    m_flLastBodyHeadTurnTime = this->m_flLastBodyHeadTurnTime;
    if ( (v20 - m_flLastBodyHeadTurnTime) > 0.5 )
    {
      v32 = gpGlobals;
      v33 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v34 = gpGlobals->m_pfnWarningFunc;
          if ( v34 != 0 )
          {
            v39 = v17;
            v44 = LODWORD(v15);
            (v34)(1, v15, 0.0);
            m_flLastBodyHeadTurnTime = this->m_flLastBodyHeadTurnTime;
            v17 = v39;
            LODWORD(v15) = v44;
          }
        }
        v33 = v32->m_flCurrentTime;
      }
      v35 = (v33 - m_flLastBodyHeadTurnTime) - 0.5;
      if ( v35 >= 1.0 )
      {
        v23 = 0.1;
        goto LABEL_26;
      }
      v23 = v35 * 0.1;
      if ( v23 > 0.0099999998 )
        goto LABEL_26;
    }
    v23 = 0.0099999998;
LABEL_26:
    v24 = v23 * v17;
    if ( v24 > 10.0 )
      v25 = 10.0;
    else
      v25 = fmaxf(-10.0, v24);
    v26 = v25 + *&v15;
    *&v28 = LODWORD(flValue);
    *&v27 = v47;
    *&v28 = flValue - v26;
    if ( (flValue - v26) > *&v47 || (*&v27 = v46, *&v46 > *&v28) )
    {
      v26 = v26 + (*&v28 - *&v27);
      v28 = v27;
    }
    v42 = v26;
    CBaseAnimating::SetPoseParameter(this->m_pOuter, leadParam, v28, v26);
    CBaseAnimating::SetPoseParameter(this->m_pOuter, trailParam, COERCE_DOUBLE(LODWORD(v42)), v42);
    return flValue;
  }
  CBaseAnimating::SetPoseParameter(this->m_pOuter, trailParam, COERCE_DOUBLE(LODWORD(flValue)), v14);
  return flValue;
}


// CBasePlayerAnimState::ComputePoseParam_FlexAnim  (line 1279, @0x000000000213ebc0, libserver.so)
// calls: CBaseFlex::GetFlexWeight, CBaseAnimating::SetPoseParameter
void __fastcall CBasePlayerAnimState::ComputePoseParam_FlexAnim(
        CBasePlayerAnimState *const this,
        const CModel *pStudioHdr)
{
  LegAnimType_t *p_m_LegAnimType; // r13
  CBasePlayerAnimState *v4; // rbx
  LocalFlexController_t v5; // esi
  double v6; // xmm0_8
  float v7; // xmm1_4

  p_m_LegAnimType = &this->m_AnimConfig.m_LegAnimType;
  v4 = this;
  if ( this->m_pOuterFlex != 0 )
  {
    do
    {
      v5 = v4->m_flexControllers[0];
      if ( v5 > 0 && v4->m_flexPoseParameters[0] >= 0 )
      {
        *&v6 = CBaseFlex::GetFlexWeight(this->m_pOuterFlex, v5);
        CBaseAnimating::SetPoseParameter(this->m_pOuterFlex, v4->m_flexPoseParameters[0], v6, v7);
      }
      v4 = (v4 + 4);
    }
    while ( v4 != p_m_LegAnimType );
  }
}


// CBasePlayerAnimState::BodyYawTranslateActivity  (line 1303, @0x000000000214e660, libserver.so)
Activity __fastcall CBasePlayerAnimState::BodyYawTranslateActivity(CBasePlayerAnimState *const this, Activity activity)
{
  return activity;
}


// CBasePlayerAnimState::GetRenderAngles  (line 1326, @0x000000000213cde0, libserver.so)
const QAngle *__fastcall CBasePlayerAnimState::GetRenderAngles(CBasePlayerAnimState *const this)
{
  return &this->m_angRender;
}


// CBasePlayerAnimState::GetOuterAbsVelocity  (line 1332, @0x000000000215c440, libserver.so)  // inlines: GetAbsVelocity, GetOuter, operator=
// calls: CBaseEntity::CalcAbsoluteVelocity
// callers: CBasePlayerAnimState::CalcMovementPlaybackRate, CBasePlayerAnimState::EstimateYaw, CBasePlayerAnimState::UpdateFootYaws, CBasePlayerAnimState::GetOuterXYSpeed, CBasePlayerAnimState::DebugShowAnimState
void __fastcall CBasePlayerAnimState::GetOuterAbsVelocity(const CBasePlayerAnimState *const this, Vector *const vel)
{
  CBaseAnimatingOverlay *m_pOuter; // rbx

  m_pOuter = this->m_pOuter;
  if ( (m_pOuter->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this->m_pOuter);
  vel->x = m_pOuter->m_vecAbsVelocity.m_Value.x;
  vel->y = m_pOuter->m_vecAbsVelocity.m_Value.y;
  vel->z = m_pOuter->m_vecAbsVelocity.m_Value.z;
}


// CBasePlayerAnimState::GetOuterXYSpeed  (line 1342, @0x000000000215cb00, libserver.so)  // inlines: FastSqrt, Length2D, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBasePlayerAnimState::GetOuterAbsVelocity
float __fastcall CBasePlayerAnimState::GetOuterXYSpeed(const CBasePlayerAnimState *const this)
{
  Vector vel; // [rsp+10h] [rbp-10h] BYREF

  CBasePlayerAnimState::GetOuterAbsVelocity(this, &vel);
  return fsqrt((vel.x * vel.x) + (vel.y * vel.y));
}


// CBasePlayerAnimState::AnimStateLog  (line 1350, @0x000000000214e670, libserver.so)  // inlines: GetInt
// calls: V_vsnprintf, Msg, __cxa_guard_acquire, __cxa_guard_release, __stack_chk_fail, __cxa_guard_abort, _Unwind_Resume
// callers: CBasePlayerAnimState::AnimStatePrintf, CBasePlayerAnimState::DebugShowAnimStateFull
// strings: "wt", "AnimStateServer.log"
// globals: `guard variable for'CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile, CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile
void CBasePlayerAnimState::AnimStateLog(CBasePlayerAnimState *const this, const char *pMsg, ...)
{
  int m_nValue; // eax
  va_list marker; // [rsp+8h] [rbp-10E8h] BYREF
  char str[4104]; // [rsp+20h] [rbp-10D0h] BYREF
  unsigned __int64 v5; // [rsp+1028h] [rbp-C8h]

  va_start(marker, pMsg);
  v5 = __readfsqword(0x28u);
  V_vsnprintf(str, 4096, pMsg, marker);
  m_nValue = showanimstate_log.m_pParent->m_Value.m_nValue;
  if ( (m_nValue & 0xFFFFFFFD) == 1 )
  {
    Msg("%s", str);
    m_nValue = showanimstate_log.m_pParent->m_Value.m_nValue;
  }
  if ( m_nValue > 1 )
  {
    if ( `guard variable for'CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile) != 0 )
    {
      CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile = (*(filesystem->_vptr_IBaseFileSystem + 2))(
                                                                     &filesystem->IBaseFileSystem,
                                                                     "AnimStateServer.log",
                                                                     "wt",
                                                                     0);
      __cxa_guard_release(&`guard variable for'CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile);
    }
    (*(filesystem->_vptr_IAppSystem + 34))(
      filesystem,
      CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile,
      "%s",
      str);
    (*(filesystem->_vptr_IBaseFileSystem + 8))(
      &filesystem->IBaseFileSystem,
      CBasePlayerAnimState::AnimStateLog(char const*,...)::hFile);
  }
}


// CBasePlayerAnimState::AnimStatePrintf  (line 1380, @0x000000000214e830, libserver.so)
// calls: V_vsnprintf, CBasePlayerAnimState::AnimStateLog, __stack_chk_fail
// callers: CBasePlayerAnimState::DebugShowAnimState
void CBasePlayerAnimState::AnimStatePrintf(CBasePlayerAnimState *const this, int iLine, const char *pMsg, ...)
{
  va_list marker; // [rsp+8h] [rbp-10F8h] BYREF
  char str[4104]; // [rsp+20h] [rbp-10E0h] BYREF
  unsigned __int64 v7; // [rsp+1028h] [rbp-D8h]

  va_start(marker, pMsg);
  v7 = __readfsqword(0x28u);
  V_vsnprintf(str, 4096, pMsg, marker);
  (*(*engine + 320LL))(engine, iLine, "%s", str);
  CBasePlayerAnimState::AnimStateLog(this, "%s\n", str);
}


// CBasePlayerAnimState::DebugShowAnimState  (line 1398, @0x000000000215cb40, libserver.so)  // inlines: FastSqrt, GetBool, GetCycle, GetInt, GetOrder, GetPlaybackRate, GetSequence, Length2D, QAngle, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator/
// calls: CBasePlayerAnimState::GetOuterAbsVelocity, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::GetSequenceCycleRate, CBaseAnimating::GetModelPtr, GetSequenceActivityName, CBasePlayerAnimState::AnimStatePrintf, CAnimationLayer::IsActive, CBaseAnimatingOverlay::GetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay, GetSequenceName, CBaseAnimating::GetSequenceGroundSpeed, CGlobalVarsBase::curtime (14 total)
// strings: "main: %s(%d), cycle: %.2f cyclerate: %.2f playbackrate: %.2f\n", "-- ", "%s(%d), flags (%d), weight: %.2f, cycle: %.2f, order (%d), aim (%d)", "vel: %.2f, time: %.2f, max: %.2f, animspeed: %.2f", "ent yaw: %.2f, body_yaw: %.2f, body_pitch: %.2f, move_x: %.2f, move_y: %.2f", "ent yaw: %.2f, body_yaw: %.2f, move_yaw: %.2f, gait_yaw: %.2f, body_pitch: %.2f" (7 total)
// globals: g_flLastBodyPitch, g_flLastBodyYaw
int __fastcall CBasePlayerAnimState::DebugShowAnimState(CBasePlayerAnimState *const this, int iStartLine)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v5; // eax
  double m_Value; // r12
  const CBaseAnimatingController *v7; // rax
  int v8; // r13d
  double v9; // xmm2_8
  CBaseAnimatingOverlay *m_pOuter; // rdi
  const CBaseAnimatingController *v11; // rax
  HSequence v12; // r14d
  const CModel *ModelPtr; // rax
  const char *SequenceActivityName; // rax
  double v15; // xmm2_8
  double v16; // xmm1_8
  int i; // r12d
  bool IsActive; // al
  int32 m_Data; // r8d
  bool v20; // al
  const char *v21; // rcx
  int32 v22; // r8d
  HSequence v23; // ebx
  const CModel *v24; // rax
  const char *v25; // rax
  int v26; // r13d
  CAnimationLayer *v27; // rbx
  const CModel *v28; // rax
  const CBaseAnimatingController *v29; // rax
  HSequence v30; // eax
  float v31; // xmm0_4
  int v32; // ebx
  double y; // xmm0_8
  const Vector *AbsOrigin; // rax
  float x; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm6_4
  void (__fastcall *v38)(ISceneViewDebugOverlays *, float *, float *, float *, __int64, _QWORD, double, _DWORD, int, _DWORD); // r11
  float v39; // xmm8_4
  float v40; // xmm7_4
  float v41; // xmm0_4
  void (__fastcall *v42)(ISceneViewDebugOverlays *, float *, float *, float *, _QWORD, _QWORD, double, int, int, _DWORD); // rax
  float v43; // xmm5_4
  float v44; // xmm0_4
  float v45; // xmm4_4
  const CBaseAnimatingController *v47; // rax
  HSequence v48; // r14d
  const CModel *v49; // rax
  CAnimationLayer *AnimOverlay; // rax
  HSequence v51; // r12d
  const CModel *v52; // rax
  const char *SequenceName; // rax
  int v54; // [rsp+8h] [rbp-108h]
  int iLine; // [rsp+3Ch] [rbp-D4h]
  int32 v56; // [rsp+40h] [rbp-D0h]
  float v57; // [rsp+40h] [rbp-D0h]
  int v58; // [rsp+44h] [rbp-CCh]
  float v59; // [rsp+44h] [rbp-CCh]
  double v60; // [rsp+48h] [rbp-C8h]
  double m_flMaxGroundSpeed; // [rsp+48h] [rbp-C8h]
  float v62; // [rsp+48h] [rbp-C8h]
  double forwardb; // [rsp+50h] [rbp-C0h]
  double forward; // [rsp+50h] [rbp-C0h]
  double forwarda; // [rsp+50h] [rbp-C0h]
  double SequenceCycleRate; // [rsp+58h] [rbp-B8h]
  double v67; // [rsp+58h] [rbp-B8h]
  int m_nFlags; // [rsp+58h] [rbp-B8h]
  float SequenceGroundSpeed; // [rsp+58h] [rbp-B8h]
  int v70; // [rsp+58h] [rbp-B8h]
  double v71; // [rsp+58h] [rbp-B8h]
  Vector vOuterVel; // [rsp+60h] [rbp-B0h] BYREF
  QAngle angles; // [rsp+70h] [rbp-A0h] BYREF
  Vector vForward; // [rsp+80h] [rbp-90h] BYREF
  Vector vRight; // [rsp+90h] [rbp-80h] BYREF
  Vector vUp; // [rsp+A0h] [rbp-70h] BYREF
  float v77; // [rsp+B0h] [rbp-60h] BYREF
  float v78; // [rsp+B4h] [rbp-5Ch]
  float v79; // [rsp+B8h] [rbp-58h]
  float v80; // [rsp+C0h] [rbp-50h] BYREF
  float v81; // [rsp+C4h] [rbp-4Ch]
  float v82; // [rsp+C8h] [rbp-48h]
  float v83; // [rsp+D0h] [rbp-40h] BYREF
  float v84; // [rsp+D4h] [rbp-3Ch]
  float v85; // [rsp+D8h] [rbp-38h]

  CBasePlayerAnimState::GetOuterAbsVelocity(this, &vOuterVel);
  forwardb = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter)->m_flPlaybackRate.m_Value.m_Value;
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter);
  v5.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  SequenceCycleRate = CBaseAnimating::GetSequenceCycleRate(this->m_pOuter, v5);
  m_Value = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter)->m_baseLayer.m_flCycle.m_Value;
  v7 = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter);
  v8 = (*(v7->_vptr_CSkeletonAnimationController + 24))(v7);
  v9 = forwardb;
  forward = SequenceCycleRate;
  m_pOuter = this->m_pOuter;
  v67 = v9;
  if ( showanimstate_activities.m_pParent->m_Value.m_nValue != 0 )
  {
    v11 = CBaseAnimating::GetBaseAnimatingController(m_pOuter);
    v12.m_Data = (*(v11->_vptr_CSkeletonAnimationController + 24))(v11);
    ModelPtr = CBaseAnimating::GetModelPtr(this->m_pOuter);
    SequenceActivityName = GetSequenceActivityName(ModelPtr, v12);
    v15 = v67;
    v16 = forward;
  }
  else
  {
    v47 = CBaseAnimating::GetBaseAnimatingController(m_pOuter);
    v48.m_Data = (*(v47->_vptr_CSkeletonAnimationController + 24))(v47);
    v49 = CBaseAnimating::GetModelPtr(this->m_pOuter);
    SequenceActivityName = GetSequenceName(v49, v48);
    v16 = forward;
    v15 = v67;
  }
  iLine = iStartLine + 1;
  CBasePlayerAnimState::AnimStatePrintf(
    this,
    iStartLine,
    "main: %s(%d), cycle: %.2f cyclerate: %.2f playbackrate: %.2f\n",
    SequenceActivityName,
    v8,
    m_Value,
    v16,
    v15);
  if ( this->m_AnimConfig.m_LegAnimType == LEGANIM_8WAY )
  {
    AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, 0);
    v51.m_Data = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
    v71 = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
    v52 = CBaseAnimating::GetModelPtr(this->m_pOuter);
    SequenceName = GetSequenceName(v52, v51);
    CBasePlayerAnimState::AnimStatePrintf(this, iLine, "idle: %s, weight: %.2f\n", SequenceName, v71);
    iLine = iStartLine + 2;
  }
  for ( i = 0; ; ++i )
  {
    v58 = i + iLine;
    if ( i >= CBaseAnimatingOverlay::GetNumAnimOverlays(this->m_pOuter) - 1 )
      break;
    v26 = 0;
    v27 = CBaseAnimatingOverlay::GetAnimOverlay(this->m_pOuter, i + 1);
    if ( CAnimationLayer::IsActive(v27) )
      v26 = v27->m_nOrder.m_Value;
    v60 = 0.0;
    if ( CAnimationLayer::IsActive(v27) )
      v60 = v27->m_op.m_flCycle.m_Value;
    forwarda = 0.0;
    if ( CAnimationLayer::IsActive(v27) )
      forwarda = v27->m_op.m_flWeight.m_Value.m_Value;
    m_nFlags = 0;
    if ( CAnimationLayer::IsActive(v27) )
      m_nFlags = v27->m_nFlags;
    IsActive = CAnimationLayer::IsActive(v27);
    m_Data = 0;
    if ( IsActive )
      m_Data = v27->m_op.m_hSequence.m_Value.m_Data;
    v56 = m_Data;
    v20 = CAnimationLayer::IsActive(v27);
    v21 = "-- ";
    v22 = v56;
    if ( v20 )
    {
      v23.m_Data = v27->m_op.m_hSequence.m_Value.m_Data;
      if ( v23.m_Data != 0 )
      {
        if ( showanimstate_activities.m_pParent->m_Value.m_nValue != 0 )
        {
          v24 = CBaseAnimating::GetModelPtr(this->m_pOuter);
          v25 = GetSequenceActivityName(v24, v23);
        }
        else
        {
          v28 = CBaseAnimating::GetModelPtr(this->m_pOuter);
          v25 = GetSequenceName(v28, v23);
        }
        v22 = v56;
        v21 = v25;
      }
    }
    v54 = i;
    CBasePlayerAnimState::AnimStatePrintf(
      this,
      v58,
      "%s(%d), flags (%d), weight: %.2f, cycle: %.2f, order (%d), aim (%d)",
      v21,
      v22,
      m_nFlags,
      forwarda,
      v60,
      v26,
      v54);
  }
  v29 = CBaseAnimating::GetBaseAnimatingController(this->m_pOuter);
  v30.m_Data = (*(v29->_vptr_CSkeletonAnimationController + 24))(v29);
  SequenceGroundSpeed = CBaseAnimating::GetSequenceGroundSpeed(this->m_pOuter, v30);
  m_flMaxGroundSpeed = this->m_flMaxGroundSpeed;
  v31 = CGlobalVarsBase::curtime(gpGlobals, 0);
  v32 = v58 + 1;
  CBasePlayerAnimState::AnimStatePrintf(
    this,
    v58,
    "vel: %.2f, time: %.2f, max: %.2f, animspeed: %.2f",
    fsqrt((vOuterVel.x * vOuterVel.x) + (vOuterVel.y * vOuterVel.y)),
    v31,
    m_flMaxGroundSpeed,
    SequenceGroundSpeed);
  y = this->m_angRender.y;
  v70 = v58 + 2;
  if ( this->m_AnimConfig.m_LegAnimType == LEGANIM_8WAY )
    CBasePlayerAnimState::AnimStatePrintf(
      this,
      v32,
      "ent yaw: %.2f, body_yaw: %.2f, move_yaw: %.2f, gait_yaw: %.2f, body_pitch: %.2f",
      y,
      g_flLastBodyYaw,
      this->m_flLastMoveYaw,
      this->m_flGaitYaw,
      g_flLastBodyPitch);
  else
    CBasePlayerAnimState::AnimStatePrintf(
      this,
      v32,
      "ent yaw: %.2f, body_yaw: %.2f, body_pitch: %.2f, move_x: %.2f, move_y: %.2f",
      y,
      g_flLastBodyYaw,
      g_flLastBodyPitch,
      this->m_vLastMovePose.x,
      this->m_vLastMovePose.y);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_pOuter);
  x = AbsOrigin->x;
  v36 = AbsOrigin->y;
  angles.x = 0.0;
  v37 = AbsOrigin->z + 3.0;
  angles.z = 0.0;
  v57 = x + 0.0;
  v59 = v36 + 0.0;
  v62 = v37;
  angles.y = this->m_flEyeYaw;
  AngleVectors(&angles, &vForward, &vRight, &vUp);
  v38 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 49);
  v84 = (vForward.y * 80.0) + v59;
  v83 = (80.0 * vForward.x) + v57;
  v85 = (vForward.z * 80.0) + v62;
  v39 = (vRight.x * 10.0) * 0.5;
  v40 = (vRight.y * 10.0) * 0.5;
  v41 = (10.0 * vRight.z) * 0.5;
  v80 = v57 - v39;
  v77 = v39 + v57;
  v81 = v59 - v40;
  v78 = v40 + v59;
  v82 = v62 - v41;
  v79 = v41 + v62;
  v38(debugoverlay, &v77, &v80, &v83, 255, 0, 0.01, 0, 255, 0);
  angles.y = this->m_angRender.y;
  AngleVectors(&angles, &vForward, &vRight, &vUp);
  v42 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 49);
  v83 = (80.0 * vForward.x) + v57;
  v85 = (vForward.z * 80.0) + (v62 + 0.5);
  v84 = (vForward.y * 80.0) + v59;
  v43 = (vRight.x * 10.0) * 0.5;
  v44 = (vRight.y * 10.0) * 0.5;
  v45 = (10.0 * vRight.z) * 0.5;
  v80 = v57 - v43;
  v77 = v57 + v43;
  v78 = v59 + v44;
  v81 = v59 - v44;
  v82 = (v62 + 0.5) - v45;
  v79 = v45 + (v62 + 0.5);
  v42(debugoverlay, &v77, &v80, &v83, 0, 0, 0.01, 255, 255, 0);
  return v70;
}


// CBasePlayerAnimState::DebugShowAnimStateFull  (line 1512, @0x000000000214e940, libserver.so)
// calls: CBasePlayerAnimState::AnimStateLog
// strings: "----------------- frame %d -----------------\n", "--------------------------------------------\n\n"
void __fastcall CBasePlayerAnimState::DebugShowAnimStateFull(CBasePlayerAnimState *const this, int iStartLine)
{
  CBasePlayerAnimState::AnimStateLog(this, "----------------- frame %d -----------------\n", gpGlobals->framecount);
  (*(*this->gap0 + 144LL))(this, iStartLine);
  CBasePlayerAnimState::AnimStateLog(this, "--------------------------------------------\n\n");
}


// CBasePlayerAnimState::SelectWeightedSequence  (line 1522, @0x000000000213eec0, libserver.so)
// calls: CBaseAnimating::SelectWeightedSequence
HSequence __fastcall CBasePlayerAnimState::SelectWeightedSequence(
        const CBasePlayerAnimState *const this,
        Activity activity)
{
  return CBaseAnimating::SelectWeightedSequence(this->m_pOuter, activity);
}


// CBasePlayerAnimState::SnapYawTo  (line 1527, @0x000000000214e990, libserver.so)
float __fastcall CBasePlayerAnimState::SnapYawTo(CBasePlayerAnimState *const this, float a2, float flValue)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  bool v5; // cc
  float v6; // xmm0_4

  v3 = a2;
  v4 = 0.0;
  v5 = a2 >= 0.0;
  v6 = 1.0;
  if ( !v5 )
  {
    v3 = -v3;
    v6 = -1.0;
  }
  if ( v3 < 23.0 )
    return v6 * v4;
  if ( v3 < 67.0 )
    return v6 * 45.0;
  if ( v3 >= 113.0 )
  {
    if ( v3 < 157.0 )
      v4 = 135.0;
    else
      v4 = 180.0;
    return v6 * v4;
  }
  return v6 * 90.0;
}


// CBasePlayerAnimState::GetFeetYawRate  (line 1560, @0x000000000213ce00, libserver.so)  // inlines: GetFloat
float __fastcall CBasePlayerAnimState::GetFeetYawRate(CBasePlayerAnimState *const this)
{
  return mp_feetyawrate.m_pParent->m_Value.m_fValue;
}


