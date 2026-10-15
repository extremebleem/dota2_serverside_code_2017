// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics_main.cpp:128
class CTraceFilterPushFinal : public CTraceFilterSimple {
public:

	CTraceFilterPushFinal(CTraceFilterPushFinal &);
	CTraceFilterPushFinal(const CTraceFilterPushFinal &);
	CTraceFilterPushFinal(CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterPushFinal();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// src/game/server/physics_main.cpp:529
class CTraceFilterAgainstEntityList : public CTraceFilter {
public:

	CTraceFilterAgainstEntityList(CTraceFilterAgainstEntityList &);
	CTraceFilterAgainstEntityList(const CTraceFilterAgainstEntityList &);
	CTraceFilterAgainstEntityList();
	virtual bool ShouldHitEntity(CBaseEntity *);
	void AddEntityToHit(CBaseEntity *);
	virtual ~CTraceFilterAgainstEntityList();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};

// src/game/server/physics_main.cpp:576
class CPushBlockerEnum : public CTraceFilter {
public:

private:

	static int s_nEnumCount;
	int m_collisionGroups[8];  // +0x88
	int m_collisionGroupCount;  // +0xa8
	CPushBlockerEnum(CPushBlockerEnum &);
	CPushBlockerEnum(const CPushBlockerEnum &);
	CPushBlockerEnum(CPhysicsPushedEntities *);
	virtual bool ShouldHitEntity(CBaseEntity *);
	void AddCollisionGroup(int);
	bool IsStandingOnPusher(CBaseEntity *);
	bool IntersectsPushers(CBaseEntity *);
	CBaseEntity * GetPushableEntity(CBaseEntity *);
	virtual ~CPushBlockerEnum();

	// vtable[2] ShouldHitEntity
	// sizeof = 176
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsPushedEntities::CPhysicsPushedEntities  (line 37, @0x00000000022ee210, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMemAllocSystemInitialize, CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int> >::RemoveAll, _Unwind_Resume, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int>::Purge
// callers: _GLOBAL__sub_I__unity_base_08.cpp
void __fastcall CPhysicsPushedEntities::CPhysicsPushedEntities(CPhysicsPushedEntities *const this)
{
  CPhysicsPushedEntities::PhysicsPusherInfo_t *v2; // rax

  this->_vptr_CPhysicsPushedEntities = &off_407F470;
  this->m_rgPusher.m_Size = 0;
  this->m_rgPusher.m_Memory.m_pMemory = 0;
  this->m_rgPusher.m_Memory.m_nAllocationCount = 8;
  this->m_rgPusher.m_Memory.m_nGrowSize = 8;
  CMemAllocSystemInitialize();
  v2 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * this->m_rgPusher.m_Memory.m_nAllocationCount);
  this->m_rgMoved.m_Size = 0;
  this->m_rgPusher.m_Memory.m_pMemory = v2;
  this->m_rgMoved.m_Memory.m_pMemory = 0;
  this->m_rgMoved.m_Memory.m_nAllocationCount = 32;
  this->m_rgMoved.m_Memory.m_nGrowSize = 32;
  CMemAllocSystemInitialize();
  this->m_rgMoved.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 200LL * this->m_rgMoved.m_Memory.m_nAllocationCount);
  this->m_flMoveTime = -1.0;
}


// CPhysicsPushedEntities::AddEntity  (line 45, @0x00000000022fa000, libserver.so)  // inlines: AddToTail, CGameTrace, Construct<CPhysicsPushedEntities::PhysicsPushedInfo_t>, Element, GrowMemory, PhysicsPushedInfo_t, RnCollisionAttr_t, operator=, operator[]
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int>::Grow
// callers: CPushBlockerEnum::ShouldHitEntity
void __fastcall CPhysicsPushedEntities::AddEntity(CPhysicsPushedEntities *const this, CBaseEntity *ent)
{
  __int64 m_Size; // r12
  int v5; // eax
  CPhysicsPushedEntities::PhysicsPushedInfo_t *v6; // rdx
  __int64 v7; // r12
  CPhysicsPushedEntities::PhysicsPushedInfo_t *v8; // rax

  m_Size = this->m_rgMoved.m_Size;
  v5 = this->m_rgMoved.m_Size;
  if ( m_Size == this->m_rgMoved.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t,int>::Grow(&this->m_rgMoved.m_Memory, 1);
    v5 = this->m_rgMoved.m_Size;
  }
  v6 = 0;
  this->m_rgMoved.m_Size = v5 + 1;
  v7 = m_Size;
  v8 = &this->m_rgMoved.m_Memory.m_pMemory[v7];
  if ( v8 != 0 )
  {
    v8->m_Trace.m_ShapeAttributes.m_nInteractsAs = 0;
    v8->m_Trace.m_ShapeAttributes.m_nHierarchyId = 0;
    v8->m_Trace.m_ShapeAttributes.m_nInteractsWith = 0;
    v8->m_Trace.m_ShapeAttributes.m_nInteractsExclude = 0;
    v8->m_Trace.m_ShapeAttributes.m_nCollisionGroup = 0;
    v8->m_Trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    v8->m_Trace.m_ShapeAttributes.m_nEntityId = 0;
    CGameTrace::Init(&v8->m_Trace);
    v6 = &this->m_rgMoved.m_Memory.m_pMemory[v7];
  }
  v6->m_pEntity = ent;
  this->m_rgMoved.m_Memory.m_pMemory[v7].m_vecStartAbsOrigin = *CBaseEntity::GetAbsOrigin(ent);
}


// CPhysicsPushedEntities::UnlinkPusherList  (line 56, @0x00000000022d2980, libserver.so)  // inlines: operator[]
// callers: CPhysicsPushedEntities::SpeculativelyCheckPush
void __fastcall CPhysicsPushedEntities::UnlinkPusherList(CPhysicsPushedEntities *const this, int *pPusherHandles)
{
  int m_Size; // r12d
  __int64 i; // rbx
  char *v5; // r13
  __int64 v6; // rdi

  m_Size = this->m_rgPusher.m_Size;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    *(&this->m_rgPusher.m_Memory.m_pMemory->m_bDisabledCollisionWhilePushing + i) = 0;
    v5 = this->m_rgPusher.m_Memory.m_pMemory + i;
    v6 = *(*v5 + 528LL);
    if ( v6 != 0 )
      v5[20] = (*(*v6 + 128LL))(v6);
  }
}


// CPhysicsPushedEntities::RelinkPusherList  (line 68, @0x00000000022d29f0, libserver.so)  // inlines: operator[]
// callers: CPhysicsPushedEntities::SpeculativelyCheckPush
void __fastcall CPhysicsPushedEntities::RelinkPusherList(CPhysicsPushedEntities *const this, int *pPusherHandles)
{
  int m_Size; // ebx
  __int64 i; // r12
  char *v5; // rax

  m_Size = this->m_rgPusher.m_Size;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v5 = this->m_rgPusher.m_Memory.m_pMemory + i;
    if ( v5[20] != 0 )
    {
      (*(**(*v5 + 528LL) + 120LL))(*(*v5 + 528LL), pPusherHandles);
      *(&this->m_rgPusher.m_Memory.m_pMemory->m_bDisabledCollisionWhilePushing + i) = 0;
    }
  }
}


// CPhysicsPushedEntities::ComputeRotationalPushDirection  (line 84, @0x00000000022d2a60, libserver.so)  // inlines: GetSolid, SetPhysicsFlag, ToBasePlayer, VectorITransform, VectorSubtract, VectorTransform, WorldSpaceAABB, operator=
// calls: VectorITransform, VectorTransform, CCollisionProperty::CollisionAABBToWorldAABB, CBaseEntity::GetAbsOrigin
// callers: CPhysicsPushedEntities::SpeculativelyCheckRotPush
void __fastcall CPhysicsPushedEntities::ComputeRotationalPushDirection(
        CPhysicsPushedEntities *const this,
        CBaseEntity *pBlocker,
        const CPhysicsPushedEntities::RotatingPushMove_t *const rotPushMove,
        Vector *pMove,
        CBaseEntity *pRoot)
{
  CCollisionProperty *m_pCollision; // rdi
  Vector *AbsOrigin; // rax
  CCollisionProperty *v11; // rdi
  CCollisionProperty *v12; // rdi
  vec_t x; // xmm1_4
  bool v14; // cc
  vec_t y; // xmm1_4
  vec_t v16; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  const Vector *v18; // rax
  vec_t z; // xmm0_4
  Vector start; // [rsp+0h] [rbp-60h] BYREF
  Vector vecAbsMins; // [rsp+10h] [rbp-50h] BYREF
  Vector vecAbsMaxs; // [rsp+20h] [rbp-40h] BYREF

  m_pCollision = pBlocker->m_pCollision;
  if ( m_pCollision != 0 )
    AbsOrigin = (*(m_pCollision->_vptr_ICollideable + 4))(m_pCollision);
  else
    AbsOrigin = CBaseEntity::GetAbsOrigin(pBlocker);
  v11 = pRoot->m_pCollision;
  start = *AbsOrigin;
  if ( v11 != 0 && (*(v11->_vptr_ICollideable + 7))(v11) == 6 )
  {
    v12 = pBlocker->m_pCollision;
    if ( v12 != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        v12,
        &v12->m_vecMins.m_Value,
        &v12->m_vecMaxs.m_Value,
        &vecAbsMins,
        &vecAbsMaxs);
    }
    else
    {
      v18 = CBaseEntity::GetAbsOrigin(pBlocker);
      vecAbsMins.x = v18->x;
      vecAbsMins.y = v18->y;
      z = v18->z;
      vecAbsMaxs.x = vecAbsMins.x;
      vecAbsMaxs.y = vecAbsMins.y;
      vecAbsMins.z = z;
      vecAbsMaxs.z = z;
    }
    x = vecAbsMaxs.x;
    if ( pMove->x >= 0.0 )
      x = vecAbsMins.x;
    v14 = pMove->y >= 0.0;
    start.x = x;
    y = vecAbsMaxs.y;
    if ( v14 )
      y = vecAbsMins.y;
    v14 = pMove->z >= 0.0;
    start.y = y;
    if ( v14 )
      v16 = vecAbsMins.z;
    else
      v16 = vecAbsMaxs.z;
    vptr_IHandleEntity = pBlocker->_vptr_IHandleEntity;
    start.z = v16;
    if ( vptr_IHandleEntity[140](pBlocker) != 0 )
      pBlocker[3].m_iHammerID |= 0x20u;
  }
  VectorITransform(&start.x, &rotPushMove->startLocalToWorld, &vecAbsMins.x);
  VectorTransform(&vecAbsMins.x, &rotPushMove->endLocalToWorld, &vecAbsMaxs.x);
  pMove->x = vecAbsMaxs.x - start.x;
  pMove->y = vecAbsMaxs.y - start.y;
  pMove->z = vecAbsMaxs.z - start.z;
}


// CTraceFilterPushFinal::~CTraceFilterPushFinal  (line 128, @0x0000000002304820, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterPushFinal::~CTraceFilterPushFinal(CTraceFilterPushFinal *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterPushFinal::~CTraceFilterPushFinal  (line 128, @0x00000000023056e0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterPushFinal, ~CTraceFilterSimple
// calls: operator delete
void __fastcall CTraceFilterPushFinal::~CTraceFilterPushFinal(CTraceFilterPushFinal *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterPushFinal::ShouldHitEntity  (line 138, @0x0000000002307430, libserver.so)
// calls: CTraceFilterSimple::ShouldHitEntity, CBaseEntity::VPhysicsGetObject
bool __fastcall CTraceFilterPushFinal::ShouldHitEntity(CTraceFilterPushFinal *const this, CBaseEntity *pTestEntity)
{
  bool result; // al
  IPhysicsObject *Object; // rax
  IPhysicsObject *v5; // rax
  char v6; // al
  CBaseEntity *pTestEntitya; // [rsp+8h] [rbp-18h]

  result = (pTestEntity->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS
         || (pTestEntitya = pTestEntity,
             Object = CBaseEntity::VPhysicsGetObject(pTestEntity),
             pTestEntity = pTestEntitya,
             Object == 0)
         || (v5 = CBaseEntity::VPhysicsGetObject(pTestEntitya),
             v6 = (*(*v5 + 1512LL))(v5),
             pTestEntity = pTestEntitya,
             v6 == 0))
        && CTraceFilterSimple::ShouldHitEntity(this, pTestEntity);
  return result;
}


// CPhysicsPushedEntities::IsPushedPositionValid  (line 150, @0x00000000022d2c30, libserver.so)  // inlines: CGameTrace, CTraceFilterPushFinal, GetCollisionGroup, GetCollisionGroup_Inline, RnCollisionAttr_t
// calls: CTraceFilterSimple::CTraceFilterSimple, CGameTrace::Init, CBaseEntity::GetAbsOrigin, UTIL_TraceEntity
// callers: CPhysicsPushedEntities::SpeculativelyCheckPush
bool __fastcall CPhysicsPushedEntities::IsPushedPositionValid(
        CPhysicsPushedEntities *const this,
        CBaseEntity *pBlocker)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  const Vector *AbsOrigin; // r14
  const Vector *v6; // rax
  CTraceFilterPushFinal pushFilter; // [rsp+0h] [rbp-110h] BYREF
  trace_t trace; // [rsp+40h] [rbp-D0h] BYREF

  m_pCollision = pBlocker->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CTraceFilterSimple::CTraceFilterSimple(&pushFilter, pBlocker, m_Value, 0);
  memset(&trace.m_ShapeAttributes, 0, 31);
  pushFilter._vptr_CTraceFilter = off_407F430;
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pBlocker);
  v6 = CBaseEntity::GetAbsOrigin(pBlocker);
  UTIL_TraceEntity(pBlocker, v6, AbsOrigin, &pushFilter, &trace);
  return !trace.startsolid;
}


