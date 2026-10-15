
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_fow_viewer1dz.cpp  (line 0, @0x0000000001a6eb40, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_fow_viewer1dz_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CFoW_Viewer1DZ::CFoW_Viewer1DZ  (line 18, @0x000000000325cf30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CFoW_Viewer::CFoW_Viewer
void __fastcall CFoW_Viewer1DZ::CFoW_Viewer1DZ(CFoW_Viewer1DZ *const this)
{
  this->m_ZBuffer.m_Size = 0;
  this->m_ZBuffer.m_Memory.m_pMemory = 0;
  this->m_ZBuffer.m_Memory.m_nAllocationCount = 0;
  this->m_ZBuffer.m_Memory.m_nGrowSize = 0;
  this->m_pCircleInfo = 0;
  this->m_nHeightGroup = 0;
  this->m_ViewerOccluderMask = 0;
}


// CFoW_Viewer1DZ::~CFoW_Viewer1DZ  (line 27, @0x000000000325cf70, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<short unsigned int, int>::Purge
// callers: CFoW_Viewer::~CFoW_Viewer
void __fastcall CFoW_Viewer1DZ::~CFoW_Viewer1DZ(CFoW_Viewer1DZ *const this)
{
  bool v2; // zf
  CUtlMemory<short unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_ZBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pCircleInfo = 0;
  this->m_ZBuffer.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_ZBuffer.m_Memory;
    CUtlMemory<unsigned short,int>::Purge(&this->m_ZBuffer.m_Memory);
    if ( (this->m_ZBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(p_m_Memory);
  }
}


// CFoW_Viewer1DZ::UpdateSize  (line 39, @0x000000000325e440, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore
// calls: CFoW_1DZ::FindCircleInfo, CUtlMemory<short unsigned int, int>::Grow
// callers: CFoW_Viewer::UpdateSize
void __fastcall CFoW_Viewer1DZ::UpdateSize(
        CFoW_Viewer1DZ *const this,
        CFoW_Viewer *const Viewer,
        double a3,
        double flRadius)
{
  CFoW *m_pFoW; // rsi
  CUtlMap<float,CFoW_1DZ::CIRCLEINFO*,short unsigned int,bool (*)(float const&,float const&)>::ElemType_t CircleInfo; // rax
  int TileCount; // r12d
  int m_nAllocationCount; // eax

  m_pFoW = Viewer->m_pFoW;
  if ( *&a3 > 0.0 )
  {
    CircleInfo = CFoW_1DZ::FindCircleInfo(m_pFoW->m_pFoW1DZ, m_pFoW, a3, flRadius);
    this->m_pCircleInfo = CircleInfo;
    TileCount = CircleInfo->TileCount;
    if ( TileCount > this->m_ZBuffer.m_Size )
    {
      m_nAllocationCount = this->m_ZBuffer.m_Memory.m_nAllocationCount;
      if ( TileCount > m_nAllocationCount )
        CUtlMemory<unsigned short,int>::Grow(&this->m_ZBuffer.m_Memory, TileCount - m_nAllocationCount);
      this->m_ZBuffer.m_Size = TileCount;
    }
  }
}


// CFoW_Viewer1DZ::UpdateLocation  (line 51, @0x000000000325cfd0, libserver.so)
// calls: CFoW::GetHeightGroup
// callers: CFoW_Viewer::UpdateLocation, CFoW_Viewer::UpdateHeightGroup, CFoW_Viewer1DZ::UpdateViewerOccludeMode
void __fastcall CFoW_Viewer1DZ::UpdateLocation(CFoW_Viewer1DZ *const this, CFoW_Viewer *const Viewer)
{
  CFoW *m_pFoW; // r14
  signed int m_nGridX; // r13d
  signed int m_nGridY; // r12d
  int m_nGridXUnits; // eax
  int m_nGridYUnits; // eax
  uint8 HeightGroup; // al

  m_pFoW = Viewer->m_pFoW;
  m_nGridX = Viewer->m_nGridX;
  m_nGridY = Viewer->m_nGridY;
  if ( Viewer->m_OccludeMode != FoWOccluderMode_t::FOW_OCCLUDE_MODE_NONE )
  {
    HeightGroup = CFoW::GetHeightGroup(m_pFoW, m_nGridX, m_nGridY);
    this->m_ViewerOccluderMask = -1;
    this->m_nHeightGroup = HeightGroup;
  }
  else
  {
    this->m_nHeightGroup = 31;
    this->m_ViewerOccluderMask = 0;
  }
  this->m_TemplateX0 = -2;
  this->m_TemplateX1 = 2;
  this->m_TemplateY0 = -2;
  this->m_TemplateY1 = 2;
  if ( m_nGridX <= 1 )
    this->m_TemplateX0 = -m_nGridX;
  if ( m_nGridY <= 1 )
    this->m_TemplateY0 = -m_nGridY;
  m_nGridXUnits = m_pFoW->m_nGridXUnits;
  if ( m_nGridX + 2 >= m_nGridXUnits - 1 )
    this->m_TemplateX1 = m_nGridXUnits - m_nGridX - 1;
  m_nGridYUnits = m_pFoW->m_nGridYUnits;
  if ( m_nGridY + 2 >= m_nGridYUnits - 1 )
    this->m_TemplateY1 = m_nGridYUnits - m_nGridY - 1;
}


// CFoW_Viewer1DZ::UpdateViewerOccludeMode  (line 112, @0x000000000325d0a0, libserver.so)
// calls: CFoW_Viewer1DZ::UpdateLocation
// callers: CFoW_Viewer::UpdateViewerOccludeMode
void __fastcall CFoW_Viewer1DZ::UpdateViewerOccludeMode(CFoW_Viewer1DZ *const this, CFoW_Viewer *const Viewer)
{
  CFoW_Viewer1DZ::UpdateLocation(this, Viewer);
}


// CFoW_Viewer1DZ::GetOccluderType  (line 118, @0x000000000325d0b0, libserver.so)  // inlines: GetOccluderBitMask, operator[]
// callers: CFoW_Viewer1DZ::CalcLocalizedVisibility
uint32 __fastcall CFoW_Viewer1DZ::GetOccluderType(CFoW_Viewer1DZ *const this, CFoW *pFoW, int GridIndex)
{
  unsigned __int8 v3; // cl
  uint32 result; // eax
  uint32 v5; // edx
  uint32 v6; // ecx
  bool v7; // cl

  v3 = pFoW->m_TileInfo.m_Memory.m_pMemory[GridIndex];
  result = 0;
  v5 = this->m_ViewerOccluderMask & v3 & 0xE0;
  if ( v5 != 0 )
  {
    v6 = v3 & 0x1F;
    if ( (v5 & 0x80u) != 0 )
      v7 = this->m_nHeightGroup > v6 + 1;
    else
      v7 = this->m_nHeightGroup >= v6;
    result = v5;
    if ( v7 )
      return (v5 & 0x40) != 0 ? 0x20 : 0;
  }
  return result;
}


// CFoW_Viewer1DZ::CalcLocalizedVisibility  (line 153, @0x000000000325d110, libserver.so)  // inlines: operator[]
// calls: CFoW_Viewer1DZ::GetOccluderType
// callers: CFoW_Viewer::MergeViewerVisibility
void __fastcall CFoW_Viewer1DZ::CalcLocalizedVisibility(CFoW_Viewer1DZ *const this, CFoW_Viewer *const Viewer)
{
  int m_nGridX; // r10d
  CFoW_1DZ::CIRCLEINFO *m_pCircleInfo; // rax
  int m_nGridY; // edi
  int nGridUnitsRadius; // edx
  int nGridUnits; // esi
  int v8; // r10d
  int v9; // edi
  int m_nGridYUnits; // edx
  int v11; // r9d
  int v12; // r8d
  int v13; // esi
  __int64 v14; // rsi
  int v15; // edx
  int v16; // r12d
  int Start; // r14d
  CFoW_1DZ::ROWINFO *v18; // rbx
  int v19; // r13d
  char OccluderType; // al
  __int16 *v21; // rdi
  int j; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int16 *v25; // rdx
  unsigned __int16 v26; // si
  __int16 *p_TileIndex; // rdi
  int i; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int16 *v31; // rdx
  unsigned __int16 v32; // si
  int yMax; // [rsp+0h] [rbp-48h]
  int yMin; // [rsp+4h] [rbp-44h]
  unsigned __int64 v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+10h] [rbp-38h]
  CFoW *pFoW; // [rsp+18h] [rbp-30h]

  m_nGridX = Viewer->m_nGridX;
  pFoW = Viewer->m_pFoW;
  m_pCircleInfo = this->m_pCircleInfo;
  m_nGridY = Viewer->m_nGridY;
  nGridUnitsRadius = m_pCircleInfo->nGridUnitsRadius;
  nGridUnits = m_pCircleInfo->nGridUnits;
  v8 = m_nGridX - nGridUnitsRadius;
  v9 = m_nGridY - nGridUnitsRadius;
  m_nGridYUnits = pFoW->m_nGridYUnits;
  v11 = pFoW->m_nGridXUnits - v8;
  if ( v11 > nGridUnits )
    v11 = m_pCircleInfo->nGridUnits;
  if ( m_nGridYUnits - v9 <= nGridUnits )
    nGridUnits = m_nGridYUnits - v9;
  v12 = 0;
  yMax = nGridUnits;
  if ( v8 < 0 )
  {
    v12 = -v8;
    v8 = 0;
  }
  v13 = -v9;
  if ( v9 >= 0 )
    v13 = 0;
  yMin = v13;
  if ( m_pCircleInfo->TileCount > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      ++v15;
      this->m_ZBuffer.m_Memory.m_pMemory[v14++] = -1;
      m_pCircleInfo = this->m_pCircleInfo;
    }
    while ( m_pCircleInfo->TileCount > v15 );
    m_nGridYUnits = pFoW->m_nGridYUnits;
  }
  v16 = m_nGridYUnits * v8 + v9;
  if ( v12 < v11 )
  {
    v36 = 32LL * v12;
    v35 = 32 * (v12 + (v11 - 1 - v12) + 1);
    while ( 1 )
    {
      Start = yMin;
      v18 = &m_pCircleInfo->Rows.m_Memory.m_pMemory[v36 / 0x20];
      if ( v18->Start >= yMin )
        Start = v18->Start;
      v19 = v18->TileInfo.m_Size + v18->Start;
      if ( v19 > yMax )
        v19 = yMax;
      if ( Start < v19 )
      {
        do
        {
          OccluderType = CFoW_Viewer1DZ::GetOccluderType(this, pFoW, Start + v16);
          if ( OccluderType >= 0 )
          {
            if ( (OccluderType & 0x20) != 0 )
            {
              p_TileIndex = &v18->TileInfo.m_Memory.m_pMemory[Start - v18->Start].TileIndex;
              for ( i = p_TileIndex[2]; p_TileIndex[3] != i; *v31 = v32 )
              {
                if ( this->m_pCircleInfo->TileCount > i )
                {
                  v29 = i++;
                  v30 = v29;
                }
                else
                {
                  v30 = 0;
                  i = 1;
                }
                v31 = &this->m_ZBuffer.m_Memory.m_pMemory[v30];
                v32 = p_TileIndex[4];
                if ( *v31 <= v32 )
                  v32 = *v31;
              }
            }
          }
          else
          {
            v21 = &v18->TileInfo.m_Memory.m_pMemory[Start - v18->Start].TileIndex;
            for ( j = v21[5]; v21[6] != j; *v25 = v26 )
            {
              if ( this->m_pCircleInfo->TileCount > j )
              {
                v23 = j++;
                v24 = v23;
              }
              else
              {
                v24 = 0;
                j = 1;
              }
              v25 = &this->m_ZBuffer.m_Memory.m_pMemory[v24];
              v26 = v21[7];
              if ( *v25 <= v26 )
                v26 = *v25;
            }
          }
          ++Start;
        }
        while ( Start != v19 );
        m_nGridYUnits = pFoW->m_nGridYUnits;
      }
      v36 += 32;
      v16 += m_nGridYUnits;
      if ( v36 == v35 )
        break;
      m_pCircleInfo = this->m_pCircleInfo;
    }
  }
}


// CFoW_Viewer1DZ::MergeViewerVisibility  (line 224, @0x000000000325d350, libserver.so)  // inlines: VisibilityAddRef, operator[]
// callers: CFoW_Viewer::MergeViewerVisibility
// globals: g_ViewerTemplate5x5
void __fastcall CFoW_Viewer1DZ::MergeViewerVisibility(
        CFoW_Viewer1DZ *const this,
        CFoW_Viewer *const Viewer,
        bool bAddToGrid)
{
  int v3; // ebx
  unsigned int m_nViewerTeam; // edx
  CFoW *m_pFoW; // rax
  int m_nGridX; // ecx
  int m_nGridY; // esi
  CFoW_1DZ::CIRCLEINFO *m_pCircleInfo; // rdx
  int nGridUnitsRadius; // r8d
  int v10; // r15d
  int v11; // r11d
  int nGridUnits; // r8d
  int v13; // edx
  int m_nGridYUnits; // edx
  unsigned int v15; // r8d
  int v16; // r15d
  __int64 v17; // r10
  int v18; // r8d
  int v19; // r9d
  int v20; // r11d
  __int64 v21; // r10
  int v22; // esi
  int8 v23; // r13
  int v24; // ecx
  __int64 v25; // r8
  const bool *v26; // rdx
  unsigned __int16 *v27; // rsi
  int v28; // r14d
  __int64 v29; // r12
  CFoW_1DZ::ROWINFO *v30; // r8
  int v31; // ecx
  int v32; // r9d
  int v33; // r11d
  __int64 v34; // rsi
  CFoW_1DZ::TILEINFO *v35; // rdx
  __int64 v36; // rdx
  __int64 m_TemplateX0; // r9
  int m_TemplateX1; // r8d
  int v39; // r10d
  int v40; // r12d
  int m_TemplateY1; // esi
  __int64 v42; // r11
  int8 m_TemplateY0; // r13
  int v44; // r9d
  __int64 v45; // r8
  const bool *v46; // r13
  unsigned int v47; // edx
  __int64 v48; // rsi
  unsigned __int16 *v49; // r14
  int v50; // r11d
  __int64 v51; // r10
  int v52; // esi
  CFoW_1DZ::ROWINFO *v53; // r8
  int Start; // ecx
  int v55; // r13d
  __int64 v56; // rdx
  CFoW_1DZ::TILEINFO *v57; // rcx
  unsigned int v58; // ecx
  __int64 v59; // r9
  unsigned __int16 *v60; // r12
  int v61; // [rsp+0h] [rbp-44h]
  int xMin; // [rsp+4h] [rbp-40h]
  int xPos; // [rsp+8h] [rbp-3Ch]
  int yPos; // [rsp+Ch] [rbp-38h]
  unsigned int v65; // [rsp+14h] [rbp-30h]
  unsigned int v66; // [rsp+14h] [rbp-30h]
  int yMax; // [rsp+18h] [rbp-2Ch]

  v3 = !bAddToGrid ? -1 : 1;
  xMin = 0;
  m_nViewerTeam = Viewer->m_nViewerTeam;
  m_pFoW = Viewer->m_pFoW;
  m_nGridX = Viewer->m_nGridX;
  m_nGridY = Viewer->m_nGridY;
  v65 = m_nViewerTeam;
  m_pCircleInfo = this->m_pCircleInfo;
  nGridUnitsRadius = m_pCircleInfo->nGridUnitsRadius;
  v10 = m_nGridX - nGridUnitsRadius;
  v11 = m_nGridY - nGridUnitsRadius;
  nGridUnits = m_pCircleInfo->nGridUnits;
  xPos = v10;
  yPos = v11;
  v13 = m_pFoW->m_nGridXUnits - v10;
  if ( v13 > nGridUnits )
    v13 = nGridUnits;
  v61 = v13;
  m_nGridYUnits = m_pFoW->m_nGridYUnits;
  if ( m_nGridYUnits - v11 <= nGridUnits )
    nGridUnits = m_pFoW->m_nGridYUnits - v11;
  yMax = nGridUnits;
  if ( v10 < 0 )
  {
    xPos = 0;
    xMin = -v10;
  }
  v15 = 0;
  v16 = -v11;
  if ( v11 >= 0 )
    v16 = 0;
  if ( v65 == 9999 )
  {
    if ( m_pFoW->m_nNumberOfTeams > 1 )
    {
      m_TemplateX0 = this->m_TemplateX0;
      m_TemplateX1 = this->m_TemplateX1;
      v39 = m_TemplateX0;
      v40 = m_nGridY + m_nGridYUnits * (m_TemplateX0 + m_nGridX);
      if ( m_TemplateX0 <= m_TemplateX1 )
      {
        m_TemplateY1 = this->m_TemplateY1;
        v42 = m_TemplateX0 + 2;
        do
        {
          m_TemplateY0 = this->m_TemplateY0;
          v44 = m_TemplateY0;
          if ( m_TemplateY0 <= m_TemplateY1 )
          {
            v45 = v40 + m_TemplateY0;
            v46 = &g_ViewerTemplate5x5[m_TemplateY0 + 2][v42];
            do
            {
              if ( *v46 && m_pFoW->m_nNumberOfTeams != 0 )
              {
                v47 = 0;
                do
                {
                  v48 = v47++;
                  v49 = &m_pFoW->m_VisibleBits[v48].m_Memory.m_pMemory[v45];
                  *v49 += v3;
                }
                while ( m_pFoW->m_nNumberOfTeams > v47 );
                m_TemplateY1 = this->m_TemplateY1;
              }
              ++v44;
              v46 += 5;
              ++v45;
            }
            while ( m_TemplateY1 >= v44 );
            m_nGridYUnits = m_pFoW->m_nGridYUnits;
            m_TemplateX1 = this->m_TemplateX1;
          }
          ++v39;
          v40 += m_nGridYUnits;
          ++v42;
        }
        while ( m_TemplateX1 >= v39 );
      }
      v50 = yPos + m_nGridYUnits * xPos;
      if ( xMin < v61 )
      {
        v51 = xMin;
        do
        {
          v52 = v16;
          v53 = &this->m_pCircleInfo->Rows.m_Memory.m_pMemory[v51];
          Start = v53->Start;
          if ( v53->Start >= v16 )
            v52 = v53->Start;
          v55 = Start + v53->TileInfo.m_Size;
          if ( v55 > yMax )
            v55 = yMax;
          if ( v52 < v55 )
          {
            v56 = v50 + v52;
            while ( 1 )
            {
              v57 = &v53->TileInfo.m_Memory.m_pMemory[v52 - Start];
              if ( this->m_ZBuffer.m_Memory.m_pMemory[v57->TileIndex] > v57->DistanceSq && m_pFoW->m_nNumberOfTeams != 0 )
              {
                v58 = 0;
                do
                {
                  v59 = v58++;
                  v60 = &m_pFoW->m_VisibleBits[v59].m_Memory.m_pMemory[v56];
                  *v60 += v3;
                }
                while ( m_pFoW->m_nNumberOfTeams > v58 );
              }
              ++v52;
              ++v56;
              if ( v52 == v55 )
                break;
              Start = v53->Start;
            }
            m_nGridYUnits = m_pFoW->m_nGridYUnits;
          }
          ++v51;
          v50 += m_nGridYUnits;
        }
        while ( v51 != xMin + (v61 - 1 - xMin) + 1 );
      }
      return;
    }
    v66 = 0;
  }
  else
  {
    if ( v65 < m_pFoW->m_nNumberOfTeams )
      v15 = v65;
    v66 = v15;
  }
  v17 = this->m_TemplateX0;
  v18 = this->m_TemplateX1;
  v19 = v17;
  v20 = m_nGridY + m_nGridYUnits * (v17 + m_nGridX);
  if ( v17 <= v18 )
  {
    v21 = v17 + 2;
    v22 = this->m_TemplateY1;
    do
    {
      v23 = this->m_TemplateY0;
      v24 = v23;
      if ( v23 <= v22 )
      {
        v25 = v20 + v23;
        v26 = &g_ViewerTemplate5x5[v23 + 2][v21];
        do
        {
          while ( !*v26 )
          {
            ++v24;
            v26 += 5;
            ++v25;
            if ( v22 < v24 )
              goto LABEL_20;
          }
          ++v24;
          v26 += 5;
          v27 = &m_pFoW->m_VisibleBits[v66].m_Memory.m_pMemory[v25++];
          *v27 += v3;
          v22 = this->m_TemplateY1;
        }
        while ( v22 >= v24 );
LABEL_20:
        m_nGridYUnits = m_pFoW->m_nGridYUnits;
        v18 = this->m_TemplateX1;
      }
      ++v19;
      v20 += m_nGridYUnits;
      ++v21;
    }
    while ( v18 >= v19 );
  }
  v28 = yPos + m_nGridYUnits * xPos;
  if ( xMin < v61 )
  {
    v29 = xMin;
    do
    {
      v30 = &this->m_pCircleInfo->Rows.m_Memory.m_pMemory[v29];
      v31 = v16;
      v32 = v30->Start;
      if ( v30->Start >= v16 )
        v31 = v30->Start;
      v33 = v32 + v30->TileInfo.m_Size;
      if ( v33 > yMax )
        v33 = yMax;
      if ( v33 > v31 )
      {
        v34 = 2 * (v28 + v31);
        while ( 1 )
        {
          v35 = &v30->TileInfo.m_Memory.m_pMemory[v31 - v32];
          if ( this->m_ZBuffer.m_Memory.m_pMemory[v35->TileIndex] <= v35->DistanceSq )
          {
            ++v31;
            v34 += 2;
            if ( v31 == v33 )
              goto LABEL_34;
          }
          else
          {
            v36 = v34;
            ++v31;
            v34 += 2;
            *(m_pFoW->m_VisibleBits[v66].m_Memory.m_pMemory + v36) += v3;
            if ( v31 == v33 )
            {
LABEL_34:
              m_nGridYUnits = m_pFoW->m_nGridYUnits;
              break;
            }
          }
          v32 = v30->Start;
        }
      }
      ++v29;
      v28 += m_nGridYUnits;
    }
    while ( v29 != xMin + (v61 - 1 - xMin) + 1 );
  }
}


// CFoW_1DZ::ClearState  (line 337, @0x000000000325d7a0, libserver.so)  // inlines: Count, Destruct<CFoW_1DZ::ROWINFO>, Element, First, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, RemoveAll, SetLeftChild, SetRightChild, operator[], ~CIRCLEINFO, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ROWINFO
// calls: CUtlMemory<CFoW_1DZ::TILEINFO, int>::Purge, operator delete, CUtlMemory<CFoW_1DZ::ROWINFO, int>::Purge
// callers: CFoW::ClearState
void __fastcall CFoW_1DZ::ClearState(CFoW_1DZ *const this)
{
  unsigned __int16 index; // cx
  UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO*>::Node_t,short unsigned int> *m_pMemory; // rsi
  UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO*>::Node_t,short unsigned int> *v4; // rcx
  CUtlMemory<CFoW_1DZ::ROWINFO,int> *elem; // r14
  int m_nAllocationCount; // r12d
  __int64 j; // r13
  CUtlMemory<CFoW_1DZ::TILEINFO,int> *v8; // rbx
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rdx
  UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO*>::Node_t,short unsigned int> *v13; // rdi
  unsigned int i; // [rsp+1Ch] [rbp-34h]

  index = this->m_CircleInfos.m_Tree.m_LastAlloc.index;
  if ( this->m_CircleInfos.m_Tree.m_NumElements != 0 )
  {
    i = 0;
    do
    {
      if ( i < this->m_CircleInfos.m_Tree.m_Elements.m_nAllocationCount && i <= index )
      {
        m_pMemory = this->m_CircleInfos.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[i].m_Left != i )
        {
          v4 = &m_pMemory[i];
          elem = v4->m_Data.elem;
          if ( elem != 0 )
          {
            m_nAllocationCount = elem[1].m_nAllocationCount;
            for ( j = 32LL * m_nAllocationCount - 32; --m_nAllocationCount >= 0; j -= 32 )
            {
              v8 = (elem[2].m_pMemory + j);
              v9 = (v8[1].m_nGrowSize & 0xC0000000) == 0;
              v8->m_nAllocationCount = 0;
              if ( v9 )
              {
                CUtlMemory<CFoW_1DZ::TILEINFO,int>::Purge(v8 + 1);
                if ( (v8[1].m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CFoW_1DZ::TILEINFO,int>::Purge(v8 + 1);
              }
            }
            v9 = (elem[2].m_nGrowSize & 0xC0000000) == 0;
            elem[1].m_nAllocationCount = 0;
            if ( v9 )
            {
              CUtlMemory<CFoW_1DZ::ROWINFO,int>::Purge(elem + 2);
              if ( (elem[2].m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CFoW_1DZ::ROWINFO,int>::Purge(elem + 2);
            }
            operator delete(elem);
            v4 = &this->m_CircleInfos.m_Tree.m_Elements.m_pMemory[i];
          }
          v4->m_Data.elem = 0;
          index = this->m_CircleInfos.m_Tree.m_LastAlloc.index;
        }
      }
      ++i;
    }
    while ( i < this->m_CircleInfos.m_Tree.m_NumElements );
  }
  if ( index != 0xFFFF )
  {
    v10 = this->m_CircleInfos.m_Tree.m_Elements.m_nAllocationCount;
    v11 = 0;
    v12 = 0;
    if ( v10 > 0 )
    {
      do
      {
        if ( v12 < v10 && v12 <= index )
        {
          v13 = &this->m_CircleInfos.m_Tree.m_Elements.m_pMemory[v11];
          if ( v12 != v13->m_Left )
          {
            v13->m_Right = this->m_CircleInfos.m_Tree.m_FirstFree;
            this->m_CircleInfos.m_Tree.m_Elements.m_pMemory[v11].m_Left = v12;
            index = this->m_CircleInfos.m_Tree.m_LastAlloc.index;
            this->m_CircleInfos.m_Tree.m_FirstFree = v12;
          }
        }
        if ( v12 == index )
          break;
        v10 = this->m_CircleInfos.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v12 + 1) >= v10 )
          break;
        ++v12;
        ++v11;
      }
      while ( v12 != 0xFFFF );
    }
    this->m_CircleInfos.m_Tree.m_Root = -1;
    this->m_CircleInfos.m_Tree.m_NumElements = 0;
  }
}


// GetAngleToPoint  (line 381, @0x000000000325c770, libserver.so)
// calls: atan
// callers: CalculateTileInfo, CFoW_1DZ::FindCircleInfo
double __fastcall GetAngleToPoint(double a1, __m128d flX, double flY)
{
  double v3; // xmm2_8
  double result; // xmm0_8
  double v5; // xmm0_8

  if ( a1 == 0.0 )
  {
    if ( flX.m128d_f64[0] == 0.0 )
    {
      return 3.926990816987241;
    }
    else
    {
      v3 = _mm_cmplt_sd(0LL, flX).m128d_f64[0];
      *&result = ~*&v3 & 0x4012D97C7F3321D2LL | *&v3 & 0x3FF921FB54442D18LL;
    }
  }
  else if ( a1 < 0.0 )
  {
    return atan(flX.m128d_f64[0] / a1) + 3.141592653589793;
  }
  else
  {
    v5 = flX.m128d_f64[0] / a1;
    if ( flX.m128d_f64[0] < 0.0 )
      return atan(v5) + 6.283185307179586;
    else
      return atan(v5);
  }
  return result;
}


// compareTILEDESCs  (line 418, @0x000000000325c750, libserver.so)
int __fastcall compareTILEDESCs(const double *pa, const double *pb)
{
  return 2 * (*pa > *pb) - 1;
}


// CalculateTileInfo  (line 430, @0x000000000325c950, libserver.so)  // inlines: FastSqrt, SnapToFixed, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator[]
// calls: GetAngleToPoint, asin
// callers: CFoW_1DZ::FindCircleInfo
void __fastcall CalculateTileInfo(
        const CUtlVector<double,CUtlMemory<double,int> > *const SortedTiles,
        __m128 x,
        __m128d y,
        __m128 Radius,
        int16 *const IndexStart,
        int16 *const IndexEnd,
        float *const DistanceSq)
{
  __m128d v7; // xmm3
  double v8; // xmm2_8
  float v12; // xmm5_4
  __m128 v13; // xmm3
  __m128 v14; // xmm3
  __m128d v15; // xmm4
  double AngleToPoint; // xmm0_8
  double v17; // xmm6_8
  double v18; // xmm0_8
  double v19; // xmm1_8
  double v20; // xmm1_8
  double v21; // xmm1_8
  double v22; // xmm1_8
  double v23; // xmm2_8
  double v24; // xmm2_8
  double v25; // xmm2_8
  double v26; // xmm2_8
  double v27; // xmm6_8
  double v28; // xmm6_8
  unsigned __int64 v29; // rax
  double v30; // xmm2_8
  int16 v31; // ax
  int v32; // ecx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  int16 v35; // cx
  double v36; // xmm5_8
  unsigned __int64 v37; // rax
  double v38; // xmm1_8
  double v39; // xmm9_8
  unsigned __int64 v40; // rax
  double v41; // xmm2_8
  double v42; // xmm6_8
  double v43; // xmm6_8
  unsigned __int64 v44; // rax
  double v45; // xmm1_8
  int16 v46; // ax
  __int64 v47; // rsi
  double v48; // xmm7_8
  unsigned __int64 v49; // rax
  double v50; // xmm1_8
  double v51; // xmm7_8
  unsigned __int64 v52; // rax
  double v53; // xmm2_8
  float v54; // [rsp-8h] [rbp-38h]
  float v55; // [rsp-4h] [rbp-34h]
  float Radiusa; // [rsp+0h] [rbp-30h]
  double Radiusb; // [rsp+0h] [rbp-30h]

  *&v7.m128d_f64[1] = x.m128_u64[1];
  *&v8 = _mm_unpacklo_ps(Radius, Radius).m128_u64[0];
  v7.m128d_f64[0] = *x.m128_u64 * *x.m128_u64 + y.m128d_f64[0] * y.m128d_f64[0];
  v12 = _mm_movedup_pd(v7).m128d_f64[0];
  v13 = LODWORD(v12);
  *DistanceSq = v12;
  v13.m128_f32[0] = fsqrt(v12);
  v14 = _mm_unpacklo_ps(v13, v13);
  v15 = _mm_cvtps_pd(v14);
  v15.m128d_f64[0] = v15.m128d_f64[0] - 0.1;
  if ( *&v8 > v15.m128d_f64[0] )
    v8 = _mm_movedup_pd(v15).m128d_f64[0];
  v54 = *&v8;
  v55 = v14.m128_f32[0];
  Radiusa = v12;
  AngleToPoint = GetAngleToPoint(*x.m128_u64, y, v8);
  v17 = AngleToPoint;
  if ( Radiusa == 0.0 )
  {
    v18 = 0.0;
    v19 = v17 - 0.0;
    if ( v17 - 0.0 >= 0.0 )
      goto LABEL_5;
  }
  else
  {
    Radiusb = AngleToPoint;
    v18 = asin((v54 / v55));
    v17 = Radiusb;
    v19 = Radiusb - v18;
    if ( Radiusb - v18 >= 0.0 )
    {
LABEL_5:
      v20 = v19 * 360000.0 + 0.5;
      if ( v20 >= 9.223372036854776e18 )
      {
        v33 = (v20 - 9.223372036854776e18) & 1 | (((v20 - 9.223372036854776e18) ^ 0x8000000000000000LL) >> 1);
        v21 = v33 + v33;
      }
      else
      {
        v21 = v20;
      }
      v22 = v21 / 360000.0;
      v23 = v18 + v17;
      if ( v18 + v17 >= 0.0 )
        goto LABEL_8;
      goto LABEL_36;
    }
  }
  v36 = 0.5 - v19 * 360000.0;
  if ( v36 >= 9.223372036854776e18 )
    v37 = (v36 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v37 = v36;
  if ( (v37 & 0x8000000000000000LL) != 0LL )
    v38 = (v37 & 1 | (v37 >> 1)) + (v37 & 1 | (v37 >> 1));
  else
    v38 = v37;
  v23 = v18 + v17;
  v22 = -(v38 / 360000.0);
  if ( v18 + v17 >= 0.0 )
  {
LABEL_8:
    v24 = v23 * 360000.0 + 0.5;
    if ( v24 >= 9.223372036854776e18 )
    {
      v34 = (v24 - 9.223372036854776e18) & 1 | (((v24 - 9.223372036854776e18) ^ 0x8000000000000000LL) >> 1);
      v25 = v34 + v34;
    }
    else
    {
      v25 = v24;
    }
    v26 = v25 / 360000.0;
    if ( v22 >= 0.0 )
      goto LABEL_11;
LABEL_41:
    v42 = v17 + 6.283185307179586 - v18;
    if ( v42 < 0.0 )
    {
      v48 = 0.5 - v42 * 360000.0;
      if ( v48 >= 9.223372036854776e18 )
        v49 = (v48 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v49 = v48;
      if ( (v49 & 0x8000000000000000LL) != 0LL )
        v50 = (v49 & 1 | (v49 >> 1)) + (v49 & 1 | (v49 >> 1));
      else
        v50 = v49;
      v22 = -(v50 / 360000.0);
    }
    else
    {
      v43 = v42 * 360000.0 + 0.5;
      if ( v43 >= 9.223372036854776e18 )
        v44 = (v43 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v44 = v43;
      if ( (v44 & 0x8000000000000000LL) != 0LL )
        v45 = (v44 & 1 | (v44 >> 1)) + (v44 & 1 | (v44 >> 1));
      else
        v45 = v44;
      v22 = v45 / 360000.0;
    }
    goto LABEL_18;
  }
LABEL_36:
  v39 = 0.5 - v23 * 360000.0;
  if ( v39 >= 9.223372036854776e18 )
    v40 = (v39 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v40 = v39;
  if ( (v40 & 0x8000000000000000LL) != 0LL )
    v41 = (v40 & 1 | (v40 >> 1)) + (v40 & 1 | (v40 >> 1));
  else
    v41 = v40;
  v26 = -(v41 / 360000.0);
  if ( v22 < 0.0 )
    goto LABEL_41;
LABEL_11:
  if ( v26 > 6.283185307179586 )
  {
    v27 = v17 - 6.283185307179586 + v18;
    if ( v27 < 0.0 )
    {
      v51 = 0.5 - v27 * 360000.0;
      if ( v51 >= 9.223372036854776e18 )
        v52 = (v51 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v52 = v51;
      if ( (v52 & 0x8000000000000000LL) != 0LL )
        v53 = (v52 & 1 | (v52 >> 1)) + (v52 & 1 | (v52 >> 1));
      else
        v53 = v52;
      v26 = -(v53 / 360000.0);
    }
    else
    {
      v28 = v27 * 360000.0 + 0.5;
      if ( v28 < 9.223372036854776e18 )
        v29 = v28;
      else
        v29 = (v28 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      if ( (v29 & 0x8000000000000000LL) != 0LL )
        v30 = (v29 & 1 | (v29 >> 1)) + (v29 & 1 | (v29 >> 1));
      else
        v30 = v29;
      v26 = v30 / 360000.0;
    }
  }
LABEL_18:
  v31 = 0;
  *IndexStart = 0;
  if ( SortedTiles->m_Size > 0 && v22 > *SortedTiles->m_Memory.m_pMemory )
  {
    v35 = 1;
    do
    {
      *IndexStart = v35;
      v31 = v35;
      if ( v35 >= SortedTiles->m_Size )
        break;
      ++v35;
    }
    while ( v22 > SortedTiles->m_Memory.m_pMemory[v31] );
  }
  v32 = v31;
  if ( v26 < v22 )
  {
    v32 = 0;
    v31 = 0;
  }
  *IndexEnd = v31;
  if ( SortedTiles->m_Size > v32 && v26 >= SortedTiles->m_Memory.m_pMemory[v31] )
  {
    v46 = v31 + 1;
    do
    {
      *IndexEnd = v46;
      v47 = v46;
      if ( v46 >= SortedTiles->m_Size )
        break;
      ++v46;
    }
    while ( v26 >= SortedTiles->m_Memory.m_pMemory[v47] );
  }
}


// CFoW_1DZ::FindCircleInfo  (line 470, @0x000000000325d990, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CIRCLEINFO, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CFoW_1DZ::ROWINFO>, CopyConstruct<CFoW_1DZ::TILEINFO>, CopyConstruct<double>, Element, EnsureCount, Find, FindInsertionPosition, GrowMemory, GrowVector, Insert, InsertAt, InsertMultipleBefore, IsIdxValid, IsValidIndex, LeftChild, Purge, ROWINFO, RemoveAll, RightChild, SnapToFixed, Sort, V_swap<double>, compareTILEDESCs, operator(), operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator new, CUtlRBTree<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int, CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int, CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlVectorBase<double, CUtlMemory<double, int> >::Find, GetAngleToPoint, V_qsort, CalculateTileInfo, CUtlMemory<CFoW_1DZ::TILEINFO, int>::Grow, CUtlMemory<double, int>::Grow, CUtlMemory<double, int>::Purge, CUtlMemory<CFoW_1DZ::ROWINFO, int>::Grow, _Unwind_Resume
// callers: CFoW_Viewer1DZ::UpdateSize
// globals: compareTILEDESCs(double const*,double const*)
CUtlMap<float,CFoW_1DZ::CIRCLEINFO*,short unsigned int,bool (*)(float const&,float const&)>::ElemType_t __fastcall CFoW_1DZ::FindCircleInfo(
        CFoW_1DZ *const this,
        CFoW *pFoW,
        double a3,
        double flRadius)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO*>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  CUtlMemory<CFoW_1DZ::ROWINFO,int> *v9; // rax
  CUtlMemory<CFoW_1DZ::ROWINFO,int> *v10; // r15
  unsigned __int16 v11; // r12
  unsigned __int16 m_Right; // ax
  char v13; // dl
  bool v14; // zf
  UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO*>::Node_t,short unsigned int> *v15; // rax
  bool v16; // r13
  unsigned __int16 v17; // ax
  double v18; // xmm2_8
  __m128d v19; // xmm6
  int v20; // eax
  float m_nHorizontalGridSizeRcp; // xmm0_4
  int m_nAllocationCount; // edx
  int v23; // r13d
  __int64 m_Size; // r14
  int i; // ebx
  double v26; // xmm0_8
  __m128d v27; // xmm1
  double AngleToPoint; // xmm0_8
  double v29; // xmm0_8
  unsigned __int64 v30; // rdx
  UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO*>::Node_t,short unsigned int> *v31; // rax
  double v33; // xmm0_8
  double v34; // xmm0_8
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // edx
  double *v38; // rax
  int m_pMemory_high; // ebx
  __int64 v40; // r12
  float v41; // xmm0_4
  __m128 m_flOccluderRadius_low; // xmm7
  int v43; // eax
  int v44; // r14d
  int v45; // ebx
  float v46; // xmm3_4
  CFoW_1DZ::ROWINFO *v47; // rax
  __m128 v48; // xmm7
  __m128d v49; // xmm6
  __m128d v50; // xmm1
  int v51; // eax
  double v52; // xmm0_8
  bool v53; // cc
  double v54; // xmm0_8
  double v55; // xmm0_8
  double v56; // xmm0_8
  double v57; // xmm0_8
  CUtlMemory<CFoW_1DZ::TILEINFO,int> *v58; // r12
  __int64 v59; // r13
  int v60; // eax
  __int64 v61; // r13
  CFoW_1DZ::TILEINFO *v62; // r13
  CFoW_1DZ::ROWINFO *v63; // rax
  unsigned __int64 v64; // rdx
  int v65; // eax
  double v66; // xmm6_8
  double v67; // xmm0_8
  unsigned __int64 v68; // rdx
  int v69; // r13d
  int v70; // eax
  __int64 v71; // r12
  int v72; // edx
  __int64 v73; // rax
  int v74; // r14d
  __int64 j; // rcx
  double *v76; // rsi
  double v77; // xmm1_8
  float OccluderRadius; // [rsp+14h] [rbp-BCh]
  float v79; // [rsp+30h] [rbp-A0h]
  float v80; // [rsp+38h] [rbp-98h]
  __int64 v81; // [rsp+38h] [rbp-98h]
  int pFoWb; // [rsp+40h] [rbp-90h]
  double v84; // [rsp+50h] [rbp-80h]
  int v85; // [rsp+50h] [rbp-80h]
  float TreeRadius; // [rsp+58h] [rbp-78h]
  int flRadiusSq; // [rsp+5Ch] [rbp-74h]
  float flRadiusSqa; // [rsp+5Ch] [rbp-74h]
  float DistanceSq; // [rsp+64h] [rbp-6Ch] BYREF
  double Angle; // [rsp+68h] [rbp-68h] BYREF
  CFoW_1DZ::TILEINFO TileInfo; // [rsp+70h] [rbp-60h] BYREF
  CUtlVector<double,CUtlMemory<double,int> > SortedTiles; // [rsp+80h] [rbp-50h] BYREF

  m_Root = this->m_CircleInfos.m_Tree.m_Root;
  flRadiusSq = SLODWORD(a3);
  SortedTiles.m_Size = LODWORD(a3);
  if ( m_Root == 0xFFFF )
  {
LABEL_7:
    v7 = 0xFFFF;
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_CircleInfos.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = m_Root;
        v8 = m_Root;
        if ( (this->m_CircleInfos.m_Tree.m_LessFunc.m_LessFunc)(&SortedTiles, &m_pMemory[v8].m_Data, a3, flRadius) == 0 )
          break;
        m_pMemory = this->m_CircleInfos.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_7;
      }
      if ( this->m_CircleInfos.m_Tree.m_LessFunc.m_LessFunc(
             &this->m_CircleInfos.m_Tree.m_Elements.m_pMemory[v8].m_Data,
             &SortedTiles) == 0 )
        break;
      m_pMemory = this->m_CircleInfos.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v8].m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_7;
    }
  }
  if ( this->m_CircleInfos.m_Tree.m_Elements.m_nAllocationCount > v7
    && this->m_CircleInfos.m_Tree.m_LastAlloc.index >= m_Root
    && m_Root != 0xFFFF )
  {
    v31 = &this->m_CircleInfos.m_Tree.m_Elements.m_pMemory[m_Root];
    if ( v31->m_Left != m_Root )
      return v31->m_Data.elem;
  }
  v9 = operator new(0x30u);
  v9[1].m_nAllocationCount = 0;
  v10 = v9;
  v9[2].m_pMemory = 0;
  v9[2].m_nAllocationCount = 0;
  v9[2].m_nGrowSize = 0;
  v11 = this->m_CircleInfos.m_Tree.m_Root;
  SortedTiles.m_Size = flRadiusSq;
  SortedTiles.m_Memory.m_pMemory = v9;
  if ( v11 != 0xFFFF )
  {
    while ( 1 )
    {
      v14 = this->m_CircleInfos.m_Tree.m_LessFunc.m_LessFunc(
              &SortedTiles,
              &this->m_CircleInfos.m_Tree.m_Elements.m_pMemory[v11].m_Data) == 0;
      v15 = this->m_CircleInfos.m_Tree.m_Elements.m_pMemory;
      if ( v14 )
      {
        m_Right = v15[v11].m_Right;
        v13 = 0;
        if ( m_Right == 0xFFFF )
        {
LABEL_15:
          v16 = v13;
          v17 = CUtlRBTree<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short,CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                  &this->m_CircleInfos.m_Tree,
                  &SortedTiles);
          goto LABEL_16;
        }
      }
      else
      {
        m_Right = v15[v11].m_Left;
        v13 = 1;
        if ( m_Right == 0xFFFF )
          goto LABEL_15;
      }
      v11 = m_Right;
    }
  }
  v11 = -1;
  v16 = 0;
  v17 = CUtlRBTree<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short,CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_CircleInfos.m_Tree,
          &SortedTiles);
LABEL_16:
  CUtlRBTree<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short,CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_CircleInfos.m_Tree,
    v17,
    v11,
    v16);
  ++this->m_CircleInfos.m_Tree.m_NumElements;
  v20 = ((((*&flRadiusSq + *&flRadiusSq) + pFoW->m_nHorizontalGridSize) - 1.0) * pFoW->m_nHorizontalGridSizeRcp) | 1;
  HIDWORD(v10->m_pMemory) = v20;
  v10->m_nAllocationCount = v20 / 2;
  m_nHorizontalGridSizeRcp = pFoW->m_nHorizontalGridSizeRcp;
  SortedTiles.m_Size = 0;
  SortedTiles.m_Memory.m_pMemory = 0;
  SortedTiles.m_Memory.m_nAllocationCount = 0;
  SortedTiles.m_Memory.m_nGrowSize = 0;
  m_nAllocationCount = v10->m_nAllocationCount;
  v80 = m_nHorizontalGridSizeRcp * *&flRadiusSq;
  v23 = -m_nAllocationCount;
  flRadiusSqa = v80 * v80;
  if ( ((m_nAllocationCount & 0x40000000) != 0) == __OFSUB__(m_nAllocationCount, -m_nAllocationCount) )
  {
    m_Size = 0;
    do
    {
      for ( i = -m_nAllocationCount; m_nAllocationCount >= i; m_Size = SortedTiles.m_Size )
      {
        while ( 1 )
        {
          if ( (v23 * v23 + i * i) <= flRadiusSqa )
          {
            v27.m128d_f64[0] = i;
            v27.m128d_f64[1] = v27.m128d_f64[0];
            AngleToPoint = GetAngleToPoint(v23, v27, v18);
            if ( AngleToPoint < 0.0 )
            {
              v33 = -AngleToPoint * 360000.0 + 0.5;
              if ( v33 >= 9.223372036854776e18 )
              {
                v35 = (v33 - 9.223372036854776e18) & 1 | (((v33 - 9.223372036854776e18) ^ 0x8000000000000000LL) >> 1);
                v34 = v35 + v35;
              }
              else
              {
                v34 = v33;
              }
              v84 = -(v34 / 360000.0);
            }
            else
            {
              v29 = AngleToPoint * 360000.0 + 0.5;
              if ( v29 < 9.223372036854776e18 )
              {
                v26 = v29;
              }
              else
              {
                v30 = (v29 - 9.223372036854776e18) & 1 | (((v29 - 9.223372036854776e18) ^ 0x8000000000000000LL) >> 1);
                v26 = v30 + v30;
              }
              v84 = v26 / 360000.0;
            }
            *&TileInfo.TileIndex = v84;
            if ( CUtlVectorBase<double,CUtlMemory<double,int>>::Find(&SortedTiles, &TileInfo.TileIndex) < 0 )
              break;
LABEL_23:
            m_nAllocationCount = v10->m_nAllocationCount;
          }
          if ( m_nAllocationCount < ++i )
            goto LABEL_41;
        }
        v36 = m_Size;
        if ( SortedTiles.m_Memory.m_nAllocationCount == m_Size )
        {
          CUtlMemory<double,int>::Grow(&SortedTiles.m_Memory, 1);
          v36 = SortedTiles.m_Size;
        }
        v37 = v36 + 1;
        SortedTiles.m_Size = v36 + 1;
        v38 = &SortedTiles.m_Memory.m_pMemory[m_Size];
        if ( v38 == 0 )
        {
          m_Size = v37;
          goto LABEL_23;
        }
        ++i;
        *v38 = v84;
        m_nAllocationCount = v10->m_nAllocationCount;
      }
LABEL_41:
      ++v23;
    }
    while ( v23 <= m_nAllocationCount );
    if ( m_Size > 1 )
    {
      if ( SortedTiles.m_Memory.m_pMemory != 0 )
      {
        V_qsort(SortedTiles.m_Memory.m_pMemory, m_Size, 8, compareTILEDESCs);
      }
      else
      {
        v74 = m_Size - 1;
        if ( v74 <= 0 )
          goto LABEL_97;
        while ( 1 )
        {
          --v74;
          for ( j = 0; ; ++j )
          {
            v76 = &SortedTiles.m_Memory.m_pMemory[j + 1];
            v77 = SortedTiles.m_Memory.m_pMemory[j];
            if ( v77 <= *v76 )
            {
              SortedTiles.m_Memory.m_pMemory[j] = *v76;
              *v76 = v77;
            }
            if ( j * 8 + 8 == 8LL * v74 + 8 )
              break;
          }
          if ( v74 == -1 )
            break;
          while ( v74 <= 0 )
          {
LABEL_97:
            if ( --v74 == -1 )
              goto LABEL_45;
          }
        }
      }
    }
  }
LABEL_45:
  m_pMemory_high = HIDWORD(v10->m_pMemory);
  *&v10->m_pMemory = v80;
  v40 = v10[1].m_nAllocationCount;
  v10->m_nGrowSize = SortedTiles.m_Size;
  if ( m_pMemory_high > v40 )
  {
    v69 = m_pMemory_high - v40;
    if ( m_pMemory_high != v40 )
    {
      v70 = v10[2].m_nAllocationCount;
      if ( m_pMemory_high > v70 )
        CUtlMemory<CFoW_1DZ::ROWINFO,int>::Grow(v10 + 2, m_pMemory_high - v70);
      v71 = v40;
      v72 = 0;
      for ( v10[1].m_nAllocationCount = m_pMemory_high; v69 > v72; ++v71 )
      {
        v73 = &v10[2].m_pMemory[v71];
        if ( v73 != 0 )
        {
          *(v73 + 8) = 0;
          *(v73 + 16) = 0;
          *(v73 + 24) = 0;
          *(v73 + 28) = 0;
        }
        ++v72;
      }
    }
  }
  v81 = 0;
  v41 = pFoW->m_nHorizontalGridSizeRcp;
  m_flOccluderRadius_low = LODWORD(pFoW->m_flOccluderRadius);
  v43 = v10->m_nAllocationCount;
  OccluderRadius = m_flOccluderRadius_low.m128_f32[0] * v41;
  TreeRadius = v41 * pFoW->m_flTreeRadius;
  pFoWb = -v43;
  if ( ((v43 & 0x40000000) != 0) == __OFSUB__(v43, -v43) )
  {
    do
    {
      v10[2].m_pMemory[v81].Start = -1;
      v44 = -v10->m_nAllocationCount;
      if ( ((v10->m_nAllocationCount & 0x40000000) != 0) == __OFSUB__(v10->m_nAllocationCount, v44) )
      {
        v45 = -v10->m_nAllocationCount;
        v85 = pFoWb * pFoWb;
        do
        {
          while ( 1 )
          {
            v46 = (v85 + v45 * v45);
            if ( v46 <= flRadiusSqa )
            {
              v47 = &v10[2].m_pMemory[v81];
              if ( v47->Start == -1 )
                v47->Start = v45 - v44;
              if ( (v45 | pFoWb) != 0 )
              {
                v19.m128d_f64[0] = v45;
                *m_flOccluderRadius_low.m128_u64 = pFoWb;
                CalculateTileInfo(
                  &SortedTiles,
                  m_flOccluderRadius_low,
                  v19,
                  LODWORD(OccluderRadius),
                  &TileInfo.OccluderStart,
                  &TileInfo.OccluderEnd,
                  &DistanceSq);
                v46 = (v85 + v45 * v45);
                v49 = COERCE_UNSIGNED_INT64(v45);
                v48 = COERCE_UNSIGNED_INT64(pFoWb);
                v65 = ((DistanceSq / flRadiusSqa) * 65535.0);
                if ( v65 > 0xFFFF )
                  LOWORD(v65) = -1;
                TileInfo.OccluderDistanceSq = v65;
              }
              else
              {
                TileInfo.OccluderStart = 0;
                TileInfo.OccluderEnd = 0;
                v48 = 0;
                v49 = 0;
                TileInfo.OccluderDistanceSq = -1;
              }
              *v48.m128_u64 = *v48.m128_u64 - 0.5;
              v49.m128d_f64[0] = v49.m128d_f64[0] - 0.5;
              v79 = v46;
              CalculateTileInfo(
                &SortedTiles,
                v48,
                v49,
                LODWORD(TreeRadius),
                &TileInfo.TreeStart,
                &TileInfo.TreeEnd,
                &DistanceSq);
              v51 = ((DistanceSq / flRadiusSqa) * 65535.0);
              if ( v51 > 0xFFFF )
                LOWORD(v51) = -1;
              TileInfo.TreeDistanceSq = v51;
              TileInfo.DistanceSq = ((v79 / flRadiusSqa) * 65535.0);
              v50.m128d_f64[0] = v45;
              v50.m128d_f64[1] = v50.m128d_f64[0];
              v52 = GetAngleToPoint(DistanceSq, v50, COERCE_DOUBLE(LODWORD(flRadiusSqa)));
              v53 = v52 >= 0.0;
              v54 = v52 * 360000.0;
              if ( v53 )
              {
                v55 = v54 + 0.5;
                if ( v55 >= 9.223372036854776e18 )
                {
                  v64 = (v55 - 9.223372036854776e18) & 1 | (((v55 - 9.223372036854776e18) ^ 0x8000000000000000LL) >> 1);
                  v56 = v64 + v64;
                }
                else
                {
                  v56 = v55;
                }
                v57 = v56 / 360000.0;
              }
              else
              {
                v66 = 0.5 - v54;
                if ( 0.5 - v54 >= 9.223372036854776e18 )
                {
                  v68 = (v66 - 9.223372036854776e18) & 1 | (((v66 - 9.223372036854776e18) ^ 0x8000000000000000LL) >> 1);
                  v67 = v68 + v68;
                }
                else
                {
                  v67 = v66;
                }
                v57 = -(v67 / 360000.0);
              }
              Angle = v57;
              TileInfo.TileIndex = CUtlVectorBase<double,CUtlMemory<double,int>>::Find(&SortedTiles, &Angle);
              v58 = &v10[2].m_pMemory[v81];
              v59 = v58->m_nAllocationCount;
              v60 = v58->m_nAllocationCount;
              if ( v59 == v58[1].m_nAllocationCount )
              {
                CUtlMemory<CFoW_1DZ::TILEINFO,int>::Grow(v58 + 1, 1);
                v60 = v58->m_nAllocationCount;
              }
              v61 = v59;
              v14 = &v58[1].m_pMemory[v61] == 0;
              v62 = &v58[1].m_pMemory[v61];
              v58->m_nAllocationCount = v60 + 1;
              if ( !v14 )
                break;
            }
            if ( v10->m_nAllocationCount < ++v45 )
              goto LABEL_65;
          }
          ++v45;
          *v62 = TileInfo;
        }
        while ( v10->m_nAllocationCount >= v45 );
      }
LABEL_65:
      v63 = &v10[2].m_pMemory[v81];
      if ( v63->Start == -1 )
        v63->Start = 0;
      ++pFoWb;
      ++v81;
    }
    while ( v10->m_nAllocationCount >= pFoWb );
  }
  SortedTiles.m_Size = 0;
  if ( (SortedTiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<double,int>::Purge(&SortedTiles.m_Memory);
    if ( (SortedTiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<double,int>::Purge(&SortedTiles.m_Memory);
  }
  return v10;
}


