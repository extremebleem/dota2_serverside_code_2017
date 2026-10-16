// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_commands.cpp:50
class RadiusSelect {
private:

	float m_flRadiusSquared;  // +0xc
	int m_nSelected;  // +0x10

	const CNavSelectionSet & m_rSelectionSet;  // +0x18
	RadiusSelect(CNavSelectionSet &, const Vector &, float);
	bool operator()(CNavArea *);
	int GetNumSelected();

	// sizeof = 32
};

// src/game/server/nav_commands.cpp:113
class SelectCollector {
	int m_nCount;  // +0x0

	const CNavSelectionSet & m_rSelectionSet;  // +0x8
	SelectCollector(CNavSelectionSet &);
	NavSearchAreaResult_t operator()(CNavArea &, NavSearchAreaInfo_t *);

	// sizeof = 16
};

// src/game/server/nav_commands.cpp:1440
class Subdivider {
	int m_nDepth;  // +0x0
	float GetPolySizeX(const CNavPoly &);
	float GetPolySizeY(const CNavPoly &);
	Subdivider(int);
	bool operator()(CNavArea *);
	void SubdivideX(CNavArea *, bool, bool, int);
	void SubdivideY(CNavArea *, bool, bool, int);

	// sizeof = 4
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CommandNavDelete  (line 28, @0x0000000002f01160, libserver.so)  // inlines: GetBool, GetInt
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavDelete
void __fastcall CommandNavDelete(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() && nav_edit.m_pParent->m_Value.m_nValue != 0 )
    CNavEditor::CommandNavDelete(TheNavMesh->m_pEditor);
}


// CommandNavDeleteMarked  (line 39, @0x0000000002ee6860, libserver.so)  // inlines: GetBool, GetInt
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavDeleteMarked
void __fastcall CommandNavDeleteMarked(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() && nav_edit.m_pParent->m_Value.m_nValue != 0 )
    CNavEditor::CommandNavDeleteMarked(TheNavMesh->m_pEditor);
}


// nav_select_radius  (line 89, @0x0000000002eea770, libserver.so)  // inlines: AddToSet, AddToTail, CopyConstruct<CNavArea*>, DistToSqr, Element, ForAllAreas<RadiusSelect>, GrowMemory, IsInSet, LengthSqr, RadiusSelect, atof, operator(), operator=, operator[]
// calls: UTIL_IsCommandIssuedByServerAdmin, strtod, UTIL_GetListenServerHost, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CNavPoly::GetClosestPointOnPoly, Msg, CUtlMemory<CNavArea*, int>::Grow
// strings: "%d areas added to selection\n", "Needs a radius\n"
void __fastcall nav_select_radius(const CCommandContext *const ctx, const CCommand *const args)
{
  __m128d v3; // xmm0
  float v4; // xmm3_4
  CBasePlayer *ListenServerHost; // rax
  const Vector *AbsOrigin; // rax
  CNavMesh *v7; // r12
  CNavSelectionSet *p_m_SelectionSet; // rdi
  vec_t z; // xmm0_4
  int m_Size; // eax
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  CNavArea *v13; // rbx
  int v14; // eax
  CNavSelectionSet *v15; // rcx
  int m_nSelected; // esi
  __int64 v17; // rax
  int v18; // esi
  CNavArea **v19; // rax
  int v20; // [rsp+4h] [rbp-8Ch]
  CNavSelectionSet *m_rSelectionSet; // [rsp+8h] [rbp-88h]
  float radius; // [rsp+18h] [rbp-78h]
  CNavArea *src; // [rsp+20h] [rbp-70h] BYREF
  CNavArea *v24; // [rsp+28h] [rbp-68h] BYREF
  Vector ClosestPointOnPoly; // [rsp+30h] [rbp-60h]
  RadiusSelect select; // [rsp+40h] [rbp-50h] BYREF

  if ( UTIL_IsCommandIssuedByServerAdmin() && (*(*engine + 160LL))(engine) == 0 )
  {
    if ( args->m_nArgc <= 1 )
    {
      Msg("Needs a radius\n");
    }
    else
    {
      v3.m128d_f64[0] = strtod(args->m_ppArgv[1], 0);
      v4 = _mm_movedup_pd(v3).m128d_f64[0];
      radius = v4;
      ListenServerHost = UTIL_GetListenServerHost();
      if ( ListenServerHost != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(ListenServerHost);
        v7 = TheNavMesh;
        p_m_SelectionSet = &TheNavMesh->m_SelectionSet;
        select.m_rSelectionSet = &TheNavMesh->m_SelectionSet;
        select.m_vOrigin.x = AbsOrigin->x;
        select.m_vOrigin.y = AbsOrigin->y;
        z = AbsOrigin->z;
        select.m_nSelected = 0;
        select.m_vOrigin.z = z;
        select.m_flRadiusSquared = radius * radius;
        m_Size = TheNavMesh->m_NavAreas.m_Size;
        if ( m_Size != 0 )
        {
          v11 = 0;
          v12 = 8LL * (m_Size - 1) + 8;
          while ( 1 )
          {
            v13 = v7->m_NavAreas.m_Memory.m_pMemory[v11 / 8];
            src = v13;
            if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&p_m_SelectionSet->m_SetAreas, &src) == -1
              && (ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(v13, &select.m_vOrigin),
                  select.m_flRadiusSquared > ((((ClosestPointOnPoly.x - select.m_vOrigin.x)
                                              * (ClosestPointOnPoly.x - select.m_vOrigin.x))
                                             + ((ClosestPointOnPoly.y - select.m_vOrigin.y)
                                              * (ClosestPointOnPoly.y - select.m_vOrigin.y)))
                                            + ((ClosestPointOnPoly.z - select.m_vOrigin.z)
                                             * (ClosestPointOnPoly.z - select.m_vOrigin.z)))) )
            {
              v24 = v13;
              if ( v13 != 0 )
              {
                m_rSelectionSet = select.m_rSelectionSet;
                v14 = CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(
                        &select.m_rSelectionSet->m_SetAreas,
                        &v24);
                v15 = m_rSelectionSet;
                if ( v14 == -1 )
                {
                  v17 = m_rSelectionSet->m_SetAreas.m_Size;
                  v18 = m_rSelectionSet->m_SetAreas.m_Size;
                  if ( v17 == m_rSelectionSet->m_SetAreas.m_Memory.m_nAllocationCount )
                  {
                    v20 = m_rSelectionSet->m_SetAreas.m_Size;
                    CUtlMemory<CNavArea *,int>::Grow(&m_rSelectionSet->m_SetAreas.m_Memory, 1);
                    v15 = m_rSelectionSet;
                    v17 = v20;
                    v18 = m_rSelectionSet->m_SetAreas.m_Size;
                  }
                  v15->m_SetAreas.m_Size = v18 + 1;
                  v19 = &v15->m_SetAreas.m_Memory.m_pMemory[v17];
                  if ( v19 != 0 )
                    *v19 = v13;
                }
              }
              ++select.m_nSelected;
              v11 += 8LL;
              if ( v11 == v12 )
              {
LABEL_15:
                m_nSelected = select.m_nSelected;
                goto LABEL_16;
              }
            }
            else
            {
              v11 += 8LL;
              if ( v11 == v12 )
                goto LABEL_15;
            }
            p_m_SelectionSet = select.m_rSelectionSet;
          }
        }
        m_nSelected = 0;
LABEL_16:
        Msg("%d areas added to selection\n", m_nSelected);
      }
    }
  }
}


// nav_flood_select  (line 140, @0x0000000002f011e0, libserver.so)  // inlines: Arg, CNavBreadthFirstSearch, CNavBreadthFirstSearch<SelectCollector>, CNavSearchHash, CUtlHashtable, CUtlMemory, FStrEq, NavBreadthFirstSearch<SelectCollector>, Purge, SelectCollector, SetFlags, SetTeamIdForBlockedCheck, _V_strcmp, operator=<SelectCollector>, operator[], swap, swap<NavSearchAreaResult_t (*)(const std::_Any_data&, CNavArea&, NavSearchAreaInfo_t*)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~_Function_base, ~function
// calls: UTIL_IsCommandIssuedByServerAdmin, UTIL_GetListenServerHost, CBaseEntity::EmitSound, CNavEditor::GetAreaForFloodSelect, CNavBreadthFirstSearch::BreadthFirstSearch, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, Msg, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, __stack_chk_fail, CNavBreadthFirstSearch::~CNavBreadthFirstSearch, _Unwind_Resume
// strings: "EDIT_DELETE", "Selected %d areas.\n"
// globals: g_NavHullAAQuad, std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<SelectCollector>>::_M_invoke(std::_Any_data const&,CNav
void __fastcall nav_flood_select(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // rax
  CNavArea *AreaForFloodSelect; // rax
  float v5; // xmm1_4
  uint32 v6; // edx
  double v7; // xmm0_8
  char *v8; // r8
  SelectCollector collector; // [rsp+0h] [rbp-C0h] BYREF
  SelectCollector *p_collector; // [rsp+10h] [rbp-B0h]
  __int64 v11; // [rsp+18h] [rbp-A8h]
  CNavBreadthFirstSearch v12; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v13; // [rsp+A8h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 )
    {
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
      AreaForFloodSelect = CNavEditor::GetAreaForFloodSelect(TheNavMesh->m_pEditor);
      if ( AreaForFloodSelect != 0 )
      {
        v6 = 0;
        if ( args->m_nArgc == 2 )
        {
          v8 = args->m_ppArgv[1];
          if ( v8 == "out" )
          {
            v6 = 29;
          }
          else
          {
            v6 = strcmp("out", args->m_ppArgv[1]) == 0 ? 0x1D : 0;
            if ( v8 == "in" || strcmp("in", args->m_ppArgv[1]) == 0 )
              v6 |= 2u;
          }
        }
        v12.m_SearchHash.m_bSizeLocked = 0;
        v12.m_nConnectionFlags = v6;
        v12._vptr_CNavBreadthFirstSearch = off_47AE210;
        v12.m_NavHull = g_NavHullAAQuad;
        collector.m_nCount = 0;
        collector.m_rSelectionSet = &TheNavMesh->m_SelectionSet;
        v12.m_funcOnSearchArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<SelectCollector>>::_M_invoke;
        memset(&v12.m_SearchHash, 0, 20);
        p_collector = &collector;
        v12.m_funcOnSearchArea._M_functor._M_unused._M_object = &collector;
        v12.m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta = v11;
        v12.m_SearchHash.m_nMinSize = 1024;
        v12.m_pCostFunc = 0;
        v12.m_nTeamIdForBlockedCheck = -1;
        v12.m_funcOnSearchArea._M_manager = std::_Function_base::_Ref_manager<SelectCollector>::_M_manager;
        CNavBreadthFirstSearch::BreadthFirstSearch(&v12, AreaForFloodSelect, -1.0, v5);
        v12._vptr_CNavBreadthFirstSearch = off_47AE210;
        if ( v12.m_funcOnSearchArea._M_manager != 0 )
          v12.m_funcOnSearchArea._M_manager(
            &v12.m_funcOnSearchArea,
            &v12.m_funcOnSearchArea,
            std::_Manager_operation::__destroy_functor);
        CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&v12.m_SearchHash);
        if ( (v12.m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&v12.m_SearchHash.m_table);
        *&v7 = Msg("Selected %d areas.\n", collector.m_nCount).m128_u64[0];
        (*(TheNavMesh->m_pEditor->_vptr_INavEditor + 7))(TheNavMesh->m_pEditor, v7);
      }
    }
  }
}


