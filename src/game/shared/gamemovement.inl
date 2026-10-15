
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameMovement::~CGameMovement  (line 35, @0x0000000002280ac0, libserver.so)  // inlines: Purge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~IGameMovement
// calls: CUtlRBTree<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int, CUtlMap<CEntityIndex, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CGameMovement::~CGameMovement(CGameMovement *const this)
{
  bool v2; // zf

  this->_vptr_IGameMovement = off_404F270;
  CUtlRBTree<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short,CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapLastVelocitySpewTime.m_Tree);
  v2 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree = -1;
  if ( !v2 )
  {
    this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
LABEL_3:
    this->_vptr_IGameMovement = off_404F1F0;
    return;
  }
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
  v2 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
  if ( !v2 )
    goto LABEL_3;
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
  this->_vptr_IGameMovement = off_404F1F0;
}


// CGameMovement::~CGameMovement  (line 35, @0x0000000002280b60, libserver.so)  // inlines: Purge, ~CGameMovement, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~IGameMovement
// calls: CUtlRBTree<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int, CUtlMap<CEntityIndex, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CGameMovement::~CGameMovement(CGameMovement *const this)
{
  bool v2; // zf

  this->_vptr_IGameMovement = off_404F270;
  CUtlRBTree<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short,CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapLastVelocitySpewTime.m_Tree);
  v2 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
    v2 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
  }
  this->_vptr_IGameMovement = off_404F1F0;
  operator delete(this);
}


// CGameMovement::Init  (line 42, @0x000000000227aaf0, libserver.so)
bool __fastcall CGameMovement::Init(CGameMovement *const this)
{
  return 1;
}


// CGameMovement::Shutdown  (line 43, @0x000000000227ab00, libserver.so)
void __fastcall CGameMovement::Shutdown(CGameMovement *const this)
{
  this->player = 0;
}


// CGameMovement::Reset  (line 44, @0x000000000227ab10, libserver.so)
void __fastcall CGameMovement::Reset(CGameMovement *const this)
{
  this->player = 0;
}


// CGameMovement::GetPlayerMins  (line 52, @0x000000000227c4c0, libserver.so)
// calls: SafeGetViewVectors
const Vector *__fastcall CGameMovement::GetPlayerMins(const CGameMovement *const this, bool bDucked)
{
  if ( bDucked )
    return &SafeGetViewVectors()->m_vDuckHullMin;
  else
    return &SafeGetViewVectors()->m_vHullMin;
}


// CGameMovement::GetPlayerMaxs  (line 53, @0x000000000227c4f0, libserver.so)
// calls: SafeGetViewVectors
const Vector *__fastcall CGameMovement::GetPlayerMaxs(const CGameMovement *const this, bool bDucked)
{
  if ( bDucked )
    return &SafeGetViewVectors()->m_vDuckHullMax;
  else
    return &SafeGetViewVectors()->m_vHullMax;
}


// CGameMovement::CanPlayerSwim  (line 101, @0x000000000227ab20, libserver.so)
bool __fastcall CGameMovement::CanPlayerSwim(CGameMovement *const this)
{
  return 1;
}


// CGameMovement::CanStayOnGround  (line 119, @0x000000000227ab30, libserver.so)
bool __fastcall CGameMovement::CanStayOnGround(const CGameMovement *const this)
{
  return 1;
}


// CGameMovement::OnTryPlayerMoveCollision  (line 126, @0x000000000227ab40, libserver.so)
void __fastcall CGameMovement::OnTryPlayerMoveCollision(CGameMovement *const this, trace_t *const tr)
{
  ;
}


// CGameMovement::CheckLungeButton  (line 161, @0x000000000227ab50, libserver.so)
void __fastcall CGameMovement::CheckLungeButton(CGameMovement *const this)
{
  ;
}


// CGameMovement::FullCustomMove  (line 173, @0x000000000227ab60, libserver.so)
void __fastcall CGameMovement::FullCustomMove(CGameMovement *const this)
{
  ;
}


// CGameMovement::TryAirPlayerMove  (line 177, @0x000000000227ab70, libserver.so)
int __fastcall CGameMovement::TryAirPlayerMove(CGameMovement *const this)
{
  return (*(this->_vptr_IGameMovement + 42))(this, 0, 0);
}


