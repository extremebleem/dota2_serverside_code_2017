
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_fow_viewer.cpp  (line 0, @0x0000000001a6eb10, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_fow_viewer_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CFoW_Viewer::CFoW_Viewer  (line 14, @0x000000000325c3c0, libserver.so)  // inlines: Init
// calls: CFoW_Viewer1DZ::CFoW_Viewer1DZ
// callers: CFoW::AddViewer
void __fastcall CFoW_Viewer::CFoW_Viewer(
        CFoW_Viewer *const this,
        CFoW *pFoW,
        unsigned int nViewerTeam,
        FoWViewerType_t FoWViewerType)
{
  CFoW_Viewer1DZ::CFoW_Viewer1DZ(&this->m_Viewer1DZ);
  this->m_pFoW = pFoW;
  this->m_FoWViewerType = FoWViewerType;
  this->m_nViewerTeam = nViewerTeam;
  this->m_vLocation.x = 0.0;
  this->m_vLocation.y = 0.0;
  this->m_vLocation.z = 0.0;
  this->m_nGridX = 0;
  this->m_nGridY = 0;
  this->m_flRadius = 0.0;
  this->m_OccludeMode = FoWOccluderMode_t::FOW_OCCLUDE_MODE_USE_HEIGHTGROUP;
  this->m_szName[0] = 0;
  this->m_bInGrid = 0;
}


// CFoW_Viewer::~CFoW_Viewer  (line 37, @0x000000000325c4a0, libserver.so)
// calls: CFoW_Viewer::MergeViewerVisibility, CFoW_Viewer1DZ::~CFoW_Viewer1DZ
// callers: CFoW::ClearState, CFoW::RemoveViewer
void __fastcall CFoW_Viewer::~CFoW_Viewer(CFoW_Viewer *const this)
{
  CFoW_Viewer::MergeViewerVisibility(this, 0);
  CFoW_Viewer1DZ::~CFoW_Viewer1DZ(&this->m_Viewer1DZ);
}


// CFoW_Viewer::MergeViewerVisibility  (line 48, @0x000000000325c430, libserver.so)
// calls: CFoW_Viewer1DZ::MergeViewerVisibility, CFoW_Viewer1DZ::CalcLocalizedVisibility
// callers: CFoW::UpdateHeightArray, CFoW::SolveVisibility, CFoW::EndUpdate, CFoW::DirtyViewers, CFoW_Viewer::~CFoW_Viewer, CFoW_Viewer::UpdateSize, CFoW_Viewer::UpdateLocation, CFoW_Viewer::UpdateHeightGroup, CFoW_Viewer::UpdateViewerOccludeMode, CFoW_Viewer::UpdateTeam
bool __fastcall CFoW_Viewer::MergeViewerVisibility(CFoW_Viewer *const this, bool bAddToGrid)
{
  CFoW_Viewer1DZ *p_m_Viewer1DZ; // r13

  if ( this->m_bInGrid == bAddToGrid )
    return 0;
  p_m_Viewer1DZ = &this->m_Viewer1DZ;
  if ( bAddToGrid )
    CFoW_Viewer1DZ::CalcLocalizedVisibility(&this->m_Viewer1DZ, this);
  CFoW_Viewer1DZ::MergeViewerVisibility(p_m_Viewer1DZ, this, bAddToGrid);
  this->m_bInGrid = bAddToGrid;
  return 1;
}


// CFoW_Viewer::UpdateSize  (line 71, @0x000000000325c4d0, libserver.so)  // inlines: Clamp<float>
// calls: CFoW_Viewer::MergeViewerVisibility, CFoW_Viewer1DZ::UpdateSize
// callers: CFoW::UpdateViewer, CFoW::UpdateViewerSize
__int64 __fastcall CFoW_Viewer::UpdateSize(CFoW_Viewer *const this, __m128 a2, float flRadius)
{
  float v3; // xmm1_4
  __m128 v5; // xmm1
  float flRadiusa; // [rsp+0h] [rbp-1Ch]

  v3 = 0.0;
  if ( a2.m128_f32[0] >= 0.0 )
  {
    v5 = _mm_cmplt_ss(0x457A0000u, a2);
    LODWORD(v3) = _mm_andnot_ps(v5, a2).m128_u32[0] | v5.m128_i32[0] & 0x457A0000;
  }
  if ( v3 == this->m_flRadius )
    return 0;
  flRadiusa = v3;
  CFoW_Viewer::MergeViewerVisibility(this, 0);
  CFoW_Viewer1DZ::UpdateSize(&this->m_Viewer1DZ, this, flRadiusa);
  this->m_flRadius = flRadiusa;
  return 1;
}


// CFoW_Viewer::UpdateLocation  (line 90, @0x000000000325c550, libserver.so)  // inlines: Clamp<int>, operator=
// calls: CFoW::GetGridUnitsClamped, CFoW_Viewer::MergeViewerVisibility, CFoW_Viewer1DZ::UpdateLocation
// callers: CFoW::UpdateViewer, CFoW::UpdateViewerLocation
bool __fastcall CFoW_Viewer::UpdateLocation(
        CFoW_Viewer *const this,
        const Vector *const vLocation,
        Vector *pvOldLocation)
{
  int v6; // eax
  CFoW *m_pFoW; // rcx
  int m_nGridXUnits; // esi
  int m_nGridYUnits; // esi
  int v10; // ecx
  bool v11; // zf
  int v12; // ecx
  int v13; // edx
  CFoW *v14; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm1_4
  int nGridX; // [rsp+8h] [rbp-28h] BYREF
  int nGridY[9]; // [rsp+Ch] [rbp-24h] BYREF

  CFoW::GetGridUnitsClamped(this->m_pFoW, vLocation, &nGridX, nGridY);
  v6 = 1;
  m_pFoW = this->m_pFoW;
  m_nGridXUnits = this->m_pFoW->m_nGridXUnits;
  if ( nGridX > 0 )
  {
    v6 = m_nGridXUnits - 2;
    if ( m_nGridXUnits - 2 > nGridX )
      v6 = nGridX;
  }
  nGridX = v6;
  m_nGridYUnits = m_pFoW->m_nGridYUnits;
  v10 = 1;
  if ( nGridY[0] > 0 )
  {
    v10 = m_nGridYUnits - 2;
    if ( m_nGridYUnits - 2 > nGridY[0] )
      v10 = nGridY[0];
  }
  v11 = this->m_nGridX == v6;
  nGridY[0] = v10;
  if ( v11 && this->m_nGridY == v10 )
    return 0;
  CFoW_Viewer::MergeViewerVisibility(this, 0);
  if ( pvOldLocation != 0 )
  {
    pvOldLocation->x = this->m_vLocation.x;
    pvOldLocation->y = this->m_vLocation.y;
    pvOldLocation->z = this->m_vLocation.z;
  }
  v12 = nGridX;
  v13 = nGridY[0];
  v14 = this->m_pFoW;
  this->m_nGridX = nGridX;
  this->m_nGridY = v13;
  v15 = (v14->m_nHorizontalGridSize * v12) + v14->m_vWorldMins.x;
  this->m_vLocation.x = v15;
  v16 = (v14->m_nHorizontalGridSize * v13) + v14->m_vWorldMins.y;
  this->m_vLocation.y = v16;
  this->m_vLocation.z = vLocation->z;
  this->m_vLocation.x = (v14->m_nHorizontalGridSize * 0.5) + v15;
  this->m_vLocation.y = (v14->m_nHorizontalGridSize * 0.5) + v16;
  CFoW_Viewer1DZ::UpdateLocation(&this->m_Viewer1DZ, this);
  return 1;
}


// CFoW_Viewer::UpdateHeightGroup  (line 131, @0x000000000325c680, libserver.so)
// calls: CFoW_Viewer::MergeViewerVisibility, CFoW_Viewer1DZ::UpdateLocation
// callers: CFoW::UpdateHeightArray
bool __fastcall CFoW_Viewer::UpdateHeightGroup(CFoW_Viewer *const this)
{
  CFoW_Viewer::MergeViewerVisibility(this, 0);
  CFoW_Viewer1DZ::UpdateLocation(&this->m_Viewer1DZ, this);
  return 1;
}


// CFoW_Viewer::UpdateViewerOccludeMode  (line 144, @0x000000000325c6b0, libserver.so)
// calls: CFoW_Viewer::MergeViewerVisibility, CFoW_Viewer1DZ::UpdateViewerOccludeMode
// callers: CFoW::UpdateViewerOccludeMode, CFoW::UpdateViewer
bool __fastcall CFoW_Viewer::UpdateViewerOccludeMode(CFoW_Viewer *const this, FoWOccluderMode_t OccludeMode)
{
  bool result; // al

  result = 0;
  if ( this->m_OccludeMode != OccludeMode )
  {
    CFoW_Viewer::MergeViewerVisibility(this, 0);
    this->m_OccludeMode = OccludeMode;
    CFoW_Viewer1DZ::UpdateViewerOccludeMode(&this->m_Viewer1DZ, this);
    return 1;
  }
  return result;
}


// CFoW_Viewer::UpdateTeam  (line 162, @0x000000000325c6f0, libserver.so)
// calls: CFoW_Viewer::MergeViewerVisibility
// callers: CFoW::UpdateViewerTeam, CFoW::UpdateViewer
bool __fastcall CFoW_Viewer::UpdateTeam(CFoW_Viewer *const this, unsigned int nViewerTeam)
{
  bool result; // al

  result = 0;
  if ( this->m_nViewerTeam != nViewerTeam )
  {
    CFoW_Viewer::MergeViewerVisibility(this, 0);
    this->m_nViewerTeam = nViewerTeam;
    return 1;
  }
  return result;
}


// CFoW_Viewer::SetName  (line 177, @0x000000000325c720, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy
// callers: CFoW::UpdateViewerName
void __fastcall CFoW_Viewer::SetName(CFoW_Viewer *const this, const char *pszName)
{
  if ( pszName != 0 )
    _V_strncpy(this->m_szName, pszName, 64);
}


