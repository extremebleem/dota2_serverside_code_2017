
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABody::CDOTABody  (line 12, @0x00000000027e3dd0, libserver.so)  // inlines: IBody
// calls: INextBotComponent::INextBotComponent
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTABody::CDOTABody(CDOTABody *const this, CDOTA_BaseNPC *me)
{
  INextBot *v2; // rax
  INextBot *v4; // rsi

  v2 = &me->INextBot;
  v4 = 0;
  if ( me != 0 )
    v4 = v2;
  INextBotComponent::INextBotComponent(this, v4);
  this->m_me = me;
  this->_vptr_INextBotEventResponder = &off_42B65F0;
  this->m_animation = -1;
  this->m_overrideanimation = -1;
}


// CDOTABody::Reset  (line 21, @0x00000000027dff00, libserver.so)
void __fastcall CDOTABody::Reset(CDOTABody *const this)
{
  this->m_animation = -1;
  this->m_overrideanimation = -1;
}


// CDOTABody::Update  (line 29, @0x00000000027e4390, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, GetCycle, GetElapsed, GetTimebaseRegister, InTargetThread, IsConsideredHero, IsEnabled, IsGamePaused, IsSequenceFinished, NetworkStateChanged, PLAT_CPU_TIME, Set, operator=<float>, ~CMicroProfilerGuard, ~CVProfScope
// calls: CBaseAnimating::GetBaseAnimatingController, CDOTABody::StartAnimation, CBaseAnimating::StudioFrameAdvance, CBaseAnimating::DispatchAnimEvents, CDOTA_BaseNPC::CanBeSeenByAnyOpposingTeam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "CDOTABody::Update"
void __fastcall CDOTABody::Update(CDOTABody *const this)
{
  int m_enabled; // r8d
  bool v3; // r13
  const CBaseAnimatingController *BaseAnimatingController; // rax
  uint32 m_iUnitType; // eax
  __int64 m_animation; // rsi
  CDOTA_BaseNPC *m_me; // rdi
  uint32 v8; // eax
  float m_Value; // r14d
  CDOTA_BaseNPC *v10; // r12
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v12; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v15; // rax

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v12 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTABody::Update" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CDOTABody::Update", 0, "Bots", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v15 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v15->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v12 + __rdtsc();
  }
  if ( (*(this->m_me->_vptr_IHandleEntity + 443))(this->m_me) == 0
    && (g_pGameRules == 0 || g_pGameRules[19].m_szQuestName[29] == 0) )
  {
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this->m_me);
    if ( (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 19))(BaseAnimatingController) == 0 )
      goto LABEL_14;
    m_iUnitType = this->m_me->m_iUnitType;
    if ( (m_iUnitType & 0x10) != 0 && (m_iUnitType & 4) == 0 )
      goto LABEL_5;
    m_animation = this->m_animation;
    if ( (m_animation - 1591) <= 1 || m_animation == 1710 )
    {
      if ( m_animation == 1710 )
      {
        this->m_animation = 1591;
        LODWORD(m_animation) = 1591;
      }
    }
    else
    {
      if ( m_animation != 1711 )
        goto LABEL_13;
      this->m_animation = 1592;
      LODWORD(m_animation) = 1592;
    }
    CDOTABody::StartAnimation(this, m_animation, 1, 1.0);
    m_animation = this->m_animation;
LABEL_13:
    (*(this->m_bot->IBody::INextBotComponent::_vptr_INextBotEventResponder + 13))(this->m_bot, m_animation);
