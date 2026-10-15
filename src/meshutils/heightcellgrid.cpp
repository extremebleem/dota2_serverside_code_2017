
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_heightcellgrid.cpp  (line 0, @0x0000000001a6d330, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_heightcellgrid_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CHeightCellGrid::CHeightCellGrid  (line 18, @0x00000000031c4180, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Vector2D
void __fastcall CHeightCellGrid::CHeightCellGrid(CHeightCellGrid *const this)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4

  this->m_nNumCellsX = 0;
  this->m_nNumCellsY = 0;
  this->m_nCellSamplesPerAxis = 0;
  x = vec2_origin.x;
  this->m_flCellSize = 0.0;
  this->m_Cells.m_Size = 0;
  this->m_vOrigin.x = x;
  y = vec2_origin.y;
  this->m_Cells.m_Memory.m_pMemory = 0;
  this->m_vOrigin.y = y;
  this->m_Cells.m_Memory.m_nAllocationCount = 0;
  this->m_Cells.m_Memory.m_nGrowSize = 0;
  this->m_HeightData.m_Size = 0;
  this->m_HeightData.m_Memory.m_pMemory = 0;
  this->m_HeightData.m_Memory.m_nAllocationCount = 0;
  this->m_HeightData.m_Memory.m_nGrowSize = 0;
}


// CHeightCellGrid::operator=  (line 32, @0x00000000031c58b0, libserver.so)  // inlines: operator=
// calls: CUtlVectorBase<CHeightCellGrid::HeightCell_t, CUtlMemory<CHeightCellGrid::HeightCell_t, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount
CHeightCellGrid *__fastcall CHeightCellGrid::operator=(CHeightCellGrid *const this, const CHeightCellGrid *const src)
{
  CUtlVector<CHeightCellGrid::HeightCell_t,CUtlMemory<CHeightCellGrid::HeightCell_t,int> > *p_m_Cells; // rdi
  int m_Size; // r13d
  unsigned __int64 v6; // rdx
  CHeightCellGrid::HeightCell_t *m_pMemory; // rcx
  CHeightCellGrid::HeightCell_t *v8; // rax
  int v9; // r13d
  unsigned __int64 v10; // rdx

  p_m_Cells = &this->m_Cells;
  p_m_Cells[-1].m_Size = src->m_nNumCellsX;
  *(&p_m_Cells[-1].m_Size + 1) = src->m_nNumCellsY;
  LODWORD(p_m_Cells[-1].m_Memory.m_pMemory) = src->m_nCellSamplesPerAxis;
  HIDWORD(p_m_Cells[-1].m_Memory.m_pMemory) = LODWORD(src->m_flCellSize);
  *&p_m_Cells[-1].m_Memory.m_nAllocationCount = src->m_vOrigin;
  if ( p_m_Cells != &src->m_Cells )
  {
    m_Size = src->m_Cells.m_Size;
    CUtlVectorBase<CHeightCellGrid::HeightCell_t,CUtlMemory<CHeightCellGrid::HeightCell_t,int>>::SetCount(
      p_m_Cells,
      m_Size);
    if ( m_Size > 0 )
    {
      v6 = 0;
      do
      {
        m_pMemory = src->m_Cells.m_Memory.m_pMemory;
        v8 = this->m_Cells.m_Memory.m_pMemory;
        *&v8[v6 / 0xC].m_HeightDataOffset = *&m_pMemory[v6 / 0xC].m_HeightDataOffset;
        v8[v6 / 0xC].m_flSecondaryHeight = m_pMemory[v6 / 0xC].m_flSecondaryHeight;
        v6 += 12LL;
      }
      while ( v6 != 4 * (3LL * (m_Size - 1) + 3) );
    }
  }
  if ( &this->m_HeightData != &src->m_HeightData )
  {
    v9 = src->m_HeightData.m_Size;
    CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&this->m_HeightData, v9);
    if ( v9 > 0 )
    {
      v10 = 0;
      do
      {
        this->m_HeightData.m_Memory.m_pMemory[v10 / 4] = src->m_HeightData.m_Memory.m_pMemory[v10 / 4];
        v10 += 4LL;
      }
      while ( v10 != 4LL * (v9 - 1) + 4 );
    }
  }
  return this;
}