// CommandNavToggleSelectedSet  (line 177, @0x0000000002eea740, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleSelectionSet
void __fastcall CommandNavToggleSelectedSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleSelectionSet(TheNavMesh->m_pEditor);
}


// CommandNavStoreSelectedSet  (line 188, @0x0000000002eed7e0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavStoreSelectionSet
void __fastcall CommandNavStoreSelectedSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavStoreSelectionSet(TheNavMesh->m_pEditor);
}


// CommandNavRecallSelectedSet  (line 199, @0x0000000002eea460, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavRecallSelectionSet
void __fastcall CommandNavRecallSelectedSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavRecallSelectionSet(TheNavMesh->m_pEditor);
}


// CommandNavAddToSelectedSet  (line 210, @0x0000000002f01500, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavAddToSelectionSet
void __fastcall CommandNavAddToSelectedSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavAddToSelectionSet(TheNavMesh->m_pEditor);
}


// nav_add_to_selected_set_by_id  (line 221, @0x0000000002eec3c0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavAddToSelectionSetByID
void __fastcall nav_add_to_selected_set_by_id(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavAddToSelectionSetByID(TheNavMesh->m_pEditor, ctx, args);
}


// CommandNavRemoveFromSelectedSet  (line 231, @0x0000000002f015b0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavRemoveFromSelectionSet
void __fastcall CommandNavRemoveFromSelectedSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavRemoveFromSelectionSet(TheNavMesh->m_pEditor);
}


// CommandNavToggleInSelectedSet  (line 242, @0x0000000002f016d0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleInSelectionSet
void __fastcall CommandNavToggleInSelectedSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleInSelectionSet(TheNavMesh->m_pEditor);
}


// CommandNavClearSelectedSet  (line 253, @0x0000000002ed4120, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavClearSelectionSet
void __fastcall CommandNavClearSelectedSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavClearSelectionSet(TheNavMesh->m_pEditor);
}


// CommandNavBeginSelecting  (line 264, @0x0000000002ed41b0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavBeginSelecting
void __fastcall CommandNavBeginSelecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavBeginSelecting(TheNavMesh->m_pEditor);
}


// CommandNavEndSelecting  (line 275, @0x0000000002ed4240, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavEndSelecting
void __fastcall CommandNavEndSelecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavEndSelecting(TheNavMesh->m_pEditor);
}


// CommandNavBeginDragSelecting  (line 286, @0x0000000002f01800, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavBeginDragSelecting
void __fastcall CommandNavBeginDragSelecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavBeginDragSelecting(TheNavMesh->m_pEditor);
}


// CommandNavEndDragSelecting  (line 297, @0x0000000002ee9bf0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavEndDragSelecting
void __fastcall CommandNavEndDragSelecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavEndDragSelecting(TheNavMesh->m_pEditor);
}


// CommandNavBeginDragDeselecting  (line 308, @0x0000000002f01930, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavBeginDragDeselecting
void __fastcall CommandNavBeginDragDeselecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavBeginDragDeselecting(TheNavMesh->m_pEditor);
}


// CommandNavEndDragDeselecting  (line 319, @0x0000000002ee6080, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavEndDragDeselecting
void __fastcall CommandNavEndDragDeselecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavEndDragDeselecting(TheNavMesh->m_pEditor);
}


// CommandNavRaiseDragVolumeMax  (line 330, @0x0000000002ed42c0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavRaiseDragVolumeMax
void __fastcall CommandNavRaiseDragVolumeMax(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavRaiseDragVolumeMax(TheNavMesh->m_pEditor);
}


// CommandNavLowerDragVolumeMax  (line 341, @0x0000000002ed4340, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavLowerDragVolumeMax
void __fastcall CommandNavLowerDragVolumeMax(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavLowerDragVolumeMax(TheNavMesh->m_pEditor);
}


// CommandNavRaiseDragVolumeMin  (line 352, @0x0000000002ed43c0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavRaiseDragVolumeMin
void __fastcall CommandNavRaiseDragVolumeMin(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavRaiseDragVolumeMin(TheNavMesh->m_pEditor);
}


// CommandNavLowerDragVolumeMin  (line 363, @0x0000000002ed4440, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavLowerDragVolumeMin
void __fastcall CommandNavLowerDragVolumeMin(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavLowerDragVolumeMin(TheNavMesh->m_pEditor);
}


// CommandNavToggleSelecting  (line 374, @0x0000000002ed44e0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleSelecting
void __fastcall CommandNavToggleSelecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleSelecting(TheNavMesh->m_pEditor, 1);
}


// CommandNavBeginDeselecting  (line 385, @0x0000000002ed4570, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavBeginDeselecting
void __fastcall CommandNavBeginDeselecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavBeginDeselecting(TheNavMesh->m_pEditor);
}


// CommandNavEndDeselecting  (line 396, @0x0000000002ed4600, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavEndDeselecting
void __fastcall CommandNavEndDeselecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavEndDeselecting(TheNavMesh->m_pEditor);
}


// CommandNavToggleDeselecting  (line 407, @0x0000000002ed46a0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleDeselecting
void __fastcall CommandNavToggleDeselecting(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleDeselecting(TheNavMesh->m_pEditor, 1);
}


// nav_select_half_space  (line 418, @0x0000000002eec7f0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavSelectHalfSpace
void __fastcall nav_select_half_space(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavSelectHalfSpace(TheNavMesh->m_pEditor, ctx, args);
}


// CommandNavBeginShiftXY  (line 428, @0x0000000002ed4780, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavBeginShiftXY
void __fastcall CommandNavBeginShiftXY(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavBeginShiftXY(TheNavMesh->m_pEditor);
}


// CommandNavEndShiftXY  (line 439, @0x0000000002ed48a0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavEndShiftXY
void __fastcall CommandNavEndShiftXY(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavEndShiftXY(TheNavMesh->m_pEditor);
}


// nav_select_blocked_areas  (line 450, @0x0000000002eeb480, libserver.so)  // inlines: GetBool, GetInt
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavSelectBlockedAreas
void __fastcall nav_select_blocked_areas(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() && nav_edit.m_pParent->m_Value.m_nValue != 0 )
    CNavEditor::CommandNavSelectBlockedAreas(TheNavMesh->m_pEditor);
}


// nav_select_obstructed_areas  (line 460, @0x0000000002eeab30, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavSelectObstructedAreas
void __fastcall nav_select_obstructed_areas(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavSelectObstructedAreas(TheNavMesh->m_pEditor);
}


// nav_select_stairs  (line 482, @0x0000000002eeacd0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavSelectStairs
void __fastcall nav_select_stairs(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavSelectStairs(TheNavMesh->m_pEditor);
}


// CommandNavSplit  (line 492, @0x0000000002f01b90, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavSplit
void __fastcall CommandNavSplit(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavSplit(TheNavMesh->m_pEditor);
}


// CommandNavSplitAA  (line 503, @0x0000000002f01a20, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavSplitAA
void __fastcall CommandNavSplitAA(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavSplitAA(TheNavMesh->m_pEditor);
}


// CommandNavMerge  (line 513, @0x0000000002f01cc0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavMerge
void __fastcall CommandNavMerge(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavMerge(TheNavMesh->m_pEditor);
}


// CommandNavMark  (line 524, @0x0000000002f02080, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavMark
void __fastcall CommandNavMark(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavMark(TheNavMesh->m_pEditor, ctx, args);
}


// CommandNavUnmark  (line 535, @0x0000000002ed4920, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavUnmark
void __fastcall CommandNavUnmark(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavUnmark(TheNavMesh->m_pEditor);
}


// CommandNavBeginArea  (line 546, @0x0000000002f02270, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavBeginArea
void __fastcall CommandNavBeginArea(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavBeginArea(TheNavMesh->m_pEditor);
}


// CommandNavEndArea  (line 557, @0x0000000002ed56c0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavEndArea
void __fastcall CommandNavEndArea(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavEndArea(TheNavMesh->m_pEditor);
}


// CommandAutoBuildOffGridAreas  (line 568, @0x0000000002eeeab0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandAutoBuildOffGridAreas
void __fastcall CommandAutoBuildOffGridAreas(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandAutoBuildOffGridAreas(TheNavMesh->m_pEditor);
}


// CommandNavConnect  (line 580, @0x0000000002f02510, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavConnect
void __fastcall CommandNavConnect(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavConnect(TheNavMesh->m_pEditor);
}


// CommandNavDisconnect  (line 591, @0x0000000002f02760, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavDisconnect
void __fastcall CommandNavDisconnect(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavDisconnect(TheNavMesh->m_pEditor);
}


// CommandNavSplice  (line 602, @0x0000000002f02880, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavSplice
void __fastcall CommandNavSplice(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavSplice(TheNavMesh->m_pEditor);
}


// CommandNavCrouch  (line 613, @0x0000000002f02a50, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleAttribute
void __fastcall CommandNavCrouch(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleAttribute(TheNavMesh->m_pEditor, 1LL);
}


// CommandNavPrecise  (line 624, @0x0000000002f02a80, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleAttribute
void __fastcall CommandNavPrecise(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleAttribute(TheNavMesh->m_pEditor, 4LL);
}


// CommandNavJump  (line 635, @0x0000000002f02ab0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleAttribute
void __fastcall CommandNavJump(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleAttribute(TheNavMesh->m_pEditor, 2LL);
}


