// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbot.cpp:35
class CSendBotCommand {
	const char * m_command;  // +0x0
	CSendBotCommand(const char *);
	bool operator()(INextBot *);

	// sizeof = 8
};

// src/game/server/nextbot_s1/nextbot.cpp:72
class C_NextBotCombatCharacter_MapInstall {
	C_NextBotCombatCharacter_MapInstall();

	// sizeof = 1
};

// src/game/server/nextbot_s1/nextbot.cpp:76
class NextBotApproacher {
	bool m_isGoalValid;  // +0x0

	NextBotApproacher();
	bool operator()(INextBot *);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// nb_command  (line 53, @0x0000000002f11410, libserver.so)  // inlines: ArgS, ForEachBot<CSendBotCommand>, operator(), operator[]
// calls: Msg
// strings: "Missing command string"
void __fastcall nb_command(const CCommandContext *const ctx, const CCommand *const args)
{
  char *v2; // r13
  __int64 m_nArgv0Size; // rax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v6; // rbx

  if ( args->m_nArgc <= 1 )
  {
    Msg("Missing command string");
  }
  else
  {
    v2 = "";
    m_nArgv0Size = args->m_nArgv0Size;
    if ( m_nArgv0Size != 0 )
      v2 = &args->m_pArgSBuffer[m_nArgv0Size];
    m_Head = g_NextBotManager.m_botList.m_Head;
    if ( m_Head != 0xFFFF )
    {
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      do
      {
        v6 = m_Head;
        (*(m_pMemory[v6].m_Element->_vptr_INextBotEventResponder + 36))(m_pMemory[v6].m_Element, v2);
        m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
        m_Head = m_pMemory[v6].m_Next;
      }
      while ( m_Head != 0xFFFF );
    }
  }
}


// NextBotCombatCharacter::GetDataDescMap  (line 68, @0x0000000002f11230, libserver.so)
// globals: NextBotCombatCharacter::m_DataMap
datamap_t *__fastcall NextBotCombatCharacter::GetDataDescMap(NextBotCombatCharacter *const this)
{
  return &NextBotCombatCharacter::m_DataMap;
}


// NextBotCombatCharacter::AddDatadescMetadataKeys  (line 68, @0x0000000002f170f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: NextBotCombatCharacter::GetEntityClass(void)
void __fastcall NextBotCombatCharacter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, NextBotCombatCharacter::GetEntityClass);
}


// NextBotCombatCharacter::GetBaseMap  (line 68, @0x0000000002f17110, libserver.so)
datamap_t *__cdecl NextBotCombatCharacter::GetBaseMap()
{
  return &CBaseCombatCharacter::m_DataMap;
}


// DataMapInit<NextBotCombatCharacter>  (line 68, @0x0000000002f1ad70, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nextbot_01.cpp
// strings: "NextBotCombatCharacter"
// globals: `guard variable for'DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder, `guard variable for'DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::dataDesc, NextBotCombatCharacter::GetEntityClass(void), NextBotCombatCharacter::m_DataMap, DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder) != 0 )
  {
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_pszBase = "NextBotCombatCharacter";
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder,
      &_dso_handle);
  }
  NextBotCombatCharacter::m_DataMap.baseMap = &CBaseCombatCharacter::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_nLenBase + 8);
    *stpcpy(v2, DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_pszBase) = 0x6B6E6968546F44LL;
    m_Size = DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Size == DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::dataDesc);
  }
  NextBotCombatCharacter::m_DataMap.dataNumFields = 1;
  NextBotCombatCharacter::m_DataMap.dataDesc = &DataMapInit<NextBotCombatCharacter>(NextBotCombatCharacter *)::dataDesc[1];
  AddDatadescMetadataKeys(&NextBotCombatCharacter::m_DataMap, NextBotCombatCharacter::GetEntityClass);
  return &NextBotCombatCharacter::m_DataMap;
}


// NextBotCombatCharacter::YouForgotToImplementOrDeclareServerClass  (line 72, @0x0000000002f11240, libserver.so)
int __fastcall NextBotCombatCharacter::YouForgotToImplementOrDeclareServerClass(NextBotCombatCharacter *const this)
{
  return 0;
}


