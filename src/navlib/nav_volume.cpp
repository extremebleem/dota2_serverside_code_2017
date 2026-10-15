
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_volume.cpp  (line 0, @0x0000000001a6de40, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: ConVar::ConVar, __cxa_atexit
// strings: "nav_volume_debug", "Draw or print debug information about nav volume queries."
// globals: UNSPECIFIED_LOGGING_COLOR, nav_volume_debug, __dso_handle
void __cdecl GLOBAL__sub_I_nav_volume_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  ConVar::ConVar(
    &nav_volume_debug,
    "nav_volume_debug",
    "0",
    0x4000,
    "Draw or print debug information about nav volume queries.");
  __cxa_atexit(ConVar::~ConVar, &nav_volume_debug, &_dso_handle);
}


// CNavAreaFilter::CNavAreaFilter  (line 24, @0x0000000003207fe0, libserver.so)  // inlines: CNavAttribute, CNavFlags, GetInt, _Function_base, function
// callers: CreateNewNavVolumeFromScriptTables
void __fastcall CNavAreaFilter::CNavAreaFilter(CNavAreaFilter *const this)
{
  this->m_AttributesMatchAny.m_Flags = 0;
  this->m_AttributesExcludeAny.m_Flags = 0;
  this->m_FilterFunc._M_manager = 0;
  this->m_bDrawDetails = nav_volume_debug.m_pParent->m_Value.m_nValue > 1;
}


// CNavAreaFilter::FilterArea  (line 33, @0x0000000003208010, libserver.so)  // inlines: Color, DrawPolyOutline, IsEmpty, SetColor, operator()
// callers: CNavVolumeMarkupVolume::ContainsArea, CNavVolumeVector::ContainsArea, CNavVolumeSphere::ContainsArea, CNavVolumeSphericalShell::ContainsArea, CNavVolumeVector::ForAreasOverlapping, CNavVolumeVector::PrefilterAreas, CNavVolumeVector::GetRandomArea, CNavVolumeVector::GetOrFindAreasOverlapping
bool __fastcall CNavAreaFilter::FilterArea(const CNavAreaFilter *const this, const CNavArea *const rArea)
{
  uint64 m_Flags; // rdx
  bool result; // al
  int v6; // ecx
  char v7; // bl
  int v8; // edx
  __int64 v9; // rdx
  bool v10; // [rsp+Ch] [rbp-14h]

  m_Flags = rArea->m_AreaAttributes.m_Flags;
  if ( this->m_AttributesMatchAny.m_Flags != 0 && (this->m_AttributesMatchAny.m_Flags & m_Flags) == 0
    || (m_Flags & this->m_AttributesExcludeAny.m_Flags) != 0 )
  {
    result = 0;
    if ( !this->m_bDrawDetails )
      return result;
    v6 = 230;
    v7 = -26;
  }
  else
  {
    if ( this->m_FilterFunc._M_manager != 0 )
    {
      result = this->m_FilterFunc._M_invoker(&this->m_FilterFunc, rArea);
      if ( !this->m_bDrawDetails )
        return result;
      v6 = 250;
      v7 = 75;
      if ( !result )
        goto LABEL_7;
    }
    else
    {
      result = 1;
      if ( !this->m_bDrawDetails )
        return result;
    }
    result = 1;
    v6 = 75;
    v7 = -6;
  }
LABEL_7:
  v8 = 75;
  BYTE1(v8) = v7;
  v9 = (v6 << 16) | v8 & 0xFF00FFFF | 0xFF000000;
  if ( INavDrawArea::ms_pInst != 0 )
  {
    v10 = result;
    (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(INavDrawArea::ms_pInst, rArea, v9, 1, &vec3_origin, 10.0, -2.0);
    return v10;
  }
  return result;
}


// CNavVolume::CNavVolume  (line 61, @0x0000000003208100, libserver.so)  // inlines: CNavAreaFilter, CNavAttribute, CNavFlags, GetInt, _Function_base, function
// callers: CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::ConstructInPlace, CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::Allocate, CSchemaClassBinding<CNavVolumeBreadthFirstSearch>::AllocateAndCopyConstruct, CNavVolumeMarkupVolume::CNavVolumeMarkupVolume, CSchemaClassBinding<CNavVolumeSphere>::ConstructInPlace, CSchemaClassBinding<CNavVolumeSphericalShell>::ConstructInPlace, CSchemaClassBinding<CNavVolumeSphere>::Allocate, CSchemaClassBinding<CNavVolumeSphericalShell>::Allocate, CSchemaClassBinding<CNavVolumeSphere>::AllocateAndCopyConstruct, CSchemaClassBinding<CNavVolumeSphericalShell>::AllocateAndCopyConstruct
void __fastcall CNavVolume::CNavVolume(CNavVolume *const this, const CNavMesh *pNavMesh, __int64 a3, float a4)
{
  int m_nValue; // eax

  this->_vptr_CNavVolume = &off_47CE530;
  this->m_pNavMesh = pNavMesh;
  *&this->m_NavHull.m_hullCategory = a3;
  this->m_nMaxAreasStored = 4096;
  this->m_NavHull.m_flHullHeight = a4;
  m_nValue = nav_volume_debug.m_pParent->m_Value.m_nValue;
  this->m_bFilterActive = 0;
  this->m_AreaFilter.m_AttributesMatchAny.m_Flags = 0;
  this->m_AreaFilter.m_AttributesExcludeAny.m_Flags = 0;
  this->m_AreaFilter.m_FilterFunc._M_manager = 0;
  this->m_nDebugLevel = m_nValue;
  this->m_AreaFilter.m_bDrawDetails = nav_volume_debug.m_pParent->m_Value.m_nValue > 1;
}


// CNavVolume::DrawAreaGeometryReject  (line 72, @0x0000000003208170, libserver.so)  // inlines: DrawPolyOutline
// callers: CNavVolumeMarkupVolume::ContainsArea, CNavVolumeSphere::ContainsArea, CNavVolumeSphericalShell::ContainsArea
void __fastcall CNavVolume::DrawAreaGeometryReject(const CNavArea *const rArea)
{
  if ( INavDrawArea::ms_pInst != 0 )
    (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
      INavDrawArea::ms_pInst,
      rArea,
      4281479930LL,
      1,
      &vec3_origin,
      10.0,
      -2.0);
}


// CNavVolume::CalcCellList  (line 79, @0x00000000032097b0, libserver.so)  // inlines: AddToTail, Clamp<int>, Color, CopyConstruct<NavCellCoord_t>, DrawGridCellOutline, Element, Extent, GetGridCellExtent, GrowMemory, Init, NavCellCoord_t, SetColor, WorldToGridX, WorldToGridY, operator[]
// calls: CUtlMemory<NavCellCoord_t, int>::Grow, __stack_chk_fail
void __fastcall CNavVolume::CalcCellList(const CNavVolume *const this, NavCellList_t *const rVecCellListOut)
{
  int (**vptr_CNavVolume)(...); // rax
  const CNavMesh *m_pNavMesh; // rax
  float m_flGridMinX; // xmm2_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v9; // r14d
  int v10; // ebx
  int v11; // ecx
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // edx
  int v14; // eax
  int v15; // r13d
  NavCellList_t *v16; // rax
  int v17; // r15d
  NavCellList_t *v18; // r14
  int i; // ebx
  const CNavMesh *v20; // rsi
  __int64 m_Size; // rax
  uint16 v22; // r8
  uint16 v23; // cx
  int v24; // edx
  NavCellCoord_t *v25; // rax
  const CNavMesh *v26; // rax
  int v27; // edi
  int v28; // ecx
  float v29; // xmm2_4
  int v30; // esi
  int v31; // edx
  float v32; // xmm0_4
  float v33; // xmm1_4
  vec_t v34; // xmm2_4
  int nY; // [rsp+4h] [rbp-ACh]
  int v36; // [rsp+8h] [rbp-A8h]
  int v37; // [rsp+Ch] [rbp-A4h]
  Extent volumeExtent; // [rsp+30h] [rbp-80h] BYREF
  Extent cellExtent; // [rsp+50h] [rbp-60h] BYREF
  _BYTE v40[8]; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  if ( this->m_pNavMesh != 0 )
  {
    vptr_CNavVolume = this->_vptr_CNavVolume;
    volumeExtent.lo.x = 3.4028235e38;
    volumeExtent.lo.y = 3.4028235e38;
    volumeExtent.lo.z = 3.4028235e38;
    volumeExtent.hi.x = -3.4028235e38;
    volumeExtent.hi.y = -3.4028235e38;
    volumeExtent.hi.z = -3.4028235e38;
    vptr_CNavVolume[8](this, &volumeExtent);
    m_pNavMesh = this->m_pNavMesh;
    m_flGridMinX = m_pNavMesh->m_flGridMinX;
    m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
    m_nGridSizeX = m_pNavMesh->m_nGridSizeX;
    v9 = ((volumeExtent.lo.x - m_flGridMinX) / m_flGridCellSize);
    if ( v9 < 0 )
    {
      v9 = 0;
    }
    else if ( m_nGridSizeX <= v9 )
    {
      v9 = m_nGridSizeX - 1;
    }
    v10 = ((volumeExtent.hi.x - m_flGridMinX) / m_flGridCellSize);
    if ( v10 < 0 )
    {
      v36 = 0;
    }
    else
    {
      v11 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v10 )
        v11 = ((volumeExtent.hi.x - m_flGridMinX) / m_flGridCellSize);
      v36 = v11;
    }
    m_flGridMinY = m_pNavMesh->m_flGridMinY;
    m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
    if ( ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize) < 0 )
    {
      nY = 0;
    }
    else
    {
      v14 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize) )
        v14 = ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize);
      nY = v14;
    }
    v15 = ((volumeExtent.hi.y - m_flGridMinY) / m_flGridCellSize);
    if ( v15 < 0 )
    {
      v15 = 0;
    }
    else if ( m_nGridSizeY <= v15 )
    {
      v15 = m_nGridSizeY - 1;
    }
    if ( v9 <= v36 )
    {
      v16 = rVecCellListOut;
      v17 = v9;
      v18 = v16;
      do
      {
        for ( i = nY; i <= v15; ++i )
        {
          v26 = this->m_pNavMesh;
          v27 = v26->m_nGridSizeX - 1;
          if ( v17 < 0 )
          {
            v29 = 0.0;
            v28 = 0;
          }
          else
          {
            v28 = v26->m_nGridSizeX - 1;
            if ( v17 <= v27 )
              v28 = v17;
            v29 = v28;
          }
          v30 = v26->m_nGridSizeY - 1;
          if ( i < 0 )
          {
            v32 = 0.0;
            v31 = 0;
          }
          else
          {
            v31 = v26->m_nGridSizeY - 1;
            if ( i <= v30 )
              v31 = i;
            v32 = v31;
          }
          v33 = v26->m_flGridCellSize;
          cellExtent.lo.z = -3.4028235e38;
          cellExtent.hi.z = 3.4028235e38;
          v34 = (v29 * v33) + v26->m_flGridMinX;
          cellExtent.lo.y = (v32 * v33) + v26->m_flGridMinY;
          cellExtent.lo.x = v34;
          cellExtent.hi.y = cellExtent.lo.y + v33;
          cellExtent.hi.x = v34 + v33;
          if ( v28 == 0 )
            cellExtent.lo.x = -3.4028235e38;
          if ( v27 == v28 )
            cellExtent.hi.x = 3.4028235e38;
          if ( v31 == 0 )
            cellExtent.lo.y = -3.4028235e38;
          if ( v30 == v31 )
            cellExtent.hi.y = 3.4028235e38;
          if ( (*(this->_vptr_CNavVolume + 9))(this, &cellExtent) != 0 )
          {
            if ( this->m_nDebugLevel > 1 )
            {
              qmemcpy(v40, "d<P", 3);
              v20 = this->m_pNavMesh;
              v40[3] = -1;
              if ( INavDrawMesh::ms_pInst != 0 )
                (*(INavDrawMesh::ms_pInst->_vptr_INavDrawMesh + 1))(
                  INavDrawMesh::ms_pInst,
                  v20,
                  v17,
                  i,
                  v40,
                  0,
                  0.0,
                  5.0,
                  10.0);
            }
            m_Size = v18->m_Size;
            v22 = v17;
            v23 = i;
            v24 = v18->m_Size;
            if ( m_Size == v18->m_Memory.m_nAllocationCount )
            {
              v37 = v18->m_Size;
              CUtlMemory<NavCellCoord_t,int>::Grow(&v18->m_Memory, 1);
              v24 = v18->m_Size;
              m_Size = v37;
              v23 = i;
              v22 = v17;
            }
            v18->m_Size = v24 + 1;
            v25 = &v18->m_Memory.m_pMemory[m_Size];
            if ( v25 != 0 )
            {
              v25->m_nX = v22;
              v25->m_nY = v23;
            }
          }
        }
        ++v17;
      }
      while ( v17 <= v36 );
    }
    if ( this->m_nDebugLevel > 2 )
      (*(this->_vptr_CNavVolume + 11))(this, 10.0);
  }
}


