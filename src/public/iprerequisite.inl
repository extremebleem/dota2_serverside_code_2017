
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IPrerequisite::~IPrerequisite  (line 33, @0x0000000001f719f0, libserver.so)
void __fastcall IPrerequisite::~IPrerequisite(IPrerequisite *const this)
{
  this->_vptr_IPrerequisite = off_3FCAB50;
}


// IPrerequisite::~IPrerequisite  (line 33, @0x0000000001f73b70, libserver.so)  // inlines: ~IPrerequisite
// calls: operator delete
void __fastcall IPrerequisite::~IPrerequisite(IPrerequisite *const this)
{
  this->_vptr_IPrerequisite = off_3FCAB50;
  operator delete(this);
}


// IPrerequisite::AddRef  (line 35, @0x0000000001f71a00, libserver.so)
void __fastcall IPrerequisite::AddRef(IPrerequisite *const this)
{
  ++this->m_nRefCount;
}


// IPrerequisite::Release  (line 40, @0x0000000001f76630, libserver.so)
void __fastcall IPrerequisite::Release(IPrerequisite *const this)
{
  int v1; // eax
  bool v2; // zf

  v1 = this->m_nRefCount - 1;
  v2 = this->m_nRefCount == 1;
  this->m_nRefCount = v1;
  if ( v1 < 0 || v2 )
    (*(this->_vptr_IPrerequisite + 1))(this);
}


// IPrerequisite::Describe  (line 54, @0x0000000001f85680, libserver.so)  // inlines: CUtlString
// calls: CFmtStrN<256, false>::CFmtStrN, CUtlString::operator+=, __stack_chk_fail, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "prerequisite '%s'\n"
CUtlString __fastcall IPrerequisite::Describe(CUtlString *a1, const IPrerequisite *const this)
{
  const char *v3; // rax
  CFmtStrN<256,false> v5; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-18h]

  a1->m_pString = 0;
  v6 = __readfsqword(0x28u);
  v3 = (*(this->_vptr_IPrerequisite + 5))(this);
  CFmtStrN<256,false>::CFmtStrN(&v5, "prerequisite '%s'\n", v3);
  CUtlString::operator+=(a1, v5.m_szBuf);
  return a1;
}


// CAsyncFileLoadPrerequisite::~CAsyncFileLoadPrerequisite  (line 461, @0x000000000255ef20, libserver.so)  // inlines: Reset, ~IPrerequisite
void __fastcall CAsyncFileLoadPrerequisite::~CAsyncFileLoadPrerequisite(CAsyncFileLoadPrerequisite *const this)
{
  IAsyncFileRequest *m_pRequest; // rsi

  this->_vptr_IPrerequisite = off_40F1690;
  m_pRequest = this->m_pRequest;
  if ( m_pRequest != 0 )
  {
    (*(*g_pAsyncFileSystem + 112LL))(g_pAsyncFileSystem, m_pRequest, 0);
    this->m_pRequest = 0;
  }
  if ( this->m_pFileData != 0 )
  {
    (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem);
    this->m_pFileData = 0;
    this->m_nFileDataSize = 0;
  }
  this->m_AsyncRequestStatus = AsyncRequestStatus_t::ASYNC_REQUEST_STATUS_UNDEFINED;
  this->_vptr_IPrerequisite = off_3FCAB50;
}


// CAsyncFileLoadPrerequisite::~CAsyncFileLoadPrerequisite  (line 461, @0x000000000255f000, libserver.so)  // inlines: Reset, ~CAsyncFileLoadPrerequisite, ~IPrerequisite
// calls: operator delete
void __fastcall CAsyncFileLoadPrerequisite::~CAsyncFileLoadPrerequisite(CAsyncFileLoadPrerequisite *const this)
{
  IAsyncFileRequest *m_pRequest; // rsi

  this->_vptr_IPrerequisite = off_40F1690;
  m_pRequest = this->m_pRequest;
  if ( m_pRequest != 0 )
  {
    (*(*g_pAsyncFileSystem + 112LL))(g_pAsyncFileSystem, m_pRequest, 0);
    this->m_pRequest = 0;
  }
  if ( this->m_pFileData != 0 )
  {
    (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem);
    this->m_pFileData = 0;
    this->m_nFileDataSize = 0;
  }
  this->m_AsyncRequestStatus = AsyncRequestStatus_t::ASYNC_REQUEST_STATUS_UNDEFINED;
  this->_vptr_IPrerequisite = off_3FCAB50;
  operator delete(this);
}


