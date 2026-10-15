// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_edit.cpp:780
class DrawSelectionSet {
	int m_nCount;  // +0x0
	const CNavSelectionSet & m_rSelectionSet;  // +0x10
	DrawSelectionSet(CNavSelectionSet &, const Vector &);
	NavSearchAreaResult_t operator()(CNavArea &, NavSearchAreaInfo_t *);

	// sizeof = 24
};

// src/game/server/nav_edit.cpp:812
class AddToDragSet {
	const CNavSelectionSet & m_rDragSelectionSet;  // +0x0
	int m_zMin;  // +0x20
	int m_zMax;  // +0x24
	int m_nTolerance;  // +0x28
	bool m_bDragDeselecting;  // +0x2c
	AddToDragSet(CNavEditor &, Extent &, int, int, bool);
	bool operator()(CNavArea *);

	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavEditor::CNavEditor  (line 81, @0x0000000002ee63f0, libserver.so)  // inlines: CNavSelectionSet, CUtlMemory, CUtlVector, CUtlVectorBase, Ray_t, VectorAligned, ~CNavSelectionSet, ~CUtlVector
// calls: CountdownTimer::CountdownTimer, CNavEditor::Reset, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: NavMeshFactory
void __fastcall CNavEditor::CNavEditor(CNavEditor *const this, CNavMesh *const rNavMesh)
{
  CountdownTimer *p_m_ShowAreaInfoTimer; // rdi

  this->m_rNavMesh = rNavMesh;
  p_m_ShowAreaInfoTimer = &this->m_ShowAreaInfoTimer;
  p_m_ShowAreaInfoTimer[-1]._vptr_CountdownTimer = off_47AE310;
  CountdownTimer::CountdownTimer(p_m_ShowAreaInfoTimer);
  this->m_SplitRay.m_Start.w = 0.0;
  this->m_SplitRay.m_Delta.w = 0.0;
  this->m_SplitRay.m_StartOffset.w = 0.0;
  this->m_SplitRay.m_Extents.w = 0.0;
  this->m_DragSelectionSet.m_SetAreas.m_Size = 0;
  this->m_DragSelectionSet.m_SetAreas.m_Memory.m_pMemory = 0;
  this->m_DragSelectionSet.m_SetAreas.m_Memory.m_nAllocationCount = 0;
  this->m_DragSelectionSet.m_SetAreas.m_Memory.m_nGrowSize = 0;
  this->m_StoredSelectionSet.m_Size = 0;
  this->m_StoredSelectionSet.m_Memory.m_pMemory = 0;
  this->m_StoredSelectionSet.m_Memory.m_nAllocationCount = 0;
  this->m_StoredSelectionSet.m_Memory.m_nGrowSize = 0;
  CNavEditor::Reset(this, 1, 1);
}


// CNavEditor::OnNavMeshDestroy  (line 89, @0x0000000002eca8c0, libserver.so)  // inlines: Purge, RemoveAll, ~CNavEditor, ~CNavSelectionSet, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<int, int>::Purge, CUtlMemory<CNavArea*, int>::Purge
void __fastcall CNavEditor::OnNavMeshDestroy(CNavEditor *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  if ( this != 0 )
  {
    v2 = (this->m_StoredSelectionSet.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_StoredSelectionSet.m_Size = 0;
    this->_vptr_INavEditor = off_47AE310;
    if ( v2 )
    {
      p_m_Memory = &this->m_StoredSelectionSet.m_Memory;
      CUtlMemory<int,int>::Purge(&this->m_StoredSelectionSet.m_Memory);
      if ( (this->m_StoredSelectionSet.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(p_m_Memory);
    }
    v2 = (this->m_DragSelectionSet.m_SetAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_DragSelectionSet.m_SetAreas.m_Size = 0;
    if ( !v2
      || (CUtlMemory<CNavArea *,int>::Purge(&this->m_DragSelectionSet.m_SetAreas.m_Memory),
          (this->m_DragSelectionSet.m_SetAreas.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
    {
      operator delete(this);
    }
    else
    {
      CUtlMemory<CNavArea *,int>::Purge(&this->m_DragSelectionSet.m_SetAreas.m_Memory);
      operator delete(this);
    }
  }
}


// CNavEditor::Reset  (line 95, @0x0000000002ec66d0, libserver.so)  // inlines: ClearCorner, ClearSet, RemoveAll
// callers: CNavEditor::CNavEditor
void __fastcall CNavEditor::Reset(CNavEditor *const this, bool bClearSelection, bool bExitEditMode)
{
  int (**vptr_INavEditor)(...); // rax

  (*(this->_vptr_INavEditor + 5))(this);
  vptr_INavEditor = this->_vptr_INavEditor;
  this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
  vptr_INavEditor[6](this);
  if ( bClearSelection )
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
  this->m_bClimbableSurface = 0;
  this->m_DragSelectionSet.m_SetAreas.m_Size = 0;
  this->m_bIsPlacePainting = 0;
  this->m_EditNavPlace = 0;
  this->m_bIsContinuouslySelecting = 0;
  this->m_bIsContinuouslyDeselecting = 0;
  this->m_bIsDragDeselecting = 0;
  this->m_EditMode = INavEditor::EditModeType::NORMAL;
  if ( bExitEditMode )
    this->m_bIsEditing = 0;
}


// CNavEditor::ClearAreas  (line 120, @0x0000000002ec6760, libserver.so)
void __fastcall CNavEditor::ClearAreas(CNavEditor *const this)
{
  this->m_pMarkedArea = 0;
  this->m_pSelectedArea = 0;
  this->m_pLastSelectedArea = 0;
}


// CNavEditor::ClearCorner  (line 129, @0x0000000002ed2c80, libserver.so)
void __fastcall CNavEditor::ClearCorner(CNavEditor *const this)
{
  this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
}


// CNavEditor::ClearLadders  (line 136, @0x0000000002ec6780, libserver.so)
void __fastcall CNavEditor::ClearLadders(CNavEditor *const this)
{
  this->m_pMarkedLadder = 0;
  this->m_pSelectedLadder = 0;
  this->m_pLastSelectedLadder = 0;
}


// CNavEditor::RemoveInvalid  (line 145, @0x0000000002ec6d10, libserver.so)
// calls: CNavArea::IsValidArea
void __fastcall CNavEditor::RemoveInvalid(CNavEditor *const this)
{
  if ( !CNavArea::IsValidArea(this->m_pMarkedArea) )
    this->m_pMarkedArea = 0;
  if ( !CNavArea::IsValidArea(this->m_pSelectedArea) )
    this->m_pSelectedArea = 0;
  if ( !CNavArea::IsValidArea(this->m_pLastSelectedArea) )
    this->m_pLastSelectedArea = 0;
}


// CNavEditor::SetEditMode  (line 167, @0x0000000002ed2c90, libserver.so)
void __fastcall CNavEditor::SetEditMode(CNavEditor *const this, INavEditor::EditModeType mode)
{
  (*(this->_vptr_INavEditor + 2))(this, 1, 1);
  this->m_EditMode = mode;
}


// CNavEditor::ClearMarks  (line 175, @0x0000000002ec67a0, libserver.so)
void __fastcall CNavEditor::ClearMarks(CNavEditor *const this)
{
  this->m_pMarkedArea = 0;
  this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
  this->m_pMarkedLadder = 0;
}


// CNavEditor::SetSelectedLadder  (line 184, @0x0000000002ed2cc0, libserver.so)
void __fastcall CNavEditor::SetSelectedLadder(CNavEditor *const this, CNavLadder *pLadder)
{
  this->m_pSelectedArea = 0;
  this->m_pSelectedLadder = pLadder;
}


// CNavEditor::SetSelectedArea  (line 192, @0x0000000002ed2ce0, libserver.so)
void __fastcall CNavEditor::SetSelectedArea(CNavEditor *const this, CNavArea *pArea)
{
  this->m_pSelectedArea = pArea;
  this->m_pSelectedLadder = 0;
}


// CNavEditor::SetMarkedLadder  (line 200, @0x0000000002ed2d00, libserver.so)
void __fastcall CNavEditor::SetMarkedLadder(CNavEditor *const this, CNavLadder *pLadder)
{
  this->m_pMarkedLadder = pLadder;
  this->m_pMarkedArea = 0;
  this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
}


// CNavEditor::SetMarkedArea  (line 209, @0x0000000002ed2d20, libserver.so)
void __fastcall CNavEditor::SetMarkedArea(CNavEditor *const this, CNavArea *pArea)
{
  this->m_pMarkedArea = pArea;
  this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
  this->m_pMarkedLadder = 0;
}


// CNavEditor::GetMarkedAreaIncludingSelectionSet  (line 218, @0x0000000002ec8cd0, libserver.so)  // inlines: GetSetItem
// callers: CNavDrawArea::DrawGetColor_Internal, CNavEditor::GetMarkedAreaIncludingSelectionSet, CNavDrawArea::DrawArea_Internal, CNavEditor::CommandNavWarpToMark, CNavEditor::EditCreateNavArea, CNavEditor::CommandNavDeleteMarked, CNavEditor::CommandNavDelete, CNavEditor::CommandNavMerge, CNavEditor::CommandNavSplice, CNavEditor::CommandNavCornerSelect, CNavEditor::CommandNavCornerRaise, CNavEditor::CommandNavCornerLower
CNavArea *__fastcall CNavEditor::GetMarkedAreaIncludingSelectionSet(const CNavEditor *const this)
{
  CNavMesh *m_rNavMesh; // rdx
  CNavArea *result; // rax

  m_rNavMesh = this->m_rNavMesh;
  result = 0;
  if ( m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size == 1 )
    return *m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory;
  return result;
}


// CNavEditor::GetMarkedAreaIncludingSelectionSet  (line 218, @0x0000000002ed2d40, libserver.so)
// calls: CNavEditor::GetMarkedAreaIncludingSelectionSet
CNavArea *__fastcall CNavEditor::GetMarkedAreaIncludingSelectionSet(const CNavEditor *const this)
{
  CNavArea *result; // rax

  result = this->m_pMarkedArea;
  if ( result == 0 )
    return CNavEditor::GetMarkedAreaIncludingSelectionSet(this);
  return result;
}


// CNavEditor::Update  (line 235, @0x0000000002f00e70, libserver.so)  // inlines: ClearSet, GetBool, GetInt, GetLastFailedPath, OnEditModeStart, RemoveAll
// calls: CNavEditor::DrawEditMode, CPathCostRecorder::DebugDraw
// globals: CPath::m_pLastFailedPath
void __fastcall CNavEditor::Update(CNavEditor *const this)
{
  if ( nav_edit.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( !this->m_bIsEditing )
    {
      this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
      this->m_bIsContinuouslySelecting = 0;
      this->m_bIsContinuouslyDeselecting = 0;
      this->m_bIsEditing = 1;
    }
    CNavEditor::DrawEditMode(this);
  }
  else if ( this->m_bIsEditing )
  {
    this->m_bIsEditing = 0;
  }
  if ( nav_path_record_draw_last_fail.m_pParent->m_Value.m_nValue != 0 && CPath::m_pLastFailedPath != 0 )
    CPathCostRecorder::DebugDraw(CPath::m_pLastFailedPath);
}


// CNavEditor::GetEditVectors  (line 270, @0x0000000002ec7760, libserver.so)  // inlines: operator+, operator=
// calls: UTIL_GetListenServerHost, AngleVectors
// callers: CNavEditor::FindLadderCorners, CNavEditor::GetEditVectors, CNavEditor::GetVertUnderCursor, CNavEditor::UpdateSelection, CNavEditor::DrawEditMode
void __fastcall CNavEditor::GetEditVectors(const CNavEditor *const this, Vector *pPosOut, Vector *pForwardOut)
{
  CBasePlayer *ListenServerHost; // rax
  CBasePlayer *v6; // rbx
  float *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm2_4
  double v10; // xmm0_8
  int v11; // xmm1_4
  QAngle angles; // [rsp+0h] [rbp-30h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  v6 = ListenServerHost;
  if ( ListenServerHost != 0 )
  {
    v7 = (*(ListenServerHost->_vptr_IHandleEntity + 165))(ListenServerHost);
    v8 = v7[1] + vec3_angle.y;
    v9 = *v7 + vec3_angle.x;
    angles.z = v7[2] + vec3_angle.z;
    angles.y = v8;
    angles.x = v9;
    AngleVectors(&angles, pPosOut, 0, 0);
    v10 = (*(v6->_vptr_IHandleEntity + 164))(v6);
    angles.y = *(&v10 + 1);
    LODWORD(this->m_rNavMesh) = v11;
    LODWORD(this->_vptr_INavEditor) = LODWORD(v10);
    HIDWORD(this->_vptr_INavEditor) = LODWORD(angles.y);
  }
}


// CNavEditor::GetEditVectors  (line 270, @0x0000000002ed2d60, libserver.so)
// calls: CNavEditor::GetEditVectors
void __fastcall CNavEditor::GetEditVectors(const CNavEditor *const this, Vector *pPosOut, Vector *pForwardOut)
{
  if ( pPosOut != 0 && pForwardOut != 0 )
    CNavEditor::GetEditVectors(pPosOut, pForwardOut, pForwardOut);
}


// CNavEditor::GetVertUnderCursor  (line 291, @0x0000000002ed2d80, libserver.so)  // inlines: GetEditVectors, VectorAdd, VectorMultiply, operator*, operator+
// calls: CNavEditor::GetEditVectors, CNavPoly::TestRayToVertHotspots
// callers: CNavDrawArea::DrawArea_Internal
int __fastcall CNavEditor::GetVertUnderCursor(const CNavEditor *const this, const CNavArea *const rArea)
{
  Vector *v2; // rdx
  Vector vEyePos; // [rsp+0h] [rbp-40h] BYREF
  Vector vEyeForward; // [rsp+10h] [rbp-30h] BYREF
  Vector vEnd; // [rsp+20h] [rbp-20h] BYREF

  CNavEditor::GetEditVectors(&vEyePos, &vEyeForward, v2);
  vEnd.y = (vEyeForward.y * 10000.0) + vEyePos.y;
  vEnd.z = (vEyeForward.z * 10000.0) + vEyePos.z;
  vEnd.x = (10000.0 * vEyeForward.x) + vEyePos.x;
  return CNavPoly::TestRayToVertHotspots(rArea, &vEyePos, &vEnd);
}


// GetNavHullForSelectionConstraints  (line 301, @0x0000000002ed5810, libserver.so)  // inlines: GetFloat, GetInt, Max<float>
// calls: NavHullCalcFromGenParamsGameDefaults, NavHull_t::NavHull_t, NavHull_t::NavHullAny
// callers: CNavEditor::DoSelectionTrace, CNavEditor::UpdateSelection, CNavEditor::DrawEditMode
NavHull_t __cdecl GetNavHullForSelectionConstraints()
{
  float v0; // xmm2_4
  int m_nValue; // ecx
  __m128 v2; // xmm3
  float m_fValue; // xmm1_4
  float v4; // xmm0_4
  __int64 v5; // rax
  NavHull_t v8; // [rsp+10h] [rbp-20h]
  NavHull_t v9; // [rsp+20h] [rbp-10h] BYREF
  NavHull_t result; // 0:rax.8,8:xmm0_4.4

  m_nValue = nav_select_hull_category.m_pParent->m_Value.m_nValue;
  if ( m_nValue >= 0 )
  {
    NavHull_t::NavHull_t(&v9, 0.0, v0, 1 << m_nValue);
    *&result.m_hullCategory = *&v9.m_hullCategory;
    result.m_flHullHeight = v9.m_flHullHeight;
  }
  else
  {
    v2.m128_i32[0] = LODWORD(nav_select_hull_radius.m_pParent->m_Value.m_fValue);
    m_fValue = nav_select_hull_height.m_pParent->m_Value.m_fValue;
    if ( v2.m128_f32[0] >= 0.0 || m_fValue >= 0.0 )
    {
      v4 = NavHullCalcFromGenParamsGameDefaults(
             COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_cmplt_ss(0LL, v2).m128_f32[0]) & v2.m128_i32[0]),
             fmaxf(m_fValue, 0.0),
             0.0);
      *&v8.m_hullCategory = v5;
      v8.m_flHullHeight = v4;
    }
    else
    {
      v8 = NavHull_t::NavHullAny();
    }
    *&result.m_hullCategory = *&v8.m_hullCategory;
    result.m_flHullHeight = v8.m_flHullHeight;
  }
  return result;
}


// CNavEditor::DoSelectionTrace  (line 326, @0x0000000002ed58c0, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, Contains, DistToSqr, EnableInteractsExclude, EnableInteractsWith, GetBool, GetFloat, GetInt, GetTraceMaskSolid, GetTraceMaskSolidBrushOnly, Init, LengthSqr, Max<float>, Min<float>, Normalized, Ray_t, RnCollisionAttr_t, SetSelectedLadder, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorDivide, VectorMultiply, VectorSubtract, operator!=, operator*, operator*=, operator+, operator-, operator/, operator=
// calls: VectorNormalize, GetNavHullForSelectionConstraints, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, VectorVectors, CNavMesh::FindNavAreaOrLadderAlongRay, CNavMesh::GetNearestNavArea
// callers: CNavEditor::UpdateSelection
bool __fastcall CNavEditor::DoSelectionTrace(
        CNavEditor *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        bool bIsCreatingArea,
        bool bIsCreatingLadder)
{
  vec_t v9; // xmm2_4
  vec_t v10; // xmm0_4
  uint64 v11; // rdx
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v15; // xmm2_4
  float m_fValue; // xmm1_4
  float v17; // xmm1_4
  CNavMesh *m_rNavMesh; // rbx
  int v19; // xmm5_4
  __int64 v20; // r13
  int v21; // r12d
  CNavLadder *v22; // r14
  float v23; // xmm0_4
  float v24; // xmm6_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  bool result; // al
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  bool m_bClimbable; // al
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  __int16 contents; // ax
  const CNavMesh *v43; // rdi
  bool v44; // cf
  int32 v45; // r12d
  float flClosestDistSqr; // [rsp+30h] [rbp-1D0h]
  float vAbsMax; // [rsp+34h] [rbp-1CCh]
  float vAbsMin; // [rsp+40h] [rbp-1C0h]
  float vAbsMin_4; // [rsp+44h] [rbp-1BCh]
  float v50; // [rsp+50h] [rbp-1B0h]
  float v51; // [rsp+54h] [rbp-1ACh]
  float v52; // [rsp+58h] [rbp-1A8h]
  float v54; // [rsp+5Ch] [rbp-1A4h]
  NavHull_t navHullSelect; // [rsp+60h] [rbp-1A0h] BYREF
  Vector vRight; // [rsp+70h] [rbp-190h] BYREF
  CTraceFilterWalkableEntities filter; // [rsp+80h] [rbp-180h] BYREF
  Vector vTestEnd; // [rsp+D0h] [rbp-130h] BYREF
  int v59; // [rsp+DCh] [rbp-124h]
  float v60; // [rsp+E0h] [rbp-120h]
  float v61; // [rsp+E4h] [rbp-11Ch]
  float v62; // [rsp+E8h] [rbp-118h]
  int v63; // [rsp+ECh] [rbp-114h]
  int v64; // [rsp+F0h] [rbp-110h]
  int v65; // [rsp+F4h] [rbp-10Ch]
  int v66; // [rsp+F8h] [rbp-108h]
  int v67; // [rsp+FCh] [rbp-104h]
  int v68; // [rsp+100h] [rbp-100h]
  int v69; // [rsp+104h] [rbp-FCh]
  int v70; // [rsp+108h] [rbp-F8h]
  int v71; // [rsp+10Ch] [rbp-F4h]
  float v72; // [rsp+110h] [rbp-F0h]
  char v73; // [rsp+114h] [rbp-ECh]
  bool v74; // [rsp+115h] [rbp-EBh]
  CGameTrace v75; // [rsp+120h] [rbp-E0h] BYREF
  Vector startpos; // 0:^1C.12

  v9 = vEnd->x - vStart->x;
  v10 = vEnd->z - vStart->z;
  v75.startpos.y = vEnd->y - vStart->y;
  v75.startpos.x = v9;
  v75.startpos.z = v10;
  VectorNormalize(&v75.startpos);
  startpos = v75.startpos;
  navHullSelect = GetNavHullForSelectionConstraints();
  memset(&v75.m_ShapeAttributes, 0, 31);
  v75.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v75);
  CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 4, 0);
  filter.m_flags = 15;
  filter._vptr_CTraceFilter = off_3FE6A50;
  filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
  if ( nav_solid_props.m_pParent->m_Value.m_nValue != 0 )
    v11 = CNavConfig::ms_TraceMaskSolid;
  else
    v11 = CNavConfig::ms_TraceMaskSolidBrushOnly;
  x = vStart->x;
  y = vStart->y;
  z = vStart->z;
  v15 = vEnd->z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  v61 = vEnd->y - y;
  v72 = m_fValue;
  v17 = vEnd->x;
  v62 = v15 - z;
  v59 = 0;
  v63 = 0;
  v67 = 0;
  v60 = v17 - x;
  v71 = 0;
  v70 = 0;
  v69 = 0;
  v68 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v73 = 1;
  vTestEnd.x = x;
  vTestEnd.y = y;
  vTestEnd.z = z;
  filter.m_attr.m_nInteractsWith |= v11;
  v74 = (((v60 * v60) + (v61 * v61)) + (v62 * v62)) != 0.0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vTestEnd, &filter, &v75);
  if ( v75.fraction == 1.0 )
    return 0;
  if ( !bIsCreatingArea )
  {
    m_bClimbable = v75.m_pSurfaceProperties->m_gameProperties.m_bClimbable;
    this->m_bClimbableSurface = m_bClimbable;
    if ( m_bClimbable )
    {
      v39 = v75.plane.normal.x;
      v40 = v75.plane.normal.y;
      v41 = v75.plane.normal.z;
      this->m_vSurfaceNormal = v75.plane.normal;
    }
    else
    {
      contents = v75.contents;
      v39 = v75.plane.normal.x;
      v40 = v75.plane.normal.y;
      v41 = v75.plane.normal.z;
      this->m_vSurfaceNormal = v75.plane.normal;
      LOBYTE(contents) = (contents & 0x100) != 0;
      this->m_bClimbableSurface = contents;
      if ( contents == 0 )
        goto LABEL_7;
    }
    if ( bIsCreatingLadder
      && (v39 != this->m_vLadderNormal.x || v40 != this->m_vLadderNormal.y || v41 != this->m_vLadderNormal.z) )
    {
      this->m_bClimbableSurface = 0;
    }
    if ( v41 > 0.89999998 )
    {
      this->m_bClimbableSurface = 0;
      goto LABEL_7;
    }
  }
  if ( this->m_bClimbableSurface && !bIsCreatingLadder || !bIsCreatingArea )
  {
LABEL_7:
    m_rNavMesh = this->m_rNavMesh;
    if ( m_rNavMesh->m_Ladders.m_Size > 0 )
    {
      *&v19 = 0.5;
      v20 = 0;
      flClosestDistSqr = 40000.0;
      v21 = 0;
      while ( 1 )
      {
        v52 = *&v19;
        v22 = m_rNavMesh->m_Ladders.m_Memory.m_pMemory[v20];
        v50 = v22->m_vBottom.y;
        vAbsMin = v22->m_vBottom.z;
        vAbsMax = v22->m_vTop.z;
        v54 = v22->m_vBottom.x;
        v51 = v22->m_vTop.x;
        vAbsMin_4 = v22->m_vTop.y;
        vRight.x = 0.0;
        vRight.y = 0.0;
        vRight.z = 0.0;
        vTestEnd.x = 0.0;
        vTestEnd.y = 0.0;
        vTestEnd.z = 0.0;
        VectorVectors(&v22->m_vNormal, &vRight, &vTestEnd);
        *&v19 = v52;
        v23 = v22->m_flWidth * v52;
        vRight.x = vRight.x * v23;
        vRight.y = vRight.y * v23;
        vRight.z = v23 * vRight.z;
        v24 = fminf(-vRight.y, vRight.y);
        v25 = fmaxf(-vRight.y, vRight.y);
        v26 = this->m_vEditCursorPos.x;
        v27 = fmaxf(-vRight.x, vRight.x);
        if ( v26 >= ((fminf(-vRight.x, vRight.x) + v54) - 5.0) && ((v27 + v51) + 5.0) >= v26 )
        {
          v28 = this->m_vEditCursorPos.y;
          if ( v28 >= ((v24 + v50) - 5.0) && ((v25 + vAbsMin_4) + 5.0) >= v28 )
          {
            v29 = this->m_vEditCursorPos.z;
            if ( v29 >= (vAbsMin + -5.0) && (vAbsMax + 5.0) >= v29 )
              break;
          }
        }
        if ( this->m_bClimbableSurface )
        {
          v30 = ((v22->m_vBottom.x + v22->m_vTop.x) * v52) - v26;
          v31 = ((v22->m_vBottom.y + v22->m_vTop.y) * v52) - this->m_vEditCursorPos.y;
          v32 = ((v22->m_vBottom.z + v22->m_vTop.z) * v52) - this->m_vEditCursorPos.z;
          v33 = ((v30 * v30) + (v31 * v31)) + (v32 * v32);
          if ( flClosestDistSqr > v33 )
          {
            this->m_pSelectedArea = 0;
            this->m_pSelectedLadder = v22;
            flClosestDistSqr = v33;
          }
        }
        ++v21;
        ++v20;
        if ( m_rNavMesh->m_Ladders.m_Size <= v21 )
          goto LABEL_18;
      }
      this->m_pSelectedArea = 0;
      this->m_pSelectedLadder = v22;
    }
  }
LABEL_18:
  result = this->m_bClimbableSurface;
  v35 = v75.endpos.x;
  v36 = v75.endpos.y;
  v37 = v75.endpos.z;
  this->m_vEditCursorPos = v75.endpos;
  if ( !result )
  {
    result = 1;
    if ( this->m_pSelectedLadder == 0 )
    {
      v43 = this->m_rNavMesh;
      v44 = nav_select_allow_blocked.m_pParent->m_Value.m_nValue == 0;
      vTestEnd.x = (startpos.x * 100.0) + v35;
      v45 = v44 ? 0 : 2;
      vTestEnd.y = (startpos.y * 100.0) + v36;
      vTestEnd.z = (startpos.z * 100.0) + v37;
      CNavMesh::FindNavAreaOrLadderAlongRay(
        v43,
        &v75.startpos,
        &vTestEnd,
        &navHullSelect,
        v45,
        &this->m_pSelectedArea,
        &this->m_pSelectedLadder,
        0);
      if ( this->m_pSelectedArea == 0 && this->m_pSelectedLadder == 0 )
        this->m_pSelectedArea = CNavMesh::GetNearestNavArea(this->m_rNavMesh, &v75.endpos, navHullSelect, v45, 500.0);
      return 1;
    }
  }
  return result;
}


// CNavEditor::UpdateSelection  (line 438, @0x0000000002efe360, libserver.so)  // inlines: CNavAttribute, CNavFlags, CNavPathCostCore, CNavShortestPathCost, CPathCostBase, ComputePathPosToPos, DrawPolyFilled, GetBool, GetEditVectors, GetFloat, GetInt, Init, IsEditMode, LengthSqr, Lerp<Vector>, Line, Normalized, PathCapabilities_t, Purge, Purge_FixedGrowable, Ray2D_t, SetOptimizer, SetOrigin, SetToIdentity, Sphere, Vector2D, VectorAdd, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, VertexColor_t, _Function_base, _M_init_functor, function<CNavEditor::UpdateSelection()::__lambda13, void>, operator*, operator+, operator-, operator=, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CNavSearchHexLattice, ~CUtlHashtable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~_Function_base, ~function
// calls: UTIL_GetListenServerHost, CNavEditor::GetEditVectors, VectorNormalize, CNavEditor::DoSelectionTrace, SetIdentityMatrix, CNavMesh::SnapToGrid, UTIL_YawToVector, CNavPoly::IntersectRayWithPolyEdge2D, GetNavHullForSelectionConstraints, CNavMesh::GetNearestPointOnMeshWithHullClearance, CNavMesh::GetNavArea, CNavPoly::GetClosestPointOnPolyWithHullClearance (27 total)
// callers: CNavEditor::DrawEditMode, CNavEditor::CommandNavDelete, CNavEditor::GetAreaForFloodSelect, CNavEditor::CommandNavAddToSelectionSet, CNavEditor::CommandNavRemoveFromSelectionSet, CNavEditor::CommandNavToggleInSelectionSet, CNavEditor::CommandNavBeginDragSelecting, CNavEditor::CommandNavBeginDragDeselecting, CNavEditor::CommandNavSplitAA, CNavEditor::CommandNavSplit, CNavEditor::CommandNavMerge, CNavEditor::CommandNavMark (22 total)
// globals: std::_Function_handler<NavSearchPosResult_t ()(Vector const&),CNavEditor::UpdateSelection(void)::{lambda(Vector const&)#1}>::_M_invoke(std::_Any_data const&,Vec, std::_Function_base::_Base_manager<CNavEditor::UpdateSelection(void)::{lambda(Vector const&)#1}>::_M_manager(std::_Any_data &,std::_Any_data const&,std::_Manage
// local variable allocation has failed, the output may be wrong!
bool __fastcall CNavEditor::UpdateSelection(CNavEditor *const this)
{
  CNavEditor *v1; // rbx
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  Vector *v5; // rdx
  bool v6; // r13
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  bool v12; // al
  ISceneViewDebugOverlays *v13; // rbx
  void (__fastcall *v14)(ISceneViewDebugOverlays *, void (__fastcall ***)(CNavPathCostCore *__hidden), char *, __int64 *, _QWORD, double); // r9
  float v15; // xmm5_4
  float v17; // xmm0_4
  float i; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  const CNavPoly *m_pSelectedArea; // rdi
  float m_flDiameterMax; // xmm8_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm8_4
  NavEdgeIndex v26; // r12
  NavEdgeIndex v27; // al
  float v28; // xmm2_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm7_4
  float v34; // xmm0_4
  vec_t v35; // xmm7_4
  float v36; // xmm10_4
  vec_t v37; // xmm6_4
  vec_t v38; // xmm2_4
  vec_t v39; // xmm1_4
  vec_t v40; // xmm3_4
  vec_t v41; // xmm0_4
  float v42; // xmm0_4
  __int64 v43; // rdx
  ISceneViewDebugOverlays *v44; // r15
  CNavArea *NavArea; // rax
  __int64 v46; // rax
  bool v47; // al
  ISceneViewDebugOverlays *v48; // r12
  __int128 v49; // [rsp-64h] [rbp-6B18h]
  float v50; // [rsp-5Ch] [rbp-6B10h]
  bool v51; // [rsp-54h] [rbp-6B08h]
  CBasePlayer *ListenServerHost; // [rsp-44h] [rbp-6AF8h]
  float v53; // [rsp-44h] [rbp-6AF8h]
  float v54; // [rsp-3Ch] [rbp-6AF0h]
  float v55; // [rsp-34h] [rbp-6AE8h]
  float v56; // [rsp-30h] [rbp-6AE4h]
  float v57; // [rsp-2Ch] [rbp-6AE0h]
  float v58; // [rsp-2Ch] [rbp-6AE0h]
  float v59; // [rsp-28h] [rbp-6ADCh]
  float v60; // [rsp-28h] [rbp-6ADCh]
  CNavEditor *v61; // [rsp-24h] [rbp-6AD8h]
  float v62; // [rsp-24h] [rbp-6AD8h]
  float v63; // [rsp-1Ch] [rbp-6AD0h]
  bool v64; // [rsp-18h] [rbp-6ACCh]
  float v65; // [rsp-18h] [rbp-6ACCh]
  float v66; // [rsp-18h] [rbp-6ACCh]
  float v67; // [rsp-8h] [rbp-6ABCh] BYREF
  _QWORD (**v68)(CPathOptimizerStraightener *__hidden, CPath *, const CPathCostBase *); // [rsp-4h] [rbp-6AB8h] OVERLAPPED BYREF
  __int64 v69; // [rsp+Ch] [rbp-6AA8h] BYREF
  __int128 vFrom; // [rsp+14h] [rbp-6AA0h] OVERLAPPED BYREF
  __int128 vDir; // [rsp+24h] [rbp-6A90h] OVERLAPPED BYREF
  __int128 vLastTest; // [rsp+34h] [rbp-6A80h] OVERLAPPED BYREF
  __int128 vStart_0; // [rsp+44h] [rbp-6A70h] OVERLAPPED BYREF
  vec_t flT0; // [rsp+54h] [rbp-6A60h]
  NavHull_t v75; // [rsp+5Ch] [rbp-6A58h] OVERLAPPED BYREF
  __int64 v76; // [rsp+6Ch] [rbp-6A48h] BYREF
  __int128 vForward; // [rsp+74h] [rbp-6A40h] OVERLAPPED
  int v78; // [rsp+84h] [rbp-6A30h]
  int v79; // [rsp+88h] [rbp-6A2Ch]
  void (__fastcall **v80)(CNavPathCostCore *__hidden); // [rsp+8Ch] [rbp-6A28h] BYREF
  Ray2D_t testRayForward; // [rsp+94h] [rbp-6A20h]
  __int64 v82; // [rsp+A4h] [rbp-6A10h]
  char v83; // [rsp+ACh] [rbp-6A08h]
  char v84; // [rsp+ADh] [rbp-6A07h]
  int v85; // [rsp+B0h] [rbp-6A04h]
  int v86; // [rsp+B4h] [rbp-6A00h]
  int v87; // [rsp+B8h] [rbp-69FCh]
  int v88; // [rsp+BCh] [rbp-69F8h]
  __int64 v89; // [rsp+CCh] [rbp-69E8h] BYREF
  Ray2D_t testRayBack; // [rsp+D4h] [rbp-69E0h]
  int v91; // [rsp+E8h] [rbp-69CCh]
  vec_t v92; // [rsp+F8h] [rbp-69BCh]
  _QWORD (***v93)(CPathOptimizerStraightener *__hidden, CPath *, const CPathCostBase *); // [rsp+596Ch] [rbp-1148h]
  void *v94; // [rsp+598Ch] [rbp-1128h] BYREF
  FuncNavOnSearchPosSimple_t funcDummy; // [rsp+5994h] [rbp-1120h] BYREF
  CNavSearchHexLattice searchLattice; // [rsp+59B4h] [rbp-1100h] BYREF
  unsigned __int64 v97; // [rsp+6A74h] [rbp-40h]
  Vector2D m_start; // 0:^48.8
  Vector v99; // 0:kr00_12.12
  Vector v100; // 0:kr14_12.12
  NavHull_t v101; // 0:kr20_12.12
  Vector v102; // 0:kr54_12.12
  NavHull_t NavHullForSelectionConstraints; // 0:rdx.8,8:xmm0_4.4

  v1 = this;
  this->m_bSplitAlongX = 0;
  v97 = __readfsqword(0x28u);
  this->m_bClimbableSurface = 0;
  this->m_flSplitEdge = 0.0;
  this->m_SplitRay.m_flRadius = 0.0;
  this->m_SplitRay.m_Extents.z = 0.0;
  x = vec3_invalid.x;
  this->m_SplitRay.m_IsRay = 1;
  y = vec3_invalid.y;
  this->m_SplitRay.m_Extents.y = 0.0;
  z = vec3_invalid.z;
  this->m_SplitRay.m_Start.x = x;
  this->m_SplitRay.m_Start.y = y;
  this->m_SplitRay.m_Extents.x = 0.0;
  this->m_SplitRay.m_Delta.x = x - x;
  this->m_SplitRay.m_Delta.y = y - y;
  this->m_SplitRay.m_Delta.z = z - z;
  this->m_SplitRay.m_StartOffset.z = 0.0;
  this->m_SplitRay.m_StartOffset.y = 0.0;
  this->m_SplitRay.m_Start.z = z;
  this->m_SplitRay.m_StartOffset.x = 0.0;
  this->m_pSelectedArea = 0;
  this->m_pSelectedLadder = 0;
  this->m_SplitRay.m_IsSwept = ((((x - x) * (x - x)) + ((y - y) * (y - y))) + ((z - z) * (z - z))) != 0.0;
  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost == 0 )
    return 0;
  LODWORD(v49) = v1->m_EditMode;
  v6 = v49 == 2;
  *(&v49 + 1) = &v69;
  v51 = v49 == 3;
  CNavEditor::GetEditVectors(&v69, (&vFrom + 8), v5);
  if ( nav_create_area_at_feet.m_pParent->m_Value.m_nValue == 0
    || *&vDir >= 0.0
    || (v17 = *((*(ListenServerHost->_vptr_IHandleEntity + 171))(ListenServerHost) + 8)) == 0.0 )
  {
    v7 = 2000.0;
    BYTE7(v49) = 0;
  }
  else
  {
    BYTE7(v49) = 1;
    v7 = (v17 * 2000.0) / (-*&vDir * 2000.0);
  }
  *(&vDir + 1) = v69;
  LODWORD(vLastTest) = vFrom;
  if ( nav_select_arc.m_pParent->m_Value.m_fValue != 0.0 )
  {
    testRayBack.m_start.x = 0.0;
    *(&v80 + 1) = *(&v69 + 1) + 0.0;
    testRayForward.m_start.x = *&vFrom + 75.0;
    *&v80 = *&v69 + 0.0;
    v89 = *(&vFrom + 1);
    VectorNormalize(&v89);
    v61 = v1;
    v59 = *&v89 * 30.0;
    v57 = 30.0 * *(&v89 + 1);
    v8 = *&v80;
    v9 = *(&v80 + 1);
    v10 = (10.0 * nav_select_arc.m_pParent->m_Value.m_fValue) + (25.0 * *&vDir);
    v11 = testRayForward.m_start.x;
    while ( 1 )
    {
      v63 = v10 - 1.0;
      *&vLastTest = v11 + (v10 - 1.0);
      *(&vDir + 2) = v8 + v59;
      *(&vDir + 3) = v9 + v57;
      v12 = CNavEditor::DoSelectionTrace(v61, &v80, (&vDir + 8), v6, v51);
      v13 = debugoverlay;
      v64 = v12;
      LODWORD(v76) = -1;
      SetIdentityMatrix(&v89);
      v91 = HIDWORD(vDir);
      testRayBack.m_start.y = *(&vDir + 2);
      v92 = *&vLastTest;
      (*(v13->_vptr_ISceneViewDebugOverlays + 18))(v13, &v89, &v76, 0, 1.0, 0.0);
      v14 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
      LODWORD(v89) = -1;
      v14(debugoverlay, &v80, &vDir + 8, &v89, 0, 0.0);
      v10 = v63;
      if ( v64 )
        break;
      v15 = testRayForward.m_start.x;
      v8 = *(&vDir + 2);
      v9 = *(&vDir + 3);
      v11 = *&vLastTest;
      v80 = *(&vDir + 1);
      LODWORD(testRayForward.m_start.x) = vLastTest;
      if ( (*&vFrom - 1000.0) > v15 )
      {
        v1 = v61;
        goto LABEL_11;
      }
    }
    v1 = v61;
    goto LABEL_20;
  }
  *(&vDir + 3) = (*(&vFrom + 3) * v7) + *(&v69 + 1);
  *&vLastTest = (*&vDir * v7) + *&vFrom;
  *(&vDir + 2) = (v7 * *(&vFrom + 2)) + *&v69;
  if ( CNavEditor::DoSelectionTrace(v1, &v69, (&vDir + 8), v6, v49 == 3) )
  {
LABEL_20:
    if ( nav_edit_test_search_lattice.m_pParent->m_Value.m_nValue != 0 )
    {
      funcDummy._M_functor._M_unused._M_member_pointer.__delta = 0;
      v94 = operator new(1u);
      funcDummy._M_manager = std::_Function_handler<NavSearchPosResult_t ()(Vector const&),CNavEditor::UpdateSelection(void)::{lambda(Vector const&)#1}>::_M_invoke;
      funcDummy._M_functor._M_unused._M_member_pointer.__delta = std::_Function_base::_Base_manager<CNavEditor::UpdateSelection(void)::{lambda(Vector const&)#1}>::_M_manager;
      NavHullForSelectionConstraints = GetNavHullForSelectionConstraints();
      v89 = *&NavHullForSelectionConstraints.m_hullCategory;
      testRayBack.m_start.x = NavHullForSelectionConstraints.m_flHullHeight;
      CNavSearchHexLattice::CNavSearchHexLattice(
        &funcDummy._M_invoker,
        &v94,
        NavHullForSelectionConstraints,
        &v1->m_vEditCursorPos,
        0,
        0x41200000u,
        100.0);
      CNavSearchHexLattice::DoSearch(&funcDummy._M_invoker);
      funcDummy._M_invoker = off_47AE230;
      CUtlVectorBase<HexIndex_t,CUtlMemoryFixedGrowable<HexIndex_t,1024ul,int>>::RemoveAll(&searchLattice.m_flMaxSearchDist);
      CUtlMemory<HexIndex_t,int>::ConvertToExternalMemory(
        &searchLattice.m_Hexes,
        &searchLattice.m_Hexes.m_Memory.m_nAllocationCount,
        1024,
        0,
        1,
        0x3FFFFFFFu);
      if ( (HIDWORD(searchLattice.m_Hexes.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<HexIndex_t,int>::Purge(&searchLattice.m_Hexes);
      if ( searchLattice.m_funcOnSearchPos._M_functor._M_unused._M_member_pointer.__delta != 0 )
        (searchLattice.m_funcOnSearchPos._M_functor._M_unused._M_member_pointer.__delta)(
          &searchLattice.m_NavHull.m_flHullHeight,
          &searchLattice.m_NavHull.m_flHullHeight,
          3);
      funcDummy._M_invoker = off_47AE210;
      if ( searchLattice.m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta != 0 )
        (searchLattice.m_funcOnSearchArea._M_functor._M_unused._M_member_pointer.__delta)(
          &searchLattice.m_nConnectionFlags,
          &searchLattice.m_nConnectionFlags,
          3);
      CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&searchLattice);
      if ( (HIDWORD(searchLattice.m_SearchHash.m_table.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&searchLattice);
      if ( funcDummy._M_functor._M_unused._M_member_pointer.__delta != 0 )
        (funcDummy._M_functor._M_unused._M_member_pointer.__delta)(&v94, &v94, 3);
    }
    if ( nav_edit_find_nearest.m_pParent->m_Value.m_nValue != 0 )
    {
      v101 = GetNavHullForSelectionConstraints();
      v43 = *&v1->m_vEditCursorPos.x;
      v75 = v101;
      v76 = v43;
      *&vForward = v1->m_vEditCursorPos.z;
      if ( CNavMesh::GetNearestPointOnMeshWithHullClearance(TheNavMesh, &v76, v49, &v80, 0) )
      {
        v44 = debugoverlay;
        DWORD2(vStart_0) = -13435086;
        SetIdentityMatrix(&v89);
        v91 = HIDWORD(v80);
        LODWORD(testRayBack.m_start.y) = v80;
        v92 = testRayForward.m_start.x;
        (*(v44->_vptr_ISceneViewDebugOverlays + 18))(v44, &v89, &vStart_0 + 8, 1, 3.0, 0.0);
        NavArea = CNavMesh::GetNavArea(TheNavMesh, &v80, v75, 2, 120.0, 5.0, 0);
        if ( NavArea != 0 )
          CNavPoly::GetClosestPointOnPolyWithHullClearance(NavArea, &v80, v49, &v89);
      }
      else
      {
        v48 = debugoverlay;
        DWORD2(vStart_0) = -13487361;
        SetIdentityMatrix(&v89);
        v91 = HIDWORD(v76);
        LODWORD(testRayBack.m_start.y) = v76;
        v92 = *&vForward;
        (*(v48->_vptr_ISceneViewDebugOverlays + 18))(v48, &v89, &vStart_0 + 8, 1, 5.0, 0.0);
      }
    }
    if ( nav_edit_path.m_pParent->m_Value.m_nValue != 0 )
    {
      *(&vLastTest + 1) = v69;
      LODWORD(vStart_0) = vFrom;
      v46 = *&v1->m_vEditCursorPos.x;
      LODWORD(v67) = vFrom;
      *(&vStart_0 + 1) = v46;
      flT0 = v1->m_vEditCursorPos.z;
      if ( CNavMesh::GetGroundHeight(TheNavMesh, *(&v49 + 1), &v67, 0) )
        *&vStart_0 = v67;
      v68 = &off_47B0ED0;
      CPath::CPath(&v89);
      if ( nav_edit_path_opt.m_pParent->m_Value.m_nValue != 0 )
        v93 = &v68;
      v75 = GetNavHullForSelectionConstraints();
      *&testRayForward.m_start.x = v75;
      *(&vForward + 1) = &v80;
      v80 = off_47AE190;
      v82 = 0;
      v83 = 1;
      v84 = 0;
      v85 = 1132068864;
      v86 = 1092616192;
      v87 = -1082130432;
      v88 = -1082130432;
      v76 = 0;
      LOBYTE(vForward) = 0;
      v78 = 1065353216;
      v79 = 1065353216;
      v47 = CPath::ComputePathPosToPosCore(&v89, &v76, (&vLastTest + 8), (&vStart_0 + 8), &v80);
      CPath::FinishComputePathWrapper(&v89, v47);
      (*(v89 + 32))(&v89, 0, 0.0);
    }
    if ( v1->m_pSelectedArea != 0 )
    {
      for ( i = *((*(ListenServerHost->_vptr_IHandleEntity + 165))(ListenServerHost) + 4); i > 360.0; i = i - 360.0 )
        ;
      for ( ; i < 0.0; i = i + 360.0 )
        ;
      if ( i >= 45.0 && i <= 315.0 && (i <= 135.0 || i >= 225.0) )
      {
        v66 = i;
        v42 = CNavMesh::SnapToGrid(v1->m_rNavMesh, i, 1);
        v1->m_bSplitAlongX = 0;
        v20 = v66;
        v1->m_flSplitEdge = v42;
      }
      else
      {
        v65 = i;
        v19 = CNavMesh::SnapToGrid(v1->m_rNavMesh, i, 1);
        v20 = v65;
        v1->m_bSplitAlongX = 1;
        v1->m_flSplitEdge = v19;
      }
      v99 = UTIL_YawToVector(v20);
      m_pSelectedArea = v1->m_pSelectedArea;
      v76 = *&v99.x;
      *&vForward = v99.z;
      m_flDiameterMax = m_pSelectedArea->m_flDiameterMax;
      v23 = v99.x * m_flDiameterMax;
      v24 = v99.y * m_flDiameterMax;
      v25 = m_flDiameterMax * v99.z;
      *&v80 = *(&vDir + 2) - v23;
      *(&v80 + 1) = *(&vDir + 3) - v24;
      *&v89 = v23 + *(&vDir + 2);
      *(&v89 + 1) = v24 + *(&vDir + 3);
      v56 = *(&vDir + 3) - v24;
      v50 = *&vLastTest - v25;
      testRayForward.m_start.x = (v23 + *(&vDir + 2)) - (*(&vDir + 2) - v23);
      v54 = testRayForward.m_start.x;
      testRayForward.m_start.y = (v24 + *(&vDir + 3)) - (*(&vDir + 3) - v24);
      v53 = v25 + *&vLastTest;
      v55 = testRayForward.m_start.y;
      v58 = v24 + *(&vDir + 3);
      v60 = *(&vDir + 2) - v23;
      v62 = v23 + *(&vDir + 2);
      testRayBack.m_start.x = (*(&vDir + 2) - v23) - (v23 + *(&vDir + 2));
      testRayBack.m_start.y = (*(&vDir + 3) - v24) - (v24 + *(&vDir + 3));
      m_start = testRayBack.m_start;
      v26 = CNavPoly::IntersectRayWithPolyEdge2D(m_pSelectedArea, &v80, 1, &vStart_0 + 2);
      v27 = CNavPoly::IntersectRayWithPolyEdge2D(v1->m_pSelectedArea, &v89, 1, &v75.m_hullCategory);
      v28 = m_start.x;
      v29 = v62;
      v30 = v60;
      v31 = v58;
      v32 = v56;
      v33 = v54;
      if ( (v27 == -1 || v26 == -1) && INavDrawArea::ms_pInst != 0 )
      {
        (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
          INavDrawArea::ms_pInst,
          v1->m_pSelectedArea,
          4284795364LL,
          1,
          &vec3_origin,
          0.0);
        v28 = m_start.x;
        v33 = v54;
        v31 = v58;
        v29 = v62;
        v32 = v56;
        v30 = v60;
      }
      v1->m_SplitRay.m_IsRay = 1;
      v34 = *(&vStart_0 + 2);
      v1->m_SplitRay.m_flRadius = 0.0;
      v1->m_SplitRay.m_Extents.z = 0.0;
      v1->m_SplitRay.m_Extents.y = 0.0;
      v1->m_SplitRay.m_Extents.x = 0.0;
      v1->m_SplitRay.m_StartOffset.z = 0.0;
      v1->m_SplitRay.m_StartOffset.y = 0.0;
      v1->m_SplitRay.m_StartOffset.x = 0.0;
      v35 = (v33 * v34) + v30;
      v36 = *&v75.m_hullCategory;
      v1->m_SplitRay.m_Start.x = v35;
      v37 = (v55 * v34) + v32;
      v1->m_SplitRay.m_Start.y = v37;
      v38 = ((v28 * v36) + v29) - v35;
      v39 = ((m_start.y * v36) + v31) - v37;
      v40 = ((v53 - v50) * v34) + v50;
      v1->m_SplitRay.m_Delta.x = v38;
      v1->m_SplitRay.m_Delta.y = v39;
      v1->m_SplitRay.m_Start.z = v40;
      v41 = (((v50 - v53) * v36) + v53) - v40;
      v1->m_SplitRay.m_Delta.z = v41;
      v1->m_SplitRay.m_IsSwept = (((v38 * v38) + (v39 * v39)) + (v41 * v41)) != 0.0;
    }
    if ( !v1->m_bClimbableSurface && !v51 )
    {
      v100 = CNavMesh::SnapToGrid(v1->m_rNavMesh, &v1->m_vEditCursorPos, 1, 1, 0);
      v89 = *&v100.x;
      testRayBack.m_start.x = v100.z;
      v1->m_vEditCursorPos.z = v100.z;
      v1->m_vEditCursorPos.x = v100.x;
      v1->m_vEditCursorPos.y = *(&v89 + 1);
    }
    return 1;
  }
LABEL_11:
  if ( BYTE7(v49) != 0 )
  {
    v102 = CNavMesh::SnapToGrid(v1->m_rNavMesh, (&vDir + 8), 1, 1, 0);
    v89 = *&v102.x;
    testRayBack.m_start.x = v102.z;
    v1->m_vEditCursorPos.z = v102.z;
    v1->m_vEditCursorPos.x = v102.x;
    v1->m_vEditCursorPos.y = *(&v89 + 1);
  }
  if ( (v49 - 2) <= 1 )
    return 0;
  if ( v1->m_pSelectedArea != 0 || v1->m_pSelectedLadder != 0 )
    return 1;
  return BYTE7(v49);
}


// CNavEditor::SetupLadderAnchorAndNormal  (line 627, @0x0000000002ed3a50, libserver.so)  // inlines: operator=
void __fastcall CNavEditor::SetupLadderAnchorAndNormal(CNavEditor *const this)
{
  this->m_vLadderAnchor = this->m_vEditCursorPos;
  this->m_vLadderNormal = this->m_vSurfaceNormal;
}


// CNavEditor::FindLadderCorners  (line 635, @0x0000000002ecb1c0, libserver.so)  // inlines: GetEditVectors, Init, LengthSqr, Ray_t, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-, operator=
// calls: VectorVectors, CNavEditor::GetEditVectors, IntersectRayWithTriangle
// callers: CNavEditor::FindLadderCorners
bool __fastcall CNavEditor::FindLadderCorners(
        CNavEditor *const this,
        const Vector *const vEditCursorPos,
        Vector *pCorner1Out,
        Vector *pCorner2Out,
        Vector *pCorner3Out)
{
  Vector *v10; // rdx
  float y; // xmm10_4
  float z; // xmm9_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  float v18; // xmm5_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  vec_t v22; // xmm10_4
  vec_t v23; // xmm3_4
  vec_t v24; // xmm3_4
  vec_t v25; // xmm10_4
  vec_t v26; // xmm3_4
  vec_t v27; // xmm0_4
  float x; // xmm4_4
  float v29; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  vec_t v33; // xmm2_4
  vec_t v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm3_4
  float v40; // xmm2_4
  vec_t v41; // xmm5_4
  vec_t v42; // xmm1_4
  vec_t v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm4_4
  float v46; // xmm0_4
  float v47; // xmm5_4
  vec_t v48; // xmm0_4
  float v49; // xmm4_4
  Vector vLadderRight; // [rsp+10h] [rbp-C0h] BYREF
  Vector vLadderUp; // [rsp+20h] [rbp-B0h] BYREF
  Vector vFrom; // [rsp+30h] [rbp-A0h] BYREF
  Vector vDir; // [rsp+40h] [rbp-90h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-80h] BYREF

  VectorVectors(&this->m_vLadderNormal, &vLadderRight, &vLadderUp);
  CNavEditor::GetEditVectors(&vFrom, &vDir, v10);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Delta.x = ((vDir.x * 100000.0) + vFrom.x) - vFrom.x;
  ray.m_Delta.y = ((vDir.y * 100000.0) + vFrom.y) - vFrom.y;
  ray.m_Delta.z = ((vDir.z * 100000.0) + vFrom.z) - vFrom.z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  y = vec3_origin.y;
  z = vec3_origin.z;
  ray.m_Extents.x = (vec3_origin.x - vec3_origin.x) * 0.5;
  ray.m_Extents.y = (y - y) * 0.5;
  ray.m_Extents.z = (z - z) * 0.5;
  v13 = (vec3_origin.x + vec3_origin.x) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v14 = (y + y) * 0.5;
  v15 = (z + z) * 0.5;
  ray.m_Start.x = vFrom.x + v13;
  ray.m_StartOffset.x = -v13;
  ray.m_StartOffset.y = -v14;
  ray.m_Start.y = vFrom.y + v14;
  ray.m_Start.z = vFrom.z + v15;
  ray.m_StartOffset.z = -v15;
  v16 = vLadderUp.x * 100000.0;
  v17 = vLadderUp.y * 100000.0;
  v18 = vLadderRight.x * 100000.0;
  v19 = vLadderRight.y * 100000.0;
  v20 = vLadderRight.z * 100000.0;
  v21 = 100000.0 * vLadderUp.z;
  v22 = (this->m_vLadderAnchor.x + (vLadderUp.x * 100000.0)) + (vLadderRight.x * 100000.0);
  v23 = (this->m_vLadderAnchor.z + (100000.0 * vLadderUp.z)) + (vLadderRight.z * 100000.0);
  pCorner1Out->y = (this->m_vLadderAnchor.y + (vLadderUp.y * 100000.0)) + (vLadderRight.y * 100000.0);
  pCorner1Out->x = v22;
  pCorner1Out->z = v23;
  v24 = (this->m_vLadderAnchor.z + v21) - v20;
  v25 = (this->m_vLadderAnchor.x + v16) - v18;
  pCorner2Out->y = (this->m_vLadderAnchor.y + v17) - v19;
  pCorner2Out->z = v24;
  pCorner2Out->x = v25;
  v26 = (this->m_vLadderAnchor.y - v17) - v19;
  v27 = (this->m_vLadderAnchor.z - v21) - v20;
  x = this->m_vLadderAnchor.x;
  pCorner3Out->y = v26;
  pCorner3Out->z = v27;
  pCorner3Out->x = (x - v16) - v18;
  v29 = IntersectRayWithTriangle(&ray, pCorner1Out, pCorner2Out, pCorner3Out, 0);
  if ( v29 < 0.0 )
  {
    v45 = this->m_vLadderAnchor.z - (vLadderUp.z * 100000.0);
    v46 = vLadderRight.z * 100000.0;
    v47 = this->m_vLadderAnchor.x - (vLadderUp.x * 100000.0);
    pCorner2Out->y = (vLadderRight.y * 100000.0) + (this->m_vLadderAnchor.y - (vLadderUp.y * 100000.0));
    v48 = v46 + v45;
    v49 = vLadderRight.x * 100000.0;
    pCorner2Out->z = v48;
    pCorner2Out->x = v49 + v47;
    v29 = IntersectRayWithTriangle(&ray, pCorner1Out, pCorner2Out, pCorner3Out, 0);
  }
  pCorner3Out->x = vEditCursorPos->x;
  pCorner3Out->y = vEditCursorPos->y;
  pCorner3Out->z = vEditCursorPos->z;
  if ( v29 <= 0.0 || v29 >= 100000.0 )
    return 0;
  v31 = vDir.y * v29;
  v32 = vLadderUp.z;
  v33 = ((vDir.z * v29) * 100000.0) + vFrom.z;
  v34 = ((v29 * vDir.x) * 100000.0) + vFrom.x;
  pCorner3Out->y = (v31 * 100000.0) + vFrom.y;
  v35 = vLadderUp.x;
  pCorner3Out->z = v33;
  pCorner3Out->x = v34;
  v36 = this->m_vLadderAnchor.z;
  v37 = (v33 - v36) / v32;
  v38 = vLadderUp.y * v37;
  v39 = v35 * v37;
  v40 = v37 * v32;
  v41 = this->m_vLadderAnchor.x + v39;
  pCorner1Out->y = this->m_vLadderAnchor.y + v38;
  pCorner1Out->x = v41;
  pCorner1Out->z = v36 + v40;
  v42 = pCorner3Out->y - v38;
  v43 = pCorner3Out->z - v40;
  v44 = pCorner3Out->x;
  pCorner2Out->y = v42;
  pCorner2Out->z = v43;
  pCorner2Out->x = v44 - v39;
  return 1;
}


// CNavEditor::FindLadderCorners  (line 635, @0x0000000002ed3ab0, libserver.so)
// calls: CNavEditor::FindLadderCorners
// callers: CNavEditor::CommandNavEndArea, CNavEditor::DrawEditMode
bool __fastcall CNavEditor::FindLadderCorners(
        CNavEditor *const this,
        const Vector *const vEditCursorPos,
        Vector *pCorner1Out,
        Vector *pCorner2Out,
        Vector *pCorner3Out)
{
  return pCorner2Out != 0
      && pCorner1Out != 0
      && pCorner3Out != 0
      && CNavEditor::FindLadderCorners(this, vEditCursorPos, pCorner1Out, pCorner2Out, pCorner3Out);
}


// CheckForClimbableSurface  (line 680, @0x0000000002ed3ae0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, GetTraceMaskSolidBrushOnly, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: StepAlongClimbableSurface
bool __fastcall CheckForClimbableSurface(const Vector *const vStart, const Vector *const vEnd)
{
  float x; // xmm6_4
  float y; // xmm5_4
  uint64 v6; // r14
  float z; // xmm4_4
  float v8; // xmm2_4
  ConVar *m_pParent; // rax
  float m_fValue; // xmm1_4
  float v11; // xmm1_4
  bool result; // al
  CTraceFilterSimple v13; // [rsp+0h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-120h] BYREF
  CGameTrace v15; // [rsp+90h] [rbp-D0h] BYREF

  memset(&v15.m_ShapeAttributes, 0, 31);
  v15.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v15);
  x = vStart->x;
  ray.m_Start.w = 0.0;
  y = vStart->y;
  memset(&ray.m_Delta.w, 0, 36);
  v6 = CNavConfig::ms_TraceMaskSolidBrushOnly;
  z = vStart->z;
  v8 = vEnd->z;
  ray.m_Delta.y = vEnd->y - y;
  m_pParent = phys_traceline_radius.m_pParent;
  ray.m_Delta.z = v8 - z;
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_Start.x = x;
  ray.m_Start.y = y;
  ray.m_flRadius = m_fValue;
  v11 = vEnd->x;
  ray.m_Start.z = z;
  ray.m_IsRay = 1;
  ray.m_Delta.x = v11 - x;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v13, 0, 4, 0);
  v13.m_attr.m_nInteractsWith |= v6;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v13, &v15);
  if ( v15.fraction == 1.0 )
    return 0;
  result = v15.m_pSurfaceProperties->m_gameProperties.m_bClimbable;
  if ( !result )
    return (v15.contents & 0x100) != 0;
  return result;
}


// StepAlongClimbableSurface  (line 700, @0x0000000002ed3cd0, libserver.so)  // inlines: VectorAdd, VectorSubtract, operator+, operator+=, operator-
// calls: CheckForClimbableSurface
// callers: CNavEditor::CommandNavBuildLadder
void __fastcall StepAlongClimbableSurface(
        Vector *const vPos,
        const Vector *const vIncrement,
        const Vector *const vProbe)
{
  float x; // xmm0_4
  float y; // xmm1_4
  float i; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float z; // xmm3_4
  float v16; // xmm2_4
  Vector vStart; // [rsp+0h] [rbp-50h] BYREF
  Vector vEnd; // [rsp+10h] [rbp-40h] BYREF

  x = vPos->x;
  y = vPos->y;
  for ( i = vPos->z; ; vPos->z = i )
  {
    v11 = vProbe->x;
    v12 = y + vIncrement->y;
    v13 = x + vIncrement->x;
    v14 = vProbe->y;
    z = vProbe->z;
    v16 = i + vIncrement->z;
    vStart.x = v13 - vProbe->x;
    vEnd.x = v13 + v11;
    vStart.y = v12 - v14;
    vEnd.y = v12 + v14;
    vStart.z = v16 - z;
    vEnd.z = v16 + z;
    if ( !CheckForClimbableSurface(&vStart, &vEnd) )
      break;
    v9 = vPos->y;
    x = vPos->x + vIncrement->x;
    v10 = vPos->z;
    vPos->x = x;
    y = v9 + vIncrement->y;
    vPos->y = y;
    i = v10 + vIncrement->z;
  }
}


// CNavEditor::CommandNavBuildLadder  (line 710, @0x0000000002ed3dc0, libserver.so)  // inlines: DistTo, FastSqrt, Length, SetupLadderAnchorAndNormal, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: VectorVectors, StepAlongClimbableSurface, CNavMesh::CreateLadder
// callers: CommandNavBuildLadder
void __fastcall CNavEditor::CommandNavBuildLadder(CNavEditor *const this)
{
  float x; // xmm3_4
  vec_t y; // xmm0_4
  float v4; // xmm2_4
  float z; // xmm1_4
  vec_t v6; // xmm0_4
  __int64 v7; // rdx
  vec_t v8; // xmm2_4
  vec_t v9; // eax
  vec_t v10; // xmm1_4
  Vector vRight; // [rsp+10h] [rbp-B0h] BYREF
  Vector vUp; // [rsp+20h] [rbp-A0h] BYREF
  Vector vLeftEdge; // [rsp+30h] [rbp-90h] BYREF
  Vector vRightEdge; // [rsp+40h] [rbp-80h] BYREF
  Vector vProbe; // [rsp+50h] [rbp-70h] BYREF
  Vector topEdge; // [rsp+60h] [rbp-60h] BYREF
  Vector bottomEdge; // [rsp+70h] [rbp-50h] BYREF
  Vector forward; // [rsp+80h] [rbp-40h] BYREF

  if ( this->m_EditMode == INavEditor::EditModeType::NORMAL && this->m_bClimbableSurface )
  {
    x = this->m_vSurfaceNormal.x;
    this->m_vLadderAnchor.x = this->m_vEditCursorPos.x;
    y = this->m_vEditCursorPos.y;
    v4 = this->m_vSurfaceNormal.y;
    this->m_vLadderNormal.x = x;
    z = this->m_vSurfaceNormal.z;
    this->m_vLadderAnchor.y = y;
    v6 = this->m_vEditCursorPos.z;
    this->m_vLadderNormal.y = v4;
    this->m_vLadderNormal.z = z;
    this->m_vLadderAnchor.z = v6;
    forward.x = -x;
    forward.y = -v4;
    forward.z = -z;
    VectorVectors(&forward, &vRight, &vUp);
    v7 = *&this->m_vEditCursorPos.x;
    v8 = this->m_vSurfaceNormal.z * -16.0;
    v9 = this->m_vEditCursorPos.z;
    v10 = -16.0 * this->m_vSurfaceNormal.x;
    vProbe.y = this->m_vSurfaceNormal.y * -16.0;
    vProbe.z = v8;
    vProbe.x = v10;
    *&vLeftEdge.x = v7;
    *&vRightEdge.x = v7;
    vLeftEdge.z = v9;
    vRightEdge.z = v9;
    forward.x = -vRight.x;
    forward.y = -vRight.y;
    forward.z = -vRight.z;
    StepAlongClimbableSurface(&vLeftEdge, &forward, &vProbe);
    forward = vRight;
    StepAlongClimbableSurface(&vRightEdge, &forward, &vProbe);
    topEdge.y = (vLeftEdge.y + vRightEdge.y) * 0.5;
    topEdge.x = (vLeftEdge.x + vRightEdge.x) * 0.5;
    forward = vUp;
    topEdge.z = (vLeftEdge.z + vRightEdge.z) * 0.5;
    bottomEdge = topEdge;
    StepAlongClimbableSurface(&topEdge, &forward, &vProbe);
    forward.y = -vUp.y;
    forward.z = -vUp.z;
    forward.x = -vUp.x;
    StepAlongClimbableSurface(&bottomEdge, &forward, &vProbe);
    CNavMesh::CreateLadder(
      this->m_rNavMesh,
      &topEdge,
      &bottomEdge,
      fsqrt(
        (((vLeftEdge.x - vRightEdge.x) * (vLeftEdge.x - vRightEdge.x))
       + ((vLeftEdge.y - vRightEdge.y) * (vLeftEdge.y - vRightEdge.y)))
      + ((vLeftEdge.z - vRightEdge.z) * (vLeftEdge.z - vRightEdge.z))),
      &this->m_vSurfaceNormal,
      0.0);
  }
}


// CNavEditor::UpdateDragSelectionSet  (line 845, @0x0000000002eeb0f0, libserver.so)  // inlines: AddToDragSet, AddToSet, AddToTail, ClearSet, CopyConstruct<CNavArea*>, Element, ForAllAreas<AddToDragSet>, GetCenter, GetEditCursorPosition, GrowMemory, IsInSet, Max<float>, Min<float>, RemoveAll, operator(), operator=, operator[]
// calls: UTIL_GetListenServerHost, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CNavPoly::IsOverlappingExtent, CUtlMemory<CNavArea*, int>::Grow
// callers: CNavEditor::DrawEditMode
void __fastcall CNavEditor::UpdateDragSelectionSet(CNavEditor *const this)
{
  float x; // xmm2_4
  CNavSelectionSet *p_m_DragSelectionSet; // rdi
  float v4; // xmm0_4
  float y; // xmm1_4
  float v6; // xmm3_4
  bool m_bIsDragDeselecting; // r12
  CNavMesh *m_rNavMesh; // r13
  int v9; // esi
  float v10; // xmm0_4
  int v11; // r9d
  int v12; // r8d
  float v13; // xmm2_4
  float m_nDragSelectionVolumeZMax; // xmm1_4
  float v15; // xmm4_4
  int m_Size; // eax
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  CNavArea *v19; // rbx
  float z; // xmm0_4
  CNavSelectionSet *m_rDragSelectionSet; // r12
  __int64 v22; // rax
  int v23; // ecx
  CNavArea **v24; // rax
  int v25; // [rsp+4h] [rbp-8Ch]
  CNavArea *v26; // [rsp+20h] [rbp-70h] BYREF
  CNavArea *v27; // [rsp+28h] [rbp-68h] BYREF
  AddToDragSet add; // [rsp+30h] [rbp-60h] BYREF

  if ( UTIL_GetListenServerHost() != 0 )
  {
    x = this->m_vEditCursorPos.x;
    add.m_nTolerance = 1;
    p_m_DragSelectionSet = &this->m_DragSelectionSet;
    v4 = this->m_vAnchor.x;
    add.m_rDragSelectionSet = &this->m_DragSelectionSet;
    y = this->m_vEditCursorPos.y;
    this->m_DragSelectionSet.m_SetAreas.m_Size = 0;
    v6 = v4;
    m_bIsDragDeselecting = this->m_bIsDragDeselecting;
    m_rNavMesh = this->m_rNavMesh;
    v9 = fmaxf(v4, x);
    v10 = this->m_vAnchor.y;
    v11 = fminf(v6, x);
    add.m_bDragDeselecting = m_bIsDragDeselecting;
    v12 = fminf(v10, y);
    v13 = fmaxf(v10, y);
    m_nDragSelectionVolumeZMax = this->m_nDragSelectionVolumeZMax;
    add.m_dragExtent.lo.z = this->m_vAnchor.z;
    add.m_dragExtent.hi.z = add.m_dragExtent.lo.z;
    v15 = add.m_dragExtent.lo.z - this->m_nDragSelectionVolumeZMin;
    add.m_zMax = (m_nDragSelectionVolumeZMax + add.m_dragExtent.lo.z) + 1;
    add.m_dragExtent.lo.x = v11;
    add.m_zMin = v15 - 1;
    add.m_dragExtent.lo.y = v12;
    add.m_dragExtent.hi.x = v9;
    add.m_dragExtent.hi.y = v13;
    m_Size = m_rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v17 = 0;
      v18 = 8LL * (m_Size - 1) + 8;
      while ( 1 )
      {
        v19 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v17 / 8];
        v26 = v19;
        if ( (CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&p_m_DragSelectionSet->m_SetAreas, &v26) != -1) != m_bIsDragDeselecting )
          goto LABEL_4;
        if ( !CNavPoly::IsOverlappingExtent(v19, &add.m_dragExtent) )
          goto LABEL_4;
        z = v19->m_vCenter.z;
        if ( z < add.m_zMin )
          goto LABEL_4;
        if ( add.m_zMax < z )
          goto LABEL_4;
        m_rDragSelectionSet = add.m_rDragSelectionSet;
        v27 = v19;
        if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&add.m_rDragSelectionSet->m_SetAreas, &v27) != -1 )
          goto LABEL_4;
        v22 = m_rDragSelectionSet->m_SetAreas.m_Size;
        v23 = m_rDragSelectionSet->m_SetAreas.m_Size;
        if ( v22 == m_rDragSelectionSet->m_SetAreas.m_Memory.m_nAllocationCount )
        {
          v25 = m_rDragSelectionSet->m_SetAreas.m_Size;
          CUtlMemory<CNavArea *,int>::Grow(&m_rDragSelectionSet->m_SetAreas.m_Memory, 1);
          v23 = m_rDragSelectionSet->m_SetAreas.m_Size;
          v22 = v25;
        }
        m_rDragSelectionSet->m_SetAreas.m_Size = v23 + 1;
        v24 = &m_rDragSelectionSet->m_SetAreas.m_Memory.m_pMemory[v22];
        if ( v24 != 0 )
        {
          v17 += 8LL;
          *v24 = v19;
          if ( v17 == v18 )
            return;
        }
        else
        {
LABEL_4:
          v17 += 8LL;
          if ( v17 == v18 )
            return;
        }
        m_bIsDragDeselecting = add.m_bDragDeselecting;
        p_m_DragSelectionSet = add.m_rDragSelectionSet;
      }
    }
  }
}