// CNavVolume::GetRandomArea  (line 121, @0x0000000003208310, libserver.so)  // inlines: CBitVec, CBitVecT, CNavAreaMarker, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ClampToGridX, ClampToGridY, ClearAll, ConvertToExternalMemory, DrawPolyFilled, GetGridCellAreas, Purge, Purge_FixedGrowable, RemoveAll, Swap<NavCellCoord_t>, memset, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: memset, RandomInt, CUtlMemory<NavCellCoord_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<NavCellCoord_t, CUtlMemoryFixedGrowable<NavCellCoord_t, 1024ul, int> >::~CUtlVectorBase, _Unwind_Resume
CNavArea *__fastcall CNavVolume::GetRandomArea(const CNavVolume *const this)
{
  int (**vptr_CNavVolume)(...); // rax
  int m_Size; // esi
  int v4; // eax
  NavCellCoord_t *v5; // rax
  uint16 m_nX; // si
  uint16 m_nY; // cx
  const CNavMesh *m_pNavMesh; // rax
  int m_nGridSizeX; // ecx
  int v10; // edx
  int v11; // esi
  int m_nGridSizeY; // edi
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *m_pMemory; // rax
  int v14; // edi
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v15; // r14
  unsigned __int64 v16; // rbx
  __int64 v17; // r15
  CNavArea *v18; // r12
  uint32 v19; // eax
  __int64 v21; // [rsp+8h] [rbp-9068h]
  int i; // [rsp+14h] [rbp-905Ch]
  CNavArea *pFoundArea; // [rsp+18h] [rbp-9058h]
  CNavAreaMarker navAreaMarker; // [rsp+20h] [rbp-9050h] BYREF
  CUtlVectorFixedGrowable<NavCellCoord_t,1024ul> vecCells; // [rsp+8020h] [rbp-1050h] BYREF
  unsigned __int64 v26; // [rsp+9038h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_pNavMesh == 0 )
    return 0;
  memset(&navAreaMarker, 0, sizeof(navAreaMarker));
  vecCells.m_Memory.m_pMemory = &vecCells.m_Memory.m_FixedMemory;
  vptr_CNavVolume = this->_vptr_CNavVolume;
  vecCells.m_Size = 0;
  vecCells.m_Memory.m_nAllocationCount = 1024;
  vecCells.m_Memory.m_nGrowSize = 0x80000000;
  vptr_CNavVolume[10](this, &vecCells);
  m_Size = vecCells.m_Size;
  if ( vecCells.m_Size <= 0 )
  {
    v18 = 0;
LABEL_19:
    if ( this->m_nDebugLevel > 0 )
      goto LABEL_20;
    goto LABEL_23;
  }
  v21 = 0;
  i = 0;
  pFoundArea = 0;
  while ( 1 )
  {
    v4 = RandomInt(i, (m_Size - 1));
    if ( i != v4 )
    {
      v5 = &vecCells.m_Memory.m_pMemory[v4];
      m_nX = vecCells.m_Memory.m_pMemory[v21].m_nX;
      m_nY = vecCells.m_Memory.m_pMemory[v21].m_nY;
      vecCells.m_Memory.m_pMemory[v21] = *v5;
      v5->m_nX = m_nX;
      v5->m_nY = m_nY;
    }
    m_pNavMesh = this->m_pNavMesh;
    m_nGridSizeX = m_pNavMesh->m_nGridSizeX;
    v10 = vecCells.m_Memory.m_pMemory[v21].m_nX;
    v11 = vecCells.m_Memory.m_pMemory[v21].m_nY;
    if ( m_nGridSizeX - 1 <= v10 )
      v10 = m_nGridSizeX - 1;
    m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
    m_pMemory = m_pNavMesh->m_Grid.m_Memory.m_pMemory;
    v14 = m_nGridSizeY - 1;
    if ( v14 <= v11 )
      v11 = v14;
    v15 = &m_pMemory[v11 * m_nGridSizeX + v10];
    if ( v15->m_Size != 0 )
      break;
LABEL_17:
    ++i;
    m_Size = vecCells.m_Size;
    ++v21;
    if ( vecCells.m_Size <= i )
    {
      v18 = pFoundArea;
      goto LABEL_19;
    }
  }
  v16 = 0;
  v17 = 8LL * (v15->m_Size - 1) + 8;
  while ( 1 )
  {
    v18 = v15->m_Memory.m_pMemory[v16 / 8];
    if ( v18 != 0 && (*(this->_vptr_CNavVolume + 7))(this, v18) != 0 )
    {
      if ( this->m_nDebugLevel <= 1 )
        break;
      pFoundArea = v18;
    }
    v16 += 8LL;
    if ( v16 == v17 )
      goto LABEL_17;
  }
  if ( this->m_nDebugLevel == 1 )
  {
LABEL_20:
    if ( INavDrawArea::ms_pInst != 0 )
      (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
        INavDrawArea::ms_pInst,
        v18,
        4283497040LL,
        1,
        &vec3_origin,
        10.0,
        0.0);
  }
LABEL_23:
  vecCells.m_Size = 0;
  v19 = vecCells.m_Memory.m_nGrowSize & 0xC0000000;
  if ( vecCells.m_Memory.m_nAllocationCount < 0 || vecCells.m_Memory.m_pMemory == &vecCells.m_Memory.m_FixedMemory )
  {
    if ( v19 != 0 )
      return v18;
    CUtlMemory<NavCellCoord_t,int>::Purge(&vecCells.m_Memory);
    return v18;
  }
  else
  {
    if ( vecCells.m_Memory.m_pMemory != 0 && v19 == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    return v18;
  }
}


// CNavVolume::GetOrFindAreasOverlapping  (line 179, @0x0000000003208c50, libserver.so)  // inlines: AddToTail, BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, Clamp<int>, ClampToGridX, ClampToGridY, ClearAll, CopyConstruct<CNavArea*>, Element, Extent, GetGridCellAreas, GrowMemory, Init, IsBitSet, IsMarked, Set, SetMark, WorldToGridX, WorldToGridY, memset, operator[]
// calls: memset, CUtlMemory<CNavArea*, int>::Grow
const NavAreaVector *__fastcall CNavVolume::GetOrFindAreasOverlapping(
        const CNavVolume *const this,
        NavAreaVector *const rAreasOverlapped)
{
  const CNavVolume *v2; // r10
  int (**vptr_CNavVolume)(...); // rax
  const CNavMesh *m_pNavMesh; // rax
  float m_flGridMinX; // xmm2_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // edx
  int v14; // eax
  int v15; // eax
  int v16; // r14d
  CNavAreaMarker *p_navAreaMarker; // rdx
  const CNavVolume *v18; // r15
  int v19; // esi
  const CNavMesh *v20; // rcx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // r9
  CNavAreaMarker *v27; // rax
  CNavVolume *v28; // rdx
  CNavAreaMarker *v29; // r15
  CNavArea *v30; // r12
  int m_nIndex; // ecx
  int v32; // esi
  __int64 v33; // rax
  char v34; // al
  int v35; // ecx
  __int64 m_Size; // r13
  int v37; // eax
  CNavArea **v38; // rax
  int v39; // ecx
  CNavAreaMarker *v40; // rax
  int nY; // [rsp+4h] [rbp-808Ch]
  int v43; // [rsp+10h] [rbp-8080h]
  int v44; // [rsp+14h] [rbp-807Ch]
  int nX; // [rsp+20h] [rbp-8070h]
  int nY_0; // [rsp+24h] [rbp-806Ch]
  __int64 v48; // [rsp+28h] [rbp-8068h]
  const CNavVolume *v49; // [rsp+28h] [rbp-8068h]
  __int64 v50; // [rsp+30h] [rbp-8060h]
  __int64 v51; // [rsp+30h] [rbp-8060h]
  const CNavVolume *thisa; // [rsp+38h] [rbp-8058h]
  const CNavVolume *thisb; // [rsp+38h] [rbp-8058h]
  const CNavVolume *thisd; // [rsp+38h] [rbp-8058h]
  Extent volumeExtent; // [rsp+40h] [rbp-8050h] BYREF
  CNavAreaMarker navAreaMarker; // [rsp+60h] [rbp-8030h] BYREF

  v2 = this;
  if ( this->m_nDebugLevel > 1 )
  {
    (*(this->_vptr_CNavVolume + 11))(this, 10.0);
    v2 = this;
  }
  if ( v2->m_pNavMesh == 0 )
    return 0;
  vptr_CNavVolume = v2->_vptr_CNavVolume;
  thisa = v2;
  volumeExtent.lo.x = 3.4028235e38;
  volumeExtent.lo.y = 3.4028235e38;
  volumeExtent.lo.z = 3.4028235e38;
  volumeExtent.hi.x = -3.4028235e38;
  volumeExtent.hi.y = -3.4028235e38;
  volumeExtent.hi.z = -3.4028235e38;
  vptr_CNavVolume[8](v2, &volumeExtent);
  m_pNavMesh = thisa->m_pNavMesh;
  m_flGridMinX = m_pNavMesh->m_flGridMinX;
  m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
  m_nGridSizeX = m_pNavMesh->m_nGridSizeX;
  v8 = ((volumeExtent.lo.x - m_flGridMinX) / m_flGridCellSize);
  if ( v8 < 0 )
  {
    nX = 0;
  }
  else
  {
    v9 = m_nGridSizeX - 1;
    if ( m_nGridSizeX > v8 )
      v9 = ((volumeExtent.lo.x - m_flGridMinX) / m_flGridCellSize);
    nX = v9;
  }
  v10 = ((volumeExtent.hi.x - m_flGridMinX) / m_flGridCellSize);
  if ( v10 < 0 )
  {
    v43 = 0;
  }
  else
  {
    v11 = m_nGridSizeX - 1;
    if ( m_nGridSizeX > v10 )
      v11 = ((volumeExtent.hi.x - m_flGridMinX) / m_flGridCellSize);
    v43 = v11;
  }
  m_flGridMinY = m_pNavMesh->m_flGridMinY;
  m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
  if ( ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize) < 0 )
  {
    nY = 0;
  }
  else
  {
    v14 = m_nGridSizeY - 1;
    if ( m_nGridSizeY > ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize) )
      v14 = ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize);
    nY = v14;
  }
  if ( ((volumeExtent.hi.y - m_flGridMinY) / m_flGridCellSize) < 0 )
  {
    v44 = 0;
  }
  else
  {
    v15 = m_nGridSizeY - 1;
    if ( m_nGridSizeY > ((volumeExtent.hi.y - m_flGridMinY) / m_flGridCellSize) )
      v15 = ((volumeExtent.hi.y - m_flGridMinY) / m_flGridCellSize);
    v44 = v15;
  }
  v16 = 0;
  memset(&navAreaMarker, 0, sizeof(navAreaMarker));
  if ( nX <= v43 )
  {
    p_navAreaMarker = &navAreaMarker;
    v18 = thisa;
    do
    {
      if ( nY <= v44 )
      {
        nY_0 = nY;
        do
        {
          v19 = 0;
          v20 = v18->m_pNavMesh;
          v21 = v20->m_nGridSizeX;
          if ( nX >= 0 )
          {
            v19 = v21 - 1;
            if ( nX <= v21 - 1 )
              v19 = nX;
          }
          v22 = v20->m_nGridSizeY - 1;
          if ( nY_0 < 0 )
          {
            v23 = 0;
          }
          else
          {
            if ( nY_0 <= v22 )
              v22 = nY_0;
            v23 = v21 * v22;
          }
          v24 = &v20->m_Grid.m_Memory.m_pMemory[v19 + v23];
          if ( *v24 != 0 )
          {
            v25 = 0;
            v26 = 8LL * (*v24 - 1) + 8;
            v27 = p_navAreaMarker;
            v28 = v18;
            v29 = v27;
            do
            {
              v30 = *(*(v24 + 8) + v25);
              if ( v30 != 0 )
              {
                m_nIndex = v30->m_nIndex;
                v32 = 1 << m_nIndex;
                v33 = m_nIndex >> 5;
                if ( ((1 << m_nIndex) & navAreaMarker.m_MarkedAreas.m_Ints[v33]) == 0 && v28->m_nMaxAreasStored > v16 )
                {
                  v48 = v24;
                  v50 = v26;
                  thisb = v28;
                  v34 = (*(v28->_vptr_CNavVolume + 7))(v28, v30);
                  v28 = thisb;
                  v26 = v50;
                  v24 = v48;
                  if ( v34 != 0 )
                  {
                    m_Size = rAreasOverlapped->m_Size;
                    v37 = rAreasOverlapped->m_Size;
                    if ( m_Size == rAreasOverlapped->m_Memory.m_nAllocationCount )
                    {
                      v49 = thisb;
                      v51 = v24;
                      thisd = v26;
                      CUtlMemory<CNavArea *,int>::Grow(&rAreasOverlapped->m_Memory, 1);
                      v28 = v49;
                      v24 = v51;
                      v26 = thisd;
                      v37 = rAreasOverlapped->m_Size;
                    }
                    rAreasOverlapped->m_Size = v37 + 1;
                    v38 = &rAreasOverlapped->m_Memory.m_pMemory[m_Size];
                    if ( v38 != 0 )
                      *v38 = v30;
                    v39 = v30->m_nIndex;
                    ++v16;
                    v32 = 1 << v39;
                    v33 = v39 >> 5;
                  }
                  else
                  {
                    v35 = v30->m_nIndex;
                    v32 = 1 << v35;
                    v33 = v35 >> 5;
                  }
                }
                v29->m_MarkedAreas.m_Ints[v33] |= v32;
              }
              v25 += 8;
            }
            while ( v25 != v26 );
            v40 = v29;
            v18 = v28;
            p_navAreaMarker = v40;
          }
          ++nY_0;
        }
        while ( nY_0 <= v44 );
      }
      ++nX;
    }
    while ( nX <= v43 );
  }
  return rAreasOverlapped;
}


