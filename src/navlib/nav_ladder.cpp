
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_ladder.cpp  (line 0, @0x0000000001a6daa0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_nav_ladder_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CNavLadder::CNavLadder  (line 23, @0x00000000031edff0, libserver.so)
// callers: CNavMesh::LoadNavMesh, CNavMesh::CreateLadder
// globals: CNavLadder::m_nextID
void __fastcall CNavLadder::CNavLadder(CNavLadder *const this, CNavMesh *const rNavMesh)
{
  uint32 v2; // eax

  v2 = CNavLadder::m_nextID;
  this->m_nLadderTeam = -1;
  this->m_rNavMesh = rNavMesh;
  this->m_pTopForwardArea = 0;
  this->m_pTopRightArea = 0;
  this->m_pTopLeftArea = 0;
  this->m_pTopBehindArea = 0;
  this->m_pBottomArea = 0;
  CNavLadder::m_nextID = v2 + 1;
  this->m_id = v2;
}


// CNavLadder::~CNavLadder  (line 38, @0x00000000031ee040, libserver.so)
// callers: CNavEditor::CommandNavDeleteMarked, CNavEditor::CommandNavDelete, CNavMesh::DestroyLadders
void __fastcall CNavLadder::~CNavLadder(CNavLadder *const this)
{
  CNavArea *m_pTopForwardArea; // rdi
  CNavArea *m_pTopRightArea; // rdi
  CNavArea *m_pTopLeftArea; // rdi
  CNavArea *m_pTopBehindArea; // rdi
  CNavArea *m_pBottomArea; // rdi

  m_pTopForwardArea = this->m_pTopForwardArea;
  if ( m_pTopForwardArea != 0 )
    (*(m_pTopForwardArea->_vptr_CNavPoly + 20))(m_pTopForwardArea, this);
  m_pTopRightArea = this->m_pTopRightArea;
  if ( m_pTopRightArea != 0 )
    (*(m_pTopRightArea->_vptr_CNavPoly + 20))(m_pTopRightArea, this);
  m_pTopLeftArea = this->m_pTopLeftArea;
  if ( m_pTopLeftArea != 0 )
    (*(m_pTopLeftArea->_vptr_CNavPoly + 20))(m_pTopLeftArea, this);
  m_pTopBehindArea = this->m_pTopBehindArea;
  if ( m_pTopBehindArea != 0 )
    (*(m_pTopBehindArea->_vptr_CNavPoly + 20))(m_pTopBehindArea, this);
  m_pBottomArea = this->m_pBottomArea;
  if ( m_pBottomArea != 0 )
    (*(m_pBottomArea->_vptr_CNavPoly + 20))(m_pBottomArea, this);
}


// CNavLadder::Shift  (line 55, @0x00000000031ee0d0, libserver.so)  // inlines: operator+=
// callers: CNavArea::ShiftAreaAndLadders
void __fastcall CNavLadder::Shift(CNavLadder *const this, const Vector *const vShift)
{
  this->m_vTop.x = this->m_vTop.x + vShift->x;
  this->m_vTop.y = this->m_vTop.y + vShift->y;
  this->m_vTop.z = this->m_vTop.z + vShift->z;
  this->m_vBottom.x = this->m_vBottom.x + vShift->x;
  this->m_vBottom.y = this->m_vBottom.y + vShift->y;
  this->m_vBottom.z = this->m_vBottom.z + vShift->z;
}


// CNavLadder::CompressIDs  (line 63, @0x00000000031ee130, libserver.so)
// callers: CommandNavCompressID, CNavMesh::DestroyNavigationMesh
// globals: CNavLadder::m_nextID
void __fastcall CNavLadder::CompressIDs(const NavLadderVector *const rNavLadders)
{
  __int64 v1; // rdx
  int v2; // eax
  CNavLadder *v3; // rsi

  v1 = 0;
  v2 = 1;
  CNavLadder::m_nextID = 1;
  if ( rNavLadders->m_Size > 0 )
  {
    while ( 1 )
    {
      v3 = rNavLadders->m_Memory.m_pMemory[v1++];
      CNavLadder::m_nextID = v2 + 1;
      v3->m_id = v2;
      if ( rNavLadders->m_Size <= v2 )
        break;
      ++v2;
    }
  }
}


// CNavLadder::GetConnection  (line 76, @0x00000000031ee170, libserver.so)
// globals: jpt_31EE189
CNavArea **__fastcall CNavLadder::GetConnection(CNavLadder *const this, NavLadderConnectionType dir)
{
  CNavArea **result; // rax

  switch ( dir )
  {
    case NavLadderConnectionType::LADDER_CONNECTION_MIN:
      result = &this->m_pTopForwardArea;
      break;
    case NavLadderConnectionType::LADDER_TOP_LEFT:
      result = &this->m_pTopLeftArea;
      break;
    case NavLadderConnectionType::LADDER_TOP_RIGHT:
      result = &this->m_pTopRightArea;
      break;
    case NavLadderConnectionType::LADDER_TOP_BEHIND:
      result = &this->m_pTopBehindArea;
      break;
    case NavLadderConnectionType::LADDER_BOTTOM:
      result = &this->m_pBottomArea;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// CNavLadder::GetConnection  (line 95, @0x00000000031ee1e0, libserver.so)
// callers: CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection, CNavGenOutputLadderConnectionsIterator::GetArea
// globals: jpt_31EE1F9
const CNavArea *__fastcall CNavLadder::GetConnection(const CNavLadder *const this, NavLadderConnectionType dir)
{
  const CNavArea *result; // rax

  switch ( dir )
  {
    case NavLadderConnectionType::LADDER_CONNECTION_MIN:
      result = this->m_pTopForwardArea;
      break;
    case NavLadderConnectionType::LADDER_TOP_LEFT:
      result = this->m_pTopLeftArea;
      break;
    case NavLadderConnectionType::LADDER_TOP_RIGHT:
      result = this->m_pTopRightArea;
      break;
    case NavLadderConnectionType::LADDER_TOP_BEHIND:
      result = this->m_pTopBehindArea;
      break;
    case NavLadderConnectionType::LADDER_BOTTOM:
      result = this->m_pBottomArea;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// CNavLadder::OnSplit  (line 116, @0x00000000031ee250, libserver.so)  // inlines: GetConnection, VectorAdd, VectorDivide, operator+, operator/
// calls: CNavPoly::CalcDistanceSquaredToPoint
// callers: CNavArea::SplitArea, CNavArea::SplitArea_Old
void __fastcall CNavLadder::OnSplit(
        CNavLadder *const this,
        CNavArea *pAreaOriginal,
        CUtlVectorFixed<CNavArea*,3ul> *const rNewAreas)
{
  int v3; // r15d
  vec_t v5; // xmm1_4
  vec_t v6; // xmm0_4
  CNavArea **p_m_pTopRightArea; // r14
  CUtlVectorBase<CNavArea*,CUtlMemoryFixed<CNavArea*,3ul> >::CAllocator *p_m_Memory; // r12
  __int64 v9; // rbx
  float v10; // xmm0_4
  __int64 v11; // rax
  int nClosestArea; // [rsp+14h] [rbp-5Ch]
  int m_Size; // [rsp+20h] [rbp-50h]
  float flClosestAreaDistSqr; // [rsp+24h] [rbp-4Ch]
  Vector vLadderPos; // [rsp+30h] [rbp-40h] BYREF

  v3 = 0;
  v5 = (this->m_vTop.z + this->m_vBottom.z) * 0.5;
  v6 = (this->m_vTop.x + this->m_vBottom.x) * 0.5;
  vLadderPos.y = (this->m_vTop.y + this->m_vBottom.y) * 0.5;
  vLadderPos.z = v5;
  vLadderPos.x = v6;
  do
  {
    while ( 1 )
    {
      if ( v3 == 2 )
      {
        p_m_pTopRightArea = &this->m_pTopRightArea;
        goto LABEL_4;
      }
      if ( v3 > 2 )
        break;
      p_m_pTopRightArea = &this->m_pTopLeftArea;
      if ( v3 != 1 )
        goto LABEL_9;
LABEL_4:
      if ( *p_m_pTopRightArea == pAreaOriginal )
        goto LABEL_10;
LABEL_5:
      if ( ++v3 == 5 )
        return;
    }
    p_m_pTopRightArea = &this->m_pTopBehindArea;
    if ( v3 == 3 )
      goto LABEL_4;
    p_m_pTopRightArea = &this->m_pBottomArea;
    if ( v3 == 4 )
      goto LABEL_4;
LABEL_9:
    p_m_pTopRightArea = &this->m_pTopForwardArea;
    if ( this->m_pTopForwardArea != pAreaOriginal )
      goto LABEL_5;
LABEL_10:
    m_Size = rNewAreas->m_Size;
    p_m_Memory = &rNewAreas->m_Memory;
    if ( rNewAreas->m_Size != 0 )
    {
      v9 = 0;
      flClosestAreaDistSqr = 3.4028235e38;
      nClosestArea = -1;
      do
      {
        v10 = CNavPoly::CalcDistanceSquaredToPoint(*&p_m_Memory->m_Memory.m_Data[8 * v9], &vLadderPos);
        if ( flClosestAreaDistSqr > v10 )
        {
          flClosestAreaDistSqr = v10;
          nClosestArea = v9;
        }
        ++v9;
      }
      while ( m_Size != v9 );
      v11 = 8LL * nClosestArea;
    }
    else
    {
      v11 = -8;
    }
    ++v3;
    *p_m_pTopRightArea = *&p_m_Memory->m_Memory.m_Data[v11];
  }
  while ( v3 != 5 );
}


// CNavLadder::ConnectTo  (line 144, @0x00000000031ee3b0, libserver.so)  // inlines: NavDirOpposite, VectorSubtract, operator-
// callers: CNavEditor::CommandNavConnect
// globals: CSWTCH.833
void __fastcall CNavLadder::ConnectTo(CNavLadder *const this, CNavArea *pArea)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  __int64 m_dir; // r8
  int v5; // eax

  if ( pArea->m_vCenter.z <= ((this->m_vTop.z + this->m_vBottom.z) * 0.5) )
  {
    this->m_pBottomArea = pArea;
    return;
  }
  v2 = pArea->m_vCenter.x - this->m_vTop.x;
  v3 = pArea->m_vCenter.y - this->m_vTop.y;
  if ( fabs(v2) <= fabs(v3) )
  {
    m_dir = this->m_dir;
    v5 = 2 * (v3 > 0.0);
    if ( m_dir != v5 )
      goto LABEL_4;
LABEL_10:
    this->m_pTopBehindArea = pArea;
    return;
  }
  m_dir = this->m_dir;
  v5 = 2 * (v2 <= 0.0) + 1;
  if ( m_dir == v5 )
    goto LABEL_10;
LABEL_4:
  if ( v5 == (m_dir + 2) % 4 )
  {
    this->m_pTopForwardArea = pArea;
  }
  else
  {
    if ( m_dir <= 3 )
    {
      if ( v5 != CSWTCH_833[m_dir] )
        goto LABEL_7;
    }
    else if ( v5 != 0 )
    {
LABEL_7:
      this->m_pTopRightArea = pArea;
      return;
    }
    this->m_pTopLeftArea = pArea;
  }
}


// CNavLadder::Disconnect  (line 203, @0x00000000031ee490, libserver.so)
// callers: CNavEditor::CommandNavDisconnect, CNavArea::~CNavArea, CNavLadder::ConnectGeneratedLadder
void __fastcall CNavLadder::Disconnect(CNavLadder *const this, CNavArea *pArea)
{
  if ( this->m_pTopForwardArea == pArea )
  {
    this->m_pTopForwardArea = 0;
  }
  else if ( this->m_pTopLeftArea == pArea )
  {
    this->m_pTopLeftArea = 0;
  }
  else if ( this->m_pTopRightArea == pArea )
  {
    this->m_pTopRightArea = 0;
  }
  else if ( this->m_pTopBehindArea == pArea )
  {
    this->m_pTopBehindArea = 0;
  }
  else if ( this->m_pBottomArea == pArea )
  {
    this->m_pBottomArea = 0;
  }
}


// CNavLadder::IsConnected  (line 229, @0x00000000031ee510, libserver.so)
// callers: CNavDrawArea::DrawConnectedAreas
bool __fastcall CNavLadder::IsConnected(
        const CNavLadder *const this,
        const CNavArea *pArea,
        CNavLadder::LadderDirectionType dir)
{
  if ( dir == CNavLadder::LadderDirectionType::LADDER_DOWN )
    return this->m_pBottomArea == pArea;
  if ( dir != CNavLadder::LadderDirectionType::LADDER_UP && this->m_pBottomArea == pArea
    || this->m_pTopForwardArea == pArea
    || this->m_pTopLeftArea == pArea
    || this->m_pTopRightArea == pArea )
  {
    return 1;
  }
  return pArea == this->m_pTopBehindArea;
}


// CNavLadder::SetDir  (line 254, @0x00000000031ee560, libserver.so)  // inlines: AddDirectionVector, CGameTrace, Init, RnCollisionAttr_t, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CGameTrace::Init
// callers: CNavEditor::CommandNavLadderFlip, CNavLadder::Load, CNavMesh::SetupLadder, CNavMesh::CreateLadder
void __fastcall CNavLadder::SetDir(CNavLadder *const this, NavDirType dir)
{
  INavPhysicsInterface *m_pPhysicsInterface; // r12
  float x; // xmm5_4
  float v5; // xmm0_4
  float y; // xmm4_4
  vec_t v7; // xmm2_4
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  float v10; // xmm0_4
  Vector vFrom; // [rsp+10h] [rbp-F0h] BYREF
  Vector vTo; // [rsp+20h] [rbp-E0h] BYREF
  CGameTrace_1 result; // [rsp+30h] [rbp-D0h] BYREF

  this->m_dir = dir;
  this->m_vNormal.x = 0.0;
  this->m_vNormal.y = 0.0;
  this->m_vNormal.z = 0.0;
  if ( dir == NavDirType::EAST )
  {
    this->m_vNormal.x = 1.0;
  }
  else if ( dir <= NavDirType::EAST )
  {
    if ( dir == NavDirType::NORTH )
      this->m_vNormal.y = -1.0;
  }
  else if ( dir == NavDirType::SOUTH )
  {
    this->m_vNormal.y = 1.0;
  }
  else if ( dir == NavDirType::WEST )
  {
    this->m_vNormal.x = -1.0;
  }
  m_pPhysicsInterface = this->m_rNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface != 0 )
  {
    x = this->m_vNormal.x;
    v5 = this->m_vTop.x + this->m_vBottom.x;
    memset(&result.m_ShapeAttributes, 0, 31);
    y = this->m_vNormal.y;
    result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    v7 = (x * 5.0) + (v5 * 0.5);
    v8 = this->m_vTop.y + this->m_vBottom.y;
    vFrom.x = v7;
    v9 = (5.0 * y) + (v8 * 0.5);
    v10 = this->m_vTop.z + this->m_vBottom.z;
    vFrom.y = v9;
    vFrom.z = (v10 * 0.5) + 0.0;
    vTo.z = vFrom.z;
    vTo.x = v7 - (x * 32.0);
    vTo.y = v9 - (32.0 * y);
    CGameTrace::Init(&result);
    (*m_pPhysicsInterface->_vptr_INavPhysicsInterface)(
      m_pPhysicsInterface,
      &vFrom,
      &vTo,
      CNavConfig::ms_TraceMaskSolidBrushOnly,
      0,
      4,
      &result);
    if ( result.fraction != 1.0
      && (result.m_pSurfaceProperties == 0
       || result.m_pSurfaceProperties->m_gameProperties.m_bClimbable
       || (result.contents & 0x100) != 0) )
    {
      this->m_vNormal = result.plane.normal;
    }
  }
}


// CNavLadder::Save  (line 289, @0x00000000031ee7a0, libserver.so)  // inlines: LowLevelByteSwap<float>, LowLevelByteSwap<unsigned int>, PeekPut, PutFloat, PutType<float>, PutType<unsigned int>, PutTypeBin<float>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CNavMesh::SaveNavMeshToBuffer
void __fastcall CNavLadder::Save(const CNavLadder *const this, CUtlBuffer *const fileBuffer, unsigned int version)
{
  uint32 m_id; // r13d
  float m_flWidth; // xmm0_4
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float m_flLength; // xmm0_4
  NavDirType m_dir; // r13d
  CNavArea *m_pTopForwardArea; // rax
  uint32 m_AreaId; // r13d
  CNavArea *m_pTopLeftArea; // rax
  uint32 v18; // r13d
  CNavArea *m_pTopRightArea; // rax
  uint32 v20; // r13d
  CNavArea *m_pTopBehindArea; // rax
  uint32 v22; // r13d
  CNavArea *m_pBottomArea; // rax
  uint32 v24; // r12d
  int m_Put; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 *v40; // rdx
  unsigned __int8 *v41; // rdx
  unsigned __int8 *v42; // rdx
  unsigned __int8 *v43; // rdx
  unsigned __int8 *v44; // rdx
  unsigned __int8 *v45; // rdx
  unsigned __int8 *v46; // rdx
  unsigned __int8 *v47; // rdx
  unsigned __int8 *v48; // rdx
  unsigned __int8 *v49; // rdx
  unsigned __int8 *v50; // rdx
  unsigned __int8 *v51; // rdx
  unsigned __int8 *v52; // rdx
  unsigned __int8 *v53; // rdx
  unsigned __int8 *v54; // rdx
  float v55; // [rsp+Ch] [rbp-64h]
  float v56; // [rsp+Ch] [rbp-64h]
  float v57; // [rsp+Ch] [rbp-64h]
  float v58; // [rsp+Ch] [rbp-64h]
  float v59; // [rsp+Ch] [rbp-64h]
  float v60; // [rsp+Ch] [rbp-64h]
  float v61; // [rsp+Ch] [rbp-64h]
  float v62; // [rsp+Ch] [rbp-64h]
  float v63; // [rsp+14h] [rbp-5Ch]
  float v64; // [rsp+18h] [rbp-58h]
  float v65; // [rsp+1Ch] [rbp-54h]
  float v66; // [rsp+20h] [rbp-50h]
  float v67; // [rsp+24h] [rbp-4Ch]
  float v68; // [rsp+28h] [rbp-48h]
  float v69; // [rsp+2Ch] [rbp-44h]
  float v70; // [rsp+30h] [rbp-40h]
  int v71; // [rsp+4Ch] [rbp-24h]
  int v72; // [rsp+4Ch] [rbp-24h]
  int v73; // [rsp+4Ch] [rbp-24h]
  int v74; // [rsp+4Ch] [rbp-24h]
  int v75; // [rsp+4Ch] [rbp-24h]
  int v76; // [rsp+4Ch] [rbp-24h]
  int v77; // [rsp+4Ch] [rbp-24h]
  int v78; // [rsp+4Ch] [rbp-24h]
  int v79; // [rsp+4Ch] [rbp-24h]
  int v80; // [rsp+4Ch] [rbp-24h]
  int v81; // [rsp+4Ch] [rbp-24h]
  int v82; // [rsp+4Ch] [rbp-24h]
  int v83; // [rsp+4Ch] [rbp-24h]
  int v84; // [rsp+4Ch] [rbp-24h]
  int v85; // [rsp+4Ch] [rbp-24h]

  m_id = this->m_id;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(fileBuffer, "%u", m_id);
  }
  else if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      m_Put = fileBuffer->m_Put;
      v54 = &fileBuffer->m_Memory.m_pMemory[m_Put - fileBuffer->m_nOffset];
      if ( v54 != 0 )
      {
        LOBYTE(v85) = HIBYTE(m_id);
        BYTE1(v85) = BYTE2(m_id);
        BYTE2(v85) = BYTE1(m_id);
        HIBYTE(v85) = m_id;
        *v54 = v85;
        m_Put = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = m_id;
      m_Put = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    m_flWidth = this->m_flWidth;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_4;
    goto LABEL_40;
  }
  m_flWidth = this->m_flWidth;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_4:
    CUtlBuffer::Printf(fileBuffer, "%f", m_flWidth);
    goto LABEL_5;
  }
LABEL_40:
  v63 = m_flWidth;
  v55 = m_flWidth;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v26 = fileBuffer->m_Put;
      v40 = &fileBuffer->m_Memory.m_pMemory[v26 - fileBuffer->m_nOffset];
      if ( v40 != 0 )
      {
        LOBYTE(v71) = HIBYTE(v63);
        BYTE1(v71) = BYTE2(v63);
        BYTE2(v71) = BYTE1(v63);
        HIBYTE(v71) = LOBYTE(v63);
        *v40 = v71;
        v26 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v55;
      v26 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v26 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    x = this->m_vTop.x;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_6;
    goto LABEL_44;
  }
LABEL_5:
  x = this->m_vTop.x;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_6:
    CUtlBuffer::Printf(fileBuffer, "%f", x);
    goto LABEL_7;
  }
LABEL_44:
  v64 = x;
  v56 = x;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v27 = fileBuffer->m_Put;
      v41 = &fileBuffer->m_Memory.m_pMemory[v27 - fileBuffer->m_nOffset];
      if ( v41 != 0 )
      {
        LOBYTE(v72) = HIBYTE(v64);
        BYTE1(v72) = BYTE2(v64);
        BYTE2(v72) = BYTE1(v64);
        HIBYTE(v72) = LOBYTE(v64);
        *v41 = v72;
        v27 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v56;
      v27 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v27 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    y = this->m_vTop.y;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_8;
    goto LABEL_48;
  }
LABEL_7:
  y = this->m_vTop.y;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_8:
    CUtlBuffer::Printf(fileBuffer, "%f", y);
    goto LABEL_9;
  }