// CHeightCellGrid::operator==  (line 48, @0x00000000031c4200, libserver.so)  // inlines: V_memcmp, operator!=
// calls: memcmp
bool __fastcall CHeightCellGrid::operator==(const CHeightCellGrid *const this, const CHeightCellGrid *const src)
{
  bool v4; // bl
  __int64 m_Size; // rax
  int v7; // r14d

  v4 = 0;
  if ( this->m_nNumCellsX == src->m_nNumCellsX
    && this->m_nNumCellsY == src->m_nNumCellsY
    && this->m_nCellSamplesPerAxis == src->m_nCellSamplesPerAxis )
  {
    if ( this->m_flCellSize == src->m_flCellSize
      && src->m_vOrigin.x == this->m_vOrigin.x
      && src->m_vOrigin.y == this->m_vOrigin.y )
    {
      m_Size = this->m_Cells.m_Size;
      if ( m_Size == src->m_Cells.m_Size )
      {
        v7 = this->m_HeightData.m_Size;
        v4 = 0;
        if ( v7 == src->m_HeightData.m_Size
          && memcmp(this->m_Cells.m_Memory.m_pMemory, src->m_Cells.m_Memory.m_pMemory, 12 * m_Size) == 0 )
        {
          return memcmp(this->m_HeightData.m_Memory.m_pMemory, src->m_HeightData.m_Memory.m_pMemory, 4LL * v7) == 0;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return v4;
}


// CHeightCellGrid::InitalizeHeightCellGrid  (line 69, @0x00000000031c56e0, libserver.so)  // inlines: FillWithValue, Purge, RemoveAll, operator=
// calls: CUtlMemory<float, int>::Purge, CUtlVectorBase<CHeightCellGrid::HeightCell_t, CUtlMemory<CHeightCellGrid::HeightCell_t, int> >::SetCount
// globals: CHeightCellGrid::InitalizeHeightCellGrid(int,int,float,int,Vector2D const&)::defaultHeightCell
void __fastcall CHeightCellGrid::InitalizeHeightCellGrid(
        CHeightCellGrid *const this,
        int nNumCellsX,
        uint32 nNumCellsY,
        float flCellSize,
        int nCellSamplesPerAxis,
        const Vector2D *const vOrigin)
{
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // rdi
  vec_t y; // xmm0_4
  __int64 v9; // rax
  int v10; // edx
  CHeightCellGrid::HeightCell_t *m_pMemory; // rcx

  p_m_Memory = &this->m_HeightData.m_Memory;
  p_m_Memory[-4].m_nAllocationCount = nNumCellsX;
  p_m_Memory[-4].m_nGrowSize = nNumCellsY;
  LODWORD(p_m_Memory[-3].m_pMemory) = nCellSamplesPerAxis;
  *(&p_m_Memory[-3].m_pMemory + 1) = flCellSize;
  p_m_Memory[-3].m_nAllocationCount = LODWORD(vOrigin->x);
  y = vOrigin->y;
  p_m_Memory[-1].m_nAllocationCount = 0;
  *&p_m_Memory[-3].m_nGrowSize = y;
  CUtlMemory<float,int>::Purge(p_m_Memory);
  CUtlVectorBase<CHeightCellGrid::HeightCell_t,CUtlMemory<CHeightCellGrid::HeightCell_t,int>>::SetCount(
    &this->m_Cells,
    this->m_nNumCellsY * this->m_nNumCellsX);
  if ( this->m_Cells.m_Size > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      m_pMemory = this->m_Cells.m_Memory.m_pMemory;
      ++v10;
      *&m_pMemory[v9].m_HeightDataOffset = 0xFFFFFFFFLL;
      m_pMemory[v9++].m_flSecondaryHeight = 0.0;
    }
    while ( v10 < this->m_Cells.m_Size );
  }
}


// CHeightCellGrid::Purge  (line 87, @0x00000000031c5670, libserver.so)  // inlines: Purge, RemoveAll, operator=
// calls: CUtlMemory<CHeightCellGrid::HeightCell_t, int>::Purge, CUtlMemory<float, int>::Purge
void __fastcall CHeightCellGrid::Purge(CHeightCellGrid *const this)
{
  bool v2; // zf

  this->m_nNumCellsX = 0;
  this->m_nNumCellsY = 0;
  v2 = (this->m_Cells.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nCellSamplesPerAxis = 0;
  this->m_flCellSize = 0.0;
  this->m_Cells.m_Size = 0;
  this->m_vOrigin = vec2_origin;
  if ( v2 )
    CUtlMemory<CHeightCellGrid::HeightCell_t,int>::Purge(&this->m_Cells.m_Memory);
  this->m_HeightData.m_Size = 0;
  CUtlMemory<float,int>::Purge(&this->m_HeightData.m_Memory);
}


// CHeightCellGrid::SetCellConstantHeight  (line 103, @0x00000000031c42c0, libserver.so)  // inlines: GetCell, GetCellIndex
__int64 __fastcall CHeightCellGrid::SetCellConstantHeight(
        CHeightCellGrid *const this,
        int nCellX,
        int nCellY,
        float flHeight)
{
  __int64 result; // rax
  int v5; // esi
  CHeightCellGrid::HeightCell_t *v6; // rdx

  result = nCellY >> 31;
  LOBYTE(result) = nCellX < 0 || nCellY < 0;
  if ( result != 0 )
    return 0;
  if ( nCellX < this->m_nNumCellsX && nCellY < this->m_nNumCellsY )
  {
    v5 = this->m_nNumCellsX * nCellY + nCellX;
    if ( v5 != -1 )
    {
      v6 = &this->m_Cells.m_Memory.m_pMemory[v5];
      if ( v6->m_HeightDataOffset == -1 )
      {
        v6->m_flConstantHeight = flHeight;
        return 1;
      }
    }
  }
  return result;
}


// CHeightCellGrid::SetCellSecondaryHeight  (line 126, @0x00000000031c4320, libserver.so)  // inlines: GetCell, GetCellIndex
__int64 __fastcall CHeightCellGrid::SetCellSecondaryHeight(
        CHeightCellGrid *const this,
        int nCellX,
        int nCellY,
        float flHeight)
{
  __int64 result; // rax
  int v5; // esi

  result = nCellY >> 31;
  LOBYTE(result) = nCellX < 0 || nCellY < 0;
  if ( result != 0 )
    return 0;
  if ( nCellX < this->m_nNumCellsX && nCellY < this->m_nNumCellsY )
  {
    v5 = this->m_nNumCellsX * nCellY + nCellX;
    if ( v5 != -1 )
    {
      this->m_Cells.m_Memory.m_pMemory[v5].m_flSecondaryHeight = flHeight;
      return 1;
    }
  }
  return result;
}


// CHeightCellGrid::ComputeCellsSamplePoints  (line 142, @0x00000000031c4380, libserver.so)  // inlines: GetCell, GetCellHeightData, GetCellIndex, Vector2DAdd, operator+, operator=
// callers: CHeightMapSceneObject::BuildVertexList
bool __fastcall CHeightCellGrid::ComputeCellsSamplePoints(
        const CHeightCellGrid *const this,
        int nCellX,
        int nCellY,
        Vector *pOutSamplePoints)
{
  bool result; // al
  int v5; // r8d
  float v6; // xmm5_4
  int m_nCellSamplesPerAxis; // edx
  float m_flCellSize; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  CHeightCellGrid::HeightCell_t *v11; // rax
  float v12; // xmm3_4
  float m_flConstantHeight; // xmm0_4
  __int64 m_HeightDataOffset; // rax
  float v15; // xmm5_4
  float *v16; // r9
  int v17; // r10d
  int i; // r8d
  int v19; // eax
  float v20; // xmm0_4
  int v21; // edx
  int v22; // esi
  Vector *v23; // rdx
  vec_t v24; // xmm1_4
  _BYTE v25[4]; // [rsp-4h] [rbp-8h] BYREF

  if ( pOutSamplePoints == 0 )
    return 0;
  result = nCellX < 0 || nCellY < 0;
  if ( result )
    return 0;
  if ( nCellX < this->m_nNumCellsX && nCellY < this->m_nNumCellsY )
  {
    v5 = nCellX + nCellY * this->m_nNumCellsX;
    if ( v5 != -1 )
    {
      v6 = nCellY;
      m_nCellSamplesPerAxis = this->m_nCellSamplesPerAxis;
      m_flCellSize = this->m_flCellSize;
      v9 = v6 * m_flCellSize;
      v10 = (nCellX * m_flCellSize) + this->m_vOrigin.x;
      v11 = &this->m_Cells.m_Memory.m_pMemory[v5];
      v12 = m_flCellSize / (m_nCellSamplesPerAxis - 1);
      m_flConstantHeight = v11->m_flConstantHeight;
      m_HeightDataOffset = v11->m_HeightDataOffset;
      v15 = v9 + this->m_vOrigin.y;
      *&v25[-4] = m_flConstantHeight;
      if ( m_HeightDataOffset == -1 || (v16 = &this->m_HeightData.m_Memory.m_pMemory[m_HeightDataOffset]) == 0 )
      {
        v16 = &v25[-4];
        v17 = 0;
      }
      else
      {
        v17 = 1;
      }
      for ( i = 0; m_nCellSamplesPerAxis > i; ++i )
      {
        if ( m_nCellSamplesPerAxis <= 0 )
          break;
        v19 = 0;
        do
        {
          v20 = v19;
          v21 = v19 + i * m_nCellSamplesPerAxis;
          ++v19;
          v22 = v17 * v21;
          v23 = &pOutSamplePoints[v21];
          v24 = v16[v22];
          v23->y = (i * v12) + v15;
          v23->z = v24;
          v23->x = (v20 * v12) + v10;
          m_nCellSamplesPerAxis = this->m_nCellSamplesPerAxis;
        }
        while ( m_nCellSamplesPerAxis > v19 );
      }
      return 1;
    }
  }
  return result;
}


// CHeightCellGrid::GetCellConstantHeight  (line 185, @0x00000000031c44b0, libserver.so)  // inlines: GetCell, GetCellIndex
// callers: CHeightMapSceneObject::BuildVertexList
bool __fastcall CHeightCellGrid::GetCellConstantHeight(
        const CHeightCellGrid *const this,
        int nCellX,
        int nCellY,
        float *pOutHeight)
{
  bool result; // al
  int v5; // esi
  CHeightCellGrid::HeightCell_t *v6; // rdx

  result = nCellX < 0 || nCellY < 0;
  *pOutHeight = 0.0;
  if ( result )
    return 0;
  if ( nCellX < this->m_nNumCellsX && nCellY < this->m_nNumCellsY )
  {
    v5 = this->m_nNumCellsX * nCellY + nCellX;
    if ( v5 != -1 )
    {
      v6 = &this->m_Cells.m_Memory.m_pMemory[v5];
      if ( v6->m_HeightDataOffset == -1 )
      {
        *pOutHeight = v6->m_flConstantHeight;
        return 1;
      }
    }
  }
  return result;
}


// CHeightCellGrid::GetCellSecondaryHeight  (line 206, @0x00000000031c4520, libserver.so)  // inlines: GetCell, GetCellIndex
// callers: CHeightMapSceneObject::BuildVertexList
bool __fastcall CHeightCellGrid::GetCellSecondaryHeight(
        const CHeightCellGrid *const this,
        int nCellX,
        int nCellY,
        float *pOutHeight)
{
  bool result; // al
  int v5; // esi

  result = nCellX < 0 || nCellY < 0;
  *pOutHeight = 0.0;
  if ( result )
    return 0;
  if ( nCellX < this->m_nNumCellsX && nCellY < this->m_nNumCellsY )
  {
    v5 = this->m_nNumCellsX * nCellY + nCellX;
    if ( v5 != -1 )
    {
      *pOutHeight = this->m_Cells.m_Memory.m_pMemory[v5].m_flSecondaryHeight;
      return 1;
    }
  }
  return result;
}


// CHeightCellGrid::GetCellCorners  (line 222, @0x00000000031c4580, libserver.so)  // inlines: Vector2DAdd, operator+, operator=
// callers: CHeightMapSceneObject::BuildVertexList
void __fastcall CHeightCellGrid::GetCellCorners(
        const CHeightCellGrid *const this,
        int nCellX,
        int nCellY,
        Vector2D *pOutMinCorner,
        Vector2D *pOutMaxCorner)
{
  float m_flCellSize; // xmm2_4
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  float v8; // xmm2_4

  m_flCellSize = this->m_flCellSize;
  v6 = (nCellX * m_flCellSize) + this->m_vOrigin.x;
  v7 = (nCellY * m_flCellSize) + this->m_vOrigin.y;
  pOutMinCorner->x = v6;
  pOutMinCorner->y = v7;
  v8 = this->m_flCellSize;
  pOutMaxCorner->x = v6 + v8;
  pOutMaxCorner->y = v7 + v8;
}


// CHeightCellGrid::GetNumCells  (line 232, @0x00000000031c45d0, libserver.so)
// callers: CHeightMapSceneObject::BuildVertexList
void __fastcall CHeightCellGrid::GetNumCells(const CHeightCellGrid *const this, int *pOutNumCellsX, int *pOutNumCellsY)
{
  *pOutNumCellsX = this->m_nNumCellsX;
  *pOutNumCellsY = this->m_nNumCellsY;
}


// CHeightCellGrid::SetCellHeightSamples  (line 243, @0x00000000031c5770, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, GetCell, GetCellHeightData, GetCellIndex, GetNumTotalSamplesPerCell, InsertMultipleBefore
// calls: CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector, CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight
bool __fastcall CHeightCellGrid::SetCellHeightSamples(
        CHeightCellGrid *const this,
        int nCellX,
        int nCellY,
        float *pSamples)
{
  bool result; // al
  int m_nNumCellsX; // edi
  int v7; // esi
  __int64 v8; // r14
  CHeightCellGrid::HeightCell_t *v9; // r13
  int v10; // ebx
  __int64 m_HeightDataOffset; // rax
  float *v12; // rdx
  __int64 i; // rax
  int m_Size; // r15d
  float *pSamplesa; // [rsp+0h] [rbp-40h]

  result = nCellX < 0 || nCellY < 0;
  if ( result )
    return 0;
  m_nNumCellsX = this->m_nNumCellsX;
  if ( nCellX < this->m_nNumCellsX && nCellY < this->m_nNumCellsY )
  {
    v7 = m_nNumCellsX * nCellY + nCellX;
    if ( v7 != -1 )
    {
      v8 = v7;
      v9 = &this->m_Cells.m_Memory.m_pMemory[v8];
      v10 = this->m_nCellSamplesPerAxis * this->m_nCellSamplesPerAxis;
      m_HeightDataOffset = v9->m_HeightDataOffset;
      if ( m_HeightDataOffset == -1
        && ((v9->m_HeightDataOffset = this->m_HeightData.m_Size, (m_Size = this->m_HeightData.m_Size) >= m_Size + v10)
         || v10 == 0
          ? (m_HeightDataOffset = this->m_Cells.m_Memory.m_pMemory[v7].m_HeightDataOffset)
          : (pSamplesa = pSamples,
             CUtlVectorBase<float,CUtlMemory<float,int>>::GrowVector(&this->m_HeightData, v10),
             CUtlVectorBase<float,CUtlMemory<float,int>>::ShiftElementsRight(&this->m_HeightData, m_Size, v10),
             pSamples = pSamplesa,
             m_HeightDataOffset = this->m_Cells.m_Memory.m_pMemory[v8].m_HeightDataOffset),
            m_HeightDataOffset == -1) )
      {
        v12 = 0;
      }
      else
      {
        v12 = &this->m_HeightData.m_Memory.m_pMemory[m_HeightDataOffset];
      }
      for ( i = 0; v10 > i; ++i )
        v12[i] = pSamples[i];
      v9->m_flConstantHeight = 0.0;
      return 1;
    }
  }
  return result;
}


// CHeightCellGrid::GetHeightForLocation  (line 278, @0x00000000031c46e0, libserver.so)  // inlines: GetCell, GetCellHeightData, GetCellIndex
// calls: floorf, CHeightCellGrid::ComputeHeightInCell
float __fastcall CHeightCellGrid::GetHeightForLocation(
        const CHeightCellGrid *const this,
        float a2,
        float flPosX,
        float flPosY,
        float flInvalidHeight)
{
  float m_flCellSize; // xmm4_4
  int v7; // r12d
  float v8; // xmm0_4
  __m128 v9; // xmm1
  int v10; // eax
  __m128 v11; // xmm3
  int v13; // edx
  CHeightCellGrid::HeightCell_t *v14; // rcx
  __int64 m_HeightDataOffset; // rdx
  float flCellX; // [rsp+8h] [rbp-18h]
  float flCellY; // [rsp+Ch] [rbp-14h]

  m_flCellSize = this->m_flCellSize;
  flCellX = (a2 - this->m_vOrigin.x) / m_flCellSize;
  flCellY = (flPosX - this->m_vOrigin.y) / m_flCellSize;
  v7 = floorf(flCellX);
  v8 = floorf(flCellY);
  v9 = LODWORD(flCellY);
  v10 = v8;
  v11 = LODWORD(flCellX);
  if ( v8 < 0 )
    return flPosY;
  if ( v7 < 0 )
    return flPosY;
  if ( v7 >= this->m_nNumCellsX )
    return flPosY;
  if ( v10 >= this->m_nNumCellsY )
    return flPosY;
  v13 = v7 + v10 * this->m_nNumCellsX;
  if ( v13 == -1 )
    return flPosY;
  v14 = &this->m_Cells.m_Memory.m_pMemory[v13];
  m_HeightDataOffset = v14->m_HeightDataOffset;
  if ( m_HeightDataOffset == -1 )
    return v14->m_flConstantHeight;
  v11.m128_f32[0] = flCellX - v7;
  v9.m128_f32[0] = flCellY - v10;
  return CHeightCellGrid::ComputeHeightInCell(
           this,
           v11,
           v9,
           v10,
           &this->m_HeightData.m_Memory.m_pMemory[m_HeightDataOffset]);
}


// CHeightCellGrid::ComputeHeightInCell  (line 309, @0x00000000031c45e0, libserver.so)  // inlines: Clamp<float>, Lerp<float>
// callers: CHeightCellGrid::GetHeightForLocation
float __fastcall CHeightCellGrid::ComputeHeightInCell(
        const CHeightCellGrid *const this,
        __m128 a2,
        __m128 flX,
        float flY,
        const float *pCellHeights)
{
  float v5; // xmm2_4
  int m_nCellSamplesPerAxis; // ecx
  float v7; // xmm3_4
  float v8; // xmm4_4
  __m128 v9; // xmm3
  int v10; // eax
  __m128 v11; // xmm2
  int v12; // r8d
  float v13; // xmm2_4
  int v14; // edx
  int v15; // edi
  int v16; // ecx
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm3_4

  v5 = 0.0;
  m_nCellSamplesPerAxis = this->m_nCellSamplesPerAxis;
  v7 = 0.0;
  v8 = (m_nCellSamplesPerAxis - 1);
  if ( a2.m128_f32[0] >= 0.0 )
  {
    v9 = _mm_cmplt_ss(0x3F7FFFFEu, a2);
    LODWORD(v7) = _mm_andnot_ps(v9, a2).m128_u32[0] | v9.m128_i32[0] & 0x3F7FFFFE;
  }
  v10 = (v7 * v8);
  if ( flX.m128_f32[0] >= 0.0 )
  {
    v11 = _mm_cmplt_ss(0x3F7FFFFEu, flX);
    LODWORD(v5) = _mm_andnot_ps(v11, flX).m128_u32[0] | v11.m128_i32[0] & 0x3F7FFFFE;
  }
  v12 = (v5 * v8);
  v13 = 1.0 / v8;
  v14 = v12 * m_nCellSamplesPerAxis;
  v15 = v12 * m_nCellSamplesPerAxis + v10;
  v16 = v12 * m_nCellSamplesPerAxis + m_nCellSamplesPerAxis;
  v17 = pCellHeights[v16 + v10];
  v18 = flX.m128_f32[0] - (v12 * (1.0 / v8));
  v19 = (a2.m128_f32[0] - (v10 * v13)) / v13;
  v20 = ((pCellHeights[v10 + 1 + v14] - pCellHeights[v15]) * v19) + pCellHeights[v15];
  return ((v18 / v13) * ((((pCellHeights[v10 + 1 + v16] - v17) * v19) + v17) - v20)) + v20;
}


// CHeightCellGrid::GetSecondaryHeightForLocation  (line 341, @0x00000000031c47e0, libserver.so)  // inlines: GetCell, GetCellIndex
// calls: floorf
float __fastcall CHeightCellGrid::GetSecondaryHeightForLocation(
        const CHeightCellGrid *const this,
        float a2,
        float flPosX,
        float flPosY,
        float flInvalidHeight)
{
  int v6; // r12d
  int v7; // edx
  float result; // xmm0_4
  int v9; // eax
  float m_flCellSize; // [rsp+Ch] [rbp-14h]

  m_flCellSize = this->m_flCellSize;
  v6 = floorf((a2 - this->m_vOrigin.x) / m_flCellSize);
  v7 = floorf((flPosX - this->m_vOrigin.y) / m_flCellSize);
  if ( v7 < 0 || v6 < 0 )
    return flPosY;
  result = flPosY;
  if ( v6 < this->m_nNumCellsX && v7 < this->m_nNumCellsY )
  {
    v9 = v6 + v7 * this->m_nNumCellsX;
    if ( v9 != -1 )
      return this->m_Cells.m_Memory.m_pMemory[v9].m_flSecondaryHeight;
  }
  return result;
}


// CHeightCellGrid::SerializeToBuffer  (line 362, @0x00000000031c48a0, libserver.so)  // inlines: LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekPut, PutChar, PutFloat, PutInt, PutTabs, PutType<float>, PutType<int>, PutType<short unsigned int>, PutTypeBin<char>, PutTypeBin<float>, PutTypeBin<int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlBuffer::EnsureCapacity, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf
// strings: "%hu"
void __fastcall CHeightCellGrid::SerializeToBuffer(const CHeightCellGrid *const this, CUtlBuffer *pOutBuffer)
{
  int m_Size; // r14d
  int m_Put; // r13d
  unsigned __int8 m_Flags; // al
  int v7; // edx
  int m_nOffset; // edi
  int m_nTab; // ebx
  unsigned __int8 v10; // al
  int v11; // edx
  int v12; // edi
  int v13; // ebx
  unsigned __int8 v14; // al
  int v15; // edx
  int v16; // edi
  int v17; // ebx
  unsigned __int8 v18; // al
  int v19; // edx
  int v20; // edi
  int v21; // ebx
  int m_nNumCellsX; // ebx
  int m_nNumCellsY; // ebx
  int m_nCellSamplesPerAxis; // ebx
  float m_flCellSize; // xmm0_4
  float x; // xmm0_4
  float y; // xmm0_4
  int v28; // edx
  int v29; // r13d
  unsigned __int8 v30; // al
  int v31; // edi
  int v32; // ebx
  unsigned __int64 v33; // rbx
  __int64 v34; // r13
  CHeightCellGrid::HeightCell_t *v35; // rax
  bool v36; // r14
  CHeightCellGrid::HeightCell_t *m_pMemory; // rax
  int v38; // eax
  unsigned __int64 v39; // rbx
  __int64 v40; // r13
  float *v41; // rax
  int v42; // eax
  int v43; // eax
  unsigned __int8 *v44; // rdx
  unsigned __int8 *v45; // rdx
  unsigned __int8 *v46; // rdx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  unsigned __int8 *v55; // rdx
  unsigned __int8 *v56; // rdx
  unsigned __int8 *v57; // rdx
  unsigned __int8 *v58; // rdx
  unsigned __int8 *v59; // rdx
  unsigned __int8 *v60; // rdx
  unsigned __int8 *v61; // rdx
  unsigned __int8 *v62; // rdx
  int v63; // [rsp+8h] [rbp-68h]
  float v64; // [rsp+Ch] [rbp-64h]
  float v65; // [rsp+Ch] [rbp-64h]
  float v66; // [rsp+Ch] [rbp-64h]
  float v67; // [rsp+24h] [rbp-4Ch]
  float v68; // [rsp+28h] [rbp-48h]
  float v69; // [rsp+2Ch] [rbp-44h]
  float m_flConstantHeight; // [rsp+30h] [rbp-40h]
  float m_flSecondaryHeight; // [rsp+34h] [rbp-3Ch]
  float v72; // [rsp+38h] [rbp-38h]
  int v73; // [rsp+3Ch] [rbp-34h]
  int v74; // [rsp+3Ch] [rbp-34h]
  int v75; // [rsp+3Ch] [rbp-34h]
  int v76; // [rsp+3Ch] [rbp-34h]
  int v77; // [rsp+3Ch] [rbp-34h]
  int v78; // [rsp+3Ch] [rbp-34h]
  int v79; // [rsp+3Ch] [rbp-34h]
  int v80; // [rsp+3Ch] [rbp-34h]
  int v81; // [rsp+3Ch] [rbp-34h]

  m_Size = this->m_Cells.m_Size;
  m_Put = pOutBuffer->m_Put;
  v63 = this->m_HeightData.m_Size;
  CUtlBuffer::EnsureCapacity(pOutBuffer, 5 * m_Size + 4 * v63 + 128);
  m_Flags = pOutBuffer->m_Flags;
  v7 = pOutBuffer->m_Put;
  if ( (m_Flags & 1) != 0 )
  {
    m_nOffset = pOutBuffer->m_nOffset;
    if ( v7 != m_nOffset && pOutBuffer->m_Memory.m_pMemory[v7 - 1 - m_nOffset] == 10 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_5;
      goto LABEL_116;
    }
  }
  if ( v7 == 0 )
  {
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
LABEL_116:
      m_nTab = pOutBuffer->m_nTab;
LABEL_5:
    while ( --m_nTab >= 0 )
    {
      while ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
      {
        pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 9;
        ++pOutBuffer->m_Put;
        CUtlBuffer::AddNullTermination(pOutBuffer);
        if ( --m_nTab < 0 )
          goto LABEL_8;
      }
    }
  }
LABEL_8:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
  {
    pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 118;
    ++pOutBuffer->m_Put;
    CUtlBuffer::AddNullTermination(pOutBuffer);
  }
  v10 = pOutBuffer->m_Flags;
  v11 = pOutBuffer->m_Put;
  if ( (v10 & 1) != 0 )
  {
    v12 = pOutBuffer->m_nOffset;
    if ( v11 != v12 && pOutBuffer->m_Memory.m_pMemory[v11 - 1 - v12] == 10 )
    {
      v13 = 0;
      if ( (v10 & 0x10) != 0 )
        goto LABEL_14;
      goto LABEL_115;
    }
  }
  if ( v11 == 0 )
  {
    v13 = 0;
    if ( (v10 & 0x10) == 0 )
LABEL_115:
      v13 = pOutBuffer->m_nTab;
LABEL_14:
    while ( --v13 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
      {
        pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 9;
        ++pOutBuffer->m_Put;
        CUtlBuffer::AddNullTermination(pOutBuffer);
        if ( --v13 < 0 )
          goto LABEL_17;
      }
    }
  }
LABEL_17:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
  {
    pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 104;
    ++pOutBuffer->m_Put;
    CUtlBuffer::AddNullTermination(pOutBuffer);
  }
  v14 = pOutBuffer->m_Flags;
  v15 = pOutBuffer->m_Put;
  if ( (v14 & 1) != 0 )
  {
    v16 = pOutBuffer->m_nOffset;
    if ( v15 != v16 && pOutBuffer->m_Memory.m_pMemory[v15 - 1 - v16] == 10 )
    {
      v17 = 0;
      if ( (v14 & 0x10) != 0 )
        goto LABEL_23;
      goto LABEL_117;
    }
  }
  if ( v15 == 0 )
  {
    v17 = 0;
    if ( (v14 & 0x10) == 0 )
LABEL_117:
      v17 = pOutBuffer->m_nTab;
LABEL_23:
    while ( --v17 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
      {
        pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 9;
        ++pOutBuffer->m_Put;
        CUtlBuffer::AddNullTermination(pOutBuffer);
        if ( --v17 < 0 )
          goto LABEL_26;
      }
    }
  }
LABEL_26:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
  {
    pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 99;
    ++pOutBuffer->m_Put;
    CUtlBuffer::AddNullTermination(pOutBuffer);
  }
  v18 = pOutBuffer->m_Flags;
  v19 = pOutBuffer->m_Put;
  if ( (v18 & 1) != 0 )
  {
    v20 = pOutBuffer->m_nOffset;
    if ( v19 != v20 && pOutBuffer->m_Memory.m_pMemory[v19 - 1 - v20] == 10 )
    {
      v21 = 0;
      if ( (v18 & 0x10) != 0 )
        goto LABEL_32;
      goto LABEL_114;
    }
  }
  if ( v19 == 0 )
  {
    v21 = 0;
    if ( (v18 & 0x10) == 0 )
LABEL_114:
      v21 = pOutBuffer->m_nTab;
LABEL_32:
    while ( --v21 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
      {
        pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 9;
        ++pOutBuffer->m_Put;
        CUtlBuffer::AddNullTermination(pOutBuffer);
        if ( --v21 < 0 )
          goto LABEL_35;
      }
    }
  }
LABEL_35:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
  {
    pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 103;
    ++pOutBuffer->m_Put;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_37;
  }
  else if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_37:
    CUtlBuffer::Printf(pOutBuffer, "%d", 1);
    goto LABEL_38;
  }
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v47 = pOutBuffer->m_Put;
      v59 = &pOutBuffer->m_Memory.m_pMemory[v47 - pOutBuffer->m_nOffset];
      if ( v59 != 0 )
      {
        *v59 = 0x1000000;
        v47 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 1;
      v47 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v47 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_39;
    goto LABEL_123;
  }
LABEL_38:
  if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_39:
    CUtlBuffer::Printf(pOutBuffer, "%d", 128);
    goto LABEL_40;
  }
LABEL_123:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v48 = pOutBuffer->m_Put;
      v60 = &pOutBuffer->m_Memory.m_pMemory[v48 - pOutBuffer->m_nOffset];
      if ( v60 != 0 )
      {
        *v60 = 0x80000000;
        v48 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 128;
      v48 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v48 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    m_nNumCellsX = this->m_nNumCellsX;
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_41;
    goto LABEL_127;
  }
LABEL_40:
  m_nNumCellsX = this->m_nNumCellsX;
  if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_41:
    CUtlBuffer::Printf(pOutBuffer, "%d", m_nNumCellsX);
    goto LABEL_42;
  }
LABEL_127:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v49 = pOutBuffer->m_Put;
      v55 = &pOutBuffer->m_Memory.m_pMemory[v49 - pOutBuffer->m_nOffset];
      if ( v55 != 0 )
      {
        LOBYTE(v76) = HIBYTE(m_nNumCellsX);
        BYTE1(v76) = BYTE2(m_nNumCellsX);
        BYTE2(v76) = BYTE1(m_nNumCellsX);
        HIBYTE(v76) = m_nNumCellsX;
        *v55 = v76;
        v49 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = m_nNumCellsX;
      v49 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v49 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    m_nNumCellsY = this->m_nNumCellsY;
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_43;
    goto LABEL_131;
  }
LABEL_42:
  m_nNumCellsY = this->m_nNumCellsY;
  if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_43:
    CUtlBuffer::Printf(pOutBuffer, "%d", m_nNumCellsY);
    goto LABEL_44;
  }
LABEL_131:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v50 = pOutBuffer->m_Put;
      v56 = &pOutBuffer->m_Memory.m_pMemory[v50 - pOutBuffer->m_nOffset];
      if ( v56 != 0 )
      {
        LOBYTE(v77) = HIBYTE(m_nNumCellsY);
        BYTE1(v77) = BYTE2(m_nNumCellsY);
        BYTE2(v77) = BYTE1(m_nNumCellsY);
        HIBYTE(v77) = m_nNumCellsY;
        *v56 = v77;
        v50 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = m_nNumCellsY;
      v50 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v50 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    m_nCellSamplesPerAxis = this->m_nCellSamplesPerAxis;
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_45;
    goto LABEL_135;
  }
LABEL_44:
  m_nCellSamplesPerAxis = this->m_nCellSamplesPerAxis;
  if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_45:
    CUtlBuffer::Printf(pOutBuffer, "%d", m_nCellSamplesPerAxis);
    goto LABEL_46;
  }
