
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RandomYawVector  (line 75, @0x00000000027cf970, libserver.so)  // inlines: QAngle, VectorMultiply, operator*
// calls: RandomFloat, AngleVectors
__m128i __fastcall RandomYawVector(float a1, float fRadius)
{
  QAngle angle; // [rsp+20h] [rbp-30h] BYREF
  Vector dir; // [rsp+30h] [rbp-20h] BYREF
  __m128i v6; // [rsp+40h] [rbp-10h] BYREF

  angle.y = RandomFloat(0.0, 360.0);
  angle.x = 0.0;
  angle.z = 0.0;
  AngleVectors(&angle, &dir, 0, 0);
  *&v6.m128i_i32[1] = dir.y * a1;
  *v6.m128i_i32 = a1 * dir.x;
  return _mm_loadl_epi64(&v6);
}


// IntervalTimer::Schema_DynamicBinding  (line 264, @0x0000000001fb9c70, libserver.so)
// calls: IntervalTimer::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IntervalTimer::Schema_DynamicBinding(const IntervalTimer *const this)
{
  IntervalTimer::Schema_VerifyBindingIsRegistered();
  return IntervalTimer::s_pSchemaBinding;
}


// IntervalTimer::NetworkStateChanged  (line 272, @0x0000000001fb7340, libserver.so)
void __fastcall IntervalTimer::NetworkStateChanged(IntervalTimer *const this)
{
  ;
}