// CPhysicsPushedEntities::SpeculativelyCheckPush  (line 163, @0x00000000022d2d10, libserver.so)  // inlines: CEntityHandle, CTraceFilterPushMove, EnableInteractsWith, Get, GetClassNameAsCStr, GetClassname, GetCollisionGroup, GetCollisionGroup_Inline, GetColumn, GetEntryIndex, GetGroundEntity, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsPointSized, IsSolid, LookupEntity, MatrixGetColumn, String, VectorAdd, VectorMultiply, operator*, operator+
// calls: CPhysicsPushedEntities::UnlinkPusherList, CTraceFilterSimple::CTraceFilterSimple, CBaseEntity::GetRootMoveParent, CBaseEntity::GetAbsOrigin, UTIL_TraceEntity, CPhysicsPushedEntities::RelinkPusherList, CPhysicsPushedEntities::IsPushedPositionValid, Warning, CBaseEntity::SetAbsOrigin, CBaseEntity::EntityToWorldTransform, DevMsg, __stack_chk_fail
// callers: CPhysicsPushedEntities::SpeculativelyCheckRotPush, CPhysicsPushedEntities::SpeculativelyCheckLinearPush
// strings: "Interpenetrating entities! (%s and %s)\n", "Ignoring player blocking train!\n", "Fixing player blocking train!\n"
bool __fastcall CPhysicsPushedEntities::SpeculativelyCheckPush(
        CPhysicsPushedEntities *const this,
        CPhysicsPushedEntities::PhysicsPushedInfo_t *const info,
        const Vector *const vecAbsPush,
        bool bRotationalPush,
        CBaseEntity *pRoot)
{
  __int64 m_Size; // rax
  CBaseEntity *m_pEntity; // rbx
  void *v10; // rsp
  Vector *v11; // rax
  CCollisionProperty *m_pCollision; // rdx
  int m_Value; // edx
  const Vector *AbsOrigin; // rax
  vec_t v15; // xmm0_4
  vec_t v16; // xmm2_4
  const Vector *v17; // rax
  unsigned __int16 v18; // dx
  int v19; // esi
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  char IsPushedPositionValid; // dl
  float v24; // xmm0_4
  CCollisionProperty *v25; // r14
  const char *m_pAsString; // rdx
  CEntityIdentity *v28; // rax
  CEntityIdentity *v29; // rax
  const char *v30; // rsi
  bool v31; // r14
  int v32; // r15d
  const Vector *v33; // rax
  vec_t y; // xmm5_4
  vec_t z; // xmm6_4
  CPhysicsPushedEntities::PhysicsPusherInfo_t *m_pMemory; // rax
  matrix3x4_t *v37; // rax
  float v38; // xmm0_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  int v42; // eax
  matrix3x4_t *v43; // rax
  float *v44; // rax
  _BYTE v45[4]; // [rsp+10h] [rbp-C0h] BYREF
  float x; // [rsp+14h] [rbp-BCh]
  Vector *vOrigin; // [rsp+18h] [rbp-B8h]
  CTraceFilter *traceFilter; // [rsp+20h] [rbp-B0h]
  CBaseEntity *pRoota; // [rsp+28h] [rbp-A8h]
  Vector pushDestPosition; // [rsp+30h] [rbp-A0h] BYREF
  Vector v51; // [rsp+40h] [rbp-90h] BYREF
  CTraceFilterPushMove pushFilter; // [rsp+50h] [rbp-80h] BYREF
  unsigned __int64 v53; // [rsp+98h] [rbp-38h]

  pRoota = pRoot;
  v53 = __readfsqword(0x28u);
  m_Size = this->m_rgPusher.m_Size;
  x = *&bRotationalPush;
  m_pEntity = info->m_pEntity;
  v10 = alloca(((4 * m_Size + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  CPhysicsPushedEntities::UnlinkPusherList(this, (v45 & 0xFFFFFFFFFFFFFFEFLL));
  v11 = (*(m_pEntity->_vptr_IHandleEntity + 123))(m_pEntity);
  m_pCollision = m_pEntity->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  traceFilter = &pushFilter;
  vOrigin = v11;
  CTraceFilterSimple::CTraceFilterSimple(&pushFilter, m_pEntity, m_Value, 0);
  pushFilter._vptr_CTraceFilter = off_407F3F0;
  pushFilter.m_pRootParent = CBaseEntity::GetRootMoveParent(m_pEntity);
  pushFilter.m_attr.m_nInteractsWith |= vOrigin;
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pEntity);
  v15 = AbsOrigin->z + vecAbsPush->z;
  v16 = AbsOrigin->x + vecAbsPush->x;
  pushDestPosition.y = AbsOrigin->y + vecAbsPush->y;
  pushDestPosition.z = v15;
  pushDestPosition.x = v16;
  v17 = CBaseEntity::GetAbsOrigin(m_pEntity);
  vOrigin = &pushDestPosition;
  UTIL_TraceEntity(m_pEntity, v17, &pushDestPosition, traceFilter, &info->m_Trace);
  CPhysicsPushedEntities::RelinkPusherList(this, (v45 & 0xFFFFFFFFFFFFFFEFLL));
  info->m_bPusherIsGround = 0;
  if ( m_pEntity->m_hGroundEntity.m_Value.m_Index == -1 )
  {
    v18 = 0x7FFF;
    v19 = 0x7FFF;
  }
  else
  {
    v18 = m_pEntity->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
    v19 = v18;
  }
  v20 = (m_pEntity->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v18 & 0x7FFF;
  LODWORD(v51.x) = v20;
  if ( (v20 + 2) > 1 )
  {
    v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v19 >> 9];
    if ( v21 != 0 )
    {
      v22 = &v21[v19 & 0x1FF];
      if ( v22 != 0
        && v20 == v22->m_EHandle.m_Index
        && v22->m_pInstance != 0
        && CBaseEntity::GetRootMoveParent(v22->m_pInstance) == this->m_rgPusher.m_Memory.m_pMemory->m_pEntity )
      {
        info->m_bPusherIsGround = 1;
      }
    }
  }
  CBaseEntity::GetAbsOrigin(m_pEntity);
  if ( this->m_bIsUnblockableByPlayer
    && ((*(m_pEntity->_vptr_IHandleEntity + 140))(m_pEntity) != 0
     || (*(m_pEntity->_vptr_IHandleEntity + 144))(m_pEntity) != 0) )
  {
    CBaseEntity::SetAbsOrigin(m_pEntity, vOrigin);
    v31 = !CPhysicsPushedEntities::IsPushedPositionValid(this, m_pEntity);
    info->m_bBlocked = v31;
    if ( !v31 )
      return 1;
    v32 = 0;
    v33 = CBaseEntity::GetAbsOrigin(m_pEntity);
    y = v33->y;
    z = v33->z;
    x = v33->x;
    m_pMemory = this->m_rgPusher.m_Memory.m_pMemory;
    *&traceFilter = y;
    *&pRoota = z;
    v37 = CBaseEntity::EntityToWorldTransform(m_pMemory->m_pEntity);
    v38 = 0.5;
    v39 = v37->m_flMatVal[2][0];
    v40 = v37->m_flMatVal[1][0];
    v41 = v37->m_flMatVal[0][0];
    while ( 1 )
    {
      v51.x = (v41 * v38) + x;
      v51.y = (v40 * v38) + *&traceFilter;
      v51.z = (v38 * v39) + *&pRoota;
      CBaseEntity::SetAbsOrigin(m_pEntity, &v51);
      LOBYTE(v42) = CPhysicsPushedEntities::IsPushedPositionValid(this, m_pEntity);
      info->m_bBlocked = v42 ^ 1;
      if ( v42 == 1 )
        break;
      if ( ++v32 == 4 )
      {
        LODWORD(pRoota) = v42 ^ 1;
        CBaseEntity::SetAbsOrigin(m_pEntity, vOrigin);
        DevMsg(1, "Ignoring player blocking train!\n");
        return pRoota;
      }
      v43 = CBaseEntity::EntityToWorldTransform(this->m_rgPusher.m_Memory.m_pMemory->m_pEntity);
      v38 = 0.5;
      v44 = (v43 + 4 * (v32 >> 1));
      v39 = v44[8];
      v40 = v44[4];
      v41 = *v44;
      if ( (v32 & 1) != 0 )
        v38 = -0.5;
    }
    DevMsg(1, "Fixing player blocking train!\n");
    return v31;
  }
  else if ( pRoota != 0 && (IsPushedPositionValid = (*(pRoota->_vptr_IHandleEntity + 189))(pRoota, m_pEntity)) == 0 )
  {
    info->m_bBlocked = 1;
  }
  else
  {
    v24 = 0.0;
    if ( info->m_Trace.fraction != 0.0 )
    {
      LODWORD(pRoota) = 0;
      CBaseEntity::SetAbsOrigin(m_pEntity, &info->m_Trace.endpos);
      v24 = *&pRoota;
    }
    v25 = m_pEntity->m_pCollision;
    if ( v25 == 0
      || v24 == v25->m_flRadius
      || (*((*(v25->_vptr_ICollideable + 13))(m_pEntity->m_pCollision) + 31) & 1) == 0
      && (*((*(v25->_vptr_ICollideable + 13))(v25) + 31) & 2) == 0
      || v25->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
    {
      return 1;
    }
    if ( LOBYTE(x) == 0 && info->m_Trace.fraction == 1.0 )
    {
      if ( !CPhysicsPushedEntities::IsPushedPositionValid(this, m_pEntity) )
      {
        m_pAsString = "";
        v28 = this->m_rgPusher.m_Memory.m_pMemory->m_pEntity->m_pEntity;
        if ( v28->m_designerName.u.m_Id != 0 )
          m_pAsString = v28->m_designerName.u.m_pAsString;
        v29 = m_pEntity->m_pEntity;
        v30 = "";
        if ( v29->m_designerName.u.m_Id != 0 )
          v30 = v29->m_designerName.u.m_pAsString;
        Warning("Interpenetrating entities! (%s and %s)\n", v30, m_pAsString);
      }
      return 1;
    }
    IsPushedPositionValid = CPhysicsPushedEntities::IsPushedPositionValid(this, m_pEntity);
    info->m_bBlocked = IsPushedPositionValid ^ 1;
  }
  return IsPushedPositionValid;
}


// CPhysicsPushedEntities::SpeculativelyCheckRotPush  (line 329, @0x00000000022d32e0, libserver.so)  // inlines: Init, operator[]
// calls: CPhysicsPushedEntities::ComputeRotationalPushDirection, CPhysicsPushedEntities::SpeculativelyCheckPush
bool __fastcall CPhysicsPushedEntities::SpeculativelyCheckRotPush(
        CPhysicsPushedEntities *const this,
        const CPhysicsPushedEntities::RotatingPushMove_t *const rotPushMove,
        CBaseEntity *pRoot)
{
  int m_Size; // r12d
  __int64 v6; // rbx
  CPhysicsPushedEntities::PhysicsPushedInfo_t *v7; // rsi
  bool result; // al
  Vector vecAbsPush; // [rsp+10h] [rbp-40h] BYREF

  m_Size = this->m_rgMoved.m_Size;
  vecAbsPush.x = 0.0;
  vecAbsPush.y = 0.0;
  vecAbsPush.z = 0.0;
  this->m_nBlocker = -1;
  v6 = 200LL * m_Size - 200;
  do
  {
    if ( --m_Size < 0 )
      return 1;
    CPhysicsPushedEntities::ComputeRotationalPushDirection(
      this,
      *(&this->m_rgMoved.m_Memory.m_pMemory->m_pEntity + v6),
      rotPushMove,
      &vecAbsPush,
      pRoot);
    v7 = (this->m_rgMoved.m_Memory.m_pMemory + v6);
    v6 -= 200;
    result = CPhysicsPushedEntities::SpeculativelyCheckPush(this, v7, &vecAbsPush, 1, pRoot);
  }
  while ( result );
  this->m_nBlocker = m_Size;
  return result;
}


// CPhysicsPushedEntities::SpeculativelyCheckLinearPush  (line 352, @0x00000000022d33b0, libserver.so)  // inlines: operator[]
// calls: CPhysicsPushedEntities::SpeculativelyCheckPush
bool __fastcall CPhysicsPushedEntities::SpeculativelyCheckLinearPush(
        CPhysicsPushedEntities *const this,
        const Vector *const vecAbsPush)
{
  int m_Size; // ebx
  __int64 v5; // r12
  CPhysicsPushedEntities::PhysicsPushedInfo_t *v6; // rsi
  bool result; // al

  m_Size = this->m_rgMoved.m_Size;
  this->m_nBlocker = -1;
  v5 = 200LL * m_Size - 200;
  do
  {
    if ( --m_Size < 0 )
      return 1;
    v6 = (this->m_rgMoved.m_Memory.m_pMemory + v5);
    v5 -= 200;
    result = CPhysicsPushedEntities::SpeculativelyCheckPush(this, v6, vecAbsPush, 0, 0);
  }
  while ( result );
  this->m_nBlocker = m_Size;
  return result;
}


// CPhysicsPushedEntities::FinishPushers  (line 371, @0x00000000022d3430, libserver.so)  // inlines: operator[]
// calls: CBaseEntity::PhysicsTouchTriggers
// callers: CPhysicsPushedEntities::FinishPush
void __fastcall CPhysicsPushedEntities::FinishPushers(CPhysicsPushedEntities *const this)
{
  int v2; // edx
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  char *v6; // r12

  v2 = this->m_rgPusher.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 24LL * v2;
    v4 = 24 * (v2 - v2) - 24;
    do
    {
      v5 = v3;
      v3 -= 24;
      v6 = this->m_rgPusher.m_Memory.m_pMemory + v5;
      CBaseEntity::PhysicsTouchTriggers(*v6, (v6 + 8));
      (*(**v6 + 472LL))(gpGlobals->frametime);
    }
    while ( v3 != v4 );
  }
}


// CPhysicsPushedEntities::FinishRotPushedEntity  (line 392, @0x00000000022bbed0, libserver.so)  // inlines: operator+=
// calls: CBaseEntity::SetLocalAngularVelocity, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles
void __fastcall CPhysicsPushedEntities::FinishRotPushedEntity(
        CPhysicsPushedEntities *const this,
        CBaseEntity *pPushedEntity,
        const CPhysicsPushedEntities::RotatingPushMove_t *const rotPushMove)
{
  vec_t y; // xmm0_4
  vec_t z; // eax
  float v7; // xmm0_4
  const QAngle *AbsAngles; // rax
  vec_t v9; // xmm0_4
  QAngle angVel; // [rsp+0h] [rbp-20h] BYREF

  if ( (*(pPushedEntity->_vptr_IHandleEntity + 140))(pPushedEntity) != 0 )
  {
    y = rotPushMove->amove.y;
    *&angVel.x = *&pPushedEntity->m_vecAngVelocity.x;
    z = pPushedEntity->m_vecAngVelocity.z;
    angVel.y = y;
    angVel.z = z;
    CBaseEntity::SetLocalAngularVelocity(pPushedEntity, &angVel);
    if ( (*(pPushedEntity->_vptr_IHandleEntity + 100))(pPushedEntity) != 0 )
    {
      v7 = *&pPushedEntity[3].m_ResponseContexts.m_Memory.m_nGrowSize;
      pPushedEntity[3].m_ResponseContexts.m_Memory.m_nAllocationCount = 2;
      *&pPushedEntity[3].m_ResponseContexts.m_Memory.m_nGrowSize = v7 + rotPushMove->amove.x;
      *&pPushedEntity[3].m_iszResponseContext.u.m_Id = *&pPushedEntity[3].m_iszResponseContext.u.m_Id
                                                     + rotPushMove->amove.y;
      *(&pPushedEntity[3].m_iszResponseContext.u.m_pAsString + 1) = *(&pPushedEntity[3].m_iszResponseContext.u.m_pAsString
                                                                    + 1)
                                                                  + rotPushMove->amove.z;
    }
  }
  else
  {
    AbsAngles = CBaseEntity::GetAbsAngles(pPushedEntity);
    *&angVel.x = *&AbsAngles->x;
    v9 = angVel.y + rotPushMove->amove.y;
    angVel.z = AbsAngles->z;
    angVel.y = v9;
    CBaseEntity::SetAbsAngles(pPushedEntity, &angVel);
  }
}


// CPhysicsPushedEntities::FinishPush  (line 426, @0x00000000022d51a0, libserver.so)  // inlines: operator[]
// calls: CPhysicsPushedEntities::FinishPushers, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::PhysicsImpact
// callers: CPhysicsPushedEntities::PerformRotatePush, CPhysicsPushedEntities::PerformLinearPush
void __fastcall CPhysicsPushedEntities::FinishPush(
        CPhysicsPushedEntities *const this,
        bool bIsRotPush,
        const CPhysicsPushedEntities::RotatingPushMove_t *pRotPushMove)
{
  int m_Size; // ebx
  __int64 i; // r12
  char *v6; // r15
  CBaseEntity *v7; // r13
  CBaseEntity *v8; // rsi

  CPhysicsPushedEntities::FinishPushers(this);
  m_Size = this->m_rgMoved.m_Size;
  for ( i = 200LL * m_Size - 200; --m_Size >= 0; i -= 200 )
  {
    v6 = this->m_rgMoved.m_Memory.m_pMemory + i;
    v7 = *v6;
    CBaseEntity::PhysicsTouchTriggers(*v6, (v6 + 8));
    (*(**v6 + 472LL))(gpGlobals->frametime);
    v8 = *(v6 + 12);
    if ( v8 != 0 )
      CBaseEntity::PhysicsImpact(v7, v8, (v6 + 24));
    if ( bIsRotPush )
      (*(this->_vptr_CPhysicsPushedEntities + 2))(this, v7, pRotPushMove);
  }
}


// CPhysicsPushedEntities::BeginPush  (line 461, @0x00000000022ee190, libserver.so)  // inlines: operator=
// calls: CUtlVectorBase<CPhysicsPushedEntities::PhysicsPushedInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int> >::RemoveAll, CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int> >::RemoveAll, CBaseEntity::GetLocalOrigin, CBaseEntity::GetLocalAngles
// callers: CBaseEntity::PerformPush
void __fastcall CPhysicsPushedEntities::BeginPush(CPhysicsPushedEntities *const this, CBaseEntity *pRoot)
{
  CUtlVectorBase<CPhysicsPushedEntities::PhysicsPushedInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t,int>>::RemoveAll(&this->m_rgMoved);
  CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int>>::RemoveAll(&this->m_rgPusher);
  this->m_rootPusherStartLocalOrigin = *CBaseEntity::GetLocalOrigin(pRoot);
  this->m_rootPusherStartLocalAngles = *CBaseEntity::GetLocalAngles(pRoot);
  this->m_rootPusherStartLocaltime = pRoot->m_flLocalTime;
}


// CPhysicsPushedEntities::StoreMovedEntities  (line 472, @0x00000000022d34c0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, VectorSubtract, operator-, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin
void __fastcall CPhysicsPushedEntities::StoreMovedEntities(
        CPhysicsPushedEntities *const this,
        physicspushlist_t *const list)
{
  CPhysicsPushedEntities *v2; // rcx
  int m_Size; // eax
  float *p_localMoveTime; // r12
  __int64 v5; // r14
  int v6; // r15d
  CHandle<CBaseEntity> *pushedEnts; // rbx
  CEntityIdentity *v8; // rdx
  int v9; // eax
  __int16 v10; // di
  CPhysicsPushedEntities::PhysicsPushedInfo_t *v11; // r13
  const Vector *AbsOrigin; // rax
  float v13; // xmm0_4
  float v14; // xmm2_4
  CBaseEntity *m_pEntity; // rax
  physicspushlist_t *v16; // [rsp+0h] [rbp-40h]
  CPhysicsPushedEntities *v17; // [rsp+8h] [rbp-38h]

  v2 = this;
  list->localMoveTime = this->m_rootPusherStartLocaltime;
  list->localOrigin = this->m_rootPusherStartLocalOrigin;
  list->localAngles = this->m_rootPusherStartLocalAngles;
  m_Size = this->m_rgMoved.m_Size;
  list->pushedCount = m_Size;
  if ( m_Size <= 0x20 )
  {
    if ( m_Size <= 0 )
      return;
  }
  else
  {
    list->pushedCount = 32;
  }
  p_localMoveTime = &list->localMoveTime;
  v5 = 0;
  v6 = 0;
  pushedEnts = list->pushedEnts;
  do
  {
    m_pEntity = v2->m_rgMoved.m_Memory.m_pMemory[v5].m_pEntity;
    if ( m_pEntity != 0 && (v8 = m_pEntity->m_pEntity) != 0 )
    {
      v9 = (v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1);
      v10 = 0x7FFF;
      if ( v8->m_EHandle.m_Index != -1 )
        v10 = v8->m_EHandle.m_Index & 0x7FFF;
      LOWORD(pushedEnts->m_Index) = v10 | pushedEnts->m_Index & 0x8000;
      pushedEnts->m_Index = (v9 << 15) | pushedEnts->m_Index & 0x7FFF;
    }
    else
    {
      pushedEnts->m_Index = -1;
    }
    v16 = list;
    ++v6;
    v11 = &v2->m_rgMoved.m_Memory.m_pMemory[v5];
    v17 = v2;
    ++v5;
    p_localMoveTime += 3;
    ++pushedEnts;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11->m_pEntity);
    list = v16;
    v13 = AbsOrigin->z - v11->m_vecStartAbsOrigin.z;
    v14 = AbsOrigin->x - v11->m_vecStartAbsOrigin.x;
    p_localMoveTime[38] = AbsOrigin->y - v11->m_vecStartAbsOrigin.y;
    v2 = v17;
    p_localMoveTime[39] = v13;
    p_localMoveTime[37] = v14;
  }
  while ( v16->pushedCount > v6 );
}


// CPhysicsPushedEntities::RegisterBlockage  (line 493, @0x00000000022d5260, libserver.so)  // inlines: operator[]
// calls: CBaseEntity::PhysicsImpact
// callers: CPhysicsPushedEntities::PerformRotatePush, CPhysicsPushedEntities::PerformLinearPush
CBaseEntity *__fastcall CPhysicsPushedEntities::RegisterBlockage(CPhysicsPushedEntities *const this)
{
  CPhysicsPushedEntities::PhysicsPushedInfo_t *v1; // rbx
  CBaseEntity *m_pEnt; // rsi

  v1 = &this->m_rgMoved.m_Memory.m_pMemory[this->m_nBlocker];
  m_pEnt = v1->m_Trace.m_pEnt;
  if ( m_pEnt != 0 )
    CBaseEntity::PhysicsImpact(v1->m_pEntity, m_pEnt, &v1->m_Trace);
  return v1->m_pEntity;
}


// CPhysicsPushedEntities::RestoreEntities  (line 514, @0x00000000022d3650, libserver.so)  // inlines: operator[]
// calls: CBaseEntity::SetAbsOrigin
// callers: CPhysicsPushedEntities::PerformRotatePush, CPhysicsPushedEntities::PerformLinearPush
void __fastcall CPhysicsPushedEntities::RestoreEntities(CPhysicsPushedEntities *const this)
{
  int v2; // edx
  __int64 v3; // rbx
  unsigned __int64 v4; // r13
  __int64 v5; // rax

  v2 = this->m_rgMoved.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 200LL * v2;
    v4 = 200 * (v2 - v2) - 200;
    do
    {
      v5 = v3;
      v3 -= 200;
      CBaseEntity::SetAbsOrigin(
        *(&this->m_rgMoved.m_Memory.m_pMemory->m_pEntity + v5),
        (&this->m_rgMoved.m_Memory.m_pMemory->m_vecStartAbsOrigin + v5));
    }
    while ( v3 != v4 );
  }
}