LABEL_135:
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v51 = pOutBuffer->m_Put;
      v57 = &pOutBuffer->m_Memory.m_pMemory[v51 - pOutBuffer->m_nOffset];
      if ( v57 != 0 )
      {
        LOBYTE(v78) = HIBYTE(m_nCellSamplesPerAxis);
        BYTE1(v78) = BYTE2(m_nCellSamplesPerAxis);
        BYTE2(v78) = BYTE1(m_nCellSamplesPerAxis);
        HIBYTE(v78) = m_nCellSamplesPerAxis;
        *v57 = v78;
        v51 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = m_nCellSamplesPerAxis;
      v51 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v51 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    m_flCellSize = this->m_flCellSize;
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_47;
    goto LABEL_139;
  }
LABEL_46:
  m_flCellSize = this->m_flCellSize;
  if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_47:
    CUtlBuffer::Printf(pOutBuffer, "%f", m_flCellSize);
    goto LABEL_48;
  }
LABEL_139:
  v67 = m_flCellSize;
  v64 = m_flCellSize;
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v52 = pOutBuffer->m_Put;
      v58 = &pOutBuffer->m_Memory.m_pMemory[v52 - pOutBuffer->m_nOffset];
      if ( v58 != 0 )
      {
        LOBYTE(v79) = HIBYTE(v67);
        BYTE1(v79) = BYTE2(v67);
        BYTE2(v79) = BYTE1(v67);
        HIBYTE(v79) = LOBYTE(v67);
        *v58 = v79;
        v52 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = v64;
      v52 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v52 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    x = this->m_vOrigin.x;
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_49;
    goto LABEL_143;
  }