LABEL_48:
  v65 = y;
  v57 = y;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v28 = fileBuffer->m_Put;
      v42 = &fileBuffer->m_Memory.m_pMemory[v28 - fileBuffer->m_nOffset];
      if ( v42 != 0 )
      {
        LOBYTE(v73) = HIBYTE(v65);
        BYTE1(v73) = BYTE2(v65);
        BYTE2(v73) = BYTE1(v65);
        HIBYTE(v73) = LOBYTE(v65);
        *v42 = v73;
        v28 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v57;
      v28 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v28 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    z = this->m_vTop.z;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_10;
    goto LABEL_52;
  }
LABEL_9:
  z = this->m_vTop.z;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_10:
    CUtlBuffer::Printf(fileBuffer, "%f", z);
    goto LABEL_11;
  }
LABEL_52:
  v66 = z;
  v58 = z;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v29 = fileBuffer->m_Put;
      v43 = &fileBuffer->m_Memory.m_pMemory[v29 - fileBuffer->m_nOffset];
      if ( v43 != 0 )
      {
        LOBYTE(v74) = HIBYTE(v66);
        BYTE1(v74) = BYTE2(v66);
        BYTE2(v74) = BYTE1(v66);
        HIBYTE(v74) = LOBYTE(v66);
        *v43 = v74;
        v29 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v58;
      v29 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v29 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    v10 = this->m_vBottom.x;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_12;
    goto LABEL_56;
  }
