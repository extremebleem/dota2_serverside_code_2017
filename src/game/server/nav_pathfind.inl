
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavBreadthFirstSearch::~CNavBreadthFirstSearch  (line 266, @0x0000000002f09560, libserver.so)  // inlines: Purge, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~_Function_base, ~function
// calls: CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge
// callers: CNavSearchHexLattice::CNavSearchHexLattice, CPathCostRecorder::DebugDraw, NavBreadthFirstSearch<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >, NavBreadthFirstSearch<DrawSelectionSet>, NavBreadthFirstSearch<ClusterMarker>, CNavVolumeBreadthFirstSearch::DoSearch, nav_flood_select
void __fastcall CNavBreadthFirstSearch::~CNavBreadthFirstSearch(CNavBreadthFirstSearch *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavBreadthFirstSearch = off_47AE210;  // vptr: CNavBreadthFirstSearch
  M_manager = this->m_funcOnSearchArea._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_funcOnSearchArea._M_functor,
      &this->m_funcOnSearchArea._M_functor,
      std::_Manager_operation::__destroy_functor);
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&this->m_SearchHash);
  if ( (this->m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&this->m_SearchHash.m_table);
}


// CNavBreadthFirstSearch::~CNavBreadthFirstSearch  (line 266, @0x0000000002f095c0, libserver.so)  // inlines: Purge, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~_Function_base, ~function
// calls: CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, operator delete
void __fastcall CNavBreadthFirstSearch::~CNavBreadthFirstSearch(CNavBreadthFirstSearch *const this)
{
  std::_Function_base::_Manager_type M_manager; // rax

  this->_vptr_CNavBreadthFirstSearch = off_47AE210;  // vptr: CNavBreadthFirstSearch
  M_manager = this->m_funcOnSearchArea._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_funcOnSearchArea._M_functor,
      &this->m_funcOnSearchArea._M_functor,
      std::_Manager_operation::__destroy_functor);
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&this->m_SearchHash);
  if ( (this->m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&this->m_SearchHash.m_table);
  operator delete(this);
}


// NavBreadthFirstSearch<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >  (line 355, @0x0000000002f0fd00, libserver.so)  // inlines: CNavBreadthFirstSearch, CNavBreadthFirstSearch<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >, CNavSearchHash, CUtlHashtable, CUtlMemory, Purge, SetFlags, SetTeamIdForBlockedCheck, operator=<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >, swap, swap<NavSearchAreaResult_t (*)(const std::_Any_data&, CNavArea&, NavSearchAreaInfo_t*)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~_Function_base, ~function
// calls: CNavBreadthFirstSearch::BreadthFirstSearch, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, CNavBreadthFirstSearch::~CNavBreadthFirstSearch, _Unwind_Resume, __stack_chk_fail
// callers: CNavDrawArea::DrawConnectedAreas
// globals: std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<std::function<NavSearchAreaResult_t ()(CNavArea &,NavSe
void __fastcall NavBreadthFirstSearch<std::function<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *)>>(
        CNavArea *pStartArea,
        NavHull_t navHull,
        std::function<NavSearchAreaResult_t(CNavArea&,NavSearchAreaInfo_t*)> *const rFuncOnSearchArea,
        uint32 nConnectionFlags,
        int nTeamId,
        float flMaxCost)
{
  __int64 v6; // [rsp+18h] [rbp-A8h]
  CNavBreadthFirstSearch theSearch; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v8; // [rsp+A8h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  if ( pStartArea != 0 )
  {
    theSearch.m_NavHull = navHull;
    theSearch.m_SearchHash.m_bSizeLocked = 0;
    theSearch._vptr_CNavBreadthFirstSearch = off_47AE210;
    memset(&theSearch.m_SearchHash, 0, 20);
    theSearch.m_SearchHash.m_nMinSize = 1024;
    theSearch.m_pCostFunc = 0;
    theSearch.m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta = v6;
    theSearch.m_funcOnSearchArea._M_functor._M_unused._M_object = rFuncOnSearchArea;
    theSearch.m_funcOnSearchArea._M_manager = std::_Function_base::_Ref_manager<std::function<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *)>>::_M_manager;
    theSearch.m_funcOnSearchArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<std::function<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *)>>>::_M_invoke;
    theSearch.m_nConnectionFlags = nConnectionFlags;
    theSearch.m_nTeamIdForBlockedCheck = nTeamId;
    CNavBreadthFirstSearch::BreadthFirstSearch(&theSearch, pStartArea, flMaxCost, flMaxCost);
    theSearch._vptr_CNavBreadthFirstSearch = off_47AE210;
    if ( theSearch.m_funcOnSearchArea._M_manager != 0 )
      theSearch.m_funcOnSearchArea._M_manager(
        &theSearch.m_funcOnSearchArea,
        &theSearch.m_funcOnSearchArea,
        std::_Manager_operation::__destroy_functor);
    CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&theSearch.m_SearchHash);
    if ( (theSearch.m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&theSearch.m_SearchHash.m_table);
  }
}