// CNavVolume::ForAreasOverlapping  (line 236, @0x00000000032086b0, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, Clamp<int>, ClampToGridX, ClampToGridY, ClearAll, Extent, GetGridCellAreas, Init, IsBitSet, IsMarked, Set, SetMark, WorldToGridX, WorldToGridY, memset, operator[]
// calls: memset, std::function<void(CNavArea&)>::operator()
void __fastcall CNavVolume::ForAreasOverlapping(const CNavVolume *const this, const std::function<void(CNavArea&)> *a2)
{
  const CNavVolume *v2; // r15
  int (**vptr_CNavVolume)(...); // rax
  const CNavMesh *m_pNavMesh; // rax
  float m_flGridMinX; // xmm2_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // ecx
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  const CNavMesh *v17; // rdx
  int v18; // esi
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  const CNavVolume *v22; // r8
  __int64 v23; // rbx
  __int64 v24; // r15
  CNavArea *v25; // r12
  int m_nIndex; // ecx
  int v27; // edx
  __int64 v28; // rax
  char v29; // al
  int v30; // ecx
  int nY; // [rsp+4h] [rbp-807Ch]
  int v33; // [rsp+10h] [rbp-8070h]
  int v34; // [rsp+14h] [rbp-806Ch]
  int nX_0; // [rsp+18h] [rbp-8068h]
  int nY_0; // [rsp+1Ch] [rbp-8064h]
  __int64 v37; // [rsp+20h] [rbp-8060h]
  const CNavVolume *v38; // [rsp+20h] [rbp-8060h]
  const CNavVolume *v39; // [rsp+28h] [rbp-8058h]
  __int64 v40; // [rsp+28h] [rbp-8058h]
  Extent volumeExtent; // [rsp+30h] [rbp-8050h] BYREF
  CNavAreaMarker navAreaMarker; // [rsp+50h] [rbp-8030h] BYREF

  v2 = this;
  if ( this->m_pNavMesh != 0 )
  {
    vptr_CNavVolume = this->_vptr_CNavVolume;
    volumeExtent.lo.x = 3.4028235e38;
    volumeExtent.lo.y = 3.4028235e38;
    volumeExtent.lo.z = 3.4028235e38;
    volumeExtent.hi.x = -3.4028235e38;
    volumeExtent.hi.y = -3.4028235e38;
    volumeExtent.hi.z = -3.4028235e38;
    vptr_CNavVolume[8](this, &volumeExtent);
    m_pNavMesh = v2->m_pNavMesh;
    m_flGridMinX = m_pNavMesh->m_flGridMinX;
    m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
    m_nGridSizeX = m_pNavMesh->m_nGridSizeX;
    v8 = ((volumeExtent.lo.x - m_flGridMinX) / m_flGridCellSize);
    if ( v8 < 0 )
    {
      nX_0 = 0;
    }
    else
    {
      v9 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v8 )
        v9 = ((volumeExtent.lo.x - m_flGridMinX) / m_flGridCellSize);
      nX_0 = v9;
    }
    v10 = ((volumeExtent.hi.x - m_flGridMinX) / m_flGridCellSize);
    if ( v10 < 0 )
    {
      v33 = 0;
    }
    else
    {
      v11 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v10 )
        v11 = ((volumeExtent.hi.x - m_flGridMinX) / m_flGridCellSize);
      v33 = v11;
    }
    m_flGridMinY = m_pNavMesh->m_flGridMinY;
    m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
    if ( ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize) < 0 )
    {
      nY = 0;
    }
    else
    {
      v14 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize) )
        v14 = ((volumeExtent.lo.y - m_flGridMinY) / m_flGridCellSize);
      nY = v14;
    }
    if ( ((volumeExtent.hi.y - m_flGridMinY) / m_flGridCellSize) < 0 )
    {
      v34 = 0;
    }
    else
    {
      v15 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > ((volumeExtent.hi.y - m_flGridMinY) / m_flGridCellSize) )
        v15 = ((volumeExtent.hi.y - m_flGridMinY) / m_flGridCellSize);
      v34 = v15;
    }
    memset(&navAreaMarker, 0, sizeof(navAreaMarker));
    for ( ; nX_0 <= v33; ++nX_0 )
    {
      if ( nY <= v34 )
      {
        nY_0 = nY;
        do
        {
          v16 = 0;
          v17 = v2->m_pNavMesh;
          v18 = v17->m_nGridSizeX;
          if ( nX_0 >= 0 )
          {
            v16 = v18 - 1;
            if ( nX_0 <= v18 - 1 )
              v16 = nX_0;
          }
          v19 = v17->m_nGridSizeY - 1;
          if ( nY_0 < 0 )
          {
            v20 = 0;
          }
          else
          {
            if ( nY_0 <= v19 )
              v19 = nY_0;
            v20 = v18 * v19;
          }
          v21 = &v17->m_Grid.m_Memory.m_pMemory[v16 + v20];
          if ( *v21 != 0 )
          {
            v22 = v2;
            v23 = 0;
            v24 = 8LL * (*v21 - 1) + 8;
            do
            {
              v25 = *(*(v21 + 8) + v23);
              if ( v25 != 0 )
              {
                m_nIndex = v25->m_nIndex;
                v27 = 1 << m_nIndex;
                v28 = m_nIndex >> 5;
                if ( ((1 << m_nIndex) & navAreaMarker.m_MarkedAreas.m_Ints[v28]) == 0 )
                {
                  v37 = v21;
                  v39 = v22;
                  v29 = (*(v22->_vptr_CNavVolume + 7))(v22, v25);
                  v22 = v39;
                  v21 = v37;
                  if ( v29 != 0 )
                  {
                    v38 = v39;
                    v40 = v21;
                    std::function<void ()(CNavArea &)>::operator()(a2, v25);
                    v30 = v25->m_nIndex;
                    v22 = v38;
                    v21 = v40;
                  }
                  else
                  {
                    v30 = v25->m_nIndex;
                  }
                  v27 = 1 << v30;
                  v28 = v30 >> 5;
                }
                navAreaMarker.m_MarkedAreas.m_Ints[v28] |= v27;
              }
              v23 += 8;
            }
            while ( v23 != v24 );
            v2 = v22;
          }
          ++nY_0;
        }
        while ( nY_0 <= v34 );
      }
    }
    if ( v2->m_nDebugLevel > 2 )
      (*(v2->_vptr_CNavVolume + 11))(v2, 10.0);
  }
}