// NextBotCombatCharacter::GetServerClass  (line 72, @0x0000000002f14ef0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall NextBotCombatCharacter::GetServerClass(NextBotCombatCharacter *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// NextBotApproacher::NextBotApproacher  (line 79, @0x0000000002f206c0, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator=
// calls: UTIL_GetListenServerHost, CBasePlayer::EyeVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, NDebugOverlay::Cross3D
// callers: nb_move_to_cursor
void __fastcall NextBotApproacher::NextBotApproacher(NextBotApproacher *const this)
{
  CBasePlayer *ListenServerHost; // rax
  const CBaseEntity *v3; // rbx
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v6; // xmm1_4
  vec_t v7; // xmm1_4
  vec_t x; // xmm0_4
  float v9; // [rsp+4h] [rbp-19Ch]
  float v10; // [rsp+4h] [rbp-19Ch]
  float v11; // [rsp+8h] [rbp-198h]
  float v12; // [rsp+8h] [rbp-198h]
  float v13; // [rsp+Ch] [rbp-194h]
  float v14; // [rsp+Ch] [rbp-194h]
  Vector vForward; // [rsp+10h] [rbp-190h] BYREF
  double v16; // [rsp+20h] [rbp-180h]
  vec_t v17; // [rsp+28h] [rbp-178h]
  double v18; // [rsp+30h] [rbp-170h]
  float v19; // [rsp+38h] [rbp-168h]
  CTraceFilterSimple v20; // [rsp+40h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-120h] BYREF
  trace_t result; // [rsp+D0h] [rbp-D0h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  v3 = ListenServerHost;
  if ( ListenServerHost != 0 )
  {
    CBasePlayer::EyeVectors(ListenServerHost, &vForward, 0, 0);
    memset(&result.m_ShapeAttributes, 0, 31);
    result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&result);
    v9 = vForward.x * 999999.88;
    v11 = vForward.y * 999999.88;
    v13 = 999999.88 * vForward.z;
    v4 = (*(v3->_vptr_IHandleEntity + 164))(v3);
    vptr_IHandleEntity = v3->_vptr_IHandleEntity;
    v18 = v4;
    v19 = v6;
    v10 = v9 + *&v4;
    v14 = v6 + v13;
    v12 = v11 + *(&v4 + 1);
    v16 = (vptr_IHandleEntity[164])(v3);
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.x = v10 - *&v16;
    ray.m_Delta.y = v12 - *(&v16 + 1);
    ray.m_Delta.z = v14 - v7;
    v17 = v7;
    *&ray.m_Start.x = v16;
    ray.m_Start.z = v7;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v20, v3, 4, 0);
    v20.m_attr.m_nInteractsWith |= 0x87041uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v20, &result);
    if ( result.fraction < 1.0 || result.startsolid )
    {
      NDebugOverlay::Cross3D(&result.endpos, 5.0, 0, 255, 0, 1, 10.0);
      x = result.endpos.x;
      this->m_isGoalValid = 1;
      this->m_goal.x = x;
      this->m_goal.y = result.endpos.y;
      this->m_goal.z = result.endpos.z;
    }
    else
    {
      this->m_isGoalValid = 0;
    }
  }
}


// nb_move_to_cursor  (line 116, @0x0000000002f17120, libserver.so)  // inlines: ForEachBot<NextBotApproacher>, IsDebugFilterMatch, operator(), operator[]
// calls: UTIL_IsCommandIssuedByServerAdmin, NextBotApproacher::NextBotApproacher, NextBotManager::IsDebugFilterMatch
void __fastcall nb_move_to_cursor(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v4; // rbx
  INextBot *m_Element; // r12
  NextBotApproacher approach; // [rsp+0h] [rbp-30h] BYREF

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    NextBotApproacher::NextBotApproacher(&approach);
    m_Head = g_NextBotManager.m_botList.m_Head;
    if ( m_Head != 0xFFFF )
    {
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      do
      {
        v4 = m_Head;
        m_Element = m_pMemory[v4].m_Element;
        if ( g_NextBotManager.m_debugFilterList.m_Size == 0
          || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, m_pMemory[v4].m_Element) )
        {
          (*(m_Element->_vptr_INextBotEventResponder + 31))(m_Element, &approach.m_goal, 0.0);
        }
        m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
        m_Head = m_pMemory[v4].m_Next;
      }
      while ( m_Head != 0xFFFF );
    }
  }
}


// IgnoreActorsTraceFilterFunction  (line 129, @0x0000000002f124f0, libserver.so)
bool __fastcall IgnoreActorsTraceFilterFunction(CBaseEntity *pEntity, uint64 contentsMask)
{
  __int64 v3; // rsi

  if ( (*(pEntity->_vptr_IHandleEntity + 153))(pEntity, contentsMask) != 0 )
    return 0;
  else
    return (*(pEntity->_vptr_IHandleEntity + 140))(pEntity, v3, 0) ^ 1;
}


// VisionTraceFilterFunction  (line 137, @0x0000000002f171c0, libserver.so)
// calls: CBaseEntity::BlocksLOS
bool __fastcall VisionTraceFilterFunction(CBaseEntity *pEntity, uint64 contentsMask)
{
  return (*(pEntity->_vptr_IHandleEntity + 153))(pEntity, contentsMask) == 0
      && (*(pEntity->_vptr_IHandleEntity + 140))(pEntity) == 0
      && CBaseEntity::BlocksLOS(pEntity);
}


