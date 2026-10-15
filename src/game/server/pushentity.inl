
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsPushedEntities::~CPhysicsPushedEntities  (line 18, @0x00000000023100c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CPhysicsPushedEntities::PhysicsPushedInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int> >::RemoveAll, CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int> >::RemoveAll, CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int>::Purge, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int>::Purge
void __fastcall CPhysicsPushedEntities::~CPhysicsPushedEntities(CPhysicsPushedEntities *const this)
{
  this->_vptr_CPhysicsPushedEntities = &off_407F470;
  CUtlVectorBase<CPhysicsPushedEntities::PhysicsPushedInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t,int>>::RemoveAll(&this->m_rgMoved);
  if ( (this->m_rgMoved.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t,int>::Purge(&this->m_rgMoved.m_Memory);
    if ( (this->m_rgMoved.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t,int>::Purge(&this->m_rgMoved.m_Memory);
  }
  CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t,CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int>>::RemoveAll(&this->m_rgPusher);
  if ( (this->m_rgPusher.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int>::Purge(&this->m_rgPusher.m_Memory);
    if ( (this->m_rgPusher.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t,int>::Purge(&this->m_rgPusher.m_Memory);
  }
}


// CTraceFilterPushMove::~CTraceFilterPushMove  (line 127, @0x0000000002304830, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterPushMove::~CTraceFilterPushMove(CTraceFilterPushMove *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterPushMove::~CTraceFilterPushMove  (line 127, @0x0000000002305700, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterPushMove, ~CTraceFilterSimple
// calls: operator delete
void __fastcall CTraceFilterPushMove::~CTraceFilterPushMove(CTraceFilterPushMove *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterPushMove::ShouldHitEntity  (line 139, @0x0000000002307bd0, libserver.so)
// calls: UTIL_EntityHasMatchingRootParent, CTraceFilterSimple::ShouldHitEntity, CBaseEntity::VPhysicsGetObject
bool __fastcall CTraceFilterPushMove::ShouldHitEntity(CTraceFilterPushMove *const this, CBaseEntity *pTestEntity)
{
  bool result; // al
  IPhysicsObject *Object; // rax

  result = !UTIL_EntityHasMatchingRootParent(this->m_pRootParent, pTestEntity)
        && (pTestEntity->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS
         || CBaseEntity::VPhysicsGetObject(pTestEntity) == 0
         || (Object = CBaseEntity::VPhysicsGetObject(pTestEntity), (*(*Object + 1512LL))(Object) == 0))
        && CTraceFilterSimple::ShouldHitEntity(this, pTestEntity);
  return result;
}


