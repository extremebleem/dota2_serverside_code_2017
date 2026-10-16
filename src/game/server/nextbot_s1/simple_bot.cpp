// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/simple_bot.cpp:106
class SelectNthAreaFunctor {
	int m_count;  // +0x0

	SelectNthAreaFunctor(int);
	bool operator()(CNavArea *);

	// sizeof = 16
};

// src/game/server/nextbot_s1/simple_bot.cpp:133
class CSimpleBotRoam : public Action<CSimpleBot> {
public:

private:

	CSimpleBotRoam(CSimpleBotRoam &);
	CSimpleBotRoam(const CSimpleBotRoam &);
	CSimpleBotRoam();
	virtual const char * GetName();
	virtual ActionResult<CSimpleBot> OnStart(CSimpleBot *, Action<CSimpleBot> *);
	virtual ActionResult<CSimpleBot> Update(CSimpleBot *, float);
	virtual EventDesiredResult<CSimpleBot> OnStuck(CSimpleBot *);
	virtual ~CSimpleBotRoam();

	// vtable[62] GetName
	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[76] OnStuck
	// sizeof = 23128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// simple_bot_add  (line 16, @0x0000000002f13820, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, GetFloat, Init, LengthSqr, NormalizeInPlace, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: UTIL_GetCommandClient, CBasePlayer::EyeVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CreateEntityByName, CBaseEntity::GetAbsOrigin, VectorNormalize, VectorAngles, CBaseEntity::SetAbsAngles, CBaseEntity::SetAbsOrigin, DispatchSpawn
// strings: "simple_bot"
// local variable allocation has failed, the output may be wrong!
void __fastcall simple_bot_add(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  const CBaseEntity *v3; // rbx
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v6; // xmm1_4
  double v7; // xmm0_8
  float v8; // xmm1_4
  float v9; // xmm6_4
  CBaseEntity *EntityByName; // r14
  const Vector *AbsOrigin; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  float v14; // [rsp+4h] [rbp-1ACh]
  float v15; // [rsp+4h] [rbp-1ACh]
  float v16; // [rsp+8h] [rbp-1A8h]
  float v17; // [rsp+8h] [rbp-1A8h]
  float v18; // [rsp+Ch] [rbp-1A4h]
  float v19; // [rsp+Ch] [rbp-1A4h]
  Vector vForward; // [rsp+10h] [rbp-1A0h] BYREF
  double v21; // [rsp+20h] [rbp-190h]
  float v22; // [rsp+28h] [rbp-188h]
  double v23; // [rsp+30h] [rbp-180h]
  float v24; // [rsp+38h] [rbp-178h]
  __int128 angles; // [rsp+40h] [rbp-170h] OVERLAPPED BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t result; // [rsp+D0h] [rbp-E0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 )
  {
    CBasePlayer::EyeVectors(CommandClient, &vForward, 0, 0);
    memset(&result.m_ShapeAttributes, 0, 31);
    result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&result);
    v14 = vForward.x * 999999.88;
    v16 = vForward.y * 999999.88;
    v18 = 999999.88 * vForward.z;
    v4 = (*(v3->_vptr_IHandleEntity + 164))(v3);
    vptr_IHandleEntity = v3->_vptr_IHandleEntity;
    v23 = v4;
    v24 = v6;
    v15 = v14 + *&v4;
    v19 = v6 + v18;
    v17 = v16 + *(&v4 + 1);
    v7 = (vptr_IHandleEntity[164])(v3);
    v21 = v7;
    v22 = v8;
    v9 = *&v7;
    *&v7 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    ray.m_flRadius = *&v7;
    ray.m_Delta.y = v17 - *(&v7 + 1);
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.x = v15 - v9;
    ray.m_Delta.z = v19 - v8;
    *&ray.m_Start.x = __PAIR64__(HIDWORD(v7), LODWORD(v9));
    ray.m_Start.z = v8;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&angles, v3, 4, 0);
    *(&angles + 1) |= 0x84041uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &angles, &result);
    if ( result.fraction < 1.0 || result.startsolid )
    {
      EntityByName = CreateEntityByName("simple_bot", -1);
      if ( EntityByName != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        vForward.z = 0.0;
        vForward.x = x - result.endpos.x;
        vForward.y = y - result.endpos.y;
        VectorNormalize(&vForward);
        VectorAngles(&vForward, &angles);
        CBaseEntity::SetAbsAngles(EntityByName, &angles);
        ray.m_Start.y = result.endpos.y + 0.0;
        ray.m_Start.z = result.endpos.z + 10.0;
        ray.m_Start.x = result.endpos.x + 0.0;
        CBaseEntity::SetAbsOrigin(EntityByName, &ray.m_Start);
        DispatchSpawn(EntityByName, 0);
      }
    }
  }
}