LABEL_14:
    CBaseAnimating::StudioFrameAdvance(this->m_me, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
    CBaseAnimating::DispatchAnimEvents(this->m_me, this->m_me);
    if ( !CDOTA_BaseNPC::CanBeSeenByAnyOpposingTeam(this->m_me) )
    {
      m_me = this->m_me;
      v8 = m_me->m_iUnitType;
      if ( (v8 & 1) != 0 || (v8 & 0x102) != 0 )
      {
        m_Value = CBaseAnimating::GetBaseAnimatingController(m_me)->m_baseLayer.m_flCycle.m_Value;
        v10 = this->m_me;
        if ( m_Value != v10->m_flStartSequenceCycle.m_Value )
        {
          (*(v10->_vptr_IHandleEntity + 22))(v10, 4192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v10->m_flStartSequenceCycle.m_Value = m_Value;
        }
      }
    }
  }
LABEL_5:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTABody::GetAnimationSpeed  (line 79, @0x00000000027e3e20, libserver.so)  // inlines: GetFloat, GetModelScaleAnimationRateMultiplier, GetSequence
// calls: CBaseAnimating::GetModelScale, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::GetSequenceGroundSpeed, RandomFloat, CDOTA_BaseNPC::GetHasteFactor, CDOTA_BaseNPC::GetAttackAnimationPoint, sqrt
// callers: CDOTABody::StartAnimation, CDOTABehaviorAttack::Update, CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorAttackPhase::Update, CDOTABehaviorMoveTo::Update
float __fastcall CDOTABody::GetAnimationSpeed(CDOTABody *const this, Activity animation)
{
  double v4; // xmm1_8
  __m128d v5; // xmm0
  CDOTA_BaseNPC *m_me; // rdi
  float v7; // xmm1_4
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v9; // eax
  float SequenceGroundSpeed; // xmm0_4
  float AttackAnimationPoint; // xmm0_4
  float flGroundSpeed; // [rsp+8h] [rbp-18h]
  float flBonus; // [rsp+Ch] [rbp-14h]
  float flBonusa; // [rsp+Ch] [rbp-14h]

  v4 = sqrt(CBaseAnimating::GetModelScale(this->m_me));
  v5 = 0x3FF0000000000000uLL;
  m_me = this->m_me;
  v5.m128d_f64[0] = 1.0 / v4;
  v7 = _mm_movedup_pd(v5).m128d_f64[0];
  if ( m_me->m_bIsPhantom.m_Value )
    return v7;
  if ( animation <= 1505 )
  {
    if ( animation >= 1503 )
    {
      flBonusa = CDOTA_BaseNPC::GetHasteFactor(m_me);
      AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(this->m_me);
      v7 = 1.0;
      if ( AttackAnimationPoint != 0.0 )
      {
        flGroundSpeed = CDOTA_BaseNPC::GetAttackAnimationPoint(this->m_me)
                      - dota_special_attack_delay.m_pParent->m_Value.m_fValue;
        return (flGroundSpeed / CDOTA_BaseNPC::GetAttackAnimationPoint(this->m_me)) * flBonusa;
      }
    }
    else if ( animation == 1502 )
    {
      flBonus = v7;
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(m_me);
      v9.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
      SequenceGroundSpeed = CBaseAnimating::GetSequenceGroundSpeed(this->m_me, v9);
      v7 = flBonus;
      if ( SequenceGroundSpeed != 0.0 )
        return flBonus * (*((*(this->m_me->_vptr_IHandleEntity + 376))(this->m_me) + 172) / SequenceGroundSpeed);
    }
    return v7;
  }
  if ( (animation - 1591) > 1 )
    return v7;
  return RandomFloat(0.80000001, 1.2);
}


// CDOTABody::StartAnimation  (line 138, @0x00000000027e3fc0, libserver.so)  // inlines: GetSequence, NetworkStateChanged, Set, SetPlaybackRate, curtime, operator=<float>, operator=<int>
// calls: CBaseAnimating::GetModelPtr, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, CBaseAnimating::GetBaseAnimatingController, CDOTABody::GetAnimationSpeed, CBaseAnimating::SetSequence, CBaseAnimating::SetCycle, GetSequenceVariantForActivity, CBaseAnimating::IsSequenceDebugging, CDOTA_BaseNPC::HasStartedGesture, CDOTA_BaseNPC::RemoveGesture, LoggingSystem_IsChannelEnabled (16 total)
// callers: CDOTAGamerules::SetGameWinner, CDOTABody::Update, CDOTABody::RestoreAnimation, CDOTABehaviorAbilityChannel::OnStart, CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorAbilityPhase::BeginCast, CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorPet::FinishEmote, CDOTABehaviorPet::OnAnimationActivityComplete, CDOTABehaviorPet::StartEmote, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToNPC::Update (55 total)
// strings: "modifier_disable_taunt_animation_cancel", "DOTABody::StartAnimation", "SV:  %f tick(%d) curtime(%f) CDOTABody::StartAnimation %d seq %d variant %d\n"
HSequence __fastcall CDOTABody::StartAnimation(
        CDOTABody *const this,
        unsigned int animation,
        bool bForce,
        float fPlaybackRateMultiplier)
{
  unsigned int v8; // r12d
  CDOTA_BaseNPC *m_me; // rdi
  HSequence v10; // r14d
  const CBaseAnimatingController *BaseAnimatingController; // rax
  CBaseAnimatingController *v12; // rax
  float v13; // xmm1_4
  double v14; // xmm0_8
  double v15; // xmm1_8
  CDOTA_BaseNPC *v16; // r12
  double v17; // xmm2_8
  Activity m_animation; // r13d
  int SequenceVariantForActivity; // eax
  CDOTA_BaseNPC *v20; // r12
  int v21; // r13d
  const CBaseAnimatingController *v22; // rax
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  CDOTA_BaseNPC *v24; // rax
  int m_Value; // r15d
  unsigned int v26; // r12d
  CGlobalVars *v27; // r13
  CGlobalVars *v28; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm1_4
  unsigned int tickcount; // r13d
  double v32; // xmm0_8
  float fPlaybackRateMultiplierb; // [rsp+Ch] [rbp-34h]
  float fPlaybackRateMultiplierc; // [rsp+Ch] [rbp-34h]

  if ( (*(this->m_me->_vptr_IHandleEntity + 443))(this->m_me) != 0
    && (*(this->m_me->_vptr_IHandleEntity + 408))(this->m_me) != 0
    && !bForce
    || animation == -1
    || !this->m_bShouldAnimate
    || CBaseAnimating::GetModelPtr(this->m_me) == 0 )
  {
    return -1;
  }
  v8 = (*(this->m_me->_vptr_IHandleEntity + 441))(this->m_me, animation);
  if ( CDOTA_BaseNPC::FindModifierByName(this->m_me, "modifier_disable_taunt_animation_cancel", 0) == 0
    && v8 - 1500 > 2
    && CDOTA_BaseNPC::HasStartedGesture(this->m_me, 1536) )
  {
    if ( v8 == 1710 || v8 == 1591 )
      return -1;
    CDOTA_BaseNPC::RemoveGesture(this->m_me, 1536);
  }
  if ( bForce || v8 != this->m_animation )
  {
    (*(this->m_me->_vptr_IHandleEntity + 442))(this->m_me, v8);
    m_me = this->m_me;
    goto LABEL_10;
  }
  m_me = this->m_me;
  if ( m_me->m_bActivityModifiersDirty )
  {
LABEL_10:
    v10.m_Data = CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(m_me, v8).m_Data;
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this->m_me);
    if ( v10.m_Data == (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController)
      && v8 == this->m_animation
      && !bForce )
    {
      return v10;
    }
    if ( v10.m_Data != -1 )
    {
      this->m_animation = v8;
      fPlaybackRateMultiplierb = CDOTABody::GetAnimationSpeed(this, v8) * fPlaybackRateMultiplier;
      v12 = CBaseAnimating::GetBaseAnimatingController(this->m_me);
      (*(v12->_vptr_CSkeletonAnimationController + 22))(v12, fPlaybackRateMultiplierb);
      CBaseAnimating::SetSequence(this->m_me, v10, SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE);
      CBaseAnimating::SetCycle(this->m_me, 0.0, v13);
      v16 = this->m_me;
      v17 = 0.0;
      if ( v16->m_flStartSequenceCycle.m_Value != 0.0 )
      {
        (*(v16->_vptr_IHandleEntity + 22))(this->m_me, 4192, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v14, v15, 0.0);
        v16->m_flStartSequenceCycle.m_Value = 0.0;
        v16 = this->m_me;
      }
      m_animation = this->m_animation;
      if ( m_animation != v16->m_NetworkActivity.m_Value )
      {
        (*(v16->_vptr_IHandleEntity + 22))(v16, 4180, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v14, v15, v17);
        v16->m_NetworkActivity.m_Value = m_animation;
        m_animation = this->m_animation;
        v16 = this->m_me;
      }
      SequenceVariantForActivity = GetSequenceVariantForActivity(v10, v16, m_animation);
      v20 = this->m_me;
      v21 = SequenceVariantForActivity;
      if ( SequenceVariantForActivity != v20->m_NetworkSequenceIndex.m_Value )
      {
        (*(v20->_vptr_IHandleEntity + 22))(this->m_me, 4184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v20->m_NetworkSequenceIndex.m_Value = v21;
        v20 = this->m_me;
      }
      if ( CBaseAnimating::IsSequenceDebugging(v20) )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        {
          v24 = this->m_me;
          m_Value = v24->m_NetworkSequenceIndex.m_Value;
          v26 = v24->m_NetworkActivity.m_Value;
          v27 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            v28 = gpGlobals;
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v28 = gpGlobals;
            }
            m_flCurrentTime = v27->m_flCurrentTime;
          }
          else
          {
            v28 = 0;
            m_flCurrentTime = 0.0;
          }
          tickcount = v28->tickcount;
          fPlaybackRateMultiplierc = m_flCurrentTime;
          v32 = Plat_FloatTime();
          LoggingSystem_Log(
            LOG_SERVER,
            1,
            "SV:  %f tick(%d) curtime(%f) CDOTABody::StartAnimation %d seq %d variant %d\n",
            tickcount,
            v26,
            v10.m_Data,
            v32,
            fPlaybackRateMultiplierc,
            m_Value);
        }
        BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(this->m_me);
        CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "DOTABody::StartAnimation");
      }
      return v10;
    }
    return -1;
  }
  v22 = CBaseAnimating::GetBaseAnimatingController(m_me);
  return (*(v22->_vptr_CSkeletonAnimationController + 24))(v22);
}