// CAsyncFileLoadPrerequisite::GetName  (line 466, @0x0000000002551cd0, libserver.so)
// strings: "CAsyncFileLoadPrerequisite"
const char *__fastcall CAsyncFileLoadPrerequisite::GetName(const CAsyncFileLoadPrerequisite *const this)
{
  return "CAsyncFileLoadPrerequisite";
}


// CAsyncFileLoadPrerequisite::OnFileLoaded  (line 480, @0x0000000002551ce0, libserver.so)
void __fastcall CAsyncFileLoadPrerequisite::OnFileLoaded(CAsyncFileLoadPrerequisite *const this)
{
  AsyncRequestStatus_t v2; // eax
  void *v3; // rax
  IAsyncFileRequest *m_pRequest; // rdi

  v2 = (*(*this->m_pRequest + 96LL))(this->m_pRequest);
  this->m_AsyncRequestStatus = v2;
  if ( v2 == AsyncRequestStatus_t::ASYNC_REQUEST_OK )
  {
    (*(*this->m_pRequest + 240LL))(this->m_pRequest);
    v3 = (*(*this->m_pRequest + 216LL))(this->m_pRequest);
    m_pRequest = this->m_pRequest;
    this->m_pFileData = v3;
    this->m_nFileDataSize = (*(*m_pRequest + 224LL))(m_pRequest);
  }
  this->m_pRequest = 0;
}


// CAsyncFileLoadPrerequisite::GetPrerequisiteStatus  (line 513, @0x0000000002551d40, libserver.so)
__int64 __fastcall CAsyncFileLoadPrerequisite::GetPrerequisiteStatus(
        CAsyncFileLoadPrerequisite *const this,
        double a2,
        float64 flTimeoutTime)
{
  return this->m_ResultStatus;
}


// CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::~CAsyncFileLoadPrerequisiteLambda  (line 542, @0x00000000024b8c00, libserver.so)  // inlines: Reset, ~<lambda>, ~CAsyncFileLoadPrerequisite, ~CUtlString, ~IPrerequisite
// calls: CUtlString::FreeMemoryBlock
void __fastcall CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(EventSpawnGroupPrecache_t const&)::{lambda(CAsyncFileLoadPrerequisite *)#1}>::~CAsyncFileLoadPrerequisiteLambda(
        CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37> *const this)
{
  CUtlString *p_worldName; // rdi
  IAsyncFileRequest *m_pRequest; // rsi

  p_worldName = &this->m_lambda.__worldName;
  p_worldName[-8].m_pString = &off_40EE770;
  if ( this->m_lambda.__worldName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_worldName);
  m_pRequest = this->m_pRequest;
  this->_vptr_IPrerequisite = off_40F1690;
  if ( m_pRequest != 0 )
  {
    (*(*g_pAsyncFileSystem + 112LL))(g_pAsyncFileSystem, m_pRequest, 0);
    this->m_pRequest = 0;
  }
  if ( this->m_pFileData != 0 )
  {
    (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem);
    this->m_pFileData = 0;
    this->m_nFileDataSize = 0;
  }
  this->m_AsyncRequestStatus = AsyncRequestStatus_t::ASYNC_REQUEST_STATUS_UNDEFINED;
  this->_vptr_IPrerequisite = off_3FCAB50;
}


// CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::~CAsyncFileLoadPrerequisiteLambda  (line 542, @0x00000000024b8ca0, libserver.so)  // inlines: Reset, ~<lambda>, ~CAsyncFileLoadPrerequisite, ~CAsyncFileLoadPrerequisiteLambda, ~CUtlString, ~IPrerequisite
// calls: CUtlString::FreeMemoryBlock, operator delete
void __fastcall CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(EventSpawnGroupPrecache_t const&)::{lambda(CAsyncFileLoadPrerequisite *)#1}>::~CAsyncFileLoadPrerequisiteLambda(
        CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37> *const this)
{
  CUtlString *p_worldName; // rdi
  IAsyncFileRequest *m_pRequest; // rsi

  p_worldName = &this->m_lambda.__worldName;
  p_worldName[-8].m_pString = &off_40EE770;
  if ( this->m_lambda.__worldName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_worldName);
  m_pRequest = this->m_pRequest;
  this->_vptr_IPrerequisite = off_40F1690;
  if ( m_pRequest != 0 )
  {
    (*(*g_pAsyncFileSystem + 112LL))(g_pAsyncFileSystem, m_pRequest, 0);
    this->m_pRequest = 0;
  }
  if ( this->m_pFileData != 0 )
  {
    (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem);
    this->m_pFileData = 0;
    this->m_nFileDataSize = 0;
  }
  this->m_AsyncRequestStatus = AsyncRequestStatus_t::ASYNC_REQUEST_STATUS_UNDEFINED;
  this->_vptr_IPrerequisite = off_3FCAB50;
  operator delete(this);
}


// CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::OnFileLoaded  (line 551, @0x000000000252bc40, libserver.so)  // inlines: CEntityHandle, CGridNavCell, CGridNavNode, CHandle, GetSector, GridPosToWorldCenterX, GridPosToWorldCenterY, OnFileLoaded, Purge, SetObstructionPropertyQuerySetFlags, operator(), ~CUtlBuffer, ~CUtlMemory
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CUtlBuffer::CUtlBuffer, CGridNavBase::LoadDataFromBuffer, operator new [], C2DGridObstructionManager::Init, C2DGridObstructionManager::SetRadiusAdjustmentRelationship, C2DGridObstructionManager::UpdateSquareObstruction, CGridNavSector::CGridNavSector, CUtlMemory<unsigned char, int>::Purge, __stack_chk_fail (13 total)
// strings: "Unable to load grid nav: error %d loading for world %s\n", "Unable to load grid nav: file not found for world %s\n"
// globals: CGridNavNode::sm_nListIDBase
void __fastcall CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(EventSpawnGroupPrecache_t const&)::{lambda(CAsyncFileLoadPrerequisite *)#1}>::OnFileLoaded(
        CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37> *const this)
{
  AsyncRequestStatus_t v2; // eax
  AsyncRequestStatus_t m_AsyncRequestStatus; // ecx
  const char *v4; // rax
  const char *v5; // rax
  void *v6; // rax
  IAsyncFileRequest *m_pRequest; // rdi
  __int64 v8; // rax
  void *m_pFileData; // rsi
  size_t v10; // rdi
  unsigned __int64 v11; // rbx
  CGridNavCell *v12; // rax
  unsigned __int64 v13; // rcx
  CGridNavCell *v14; // rdx
  CGridNav *v15; // rax
  float m_flEdgeSize; // xmm4_4
  CGridNav *v17; // rax
  int v18; // edi
  int v19; // r9d
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  CGridNavCell *v23; // rsi
  int v24; // ebx
  CGridNav *v25; // rax
  CGridNav *v26; // rcx
  int m_nWidth; // edx
  int v28; // edi
  CGridNav *v29; // r9
  int v30; // r14d
  __int64 v31; // r12
  unsigned __int8 *v32; // r13
  int v33; // r15d
  bool v34; // si
  bool v35; // di
  CGridNavCell *m_pCells; // rcx
  __int64 v37; // rdx
  CGridNavCell *v38; // r11
  bool v39; // r8
  bool v40; // zf
  __int64 v41; // rbx
  __int64 v42; // rdx
  float v43; // xmm2_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  int m_nHeight; // esi
  int v50; // edi
  __int64 v51; // r14
  unsigned __int8 *v52; // r15
  CGridNav *v53; // rdi
  CGridNavCell *v54; // rsi
  unsigned __int8 v55; // r12
  char v56; // bl
  __int64 v57; // rdx
  unsigned __int8 v58; // r13
  unsigned __int8 v59; // si
  char v60; // r12
  __int64 v61; // r13
  __int64 v62; // rdx
  float v63; // xmm2_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  __int64 v66; // r12
  __int64 v67; // rdx
  float v68; // xmm2_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  int v71; // eax
  int v72; // edx
  CGridNav *v73; // rcx
  int v74; // edx
  int v75; // eax
  int v76; // edx
  size_t v77; // rdi
  int v78; // ebx
  _QWORD *v79; // rax
  CGridNavSector *v80; // r12
  __int64 v81; // rbx
  CGridNavSector *v82; // r13
  CGridNavSector *v83; // rdi
  int v84; // esi
  CGridNav *v85; // rax
  CGridNav *v86; // rcx
  int m_nSectorWidth; // eax
  int v88; // edx
  __int64 v89; // rax
  float v90; // xmm2_4
  float v91; // xmm1_4
  float v92; // xmm0_4
  C2DGridObstructionManager *p_m_ObstructionManager; // rdi
  float X; // xmm2_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  int v97; // [rsp+10h] [rbp-110h]
  int v98; // [rsp+14h] [rbp-10Ch]
  CGridNavCell *v99; // [rsp+18h] [rbp-108h]
  unsigned __int8 *m_pMemory; // [rsp+28h] [rbp-F8h]
  bool v102; // [rsp+3Ah] [rbp-E6h]
  unsigned __int8 v103; // [rsp+3Bh] [rbp-E5h]
  int v104; // [rsp+3Ch] [rbp-E4h]
  int v105; // [rsp+3Ch] [rbp-E4h]
  int v106; // [rsp+40h] [rbp-E0h]
  int v107; // [rsp+40h] [rbp-E0h]
  char theHandle; // [rsp+48h] [rbp-D8h]
  _BYTE v109[16]; // [rsp+50h] [rbp-D0h]
  _DWORD v110[4]; // [rsp+60h] [rbp-C0h] BYREF
  CGridNavCell *v111; // [rsp+70h] [rbp-B0h]
  __int64 v112; // [rsp+78h] [rbp-A8h]
  CGridNavCell *v113; // [rsp+80h] [rbp-A0h]
  CGridNavCell *v114; // [rsp+88h] [rbp-98h]
  CUtlBuffer dataBuffer; // [rsp+90h] [rbp-90h] BYREF
  _BYTE v116[8]; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v117; // [rsp+E8h] [rbp-38h]

  v117 = __readfsqword(0x28u);
  v2 = (*(*this->m_pRequest + 96LL))(this->m_pRequest);
  this->m_AsyncRequestStatus = v2;
  if ( v2 != AsyncRequestStatus_t::ASYNC_REQUEST_OK )
  {
    m_AsyncRequestStatus = v2;
    this->m_pRequest = 0;
    goto LABEL_3;
  }
  (*(*this->m_pRequest + 240LL))(this->m_pRequest);
  v6 = (*(*this->m_pRequest + 216LL))(this->m_pRequest);
  m_pRequest = this->m_pRequest;
  this->m_pFileData = v6;
  v8 = (*(*m_pRequest + 224LL))(m_pRequest);
  m_AsyncRequestStatus = this->m_AsyncRequestStatus;
  this->m_pRequest = 0;
  this->m_nFileDataSize = v8;
  if ( m_AsyncRequestStatus != AsyncRequestStatus_t::ASYNC_REQUEST_OK )
  {
LABEL_3:
    if ( m_AsyncRequestStatus == AsyncRequestStatus_t::ASYNC_REQUEST_ERROR_FILEOPEN )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      {
        v5 = CUtlString::Get(&this->m_lambda.__worldName);
        LoggingSystem_Log(LOG_SERVER, 1, "Unable to load grid nav: file not found for world %s\n", v5);
      }
      goto LABEL_6;
    }
LABEL_4:
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v4 = CUtlString::Get(&this->m_lambda.__worldName);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "Unable to load grid nav: error %d loading for world %s\n",
        this->m_AsyncRequestStatus,
        v4);
    }