LABEL_11:
  v10 = this->m_vBottom.x;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_12:
    CUtlBuffer::Printf(fileBuffer, "%f", v10);
    goto LABEL_13;
  }
LABEL_56:
  v67 = v10;
  v59 = v10;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v30 = fileBuffer->m_Put;
      v44 = &fileBuffer->m_Memory.m_pMemory[v30 - fileBuffer->m_nOffset];
      if ( v44 != 0 )
      {
        LOBYTE(v75) = HIBYTE(v67);
        BYTE1(v75) = BYTE2(v67);
        BYTE2(v75) = BYTE1(v67);
        HIBYTE(v75) = LOBYTE(v67);
        *v44 = v75;
        v30 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v59;
      v30 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v30 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    v11 = this->m_vBottom.y;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_14;
    goto LABEL_60;
  }
LABEL_13:
  v11 = this->m_vBottom.y;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_14:
    CUtlBuffer::Printf(fileBuffer, "%f", v11);
    goto LABEL_15;
  }
LABEL_60:
  v68 = v11;
  v60 = v11;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v31 = fileBuffer->m_Put;
      v45 = &fileBuffer->m_Memory.m_pMemory[v31 - fileBuffer->m_nOffset];
      if ( v45 != 0 )
      {
        LOBYTE(v76) = HIBYTE(v68);
        BYTE1(v76) = BYTE2(v68);
        BYTE2(v76) = BYTE1(v68);
        HIBYTE(v76) = LOBYTE(v68);
        *v45 = v76;
        v31 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v60;
      v31 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v31 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    v12 = this->m_vBottom.z;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_16;
    goto LABEL_64;
  }
LABEL_15:
  v12 = this->m_vBottom.z;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_16:
    CUtlBuffer::Printf(fileBuffer, "%f", v12);
    goto LABEL_17;
  }
LABEL_64:
  v69 = v12;
  v61 = v12;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v32 = fileBuffer->m_Put;
      v46 = &fileBuffer->m_Memory.m_pMemory[v32 - fileBuffer->m_nOffset];
      if ( v46 != 0 )
      {
        LOBYTE(v77) = HIBYTE(v69);
        BYTE1(v77) = BYTE2(v69);
        BYTE2(v77) = BYTE1(v69);
        HIBYTE(v77) = LOBYTE(v69);
        *v46 = v77;
        v32 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v61;
      v32 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v32 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    m_flLength = this->m_flLength;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_18;
    goto LABEL_68;
  }
LABEL_17:
  m_flLength = this->m_flLength;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_18:
    CUtlBuffer::Printf(fileBuffer, "%f", m_flLength);
    goto LABEL_19;
  }
LABEL_68:
  v70 = m_flLength;
  v62 = m_flLength;
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v33 = fileBuffer->m_Put;
      v47 = &fileBuffer->m_Memory.m_pMemory[v33 - fileBuffer->m_nOffset];
      if ( v47 != 0 )
      {
        LOBYTE(v78) = HIBYTE(v70);
        BYTE1(v78) = BYTE2(v70);
        BYTE2(v78) = BYTE1(v70);
        HIBYTE(v78) = LOBYTE(v70);
        *v47 = v78;
        v33 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v62;
      v33 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v33 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
    m_dir = this->m_dir;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_20;
    goto LABEL_72;
  }
LABEL_19:
  m_dir = this->m_dir;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_20:
    CUtlBuffer::Printf(fileBuffer, "%u", m_dir);
    goto LABEL_21;
  }
LABEL_72:
  if ( !CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
LABEL_21:
    m_pTopForwardArea = this->m_pTopForwardArea;
    if ( m_pTopForwardArea != 0 )
      goto LABEL_22;
LABEL_76:
    m_AreaId = 0;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_23;
    goto LABEL_77;
  }
  if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
  {
    v34 = fileBuffer->m_Put;
    v48 = &fileBuffer->m_Memory.m_pMemory[v34 - fileBuffer->m_nOffset];
    if ( v48 != 0 )
    {
      LOBYTE(v79) = HIBYTE(m_dir);
      BYTE1(v79) = BYTE2(m_dir);
      BYTE2(v79) = BYTE1(m_dir);
      HIBYTE(v79) = m_dir;
      *v48 = v79;
      v34 = fileBuffer->m_Put;
    }
  }
  else
  {
    *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = m_dir;
    v34 = fileBuffer->m_Put;
  }
  fileBuffer->m_Put = v34 + 4;
  CUtlBuffer::AddNullTermination(fileBuffer);
  m_pTopForwardArea = this->m_pTopForwardArea;
  if ( m_pTopForwardArea == 0 )
    goto LABEL_76;