// NextBotCombatCharacter::NextBotCombatCharacter  (line 150, @0x0000000002f17210, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, EnsureValidValue<unsigned char>
// calls: CBaseCombatCharacter::CBaseCombatCharacter, INextBot::INextBot, CBaseCombatCharacter::~CBaseCombatCharacter, _Unwind_Resume
// callers: NextBotCombatCharacter::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC::CDOTA_BaseNPC, CSimpleBot::CSimpleBot
void __fastcall NextBotCombatCharacter::NextBotCombatCharacter(NextBotCombatCharacter *const this)
{
  CBaseCombatCharacter::CBaseCombatCharacter(this);
  INextBot::INextBot(&this->INextBot);
  this->m_nLod.m_Value = 0;
  this->_vptr_IHandleEntity = &off_47B13F0;
  this->_vptr_INextBotEventResponder = &off_47B1FB8;
  this->m_lastAttacker.m_Index = -1;
  this->m_didModelChange = 0;
  this->m_bApplyStressDamage = 0;
}


// NextBotCombatCharacter::Spawn  (line 161, @0x0000000002f1c690, libserver.so)  // inlines: AddSolidFlags, NetworkStateChanged, Set, SetSimulatedEveryTick, SetSolid, curtime, operator=, operator=<bool>, operator=<int>
// calls: CBaseCombatCharacter::Spawn, CNextbotLodManager::UpdateLod, CCollisionProperty::SetSolidFlags, CCollisionProperty::SetupPhysicsFromUnscaledAABB, CBaseEntity::SetMoveType, CBaseEntity::GetHealth, CBaseEntity::SetMaxHealth, CBaseEntity::SetDamageOptions, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CDOTA_BaseNPC::Spawn, CSimpleBot::Spawn
// globals: NextBotCombatCharacter::DoThink(void)
void __fastcall NextBotCombatCharacter::Spawn(NextBotCombatCharacter *const this, const CEntityKeyValues *pKeyValues)
{
  CNextbotLodManager *m_pLodManager; // rdi
  const Vector *v4; // r14
  const Vector *v5; // rax
  bool v6; // r12
  int Health; // eax
  float v8; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseCombatCharacter::Spawn(this, pKeyValues);
  if ( this->m_nLod.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2040, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nLod.m_Value = 0;
  }
  m_pLodManager = g_NextBotManager.m_pLodManager;
  if ( m_pLodManager != 0 )
    CNextbotLodManager::UpdateLod(m_pLodManager, this);
  (*(this->_vptr_INextBotEventResponder + 62))(&this->INextBot);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  v4 = (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
  v5 = (*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
  CCollisionProperty::SetupPhysicsFromUnscaledAABB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    8,
    v5,
    v4);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_CUSTOM, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  v6 = g_NextBotManager.m_iUpdateTickrate <= 1;
  if ( v6 != this->m_bSimulatedEveryTick.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSimulatedEveryTick.m_Value = v6;
  }
  Health = CBaseEntity::GetHealth(this);
  CBaseEntity::SetMaxHealth(this, Health);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  (*(this->_vptr_IHandleEntity + 219))(this);
  CBaseEntity::ThinkSet(this, NextBotCombatCharacter::DoThink, 0.0, 0, 0);
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      (m_pfnWarningFunc)(1, 0.0);
  }
  CBaseEntity::SetNextThink(this, v8, 0);
  this->m_lastAttacker.m_Index = -1;
}


// NextBotCombatCharacter::IsAreaTraversable  (line 211, @0x0000000002f1c860, libserver.so)
// calls: CBaseCombatCharacter::IsAreaTraversable
bool __fastcall NextBotCombatCharacter::IsAreaTraversable(
        const NextBotCombatCharacter *const this,
        const CNavArea *pArea)
{
  __int64 v4; // rax

  return pArea != 0
      && ((v4 = (*(this->_vptr_INextBotEventResponder + 68))(&this->INextBot)) == 0 || (*(*v4 + 856LL))(v4, pArea) != 0)
      && CBaseCombatCharacter::IsAreaTraversable(this, pArea);
}