// CTraceFilterAgainstEntityList::~CTraceFilterAgainstEntityList  (line 529, @0x0000000002308600, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CTraceFilterAgainstEntityList::~CTraceFilterAgainstEntityList(
        CTraceFilterAgainstEntityList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_407F4B0;
  this->m_entityList.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_entityList.m_Memory,
        CUtlMemory<CBaseEntity *,int>::Purge(&this->m_entityList.m_Memory),
        (this->m_entityList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_CTraceFilter = off_3FE6970;
  }
  else
  {
    CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
    this->_vptr_CTraceFilter = off_3FE6970;
  }
}


// CTraceFilterAgainstEntityList::~CTraceFilterAgainstEntityList  (line 529, @0x00000000023086e0, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterAgainstEntityList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CTraceFilterAgainstEntityList::~CTraceFilterAgainstEntityList(
        CTraceFilterAgainstEntityList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_407F4B0;
  this->m_entityList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_entityList.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_entityList.m_Memory);
    if ( (this->m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterAgainstEntityList::ShouldHitEntity  (line 534, @0x00000000023081c0, libserver.so)  // inlines: operator[]
bool __fastcall CTraceFilterAgainstEntityList::ShouldHitEntity(
        CTraceFilterAgainstEntityList *const this,
        CBaseEntity *pEntity)
{
  int v2; // eax
  CBaseEntity **m_pMemory; // rcx
  __int64 v4; // rdx

  v2 = this->m_entityList.m_Size - 1;
  if ( v2 < 0 )
    return 0;
  m_pMemory = this->m_entityList.m_Memory.m_pMemory;
  if ( m_pMemory[v2] != pEntity )
  {
    v4 = &m_pMemory[v2 - 1];
    while ( --v2 != -1 )
    {
      v4 -= 8;
      if ( *(v4 + 8) == pEntity )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CPushBlockerEnum::~CPushBlockerEnum  (line 576, @0x0000000002308670, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterAgainstEntityList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CPushBlockerEnum::~CPushBlockerEnum(CPushBlockerEnum *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pushersOnly.m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_407F4F0;
  this->m_pushersOnly._vptr_CTraceFilter = off_407F4B0;
  this->m_pushersOnly.m_entityList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_pushersOnly.m_entityList.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_pushersOnly.m_entityList.m_Memory);
    if ( (this->m_pushersOnly.m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->m_pushersOnly._vptr_CTraceFilter = off_3FE6970;
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CPushBlockerEnum::~CPushBlockerEnum  (line 576, @0x0000000002308740, libserver.so)  // inlines: Purge, RemoveAll, ~CPushBlockerEnum, ~CTraceFilter, ~CTraceFilterAgainstEntityList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CPushBlockerEnum::~CPushBlockerEnum(CPushBlockerEnum *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pushersOnly.m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_407F4F0;
  this->m_pushersOnly._vptr_CTraceFilter = off_407F4B0;
  this->m_pushersOnly.m_entityList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_pushersOnly.m_entityList.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_pushersOnly.m_entityList.m_Memory);
    if ( (this->m_pushersOnly.m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->m_pushersOnly._vptr_CTraceFilter = off_3FE6970;
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CPushBlockerEnum::ShouldHitEntity  (line 601, @0x0000000002318e60, libserver.so)  // inlines: CEntityHandle, CGameTrace, ClassMatches, FClassnameIs, Get, GetCollisionGroup, GetCollisionGroup_Inline, GetEntryIndex, GetGroundEntity, GetHandleEntity, GetInstance, GetMoveType, GetPushableEntity, GetSerialNumber, IndexToIdentity, Init, IntersectsPushers, IsSolid, IsStandingOnPusher, LookupEntity, RnCollisionAttr_t, SetInteractsWith
// calls: CEntityIdentity::ClassMatches, CGameRules::ShouldCollide, CBaseEntity::GetRootMoveParent, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CGamePhysicsQueryInterface::SweepCollideable, CPhysicsPushedEntities::AddEntity
// strings: "infected"
// globals: CPushBlockerEnum::s_nEnumCount
bool __fastcall CPushBlockerEnum::ShouldHitEntity(CPushBlockerEnum *const this, CBaseEntity *pInstance)
{
  CCollisionProperty *m_pCollision; // rbx
  MoveType_t m_Value; // al
  CPushBlockerEnum *v8; // rbx
  int v9; // r12d
  bool ShouldCollide; // r10
  CCollisionProperty *v11; // rax
  int v12; // edx
  CBaseEntity *RootMoveParent; // rax
  bool v14; // r10
  CBaseEntity *v15; // rbx
  unsigned __int16 v16; // dx
  int v17; // esi
  vec_t v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r8
  CPhysicsPushedEntities *m_pPushedEntities; // rsi
  int m_Size; // edx
  __int64 v24; // rcx
  CEntityInstance *v25; // rdi
  const Vector *AbsOrigin; // r15
  const Vector *v27; // rax
  bool v28; // [rsp+Ch] [rbp-E4h]
  bool v29; // [rsp+Ch] [rbp-E4h]
  CGameTrace_2 v30; // [rsp+10h] [rbp-E0h] BYREF

  if ( pInstance == 0 )
    return 0;
  if ( pInstance->m_nPushEnumCount == CPushBlockerEnum::s_nEnumCount )
    return 0;
  m_pCollision = pInstance->m_pCollision;
  if ( m_pCollision == 0
    || (*((*(m_pCollision->_vptr_ICollideable + 13))(pInstance->m_pCollision) + 31) & 1) == 0
    && (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) == 0 )
  {
    return 0;
  }
  if ( m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
    return 0;
  m_Value = pInstance->m_MoveType.m_Value;
  if ( m_Value == MoveType_t::MOVETYPE_NONE
    || (m_Value - 6) <= 2u
    || CEntityIdentity::ClassMatches(pInstance->m_pEntity, "infected")
    || this->m_collisionGroupCount <= 0 )
  {
    return 0;
  }
  v8 = this;
  v9 = 0;
  while ( 1 )
  {
    v11 = pInstance->m_pCollision;
    v12 = v8->m_collisionGroups[0];
    if ( v11 == 0 )
      break;
    ShouldCollide = CGameRules::ShouldCollide(g_pGameRules, v11->m_CollisionGroup.m_Value, v12);
    if ( ShouldCollide )
      goto LABEL_17;
LABEL_14:
    ++v9;
    v8 = (v8 + 4);
    if ( v9 >= this->m_collisionGroupCount )
      return 0;
  }
  ShouldCollide = CGameRules::ShouldCollide(g_pGameRules, 4, v12);
  if ( !ShouldCollide )
    goto LABEL_14;
LABEL_17:
  v28 = ShouldCollide;
  RootMoveParent = CBaseEntity::GetRootMoveParent(pInstance);
  v14 = v28;
  v15 = RootMoveParent;
  if ( RootMoveParent != this->m_pRootHighestParent )
  {
    if ( pInstance->m_hGroundEntity.m_Value.m_Index == -1 )
    {
      v16 = 0x7FFF;
      v17 = 0x7FFF;
    }
    else
    {
      v16 = pInstance->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
      v17 = v16;
    }
    LODWORD(v18) = (pInstance->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
    v30.startpos.x = v18;
    if ( (LODWORD(v18) + 2) > 1
      && (v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9]) != 0
      && (v20 = &v19[v17 & 0x1FF]) != 0
      && LODWORD(v18) == v20->m_EHandle.m_Index )
    {
      m_pInstance = v20->m_pInstance;
      if ( (pInstance->m_fFlags.m_Value & 1) != 0 || m_pInstance != 0 )
        goto LABEL_26;
    }
    else if ( (pInstance->m_fFlags.m_Value & 1) != 0 )
    {
      m_pInstance = 0;
LABEL_26:
      m_pPushedEntities = this->m_pPushedEntities;
      m_Size = m_pPushedEntities->m_rgPusher.m_Size;
      v24 = 24LL * m_Size - 24;
      while ( --m_Size >= 0 )
      {
        v25 = *(&m_pPushedEntities->m_rgPusher.m_Memory.m_pMemory->m_pEntity + v24);
        v24 -= 24;
        if ( v25 == m_pInstance )
          goto LABEL_30;
      }
    }
    memset(&v30.m_ShapeAttributes, 0, 31);
    v30.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&v30);
    this->m_pushersOnly.m_attr.m_nInteractsWith = (*(pInstance->_vptr_IHandleEntity + 123))(pInstance);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pInstance);
    v27 = CBaseEntity::GetAbsOrigin(pInstance);
    CGamePhysicsQueryInterface::SweepCollideable(g_pPhysicsQuery, pInstance, v27, AbsOrigin, &this->m_pushersOnly, &v30);
    v14 = v28;
    if ( v30.startsolid )
    {
LABEL_30:
      v29 = v14;
      if ( v15 != 0 )
      {
        v15->m_nPushEnumCount = CPushBlockerEnum::s_nEnumCount;
        CPhysicsPushedEntities::AddEntity(this->m_pPushedEntities, v15);
        return v29;
      }
    }
  }
  return 0;
}


// CPhysicsPushedEntities::GenerateBlockingEntityList  (line 741, @0x00000000022f8b80, libserver.so)  // inlines: AddCollisionGroup, AddEntityToHit, AddToTail, CGameQueryAttributes, COverlapList, CPushBlockerEnum, CTraceFilter, CTraceFilterAgainstEntityList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<CBaseEntity*>, Element, EntitiesInBox, GetCollisionGroup, GetCollisionGroup_Inline, GetFloat, GrowMemory, Init, IsSolid, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnoreEntity, SetInteractsWith, SetObjectSetMask, WorldSpaceAABB, operator=, operator[], ~COverlapList, ~CPushBlockerEnum, ~CTraceFilterAgainstEntityList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CPhysicsPushedEntities::PhysicsPushedInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int> >::RemoveAll, CBaseEntity::GetRootMoveParent, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CUtlMemory<CBaseEntity*, int>::Grow, CCollisionProperty::CollisionAABBToWorldAABB, CGamePhysicsQueryInterface::EntitiesInBox, CGamePhysicsQueryInterface::FilterOverlapResults, CUtlMemory<COverlapHit, int>::Purge, CBaseEntity::GetAbsOrigin, CUtlMemory<CBaseEntity*, int>::Purge, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase (15 total)
// callers: CPhysicsPushedEntities::PerformRotatePush, CPhysicsPushedEntities::PerformLinearPush
// globals: CPushBlockerEnum::s_nEnumCount
void __fastcall CPhysicsPushedEntities::GenerateBlockingEntityList(
        CPhysicsPushedEntities *const this,
        const Vector *const vecMoved)
{
  CPhysicsPushedEntities::PhysicsPusherInfo_t *m_pMemory; // rax
  CBaseEntity *RootMoveParent; // rbx
  int m_Size; // r12d
  __int64 i; // rbx
  CCollisionProperty *m_pCollision; // r13
  __int64 v8; // r13
  int v9; // eax
  CBaseEntity **v10; // rax
  CCollisionProperty *v11; // rax
  int m_Value; // edx
  int m_collisionGroupCount; // esi
  CPushBlockerEnum *v14; // rax
  int v15; // r14d
  __int64 j; // rbx
  const CBaseEntity *v17; // r13
  CCollisionProperty *v18; // r12
  const CCollisionProperty *v19; // rdi
  __int64 k; // rax
  float v21; // xmm0_4
  float m_fValue; // xmm0_4
  CGamePhysicsQueryInterface *v23; // r13
  uint32 v24; // eax
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  COverlapList *v29; // [rsp+20h] [rbp-1130h]
  Vector vecAbsMins; // [rsp+30h] [rbp-1120h] BYREF
  Vector vecAbsMaxs; // [rsp+40h] [rbp-1110h] BYREF
  CPushBlockerEnum blockerEnum; // [rsp+50h] [rbp-1100h] BYREF
  COverlapList results; // [rsp+100h] [rbp-1050h] BYREF
  unsigned __int64 v34; // [rsp+1118h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  CUtlVectorBase<CPhysicsPushedEntities::PhysicsPushedInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t,int>>::RemoveAll(&this->m_rgMoved);
  blockerEnum.m_attr.m_nInteractsExclude = 0;
  blockerEnum.m_attr.m_nHierarchyId = 0;
  blockerEnum.m_attr.m_nInteractsAs = 0;
  blockerEnum.m_attr.m_nEntityIdToIgnore = -1;
  blockerEnum.m_attr.m_nCollisionGroup = 4;
  blockerEnum.m_attr.m_nObjectSetMask = 2;
  *(&blockerEnum.m_attr.RnQueryShapeAttr_t + 31) = *(&blockerEnum.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  blockerEnum._vptr_CTraceFilter = off_407F4F0;
  blockerEnum.m_attr.m_nInteractsWith = 552961;
  blockerEnum.m_pPushedEntities = this;
  memset(&blockerEnum.m_pushersOnly.m_attr, 0, 24);
  *(&blockerEnum.m_pushersOnly.m_attr.RnQueryShapeAttr_t + 31) = *(&blockerEnum.m_pushersOnly.m_attr.RnQueryShapeAttr_t
                                                                 + 31)
                                                               & 0xF0
                                                               | 9;
  blockerEnum.m_pushersOnly._vptr_CTraceFilter = off_407F4B0;
  m_pMemory = this->m_rgPusher.m_Memory.m_pMemory;
  blockerEnum.m_pushersOnly.m_attr.m_nEntityIdToIgnore = -1;
  blockerEnum.m_pushersOnly.m_attr.m_nHierarchyId = 0;
  blockerEnum.m_pushersOnly.m_attr.m_nCollisionGroup = 0;
  blockerEnum.m_pushersOnly.m_attr.m_nObjectSetMask = 2;
  blockerEnum.m_pushersOnly.m_entityList.m_Size = 0;
  blockerEnum.m_pushersOnly.m_entityList.m_Memory.m_pMemory = 0;
  blockerEnum.m_pushersOnly.m_entityList.m_Memory.m_nAllocationCount = 0;
  blockerEnum.m_pushersOnly.m_entityList.m_Memory.m_nGrowSize = 0;
  RootMoveParent = CBaseEntity::GetRootMoveParent(m_pMemory->m_pEntity);
  blockerEnum.m_pRootHighestParent = RootMoveParent;
  if ( RootMoveParent != 0 )
  {
    blockerEnum.m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(RootMoveParent);
    blockerEnum.m_attr.m_nHierarchyId = HierarchyIDFromBaseEntity(RootMoveParent);
  }
  blockerEnum.m_collisionGroupCount = 0;
  ++CPushBlockerEnum::s_nEnumCount;
  m_Size = blockerEnum.m_pPushedEntities->m_rgPusher.m_Size;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    m_pCollision = (*(&blockerEnum.m_pPushedEntities->m_rgPusher.m_Memory.m_pMemory->m_pEntity + i))->m_pCollision;
    if ( m_pCollision != 0
      && ((*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 1) != 0
       || (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) != 0)
      && m_pCollision->m_nSolidType.m_Value != SolidType_t::SOLID_NONE )
    {
      v8 = blockerEnum.m_pushersOnly.m_entityList.m_Size;
      v29 = *(&blockerEnum.m_pPushedEntities->m_rgPusher.m_Memory.m_pMemory->m_pEntity + i);
      v9 = blockerEnum.m_pushersOnly.m_entityList.m_Size;
      if ( blockerEnum.m_pushersOnly.m_entityList.m_Size == blockerEnum.m_pushersOnly.m_entityList.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseEntity *,int>::Grow(&blockerEnum.m_pushersOnly.m_entityList.m_Memory, 1);
        v9 = blockerEnum.m_pushersOnly.m_entityList.m_Size;
      }
      blockerEnum.m_pushersOnly.m_entityList.m_Size = v9 + 1;
      v10 = &blockerEnum.m_pushersOnly.m_entityList.m_Memory.m_pMemory[v8];
      if ( v10 != 0 )
        *v10 = v29;
      v11 = (*(&blockerEnum.m_pPushedEntities->m_rgPusher.m_Memory.m_pMemory->m_pEntity + i))->m_pCollision;
      if ( v11 != 0 )
        m_Value = v11->m_CollisionGroup.m_Value;
      else
        m_Value = 4;
      m_collisionGroupCount = blockerEnum.m_collisionGroupCount;
      if ( blockerEnum.m_collisionGroupCount > 0 )
      {
        if ( blockerEnum.m_collisionGroups[0] == m_Value )
          continue;
        v14 = &blockerEnum.m_collisionGroups[1];
        while ( v14 != &blockerEnum.m_collisionGroups[blockerEnum.m_collisionGroupCount - 1 + 1] )
        {
          v14 = (v14 + 4);
          if ( *(&v14[-1].m_collisionGroupCount + 1) == m_Value )
            goto LABEL_4;
        }
      }
      if ( blockerEnum.m_collisionGroupCount <= 7 )
      {
        blockerEnum.m_collisionGroups[blockerEnum.m_collisionGroupCount] = m_Value;
        blockerEnum.m_collisionGroupCount = m_collisionGroupCount + 1;
      }
    }
LABEL_4:
    ;
  }
  v15 = this->m_rgPusher.m_Size;
  for ( j = 24LL * v15 - 24; --v15 >= 0; j -= 24 )
  {
    v17 = *(&this->m_rgPusher.m_Memory.m_pMemory->m_pEntity + j);
    v18 = v17->m_pCollision;
    if ( v18 != 0
      && ((*((*(v18->_vptr_ICollideable + 13))(v17->m_pCollision) + 31) & 1) != 0
       || (*((*(v18->_vptr_ICollideable + 13))(v18) + 31) & 2) != 0)
      && v18->m_nSolidType.m_Value != SolidType_t::SOLID_NONE )
    {
      v19 = v17->m_pCollision;
      if ( v19 != 0 )
      {
        CCollisionProperty::CollisionAABBToWorldAABB(
          v19,
          &v19->m_vecMins.m_Value,
          &v19->m_vecMaxs.m_Value,
          &vecAbsMins,
          &vecAbsMaxs);
      }
      else
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
        y = AbsOrigin->y;
        z = AbsOrigin->z;
        vecAbsMins.x = AbsOrigin->x;
        vecAbsMins.y = y;
        vecAbsMins.z = z;
        vecAbsMaxs = vecAbsMins;
      }
      for ( k = 0; k != 12; k += 4 )
      {
        v21 = *(&vecMoved->x + k);
        if ( v21 < 0.0 )
          *(&vecAbsMaxs.x + k) = *(&vecAbsMaxs.x + k) - v21;
        else
          *(&vecAbsMins.x + k) = *(&vecAbsMins.x + k) - v21;
      }
      results.m_list.m_Size = 0;
      results.m_list.m_Memory.m_nAllocationCount = 64;
      results.m_list.m_Memory.m_nGrowSize = 0x80000000;
      m_fValue = sv_stepsize.m_pParent->m_Value.m_fValue;
      results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
      vecAbsMaxs.z = (m_fValue + m_fValue) + vecAbsMaxs.z;
      v23 = g_pPhysicsQuery;
      CGamePhysicsQueryInterface::EntitiesInBox(
        g_pPhysicsQuery,
        &vecAbsMins,
        &vecAbsMaxs,
        &blockerEnum.m_attr,
        OverlapTest_t::OVERLAP_TEST_SHAPE,
        &results);
      CGamePhysicsQueryInterface::FilterOverlapResults(v23, &results, &blockerEnum);
      results.m_list.m_Size = 0;
      v24 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
      if ( results.m_list.m_Memory.m_nAllocationCount < 0
        || results.m_list.m_Memory.m_pMemory == &results.m_list.m_Memory.m_FixedMemory )
      {
        if ( v24 == 0 )
          CUtlMemory<COverlapHit,int>::Purge(&results.m_list.m_Memory);
      }
      else if ( results.m_list.m_Memory.m_pMemory != 0 && v24 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
    }
  }
  blockerEnum.m_pushersOnly.m_entityList.m_Size = 0;
  blockerEnum._vptr_CTraceFilter = off_407F4F0;
  blockerEnum.m_pushersOnly._vptr_CTraceFilter = off_407F4B0;
  if ( (blockerEnum.m_pushersOnly.m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&blockerEnum.m_pushersOnly.m_entityList.m_Memory);
    if ( (blockerEnum.m_pushersOnly.m_entityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&blockerEnum.m_pushersOnly.m_entityList.m_Memory);
  }
}


// CPhysicsPushedEntities::SetupAllInHierarchy  (line 789, @0x00000000022fa0f0, libserver.so)  // inlines: AddToTail, GrowMemory, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int>::Grow
// callers: CPhysicsPushedEntities::PerformRotatePush, CPhysicsPushedEntities::PerformLinearPush
void __fastcall CPhysicsPushedEntities::SetupAllInHierarchy(CPhysicsPushedEntities *const this, CBaseEntity *pParent)
{
  __int64 m_Size; // r13
  int v5; // eax
  __int64 v6; // r13
  CBaseEntity *i; // rbx

  if ( pParent != 0 )
  {
    m_Size = this->m_rgPusher.m_Size;
    v5 = this->m_rgPusher.m_Size;
    if ( m_Size == this->m_rgPusher.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int>::Grow(&this->m_rgPusher.m_Memory, 1);
      v5 = this->m_rgPusher.m_Size;
    }
    this->m_rgPusher.m_Size = v5 + 1;
    v6 = m_Size;
    this->m_rgPusher.m_Memory.m_pMemory[v6].m_pEntity = pParent;
    this->m_rgPusher.m_Memory.m_pMemory[v6].m_vecStartAbsOrigin = *CBaseEntity::GetAbsOrigin(pParent);
    for ( i = CBaseEntity::FirstMoveChild(pParent); i != 0; i = CBaseEntity::NextMovePeer(i) )
      CPhysicsPushedEntities::SetupAllInHierarchy(this, i);
  }
}


// CPhysicsPushedEntities::RotateRootEntity  (line 815, @0x00000000022d36c0, libserver.so)  // inlines: operator*, operator+=, operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::EntityToWorldTransform, MatrixCopy, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles
// callers: CPhysicsPushedEntities::PerformRotatePush
void __fastcall CPhysicsPushedEntities::RotateRootEntity(
        CPhysicsPushedEntities *const this,
        CBaseEntity *pRoot,
        float movetime,
        CPhysicsPushedEntities::RotatingPushMove_t *const rotation)
{
  vec_t v6; // xmm2_4
  vec_t v7; // xmm1_4
  matrix3x4_t *v8; // rax
  const QAngle *LocalAngles; // rax
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t v12; // xmm0_4
  matrix3x4_t *v13; // rax
  QAngle angles; // [rsp+10h] [rbp-20h] BYREF

  v6 = pRoot->m_vecAngVelocity.y * movetime;
  v7 = pRoot->m_vecAngVelocity.z * movetime;
  rotation->amove.x = movetime * pRoot->m_vecAngVelocity.x;
  rotation->amove.y = v6;
  rotation->amove.z = v7;
  rotation->origin = *CBaseEntity::GetAbsOrigin(pRoot);
  v8 = CBaseEntity::EntityToWorldTransform(pRoot);
  MatrixCopy(v8, &rotation->startLocalToWorld);
  LocalAngles = CBaseEntity::GetLocalAngles(pRoot);
  y = pRoot->m_vecAngVelocity.y;
  z = pRoot->m_vecAngVelocity.z;
  *&angles.x = *&LocalAngles->x;
  *&LocalAngles = LocalAngles->z;
  v12 = (movetime * pRoot->m_vecAngVelocity.x) + angles.x;
  angles.y = (y * movetime) + angles.y;
  angles.x = v12;
  angles.z = (z * movetime) + *&LocalAngles;
  CBaseEntity::SetLocalAngles(pRoot, &angles);
  v13 = CBaseEntity::EntityToWorldTransform(pRoot);
  MatrixCopy(v13, &rotation->endLocalToWorld);
}


// CPhysicsPushedEntities::PerformRotatePush  (line 839, @0x00000000022fa1c0, libserver.so)
// calls: CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int> >::RemoveAll, CPhysicsPushedEntities::SetupAllInHierarchy, CBaseEntity::GetLocalAngles, CPhysicsPushedEntities::RotateRootEntity, CPhysicsPushedEntities::GenerateBlockingEntityList, CPhysicsPushedEntities::RegisterBlockage, CBaseEntity::SetLocalAngles, CPhysicsPushedEntities::RestoreEntities, CPhysicsPushedEntities::FinishPush
// callers: CBaseEntity::PhysicsPushRotate
CBaseEntity *__fastcall CPhysicsPushedEntities::PerformRotatePush(
        CPhysicsPushedEntities *const this,
        CBaseEntity *pRoot,
        float a3,
        float movetime)
{
  CUtlVector<CPhysicsPushedEntities::PhysicsPusherInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int> > *p_m_rgPusher; // rdi
  CBaseEntity *v7; // r13
  QAngle angPrevAngles; // [rsp+10h] [rbp-B0h] BYREF
  CPhysicsPushedEntities::RotatingPushMove_t rotPushMove; // [rsp+20h] [rbp-A0h] BYREF

  p_m_rgPusher = &this->m_rgPusher;
  *(&p_m_rgPusher[2].m_Size + 4) = (pRoot->m_fFlags.m_Value & 0x40000000) != 0;
  CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int>>::RemoveAll(p_m_rgPusher);
  CPhysicsPushedEntities::SetupAllInHierarchy(this, pRoot);
  angPrevAngles = *CBaseEntity::GetLocalAngles(pRoot);
  CPhysicsPushedEntities::RotateRootEntity(this, pRoot, a3, &rotPushMove);
  CPhysicsPushedEntities::GenerateBlockingEntityList(this, &vec3_origin);
  if ( (*this->_vptr_CPhysicsPushedEntities)(this, &rotPushMove, pRoot) != 0 )
  {
    CPhysicsPushedEntities::FinishPush(this, 1, &rotPushMove);
    return 0;
  }
  else
  {
    v7 = CPhysicsPushedEntities::RegisterBlockage(this);
    CBaseEntity::SetLocalAngles(pRoot, &angPrevAngles);
    CPhysicsPushedEntities::RestoreEntities(this);
    return v7;
  }
}


// CPhysicsPushedEntities::LinearlyMoveRootEntity  (line 879, @0x00000000022d37d0, libserver.so)  // inlines: GetAbsVelocity, VectorMultiply, operator*, operator+=, operator=
// calls: CBaseEntity::GetLocalOrigin, CBaseEntity::SetLocalOrigin, CBaseEntity::CalcAbsoluteVelocity
// callers: CPhysicsPushedEntities::PerformLinearPush
void __fastcall CPhysicsPushedEntities::LinearlyMoveRootEntity(
        CPhysicsPushedEntities *const this,
        CBaseEntity *pRoot,
        float movetime,
        Vector *pAbsPushVector)
{
  const Vector *LocalOrigin; // rax
  float v7; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  float v11; // [rsp+0h] [rbp-30h]
  float v12; // [rsp+4h] [rbp-2Ch]
  float v14; // [rsp+Ch] [rbp-24h]
  Vector origin; // [rsp+10h] [rbp-20h] BYREF

  v11 = pRoot->m_vecVelocity.m_Value.x * movetime;
  v12 = pRoot->m_vecVelocity.m_Value.y * movetime;
  v14 = movetime * pRoot->m_vecVelocity.m_Value.z;
  LocalOrigin = CBaseEntity::GetLocalOrigin(pRoot);
  *&origin.x = *&LocalOrigin->x;
  *&LocalOrigin = LocalOrigin->z;
  origin.x = v11 + origin.x;
  origin.y = v12 + origin.y;
  origin.z = v14 + *&LocalOrigin;
  CBaseEntity::SetLocalOrigin(pRoot, &origin);
  v7 = movetime;
  if ( (pRoot->m_iEFlags & 0x1000) != 0 )
  {
    CBaseEntity::CalcAbsoluteVelocity(pRoot);
    v7 = movetime;
  }
  v8 = pRoot->m_vecAbsVelocity.m_Value.y * v7;
  v9 = pRoot->m_vecAbsVelocity.m_Value.z * v7;
  v10 = v7 * pRoot->m_vecAbsVelocity.m_Value.x;
  pAbsPushVector->y = v8;
  pAbsPushVector->z = v9;
  pAbsPushVector->x = v10;
}


// CPhysicsPushedEntities::PerformLinearPush  (line 897, @0x00000000022fa370, libserver.so)
// calls: CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int> >::RemoveAll, CPhysicsPushedEntities::SetupAllInHierarchy, CBaseEntity::GetLocalOrigin, CPhysicsPushedEntities::LinearlyMoveRootEntity, CPhysicsPushedEntities::GenerateBlockingEntityList, CPhysicsPushedEntities::RegisterBlockage, CBaseEntity::SetLocalOrigin, CPhysicsPushedEntities::RestoreEntities, CPhysicsPushedEntities::FinishPush
// callers: CBaseEntity::PhysicsPushMove
CBaseEntity *__fastcall CPhysicsPushedEntities::PerformLinearPush(
        CPhysicsPushedEntities *const this,
        CBaseEntity *pRoot,
        float a3,
        float movetime)
{
  CUtlVector<CPhysicsPushedEntities::PhysicsPusherInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int> > *p_m_rgPusher; // rdi
  CBaseEntity *v7; // r13
  Vector vecPrevOrigin; // [rsp+10h] [rbp-40h] BYREF
  Vector vecAbsPush; // [rsp+20h] [rbp-30h] BYREF

  p_m_rgPusher = &this->m_rgPusher;
  *(&p_m_rgPusher[3].m_Memory.m_pMemory + 1) = a3;
  *(&p_m_rgPusher[2].m_Size + 4) = (pRoot->m_fFlags.m_Value & 0x40000000) != 0;
  CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int>>::RemoveAll(p_m_rgPusher);
  CPhysicsPushedEntities::SetupAllInHierarchy(this, pRoot);
  vecPrevOrigin = *CBaseEntity::GetLocalOrigin(pRoot);
  CPhysicsPushedEntities::LinearlyMoveRootEntity(this, pRoot, a3, &vecAbsPush);
  CPhysicsPushedEntities::GenerateBlockingEntityList(this, &vecAbsPush);
  if ( (*(this->_vptr_CPhysicsPushedEntities + 1))(this, &vecAbsPush) != 0 )
  {
    CPhysicsPushedEntities::FinishPush(this, 0, 0);
    return 0;
  }
  else
  {
    v7 = CPhysicsPushedEntities::RegisterBlockage(this);
    CBaseEntity::SetLocalOrigin(pRoot, &vecPrevOrigin);
    CPhysicsPushedEntities::RestoreEntities(this);
    return v7;
  }
}


// CBaseEntity::PhysicsTryMove  (line 955, @0x00000000022d6730, libserver.so)  // inlines: CGameTrace, CrossProduct, DotProduct, Get, GetAbsVelocity, GetFloat, GetGroundEntity, Init, RnCollisionAttr_t, SetGroundChangeTime, VectorCopy, VectorMA, VectorMultiply, VectorScale, operator=, operator==
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, Physics_TraceEntity, CBaseEntity::SetAbsOrigin, CBaseEntity::PhysicsImpact, CBaseEntity::PhysicsClipVelocity, CBaseEntity::SetAbsVelocity, CEntityHandle::GetHandleEntity, CGlobalVarsBase::curtime, CBaseEntity::SetGroundEntity, CBaseEntity::CalcAbsoluteVelocity, Warning
// callers: CBaseEntity::PhysicsStepRunTimestep
// strings: "PhysicsTryMove: !trace.u.ent"
__int64 __fastcall CBaseEntity::PhysicsTryMove(CBaseEntity *const this, float a2, float flTime, trace_t *steptrace)
{
  __int64 v6; // rax
  bool v7; // zf
  float v8; // xmm5_4
  int v9; // r13d
  float v10; // xmm0_4
  const Vector *AbsOrigin; // rax
  const Vector *v12; // rax
  float v13; // xmm5_4
  float fraction; // xmm0_4
  CBaseEntity *m_pEnt; // rsi
  float v16; // xmm0_4
  uint8 type; // al
  float dist; // xmm0_4
  vec_t v19; // xmm1_4
  uint8 signbits; // al
  vec_t v21; // xmm1_4
  float v22; // xmm0_4
  vec_t v23; // xmm1_4
  __int16 v24; // ax
  vec_t v25; // xmm1_4
  vec_t v26; // xmm1_4
  uint64 contents; // rax
  vec_t v28; // xmm1_4
  const CHitBox *m_pHitbox; // rax
  vec_t v30; // xmm0_4
  IPhysicsBody *m_hBody; // rax
  vec_t v32; // xmm0_4
  IPhysicsShape *m_hShape; // rax
  vec_t v34; // xmm0_4
  uint64 m_nInteractsAs; // rax
  __int64 v36; // rax
  int v37; // r14d
  int v38; // r13d
  Vector *v39; // r12
  Vector *v40; // rax
  int v41; // edx
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  int v45; // r12d
  char v47; // al
  CBaseEntity *HandleEntity; // rax
  CBaseEntity *v49; // rsi
  float v50; // xmm5_4
  float v51; // xmm0_4
  Vector *v52; // r14
  int v53; // r12d
  const Vector *v54; // rdx
  float v55; // xmm0_4
  const Vector *v56; // rdx
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm0_4
  float z; // [rsp+4h] [rbp-1ACh]
  float y; // [rsp+8h] [rbp-1A8h]
  float x; // [rsp+Ch] [rbp-1A4h]
  trace_t *v66; // [rsp+10h] [rbp-1A0h]
  trace_t *v67; // [rsp+10h] [rbp-1A0h]
  uint64 mask; // [rsp+18h] [rbp-198h]
  int v69; // [rsp+20h] [rbp-190h]
  unsigned int blocked; // [rsp+24h] [rbp-18Ch]
  float v71; // [rsp+28h] [rbp-188h]
  float time_left; // [rsp+2Ch] [rbp-184h]
  float out; // [rsp+38h] [rbp-178h]
  float normal; // [rsp+40h] [rbp-170h]
  float normala; // [rsp+40h] [rbp-170h]
  float in; // [rsp+48h] [rbp-168h]
  float ina; // [rsp+48h] [rbp-168h]
  float inb; // [rsp+48h] [rbp-168h]
  float inc; // [rsp+48h] [rbp-168h]
  float ind; // [rsp+48h] [rbp-168h]
  Vector original_velocity; // [rsp+50h] [rbp-160h] BYREF
  Vector new_velocity; // [rsp+60h] [rbp-150h] BYREF
  Vector end; // [rsp+70h] [rbp-140h] BYREF
  Vector vecAbsVelocity; // [rsp+80h] [rbp-130h] BYREF
  Vector planes[5]; // [rsp+90h] [rbp-120h] BYREF
  trace_t trace; // [rsp+D0h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  v6 = (*(this->_vptr_IHandleEntity + 123))(this);
  v7 = (this->m_iEFlags & 0x1000) == 0;
  new_velocity.x = 0.0;
  mask = v6;
  new_velocity.y = 0.0;
  new_velocity.z = 0.0;
  if ( !v7 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  v8 = 0.0;
  v69 = 4;
  v9 = 0;
  blocked = 0;
  vecAbsVelocity = this->m_vecAbsVelocity;
  x = vecAbsVelocity.x;
  v10 = vecAbsVelocity.x;
  original_velocity = vecAbsVelocity;
  y = vecAbsVelocity.y;
  time_left = a2;
  z = vecAbsVelocity.z;
  while ( 1 )
  {
    if ( v10 == vec3_origin.x && vec3_origin.y == vecAbsVelocity.y && vec3_origin.z == vecAbsVelocity.z )
    {
LABEL_31:
      CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
      return blocked;
    }
    in = v8;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    end.x = (vecAbsVelocity.x * time_left) + AbsOrigin->x;
    end.y = (vecAbsVelocity.y * time_left) + AbsOrigin->y;
    end.z = (vecAbsVelocity.z * time_left) + AbsOrigin->z;
    v12 = CBaseEntity::GetAbsOrigin(this);
    Physics_TraceEntity(this, v12, &end, mask, &trace);
    v13 = in;
    if ( trace.startsolid )
    {
      CBaseEntity::SetAbsVelocity(this, &vec3_origin);
      return 4;
    }
    fraction = trace.fraction;
    if ( trace.fraction > in )
    {
      v9 = 0;
      CBaseEntity::SetAbsOrigin(this, &trace.endpos);
      v13 = in;
      original_velocity = vecAbsVelocity;
      fraction = trace.fraction;
    }
    if ( fraction == 1.0 )
      goto LABEL_31;
    m_pEnt = trace.m_pEnt;
    if ( trace.m_pEnt == 0 )
      break;
    v16 = trace.plane.normal.z;
    if ( trace.plane.normal.z > 0.7 )
    {
      inc = v13;
      blocked |= 1u;
      v47 = (*(this->_vptr_IHandleEntity + 104))(this);
      v13 = inc;
      if ( v47 != 0 )
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hGroundEntity.m_Value);
        v49 = trace.m_pEnt;
        v50 = inc;
        if ( trace.m_pEnt != HandleEntity )
        {
          v51 = CGlobalVarsBase::curtime(gpGlobals, 0);
          v49 = trace.m_pEnt;
          v50 = inc;
          this->m_flGroundChangeTime = v51 + (a2 - ((1.0 - trace.fraction) * time_left));
        }
        ind = v50;
        CBaseEntity::SetGroundEntity(this, v49);
        v16 = trace.plane.normal.z;
        m_pEnt = trace.m_pEnt;
        v13 = ind;
      }
      else
      {
        v16 = trace.plane.normal.z;
        m_pEnt = trace.m_pEnt;
      }
    }
    if ( v16 == v13 )
    {
      blocked |= 2u;
      if ( steptrace != 0 )
      {
        type = trace.plane.type;
        steptrace->plane.normal.z = v16;
        dist = trace.plane.dist;
        steptrace->startpos.x = trace.startpos.x;
        v19 = trace.startpos.y;
        steptrace->plane.type = type;
        signbits = trace.plane.signbits;
        steptrace->startpos.y = v19;
        v21 = trace.startpos.z;
        steptrace->plane.dist = dist;
        v22 = trace.fraction;
        steptrace->startpos.z = v21;
        v23 = trace.endpos.x;
        steptrace->plane.signbits = signbits;
        v24 = *trace.plane.pad;
        steptrace->endpos.x = v23;
        v25 = trace.endpos.y;
        steptrace->fraction = v22;
        steptrace->endpos.y = v25;
        v26 = trace.endpos.z;
        *steptrace->plane.pad = v24;
        contents = trace.contents;
        steptrace->endpos.z = v26;
        steptrace->plane.normal.x = trace.plane.normal.x;
        v28 = trace.plane.normal.y;
        steptrace->contents = contents;
        LOBYTE(contents) = trace.startsolid;
        steptrace->plane.normal.y = v28;
        steptrace->startsolid = contents;
        steptrace->m_pSurfaceProperties = trace.m_pSurfaceProperties;
        steptrace->m_pEnt = m_pEnt;
        m_pHitbox = trace.m_pHitbox;
        steptrace->boneLocalPos.x = trace.boneLocalPos.x;
        v30 = trace.boneLocalPos.y;
        steptrace->m_pHitbox = m_pHitbox;
        m_hBody = trace.m_hBody;
        steptrace->boneLocalPos.y = v30;
        steptrace->boneLocalPos.z = trace.boneLocalPos.z;
        v32 = trace.boneLocalNormal.x;
        steptrace->m_hBody = m_hBody;
        m_hShape = trace.m_hShape;
        steptrace->boneLocalNormal.x = v32;
        steptrace->boneLocalNormal.y = trace.boneLocalNormal.y;
        v34 = trace.boneLocalNormal.z;
        steptrace->m_hShape = m_hShape;
        m_nInteractsAs = trace.m_ShapeAttributes.m_nInteractsAs;
        steptrace->boneLocalNormal.z = v34;
        steptrace->m_ShapeAttributes.m_nInteractsAs = m_nInteractsAs;
        steptrace->m_ShapeAttributes.m_nInteractsWith = trace.m_ShapeAttributes.m_nInteractsWith;
        steptrace->m_ShapeAttributes.m_nInteractsExclude = trace.m_ShapeAttributes.m_nInteractsExclude;
        *&steptrace->m_ShapeAttributes.m_nEntityId = *&trace.m_ShapeAttributes.m_nEntityId;
        steptrace->m_nFaceIndex = trace.m_nFaceIndex;
        steptrace->hitboxBoneIndex = trace.hitboxBoneIndex;
        steptrace->unused0 = trace.unused0;
      }
    }
    ina = v13;
    CBaseEntity::PhysicsImpact(this, m_pEnt, &trace);
    if ( (this->m_pEntity->m_flags & 0x200) != 0 )
      goto LABEL_31;
    v8 = ina;
    v71 = trace.fraction;
    if ( v9 > 4 )
      goto LABEL_47;
    v36 = v9++;
    v7 = this->m_MoveType.m_Value == MoveType_t::MOVETYPE_WALK;
    planes[v36] = trace.plane.normal;
    if ( !v7
      || (this->m_fFlags.m_Value & 1) != 0 && (v57 = (*(this->_vptr_IHandleEntity + 168))(this), v8 = ina, v57 == 1.0) )
    {
      v66 = steptrace;
      v37 = v9;
      v38 = 0;
      v39 = planes;
      do
      {
        inb = v8;
        CBaseEntity::PhysicsClipVelocity(this, &original_velocity, v39, &new_velocity, 1.0);
        v40 = planes;
        v41 = 0;
        v42 = new_velocity.x;
        v43 = new_velocity.y;
        v44 = new_velocity.z;
        v8 = inb;
        do
        {
          if ( v41 != v38 && inb > (((v40->x * new_velocity.x) + (v40->y * new_velocity.y)) + (v40->z * new_velocity.z)) )
            break;
          ++v41;
          ++v40;
        }
        while ( v37 > v41 );
        if ( v41 == v37 )
          break;
        ++v38;
        ++v39;
      }
      while ( v37 > v38 );
      v45 = v38;
      v9 = v37;
      steptrace = v66;
      if ( v45 == v9 )
      {
        if ( v45 != 2 )
          goto LABEL_31;
        v58 = (planes[0].y * planes[1].z) - (planes[0].z * planes[1].y);
        v59 = (planes[0].z * planes[1].x) - (planes[1].z * planes[0].x);
        v60 = (planes[0].x * planes[1].y) - (planes[1].x * planes[0].y);
        v61 = ((vecAbsVelocity.x * v58) + (vecAbsVelocity.y * v59)) + (vecAbsVelocity.z * v60);
        v42 = v58 * v61;
        v43 = v59 * v61;
        v44 = v60 * v61;
        vecAbsVelocity.x = v42;
        vecAbsVelocity.y = v43;
        vecAbsVelocity.z = v44;
      }
      else
      {
        vecAbsVelocity = new_velocity;
      }
      if ( inb >= (((v42 * x) + (v43 * y)) + (v44 * z)) )
      {
LABEL_47:
        CBaseEntity::SetAbsVelocity(this, &vec3_origin);
        return blocked;
      }
    }
    else
    {
      v67 = steptrace;
      v52 = planes;
      v53 = 0;
      do
      {
        while ( v52->z > 0.7 )
        {
          v54 = v52;
          ++v53;
          normal = v8;
          ++v52;
          CBaseEntity::PhysicsClipVelocity(this, &original_velocity, v54, &new_velocity, 1.0);
          v8 = normal;
          original_velocity = new_velocity;
          if ( v9 <= v53 )
            goto LABEL_41;
        }
        ++v53;
        out = v8;
        normala = sv_bounce.m_pParent->m_Value.m_fValue;
        v55 = (*(this->_vptr_IHandleEntity + 168))(this);
        v56 = v52++;
        CBaseEntity::PhysicsClipVelocity(this, &original_velocity, v56, &new_velocity, (normala * (1.0 - v55)) + 1.0);
        v8 = out;
      }
      while ( v9 > v53 );
LABEL_41:
      vecAbsVelocity = new_velocity;
      steptrace = v67;
      original_velocity = new_velocity;
    }
    if ( --v69 == 0 )
      goto LABEL_31;
    v10 = vecAbsVelocity.x;
    time_left = time_left - (v71 * time_left);
  }
  CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
  Warning("PhysicsTryMove: !trace.u.ent");
  return 4;
}


// CBaseEntity::PhysicsAddHalfGravity  (line 1135, @0x00000000022d5790, libserver.so)  // inlines: GetAbsVelocity, GetFloat, NetworkStateChanged, Set, SetBaseVelocity, operator!=, operator=
// calls: CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::SetAbsVelocity, CBaseEntity::PhysicsCheckVelocity
// callers: CBaseEntity::PhysicsStepRunTimestep
void __fastcall CBaseEntity::PhysicsAddHalfGravity(CBaseEntity *const this, float a2, float timestep)
{
  float m_flGravity; // xmm1_4
  __m128d v5; // xmm2
  float v6; // xmm0_4
  double v7; // xmm2_8
  double v8; // xmm3_8
  double v9; // xmm4_8
  float v10; // [rsp-8h] [rbp-30h]
  float x; // [rsp-8h] [rbp-30h]
  float v12; // [rsp-4h] [rbp-2Ch]
  float y; // [rsp-4h] [rbp-2Ch]
  Vector vecAbsVelocity; // [rsp+0h] [rbp-28h] BYREF

  m_flGravity = this->m_flGravity;
  if ( m_flGravity == 0.0 )
    m_flGravity = 1.0;
  if ( (this->m_iEFlags & 0x1000) != 0 )
  {
    v10 = a2;
    v12 = m_flGravity;
    CBaseEntity::CalcAbsoluteVelocity(this);
    a2 = v10;
    m_flGravity = v12;
  }
  vecAbsVelocity = this->m_vecAbsVelocity;
  v5 = _mm_cvtps_pd(LODWORD(vecAbsVelocity.z));
  v5.m128d_f64[0] = v5.m128d_f64[0] - m_flGravity * 0.5 * sv_gravity.m_pParent->m_Value.m_fValue * a2;
  v6 = _mm_movedup_pd(v5).m128d_f64[0];
  vecAbsVelocity.z = v6 + (gpGlobals->frametime * this->m_vecBaseVelocity.m_Value.z);
  CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
  if ( this->m_vecBaseVelocity.m_Value.z != 0.0 )
  {
    x = this->m_vecBaseVelocity.m_Value.x;
    y = this->m_vecBaseVelocity.m_Value.y;
    (*(this->_vptr_IHandleEntity + 22))(this, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL, x, y, v7, v8, v9, 0.0);
    this->m_vecBaseVelocity.m_Value.z = 0.0;
    this->m_vecBaseVelocity.m_Value.x = x;
    this->m_vecBaseVelocity.m_Value.y = y;
  }
  CBaseEntity::PhysicsCheckVelocity(this);
}


// CBaseEntity::PhysicsTestEntityPosition  (line 1169, @0x00000000022d3ab0, libserver.so)  // inlines: CGameTrace, RnCollisionAttr_t
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, Physics_TraceEntity
bool __fastcall CBaseEntity::PhysicsTestEntityPosition(CBaseEntity *const this, CBaseEntity **ppEntity)
{
  uint64 v4; // r15
  const Vector *AbsOrigin; // r14
  const Vector *v6; // rax
  bool result; // al
  trace_t trace; // [rsp+0h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  v4 = (*(this->_vptr_IHandleEntity + 123))(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = CBaseEntity::GetAbsOrigin(this);
  Physics_TraceEntity(this, v6, AbsOrigin, v4, &trace);
  result = trace.startsolid;
  if ( trace.startsolid && ppEntity != 0 )
    *ppEntity = trace.m_pEnt;
  return result;
}


// CBaseEntity::PhysicsPushMove  (line 1196, @0x00000000022fa450, libserver.so)  // inlines: IncrementLocalTime, operator==
// calls: CPhysicsPushedEntities::PerformLinearPush
// callers: CBaseEntity::PerformPush
// globals: g_pPushedEntities
CBaseEntity *__fastcall CBaseEntity::PhysicsPushMove(CBaseEntity *const this, float a2, float movetime)
{
  CBaseEntity *result; // rax

  this->m_flLocalTime = this->m_flLocalTime + a2;
  if ( vec3_origin.x != this->m_vecVelocity.m_Value.x
    || vec3_origin.y != this->m_vecVelocity.m_Value.y
    || (result = 0, vec3_origin.z != this->m_vecVelocity.m_Value.z) )
  {
    result = CPhysicsPushedEntities::PerformLinearPush(g_pPushedEntities, this, a2, a2);
    if ( result != 0 )
      this->m_flLocalTime = this->m_flLocalTime - a2;
  }
  return result;
}


// CBaseEntity::PhysicsPushRotate  (line 1223, @0x00000000022fa2c0, libserver.so)  // inlines: IncrementLocalTime, operator==
// calls: CPhysicsPushedEntities::PerformRotatePush
// callers: CBaseEntity::PerformPush
// globals: g_pPushedEntities
CBaseEntity *__fastcall CBaseEntity::PhysicsPushRotate(CBaseEntity *const this, float a2, float movetime)
{
  CBaseEntity *result; // rax

  this->m_flLocalTime = this->m_flLocalTime + a2;
  if ( vec3_angle.x != this->m_vecAngVelocity.x
    || vec3_angle.y != this->m_vecAngVelocity.y
    || (result = 0, vec3_angle.z != this->m_vecAngVelocity.z) )
  {
    result = CPhysicsPushedEntities::PerformRotatePush(g_pPushedEntities, this, a2, a2);
    if ( result != 0 )
      this->m_flLocalTime = this->m_flLocalTime - a2;
  }
  return result;
}


// CBaseEntity::PerformPush  (line 1249, @0x00000000022fa500, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, LookupEntity, Set, ToInt, operator bool, operator!=, operator=
// calls: CPhysicsPushedEntities::BeginPush, CBaseEntity::PhysicsPushRotate, CBaseEntity::VPhysicsGetObject, CBaseEntity::SetMoveDoneTime, CBaseEntity::PhysicsPushMove
// callers: CBaseEntity::PhysicsPusher
// globals: g_pPushedEntities, CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::PerformPush(CBaseEntity *const this, float a2, float movetime)
{
  uint32 m_Index; // r12d
  float v5; // r14d
  CBaseEntity *v6; // rax
  double v7; // xmm0_8
  double v8; // xmm1_8
  CEntityIdentity *m_pEntity; // rcx
  int v10; // edx
  __int16 v11; // di
  uint32 v12; // edx
  unsigned __int16 v13; // cx
  CEntityIdentity *v14; // rsi
  CEntityIdentity *v15; // rdi
  CEntityIdentity *v16; // rcx
  IPhysicsObject *Object; // rax
  float m_flMoveDoneTime; // xmm0_4
  float v19; // xmm1_4
  float m_flLocalTime; // xmm2_4
  float v21; // xmm0_4
  CBaseEntity *flRotateLocalTimeb; // [rsp+8h] [rbp-28h]
  float flRotateLocalTimea; // [rsp+8h] [rbp-28h]

  m_Index = this->m_pBlocker.m_Index;
  CPhysicsPushedEntities::BeginPush(g_pPushedEntities, this);
  if ( a2 <= 0.0 )
    goto LABEL_20;
  if ( vec3_angle.x == this->m_vecAngVelocity.x
    && vec3_angle.y == this->m_vecAngVelocity.y
    && vec3_angle.z == this->m_vecAngVelocity.z )
  {
    v6 = CBaseEntity::PhysicsPushMove(this, a2, a2);
    goto LABEL_28;
  }
  if ( vec3_origin.x == this->m_vecVelocity.m_Value.x
    && vec3_origin.y == this->m_vecVelocity.m_Value.y
    && vec3_origin.z == this->m_vecVelocity.m_Value.z )
  {
    v6 = CBaseEntity::PhysicsPushRotate(this, a2, a2);
    goto LABEL_28;
  }
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flLocalTime)));
  v6 = CBaseEntity::PhysicsPushRotate(this, a2, a2);
  *&v8 = LODWORD(a2);
  if ( v6 == 0 )
  {
    m_flLocalTime = this->m_flLocalTime;
    v21 = a2;
    this->m_flLocalTime = v5;
    flRotateLocalTimea = m_flLocalTime;
    v6 = CBaseEntity::PhysicsPushMove(this, v21, *&v8);
    if ( flRotateLocalTimea > this->m_flLocalTime )
      this->m_flLocalTime = flRotateLocalTimea;
LABEL_28:
    if ( v6 == 0 )
      goto LABEL_29;
  }
  m_pEntity = v6->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_pBlocker.m_Index) = v11 | this->m_pBlocker.m_Index & 0x8000;
    v12 = (v10 << 15) | this->m_pBlocker.m_Index & 0x7FFF;
    this->m_pBlocker.m_Index = v12;
    if ( m_Index == v12 )
      goto LABEL_30;
    goto LABEL_9;
  }
LABEL_29:
  this->m_pBlocker.m_Index = -1;
  v12 = -1;
  if ( m_Index == -1 )
    goto LABEL_30;
LABEL_9:
  if ( m_Index != -1 )
  {
    flRotateLocalTimeb = v6;
    (*(this->_vptr_IHandleEntity + 116))(this, v7, v8);
    v12 = this->m_pBlocker.m_Index;
    v6 = flRotateLocalTimeb;
  }
  if ( v12 + 2 <= 1 )
    goto LABEL_18;
  v13 = this->m_pBlocker.m_Index & 0x7FFF;
  v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v13 >> 9];
  if ( v14 != 0 )
  {
    v15 = &v14[this->m_pBlocker.m_Index & 0x1FF];
    if ( v15 == 0 || v15->m_EHandle.m_Index != v12 )
      goto LABEL_15;
    (*(this->_vptr_IHandleEntity + 114))(this, v6, v7, v8);
    v12 = this->m_pBlocker.m_Index;
LABEL_30:
    if ( v12 + 2 > 1 )
    {
      v13 = this->m_pBlocker.m_Index & 0x7FFF;
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v13 >> 9];
      if ( v14 != 0 )
      {
LABEL_15:
        v16 = &v14[v13 & 0x1FF];
        if ( v16 != 0 && v12 == v16->m_EHandle.m_Index )
          (*(this->_vptr_IHandleEntity + 115))(this, v16->m_pInstance, v7, v8);
      }
    }
  }
LABEL_18:
  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    (*(*Object + 1592LL))(Object);
  }
LABEL_20:
  m_flMoveDoneTime = this->m_flMoveDoneTime;
  v19 = this->m_flLocalTime;
  if ( v19 >= m_flMoveDoneTime && m_flMoveDoneTime > 0.0 )
  {
    CBaseEntity::SetMoveDoneTime(this, -1.0, v19);
    (*(this->_vptr_IHandleEntity + 118))(this);
  }
}