LABEL_22:
  m_AreaId = m_pTopForwardArea->m_AreaId;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_23:
    CUtlBuffer::Printf(fileBuffer, "%u", m_AreaId);
    goto LABEL_24;
  }
LABEL_77:
  if ( !CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
LABEL_24:
    m_pTopLeftArea = this->m_pTopLeftArea;
    if ( m_pTopLeftArea != 0 )
      goto LABEL_25;
LABEL_81:
    v18 = 0;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_26;
    goto LABEL_82;
  }
  if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
  {
    v35 = fileBuffer->m_Put;
    v49 = &fileBuffer->m_Memory.m_pMemory[v35 - fileBuffer->m_nOffset];
    if ( v49 != 0 )
    {
      LOBYTE(v80) = HIBYTE(m_AreaId);
      BYTE1(v80) = BYTE2(m_AreaId);
      BYTE2(v80) = BYTE1(m_AreaId);
      HIBYTE(v80) = m_AreaId;
      *v49 = v80;
      v35 = fileBuffer->m_Put;
    }
  }
  else
  {
    *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = m_AreaId;
    v35 = fileBuffer->m_Put;
  }
  fileBuffer->m_Put = v35 + 4;
  CUtlBuffer::AddNullTermination(fileBuffer);
  m_pTopLeftArea = this->m_pTopLeftArea;
  if ( m_pTopLeftArea == 0 )
    goto LABEL_81;
LABEL_25:
  v18 = m_pTopLeftArea->m_AreaId;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_26:
    CUtlBuffer::Printf(fileBuffer, "%u", v18);
    goto LABEL_27;
  }
LABEL_82:
  if ( !CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
LABEL_27:
    m_pTopRightArea = this->m_pTopRightArea;
    if ( m_pTopRightArea != 0 )
      goto LABEL_28;
LABEL_86:
    v20 = 0;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_29;
    goto LABEL_87;
  }
  if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
  {
    v36 = fileBuffer->m_Put;
    v50 = &fileBuffer->m_Memory.m_pMemory[v36 - fileBuffer->m_nOffset];
    if ( v50 != 0 )
    {
      LOBYTE(v81) = HIBYTE(v18);
      BYTE1(v81) = BYTE2(v18);
      BYTE2(v81) = BYTE1(v18);
      HIBYTE(v81) = v18;
      *v50 = v81;
      v36 = fileBuffer->m_Put;
    }
  }
  else
  {
    *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v18;
    v36 = fileBuffer->m_Put;
  }
  fileBuffer->m_Put = v36 + 4;
  CUtlBuffer::AddNullTermination(fileBuffer);
  m_pTopRightArea = this->m_pTopRightArea;
  if ( m_pTopRightArea == 0 )
    goto LABEL_86;
LABEL_28:
  v20 = m_pTopRightArea->m_AreaId;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_29:
    CUtlBuffer::Printf(fileBuffer, "%u", v20);
    goto LABEL_30;
  }
LABEL_87:
  if ( !CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
LABEL_30:
    m_pTopBehindArea = this->m_pTopBehindArea;
    if ( m_pTopBehindArea != 0 )
      goto LABEL_31;
LABEL_91:
    v22 = 0;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_32;
    goto LABEL_92;
  }
  if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
  {
    v37 = fileBuffer->m_Put;
    v51 = &fileBuffer->m_Memory.m_pMemory[v37 - fileBuffer->m_nOffset];
    if ( v51 != 0 )
    {
      LOBYTE(v82) = HIBYTE(v20);
      BYTE1(v82) = BYTE2(v20);
      BYTE2(v82) = BYTE1(v20);
      HIBYTE(v82) = v20;
      *v51 = v82;
      v37 = fileBuffer->m_Put;
    }
  }
  else
  {
    *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v20;
    v37 = fileBuffer->m_Put;
  }
  fileBuffer->m_Put = v37 + 4;
  CUtlBuffer::AddNullTermination(fileBuffer);
  m_pTopBehindArea = this->m_pTopBehindArea;
  if ( m_pTopBehindArea == 0 )
    goto LABEL_91;
LABEL_31:
  v22 = m_pTopBehindArea->m_AreaId;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_32:
    CUtlBuffer::Printf(fileBuffer, "%u", v22);
    goto LABEL_33;
  }
LABEL_92:
  if ( !CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
LABEL_33:
    m_pBottomArea = this->m_pBottomArea;
    if ( m_pBottomArea != 0 )
      goto LABEL_34;
LABEL_96:
    v24 = 0;
    if ( (fileBuffer->m_Flags & 1) != 0 )
      goto LABEL_35;
    goto LABEL_97;
  }
  if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
  {
    v38 = fileBuffer->m_Put;
    v52 = &fileBuffer->m_Memory.m_pMemory[v38 - fileBuffer->m_nOffset];
    if ( v52 != 0 )
    {
      LOBYTE(v83) = HIBYTE(v22);
      BYTE1(v83) = BYTE2(v22);
      BYTE2(v83) = BYTE1(v22);
      HIBYTE(v83) = v22;
      *v52 = v83;
      v38 = fileBuffer->m_Put;
    }
  }
  else
  {
    *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v22;
    v38 = fileBuffer->m_Put;
  }
  fileBuffer->m_Put = v38 + 4;
  CUtlBuffer::AddNullTermination(fileBuffer);
  m_pBottomArea = this->m_pBottomArea;
  if ( m_pBottomArea == 0 )
    goto LABEL_96;
LABEL_34:
  v24 = m_pBottomArea->m_AreaId;
  if ( (fileBuffer->m_Flags & 1) != 0 )
  {
LABEL_35:
    CUtlBuffer::Printf(fileBuffer, "%u", v24);
    return;
  }
LABEL_97:
  if ( CUtlBuffer::CheckPut(fileBuffer, 4) )
  {
    if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
    {
      v39 = fileBuffer->m_Put;
      v53 = &fileBuffer->m_Memory.m_pMemory[v39 - fileBuffer->m_nOffset];
      if ( v53 != 0 )
      {
        LOBYTE(v84) = HIBYTE(v24);
        BYTE1(v84) = BYTE2(v24);
        BYTE2(v84) = BYTE1(v24);
        HIBYTE(v84) = v24;
        *v53 = v84;
        v39 = fileBuffer->m_Put;
      }
    }
    else
    {
      *&fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Put - fileBuffer->m_nOffset] = v24;
      v39 = fileBuffer->m_Put;
    }
    fileBuffer->m_Put = v39 + 4;
    CUtlBuffer::AddNullTermination(fileBuffer);
  }
}


