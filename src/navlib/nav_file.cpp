// Reconstructed from DWARF by pahole; not original source.

// src/navlib/nav_file.cpp:1305
struct OneWayLink_t {
	NavEdgeIndex edge;  // +0x10
	NavEdgeIndex backEdge;  // +0x11
	int Compare(const OneWayLink_t *);

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_file.cpp  (line 0, @0x0000000001a6da40, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_nav_file_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GetVPKFilename  (line 30, @0x00000000031e86a0, libserver.so)  // inlines: V_strlen
// calls: V_snprintf
// callers: CommandNavLoadAlt, CNavMesh::GetFilename, CNavMesh::LoadNavMesh, CNavMesh::SaveNavMesh
// strings: "maps\\%s.vpk"
// globals: GetVPKFilename(char const*)::vpkFilename
char *__fastcall GetVPKFilename(const char *pMapName)
{
  int v1; // eax

  V_snprintf(GetVPKFilename(char const*)::vpkFilename, 256, "maps\\%s.vpk", pMapName);
  v1 = strlen(GetVPKFilename(char const*)::vpkFilename);
  if ( v1 <= 2 )
    return 0;
  GetVPKFilename(char const*)::vpkFilename[v1 - 3] = 118;
  GetVPKFilename(char const*)::vpkFilename[v1 - 2] = 112;
  GetVPKFilename(char const*)::vpkFilename[v1 - 1] = 107;
  return GetVPKFilename(char const*)::vpkFilename;
}


// CNavFlags::Save  (line 51, @0x00000000031e8740, libserver.so)  // inlines: LowLevelByteSwap<long long unsigned int>, PeekPut, PutType<long long unsigned int>, PutTypeBin<long long unsigned int>, PutUnsignedInt64, SwapBufferToTargetEndian<long long unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
void __fastcall CNavFlags::Save(CNavFlags *const this, CUtlBuffer *const rFileBuffer)
{
  uint64 m_Flags; // r12
  int m_Put; // eax
  unsigned __int8 *v5; // r10
  __int64 v6; // rdx
  __int64 i; // rax
  char v8; // si
  _BYTE *v9; // rcx
  char v10; // [rsp+1h] [rbp-21h]
  uint64 v11; // [rsp+2h] [rbp-20h]
  _QWORD v12[3]; // [rsp+Ah] [rbp-18h] BYREF

  m_Flags = this->m_Flags;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%llu", m_Flags);
  }
  else
  {
    v11 = this->m_Flags;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 8) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        m_Put = rFileBuffer->m_Put;
        v5 = &rFileBuffer->m_Memory.m_pMemory[m_Put - rFileBuffer->m_nOffset];
        if ( v5 != 0 )
        {
          v6 = 0;
          v12[0] = *v5;
          for ( i = 8; i != 0; --i )
          {
            v8 = *(&v10 + i);
            v9 = v12 + v6;
            v6 = 9 - i;
            *v9 = v8;
          }
          *v5 = v12[0];
          m_Put = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_Flags;
        m_Put = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = m_Put + 8;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
}


// CNavFlags::Load  (line 58, @0x00000000031e8830, libserver.so)  // inlines: GetType<long long unsigned int>, GetTypeBin<long long unsigned int>, GetTypeText<long long unsigned int>, GetUnsignedInt64, LowLevelByteSwap<long long unsigned int>, PeekGet, StringToNumber<long long unsigned int>, SwapBufferToTargetEndian<long long unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtoui64, CUtlBuffer::CheckGet
void __fastcall CNavFlags::Load(CNavFlags *const this, CUtlBuffer *const rFileBuffer)
{
  bool v4; // al
  uint64 v5; // rdx
  int v6; // r13d
  bool v7; // al
  int m_Get; // r8d
  uint64 v9; // rdx
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  __int64 i; // rax
  unsigned __int8 v13; // si
  unsigned __int8 *v14; // rcx
  int nIncrement; // [rsp+Ch] [rbp-34h] BYREF
  __int64 v16; // [rsp+10h] [rbp-30h] BYREF
  _QWORD v17[5]; // [rsp+18h] [rbp-28h] BYREF

  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v4 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v5 = 0;
    if ( v4 )
    {
      LOBYTE(v5) = 10;
      v17[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v6 = v17[0];
      v5 = V_strtoui64(v17[0], v17, v5);
      if ( LODWORD(v17[0]) != v6 )
      {
        rFileBuffer->m_Get += LODWORD(v17[0]) - v6;
        this->m_Flags = v5;
        return;
      }
    }
LABEL_3:
    this->m_Flags = v5;
    return;
  }
  v7 = CUtlBuffer::CheckGet(rFileBuffer, 8);
  v5 = 0;
  if ( !v7 )
    goto LABEL_3;
  if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
  {
    m_Get = rFileBuffer->m_Get;
    v10 = &rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
    if ( v10 == 0 )
      v10 = &v16;
    v11 = 0;
    v17[0] = v16;
    for ( i = 8; i != 0; --i )
    {
      v13 = v10[i - 1];
      v14 = v17 + v11;
      v11 = 9 - i;
      *v14 = v13;
    }
    v9 = v17[0];
  }
  else
  {
    m_Get = rFileBuffer->m_Get;
    v9 = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
  }
  rFileBuffer->m_Get = m_Get + 8;
  this->m_Flags = v9;
}


// CNavArea::Save  (line 65, @0x00000000031e9dd0, libserver.so)  // inlines: Count, GetLadders, Indices, LowLevelByteSwap<long long unsigned int>, LowLevelByteSwap<unsigned int>, PeekPut, PutType<long long unsigned int>, PutType<unsigned int>, PutTypeBin<long long unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, PutUnsignedInt64, Save, SwapBufferToTargetEndian<long long unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator&, operator[]
// calls: CUtlBuffer::PutType<unsigned int>, CUtlBuffer::Printf, CUtlBuffer::PutUnsignedChar, CNavPoly::SavePoly, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CNavAreaExtended::Save
void __fastcall CNavArea::Save(
        const CNavArea *const this,
        CUtlBuffer *const rFileBuffer,
        const CNavPlaceDirectory *const placeDirectory)
{
  __int64 v5; // rax
  uint64 v6; // rbx
  __int64 v7; // rax
  CNavConnectVector *v8; // r13
  int v9; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // r14d
  int v12; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v13; // rax
  int m_nBackEdge; // r12d
  CNavArea *m_pArea; // rax
  int v16; // eax
  int v17; // eax
  int v18; // r13d
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  CNavLadderConnectVector *v20; // rbx
  unsigned int *v21; // rax
  unsigned int v22; // r12d
  unsigned int *v23; // rax
  unsigned int v24; // r12d
  int v25; // r14d
  __int64 v26; // rdx
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // rdx
  int v29; // eax
  unsigned __int8 *v30; // rdx
  int m_Put; // eax
  unsigned __int8 *v32; // rdx
  __int64 v33; // rsi
  __int64 i; // rax
  char v35; // r11
  _BYTE *v36; // r10
  NavEdgeIndex nEdge; // [rsp+Bh] [rbp-55h]
  uint32 m_AreaId; // [rsp+18h] [rbp-48h]
  int v40; // [rsp+1Ch] [rbp-44h]
  uint64 v41; // [rsp+20h] [rbp-40h]
  _QWORD v42[7]; // [rsp+28h] [rbp-38h] BYREF

  CUtlBuffer::PutType<unsigned int>(rFileBuffer, this->m_AreaId);
  v5 = (*(this->_vptr_CNavPoly + 5))(this);
  v6 = this->m_AreaAttributes.m_Flags & v5;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%llu", this->m_AreaAttributes.m_Flags & v5);
  }
  else
  {
    v41 = this->m_AreaAttributes.m_Flags & v5;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 8) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        m_Put = rFileBuffer->m_Put;
        v32 = &rFileBuffer->m_Memory.m_pMemory[m_Put - rFileBuffer->m_nOffset];
        if ( v32 != 0 )
        {
          v33 = 0;
          v42[0] = *v32;
          for ( i = 8; i != 0; --i )
          {
            v35 = *(&v40 + i + 3);
            v36 = v42 + v33;
            v33 = 9 - i;
            *v36 = v35;
          }
          *v32 = v42[0];
          m_Put = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = v6;
        m_Put = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = m_Put + 8;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  CUtlBuffer::PutUnsignedChar(rFileBuffer, this->m_nGenIndex);
  CNavPoly::SavePoly(this, rFileBuffer);
  v7 = 0;
  nEdge = 0;
  if ( this->m_nVerts > 0 )
  {
    while ( 1 )
    {
      v8 = &this->m_connect[v7];
      v9 = v8->m_pData != 0 ? v8->m_pData->m_Size : 0;
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(rFileBuffer, "%u", v9);
      }
      else if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
      {
        if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
        {
          v29 = rFileBuffer->m_Put;
          v30 = &rFileBuffer->m_Memory.m_pMemory[v29 - rFileBuffer->m_nOffset];
          if ( v30 != 0 )
          {
            LOBYTE(v42[0]) = HIBYTE(v9);
            BYTE1(v42[0]) = BYTE2(v9);
            BYTE2(v42[0]) = BYTE1(v9);
            BYTE3(v42[0]) = v9;
            *v30 = v42[0];
            v29 = rFileBuffer->m_Put;
          }
        }
        else
        {
          *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = v9;
          v29 = rFileBuffer->m_Put;
        }
        rFileBuffer->m_Put = v29 + 4;
        CUtlBuffer::AddNullTermination(rFileBuffer);
      }
      m_pData = v8->m_pData;
      if ( v8->m_pData != 0 )
      {
        m_Size = m_pData->m_Size;
        if ( m_pData->m_Size != 0 )
          break;
      }
LABEL_25:
      v7 = ++nEdge;
      if ( nEdge >= this->m_nVerts )
        goto LABEL_26;
    }
    v12 = 0;
    while ( 1 )
    {
      v13 = m_pData + 2 * v12;
      m_nBackEdge = v13->m_Elements[0].m_nBackEdge;
      m_pArea = v13->m_Elements[0].m_pArea;
      if ( (rFileBuffer->m_Flags & 1) != 0 )
        break;
      m_AreaId = m_pArea->m_AreaId;
      if ( !CUtlBuffer::CheckPut(rFileBuffer, 4) )
        goto LABEL_12;
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v16 = rFileBuffer->m_Put;
        v27 = &rFileBuffer->m_Memory.m_pMemory[v16 - rFileBuffer->m_nOffset];
        if ( v27 != 0 )
        {
          LOBYTE(v42[0]) = HIBYTE(m_AreaId);
          BYTE1(v42[0]) = BYTE2(m_AreaId);
          BYTE2(v42[0]) = BYTE1(m_AreaId);
          BYTE3(v42[0]) = m_AreaId;
          *v27 = v42[0];
          v16 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_AreaId;
        v16 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v16 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
LABEL_13:
        CUtlBuffer::Printf(rFileBuffer, "%u", m_nBackEdge);
LABEL_14:
        if ( ++v12 == m_Size )
          goto LABEL_25;
        goto LABEL_15;
      }
LABEL_21:
      v40 = m_nBackEdge;
      if ( !CUtlBuffer::CheckPut(rFileBuffer, 4) )
        goto LABEL_14;
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v17 = rFileBuffer->m_Put;
        v28 = &rFileBuffer->m_Memory.m_pMemory[v17 - rFileBuffer->m_nOffset];
        if ( v28 != 0 )
        {
          LOBYTE(v42[0]) = HIBYTE(v40);
          BYTE1(v42[0]) = BYTE2(v40);
          BYTE2(v42[0]) = BYTE1(v40);
          BYTE3(v42[0]) = v40;
          *v28 = v42[0];
          v17 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nBackEdge;
        v17 = rFileBuffer->m_Put;
      }
      ++v12;
      rFileBuffer->m_Put = v17 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
      if ( v12 == m_Size )
        goto LABEL_25;
LABEL_15:
      m_pData = v8->m_pData;
    }
    CUtlBuffer::Printf(rFileBuffer, "%u", m_pArea->m_AreaId);
LABEL_12:
    if ( (rFileBuffer->m_Flags & 1) != 0 )
      goto LABEL_13;
    goto LABEL_21;
  }
LABEL_26:
  v18 = 0;
  CUtlBuffer::PutUnsignedChar(rFileBuffer, 0);
  CUtlBuffer::PutType<unsigned int>(rFileBuffer, 0);
  do
  {
    m_pLaddersAndElevators = this->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0
      && (v20 = &m_pLaddersAndElevators->m_ladders[v18], v21 = v20->m_pData, v20->m_pData != 0) )
    {
      v22 = *v21;
      CUtlBuffer::PutType<unsigned int>(rFileBuffer, *v21);
      if ( v22 != 0 )
      {
        v23 = v20->m_pData;
        if ( v20->m_pData != 0 )
        {
          v24 = *v23;
          if ( *v23 != 0 )
          {
            v25 = 0;
            while ( 1 )
            {
              v26 = v25++;
              CUtlBuffer::PutType<unsigned int>(rFileBuffer, *(*&v23[2 * v26 + 2] + 92LL));
              if ( v25 == v24 )
                break;
              v23 = v20->m_pData;
            }
          }
        }
      }
    }
    else
    {
      CUtlBuffer::PutType<unsigned int>(rFileBuffer, 0);
    }
    ++v18;
  }
  while ( v18 != 2 );
}