// CNavVolumeVector::ParamsChanged  (line 287, @0x0000000003208c00, libserver.so)  // inlines: AddMultipleToTail, GrowMemory, GrowVector, InsertMultipleBefore, RemoveMultipleFromTail, SetCount, SetSize
// calls: CUtlMemory<CNavArea*, int>::Grow
// callers: CNavVolumeAll::CNavVolumeAll
void __fastcall CNavVolumeVector::ParamsChanged(CNavVolumeVector *const this)
{
  int m_nAllocationCount; // esi

  if ( -this->m_FilteredAreas.m_Size < 0 || this->m_FilteredAreas.m_Size == 0 )
  {
    if ( this->m_FilteredAreas.m_Size == 0 )
    {
      this->m_bHasBeenPreFiltered = 0;
      return;
    }
  }
  else
  {
    m_nAllocationCount = this->m_FilteredAreas.m_Memory.m_nAllocationCount;
    if ( m_nAllocationCount < 0 )
      CUtlMemory<CNavArea *,int>::Grow(&this->m_FilteredAreas.m_Memory, -m_nAllocationCount);
  }
  this->m_FilteredAreas.m_Size = 0;
  this->m_bHasBeenPreFiltered = 0;
}


// CNavVolumeVector::PrefilterAreas  (line 295, @0x0000000003208a40, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, FilterArea, GrowMemory, operator[]
// calls: CNavAreaFilter::FilterArea, CUtlMemory<CNavArea*, int>::Grow
// callers: CNavVolumeVector::GetRandomArea
void __fastcall CNavVolumeVector::PrefilterAreas(const CNavVolumeVector *const this)
{
  const NavAreaVector *m_pAreas; // rax
  __int64 v3; // r15
  int v4; // r12d
  __int64 m_Size; // rax
  CNavArea **m_pMemory; // rdx
  CNavArea *v7; // r14
  int v8; // ecx
  CNavArea **v9; // rax
  int v10; // [rsp+4h] [rbp-3Ch]

  m_pAreas = this->m_pAreas;
  if ( m_pAreas != 0 && m_pAreas->m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      m_pMemory = m_pAreas->m_Memory.m_pMemory;
      v7 = m_pMemory[v3];
      if ( v7 != 0 )
      {
        if ( !this->m_bFilterActive || CNavAreaFilter::FilterArea(&this->m_AreaFilter, m_pMemory[v3]) )
        {
          m_Size = this->m_FilteredAreas.m_Size;
          if ( m_Size < this->m_nMaxAreasStored )
          {
            v8 = this->m_FilteredAreas.m_Size;
            if ( m_Size == this->m_FilteredAreas.m_Memory.m_nAllocationCount )
            {
              v10 = this->m_FilteredAreas.m_Size;
              CUtlMemory<CNavArea *,int>::Grow(&this->m_FilteredAreas.m_Memory, 1);
              v8 = this->m_FilteredAreas.m_Size;
              m_Size = v10;
            }
            this->m_FilteredAreas.m_Size = v8 + 1;
            v9 = &this->m_FilteredAreas.m_Memory.m_pMemory[m_Size];
            if ( v9 != 0 )
              *v9 = v7;
          }
        }
        m_pAreas = this->m_pAreas;
      }
      ++v4;
      ++v3;
    }
    while ( m_pAreas->m_Size > v4 );
  }
  this->m_bHasBeenPreFiltered = 1;
}


// CNavVolumeVector::GetRandomArea  (line 323, @0x0000000003208b20, libserver.so)  // inlines: FilterArea, Random, operator[]
// calls: CNavAreaFilter::FilterArea, RandomInt, CNavVolumeVector::PrefilterAreas
CNavArea *__fastcall CNavVolumeVector::GetRandomArea(const CNavVolumeVector *const this)
{
  const NavAreaVector *m_pAreas; // rbx
  CNavAreaFilter *p_m_AreaFilter; // r14
  int v4; // r12d
  int v5; // eax
  CNavArea **m_pMemory; // rdx
  CNavArea *v7; // rbx
  CNavArea *result; // rax
  int m_Size; // esi

  m_pAreas = this->m_pAreas;
  if ( m_pAreas == 0 )
    return 0;
  if ( this->m_bHasBeenPreFiltered )
  {
    m_Size = this->m_FilteredAreas.m_Size;
    result = 0;
    if ( m_Size != 0 )
      return this->m_FilteredAreas.m_Memory.m_pMemory[RandomInt(0, (m_Size - 1))];
  }
  else
  {
    p_m_AreaFilter = &this->m_AreaFilter;
    v4 = 20;
    while ( 1 )
    {
      v5 = RandomInt(0, (m_pAreas->m_Size - 1));
      m_pMemory = m_pAreas->m_Memory.m_pMemory;
      v7 = m_pMemory[v5];
      if ( v7 != 0 && (!this->m_bFilterActive || CNavAreaFilter::FilterArea(p_m_AreaFilter, m_pMemory[v5])) )
        return v7;
      if ( --v4 == 0 )
        break;
      m_pAreas = this->m_pAreas;
    }
    CNavVolumeVector::PrefilterAreas(this);
    return (*(this->_vptr_CNavVolume + 4))(this);
  }
  return result;
}


