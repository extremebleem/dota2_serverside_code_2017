
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavVolume::Schema_DynamicBinding  (line 42, @0x000000000320a410, libserver.so)
// calls: CNavVolume::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNavVolume::Schema_DynamicBinding(const CNavVolume *const this)
{
  CNavVolume::Schema_VerifyBindingIsRegistered();
  return CNavVolume::s_pSchemaBinding;
}


// CNavVolume::~CNavVolume  (line 49, @0x000000000320a1e0, libserver.so)  // inlines: ~CNavAreaFilter, ~_Function_base, ~function
void __fastcall CNavVolume::~CNavVolume(CNavVolume *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
}


// CNavVolume::~CNavVolume  (line 49, @0x000000000320a350, libserver.so)  // inlines: ~CNavAreaFilter, ~CNavVolume, ~_Function_base, ~function
// calls: operator delete
void __fastcall CNavVolume::~CNavVolume(CNavVolume *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
  operator delete(this);
}


// CNavVolumeVector::~CNavVolumeVector  (line 132, @0x000000000320a4b0, libserver.so)  // inlines: Purge, RemoveAll, ~CNavAreaFilter, ~CNavVolume, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: CUtlMemory<CNavArea*, int>::Purge
void __fastcall CNavVolumeVector::~CNavVolumeVector(CNavVolumeVector *const this)
{
  bool v2; // zf
  std::_Function_base::_Manager_type M_manager; // rax
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CNavVolume = &off_47CE5B0;
  this->m_FilteredAreas.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_FilteredAreas.m_Memory;
    CUtlMemory<CNavArea *,int>::Purge(&this->m_FilteredAreas.m_Memory);
    if ( (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(p_m_Memory);
  }
  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
}


// CNavVolumeVector::~CNavVolumeVector  (line 132, @0x000000000320a7a0, libserver.so)  // inlines: Purge, RemoveAll, ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: operator delete, CUtlMemory<CNavArea*, int>::Purge
void __fastcall CNavVolumeVector::~CNavVolumeVector(CNavVolumeVector *const this)
{
  bool v2; // zf
  std::_Function_base::_Manager_type M_manager; // rax
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CNavVolume = &off_47CE5B0;
  this->m_FilteredAreas.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_FilteredAreas.m_Memory;
    CUtlMemory<CNavArea *,int>::Purge(&this->m_FilteredAreas.m_Memory);
    if ( (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(p_m_Memory);
  }
  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
  operator delete(this);
}


// CNavVolumeVector::Schema_DynamicBinding  (line 134, @0x000000000320a430, libserver.so)
// calls: CNavVolumeVector::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNavVolumeVector::Schema_DynamicBinding(const CNavVolumeVector *const this)
{
  CNavVolumeVector::Schema_VerifyBindingIsRegistered();
  return CNavVolumeVector::s_pSchemaBinding;
}


// CNavVolumeVector::ContainsArea  (line 158, @0x000000000320a8a0, libserver.so)  // inlines: FilterArea
// calls: CNavAreaFilter::FilterArea
bool __fastcall CNavVolumeVector::ContainsArea(const CNavVolumeVector *const this, const CNavArea *const rTestArea)
{
  return !this->m_bFilterActive || CNavAreaFilter::FilterArea(&this->m_AreaFilter, rTestArea);
}


// CNavVolumeVector::GetExtent  (line 164, @0x000000000320a220, libserver.so)
void __fastcall CNavVolumeVector::GetExtent(const CNavVolumeVector *const this, Extent *pExtentOut)
{
  ;
}


// CNavVolumeVector::OverlapsExtent  (line 169, @0x000000000320a230, libserver.so)
bool __fastcall CNavVolumeVector::OverlapsExtent(const CNavVolumeVector *const this, const Extent *const rTestExtent)
{
  return 0;
}


// CNavVolumeVector::CalcCellList  (line 175, @0x000000000320a240, libserver.so)
void __fastcall CNavVolumeVector::CalcCellList(
        const CNavVolumeVector *const this,
        NavCellList_t *const rVecCellListOut)
{
  ;
}


// CNavVolumeAll::~CNavVolumeAll  (line 200, @0x000000000320a530, libserver.so)  // inlines: Purge, RemoveAll, ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: CUtlMemory<CNavArea*, int>::Purge
void __fastcall CNavVolumeAll::~CNavVolumeAll(CNavVolumeAll *const this)
{
  bool v2; // zf
  std::_Function_base::_Manager_type M_manager; // rax
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CNavVolume = &off_47CE5B0;
  this->m_FilteredAreas.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_FilteredAreas.m_Memory;
    CUtlMemory<CNavArea *,int>::Purge(&this->m_FilteredAreas.m_Memory);
    if ( (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(p_m_Memory);
  }
  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
}


// CNavVolumeAll::~CNavVolumeAll  (line 200, @0x000000000320a820, libserver.so)  // inlines: Purge, RemoveAll, ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeAll, ~CNavVolumeVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: operator delete, CUtlMemory<CNavArea*, int>::Purge
void __fastcall CNavVolumeAll::~CNavVolumeAll(CNavVolumeAll *const this)
{
  bool v2; // zf
  std::_Function_base::_Manager_type M_manager; // rax
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CNavVolume = &off_47CE5B0;
  this->m_FilteredAreas.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_FilteredAreas.m_Memory;
    CUtlMemory<CNavArea *,int>::Purge(&this->m_FilteredAreas.m_Memory);
    if ( (this->m_FilteredAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(p_m_Memory);
  }
  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
  operator delete(this);
}


// CNavVolumeAll::Schema_DynamicBinding  (line 202, @0x000000000320a450, libserver.so)
// calls: CNavVolumeAll::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNavVolumeAll::Schema_DynamicBinding(const CNavVolumeAll *const this)
{
  CNavVolumeAll::Schema_VerifyBindingIsRegistered();
  return CNavVolumeAll::s_pSchemaBinding;
}


// CNavVolumeSphere::~CNavVolumeSphere  (line 213, @0x000000000320a2c0, libserver.so)  // inlines: ~CNavAreaFilter, ~CNavVolume, ~_Function_base, ~function
void __fastcall CNavVolumeSphere::~CNavVolumeSphere(CNavVolumeSphere *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
}


// CNavVolumeSphere::~CNavVolumeSphere  (line 213, @0x000000000320a390, libserver.so)  // inlines: ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeSphere, ~_Function_base, ~function
// calls: operator delete
void __fastcall CNavVolumeSphere::~CNavVolumeSphere(CNavVolumeSphere *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
  operator delete(this);
}


// CNavVolumeSphere::Schema_DynamicBinding  (line 215, @0x000000000320a470, libserver.so)
// calls: CNavVolumeSphere::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNavVolumeSphere::Schema_DynamicBinding(const CNavVolumeSphere *const this)
{
  CNavVolumeSphere::Schema_VerifyBindingIsRegistered();
  return CNavVolumeSphere::s_pSchemaBinding;
}


// CNavVolumeSphere::ParamsChanged  (line 232, @0x000000000320a250, libserver.so)
void __fastcall CNavVolumeSphere::ParamsChanged(CNavVolumeSphere *const this)
{
  ;
}


// CNavVolumeSphere::ContainsArea  (line 234, @0x000000000320a8d0, libserver.so)  // inlines: FilterArea
// calls: CNavPoly::IsOverlappingSphere, CNavVolume::DrawAreaGeometryReject, CNavAreaFilter::FilterArea
bool __fastcall CNavVolumeSphere::ContainsArea(const CNavVolumeSphere *const this, const CNavArea *const rTestArea)
{
  float v2; // xmm1_4
  bool result; // al

  if ( CNavPoly::IsOverlappingSphere(rTestArea, &this->m_vCenter, this->m_flRadius, v2) )
  {
    result = 1;
    if ( this->m_bFilterActive )
      return CNavAreaFilter::FilterArea(&this->m_AreaFilter, rTestArea);
  }
  else if ( this->m_nDebugLevel <= 1 )
  {
    return 0;
  }
  else
  {
    CNavVolume::DrawAreaGeometryReject(rTestArea);
    return 0;
  }
  return result;
}


// CNavVolumeSphere::GetExtent  (line 248, @0x000000000320a260, libserver.so)  // inlines: Init, VectorAdd, VectorSubtract, operator+, operator-, operator=
void __fastcall CNavVolumeSphere::GetExtent(const CNavVolumeSphere *const this, Extent *pExtentOut)
{
  float m_flRadius; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t v5; // xmm3_4

  m_flRadius = this->m_flRadius;
  y = this->m_vCenter.y;
  z = this->m_vCenter.z;
  v5 = this->m_vCenter.x + m_flRadius;
  pExtentOut->lo.x = this->m_vCenter.x - m_flRadius;
  pExtentOut->hi.x = v5;
  pExtentOut->hi.y = y + m_flRadius;
  pExtentOut->lo.y = y - m_flRadius;
  pExtentOut->lo.z = z - m_flRadius;
  pExtentOut->hi.z = m_flRadius + z;
}


// CNavVolumeSphere::OverlapsExtent  (line 255, @0x000000000320a5b0, libserver.so)  // inlines: DistSqToPoint, IsOverlappingSphere, Square<float>
bool __fastcall CNavVolumeSphere::OverlapsExtent(const CNavVolumeSphere *const this, const Extent *const rTestExtent)
{
  float x; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float y; // xmm2_4
  float z; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4

  x = this->m_vCenter.x;
  if ( rTestExtent->lo.x <= x )
  {
    v11 = rTestExtent->hi.x;
    if ( x > v11 )
    {
      y = rTestExtent->lo.y;
      v3 = x - v11;
      v4 = this->m_vCenter.y;
      if ( y > v4 )
        goto LABEL_4;
      goto LABEL_11;
    }
    v3 = 0.0;
  }
  else
  {
    v3 = rTestExtent->lo.x - x;
  }
  v4 = this->m_vCenter.y;
  y = rTestExtent->lo.y;
  if ( y > v4 )
  {
LABEL_4:
    v3 = y - v4;
    goto LABEL_5;
  }
LABEL_11:
  v12 = rTestExtent->hi.y;
  if ( v4 <= v12 )
  {
LABEL_5:
    z = this->m_vCenter.z;
    v7 = rTestExtent->lo.z;
    if ( v7 <= z )
      goto LABEL_6;
LABEL_13:
    v9 = (v7 - z) * (v7 - z);
    return (this->m_flRadius * this->m_flRadius) > (((v3 * v3) + 0.0) + v9);
  }
  v13 = v4;
  v7 = rTestExtent->lo.z;
  v3 = v13 - v12;
  z = this->m_vCenter.z;
  if ( v7 > z )
    goto LABEL_13;
LABEL_6:
  v8 = rTestExtent->hi.z;
  if ( z <= v8 )
    v9 = 0.0;
  else
    v9 = (z - v8) * (z - v8);
  return (this->m_flRadius * this->m_flRadius) > (((v3 * v3) + 0.0) + v9);
}


// CNavVolumeSphericalShell::~CNavVolumeSphericalShell  (line 269, @0x000000000320a310, libserver.so)  // inlines: ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeSphere, ~_Function_base, ~function
void __fastcall CNavVolumeSphericalShell::~CNavVolumeSphericalShell(CNavVolumeSphericalShell *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
}


// CNavVolumeSphericalShell::~CNavVolumeSphericalShell  (line 269, @0x000000000320a3d0, libserver.so)  // inlines: ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeSphere, ~CNavVolumeSphericalShell, ~_Function_base, ~function
// calls: operator delete
void __fastcall CNavVolumeSphericalShell::~CNavVolumeSphericalShell(CNavVolumeSphericalShell *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavVolume = &off_47CE530;
  M_manager = this->m_AreaFilter.m_FilterFunc._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      &this->m_AreaFilter.m_FilterFunc._M_functor,
      std::_Manager_operation::__destroy_functor);
  operator delete(this);
}


// CNavVolumeSphericalShell::Schema_DynamicBinding  (line 271, @0x000000000320a490, libserver.so)
// calls: CNavVolumeSphericalShell::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNavVolumeSphericalShell::Schema_DynamicBinding(
        const CNavVolumeSphericalShell *const this)
{
  CNavVolumeSphericalShell::Schema_VerifyBindingIsRegistered();
  return CNavVolumeSphericalShell::s_pSchemaBinding;
}


// CNavVolumeSphericalShell::ParamsChanged  (line 289, @0x000000000320a300, libserver.so)
void __fastcall CNavVolumeSphericalShell::ParamsChanged(CNavVolumeSphericalShell *const this)
{
  ;
}


// CNavVolumeSphericalShell::ContainsArea  (line 295, @0x000000000320a930, libserver.so)  // inlines: FilterArea
// calls: CNavPoly::IsOverlappingSphere, CNavVolume::DrawAreaGeometryReject, CNavAreaFilter::FilterArea
bool __fastcall CNavVolumeSphericalShell::ContainsArea(
        const CNavVolumeSphericalShell *const this,
        const CNavArea *const rTestArea)
{
  float v2; // xmm1_4
  Vector *p_m_vCenter; // r13
  bool IsOverlappingSphere; // r14
  float v7; // xmm1_4
  bool result; // al

  p_m_vCenter = &this->m_vCenter;
  IsOverlappingSphere = CNavPoly::IsOverlappingSphere(rTestArea, &this->m_vCenter, this->m_flRadius, v2);
  if ( CNavPoly::IsOverlappingSphere(rTestArea, p_m_vCenter, this->m_flRadiusInner, v7) || !IsOverlappingSphere )
  {
    if ( this->m_nDebugLevel <= 1 )
    {
      return 0;
    }
    else
    {
      CNavVolume::DrawAreaGeometryReject(rTestArea);
      return 0;
    }
  }
  else
  {
    result = 1;
    if ( this->m_bFilterActive )
      return CNavAreaFilter::FilterArea(&this->m_AreaFilter, rTestArea);
  }
  return result;
}


// CNavVolumeSphericalShell::OverlapsExtent  (line 311, @0x000000000320a690, libserver.so)  // inlines: DistSqToPoint, IsOverlappingSphere, Square<float>
bool __fastcall CNavVolumeSphericalShell::OverlapsExtent(
        const CNavVolumeSphericalShell *const this,
        const Extent *const rTestExtent)
{
  float x; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float y; // xmm2_4
  float z; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4

  x = this->m_vCenter.x;
  if ( rTestExtent->lo.x <= x )
  {
    v11 = rTestExtent->hi.x;
    if ( x > v11 )
    {
      y = rTestExtent->lo.y;
      v3 = x - v11;
      v4 = this->m_vCenter.y;
      if ( y > v4 )
        goto LABEL_4;
      goto LABEL_11;
    }
    v3 = 0.0;
  }
  else
  {
    v3 = rTestExtent->lo.x - x;
  }
  v4 = this->m_vCenter.y;
  y = rTestExtent->lo.y;
  if ( y > v4 )
  {
LABEL_4:
    v3 = y - v4;
    goto LABEL_5;
  }
LABEL_11:
  v12 = rTestExtent->hi.y;
  if ( v4 <= v12 )
  {
LABEL_5:
    z = this->m_vCenter.z;
    v7 = rTestExtent->lo.z;
    if ( v7 <= z )
      goto LABEL_6;
LABEL_13:
    v9 = (v7 - z) * (v7 - z);
    return (this->m_flRadius * this->m_flRadius) > (((v3 * v3) + 0.0) + v9)
        && (this->m_flRadiusInner * this->m_flRadiusInner) <= (((v3 * v3) + 0.0) + v9);
  }
  v13 = v4;
  v7 = rTestExtent->lo.z;
  v3 = v13 - v12;
  z = this->m_vCenter.z;
  if ( v7 > z )
    goto LABEL_13;
LABEL_6:
  v8 = rTestExtent->hi.z;
  if ( z <= v8 )
    v9 = 0.0;
  else
    v9 = (z - v8) * (z - v8);
  return (this->m_flRadius * this->m_flRadius) > (((v3 * v3) + 0.0) + v9)
      && (this->m_flRadiusInner * this->m_flRadiusInner) <= (((v3 * v3) + 0.0) + v9);
}