// ReadLegacyHidingSpotData  (line 147, @0x00000000031ebb90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetFloat, GetType<float>, GetType<short unsigned int>, GetType<unsigned int>, GetTypeBin<float>, GetTypeBin<unsigned char>, GetTypeBin<unsigned int>, GetTypeText<float>, GetTypeText<short unsigned int>, GetTypeText<unsigned int>, GetUnsignedChar, GetUnsignedInt, GetUnsignedShort, LegacyNavData_t, LowLevelByteSwap<float>, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<float>, StringToNumber<short unsigned int>, StringToNumber<unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[], ~CUtlVector, ~LegacyNavData_t
// calls: CUtlBuffer::GetUnsignedChar, CUtlVectorBase<LegacyNavData_t::HidingSpotData_t, CUtlMemory<LegacyNavData_t::HidingSpotData_t, int> >::SetCount, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckGet, V_strtod, V_strtoui64, CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int> >::~CUtlVectorBase, CUtlVectorBase<LegacyNavData_t::HidingSpotData_t, CUtlMemory<LegacyNavData_t::HidingSpotData_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavArea::LoadCore
bool __fastcall ReadLegacyHidingSpotData(
        CUtlBuffer *const rFileBuffer,
        int nFileVersion,
        LegacyNavData_t *pOutLegacyData)
{
  LegacyNavData_t *v3; // r13
  int UnsignedChar; // r12d
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  uint32 v8; // r14d
  LegacyNavData_t::HidingSpotData_t *v9; // r15
  bool v10; // al
  float v11; // xmm0_4
  LegacyNavData_t::HidingSpotData_t *v12; // r15
  bool v13; // al
  float v14; // xmm0_4
  LegacyNavData_t::HidingSpotData_t *v15; // r15
  bool v16; // al
  float v17; // xmm0_4
  LegacyNavData_t::HidingSpotData_t *v18; // r15
  bool v19; // al
  unsigned __int8 v20; // dl
  int m_Get; // edx
  bool v22; // al
  int v23; // edx
  int v24; // eax
  bool v25; // al
  int v26; // eax
  bool v27; // zf
  bool v28; // al
  int v29; // eax
  bool v30; // al
  int v31; // eax
  int v32; // r15d
  unsigned __int8 v33; // al
  unsigned __int8 **v34; // rax
  __int64 v36; // [rsp-58h] [rbp-C8h]
  int v37; // [rsp-50h] [rbp-C0h]
  int v38; // [rsp-50h] [rbp-C0h]
  int v39; // [rsp-50h] [rbp-C0h]
  int v40; // [rsp-50h] [rbp-C0h]
  int v41; // [rsp-44h] [rbp-B4h] BYREF
  int v42; // [rsp-40h] [rbp-B0h] BYREF
  int v43; // [rsp-3Ch] [rbp-ACh] BYREF
  int v44; // [rsp-38h] [rbp-A8h] BYREF
  int v45; // [rsp-34h] [rbp-A4h] BYREF
  unsigned __int8 *v46; // [rsp-30h] [rbp-A0h] BYREF
  unsigned __int8 *v47; // [rsp-28h] [rbp-98h] BYREF
  unsigned __int8 *v48; // [rsp-20h] [rbp-90h] BYREF
  unsigned __int8 *v49; // [rsp-18h] [rbp-88h] BYREF
  unsigned __int8 *v50; // [rsp-10h] [rbp-80h] BYREF
  int v51; // [rsp-8h] [rbp-78h] BYREF
  LegacyNavData_t discardData; // [rsp+0h] [rbp-70h] BYREF

  if ( nFileVersion <= 1 )
    return 0;
  v3 = pOutLegacyData;
  v51 = 0;
  memset(&discardData, 0, 20);
  discardData.m_NextHidingSpotID = 0;
  *&discardData.m_EncounterSpots.m_Size = 0;
  discardData.m_EncounterSpots.m_Memory.m_pMemory = 0;
  if ( pOutLegacyData == 0 )
    v3 = &v51;
  UnsignedChar = CUtlBuffer::GetUnsignedChar(rFileBuffer);
  CUtlVectorBase<LegacyNavData_t::HidingSpotData_t,CUtlMemory<LegacyNavData_t::HidingSpotData_t,int>>::SetCount(
    &v3->m_HidingSpots,
    UnsignedChar);
  if ( UnsignedChar != 0 )
  {
    v6 = 5LL * (UnsignedChar - 1) + 5;
    v7 = 0;
    v36 = 4 * v6;
    do
    {
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        v41 = 128;
        v8 = 0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &v41) )
        {
          v46 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
          v32 = v46;
          LODWORD(v49) = V_strtoui64(v46, &v46, 10);
          v8 = v49;
          if ( v46 != v32 )
            rFileBuffer->m_Get += v46 - v32;
        }
      }
      else
      {
        v8 = 0;
        if ( CUtlBuffer::CheckGet(rFileBuffer, 4) )
        {
          if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
          {
            m_Get = rFileBuffer->m_Get;
            v34 = &rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
            if ( v34 == 0 )
              v34 = &v49;
            LODWORD(v50) = v49;
            LOBYTE(v50) = *(v34 + 3);
            BYTE1(v50) = *(v34 + 2);
            BYTE2(v50) = *(v34 + 1);
            BYTE3(v50) = *v34;
            v8 = v50;
          }
          else
          {
            m_Get = rFileBuffer->m_Get;
            v8 = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
          }
          rFileBuffer->m_Get = m_Get + 4;
        }
      }
      v3->m_HidingSpots.m_Memory.m_pMemory[v7 / 0x14].m_id = v8;
      v9 = &v3->m_HidingSpots.m_Memory.m_pMemory[v7 / 0x14];
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        v42 = 128;
        v10 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &v42);
        v11 = 0.0;
        if ( v10 )
        {
          v47 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
          v37 = v47;
          v11 = V_strtod(v47, &v47);
          *&v49 = v11;
          if ( v47 != v37 )
            rFileBuffer->m_Get += v47 - v37;
        }
      }
      else
      {
        v28 = CUtlBuffer::CheckGet(rFileBuffer, 4);
        v11 = 0.0;
        if ( v28 )
        {
          v29 = rFileBuffer->m_Get;
          v27 = (*&rFileBuffer->m_Byteswap & 1) == 0;
          v11 = *&rFileBuffer->m_Memory.m_pMemory[v29 - rFileBuffer->m_nOffset];
          *&v49 = v11;
          if ( !v27 )
          {
            LOBYTE(v50) = BYTE3(v49);
            BYTE1(v50) = BYTE2(v49);
            BYTE2(v50) = BYTE1(v49);
            BYTE3(v50) = v49;
            v11 = *&v50;
          }
          rFileBuffer->m_Get = v29 + 4;
        }
      }
      v9->m_pos.x = v11;
      v12 = &v3->m_HidingSpots.m_Memory.m_pMemory[v7 / 0x14];
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        v43 = 128;
        v13 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &v43);
        v14 = 0.0;
        if ( v13 )
        {
          v48 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
          v38 = v48;
          v14 = V_strtod(v48, &v48);
          *&v49 = v14;
          if ( v48 != v38 )
            rFileBuffer->m_Get += v48 - v38;
        }
      }
      else
      {
        v30 = CUtlBuffer::CheckGet(rFileBuffer, 4);
        v14 = 0.0;
        if ( v30 )
        {
          v31 = rFileBuffer->m_Get;
          v27 = (*&rFileBuffer->m_Byteswap & 1) == 0;
          v14 = *&rFileBuffer->m_Memory.m_pMemory[v31 - rFileBuffer->m_nOffset];
          *&v49 = v14;
          if ( !v27 )
          {
            LOBYTE(v50) = BYTE3(v49);
            BYTE1(v50) = BYTE2(v49);
            BYTE2(v50) = BYTE1(v49);
            BYTE3(v50) = v49;
            v14 = *&v50;
          }
          rFileBuffer->m_Get = v31 + 4;
        }
      }
      v12->m_pos.y = v14;
      v15 = &v3->m_HidingSpots.m_Memory.m_pMemory[v7 / 0x14];
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        v44 = 128;
        v16 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &v44);
        v17 = 0.0;
        if ( v16 )
        {
          v49 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
          v39 = v49;
          v17 = V_strtod(v49, &v49);
          *&v48 = v17;
          if ( v49 != v39 )
            rFileBuffer->m_Get += v49 - v39;
        }
      }
      else
      {
        v25 = CUtlBuffer::CheckGet(rFileBuffer, 4);
        v17 = 0.0;
        if ( v25 )
        {
          v26 = rFileBuffer->m_Get;
          v27 = (*&rFileBuffer->m_Byteswap & 1) == 0;
          v17 = *&rFileBuffer->m_Memory.m_pMemory[v26 - rFileBuffer->m_nOffset];
          *&v48 = v17;
          if ( !v27 )
          {
            LOBYTE(v50) = BYTE3(v48);
            BYTE1(v50) = BYTE2(v48);
            BYTE2(v50) = BYTE1(v48);
            BYTE3(v50) = v48;
            v17 = *&v50;
          }
          rFileBuffer->m_Get = v26 + 4;
        }
      }
      v15->m_pos.z = v17;
      v18 = &v3->m_HidingSpots.m_Memory.m_pMemory[v7 / 0x14];
      if ( (rFileBuffer->m_Flags & 1) != 0 )
      {
        v45 = 128;
        v19 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &v45);
        v20 = 0;
        if ( v19 )
        {
          v50 = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
          v40 = v50;
          v33 = V_strtoui64(v50, &v50, 10);
          if ( v50 != v40 )
            rFileBuffer->m_Get += v50 - v40;
          v20 = v33;
        }
      }
      else
      {
        v22 = CUtlBuffer::CheckGet(rFileBuffer, 1);
        v20 = 0;
        if ( v22 )
        {
          v23 = rFileBuffer->m_Get;
          v24 = v23 + 1;
          v20 = rFileBuffer->m_Memory.m_pMemory[v23 - rFileBuffer->m_nOffset];
          rFileBuffer->m_Get = v24;
        }
      }
      v18->m_flags = v20;
      if ( v3->m_NextHidingSpotID <= v8 )
        v3->m_NextHidingSpotID = v8 + 1;
      v7 += 20LL;
    }
    while ( v7 != v36 );
  }
  CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t,CUtlMemory<LegacyNavData_t::EncounterSpotData_t,int>>::~CUtlVectorBase(&discardData.m_NextHidingSpotID);
  CUtlVectorBase<LegacyNavData_t::HidingSpotData_t,CUtlMemory<LegacyNavData_t::HidingSpotData_t,int>>::~CUtlVectorBase(&v51);
  return 1;
}


// ReadLegacySpotEncounterData  (line 184, @0x00000000031ec1c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetType<short unsigned int>, GetType<unsigned int>, GetTypeBin<unsigned char>, GetTypeBin<unsigned int>, GetTypeText<short unsigned int>, GetTypeText<unsigned int>, GetUnsignedChar, GetUnsignedInt, GetUnsignedShort, LegacyNavData_t, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<short unsigned int>, StringToNumber<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[], ~CUtlVector, ~LegacyNavData_t
// calls: CUtlBuffer::GetType<unsigned int>, CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int> >::SetCount, CUtlBuffer::CheckArbitraryPeekGet, CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t, int> >::SetCount, CUtlBuffer::CheckGet, V_strtoui64, CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int> >::~CUtlVectorBase, CUtlVectorBase<LegacyNavData_t::HidingSpotData_t, CUtlMemory<LegacyNavData_t::HidingSpotData_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavArea::LoadCore
bool __fastcall ReadLegacySpotEncounterData(
        CUtlBuffer *const fileBuffer,
        int nFileVersion,
        LegacyNavData_t *pOutLegacyData)
{
  bool result; // al
  unsigned int v5; // r15d
  __int64 v6; // r15
  bool v7; // al
  __int64 v8; // rdx
  bool v9; // al
  __int64 v10; // rdx
  bool v11; // al
  int v12; // esi
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r12
  bool v16; // al
  __int64 v17; // rdx
  bool v18; // al
  float v19; // xmm0_4
  __int64 v20; // r13
  bool v21; // al
  int v22; // ecx
  int v23; // edx
  bool v24; // al
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // r14d
  int v29; // r14d
  unsigned __int8 v30; // al
  unsigned __int8 **v31; // rax
  bool v32; // al
  int v33; // edx
  bool v34; // al
  int v35; // edx
  int v36; // eax
  bool v37; // al
  int m_Get; // edx
  int v39; // eax
  int v40; // r12d
  unsigned __int8 v41; // al
  int v42; // r13d
  unsigned __int8 v43; // al
  int v44; // r12d
  unsigned __int8 v45; // al
  LegacyNavData_t *pOutLegacyDataa; // [rsp+18h] [rbp-D8h]
  uint nSpotEnounterCount; // [rsp+20h] [rbp-D0h]
  signed int i; // [rsp+24h] [rbp-CCh]
  __int64 v49; // [rsp+28h] [rbp-C8h]
  unsigned int dest; // [rsp+38h] [rbp-B8h] BYREF
  unsigned int v51; // [rsp+3Ch] [rbp-B4h] BYREF
  unsigned int v52; // [rsp+40h] [rbp-B0h] BYREF
  int nIncrement; // [rsp+44h] [rbp-ACh] BYREF
  int v54; // [rsp+48h] [rbp-A8h] BYREF
  int v55; // [rsp+4Ch] [rbp-A4h] BYREF
  int v56; // [rsp+50h] [rbp-A0h] BYREF
  int v57; // [rsp+54h] [rbp-9Ch] BYREF
  unsigned __int8 *v58; // [rsp+58h] [rbp-98h] BYREF
  unsigned __int8 *v59; // [rsp+60h] [rbp-90h] BYREF
  unsigned __int8 *v60; // [rsp+68h] [rbp-88h] BYREF
  unsigned __int8 *v61; // [rsp+70h] [rbp-80h] BYREF
  unsigned __int8 *v62; // [rsp+78h] [rbp-78h] BYREF
  LegacyNavData_t discardData; // [rsp+80h] [rbp-70h] BYREF

  result = 0;
  pOutLegacyDataa = pOutLegacyData;
  if ( nFileVersion > 3 )
  {
    discardData.m_HidingSpots.m_Size = 0;
    memset(&discardData.m_HidingSpots.m_Memory, 0, 20);
    discardData.m_EncounterSpots.m_Size = 0;
    discardData.m_EncounterSpots.m_Memory.m_pMemory = 0;
    discardData.m_EncounterSpots.m_Memory.m_nAllocationCount = 0;
    discardData.m_EncounterSpots.m_Memory.m_nGrowSize = 0;
    if ( pOutLegacyData == 0 )
      pOutLegacyDataa = &discardData;
    CUtlBuffer::GetType<unsigned int>(fileBuffer, &dest);
    v5 = dest;
    nSpotEnounterCount = dest;
    CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t,CUtlMemory<LegacyNavData_t::EncounterSpotData_t,int>>::SetCount(
      &pOutLegacyDataa->m_EncounterSpots,
      dest);
    if ( v5 != 0 )
    {
      i = 0;
      while ( 1 )
      {
        v6 = &pOutLegacyDataa->m_EncounterSpots.m_Memory.m_pMemory[i];
        CUtlBuffer::GetType<unsigned int>(fileBuffer, &v51);
        *v6 = v51;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
          nIncrement = 128;
          v7 = CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &nIncrement);
          v8 = 0;
          if ( v7 )
          {
            LOBYTE(v8) = 10;
            v58 = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v40 = v58;
            v41 = V_strtoui64(v58, &v58, v8);
            if ( v58 != v40 )
              fileBuffer->m_Get += v58 - v40;
            LODWORD(v8) = v41;
          }
        }
        else
        {
          v37 = CUtlBuffer::CheckGet(fileBuffer, 1);
          LODWORD(v8) = 0;
          if ( v37 )
          {
            m_Get = fileBuffer->m_Get;
            v39 = m_Get + 1;
            LODWORD(v8) = fileBuffer->m_Memory.m_pMemory[m_Get - fileBuffer->m_nOffset];
            fileBuffer->m_Get = v39;
          }
        }
        *(v6 + 8) = v8;
        CUtlBuffer::GetType<unsigned int>(fileBuffer, &v52);
        *(v6 + 4) = v52;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
          v54 = 128;
          v9 = CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v54);
          v10 = 0;
          if ( v9 )
          {
            LOBYTE(v10) = 10;
            v59 = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v44 = v59;
            v45 = V_strtoui64(v59, &v59, v10);
            if ( v59 != v44 )
              fileBuffer->m_Get += v59 - v44;
            LODWORD(v10) = v45;
          }
        }
        else
        {
          v34 = CUtlBuffer::CheckGet(fileBuffer, 1);
          LODWORD(v10) = 0;
          if ( v34 )
          {
            v35 = fileBuffer->m_Get;
            v36 = v35 + 1;
            LODWORD(v10) = fileBuffer->m_Memory.m_pMemory[v35 - fileBuffer->m_nOffset];
            fileBuffer->m_Get = v36;
          }
        }
        *(v6 + 12) = v10;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
          v55 = 128;
          v11 = CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v55);
          v12 = 0;
          v13 = 0;
          if ( v11 )
          {
            v60 = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v42 = v60;
            v43 = V_strtoui64(v60, &v60, 10);
            if ( v60 != v42 )
              fileBuffer->m_Get += v60 - v42;
            v13 = v43;
            v12 = v43;
          }
        }
        else
        {
          v32 = CUtlBuffer::CheckGet(fileBuffer, 1);
          v12 = 0;
          v13 = 0;
          if ( v32 )
          {
            v33 = fileBuffer->m_Get;
            v13 = fileBuffer->m_Memory.m_pMemory[v33 - fileBuffer->m_nOffset];
            fileBuffer->m_Get = v33 + 1;
            v12 = v13;
          }
        }
        CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t,CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t,int>>::SetCount(
          (v6 + 16),
          v12);
        if ( v13 != 0 )
          break;
LABEL_33:
        if ( ++i == nSpotEnounterCount )
          goto LABEL_34;
      }
      v14 = 8LL * (v13 - 1) + 8;
      v15 = 0;
      v49 = v14;
      while ( 1 )
      {
        v20 = *(v6 + 24) + v15;
        if ( (fileBuffer->m_Flags & 1) != 0 )
          break;
        v21 = CUtlBuffer::CheckGet(fileBuffer, 4);
        LODWORD(v17) = 0;
        if ( !v21 )
          goto LABEL_15;
        if ( (*&fileBuffer->m_Byteswap & 1) != 0 )
        {
          v22 = fileBuffer->m_Get;
          v31 = &fileBuffer->m_Memory.m_pMemory[v22 - fileBuffer->m_nOffset];
          if ( v31 == 0 )
            v31 = &v60;
          LODWORD(v62) = v60;
          LOBYTE(v62) = *(v31 + 3);
          BYTE1(v62) = *(v31 + 2);
          BYTE2(v62) = *(v31 + 1);
          BYTE3(v62) = *v31;
          v23 = v62;
        }
        else
        {
          v22 = fileBuffer->m_Get;
          v23 = *&fileBuffer->m_Memory.m_pMemory[v22 - fileBuffer->m_nOffset];
        }
        fileBuffer->m_Get = v22 + 4;
        *v20 = v23;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
LABEL_16:
          v57 = 128;
          v18 = CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v57);
          v19 = 0.0;
          if ( v18 )
          {
            v62 = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v29 = v62;
            v30 = V_strtoui64(v62, &v62, 10);
            if ( v62 != v29 )
              fileBuffer->m_Get += v62 - v29;
            v19 = v30 / 255.0;
          }
          goto LABEL_17;
        }
LABEL_23:
        v24 = CUtlBuffer::CheckGet(fileBuffer, 1);
        v19 = 0.0;
        if ( v24 )
        {
          v25 = fileBuffer->m_Get;
          v26 = v25 + 1;
          v27 = fileBuffer->m_Memory.m_pMemory[v25 - fileBuffer->m_nOffset];
          fileBuffer->m_Get = v26;
          v19 = v27 / 255.0;
        }
LABEL_17:
        v15 += 8;
        *(v20 + 4) = v19;
        if ( v15 == v49 )
          goto LABEL_33;
      }
      v56 = 128;
      v16 = CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v56);
      v17 = 0;
      if ( v16 )
      {
        LOBYTE(v17) = 10;
        v61 = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
        v28 = v61;
        LODWORD(v60) = V_strtoui64(v61, &v61, v17);
        LODWORD(v17) = v60;
        if ( v61 != v28 )
          fileBuffer->m_Get += v61 - v28;
      }
LABEL_15:
      *v20 = v17;
      if ( (fileBuffer->m_Flags & 1) != 0 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_34:
    CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t,CUtlMemory<LegacyNavData_t::EncounterSpotData_t,int>>::~CUtlVectorBase(&discardData.m_EncounterSpots);
    CUtlVectorBase<LegacyNavData_t::HidingSpotData_t,CUtlMemory<LegacyNavData_t::HidingSpotData_t,int>>::~CUtlVectorBase(&discardData.m_HidingSpots);
    return 1;
  }
  return result;
}