// CommandNavNoJump  (line 646, @0x0000000002f02ae0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleAttribute
void __fastcall CommandNavNoJump(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleAttribute(TheNavMesh->m_pEditor, 8LL);
}


// CommandNavAvoid  (line 657, @0x0000000002f02b10, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavToggleAttribute
void __fastcall CommandNavAvoid(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavToggleAttribute(TheNavMesh->m_pEditor, 128LL);
}


// CommandNavStrip  (line 668, @0x0000000002ec71f0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin
void __fastcall CommandNavStrip(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    (*(TheNavMesh->_vptr_CNavMesh + 27))(TheNavMesh);
}


// CommandNavSave  (line 679, @0x0000000002ec7220, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavMesh::SaveNavMesh, CNavMesh::GetFilename, Msg
// strings: "(null)", "ERROR: Cannot save navigation map '%s'.\n", "Navigation map '%s' saved.\n"
void __fastcall CommandNavSave(const CCommandContext *const ctx, const CCommand *const args)
{
  bool v2; // al
  const char *mapname; // rsi
  const char *v4; // rax
  const char *v5; // rsi
  const char *Filename; // rax

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    v2 = CNavMesh::SaveNavMesh(TheNavMesh, gpGlobals->mapname);
    mapname = gpGlobals->mapname;
    if ( v2 )
    {
      Filename = CNavMesh::GetFilename(TheNavMesh, mapname);
      Msg("Navigation map '%s' saved.\n", Filename);
    }
    else
    {
      v4 = CNavMesh::GetFilename(TheNavMesh, mapname);
      v5 = "(null)";
      if ( v4 != 0 )
        v5 = v4;
      Msg("ERROR: Cannot save navigation map '%s'.\n", v5);
    }
  }
}


// nav_save_selected  (line 698, @0x0000000002ec7810, libserver.so)  // inlines: V_FileBase<long unsigned int>, V_strncpy<long unsigned int>
// calls: UTIL_IsCommandIssuedByServerAdmin, _V_FileBase, CNavMesh::CommandNavSaveSelected, _V_strncpy, __stack_chk_fail
void __fastcall nav_save_selected(const CCommandContext *const ctx, const CCommand *const args)
{
  char fname[40]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    if ( args->m_nArgc <= 1 )
      _V_strncpy(fname, gpGlobals->mapname, 32);
    else
      _V_FileBase(args->m_ppArgv[0], fname, 32);
    CNavMesh::CommandNavSaveSelected(TheNavMesh, fname);
  }
}


// CommandNavLoad  (line 721, @0x0000000002ec72b0, libserver.so)
// calls: CNavMesh::CreateAndLoadNavMesh, Msg
// callers: CommandNavLoad, CommandNavLoadAlt
// strings: "ERROR: Navigation Mesh load failed.\n"
void __fastcall CommandNavLoad(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavMesh::CreateAndLoadNavMesh(gpGlobals->mapname, NavMeshFactory);
  if ( TheNavMesh == 0 )
    Msg("ERROR: Navigation Mesh load failed.\n");
}


// CommandNavLoad  (line 721, @0x0000000002ec72f0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CommandNavLoad
void __fastcall CommandNavLoad(const CCommandContext *const ctx, const CCommand *const args)
{
  const CCommandContext *v2; // rdi
  const CCommand *v3; // rsi

  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CommandNavLoad(v2, v3);
}


// CommandNavLoadAlt  (line 741, @0x0000000002ecf3d0, libserver.so)  // inlines: CommandNavLoad, V_strcat, V_strlen, V_strncat<int>, _V_strcpy, strcpy
// calls: GetVPKFilename, __strcpy_chk, _V_strncat, DevMsg(char const*,...), UTIL_IsCommandIssuedByServerAdmin, CommandNavLoad, __stack_chk_fail
// callers: CommandNavLoadAAQuad, CommandNavLoadPolyClip, CommandNavLoadRecast
// strings: "Copied %s to %s\n"
void __fastcall CommandNavLoadAlt(const char *altSuffix, const CCommandContext *const ctx, const CCommand *const args)
{
  char *VPKFilename; // rax
  char *v5; // r8
  int v6; // edx
  unsigned int v7; // eax
  const CCommandContext *v8; // rdi
  const CCommand *v9; // rsi
  char altFilename[272]; // [rsp+10h] [rbp-240h] BYREF
  char filename[264]; // [rsp+120h] [rbp-130h] BYREF
  unsigned __int64 v12; // [rsp+228h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  VPKFilename = GetVPKFilename(gpGlobals->mapname);
  (*(filesystem->_vptr_IAppSystem + 23))(filesystem, VPKFilename, "GAME", filename, 260, 0, 0);
  v5 = filename;
  do
  {
    v6 = *v5;
    v5 += 4;
    v7 = ~v6 & (v6 - 16843009) & 0x80808080;
  }
  while ( v7 == 0 );
  if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v7) = (~v6 & (v6 - 16843009) & 0x80808080) >> 16;
    LODWORD(v5) = v5 + 2;
  }
  filename[v5 - (__CFADD__(v7, v7) + 3) - filename - 4] = 0;
  __strcpy_chk(altFilename, filename, 260);
  _V_strncat(filename, ".nav", 260, 0xFFFFFFFFLL);
  _V_strncat(altFilename, altSuffix, 260, 0xFFFFFFFFLL);
  _V_strncat(altFilename, ".nav", 260, 0xFFFFFFFFLL);
  DevMsg("Copied %s to %s\n", altFilename, filename);
  (*(filesystem->_vptr_IBaseFileSystem + 17))(&filesystem->IBaseFileSystem, altFilename, 0, filename, 0);
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CommandNavLoad(v8, v9);
}


// CommandNavLoadAAQuad  (line 766, @0x0000000002ecf560, libserver.so)
// calls: CommandNavLoadAlt
void __fastcall CommandNavLoadAAQuad(const CCommandContext *const ctx, const CCommand *const args)
{
  CommandNavLoadAlt("_aaquad", ctx, args);
}


// CommandNavLoadPolyClip  (line 771, @0x0000000002ecf580, libserver.so)
// calls: CommandNavLoadAlt
void __fastcall CommandNavLoadPolyClip(const CCommandContext *const ctx, const CCommand *const args)
{
  CommandNavLoadAlt("_polyclip", ctx, args);
}


// CommandNavLoadRecast  (line 776, @0x0000000002ecf5a0, libserver.so)
// calls: CommandNavLoadAlt
void __fastcall CommandNavLoadRecast(const CCommandContext *const ctx, const CCommand *const args)
{
  CommandNavLoadAlt("_recast", ctx, args);
}


// PlaceNameAutocompleteCallback  (line 788, @0x0000000002ec70e0, libserver.so)
// calls: CNavPlaceDatabase::PlaceNameAutocomplete
void __fastcall PlaceNameAutocompleteCallback(
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  CNavPlaceDatabase::PlaceNameAutocomplete(&TheNavMesh->m_PlaceDatabase, partial, commands);
}


// CommandNavUsePlace  (line 795, @0x0000000002ec7680, libserver.so)  // inlines: Arg, SetEditNavPlace, operator[]
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavPlaceDatabase::PartialNameToPlace, CNavPlaceDatabase::PlaceToName, Msg, CNavPlaceDatabase::PrintAllPlaces
// strings: "Current place set to '%s'\n", "Ambiguous\n"
void __fastcall CommandNavUsePlace(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rsi
  Place v4; // r12d
  const char *v5; // rax

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    if ( args->m_nArgc == 1 )
    {
      CNavPlaceDatabase::PrintAllPlaces(
        &TheNavMesh->m_PlaceDatabase,
        HIDWORD(TheNavMesh->m_pEditor[7]._vptr_INavEditor));
    }
    else
    {
      v3 = "";
      if ( args->m_nArgc > 1 )
        v3 = args->m_ppArgv[1];
      v4 = CNavPlaceDatabase::PartialNameToPlace(&TheNavMesh->m_PlaceDatabase, v3);
      if ( v4 != 0 )
      {
        v5 = CNavPlaceDatabase::PlaceToName(&TheNavMesh->m_PlaceDatabase, v4);
        Msg("Current place set to '%s'\n", v5);
        HIDWORD(TheNavMesh->m_pEditor[7]._vptr_INavEditor) = v4;
      }
      else
      {
        Msg("Ambiguous\n");
      }
    }
  }
}


// CommandNavTogglePlaceMode  (line 896, @0x0000000002ed4a20, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavTogglePlaceMode
void __fastcall CommandNavTogglePlaceMode(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavTogglePlaceMode(TheNavMesh->m_pEditor);
}


// CommandNavSetPlaceMode  (line 907, @0x0000000002ed4a50, libserver.so)  // inlines: IsEditMode, atoi
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavTogglePlaceMode, strtol
void __fastcall CommandNavSetPlaceMode(const CCommandContext *const ctx, const CCommand *const args)
{
  bool v3; // al
  INavEditor *m_pEditor; // rdi

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    v3 = 1;
    if ( args->m_nArgc == 2 )
      v3 = strtol(args->m_ppArgv[1], 0, 10) != 0;
    m_pEditor = TheNavMesh->m_pEditor;
    if ( (HIDWORD(m_pEditor[2]._vptr_INavEditor) == 1) != v3 )
      CNavEditor::CommandNavTogglePlaceMode(m_pEditor);
  }
}


// CommandNavCornerSelect  (line 992, @0x0000000002f02bf0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavCornerSelect
void __fastcall CommandNavCornerSelect(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavCornerSelect(TheNavMesh->m_pEditor);
}


// nav_corner_raise  (line 1003, @0x0000000002f02dd0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavCornerRaise
void __fastcall nav_corner_raise(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavCornerRaise(TheNavMesh->m_pEditor, ctx, args);
}


// nav_corner_lower  (line 1013, @0x0000000002f02fc0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavCornerLower
void __fastcall nav_corner_lower(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavCornerLower(TheNavMesh->m_pEditor, ctx, args);
}


// nav_corner_place_on_ground  (line 1023, @0x0000000002f031d0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavCornerPlaceOnGround
void __fastcall nav_corner_place_on_ground(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavCornerPlaceOnGround(TheNavMesh->m_pEditor, ctx, args);
}


// CommandNavWarpToMark  (line 1033, @0x0000000002ed4cb0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavWarpToMark
void __fastcall CommandNavWarpToMark(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavWarpToMark(TheNavMesh->m_pEditor);
}