// InitManifestDesc<simple_bot_server::CTemplateArg>  (line 55, @0x0000000002f19e00, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_nextbot_01.cpp
// strings: "simple_bot.ventr"
// globals: `guard variable for'InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN17simple_bot_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1, _ZGRZ16InitManifestDescIN17simple_bot_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0
ResourceManifestDesc_t *__fastcall InitManifestDesc<simple_bot_server::CTemplateArg>(
        simple_bot_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4D67CA8 = 0;
    ZGRZ16InitManifestDescIN17simple_bot_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = "simple_bot.ventr";
    ZGRZ16InitManifestDescIN17simple_bot_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0 = &ZGRZ16InitManifestDescIN17simple_bot_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    qword_4D67CB0 = 0;
    InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN17simple_bot_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0;
    qword_4D67CB8 = 0;
    dword_4D67CC0 = 0;
    qword_4D67CD8 = 1;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<simple_bot_server::CTemplateArg>(simple_bot_server::CTemplateArg &)::s_Manifest;
}


// CSimpleBot::CSimpleBot  (line 60, @0x0000000002f1a110, libserver.so)  // inlines: ~NextBotCombatCharacter
// calls: NextBotCombatCharacter::NextBotCombatCharacter, operator new, CSimpleBot::CSimpleBotIntention::CSimpleBotIntention, NextBotGroundLocomotion::NextBotGroundLocomotion, INextBot::~INextBot, CBaseCombatCharacter::~CBaseCombatCharacter, _Unwind_Resume, operator delete
// callers: CSimpleBot::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CSimpleBot::CSimpleBot(CSimpleBot *const this)
{
  CSimpleBot::CSimpleBotIntention *v2; // r12
  NextBotGroundLocomotion *v3; // r12

  NextBotCombatCharacter::NextBotCombatCharacter(this);
  this->_vptr_IHandleEntity = &off_47B2E70;
  this->_vptr_INextBotEventResponder = &off_47B3A48;
  v2 = operator new(0x30u);
  CSimpleBot::CSimpleBotIntention::CSimpleBotIntention(v2, this);
  this->m_intention = v2;
  v3 = operator new(0x1B0u);
  NextBotGroundLocomotion::NextBotGroundLocomotion(v3, &this->INextBot);
  this->m_locomotor = v3;
}


// CSimpleBot::~CSimpleBot  (line 69, @0x0000000002f114a0, libserver.so)  // inlines: ~NextBotCombatCharacter
// calls: INextBot::~INextBot, CBaseCombatCharacter::~CBaseCombatCharacter
// callers: CSimpleBot::~CSimpleBot
void __fastcall CSimpleBot::~CSimpleBot(CSimpleBot *const this)
{
  CSimpleBot::CSimpleBotIntention *m_intention; // rdi
  NextBotGroundLocomotion *m_locomotor; // rdi

  this->_vptr_IHandleEntity = &off_47B2E70;
  this->_vptr_INextBotEventResponder = &off_47B3A48;
  m_intention = this->m_intention;
  if ( m_intention != 0 )
    (*(m_intention->_vptr_INextBotEventResponder + 2))(m_intention);
  m_locomotor = this->m_locomotor;
  if ( m_locomotor != 0 )
    (*(m_locomotor->_vptr_INextBotEventResponder + 2))(m_locomotor);
  this->_vptr_IHandleEntity = &off_47B13F0;
  this->_vptr_INextBotEventResponder = &off_47B1FB8;
  INextBot::~INextBot(&this->INextBot);
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
}