// ReadAndDiscardOldApproachAreaData  (line 226, @0x00000000031e8960, libserver.so)  // inlines: GetType<short unsigned int>, GetType<unsigned int>, GetTypeBin<unsigned char>, GetTypeBin<unsigned int>, GetTypeText<short unsigned int>, GetTypeText<unsigned int>, GetUnsignedChar, GetUnsignedInt, GetUnsignedShort, PeekGet, StringToNumber<short unsigned int>, StringToNumber<unsigned int>, operator[]
// calls: CUtlBuffer::GetUnsignedChar, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckGet, V_strtoui64
// callers: CNavArea::LoadCore
void __fastcall ReadAndDiscardOldApproachAreaData(CUtlBuffer *const fileBuffer, int nFileVersion)
{
  unsigned __int8 UnsignedChar; // al
  int v4; // r14d
  int v5; // r12d
  int v6; // [rsp-50h] [rbp-50h]
  int v7; // [rsp-50h] [rbp-50h]
  int v8; // [rsp-50h] [rbp-50h]
  int v9; // [rsp-50h] [rbp-50h]
  int v10; // [rsp-50h] [rbp-50h]
  int v11; // [rsp-44h] [rbp-44h] BYREF
  _QWORD v12[8]; // [rsp-40h] [rbp-40h] BYREF

  if ( nFileVersion <= 14 )
  {
    UnsignedChar = CUtlBuffer::GetUnsignedChar(fileBuffer);
    v4 = UnsignedChar;
    if ( UnsignedChar != 0 )
    {
      v5 = 0;
      while ( (fileBuffer->m_Flags & 1) == 0 )
      {
        if ( !CUtlBuffer::CheckGet(fileBuffer, 4) )
          goto LABEL_5;
        fileBuffer->m_Get += 4;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
LABEL_6:
          v11 = 128;
          if ( CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v11) )
          {
            v12[0] = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v6 = v12[0];
            V_strtoui64(v12[0], v12, 10);
            if ( LODWORD(v12[0]) != v6 )
              fileBuffer->m_Get += LODWORD(v12[0]) - v6;
          }
LABEL_7:
          if ( (fileBuffer->m_Flags & 1) != 0 )
            goto LABEL_8;
          goto LABEL_19;
        }
LABEL_17:
        if ( !CUtlBuffer::CheckGet(fileBuffer, 4) )
          goto LABEL_7;
        fileBuffer->m_Get += 4;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
LABEL_8:
          v11 = 128;
          if ( CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v11) )
          {
            v12[0] = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v9 = v12[0];
            V_strtoui64(v12[0], v12, 10);
            if ( LODWORD(v12[0]) != v9 )
              fileBuffer->m_Get += LODWORD(v12[0]) - v9;
          }
LABEL_9:
          if ( (fileBuffer->m_Flags & 1) != 0 )
            goto LABEL_10;
          goto LABEL_21;
        }
LABEL_19:
        if ( !CUtlBuffer::CheckGet(fileBuffer, 1) )
          goto LABEL_9;
        ++fileBuffer->m_Get;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
LABEL_10:
          v11 = 128;
          if ( CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v11) )
          {
            v12[0] = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v8 = v12[0];
            V_strtoui64(v12[0], v12, 10);
            if ( LODWORD(v12[0]) != v8 )
              fileBuffer->m_Get += LODWORD(v12[0]) - v8;
          }
LABEL_11:
          if ( (fileBuffer->m_Flags & 1) != 0 )
            goto LABEL_12;
          goto LABEL_23;
        }
LABEL_21:
        if ( !CUtlBuffer::CheckGet(fileBuffer, 4) )
          goto LABEL_11;
        fileBuffer->m_Get += 4;
        if ( (fileBuffer->m_Flags & 1) != 0 )
        {
LABEL_12:
          v11 = 128;
          if ( CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v11) )
          {
            v12[0] = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
            v10 = v12[0];
            V_strtoui64(v12[0], v12, 10);
            if ( LODWORD(v12[0]) != v10 )
              fileBuffer->m_Get += LODWORD(v12[0]) - v10;
          }
          goto LABEL_13;
        }
LABEL_23:
        if ( CUtlBuffer::CheckGet(fileBuffer, 1) )
        {
          ++fileBuffer->m_Get;
          if ( v4 <= ++v5 )
            return;
        }
        else
        {
LABEL_13:
          if ( v4 <= ++v5 )
            return;
        }
      }
      v11 = 128;
      if ( CUtlBuffer::CheckArbitraryPeekGet(fileBuffer, 0, &v11) )
      {
        v12[0] = &fileBuffer->m_Memory.m_pMemory[fileBuffer->m_Get - fileBuffer->m_nOffset];
        v7 = v12[0];
        V_strtoui64(v12[0], v12, 10);
        if ( LODWORD(v12[0]) != v7 )
          fileBuffer->m_Get += LODWORD(v12[0]) - v7;
      }
LABEL_5:
      if ( (fileBuffer->m_Flags & 1) != 0 )
        goto LABEL_6;
      goto LABEL_17;
    }
  }
}


// ReadLegacyEarliestOccupyTimeData  (line 247, @0x00000000031eabc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<LegacyNavData_t::EncounterSpotData_t>, Element, GetFloat, LegacyNavData_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EncounterSpotData_t, ~LegacyNavData_t
// calls: CUtlBuffer::GetType<float>, CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t, int>::Purge, CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int>::Purge, CUtlMemory<LegacyNavData_t::HidingSpotData_t, int>::Purge, CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int> >::~CUtlVectorBase, CUtlVectorBase<LegacyNavData_t::HidingSpotData_t, CUtlMemory<LegacyNavData_t::HidingSpotData_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavArea::LoadCore
void __fastcall ReadLegacyEarliestOccupyTimeData(
        CUtlBuffer *const fileBuffer,
        int nFileVersion,
        LegacyNavData_t *pOutLegacyData)
{
  LegacyNavData_t *v3; // rbx
  signed int m_NextHidingSpotID; // r12d
  __int64 i; // r13
  __int64 v7; // rbx
  bool v8; // zf
  float v9; // [rsp-Ch] [rbp-6Ch] BYREF
  int v10; // [rsp-8h] [rbp-68h] BYREF
  LegacyNavData_t discardData; // [rsp+0h] [rbp-60h] BYREF

  if ( nFileVersion <= 17 )
  {
    v3 = pOutLegacyData;
    v10 = 0;
    memset(&discardData, 0, 20);
    discardData.m_NextHidingSpotID = 0;
    *&discardData.m_EncounterSpots.m_Size = 0;
    if ( pOutLegacyData == 0 )
      v3 = &v10;
    discardData.m_EncounterSpots.m_Memory.m_pMemory = 0;
    CUtlBuffer::GetType<float>(fileBuffer, &v9);
    v3->m_earliestOccupyTime[0] = v9;
    CUtlBuffer::GetType<float>(fileBuffer, &v9);
    m_NextHidingSpotID = discardData.m_NextHidingSpotID;
    v3->m_earliestOccupyTime[1] = v9;
    for ( i = 40LL * m_NextHidingSpotID - 40; --m_NextHidingSpotID >= 0; i -= 40 )
    {
      v7 = *&discardData.m_EncounterSpots.m_Size + i;
      v8 = (*(*&discardData.m_EncounterSpots.m_Size + i + 36) & 0xC0000000) == 0;
      *(*&discardData.m_EncounterSpots.m_Size + i + 16) = 0;
      if ( v8 )
      {
        CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t,int>::Purge((v7 + 24));
        if ( (*(v7 + 36) & 0xC0000000) == 0 )
          CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t,int>::Purge((v7 + 24));
      }
    }
    discardData.m_NextHidingSpotID = 0;
    if ( (HIDWORD(discardData.m_EncounterSpots.m_Memory.m_pMemory) & 0xC0000000) != 0
      || (CUtlMemory<LegacyNavData_t::EncounterSpotData_t,int>::Purge(&discardData.m_EncounterSpots),
          (HIDWORD(discardData.m_EncounterSpots.m_Memory.m_pMemory) & 0xC0000000) != 0) )
    {
      v10 = 0;
      if ( (HIDWORD(discardData.m_HidingSpots.m_Memory.m_pMemory) & 0xC0000000) != 0 )
        return;
    }
    else
    {
      CUtlMemory<LegacyNavData_t::EncounterSpotData_t,int>::Purge(&discardData.m_EncounterSpots);
      v10 = 0;
      if ( (HIDWORD(discardData.m_HidingSpots.m_Memory.m_pMemory) & 0xC0000000) != 0 )
        return;
    }
    CUtlMemory<LegacyNavData_t::HidingSpotData_t,int>::Purge(&discardData);
    if ( (HIDWORD(discardData.m_HidingSpots.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      CUtlMemory<LegacyNavData_t::HidingSpotData_t,int>::Purge(&discardData);
  }
}


// CNavArea::Load  (line 266, @0x00000000031ece40, libserver.so)
// calls: CNavArea::LoadCore, CNavArea::ConnectivityChanged
// callers: CNavAreaExtended::Load
NavErrorType __fastcall CNavArea::Load(
        CNavArea *const this,
        CUtlBuffer *const rFileBuffer,
        uint nFileVersion,
        uint nSubVersion,
        LegacyNavData_t *pOutLegacyData)
{
  NavErrorType Core; // r12d

  Core = CNavArea::LoadCore(this, rFileBuffer, nFileVersion, nSubVersion, pOutLegacyData);
  CNavArea::ConnectivityChanged(this);
  return Core;
}


// CNavArea::LoadCore  (line 275, @0x00000000031ec760, libserver.so)  // inlines: AddToTail, Alloc, AllocateLaddersAndElevatorsStruct, CNavConnectVector, CNavLadderConnectVector, CUtlVectorUltraConservative, Count, EnsureCapacity, GetFloat, GetInt, GetLadders, GetPlaceDirectory, GetSize, GetType<unsigned int>, GetTypeBin<unsigned int>, GetTypeText<unsigned int>, GetUnsignedInt, GetUnsignedInt64, GetUnsignedShort, Load, LowLevelByteSwap<unsigned int>, NavLaddersAndElevators_t, PeekGet, Realloc, RemoveFlags, StringToNumber<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator&, operator[]
// calls: CUtlBuffer::GetType<unsigned int>, CUtlBuffer::GetType<long long unsigned int>, CUtlBuffer::GetUnsignedChar, CNavMesh::CalcAreaNavHullSupport, CNavPoly::LoadPoly, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckGet, ReadLegacyHidingSpotData, CUtlBuffer::GetType<int>, V_strtoui64, CUtlBuffer::GetType<short unsigned int>, ReadAndDiscardOldApproachAreaData (17 total)
// callers: CNavArea::Load
NavErrorType __fastcall CNavArea::LoadCore(
        CNavArea *const this,
        CUtlBuffer *const rFileBuffer,
        uint nFileVersion,
        uint nSubVersion,
        LegacyNavData_t *pOutLegacyData)
{
  unsigned int v8; // eax
  __int64 v9; // r12
  uint8 v10; // si
  uint8 v11; // al
  NavErrorType result; // eax
  __int64 v13; // rbx
  CNavConnectVector *v14; // r12
  unsigned __int64 v15; // rbx
  int v16; // ebx
  unsigned int v17; // r14d
  char v18; // cl
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rax
  int v22; // r9d
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // rdx
  int m_Get; // edx
  int (**vptr_CNavPoly)(...); // rax
  unsigned int v28; // r13d
  int v29; // eax
  unsigned int *v30; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v31; // rax
  unsigned __int8 UnsignedChar; // al
  uint64 v33; // rax
  int v34; // ebx
  unsigned int v35; // r14d
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // r8
  __int64 *v37; // r12
  int *v38; // rsi
  __int64 v39; // r13
  _DWORD *v40; // rax
  __int64 v41; // rax
  NavLaddersAndElevators_t *v42; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v43; // rax
  __int64 v44; // rax
  int i; // ecx
  CNavPrecacheInfo *m_pPrecacheInfo; // rax
  void (__fastcall *v47)(CNavArea *const, _QWORD); // rbx
  Place v48; // eax
  char nEdge; // [rsp+18h] [rbp-78h]
  unsigned __int64 nEdgea; // [rsp+18h] [rbp-78h]
  char v52; // [rsp+30h] [rbp-60h]
  int v53; // [rsp+30h] [rbp-60h]
  int m_Size; // [rsp+3Ch] [rbp-54h]
  char v55; // [rsp+3Ch] [rbp-54h]
  char v56; // [rsp+3Ch] [rbp-54h]
  unsigned int v57; // [rsp+3Ch] [rbp-54h]
  int nLadderDir; // [rsp+44h] [rbp-4Ch]
  int nLadderDira; // [rsp+44h] [rbp-4Ch]
  unsigned int v62; // [rsp+50h] [rbp-40h] BYREF
  int v63; // [rsp+54h] [rbp-3Ch] BYREF
  unsigned int dest[2]; // [rsp+58h] [rbp-38h] BYREF

  CUtlBuffer::GetType<unsigned int>(rFileBuffer, dest);
  v8 = dest[0];
  this->m_AreaId = dest[0];
  if ( CNavArea::ms_nNextID <= v8 )
    CNavArea::ms_nNextID = v8 + 1;
  if ( nFileVersion <= 8 )
  {
    UnsignedChar = CUtlBuffer::GetUnsignedChar(rFileBuffer);
    v10 = 0;
    this->m_AreaAttributes.m_Flags = UnsignedChar;
    this->m_nGenIndex = 0;
  }
  else if ( nFileVersion <= 0xC )
  {
    CUtlBuffer::GetType<unsigned short>(rFileBuffer, dest);
    v10 = 0;
    v33 = LOWORD(dest[0]);
    this->m_nGenIndex = 0;
    this->m_AreaAttributes.m_Flags = v33;
  }
  else
  {
    if ( nFileVersion <= 0x15 )
    {
      CUtlBuffer::GetType<int>(rFileBuffer, dest);
      vptr_CNavPoly = this->_vptr_CNavPoly;
      this->m_AreaAttributes.m_Flags = dest[0];
      this->m_AreaAttributes.m_Flags &= (vptr_CNavPoly[5])(this);
    }
    else
    {
      CUtlBuffer::GetType<unsigned long long>(rFileBuffer, dest);
      v9 = *dest;
      this->m_AreaAttributes.m_Flags = v9 & (*(this->_vptr_CNavPoly + 5))(this);
    }
    v10 = 0;
    this->m_nGenIndex = 0;
    if ( nFileVersion > 0x1B )
    {
      v11 = CUtlBuffer::GetUnsignedChar(rFileBuffer);
      this->m_nGenIndex = v11;
      v10 = v11;
    }
  }
  this->m_nHullSupport = CNavMesh::CalcAreaNavHullSupport(this->m_rNavMesh, v10);
  result = CNavPoly::LoadPoly(this, rFileBuffer, nFileVersion, nSubVersion);
  if ( result == NavErrorType::NAV_FILE_OK )
  {
    v13 = 0;
    for ( nEdge = 0; nEdge < this->m_nVerts; v13 = ++nEdge )
    {
      CUtlBuffer::GetType<unsigned int>(rFileBuffer, dest);
      v14 = &this->m_connect[v13];
      nLadderDir = dest[0];
      if ( v14->m_pData != 0 )
      {
        if ( dest[0] > v14->m_pData->m_Size )
        {
          v15 = 16LL * dest[0] + 8;
          if ( v15 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
            v14->m_pData = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v14->m_pData, v15);
        }
      }
      else if ( dest[0] > 0 )
      {
        v43 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * dest[0] + 8);
        v14->m_pData = v43;
        v43->m_Size = 0;
LABEL_16:
        v16 = 0;
LABEL_25:
        if ( (rFileBuffer->m_Flags & 1) != 0 )
        {
          v63 = 128;
          v17 = 0;
          if ( CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &v63) )
          {
            *dest = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
            v28 = dest[0];
            v62 = V_strtoui64(*dest, dest, 10);
            v17 = v62;
            if ( dest[0] != v28 )
              rFileBuffer->m_Get += dest[0] - v28;
          }
        }
        else
        {
          v17 = 0;
          if ( CUtlBuffer::CheckGet(rFileBuffer, 4) )
          {
            if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
            {
              m_Get = rFileBuffer->m_Get;
              v29 = m_Get - rFileBuffer->m_nOffset;
              dest[0] = v62;
              v30 = &rFileBuffer->m_Memory.m_pMemory[v29];
              if ( v30 == 0 )
                v30 = &v62;
              LOBYTE(dest[0]) = *(v30 + 3);
              BYTE1(dest[0]) = *(v30 + 2);
              BYTE2(dest[0]) = *(v30 + 1);
              HIBYTE(dest[0]) = *v30;
              v17 = dest[0];
            }
            else
            {
              m_Get = rFileBuffer->m_Get;
              v17 = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
            }
            v18 = -1;
            rFileBuffer->m_Get = m_Get + 4;
            if ( nFileVersion > 0x14 )
            {
LABEL_30:
              CUtlBuffer::GetType<unsigned int>(rFileBuffer, dest);
              v18 = dest[0];
            }
LABEL_19:
            if ( this->m_AreaId != v17 )
            {
              m_pData = v14->m_pData;
              if ( v14->m_pData != 0 )
              {
                v52 = v18;
                m_Size = m_pData->m_Size;
                v20 = 16LL * (m_pData->m_Size + 1) + 8;
                v21 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
                v22 = m_Size;
                v23 = v52;
                if ( v20 > v21 )
                {
                  v53 = m_Size;
                  v55 = v23;
                  v24 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v14->m_pData, v20);
                  v22 = v53;
                  v14->m_pData = v24;
                  v23 = v55;
                }
                else
                {
                  v24 = v14->m_pData;
                }
              }
              else
              {
                v56 = v18;
                v31 = (**g_pMemAlloc)(g_pMemAlloc, 24);
                v22 = 0;
                v23 = v56;
                v14->m_pData = v31;
                v31->m_Size = 0;
                v24 = v14->m_pData;
              }
              v25 = v24 + 16LL * v22;
              *(v25 + 8) = v17;
              *(v25 + 16) = v23;
              ++v14->m_pData->m_Size;
            }
            if ( ++v16 == nLadderDir )
              continue;
            goto LABEL_25;
          }
        }
        v18 = -1;
        if ( nFileVersion > 0x14 )
          goto LABEL_30;
        goto LABEL_19;
      }
      if ( nLadderDir != 0 )
        goto LABEL_16;
    }
    if ( ReadLegacyHidingSpotData(rFileBuffer, nFileVersion, pOutLegacyData)
      && (ReadAndDiscardOldApproachAreaData(rFileBuffer, nFileVersion),
          ReadLegacySpotEncounterData(rFileBuffer, nFileVersion, pOutLegacyData)) )
    {
      if ( nFileVersion <= 4 )
        return NavErrorType::NAV_FILE_OK;
      if ( nFileVersion <= 0x16 )
      {
        CUtlBuffer::GetType<unsigned short>(rFileBuffer, dest);
        m_pPrecacheInfo = this->m_rNavMesh->m_pPrecacheInfo;
        if ( m_pPrecacheInfo != 0 )
        {
          v47 = *(this->_vptr_CNavPoly + 6);
          v48 = CNavPlaceDirectory::IndexToPlace(&m_pPrecacheInfo->m_placeDirectory, dest[0]);
          v47(this, v48);
        }
        if ( nFileVersion <= 6 )
          return NavErrorType::NAV_FILE_OK;
      }
      for ( nLadderDira = 0; nLadderDira != 2; ++nLadderDira )
      {
        v34 = 0;
        CUtlBuffer::GetType<unsigned int>(rFileBuffer, dest);
        v57 = dest[0];
        if ( dest[0] != 0 )
        {
          do
          {
            if ( this->m_pLaddersAndElevators == 0 )
            {
              v42 = operator new(0x20u);
              v42->m_ladders[0].m_pData = 0;
              v42->m_ladders[1].m_pData = 0;
              v42->m_elevatorAreas.m_pData = 0;
              this->m_pLaddersAndElevators = v42;
            }
            CUtlBuffer::GetType<unsigned int>(rFileBuffer, dest);
            v35 = dest[0];
            m_pLaddersAndElevators = this->m_pLaddersAndElevators;
            if ( m_pLaddersAndElevators != 0 )
            {
              v37 = &m_pLaddersAndElevators->m_ladders[nLadderDira];
              v38 = *v37;
              if ( *v37 != 0 )
              {
                v44 = 0;
                for ( i = 0; i < *v38; i = v44 )
                {
                  ++v44;
                  if ( v38[2 * v44] == dest[0] )
                    goto LABEL_56;
                }
                v39 = *v38;
                nEdgea = 8LL * (v39 + 1) + 8;
                if ( nEdgea > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
                {
                  v41 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, *v37, nEdgea);
                  *v37 = v41;
                }
                else
                {
                  v41 = *v37;
                }
              }
              else
              {
                v39 = 0;
                v40 = (**g_pMemAlloc)(g_pMemAlloc, 16);
                *v37 = v40;
                *v40 = 0;
                v41 = *v37;
              }
              *(v41 + 8 * v39 + 8) = v35;
              ++**v37;
            }
LABEL_56:
            ++v34;
          }
          while ( v34 != v57 );
        }
      }
      if ( nFileVersion == 7 )
        return NavErrorType::NAV_FILE_OK;
      ReadLegacyEarliestOccupyTimeData(rFileBuffer, nFileVersion, pOutLegacyData);
      if ( nFileVersion - 19 > 3 )
        return NavErrorType::NAV_FILE_OK;
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      return NavErrorType::NAV_FILE_OK;
    }
    else
    {
      return NavErrorType::NAV_FILE_BAD_VERSION;
    }
  }
  return result;
}