// CommandNavLadderFlip  (line 1044, @0x0000000002f032c0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavLadderFlip
void __fastcall CommandNavLadderFlip(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavLadderFlip(TheNavMesh->m_pEditor);
}


// CommandNavTestTestRayToMesh  (line 1055, @0x0000000002ed5040, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavTestTestRayToMesh
void __fastcall CommandNavTestTestRayToMesh(const CCommandContext *const cts, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavTestTestRayToMesh(TheNavMesh->m_pEditor, cts, args);
}


// CommandNavGenerate  (line 1066, @0x0000000002ee8110, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup
// globals: g_pNavGameSystem
void __fastcall CommandNavGenerate(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavGeneratorBase *m_pGenerator; // rdi

  if ( UTIL_IsCommandIssuedByServerAdmin() && g_pNavGameSystem != 0 )
  {
    CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup(g_pNavGameSystem, 1);
    m_pGenerator = TheNavMesh->m_pGenerator;
    if ( m_pGenerator != 0 )
      (*(m_pGenerator->_vptr_CNavGeneratorBase + 3))(m_pGenerator, 0);
  }
}


// CommandNavGenerateIncremental  (line 1084, @0x0000000002ee8160, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup
// globals: g_pNavGameSystem
void __fastcall CommandNavGenerateIncremental(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavGeneratorBase *m_pGenerator; // rdi

  if ( UTIL_IsCommandIssuedByServerAdmin() && g_pNavGameSystem != 0 )
  {
    CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup(g_pNavGameSystem, 1);
    m_pGenerator = TheNavMesh->m_pGenerator;
    if ( m_pGenerator != 0 )
      (*(m_pGenerator->_vptr_CNavGeneratorBase + 3))(m_pGenerator, 1);
  }
}


// CommandNavAnalyze  (line 1102, @0x0000000002ee81b0, libserver.so)  // inlines: GetBool, GetInt
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup
// globals: g_pNavGameSystem
void __fastcall CommandNavAnalyze(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavGeneratorBase *m_pGenerator; // rdi

  if ( UTIL_IsCommandIssuedByServerAdmin() && nav_edit.m_pParent->m_Value.m_nValue != 0 && g_pNavGameSystem != 0 )
  {
    CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup(g_pNavGameSystem, 1);
    m_pGenerator = TheNavMesh->m_pGenerator;
    if ( m_pGenerator != 0 )
      (*(m_pGenerator->_vptr_CNavGeneratorBase + 4))(m_pGenerator, 0);
  }
}


// CommandNavAnalyzeScripted  (line 1123, @0x0000000002ec7550, libserver.so)  // inlines: Arg, GetBool, GetInt, operator[]
// calls: UTIL_IsCommandIssuedByServerAdmin, V_stricmp_fast
// strings: "quit\n"
void __fastcall CommandNavAnalyzeScripted(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  CNavMesh *v4; // rax
  CNavGeneratorBase *m_pGenerator; // rdi

  if ( !UTIL_IsCommandIssuedByServerAdmin() )
    return;
  if ( args->m_nArgc <= 0 )
    goto LABEL_11;
  if ( args->m_nArgc == 1 )
  {
    v3 = "";
  }
  else
  {
    v3 = args->m_ppArgv[1];
    if ( v3 == 0 )
      goto LABEL_11;
  }
  if ( V_stricmp_fast(v3, "force") != 0 )
  {
LABEL_11:
    v4 = TheNavMesh;
    if ( TheNavMesh->m_bIsAnalyzed )
    {
      (*(*engine + 280LL))(engine, "quit\n");
      return;
    }
    goto LABEL_7;
  }
  v4 = TheNavMesh;
LABEL_7:
  if ( nav_edit.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pGenerator = v4->m_pGenerator;
    if ( m_pGenerator != 0 )
      (*(m_pGenerator->_vptr_CNavGeneratorBase + 4))(m_pGenerator, 1);
  }
}


// CommandNavMarkWalkable  (line 1155, @0x0000000002ee89e0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup, CNavEditor::CommandNavMarkWalkable
// globals: g_pNavGameSystem
void __fastcall CommandNavMarkWalkable(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() && g_pNavGameSystem != 0 && TheNavMesh != 0 )
  {
    CNavGameSystem::EnsureUniqueNavMeshForActiveSpawnGroup(g_pNavGameSystem, 1);
    CNavEditor::CommandNavMarkWalkable(TheNavMesh->m_pEditor);
  }
}


// CommandNavClearWalkableMarks  (line 1170, @0x0000000002ec9650, libserver.so)  // inlines: ClearWalkableSeeds, RemoveAll
// calls: UTIL_IsCommandIssuedByServerAdmin
void __fastcall CommandNavClearWalkableMarks(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavGeneratorBase *m_pGenerator; // rax

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    m_pGenerator = TheNavMesh->m_pGenerator;
    if ( m_pGenerator != 0 )
      m_pGenerator->m_walkableSeeds.m_Size = 0;
  }
}


// CommandNavCompressID  (line 1184, @0x0000000002ec7630, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavMesh::CompressAreaIDs, CNavLadder::CompressIDs
void __fastcall CommandNavCompressID(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    CNavMesh::CompressAreaIDs(TheNavMesh);
    CNavLadder::CompressIDs(&TheNavMesh->m_Ladders);
  }
}


// CommandNavClearAttributes  (line 1196, @0x0000000002ec99b0, libserver.so)  // inlines: ClearSet, ForAllEditorSelectedAreas<NavAttributeClearer>, ForAllSetAreas<NavAttributeClearer>, RemoveAll, RemoveAttributes, RemoveFlags, operator()
void __fastcall CommandNavClearAttributes(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavMesh *v2; // rdi
  INavEditor *m_pEditor; // rax
  int (**vptr_INavEditor)(...); // rcx
  int v5; // edx
  int (**v6)(...); // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx

  v2 = TheNavMesh;
  m_pEditor = TheNavMesh->m_pEditor;
  vptr_INavEditor = m_pEditor[1]._vptr_INavEditor;
  v5 = *(vptr_INavEditor + 24);
  if ( v5 != 0 )
  {
    v7 = 0;
    v8 = 8LL * (v5 - 1) + 8;
    do
    {
      v9 = *(vptr_INavEditor[13] + v7);
      v7 += 8;
      *(v9 + 216) = 0;
    }
    while ( v7 != v8 );
    v2->m_SelectionSet.m_SetAreas.m_Size = 0;
  }
  else
  {
    v6 = m_pEditor[11]._vptr_INavEditor;
    if ( v6 != 0 )
      v6[27] = 0;
    v2->m_SelectionSet.m_SetAreas.m_Size = 0;
  }
}


// CommandNavClearAttribute  (line 1206, @0x0000000002ec94a0, libserver.so)  // inlines: Arg, ClearSet, ForAllEditorSelectedAreas<NavAttributeClearer>, ForAllSetAreas<NavAttributeClearer>, RemoveAll, RemoveAttributes, RemoveFlags, operator(), operator[]
// calls: Msg, CNavConfig::NameToNavAttribute
// strings: "Usage: %s <attribute>\n", "Unknown attribute '%s'"
void __fastcall CommandNavClearAttribute(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // eax
  const char *v4; // rsi
  CNavAttribute v5; // rax
  const char *v6; // rsi
  CNavMesh *v7; // r8
  INavEditor *m_pEditor; // rdx
  int (**vptr_INavEditor)(...); // rsi
  int v10; // ecx
  int (**v11)(...); // rdx
  uint64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx

  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc == 2 )
  {
    v5.m_Flags = CNavConfig::NameToNavAttribute(args->m_ppArgv[1]).m_Flags;
    if ( v5.m_Flags != 0 )
    {
      v7 = TheNavMesh;
      m_pEditor = TheNavMesh->m_pEditor;
      vptr_INavEditor = m_pEditor[1]._vptr_INavEditor;
      v10 = *(vptr_INavEditor + 24);
      if ( v10 != 0 )
      {
        v12 = ~v5.m_Flags;
        v13 = 0;
        v14 = 8LL * (v10 - 1) + 8;
        do
        {
          v15 = *(vptr_INavEditor[13] + v13);
          v13 += 8;
          *(v15 + 216) &= v12;
        }
        while ( v13 != v14 );
      }
      else
      {
        v11 = m_pEditor[11]._vptr_INavEditor;
        if ( v11 != 0 )
          v11[27] = (~v5.m_Flags & v11[27]);
      }
      v7->m_SelectionSet.m_SetAreas.m_Size = 0;
    }
    else
    {
      v6 = "";
      if ( args->m_nArgc > 1 )
        v6 = args->m_ppArgv[1];
      Msg("Unknown attribute '%s'", v6);
    }
  }
  else
  {
    v4 = "";
    if ( m_nArgc > 0 )
      v4 = args->m_ppArgv[0];
    Msg("Usage: %s <attribute>\n", v4);
  }
}


// CommandNavMarkAttribute  (line 1230, @0x0000000002ec9210, libserver.so)  // inlines: AddAttributes, AddFlags, Arg, ClearSet, ForAllEditorSelectedAreas<NavAttributeSetter>, ForAllSetAreas<NavAttributeSetter>, RemoveAll, operator(), operator[]
// calls: Msg, CNavConfig::NameToNavAttribute
// strings: "Usage: %s <attribute>\n", "Unknown attribute '%s'"
void __fastcall CommandNavMarkAttribute(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // eax
  const char *v4; // rsi
  CNavAttribute v5; // rax
  const char *v6; // rsi
  CNavMesh *v7; // r8
  INavEditor *m_pEditor; // rdx
  int (**vptr_INavEditor)(...); // rsi
  int v10; // ecx
  int (**v11)(...); // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx

  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc == 2 )
  {
    v5.m_Flags = CNavConfig::NameToNavAttribute(args->m_ppArgv[1]).m_Flags;
    if ( v5.m_Flags != 0 )
    {
      v7 = TheNavMesh;
      m_pEditor = TheNavMesh->m_pEditor;
      vptr_INavEditor = m_pEditor[1]._vptr_INavEditor;
      v10 = *(vptr_INavEditor + 24);
      if ( v10 != 0 )
      {
        v12 = 0;
        v13 = 8LL * (v10 - 1) + 8;
        do
        {
          v14 = *(vptr_INavEditor[13] + v12);
          v12 += 8;
          *(v14 + 216) |= v5.m_Flags;
        }
        while ( v12 != v13 );
      }
      else
      {
        v11 = m_pEditor[11]._vptr_INavEditor;
        if ( v11 != 0 )
          v11[27] = (v5.m_Flags | v11[27]);
      }
      v7->m_SelectionSet.m_SetAreas.m_Size = 0;
    }
    else
    {
      v6 = "";
      if ( args->m_nArgc > 1 )
        v6 = args->m_ppArgv[1];
      Msg("Unknown attribute '%s'", v6);
    }
  }
  else
  {
    v4 = "";
    if ( m_nArgc > 0 )
      v4 = args->m_ppArgv[0];
    Msg("Usage: %s <attribute>\n", v4);
  }
}