// CSimpleBot::~CSimpleBot  (line 69, @0x0000000002f11530, libserver.so)
// calls: CSimpleBot::~CSimpleBot, CBaseEntity::operator delete
void __fastcall CSimpleBot::~CSimpleBot(CSimpleBot *const this)
{
  CSimpleBot::~CSimpleBot(this);
  CBaseEntity::operator delete(this);
}


// CSimpleBot::Precache  (line 78, @0x0000000002f12470, libserver.so)
// calls: CBaseCombatCharacter::Precache
void __fastcall CSimpleBot::Precache(CSimpleBot *const this, const CEntityPrecacheContext *pContext)
{
  CBaseCombatCharacter::Precache(this, pContext);
}


// CSimpleBot::Spawn  (line 89, @0x0000000002f1c850, libserver.so)
// calls: NextBotCombatCharacter::Spawn
void __fastcall CSimpleBot::Spawn(CSimpleBot *const this, const CEntityKeyValues *pKeyValues)
{
  NextBotCombatCharacter::Spawn(this, pKeyValues);
}


// CSimpleBotRoam::~CSimpleBotRoam  (line 133, @0x0000000002f1f840, libserver.so)  // inlines: ~CNavPathNB, ~CPath, ~CPathAndFollower, ~CPathData
// calls: CPathFollower::~CPathFollower, Action<CSimpleBot>::~Action
void __fastcall CSimpleBotRoam::~CSimpleBotRoam(CSimpleBotRoam *const this)
{
  CPathAndFollower<CNavPathNB> *p_m_pathFollower; // rdi

  p_m_pathFollower = &this->m_pathFollower;
  *&p_m_pathFollower[-1].m_MyPath.m_flMaxPathLength = &off_47B4290;
  p_m_pathFollower[-1].m_MyPath.m_pOptimizer = &off_47B46B0;
  p_m_pathFollower->_vptr_IPathFollower = off_47B4230;  // vptr: CPathAndFollower<CNavPathNB>
  p_m_pathFollower->m_MyPath._vptr_CPathData = off_47B0E10;
  CPathFollower::~CPathFollower(p_m_pathFollower);
  Action<CSimpleBot>::~Action(this);
}


// CSimpleBotRoam::~CSimpleBotRoam  (line 133, @0x0000000002f1fa70, libserver.so)  // inlines: ~CNavPathNB, ~CPath, ~CPathAndFollower, ~CPathData, ~CSimpleBotRoam
// calls: CPathFollower::~CPathFollower, Action<CSimpleBot>::~Action, operator delete
void __fastcall CSimpleBotRoam::~CSimpleBotRoam(CSimpleBotRoam *const this)
{
  CPathAndFollower<CNavPathNB> *p_m_pathFollower; // rdi

  p_m_pathFollower = &this->m_pathFollower;
  *&p_m_pathFollower[-1].m_MyPath.m_flMaxPathLength = &off_47B4290;
  p_m_pathFollower[-1].m_MyPath.m_pOptimizer = &off_47B46B0;
  p_m_pathFollower->_vptr_IPathFollower = off_47B4230;  // vptr: CPathAndFollower<CNavPathNB>
  p_m_pathFollower->m_MyPath._vptr_CPathData = off_47B0E10;
  CPathFollower::~CPathFollower(p_m_pathFollower);
  Action<CSimpleBot>::~Action(this);
  operator delete(this);
}


// CSimpleBotRoam::GetName  (line 136, @0x0000000002f1dfa0, libserver.so)
const char *__fastcall CSimpleBotRoam::GetName(const CSimpleBotRoam *const this)
{
  return "Roam";
}


