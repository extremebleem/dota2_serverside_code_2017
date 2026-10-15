// Reconstructed from DWARF by pahole; not original source.

// src/navlib/nav_node.cpp:27
class CNodeHashFuncs {
	CNodeHashFuncs(int);
	bool operator()(const CNavNode *, const CNavNode *);
	unsigned int operator()(const CNavNode *);

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_node.cpp  (line 0, @0x0000000001a6db90, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: ConVar::ConVar, __cxa_atexit
// strings: "nav_show_nodes", "nav_show_node_id", "nav_test_node", "nav_test_node_crouch", "nav_test_node_crouch_dir", "nav_show_node_grid"
// globals: nav_show_nodes, UNSPECIFIED_LOGGING_COLOR, __dso_handle, nav_show_node_id, nav_test_node, nav_test_node_crouch, nav_test_node_crouch_dir, nav_show_node_grid
void __cdecl GLOBAL__sub_I_nav_node_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  ConVar::ConVar(&nav_show_nodes, "nav_show_nodes", "0", 0x4000);
  __cxa_atexit(ConVar::~ConVar, &nav_show_nodes, &_dso_handle);
  ConVar::ConVar(&nav_show_node_id, "nav_show_node_id", "0", 0x4000);
  __cxa_atexit(ConVar::~ConVar, &nav_show_node_id, &_dso_handle);
  ConVar::ConVar(&nav_test_node, "nav_test_node", "0", 0x4000);
  __cxa_atexit(ConVar::~ConVar, &nav_test_node, &_dso_handle);
  ConVar::ConVar(&nav_test_node_crouch, "nav_test_node_crouch", "0", 0x4000);
  __cxa_atexit(ConVar::~ConVar, &nav_test_node_crouch, &_dso_handle);
  ConVar::ConVar(&nav_test_node_crouch_dir, "nav_test_node_crouch_dir", "4", 0x4000);
  __cxa_atexit(ConVar::~ConVar, &nav_test_node_crouch_dir, &_dso_handle);
  ConVar::ConVar(&nav_show_node_grid, "nav_show_node_grid", "0", 0x4000);
  __cxa_atexit(ConVar::~ConVar, &nav_show_node_grid, &_dso_handle);
}


// CNavNode::CNavNode  (line 50, @0x00000000031fded0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, BuildHandle, CUtlHash, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavNode*>, DoFind, Element, GetBucketIndex, GetPosition, GrowMemory, GrowVector, Hash8, Insert, InsertMultipleBefore, RemoveMultipleFromTail, SetCount, SetGrowSize, operator(), operator=, operator==, operator[], ~CUtlVector
// calls: MurmurHash2, operator new, CUtlVectorBase<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, CUtlMemory<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, int> >::SetCount, CUtlMemory<CNavNode*, int>::Grow, CUtlVectorBase<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, CUtlMemory<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume
// callers: CNavGeneratorAAQuad::LadderEndSearch, CNavGeneratorAAQuad::GetNextWalkableSeedNode, CNavGeneratorAAQuad::AddNode
// globals: CNavNode::m_nextID, g_pNavNodeHash, CNavNode::m_list, CNavNode::m_listLength
void __fastcall CNavNode::CNavNode(
        CNavNode *const this,
        const Vector *const vPos,
        const Vector *const vNormal,
        CNavNode *pParent)
{
  unsigned int v5; // eax
  vec_t z; // xmm0_4
  vec_t v7; // xmm1_4
  __int64 v8; // rax
  CUtlHash<CNavNode*,CNodeHashFuncs,CNodeHashFuncs> *v9; // r14
  CNavNode *v10; // rax
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  uint32 v13; // eax
  int v14; // edx
  CUtlVector<CNavNode*,CUtlMemory<CNavNode*,int> > *v15; // r13
  __int64 m_Size; // r12
  int v17; // ecx
  CNavNode **m_pMemory; // rdi
  unsigned int v19; // eax
  CUtlHash<CNavNode*,CNodeHashFuncs,CNodeHashFuncs> *v20; // rcx
  __int64 v21; // rdx
  CNavNode **v22; // rax
  CUtlVectorBase<CUtlVector<CNavNode*,CUtlMemory<CNavNode*,int> >,CUtlMemory<CUtlVector<CNavNode*,CUtlMemory<CNavNode*,int> >,int> > *v23; // rax
  Elf64_Rela *v24; // r12
  char *v25; // rax
  char *v26; // r13
  int v27; // esi
  _DWORD key[12]; // [rsp+0h] [rbp-30h] BYREF

  this->m_pos.x = vPos->x;
  v5 = CNavNode::m_nextID;
  this->m_pos.y = vPos->y;
  z = vPos->z;
  this->m_pos.z = z;
  this->m_normal.x = vNormal->x;
  this->m_normal.y = vNormal->y;
  v7 = vNormal->z;
  this->m_id = v5;
  CNavNode::m_nextID = v5 + 1;
  v8 = 0;
  this->m_normal.z = v7;
  do
  {
    this->m_to[v8] = 0;
    this->m_obstacleHeight[v8] = 0.0;
    this->m_obstacleStartDist[v8] = 0.0;
    this->m_obstacleEndDist[v8++] = 0.0;
  }
  while ( v8 != 4 );
  v9 = g_pNavNodeHash;
  this->m_crouch[0] = 0;
  v10 = CNavNode::m_list;
  this->m_isBlocked[0] = 0;
  ++CNavNode::m_listLength;
  this->m_crouch[1] = 0;
  this->m_isBlocked[1] = 0;
  this->m_crouch[2] = 0;
  this->m_isBlocked[2] = 0;
  this->m_crouch[3] = 0;
  this->m_isBlocked[3] = 0;
  this->m_visited = 0;
  this->m_parent = pParent;
  this->m_next = v10;
  CNavNode::m_list = this;
  this->m_isCovered = 0;
  this->m_area = 0;
  this->m_attributeFlags = 0;
  if ( v9 != 0 )
    goto LABEL_4;
  v23 = operator new(0x20u);
  v23->m_Size = 0;
  v9 = v23;
  v23->m_Memory.m_pMemory = 0;
  v23->m_Memory.m_nAllocationCount = 0;
  v23->m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CUtlVector<CNavNode *,CUtlMemory<CNavNode *,int>>,CUtlMemory<CUtlVector<CNavNode *,CUtlMemory<CNavNode *,int>>,int>>::SetCount(
    v23,
    0x4000);
  v24 = 0;
  do
  {
    v26 = v9->m_Buckets.m_Memory.m_pMemory + v24;
    if ( -*v26 < 0 || *v26 == 0 )
    {
      v25 = v9->m_Buckets.m_Memory.m_pMemory + v24;
      if ( *v26 == 0 )
        goto LABEL_21;
    }
    else
    {
      v27 = *(v26 + 4);
      if ( v27 < 0 )
        CUtlMemory<CNavNode *,int>::Grow((v26 + 8), -v27);
    }
    *v26 = 0;
    v25 = v9->m_Buckets.m_Memory.m_pMemory + v24;
LABEL_21:
    *(v25 + 5) &= 0xC0000000;
    ++v24;
  }
  while ( v24 != &stru_60000 );
  v9->m_bPowerOfTwo = 1;
  v9->m_ModMask = 0x3FFF;
  g_pNavNodeHash = v9;
  z = this->m_pos.z;
LABEL_4:
  y = this->m_pos.y;
  x = this->m_pos.x;
  *&key[2] = z;
  *&key[1] = y;
  *key = x;
  v13 = MurmurHash2(key, 8, 0x3501A674u);
  if ( v9->m_bPowerOfTwo )
    v14 = v9->m_ModMask & v13;
  else
    v14 = v13 % v9->m_Buckets.m_Size;
  v15 = &v9->m_Buckets.m_Memory.m_pMemory[v14];
  m_Size = v15->m_Size;
  if ( m_Size <= 0 )
  {
    v17 = 0;
  }
  else
  {
    v17 = 0;
    m_pMemory = v15->m_Memory.m_pMemory;
    while ( this->m_pos.x != (*m_pMemory)->m_pos.x || (*m_pMemory)->m_pos.y != this->m_pos.y )
    {
      ++v17;
      ++m_pMemory;
      if ( v17 == m_Size )
        goto LABEL_14;
    }
  }
  if ( m_Size == v17 )
  {
LABEL_14:
    if ( m_Size == v15->m_Memory.m_nAllocationCount )
      CUtlMemory<CNavNode *,int>::Grow(&v15->m_Memory, 1);
    ++v15->m_Size;
    v22 = &v15->m_Memory.m_pMemory[m_Size];
    if ( v22 != 0 )
      *v22 = this;
    this->m_nextAtXY = 0;
  }
  else
  {
    v19 = v17 | (v14 << 16);
    v20 = g_pNavNodeHash;
    v21 = HIWORD(v19);
    this->m_nextAtXY = g_pNavNodeHash->m_Buckets.m_Memory.m_pMemory[v21].m_Memory.m_pMemory[v19];
    v20->m_Buckets.m_Memory.m_pMemory[v21].m_Memory.m_pMemory[v19] = this;
  }
}


// CNavNode::~CNavNode  (line 102, @0x00000000031fd180, libserver.so)
void __fastcall CNavNode::~CNavNode(CNavNode *const this)
{
  ;
}


// CNavNode::CleanupGeneration  (line 108, @0x00000000031fd210, libserver.so)  // inlines: Destruct<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> > >, Element, Purge, RemoveAll, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CNavNode*, int>::Purge, CUtlMemory<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, int>::Purge, operator delete
// callers: CNavGeneratorAAQuad::ResetGeneratorData
// globals: g_pNavNodeHash, CNavNode::m_list, CNavNode::m_listLength, CNavNode::m_nextID
void __cdecl CNavNode::CleanupGeneration()
{
  CUtlHash<CNavNode*,CNodeHashFuncs,CNodeHashFuncs> *v0; // r14
  int m_Size; // r12d
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  CUtlVector<CNavNode*,CUtlMemory<CNavNode*,int> > *v4; // rax
  bool v5; // zf
  __int64 i; // r13
  char *v7; // rbx
  CNavNode *v8; // rdi
  CNavNode *m_next; // rbx

  v0 = g_pNavNodeHash;
  if ( g_pNavNodeHash != 0 )
  {
    m_Size = g_pNavNodeHash->m_Buckets.m_Size;
    if ( g_pNavNodeHash->m_Buckets.m_Size > 0 )
    {
      v2 = 0;
      v3 = 8 * (3LL * (m_Size - 1) + 3);
      do
      {
        while ( 1 )
        {
          v4 = &v0->m_Buckets.m_Memory.m_pMemory[v2 / 0x18];
          v5 = (v4->m_Memory.m_nGrowSize & 0xC0000000) == 0;
          v4->m_Size = 0;
          if ( v5 )
            break;
          v2 += 24LL;
          if ( v2 == v3 )
            goto LABEL_7;
        }
        v2 += 24LL;
        CUtlMemory<CNavNode *,int>::Purge(&v4->m_Memory);
      }
      while ( v2 != v3 );
LABEL_7:
      m_Size = v0->m_Buckets.m_Size;
    }
    for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
    {
      v7 = v0->m_Buckets.m_Memory.m_pMemory + i;
      v5 = (*(v7 + 5) & 0xC0000000) == 0;
      *v7 = 0;
      if ( v5 )
      {
        CUtlMemory<CNavNode *,int>::Purge((v7 + 8));
        if ( (*(v7 + 5) & 0xC0000000) == 0 )
          CUtlMemory<CNavNode *,int>::Purge((v7 + 8));
      }
    }
    v5 = (v0->m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v0->m_Buckets.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<CUtlVector<CNavNode *,CUtlMemory<CNavNode *,int>>,int>::Purge(&v0->m_Buckets.m_Memory);
      if ( (v0->m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlVector<CNavNode *,CUtlMemory<CNavNode *,int>>,int>::Purge(&v0->m_Buckets.m_Memory);
    }
    operator delete(v0);
  }
  v8 = CNavNode::m_list;
  g_pNavNodeHash = 0;
  if ( CNavNode::m_list != 0 )
  {
    while ( 1 )
    {
      m_next = v8->m_next;
      operator delete(v8);
      if ( m_next == 0 )
        break;
      v8 = m_next;
    }
  }
  CNavNode::m_list = 0;
  CNavNode::m_listLength = 0;
  CNavNode::m_nextID = 1;
}


// CNavNode::Draw  (line 136, @0x00000000031fda20, libserver.so)  // inlines: DrawBox, GetBool, GetInt, VectorAdd, VectorSubtract, operator+, operator-
// calls: V_snprintf, CNavNode::CheckCrouch, ConVar::SetValue, __stack_chk_fail
// callers: CNavEditor::DrawEditMode
// globals: nav_test_node_crouch
void __fastcall CNavNode::Draw(CNavNode *const this)
{
  bool m_isCovered; // al
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  float y; // xmm2_4
  float z; // xmm1_4
  float v8; // xmm3_4
  __int64 i; // rax
  __int64 v10; // rax
  float v11[4]; // [rsp+10h] [rbp-50h] BYREF
  float v12[4]; // [rsp+20h] [rbp-40h] BYREF
  char text[16]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-18h]

  v14 = __readfsqword(0x28u);
  if ( TheNavMesh->m_pGenerator == 0 || nav_show_nodes.m_pParent->m_Value.m_nValue == 0 )
    return;
  m_isCovered = this->m_isCovered;
  if ( m_isCovered )
  {
    v3 = 0;
    v4 = -(this->m_attributeFlags & 1);
    v5 = -((this->m_attributeFlags & 1) == 0);
  }
  else
  {
    v3 = 255;
    v5 = 0;
    v4 = -(this->m_attributeFlags & 1);
  }
  y = this->m_pos.y;
  z = this->m_pos.z;
  v8 = this->m_pos.x - 2.0;
  v12[0] = this->m_pos.x + 2.0;
  v11[0] = v8;
  v11[1] = y - 2.0;
  v12[1] = y + 2.0;
  v11[2] = z - 2.0;
  v12[2] = z + 2.0;
  if ( INavDraw::ms_pInst != 0 )
  {
    (*(INavDraw::ms_pInst->_vptr_INavDraw + 2))(INavDraw::ms_pInst, v11, v12, v5, v3, v4, 0.0, 255, 1);
    m_isCovered = this->m_isCovered;
  }
  if ( !m_isCovered )
  {
    if ( nav_show_node_id.m_pParent->m_Value.m_nValue == 0 )
      goto LABEL_9;
LABEL_18:
    V_snprintf(text, 16, "%d", this->m_id);
    goto LABEL_9;
  }
  if ( nav_show_node_id.m_pParent->m_Value.m_nValue < 0 )
    goto LABEL_18;
LABEL_9:
  if ( nav_test_node_crouch.m_pParent->m_Value.m_nValue == this->m_id )
  {
    CNavNode::CheckCrouch(this);
    ConVar::SetValue(&nav_test_node_crouch, 0);
  }
  if ( (this->m_attributeFlags & 1) != 0 )
  {
    for ( i = 0; i != 4; ++i )
      ;
  }
  v10 = 0;
  if ( nav_show_node_grid.m_pParent->m_Value.m_nValue != 0 )
  {
    do
      v10 += 4;
    while ( v10 != 16 );
  }
}


// CNavNode::GetGroundHeightAboveNode  (line 259, @0x00000000031fd370, libserver.so)
// callers: CNavGeneratorAAQuad::FixConnections
float __fastcall CNavNode::GetGroundHeightAboveNode(const CNavNode *const this, NavCornerType cornerType)
{
  __int64 v2; // rax
  float result; // xmm0_4

  v2 = 0;
  result = 0.0;
  if ( cornerType <= NavCornerType::SOUTH_WEST )
    return this->m_groundHeightAboveNode[cornerType];
  do
    result = fmaxf(result, this->m_groundHeightAboveNode[v2++]);
  while ( v2 != 4 );
  return result;
}


// CNavNode::TestForCrouchArea  (line 278, @0x00000000031fd3b0, libserver.so)  // inlines: CGameTrace, DrawBox, RnCollisionAttr_t, VectorAdd, operator+, operator=
// calls: CGameTrace::Init
// callers: CNavNode::CheckCrouch
bool __fastcall CNavNode::TestForCrouchArea(
        CNavNode *const this,
        NavCornerType cornerNum,
        const Vector *const vMins,
        const Vector *const vMaxs,
        float *pGroundHeightAboveNode)
{
  INavPhysicsInterface *m_pPhysicsInterface; // rbx
  CTraceFilter *m_pTraceFilterWalkableEntities; // r14
  __int64 v8; // rdx
  float v9; // xmm0_4
  vec_t y; // xmm1_4
  bool result; // al
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float maxHeight; // [rsp+38h] [rbp-138h]
  float height; // [rsp+3Ch] [rbp-134h]
  Vector vStart; // [rsp+40h] [rbp-130h] BYREF
  Vector vEnd; // [rsp+50h] [rbp-120h] BYREF
  Vector vRealMaxs; // [rsp+60h] [rbp-110h] BYREF
  float v31; // [rsp+70h] [rbp-100h] BYREF
  float v32; // [rsp+74h] [rbp-FCh]
  float v33; // [rsp+78h] [rbp-F8h]
  float v34; // [rsp+80h] [rbp-F0h] BYREF
  float v35; // [rsp+84h] [rbp-ECh]
  float v36; // [rsp+88h] [rbp-E8h]
  trace_t_0 tr; // [rsp+90h] [rbp-E0h] BYREF

  m_pPhysicsInterface = TheNavMesh->m_pPhysicsInterface;
  if ( m_pPhysicsInterface == 0 )
    return 0;
  m_pTraceFilterWalkableEntities = TheNavMesh->m_pTraceFilterWalkableEntities;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v8 = *&this->m_pos.x;
  vEnd.z = this->m_pos.z;
  vStart.z = vEnd.z;
  *&vStart.x = v8;
  *&vEnd.x = v8;
  vEnd.z = vEnd.z + 64.0;
  (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
    m_pPhysicsInterface,
    &vStart,
    &vEnd,
    &NavTraceMins,
    &NavTraceMaxs,
    CNavConfig::ms_TraceMaskSolidBrushOnly,
    m_pTraceFilterWalkableEntities,
    &tr);
  v9 = 0.0;
  maxHeight = tr.endpos.z - vStart.z;
  *&vRealMaxs.x = *&vMaxs->x;
  if ( (tr.endpos.z - vStart.z) < 0.0 )
  {
LABEL_11:
    *pGroundHeightAboveNode = 64.0;
    this->m_isBlocked[cornerNum] = 1;
    return 0;
  }
  while ( 1 )
  {
    height = v9;
    vStart.x = this->m_pos.x;
    y = this->m_pos.y;
    vRealMaxs.z = 55.0;
    vStart.y = y;
    vStart.z = v9 + this->m_pos.z;
    (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
      m_pPhysicsInterface,
      &vStart,
      &vStart,
      vMins,
      &vRealMaxs,
      CNavConfig::ms_TraceMaskSolidBrushOnly,
      m_pTraceFilterWalkableEntities,
      &tr);
    if ( !tr.startsolid )
      break;
    v9 = height + 1.0;
    if ( maxHeight < (height + 1.0) )
      goto LABEL_11;
  }
  vRealMaxs.z = 71.0;
  *pGroundHeightAboveNode = vStart.z - this->m_pos.z;
  (*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 3))(
    m_pPhysicsInterface,
    &vStart,
    &vStart,
    vMins,
    &vRealMaxs,
    CNavConfig::ms_TraceMaskSolidBrushOnly,
    m_pTraceFilterWalkableEntities,
    &tr);
  result = 0;
  if ( tr.startsolid )
  {
    if ( nav_test_node_crouch.m_pParent->m_Value.m_nValue != this->m_id )
      return 0;
    v17 = vMaxs->z + vStart.z;
    v18 = vMaxs->x + vStart.x;
    v19 = vStart.y + vMins->y;
    v35 = vMaxs->y + vStart.y;
    v20 = vStart.z + vMins->z;
    v36 = v17;
    v21 = vStart.x + vMins->x;
    v34 = v18;
    v32 = v19;
    v33 = v20;
    v31 = v21;
    if ( INavDraw::ms_pInst != 0 )
    {
      (*(INavDraw::ms_pInst->_vptr_INavDraw + 2))(INavDraw::ms_pInst, &v31, &v34, 255, 0, 0, 100.0, 100, 1);
      return 0;
    }
  }
  else
  {
    result = 1;
    if ( nav_test_node_crouch.m_pParent->m_Value.m_nValue == this->m_id )
    {
      v12 = vMaxs->z + vStart.z;
      v13 = vMaxs->x + vStart.x;
      v35 = vMaxs->y + vStart.y;
      v36 = v12;
      v14 = vStart.y + vMins->y;
      v34 = v13;
      v15 = vStart.z + vMins->z;
      v16 = vStart.x + vMins->x;
      v32 = v14;
      v33 = v15;
      v31 = v16;
      if ( INavDraw::ms_pInst != 0 )
        (*(INavDraw::ms_pInst->_vptr_INavDraw + 2))(INavDraw::ms_pInst, &v31, &v34, 0, 255, 255, 100.0, 100, 1);
      return 1;
    }
  }
  return result;
}


// CNavNode::CheckCrouch  (line 341, @0x00000000031fd820, libserver.so)  // inlines: CornerToVector2D, FastSqrt, GetInt, Length, NormalizeInPlace, SetNodeAttributes, Vector, Vector2DLength, Vector2DNormalize, _mm_sqrt_ss, operator/=
// calls: CNavNode::TestForCrouchArea
// callers: CNavGeneratorAAQuad::AddNode, CNavNode::Draw
void __fastcall CNavNode::CheckCrouch(CNavNode *const this)
{
  float *m_groundHeightAboveNode; // r12
  __int64 v3; // rbx
  __int128 v4; // xmm1
  int m_nValue; // eax
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float y; // xmm0_4
  float v13; // xmm2_4
  bool v14; // al
  __int128 v15; // [rsp+0h] [rbp-50h]
  Vector mins; // [rsp+10h] [rbp-40h] BYREF
  Vector maxs; // [rsp+20h] [rbp-30h] BYREF

  m_groundHeightAboveNode = this->m_groundHeightAboveNode;
  v3 = 0;
  v4 = 0x40000000u;
  *&v4 = fsqrt(2.0);
  do
  {
    m_nValue = nav_test_node_crouch_dir.m_pParent->m_Value.m_nValue;
    if ( m_nValue == 4 || v3 == m_nValue )
    {
      if ( v3 == 2 )
      {
        v6 = 1.0;
        v7 = 1.0;
      }
      else if ( v3 == 3 )
      {
        v7 = -1.0;
        v6 = 1.0;
      }
      else
      {
        v6 = -1.0;
        if ( v3 == 1 )
          v7 = 1.0;
        else
          v7 = -1.0;
      }
      v8 = v7 * (1.0 / *&v4);
      v9 = v6 * (1.0 / *&v4);
      mins.x = 0.0;
      mins.y = 0.0;
      mins.z = 0.0;
      maxs.x = 0.0;
      maxs.y = 0.0;
      if ( v8 < 0.0 )
      {
        v11 = -16.0;
        v10 = 0.0;
        mins.x = -16.0;
      }
      else if ( v8 <= 0.0 )
      {
        v10 = 0.0;
        v11 = 0.0;
      }
      else
      {
        v10 = 16.0;
        v11 = 0.0;
        maxs.x = 16.0;
      }
      if ( v9 < 0.0 )
      {
        v13 = -16.0;
        y = maxs.y;
        mins.y = -16.0;
      }
      else if ( v9 <= 0.0 )
      {
        v13 = mins.y;
        y = maxs.y;
      }
      else
      {
        y = 16.0;
        v13 = mins.y;
        maxs.y = 16.0;
      }
      maxs.z = 71.0;
      if ( v11 > v10 )
      {
        mins.x = v10;
        maxs.x = v11;
      }
      if ( v13 > y )
      {
        mins.y = y;
        maxs.y = v13;
      }
      v15 = v4;
      v14 = CNavNode::TestForCrouchArea(this, v3, &mins, &maxs, m_groundHeightAboveNode);
      v4 = v15;
      if ( !v14 )
      {
        this->m_attributeFlags = 1;
        this->m_crouch[v3] = 1;
      }
    }
    ++v3;
    ++m_groundHeightAboveNode;
  }
  while ( v3 != 4 );
}


// CNavNode::ConnectTo  (line 400, @0x00000000031fdbf0, libserver.so)
// callers: CNavGeneratorAAQuad::AddNode
void __fastcall CNavNode::ConnectTo(
        CNavNode *const this,
        CNavNode *node,
        int dir,
        float obstacleHeight,
        float obstacleStartDist,
        float obstacleEndDist)
{
  float *v6; // rax

  v6 = &this->m_pos.x + dir;
  this->m_to[dir] = node;
  v6[14] = obstacleHeight;
  v6[18] = obstacleStartDist;
  v6[22] = obstacleEndDist;
}


// CNavNode::GetNode  (line 417, @0x00000000031fdc20, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, GetPosition, Hash8, operator(), operator=, operator==, operator[]
// calls: MurmurHash2, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: CNavGeneratorAAQuad::LadderEndSearch, CNavGeneratorAAQuad::GetNextWalkableSeedNode, CNavGeneratorAAQuad::AddNode, CNavGeneratorAAQuad::SimplifySelectedAreas
// globals: g_pNavNodeHash, `guard variable for'CNavNode::GetNode(Vector const&)::lookup, CNavNode::GetNode(Vector const&)::lookup, __dso_handle, CNavNode::~CNavNode()
CNavNode *__fastcall CNavNode::GetNode(const Vector *const pos)
{
  CUtlHash<CNavNode*,CNodeHashFuncs,CNodeHashFuncs> *v1; // r12
  float v2; // xmm1_4
  vec_t y; // xmm2_4
  vec_t z; // xmm0_4
  uint32 v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // r8
  int v11; // ecx
  CNavNode *result; // rax
  float v13; // xmm3_4
  int v14; // eax
  float tolerance; // [rsp+Ch] [rbp-24h]
  float tolerancea; // [rsp+Ch] [rbp-24h]
  Vector key; // [rsp+10h] [rbp-20h] BYREF

  v1 = g_pNavNodeHash;
  v2 = 0.44999999 * CNavGeneratorBase::sm_flGenerationStepSize;
  if ( g_pNavNodeHash != 0 )
  {
    if ( `guard variable for'CNavNode::GetNode(Vector const&)::lookup == 0 )
    {
      tolerancea = 0.44999999 * CNavGeneratorBase::sm_flGenerationStepSize;
      v14 = __cxa_guard_acquire(&`guard variable for'CNavNode::GetNode(Vector const&)::lookup);
      v2 = tolerancea;
      if ( v14 != 0 )
      {
        __cxa_guard_release(&`guard variable for'CNavNode::GetNode(Vector const&)::lookup);
        __cxa_atexit(CNavNode::~CNavNode, &CNavNode::GetNode(Vector const&)::lookup, &_dso_handle);
        v1 = g_pNavNodeHash;
        v2 = tolerancea;
      }
      else
      {
        v1 = g_pNavNodeHash;
      }
    }
    y = pos->y;
    tolerance = v2;
    z = pos->z;
    CNavNode::GetNode(Vector const&)::lookup.m_pos.x = pos->x;
    CNavNode::GetNode(Vector const&)::lookup.m_pos.y = y;
    CNavNode::GetNode(Vector const&)::lookup.m_pos.z = z;
    key = CNavNode::GetNode(Vector const&)::lookup.m_pos;
    v6 = MurmurHash2(&key, 8, 0x3501A674u);
    v7 = v1->m_bPowerOfTwo ? v1->m_ModMask & v6 : v6 % v1->m_Buckets.m_Size;
    v8 = &v1->m_Buckets.m_Memory.m_pMemory[v7];
    v9 = *v8;
    if ( *v8 <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v10 = *(v8 + 8);
      v11 = 0;
      while ( CNavNode::GetNode(Vector const&)::lookup.m_pos.x != **v10
           || *(*v10 + 4LL) != CNavNode::GetNode(Vector const&)::lookup.m_pos.y )
      {
        ++v11;
        v10 += 8;
        if ( v11 == v9 )
          return 0;
      }
    }
    if ( v9 != v11 && (v11 | (v7 << 16)) != 0xFFFFFFFF )
    {
      result = g_pNavNodeHash->m_Buckets.m_Memory.m_pMemory[(v11 | (v7 << 16)) >> 16].m_Memory.m_pMemory[v11];
      if ( result != 0 )
      {
        v13 = pos->z;
        if ( tolerance > fabs(result->m_pos.z - v13) )
          return result;
        while ( 1 )
        {
          result = result->m_nextAtXY;
          if ( result == 0 )
            break;
          if ( tolerance > fabs(result->m_pos.z - v13) )
            return result;
        }
      }
    }
  }
  return 0;
}


// CNavNode::IsBiLinked  (line 462, @0x00000000031fde30, libserver.so)  // inlines: NavDirOpposite
bool __fastcall CNavNode::IsBiLinked(const CNavNode *const this, NavDirType dir)
{
  CNavNode *v2; // rdx

  v2 = this->m_to[dir];
  return v2 != 0 && this == v2->m_to[(dir + 2) % 4];
}


// CNavNode::IsClosedCell  (line 473, @0x00000000031fde70, libserver.so)  // inlines: IsBiLinked
// callers: CNavGeneratorAAQuad::TestArea
bool __fastcall CNavNode::IsClosedCell(const CNavNode *const this)
{
  CNavNode *v1; // rax
  CNavNode *v3; // rdx
  CNavNode *v4; // rcx
  CNavNode *v5; // rdx

  v1 = this->m_to[2];
  return v1 != 0
      && this == v1->m_to[0]
      && (v3 = this->m_to[1]) != 0
      && this == v3->m_to[3]
      && (v4 = v3->m_to[2]) != 0
      && v3 == v4->m_to[0]
      && (v5 = v1->m_to[1]) != 0
      && v1 == v5->m_to[3]
      && v4 == v5;
}