// IntervalTimer::NetworkStateChanged  (line 272, @0x0000000001fb7350, libserver.so)
void __fastcall IntervalTimer::NetworkStateChanged(
        IntervalTimer *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// IntervalTimer::NetworkStateChangedLog  (line 272, @0x0000000001fb7360, libserver.so)
void __fastcall IntervalTimer::NetworkStateChangedLog(
        const IntervalTimer *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// IntervalTimer::IntervalTimer  (line 275, @0x0000000002f07240, libserver.so)  // inlines: CNetworkVarBase
// callers: CNavDrawArea::DrawArea_Internal
void __fastcall IntervalTimer::IntervalTimer(IntervalTimer *const this)
{
  this->_vptr_IntervalTimer = off_3FD0350;  // vptr: IntervalTimer
  this->m_timestamp.m_Value = -1.0;
}


// CountdownTimer::Schema_DynamicBinding  (line 337, @0x00000000020f55a0, libserver.so)
// calls: CountdownTimer::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CountdownTimer::Schema_DynamicBinding(const CountdownTimer *const this)
{
  CountdownTimer::Schema_VerifyBindingIsRegistered();
  return CountdownTimer::s_pSchemaBinding;
}


// CountdownTimer::NetworkStateChanged  (line 347, @0x00000000020f12a0, libserver.so)
void __fastcall CountdownTimer::NetworkStateChanged(CountdownTimer *const this)
{
  ;
}


// CountdownTimer::NetworkStateChanged  (line 347, @0x00000000020f12b0, libserver.so)
void __fastcall CountdownTimer::NetworkStateChanged(
        CountdownTimer *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CountdownTimer::NetworkStateChangedLog  (line 347, @0x00000000020f12c0, libserver.so)
void __fastcall CountdownTimer::NetworkStateChangedLog(
        const CountdownTimer *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CountdownTimer::Reset  (line 359, @0x0000000002b27680, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// calls: CountdownTimer::Now
// callers: CDOTA_Ability_Nian_Whirlpool::CreateWhirlpools, CDOTA_Ability_Nian_Hurricane::LaunchTorrents, CDOTA_Ability_Nian_Waterball::OnProjectileThink
void __fastcall CountdownTimer::Reset(CountdownTimer *const this)
{
  float v2; // xmm0_4
  float v3; // [rsp+Ch] [rbp-14h]

  v2 = CountdownTimer::Now(this) + this->m_duration.m_Value;
  if ( v2 != this->m_timestamp.m_Value )
  {
    v3 = v2;
    (*(this->_vptr_CountdownTimer + 2))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_timestamp.m_Value = v3;
  }
}


// CountdownTimer::Start  (line 364, @0x00000000022146b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// calls: CountdownTimer::Now
// callers: CFish::Update, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::HeroPickState_Think_CM_SELECT, CDOTAGamerules::State_Enter_POST_GAME, CDOTA_Bot::OnAbilityExecuted, CDOTA_BotMode_DefendAlly_Human::OnDidDamage, CDOTA_Bot::ConsiderBuyback, CDOTA_BotAction_MoveTo::Think, CDOTA_TeamCommander::UpdateAvoidanceGrid, CDOTA_TeamCommander::CalculateLaneFronts, CDOTABehaviorAttack::Update, CDOTABehaviorAttackPhase::OnStart (39 total)
void __fastcall CountdownTimer::Start(CountdownTimer *const this, float a2, float duration)
{
  double v4; // xmm0_8
  float v5; // [rsp+8h] [rbp-18h]

  *&v4 = CountdownTimer::Now(this) + a2;
  if ( *&v4 != this->m_timestamp.m_Value )
  {
    v5 = *&v4;
    (*(this->_vptr_CountdownTimer + 2))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v4 = LODWORD(v5);
    this->m_timestamp.m_Value = v5;
  }
  if ( a2 != this->m_duration.m_Value )
  {
    (*(this->_vptr_CountdownTimer + 2))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, a2);
    this->m_duration.m_Value = a2;
  }
}


// CountdownTimer::Invalidate  (line 382, @0x0000000002d3e2b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CDOTA_Modifier_Treant_NaturesGuise::OnIntervalThink, CPathFollower::Avoid
void __fastcall CountdownTimer::Invalidate(CountdownTimer *const this)
{
  if ( this->m_timestamp.m_Value != -1.0 )
  {
    (*(this->_vptr_CountdownTimer + 2))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_timestamp.m_Value = -1.0;
  }
}


// CTimeline::NetworkStateChanged  (line 502, @0x00000000020f12d0, libserver.so)
void __fastcall CTimeline::NetworkStateChanged(CTimeline *const this)
{
  ;
}


// CTimeline::NetworkStateChanged  (line 502, @0x00000000020f12e0, libserver.so)
void __fastcall CTimeline::NetworkStateChanged(
        CTimeline *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CTimeline::NetworkStateChangedLog  (line 502, @0x00000000020f12f0, libserver.so)
void __fastcall CTimeline::NetworkStateChangedLog(const CTimeline *const this, const char *pVarName, const char *pMsg)
{
  ;
}


// UTIL_TraceSphere  (line 618, @0x0000000002214750, libserver.so)  // inlines: EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CEnvBeam::RandomArea, CFire::Update, CGameRules::RadiusDamage, CBasePlayer::CheatImpulseCommands, CPointPush::PushThink
void __fastcall UTIL_TraceSphere(
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        float flRadius,
        uint64 mask,
        const CBaseEntity *ignore,
        int nCollisionGroup,
        trace_t *ptr)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v11; // xmm3_4
  float z; // xmm4_4
  float v13; // xmm2_4
  CTraceFilterSimple traceFilter; // [rsp+0h] [rbp-B8h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-78h] BYREF

  ray.m_flRadius = flRadius;
  x = vecAbsStart->x;
  ray.m_Start.w = 0.0;
  y = vecAbsStart->y;
  memset(&ray.m_Delta.w, 0, 36);
  v11 = vecAbsEnd->y;
  z = vecAbsStart->z;
  v13 = vecAbsEnd->z;
  ray.m_Delta.x = vecAbsEnd->x - x;
  ray.m_Delta.y = v11 - y;
  ray.m_Delta.z = v13 - z;
  ray.m_Start.x = x;
  ray.m_Start.y = y;
  ray.m_Start.z = z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&traceFilter, ignore, nCollisionGroup, 0);
  traceFilter.m_attr.m_nInteractsWith |= mask;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, ptr);
}


// UTIL_TraceHull  (line 672, @0x00000000024120c0, libserver.so)  // inlines: EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CBaseServerVehicle::GetExitAnimToUse
void __fastcall UTIL_TraceHull(
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        const Vector *const hullMin,
        const Vector *const hullMax,
        uint64 mask,
        const CBaseEntity *ignore,
        int collisionGroup,
        trace_t *ptr)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float z; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm12_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  CTraceFilterSimple traceFilter; // [rsp+0h] [rbp-A8h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-68h] BYREF

  ray.m_Start.w = 0.0;
  x = vecAbsStart->x;
  ray.m_Delta.w = 0.0;
  y = vecAbsStart->y;
  ray.m_StartOffset.w = 0.0;
  v11 = vecAbsEnd->x;
  ray.m_Extents.w = 0.0;
  v12 = vecAbsEnd->y;
  ray.m_flRadius = 0.0;
  z = vecAbsStart->z;
  v14 = vecAbsEnd->z;
  v15 = hullMax->x;
  ray.m_Delta.x = v11 - x;
  ray.m_Delta.y = v12 - y;
  v16 = hullMax->y;
  v17 = hullMin->x;
  ray.m_Delta.z = v14 - z;
  v18 = hullMin->y;
  v19 = hullMax->z;
  v20 = hullMin->z;
  ray.m_Extents.y = (v16 - v18) * 0.5;
  ray.m_Extents.z = (v19 - v20) * 0.5;
  ray.m_Extents.x = (v15 - v17) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v21 = (v15 + v17) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v22 = (v16 + v18) * 0.5;
  v23 = (v19 + v20) * 0.5;
  ray.m_Start.x = x + v21;
  ray.m_Start.y = y + v22;
  ray.m_Start.z = z + v23;
  ray.m_StartOffset.x = -v21;
  ray.m_StartOffset.y = -v22;
  ray.m_StartOffset.z = -v23;
  CTraceFilterSimple::CTraceFilterSimple(&traceFilter, ignore, collisionGroup, 0);
  traceFilter.m_attr.m_nInteractsWith |= mask;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, ptr);
}


