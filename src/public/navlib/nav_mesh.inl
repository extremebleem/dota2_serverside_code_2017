
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavPrecacheInfo::~CNavPrecacheInfo  (line 163, @0x0000000002f06200, libserver.so)  // inlines: Purge, RemoveAll, ~CNavPlaceDirectory, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<unsigned int, int>::Purge
void __fastcall CNavPrecacheInfo::~CNavPrecacheInfo(CNavPrecacheInfo *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_placeDirectory.m_Directory.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CNavPrecacheInfo = off_47AE070;  // vptr: CNavPrecacheInfo
  this->m_placeDirectory.m_Directory.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_placeDirectory.m_Directory.m_Memory;
    CUtlMemory<unsigned int,int>::Purge(&this->m_placeDirectory.m_Directory.m_Memory);
    if ( (this->m_placeDirectory.m_Directory.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(p_m_Memory);
  }
}


// CNavPrecacheInfo::~CNavPrecacheInfo  (line 163, @0x0000000002f062c0, libserver.so)  // inlines: Purge, RemoveAll, ~CNavPlaceDirectory, ~CNavPrecacheInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<unsigned int, int>::Purge
void __fastcall CNavPrecacheInfo::~CNavPrecacheInfo(CNavPrecacheInfo *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_placeDirectory.m_Directory.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CNavPrecacheInfo = off_47AE070;  // vptr: CNavPrecacheInfo
  this->m_placeDirectory.m_Directory.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_placeDirectory.m_Directory.m_Memory,
        CUtlMemory<unsigned int,int>::Purge(&this->m_placeDirectory.m_Directory.m_Memory),
        (this->m_placeDirectory.m_Directory.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<unsigned int,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CNavPrecacheInfo::CopyPrecacheInfo  (line 164, @0x0000000002f0a5b0, libserver.so)  // inlines: operator=
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount
void __fastcall CNavPrecacheInfo::CopyPrecacheInfo(CNavPrecacheInfo *const this, const CNavPrecacheInfo *const rOther)
{
  CNavPlaceDirectory *p_m_placeDirectory; // rdi
  int m_Size; // r13d
  unsigned __int64 v6; // rax

  p_m_placeDirectory = &this->m_placeDirectory;
  if ( p_m_placeDirectory != &rOther->m_placeDirectory )
  {
    m_Size = rOther->m_placeDirectory.m_Directory.m_Size;
    CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(&p_m_placeDirectory->m_Directory, m_Size);
    if ( m_Size > 0 )
    {
      v6 = 0;
      do
      {
        this->m_placeDirectory.m_Directory.m_Memory.m_pMemory[v6 / 4] = rOther->m_placeDirectory.m_Directory.m_Memory.m_pMemory[v6 / 4];
        v6 += 4LL;
      }
      while ( v6 != 4LL * (m_Size - 1) + 4 );
    }
  }
  this->m_placeDirectory.m_bHasUnnamedAreas = rOther->m_placeDirectory.m_bHasUnnamedAreas;
}


// CNavPrecacheInfo::Reset  (line 165, @0x0000000002f05880, libserver.so)
// calls: CNavPlaceDirectory::Reset
void __fastcall CNavPrecacheInfo::Reset(CNavPrecacheInfo *const this)
{
  CNavPlaceDirectory::Reset(&this->m_placeDirectory);
}


// CNavMesh::PreLoadAreas  (line 195, @0x00000000031fc540, libserver.so)
void __fastcall CNavMesh::PreLoadAreas(CNavMesh *const this, int nAreas)
{
  ;
}


// CNavMesh::UnloadAreas  (line 196, @0x00000000031fc550, libserver.so)
void __fastcall CNavMesh::UnloadAreas(CNavMesh *const this)
{
  ;
}


// CNavMesh::SaveCustomData  (line 268, @0x00000000031fc560, libserver.so)
void __fastcall CNavMesh::SaveCustomData(const CNavMesh *const this, CUtlBuffer *const fileBuffer)
{
  ;
}


// CNavMesh::LoadCustomData  (line 269, @0x00000000031fc570, libserver.so)
void __fastcall CNavMesh::LoadCustomData(CNavMesh *const this, CUtlBuffer *const fileBuffer)
{
  ;
}


// CNavMesh::SaveCustomDataPreArea  (line 270, @0x00000000031fc580, libserver.so)
void __fastcall CNavMesh::SaveCustomDataPreArea(const CNavMesh *const this, CUtlBuffer *const fileBuffer)
{
  ;
}


// CNavMesh::LoadCustomDataPreArea  (line 271, @0x00000000031fc590, libserver.so)
void __fastcall CNavMesh::LoadCustomDataPreArea(CNavMesh *const this, CUtlBuffer *const rFileBuffer)
{
  ;
}


// CNavMesh::OnRoundRestartPreEntity  (line 377, @0x00000000031fc5a0, libserver.so)
void __fastcall CNavMesh::OnRoundRestartPreEntity(CNavMesh *const this)
{
  ;
}


// CNavMesh::OnBreakableCreated  (line 378, @0x00000000031fc5b0, libserver.so)
void __fastcall CNavMesh::OnBreakableCreated(CNavMesh *const this, CBaseEntity *pBreakableEntity)
{
  ;
}


// CNavMesh::OnBreakableBroken  (line 379, @0x00000000031fc5c0, libserver.so)
void __fastcall CNavMesh::OnBreakableBroken(CNavMesh *const this, CBaseEntity *pBrokenEntity)
{
  ;
}


// CNavMesh::ReadNavGenMarkup  (line 599, @0x00000000031fc5d0, libserver.so)
void __fastcall CNavMesh::ReadNavGenMarkup(CNavMesh *const this, const CNavGenInput *const inputData)
{
  ;
}


// CNavMesh::GetSubVersionNumber  (line 672, @0x00000000031fc5e0, libserver.so)
uint __fastcall CNavMesh::GetSubVersionNumber(const CNavMesh *const this)
{
  return 0;
}


// CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>  (line 867, @0x0000000002219810, libserver.so)  // inlines: AddToTail, BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, CVProfScope, ClearAll, CopyConstruct<CNavArea*>, Element, Find, GetExtent, GrowMemory, HasElement, IsBitSet, IsEnabled, IsMarked, IsOverlapping, Set, SetMark, WorldToGridX, WorldToGridY, memset, operator(), operator=, operator[], ~CVProfScope
// calls: memset, CVProfile::ExitScope, CUtlMemory<CNavArea*, int>::Grow, CVProfile::EnterScope, __cxa_guard_acquire, RandomInt, __cxa_guard_release, Warning, _Unwind_Resume, __cxa_guard_abort
// callers: CFire::BurnThink, CTriggerHurt::NavThink, CFuncNavBlocker::DrawDebugTextOverlays, CFuncNavBlocker::UpdateBlocked, CNavObstacleMgr::DrawIntersectingAreas, CNavObstacleMgr::SplitEdge
// strings: "NextBot", "CNavMesh::ForAllAreasOverlappingExtent", "** Walked off of the CNavMesh::m_grid in ForAllAreasOverlappingExtent()\n"
// globals: `guard variable for'CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker, CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker, CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::__executeCount
bool __fastcall CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(
        CNavMesh *const this,
        NavAreaCollector *const func,
        const Extent *const extent)
{
  int m_enabled; // ebx
  float m_flGridMinX; // xmm2_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // eax
  int v8; // edi
  int v9; // edx
  int v10; // esi
  int v11; // edx
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // eax
  int v14; // edi
  int v15; // edx
  int v16; // esi
  int v17; // edx
  int v18; // eax
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v19; // r13
  unsigned __int64 v20; // r12
  CNavArea *v21; // rbx
  int m_nIndex; // ecx
  float v23; // xmm0_4
  int v25; // eax
  CNavArea **v26; // rax
  int v27; // ecx
  CNavArea **m_pMemory; // rdx
  CNavArea **v29; // rdx
  int v30; // eax
  int y; // [rsp+Ch] [rbp-8064h]
  int v32; // [rsp+10h] [rbp-8060h]
  bool VProf_869; // [rsp+17h] [rbp-8059h]
  int v34; // [rsp+18h] [rbp-8058h]
  int x; // [rsp+1Ch] [rbp-8054h]
  int y_0; // [rsp+28h] [rbp-8048h]
  int m_Size; // [rsp+2Ch] [rbp-8044h]
  __int64 v40; // [rsp+38h] [rbp-8038h]
  CNavAreaMarker navAreaMarker; // [rsp+40h] [rbp-8030h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_869 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CNavMesh::ForAllAreasOverlappingExtent", 0, "NextBot", 0, 4);
  memset(&navAreaMarker, 0, sizeof(navAreaMarker));
  if ( this->m_Grid.m_Size != 0 )
  {
    if ( `guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker == 0
      && __cxa_guard_acquire(&`guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker) != 0 )
    {
      CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker = RandomInt(0, 0x100000);
      __cxa_guard_release(&`guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker);
    }
    if ( CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker == -1 )
      CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker = 1;
    else
      ++CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::nSearchMarker;
    m_flGridMinX = this->m_flGridMinX;
    m_flGridCellSize = this->m_flGridCellSize;
    m_nGridSizeX = this->m_nGridSizeX;
    v8 = ((extent->lo.x - m_flGridMinX) / m_flGridCellSize);
    if ( v8 < 0 )
    {
      x = 0;
    }
    else
    {
      v9 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v8 )
        v9 = ((extent->lo.x - m_flGridMinX) / m_flGridCellSize);
      x = v9;
    }
    v10 = ((extent->hi.x - m_flGridMinX) / m_flGridCellSize);
    if ( v10 < 0 )
    {
      v32 = 0;
    }
    else
    {
      v11 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v10 )
        v11 = ((extent->hi.x - m_flGridMinX) / m_flGridCellSize);
      v32 = v11;
    }
    m_flGridMinY = this->m_flGridMinY;
    m_nGridSizeY = this->m_nGridSizeY;
    v14 = ((extent->lo.y - m_flGridMinY) / m_flGridCellSize);
    if ( v14 < 0 )
    {
      y = 0;
    }
    else
    {
      v15 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v14 )
        v15 = ((extent->lo.y - m_flGridMinY) / m_flGridCellSize);
      y = v15;
    }
    v16 = ((extent->hi.y - m_flGridMinY) / m_flGridCellSize);
    if ( v16 < 0 )
    {
      v34 = 0;
    }
    else
    {
      v17 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v16 )
        v17 = ((extent->hi.y - m_flGridMinY) / m_flGridCellSize);
      v34 = v17;
    }
    if ( x <= v32 )
    {
      while ( y > v34 )
      {
LABEL_65:
        if ( ++x > v32 )
          goto LABEL_41;
      }
      v18 = x + y * this->m_nGridSizeX;
      if ( v18 < this->m_Grid.m_Size )
      {
        y_0 = y;
        while ( 1 )
        {
          v19 = &this->m_Grid.m_Memory.m_pMemory[v18];
          if ( v19->m_Size != 0 )
            break;
LABEL_37:
          if ( ++y_0 > v34 )
            goto LABEL_65;
          v18 = x + this->m_nGridSizeX * y_0;
          if ( v18 >= this->m_Grid.m_Size )
            goto LABEL_39;
        }
        v20 = 0;
        v40 = 8LL * (v19->m_Size - 1) + 8;
        while ( 1 )
        {
          v21 = v19->m_Memory.m_pMemory[v20 / 8];
          m_nIndex = v21->m_nIndex;
          if ( ((1 << m_nIndex) & navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5]) == 0 )
          {
            v23 = v21->m_Extent.hi.x;
            navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5] |= 1 << m_nIndex;
            if ( v23 >= extent->lo.x
              && extent->hi.x >= v21->m_Extent.lo.x
              && v21->m_Extent.hi.y >= extent->lo.y
              && extent->hi.y >= v21->m_Extent.lo.y
              && v21->m_Extent.hi.z >= extent->lo.z
              && extent->hi.z >= v21->m_Extent.lo.z
              && !v21->m_bShouldBeDestroyed )
            {
              if ( !func->m_bCheckForDuplicates )
              {
                m_Size = func->m_Areas.m_Size;
LABEL_48:
                v25 = m_Size;
                if ( func->m_Areas.m_Memory.m_nAllocationCount == m_Size )
                {
                  CUtlMemory<CNavArea *,int>::Grow(&func->m_Areas.m_Memory, 1);
                  v25 = func->m_Areas.m_Size;
                }
                func->m_Areas.m_Size = v25 + 1;
                v26 = &func->m_Areas.m_Memory.m_pMemory[m_Size];
                if ( v26 != 0 )
                  *v26 = v21;
                goto LABEL_36;
              }
              v27 = func->m_Areas.m_Size;
              m_Size = v27;
              if ( v27 <= 0 )
                goto LABEL_48;
              m_pMemory = func->m_Areas.m_Memory.m_pMemory;
              if ( v21 != *m_pMemory )
              {
                v29 = m_pMemory + 1;
                v30 = 0;
                while ( ++v30 != v27 )
                {
                  if ( v21 == *v29++ )
                  {
                    if ( v30 >= 0 )
                      goto LABEL_36;
                    goto LABEL_48;
                  }
                }
                goto LABEL_48;
              }
            }
          }
LABEL_36:
          v20 += 8LL;
          if ( v20 == v40 )
            goto LABEL_37;
        }
      }
LABEL_39:
      if ( CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::__executeCount <= 9 )
      {
        ++CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(NavAreaCollector &,Extent const&)::__executeCount;
        Warning("** Walked off of the CNavMesh::m_grid in ForAllAreasOverlappingExtent()\n");
      }
    }
  }
LABEL_41:
  if ( VProf_869 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return 1;
}


// CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>  (line 867, @0x0000000002f08f00, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, CVProfScope, ClearAll, GetExtent, IsBitSet, IsEnabled, IsMarked, IsOverlapping, Set, SetMark, WorldToGridX, WorldToGridY, memset, operator(), operator=, operator[], ~CVProfScope
// calls: memset, CVProfile::ExitScope, CNavObstructionManager::CheckAreaFloor, CVProfile::EnterScope, Warning, __cxa_guard_acquire, RandomInt, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavObstructionManager::UpdateOnBreakableBreak
// strings: "NextBot", "CNavMesh::ForAllAreasOverlappingExtent", "** Walked off of the CNavMesh::m_grid in ForAllAreasOverlappingExtent()\n"
// globals: `guard variable for'CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker, CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker, CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::__executeCount
bool __fastcall CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(
        CNavMesh *const this,
        CheckAreaFloors *const func,
        const Extent *const extent)
{
  int m_enabled; // r8d
  float m_flGridMinX; // xmm2_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // eax
  int v8; // edi
  int v9; // edx
  int v10; // edi
  int v11; // edx
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // eax
  int v14; // edi
  int v15; // edx
  int v16; // edi
  int v17; // edx
  int v18; // eax
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v19; // r12
  unsigned __int64 v20; // rbx
  __int64 v21; // r13
  CNavArea *v22; // rsi
  int m_nIndex; // ecx
  float v24; // xmm0_4
  int y; // [rsp+8h] [rbp-8058h]
  int v27; // [rsp+Ch] [rbp-8054h]
  bool VProf_869; // [rsp+1Bh] [rbp-8045h]
  int v30; // [rsp+1Ch] [rbp-8044h]
  int x; // [rsp+28h] [rbp-8038h]
  int y_0; // [rsp+2Ch] [rbp-8034h]
  CNavAreaMarker navAreaMarker; // [rsp+30h] [rbp-8030h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_869 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CNavMesh::ForAllAreasOverlappingExtent", 0, "NextBot", 0, 4);
  memset(&navAreaMarker, 0, sizeof(navAreaMarker));
  if ( this->m_Grid.m_Size != 0 )
  {
    if ( `guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker == 0
      && __cxa_guard_acquire(&`guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker) != 0 )
    {
      CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker = RandomInt(0, 0x100000);
      __cxa_guard_release(&`guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker);
    }
    if ( CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker == -1 )
      CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker = 1;
    else
      ++CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::nSearchMarker;
    m_flGridMinX = this->m_flGridMinX;
    m_flGridCellSize = this->m_flGridCellSize;
    m_nGridSizeX = this->m_nGridSizeX;
    v8 = ((extent->lo.x - m_flGridMinX) / m_flGridCellSize);
    if ( v8 < 0 )
    {
      x = 0;
    }
    else
    {
      v9 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v8 )
        v9 = ((extent->lo.x - m_flGridMinX) / m_flGridCellSize);
      x = v9;
    }
    v10 = ((extent->hi.x - m_flGridMinX) / m_flGridCellSize);
    if ( v10 < 0 )
    {
      v27 = 0;
    }
    else
    {
      v11 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v10 )
        v11 = ((extent->hi.x - m_flGridMinX) / m_flGridCellSize);
      v27 = v11;
    }
    m_flGridMinY = this->m_flGridMinY;
    m_nGridSizeY = this->m_nGridSizeY;
    v14 = ((extent->lo.y - m_flGridMinY) / m_flGridCellSize);
    if ( v14 < 0 )
    {
      y = 0;
    }
    else
    {
      v15 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v14 )
        v15 = ((extent->lo.y - m_flGridMinY) / m_flGridCellSize);
      y = v15;
    }
    v16 = ((extent->hi.y - m_flGridMinY) / m_flGridCellSize);
    if ( v16 < 0 )
    {
      v30 = 0;
    }
    else
    {
      v17 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v16 )
        v17 = ((extent->hi.y - m_flGridMinY) / m_flGridCellSize);
      v30 = v17;
    }
    while ( x <= v27 )
    {
      if ( y <= v30 )
      {
        v18 = x + y * this->m_nGridSizeX;
        if ( v18 >= this->m_Grid.m_Size )
        {
LABEL_40:
          if ( CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::__executeCount <= 9 )
          {
            ++CNavMesh::ForAllAreasOverlappingExtent<CheckAreaFloors>(CheckAreaFloors &,Extent const&)::__executeCount;
            Warning("** Walked off of the CNavMesh::m_grid in ForAllAreasOverlappingExtent()\n");
          }
          break;
        }
        y_0 = y;
        while ( 1 )
        {
          v19 = &this->m_Grid.m_Memory.m_pMemory[v18];
          if ( v19->m_Size != 0 )
          {
            v20 = 0;
            v21 = 8LL * (v19->m_Size - 1) + 8;
            do
            {
              v22 = v19->m_Memory.m_pMemory[v20 / 8];
              m_nIndex = v22->m_nIndex;
              if ( ((1 << m_nIndex) & navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5]) == 0 )
              {
                v24 = v22->m_Extent.hi.x;
                navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5] |= 1 << m_nIndex;
                if ( v24 >= extent->lo.x
                  && extent->hi.x >= v22->m_Extent.lo.x
                  && v22->m_Extent.hi.y >= extent->lo.y
                  && extent->hi.y >= v22->m_Extent.lo.y
                  && v22->m_Extent.hi.z >= extent->lo.z
                  && extent->hi.z >= v22->m_Extent.lo.z )
                {
                  CNavObstructionManager::CheckAreaFloor(func->m_rObstructionManager, v22, func->m_pBreakable);
                }
              }
              v20 += 8LL;
            }
            while ( v20 != v21 );
          }
          if ( ++y_0 > v30 )
            break;
          v18 = x + this->m_nGridSizeX * y_0;
          if ( v18 >= this->m_Grid.m_Size )
            goto LABEL_40;
        }
      }
      ++x;
    }
  }
  if ( VProf_869 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return 1;
}


// CNavMesh::ForAllAreasOverlappingExtent<std::function<bool(CNavArea*)> >  (line 867, @0x0000000002f09a20, libserver.so)  // inlines: Add, BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CMicroProfilerGuard, CMicroProfilerSample, CNavAreaMarker, CVProfScope, ClearAll, EnterScope, GetElapsed, GetExtent, GetTimebaseRegister, InTargetThread, IsBitSet, IsEnabled, IsMarked, IsOverlapping, PLAT_CPU_TIME, Set, SetMark, WorldToGridX, WorldToGridY, memset, operator=, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: memset, CVProfile::ExitScope, std::function<bool(CNavArea*)>::operator(), ThreadGetCurrentId, __cxa_guard_acquire, RandomInt, __cxa_guard_release, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), Warning, _Unwind_Resume, __cxa_guard_abort
// callers: CNavObstructionManager::UpdateObstacle
// strings: "CNavMesh::ForAllAreasOverlappingExtent", "NextBot", "** Walked off of the CNavMesh::m_grid in ForAllAreasOverlappingExtent()\n"
// globals: `guard variable for'CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarke, CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker, CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::__executeCount
bool __fastcall CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(
        CNavMesh *const this,
        std::function<bool(CNavArea*)> *const func,
        const Extent *const extent)
{
  int m_enabled; // r13d
  float m_flGridMinX; // xmm2_4
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // eax
  int v8; // edi
  int v9; // edx
  int v10; // edi
  int v11; // edx
  float m_flGridMinY; // xmm2_4
  int m_nGridSizeY; // eax
  int v14; // edi
  int v15; // edx
  int v16; // edi
  int v17; // edx
  int v18; // eax
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v19; // r12
  unsigned __int64 v20; // rbx
  __int64 v21; // r13
  CNavArea *v22; // rsi
  int m_nIndex; // ecx
  float v24; // xmm0_4
  bool result; // al
  unsigned __int64 v26; // rbx
  ThreadId_t m_TargetThreadId; // r12
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v30; // rax
  int y; // [rsp+8h] [rbp-8058h]
  int v32; // [rsp+Ch] [rbp-8054h]
  bool VProf_869; // [rsp+1Bh] [rbp-8045h]
  int v35; // [rsp+1Ch] [rbp-8044h]
  int x; // [rsp+20h] [rbp-8040h]
  int y_0; // [rsp+24h] [rbp-803Ch]
  bool thisb; // [rsp+28h] [rbp-8038h]
  CNavAreaMarker navAreaMarker; // [rsp+30h] [rbp-8030h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_869 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v26 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CNavMesh::ForAllAreasOverlappingExtent" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CNavMesh::ForAllAreasOverlappingExtent",
                       0,
                       "NextBot",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v30 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v30->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v26 + __rdtsc();
  }
  memset(&navAreaMarker, 0, sizeof(navAreaMarker));
  if ( this->m_Grid.m_Size != 0 )
  {
    if ( `guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker == 0
      && __cxa_guard_acquire(&`guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker) != 0 )
    {
      CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker = RandomInt(0, 0x100000);
      __cxa_guard_release(&`guard variable for'bool CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker);
    }
    if ( CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker == -1 )
      CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker = 1;
    else
      ++CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::nSearchMarker;
    m_flGridMinX = this->m_flGridMinX;
    m_flGridCellSize = this->m_flGridCellSize;
    m_nGridSizeX = this->m_nGridSizeX;
    v8 = ((extent->lo.x - m_flGridMinX) / m_flGridCellSize);
    if ( v8 < 0 )
    {
      x = 0;
    }
    else
    {
      v9 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v8 )
        v9 = ((extent->lo.x - m_flGridMinX) / m_flGridCellSize);
      x = v9;
    }
    v10 = ((extent->hi.x - m_flGridMinX) / m_flGridCellSize);
    if ( v10 < 0 )
    {
      v32 = 0;
    }
    else
    {
      v11 = m_nGridSizeX - 1;
      if ( m_nGridSizeX > v10 )
        v11 = ((extent->hi.x - m_flGridMinX) / m_flGridCellSize);
      v32 = v11;
    }
    m_flGridMinY = this->m_flGridMinY;
    m_nGridSizeY = this->m_nGridSizeY;
    v14 = ((extent->lo.y - m_flGridMinY) / m_flGridCellSize);
    if ( v14 < 0 )
    {
      y = 0;
    }
    else
    {
      v15 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v14 )
        v15 = ((extent->lo.y - m_flGridMinY) / m_flGridCellSize);
      y = v15;
    }
    v16 = ((extent->hi.y - m_flGridMinY) / m_flGridCellSize);
    if ( v16 < 0 )
    {
      v35 = 0;
    }
    else
    {
      v17 = m_nGridSizeY - 1;
      if ( m_nGridSizeY > v16 )
        v17 = ((extent->hi.y - m_flGridMinY) / m_flGridCellSize);
      v35 = v17;
    }
    while ( x <= v32 )
    {
      if ( y <= v35 )
      {
        v18 = x + y * this->m_nGridSizeX;
        if ( v18 >= this->m_Grid.m_Size )
        {
LABEL_38:
          if ( CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::__executeCount <= 9 )
          {
            ++CNavMesh::ForAllAreasOverlappingExtent<std::function<bool ()(CNavArea *)>>(std::function<bool ()(CNavArea *)> &,Extent const&)::__executeCount;
            Warning("** Walked off of the CNavMesh::m_grid in ForAllAreasOverlappingExtent()\n");
          }
          break;
        }
        y_0 = y;
        while ( 1 )
        {
          v19 = &this->m_Grid.m_Memory.m_pMemory[v18];
          if ( v19->m_Size != 0 )
            break;
LABEL_36:
          if ( ++y_0 > v35 )
            goto LABEL_55;
          v18 = x + this->m_nGridSizeX * y_0;
          if ( v18 >= this->m_Grid.m_Size )
            goto LABEL_38;
        }
        v20 = 0;
        v21 = 8LL * (v19->m_Size - 1) + 8;
        while ( 1 )
        {
          v22 = v19->m_Memory.m_pMemory[v20 / 8];
          m_nIndex = v22->m_nIndex;
          if ( ((1 << m_nIndex) & navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5]) == 0 )
          {
            v24 = v22->m_Extent.hi.x;
            navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5] |= 1 << m_nIndex;
            if ( v24 >= extent->lo.x
              && extent->hi.x >= v22->m_Extent.lo.x
              && v22->m_Extent.hi.y >= extent->lo.y
              && extent->hi.y >= v22->m_Extent.lo.y
              && v22->m_Extent.hi.z >= extent->lo.z
              && extent->hi.z >= v22->m_Extent.lo.z )
            {
              result = std::function<bool ()(CNavArea *)>::operator()(func, v22);
              if ( !result )
                goto LABEL_41;
            }
          }
          v20 += 8LL;
          if ( v20 == v21 )
            goto LABEL_36;
        }
      }
LABEL_55:
      ++x;
    }
  }
  result = 1;
LABEL_41:
  if ( VProf_869 )
  {
    thisb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return thisb;
  }
  return result;
}


// CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>  (line 935, @0x00000000031fc730, libserver.so)  // inlines: AddToTail, BitVec_IsBitSet, Bitvec_Set, CBitVec, CBitVecT, CNavAreaMarker, ClearAll, CopyConstruct<CNavArea*>, Element, GrowMemory, HasElement, IsBitSet, IsMarked, Set, SetMark, WorldToGridX, WorldToGridY, memset, operator(), operator[]
// calls: __cxa_guard_acquire, memset, ceilf, CNavPoly::IsOverlappingSphere, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlMemory<CNavArea*, int>::Grow, RandomInt, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavMesh::GetNavAreasIntersectingSphere
// globals: `guard variable for'CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker, CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker
__int64 __fastcall CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(
        CNavMesh *const this,
        NavAreaCollectorExternal *const func,
        const Vector *const vPos,
        float flRadius)
{
  float m_flGridCellSize; // xmm1_4
  int m_nGridSizeX; // edx
  int v6; // r14d
  int m_nGridSizeY; // edx
  int v8; // ebx
  int v9; // edx
  float v10; // xmm1_4
  int v11; // r12d
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // r12
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v15; // r13
  CNavArea *v16; // rbx
  int m_nIndex; // ecx
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *m_rAreas; // rcx
  __int64 m_Size; // rax
  int v20; // esi
  CNavArea **v21; // rax
  int v23; // eax
  int v24; // [rsp+4h] [rbp-808Ch]
  int v25; // [rsp+10h] [rbp-8080h]
  int v26; // [rsp+14h] [rbp-807Ch]
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v27; // [rsp+18h] [rbp-8078h]
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > *v28; // [rsp+18h] [rbp-8078h]
  int y; // [rsp+28h] [rbp-8068h]
  int x; // [rsp+2Ch] [rbp-8064h]
  int v33; // [rsp+40h] [rbp-8050h]
  CNavArea *v36; // [rsp+58h] [rbp-8038h] BYREF
  CNavAreaMarker navAreaMarker; // [rsp+60h] [rbp-8030h] BYREF

  if ( `guard variable for'bool CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker == 0
    && __cxa_guard_acquire(&`guard variable for'bool CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker) != 0 )
  {
    CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker = RandomInt(0, 0x100000);
    __cxa_guard_release(&`guard variable for'bool CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker);
  }
  memset(&navAreaMarker, 0, sizeof(navAreaMarker));
  if ( CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker == -1 )
    CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker = 1;
  else
    ++CNavMesh::ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &,Vector const&,float)::nSearchMarker;
  m_flGridCellSize = this->m_flGridCellSize;
  m_nGridSizeX = this->m_nGridSizeX;
  v6 = ((vPos->x - this->m_flGridMinX) / m_flGridCellSize);
  if ( v6 < 0 )
  {
    v6 = 0;
  }
  else if ( m_nGridSizeX <= v6 )
  {
    v6 = m_nGridSizeX - 1;
  }
  m_nGridSizeY = this->m_nGridSizeY;
  v8 = ((vPos->y - this->m_flGridMinY) / m_flGridCellSize);
  if ( v8 < 0 )
  {
    v8 = 0;
  }
  else if ( m_nGridSizeY <= v8 )
  {
    v8 = m_nGridSizeY - 1;
  }
  v9 = ceilf(flRadius / m_flGridCellSize);
  x = v6 - v9;
  v26 = v9 + v6;
  if ( v9 + v6 >= v6 - v9 )
  {
    v25 = v8 - v9;
    v33 = v9 + v8;
    while ( x < 0 || this->m_nGridSizeX <= x || v25 > v33 )
    {
LABEL_32:
      if ( v26 < ++x )
        return 1;
    }
    v11 = v25;
LABEL_19:
    while ( 1 )
    {
      if ( v11 >= 0 && v11 < this->m_nGridSizeY )
      {
        v12 = &this->m_Grid.m_Memory.m_pMemory[x + v11 * this->m_nGridSizeX];
        if ( v12->m_Size != 0 )
          break;
      }
      if ( ++v11 > v33 )
        goto LABEL_32;
    }
    y = v11;
    v13 = 8LL * (v12->m_Size - 1) + 8;
    v14 = 0;
    v15 = v12;
    while ( 1 )
    {
      v16 = v15->m_Memory.m_pMemory[v14 / 8];
      m_nIndex = v16->m_nIndex;
      if ( ((1 << m_nIndex) & navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5]) != 0 )
        goto LABEL_23;
      navAreaMarker.m_MarkedAreas.m_Ints[m_nIndex >> 5] |= 1 << m_nIndex;
      if ( !CNavPoly::IsOverlappingSphere(v16, vPos, v10) )
        goto LABEL_23;
      v36 = v16;
      m_rAreas = func->m_rAreas;
      if ( func->m_bCheckForDuplicates )
      {
        v27 = func->m_rAreas;
        v23 = CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(v27, &v36);
        m_rAreas = v27;
        if ( v23 >= 0 )
          goto LABEL_23;
        m_Size = v27->m_Size;
        if ( m_Size == v27->m_Memory.m_nAllocationCount )
        {
LABEL_36:
          v24 = m_Size;
          v28 = m_rAreas;
          CUtlMemory<CNavArea *,int>::Grow(&m_rAreas->m_Memory, 1);
          m_rAreas = v28;
          m_Size = v24;
          v20 = v28->m_Size;
          goto LABEL_29;
        }
      }
      else
      {
        m_Size = m_rAreas->m_Size;
        if ( m_Size == m_rAreas->m_Memory.m_nAllocationCount )
          goto LABEL_36;
      }
      v20 = m_Size;
LABEL_29:
      m_rAreas->m_Size = v20 + 1;
      v21 = &m_rAreas->m_Memory.m_pMemory[m_Size];
      if ( v21 != 0 )
      {
        v14 += 8LL;
        *v21 = v16;
        if ( v14 == v13 )
        {
LABEL_31:
          v11 = y + 1;
          if ( y + 1 > v33 )
            goto LABEL_32;
          goto LABEL_19;
        }
      }
      else
      {
LABEL_23:
        v14 += 8LL;
        if ( v14 == v13 )
          goto LABEL_31;
      }
    }
  }
  return 1;
}


// CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>  (line 1050, @0x0000000002edc030, libserver.so)  // inlines: GetCorner, GetVert, NavDirOpposite, NavHullAny, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator(), operator*, operator+, operator-
// calls: VectorNormalize, CNavPoly::GetZ, TestStitchConnection, CNavArea::ConnectTo, NavHull_t::NavHull_t, CNavMesh::GetNavArea, CNavGeneratorAAQuad::AreaHasNodes, FindJumpDownArea
// callers: CNavGeneratorAAQuad::ConnectGeneratedAreas, CNavGeneratorAAQuad::StitchGeneratedAreas
void __fastcall CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas(void)::IncrementallyGeneratedAreas>(
        CNavMesh *const this,
        CNavArea *const rArea,
        const CNavGeneratorAAQuad *const *dir,
        CNavGeneratorAAQuad::StitchGeneratedAreas::IncrementallyGeneratedAreas *const func,
        float a5,
        float a6)
{
  int v6; // r13d
  float v8; // xmm1_4
  float v9; // xmm2_4
  const CNavArea *NavArea; // rax
  CNavArea *v11; // rbx
  float v12; // xmm2_4
  CNavArea *JumpDownArea; // rax
  CNavArea *v14; // rbx
  float v16; // [rsp+1Ch] [rbp-A4h]
  int m_nAllocationCount; // [rsp+20h] [rbp-A0h]
  int m_pMemory_high; // [rsp+24h] [rbp-9Ch]
  float v19; // [rsp+38h] [rbp-88h]
  float n; // [rsp+3Ch] [rbp-84h]
  Vector vEdgeDir; // [rsp+40h] [rbp-80h] BYREF
  Vector vSourcePos; // [rsp+50h] [rbp-70h] BYREF
  Vector vTargetPos; // [rsp+60h] [rbp-60h] BYREF
  NavHull_t navHull; // [rsp+70h] [rbp-50h]
  unsigned int nBackEdge; // [rsp+80h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+84h] [rbp-3Ch]
  float v27; // [rsp+88h] [rbp-38h]
  NavHull_t v28; // 0:rdx.8,8:xmm0_4.4

  v6 = rArea;
  if ( rArea == 1 )
  {
    m_pMemory_high = SHIDWORD(this->m_NavAreas.m_Memory.m_pMemory);
    m_nAllocationCount = this->m_NavAreas.m_Memory.m_nAllocationCount;
    a6 = *&this->m_nVisMask;
    v16 = *&this->m_NavAreas.m_Memory.m_nGrowSize;
    a5 = *(&this->m_nVisMask + 1);
  }
  else if ( rArea <= 1 )
  {
    if ( rArea == 0 )
    {
      m_pMemory_high = this->m_NavAreas.m_Size;
      m_nAllocationCount = *(&this->m_NavAreas.m_Size + 1);
      a6 = *(&this->m_NavAreas.m_Memory.m_pMemory + 1);
      v16 = *&this->m_NavAreas.m_Memory.m_pMemory;
      a5 = *&this->m_NavAreas.m_Memory.m_nAllocationCount;
    }
  }
  else if ( rArea == 2 )
  {
    m_pMemory_high = SHIDWORD(this->m_pEditor);
    m_nAllocationCount = this->m_pObstructionManager;
    a6 = *&this->m_nVisMask;
    v16 = *(&this->m_pObstructionManager + 1);
    a5 = *(&this->m_nVisMask + 1);
  }
  else if ( rArea == 3 )
  {
    m_pMemory_high = this->m_NavAreas.m_Size;
    a6 = *(&this->m_pEditor + 1);
    m_nAllocationCount = *(&this->m_NavAreas.m_Size + 1);
    a5 = *&this->m_pObstructionManager;
    v16 = *&this->m_NavAreas.m_Memory.m_pMemory;
  }
  vEdgeDir.x = a6 - *&m_pMemory_high;
  vEdgeDir.y = a5 - *&m_nAllocationCount;
  vEdgeDir.z = 0.0;
  n = 0.0;
  v19 = VectorNormalize(&vEdgeDir) - 1.0;
  if ( v19 > 0.0 )
  {
    do
    {
      v8 = (vEdgeDir.x * (n + 0.5)) + *&m_pMemory_high;
      v9 = (vEdgeDir.y * (n + 0.5)) + *&m_nAllocationCount;
      vSourcePos.x = v8;
      vSourcePos.y = v9;
      vSourcePos.z = (((n + 0.5) * vEdgeDir.z) + v16) + 35.5;
      vTargetPos = vSourcePos;
      if ( v6 == 1 )
      {
        vTargetPos.x = (0.5 * CNavGeneratorBase::sm_flGenerationStepSize) + v8;
      }
      else if ( v6 <= 1 )
      {
        if ( v6 == 0 )
        {
          v9 = v9 - (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
          vTargetPos.y = v9;
        }
      }
      else if ( v6 == 2 )
      {
        vTargetPos.y = (0.5 * CNavGeneratorBase::sm_flGenerationStepSize) + v9;
      }
      else if ( v6 == 3 )
      {
        vTargetPos.x = v8 - (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
      }
      NavHull_t::NavHull_t(&nBackEdge, -1.0, v9, 7u);
      v28.m_flHullHeight = v27;
      *&navHull.m_hullCategory = __PAIR64__(v26, nBackEdge);
      *&v28.m_hullCategory = __PAIR64__(v26, nBackEdge);
      navHull.m_flHullHeight = v27;
      NavArea = CNavMesh::GetNavArea(TheNavMesh, &vTargetPos, v28, 2, 120.0, 5.0, 0);
      v11 = NavArea;
      if ( NavArea != 0 && !CNavGeneratorAAQuad::AreaHasNodes(*dir, NavArea) )
      {
        vTargetPos.z = CNavPoly::GetZ(v11, vTargetPos.y, v12) + 35.5;
        if ( TestStitchConnection(this, v11, &vSourcePos, &vTargetPos) )
          CNavArea::ConnectTo(this, v11, v6, -1, 1);
        if ( TestStitchConnection(v11, this, &vTargetPos, &vSourcePos) )
          CNavArea::ConnectTo(v11, this, (v6 + 2) % 4, -1, 1);
      }
      else
      {
        vSourcePos.z = (vSourcePos.z - 35.5) + 1.0;
        JumpDownArea = FindJumpDownArea(&vSourcePos, this, v6, &nBackEdge);
        v14 = JumpDownArea;
        if ( this != JumpDownArea && JumpDownArea != 0 && !CNavGeneratorAAQuad::AreaHasNodes(*dir, JumpDownArea) )
          CNavArea::ConnectTo(this, v14, v6, nBackEdge, 1);
      }
      n = n + CNavGeneratorBase::sm_flGenerationStepSize;
    }
    while ( v19 > n );
  }
}


// CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>  (line 1050, @0x00000000031f8590, libserver.so)  // inlines: GetCorner, GetVert, HasElement, NavDirOpposite, NavHullAny, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator(), operator*, operator+, operator-
// calls: VectorNormalize, NavHull_t::NavHull_t, CNavMesh::GetNavArea, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, FindJumpDownArea, CNavArea::ConnectTo, CNavPoly::GetZ, TestStitchConnection
// callers: CNavMesh::StitchAreaSet
// globals: TheNavMesh
void __fastcall CNavMesh::StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea *,CUtlMemory<CNavArea *,int>> *)::CAreaSet>(
        CNavMesh *const this,
        CNavArea *const rArea,
        const CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> > *const *dir,
        CNavMesh::StitchAreaSet::CAreaSet *const func,
        float a5,
        float a6)
{
  int v6; // r12d
  CNavArea *NavArea; // rax
  CNavArea *v9; // r15
  float v10; // xmm2_4
  CNavArea *JumpDownArea; // rax
  float v12; // xmm1_4
  float v13; // xmm2_4
  CNavArea *pDownArea; // [rsp+8h] [rbp-D8h]
  float v16; // [rsp+28h] [rbp-B8h]
  int m_nAllocationCount; // [rsp+30h] [rbp-B0h]
  int m_pMemory_high; // [rsp+34h] [rbp-ACh]
  float v19; // [rsp+48h] [rbp-98h]
  float n; // [rsp+4Ch] [rbp-94h]
  CNavArea *v21; // [rsp+50h] [rbp-90h] BYREF
  CNavArea *v22; // [rsp+58h] [rbp-88h] BYREF
  Vector vEdgeDir; // [rsp+60h] [rbp-80h] BYREF
  Vector vSourcePos; // [rsp+70h] [rbp-70h] BYREF
  Vector vTargetPos; // [rsp+80h] [rbp-60h] BYREF
  NavHull_t navHull; // [rsp+90h] [rbp-50h]
  unsigned int nBackEdge; // [rsp+A0h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+A4h] [rbp-3Ch]
  float v29; // [rsp+A8h] [rbp-38h]
  NavHull_t v30; // 0:rdx.8,8:xmm0_4.4

  v6 = rArea;
  if ( rArea == 1 )
  {
    m_pMemory_high = SHIDWORD(this->m_NavAreas.m_Memory.m_pMemory);
    m_nAllocationCount = this->m_NavAreas.m_Memory.m_nAllocationCount;
    a6 = *&this->m_nVisMask;
    v16 = *&this->m_NavAreas.m_Memory.m_nGrowSize;
    a5 = *(&this->m_nVisMask + 1);
  }
  else if ( rArea <= 1 )
  {
    if ( rArea == 0 )
    {
      m_pMemory_high = this->m_NavAreas.m_Size;
      m_nAllocationCount = *(&this->m_NavAreas.m_Size + 1);
      a6 = *(&this->m_NavAreas.m_Memory.m_pMemory + 1);
      v16 = *&this->m_NavAreas.m_Memory.m_pMemory;
      a5 = *&this->m_NavAreas.m_Memory.m_nAllocationCount;
    }
  }
  else if ( rArea == 2 )
  {
    m_pMemory_high = SHIDWORD(this->m_pEditor);
    m_nAllocationCount = this->m_pObstructionManager;
    a6 = *&this->m_nVisMask;
    v16 = *(&this->m_pObstructionManager + 1);
    a5 = *(&this->m_nVisMask + 1);
  }
  else if ( rArea == 3 )
  {
    m_pMemory_high = this->m_NavAreas.m_Size;
    a6 = *(&this->m_pEditor + 1);
    m_nAllocationCount = *(&this->m_NavAreas.m_Size + 1);
    a5 = *&this->m_pObstructionManager;
    v16 = *&this->m_NavAreas.m_Memory.m_pMemory;
  }
  vEdgeDir.x = a6 - *&m_pMemory_high;
  vEdgeDir.y = a5 - *&m_nAllocationCount;
  vEdgeDir.z = 0.0;
  n = 0.0;
  v19 = VectorNormalize(&vEdgeDir) - 1.0;
  if ( v19 > 0.0 )
  {
    do
    {
      v12 = (vEdgeDir.x * (n + 0.5)) + *&m_pMemory_high;
      v13 = (vEdgeDir.y * (n + 0.5)) + *&m_nAllocationCount;
      vSourcePos.x = v12;
      vSourcePos.y = v13;
      vSourcePos.z = (((n + 0.5) * vEdgeDir.z) + v16) + 35.5;
      vTargetPos = vSourcePos;
      if ( v6 == 1 )
      {
        vTargetPos.x = (0.5 * CNavGeneratorBase::sm_flGenerationStepSize) + v12;
      }
      else if ( v6 > 1 )
      {
        if ( v6 == 2 )
        {
          vTargetPos.y = (0.5 * CNavGeneratorBase::sm_flGenerationStepSize) + v13;
        }
        else if ( v6 == 3 )
        {
          vTargetPos.x = v12 - (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
        }
      }
      else if ( v6 == 0 )
      {
        v13 = v13 - (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
        vTargetPos.y = v13;
      }
      NavHull_t::NavHull_t(&nBackEdge, -1.0, v13, 7u);
      *&navHull.m_hullCategory = __PAIR64__(v28, nBackEdge);
      v30.m_flHullHeight = v29;
      *&v30.m_hullCategory = __PAIR64__(v28, nBackEdge);
      navHull.m_flHullHeight = v29;
      NavArea = CNavMesh::GetNavArea(TheNavMesh, &vTargetPos, v30, 2, 0, 120.0, 0x40A00000u);
      v9 = NavArea;
      if ( NavArea != 0 && (v21 = NavArea, CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(*dir, &v21) < 0) )
      {
        vTargetPos.z = CNavPoly::GetZ(v9, vTargetPos.y, v10) + 35.5;
        if ( TestStitchConnection(this, v9, &vSourcePos, &vTargetPos) )
          CNavArea::ConnectTo(this, v9, v6, -1, 1);
        if ( TestStitchConnection(v9, this, &vTargetPos, &vSourcePos) )
          CNavArea::ConnectTo(v9, this, (v6 + 2) % 4, -1, 1);
      }
      else
      {
        vSourcePos.z = (vSourcePos.z - 35.5) + 1.0;
        JumpDownArea = FindJumpDownArea(&vSourcePos, this, v6, &nBackEdge);
        if ( this != JumpDownArea && JumpDownArea != 0 )
        {
          v22 = JumpDownArea;
          pDownArea = JumpDownArea;
          if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(*dir, &v22) < 0 )
            CNavArea::ConnectTo(this, pDownArea, v6, nBackEdge, 1);
        }
      }
      n = n + CNavGeneratorBase::sm_flGenerationStepSize;
    }
    while ( v19 > n );
  }
}