LABEL_6:
    this->m_ResultStatus = PrerequisiteStatus_t::PS_SATISFIED;
    return;
  }
  m_pFileData = this->m_pFileData;
  if ( m_pFileData == 0 )
    goto LABEL_4;
  CUtlBuffer::CUtlBuffer(&dataBuffer, m_pFileData, v8, 8);
  v102 = CGridNavBase::LoadDataFromBuffer(this->m_lambda.__this, &dataBuffer);
  if ( !v102 )
    goto LABEL_79;
  v10 = -1;
  v11 = this->m_lambda.__this->m_nHeight * this->m_lambda.__this->m_nWidth;
  if ( v11 <= 0x2A8000000000000LL )
    v10 = 48 * v11;
  v12 = operator new[](v10);
  v13 = v11 - 2;
  v14 = v12;
  if ( v11 != 0 )
  {
    do
    {
      --v13;
      v14->m_nListID = 0;
      ++v14;
      v14[-1].m_pParent = 0;
      v14[-1].m_pOpenListNext = 0;
      v14[-1].m_nHeuristic = 0;
      v14[-1].m_nCost = 0;
      v14[-1].m_bIsPortal = 0;
      v14[-1].m_nGridPosX = 0;
      v14[-1].m_nGridPosY = 0;
    }
    while ( v13 != -2 );
  }
  this->m_lambda.__this->m_pCells = v12;
  v15 = this->m_lambda.__this;
  m_flEdgeSize = v15->m_flEdgeSize;
  C2DGridObstructionManager::Init(
    &v15->m_ObstructionManager,
    v15->m_nWidth >> 3,
    v15->m_nHeight >> 3,
    ((v15->m_nMinX * m_flEdgeSize) + v15->m_flOffsetX) - (0.5 * m_flEdgeSize),
    ((v15->m_nMinY * m_flEdgeSize) + v15->m_flOffsetY) - (0.5 * m_flEdgeSize),
    ((v15->m_nMaxX * m_flEdgeSize) + v15->m_flOffsetX) + (0.5 * m_flEdgeSize),
    ((v15->m_nMaxY * m_flEdgeSize) + v15->m_flOffsetY) + (0.5 * m_flEdgeSize),
    0.25);
  C2DGridObstructionManager::SetRadiusAdjustmentRelationship(&this->m_lambda.__this->m_ObstructionManager, 1, 3, 1);
  C2DGridObstructionManager::SetRadiusAdjustmentRelationship(&this->m_lambda.__this->m_ObstructionManager, 3, 1, 1);
  C2DGridObstructionManager::SetRadiusAdjustmentRelationship(&this->m_lambda.__this->m_ObstructionManager, 1, 2, 1);
  C2DGridObstructionManager::SetRadiusAdjustmentRelationship(&this->m_lambda.__this->m_ObstructionManager, 2, 1, 1);
  C2DGridObstructionManager::SetRadiusAdjustmentRelationship(&this->m_lambda.__this->m_ObstructionManager, 2, 2, 1);
  C2DGridObstructionManager::SetRadiusAdjustmentRelationship(&this->m_lambda.__this->m_ObstructionManager, 3, 3, 1);
  v17 = this->m_lambda.__this;
  if ( v17->m_nHeight > 0 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      v20 = v19 + v17->m_nMinY;
      if ( v17->m_nWidth > 0 )
      {
        v21 = 0;
        v22 = v18;
        do
        {
          ++v18;
          v23 = &v17->m_pCells[v22++];
          v24 = v21 + v17->m_nMinX;
          ++v21;
          v23->m_nGridPosX = v24;
          v23->m_nGridPosY = v20;
          v17 = this->m_lambda.__this;
        }
        while ( v21 < v17->m_nWidth );
      }
      ++v19;
    }
    while ( v19 < v17->m_nHeight );
  }
  v17->m_ObstructionManager.m_nQuerySetClassProperties.m_Memory[1] = 1111;
  this->m_lambda.__this->m_ObstructionManager.m_nQuerySetClassProperties.m_Memory[0] = 928;
  this->m_lambda.__this->m_ObstructionManager.m_nQuerySetClassProperties.m_Memory[2] = 2056;
  v25 = this->m_lambda.__this;
  v26 = v25;
  m_pMemory = v25->m_CellFlags.m_Memory.m_pMemory;
  if ( v25->m_nHeight <= 1 )
  {
    m_nWidth = v25->m_nWidth;
    goto LABEL_64;
  }
  m_nWidth = v25->m_nWidth;
  v104 = 0;
  do
  {
    v28 = 2 * m_nWidth * v104;
    v106 = v28;
    if ( m_nWidth > 1 )
    {
      v29 = v25;
      v30 = 0;
      v31 = v28;
      v32 = &m_pMemory[v28];
      do
      {
        v33 = v30;
        v34 = (*v32 & 1) != 0;
        v40 = (v32[1] & 1) == 0;
        v109[0] = v34;
        v35 = !v40;
        m_pCells = v29->m_pCells;
        v37 = v106 + 2 * v30 + m_nWidth;
        v109[1] = !v40;
        v40 = (m_pMemory[v37] & 1) == 0;
        v38 = &m_pCells[v31];
        v111 = &m_pCells[v31];
        v39 = !v40;
        v40 = (m_pMemory[v37 + 1] & 1) == 0;
        v109[2] = v39;
        v112 = &m_pCells[v31 + 1];
        v109[3] = !v40;
        v113 = &m_pCells[v37];
        v114 = v113 + 1;
        if ( v34 || v35 || v39 || !v40 )
        {
          v41 = 0;
          if ( !v34 )
            goto LABEL_33;
          while ( ++v41 != 4 )
          {
            if ( v109[v41] == 0 )
            {
LABEL_33:
              v42 = *(&v111 + v41);
              v43 = v25->m_flEdgeSize;
              v44 = (*(v42 + 36) * v43) + v25->m_flOffsetX;
              v45 = (*(v42 + 40) * v43) + v25->m_flOffsetY;
              v110[0] = -1;
              C2DGridObstructionManager::UpdateSquareObstruction(
                &v25->m_ObstructionManager,
                0,
                v44 - (0.5 * v43),
                v45 - (0.5 * v43),
                v43 + (v44 - (0.5 * v43)),
                v25->m_flEdgeSize + (v45 - (0.5 * v43)),
                ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC,
                136,
                v110,
                0);
              v25 = this->m_lambda.__this;
            }
          }
        }
        else
        {
          v46 = v29->m_flEdgeSize;
          v47 = (v38->m_nGridPosY * v46) + v29->m_flOffsetY;
          v48 = (v38->m_nGridPosX * v46) + v29->m_flOffsetX;
          v110[0] = -1;
          C2DGridObstructionManager::UpdateSquareObstruction(
            &v29->m_ObstructionManager,
            0,
            v48 - (0.5 * v46),
            v47 - (0.5 * v46),
            (v46 + v46) + (v48 - (0.5 * v46)),
            (v47 - (0.5 * v46)) + (v46 + v46),
            ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC,
            136,
            v110,
            0);
          v25 = this->m_lambda.__this;
        }
        m_nWidth = v25->m_nWidth;
        ++v30;
        v32 += 2;
        v31 += 2;
        v29 = v25;
      }
      while ( m_nWidth / 2 > v33 + 1 );
    }
    m_nHeight = v25->m_nHeight;
    ++v104;
  }
  while ( v104 < m_nHeight / 2 );
  if ( m_nHeight > 1 )
  {
    v97 = 0;
    while ( 1 )
    {
      v50 = 2 * m_nWidth * v97;
      v98 = v50;
      if ( m_nWidth > 1 )
        break;
LABEL_62:
      if ( ++v97 >= v25->m_nHeight / 2 )
        goto LABEL_63;
    }
    v107 = 0;
    v51 = v50;
    v52 = &m_pMemory[v50];
    v53 = v25;
    while ( 2 )
    {
      v54 = v53->m_pCells;
      theHandle = 0;
      v55 = v52[1];
      v99 = &v54[v51];
      v111 = &v54[v51];
      v112 = &v54[v51 + 1];
      v105 = v107;
      v116[1] = v55;
      v57 = v98 + 2 * v107 + m_nWidth;
      v116[0] = *v52;
      v56 = v116[0];
      v113 = &v54[v57];
      v114 = v113 + 1;
      v58 = m_pMemory[v57];
      v59 = m_pMemory[v57 + 1];
      v116[2] = v58;
      v103 = v59;
      v116[3] = v59;
      if ( (v116[0] & 4) != 0 && (v55 & 4) != 0 && (v58 & 4) != 0 && (v59 & 4) != 0 )
      {
        p_m_ObstructionManager = &v53->m_ObstructionManager;
        X = p_m_ObstructionManager[-1].m_CheckLine.P1.X;
        v95 = (v99->m_nGridPosY * X) + p_m_ObstructionManager[-1].m_CheckLine.m_flCheckLineLength;
        v96 = (v99->m_nGridPosX * X) + p_m_ObstructionManager[-1].m_CheckLine.P1.Y;
        v110[0] = -1;
        C2DGridObstructionManager::UpdateSquareObstruction(
          p_m_ObstructionManager,
          0,
          v96 - (0.5 * X),
          v95 - (0.5 * X),
          (X + X) + (v96 - (0.5 * X)),
          (v95 - (0.5 * X)) + (X + X),
          ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC,
          256,
          v110,
          0);
        theHandle = 1;
        v25 = this->m_lambda.__this;
      }
      if ( (v56 & 8) != 0 && (v55 & 8) != 0 )
      {
        v60 = 0;
        if ( (v58 & 8) != 0 && (v103 & 8) != 0 )
        {
          v90 = v25->m_flEdgeSize;
          v91 = (v99->m_nGridPosY * v90) + v25->m_flOffsetY;
          v92 = (v99->m_nGridPosX * v90) + v25->m_flOffsetX;
          v110[0] = -1;
          C2DGridObstructionManager::UpdateSquareObstruction(
            &v25->m_ObstructionManager,
            0,
            v92 - (0.5 * v90),
            v91 - (0.5 * v90),
            (v90 + v90) + (v92 - (0.5 * v90)),
            (v91 - (0.5 * v90)) + (v90 + v90),
            ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC,
            512,
            v110,
            0);
          v60 = 1;
          v25 = this->m_lambda.__this;
        }
      }
      else
      {
        v60 = 0;
      }
      if ( theHandle == 0 )
      {
        v61 = 0;
        if ( (v56 & 4) != 0 )
          goto LABEL_55;
        while ( ++v61 != 4 )
        {
          while ( (v116[v61] & 4) != 0 )
          {
LABEL_55:
            v62 = *(&v111 + v61);
            v63 = v25->m_flEdgeSize;
            v64 = (*(v62 + 36) * v63) + v25->m_flOffsetX;
            v65 = (*(v62 + 40) * v63) + v25->m_flOffsetY;
            v110[0] = -1;
            C2DGridObstructionManager::UpdateSquareObstruction(
              &v25->m_ObstructionManager,
              0,
              v64 - (0.5 * v63),
              v65 - (0.5 * v63),
              v63 + (v64 - (0.5 * v63)),
              v63 + (v65 - (0.5 * v63)),
              ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC,
              256,
              v110,
              0);
            ++v61;
            v25 = this->m_lambda.__this;
            if ( v61 == 4 )
              goto LABEL_56;
          }
        }
      }
LABEL_56:
      if ( v60 == 0 )
      {
        v66 = 0;
        if ( (v56 & 8) != 0 )
          goto LABEL_60;
        while ( ++v66 != 4 )
        {
          while ( (v116[v66] & 8) != 0 )
          {
LABEL_60:
            v67 = *(&v111 + v66);
            v68 = v25->m_flEdgeSize;
            v69 = (*(v67 + 36) * v68) + v25->m_flOffsetX;
            v70 = (*(v67 + 40) * v68) + v25->m_flOffsetY;
            v110[0] = -1;
            C2DGridObstructionManager::UpdateSquareObstruction(
              &v25->m_ObstructionManager,
              0,
              v69 - (0.5 * v68),
              v70 - (0.5 * v68),
              v68 + (v69 - (0.5 * v68)),
              v68 + (v70 - (0.5 * v68)),
              ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC,
              512,
              v110,
              0);
            ++v66;
            v25 = this->m_lambda.__this;
            if ( v66 == 4 )
              goto LABEL_61;
          }
        }
      }
LABEL_61:
      m_nWidth = v25->m_nWidth;
      v51 += 2;
      v52 += 2;
      v53 = v25;
      ++v107;
      if ( m_nWidth / 2 <= v105 + 1 )
        goto LABEL_62;
      continue;
    }
  }