// CGameMovement::HandleCustomCollision  (line 178, @0x000000000227ab90, libserver.so)
void __fastcall CGameMovement::HandleCustomCollision(
        CGameMovement *const this,
        const Vector *const start,
        const Vector *const end,
        trace_t *trace)
{
  ;
}


// CGameMovement::LadderDistance  (line 182, @0x000000000227aba0, libserver.so)
float __fastcall CGameMovement::LadderDistance(const CGameMovement *const this)
{
  return 2.0;
}


// CGameMovement::LadderMask  (line 183, @0x000000000227abb0, libserver.so)
uint64 __fastcall CGameMovement::LadderMask(const CGameMovement *const this)
{
  return 552977;
}


// CGameMovement::ClimbSpeed  (line 184, @0x000000000227abc0, libserver.so)
float __fastcall CGameMovement::ClimbSpeed(const CGameMovement *const this)
{
  return 200.0;
}


// CGameMovement::LadderLateralMultiplier  (line 185, @0x000000000227abd0, libserver.so)
float __fastcall CGameMovement::LadderLateralMultiplier(const CGameMovement *const this)
{
  return 1.0;
}


// CGameMovement::CanBeStuck  (line 206, @0x000000000227abe0, libserver.so)
bool __fastcall CGameMovement::CanBeStuck(CGameMovement *const this)
{
  return 0;
}


// CGameMovement::TracePlayerBBox  (line 314, @0x000000000227d190, libserver.so)  // inlines: EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGamePhysicsQueryInterface::TraceRay
void __fastcall CGameMovement::TracePlayerBBox(
        CGameMovement *const this,
        const Vector *const start,
        const Vector *const end,
        uint64 fMask,
        int collisionGroup,
        trace_t *const pm)
{
  float *v10; // r12
  float *v11; // rax
  float x; // xmm6_4
  float y; // xmm5_4
  float v14; // xmm3_4
  float z; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  int (**vptr_IGameMovement)(...); // rax
  float v20; // xmm0_4
  CTraceFilter *v21; // rax
  CTraceFilter *pFilter; // [rsp+18h] [rbp-88h] BYREF
  Ray_t ray; // [rsp+20h] [rbp-80h] BYREF

  ++this->m_nTraceCount;
  v10 = (*(this->_vptr_IGameMovement + 32))(this);
  v11 = (*(this->_vptr_IGameMovement + 31))(this);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  x = start->x;
  ray.m_Extents.w = 0.0;
  y = start->y;
  ray.m_flRadius = 0.0;
  v14 = end->y;
  z = start->z;
  v16 = end->z;
  ray.m_Delta.x = end->x - x;
  ray.m_Delta.y = v14 - y;
  ray.m_Delta.z = v16 - z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.x = *v10 - *v11;
  ray.m_Extents.y = v10[1] - v11[1];
  v17 = v10[2] - v11[2];
  ray.m_Extents.x = ray.m_Extents.x * 0.5;
  ray.m_Extents.y = ray.m_Extents.y * 0.5;
  ray.m_Extents.z = v17 * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.x = *v11 + *v10;
  ray.m_StartOffset.y = v11[1] + v10[1];
  v18 = v11[2];
  vptr_IGameMovement = this->_vptr_IGameMovement;
  ray.m_Start.x = x + (ray.m_StartOffset.x * 0.5);
  v20 = (v18 + v10[2]) * 0.5;
  ray.m_StartOffset.x = -(ray.m_StartOffset.x * 0.5);
  ray.m_Start.y = y + (ray.m_StartOffset.y * 0.5);
  ray.m_StartOffset.y = -(ray.m_StartOffset.y * 0.5);
  ray.m_StartOffset.z = -v20;
  ray.m_Start.z = z + v20;
  v21 = (vptr_IGameMovement[77])(this, collisionGroup);
  v21->m_attr.m_nInteractsWith |= fMask;
  pFilter = v21;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, v21, pm);
  (*(this->_vptr_IGameMovement + 78))(this, &pFilter);
}


