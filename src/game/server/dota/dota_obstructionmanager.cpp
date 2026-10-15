
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RemoveRecord  (line 166, @0x00000000025e0240, libserver.so)
// callers: C2DGridObstructionManager::UpdateObstructionRecord, C2DGridObstructionManager::DeleteObRecord
void __fastcall RemoveRecord(ObstructionGrid_t *const qTree, uint32 nXCells, ObstructionRecord_t *pObRec)
{
  int m_nCellYMin; // r11d
  int m_nCellYMax; // ecx
  uint32 i; // esi
  ObstructionGridNode_t *v7; // r8
  ObstructionGridNode_t *v8; // r9
  ObstructionRecord_t **m_pRecList; // rax
  unsigned __int64 v10; // rcx

  m_nCellYMin = pObRec->m_nCellYMin;
  m_nCellYMax = pObRec->m_nCellYMax;
  for ( i = m_nCellYMin * nXCells; m_nCellYMax >= m_nCellYMin; i += nXCells )
  {
    v7 = &qTree->m_Nodes[i + pObRec->m_nCellXMin];
    v8 = &qTree->m_Nodes[pObRec->m_nCellXMax + i];
    if ( v7 <= v8 )
    {
      do
      {
        m_pRecList = v7->m_pRecList;
        v10 = &v7->m_pRecList[v7->m_NumActive];
        if ( v7->m_pRecList < v10 )
        {
          while ( *m_pRecList != pObRec )
          {
            if ( v10 <= ++m_pRecList )
              goto LABEL_8;
          }
          *m_pRecList = *(v10 - 8);
          --v7->m_NumActive;
          *(v10 - 8) = 0;
        }
LABEL_8:
        ++v7;
      }
      while ( v8 >= v7 );
      m_nCellYMax = pObRec->m_nCellYMax;
    }
    ++m_nCellYMin;
  }
  pObRec->m_nInsertedQuerySet = -1;
}


// C2DGridObstructionManager::C2DGridObstructionManager  (line 210, @0x00000000025f9000, libserver.so)  // inlines: CEntityHandle, CHandle, SetCollisionRadius, V_memset, memset
// callers: CGridNav::CGridNav
void __fastcall C2DGridObstructionManager::C2DGridObstructionManager(C2DGridObstructionManager *const this)
{
  char v1; // al

  v1 = *(this + 72);
  this->m_TileXOffset = 0.0;
  this->m_TileYOffset = 0.0;
  this->m_TileXScale = 1.0;
  this->m_TileYScale = 1.0;
  this->m_nXTiles = 0;
  this->m_nYTiles = 0;
  this->m_nObjectPropertiesMaskAll = 0;
  this->m_nObjectPropertiesMaskNone = 0;
  this->m_nObjectPropertiesMaskMerged = 0;
  this->m_pObstructionNodeManager = 0;
  this->m_IgnoreHandle.m_Index = -1;
  *&this->m_MaxRadiusAdjustment = 0;
  this->m_SearcherRadiusAdjustment = 0.0;
  this->m_QuerySets.m_Memory[0].m_Nodes = 0;
  this->m_QuerySets.m_Memory[1].m_Nodes = 0;
  this->m_nQuerySetClassProperties.m_Memory[0] = 0;
  this->m_nQuerySetClassProperties.m_Memory[1] = 0;
  this->m_nQuerySetClassProperties.m_Memory[2] = 0;
  *this->m_RelationshipMatrix = 0;
  *(this + 72) = v1 & 0xFC;
  this->m_CollisionRadius = 0.0;
}


// C2DGridObstructionManager::~C2DGridObstructionManager  (line 245, @0x00000000025f9b80, libserver.so)
// calls: C2DGridObstructionManager::DeInit
// callers: CGridNav::~CGridNav
void __fastcall C2DGridObstructionManager::~C2DGridObstructionManager(C2DGridObstructionManager *const this)
{
  C2DGridObstructionManager::DeInit(this);
}


// C2DGridObstructionManager::Reset  (line 253, @0x00000000025f90b0, libserver.so)  // inlines: V_memset, memset
// callers: C2DGridObstructionManager::DeInit
void __fastcall C2DGridObstructionManager::Reset(C2DGridObstructionManager *const this)
{
  this->m_CheckLine.P0 = 0;
  this->m_CheckLine.P1 = 0;
  *&this->m_CheckLine.m_flCheckLineLength = 0;
  *&this->m_CheckLine.m_flDeltaXNorm = 0;
  this->m_CheckBoundingBox.m_minPt = 0;
  this->m_CheckBoundingBox.m_maxPt = 0;
}


// C2DGridObstructionManager::Init  (line 293, @0x00000000025f9dd0, libserver.so)  // inlines: Max<int>, memset
// calls: operator new, CObstructionRecordPoolManager::CObstructionRecordPoolManager, operator new [], memset, operator delete, _Unwind_Resume
// callers: CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::OnFileLoaded
void __fastcall C2DGridObstructionManager::Init(
        C2DGridObstructionManager *const this,
        int mapTileWidth,
        int mapTileHeight,
        float inXMin,
        float inYMin,
        float inXMax,
        float inYMax,
        float objectToTileDensity)
{
  float v9; // xmm6_4
  float v10; // xmm7_4
  int v11; // r12d
  int v12; // r14d
  int v13; // esi
  CObstructionRecordPoolManager *v14; // r13
  int m_nXTiles; // r12d
  size_t v16; // r12
  ObstructionGridNode_t *v17; // rax
  ObstructionGridNode_t *v18; // rax

  if ( inXMin == 0.0 )
  {
    v9 = mapTileWidth;
    if ( inYMin == 0.0 )
    {
      v10 = mapTileHeight;
      if ( v9 == inXMax && v10 == inYMax )
      {
        this->m_TileXScale = 1.0;
        this->m_TileXOffset = 0.0;
        this->m_TileYScale = 1.0;
        this->m_TileYOffset = 0.0;
        goto LABEL_4;
      }
    }
    else
    {
      v10 = mapTileHeight;
    }
  }
  else
  {
    v9 = mapTileWidth;
    v10 = mapTileHeight;
  }
  this->m_TileXOffset = -inXMin;
  this->m_TileYOffset = -inYMin;
  this->m_TileXScale = v9 / (inXMax - inXMin);
  this->m_TileYScale = v10 / (inYMax - inYMin);
LABEL_4:
  this->m_nYTiles = mapTileHeight;
  v11 = 2;
  this->m_nXTiles = mapTileWidth;
  v12 = 1;
  v13 = ((mapTileWidth * mapTileHeight) * objectToTileDensity);
  if ( v13 > 0 )
  {
    v12 = v13;
    if ( v13 >= 2 )
      v11 = v13;
  }
  v14 = operator new(0x38u);
  CObstructionRecordPoolManager::CObstructionRecordPoolManager(v14, v12, v11);
  m_nXTiles = this->m_nXTiles;
  this->m_pObstructionNodeManager = v14;
  v16 = 16LL * (this->m_nYTiles * m_nXTiles);
  v17 = operator new[](v16);
  this->m_QuerySets.m_Memory[0].m_Nodes = v17;
  memset(v17, 0, v16);
  v18 = operator new[](v16);
  this->m_QuerySets.m_Memory[1].m_Nodes = v18;
  memset(v18, 0, v16);
  *(this + 72) |= 1u;
}


// C2DGridObstructionManager::DeInit  (line 346, @0x00000000025f9a80, libserver.so)
// calls: operator delete [], CObstructionRecordPoolManager::~CObstructionRecordPoolManager, operator delete, C2DGridObstructionManager::Reset
// callers: CGridNav::GameInit, CGridNav::~CGridNav, C2DGridObstructionManager::~C2DGridObstructionManager
void __fastcall C2DGridObstructionManager::DeInit(C2DGridObstructionManager *const this)
{
  __int64 v2; // r15
  int v3; // r14d
  __int64 v4; // rbx
  ObstructionGridNode_t *m_Nodes; // rdi
  CObstructionRecordPoolManager *m_pObstructionNodeManager; // rbx

  if ( (*(this + 72) & 1) != 0 )
  {
    v2 = 0;
    v3 = this->m_nYTiles * this->m_nXTiles;
    do
    {
      v4 = 0;
      m_Nodes = this->m_QuerySets.m_Memory[v2].m_Nodes;
      if ( v3 != 0 )
      {
        do
        {
          if ( m_Nodes[v4].m_pRecList != 0 )
          {
            operator delete[](m_Nodes[v4].m_pRecList);
            this->m_QuerySets.m_Memory[v2].m_Nodes[v4].m_pRecList = 0;
            m_Nodes = this->m_QuerySets.m_Memory[v2].m_Nodes;
          }
          ++v4;
        }
        while ( v4 != (v3 - 1) + 1LL );
      }
      if ( m_Nodes != 0 )
      {
        operator delete[](m_Nodes);
        this->m_QuerySets.m_Memory[v2].m_Nodes = 0;
      }
      ++v2;
    }
    while ( v2 != 2 );
    m_pObstructionNodeManager = this->m_pObstructionNodeManager;
    if ( m_pObstructionNodeManager != 0 )
    {
      CObstructionRecordPoolManager::~CObstructionRecordPoolManager(this->m_pObstructionNodeManager);
      operator delete(m_pObstructionNodeManager);
      this->m_pObstructionNodeManager = 0;
    }
    this->m_nXTiles = 0;
    this->m_nYTiles = 0;
    *(this + 72) &= ~1u;
    C2DGridObstructionManager::Reset(this);
  }
}