// NextBotCombatCharacter::DoThink  (line 223, @0x0000000002f14b40, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, ExitScope, GetBool, GetElapsed, GetInt, GetTimebaseRegister, InTargetThread, IsEnabled, IsGamePaused, PLAT_CPU_TIME, curtime, ~CMicroProfilerGuard, ~CVProfScope
// calls: CBaseEntity::SetNextThink, ThreadGetCurrentId, INextBot::BeginUpdate, INextBot::EndUpdate, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), std::terminate(void), _Unwind_Resume, CVProfile::ExitScope
// strings: "NextBotCombatCharacter::DoThink", "NextBot"
void __fastcall NextBotCombatCharacter::DoThink(NextBotCombatCharacter *const this)
{
  float v1; // xmm1_4
  int m_enabled; // r9d
  bool v4; // r14
  CGlobalVars *v5; // r12
  __int64 v6; // rdi
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  unsigned __int64 v8; // r12
  ThreadId_t v9; // r13
  uint64 v10; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v12; // r12
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v14; // rdx
  __int64 v15; // rdi
  ThreadId_t v16; // r13
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  CVProfNode *m_pParent; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  __int64 i; // rax
  __int64 v22; // r12

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled == 0 )
  {
    v5 = gpGlobals;
    if ( gpGlobals == 0 )
      goto LABEL_4;
    goto LABEL_3;
  }
  m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
  v12 = __rdtsc();
  if ( m_TargetThreadId == ThreadGetCurrentId(this) )
  {
    m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
    if ( m_pCurNode->m_pszName != "NextBotCombatCharacter::DoThink" )
    {
      m_pCurNode = CVProfNode::GetSubNode(
                     g_VProfCurrentProfile.m_pCurNode,
                     "NextBotCombatCharacter::DoThink",
                     0,
                     "NextBot",
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
  v14 = m_numTimeBaseTicks - v12 + __rdtsc();
  v5 = gpGlobals;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v14;
  if ( v5 != 0 )
  {
LABEL_3:
    if ( !v5->m_bEnableAssertions && !v5->m_bInSimulation )
    {
      m_pfnWarningFunc = v5->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(1);
    }
  }
LABEL_4:
  CBaseEntity::SetNextThink(this, v1, 0);
  if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] != 0 )
  {
    if ( !v4 )
      return;
    v8 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0
      || (v9 = g_VProfCurrentProfile.m_TargetThreadId) != ThreadGetCurrentId(v6) )
    {
LABEL_14:
      v10 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v10 - v8 + __rdtsc();
      return;
    }
LABEL_32:
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
    goto LABEL_14;
  }
  if ( INextBot::BeginUpdate(&this->INextBot) )
  {
    if ( this->m_didModelChange )
    {
      vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
      this->m_didModelChange = 0;
      vptr_INextBotEventResponder[26](&this->INextBot);
      for ( i = (*(this->_vptr_INextBotEventResponder + 3))(&this->INextBot);
            ;
            i = (*(this->_vptr_INextBotEventResponder + 4))(&this->INextBot, v22) )
      {
        v22 = i;
        if ( i == 0 )
          break;
        (*(*i + 208LL))(i);
      }
    }
    if ( NextBotStop.m_pParent->m_Value.m_nValue == 0 && (this->m_fFlags.m_Value & 0x20) == 0 )
      (*(this->_vptr_INextBotEventResponder + 63))(&this->INextBot);
    INextBot::EndUpdate(&this->INextBot);
  }
  if ( v4 )
  {
    v8 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot )
    {
      v15 = g_VProfCurrentProfile.m_enabled;
      if ( v15 == 0 )
        goto LABEL_14;
    }
    v16 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v16 != ThreadGetCurrentId(v15) )
      goto LABEL_14;
    goto LABEL_32;
  }
}


