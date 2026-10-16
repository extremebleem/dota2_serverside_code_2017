// Reconstructed from DWARF by pahole; not original source.

// src/game/server/cvisibilitymonitor.cpp:24
struct visibility_target_t {
	EHANDLE entity;  // +0x0
	float minDistSqr;  // +0x4
	int memory;  // +0x8

	VisibilityMonitorCallback pfnCallback;  // +0x10
	VisibilityMonitorEvaluator pfnEvaluator;  // +0x18
	visibility_target_t();
	visibility_target_t(const visibility_target_t &);

	// sizeof = 32
};

// src/game/server/cvisibilitymonitor.cpp:35
class CVisibilityMonitor : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	float m_flPollFrequency;  // +0x30
	float m_flTimeNextPoll;  // +0x34
	int m_iMaxTracesPerThink;  // +0x38
	int m_iMaxEntitiesPerThink;  // +0x3c
	int m_iStartElement;  // +0x40
	typedef CAutoGameSystem BaseClass;
	CVisibilityMonitor(CVisibilityMonitor &);
	CVisibilityMonitor(const CVisibilityMonitor &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CVisibilityMonitor *);
	CVisibilityMonitor();
	virtual bool Init();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual bool EntityIsVisibleToPlayer(const visibility_target_t &, CBasePlayer *, int *);
	virtual void Shutdown();
	virtual void GameInit(const EventGameInit_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	void AddEntity(CBaseEntity *, float, VisibilityMonitorCallback, VisibilityMonitorEvaluator);
	void RemoveEntity(CBaseEntity *);
	bool IsTrackingEntity(CBaseEntity *);
	virtual ~CVisibilityMonitor();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[40] EntityIsVisibleToPlayer
	// vtable[2] Shutdown
	// vtable[3] GameInit
	// vtable[15] PostSpawnGroupLoad
	// vtable[16] PreSpawnGroupUnload
	// sizeof = 72
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVisibilityMonitor::~CVisibilityMonitor  (line 35, @0x00000000021b6280, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<visibility_target_t, CUtlMemory<visibility_target_t, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<visibility_target_t, int>::Purge
void __fastcall CVisibilityMonitor::~CVisibilityMonitor(CVisibilityMonitor *const this)
{
  this->_vptr_IGameSystem = &off_4014430;
  CUtlVectorBase<visibility_target_t,CUtlMemory<visibility_target_t,int>>::RemoveAll(&this->m_Entities);
  if ( (this->m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<visibility_target_t,int>::Purge(&this->m_Entities.m_Memory);
    if ( (this->m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<visibility_target_t,int>::Purge(&this->m_Entities.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CVisibilityMonitor::~CVisibilityMonitor  (line 35, @0x00000000021b62e0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVisibilityMonitor
// calls: CUtlVectorBase<visibility_target_t, CUtlMemory<visibility_target_t, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<visibility_target_t, int>::Purge
void __fastcall CVisibilityMonitor::~CVisibilityMonitor(CVisibilityMonitor *const this)
{
  this->_vptr_IGameSystem = &off_4014430;
  CUtlVectorBase<visibility_target_t,CUtlMemory<visibility_target_t,int>>::RemoveAll(&this->m_Entities);
  if ( (this->m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<visibility_target_t,int>::Purge(&this->m_Entities.m_Memory);
    if ( (this->m_Entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<visibility_target_t,int>::Purge(&this->m_Entities.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CVisibilityMonitor::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 37, @0x00000000021b1560, libserver.so)
void __fastcall CVisibilityMonitor::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CVisibilityMonitor *const this)
{
  ;
}


// CVisibilityMonitor::DoesGameSystemReallocate  (line 37, @0x00000000021b1570, libserver.so)
// globals: CVisibilityMonitor::sm_Factory
bool __fastcall CVisibilityMonitor::DoesGameSystemReallocate(const CVisibilityMonitor *const this)
{
  return (*(CVisibilityMonitor::sm_Factory->_vptr_IGameSystemFactory + 8))(CVisibilityMonitor::sm_Factory);
}


// CVisibilityMonitor::SetGameSystemGlobalPtrs  (line 37, @0x00000000021b1590, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CVisibilityMonitor::sm_Factory
void __fastcall CVisibilityMonitor::SetGameSystemGlobalPtrs(CVisibilityMonitor *const this, void *pValue)
{
  if ( CVisibilityMonitor::sm_Factory != 0 )
    (*(CVisibilityMonitor::sm_Factory->_vptr_IGameSystemFactory + 7))(CVisibilityMonitor::sm_Factory, pValue);
}


// CVisibilityMonitor::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 78, @0x00000000021a13e0, libserver.so)
void __cdecl CVisibilityMonitor::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CVisibilityMonitor::Init  (line 82, @0x00000000021878c0, libserver.so)
bool __fastcall CVisibilityMonitor::Init(CVisibilityMonitor *const this)
{
  return 1;
}


// CVisibilityMonitor::FrameUpdatePostEntityThink  (line 92, @0x00000000021a2a30, libserver.so)  // inlines: CUtlSymbolLarge, CreateEvent, Element, FastRemove, Get, GetClassNameAsCStr, GetClassname, GetDebugName, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, String, curtime, entindex, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>, operator[]
// calls: Msg, CGlobalVarsBase::curtime, CEntityHandle::operator CEntityInstance*, UTIL_PlayerByIndex, CEntityIdentity::GetDebugName, NDebugOverlay::Cross3D, CBasePlayer::GetUserID, CEntityInstance::GetEntityIndex
// strings: "\nVisMon: Polling now. (Frequency: %f)\n", "VisMon: Time: %f - Tracking %d Entities. (Max:%d)\n", "VisMon: RESET\n", "VisMon: Starting at element: %d\n", "VisMon: Player %s IGNORING VISIBILE Entity: %s\n", "VisMon: %d traces performed during this polling cycle (Max: %d)\n\n" (10 total)
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CVisibilityMonitor::FrameUpdatePostEntityThink(
        CVisibilityMonitor *const this,
        const EventServerPostEntityThink_t *const msg)
{
  double v2; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v7; // rbx
  float v8; // xmm0_4
  FnGlobalVarsWarningFunc v9; // rax
  int m_Size; // edx
  bool v11; // cc
  int v12; // r12d
  unsigned int m_iMaxEntitiesPerThink; // r12d
  unsigned int v14; // ebx
  float v15; // xmm0_4
  __int64 v16; // r15
  int i; // ebx
  int v18; // r12d
  visibility_target_t *v19; // rcx
  int m_iStartElement; // eax
  int v21; // ebx
  int v22; // r12d
  CBasePlayer *v23; // rax
  const CBasePlayer *v24; // r15
  visibility_target_t *v25; // rsi
  CEntityIdentity *v26; // rax
  CEntityIdentity *v27; // rax
  visibility_target_t *v28; // rdi
  CEntityInstance *v29; // rax
  const char *v30; // r12
  const char *v31; // rax
  double v32; // xmm0_8
  int v33; // xmm1_4
  int v34; // esi
  const char *v35; // rax
  double v36; // xmm0_8
  int v37; // xmm1_4
  visibility_target_t *v38; // rdi
  CEntityInstance *v39; // rax
  __int64 v40; // rax
  unsigned int UserID; // eax
  void (__fastcall *v42)(__int64, const char *, _QWORD); // r15
  CEntityIndex v43; // eax
  const char *m_pAsString; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *v46; // rdx
  void (__fastcall *v47)(__int64, char *, _QWORD); // [rsp-20h] [rbp-98h]
  const CEntityInstance *m_pInstance; // [rsp-10h] [rbp-88h]
  unsigned __int8 (__fastcall *pfnEvaluator)(CEntityInstance *, const CBasePlayer *); // [rsp-8h] [rbp-80h]
  const char *DebugName; // [rsp-8h] [rbp-80h]
  unsigned __int8 (__fastcall *pfnCallback)(CEntityInstance *, const CBasePlayer *); // [rsp-8h] [rbp-80h]
  __int64 v52; // [rsp-8h] [rbp-80h]
  int event_4; // [rsp+4h] [rbp-74h]
  visibility_target_t *v54; // [rsp+10h] [rbp-68h]
  int v55; // [rsp+10h] [rbp-68h]
  visibility_target_t *m_pMemory; // [rsp+18h] [rbp-60h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  int v58; // [rsp+2Ch] [rbp-4Ch] BYREF
  double v59; // [rsp+30h] [rbp-48h] OVERLAPPED BYREF
  int v60; // [rsp+38h] [rbp-40h]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, msg, v2, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( this->m_flTimeNextPoll > m_flCurrentTime )
    return;
  v7 = gpGlobals;
  v8 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v9 = gpGlobals->m_pfnWarningFunc;
      if ( v9 != 0 )
        (v9)(1, msg, 0.0);
    }
    v8 = v7->m_flCurrentTime;
  }
  m_Size = this->m_Entities.m_Size;
  v11 = m_Size <= this->m_iMaxEntitiesPerThink;
  this->m_flTimeNextPoll = v8 + vismon_poll_frequency.m_pParent->m_Value.m_fValue;
  event_4 = debug_visibility_monitor.m_pParent->m_Value.m_nValue;
  if ( !v11 )
    this->m_iMaxEntitiesPerThink = m_Size;
  v12 = m_Size;
  if ( event_4 > 1 )
  {
    Msg("\nVisMon: Polling now. (Frequency: %f)\n", msg, this->m_flPollFrequency);
    m_iMaxEntitiesPerThink = this->m_iMaxEntitiesPerThink;
    v14 = this->m_Entities.m_Size;
    v15 = CGlobalVarsBase::curtime(gpGlobals, 0);
    Msg("VisMon: Time: %f - Tracking %d Entities. (Max:%d)\n", v14, m_iMaxEntitiesPerThink, v15);
    v12 = this->m_Entities.m_Size;
  }
  if ( v12 > 0 )
  {
    v16 = 0;
    for ( i = 0; i < v12; ++i )
    {
      m_pMemory = this->m_Entities.m_Memory.m_pMemory;
      v54 = &m_pMemory[v16];
      if ( CEntityHandle::operator CEntityInstance *(&m_pMemory[v16].entity) != 0 )
      {
        v12 = this->m_Entities.m_Size;
      }
      else
      {
        if ( v12 <= 0 )
        {
          v12 = this->m_Entities.m_Size;
        }
        else
        {
          v18 = v12 - 1;
          if ( i != v18 )
          {
            msg = &m_pMemory[v16];
            v19 = &m_pMemory[v18];
            *&v54->entity.m_Index = *&v19->entity.m_Index;
            *&v54->memory = *&v19->memory;
            v54->pfnCallback = v19->pfnCallback;
            v54->pfnEvaluator = v19->pfnEvaluator;
          }
          v12 = this->m_Entities.m_Size - 1;
          this->m_Entities.m_Size = v12;
        }
        if ( i >= v12 )
          break;
      }
      ++v16;
    }
  }
  m_iStartElement = this->m_iStartElement;
  v58 = 0;
  if ( m_iStartElement >= v12 )
  {
    if ( event_4 > 1 )
      Msg("VisMon: RESET\n", msg);
    this->m_iStartElement = 0;
    m_iStartElement = 0;
  }
  v55 = m_iStartElement;
  if ( event_4 > 1 )
  {
    Msg("VisMon: Starting at element: %d\n", m_iStartElement);
    v55 = this->m_iStartElement;
  }
  if ( this->m_Entities.m_Size > v55 )
  {
    v57 = v55;
    while ( gpGlobals->maxClients <= 0 )
    {
LABEL_55:
      if ( vismon_trace_limit.m_pParent->m_Value.m_nValue <= v58 )
      {
        v34 = v58;
        if ( event_4 > 1 )
        {
          Msg("VisMon: MAX Traces. Stopping after element %d\n", v55);
          v34 = v58;
        }
        this->m_iStartElement = v55 + 1;
        goto LABEL_59;
      }
      ++v55;
      ++v57;
      if ( v55 >= this->m_Entities.m_Size )
      {
        v34 = v58;
        goto LABEL_58;
      }
    }
    v21 = 1;
    while ( 1 )
    {
      v22 = 1 << v21;
      v23 = UTIL_PlayerByIndex(v21);
      v24 = v23;
      if ( v23 == 0 || (*(v23->_vptr_IHandleEntity + 139))(v23) == 0 || (*(v24->_vptr_IHandleEntity + 521))(v24) != 0 )
        break;
      v25 = &this->m_Entities.m_Memory.m_pMemory[v57];
      if ( v25->entity.m_Index + 2 <= 1 )
        goto LABEL_40;
      v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->entity.m_Index) >> 9) & 0x3F];
      if ( v26 == 0 )
        goto LABEL_40;
      v27 = &v26[v25->entity.m_Index & 0x1FF];
      if ( v27 == 0 )
        goto LABEL_40;
      if ( v25->entity.m_Index != v27->m_EHandle.m_Index )
        goto LABEL_40;
      m_pInstance = v27->m_pInstance;
      if ( v27->m_pInstance == 0
        || (v22 & v25->memory) != 0
        || (*(this->_vptr_IGameSystem + 40))(this, v25, v24, &v58) == 0 )
      {
        goto LABEL_40;
      }
      v28 = &this->m_Entities.m_Memory.m_pMemory[v57];
      pfnEvaluator = v28->pfnEvaluator;
      if ( pfnEvaluator == 0
        || (v29 = CEntityHandle::operator CEntityInstance *(&v28->entity), pfnEvaluator(v29, v24) != 0) )
      {
        if ( event_4 > 0 )
        {
          DebugName = CEntityIdentity::GetDebugName(m_pInstance->m_pEntity);
          v35 = CEntityIdentity::GetDebugName(v24->m_pEntity);
          *&v36 = Msg("VisMon: Player %s sees Entity: %s\n", v35, DebugName).m128_u64[0];
          v59 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance, v36);
          v60 = v37;
          NDebugOverlay::Cross3D(&v59, 16.0, 0, 0xFFu, 0, 0, 10.0);
        }
        v38 = &this->m_Entities.m_Memory.m_pMemory[v57];
        if ( v38->pfnCallback == 0
          || (pfnCallback = v38->pfnCallback,
              v39 = CEntityHandle::operator CEntityInstance *(&v38->entity),
              pfnCallback(v39, v24) != 0) )
        {
          v40 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "entity_visible", 0, 0);
          if ( v40 != 0 )
          {
            v52 = v40;
            v47 = *(*v40 + 112LL);
            UserID = CBasePlayer::GetUserID(v24);
            v47(v52, "userid", UserID);
            v42 = *(*v52 + 112LL);
            v43.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
            v42(v52, "subject", v43.m_Data);
            m_pAsString = "";
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
              m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
            (*(*v52 + 136LL))(v52, "classname", m_pAsString);
            v46 = "";
            if ( m_pInstance->m_pEntity->m_name.u.m_Id != 0 )
              v46 = m_pInstance->m_pEntity->m_name.u.m_pAsString;
            (*(*v52 + 136LL))(v52, "entityname", v46);
            (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v52, 0);
          }
        }
        this->m_Entities.m_Memory.m_pMemory[v57].memory |= v22;
        goto LABEL_40;
      }
      if ( event_4 > 0 )
      {
        ++v21;
        v30 = CEntityIdentity::GetDebugName(m_pInstance->m_pEntity);
        v31 = CEntityIdentity::GetDebugName(v24->m_pEntity);
        *&v32 = Msg("VisMon: Player %s IGNORING VISIBILE Entity: %s\n", v31, v30).m128_u64[0];
        v59 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance, v32);
        v60 = v33;
        NDebugOverlay::Cross3D(&v59, 16.0, 0xFFu, 0, 0, 0, 10.0);
        if ( v21 > gpGlobals->maxClients )
          goto LABEL_55;
      }
      else
      {
LABEL_40:
        if ( ++v21 > gpGlobals->maxClients )
          goto LABEL_55;
      }
    }
    this->m_Entities.m_Memory.m_pMemory[v57].memory &= ~v22;
    goto LABEL_40;
  }
  v34 = v58;
LABEL_58:
  this->m_iStartElement = 0;
LABEL_59:
  if ( v34 > this->m_iMaxTracesPerThink )
    this->m_iMaxTracesPerThink = v34;
  if ( event_4 > 1 )
    Msg("VisMon: %d traces performed during this polling cycle (Max: %d)\n\n", v34, this->m_iMaxTracesPerThink);
}


// CVisibilityMonitor::EntityIsVisibleToPlayer  (line 250, @0x000000000218f2c0, libserver.so)  // inlines: CGameTrace, DistToSqr, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, IndexToIdentity, Init, IsValid, LengthSqr, Line, LookupEntity, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator->
// calls: CBaseEntity::GetAbsOrigin, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEntityHandle::operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CVisibilityMonitor::EntityIsVisibleToPlayer(
        CVisibilityMonitor *const this,
        const visibility_target_t *const target,
        CBasePlayer *pPlayer,
        int *numTraces)
{
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const Vector *AbsOrigin; // rax
  CEntityInstance *v12; // rdi
  CConcreteEntityList *v13; // rsi
  CEntityIdentity *v14; // rdx
  __int64 v15; // rcx
  CEntityIdentity *v16; // rdx
  double v17; // xmm0_8
  float v18; // xmm1_4
  double v19; // xmm0_8
  float m_fValue; // xmm2_4
  vec_t v21; // xmm1_4
  CBaseEntity *m_pEnt; // r13
  const CBaseEntity *v23; // rax
  const Vector *v24; // rbx
  vec_t v25; // xmm1_4
  float vecTargetOrigin; // [rsp+1Ch] [rbp-194h]
  double v27; // [rsp+30h] [rbp-180h]
  float v28; // [rsp+38h] [rbp-178h]
  CTraceFilterSimple v29; // [rsp+40h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF
  Vector v32; // 0:^14.12

  m_pInstance = 0;
  if ( target->entity.m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(target->entity.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[target->entity.m_Index & 0x1FF];
      if ( v9 != 0 && target->entity.m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v32 = *CBaseEntity::GetAbsOrigin(m_pInstance);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pPlayer);
  if ( target->minDistSqr < ((((AbsOrigin->x - v32.x) * (AbsOrigin->x - v32.x))
                            + ((AbsOrigin->y - v32.y) * (AbsOrigin->y - v32.y)))
                           + ((AbsOrigin->z - v32.z) * (AbsOrigin->z - v32.z))) )
    return 0;
  ++*numTraces;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v12 = 0;
  v13 = CEntityHandle::gm_pEntityList;
  if ( target->entity.m_Index + 2 > 1 )
  {
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(target->entity.m_Index) >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = target->entity.m_Index & 0x1FF;
      v13 = (8 * v15);
      v16 = &v14[v15];
      if ( v16 != 0 && target->entity.m_Index == v16->m_EHandle.m_Index )
        v12 = v16->m_pInstance;
    }
  }
  v17 = (*(v12->_vptr_IHandleEntity + 62))(v12, v13);
  v28 = v18;
  v27 = v17;
  v19 = (*(pPlayer->_vptr_IHandleEntity + 164))(pPlayer);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  ray.m_flRadius = m_fValue;
  ray.m_Delta.y = *(&v27 + 1) - *(&v19 + 1);
  ray.m_Delta.z = v28 - v21;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.x = *&v27 - *&v19;
  *&ray.m_Start.x = v19;
  ray.m_Start.z = v21;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v29, pPlayer, 4, 0);
  v29.m_attr.m_nInteractsWith |= 0x84001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v29, &tr);
  if ( tr.fraction != 1.0 )
  {
    m_pEnt = tr.m_pEnt;
    v23 = CEntityHandle::operator CEntityInstance *(&target->entity);
    if ( m_pEnt != v23 )
    {
      if ( debug_visibility_monitor.m_pParent->m_Value.m_nValue > 1 )
      {
        vecTargetOrigin = vismon_poll_frequency.m_pParent->m_Value.m_fValue;
        v24 = CBaseEntity::GetAbsOrigin(v23);
        *&ray.m_Start.x = (*(pPlayer->_vptr_IHandleEntity + 62))(pPlayer);
        ray.m_Start.z = v25;
        if ( debugoverlay != 0 )
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &ray, v24, 255, 0, 0, vecTargetOrigin, 0);
      }
      return 0;
    }
  }
  return 1;
}


// CVisibilityMonitor::Shutdown  (line 287, @0x00000000021878d0, libserver.so)
void __fastcall CVisibilityMonitor::Shutdown(CVisibilityMonitor *const this)
{
  ;
}


// CVisibilityMonitor::GameInit  (line 293, @0x00000000021878e0, libserver.so)
void __fastcall CVisibilityMonitor::GameInit(CVisibilityMonitor *const this, const EventGameInit_t *const msg)
{
  ;
}


// CVisibilityMonitor::PostSpawnGroupLoad  (line 299, @0x000000000218bb90, libserver.so)  // inlines: curtime
void __fastcall CVisibilityMonitor::PostSpawnGroupLoad(
        CVisibilityMonitor *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  void (__fastcall *m_pfnWarningFunc)(__int64, const EventPostSpawnGroupLoad_t *const, double); // rax

  m_flCurrentTime = 0.0;
  this->m_iMaxTracesPerThink = 0;
  v4 = gpGlobals;
  this->m_iMaxEntitiesPerThink = 0;
  this->m_iStartElement = 0;
  if ( v4 != 0 )
  {
    if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
    {
      m_pfnWarningFunc = v4->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(1, msg, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_flTimeNextPoll = m_flCurrentTime + vismon_poll_frequency.m_pParent->m_Value.m_fValue;
}


// CVisibilityMonitor::PreSpawnGroupUnload  (line 309, @0x00000000021a8290, libserver.so)
// calls: CUtlVectorBase<visibility_target_t, CUtlMemory<visibility_target_t, int> >::RemoveAll
void __fastcall CVisibilityMonitor::PreSpawnGroupUnload(
        CVisibilityMonitor *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  CUtlVectorBase<visibility_target_t,CUtlMemory<visibility_target_t,int>>::RemoveAll(&this->m_Entities);
}


// CVisibilityMonitor::AddEntity  (line 316, @0x00000000021af4f0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<visibility_target_t>, Element, GetBool, GetClassNameAsCStr, GetClassname, GetDebugName, GetEHandle, GetEntryIndex, GetInt, GetSerialNumber, GrowMemory, Set, Square<float>, String, operator=, operator[], visibility_target_t
// calls: CVisibilityMonitor::IsTrackingEntity, CEntityIdentity::GetDebugName, Msg, CUtlMemory<visibility_target_t, int>::Grow
// callers: VisibilityMonitor_AddEntity
// strings: "VisMon: Added Entity: %s (%s)\n"
void __fastcall CVisibilityMonitor::AddEntity(
        CVisibilityMonitor *const this,
        CBaseEntity *pEntity,
        float flMinDist,
        VisibilityMonitorCallback pfnCallback,
        VisibilityMonitorEvaluator pfnEvaluator)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  int m_Size; // r15d
  float v12; // xmm0_4
  int v13; // eax
  visibility_target_t *v14; // rax
  const char *DebugName; // rax
  CEntityIdentity *v16; // rcx
  const char *m_pAsString; // rsi
  int newTarget; // [rsp+10h] [rbp-50h]

  if ( !CVisibilityMonitor::IsTrackingEntity(this, pEntity) )
  {
    newTarget = -1;
    if ( pEntity != 0 )
    {
      m_pEntity = pEntity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v10 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        newTarget = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
      }
    }
    m_Size = this->m_Entities.m_Size;
    v12 = flMinDist * flMinDist;
    v13 = m_Size;
    if ( m_Size == this->m_Entities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<visibility_target_t,int>::Grow(&this->m_Entities.m_Memory, 1);
      v13 = this->m_Entities.m_Size;
      v12 = flMinDist * flMinDist;
    }
    this->m_Entities.m_Size = v13 + 1;
    v14 = &this->m_Entities.m_Memory.m_pMemory[m_Size];
    if ( v14 != 0 )
    {
      v14->minDistSqr = v12;
      v14->memory = 0;
      v14->pfnCallback = pfnCallback;
      v14->pfnEvaluator = pfnEvaluator;
      v14->entity.m_Index = newTarget;
    }
    if ( debug_visibility_monitor.m_pParent->m_Value.m_nValue != 0 )
    {
      DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
      v16 = pEntity->m_pEntity;
      m_pAsString = "";
      if ( v16->m_designerName.u.m_Id != 0 )
        m_pAsString = v16->m_designerName.u.m_pAsString;
      Msg("VisMon: Added Entity: %s (%s)\n", m_pAsString, DebugName);
    }
  }
}


// CVisibilityMonitor::RemoveEntity  (line 341, @0x00000000021a13f0, libserver.so)  // inlines: Element, Get, GetBool, GetClassNameAsCStr, GetClassname, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, Remove, ShiftElementsLeft, String, V_memmove, memmove, operator CEntityInstance*, operator==, operator[]
// calls: memmove, CEntityIdentity::GetDebugName, Msg
// callers: VisibilityMonitor_RemoveEntity
// strings: "VisMon: Removed Entity: %s (%s)\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CVisibilityMonitor::RemoveEntity(CVisibilityMonitor *const this, CBaseEntity *pEntity)
{
  int m_Size; // edi
  int v5; // ecx
  visibility_target_t *i; // rax
  CBaseEntity *m_pInstance; // r9
  CEntityIdentity *v8; // r8
  CEntityIdentity *v9; // r8
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi

  m_Size = this->m_Entities.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    for ( i = this->m_Entities.m_Memory.m_pMemory; ; ++i )
    {
      m_pInstance = 0;
      if ( i->entity.m_Index + 2 > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->entity.m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[i->entity.m_Index & 0x1FF];
          if ( v9 != 0 && i->entity.m_Index == v9->m_EHandle.m_Index )
            m_pInstance = v9->m_pInstance;
        }
      }
      if ( pEntity == m_pInstance )
        break;
      if ( ++v5 == m_Size )
        return;
    }
    if ( m_Size - v5 - 1 > 0 )
    {
      memmove(i, &this->m_Entities.m_Memory.m_pMemory[v5 + 1], 32LL * (m_Size - v5 - 1));
      m_Size = this->m_Entities.m_Size;
    }
    this->m_Entities.m_Size = m_Size - 1;
    if ( debug_visibility_monitor.m_pParent->m_Value.m_nValue != 0 )
    {
      DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
      m_pEntity = pEntity->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      Msg("VisMon: Removed Entity: %s (%s)\n", m_pAsString, DebugName);
    }
  }
}


// CVisibilityMonitor::IsTrackingEntity  (line 363, @0x00000000021a1520, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// callers: CVisibilityMonitor::AddEntity
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CVisibilityMonitor::IsTrackingEntity(CVisibilityMonitor *const this, CBaseEntity *pEntity)
{
  int m_Size; // edx
  visibility_target_t *m_pMemory; // rax
  __int64 v4; // r9
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  m_Size = this->m_Entities.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_Entities.m_Memory.m_pMemory;
  v4 = &m_pMemory[(m_Size - 1) + 1];
  while ( 1 )
  {
    m_pInstance = 0;
    if ( m_pMemory->entity.m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->entity.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[m_pMemory->entity.m_Index & 0x1FF];
        if ( v7 != 0 && m_pMemory->entity.m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    if ( pEntity == m_pInstance )
      break;
    if ( ++m_pMemory == v4 )
      return 0;
  }
  return 1;
}


// VisibilityMonitor_AddEntity  (line 382, @0x00000000021af640, libserver.so)
// calls: CVisibilityMonitor::AddEntity
// callers: CInfoGameEventProxy::Spawn, CEnvInstructorHint::Spawn, CPropDoorRotating::Spawn
// globals: VisibilityMonitor
void __fastcall VisibilityMonitor_AddEntity(
        CBaseEntity *pEntity,
        float flMinDist,
        VisibilityMonitorCallback pfnCallback,
        VisibilityMonitorEvaluator pfnEvaluator)
{
  CVisibilityMonitor::AddEntity(&VisibilityMonitor, pEntity, flMinDist, pfnCallback, pfnEvaluator);
}


// VisibilityMonitor_RemoveEntity  (line 390, @0x00000000021a15b0, libserver.so)
// calls: CVisibilityMonitor::RemoveEntity
// globals: VisibilityMonitor
void __fastcall VisibilityMonitor_RemoveEntity(CBaseEntity *pEntity)
{
  CVisibilityMonitor::RemoveEntity(&VisibilityMonitor, pEntity);
}