// C2DGridObstructionManager::UpdateObjectObstruction  (line 375, @0x00000000025fa250, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CBaseEntity::GetAbsOrigin, C2DGridObstructionManager::UpdateCircleObstruction, C2DGridObstructionManager::UpdateSquareObstruction, C2DGridObstructionManager::GetNewObstructionRecord
// callers: CGridNav::SetSimpleObstructionBlocked, CGridNav::SetTreeBlocked, CDOTA_TempTree::InitTree, MoveUnit, CDOTALocomotor::Update, CDOTA_BaseNPC::MakePhantomBlocker, CDOTA_BaseNPC::Teleport, CDOTA_Ability_Earthshaker_Fissure::OnSpellStart, CDOTA_Ability_Rattletrap_PowerCogs::OnSpellStart, CDOTA_Ability_Tusk_IceShards::CreateShards
bool __fastcall C2DGridObstructionManager::UpdateObjectObstruction(
        C2DGridObstructionManager *const this,
        CObstructionObject *pObstructionObject)
{
  bool v3; // r12
  int v6; // eax
  ObstructionRecord_t *m_pObstructionRecord; // r15
  int v8; // r14d
  __int64 v9; // r8
  const CBaseEntity *v10; // rax
  const CBaseEntity *v11; // rax
  ObstructionQuerySetClass_t v12; // eax
  int m_nObstructionProperties; // ecx
  __int64 v14; // rdx
  __int16 v15; // di
  __int64 v16; // rsi
  __int16 v17; // di
  ObstructionRecord_t *NewObstructionRecord; // rax
  __int64 v19; // [rsp+8h] [rbp-58h]
  float x; // [rsp+10h] [rbp-50h]
  float y; // [rsp+14h] [rbp-4Ch]
  float r; // [rsp+18h] [rbp-48h]
  __int64 ra; // [rsp+18h] [rbp-48h]
  EHANDLE theHandle; // [rsp+20h] [rbp-40h] BYREF

  v3 = *(this + 72) & 1;
  if ( !v3 )
    return 0;
  v6 = (*(pObstructionObject->_vptr_CObstructionObject + 7))(pObstructionObject);
  m_pObstructionRecord = pObstructionObject->m_pObstructionRecord;
  v8 = v6;
  if ( v6 == 0 )
    return v3;
  v9 = (*(pObstructionObject->_vptr_CObstructionObject + 6))(pObstructionObject);
  if ( (*(*(v9 + 8) + 49LL) & 2) != 0 )
    return 0;
  if ( m_pObstructionRecord == 0 )
  {
    ra = v9;
    NewObstructionRecord = C2DGridObstructionManager::GetNewObstructionRecord(this, pObstructionObject);
    v9 = ra;
    m_pObstructionRecord = NewObstructionRecord;
  }
  v19 = v9;
  v10 = (*(pObstructionObject->_vptr_CObstructionObject + 6))(pObstructionObject);
  x = CBaseEntity::GetAbsOrigin(v10)->x;
  v11 = (*(pObstructionObject->_vptr_CObstructionObject + 6))(pObstructionObject);
  y = CBaseEntity::GetAbsOrigin(v11)->y;
  r = (*(pObstructionObject->_vptr_CObstructionObject + 1))(pObstructionObject);
  v12 = (*(pObstructionObject->_vptr_CObstructionObject + 4))(pObstructionObject);
  m_nObstructionProperties = pObstructionObject->m_nObstructionProperties;
  if ( v8 == 1 )
  {
    theHandle.m_Index = -1;
    v16 = *(v19 + 8);
    if ( v16 != 0 )
    {
      v17 = 0x7FFF;
      if ( *(v16 + 16) != -1 )
        v17 = *(v16 + 16) & 0x7FFF;
      theHandle.m_Index = (((*(v16 + 16) >> 15) - (*(v16 + 48) & 1)) << 15) | v17 & 0x7FFF;
    }
    C2DGridObstructionManager::UpdateSquareObstruction(
      this,
      m_pObstructionRecord,
      x - r,
      y - r,
      x + r,
      y + r,
      v12,
      m_nObstructionProperties,
      &theHandle,
      pObstructionObject);
  }
  else if ( v8 == 2 )
  {
    theHandle.m_Index = -1;
    v14 = *(v19 + 8);
    if ( v14 != 0 )
    {
      v15 = 0x7FFF;
      if ( *(v14 + 16) != -1 )
        v15 = *(v14 + 16) & 0x7FFF;
      theHandle.m_Index = (((*(v14 + 16) >> 15) - (*(v14 + 48) & 1)) << 15) | v15 & 0x7FFF;
    }
    C2DGridObstructionManager::UpdateCircleObstruction(
      this,
      m_pObstructionRecord,
      x,
      y,
      r,
      v12,
      m_nObstructionProperties,
      &theHandle,
      pObstructionObject);
  }
  return v3;
}


// C2DGridObstructionManager::ValidateObjectProperties  (line 437, @0x00000000025f90f0, libserver.so)
void __fastcall C2DGridObstructionManager::ValidateObjectProperties(
        C2DGridObstructionManager *const this,
        ObstructionQuerySetClass_t queryset,
        int properties)
{
  ;
}


// C2DGridObstructionManager::UpdateSquareObstruction  (line 463, @0x00000000025fa0a0, libserver.so)  // inlines: Get, GetInstance, operator=
// calls: C2DGridObstructionManager::UpdateObstructionRecord, CEntityHandle::operator CEntityInstance*, C2DGridObstructionManager::GetNewObstructionRecord
// callers: CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::OnFileLoaded, C2DGridObstructionManager::UpdateObjectObstruction
ObstructionRecord_t *__fastcall C2DGridObstructionManager::UpdateSquareObstruction(
        C2DGridObstructionManager *const this,
        ObstructionRecord_t *curObRec,
        float x1,
        float y1,
        float x2,
        float y2,
        ObstructionQuerySetClass_t querySet,
        int properties,
        const CEntityHandle *theHandle,
        CObstructionObject *object)
{
  ObstructionRecord_t *v11; // rbx
  float v12; // xmm4_4
  float v13; // xmm4_4
  CEntityHandle v14; // eax
  CEntityInstance *v16; // rax
  ObstructionRecord_t *NewObstructionRecord; // rax
  CObstructionObject *objecta; // [rsp+8h] [rbp-38h]
  int propertiesa; // [rsp+10h] [rbp-30h]
  char querySeta; // [rsp+14h] [rbp-2Ch]
  float y2a; // [rsp+18h] [rbp-28h]
  float x2a; // [rsp+1Ch] [rbp-24h]
  float y1a; // [rsp+20h] [rbp-20h]
  float x1a; // [rsp+24h] [rbp-1Ch]
  const CEntityHandle *theHandlea; // [rsp+28h] [rbp-18h]

  v11 = curObRec;
  if ( x1 > x2 )
  {
    v12 = x1;
    x1 = x2;
    x2 = v12;
  }
  if ( y1 > y2 )
  {
    v13 = y1;
    y1 = y2;
    y2 = v13;
  }
  if ( curObRec == 0 )
  {
    objecta = object;
    propertiesa = properties;
    querySeta = querySet;
    y2a = y2;
    x2a = x2;
    y1a = y1;
    x1a = x1;
    theHandlea = theHandle;
    v16 = CEntityHandle::operator CEntityInstance *(theHandle);
    NewObstructionRecord = C2DGridObstructionManager::GetNewObstructionRecord(this, v16);
    object = objecta;
    v11 = NewObstructionRecord;
    properties = propertiesa;
    LOBYTE(querySet) = querySeta;
    y2 = y2a;
    x2 = x2a;
    y1 = y1a;
    x1 = x1a;
    theHandle = theHandlea;
  }
  v11->m_ObjectProperties = properties;
  v14.m_Index = theHandle->m_Index;
  v11->m_pObstructionObject = object;
  v11->m_ObsType = 1;
  v11->m_QuerySet = querySet;
  v11->m_fXMin = x1;
  v11->m_ObjectID = v14.m_Index;
  v11->m_fYMin = y1;
  v11->m_fXMax = x2;
  v11->m_fYMax = y2;
  C2DGridObstructionManager::UpdateObstructionRecord(this, v11);
  return v11;
}


// C2DGridObstructionManager::UpdateCircleObstruction  (line 497, @0x00000000025fa170, libserver.so)  // inlines: Get, GetInstance, operator=
// calls: C2DGridObstructionManager::UpdateObstructionRecord, CEntityHandle::operator CEntityInstance*, C2DGridObstructionManager::GetNewObstructionRecord
// callers: C2DGridObstructionManager::UpdateObjectObstruction
ObstructionRecord_t *__fastcall C2DGridObstructionManager::UpdateCircleObstruction(
        C2DGridObstructionManager *const this,
        ObstructionRecord_t *curObRec,
        float x,
        float y,
        float radius,
        ObstructionQuerySetClass_t querySet,
        int properties,
        const CEntityHandle *theHandle,
        CObstructionObject *object)
{
  ObstructionRecord_t *v10; // rbx
  CEntityHandle v11; // eax
  CEntityInstance *v13; // rax
  ObstructionRecord_t *NewObstructionRecord; // rax
  CObstructionObject *objecta; // [rsp+8h] [rbp-38h]
  int propertiesa; // [rsp+14h] [rbp-2Ch]
  char querySeta; // [rsp+18h] [rbp-28h]
  float radiusa; // [rsp+1Ch] [rbp-24h]
  float ya; // [rsp+20h] [rbp-20h]
  float xa; // [rsp+24h] [rbp-1Ch]
  const CEntityHandle *theHandlea; // [rsp+28h] [rbp-18h]

  v10 = curObRec;
  if ( curObRec == 0 )
  {
    objecta = object;
    propertiesa = properties;
    querySeta = querySet;
    radiusa = radius;
    ya = y;
    xa = x;
    theHandlea = theHandle;
    v13 = CEntityHandle::operator CEntityInstance *(theHandle);
    NewObstructionRecord = C2DGridObstructionManager::GetNewObstructionRecord(this, v13);
    object = objecta;
    v10 = NewObstructionRecord;
    properties = propertiesa;
    LOBYTE(querySet) = querySeta;
    radius = radiusa;
    y = ya;
    x = xa;
    theHandle = theHandlea;
  }
  v10->m_ObjectProperties = properties;
  v11.m_Index = theHandle->m_Index;
  v10->m_fX = x;
  v10->m_fRadius = radius;
  v10->m_pObstructionObject = object;
  v10->m_fXMin = x - radius;
  v10->m_ObjectID = v11.m_Index;
  v10->m_ObsType = 2;
  v10->m_QuerySet = querySet;
  v10->m_fY = y;
  v10->m_fYMin = y - radius;
  v10->m_fXMax = x + radius;
  v10->m_fYMax = radius + y;
  C2DGridObstructionManager::UpdateObstructionRecord(this, v10);
  return v10;
}


// C2DGridObstructionManager::GetNewObstructionRecord  (line 529, @0x00000000025f9fe0, libserver.so)  // inlines: AssignObstructionRecord, Max<float>
// calls: CObstructionRecordPoolManager::GetNewObsRecord
// callers: C2DGridObstructionManager::UpdateSquareObstruction, C2DGridObstructionManager::UpdateCircleObstruction, C2DGridObstructionManager::UpdateObjectObstruction
ObstructionRecord_t *__fastcall C2DGridObstructionManager::GetNewObstructionRecord(
        C2DGridObstructionManager *const this,
        CObstructionObject *pObstructionObject)
{
  ObstructionRecord_t *result; // rax
  ObstructionRecord_t *v5; // rbx
  float v6; // xmm0_4

  result = CObstructionRecordPoolManager::GetNewObsRecord(this->m_pObstructionNodeManager);
  v5 = result;
  result->m_nInsertedQuerySet = -1;
  result->m_pObstructionObject = 0;
  result->m_QuerySet = 1;
  if ( pObstructionObject != 0 )
  {
    result->m_RadiusAdjustClass = (*(pObstructionObject->_vptr_CObstructionObject + 3))(pObstructionObject);
    v5->m_RadiusAdjustClassMask = 1 << (*(pObstructionObject->_vptr_CObstructionObject + 3))(pObstructionObject);
    v6 = (*(pObstructionObject->_vptr_CObstructionObject + 2))(pObstructionObject);
    v5->m_fRadiusAdjustFactor = v6;
    if ( v6 > 0.0 )
      this->m_MaxRadiusAdjustment = fmaxf(this->m_MaxRadiusAdjustment, v6);
    pObstructionObject->m_pObstructionRecord = v5;
    v5->m_pObstructionObject = pObstructionObject;
    return v5;
  }
  else
  {
    result->m_RadiusAdjustClass = 0;
    result->m_RadiusAdjustClassMask = 0;
    result->m_fRadiusAdjustFactor = 0.0;
  }
  return result;
}