LABEL_48:
  x = this->m_vOrigin.x;
  if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_49:
    CUtlBuffer::Printf(pOutBuffer, "%f", x);
    goto LABEL_50;
  }
LABEL_143:
  v68 = x;
  v65 = x;
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v53 = pOutBuffer->m_Put;
      v61 = &pOutBuffer->m_Memory.m_pMemory[v53 - pOutBuffer->m_nOffset];
      if ( v61 != 0 )
      {
        LOBYTE(v80) = HIBYTE(v68);
        BYTE1(v80) = BYTE2(v68);
        BYTE2(v80) = BYTE1(v68);
        HIBYTE(v80) = LOBYTE(v68);
        *v61 = v80;
        v53 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = v65;
      v53 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v53 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
    y = this->m_vOrigin.y;
    if ( (pOutBuffer->m_Flags & 1) != 0 )
      goto LABEL_51;
    goto LABEL_147;
  }
LABEL_50:
  y = this->m_vOrigin.y;
  if ( (pOutBuffer->m_Flags & 1) != 0 )
  {
LABEL_51:
    CUtlBuffer::Printf(pOutBuffer, "%f", y);
    goto LABEL_52;
  }
LABEL_147:
  v69 = y;
  v66 = y;
  if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
  {
    if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
    {
      v54 = pOutBuffer->m_Put;
      v62 = &pOutBuffer->m_Memory.m_pMemory[v54 - pOutBuffer->m_nOffset];
      if ( v62 != 0 )
      {
        LOBYTE(v81) = HIBYTE(v69);
        BYTE1(v81) = BYTE2(v69);
        BYTE2(v81) = BYTE1(v69);
        HIBYTE(v81) = LOBYTE(v69);
        *v62 = v81;
        v54 = pOutBuffer->m_Put;
      }
    }
    else
    {
      *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = v66;
      v54 = pOutBuffer->m_Put;
    }
    pOutBuffer->m_Put = v54 + 4;
    CUtlBuffer::AddNullTermination(pOutBuffer);
  }