// NavBreadthFirstSearch<DrawSelectionSet>  (line 355, @0x0000000002f0fe60, libserver.so)  // inlines: CNavBreadthFirstSearch, CNavBreadthFirstSearch<DrawSelectionSet>, CNavSearchHash, CUtlHashtable, CUtlMemory, Purge, SetFlags, SetTeamIdForBlockedCheck, operator=<DrawSelectionSet>, swap, swap<NavSearchAreaResult_t (*)(const std::_Any_data&, CNavArea&, NavSearchAreaInfo_t*)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~_Function_base, ~function
// calls: CNavBreadthFirstSearch::BreadthFirstSearch, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, CNavBreadthFirstSearch::~CNavBreadthFirstSearch, _Unwind_Resume, __stack_chk_fail
// callers: CNavEditor::DrawEditMode
// globals: std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<DrawSelectionSet>>::_M_invoke(std::_Any_data const&,CNa
void __fastcall NavBreadthFirstSearch<DrawSelectionSet>(
        CNavArea *pStartArea,
        NavHull_t navHull,
        DrawSelectionSet *const rFuncOnSearchArea,
        uint32 nConnectionFlags,
        int nTeamId,
        float flMaxCost)
{
  __int64 v6; // [rsp+18h] [rbp-A8h]
  CNavBreadthFirstSearch theSearch; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v8; // [rsp+A8h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  if ( pStartArea != 0 )
  {
    theSearch.m_NavHull = navHull;
    theSearch.m_SearchHash.m_bSizeLocked = 0;
    theSearch._vptr_CNavBreadthFirstSearch = off_47AE210;
    memset(&theSearch.m_SearchHash, 0, 20);
    theSearch.m_SearchHash.m_nMinSize = 1024;
    theSearch.m_pCostFunc = 0;
    theSearch.m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta = v6;
    theSearch.m_funcOnSearchArea._M_functor._M_unused._M_object = rFuncOnSearchArea;
    theSearch.m_funcOnSearchArea._M_manager = std::_Function_base::_Ref_manager<DrawSelectionSet>::_M_manager;
    theSearch.m_funcOnSearchArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<DrawSelectionSet>>::_M_invoke;
    theSearch.m_nConnectionFlags = nConnectionFlags;
    theSearch.m_nTeamIdForBlockedCheck = nTeamId;
    CNavBreadthFirstSearch::BreadthFirstSearch(&theSearch, pStartArea, flMaxCost, flMaxCost);
    theSearch._vptr_CNavBreadthFirstSearch = off_47AE210;
    if ( theSearch.m_funcOnSearchArea._M_manager != 0 )
      theSearch.m_funcOnSearchArea._M_manager(
        &theSearch.m_funcOnSearchArea,
        &theSearch.m_funcOnSearchArea,
        std::_Manager_operation::__destroy_functor);
    CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&theSearch.m_SearchHash);
    if ( (theSearch.m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&theSearch.m_SearchHash.m_table);
  }
}


