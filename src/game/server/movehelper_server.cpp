// Reconstructed from DWARF by pahole; not original source.

// src/game/server/movehelper_server.cpp:25
class CMoveHelperServer : public IMoveHelper {
	struct touchlist_t {
		trace_t trace;  // +0x10
		touchlist_t();

		// sizeof = 184
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	CMoveHelperServer(const CMoveHelperServer &);
	CMoveHelperServer();
	virtual ~CMoveHelperServer();
	virtual const char * GetName(EntityHandle_t);
	virtual void ResetTouchList();
	virtual bool AddToTouched(const trace_t &, const Vector &);
	virtual void SetGroundNormal(const Vector &);
	virtual void ProcessImpacts();
	virtual bool PlayerFallingDamage();
	virtual void PlayerSetAnimation(PLAYER_ANIM);
	virtual void Con_NPrintf(int, const char *, ...);
	virtual void StartSound(const Vector &, int, const char *, float, soundlevel_t, int, int);
	virtual void StartSound(const Vector &, const char *);
	virtual void PlaybackEventFull(int, int, short unsigned int, float, Vector &, Vector &, float, float, int, int, int, int);
	virtual void SetHost(CBaseEntity *);
	virtual bool IsWorldEntity(const CBaseHandle &);

	// vtable[0] GetName
	// vtable[2] ResetTouchList
	// vtable[3] AddToTouched
	// vtable[4] SetGroundNormal
	// vtable[5] ProcessImpacts
	// vtable[10] PlayerFallingDamage
	// vtable[11] PlayerSetAnimation
	// vtable[6] Con_NPrintf
	// vtable[7] StartSound
	// vtable[8] StartSound
	// vtable[9] PlaybackEventFull
	// vtable[1] SetHost
	// vtable[12] IsWorldEntity
	// sizeof = 64
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMoveHelperServer::CMoveHelperServer  (line 86, @0x0000000002299fa0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, SetSingleton, ~IMoveHelper
// calls: CMemAllocSystemInitialize, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// globals: IMoveHelper::sm_pSingleton
void __fastcall CMoveHelperServer::CMoveHelperServer(CMoveHelperServer *const this)
{
  this->_vptr_IMoveHelper = &off_406FDF0;
  this->m_TouchList.m_Size = 0;
  this->m_TouchList.m_Memory.m_pMemory = 0;
  this->m_TouchList.m_Memory.m_nAllocationCount = 128;
  this->m_TouchList.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize();
  this->m_TouchList.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                           g_pMemAlloc,
                                           184LL * this->m_TouchList.m_Memory.m_nAllocationCount);
  this->m_pHost = 0;
  IMoveHelper::sm_pSingleton = this;
}


// CMoveHelperServer::~CMoveHelperServer  (line 92, @0x00000000022883a0, libserver.so)  // inlines: Purge, RemoveAll, SetSingleton, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IMoveHelper
// calls: CUtlMemory<CMoveHelperServer::touchlist_t, int>::Purge
// globals: IMoveHelper::sm_pSingleton
void __fastcall CMoveHelperServer::~CMoveHelperServer(CMoveHelperServer *const this)
{
  bool v2; // zf
  CUtlVectorBase<CMoveHelperServer::touchlist_t,CUtlMemory<CMoveHelperServer::touchlist_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_TouchList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IMoveHelper = &off_406FDF0;
  this->m_TouchList.m_Size = 0;
  IMoveHelper::sm_pSingleton = 0;
  if ( !v2
    || (p_m_Memory = &this->m_TouchList.m_Memory,
        CUtlMemory<CMoveHelperServer::touchlist_t,int>::Purge(&this->m_TouchList.m_Memory),
        (this->m_TouchList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IMoveHelper = &off_4058530;
  }
  else
  {
    CUtlMemory<CMoveHelperServer::touchlist_t,int>::Purge(p_m_Memory);
    this->_vptr_IMoveHelper = &off_4058530;
  }
}


// CMoveHelperServer::~CMoveHelperServer  (line 92, @0x0000000002288570, libserver.so)  // inlines: Purge, RemoveAll, SetSingleton, ~CMoveHelperServer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IMoveHelper
// calls: operator delete, CUtlMemory<CMoveHelperServer::touchlist_t, int>::Purge
// globals: IMoveHelper::sm_pSingleton
void __fastcall CMoveHelperServer::~CMoveHelperServer(CMoveHelperServer *const this)
{
  bool v2; // zf
  CUtlVectorBase<CMoveHelperServer::touchlist_t,CUtlMemory<CMoveHelperServer::touchlist_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_TouchList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IMoveHelper = &off_406FDF0;
  this->m_TouchList.m_Size = 0;
  IMoveHelper::sm_pSingleton = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_TouchList.m_Memory;
    CUtlMemory<CMoveHelperServer::touchlist_t,int>::Purge(&this->m_TouchList.m_Memory);
    if ( (this->m_TouchList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMoveHelperServer::touchlist_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IMoveHelper = &off_4058530;
  operator delete(this);
}


// CMoveHelperServer::SetHost  (line 101, @0x0000000002283ed0, libserver.so)
void __fastcall CMoveHelperServer::SetHost(CMoveHelperServer *const this, CBaseEntity *host)
{
  int (**vptr_IMoveHelper)(...); // rax

  vptr_IMoveHelper = this->_vptr_IMoveHelper;
  this->m_pHost = host;
  vptr_IMoveHelper[2]();
}


// CMoveHelperServer::GetName  (line 113, @0x0000000002288830, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetEntryIndex, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, String, ToCStr
// calls: CBaseEntity::GetModelName
const char *__fastcall CMoveHelperServer::GetName(const CMoveHelperServer *const this, CGameEntitySystem *handle)
{
  const CBaseEntity *m_pInstance; // rbx
  __int16 vptr_IEntityResourceManifestBuilder; // ax
  __int16 v4; // dx
  int v5; // ecx
  CEntityIdentity *v6; // rcx
  __int64 v7; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *m_pEntity; // rdx
  const char *result; // rax
  _QWORD v11[4]; // [rsp+0h] [rbp-20h] BYREF

  m_pInstance = 0;
  if ( LODWORD(handle->_vptr_IEntityResourceManifestBuilder) != -1 )
  {
    vptr_IEntityResourceManifestBuilder = handle->_vptr_IEntityResourceManifestBuilder;
    v4 = vptr_IEntityResourceManifestBuilder & 0x7FFF;
    handle = g_pGameEntitySystem;
    v5 = vptr_IEntityResourceManifestBuilder & 0x7FFF;
    if ( v5 != 0x7FFF )
    {
      v6 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v6 != 0 )
      {
        v7 = vptr_IEntityResourceManifestBuilder & 0x1FF;
        handle = (8 * v7);
        v8 = &v6[v7];
        if ( v8 != 0 && v4 == (v8->m_EHandle.m_Index & 0x7FFF) )
          m_pInstance = v8->m_pInstance;
      }
    }
  }
  if ( (*(m_pInstance->_vptr_IHandleEntity + 143))(m_pInstance, handle) != 0 )
    return gpGlobals->mapname;
  CBaseEntity::GetModelName(v11, m_pInstance);
  if ( v11[0] != 0 )
  {
    CBaseEntity::GetModelName(v11, m_pInstance);
    result = "";
    if ( v11[0] != 0 )
      return v11[0];
  }
  else
  {
    m_pEntity = m_pInstance->m_pEntity;
    result = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      return m_pEntity->m_designerName.u.m_pAsString;
  }
  return result;
}


// CMoveHelperServer::ResetTouchList  (line 138, @0x0000000002288140, libserver.so)  // inlines: Init, RemoveAll
void __fastcall CMoveHelperServer::ResetTouchList(CMoveHelperServer *const this)
{
  this->m_TouchList.m_Size = 0;
  this->m_collisionNormal.x = 0.0;
  this->m_collisionNormal.y = 0.0;
  this->m_collisionNormal.z = 0.0;
  this->m_groundNormal.x = 0.0;
  this->m_groundNormal.y = 0.0;
  this->m_groundNormal.z = 0.0;
}


// CMoveHelperServer::AddToTouched  (line 152, @0x00000000022a12f0, libserver.so)  // inlines: AddToTail, CGameTrace, Construct<CMoveHelperServer::touchlist_t>, GrowMemory, RnCollisionAttr_t, VectorCopy, operator+=, operator=, operator[], touchlist_t
// calls: CGameTrace::Init, CUtlMemory<CMoveHelperServer::touchlist_t, int>::Grow
bool __fastcall CMoveHelperServer::AddToTouched(
        CMoveHelperServer *const this,
        const trace_t *const tr,
        const Vector *const impactvelocity)
{
  CBaseEntity *m_pEnt; // rax
  int m_Size; // edx
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  CBaseEntity *v11; // rsi
  CMoveHelperServer::touchlist_t *v12; // rax
  bool v13; // zf
  CMoveHelperServer::touchlist_t *v14; // rdi
  CGameTrace_2 *p_trace; // rdi
  CMoveHelperServer::touchlist_t *v16; // r13

  m_pEnt = tr->m_pEnt;
  if ( m_pEnt == 0 || m_pEnt == this->m_pHost )
    return 0;
  m_Size = this->m_TouchList.m_Size;
  this->m_collisionNormal.x = this->m_collisionNormal.x + tr->plane.normal.x;
  v8 = m_Size;
  v9 = m_Size;
  this->m_collisionNormal.y = this->m_collisionNormal.y + tr->plane.normal.y;
  v10 = v8 * 184 - 184;
  this->m_collisionNormal.z = this->m_collisionNormal.z + tr->plane.normal.z;
  while ( --v9 >= 0 )
  {
    v11 = *(&this->m_TouchList.m_Memory.m_pMemory->trace.m_pEnt + v10);
    v10 -= 184;
    if ( v11 == tr->m_pEnt )
      return 0;
  }
  if ( m_Size == this->m_TouchList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CMoveHelperServer::touchlist_t,int>::Grow(&this->m_TouchList.m_Memory, 1);
    m_Size = this->m_TouchList.m_Size;
  }
  v12 = 0;
  v13 = &this->m_TouchList.m_Memory.m_pMemory[v8] == 0;
  v14 = &this->m_TouchList.m_Memory.m_pMemory[v8];
  this->m_TouchList.m_Size = m_Size + 1;
  if ( !v13 )
  {
    v14->trace.m_ShapeAttributes.m_nInteractsAs = 0;
    p_trace = &v14->trace;
    p_trace->m_ShapeAttributes.m_nInteractsWith = 0;
    p_trace->m_ShapeAttributes.m_nInteractsExclude = 0;
    p_trace->m_ShapeAttributes.m_nCollisionGroup = 0;
    p_trace->m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    p_trace->m_ShapeAttributes.m_nEntityId = 0;
    p_trace->m_ShapeAttributes.m_nHierarchyId = 0;
    CGameTrace::Init(p_trace);
    v12 = &this->m_TouchList.m_Memory.m_pMemory[v8];
  }
  v12->trace.startpos.x = tr->startpos.x;
  v12->trace.startpos.y = tr->startpos.y;
  v12->trace.startpos.z = tr->startpos.z;
  v12->trace.endpos.x = tr->endpos.x;
  v12->trace.endpos.y = tr->endpos.y;
  v12->trace.endpos.z = tr->endpos.z;
  v12->trace.plane.normal.x = tr->plane.normal.x;
  v12->trace.plane.normal.y = tr->plane.normal.y;
  v12->trace.plane.normal.z = tr->plane.normal.z;
  v12->trace.plane.dist = tr->plane.dist;
  v12->trace.plane.type = tr->plane.type;
  v12->trace.plane.signbits = tr->plane.signbits;
  *v12->trace.plane.pad = *tr->plane.pad;
  v12->trace.fraction = tr->fraction;
  v12->trace.contents = tr->contents;
  v12->trace.startsolid = tr->startsolid;
  v12->trace.m_pSurfaceProperties = tr->m_pSurfaceProperties;
  v12->trace.m_pEnt = tr->m_pEnt;
  v12->trace.m_pHitbox = tr->m_pHitbox;
  v12->trace.m_hBody = tr->m_hBody;
  v12->trace.m_hShape = tr->m_hShape;
  v12->trace.m_ShapeAttributes.m_nInteractsAs = tr->m_ShapeAttributes.m_nInteractsAs;
  v12->trace.m_ShapeAttributes.m_nInteractsWith = tr->m_ShapeAttributes.m_nInteractsWith;
  v12->trace.m_ShapeAttributes.m_nInteractsExclude = tr->m_ShapeAttributes.m_nInteractsExclude;
  *&v12->trace.m_ShapeAttributes.m_nEntityId = *&tr->m_ShapeAttributes.m_nEntityId;
  v12->trace.boneLocalPos.x = tr->boneLocalPos.x;
  v12->trace.boneLocalPos.y = tr->boneLocalPos.y;
  v12->trace.boneLocalPos.z = tr->boneLocalPos.z;
  v12->trace.boneLocalNormal.x = tr->boneLocalNormal.x;
  v12->trace.boneLocalNormal.y = tr->boneLocalNormal.y;
  v12->trace.boneLocalNormal.z = tr->boneLocalNormal.z;
  v12->trace.m_nFaceIndex = tr->m_nFaceIndex;
  v12->trace.hitboxBoneIndex = tr->hitboxBoneIndex;
  v12->trace.unused0 = tr->unused0;
  v16 = &this->m_TouchList.m_Memory.m_pMemory[v8];
  v16->deltavelocity.x = impactvelocity->x;
  v16->deltavelocity.y = impactvelocity->y;
  v16->deltavelocity.z = impactvelocity->z;
  return 1;
}


// CMoveHelperServer::SetGroundNormal  (line 190, @0x0000000002283ef0, libserver.so)  // inlines: operator=
void __fastcall CMoveHelperServer::SetGroundNormal(CMoveHelperServer *const this, const Vector *const groundNormal)
{
  this->m_groundNormal = *groundNormal;
}


// CMoveHelperServer::ProcessImpacts  (line 199, @0x0000000002288940, libserver.so)  // inlines: GetAbsVelocity, GetEntryIndex, GetInstance, IndexToIdentity, Instance, IsSolid, IsUsed, IsZero, LookupEntityByIndex, LookupEntityByNetworkIndex, NormalizeInPlace, operator=, operator[]
// calls: CBaseEntity::PhysicsTouchTriggers, CBaseEntity::SetAbsVelocity, CBaseEntity::PhysicsImpact, VectorNormalize, CBaseEntity::CalcAbsoluteVelocity
void __fastcall CMoveHelperServer::ProcessImpacts(CMoveHelperServer *const this)
{
  CCollisionProperty *m_pCollision; // r12
  CBaseEntity *m_pHost; // r12
  int m_Size; // r10d
  __int64 v5; // r12
  int v6; // r13d
  int v7; // ecx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CBaseEntity *m_pInstance; // r15
  CBaseEntity *v11; // rdi
  float x; // xmm0_4
  vec_t *v13; // r12
  float y; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  float z; // xmm0_4
  CBaseHandle entindex; // [rsp+0h] [rbp-50h] BYREF
  Vector vel; // [rsp+10h] [rbp-40h] BYREF

  CBaseEntity::PhysicsTouchTriggers(this->m_pHost, 0);
  m_pCollision = this->m_pHost->m_pCollision;
  if ( m_pCollision != 0
    && ((*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 1) != 0
     || (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) != 0)
    && m_pCollision->m_nSolidType.m_Value != SolidType_t::SOLID_NONE )
  {
    m_pHost = this->m_pHost;
    if ( (m_pHost->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this->m_pHost);
    m_Size = this->m_TouchList.m_Size;
    vel = m_pHost->m_vecAbsVelocity;
    if ( m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        (*(this->m_TouchList.m_Memory.m_pMemory[v5].trace.m_pEnt->_vptr_IHandleEntity + 3))(&entindex);
        if ( entindex.m_Index != -1 )
        {
          v7 = entindex.m_Index & 0x7FFF;
          if ( v7 != 0x7FFF )
          {
            v8 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
            if ( v8 != 0 )
            {
              v9 = &v8[entindex.m_Index & 0x1FF];
              if ( v9 != 0 && (entindex.m_Index & 0x7FFF) == (v9->m_EHandle.m_Index & 0x7FFF) )
              {
                m_pInstance = v9->m_pInstance;
                if ( v9->m_pInstance != 0 && this->m_pHost != m_pInstance )
                {
                  this->m_TouchList.m_Memory.m_pMemory[v5].trace.m_pEnt = m_pInstance;
                  CBaseEntity::SetAbsVelocity(this->m_pHost, &this->m_TouchList.m_Memory.m_pMemory[v5].deltavelocity);
                  CBaseEntity::PhysicsImpact(
                    m_pInstance,
                    this->m_pHost,
                    &this->m_TouchList.m_Memory.m_pMemory[v5].trace);
                }
              }
            }
          }
        }
        ++v6;
        ++v5;
      }
      while ( v6 < this->m_TouchList.m_Size );
    }
    CBaseEntity::SetAbsVelocity(this->m_pHost, &vel);
    v11 = this->m_pHost;
    if ( v11 != 0 && (*(v11->_vptr_IHandleEntity + 140))(v11) != 0 )
    {
      x = this->m_collisionNormal.x;
      v13 = this->m_pHost;
      if ( x <= -0.0099999998
        || x >= 0.0099999998
        || (y = this->m_collisionNormal.y) <= -0.0099999998
        || y >= 0.0099999998
        || (z = this->m_collisionNormal.z) <= -0.0099999998
        || z >= 0.0099999998 )
      {
        VectorNormalize(&this->m_collisionNormal);
        v13[1096] = this->m_collisionNormal.x;
        v13[1097] = this->m_collisionNormal.y;
        v13[1098] = this->m_collisionNormal.z;
      }
      v15 = this->m_groundNormal.x;
      if ( v15 <= -0.0099999998
        || v15 >= 0.0099999998
        || (v16 = this->m_groundNormal.y) <= -0.0099999998
        || v16 >= 0.0099999998
        || (v17 = this->m_groundNormal.z) <= -0.0099999998
        || v17 >= 0.0099999998 )
      {
        v13[1099] = v15;
        v13[1100] = this->m_groundNormal.y;
        v13[1101] = this->m_groundNormal.z;
      }
    }
    (*(this->_vptr_IMoveHelper + 2))(this);
  }
}


// CMoveHelperServer::StartSound  (line 267, @0x00000000022a4320, libserver.so)  // inlines: entindex
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CMoveHelperServer::StartSound(
        CMoveHelperServer *const this,
        const Vector *const origin,
        const char *soundname)
{
  CEntityIndex v6; // eax
  CRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+138h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddRecipientsByPAS(&filter, origin);
  v6.m_Data = CEntityInstance::GetEntityIndex(this->m_pHost).m_Data;
  CBaseEntity::EmitSound(&filter, v6, soundname, 0, 0.0, 0);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CMoveHelperServer::StartSound  (line 281, @0x00000000022a43d0, libserver.so)  // inlines: CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, entindex, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CRecipientFilter::UsePredictionRules, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
void __fastcall CMoveHelperServer::StartSound(
        CMoveHelperServer *const this,
        const Vector *const origin,
        int channel,
        const char *sample,
        float volume,
        soundlevel_t soundlevel,
        int fFlags,
        int pitch)
{
  CBaseEntity *v12; // rdi
  CEntityIndex v13; // eax
  CBaseEntity *m_pHost; // rdi
  CEntityIndex v15; // eax
  EmitSound_t params; // [rsp+20h] [rbp-1D0h] BYREF
  CRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+1B8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddRecipientsByPAS(&filter, origin);
  if ( gpGlobals->maxClients == 1 )
  {
    params.m_pOrigin = origin;
    params.m_flSoundTime = 0.0;
    params.m_pflSoundDuration = 0;
    params.m_bEmitCloseCaption = 1;
    params.m_pSoundName = sample;
    params.m_bWarnOnMissingCloseCaption = 0;
    params.m_bWarnOnDirectWaveReference = 0;
    params.m_nSpeakerEntity.m_Data = -1;
    params.m_nPitch = pitch;
    params.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    m_pHost = this->m_pHost;
    params.m_nChannel = channel;
    params.m_flVolume = volume;
    params.m_SoundLevel = soundlevel;
    params.m_nFlags = fFlags;
    v15.m_Data = CEntityInstance::GetEntityIndex(m_pHost).m_Data;
    CBaseEntity::EmitSound(&filter, v15, &params);
    params.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
      if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_6;
    }
  }
  else
  {
    CRecipientFilter::UsePredictionRules(&filter);
    params.m_pOrigin = origin;
    params.m_flSoundTime = 0.0;
    params.m_pflSoundDuration = 0;
    params.m_bEmitCloseCaption = 1;
    params.m_pSoundName = sample;
    params.m_bWarnOnMissingCloseCaption = 0;
    params.m_bWarnOnDirectWaveReference = 0;
    params.m_nSpeakerEntity.m_Data = -1;
    params.m_nPitch = pitch;
    params.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    v12 = this->m_pHost;
    params.m_nChannel = channel;
    params.m_flVolume = volume;
    params.m_SoundLevel = soundlevel;
    params.m_nFlags = fFlags;
    v13.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
    CBaseEntity::EmitSound(&filter, v13, &params);
    params.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
      if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_6:
        CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    }
  }
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CMoveHelperServer::PlaybackEventFull  (line 324, @0x0000000002283f20, libserver.so)
void __fastcall CMoveHelperServer::PlaybackEventFull(
        CMoveHelperServer *const this,
        int flags,
        int clientindex,
        unsigned __int16 eventindex,
        float delay,
        Vector *const origin,
        Vector *const angles,
        float fparam1,
        float fparam2)
{
  ;
}


// CMoveHelperServer::Con_NPrintf  (line 335, @0x00000000022842d0, libserver.so)
// calls: V_vsnprintf, __stack_chk_fail
void CMoveHelperServer::Con_NPrintf(CMoveHelperServer *const this, int idx, const char *pFormat, ...)
{
  va_list marker; // [rsp+8h] [rbp-20E8h] BYREF
  char msg[8200]; // [rsp+20h] [rbp-20D0h] BYREF
  unsigned __int64 v6; // [rsp+2028h] [rbp-C8h]

  va_start(marker, pFormat);
  v6 = __readfsqword(0x28u);
  V_vsnprintf(msg, 0x2000, pFormat, marker);
  (*(*engine + 320LL))(engine, idx, msg);
}


// CMoveHelperServer::PlayerFallingDamage  (line 352, @0x00000000022895a0, libserver.so)  // inlines: Color, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SetColor
// calls: CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CBaseEntity::GetAbsOrigin, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::GetHealth, UTIL_ScreenFade, __stack_chk_fail, _Unwind_Resume
// strings: "Player.FallDamage"
bool __fastcall CMoveHelperServer::PlayerFallingDamage(CMoveHelperServer *const this)
{
  bool result; // al
  CBaseEntity *m_pHost; // r12
  float v4; // xmm0_4
  CEntityIdentity *v5; // rax
  CBaseEntity *m_pInstance; // rsi
  void (__fastcall *v7)(CMoveHelperServer *const, const Vector *, const char *); // r15
  const Vector *AbsOrigin; // rax
  CTakeDamageInfo info; // [rsp+0h] [rbp-D0h] BYREF
  Color black; // [rsp+90h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+98h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( (*(this->m_pHost->_vptr_IHandleEntity + 140))(this->m_pHost) == 0 )
    return 1;
  m_pHost = this->m_pHost;
  v4 = (*(g_pGameRules->_vptr_CGameRules + 67))(g_pGameRules, m_pHost);
  if ( v4 > 0.0 )
  {
    v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
    if ( v5 == 0 || (v5->m_EHandle.m_Index & 0x7FFF) != 0 )
      m_pInstance = 0;
    else
      m_pInstance = v5->m_pInstance;
    CTakeDamageInfo::CTakeDamageInfo(&info, m_pInstance, m_pInstance, v4, 32, 0);
    CBaseEntity::TakeDamage(m_pHost, &info);
    v7 = *(this->_vptr_IMoveHelper + 8);
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pHost);
    v7(this, AbsOrigin, "Player.FallDamage");
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
  if ( CBaseEntity::GetHealth(m_pHost) > 0 )
    return 1;
  result = (*(g_pGameRules->_vptr_CGameRules + 74))(g_pGameRules, m_pHost);
  if ( result )
  {
    black._color[0] = 0;
    black._color[1] = 0;
    black._color[2] = 0;
    black._color[3] = -1;
    UTIL_ScreenFade(m_pHost, &black, 0.0, 9999.0, 10);
    return 0;
  }
  return result;
}


// CMoveHelperServer::PlayerSetAnimation  (line 396, @0x0000000002285920, libserver.so)
void __fastcall CMoveHelperServer::PlayerSetAnimation(CMoveHelperServer *const this, PLAYER_ANIM eAnim)
{
  CBaseEntity *m_pHost; // rdi

  m_pHost = this->m_pHost;
  if ( m_pHost != 0 && (*(m_pHost->_vptr_IHandleEntity + 140))(m_pHost) != 0 )
    (*(this->m_pHost->_vptr_IHandleEntity + 425))(this->m_pHost, eAnim);
}


// CMoveHelperServer::IsWorldEntity  (line 404, @0x00000000022890b0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Instance, IsUsed, IsValid, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, operator==
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CMoveHelperServer::IsWorldEntity(CMoveHelperServer *const this, const CBaseHandle *const handle)
{
  CEntityIdentity *v2; // rax
  CEntityInstance *m_pInstance; // r8
  uint32 m_Index; // eax
  CEntityInstance *v5; // rcx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
  if ( v2 == 0 || (v2->m_EHandle.m_Index & 0x7FFF) != 0 )
    m_pInstance = 0;
  else
    m_pInstance = v2->m_pInstance;
  m_Index = handle->m_Index;
  v5 = 0;
  if ( handle->m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(handle->m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        v5 = v8->m_pInstance;
    }
  }
  return m_pInstance == v5;
}


// MoveHelperServer  (line 411, @0x000000000229a020, libserver.so)
// callers: CBasePlayer::RunNullCommand, CPlayerInfo::RunPlayerMove, CBasePlayer::PhysicsSimulate
// globals: IMoveHelper::sm_pSingleton
IMoveHelper *__cdecl MoveHelperServer()
{
  return IMoveHelper::sm_pSingleton;
}