// NextBotCombatCharacter::Touch  (line 275, @0x0000000002f11920, libserver.so)  // inlines: CGameTrace, DidHit, RnCollisionAttr_t, operator=
// calls: CBaseEntity::Touch, CGameTrace::Init, CBaseEntity::GetTouchTrace
void __fastcall NextBotCombatCharacter::Touch(NextBotCombatCharacter *const this, CBaseEntity *other)
{
  INextBot *v2; // r13
  const trace_t *TouchTrace; // rax
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  uint8 type; // dl
  const CPhysSurfaceProperties *m_pSurfaceProperties; // rcx
  float dist; // xmm0_4
  uint8 signbits; // dl
  float fraction; // xmm0_4
  __int16 v14; // dx
  _BOOL8 startsolid; // rdx
  vec_t z; // xmm1_4
  __int64 hitboxBoneIndex; // rcx
  trace_t result; // [rsp+0h] [rbp-D0h] BYREF

  v2 = &this->INextBot;
  if ( (*(this->_vptr_INextBotEventResponder + 80))(&this->INextBot) != 0 )
  {
    memset(&result.m_ShapeAttributes, 0, 31);
    result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&result);
    TouchTrace = CBaseEntity::GetTouchTrace();
    type = TouchTrace->plane.type;
    result.startpos.x = TouchTrace->startpos.x;
    m_pSurfaceProperties = TouchTrace->m_pSurfaceProperties;
    result.startpos.y = TouchTrace->startpos.y;
    result.startpos.z = TouchTrace->startpos.z;
    result.endpos = TouchTrace->endpos;
    result.plane.normal = TouchTrace->plane.normal;
    dist = TouchTrace->plane.dist;
    result.plane.type = type;
    signbits = TouchTrace->plane.signbits;
    result.plane.dist = dist;
    fraction = TouchTrace->fraction;
    result.plane.signbits = signbits;
    v14 = *TouchTrace->plane.pad;
    result.fraction = fraction;
    *result.plane.pad = v14;
    result.contents = TouchTrace->contents;
    startsolid = TouchTrace->startsolid;
    result.startsolid = TouchTrace->startsolid;
    result.m_pSurfaceProperties = m_pSurfaceProperties;
    result.m_pEnt = TouchTrace->m_pEnt;
    result.m_pHitbox = TouchTrace->m_pHitbox;
    result.m_hBody = TouchTrace->m_hBody;
    result.m_hShape = TouchTrace->m_hShape;
    result.m_ShapeAttributes = TouchTrace->m_ShapeAttributes;
    LODWORD(m_pSurfaceProperties) = TouchTrace->m_nFaceIndex;
    result.boneLocalPos = TouchTrace->boneLocalPos;
    result.boneLocalNormal.x = TouchTrace->boneLocalNormal.x;
    result.boneLocalNormal.y = TouchTrace->boneLocalNormal.y;
    z = TouchTrace->boneLocalNormal.z;
    result.m_nFaceIndex = m_pSurfaceProperties;
    hitboxBoneIndex = TouchTrace->hitboxBoneIndex;
    LOWORD(TouchTrace) = TouchTrace->unused0;
    result.boneLocalNormal.z = z;
    result.hitboxBoneIndex = hitboxBoneIndex;
    result.unused0 = TouchTrace;
    if ( fraction < 1.0
      || startsolid
      || (*(other->_vptr_IHandleEntity + 147))(
           other,
           v6,
           startsolid,
           hitboxBoneIndex,
           v7,
           v8,
           *&result.startpos.x,
           *&result.startpos.z,
           *&result.endpos.y,
           *&result.plane.normal.x,
           *&result.plane.normal.z,
           *&result.plane.type,
           result.contents,
           *&result.startsolid,
           result.m_pSurfaceProperties,
           result.m_pEnt,
           result.m_pHitbox,
           result.m_hBody,
           result.m_hShape,
           result.m_ShapeAttributes.m_nInteractsAs,
           result.m_ShapeAttributes.m_nInteractsWith,
           result.m_ShapeAttributes.m_nInteractsExclude,
           *&result.m_ShapeAttributes.m_nEntityId,
           *&result.boneLocalPos.x,
           *&result.boneLocalPos.z,
           *&result.boneLocalNormal.y,
           *&result.m_nFaceIndex) != 0 )
    {
      (*(this->_vptr_INextBotEventResponder + 7))(v2, other, &result);
    }
  }
  CBaseEntity::Touch(this, other);
}


// NextBotCombatCharacter::OnNewModel  (line 295, @0x0000000002f1c8c0, libserver.so)  // inlines: CWeakHandle, Init
// calls: CBaseFlex::OnNewModel
// callers: CDOTA_BaseNPC::OnNewModel
void __fastcall NextBotCombatCharacter::OnNewModel(
        NextBotCombatCharacter *const this,
        HModel hOldModel,
        HModel hNewModel)
{
  HModel hOldModela; // [rsp+0h] [rbp-30h] BYREF
  HModel hNewModela; // [rsp+10h] [rbp-20h] BYREF

  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  hOldModela.m_pBinding = hOldModel.m_pBinding->m_pData;
  CBaseFlex::OnNewModel(this, &hOldModela, &hNewModela);
  this->m_didModelChange = 1;
}


// NextBotCombatCharacter::Ignite  (line 306, @0x0000000002f11b80, libserver.so)
// calls: CBaseAnimating::Ignite
void __fastcall NextBotCombatCharacter::Ignite(
        NextBotCombatCharacter *const this,
        float flFlameLifetime,
        bool bNPCOnly,
        float flSize,
        bool bCalledByLevelDesigner)
{
  CBaseAnimating::Ignite(this, flFlameLifetime, bNPCOnly, flSize, bCalledByLevelDesigner);
  (*(this->_vptr_INextBotEventResponder + 16))(&this->INextBot);
}