// UTIL_TraceHull  (line 681, @0x000000000227dca0, libserver.so)  // inlines: EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGamePhysicsQueryInterface::TraceRay
// callers: VecCheckToss, CNavGeneratorAAQuad::GenerationSampleStep, NextBotGroundLocomotion::ResolveCollision, CPathFollower::Avoid, CPathFollower::Climbing
void __fastcall UTIL_TraceHull(
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        const Vector *const hullMin,
        const Vector *const hullMax,
        uint64 mask,
        CTraceFilter *pFilter,
        trace_t *ptr)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float z; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm12_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  Ray_t ray; // [rsp+0h] [rbp-58h] BYREF

  x = vecAbsStart->x;
  ray.m_Start.w = 0.0;
  y = vecAbsStart->y;
  ray.m_Delta.w = 0.0;
  v9 = vecAbsEnd->x;
  ray.m_StartOffset.w = 0.0;
  v10 = vecAbsEnd->y;
  ray.m_Extents.w = 0.0;
  z = vecAbsStart->z;
  ray.m_flRadius = 0.0;
  v12 = vecAbsEnd->z;
  v13 = hullMax->x;
  ray.m_Delta.x = v9 - x;
  ray.m_Delta.y = v10 - y;
  v14 = hullMax->y;
  v15 = hullMin->x;
  ray.m_Delta.z = v12 - z;
  v16 = hullMin->y;
  v17 = hullMax->z;
  v18 = hullMin->z;
  ray.m_Extents.y = (v14 - v16) * 0.5;
  ray.m_Extents.z = (v17 - v18) * 0.5;
  ray.m_Extents.x = (v13 - v15) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v19 = (v13 + v15) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v20 = (v14 + v16) * 0.5;
  v21 = (v17 + v18) * 0.5;
  ray.m_Start.x = x + v19;
  ray.m_Start.y = y + v20;
  ray.m_Start.z = z + v21;
  ray.m_StartOffset.x = -v19;
  ray.m_StartOffset.y = -v20;
  pFilter->m_attr.m_nInteractsWith |= mask;
  ray.m_StartOffset.z = -v21;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, pFilter, ptr);
}


// COnlyWarnOnce::~COnlyWarnOnce  (line 851, @0x0000000002310830, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int>::Purge
void __fastcall COnlyWarnOnce::~COnlyWarnOnce(COnlyWarnOnce *const this)
{
  CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::Purge(&this->m_Warnings);
  if ( (this->m_Warnings.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>::Purge(&this->m_Warnings.m_Elements);
}


// CEntityKeyIdIndexList::~CEntityKeyIdIndexList  (line 886, @0x0000000002634200, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<unsigned int, int>::Purge
void __fastcall CEntityKeyIdIndexList::~CEntityKeyIdIndexList(CEntityKeyIdIndexList *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_hashList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hashList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hashList.m_Memory;
    CUtlMemory<unsigned int,int>::Purge(&this->m_hashList.m_Memory);
    if ( (this->m_hashList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(p_m_Memory);
  }
}


