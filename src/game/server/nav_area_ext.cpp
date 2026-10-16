
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavAreaExtended::CNavAreaExtended  (line 32, @0x0000000002ecd730, libserver.so)
// calls: CNavArea::CNavArea
void __fastcall CNavAreaExtended::CNavAreaExtended(CNavAreaExtended *const this, CNavMesh *const rNavMesh)
{
  Place vptr_INavEditor_high; // eax

  CNavArea::CNavArea(this, rNavMesh);
  this->_vptr_CNavPoly = &off_40393F0;
  vptr_INavEditor_high = HIDWORD(rNavMesh->m_pEditor[7]._vptr_INavEditor);
  this->m_nPlayerCount[0] = 0;
  this->m_nPlayerCount[1] = 0;
  this->m_nAverageLightIntensity = -1;
  this->m_lightIntensity[0] = 1.0;
  this->m_place = vptr_INavEditor_high;
  this->m_lightIntensity[1] = 1.0;
  this->m_lightIntensity[2] = 1.0;
  *&this->m_lightIntensity[3] = 1065353216;
}


// CNavAreaExtended::Save  (line 54, @0x0000000002f03600, libserver.so)  // inlines: LowLevelByteSwap<float>, PeekPut, PutFloat, PutType<float>, PutTypeBin<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator[]
// calls: CNavArea::Save, CNavPlaceDirectory::GetIndex, CUtlBuffer::Put, CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
void __fastcall CNavAreaExtended::Save(
        const CNavAreaExtended *const this,
        CUtlBuffer *const rFileBuffer,
        const CNavPlaceDirectory *const placeDirectory)
{
  Place v6; // eax
  const CNavPlaceDirectory *v7; // rdi
  __int64 v8; // r12
  float v9; // xmm0_4
  int m_Put; // eax
  unsigned __int8 *v11; // rdx
  float v12; // [rsp+Ch] [rbp-34h]
  CNavPlaceDirectory::IndexType entry; // [rsp+16h] [rbp-2Ah] BYREF
  float v14; // [rsp+18h] [rbp-28h]
  int v15; // [rsp+1Ch] [rbp-24h]

  CNavArea::Save(this, rFileBuffer, placeDirectory);
  v6 = (*(this->_vptr_CNavPoly + 7))(this);
  v7 = placeDirectory;
  v8 = 0;
  entry = CNavPlaceDirectory::GetIndex(v7, v6);
  CUtlBuffer::Put(rFileBuffer, &entry, 2);
  do
  {
    v9 = this->m_lightIntensity[v8];
    if ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(rFileBuffer, "%f", v9);
    }
    else
    {
      v14 = this->m_lightIntensity[v8];
      v12 = v9;
      if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
      {
        if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
        {
          m_Put = rFileBuffer->m_Put;
          v11 = &rFileBuffer->m_Memory.m_pMemory[m_Put - rFileBuffer->m_nOffset];
          if ( v11 != 0 )
          {
            LOBYTE(v15) = HIBYTE(v14);
            BYTE1(v15) = BYTE2(v14);
            BYTE2(v15) = BYTE1(v14);
            HIBYTE(v15) = LOBYTE(v14);
            *v11 = v15;
            m_Put = rFileBuffer->m_Put;
          }
        }
        else
        {
          *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = v12;
          m_Put = rFileBuffer->m_Put;
        }
        rFileBuffer->m_Put = m_Put + 4;
        CUtlBuffer::AddNullTermination(rFileBuffer);
      }
    }
    ++v8;
  }
  while ( v8 != 4 );
}


// CNavAreaExtended::Load  (line 71, @0x0000000002f03720, libserver.so)  // inlines: GetFloat, GetPlaceDirectory, GetType<float>, GetType<short unsigned int>, GetTypeBin<float>, GetTypeBin<short unsigned int>, GetTypeText<float>, GetTypeText<short unsigned int>, GetUnsignedShort, LowLevelByteSwap<float>, LowLevelByteSwap<short unsigned int>, PeekGet, StringToNumber<float>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator[]
// calls: CNavArea::Load, CUtlBuffer::CheckArbitraryPeekGet, CNavAreaExtended::RecomputeAverageLightIntensity, CUtlBuffer::CheckGet, V_strtod, CNavPlaceDirectory::IndexToPlace, V_strtoui64
NavErrorType __fastcall CNavAreaExtended::Load(
        CNavAreaExtended *const this,
        CUtlBuffer *const rFileBuffer,
        uint nVersion,
        uint nSubVersion,
        LegacyNavData_t *pOutLegacyData)
{
  __int64 i; // r15
  bool v9; // al
  float v10; // xmm0_4
  bool v12; // al
  int v13; // eax
  bool v14; // zf
  int v15; // r14d
  bool v16; // al
  CNavPlaceDirectory::IndexType v17; // si
  CNavPrecacheInfo *m_pPrecacheInfo; // rdi
  void (__fastcall *v19)(CNavAreaExtended *const, _QWORD); // r13
  Place v20; // eax
  bool v21; // al
  int m_Get; // eax
  int v23; // r13d
  unsigned __int8 *v24; // rdx
  float v25; // [rsp+10h] [rbp-40h] BYREF
  int nIncrement; // [rsp+14h] [rbp-3Ch] BYREF
  _QWORD v27[7]; // [rsp+18h] [rbp-38h] BYREF

  CNavArea::Load(this, rFileBuffer, nVersion, nSubVersion, pOutLegacyData);
  if ( nVersion <= 0x18 )
  {
    if ( nVersion > 0x16 )
    {
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        v16 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
        v17 = 0;
        if ( v16 )
        {
          v27[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
          v23 = v27[0];
          LOWORD(v25) = V_strtoui64(v27[0], v27, 10);
          v17 = LOWORD(v25);
          if ( LODWORD(v27[0]) != v23 )
            rFileBuffer->m_Get += LODWORD(v27[0]) - v23;
        }
      }
      else
      {
        v21 = CUtlBuffer::CheckGet(rFileBuffer, 2);
        v17 = 0;
        if ( v21 )
        {
          if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
          {
            m_Get = rFileBuffer->m_Get;
            v24 = &rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
            if ( v24 == 0 )
              v24 = &v25;
            LOWORD(v27[0]) = LOWORD(v25);
            LOBYTE(v27[0]) = v24[1];
            BYTE1(v27[0]) = *v24;
            v17 = v27[0];
          }
          else
          {
            m_Get = rFileBuffer->m_Get;
            v17 = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
          }
          rFileBuffer->m_Get = m_Get + 2;
        }
      }
      m_pPrecacheInfo = this->m_rNavMesh->m_pPrecacheInfo;
      if ( m_pPrecacheInfo != 0 )
      {
        v19 = *(this->_vptr_CNavPoly + 6);
        v20 = CNavPlaceDirectory::IndexToPlace(&m_pPrecacheInfo->m_placeDirectory, v17);
        v19(this, v20);
      }
    }
    else if ( nVersion <= 0xA )
    {
      return NavErrorType::NAV_FILE_OK;
    }
    for ( i = 0; i != 4; ++i )
    {
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        v9 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
        v10 = 0.0;
        if ( v9 )
        {
          v27[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
          v15 = v27[0];
          v10 = V_strtod(v27[0], v27);
          v25 = v10;
          if ( LODWORD(v27[0]) != v15 )
            rFileBuffer->m_Get += LODWORD(v27[0]) - v15;
        }
      }
      else
      {
        v12 = CUtlBuffer::CheckGet(rFileBuffer, 4);
        v10 = 0.0;
        if ( v12 )
        {
          v13 = rFileBuffer->m_Get;
          v14 = (*&rFileBuffer->m_Byteswap & 1) == 0;
          v10 = *&rFileBuffer->m_Memory.m_pMemory[v13 - rFileBuffer->m_nOffset];
          v25 = v10;
          if ( !v14 )
          {
            LOBYTE(v27[0]) = HIBYTE(v25);
            BYTE1(v27[0]) = BYTE2(v25);
            BYTE2(v27[0]) = BYTE1(v25);
            BYTE3(v27[0]) = LOBYTE(v25);
            v10 = *v27;
          }
          rFileBuffer->m_Get = v13 + 4;
        }
      }
      this->m_lightIntensity[i] = v10;
    }
    CNavAreaExtended::RecomputeAverageLightIntensity(this);
  }
  return NavErrorType::NAV_FILE_OK;
}