// NextBotCombatCharacter::Ignite  (line 316, @0x0000000002f1ab60, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, operator=, ~CVariantBase
// calls: CEntityFlame::Create, CBaseEntity::AddFlag, CBaseEntity::SetEffectEntity, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall NextBotCombatCharacter::Ignite(
        NextBotCombatCharacter *const this,
        double a2,
        float flFlameLifetime,
        CBaseEntity *pAttacker,
        float a5)
{
  CEntityFlame *v7; // rax
  CEntityFlame *v8; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( (this->m_fFlags.m_Value & 0x8000000) == 0 )
  {
    v7 = CEntityFlame::Create(this, 0.0, a5, 1);
    v8 = v7;
    if ( v7 != 0 )
    {
      if ( pAttacker != 0 && (m_pEntity = pAttacker->m_pEntity) != 0 )
      {
        v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v8->m_hAttacker.m_Index) = v11 | v8->m_hAttacker.m_Index & 0x8000;
        v8->m_hAttacker.m_Index = (v10 << 15) | v8->m_hAttacker.m_Index & 0x7FFF;
      }
      else
      {
        v7->m_hAttacker.m_Index = -1;
      }
      CBaseEntity::AddFlag(this, 0x8000000);
      CBaseEntity::SetEffectEntity(this, v8);
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnIgnite, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    (*(this->_vptr_INextBotEventResponder + 16))(&this->INextBot);
  }
}


// NextBotCombatCharacter::OnTakeDamage_Alive  (line 338, @0x0000000002f1c900, libserver.so)  // inlines: Get, GetAttacker, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CBaseCombatCharacter::OnTakeDamage_Alive
// callers: CDOTA_BaseNPC::OnTakeDamage_Alive
// globals: CEntityHandle::gm_pEntityList
int __fastcall NextBotCombatCharacter::OnTakeDamage_Alive(
        NextBotCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  unsigned __int64 m_Index_low; // rsi
  uint32 v9; // eax
  CEntityInstance *m_pInstance; // rdi
  __int64 v11; // rcx
  CEntityIdentity *v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int16 v17; // cx

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[info->m_hAttacker.m_Index & 0x1FF];
      if ( v6 != 0
        && m_Index == v6->m_EHandle.m_Index
        && v6->m_pInstance != 0
        && (*(v6->m_pInstance->_vptr_IHandleEntity + 147))(v6->m_pInstance) != 0 )
      {
        v9 = info->m_hAttacker.m_Index;
        m_pInstance = 0;
        v11 = CEntityHandle::gm_pEntityList;
        v12 = (v9 + 2);
        if ( v12 > 1 )
        {
          m_Index_low = LOWORD(info->m_hAttacker.m_Index);
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = m_Index_low & 0x1FF;
            m_Index_low = 8 * v13;
            v11 = 120 * v13;
            v12 = (v12 + v11);
            if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
              m_pInstance = v12->m_pInstance;
          }
        }
        v14 = (*(m_pInstance->_vptr_IHandleEntity + 147))(m_pInstance, m_Index_low, v12, v11);
        if ( v14 != 0 && (v15 = *(v14 + 8)) != 0 )
        {
          v16 = (*(v15 + 16) >> 15) - (*(v15 + 48) & 1);
          if ( *(v15 + 16) == -1 )
            v17 = 0x7FFF;
          else
            v17 = *(v15 + 16) & 0x7FFF;
          LOWORD(this->m_lastAttacker.m_Index) = v17 | this->m_lastAttacker.m_Index & 0x8000;
          this->m_lastAttacker.m_Index = (v16 << 15) | this->m_lastAttacker.m_Index & 0x7FFF;
        }
        else
        {
          this->m_lastAttacker.m_Index = -1;
        }
      }
    }
  }
  (*(this->_vptr_INextBotEventResponder + 17))(&this->INextBot, info);
  return CBaseCombatCharacter::OnTakeDamage_Alive(this, info);
}


// NextBotCombatCharacter::OnTakeDamage_Dying  (line 354, @0x0000000002f1ca80, libserver.so)  // inlines: Get, GetAttacker, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CBaseCombatCharacter::OnTakeDamage_Dying
// globals: CEntityHandle::gm_pEntityList
int __fastcall NextBotCombatCharacter::OnTakeDamage_Dying(
        NextBotCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  unsigned __int64 m_Index_low; // rsi
  uint32 v9; // eax
  CEntityInstance *m_pInstance; // rdi
  __int64 v11; // rcx
  CEntityIdentity *v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int16 v17; // cx

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[info->m_hAttacker.m_Index & 0x1FF];
      if ( v6 != 0
        && m_Index == v6->m_EHandle.m_Index
        && v6->m_pInstance != 0
        && (*(v6->m_pInstance->_vptr_IHandleEntity + 147))(v6->m_pInstance) != 0 )
      {
        v9 = info->m_hAttacker.m_Index;
        m_pInstance = 0;
        v11 = CEntityHandle::gm_pEntityList;
        v12 = (v9 + 2);
        if ( v12 > 1 )
        {
          m_Index_low = LOWORD(info->m_hAttacker.m_Index);
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = m_Index_low & 0x1FF;
            m_Index_low = 8 * v13;
            v11 = 120 * v13;
            v12 = (v12 + v11);
            if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
              m_pInstance = v12->m_pInstance;
          }
        }
        v14 = (*(m_pInstance->_vptr_IHandleEntity + 147))(m_pInstance, m_Index_low, v12, v11);
        if ( v14 != 0 && (v15 = *(v14 + 8)) != 0 )
        {
          v16 = (*(v15 + 16) >> 15) - (*(v15 + 48) & 1);
          if ( *(v15 + 16) == -1 )
            v17 = 0x7FFF;
          else
            v17 = *(v15 + 16) & 0x7FFF;
          LOWORD(this->m_lastAttacker.m_Index) = v17 | this->m_lastAttacker.m_Index & 0x8000;
          this->m_lastAttacker.m_Index = (v16 << 15) | this->m_lastAttacker.m_Index & 0x7FFF;
        }
        else
        {
          this->m_lastAttacker.m_Index = -1;
        }
      }
    }
  }
  (*(this->_vptr_INextBotEventResponder + 17))(&this->INextBot, info);
  return CBaseCombatCharacter::OnTakeDamage_Dying(this, info);
}