// CSimpleBotRoam::OnStart  (line 140, @0x0000000002f1dfb0, libserver.so)  // inlines: ActionResult, Continue, IActionResult, SetMinLookAheadDistance
ActionResult<CSimpleBot> *__fastcall CSimpleBotRoam::OnStart(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        CSimpleBotRoam *const this,
        CSimpleBot *me,
        Action<CSimpleBot> *priorAction)
{
  retstr->m_type = ActionResultType::CONTINUE;
  this->m_pathFollower.m_minLookAheadRange = 300.0;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CSimpleBotRoam::Update  (line 150, @0x0000000002f1fc20, libserver.so)  // inlines: ActionResult, CNavShortestPathCost, CPathCostBase, CSimpleBotPathCost, ComputePathToPos<CSimpleBot>, Continue, ForAllAreas<SelectNthAreaFunctor>, GetCenter, IActionResult, IsDebugFilterMatch, IsDebugging, IsElapsed, NavHullAny, NetworkStateChanged, PathCapabilities_t, Set, SetTargetPoint, Start, operator(), operator=, operator=<float>
// calls: CountdownTimer::Now, RandomInt, NavHull_t::NavHull_t, NextBotManager::IsDebugFilterMatch, CPath::ComputePathToPosCore, RandomFloat, CPathFollower::UpdateFollow
ActionResult<CSimpleBot> *__fastcall CSimpleBotRoam::Update(
        ActionResult<CSimpleBot> *__return_ptr retstr,
        CSimpleBotRoam *const this,
        CSimpleBot *pMe,
        float flInterval)
{
  int v7; // eax
  float v8; // xmm2_4
  int m_Size; // esi
  CNavArea **m_pMemory; // rcx
  int v11; // edx
  float *v12; // r14
  float **v13; // rcx
  int v14; // eax
  INextBot *v15; // r15
  __int64 v16; // rax
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  vec_t v19; // xmm0_4
  CNavPathNB *m_rPath; // r14
  int (**vptr_INextBotEventResponder)(...); // rax
  char v22; // al
  __int64 v23; // rax
  float v24; // xmm0_4
  int (**v25)(...); // rax
  __int64 v26; // rax
  bool v27; // al
  double v28; // xmm0_8
  double v29; // xmm1_8
  double v30; // xmm2_8
  float rCostFunc; // [rsp+8h] [rbp-98h]
  const CountdownTimer *p_m_timer; // [rsp+10h] [rbp-90h]
  float rPathCaps; // [rsp+18h] [rbp-88h]
  Vector vGoalPos; // [rsp+20h] [rbp-80h] BYREF
  CSimpleBotPathCost cost; // [rsp+30h] [rbp-70h] BYREF
  PathCapabilities_t v37[2]; // [rsp+50h] [rbp-50h] BYREF

  p_m_timer = &this->m_timer;
  if ( this->m_pathFollower.m_rPath->m_nSegmentCount > 0
    && CountdownTimer::Now(&this->m_timer) < this->m_timer.m_timestamp.m_Value )
  {
    CPathFollower::UpdateFollow(&this->m_pathFollower, &pMe->INextBot);
  }
  else
  {
    v7 = RandomInt(0, TheNavMesh->m_nGridAreaCount - 1);
    m_Size = TheNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      m_pMemory = TheNavMesh->m_NavAreas.m_Memory.m_pMemory;
      v11 = v7 - 1;
      v12 = *m_pMemory;
      if ( v7 > 0 )
      {
        v13 = (m_pMemory + 1);
        v14 = v7 - m_Size;
        do
        {
          if ( v11 == v14 )
            break;
          --v11;
          v12 = *v13++;
        }
        while ( v11 != -1 );
      }
      if ( v12 != 0 )
      {
        v15 = &stru_10.m_PVSBits.m_Ints[189];
        NavHull_t::NavHull_t(v37, -1.0, v8, 7u);
        cost.m_navHull = *&v37[0].m_pPathingEntity;
        cost._vptr_CPathCostBase = off_47B2DF0;
        if ( pMe != 0 )
        {
          v15 = &pMe->INextBot;
          if ( (*(pMe->_vptr_INextBotEventResponder + 69))(&pMe->INextBot) != 0 )
          {
            v16 = (*(pMe->_vptr_INextBotEventResponder + 69))(&pMe->INextBot);
            cost.m_navHull.m_flHullRadius = (*(*v16 + 744LL))(v16) * 0.5;
          }
        }
        v17 = v12[14];
        v18 = v12[15];
        v19 = v12[16];
        cost.m_pMe = pMe;
        m_rPath = this->m_pathFollower.m_rPath;
        vGoalPos.x = v17;
        vGoalPos.y = v18;
        vGoalPos.z = v19;
        m_rPath->m_Target.m_bUseEntity = 0;
        m_rPath->m_Target.m_bIsOpenGoal = 0;
        m_rPath->m_Target.m_hTargetEntity.m_Index = -1;
        m_rPath->m_Target.m_vTargetPoint.x = v17;
        m_rPath->m_Target.m_vTargetPoint.y = v18;
        m_rPath->m_Target.m_vTargetPoint.z = v19;
        v37[0].m_pPathCost = &cost;
        vptr_INextBotEventResponder = pMe->_vptr_INextBotEventResponder;
        v37[0].m_pPathingEntity = 0;
        v37[0].m_bIsDebugging = 0;
        v37[0].m_flMoverStepHeight = 1.0;
        v37[0].m_flMoverCrouchHullHeight = 1.0;
        v37[0].m_pPathingEntity = (vptr_INextBotEventResponder[66])(v15);
        if ( (g_NextBotManager.m_debugType & 4) != 0
          && (g_NextBotManager.m_debugFilterList.m_Size == 0
           || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, v15)) )
        {
          v22 = (*(pMe->_vptr_INextBotEventResponder + 96))(v15, 4);
        }
        else
        {
          v22 = 0;
        }
        v37[0].m_bIsDebugging = v22;
        v23 = (*(pMe->_vptr_INextBotEventResponder + 69))(v15);
        if ( v23 != 0 )
        {
          v24 = (*(*v23 + 768LL))(v23);
          v25 = pMe->_vptr_INextBotEventResponder;
          v37[0].m_flMoverCrouchHullHeight = v24;
          v26 = (v25[68])(v15);
          if ( v26 != 0 )
            v37[0].m_flMoverStepHeight = (*(*v26 + 792LL))(v26);
        }
        v27 = CPath::ComputePathToPosCore(m_rPath, v37, &vGoalPos, &cost);
        (*(m_rPath->_vptr_CPathData + 8))(m_rPath, v27);
      }
    }
    rPathCaps = RandomFloat(5.0, 10.0);
    *&v28 = CountdownTimer::Now(p_m_timer) + rPathCaps;
    if ( *&v28 != this->m_timer.m_timestamp.m_Value )
    {
      rCostFunc = *&v28;
      (*(this->m_timer._vptr_CountdownTimer + 2))(p_m_timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v28 = LODWORD(rCostFunc);
      this->m_timer.m_timestamp.m_Value = rCostFunc;
    }
    if ( rPathCaps != this->m_timer.m_duration.m_Value )
    {
      (*(this->m_timer._vptr_CountdownTimer + 2))(p_m_timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v28, v29, v30, rPathCaps);
      this->m_timer.m_duration.m_Value = rPathCaps;
    }
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CSimpleBotRoam::OnStuck  (line 177, @0x0000000002f1dfe0, libserver.so)  // inlines: EventDesiredResult, IActionResult, InvalidatePath, TryContinue
EventDesiredResult<CSimpleBot> *__fastcall CSimpleBotRoam::OnStuck(
        EventDesiredResult<CSimpleBot> *__return_ptr retstr,
        CSimpleBotRoam *const this,
        CSimpleBot *pMe)
{
  (*(this->m_pathFollower.m_rPath->_vptr_CPathData + 2))(this->m_pathFollower.m_rPath);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CSimpleBot::CSimpleBotIntention::~CSimpleBotIntention  (line 195, @0x0000000002f11340, libserver.so)  // inlines: ~IContextualQuery, ~IIntention, ~INextBotComponent, ~INextBotEventResponder
void __fastcall CSimpleBot::CSimpleBotIntention::~CSimpleBotIntention(CSimpleBot::CSimpleBotIntention *const this)
{
  Behavior<CSimpleBot> *m_behavior; // rdi

  this->_vptr_INextBotEventResponder = &off_47B4730;
  this->_vptr_IContextualQuery = &off_47B4990;
  m_behavior = this->m_behavior;
  if ( m_behavior != 0 )
    (*(m_behavior->_vptr_INextBotEventResponder + 2))(m_behavior);
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// CSimpleBot::CSimpleBotIntention::~CSimpleBotIntention  (line 195, @0x0000000002f113a0, libserver.so)  // inlines: ~CSimpleBotIntention, ~IContextualQuery, ~IIntention, ~INextBotComponent, ~INextBotEventResponder
// calls: operator delete
void __fastcall CSimpleBot::CSimpleBotIntention::~CSimpleBotIntention(CSimpleBot::CSimpleBotIntention *const this)
{
  Behavior<CSimpleBot> *m_behavior; // rdi

  this->_vptr_INextBotEventResponder = &off_47B4730;
  this->_vptr_IContextualQuery = &off_47B4990;
  m_behavior = this->m_behavior;
  if ( m_behavior != 0 )
    (*(m_behavior->_vptr_INextBotEventResponder + 2))(m_behavior);
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// CSimpleBot::CSimpleBotIntention::Reset  (line 195, @0x0000000002f13530, libserver.so)  // inlines: Action, Behavior, CEntityHandle, CHandle, CNavPathNB, CNavTarget, CPathAndFollower, CSimpleBotRoam, EventDesiredResult, IActionResult, Invalidate, operator=, ~CNavPathNB, ~CPath, ~CPathAndFollower, ~CPathData, ~IContextualQuery, ~INextBotEventResponder
// calls: operator new, CPathFollower::CPathFollower, CPath::CPath, CountdownTimer::CountdownTimer, CUtlSymbol::CUtlSymbol, Action<CSimpleBot>::~Action, operator delete, _Unwind_Resume, CPathFollower::~CPathFollower
void __fastcall CSimpleBot::CSimpleBotIntention::Reset(CSimpleBot::CSimpleBotIntention *const this)
{
  Behavior<CSimpleBot> *m_behavior; // rdi
  char *v3; // rbx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  const char *v7; // r14
  Behavior<CSimpleBot> *v8; // r12

  m_behavior = this->m_behavior;
  if ( m_behavior != 0 )
    (*(m_behavior->_vptr_INextBotEventResponder + 2))(m_behavior);
  v3 = operator new(0x5A58u);
  *(v3 + 16) = 0;
  *(v3 + 9) = 0;
  *(v3 + 10) = 0;
  *(v3 + 3) = 0;
  *(v3 + 4) = 0;
  *(v3 + 5) = 0;
  *(v3 + 6) = 0;
  *(v3 + 7) = 0;
  *(v3 + 2) = 0;
  v3[96] = 0;
  v3[97] = 0;
  *(v3 + 22) = 0;
  *v3 = &off_47B4290;
  *(v3 + 1) = &off_47B46B0;
  CPathFollower::CPathFollower((v3 + 104), (v3 + 320));
  *(v3 + 13) = off_47B4230;
  CPath::CPath((v3 + 320));
  *(v3 + 2880) = 0;
  *(v3 + 40) = off_47B2A30;
  *(v3 + 5762) = -1;
  v3[23064] = 1;
  v3[23065] = 0;
  x = vec3_invalid.x;
  v3[23084] = 1;
  y = vec3_invalid.y;
  *(v3 + 5767) = -1;
  z = vec3_invalid.z;
  *(v3 + 5763) = x;
  *(v3 + 5764) = y;
  *(v3 + 5765) = z;
  v3[23085] = 0;
  *(v3 + 5768) = x;
  *(v3 + 5769) = y;
  *(v3 + 5770) = z;
  CountdownTimer::CountdownTimer((v3 + 23104));
  v7 = (*(*v3 + 496LL))(v3);
  v8 = operator new(0x20u);
  v8->_vptr_INextBotEventResponder = &off_47B2B30;
  v8->_vptr_IContextualQuery = &off_47B2D70;
  CUtlSymbol::CUtlSymbol(&v8->m_name, v7);
  v8->m_action = v3;
  this->m_behavior = v8;
}


// CSimpleBot::CSimpleBotIntention::CSimpleBotIntention  (line 195, @0x0000000002f19eb0, libserver.so)  // inlines: Action, Behavior, CEntityHandle, CHandle, CNavPathNB, CNavTarget, CPathAndFollower, CSimpleBotRoam, EventDesiredResult, IActionResult, IIntention, Invalidate, operator=, ~CNavPathNB, ~CPath, ~CPathAndFollower, ~CPathData, ~IContextualQuery, ~IIntention, ~INextBotComponent, ~INextBotEventResponder
// calls: INextBotComponent::INextBotComponent, operator new, CPathFollower::CPathFollower, CPath::CPath, CountdownTimer::CountdownTimer, CUtlSymbol::CUtlSymbol, _Unwind_Resume, operator delete, CPathFollower::~CPathFollower, Action<CSimpleBot>::~Action
// callers: CSimpleBot::CSimpleBot
void __fastcall CSimpleBot::CSimpleBotIntention::CSimpleBotIntention(
        CSimpleBot::CSimpleBotIntention *const this,
        CSimpleBot *me)
{
  INextBot *v2; // rax
  char *v4; // rbx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  const char *v8; // r14
  Behavior<CSimpleBot> *v9; // r12

  v2 = 0;
  if ( me != 0 )
    v2 = &me->INextBot;
  INextBotComponent::INextBotComponent(this, v2);
  this->_vptr_INextBotEventResponder = &off_47B4730;
  this->_vptr_IContextualQuery = &off_47B4990;
  v4 = operator new(0x5A58u);
  *(v4 + 16) = 0;
  *(v4 + 9) = 0;
  *(v4 + 10) = 0;
  *(v4 + 3) = 0;
  *(v4 + 4) = 0;
  *(v4 + 5) = 0;
  *(v4 + 6) = 0;
  *(v4 + 7) = 0;
  *(v4 + 2) = 0;
  v4[96] = 0;
  v4[97] = 0;
  *(v4 + 22) = 0;
  *v4 = &off_47B4290;
  *(v4 + 1) = &off_47B46B0;
  CPathFollower::CPathFollower((v4 + 104), (v4 + 320));
  *(v4 + 13) = off_47B4230;
  CPath::CPath((v4 + 320));
  *(v4 + 2880) = 0;
  *(v4 + 40) = off_47B2A30;
  *(v4 + 5762) = -1;
  v4[23064] = 1;
  v4[23065] = 0;
  x = vec3_invalid.x;
  v4[23084] = 1;
  y = vec3_invalid.y;
  *(v4 + 5767) = -1;
  z = vec3_invalid.z;
  *(v4 + 5763) = x;
  *(v4 + 5764) = y;
  *(v4 + 5765) = z;
  v4[23085] = 0;
  *(v4 + 5768) = x;
  *(v4 + 5769) = y;
  *(v4 + 5770) = z;
  CountdownTimer::CountdownTimer((v4 + 23104));
  v8 = (*(*v4 + 496LL))(v4);
  v9 = operator new(0x20u);
  v9->_vptr_INextBotEventResponder = &off_47B2B30;
  v9->_vptr_IContextualQuery = &off_47B2D70;
  CUtlSymbol::CUtlSymbol(&v9->m_name, v8);
  v9->m_action = v4;
  this->m_behavior = v9;
}


// CSimpleBot::CSimpleBotIntention::Update  (line 195, @0x0000000002f1c0d0, libserver.so)
// calls: Behavior<CSimpleBot>::Update
void __fastcall CSimpleBot::CSimpleBotIntention::Update(CSimpleBot::CSimpleBotIntention *const this)
{
  float v1; // xmm1_4
  CSimpleBot *p_m_timestamp; // rsi
  INextBot *m_bot; // rax
  double v4; // xmm0_8
  Behavior<CSimpleBot> *m_behavior; // rdi

  p_m_timestamp = 0;
  m_bot = this->m_bot;
  *&v4 = LODWORD(this->m_curInterval);
  m_behavior = this->m_behavior;
  if ( m_bot != 0 )
    p_m_timestamp = &m_bot[-13].m_immobileTimer.m_timestamp;
  Behavior<CSimpleBot>::Update(m_behavior, p_m_timestamp, v4, v1);
}