// CNavLadder::Load  (line 333, @0x00000000031efa60, libserver.so)  // inlines: GetFloat, GetType<float>, GetType<unsigned int>, GetTypeBin<float>, GetTypeBin<unsigned int>, GetTypeText<float>, GetTypeText<unsigned int>, GetUnsignedInt, LowLevelByteSwap<float>, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<float>, StringToNumber<unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CNavLadder::SetDir, CNavMesh::GetNavAreaByID, CUtlBuffer::CheckGet, V_strtoui64, V_strtod, CUtlBuffer::GetType<float>, CUtlBuffer::Get, DevMsg(char const*,...), DevWarning(char const*,...)
// callers: CNavMesh::LoadNavMesh
// strings: "ERROR: Unconnected ladder #%d top at ( %g, %g, %g )\n", "nav_unmark; nav_mark ladder %d; nav_warp_to_mark\n", "ERROR: Unconnected ladder #%d bottom at ( %g, %g, %g )\n"
// globals: CNavLadder::m_nextID
void __fastcall CNavLadder::Load(CNavLadder *const this, CUtlBuffer *const rFileBuffer, uint nVersion)
{
  bool v6; // al
  uint32 v7; // ecx
  bool v8; // cc
  bool v9; // al
  float v10; // xmm0_4
  bool v11; // al
  float v12; // xmm0_4
  bool v13; // al
  float v14; // xmm0_4
  bool v15; // al
  float v16; // xmm0_4
  bool v17; // al
  float v18; // xmm0_4
  bool v19; // al
  float v20; // xmm0_4
  bool v21; // al
  float v22; // xmm0_4
  bool v23; // al
  float v24; // xmm0_4
  bool v25; // al
  NavDirType v26; // esi
  bool v27; // al
  unsigned int v28; // esi
  bool v29; // al
  unsigned int v30; // esi
  bool v31; // al
  unsigned int v32; // esi
  bool v33; // al
  unsigned int v34; // esi
  bool v35; // al
  unsigned int v36; // esi
  CNavArea *NavAreaByID; // rax
  INavEntityInterface *m_pEntityInterface; // rdi
  int v39; // eax
  bool v40; // al
  int v41; // edx
  int v42; // r14d
  int v43; // r14d
  bool v44; // al
  int v45; // edx
  int v46; // r14d
  bool v47; // al
  int v48; // eax
  bool v49; // zf
  int v50; // r14d
  bool v51; // al
  int v52; // eax
  int v53; // r14d
  bool v54; // al
  int v55; // eax
  int v56; // r14d
  bool v57; // al
  int v58; // eax
  int v59; // r14d
  bool v60; // al
  int v61; // eax
  int v62; // r14d
  bool v63; // al
  int v64; // eax
  int v65; // r14d
  bool v66; // al
  int v67; // eax
  int v68; // r14d
  bool v69; // al
  int v70; // eax
  bool v71; // al
  int m_Get; // edx
  bool v73; // al
  int v74; // edx
  bool v75; // al
  int v76; // edx
  bool v77; // al
  int v78; // edx
  bool v79; // al
  int v80; // edx
  int v81; // r13d
  int v82; // r13d
  int v83; // r13d
  int v84; // r13d
  int v85; // r13d
  unsigned __int8 *v86; // rax
  unsigned __int8 *v87; // rax
  unsigned __int8 *v88; // rax
  unsigned __int8 *v89; // rax
  unsigned __int8 *v90; // rax
  unsigned __int8 *v91; // rax
  unsigned __int8 *v92; // rax
  unsigned __int32 v93; // [rsp+0h] [rbp-30h] BYREF
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  unsigned __int8 *bIsDangling; // [rsp+8h] [rbp-28h] BYREF

  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v6 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v7 = 0;
    if ( v6 )
    {
      bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v68 = bIsDangling;
      v93 = V_strtoui64(bIsDangling, &bIsDangling, 10);
      v7 = v93;
      if ( bIsDangling != v68 )
        rFileBuffer->m_Get += bIsDangling - v68;
    }
  }
  else
  {
    v71 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v7 = 0;
    if ( v71 )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        m_Get = rFileBuffer->m_Get;
        v87 = &rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
        if ( v87 == 0 )
          v87 = &v93;
        LODWORD(bIsDangling) = v93;
        LOBYTE(bIsDangling) = v87[3];
        BYTE1(bIsDangling) = v87[2];
        BYTE2(bIsDangling) = v87[1];
        BYTE3(bIsDangling) = *v87;
        v7 = bIsDangling;
      }
      else
      {
        m_Get = rFileBuffer->m_Get;
        v7 = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
      }
      rFileBuffer->m_Get = m_Get + 4;
    }
  }
  v8 = CNavLadder::m_nextID <= v7;
  this->m_id = v7;
  if ( v8 )
    CNavLadder::m_nextID = v7 + 1;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
  {
    v69 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v10 = 0.0;
    if ( v69 )
    {
      v70 = rFileBuffer->m_Get;
      v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
      v10 = *&rFileBuffer->m_Memory.m_pMemory[v70 - rFileBuffer->m_nOffset];
      v93 = LODWORD(v10);
      if ( !v49 )
      {
        LOBYTE(bIsDangling) = HIBYTE(v93);
        BYTE1(bIsDangling) = BYTE2(v93);
        BYTE2(bIsDangling) = BYTE1(v93);
        BYTE3(bIsDangling) = v93;
        v10 = *&bIsDangling;
      }
      rFileBuffer->m_Get = v70 + 4;
    }
LABEL_7:
    this->m_flWidth = v10;
    if ( (rFileBuffer->m_Flags & 1) == 0 )
      goto LABEL_90;
    goto LABEL_8;
  }
  nIncrement = 128;
  v9 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v10 = 0.0;
  if ( !v9 )
    goto LABEL_7;
  bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
  v65 = bIsDangling;
  v10 = V_strtod(bIsDangling, &bIsDangling);
  v93 = LODWORD(v10);
  if ( bIsDangling == v65 )
    goto LABEL_7;
  rFileBuffer->m_Get += bIsDangling - v65;
  this->m_flWidth = v10;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
  {
LABEL_90:
    v66 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v12 = 0.0;
    if ( v66 )
    {
      v67 = rFileBuffer->m_Get;
      v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
      v12 = *&rFileBuffer->m_Memory.m_pMemory[v67 - rFileBuffer->m_nOffset];
      v93 = LODWORD(v12);
      if ( !v49 )
      {
        LOBYTE(bIsDangling) = HIBYTE(v93);
        BYTE1(bIsDangling) = BYTE2(v93);
        BYTE2(bIsDangling) = BYTE1(v93);
        BYTE3(bIsDangling) = v93;
        v12 = *&bIsDangling;
      }
      rFileBuffer->m_Get = v67 + 4;
    }
    goto LABEL_9;
  }
LABEL_8:
  nIncrement = 128;
  v11 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v12 = 0.0;
  if ( v11 )
  {
    bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
    v62 = bIsDangling;
    v12 = V_strtod(bIsDangling, &bIsDangling);
    v93 = LODWORD(v12);
    if ( bIsDangling != v62 )
    {
      rFileBuffer->m_Get += bIsDangling - v62;
      this->m_vTop.x = v12;
      if ( (rFileBuffer->m_Flags & 1) != 0 )
        goto LABEL_10;
LABEL_84:
      v63 = CUtlBuffer::CheckGet(rFileBuffer, 4);
      v14 = 0.0;
      if ( v63 )
      {
        v64 = rFileBuffer->m_Get;
        v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
        v14 = *&rFileBuffer->m_Memory.m_pMemory[v64 - rFileBuffer->m_nOffset];
        v93 = LODWORD(v14);
        if ( !v49 )
        {
          LOBYTE(bIsDangling) = HIBYTE(v93);
          BYTE1(bIsDangling) = BYTE2(v93);
          BYTE2(bIsDangling) = BYTE1(v93);
          BYTE3(bIsDangling) = v93;
          v14 = *&bIsDangling;
        }
        rFileBuffer->m_Get = v64 + 4;
      }
LABEL_11:
      this->m_vTop.y = v14;
      if ( (rFileBuffer->m_Flags & 1) == 0 )
        goto LABEL_78;
      goto LABEL_12;
    }
  }
LABEL_9:
  this->m_vTop.x = v12;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
    goto LABEL_84;
LABEL_10:
  nIncrement = 128;
  v13 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v14 = 0.0;
  if ( !v13 )
    goto LABEL_11;
  bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
  v59 = bIsDangling;
  v14 = V_strtod(bIsDangling, &bIsDangling);
  v93 = LODWORD(v14);
  if ( bIsDangling == v59 )
    goto LABEL_11;
  rFileBuffer->m_Get += bIsDangling - v59;
  this->m_vTop.y = v14;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
  {
LABEL_78:
    v60 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v16 = 0.0;
    if ( v60 )
    {
      v61 = rFileBuffer->m_Get;
      v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
      v16 = *&rFileBuffer->m_Memory.m_pMemory[v61 - rFileBuffer->m_nOffset];
      v93 = LODWORD(v16);
      if ( !v49 )
      {
        LOBYTE(bIsDangling) = HIBYTE(v93);
        BYTE1(bIsDangling) = BYTE2(v93);
        BYTE2(bIsDangling) = BYTE1(v93);
        BYTE3(bIsDangling) = v93;
        v16 = *&bIsDangling;
      }
      rFileBuffer->m_Get = v61 + 4;
    }
    goto LABEL_13;
  }
LABEL_12:
  nIncrement = 128;
  v15 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v16 = 0.0;
  if ( v15 )
  {
    bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
    v56 = bIsDangling;
    v16 = V_strtod(bIsDangling, &bIsDangling);
    v93 = LODWORD(v16);
    if ( bIsDangling != v56 )
    {
      rFileBuffer->m_Get += bIsDangling - v56;
      this->m_vTop.z = v16;
      if ( (rFileBuffer->m_Flags & 1) != 0 )
        goto LABEL_14;
LABEL_72:
      v57 = CUtlBuffer::CheckGet(rFileBuffer, 4);
      v18 = 0.0;
      if ( v57 )
      {
        v58 = rFileBuffer->m_Get;
        v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
        v18 = *&rFileBuffer->m_Memory.m_pMemory[v58 - rFileBuffer->m_nOffset];
        v93 = LODWORD(v18);
        if ( !v49 )
        {
          LOBYTE(bIsDangling) = HIBYTE(v93);
          BYTE1(bIsDangling) = BYTE2(v93);
          BYTE2(bIsDangling) = BYTE1(v93);
          BYTE3(bIsDangling) = v93;
          v18 = *&bIsDangling;
        }
        rFileBuffer->m_Get = v58 + 4;
      }
LABEL_15:
      this->m_vBottom.x = v18;
      if ( (rFileBuffer->m_Flags & 1) == 0 )
        goto LABEL_66;
      goto LABEL_16;
    }
  }
LABEL_13:
  this->m_vTop.z = v16;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
    goto LABEL_72;
LABEL_14:
  nIncrement = 128;
  v17 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v18 = 0.0;
  if ( !v17 )
    goto LABEL_15;
  bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
  v53 = bIsDangling;
  v18 = V_strtod(bIsDangling, &bIsDangling);
  v93 = LODWORD(v18);
  if ( bIsDangling == v53 )
    goto LABEL_15;
  rFileBuffer->m_Get += bIsDangling - v53;
  this->m_vBottom.x = v18;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
  {
LABEL_66:
    v54 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v20 = 0.0;
    if ( v54 )
    {
      v55 = rFileBuffer->m_Get;
      v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
      v20 = *&rFileBuffer->m_Memory.m_pMemory[v55 - rFileBuffer->m_nOffset];
      v93 = LODWORD(v20);
      if ( !v49 )
      {
        LOBYTE(bIsDangling) = HIBYTE(v93);
        BYTE1(bIsDangling) = BYTE2(v93);
        BYTE2(bIsDangling) = BYTE1(v93);
        BYTE3(bIsDangling) = v93;
        v20 = *&bIsDangling;
      }
      rFileBuffer->m_Get = v55 + 4;
    }
    goto LABEL_17;
  }