// NextBotCombatCharacter::Event_Killed  (line 373, @0x0000000002f14110, libserver.so)  // inlines: CEntityHandle, Get, GetAttacker, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CBaseEntity::SetLifeState
// callers: CDOTA_BaseNPC::Event_Killed
// globals: CEntityHandle::gm_pEntityList
void __fastcall NextBotCombatCharacter::Event_Killed(
        NextBotCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  unsigned __int16 v7; // dx
  int v8; // esi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  unsigned __int64 m_Index_low; // rsi
  uint32 v13; // eax
  CEntityInstance *m_pInstance; // rdi
  __int64 v15; // rcx
  CEntityIdentity *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int16 v21; // cx

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[info->m_hAttacker.m_Index & 0x1FF];
      if ( v6 != 0
        && m_Index == v6->m_EHandle.m_Index
        && v6->m_pInstance != 0
        && (*(v6->m_pInstance->_vptr_IHandleEntity + 147))(v6->m_pInstance) != 0 )
      {
        v13 = info->m_hAttacker.m_Index;
        m_pInstance = 0;
        v15 = CEntityHandle::gm_pEntityList;
        v16 = (v13 + 2);
        if ( v16 > 1 )
        {
          m_Index_low = LOWORD(info->m_hAttacker.m_Index);
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = m_Index_low & 0x1FF;
            m_Index_low = 8 * v17;
            v15 = 120 * v17;
            v16 = (v16 + v15);
            if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
              m_pInstance = v16->m_pInstance;
          }
        }
        v18 = (*(m_pInstance->_vptr_IHandleEntity + 147))(m_pInstance, m_Index_low, v16, v15);
        if ( v18 != 0 && (v19 = *(v18 + 8)) != 0 )
        {
          v20 = (*(v19 + 16) >> 15) - (*(v19 + 48) & 1);
          v21 = 0x7FFF;
          if ( *(v19 + 16) != -1 )
            v21 = *(v19 + 16) & 0x7FFF;
          LOWORD(this->m_lastAttacker.m_Index) = v21 | this->m_lastAttacker.m_Index & 0x8000;
          this->m_lastAttacker.m_Index = (v20 << 15) | this->m_lastAttacker.m_Index & 0x7FFF;
        }
        else
        {
          this->m_lastAttacker.m_Index = -1;
        }
      }
    }
  }
  (*(this->_vptr_INextBotEventResponder + 18))(&this->INextBot, info);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DYING);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v7 = 0x7FFF;
    v8 = 0x7FFF;
  }
  else
  {
    v7 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v8 = v7;
  }
  v9 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
  if ( v9 + 2 > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v8 & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
        (*(v11->m_pInstance->_vptr_IHandleEntity + 84))(v11->m_pInstance, this);
    }
  }
}


// NextBotCombatCharacter::PerformCustomPhysics  (line 419, @0x0000000002f11bc0, libserver.so)
// calls: CBaseEntity::SetGroundEntity
void __fastcall NextBotCombatCharacter::PerformCustomPhysics(
        NextBotCombatCharacter *const this,
        Vector *pNewPosition,
        Vector *pNewVelocity,
        QAngle *pNewAngles,
        QAngle *pNewAngVelocity)
{
  __int64 v6; // rax
  CBaseEntity *v7; // rax

  v6 = (*(this->_vptr_INextBotEventResponder + 68))(
         &this->INextBot,
         pNewPosition,
         pNewVelocity,
         pNewAngles,
         pNewAngVelocity);
  if ( v6 != 0 )
  {
    v7 = (*(*v6 + 672LL))(v6);
    CBaseEntity::SetGroundEntity(this, v7);
  }
}