// CDOTABody::GetAnimation  (line 217, @0x00000000027e4690, libserver.so)
// callers: CDOTABehaviorIdle::MaintainIdleActivity, CDOTABehaviorTutorialIdle::OnSuspend, CDOTABehaviorTutorialIdle::MaintainIdleActivity, CDOTABehaviorIdle::OnStartInternal, CDOTABehaviorMoveTo::Update, CDOTA_BaseNPC::GetRemainingSequenceDuration, CDOTA_BaseNPC::CheckIfActivityModifiersDirty, CDOTA_BaseNPC::ManageModelChanges, CDOTA_Unit_Hero_Tiny::LostModifier, CDOTA_Ability_Lycan_Howl::OnSpellStart, CDOTAHeroTaunt::ApplyEffects
Activity __fastcall CDOTABody::GetAnimation(const CDOTABody *const this)
{
  return this->m_animation;
}


// CDOTABody::IsAnimation  (line 225, @0x00000000027e46a0, libserver.so)
// callers: CDOTABehaviorAbilityPhase::BeginCast
bool __fastcall CDOTABody::IsAnimation(const CDOTABody *const this, Activity anim)
{
  return this->m_animation == anim;
}


// CDOTABody::GetHullWidth  (line 233, @0x00000000027e0630, libserver.so)  // inlines: OBBSize, VectorSubtract, WorldAlignSize, operator-
float __fastcall CDOTABody::GetHullWidth(const CDOTABody *const this)
{
  CCollisionProperty *m_pCollision; // rax

  m_pCollision = this->m_me->m_pCollision;
  if ( m_pCollision != 0 )
    return fmaxf(
             m_pCollision->m_vecMaxs.m_Value.x - m_pCollision->m_vecMins.m_Value.x,
             m_pCollision->m_vecMaxs.m_Value.y - m_pCollision->m_vecMins.m_Value.y);
  else
    return fmaxf(vec3_origin.x, vec3_origin.y);
}