// C2DGridObstructionManager::UpdateObstructionRecord  (line 570, @0x00000000025f9100, libserver.so)  // inlines: ConvertToTileX, ConvertToTileY, memcpy
// calls: operator new [], memcpy, RemoveRecord, operator delete []
// callers: C2DGridObstructionManager::UpdateSquareObstruction, C2DGridObstructionManager::UpdateCircleObstruction
void __fastcall C2DGridObstructionManager::UpdateObstructionRecord(
        C2DGridObstructionManager *const this,
        ObstructionRecord_t *ObRec)
{
  float m_TileXOffset; // xmm1_4
  float v5; // xmm2_4
  float m_TileYOffset; // xmm0_4
  float m_TileYScale; // xmm3_4
  float v8; // xmm1_4
  int v9; // eax
  float v10; // xmm2_4
  float v11; // xmm0_4
  int v12; // esi
  int v13; // eax
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  uint32 m_nXTiles; // esi
  int v18; // eax
  int v19; // eax
  __int64 m_nInsertedQuerySet; // rax
  int v21; // r13d
  __int64 v22; // r12
  ObstructionGridNode_t *v23; // r15
  ObstructionGridNode_t *i; // r12
  ObstructionRecord_t **m_pRecList; // rax
  __int64 m_NumActive; // rdx
  int m_BlockSize; // eax
  int v28; // eax
  size_t v29; // rdi
  ObstructionRecord_t **v30; // rax
  ObstructionRecord_t **v31; // rdi
  ObstructionRecord_t **v32; // r14
  __int64 v33; // rdx
  int Y1; // [rsp+0h] [rbp-60h]
  int X2; // [rsp+4h] [rbp-5Ch]
  C2DGridObstructionManager *thisa; // [rsp+8h] [rbp-58h]
  ObstructionGrid_t *v37; // [rsp+20h] [rbp-40h]
  int X1; // [rsp+28h] [rbp-38h]
  int Y2; // [rsp+2Ch] [rbp-34h]

  m_TileXOffset = this->m_TileXOffset;
  v5 = ObRec->m_fXMin + m_TileXOffset;
  m_TileYOffset = this->m_TileYOffset;
  m_TileYScale = this->m_TileYScale;
  v8 = (m_TileXOffset + ObRec->m_fXMax) * this->m_TileXScale;
  v9 = (v5 * this->m_TileXScale);
  v10 = ObRec->m_fYMin + m_TileYOffset;
  v11 = m_TileYOffset + ObRec->m_fYMax;
  v12 = v9;
  v13 = 0;
  v14 = v10 * m_TileYScale;
  if ( v12 < 0 )
    v12 = 0;
  X1 = v12;
  v15 = v8 - 0.0000099999997;
  v16 = (v11 * m_TileYScale) - 0.0000099999997;
  if ( v14 >= 0 )
    v13 = v14;
  m_nXTiles = this->m_nXTiles;
  Y1 = v13;
  v18 = m_nXTiles - 1;
  if ( v15 <= (m_nXTiles - 1) )
    v18 = v15;
  X2 = v18;
  v19 = this->m_nYTiles - 1;
  if ( v16 <= v19 )
    v19 = v16;
  Y2 = v19;
  m_nInsertedQuerySet = ObRec->m_nInsertedQuerySet;
  if ( m_nInsertedQuerySet == ObRec->m_QuerySet )
  {
    if ( ObRec->m_nCellXMin == X1 && ObRec->m_nCellXMax == X2 && ObRec->m_nCellYMin == Y1 && ObRec->m_nCellYMax == Y2 )
      return;
    goto LABEL_32;
  }
  if ( m_nInsertedQuerySet != -1 )
LABEL_32:
    RemoveRecord(&this->m_QuerySets.m_Memory[m_nInsertedQuerySet], m_nXTiles, ObRec);
  if ( X1 <= X2 && Y2 >= Y1 )
  {
    v21 = Y1;
    thisa = this;
    v37 = &this->m_QuerySets.m_Memory[ObRec->m_QuerySet];
    do
    {
      v22 = v21 * thisa->m_nXTiles;
      v23 = &v37->m_Nodes[v22 + X1];
      for ( i = &v37->m_Nodes[X2 + v22]; i >= v23; ++v23 )
      {
        m_NumActive = v23->m_NumActive;
        m_BlockSize = v23->m_BlockSize;
        if ( m_NumActive < m_BlockSize )
        {
          m_pRecList = v23->m_pRecList;
        }
        else
        {
          v28 = m_BlockSize + 32;
          v23->m_BlockSize = v28;
          v29 = 8LL * v28;
          if ( v28 > 0xFE0000000000000LL )
            v29 = -1;
          v30 = operator new[](v29);
          v31 = v23->m_pRecList;
          v32 = v30;
          if ( v23->m_pRecList != 0 )
          {
            v33 = v23->m_NumActive;
            if ( v33 <= 0 || (memcpy(v30, v23->m_pRecList, 8 * v33), v31 = v23->m_pRecList, v23->m_pRecList != 0) )
              operator delete[](v31);
          }
          v23->m_pRecList = v32;
          m_NumActive = v23->m_NumActive;
          m_pRecList = v32;
        }
        m_pRecList[m_NumActive] = ObRec;
        ++v23->m_NumActive;
      }
      ++v21;
    }
    while ( Y2 >= v21 );
    ObRec->m_nInsertedQuerySet = ObRec->m_QuerySet;
    ObRec->m_nCellXMin = X1;
    ObRec->m_nCellXMax = X2;
    ObRec->m_nCellYMin = Y1;
    ObRec->m_nCellYMax = Y2;
  }
}


// C2DGridObstructionManager::RemoveObjectObstruction  (line 654, @0x00000000025f9440, libserver.so)  // inlines: AssignObstructionRecord
// calls: C2DGridObstructionManager::DeleteObRecord
// callers: CGridNav::SetSimpleObstructionBlocked, CGridNav::SetTreeBlocked, CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction, CDOTA_Tree::ShutdownTree, CDOTA_TempTree::CutDown, CDOTA_BaseNPC::UpdateOnRemove
void __fastcall C2DGridObstructionManager::RemoveObjectObstruction(
        C2DGridObstructionManager *const this,
        CObstructionObject *pObstructionObject)
{
  ObstructionRecord_t *m_pObstructionRecord; // rsi

  m_pObstructionRecord = pObstructionObject->m_pObstructionRecord;
  if ( m_pObstructionRecord != 0 )
  {
    C2DGridObstructionManager::DeleteObRecord(this, m_pObstructionRecord);
    pObstructionObject->m_pObstructionRecord = 0;
  }
}


// C2DGridObstructionManager::RefreshObjectClassInfo  (line 670, @0x00000000025f9370, libserver.so)  // inlines: Max<float>
// callers: CDOTA_BaseNPC::ResetPlayerControls, CDOTA_BaseNPC::UpdateControllableMask
void __fastcall C2DGridObstructionManager::RefreshObjectClassInfo(
        C2DGridObstructionManager *const this,
        CObstructionObject *pObstructionObject)
{
  ObstructionRecord_t *m_pObstructionRecord; // r12
  float v5; // xmm0_4

  if ( pObstructionObject != 0 )
  {
    m_pObstructionRecord = pObstructionObject->m_pObstructionRecord;
    m_pObstructionRecord->m_RadiusAdjustClass = (*(pObstructionObject->_vptr_CObstructionObject + 3))(pObstructionObject);
    m_pObstructionRecord->m_RadiusAdjustClassMask = 1 << (*(pObstructionObject->_vptr_CObstructionObject + 3))(pObstructionObject);
    v5 = (*(pObstructionObject->_vptr_CObstructionObject + 2))(pObstructionObject);
    m_pObstructionRecord->m_fRadiusAdjustFactor = v5;
    if ( v5 > 0.0 )
      this->m_MaxRadiusAdjustment = fmaxf(this->m_MaxRadiusAdjustment, v5);
  }
}


// C2DGridObstructionManager::DeleteObRecord  (line 696, @0x00000000025f93f0, libserver.so)  // inlines: FreeRecord
// calls: RemoveRecord
// callers: C2DGridObstructionManager::RemoveObjectObstruction
void __fastcall C2DGridObstructionManager::DeleteObRecord(
        C2DGridObstructionManager *const this,
        ObstructionRecord_t *ObRec)
{
  __int64 m_nInsertedQuerySet; // rax
  CObstructionRecordPoolManager *m_pObstructionNodeManager; // rax

  if ( ObRec != 0 )
  {
    m_nInsertedQuerySet = ObRec->m_nInsertedQuerySet;
    if ( m_nInsertedQuerySet != -1 )
      RemoveRecord(&this->m_QuerySets.m_Memory[m_nInsertedQuerySet], this->m_nXTiles, ObRec);
    m_pObstructionNodeManager = this->m_pObstructionNodeManager;
    ObRec->m_pObstructionObject = m_pObstructionNodeManager->m_pFreeHead;
    ++m_pObstructionNodeManager->m_nFreeBlocks;
    m_pObstructionNodeManager->m_pFreeHead = ObRec;
  }
}


