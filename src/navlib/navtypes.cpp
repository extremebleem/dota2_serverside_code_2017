
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_navtypes.cpp  (line 0, @0x0000000001a6deb0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_navtypes_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CNavGenParams::GetNavGenParamsToUse  (line 52, @0x000000000320ade0, libserver.so)
// callers: CNavMesh::BuildFromNavGen
// globals: CNavGenParams::ms_NavGenParamsDefault
const CNavGenParams *__fastcall CNavGenParams::GetNavGenParamsToUse(const CNavGenParams *const this)
{
  const CNavGenParams *result; // rax

  result = &CNavGenParams::ms_NavGenParamsDefault;
  if ( !this->m_useProjectDefaults )
    return this;
  return result;
}


// CNavGenParams::LoadDefaultsFromGameInfo  (line 59, @0x000000000320c640, libserver.so)
// calls: KeyValues::FindKey, KeyValues::GetFloat, KeyValues::GetInt, V_sprintf_safe<256ul>, __stack_chk_fail
// callers: CNavGameSystem::GameInit
// strings: "NavSystem", "NavTileSize", "NavCellSize", "NavCellHeight", "NavRegionMinSize", "NavRegionMergeSize" (19 total)
// globals: CNavGenParams::ms_bDefaultsLoaded
void __fastcall CNavGenParams::LoadDefaultsFromGameInfo(KeyValues *pGameInfoKeys)
{
  KeyValues *Key; // rax
  float v2; // xmm1_4
  KeyValues *v3; // rbx
  int v4; // r13d
  float *m_flAgentRadius; // r12
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  int Int; // eax
  int v12; // edx
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  char settingName[256]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v18; // [rsp+108h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  if ( !CNavGenParams::ms_bDefaultsLoaded && pGameInfoKeys != 0 )
  {
    Key = KeyValues::FindKey(pGameInfoKeys, "NavSystem", 0);
    v3 = Key;
    if ( Key != 0 )
    {
      v4 = 0;
      CNavGenParams::ms_NavGenParamsDefault.m_flTileSize = KeyValues::GetFloat(
                                                             Key,
                                                             "NavTileSize",
                                                             CNavGenParams::ms_NavGenParamsDefault.m_flTileSize,
                                                             v2);
      m_flAgentRadius = CNavGenParams::ms_NavGenParamsDefault.m_flAgentRadius;
      CNavGenParams::ms_NavGenParamsDefault.m_flCellSize = KeyValues::GetFloat(
                                                             v3,
                                                             "NavCellSize",
                                                             CNavGenParams::ms_NavGenParamsDefault.m_flCellSize,
                                                             v6);
      CNavGenParams::ms_NavGenParamsDefault.m_flCellHeight = KeyValues::GetFloat(
                                                               v3,
                                                               "NavCellHeight",
                                                               CNavGenParams::ms_NavGenParamsDefault.m_flCellHeight,
                                                               v7);
      CNavGenParams::ms_NavGenParamsDefault.m_nRegionMinSize = KeyValues::GetInt(
                                                                 v3,
                                                                 "NavRegionMinSize",
                                                                 CNavGenParams::ms_NavGenParamsDefault.m_nRegionMinSize);
      CNavGenParams::ms_NavGenParamsDefault.m_nRegionMergeSize = KeyValues::GetInt(
                                                                   v3,
                                                                   "NavRegionMergeSize",
                                                                   CNavGenParams::ms_NavGenParamsDefault.m_nRegionMergeSize);
      CNavGenParams::ms_NavGenParamsDefault.m_flDetailSampleDist = KeyValues::GetFloat(
                                                                     v3,
                                                                     "NavDetailSampleDistance",
                                                                     CNavGenParams::ms_NavGenParamsDefault.m_flDetailSampleDist,
                                                                     v8);
      CNavGenParams::ms_NavGenParamsDefault.m_flDetailSampleMaxError = KeyValues::GetFloat(
                                                                         v3,
                                                                         "NavDetailSampleMaxError",
                                                                         CNavGenParams::ms_NavGenParamsDefault.m_flDetailSampleMaxError,
                                                                         v9);
      CNavGenParams::ms_NavGenParamsDefault.m_nEdgeMaxLen = KeyValues::GetInt(
                                                              v3,
                                                              "NavEdgeMaxLen",
                                                              CNavGenParams::ms_NavGenParamsDefault.m_nEdgeMaxLen);
      CNavGenParams::ms_NavGenParamsDefault.m_flEdgeMaxError = KeyValues::GetFloat(
                                                                 v3,
                                                                 "NavEdgeMaxError",
                                                                 CNavGenParams::ms_NavGenParamsDefault.m_flEdgeMaxError,
                                                                 v10);
      CNavGenParams::ms_NavGenParamsDefault.m_nVertsPerPoly = KeyValues::GetInt(
                                                                v3,
                                                                "NavVertsPerPoly",
                                                                CNavGenParams::ms_NavGenParamsDefault.m_nVertsPerPoly);
      CNavGenParams::ms_NavGenParamsDefault.m_nAgentNumHulls = KeyValues::GetInt(
                                                                 v3,
                                                                 "NavAgentNumHulls",
                                                                 CNavGenParams::ms_NavGenParamsDefault.m_nAgentNumHulls);
      do
      {
        ++m_flAgentRadius;
        V_sprintf_safe<256ul>(settingName, "NavAgentRadius_%d", v4);
        Int = KeyValues::GetInt(v3, settingName, *(m_flAgentRadius - 1));
        v12 = v4++;
        *(m_flAgentRadius - 1) = Int;
        V_sprintf_safe<256ul>(settingName, "NavAgentHeight_%d", v12);
        m_flAgentRadius[2] = KeyValues::GetInt(v3, settingName, m_flAgentRadius[2]);
      }
      while ( v4 != 3 );
      CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxClimb = KeyValues::GetFloat(
                                                                  v3,
                                                                  "NavAgentMaxClimb",
                                                                  CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxClimb,
                                                                  v13);
      CNavGenParams::ms_NavGenParamsDefault.m_nAgentMaxSlope = KeyValues::GetInt(
                                                                 v3,
                                                                 "NavAgentMaxSlope",
                                                                 CNavGenParams::ms_NavGenParamsDefault.m_nAgentMaxSlope);
      CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxJumpDownDist = KeyValues::GetFloat(
                                                                         v3,
                                                                         "NavAgentMaxJumpDownDist",
                                                                         CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxJumpDownDist,
                                                                         v14);
      CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxJumpHorizDist1 = KeyValues::GetFloat(
                                                                           v3,
                                                                           "NavAgentMaxJumpAcrossBottom",
                                                                           CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxJumpHorizDist1,
                                                                           v15);
      CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxJumpUpDist = KeyValues::GetFloat(
                                                                       v3,
                                                                       "NavAgentMaxJumpUpDist",
                                                                       CNavGenParams::ms_NavGenParamsDefault.m_flAgentMaxJumpUpDist,
                                                                       v16);
    }
    CNavGenParams::ms_bDefaultsLoaded = 1;
  }
}


// Serialize  (line 121, @0x000000000320ae00, libserver.so)  // inlines: IsValid, LowLevelByteSwap<double>, PeekPut, PutDouble, PutType<double>, PutTypeBin<double>, SwapBufferToTargetEndian<double>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: Serialize, Serialize<VecDouble3>
// strings: "%.15lf"
bool __fastcall Serialize(CUtlBuffer *const rBuf, const VecDouble3 *const rSrc)
{
  double x; // xmm0_8
  double y; // xmm0_8
  double z; // xmm0_8
  int m_Put; // eax
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // di
  _BYTE *v15; // rsi
  unsigned __int8 *v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // di
  _BYTE *v20; // rsi
  unsigned __int8 *v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // di
  _BYTE *v25; // rsi
  double v26; // [rsp+8h] [rbp-38h]
  double v27; // [rsp+10h] [rbp-30h]
  _QWORD v28[2]; // [rsp+18h] [rbp-28h]
  _QWORD v29[3]; // [rsp+28h] [rbp-18h] BYREF

  x = rSrc->x;
  if ( (rBuf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rBuf, "%.15lf", x);
  }
  else
  {
    v27 = rSrc->x;
    v26 = x;
    if ( CUtlBuffer::CheckPut(rBuf, 8) )
    {
      if ( (*&rBuf->m_Byteswap & 1) != 0 )
      {
        m_Put = rBuf->m_Put;
        v21 = &rBuf->m_Memory.m_pMemory[m_Put - rBuf->m_nOffset];
        if ( v21 != 0 )
        {
          v22 = 8;
          v23 = 0;
          v29[0] = *v21;
          do
          {
            v24 = *(&v26 + v22 + 7);
            v25 = v29 + v23;
            v23 = 9 - v22--;
            *v25 = v24;
          }
          while ( v22 != 0 );
          *v21 = v29[0];
          m_Put = rBuf->m_Put;
        }
      }
      else
      {
        *&rBuf->m_Memory.m_pMemory[rBuf->m_Put - rBuf->m_nOffset] = v26;
        m_Put = rBuf->m_Put;
      }
      rBuf->m_Put = m_Put + 8;
      CUtlBuffer::AddNullTermination(rBuf);
      y = rSrc->y;
      if ( (rBuf->m_Flags & 1) != 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  y = rSrc->y;
  if ( (rBuf->m_Flags & 1) != 0 )
  {
LABEL_4:
    CUtlBuffer::Printf(rBuf, "%.15lf", y);
    goto LABEL_5;
  }
LABEL_12:
  *v28 = y;
  v26 = y;
  if ( CUtlBuffer::CheckPut(rBuf, 8) )
  {
    if ( (*&rBuf->m_Byteswap & 1) != 0 )
    {
      v9 = rBuf->m_Put;
      v11 = &rBuf->m_Memory.m_pMemory[v9 - rBuf->m_nOffset];
      if ( v11 != 0 )
      {
        v12 = 8;
        v13 = 0;
        v29[0] = *v11;
        do
        {
          v14 = *(&v27 + v12 + 7);
          v15 = v29 + v13;
          v13 = 9 - v12--;
          *v15 = v14;
        }
        while ( v12 != 0 );
        *v11 = v29[0];
        v9 = rBuf->m_Put;
      }
    }
    else
    {
      *&rBuf->m_Memory.m_pMemory[rBuf->m_Put - rBuf->m_nOffset] = v26;
      v9 = rBuf->m_Put;
    }
    rBuf->m_Put = v9 + 8;
    CUtlBuffer::AddNullTermination(rBuf);
    z = rSrc->z;
    if ( (rBuf->m_Flags & 1) != 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
LABEL_5:
  z = rSrc->z;
  if ( (rBuf->m_Flags & 1) != 0 )
  {
LABEL_6:
    CUtlBuffer::Printf(rBuf, "%.15lf", z);
    return rBuf->m_Error == 0;
  }
LABEL_16:
  *&v28[1] = z;
  v26 = z;
  if ( !CUtlBuffer::CheckPut(rBuf, 8) )
    return rBuf->m_Error == 0;
  if ( (*&rBuf->m_Byteswap & 1) != 0 )
  {
    v10 = rBuf->m_Put;
    v16 = &rBuf->m_Memory.m_pMemory[v10 - rBuf->m_nOffset];
    if ( v16 != 0 )
    {
      v17 = 8;
      v18 = 0;
      v29[0] = *v16;
      do
      {
        v19 = *(v28 + v17 + 7);
        v20 = v29 + v18;
        v18 = 9 - v17--;
        *v20 = v19;
      }
      while ( v17 != 0 );
      *v16 = v29[0];
      v10 = rBuf->m_Put;
    }
  }
  else
  {
    *&rBuf->m_Memory.m_pMemory[rBuf->m_Put - rBuf->m_nOffset] = v26;
    v10 = rBuf->m_Put;
  }
  rBuf->m_Put = v10 + 8;
  CUtlBuffer::AddNullTermination(rBuf);
  return rBuf->m_Error == 0;
}


// Unserialize  (line 129, @0x000000000320b100, libserver.so)  // inlines: GetDouble, GetType<double>, GetTypeBin<double>, GetTypeText<double>, IsValid, LowLevelByteSwap<double>, PeekGet, StringToNumber<double>, SwapBufferToTargetEndian<double>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtod, CUtlBuffer::CheckGet, CByteswap::SwapBufferToTargetEndian<double>
// callers: Unserialize, Unserialize<VecDouble3>
bool __fastcall Unserialize(CUtlBuffer *const rBuf, VecDouble3 *const rDst)
{
  bool v4; // al
  double v5; // xmm0_8
  bool v6; // al
  double v7; // xmm0_8
  bool v8; // al
  double v9; // xmm0_8
  int v11; // r13d
  int v12; // r13d
  bool v13; // al
  int v14; // eax
  unsigned __int8 *v15; // rcx
  bool v16; // zf
  int v17; // r13d
  bool v18; // al
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // di
  _BYTE *v23; // rcx
  bool v24; // al
  int m_Get; // eax
  unsigned __int8 *m_pMemory; // rcx
  int nIncrement; // [rsp+Ch] [rbp-34h] BYREF
  double inputBuffer; // [rsp+10h] [rbp-30h] BYREF
  _QWORD v29[5]; // [rsp+18h] [rbp-28h] BYREF

  if ( (rBuf->m_Flags & 1) == 0 )
  {
    v24 = CUtlBuffer::CheckGet(rBuf, 8);
    v5 = 0.0;
    if ( v24 )
    {
      m_Get = rBuf->m_Get;
      m_pMemory = rBuf->m_Memory.m_pMemory;
      v16 = (*&rBuf->m_Byteswap & 1) == 0;
      v5 = *&rBuf->m_Memory.m_pMemory[m_Get - rBuf->m_nOffset];
      inputBuffer = v5;
      if ( !v16 )
      {
        CByteswap::SwapBufferToTargetEndian<double>(&rBuf->m_Byteswap, &inputBuffer, &inputBuffer, m_pMemory);
        m_Get = rBuf->m_Get;
        v5 = inputBuffer;
      }
      rBuf->m_Get = m_Get + 8;
    }
LABEL_3:
    rDst->x = v5;
    if ( (rBuf->m_Flags & 1) == 0 )
      goto LABEL_18;
    goto LABEL_4;
  }
  nIncrement = 128;
  v4 = CUtlBuffer::CheckArbitraryPeekGet(rBuf, 0, &nIncrement);
  v5 = 0.0;
  if ( !v4 )
    goto LABEL_3;
  v29[0] = &rBuf->m_Memory.m_pMemory[rBuf->m_Get - rBuf->m_nOffset];
  v17 = v29[0];
  v5 = V_strtod(v29[0], v29);
  inputBuffer = v5;
  if ( LODWORD(v29[0]) == v17 )
    goto LABEL_3;
  rBuf->m_Get += LODWORD(v29[0]) - v17;
  rDst->x = v5;
  if ( (rBuf->m_Flags & 1) == 0 )
  {
LABEL_18:
    v18 = CUtlBuffer::CheckGet(rBuf, 8);
    v7 = 0.0;
    if ( v18 )
    {
      v19 = rBuf->m_Get;
      v16 = (*&rBuf->m_Byteswap & 1) == 0;
      v7 = *&rBuf->m_Memory.m_pMemory[v19 - rBuf->m_nOffset];
      inputBuffer = v7;
      if ( !v16 )
      {
        *v29 = v7;
        v20 = 8;
        v21 = 0;
        do
        {
          v22 = *(&nIncrement + v20 + 3);
          v23 = v29 + v21;
          v21 = 9 - v20--;
          *v23 = v22;
        }
        while ( v20 != 0 );
        v7 = *v29;
      }
      rBuf->m_Get = v19 + 8;
    }
    goto LABEL_5;
  }
LABEL_4:
  nIncrement = 128;
  v6 = CUtlBuffer::CheckArbitraryPeekGet(rBuf, 0, &nIncrement);
  v7 = 0.0;
  if ( v6 )
  {
    v29[0] = &rBuf->m_Memory.m_pMemory[rBuf->m_Get - rBuf->m_nOffset];
    v12 = v29[0];
    v7 = V_strtod(v29[0], v29);
    inputBuffer = v7;
    if ( LODWORD(v29[0]) != v12 )
    {
      rBuf->m_Get += LODWORD(v29[0]) - v12;
      rDst->y = v7;
      if ( (rBuf->m_Flags & 1) != 0 )
        goto LABEL_6;
      goto LABEL_12;
    }
  }
LABEL_5:
  rDst->y = v7;
  if ( (rBuf->m_Flags & 1) != 0 )
  {
LABEL_6:
    nIncrement = 128;
    v8 = CUtlBuffer::CheckArbitraryPeekGet(rBuf, 0, &nIncrement);
    v9 = 0.0;
    if ( v8 )
    {
      v29[0] = &rBuf->m_Memory.m_pMemory[rBuf->m_Get - rBuf->m_nOffset];
      v11 = v29[0];
      v9 = V_strtod(v29[0], v29);
      if ( LODWORD(v29[0]) != v11 )
        rBuf->m_Get += LODWORD(v29[0]) - v11;
    }
    goto LABEL_7;
  }
LABEL_12:
  v13 = CUtlBuffer::CheckGet(rBuf, 8);
  v9 = 0.0;
  if ( v13 )
  {
    v14 = rBuf->m_Get;
    v15 = rBuf->m_Memory.m_pMemory;
    v16 = (*&rBuf->m_Byteswap & 1) == 0;
    v9 = *&rBuf->m_Memory.m_pMemory[v14 - rBuf->m_nOffset];
    inputBuffer = v9;
    if ( !v16 )
    {
      CByteswap::SwapBufferToTargetEndian<double>(&rBuf->m_Byteswap, &inputBuffer, &inputBuffer, v15);
      v14 = rBuf->m_Get;
      v9 = inputBuffer;
    }
    rBuf->m_Get = v14 + 8;
  }
LABEL_7:
  rDst->z = v9;
  return rBuf->m_Error == 0;
}


// Serialize  (line 137, @0x000000000320b3c0, libserver.so)  // inlines: IsValid, LowLevelByteSwap<unsigned int>, PeekPut, PutType<unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, Serialize, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: Serialize<NavGenAreaDebug_t>
bool __fastcall Serialize(CUtlBuffer *const buf, const NavGenAreaDebug_t *const src)
{
  uint32 m_nVerts; // r12d
  uint32 v5; // r12d
  const NavGenAreaDebug_t *i; // r13
  unsigned int v7; // r15d
  int v9; // eax
  unsigned __int8 *v10; // rdx
  int m_Put; // eax
  unsigned __int8 *v12; // rdx
  unsigned int v13; // [rsp+8h] [rbp-38h]
  int v14; // [rsp+Ch] [rbp-34h]
  int v15; // [rsp+Ch] [rbp-34h]

  m_nVerts = src->m_nVerts;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%u", m_nVerts);
  }
  else if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v12 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v12 != 0 )
      {
        LOBYTE(v15) = HIBYTE(m_nVerts);
        BYTE1(v15) = BYTE2(m_nVerts);
        BYTE2(v15) = BYTE1(m_nVerts);
        HIBYTE(v15) = m_nVerts;
        *v12 = v15;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_nVerts;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  v5 = 0;
  for ( i = src; src->m_nVerts > v5; i = (i + 4) )
  {
    v7 = i->m_verts[0];
    if ( (buf->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buf, "%u", v7);
    }
    else
    {
      v13 = i->m_verts[0];
      if ( CUtlBuffer::CheckPut(buf, 4) )
      {
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          v9 = buf->m_Put;
          v10 = &buf->m_Memory.m_pMemory[v9 - buf->m_nOffset];
          if ( v10 != 0 )
          {
            LOBYTE(v14) = HIBYTE(v13);
            BYTE1(v14) = BYTE2(v13);
            BYTE2(v14) = BYTE1(v13);
            HIBYTE(v14) = v13;
            *v10 = v14;
            v9 = buf->m_Put;
          }
        }
        else
        {
          *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v7;
          v9 = buf->m_Put;
        }
        buf->m_Put = v9 + 4;
        CUtlBuffer::AddNullTermination(buf);
      }
    }
    ++v5;
  }
  Serialize(buf, &src->m_normal);
  return buf->m_Error == 0;
}


// Unserialize  (line 145, @0x000000000320b550, libserver.so)  // inlines: GetType<unsigned int>, GetTypeBin<unsigned int>, GetTypeText<unsigned int>, GetUnsignedInt, IsValid, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckGet, Unserialize, V_strtoui64
// callers: Unserialize<NavGenAreaDebug_t>
bool __fastcall Unserialize(CUtlBuffer *const buf, NavGenAreaDebug_t *const src)
{
  bool v4; // al
  __int64 v5; // rdx
  NavGenAreaDebug_t *v6; // r14
  uint32 v7; // r15d
  bool v8; // al
  __int64 v9; // rdx
  bool v10; // al
  int v11; // esi
  int v12; // eax
  unsigned __int8 *v13; // rax
  int v15; // r13d
  int m_Get; // ecx
  unsigned __int8 *v17; // rax
  int v18; // [rsp+18h] [rbp-48h]
  int v19; // [rsp+20h] [rbp-40h] BYREF
  int nIncrement; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v21[7]; // [rsp+28h] [rbp-38h] BYREF

  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v4 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v5 = 0;
    if ( v4 )
    {
      LOBYTE(v5) = 10;
      v21[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v15 = v21[0];
      v19 = V_strtoui64(v21[0], v21, v5);
      LODWORD(v5) = v19;
      if ( LODWORD(v21[0]) != v15 )
        buf->m_Get += LODWORD(v21[0]) - v15;
    }
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 4) )
    {
      src->m_nVerts = 0;
      goto LABEL_16;
    }
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Get = buf->m_Get;
      v17 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      if ( v17 == 0 )
        v17 = &v19;
      LODWORD(v21[0]) = v19;
      LOBYTE(v21[0]) = v17[3];
      BYTE1(v21[0]) = v17[2];
      BYTE2(v21[0]) = v17[1];
      BYTE3(v21[0]) = *v17;
      LODWORD(v5) = v21[0];
    }
    else
    {
      m_Get = buf->m_Get;
      LODWORD(v5) = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    }
    buf->m_Get = m_Get + 4;
  }
  src->m_nVerts = v5;
  if ( v5 != 0 )
  {
    v6 = src;
    v7 = 0;
    do
    {
      if ( (buf->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        v8 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
        v9 = 0;
        if ( v8 )
        {
          LOBYTE(v9) = 10;
          v21[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          v18 = v21[0];
          v19 = V_strtoui64(v21[0], v21, v9);
          LODWORD(v9) = v19;
          if ( LODWORD(v21[0]) != v18 )
            buf->m_Get += LODWORD(v21[0]) - v18;
        }
      }
      else
      {
        v10 = CUtlBuffer::CheckGet(buf, 4);
        LODWORD(v9) = 0;
        if ( v10 )
        {
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            v11 = buf->m_Get;
            v12 = v11 - buf->m_nOffset;
            LODWORD(v21[0]) = v19;
            v13 = &buf->m_Memory.m_pMemory[v12];
            if ( v13 == 0 )
              v13 = &v19;
            LOBYTE(v21[0]) = v13[3];
            BYTE1(v21[0]) = v13[2];
            BYTE2(v21[0]) = v13[1];
            BYTE3(v21[0]) = *v13;
            LODWORD(v9) = v21[0];
          }
          else
          {
            v11 = buf->m_Get;
            LODWORD(v9) = *&buf->m_Memory.m_pMemory[v11 - buf->m_nOffset];
          }
          buf->m_Get = v11 + 4;
        }
      }
      v6->m_verts[0] = v9;
      ++v7;
      v6 = (v6 + 4);
    }
    while ( src->m_nVerts > v7 );
  }
LABEL_16:
  Unserialize(buf, &src->m_normal);
  return buf->m_Error == 0;
}


// Serialize  (line 153, @0x000000000320c920, libserver.so)  // inlines: IsValid
// calls: Serialize, Serialize<VecDouble3>, Serialize<NavGenAreaDebug_t>
// callers: Serialize<NavGenDebugStage_t>
bool __fastcall Serialize(CUtlBuffer *const buf, const NavGenDebugStage_t *const src)
{
  Serialize(buf, &src->m_Desc);
  Serialize<VecDouble3>(buf, &src->m_verts);
  Serialize<NavGenAreaDebug_t>(buf, &src->m_Areas);
  return buf->m_Error == 0;
}


// Unserialize  (line 161, @0x000000000320ce00, libserver.so)  // inlines: IsValid
// calls: Unserialize, Unserialize<VecDouble3>, Unserialize<NavGenAreaDebug_t>
// callers: Unserialize<NavGenDebugStage_t>
bool __fastcall Unserialize(CUtlBuffer *const buf, NavGenDebugStage_t *const src)
{
  Unserialize(buf, &src->m_Desc);
  Unserialize<VecDouble3>(buf, &src->m_verts);
  Unserialize<NavGenAreaDebug_t>(buf, &src->m_Areas);
  return buf->m_Error == 0;
}


// CNavGenInput::SetNavGenParams  (line 173, @0x000000000320b7a0, libserver.so)
void __fastcall CNavGenInput::SetNavGenParams(CNavGenInput *const this, const CNavGenParams *const params)
{
  this->m_GenParams = *params;
}


// CNavGenInput::GetNavGenParams  (line 178, @0x000000000320b820, libserver.so)
// callers: CNavMesh::BuildFromNavGen
const CNavGenParams *__fastcall CNavGenInput::GetNavGenParams(const CNavGenInput *const this)
{
  return &this->m_GenParams;
}


// CNavGenInput::SetLadderCount  (line 187, @0x000000000320ce60, libserver.so)  // inlines: Element, FillWithValue, operator=, operator[]
// calls: CUtlVectorBase<NavGenLadder_t, CUtlMemory<NavGenLadder_t, int> >::SetCount, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CNavGenInput::SetLadderCount(int)::defaultLadder, CNavGenInput::SetLadderCount(int)::defaultLadder
void __fastcall CNavGenInput::SetLadderCount(CNavGenInput *const this, int32 nNumLadders)
{
  __int64 v3; // rcx
  int i; // edx
  NavGenLadder_t *v5; // rax
  int v6; // eax
  vec_t z; // eax
  int32 nNumLaddersa; // [rsp+Ch] [rbp-14h]

  if ( `guard variable for'CNavGenInput::SetLadderCount(int)::defaultLadder == 0 )
  {
    nNumLaddersa = nNumLadders;
    v6 = __cxa_guard_acquire(&`guard variable for'CNavGenInput::SetLadderCount(int)::defaultLadder);
    nNumLadders = nNumLaddersa;
    if ( v6 != 0 )
    {
      z = vec3_origin.z;
      *&CNavGenInput::SetLadderCount(int)::defaultLadder.m_vTop.x = *&vec3_origin.x;
      CNavGenInput::SetLadderCount(int)::defaultLadder.m_vTop.z = z;
      *&CNavGenInput::SetLadderCount(int)::defaultLadder.m_vBottom.x = *&vec3_origin.x;
      CNavGenInput::SetLadderCount(int)::defaultLadder.m_vBottom.z = z;
      *&CNavGenInput::SetLadderCount(int)::defaultLadder.m_vNormal.x = *&vec3_origin.x;
      CNavGenInput::SetLadderCount(int)::defaultLadder.m_vNormal.z = z;
      __cxa_guard_release(&`guard variable for'CNavGenInput::SetLadderCount(int)::defaultLadder);
      nNumLadders = nNumLaddersa;
    }
  }
  CUtlVectorBase<NavGenLadder_t,CUtlMemory<NavGenLadder_t,int>>::SetCount(&this->m_Ladders, nNumLadders);
  v3 = 0;
  for ( i = 0; i < this->m_Ladders.m_Size; *v5 = CNavGenInput::SetLadderCount(int)::defaultLadder )
  {
    ++i;
    v5 = &this->m_Ladders.m_Memory.m_pMemory[v3++];
  }
}


// CNavGenInput::GetLadderCount  (line 205, @0x000000000320b830, libserver.so)
// callers: CNavMesh::BuildLaddersFromNavGen
int32 __fastcall CNavGenInput::GetLadderCount(const CNavGenInput *const this)
{
  return this->m_Ladders.m_Size;
}


// CNavGenInput::SetLadderParameters  (line 214, @0x000000000320b840, libserver.so)  // inlines: operator=, operator[]
void __fastcall CNavGenInput::SetLadderParameters(
        CNavGenInput *const this,
        uint32 nLadderIndex,
        const Vector *const vTop,
        const Vector *const vBottom,
        const Vector *const vNormal,
        float flWidth)
{
  NavGenLadder_t *v6; // rax
  vec_t z; // xmm1_4

  v6 = &this->m_Ladders.m_Memory.m_pMemory[nLadderIndex];
  v6->m_vTop = *vTop;
  v6->m_vBottom = *vBottom;
  v6->m_vNormal.x = vNormal->x;
  v6->m_vNormal.y = vNormal->y;
  z = vNormal->z;
  v6->m_flWidth = flWidth;
  v6->m_vNormal.z = z;
}


// CNavGenInput::GetLadderParameters  (line 227, @0x000000000320b8c0, libserver.so)  // inlines: operator=, operator[]
// callers: CNavMesh::BuildLaddersFromNavGen
void __fastcall CNavGenInput::GetLadderParameters(
        const CNavGenInput *const this,
        uint32 nLadderIndex,
        Vector *pOutTop,
        Vector *pOutBottom,
        Vector *pOutNormal,
        float *pOutWidth)
{
  NavGenLadder_t *v6; // rax

  v6 = &this->m_Ladders.m_Memory.m_pMemory[nLadderIndex];
  *pOutTop = v6->m_vTop;
  *pOutBottom = v6->m_vBottom;
  *pOutNormal = v6->m_vNormal;
  *pOutWidth = v6->m_flWidth;
}


// CNavGenInput::SetPropertyCount  (line 243, @0x000000000320cb00, libserver.so)  // inlines: AddMultipleToTail, GrowMemory, GrowVector, InsertMultipleBefore, RemoveMultipleFromTail, SetCount
// calls: CUtlVectorBase<NavGenProperty_t, CUtlMemory<NavGenProperty_t, int> >::FillWithValue, CUtlMemory<NavGenProperty_t, int>::Grow
// globals: CNavGenInput::SetPropertyCount(ushort)::defaultProperty
void __fastcall CNavGenInput::SetPropertyCount(CNavGenInput *const this, uint16 nNumProperites)
{
  int v2; // r12d
  int m_nAllocationCount; // eax

  v2 = nNumProperites;
  if ( nNumProperites - this->m_Properties.m_Size > 0 )
  {
    m_nAllocationCount = this->m_Properties.m_Memory.m_nAllocationCount;
    if ( nNumProperites > m_nAllocationCount )
      CUtlMemory<NavGenProperty_t,int>::Grow(&this->m_Properties.m_Memory, nNumProperites - m_nAllocationCount);
    goto LABEL_6;
  }
  if ( nNumProperites != this->m_Properties.m_Size )
LABEL_6:
    this->m_Properties.m_Size = v2;
  CUtlVectorBase<NavGenProperty_t,CUtlMemory<NavGenProperty_t,int>>::FillWithValue(
    &this->m_Properties,
    &CNavGenInput::SetPropertyCount(unsigned short)::defaultProperty);
}


// CNavGenInput::GetPropertyCount  (line 255, @0x000000000320b940, libserver.so)
uint16 __fastcall CNavGenInput::GetPropertyCount(const CNavGenInput *const this)
{
  return this->m_Properties.m_Size;
}


// CNavGenInput::SetPropertyName  (line 264, @0x000000000320b950, libserver.so)  // inlines: V_strcpy_safe<64ul>, operator[]
// calls: _V_strncpy
void __fastcall CNavGenInput::SetPropertyName(CNavGenInput *const this, uint32 nPropertyIndex, const char *pName)
{
  __int64 v4; // r12

  if ( this->m_Properties.m_Size > nPropertyIndex )
  {
    v4 = nPropertyIndex << 7;
    _V_strncpy(&this->m_Properties.m_Memory.m_pMemory->m_Name[v4], pName, 64);
    this->m_Properties.m_Memory.m_pMemory->m_Name[v4 + 63] = 0;
  }
}


// CNavGenInput::GetPropertyName  (line 280, @0x000000000320b990, libserver.so)  // inlines: operator[]
const char *__fastcall CNavGenInput::GetPropertyName(const CNavGenInput *const this, uint32 nPropertyIndex)
{
  const char *result; // rax

  result = 0;
  if ( this->m_Properties.m_Size > nPropertyIndex )
    return this->m_Properties.m_Memory.m_pMemory[nPropertyIndex].m_Name;
  return result;
}


// CNavGenInput::SetPropertyValue  (line 293, @0x000000000320b9b0, libserver.so)  // inlines: V_strcpy_safe<64ul>, operator[]
// calls: _V_strncpy
void __fastcall CNavGenInput::SetPropertyValue(CNavGenInput *const this, uint32 nPropertyIndex, const char *pValue)
{
  __int64 v4; // r12

  if ( this->m_Properties.m_Size > nPropertyIndex )
  {
    v4 = nPropertyIndex << 7;
    _V_strncpy(&this->m_Properties.m_Memory.m_pMemory->m_Value[v4], pValue, 64);
    this->m_Properties.m_Memory.m_pMemory->m_Value[v4 + 63] = 0;
  }
}


// CNavGenInput::GetPropertyValue  (line 309, @0x000000000320b9f0, libserver.so)  // inlines: operator[]
const char *__fastcall CNavGenInput::GetPropertyValue(const CNavGenInput *const this, uint32 nPropertyIndex)
{
  const char *result; // rax

  result = 0;
  if ( this->m_Properties.m_Size > nPropertyIndex )
    return this->m_Properties.m_Memory.m_pMemory[nPropertyIndex].m_Value;
  return result;
}


// CNavGenInput::FindOrAddProperty  (line 322, @0x000000000320cb50, libserver.so)  // inlines: AddToTail, GrowMemory, V_strcpy_safe<64ul>, operator[]
// calls: V_stricmp_fast, _V_strncpy, CUtlMemory<NavGenProperty_t, int>::Grow
uint32 __fastcall CNavGenInput::FindOrAddProperty(CNavGenInput *const this, const char *pName, const char *pValue)
{
  signed int m_Size; // r14d
  __int64 v6; // r15
  int v8; // eax
  uint16 nNumProperties; // [rsp+Eh] [rbp-32h]

  m_Size = this->m_Properties.m_Size;
  nNumProperties = this->m_Properties.m_Size;
  if ( nNumProperties != 0 )
  {
    v6 = 0;
    do
    {
      if ( V_stricmp_fast(pName, &this->m_Properties.m_Memory.m_pMemory[v6]) == 0
        && V_stricmp_fast(pValue, this->m_Properties.m_Memory.m_pMemory[v6].m_Value) == 0 )
      {
        return v6;
      }
      ++v6;
    }
    while ( nNumProperties > v6 );
    m_Size = this->m_Properties.m_Size;
  }
  v8 = m_Size;
  if ( m_Size == this->m_Properties.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<NavGenProperty_t,int>::Grow(&this->m_Properties.m_Memory, 1);
    v8 = this->m_Properties.m_Size;
  }
  this->m_Properties.m_Size = v8 + 1;
  _V_strncpy(&this->m_Properties.m_Memory.m_pMemory[m_Size], pName, 64);
  _V_strncpy(this->m_Properties.m_Memory.m_pMemory[m_Size].m_Value, pValue, 64);
  return m_Size;
}


// CNavGenInput::ClearNavMarkups  (line 348, @0x000000000320cd00, libserver.so)
// calls: CUtlVectorBase<NavGenMarkup_t, CUtlMemory<NavGenMarkup_t, int> >::SetCount
void __fastcall CNavGenInput::ClearNavMarkups(CNavGenInput *const this)
{
  CUtlVectorBase<NavGenMarkup_t,CUtlMemory<NavGenMarkup_t,int>>::SetCount(&this->m_NavMarkups, 0);
}


// CNavGenInput::AddNavMarkup  (line 353, @0x000000000320cc40, libserver.so)  // inlines: AddToTail, CopyConstruct<NavGenMarkup_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<NavGenMarkup_t, int>::Grow
void __fastcall CNavGenInput::AddNavMarkup(CNavGenInput *const this, NavGenMarkup_t *pMarkup)
{
  __int64 m_Size; // r13
  int v5; // eax
  NavGenMarkup_t *v6; // rax

  m_Size = this->m_NavMarkups.m_Size;
  v5 = this->m_NavMarkups.m_Size;
  if ( m_Size == this->m_NavMarkups.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<NavGenMarkup_t,int>::Grow(&this->m_NavMarkups.m_Memory, 1);
    v5 = this->m_NavMarkups.m_Size;
  }
  this->m_NavMarkups.m_Size = v5 + 1;
  v6 = &this->m_NavMarkups.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    *&v6->m_bbMin.x = *&pMarkup->m_bbMin.x;
    *&v6->m_bbMin.z = *&pMarkup->m_bbMin.z;
    *&v6->m_bbMax.y = *&pMarkup->m_bbMax.y;
    *&v6->m_transform.m_flMatVal[0][0] = *&pMarkup->m_transform.m_flMatVal[0][0];
    *&v6->m_transform.m_flMatVal[0][2] = *&pMarkup->m_transform.m_flMatVal[0][2];
    *&v6->m_transform.m_flMatVal[1][0] = *&pMarkup->m_transform.m_flMatVal[1][0];
    *&v6->m_transform.m_flMatVal[1][2] = *&pMarkup->m_transform.m_flMatVal[1][2];
    *&v6->m_transform.m_flMatVal[2][0] = *&pMarkup->m_transform.m_flMatVal[2][0];
    *&v6->m_transform.m_flMatVal[2][2] = *&pMarkup->m_transform.m_flMatVal[2][2];
    v6->m_nPropertyIndex = pMarkup->m_nPropertyIndex;
  }
}


// CNavGenInput::SetNavMarkupCount  (line 358, @0x000000000320cd10, libserver.so)  // inlines: EnsureCapacity, memcpy
// calls: CUtlVectorBase<NavGenMarkup_t, CUtlMemory<NavGenMarkup_t, int> >::SetCount, memcpy
void __fastcall CNavGenInput::SetNavMarkupCount(CNavGenInput *const this, int32 nNumMarkups)
{
  uint32 m_nGrowSize; // eax
  NavGenMarkup_t *v5; // rsi
  NavGenMarkup_t *m_pMemory; // r13
  NavGenMarkup_t *v7; // rax

  if ( nNumMarkups > this->m_NavMarkups.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_NavMarkups.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_NavMarkups.m_Memory.m_pMemory;
        v7 = (**g_pMemAlloc)(g_pMemAlloc, 76LL * nNumMarkups);
        this->m_NavMarkups.m_Memory.m_pMemory = v7;
        if ( m_pMemory != 0 )
          memcpy(v7, m_pMemory, 76LL * this->m_NavMarkups.m_Memory.m_nAllocationCount);
        this->m_NavMarkups.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_NavMarkups.m_Memory.m_pMemory;
        if ( v5 != 0 )
          this->m_NavMarkups.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5, 76LL * nNumMarkups);
        else
          this->m_NavMarkups.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 76LL * nNumMarkups);
      }
      this->m_NavMarkups.m_Memory.m_nAllocationCount = nNumMarkups;
    }
  }
  CUtlVectorBase<NavGenMarkup_t,CUtlMemory<NavGenMarkup_t,int>>::SetCount(&this->m_NavMarkups, nNumMarkups);
}


// CNavGenInput::GetNavMarkupCount  (line 364, @0x000000000320ba10, libserver.so)
int32 __fastcall CNavGenInput::GetNavMarkupCount(const CNavGenInput *const this)
{
  return this->m_NavMarkups.m_Size;
}


// CNavGenInput::SetNavMarkup  (line 369, @0x000000000320ba20, libserver.so)  // inlines: operator=, operator[]
void __fastcall CNavGenInput::SetNavMarkup(CNavGenInput *const this, uint32 nIdx, NavGenMarkup_t *pMarkup)
{
  this->m_NavMarkups.m_Memory.m_pMemory[nIdx] = *pMarkup;
}


// CNavGenInput::GetNavMarkup  (line 374, @0x000000000320bab0, libserver.so)  // inlines: operator=, operator[]
void __fastcall CNavGenInput::GetNavMarkup(const CNavGenInput *const this, NavGenMarkup_t *pMarkup, uint32 nIdx)
{
  *pMarkup = this->m_NavMarkups.m_Memory.m_pMemory[nIdx];
}


// CNavGenOutput::CNavGenOutput  (line 383, @0x000000000320bb40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: operator new
void __fastcall CNavGenOutput::CNavGenOutput(CNavGenOutput *const this, CNavMesh *(*NavMeshFactory)(void))
{
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *v3; // rax
  CUtlVector<NavGenRecastDebugStage_t,CUtlMemory<NavGenRecastDebugStage_t,int> > *v4; // rax

  this->m_pNavMesh = NavMeshFactory();
  v3 = operator new(0x18u);
  v3->m_Size = 0;
  v3->m_Memory.m_pMemory = 0;
  v3->m_Memory.m_nAllocationCount = 0;
  v3->m_Memory.m_nGrowSize = 0;
  this->m_pDebugStages = v3;
  v4 = operator new(0x18u);
  v4->m_Size = 0;
  v4->m_Memory.m_pMemory = 0;
  v4->m_Memory.m_nAllocationCount = 0;
  v4->m_Memory.m_nGrowSize = 0;
  this->m_pRecastDebugStages = v4;
}


// CNavGenOutput::~CNavGenOutput  (line 390, @0x000000000320caa0, libserver.so)
// calls: CNavGenOutput::Destruct
void __fastcall CNavGenOutput::~CNavGenOutput(CNavGenOutput *const this)
{
  CNavGenOutput::Destruct(this);
}


// CNavGenOutput::Reset  (line 399, @0x000000000320c980, libserver.so)
// calls: CUtlVectorBase<NavGenDebugStage_t, CUtlMemory<NavGenDebugStage_t, int> >::RemoveAll, CUtlVectorBase<NavGenRecastDebugStage_t, CUtlMemory<NavGenRecastDebugStage_t, int> >::RemoveAll
void __fastcall CNavGenOutput::Reset(CNavGenOutput *const this)
{
  (*(this->m_pNavMesh->_vptr_CNavMesh + 7))(this->m_pNavMesh);
  CUtlVectorBase<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int>>::RemoveAll(this->m_pDebugStages);
  CUtlVectorBase<NavGenRecastDebugStage_t,CUtlMemory<NavGenRecastDebugStage_t,int>>::RemoveAll(this->m_pRecastDebugStages);
}


// CNavGenOutput::ComputeBounds  (line 406, @0x000000000320bbb0, libserver.so)  // inlines: AABB_t, AsVector, Extent, GetCenter, Init, Max, Min, VectorAdd, VectorDivide, VectorSubtract, operator+, operator-, operator/, operator=, operator[], operator|=
// calls: CNavMesh::ComputeBounds, AddPointToBounds
AABB_t *__fastcall CNavGenOutput::ComputeBounds(AABB_t *__return_ptr retstr, const CNavGenOutput *const this)
{
  CNavMesh *m_pNavMesh; // rdi
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *m_pDebugStages; // rax
  float x; // xmm7_4
  float y; // xmm8_4
  float z; // xmm9_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  NavGenDebugStage_t *v12; // r15
  NavGenAreaDebug_t *v13; // rbx
  NavGenDebugStage_t *v14; // rax
  uint32 v15; // r15d
  NavGenAreaDebug_t *v16; // r13
  NavGenDebugStage_t *v17; // r14
  __int64 v18; // rdx
  double *p_x; // rcx
  vec_t v20; // xmm0_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  __int64 v28; // [rsp+8h] [rbp-88h]
  __int64 v29; // [rsp+10h] [rbp-80h]
  int iDebugStage; // [rsp+18h] [rbp-78h]
  int iArea; // [rsp+1Ch] [rbp-74h]
  Vector v32; // [rsp+30h] [rbp-60h] BYREF
  Extent meshExtent; // [rsp+40h] [rbp-50h] BYREF

  m_pNavMesh = this->m_pNavMesh;
  meshExtent.lo.x = 3.4028235e38;
  meshExtent.lo.y = 3.4028235e38;
  meshExtent.lo.z = 3.4028235e38;
  meshExtent.hi.x = -3.4028235e38;
  meshExtent.hi.y = -3.4028235e38;
  meshExtent.hi.z = -3.4028235e38;
  CNavMesh::ComputeBounds(m_pNavMesh, &meshExtent);
  m_pDebugStages = this->m_pDebugStages;
  x = meshExtent.lo.x;
  y = meshExtent.lo.y;
  z = meshExtent.lo.z;
  retstr->m_vMinBounds.x = meshExtent.lo.x;
  v9 = meshExtent.hi.x;
  retstr->m_vMinBounds.y = y;
  v10 = meshExtent.hi.y;
  retstr->m_vMinBounds.z = z;
  v11 = meshExtent.hi.z;
  retstr->m_vMaxBounds.x = v9;
  retstr->m_vMaxBounds.y = v10;
  retstr->m_vMaxBounds.z = v11;
  if ( m_pDebugStages->m_Size > 0 )
  {
    iDebugStage = 0;
    v28 = 0;
    do
    {
      v29 = 0;
      iArea = 0;
      v12 = &m_pDebugStages->m_Memory.m_pMemory[v28];
      if ( v12->m_Areas.m_Size > 0 )
      {
        do
        {
          v13 = &v12->m_Areas.m_Memory.m_pMemory[v29];
          if ( v13->m_nVerts != 0 )
          {
            v14 = v12;
            v15 = 0;
            v16 = v13;
            v17 = v14;
            do
            {
              v18 = v16->m_verts[0];
              ++v15;
              v16 = (v16 + 4);
              p_x = &v17->m_verts.m_Memory.m_pMemory[v18].x;
              v20 = p_x[2];
              v21 = p_x[1];
              v22 = *p_x;
              v32.y = v21;
              v32.x = v22;
              v32.z = v20;
              AddPointToBounds(&v32, &retstr->m_vMinBounds, &retstr->m_vMaxBounds);
            }
            while ( v13->m_nVerts > v15 );
            v12 = v17;
          }
          ++iArea;
          ++v29;
        }
        while ( v12->m_Areas.m_Size > iArea );
        m_pDebugStages = this->m_pDebugStages;
      }
      ++iDebugStage;
      ++v28;
    }
    while ( m_pDebugStages->m_Size > iDebugStage );
    v9 = retstr->m_vMaxBounds.x;
    x = retstr->m_vMinBounds.x;
    v10 = retstr->m_vMaxBounds.y;
    y = retstr->m_vMinBounds.y;
    v11 = retstr->m_vMaxBounds.z;
    z = retstr->m_vMinBounds.z;
  }
  v24 = (v9 + x) * 0.5;
  v25 = (v10 + y) * 0.5;
  v26 = (v11 + z) * 0.5;
  retstr->m_vMinBounds.z = fminf(z, v26 - 0.00050000002);
  retstr->m_vMinBounds.y = fminf(y, v25 - 0.00050000002);
  retstr->m_vMinBounds.x = fminf(x, v24 - 0.00050000002);
  retstr->m_vMaxBounds.z = fmaxf(v11, v26 + 0.00050000002);
  retstr->m_vMaxBounds.y = fmaxf(v10, v25 + 0.00050000002);
  retstr->m_vMaxBounds.x = fmaxf(v9, v24 + 0.00050000002);
  return retstr;
}


// CNavGenOutput::DestructiveCopy  (line 442, @0x000000000320cab0, libserver.so)
// calls: CNavGenOutput::Destruct
void __fastcall CNavGenOutput::DestructiveCopy(CNavGenOutput *const this, CNavGenOutput *const src)
{
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *m_pDebugStages; // rax
  CUtlVector<NavGenRecastDebugStage_t,CUtlMemory<NavGenRecastDebugStage_t,int> > *m_pRecastDebugStages; // rax

  CNavGenOutput::Destruct(this);
  this->m_pNavMesh = src->m_pNavMesh;
  m_pDebugStages = src->m_pDebugStages;
  src->m_pNavMesh = 0;
  this->m_pDebugStages = m_pDebugStages;
  m_pRecastDebugStages = src->m_pRecastDebugStages;
  src->m_pDebugStages = 0;
  this->m_pRecastDebugStages = m_pRecastDebugStages;
  src->m_pRecastDebugStages = 0;
}


// CNavGenOutput::LoadDebugDataFromBuffer  (line 459, @0x000000000320ce40, libserver.so)
// calls: Unserialize<NavGenDebugStage_t>
bool __fastcall CNavGenOutput::LoadDebugDataFromBuffer(CNavGenOutput *const this, CUtlBuffer *const fileBuffer)
{
  Unserialize<NavGenDebugStage_t>(fileBuffer, this->m_pDebugStages);
  return 1;
}


// CNavGenOutput::WriteDebugDataToBuffer  (line 474, @0x000000000320c960, libserver.so)
// calls: Serialize<NavGenDebugStage_t>
void __fastcall CNavGenOutput::WriteDebugDataToBuffer(const CNavGenOutput *const this, CUtlBuffer *const fileBuffer)
{
  Serialize<NavGenDebugStage_t>(fileBuffer, this->m_pDebugStages);
}


// CNavGenOutput::GetNavGenerateParams  (line 489, @0x000000000320be40, libserver.so)
const CNavGenParams *__fastcall CNavGenOutput::GetNavGenerateParams(const CNavGenOutput *const this)
{
  return &this->m_pNavMesh->m_NavGenParams;
}


// CNavGenOutput::Destruct  (line 498, @0x000000000320c9b0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<NavGenDebugStage_t, CUtlMemory<NavGenDebugStage_t, int> >::RemoveAll, operator delete, CUtlVectorBase<NavGenRecastDebugStage_t, CUtlMemory<NavGenRecastDebugStage_t, int> >::RemoveAll, CUtlMemory<NavGenRecastDebugStage_t, int>::Purge, CUtlMemory<NavGenDebugStage_t, int>::Purge
// callers: CNavGenOutput::~CNavGenOutput, CNavGenOutput::DestructiveCopy
void __fastcall CNavGenOutput::Destruct(CNavGenOutput *const this)
{
  CNavMesh *m_pNavMesh; // rdi
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *m_pDebugStages; // r12
  CUtlVector<NavGenRecastDebugStage_t,CUtlMemory<NavGenRecastDebugStage_t,int> > *m_pRecastDebugStages; // r12

  m_pNavMesh = this->m_pNavMesh;
  if ( m_pNavMesh != 0 )
  {
    (*(m_pNavMesh->_vptr_CNavMesh + 1))(m_pNavMesh);
    this->m_pNavMesh = 0;
  }
  m_pDebugStages = this->m_pDebugStages;
  if ( m_pDebugStages != 0 )
  {
    CUtlVectorBase<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int>>::RemoveAll(this->m_pDebugStages);
    if ( (m_pDebugStages->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<NavGenDebugStage_t,int>::Purge(&m_pDebugStages->m_Memory);
      if ( (m_pDebugStages->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<NavGenDebugStage_t,int>::Purge(&m_pDebugStages->m_Memory);
    }
    operator delete(m_pDebugStages);
    this->m_pDebugStages = 0;
  }
  m_pRecastDebugStages = this->m_pRecastDebugStages;
  if ( m_pRecastDebugStages != 0 )
  {
    CUtlVectorBase<NavGenRecastDebugStage_t,CUtlMemory<NavGenRecastDebugStage_t,int>>::RemoveAll(this->m_pRecastDebugStages);
    if ( (m_pRecastDebugStages->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<NavGenRecastDebugStage_t,int>::Purge(&m_pRecastDebugStages->m_Memory);
      if ( (m_pRecastDebugStages->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<NavGenRecastDebugStage_t,int>::Purge(&m_pRecastDebugStages->m_Memory);
    }
    operator delete(m_pRecastDebugStages);
    this->m_pRecastDebugStages = 0;
  }
}


// CNavGenOutput::GetArea  (line 522, @0x000000000320be50, libserver.so)  // inlines: operator[]
const CNavArea *__fastcall CNavGenOutput::GetArea(const CNavGenOutput *const this, uint32 nAreaIndex)
{
  const CNavArea *result; // rax

  result = 0;
  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size )
    return this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex];
  return result;
}


// CNavGenOutput::GetAreaCount  (line 537, @0x000000000320be70, libserver.so)
int32 __fastcall CNavGenOutput::GetAreaCount(const CNavGenOutput *const this)
{
  return this->m_pNavMesh->m_NavAreas.m_Size;
}


// CNavGenOutput::GetAreaUniqueId  (line 545, @0x000000000320be80, libserver.so)  // inlines: GetArea, operator[]
uint32 __fastcall CNavGenOutput::GetAreaUniqueId(const CNavGenOutput *const this, uint32 nAreaIndex)
{
  uint32 result; // eax
  CNavArea *v3; // rdx

  result = -1;
  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size )
  {
    v3 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex];
    if ( v3 != 0 )
      return v3->m_AreaId;
  }
  return result;
}


// CNavGenOutput::GetAreaClearance  (line 559, @0x000000000320beb0, libserver.so)  // inlines: GetArea, operator[]
float __fastcall CNavGenOutput::GetAreaClearance(const CNavGenOutput *const this, uint32 nAreaIndex)
{
  float result; // xmm0_4
  CNavArea *v3; // rax

  result = 0.0;
  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size )
  {
    v3 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex];
    if ( v3 != 0 )
      return v3->m_flClearance;
  }
  return result;
}


// CNavGenOutput::GetAreaNumVertices  (line 573, @0x000000000320bee0, libserver.so)  // inlines: GetArea, operator[]
// callers: CNavGenOutput::GetAreaSideVertices
int32 __fastcall CNavGenOutput::GetAreaNumVertices(const CNavGenOutput *const this, uint32 nAreaIndex)
{
  int32 result; // eax
  CNavArea *v3; // rdx

  result = 0;
  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size )
  {
    v3 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex];
    if ( v3 != 0 )
      return v3->m_nVerts;
  }
  return result;
}


// CNavGenOutput::GetAreaVertex  (line 588, @0x000000000320bf10, libserver.so)  // inlines: GetArea, GetVert, operator[]
// callers: CNavGenOutput::GetAreaSideVertices
Vector __fastcall CNavGenOutput::GetAreaVertex(
        const CNavGenOutput *const this,
        uint32 nAreaIndex,
        NavAreaVertex_t nVertex)
{
  CNavArea *v5; // rcx
  vec_t *v6; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size
    && (v5 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex]) != 0 )
  {
    v6 = (v5 + 12 * nVertex);
    result.z = v6[4];
    *&result.x = *(v6 + 1);
  }
  else
  {
    result.z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
  }
  return result;
}


// CNavGenOutput::GetAreaSideVertices  (line 603, @0x000000000320bfa0, libserver.so)  // inlines: operator=
// calls: CNavGenOutput::GetAreaNumVertices, CNavGenOutput::GetAreaVertex
void __fastcall CNavGenOutput::GetAreaSideVertices(
        const CNavGenOutput *const this,
        uint32 nAreaIndex,
        uint32 nSide,
        Vector *const outPosA,
        Vector *const outPosB)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  unsigned int AreaNumVertices; // r14d

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  outPosA->x = vec3_origin.x;
  outPosA->y = y;
  outPosA->z = z;
  outPosB->x = x;
  outPosB->y = y;
  outPosB->z = z;
  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size && nSide != -1 )
  {
    AreaNumVertices = CNavGenOutput::GetAreaNumVertices(this, nAreaIndex);
    *outPosA = CNavGenOutput::GetAreaVertex(this, nAreaIndex, nSide);
    *outPosB = CNavGenOutput::GetAreaVertex(this, nAreaIndex, ((nSide + 1) % AreaNumVertices));
  }
}


// CNavGenOutput::GetAreaNormal  (line 627, @0x000000000320c080, libserver.so)  // inlines: GetArea, GetNormal_New, operator[]
Vector __fastcall CNavGenOutput::GetAreaNormal(const CNavGenOutput *const this, uint32 nAreaIndex)
{
  CNavArea *v4; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size
    && (v4 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex]) != 0 )
  {
    result.z = v4->m_vNormal_New.z;
    *&result.x = *&v4->m_vNormal_New.x;
  }
  else
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  return result;
}


// CNavGenOutput::GetAreaConnections  (line 642, @0x000000000320c130, libserver.so)  // inlines: GetArea
// calls: CNavGenOutput::GetAreaConnectionCount
const CNavConnectVector *__fastcall CNavGenOutput::GetAreaConnections(
        const CNavGenOutput *const this,
        uint32 nAreaIndex,
        uint32 nSide)
{
  char v3; // r13
  __int64 v5; // rbx
  const CNavConnectVector *result; // rax
  CNavArea *v7; // rdx

  v3 = nSide;
  v5 = nAreaIndex;
  if ( CNavGenOutput::GetAreaConnectionCount(this, nAreaIndex, nSide) <= 0 )
    return 0;
  result = 0;
  if ( v5 < this->m_pNavMesh->m_NavAreas.m_Size )
  {
    v7 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[v5];
    if ( v7 != 0 )
      return &v7->m_connect[v3];
  }
  return result;
}


// CNavGenOutput::GetAreaConnectionCount  (line 661, @0x000000000320c0f0, libserver.so)  // inlines: Count, GetArea, operator[]
// callers: CNavGenOutput::GetAreaConnections
int32 __fastcall CNavGenOutput::GetAreaConnectionCount(
        const CNavGenOutput *const this,
        uint32 nAreaIndex,
        uint32 nSide)
{
  int32 result; // eax
  CNavArea *v4; // rcx
  int32 *m_pData; // rdx

  result = 0;
  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size )
  {
    v4 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex];
    if ( v4 != 0 )
    {
      m_pData = v4->m_connect[nSide].m_pData;
      if ( m_pData != 0 )
        return *m_pData;
    }
  }
  return result;
}


// CNavGenOutput::GetAreaConnectionCount  (line 675, @0x000000000320c190, libserver.so)  // inlines: Count, GetArea, operator[]
int32 __fastcall CNavGenOutput::GetAreaConnectionCount(const CNavGenOutput *const this, uint32 nAreaIndex)
{
  int32 result; // eax
  CNavArea *v3; // rdi
  int m_nVerts; // esi
  int i; // edx
  int m_Size; // ecx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rcx

  result = 0;
  if ( nAreaIndex < this->m_pNavMesh->m_NavAreas.m_Size )
  {
    v3 = this->m_pNavMesh->m_NavAreas.m_Memory.m_pMemory[nAreaIndex];
    if ( v3 != 0 )
    {
      m_nVerts = v3->m_nVerts;
      if ( m_nVerts > 0 )
      {
        for ( i = 0; i != m_nVerts; ++i )
        {
          m_pData = v3->m_connect[i].m_pData;
          if ( m_pData != 0 )
            m_Size = m_pData->m_Size;
          else
            m_Size = 0;
          result += m_Size;
        }
      }
    }
  }
  return result;
}


// CNavGenOutput::GetLadder  (line 694, @0x000000000320c1e0, libserver.so)  // inlines: GetLaddersCount, operator[]
const CNavLadder *__fastcall CNavGenOutput::GetLadder(const CNavGenOutput *const this, uint32 nLadderIndex)
{
  const CNavLadder *result; // rax

  result = 0;
  if ( this->m_pNavMesh->m_Ladders.m_Size > nLadderIndex )
    return this->m_pNavMesh->m_Ladders.m_Memory.m_pMemory[nLadderIndex];
  return result;
}


// CNavGenOutput::GetLaddersCount  (line 709, @0x000000000320c210, libserver.so)
int32 __fastcall CNavGenOutput::GetLaddersCount(const CNavGenOutput *const this)
{
  return this->m_pNavMesh->m_Ladders.m_Size;
}


// CNavGenOutput::GetLadderConnectionsCount  (line 717, @0x000000000320c220, libserver.so)  // inlines: GetLaddersCount, operator[]
int32 __fastcall CNavGenOutput::GetLadderConnectionsCount(const CNavGenOutput *const this, uint32 nLadderIndex)
{
  int32 result; // eax
  CNavLadder *v3; // rdx

  result = 0;
  if ( this->m_pNavMesh->m_Ladders.m_Size > nLadderIndex )
  {
    v3 = this->m_pNavMesh->m_Ladders.m_Memory.m_pMemory[nLadderIndex];
    return (v3->m_pTopRightArea != 0)
         + (v3->m_pTopLeftArea != 0)
         + (v3->m_pTopForwardArea != 0)
         + (v3->m_pTopBehindArea != 0)
         + (v3->m_pBottomArea != 0);
  }
  return result;
}


// CNavGenOutput::GetLadderConnections  (line 737, @0x000000000320c290, libserver.so)  // inlines: CNavGenOutputLadderConnectionsIterator, SkipToNextValidConnection
// calls: CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection
CNavGenOutputLadderConnectionsIterator *__fastcall CNavGenOutput::GetLadderConnections(
        CNavGenOutputLadderConnectionsIterator *__return_ptr retstr,
        const CNavGenOutput *const this,
        uint32 nLadderIndex)
{
  CNavMesh *m_pNavMesh; // rcx
  CNavGenOutputLadderConnectionsIterator *result; // rax

  m_pNavMesh = this->m_pNavMesh;
  result = retstr;
  retstr->m_navGenOutput = this;
  retstr->m_curLadderConnection = -1;
  retstr->m_nLadderIndex = nLadderIndex;
  retstr->m_bEnd = 0;
  if ( nLadderIndex <= m_pNavMesh->m_Ladders.m_Size )
  {
    CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection(retstr);
    return retstr;
  }
  else
  {
    retstr->m_bEnd = 1;
  }
  return result;
}


// CNavGenOutput::GetLadderTop  (line 746, @0x000000000320c2d0, libserver.so)  // inlines: GetLaddersCount, operator[]
Vector __fastcall CNavGenOutput::GetLadderTop(const CNavGenOutput *const this, uint32 nLadderIndex)
{
  CNavLadder *v4; // rax
  __int64 v5; // [rsp+0h] [rbp-10h]
  vec_t z; // [rsp+8h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_pNavMesh->m_Ladders.m_Size > nLadderIndex )
  {
    v4 = this->m_pNavMesh->m_Ladders.m_Memory.m_pMemory[nLadderIndex];
    v5 = *&v4->m_vTop.x;
    *&result.x = v5;
    result.z = v4->m_vTop.z;
  }
  else
  {
    z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
    result.z = z;
  }
  return result;
}


// CNavGenOutput::GetLadderBottom  (line 757, @0x000000000320c330, libserver.so)  // inlines: GetLaddersCount, operator[]
Vector __fastcall CNavGenOutput::GetLadderBottom(const CNavGenOutput *const this, uint32 nLadderIndex)
{
  vec_t z; // eax
  CNavLadder *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-10h]
  vec_t v8; // [rsp+8h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_pNavMesh->m_Ladders.m_Size > nLadderIndex )
  {
    v5 = this->m_pNavMesh->m_Ladders.m_Memory.m_pMemory[nLadderIndex];
    v6 = *&v5->m_vBottom.x;
    z = v5->m_vBottom.z;
    v7 = v6;
  }
  else
  {
    z = vec3_origin.z;
    v7 = *&vec3_origin.x;
  }
  v8 = z;
  *&result.x = v7;
  result.z = z;
  return result;
}


// CNavGenOutputLadderConnectionsIterator::CNavGenOutputLadderConnectionsIterator  (line 774, @0x000000000320c390, libserver.so)  // inlines: SkipToNextValidConnection
// calls: CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection
void __fastcall CNavGenOutputLadderConnectionsIterator::CNavGenOutputLadderConnectionsIterator(
        CNavGenOutputLadderConnectionsIterator *const this,
        const CNavGenOutput *const navGenOutput,
        uint32 nLaddderIndex)
{
  this->m_navGenOutput = navGenOutput;
  this->m_curLadderConnection = -1;
  this->m_nLadderIndex = nLaddderIndex;
  this->m_bEnd = 0;
  if ( nLaddderIndex <= navGenOutput->m_pNavMesh->m_Ladders.m_Size )
    CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection(this);
  else
    this->m_bEnd = 1;
}


// CNavGenOutputLadderConnectionsIterator::End  (line 790, @0x000000000320c3d0, libserver.so)
bool __fastcall CNavGenOutputLadderConnectionsIterator::End(const CNavGenOutputLadderConnectionsIterator *const this)
{
  return this->m_bEnd;
}


// CNavGenOutputLadderConnectionsIterator::operator++  (line 795, @0x000000000320c3e0, libserver.so)  // inlines: SkipToNextValidConnection
// calls: CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection
void __fastcall CNavGenOutputLadderConnectionsIterator::operator++(CNavGenOutputLadderConnectionsIterator *const this)
{
  if ( !this->m_bEnd )
    CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection(this);
}


// CNavGenOutputLadderConnectionsIterator::GetArea  (line 800, @0x000000000320c400, libserver.so)  // inlines: GetLadder, GetLaddersCount
// calls: CNavLadder::GetConnection
uint32 __fastcall CNavGenOutputLadderConnectionsIterator::GetArea(
        const CNavGenOutputLadderConnectionsIterator *const this)
{
  uint32 result; // eax
  __int64 m_nLadderIndex; // rcx
  CNavMesh *m_pNavMesh; // rdx
  const CNavLadder *v4; // rax

  result = -1;
  if ( !this->m_bEnd )
  {
    m_nLadderIndex = this->m_nLadderIndex;
    m_pNavMesh = this->m_navGenOutput->m_pNavMesh;
    v4 = 0;
    if ( m_nLadderIndex < m_pNavMesh->m_Ladders.m_Size )
      v4 = m_pNavMesh->m_Ladders.m_Memory.m_pMemory[m_nLadderIndex];
    return CNavLadder::GetConnection(v4, this->m_curLadderConnection)->m_nIndex;
  }
  return result;
}


// CNavGenOutputLadderConnectionsIterator::GetConnectionType  (line 814, @0x000000000320c450, libserver.so)
NavLadderConnectionType __fastcall CNavGenOutputLadderConnectionsIterator::GetConnectionType(
        const CNavGenOutputLadderConnectionsIterator *const this)
{
  NavLadderConnectionType result; // eax

  result = NavLadderConnectionType::NUM_LADDER_CONNECTIONS;
  if ( !this->m_bEnd )
    return this->m_curLadderConnection;
  return result;
}


// CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection  (line 824, @0x000000000320ad70, libserver.so)  // inlines: GetLadder, GetLaddersCount
// calls: CNavLadder::GetConnection
// callers: CNavGenOutput::GetLadderConnections, CNavGenOutputLadderConnectionsIterator::CNavGenOutputLadderConnectionsIterator, CNavGenOutputLadderConnectionsIterator::operator++, CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection
void __fastcall CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection(
        CNavGenOutputLadderConnectionsIterator *const this)
{
  int32 m_curLadderConnection; // eax
  NavLadderConnectionType v3; // esi
  __int64 m_nLadderIndex; // rdx
  CNavMesh *m_pNavMesh; // rax

  while ( 1 )
  {
    m_curLadderConnection = this->m_curLadderConnection;
    v3 = m_curLadderConnection + 1;
    this->m_curLadderConnection = m_curLadderConnection + 1;
    if ( m_curLadderConnection == 4 )
      break;
    m_nLadderIndex = this->m_nLadderIndex;
    m_pNavMesh = this->m_navGenOutput->m_pNavMesh;
    if ( m_nLadderIndex >= m_pNavMesh->m_Ladders.m_Size )
    {
      if ( CNavLadder::GetConnection(0, v3) != 0 )
        goto LABEL_6;
    }
    else if ( CNavLadder::GetConnection(m_pNavMesh->m_Ladders.m_Memory.m_pMemory[m_nLadderIndex], v3) != 0 )
    {
LABEL_6:
      if ( this->m_curLadderConnection != 5 )
        return;
      break;
    }
  }
  this->m_bEnd = 1;
}


// CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection  (line 824, @0x000000000320c470, libserver.so)
// calls: CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection
void __fastcall CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection(
        CNavGenOutputLadderConnectionsIterator *const this)
{
  if ( !this->m_bEnd )
    CNavGenOutputLadderConnectionsIterator::SkipToNextValidConnection(this);
}


// CNavGenOutput::GetDebugStageCount  (line 859, @0x000000000320c490, libserver.so)
uint32 __fastcall CNavGenOutput::GetDebugStageCount(const CNavGenOutput *const this)
{
  return this->m_pDebugStages->m_Size;
}


// CNavGenOutput::GetDebugStageDescription  (line 868, @0x000000000320c4a0, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
const char *__fastcall CNavGenOutput::GetDebugStageDescription(
        const CNavGenOutput *const this,
        uint32 nDebugStageIndex)
{
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *m_pDebugStages; // rax

  m_pDebugStages = this->m_pDebugStages;
  if ( m_pDebugStages->m_Size > nDebugStageIndex )
    return CUtlString::Get(&m_pDebugStages->m_Memory.m_pMemory[nDebugStageIndex].m_Desc);
  else
    return "";
}


// CNavGenOutput::GetDebugStageAreaCount  (line 881, @0x000000000320c4e0, libserver.so)  // inlines: operator[]
int32 __fastcall CNavGenOutput::GetDebugStageAreaCount(const CNavGenOutput *const this, uint32 nDebugStageIndex)
{
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *m_pDebugStages; // rdx
  int32 result; // eax

  m_pDebugStages = this->m_pDebugStages;
  result = 0;
  if ( nDebugStageIndex < m_pDebugStages->m_Size )
    return m_pDebugStages->m_Memory.m_pMemory[nDebugStageIndex].m_Areas.m_Size;
  return result;
}


// CNavGenOutput::GetDebugStageAreaNumVertices  (line 893, @0x000000000320c510, libserver.so)  // inlines: operator[]
int32 __fastcall CNavGenOutput::GetDebugStageAreaNumVertices(
        const CNavGenOutput *const this,
        uint32 nDebugStageIndex,
        uint32 nAreaIndex)
{
  int32 result; // eax
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *m_pDebugStages; // rcx
  __int64 v5; // rsi

  result = 0;
  m_pDebugStages = this->m_pDebugStages;
  if ( nDebugStageIndex < m_pDebugStages->m_Size )
  {
    v5 = &m_pDebugStages->m_Memory.m_pMemory[nDebugStageIndex];
    if ( *(v5 + 32) > nAreaIndex )
      return *(*(v5 + 40) + 48LL * nAreaIndex);
  }
  return result;
}


// CNavGenOutput::GetDebugStageAreaVertex  (line 910, @0x000000000320c550, libserver.so)  // inlines: AsVector, operator[]
Vector __fastcall CNavGenOutput::GetDebugStageAreaVertex(
        const CNavGenOutput *const this,
        uint32 nDebugStageIndex,
        uint32 nAreaIndex,
        NavAreaVertex_t nVertex)
{
  CUtlVector<NavGenDebugStage_t,CUtlMemory<NavGenDebugStage_t,int> > *m_pDebugStages; // rax
  __int64 v7; // rsi
  double *v8; // rax
  vec_t v9; // xmm0_4
  float v10; // xmm1_4
  __int64 v11; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pDebugStages = this->m_pDebugStages;
  if ( nDebugStageIndex >= m_pDebugStages->m_Size
    || *((v7 = &m_pDebugStages->m_Memory.m_pMemory[nDebugStageIndex]) + 32) <= nAreaIndex )
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  else
  {
    v8 = (*(v7 + 16) + 24LL * *(*(v7 + 40) + 48LL * nAreaIndex + 4LL * nVertex + 4));
    v9 = v8[2];
    v10 = v8[1];
    *(&v11 + 1) = v10;
    result.z = v9;
    *&v11 = *v8;
    *&result.x = v11;
  }
  return result;
}


// CNavGenOutput::GetRecastDebugStageDescription  (line 927, @0x000000000320c600, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
const char *__fastcall CNavGenOutput::GetRecastDebugStageDescription(
        const CNavGenOutput *const this,
        uint32 nDebugStageIndex)
{
  CUtlVector<NavGenRecastDebugStage_t,CUtlMemory<NavGenRecastDebugStage_t,int> > *m_pRecastDebugStages; // rax

  m_pRecastDebugStages = this->m_pRecastDebugStages;
  if ( nDebugStageIndex < m_pRecastDebugStages->m_Size )
    return CUtlString::Get(&m_pRecastDebugStages->m_Memory.m_pMemory[nDebugStageIndex].m_Desc);
  else
    return "";
}