// CNavAreaExtended::GetNavDataProperties  (line 135, @0x0000000002f03970, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CNavPlaceDatabase::PlaceToName, CNavArea::GetNavDataProperties, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
// strings: "Place"
void __fastcall CNavAreaExtended::GetNavDataProperties(
        const CNavAreaExtended *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pOutPropertyNames,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pOutPropertyValues)
{
  Place v6; // eax
  const char *v7; // rax
  const char *v8; // r14
  __int64 m_Size; // r15
  int v10; // eax
  CUtlString *v11; // r15
  const char *v12; // rax
  __int64 v13; // r14
  int v14; // eax
  CUtlString *v15; // r14
  const char *v16; // rax
  CUtlString v17; // [rsp+10h] [rbp-40h] BYREF

  v6 = (*(this->_vptr_CNavPoly + 7))(this);
  v7 = CNavPlaceDatabase::PlaceToName(&this->m_rNavMesh->m_PlaceDatabase, v6);
  v8 = v7;
  if ( v7 != 0 && *v7 != 0 )
  {
    v17.m_pString = 0;
    CUtlString::Set(&v17, "Place");
    m_Size = pOutPropertyNames->m_Size;
    v10 = pOutPropertyNames->m_Size;
    if ( m_Size == pOutPropertyNames->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&pOutPropertyNames->m_Memory, 1);
      v10 = pOutPropertyNames->m_Size;
    }
    pOutPropertyNames->m_Size = v10 + 1;
    v11 = &pOutPropertyNames->m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      v11->m_pString = 0;
      v12 = CUtlString::Get(&v17);
      CUtlString::Set(v11, v12);
    }
    if ( v17.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v17);
    v17.m_pString = 0;
    CUtlString::Set(&v17, v8);
    v13 = pOutPropertyValues->m_Size;
    v14 = pOutPropertyValues->m_Size;
    if ( v13 == pOutPropertyValues->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&pOutPropertyValues->m_Memory, 1);
      v14 = pOutPropertyValues->m_Size;
    }
    pOutPropertyValues->m_Size = v14 + 1;
    v15 = &pOutPropertyValues->m_Memory.m_pMemory[v13];
    if ( v15 != 0 )
    {
      v15->m_pString = 0;
      v16 = CUtlString::Get(&v17);
      CUtlString::Set(v15, v16);
    }
    if ( v17.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v17);
  }
  CNavArea::GetNavDataProperties(this, pOutPropertyNames, pOutPropertyValues);
}


// CNavAreaExtended::SetNavDataProperty  (line 150, @0x0000000002f03b20, libserver.so)
// calls: V_stricmp_fast, CNavArea::SetNavDataProperty, CNavPlaceDatabase::NameToPlace
// strings: "Place"
void __fastcall CNavAreaExtended::SetNavDataProperty(
        CNavAreaExtended *const this,
        const char *pPropertyName,
        const char *pPropertyValue)
{
  if ( V_stricmp_fast(pPropertyName, "Place") != 0 )
    CNavArea::SetNavDataProperty(this, pPropertyName, pPropertyValue);
  else
    this->m_place = CNavPlaceDatabase::NameToPlace(&this->m_rNavMesh->m_PlaceDatabase, pPropertyValue);
}


// CNavAreaExtended::InheritAttributes  (line 164, @0x0000000002ec7110, libserver.so)
// calls: RandomInt
void __fastcall CNavAreaExtended::InheritAttributes(
        CNavAreaExtended *const this,
        const CNavArea *pFirst,
        const CNavArea *pSecond)
{
  int (**vptr_CNavPoly)(...); // rax
  int (*v7)(...); // r12
  unsigned int v8; // eax
  int v9; // r14d
  bool v10; // cc
  int (*v11)(...); // rbx
  __int64 v12; // rsi

  if ( pFirst != 0 )
  {
    if ( pSecond == 0 )
    {
      if ( (*(this->_vptr_CNavPoly + 7))(this) != 0 )
        return;
      goto LABEL_5;
    }
    v9 = (*(pFirst->_vptr_CNavPoly + 7))(pFirst);
    if ( v9 != (*(pSecond->_vptr_CNavPoly + 7))(pSecond) )
    {
      if ( (*(pFirst->_vptr_CNavPoly + 7))(pFirst) == 0 )
      {
        vptr_CNavPoly = this->_vptr_CNavPoly;
        goto LABEL_13;
      }
      if ( (*(pSecond->_vptr_CNavPoly + 7))(pSecond) != 0 )
      {
        v10 = RandomInt(0, 100) <= 49;
        vptr_CNavPoly = this->_vptr_CNavPoly;
        if ( v10 )
          goto LABEL_6;
LABEL_13:
        v11 = vptr_CNavPoly[6];
        v12 = (*(pSecond->_vptr_CNavPoly + 7))(pSecond);
        v11(this, v12);
        return;
      }
    }
LABEL_5:
    vptr_CNavPoly = this->_vptr_CNavPoly;
LABEL_6:
    v7 = vptr_CNavPoly[6];
    v8 = (*(pFirst->_vptr_CNavPoly + 7))(pFirst);
    v7(this, v8);
  }
}