// CNavEditor::DrawEditMode  (line 872, @0x0000000002eff440, libserver.so)  // inlines: AddDirectionVector, AddToSelectionSet, AddToSet, AddToTail, Begin, CNavConnectOutIterator, CopyConstruct<CNavArea*>, Count, DistToSqr, DrawArea, DrawPolyFilled, DrawPolyOutline, DrawSelectionSet, Element, GetAdjacentAreas, GetArea, GetBackEdgeIndex, GetBool, GetCenter, GetEditVectors, GetExtent, GetFirst, GetFloat, GetInt, GetTeamNumber, GetZ, GrowMemory, HasAnyFlags, HasAttributes, HasAvoidanceObstacle, Init, IsElapsed, IsInSelectionSet, IsInSet, LengthSqr, NavDrawLine, NetworkStateChanged, Next, RemoveFromSelectionSet, RemoveFromSet, Set, SetValue, Start, V_strncat<long unsigned int>, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator(), operator*, operator+, operator-, operator=, operator=<float>, operator[]
// calls: UTIL_GetListenServerHost, CNavMesh::IsGenerating, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, CNavEditor::GetEditVectors, CNavNode::Draw, CNavEditor::UpdateSelection, NavDrawGetColor, NDebugOverlay::Line, EntityFromEntityHandle, GetGlobalTeam (41 total)
// callers: CNavEditor::Update
// strings: "sb_perf_collect", "Ladder #%d (Team %s)\n", "%d Connections ", "Area #%d %s %s\n", " - gen info = %d, hull support = %x\n", "UNDERWATER " (10 total)
// globals: `guard variable for'CNavEditor::DrawEditMode(void)::sb_perf_collect, CNavEditor::DrawEditMode(void)::sb_perf_collect, s_dragSelectionSetDeleteColor, s_dragSelectionSetAddColor
void __fastcall CNavEditor::DrawEditMode(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  Vector *v3; // rdx
  CNavNode *v4; // r13
  float v5; // xmm3_4
  __m128i v6; // xmm4
  __m128i x_low; // xmm5
  __m128i v8; // xmm6
  float v9; // r14d
  float v10; // r13d
  float v11; // r15d
  Color Color; // eax
  float v13; // xmm3_4
  float v14; // xmm4_4
  Color v15; // eax
  Color v16; // eax
  double v17; // xmm1_8
  INavEditor::EditModeType m_EditMode; // eax
  CNavLadder *m_pSelectedLadder; // rsi
  bool v20; // zf
  CNavMesh *v21; // rax
  INavEntityInterface *m_pEntityInterface; // rdi
  IHandleEntity *v23; // rax
  CBaseEntity *v24; // rax
  CTeam *GlobalTeam; // rax
  const char *v26; // rax
  float v27; // xmm2_4
  CNavLadder *m_pMarkedLadder; // rdi
  CNavArea *m_pMarkedArea; // rsi
  CNavArea *m_pSelectedArea; // rax
  ConVar *m_pParent; // rdx
  double v32; // xmm0_8
  double v33; // xmm2_8
  double v34; // xmm3_8
  double v35; // xmm4_8
  double v36; // xmm5_8
  double v37; // xmm6_8
  __int64 v38; // r13
  const CUtlVector<CNavAttributeLookup,CUtlMemory<CNavAttributeLookup,int> > *AttributeTable; // rax
  CNavMesh *v40; // r13
  int v41; // eax
  float v42; // xmm0_4
  float v43; // xmm1_4
  CNavSelectionSet *p_m_SelectionSet; // rdi
  unsigned __int64 v45; // r12
  CNavArea *v46; // r14
  int v47; // eax
  unsigned __int64 v48; // r14
  const CNavArea *v49; // r10
  int m_nVerts; // edi
  int j; // r12d
  int *m_pData; // rax
  int v53; // r15d
  CNavArea *v54; // rsi
  _DWORD *k; // rcx
  _DWORD *v56; // r8
  int v57; // eax
  CNavArea *v58; // rdi
  int TotalAdjacentCount; // eax
  char *v60; // rax
  unsigned __int64 v61; // r15
  float *v62; // r14
  const Vector *AbsOrigin; // rax
  CNavArea *v64; // r14
  CNavMesh *m_rNavMesh; // r13
  __int64 v66; // r15
  int v67; // eax
  CNavArea **v68; // rax
  Color v69; // eax
  vec_t v70; // xmm2_4
  vec_t v71; // xmm1_4
  int v72; // xmm0_4
  CNavArea *v73; // rax
  vec_t v74; // r15d
  vec_t v75; // r14d
  float v76; // r13d
  float i; // xmm0_4
  float v78; // xmm2_4
  vec_t v79; // xmm0_4
  CNavArea *v80; // rdi
  float v81; // xmm1_4
  float v82; // xmm0_4
  Color v83; // eax
  vec_t v84; // xmm0_4
  CNavArea *v85; // rdi
  float m_flSplitEdge; // xmm1_4
  float v87; // r14d
  float v88; // r13d
  Color v89; // eax
  float v90; // r15d
  Color v91; // eax
  float v92; // r15d
  Color v93; // eax
  float v94; // r15d
  unsigned int v95; // eax
  int v96; // ecx
  float v97; // xmm2_4
  unsigned int v98; // r8d
  int v99; // edx
  vec_t z; // xmm1_4
  float v101; // xmm0_4
  vec_t v102; // xmm1_4
  float v103; // xmm0_4
  int v104; // xmm0_4
  vec_t v105; // xmm1_4
  int v106; // xmm0_4
  vec_t v107; // xmm1_4
  NavEditColor v108; // r15d
  Color v109; // eax
  vec_t v110; // xmm0_4
  float v111; // xmm3_4
  int v112; // xmm4_4
  Color v113; // eax
  Color v114; // eax
  unsigned int v115; // eax
  float v116; // xmm4_4
  vec_t v117; // xmm3_4
  float v118; // xmm0_4
  vec_t v119; // xmm1_4
  vec_t v120; // xmm4_4
  vec_t v121; // xmm2_4
  int v122; // xmm2_4
  vec_t v123; // xmm1_4
  Color *v124; // rax
  int m_Size; // eax
  unsigned __int64 v126; // r15
  __int64 v127; // r14
  CNavArea *v128; // rdi
  float v129; // [rsp+Ch] [rbp-1F4h]
  float v130; // [rsp+Ch] [rbp-1F4h]
  CNavArea *pNearestArea; // [rsp+10h] [rbp-1F0h]
  float pNearestAreaa; // [rsp+10h] [rbp-1F0h]
  float pNearestAreab; // [rsp+10h] [rbp-1F0h]
  float pNearestAreac; // [rsp+10h] [rbp-1F0h]
  float pNearestAread; // [rsp+10h] [rbp-1F0h]
  float pNearestAreae; // [rsp+10h] [rbp-1F0h]
  float v137; // [rsp+18h] [rbp-1E8h]
  __int64 v138; // [rsp+18h] [rbp-1E8h]
  float v139; // [rsp+20h] [rbp-1E0h]
  float v140; // [rsp+20h] [rbp-1E0h]
  vec_t v141; // [rsp+20h] [rbp-1E0h]
  float flNearRange; // [rsp+24h] [rbp-1DCh]
  float flNearRangea; // [rsp+24h] [rbp-1DCh]
  float x; // [rsp+28h] [rbp-1D8h]
  __int64 xa; // [rsp+28h] [rbp-1D8h]
  float xb; // [rsp+28h] [rbp-1D8h]
  float xc; // [rsp+28h] [rbp-1D8h]
  float src; // [rsp+30h] [rbp-1D0h]
  float srcb; // [rsp+30h] [rbp-1D0h]
  float srcc; // [rsp+30h] [rbp-1D0h]
  float srcd; // [rsp+30h] [rbp-1D0h]
  CNavArea **srca; // [rsp+30h] [rbp-1D0h]
  float ye; // [rsp+38h] [rbp-1C8h]
  float yf; // [rsp+38h] [rbp-1C8h]
  float yg; // [rsp+38h] [rbp-1C8h]
  float y; // [rsp+38h] [rbp-1C8h]
  __int64 ya; // [rsp+38h] [rbp-1C8h]
  float yc; // [rsp+38h] [rbp-1C8h]
  float yh; // [rsp+38h] [rbp-1C8h]
  float yd; // [rsp+38h] [rbp-1C8h]
  const CNavArea *yb; // [rsp+38h] [rbp-1C8h]
  float yi; // [rsp+38h] [rbp-1C8h]
  float yj; // [rsp+38h] [rbp-1C8h]
  float yk; // [rsp+38h] [rbp-1C8h]
  float yl; // [rsp+38h] [rbp-1C8h]
  CNavArea *v166; // [rsp+48h] [rbp-1B8h] BYREF
  Vector vFrom; // [rsp+50h] [rbp-1B0h] BYREF
  Vector vDir; // [rsp+60h] [rbp-1A0h] BYREF
  Vector vCorner1; // [rsp+70h] [rbp-190h] BYREF
  Vector vCorner2; // [rsp+80h] [rbp-180h] BYREF
  Vector vCorner3; // [rsp+90h] [rbp-170h] BYREF
  Vector target; // [rsp+A0h] [rbp-160h] BYREF
  DrawSelectionSet drawScan; // [rsp+B0h] [rbp-150h] BYREF
  char buffer_0[80]; // [rsp+D0h] [rbp-130h] BYREF
  char attrib[80]; // [rsp+120h] [rbp-E0h] BYREF
  char locName[80]; // [rsp+170h] [rbp-90h] BYREF
  unsigned __int64 v177; // [rsp+1C8h] [rbp-38h]

  v177 = __readfsqword(0x28u);
  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && !CNavMesh::IsGenerating(this->m_rNavMesh) )
  {
    if ( `guard variable for'CNavEditor::DrawEditMode(void)::sb_perf_collect == 0
      && __cxa_guard_acquire(&`guard variable for'CNavEditor::DrawEditMode(void)::sb_perf_collect) != 0 )
    {
      ConVarRef::ConVarRef(&CNavEditor::DrawEditMode(void)::sb_perf_collect, "sb_perf_collect");
      __cxa_guard_release(&`guard variable for'CNavEditor::DrawEditMode(void)::sb_perf_collect);
    }
    (*(CNavEditor::DrawEditMode(void)::sb_perf_collect.m_pConVar->_vptr_IConVar + 2))(
      CNavEditor::DrawEditMode(void)::sb_perf_collect.m_pConVar,
      0);
    CNavEditor::GetEditVectors(&vFrom, &vDir, v3);
    src = vDir.x;
    x = vDir.y;
    flNearRange = vFrom.x;
    v137 = vFrom.y;
    if ( nav_show_nodes.m_pParent->m_Value.m_nValue != 0 )
    {
      v4 = CNavNode::m_list;
      if ( CNavNode::m_list != 0 )
      {
        v5 = 22500.0;
        do
        {
          while ( v5 <= ((((this->m_vEditCursorPos.x - v4->m_pos.x) * (this->m_vEditCursorPos.x - v4->m_pos.x))
                        + ((this->m_vEditCursorPos.y - v4->m_pos.y) * (this->m_vEditCursorPos.y - v4->m_pos.y)))
                       + ((this->m_vEditCursorPos.z - v4->m_pos.z) * (this->m_vEditCursorPos.z - v4->m_pos.z))) )
          {
            v4 = v4->m_next;
            if ( v4 == 0 )
              goto LABEL_13;
          }
          ye = v5;
          CNavNode::Draw(v4);
          v4 = v4->m_next;
          v5 = ye;
        }
        while ( v4 != 0 );
      }
    }
LABEL_13:
    if ( CNavEditor::UpdateSelection(this)
      || this->m_pMarkedArea != 0
      || this->m_pMarkedLadder != 0
      || this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size != 0
      || (this->m_EditMode - 2) <= 1 )
    {
      if ( this->m_bClimbableSurface )
      {
        NDebugOverlay::Cross3D(&this->m_vEditCursorPos, 10.0, 0, 255, 0, 1, 0.01023);
      }
      else
      {
        v6 = 0;
        x_low = LODWORD(this->m_vEditCursorPos.x);
        v8 = 0x41200000u;
        *v6.m128i_i32 = this->m_vEditCursorPos.y + 0.0;
        *v8.m128i_i32 = this->m_vEditCursorPos.z + 10.0;
        *x_low.m128i_i32 = *x_low.m128i_i32 + 0.0;
        v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
        v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
        Color = NavDrawGetColor(NavEditColor::NavCursorColor);
        v13 = this->m_vEditCursorPos.y;
        v14 = this->m_vEditCursorPos.x;
        target.z = this->m_vEditCursorPos.z + 1.0;
        target.y = v13 + 0.0;
        *&drawScan.m_nCount = v11 + 0.0;
        target.x = v14 + 0.0;
        drawScan.m_vShift.x = v9 + 0.0;
        drawScan.m_vShift.y = v10 + 1.0;
        NDebugOverlay::Line(&drawScan, &target, Color._color[0], Color._color[1], Color._color[2], 0, 0.15000001);
        v129 = this->m_vEditCursorPos.x;
        v139 = this->m_vEditCursorPos.y + 0.0;
        yf = this->m_vEditCursorPos.z + 0.0;
        v15 = NavDrawGetColor(NavEditColor::NavCursorColor);
        target.z = yf + 1.0;
        *&drawScan.m_nCount = (v129 + 10.0) + 0.0;
        drawScan.m_vShift.y = yf + 1.0;
        target.x = (v129 - 10.0) + 0.0;
        target.y = v139 + 0.0;
        drawScan.m_vShift.x = v139 + 0.0;
        NDebugOverlay::Line(&drawScan, &target, v15._color[0], v15._color[1], v15._color[2], 0, 0.15000001);
        v140 = this->m_vEditCursorPos.y;
        v130 = this->m_vEditCursorPos.x + 0.0;
        yg = this->m_vEditCursorPos.z + 0.0;
        v16 = NavDrawGetColor(NavEditColor::NavCursorColor);
        target.x = v130 + 0.0;
        target.y = (v140 - 10.0) + 0.0;
        target.z = yg + 1.0;
        *&drawScan.m_nCount = v130 + 0.0;
        drawScan.m_vShift.x = (v140 + 10.0) + 0.0;
        drawScan.m_vShift.y = yg + 1.0;
        NDebugOverlay::Line(&drawScan, &target, v16._color[0], v16._color[1], v16._color[2], 0, 0.15000001);
        if ( nav_show_compass.m_pParent->m_Value.m_nValue != 0 )
        {
          z = this->m_vEditCursorPos.z;
          drawScan.m_nCount = LODWORD(this->m_vEditCursorPos.x);
          v101 = this->m_vEditCursorPos.y;
          drawScan.m_vShift.y = z;
          drawScan.m_vShift.x = v101 - 15.0;
          NDebugOverlay::Text(&drawScan, "N", 0, 0.01023);
          v102 = this->m_vEditCursorPos.z;
          drawScan.m_nCount = LODWORD(this->m_vEditCursorPos.x);
          v103 = this->m_vEditCursorPos.y;
          drawScan.m_vShift.y = v102;
          drawScan.m_vShift.x = v103 + 15.0;
          NDebugOverlay::Text(&drawScan, "S", 0, 0.01023);
          *&v104 = this->m_vEditCursorPos.x + 15.0;
          drawScan.m_vShift.x = this->m_vEditCursorPos.y;
          v105 = this->m_vEditCursorPos.z;
          drawScan.m_nCount = v104;
          drawScan.m_vShift.y = v105;
          NDebugOverlay::Text(&drawScan, "E", 0, 0.01023);
          *&v106 = this->m_vEditCursorPos.x - 15.0;
          drawScan.m_vShift.x = this->m_vEditCursorPos.y;
          v107 = this->m_vEditCursorPos.z;
          drawScan.m_nCount = v106;
          drawScan.m_vShift.y = v107;
          NDebugOverlay::Text(&drawScan, "W", 0, 0.01023);
        }
      }
      m_EditMode = this->m_EditMode;
      if ( m_EditMode != INavEditor::EditModeType::CREATING_AREA )
      {
        if ( m_EditMode == INavEditor::EditModeType::DRAG_SELECTING )
        {
          v118 = this->m_vAnchor.z;
          v119 = this->m_nDragSelectionVolumeZMax + v118;
          v120 = v118 - this->m_nDragSelectionVolumeZMin;
          v121 = this->m_vAnchor.y;
          target.x = this->m_vAnchor.x;
          target.y = v121;
          v122 = LODWORD(this->m_vEditCursorPos.x);
          target.z = v119;
          v123 = this->m_vEditCursorPos.y;
          drawScan.m_nCount = v122;
          drawScan.m_vShift.x = v123;
          drawScan.m_vShift.y = v120;
          NavDrawVolume(&target, &drawScan, v118, NavEditColor::NavDragSelectionColor);
          CNavEditor::UpdateDragSelectionSet(this);
          v124 = &s_dragSelectionSetDeleteColor;
          if ( !this->m_bIsDragDeselecting )
            v124 = &s_dragSelectionSetAddColor;
          *locName = *v124;
          m_Size = this->m_DragSelectionSet.m_SetAreas.m_Size;
          if ( m_Size != 0 )
          {
            v126 = 0;
            v127 = 8LL * (m_Size - 1) + 8;
            do
            {
              v128 = this->m_DragSelectionSet.m_SetAreas.m_Memory.m_pMemory[v126 / 8];
              v126 += 8LL;
              CNavDrawPoly::DrawDragSelectionSet(v128, locName);
            }
            while ( v126 != v127 );
          }
        }
        else if ( m_EditMode == INavEditor::EditModeType::CREATING_LADDER
               && CNavEditor::FindLadderCorners(this, &this->m_vEditCursorPos, &vCorner1, &vCorner2, &vCorner3) )
        {
          v108 = 23 - this->m_bClimbableSurface;
          v109 = NavDrawGetColor(v108);
          target.z = vCorner1.z + 1.0;
          v110 = this->m_vLadderAnchor.z + 1.0;
          target.y = vCorner1.y + 0.0;
          v111 = this->m_vLadderAnchor.y;
          target.x = vCorner1.x + 0.0;
          *&v112 = this->m_vLadderAnchor.x + 0.0;
          drawScan.m_vShift.y = v110;
          drawScan.m_nCount = v112;
          drawScan.m_vShift.x = v111 + 0.0;
          NDebugOverlay::Line(&drawScan, &target, v109._color[0], v109._color[1], v109._color[2], 0, 0.15000001);
          v113 = NavDrawGetColor(v108);
          target.z = vCorner3.z + 1.0;
          target.y = vCorner3.y + 0.0;
          target.x = vCorner3.x + 0.0;
          drawScan.m_vShift.y = vCorner1.z + 1.0;
          drawScan.m_vShift.x = vCorner1.y + 0.0;
          *&drawScan.m_nCount = vCorner1.x + 0.0;
          NDebugOverlay::Line(&drawScan, &target, v113._color[0], v113._color[1], v113._color[2], 0, 0.15000001);
          v114 = NavDrawGetColor(v108);
          target.z = vCorner2.z + 1.0;
          target.y = vCorner2.y + 0.0;
          target.x = vCorner2.x + 0.0;
          drawScan.m_vShift.y = vCorner3.z + 1.0;
          drawScan.m_vShift.x = vCorner3.y + 0.0;
          *&drawScan.m_nCount = vCorner3.x + 0.0;
          NDebugOverlay::Line(&drawScan, &target, v114._color[0], v114._color[1], v114._color[2], 0, 0.15000001);
          v115 = NavDrawGetColor(v108);
          v96 = BYTE1(v115);
          v98 = HIWORD(v115);
          v99 = v115;
          v116 = this->m_vLadderAnchor.x;
          v117 = this->m_vLadderAnchor.y + 0.0;
          target.z = this->m_vLadderAnchor.z + 1.0;
          v97 = vCorner2.z + 1.0;
          target.y = v117;
          target.x = v116 + 0.0;
          drawScan.m_vShift.x = vCorner2.y + 0.0;
          *&drawScan.m_nCount = vCorner2.x + 0.0;
          goto LABEL_134;
        }
LABEL_20:
        m_pSelectedLadder = this->m_pSelectedLadder;
        if ( m_pSelectedLadder == 0 )
        {
LABEL_29:
          if ( this->m_EditMode != INavEditor::EditModeType::PLACE_PAINTING )
          {
            m_pMarkedLadder = this->m_pMarkedLadder;
            if ( m_pMarkedLadder != 0 )
              CNavDrawLadder::DrawLadder(m_pMarkedLadder);
          }
          m_pMarkedArea = this->m_pMarkedArea;
          if ( m_pMarkedArea != 0
            && this->m_EditMode != INavEditor::EditModeType::PLACE_PAINTING
            && INavDrawArea::ms_pInst != 0 )
          {
            (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 3))(INavDrawArea::ms_pInst, m_pMarkedArea, 39, -1.0);
          }
          m_pSelectedArea = this->m_pSelectedArea;
          if ( m_pSelectedArea != 0 )
          {
            m_pParent = nav_show_area_info.m_pParent;
            this->m_pLastSelectedLadder = 0;
            y = m_pParent->m_Value.m_fValue;
            if ( m_pSelectedArea != this->m_pLastSelectedArea )
            {
              *&v32 = CountdownTimer::Now(&this->m_ShowAreaInfoTimer) + y;
              if ( *&v32 != this->m_ShowAreaInfoTimer.m_timestamp.m_Value )
              {
                pNearestAreaa = *&v32;
                (*(this->m_ShowAreaInfoTimer._vptr_CountdownTimer + 2))(
                  &this->m_ShowAreaInfoTimer,
                  12,
                  0xFFFFFFFFLL,
                  0xFFFFFFFFLL);
                *&v32 = LODWORD(pNearestAreaa);
                this->m_ShowAreaInfoTimer.m_timestamp.m_Value = pNearestAreaa;
              }
              if ( y != this->m_ShowAreaInfoTimer.m_duration.m_Value )
              {
                (*(this->m_ShowAreaInfoTimer._vptr_CountdownTimer + 2))(
                  &this->m_ShowAreaInfoTimer,
                  8,
                  0xFFFFFFFFLL,
                  0xFFFFFFFFLL,
                  v32,
                  v17,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  y);
                this->m_ShowAreaInfoTimer.m_duration.m_Value = y;
              }
              this->m_pLastSelectedArea = this->m_pSelectedArea;
            }
            if ( this->m_ShowAreaInfoTimer.m_timestamp.m_Value > 0.0
              && CountdownTimer::Now(&this->m_ShowAreaInfoTimer) < this->m_ShowAreaInfoTimer.m_timestamp.m_Value
              || y < 0.0 )
            {
              locName[0] = 0;
              v38 = 0;
              attrib[0] = 0;
              while ( CNavConfig::GetAttributeTable()->m_Size > v38 )
              {
                if ( (CNavConfig::GetAttributeTable()->m_Memory.m_pMemory[v38].m_NavAttribute.m_Flags
                    & this->m_pSelectedArea->m_AreaAttributes.m_Flags) != 0 )
                {
                  AttributeTable = CNavConfig::GetAttributeTable();
                  _V_strncat(attrib, AttributeTable->m_Memory.m_pMemory[v38].m_Name, 80, 0xFFFFFFFFLL);
                  _V_strncat(attrib, " ", 80, 0xFFFFFFFFLL);
                }
                ++v38;
              }
              if ( attrib[0] == 0 )
                V_sprintf_safe<80ul>(attrib, "(no attrib) ");
              if ( CNavArea::IsBlocked(this->m_pSelectedArea, -1, 0) )
                _V_strncat(attrib, "BLOCKED ", 80, 0xFFFFFFFFLL);
              v58 = this->m_pSelectedArea;
              if ( v58->m_nAvoidanceObstacleHeight > 18.0 )
              {
                _V_strncat(attrib, "OBSTRUCTED ", 80, 0xFFFFFFFFLL);
                v58 = this->m_pSelectedArea;
              }
              if ( (v58->m_AttributeDynamicFlags & 0x10) != 0 )
              {
                _V_strncat(attrib, "UNDERWATER ", 80, 0xFFFFFFFFLL);
                v58 = this->m_pSelectedArea;
              }
              TotalAdjacentCount = CNavArea::GetTotalAdjacentCount(v58);
              v60 = UTIL_VarArgs("%d Connections ", TotalAdjacentCount);
              _V_strncat(attrib, v60, 80, 0xFFFFFFFFLL);
              V_snprintf(buffer_0, 80, "Area #%d %s %s\n", this->m_pSelectedArea->m_AreaId, locName, attrib);
              NDebugOverlay::ScreenText(30.0, 30.0, buffer_0, 255, 255, 0, 128, 0.01023);
              V_snprintf(
                buffer_0,
                80,
                " - gen info = %d, hull support = %x\n",
                this->m_pSelectedArea->m_nGenIndex,
                this->m_pSelectedArea->m_nHullSupport);
              NDebugOverlay::ScreenText(30.0, 40.0, buffer_0, 255, 255, 0, 128, 0.01023);
            }
            if ( this->m_bIsContinuouslySelecting )
            {
              m_rNavMesh = this->m_rNavMesh;
              *&vCorner2.x = this->m_pSelectedArea;
              v64 = *&vCorner2.x;
              if ( *&vCorner2.x != 0
                && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(
                     &m_rNavMesh->m_SelectionSet.m_SetAreas,
                     &vCorner2) == -1 )
              {
                v66 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
                v67 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
                if ( v66 == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
                  v67 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
                }
                m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v67 + 1;
                v68 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v66];
                if ( v68 != 0 )
                  *v68 = v64;
              }
            }
            else if ( this->m_bIsContinuouslyDeselecting )
            {
              v166 = this->m_pSelectedArea;
              CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(
                &this->m_rNavMesh->m_SelectionSet.m_SetAreas,
                &v166);
            }
            if ( this->m_EditMode != INavEditor::EditModeType::PLACE_PAINTING )
            {
              if ( nav_split_show_aa.m_pParent->m_Value.m_nValue != 0 )
              {
                v73 = this->m_pSelectedArea;
                v74 = v73->m_Extent.lo.x;
                v75 = v73->m_Extent.lo.y;
                yd = v73->m_Extent.hi.y;
                v76 = v73->m_Extent.hi.x;
                for ( i = *((*(ListenServerHost->_vptr_IHandleEntity + 165))(ListenServerHost) + 4);
                      i > 360.0;
                      i = i - 360.0 )
                {
                  ;
                }
                for ( ; i < 0.0; i = i + 360.0 )
                  ;
                v78 = (src * 1000.0) + flNearRange;
                if ( this->m_bSplitAlongX )
                {
                  v84 = CNavPoly::GetZ(this->m_pSelectedArea, vFrom.y, v78);
                  v85 = this->m_pSelectedArea;
                  vFrom.x = v74;
                  m_flSplitEdge = this->m_flSplitEdge;
                  vFrom.z = v84;
                  vFrom.y = m_flSplitEdge;
                  v82 = CNavPoly::GetZ(v85, (1000.0 * x) + v137, (src * 1000.0) + flNearRange);
                  yd = this->m_flSplitEdge;
                }
                else
                {
                  v79 = CNavPoly::GetZ(this->m_pSelectedArea, vFrom.y, v78);
                  v80 = this->m_pSelectedArea;
                  vFrom.y = v75;
                  v81 = this->m_flSplitEdge;
                  vFrom.z = v79;
                  vFrom.x = v81;
                  v82 = CNavPoly::GetZ(v80, (1000.0 * x) + v137, (src * 1000.0) + flNearRange);
                  v76 = this->m_flSplitEdge;
                }
                srcd = v82;
                v83 = NavDrawGetColor(NavEditColor::NavSplitLineColor);
                target.x = v76 + 0.0;
                *&drawScan.m_nCount = vFrom.x + 0.0;
                target.y = yd + 0.0;
                target.z = srcd + 1.0;
                drawScan.m_vShift.y = vFrom.z + 1.0;
                drawScan.m_vShift.x = vFrom.y + 0.0;
                NDebugOverlay::Line(&drawScan, &target, v83._color[0], v83._color[1], v83._color[2], 0, 0.15000001);
              }
              if ( nav_split_show_free.m_pParent->m_Value.m_nValue != 0 )
              {
                xc = this->m_SplitRay.m_Start.x + this->m_SplitRay.m_Delta.x;
                srcc = this->m_SplitRay.m_Start.y + this->m_SplitRay.m_Delta.y;
                yh = this->m_SplitRay.m_Start.z + this->m_SplitRay.m_Delta.z;
                v69 = NavDrawGetColor(NavEditColor::NavSplitLineColor);
                target.y = srcc + 0.0;
                target.x = xc + 0.0;
                v70 = this->m_SplitRay.m_Start.y + 0.0;
                v71 = this->m_SplitRay.m_Start.z + 1.0;
                target.z = yh + 1.0;
                *&v72 = this->m_SplitRay.m_Start.x + 0.0;
                drawScan.m_vShift.x = v70;
                drawScan.m_vShift.y = v71;
                drawScan.m_nCount = v72;
                NDebugOverlay::Line(&drawScan, &target, v69._color[0], v69._color[1], v69._color[2], 0, 0.15000001);
              }
            }
            CNavDrawArea::DrawConnectedAreas(this->m_pSelectedArea, -1.0, *&v17);
          }
          v40 = this->m_rNavMesh;
          v41 = v40->m_SelectionSet.m_SetAreas.m_Size;
          if ( v41 != 0 )
          {
            v42 = 0.0;
            v43 = 0.0;
            if ( this->m_EditMode == INavEditor::EditModeType::SHIFTING_XY )
            {
              v43 = this->m_vEditCursorPos.x - this->m_vAnchor.x;
              v42 = this->m_vEditCursorPos.y - this->m_vAnchor.y;
            }
            p_m_SelectionSet = &v40->m_SelectionSet;
            drawScan.m_nCount = 0;
            drawScan.m_vShift.x = v43;
            drawScan.m_vShift.y = v42;
            drawScan.m_vShift.z = 0.0;
            drawScan.m_rSelectionSet = &v40->m_SelectionSet;
            if ( v41 >= nav_draw_limit.m_pParent->m_Value.m_nValue )
            {
              v61 = 0;
              pNearestArea = 0;
              v138 = 8LL * (v41 - 1) + 8;
              flNearRangea = 1.0e10;
              do
              {
                v62 = v40->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v61 / 8];
                xb = v62[14];
                srcb = v62[15];
                yc = v62[16];
                AbsOrigin = CBaseEntity::GetAbsOrigin(ListenServerHost);
                if ( flNearRangea > ((((AbsOrigin->x - xb) * (AbsOrigin->x - xb))
                                    + ((AbsOrigin->y - srcb) * (AbsOrigin->y - srcb)))
                                   + ((AbsOrigin->z - yc) * (AbsOrigin->z - yc))) )
                {
                  flNearRangea = (((AbsOrigin->x - xb) * (AbsOrigin->x - xb))
                                + ((AbsOrigin->y - srcb) * (AbsOrigin->y - srcb)))
                               + ((AbsOrigin->z - yc) * (AbsOrigin->z - yc));
                  pNearestArea = v62;
                }
                v61 += 8LL;
              }
              while ( v61 != v138 );
              target = GetNavHullForSelectionConstraints();
              NavBreadthFirstSearch<DrawSelectionSet>(pNearestArea, target, &drawScan, 0x1Fu, -1, -1.0);
            }
            else
            {
              v45 = 0;
              ya = 8LL * (v41 - 1) + 8;
              while ( 1 )
              {
                v46 = v40->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v45 / 8];
                *&vCorner3.x = v46;
                if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(
                       &p_m_SelectionSet->m_SetAreas,
                       &vCorner3) != -1 )
                {
                  if ( INavDrawArea::ms_pInst != 0 )
                  {
                    (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
                      INavDrawArea::ms_pInst,
                      v46,
                      1623785471,
                      1,
                      &drawScan.m_vShift,
                      0.01023,
                      0.0);
                    if ( INavDrawArea::ms_pInst != 0 )
                      (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
                        INavDrawArea::ms_pInst,
                        v46,
                        4278215780LL,
                        1,
                        &drawScan.m_vShift,
                        0.01023,
                        0.0);
                  }
                  ++drawScan.m_nCount;
                }
                v45 += 8LL;
                if ( v45 == ya )
                  break;
                p_m_SelectionSet = drawScan.m_rSelectionSet;
              }
            }
            if ( this->m_pSelectedArea != 0 )
            {
              *&vCorner1.x = this->m_pSelectedArea;
              if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(
                     &this->m_rNavMesh->m_SelectionSet.m_SetAreas,
                     &vCorner1) == -1 )
              {
                v47 = v40->m_SelectionSet.m_SetAreas.m_Size;
                if ( v47 != 0 )
                {
                  v48 = 0;
                  xa = 8LL * (v47 - 1) + 8;
                  do
                  {
                    v49 = v40->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v48 / 8];
                    m_nVerts = v49->m_nVerts;
                    if ( m_nVerts != 0 )
                    {
                      for ( j = 0; j != m_nVerts; ++j )
                      {
                        m_pData = v49->m_connect[j].m_pData;
                        if ( m_pData != 0 && *m_pData > 0 )
                        {
                          v53 = 0;
                          goto LABEL_87;
                        }
                      }
LABEL_126:
                      v53 = -1;
                    }
                    else
                    {
                      v53 = -1;
                      j = 0;
                    }
LABEL_87:
                    while ( j != m_nVerts )
                    {
                      while ( 1 )
                      {
                        v54 = this->m_pSelectedArea;
                        k = v49->m_connect[j].m_pData;
                        v56 = &k[4 * v53];
                        if ( v54 != *(v56 + 1) )
                          goto LABEL_92;
                        yb = v49;
                        srca = &v49->m_connect[j];
                        CNavDrawArea::DrawAreaConnection(
                          v49,
                          v54,
                          j,
                          *(v56 + 16),
                          NavEditColor::NavOneWayFromSelectedColor,
                          -1,
                          -1.0);
                        v49 = yb;
                        m_nVerts = yb->m_nVerts;
                        if ( m_nVerts == j )
                          break;
                        for ( k = *srca; ; k = v49->m_connect[j].m_pData )
                        {
LABEL_92:
                          v57 = -1;
                          if ( k != 0 )
                            v57 = *k - 1;
                          if ( v57 > v53 )
                            break;
                          if ( m_nVerts == ++j )
                            goto LABEL_126;
                          v53 = -1;
                        }
                        ++v53;
                        if ( j == m_nVerts )
                          goto LABEL_96;
                      }
                      m_nVerts = j;
                    }
LABEL_96:
                    v48 += 8LL;
                  }
                  while ( v48 != xa );
                }
              }
            }
          }
          return;
        }
        v20 = m_pSelectedLadder == this->m_pLastSelectedLadder;
        this->m_pLastSelectedArea = 0;
        if ( v20 && nav_show_area_info.m_pParent->m_Value.m_nValue == 0 )
        {
LABEL_28:
          CNavDrawLadder::DrawLadder(m_pSelectedLadder);
          CNavDrawLadder::DrawConnectedAreas(this->m_pSelectedLadder);
          goto LABEL_29;
        }
        v21 = this->m_rNavMesh;
        this->m_pLastSelectedLadder = m_pSelectedLadder;
        m_pEntityInterface = v21->m_pEntityInterface;
        if ( m_pEntityInterface != 0 )
        {
          v23 = (*(m_pEntityInterface->_vptr_INavEntityInterface + 2))(m_pEntityInterface);
          v24 = EntityFromEntityHandle(v23);
          if ( v24 != 0 )
          {
            GlobalTeam = GetGlobalTeam(v24->m_iTeamNum.m_Value);
            v26 = (*(GlobalTeam->_vptr_IHandleEntity + 208))(GlobalTeam);
            V_snprintf(locName, 80, "Ladder #%d (Team %s)\n", this->m_pSelectedLadder->m_id, v26);
LABEL_25:
            v27 = 0.5;
            if ( nav_show_area_info.m_pParent->m_Value.m_nValue != 0 )
              v27 = 0.1;
            NDebugOverlay::ScreenText(0.5, 0.52999997, locName, 255, 255, 0, 128, v27);
            m_pSelectedLadder = this->m_pSelectedLadder;
            goto LABEL_28;
          }
          m_pSelectedLadder = this->m_pSelectedLadder;
        }
        V_snprintf(locName, 80, "Ladder #%d\n", m_pSelectedLadder->m_id);
        goto LABEL_25;
      }
      v87 = this->m_vAnchor.x;
      v88 = this->m_vEditCursorPos.x;
      pNearestAreab = this->m_vAnchor.z + 2.0;
      yi = this->m_vEditCursorPos.y;
      v89 = NavDrawGetColor(NavEditColor::NavCreationColor);
      target.x = v87 + 0.0;
      target.y = yi + 0.0;
      drawScan.m_vShift.x = yi + 0.0;
      target.z = pNearestAreab + 1.0;
      drawScan.m_vShift.y = pNearestAreab + 1.0;
      v141 = pNearestAreab + 1.0;
      *&drawScan.m_nCount = v88 + 0.0;
      NDebugOverlay::Line(&drawScan, &target, v89._color[0], v89._color[1], v89._color[2], 0, 0.15000001);
      v90 = this->m_vAnchor.y;
      pNearestAreac = this->m_vEditCursorPos.y;
      yj = this->m_vAnchor.x;
      v91 = NavDrawGetColor(NavEditColor::NavCreationColor);
      target.z = v141;
      target.x = yj + 0.0;
      *&drawScan.m_nCount = yj + 0.0;
      drawScan.m_vShift.y = v141;
      target.y = pNearestAreac + 0.0;
      drawScan.m_vShift.x = v90 + 0.0;
      NDebugOverlay::Line(&drawScan, &target, v91._color[0], v91._color[1], v91._color[2], 0, 0.15000001);
      v92 = this->m_vAnchor.x;
      yk = this->m_vEditCursorPos.x;
      pNearestAread = this->m_vAnchor.y;
      v93 = NavDrawGetColor(NavEditColor::NavCreationColor);
      target.z = v141;
      target.x = yk + 0.0;
      target.y = pNearestAread + 0.0;
      drawScan.m_vShift.x = pNearestAread + 0.0;
      drawScan.m_vShift.y = v141;
      *&drawScan.m_nCount = v92 + 0.0;
      NDebugOverlay::Line(&drawScan, &target, v93._color[0], v93._color[1], v93._color[2], 0, 0.15000001);
      v94 = this->m_vAnchor.y;
      pNearestAreae = this->m_vEditCursorPos.x;
      yl = this->m_vEditCursorPos.y;
      v95 = NavDrawGetColor(NavEditColor::NavCreationColor);
      v96 = BYTE1(v95);
      v97 = v141;
      v98 = HIWORD(v95);
      v99 = v95;
      target.z = v141;
      target.y = v94 + 0.0;
      target.x = pNearestAreae + 0.0;
      *&drawScan.m_nCount = pNearestAreae + 0.0;
      drawScan.m_vShift.x = yl + 0.0;
LABEL_134:
      drawScan.m_vShift.y = v97;
      NDebugOverlay::Line(&drawScan, &target, v99, v96, v98, 0, 0.15000001);
      goto LABEL_20;
    }
  }
}


// CNavEditor::CommandNavDelete  (line 1307, @0x0000000002f00ef0, libserver.so)  // inlines: ClearSelectionSet, ClearSet, GetMarkedAreaIncludingSelectionSet, RemoveAll
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CBaseEntity::EmitSound, Msg, CNavEditor::UpdateSelection, CNavEditor::GetMarkedAreaIncludingSelectionSet, CUtlVectorBase<CNavLadder*, CUtlMemory<CNavLadder*, int> >::FindAndRemove, CNavLadder::~CNavLadder, operator delete
// callers: CommandNavDelete
// strings: "EDIT_DELETE", "Deleted %d areas\n"
void __fastcall CNavEditor::CommandNavDelete(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  CNavMesh *v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  CNavArea *v8; // r13
  int v9; // esi
  CNavArea *m_pMarkedArea; // r13
  CNavLadder *m_pSelectedLadder; // r12
  CNavArea *m_pSelectedArea; // r12

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      if ( this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
        m_rNavMesh = this->m_rNavMesh;
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size != 0 )
        {
          v5 = this->m_rNavMesh;
          v6 = 0;
          v7 = 8LL * (m_Size - 1) + 8;
          while ( 1 )
          {
            v8 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v6 / 8];
            v6 += 8LL;
            (*(v5->_vptr_CNavMesh + 25))(v5, v8);
            (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, v8);
            if ( v6 == v7 )
              break;
            v5 = this->m_rNavMesh;
          }
          v9 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        else
        {
          v9 = 0;
        }
        Msg("Deleted %d areas\n", v9);
        this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
        goto LABEL_14;
      }
      CNavEditor::UpdateSelection(this);
      m_pMarkedArea = this->m_pMarkedArea;
      if ( m_pMarkedArea != 0 || (m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this)) != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
        (*(this->m_rNavMesh->_vptr_CNavMesh + 25))(this->m_rNavMesh, m_pMarkedArea);
        (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, m_pMarkedArea);
      }
      else
      {
        if ( this->m_pMarkedLadder == 0 )
        {
          if ( this->m_pSelectedArea != 0 )
          {
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
            m_pSelectedArea = this->m_pSelectedArea;
            (*(this->m_rNavMesh->_vptr_CNavMesh + 25))(this->m_rNavMesh, m_pSelectedArea);
            (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, m_pSelectedArea);
            goto LABEL_14;
          }
          if ( this->m_pSelectedLadder == 0 )
            goto LABEL_14;
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
          CUtlVectorBase<CNavLadder *,CUtlMemory<CNavLadder *,int>>::FindAndRemove(
            &this->m_rNavMesh->m_Ladders,
            &this->m_pSelectedLadder);
          m_pSelectedLadder = this->m_pSelectedLadder;
          (*(this->m_rNavMesh->_vptr_CNavMesh + 26))(this->m_rNavMesh, m_pSelectedLadder);
          if ( m_pSelectedLadder == 0 )
            goto LABEL_14;
          goto LABEL_19;
        }
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
        CUtlVectorBase<CNavLadder *,CUtlMemory<CNavLadder *,int>>::FindAndRemove(
          &this->m_rNavMesh->m_Ladders,
          &this->m_pMarkedLadder);
        (*(this->m_rNavMesh->_vptr_CNavMesh + 26))(this->m_rNavMesh, this->m_pMarkedLadder);
        m_pSelectedLadder = this->m_pMarkedLadder;
        if ( m_pSelectedLadder != 0 )
        {
LABEL_19:
          CNavLadder::~CNavLadder(m_pSelectedLadder);
          operator delete(m_pSelectedLadder);
        }
      }
LABEL_14:
      (*(this->m_rNavMesh->_vptr_CNavMesh + 27))(this->m_rNavMesh);
      (*(this->_vptr_INavEditor + 7))(this);
    }
  }
}


// CNavEditor::CommandNavDeleteMarked  (line 1383, @0x0000000002ee6730, libserver.so)  // inlines: ClearSelectionSet, ClearSet, GetMarkedAreaIncludingSelectionSet, RemoveAll
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CBaseEntity::EmitSound, CUtlVectorBase<CNavLadder*, CUtlMemory<CNavLadder*, int> >::FindAndRemove, CNavLadder::~CNavLadder, operator delete, CNavEditor::GetMarkedAreaIncludingSelectionSet
// callers: CommandNavDeleteMarked
// strings: "EDIT_DELETE"
void __fastcall CNavEditor::CommandNavDeleteMarked(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavArea *m_pMarkedArea; // r13
  CNavLadder *m_pMarkedLadder; // r12

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      m_pMarkedArea = this->m_pMarkedArea;
      if ( m_pMarkedArea != 0 || (m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this)) != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
        (*(this->m_rNavMesh->_vptr_CNavMesh + 25))(this->m_rNavMesh, m_pMarkedArea);
        (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, m_pMarkedArea);
      }
      if ( this->m_pMarkedLadder != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
        CUtlVectorBase<CNavLadder *,CUtlMemory<CNavLadder *,int>>::FindAndRemove(
          &this->m_rNavMesh->m_Ladders,
          &this->m_pMarkedLadder);
        m_pMarkedLadder = this->m_pMarkedLadder;
        if ( m_pMarkedLadder != 0 )
        {
          CNavLadder::~CNavLadder(this->m_pMarkedLadder);
          operator delete(m_pMarkedLadder);
        }
      }
      (*(this->m_rNavMesh->_vptr_CNavMesh + 27))(this->m_rNavMesh);
      this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
      (*(this->_vptr_INavEditor + 7))(this);
    }
  }
}


// CNavEditor::GetAreaForFloodSelect  (line 1417, @0x0000000002f011a0, libserver.so)
// calls: CNavEditor::UpdateSelection
// callers: nav_flood_select
CNavArea *__fastcall CNavEditor::GetAreaForFloodSelect(CNavEditor *const this)
{
  CNavArea *result; // rax

  result = 0;
  if ( this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    CNavEditor::UpdateSelection(this);
    result = this->m_pSelectedArea;
    if ( result == 0 )
      return this->m_pMarkedArea;
  }
  return result;
}


// CNavEditor::CommandNavToggleSelectionSet  (line 1436, @0x0000000002eea490, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ClearSelectionSet, ClearSet, CopyConstruct<CNavArea*>, Element, GrowMemory, IsInSelectionSet, IsInSet, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, Msg, CUtlMemory<CNavArea*, int>::Purge, CUtlMemory<CNavArea*, int>::Grow, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CommandNavToggleSelectedSet, CNavGenerator::UpdateGeneration
// strings: "EDIT_DELETE", "Selected %d areas.\n"
void __fastcall CNavEditor::CommandNavToggleSelectionSet(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  CNavArea *v7; // r13
  int v8; // eax
  int v9; // esi
  CNavArea **v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  CNavMesh *v13; // r13
  CNavArea *v14; // r12
  int v15; // eax
  CNavArea **v16; // rax
  __int64 v17; // [rsp+20h] [rbp-70h]
  int v18; // [rsp+20h] [rbp-70h]
  CNavMesh *v19; // [rsp+28h] [rbp-68h]
  CNavArea *v20; // [rsp+30h] [rbp-60h] BYREF
  CNavArea *v21; // [rsp+38h] [rbp-58h] BYREF
  NavAreaVector notInSelectionSet; // [rsp+40h] [rbp-50h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost == 0 || this->m_EditMode > INavEditor::EditModeType::PLACE_PAINTING )
    return;
  CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
  m_rNavMesh = this->m_rNavMesh;
  notInSelectionSet.m_Memory.m_pMemory = 0;
  notInSelectionSet.m_Memory.m_nAllocationCount = 0;
  notInSelectionSet.m_Memory.m_nGrowSize = 0;
  m_Size = m_rNavMesh->m_NavAreas.m_Size;
  notInSelectionSet.m_Size = 0;
  if ( m_Size == 0 )
  {
    m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    v9 = 0;
    goto LABEL_22;
  }
  v19 = m_rNavMesh;
  v5 = 0;
  v6 = 0;
  v17 = 8LL * (m_Size - 1) + 8;
  while ( 1 )
  {
    v7 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v5 / 8];
    v20 = v7;
    v8 = CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v19->m_SelectionSet.m_SetAreas, &v20);
    v9 = v6;
    if ( v8 == -1 )
    {
      if ( notInSelectionSet.m_Memory.m_nAllocationCount == v6 )
      {
        CUtlMemory<CNavArea *,int>::Grow(&notInSelectionSet.m_Memory, 1);
        v9 = notInSelectionSet.m_Size;
      }
      notInSelectionSet.m_Size = ++v9;
      v10 = &notInSelectionSet.m_Memory.m_pMemory[v6];
      if ( v10 != 0 )
        break;
      v19 = this->m_rNavMesh;
    }
    v5 += 8LL;
    if ( v5 == v17 )
      goto LABEL_12;
LABEL_6:
    v6 = v9;
  }
  *v10 = v7;
  v5 += 8LL;
  v9 = notInSelectionSet.m_Size;
  v19 = this->m_rNavMesh;
  if ( v5 != v17 )
    goto LABEL_6;
LABEL_12:
  v19->m_SelectionSet.m_SetAreas.m_Size = 0;
  if ( v9 != 0 )
  {
    v11 = 0;
    v12 = 8LL * (v9 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v13 = this->m_rNavMesh;
        v21 = notInSelectionSet.m_Memory.m_pMemory[v11 / 8];
        v14 = v21;
        if ( v21 != 0
          && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v13->m_SelectionSet.m_SetAreas, &v21) == -1 )
        {
          v15 = v13->m_SelectionSet.m_SetAreas.m_Size;
          v18 = v15;
          if ( v15 == v13->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CNavArea *,int>::Grow(&v13->m_SelectionSet.m_SetAreas.m_Memory, 1);
            v15 = v13->m_SelectionSet.m_SetAreas.m_Size;
          }
          v13->m_SelectionSet.m_SetAreas.m_Size = v15 + 1;
          v16 = &v13->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v18];
          if ( v16 != 0 )
            break;
        }
        v11 += 8LL;
        if ( v11 == v12 )
          goto LABEL_21;
      }
      v11 += 8LL;
      *v16 = v14;
    }
    while ( v11 != v12 );
LABEL_21:
    v9 = notInSelectionSet.m_Size;
  }
LABEL_22:
  Msg("Selected %d areas.\n", v9);
  (*(this->_vptr_INavEditor + 7))(this);
  notInSelectionSet.m_Size = 0;
  if ( (notInSelectionSet.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&notInSelectionSet.m_Memory);
    if ( (notInSelectionSet.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&notInSelectionSet.m_Memory);
  }
}


// CNavEditor::CommandNavStoreSelectionSet  (line 1477, @0x0000000002eed6e0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveAll, operator[]
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound, CUtlMemory<int, int>::Grow
// callers: CommandNavStoreSelectedSet
// strings: "EDIT_DELETE"
void __fastcall CNavEditor::CommandNavStoreSelectionSet(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  int *v8; // rax
  uint32 m_AreaId; // ecx
  int v10; // eax
  uint32 v11; // [rsp+4h] [rbp-3Ch]

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
    m_rNavMesh = this->m_rNavMesh;
    this->m_StoredSelectionSet.m_Size = 0;
    m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
    if ( m_Size != 0 )
    {
      v5 = 0;
      v6 = 0;
      v7 = 8LL * (m_Size - 1) + 8;
      while ( 1 )
      {
        m_AreaId = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v5 / 8]->m_AreaId;
        v10 = v6;
        if ( this->m_StoredSelectionSet.m_Memory.m_nAllocationCount == v6 )
        {
          v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v5 / 8]->m_AreaId;
          CUtlMemory<int,int>::Grow(&this->m_StoredSelectionSet.m_Memory, 1);
          v10 = this->m_StoredSelectionSet.m_Size;
          m_AreaId = v11;
        }
        this->m_StoredSelectionSet.m_Size = v10 + 1;
        v8 = &this->m_StoredSelectionSet.m_Memory.m_pMemory[v6];
        if ( v8 != 0 )
          *v8 = m_AreaId;
        v5 += 8LL;
        if ( v5 == v7 )
          break;
        v6 = this->m_StoredSelectionSet.m_Size;
      }
    }
  }
}


// CNavEditor::CommandNavRecallSelectionSet  (line 1499, @0x0000000002eea310, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, ClearSelectionSet, ClearSet, CopyConstruct<CNavArea*>, Element, GrowMemory, RemoveAll, operator[]
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound, CNavMesh::GetNavAreaByID, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, Msg, CUtlMemory<CNavArea*, int>::Grow
// callers: CommandNavRecallSelectedSet
// strings: "EDIT_DELETE", "Selected %d areas.\n"
void __fastcall CNavEditor::CommandNavRecallSelectionSet(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax
  CNavMesh *m_rNavMesh; // r12
  __int64 v4; // r14
  int v5; // r13d
  CNavArea *NavAreaByID; // rax
  CNavArea *v7; // r15
  __int64 m_Size; // rax
  int v9; // ecx
  CNavArea **v10; // rax
  int v11; // [rsp+4h] [rbp-4Ch]
  CNavArea *v12; // [rsp+18h] [rbp-38h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_DELETE", 0.0, 0);
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    m_rNavMesh = this->m_rNavMesh;
    if ( this->m_StoredSelectionSet.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        NavAreaByID = CNavMesh::GetNavAreaByID(m_rNavMesh, this->m_StoredSelectionSet.m_Memory.m_pMemory[v4]);
        m_rNavMesh = this->m_rNavMesh;
        v7 = NavAreaByID;
        if ( NavAreaByID != 0 )
        {
          v12 = NavAreaByID;
          if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &v12) == -1 )
          {
            m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
            v9 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
            if ( m_Size == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
            {
              v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
              CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
              v9 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
              m_Size = v11;
            }
            m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v9 + 1;
            v10 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[m_Size];
            if ( v10 != 0 )
              *v10 = v7;
            m_rNavMesh = this->m_rNavMesh;
          }
        }
        ++v5;
        ++v4;
      }
      while ( this->m_StoredSelectionSet.m_Size > v5 );
    }
    Msg("Selected %d areas.\n", m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size);
  }
}


// CNavEditor::CommandNavAddToSelectionSet  (line 1525, @0x0000000002f01440, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, operator[]
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CBaseEntity::EmitSound, CUtlMemory<CNavArea*, int>::Grow
// callers: CommandNavAddToSelectedSet
// strings: "EDIT_MARK.Enable"
void __fastcall CNavEditor::CommandNavAddToSelectionSet(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavArea *m_pSelectedArea; // r13
  CNavMesh *m_rNavMesh; // rbx
  __int64 m_Size; // r14
  int v6; // eax
  CNavArea **v7; // rax
  CNavArea *src; // [rsp+8h] [rbp-28h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    CNavEditor::UpdateSelection(this);
    m_pSelectedArea = this->m_pSelectedArea;
    if ( m_pSelectedArea != 0 )
    {
      m_rNavMesh = this->m_rNavMesh;
      src = m_pSelectedArea;
      if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &src) == -1 )
      {
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        v6 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v6 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v6 + 1;
        v7 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[m_Size];
        if ( v7 != 0 )
          *v7 = m_pSelectedArea;
      }
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Enable", 0.0, 0);
    }
  }
}


// CNavEditor::CommandNavAddToSelectionSetByID  (line 1545, @0x0000000002eec270, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, atoi, operator[]
// calls: UTIL_GetListenServerHost, strtol, CNavMesh::GetNavAreaByID, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CBaseEntity::EmitSound, Msg, CUtlMemory<CNavArea*, int>::Grow
// callers: nav_add_to_selected_set_by_id
// strings: "EDIT_MARK.Enable", "Added area %d.  ( to go there: setpos %f %f %f )\n", "No area with id %d\n"
void __fastcall CNavEditor::CommandNavAddToSelectionSetByID(
        CNavEditor *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // r13
  unsigned int v6; // r14d
  CNavArea *NavAreaByID; // rax
  float *v8; // r12
  CNavMesh *m_rNavMesh; // rbx
  __int64 m_Size; // r15
  int v11; // eax
  float **v12; // rax
  CNavArea *src; // [rsp+8h] [rbp-38h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING && args->m_nArgc > 1 )
  {
    v6 = strtol(args->m_ppArgv[1], 0, 10);
    NavAreaByID = CNavMesh::GetNavAreaByID(this->m_rNavMesh, v6);
    v8 = NavAreaByID;
    if ( NavAreaByID != 0 )
    {
      m_rNavMesh = this->m_rNavMesh;
      src = NavAreaByID;
      if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &src) == -1 )
      {
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v11 + 1;
        v12 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[m_Size];
        if ( v12 != 0 )
          *v12 = v8;
      }
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Enable", 0.0, 0);
      Msg("Added area %d.  ( to go there: setpos %f %f %f )\n", v6, v8[14], v8[15], (v8[16] + 5.0));
    }
    else
    {
      Msg("No area with id %d\n", v6);
    }
  }
}


// CNavEditor::CommandNavRemoveFromSelectionSet  (line 1569, @0x0000000002f01530, libserver.so)  // inlines: RemoveFromSelectionSet, RemoveFromSet
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove, CBaseEntity::EmitSound
// callers: CommandNavRemoveFromSelectedSet
// strings: "EDIT_MARK.Disable"
void __fastcall CNavEditor::CommandNavRemoveFromSelectionSet(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavMesh *m_rNavMesh; // rdi
  CNavArea *src; // [rsp+8h] [rbp-18h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    CNavEditor::UpdateSelection(this);
    if ( this->m_pSelectedArea != 0 )
    {
      m_rNavMesh = this->m_rNavMesh;
      src = this->m_pSelectedArea;
      CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&m_rNavMesh->m_SelectionSet.m_SetAreas, &src);
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
    }
  }
}


// CNavEditor::CommandNavToggleInSelectionSet  (line 1588, @0x0000000002f015e0, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, IsInSelectionSet, IsInSet, RemoveFromSelectionSet, RemoveFromSet, operator[]
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove, CBaseEntity::EmitSound, CUtlMemory<CNavArea*, int>::Grow
// callers: CommandNavToggleInSelectedSet
// strings: "EDIT_MARK.Disable"
void __fastcall CNavEditor::CommandNavToggleInSelectionSet(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavArea *m_pSelectedArea; // r13
  CNavMesh *m_rNavMesh; // r14
  __int64 m_Size; // rbx
  int v6; // eax
  CNavArea **v7; // rax
  CNavArea *src; // [rsp+8h] [rbp-38h] BYREF
  CNavArea *v9; // [rsp+10h] [rbp-30h] BYREF
  CNavArea *v10; // [rsp+18h] [rbp-28h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    CNavEditor::UpdateSelection(this);
    m_pSelectedArea = this->m_pSelectedArea;
    if ( m_pSelectedArea != 0 )
    {
      m_rNavMesh = this->m_rNavMesh;
      src = this->m_pSelectedArea;
      if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &src) == -1 )
      {
        v10 = m_pSelectedArea;
        if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &v10) == -1 )
        {
          m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
          v6 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
          if ( m_Size == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
            v6 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
          }
          m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v6 + 1;
          v7 = &m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[m_Size];
          if ( v7 != 0 )
            *v7 = m_pSelectedArea;
        }
      }
      else
      {
        v9 = m_pSelectedArea;
        CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(
          &m_rNavMesh->m_SelectionSet.m_SetAreas,
          &v9);
      }
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
    }
  }
}


// CNavEditor::CommandNavClearSelectionSet  (line 1615, @0x0000000002ed40d0, libserver.so)  // inlines: ClearSelectionSet, ClearSet, RemoveAll
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavClearSelectedSet
// strings: "EDIT_MARK.Disable"
void __fastcall CNavEditor::CommandNavClearSelectionSet(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
  }
}


// CNavEditor::CommandNavBeginSelecting  (line 1630, @0x0000000002ed4150, libserver.so)  // inlines: StartContinuouslySelecting
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavBeginSelecting
// strings: "EDIT_BEGIN_AREA.Creating"
void __fastcall CNavEditor::CommandNavBeginSelecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    this->m_bIsContinuouslySelecting = 1;
    this->m_bIsContinuouslyDeselecting = 0;
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.Creating", 0.0, 0);
  }
}


// CNavEditor::CommandNavEndSelecting  (line 1645, @0x0000000002ed41e0, libserver.so)  // inlines: StopContinuouslySelecting
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavEndSelecting
// strings: "EDIT_END_AREA.Creating"
void __fastcall CNavEditor::CommandNavEndSelecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    this->m_bIsContinuouslySelecting = 0;
    this->m_bIsContinuouslyDeselecting = 0;
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
  }
}


// CNavEditor::CommandNavBeginDragSelecting  (line 1660, @0x0000000002f01700, libserver.so)  // inlines: GetInt, SetAnchorToEditCursor, SetEditMode, operator=
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CBaseEntity::EmitSound
// callers: CommandNavBeginDragSelecting
// strings: "EDIT_BEGIN_AREA.NotCreating"
void __fastcall CNavEditor::CommandNavBeginDragSelecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  INavEditor::EditModeType m_EditMode; // eax
  ConVar *m_pParent; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    m_EditMode = this->m_EditMode;
    if ( m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING
      || m_EditMode == INavEditor::EditModeType::DRAG_SELECTING )
    {
      CNavEditor::UpdateSelection(this);
      if ( this->m_EditMode == INavEditor::EditModeType::DRAG_SELECTING )
      {
        (*(this->_vptr_INavEditor + 2))(this, 1, 1);
        this->m_EditMode = INavEditor::EditModeType::NORMAL;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.NotCreating", 0.0, 0);
      }
      else
      {
        (*(this->_vptr_INavEditor + 2))(this, 1, 1);
        this->m_EditMode = INavEditor::EditModeType::DRAG_SELECTING;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.NotCreating", 0.0, 0);
        m_pParent = nav_drag_selection_volume_zmax_offset.m_pParent;
        this->m_vAnchor.x = this->m_vEditCursorPos.x;
        this->m_vAnchor.y = this->m_vEditCursorPos.y;
        this->m_vAnchor.z = this->m_vEditCursorPos.z;
        this->m_nDragSelectionVolumeZMax = m_pParent->m_Value.m_nValue;
        this->m_nDragSelectionVolumeZMin = nav_drag_selection_volume_zmin_offset.m_pParent->m_Value.m_nValue;
      }
    }
  }
}


// CNavEditor::CommandNavEndDragSelecting  (line 1690, @0x0000000002ee9ae0, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, CopyConstruct<CNavArea*>, Element, GrowMemory, SetEditMode, operator[]
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow
// callers: CommandNavEndDragSelecting
// strings: "EDIT_END_AREA.NotCreating"
void __fastcall CNavEditor::CommandNavEndDragSelecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CNavMesh *m_rNavMesh; // r15
  CNavArea *v7; // r12
  __int64 v8; // rax
  int v9; // ecx
  CNavArea **m_pMemory; // rdx
  CNavArea **v11; // rax
  int v12; // [rsp+4h] [rbp-4Ch]
  CNavArea *v13; // [rsp+18h] [rbp-38h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    if ( this->m_EditMode == INavEditor::EditModeType::DRAG_SELECTING )
    {
      m_Size = this->m_DragSelectionSet.m_SetAreas.m_Size;
      if ( m_Size != 0 )
      {
        v4 = 0;
        v5 = 8LL * (m_Size - 1) + 8;
        do
        {
          m_rNavMesh = this->m_rNavMesh;
          v13 = this->m_DragSelectionSet.m_SetAreas.m_Memory.m_pMemory[v4 / 8];
          v7 = v13;
          if ( v13 != 0
            && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &v13) == -1 )
          {
            v8 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
            v9 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
            if ( v8 == m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
            {
              v12 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
              CUtlMemory<CNavArea *,int>::Grow(&m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory, 1);
              v9 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
              v8 = v12;
            }
            m_pMemory = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory;
            m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = v9 + 1;
            v11 = &m_pMemory[v8];
            if ( v11 != 0 )
              *v11 = v7;
          }
          v4 += 8LL;
        }
        while ( v4 != v5 );
      }
    }
    else
    {
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.NotCreating", 0.0, 0);
    }
    (*(this->_vptr_INavEditor + 2))(this, 1, 1);
    this->m_EditMode = INavEditor::EditModeType::NORMAL;
  }
}


// CNavEditor::CommandNavBeginDragDeselecting  (line 1715, @0x0000000002f01830, libserver.so)  // inlines: GetInt, SetAnchorToEditCursor, SetDragSelectionVolumeZMax, SetDragSelectionVolumeZMin, SetEditMode, StartDragDeselecting, operator=
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CBaseEntity::EmitSound
// callers: CommandNavBeginDragDeselecting
// strings: "EDIT_BEGIN_AREA.NotCreating"
void __fastcall CNavEditor::CommandNavBeginDragDeselecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  INavEditor::EditModeType m_EditMode; // eax
  vec_t x; // xmm0_4
  ConVar *m_pParent; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    m_EditMode = this->m_EditMode;
    if ( m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING
      || m_EditMode == INavEditor::EditModeType::DRAG_SELECTING )
    {
      CNavEditor::UpdateSelection(this);
      if ( this->m_EditMode == INavEditor::EditModeType::DRAG_SELECTING )
      {
        (*(this->_vptr_INavEditor + 2))(this, 1, 1);
        this->m_EditMode = INavEditor::EditModeType::NORMAL;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.NotCreating", 0.0, 0);
      }
      else
      {
        (*(this->_vptr_INavEditor + 2))(this, 1, 1);
        this->m_EditMode = INavEditor::EditModeType::DRAG_SELECTING;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.NotCreating", 0.0, 0);
        x = this->m_vEditCursorPos.x;
        this->m_bIsDragDeselecting = 1;
        m_pParent = nav_drag_selection_volume_zmax_offset.m_pParent;
        this->m_vAnchor.x = x;
        this->m_vAnchor.y = this->m_vEditCursorPos.y;
        this->m_vAnchor.z = this->m_vEditCursorPos.z;
        this->m_nDragSelectionVolumeZMax = m_pParent->m_Value.m_nValue;
        this->m_nDragSelectionVolumeZMin = nav_drag_selection_volume_zmin_offset.m_pParent->m_Value.m_nValue;
      }
    }
  }
}


// CNavEditor::CommandNavEndDragDeselecting  (line 1746, @0x0000000002ee5fc0, libserver.so)  // inlines: RemoveFromSelectionSet, RemoveFromSet, SetEditMode
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove
// callers: CommandNavEndDragDeselecting
// strings: "EDIT_END_AREA.NotCreating"
void __fastcall CNavEditor::CommandNavEndDragDeselecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  CNavArea *v6; // rax
  CNavArea *src; // [rsp+8h] [rbp-28h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    if ( this->m_EditMode == INavEditor::EditModeType::DRAG_SELECTING )
    {
      m_Size = this->m_DragSelectionSet.m_SetAreas.m_Size;
      if ( m_Size != 0 )
      {
        v4 = 0;
        v5 = 8LL * (m_Size - 1) + 8;
        do
        {
          v6 = this->m_DragSelectionSet.m_SetAreas.m_Memory.m_pMemory[v4 / 8];
          v4 += 8LL;
          src = v6;
          CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(
            &this->m_rNavMesh->m_SelectionSet.m_SetAreas,
            &src);
        }
        while ( v4 != v5 );
      }
    }
    else
    {
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.NotCreating", 0.0, 0);
    }
    (*(this->_vptr_INavEditor + 2))(this, 1, 1);
    this->m_EditMode = INavEditor::EditModeType::NORMAL;
  }
}


// CNavEditor::CommandNavRaiseDragVolumeMax  (line 1771, @0x0000000002ed4270, libserver.so)
// calls: UTIL_GetListenServerHost, ConVar::SetValue
// callers: CommandNavRaiseDragVolumeMax
// globals: nav_drag_selection_volume_zmax_offset
void __fastcall CNavEditor::CommandNavRaiseDragVolumeMax(CNavEditor *const this)
{
  int v2; // esi

  if ( UTIL_GetListenServerHost() != 0 )
  {
    v2 = this->m_nDragSelectionVolumeZMax + 32;
    this->m_nDragSelectionVolumeZMax = v2;
    ConVar::SetValue(&nav_drag_selection_volume_zmax_offset, v2);
  }
}


// CNavEditor::CommandNavLowerDragVolumeMax  (line 1783, @0x0000000002ed42f0, libserver.so)
// calls: UTIL_GetListenServerHost, ConVar::SetValue
// callers: CommandNavLowerDragVolumeMax
// globals: nav_drag_selection_volume_zmax_offset
void __fastcall CNavEditor::CommandNavLowerDragVolumeMax(CNavEditor *const this)
{
  int v2; // esi

  if ( UTIL_GetListenServerHost() != 0 )
  {
    v2 = this->m_nDragSelectionVolumeZMax - 32;
    if ( v2 < 0 )
      v2 = 0;
    this->m_nDragSelectionVolumeZMax = v2;
    ConVar::SetValue(&nav_drag_selection_volume_zmax_offset, v2);
  }
}


// CNavEditor::CommandNavRaiseDragVolumeMin  (line 1795, @0x0000000002ed4370, libserver.so)
// calls: UTIL_GetListenServerHost, ConVar::SetValue
// callers: CommandNavRaiseDragVolumeMin
// globals: nav_drag_selection_volume_zmin_offset
void __fastcall CNavEditor::CommandNavRaiseDragVolumeMin(CNavEditor *const this)
{
  int v2; // esi

  if ( UTIL_GetListenServerHost() != 0 )
  {
    v2 = this->m_nDragSelectionVolumeZMin - 32;
    if ( v2 < 0 )
      v2 = 0;
    this->m_nDragSelectionVolumeZMin = v2;
    ConVar::SetValue(&nav_drag_selection_volume_zmin_offset, v2);
  }
}


// CNavEditor::CommandNavLowerDragVolumeMin  (line 1807, @0x0000000002ed43f0, libserver.so)
// calls: UTIL_GetListenServerHost, ConVar::SetValue
// callers: CommandNavLowerDragVolumeMin
// globals: nav_drag_selection_volume_zmin_offset
void __fastcall CNavEditor::CommandNavLowerDragVolumeMin(CNavEditor *const this)
{
  int v2; // esi

  if ( UTIL_GetListenServerHost() != 0 )
  {
    v2 = this->m_nDragSelectionVolumeZMin + 32;
    this->m_nDragSelectionVolumeZMin = v2;
    ConVar::SetValue(&nav_drag_selection_volume_zmin_offset, v2);
  }
}


// CNavEditor::CommandNavToggleSelecting  (line 1819, @0x0000000002ed4470, libserver.so)  // inlines: StartContinuouslySelecting, StopContinuouslySelecting
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavToggleSelecting
// strings: "EDIT_END_AREA.Creating"
void __fastcall CNavEditor::CommandNavToggleSelecting(CNavEditor *const this, bool playSound)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    this->m_bIsContinuouslySelecting = !this->m_bIsContinuouslySelecting;
    this->m_bIsContinuouslyDeselecting = 0;
    if ( playSound )
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
  }
}


// CNavEditor::CommandNavBeginDeselecting  (line 1838, @0x0000000002ed4510, libserver.so)  // inlines: StartContinuouslyDeselecting
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavBeginDeselecting
// strings: "EDIT_BEGIN_AREA.Creating"
void __fastcall CNavEditor::CommandNavBeginDeselecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    this->m_bIsContinuouslySelecting = 0;
    this->m_bIsContinuouslyDeselecting = 1;
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.Creating", 0.0, 0);
  }
}


// CNavEditor::CommandNavEndDeselecting  (line 1853, @0x0000000002ed45a0, libserver.so)  // inlines: StopContinuouslyDeselecting
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavEndDeselecting
// strings: "EDIT_END_AREA.Creating"
void __fastcall CNavEditor::CommandNavEndDeselecting(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    this->m_bIsContinuouslySelecting = 0;
    this->m_bIsContinuouslyDeselecting = 0;
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
  }
}


// CNavEditor::CommandNavToggleDeselecting  (line 1868, @0x0000000002ed4630, libserver.so)  // inlines: StartContinuouslyDeselecting, StopContinuouslyDeselecting
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavToggleDeselecting
// strings: "EDIT_END_AREA.Creating"
void __fastcall CNavEditor::CommandNavToggleDeselecting(CNavEditor *const this, bool playSound)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode <= INavEditor::EditModeType::PLACE_PAINTING )
  {
    if ( this->m_bIsContinuouslyDeselecting )
    {
      this->m_bIsContinuouslySelecting = 0;
      this->m_bIsContinuouslyDeselecting = 0;
    }
    else
    {
      this->m_bIsContinuouslySelecting = 0;
      this->m_bIsContinuouslyDeselecting = 1;
    }
    if ( playSound )
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
  }
}


// CNavEditor::CommandNavSelectHalfSpace  (line 1890, @0x0000000002eec400, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, Arg, CopyConstruct<CNavArea*>, Element, FStrEq, GetExtent, GrowMemory, IsInSelectionSet, IsInSet, RemoveFromSelectionSet, RemoveFromSet, _V_strcmp, atof, operator=, operator[]
// calls: UTIL_GetListenServerHost, Warning, strtod, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove, CBaseEntity::EmitSound, CUtlMemory<CNavArea*, int>::Grow
// callers: nav_select_half_space
// strings: "Error:  <+X|-X|+Y|-Y|+Z|-Z> <value>\n", "+x", "-x", "+y", "-y", "+z" (8 total)
// globals: jpt_2EEC626
void __fastcall CNavEditor::CommandNavSelectHalfSpace(
        CNavEditor *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  char *v5; // rax
  __m128d v6; // xmm0
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  unsigned __int64 v9; // rbx
  CNavArea *v10; // r13
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  const CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> > *v17; // r14
  __int64 v18; // rax
  int v19; // esi
  CNavArea **v20; // rax
  int v21; // [rsp+4h] [rbp-8Ch]
  CBasePlayer *pPlayer; // [rsp+10h] [rbp-80h]
  CNavEditor *thisa; // [rsp+20h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-60h]
  CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType halfSpace; // [rsp+38h] [rbp-58h]
  float flValue; // [rsp+3Ch] [rbp-54h]
  CNavArea *v27; // [rsp+48h] [rbp-48h] BYREF
  CNavArea *v28; // [rsp+50h] [rbp-40h] BYREF
  CNavArea *v29; // [rsp+58h] [rbp-38h] BYREF

  pPlayer = UTIL_GetListenServerHost();
  if ( pPlayer == 0 || this->m_EditMode > INavEditor::EditModeType::PLACE_PAINTING )
    return;
  if ( args->m_nArgc != 3 )
  {
    Warning("Error:  <+X|-X|+Y|-Y|+Z|-Z> <value>\n");
    return;
  }
  v5 = args->m_ppArgv[1];
  if ( v5 == "+x" )
  {
LABEL_18:
    halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_X;
    goto LABEL_19;
  }
  halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_X;
  if ( strcmp("+x", args->m_ppArgv[1]) != 0 )
  {
    if ( v5 == "-x" )
    {
      halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_X;
      goto LABEL_19;
    }
    halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_X;
    if ( strcmp("-x", args->m_ppArgv[1]) != 0 )
    {
      if ( v5 == "+y" )
      {
        halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_Y;
        goto LABEL_19;
      }
      halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_Y;
      if ( strcmp("+y", args->m_ppArgv[1]) != 0 )
      {
        if ( v5 == "-y" )
        {
          halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_Y;
          goto LABEL_19;
        }
        halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_Y;
        if ( strcmp("-y", args->m_ppArgv[1]) != 0 )
        {
          if ( v5 == "+z" )
          {
            halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_Z;
            goto LABEL_19;
          }
          halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_Z;
          if ( strcmp("+z", args->m_ppArgv[1]) != 0 )
          {
            if ( v5 == "-z" || strcmp("-z", args->m_ppArgv[1]) == 0 )
            {
              halfSpace = CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_Z;
              goto LABEL_19;
            }
            goto LABEL_18;
          }
        }
      }
    }
  }
LABEL_19:
  v6.m128d_f64[0] = strtod(args->m_ppArgv[2], 0);
  m_rNavMesh = this->m_rNavMesh;
  flValue = _mm_movedup_pd(v6).m128d_f64[0];
  m_Size = m_rNavMesh->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v9 = 0;
    thisa = this;
    v24 = 8LL * (m_Size - 1) + 8;
    do
    {
      v10 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v9 / 8];
      x = v10->m_Extent.lo.x;
      y = v10->m_Extent.lo.y;
      z = v10->m_Extent.lo.z;
      v14 = v10->m_Extent.hi.x;
      v15 = v10->m_Extent.hi.y;
      v16 = v10->m_Extent.hi.z;
      switch ( halfSpace )
      {
        case CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_X:
          if ( x <= flValue || v14 <= flValue )
            goto LABEL_24;
          break;
        case CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_Y:
          if ( flValue <= y || flValue <= v15 )
            goto LABEL_24;
          break;
        case CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_Y:
          if ( y <= flValue || v15 <= flValue )
            goto LABEL_24;
          break;
        case CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::PLUS_Z:
          if ( flValue <= z || flValue <= v16 )
            goto LABEL_24;
          break;
        case CNavEditor::CommandNavSelectHalfSpace::HalfSpaceType::MINUS_Z:
          if ( z <= flValue || v16 <= flValue )
            goto LABEL_24;
          break;
        default:
          if ( flValue <= x || flValue <= v14 )
          {
LABEL_24:
            v27 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v9 / 8];
            v17 = thisa->m_rNavMesh;
            if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(v17 + 4, &v27) == -1 )
            {
              v29 = v10;
              if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(v17 + 4, &v29) == -1 )
              {
                v18 = v17[4].m_Size;
                v19 = v17[4].m_Size;
                if ( v18 == v17[4].m_Memory.m_nAllocationCount )
                {
                  v21 = v17[4].m_Size;
                  CUtlMemory<CNavArea *,int>::Grow(&v17[4].m_Memory, 1);
                  v19 = v17[4].m_Size;
                  v18 = v21;
                }
                v17[4].m_Size = v19 + 1;
                v20 = &v17[4].m_Memory.m_pMemory[v18];
                if ( v20 != 0 )
                  *v20 = v10;
              }
            }
            else
            {
              v28 = v10;
              CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&v17[4], &v28);
            }
          }
          break;
      }
      v9 += 8LL;
    }
    while ( v9 != v24 );
  }
  CBaseEntity::EmitSound(pPlayer, "EDIT_DELETE", 0.0, 0);
}


// CNavEditor::CommandNavBeginShiftXY  (line 2008, @0x0000000002ed46d0, libserver.so)  // inlines: SetAnchorToEditCursor, SetEditMode, operator=
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavBeginShiftXY
// strings: "EDIT_BEGIN_AREA.Creating", "EDIT_END_AREA.Creating"
void __fastcall CNavEditor::CommandNavBeginShiftXY(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  int (**vptr_INavEditor)(...); // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    vptr_INavEditor = this->_vptr_INavEditor;
    if ( this->m_EditMode == INavEditor::EditModeType::SHIFTING_XY )
    {
      vptr_INavEditor[2](this, 1, 1);
      this->m_EditMode = INavEditor::EditModeType::NORMAL;
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
    }
    else
    {
      vptr_INavEditor[2](this, 1, 1);
      this->m_EditMode = INavEditor::EditModeType::SHIFTING_XY;
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.Creating", 0.0, 0);
      this->m_vAnchor.x = this->m_vEditCursorPos.x;
      this->m_vAnchor.y = this->m_vEditCursorPos.y;
      this->m_vAnchor.z = this->m_vEditCursorPos.z;
    }
  }
}


// CNavEditor::CommandNavEndShiftXY  (line 2031, @0x0000000002ed47b0, libserver.so)  // inlines: ForAllEditorSelectedAreas<ShiftSet>, ForAllSetAreas<ShiftSet>, SetEditMode, ShiftSet, VectorSubtract, operator(), operator-
// calls: UTIL_GetListenServerHost, CNavArea::ShiftAreaAndLadders, CBaseEntity::EmitSound
// callers: CommandNavEndShiftXY
// strings: "EDIT_END_AREA.Creating"
void __fastcall CNavEditor::CommandNavEndShiftXY(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavMesh *m_rNavMesh; // r15
  float y; // xmm0_4
  int m_Size; // eax
  vec_t v6; // xmm1_4
  CNavArea *m_pSelectedArea; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  CNavArea *v10; // rdi
  ShiftSet shift; // [rsp+0h] [rbp-40h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    (*(this->_vptr_INavEditor + 2))(this, 1, 1);
    m_rNavMesh = this->m_rNavMesh;
    this->m_EditMode = INavEditor::EditModeType::NORMAL;
    y = this->m_vEditCursorPos.y;
    shift.m_vShift.z = 0.0;
    m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
    v6 = this->m_vEditCursorPos.x - this->m_vAnchor.x;
    shift.m_vShift.y = y - this->m_vAnchor.y;
    shift.m_vShift.x = v6;
    if ( m_Size != 0 )
    {
      v8 = 0;
      v9 = 8LL * (m_Size - 1) + 8;
      do
      {
        v10 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v8 / 8];
        v8 += 8LL;
        CNavArea::ShiftAreaAndLadders(v10, &shift.m_vShift);
      }
      while ( v8 != v9 );
    }
    else
    {
      m_pSelectedArea = this->m_pSelectedArea;
      if ( m_pSelectedArea != 0 )
        CNavArea::ShiftAreaAndLadders(m_pSelectedArea, &shift.m_vShift);
    }
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
  }
}


// CNavEditor::CommandNavSelectBlockedAreas  (line 2051, @0x0000000002eeb320, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, ClearSelectionSet, ClearSet, CopyConstruct<CNavArea*>, Element, GrowMemory, RemoveAll, operator[]
// calls: UTIL_GetListenServerHost, CNavArea::IsBlocked, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, Msg, CBaseEntity::EmitSound, CUtlMemory<CNavArea*, int>::Grow
// callers: nav_select_blocked_areas
// strings: "Selected %d areas.\n", "EDIT_MARK.Disable", "EDIT_MARK.Enable"
void __fastcall CNavEditor::CommandNavSelectBlockedAreas(CNavEditor *const this)
{
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  CNavArea **m_pMemory; // rax
  CNavArea *v7; // r14
  CNavMesh *v8; // rdx
  int v9; // eax
  CNavMesh *v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  int v13; // esi
  CNavArea **v14; // rax
  int v15; // [rsp+4h] [rbp-5Ch]
  CBasePlayer *pPlayer; // [rsp+8h] [rbp-58h]
  CNavMesh *v17; // [rsp+18h] [rbp-48h]
  CNavArea *v18; // [rsp+28h] [rbp-38h] BYREF

  pPlayer = UTIL_GetListenServerHost();
  if ( pPlayer != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    m_rNavMesh = this->m_rNavMesh;
    m_Size = m_rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v4 = 0;
      v5 = 8LL * (m_Size - 1) + 8;
      do
      {
        m_pMemory = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory;
        v7 = m_pMemory[v4 / 8];
        if ( v7 != 0 && CNavArea::IsBlocked(m_pMemory[v4 / 8], -1, 0) )
        {
          v8 = this->m_rNavMesh;
          v18 = v7;
          v17 = v8;
          v9 = CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v8->m_SelectionSet.m_SetAreas, &v18);
          v10 = v17;
          if ( v9 == -1 )
          {
            v12 = v17->m_SelectionSet.m_SetAreas.m_Size;
            v13 = v17->m_SelectionSet.m_SetAreas.m_Size;
            if ( v12 == v17->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
            {
              v15 = v17->m_SelectionSet.m_SetAreas.m_Size;
              CUtlMemory<CNavArea *,int>::Grow(&v17->m_SelectionSet.m_SetAreas.m_Memory, 1);
              v10 = v17;
              v12 = v15;
              v13 = v17->m_SelectionSet.m_SetAreas.m_Size;
            }
            v10->m_SelectionSet.m_SetAreas.m_Size = v13 + 1;
            v14 = &v10->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v12];
            if ( v14 != 0 )
              *v14 = v7;
          }
        }
        v4 += 8LL;
      }
      while ( v4 != v5 );
      m_rNavMesh = this->m_rNavMesh;
    }
    v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
    Msg("Selected %d areas.\n", v11);
    if ( v11 != 0 )
      CBaseEntity::EmitSound(pPlayer, "EDIT_MARK.Enable", 0.0, 0);
    else
      CBaseEntity::EmitSound(pPlayer, "EDIT_MARK.Disable", 0.0, 0);
  }
}


// CNavEditor::CommandNavSelectObstructedAreas  (line 2086, @0x0000000002eea9b0, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, ClearSelectionSet, ClearSet, CopyConstruct<CNavArea*>, Element, GrowMemory, HasAvoidanceObstacle, RemoveAll, operator[]
// calls: UTIL_GetListenServerHost, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, Msg, CBaseEntity::EmitSound, CUtlMemory<CNavArea*, int>::Grow
// callers: nav_select_obstructed_areas
// strings: "Selected %d areas.\n", "EDIT_MARK.Disable", "EDIT_MARK.Enable"
void __fastcall CNavEditor::CommandNavSelectObstructedAreas(CNavEditor *const this)
{
  CNavMesh *m_rNavMesh; // r14
  int m_Size; // eax
  CNavMesh *v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  CNavArea *v7; // r12
  int v8; // eax
  __int64 v9; // rax
  int v10; // esi
  CNavArea **v11; // rax
  int v12; // ebx
  __int64 v13; // [rsp+0h] [rbp-60h]
  CBasePlayer *pPlayer; // [rsp+8h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-48h]
  int v16; // [rsp+18h] [rbp-48h]
  CNavArea *v17; // [rsp+28h] [rbp-38h] BYREF

  pPlayer = UTIL_GetListenServerHost();
  if ( pPlayer != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    m_rNavMesh = this->m_rNavMesh;
    m_Size = m_rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v4 = this->m_rNavMesh;
      v5 = 0;
      v6 = 8LL * (m_Size - 1) + 8;
      do
      {
        while ( 1 )
        {
          v7 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v5 / 8];
          if ( v7 != 0 && v7->m_nAvoidanceObstacleHeight > 18.0 )
          {
            v15 = v6;
            v17 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v5 / 8];
            v8 = CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v4->m_SelectionSet.m_SetAreas, &v17);
            v6 = v15;
            if ( v8 == -1 )
              break;
          }
          v5 += 8LL;
          if ( v5 == v6 )
            goto LABEL_14;
        }
        v9 = v4->m_SelectionSet.m_SetAreas.m_Size;
        v10 = v4->m_SelectionSet.m_SetAreas.m_Size;
        if ( v9 == v4->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          v13 = v15;
          v16 = v4->m_SelectionSet.m_SetAreas.m_Size;
          CUtlMemory<CNavArea *,int>::Grow(&v4->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v10 = v4->m_SelectionSet.m_SetAreas.m_Size;
          v6 = v13;
          v9 = v16;
        }
        v4->m_SelectionSet.m_SetAreas.m_Size = v10 + 1;
        v11 = &v4->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v9];
        if ( v11 != 0 )
          *v11 = v7;
        v5 += 8LL;
        v4 = this->m_rNavMesh;
      }
      while ( v5 != v6 );
    }
    else
    {
      v4 = this->m_rNavMesh;
    }
LABEL_14:
    v12 = v4->m_SelectionSet.m_SetAreas.m_Size;
    Msg("Selected %d areas.\n", v12);
    if ( v12 != 0 )
      CBaseEntity::EmitSound(pPlayer, "EDIT_MARK.Enable", 0.0, 0);
    else
      CBaseEntity::EmitSound(pPlayer, "EDIT_MARK.Disable", 0.0, 0);
  }
}


// CNavEditor::CommandNavSelectStairs  (line 2160, @0x0000000002eeab60, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, ClearSelectionSet, ClearSet, CopyConstruct<CNavArea*>, Element, GrowMemory, RemoveAll, operator[]
// calls: UTIL_GetListenServerHost, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, Msg, CBaseEntity::EmitSound, CUtlMemory<CNavArea*, int>::Grow
// callers: nav_select_stairs
// strings: "Selected %d areas.\n", "EDIT_MARK.Disable", "EDIT_MARK.Enable"
void __fastcall CNavEditor::CommandNavSelectStairs(CNavEditor *const this)
{
  CNavMesh *m_rNavMesh; // r14
  int m_Size; // eax
  CNavMesh *v4; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  CNavArea **m_pMemory; // rax
  CNavArea *v8; // r13
  int v9; // ebx
  __int64 v10; // rax
  int v11; // esi
  CNavArea **v12; // rax
  int v13; // [rsp+4h] [rbp-5Ch]
  CBasePlayer *pPlayer; // [rsp+10h] [rbp-50h]
  CNavArea *v16; // [rsp+28h] [rbp-38h] BYREF

  pPlayer = UTIL_GetListenServerHost();
  if ( pPlayer != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    m_rNavMesh = this->m_rNavMesh;
    m_Size = m_rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v4 = this->m_rNavMesh;
      v5 = 0;
      v6 = 8LL * (m_Size - 1) + 8;
      do
      {
        m_pMemory = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory;
        v8 = m_pMemory[v5 / 8];
        if ( v8 != 0 && (v8->m_AreaAttributes.m_Flags & 0x1000) != 0 )
        {
          v16 = m_pMemory[v5 / 8];
          if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v4->m_SelectionSet.m_SetAreas, &v16) == -1 )
          {
            v10 = v4->m_SelectionSet.m_SetAreas.m_Size;
            v11 = v4->m_SelectionSet.m_SetAreas.m_Size;
            if ( v10 == v4->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
            {
              v13 = v4->m_SelectionSet.m_SetAreas.m_Size;
              CUtlMemory<CNavArea *,int>::Grow(&v4->m_SelectionSet.m_SetAreas.m_Memory, 1);
              v11 = v4->m_SelectionSet.m_SetAreas.m_Size;
              v10 = v13;
            }
            v4->m_SelectionSet.m_SetAreas.m_Size = v11 + 1;
            v12 = &v4->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v10];
            if ( v12 != 0 )
              *v12 = v8;
            v4 = this->m_rNavMesh;
          }
        }
        v5 += 8LL;
      }
      while ( v5 != v6 );
    }
    else
    {
      v4 = this->m_rNavMesh;
    }
    v9 = v4->m_SelectionSet.m_SetAreas.m_Size;
    Msg("Selected %d areas.\n", v9);
    if ( v9 != 0 )
      CBaseEntity::EmitSound(pPlayer, "EDIT_MARK.Enable", 0.0, 0);
    else
      CBaseEntity::EmitSound(pPlayer, "EDIT_MARK.Disable", 0.0, 0);
  }
}


// CNavEditor::CommandNavSplitAA  (line 2195, @0x0000000002f01960, libserver.so)
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CNavArea::SplitEditWrapperAxisAligned, CBaseEntity::EmitSound
// callers: CommandNavSplitAA
// strings: "EDIT_SPLIT.MarkedArea", "EDIT_SPLIT.NoMarkedArea"
void __fastcall CNavEditor::CommandNavSplitAA(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavArea *m_pSelectedArea; // rdi

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      CNavEditor::UpdateSelection(this);
      m_pSelectedArea = this->m_pSelectedArea;
      if ( m_pSelectedArea != 0 )
      {
        if ( CNavArea::SplitEditWrapperAxisAligned(m_pSelectedArea, this->m_bSplitAlongX, this->m_flSplitEdge, 0, 0) )
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_SPLIT.MarkedArea", 0.0, 0);
        else
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_SPLIT.NoMarkedArea", 0.0, 0);
      }
      (*(this->m_rNavMesh->_vptr_CNavMesh + 27))(this->m_rNavMesh);
      (*(this->_vptr_INavEditor + 7))(this);
    }
  }
}


// CNavEditor::CommandNavSplit  (line 2228, @0x0000000002f01a50, libserver.so)  // inlines: Dot, DotProduct, NormalizeInPlace, Vector
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, VectorNormalize, CNavArea::SplitArea, CBaseEntity::EmitSound
// callers: CommandNavSplit
// strings: "EDIT_SPLIT.MarkedArea", "EDIT_SPLIT.NoMarkedArea"
void __fastcall CNavEditor::CommandNavSplit(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  vec_t x; // xmm1_4
  float y; // xmm0_4
  Vector vCutNorm; // [rsp+0h] [rbp-30h] BYREF

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      CNavEditor::UpdateSelection(this);
      if ( this->m_pSelectedArea != 0 )
      {
        x = this->m_SplitRay.m_Delta.x;
        y = this->m_SplitRay.m_Delta.y;
        vCutNorm.z = 0.0;
        vCutNorm.y = x;
        vCutNorm.x = -y;
        VectorNormalize(&vCutNorm);
        if ( CNavArea::SplitArea(
               this->m_pSelectedArea,
               &vCutNorm,
               ((vCutNorm.x * this->m_SplitRay.m_Start.x) + (vCutNorm.y * this->m_SplitRay.m_Start.y))
             + (vCutNorm.z * this->m_SplitRay.m_Start.z),
               1,
               0,
               0) <= 1 )
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_SPLIT.NoMarkedArea", 0.0, 0);
        else
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_SPLIT.MarkedArea", 0.0, 0);
      }
      (*(this->m_rNavMesh->_vptr_CNavMesh + 27))(this->m_rNavMesh);
      (*(this->_vptr_INavEditor + 7))(this);
    }
  }
}


// CNavEditor::CommandNavMerge  (line 2265, @0x0000000002f01bc0, libserver.so)  // inlines: ClearSelectionSet, ClearSet, GetMarkedAreaIncludingSelectionSet, RemoveAll
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CNavArea::MergeEdit, CBaseEntity::EmitSound, CNavEditor::GetMarkedAreaIncludingSelectionSet, Msg
// callers: CommandNavMerge
// strings: "EDIT_MERGE.Disable", "EDIT_MERGE.Enable", "To merge, mark an area, highlight a second area, then invoke the merge command"
void __fastcall CNavEditor::CommandNavMerge(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavArea *m_pSelectedArea; // r13
  CNavArea *m_pMarkedArea; // rsi

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      CNavEditor::UpdateSelection(this);
      m_pSelectedArea = this->m_pSelectedArea;
      if ( m_pSelectedArea != 0 )
      {
        m_pMarkedArea = this->m_pMarkedArea;
        if ( (m_pMarkedArea != 0 || (m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this)) != 0)
          && m_pSelectedArea != m_pMarkedArea )
        {
          if ( CNavArea::MergeEdit(m_pSelectedArea, m_pMarkedArea) )
          {
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_MERGE.Enable", 0.0, 0);
            goto LABEL_10;
          }
        }
        else
        {
          Msg("To merge, mark an area, highlight a second area, then invoke the merge command");
        }
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_MERGE.Disable", 0.0, 0);
      }
LABEL_10:
      (*(this->m_rNavMesh->_vptr_CNavMesh + 27))(this->m_rNavMesh);
      (*(this->_vptr_INavEditor + 7))(this);
      this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    }
  }
}


// CNavEditor::CommandNavMark  (line 2308, @0x0000000002f01cf0, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, Arg, ClearCorner, CopyConstruct<CNavArea*>, Element, FStrEq, GrowMemory, IsInSelectionSet, IsInSet, RemoveFromSelectionSet, RemoveFromSet, SetMarkedLadder, _V_strcmp, atoi, operator[]
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CBaseEntity::EmitSound, Msg, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove, strtol, CNavArea::GetTotalAdjacentCount, CNavMesh::GetLadderByID, CUtlMemory<CNavArea*, int>::Grow
// callers: CommandNavMark
// strings: "EDIT_MARK.Enable", "Area or ladder unmarked.\n", "EDIT_MARK.Disable", "Marked Area is connected to %d other Areas\n", "Newly marked ladder is connected to %d Areas\n"
void __fastcall CNavEditor::CommandNavMark(
        CNavEditor *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // r12
  CNavMesh *m_rNavMesh; // rdi
  CNavSelectionSet *p_m_SelectionSet; // rdi
  CNavArea *v8; // r12
  CNavMesh *v9; // rbx
  __int64 v10; // r13
  int v11; // eax
  CNavArea **v12; // rax
  char *v13; // rax
  int v14; // eax
  int v15; // edx
  CNavMesh *v16; // rcx
  int m_Size; // esi
  CNavArea **m_pMemory; // rcx
  CNavArea *v19; // r13
  CNavArea **v20; // rax
  __int64 v21; // rcx
  CNavArea *m_pSelectedArea; // rdi
  int TotalAdjacentCount; // eax
  const char *v24; // rdi
  unsigned int v25; // eax
  CNavLadder *LadderByID; // r13
  int v27; // esi
  bool v28; // zf
  CNavLadder *m_pSelectedLadder; // rax
  CNavArea *src; // [rsp+8h] [rbp-38h] BYREF
  CNavArea *v31; // [rsp+10h] [rbp-30h] BYREF
  CNavArea *v32; // [rsp+18h] [rbp-28h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    m_rNavMesh = this->m_rNavMesh;
    if ( m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size == 0 )
    {
      CNavEditor::UpdateSelection(this);
      if ( this->m_pMarkedArea != 0 || this->m_pMarkedLadder != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Enable", 0.0, 0);
        Msg("Area or ladder unmarked.\n");
        (*(this->_vptr_INavEditor + 7))(this);
LABEL_6:
        this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
        return;
      }
      if ( args->m_nArgc <= 1 )
      {
        if ( this->m_pSelectedArea != 0 )
        {
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
          m_pSelectedArea = this->m_pSelectedArea;
          this->m_pMarkedArea = m_pSelectedArea;
LABEL_28:
          TotalAdjacentCount = CNavArea::GetTotalAdjacentCount(m_pSelectedArea);
          Msg("Marked Area is connected to %d other Areas\n", TotalAdjacentCount);
          goto LABEL_6;
        }
        if ( this->m_pSelectedLadder == 0 )
          goto LABEL_6;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
        m_pSelectedLadder = this->m_pSelectedLadder;
        this->m_pMarkedArea = 0;
        this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
        this->m_pMarkedLadder = m_pSelectedLadder;
        v27 = (m_pSelectedLadder->m_pTopBehindArea != 0)
            + (m_pSelectedLadder->m_pTopRightArea != 0)
            + (m_pSelectedLadder->m_pTopForwardArea != 0)
            + (m_pSelectedLadder->m_pTopLeftArea != 0);
        v28 = m_pSelectedLadder->m_pBottomArea == 0;
      }
      else
      {
        v13 = args->m_ppArgv[1];
        if ( v13 != "ladder" && strcmp(args->m_ppArgv[1], "ladder") != 0 )
        {
          if ( v13 == 0 )
            goto LABEL_6;
          v14 = strtol(args->m_ppArgv[1], 0, 10);
          v15 = v14;
          if ( v14 == 0 )
            goto LABEL_6;
          v16 = this->m_rNavMesh;
          m_Size = v16->m_NavAreas.m_Size;
          if ( m_Size == 0 )
            goto LABEL_6;
          m_pMemory = v16->m_NavAreas.m_Memory.m_pMemory;
          v19 = *m_pMemory;
          if ( v14 != (*m_pMemory)->m_AreaId )
          {
            v20 = m_pMemory + 1;
            v21 = &m_pMemory[(m_Size - 1) + 1];
            while ( v20 != v21 )
            {
              v19 = *v20++;
              if ( v15 == v19->m_AreaId )
                goto LABEL_27;
            }
            goto LABEL_6;
          }
LABEL_27:
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
          this->m_pMarkedArea = v19;
          m_pSelectedArea = v19;
          goto LABEL_28;
        }
        if ( args->m_nArgc == 2 )
          goto LABEL_6;
        v24 = args->m_ppArgv[2];
        if ( v24 == 0 )
          goto LABEL_6;
        v25 = strtol(v24, 0, 10);
        if ( v25 == 0 )
          goto LABEL_6;
        LadderByID = CNavMesh::GetLadderByID(this->m_rNavMesh, v25);
        if ( LadderByID == 0 )
          goto LABEL_6;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
        this->m_pMarkedLadder = LadderByID;
        v27 = (LadderByID->m_pTopBehindArea != 0)
            + (LadderByID->m_pTopRightArea != 0)
            + (LadderByID->m_pTopLeftArea != 0)
            + (LadderByID->m_pTopForwardArea != 0);
        v28 = LadderByID->m_pBottomArea == 0;
      }
      Msg("Newly marked ladder is connected to %d Areas\n", !v28 + v27);
      goto LABEL_6;
    }
    src = this->m_pSelectedArea;
    if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&m_rNavMesh->m_SelectionSet.m_SetAreas, &src) == -1 )
    {
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Enable", 0.0, 0);
      v8 = this->m_pSelectedArea;
      v9 = this->m_rNavMesh;
      v32 = v8;
      if ( v8 != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v9->m_SelectionSet.m_SetAreas, &v32) == -1 )
      {
        v10 = v9->m_SelectionSet.m_SetAreas.m_Size;
        v11 = v9->m_SelectionSet.m_SetAreas.m_Size;
        if ( v10 == v9->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&v9->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v11 = v9->m_SelectionSet.m_SetAreas.m_Size;
        }
        v9->m_SelectionSet.m_SetAreas.m_Size = v11 + 1;
        v12 = &v9->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v10];
        if ( v12 != 0 )
          *v12 = v8;
      }
    }
    else
    {
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Disable", 0.0, 0);
      p_m_SelectionSet = &this->m_rNavMesh->m_SelectionSet;
      v31 = this->m_pSelectedArea;
      CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&p_m_SelectionSet->m_SetAreas, &v31);
    }
  }
}


// CNavEditor::CommandNavUnmark  (line 2434, @0x0000000002ed48d0, libserver.so)
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavUnmark
// strings: "EDIT_MARK.Enable"
void __fastcall CNavEditor::CommandNavUnmark(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_MARK.Enable", 0.0, 0);
    (*(this->_vptr_INavEditor + 7))(this);
  }
}


// CNavEditor::CommandNavBeginArea  (line 2449, @0x0000000002f020c0, libserver.so)  // inlines: SetAnchorToEditCursor, SetEditMode, SetupLadderAnchorAndNormal, operator=
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CBaseEntity::EmitSound
// callers: CommandNavBeginArea
// strings: "EDIT_BEGIN_AREA.NotCreating", "EDIT_END_AREA.NotCreating", "EDIT_BEGIN_AREA.Creating"
void __fastcall CNavEditor::CommandNavBeginArea(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  INavEditor::EditModeType m_EditMode; // eax
  INavEditor::EditModeType v4; // eax
  int (**vptr_INavEditor)(...); // rax

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 )
    {
      m_EditMode = this->m_EditMode;
      if ( (m_EditMode - 2) > 1 && m_EditMode != INavEditor::EditModeType::NORMAL )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.NotCreating", 0.0, 0);
      }
      else
      {
        CNavEditor::UpdateSelection(this);
        v4 = this->m_EditMode;
        if ( v4 == INavEditor::EditModeType::CREATING_AREA || v4 == INavEditor::EditModeType::CREATING_LADDER )
        {
          (*(this->_vptr_INavEditor + 2))(this, 1, 1);
          this->m_EditMode = INavEditor::EditModeType::NORMAL;
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.Creating", 0.0, 0);
        }
        else
        {
          vptr_INavEditor = this->_vptr_INavEditor;
          if ( this->m_bClimbableSurface )
          {
            vptr_INavEditor[2](this, 1, 1);
            this->m_EditMode = INavEditor::EditModeType::CREATING_LADDER;
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.NotCreating", 0.0, 0);
            this->m_vLadderAnchor.x = this->m_vEditCursorPos.x;
            this->m_vLadderAnchor.y = this->m_vEditCursorPos.y;
            this->m_vLadderAnchor.z = this->m_vEditCursorPos.z;
            this->m_vLadderNormal.x = this->m_vSurfaceNormal.x;
            this->m_vLadderNormal.y = this->m_vSurfaceNormal.y;
            this->m_vLadderNormal.z = this->m_vSurfaceNormal.z;
          }
          else
          {
            vptr_INavEditor[2](this, 1, 1);
            this->m_EditMode = INavEditor::EditModeType::CREATING_AREA;
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_BEGIN_AREA.NotCreating", 0.0, 0);
            this->m_vAnchor.x = this->m_vEditCursorPos.x;
            this->m_vAnchor.y = this->m_vEditCursorPos.y;
            this->m_vAnchor.z = this->m_vEditCursorPos.z;
          }
        }
        (*(this->_vptr_INavEditor + 7))(this);
      }
    }
  }
}


// FindRow  (line 2527, @0x0000000002eccf90, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, DidHit, DotProduct, EnableInteractsExclude, EnableInteractsWith, GetFloat, GetTraceMaskSolidBrushOnly, Init, LengthSqr, PlaneEquals, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator-, operator=
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CNavEditor::CommandAutoBuildOffGridAreas
// globals: g_vAutoFloorProbe
bool __fastcall FindRow(
        Vector *const vMins,
        Vector *const vMaxs,
        int nAxis,
        const Vector *const vStart,
        float flGridSize)
{
  __int64 v6; // r14
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  vec_t v10; // xmm0_4
  ConVar *m_pParent; // rax
  float m_fValue; // xmm7_4
  __int64 v13; // rax
  float *v14; // r15
  int v15; // r14d
  float v16; // xmm4_4
  float v17; // xmm8_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  int v20; // r14d
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float *v24; // rax
  float *v26; // [rsp+0h] [rbp-1F0h]
  float v27; // [rsp+Ch] [rbp-1E4h]
  float v28; // [rsp+10h] [rbp-1E0h]
  float v29; // [rsp+14h] [rbp-1DCh]
  __int64 v31; // [rsp+20h] [rbp-1D0h]
  float *v32; // [rsp+20h] [rbp-1D0h]
  float vMinsa; // [rsp+28h] [rbp-1C8h]
  float vMinsb; // [rsp+28h] [rbp-1C8h]
  float v36; // [rsp+30h] [rbp-1C0h]
  float v37; // [rsp+34h] [rbp-1BCh]
  float v38; // [rsp+34h] [rbp-1BCh]
  float *v39; // [rsp+48h] [rbp-1A8h]
  Vector vTest; // [rsp+60h] [rbp-190h] BYREF
  CTraceFilterWalkableEntities filter; // [rsp+70h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+C0h] [rbp-130h] BYREF
  Vector vNormal; // [rsp+110h] [rbp-E0h] BYREF
  float v44; // [rsp+128h] [rbp-C8h]
  float v45; // [rsp+12Ch] [rbp-C4h]
  float v46; // [rsp+130h] [rbp-C0h]
  float flDist; // [rsp+134h] [rbp-BCh]
  float v48; // [rsp+13Ch] [rbp-B4h]
  char v49; // [rsp+148h] [rbp-A8h]
  __int64 v50; // [rsp+178h] [rbp-78h]
  __int64 v51; // [rsp+180h] [rbp-70h]
  __int64 v52; // [rsp+188h] [rbp-68h]
  int v53; // [rsp+190h] [rbp-60h]
  __int16 v54; // [rsp+194h] [rbp-5Ch]
  char v55; // [rsp+196h] [rbp-5Ah]
  char v56; // [rsp+197h] [rbp-59h]

  v6 = nAxis;
  x = vStart->x;
  v54 = 0;
  vMins->x = x;
  y = vStart->y;
  v50 = 0;
  v51 = 0;
  vMins->y = y;
  z = vStart->z;
  v52 = 0;
  v55 = 0;
  vMins->z = z;
  v10 = vStart->x;
  v56 = 7;
  v53 = 0;
  vMaxs->x = v10;
  vMaxs->y = vStart->y;
  vMaxs->z = vStart->z;
  vTest = *vStart;
  CGameTrace::Init(&vNormal);
  CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 4, 0);
  filter._vptr_CTraceFilter = off_3FE6A50;
  filter.m_flags = 15;
  m_pParent = phys_traceline_radius.m_pParent;
  filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = (vTest.x - g_vAutoFloorProbe.x) - vTest.x;
  ray.m_Delta.y = (vTest.y - g_vAutoFloorProbe.y) - vTest.y;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.z = (vTest.z - g_vAutoFloorProbe.z) - vTest.z;
  ray.m_flRadius = m_fValue;
  ray.m_Start.Vector = vTest;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &vNormal);
  v13 = 4 * v6;
  v14 = &vStart->x + v6;
  v15 = 1;
  v29 = v44;
  v28 = v45;
  v31 = v13;
  v27 = v46;
  v39 = (&vTest.x + v13);
  v36 = flDist;
  v16 = 0.0;
  v26 = (&vMins->x + v13);
  do
  {
    v37 = v16;
    v17 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    v18 = *v14;
    ray.m_Delta.w = 0.0;
    ray.m_flRadius = v17;
    v19 = v18 - (v15 + v15);
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    ray.m_Extents.z = 0.0;
    *v39 = v19;
    vMinsa = v19;
    ray.m_Extents.y = 0.0;
    ray.m_Start.Vector = vTest;
    ray.m_Extents.x = 0.0;
    ray.m_IsRay = 1;
    ray.m_StartOffset.z = 0.0;
    ray.m_StartOffset.y = 0.0;
    ray.m_StartOffset.x = 0.0;
    ray.m_Delta.x = (vTest.x - g_vAutoFloorProbe.x) - vTest.x;
    ray.m_Delta.y = (vTest.y - g_vAutoFloorProbe.y) - vTest.y;
    ray.m_Delta.z = (vTest.z - g_vAutoFloorProbe.z) - vTest.z;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != v16;
    filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &vNormal);
    v16 = v37;
    if ( v48 >= 1.0 && v49 == 0 )
      break;
    if ( fabs(flDist - v36) >= 0.000001 )
      break;
    if ( (((v29 * v44) + (v28 * v45)) + (v27 * v46)) <= 0.999 )
      break;
    ++v15;
    *v26 = vMinsa;
  }
  while ( v15 != 512 );
  v20 = 1;
  v32 = (&vMaxs->x + v31);
  while ( 1 )
  {
    v38 = v16;
    v21 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    ray.m_Delta.w = 0.0;
    ray.m_flRadius = v21;
    v22 = (v20 + v20) + *v14;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    ray.m_Extents.z = 0.0;
    vMinsb = v22;
    ray.m_Extents.y = 0.0;
    *v39 = v22;
    ray.m_IsRay = 1;
    ray.m_Extents.x = 0.0;
    ray.m_Start.Vector = vTest;
    ray.m_StartOffset.z = 0.0;
    ray.m_StartOffset.y = 0.0;
    ray.m_StartOffset.x = 0.0;
    ray.m_Delta.x = (vTest.x - g_vAutoFloorProbe.x) - vTest.x;
    ray.m_Delta.y = (vTest.y - g_vAutoFloorProbe.y) - vTest.y;
    ray.m_Delta.z = (vTest.z - g_vAutoFloorProbe.z) - vTest.z;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != v16;
    filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &vNormal);
    v16 = v38;
    v23 = vMinsb;
    if ( v48 >= 1.0 && v49 == 0 )
      break;
    if ( fabs(flDist - v36) >= 0.000001 )
      break;
    v24 = v32;
    if ( (((v29 * v44) + (v28 * v45)) + (v27 * v46)) <= 0.999 )
      goto LABEL_15;
    ++v20;
    *v32 = vMinsb;
    if ( v20 == 512 )
      return (v23 - *v26) > 2.0;
  }
  v24 = v32;
LABEL_15:
  v23 = *v24;
  return (v23 - *v26) > 2.0;
}


// FindArea  (line 2575, @0x0000000002eca020, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, DidHit, DotProduct, EnableInteractsExclude, EnableInteractsWith, GetFloat, GetTraceMaskSolidBrushOnly, Init, LengthSqr, PlaneDistance, PlaneEquals, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator-
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CNavEditor::CommandAutoBuildOffGridAreas
// globals: g_vAutoFloorProbe
bool __fastcall FindArea(Vector *const vMins, Vector *const vMaxs, int nAxis0, int nAxis1, float flGridSize)
{
  __int64 v5; // r15
  __int64 v6; // r14
  vec_t z; // eax
  __int64 v8; // rdx
  ConVar *m_pParent; // rax
  float m_fValue; // xmm6_4
  float *v11; // r15
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float *v16; // r14
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  uint64 v20; // rdx
  CGamePhysicsQueryInterface *v21; // rdi
  float v22; // xmm7_4
  float *v24; // [rsp+0h] [rbp-220h]
  __int64 v25; // [rsp+10h] [rbp-210h]
  float *v26; // [rsp+18h] [rbp-208h]
  float v27; // [rsp+20h] [rbp-200h]
  int i; // [rsp+24h] [rbp-1FCh]
  float *v29; // [rsp+28h] [rbp-1F8h]
  float v30; // [rsp+30h] [rbp-1F0h]
  float v31; // [rsp+34h] [rbp-1ECh]
  __int64 v32; // [rsp+38h] [rbp-1E8h]
  float v34; // [rsp+48h] [rbp-1D8h]
  float v35; // [rsp+4Ch] [rbp-1D4h]
  float v36; // [rsp+50h] [rbp-1D0h]
  float x; // [rsp+58h] [rbp-1C8h]
  float i_0; // [rsp+5Ch] [rbp-1C4h]
  int i_0a; // [rsp+5Ch] [rbp-1C4h]
  float vMinsa; // [rsp+60h] [rbp-1C0h]
  float vMinsb; // [rsp+60h] [rbp-1C0h]
  Vector vStart; // [rsp+80h] [rbp-1A0h]
  Vector vTest; // [rsp+90h] [rbp-190h] BYREF
  CTraceFilterWalkableEntities filter; // [rsp+A0h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+F0h] [rbp-130h] BYREF
  Vector vNormal; // [rsp+140h] [rbp-E0h] BYREF
  float v48; // [rsp+158h] [rbp-C8h]
  float v49; // [rsp+15Ch] [rbp-C4h]
  float v50; // [rsp+160h] [rbp-C0h]
  float flDist; // [rsp+164h] [rbp-BCh]
  float v52; // [rsp+16Ch] [rbp-B4h]
  char v53; // [rsp+178h] [rbp-A8h]
  __int64 v54; // [rsp+1A8h] [rbp-78h]
  __int64 v55; // [rsp+1B0h] [rbp-70h]
  __int64 v56; // [rsp+1B8h] [rbp-68h]
  int v57; // [rsp+1C0h] [rbp-60h]
  __int16 v58; // [rsp+1C4h] [rbp-5Ch]
  char v59; // [rsp+1C6h] [rbp-5Ah]
  char v60; // [rsp+1C7h] [rbp-59h]

  v5 = nAxis1;
  v6 = nAxis0;
  z = vMins->z;
  v8 = *&vMins->x;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  vStart.z = z;
  vTest.z = z;
  v58 = 0;
  *&vStart.x = v8;
  *&vTest.x = v8;
  v59 = 0;
  v60 = 7;
  v57 = 0;
  CGameTrace::Init(&vNormal);
  CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 4, 0);
  filter._vptr_CTraceFilter = off_3FE6A50;
  filter.m_flags = 15;
  m_pParent = phys_traceline_radius.m_pParent;
  filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = (vTest.x - g_vAutoFloorProbe.x) - vTest.x;
  ray.m_Delta.y = (vTest.y - g_vAutoFloorProbe.y) - vTest.y;
  ray.m_flRadius = m_fValue;
  ray.m_Start.Vector = vTest;
  ray.m_Delta.z = (vTest.z - g_vAutoFloorProbe.z) - vTest.z;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &vNormal);
  v32 = 4 * v5;
  v34 = v48;
  v31 = v49;
  v29 = &vTest.x + v5;
  v30 = v50;
  v25 = 4 * v6;
  v11 = &vMaxs->x + v6;
  v35 = flDist;
  v26 = &vMins->x + v6;
  v27 = *(&vStart.x + v32);
  v24 = (&vMins->x + v32);
  i = 1;
  while ( 1 )
  {
    v12 = *v11;
    *v29 = v27 - (i + i);
    v13 = v27 - (i + i);
    v14 = *v26;
    if ( v12 >= *v26 )
      break;
LABEL_10:
    ++i;
    *v24 = v13;
    if ( i == 512 )
      goto LABEL_11;
  }
  while ( 1 )
  {
    *(&vTest.x + v25) = v14;
    x = v14;
    v36 = vTest.x;
    v15 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.Vector = vTest;
    ray.m_flRadius = v15;
    i_0 = vTest.y;
    vMinsa = vTest.z;
    ray.m_Start.w = 0.0;
    ray.m_Delta.x = (vTest.x - g_vAutoFloorProbe.x) - vTest.x;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.y = (vTest.y - g_vAutoFloorProbe.y) - vTest.y;
    ray.m_Delta.z = (vTest.z - g_vAutoFloorProbe.z) - vTest.z;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &vNormal);
    if ( v52 >= 1.0 && v53 == 0 )
      break;
    if ( fabs(flDist - v35) >= 0.000001
      || (((v34 * v48) + (v31 * v49)) + (v30 * v50)) <= 0.999
      || ((((v36 * v48) + (i_0 * v49)) + (vMinsa * v50)) - flDist) > 1.0 )
    {
      break;
    }
    v14 = x + 2.0;
    if ( *v11 < (x + 2.0) )
    {
      v13 = *v29;
      goto LABEL_10;
    }
  }
LABEL_11:
  i_0a = 1;
  v16 = (&vMaxs->x + v32);
  while ( 1 )
  {
    v17 = *v11;
    v18 = (i_0a + i_0a) + v27;
    *v29 = v18;
    v19 = *v26;
    if ( v17 >= *v26 )
      break;
LABEL_19:
    ++i_0a;
    *v16 = v18;
    if ( i_0a == 512 )
      return (v18 - *v24) > 2.0;
  }
  while ( 1 )
  {
    vMinsb = v19;
    v20 = CNavConfig::ms_TraceMaskSolidBrushOnly;
    v21 = g_pPhysicsQuery;
    *(&vTest.x + v25) = v19;
    v22 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.Vector = vTest;
    ray.m_Start.w = 0.0;
    ray.m_Delta.x = (vTest.x - g_vAutoFloorProbe.x) - vTest.x;
    ray.m_Delta.y = (vTest.y - g_vAutoFloorProbe.y) - vTest.y;
    ray.m_Delta.z = (vTest.z - g_vAutoFloorProbe.z) - vTest.z;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_flRadius = v22;
    ray.m_IsRay = 1;
    filter.m_attr.m_nInteractsWith |= v20;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CGamePhysicsQueryInterface::TraceRay(v21, &ray, &filter, &vNormal);
    if ( v52 >= 1.0 && v53 == 0 )
      break;
    if ( fabs(flDist - v35) >= 0.000001 || (((v34 * v48) + (v31 * v49)) + (v30 * v50)) <= 0.999 )
      break;
    v19 = vMinsb + 2.0;
    if ( *v11 < (vMinsb + 2.0) )
    {
      v18 = *v29;
      goto LABEL_19;
    }
  }
  v18 = *v16;
  return (v18 - *v24) > 2.0;
}


// SplitOnAxis  (line 2737, @0x0000000002eed810, libserver.so)  // inlines: AddToTail, CopyConstruct<Extent>, Element, GrowMemory, Size, operator[]
// calls: CUtlVectorBase<Extent, CUtlMemory<Extent, int> >::FastRemove, CUtlMemory<Extent, int>::Grow
// callers: AddAreaIfUnique
void __fastcall SplitOnAxis(
        CUtlVector<Extent,CUtlMemory<Extent,int> > *const list,
        int nAxis,
        float a3,
        float flMaxSize)
{
  __int64 v4; // r9
  float *v5; // rdx
  float *v6; // r15
  float *v7; // r8
  int m_Size; // r14d
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  __int64 v17; // r12
  double v18; // xmm4_8
  bool v19; // zf
  int v20; // eax
  int v21; // esi
  Extent *m_pMemory; // rax
  Extent *v23; // rax
  float v24; // xmm2_4
  int v25; // eax
  Extent *v26; // rax
  CUtlVectorBase<Extent,CUtlMemory<Extent,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-A8h]
  float v28; // [rsp+14h] [rbp-9Ch]
  float *v29; // [rsp+18h] [rbp-98h]
  float v30; // [rsp+20h] [rbp-90h]
  double v31; // [rsp+20h] [rbp-90h]
  float v32; // [rsp+20h] [rbp-90h]
  float *v33; // [rsp+28h] [rbp-88h]
  float *v34; // [rsp+28h] [rbp-88h]
  float *v35; // [rsp+28h] [rbp-88h]
  float *v36; // [rsp+30h] [rbp-80h]
  __int64 v37; // [rsp+30h] [rbp-80h]
  float *v38; // [rsp+30h] [rbp-80h]
  __int64 flSplit; // [rsp+38h] [rbp-78h]
  float flSplita; // [rsp+38h] [rbp-78h]
  __int64 flSplitb; // [rsp+38h] [rbp-78h]
  Extent box; // [rsp+40h] [rbp-70h] BYREF
  Extent chunk; // [rsp+60h] [rbp-50h] BYREF

  v4 = 4LL * nAxis;
  v5 = (&box.hi.x + v4);
  v6 = (&box.lo.x + v4);
  v7 = (&chunk.hi.x + v4);
  m_Size = list->m_Size;
  v10 = 24LL * list->m_Size - 24;
  p_m_Memory = &list->m_Memory;
  while ( --m_Size >= 0 )
  {
    v11 = (&list->m_Memory.m_pMemory->lo.x + v10);
    if ( (*(v11 + v4 + 12) - *(v11 + v4)) > a3 )
    {
      v30 = a3;
      v33 = v7;
      v36 = v5;
      flSplit = v4;
      *&box.lo.x = *v11;
      v12 = v11[1];
      v13 = v11[2];
      *&box.lo.z = v12;
      *&box.hi.y = v13;
      CUtlVectorBase<Extent,CUtlMemory<Extent,int>>::FastRemove(list, m_Size);
      v5 = v36;
      v14 = *v6;
      a3 = v30;
      v4 = flSplit;
      v15 = *v36;
      v7 = v33;
      v16 = *v36 - *v6;
      if ( v16 <= v30 )
      {
        v17 = list->m_Size;
      }
      else
      {
        a3 = v30;
        v17 = list->m_Size;
        v18 = v30 * 1.9;
        do
        {
          while ( 1 )
          {
            chunk = box;
            if ( v18 <= v16 )
              v14 = v14 + a3;
            else
              v14 = (v14 + v15) * 0.5;
            v19 = list->m_Memory.m_nAllocationCount == v17;
            *v7 = v14;
            v20 = v17;
            *v6 = v14;
            if ( v19 )
            {
              v37 = v4;
              v28 = a3;
              v29 = v7;
              v31 = v18;
              v34 = v5;
              flSplita = v14;
              CUtlMemory<Extent,int>::Grow(p_m_Memory, 1);
              v20 = list->m_Size;
              a3 = v28;
              v7 = v29;
              v18 = v31;
              v5 = v34;
              v4 = v37;
              v14 = flSplita;
            }
            v21 = v20 + 1;
            m_pMemory = list->m_Memory.m_pMemory;
            list->m_Size = v21;
            v23 = &m_pMemory[v17];
            if ( v23 == 0 )
              break;
            v15 = *v5;
            v24 = *v5;
            *v23 = chunk;
            v16 = v24 - v14;
            v17 = list->m_Size;
            if ( v16 <= a3 )
              goto LABEL_15;
          }
          v15 = *v5;
          v17 = v21;
          v16 = *v5 - v14;
        }
        while ( v16 > a3 );
      }
LABEL_15:
      v25 = v17;
      if ( list->m_Memory.m_nAllocationCount == v17 )
      {
        v38 = v5;
        v32 = a3;
        v35 = v7;
        flSplitb = v4;
        CUtlMemory<Extent,int>::Grow(p_m_Memory, 1);
        v25 = list->m_Size;
        a3 = v32;
        v7 = v35;
        v5 = v38;
        v4 = flSplitb;
      }
      list->m_Size = v25 + 1;
      v26 = &list->m_Memory.m_pMemory[v17];
      if ( v26 != 0 )
        *v26 = box;
    }
    v10 -= 24;
  }
}


// AddAreaIfUnique  (line 2812, @0x0000000002eedae0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CanMerge, ClipBoxListToBox2D, CloseEnough, Construct<Extent>, CopyConstruct<Extent>, Element, Encompass, Extent, GetExtent, GetFloat, GrowMemory, Init, IsContained2D, Max<float>, MergeBoxList, Min<float>, Purge, RemoveAll, SizeX, SizeY, SizeZ, SubtractBoxFromBox2D, SubtractBoxListFromBoxAxis, VectorSubtract, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CNavMesh::GetNavAreasInBox, CUtlMemory<Extent, int>::Grow, IsBoxIntersectingBox, CUtlVectorBase<Extent, CUtlMemory<Extent, int> >::FastRemove, CUtlVectorBase<Extent, CUtlMemory<Extent, int> >::AddVectorToTail<CUtlMemory<Extent, int> >, CUtlMemory<Extent, int>::Purge, SplitOnAxis, NDebugOverlay::Box, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlVectorBase<Extent, CUtlMemory<Extent, int> >::~CUtlVectorBase
// callers: CNavEditor::CommandAutoBuildOffGridAreas
void __fastcall AddAreaIfUnique(
        CUtlVector<Extent,CUtlMemory<Extent,int> > *const list,
        const Vector *const vMins,
        const Vector *const vMaxs,
        float flGridSize)
{
  __m128d v6; // xmm1
  Extent *m_pMemory; // rax
  int m_Size; // r10d
  CNavArea *v9; // rax
  float z; // xmm1_4
  vec_t y; // xmm0_4
  __m128d v12; // xmm0
  vec_t v13; // ebx
  vec_t v14; // r13d
  vec_t v15; // r15d
  int v16; // r12d
  Extent *v17; // rax
  __int64 v18; // rbx
  __int64 k; // r13
  float v20; // xmm1_4
  char v21; // cl
  float v22; // xmm0_4
  bool v23; // cc
  float v24; // xmm1_4
  Extent *v25; // rdx
  float v26; // xmm1_4
  unsigned __int64 *v27; // rax
  __int64 v28; // r15
  float v29; // xmm1_4
  int v30; // eax
  unsigned __int64 *v31; // rax
  float v32; // xmm2_4
  __int64 v33; // r15
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  int v36; // eax
  unsigned __int64 *v37; // rax
  __int64 v38; // r15
  float v39; // xmm0_4
  int v40; // eax
  unsigned __int64 *v41; // rax
  int v42; // ebx
  float x; // xmm1_4
  float v44; // xmm3_4
  float v45; // xmm2_4
  float v46; // xmm4_4
  __int64 m; // r12
  float *v48; // rax
  __int128 v49; // xmm2
  float v50; // xmm0_4
  bool v51; // zf
  int v52; // ebx
  __int64 v53; // r12
  Extent *v54; // rax
  int v55; // edx
  float *v56; // rcx
  float v57; // xmm6_4
  float v58; // xmm7_4
  float v59; // xmm8_4
  float v60; // xmm5_4
  float v61; // xmm4_4
  float v62; // xmm1_4
  Vector *p_hi; // rsi
  __int64 n; // rdx
  float v65; // xmm1_4
  float *v66; // rcx
  float v67; // xmm1_4
  float m_fValue; // ebx
  float v69; // xmm1_4
  __int64 v70; // r12
  int v71; // ebx
  unsigned int v72; // xmm1_4
  unsigned int v73; // xmm2_4
  __int64 v75; // [rsp+20h] [rbp-170h]
  float v76; // [rsp+30h] [rbp-160h]
  vec_t v77; // [rsp+40h] [rbp-150h]
  float v78; // [rsp+40h] [rbp-150h]
  vec_t v79; // [rsp+48h] [rbp-148h]
  float v80; // [rsp+48h] [rbp-148h]
  int i; // [rsp+50h] [rbp-140h]
  int elem; // [rsp+54h] [rbp-13Ch]
  vec_t v83; // [rsp+60h] [rbp-130h]
  float v84; // [rsp+60h] [rbp-130h]
  __int64 j; // [rsp+68h] [rbp-128h]
  float v86; // [rsp+68h] [rbp-128h]
  Vector *boxMax2[2]; // [rsp+70h] [rbp-120h]
  NavAreaVector overlappingAreas; // [rsp+80h] [rbp-110h] BYREF
  CUtlVector<Extent,CUtlMemory<Extent,int> > clipped; // [rsp+A0h] [rbp-F0h] BYREF
  Extent box; // [rsp+C0h] [rbp-D0h] BYREF
  CUtlVectorBase<Extent,CUtlMemory<Extent,int> > v91; // [rsp+E0h] [rbp-B0h] BYREF
  unsigned __int64 v92; // [rsp+100h] [rbp-90h]
  unsigned __int64 v93; // [rsp+108h] [rbp-88h] BYREF
  unsigned __int64 v94; // [rsp+110h] [rbp-80h]
  unsigned __int64 v95; // [rsp+120h] [rbp-70h]
  unsigned __int64 v96; // [rsp+128h] [rbp-68h] BYREF
  unsigned __int64 v97; // [rsp+130h] [rbp-60h]
  unsigned __int64 maxs; // [rsp+140h] [rbp-50h] BYREF
  unsigned __int64 maxs_8; // [rsp+148h] [rbp-48h]
  unsigned __int64 v100; // [rsp+150h] [rbp-40h]

  overlappingAreas.m_Size = 0;
  overlappingAreas.m_Memory.m_pMemory = 0;
  overlappingAreas.m_Memory.m_nAllocationCount = 0;
  overlappingAreas.m_Memory.m_nGrowSize = 0;
  CNavMesh::GetNavAreasInBox(TheNavMesh, &overlappingAreas, vMins, vMaxs);
  clipped.m_Size = 0;
  clipped.m_Memory.m_pMemory = 0;
  clipped.m_Memory.m_nAllocationCount = 0;
  clipped.m_Memory.m_nGrowSize = 0;
  CUtlMemory<Extent,int>::Grow(&clipped.m_Memory, 1);
  m_pMemory = clipped.m_Memory.m_pMemory;
  ++clipped.m_Size;
  if ( clipped.m_Memory.m_pMemory != 0 )
  {
    clipped.m_Memory.m_pMemory->lo.x = 3.4028235e38;
    m_pMemory->lo.y = 3.4028235e38;
    m_pMemory->lo.z = 3.4028235e38;
    m_pMemory->hi.x = -3.4028235e38;
    m_pMemory->hi.y = -3.4028235e38;
    m_pMemory->hi.z = -3.4028235e38;
    m_pMemory = clipped.m_Memory.m_pMemory;
  }
  m_pMemory->lo.x = vMins->x;
  m_Size = overlappingAreas.m_Size;
  m_pMemory->lo.y = vMins->y;
  m_pMemory->lo.z = vMins->z;
  m_pMemory->hi.x = vMaxs->x;
  m_pMemory->hi.y = vMaxs->y;
  m_pMemory->hi.z = vMaxs->z;
  if ( m_Size <= 0 )
    goto LABEL_50;
  v75 = 0;
  i = 0;
  do
  {
    box.lo.x = 3.4028235e38;
    box.lo.y = 3.4028235e38;
    box.lo.z = 3.4028235e38;
    box.hi.x = -3.4028235e38;
    box.hi.y = -3.4028235e38;
    box.hi.z = -3.4028235e38;
    v9 = overlappingAreas.m_Memory.m_pMemory[v75];
    z = v9->m_Extent.lo.z;
    box.lo.x = v9->m_Extent.lo.x;
    v6.m128d_f64[1] = z;
    v6.m128d_f64[0] = z - 0.1;
    box.lo.y = v9->m_Extent.lo.y;
    box.hi.x = v9->m_Extent.hi.x;
    y = v9->m_Extent.hi.y;
    box.lo.z = _mm_movedup_pd(v6).m128d_f64[0];
    box.hi.y = y;
    v12.m128d_f64[1] = v9->m_Extent.hi.z;
    v12.m128d_f64[0] = v12.m128d_f64[1] + 0.1;
    elem = clipped.m_Size;
    box.hi.z = _mm_movedup_pd(v12).m128d_f64[0];
    for ( j = 24LL * clipped.m_Size - 24; --elem >= 0; j -= 24 )
    {
      if ( !IsBoxIntersectingBox(
              (&clipped.m_Memory.m_pMemory->lo + j),
              (&clipped.m_Memory.m_pMemory->hi + j),
              &box.lo,
              &box.hi) )
        continue;
      v79 = *(&clipped.m_Memory.m_pMemory->hi.x + j);
      v13 = *(&clipped.m_Memory.m_pMemory->lo.x + j);
      v77 = *(&clipped.m_Memory.m_pMemory->hi.y + j);
      v14 = *(&clipped.m_Memory.m_pMemory->lo.y + j);
      v83 = *(&clipped.m_Memory.m_pMemory->hi.z + j);
      v15 = *(&clipped.m_Memory.m_pMemory->lo.z + j);
      CUtlVectorBase<Extent,CUtlMemory<Extent,int>>::FastRemove(&clipped, elem);
      v91.m_Size = 0;
      v91.m_Memory.m_pMemory = 0;
      v91.m_Memory.m_nAllocationCount = 0;
      v91.m_Memory.m_nGrowSize = 0;
      CUtlMemory<Extent,int>::Grow(&v91.m_Memory, 1);
      v16 = v91.m_Size + 1;
      v17 = v91.m_Memory.m_pMemory;
      ++v91.m_Size;
      if ( v91.m_Memory.m_pMemory != 0 )
      {
        v91.m_Memory.m_pMemory->lo.x = v13;
        v16 = v91.m_Size;
        v17->lo.y = v14;
        v17->lo.z = v15;
        v17->hi.x = v79;
        v17->hi.y = v77;
        v17->hi.z = v83;
      }
      v18 = 0;
      while ( 2 )
      {
        for ( k = 24LL * v16 - 24; --v16 >= 0; k -= 24 )
        {
          v25 = v91.m_Memory.m_pMemory;
          v26 = *(&box.lo.x + v18);
          v27 = (v91.m_Memory.m_pMemory + k);
          if ( v26 <= *(&v91.m_Memory.m_pMemory->lo.x + k + v18) )
          {
            v20 = *(&v91.m_Memory.m_pMemory->lo.x + k + v18);
            v21 = 0;
          }
          else
          {
            v28 = v91.m_Size;
            v29 = fminf(v26, *(v27 + v18 + 12));
            v92 = *v27;
            v51 = v91.m_Size == v91.m_Memory.m_nAllocationCount;
            v93 = v27[1];
            v94 = v27[2];
            *(&v93 + v18 + 4) = v29;
            v30 = v28;
            if ( v51 )
            {
              CUtlMemory<Extent,int>::Grow(&v91.m_Memory, 1);
              v30 = v91.m_Size;
              v25 = v91.m_Memory.m_pMemory;
            }
            v91.m_Size = v30 + 1;
            v31 = &v25[v28];
            if ( v31 != 0 )
            {
              *v31 = v92;
              v31[1] = v93;
              v31[2] = v94;
              v25 = v91.m_Memory.m_pMemory;
            }
            v27 = (v25 + k);
            v21 = 1;
            v20 = *(&v25->lo.x + k + v18);
          }
          v22 = *(&box.hi.x + v18);
          v23 = v22 <= v20;
          v24 = *(v27 + v18 + 12);
          if ( v23 || (v32 = *(&box.lo.x + v18), v24 <= v32) )
          {
            if ( v24 <= v22 )
            {
              if ( v21 == 0 )
                continue;
              goto LABEL_35;
            }
          }
          else
          {
            v33 = v91.m_Size;
            v95 = *v27;
            v34 = v27[1];
            v35 = v27[2];
            v96 = v34;
            v97 = v35;
            *(&v95 + v18) = fmaxf(*(&v95 + v18), v32);
            v51 = v33 == v91.m_Memory.m_nAllocationCount;
            *(&v96 + v18 + 4) = fminf(*(&v96 + v18 + 4), v22);
            v36 = v33;
            if ( v51 )
            {
              CUtlMemory<Extent,int>::Grow(&v91.m_Memory, 1);
              v36 = v91.m_Size;
              v25 = v91.m_Memory.m_pMemory;
            }
            v91.m_Size = v36 + 1;
            v37 = &v25[v33];
            if ( v37 != 0 )
            {
              *v37 = v95;
              v37[1] = v96;
              v37[2] = v97;
              v25 = v91.m_Memory.m_pMemory;
            }
            v27 = (v25 + k);
            v22 = *(&box.hi.x + v18);
            if ( *(&v25->hi.x + k + v18) <= v22 )
              goto LABEL_35;
          }
          v38 = v91.m_Size;
          maxs = *v27;
          v51 = v91.m_Size == v91.m_Memory.m_nAllocationCount;
          maxs_8 = v27[1];
          v100 = v27[2];
          v39 = fmaxf(v22, *(v27 + v18));
          v40 = v91.m_Size;
          *(&maxs + v18) = v39;
          if ( v51 )
          {
            CUtlMemory<Extent,int>::Grow(&v91.m_Memory, 1);
            v40 = v91.m_Size;
            v25 = v91.m_Memory.m_pMemory;
          }
          v91.m_Size = v40 + 1;
          v41 = &v25[v38];
          if ( v41 != 0 )
          {
            *v41 = maxs;
            v41[1] = maxs_8;
            v41[2] = v100;
          }
LABEL_35:
          CUtlVectorBase<Extent,CUtlMemory<Extent,int>>::FastRemove(&v91, v16);
        }
        v18 += 4;
        if ( v18 != 8 )
        {
          v16 = v91.m_Size;
          continue;
        }
        break;
      }
      v42 = v91.m_Size;
      x = box.lo.x;
      v44 = box.lo.y;
      v45 = box.hi.x;
      v46 = box.hi.y;
      for ( m = 24LL * v91.m_Size - 24; --v42 >= 0; m -= 24 )
      {
        v48 = (&v91.m_Memory.m_pMemory->lo.x + m);
        if ( *(&v91.m_Memory.m_pMemory->lo.x + m) >= x && v45 >= v48[3] && v48[1] >= v44 && v46 >= v48[4] )
        {
          v76 = v46;
          v78 = v45;
          v80 = v44;
          v84 = x;
          CUtlVectorBase<Extent,CUtlMemory<Extent,int>>::FastRemove(&v91, v42);
          x = v84;
          v44 = v80;
          v45 = v78;
          v46 = v76;
        }
      }
      CUtlVectorBase<Extent,CUtlMemory<Extent,int>>::AddVectorToTail<CUtlMemory<Extent,int>>(&clipped, &v91);
      v91.m_Size = 0;
      if ( (v91.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Extent,int>::Purge(&v91.m_Memory);
        if ( (v91.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Extent,int>::Purge(&v91.m_Memory);
      }
    }
    ++i;
    ++v75;
  }
  while ( i < overlappingAreas.m_Size );
LABEL_50:
  v49 = 0x7FFFFFFFu;
  v50 = 0.001;
  v51 = clipped.m_Size == 1;
  v52 = clipped.m_Size - 1;
  v53 = 24LL * clipped.m_Size - 24;
  if ( clipped.m_Size - 1 < 0 )
    goto LABEL_76;
  while ( 2 )
  {
    if ( v51 )
      goto LABEL_75;
    v54 = clipped.m_Memory.m_pMemory;
    v55 = 0;
    v56 = (&clipped.m_Memory.m_pMemory->lo.x + v53);
    while ( 2 )
    {
      if ( v50 < COERCE_FLOAT(
                   COERCE_UNSIGNED_INT(*(&clipped.m_Memory.m_pMemory->hi.z + v53) - *(&clipped.m_Memory.m_pMemory->lo.z
                                                                                    + v53))
                 & v49)
        || (LODWORD(v6.m128d_f64[0]) = COERCE_UNSIGNED_INT(v54->hi.z - v54->lo.z) & v49, v50 < *v6.m128d_f64) )
      {
LABEL_81:
        ++v55;
        ++v54;
        if ( v52 == v55 )
          goto LABEL_75;
        continue;
      }
      break;
    }
    v57 = v54->lo.y;
    v58 = v56[1];
    if ( v50 < COERCE_FLOAT(COERCE_UNSIGNED_INT((v56[4] - v58) - (v54->hi.y - v57)) & v49) )
    {
      v59 = v54->hi.x;
      v60 = *v56;
      goto LABEL_57;
    }
    v59 = v54->hi.x;
    v60 = *v56;
    if ( v50 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v58 - v57) & v49) )
    {
LABEL_57:
      v61 = v54->lo.x;
      v62 = v56[3];
      goto LABEL_58;
    }
    if ( v50 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v60 - v59) & v49) )
    {
      v62 = v56[3];
      v61 = v54->lo.x;
      if ( v50 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v62 - v54->lo.x) & v49) )
      {
LABEL_58:
        LODWORD(v6.m128d_f64[0]) = COERCE_UNSIGNED_INT((v62 - v60) - (v59 - v61)) & v49;
        if ( v50 >= *v6.m128d_f64
          && v50 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v60 - v61) & v49)
          && (v50 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v58 - v54->hi.y) & v49)
           || v50 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v56[4] - v57) & v49)) )
        {
          goto LABEL_62;
        }
        goto LABEL_81;
      }
    }
LABEL_62:
    p_hi = &v54->hi;
    for ( n = 0; n != 12; n += 4 )
    {
      v65 = *(v56 + n);
      if ( *(&v54->lo.x + n) > v65 )
      {
        *(&v54->lo.x + n) = v65;
        v65 = *(v56 + n);
      }
      if ( v65 > *(&p_hi->x + n) )
        *(&p_hi->x + n) = v65;
    }
    v66 = v56 + 3;
    LOBYTE(n) = 0;
    do
    {
      v67 = *(v66 + n);
      if ( *(&v54->lo.x + n) > v67 )
      {
        *(&v54->lo.x + n) = v67;
        v67 = *(v66 + n);
      }
      if ( v67 > *(&p_hi->x + n) )
        *(&p_hi->x + n) = v67;
      n += 4;
    }
    while ( n != 12 );
    v86 = v50;
    *boxMax2 = v49;
    CUtlVectorBase<Extent,CUtlMemory<Extent,int>>::FastRemove(&clipped, v52);
    v50 = v86;
    v49 = *boxMax2;
LABEL_75:
    v53 -= 24;
    v51 = --v52 == 0;
    if ( v52 >= 0 )
      continue;
    break;
  }
LABEL_76:
  m_fValue = nav_max_auto_area_size.m_pParent->m_Value.m_fValue;
  SplitOnAxis(&clipped, 0, m_fValue, *v6.m128d_f64);
  SplitOnAxis(&clipped, 1, m_fValue, v69);
  if ( clipped.m_Size > 0 )
  {
    v70 = 0;
    v71 = 0;
    do
    {
      *&v72 = clipped.m_Memory.m_pMemory[v70].hi.y - clipped.m_Memory.m_pMemory[v70].lo.y;
      *&v73 = clipped.m_Memory.m_pMemory[v70].hi.x - clipped.m_Memory.m_pMemory[v70].lo.x;
      *&maxs_8 = clipped.m_Memory.m_pMemory[v70].hi.z - clipped.m_Memory.m_pMemory[v70].lo.z;
      maxs = __PAIR64__(v72, v73);
      NDebugOverlay::Box(&clipped.m_Memory.m_pMemory[v70].lo, &vec3_origin, &maxs, 0, 255, 0, 0, 10.0);
      ++v71;
      ++v70;
    }
    while ( v71 < clipped.m_Size );
  }
  CUtlVectorBase<Extent,CUtlMemory<Extent,int>>::AddVectorToTail<CUtlMemory<Extent,int>>(list, &clipped);
  clipped.m_Size = 0;
  if ( (clipped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Extent,int>::Purge(&clipped.m_Memory);
    if ( (clipped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Extent,int>::Purge(&clipped.m_Memory);
  }
  CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::~CUtlVectorBase(&overlappingAreas);
}


// CNavEditor::CommandAutoBuildOffGridAreas  (line 2845, @0x0000000002eee660, libserver.so)  // inlines: AddToSelectionSet, AddToSet, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, Element, GetBool, GetEditCursorPosition, GetExtent, GetInt, GrowMemory, Purge, RemoveAll, SnapTo, VectorSubtract, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CNavMesh::GetNavArea, NDebugOverlay::Box, NDebugOverlay::Cross3D, FindRow, AddAreaIfUnique, CNavEditor::EditCreateNavArea, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<Extent, int>::Purge, FindArea, CUtlMemory<CNavArea*, int>::Grow, CUtlVectorBase<Extent, CUtlMemory<Extent, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CommandAutoBuildOffGridAreas
// globals: g_NavHullAAQuad
void __fastcall CNavEditor::CommandAutoBuildOffGridAreas(CNavEditor *const this)
{
  float v2; // xmm1_4
  vec_t z; // xmm2_4
  float v4; // xmm0_4
  const CNavMesh *m_rNavMesh; // rdi
  CNavArea *NavArea; // rax
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  __int64 v10; // r13
  int i; // r12d
  CNavArea *v12; // rbx
  CNavMesh *v13; // r15
  int m_Size; // eax
  CNavArea **v15; // rax
  float v16; // xmm1_4
  int vMins; // [rsp+8h] [rbp-C8h]
  float flSizeX; // [rsp+10h] [rbp-C0h]
  CNavArea *v19; // [rsp+28h] [rbp-A8h] BYREF
  Vector vCorner; // [rsp+30h] [rbp-A0h] BYREF
  Vector vMinsX; // [rsp+40h] [rbp-90h] BYREF
  Vector vMaxsX; // [rsp+50h] [rbp-80h] BYREF
  Vector vMinsY; // [rsp+60h] [rbp-70h] BYREF
  Vector vMaxsY; // [rsp+70h] [rbp-60h] BYREF
  Extent areaBox; // [rsp+80h] [rbp-50h] BYREF

  v2 = this->m_vEditCursorPos.x + this->m_vEditCursorPos.x;
  z = this->m_vEditCursorPos.z;
  v4 = this->m_vEditCursorPos.y + this->m_vEditCursorPos.y;
  m_rNavMesh = this->m_rNavMesh;
  vCorner.z = z;
  vCorner.x = v2 * 0.5;
  vCorner.y = v4 * 0.5;
  NavArea = CNavMesh::GetNavArea(m_rNavMesh, &vCorner, g_NavHullAAQuad, 4, 120.0, 5.0, 0);
  if ( NavArea != 0 )
  {
    areaBox.lo = NavArea->m_Extent.lo;
    areaBox.hi.x = NavArea->m_Extent.hi.x;
    areaBox.hi.y = NavArea->m_Extent.hi.y;
    v8 = NavArea->m_Extent.hi.z;
    vMaxsY.x = areaBox.hi.x - areaBox.lo.x;
    areaBox.hi.z = v8;
    vMaxsY.y = areaBox.hi.y - areaBox.lo.y;
    vMaxsY.z = v8 - areaBox.lo.z;
    NDebugOverlay::Box(&areaBox.lo, &vec3_origin, &vMaxsY, 255, 255, 0, 0, 10.0);
    NDebugOverlay::Cross3D(&vCorner, 8.0, 255, 0, 0, 0, 10.0);
    return;
  }
  if ( FindRow(&vMinsX, &vMaxsX, 0, &vCorner, v7) && FindArea(&vMinsX, &vMaxsX, 0, 1, v9) )
    flSizeX = (vMaxsX.y - vMinsX.y) * (vMaxsX.x - vMinsX.x);
  else
    flSizeX = 0.0;
  if ( !FindRow(&vMinsY, &vMaxsY, 1, &vCorner, 0.0) || !FindArea(&vMinsY, &vMaxsY, 1, 0, 0.0) )
  {
    areaBox.lo.x = 0.0;
    *&areaBox.lo.z = 0;
    areaBox.hi.y = 0.0;
    areaBox.hi.z = 0.0;
    goto LABEL_8;
  }
  areaBox.lo.x = 0.0;
  *&areaBox.lo.z = 0;
  areaBox.hi.y = 0.0;
  areaBox.hi.z = 0.0;
  v16 = (vMaxsY.x - vMinsY.x) * (vMaxsY.y - vMinsY.y);
  if ( v16 <= flSizeX || v16 <= 0.0 )
  {
LABEL_8:
    if ( flSizeX > 0.0 )
      AddAreaIfUnique(&areaBox, &vMinsX, &vMaxsX, 0.0);
    goto LABEL_10;
  }
  AddAreaIfUnique(&areaBox, &vMinsY, &vMaxsY, 0.0);
LABEL_10:
  v10 = 0;
  for ( i = 0; SLODWORD(areaBox.lo.x) > i; v10 += 24 )
  {
    while ( 1 )
    {
      v12 = CNavEditor::EditCreateNavArea(
              this,
              (*&areaBox.lo.z + v10),
              (*&areaBox.lo.z + v10 + 12),
              nav_create_place_on_ground.m_pParent->m_Value.m_nValue != 0);
      v13 = this->m_rNavMesh;
      v19 = v12;
      if ( v12 != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v13->m_SelectionSet.m_SetAreas, &v19) == -1 )
      {
        m_Size = v13->m_SelectionSet.m_SetAreas.m_Size;
        vMins = m_Size;
        if ( m_Size == v13->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&v13->m_SelectionSet.m_SetAreas.m_Memory, 1);
          m_Size = v13->m_SelectionSet.m_SetAreas.m_Size;
        }
        v13->m_SelectionSet.m_SetAreas.m_Size = m_Size + 1;
        v15 = &v13->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[vMins];
        if ( v15 != 0 )
          break;
      }
      ++i;
      v10 += 24;
      if ( SLODWORD(areaBox.lo.x) <= i )
        goto LABEL_19;
    }
    *v15 = v12;
    ++i;
  }
LABEL_19:
  areaBox.lo.x = 0.0;
  if ( (LODWORD(areaBox.hi.z) & 0xC0000000) == 0 )
  {
    CUtlMemory<Extent,int>::Purge(&areaBox.lo.z);
    if ( (LODWORD(areaBox.hi.z) & 0xC0000000) == 0 )
      CUtlMemory<Extent,int>::Purge(&areaBox.lo.z);
  }
}


// CNavEditor::CommandNavEndArea  (line 2904, @0x0000000002ed5460, libserver.so)  // inlines: ClearCorner, DistTo, FastSqrt, GetBool, GetInt, Length, SetEditMode, Vector2D, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator=
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound, CNavEditor::EditCreateNavArea, CNavEditor::FindLadderCorners, CNavMesh::CreateLadder
// callers: CommandNavEndArea
// strings: "EDIT_END_AREA.NotCreating", "EDIT_END_AREA.Creating"
void __fastcall CNavEditor::CommandNavEndArea(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  INavEditor::EditModeType m_EditMode; // eax
  float z; // xmm1_4
  float x; // xmm0_4
  float y; // xmm2_4
  CNavMesh *m_rNavMesh; // rdi
  Vector2D vLadderDir; // [rsp+10h] [rbp-70h] BYREF
  Vector vCorner1; // [rsp+20h] [rbp-60h] BYREF
  Vector vCorner2; // [rsp+30h] [rbp-50h] BYREF
  Vector vCorner3; // [rsp+40h] [rbp-40h] BYREF
  Vector vTop; // [rsp+50h] [rbp-30h] BYREF
  Vector vBottom; // [rsp+60h] [rbp-20h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    m_EditMode = this->m_EditMode;
    switch ( m_EditMode )
    {
      case INavEditor::EditModeType::CREATING_AREA:
        (*(this->_vptr_INavEditor + 2))(this, 1, 1);
        this->m_EditMode = INavEditor::EditModeType::NORMAL;
        if ( CNavEditor::EditCreateNavArea(
               this,
               &this->m_vAnchor,
               &this->m_vEditCursorPos,
               nav_create_place_on_ground.m_pParent->m_Value.m_nValue != 0) != 0 )
        {
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
          goto LABEL_9;
        }
        break;
      case INavEditor::EditModeType::CREATING_LADDER:
        (*(this->_vptr_INavEditor + 2))(this, 1, 1);
        this->m_EditMode = INavEditor::EditModeType::NORMAL;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.Creating", 0.0, 0);
        if ( this->m_bClimbableSurface
          && CNavEditor::FindLadderCorners(this, &this->m_vEditCursorPos, &vCorner1, &vCorner2, &vCorner3) )
        {
          z = this->m_vLadderAnchor.z;
          x = this->m_vLadderAnchor.x;
          y = this->m_vLadderAnchor.y;
          vTop.z = (z + vCorner2.z) * 0.5;
          vBottom.z = (vCorner1.z + vCorner3.z) * 0.5;
          vTop.x = (x + vCorner2.x) * 0.5;
          vTop.y = (y + vCorner2.y) * 0.5;
          vBottom.x = (vCorner1.x + vCorner3.x) * 0.5;
          vBottom.y = (vCorner1.y + vCorner3.y) * 0.5;
          if ( vBottom.z > vTop.z )
          {
            vTop.x = (vCorner1.x + vCorner3.x) * 0.5;
            vTop.y = (vCorner1.y + vCorner3.y) * 0.5;
            vTop.z = (vCorner1.z + vCorner3.z) * 0.5;
            vBottom.x = (x + vCorner2.x) * 0.5;
            vBottom.y = (y + vCorner2.y) * 0.5;
            vBottom.z = (z + vCorner2.z) * 0.5;
          }
          m_rNavMesh = this->m_rNavMesh;
          vLadderDir = *&this->m_vSurfaceNormal.x;
          CNavMesh::CreateLadder(
            m_rNavMesh,
            &vTop,
            &vBottom,
            fsqrt(
              (((x - vCorner2.x) * (x - vCorner2.x)) + ((y - vCorner2.y) * (y - vCorner2.y)))
            + ((z - vCorner2.z) * (z - vCorner2.z))),
            &vLadderDir,
            71.0);
          goto LABEL_9;
        }
        break;
      case INavEditor::EditModeType::NORMAL:
        break;
      default:
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.NotCreating", 0.0, 0);
        return;
    }
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_END_AREA.NotCreating", 0.0, 0);
LABEL_9:
    this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
  }
}


// CNavEditor::CommandNavConnect  (line 2968, @0x0000000002f022a0, libserver.so)  // inlines: ClearSelectionSet, ClearSet, RemoveAll
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CNavPoly::ComputeLargestPortal, CBaseEntity::EmitSound, CNavArea::ConnectTo, CNavLadder::ConnectTo, Msg
// callers: CommandNavConnect
// strings: "EDIT_CONNECT.AllDirections", "EDIT_CONNECT.Added", "To connect areas, mark an area, highlight a second area, then invoke the connect command.
void __fastcall CNavEditor::CommandNavConnect(CNavEditor *const this)
{
  CNavMesh *m_rNavMesh; // r12
  __int64 v3; // r15
  int m_Size; // eax
  const CNavPoly *const *m_pMemory; // rax
  __int64 m_vVerts; // r10
  int v7; // r9d
  const CNavPoly *const *v8; // rax
  CNavArea *v9; // r15
  NavEdgeIndex v10; // al
  NavEdgeIndex v11; // al
  CNavArea *m_pSelectedArea; // rsi
  CNavLadder *m_pMarkedLadder; // rdi
  CNavArea *m_pMarkedArea; // rdi
  char v15; // al
  CNavLadder *m_pSelectedLadder; // rsi
  CNavArea *v17; // rdi
  CBasePlayer *pPlayer; // [rsp+0h] [rbp-70h]
  int i; // [rsp+Ch] [rbp-64h]
  int ia; // [rsp+Ch] [rbp-64h]
  CNavArea *pFirstArea; // [rsp+10h] [rbp-60h]
  CNavArea *pFirstAreaa; // [rsp+10h] [rbp-60h]
  CNavArea *pSecondArea; // [rsp+18h] [rbp-58h]
  CNavArea *pSecondAreaa; // [rsp+18h] [rbp-58h]
  float flHalfWidth; // [rsp+2Ch] [rbp-44h] BYREF
  Vector vCenter; // [rsp+30h] [rbp-40h] BYREF

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    pPlayer = UTIL_GetListenServerHost();
    if ( pPlayer != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      CNavEditor::UpdateSelection(this);
      m_rNavMesh = this->m_rNavMesh;
      if ( m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size > 1 )
      {
        v3 = 1;
        i = 1;
        while ( 1 )
        {
          m_pMemory = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory;
          pFirstArea = *m_pMemory;
          pSecondArea = m_pMemory[v3];
          if ( CNavPoly::ComputeLargestPortal(pSecondArea, *m_pMemory, &vCenter, &flHalfWidth) < 0
            || CNavPoly::ComputeLargestPortal(pFirstArea, pSecondArea, &vCenter, &flHalfWidth) < 0 )
          {
            goto LABEL_10;
          }
          ++i;
          ++v3;
          m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
          if ( m_Size <= i )
          {
            m_vVerts = 8;
            v7 = 1;
            if ( m_Size > 1 )
            {
              do
              {
                v8 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory;
                ia = v7;
                pFirstAreaa = m_vVerts;
                v9 = *(v8 + m_vVerts);
                pSecondAreaa = *v8;
                v10 = CNavPoly::ComputeLargestPortal(v9, *v8, &vCenter, &flHalfWidth);
                CNavArea::ConnectTo(v9, pSecondAreaa, v10, -1, 1);
                v11 = CNavPoly::ComputeLargestPortal(pSecondAreaa, v9, &vCenter, &flHalfWidth);
                CNavArea::ConnectTo(pSecondAreaa, v9, v11, -1, 1);
                CBaseEntity::EmitSound(pPlayer, "EDIT_CONNECT.Added", 0.0, 0);
                v7 = ia + 1;
                m_vVerts = pFirstAreaa->m_vVerts;
              }
              while ( m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size > ia + 1 );
            }
            goto LABEL_11;
          }
        }
      }
      m_pSelectedArea = this->m_pSelectedArea;
      if ( m_pSelectedArea != 0 )
      {
        m_pMarkedLadder = this->m_pMarkedLadder;
        if ( m_pMarkedLadder != 0 )
        {
          CNavLadder::ConnectTo(m_pMarkedLadder, m_pSelectedArea);
LABEL_18:
          CBaseEntity::EmitSound(pPlayer, "EDIT_CONNECT.Added", 0.0, 0);
          goto LABEL_11;
        }
        m_pMarkedArea = this->m_pMarkedArea;
        if ( m_pMarkedArea != 0 )
        {
          v15 = CNavPoly::ComputeLargestPortal(m_pMarkedArea, m_pSelectedArea, &vCenter, &flHalfWidth);
          if ( v15 >= 0 )
          {
            CNavArea::ConnectTo(this->m_pMarkedArea, this->m_pSelectedArea, v15, -1, 1);
            goto LABEL_18;
          }
LABEL_10:
          CBaseEntity::EmitSound(pPlayer, "EDIT_CONNECT.AllDirections", 0.0, 0);
LABEL_11:
          (*(this->_vptr_INavEditor + 7))(this);
          this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
          return;
        }
      }
      else
      {
        m_pSelectedLadder = this->m_pSelectedLadder;
        if ( m_pSelectedLadder == 0 )
          goto LABEL_11;
        v17 = this->m_pMarkedArea;
        if ( v17 != 0 )
        {
          CNavArea::ConnectTo(v17, m_pSelectedLadder);
          goto LABEL_18;
        }
      }
      Msg(
        "To connect areas, mark an area, highlight a second area, then invoke the connect command. Make sure the cursor i"
        "s directly north, south, east, or west of the marked area.");
      goto LABEL_10;
    }
  }
}


// CNavEditor::CommandNavDisconnect  (line 3076, @0x0000000002f02540, libserver.so)  // inlines: ClearSelectionSet, ClearSet, RemoveAll
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CNavArea::IsConnectedOnAny, CBaseEntity::EmitSound, CNavArea::Disconnect, CNavLadder::Disconnect, Msg
// callers: CommandNavDisconnect
// strings: "EDIT_CONNECT.AllDirections", "EDIT_DISCONNECT.MarkedArea", "To disconnect areas, mark an area, highlight a second area, then invoke the disconnect co, "EDIT_DISCONNECT.NoMarkedArea"
void __fastcall CNavEditor::CommandNavDisconnect(CNavEditor *const this)
{
  __int64 v2; // r13
  int v3; // ebx
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  const CNavArea *const *m_pMemory; // rax
  const CNavArea *v7; // r14
  __int64 v8; // r13
  int v9; // ebx
  CNavArea *const *v10; // rdx
  CNavArea *v11; // r14
  CNavArea *m_pSelectedArea; // rsi
  CNavArea *m_pMarkedArea; // rdi
  CNavLadder *m_pMarkedLadder; // rdi
  CNavLadder *m_pSelectedLadder; // rsi
  CNavArea *v16; // rdi
  CBasePlayer *pPlayer; // [rsp+0h] [rbp-40h]
  CNavArea *pSecondArea; // [rsp+8h] [rbp-38h]
  CNavArea *pSecondAreaa; // [rsp+8h] [rbp-38h]

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    pPlayer = UTIL_GetListenServerHost();
    if ( pPlayer != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      v2 = 1;
      v3 = 1;
      CNavEditor::UpdateSelection(this);
      m_rNavMesh = this->m_rNavMesh;
      if ( m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size > 1 )
      {
        do
        {
          m_pMemory = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory;
          v7 = *m_pMemory;
          pSecondArea = m_pMemory[v2];
          if ( !CNavArea::IsConnectedOnAny(*m_pMemory, pSecondArea, 0, 0, 0)
            && !CNavArea::IsConnectedOnAny(pSecondArea, v7, 0, 0, 0) )
          {
            CBaseEntity::EmitSound(pPlayer, "EDIT_CONNECT.AllDirections", 0.0, 0);
            goto LABEL_11;
          }
          m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
          ++v3;
          ++v2;
        }
        while ( m_Size > v3 );
        v8 = 1;
        v9 = 1;
        if ( m_Size > 1 )
        {
          do
          {
            v10 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory;
            ++v9;
            v11 = v10[v8++];
            pSecondAreaa = *v10;
            CNavArea::Disconnect(*v10, v11);
            CNavArea::Disconnect(v11, pSecondAreaa);
          }
          while ( m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size > v9 );
        }
        goto LABEL_14;
      }
      m_pSelectedArea = this->m_pSelectedArea;
      if ( m_pSelectedArea != 0 )
      {
        m_pMarkedArea = this->m_pMarkedArea;
        if ( m_pMarkedArea != 0 )
        {
          CNavArea::Disconnect(m_pMarkedArea, m_pSelectedArea);
          CNavArea::Disconnect(this->m_pSelectedArea, this->m_pSelectedArea);
LABEL_14:
          CBaseEntity::EmitSound(pPlayer, "EDIT_DISCONNECT.MarkedArea", 0.0, 0);
LABEL_11:
          (*(this->_vptr_INavEditor + 7))(this);
          this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
          return;
        }
        m_pMarkedLadder = this->m_pMarkedLadder;
        if ( m_pMarkedLadder != 0 )
        {
          CNavLadder::Disconnect(m_pMarkedLadder, m_pSelectedArea);
          CNavArea::Disconnect(this->m_pSelectedArea, this->m_pMarkedLadder);
          goto LABEL_14;
        }
      }
      else
      {
        m_pSelectedLadder = this->m_pSelectedLadder;
        if ( m_pSelectedLadder == 0 )
          goto LABEL_11;
        v16 = this->m_pMarkedArea;
        if ( v16 != 0 )
        {
          CNavArea::Disconnect(v16, m_pSelectedLadder);
          CNavLadder::Disconnect(this->m_pSelectedLadder, this->m_pMarkedArea);
          goto LABEL_14;
        }
      }
      Msg(
        "To disconnect areas, mark an area, highlight a second area, then invoke the disconnect command. This will remove"
        " all connections between the two areas.");
      CBaseEntity::EmitSound(pPlayer, "EDIT_DISCONNECT.NoMarkedArea", 0.0, 0);
      goto LABEL_11;
    }
  }
}


// CNavEditor::CommandNavSplice  (line 3164, @0x0000000002f02790, libserver.so)  // inlines: ClearSelectionSet, ClearSet, GetMarkedAreaIncludingSelectionSet, RemoveAll
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CNavArea::SpliceEdit, CBaseEntity::EmitSound, CNavEditor::GetMarkedAreaIncludingSelectionSet, Msg
// callers: CommandNavSplice
// strings: "EDIT_SPLICE.MarkedArea", "To splice, mark an area, highlight a second area, then invoke the splice command to creat, "EDIT_SPLICE.NoMarkedArea"
void __fastcall CNavEditor::CommandNavSplice(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavArea *m_pSelectedArea; // r13
  CNavArea *m_pMarkedArea; // rsi

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      CNavEditor::UpdateSelection(this);
      m_pSelectedArea = this->m_pSelectedArea;
      if ( m_pSelectedArea != 0 )
      {
        m_pMarkedArea = this->m_pMarkedArea;
        if ( m_pMarkedArea == 0 )
        {
          m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this);
          if ( m_pMarkedArea == 0 )
          {
            Msg(
              "To splice, mark an area, highlight a second area, then invoke the splice command to create an area between them");
            goto LABEL_12;
          }
        }
        if ( CNavArea::SpliceEdit(m_pSelectedArea, m_pMarkedArea) == 0 )
        {
LABEL_12:
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_SPLICE.NoMarkedArea", 0.0, 0);
          goto LABEL_9;
        }
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_SPLICE.MarkedArea", 0.0, 0);
      }
LABEL_9:
      (*(this->_vptr_INavEditor + 7))(this);
      this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
    }
  }
}


// CNavEditor::ToggleAreaAttribute  (line 3204, @0x0000000002ed4950, libserver.so)  // inlines: AddAttributes, AddFlags, HasAnyFlags, HasAttributes, RemoveAttributes, RemoveFlags
void __fastcall CNavEditor::ToggleAreaAttribute(CNavEditor *const this, CNavArea *pArea, CNavAttribute navAttribute)
{
  int i; // ecx
  __int64 v4; // rax
  uint64 m_Flags; // rdi

  for ( i = 0; i != 64; ++i )
  {
    while ( 1 )
    {
      v4 = 1LL << i;
      if ( (navAttribute.m_Flags & (1LL << i)) != 0 )
      {
        m_Flags = pArea->m_AreaAttributes.m_Flags;
        if ( (m_Flags & v4) == 0 )
          break;
        pArea->m_AreaAttributes.m_Flags = m_Flags & ~v4;
      }
      if ( ++i == 64 )
        return;
    }
    pArea->m_AreaAttributes.m_Flags = m_Flags | v4;
  }
}


// CNavEditor::CommandNavToggleAttribute  (line 3225, @0x0000000002f028b0, libserver.so)  // inlines: AddAttributes, AddFlags, ClearSelectionSet, ClearSet, HasAnyFlags, HasAttributes, RemoveAll, RemoveAttributes, RemoveFlags, ToggleAreaAttribute
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CBaseEntity::EmitSound, Msg, CNavEditor::UpdateSelection
// callers: CommandNavCrouch, CommandNavPrecise, CommandNavJump, CommandNavNoJump, CommandNavAvoid
// strings: "EDIT.ToggleAttribute", "Changed attribute in %d areas\n"
void __fastcall CNavEditor::CommandNavToggleAttribute(CNavEditor *const this, CNavAttribute attribute)
{
  CBasePlayer *ListenServerHost; // r13
  CNavMesh *m_rNavMesh; // r9
  int m_Size; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // r10
  int v9; // ecx
  CNavArea *v10; // rsi
  __int64 v11; // rax
  uint64 m_Flags; // rdx
  int v13; // esi
  CNavArea *m_pSelectedArea; // rdi
  int i; // ecx
  __int64 v16; // rax
  uint64 v17; // rdx

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      if ( this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT.ToggleAttribute", 0.0, 0);
        m_rNavMesh = this->m_rNavMesh;
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size != 0 )
        {
          v7 = 0;
          v8 = 8LL * (m_Size - 1) + 8;
          while ( 1 )
          {
            v9 = 0;
            v10 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v7 / 8];
            do
            {
              while ( 1 )
              {
                v11 = 1LL << v9;
                if ( (attribute.m_Flags & (1LL << v9)) != 0 )
                {
                  m_Flags = v10->m_AreaAttributes.m_Flags;
                  if ( (m_Flags & v11) == 0 )
                    break;
                  v10->m_AreaAttributes.m_Flags = m_Flags & ~v11;
                }
                if ( ++v9 == 64 )
                  goto LABEL_14;
              }
              ++v9;
              v10->m_AreaAttributes.m_Flags = m_Flags | v11;
            }
            while ( v9 != 64 );
LABEL_14:
            v7 += 8LL;
            if ( v7 == v8 )
            {
              v13 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
              goto LABEL_16;
            }
          }
        }
        v13 = 0;
LABEL_16:
        Msg("Changed attribute in %d areas\n", v13);
        this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size = 0;
      }
      else
      {
        CNavEditor::UpdateSelection(this);
        if ( this->m_pSelectedArea != 0 )
        {
          CBaseEntity::EmitSound(ListenServerHost, "EDIT.ToggleAttribute", 0.0, 0);
          m_pSelectedArea = this->m_pSelectedArea;
          for ( i = 0; i != 64; ++i )
          {
            v16 = 1LL << i;
            if ( (attribute.m_Flags & (1LL << i)) != 0 )
            {
              v17 = m_pSelectedArea->m_AreaAttributes.m_Flags;
              if ( (v17 & v16) != 0 )
                m_pSelectedArea->m_AreaAttributes.m_Flags = v17 & ~v16;
              else
                m_pSelectedArea->m_AreaAttributes.m_Flags = v17 | v16;
            }
          }
        }
      }
      (*(this->_vptr_INavEditor + 7))(this);
    }
  }
}


// CNavEditor::CommandNavTogglePlaceMode  (line 3269, @0x0000000002ed49a0, libserver.so)  // inlines: SetEditMode
// calls: UTIL_GetListenServerHost, CBaseEntity::EmitSound
// callers: CommandNavTogglePlaceMode, CommandNavSetPlaceMode
// strings: "EDIT_TOGGLE_PLACE_MODE"
void __fastcall CNavEditor::CommandNavTogglePlaceMode(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  int (**vptr_INavEditor)(...); // rax

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    vptr_INavEditor = this->_vptr_INavEditor;
    if ( this->m_EditMode == INavEditor::EditModeType::PLACE_PAINTING )
    {
      vptr_INavEditor[2](this, 1, 1);
      this->m_EditMode = INavEditor::EditModeType::NORMAL;
    }
    else
    {
      vptr_INavEditor[2](this, 1, 1);
      this->m_EditMode = INavEditor::EditModeType::PLACE_PAINTING;
    }
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_TOGGLE_PLACE_MODE", 0.0, 0);
    (*(this->_vptr_INavEditor + 7))(this);
  }
}


// CNavEditor::CommandNavMarkWalkable  (line 3460, @0x0000000002ee8770, libserver.so)  // inlines: AddToTail, AddWalkableSeed, CopyConstruct<CNavGeneratorBase::WalkableSeedSpot>, Element, GetBool, GetEditCursorPosition, GetInt, GrowMemory, RoundToUnits, operator=, operator[]
// calls: CNavMesh::SnapToGrid, CNavMesh::FindGroundForNode, Msg, UTIL_GetListenServerHost, CBaseEntity::GetAbsOrigin, CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int>::Grow
// callers: CommandNavMarkWalkable
// strings: "Walkable position marked.\n", "ERROR: Invalid ground position.\n", "ERROR: No local player!\n"
void __fastcall CNavEditor::CommandNavMarkWalkable(CNavEditor *const this)
{
  vec_t y; // xmm2_4
  float z; // xmm1_4
  vec_t v4; // xmm0_4
  const CNavMesh *m_rNavMesh; // rdi
  float v6; // xmm1_4
  vec_t v7; // xmm0_4
  CNavMesh *v8; // rdi
  CNavGeneratorBase *m_pGenerator; // rbx
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 m_Size; // r12
  vec_t v14; // xmm5_4
  vec_t v15; // xmm4_4
  int v16; // eax
  vec_t v17; // xmm3_4
  float v18; // xmm1_4
  int v19; // eax
  float v20; // xmm1_4
  vec_t v21; // xmm0_4
  __int64 v22; // rcx
  CBasePlayer *ListenServerHost; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm0_4
  vec_t v26; // [rsp+8h] [rbp-48h]
  vec_t v27; // [rsp+Ch] [rbp-44h]
  vec_t v28; // [rsp+10h] [rbp-40h]
  vec_t v29; // [rsp+14h] [rbp-3Ch]
  float v30; // [rsp+18h] [rbp-38h]
  float v31; // [rsp+1Ch] [rbp-34h]
  Vector vPos; // [rsp+20h] [rbp-30h] BYREF
  Vector vNormal; // [rsp+30h] [rbp-20h] BYREF

  if ( nav_edit.m_pParent->m_Value.m_nValue != 0 )
  {
    y = this->m_vEditCursorPos.y;
    z = this->m_vEditCursorPos.z;
    vPos.x = this->m_vEditCursorPos.x;
    vPos.y = y;
    vPos.z = z;
  }
  else
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost == 0 )
    {
      Msg("ERROR: No local player!\n");
      return;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(ListenServerHost);
    x = AbsOrigin->x;
    vPos.y = AbsOrigin->y;
    z = AbsOrigin->z;
    vPos.x = x;
    vPos.z = z;
  }
  v4 = CNavMesh::SnapToGrid(this->m_rNavMesh, z, 1);
  m_rNavMesh = this->m_rNavMesh;
  vPos.x = v4;
  v7 = CNavMesh::SnapToGrid(m_rNavMesh, v6, 1);
  v8 = this->m_rNavMesh;
  vPos.y = v7;
  if ( CNavMesh::FindGroundForNode(v8, &vPos, &vNormal) )
  {
    m_pGenerator = this->m_rNavMesh->m_pGenerator;
    if ( m_pGenerator != 0 )
    {
      if ( vPos.x < 0.0 )
        v10 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
      else
        v10 = CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
      v11 = ((vPos.x + v10) / CNavGeneratorBase::sm_flGenerationStepSize) * CNavGeneratorBase::sm_flGenerationStepSize;
      if ( vPos.y < 0.0 )
        v12 = -CNavGeneratorBase::sm_flGenerationStepSize * 0.5;
      else
        v12 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
      m_Size = m_pGenerator->m_walkableSeeds.m_Size;
      v14 = vPos.z;
      v15 = vNormal.x;
      v16 = (vPos.y + v12);
      v17 = vNormal.y;
      v18 = (v16 / CNavGeneratorBase::sm_flGenerationStepSize);
      v19 = m_pGenerator->m_walkableSeeds.m_Size;
      v20 = v18 * CNavGeneratorBase::sm_flGenerationStepSize;
      v21 = vNormal.z;
      if ( m_Size == m_pGenerator->m_walkableSeeds.m_Memory.m_nAllocationCount )
      {
        v26 = vNormal.z;
        v27 = vNormal.y;
        v28 = vNormal.x;
        v29 = vPos.z;
        v30 = v20;
        v31 = v11;
        CUtlMemory<CNavGeneratorBase::WalkableSeedSpot,int>::Grow(&m_pGenerator->m_walkableSeeds.m_Memory, 1);
        v19 = m_pGenerator->m_walkableSeeds.m_Size;
        v21 = v26;
        v17 = v27;
        v15 = v28;
        v14 = v29;
        v20 = v30;
        v11 = v31;
      }
      m_pGenerator->m_walkableSeeds.m_Size = v19 + 1;
      v22 = &m_pGenerator->m_walkableSeeds.m_Memory.m_pMemory[m_Size];
      if ( v22 != 0 )
      {
        *v22 = v11;
        *(v22 + 4) = v20;
        *(v22 + 8) = v14;
        *(v22 + 12) = v15;
        *(v22 + 16) = v17;
        *(v22 + 20) = v21;
      }
    }
    Msg("Walkable position marked.\n");
  }
  else
  {
    Msg("ERROR: Invalid ground position.\n");
  }
}


// CNavEditor::CommandNavCornerSelect  (line 3503, @0x0000000002f02b40, libserver.so)  // inlines: GetMarkedAreaIncludingSelectionSet
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CBaseEntity::EmitSound, CNavEditor::GetMarkedAreaIncludingSelectionSet
// callers: CommandNavCornerSelect
// strings: "EDIT_SELECT_CORNER.MarkedArea", "EDIT_SELECT_CORNER.NoMarkedArea"
void __fastcall CNavEditor::CommandNavCornerSelect(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    CNavEditor::UpdateSelection(this);
    if ( this->m_pSelectedArea != 0 )
    {
      if ( this->m_pMarkedArea != 0 || CNavEditor::GetMarkedAreaIncludingSelectionSet(this) != 0 )
      {
        this->m_MarkedCorner = (this->m_MarkedCorner + 1) % 5;
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_SELECT_CORNER.MarkedArea", 0.0, 0);
      }
      else
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_SELECT_CORNER.NoMarkedArea", 0.0, 0);
      }
    }
  }
}


// CNavEditor::CommandNavCornerRaise  (line 3531, @0x0000000002f02c20, libserver.so)  // inlines: GetMarkedAreaIncludingSelectionSet, atoi
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, strtol, CBaseEntity::EmitSound, CNavMesh::RaiseVert, Msg, CNavEditor::UpdateSelection, CNavEditor::GetMarkedAreaIncludingSelectionSet
// callers: nav_corner_raise
// strings: "EDIT_MOVE_CORNER.MarkedArea", "Raised %d areas\n", "EDIT_MOVE_CORNER.NoMarkedArea"
void __fastcall CNavEditor::CommandNavCornerRaise(
        CNavEditor *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // r13
  int v6; // r14d
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  CNavArea *v11; // rsi
  int v12; // esi
  CNavArea *m_pMarkedArea; // rsi
  NavCornerType m_MarkedCorner; // edx

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      v6 = 1;
      if ( args->m_nArgc > 1 )
        v6 = strtol(args->m_ppArgv[1], 0, 10);
      if ( this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
        m_rNavMesh = this->m_rNavMesh;
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size != 0 )
        {
          v9 = 0;
          v10 = 8LL * (m_Size - 1) + 8;
          do
          {
            v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v9 / 8];
            if ( v11 != 0 )
              CNavMesh::RaiseVert(this->m_rNavMesh, v11, -1, v6, 1);
            v9 += 8LL;
          }
          while ( v9 != v10 );
          v12 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        else
        {
          v12 = 0;
        }
        Msg("Raised %d areas\n", v12);
      }
      else
      {
        CNavEditor::UpdateSelection(this);
        if ( this->m_pSelectedArea != 0 )
        {
          m_pMarkedArea = this->m_pMarkedArea;
          if ( m_pMarkedArea != 0 || (m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this)) != 0 )
          {
            m_MarkedCorner = -1;
            if ( this->m_MarkedCorner != NavCornerType::NUM_CORNERS )
              m_MarkedCorner = this->m_MarkedCorner;
            CNavMesh::RaiseVert(this->m_rNavMesh, m_pMarkedArea, m_MarkedCorner, v6, 1);
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
          }
          else
          {
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.NoMarkedArea", 0.0, 0);
          }
        }
      }
    }
  }
}


// CNavEditor::CommandNavCornerLower  (line 3589, @0x0000000002f02e10, libserver.so)  // inlines: GetMarkedAreaIncludingSelectionSet, atoi
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, strtol, CBaseEntity::EmitSound, CNavMesh::RaiseVert, Msg, CNavEditor::UpdateSelection, CNavEditor::GetMarkedAreaIncludingSelectionSet
// callers: nav_corner_lower
// strings: "EDIT_MOVE_CORNER.MarkedArea", "Lowered %d areas\n", "EDIT_MOVE_CORNER.NoMarkedArea"
void __fastcall CNavEditor::CommandNavCornerLower(
        CNavEditor *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // r13
  int v6; // r14d
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  CNavArea *v11; // rsi
  int v12; // esi
  CNavArea *m_pMarkedArea; // rsi
  NavCornerType m_MarkedCorner; // edx

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      v6 = -1;
      if ( args->m_nArgc > 1 )
        v6 = -strtol(args->m_ppArgv[1], 0, 10);
      if ( this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
        m_rNavMesh = this->m_rNavMesh;
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size != 0 )
        {
          v9 = 0;
          v10 = 8LL * (m_Size - 1) + 8;
          do
          {
            v11 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v9 / 8];
            if ( v11 != 0 )
              CNavMesh::RaiseVert(this->m_rNavMesh, v11, -1, v6, 1);
            v9 += 8LL;
          }
          while ( v9 != v10 );
          v12 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        else
        {
          v12 = 0;
        }
        Msg("Lowered %d areas\n", v12);
      }
      else
      {
        CNavEditor::UpdateSelection(this);
        if ( this->m_pSelectedArea != 0 )
        {
          m_pMarkedArea = this->m_pMarkedArea;
          if ( m_pMarkedArea != 0 || (m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this)) != 0 )
          {
            m_MarkedCorner = -1;
            if ( this->m_MarkedCorner != NavCornerType::NUM_CORNERS )
              m_MarkedCorner = this->m_MarkedCorner;
            CNavMesh::RaiseVert(this->m_rNavMesh, m_pMarkedArea, m_MarkedCorner, v6, 1);
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
          }
          else
          {
            CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.NoMarkedArea", 0.0, 0);
          }
        }
      }
    }
  }
}


// CNavEditor::CommandNavCornerPlaceOnGround  (line 3647, @0x0000000002f03000, libserver.so)  // inlines: atof
// calls: CNavMesh::TestFilesWritable, UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CNavMesh::PlaceVertOnGround, CBaseEntity::EmitSound, Msg, strtod
// callers: nav_corner_place_on_ground
// strings: "EDIT_MOVE_CORNER.MarkedArea", "Placed %d areas on the ground\n", "EDIT_MOVE_CORNER.NoMarkedArea"
void __fastcall CNavEditor::CommandNavCornerPlaceOnGround(
        CNavEditor *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // r13
  int v6; // r15d
  CNavArea *m_pMarkedArea; // rsi
  CNavMesh *m_rNavMesh; // r14
  int m_Size; // eax
  CNavMesh *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  CNavArea *v13; // rsi
  int v14; // esi
  __m128d v15; // xmm0

  if ( CNavMesh::TestFilesWritable(this->m_rNavMesh, gpGlobals->mapname) )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
    {
      v6 = _mm_cvtsi128_si32(0LL);
      if ( args->m_nArgc == 2 )
      {
        v15.m128d_f64[0] = strtod(args->m_ppArgv[1], 0);
        v6 = _mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v15)));
      }
      if ( this->m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size != 0 )
      {
        CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
        m_rNavMesh = this->m_rNavMesh;
        m_Size = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        if ( m_Size != 0 )
        {
          v10 = this->m_rNavMesh;
          v11 = 0;
          v12 = 8LL * (m_Size - 1) + 8;
          while ( 1 )
          {
            v13 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v11 / 8];
            v11 += 8LL;
            CNavMesh::PlaceVertOnGround(v10, v13, -1, *&v6);
            if ( v11 == v12 )
              break;
            v10 = this->m_rNavMesh;
          }
          v14 = m_rNavMesh->m_SelectionSet.m_SetAreas.m_Size;
        }
        else
        {
          v14 = 0;
        }
        Msg("Placed %d areas on the ground\n", v14);
      }
      else
      {
        CNavEditor::UpdateSelection(this);
        if ( this->m_pSelectedArea != 0 )
        {
          m_pMarkedArea = this->m_pMarkedArea;
          if ( m_pMarkedArea != 0 )
            CNavMesh::PlaceVertOnGround(this->m_rNavMesh, m_pMarkedArea, this->m_MarkedCorner, *&v6);
          else
            CNavMesh::PlaceVertOnGround(this->m_rNavMesh, this->m_pSelectedArea, -1, *&v6);
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
        }
        else
        {
          CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.NoMarkedArea", 0.0, 0);
        }
      }
    }
  }
}


// CNavEditor::CommandNavWarpToMark  (line 3705, @0x0000000002ed4ac0, libserver.so)  // inlines: GetMarkedAreaIncludingSelectionSet, IsDead, VectorAdd, VectorDivide, operator+, operator/
// calls: UTIL_GetListenServerHost, CBaseEntity::GetAbsAngles, CBaseEntity::GetLifeState, CBaseEntity::EmitSound, UTIL_SetOrigin, CNavEditor::GetMarkedAreaIncludingSelectionSet
// callers: CommandNavWarpToMark
// strings: "EDIT_WARP_TO_MARK"
void __fastcall CNavEditor::CommandNavWarpToMark(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // rbx
  CNavArea *m_pMarkedArea; // rax
  vec_t v4; // xmm0_4
  vec_t v5; // xmm1_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int (**vptr_IHandleEntity)(...); // rax
  void *p_vOrigin; // rdx
  void *p_angles_0; // rsi
  CNavLadder *m_pMarkedLadder; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  QAngle angles_0; // [rsp+0h] [rbp-30h] BYREF
  Vector vOrigin; // [rsp+10h] [rbp-20h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    m_pMarkedArea = this->m_pMarkedArea;
    if ( m_pMarkedArea != 0 || (m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this)) != 0 )
    {
      v4 = m_pMarkedArea->m_vCenter.z + 53.25;
      v5 = m_pMarkedArea->m_vCenter.x + 0.0;
      angles_0.y = m_pMarkedArea->m_vCenter.y + 0.0;
      angles_0.z = v4;
      angles_0.x = v5;
      vOrigin = *CBaseEntity::GetAbsAngles(ListenServerHost);
      if ( (CBaseEntity::GetLifeState(ListenServerHost) == LifeState_t::LIFE_DEAD
         || (ListenServerHost->m_afPhysicsFlags & 8) != 0)
        && (*(ListenServerHost->_vptr_IHandleEntity + 436))(
             ListenServerHost,
             v8,
             v6,
             v7,
             v9,
             v10,
             *&angles_0.x,
             LODWORD(angles_0.z),
             *&vOrigin.x,
             LODWORD(vOrigin.z)) == 6 )
      {
        UTIL_SetOrigin(ListenServerHost, &angles_0, 0);
        goto LABEL_8;
      }
      vptr_IHandleEntity = ListenServerHost->_vptr_IHandleEntity;
      p_vOrigin = &vOrigin;
      p_angles_0 = &angles_0;
    }
    else
    {
      if ( this->m_pMarkedLadder == 0 )
        goto LABEL_8;
      angles_0 = *CBaseEntity::GetAbsAngles(ListenServerHost);
      m_pMarkedLadder = this->m_pMarkedLadder;
      v15 = (m_pMarkedLadder->m_vTop.x + m_pMarkedLadder->m_vBottom.x) * 0.5;
      v16 = (m_pMarkedLadder->m_vTop.y + m_pMarkedLadder->m_vBottom.y) * 0.5;
      vOrigin.z = (m_pMarkedLadder->m_vTop.z + m_pMarkedLadder->m_vBottom.z) * 0.5;
      vOrigin.x = (m_pMarkedLadder->m_vNormal.x * CNavGeneratorBase::sm_flGenerationStepSize) + v15;
      vOrigin.y = (CNavGeneratorBase::sm_flGenerationStepSize * m_pMarkedLadder->m_vNormal.y) + v16;
      if ( (CBaseEntity::GetLifeState(ListenServerHost) == LifeState_t::LIFE_DEAD
         || (ListenServerHost->m_afPhysicsFlags & 8) != 0)
        && (*(ListenServerHost->_vptr_IHandleEntity + 436))(
             ListenServerHost,
             v19,
             v17,
             v18,
             v20,
             v21,
             *&angles_0.x,
             LODWORD(angles_0.z),
             *&vOrigin.x,
             LODWORD(vOrigin.z)) == 6 )
      {
        UTIL_SetOrigin(ListenServerHost, &vOrigin, 0);
        goto LABEL_8;
      }
      vptr_IHandleEntity = ListenServerHost->_vptr_IHandleEntity;
      p_vOrigin = &angles_0;
      p_angles_0 = &vOrigin;
    }
    vptr_IHandleEntity[128](ListenServerHost, p_angles_0, p_vOrigin, &vec3_origin);
LABEL_8:
    CBaseEntity::EmitSound(ListenServerHost, "EDIT_WARP_TO_MARK", 0.0, 0);
  }
}


// CNavEditor::CommandNavLadderFlip  (line 3756, @0x0000000002f03210, libserver.so)  // inlines: NavDirOpposite
// calls: UTIL_GetListenServerHost, CNavEditor::UpdateSelection, CBaseEntity::EmitSound, CNavLadder::SetDir
// callers: CommandNavLadderFlip
// strings: "EDIT_MOVE_CORNER.MarkedArea"
void __fastcall CNavEditor::CommandNavLadderFlip(CNavEditor *const this)
{
  CBasePlayer *ListenServerHost; // r12
  CNavLadder *m_pSelectedLadder; // rax
  CNavArea *m_pTopBehindArea; // rdx
  CNavLadder *v5; // rax
  CNavArea *m_pTopRightArea; // rdx

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 && this->m_EditMode == INavEditor::EditModeType::NORMAL )
  {
    CNavEditor::UpdateSelection(this);
    if ( this->m_pSelectedLadder != 0 )
    {
      CBaseEntity::EmitSound(ListenServerHost, "EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
      CNavLadder::SetDir(this->m_pSelectedLadder, ((this->m_pSelectedLadder->m_dir + 2) % 4));
      m_pSelectedLadder = this->m_pSelectedLadder;
      m_pTopBehindArea = m_pSelectedLadder->m_pTopBehindArea;
      m_pSelectedLadder->m_pTopBehindArea = m_pSelectedLadder->m_pTopForwardArea;
      this->m_pSelectedLadder->m_pTopForwardArea = m_pTopBehindArea;
      v5 = this->m_pSelectedLadder;
      m_pTopRightArea = v5->m_pTopRightArea;
      v5->m_pTopRightArea = v5->m_pTopLeftArea;
      this->m_pSelectedLadder->m_pTopLeftArea = m_pTopRightArea;
    }
    (*(this->_vptr_INavEditor + 7))(this);
  }
}


// CNavEditor::CommandNavTestTestRayToMesh  (line 3790, @0x0000000002ed4ce0, libserver.so)  // inlines: CNavTraceResult, GetBool, GetInt, Line, VectorAdd, VectorMultiply, VertexColor_t, operator*, operator+
// calls: V_atof, V_atoi, sincosf, NavHull_t::NavHull_t, CNavMesh::TestRayToMesh, Warning
// callers: CommandNavTestTestRayToMesh
// strings: "Edit mode required to test TestRayToMesh."
void __fastcall CNavEditor::CommandNavTestTestRayToMesh(
        CNavEditor *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  __int64 v5; // rsi
  float v6; // xmm0_4
  float v7; // xmm3_4
  int v8; // r13d
  float v9; // xmm0_4
  float v10; // xmm0_4
  vec_t z; // eax
  float v12; // xmm3_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  __int128 v14; // [rsp+0h] [rbp-100h]
  double v15; // [rsp+40h] [rbp-C0h]
  float v16; // [rsp+48h] [rbp-B8h]
  float flRayLen; // [rsp+4Ch] [rbp-B4h]
  int nNumRays; // [rsp+50h] [rbp-B0h]
  float v19; // [rsp+54h] [rbp-ACh]
  float v20; // [rsp+58h] [rbp-A8h] BYREF
  float v21; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-A0h] BYREF
  Vector vStart; // [rsp+70h] [rbp-90h] BYREF
  Vector vEnd; // [rsp+80h] [rbp-80h] BYREF
  float v25[4]; // [rsp+90h] [rbp-70h] BYREF
  NavHull_t v26; // [rsp+A0h] [rbp-60h] BYREF
  CNavTraceResult traceResult; // [rsp+B0h] [rbp-50h] BYREF

  if ( nav_edit.m_pParent->m_Value.m_nValue == 0 )
  {
    Warning("Edit mode required to test TestRayToMesh.", ctx, args);
    return;
  }
  if ( args->m_nArgc <= 1 )
  {
    flRayLen = 300.0;
    goto LABEL_9;
  }
  flRayLen = V_atof(args->m_ppArgv[1], ctx);
  if ( args->m_nArgc <= 2 )
  {
LABEL_9:
    nNumRays = 25;
    v7 = 0.0;
    v6 = 0.0;
LABEL_10:
    v8 = 0;
    v15 = v6;
    *&v14 = &vStart;
    v16 = flRayLen * 0.0;
    *(&v14 + 1) = v25;
    do
    {
      v9 = v8++;
      v19 = v7;
      vStart = this->m_vEditCursorPos;
      v10 = v9 * 6.283185307179586 / nNumRays + v15;
      sincosf(v10, &v21, &v20);
      traceResult.m_flEndT = -1.0;
      z = vec3_invalid.z;
      *&traceResult.m_vEndPos.x = *&vec3_invalid.x;
      *&traceResult.m_vExitNormal.x = *&vec3_invalid.x;
      vEnd.z = v16 + vStart.z;
      vEnd.y = (v21 * flRayLen) + vStart.y;
      vEnd.x = (flRayLen * v20) + vStart.x;
      traceResult.m_vEndPos.z = z;
      traceResult.m_vExitNormal.z = z;
      NavHull_t::NavHull_t(&v26, 0.0, v16 + vStart.z, 1u);
      CNavMesh::TestRayToMesh(this->m_rNavMesh, v14, &vEnd, v14, &traceResult, 0, -1.0, v12);
      v26.m_flHullRadius = traceResult.m_vEndPos.y + v19;
      v26.m_flHullHeight = traceResult.m_vEndPos.z + 2.0;
      *&v26.m_hullCategory = traceResult.m_vEndPos.x + v19;
      v25[1] = vStart.y + v19;
      v25[2] = vStart.z + 2.0;
      v25[0] = vStart.x + v19;
      vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
      v22[0] = 0;
      v22[1] = -1;
      v22[2] = 0;
      v22[3] = -1;
      vptr_ISceneViewDebugOverlays[13](debugoverlay, *(&v14 + 1), &v26, v22, 1, 5.0);
      v7 = v19;
    }
    while ( v8 != nNumRays );
    return;
  }
  nNumRays = V_atoi(args->m_ppArgv[2]);
  if ( args->m_nArgc <= 3 )
    v6 = 0.0;
  else
    v6 = V_atof(args->m_ppArgv[3], v5);
  v7 = 0.0;
  if ( nNumRays > 0 )
    goto LABEL_10;
}


// CNavEditor::EditCreateNavArea  (line 3832, @0x0000000002ed5080, libserver.so)  // inlines: GetExtent, GetMarkedAreaIncludingSelectionSet, SetMarkedArea, VectorAdd, operator+, operator=
// calls: CNavPoly::SetCorners, CNavMesh::OnEditCreateNotify, CNavArea::ConnectTo, CNavMesh::PlaceVertOnGround, CNavEditor::GetMarkedAreaIncludingSelectionSet, CNavMesh::GetNearestNavArea
// callers: CNavEditor::CommandNavEndArea, CNavEditor::CommandAutoBuildOffGridAreas
// globals: g_NavHullAAQuad
CNavArea *__fastcall CNavEditor::EditCreateNavArea(
        CNavEditor *const this,
        const Vector *const vCorner0,
        const Vector *const vCorner1,
        bool bPlaceOnGround)
{
  CNavArea *m_pMarkedArea; // r13
  __int64 v8; // rax
  CNavPoly *v9; // rax
  CNavArea *v10; // rbx
  CNavArea *MarkedAreaIncludingSelectionSet; // r13
  float x; // xmm1_4
  float v13; // xmm2_4
  float y; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  const CNavMesh *m_rNavMesh; // rdi
  vec_t v19; // xmm0_4
  vec_t v20; // xmm3_4
  const CNavMesh *v21; // rdi
  Vector vEndPos; // [rsp+10h] [rbp-50h] BYREF
  Vector vPos; // [rsp+20h] [rbp-40h] BYREF

  m_pMarkedArea = this->m_pMarkedArea;
  v8 = *&vCorner1->x;
  vEndPos.z = vCorner0->z;
  *&vEndPos.x = v8;
  if ( m_pMarkedArea == 0 )
  {
    m_pMarkedArea = CNavEditor::GetMarkedAreaIncludingSelectionSet(this);
    if ( m_pMarkedArea == 0 )
    {
      m_rNavMesh = this->m_rNavMesh;
      v19 = vCorner1->z + 35.5;
      v20 = vCorner1->x + 0.0;
      vPos.y = vCorner1->y + 0.0;
      vPos.z = v19;
      vPos.x = v20;
      m_pMarkedArea = CNavMesh::GetNearestNavArea(m_rNavMesh, &vPos, g_NavHullAAQuad, 1, 10000.0);
      if ( m_pMarkedArea == 0 )
      {
        v21 = this->m_rNavMesh;
        vPos.y = vEndPos.y + 0.0;
        vPos.z = vEndPos.z + 35.5;
        vPos.x = vEndPos.x + 0.0;
        m_pMarkedArea = CNavMesh::GetNearestNavArea(v21, &vPos, g_NavHullAAQuad, 1, 10000.0);
        if ( m_pMarkedArea == 0 )
        {
          m_pMarkedArea = CNavMesh::GetNearestNavArea(this->m_rNavMesh, vCorner1, g_NavHullAAQuad, 4, 10000.0);
          if ( m_pMarkedArea == 0 )
            m_pMarkedArea = CNavMesh::GetNearestNavArea(this->m_rNavMesh, &vEndPos, g_NavHullAAQuad, 4, 10000.0);
        }
      }
    }
  }
  v9 = (*(this->m_rNavMesh->_vptr_CNavMesh + 4))(this->m_rNavMesh);
  v10 = v9;
  if ( v9 == 0 )
    return 0;
  CNavPoly::SetCorners(v9, vCorner0, &vEndPos);
  if ( m_pMarkedArea != 0 )
    (*(v10->_vptr_CNavPoly + 27))(v10, m_pMarkedArea, 0);
  (*(this->m_rNavMesh->_vptr_CNavMesh + 28))(this->m_rNavMesh, v10);
  if ( bPlaceOnGround )
    CNavMesh::PlaceVertOnGround(this->m_rNavMesh, v10, -1, 0.0);
  MarkedAreaIncludingSelectionSet = this->m_pMarkedArea;
  if ( MarkedAreaIncludingSelectionSet != 0
    || (MarkedAreaIncludingSelectionSet = CNavEditor::GetMarkedAreaIncludingSelectionSet(this)) != 0 )
  {
    x = MarkedAreaIncludingSelectionSet->m_Extent.hi.x;
    v13 = MarkedAreaIncludingSelectionSet->m_Extent.lo.x;
    y = MarkedAreaIncludingSelectionSet->m_Extent.lo.y;
    v15 = MarkedAreaIncludingSelectionSet->m_Extent.hi.y;
    if ( vCorner0->x > x && vCorner1->x > x )
    {
      CNavArea::ConnectTo(MarkedAreaIncludingSelectionSet, v10, 1, -1, 1);
      CNavArea::ConnectTo(v10, MarkedAreaIncludingSelectionSet, 3, -1, 1);
    }
    else if ( v13 > vCorner0->x && v13 > vCorner1->x )
    {
      CNavArea::ConnectTo(MarkedAreaIncludingSelectionSet, v10, 3, -1, 1);
      CNavArea::ConnectTo(v10, MarkedAreaIncludingSelectionSet, 1, -1, 1);
    }
    else
    {
      v16 = vCorner0->y;
      if ( v16 > v15 && vCorner1->y > v15 )
      {
        CNavArea::ConnectTo(MarkedAreaIncludingSelectionSet, v10, 2, -1, 1);
        CNavArea::ConnectTo(v10, MarkedAreaIncludingSelectionSet, 0, -1, 1);
      }
      else if ( y > v16 && y > vCorner1->y )
      {
        CNavArea::ConnectTo(MarkedAreaIncludingSelectionSet, v10, 0, -1, 1);
        CNavArea::ConnectTo(v10, MarkedAreaIncludingSelectionSet, 2, -1, 1);
      }
    }
    this->m_pMarkedArea = v10;
    this->m_MarkedCorner = NavCornerType::NUM_CORNERS;
    this->m_pMarkedLadder = 0;
  }
  CNavMesh::OnEditCreateNotify(this->m_rNavMesh, v10);
  return v10;
}


