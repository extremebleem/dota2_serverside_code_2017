
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Swap<COverlapHit>  (line 203, @0x0000000002115ab0, libserver.so)
// callers: CGamePhysicsQueryInterface::EntitiesInBox, CGamePhysicsQueryInterface::EntitiesAlongRay, CGamePhysicsQueryInterface::EntitiesInSphere
void __fastcall Swap<COverlapHit>(COverlapHit *const a, COverlapHit *const b)
{
  uint16 m_nHierarchyId; // r11
  uint64 m_nInteractsAs; // r14
  uint64 m_nInteractsWith; // r13
  uint64 m_nInteractsExclude; // r12
  uint8 m_nCollisionGroup; // r10
  uint8 m_nCollisionFunctionMask; // r9
  uint32 m_nEntityId; // ebx
  const CPhysSurfaceProperties *m_pSurfaceProperties; // r8
  IPhysicsBody *m_hBody; // rcx
  IPhysicsShape *m_hShape; // rdx
  bool m_bHitboxHit; // al

  m_nHierarchyId = a->m_ShapeAttributes.m_nHierarchyId;
  m_nInteractsAs = a->m_ShapeAttributes.m_nInteractsAs;
  m_nInteractsWith = a->m_ShapeAttributes.m_nInteractsWith;
  m_nInteractsExclude = a->m_ShapeAttributes.m_nInteractsExclude;
  a->m_ShapeAttributes.m_nInteractsAs = b->m_ShapeAttributes.m_nInteractsAs;
  m_nCollisionGroup = a->m_ShapeAttributes.m_nCollisionGroup;
  m_nCollisionFunctionMask = a->m_ShapeAttributes.m_nCollisionFunctionMask;
  m_nEntityId = a->m_ShapeAttributes.m_nEntityId;
  m_pSurfaceProperties = a->m_pSurfaceProperties;
  a->m_ShapeAttributes.m_nInteractsWith = b->m_ShapeAttributes.m_nInteractsWith;
  m_hBody = a->m_hBody;
  m_hShape = a->m_hShape;
  m_bHitboxHit = a->m_bHitboxHit;
  a->m_ShapeAttributes.m_nInteractsExclude = b->m_ShapeAttributes.m_nInteractsExclude;
  *&a->m_ShapeAttributes.m_nEntityId = *&b->m_ShapeAttributes.m_nEntityId;
  a->m_pSurfaceProperties = b->m_pSurfaceProperties;
  a->m_hBody = b->m_hBody;
  a->m_hShape = b->m_hShape;
  a->m_bHitboxHit = b->m_bHitboxHit;
  b->m_ShapeAttributes.m_nInteractsAs = m_nInteractsAs;
  b->m_ShapeAttributes.m_nEntityId = m_nEntityId;
  b->m_ShapeAttributes.m_nInteractsExclude = m_nInteractsExclude;
  b->m_ShapeAttributes.m_nInteractsWith = m_nInteractsWith;
  b->m_ShapeAttributes.m_nHierarchyId = m_nHierarchyId;
  b->m_ShapeAttributes.m_nCollisionGroup = m_nCollisionGroup;
  b->m_ShapeAttributes.m_nCollisionFunctionMask = m_nCollisionFunctionMask;
  b->m_pSurfaceProperties = m_pSurfaceProperties;
  b->m_hBody = m_hBody;
  b->m_hShape = m_hShape;
  b->m_bHitboxHit = m_bHitboxHit;
}


// IGenericInterface::~IGenericInterface  (line 688, @0x0000000001b2c2f0, libserver.so)
void __fastcall IGenericInterface::~IGenericInterface(IGenericInterface *const this)
{
  this->_vptr_IGenericInterface = off_3F79210;  // vptr: IGenericInterface
}


// IGenericInterface::~IGenericInterface  (line 688, @0x0000000001b2c620, libserver.so)  // inlines: ~IGenericInterface
// calls: operator delete
void __fastcall IGenericInterface::~IGenericInterface(IGenericInterface *const this)
{
  this->_vptr_IGenericInterface = off_3F79210;  // vptr: IGenericInterface
  operator delete(this);
}