// CNavAreaExtended::GetLightIntensity  (line 208, @0x0000000002ecd7b0, libserver.so)  // inlines: DistToSqr, GetNextVertIndexCCW, GetNextVertIndexCW, GetVert, LengthSqr, Lerp<float>, LerpBarycentricCoords3D<float>, operator=
// calls: CNavPoly::FindClosestVertIndex, GetBarycentricCoords3D, CalcClosestPointOnLineSegment
// callers: CNavDrawAreaExt::DrawArea_Internal
float __fastcall CNavAreaExtended::GetLightIntensity(const CNavAreaExtended *const this, const Vector *const vPos)
{
  int ClosestVertIndex; // eax
  int m_nVerts; // ecx
  __int64 v6; // r14
  __int64 v7; // r13
  int v8; // edx
  float *v9; // rcx
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  float *v13; // rcx
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  vec_t v16; // xmm2_4
  __int64 v17; // r15
  float *v18; // rax
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float c0; // [rsp+20h] [rbp-80h] BYREF
  float c1; // [rsp+24h] [rbp-7Ch] BYREF
  float c2; // [rsp+28h] [rbp-78h] BYREF
  float outT; // [rsp+2Ch] [rbp-74h] BYREF
  Vector vA; // [rsp+30h] [rbp-70h] BYREF
  Vector vB; // [rsp+40h] [rbp-60h] BYREF
  Vector vC; // [rsp+50h] [rbp-50h] BYREF
  Vector vClosest; // [rsp+60h] [rbp-40h] BYREF

  ClosestVertIndex = CNavPoly::FindClosestVertIndex(this, vPos);
  m_nVerts = this->m_nVerts;
  v6 = ClosestVertIndex;
  v7 = (ClosestVertIndex + 1) % m_nVerts;
  v8 = (ClosestVertIndex + m_nVerts - 1) % m_nVerts;
  v9 = (this + 12 * v7);
  v10 = v9[3];
  v11 = v9[4];
  v12 = v9[2];
  v13 = (this + 12 * ClosestVertIndex);
  vA.y = v10;
  vA.z = v11;
  v14 = v13[3];
  v15 = v13[4];
  vA.x = v12;
  v16 = v13[2];
  vB.y = v14;
  vB.z = v15;
  vB.x = v16;
  v17 = v8;
  v18 = (this + 12 * v8);
  v19 = v18[4];
  v20 = v18[2];
  vC.y = v18[3];
  vC.x = v20;
  vC.z = v19;
  GetBarycentricCoords3D(&vA, &vB, &vC, vPos, &c0, &c1, &c2);
  v21 = (c0 + c1) + c2;
  if ( v21 > 0.89999998 )
    return (((c0 * this->m_lightIntensity[v7]) + (c1 * this->m_lightIntensity[v6])) + (c2 * this->m_lightIntensity[v17]))
         / v21;
  v22 = (((vPos->x - vA.x) * (vPos->x - vA.x)) + ((vPos->y - vA.y) * (vPos->y - vA.y)))
      + ((vPos->z - vA.z) * (vPos->z - vA.z));
  v23 = (((vPos->x - vB.x) * (vPos->x - vB.x)) + ((vPos->y - vB.y) * (vPos->y - vB.y)))
      + ((vPos->z - vB.z) * (vPos->z - vB.z));
  v24 = (((vPos->x - vC.x) * (vPos->x - vC.x)) + ((vPos->y - vC.y) * (vPos->y - vC.y)))
      + ((vPos->z - vC.z) * (vPos->z - vC.z));
  if ( v22 >= v23 && v22 >= v24 )
  {
    CalcClosestPointOnLineSegment(vPos, &vB, &vC, &vClosest, &outT);
    return ((this->m_lightIntensity[v17] - this->m_lightIntensity[v6]) * outT) + this->m_lightIntensity[v6];
  }
  else if ( v23 >= v22 && v23 >= v24 )
  {
    CalcClosestPointOnLineSegment(vPos, &vA, &vC, &vClosest, &outT);
    return ((this->m_lightIntensity[v17] - this->m_lightIntensity[v7]) * outT) + this->m_lightIntensity[v7];
  }
  else
  {
    CalcClosestPointOnLineSegment(vPos, &vA, &vB, &vClosest, &outT);
    return ((this->m_lightIntensity[v6] - this->m_lightIntensity[v7]) * outT) + this->m_lightIntensity[v7];
  }
}


// CNavAreaExtended::SetLighting  (line 225, @0x0000000002ecdb00, libserver.so)  // inlines: Clamp<float>
// calls: CNavAreaExtended::RecomputeAverageLightIntensity
void __fastcall CNavAreaExtended::SetLighting(CNavAreaExtended *const this, float a2, float flIntensity)
{
  int m_nVerts; // edx
  __int64 i; // rax
  float v5; // xmm1_4

  m_nVerts = this->m_nVerts;
  for ( i = 0; m_nVerts > i; ++i )
  {
    v5 = 0.0;
    if ( a2 >= 0.0 )
      v5 = fminf(1.0, a2);
    this->m_lightIntensity[i] = v5;
  }
  CNavAreaExtended::RecomputeAverageLightIntensity(this);
}


// CNavAreaExtended::ComputeLighting  (line 236, @0x0000000002ecdb40, libserver.so)  // inlines: Clamp<float>, GetZ, Max<float>
// calls: CNavPoly::GetVertInset, CNavPoly::GetZ, CNavMesh::GetGroundHeight, GetTerrainAmbientLightAtPoint, CNavAreaExtended::RecomputeAverageLightIntensity
bool __fastcall CNavAreaExtended::ComputeLighting(CNavAreaExtended *const this)
{
  bool result; // al
  float v3; // xmm1_4
  CNavAreaExtended *v4; // r14
  int v5; // r12d
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  const CNavMesh *m_rNavMesh; // rdi
  __m128d v11; // xmm0
  vec_t v12; // xmm3_4
  __m128d v13; // xmm0
  vec_t v14; // xmm1_4
  int m_nVerts; // ecx
  __int64 v16; // rdx
  unsigned int flHeight; // [rsp+1Ch] [rbp-64h] BYREF
  Vector vPos; // [rsp+20h] [rbp-60h] BYREF
  Vector vLight; // [rsp+30h] [rbp-50h]
  Vector vAmbientColor; // [rsp+40h] [rbp-40h] BYREF

  result = (*(*engine + 160LL))(engine);
  if ( result )
  {
    m_nVerts = this->m_nVerts;
    v16 = 0;
    if ( m_nVerts > 0 )
    {
      do
        this->m_lightIntensity[v16++] = 1.0;
      while ( m_nVerts > v16 );
      this->m_nAverageLightIntensity = -1;
    }
  }
  else if ( this->m_nVerts <= 0 )
  {
LABEL_14:
    CNavAreaExtended::RecomputeAverageLightIntensity(this);
    return 1;
  }
  else
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      vPos = CNavPoly::GetVertInset(this, v5, v3);
      v9 = CNavPoly::GetZ(this, vPos.y, v8);
      m_rNavMesh = this->m_rNavMesh;
      v11.m128d_f64[1] = v9;
      v11.m128d_f64[0] = v9 + 35.5 - 18.0;
      v12 = _mm_movedup_pd(v11).m128d_f64[0];
      vPos.z = v12;
      if ( CNavMesh::GetGroundHeight(m_rNavMesh, &vPos, &flHeight, 0) )
      {
        v13 = _mm_cvtps_pd(flHeight);
        v13.m128d_f64[0] = v13.m128d_f64[0] + 35.5 - 18.0;
        vPos.z = _mm_movedup_pd(v13).m128d_f64[0];
      }
      *&vLight.x = g_pLightQuery->GetLightForPoint(3, &vPos, 0xFFFFFFFFLL);
      vLight.z = v14;
      result = GetTerrainAmbientLightAtPoint(&vPos, &vAmbientColor, 0);
      if ( !result )
        break;
      v6 = 0.0;
      v7 = (vLight.x + vLight.y) + vLight.z;
      v3 = (vAmbientColor.x + vAmbientColor.y) + vAmbientColor.z;
      if ( v7 >= 0.0 )
        v6 = fminf(1.0, v7);
      ++v5;
      v4 = (v4 + 4);
      *v4->m_nPlayerCount = fmaxf(v6, v3);
      if ( v5 >= this->m_nVerts )
        goto LABEL_14;
    }
  }
  return result;
}