// CDOTABody::GetHullHeight  (line 242, @0x00000000027e1100, libserver.so)  // inlines: OBBSize, VectorSubtract, WorldAlignSize, operator-
float __fastcall CDOTABody::GetHullHeight(const CDOTABody *const this)
{
  CCollisionProperty *m_pCollision; // rax

  m_pCollision = this->m_me->m_pCollision;
  if ( m_pCollision != 0 )
    return m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
  else
    return vec3_origin.z;
}


// CDOTABody::GetStandHullHeight  (line 250, @0x00000000027e1130, libserver.so)  // inlines: OBBSize, VectorSubtract, WorldAlignSize, operator-
float __fastcall CDOTABody::GetStandHullHeight(const CDOTABody *const this)
{
  CCollisionProperty *m_pCollision; // rax

  m_pCollision = this->m_me->m_pCollision;
  if ( m_pCollision != 0 )
    return m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
  else
    return vec3_origin.z;
}


// CDOTABody::GetCrouchHullHeight  (line 258, @0x00000000027dff20, libserver.so)
float __fastcall CDOTABody::GetCrouchHullHeight(const CDOTABody *const this)
{
  return (*(this->_vptr_INextBotEventResponder + 95))(this);
}


// CDOTABody::GetHullMins  (line 266, @0x00000000027dff40, libserver.so)  // inlines: WorldAlignMins
const Vector *__fastcall CDOTABody::GetHullMins(const CDOTABody *const this)
{
  CCollisionProperty *m_pCollision; // rdi

  m_pCollision = this->m_me->m_pCollision;
  if ( m_pCollision != 0 )
    return (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
  else
    return &vec3_origin;
}


// CDOTABody::GetHullMaxs  (line 274, @0x00000000027dff70, libserver.so)  // inlines: WorldAlignMaxs
const Vector *__fastcall CDOTABody::GetHullMaxs(const CDOTABody *const this)
{
  CCollisionProperty *m_pCollision; // rdi

  m_pCollision = this->m_me->m_pCollision;
  if ( m_pCollision != 0 )
    return (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
  else
    return &vec3_origin;
}


// CDOTABody::GetSolidMask  (line 282, @0x00000000027dffa0, libserver.so)
uint64 __fastcall CDOTABody::GetSolidMask(const CDOTABody *const this)
{
  return 552993;
}


// CDOTABody::RestoreAnimation  (line 287, @0x00000000027e46b0, libserver.so)
// calls: CDOTABody::StartAnimation
void __fastcall CDOTABody::RestoreAnimation(CDOTABody *const this)
{
  CDOTABody::StartAnimation(this, this->m_animation, 1, 1.0);
}


// CDOTABody::ManageOverrideAnimations  (line 292, @0x00000000027e46d0, libserver.so)  // inlines: GetModifier_Constant_First, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CBaseAnimatingOverlay::IsPlayingGesture, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CBaseAnimatingOverlay::FindGestureLayer, CBaseAnimatingOverlay::SetLayerWeight, CDOTA_BaseNPC::RemoveGesture, CBaseAnimatingOverlay::RestartGesture
void __fastcall CDOTABody::ManageOverrideAnimations(CDOTABody *const this)
{
  CDOTA_BaseNPC *m_me; // rdi
  __int64 v3; // rax
  float Modifier_Constant_First_Internal; // xmm0_4
  Activity v5; // r12d
  __int64 v6; // rax
  Activity v7; // esi
  int GestureLayer; // eax
  float v9; // xmm1_4
  Activity m_overrideanimation; // esi
  CDOTA_BaseNPC *v11; // rdi
  float Modifier_Constant_Highest_Internal; // [rsp+Ch] [rbp-14h]

  m_me = this->m_me;
  v3 = m_me->m_ModifierManager.m_buffsForModifiers[90];
  if ( v3 == 0xFF
    || m_me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0
    || (Modifier_Constant_First_Internal = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                                             &m_me->m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION,
                                             &CModifierParams::s_Default),
        m_me = this->m_me,
        v5 = Modifier_Constant_First_Internal,
        Modifier_Constant_First_Internal == -1) )
  {
    m_overrideanimation = this->m_overrideanimation;
    if ( m_overrideanimation == -1 )
      goto LABEL_6;
    CDOTA_BaseNPC::RemoveGesture(m_me, m_overrideanimation);
    this->m_overrideanimation = -1;
  }
  else if ( !CBaseAnimatingOverlay::IsPlayingGesture(m_me, v5) )
  {
    v11 = this->m_me;
    this->m_overrideanimation = v5;
    CBaseAnimatingOverlay::RestartGesture(v11, v5, 1, 1);
    m_me = this->m_me;
    goto LABEL_6;
  }
  m_me = this->m_me;
LABEL_6:
  v6 = m_me->m_ModifierManager.m_buffsForModifiers[91];
  if ( v6 != 0xFF && m_me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
  {
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &m_me->m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION_WEIGHT,
                                           &CModifierParams::s_Default);
    if ( Modifier_Constant_Highest_Internal > 0.0 )
    {
      v7 = this->m_overrideanimation;
      if ( v7 != -1 )
      {
        GestureLayer = CBaseAnimatingOverlay::FindGestureLayer(this->m_me, v7);
        CBaseAnimatingOverlay::SetLayerWeight(this->m_me, GestureLayer, Modifier_Constant_Highest_Internal, v9);
      }
    }
  }
}