// C2DGridObstructionManager::IsRecordInIgnoreList  (line 713, @0x00000000025f9470, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator==
// calls: CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible
// callers: C2DGridObstructionManager::CheckForCollisionsInNode
// globals: CEntityHandle::gm_pEntityList
bool __fastcall C2DGridObstructionManager::IsRecordInIgnoreList(
        C2DGridObstructionManager *const this,
        ObstructionRecord_t *ObRec)
{
  uint32 m_Index; // eax
  uint32 v3; // edx
  bool v4; // bl
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rdi
  const Vector *AbsOrigin; // rax

  m_Index = ObRec->m_ObjectID.m_Index;
  v3 = this->m_IgnoreHandle.m_Index;
  if ( m_Index == v3 )
    return 1;
  v4 = (*(this + 72) & 0x40) != 0;
  if ( (*(this + 72) & 0x40) != 0 )
    return 0;
  if ( v3 + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_IgnoreHandle.m_Index);
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[m_Index_low & 0x1FF];
      if ( v7 != 0 && v3 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && m_pInstance[61].m_hPrivateScope.m_hScope != 0
          && m_Index + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[ObRec->m_ObjectID.m_Index & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            {
              v11 = v10->m_pInstance;
              if ( v10->m_pInstance != 0
                && BYTE3(v11[7]._vptr_IHandleEntity) != 0
                && (v11[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
                && HIBYTE(v11[7].m_CScriptComponent) != HIBYTE(m_pInstance[7].m_CScriptComponent) )
              {
                AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
                if ( !CDOTAFogOfWarSystem::IsLocationVisible(
                        &g_DOTAFogOfWarSystem,
                        HIBYTE(m_pInstance[7].m_CScriptComponent),
                        AbsOrigin,
                        0.0) )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}


// C2DGridObstructionManager::SetCollisionRadius  (line 744, @0x00000000025f95f0, libserver.so)
// callers: CGridNav::PrepareObstructionManager
void __fastcall C2DGridObstructionManager::SetCollisionRadius(
        C2DGridObstructionManager *const this,
        bool UseFlag,
        float a3,
        float Radius)
{
  *(this + 72) = (2 * UseFlag) | *(this + 72) & 0xFD;
  if ( !UseFlag )
    a3 = 0.0;
  this->m_CollisionRadius = a3;
}


// C2DGridObstructionManager::SetSearcherRelationship  (line 755, @0x00000000025f9620, libserver.so)
// callers: CGridNav::PrepareObstructionManager
void __fastcall C2DGridObstructionManager::SetSearcherRelationship(
        C2DGridObstructionManager *const this,
        ObstructionRelationshipClass_t searcherClass,
        float a3,
        float searcherRadiusAdjustment)
{
  this->m_SearcherClass = searcherClass;
  this->m_SearcherRadiusAdjustment = a3;
}


// C2DGridObstructionManager::SetRadiusAdjustmentRelationship  (line 767, @0x00000000025f9630, libserver.so)
// callers: CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::OnFileLoaded
void __fastcall C2DGridObstructionManager::SetRadiusAdjustmentRelationship(
        C2DGridObstructionManager *const this,
        int searcherType,
        int searcheeType,
        bool useAdjustment)
{
  int v4; // eax

  v4 = 1 << searcheeType;
  if ( useAdjustment )
    this->m_RelationshipMatrix[searcherType] |= v4;
  else
    this->m_RelationshipMatrix[searcherType] &= ~v4;
}


// C2DGridObstructionManager::CheckForCollisions  (line 794, @0x000000000261fa30, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: C2DGridObstructionManager::CheckForCollisionsByQuerySet
// callers: CGridNav::CheckForCollisionsWithLine, CGridNav::CheckForCollisions
bool __fastcall C2DGridObstructionManager::CheckForCollisions(
        C2DGridObstructionManager *const this,
        double X1,
        float Y1,
        float X2,
        float Y2,
        CollisionResultList_t *resultList,
        uint32 *ignoreHandle,
        uint checkFlags,
        int maxResults)
{
  bool result; // al
  uint m_nObjectPropertiesMaskAll; // eax
  unsigned int v11; // r11d
  uint v12; // eax
  ObstructionQuerySetFlags_t v13; // eax
  EHANDLE ignoreHandlea; // [rsp+0h] [rbp-10h] BYREF

  result = *(this + 72) & 1;
  if ( result )
  {
    m_nObjectPropertiesMaskAll = -1;
    v11 = this->m_nQuerySetClassProperties.m_Memory[2];
    if ( this->m_nObjectPropertiesMaskAll != 0 )
      m_nObjectPropertiesMaskAll = this->m_nObjectPropertiesMaskAll;
    v12 = ~this->m_nObjectPropertiesMaskNone & m_nObjectPropertiesMaskAll;
    if ( ((this->m_nQuerySetClassProperties.m_Memory[1] | v11) & v12) != 0 )
    {
      v13 = (((v11 | this->m_nQuerySetClassProperties.m_Memory[0]) & v12) != 0) | 2;
    }
    else
    {
      if ( ((v11 | this->m_nQuerySetClassProperties.m_Memory[0]) & v12) == 0 )
        return 0;
      v13 = ObstructionQuerySetFlags_t::DOTA_OBSTRUCTION_QUERY_F_STATIC;
    }
    ignoreHandlea.m_Index = *ignoreHandle;
    return C2DGridObstructionManager::CheckForCollisionsByQuerySet(
             this,
             v13,
             X1,
             Y1,
             X2,
             Y2,
             resultList,
             &ignoreHandlea.m_Index,
             checkFlags,
             maxResults);
  }
  return result;
}


// C2DGridObstructionManager::CheckForCollisionsByQuerySet  (line 850, @0x000000000261f420, libserver.so)  // inlines: ConvertToTileX, ConvertToTileY, EnsureCapacity, Max<float>, Min<float>, Set, memcpy, operator=
// calls: C2DGridObstructionManager::CheckForCollisionsInNode, memcpy, sqrtf
// callers: C2DGridObstructionManager::CheckForCollisions
// globals: g_numCollisionTests, g_numCollisionResults, g_maxCollisionResults
bool __fastcall C2DGridObstructionManager::CheckForCollisionsByQuerySet(
        C2DGridObstructionManager *const this,
        ObstructionQuerySetFlags_t querySetFlags,
        double X1,
        float Y1,
        float X2,
        float Y2,
        CollisionResultList_t *resultList,
        uint32 *ignoreHandle,
        uint checkFlags,
        int maxResults)
{
  float v10; // xmm4_4
  char v14; // bl
  int v15; // r13d
  uint32 m_nGrowSize; // eax
  IntersectionRecord_t *m_pMemory; // rsi
  IntersectionRecord_t *v18; // rax
  bool v19; // r8
  char v20; // al
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  bool v24; // zf
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float m_CollisionRadius; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm6_4
  float m_TileXOffset; // xmm7_4
  int v34; // edi
  int m_nXTiles; // ecx
  float m_TileYScale; // xmm8_4
  float m_TileYOffset; // xmm9_4
  int v38; // edx
  int v39; // esi
  bool result; // al
  float v41; // xmm3_4
  float v42; // xmm5_4
  int v43; // r8d
  ObstructionQuerySetFlags_t v44; // eax
  ObstructionGridNode_t *m_Nodes; // r13
  ObstructionGridNode_t *v46; // rbx
  ObstructionGridNode_t *i; // r13
  ObstructionGridNode_t *v48; // r12
  CollisionResultList_t *m_ResultList; // rax
  __int64 v50; // rcx
  int v51; // edx
  const ObstructionRecord_t *m_pObsRec; // rax
  uint64 m_Size; // rdx
  uint64 v54; // rax
  float v55; // xmm9_4
  IntersectionRecord_t *v56; // rax
  int v57; // [rsp+Ch] [rbp-54h]
  int x1; // [rsp+10h] [rbp-50h]
  __int64 x1a; // [rsp+10h] [rbp-50h]
  float x1b; // [rsp+10h] [rbp-50h]
  float Y2a; // [rsp+18h] [rbp-48h]
  int Y2b; // [rsp+18h] [rbp-48h]
  float Y2c; // [rsp+18h] [rbp-48h]
  float X2a; // [rsp+1Ch] [rbp-44h]
  int X2b; // [rsp+1Ch] [rbp-44h]
  float X2c; // [rsp+1Ch] [rbp-44h]
  float nQuerySet; // [rsp+24h] [rbp-3Ch]
  unsigned int nQuerySeta; // [rsp+24h] [rbp-3Ch]
  int nQuerySetb; // [rsp+24h] [rbp-3Ch]
  float X1a; // [rsp+28h] [rbp-38h]
  __int64 X1b; // [rsp+28h] [rbp-38h]
  IntersectionRecord_t *X1c; // [rsp+28h] [rbp-38h]

  v10 = *&X1;
  v14 = checkFlags;
  if ( maxResults > 0 )
  {
    v15 = maxResults + 1;
    if ( maxResults + 1 > resultList->m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = resultList->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          v57 = maxResults;
          x1b = Y2;
          Y2c = X2;
          X2c = Y1;
          nQuerySetb = SLODWORD(X1);
          X1c = resultList->m_Memory.m_pMemory;
          v56 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v15, *&X1, Y1, X2, Y2, X1);
          resultList->m_Memory.m_pMemory = v56;
          v10 = *&nQuerySetb;
          Y1 = X2c;
          X2 = Y2c;
          Y2 = x1b;
          maxResults = v57;
          if ( X1c != 0 )
          {
            memcpy(v56, X1c, 24LL * resultList->m_Memory.m_nAllocationCount);
            maxResults = v57;
            Y2 = x1b;
            X2 = Y2c;
            Y1 = X2c;
            v10 = *&nQuerySetb;
          }
          resultList->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          m_pMemory = resultList->m_Memory.m_pMemory;
          x1 = maxResults;
          Y2a = Y2;
          X2a = X2;
          nQuerySet = Y1;
          X1a = *&X1;
          if ( m_pMemory != 0 )
            v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 24LL * v15, *&X1, Y1, X2, Y2, X1);
          else
            v18 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v15, *&X1, Y1, X2, Y2, X1);
          maxResults = x1;
          resultList->m_Memory.m_pMemory = v18;
          v10 = X1a;
          Y1 = nQuerySet;
          X2 = X2a;
          Y2 = Y2a;
        }
        resultList->m_Memory.m_nAllocationCount = v15;
      }
    }
  }
  v19 = 0;
  v20 = (((v14 & 0x10) != 0) << 6)
      | (32 * ((v14 & 8) != 0)) & 0x3F
      | (16 * ((v14 & 4) != 0))
      | (8 * ((v14 & 2) != 0)) & 0xF
      | (4 * (v14 & 1))
      | *(this + 72) & 3;
  *(this + 72) = v20;
  if ( (v20 & 2) != 0 )
    v19 = (this->m_SearcherClass - 1) <= 2;
  this->m_CurrentCollisionCount = 0;
  *(this + 73) = v19 | *(this + 73) & 0xFE;
  if ( (v14 & 8) != 0 || maxResults <= 0 )
    maxResults = -1;
  this->m_MaxCollisionCount = maxResults;
  this->m_ClosestDistanceIndex = -1;
  this->m_ClosestDistance = 3.4028235e38;
  this->m_CurrentObstruciton = 0;
  this->m_ResultList = resultList;
  this->m_IgnoreHandle.m_Index = *ignoreHandle;
  if ( (v14 & 1) == 0 )
  {
    if ( (v14 & 4) == 0 )
    {
      Y2 = Y1;
      X2 = v10;
    }
    if ( (v14 & 2) == 0 )
    {
      Y1 = Y2;
      v10 = X2;
    }
  }
  v21 = 0.0;
  v22 = Y2 - Y1;
  this->m_CheckLine.P0.X = v10;
  this->m_CheckLine.P0.Y = Y1;
  v23 = X2 - v10;
  this->m_CheckLine.P1.X = X2;
  this->m_CheckLine.P1.Y = Y2;
  if ( (Y2 - Y1) == 0.0 && v23 == 0.0 )
  {
    this->m_CheckLine.m_flCheckLineLength = 0.0;
    this->m_CheckLine.m_flCheckLineInvLength = 1.0;
    this->m_CheckLine.m_flDeltaXNorm = 0.0;
    this->m_CheckLine.m_flDeltaYNorm = 0.0;
  }
  else
  {
    v55 = fsqrt((v23 * v23) + (v22 * v22));
    this->m_CheckLine.m_flCheckLineLength = v55;
    this->m_CheckLine.m_flCheckLineInvLength = 1.0 / v55;
    this->m_CheckLine.m_flDeltaXNorm = v23 * (1.0 / v55);
    this->m_CheckLine.m_flDeltaYNorm = v22 * (1.0 / v55);
  }
  v24 = (*(this + 73) & 1) == 0;
  v25 = fmaxf(Y1, Y2);
  v26 = fmaxf(v10, X2);
  v27 = fminf(v10, X2);
  m_CollisionRadius = this->m_CollisionRadius;
  v29 = v26 + m_CollisionRadius;
  v30 = v27 - m_CollisionRadius;
  v31 = fminf(Y1, Y2) - m_CollisionRadius;
  this->m_CheckBoundingBox.m_maxPt.X = v29;
  v32 = v25 + m_CollisionRadius;
  this->m_CheckBoundingBox.m_minPt.X = v30;
  this->m_CheckBoundingBox.m_minPt.Y = v31;
  this->m_CheckBoundingBox.m_maxPt.Y = v32;
  if ( !v24 )
    v21 = this->m_MaxRadiusAdjustment + this->m_SearcherRadiusAdjustment;
  m_TileXOffset = this->m_TileXOffset;
  v34 = 0;
  m_nXTiles = this->m_nXTiles;
  m_TileYScale = this->m_TileYScale;
  m_TileYOffset = this->m_TileYOffset;
  v38 = (((v30 - v21) + m_TileXOffset) * this->m_TileXScale);
  v39 = (((v29 + v21) + m_TileXOffset) * this->m_TileXScale);
  if ( v38 < 0 )
    v38 = 0;
  if ( v39 > m_nXTiles - 1 )
    v39 = m_nXTiles - 1;
  result = 0;
  if ( v38 <= v39 )
  {
    v41 = ((v31 - v21) + m_TileYOffset) * m_TileYScale;
    v42 = ((v21 + v32) + m_TileYOffset) * m_TileYScale;
    if ( v41 >= 0 )
      v34 = v41;
    v43 = this->m_nYTiles - 1;
    X2b = v34;
    if ( v42 <= v43 )
      v43 = v42;
    Y2b = v43;
    if ( v34 <= v43 )
    {
      nQuerySeta = 0;
      X1b = v39 - v38;
      x1a = v38;
      while ( 1 )
      {
        v44 = querySetFlags;
        if ( _bittest(&v44, nQuerySeta) )
        {
          m_Nodes = this->m_QuerySets.m_Memory[nQuerySeta].m_Nodes;
          v46 = &m_Nodes[x1a + m_nXTiles * X2b];
          for ( i = &m_Nodes[x1a + m_nXTiles * Y2b]; i >= v46; v46 += m_nXTiles )
          {
            if ( !__CFADD__(v46, X1b * 16) )
            {
              v48 = v46;
              do
              {
                if ( v48->m_NumActive != 0 )
                {
                  C2DGridObstructionManager::CheckForCollisionsInNode(this, v48);
                  if ( *(this + 72) < 0 )
                  {
                    m_nXTiles = this->m_nXTiles;
                    v46 = i + 1;
                    nQuerySeta = 2;
                    goto LABEL_42;
                  }
                }
                ++v48;
              }
              while ( &v46[X1b] >= v48 );
              m_nXTiles = this->m_nXTiles;
            }
LABEL_42:
            ;
          }
        }
        if ( nQuerySeta != 0 )
          break;
        nQuerySeta = 1;
      }
      m_ResultList = this->m_ResultList;
      if ( m_ResultList->m_Size > 0 )
      {
        v50 = 0;
        v51 = 0;
        do
        {
          ++v51;
          m_pObsRec = m_ResultList->m_Memory.m_pMemory[v50++].m_pObsRec;
          m_pObsRec->m_ObjectProperties &= ~0x8000u;
          m_ResultList = this->m_ResultList;
        }
        while ( m_ResultList->m_Size > v51 );
        ++g_numCollisionTests;
        g_numCollisionResults += m_ResultList->m_Size;
        m_Size = m_ResultList->m_Size;
        v54 = g_maxCollisionResults;
        if ( m_Size >= g_maxCollisionResults )
          v54 = m_Size;
        g_maxCollisionResults = v54;
      }
      return this->m_CurrentCollisionCount > 0;
    }
  }
  return result;
}


// C2DGridObstructionManager::GetCollisionPadding  (line 1031, @0x00000000025f9660, libserver.so)  // inlines: GetCollisionPadding
// callers: CDOTA_BaseNPC::CheckForCollisionsWithNPCs
float __fastcall C2DGridObstructionManager::GetCollisionPadding(
        C2DGridObstructionManager *const this,
        ObstructionRelationshipClass_t type1,
        float flPadding1,
        ObstructionRelationshipClass_t type2,
        float flPadding2)
{
  float v5; // xmm2_4

  v5 = 0.0;
  if ( ((1 << type1) & this->m_RelationshipMatrix[type2]) != 0 )
    v5 = flPadding1 + 0.0;
  if ( ((1 << type2) & this->m_RelationshipMatrix[type1]) != 0 )
    return v5 + flPadding2;
  return v5;
}


// C2DGridObstructionManager::CheckForCollisionsInNode  (line 1039, @0x000000000261f220, libserver.so)  // inlines: GetCollisionPadding, ValidateAgainstPropertySearchMasks
// calls: C2DGridObstructionManager::IsRecordInIgnoreList, C2DGridObstructionManager::CheckBoxCollision, C2DGridObstructionManager::CheckCircleCollision
// callers: C2DGridObstructionManager::CheckForCollisionsByQuerySet
void __fastcall C2DGridObstructionManager::CheckForCollisionsInNode(
        C2DGridObstructionManager *const this,
        ObstructionGridNode_t *pNode)
{
  __int64 m_SearcherClass; // rcx
  ObstructionRecord_t **m_pRecList; // rbx
  float m_CollisionRadius; // xmm7_4
  int v6; // edx
  ObstructionRecord_t **v7; // r14
  float v8; // xmm6_4
  int v9; // ecx
  ObstructionRecord_t *v10; // r12
  float m_fXMax; // xmm2_4
  float m_fXMin; // xmm3_4
  float m_fYMax; // xmm4_4
  float m_fYMin; // xmm5_4
  float v15; // xmm1_4
  bool IsRecordInIgnoreList; // al
  float v17; // xmm1_4
  uint8 m_ObsType; // al
  float v19; // [rsp+10h] [rbp-40h]
  int v20; // [rsp+14h] [rbp-3Ch]
  int v21; // [rsp+18h] [rbp-38h]
  float radiusAdjustment; // [rsp+1Ch] [rbp-34h]

  m_SearcherClass = this->m_SearcherClass;
  m_pRecList = pNode->m_pRecList;
  m_CollisionRadius = this->m_CollisionRadius;
  v6 = this->m_RelationshipMatrix[m_SearcherClass];
  v7 = &pNode->m_pRecList[pNode->m_NumActive];
  if ( pNode->m_pRecList != v7 )
  {
    v8 = 0.0;
    v9 = (1 << m_SearcherClass);
    do
    {
      v10 = *m_pRecList;
      if ( v7 - 1 > m_pRecList )
        _mm_prefetch(m_pRecList[1], 1);
      if ( this->m_nObjectPropertiesMaskAll == (v10->m_ObjectProperties & this->m_nObjectPropertiesMaskMerged) )
      {
        m_fXMax = v10->m_fXMax;
        m_fXMin = v10->m_fXMin;
        m_fYMax = v10->m_fYMax;
        m_fYMin = v10->m_fYMin;
        if ( (*(this + 73) & 1) != 0 )
        {
          v15 = v8;
          if ( (v6 & v10->m_RadiusAdjustClassMask) != 0 )
            v15 = v10->m_fRadiusAdjustFactor + 0.0;
          if ( (v9 & this->m_RelationshipMatrix[v10->m_RadiusAdjustClass]) != 0 )
            v15 = v15 + this->m_SearcherRadiusAdjustment;
          m_fXMax = m_fXMax + v15;
          m_fXMin = m_fXMin - v15;
          m_CollisionRadius = this->m_CollisionRadius + v15;
          m_fYMax = m_fYMax + v15;
          m_fYMin = m_fYMin - v15;
        }
        if ( this->m_CheckBoundingBox.m_minPt.X <= m_fXMax
          && m_fXMin <= this->m_CheckBoundingBox.m_maxPt.X
          && this->m_CheckBoundingBox.m_minPt.Y <= m_fYMax
          && m_fYMin <= this->m_CheckBoundingBox.m_maxPt.Y )
        {
          v19 = v8;
          v20 = v9;
          v21 = v6;
          radiusAdjustment = m_CollisionRadius;
          IsRecordInIgnoreList = C2DGridObstructionManager::IsRecordInIgnoreList(this, *m_pRecList);
          m_CollisionRadius = radiusAdjustment;
          v6 = v21;
          v9 = v20;
          v8 = v19;
          if ( !IsRecordInIgnoreList )
          {
            m_ObsType = v10->m_ObsType;
            if ( m_ObsType == 1 )
            {
              C2DGridObstructionManager::CheckBoxCollision(this, v10, radiusAdjustment, v17);
              m_CollisionRadius = radiusAdjustment;
              v6 = v21;
              v9 = v20;
              v8 = v19;
            }
            else if ( m_ObsType == 2 )
            {
              C2DGridObstructionManager::CheckCircleCollision(this, v10, radiusAdjustment, v17);
              v8 = v19;
              v9 = v20;
              v6 = v21;
              m_CollisionRadius = radiusAdjustment;
            }
            if ( *(this + 72) < 0 )
              break;
          }
        }
      }
      ++m_pRecList;
    }
    while ( v7 != m_pRecList );
  }
}


// C2DGridObstructionManager::RecordDetails  (line 1126, @0x000000000261e7b0, libserver.so)  // inlines: AddToTail, CopyConstruct<IntersectionRecord_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<IntersectionRecord_t, int>::Grow
// callers: C2DGridObstructionManager::CheckBoxCollision, C2DGridObstructionManager::CheckCircleCollision
void __fastcall C2DGridObstructionManager::RecordDetails(
        C2DGridObstructionManager *const this,
        IntersectionType_t recType,
        ObstructionRecord_t *ObRec,
        Point_t *thePoint)
{
  float Y; // xmm2_4
  float X; // xmm3_4
  CollisionResultList_t *v8; // rbx
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rax
  CollisionResultList_t *v12; // r13
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rax
  int m_MaxCollisionCount; // edx
  int v17; // ecx
  char v18; // al
  float v19; // xmm1_4
  float v20; // xmm0_4
  __int64 m_ClosestDistanceIndex; // rax
  IntersectionRecord_t *v22; // rax
  CollisionResultList_t *m_ResultList; // r13
  int m_Size; // r14d
  int v25; // eax
  __int64 v26; // rax
  ObstructionRecord_t *v27; // [rsp+8h] [rbp-38h]
  ObstructionRecord_t *dist2a; // [rsp+10h] [rbp-30h]
  ObstructionRecord_t *dist2; // [rsp+10h] [rbp-30h]
  float dist2b; // [rsp+10h] [rbp-30h]
  float v31; // [rsp+18h] [rbp-28h]
  float v32; // [rsp+18h] [rbp-28h]
  float v33; // [rsp+18h] [rbp-28h]
  float v34; // [rsp+1Ch] [rbp-24h]
  float v35; // [rsp+1Ch] [rbp-24h]
  float v36; // [rsp+1Ch] [rbp-24h]

  if ( thePoint != 0 )
  {
    X = thePoint->X;
    Y = thePoint->Y;
  }
  if ( (*(this + 72) & 0x20) != 0 )
  {
    if ( (recType - 1) <= 1 )
    {
      v19 = thePoint->Y - this->m_CheckLine.P0.Y;
      v20 = ((thePoint->X - this->m_CheckLine.P0.X) * (thePoint->X - this->m_CheckLine.P0.X)) + (v19 * v19);
      if ( this->m_ClosestDistance > v20 )
      {
        m_ClosestDistanceIndex = this->m_ClosestDistanceIndex;
        if ( m_ClosestDistanceIndex < 0 )
        {
          m_ResultList = this->m_ResultList;
          m_Size = m_ResultList->m_Size;
          v25 = m_ResultList->m_Size;
          if ( m_ResultList->m_Size == m_ResultList->m_Memory.m_nAllocationCount )
          {
            v27 = ObRec;
            dist2b = ((thePoint->X - this->m_CheckLine.P0.X) * (thePoint->X - this->m_CheckLine.P0.X)) + (v19 * v19);
            v33 = X;
            v36 = Y;
            CUtlMemory<IntersectionRecord_t,int>::Grow(&m_ResultList->m_Memory, 1);
            v25 = m_ResultList->m_Size;
            ObRec = v27;
            v20 = dist2b;
            X = v33;
            Y = v36;
          }
          m_ResultList->m_Size = v25 + 1;
          v26 = &m_ResultList->m_Memory.m_pMemory[m_Size];
          if ( v26 != 0 )
          {
            *v26 = recType;
            *(v26 + 8) = ObRec;
            *(v26 + 16) = X;
            *(v26 + 20) = Y;
          }
          ++this->m_CurrentCollisionCount;
          this->m_ClosestDistanceIndex = m_Size;
        }
        else
        {
          this->m_ResultList->m_Memory.m_pMemory[m_ClosestDistanceIndex].m_pObsRec->m_ObjectProperties &= ~0x8000u;
          v22 = &this->m_ResultList->m_Memory.m_pMemory[this->m_ClosestDistanceIndex];
          v22->m_RecordType = recType;
          v22->m_pObsRec = ObRec;
          v22->m_IntersectionPoint.X = X;
          v22->m_IntersectionPoint.Y = Y;
          ObRec->m_ObjectProperties |= 0x8000u;
        }
        this->m_ClosestDistance = v20;
      }
    }
    else
    {
      ObRec->m_ObjectProperties |= 0x8000u;
      ++this->m_CurrentCollisionCount;
      v8 = this->m_ResultList;
      v9 = v8->m_Size;
      v10 = v8->m_Size;
      if ( v9 == v8->m_Memory.m_nAllocationCount )
      {
        dist2 = ObRec;
        v32 = X;
        v35 = Y;
        CUtlMemory<IntersectionRecord_t,int>::Grow(&v8->m_Memory, 1);
        v10 = v8->m_Size;
        ObRec = dist2;
        X = v32;
        Y = v35;
      }
      v8->m_Size = v10 + 1;
      v11 = &v8->m_Memory.m_pMemory[v9];
      if ( v11 != 0 )
      {
        *v11 = recType;
        *(v11 + 8) = ObRec;
        *(v11 + 16) = X;
        *(v11 + 20) = Y;
      }
    }
  }
  else if ( this->m_CurrentObstruciton != ObRec )
  {
    this->m_CurrentObstruciton = ObRec;
    ObRec->m_ObjectProperties |= 0x8000u;
    v12 = this->m_ResultList;
    v13 = v12->m_Size;
    v14 = v12->m_Size;
    if ( v13 == v12->m_Memory.m_nAllocationCount )
    {
      dist2a = ObRec;
      v31 = X;
      v34 = Y;
      CUtlMemory<IntersectionRecord_t,int>::Grow(&v12->m_Memory, 1);
      v14 = v12->m_Size;
      ObRec = dist2a;
      X = v31;
      Y = v34;
    }
    v12->m_Size = v14 + 1;
    v15 = &v12->m_Memory.m_pMemory[v13];
    if ( v15 != 0 )
    {
      *v15 = recType;
      *(v15 + 8) = ObRec;
      *(v15 + 16) = X;
      *(v15 + 20) = Y;
    }
    m_MaxCollisionCount = this->m_MaxCollisionCount;
    v17 = this->m_CurrentCollisionCount + 1;
    v18 = 0;
    this->m_CurrentCollisionCount = v17;
    if ( m_MaxCollisionCount > 0 )
      v18 = v17 >= m_MaxCollisionCount;
    *(this + 72) = (v18 << 7) | *(this + 72) & 0x7F;
  }
}


// C2DGridObstructionManager::CheckBoxCollision  (line 1198, @0x000000000261ea80, libserver.so)  // inlines: FindLineIntersectPoint, LineSegmentIntersection, ccw
// calls: C2DGridObstructionManager::RecordDetails
// callers: C2DGridObstructionManager::CheckForCollisionsInNode
void __fastcall C2DGridObstructionManager::CheckBoxCollision(
        C2DGridObstructionManager *const this,
        ObstructionRecord_t *ObRec,
        float a3,
        float radiusAdjustment)
{
  float m_fXMin; // xmm5_4
  float v7; // xmm5_4
  char v8; // al
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm0_4
  Line_t *v12; // rbx
  float X; // xmm9_4
  int v14; // ecx
  float v15; // xmm1_4
  float Y; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  float v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm12_4
  int v23; // edx
  float v24; // xmm0_4
  float v25; // xmm14_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm10_4
  int v31; // ecx
  float v32; // xmm11_4
  float v33; // xmm3_4
  float v34; // xmm14_4
  float v35; // xmm13_4
  float v36; // xmm12_4
  float v37; // xmm15_4
  float v38; // xmm0_4
  int v39; // edx
  float v40; // xmm13_4
  float v41; // xmm11_4
  float v42; // xmm13_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float y2; // [rsp+0h] [rbp-90h]
  float v47; // [rsp+4h] [rbp-8Ch]
  float v48; // [rsp+4h] [rbp-8Ch]
  float v49; // [rsp+8h] [rbp-88h]
  float v50; // [rsp+8h] [rbp-88h]
  float x2; // [rsp+Ch] [rbp-84h]
  Point_t IntPoint; // [rsp+10h] [rbp-80h] BYREF
  Line_t Lines[4]; // [rsp+20h] [rbp-70h] BYREF
  char v54; // [rsp+60h] [rbp-30h] BYREF

  IntPoint.X = 0.0;
  m_fXMin = ObRec->m_fXMin;
  IntPoint.Y = 0.0;
  v7 = m_fXMin - a3;
  v8 = *(this + 72);
  v9 = ObRec->m_fYMin - a3;
  v10 = ObRec->m_fXMax + a3;
  v11 = a3 + ObRec->m_fYMax;
  x2 = v10;
  y2 = v11;
  if ( (v8 & 4) != 0 )
  {
    Lines[0].P0.X = v7;
    v12 = Lines;
    Lines[0].P0.Y = v9;
    Lines[0].P1.X = v10;
    Lines[0].P1.Y = v9;
    Lines[1].P0.X = v10;
    Lines[1].P0.Y = v9;
    Lines[1].P1.X = v10;
    Lines[1].P1.Y = v11;
    Lines[2].P0.X = v10;
    Lines[2].P0.Y = v11;
    Lines[2].P1.X = v7;
    Lines[2].P1.Y = v11;
    Lines[3].P0.X = v7;
    Lines[3].P0.Y = v11;
    Lines[3].P1.X = v7;
    Lines[3].P1.Y = v9;
    while ( 1 )
    {
      X = this->m_CheckLine.P1.X;
      v14 = 1;
      v15 = this->m_CheckLine.P0.X;
      Y = this->m_CheckLine.P0.Y;
      v17 = v12->P0.X;
      v18 = X - v15;
      v19 = v12->P0.Y;
      v20 = this->m_CheckLine.P1.Y - Y;
      v21 = v12->P0.X - v15;
      v22 = v19 - Y;
      if ( ((X - v15) * (v19 - Y)) <= (v20 * v21) )
      {
        v14 = -1;
        if ( (v20 * v21) <= (v18 * v22) && (v18 * v21) >= 0.0 && (v20 * v22) >= 0.0 )
          v14 = ((v21 * v21) + (v22 * v22)) > ((v18 * v18) + (v20 * v20));
      }
      v23 = 1;
      v24 = v12->P1.X - v15;
      v25 = v12->P1.Y - Y;
      if ( (v18 * v25) <= (v20 * v24) )
      {
        v23 = -1;
        if ( (v20 * v24) <= (v18 * v25) && (v18 * v24) >= 0.0 && (v20 * v25) >= 0.0 )
          v23 = ((v24 * v24) + (v25 * v25)) > ((v18 * v18) + (v20 * v20));
      }
      if ( (v14 * v23) <= 0.0 )
      {
        v30 = v12->P1.X - v17;
        v31 = 1;
        v32 = v12->P1.Y - v19;
        v33 = Y - v19;
        v34 = v15 - v17;
        v35 = v30 * v33;
        v36 = v32 * (v15 - v17);
        if ( (v30 * v33) <= v36 )
        {
          v31 = -1;
          if ( v36 <= v35 && (v30 * v34) >= 0.0 && (v33 * v32) >= 0.0 )
            v31 = ((v34 * v34) + (v33 * v33)) > ((v30 * v30) + (v32 * v32));
        }
        v37 = this->m_CheckLine.P1.Y - v19;
        v38 = X - v17;
        v39 = 1;
        if ( (v30 * v37) <= (v32 * (X - v17)) )
        {
          v39 = -1;
          if ( (v32 * (X - v17)) <= (v30 * v37) && (v30 * v38) >= 0.0 && (v32 * v37) >= 0.0 )
            v39 = ((v38 * v38) + (v37 * v37)) > ((v30 * v30) + (v32 * v32));
        }
        if ( (v31 * v39) <= 0.0 )
        {
          v40 = v35 - v36;
          v41 = (v32 * v18) - (v20 * v30);
          v42 = v41 == 0.0 ? 0.0 : v40 / v41;
          v43 = this->m_CheckLine.P0.Y;
          v47 = v9;
          v49 = v7;
          v44 = (v18 * v42) + v15;
          v45 = this->m_CheckLine.P1.Y;
          IntPoint.X = v44;
          IntPoint.Y = ((v45 - v43) * v42) + v43;
          C2DGridObstructionManager::RecordDetails(this, IntersectionType_t::cIntersectsLineSegment, ObRec, &IntPoint);
          v8 = *(this + 72);
          v7 = v49;
          v9 = v47;
          if ( v8 < 0 )
            break;
        }
      }
      if ( ++v12 == &v54 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( (v8 & 8) == 0 )
      goto LABEL_47;
    v26 = this->m_CheckLine.P0.X;
    if ( v26 < v7
      || x2 < v26
      || (v27 = this->m_CheckLine.P0.Y) < v9
      || y2 < v27
      || (v48 = v9,
          v50 = v7,
          C2DGridObstructionManager::RecordDetails(this, IntersectionType_t::cEndPoint1IsContained, ObRec, 0),
          v8 = *(this + 72),
          v7 = v50,
          v9 = v48,
          v8 >= 0) )
    {
LABEL_47:
      if ( (v8 & 0x10) != 0 )
      {
        v28 = this->m_CheckLine.P1.X;
        if ( v28 >= v7 && x2 >= v28 )
        {
          v29 = this->m_CheckLine.P1.Y;
          if ( v29 >= v9 && y2 >= v29 )
            C2DGridObstructionManager::RecordDetails(this, IntersectionType_t::cEndPoint2IsContained, ObRec, 0);
        }
      }
    }
  }
}


// C2DGridObstructionManager::CheckCircleCollision  (line 1250, @0x000000000261ef90, libserver.so)
// calls: C2DGridObstructionManager::RecordDetails, sqrtf
// callers: C2DGridObstructionManager::CheckForCollisionsInNode
void __fastcall C2DGridObstructionManager::CheckCircleCollision(
        C2DGridObstructionManager *const this,
        ObstructionRecord_t *ObRec,
        float a3,
        float radiusAdjustment)
{
  char v6; // al
  float m_fX; // xmm4_4
  float m_fY; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  __int64 v17; // r12
  int v18; // r15d
  char v19; // al
  float v20; // xmm2_4
  float v21; // xmm0_4
  float radiusa; // [rsp+4h] [rbp-5Ch]
  float radius; // [rsp+4h] [rbp-5Ch]
  float ba; // [rsp+8h] [rbp-58h]
  float b; // [rsp+8h] [rbp-58h]
  float discb; // [rsp+Ch] [rbp-54h]
  float disca; // [rsp+Ch] [rbp-54h]
  float disc; // [rsp+Ch] [rbp-54h]
  float t[4]; // [rsp+10h] [rbp-50h]
  Point_t thePoint; // [rsp+20h] [rbp-40h] BYREF

  v6 = *(this + 72);
  m_fX = ObRec->m_fX;
  m_fY = ObRec->m_fY;
  v9 = a3 + ObRec->m_fRadius;
  if ( (v6 & 8) != 0
    && (v9 * v9) >= (((this->m_CheckLine.P0.X - m_fX) * (this->m_CheckLine.P0.X - m_fX))
                   + ((this->m_CheckLine.P0.Y - m_fY) * (this->m_CheckLine.P0.Y - m_fY))) )
  {
    radius = v9;
    b = ObRec->m_fY;
    disc = ObRec->m_fX;
    C2DGridObstructionManager::RecordDetails(this, IntersectionType_t::cEndPoint1IsContained, ObRec, 0);
    v6 = *(this + 72);
    v9 = radius;
    m_fY = b;
    m_fX = disc;
  }
  if ( (v6 & 0x10) != 0
    && (v9 * v9) >= (((this->m_CheckLine.P1.X - m_fX) * (this->m_CheckLine.P1.X - m_fX))
                   + ((this->m_CheckLine.P1.Y - m_fY) * (this->m_CheckLine.P1.Y - m_fY))) )
  {
    radiusa = v9;
    ba = m_fY;
    disca = m_fX;
    C2DGridObstructionManager::RecordDetails(this, IntersectionType_t::cEndPoint2IsContained, ObRec, 0);
    v6 = *(this + 72);
    v9 = radiusa;
    m_fY = ba;
    m_fX = disca;
  }
  if ( (v6 & 4) != 0 )
  {
    v10 = 0.0;
    if ( this->m_CheckLine.m_flCheckLineLength != 0.0 )
    {
      v11 = this->m_CheckLine.P0.X - m_fX;
      v12 = this->m_CheckLine.P0.Y - m_fY;
      v13 = (this->m_CheckLine.m_flDeltaXNorm * v11) + (this->m_CheckLine.m_flDeltaYNorm * v12);
      v14 = (v13 * v13) - (((v11 * v11) + (v12 * v12)) - (v9 * v9));
      if ( v14 >= 0.0 )
      {
        v15 = fsqrt(v14);
        v16 = -v13 - v15;
        v17 = 0;
        t[0] = v16;
        v18 = (v14 > 0.0) + 1;
        t[1] = v15 - v13;
        while ( 1 )
        {
          if ( v16 < v10 || this->m_CheckLine.m_flCheckLineLength < v16 )
          {
            v19 = *(this + 72);
          }
          else
          {
            discb = v10;
            v20 = (this->m_CheckLine.m_flDeltaXNorm * v16) + this->m_CheckLine.P0.X;
            v21 = (v16 * this->m_CheckLine.m_flDeltaYNorm) + this->m_CheckLine.P0.Y;
            thePoint.X = v20;
            thePoint.Y = v21;
            C2DGridObstructionManager::RecordDetails(this, IntersectionType_t::cIntersectsCircle, ObRec, &thePoint);
            v19 = *(this + 72);
            v10 = discb;
            if ( (v19 & 0x20) != 0 )
              return;
          }
          if ( v19 < 0 )
            break;
          if ( v18 <= ++v17 )
            break;
          v16 = t[v17];
        }
      }
    }
  }
}


// C2DGridObstructionManager::AdvanceAroundObstruction  (line 1318, @0x00000000025f9930, libserver.so)  // inlines: GetCollisionPadding, Vector2D
// calls: C2DGridObstructionManager::AdvanceAroundObstructionCircle, C2DGridObstructionManager::AdvanceAroundObstructionBox
// callers: CGridNav::AdvanceAroundObstruction
C2DGridObstructionManager *__fastcall C2DGridObstructionManager::AdvanceAroundObstruction(
        C2DGridObstructionManager *a1,
        C2DGridObstructionManager *const this,
        const ObstructionRecord_t *p,
        const ObstructionRecord_t *pObstruction,
        char bClockwise)
{
  C2DGridObstructionManager *result; // rax
  float v7; // xmm0_4
  __int64 m_RadiusAdjustClass; // rdi
  __int64 m_SearcherClass; // rcx
  uint8 m_ObsType; // cl
  float v11; // xmm0_4
  C2DGridObstructionManager *v12; // [rsp+8h] [rbp-8h]
  C2DGridObstructionManager *v13; // [rsp+8h] [rbp-8h]

  result = a1;
  v7 = 0.0;
  m_RadiusAdjustClass = pObstruction->m_RadiusAdjustClass;
  m_SearcherClass = this->m_SearcherClass;
  if ( (this->m_RelationshipMatrix[m_SearcherClass] & pObstruction->m_RadiusAdjustClassMask) != 0 )
    v7 = pObstruction->m_fRadiusAdjustFactor + 0.0;
  if ( ((1 << m_SearcherClass) & this->m_RelationshipMatrix[m_RadiusAdjustClass]) != 0 )
    v7 = v7 + this->m_SearcherRadiusAdjustment;
  m_ObsType = pObstruction->m_ObsType;
  v11 = v7 + this->m_CollisionRadius;
  if ( m_ObsType == 2 )
  {
    v12 = result;
    C2DGridObstructionManager::AdvanceAroundObstructionCircle(result, this, p, pObstruction, v11, bClockwise);
    return v12;
  }
  else if ( m_ObsType == 1 )
  {
    v13 = result;
    C2DGridObstructionManager::AdvanceAroundObstructionBox(result, this, p, pObstruction, v11, bClockwise);
    return v13;
  }
  else
  {
    *&result->m_TileXScale = *&p->m_ObjectProperties;
  }
  return result;
}


// C2DGridObstructionManager::AdvanceAroundObstructionBox  (line 1338, @0x00000000025f96a0, libserver.so)  // inlines: Vector2D
// callers: C2DGridObstructionManager::AdvanceAroundObstruction
C2DGridObstructionManager *__fastcall C2DGridObstructionManager::AdvanceAroundObstructionBox(
        C2DGridObstructionManager *const this,
        const Vector2D *const p,
        const ObstructionRecord_t *pObstruction,
        __int64 bClockwise,
        float flPadding,
        char a6)
{
  C2DGridObstructionManager *result; // rax
  float v7; // xmm2_4
  __m128 v8; // xmm1
  float v9; // xmm5_4
  __m128 v10; // xmm3
  float v11; // xmm0_4
  float v12; // xmm4_4
  __m128 m_ObjectProperties; // xmm6
  __m128 v14; // xmm7
  __m128 v15; // xmm6
  float v16; // xmm5_4
  __m128 m_Index; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm1

  v8 = *(bClockwise + 36);
  result = this;
  v7 = *&pObstruction->m_ObjectProperties;
  v8.m128_f32[0] = v8.m128_f32[0] - flPadding;
  v10 = *(bClockwise + 40);
  v9 = *(bClockwise + 44) + flPadding;
  v10.m128_f32[0] = v10.m128_f32[0] - flPadding;
  v11 = flPadding + *(bClockwise + 48);
  if ( *&pObstruction->m_ObjectProperties >= v8.m128_f32[0] && v9 >= v7 )
  {
    v12 = *&pObstruction->m_ObjectID.m_Index;
    if ( v12 >= v10.m128_f32[0] && v11 >= v12 )
    {
      m_ObjectProperties = pObstruction->m_ObjectProperties;
      m_ObjectProperties.m128_f32[0] = v7 - v8.m128_f32[0];
      v14.m128_f32[0] = v9 - v7;
      v15 = _mm_cmpge_ss(m_ObjectProperties, v14);
      LODWORD(v16) = _mm_andnot_ps(v15, v8).m128_u32[0] | LODWORD(v9) & v15.m128_i32[0];
      m_Index = pObstruction->m_ObjectID.m_Index;
      v18.m128_f32[0] = v11 - v12;
      this->m_TileXScale = v16;
      m_Index.m128_f32[0] = v12 - v10.m128_f32[0];
      v19 = _mm_cmpge_ss(m_Index, v18);
      LODWORD(this->m_TileXOffset) = _mm_andnot_ps(v19, v10).m128_u32[0] | LODWORD(v11) & v19.m128_i32[0];
      return result;
    }
  }
  else
  {
    v12 = *&pObstruction->m_ObjectID.m_Index;
  }
  if ( a6 == 0 )
  {
    if ( v12 <= v11 || v7 < v8.m128_f32[0] )
    {
      if ( v8.m128_f32[0] > v7 && v12 >= v10.m128_f32[0] )
      {
LABEL_9:
        this->m_TileXScale = v7;
        this->m_TileXOffset = v10.m128_f32[0] - 3.0;
        return result;
      }
      if ( v10.m128_f32[0] > v12 && v9 >= v7 )
        goto LABEL_26;
      if ( v7 > v9 && v11 >= v12 )
      {
LABEL_14:
        this->m_TileXScale = v7;
        this->m_TileXOffset = v11 + 3.0;
        return result;
      }
LABEL_23:
      this->m_TileXScale = v7;
      LODWORD(this->m_TileXOffset) = pObstruction->m_ObjectID.m_Index;
      return result;
    }
    goto LABEL_20;
  }
  if ( v12 <= v11 || v9 < v7 )
  {
    if ( v8.m128_f32[0] > v7 && v11 >= v12 )
      goto LABEL_14;
    if ( v10.m128_f32[0] <= v12 || v7 < v8.m128_f32[0] )
    {
      if ( v7 > v9 && v12 >= v10.m128_f32[0] )
        goto LABEL_9;
      goto LABEL_23;
    }
LABEL_20:
    this->m_TileXOffset = v12;
    this->m_TileXScale = v8.m128_f32[0] - 3.0;
    return result;
  }
LABEL_26:
  this->m_TileXOffset = v12;
  this->m_TileXScale = v9 + 3.0;
  return result;
}


// C2DGridObstructionManager::AdvanceAroundObstructionCircle  (line 1406, @0x00000000025f9830, libserver.so)  // inlines: FastSqrt, Length, NormalizeInPlace, Vector2DAdd, Vector2DLength, Vector2DNormalize, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator+, operator/=, operator=
// callers: C2DGridObstructionManager::AdvanceAroundObstruction
C2DGridObstructionManager *__fastcall C2DGridObstructionManager::AdvanceAroundObstructionCircle(
        C2DGridObstructionManager *const this,
        const Vector2D *const p,
        const ObstructionRecord_t *pObstruction,
        __int64 bClockwise,
        float flPadding,
        char a6)
{
  C2DGridObstructionManager *result; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm2_4

  result = this;
  v7 = flPadding + *(bClockwise + 60);
  v8 = *&pObstruction->m_ObjectID.m_Index - *(bClockwise + 56);
  v9 = *&pObstruction->m_ObjectProperties - *(bClockwise + 52);
  v10 = fsqrt((v9 * v9) + (v8 * v8));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
    if ( v7 > v10 )
    {
LABEL_3:
      if ( v10 < 0.01 )
      {
        v12 = -1.0;
        v11 = 0.0;
      }
      v13 = v7 + 1.0;
      v14 = v12 * v13;
      v15 = v13 * v11;
      v16 = v14;
      goto LABEL_6;
    }
  }
  else
  {
    v12 = v9 * (1.0 / v10);
    v11 = v8 * (1.0 / v10);
    if ( v7 > v10 )
      goto LABEL_3;
  }
  v17 = 2.0;
  if ( (*bClockwise & 0x400) != 0 )
    v17 = 8.0;
  v15 = v12 * v17;
  v16 = v17 * v11;
  if ( a6 != 0 )
    v15 = -v15;
  else
    v16 = -v16;
LABEL_6:
  this->m_TileXScale = *&pObstruction->m_ObjectProperties + v16;
  this->m_TileXOffset = v15 + *&pObstruction->m_ObjectID.m_Index;
  return result;
}


// CObstructionRecordPoolManager::CObstructionRecordPoolManager  (line 1451, @0x00000000025f9d60, libserver.so)
// calls: CObstructionRecordPoolManager::SetNumPools, CObstructionRecordPoolManager::InitNewPool
// callers: C2DGridObstructionManager::Init
void __fastcall CObstructionRecordPoolManager::CObstructionRecordPoolManager(
        CObstructionRecordPoolManager *const this,
        int InitialSize,
        int GrowSize)
{
  this->m_pPoolBasePtrs = 0;
  this->m_pPoolSizes = 0;
  this->m_nMaxPools = 0;
  this->m_nUsedPools = 0;
  this->m_pFreeHead = 0;
  this->m_nFreePoolZone = -1;
  this->m_nFreePoolIndex = -1;
  this->m_nTotalBlocks = 0;
  this->m_nFreeBlocks = 0;
  this->m_nDefaultGrowSize = GrowSize;
  CObstructionRecordPoolManager::SetNumPools(this, 8);
  CObstructionRecordPoolManager::InitNewPool(this, InitialSize);
}


// CObstructionRecordPoolManager::~CObstructionRecordPoolManager  (line 1482, @0x00000000025f99f0, libserver.so)
// calls: operator delete []
// callers: C2DGridObstructionManager::DeInit
void __fastcall CObstructionRecordPoolManager::~CObstructionRecordPoolManager(
        CObstructionRecordPoolManager *const this)
{
  ObstructionRecord_t **m_pPoolBasePtrs; // rax
  __int64 v3; // rbx
  int v4; // r12d
  ObstructionRecord_t *v5; // rdi
  int *m_pPoolSizes; // rdi

  m_pPoolBasePtrs = this->m_pPoolBasePtrs;
  if ( this->m_pPoolBasePtrs != 0 )
  {
    if ( this->m_nUsedPools <= 0 )
      goto LABEL_8;
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = m_pPoolBasePtrs[v3];
      if ( v5 != 0 )
      {
        operator delete[](v5);
        this->m_pPoolBasePtrs[v3] = 0;
        m_pPoolBasePtrs = this->m_pPoolBasePtrs;
      }
      ++v4;
      ++v3;
    }
    while ( this->m_nUsedPools > v4 );
    if ( m_pPoolBasePtrs != 0 )
LABEL_8:
      operator delete[](m_pPoolBasePtrs);
  }
  m_pPoolSizes = this->m_pPoolSizes;
  if ( m_pPoolSizes != 0 )
  {
    operator delete[](m_pPoolSizes);
    this->m_pPoolSizes = 0;
  }
}


// CObstructionRecordPoolManager::SetNumPools  (line 1502, @0x00000000025f9b90, libserver.so)
// calls: operator new [], operator delete []
// callers: CObstructionRecordPoolManager::InitNewPool, CObstructionRecordPoolManager::CObstructionRecordPoolManager
void __fastcall CObstructionRecordPoolManager::SetNumPools(CObstructionRecordPoolManager *const this, int numPools)
{
  __int64 v3; // r13
  ObstructionRecord_t **v5; // rax
  size_t v6; // rdi
  ObstructionRecord_t **v7; // r12
  int *v8; // rax
  __int64 v9; // rdx
  int *i; // r13
  ObstructionRecord_t **m_pPoolBasePtrs; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  int *m_pPoolSizes; // rdi

  v3 = numPools;
  if ( numPools > 0xFE0000000000000LL )
  {
    v5 = operator new[](0xFFFFFFFFFFFFFFFFLL);
    v6 = -1;
  }
  else
  {
    v5 = operator new[](8LL * numPools);
    v6 = 4 * v3;
  }
  v7 = v5;
  v8 = operator new[](v6);
  v9 = 0;
  for ( i = v8; numPools > v9; ++v9 )
  {
    v7[v9] = 0;
    v8[v9] = 0;
  }
  m_pPoolBasePtrs = this->m_pPoolBasePtrs;
  if ( this->m_pPoolBasePtrs != 0 )
  {
    if ( this->m_nUsedPools <= 0 )
      goto LABEL_10;
    v12 = 0;
    v13 = 0;
    do
    {
      ++v13;
      v7[v12] = m_pPoolBasePtrs[v12];
      v8[v12] = this->m_pPoolSizes[v12];
      ++v12;
      m_pPoolBasePtrs = this->m_pPoolBasePtrs;
    }
    while ( this->m_nUsedPools > v13 );
    if ( m_pPoolBasePtrs != 0 )
LABEL_10:
      operator delete[](m_pPoolBasePtrs);
    m_pPoolSizes = this->m_pPoolSizes;
    if ( m_pPoolSizes != 0 )
      operator delete[](m_pPoolSizes);
  }
  this->m_pPoolBasePtrs = v7;
  this->m_pPoolSizes = i;
  this->m_nMaxPools = numPools;
}


// CObstructionRecordPoolManager::InitNewPool  (line 1539, @0x00000000025f9c80, libserver.so)  // inlines: CEntityHandle, CHandle, ObstructionRecord_t
// calls: operator new [], CObstructionRecordPoolManager::SetNumPools
// callers: CObstructionRecordPoolManager::CObstructionRecordPoolManager, CObstructionRecordPoolManager::GetNewObsRecord
void __fastcall CObstructionRecordPoolManager::InitNewPool(CObstructionRecordPoolManager *const this, int poolSize)
{
  int m_nUsedPools; // r14d
  size_t v5; // rdi
  ObstructionRecord_t *v6; // rax
  __int64 v7; // rcx
  ObstructionRecord_t *v8; // rdx
  ObstructionRecord_t *v9; // r8

  m_nUsedPools = this->m_nUsedPools;
  if ( m_nUsedPools == this->m_nMaxPools )
  {
    CObstructionRecordPoolManager::SetNumPools(this, m_nUsedPools + 4);
    m_nUsedPools = this->m_nUsedPools;
  }
  this->m_nUsedPools = m_nUsedPools + 1;
  v5 = -1;
  this->m_pPoolSizes[m_nUsedPools] = poolSize;
  if ( poolSize <= 0x1FC000000000000LL )
    v5 = poolSize << 6;
  v6 = operator new[](v5);
  if ( poolSize != 0 )
  {
    v7 = poolSize - 2LL;
    v8 = v6;
    do
    {
      v9 = v8;
      --v7;
      ++v8;
      v9->m_ObjectID.m_Index = -1;
    }
    while ( v7 != -2 );
  }
  this->m_pPoolBasePtrs[m_nUsedPools] = v6;
  this->m_nTotalBlocks += poolSize;
  this->m_nFreeBlocks += poolSize;
  if ( this->m_nFreePoolZone == -1 )
  {
    this->m_nFreePoolZone = m_nUsedPools;
    this->m_nFreePoolIndex = 0;
  }
}


// CObstructionRecordPoolManager::GetNewObsRecord  (line 1571, @0x00000000025f9f40, libserver.so)
// calls: CObstructionRecordPoolManager::InitNewPool
// callers: C2DGridObstructionManager::GetNewObstructionRecord
ObstructionRecord_t *__fastcall CObstructionRecordPoolManager::GetNewObsRecord(
        CObstructionRecordPoolManager *const this)
{
  int m_nFreeBlocks; // edx
  ObstructionRecord_t *result; // rax
  CObstructionObject *m_pObstructionObject; // rcx
  int m_nFreePoolIndex; // esi
  int m_nFreePoolZone; // edi
  int v7; // edx
  int *m_pPoolSizes; // rsi
  int v9; // edi
  bool v10; // zf

  m_nFreeBlocks = this->m_nFreeBlocks;
  if ( m_nFreeBlocks != 0 )
  {
    result = this->m_pFreeHead;
    if ( result != 0 )
    {
LABEL_3:
      m_pObstructionObject = result->m_pObstructionObject;
      this->m_nFreeBlocks = m_nFreeBlocks - 1;
      this->m_pFreeHead = m_pObstructionObject;
      return result;
    }
  }
  else
  {
    CObstructionRecordPoolManager::InitNewPool(this, this->m_nDefaultGrowSize);
    result = this->m_pFreeHead;
    m_nFreeBlocks = this->m_nFreeBlocks;
    if ( result != 0 )
      goto LABEL_3;
  }
  m_nFreePoolIndex = this->m_nFreePoolIndex;
  m_nFreePoolZone = this->m_nFreePoolZone;
  result = &this->m_pPoolBasePtrs[m_nFreePoolZone][m_nFreePoolIndex];
  this->m_nFreeBlocks = m_nFreeBlocks - 1;
  v7 = m_nFreePoolIndex + 1;
  m_pPoolSizes = this->m_pPoolSizes;
  this->m_nFreePoolIndex = v7;
  if ( v7 == m_pPoolSizes[m_nFreePoolZone] )
  {
    v9 = m_nFreePoolZone + 1;
    this->m_nFreePoolIndex = 0;
    v10 = v9 == this->m_nUsedPools;
    this->m_nFreePoolZone = v9;
    if ( v10 )
      this->m_nFreePoolZone = -1;
  }
  return result;
}


// CObstructionRecordPoolManager::FreeRecord  (line 1617, @0x00000000025fa460, libserver.so)
void __fastcall CObstructionRecordPoolManager::FreeRecord(
        CObstructionRecordPoolManager *const this,
        ObstructionRecord_t *theRecord)
{
  theRecord->m_pObstructionObject = this->m_pFreeHead;
  ++this->m_nFreeBlocks;
  this->m_pFreeHead = theRecord;
}


// CObstructionRecordPoolManager::ReclaimAllRecords  (line 1629, @0x00000000025fa480, libserver.so)
void __fastcall CObstructionRecordPoolManager::ReclaimAllRecords(CObstructionRecordPoolManager *const this)
{
  int m_nTotalBlocks; // eax

  m_nTotalBlocks = this->m_nTotalBlocks;
  this->m_pFreeHead = 0;
  this->m_nFreePoolZone = 0;
  this->m_nFreePoolIndex = 0;
  this->m_nFreeBlocks = m_nTotalBlocks;
}


// C2DGridObstructionManager::FrameUpdatePostEntityThink  (line 1639, @0x00000000025fa4b0, libserver.so)
// callers: CGridNav::FrameUpdatePostEntityThink
void __fastcall C2DGridObstructionManager::FrameUpdatePostEntityThink(
        C2DGridObstructionManager *const this,
        const EventServerPostEntityThink_t *const msg)
{
  ;
}