// CommandNavSelectWithAttribute  (line 1254, @0x0000000002eec0e0, libserver.so)  // inlines: AddToSet, AddToTail, Arg, ClearSet, CopyConstruct<CNavArea*>, Element, GrowMemory, RemoveAll, operator[]
// calls: Msg, CNavConfig::NameToNavAttribute, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow
// strings: "Usage: %s <attribute>\n", "Unknown attribute '%s'", "%d areas added to selection\n"
void __fastcall CommandNavSelectWithAttribute(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavMesh *v3; // rbx
  int m_nArgc; // eax
  const char *v5; // rsi
  CNavAttribute v6; // r15
  __int64 v7; // r13
  int v8; // r12d
  int v9; // r14d
  CNavArea *v10; // rdx
  int v11; // eax
  CNavMesh *v12; // r9
  CNavArea *v13; // rdx
  const char *v14; // rsi
  __int64 m_Size; // rax
  int v16; // esi
  CNavArea **v17; // rax
  int v18; // [rsp+4h] [rbp-5Ch]
  CNavArea *pArea; // [rsp+10h] [rbp-50h]
  CNavMesh *v20; // [rsp+18h] [rbp-48h]
  CNavArea *v21; // [rsp+28h] [rbp-38h] BYREF

  v3 = TheNavMesh;
  TheNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc == 2 )
  {
    v6.m_Flags = CNavConfig::NameToNavAttribute(args->m_ppArgv[1]).m_Flags;
    if ( v6.m_Flags != 0 )
    {
      if ( v3->m_NavAreas.m_Size <= 0 )
      {
        v9 = 0;
      }
      else
      {
        v7 = 0;
        v8 = 0;
        v9 = 0;
        do
        {
          v10 = v3->m_NavAreas.m_Memory.m_pMemory[v7];
          if ( (v6.m_Flags & v10->m_AreaAttributes.m_Flags) != 0 )
          {
            v21 = v3->m_NavAreas.m_Memory.m_pMemory[v7];
            pArea = v10;
            v20 = TheNavMesh;
            v11 = CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(
                    &TheNavMesh->m_SelectionSet.m_SetAreas,
                    &v21);
            v12 = v20;
            v13 = pArea;
            if ( v11 == -1 )
            {
              m_Size = v20->m_SelectionSet.m_SetAreas.m_Size;
              v16 = v20->m_SelectionSet.m_SetAreas.m_Size;
              if ( m_Size == v20->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
              {
                v18 = v20->m_SelectionSet.m_SetAreas.m_Size;
                CUtlMemory<CNavArea *,int>::Grow(&v20->m_SelectionSet.m_SetAreas.m_Memory, 1);
                v12 = v20;
                m_Size = v18;
                v13 = pArea;
                v16 = v20->m_SelectionSet.m_SetAreas.m_Size;
              }
              v12->m_SelectionSet.m_SetAreas.m_Size = v16 + 1;
              v17 = &v12->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[m_Size];
              if ( v17 != 0 )
                *v17 = v13;
            }
            ++v9;
          }
          ++v8;
          ++v7;
        }
        while ( v3->m_NavAreas.m_Size > v8 );
      }
    }
    else
    {
      v14 = "";
      if ( args->m_nArgc > 1 )
        v14 = args->m_ppArgv[1];
      v9 = 0;
      Msg("Unknown attribute '%s'", v14);
    }
    Msg("%d areas added to selection\n", v9);
  }
  else
  {
    v5 = "";
    if ( m_nArgc > 0 )
      v5 = args->m_ppArgv[0];
    Msg("Usage: %s <attribute>\n", v5);
  }
}


// nav_shift  (line 1339, @0x0000000002ec9300, libserver.so)  // inlines: ForAllEditorSelectedAreas<ShiftSet>, ForAllSetAreas<ShiftSet>, SetEditMode, ShiftSet, atoi, operator()
// calls: UTIL_IsCommandIssuedByServerAdmin, UTIL_GetListenServerHost, strtol, CNavArea::ShiftAreaAndLadders, CBaseEntity::EmitSound
// strings: "EDIT_END_AREA.Creating"
void __fastcall nav_shift(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // r12
  INavEditor *m_pEditor; // r13
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  int v8; // eax
  int v9; // eax
  int v10; // eax
  INavEditor *v11; // rax
  int (**vptr_INavEditor)(...); // r15
  int v13; // edx
  CNavArea *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r14
  CNavArea *v17; // rdi
  vec_t v18; // [rsp+8h] [rbp-48h]
  vec_t v19; // [rsp+8h] [rbp-48h]
  float v20; // [rsp+8h] [rbp-48h]
  ShiftSet shift; // [rsp+Ch] [rbp-44h] BYREF
  float v22; // [rsp+18h] [rbp-38h]

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 )
    {
      m_pEditor = TheNavMesh->m_pEditor;
      (*(m_pEditor->_vptr_INavEditor + 2))(m_pEditor, 1, 1);
      HIDWORD(m_pEditor[2]._vptr_INavEditor) = 0;
      x = vec3_origin.x;
      y = vec3_origin.y;
      z = vec3_origin.z;
      if ( args->m_nArgc > 1 )
      {
        v18 = vec3_origin.y;
        shift.m_vShift.x = vec3_origin.z;
        v8 = strtol(args->m_ppArgv[1], 0, 10);
        x = v8;
        z = shift.m_vShift.x;
        y = v18;
        if ( args->m_nArgc > 2 )
        {
          v19 = shift.m_vShift.x;
          shift.m_vShift.x = v8;
          v9 = strtol(args->m_ppArgv[2], 0, 10);
          y = v9;
          x = shift.m_vShift.x;
          z = v19;
          if ( args->m_nArgc > 3 )
          {
            v20 = v9;
            v10 = strtol(args->m_ppArgv[3], 0, 10);
            y = v20;
            z = v10;
            x = shift.m_vShift.x;
          }
        }
      }
      v22 = z;
      shift.m_vShift.y = x;
      shift.m_vShift.z = y;
      v11 = TheNavMesh->m_pEditor;
      vptr_INavEditor = v11[1]._vptr_INavEditor;
      v13 = *(vptr_INavEditor + 24);
      if ( v13 != 0 )
      {
        v15 = 0;
        v16 = 8LL * (v13 - 1) + 8;
        do
        {
          v17 = *(vptr_INavEditor[13] + v15);
          v15 += 8;
          CNavArea::ShiftAreaAndLadders(v17, &shift.m_vShift.y);
        }
        while ( v15 != v16 );
      }
      else
      {
        v14 = v11[11]._vptr_INavEditor;
        if ( v14 != 0 )
          CNavArea::ShiftAreaAndLadders(v14, &shift.m_vShift.y);
      }
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
    }
  }
}