// NavBreadthFirstSearch<ClusterMarker>  (line 355, @0x0000000002f0ffc0, libserver.so)  // inlines: CNavBreadthFirstSearch, CNavBreadthFirstSearch<ClusterMarker>, CNavSearchHash, CUtlHashtable, CUtlMemory, Purge, SetFlags, SetTeamIdForBlockedCheck, operator=<ClusterMarker>, swap, swap<NavSearchAreaResult_t (*)(const std::_Any_data&, CNavArea&, NavSearchAreaInfo_t*)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~_Function_base, ~function
// calls: CNavBreadthFirstSearch::BreadthFirstSearch, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, CNavBreadthFirstSearch::~CNavBreadthFirstSearch, _Unwind_Resume, __stack_chk_fail
// callers: CNavQuery::SelectRandomNavAreasAtDensityInClustersOverVolume
// globals: std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<ClusterMarker>>::_M_invoke(std::_Any_data const&,CNavAr
void __fastcall NavBreadthFirstSearch<ClusterMarker>(
        CNavArea *pStartArea,
        NavHull_t navHull,
        ClusterMarker *const rFuncOnSearchArea,
        uint32 nConnectionFlags,
        int nTeamId,
        float flMaxCost)
{
  __int64 v6; // [rsp+18h] [rbp-A8h]
  CNavBreadthFirstSearch theSearch; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v8; // [rsp+A8h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  if ( pStartArea != 0 )
  {
    theSearch.m_NavHull = navHull;
    theSearch.m_SearchHash.m_bSizeLocked = 0;
    theSearch._vptr_CNavBreadthFirstSearch = off_47AE210;
    memset(&theSearch.m_SearchHash, 0, 20);
    theSearch.m_SearchHash.m_nMinSize = 1024;
    theSearch.m_pCostFunc = 0;
    theSearch.m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta = v6;
    theSearch.m_funcOnSearchArea._M_functor._M_unused._M_object = rFuncOnSearchArea;
    theSearch.m_funcOnSearchArea._M_manager = std::_Function_base::_Ref_manager<ClusterMarker>::_M_manager;
    theSearch.m_funcOnSearchArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<ClusterMarker>>::_M_invoke;
    theSearch.m_nConnectionFlags = nConnectionFlags;
    theSearch.m_nTeamIdForBlockedCheck = nTeamId;
    CNavBreadthFirstSearch::BreadthFirstSearch(&theSearch, pStartArea, flMaxCost, flMaxCost);
    theSearch._vptr_CNavBreadthFirstSearch = off_47AE210;
    if ( theSearch.m_funcOnSearchArea._M_manager != 0 )
      theSearch.m_funcOnSearchArea._M_manager(
        &theSearch.m_funcOnSearchArea,
        &theSearch.m_funcOnSearchArea,
        std::_Manager_operation::__destroy_functor);
    CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&theSearch.m_SearchHash);
    if ( (theSearch.m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&theSearch.m_SearchHash.m_table);
  }
}


