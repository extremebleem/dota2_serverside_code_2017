
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGridNavBase::CGridNavBase  (line 9, @0x00000000024d6fa0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CGridNav::CGridNav
void __fastcall CGridNavBase::CGridNavBase(CGridNavBase *const this)
{
  this->_vptr_IGameSystem = off_40F6C10;
  this->m_flEdgeSize = 0.0;
  this->m_flOffsetX = 0.0;
  *&this->m_flOffsetY = 0;
  this->m_nHeight = 0;
  this->m_nMinX = 0;
  this->m_nMaxX = -1;
  this->m_nMinY = 0;
  this->m_nMaxY = -1;
  this->m_CellFlags.m_Size = 0;
  this->m_CellFlags.m_Memory.m_pMemory = 0;
  this->m_CellFlags.m_Memory.m_nAllocationCount = 0;
  this->m_CellFlags.m_Memory.m_nGrowSize = 0;
}


// CGridNavBase::ClearData  (line 26, @0x00000000024d70e0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<unsigned char, int>::Purge
// callers: CGridNav::GameInit
void __fastcall CGridNavBase::ClearData(CGridNavBase *const this)
{
  bool v1; // zf

  v1 = (this->m_CellFlags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nWidth = 0;
  this->m_nHeight = 0;
  this->m_nMinX = 0;
  this->m_nMinY = 0;
  this->m_nMaxX = -1;
  this->m_nMaxY = -1;
  this->m_CellFlags.m_Size = 0;
  if ( v1 )
    CUtlMemory<unsigned char,int>::Purge(&this->m_CellFlags.m_Memory);
}


// CGridNavBase::LoadDataFromFile  (line 40, @0x000000000252c8f0, libserver.so)  // inlines: Purge, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, LoggingSystem_IsChannelEnabled, CUtlMemory<unsigned char, int>::Purge, CGridNavBase::LoadDataFromBuffer, LoggingSystem_Log, _Unwind_Resume
// strings: "Failed to load grid nav data, file '%s' not found!\n"
bool __fastcall CGridNavBase::LoadDataFromFile(CGridNavBase *const this, const char *pFilename)
{
  char v4; // bl
  CUtlBuffer fileBuffer; // [rsp+10h] [rbp-70h] BYREF

  CUtlBuffer::CUtlBuffer(&fileBuffer, 0, 0, 0);
  v4 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
         &g_pFullFileSystem->IBaseFileSystem,
         pFilename,
         "GAME",
         &fileBuffer,
         0,
         0,
         0);
  if ( v4 != 0 )
  {
    v4 = CGridNavBase::LoadDataFromBuffer(this, &fileBuffer);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(LOG_SERVER, 2, "Failed to load grid nav data, file '%s' not found!\n", pFilename);
  }
  if ( (fileBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&fileBuffer.m_Memory);
  return v4;
}


// CGridNavBase::LoadDataFromBuffer  (line 56, @0x000000000252b320, libserver.so)  // inlines: GetBytesRemaining, GetFloat, GetInt, GetNumCells, GetType<float>, GetType<int>, GetType<short unsigned int>, GetTypeBin<float>, GetTypeBin<int>, GetTypeBin<unsigned char>, GetTypeText<float>, GetTypeText<int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekGet, StringToNumber<float>, StringToNumber<int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, LoggingSystem_IsChannelEnabled, V_strtoi64, LoggingSystem_Log, CUtlBuffer::CheckGet, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount, V_strtoui64, V_strtod
// callers: CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::OnFileLoaded, CGridNavBase::LoadDataFromFile
// strings: "Error reading grid nav data, header is invalid.\n", "Error reading grid nav data, cell data missing or incomplete.\n"
bool __fastcall CGridNavBase::LoadDataFromBuffer(CGridNavBase *const this, CUtlBuffer *const dataBuffer)
{
  bool result; // al
  const char *v5; // rdx
  int v6; // r13d
  float v7; // eax
  bool v8; // al
  float v9; // xmm0_4
  bool v10; // al
  float v11; // xmm0_4
  bool v12; // al
  float v13; // xmm0_4
  bool v14; // al
  __int64 v15; // rdx
  bool v16; // al
  __int64 v17; // rdx
  bool v18; // al
  __int64 v19; // rdx
  bool v20; // al
  __int64 v21; // rdx
  int m_nWidth; // r13d
  int m_nHeight; // eax
  int v24; // r13d
  int m_Get; // edx
  bool v26; // al
  int v27; // eax
  bool v28; // zf
  __int64 v29; // r15
  bool v30; // al
  unsigned __int8 v31; // dl
  unsigned __int8 *v32; // r14
  bool v33; // al
  int v34; // edx
  int v35; // eax
  unsigned __int8 v36; // al
  bool v37; // al
  int v38; // ecx
  unsigned __int8 *v39; // rax
  bool v40; // al
  int v41; // ecx
  unsigned __int8 *v42; // rax
  bool v43; // al
  int v44; // ecx
  unsigned __int8 *v45; // rax
  bool v46; // al
  int v47; // ecx
  unsigned __int8 *v48; // rax
  bool v49; // al
  int v50; // eax
  bool v51; // al
  int v52; // eax
  unsigned __int8 *v53; // rax
  int v54; // r13d
  int v55; // r13d
  int v56; // r13d
  int v57; // r13d
  int v58; // r13d
  int v59; // r13d
  int v60; // r13d
  int v61; // [rsp+10h] [rbp-50h]
  float v62; // [rsp+20h] [rbp-40h] BYREF
  int nIncrement; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v64[7]; // [rsp+28h] [rbp-38h] BYREF

  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement) )
      goto LABEL_3;
    v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
    v6 = v64[0];
    LODWORD(v7) = V_strtoi64(v64[0], v64, 10);
    v62 = v7;
    if ( LODWORD(v64[0]) != v6 )
      dataBuffer->m_Get += LODWORD(v64[0]) - v6;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(dataBuffer, 4) )
    {
LABEL_3:
      result = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
      v5 = "Error reading grid nav data, header is invalid.\n";
      if ( !result )
        return result;
LABEL_25:
      LoggingSystem_Log(LOG_SERVER, 2, v5);
      return 0;
    }
    if ( (*&dataBuffer->m_Byteswap & 1) != 0 )
    {
      m_Get = dataBuffer->m_Get;
      v53 = &dataBuffer->m_Memory.m_pMemory[m_Get - dataBuffer->m_nOffset];
      if ( v53 == 0 )
        v53 = &v62;
      *v64 = v62;
      LOBYTE(v64[0]) = v53[3];
      BYTE1(v64[0]) = v53[2];
      BYTE2(v64[0]) = v53[1];
      BYTE3(v64[0]) = *v53;
      v7 = *v64;
    }
    else
    {
      m_Get = dataBuffer->m_Get;
      v7 = *&dataBuffer->m_Memory.m_pMemory[m_Get - dataBuffer->m_nOffset];
    }
    dataBuffer->m_Get = m_Get + 4;
  }
  if ( v7 != -5.7827863e35 )
    goto LABEL_3;
  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v8 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v9 = 0.0;
    if ( v8 )
    {
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v58 = v64[0];
      v9 = V_strtod(v64[0], v64);
      v62 = v9;
      if ( LODWORD(v64[0]) != v58 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v58;
    }
  }
  else
  {
    v26 = CUtlBuffer::CheckGet(dataBuffer, 4);
    v9 = 0.0;
    if ( v26 )
    {
      v27 = dataBuffer->m_Get;
      v28 = (*&dataBuffer->m_Byteswap & 1) == 0;
      v9 = *&dataBuffer->m_Memory.m_pMemory[v27 - dataBuffer->m_nOffset];
      v62 = v9;
      if ( !v28 )
      {
        LOBYTE(v64[0]) = HIBYTE(v62);
        BYTE1(v64[0]) = BYTE2(v62);
        BYTE2(v64[0]) = BYTE1(v62);
        BYTE3(v64[0]) = LOBYTE(v62);
        v9 = *v64;
      }
      dataBuffer->m_Get = v27 + 4;
    }
  }
  this->m_flEdgeSize = v9;
  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v10 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v11 = 0.0;
    if ( v10 )
    {
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v57 = v64[0];
      v11 = V_strtod(v64[0], v64);
      v62 = v11;
      if ( LODWORD(v64[0]) != v57 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v57;
    }
  }
  else
  {
    v51 = CUtlBuffer::CheckGet(dataBuffer, 4);
    v11 = 0.0;
    if ( v51 )
    {
      v52 = dataBuffer->m_Get;
      v28 = (*&dataBuffer->m_Byteswap & 1) == 0;
      v11 = *&dataBuffer->m_Memory.m_pMemory[v52 - dataBuffer->m_nOffset];
      v62 = v11;
      if ( !v28 )
      {
        LOBYTE(v64[0]) = HIBYTE(v62);
        BYTE1(v64[0]) = BYTE2(v62);
        BYTE2(v64[0]) = BYTE1(v62);
        BYTE3(v64[0]) = LOBYTE(v62);
        v11 = *v64;
      }
      dataBuffer->m_Get = v52 + 4;
    }
  }
  this->m_flOffsetX = v11;
  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v12 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v13 = 0.0;
    if ( v12 )
    {
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v60 = v64[0];
      v13 = V_strtod(v64[0], v64);
      v62 = v13;
      if ( LODWORD(v64[0]) != v60 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v60;
    }
  }
  else
  {
    v49 = CUtlBuffer::CheckGet(dataBuffer, 4);
    v13 = 0.0;
    if ( v49 )
    {
      v50 = dataBuffer->m_Get;
      v28 = (*&dataBuffer->m_Byteswap & 1) == 0;
      v13 = *&dataBuffer->m_Memory.m_pMemory[v50 - dataBuffer->m_nOffset];
      v62 = v13;
      if ( !v28 )
      {
        LOBYTE(v64[0]) = HIBYTE(v62);
        BYTE1(v64[0]) = BYTE2(v62);
        BYTE2(v64[0]) = BYTE1(v62);
        BYTE3(v64[0]) = LOBYTE(v62);
        v13 = *v64;
      }
      dataBuffer->m_Get = v50 + 4;
    }
  }
  this->m_flOffsetY = v13;
  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v14 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v15 = 0;
    if ( v14 )
    {
      LOBYTE(v15) = 10;
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v59 = v64[0];
      LODWORD(v62) = V_strtoi64(v64[0], v64, v15);
      *&v15 = v62;
      if ( LODWORD(v64[0]) != v59 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v59;
    }
  }
  else
  {
    v46 = CUtlBuffer::CheckGet(dataBuffer, 4);
    LODWORD(v15) = 0;
    if ( v46 )
    {
      if ( (*&dataBuffer->m_Byteswap & 1) != 0 )
      {
        v47 = dataBuffer->m_Get;
        v48 = &dataBuffer->m_Memory.m_pMemory[v47 - dataBuffer->m_nOffset];
        if ( v48 == 0 )
          v48 = &v62;
        *v64 = v62;
        LOBYTE(v64[0]) = v48[3];
        BYTE1(v64[0]) = v48[2];
        BYTE2(v64[0]) = v48[1];
        BYTE3(v64[0]) = *v48;
        LODWORD(v15) = v64[0];
      }
      else
      {
        v47 = dataBuffer->m_Get;
        LODWORD(v15) = *&dataBuffer->m_Memory.m_pMemory[v47 - dataBuffer->m_nOffset];
      }
      dataBuffer->m_Get = v47 + 4;
    }
  }
  this->m_nWidth = v15;
  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v16 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v17 = 0;
    if ( v16 )
    {
      LOBYTE(v17) = 10;
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v56 = v64[0];
      LODWORD(v62) = V_strtoi64(v64[0], v64, v17);
      *&v17 = v62;
      if ( LODWORD(v64[0]) != v56 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v56;
    }
  }
  else
  {
    v43 = CUtlBuffer::CheckGet(dataBuffer, 4);
    LODWORD(v17) = 0;
    if ( v43 )
    {
      if ( (*&dataBuffer->m_Byteswap & 1) != 0 )
      {
        v44 = dataBuffer->m_Get;
        v45 = &dataBuffer->m_Memory.m_pMemory[v44 - dataBuffer->m_nOffset];
        if ( v45 == 0 )
          v45 = &v62;
        *v64 = v62;
        LOBYTE(v64[0]) = v45[3];
        BYTE1(v64[0]) = v45[2];
        BYTE2(v64[0]) = v45[1];
        BYTE3(v64[0]) = *v45;
        LODWORD(v17) = v64[0];
      }
      else
      {
        v44 = dataBuffer->m_Get;
        LODWORD(v17) = *&dataBuffer->m_Memory.m_pMemory[v44 - dataBuffer->m_nOffset];
      }
      dataBuffer->m_Get = v44 + 4;
    }
  }
  this->m_nHeight = v17;
  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v18 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v19 = 0;
    if ( v18 )
    {
      LOBYTE(v19) = 10;
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v55 = v64[0];
      LODWORD(v62) = V_strtoi64(v64[0], v64, v19);
      *&v19 = v62;
      if ( LODWORD(v64[0]) != v55 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v55;
    }
  }
  else
  {
    v40 = CUtlBuffer::CheckGet(dataBuffer, 4);
    LODWORD(v19) = 0;
    if ( v40 )
    {
      if ( (*&dataBuffer->m_Byteswap & 1) != 0 )
      {
        v41 = dataBuffer->m_Get;
        v42 = &dataBuffer->m_Memory.m_pMemory[v41 - dataBuffer->m_nOffset];
        if ( v42 == 0 )
          v42 = &v62;
        *v64 = v62;
        LOBYTE(v64[0]) = v42[3];
        BYTE1(v64[0]) = v42[2];
        BYTE2(v64[0]) = v42[1];
        BYTE3(v64[0]) = *v42;
        LODWORD(v19) = v64[0];
      }
      else
      {
        v41 = dataBuffer->m_Get;
        LODWORD(v19) = *&dataBuffer->m_Memory.m_pMemory[v41 - dataBuffer->m_nOffset];
      }
      dataBuffer->m_Get = v41 + 4;
    }
  }
  this->m_nMinX = v19;
  if ( (dataBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v20 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v21 = 0;
    if ( v20 )
    {
      LOBYTE(v21) = 10;
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v54 = v64[0];
      LODWORD(v62) = V_strtoi64(v64[0], v64, v21);
      *&v21 = v62;
      if ( LODWORD(v64[0]) != v54 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v54;
    }
  }
  else
  {
    v37 = CUtlBuffer::CheckGet(dataBuffer, 4);
    LODWORD(v21) = 0;
    if ( v37 )
    {
      if ( (*&dataBuffer->m_Byteswap & 1) != 0 )
      {
        v38 = dataBuffer->m_Get;
        v39 = &dataBuffer->m_Memory.m_pMemory[v38 - dataBuffer->m_nOffset];
        if ( v39 == 0 )
          v39 = &v62;
        *v64 = v62;
        LOBYTE(v64[0]) = v39[3];
        BYTE1(v64[0]) = v39[2];
        BYTE2(v64[0]) = v39[1];
        BYTE3(v64[0]) = *v39;
        LODWORD(v21) = v64[0];
      }
      else
      {
        v38 = dataBuffer->m_Get;
        LODWORD(v21) = *&dataBuffer->m_Memory.m_pMemory[v38 - dataBuffer->m_nOffset];
      }
      dataBuffer->m_Get = v38 + 4;
    }
  }
  m_nWidth = this->m_nWidth;
  this->m_nMinY = v21;
  this->m_nMaxX = m_nWidth + this->m_nMinX - 1;
  m_nHeight = this->m_nHeight;
  v24 = m_nHeight * m_nWidth;
  this->m_nMaxY = m_nHeight + v21 - 1;
  if ( v24 <= dataBuffer->m_nMaxPut - dataBuffer->m_Get )
  {
    v29 = 0;
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::SetCount(&this->m_CellFlags, v24);
    if ( v24 <= 0 )
      return 1;
    while ( 1 )
    {
      v32 = &this->m_CellFlags.m_Memory.m_pMemory[v29];
      if ( (dataBuffer->m_Flags & 1) != 0 )
        break;
      v33 = CUtlBuffer::CheckGet(dataBuffer, 1);
      v31 = 0;
      if ( v33 )
      {
        ++v29;
        v34 = dataBuffer->m_Get;
        v35 = v34 + 1;
        LOBYTE(v34) = dataBuffer->m_Memory.m_pMemory[v34 - dataBuffer->m_nOffset];
        dataBuffer->m_Get = v35;
        *v32 = v34;
        if ( v24 <= v29 )
          return 1;
      }
      else
      {
LABEL_37:
        ++v29;
        *v32 = v31;
        if ( v24 <= v29 )
          return 1;
      }
    }
    nIncrement = 128;
    v30 = CUtlBuffer::CheckArbitraryPeekGet(dataBuffer, 0, &nIncrement);
    v31 = 0;
    if ( v30 )
    {
      v64[0] = &dataBuffer->m_Memory.m_pMemory[dataBuffer->m_Get - dataBuffer->m_nOffset];
      v61 = v64[0];
      v36 = V_strtoui64(v64[0], v64, 10);
      if ( LODWORD(v64[0]) != v61 )
        dataBuffer->m_Get += LODWORD(v64[0]) - v61;
      v31 = v36;
    }
    goto LABEL_37;
  }
  result = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
  if ( result )
  {
    v5 = "Error reading grid nav data, cell data missing or incomplete.\n";
    goto LABEL_25;
  }
  return result;
}


// CGridNavBase::ClampToWorldEdge  (line 100, @0x00000000024d7130, libserver.so)  // inlines: GridPosToWorldCenterX, GridPosToWorldCenterY
// callers: CGridNavBase::ClampToWorldEdge, FindClearSpaceForUnit
__int64 __fastcall CGridNavBase::ClampToWorldEdge(const CGridNavBase *const this, Vector vPos, float flBuffer)
{
  return LODWORD(vPos.z);
}


// CGridNavBase::ClampToWorldEdge  (line 116, @0x00000000024d7230, libserver.so)  // inlines: GetPaddedCollisionRadius
// calls: CGridNavBase::ClampToWorldEdge
// callers: CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTALocomotor::UpdateMotionControlledMovement, CDOTALocomotor::UpdateStandardMovement, CDOTA_Modifier_HoldoutCullingBlade::OnCreated, CDOTA_Modifier_Mirana_Leap::OnCreated, CDOTA_Modifier_Nian_Dive::UpdateHorizontalMotion, CDOTA_Modifier_Nian_Dive::OnCreated, CDOTA_Modifier_Nian_Leap::OnCreated, CDOTA_Modifier_Slark_Pounce::OnCreated
__int64 __fastcall CGridNavBase::ClampToWorldEdge(const CGridNavBase *const this, CDOTA_BaseNPC *pNPC, Vector a3)
{
  return CGridNavBase::ClampToWorldEdge(this, a3, (pNPC->m_flHullRadius + pNPC->m_flCollisionPadding) + 1.0);
}


// CGridNavBase::IsPositionValidForMovement  (line 128, @0x00000000024d7310, libserver.so)
// calls: CGridNavBase::IsInWorld
// callers: WantsCastOnEstimatedLocation, CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnCreated
bool __fastcall CGridNavBase::IsPositionValidForMovement(const CGridNavBase *const this, Vector a2)
{
  return CGridNavBase::IsInWorld(this, a2, 0.5 * this->m_flEdgeSize);
}


// CGridNavBase::IsInWorld  (line 136, @0x00000000024d7260, libserver.so)  // inlines: GridPosToWorldCenterX, GridPosToWorldCenterY
// callers: CGridNavBase::IsPositionValidForMovement, DOTA_ExecuteOrders, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, FindClearSpaceForUnit, CDOTA_Ability_Kunkka_GhostShip::OnSpellStart
bool __fastcall CGridNavBase::IsInWorld(const CGridNavBase *const this, Vector vPos, float flBuffer)
{
  float m_flEdgeSize; // xmm1_4
  float m_flOffsetX; // xmm5_4
  float v5; // xmm3_4
  float m_flOffsetY; // xmm7_4

  m_flEdgeSize = this->m_flEdgeSize;
  m_flOffsetX = this->m_flOffsetX;
  v5 = 0.5 * m_flEdgeSize;
  m_flOffsetY = this->m_flOffsetY;
  return vPos.x > ((((this->m_nMinX * m_flEdgeSize) + m_flOffsetX) - (0.5 * m_flEdgeSize)) + flBuffer)
      && ((((this->m_nMaxX * m_flEdgeSize) + m_flOffsetX) + v5) - flBuffer) > vPos.x
      && vPos.y > ((((this->m_nMinY * m_flEdgeSize) + m_flOffsetY) - v5) + flBuffer)
      && ((((this->m_nMaxY * m_flEdgeSize) + m_flOffsetY) + v5) - flBuffer) > vPos.y;
}


// CGridNavBase::SetCellBlocked  (line 149, @0x00000000024d7330, libserver.so)  // inlines: GetCellIndex, OutOfBounds, operator[]
// callers: CGridNav::SetPositionBlocked
bool __fastcall CGridNavBase::SetCellBlocked(CGridNavBase *const this, int nGridPosX, int nGridPosY, bool bBlocked)
{
  int m_nMinX; // r8d
  bool result; // al
  int m_nMinY; // r9d
  unsigned __int8 *v7; // rdx

  m_nMinX = this->m_nMinX;
  result = 0;
  if ( nGridPosX >= m_nMinX && nGridPosX <= this->m_nMaxX )
  {
    m_nMinY = this->m_nMinY;
    if ( nGridPosY >= m_nMinY && nGridPosY <= this->m_nMaxY )
    {
      v7 = &this->m_CellFlags.m_Memory.m_pMemory[nGridPosX - m_nMinX + this->m_nWidth * (nGridPosY - m_nMinY)];
      if ( bBlocked )
        *v7 |= 2u;
      else
        *v7 &= ~2u;
      return 1;
    }
  }
  return result;
}


// CGridNavBase::ComputePassabilityFlagsForUnit  (line 170, @0x00000000024d7750, libserver.so)  // inlines: HasFlyMovementCapability, InState, operator|, operator|=
// callers: CGridNavBase::IsCellPassableForUnit, CGridNav::BuildPath
void __fastcall CGridNavBase::ComputePassabilityFlagsForUnit(
        const CGridNavBase *const this,
        CDOTA_BaseNPC *pUnit,
        GridNavCellFlags_t *pOutRequiredFlags,
        GridNavCellFlags_t *pOutBlockingFlags)
{
  unsigned __int64 m_Value; // rax
  uint32 m_iUnitType; // esi
  bool v6; // cf
  GridNavCellFlags_t v7; // eax
  GridNavCellFlags_t v8; // edi

  if ( pUnit == 0 )
  {
    *pOutRequiredFlags = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_TRAVERSABLE;
    *pOutBlockingFlags = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_BLOCKED;
    return;
  }
  if ( (pUnit->m_iMoveCapabilities & 2) == 0 )
  {
    m_Value = pUnit->m_nUnitState64.m_Value;
    m_iUnitType = pUnit->m_iUnitType;
    v6 = (BYTE3(m_Value) & 1 | ((m_Value & 0x200000000LL) != 0)) == 0;
    v7 = v6 ? GridNavCellFlags_t::GRIDNAV_CELL_FLAG_BLOCKED : GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
    v8 = v6;
    if ( (m_iUnitType & 1) == 0 )
      goto LABEL_4;
LABEL_9:
    *pOutRequiredFlags = v8;
    *pOutBlockingFlags = v7 | 4;
    return;
  }
  m_iUnitType = pUnit->m_iUnitType;
  v7 = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
  v8 = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
  if ( (m_iUnitType & 1) != 0 )
    goto LABEL_9;
LABEL_4:
  if ( (m_iUnitType & 0x10000) != 0 )
  {
    *pOutRequiredFlags = v8;
    *pOutBlockingFlags = v7 | 8;
  }
  else
  {
    if ( (m_iUnitType & 0x20000) != 0 )
    {
      v7 = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_WARD_BLOCKING|GridNavCellFlags_t::GRIDNAV_CELL_FLAG_BLOCKED;
      v8 = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
    }
    *pOutRequiredFlags = v8;
    *pOutBlockingFlags = v7;
  }
}


// CGridNavBase::IsCellPassableForUnit  (line 211, @0x00000000024d7810, libserver.so)  // inlines: GetCellFlags, GetCellIndex, IsCellPassableForFlags, operator&
// calls: CGridNavBase::ComputePassabilityFlagsForUnit
// callers: CGridNav::IsEnclosed
bool __fastcall CGridNavBase::IsCellPassableForUnit(
        const CGridNavBase *const this,
        int nGridPosX,
        int nGridPosY,
        CDOTA_BaseNPC *pNPC)
{
  int v7; // r13d
  bool result; // al
  GridNavCellFlags_t nRequiredFlags; // [rsp+8h] [rbp-20h] BYREF
  GridNavCellFlags_t nBlockingFlags[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  nRequiredFlags = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
  nBlockingFlags[0] = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
  CGridNavBase::ComputePassabilityFlagsForUnit(this, pNPC, &nRequiredFlags, nBlockingFlags);
  v7 = nGridPosX - this->m_nMinX;
  result = 0;
  if ( nRequiredFlags == (nRequiredFlags
                        & this->m_CellFlags.m_Memory.m_pMemory[v7 + this->m_nWidth * (nGridPosY - this->m_nMinY)]) )
    return (nBlockingFlags[0] & this->m_CellFlags.m_Memory.m_pMemory[v7 + this->m_nWidth * (nGridPosY - this->m_nMinY)]) == 0;
  return result;
}


// CGridNavBase::ShowGridNav  (line 224, @0x00000000024d7a40, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, Color, EnableInteractsWith, GetCellFlags, GetCellIndex, GetFloat, GridPosToWorldCenterX, GridPosToWorldCenterY, HitStaticOnlyByContents, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetColor, SetEntityToIgnore, SetIgnore, SetInteractsWith, SetObjectSetMask, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAligned, VectorClear, VectorCopy, VectorSubtract, WorldToGridPosX, WorldToGridPosY
// calls: floorf, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, NDebugOverlay::Line
// callers: CGridNav::PreClientUpdate
void __fastcall CGridNavBase::ShowGridNav(
        const CGridNavBase *const this,
        GridNavDisplayMode_t nDisplayMode,
        const Vector *const vCamPos)
{
  const Vector *v4; // rbx
  float v5; // xmm0_4
  float m_fValue; // xmm0_4
  const CGridNavBase *v7; // r14
  int v8; // ebx
  const CGridNavBase *v9; // r13
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned __int8 v14; // al
  Vector *v15; // r14
  int v16; // r12d
  float v17; // xmm1_4
  float v18; // xmm1_4
  const Vector *v19; // rdi
  int v20; // [rsp+4h] [rbp-1ACh]
  int v21; // [rsp+20h] [rbp-190h]
  float v22; // [rsp+24h] [rbp-18Ch]
  float ja; // [rsp+30h] [rbp-180h]
  int j; // [rsp+30h] [rbp-180h]
  unsigned int r; // [rsp+34h] [rbp-17Ch]
  int ga; // [rsp+38h] [rbp-178h]
  unsigned int g; // [rsp+38h] [rbp-178h]
  float ba; // [rsp+3Ch] [rbp-174h]
  float bb; // [rsp+3Ch] [rbp-174h]
  unsigned int b; // [rsp+3Ch] [rbp-174h]
  CGameQueryAttributes worldFilter; // [rsp+40h] [rbp-170h] BYREF
  Vector pCorners[4]; // [rsp+80h] [rbp-130h] BYREF
  int v34; // [rsp+B0h] [rbp-100h]
  int v35; // [rsp+B4h] [rbp-FCh]
  int v36; // [rsp+B8h] [rbp-F8h]
  int v37; // [rsp+BCh] [rbp-F4h]
  float v38; // [rsp+C0h] [rbp-F0h]
  char v39; // [rsp+C4h] [rbp-ECh]
  bool v40; // [rsp+C5h] [rbp-EBh]
  trace_t result; // [rsp+D0h] [rbp-E0h] BYREF

  v4 = vCamPos;
  ga = SLODWORD(this->m_flEdgeSize);
  ja = vCamPos->x;
  v5 = floorf(((vCamPos->x - this->m_flOffsetX) + (0.5 * *&ga)) / *&ga);
  ba = v4->y;
  v20 = v5;
  LODWORD(v4) = floorf(((ba - this->m_flOffsetY) + (0.5 * *&ga)) / *&ga);
  memset(&result.m_ShapeAttributes, 0, 31);
  result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&result);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  pCorners[1].z = ba - ba;
  pCorners[0].x = ja;
  v38 = m_fValue;
  pCorners[0].y = ba;
  pCorners[1].x = 0.0;
  pCorners[2].y = 0.0;
  pCorners[1].y = ja - ja;
  pCorners[3].z = 0.0;
  v37 = 0;
  pCorners[2].x = -32768.0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v39 = 1;
  pCorners[3].y = 0.0;
  pCorners[3].x = 0.0;
  pCorners[2].z = 0.0;
  pCorners[0].z = 16384.0;
  v40 = (((pCorners[1].y * pCorners[1].y) + (pCorners[1].z * pCorners[1].z)) + 1073741800.0) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&worldFilter, 0, 4, 0);
  v7 = this;
  worldFilter.m_nInteractsExclude |= 0x7021uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, pCorners, &worldFilter, &result);
  j = v4 + 4;
  v21 = v4 + 20;
  do
  {
    if ( v7->m_nMinY <= j && v7->m_nMaxY >= j )
    {
      v8 = v20 - 15;
      v22 = (j * v7->m_flEdgeSize) + v7->m_flOffsetY;
      if ( v20 + 15 >= v20 - 15 )
      {
        v9 = v7;
        while ( v9->m_nMinX > v8 )
        {
LABEL_15:
          if ( v20 + 15 < ++v8 )
          {
LABEL_16:
            v7 = v9;
            goto LABEL_17;
          }
        }
        if ( v9->m_nMaxX < v8 )
          goto LABEL_16;
        worldFilter.m_nHierarchyId = 0;
        worldFilter.m_nInteractsExclude = 0;
        worldFilter.m_nInteractsAs = 0;
        v10 = v8 * v9->m_flEdgeSize;
        worldFilter.m_nCollisionGroup = 3;
        worldFilter.m_nEntityIdToIgnore = -1;
        *(&worldFilter.RnQueryShapeAttr_t + 31) = *(&worldFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
        worldFilter.m_nObjectSetMask = 1;
        v11 = v10 + v9->m_flOffsetX;
        worldFilter.m_nInteractsWith = 28673;
        bb = v11;
        worldFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
        worldFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
        v12 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        pCorners[1].z = v22 - v22;
        pCorners[0].x = bb;
        v38 = v12;
        pCorners[1].x = 0.0;
        pCorners[2].y = 0.0;
        pCorners[3].z = 0.0;
        pCorners[1].y = bb - bb;
        v37 = 0;
        pCorners[2].x = -32768.0;
        v36 = 0;
        v35 = 0;
        v34 = 0;
        v39 = 1;
        pCorners[3].y = 0.0;
        pCorners[3].x = 0.0;
        pCorners[2].z = 0.0;
        pCorners[0].y = v22;
        pCorners[0].z = 16384.0;
        v40 = (((pCorners[1].y * pCorners[1].y) + (pCorners[1].z * pCorners[1].z)) + 1073741800.0) != 0.0;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, pCorners, &worldFilter, &result);
        v13 = bb;
        v14 = v9->m_CellFlags.m_Memory.m_pMemory[v8 - v9->m_nMinX + v9->m_nWidth * (j - v9->m_nMinY)];
        switch ( nDisplayMode )
        {
          case GridNavDisplayMode_t::GRIDNAV_DISPLAY_PASSABLE:
            if ( (v14 & 1) == 0 || (v14 & 2) != 0 )
            {
              b = 0;
              g = 0;
              r = 255;
              goto LABEL_13;
            }
            break;
          case GridNavDisplayMode_t::GRIDNAV_DISPLAY_HERO_BLOCKING:
            if ( (v14 & 4) != 0 )
            {
              b = 255;
              g = 0;
              r = 0;
              goto LABEL_13;
            }
            break;
          case GridNavDisplayMode_t::GRIDNAV_DISPLAY_CREATURE_BLOCKING:
            if ( (v14 & 8) != 0 )
            {
              b = 0;
              g = 255;
              r = 255;
              goto LABEL_13;
            }
            break;
          default:
            if ( nDisplayMode == GridNavDisplayMode_t::GRIDNAV_DISPLAY_WARD_BLOCKING && (v14 & 0x12) != 0 )
            {
              b = 255;
              g = 255;
              r = 0;
LABEL_13:
              v15 = pCorners;
              pCorners[0].z = (-32768.0 * result.fraction) + 16384.0;
              v16 = 0;
              v17 = 0.5 * v9->m_flEdgeSize;
              pCorners[1].z = pCorners[0].z;
              pCorners[2].z = pCorners[0].z;
              pCorners[3].z = pCorners[0].z;
              v18 = v17 * 0.89999998;
              pCorners[0].y = v22 + v18;
              pCorners[1].y = v22 + v18;
              pCorners[0].x = v13 - v18;
              pCorners[1].x = v13 + v18;
              pCorners[2].x = v13 + v18;
              pCorners[2].y = v22 - v18;
              pCorners[3].x = v13 - v18;
              pCorners[3].y = v22 - v18;
              do
              {
                ++v16;
                v19 = v15++;
                NDebugOverlay::Line(v19, &pCorners[v16 & 3], r, g, b, 1, 0.01023);
              }
              while ( v16 != 4 );
              goto LABEL_15;
            }
            break;
        }
        r = 0;
        g = 255;
        b = 0;
        goto LABEL_13;
      }
    }
LABEL_17:
    ++j;
  }
  while ( j <= v21 );
}


