
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGridNavBase::~CGridNavBase  (line 35, @0x000000000255e110, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<unsigned char, int>::Purge
void __fastcall CGridNavBase::~CGridNavBase(CGridNavBase *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned char,int> *p_m_Memory; // r12

  v2 = (this->m_CellFlags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40F6C10;
  this->m_CellFlags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_CellFlags.m_Memory;
    CUtlMemory<unsigned char,int>::Purge(&this->m_CellFlags.m_Memory);
    if ( (this->m_CellFlags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CGridNavBase::~CGridNavBase  (line 35, @0x000000000255e2a0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CGridNavBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<unsigned char, int>::Purge
void __fastcall CGridNavBase::~CGridNavBase(CGridNavBase *const this)
{
  bool v2; // zf
  CUtlMemory<unsigned char,int> *p_m_Memory; // r12

  v2 = (this->m_CellFlags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40F6C10;
  this->m_CellFlags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_CellFlags.m_Memory;
    CUtlMemory<unsigned char,int>::Purge(&this->m_CellFlags.m_Memory);
    if ( (this->m_CellFlags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CGridNavBase::WorldToGridPosX  (line 122, @0x0000000002555d10, libserver.so)
// calls: floorf
__int64 __fastcall CGridNavBase::WorldToGridPosX(const CGridNavBase *const this, float a2, float flWorldX)
{
  return floorf(((a2 - this->m_flOffsetX) + (0.5 * this->m_flEdgeSize)) / this->m_flEdgeSize);
}


// CGridNavBase::WorldToGridPosY  (line 130, @0x0000000002555ce0, libserver.so)
// calls: floorf
__int64 __fastcall CGridNavBase::WorldToGridPosY(const CGridNavBase *const this, float a2, float flWorldY)
{
  return floorf(((a2 - this->m_flOffsetY) + (0.5 * this->m_flEdgeSize)) / this->m_flEdgeSize);
}


// CGridNavBase::GridPosToWorldCenterX  (line 138, @0x0000000002552570, libserver.so)
float __fastcall CGridNavBase::GridPosToWorldCenterX(const CGridNavBase *const this, int nGridPosX)
{
  return (nGridPosX * this->m_flEdgeSize) + this->m_flOffsetX;
}


// CGridNavBase::GridPosToWorldCenterY  (line 146, @0x0000000002552590, libserver.so)
float __fastcall CGridNavBase::GridPosToWorldCenterY(const CGridNavBase *const this, int nGridPosY)
{
  return (nGridPosY * this->m_flEdgeSize) + this->m_flOffsetY;
}


// CGridNavBase::IsTraversable  (line 216, @0x000000000255ec70, libserver.so)  // inlines: GetCellFlags, GetCellIndex, GetFlagsForCellAtPosition, OutOfBounds, WorldToGridPosX, WorldToGridPosY
// calls: floorf
bool __fastcall CGridNavBase::IsTraversable(const CGridNavBase *const this, const Vector *const vPosition)
{
  int v4; // r12d
  float v5; // xmm0_4
  int m_nMinX; // edx
  bool result; // al
  int v8; // ecx
  int m_nMinY; // esi
  float m_flEdgeSize; // [rsp+Ch] [rbp-24h]

  m_flEdgeSize = this->m_flEdgeSize;
  v4 = floorf(((vPosition->x - this->m_flOffsetX) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  v5 = floorf(((vPosition->y - this->m_flOffsetY) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  m_nMinX = this->m_nMinX;
  result = 0;
  if ( v4 >= m_nMinX && v4 <= this->m_nMaxX )
  {
    v8 = v5;
    m_nMinY = this->m_nMinY;
    if ( v5 >= m_nMinY && v8 <= this->m_nMaxY )
      return (this->m_CellFlags.m_Memory.m_pMemory[v4 - m_nMinX + this->m_nWidth * (v8 - m_nMinY)] & 1) != 0;
  }
  return result;
}


// CGridNavBase::IsBlocked  (line 224, @0x000000000255cfd0, libserver.so)  // inlines: GetCellFlags, GetCellIndex, GetFlagsForCellAtPosition, OutOfBounds, WorldToGridPosX, WorldToGridPosY
// calls: floorf
bool __fastcall CGridNavBase::IsBlocked(const CGridNavBase *const this, const Vector *const vPosition)
{
  int v4; // r12d
  float v5; // xmm0_4
  int m_nMinX; // edx
  bool result; // al
  int v8; // ecx
  int m_nMinY; // esi
  float m_flEdgeSize; // [rsp+Ch] [rbp-24h]

  m_flEdgeSize = this->m_flEdgeSize;
  v4 = floorf(((vPosition->x - this->m_flOffsetX) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  v5 = floorf(((vPosition->y - this->m_flOffsetY) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  m_nMinX = this->m_nMinX;
  result = 0;
  if ( v4 >= m_nMinX && v4 <= this->m_nMaxX )
  {
    v8 = v5;
    m_nMinY = this->m_nMinY;
    if ( v5 >= m_nMinY && v8 <= this->m_nMaxY )
      return (this->m_CellFlags.m_Memory.m_pMemory[v4 - m_nMinX + this->m_nWidth * (v8 - m_nMinY)] & 2) != 0;
  }
  return result;
}