LABEL_16:
  nIncrement = 128;
  v19 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v20 = 0.0;
  if ( v19 )
  {
    bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
    v50 = bIsDangling;
    v20 = V_strtod(bIsDangling, &bIsDangling);
    v93 = LODWORD(v20);
    if ( bIsDangling != v50 )
    {
      rFileBuffer->m_Get += bIsDangling - v50;
      this->m_vBottom.y = v20;
      if ( (rFileBuffer->m_Flags & 1) != 0 )
        goto LABEL_18;
LABEL_60:
      v51 = CUtlBuffer::CheckGet(rFileBuffer, 4);
      v22 = 0.0;
      if ( v51 )
      {
        v52 = rFileBuffer->m_Get;
        v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
        v22 = *&rFileBuffer->m_Memory.m_pMemory[v52 - rFileBuffer->m_nOffset];
        v93 = LODWORD(v22);
        if ( !v49 )
        {
          LOBYTE(bIsDangling) = HIBYTE(v93);
          BYTE1(bIsDangling) = BYTE2(v93);
          BYTE2(bIsDangling) = BYTE1(v93);
          BYTE3(bIsDangling) = v93;
          v22 = *&bIsDangling;
        }
        rFileBuffer->m_Get = v52 + 4;
      }
LABEL_19:
      this->m_vBottom.z = v22;
      if ( (rFileBuffer->m_Flags & 1) == 0 )
        goto LABEL_54;
      goto LABEL_20;
    }
  }
LABEL_17:
  this->m_vBottom.y = v20;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
    goto LABEL_60;
LABEL_18:
  nIncrement = 128;
  v21 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v22 = 0.0;
  if ( !v21 )
    goto LABEL_19;
  bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
  v46 = bIsDangling;
  v22 = V_strtod(bIsDangling, &bIsDangling);
  v93 = LODWORD(v22);
  if ( bIsDangling == v46 )
    goto LABEL_19;
  rFileBuffer->m_Get += bIsDangling - v46;
  this->m_vBottom.z = v22;
  if ( (rFileBuffer->m_Flags & 1) == 0 )
  {
LABEL_54:
    v47 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v24 = 0.0;
    if ( v47 )
    {
      v48 = rFileBuffer->m_Get;
      v49 = (*&rFileBuffer->m_Byteswap & 1) == 0;
      v24 = *&rFileBuffer->m_Memory.m_pMemory[v48 - rFileBuffer->m_nOffset];
      v93 = LODWORD(v24);
      if ( !v49 )
      {
        LOBYTE(bIsDangling) = HIBYTE(v93);
        BYTE1(bIsDangling) = BYTE2(v93);
        BYTE2(bIsDangling) = BYTE1(v93);
        BYTE3(bIsDangling) = v93;
        v24 = *&bIsDangling;
      }
      rFileBuffer->m_Get = v48 + 4;
    }
    goto LABEL_21;
  }
LABEL_20:
  nIncrement = 128;
  v23 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
  v24 = 0.0;
  if ( v23 )
  {
    bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
    v43 = bIsDangling;
    v24 = V_strtod(bIsDangling, &bIsDangling);
    v93 = LODWORD(v24);
    if ( bIsDangling != v43 )
    {
      rFileBuffer->m_Get += bIsDangling - v43;
      this->m_flLength = v24;
      if ( (rFileBuffer->m_Flags & 1) != 0 )
        goto LABEL_22;
      goto LABEL_48;
    }
  }
LABEL_21:
  this->m_flLength = v24;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
LABEL_22:
    nIncrement = 128;
    v25 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v26 = NavDirType::NORTH;
    if ( v25 )
    {
      bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v42 = bIsDangling;
      v93 = V_strtoui64(bIsDangling, &bIsDangling, 10);
      v26 = v93;
      if ( bIsDangling != v42 )
        rFileBuffer->m_Get += bIsDangling - v42;
    }
    goto LABEL_23;
  }
LABEL_48:
  v44 = CUtlBuffer::CheckGet(rFileBuffer, 4);
  v26 = NavDirType::NORTH;
  if ( v44 )
  {
    if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
    {
      v45 = rFileBuffer->m_Get;
      v86 = &rFileBuffer->m_Memory.m_pMemory[v45 - rFileBuffer->m_nOffset];
      if ( v86 == 0 )
        v86 = &v93;
      LODWORD(bIsDangling) = v93;
      LOBYTE(bIsDangling) = v86[3];
      BYTE1(bIsDangling) = v86[2];
      BYTE2(bIsDangling) = v86[1];
      BYTE3(bIsDangling) = *v86;
      v26 = bIsDangling;
    }
    else
    {
      v45 = rFileBuffer->m_Get;
      v26 = *&rFileBuffer->m_Memory.m_pMemory[v45 - rFileBuffer->m_nOffset];
    }
    rFileBuffer->m_Get = v45 + 4;
  }
LABEL_23:
  this->m_dir = v26;
  CNavLadder::SetDir(this, v26);
  if ( nVersion == 6 )
  {
    CUtlBuffer::Get(rFileBuffer, &bIsDangling, 1);
  }
  else if ( nVersion == 26 )
  {
    CUtlBuffer::GetType<float>(rFileBuffer, &bIsDangling);
    CUtlBuffer::GetType<float>(rFileBuffer, &bIsDangling);
    CUtlBuffer::GetType<float>(rFileBuffer, &bIsDangling);
    goto LABEL_37;
  }
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v27 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v28 = 0;
    if ( v27 )
    {
      bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v85 = bIsDangling;
      v93 = V_strtoui64(bIsDangling, &bIsDangling, 10);
      v28 = v93;
      if ( bIsDangling != v85 )
        rFileBuffer->m_Get += bIsDangling - v85;
    }
  }
  else
  {
    v40 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v28 = 0;
    if ( v40 )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v41 = rFileBuffer->m_Get;
        v89 = &rFileBuffer->m_Memory.m_pMemory[v41 - rFileBuffer->m_nOffset];
        if ( v89 == 0 )
          v89 = &v93;
        LODWORD(bIsDangling) = v93;
        LOBYTE(bIsDangling) = v89[3];
        BYTE1(bIsDangling) = v89[2];
        BYTE2(bIsDangling) = v89[1];
        BYTE3(bIsDangling) = *v89;
        v28 = bIsDangling;
      }
      else
      {
        v41 = rFileBuffer->m_Get;
        v28 = *&rFileBuffer->m_Memory.m_pMemory[v41 - rFileBuffer->m_nOffset];
      }
      rFileBuffer->m_Get = v41 + 4;
    }
  }
  this->m_pTopForwardArea = CNavMesh::GetNavAreaByID(this->m_rNavMesh, v28);
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v29 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v30 = 0;
    if ( v29 )
    {
      bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v84 = bIsDangling;
      v93 = V_strtoui64(bIsDangling, &bIsDangling, 10);
      v30 = v93;
      if ( bIsDangling != v84 )
        rFileBuffer->m_Get += bIsDangling - v84;
    }
  }
  else
  {
    v79 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v30 = 0;
    if ( v79 )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v80 = rFileBuffer->m_Get;
        v91 = &rFileBuffer->m_Memory.m_pMemory[v80 - rFileBuffer->m_nOffset];
        if ( v91 == 0 )
          v91 = &v93;
        LODWORD(bIsDangling) = v93;
        LOBYTE(bIsDangling) = v91[3];
        BYTE1(bIsDangling) = v91[2];
        BYTE2(bIsDangling) = v91[1];
        BYTE3(bIsDangling) = *v91;
        v30 = bIsDangling;
      }
      else
      {
        v80 = rFileBuffer->m_Get;
        v30 = *&rFileBuffer->m_Memory.m_pMemory[v80 - rFileBuffer->m_nOffset];
      }
      rFileBuffer->m_Get = v80 + 4;
    }
  }
  this->m_pTopLeftArea = CNavMesh::GetNavAreaByID(this->m_rNavMesh, v30);
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v31 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v32 = 0;
    if ( v31 )
    {
      bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v83 = bIsDangling;
      v93 = V_strtoui64(bIsDangling, &bIsDangling, 10);
      v32 = v93;
      if ( bIsDangling != v83 )
        rFileBuffer->m_Get += bIsDangling - v83;
    }
  }
  else
  {
    v75 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v32 = 0;
    if ( v75 )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v76 = rFileBuffer->m_Get;
        v90 = &rFileBuffer->m_Memory.m_pMemory[v76 - rFileBuffer->m_nOffset];
        if ( v90 == 0 )
          v90 = &v93;
        LODWORD(bIsDangling) = v93;
        LOBYTE(bIsDangling) = v90[3];
        BYTE1(bIsDangling) = v90[2];
        BYTE2(bIsDangling) = v90[1];
        BYTE3(bIsDangling) = *v90;
        v32 = bIsDangling;
      }
      else
      {
        v76 = rFileBuffer->m_Get;
        v32 = *&rFileBuffer->m_Memory.m_pMemory[v76 - rFileBuffer->m_nOffset];
      }
      rFileBuffer->m_Get = v76 + 4;
    }
  }
  this->m_pTopRightArea = CNavMesh::GetNavAreaByID(this->m_rNavMesh, v32);
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v33 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v34 = 0;
    if ( v33 )
    {
      bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v82 = bIsDangling;
      v93 = V_strtoui64(bIsDangling, &bIsDangling, 10);
      v34 = v93;
      if ( bIsDangling != v82 )
        rFileBuffer->m_Get += bIsDangling - v82;
    }
  }
  else
  {
    v73 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v34 = 0;
    if ( v73 )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v74 = rFileBuffer->m_Get;
        v88 = &rFileBuffer->m_Memory.m_pMemory[v74 - rFileBuffer->m_nOffset];
        if ( v88 == 0 )
          v88 = &v93;
        LODWORD(bIsDangling) = v93;
        LOBYTE(bIsDangling) = v88[3];
        BYTE1(bIsDangling) = v88[2];
        BYTE2(bIsDangling) = v88[1];
        BYTE3(bIsDangling) = *v88;
        v34 = bIsDangling;
      }
      else
      {
        v74 = rFileBuffer->m_Get;
        v34 = *&rFileBuffer->m_Memory.m_pMemory[v74 - rFileBuffer->m_nOffset];
      }
      rFileBuffer->m_Get = v74 + 4;
    }
  }
  this->m_pTopBehindArea = CNavMesh::GetNavAreaByID(this->m_rNavMesh, v34);
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v35 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v36 = 0;
    if ( v35 )
    {
      bIsDangling = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v81 = bIsDangling;
      v93 = V_strtoui64(bIsDangling, &bIsDangling, 10);
      v36 = v93;
      if ( bIsDangling != v81 )
        rFileBuffer->m_Get += bIsDangling - v81;
    }
  }
  else
  {
    v77 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    v36 = 0;
    if ( v77 )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v78 = rFileBuffer->m_Get;
        v92 = &rFileBuffer->m_Memory.m_pMemory[v78 - rFileBuffer->m_nOffset];
        if ( v92 == 0 )
          v92 = &v93;
        LODWORD(bIsDangling) = v93;
        LOBYTE(bIsDangling) = v92[3];
        BYTE1(bIsDangling) = v92[2];
        BYTE2(bIsDangling) = v92[1];
        BYTE3(bIsDangling) = *v92;
        v36 = bIsDangling;
      }
      else
      {
        v78 = rFileBuffer->m_Get;
        v36 = *&rFileBuffer->m_Memory.m_pMemory[v78 - rFileBuffer->m_nOffset];
      }
      rFileBuffer->m_Get = v78 + 4;
    }
  }
  NavAreaByID = CNavMesh::GetNavAreaByID(this->m_rNavMesh, v36);
  this->m_pBottomArea = NavAreaByID;
  if ( NavAreaByID == 0 )
  {
    DevMsg(
      "ERROR: Unconnected ladder #%d bottom at ( %g, %g, %g )\n",
      this->m_id,
      this->m_vBottom.x,
      this->m_vBottom.y,
      this->m_vBottom.z);
    goto LABEL_135;
  }
  if ( this->m_pTopForwardArea == 0 && this->m_pTopLeftArea == 0 && this->m_pTopRightArea == 0 )
  {
    DevMsg(
      "ERROR: Unconnected ladder #%d top at ( %g, %g, %g )\n",
      this->m_id,
      this->m_vTop.x,
      this->m_vTop.y,
      this->m_vTop.z);
LABEL_135:
    DevWarning("nav_unmark; nav_mark ladder %d; nav_warp_to_mark\n", this->m_id);
  }