LABEL_52:
  v28 = pOutBuffer->m_Put;
  v29 = v28 - m_Put;
  if ( v29 <= 127 )
  {
    v30 = pOutBuffer->m_Flags;
    if ( (v30 & 1) != 0 )
      goto LABEL_54;
    while ( 1 )
    {
LABEL_65:
      if ( v28 == 0 )
        goto LABEL_56;
      while ( 1 )
      {
LABEL_61:
        if ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
        {
          pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 0;
          ++pOutBuffer->m_Put;
          CUtlBuffer::AddNullTermination(pOutBuffer);
        }
        if ( ++v29 == 128 )
          goto LABEL_79;
        v30 = pOutBuffer->m_Flags;
        v28 = pOutBuffer->m_Put;
        if ( (v30 & 1) == 0 )
          break;
LABEL_54:
        v31 = pOutBuffer->m_nOffset;
        if ( v28 == v31 || pOutBuffer->m_Memory.m_pMemory[v28 - 1 - v31] != 10 )
          goto LABEL_65;
LABEL_56:
        v32 = 0;
        if ( (v30 & 0x10) == 0 )
          v32 = pOutBuffer->m_nTab;
        while ( --v32 >= 0 )
        {
          while ( CUtlBuffer::CheckPut(pOutBuffer, 1) )
          {
            pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = 9;
            ++pOutBuffer->m_Put;
            CUtlBuffer::AddNullTermination(pOutBuffer);
            if ( --v32 < 0 )
              goto LABEL_61;
          }
        }
      }
    }
  }