// CNavVolumeVector::GetOrFindAreasOverlapping  (line 361, @0x00000000032090a0, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, FilterArea, GrowMemory, operator[]
// calls: CNavAreaFilter::FilterArea, CUtlMemory<CNavArea*, int>::Grow
const NavAreaVector *__fastcall CNavVolumeVector::GetOrFindAreasOverlapping(
        const CNavVolumeVector *const this,
        NavAreaVector *const rAreasOverlapped)
{
  const NavAreaVector *result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 m_Size; // rax
  CNavArea **m_pMemory; // rax
  CNavArea *v9; // r13
  int v10; // esi
  CNavArea **v11; // rax
  int v12; // [rsp+Ch] [rbp-44h]

  if ( this->m_nDebugLevel > 1 )
    (*(this->_vptr_CNavVolume + 11))(this, 10.0);
  result = this->m_pAreas;
  if ( result != 0 && this->m_bFilterActive )
  {
    if ( result->m_Size != 0 )
    {
      v5 = 0;
      v6 = 8LL * (result->m_Size - 1) + 8;
      while ( 1 )
      {
        m_pMemory = result->m_Memory.m_pMemory;
        v9 = m_pMemory[v5 / 8];
        if ( v9 == 0 )
          goto LABEL_8;
        if ( !this->m_bFilterActive || CNavAreaFilter::FilterArea(&this->m_AreaFilter, m_pMemory[v5 / 8]) )
          break;
        v5 += 8LL;
        if ( v5 == v6 )
          return rAreasOverlapped;
LABEL_9:
        result = this->m_pAreas;
      }
      m_Size = rAreasOverlapped->m_Size;
      if ( m_Size < this->m_nMaxAreasStored )
      {
        v10 = rAreasOverlapped->m_Size;
        if ( m_Size == rAreasOverlapped->m_Memory.m_nAllocationCount )
        {
          v12 = rAreasOverlapped->m_Size;
          CUtlMemory<CNavArea *,int>::Grow(&rAreasOverlapped->m_Memory, 1);
          v10 = rAreasOverlapped->m_Size;
          m_Size = v12;
        }
        rAreasOverlapped->m_Size = v10 + 1;
        v11 = &rAreasOverlapped->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = v9;
      }
LABEL_8:
      v5 += 8LL;
      if ( v5 == v6 )
        return rAreasOverlapped;
      goto LABEL_9;
    }
    return rAreasOverlapped;
  }
  return result;
}


// CNavVolumeVector::ForAreasOverlapping  (line 403, @0x00000000032085c0, libserver.so)  // inlines: FilterArea
// calls: std::function<void(CNavArea&)>::operator(), CNavAreaFilter::FilterArea
void __fastcall CNavVolumeVector::ForAreasOverlapping(
        const CNavVolumeVector *const this,
        const std::function<void(CNavArea&)> *a2)
{
  const NavAreaVector *m_pAreas; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  CNavArea **m_pMemory; // rax
  CNavArea *v8; // r15
  int m_Size; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  CNavArea *v12; // rsi
  const CNavAreaFilter *p_m_AreaFilter; // [rsp+8h] [rbp-38h]

  m_pAreas = this->m_pAreas;
  if ( m_pAreas != 0 )
  {
    if ( this->m_bHasBeenPreFiltered )
    {
      m_Size = this->m_FilteredAreas.m_Size;
      if ( m_Size != 0 )
      {
        v10 = 0;
        v11 = 8LL * (m_Size - 1) + 8;
        do
        {
          v12 = this->m_FilteredAreas.m_Memory.m_pMemory[v10 / 8];
          if ( v12 != 0 )
            std::function<void ()(CNavArea &)>::operator()(a2, v12);
          v10 += 8LL;
        }
        while ( v10 != v11 );
      }
    }
    else if ( m_pAreas->m_Size != 0 )
    {
      v5 = 0;
      v6 = 8LL * (m_pAreas->m_Size - 1) + 8;
      p_m_AreaFilter = &this->m_AreaFilter;
      while ( 1 )
      {
        m_pMemory = m_pAreas->m_Memory.m_pMemory;
        v8 = m_pMemory[v5 / 8];
        if ( v8 == 0 )
          goto LABEL_6;
        if ( !this->m_bFilterActive || CNavAreaFilter::FilterArea(p_m_AreaFilter, m_pMemory[v5 / 8]) )
          break;
        v5 += 8LL;
        if ( v5 == v6 )
          return;
LABEL_7:
        m_pAreas = this->m_pAreas;
      }
      std::function<void ()(CNavArea &)>::operator()(a2, v8);
LABEL_6:
      v5 += 8LL;
      if ( v5 == v6 )
        return;
      goto LABEL_7;
    }
  }
}


// CNavVolumeVector::DrawDebug  (line 437, @0x0000000003207db0, libserver.so)  // inlines: DrawBox, DrawPolyOutline, Encompass, Extent, GetExtent, Init, operator=
void __fastcall CNavVolumeVector::DrawDebug(const CNavVolumeVector *const this, double a2, double flDuration)
{
  int m_Size; // eax
  const NavAreaVector *m_pAreas; // rax
  int v7; // ecx
  CNavArea **m_pMemory; // rsi
  __int64 v9; // rdx
  CNavArea *v10; // rax
  vec_t y; // xmm2_4
  vec_t z; // xmm3_4
  float x; // xmm1_4
  float v14; // xmm3_4
  vec_t v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  unsigned __int64 v19; // rbx
  __int64 v20; // r13
  CNavArea *v21; // rsi
  unsigned int v22; // [rsp+1Ch] [rbp-64h]
  Extent drawExtent; // [rsp+20h] [rbp-60h] BYREF
  Extent areaExtent; // [rsp+40h] [rbp-40h]

  if ( this->m_bHasBeenPreFiltered )
  {
    m_Size = this->m_FilteredAreas.m_Size;
    if ( m_Size <= 999 && m_Size != 0 )
    {
      v19 = 0;
      v20 = 8LL * (m_Size - 1) + 8;
      do
      {
        v21 = this->m_FilteredAreas.m_Memory.m_pMemory[v19 / 8];
        if ( v21 != 0 && INavDrawArea::ms_pInst != 0 )
        {
          v22 = LODWORD(a2);
          (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
            INavDrawArea::ms_pInst,
            v21,
            4284769380LL,
            1,
            &vec3_origin,
            a2,
            0.0);
          *&a2 = v22;
        }
        v19 += 8LL;
      }
      while ( v19 != v20 );
    }
  }
  m_pAreas = this->m_pAreas;
  if ( m_pAreas != 0 )
  {
    drawExtent.lo.x = 3.4028235e38;
    drawExtent.lo.y = 3.4028235e38;
    drawExtent.lo.z = 3.4028235e38;
    drawExtent.hi.x = -3.4028235e38;
    drawExtent.hi.y = -3.4028235e38;
    drawExtent.hi.z = -3.4028235e38;
    v7 = m_pAreas->m_Size;
    if ( m_pAreas->m_Size != 0 )
    {
      m_pMemory = this->m_FilteredAreas.m_Memory.m_pMemory;
      v9 = 0;
      do
      {
        v10 = m_pMemory[v9];
        if ( v10 != 0 )
        {
          y = v10->m_Extent.lo.y;
          areaExtent.hi.y = v10->m_Extent.hi.y;
          z = v10->m_Extent.hi.z;
          x = v10->m_Extent.lo.x;
          areaExtent.lo.y = y;
          areaExtent.hi.z = z;
          v14 = drawExtent.lo.x;
          v15 = v10->m_Extent.lo.z;
          areaExtent.lo.x = x;
          areaExtent.lo.z = v15;
          v16 = v10->m_Extent.hi.x;
          areaExtent.hi.x = v16;
          if ( drawExtent.lo.x > x )
          {
            drawExtent.lo.x = x;
            v14 = x;
          }
          if ( x > drawExtent.hi.x )
            drawExtent.hi.x = x;
          v17 = drawExtent.lo.y;
          if ( drawExtent.lo.y > areaExtent.lo.y )
          {
            drawExtent.lo.y = areaExtent.lo.y;
            v17 = areaExtent.lo.y;
          }
          if ( areaExtent.lo.y > drawExtent.hi.y )
            drawExtent.hi.y = areaExtent.lo.y;
          v18 = drawExtent.lo.z;
          if ( drawExtent.lo.z > areaExtent.lo.z )
          {
            drawExtent.lo.z = areaExtent.lo.z;
            v18 = areaExtent.lo.z;
          }
          if ( areaExtent.lo.z > drawExtent.hi.z )
            drawExtent.hi.z = areaExtent.lo.z;
          if ( v14 > v16 )
            drawExtent.lo.x = v16;
          if ( v16 > drawExtent.hi.x )
            drawExtent.hi.x = v16;
          if ( v17 > areaExtent.hi.y )
            drawExtent.lo.y = areaExtent.hi.y;
          if ( areaExtent.hi.y > drawExtent.hi.y )
            drawExtent.hi.y = areaExtent.hi.y;
          *&flDuration = LODWORD(areaExtent.hi.z);
          if ( v18 > areaExtent.hi.z )
            drawExtent.lo.z = areaExtent.hi.z;
          if ( areaExtent.hi.z > drawExtent.hi.z )
            drawExtent.hi.z = areaExtent.hi.z;
        }
        ++v9;
      }
      while ( v7 != v9 );
    }
    if ( INavDraw::ms_pInst != 0 )
      (*(INavDraw::ms_pInst->_vptr_INavDraw + 2))(
        INavDraw::ms_pInst,
        &drawExtent,
        &drawExtent.hi,
        100,
        100,
        100,
        a2,
        flDuration,
        255,
        0);
  }
}