// CommandNavCenterInWorld  (line 1377, @0x0000000002ecb710, libserver.so)  // inlines: Encompass, Extent, GetExtent, Init, SetEditMode, ShiftPoly, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator+=, operator-, operator=
// calls: UTIL_IsCommandIssuedByServerAdmin, UTIL_GetListenServerHost, CEntitySystem::GetActiveSpawnGroupHandle, CWorldGameSystem::GetWorldInfoForSpawnGroup, CBaseEntity::EmitSound, Msg
// strings: "EDIT_END_AREA.Creating", "Shifting mesh by %f,%f\n"
void __fastcall CommandNavCenterInWorld(const CCommandContext *const ctx, const CCommand *const args)
{
  CNavMesh *v2; // r12
  CBasePlayer *ListenServerHost; // rbx
  INavEditor *m_pEditor; // r13
  float v5; // xmm3_4
  int m_Size; // ecx
  __int64 v7; // rdx
  float *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  int v13; // xmm5_4
  int v14; // xmm1_4
  int v15; // xmm4_4
  int v16; // xmm2_4
  __int64 v17; // r14
  int v18; // r13d
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  float v21; // xmm3_4
  float v22; // xmm0_4
  float i; // xmm1_4
  __int64 v24; // rcx
  CNavArea *v25; // rdi
  __int64 m_nVerts; // rsi
  float *v27; // rdx
  float v28; // xmm2_4
  float v29; // [rsp+0h] [rbp-70h]
  float v30; // [rsp+4h] [rbp-6Ch]
  float v31; // [rsp+4h] [rbp-6Ch]
  float v32; // [rsp+8h] [rbp-68h]
  float v33; // [rsp+8h] [rbp-68h]
  float v34; // [rsp+8h] [rbp-68h]
  float v35; // [rsp+Ch] [rbp-64h]
  float v36; // [rsp+Ch] [rbp-64h]
  float v37; // [rsp+Ch] [rbp-64h]
  float navExtent; // [rsp+10h] [rbp-60h]
  float navExtent_4; // [rsp+14h] [rbp-5Ch]
  float navExtent_8; // [rsp+18h] [rbp-58h]
  float navExtent_12; // [rsp+1Ch] [rbp-54h]
  float navExtent_16; // [rsp+20h] [rbp-50h]
  float navExtent_20; // [rsp+24h] [rbp-4Ch]
  float incrementalExtent_4; // [rsp+34h] [rbp-3Ch]
  float incrementalExtent_8; // [rsp+38h] [rbp-38h]
  float incrementalExtent_16; // [rsp+40h] [rbp-30h]
  float incrementalExtent_20; // [rsp+44h] [rbp-2Ch]

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    v2 = TheNavMesh;
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 )
    {
      m_pEditor = TheNavMesh->m_pEditor;
      (*(m_pEditor->_vptr_INavEditor + 2))(m_pEditor, 1, 1);
      HIDWORD(m_pEditor[2]._vptr_INavEditor) = 0;
      v5 = 3.4028235e38;
      m_Size = v2->m_NavAreas.m_Size;
      navExtent = 3.4028235e38;
      navExtent_4 = 3.4028235e38;
      navExtent_8 = 3.4028235e38;
      navExtent_12 = -3.4028235e38;
      navExtent_16 = -3.4028235e38;
      navExtent_20 = -3.4028235e38;
      if ( m_Size <= 0 )
      {
        *&v16 = -3.4028235e38;
        *&v15 = 3.4028235e38;
        *&v14 = -3.4028235e38;
        *&v13 = 3.4028235e38;
      }
      else
      {
        v7 = 0;
        while ( 1 )
        {
          v8 = v2->m_NavAreas.m_Memory.m_pMemory[v7];
          v9 = v8[20];
          incrementalExtent_4 = v8[21];
          incrementalExtent_8 = v8[22];
          v10 = v8[23];
          if ( v5 > v9 )
            navExtent = v8[20];
          if ( v9 > navExtent_12 )
            navExtent_12 = v8[20];
          v11 = navExtent_4;
          if ( navExtent_4 > incrementalExtent_4 )
          {
            navExtent_4 = v8[21];
            v11 = navExtent_4;
          }
          if ( incrementalExtent_4 > navExtent_16 )
            navExtent_16 = v8[21];
          v12 = navExtent_8;
          if ( navExtent_8 > incrementalExtent_8 )
          {
            navExtent_8 = v8[22];
            v12 = navExtent_8;
          }
          if ( incrementalExtent_8 > navExtent_20 )
            navExtent_20 = v8[22];
          if ( navExtent > v10 )
            navExtent = v8[23];
          if ( v10 > navExtent_12 )
            navExtent_12 = v8[23];
          incrementalExtent_16 = v8[24];
          if ( v11 > incrementalExtent_16 )
            navExtent_4 = v8[24];
          if ( incrementalExtent_16 > navExtent_16 )
            navExtent_16 = v8[24];
          incrementalExtent_20 = v8[25];
          if ( v12 > incrementalExtent_20 )
            navExtent_8 = v8[25];
          if ( incrementalExtent_20 > navExtent_20 )
            navExtent_20 = v8[25];
          if ( m_Size <= ++v7 )
            break;
          v5 = navExtent;
        }
        *&v13 = navExtent;
        *&v14 = navExtent_12;
        *&v15 = navExtent_4;
        *&v16 = navExtent_16;
      }
      v29 = *&v16;
      v17 = 0;
      v30 = *&v15;
      v18 = 0;
      v32 = *&v14;
      v35 = *&v13;
      ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
      WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, ActiveSpawnGroupHandle);
      v21 = ((WorldInfoForSpawnGroup->m_WorldMins.x + WorldInfoForSpawnGroup->m_WorldMaxs.x) * 0.5)
          - ((v32 + v35) * 0.5);
      v22 = 0.0;
      for ( i = ((WorldInfoForSpawnGroup->m_WorldMins.y + WorldInfoForSpawnGroup->m_WorldMaxs.y) * 0.5)
              - ((v29 + v30) * 0.5); v2->m_NavAreas.m_Size > v18; v22 = v31 )
      {
        v24 = 0;
        v25 = v2->m_NavAreas.m_Memory.m_pMemory[v17];
        m_nVerts = v25->m_nVerts;
        v27 = v25;
        if ( m_nVerts > 0 )
        {
          do
          {
            v28 = v27[2];
            v24 = (v24 + 1);
            v27 += 3;
            *(v27 - 1) = v28 + v21;
            *v27 = *v27 + i;
            v27[1] = v27[1] + v22;
          }
          while ( v24 < v25->m_nVerts );
        }
        v31 = v22;
        ++v18;
        v33 = i;
        ++v17;
        v36 = v21;
        (*v25->_vptr_CNavPoly)(v25, m_nVerts, v27, v24);
        v21 = v36;
        i = v33;
      }
      v34 = i;
      v37 = v21;
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
      Msg("Shifting mesh by %f,%f\n", v37, v34);
    }
  }
}


// CommandNavBuildLadder  (line 1429, @0x0000000002ed40a0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavEditor::CommandNavBuildLadder
void __fastcall CommandNavBuildLadder(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavEditor::CommandNavBuildLadder(TheNavMesh->m_pEditor);
}


// Subdivider::SubdivideX  (line 1466, @0x0000000002f07400, libserver.so)  // inlines: GetPolySizeX, GetPolySizeY, SubdivideX, SubdivideY
// calls: CNavMesh::SnapToGrid, CNavArea::SplitEditWrapper_Old, Subdivider::SubdivideY
// callers: Subdivider::SubdivideY, nav_subdivide
void __fastcall Subdivider::SubdivideX(
        Subdivider *const this,
        CNavArea *pArea,
        bool bCanDivideX,
        bool bCanDivideY,
        int nDepth)
{
  float v9; // xmm0_4
  int v10; // r12d
  float v11; // xmm0_4
  CNavArea *v12; // rbx
  float v13; // xmm3_4
  int v14; // r13d
  CNavArea *v15; // rbx
  int v16; // r12d
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  int v20; // r12d
  float v21; // xmm0_4
  CNavArea *v22; // [rsp-8h] [rbp-58h] BYREF
  CNavArea *pAreaAlpha; // [rsp+0h] [rbp-50h] BYREF
  CNavArea *pAreaBeta; // [rsp+8h] [rbp-48h] BYREF
  CNavArea *v25[8]; // [rsp+10h] [rbp-40h] BYREF

  if ( bCanDivideX && nDepth > 0 )
  {
    if ( CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(pArea->m_vVerts[0].x - pArea->m_vVerts[2].x) * 0.5) )
    {
      v11 = CNavMesh::SnapToGrid(TheNavMesh, NAN, 0);
      if ( CNavArea::SplitEditWrapper_Old(pArea, 0, v11, &v22, &pAreaAlpha) )
      {
        v12 = v22;
        if ( bCanDivideY )
        {
          v13 = CNavGeneratorBase::sm_flGenerationStepSize;
          if ( CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(v22->m_vVerts[0].y - v22->m_vVerts[2].y) * 0.5) )
          {
            v18 = CNavMesh::SnapToGrid(TheNavMesh, NAN, 0);
            if ( CNavArea::SplitEditWrapper_Old(v12, 1, v18, &pAreaBeta, v25) )
            {
              Subdivider::SubdivideX(this, pAreaBeta, 1, 1, nDepth - 1);
              Subdivider::SubdivideX(this, v25[0], 1, 1, nDepth - 1);
            }
            v15 = pAreaAlpha;
            v13 = CNavGeneratorBase::sm_flGenerationStepSize;
          }
          else
          {
            v14 = nDepth - 1;
            if ( nDepth != 1
              && CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(v22->m_vVerts[0].x - v22->m_vVerts[2].x) * 0.5) )
            {
              v21 = CNavMesh::SnapToGrid(TheNavMesh, NAN, 0);
              if ( CNavArea::SplitEditWrapper_Old(v12, 0, v21, &pAreaBeta, v25) )
              {
                Subdivider::SubdivideY(this, pAreaBeta, 1, 0, v14);
                Subdivider::SubdivideY(this, v25[0], 1, 0, v14);
              }
              v13 = CNavGeneratorBase::sm_flGenerationStepSize;
            }
            v15 = pAreaAlpha;
          }
          if ( v13 <= (fabs(v15->m_vVerts[0].y - v15->m_vVerts[2].y) * 0.5) )
          {
            v19 = CNavMesh::SnapToGrid(TheNavMesh, NAN, 0);
            if ( CNavArea::SplitEditWrapper_Old(v15, 1, v19, &pAreaBeta, v25) )
            {
              v20 = nDepth - 1;
              Subdivider::SubdivideX(this, pAreaBeta, 1, 1, v20);
              Subdivider::SubdivideX(this, v25[0], 1, 1, v20);
            }
          }
          else
          {
            v16 = nDepth - 1;
            if ( v16 != 0 && v13 <= (fabs(v15->m_vVerts[0].x - v15->m_vVerts[2].x) * 0.5) )
            {
              v17 = CNavMesh::SnapToGrid(TheNavMesh, NAN, 0);
              if ( CNavArea::SplitEditWrapper_Old(v15, 0, v17, &pAreaBeta, v25) )
              {
                Subdivider::SubdivideY(this, pAreaBeta, 1, 0, v16);
                Subdivider::SubdivideY(this, v25[0], 1, 0, v16);
              }
            }
          }
        }
      }
    }
    else if ( bCanDivideY
           && CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(pArea->m_vVerts[0].y - pArea->m_vVerts[2].y) * 0.5) )
    {
      v9 = CNavMesh::SnapToGrid(TheNavMesh, NAN, 0);
      if ( CNavArea::SplitEditWrapper_Old(pArea, 1, v9, &pAreaBeta, v25) )
      {
        v10 = nDepth - 1;
        Subdivider::SubdivideX(this, pAreaBeta, 0, 1, v10);
        Subdivider::SubdivideX(this, v25[0], 0, 1, v10);
      }
    }
  }
}


// Subdivider::SubdivideY  (line 1494, @0x0000000002f072a0, libserver.so)  // inlines: GetPolySizeX, GetPolySizeY, SubdivideX
// calls: CNavMesh::SnapToGrid, CNavArea::SplitEditWrapper_Old, Subdivider::SubdivideX
// callers: Subdivider::SubdivideX, nav_subdivide
void __fastcall Subdivider::SubdivideY(
        Subdivider *const this,
        CNavArea *pArea,
        bool bCanDivideX,
        bool bCanDivideY,
        int nDepth)
{
  float v8; // xmm0_4
  int v9; // r12d
  float v10; // xmm0_4
  CNavArea *v12; // [rsp-8h] [rbp-38h] BYREF
  CNavArea *pAlphaArea; // [rsp+0h] [rbp-30h] BYREF

  if ( bCanDivideY )
  {
    if ( CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(pArea->m_vVerts[0].y - pArea->m_vVerts[2].y) * 0.5) )
    {
      v8 = CNavMesh::SnapToGrid(TheNavMesh, 0.5, 0);
      if ( CNavArea::SplitEditWrapper_Old(pArea, 1, v8, &v12, &pAlphaArea) )
      {
        Subdivider::SubdivideX(this, v12, bCanDivideX, 1, nDepth - 1);
        Subdivider::SubdivideX(this, pAlphaArea, bCanDivideX, 1, nDepth - 1);
      }
    }
    else if ( bCanDivideX )
    {
      v9 = nDepth - 1;
      if ( nDepth - 1 > 0
        && CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(pArea->m_vVerts[0].x - pArea->m_vVerts[2].x) * 0.5) )
      {
        v10 = CNavMesh::SnapToGrid(TheNavMesh, 0.5, 0);
        if ( CNavArea::SplitEditWrapper_Old(pArea, 0, v10, &v12, &pAlphaArea) )
        {
          Subdivider::SubdivideY(this, v12, 1, 0, v9);
          Subdivider::SubdivideY(this, pAlphaArea, 1, 0, v9);
        }
      }
    }
  }
}


