
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavVolumeMarkupVolume::~CNavVolumeMarkupVolume  (line 28, @0x0000000002f05220, libserver.so)  // inlines: ~CNavAreaFilter, ~CNavVolume, ~_Function_base, ~function
void __fastcall CNavVolumeMarkupVolume::~CNavVolumeMarkupVolume(CNavVolumeMarkupVolume *const this)
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


// CNavVolumeMarkupVolume::~CNavVolumeMarkupVolume  (line 28, @0x0000000002f055d0, libserver.so)  // inlines: ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeMarkupVolume, ~_Function_base, ~function
// calls: operator delete
void __fastcall CNavVolumeMarkupVolume::~CNavVolumeMarkupVolume(CNavVolumeMarkupVolume *const this)
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


// CNavVolumeMarkupVolume::Schema_DynamicBinding  (line 30, @0x0000000002f05b70, libserver.so)
// calls: CNavVolumeMarkupVolume::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNavVolumeMarkupVolume::Schema_DynamicBinding(
        const CNavVolumeMarkupVolume *const this)
{
  CNavVolumeMarkupVolume::Schema_VerifyBindingIsRegistered();
  return CNavVolumeMarkupVolume::s_pSchemaBinding;
}


// CNavVolumeMarkupVolume::GetExtent  (line 54, @0x0000000002f04e00, libserver.so)  // inlines: Init, operator=
void __fastcall CNavVolumeMarkupVolume::GetExtent(const CNavVolumeMarkupVolume *const this, Extent *pExtentOut)
{
  pExtentOut->lo = this->m_vWorldMins;
  pExtentOut->hi = this->m_vWorldMaxs;
}


// CNavVolumeBreadthFirstSearch::Schema_DynamicBinding  (line 76, @0x0000000002f05b90, libserver.so)
// calls: CNavVolumeBreadthFirstSearch::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNavVolumeBreadthFirstSearch::Schema_DynamicBinding(
        const CNavVolumeBreadthFirstSearch *const this)
{
  CNavVolumeBreadthFirstSearch::Schema_VerifyBindingIsRegistered();
  return CNavVolumeBreadthFirstSearch::s_pSchemaBinding;
}


// CNavVolumeBreadthFirstSearch::GetExtent  (line 120, @0x0000000002f04e50, libserver.so)
void __fastcall CNavVolumeBreadthFirstSearch::GetExtent(
        const CNavVolumeBreadthFirstSearch *const this,
        Extent *pExtentOut)
{
  ;
}


// CNavVolumeBreadthFirstSearch::OverlapsExtent  (line 125, @0x0000000002f04e60, libserver.so)
bool __fastcall CNavVolumeBreadthFirstSearch::OverlapsExtent(
        const CNavVolumeBreadthFirstSearch *const this,
        const Extent *const rTestExtent)
{
  return 0;
}


// CNavVolumeBreadthFirstSearch::CalcCellList  (line 131, @0x0000000002f04e70, libserver.so)
void __fastcall CNavVolumeBreadthFirstSearch::CalcCellList(
        const CNavVolumeBreadthFirstSearch *const this,
        NavCellList_t *const rVecCellListOut)
{
  ;
}