// CNavSearchHexLattice::~CNavSearchHexLattice  (line 581, @0x0000000002f10200, libserver.so)  // inlines: Purge, Purge_FixedGrowable, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~_Function_base, ~function
// calls: CUtlVectorBase<HexIndex_t, CUtlMemoryFixedGrowable<HexIndex_t, 1024ul, int> >::RemoveAll, CUtlMemory<HexIndex_t, int>::ConvertToExternalMemory, CUtlMemory<HexIndex_t, int>::Purge, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge
// callers: CNavEditor::UpdateSelection, NavSearch::GetNearestNav
void __fastcall CNavSearchHexLattice::~CNavSearchHexLattice(CNavSearchHexLattice *const this)
{
  CUtlVectorBase<HexIndex_t,CUtlMemoryFixedGrowable<HexIndex_t,1024ul,int> >::CAllocator *p_m_Memory; // r12
  std::_Function_base::_Manager_type M_manager; // rax
  std::_Function_base::_Manager_type v4; // rax

  this->_vptr_CNavBreadthFirstSearch = off_47AE230;  // vptr: CNavSearchHexLattice
  p_m_Memory = &this->m_Hexes.m_Memory;
  CUtlVectorBase<HexIndex_t,CUtlMemoryFixedGrowable<HexIndex_t,1024ul,int>>::RemoveAll(&this->m_Hexes);
  CUtlMemory<HexIndex_t,int>::ConvertToExternalMemory(
    p_m_Memory,
    &this->m_Hexes.m_Memory.m_FixedMemory,
    1024,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_Hexes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<HexIndex_t,int>::Purge(p_m_Memory);
  M_manager = this->m_funcOnSearchPos._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_funcOnSearchPos._M_functor,
      &this->m_funcOnSearchPos._M_functor,
      std::_Manager_operation::__destroy_functor);
  this->_vptr_CNavBreadthFirstSearch = off_47AE210;  // vptr: CNavBreadthFirstSearch
  v4 = this->m_funcOnSearchArea._M_manager;
  if ( v4 != 0 )
    v4(
      &this->m_funcOnSearchArea._M_functor,
      &this->m_funcOnSearchArea._M_functor,
      std::_Manager_operation::__destroy_functor);
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&this->m_SearchHash);
  if ( (this->m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&this->m_SearchHash.m_table);
}


// CNavSearchHexLattice::~CNavSearchHexLattice  (line 581, @0x0000000002f102d0, libserver.so)  // inlines: Purge, Purge_FixedGrowable, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CNavSearchHexLattice, ~CUtlHashtable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~_Function_base, ~function
// calls: CUtlVectorBase<HexIndex_t, CUtlMemoryFixedGrowable<HexIndex_t, 1024ul, int> >::RemoveAll, CUtlMemory<HexIndex_t, int>::ConvertToExternalMemory, CUtlMemory<HexIndex_t, int>::Purge, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, operator delete
void __fastcall CNavSearchHexLattice::~CNavSearchHexLattice(CNavSearchHexLattice *const this)
{
  CUtlVectorBase<HexIndex_t,CUtlMemoryFixedGrowable<HexIndex_t,1024ul,int> >::CAllocator *p_m_Memory; // r12
  std::_Function_base::_Manager_type M_manager; // rax
  std::_Function_base::_Manager_type v4; // rax

  this->_vptr_CNavBreadthFirstSearch = off_47AE230;  // vptr: CNavSearchHexLattice
  p_m_Memory = &this->m_Hexes.m_Memory;
  CUtlVectorBase<HexIndex_t,CUtlMemoryFixedGrowable<HexIndex_t,1024ul,int>>::RemoveAll(&this->m_Hexes);
  CUtlMemory<HexIndex_t,int>::ConvertToExternalMemory(
    p_m_Memory,
    &this->m_Hexes.m_Memory.m_FixedMemory,
    1024,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_Hexes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<HexIndex_t,int>::Purge(p_m_Memory);
  M_manager = this->m_funcOnSearchPos._M_manager;
  if ( M_manager != 0 )
    M_manager(
      &this->m_funcOnSearchPos._M_functor,
      &this->m_funcOnSearchPos._M_functor,
      std::_Manager_operation::__destroy_functor);
  this->_vptr_CNavBreadthFirstSearch = off_47AE210;  // vptr: CNavBreadthFirstSearch
  v4 = this->m_funcOnSearchArea._M_manager;
  if ( v4 != 0 )
    v4(
      &this->m_funcOnSearchArea._M_functor,
      &this->m_funcOnSearchArea._M_functor,
      std::_Manager_operation::__destroy_functor);
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&this->m_SearchHash);
  if ( (this->m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&this->m_SearchHash.m_table);
  operator delete(this);
}