// CNavAreaExtended::RecomputeAverageLightIntensity  (line 286, @0x0000000002ecda90, libserver.so)
// calls: ceilf
// callers: CNavAreaExtended::SetLighting, CNavAreaExtended::ComputeLighting, CNavAreaExtended::Load
void __fastcall CNavAreaExtended::RecomputeAverageLightIntensity(CNavAreaExtended *const this)
{
  float v1; // xmm0_4
  int m_nVerts; // edx
  __int64 v4; // rax
  int v5; // eax

  v1 = 0.0;
  m_nVerts = this->m_nVerts;
  if ( m_nVerts > 0 )
  {
    v4 = 0;
    v1 = 0.0;
    do
      v1 = v1 + this->m_lightIntensity[v4++];
    while ( m_nVerts > v4 );
  }
  v5 = ceilf((v1 / m_nVerts) * 255.0);
  if ( v5 > 255 )
    v5 = 255;
  if ( v5 < 0 )
    LOBYTE(v5) = 0;
  this->m_nAverageLightIntensity = v5;
}


// CNavAreaExtended::SaveToSelectedSet  (line 301, @0x0000000002f03b90, libserver.so)
// calls: CNavPlaceDatabase::PlaceToName, KeyValues::SetString, CNavArea::SaveToSelectedSet
// strings: "Place"
void __fastcall CNavAreaExtended::SaveToSelectedSet(const CNavAreaExtended *const this, KeyValues *pAreaKey)
{
  Place v4; // eax
  const char *v5; // rax
  const char *v6; // rdx

  v4 = (*(this->_vptr_CNavPoly + 7))(this);
  v5 = CNavPlaceDatabase::PlaceToName(&this->m_rNavMesh->m_PlaceDatabase, v4);
  v6 = "";
  if ( v5 != 0 )
    v6 = v5;
  KeyValues::SetString(pAreaKey, "Place", v6);
  CNavArea::SaveToSelectedSet(this, pAreaKey);
}


// CNavAreaExtended::RestoreFromSelectedSet  (line 311, @0x0000000002f03bf0, libserver.so)
// calls: KeyValues::GetString, CNavPlaceDatabase::NameToPlace, CNavArea::RestoreFromSelectedSet
// strings: "Place"
void __fastcall CNavAreaExtended::RestoreFromSelectedSet(CNavAreaExtended *const this, KeyValues *pAreaKey)
{
  void (__fastcall *v4)(CNavAreaExtended *const, _QWORD); // r13
  const char *String; // rax
  Place v6; // eax

  v4 = *(this->_vptr_CNavPoly + 6);
  String = KeyValues::GetString(pAreaKey, "Place", "", 0, 0);
  v6 = CNavPlaceDatabase::NameToPlace(&this->m_rNavMesh->m_PlaceDatabase, String);
  v4(this, v6);
  CNavArea::RestoreFromSelectedSet(this, pAreaKey);
}