// nav_subdivide  (line 1527, @0x0000000002ecf5c0, libserver.so)  // inlines: ForAllEditorSelectedAreas<Subdivider>, ForAllSetAreas<Subdivider>, GetPolySizeX, GetPolySizeY, SubdivideX, SubdivideY, Subdivider, atoi, operator()
// calls: UTIL_IsCommandIssuedByServerAdmin, strtol, CNavMesh::SnapToGrid, CNavArea::SplitEditWrapper_Old, Subdivider::SubdivideY, Subdivider::SubdivideX
void __fastcall nav_subdivide(const CCommandContext *const ctx, const CCommand *const args)
{
  int v3; // r12d
  INavEditor *m_pEditor; // rax
  int (**vptr_INavEditor)(...); // r14
  int v6; // edx
  CNavArea *v7; // rbx
  int m_nDepth; // r13d
  __int64 v9; // rbx
  __int128 v10; // xmm3
  float v11; // xmm2_4
  __int64 v12; // r15
  CNavArea *v13; // r12
  float v14; // xmm0_4
  bool v15; // al
  CNavArea *v16; // r12
  float v17; // xmm1_4
  float v18; // xmm0_4
  bool v19; // al
  CNavArea *v20; // r12
  int v21; // r13d
  float v22; // xmm0_4
  bool v23; // al
  float v24; // xmm0_4
  bool v25; // al
  int v26; // r13d
  float v27; // xmm0_4
  int v28; // r12d
  float v29; // xmm0_4
  float v30; // xmm0_4
  bool v31; // al
  float v32; // xmm0_4
  bool v33; // al
  int v34; // r13d
  float v35; // [rsp+4h] [rbp-8Ch]
  float v36; // [rsp+10h] [rbp-80h]
  __int128 v37; // [rsp+10h] [rbp-80h]
  float v38; // [rsp+10h] [rbp-80h]
  float v39; // [rsp+10h] [rbp-80h]
  float v40; // [rsp+10h] [rbp-80h]
  int v41[4]; // [rsp+20h] [rbp-70h]
  int v42; // [rsp+20h] [rbp-70h]
  int v43[4]; // [rsp+20h] [rbp-70h]
  int v44[4]; // [rsp+20h] [rbp-70h]
  int v45[4]; // [rsp+20h] [rbp-70h]
  Subdivider chop; // [rsp+30h] [rbp-60h] BYREF
  CNavArea *ppAreaAlphaOut; // [rsp+40h] [rbp-50h] BYREF
  CNavArea *v48; // [rsp+48h] [rbp-48h] BYREF
  CNavArea *pArea; // [rsp+50h] [rbp-40h] BYREF
  CNavArea *v50[7]; // [rsp+58h] [rbp-38h] BYREF

  if ( !UTIL_IsCommandIssuedByServerAdmin() )
    return;
  v3 = 1;
  if ( args->m_nArgc == 2 )
    v3 = strtol(args->m_ppArgv[1], 0, 10);
  chop.m_nDepth = v3;
  m_pEditor = TheNavMesh->m_pEditor;
  vptr_INavEditor = m_pEditor[1]._vptr_INavEditor;
  v6 = *(vptr_INavEditor + 24);
  if ( v6 != 0 )
  {
    m_nDepth = v3;
    v9 = 0;
    v10 = 0x7FFFFFFFu;
    v11 = 0.5;
    v12 = 8LL * (v6 - 1) + 8;
    while ( 1 )
    {
      v13 = *(vptr_INavEditor[13] + v9);
      if ( m_nDepth > 0 )
      {
        if ( CNavGeneratorBase::sm_flGenerationStepSize <= (COERCE_FLOAT(
                                                              COERCE_UNSIGNED_INT(v13->m_vVerts[0].x - v13->m_vVerts[2].x)
                                                            & v10)
                                                          * v11) )
          break;
        if ( CNavGeneratorBase::sm_flGenerationStepSize <= (COERCE_FLOAT(
                                                              COERCE_UNSIGNED_INT(v13->m_vVerts[0].y - v13->m_vVerts[2].y)
                                                            & v10)
                                                          * v11) )
        {
          v39 = v11;
          *v44 = v10;
          v24 = CNavMesh::SnapToGrid(TheNavMesh, CNavGeneratorBase::sm_flGenerationStepSize, 0);
          v25 = CNavArea::SplitEditWrapper_Old(v13, 1, v24, &pArea, v50);
          v10 = *v44;
          v11 = v39;
          if ( v25 )
          {
            v26 = m_nDepth - 1;
            Subdivider::SubdivideX(&chop, pArea, 0, 1, v26);
            Subdivider::SubdivideX(&chop, v50[0], 0, 1, v26);
            v10 = *v44;
            v11 = v39;
          }
        }
      }
LABEL_12:
      v9 += 8;
      if ( v9 == v12 )
        return;
      m_nDepth = chop.m_nDepth;
    }
    v36 = v11;
    *v41 = v10;
    v14 = CNavMesh::SnapToGrid(TheNavMesh, CNavGeneratorBase::sm_flGenerationStepSize, 0);
    v15 = CNavArea::SplitEditWrapper_Old(v13, 0, v14, &ppAreaAlphaOut, &v48);
    v10 = *v41;
    v11 = v36;
    if ( !v15 )
      goto LABEL_12;
    v16 = ppAreaAlphaOut;
    v17 = CNavGeneratorBase::sm_flGenerationStepSize;
    if ( CNavGeneratorBase::sm_flGenerationStepSize <= (COERCE_FLOAT(
                                                          COERCE_UNSIGNED_INT(
                                                            ppAreaAlphaOut->m_vVerts[0].y
                                                          - ppAreaAlphaOut->m_vVerts[2].y)
                                                        & v41[0])
                                                      * v36) )
    {
      v30 = CNavMesh::SnapToGrid(TheNavMesh, CNavGeneratorBase::sm_flGenerationStepSize, 0);
      v31 = CNavArea::SplitEditWrapper_Old(v16, 1, v30, &pArea, v50);
      v10 = *v41;
      v11 = v36;
      if ( v31 )
      {
        Subdivider::SubdivideX(&chop, pArea, 1, 1, m_nDepth - 1);
        Subdivider::SubdivideX(&chop, v50[0], 1, 1, m_nDepth - 1);
        v11 = v36;
        v10 = *v41;
      }
    }
    else
    {
      if ( m_nDepth == 1
        || CNavGeneratorBase::sm_flGenerationStepSize > (COERCE_FLOAT(
                                                           COERCE_UNSIGNED_INT(
                                                             ppAreaAlphaOut->m_vVerts[0].x
                                                           - ppAreaAlphaOut->m_vVerts[2].x)
                                                         & v41[0])
                                                       * v36) )
      {
LABEL_23:
        v20 = v48;
        if ( v17 <= (COERCE_FLOAT(COERCE_UNSIGNED_INT(v48->m_vVerts[0].y - v48->m_vVerts[2].y) & v10) * v11) )
        {
          v40 = v11;
          *v45 = v10;
          v32 = CNavMesh::SnapToGrid(TheNavMesh, v17, 0);
          v33 = CNavArea::SplitEditWrapper_Old(v20, 1, v32, &pArea, v50);
          v10 = *v45;
          v11 = v40;
          if ( v33 )
          {
            v34 = m_nDepth - 1;
            Subdivider::SubdivideX(&chop, pArea, 1, 1, v34);
            Subdivider::SubdivideX(&chop, v50[0], 1, 1, v34);
            v11 = v40;
            v10 = *v45;
          }
        }
        else
        {
          v21 = m_nDepth - 1;
          if ( v21 != 0
            && v17 <= (COERCE_FLOAT(COERCE_UNSIGNED_INT(v48->m_vVerts[0].x - v48->m_vVerts[2].x) & v10) * v11) )
          {
            v38 = v11;
            *v43 = v10;
            v22 = CNavMesh::SnapToGrid(TheNavMesh, v17, 0);
            v23 = CNavArea::SplitEditWrapper_Old(v20, 0, v22, &pArea, v50);
            v10 = *v43;
            v11 = v38;
            if ( v23 )
            {
              Subdivider::SubdivideY(&chop, pArea, 1, 0, v21);
              Subdivider::SubdivideY(&chop, v50[0], 1, 0, v21);
              v10 = *v43;
              v11 = v38;
            }
          }
        }
        goto LABEL_12;
      }
      v37 = *v41;
      v35 = v11;
      v42 = m_nDepth - 1;
      v18 = CNavMesh::SnapToGrid(TheNavMesh, CNavGeneratorBase::sm_flGenerationStepSize, 0);
      v19 = CNavArea::SplitEditWrapper_Old(v16, 0, v18, &pArea, v50);
      v10 = v37;
      v11 = v35;
      if ( v19 )
      {
        Subdivider::SubdivideY(&chop, pArea, 1, 0, v42);
        Subdivider::SubdivideY(&chop, v50[0], 1, 0, v42);
        v11 = v35;
        v10 = v37;
      }
    }
    v17 = CNavGeneratorBase::sm_flGenerationStepSize;
    goto LABEL_23;
  }
  v7 = m_pEditor[11]._vptr_INavEditor;
  if ( v7 != 0 && v3 > 0 )
  {
    if ( CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(v7->m_vVerts[0].x - v7->m_vVerts[2].x) * 0.5) )
    {
      v29 = CNavMesh::SnapToGrid(TheNavMesh, 0.5, 0);
      if ( CNavArea::SplitEditWrapper_Old(v7, 0, v29, &pArea, v50) )
      {
        Subdivider::SubdivideY(&chop, pArea, 1, 1, v3);
        Subdivider::SubdivideY(&chop, v50[0], 1, 1, v3);
      }
    }
    else if ( CNavGeneratorBase::sm_flGenerationStepSize <= (fabs(v7->m_vVerts[0].y - v7->m_vVerts[2].y) * 0.5) )
    {
      v27 = CNavMesh::SnapToGrid(TheNavMesh, 0.5, 0);
      if ( CNavArea::SplitEditWrapper_Old(v7, 1, v27, &pArea, v50) )
      {
        v28 = v3 - 1;
        Subdivider::SubdivideX(&chop, pArea, 0, 1, v28);
        Subdivider::SubdivideX(&chop, v50[0], 0, 1, v28);
      }
    }
  }
}