LABEL_37:
  m_pEntityInterface = this->m_rNavMesh->m_pEntityInterface;
  v39 = -1;
  if ( m_pEntityInterface != 0 )
    v39 = (*(m_pEntityInterface->_vptr_INavEntityInterface + 3))(m_pEntityInterface, this);
  this->m_nLadderTeam = v39;
}


// CNavLadder::OnRoundRestart  (line 415, @0x00000000031ef3f0, libserver.so)
// callers: CNavMeshGameEventListener::FireGameEvent
void __fastcall CNavLadder::OnRoundRestart(CNavLadder *const this)
{
  INavEntityInterface *m_pEntityInterface; // rdi
  int v3; // eax

  m_pEntityInterface = this->m_rNavMesh->m_pEntityInterface;
  v3 = -1;
  if ( m_pEntityInterface != 0 )
    v3 = (*(m_pEntityInterface->_vptr_INavEntityInterface + 3))(m_pEntityInterface, this);
  this->m_nLadderTeam = v3;
}


// CNavLadder::GetPosAtHeight  (line 422, @0x00000000031ef430, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
__m128i __fastcall CNavLadder::GetPosAtHeight(const CNavLadder *const this, float a2, float flHeight)
{
  float z; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm6_4
  float x; // xmm5_4
  __m128i v9; // [rsp+0h] [rbp-10h] BYREF

  z = this->m_vBottom.z;
  if ( z > a2 )
  {
    v9.m128i_i64[0] = *&this->m_vBottom.x;
    return _mm_loadl_epi64(&v9);
  }
  else
  {
    v4 = this->m_vTop.z;
    if ( a2 > v4 || z == v4 )
    {
      v9.m128i_i64[0] = *&this->m_vTop.x;
      return _mm_loadl_epi64(&v9);
    }
    else
    {
      v5 = (a2 - z) / (v4 - z);
      v6 = this->m_vTop.x * v5;
      x = this->m_vBottom.x;
      *&v9.m128i_i32[1] = (this->m_vBottom.y * (1.0 - v5)) + (this->m_vTop.y * v5);
      *&v9.m128i_i32[2] = (z * (1.0 - v5)) + (v5 * v4);
      *v9.m128i_i32 = (x * (1.0 - v5)) + v6;
      return _mm_loadl_epi64(&v9);
    }
  }
}


// FindFirstAreaInDirection  (line 452, @0x00000000031f0a10, libserver.so)  // inlines: AddDirectionVector, CGameTrace, NavHullAny, RnCollisionAttr_t
// calls: CGameTrace::Init, NavHull_t::NavHull_t, CNavMesh::GetNavArea
// callers: CNavLadder::ConnectGeneratedLadder
CNavArea *__fastcall FindFirstAreaInDirection(
        const Vector *vStartPos,
        int dir,
        float flRange,
        float flBeneathLimit,
        CNavMesh *pNavMesh)
{
  INavPhysicsInterface *m_pPhysicsInterface; // r13
  float v7; // xmm0_4
  int v8; // ebx
  float v9; // xmm2_4
  CNavArea *result; // rax
  int nEnd; // [rsp+3Ch] [rbp-114h]
  Vector vPos; // [rsp+40h] [rbp-110h] BYREF
  NavHull_t navHull; // [rsp+50h] [rbp-100h]
  NavHull_t v17; // [rsp+60h] [rbp-F0h] BYREF
  CGameTrace_1 v18; // [rsp+70h] [rbp-E0h] BYREF

  m_pPhysicsInterface = pNavMesh->m_pPhysicsInterface;
  vPos = *vStartPos;
  nEnd = ((flRange / CNavGeneratorBase::sm_flGenerationStepSize) + 0.5);
  if ( m_pPhysicsInterface != 0 && nEnd > 0 )
  {
    v7 = CNavGeneratorBase::sm_flGenerationStepSize;
    v8 = 1;
    while ( 1 )
    {
      if ( dir == 1 )
      {
        vPos.x = v7 + vPos.x;
      }
      else if ( dir > 1 )
      {
        if ( dir == 2 )
        {
          vPos.y = v7 + vPos.y;
        }
        else if ( dir == 3 )
        {
          vPos.x = vPos.x - v7;
        }
      }
      else if ( dir == 0 )
      {
        vPos.y = vPos.y - v7;
      }
      memset(&v18.m_ShapeAttributes, 0, 31);
      v18.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&v18);
      (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 2))(
        m_pPhysicsInterface,
        vStartPos,
        &vPos,
        &NavTraceMins,
        &NavTraceMaxs,
        CNavConfig::ms_TraceMaskSolidBrushOnly,
        0,
        4,
        &v18);
      if ( v18.fraction < 1.0 )
        break;
      NavHull_t::NavHull_t(&v17, -1.0, v9, 7u);
      navHull = v17;
      result = CNavMesh::GetNavArea(pNavMesh, &vPos, v17, 0, flBeneathLimit, 5.0, 0);
      if ( result != 0 )
        return result;
      if ( nEnd < ++v8 )
        break;
      v7 = CNavGeneratorBase::sm_flGenerationStepSize;
    }
  }
  return 0;
}