LABEL_79:
  if ( m_Size > 0 )
  {
    v33 = 0;
    v34 = 4 * (3LL * (m_Size - 1) + 3);
    while ( 1 )
    {
      m_pMemory = this->m_Cells.m_Memory.m_pMemory;
      if ( (pOutBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(pOutBuffer, "%f", m_pMemory[v33 / 0xC].m_flConstantHeight);
      }
      else
      {
        m_flConstantHeight = m_pMemory[v33 / 0xC].m_flConstantHeight;
        if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
        {
          if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
          {
            v38 = pOutBuffer->m_Put;
            v44 = &pOutBuffer->m_Memory.m_pMemory[v38 - pOutBuffer->m_nOffset];
            if ( v44 != 0 )
            {
              LOBYTE(v73) = HIBYTE(m_flConstantHeight);
              BYTE1(v73) = BYTE2(m_flConstantHeight);
              BYTE2(v73) = BYTE1(m_flConstantHeight);
              HIBYTE(v73) = LOBYTE(m_flConstantHeight);
              *v44 = v73;
              v38 = pOutBuffer->m_Put;
            }
          }
          else
          {
            *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = m_flConstantHeight;
            v38 = pOutBuffer->m_Put;
          }
          pOutBuffer->m_Put = v38 + 4;
          CUtlBuffer::AddNullTermination(pOutBuffer);
        }
      }
      v35 = this->m_Cells.m_Memory.m_pMemory;
      if ( (pOutBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(pOutBuffer, "%f", v35[v33 / 0xC].m_flSecondaryHeight);
      }
      else
      {
        m_flSecondaryHeight = v35[v33 / 0xC].m_flSecondaryHeight;
        if ( CUtlBuffer::CheckPut(pOutBuffer, 4) )
        {
          if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
          {
            v43 = pOutBuffer->m_Put;
            v45 = &pOutBuffer->m_Memory.m_pMemory[v43 - pOutBuffer->m_nOffset];
            if ( v45 != 0 )
            {
              LOBYTE(v74) = HIBYTE(m_flSecondaryHeight);
              BYTE1(v74) = BYTE2(m_flSecondaryHeight);
              BYTE2(v74) = BYTE1(m_flSecondaryHeight);
              HIBYTE(v74) = LOBYTE(m_flSecondaryHeight);
              *v45 = v74;
              v43 = pOutBuffer->m_Put;
            }
          }
          else
          {
            *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = m_flSecondaryHeight;
            v43 = pOutBuffer->m_Put;
          }
          pOutBuffer->m_Put = v43 + 4;
          CUtlBuffer::AddNullTermination(pOutBuffer);
        }
      }
      v36 = this->m_Cells.m_Memory.m_pMemory[v33 / 0xC].m_HeightDataOffset != -1;
      if ( (pOutBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(pOutBuffer, "%hu", v36);
LABEL_86:
        v33 += 12LL;
        if ( v33 == v34 )
          break;
      }
      else
      {
        if ( !CUtlBuffer::CheckPut(pOutBuffer, 1) )
          goto LABEL_86;
        v33 += 12LL;
        pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = v36;
        ++pOutBuffer->m_Put;
        CUtlBuffer::AddNullTermination(pOutBuffer);
        if ( v33 == v34 )
          break;
      }
    }
  }
  if ( v63 > 0 )
  {
    v39 = 0;
    v40 = 4LL * (v63 - 1) + 4;
    do
    {
      while ( 1 )
      {
        v41 = this->m_HeightData.m_Memory.m_pMemory;
        if ( (pOutBuffer->m_Flags & 1) == 0 )
          break;
        CUtlBuffer::Printf(pOutBuffer, "%f", v41[v39 / 4]);
LABEL_97:
        v39 += 4LL;
        if ( v39 == v40 )
          return;
      }
      v72 = v41[v39 / 4];
      if ( !CUtlBuffer::CheckPut(pOutBuffer, 4) )
        goto LABEL_97;
      if ( (*&pOutBuffer->m_Byteswap & 1) != 0 )
      {
        v42 = pOutBuffer->m_Put;
        v46 = &pOutBuffer->m_Memory.m_pMemory[v42 - pOutBuffer->m_nOffset];
        if ( v46 != 0 )
        {
          LOBYTE(v75) = HIBYTE(v72);
          BYTE1(v75) = BYTE2(v72);
          BYTE2(v75) = BYTE1(v72);
          HIBYTE(v75) = LOBYTE(v72);
          *v46 = v75;
          v42 = pOutBuffer->m_Put;
        }
      }
      else
      {
        *&pOutBuffer->m_Memory.m_pMemory[pOutBuffer->m_Put - pOutBuffer->m_nOffset] = v72;
        v42 = pOutBuffer->m_Put;
      }
      v39 += 4LL;
      pOutBuffer->m_Put = v42 + 4;
      CUtlBuffer::AddNullTermination(pOutBuffer);
    }
    while ( v39 != v40 );
  }
}


// CHeightCellGrid::UnserializeFromBuffer  (line 414, @0x00000000031c59a0, libserver.so)  // inlines: GetChar, GetFloat, GetInt, GetNumTotalSamplesPerCell, GetType<float>, GetType<int>, GetType<short unsigned int>, GetTypeBin<char>, GetTypeBin<float>, GetTypeBin<int>, GetTypeBin<unsigned char>, GetTypeText<float>, GetTypeText<int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekGet, StringToNumber<float>, StringToNumber<int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::SeekGet, CUtlVectorBase<CHeightCellGrid::HeightCell_t, CUtlMemory<CHeightCellGrid::HeightCell_t, int> >::SetCount, V_strtod, V_strtoui64, V_strtoi64, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount
bool __fastcall CHeightCellGrid::UnserializeFromBuffer(CHeightCellGrid *const this, CUtlBuffer *const buffer)
{
  unsigned __int8 v3; // r12
  int v5; // edx
  unsigned __int8 v6; // r13
  int v7; // edx
  unsigned __int8 v8; // r14
  int v9; // edx
  bool v10; // al
  unsigned __int8 v11; // dl
  int v12; // edx
  int v13; // eax
  float v15; // r12d
  int v16; // r12d
  int v17; // r14d
  __int64 v18; // rax
  int *v19; // r12
  bool v20; // al
  float v21; // xmm0_4
  CHeightCellGrid::HeightCell_t *v22; // r13
  bool v23; // al
  float v24; // xmm0_4
  CHeightCellGrid::HeightCell_t *v25; // r13
  bool v26; // al
  int v27; // eax
  bool v28; // zf
  int v29; // eax
  int v30; // edx
  unsigned __int8 v31; // al
  bool v32; // al
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // r13d
  int v37; // r12d
  __int64 v38; // r13
  unsigned __int64 v39; // r14
  bool v40; // al
  float v41; // xmm0_4
  float *v42; // r12
  bool v43; // al
  int v44; // eax
  float *v45; // rax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // r13d
  int v50; // r13d
  int v51; // r13d
  float v52; // xmm2_4
  int v53; // r13d
  float v54; // xmm1_4
  int v55; // r13d
  float v56; // xmm3_4
  int v57; // r13d
  int v58; // r12d
  float *v59; // rax
  float *v60; // rax
  float *v61; // rax
  float *v62; // rax
  int v63; // [rsp+8h] [rbp-58h]
  int v64; // [rsp+8h] [rbp-58h]
  int v65; // [rsp+10h] [rbp-50h]
  int v66; // [rsp+10h] [rbp-50h]
  int m_Get; // [rsp+18h] [rbp-48h]
  int *v68; // [rsp+18h] [rbp-48h]
  float v69; // [rsp+20h] [rbp-40h] BYREF
  int nIncrement; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v71[7]; // [rsp+28h] [rbp-38h] BYREF

  v3 = 0;
  m_Get = buffer->m_Get;
  if ( CUtlBuffer::CheckGet(buffer, 1) )
  {
    v5 = buffer->m_Get;
    v3 = buffer->m_Memory.m_pMemory[v5 - buffer->m_nOffset];
    buffer->m_Get = v5 + 1;
  }
  v6 = 0;
  if ( CUtlBuffer::CheckGet(buffer, 1) )
  {
    v7 = buffer->m_Get;
    v6 = buffer->m_Memory.m_pMemory[v7 - buffer->m_nOffset];
    buffer->m_Get = v7 + 1;
  }
  v8 = 0;
  if ( CUtlBuffer::CheckGet(buffer, 1) )
  {
    v9 = buffer->m_Get;
    v8 = buffer->m_Memory.m_pMemory[v9 - buffer->m_nOffset];
    buffer->m_Get = v9 + 1;
  }
  v10 = CUtlBuffer::CheckGet(buffer, 1);
  v11 = 0;
  if ( v10 )
  {
    v12 = buffer->m_Get;
    v13 = v12 + 1;
    v11 = buffer->m_Memory.m_pMemory[v12 - buffer->m_nOffset];
    buffer->m_Get = v13;
  }
  if ( v3 == 118 && v6 == 104 && v8 == 99 && v11 == 103 )
  {
    if ( (buffer->m_Flags & 1) != 0 )
    {
      nIncrement = 128;
      if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        goto LABEL_16;
      v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
      v37 = v71[0];
      v35 = V_strtoi64(v71[0], v71, 10);
      v69 = *&v35;
      if ( LODWORD(v71[0]) != v37 )
        buffer->m_Get += LODWORD(v71[0]) - v37;
    }
    else
    {
      if ( !CUtlBuffer::CheckGet(buffer, 4) )
        goto LABEL_16;
      if ( (*&buffer->m_Byteswap & 1) != 0 )
      {
        v34 = buffer->m_Get;
        v45 = &buffer->m_Memory.m_pMemory[v34 - buffer->m_nOffset];
        if ( v45 == 0 )
          v45 = &v69;
        *v71 = v69;
        LOBYTE(v71[0]) = *(v45 + 3);
        BYTE1(v71[0]) = *(v45 + 2);
        BYTE2(v71[0]) = *(v45 + 1);
        BYTE3(v71[0]) = *v45;
        v35 = v71[0];
      }
      else
      {
        v34 = buffer->m_Get;
        v35 = *&buffer->m_Memory.m_pMemory[v34 - buffer->m_nOffset];
      }
      buffer->m_Get = v34 + 4;
    }
    if ( v35 <= 1 )
    {
LABEL_16:
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
LABEL_18:
          v69 = 0.0;
          goto LABEL_19;
        }
        v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        v58 = v71[0];
        LODWORD(v69) = V_strtoi64(v71[0], v71, 10);
        if ( LODWORD(v71[0]) != v58 )
          buffer->m_Get += LODWORD(v71[0]) - v58;
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buffer, 4) )
          goto LABEL_18;
        if ( (*&buffer->m_Byteswap & 1) != 0 )
        {
          v60 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          if ( v60 == 0 )
            v60 = &v69;
          *v71 = v69;
          LOBYTE(v71[0]) = *(v60 + 3);
          BYTE1(v71[0]) = *(v60 + 2);
          BYTE2(v71[0]) = *(v60 + 1);
          BYTE3(v71[0]) = *v60;
          v69 = *v71;
        }
        else
        {
          v69 = *&buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        }
        buffer->m_Get += 4;
      }
LABEL_19:
      v15 = v69;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
LABEL_21:
          v69 = 0.0;
          goto LABEL_22;
        }
        v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        v57 = v71[0];
        LODWORD(v69) = V_strtoi64(v71[0], v71, 10);
        if ( LODWORD(v71[0]) != v57 )
          buffer->m_Get += LODWORD(v71[0]) - v57;
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buffer, 4) )
          goto LABEL_21;
        if ( (*&buffer->m_Byteswap & 1) != 0 )
        {
          v59 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          if ( v59 == 0 )
            v59 = &v69;
          *v71 = v69;
          LOBYTE(v71[0]) = *(v59 + 3);
          BYTE1(v71[0]) = *(v59 + 2);
          BYTE2(v71[0]) = *(v59 + 1);
          BYTE3(v71[0]) = *v59;
          v69 = *v71;
        }
        else
        {
          v69 = *&buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        }
        buffer->m_Get += 4;
      }