// CNavAreaExtended::CalcPartiallyVisible  (line 325, @0x0000000002ecdd30, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, Dot, DotProduct, EnableInteractsExclude, GetFloat, IgnoreOneEntitySkipPlayersAndNPCs, Init, LengthSqr, NormalizeInPlace, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator+, operator-
// calls: CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, VectorNormalize
// callers: CNavAreaExtended::ComputeVisibility
bool __fastcall CNavAreaExtended::CalcPartiallyVisible(const CNavAreaExtended *const this, const Vector *const vEye)
{
  uint64 m_nVisMask; // rbx
  uint16 v5; // ax
  float x; // xmm0_4
  float y; // xmm3_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  ConVar *m_pParent; // rax
  float v11; // xmm2_4
  float m_fValue; // xmm4_4
  float z; // xmm4_4
  bool result; // al
  vec_t v15; // xmm0_4
  vec_t v16; // xmm3_4
  float v17; // xmm1_4
  const Vector *v18; // rcx
  Vector *m_vVerts; // r15
  int v20; // ebx
  float *p_x; // r14
  vec_t v22; // xmm2_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm6_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // [rsp+1Ch] [rbp-194h]
  float v29; // [rsp+20h] [rbp-190h]
  float v30; // [rsp+24h] [rbp-18Ch]
  float v31; // [rsp+28h] [rbp-188h]
  float v32; // [rsp+2Ch] [rbp-184h]
  Vector vEyeToCenter; // [rsp+30h] [rbp-180h] BYREF
  Vector vEyeToVert; // [rsp+40h] [rbp-170h] BYREF
  CGameQueryAttributes traceFilter; // [rsp+50h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t v37; // [rsp+D0h] [rbp-E0h] BYREF

  m_nVisMask = this->m_rNavMesh->m_nVisMask;
  memset(&v37.m_ShapeAttributes, 0, 31);
  v37.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v37);
  traceFilter.m_nInteractsExclude = 0;
  traceFilter.m_nInteractsAs = 0;
  traceFilter.m_nHierarchyId = 0;
  traceFilter.m_nCollisionGroup = 3;
  *(&traceFilter.RnQueryShapeAttr_t + 31) = *(&traceFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter.m_nObjectSetMask = 7;
  traceFilter.m_nInteractsWith = m_nVisMask;
  traceFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  v5 = HierarchyIDFromBaseEntity(0);
  x = this->m_vCenter.x;
  traceFilter.m_nHierarchyId = v5;
  y = this->m_vCenter.y;
  v8 = vEye->x;
  v9 = vEye->y;
  m_pParent = phys_traceline_radius.m_pParent;
  traceFilter.m_nInteractsExclude = 786432;
  v11 = this->m_vCenter.z + 53.25;
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = (x + 0.0) - v8;
  ray.m_flRadius = m_fValue;
  z = vEye->z;
  ray.m_Delta.y = (y + 0.0) - v9;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.z = v11 - z;
  ray.m_Start.x = v8;
  ray.m_Start.y = v9;
  ray.m_Start.z = z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &v37);
  result = 1;
  if ( v37.fraction < 1.0 )
  {
    v15 = (this->m_vCenter.z + 53.25) - vEye->z;
    v16 = (this->m_vCenter.x + 0.0) - vEye->x;
    vEyeToCenter.y = (this->m_vCenter.y + 0.0) - vEye->y;
    vEyeToCenter.z = v15;
    vEyeToCenter.x = v16;
    VectorNormalize(&vEyeToCenter);
    v17 = 0.0;
    v28 = nav_potentially_visible_dot_tolerance.m_pParent->m_Value.m_fValue;
    if ( this->m_nVerts <= 0 )
    {
      return 0;
    }
    else
    {
      v18 = vEye;
      m_vVerts = this->m_vVerts;
      v20 = 0;
      p_x = &v18->x;
      while ( 1 )
      {
        v29 = v17;
        v32 = m_vVerts->x + v17;
        v30 = v17 + m_vVerts->y;
        v22 = v30 - p_x[1];
        v31 = m_vVerts->z + 53.25;
        v23 = v31 - p_x[2];
        vEyeToVert.x = v32 - *p_x;
        vEyeToVert.y = v22;
        vEyeToVert.z = v23;
        VectorNormalize(&vEyeToVert);
        v17 = v29;
        if ( (((vEyeToVert.x * vEyeToCenter.x) + (vEyeToVert.y * vEyeToCenter.y)) + (vEyeToVert.z * vEyeToCenter.z)) < v28 )
        {
          v24 = *p_x;
          v25 = p_x[1];
          v26 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
          ray.m_Delta.x = (v32 + 0.0) - *p_x;
          ray.m_Delta.y = (v30 + 0.0) - v25;
          ray.m_flRadius = v26;
          v27 = p_x[2];
          ray.m_Start.w = 0.0;
          ray.m_Start.z = v27;
          memset(&ray.m_Delta.w, 0, 36);
          ray.m_Delta.z = (v31 + 53.25) - v27;
          ray.m_IsRay = 1;
          ray.m_Start.x = v24;
          ray.m_Start.y = v25;
          ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                         + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
          CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &v37);
          v17 = v29;
          if ( v37.fraction >= 1.0 )
            break;
        }
        ++v20;
        ++m_vVerts;
        if ( this->m_nVerts <= v20 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}


// CNavAreaExtended::CalcEntirelyVisible  (line 370, @0x0000000002ece2a0, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, EnableInteractsExclude, GetFloat, IgnoreOneEntitySkipPlayersAndNPCs, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator+
// calls: CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay
bool __fastcall CNavAreaExtended::CalcEntirelyVisible(const CNavAreaExtended *const this, const Vector *const vEye)
{
  uint64 m_nVisMask; // r13
  uint16 v5; // ax
  float x; // xmm0_4
  float y; // xmm2_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float m_fValue; // xmm4_4
  float z; // xmm4_4
  float v13; // xmm3_4
  Vector *m_vVerts; // r12
  int v15; // r14d
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v24; // [rsp+1Ch] [rbp-164h]
  CGameQueryAttributes traceFilter; // [rsp+20h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-130h] BYREF
  trace_t v27; // [rsp+A0h] [rbp-E0h] BYREF

  m_nVisMask = this->m_rNavMesh->m_nVisMask;
  memset(&v27.m_ShapeAttributes, 0, 31);
  v27.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v27);
  traceFilter.m_nHierarchyId = 0;
  traceFilter.m_nInteractsWith = m_nVisMask;
  traceFilter.m_nInteractsExclude = 0;
  traceFilter.m_nInteractsAs = 0;
  traceFilter.m_nCollisionGroup = 3;
  *(&traceFilter.RnQueryShapeAttr_t + 31) = *(&traceFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter.m_nObjectSetMask = 7;
  traceFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  v5 = HierarchyIDFromBaseEntity(0);
  x = this->m_vCenter.x;
  traceFilter.m_nHierarchyId = v5;
  y = this->m_vCenter.y;
  v8 = vEye->x;
  v9 = vEye->y;
  traceFilter.m_nInteractsExclude = 786432;
  v10 = this->m_vCenter.z + 53.25;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = (x + 0.0) - v8;
  ray.m_Delta.y = (y + 0.0) - v9;
  ray.m_flRadius = m_fValue;
  z = vEye->z;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.z = v10 - z;
  ray.m_Start.x = v8;
  ray.m_Start.y = v9;
  ray.m_Start.z = z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &v27);
  v13 = 0.0;
  if ( v27.fraction < 1.0 )
    return 0;
  m_vVerts = this->m_vVerts;
  v15 = 0;
  if ( this->m_nVerts > 0 )
  {
    while ( 1 )
    {
      v24 = v13;
      v16 = m_vVerts->x;
      v17 = m_vVerts->y;
      v18 = vEye->x;
      v19 = vEye->y;
      v20 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      ray.m_Start.w = 0.0;
      memset(&ray.m_Delta.w, 0, 36);
      v21 = m_vVerts->z + 53.25;
      ray.m_flRadius = v20;
      v22 = vEye->z;
      ray.m_Delta.x = (v16 + v13) - v18;
      ray.m_Delta.y = (v17 + v13) - v19;
      ray.m_Delta.z = v21 - v22;
      ray.m_IsRay = 1;
      ray.m_Start.x = v18;
      ray.m_Start.y = v19;
      ray.m_Start.z = v22;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != v13;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &v27);
      if ( v27.fraction < 1.0 )
        break;
      ++v15;
      ++m_vVerts;
      v13 = v24;
      if ( this->m_nVerts <= v15 )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CNavAreaExtended::SetupPVS  (line 400, @0x0000000002ece690, libserver.so)  // inlines: FixupZ, GetExtent, GetZ, IsOverlappingPoint, operator=
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CNavPoly::GetZ, CNavPoly::IsOverlappingPoint
// callers: CNavAreaExtended::ComputeVisibility
// globals: m_PVSInfo
void __fastcall CNavAreaExtended::SetupPVS(const CNavAreaExtended *const this)
{
  void (__fastcall *v2)(IPVSManager *, _QWORD, vis_info_t *); // r12
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  float v4; // xmm0_4
  float x; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm6_4
  float y; // xmm1_4
  bool v10; // cf
  float v11; // xmm1_4
  void (__fastcall *v12)(IPVSManager *, _QWORD, Vector *, vis_info_t *); // r15
  SpawnGroupHandle_t v13; // eax
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // [rsp+4h] [rbp-4Ch]
  float v17; // [rsp+8h] [rbp-48h]
  float v18; // [rsp+Ch] [rbp-44h]
  Vector vTestPos; // [rsp+10h] [rbp-40h] BYREF

  v2 = *(g_pPVSManager->_vptr_IPVSManager + 8);
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v2(g_pPVSManager, ActiveSpawnGroupHandle, &m_PVSInfo);
  v4 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
  x = this->m_Extent.lo.x;
  v6 = this->m_Extent.hi.x;
  v7 = this->m_Extent.lo.y + (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
  v8 = this->m_Extent.hi.y - (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
  vTestPos.y = v7;
  v17 = v8;
  if ( v8 >= v7 )
  {
    v16 = x + v4;
    v18 = v6 - v4;
    while ( 1 )
    {
      y = v7;
      vTestPos.x = v16;
      if ( v18 >= v16 )
      {
        while ( 1 )
        {
          vTestPos.z = CNavPoly::GetZ(this, y, v7) + 53.25;
          if ( CNavPoly::IsOverlappingPoint(this, &vTestPos, v11) )
          {
            v12 = *(g_pPVSManager->_vptr_IPVSManager + 9);
            v13 = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
            v12(g_pPVSManager, v13, &vTestPos, &m_PVSInfo);
          }
          v15 = CNavGeneratorBase::sm_flGenerationStepSize;
          v10 = v18 < (vTestPos.x + CNavGeneratorBase::sm_flGenerationStepSize);
          vTestPos.x = vTestPos.x + CNavGeneratorBase::sm_flGenerationStepSize;
          if ( v10 )
            break;
          y = vTestPos.y;
        }
        v7 = vTestPos.y;
      }
      else
      {
        v15 = CNavGeneratorBase::sm_flGenerationStepSize;
      }
      v14 = v15 + v7;
      vTestPos.y = v14;
      if ( v17 < v14 )
        break;
      v7 = v14;
    }
  }
}


// CNavAreaExtended::ComputeVisibility  (line 428, @0x0000000002ece810, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, DistToSqr, Dot, DotProduct, EnableInteractsExclude, Encompass, Extent, FixupZ, GetCorner, GetExtent, GetFloat, GetVert, GetZ, IgnoreOneEntitySkipPlayersAndNPCs, Init, IsOverlappingPoint, LengthSqr, NormalizeInPlace, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, Sqr, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator+, operator+=, operator-, operator-=, operator=
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CalcClosestPointOnAABB, CNavPoly::GetZ, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, CNavAreaExtended::CalcPartiallyVisible, VectorNormalize, CNavPoly::IsOverlappingPoint, CNavAreaExtended::SetupPVS
// globals: m_PVSInfo
CNavAreaExtended::VisibilityType __fastcall CNavAreaExtended::ComputeVisibility(
        const CNavAreaExtended *const this,
        const CNavAreaExtended *pArea,
        bool bIsPVSValid,
        bool bCheckPVS,
        bool *pOutsidePVS)
{
  float v8; // xmm7_4
  float v9; // xmm0_4
  float m_fValue; // xmm0_4
  CNavAreaExtended::VisibilityType result; // eax
  float x; // xmm4_4
  int m_nVerts; // edx
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  Vector *m_vVerts; // rax
  Vector *v17; // rdx
  vec_t v18; // xmm3_4
  vec_t v19; // xmm1_4
  unsigned __int8 (__fastcall *v20)(IPVSManager *, _QWORD, Extent *, Vector *, vis_info_t *); // r14
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm11_4
  float v27; // xmm10_4
  float v28; // xmm12_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm13_4
  float v32; // xmm7_4
  float v33; // xmm10_4
  float v34; // xmm8_4
  float v35; // xmm9_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  vec_t z; // xmm0_4
  vec_t v39; // xmm3_4
  float v40; // xmm5_4
  vec_t v41; // xmm1_4
  vec_t v42; // xmm3_4
  vec_t v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  uint64 m_nVisMask; // r13
  float v47; // xmm7_4
  float v48; // xmm5_4
  float v49; // xmm9_4
  vec_t v50; // xmm0_4
  vec_t v51; // xmm4_4
  bool v52; // al
  vec_t v53; // xmm4_4
  int v54; // r12d
  vec_t v55; // xmm0_4
  float v56; // xmm1_4
  float v57; // xmm4_4
  float v58; // xmm3_4
  vec_t v59; // xmm6_4
  float v60; // xmm5_4
  float v61; // xmm2_4
  bool IsOverlappingPoint; // al
  vec_t v63; // xmm0_4
  vec_t v64; // xmm3_4
  bool v65; // al
  int v66; // edx
  int v67; // edx
  float v68; // xmm1_4
  bool v69; // cf
  float v70; // xmm5_4
  float v71; // xmm5_4
  float v72; // [rsp+Ch] [rbp-1E4h]
  float v73; // [rsp+10h] [rbp-1E0h]
  float v74; // [rsp+10h] [rbp-1E0h]
  float v75; // [rsp+14h] [rbp-1DCh]
  float v76; // [rsp+14h] [rbp-1DCh]
  float vEye; // [rsp+18h] [rbp-1D8h]
  float flDistanceSq; // [rsp+20h] [rbp-1D0h]
  float v79; // [rsp+24h] [rbp-1CCh]
  float ya; // [rsp+28h] [rbp-1C8h]
  float y; // [rsp+28h] [rbp-1C8h]
  float yb; // [rsp+28h] [rbp-1C8h]
  bool v83; // [rsp+2Ch] [rbp-1C4h]
  Vector vThisCenter; // [rsp+30h] [rbp-1C0h] BYREF
  Vector vOtherMins; // [rsp+40h] [rbp-1B0h] BYREF
  Vector vOtherMaxs; // [rsp+50h] [rbp-1A0h] BYREF
  Vector vTarget; // [rsp+60h] [rbp-190h] BYREF
  Vector vCenterToCenter; // [rsp+70h] [rbp-180h] BYREF
  Vector vTestPos; // [rsp+80h] [rbp-170h] BYREF
  CGameQueryAttributes traceFilter; // [rsp+90h] [rbp-160h] BYREF
  Vector vCenterToTest; // [rsp+C0h] [rbp-130h] BYREF
  int v92; // [rsp+CCh] [rbp-124h]
  float v93; // [rsp+D0h] [rbp-120h]
  float v94; // [rsp+D4h] [rbp-11Ch]
  float v95; // [rsp+D8h] [rbp-118h]
  int v96; // [rsp+DCh] [rbp-114h]
  float v97; // [rsp+E0h] [rbp-110h]
  float v98; // [rsp+E4h] [rbp-10Ch]
  float v99; // [rsp+E8h] [rbp-108h]
  int v100; // [rsp+ECh] [rbp-104h]
  float v101; // [rsp+F0h] [rbp-100h]
  float v102; // [rsp+F4h] [rbp-FCh]
  float v103; // [rsp+F8h] [rbp-F8h]
  int v104; // [rsp+FCh] [rbp-F4h]
  int v105; // [rsp+100h] [rbp-F0h]
  bool v106; // [rsp+104h] [rbp-ECh]
  bool v107; // [rsp+105h] [rbp-EBh]
  Extent areaExtent; // [rsp+110h] [rbp-E0h] BYREF
  float v109; // [rsp+13Ch] [rbp-B4h]
  __int64 v110; // [rsp+178h] [rbp-78h]
  __int64 v111; // [rsp+180h] [rbp-70h]
  __int64 v112; // [rsp+188h] [rbp-68h]
  int v113; // [rsp+190h] [rbp-60h]
  __int16 v114; // [rsp+194h] [rbp-5Ch]
  char v115; // [rsp+196h] [rbp-5Ah]
  char v116; // [rsp+197h] [rbp-59h]

  v8 = pArea->m_vCenter.x - this->m_vCenter.x;
  v9 = pArea->m_vCenter.z - this->m_vCenter.z;
  flDistanceSq = (v9 * v9)
               + (((pArea->m_vCenter.y - this->m_vCenter.y) * (pArea->m_vCenter.y - this->m_vCenter.y)) + (v8 * v8));
  m_fValue = nav_max_view_distance.m_pParent->m_Value.m_fValue;
  if ( m_fValue > 0.0000099999997 )
  {
    result = CNavAreaExtended::VisibilityType::NOT_VISIBLE;
    if ( flDistanceSq > (m_fValue * m_fValue) )
      return result;
  }
  if ( !bIsPVSValid )
  {
    v83 = bCheckPVS;
    CNavAreaExtended::SetupPVS(this);
    bCheckPVS = v83;
  }
  if ( bCheckPVS )
  {
    x = pArea->m_vCenter.x + 0.0;
    m_nVerts = pArea->m_nVerts;
    v14 = pArea->m_vCenter.y + 0.0;
    v15 = pArea->m_vCenter.z + 53.25;
    areaExtent.lo.x = x;
    areaExtent.lo.y = v14;
    areaExtent.lo.z = v15;
    areaExtent.hi.x = x;
    areaExtent.hi.y = v14;
    areaExtent.hi.z = v15;
    if ( m_nVerts > 0 )
    {
      m_vVerts = pArea->m_vVerts;
      v17 = &pArea->m_vVerts[(m_nVerts - 1) + 1];
      while ( 1 )
      {
        v18 = m_vVerts->y + 0.0;
        v19 = m_vVerts->z + 53.25;
        vCenterToTest.x = m_vVerts->x + 0.0;
        vCenterToTest.y = v18;
        vCenterToTest.z = v19;
        if ( x > vCenterToTest.x )
          areaExtent.lo.x = vCenterToTest.x;
        if ( vCenterToTest.x > areaExtent.hi.x )
          areaExtent.hi.x = vCenterToTest.x;
        if ( areaExtent.lo.y > vCenterToTest.y )
          areaExtent.lo.y = vCenterToTest.y;
        if ( vCenterToTest.y > areaExtent.hi.y )
          areaExtent.hi.y = vCenterToTest.y;
        if ( areaExtent.lo.z > vCenterToTest.z )
          areaExtent.lo.z = vCenterToTest.z;
        if ( vCenterToTest.z > areaExtent.hi.z )
          areaExtent.hi.z = vCenterToTest.z;
        if ( ++m_vVerts == v17 )
          break;
        x = areaExtent.lo.x;
      }
    }
    v20 = *(g_pPVSManager->_vptr_IPVSManager + 7);
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    if ( v20(g_pPVSManager, ActiveSpawnGroupHandle, &areaExtent, &areaExtent.hi, &m_PVSInfo) == 0 )
    {
      if ( pOutsidePVS != 0 )
        *pOutsidePVS = 1;
      return CNavAreaExtended::VisibilityType::NOT_VISIBLE;
    }
    if ( pOutsidePVS != 0 )
      *pOutsidePVS = 0;
  }
  v22 = this->m_vVerts[0].z + 53.25;
  v23 = this->m_vVerts[1].z + 53.25;
  v24 = this->m_vVerts[3].z + 53.25;
  v25 = this->m_vVerts[2].z + 53.25;
  v26 = this->m_vCenter.x + 0.0;
  v27 = this->m_vVerts[0].x;
  v28 = this->m_vCenter.y + 0.0;
  v29 = this->m_vVerts[0].y;
  v30 = this->m_vVerts[2].x;
  v31 = this->m_vCenter.z + 53.25;
  vThisCenter.x = v26;
  v32 = this->m_vVerts[2].y;
  v33 = v27 + 0.0;
  vThisCenter.y = v28;
  v34 = v29 + 0.0;
  vThisCenter.z = v31;
  v35 = v30 + 0.0;
  v36 = v32 + 0.0;
  if ( v23 > v22 )
  {
    if ( v25 > v22 )
      goto LABEL_29;
  }
  else if ( v25 > v23 )
  {
    v70 = v23;
    if ( v23 > v22 )
    {
LABEL_29:
      if ( v24 <= v22 )
      {
LABEL_30:
        v37 = v24;
        goto LABEL_31;
      }
      goto LABEL_58;
    }
LABEL_56:
    if ( v24 <= v70 )
      goto LABEL_30;
    if ( v23 > v22 )
    {
LABEL_58:
      if ( v25 <= v22 )
        goto LABEL_59;
LABEL_69:
      v37 = v22;
LABEL_31:
      if ( v22 > v23 )
        goto LABEL_32;
      goto LABEL_60;
    }
    if ( v25 > v23 )
    {
      v37 = v23;
      if ( v23 <= v22 )
        goto LABEL_31;
      goto LABEL_69;
    }
LABEL_59:
    v37 = v25;
    if ( v22 > v23 )
    {
LABEL_32:
      if ( v22 > v25 )
        goto LABEL_33;
      goto LABEL_71;
    }
LABEL_60:
    if ( v23 <= v25 )
    {
LABEL_71:
      v71 = v25;
LABEL_62:
      if ( v71 <= v24 )
        goto LABEL_36;
      if ( v22 <= v23 )
      {
        if ( v23 <= v25 )
          goto LABEL_35;
        v24 = v23;
        if ( v22 <= v23 )
          goto LABEL_36;
        goto LABEL_66;
      }
LABEL_34:
      if ( v22 <= v25 )
      {
LABEL_35:
        v24 = v25;
        goto LABEL_36;
      }
LABEL_66:
      v24 = v22;
      goto LABEL_36;
    }
    v71 = v23;
    if ( v22 <= v23 )
      goto LABEL_62;
LABEL_33:
    if ( v22 > v24 )
      goto LABEL_34;
LABEL_36:
    z = pArea->m_vVerts[0].z;
    v39 = pArea->m_vVerts[0].x;
    v40 = v24 + 0.1;
    vOtherMins.y = pArea->m_vVerts[0].y;
    v41 = pArea->m_vVerts[2].y;
    vOtherMins.x = v39;
    v42 = pArea->m_vVerts[2].x;
    vOtherMins.z = z;
    v43 = pArea->m_vVerts[2].z;
    v73 = v37 - v31;
    v75 = v35 - v26;
    vEye = v36 - v28;
    ya = v40 - v31;
    vOtherMaxs.x = v42;
    vOtherMaxs.y = v41;
    vOtherMaxs.z = v43;
    CalcClosestPointOnAABB(&vOtherMins, &vOtherMaxs, &vThisCenter, &vTarget);
    v45 = CNavPoly::GetZ(pArea, vTarget.y, v44);
    m_nVisMask = this->m_rNavMesh->m_nVisMask;
    vTarget.z = v45 + 53.25;
    v114 = 0;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v115 = 0;
    v116 = 7;
    v113 = 0;
    CGameTrace::Init(&areaExtent);
    traceFilter.m_nHierarchyId = 0;
    traceFilter.m_nInteractsExclude = 0;
    traceFilter.m_nInteractsAs = 0;
    traceFilter.m_nEntityIdToIgnore = -1;
    traceFilter.m_nCollisionGroup = 3;
    traceFilter.m_nInteractsWith = m_nVisMask;
    *(&traceFilter.RnQueryShapeAttr_t + 31) = *(&traceFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
    traceFilter.m_nObjectSetMask = 7;
    traceFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
    traceFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
    v92 = 0;
    v96 = 0;
    v100 = 0;
    v104 = 0;
    v93 = vTarget.x - vThisCenter.x;
    v105 = 0;
    v94 = vTarget.y - vThisCenter.y;
    v95 = vTarget.z - vThisCenter.z;
    traceFilter.m_nInteractsExclude |= 0xC0000uLL;
    v47 = (vEye + (v34 - v28)) * 0.5;
    v48 = (ya + v73) * 0.5;
    v102 = (vEye - (v34 - v28)) * 0.5;
    v103 = (ya - v73) * 0.5;
    v49 = ((v35 - v26) + (v33 - v26)) * 0.5;
    v101 = (v75 - (v33 - v26)) * 0.5;
    v107 = (((v93 * v93) + (v94 * v94)) + (v95 * v95)) != 0.0;
    vCenterToTest.x = vThisCenter.x + v49;
    v106 = (((v101 * v101) + (v102 * v102)) + (v103 * v103)) < 0.000001;
    vCenterToTest.y = vThisCenter.y + v47;
    v99 = -v48;
    vCenterToTest.z = vThisCenter.z + v48;
    v97 = -v49;
    v98 = -v47;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vCenterToTest, &traceFilter, &areaExtent);
    result = CNavAreaExtended::VisibilityType::COMPLETELY_VISIBLE;
    if ( v109 != 1.0 )
    {
      if ( areaExtent.hi.x <= vOtherMins.x
        || vOtherMaxs.x <= areaExtent.hi.x
        || areaExtent.hi.y <= vOtherMins.y
        || (result = CNavAreaExtended::VisibilityType::COMPLETELY_VISIBLE, vOtherMaxs.y <= areaExtent.hi.y) )
      {
        v50 = this->m_vCenter.z + 53.25;
        v51 = this->m_vCenter.x + 0.0;
        vCenterToTest.y = this->m_vCenter.y + 0.0;
        vCenterToTest.z = v50;
        vCenterToTest.x = v51;
        v52 = CNavAreaExtended::CalcPartiallyVisible(pArea, &vCenterToTest);
        v53 = this->m_vCenter.x - pArea->m_vCenter.x;
        v54 = v52 ? 3 : 0;
        v55 = this->m_vCenter.z - pArea->m_vCenter.z;
        vCenterToCenter.y = this->m_vCenter.y - pArea->m_vCenter.y;
        vCenterToCenter.x = v53;
        vCenterToCenter.z = v55;
        VectorNormalize(&vCenterToCenter);
        v56 = 0.5 * CNavGeneratorBase::sm_flGenerationStepSize;
        v57 = this->m_Extent.lo.x;
        v58 = this->m_Extent.hi.x;
        v59 = this->m_Extent.hi.y - (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
        v60 = nav_potentially_visible_dot_tolerance.m_pParent->m_Value.m_fValue;
        vTestPos.y = this->m_Extent.lo.y + (0.5 * CNavGeneratorBase::sm_flGenerationStepSize);
        v76 = v60;
        v72 = v59;
        if ( v59 < vTestPos.y )
          return v54;
        v61 = 0.0;
        v74 = v57 + v56;
        v79 = v58 - v56;
        while ( 1 )
        {
          vTestPos.x = v74;
          if ( v79 < v74 )
          {
            v68 = CNavGeneratorBase::sm_flGenerationStepSize;
          }
          else
          {
            if ( v54 == 1 )
              return CNavAreaExtended::VisibilityType::POTENTIALLY_VISIBLE;
            while ( 1 )
            {
              y = v61;
              vTestPos.z = CNavPoly::GetZ(this, vTestPos.y, v61) + 53.25;
              vTestPos.x = vTestPos.x + y;
              vTestPos.y = vTestPos.y + y;
              IsOverlappingPoint = CNavPoly::IsOverlappingPoint(this, &vTestPos, vTestPos.y);
              v61 = y;
              if ( IsOverlappingPoint )
              {
                if ( flDistanceSq <= 1000000.0
                  || (v63 = (vTestPos.z - 53.25) - pArea->m_vCenter.z,
                      v64 = vTestPos.x - pArea->m_vCenter.x,
                      vCenterToTest.y = vTestPos.y - pArea->m_vCenter.y,
                      vCenterToTest.z = v63,
                      vCenterToTest.x = v64,
                      VectorNormalize(&vCenterToTest),
                      v61 = y,
                      (((vCenterToTest.x * vCenterToCenter.x) + (vCenterToTest.y * vCenterToCenter.y))
                     + (vCenterToTest.z * vCenterToCenter.z)) < v76) )
                {
                  yb = v61;
                  v65 = CNavAreaExtended::CalcPartiallyVisible(pArea, &vTestPos);
                  v66 = v54;
                  v54 &= ~2u;
                  v67 = v66 | 1;
                  v61 = yb;
                  if ( v65 )
                    v54 = v67;
                }
              }
              v68 = CNavGeneratorBase::sm_flGenerationStepSize;
              v69 = v79 < (vTestPos.x + CNavGeneratorBase::sm_flGenerationStepSize);
              vTestPos.x = vTestPos.x + CNavGeneratorBase::sm_flGenerationStepSize;
              if ( v69 )
                break;
              if ( v54 == 1 )
                return CNavAreaExtended::VisibilityType::POTENTIALLY_VISIBLE;
            }
          }
          vTestPos.y = v68 + vTestPos.y;
          if ( v72 < vTestPos.y )
            return v54;
        }
      }
    }
    return result;
  }
  v70 = v25;
  goto LABEL_56;
}