// NextBotCombatCharacter::BecomeRagdoll  (line 430, @0x0000000002f1cc00, libserver.so)  // inlines: operator+=
// calls: CRagdollMagnet::FindBestMagnet, CRagdollMagnet::GetForceVector, CBaseEntity::EmitSound, CBaseCombatCharacter::BecomeRagdoll
// strings: "BaseCombatCharacter.StopWeaponSounds"
bool __fastcall NextBotCombatCharacter::BecomeRagdoll(
        NextBotCombatCharacter *const this,
        const CTakeDamageInfo *const info,
        const Vector *const forceVector)
{
  CRagdollMagnet *BestMagnet; // rax
  Vector adjustedForceVector; // [rsp+0h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-20h]
  Vector v9; // 0:kr00_12.12

  adjustedForceVector = *forceVector;
  BestMagnet = CRagdollMagnet::FindBestMagnet(this);
  if ( BestMagnet != 0 )
  {
    v9 = CRagdollMagnet::GetForceVector(BestMagnet, this);
    v8 = *&v9.x;
    adjustedForceVector.z = v9.z + adjustedForceVector.z;
    adjustedForceVector.x = adjustedForceVector.x + v9.x;
    adjustedForceVector.y = adjustedForceVector.y + v9.y;
  }
  CBaseEntity::EmitSound(this, "BaseCombatCharacter.StopWeaponSounds", 0.0, 0);
  return CBaseCombatCharacter::BecomeRagdoll(this, info, &adjustedForceVector);
}


// NextBotCombatCharacter::HandleAnimEvent  (line 447, @0x0000000002f11250, libserver.so)
// callers: CDOTA_BaseNPC::HandleAnimEvent
void __fastcall NextBotCombatCharacter::HandleAnimEvent(NextBotCombatCharacter *const this, animevent_t *pEvent)
{
  (*(this->_vptr_INextBotEventResponder + 15))(&this->INextBot, pEvent);
}


// NextBotCombatCharacter::OnNavAreaChanged  (line 455, @0x0000000002f13bd0, libserver.so)  // inlines: OnNavAreaChanged
void __fastcall NextBotCombatCharacter::OnNavAreaChanged(
        NextBotCombatCharacter *const this,
        CNavArea *pEnteredArea,
        CNavArea *pLeftArea)
{
  INextBot *v5; // r13
  __int64 i; // rbx

  v5 = &this->INextBot;
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(&this->INextBot);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(v5, i) )
  {
    (*(*i + 200LL))(i, pEnteredArea, pLeftArea);
  }
}


// NextBotCombatCharacter::EyePosition  (line 464, @0x0000000002f13760, libserver.so)  // inlines: EyePosition, VectorAdd, operator+
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall NextBotCombatCharacter::EyePosition(NextBotCombatCharacter *const this)
{
  INextBot *v1; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  float *v7; // r12
  const Vector *AbsOrigin; // rax
  __int64 v9; // [rsp+10h] [rbp-20h]
  float v10; // [rsp+18h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = &this->INextBot;
  if ( (*(this->_vptr_INextBotEventResponder + 69))(&this->INextBot) != 0 )
  {
    v3 = (*(this->_vptr_INextBotEventResponder + 69))(v1);
    v4 = (*(*v3 + 536LL))(v3);
    v9 = *v4;
    v10 = *(v4 + 8);
  }
  else
  {
    v7 = (*(this->_vptr_IHandleEntity + 171))(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    *(&v9 + 1) = AbsOrigin->y + v7[1];
    v10 = AbsOrigin->z + v7[2];
    *&v9 = AbsOrigin->x + *v7;
  }
  *&result.x = v9;
  result.z = v10;
  return result;
}


// NextBotCombatCharacter::IsUseableEntity  (line 476, @0x0000000002f11270, libserver.so)
bool __fastcall NextBotCombatCharacter::IsUseableEntity(
        NextBotCombatCharacter *const this,
        CBaseEntity *pEntity,
        unsigned int requiredCaps)
{
  int v4; // eax

  if ( pEntity == 0 )
    return 0;
  v4 = (*(pEntity->_vptr_IHandleEntity + 19))(pEntity);
  return (v4 & 0xF) != 0 && requiredCaps == (requiredCaps & v4);
}


// NextBotCombatCharacter::UseEntity  (line 495, @0x0000000002f1acc0, libserver.so)  // inlines: CVariantBase, Free, SetInt, operator=, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall NextBotCombatCharacter::UseEntity(
        NextBotCombatCharacter *const this,
        CBaseEntity *entity,
        USE_TYPE useType)
{
  variant_t value; // [rsp+0h] [rbp-30h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 371))(this, entity, 0) != 0 )
  {
    value.m_flags = 0;
    value.m_uint64 = 0;
    value.m_type = 5;
    CEntityInstance::AcceptInput(entity, "Use", this, this, &value, useType);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