LABEL_22:
      *&this->m_nNumCellsX = v69;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
LABEL_24:
          v69 = 0.0;
          goto LABEL_25;
        }
        v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        v50 = v71[0];
        LODWORD(v69) = V_strtoi64(v71[0], v71, 10);
        if ( LODWORD(v71[0]) != v50 )
          buffer->m_Get += LODWORD(v71[0]) - v50;
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buffer, 4) )
          goto LABEL_24;
        if ( (*&buffer->m_Byteswap & 1) != 0 )
        {
          v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          if ( v62 == 0 )
            v62 = &v69;
          *v71 = v69;
          LOBYTE(v71[0]) = *(v62 + 3);
          BYTE1(v71[0]) = *(v62 + 2);
          BYTE2(v71[0]) = *(v62 + 1);
          BYTE3(v71[0]) = *v62;
          v69 = *v71;
        }
        else
        {
          v69 = *&buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        }
        buffer->m_Get += 4;
      }
LABEL_25:
      *&this->m_nNumCellsY = v69;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
LABEL_27:
          v69 = 0.0;
          goto LABEL_28;
        }
        v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        v49 = v71[0];
        LODWORD(v69) = V_strtoi64(v71[0], v71, 10);
        if ( LODWORD(v71[0]) != v49 )
          buffer->m_Get += LODWORD(v71[0]) - v49;
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buffer, 4) )
          goto LABEL_27;
        if ( (*&buffer->m_Byteswap & 1) != 0 )
        {
          v61 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          if ( v61 == 0 )
            v61 = &v69;
          *v71 = v69;
          LOBYTE(v71[0]) = *(v61 + 3);
          BYTE1(v71[0]) = *(v61 + 2);
          BYTE2(v71[0]) = *(v61 + 1);
          BYTE3(v71[0]) = *v61;
          v69 = *v71;
        }
        else
        {
          v69 = *&buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        }
        buffer->m_Get += 4;
      }
LABEL_28:
      *&this->m_nCellSamplesPerAxis = v69;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
LABEL_30:
          v69 = 0.0;
          goto LABEL_31;
        }
        v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        v53 = v71[0];
        v54 = V_strtod(v71[0], v71);
        v69 = v54;
        if ( LODWORD(v71[0]) != v53 )
          buffer->m_Get += LODWORD(v71[0]) - v53;
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buffer, 4) )
          goto LABEL_30;
        v48 = buffer->m_Get;
        v28 = (*&buffer->m_Byteswap & 1) == 0;
        v69 = *&buffer->m_Memory.m_pMemory[v48 - buffer->m_nOffset];
        if ( !v28 )
        {
          LOBYTE(v71[0]) = HIBYTE(v69);
          BYTE1(v71[0]) = BYTE2(v69);
          BYTE2(v71[0]) = BYTE1(v69);
          BYTE3(v71[0]) = LOBYTE(v69);
          v69 = *v71;
        }
        buffer->m_Get = v48 + 4;
      }