// CNavArea::PostLoad  (line 444, @0x00000000031e8cb0, libserver.so)  // inlines: AddAttributesDynamic, Count, Find, GetLadders, Indices, NavDirOpposite, SetArea, VectorAdd, operator+
// calls: CNavMesh::GetLadderByID, CNavMesh::GetNavAreaByID, Msg
// strings: "CNavArea::PostLoad: Corrupt navigation data. Cannot connect Navigation Areas.\n", "CNavArea::PostLoad: Corrupt navigation ladder data. Cannot connect Navigation Areas.\n"
NavErrorType __fastcall CNavArea::PostLoad(CNavArea *const this)
{
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  float v3; // xmm0_4
  float v4; // xmm1_4
  __int64 (__fastcall *v5)(INavPhysicsInterface *, float *, __int64); // rax
  int v6; // r15d
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  int v8; // r12d
  CNavLadderConnectVector *v9; // r14
  int *m_pData; // rax
  CNavMesh *m_rNavMesh; // rdi
  int *v12; // r13
  unsigned int v13; // r11d
  int m_Size; // r8d
  CNavLadder **m_pMemory; // rcx
  CNavLadder *v16; // r9
  _QWORD *v17; // rcx
  int v18; // edx
  CNavLadder *LadderByID; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v20; // rcx
  int v21; // r14d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v22; // r12
  unsigned int m_nAreaId; // r13d
  CNavArea *NavAreaByID; // rax
  NavErrorType error; // [rsp+8h] [rbp-58h]
  int i; // [rsp+Ch] [rbp-54h]
  int v28; // [rsp+14h] [rbp-4Ch]
  unsigned int nIda; // [rsp+18h] [rbp-48h]
  CNavArea *nId; // [rsp+18h] [rbp-48h]
  float v31[16]; // [rsp+20h] [rbp-40h] BYREF

  m_pPhysicsInterface = this->m_rNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface != 0 )
  {
    v3 = this->m_vCenter.z + 35.5;
    v4 = this->m_vCenter.x + 0.0;
    v5 = *(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 4);
    v31[1] = this->m_vCenter.y + 0.0;
    v31[2] = v3;
    v31[0] = v4;
    if ( v5(m_pPhysicsInterface, v31, 12321) != 0 )
      this->m_AttributeDynamicFlags |= 1u;
  }
  v6 = 0;
  error = NavErrorType::NAV_FILE_OK;
  do
  {
    m_pLaddersAndElevators = this->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators == 0 )
      goto LABEL_19;
    v8 = 0;
    v9 = &m_pLaddersAndElevators->m_ladders[v6];
    m_pData = v9->m_pData;
    if ( v9->m_pData != 0 )
    {
LABEL_7:
      if ( v8 >= *m_pData )
        goto LABEL_19;
      goto LABEL_8;
    }
    while ( v8 < 0 )
    {
LABEL_8:
      m_rNavMesh = this->m_rNavMesh;
      v12 = &m_pData[2 * v8];
      v13 = v12[2];
      m_Size = m_rNavMesh->m_Ladders.m_Size;
      if ( m_Size > 0 )
      {
        m_pMemory = m_rNavMesh->m_Ladders.m_Memory.m_pMemory;
        v16 = *(v12 + 1);
        if ( *m_pMemory == v16 )
          goto LABEL_14;
        v17 = m_pMemory + 1;
        v18 = 0;
        while ( ++v18 != m_Size )
        {
          if ( *v17++ == v16 )
          {
            if ( v18 != -1 )
              goto LABEL_14;
            break;
          }
        }
      }
      nIda = v12[2];
      LadderByID = CNavMesh::GetLadderByID(m_rNavMesh, v13);
      v13 = nIda;
      *(v12 + 1) = LadderByID;
LABEL_14:
      if ( v13 != 0 && *(v12 + 1) == 0 )
      {
        Msg("CNavArea::PostLoad: Corrupt navigation ladder data. Cannot connect Navigation Areas.\n");
        error = NavErrorType::NAV_FILE_CORRUPT_DATA;
      }
      m_pData = v9->m_pData;
      ++v8;
      if ( v9->m_pData != 0 )
        goto LABEL_7;
    }
LABEL_19:
    ++v6;
  }
  while ( v6 != 2 );
  nId = this;
  for ( i = 2; i != 6; ++i )
  {
    v20 = nId->m_connect[0].m_pData;
    if ( v20 != 0 )
    {
      v28 = v20->m_Size;
      if ( v20->m_Size != 0 )
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = v20 + 2 * v21;
          m_nAreaId = v22->m_Elements[0].m_nAreaId;
          NavAreaByID = CNavMesh::GetNavAreaByID(this->m_rNavMesh, m_nAreaId);
          v22->m_Elements[0].m_pArea = NavAreaByID;
          if ( m_nAreaId != 0 && NavAreaByID == 0 )
          {
            Msg("CNavArea::PostLoad: Corrupt navigation data. Cannot connect Navigation Areas.\n");
            error = NavErrorType::NAV_FILE_CORRUPT_DATA;
          }
          if ( v22->m_Elements[0].m_nBackEdge == -1 )
          {
            ++v21;
            v22->m_Elements[0].m_nBackEdge = i & 3;
            if ( v21 == v28 )
              break;
          }
          else if ( ++v21 == v28 )
          {
            break;
          }
          v20 = nId->m_connect[0].m_pData;
        }
      }
    }
    nId = (nId + 8);
  }
  (*(this->_vptr_CNavPoly + 4))(this);
  return error;
}


// CNavMesh::GetFilename  (line 532, @0x00000000031e8f10, libserver.so)  // inlines: V_strlen
// calls: GetVPKFilename
// callers: CommandNavSave, CNavGenerator::UpdateGeneration, CNavMesh::TestFilesWritable, CNavMesh::Dump, CNavMesh::SaveNavMesh
// globals: CNavMesh::GetFilename(char const*)::filename
const char *__fastcall CNavMesh::GetFilename(const CNavMesh *const this, const char *pMapName)
{
  char *VPKFilename; // rax
  int v3; // eax

  VPKFilename = GetVPKFilename(pMapName);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 23))(
    g_pFullFileSystem,
    VPKFilename,
    "GAME",
    CNavMesh::GetFilename(char const*)const::filename,
    260,
    0,
    0);
  v3 = strlen(CNavMesh::GetFilename(char const*)const::filename);
  if ( v3 <= 2 )
    return 0;
  CNavMesh::GetFilename(char const*)const::filename[v3 - 3] = 110;
  CNavMesh::GetFilename(char const*)const::filename[v3 - 2] = 97;
  CNavMesh::GetFilename(char const*)const::filename[v3 - 1] = 118;
  return CNavMesh::GetFilename(char const*)const::filename;
}


// WarnIfMeshNeedsAnalysis  (line 578, @0x00000000031e8fd0, libserver.so)
// calls: Warning
// callers: CNavMesh::BuildFromNavGen
// strings: "The nav mesh needs a full nav_analyze\n"
void __fastcall WarnIfMeshNeedsAnalysis(const CNavMesh *const navMesh)
{
  if ( !navMesh->m_bIsAnalyzed )
    Warning("The nav mesh needs a full nav_analyze\n");
}


// BumpFileHistory  (line 599, @0x00000000031e82f0, libserver.so)  // inlines: MakeHistoryFilename
// calls: V_snprintf, __stack_chk_fail
// callers: CNavMesh::SaveNavMesh
// strings: "%s%02d"
void __fastcall BumpFileHistory(const char *pFilename, int nHistoryCount)
{
  unsigned int v3; // ebx
  int v4; // ebx
  char historyName[1024]; // [rsp+0h] [rbp-840h] BYREF
  char historyNameNext[1032]; // [rsp+400h] [rbp-440h] BYREF
  unsigned __int64 v7; // [rsp+808h] [rbp-38h]

  v3 = 99;
  v7 = __readfsqword(0x28u);
  if ( nHistoryCount <= 99 )
    v3 = nHistoryCount;
  V_snprintf(historyName, 1024, "%s%02d", pFilename, v3);
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, historyName, 0) != 0 )
    (*(g_pFullFileSystem->_vptr_IAppSystem + 25))(g_pFullFileSystem, historyName, 0);
  v4 = v3 - 1;
  if ( v4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        V_snprintf(historyName, 1024, "%s%02d", pFilename, v4);
        V_snprintf(historyNameNext, 1024, "%s%02d", pFilename, v4 + 1);
        if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, historyName, 0) != 0 )
          break;
        if ( --v4 == 0 )
          goto LABEL_10;
      }
      (*(g_pFullFileSystem->_vptr_IAppSystem + 26))(g_pFullFileSystem, historyName, historyNameNext, 0);
      --v4;
    }
    while ( v4 != 0 );
  }
LABEL_10:
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, pFilename, 0) != 0 )
    (*(g_pFullFileSystem->_vptr_IAppSystem + 26))(g_pFullFileSystem, pFilename, historyName, 0);
}


// CNavMesh::TestFilesWritable  (line 632, @0x00000000031e8ff0, libserver.so)  // inlines: COM_FixSlashes, V_strlen, _V_strcpy, strcpy
// calls: CNavMesh::GetFilename, strlen, __memcpy_chk, Warning, __stack_chk_fail
// callers: CNavEditor::CommandNavDeleteMarked, CNavEditor::CommandNavDelete, CNavEditor::CommandNavSplitAA, CNavEditor::CommandNavSplit, CNavEditor::CommandNavMerge, CNavEditor::CommandNavBeginArea, CNavEditor::CommandNavConnect, CNavEditor::CommandNavDisconnect, CNavEditor::CommandNavSplice, CNavEditor::CommandNavToggleAttribute, CNavEditor::CommandNavCornerRaise, CNavEditor::CommandNavCornerLower (14 total)
// strings: "*******************************************\n", "** ERROR: .NAV FILE NOT WRITABLE!!!      **\n", "** YOU MUST CHECK IT OUT FROM PERFORCE!  **\n", "Couldn't test if nav file was writable, file name too short!", "** ERROR: _NAV.TXT FILE NOT WRITABLE!!!  **\n", "Couldn't test if nav file was writable, file name pointer is null!"
bool __fastcall CNavMesh::TestFilesWritable(CNavMesh *const this, const char *pMapName)
{
  char m_bNavFilesEverWritable; // bl
  const char *Filename; // rax
  const char *v6; // r13
  char v7; // cl
  char *i; // rdx
  size_t v9; // rax
  int v10; // r14d
  double v11; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm0_8
  double v17; // xmm0_8
  char dumpFileName[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v19; // [rsp+108h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  m_bNavFilesEverWritable = this->m_bNavFilesEverWritable;
  if ( m_bNavFilesEverWritable == 0 )
  {
    Filename = CNavMesh::GetFilename(this, pMapName);
    v6 = Filename;
    if ( Filename == 0 )
    {
      Warning("Couldn't test if nav file was writable, file name pointer is null!");
      return m_bNavFilesEverWritable;
    }
    v7 = *Filename;
    for ( i = Filename; *i != 0; v7 = *i )
    {
      while ( v7 != 92 )
      {
        v7 = *++i;
        if ( *i == 0 )
          goto LABEL_9;
      }
      *i++ = 47;
    }
LABEL_9:
    v9 = strlen(Filename);
    if ( v9 <= 4 )
    {
      Warning("Couldn't test if nav file was writable, file name too short!");
      return m_bNavFilesEverWritable;
    }
    v10 = v9;
    __memcpy_chk(dumpFileName, v6, v9 + 1, 260);
    strcpy(&dumpFileName[v10 - 4], "_nav.txt");
    if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, v6, 0) == 0
      || (m_bNavFilesEverWritable = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 11))(
                                      &g_pFullFileSystem->IBaseFileSystem,
                                      v6,
                                      0)) != 0 )
    {
      if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, dumpFileName, 0) == 0
        || (m_bNavFilesEverWritable = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 11))(
                                        &g_pFullFileSystem->IBaseFileSystem,
                                        dumpFileName,
                                        0)) != 0 )
      {
        this->m_bNavFilesEverWritable = 1;
        return 1;
      }
      v16 = Warning("*******************************************\n");
      v17 = Warning("*******************************************\n", v16);
      v13 = Warning("** ERROR: _NAV.TXT FILE NOT WRITABLE!!!  **\n", v17);
    }
    else
    {
      v11 = Warning("*******************************************\n");
      v12 = Warning("*******************************************\n", v11);
      v13 = Warning("** ERROR: .NAV FILE NOT WRITABLE!!!      **\n", v12);
    }
    v14 = Warning("** YOU MUST CHECK IT OUT FROM PERFORCE!  **\n", v13);
    v15 = Warning("*******************************************\n", v14);
    Warning("*******************************************\n", v15);
  }
  return m_bNavFilesEverWritable;
}


