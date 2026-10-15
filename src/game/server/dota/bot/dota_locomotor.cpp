// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_locomotor.cpp:26
struct TurnDataEntry {
	float m_flTurnRate;  // +0x0

	// sizeof = 44
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Dir  (line 35, @0x000000000283bde0, libserver.so)
float __fastcall Dir(float a1, float f)
{
  if ( a1 < 0.0 )
    return -1.0;
  else
    return 1.0;
}


// CDOTALocomotor::CDOTALocomotor  (line 67, @0x000000000283c050, libserver.so)  // inlines: NetworkStateChanged, Set, Start, memset, operator=, operator=<float>
// calls: CLocomotionBase::CLocomotionBase, CountdownTimer::CountdownTimer, CountdownTimer::Now, CDOTALocomotor::InitializeTurnDataEntries, CLocomotionBase::~CLocomotionBase, _Unwind_Resume
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC
// globals: g_bTurnDataEntriesInitialized
void __fastcall CDOTALocomotor::CDOTALocomotor(CDOTALocomotor *const this, CDOTA_BaseNPC *unit)
{
  INextBot *v2; // rax
  bool v4; // zf
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t v8; // xmm0_4
  __m128i v9; // xmm0
  __m128i v10; // xmm3
  float v11; // r14d
  vec_t v12; // xmm0_4

  v2 = 0;
  if ( unit != 0 )
    v2 = &unit->INextBot;
  CLocomotionBase::CLocomotionBase(this, v2);
  this->_vptr_INextBotEventResponder = &off_42B9190;
  CountdownTimer::CountdownTimer(&this->m_movementStunTimer);
  CountdownTimer::CountdownTimer(&this->m_TriggerSweepTimer);
  this->m_bMoving = 0;
  this->m_bFacing = 0;
  v4 = !g_bTurnDataEntriesInitialized;
  this->m_flGroundMoveSpeed = 0.0;
  x = vec3_origin.x;
  this->m_bMotionControllerUpdateInProgress = 0;
  y = vec3_origin.y;
  this->m_flFacingAngle = 0.0;
  z = vec3_origin.z;
  this->m_vDestination.x = x;
  this->m_vDestination.y = y;
  this->m_vDestination.z = z;
  this->m_vTargetPosition.x = x;
  this->m_vTargetPosition.y = y;
  this->m_vTargetPosition.z = z;
  this->m_bMotionControllerRemoved = 0;
  this->m_pHorizontalMotionController = 0;
  this->m_pVerticalMotionController = 0;
  this->m_vMotionControlStartPosition.x = x;
  this->m_vMotionControlStartPosition.y = y;
  this->m_vMotionControlStartPosition.z = z;
  this->m_bMostRecentMotionIsFromMotionControllers = 0;
  this->m_vCurrentVelocityForTargeting.x = x;
  this->m_vCurrentVelocityForTargeting.y = y;
  this->m_vCurrentVelocityForTargeting.z = z;
  this->m_flYawVelocity = 0.0;
  memset(this->m_positionHistoryX, 0, 0x1D8u);
  this->m_positionHistoryX[118] = 0.0;
  memset(this->m_positionHistoryY, 0, 0x1D8u);
  this->m_positionHistoryY[118] = 0.0;
  this->m_nPositionHistoryIndex = 0;
  if ( v4 )
    CDOTALocomotor::InitializeTurnDataEntries(this);
  v8 = vec3_origin.x;
  this->m_nFrameLastUpdated = -1;
  this->m_vPreviousTriggerSweepOrigin.x = v8;
  this->m_vPreviousTriggerSweepOrigin.y = vec3_origin.y;
  this->m_vPreviousTriggerSweepOrigin.z = vec3_origin.z;
  *v9.m128i_i32 = CountdownTimer::Now(&this->m_TriggerSweepTimer);
  v10 = v9;
  *v10.m128i_i32 = *v9.m128i_i32 + 0.1;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( (*v9.m128i_i32 + 0.1) != this->m_TriggerSweepTimer.m_timestamp.m_Value )
  {
    (*(this->m_TriggerSweepTimer._vptr_CountdownTimer + 2))(&this->m_TriggerSweepTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_TriggerSweepTimer.m_timestamp.m_Value = v11;
  }
  if ( this->m_TriggerSweepTimer.m_duration.m_Value != 0.1 )
  {
    (*(this->m_TriggerSweepTimer._vptr_CountdownTimer + 2))(&this->m_TriggerSweepTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_TriggerSweepTimer.m_duration.m_Value = 0.1;
  }
  v12 = vec3_origin.x;
  this->m_bIsLeashed = 0;
  this->m_flMaxDistanceFromLeashPoint = 0.0;
  this->m_vLeashCenter.x = v12;
  this->m_vLeashCenter.y = vec3_origin.y;
  this->m_vLeashCenter.z = vec3_origin.z;
}


// CDOTALocomotor::InitializeTurnDataEntries  (line 119, @0x000000000283be10, libserver.so)
// callers: CDOTALocomotor::CDOTALocomotor
// globals: g_TurnDataEntries, g_bTurnDataEntriesInitialized
void __fastcall CDOTALocomotor::InitializeTurnDataEntries(CDOTALocomotor *const this)
{
  g_TurnDataEntries[0].m_flTurnRate = 0.1;
  g_TurnDataEntries[0].m_TurnData.m_flCastAngle11 = 11.0;
  g_TurnDataEntries[1].m_TurnData.m_flTurnAcceleration = 13333.0;
  g_TurnDataEntries[0].m_TurnData.m_flMaxTurnSpeed = 145.0;
  g_TurnDataEntries[0].m_TurnData.m_flTurnAcceleration = 5000.0;
  g_TurnDataEntries[0].m_TurnData.m_flTurnDeceleration = 1500.0;
  g_TurnDataEntries[0].m_TurnData.m_flImmediateMovementAngle = 72.0;
  g_TurnDataEntries[0].m_TurnData.m_flFullTurnMovementAngle = 105.0;
  g_TurnDataEntries[0].m_TurnData.m_flCastAngle180 = 58.0;
  g_TurnDataEntries[0].m_TurnData.m_flCastAngle135 = 45.0;
  g_TurnDataEntries[0].m_TurnData.m_flCastAngle90 = 33.0;
  g_TurnDataEntries[0].m_TurnData.m_flCastAngle45 = 20.0;
  g_TurnDataEntries[1].m_flTurnRate = 0.40000001;
  g_TurnDataEntries[1].m_TurnData.m_flMaxTurnSpeed = 480.0;
  g_TurnDataEntries[1].m_TurnData.m_flTurnDeceleration = 4000.0;
  g_TurnDataEntries[1].m_TurnData.m_flImmediateMovementAngle = 90.0;
  g_TurnDataEntries[1].m_TurnData.m_flFullTurnMovementAngle = 115.0;
  g_TurnDataEntries[1].m_TurnData.m_flCastAngle180 = 78.0;
  g_TurnDataEntries[1].m_TurnData.m_flCastAngle135 = 60.0;
  g_TurnDataEntries[1].m_TurnData.m_flCastAngle90 = 42.0;
  g_TurnDataEntries[1].m_TurnData.m_flCastAngle45 = 24.0;
  g_TurnDataEntries[1].m_TurnData.m_flCastAngle11 = 11.0;
  g_TurnDataEntries[2].m_flTurnRate = 0.5;
  g_TurnDataEntries[2].m_TurnData.m_flMaxTurnSpeed = 560.0;
  g_TurnDataEntries[2].m_TurnData.m_flTurnAcceleration = 13333.0;
  g_TurnDataEntries[2].m_TurnData.m_flTurnDeceleration = 5000.0;
  g_TurnDataEntries[2].m_TurnData.m_flImmediateMovementAngle = 96.0;
  g_TurnDataEntries[2].m_TurnData.m_flFullTurnMovementAngle = 115.0;
  g_TurnDataEntries[2].m_TurnData.m_flCastAngle180 = 85.0;
  g_TurnDataEntries[2].m_TurnData.m_flCastAngle135 = 65.0;
  g_TurnDataEntries[2].m_TurnData.m_flCastAngle90 = 45.0;
  g_TurnDataEntries[2].m_TurnData.m_flCastAngle45 = 26.0;
  g_TurnDataEntries[2].m_TurnData.m_flCastAngle11 = 11.0;
  g_TurnDataEntries[3].m_flTurnRate = 0.60000002;
  g_TurnDataEntries[3].m_TurnData.m_flMaxTurnSpeed = 630.0;
  g_TurnDataEntries[3].m_TurnData.m_flTurnAcceleration = 13333.0;
  g_TurnDataEntries[3].m_TurnData.m_flTurnDeceleration = 6000.0;
  g_TurnDataEntries[3].m_TurnData.m_flImmediateMovementAngle = 102.0;
  g_TurnDataEntries[3].m_TurnData.m_flFullTurnMovementAngle = 115.0;
  g_TurnDataEntries[3].m_TurnData.m_flCastAngle180 = 92.0;
  g_TurnDataEntries[3].m_TurnData.m_flCastAngle135 = 70.0;
  g_TurnDataEntries[3].m_TurnData.m_flCastAngle90 = 49.0;
  g_TurnDataEntries[3].m_TurnData.m_flCastAngle45 = 27.0;
  g_TurnDataEntries[3].m_TurnData.m_flCastAngle11 = 11.0;
  g_TurnDataEntries[4].m_flTurnRate = 1.0;
  g_TurnDataEntries[4].m_TurnData.m_flMaxTurnSpeed = 725.0;
  g_TurnDataEntries[4].m_TurnData.m_flTurnAcceleration = 13333.0;
  g_TurnDataEntries[4].m_TurnData.m_flTurnDeceleration = 10000.0;
  g_TurnDataEntries[4].m_TurnData.m_flImmediateMovementAngle = 125.0;
  g_TurnDataEntries[4].m_TurnData.m_flFullTurnMovementAngle = 130.0;
  g_TurnDataEntries[4].m_TurnData.m_flCastAngle180 = 118.0;
  g_TurnDataEntries[4].m_TurnData.m_flCastAngle135 = 90.0;
  g_TurnDataEntries[4].m_TurnData.m_flCastAngle90 = 61.0;
  g_TurnDataEntries[4].m_TurnData.m_flCastAngle45 = 32.0;
  g_TurnDataEntries[4].m_TurnData.m_flCastAngle11 = 11.0;
  g_bTurnDataEntriesInitialized = 1;
}


// MakeOnUnitMovedEvent  (line 215, @0x000000000283c2f0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, Length2D, Set, SetUnit, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// callers: CDOTA_Modifier_Teleporting::OnCreated, CDOTALocomotor::UpdateMotionControlledMovement, CDOTALocomotor::UpdateStandardMovement
CModifierParams *__fastcall MakeOnUnitMovedEvent(
        CModifierParams *__return_ptr retstr,
        CDOTA_BaseNPC *const me,
        const Vector *const vOldLocation,
        const Vector *const vNewLocation)
{
  CModifierParams *result; // rax
  CEntityIdentity *m_pEntity; // rdi
  int v6; // esi
  __int16 v7; // r8

  result = retstr;
  retstr->ability.m_Index = -1;
  retstr->fDamage = 0.0;
  retstr->fOriginalDamage = 0.0;
  retstr->nActivity = -1;
  retstr->bTooltip = 0;
  retstr->nTooltipParam = 0;
  retstr->bIgnoreInvis = 0;
  retstr->bNoCooldown = 0;
  retstr->bReincarnate = 0;
  retstr->bDoNotConsume = 0;
  retstr->fDistance = 0.0;
  retstr->inflictor.m_Index = -1;
  retstr->nDamageflags = 0;
  retstr->nDamageCategory = 0;
  retstr->pOrb = 0;
  retstr->pOrb2 = 0;
  retstr->nCost = 0;
  retstr->nOrdertype = 0;
  retstr->bCraniumBasherTested = 0;
  retstr->bHeartRegenApplied = 0;
  retstr->bDiffusalApplied = 0;
  retstr->bChainLightningConsidered = 0;
  retstr->bSuppressDamage = 0;
  retstr->bRangedAttack = 0;
  retstr->nPlayerids_stick = 0;
  retstr->hattacker.m_Index = -1;
  retstr->htarget.m_Index = -1;
  retstr->hunit.m_Index = -1;
  if ( me != 0 )
  {
    m_pEntity = me->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v7 = 0x7FFF;
      else
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(result->hunit.m_Index) = v7 | result->hunit.m_Index & 0x8000;
      result->hunit.m_Index = (v6 << 15) | result->hunit.m_Index & 0x7FFF;
    }
  }
  result->fDistance = fsqrt(
                        ((vOldLocation->x - vNewLocation->x) * (vOldLocation->x - vNewLocation->x))
                      + ((vOldLocation->y - vNewLocation->y) * (vOldLocation->y - vNewLocation->y)));
  result->vOldLoc = *vOldLocation;
  result->vNewLoc = *vNewLocation;
  return result;
}


// CDOTALocomotor::Update  (line 227, @0x00000000028472f0, libserver.so)  // inlines: AddObstructionProperty, DOTAGameRules, GetBool, GetInt, GetPaddedCollisionRadius, HasFlyMovementCapability, HasMovementCapability, InState, IsGamePaused, Length2DSqr, QAngle, VectorSubtract, operator-
// calls: CDOTALocomotor::GetMe, CDOTALocomotor::RecordPositionInHistory, UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, NDebugOverlay::Circle, CDOTALocomotor::UpdateFacing, C2DGridObstructionManager::UpdateObjectObstruction, CDOTALocomotor::UpdateMotionControlledMovement, CDOTALocomotor::DoTriggerSweep, CDOTALocomotor::UpdateStandardMovement
void __fastcall CDOTALocomotor::Update(CDOTALocomotor *const this)
{
  CDOTA_BaseNPC *Me; // r12
  int tickcount; // eax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v5; // eax
  CBasePlayer *v6; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  float v9; // xmm1_4
  float m_flHullRadius; // xmm0_4
  const Vector *v11; // rax
  float v12; // xmm0_4
  const Vector *v13; // rax
  float radius; // [rsp+Ch] [rbp-34h]
  float radiusa; // [rsp+Ch] [rbp-34h]
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF

  if ( g_pGameRules == 0 || g_pGameRules[19].m_szQuestName[29] == 0 )
  {
    Me = CDOTALocomotor::GetMe(this);
    if ( Me != 0 )
    {
      tickcount = gpGlobals->tickcount;
      this->m_bMostRecentMotionIsFromMotionControllers = 0;
      this->m_nFrameLastUpdated = tickcount;
      if ( !Me->m_bIsPhantom.m_Value || Me->m_bIsPhantomBlocker )
      {
        if ( Me->m_bIsWaitingToSpawn.m_Value )
        {
          m_pObstructionRecord = Me->m_pObstructionRecord;
          v5 = Me->m_nObstructionProperties | 1;
          Me->m_nObstructionProperties = v5;
          if ( m_pObstructionRecord != 0 )
            m_pObstructionRecord->m_ObjectProperties = v5;
        }
        else
        {
          v6 = UTIL_PlayerByIndex(1);
          if ( v6 != 0 )
          {
            AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
            v8 = CBaseEntity::GetAbsOrigin(Me);
            v9 = v8->y - AbsOrigin->y;
            if ( (((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + (v9 * v9)) < 2250000.0 )
            {
              if ( dota_unit_show_bounding_radius.m_pParent->m_Value.m_nValue != 0 )
              {
                m_flHullRadius = Me->m_flHullRadius;
                angles.x = -90.0;
                angles.y = 0.0;
                radius = m_flHullRadius;
                angles.z = 0.0;
                v11 = CBaseEntity::GetAbsOrigin(Me);
                NDebugOverlay::Circle(v11, &angles, radius, 0xFFu, 0xFFu, 0, 255, 0.01023, 1);
              }
              if ( dota_unit_show_collision_radius.m_pParent->m_Value.m_nValue != 0 )
              {
                v12 = Me->m_flHullRadius + Me->m_flCollisionPadding;
                angles.x = -90.0;
                angles.y = 0.0;
                angles.z = 0.0;
                radiusa = v12;
                v13 = CBaseEntity::GetAbsOrigin(Me);
                NDebugOverlay::Circle(v13, &angles, radiusa, 0xFFu, 0x80u, 0, 255, 0.01023, 1);
              }
            }
          }
          CDOTALocomotor::UpdateFacing(this, Me);
          if ( (Me->m_iMoveCapabilities & 3) != 0
            || (BYTE3(Me->m_nUnitState64.m_Value) & 1 | ((Me->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
          {
            if ( this->m_pHorizontalMotionController != 0 || this->m_pVerticalMotionController != 0 )
              CDOTALocomotor::UpdateMotionControlledMovement(this, Me);
            else
              CDOTALocomotor::UpdateStandardMovement(this, Me);
            CDOTALocomotor::DoTriggerSweep(this, Me);
          }
          C2DGridObstructionManager::UpdateObjectObstruction(&g_GridNav.m_ObstructionManager, &Me->CObstructionObject);
        }
      }
      CDOTALocomotor::RecordPositionInHistory(this);
    }
  }
}


// CDOTALocomotor::DoTriggerSweep  (line 296, @0x000000000283c490, libserver.so)  // inlines: IsElapsed, NetworkStateChanged, Set, Start, operator!=, operator=, operator=<float>
// calls: CountdownTimer::Now, CBaseEntity::GetAbsOrigin, CBaseEntity::PhysicsTouchTriggers, RandomFloat
// callers: CDOTALocomotor::Update
void __fastcall CDOTALocomotor::DoTriggerSweep(CDOTALocomotor *const this, CDOTA_BaseNPC *me)
{
  const Vector *AbsOrigin; // rax
  double v5; // xmm0_8
  double v6; // xmm1_8
  float v7; // [rsp+8h] [rbp-28h]
  float flRandomInterval; // [rsp+Ch] [rbp-24h]

  if ( ((me->m_iUnitType & 0x400) == 0 || me->m_iIsControllableByPlayer64.m_Value != 0)
    && CountdownTimer::Now(&this->m_TriggerSweepTimer) >= this->m_TriggerSweepTimer.m_timestamp.m_Value )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    if ( this->m_vPreviousTriggerSweepOrigin.x != AbsOrigin->x
      || this->m_vPreviousTriggerSweepOrigin.y != AbsOrigin->y
      || this->m_vPreviousTriggerSweepOrigin.z != AbsOrigin->z )
    {
      CBaseEntity::PhysicsTouchTriggers(me, 0);
      flRandomInterval = RandomFloat(0.2, 0.5);
      if ( (me->m_iUnitType & 1) != 0 && !me->m_bIsIllusion.m_Value )
        flRandomInterval = 0.1;
      *&v5 = CountdownTimer::Now(&this->m_TriggerSweepTimer) + flRandomInterval;
      if ( *&v5 != this->m_TriggerSweepTimer.m_timestamp.m_Value )
      {
        v7 = *&v5;
        (*(this->m_TriggerSweepTimer._vptr_CountdownTimer + 2))(
          &this->m_TriggerSweepTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        *&v5 = LODWORD(v7);
        this->m_TriggerSweepTimer.m_timestamp.m_Value = v7;
      }
      if ( flRandomInterval != this->m_TriggerSweepTimer.m_duration.m_Value )
      {
        (*(this->m_TriggerSweepTimer._vptr_CountdownTimer + 2))(
          &this->m_TriggerSweepTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v5,
          v6,
          flRandomInterval);
        this->m_TriggerSweepTimer.m_duration.m_Value = flRandomInterval;
      }
      this->m_vPreviousTriggerSweepOrigin = *CBaseEntity::GetAbsOrigin(me);
    }
  }
}


// SnapToGround  (line 321, @0x0000000002846260, libserver.so)
// calls: GetGroundHeight
// callers: DOTA_ExecuteOrders, CDOTA_TempTree::InitTree
void __fastcall SnapToGround(Vector *const pos, CDOTA_BaseNPC *pNPC)
{
  pos->z = GetGroundHeight(pos, pNPC);
}


// GetPositionOnGround  (line 326, @0x0000000002846280, libserver.so)
// calls: GetGroundHeight
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTAFogOfWarSystem::FindHeightLevelForEntity, CDOTA_Modifier_Cyclone::OnCreated, CGridNavPath::Update, CDOTA_Tutorial::MoveHero, CDOTA_Tutorial::ChangeHero, Script_GetGroundPosition, FindClearSpaceForUnit, FindSpaceBehindOrNearUnit, CCreateUnitSpawnCallback::CallBackAndDeleteMe, DOTA_CreateUnitByName, CDOTA_Commander::ActiveSpawnGroupChanged (27 total)
Vector __fastcall GetPositionOnGround(const Vector *const pos, CDOTA_BaseNPC *pNPC)
{
  float GroundHeight; // xmm0_4
  vec_t x; // xmm3_4
  vec_t v7[8]; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  GroundHeight = GetGroundHeight(pos, pNPC);
  x = pos->x;
  result.z = GroundHeight;
  v7[1] = pos->y;
  v7[0] = x;
  *&result.x = *v7;
  return result;
}


// GetPositionOnGround  (line 331, @0x00000000028465d0, libserver.so)  // inlines: Vector
// calls: GetGroundHeight
// callers: CGridNav::ShowObjectObstructions, DrawCulledPoint, DrawCollision, CShortPathProbe::AddStep, CShortPathProbe::Advance, CGridNavPath::ComputeShortPath, FindClearSpaceForUnit
__m128i __fastcall GetPositionOnGround(vec_t a1, vec_t x, float y, CDOTA_BaseNPC *pNPC)
{
  unsigned __int64 xa; // [rsp+8h] [rbp-38h]
  Vector pos; // [rsp+20h] [rbp-20h] BYREF
  __m128i v7; // [rsp+30h] [rbp-10h] BYREF

  pos.y = x;
  pos.x = a1;
  xa = __PAIR64__(LODWORD(x), LODWORD(a1));
  pos.z = 0.0;
  GetGroundHeight(&pos, pNPC);
  v7.m128i_i64[0] = xa;
  return _mm_loadl_epi64(&v7);
}


// GetGroundHeight  (line 336, @0x0000000002845dc0, libserver.so)  // inlines: CopyConstruct<Vector>, Count, Element, EnsureCapacity, GetSpawnGroupHandle, Insert, Next_Unchecked, Previous, Previous_Unchecked, RemoveAtHead, V_memmove, memmove, operator[]
// calls: CUtlQueue<Vector, CUtlMemory<Vector, int> >::IsValid, UTIL_TraceRayVerticalGroundHeight, __cxa_guard_acquire, __cxa_guard_release, CUtlMemory<Vector, int>::Grow, memmove, CUtlMemory<Vector, int>::EnsureCapacity
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateVerticalMotion, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTAGamerules::StartCreateHeroStatues, Script_GetGroundHeight, CDOTA_Bot_Script::GetGroundHeight, SnapToGround, GetPositionOnGround, CDOTALocomotor::UpdateMotionControlledMovement, CVerticalMotionController::UpdateSimpleAirTime, CDOTALocomotor::UpdateStandardMovement, CDOTABehaviorRoquelaireInvade::Update, CDOTA_Modifier_Kunkka_Torrent::OnCreated (49 total)
// globals: `guard variable for'CUtlQueue<Vector,CUtlMemory<Vector,int>>::Element(QueueIter_t)::dummy, CUtlQueue<Vector,CUtlMemory<Vector,int>>::Element(QueueIter_t)::dummy
float __fastcall GetGroundHeight(const Vector *const pos, CDOTA_BaseNPC *pNPC)
{
  float v2; // xmm5_4
  QueueIter_t m_tail; // ebx
  CUtlQueue<Vector,CUtlMemory<Vector,int> > *p_m_vPastGroundHeights; // r14
  Vector *v7; // rax
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  float result; // xmm0_4
  QueueIter_t m_head; // edx
  QueueIter_t v12; // eax
  vec_t v13; // xmm6_4
  float v14; // xmm5_4
  int m_nAllocationCount; // r15d
  int v16; // ecx
  QueueIter_t v17; // ebx
  __int64 v18; // r13
  Vector *v19; // rax
  QueueIter_t v20; // ecx
  int v21; // edx
  QueueIter_t v22; // ebx
  QueueIter_t v23; // eax
  int v24; // r14d
  vec_t v25; // [rsp+4h] [rbp-3Ch]
  vec_t v26; // [rsp+4h] [rbp-3Ch]
  float reta; // [rsp+8h] [rbp-38h]
  float ret; // [rsp+8h] [rbp-38h]
  float retb; // [rsp+8h] [rbp-38h]
  vec_t ret_4; // [rsp+Ch] [rbp-34h]
  float ret_4a; // [rsp+Ch] [rbp-34h]
  float ret_4b; // [rsp+Ch] [rbp-34h]

  if ( pNPC == 0 )
    return UTIL_TraceRayVerticalGroundHeight(0, pos->x, pos->y, 1000.0, -10000.0, pos->z, v2, 0x7021u);
  m_tail = pNPC->m_vPastGroundHeights.m_tail;
  p_m_vPastGroundHeights = &pNPC->m_vPastGroundHeights;
LABEL_3:
  while ( CUtlQueue<Vector,CUtlMemory<Vector,int>>::IsValid(p_m_vPastGroundHeights, m_tail) )
  {
    while ( 1 )
    {
      if ( m_tail == QueueIter_t::QUEUE_ITERATOR_INVALID )
      {
        if ( `guard variable for'CUtlQueue<Vector,CUtlMemory<Vector,int>>::Element(QueueIter_t)::dummy == 0
          && __cxa_guard_acquire(&`guard variable for'CUtlQueue<Vector,CUtlMemory<Vector,int>>::Element(QueueIter_t)::dummy) != 0 )
        {
          __cxa_guard_release(&`guard variable for'CUtlQueue<Vector,CUtlMemory<Vector,int>>::Element(QueueIter_t)::dummy);
        }
        v7 = &CUtlQueue<Vector,CUtlMemory<Vector,int>>::Element(QueueIter_t)::dummy;
      }
      else
      {
        v7 = &pNPC->m_vPastGroundHeights.m_memory.m_pMemory[m_tail];
      }
      if ( v7->x == pos->x && v7->y == pos->y )
        return v7->z;
      if ( m_tail == QueueIter_t::QUEUE_ITERATOR_INVALID )
        goto LABEL_3;
      if ( m_tail != pNPC->m_vPastGroundHeights.m_head
        && CUtlQueue<Vector,CUtlMemory<Vector,int>>::IsValid(p_m_vPastGroundHeights, m_tail) )
      {
        break;
      }
      m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
      if ( !CUtlQueue<Vector,CUtlMemory<Vector,int>>::IsValid(
              p_m_vPastGroundHeights,
              QueueIter_t::QUEUE_ITERATOR_INVALID) )
        goto LABEL_11;
    }
    if ( m_tail != 0 )
      --m_tail;
    else
      m_tail = pNPC->m_vPastGroundHeights.m_memory.m_nAllocationCount - 1;
  }
LABEL_11:
  m_pEntity = pNPC->m_pEntity;
  m_hSpawnGroup = 0;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  reta = pos->y;
  ret_4 = pos->x;
  result = UTIL_TraceRayVerticalGroundHeight(m_hSpawnGroup, pos->x, reta, 1000.0, -10000.0, pos->z, reta, 0x7021u);
  m_head = pNPC->m_vPastGroundHeights.m_head;
  v12 = pNPC->m_vPastGroundHeights.m_tail;
  v13 = ret_4;
  v14 = reta;
  if ( m_head == QueueIter_t::QUEUE_ITERATOR_INVALID )
  {
    m_nAllocationCount = pNPC->m_vPastGroundHeights.m_memory.m_nAllocationCount;
    if ( v12 != QueueIter_t::QUEUE_ITERATOR_INVALID )
      goto LABEL_18;
    goto LABEL_37;
  }
  m_nAllocationCount = pNPC->m_vPastGroundHeights.m_memory.m_nAllocationCount;
  if ( m_head > v12 )
    v16 = pNPC->m_vPastGroundHeights.m_memory.m_nAllocationCount - m_head + v12 + 1;
  else
    v16 = v12 + 1 - m_head;
  if ( v16 > 5 )
  {
    if ( m_head == v12 )
    {
      pNPC->m_vPastGroundHeights.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
      pNPC->m_vPastGroundHeights.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
      goto LABEL_37;
    }
    v20 = 0;
    if ( m_head != m_nAllocationCount - 1 )
      v20 = m_head + 1;
    pNPC->m_vPastGroundHeights.m_head = v20;
  }
  if ( v12 == QueueIter_t::QUEUE_ITERATOR_INVALID )
  {
LABEL_37:
    if ( m_nAllocationCount <= 0 )
    {
      v26 = ret_4;
      retb = result;
      ret_4b = v14;
      CUtlMemory<Vector,int>::EnsureCapacity(&p_m_vPastGroundHeights->m_memory, 1);
      v13 = v26;
      result = retb;
      v14 = ret_4b;
    }
    pNPC->m_vPastGroundHeights.m_tail = 0;
    v18 = 0;
    pNPC->m_vPastGroundHeights.m_head = 0;
    goto LABEL_23;
  }
LABEL_18:
  v17 = 0;
  if ( v12 != m_nAllocationCount - 1 )
    v17 = v12 + 1;
  if ( pNPC->m_vPastGroundHeights.m_head == v17 )
  {
    v25 = ret_4;
    ret = result;
    ret_4a = v14;
    CUtlMemory<Vector,int>::Grow(&p_m_vPastGroundHeights->m_memory, 1);
    v21 = pNPC->m_vPastGroundHeights.m_memory.m_nAllocationCount;
    v22 = pNPC->m_vPastGroundHeights.m_tail;
    v14 = ret_4a;
    result = ret;
    v13 = v25;
    if ( v22 == v21 - 1 )
    {
      v18 = 0;
      v17 = 0;
    }
    else
    {
      v17 = v22 + 1;
      v18 = v17;
    }
    v23 = pNPC->m_vPastGroundHeights.m_head;
    if ( v23 != 0 )
    {
      v24 = v21 - m_nAllocationCount;
      memmove(
        &pNPC->m_vPastGroundHeights.m_memory.m_pMemory[v21 - m_nAllocationCount + v23],
        &pNPC->m_vPastGroundHeights.m_memory.m_pMemory[v23],
        12LL * (m_nAllocationCount - v23));
      v13 = v25;
      pNPC->m_vPastGroundHeights.m_head += v24;
      result = ret;
      v14 = ret_4a;
    }
  }
  else
  {
    v18 = v17;
  }
  pNPC->m_vPastGroundHeights.m_tail = v17;
LABEL_23:
  v19 = &pNPC->m_vPastGroundHeights.m_memory.m_pMemory[v18];
  if ( v19 != 0 )
  {
    v19->x = v13;
    v19->y = v14;
    v19->z = result;
  }
  return result;
}


// CDOTALocomotor::Approach  (line 396, @0x0000000002827830, libserver.so)  // inlines: operator=
void __fastcall CDOTALocomotor::Approach(
        CDOTALocomotor *const this,
        const Vector *const goalPos,
        double a3,
        float goalWeight)
{
  this->m_bMoving = 1;
  this->m_vDestination = *goalPos;
}


// CDOTALocomotor::IsFacingLocation  (line 404, @0x000000000283d930, libserver.so)  // inlines: Length2DSqr, UTIL_AngleDiff, VectorSubtract, operator-
// calls: CDOTALocomotor::GetMe, CBaseEntity::GetAbsOrigin, UTIL_VecToYaw, CBaseEntity::GetAbsAngles, AngleDiff
// callers: CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorMoveTo::Update, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
bool __fastcall CDOTALocomotor::IsFacingLocation(
        CDOTALocomotor *const this,
        const Vector *const target,
        __m128i a3,
        float flAngle)
{
  float v4; // r14d
  CDOTA_BaseNPC *Me; // r12
  bool result; // al
  const Vector *AbsOrigin; // rax
  vec_t v9; // xmm0_4
  float z; // xmm2_4
  vec_t v11; // xmm2_4
  float v12; // xmm2_4
  float destAngle; // [rsp+0h] [rbp-34h]
  Vector vToTarget; // [rsp+4h] [rbp-30h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  Me = CDOTALocomotor::GetMe(this);
  result = 0;
  if ( Me != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(Me);
    v9 = target->y - AbsOrigin->y;
    z = target->z;
    vToTarget.x = target->x - AbsOrigin->x;
    vToTarget.y = v9;
    v11 = z - AbsOrigin->z;
    result = 1;
    vToTarget.z = v11;
    if ( ((vToTarget.x * vToTarget.x) + (v9 * v9)) >= 0.1 )
    {
      destAngle = UTIL_VecToYaw(&vToTarget);
      CBaseEntity::GetAbsAngles(Me);
      return v4 >= fabs(AngleDiff(destAngle, v12));
    }
  }
  return result;
}


// CDOTALocomotor::FaceTowards  (line 420, @0x0000000002828260, libserver.so)  // inlines: VectorSubtract, operator-
// calls: UTIL_VecToYaw
void __fastcall CDOTALocomotor::FaceTowards(CDOTALocomotor *const this, const Vector *const target)
{
  float v4; // xmm1_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  double v7; // [rsp+0h] [rbp-30h]
  Vector vForward; // [rsp+10h] [rbp-20h] BYREF

  this->m_bFacing = 1;
  v7 = (*(this->_vptr_INextBotEventResponder + 98))(this);
  v5 = target->z - v4;
  v6 = target->x - *&v7;
  vForward.y = target->y - *(&v7 + 1);
  vForward.z = v5;
  vForward.x = v6;
  this->m_flFacingAngle = UTIL_VecToYaw(&vForward);
}


// CDOTALocomotor::FaceTowards  (line 426, @0x0000000002827870, libserver.so)
void __fastcall CDOTALocomotor::FaceTowards(CDOTALocomotor *const this, float a2, float targetYaw)
{
  this->m_bFacing = 1;
  this->m_flFacingAngle = a2;
}


// CDOTALocomotor::GetFeet  (line 435, @0x000000000283da00, libserver.so)
// calls: CDOTALocomotor::GetMe, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTALocomotor::GetFeet(const CDOTALocomotor *const this)
{
  CDOTA_BaseNPC *Me; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Me = CDOTALocomotor::GetMe(this);
  if ( Me != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(Me);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    result.z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
  }
  return result;
}


// CDOTALocomotor::StopMovement  (line 445, @0x000000000283da70, libserver.so)  // inlines: operator=
// calls: CDOTALocomotor::GetMe, CBaseEntity::GetAbsOrigin
// callers: CGridNavPath::Update, CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit, CDOTABehaviorAbility::OnStart, CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorPet::StartEmote, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorCommandMoveToTargetToCast::OnStart, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorIdle::OnResume, CDOTABehaviorIdle::OnStartInternal (15 total)
void __fastcall CDOTALocomotor::StopMovement(CDOTALocomotor *const this, bool bClearTargetToo)
{
  CDOTA_BaseNPC *Me; // rax

  this->m_bMoving = 0;
  if ( bClearTargetToo )
  {
    Me = CDOTALocomotor::GetMe(this);
    if ( Me != 0 )
      this->m_vDestination = *CBaseEntity::GetAbsOrigin(Me);
  }
}


// CDOTALocomotor::UpdateStandardMovement  (line 461, @0x0000000002846740, libserver.so)  // inlines: AddObstructionProperty, CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Dot, DotProduct, GetCurrentVelocityForTargeting, GetFloat, HasFlyMovementCapability, InState, IsEventActiveOnServer, IsZero, NetworkStateChanged, NormalizeInPlace, Purge, Purge_FixedGrowable, RemoveAll, RemoveObstructionProperty, ScriptGetForward, Set, SnapToGround, Start, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator=<float>, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CGridNavBase::ClampToWorldEdge, GetGroundHeight, GetCommonObstructionManagerFlagsForNPC, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, RandomFloat, CountdownTimer::Now, CUtlMemory<IntersectionRecord_t, int>::Purge, CDOTA_BaseNPC::CheckForCollisionsWithNPCs, CBaseEntity::SetAbsOrigin (19 total)
// callers: CDOTALocomotor::Update
// globals: `guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward, CBaseEntity::ScriptGetForward(void)::vecForward
void __fastcall CDOTALocomotor::UpdateStandardMovement(CDOTALocomotor *const this, CDOTA_BaseNPC *me)
{
  const Vector *AbsOrigin; // rax
  bool v5; // zf
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm2_4
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  unsigned int v13; // eax
  ObstructionRecord_t *v14; // rdx
  int v15; // eax
  float m_flGroundMoveSpeed; // r12d
  float v17; // xmm0_4
  __int64 v18; // xmm0_8
  float v19; // xmm1_4
  float GroundHeight; // xmm0_4
  float m_flHullRadius; // xmm3_4
  ObstructionRelationshipClass_t v22; // eax
  char v23; // r12
  float m_fValue; // xmm1_4
  uint32 v25; // eax
  double v26; // xmm0_8
  double v27; // xmm1_8
  double v28; // xmm2_8
  double v29; // xmm3_8
  ObstructionRelationshipClass_t v30; // eax
  bool v31; // al
  uint32 v32; // eax
  ObstructionRelationshipClass_t v33; // eax
  __int64 v34; // r13
  int v35; // r14d
  CObstructionObject *m_pObstructionObject; // r12
  const Vector *v37; // rax
  float v38; // xmm0_4
  uint32 v39; // xmm2_4
  float *v40; // rax
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  const Vector *v44; // rax
  vec_t v45; // xmm2_4
  vec_t v46; // xmm0_4
  uint32 v47; // eax
  float flRelaitonshipRadiusAdjustment; // [rsp+10h] [rbp-460h]
  float flRelaitonshipRadiusAdjustmenta; // [rsp+10h] [rbp-460h]
  float them; // [rsp+20h] [rbp-450h]
  float themb; // [rsp+20h] [rbp-450h]
  float themc; // [rsp+20h] [rbp-450h]
  float themd; // [rsp+20h] [rbp-450h]
  float theme; // [rsp+20h] [rbp-450h]
  float thema; // [rsp+20h] [rbp-450h]
  float step; // [rsp+28h] [rbp-448h]
  float stepa; // [rsp+28h] [rbp-448h]
  float m_curInterval; // [rsp+30h] [rbp-440h]
  float x; // [rsp+34h] [rbp-43Ch]
  float z; // [rsp+38h] [rbp-438h]
  float v61; // [rsp+38h] [rbp-438h]
  float y; // [rsp+3Ch] [rbp-434h]
  float v63; // [rsp+3Ch] [rbp-434h]
  uint32 nAllFlags[3]; // [rsp+40h] [rbp-430h] BYREF
  int nAllFlags_0; // [rsp+4Ch] [rbp-424h] BYREF
  Vector to; // [rsp+50h] [rbp-420h] BYREF
  Vector vNewGroundPos; // [rsp+60h] [rbp-410h] BYREF
  CModifierParams params; // [rsp+70h] [rbp-400h] BYREF
  CollisionResultList_t results; // [rsp+100h] [rbp-370h] BYREF
  CollisionResultList_t results_0; // [rsp+2A0h] [rbp-1D0h] BYREF
  unsigned __int64 v71; // [rsp+438h] [rbp-38h]
  Vector v72; // 0:xmm0_8.8,8:xmm1_4.4

  v71 = __readfsqword(0x28u);
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v5 = !this->m_bMoving;
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  v6 = this->m_vDestination.x;
  z = AbsOrigin->z;
  v7 = this->m_vDestination.y;
  to.z = 0.0;
  v8 = v6 - x;
  v9 = v7 - y;
  this->m_vCurrentVelocityForTargeting.x = vec3_origin.x;
  v10 = vec3_origin.y;
  to.x = v8;
  this->m_vCurrentVelocityForTargeting.y = v10;
  v11 = vec3_origin.z;
  to.y = v9;
  this->m_vCurrentVelocityForTargeting.z = v11;
  if ( v5 || (me->m_nUnitState64.m_Value & 1) != 0 )
  {
    m_pObstructionRecord = me->m_pObstructionRecord;
    v13 = me->m_nObstructionProperties & 0xFFFFFFFE;
    me->m_nObstructionProperties = v13;
    if ( m_pObstructionRecord != 0 )
      m_pObstructionRecord->m_ObjectProperties = v13;
    return;
  }
  if ( v8 <= -0.0099999998 || v8 >= 0.0099999998 || v9 <= -0.0099999998 || v9 >= 0.0099999998 )
  {
    v14 = me->m_pObstructionRecord;
    v15 = me->m_nObstructionProperties | 1;
    me->m_nObstructionProperties = v15;
    if ( v14 == 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v14 = me->m_pObstructionRecord;
  v15 = me->m_nObstructionProperties & 0xFFFFFFFE;
  me->m_nObstructionProperties = v15;
  if ( v14 != 0 )
LABEL_11:
    v14->m_ObjectProperties = v15;
LABEL_12:
  m_curInterval = this->m_curInterval;
  step = VectorNormalize(&to);
  m_flGroundMoveSpeed = this->m_flGroundMoveSpeed;
  if ( `guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward);
  }
  (*(me->_vptr_IHandleEntity + 61))(me, &CBaseEntity::ScriptGetForward(void)::vecForward, 0, 0);
  v17 = fminf(m_flGroundMoveSpeed * m_curInterval, step);
  v72.z = (to.z * v17) + z;
  vNewGroundPos.y = (to.y * v17) + y;
  vNewGroundPos.z = v72.z;
  vNewGroundPos.x = (v17 * to.x) + x;
  *&v72.x = *&vNewGroundPos.x;
  CGridNavBase::ClampToWorldEdge(&g_GridNav, me, v72);
  *&params.ability.m_Index = v18;
  params.fOriginalDamage = v19;
  vNewGroundPos.z = v19;
  *&vNewGroundPos.x = v18;
  GroundHeight = GetGroundHeight(&vNewGroundPos, me);
  v5 = (me->m_iMoveCapabilities & 2) == 0;
  m_flHullRadius = me->m_flHullRadius;
  vNewGroundPos.z = GroundHeight;
  them = m_flHullRadius;
  if ( !v5 || (BYTE3(me->m_nUnitState64.m_Value) & 1 | ((me->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
  {
    GetCommonObstructionManagerFlagsForNPC(me, &nAllFlags_0, &params);
    flRelaitonshipRadiusAdjustment = me->m_flCollisionPadding;
    v30 = (*(me->_vptr_IHandleEntity + 454))(me);
    CGridNav::PrepareObstructionManager(
      &g_GridNav,
      them,
      nAllFlags_0,
      params.ability.m_Index | 0x10,
      v30,
      flRelaitonshipRadiusAdjustment);
    results_0.m_Size = 0;
    results_0.m_Memory.m_nAllocationCount = 16;
    results_0.m_Memory.m_nGrowSize = 0x80000000;
    results_0.m_Memory.m_pMemory = &results_0.m_Memory.m_FixedMemory;
    nAllFlags[0] = -2;
    v31 = CGridNav::CheckForCollisions(&g_GridNav, &vNewGroundPos, &results_0, nAllFlags, 0);
    v23 = 0;
    m_fValue = 0.0;
    if ( v31 )
    {
      v23 = 1;
      m_fValue = dota_unit_blocked_wait_time.m_pParent->m_Value.m_fValue;
    }
    results_0.m_Size = 0;
    v32 = results_0.m_Memory.m_nGrowSize & 0xC0000000;
    if ( results_0.m_Memory.m_nAllocationCount < 0 || results_0.m_Memory.m_pMemory == &results_0.m_Memory.m_FixedMemory )
    {
      if ( v32 == 0 )
      {
        themb = m_fValue;
        CUtlMemory<IntersectionRecord_t,int>::Purge(&results_0.m_Memory);
        m_fValue = themb;
      }
      goto LABEL_22;
    }
    if ( results_0.m_Memory.m_pMemory != 0 && v32 == 0 )
    {
LABEL_21:
      thema = m_fValue;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_fValue = thema;
    }
  }
  else
  {
    GetCommonObstructionManagerFlagsForNPC(me, nAllFlags, &nAllFlags_0);
    stepa = me->m_flCollisionPadding;
    v22 = (*(me->_vptr_IHandleEntity + 454))(me);
    CGridNav::PrepareObstructionManager(&g_GridNav, them, nAllFlags[0], nAllFlags_0 | 0x10, v22, stepa);
    results.m_Memory.m_pMemory = &results.m_Memory.m_FixedMemory;
    results.m_Size = 0;
    results.m_Memory.m_nAllocationCount = 16;
    results.m_Memory.m_nGrowSize = 0x80000000;
    params.ability.m_Index = -2;
    if ( CGridNav::CheckForCollisions(&g_GridNav, &vNewGroundPos, &results, &params.ability.m_Index, 0)
      || (flRelaitonshipRadiusAdjustmenta = me->m_flCollisionPadding,
          v33 = (*(me->_vptr_IHandleEntity + 454))(me),
          CGridNav::PrepareObstructionManager(
            &g_GridNav,
            them,
            nAllFlags[0] | 0x10,
            nAllFlags_0,
            v33,
            flRelaitonshipRadiusAdjustmenta),
          CDOTA_BaseNPC::CheckForCollisionsWithNPCs(me, &vNewGroundPos, &results, 1, 1)) )
    {
      v23 = 1;
      m_fValue = dota_unit_blocked_wait_time.m_pParent->m_Value.m_fValue;
    }
    else
    {
      results_0.m_Size = 0;
      results_0.m_Memory.m_nAllocationCount = 16;
      results_0.m_Memory.m_nGrowSize = 0x80000000;
      results_0.m_Memory.m_pMemory = &results_0.m_Memory.m_FixedMemory;
      GetCommonObstructionManagerFlagsForNPC(me, nAllFlags, &nAllFlags_0);
      CGridNav::PrepareObstructionManager(
        &g_GridNav,
        me->m_flHullRadius + 32.0,
        nAllFlags[0],
        nAllFlags_0,
        ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
        0.0);
      CDOTA_BaseNPC::CheckForCollisionsWithNPCs(me, &vNewGroundPos, &results_0, 1, 1);
      if ( results_0.m_Size <= 0 )
      {
LABEL_67:
        v23 = 0;
        m_fValue = 0.0;
      }
      else
      {
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          m_pObstructionObject = results_0.m_Memory.m_pMemory[v34].m_pObsRec->m_pObstructionObject;
          if ( m_pObstructionObject != 0
            && (m_pObstructionObject->m_nObstructionProperties & 0x10) != 0
            && (me->m_iIsControllableByPlayer64.m_Value == 0 || m_pObstructionObject[37]._vptr_CObstructionObject != 0) )
          {
            v37 = CBaseEntity::GetAbsOrigin(&m_pObstructionObject[-86].m_pObstructionRecord);
            v38 = v37->z - z;
            *&v39 = v37->x - x;
            params.fDamage = v37->y - y;
            params.fOriginalDamage = v38;
            params.ability.m_Index = v39;
            VectorNormalize(&params);
            if ( (((*&params.ability.m_Index * to.x) + (params.fDamage * to.y)) + (params.fOriginalDamage * to.z)) > dota_unit_blocked_look_ahead_angle_threshold.m_pParent->m_Value.m_fValue )
            {
              v40 = (*&m_pObstructionObject[-86].m_pObstructionRecord[47].m_ObjectProperties)(&m_pObstructionObject[-86].m_pObstructionRecord);
              v41 = v40[62];
              v42 = v40[63];
              v43 = v40[64];
              if ( (v41 <= -0.0099999998
                 || v41 >= 0.0099999998
                 || v42 <= -0.0099999998
                 || v42 >= 0.0099999998
                 || v43 <= -0.0099999998
                 || v43 >= 0.0099999998)
                && (((v41 * *&params.ability.m_Index) + (v42 * params.fDamage)) + (v43 * params.fOriginalDamage)) > 0.0 )
              {
                break;
              }
            }
          }
          ++v35;
          ++v34;
          if ( results_0.m_Size <= v35 )
            goto LABEL_67;
        }
        if ( me->m_iIsControllableByPlayer64.m_Value != 0 && m_pObstructionObject[37]._vptr_CObstructionObject != 0 )
          m_fValue = dota_unit_blocked_wait_time_mid.m_pParent->m_Value.m_fValue;
        else
          m_fValue = dota_unit_blocked_wait_time_long.m_pParent->m_Value.m_fValue;
        v23 = 1;
      }
      results_0.m_Size = 0;
      v47 = results_0.m_Memory.m_nGrowSize & 0xC0000000;
      if ( results_0.m_Memory.m_nAllocationCount < 0
        || results_0.m_Memory.m_pMemory == &results_0.m_Memory.m_FixedMemory )
      {
        if ( v47 == 0 )
        {
          theme = m_fValue;
          CUtlMemory<IntersectionRecord_t,int>::Purge(&results_0.m_Memory);
          m_fValue = theme;
        }
      }
      else if ( results_0.m_Memory.m_pMemory != 0 && v47 == 0 )
      {
        themd = m_fValue;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_fValue = themd;
      }
    }
    results.m_Size = 0;
    v25 = results.m_Memory.m_nGrowSize & 0xC0000000;
    if ( results.m_Memory.m_nAllocationCount < 0 || results.m_Memory.m_pMemory == &results.m_Memory.m_FixedMemory )
    {
      if ( v25 == 0 )
      {
        themc = m_fValue;
        CUtlMemory<IntersectionRecord_t,int>::Purge(&results.m_Memory);
        m_fValue = themc;
      }
      goto LABEL_22;
    }
    if ( results.m_Memory.m_pMemory != 0 && v25 == 0 )
      goto LABEL_21;
  }
LABEL_22:
  if ( v23 != 0 )
  {
    v63 = RandomFloat(m_fValue - 0.050000001, m_fValue + 0.050000001);
    *&v26 = CountdownTimer::Now(&this->m_movementStunTimer) + v63;
    if ( *&v26 != this->m_movementStunTimer.m_timestamp.m_Value )
    {
      v61 = *&v26;
      (*(this->m_movementStunTimer._vptr_CountdownTimer + 2))(
        &this->m_movementStunTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      *&v26 = LODWORD(v61);
      this->m_movementStunTimer.m_timestamp.m_Value = v61;
    }
    *&v29 = LODWORD(v63);
    if ( v63 != this->m_movementStunTimer.m_duration.m_Value )
    {
      (*(this->m_movementStunTimer._vptr_CountdownTimer + 2))(
        &this->m_movementStunTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v26,
        v27,
        v28,
        v63);
      this->m_movementStunTimer.m_duration.m_Value = v63;
    }
    (*(this->_vptr_INextBotEventResponder + 77))(this, v26, v27, v28, v29);
  }
  else
  {
    CBaseEntity::SetAbsOrigin(me, &vNewGroundPos);
    if ( g_pDOTAActiveModifiers->m_iActiveEventsHandlers[126] > 0 )
    {
      v44 = CBaseEntity::GetAbsOrigin(me);
      MakeOnUnitMovedEvent(&params, me, v44, &vNewGroundPos);
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_UNIT_MOVED, &params);
    }
    if ( m_curInterval > 0.0 )
    {
      v45 = (vNewGroundPos.z - z) * (1.0 / m_curInterval);
      v46 = (vNewGroundPos.x - x) * (1.0 / m_curInterval);
      this->m_vCurrentVelocityForTargeting.y = (vNewGroundPos.y - y) * (1.0 / m_curInterval);
      this->m_vCurrentVelocityForTargeting.z = v45;
      this->m_vCurrentVelocityForTargeting.x = v46;
    }
  }
}


// CDOTALocomotor::UpdateMotionControlledMovement  (line 640, @0x00000000028462c0, libserver.so)  // inlines: AddObstructionProperty, GetPositionOnGround, IsEventActiveOnServer, PostRemoveMotionController, RemoveObstructionProperty, Vector, operator!=, operator=
// calls: CBaseEntity::GetAbsOrigin, MakeOnUnitMovedEvent, FireModifierEvent, CGridNavBase::ClampToWorldEdge, CBaseEntity::SetAbsOrigin, CDOTALocomotor::PostRemoveMotionController, GetGroundHeight
// callers: CDOTALocomotor::Update
void __fastcall CDOTALocomotor::UpdateMotionControlledMovement(CDOTALocomotor *const this, CDOTA_BaseNPC *const me)
{
  bool v4; // zf
  Vector *AbsOrigin; // rax
  CHorizontalMotionController *m_pHorizontalMotionController; // rdi
  float m_curInterval; // xmm0_4
  __int64 v8; // rax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v10; // eax
  __int64 v11; // xmm0_8
  vec_t v12; // xmm1_4
  const Vector *v13; // rax
  vec_t y; // r14d
  vec_t z; // xmm0_4
  vec_t x; // [rsp+Ch] [rbp-D4h]
  Vector vOldPos; // [rsp+10h] [rbp-D0h] BYREF
  Vector vNewPos; // [rsp+20h] [rbp-C0h] BYREF
  Vector vNewPos_0; // [rsp+30h] [rbp-B0h] BYREF

  this->m_bMostRecentMotionIsFromMotionControllers = 1;
  this->m_bMotionControllerUpdateInProgress = 1;
  v4 = this->m_pHorizontalMotionController == 0;
  this->m_vCurrentVelocityForTargeting = vec3_origin;
  if ( v4 )
    goto LABEL_18;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  m_pHorizontalMotionController = this->m_pHorizontalMotionController;
  m_curInterval = this->m_curInterval;
  vOldPos = *AbsOrigin;
  (*(m_pHorizontalMotionController->_vptr_CHorizontalMotionController + 1))(
    m_pHorizontalMotionController,
    me,
    m_curInterval);
  v8 = *&CBaseEntity::GetAbsOrigin(me)->x;
  vNewPos.z = vOldPos.z;
  *&vNewPos.x = v8;
  if ( g_pDOTAActiveModifiers->m_iActiveEventsHandlers[126] > 0 )
  {
    MakeOnUnitMovedEvent(&vNewPos_0, me, &vOldPos, &vNewPos);
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_UNIT_MOVED, &vNewPos_0);
  }
  if ( vNewPos.x == vOldPos.x && vNewPos.y == vOldPos.y && vNewPos.z == vOldPos.z )
  {
    m_pObstructionRecord = me->m_pObstructionRecord;
    v10 = me->m_nObstructionProperties & 0xFFFFFFFE;
    me->m_nObstructionProperties = v10;
    if ( m_pObstructionRecord == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  m_pObstructionRecord = me->m_pObstructionRecord;
  v10 = me->m_nObstructionProperties | 1;
  me->m_nObstructionProperties = v10;
  if ( m_pObstructionRecord != 0 )
LABEL_6:
    m_pObstructionRecord->m_ObjectProperties = v10;
LABEL_7:
  CGridNavBase::ClampToWorldEdge(&g_GridNav, me, vNewPos);
  *&vNewPos_0.x = v11;
  vNewPos_0.z = v12;
  vNewPos.z = v12;
  *&vNewPos.x = v11;
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
  if ( this->m_pVerticalMotionController != 0 )
  {
LABEL_8:
    v13 = CBaseEntity::GetAbsOrigin(me);
    y = v13->y;
    x = v13->x;
    (*(this->m_pVerticalMotionController->_vptr_CVerticalMotionController + 1))(
      this->m_pVerticalMotionController,
      me,
      this->m_curInterval);
    z = CBaseEntity::GetAbsOrigin(me)->z;
    vNewPos_0.y = y;
    vNewPos_0.x = x;
    vNewPos_0.z = z;
    CBaseEntity::SetAbsOrigin(me, &vNewPos_0);
    goto LABEL_9;
  }
  vNewPos_0.z = GetGroundHeight(&vNewPos, me);
  vNewPos_0.x = vNewPos.x;
  vNewPos_0.y = vNewPos.y;
  CBaseEntity::SetAbsOrigin(me, &vNewPos_0);
LABEL_18:
  if ( this->m_pVerticalMotionController != 0 )
    goto LABEL_8;
LABEL_9:
  v4 = !this->m_bMotionControllerRemoved;
  this->m_bMotionControllerUpdateInProgress = 0;
  if ( !v4 )
  {
    CDOTALocomotor::PostRemoveMotionController(this, 1);
    this->m_bMotionControllerRemoved = 0;
  }
}


// CDOTALocomotor::ShouldTurnAnimate  (line 701, @0x000000000283dd80, libserver.so)  // inlines: UTIL_AngleDiff, abs<float>
// calls: CDOTALocomotor::GetMe, CDOTALocomotor::IsTurnPrevented, CDOTA_BaseNPC::IsAllowedToMove, CBaseEntity::GetAbsAngles, AngleDiff
// callers: CDOTABehaviorIdle::GetIdleActivity, CDOTABehaviorIdle::MaintainIdleActivity, CDOTABehaviorMoveTo::Update, CDOTABehaviorTutorialInvade::Update
bool __fastcall CDOTALocomotor::ShouldTurnAnimate(CDOTALocomotor *const this)
{
  CDOTA_BaseNPC *Me; // rax
  CDOTA_BaseNPC *v3; // rbx
  const QAngle *AbsAngles; // rax
  float v6; // xmm2_4
  float v7; // xmm0_4

  Me = CDOTALocomotor::GetMe(this);
  v3 = Me;
  if ( Me == 0 || CDOTALocomotor::IsTurnPrevented(this, Me) || !CDOTA_BaseNPC::IsAllowedToMove(v3) )
    return 0;
  AbsAngles = CBaseEntity::GetAbsAngles(v3);
  v7 = AngleDiff(AbsAngles->y, v6);
  if ( v7 < 0.0 )
    v7 = -v7;
  return v7 > 0.1;
}


// CDOTALocomotor::IsTurnPrevented  (line 710, @0x000000000283c640, libserver.so)  // inlines: GetModifier_Constant_Highest, GetParent, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::IsActionLocked
// callers: CDOTALocomotor::UpdateFacing, CDOTALocomotor::ShouldTurnAnimate
bool __fastcall CDOTALocomotor::IsTurnPrevented(CDOTALocomotor *const this, CDOTA_BaseNPC *me)
{
  __int64 v4; // rax
  CGameSceneNode *m_pParent; // rdi

  return me != -3104LL
      && (v4 = me->m_ModifierManager.m_buffsForModifiers[161]) != 0xFF
      && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0
      && CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
           &me->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_DISABLE_TURNING,
           &CModifierParams::s_Default) > 0.0
      || !this->m_bFacing
      || (m_pParent = me->m_pGameSceneNode->m_pParent) != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0
      || CDOTA_BaseNPC::IsActionLocked(me);
}


// CDOTALocomotor::UpdateFacing  (line 720, @0x000000000283d1b0, libserver.so)  // inlines: Dir, GetModifier_Percentage_Multiplicative, GetTurnRate, IsListeningToEvent, NetworkStateChanged, Set, Square<float>, UTIL_AngleDiff, operator=<float>
// calls: CDOTALocomotor::IsTurnPrevented, CBaseEntity::GetAbsAngles, AngleDiff, CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal, CDOTALocomotor::GetTurnData, CBaseEntity::SetAbsAngles
// callers: CDOTALocomotor::Update
void __fastcall CDOTALocomotor::UpdateFacing(CDOTALocomotor *const this, CDOTA_BaseNPC *me)
{
  float v4; // xmm2_4
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm2_4
  float m_flTurnRate; // xmm1_4
  float v9; // xmm0_4
  float m_flYawVelocity; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float m_flFacingAngle; // xmm0_4
  float v19; // xmm2_4
  int v20; // r12d
  float v21; // xmm3_4
  float flTurnRate; // [rsp+4h] [rbp-5Ch]
  float flTargetAngleChangea; // [rsp+8h] [rbp-58h]
  float flTargetAngleChange; // [rsp+8h] [rbp-58h]
  float m_curInterval; // [rsp+Ch] [rbp-54h]
  QAngle angles; // [rsp+10h] [rbp-50h] BYREF
  float flAccel; // [rsp+20h] [rbp-40h] BYREF
  float v28; // [rsp+24h] [rbp-3Ch]
  float flDecel; // [rsp+28h] [rbp-38h]

  if ( CDOTALocomotor::IsTurnPrevented(this, me) )
    return;
  m_curInterval = this->m_curInterval;
  angles = *CBaseEntity::GetAbsAngles(me);
  v5 = AngleDiff(angles.y, v4);
  v6 = me->m_ModifierManager.m_buffsForModifiers[110];
  v7 = v5;
  m_flTurnRate = me->m_flTurnRate;
  v9 = 1.0;
  if ( v6 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
  {
    flTurnRate = me->m_flTurnRate;
    flTargetAngleChangea = v7;
    v9 = CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal(
           &me->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE,
           &CModifierParams::s_Default);
    m_flTurnRate = flTurnRate;
    v7 = flTargetAngleChangea;
  }
  flTargetAngleChange = v7;
  CDOTALocomotor::GetTurnData(this, &flAccel, v9 * m_flTurnRate, m_flTurnRate);
  m_flYawVelocity = this->m_flYawVelocity;
  v11 = flAccel;
  v12 = v28;
  if ( (m_flYawVelocity * flTargetAngleChange) < 0.0 )
  {
    this->m_flYawVelocity = 0.0;
    m_flYawVelocity = 0.0;
LABEL_10:
    v14 = -1.0;
    if ( flTargetAngleChange >= 0.0 )
      v14 = 1.0;
    v15 = ((v12 * m_curInterval) * v14) + m_flYawVelocity;
    if ( fabs(v15) > v11 )
    {
      if ( v15 < 0.0 )
        v16 = -1.0;
      else
        v16 = 1.0;
      v15 = v16 * v11;
    }
    goto LABEL_16;
  }
  if ( m_flYawVelocity == 0.0 )
    goto LABEL_10;
  if ( flTargetAngleChange == 0.0 )
    goto LABEL_10;
  v13 = (m_flYawVelocity * m_flYawVelocity) / (flTargetAngleChange + flTargetAngleChange);
  if ( fabs(v13) < flDecel )
    goto LABEL_10;
  v15 = m_flYawVelocity - (m_curInterval * v13);
  v21 = -1.0;
  if ( v13 >= 0.0 )
    v21 = 1.0;
  if ( (v21 * v15) < 0.0 )
  {
    this->m_flYawVelocity = 0.0;
    v15 = 0.0;
    goto LABEL_17;
  }
LABEL_16:
  this->m_flYawVelocity = v15;
LABEL_17:
  v17 = v15 * m_curInterval;
  if ( ((flTargetAngleChange - v17) * flTargetAngleChange) <= 0.0 )
  {
    m_flFacingAngle = this->m_flFacingAngle;
    this->m_flYawVelocity = 0.0;
  }
  else
  {
    m_flFacingAngle = v17 + angles.y;
  }
  angles.y = m_flFacingAngle;
  CBaseEntity::SetAbsAngles(me, &angles);
  v20 = AngleDiff(angles.y, v19);
  if ( v20 != me->m_anglediff.m_Value )
  {
    (*(me->_vptr_IHandleEntity + 22))(me, 4176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    me->m_anglediff.m_Value = v20;
  }
}


// CDOTALocomotor::ApplyHorizontalMotionController  (line 870, @0x000000000283de00, libserver.so)  // inlines: AddObstructionProperty, ApplyMotionController<CHorizontalMotionController>, ApplyMotionControllerInternal<CHorizontalMotionController>, HasFlyMovementCapability, HasMovementCapability, InState, IsCurrentlyMotionControlled, SetMotionControlStartPosition, operator=
// calls: CDOTALocomotor::GetMe, CDOTA_BaseNPC::IsPhased, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTA_Modifier_Lua_Motion_Both::Script_ApplyHorizontalMotionController, CDOTA_Modifier_Lua_Horizontal_Motion::Script_ApplyHorizontalMotionController, CDOTA_Modifier_Knockback::OnCreated, CDOTA_Modifier_Cyclone::OnCreated, CDOTA_Modifier_IceSlide::OnCreated, CDOTA_Modifier_ScriptedMotionController::OnCreated, CDOTA_Modifier_Morphling_Adaptive_Strike::OnCreated, CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnCreated, CDOTA_Modifier_HoldoutCullingBlade::OnCreated, CDOTA_Modifier_Mirana_Leap::OnCreated, CDOTA_Ability_Morphling_Waveform::OnSpellStart (68 total)
bool __fastcall CDOTALocomotor::ApplyHorizontalMotionController(
        CDOTALocomotor *const this,
        CHorizontalMotionController *pHorizontalMotionController,
        bool bDeferToEqualPriority)
{
  CDOTA_BaseNPC *Me; // rbx
  bool result; // al
  __int64 v8; // rax
  bool v9; // cl
  vec_t *v10; // r15
  CHorizontalMotionController *m_pHorizontalMotionController; // rdi
  int m_nPriority; // edx
  int v13; // eax
  char v14; // al
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v16; // eax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  bool v21; // [rsp+Ch] [rbp-34h]

  Me = CDOTALocomotor::GetMe(this);
  result = 0;
  if ( Me == 0 )
    return result;
  if ( ((Me->m_iMoveCapabilities & 3) != 0
     || (BYTE3(Me->m_nUnitState64.m_Value) & 1 | ((Me->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0)
    && (*(Me->_vptr_IHandleEntity + 403))(Me) == 0 )
  {
    v8 = (*(Me->_vptr_IHandleEntity + 376))(Me);
    v9 = 1;
    v10 = v8;
    if ( *(v8 + 216) == 0 )
      v9 = *(v8 + 224) != 0;
    m_pHorizontalMotionController = this->m_pHorizontalMotionController;
    if ( m_pHorizontalMotionController == 0 )
      goto LABEL_12;
    if ( pHorizontalMotionController == m_pHorizontalMotionController )
      goto LABEL_13;
    m_nPriority = m_pHorizontalMotionController->m_nPriority;
    v13 = pHorizontalMotionController->m_nPriority;
    if ( m_nPriority <= v13 && (!bDeferToEqualPriority || m_nPriority != v13) )
    {
      v21 = v9;
      (*(m_pHorizontalMotionController->_vptr_CHorizontalMotionController + 2))(m_pHorizontalMotionController);
      v14 = (*(pHorizontalMotionController->_vptr_CHorizontalMotionController + 3))(pHorizontalMotionController);
      v9 = v21;
      if ( v14 != 0 )
      {
LABEL_12:
        this->m_pHorizontalMotionController = pHorizontalMotionController;
LABEL_13:
        result = 1;
        if ( !v9 )
        {
          if ( CDOTA_BaseNPC::IsPhased(Me) )
          {
            m_pObstructionRecord = Me->m_pObstructionRecord;
            v16 = Me->m_nObstructionProperties | 4;
            Me->m_nObstructionProperties = v16;
            if ( m_pObstructionRecord != 0 )
              m_pObstructionRecord->m_ObjectProperties = v16;
          }
          AbsOrigin = CBaseEntity::GetAbsOrigin(Me);
          x = AbsOrigin->x;
          y = AbsOrigin->y;
          z = AbsOrigin->z;
          v10[58] = x;
          v10[59] = y;
          v10[60] = z;
          return 1;
        }
        return result;
      }
    }
  }
  return 0;
}


// CDOTALocomotor::ApplyVerticalMotionController  (line 881, @0x000000000283df80, libserver.so)  // inlines: AddObstructionProperty, ApplyMotionController<CVerticalMotionController>, ApplyMotionControllerInternal<CVerticalMotionController>, HasFlyMovementCapability, HasMovementCapability, InState, IsCurrentlyMotionControlled, SetMotionControlStartPosition, operator=
// calls: CDOTALocomotor::GetMe, CDOTA_BaseNPC::IsPhased, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTA_Modifier_Lua_Motion_Both::Script_ApplyVerticalMotionController, CDOTA_Modifier_Lua_Vertical_Motion::Script_ApplyVerticalMotionController, CDOTA_Modifier_Knockback::OnCreated, CDOTA_Modifier_Cyclone::OnCreated, CDOTA_Modifier_ScriptedMotionController::OnCreated, CDOTA_Modifier_Kunkka_Torrent::OnCreated, CDOTA_Modifier_SandKing_Impale::OnCreated, CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnCreated, CDOTA_Modifier_HoldoutCullingBlade::OnCreated, CDOTA_Modifier_Mirana_Leap::OnCreated, CDOTA_Modifier_Tidehunter_Ravage::OnCreated (30 total)
bool __fastcall CDOTALocomotor::ApplyVerticalMotionController(
        CDOTALocomotor *const this,
        CVerticalMotionController *pVerticalMotionController,
        bool bDeferToEqualPriority)
{
  CDOTA_BaseNPC *Me; // rbx
  bool result; // al
  __int64 v8; // rax
  bool v9; // cl
  vec_t *v10; // r15
  CVerticalMotionController *m_pVerticalMotionController; // rdi
  int m_nPriority; // edx
  int v13; // eax
  char v14; // al
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v16; // eax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  bool v21; // [rsp+Ch] [rbp-34h]

  Me = CDOTALocomotor::GetMe(this);
  result = 0;
  if ( Me == 0 )
    return result;
  if ( ((Me->m_iMoveCapabilities & 3) != 0
     || (BYTE3(Me->m_nUnitState64.m_Value) & 1 | ((Me->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0)
    && (*(Me->_vptr_IHandleEntity + 403))(Me) == 0 )
  {
    v8 = (*(Me->_vptr_IHandleEntity + 376))(Me);
    v9 = 1;
    v10 = v8;
    if ( *(v8 + 216) == 0 )
      v9 = *(v8 + 224) != 0;
    m_pVerticalMotionController = this->m_pVerticalMotionController;
    if ( m_pVerticalMotionController == 0 )
      goto LABEL_12;
    if ( pVerticalMotionController == m_pVerticalMotionController )
      goto LABEL_13;
    m_nPriority = m_pVerticalMotionController->m_nPriority;
    v13 = pVerticalMotionController->m_nPriority;
    if ( m_nPriority <= v13 && (!bDeferToEqualPriority || m_nPriority != v13) )
    {
      v21 = v9;
      (*(m_pVerticalMotionController->_vptr_CVerticalMotionController + 2))(m_pVerticalMotionController);
      v14 = (*(pVerticalMotionController->_vptr_CVerticalMotionController + 3))(pVerticalMotionController);
      v9 = v21;
      if ( v14 != 0 )
      {
LABEL_12:
        this->m_pVerticalMotionController = pVerticalMotionController;
LABEL_13:
        result = 1;
        if ( !v9 )
        {
          if ( CDOTA_BaseNPC::IsPhased(Me) )
          {
            m_pObstructionRecord = Me->m_pObstructionRecord;
            v16 = Me->m_nObstructionProperties | 4;
            Me->m_nObstructionProperties = v16;
            if ( m_pObstructionRecord != 0 )
              m_pObstructionRecord->m_ObjectProperties = v16;
          }
          AbsOrigin = CBaseEntity::GetAbsOrigin(Me);
          x = AbsOrigin->x;
          y = AbsOrigin->y;
          z = AbsOrigin->z;
          v10[58] = x;
          v10[59] = y;
          v10[60] = z;
          return 1;
        }
        return result;
      }
    }
  }
  return 0;
}


// CDOTALocomotor::RemoveHorizontalMotionController  (line 892, @0x000000000283dbb0, libserver.so)  // inlines: PostRemoveMotionController
// calls: CDOTALocomotor::PostRemoveMotionController
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnDestroy, CDOTA_Modifier_IceSlide::OnDestroy, CDOTA_Modifier_Knockback::OnDestroy, CDOTA_Modifier_Cyclone::OnDestroy, CDOTA_Modifier_ScriptedMotionController::OnDestroy, CDOTA_BaseNPC::Script_RemoveHorizontalMotionController, CDOTA_Modifier_Morphling_Adaptive_Strike::OnDestroy, CDOTA_Modifier_Morphling_Adaptive_Strike::UpdateHorizontalMotion, CDOTA_Modifier_HoldoutCullingBlade::OnDestroy, CDOTA_Modifier_Mirana_Leap::OnDestroy, CDOTA_Ability_Morphling_Waveform::OnProjectileHit, CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DisableMotionControl (72 total)
void __fastcall CDOTALocomotor::RemoveHorizontalMotionController(
        CDOTALocomotor *const this,
        CHorizontalMotionController *pHorizontalMotionController)
{
  bool v2; // zf

  if ( this->m_pHorizontalMotionController == pHorizontalMotionController )
  {
    v2 = !this->m_bMotionControllerUpdateInProgress;
    this->m_pHorizontalMotionController = 0;
    if ( v2 )
      CDOTALocomotor::PostRemoveMotionController(this, 1);
    else
      this->m_bMotionControllerRemoved = 1;
  }
}


// CDOTALocomotor::RemoveVerticalMotionController  (line 903, @0x000000000283dbf0, libserver.so)  // inlines: PostRemoveMotionController
// calls: CDOTALocomotor::PostRemoveMotionController
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnDestroy, CDOTA_Modifier_Knockback::OnDestroy, CDOTA_Modifier_Cyclone::OnDestroy, CDOTA_Modifier_ScriptedMotionController::OnDestroy, CVerticalMotionController::UpdateSimpleAirTime, CDOTA_BaseNPC::Script_RemoveVerticalMotionController, CDOTA_Modifier_HoldoutCullingBlade::OnDestroy, CDOTA_Modifier_Kunkka_Torrent::OnDestroy, CDOTA_Modifier_Mirana_Leap::OnDestroy, CDOTA_Modifier_SandKing_Impale::OnDestroy, CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DisableMotionControl, CDOTA_Modifier_Tidehunter_Ravage::OnDestroy (30 total)
void __fastcall CDOTALocomotor::RemoveVerticalMotionController(
        CDOTALocomotor *const this,
        CVerticalMotionController *pVerticalMotionController)
{
  bool v2; // zf

  if ( this->m_pVerticalMotionController == pVerticalMotionController )
  {
    v2 = !this->m_bMotionControllerUpdateInProgress;
    this->m_pVerticalMotionController = 0;
    if ( v2 )
      CDOTALocomotor::PostRemoveMotionController(this, 1);
    else
      this->m_bMotionControllerRemoved = 1;
  }
}


// CDOTALocomotor::InterruptMotionControllers  (line 914, @0x000000000283dcd0, libserver.so)
// calls: CDOTALocomotor::InterruptHorizontalMotionController, CDOTALocomotor::InterruptVerticalMotionController
// callers: FindClearSpaceForUnit, CDOTA_BaseNPC::InterruptMotionControllers, CDOTA_BaseNPC::Teleport, CDOTA_Ability_Pudge_MeatHook::OnSpellStart, CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnIntervalThink, CDOTA_Modifier_KeeperOfTheLight_Recall::OnDestroy, CDOTA_Modifier_Wisp_Relocate_Return::OnIntervalThink, CDOTA_Modifier_Wisp_Relocate_Thinker::OnIntervalThink
void __fastcall CDOTALocomotor::InterruptMotionControllers(CDOTALocomotor *const this, bool bFindClearSpace)
{
  CDOTALocomotor::InterruptHorizontalMotionController(this, bFindClearSpace);
  CDOTALocomotor::InterruptVerticalMotionController(this, bFindClearSpace);
}


// CDOTALocomotor::InterruptHorizontalMotionController  (line 922, @0x000000000283dc30, libserver.so)  // inlines: PostRemoveMotionController
// calls: CDOTALocomotor::PostRemoveMotionController
// callers: CDOTALocomotor::InterruptMotionControllers, CDOTA_Ability_Pudge_Dismember::OnSpellStart, CDOTA_Modifier_Huskar_Life_Break_Charge::OnStateChanged, CDOTA_Ability_Huskar_Life_Break::OnProjectileThink, CDOTA_Ability_Wisp_Tether::OnProjectileHit_ExtraData, CDOTA_Modifier_Slark_Pounce_Leash::OnDestroy, CDOTA_Ability_Wisp_Tether::OnProjectileThink_ExtraData, CDOTA_Ability_Wisp_Tether::BreakTether
void __fastcall CDOTALocomotor::InterruptHorizontalMotionController(CDOTALocomotor *const this, bool bFindClearSpace)
{
  CHorizontalMotionController *m_pHorizontalMotionController; // rdi
  bool v5; // zf

  m_pHorizontalMotionController = this->m_pHorizontalMotionController;
  if ( m_pHorizontalMotionController != 0 )
  {
    (*(m_pHorizontalMotionController->_vptr_CHorizontalMotionController + 2))(m_pHorizontalMotionController);
    v5 = !this->m_bMotionControllerUpdateInProgress;
    this->m_pHorizontalMotionController = 0;
    if ( v5 )
      CDOTALocomotor::PostRemoveMotionController(this, bFindClearSpace);
    else
      this->m_bMotionControllerRemoved = 1;
  }
}


// CDOTALocomotor::InterruptVerticalMotionController  (line 935, @0x000000000283dc80, libserver.so)  // inlines: PostRemoveMotionController
// calls: CDOTALocomotor::PostRemoveMotionController
// callers: CDOTALocomotor::InterruptMotionControllers
void __fastcall CDOTALocomotor::InterruptVerticalMotionController(CDOTALocomotor *const this, bool bFindClearSpace)
{
  CVerticalMotionController *m_pVerticalMotionController; // rdi
  bool v5; // zf

  m_pVerticalMotionController = this->m_pVerticalMotionController;
  if ( m_pVerticalMotionController != 0 )
  {
    (*(m_pVerticalMotionController->_vptr_CVerticalMotionController + 2))(m_pVerticalMotionController);
    v5 = !this->m_bMotionControllerUpdateInProgress;
    this->m_pVerticalMotionController = 0;
    if ( v5 )
      CDOTALocomotor::PostRemoveMotionController(this, bFindClearSpace);
    else
      this->m_bMotionControllerRemoved = 1;
  }
}


// CDOTALocomotor::PostRemoveMotionController  (line 948, @0x000000000283dad0, libserver.so)  // inlines: RemoveObstructionProperty
// calls: CDOTALocomotor::GetMe, CDOTA_BaseNPC::IsPhased, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
// callers: CDOTALocomotor::PostRemoveMotionController, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CDOTALocomotor::InterruptHorizontalMotionController, CDOTALocomotor::InterruptVerticalMotionController, CDOTALocomotor::UpdateMotionControlledMovement
void __fastcall CDOTALocomotor::PostRemoveMotionController(CDOTALocomotor *const this, bool bFindClearSpace)
{
  CDOTA_BaseNPC *Me; // rax
  CDOTA_BaseNPC *v5; // r12
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  unsigned int v7; // eax
  Vector v8; // 0:xmm0_8.8,8:xmm1_4.4

  Me = CDOTALocomotor::GetMe(this);
  v5 = Me;
  if ( Me != 0 && this->m_pVerticalMotionController == 0 && this->m_pHorizontalMotionController == 0 )
  {
    if ( !CDOTA_BaseNPC::IsPhased(Me) )
    {
      m_pObstructionRecord = v5->m_pObstructionRecord;
      v7 = v5->m_nObstructionProperties & 0xFFFFFFFB;
      v5->m_nObstructionProperties = v7;
      if ( m_pObstructionRecord != 0 )
        m_pObstructionRecord->m_ObjectProperties = v7;
    }
    if ( bFindClearSpace )
    {
      v8 = *CBaseEntity::GetAbsOrigin(v5);
      FindClearSpaceForUnit(v5, v8, 0);
    }
    (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 60))(this->m_bot);
  }
}


// CDOTALocomotor::PostRemoveMotionController  (line 948, @0x000000000283db80, libserver.so)
// calls: CDOTALocomotor::PostRemoveMotionController
void __fastcall CDOTALocomotor::PostRemoveMotionController(CDOTALocomotor *const this, bool bFindClearSpace)
{
  if ( this->m_bMotionControllerUpdateInProgress )
    this->m_bMotionControllerRemoved = 1;
  else
    CDOTALocomotor::PostRemoveMotionController(this, bFindClearSpace);
}


// CDOTALocomotor::MotionControllersIgnoreIntermediateMovement  (line 982, @0x000000000283c6e0, libserver.so)
// callers: CDOTABehaviorCommandMoveToPosition::Update
bool __fastcall CDOTALocomotor::MotionControllersIgnoreIntermediateMovement(CDOTALocomotor *const this)
{
  CHorizontalMotionController *m_pHorizontalMotionController; // rdi
  CVerticalMotionController *m_pVerticalMotionController; // rdi
  bool result; // al

  m_pHorizontalMotionController = this->m_pHorizontalMotionController;
  if ( m_pHorizontalMotionController != 0
    && (*(m_pHorizontalMotionController->_vptr_CHorizontalMotionController + 4))(m_pHorizontalMotionController) != 0 )
  {
    return 1;
  }
  m_pVerticalMotionController = this->m_pVerticalMotionController;
  result = 0;
  if ( m_pVerticalMotionController != 0 )
    return (*(m_pVerticalMotionController->_vptr_CVerticalMotionController + 4))(m_pVerticalMotionController);
  return result;
}


// CDOTALocomotor::HasMotionControllerWithHigherPriority  (line 989, @0x000000000283c730, libserver.so)
// callers: CDOTA_Modifier_Rattletrap_Cog::OnIntervalThink
bool __fastcall CDOTALocomotor::HasMotionControllerWithHigherPriority(CDOTALocomotor *const this, int nPriority)
{
  CHorizontalMotionController *m_pHorizontalMotionController; // rdx
  bool result; // al
  CVerticalMotionController *m_pVerticalMotionController; // rax

  m_pHorizontalMotionController = this->m_pHorizontalMotionController;
  if ( m_pHorizontalMotionController == 0 || (result = 1, m_pHorizontalMotionController->m_nPriority <= nPriority) )
  {
    m_pVerticalMotionController = this->m_pVerticalMotionController;
    return m_pVerticalMotionController != 0 && nPriority < m_pVerticalMotionController->m_nPriority;
  }
  return result;
}


// CDOTALocomotor::IsPhasedFromMotionControl  (line 996, @0x000000000283c770, libserver.so)
// callers: CDOTA_BaseNPC::IsPhased
bool __fastcall CDOTALocomotor::IsPhasedFromMotionControl(CDOTALocomotor *const this)
{
  bool result; // al
  CHorizontalMotionController *m_pHorizontalMotionController; // rdi

  result = 1;
  if ( this->m_pVerticalMotionController == 0 )
  {
    m_pHorizontalMotionController = this->m_pHorizontalMotionController;
    return m_pHorizontalMotionController != 0
        && (*(m_pHorizontalMotionController->_vptr_CHorizontalMotionController + 5))(m_pHorizontalMotionController);
  }
  return result;
}


// CDOTALocomotor::GetPositionInPastForTargeting  (line 1002, @0x000000000283c7b0, libserver.so)
// callers: CDOTA_BaseNPC::GetDistanceToEntityForAttack, CDOTA_BaseNPC::IsEntityInRangeForCast
__m128i __fastcall CDOTALocomotor::GetPositionInPastForTargeting(
        CDOTALocomotor *const this,
        float a2,
        float flTimeInPast)
{
  int v3; // edx
  char *v4; // rax
  __int32 v5; // xmm1_4
  __m128i v7; // [rsp+0h] [rbp-10h] BYREF

  v3 = 118;
  if ( (a2 / this->m_curInterval) <= 0x76 )
    v3 = (a2 / this->m_curInterval);
  v4 = this + 4 * (this->m_nPositionHistoryIndex - v3) + 4 * (this->m_nPositionHistoryIndex - v3 < 0 ? 0x77 : 0);
  v5 = *(v4 + 66);
  v7.m128i_i32[1] = *(v4 + 185);
  v7.m128i_i32[0] = v5;
  return _mm_loadl_epi64(&v7);
}


// CDOTALocomotor::GetCurrentTargetVelocity  (line 1020, @0x000000000283dd00, libserver.so)  // inlines: VectorSubtract, operator-
// calls: CDOTALocomotor::GetMe, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit, CDOTA_Modifier_Disruptor_KineticField::GetModifierMoveSpeed_Limit, CDOTA_Modifier_Slark_Pounce_Leash::GetModifierMoveSpeed_Limit
Vector __fastcall CDOTALocomotor::GetCurrentTargetVelocity(CDOTALocomotor *const this)
{
  CDOTA_BaseNPC *Me; // rax
  const Vector *AbsOrigin; // rax
  vec_t v4; // xmm0_4
  float v5; // xmm2_4
  vec_t z; // eax
  __int64 v9; // [rsp+10h] [rbp-20h]
  vec_t v10; // [rsp+18h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Me = CDOTALocomotor::GetMe(this);
  if ( Me != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(Me);
    v4 = this->m_vDestination.z - AbsOrigin->z;
    v5 = this->m_vDestination.x - AbsOrigin->x;
    *(&v9 + 1) = this->m_vDestination.y - AbsOrigin->y;
    v10 = v4;
    *&v9 = v5;
  }
  else
  {
    z = vec3_origin.z;
    v9 = *&vec3_origin.x;
    v10 = z;
  }
  *&result.x = v9;
  result.z = v10;
  return result;
}


// CDOTALocomotor::GetAverageVelocityOverTime  (line 1030, @0x000000000283c810, libserver.so)  // inlines: VectorDivide, operator/
// callers: CDOTA_BotMode_Attack::CalculateDesiredLocation, DrawEstimatedLeadPosition, WantsCastOnEstimatedLocation, CDOTA_BotMode_DefendAlly_Human::Think, CDOTA_BotMode_Retreat_Human::GetDesire, CDOTA_BotMode_Roam_Human::GetDesire, CDOTA_Bot_Script::GetVelocity, CDOTA_Bot_Script::GetExtrapolatedLocation, BuildLocationList, CDOTA_Bot_AbilityUsage::BuildLocationList, CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::GetCurrentUsageDesire (30 total)
__m128i __fastcall CDOTALocomotor::GetAverageVelocityOverTime(
        CDOTALocomotor *const this,
        float a2,
        float fTimeInterval)
{
  int v3; // eax
  int m_nPositionHistoryIndex; // ecx
  float v5; // xmm1_4
  float *v6; // rsi
  float *v7; // rax
  float v8; // xmm2_4
  __m128i v10; // [rsp+0h] [rbp-10h] BYREF

  v3 = (a2 / this->m_curInterval);
  m_nPositionHistoryIndex = this->m_nPositionHistoryIndex;
  v5 = 1.0 / a2;
  if ( v3 >= 118 )
    v3 = 118;
  v6 = (this + 4 * m_nPositionHistoryIndex);
  v7 = (this + 4 * ((m_nPositionHistoryIndex + 119 - v3) % 119));
  v8 = (v6[66] - v7[66]) * v5;
  *&v10.m128i_i32[1] = (v6[185] - v7[185]) * v5;
  *v10.m128i_i32 = v8;
  return _mm_loadl_epi64(&v10);
}


// CDOTALocomotor::GetAverageVelocityStability  (line 1041, @0x000000000283cb50, libserver.so)  // inlines: Dot, DotProduct, LengthSqr, Min<int>, NormalizeInPlaceSafe, VectorSubtract, operator-, operator=
// calls: VectorNormalize
// callers: CDOTA_Bot_Script::GetMovementDirectionStability
float __fastcall CDOTALocomotor::GetAverageVelocityStability(CDOTALocomotor *const this)
{
  int v2; // r12d
  __int64 v3; // rdi
  float *v4; // rax
  int v5; // ebx
  float *v6; // rdx
  vec_t v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  __int64 v10; // r8
  int v11; // r15d
  float *v12; // rax
  float *v13; // rdx
  vec_t v14; // xmm1_4
  float v15; // xmm0_4
  float z; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float result; // xmm0_4
  float v23; // [rsp-18h] [rbp-68h]
  float v24; // [rsp-Ch] [rbp-5Ch]
  vec_t x; // [rsp-8h] [rbp-58h] BYREF
  vec_t y; // [rsp-4h] [rbp-54h]
  Vector vPrevSegment; // [rsp+0h] [rbp-50h] BYREF
  float v28; // [rsp+Ch] [rbp-44h]
  Vector vSegment; // [rsp+10h] [rbp-40h]

  v2 = 118;
  vPrevSegment.x = 0.0;
  if ( (1.0 / this->m_curInterval) <= 117 )
    v2 = (1.0 / this->m_curInterval);
  v3 = (this->m_nPositionHistoryIndex - v2 + 118) % 119;
  v4 = (this + 4 * v3);
  v5 = (v3 + 1) % 119;
  v6 = (this + 4 * v5);
  v7 = v6[66] - v4[66];
  y = v6[185] - v4[185];
  x = v7;
  v8 = VectorNormalize(&x);
  v9 = 0.0;
  v10 = v5;
  if ( v8 == 0.0 )
  {
    x = vec3_origin.x;
    y = vec3_origin.y;
    vPrevSegment.x = vec3_origin.z;
  }
  if ( v2 > 0 )
  {
    v23 = 0.0;
    v11 = 0;
    while ( 1 )
    {
      vSegment.x = v9;
      v24 = v9;
      v12 = (this + 4 * v10);
      v5 = (v5 + 1) % 119;
      v13 = (this + 4 * v5);
      v14 = v13[66] - v12[66];
      v28 = v13[185] - v12[185];
      vPrevSegment.z = v14;
      v15 = VectorNormalize(&vPrevSegment.z);
      v9 = v24;
      if ( v15 == v24 )
      {
        z = vec3_origin.z;
        v17 = vec3_origin.y;
        v18 = vec3_origin.x;
      }
      else
      {
        v18 = vPrevSegment.z;
        v17 = v28;
        z = vSegment.x;
      }
      v19 = ((x * x) + (y * y)) + (vPrevSegment.x * vPrevSegment.x);
      if ( (((v18 * v18) + (v17 * v17)) + (z * z)) >= 0.001 )
      {
        if ( v19 < 0.001 )
          goto LABEL_8;
        v23 = (1.0 - (((x * v18) + (y * v17)) + (vPrevSegment.x * z))) + v23;
      }
      else if ( v19 >= 0.001 )
      {
LABEL_8:
        v23 = v23 + 1.0;
      }
      ++v11;
      x = v18;
      y = v17;
      vPrevSegment.x = z;
      if ( v11 == v2 )
      {
        v20 = v23 * 10.0;
        goto LABEL_19;
      }
      v10 = v5;
    }
  }
  v20 = 0.0;
LABEL_19:
  v21 = v20 / v2;
  result = v9;
  if ( v21 <= 1.0 )
  {
    result = 1.0;
    if ( v9 <= v21 )
      return 1.0 - v21;
  }
  return result;
}


// CDOTALocomotor::WipePositionHistoryToCurrentPosition  (line 1088, @0x000000000283cf40, libserver.so)
// callers: CDOTA_BaseNPC::Teleport
void __fastcall CDOTALocomotor::WipePositionHistoryToCurrentPosition(CDOTALocomotor *const this)
{
  float *v2; // rax
  __int64 i; // rdx

  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 73))(this->m_bot);
  for ( i = 0; i != 119; ++i )
  {
    this->m_positionHistoryX[i] = *v2;
    this->m_positionHistoryY[i] = v2[1];
  }
}


// CDOTALocomotor::GetTurnData  (line 1100, @0x000000000283cf90, libserver.so)
// callers: CGridNavPath::Update, CDOTALocomotor::UpdateFacing, CDOTALocomotor::GetCastAngle
// globals: g_TurnDataEntries
void __fastcall CDOTALocomotor::GetTurnData(
        CDOTALocomotor *const this,
        CDOTA_TurnData *const outTurnData,
        float a3,
        float flTurnRate)
{
  TurnDataEntry *v4; // rax
  int v5; // edx
  float m_flTurnRate; // xmm1_4
  TurnDataEntry *v7; // rdx
  float v8; // xmm0_4

  if ( g_TurnDataEntries[0].m_flTurnRate > a3 )
  {
    *outTurnData = g_TurnDataEntries[0].m_TurnData;
  }
  else
  {
    v4 = g_TurnDataEntries;
    v5 = 0;
    while ( 1 )
    {
      m_flTurnRate = v4->m_flTurnRate;
      if ( a3 <= v4->m_flTurnRate )
        break;
      ++v5;
      ++v4;
      if ( v5 == 5 )
      {
        *outTurnData = g_TurnDataEntries[4].m_TurnData;
        return;
      }
    }
    if ( a3 == m_flTurnRate )
    {
      *outTurnData = v4->m_TurnData;
    }
    else
    {
      v7 = &g_TurnDataEntries[v5 - 1];
      v8 = (a3 - v7->m_flTurnRate) / (m_flTurnRate - v7->m_flTurnRate);
      outTurnData->m_flMaxTurnSpeed = (v4->m_TurnData.m_flMaxTurnSpeed * v8)
                                    + (v7->m_TurnData.m_flMaxTurnSpeed * (1.0 - v8));
      outTurnData->m_flTurnAcceleration = (v4->m_TurnData.m_flTurnAcceleration * v8)
                                        + (v7->m_TurnData.m_flTurnAcceleration * (1.0 - v8));
      outTurnData->m_flTurnDeceleration = (v4->m_TurnData.m_flTurnDeceleration * v8)
                                        + (v7->m_TurnData.m_flTurnDeceleration * (1.0 - v8));
      outTurnData->m_flImmediateMovementAngle = (v4->m_TurnData.m_flImmediateMovementAngle * v8)
                                              + (v7->m_TurnData.m_flImmediateMovementAngle * (1.0 - v8));
      outTurnData->m_flFullTurnMovementAngle = (v4->m_TurnData.m_flFullTurnMovementAngle * v8)
                                             + (v7->m_TurnData.m_flFullTurnMovementAngle * (1.0 - v8));
      outTurnData->m_flCastAngle180 = (v4->m_TurnData.m_flCastAngle180 * v8)
                                    + (v7->m_TurnData.m_flCastAngle180 * (1.0 - v8));
      outTurnData->m_flCastAngle135 = (v4->m_TurnData.m_flCastAngle135 * v8)
                                    + (v7->m_TurnData.m_flCastAngle135 * (1.0 - v8));
      outTurnData->m_flCastAngle90 = (v4->m_TurnData.m_flCastAngle90 * v8)
                                   + (v7->m_TurnData.m_flCastAngle90 * (1.0 - v8));
      outTurnData->m_flCastAngle45 = (v4->m_TurnData.m_flCastAngle45 * v8)
                                   + (v7->m_TurnData.m_flCastAngle45 * (1.0 - v8));
      outTurnData->m_flCastAngle11 = (v8 * v4->m_TurnData.m_flCastAngle11)
                                   + ((1.0 - v8) * v7->m_TurnData.m_flCastAngle11);
    }
  }
}


// CDOTALocomotor::GetCastAngle  (line 1159, @0x000000000283d480, libserver.so)  // inlines: GetModifier_Constant_Highest, GetModifier_Percentage_Multiplicative, GetTurnRate, IsListeningToEvent, Length2DSqr, UTIL_AngleDiff, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_BaseNPC::GetCurrentActiveAbility, CBaseEntity::GetAbsAngles, UTIL_VecToYaw, AngleDiff, CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal, CDOTALocomotor::GetTurnData
// callers: CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
float __fastcall CDOTALocomotor::GetCastAngle(
        CDOTALocomotor *const this,
        CDOTA_BaseNPC *pNPC,
        const Vector *const vTarget)
{
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  float z; // xmm2_4
  __int64 v10; // rax
  CDOTABaseAbility *CurrentActiveAbility; // rax
  float v12; // xmm2_4
  float v13; // xmm1_4
  __int64 v14; // rax
  float m_flTurnRate; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  __int64 v18; // rax
  int v19; // edx
  float v20; // xmm3_4
  float v21; // [rsp+8h] [rbp-B8h]
  float flAngleToTargeta; // [rsp+Ch] [rbp-B4h]
  float flAngleToTargetb; // [rsp+Ch] [rbp-B4h]
  float flAngleToTarget; // [rsp+Ch] [rbp-B4h]
  Vector vToTarget; // [rsp+10h] [rbp-B0h] BYREF
  float startAngles[8]; // [rsp+20h] [rbp-A0h]
  CDOTA_TurnData turnData; // [rsp+40h] [rbp-80h] BYREF
  float *castAngles[5]; // [rsp+70h] [rbp-50h]

  AbsOrigin = CBaseEntity::GetAbsOrigin(pNPC);
  v7 = vTarget->y - AbsOrigin->y;
  z = vTarget->z;
  vToTarget.x = vTarget->x - AbsOrigin->x;
  vToTarget.y = v7;
  vToTarget.z = z - AbsOrigin->z;
  if ( ((vToTarget.x * vToTarget.x) + (v7 * v7)) < 0.1 )
    return 180.0;
  if ( (*(pNPC->_vptr_IHandleEntity + 434))(pNPC) == 0 )
    return 180.0;
  v10 = pNPC->m_ModifierManager.m_buffsForModifiers[162];
  if ( v10 != 0xFF
    && pNPC->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v10].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
         &pNPC->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_IGNORE_CAST_ANGLE,
         &CModifierParams::s_Default) > 0.0 )
  {
    return 180.0;
  }
  if ( CDOTA_BaseNPC::GetCurrentActiveAbility(pNPC) != 0 )
  {
    CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(pNPC);
    if ( (*(CurrentActiveAbility->_vptr_IHandleEntity + 302))(CurrentActiveAbility) == 0 )
      return 180.0;
  }
  flAngleToTargeta = CBaseEntity::GetAbsAngles(pNPC)->y;
  UTIL_VecToYaw(&vToTarget);
  v13 = fabs(AngleDiff(flAngleToTargeta, v12));
  if ( v13 <= 11.5 )
    return 180.0;
  v14 = pNPC->m_ModifierManager.m_buffsForModifiers[110];
  m_flTurnRate = pNPC->m_flTurnRate;
  v16 = 1.0;
  if ( v14 != 0xFF && pNPC->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
  {
    v21 = pNPC->m_flTurnRate;
    flAngleToTargetb = v13;
    v16 = CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal(
            &pNPC->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE,
            &CModifierParams::s_Default);
    m_flTurnRate = v21;
    v13 = flAngleToTargetb;
  }
  flAngleToTarget = v13;
  CDOTALocomotor::GetTurnData(this, &turnData, v16 * m_flTurnRate, v13);
  v17 = 45.0;
  castAngles[0] = &turnData.m_flCastAngle11;
  castAngles[1] = &turnData.m_flCastAngle45;
  castAngles[2] = &turnData.m_flCastAngle90;
  castAngles[3] = &turnData.m_flCastAngle135;
  v18 = 0;
  startAngles[0] = 11.0;
  v19 = 1;
  startAngles[1] = 45.0;
  startAngles[2] = 90.0;
  startAngles[3] = 135.0;
  startAngles[4] = 180.0;
  castAngles[4] = &turnData.m_flCastAngle180;
  if ( flAngleToTarget > 45.0 )
  {
    while ( ++v18 != 4 )
    {
      v17 = startAngles[v18 + 1];
      v19 = v18 + 1;
      if ( flAngleToTarget <= v17 )
        goto LABEL_16;
    }
    return 180.0;
  }
LABEL_16:
  v20 = *castAngles[v18];
  return ((*castAngles[v19] - v20) * ((flAngleToTarget - startAngles[v18]) / (v17 - startAngles[v18]))) + v20;
}


// CDOTALocomotor::RecordPositionInHistory  (line 1212, @0x000000000283d730, libserver.so)
// callers: CDOTALocomotor::Update
void __fastcall CDOTALocomotor::RecordPositionInHistory(CDOTALocomotor *const this)
{
  _DWORD *v2; // rax
  char *v3; // rdx

  this->m_nPositionHistoryIndex = (this->m_nPositionHistoryIndex + 1) % 119;
  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 73))(this->m_bot);
  v3 = this + 4 * this->m_nPositionHistoryIndex;
  *(v3 + 66) = *v2;
  *(v3 + 185) = v2[1];
}


// CDOTALocomotor::GetPositionLastFrame  (line 1222, @0x000000000283d7b0, libserver.so)
Vector __fastcall CDOTALocomotor::GetPositionLastFrame(CDOTALocomotor *const this)
{
  __int64 m_nPositionHistoryIndex; // rdx
  char *v2; // rax
  __int64 v5; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_nPositionHistoryIndex = this->m_nPositionHistoryIndex;
  if ( this->m_nFrameLastUpdated == gpGlobals->tickcount )
    m_nPositionHistoryIndex = (m_nPositionHistoryIndex + 118) % 119;
  v2 = this + 4 * m_nPositionHistoryIndex;
  HIDWORD(v5) = *(v2 + 185);
  LODWORD(v5) = *(v2 + 66);
  result.z = 0.0;
  *&result.x = v5;
  return result;
}


// GetEntityPositionLastFrame  (line 1237, @0x000000000283d820, libserver.so)  // inlines: GetPositionLastFrame, ToDOTABaseNPC
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTA_BaseNPC::SetTargetLastKnownPosition
Vector __fastcall GetEntityPositionLastFrame(CBaseEntity *pEntity)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  const Vector *AbsOrigin; // rax
  __int64 v7; // [rsp+10h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pEntity != 0 && pEntity->m_bIsDOTANPC )
  {
    v1 = (*(pEntity->_vptr_IHandleEntity + 376))(pEntity);
    v2 = *(v1 + 1216);
    if ( *(v1 + 1220) == gpGlobals->tickcount )
      v2 = (v2 + 118) % 119;
    v3 = v1 + 4 * v2;
    HIDWORD(v7) = *(v3 + 740);
    LODWORD(v7) = *(v3 + 264);
    result.z = 0.0;
    *&result.x = v7;
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  return result;
}


// CDOTALocomotor::GetMe  (line 1252, @0x000000000283d8e0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: Warning
// callers: CDOTALocomotor::IsFacingLocation, CDOTALocomotor::GetFeet, CDOTALocomotor::StopMovement, CDOTALocomotor::PostRemoveMotionController, CDOTALocomotor::GetCurrentTargetVelocity, CDOTALocomotor::ShouldTurnAnimate, CDOTALocomotor::ApplyHorizontalMotionController, CDOTALocomotor::ApplyVerticalMotionController, CDOTALocomotor::Update
// strings: "Scary!!! CDOTALocomotor::GetMe() : ToDOTABaseNPC( pBot->GetEntity() ) returned NULL!\n", "Scary!!! CDOTALocomotor::GetMe() : GetBot() returned NULL!\n"
CDOTA_BaseNPC *__fastcall CDOTALocomotor::GetMe(const CDOTALocomotor *const this)
{
  INextBot *m_bot; // rdi
  CDOTA_BaseNPC *result; // rax

  m_bot = this->m_bot;
  if ( m_bot != 0 )
  {
    result = (*(m_bot->_vptr_INextBotEventResponder + 66))(m_bot);
    if ( result == 0 || !result->m_bIsDOTANPC )
    {
      Warning("Scary!!! CDOTALocomotor::GetMe() : ToDOTABaseNPC( pBot->GetEntity() ) returned NULL!\n");
      return 0;
    }
  }
  else
  {
    Warning("Scary!!! CDOTALocomotor::GetMe() : GetBot() returned NULL!\n");
    return 0;
  }
  return result;
}


// CVerticalMotionController::UpdateSimpleAirTime  (line 1273, @0x0000000002846620, libserver.so)  // inlines: Square<float>
// calls: CBaseEntity::GetAbsOrigin, GetGroundHeight, CBaseEntity::SetAbsOrigin, CDOTALocomotor::RemoveVerticalMotionController
// callers: CDOTA_Modifier_Kunkka_Torrent::UpdateVerticalMotion, CDOTA_Modifier_SandKing_Impale::UpdateVerticalMotion, CDOTA_Modifier_Tidehunter_Ravage::UpdateVerticalMotion, CDOTA_Modifier_Lion_Impale::UpdateVerticalMotion, CDOTA_Modifier_JumpBoots::UpdateVerticalMotion, CDOTA_Modifier_Nian_Tail_Swipe_AirTime::UpdateVerticalMotion, CDOTA_Modifier_Nyx_Assassin_Impale::UpdateVerticalMotion, CDOTA_Modifier_Tusk_WalrusKick_AirTime::UpdateVerticalMotion, CDOTA_Modifier_Tusk_WalrusPunch_AirTime::UpdateVerticalMotion
__int64 __fastcall CVerticalMotionController::UpdateSimpleAirTime(
        CVerticalMotionController *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float flStartZ,
        float flCurTime,
        float flTotalTimeOnEvenGround,
        float flHeight)
{
  float GroundHeight; // xmm0_4
  unsigned int v10; // r13d
  CDOTALocomotor *v12; // rax
  CVerticalMotionController *v13; // rsi
  float flInitialVelocity; // [rsp+18h] [rbp-38h]
  float flGroundPos; // [rsp+1Ch] [rbp-34h]
  vec_t flGroundPosa; // [rsp+1Ch] [rbp-34h]
  Vector vNewPos; // [rsp+20h] [rbp-30h] BYREF

  flInitialVelocity = (flTotalTimeOnEvenGround * 4.0) / flCurTime;
  flGroundPos = (flInitialVelocity + flInitialVelocity) / flCurTime;
  *&vNewPos.x = *&CBaseEntity::GetAbsOrigin(me)->x;
  vNewPos.z = ((flInitialVelocity * flStartZ) + a3) - (((flStartZ * flStartZ) * 0.5) * flGroundPos);
  GroundHeight = GetGroundHeight(&vNewPos, me);
  if ( GroundHeight >= vNewPos.z && (flInitialVelocity - (flStartZ * flGroundPos)) < 0.0 )
  {
    flGroundPosa = GroundHeight;
    v12 = (*(me->_vptr_IHandleEntity + 376))(me);
    v13 = this;
    v10 = 1;
    CDOTALocomotor::RemoveVerticalMotionController(v12, v13);
    vNewPos.z = flGroundPosa;
  }
  else
  {
    v10 = 0;
  }
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
  return v10;
}


// CDOTALocomotor::IsLeashedMovementPrevented  (line 1311, @0x000000000283e100, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CDOTA_Modifier_Mirana_Leap::UpdateHorizontalMotion, CDOTA_Modifier_ForceBoots::UpdateHorizontalMotion, CDOTA_Modifier_Nian_Dive::UpdateHorizontalMotion, CDOTA_Ability_Magnataur_Skewer::UpdateHorizontalMotion, CDOTA_Ability_Holdout_FriendlySkewer::UpdateHorizontalMotion, CDOTA_Ability_Magnataur_Skewer::OnProjectileThink, CDOTA_Ability_Holdout_FriendlySkewer::OnProjectileThink, CDOTA_Modifier_Magnataur_Skewer_Impact::UpdateHorizontalMotion, CDOTA_Modifier_MonkeyKing_ArcToGround::UpdateHorizontalMotion, CDOTA_Modifier_MonkeyKing_BounceLeap::UpdateHorizontalMotion, CDOTA_Modifier_Phoenix_SunRay::UpdateHorizontalMotion (16 total)
bool __fastcall CDOTALocomotor::IsLeashedMovementPrevented(CDOTALocomotor *const this, double a2)
{
  bool result; // al

  result = this->m_bIsLeashed;
  if ( result )
    return fsqrt(
             ((*&a2 - this->m_vLeashCenter.x) * (*&a2 - this->m_vLeashCenter.x))
           + ((*(&a2 + 1) - this->m_vLeashCenter.y) * (*(&a2 + 1) - this->m_vLeashCenter.y))) > this->m_flMaxDistanceFromLeashPoint;
  return result;
}