// CNavLadder::ConnectGeneratedLadder  (line 491, @0x00000000031ef510, libserver.so)  // inlines: AddDirectionVector, NavDirOpposite, NavHullAny, VectorAdd, operator+, operator=
// calls: CNavPoly::GetClosestPointOnPoly, CNavArea::Disconnect, NavHull_t::NavHull_t, CNavMesh::GetNearestNavArea, CNavArea::AddLadderUp, FindFirstAreaInDirection, CNavArea::AddLadderDown, CNavLadder::Disconnect, DevMsg(char const*,...)
// callers: CNavGeneratorAAQuad::PostCreateNavAreasCustomStep, CNavMesh::SetupLadder, CNavMesh::CreateLadder
// strings: "ERROR: Unconnected ladder bottom at ( %g, %g, %g )\n", "ERROR: Unconnected ladder top at ( %g, %g, %g )\n"
// globals: CSWTCH.833, CSWTCH.835
void __fastcall CNavLadder::ConnectGeneratedLadder(CNavLadder *const this, float a2, float flMaxHeightAboveTopArea)
{
  NavDirType m_dir; // eax
  float v5; // xmm1_4
  float v6; // xmm2_4
  vec_t v7; // xmm0_4
  float v8; // xmm2_4
  CNavArea *m_pBottomArea; // rdi
  const CNavMesh *m_rNavMesh; // rdi
  CNavArea *NearestNavArea; // rax
  float z; // xmm2_4
  NavDirType v13; // esi
  float v14; // xmm0_4
  float v15; // xmm1_4
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  CNavArea *FirstAreaInDirection; // rax
  bool v19; // zf
  __int64 v20; // rax
  int v21; // esi
  CNavArea *v22; // rax
  __int64 v23; // rax
  int v24; // esi
  CNavArea *v25; // rax
  CNavArea *v26; // rax
  CNavArea *m_pTopForwardArea; // rdi
  CNavArea *m_pTopLeftArea; // rdi
  CNavArea *m_pTopRightArea; // rdi
  CNavArea *m_pTopBehindArea; // rax
  CNavArea *v31; // rdx
  CNavArea **v32; // r12
  char v33; // r14
  CNavArea *v34; // rdi
  CNavArea *v35; // rdx
  float flTopZ; // [rsp+Ch] [rbp-74h]
  float flTopZa; // [rsp+Ch] [rbp-74h]
  Vector vCenter; // [rsp+10h] [rbp-70h] BYREF
  Vector vClose; // [rsp+20h] [rbp-60h]
  NavHull_t navHull; // [rsp+30h] [rbp-50h]
  CNavArea *topAreaList[4]; // [rsp+40h] [rbp-40h] BYREF
  char v43; // [rsp+60h] [rbp-20h] BYREF
  Vector ClosestPointOnPoly; // 0:kr14_12.12

  if ( this->m_rNavMesh->m_pPhysicsInterface == 0 )
    return;
  m_dir = this->m_dir;
  v5 = this->m_vBottom.x + 0.0;
  v6 = this->m_vBottom.y + 0.0;
  vCenter.x = v5;
  v7 = CNavGeneratorBase::sm_flGenerationStepSize + this->m_vBottom.z;
  vCenter.y = v6;
  vCenter.z = v7;
  if ( m_dir == NavDirType::EAST )
  {
    vCenter.x = v5 + 16.0;
  }
  else if ( m_dir <= NavDirType::EAST )
  {
    if ( m_dir == NavDirType::NORTH )
    {
      v6 = v6 - 16.0;
      vCenter.y = v6;
    }
  }
  else if ( m_dir == NavDirType::SOUTH )
  {
    v6 = v6 + 16.0;
    vCenter.y = v6;
  }
  else if ( m_dir == NavDirType::WEST )
  {
    vCenter.x = v5 - 16.0;
  }
  NavHull_t::NavHull_t(topAreaList, -1.0, v6, 7u);
  m_rNavMesh = this->m_rNavMesh;
  navHull = *topAreaList;
  NearestNavArea = CNavMesh::GetNearestNavArea(m_rNavMesh, &vCenter, *topAreaList, 12, 10000.0);
  this->m_pBottomArea = NearestNavArea;
  if ( NearestNavArea != 0 )
    CNavArea::AddLadderUp(NearestNavArea, this);
  else
    DevMsg(
      "ERROR: Unconnected ladder bottom at ( %g, %g, %g )\n",
      this->m_vBottom.x,
      this->m_vBottom.y,
      this->m_vBottom.z);
  z = this->m_vTop.z;
  v13 = this->m_dir;
  v14 = this->m_vTop.x + 0.0;
  v15 = this->m_vTop.y + 0.0;
  vCenter.x = v14;
  vCenter.y = v15;
  vCenter.z = CNavGeneratorBase::sm_flGenerationStepSize + z;
  if ( v13 == NavDirType::EAST )
  {
    vCenter.x = v14 + 16.0;
  }
  else if ( v13 <= NavDirType::EAST )
  {
    if ( v13 == NavDirType::NORTH )
      vCenter.y = v15 - 16.0;
  }
  else if ( v13 == NavDirType::SOUTH )
  {
    vCenter.y = v15 + 16.0;
  }
  else if ( v13 == NavDirType::WEST )
  {
    vCenter.x = v14 - 16.0;
  }
  v16.m128_f32[0] = (z - this->m_vBottom.z) + 16.0;
  v17 = _mm_cmpge_ss(0x42F00000u, v16);
  LODWORD(flTopZ) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v17, 0x42F00000u).m128_f32[0]) | v16.m128_i32[0] & v17.m128_i32[0];
  FirstAreaInDirection = FindFirstAreaInDirection(&vCenter, (v13 + 2) % 4, 75.0, flTopZ, this->m_rNavMesh);
  v19 = FirstAreaInDirection == this->m_pBottomArea;
  this->m_pTopForwardArea = FirstAreaInDirection;
  if ( v19 )
    this->m_pTopForwardArea = 0;
  v20 = this->m_dir;
  v21 = 0;
  if ( v20 <= 3 )
    v21 = CSWTCH_833[v20];
  v22 = FindFirstAreaInDirection(&vCenter, v21, 75.0, flTopZ, this->m_rNavMesh);
  v19 = v22 == this->m_pBottomArea;
  this->m_pTopLeftArea = v22;
  if ( v19 )
    this->m_pTopLeftArea = 0;
  v23 = this->m_dir;
  v24 = 0;
  if ( v23 <= 3 )
    v24 = CSWTCH_835[v23];
  v25 = FindFirstAreaInDirection(&vCenter, v24, 75.0, flTopZ, this->m_rNavMesh);
  v19 = v25 == this->m_pBottomArea;
  this->m_pTopRightArea = v25;
  if ( v19 )
    this->m_pTopRightArea = 0;
  v26 = FindFirstAreaInDirection(&vCenter, this->m_dir, 150.0, flTopZ, this->m_rNavMesh);
  v19 = v26 == this->m_pBottomArea;
  this->m_pTopBehindArea = v26;
  if ( v19 )
    this->m_pTopBehindArea = 0;
  m_pTopForwardArea = this->m_pTopForwardArea;
  if ( m_pTopForwardArea != 0 )
    goto LABEL_37;
  m_pTopLeftArea = this->m_pTopLeftArea;
  if ( m_pTopLeftArea == 0 )
  {
    if ( this->m_pTopRightArea != 0 )
    {
      m_pTopRightArea = this->m_pTopRightArea;
      goto LABEL_41;
    }
    DevMsg("ERROR: Unconnected ladder top at ( %g, %g, %g )\n", this->m_vTop.x, this->m_vTop.y, this->m_vTop.z);
    m_pTopForwardArea = this->m_pTopForwardArea;
    if ( m_pTopForwardArea == 0 )
    {
LABEL_38:
      m_pTopLeftArea = this->m_pTopLeftArea;
      if ( m_pTopLeftArea == 0 )
        goto LABEL_40;
      goto LABEL_39;
    }
LABEL_37:
    CNavArea::AddLadderDown(m_pTopForwardArea, this);
    goto LABEL_38;
  }
LABEL_39:
  CNavArea::AddLadderDown(m_pTopLeftArea, this);
LABEL_40:
  m_pTopRightArea = this->m_pTopRightArea;
  if ( m_pTopRightArea != 0 )
LABEL_41:
    CNavArea::AddLadderDown(m_pTopRightArea, this);
  m_pTopBehindArea = this->m_pTopBehindArea;
  if ( m_pTopBehindArea != 0 )
  {
    CNavArea::AddLadderDown(this->m_pTopBehindArea, this);
    CNavLadder::Disconnect(this, this->m_pTopBehindArea);
    m_pTopBehindArea = this->m_pTopBehindArea;
  }
  v31 = this->m_pTopLeftArea;
  v32 = &topAreaList[1];
  v33 = 0;
  v34 = this->m_pTopForwardArea;
  topAreaList[3] = m_pTopBehindArea;
  topAreaList[1] = v31;
  v35 = this->m_pTopRightArea;
  v8 = this->m_vBottom.z + 5.0;
  topAreaList[0] = v34;
  topAreaList[2] = v35;
  if ( v34 != 0 )
  {
LABEL_45:
    flTopZa = v8;
    ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(v34, &this->m_vTop);
    v8 = flTopZa;
    vClose = ClosestPointOnPoly;
    if ( ClosestPointOnPoly.z > flTopZa )
    {
      v8 = ClosestPointOnPoly.z;
      v33 = 1;
    }
  }
  while ( v32 != &v43 )
  {
    v34 = *v32++;
    if ( v34 != 0 )
      goto LABEL_45;
  }
  if ( v33 != 0 )
  {
    if ( a2 > 0.0 )
      v8 = fminf(v8 + a2, this->m_vTop.z);
    this->m_vTop.z = v8;
  }
  m_pBottomArea = this->m_pBottomArea;
  if ( m_pBottomArea != 0
    && (this->m_vBottom.z - CNavPoly::GetClosestPointOnPoly(m_pBottomArea, &this->m_vBottom).z) > 71.0 )
  {
    CNavArea::Disconnect(this->m_pBottomArea, this);
  }
}