// CNavMesh::SaveNavMesh  (line 689, @0x00000000031ed280, libserver.so)  // inlines: COM_FixSlashes, GetInt, WarnIfMeshNeedsAnalysis, ~CUtlBuffer, ~CUtlMemory
// calls: __cxa_guard_acquire, CNavMesh::TestFilesWritable, CNavMesh::GetFilename, GetVPKFilename, DevMsg(char const*,...), CUtlBuffer::CUtlBuffer, CNavMesh::SaveNavMeshToBuffer, BumpFileHistory, Warning, CUtlMemory<unsigned char, int>::Purge, CNavMesh::Dump, ConVarRef::ConVarRef (15 total)
// callers: CommandNavSave, CNavGenerator::UpdateGeneration
// strings: "Size of vpk file '%s' is %u bytes.\n", "Unable to save %d bytes to %s\n", "Size of nav file '%s' is %u bytes.\n", "Number of nav areas is: %u.\n", "The nav mesh needs a full nav_analyze\n", "nav_save_history"
// globals: `guard variable for'CNavMesh::SaveNavMesh(char const*)::nav_save_history, CNavMesh::SaveNavMesh(char const*)::nav_save_history
bool __fastcall CNavMesh::SaveNavMesh(CNavMesh *const this, const char *pMapName)
{
  char *Filename; // rax
  const char *v5; // r12
  char i; // dl
  char *VPKFilename; // rax
  const char *v8; // r13
  char v9; // r13
  int v11; // eax
  unsigned int nVpkSize; // [rsp+Ch] [rbp-84h]
  CUtlBuffer rFileBuffer; // [rsp+10h] [rbp-80h] BYREF

  if ( `guard variable for'CNavMesh::SaveNavMesh(char const*)::nav_save_history == 0
    && __cxa_guard_acquire(&`guard variable for'CNavMesh::SaveNavMesh(char const*)::nav_save_history) != 0 )
  {
    ConVarRef::ConVarRef(&CNavMesh::SaveNavMesh(char const*)::nav_save_history, "nav_save_history");
    __cxa_guard_release(&`guard variable for'CNavMesh::SaveNavMesh(char const*)::nav_save_history);
  }
  if ( !CNavMesh::TestFilesWritable(this, pMapName) )
    return 0;
  if ( !this->m_bIsAnalyzed )
    Warning("The nav mesh needs a full nav_analyze\n");
  Filename = CNavMesh::GetFilename(this, pMapName);
  v5 = Filename;
  if ( Filename == 0 )
    return 0;
  for ( i = *Filename; *Filename != 0; i = *Filename )
  {
    if ( i == 92 )
      *Filename = 47;
    ++Filename;
  }
  VPKFilename = GetVPKFilename(pMapName);
  v8 = VPKFilename;
  if ( VPKFilename == 0 )
    return 0;
  nVpkSize = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, VPKFilename, 0);
  DevMsg("Size of vpk file '%s' is %u bytes.\n", v8, nVpkSize);
  CUtlBuffer::CUtlBuffer(&rFileBuffer, 4096, 0x100000, 0);
  CNavMesh::SaveNavMeshToBuffer(this, nVpkSize, &rFileBuffer);
  BumpFileHistory(v5, CNavMesh::SaveNavMesh(char const*)::nav_save_history.m_pConVarState->m_Value.m_nValue);
  v9 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(&g_pFullFileSystem->IBaseFileSystem, v5, 0, &rFileBuffer);
  if ( v9 != 0 )
  {
    v11 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, v5, 0);
    DevMsg("Size of nav file '%s' is %u bytes.\n", v5, v11);
    DevMsg("Number of nav areas is: %u.\n", this->m_NavAreas.m_Size);
    (*(this->_vptr_CNavMesh + 6))(this);
    v9 = CNavMesh::Dump(this, pMapName);
  }
  else
  {
    Warning("Unable to save %d bytes to %s\n", rFileBuffer.m_nMaxPut, v5);
  }
  CUtlMemory<unsigned char,int>::Purge(&rFileBuffer.m_Memory);
  return v9;
}


// CNavMesh::SaveNavMeshToBuffer  (line 745, @0x00000000031ea970, libserver.so)  // inlines: CNavPlaceDirectory, CUtlMemory, CUtlVector, CUtlVectorBase, PeekPut, Purge, PutType<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedInt, PutUnsignedShort, RemoveAll, operator[], ~CNavPlaceDirectory, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlBuffer::PutType<unsigned int>, CUtlBuffer::Printf, CNavPlaceDirectory::Reset, CNavPlaceDirectory::AddPlace, CNavPlaceDirectory::Save, CNavLadder::Save, CNavGenParams::Save, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavMesh::SaveNavMesh
// strings: "%hu"
void __fastcall CNavMesh::SaveNavMeshToBuffer(
        CNavMesh *const this,
        unsigned int nVpkSize,
        CUtlBuffer *const rFileBuffer)
{
  unsigned int v6; // eax
  bool m_bIsAnalyzed; // r12
  int m_Size; // eax
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  Place v11; // eax
  __int64 i; // r12
  CNavArea *v13; // rdi
  __int64 j; // r12
  CNavPlaceDirectory placeDirectory; // [rsp+0h] [rbp-50h] BYREF

  CUtlBuffer::PutType<unsigned int>(rFileBuffer, 0xFEEDFACE);
  CUtlBuffer::PutType<unsigned int>(rFileBuffer, 0x1Cu);
  v6 = (*(this->_vptr_CNavMesh + 12))(this);
  CUtlBuffer::PutType<unsigned int>(rFileBuffer, v6);
  CUtlBuffer::PutType<unsigned int>(rFileBuffer, nVpkSize);
  m_bIsAnalyzed = this->m_bIsAnalyzed;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%hu", m_bIsAnalyzed);
  }
  else if ( CUtlBuffer::CheckPut(rFileBuffer, 1) )
  {
    rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_bIsAnalyzed;
    ++rFileBuffer->m_Put;
    CUtlBuffer::AddNullTermination(rFileBuffer);
  }
  placeDirectory.m_Directory.m_Size = 0;
  placeDirectory.m_Directory.m_Memory.m_pMemory = 0;
  placeDirectory.m_Directory.m_Memory.m_nAllocationCount = 0;
  placeDirectory.m_Directory.m_Memory.m_nGrowSize = 0;
  CNavPlaceDirectory::Reset(&placeDirectory);
  m_Size = this->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v9 = 0;
    v10 = 8LL * (m_Size - 1) + 8;
    do
    {
      v11 = (*(this->m_NavAreas.m_Memory.m_pMemory[v9 / 8]->_vptr_CNavPoly + 7))(this->m_NavAreas.m_Memory.m_pMemory[v9 / 8]);
      CNavPlaceDirectory::AddPlace(&placeDirectory, v11);
      v9 += 8LL;
    }
    while ( v9 != v10 );
  }
  CNavPlaceDirectory::Save(&placeDirectory, &this->m_PlaceDatabase, rFileBuffer);
  (*(this->_vptr_CNavMesh + 15))(this, rFileBuffer);
  CUtlBuffer::PutType<unsigned int>(rFileBuffer, this->m_NavAreas.m_Size);
  for ( i = 0; this->m_NavAreas.m_Size > i; ++i )
  {
    v13 = this->m_NavAreas.m_Memory.m_pMemory[i];
    (*(v13->_vptr_CNavPoly + 8))(v13, rFileBuffer, &placeDirectory);
  }
  CUtlBuffer::PutType<unsigned int>(rFileBuffer, this->m_Ladders.m_Size);
  for ( j = 0; this->m_Ladders.m_Size > j; ++j )
    CNavLadder::Save(this->m_Ladders.m_Memory.m_pMemory[j], rFileBuffer, 0x1Cu);
  CNavGenParams::Save(&this->m_NavGenParams, rFileBuffer);
  (*(this->_vptr_CNavMesh + 13))(this, rFileBuffer);
  placeDirectory.m_Directory.m_Size = 0;
  if ( (placeDirectory.m_Directory.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&placeDirectory.m_Directory.m_Memory);
    if ( (placeDirectory.m_Directory.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&placeDirectory.m_Directory.m_Memory);
  }
}


// NavAreaDumpSortFn  (line 861, @0x00000000031e8620, libserver.so)  // inlines: GetCenter, operator[]
// callers: CNavMesh::Dump
int __fastcall NavAreaDumpSortFn(const int *pLeft, const int *pRight)
{
  CNavArea **m_pMemory; // rax
  float *v3; // rdx
  float *v4; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  __int64 v11; // rax

  m_pMemory = TheNavMesh->m_NavAreas.m_Memory.m_pMemory;
  v3 = m_pMemory[*pLeft];
  v4 = m_pMemory[*pRight];
  v5 = v3[14];
  v6 = v4[14];
  v7 = v3[15];
  v8 = v3[16];
  v9 = v4[15];
  v10 = v4[16];
  if ( v6 <= v5 )
  {
    LODWORD(v11) = 1;
    if ( v5 > v6 )
      return v11;
    if ( v9 <= v7 )
    {
      if ( v7 > v9 )
        return v11;
      if ( v10 <= v8 )
        return v8 > v10;
    }
  }
  LODWORD(v11) = -1;
  return v11;
}


// CNavMesh::Dump  (line 905, @0x00000000031ece70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Element, Purge, RemoveAll, Sort, V_strlen, V_swap<int>, _V_strcpy, operator[], strcpy, ~CUtlBuffer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CNavMesh::GetFilename, strlen, __memcpy_chk, CUtlBuffer::CUtlBuffer, CUtlBuffer::Printf, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, V_qsort, DevMsg(char const*,...), CUtlMemory<unsigned char, int>::Purge, Warning, NavAreaDumpSortFn, CUtlMemory<int, int>::Purge (14 total)
// callers: CNavMesh::SaveNavMesh
// strings: "----------------------------------------------\n", "         Valve Nav Mesh Text Dump v1.0        \n", "Number of Nav Areas: %d\n", "Size of nav dump file '%s' is %u bytes.\n", "Unable to save %d bytes to %s\n", "Nav file name too short."
// globals: NavAreaDumpSortFn(int const*,int const*)
bool __fastcall CNavMesh::Dump(CNavMesh *const this, const char *pMapName)
{
  const char *v3; // rax
  const char *v4; // rbx
  size_t v5; // rax
  int v6; // r12d
  int m_Size; // ebx
  __int64 i; // rax
  int v9; // r15d
  unsigned __int64 v10; // rbx
  CNavArea *v11; // rdi
  char v12; // bl
  int v13; // eax
  int v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r15
  int *v19; // r13
  int *v20; // rbx
  int v21; // eax
  int v22; // [rsp+14h] [rbp-1BCh]
  CUtlVector<int,CUtlMemory<int,int> > navIndices; // [rsp+20h] [rbp-1B0h] BYREF
  CUtlBuffer fileBuffer; // [rsp+40h] [rbp-190h] BYREF
  char fileName[264]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v26; // [rsp+198h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  v3 = CNavMesh::GetFilename(this, pMapName);
  v4 = v3;
  if ( v3 == 0 )
    return 0;
  v5 = strlen(v3);
  if ( v5 <= 4 )
  {
    v12 = 0;
    Warning("Nav file name too short.");
    return v12;
  }
  v6 = v5;
  __memcpy_chk(fileName, v4, v5 + 1, 260);
  strcpy(&fileBuffer.m_Byteswap + v6 + 4, "_nav.txt");
  CUtlBuffer::CUtlBuffer(&fileBuffer, 0, 0, 1);
  CUtlBuffer::Printf(&fileBuffer, "----------------------------------------------\n");
  CUtlBuffer::Printf(&fileBuffer, "         Valve Nav Mesh Text Dump v1.0        \n");
  CUtlBuffer::Printf(&fileBuffer, "----------------------------------------------\n");
  CUtlBuffer::Printf(&fileBuffer, "\n");
  m_Size = this->m_NavAreas.m_Size;
  CUtlBuffer::Printf(&fileBuffer, "Number of Nav Areas: %d\n", m_Size);
  CUtlBuffer::Printf(&fileBuffer, "\n");
  navIndices.m_Size = 0;
  navIndices.m_Memory.m_pMemory = 0;
  navIndices.m_Memory.m_nAllocationCount = 0;
  navIndices.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&navIndices, m_Size);
  for ( i = 0; m_Size > i; ++i )
    navIndices.m_Memory.m_pMemory[i] = i;
  v9 = navIndices.m_Size;
  if ( navIndices.m_Size <= 1 )
    goto LABEL_9;
  if ( navIndices.m_Memory.m_pMemory != 0 )
  {
    V_qsort(navIndices.m_Memory.m_pMemory, navIndices.m_Size, 4, NavAreaDumpSortFn);
    goto LABEL_8;
  }
  v15 = navIndices.m_Size - 1;
  while ( 2 )
  {
    v16 = 0;
    v22 = v15 - 1;
    v17 = 4LL * (v15 - 1) + 4;
    while ( 1 )
    {
      v18 = v16 + 4;
      v19 = (navIndices.m_Memory.m_pMemory + v16 + 4);
      v20 = (navIndices.m_Memory.m_pMemory + v16);
      if ( NavAreaDumpSortFn(v20, v19) < 0 )
        break;
      if ( v18 == v17 )
        goto LABEL_25;
LABEL_22:
      v16 = v18;
    }
    v21 = *v20;
    *v20 = *v19;
    *v19 = v21;
    if ( v18 != v17 )
      goto LABEL_22;
LABEL_25:
    v15 = v22;
    if ( v22 != -1 )
    {
      while ( v15 <= 0 )
      {
        if ( --v15 == -1 )
          goto LABEL_8;
      }
      continue;
    }
    break;
  }
LABEL_8:
  v9 = navIndices.m_Size;
LABEL_9:
  if ( v9 != 0 )
  {
    v10 = 0;
    do
    {
      v11 = this->m_NavAreas.m_Memory.m_pMemory[navIndices.m_Memory.m_pMemory[v10 / 4]];
      (*(v11->_vptr_CNavPoly + 13))(v11, &fileBuffer);
      v10 += 4LL;
    }
    while ( v10 != 4LL * (v9 - 1) + 4 );
  }
  v12 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(
          &g_pFullFileSystem->IBaseFileSystem,
          fileName,
          0,
          &fileBuffer);
  if ( v12 != 0 )
  {
    v13 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, fileName, 0);
    DevMsg("Size of nav dump file '%s' is %u bytes.\n", fileName, v13);
  }
  else
  {
    Warning("Unable to save %d bytes to %s\n", fileBuffer.m_nMaxPut, fileName);
  }
  navIndices.m_Size = 0;
  if ( (navIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&navIndices.m_Memory);
    if ( (navIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&navIndices.m_Memory);
  }
  CUtlMemory<unsigned char,int>::Purge(&fileBuffer.m_Memory);
  return v12;
}


// CNavMesh::CreateAndLoadNavMesh  (line 968, @0x00000000031e96d0, libserver.so)
// calls: CNavMesh::MountNavData, CUtlString::operator=, ChangeTheNavMesh, __stack_chk_fail
// callers: CommandNavLoad, CNavGameSystem::LoadNavForSpawnGroup
CNavMesh *__fastcall CNavMesh::CreateAndLoadNavMesh(const char *pMapName, CNavMesh *(*pNavMeshFactory)(void))
{
  CNavMesh *v4; // rax
  CNavMesh *v5; // rbx
  int v6; // r12d
  int nFileSize; // [rsp+4h] [rbp-13Ch] BYREF
  void *pNavData; // [rsp+8h] [rbp-138h] BYREF
  char filename[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v11; // [rsp+118h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  if ( !CNavMesh::MountNavData(pMapName, &pNavData, filename, 256, &nFileSize) )
    return 0;
  v4 = pNavMeshFactory();
  if ( v4 == 0 )
    return 0;
  v5 = v4;
  if ( pNavData != 0 )
  {
    CUtlString::operator=(&v4->m_NavFilename, filename);
    ChangeTheNavMesh(v5);
    v6 = (*(v5->_vptr_CNavMesh + 9))(v5, pMapName, pNavData, nFileSize, 0);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pNavData);
    if ( v6 != 0 )
    {
      (*(v5->_vptr_CNavMesh + 1))(v5);
      return 0;
    }
  }
  return v5;
}


// CNavMesh::CreateAndLoadNavMeshPrecache  (line 1003, @0x00000000031e97c0, libserver.so)
// calls: CNavMesh::MountNavData, CUtlString::operator=, __stack_chk_fail
// callers: CNavGameSystem::PrecacheNavForSpawnGroup
bool __fastcall CNavMesh::CreateAndLoadNavMeshPrecache(
        const char *pMapName,
        CNavMesh *(*pNavMeshFactory)(void),
        CNavPrecacheInfo *pPrecacheInfoOut)
{
  CNavMesh *v7; // rax
  CNavMesh *v8; // r13
  int v9; // r12d
  int nFileSize; // [rsp+4h] [rbp-13Ch] BYREF
  void *pNavData; // [rsp+8h] [rbp-138h] BYREF
  char filename[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v13; // [rsp+118h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  if ( pPrecacheInfoOut == 0 )
    return 0;
  if ( !CNavMesh::MountNavData(pMapName, &pNavData, filename, 256, &nFileSize) )
    return 0;
  v7 = pNavMeshFactory();
  v8 = v7;
  if ( v7 == 0 || pNavData == 0 )
    return 0;
  CUtlString::operator=(&v7->m_NavFilename, filename);
  v9 = (*(v8->_vptr_CNavMesh + 9))(v8, pMapName, pNavData, nFileSize, 1);
  if ( v8->m_pPrecacheInfo != 0 )
    (*(pPrecacheInfoOut->_vptr_CNavPrecacheInfo + 2))(pPrecacheInfoOut);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pNavData);
  (*(v8->_vptr_CNavMesh + 1))(v8);
  return v9 == 0;
}


// CNavMesh::MountNavData  (line 1040, @0x00000000031e94c0, libserver.so)  // inlines: Clear, Detach, DetachMemory, GetBool, GetInt, ~CUtlBuffer, ~CUtlMemory
// calls: V_snprintf, V_FixSlashes, CUtlBuffer::CUtlBuffer, CUtlBuffer::AddNullTermination, CUtlMemory<unsigned char, int>::Purge, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CNavMesh::CreateAndLoadNavMesh, CNavMesh::CreateAndLoadNavMeshPrecache
// strings: "maps\\%s.nav", "nav_try_load_nav2", "maps\\%s.nav2_legacy"
// globals: `guard variable for'CNavMesh::MountNavData(char const*,void **,char *,int,int *)::nav_try_load_nav2, CNavMesh::MountNavData(char const*,void **,char *,int,int *)::nav_try_load_nav2
bool __fastcall CNavMesh::MountNavData(
        const char *pMapName,
        void **ppNavDataOut,
        char *pFilenameOut,
        int nFilenameSize,
        int *pNavFileSizeOut)
{
  char v9; // bl
  bool v10; // zf
  unsigned __int8 *m_pMemory; // r13
  CUtlBuffer fileBuffer; // [rsp+10h] [rbp-80h] BYREF

  if ( `guard variable for'CNavMesh::MountNavData(char const*,void **,char *,int,int *)::nav_try_load_nav2 == 0
    && __cxa_guard_acquire(&`guard variable for'CNavMesh::MountNavData(char const*,void **,char *,int,int *)::nav_try_load_nav2) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNavMesh::MountNavData(char const*,void **,char *,int,int *)::nav_try_load_nav2,
      "nav_try_load_nav2");
    __cxa_guard_release(&`guard variable for'CNavMesh::MountNavData(char const*,void **,char *,int,int *)::nav_try_load_nav2);
  }
  *ppNavDataOut = 0;
  *pFilenameOut = 0;
  *pNavFileSizeOut = 0;
  if ( CNavMesh::MountNavData(char const*,void **,char *,int,int *)::nav_try_load_nav2.m_pConVarState->m_Value.m_nValue == 0
    || (V_snprintf(pFilenameOut, nFilenameSize, "maps\\%s.nav2_legacy", pMapName),
        (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, pFilenameOut, "MOD") == 0) )
  {
    V_snprintf(pFilenameOut, nFilenameSize, "maps\\%s.nav", pMapName);
  }
  V_FixSlashes(pFilenameOut, 47);
  CUtlBuffer::CUtlBuffer(&fileBuffer, 4096, 0x100000, 8);
  v9 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
         &g_pFullFileSystem->IBaseFileSystem,
         pFilenameOut,
         "GAME",
         &fileBuffer,
         0,
         0,
         0);
  if ( v9 != 0 )
  {
    v10 = (fileBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    *pNavFileSizeOut = fileBuffer.m_Put;
    if ( v10 )
    {
      m_pMemory = fileBuffer.m_Memory.m_pMemory;
      fileBuffer.m_Memory.m_nAllocationCount = 0;
      fileBuffer.m_Memory.m_pMemory = 0;
    }
    else
    {
      m_pMemory = 0;
    }
    fileBuffer.m_Get = 0;
    fileBuffer.m_Put = 0;
    fileBuffer.m_Error = 0;
    fileBuffer.m_nOffset = 0;
    fileBuffer.m_nMaxPut = -1;
    CUtlBuffer::AddNullTermination(&fileBuffer);
    *ppNavDataOut = m_pMemory;
  }
  CUtlMemory<unsigned char,int>::Purge(&fileBuffer.m_Memory);
  return v9;
}


// CNavMesh::LoadNavMesh  (line 1088, @0x00000000031ead60, libserver.so)  // inlines: AddToTail, CNavPlaceDirectory, CNavPrecacheInfo, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavLadder*>, Element, Encompass, EnsureCapacity, Extent, GetExtent, GetUnsignedInt, GrowMemory, Init, String, WarnIfMeshNeedsAnalysis, memcpy, operator=, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlVector
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::SeekPut, CUtlBuffer::GetType<unsigned int>, CUtlString::Get, Msg, CUtlMemory<unsigned char, int>::Purge, CNavMesh::AllocateGrid, DevMsg(char const*,...), operator new, CNavPlaceDirectory::Reset, GetVPKFilename, DevWarning(char const*,...) (24 total)
// strings: "Invalid navigation file '%s'.\n", "-- Nav file version = %d --\n", "-- Nav file sub-version = %d --\n", "Number of nav areas is: %u.\n", "Unknown navigation file version.\n", "Unknown sub-version number\n" (10 total)
NavErrorType __fastcall CNavMesh::LoadNavMesh(
        CNavMesh *const this,
        const char *pMapName,
        void *pNavData,
        int nNavDataSize,
        bool bPrecacheOnly)
{
  CNavPrecacheInfo *m_pPrecacheInfo; // rdi
  const char *v10; // rax
  NavErrorType v11; // ebx
  uint v13; // r15d
  double v14; // xmm0_8
  unsigned int v15; // esi
  bool v16; // zf
  double v17; // xmm0_8
  uint32 m_nFileSubVersion; // ebx
  bool v19; // cc
  uint32 m_nGrowSize; // eax
  CNavArea **v21; // rsi
  __int64 v22; // rax
  CNavArea **v23; // rax
  float v24; // xmm4_4
  int i; // r14d
  float *v26; // rbx
  float v27; // xmm0_4
  float v28; // xmm1_4
  float x; // xmm2_4
  float y; // xmm4_4
  float z; // xmm3_4
  int m_Size; // eax
  unsigned __int64 v33; // rbx
  __int64 v34; // r14
  CNavPrecacheInfo *v35; // r13
  unsigned int v36; // ebx
  char *VPKFilename; // rax
  const char *v38; // rsi
  CNavPrecacheInfo *v39; // rax
  vec_t v40; // ebx
  CNavLadder **v41; // rax
  CNavLadder *v42; // r14
  __int64 v43; // rbx
  int v44; // eax
  CNavArea **m_pMemory; // rbx
  CNavArea **v46; // rax
  vec_t v47; // [rsp+10h] [rbp-F0h]
  unsigned int nCounta; // [rsp+18h] [rbp-E8h]
  int nCountb; // [rsp+18h] [rbp-E8h]
  unsigned int dest; // [rsp+2Ch] [rbp-D4h] BYREF
  uint nVersion; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v54; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v55; // [rsp+3Ch] [rbp-C4h] BYREF
  Extent meshExtent; // [rsp+40h] [rbp-C0h]
  Extent areaExtent; // [rsp+60h] [rbp-A0h] BYREF
  CUtlBuffer fileBuffer; // [rsp+80h] [rbp-80h] BYREF

  m_pPrecacheInfo = this->m_pPrecacheInfo;
  if ( m_pPrecacheInfo == 0 )
  {
    v35 = operator new(0x28u);  // new CNavPrecacheInfo (size matches)
    v35->m_placeDirectory.m_Directory.m_Size = 0;
    v35->_vptr_CNavPrecacheInfo = off_47AE070;  // vptr: CNavPrecacheInfo
    v35->m_placeDirectory.m_Directory.m_Memory.m_pMemory = 0;
    v35->m_placeDirectory.m_Directory.m_Memory.m_nAllocationCount = 0;
    v35->m_placeDirectory.m_Directory.m_Memory.m_nGrowSize = 0;
    CNavPlaceDirectory::Reset(&v35->m_placeDirectory);
    this->m_pPrecacheInfo = v35;
    m_pPrecacheInfo = v35;
  }
  (*(m_pPrecacheInfo->_vptr_CNavPrecacheInfo + 3))(m_pPrecacheInfo);
  (*(this->_vptr_CNavMesh + 7))(this);
  CUtlBuffer::CUtlBuffer(&fileBuffer, pNavData, nNavDataSize, 8);
  CUtlBuffer::SeekPut(&fileBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, nNavDataSize);
  CUtlBuffer::GetType<unsigned int>(&fileBuffer, &dest);
  if ( fileBuffer.m_Error != 0 || dest != -17958194 )
  {
    v10 = CUtlString::Get(&this->m_NavFilename);
    Msg("Invalid navigation file '%s'.\n", v10);
LABEL_6:
    v11 = NavErrorType::NAV_FILE_INVALID;
    goto LABEL_7;
  }
  CUtlBuffer::GetType<unsigned int>(&fileBuffer, &nVersion);
  v13 = nVersion;
  *&v14 = Msg("-- Nav file version = %d --\n", nVersion).m128_u64[0];
  if ( fileBuffer.m_Error != 0 || v13 > 0x1C )
  {
    Msg("Unknown navigation file version.\n", v14);
LABEL_59:
    v11 = NavErrorType::NAV_FILE_BAD_VERSION;
    goto LABEL_7;
  }
  this->m_nFileSubVersion = 0;
  v15 = 0;
  if ( v13 > 9 )
  {
    CUtlBuffer::GetType<unsigned int>(&fileBuffer, &v53);
    v15 = v53;
    v16 = fileBuffer.m_Error == 0;
    this->m_nFileSubVersion = v53;
    if ( !v16 )
    {
      Msg("Error reading sub-version number.\n");
      goto LABEL_6;
    }
  }
  *&v17 = Msg("-- Nav file sub-version = %d --\n", v15).m128_u64[0];
  m_nFileSubVersion = this->m_nFileSubVersion;
  if ( m_nFileSubVersion > (*(this->_vptr_CNavMesh + 12))(this, v17) )
  {
    Msg("Unknown sub-version number\n");
    goto LABEL_59;
  }
  if ( v13 <= 3 )
  {
    this->m_bIsAnalyzed = 0;
    goto LABEL_15;
  }
  CUtlBuffer::GetType<unsigned int>(&fileBuffer, &v54);
  v36 = v54;
  VPKFilename = GetVPKFilename(pMapName);
  if ( VPKFilename == 0 )
    goto LABEL_6;
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, VPKFilename, 0) == v36 )
  {
    if ( v13 > 0xF )
      goto LABEL_66;
  }
  else if ( v13 > 0xF )
  {
    v38 = "The Navigation Mesh was built using a different version of this map.\n";
    goto LABEL_65;
  }
  v38 = "The Navigation Mesh was built with an old server dll - reanalyze the mesh!\n";
LABEL_65:
  DevWarning("%s", v38);
  this->m_bIsOutOfDate = 1;
  if ( v13 <= 0xD )
  {
    this->m_bIsAnalyzed = 0;
    if ( v13 <= 4 )
      goto LABEL_15;
    goto LABEL_67;
  }
LABEL_66:
  this->m_bIsAnalyzed = CUtlBuffer::GetUnsignedChar(&fileBuffer) != 0;
LABEL_67:
  v39 = this->m_pPrecacheInfo;
  if ( v39 != 0 )
    CNavPlaceDirectory::Load(&v39->m_placeDirectory, &this->m_PlaceDatabase, &fileBuffer, v13);
LABEL_15:
  (*(this->_vptr_CNavMesh + 16))(this, &fileBuffer);
  v11 = NavErrorType::NAV_FILE_OK;
  if ( !bPrecacheOnly )
  {
    CUtlBuffer::GetType<unsigned int>(&fileBuffer, &v55);
    meshExtent.lo.x = 3.4028235e38;
    meshExtent.lo.y = 3.4028235e38;
    meshExtent.lo.z = 3.4028235e38;
    meshExtent.hi.x = -3.4028235e38;
    v19 = v55 <= this->m_NavAreas.m_Memory.m_nAllocationCount;
    meshExtent.hi.y = -3.4028235e38;
    nCounta = v55;
    meshExtent.hi.z = -3.4028235e38;
    if ( !v19 )
    {
      m_nGrowSize = this->m_NavAreas.m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = this->m_NavAreas.m_Memory.m_pMemory;
          v46 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v55);
          this->m_NavAreas.m_Memory.m_pMemory = v46;
          if ( m_pMemory != 0 )
            memcpy(v46, m_pMemory, 8LL * this->m_NavAreas.m_Memory.m_nAllocationCount);
          this->m_NavAreas.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v21 = this->m_NavAreas.m_Memory.m_pMemory;
          v22 = *g_pMemAlloc;
          if ( v21 != 0 )
            v23 = (*(v22 + 8))(g_pMemAlloc, v21, 8LL * v55);
          else
            v23 = (*v22)(g_pMemAlloc, 8LL * v55);
          this->m_NavAreas.m_Memory.m_pMemory = v23;
        }
        this->m_NavAreas.m_Memory.m_nAllocationCount = nCounta;
      }
    }
    (*(this->_vptr_CNavMesh + 2))(this, nCounta);
    for ( i = 0; i != nCounta; ++i )
    {
      v26 = (*(this->_vptr_CNavMesh + 4))(this);
      (*(*v26 + 72LL))(v26, &fileBuffer, v13, this->m_nFileSubVersion, 0);
      v27 = v26[20];
      areaExtent.lo.x = v27;
      areaExtent.lo.y = v26[21];
      areaExtent.lo.z = v26[22];
      v28 = v26[23];
      areaExtent.hi.x = v28;
      areaExtent.hi.y = v26[24];
      areaExtent.hi.z = v26[25];
      x = meshExtent.lo.x;
      if ( meshExtent.lo.x > v27 )
      {
        meshExtent.lo.x = v27;
        x = v27;
      }
      if ( v27 > meshExtent.hi.x )
        meshExtent.hi.x = v27;
      y = meshExtent.lo.y;
      if ( meshExtent.lo.y > areaExtent.lo.y )
      {
        meshExtent.lo.y = areaExtent.lo.y;
        y = areaExtent.lo.y;
      }
      if ( areaExtent.lo.y > meshExtent.hi.y )
        meshExtent.hi.y = areaExtent.lo.y;
      z = meshExtent.lo.z;
      if ( meshExtent.lo.z > areaExtent.lo.z )
      {
        meshExtent.lo.z = areaExtent.lo.z;
        z = areaExtent.lo.z;
      }
      if ( areaExtent.lo.z > meshExtent.hi.z )
        meshExtent.hi.z = areaExtent.lo.z;
      if ( x > v28 )
        meshExtent.lo.x = v28;
      if ( v28 > meshExtent.hi.x )
        meshExtent.hi.x = v28;
      if ( y > areaExtent.hi.y )
        meshExtent.lo.y = areaExtent.hi.y;
      if ( areaExtent.hi.y > meshExtent.hi.y )
        meshExtent.hi.y = areaExtent.hi.y;
      if ( z > areaExtent.hi.z )
        meshExtent.lo.z = areaExtent.hi.z;
      if ( areaExtent.hi.z > meshExtent.hi.z )
        meshExtent.hi.z = areaExtent.hi.z;
      (*(*v26 + 32LL))(v26);
    }
    CNavMesh::AllocateGrid(this, meshExtent.hi.x, meshExtent.lo.y, meshExtent.hi.y, v24);
    m_Size = this->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v33 = 0;
      v34 = 8LL * (m_Size - 1) + 8;
      do
      {
        (*(this->_vptr_CNavMesh + 28))(this, this->m_NavAreas.m_Memory.m_pMemory[v33 / 8]);
        v33 += 8LL;
      }
      while ( v33 != v34 );
    }
    if ( v13 <= 5 )
      goto LABEL_53;
    CUtlBuffer::GetType<unsigned int>(&fileBuffer, &areaExtent);
    v40 = areaExtent.lo.x;
    v47 = areaExtent.lo.x;
    CUtlMemory<CNavLadder *,int>::EnsureCapacity(&this->m_Ladders.m_Memory, SLODWORD(areaExtent.lo.x));
    if ( v40 != 0.0 )
    {
      nCountb = 0;
      do
      {
        v42 = operator new(0x68u);
        CNavLadder::CNavLadder(v42, this);
        CNavLadder::Load(v42, &fileBuffer, v13);
        v43 = this->m_Ladders.m_Size;
        v44 = this->m_Ladders.m_Size;
        if ( v43 == this->m_Ladders.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavLadder *,int>::Grow(&this->m_Ladders.m_Memory, 1);
          v44 = this->m_Ladders.m_Size;
        }
        this->m_Ladders.m_Size = v44 + 1;
        v41 = &this->m_Ladders.m_Memory.m_pMemory[v43];
        if ( v41 != 0 )
          *v41 = v42;
        ++nCountb;
      }
      while ( nCountb != LODWORD(v47) );
    }
    if ( v13 <= 0x18 )
    {
LABEL_53:
      this->m_NavGenParams.m_useProjectDefaults = 0;
      this->m_NavGenParams.m_flTileSize = 128.0;
      this->m_NavGenParams.m_flCellSize = 2.0;
      this->m_NavGenParams.m_flCellHeight = 2.0;
      this->m_NavGenParams.m_nRegionMinSize = 8;
      this->m_NavGenParams.m_nRegionMergeSize = 20;
      this->m_NavGenParams.m_flDetailSampleDist = 120.0;
      this->m_NavGenParams.m_flDetailSampleMaxError = 2.0;
      this->m_NavGenParams.m_nEdgeMaxLen = 1200;
      this->m_NavGenParams.m_flEdgeMaxError = 51.0;
      this->m_NavGenParams.m_nVertsPerPoly = 4;
      this->m_NavGenParams.m_nAgentNumHulls = 1;
      this->m_NavGenParams.m_flAgentRadius[0] = 15.0;
      this->m_NavGenParams.m_flAgentHeight[1] = 71.0;
      this->m_NavGenParams.m_flAgentMaxClimb = 20.0;
      this->m_NavGenParams.m_nAgentMaxSlope = 50;
      this->m_NavGenParams.m_flAgentMaxJumpDownDist = 240.0;
      this->m_NavGenParams.m_flAgentMaxJumpHorizDist1 = 64.0;
      this->m_NavGenParams.m_flAgentMaxJumpUpDist = 0.0;
    }
    else
    {
      CNavGenParams::Load(&this->m_NavGenParams, v13, &fileBuffer);
    }
    (*(this->_vptr_CNavMesh + 14))(this, &fileBuffer);
    v11 = (*(this->_vptr_CNavMesh + 10))(this, v13);
    if ( !this->m_bIsAnalyzed )
      Warning("The nav mesh needs a full nav_analyze\n");
    (*(this->_vptr_CNavMesh + 6))(this);
    DevMsg("Number of nav areas is: %u.\n", this->m_NavAreas.m_Size);
    if ( this->m_NavAreas.m_Size == 0 )
      goto LABEL_6;
  }
LABEL_7:
  CUtlMemory<unsigned char,int>::Purge(&fileBuffer.m_Memory);
  return v11;
}


// OneWayLink_t::Compare  (line 1312, @0x00000000031ed4d0, libserver.so)
int __fastcall OneWayLink_t::Compare(const OneWayLink_t *lhs, const OneWayLink_t *rhs)
{
  int result; // eax

  result = 799063683 * ((lhs->pDestArea - rhs->pDestArea) >> 3);
  if ( result == 0 )
    return lhs->backEdge - rhs->backEdge;
  return result;
}


// CNavMesh::PostLoadNavMesh  (line 1325, @0x00000000031eb640, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Compare, ConvertToExternalMemory, CopyConstruct<OneWayLink_t>, Count, Element, GrowMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, Sort, V_swap<OneWayLink_t>, end, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: V_qsort, CNavArea::AddIncomingConnection, CNavArea::CalcBoundaryEdges, CNavArea::CalcBoundaryVerts, CNavMesh::ValidateNavAreaConnections, CUtlMemory<OneWayLink_t, int>::Purge, __stack_chk_fail, CUtlMemory<OneWayLink_t, int>::Grow, _Unwind_Resume
// globals: OneWayLink_t::Compare(OneWayLink_t const*,OneWayLink_t const*)
// local variable allocation has failed, the output may be wrong!
NavErrorType __fastcall CNavMesh::PostLoadNavMesh(CNavMesh *const this, unsigned int nVersion)
{
  __int64 v2; // r12
  int v3; // ebx
  CNavArea *v5; // rdi
  __int64 m_Size; // rax
  __int64 v7; // r15
  CNavArea *v8; // rbx
  __int64 v9; // rax
  CNavConnectVector *v10; // rax
  int v11; // r12d
  int *m_pData; // rdi
  int v13; // edx
  int *v14; // rax
  NavEdgeIndex v15; // r13
  CNavArea *v16; // r14
  int *v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rsi
  int v20; // eax
  int v21; // edx
  OneWayLink_t *v22; // rax
  int v23; // eax
  __int64 v24; // r12
  int v25; // ebx
  CNavArea **m_pMemory; // rbx
  CNavArea **v27; // r12
  CNavArea **v28; // rbx
  CNavArea **j; // r12
  INavObstructionManager *m_pObstructionManager; // rdi
  bool v31; // sf
  uint32 v32; // eax
  int v34; // r15d
  __int64 i; // rdx
  __int64 v36; // rdi
  char *v37; // rax
  char *v38; // rdx
  __int64 v39; // r8
  int v40; // esi
  __int64 v41; // r11
  char v42; // si
  char v43; // cl
  __int64 oit; // [rsp+8h] [rbp-3078h]
  int **v46; // [rsp+20h] [rbp-3060h]
  NavEdgeIndex nEdge; // [rsp+2Fh] [rbp-3051h]
  CUtlVectorFixedGrowable<OneWayLink_t,512ul> oneWayLinks; // [rsp+30h] [rbp-3050h] BYREF
  unsigned __int64 v49; // [rsp+3048h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  if ( this->m_NavAreas.m_Size <= 0 )
  {
    oneWayLinks.m_Memory.m_pMemory = &oneWayLinks.m_Memory.m_FixedMemory;
    oneWayLinks.m_Memory.m_nAllocationCount = 512;
    oneWayLinks.m_Memory.m_nGrowSize = 0x80000000;
    m_Size = this->m_NavAreas.m_Size;
    goto LABEL_33;
  }
  v2 = 0;
  v3 = 0;
  do
  {
    ++v3;
    v5 = this->m_NavAreas.m_Memory.m_pMemory[v2++];
    (*(v5->_vptr_CNavPoly + 10))(v5, *&nVersion);
    m_Size = this->m_NavAreas.m_Size;
  }
  while ( m_Size > v3 );
  oneWayLinks.m_Size = 0;
  oneWayLinks.m_Memory.m_nAllocationCount = 512;
  oneWayLinks.m_Memory.m_nGrowSize = 0x80000000;
  oneWayLinks.m_Memory.m_pMemory = &oneWayLinks.m_Memory.m_FixedMemory;
  if ( m_Size > 0 )
  {
    v7 = 0;
    oit = 0;
    while ( 1 )
    {
      v8 = this->m_NavAreas.m_Memory.m_pMemory[oit];
      if ( v8->m_nVerts <= 0 )
        goto LABEL_24;
      v9 = 0;
      nEdge = 0;
      do
      {
        v10 = &v8->m_connect[v9];
        v11 = 0;
        m_pData = v10->m_pData;
        v46 = v10;
        if ( v10->m_pData == 0 )
          goto LABEL_22;
LABEL_9:
        if ( v11 >= *m_pData )
          goto LABEL_23;
        do
        {
          v13 = 0;
          v14 = &m_pData[4 * v11];
          v15 = *(v14 + 16);
          v16 = *(v14 + 1);
          v17 = v16->m_connect[v15].m_pData;
          v18 = (v17 + 2);
          while ( v17 != 0 )
          {
            if ( v13 >= *v17 )
              goto LABEL_16;
LABEL_12:
            v19 = *v18;
            v18 += 2;
            if ( *(v19 + 212) == v8->m_AreaId )
              goto LABEL_20;
            ++v13;
          }
          if ( v13 < 0 )
            goto LABEL_12;
LABEL_16:
          if ( v7 == oneWayLinks.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<OneWayLink_t,int>::Grow(&oneWayLinks.m_Memory, 1);
            v20 = oneWayLinks.m_Size;
          }
          else
          {
            v20 = v7;
          }
          v21 = v20 + 1;
          oneWayLinks.m_Size = v20 + 1;
          v22 = &oneWayLinks.m_Memory.m_pMemory[v7];
          if ( v22 != 0 )
          {
            v22->pDestArea = v16;
            v22->pArea = v8;
            v7 = oneWayLinks.m_Size;
            v22->backEdge = v15;
            v22->edge = nEdge;
            m_pData = *v46;
LABEL_20:
            ++v11;
            goto LABEL_21;
          }
          v7 = v21;
          ++v11;
          m_pData = *v46;
LABEL_21:
          if ( m_pData != 0 )
            goto LABEL_9;
LABEL_22:
          ;
        }
        while ( v11 < 0 );
LABEL_23:
        v9 = ++nEdge;
      }
      while ( nEdge < v8->m_nVerts );
LABEL_24:
      v23 = oit++;
      if ( this->m_NavAreas.m_Size <= v23 + 1 )
      {
        if ( v7 > 1 )
        {
          if ( oneWayLinks.m_Memory.m_pMemory != 0 )
          {
            V_qsort(oneWayLinks.m_Memory.m_pMemory, v7, 24, OneWayLink_t::Compare);
          }
          else
          {
            v34 = v7 - 1;
            do
            {
              if ( v34 <= 0 )
              {
                --v34;
              }
              else
              {
                --v34;
                for ( i = 0; ; i = v36 )
                {
                  v36 = i + 24;
                  v37 = &oneWayLinks.m_Memory.m_pMemory[1] + i;
                  v38 = oneWayLinks.m_Memory.m_pMemory + i;
                  v39 = *v38;
                  v40 = 799063683 * ((*v38 - *v37) >> 3);
                  if ( v40 == 0 )
                    v40 = v38[17] - v37[17];
                  if ( v40 < 0 )
                  {
                    v41 = *(v38 + 1);
                    v42 = v38[16];
                    v43 = v38[17];
                    *v38 = *v37;
                    *(v38 + 1) = *(v37 + 1);
                    *(v38 + 2) = *(v37 + 2);
                    *v37 = v39;
                    *(v37 + 1) = v41;
                    v37[16] = v42;
                    v37[17] = v43;
                  }
                  if ( 8 * (3LL * v34 + 3) == v36 )
                    break;
                }
              }
            }
            while ( v34 != -1 );
          }
          LODWORD(v7) = oneWayLinks.m_Size;
        }
        v24 = 0;
        v25 = 0;
        if ( v7 > 0 )
        {
          do
          {
            CNavArea::AddIncomingConnection(
              oneWayLinks.m_Memory.m_pMemory[v24].pDestArea,
              oneWayLinks.m_Memory.m_pMemory[v24].pArea,
              oneWayLinks.m_Memory.m_pMemory[v24].backEdge,
              oneWayLinks.m_Memory.m_pMemory[v24].edge);
            ++v25;
            ++v24;
          }
          while ( oneWayLinks.m_Size > v25 );
        }
        m_Size = this->m_NavAreas.m_Size;
        break;
      }
    }
  }
LABEL_33:
  m_pMemory = this->m_NavAreas.m_Memory.m_pMemory;
  v27 = &m_pMemory[m_Size];
  if ( m_pMemory != v27 )
  {
    do
    {
      if ( *m_pMemory != 0 )
        CNavArea::CalcBoundaryEdges(*m_pMemory);
      ++m_pMemory;
    }
    while ( v27 != m_pMemory );
    v28 = this->m_NavAreas.m_Memory.m_pMemory;
    for ( j = &v28[this->m_NavAreas.m_Size]; j != v28; ++v28 )
    {
      if ( *v28 != 0 )
        CNavArea::CalcBoundaryVerts(*v28);
    }
  }
  CNavMesh::ValidateNavAreaConnections(this);
  m_pObstructionManager = this->m_pObstructionManager;
  if ( m_pObstructionManager != 0 )
    (*(m_pObstructionManager->_vptr_INavObstructionManager + 1))(m_pObstructionManager);
  v31 = oneWayLinks.m_Memory.m_nAllocationCount < 0;
  this->m_bIsLoaded = 1;
  if ( v31 )
  {
    v32 = oneWayLinks.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v32 = oneWayLinks.m_Memory.m_nGrowSize & 0xC0000000;
    if ( oneWayLinks.m_Memory.m_pMemory != &oneWayLinks.m_Memory.m_FixedMemory )
    {
      if ( oneWayLinks.m_Memory.m_pMemory != 0 && v32 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return NavErrorType::NAV_FILE_OK;
    }
  }
  if ( v32 == 0 )
    CUtlMemory<OneWayLink_t,int>::Purge(&oneWayLinks.m_Memory);
  return NavErrorType::NAV_FILE_OK;
}


// CNavArea::Dump  (line 1420, @0x00000000031e9220, libserver.so)  // inlines: Count, GetLadders
// calls: CUtlBuffer::Printf
// strings: "NAV AREA\n", "Center Position: %f, %f, %f\n", "Edge [ %d / %d ] connection count: %d\n", "%s Ladder Count: %d\n", "Base Attribute Flags: 0x%016llx\n", "Dynamic Attribute Flags: 0x%08x\n"
void __fastcall CNavArea::Dump(const CNavArea *const this, CUtlBuffer *const fileBuffer)
{
  int v4; // ebx
  int m_nVerts; // ecx
  int v6; // edx
  int m_Size; // r8d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  char *v9; // r14
  int v10; // ebx
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v12; // rax
  int v13; // ecx
  const char *v14; // rdx
  char ladderDirNames[2][16]; // [rsp+0h] [rbp-40h] BYREF

  v4 = 0;
  CUtlBuffer::Printf(fileBuffer, "\n");
  CUtlBuffer::Printf(fileBuffer, "NAV AREA\n");
  CUtlBuffer::Printf(fileBuffer, "--------\n");
  CUtlBuffer::Printf(
    fileBuffer,
    "Center Position: %f, %f, %f\n",
    this->m_vCenter.x,
    this->m_vCenter.y,
    this->m_vCenter.z);
  m_nVerts = this->m_nVerts;
  v6 = 0;
  if ( m_nVerts > 0 )
  {
    do
    {
      m_pData = this->m_connect[v6].m_pData;
      if ( m_pData != 0 )
        m_Size = m_pData->m_Size;
      else
        m_Size = 0;
      ++v4;
      CUtlBuffer::Printf(fileBuffer, "Edge [ %d / %d ] connection count: %d\n", v6, m_nVerts, m_Size);
      m_nVerts = this->m_nVerts;
      v6 = v4;
    }
    while ( v4 < m_nVerts );
  }
  *&ladderDirNames[0][0] = 0x7055u;
  v9 = ladderDirNames[0];
  v10 = 0;
  *&ladderDirNames[1][0] = 0x6E776F44u;
  do
  {
    m_pLaddersAndElevators = this->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 && (v12 = m_pLaddersAndElevators->m_ladders[v10].m_pData) != 0 )
      v13 = v12->m_Size;
    else
      v13 = 0;
    v14 = v9;
    ++v10;
    v9 += 16;
    CUtlBuffer::Printf(fileBuffer, "%s Ladder Count: %d\n", v14, v13);
  }
  while ( v10 != 2 );
  CUtlBuffer::Printf(fileBuffer, "Base Attribute Flags: 0x%016llx\n", this->m_AreaAttributes.m_Flags);
  CUtlBuffer::Printf(fileBuffer, "Dynamic Attribute Flags: 0x%08x\n", this->m_AttributeDynamicFlags);
}


// CNavGenParams::Save  (line 1463, @0x00000000031ea240, libserver.so)  // inlines: LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekPut, PutFloat, PutInt, PutType<float>, PutType<int>, PutTypeBin<float>, PutTypeBin<int>, PutUnsignedInt, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::PutType<unsigned int>, CUtlBuffer::Printf, CUtlBuffer::PutType<float>, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CNavMesh::SaveNavMeshToBuffer
void __fastcall CNavGenParams::Save(CNavGenParams *const this, CUtlBuffer *const rFileBuffer)
{
  _BOOL4 m_useProjectDefaults; // r13d
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int m_nRegionMinSize; // r13d
  int m_nRegionMergeSize; // r13d
  float v10; // xmm1_4
  float v11; // xmm1_4
  int m_nEdgeMaxLen; // r13d
  float v13; // xmm1_4
  int m_nVertsPerPoly; // r13d
  int m_nAgentNumHulls; // r13d
  __int64 i; // r13
  float v17; // xmm1_4
  int m_nAgentMaxSlope; // r13d
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  int v22; // eax
  int v23; // eax
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // rdx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int m_Put; // eax
  unsigned __int8 *v33; // rdx
  unsigned __int8 *v34; // rdx
  unsigned __int8 *v35; // rdx
  unsigned __int8 *v36; // rdx
  unsigned __int8 *v37; // rdx
  unsigned __int8 *v38; // rdx
  unsigned __int8 *v39; // rdx
  _BOOL4 v40; // [rsp+18h] [rbp-48h]
  int v41; // [rsp+1Ch] [rbp-44h]
  int v42; // [rsp+20h] [rbp-40h]
  int v43; // [rsp+24h] [rbp-3Ch]
  int v44; // [rsp+28h] [rbp-38h]
  int v45; // [rsp+2Ch] [rbp-34h]
  int v46; // [rsp+30h] [rbp-30h]
  int v47; // [rsp+34h] [rbp-2Ch]
  int v48; // [rsp+38h] [rbp-28h]
  int v49; // [rsp+3Ch] [rbp-24h]
  int v50; // [rsp+3Ch] [rbp-24h]
  int v51; // [rsp+3Ch] [rbp-24h]
  int v52; // [rsp+3Ch] [rbp-24h]
  int v53; // [rsp+3Ch] [rbp-24h]
  int v54; // [rsp+3Ch] [rbp-24h]
  int v55; // [rsp+3Ch] [rbp-24h]
  int v56; // [rsp+3Ch] [rbp-24h]
  int v57; // [rsp+3Ch] [rbp-24h]

  CUtlBuffer::PutType<unsigned int>(rFileBuffer, 5u);
  m_useProjectDefaults = this->m_useProjectDefaults;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", this->m_useProjectDefaults);
  }
  else
  {
    v40 = this->m_useProjectDefaults;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        m_Put = rFileBuffer->m_Put;
        v33 = &rFileBuffer->m_Memory.m_pMemory[m_Put - rFileBuffer->m_nOffset];
        if ( v33 != 0 )
        {
          LOBYTE(v51) = HIBYTE(v40);
          BYTE1(v51) = BYTE2(v40);
          BYTE2(v51) = BYTE1(v40);
          HIBYTE(v51) = v40;
          *v33 = v51;
          m_Put = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_useProjectDefaults;
        m_Put = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flTileSize, v5);
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flCellSize, v6);
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flCellHeight, v7);
  m_nRegionMinSize = this->m_nRegionMinSize;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", m_nRegionMinSize);
  }
  else
  {
    v41 = this->m_nRegionMinSize;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v31 = rFileBuffer->m_Put;
        v34 = &rFileBuffer->m_Memory.m_pMemory[v31 - rFileBuffer->m_nOffset];
        if ( v34 != 0 )
        {
          LOBYTE(v52) = HIBYTE(v41);
          BYTE1(v52) = BYTE2(v41);
          BYTE2(v52) = BYTE1(v41);
          HIBYTE(v52) = v41;
          *v34 = v52;
          v31 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nRegionMinSize;
        v31 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v31 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  m_nRegionMergeSize = this->m_nRegionMergeSize;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", m_nRegionMergeSize);
  }
  else
  {
    v42 = this->m_nRegionMergeSize;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v30 = rFileBuffer->m_Put;
        v35 = &rFileBuffer->m_Memory.m_pMemory[v30 - rFileBuffer->m_nOffset];
        if ( v35 != 0 )
        {
          LOBYTE(v53) = HIBYTE(v42);
          BYTE1(v53) = BYTE2(v42);
          BYTE2(v53) = BYTE1(v42);
          HIBYTE(v53) = v42;
          *v35 = v53;
          v30 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nRegionMergeSize;
        v30 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v30 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flDetailSampleDist, v10);
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flDetailSampleMaxError, v11);
  m_nEdgeMaxLen = this->m_nEdgeMaxLen;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", m_nEdgeMaxLen);
  }
  else
  {
    v43 = this->m_nEdgeMaxLen;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v29 = rFileBuffer->m_Put;
        v36 = &rFileBuffer->m_Memory.m_pMemory[v29 - rFileBuffer->m_nOffset];
        if ( v36 != 0 )
        {
          LOBYTE(v54) = HIBYTE(v43);
          BYTE1(v54) = BYTE2(v43);
          BYTE2(v54) = BYTE1(v43);
          HIBYTE(v54) = v43;
          *v36 = v54;
          v29 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nEdgeMaxLen;
        v29 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v29 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flEdgeMaxError, v13);
  m_nVertsPerPoly = this->m_nVertsPerPoly;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", m_nVertsPerPoly);
  }
  else
  {
    v44 = this->m_nVertsPerPoly;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v28 = rFileBuffer->m_Put;
        v37 = &rFileBuffer->m_Memory.m_pMemory[v28 - rFileBuffer->m_nOffset];
        if ( v37 != 0 )
        {
          LOBYTE(v55) = HIBYTE(v44);
          BYTE1(v55) = BYTE2(v44);
          BYTE2(v55) = BYTE1(v44);
          HIBYTE(v55) = v44;
          *v37 = v55;
          v28 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nVertsPerPoly;
        v28 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v28 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  m_nAgentNumHulls = this->m_nAgentNumHulls;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", m_nAgentNumHulls);
  }
  else
  {
    v45 = this->m_nAgentNumHulls;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v27 = rFileBuffer->m_Put;
        v38 = &rFileBuffer->m_Memory.m_pMemory[v27 - rFileBuffer->m_nOffset];
        if ( v38 != 0 )
        {
          LOBYTE(v56) = HIBYTE(v45);
          BYTE1(v56) = BYTE2(v45);
          BYTE2(v56) = BYTE1(v45);
          HIBYTE(v56) = v45;
          *v38 = v56;
          v27 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nAgentNumHulls;
        v27 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v27 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  for ( i = 0; i != 12; i += 4 )
  {
    if ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(rFileBuffer, "%f", *(this->m_flAgentRadius + i));
    }
    else
    {
      v46 = *(this->m_flAgentRadius + i);
      if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
      {
        if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
        {
          v23 = rFileBuffer->m_Put;
          v24 = &rFileBuffer->m_Memory.m_pMemory[v23 - rFileBuffer->m_nOffset];
          if ( v24 != 0 )
          {
            LOBYTE(v49) = HIBYTE(v46);
            BYTE1(v49) = BYTE2(v46);
            BYTE2(v49) = BYTE1(v46);
            HIBYTE(v49) = v46;
            *v24 = v49;
            v23 = rFileBuffer->m_Put;
          }
        }
        else
        {
          *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = v46;
          v23 = rFileBuffer->m_Put;
        }
        rFileBuffer->m_Put = v23 + 4;
        CUtlBuffer::AddNullTermination(rFileBuffer);
      }
    }
  }
  LOBYTE(i) = 0;
  do
  {
    if ( (rFileBuffer->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(rFileBuffer, "%f", *(this->m_flAgentHeight + i));
    }
    else
    {
      v47 = *(this->m_flAgentHeight + i);
      if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
      {
        if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
        {
          v22 = rFileBuffer->m_Put;
          v25 = &rFileBuffer->m_Memory.m_pMemory[v22 - rFileBuffer->m_nOffset];
          if ( v25 != 0 )
          {
            LOBYTE(v50) = HIBYTE(v47);
            BYTE1(v50) = BYTE2(v47);
            BYTE2(v50) = BYTE1(v47);
            HIBYTE(v50) = v47;
            *v25 = v50;
            v22 = rFileBuffer->m_Put;
          }
        }
        else
        {
          *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = v47;
          v22 = rFileBuffer->m_Put;
        }
        rFileBuffer->m_Put = v22 + 4;
        CUtlBuffer::AddNullTermination(rFileBuffer);
      }
    }
    i += 4;
  }
  while ( i != 12 );
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flAgentMaxClimb, v17);
  m_nAgentMaxSlope = this->m_nAgentMaxSlope;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(rFileBuffer, "%d", m_nAgentMaxSlope);
  }
  else
  {
    v48 = this->m_nAgentMaxSlope;
    if ( CUtlBuffer::CheckPut(rFileBuffer, 4) )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        v26 = rFileBuffer->m_Put;
        v39 = &rFileBuffer->m_Memory.m_pMemory[v26 - rFileBuffer->m_nOffset];
        if ( v39 != 0 )
        {
          LOBYTE(v57) = HIBYTE(v48);
          BYTE1(v57) = BYTE2(v48);
          BYTE2(v57) = BYTE1(v48);
          HIBYTE(v57) = v48;
          *v39 = v57;
          v26 = rFileBuffer->m_Put;
        }
      }
      else
      {
        *&rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Put - rFileBuffer->m_nOffset] = m_nAgentMaxSlope;
        v26 = rFileBuffer->m_Put;
      }
      rFileBuffer->m_Put = v26 + 4;
      CUtlBuffer::AddNullTermination(rFileBuffer);
    }
  }
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flAgentMaxJumpDownDist, v19);
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flAgentMaxJumpHorizDist1, v20);
  CUtlBuffer::PutType<float>(rFileBuffer, this->m_flAgentMaxJumpUpDist, v21);
}


// CNavGenParams::Load  (line 1502, @0x00000000031e98d0, libserver.so)  // inlines: GetFloat, GetInt, GetType<int>, GetTypeBin<int>, GetTypeText<int>, GetUnsignedInt, LowLevelByteSwap<int>, PeekGet, StringToNumber<int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::GetType<float>, CUtlBuffer::GetType<int>, CUtlBuffer::CheckArbitraryPeekGet, CNavGenParams::operator==, Warning, CUtlBuffer::CheckGet, CUtlBuffer::GetType<unsigned int>, V_strtoi64
// callers: CNavMesh::LoadNavMesh
// strings: "CNavGenParams - Nav mesh requests project default generation parameters but actual parame
void __fastcall CNavGenParams::Load(CNavGenParams *const this, int nMeshVersion, CUtlBuffer *const rFileBuffer)
{
  int v5; // r14d
  bool v6; // al
  float v7; // xmm0_4
  bool v8; // al
  __int64 v9; // rdx
  bool v10; // al
  int m_Get; // ecx
  __int64 v12; // r15
  int v13; // r15d
  unsigned __int8 *v14; // rax
  int v15; // [rsp+0h] [rbp-40h] BYREF
  int nIncrement; // [rsp+4h] [rbp-3Ch] BYREF
  _QWORD dest[7]; // [rsp+8h] [rbp-38h] BYREF

  if ( nMeshVersion > 27 )
  {
    CUtlBuffer::GetType<unsigned int>(rFileBuffer, dest);
    v5 = dest[0];
    if ( SLODWORD(dest[0]) <= 2 )
    {
      v6 = 0;
    }
    else
    {
      CUtlBuffer::GetType<int>(rFileBuffer, dest);
      v6 = LODWORD(dest[0]) != 0;
    }
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  this->m_useProjectDefaults = v6;
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flTileSize = *dest;
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flCellSize = *dest;
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flCellHeight = *dest;
  if ( v5 > 4 )
  {
    v12 = 0;
    CUtlBuffer::GetType<int>(rFileBuffer, dest);
    this->m_nRegionMinSize = dest[0];
    CUtlBuffer::GetType<int>(rFileBuffer, dest);
    this->m_nRegionMergeSize = dest[0];
    CUtlBuffer::GetType<float>(rFileBuffer, dest);
    this->m_flDetailSampleDist = *dest;
    CUtlBuffer::GetType<float>(rFileBuffer, dest);
    this->m_flDetailSampleMaxError = *dest;
    CUtlBuffer::GetType<int>(rFileBuffer, dest);
    this->m_nEdgeMaxLen = dest[0];
    CUtlBuffer::GetType<float>(rFileBuffer, dest);
    this->m_flEdgeMaxError = *dest;
    CUtlBuffer::GetType<int>(rFileBuffer, dest);
    this->m_nVertsPerPoly = dest[0];
    CUtlBuffer::GetType<int>(rFileBuffer, dest);
    this->m_nAgentNumHulls = dest[0];
    do
    {
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      *(this->m_flAgentRadius + v12) = *dest;
      v12 += 4;
    }
    while ( v12 != 12 );
    LOBYTE(v12) = 0;
    do
    {
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      *(this->m_flAgentHeight + v12) = *dest;
      v12 += 4;
    }
    while ( v12 != 12 );
  }
  else
  {
    this->m_flAgentRadius[0] = -1.0;
    this->m_flAgentHeight[0] = -1.0;
    this->m_flAgentRadius[1] = -1.0;
    this->m_flAgentHeight[1] = -1.0;
    this->m_flAgentRadius[2] = -1.0;
    this->m_flAgentHeight[2] = -1.0;
    if ( v5 == 4 )
    {
      CUtlBuffer::GetType<int>(rFileBuffer, dest);
      this->m_nAgentNumHulls = LODWORD(dest[0]) + 1;
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      this->m_flAgentHeight[0] = *dest;
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      this->m_flAgentHeight[1] = *dest;
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      this->m_flAgentRadius[0] = *dest;
      goto LABEL_7;
    }
    if ( v5 > 0 )
    {
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      v7 = *dest;
      this->m_flAgentHeight[0] = *dest;
      this->m_flAgentHeight[1] = v7;
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      this->m_flAgentRadius[0] = *dest;
      CUtlBuffer::GetType<int>(rFileBuffer, dest);
      this->m_nAgentNumHulls = LODWORD(dest[0]) + 1;
LABEL_7:
      CUtlBuffer::GetType<float>(rFileBuffer, dest);
      this->m_flAgentRadius[1] = *dest;
      goto LABEL_8;
    }
    this->m_nAgentNumHulls = 1;
    CUtlBuffer::GetType<float>(rFileBuffer, dest);
    this->m_flAgentHeight[0] = *dest;
    CUtlBuffer::GetType<float>(rFileBuffer, dest);
    this->m_flAgentRadius[0] = *dest;
  }
LABEL_8:
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flAgentMaxClimb = *dest;
  if ( (rFileBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v8 = CUtlBuffer::CheckArbitraryPeekGet(rFileBuffer, 0, &nIncrement);
    v9 = 0;
    if ( v8 )
    {
      LOBYTE(v9) = 10;
      dest[0] = &rFileBuffer->m_Memory.m_pMemory[rFileBuffer->m_Get - rFileBuffer->m_nOffset];
      v13 = dest[0];
      v15 = V_strtoi64(dest[0], dest, v9);
      LODWORD(v9) = v15;
      if ( LODWORD(dest[0]) != v13 )
        rFileBuffer->m_Get += LODWORD(dest[0]) - v13;
    }
  }
  else
  {
    v10 = CUtlBuffer::CheckGet(rFileBuffer, 4);
    LODWORD(v9) = 0;
    if ( v10 )
    {
      if ( (*&rFileBuffer->m_Byteswap & 1) != 0 )
      {
        m_Get = rFileBuffer->m_Get;
        v14 = &rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
        if ( v14 == 0 )
          v14 = &v15;
        LODWORD(dest[0]) = v15;
        LOBYTE(dest[0]) = v14[3];
        BYTE1(dest[0]) = v14[2];
        BYTE2(dest[0]) = v14[1];
        BYTE3(dest[0]) = *v14;
        LODWORD(v9) = dest[0];
      }
      else
      {
        m_Get = rFileBuffer->m_Get;
        LODWORD(v9) = *&rFileBuffer->m_Memory.m_pMemory[m_Get - rFileBuffer->m_nOffset];
      }
      rFileBuffer->m_Get = m_Get + 4;
    }
  }
  this->m_nAgentMaxSlope = v9;
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flAgentMaxJumpDownDist = *dest;
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flAgentMaxJumpHorizDist1 = *dest;
  if ( v5 <= 1 )
  {
    this->m_flAgentMaxJumpUpDist = 0.0;
  }
  else
  {
    CUtlBuffer::GetType<float>(rFileBuffer, dest);
    this->m_flAgentMaxJumpUpDist = *dest;
    if ( v5 > 4 )
      goto LABEL_12;
  }
  CUtlBuffer::GetType<int>(rFileBuffer, dest);
  this->m_nRegionMinSize = dest[0];
  CUtlBuffer::GetType<int>(rFileBuffer, dest);
  this->m_nRegionMergeSize = dest[0];
  CUtlBuffer::GetType<int>(rFileBuffer, dest);
  this->m_nEdgeMaxLen = dest[0];
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flEdgeMaxError = *dest;
  CUtlBuffer::GetType<int>(rFileBuffer, dest);
  this->m_nVertsPerPoly = dest[0];
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flDetailSampleDist = *dest;
  CUtlBuffer::GetType<float>(rFileBuffer, dest);
  this->m_flDetailSampleMaxError = *dest;
LABEL_12:
  if ( this->m_useProjectDefaults && !CNavGenParams::operator==(this, &CNavGenParams::ms_NavGenParamsDefault) )
    Warning(
      "CNavGenParams - Nav mesh requests project default generation parameters but actual parameters\n"
      "  used during construction differ from defaults. Please re-export the map.\n");
}


// CNavGenParams::operator==  (line 1608, @0x00000000031e93a0, libserver.so)
// callers: CNavGenParams::Load
bool __fastcall CNavGenParams::operator==(const CNavGenParams *const this, const CNavGenParams *const rOther)
{
  bool result; // al
  __int64 v3; // rax

  if ( this->m_flTileSize != rOther->m_flTileSize || this->m_flCellSize != rOther->m_flCellSize )
    return 0;
  result = 0;
  if ( this->m_flCellHeight != rOther->m_flCellHeight
    || this->m_nRegionMinSize != rOther->m_nRegionMinSize
    || this->m_nRegionMergeSize != rOther->m_nRegionMergeSize )
  {
    return result;
  }
  if ( this->m_flDetailSampleDist != rOther->m_flDetailSampleDist
    || this->m_flDetailSampleMaxError != rOther->m_flDetailSampleMaxError )
  {
    return 0;
  }
  if ( this->m_nEdgeMaxLen != rOther->m_nEdgeMaxLen )
    return result;
  if ( this->m_flEdgeMaxError != rOther->m_flEdgeMaxError )
    return 0;
  if ( this->m_nVertsPerPoly == rOther->m_nVertsPerPoly && this->m_nAgentNumHulls == rOther->m_nAgentNumHulls )
  {
    v3 = 0;
    while ( this->m_flAgentHeight[v3] == rOther->m_flAgentHeight[v3]
         && this->m_flAgentRadius[v3] == rOther->m_flAgentRadius[v3] )
    {
      if ( ++v3 == 3 )
      {
        result = 0;
        if ( this->m_flAgentMaxClimb != rOther->m_flAgentMaxClimb || this->m_nAgentMaxSlope != rOther->m_nAgentMaxSlope )
          return result;
        if ( this->m_flAgentMaxJumpDownDist == rOther->m_flAgentMaxJumpDownDist
          && this->m_flAgentMaxJumpHorizDist1 == rOther->m_flAgentMaxJumpHorizDist1 )
        {
          return this->m_flAgentMaxJumpUpDist == rOther->m_flAgentMaxJumpUpDist;
        }
        return 0;
      }
    }
    return 0;
  }
  return result;
}