// CNavVolumeAll::CNavVolumeAll  (line 474, @0x00000000032081c0, libserver.so)  // inlines: CNavAreaFilter, CNavAttribute, CNavFlags, CNavVolume, CNavVolumeVector, CUtlMemory, CUtlVector, CUtlVectorBase, GetInt, Purge, RemoveAll, SetAreas, _Function_base, function, ~CNavAreaFilter, ~CNavVolume, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: CNavVolumeVector::ParamsChanged, _Unwind_Resume, CUtlMemory<CNavArea*, int>::Purge
// callers: CreateNewNavVolumeFromScriptTables, CSchemaClassBinding<CNavVolumeAll>::ConstructInPlace, CSchemaClassBinding<CNavVolumeAll>::Allocate, CSchemaClassBinding<CNavVolumeAll>::AllocateAndCopyConstruct
void __fastcall CNavVolumeAll::CNavVolumeAll(CNavVolumeAll *const this, const CNavMesh *pNavMesh, __int64 a3, float a4)
{
  int m_nValue; // edx
  bool v6; // zf
  bool v7; // sf
  bool v8; // of

  if ( pNavMesh == 0 )
    pNavMesh = TheNavMesh;
  this->m_pNavMesh = pNavMesh;
  this->_vptr_CNavVolume = &off_47CE530;
  this->m_nMaxAreasStored = 4096;
  *&this->m_NavHull.m_hullCategory = a3;
  this->m_NavHull.m_flHullHeight = a4;
  m_nValue = nav_volume_debug.m_pParent->m_Value.m_nValue;
  this->m_bFilterActive = 0;
  this->m_AreaFilter.m_AttributesMatchAny.m_Flags = 0;
  this->m_AreaFilter.m_AttributesExcludeAny.m_Flags = 0;
  this->m_AreaFilter.m_FilterFunc._M_manager = 0;
  this->m_nDebugLevel = m_nValue;
  v8 = __OFSUB__(nav_volume_debug.m_pParent->m_Value.m_nValue, 1);
  v6 = nav_volume_debug.m_pParent->m_Value.m_nValue == 1;
  v7 = nav_volume_debug.m_pParent->m_Value.m_nValue - 1 < 0;
  this->_vptr_CNavVolume = &off_47CE5B0;
  this->m_FilteredAreas.m_Size = 0;
  this->m_FilteredAreas.m_Memory.m_pMemory = 0;
  this->m_FilteredAreas.m_Memory.m_nAllocationCount = 0;
  this->m_AreaFilter.m_bDrawDetails = !(v7 ^ v8 | v6);
  this->m_pAreas = &pNavMesh->m_NavAreas;
  this->m_FilteredAreas.m_Memory.m_nGrowSize = 0;
  CNavVolumeVector::ParamsChanged(this);
  this->_vptr_CNavVolume = &off_47CE630;
}


// CNavVolumeAll::DrawDebug  (line 481, @0x0000000003207b80, libserver.so)  // inlines: DrawBox, GetGridExtent, Init
void __fastcall CNavVolumeAll::DrawDebug(const CNavVolumeAll *const this, double a2, float flDuration)
{
  __int64 v3; // rbp
  const CNavMesh *m_pNavMesh; // rax
  float m_nGridSizeY; // xmm1_4
  float m_flGridCellSize; // xmm4_4
  float m_flGridMinX; // xmm3_4
  float m_nGridSizeX; // xmm2_4
  Extent gridExtent; // [rsp+10h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-8h]

  m_pNavMesh = this->m_pNavMesh;
  if ( m_pNavMesh != 0 )
  {
    v10 = v3;
    m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
    gridExtent.lo.z = -500.0;
    m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
    gridExtent.hi.z = 500.0;
    m_flGridMinX = m_pNavMesh->m_flGridMinX;
    gridExtent.lo.y = m_pNavMesh->m_flGridMinY;
    gridExtent.lo.x = m_flGridMinX;
    m_nGridSizeX = m_pNavMesh->m_nGridSizeX;
    gridExtent.hi.y = (m_nGridSizeY * m_flGridCellSize) + gridExtent.lo.y;
    gridExtent.hi.x = (m_nGridSizeX * m_flGridCellSize) + m_flGridMinX;
    if ( INavDraw::ms_pInst != 0 )
      (*(INavDraw::ms_pInst->_vptr_INavDraw + 2))(
        INavDraw::ms_pInst,
        &gridExtent,
        &gridExtent.hi,
        100,
        100,
        100,
        255,
        0);
  }
}


// CNavVolumeSphere::CalcCellList  (line 497, @0x0000000003209b80, libserver.so)  // inlines: AddToTail, Clamp<int>, ClosestPointOnCellDistSqr, Color, CopyConstruct<NavCellCoord_t>, DistSqToPoint, DistSqToPoint2D, DrawGridCellOutline, Element, GetGridCellExtent, GrowMemory, Init, IsOverlappingSphere, Max<float>, NavCellCoord_t, SetColor, Square<float>, WorldToGridX, WorldToGridY, operator[]
// calls: CUtlMemory<NavCellCoord_t, int>::Grow, __stack_chk_fail, sqrtf
void __fastcall CNavVolumeSphere::CalcCellList(const CNavVolumeSphere *const this, NavCellList_t *const rVecCellList)
{
  __int128 v2; // xmm1
  const CNavMesh *m_pNavMesh; // rsi
  float x; // xmm4_4
  float m_flRadius; // xmm3_4
  float m_flGridMinX; // xmm7_4
  float m_flGridCellSize; // xmm2_4
  int m_nGridSizeX; // r8d
  int v11; // r13d
  int v12; // eax
  int v13; // edx
  __int128 y_low; // xmm3
  float m_flGridMinY; // xmm5_4
  float y; // xmm0_4
  int m_nGridSizeY; // edi
  int v18; // eax
  int v19; // edx
  __int128 v20; // xmm6
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm5_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  __int128 v33; // xmm5
  float v34; // xmm0_4
  float v35; // xmm4_4
  int v36; // edi
  int v37; // ebx
  int v38; // r14d
  __int128 v39; // xmm7
  float z; // xmm2_4
  float v41; // xmm2_4
  __int64 m_Size; // rdx
  uint16 v43; // r9
  uint16 v44; // r8
  int v45; // ecx
  NavCellCoord_t *v46; // rdx
  int v47; // r8d
  int v48; // ecx
  int v49; // edi
  int v50; // edx
  __int128 v51; // xmm0
  float v52; // xmm11_4
  __int128 v53; // xmm9
  float v54; // xmm12_4
  __int128 x_low; // xmm2
  int v56; // [rsp+0h] [rbp-70h]
  float v57; // [rsp+4h] [rbp-6Ch]
  int v58; // [rsp+8h] [rbp-68h]
  unsigned int v59; // [rsp+14h] [rbp-5Ch]
  unsigned int v60; // [rsp+20h] [rbp-50h]
  int v61; // [rsp+24h] [rbp-4Ch]
  unsigned int v62; // [rsp+28h] [rbp-48h]
  unsigned int v63; // [rsp+2Ch] [rbp-44h]
  _BYTE v64[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v65; // [rsp+38h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  m_pNavMesh = this->m_pNavMesh;
  if ( m_pNavMesh != 0 )
  {
    x = this->m_vCenter.x;
    m_flRadius = this->m_flRadius;
    m_flGridMinX = m_pNavMesh->m_flGridMinX;
    m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
    m_nGridSizeX = m_pNavMesh->m_nGridSizeX;
    v57 = m_flRadius * m_flRadius;
    v11 = (((x - m_flRadius) - m_flGridMinX) / m_flGridCellSize);
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else if ( m_nGridSizeX <= v11 )
    {
      v11 = m_nGridSizeX - 1;
    }
    v12 = (((m_flRadius + x) - m_flGridMinX) / m_flGridCellSize);
    if ( v12 < 0 )
    {
      v58 = 0;
    }
    else
    {
      v13 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v12 )
        v13 = (((m_flRadius + x) - m_flGridMinX) / m_flGridCellSize);
      v58 = v13;
    }
    y_low = LODWORD(this->m_vCenter.y);
    m_flGridMinY = m_pNavMesh->m_flGridMinY;
    y = this->m_vCenter.y;
    m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
    v18 = ((y - m_flGridMinY) / m_flGridCellSize);
    if ( v18 < 0 )
    {
      v56 = 0;
    }
    else
    {
      v19 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v18 )
        v19 = ((y - m_flGridMinY) / m_flGridCellSize);
      v56 = v19;
    }
    v20 = 0;
    if ( v11 <= v58 )
    {
      v21 = m_nGridSizeX - 1;
      if ( v11 >= 0 )
        goto LABEL_15;
LABEL_85:
      v22 = v56;
      v23 = 0;
      v24 = m_nGridSizeY - 1;
      v25 = *&v20;
      if ( v56 < 0 )
      {
LABEL_86:
        v2 = v20;
        v22 = 0;
        goto LABEL_21;
      }
      while ( 1 )
      {
        if ( v24 <= v22 )
          v22 = v24;
        *&v2 = v22;
LABEL_21:
        v26 = (v25 * m_flGridCellSize) + m_flGridMinX;
        v27 = (*&v2 * m_flGridCellSize) + m_flGridMinY;
        v28 = v26;
        if ( v23 == 0 )
          v28 = -3.4028235e38;
        v29 = 3.4028235e38;
        if ( v21 != v23 )
          v29 = v26 + m_flGridCellSize;
        v30 = v27;
        if ( v22 == 0 )
          v30 = -3.4028235e38;
        if ( v24 == v22 )
          v2 = 0x7F7FFFFFu;
        else
          *&v2 = v27 + m_flGridCellSize;
        if ( v28 > x )
          break;
        v31 = *&v20;
        if ( x <= v29 )
          goto LABEL_31;
        v31 = x - v29;
        if ( v30 > *&y_low )
        {
LABEL_89:
          v31 = v30 - *&y_low;
          goto LABEL_34;
        }
LABEL_32:
        if ( *&y_low > *&v2 )
          v31 = *&y_low - *&v2;
LABEL_34:
        v32 = fsqrt(fmaxf(*&v20, v57 - ((v31 * v31) + *&v20)));
        v33 = LODWORD(this->m_vCenter.y);
        v34 = m_pNavMesh->m_flGridMinY;
        v35 = m_pNavMesh->m_flGridCellSize;
        v36 = m_pNavMesh->m_nGridSizeY;
        v37 = (((this->m_vCenter.y - v32) - v34) / v35);
        if ( v37 < 0 )
        {
          v37 = 0;
        }
        else if ( v36 <= v37 )
        {
          v37 = v36 - 1;
        }
        v38 = (((v32 + *&v33) - v34) / v35);
        if ( v38 < 0 )
        {
          v38 = 0;
        }
        else if ( v36 <= v38 )
        {
          v38 = v36 - 1;
        }
        if ( v37 <= v38 )
        {
          v39 = 0xFF7FFFFF;
          while ( 1 )
          {
            v47 = m_pNavMesh->m_nGridSizeX - 1;
            if ( v11 < 0 )
            {
              v2 = v20;
              v48 = 0;
            }
            else
            {
              v48 = m_pNavMesh->m_nGridSizeX - 1;
              if ( v11 <= v47 )
                v48 = v11;
              *&v2 = v48;
            }
            v49 = v36 - 1;
            if ( v37 < 0 )
            {
              y_low = v20;
              v50 = 0;
            }
            else
            {
              v50 = v49;
              if ( v37 <= v49 )
                v50 = v37;
              *&y_low = v50;
            }
            *&y_low = (*&y_low * v35) + v34;
            v51 = v2;
            *&v51 = (*&v2 * v35) + m_pNavMesh->m_flGridMinX;
            v2 = v51;
            if ( v48 == 0 )
              v2 = v39;
            v52 = 3.4028235e38;
            if ( v47 != v48 )
              v52 = *&v51 + v35;
            v53 = y_low;
            if ( v50 == 0 )
              v53 = v39;
            v54 = 3.4028235e38;
            if ( v49 != v50 )
              v54 = *&y_low + v35;
            x_low = LODWORD(this->m_vCenter.x);
            if ( *&v2 > *&x_low )
              break;
            v2 = v20;
            if ( *&x_low <= v52 )
              goto LABEL_43;
            *&x_low = *&x_low - v52;
            v2 = x_low;
            if ( *&v53 > *&v33 )
            {
LABEL_44:
              v2 = v53;
              *&v2 = *&v53 - *&v33;
LABEL_45:
              z = this->m_vCenter.z;
              if ( *&v39 > z )
                goto LABEL_79;
              goto LABEL_46;
            }
LABEL_77:
            if ( *&v33 <= v54 )
              goto LABEL_45;
            z = this->m_vCenter.z;
            *&v33 = *&v33 - v54;
            v2 = v33;
            if ( *&v39 > z )
            {
LABEL_79:
              v41 = (*&v39 - z) * (*&v39 - z);
              goto LABEL_48;
            }
LABEL_46:
            if ( z <= 3.4028235e38 )
              v41 = *&v20;
            else
              v41 = (z - 3.4028235e38) * (z - 3.4028235e38);
LABEL_48:
            if ( (this->m_flRadius * this->m_flRadius) > (((*&v2 * *&v2) + *&v20) + v41) )
            {
              if ( this->m_nDebugLevel > 1 )
              {
                qmemcpy(v64, "d<P", 3);
                v64[3] = -1;
                if ( INavDrawMesh::ms_pInst != 0 )
                {
                  v62 = v39;
                  v63 = v20;
                  (*(INavDrawMesh::ms_pInst->_vptr_INavDrawMesh + 1))(
                    INavDrawMesh::ms_pInst,
                    m_pNavMesh,
                    v11,
                    v37,
                    v64,
                    0,
                    *&v20,
                    5.0,
                    10.0);
                  v39 = v62;
                  v20 = v63;
                }
              }
              m_Size = rVecCellList->m_Size;
              v43 = v11;
              v44 = v37;
              v45 = rVecCellList->m_Size;
              if ( m_Size == rVecCellList->m_Memory.m_nAllocationCount )
              {
                v59 = v39;
                v60 = v20;
                v61 = rVecCellList->m_Size;
                CUtlMemory<NavCellCoord_t,int>::Grow(&rVecCellList->m_Memory, 1);
                v45 = rVecCellList->m_Size;
                v39 = v59;
                v20 = v60;
                m_Size = v61;
                v44 = v37;
                v43 = v11;
              }
              rVecCellList->m_Size = v45 + 1;
              v46 = &rVecCellList->m_Memory.m_pMemory[m_Size];
              if ( v46 != 0 )
              {
                v46->m_nX = v43;
                v46->m_nY = v44;
              }
            }
            if ( ++v37 > v38 )
              goto LABEL_83;
            m_pNavMesh = this->m_pNavMesh;
            v33 = LODWORD(this->m_vCenter.y);
            v36 = m_pNavMesh->m_nGridSizeY;
            v34 = m_pNavMesh->m_flGridMinY;
            v35 = m_pNavMesh->m_flGridCellSize;
          }
          *&v2 = *&v2 - *&x_low;
LABEL_43:
          if ( *&v53 > *&v33 )
            goto LABEL_44;
          goto LABEL_77;
        }
LABEL_83:
        if ( ++v11 > v58 )
          goto LABEL_93;
        m_pNavMesh = this->m_pNavMesh;
        x = this->m_vCenter.x;
        y_low = LODWORD(this->m_vCenter.y);
        m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
        m_flGridMinY = m_pNavMesh->m_flGridMinY;
        m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
        v21 = m_pNavMesh->m_nGridSizeX - 1;
        m_flGridMinX = m_pNavMesh->m_flGridMinX;
        if ( v11 < 0 )
          goto LABEL_85;
LABEL_15:
        v22 = v56;
        v23 = v11;
        if ( v21 <= v11 )
          v23 = v21;
        v24 = m_nGridSizeY - 1;
        v25 = v23;
        if ( v56 < 0 )
          goto LABEL_86;
      }
      v31 = v28 - x;
LABEL_31:
      if ( v30 > *&y_low )
        goto LABEL_89;
      goto LABEL_32;
    }
LABEL_93:
    if ( this->m_nDebugLevel > 2 )
      (*(this->_vptr_CNavVolume + 11))(this, 10.0);
  }
}