// NavMeshMergeAutocomplete  (line 1543, @0x0000000002ee8570, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, FileFindHandle_t, GrowMemory, V_FileBase<long unsigned int>, V_stristr_fast, V_strlen, V_strnicmp_fast<int>, operator[], ~FileFindHandle_t
// calls: strlen, _V_FileBase, _V_strnicmp_fast, V_stristr_fast(char const*,char const*), CUtlString::Format, CUtlMemory<CUtlString, int>::Grow, __stack_chk_fail, _Unwind_Resume
// strings: "maps/*_selected_*.txt", "_selected_", "nav_merge_mesh"
void __fastcall NavMeshMergeAutocomplete(
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  bool v3; // zf
  const char *v4; // rdi
  __int64 v5; // rax
  __int64 m_Size; // r13
  CUtlString *v7; // rax
  CUtlString *v8; // rdi
  unsigned int v9; // [rsp+14h] [rbp-15Ch]
  const char *partiala; // [rsp+18h] [rbp-158h]
  FileFindHandle_t findHandle; // [rsp+20h] [rbp-150h] BYREF
  char txtFilenameNoExtension[264]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+138h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  v3 = partial + 15 == 0;
  v4 = partial + 15;
  partiala = v4;
  if ( v3 )
    v9 = 0;
  else
    v9 = strlen(v4);
  findHandle.m_pFileSystem = 0;
  findHandle.m_nFindDataIndex = 0;
  v5 = (*(filesystem->_vptr_IAppSystem + 41))(filesystem, "maps/*_selected_*.txt", "MOD", &findHandle);
  if ( v5 != 0 )
  {
    while ( 1 )
    {
      _V_FileBase(v5, txtFilenameNoExtension, 260);
      if ( _V_strnicmp_fast(txtFilenameNoExtension, partiala, v9) == 0
        && V_stristr_fast(txtFilenameNoExtension, "_selected_") != 0 )
      {
        m_Size = commands->m_Size;
        if ( m_Size == commands->m_Memory.m_nAllocationCount )
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
        ++commands->m_Size;
        v7 = &commands->m_Memory.m_pMemory[m_Size];
        if ( v7 != 0 )
        {
          v7->m_pString = 0;
          v8 = &commands->m_Memory.m_pMemory[m_Size];
        }
        else
        {
          v8 = 0;
        }
        CUtlString::Format(v8, "%s %s", "nav_merge_mesh", txtFilenameNoExtension);
        if ( commands->m_Size == 64 )
          break;
      }
      v5 = (*(filesystem->_vptr_IAppSystem + 38))(filesystem, &findHandle);
      if ( v5 == 0 )
        goto LABEL_16;
    }
    if ( findHandle.m_pFileSystem != 0 )
      (*(findHandle.m_pFileSystem->_vptr_IAppSystem + 40))(findHandle.m_pFileSystem, &findHandle);
  }
  else
  {
LABEL_16:
    (*(filesystem->_vptr_IAppSystem + 40))(filesystem, &findHandle);
    if ( findHandle.m_pFileSystem != 0 )
      (*(findHandle.m_pFileSystem->_vptr_IAppSystem + 40))(findHandle.m_pFileSystem, &findHandle);
  }
}


// nav_merge_mesh  (line 1572, @0x0000000002ec7310, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CNavMesh::CommandNavMergeMesh
void __fastcall nav_merge_mesh(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
    CNavMesh::CommandNavMergeMesh(TheNavMesh, ctx, args);
}


// nav_simplify_selected  (line 1603, @0x0000000002ef0fb0, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, __dynamic_cast, CNavGeneratorAAQuad::SimplifySelectedAreas, Msg
// strings: "%d areas simplified - %d remain\n", "nav_simplify_selected only works on the selected set\n"
// globals: `typeinfo for'CNavGeneratorAAQuad
void __fastcall nav_simplify_selected(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_Size; // ebx
  CNavGeneratorBase *m_pGenerator; // rdi
  CNavGeneratorAAQuad *v4; // rax
  int v5; // edx

  if ( UTIL_IsCommandIssuedByServerAdmin() && (*(*engine + 160LL))(engine) == 0 )
  {
    m_Size = TheNavMesh->m_SelectionSet.m_SetAreas.m_Size;
    if ( m_Size != 0 )
    {
      m_pGenerator = TheNavMesh->m_pGenerator;
      if ( m_pGenerator != 0
        && (v4 = __dynamic_cast(m_pGenerator, &`typeinfo for'CNavGeneratorBase, &`typeinfo for'CNavGeneratorAAQuad, 0)) != 0 )
      {
        CNavGeneratorAAQuad::SimplifySelectedAreas(v4);
        v5 = TheNavMesh->m_SelectionSet.m_SetAreas.m_Size;
      }
      else
      {
        v5 = m_Size;
      }
      Msg("%d areas simplified - %d remain\n", m_Size, v5);
    }
    else
    {
      Msg("nav_simplify_selected only works on the selected set\n");
    }
  }
}


// nav_chop_selected  (line 1631, @0x0000000002eed420, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Element, ForAllEditorSelectedAreas<NavAreaCollector>, ForAllSetAreas<NavAreaCollector>, GrowMemory, HasElement, NavAreaCollector, Purge, RemoveAll, operator(), operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: UTIL_IsCommandIssuedByServerAdmin, CUtlMemory<CNavArea*, int>::Grow, __dynamic_cast, CNavGeneratorAAQuad::ReduceToComponentAreas, Msg, CUtlMemory<CNavArea*, int>::Purge, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "%d areas chopped into %d\n"
// globals: `typeinfo for'CNavGeneratorAAQuad
void __fastcall nav_chop_selected(const CCommandContext *const ctx, const CCommand *const args)
{
  INavEditor *m_pEditor; // rax
  int (**vptr_INavEditor)(...); // r15
  int v4; // edx
  CNavArea *v5; // r12
  __int64 v6; // r14
  CNavGeneratorBase *m_pGenerator; // rdi
  CNavGeneratorAAQuad *v8; // r15
  unsigned __int64 v9; // r12
  CNavArea *v10; // rsi
  __int64 v11; // r12
  int m_Size; // eax
  int v13; // edx
  CNavArea **v14; // rax
  CNavArea *v15; // r13
  bool v16; // zf
  CNavMesh *rNavMesh; // [rsp+20h] [rbp-70h]
  __int64 v18; // [rsp+28h] [rbp-68h]
  CNavArea *v19; // [rsp+38h] [rbp-58h] BYREF
  NavAreaCollector collector; // [rsp+40h] [rbp-50h] BYREF

  if ( UTIL_IsCommandIssuedByServerAdmin() && (*(*engine + 160LL))(engine) == 0 )
  {
    rNavMesh = TheNavMesh;
    if ( TheNavMesh->m_pEditor != 0 )
    {
      (*(TheNavMesh->_vptr_CNavMesh + 27))(TheNavMesh);
      (*(rNavMesh->m_pEditor->_vptr_INavEditor + 7))(rNavMesh->m_pEditor);
      m_pEditor = rNavMesh->m_pEditor;
      collector.m_Areas.m_Size = 0;
      collector.m_Areas.m_Memory.m_pMemory = 0;
      collector.m_Areas.m_Memory.m_nAllocationCount = 0;
      collector.m_Areas.m_Memory.m_nGrowSize = 0;
      vptr_INavEditor = m_pEditor[1]._vptr_INavEditor;
      collector.m_bCheckForDuplicates = 0;
      v4 = *(vptr_INavEditor + 24);
      if ( v4 != 0 )
      {
        v11 = 0;
        v6 = 0;
        v18 = 8LL * (v4 - 1) + 8;
        do
        {
          v15 = *(vptr_INavEditor[13] + v11);
          v16 = !v15->m_bShouldBeDestroyed;
          v19 = v15;
          if ( v16
            && (!collector.m_bCheckForDuplicates
             || CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&collector.m_Areas, &v19) < 0) )
          {
            if ( collector.m_Areas.m_Memory.m_nAllocationCount == v6 )
            {
              CUtlMemory<CNavArea *,int>::Grow(&collector.m_Areas.m_Memory, 1);
              m_Size = collector.m_Areas.m_Size;
            }
            else
            {
              m_Size = v6;
            }
            v13 = m_Size + 1;
            collector.m_Areas.m_Size = m_Size + 1;
            v14 = &collector.m_Areas.m_Memory.m_pMemory[v6];
            if ( v14 != 0 )
            {
              *v14 = v15;
              v6 = collector.m_Areas.m_Size;
            }
            else
            {
              v6 = v13;
            }
          }
          v11 += 8;
        }
        while ( v11 != v18 );
      }
      else
      {
        v5 = m_pEditor[11]._vptr_INavEditor;
        if ( v5 == 0 || v5->m_bShouldBeDestroyed )
        {
          LODWORD(v6) = 0;
        }
        else
        {
          CUtlMemory<CNavArea *,int>::Grow(&collector.m_Areas.m_Memory, 1);
          LODWORD(v6) = ++collector.m_Areas.m_Size;
          if ( collector.m_Areas.m_Memory.m_pMemory != 0 )
          {
            *collector.m_Areas.m_Memory.m_pMemory = v5;
            LODWORD(v6) = collector.m_Areas.m_Size;
          }
        }
      }
      m_pGenerator = TheNavMesh->m_pGenerator;
      if ( m_pGenerator != 0 )
      {
        v8 = __dynamic_cast(m_pGenerator, &`typeinfo for'CNavGeneratorBase, &`typeinfo for'CNavGeneratorAAQuad, 0);
        if ( v8 != 0 && v6 != 0 )
        {
          v9 = 0;
          do
          {
            v10 = collector.m_Areas.m_Memory.m_pMemory[v9 / 8];
            if ( v10 != 0 )
              CNavGeneratorAAQuad::ReduceToComponentAreas(v8, v10, 1);
            v9 += 8LL;
          }
          while ( v9 != 8LL * (v6 - 1) + 8 );
          LODWORD(v6) = collector.m_Areas.m_Size;
        }
      }
      Msg("%d areas chopped into %d\n", v6, rNavMesh->m_SelectionSet.m_SetAreas.m_Size);
      collector.m_Areas.m_Size = 0;
      if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
        if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
      }
    }
  }
}