// CBaseEntity::CheckStepSimulationChanged  (line 1363, @0x00000000022d38d0, libserver.so)  // inlines: CreateDataObject, DestroyDataObject, GetDataObject, NetworkStateChanged, Set, SetSimulatedEveryTick, operator=<bool>
// calls: CEntityIdentity::GetDataObject, CGameSceneNode::ForceDirtyOriginAngles, CEntityIdentity::DestroyDataObject, CEntityIdentity::CreateDataObject
// callers: CBaseEntity::SetMoveType, CBaseEntity::StepSimulationThink
void __fastcall CBaseEntity::CheckStepSimulationChanged(CBaseEntity *const this)
{
  CEntityIdentity *m_pEntity; // rdi
  _BYTE *DataObject; // rax
  CBodyComponent::Storage_t m_CBodyComponent; // rcx
  CGameSceneNode *m_pSceneNode; // rdi
  const Vector *p_m_Value; // rsi
  const QAngle *v7; // rdx

  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_STEP )
  {
    if ( !this->m_bSimulatedEveryTick.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bSimulatedEveryTick.m_Value = 1;
    }
    m_pEntity = this->m_pEntity;
    if ( (m_pEntity->m_fDataObjectTypes & 4) == 0 )
    {
      CEntityIdentity::CreateDataObject(m_pEntity, 2);
      (*(g_pStepSimulationManager->_vptr_IStepSimulationManager + 1))(g_pStepSimulationManager, this, 1);
    }
  }
  else if ( (this->m_pEntity->m_fDataObjectTypes & 4) != 0 )
  {
    (*(g_pStepSimulationManager->_vptr_IStepSimulationManager + 1))(g_pStepSimulationManager, this, 0);
    DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 2);
    if ( *DataObject != 0 )
    {
      m_CBodyComponent = this->m_CBodyComponent;
      if ( m_CBodyComponent != 0 )
      {
        m_pSceneNode = m_CBodyComponent->m_pSceneNode;
        if ( m_pSceneNode != 0 )
        {
          p_m_Value = (DataObject + 148);
          if ( *DataObject == 0 )
            p_m_Value = &m_pSceneNode->m_vecOrigin.m_Value;
          v7 = (DataObject + 168);
          if ( DataObject[1] == 0 )
            v7 = &m_pSceneNode->m_angRotation.m_Value;
          CGameSceneNode::ForceDirtyOriginAngles(m_pSceneNode, p_m_Value, v7);
        }
      }
    }
    CEntityIdentity::DestroyDataObject(this->m_pEntity, 2);
  }
}