// CNavVolumeSphere::DrawDebug  (line 539, @0x0000000003207c30, libserver.so)  // inlines: DrawSphere
void __fastcall CNavVolumeSphere::DrawDebug(const CNavVolumeSphere *const this, double a2, float flDuration)
{
  if ( INavDraw::ms_pInst != 0 )
    (*(INavDraw::ms_pInst->_vptr_INavDraw + 1))(
      INavDraw::ms_pInst,
      &this->m_vCenter,
      100,
      100,
      100,
      50,
      this->m_flRadius,
      a2,
      0);
}


// CNavVolumeSphericalShell::CalcCellList  (line 550, @0x00000000032091a0, libserver.so)  // inlines: AddToTail, Center, Clamp<int>, ClosestPointOnCellDistSqr, Color, CopyConstruct<NavCellCoord_t>, DistSqToPoint2D, DrawGridCellOutline, Element, FarthestPointOnCellDistSqr, GetGridCellExtent, GrowMemory, Init, Max<float>, NavCellCoord_t, SetColor, Square<float>, VectorAdd, VectorDivide, WorldToGridX, WorldToGridY, operator+, operator/, operator[]
// calls: CUtlMemory<NavCellCoord_t, int>::Grow, __stack_chk_fail, sqrtf
void __fastcall CNavVolumeSphericalShell::CalcCellList(
        const CNavVolumeSphericalShell *const this,
        NavCellList_t *const rVecCellList)
{
  __int128 v2; // xmm1
  const CNavMesh *m_pNavMesh; // rsi
  __int128 x_low; // xmm4
  float m_flRadius; // xmm3_4
  float m_flGridMinX; // xmm6_4
  float m_flGridCellSize; // xmm2_4
  int m_nGridSizeX; // r8d
  float v11; // xmm7_4
  int v12; // r12d
  int v13; // eax
  int v14; // edx
  __int128 y_low; // xmm3
  float m_flGridMinY; // xmm5_4
  __int128 v17; // xmm0
  int m_nGridSizeY; // edi
  int v19; // eax
  int v20; // edx
  __int128 v21; // xmm9
  __int128 v22; // xmm8
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  __int128 v27; // xmm5
  float v28; // xmm10_4
  __int128 v29; // xmm6
  float v30; // xmm1_4
  float v31; // xmm0_4
  float y; // xmm12_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  int v35; // edi
  int v36; // ebx
  int v37; // r14d
  float v38; // xmm5_4
  __int128 v39; // xmm6
  float v40; // xmm12_4
  __int64 m_Size; // rax
  uint16 v42; // r8
  uint16 v43; // cx
  int v44; // edx
  NavCellCoord_t *v45; // rax
  int v46; // ecx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  float v50; // xmm11_4
  __int128 v51; // xmm3
  float v52; // xmm4_4
  __int128 v53; // xmm10
  int v54; // [rsp+4h] [rbp-6Ch]
  float v55; // [rsp+8h] [rbp-68h]
  int v56; // [rsp+Ch] [rbp-64h]
  unsigned int v57; // [rsp+14h] [rbp-5Ch]
  float v58; // [rsp+18h] [rbp-58h]
  unsigned int v59; // [rsp+20h] [rbp-50h]
  int v60; // [rsp+20h] [rbp-50h]
  float v61; // [rsp+24h] [rbp-4Ch]
  float v62; // [rsp+2Ch] [rbp-44h]
  float v63; // [rsp+2Ch] [rbp-44h]
  _BYTE v64[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v65; // [rsp+38h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  m_pNavMesh = this->m_pNavMesh;
  if ( m_pNavMesh != 0 )
  {
    x_low = LODWORD(this->m_vCenter.x);
    m_flRadius = this->m_flRadius;
    m_flGridMinX = m_pNavMesh->m_flGridMinX;
    m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
    m_nGridSizeX = m_pNavMesh->m_nGridSizeX;
    v55 = m_flRadius * m_flRadius;
    v11 = this->m_flRadiusInner * this->m_flRadiusInner;
    v12 = (((this->m_vCenter.x - m_flRadius) - m_flGridMinX) / m_flGridCellSize);
    if ( v12 < 0 )
    {
      v12 = 0;
    }
    else if ( m_nGridSizeX <= v12 )
    {
      v12 = m_nGridSizeX - 1;
    }
    v13 = (((m_flRadius + *&x_low) - m_flGridMinX) / m_flGridCellSize);
    if ( v13 < 0 )
    {
      v56 = 0;
    }
    else
    {
      v14 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v13 )
        v14 = (((m_flRadius + *&x_low) - m_flGridMinX) / m_flGridCellSize);
      v56 = v14;
    }
    y_low = LODWORD(this->m_vCenter.y);
    m_flGridMinY = m_pNavMesh->m_flGridMinY;
    v17 = y_low;
    m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
    v19 = ((*&y_low - m_flGridMinY) / m_flGridCellSize);
    if ( v19 < 0 )
    {
      v54 = 0;
    }
    else
    {
      v20 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v19 )
        v20 = ((*&y_low - m_flGridMinY) / m_flGridCellSize);
      v54 = v20;
    }
    v21 = 0;
    v22 = 0x7F7FFFFFu;
    if ( v12 <= v56 )
    {
      v23 = m_nGridSizeX - 1;
      if ( v12 >= 0 )
        goto LABEL_15;
LABEL_77:
      v24 = v54;
      v25 = 0;
      v26 = m_nGridSizeY - 1;
      v17 = v21;
      if ( v54 < 0 )
      {
LABEL_78:
        v2 = v21;
        v24 = 0;
        goto LABEL_21;
      }
      while ( 1 )
      {
        if ( v26 <= v24 )
          v24 = v26;
        *&v2 = v24;
LABEL_21:
        *&v17 = (*&v17 * m_flGridCellSize) + m_flGridMinX;
        *&v2 = (*&v2 * m_flGridCellSize) + m_flGridMinY;
        v27 = v17;
        if ( v25 == 0 )
          v27 = 0xFF7FFFFF;
        v28 = 3.4028235e38;
        if ( v23 != v25 )
          v28 = *&v17 + m_flGridCellSize;
        v29 = v2;
        if ( v24 == 0 )
          v29 = 0xFF7FFFFF;
        v30 = v26 == v24 ? 3.4028235e38 : *&v2 + m_flGridCellSize;
        if ( *&v27 > *&x_low )
          break;
        v17 = v21;
        if ( *&x_low <= v28 )
          goto LABEL_31;
        *&x_low = *&x_low - v28;
        v17 = x_low;
        if ( *&v29 > *&y_low )
        {
LABEL_81:
          *&v29 = *&v29 - *&y_low;
          v17 = v29;
          goto LABEL_34;
        }
LABEL_32:
        if ( *&y_low > v30 )
        {
          *&y_low = *&y_low - v30;
          v17 = y_low;
        }
LABEL_34:
        v31 = fsqrt(fmaxf(0.0, v55 - ((*&v17 * *&v17) + 0.0)));
        y = this->m_vCenter.y;
        v33 = m_pNavMesh->m_flGridMinY;
        v2 = LODWORD(y);
        v34 = m_pNavMesh->m_flGridCellSize;
        v35 = m_pNavMesh->m_nGridSizeY;
        v36 = (((y - v31) - v33) / v34);
        if ( v36 < 0 )
        {
          v36 = 0;
        }
        else if ( v35 <= v36 )
        {
          v36 = v35 - 1;
        }
        v37 = (((v31 + y) - v33) / v34);
        if ( v37 < 0 )
        {
          v37 = 0;
        }
        else if ( v35 <= v37 )
        {
          v37 = v35 - 1;
        }
        if ( v36 <= v37 )
        {
          v38 = 0.5;
          v39 = 0x7F7FFFFFu;
          while ( 1 )
          {
            v46 = m_pNavMesh->m_nGridSizeX - 1;
            if ( v12 < 0 )
            {
              v17 = v21;
              v47 = 0;
            }
            else
            {
              v47 = m_pNavMesh->m_nGridSizeX - 1;
              if ( v12 <= v46 )
                v47 = v12;
              *&v17 = v47;
            }
            v48 = v35 - 1;
            if ( v36 < 0 )
            {
              v2 = v21;
              v49 = 0;
            }
            else
            {
              v49 = v48;
              if ( v36 <= v48 )
                v49 = v36;
              *&v2 = v49;
            }
            *&v17 = (*&v17 * v34) + m_pNavMesh->m_flGridMinX;
            *&v2 = (*&v2 * v34) + v33;
            v50 = *&v17;
            if ( v47 == 0 )
              v50 = -3.4028235e38;
            v51 = v39;
            if ( v46 != v47 )
            {
              v51 = v17;
              *&v51 = *&v17 + v34;
            }
            v52 = *&v2;
            if ( v49 == 0 )
              v52 = -3.4028235e38;
            v53 = v22;
            if ( v48 != v49 )
            {
              *&v2 = *&v2 + v34;
              v53 = v2;
            }
            v17 = LODWORD(this->m_vCenter.x);
            v2 = v53;
            *&v2 = (*&v53 + v52) * v38;
            if ( ((*&v51 + v50) * v38) > *&v17 )
            {
              *&v51 = *&v51 - *&v17;
              v17 = v51;
              if ( *&v2 <= y )
                goto LABEL_43;
            }
            else
            {
              *&v17 = *&v17 - v50;
              if ( *&v2 <= y )
              {
LABEL_43:
                v40 = y - v52;
                goto LABEL_44;
              }
            }
            v40 = *&v53 - y;
LABEL_44:
            if ( ((*&v17 * *&v17) + (v40 * v40)) > v11 )
            {
              if ( this->m_nDebugLevel > 1 )
              {
                qmemcpy(v64, "d<P", 3);
                v64[3] = -1;
                if ( INavDrawMesh::ms_pInst != 0 )
                {
                  v59 = v39;
                  v61 = v38;
                  v62 = v11;
                  (*(INavDrawMesh::ms_pInst->_vptr_INavDrawMesh + 1))(
                    INavDrawMesh::ms_pInst,
                    m_pNavMesh,
                    v12,
                    v36,
                    v64,
                    0,
                    0.0,
                    5.0,
                    10.0);
                  v22 = 0x7F7FFFFFu;
                  v39 = v59;
                  v38 = v61;
                  v21 = 0u;
                  v11 = v62;
                }
              }
              m_Size = rVecCellList->m_Size;
              v42 = v12;
              v43 = v36;
              v44 = rVecCellList->m_Size;
              if ( m_Size == rVecCellList->m_Memory.m_nAllocationCount )
              {
                v57 = v39;
                v58 = v38;
                v60 = rVecCellList->m_Size;
                v63 = v11;
                CUtlMemory<NavCellCoord_t,int>::Grow(&rVecCellList->m_Memory, 1);
                v44 = rVecCellList->m_Size;
                v22 = 0x7F7FFFFFu;
                v39 = v57;
                v38 = v58;
                v21 = 0u;
                m_Size = v60;
                v43 = v36;
                v42 = v12;
                v11 = v63;
              }
              rVecCellList->m_Size = v44 + 1;
              v45 = &rVecCellList->m_Memory.m_pMemory[m_Size];
              if ( v45 != 0 )
              {
                v45->m_nX = v42;
                v45->m_nY = v43;
              }
            }
            if ( ++v36 > v37 )
              break;
            m_pNavMesh = this->m_pNavMesh;
            y = this->m_vCenter.y;
            v35 = m_pNavMesh->m_nGridSizeY;
            v33 = m_pNavMesh->m_flGridMinY;
            v34 = m_pNavMesh->m_flGridCellSize;
          }
        }
        if ( ++v12 > v56 )
          goto LABEL_85;
        m_pNavMesh = this->m_pNavMesh;
        x_low = LODWORD(this->m_vCenter.x);
        y_low = LODWORD(this->m_vCenter.y);
        m_nGridSizeY = m_pNavMesh->m_nGridSizeY;
        m_flGridMinY = m_pNavMesh->m_flGridMinY;
        m_flGridCellSize = m_pNavMesh->m_flGridCellSize;
        v23 = m_pNavMesh->m_nGridSizeX - 1;
        m_flGridMinX = m_pNavMesh->m_flGridMinX;
        if ( v12 < 0 )
          goto LABEL_77;
LABEL_15:
        v24 = v54;
        v25 = v12;
        if ( v23 <= v12 )
          v25 = v23;
        v26 = m_nGridSizeY - 1;
        *&v17 = v25;
        if ( v54 < 0 )
          goto LABEL_78;
      }
      *&v27 = *&v27 - *&x_low;
      v17 = v27;
LABEL_31:
      if ( *&v29 > *&y_low )
        goto LABEL_81;
      goto LABEL_32;
    }
LABEL_85:
    if ( this->m_nDebugLevel > 2 )
      (*(this->_vptr_CNavVolume + 11))(this, 10.0);
  }
}


// CNavVolumeSphericalShell::DrawDebug  (line 592, @0x0000000003207c80, libserver.so)  // inlines: DrawSphere
void __fastcall CNavVolumeSphericalShell::DrawDebug(
        const CNavVolumeSphericalShell *const this,
        double a2,
        float flDuration)
{
  float flDurationa; // [rsp+Ch] [rbp-24h]

  if ( INavDraw::ms_pInst != 0 )
  {
    flDurationa = *&a2;
    (*(INavDraw::ms_pInst->_vptr_INavDraw + 1))(
      INavDraw::ms_pInst,
      &this->m_vCenter,
      100,
      100,
      100,
      50,
      this->m_flRadiusInner,
      a2,
      0);
    if ( INavDraw::ms_pInst != 0 )
      (*(INavDraw::ms_pInst->_vptr_INavDraw + 1))(
        INavDraw::ms_pInst,
        &this->m_vCenter,
        100,
        100,
        100,
        50,
        this->m_flRadius,
        flDurationa,
        0);
  }
}