LABEL_31:
      this->m_flCellSize = v69;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
LABEL_33:
          v69 = 0.0;
          goto LABEL_34;
        }
        v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        v51 = v71[0];
        v52 = V_strtod(v71[0], v71);
        v69 = v52;
        if ( LODWORD(v71[0]) != v51 )
          buffer->m_Get += LODWORD(v71[0]) - v51;
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buffer, 4) )
          goto LABEL_33;
        v47 = buffer->m_Get;
        v28 = (*&buffer->m_Byteswap & 1) == 0;
        v69 = *&buffer->m_Memory.m_pMemory[v47 - buffer->m_nOffset];
        if ( !v28 )
        {
          LOBYTE(v71[0]) = HIBYTE(v69);
          BYTE1(v71[0]) = BYTE2(v69);
          BYTE2(v71[0]) = BYTE1(v69);
          BYTE3(v71[0]) = LOBYTE(v69);
          v69 = *v71;
        }
        buffer->m_Get = v47 + 4;
      }
LABEL_34:
      this->m_vOrigin.x = v69;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
          v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          v55 = v71[0];
          v56 = V_strtod(v71[0], v71);
          v69 = v56;
          if ( LODWORD(v71[0]) != v55 )
            buffer->m_Get += LODWORD(v71[0]) - v55;
          goto LABEL_37;
        }
      }
      else if ( CUtlBuffer::CheckGet(buffer, 4) )
      {
        v46 = buffer->m_Get;
        v28 = (*&buffer->m_Byteswap & 1) == 0;
        v69 = *&buffer->m_Memory.m_pMemory[v46 - buffer->m_nOffset];
        if ( !v28 )
        {
          LOBYTE(v71[0]) = HIBYTE(v69);
          BYTE1(v71[0]) = BYTE2(v69);
          BYTE2(v71[0]) = BYTE1(v69);
          BYTE3(v71[0]) = LOBYTE(v69);
          v69 = *v71;
        }
        buffer->m_Get = v46 + 4;
        goto LABEL_37;
      }
      v69 = 0.0;
LABEL_37:
      this->m_vOrigin.y = v69;
      CUtlBuffer::SeekGet(buffer, CUtlBuffer::SeekType_t::SEEK_HEAD, LODWORD(v15) + m_Get);
      v16 = this->m_nNumCellsY * this->m_nNumCellsX;
      CUtlVectorBase<CHeightCellGrid::HeightCell_t,CUtlMemory<CHeightCellGrid::HeightCell_t,int>>::SetCount(
        &this->m_Cells,
        v16);
      v65 = this->m_nCellSamplesPerAxis * this->m_nCellSamplesPerAxis;
      if ( v16 <= 0 )
      {
        CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&this->m_HeightData, 0);
        return 1;
      }
      v17 = 0;
      v18 = 3LL * (v16 - 1) + 3;
      v19 = 0;
      v68 = (4 * v18);
      do
      {
        v25 = (this->m_Cells.m_Memory.m_pMemory + v19);
        if ( (buffer->m_Flags & 1) != 0 )
        {
          nIncrement = 128;
          v20 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement);
          v21 = 0.0;
          if ( v20 )
          {
            v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
            v63 = v71[0];
            v21 = V_strtod(v71[0], v71);
            v69 = v21;
            if ( LODWORD(v71[0]) != v63 )
              buffer->m_Get += LODWORD(v71[0]) - v63;
          }
        }
        else
        {
          v26 = CUtlBuffer::CheckGet(buffer, 4);
          v21 = 0.0;
          if ( v26 )
          {
            v27 = buffer->m_Get;
            v28 = (*&buffer->m_Byteswap & 1) == 0;
            v21 = *&buffer->m_Memory.m_pMemory[v27 - buffer->m_nOffset];
            v69 = v21;
            if ( !v28 )
            {
              LOBYTE(v71[0]) = HIBYTE(v69);
              BYTE1(v71[0]) = BYTE2(v69);
              BYTE2(v71[0]) = BYTE1(v69);
              BYTE3(v71[0]) = LOBYTE(v69);
              v21 = *v71;
            }
            buffer->m_Get = v27 + 4;
          }
        }
        v25->m_flConstantHeight = v21;
        v22 = (this->m_Cells.m_Memory.m_pMemory + v19);
        if ( (buffer->m_Flags & 1) != 0 )
        {
          nIncrement = 128;
          v23 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement);
          v24 = 0.0;
          if ( v23 )
          {
            v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
            v64 = v71[0];
            v24 = V_strtod(v71[0], v71);
            v69 = v24;
            if ( LODWORD(v71[0]) != v64 )
              buffer->m_Get += LODWORD(v71[0]) - v64;
          }
        }
        else
        {
          v32 = CUtlBuffer::CheckGet(buffer, 4);
          v24 = 0.0;
          if ( v32 )
          {
            v33 = buffer->m_Get;
            v28 = (*&buffer->m_Byteswap & 1) == 0;
            v24 = *&buffer->m_Memory.m_pMemory[v33 - buffer->m_nOffset];
            v69 = v24;
            if ( !v28 )
            {
              LOBYTE(v71[0]) = HIBYTE(v69);
              BYTE1(v71[0]) = BYTE2(v69);
              BYTE2(v71[0]) = BYTE1(v69);
              BYTE3(v71[0]) = LOBYTE(v69);
              v24 = *v71;
            }
            buffer->m_Get = v33 + 4;
          }
        }
        v22->m_flSecondaryHeight = v24;
        if ( (buffer->m_Flags & 1) != 0 )
        {
          nIncrement = 128;
          if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
            goto LABEL_44;
          v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          v36 = v71[0];
          v31 = V_strtoui64(v71[0], v71, 10);
          if ( LODWORD(v71[0]) != v36 )
            buffer->m_Get += LODWORD(v71[0]) - v36;
        }
        else
        {
          if ( !CUtlBuffer::CheckGet(buffer, 1) )
            goto LABEL_44;
          v29 = buffer->m_Get;
          v30 = v29 + 1;
          v31 = buffer->m_Memory.m_pMemory[v29 - buffer->m_nOffset];
          buffer->m_Get = v30;
        }
        if ( v31 == 0 )
        {
LABEL_44:
          *(&this->m_Cells.m_Memory.m_pMemory->m_HeightDataOffset + v19) = -1;
          goto LABEL_45;
        }
        *(&this->m_Cells.m_Memory.m_pMemory->m_HeightDataOffset + v19) = v17;
        v17 += v65;
LABEL_45:
        v19 += 3;
      }
      while ( v19 != v68 );
      CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&this->m_HeightData, v17);
      if ( v17 > 0 )
      {
        v38 = 4LL * (v17 - 1) + 4;
        v39 = 0;
        do
        {
          v42 = &this->m_HeightData.m_Memory.m_pMemory[v39 / 4];
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement = 128;
            v40 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement);
            v41 = 0.0;
            if ( v40 )
            {
              v71[0] = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v66 = v71[0];
              v41 = V_strtod(v71[0], v71);
              v69 = v41;
              if ( LODWORD(v71[0]) != v66 )
                buffer->m_Get += LODWORD(v71[0]) - v66;
            }
          }
          else
          {
            v43 = CUtlBuffer::CheckGet(buffer, 4);
            v41 = 0.0;
            if ( v43 )
            {
              v44 = buffer->m_Get;
              v28 = (*&buffer->m_Byteswap & 1) == 0;
              v41 = *&buffer->m_Memory.m_pMemory[v44 - buffer->m_nOffset];
              v69 = v41;
              if ( !v28 )
              {
                LOBYTE(v71[0]) = HIBYTE(v69);
                BYTE1(v71[0]) = BYTE2(v69);
                BYTE2(v71[0]) = BYTE1(v69);
                BYTE3(v71[0]) = LOBYTE(v69);
                v41 = *v71;
              }
              buffer->m_Get = v44 + 4;
            }
          }
          v39 += 4LL;
          *v42 = v41;
        }
        while ( v39 != v38 );
      }
      return 1;
    }
  }
  return 0;
}