// CBaseEntity::StepSimulationThink  (line 1409, @0x00000000022d84e0, libserver.so)  // inlines: GetDataObject, Init, LengthSqr, PhysicsRunThink, VectorSubtract, operator-, operator=
// calls: CBaseEntity::CheckStepSimulationChanged, CEntityIdentity::GetDataObject, AngleQuaternion, CBaseEntity::PhysicsStepRunTimestep, CBaseAnimating::GetBaseAnimatingController, CBaseAnimatingController::UpdateStepOrigin, CBaseEntity::GetNextThinkTick, CBaseEntity::IsSimulatingOnAlternateTicks, CGameSceneNode::ForceDirtyOriginAngles, CBaseEntity::PhysicsRunThink
// callers: CBaseEntity::PhysicsStep
void __fastcall CBaseEntity::StepSimulationThink(CBaseEntity *const this, float a2, float dt)
{
  _DWORD *DataObject; // rax
  float v5; // xmm1_4
  _DWORD *v6; // rbx
  char v7; // r14
  char v8; // r13
  int v9; // eax
  int v10; // xmm0_4
  CGlobalVars *v11; // rax
  double v12; // xmm0_8
  vec_t v13; // xmm1_4
  vec_t v14; // xmm1_4
  float v15; // xmm1_4
  CBaseAnimating *v16; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  char *v18; // rbx
  double v19; // xmm0_8
  vec_t v20; // xmm1_4
  vec_t v21; // xmm1_4
  double v22; // xmm0_8
  vec_t v23; // xmm1_4
  float v24; // xmm1_4
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  CGameSceneNode *m_pSceneNode; // r12
  QAngle *p_stepAngles; // rdx
  const Vector *p_m_Value; // rsi
  const Vector *v29; // r13
  const QAngle *v30; // r14
  QAngle stepAngles; // [rsp+10h] [rbp-50h] BYREF
  QAngle v33; // [rsp+20h] [rbp-40h]

  CBaseEntity::CheckStepSimulationChanged(this);
  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 2);
  v6 = DataObject;
  if ( DataObject != 0 )
  {
    DataObject[36] = -1;
    v7 = *DataObject;
    *DataObject = 1;
    v8 = *(DataObject + 1);
    *(DataObject + 1) = 1;
    DataObject[37] = 0;
    DataObject[38] = 0;
    DataObject[39] = 0;
    DataObject[42] = 0;
    DataObject[43] = 0;
    DataObject[44] = 0;
    v9 = DataObject[9];
    v6[2] = v6[10];
    v10 = v6[11];
    v6[1] = v9;
    v6[3] = v10;
    v6[4] = v6[12];
    v11 = gpGlobals;
    v6[5] = v6[13];
    v6[6] = v6[14];
    v6[7] = v6[15];
    v6[8] = v6[16];
    v6[9] = v11->tickcount;
    v12 = (*(this->_vptr_IHandleEntity + 193))(this);
    *&v33.x = v12;
    *(v6 + 12) = v13;
    v33.z = v13;
    v6[10] = LODWORD(v12);
    v6[11] = LODWORD(v33.y);
    *&stepAngles.x = (*(this->_vptr_IHandleEntity + 194))(this);
    stepAngles.z = v14;
    AngleQuaternion(&stepAngles, (v6 + 13));
    CBaseEntity::PhysicsStepRunTimestep(this, a2, v15);
    if ( (this->m_iEFlags & 0x400000) == 0 )
      CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_BASE_ONLY);
    if ( (*(this->_vptr_IHandleEntity + 43))(this) != 0 )
    {
      v16 = (*(this->_vptr_IHandleEntity + 43))(this);
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v16);
      CBaseAnimatingController::UpdateStepOrigin(BaseAnimatingController);
    }
    v18 = CEntityIdentity::GetDataObject(this->m_pEntity, 2);
    if ( v18 != 0 )
    {
      v19 = (*(this->_vptr_IHandleEntity + 193))(this);
      *&v33.x = v19;
      *(v18 + 28) = v20;
      v33.z = v20;
      *(v18 + 26) = LODWORD(v19);
      *(v18 + 27) = LODWORD(v33.y);
      *&v33.x = (*(this->_vptr_IHandleEntity + 194))(this);
      v33.z = v21;
      stepAngles = v33;
      AngleQuaternion(&stepAngles, (v18 + 116));
      v22 = (*(this->_vptr_IHandleEntity + 194))(this);
      *&v33.x = v22;
      *(v18 + 35) = v23;
      v33.z = v23;
      *(v18 + 33) = LODWORD(v22);
      *(v18 + 34) = LODWORD(v33.y);
      *(v18 + 25) = CBaseEntity::GetNextThinkTick(this, 0);
      if ( CBaseEntity::IsSimulatingOnAlternateTicks() )
        ++*(v18 + 25);
      if ( a2 <= 0.0
        || (v24 = *(v18 + 28) - *(v18 + 12),
            (((((*(v18 + 26) - *(v18 + 10)) * (*(v18 + 26) - *(v18 + 10)))
             + ((*(v18 + 27) - *(v18 + 11)) * (*(v18 + 27) - *(v18 + 11))))
            + (v24 * v24))
           / (a2 * a2)) < 16777216.0) )
      {
        if ( *v18 != 0 || v18[1] != 0 )
        {
          m_CBodyComponent = this->m_CBodyComponent;
          if ( m_CBodyComponent != 0 )
          {
            m_pSceneNode = m_CBodyComponent->m_pSceneNode;
            if ( m_pSceneNode != 0 )
            {
              p_stepAngles = &stepAngles;
              p_m_Value = (v18 + 40);
              if ( v7 == 0 )
                p_m_Value = &m_pSceneNode->m_vecOrigin.m_Value;
              if ( v8 == 0 )
                p_stepAngles = &m_pSceneNode->m_angRotation.m_Value;
              v29 = (v18 + 148);
              if ( *v18 == 0 )
                v29 = &m_pSceneNode->m_vecOrigin.m_Value;
              v30 = (v18 + 168);
              if ( v18[1] == 0 )
                v30 = &m_pSceneNode->m_angRotation.m_Value;
              CGameSceneNode::ForceDirtyOriginAngles(m_pSceneNode, p_m_Value, p_stepAngles);
              CGameSceneNode::ForceDirtyOriginAngles(m_pSceneNode, v29, v30);
            }
          }
        }
      }
      else
      {
        *v18 = 0;
        v18[1] = 0;
      }
    }
  }
  else
  {
    CBaseEntity::PhysicsStepRunTimestep(this, a2, v5);
    if ( (this->m_iEFlags & 0x400000) == 0 )
      CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_BASE_ONLY);
  }
}