LABEL_63:
  v26 = v25;
LABEL_64:
  v71 = m_nWidth + 14;
  v72 = m_nWidth - 1;
  if ( v72 >= 0 )
    v71 = v72;
  CGridNavNode::sm_nListIDBase = 0;
  v26->m_nSectorWidth = (v71 >> 4) + 1;
  v73 = this->m_lambda.__this;
  v74 = v73->m_nHeight;
  v75 = v74 + 14;
  v76 = v74 - 1;
  if ( v76 >= 0 )
    v75 = v76;
  v73->m_nSectorHeight = (v75 >> 4) + 1;
  v77 = -1;
  v78 = this->m_lambda.__this->m_nSectorHeight * this->m_lambda.__this->m_nSectorWidth;
  if ( v78 <= 0x124000000000000LL )
    v77 = 112LL * v78 + 8;
  v79 = operator new[](v77);
  *v79 = v78;
  v80 = (v79 + 1);
  v81 = v78 - 1LL;
  v82 = (v79 + 1);
  while ( v81 != -1 )
  {
    v83 = v82;
    --v81;
    ++v82;
    CGridNavSector::CGridNavSector(v83);
  }
  v84 = 0;
  this->m_lambda.__this->m_pSectors = v80;
  v85 = this->m_lambda.__this;
  v86 = v85;
  if ( v85->m_nSectorHeight > 0 )
  {
    do
    {
      m_nSectorWidth = v86->m_nSectorWidth;
      if ( m_nSectorWidth > 0 )
      {
        v88 = 0;
        do
        {
          v89 = &v86->m_pSectors[v88 + v84 * m_nSectorWidth];
          *(v89 + 96) = v88++;
          *(v89 + 100) = v84;
          v86 = this->m_lambda.__this;
          m_nSectorWidth = v86->m_nSectorWidth;
        }
        while ( m_nSectorWidth > v88 );
      }
      ++v84;
    }
    while ( v84 < v86->m_nSectorHeight );
    v85 = v86;
  }
  v85->m_bLoaded = 1;
LABEL_79:
  if ( (dataBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&dataBuffer.m_Memory);
  if ( v102 )
    goto LABEL_6;
  this->m_ResultStatus = PrerequisiteStatus_t::PS_FAILED;
}