// CBaseEntity::PhysicsStepRecheckGround  (line 1520, @0x00000000022d71a0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, WorldAlignMaxs, WorldAlignMins
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, UTIL_TraceLineFilterEntity, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetGroundEntity
// callers: CBaseEntity::PhysicsStepRunTimestep
void __fastcall CBaseEntity::PhysicsStepRecheckGround(CBaseEntity *const this)
{
  uint64 v2; // r14
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v4; // r13
  const Vector *AbsOrigin; // rax
  CCollisionProperty *v6; // rdi
  float v7; // xmm0_4
  __int64 v8; // rax
  const Vector *v9; // r13
  const Vector *v10; // rax
  CBaseEntity *v11; // r12
  int v12; // ebx
  float v13; // xmm0_4
  int i; // r13d
  float v15; // xmm3_4
  float v16; // xmm2_4
  bool v17; // zf
  ConVar *m_pParent; // rax
  float m_fValue; // xmm1_4
  float v20; // [rsp+4h] [rbp-1ACh]
  float mins; // [rsp+18h] [rbp-198h]
  float mins_4; // [rsp+1Ch] [rbp-194h]
  float mins_4a; // [rsp+1Ch] [rbp-194h]
  float mins_8; // [rsp+20h] [rbp-190h]
  float v25; // [rsp+24h] [rbp-18Ch]
  float v26; // [rsp+28h] [rbp-188h]
  float v27; // [rsp+28h] [rbp-188h]
  Vector point; // [rsp+30h] [rbp-180h] BYREF
  CTraceFilterSimple v29; // [rsp+40h] [rbp-170h] BYREF
  Ray_t v30; // [rsp+80h] [rbp-130h] BYREF
  trace_t trace; // [rsp+D0h] [rbp-E0h] BYREF

  v2 = (*(this->_vptr_IHandleEntity + 123))(this);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  memset(&trace.m_ShapeAttributes, 0, 31);
  CGameTrace::Init(&trace);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    v4 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
  else
    v4 = &vec3_origin;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = this->m_pCollision;
  v7 = AbsOrigin->z + v4->z;
  mins = AbsOrigin->x + v4->x;
  v20 = AbsOrigin->y + v4->y;
  if ( v6 != 0 )
  {
    v26 = AbsOrigin->z + v4->z;
    v8 = (*(v6->_vptr_ICollideable + 2))(v6);
    v7 = v26;
    v9 = v8;
  }
  else
  {
    v9 = &vec3_origin;
  }
  v27 = v7;
  v10 = CBaseEntity::GetAbsOrigin(this);
  v25 = v10->x + v9->x;
  v11 = this;
  v12 = 0;
  mins_8 = v10->y + v9->y;
  point.z = v27 - 1.0;
  v13 = 0.0;
  while ( 2 )
  {
    for ( i = 0; i != 2; ++i )
    {
      if ( v12 != 0 )
        v15 = v25;
      else
        v15 = mins;
      point.x = v15;
      if ( i != 0 )
        v16 = mins_8;
      else
        v16 = v20;
      v17 = v11->m_pCollision == 0;
      point.y = v16;
      if ( v17 || !v11->m_bIsNPC )
      {
        v30.m_Start.w = v13;
        v30.m_Delta.w = v13;
        m_pParent = phys_traceline_radius.m_pParent;
        v30.m_Delta.y = v16 - v16;
        v30.m_StartOffset.w = v13;
        v30.m_Extents.w = v13;
        v30.m_Delta.z = point.z - point.z;
        m_fValue = m_pParent->m_Value.m_fValue;
        v30.m_Extents.z = v13;
        v30.m_Extents.y = v13;
        v30.m_flRadius = m_fValue;
        v30.m_Extents.x = v13;
        v30.m_StartOffset.z = v13;
        v30.m_StartOffset.y = v13;
        v30.m_Delta.x = v15 - v15;
        v30.m_StartOffset.x = v13;
        mins_4a = v13;
        v30.m_Start.x = v15;
        v30.m_Start.y = v16;
        v30.m_Start.z = point.z;
        v30.m_IsRay = 1;
        v30.m_IsSwept = (((v30.m_Delta.x * v30.m_Delta.x) + (v30.m_Delta.y * v30.m_Delta.y))
                       + (v30.m_Delta.z * v30.m_Delta.z)) != v13;
        CTraceFilterSimple::CTraceFilterSimple(&v29, v11, 4, 0);
        v29.m_attr.m_nInteractsWith |= v2;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v30, &v29, &trace);
        v13 = mins_4a;
        if ( trace.startsolid )
        {
LABEL_18:
          CBaseEntity::SetGroundEntity(v11, trace.m_pEnt);
          return;
        }
      }
      else
      {
        mins_4 = v13;
        UTIL_TraceLineFilterEntity(v11, &point, &point, v2, 4, &trace);
        v13 = mins_4;
        if ( trace.startsolid )
          goto LABEL_18;
      }
    }
    if ( ++v12 != 2 )
      continue;
    break;
  }
}


// CBaseEntity::PhysicsStepRunTimestep  (line 1561, @0x00000000022d80b0, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetFlags, GetFloat, GetWaterLevel, PhysicsCheckWater, VectorCompare, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator+=, operator-=, operator=, operator==, operator[]
// calls: CBaseEntity::PhysicsCheckVelocity, CBaseEntity::SetGroundEntity, CBaseEntity::SetAbsVelocity, CBaseEntity::SimulateAngles, CBaseEntity::PhysicsTryMove, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::PhysicsAddHalfGravity, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::PhysicsStepRecheckGround
// callers: CBaseEntity::StepSimulationThink, CBaseEntity::PhysicsStep
void __fastcall CBaseEntity::PhysicsStepRunTimestep(CBaseEntity *const this, float a2, float timestep)
{
  float v4; // xmm1_4
  unsigned int m_Value; // eax
  int v6; // r14d
  char v7; // r12
  char v8; // r13
  unsigned int v9; // r15d
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm2_4
  float v22; // xmm2_4
  float speed; // [rsp+4h] [rbp-4Ch]
  Vector vecAbsVelocity; // [rsp+10h] [rbp-40h] BYREF

  CBaseEntity::PhysicsCheckVelocity(this);
  m_Value = this->m_fFlags.m_Value;
  v6 = this->m_nWaterLevel.m_Value;
  v7 = m_Value & 1;
  if ( (this->m_iEFlags & 0x1000) != 0 )
  {
    CBaseEntity::CalcAbsoluteVelocity(this);
    m_Value = this->m_fFlags.m_Value;
  }
  v8 = 0;
  v9 = _mm_cvtsi128_si32(LODWORD(this->m_vecAbsVelocity.m_Value.z));
  if ( v7 == 0 )
  {
    v8 = 0;
    if ( (m_Value & 0x400) == 0 && ((m_Value & 0x800) == 0 || this->m_nWaterLevel.m_Value == 0) )
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      if ( v6 <= 1 )
      {
        v8 = 1;
        CBaseEntity::PhysicsAddHalfGravity(this, a2, v4);
        m_Value = this->m_fFlags.m_Value;
      }
      else
      {
        m_Value = this->m_fFlags.m_Value;
        v8 = 0;
      }
    }
  }
  if ( (m_Value & 0x200000) == 0 )
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    if ( vec3_origin.x != this->m_vecAbsVelocity.m_Value.x
      || (v4 = vec3_origin.y) != this->m_vecAbsVelocity.m_Value.y
      || (v20 = vec3_origin.z) != this->m_vecAbsVelocity.m_Value.z
      || vec3_origin.x != this->m_vecBaseVelocity.m_Value.x
      || v4 != this->m_vecBaseVelocity.m_Value.y
      || v20 != this->m_vecBaseVelocity.m_Value.z )
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      vecAbsVelocity = this->m_vecAbsVelocity;
      CBaseEntity::SetGroundEntity(this, 0);
      x = vecAbsVelocity.x;
      y = vecAbsVelocity.y;
      if ( v7 != 0 )
      {
        v19 = fsqrt(
                ((vecAbsVelocity.x * vecAbsVelocity.x) + (vecAbsVelocity.y * vecAbsVelocity.y))
              + (vecAbsVelocity.z * vecAbsVelocity.z));
        if ( v19 == 0.0 )
        {
          z = vecAbsVelocity.z;
        }
        else
        {
          speed = v19;
          v21 = fmaxf(
                  0.0,
                  speed
                - ((fmaxf(sv_stopspeed.m_pParent->m_Value.m_fValue, speed) * a2)
                 * ((*(this->_vptr_IHandleEntity + 168))(this) * sv_friction.m_pParent->m_Value.m_fValue)));
          z = vecAbsVelocity.z;
          v22 = v21 / speed;
          y = vecAbsVelocity.y * v22;
          x = v22 * vecAbsVelocity.x;
        }
      }
      else
      {
        z = vecAbsVelocity.z;
      }
      v13 = y + this->m_vecBaseVelocity.m_Value.y;
      v14 = z + this->m_vecBaseVelocity.m_Value.z;
      vecAbsVelocity.x = x + this->m_vecBaseVelocity.m_Value.x;
      vecAbsVelocity.y = v13;
      vecAbsVelocity.z = v14;
      CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
      CBaseEntity::SimulateAngles(this, a2, v15);
      CBaseEntity::PhysicsCheckVelocity(this);
      CBaseEntity::PhysicsTryMove(this, a2, v16, 0);
      CBaseEntity::PhysicsCheckVelocity(this);
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      v17 = this->m_vecAbsVelocity.m_Value.x - this->m_vecBaseVelocity.m_Value.x;
      v18 = this->m_vecAbsVelocity.m_Value.z - this->m_vecBaseVelocity.m_Value.z;
      vecAbsVelocity.y = this->m_vecAbsVelocity.m_Value.y - this->m_vecBaseVelocity.m_Value.y;
      vecAbsVelocity.x = v17;
      vecAbsVelocity.z = v18;
      CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
      CBaseEntity::PhysicsCheckVelocity(this);
      if ( (this->m_fFlags.m_Value & 1) == 0 )
        CBaseEntity::PhysicsStepRecheckGround(this);
      CBaseEntity::PhysicsTouchTriggers(this, 0);
    }
    m_Value = this->m_fFlags.m_Value;
  }
  if ( (m_Value & 1) != 0 )
  {
    if ( v8 == 0 )
      return;
LABEL_24:
    (*(this->_vptr_IHandleEntity + 122))(this, *_mm_cvtsi32_si128(v9).m128i_i64);
    return;
  }
  if ( v8 != 0 )
  {
    CBaseEntity::PhysicsAddHalfGravity(this, a2, v4);
    if ( (this->m_fFlags.m_Value & 1) != 0 )
      goto LABEL_24;
  }
}


