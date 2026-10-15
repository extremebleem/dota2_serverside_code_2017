// Reconstructed from DWARF by pahole; not original source.

// src/meshutils/mesh.cpp:471
struct EdgeHash_t {
	int m_nV0;  // +0x0
	int m_nV1;  // +0x4
	int m_nTri0;  // +0x8
	int m_nTri1;  // +0xc
	bool operator==(const EdgeHash_t &);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_mesh.cpp  (line 0, @0x0000000001a6d360, libserver.so)  // inlines: CUtlString, Color, SetColor, __static_initialization_and_destruction_0, ~CUtlString
// calls: CUtlString::Set, __cxa_atexit, CUtlString::FreeMemoryBlock, _Unwind_Resume
// globals: g_PositionAttribute, UNSPECIFIED_LOGGING_COLOR, __dso_handle, CMeshVertexAttribute::~CMeshVertexAttribute()
void __cdecl GLOBAL__sub_I_mesh_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  g_PositionAttribute.m_name.m_pString = 0;
  CUtlString::Set(&g_PositionAttribute.m_name, "position");
  g_PositionAttribute.m_nameDelta.m_pString = 0;
  CUtlString::Set(&g_PositionAttribute.m_nameDelta, "");
  __cxa_atexit(CMeshVertexAttribute::~CMeshVertexAttribute, &g_PositionAttribute, &_dso_handle);
}


// CMesh::CMesh  (line 38, @0x00000000031c6b90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, Vector4D, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::KeyValues, _Unwind_Resume, CUtlMemory<IndexRange_t, int>::Purge
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CalcOOBB2d, ConvexHullPartitioned, ApplyStandardWeldAndClean, CreatePositionOnlyMeshFromMesh, CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::SetCount
// strings: "meshUtilsKeyValues"
// globals: CMesh::s_nDebugIndex
void __fastcall CMesh::CMesh(CMesh *const this)
{
  KeyValues *p_m_KeyValues; // rdi
  uint v3; // eax

  p_m_KeyValues = &this->m_KeyValues;
  HIBYTE(p_m_KeyValues[-2].m_pPeer) = 0;
  *(&p_m_KeyValues[-19].m_pPeer + 7) = 0;
  *(&p_m_KeyValues[-18].m_wsValue + 7) = 0;
  *(&p_m_KeyValues[-18].m_pPeer + 3) = 0;
  *(&p_m_KeyValues[-17].m_pValue + 3) = 0;
  *(&p_m_KeyValues[-17].m_wsValue + 7) = 0;
  *(&p_m_KeyValues[-17].CKeyValues_Data + 11) = 0;
  *(&p_m_KeyValues[-17].m_pPeer + 3) = 0;
  *(&p_m_KeyValues[-17].m_pPeer + 7) = 0;
  *(&p_m_KeyValues[-16].m_wsValue + 7) = 0;
  *(&p_m_KeyValues[-16].m_pPeer + 3) = 0;
  *(&p_m_KeyValues[-16].m_pPeer + 7) = 0;
  *(&p_m_KeyValues[-2].m_wsValue + 7) = 0;
  p_m_KeyValues[-1].m_Color[0] = 0;
  *(&p_m_KeyValues[-1].m_pValue + 3) = 0;
  *(&p_m_KeyValues[-1].m_wsValue + 7) = 0;
  *(&p_m_KeyValues[-1].CKeyValues_Data + 11) = 0;
  *(&p_m_KeyValues[-1].m_pPeer + 3) = 0;
  HIBYTE(p_m_KeyValues[-1].m_pPeer) = -1;
  KeyValues::KeyValues(p_m_KeyValues, "meshUtilsKeyValues");
  v3 = CMesh::s_nDebugIndex;
  this->m_bAllocatedMeshData = 0;
  this->m_materialName[0] = 0;
  this->m_nDebugIndex = v3;
  CMesh::s_nDebugIndex = v3 + 1;
}


// CMesh::~CMesh  (line 50, @0x00000000031c6da0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMesh::FreeAllMemory, KeyValues::~KeyValues, CUtlMemory<IndexRange_t, int>::Purge
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CalcOOBB2d, ConvexHullPartitioned, ApplyStandardWeldAndClean, CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::SetCount
void __fastcall CMesh::~CMesh(CMesh *const this)
{
  bool v2; // zf

  CMesh::FreeAllMemory(this);
  KeyValues::~KeyValues(&this->m_KeyValues);
  v2 = (this->m_indexRanges.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_indexRanges.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<IndexRange_t,int>::Purge(&this->m_indexRanges.m_Memory);
    if ( (this->m_indexRanges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IndexRange_t,int>::Purge(&this->m_indexRanges.m_Memory);
  }
}


// CMesh::FreeAllMemory  (line 57, @0x00000000031c6cc0, libserver.so)  // inlines: ~CMeshVertexAttribute, ~CUtlString
// calls: operator delete [], CUtlString::FreeMemoryBlock
// callers: CMesh::~CMesh, CMesh::AllocateMesh, CMesh::InitExternalMesh, ApplyStandardWeldAndClean
void __fastcall CMesh::FreeAllMemory(CMesh *const this)
{
  float *m_pVerts; // rdi
  CMeshVertexAttribute *m_pAttributes; // rax
  CUtlString *p_m_name; // rbx
  uint32 *m_pIndices; // rdi

  if ( this->m_bAllocatedMeshData )
  {
    m_pVerts = this->m_pVerts;
    if ( m_pVerts != 0 )
      operator delete[](m_pVerts);
    m_pAttributes = this->m_pAttributes;
    if ( m_pAttributes != 0 )
    {
      p_m_name = &m_pAttributes[*&m_pAttributes[-1].m_dmeType].m_name;
      while ( p_m_name != m_pAttributes )
      {
        p_m_name -= 5;
        if ( p_m_name[1].m_pString != 0 )
          CUtlString::FreeMemoryBlock(p_m_name + 1);
        if ( p_m_name->m_pString != 0 )
          CUtlString::FreeMemoryBlock(p_m_name);
        m_pAttributes = this->m_pAttributes;
      }
      operator delete[](&p_m_name[-1]);
    }
    m_pIndices = this->m_pIndices;
    if ( m_pIndices != 0 )
      operator delete[](m_pIndices);
  }
  this->m_pVerts = 0;
  this->m_pAttributes = 0;
  this->m_pIndices = 0;
  this->m_bAllocatedMeshData = 0;
  this->m_nAttributeCount = 0;
  this->m_nVertexStrideFloats = 0;
  this->m_nVertexCount = 0;
  this->m_nIndexCount = 0;
}


// CMesh::AllocateMesh  (line 75, @0x00000000031c6e00, libserver.so)  // inlines: CMeshVertexAttribute, CUtlString, operator=
// calls: CMesh::FreeAllMemory, operator new [], CUtlString::operator=
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CConvexHullBuilder::GenerateOutputMesh, ConvexHull3D, CMesh::AllocateAndCopyMesh, DuplicateMesh, DeIndexMesh, RationalizeUVs, TessellateOnWrappedUV, DuplicateMeshFaces, ConcatMeshes, WeldVertices, CleanMesh (15 total)
// globals: g_PositionAttribute
void __fastcall CMesh::AllocateMesh(
        CMesh *const this,
        int nVertexCount,
        int nIndexCount,
        int nVertexStrideFloats,
        CMeshVertexAttribute *pAttributes,
        int nAttributeCount)
{
  unsigned __int64 v6; // r15
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // ecx
  size_t v14; // rdi
  float *v15; // rax
  size_t v16; // rdi
  uint32 *v17; // rax
  size_t v18; // rdi
  _QWORD *v19; // rax
  CMeshVertexAttribute *m_pAttributes; // r14
  char *v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rsi
  signed __int64 v24; // rax
  __int64 v25; // rax
  CMeshVertexAttribute *v26; // r13
  CMeshVertexAttribute *v27; // r15
  CUtlString *v28; // r14
  const CUtlString *p_m_nameDelta; // rsi
  unsigned __int64 v30; // [rsp+8h] [rbp-48h]
  __int64 nVertexStrideFloatsa; // [rsp+18h] [rbp-38h]

  v6 = nIndexCount;
  CMesh::FreeAllMemory(this);
  v11 = nVertexStrideFloats;
  if ( pAttributes != 0 )
  {
    v12 = nAttributeCount;
    nVertexStrideFloatsa = nAttributeCount - 1LL;
  }
  else
  {
    nVertexStrideFloatsa = 0;
    v12 = 1;
    nAttributeCount = 1;
    pAttributes = &g_PositionAttribute;
  }
  this->m_nVertexStrideFloats = v11;
  v13 = nVertexCount * v11;
  this->m_nVertexCount = nVertexCount;
  this->m_nIndexCount = v6;
  this->m_nAttributeCount = nAttributeCount;
  v14 = 4LL * v13;
  v30 = v12;
  if ( v13 > 0x1FC0000000000000LL )
    v14 = -1;
  this->m_bAllocatedMeshData = 1;
  v15 = operator new[](v14);
  v16 = 4 * v6;
  this->m_pVerts = v15;
  if ( v6 > 0x1FC0000000000000LL )
    v16 = -1;
  v17 = operator new[](v16);
  v18 = -1;
  this->m_pIndices = v17;
  if ( v30 <= 0x330000000000000LL )
    v18 = 40 * v30 + 8;
  v19 = operator new[](v18);
  m_pAttributes = (v19 + 1);
  *v19 = v30;
  if ( nVertexStrideFloatsa != -1 )
  {
    v21 = (v19 + 1);
    v22 = 0;
    v23 = v19 + 2;
    do
    {
      ++v22;
      *v21 = 0;
      v24 = v21 - m_pAttributes;
      v21 += 40;
      *(v23 + v24) = 0;
    }
    while ( v22 != nVertexStrideFloatsa + 1 );
  }
  this->m_pAttributes = m_pAttributes;
  if ( nAttributeCount > 0 )
  {
    v25 = (nAttributeCount - 1);
    v26 = pAttributes;
    v27 = &pAttributes[v25 + 1];
    while ( 1 )
    {
      v28 = (&m_pAttributes->m_name + v26 - pAttributes);
      CUtlString::operator=(v28, &v26->m_name);
      p_m_nameDelta = &v26->m_nameDelta;
      ++v26;
      CUtlString::operator=(v28 + 1, p_m_nameDelta);
      LODWORD(v28[2].m_pString) = v26[-1].m_nSemanticIndex;
      HIDWORD(v28[2].m_pString) = v26[-1].m_nOffsetFloats;
      LODWORD(v28[3].m_pString) = v26[-1].m_nSizeFloats;
      BYTE4(v28[3].m_pString) = v26[-1].m_bDelta;
      BYTE5(v28[3].m_pString) = v26[-1].m_bNoCompression;
      LODWORD(v28[4].m_pString) = v26[-1].m_dmeType;
      if ( v26 == v27 )
        break;
      m_pAttributes = this->m_pAttributes;
    }
  }
}


// CMesh::AllocateAndCopyMesh  (line 101, @0x00000000031c6fd0, libserver.so)  // inlines: GetTotalIndexSizeInBytes, V_memcpy, memcpy
// calls: CMesh::AllocateMesh, memcpy
// callers: HullFromPlanes
void __fastcall CMesh::AllocateAndCopyMesh(
        CMesh *const this,
        int nInputVertexCount,
        const float *pInputVerts,
        int nInputVertexStrideFloats,
        int nInputIndexCount,
        const uint32 *pInputIndices,
        int nVertexStrideFloats,
        CMeshVertexAttribute *pAttributes,
        int nAttributeCount)
{
  const float *v13; // rdx
  __int64 v14; // rsi
  int v15; // r8d
  __int64 v16; // rax
  float *i; // rcx

  if ( nInputVertexStrideFloats >= nVertexStrideFloats )
  {
    CMesh::AllocateMesh(this, nInputVertexCount, nInputIndexCount, nVertexStrideFloats, pAttributes, nAttributeCount);
    if ( nInputVertexCount > 0 )
    {
      v13 = pInputVerts;
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = 0;
        for ( i = &this->m_pVerts[v14]; nVertexStrideFloats > v16; ++v16 )
          i[v16] = v13[v16];
        ++v15;
        v14 += nVertexStrideFloats;
        v13 += nInputVertexStrideFloats;
      }
      while ( v15 != nInputVertexCount );
    }
    memcpy(this->m_pIndices, pInputIndices, (4 * this->m_nIndexCount));
  }
}


// CMesh::AllocateAndCopyMesh  (line 123, @0x00000000031c70a0, libserver.so)  // inlines: GetTotalIndexSizeInBytes, GetTotalVertexSizeInBytes, GetVertexSizeInBytes, V_memcpy, memcpy
// calls: CMesh::AllocateMesh, memcpy
void __fastcall CMesh::AllocateAndCopyMesh(CMesh *const this, const CMesh *const other)
{
  CMesh::AllocateMesh(
    this,
    other->m_nVertexCount,
    other->m_nIndexCount,
    other->m_nVertexStrideFloats,
    other->m_pAttributes,
    other->m_nAttributeCount);
  memcpy(this->m_pVerts, other->m_pVerts, (this->m_nVertexStrideFloats * 4 * this->m_nVertexCount));
  memcpy(this->m_pIndices, other->m_pIndices, (4 * this->m_nIndexCount));
}


// CMesh::InitExternalMesh  (line 131, @0x00000000031c7100, libserver.so)
// calls: CMesh::FreeAllMemory
// callers: CalcOOBB2d
// globals: g_PositionAttribute
void __fastcall CMesh::InitExternalMesh(
        CMesh *const this,
        float *pVerts,
        int nVertexCount,
        uint32 *pIndices,
        int nIndexCount,
        int nVertexStrideFloats,
        CMeshVertexAttribute *pAttributes,
        int nAttributeCount)
{
  CMeshVertexAttribute *v12; // r12

  v12 = pAttributes;
  if ( pAttributes == 0 )
  {
    nAttributeCount = 1;
    v12 = &g_PositionAttribute;
  }
  CMesh::FreeAllMemory(this);
  this->m_nVertexCount = nVertexCount;
  this->m_pVerts = pVerts;
  this->m_pIndices = pIndices;
  this->m_pAttributes = v12;
  this->m_bAllocatedMeshData = 0;
  this->m_nVertexStrideFloats = nVertexStrideFloats;
  this->m_nIndexCount = nIndexCount;
  this->m_nAttributeCount = nAttributeCount;
}


// CMesh::AppendMesh  (line 149, @0x00000000031c7190, libserver.so)  // inlines: CMeshVertexAttribute, CUtlString, V_memcpy, memcpy, operator=
// calls: operator new [], memcpy, operator delete [], CUtlString::operator=, Warning
// callers: ConvexHullPartitioned
// strings: "Attribute counts between meshes is inconsistent\n"
void __fastcall CMesh::AppendMesh(CMesh *const this, const CMesh *const inputMesh)
{
  const CMesh *v2; // r8
  int m_nVertexStrideFloats; // eax
  unsigned __int64 v5; // r12
  size_t v6; // rdi
  _QWORD *v7; // rax
  CMeshVertexAttribute *m_pAttributes; // rbx
  unsigned __int64 v9; // rsi
  char *v10; // rdx
  _QWORD *v11; // rdi
  signed __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r13
  int v15; // r14d
  int v16; // r12d
  int v17; // ebx
  unsigned __int64 v18; // rax
  size_t v19; // rdi
  char *v20; // r13
  size_t v21; // rdi
  char *v22; // r14
  __int64 v23; // rdx
  int v24; // esi
  uint32 *m_pIndices; // rdi
  CMeshVertexAttribute *v26; // rbx
  CMeshVertexAttribute *v27; // r12
  __int64 m_nAttributeCount; // rcx
  int nCurrentIndex; // [rsp+Ch] [rbp-44h]
  const CMesh *v30; // [rsp+10h] [rbp-40h]
  const CMesh *inputMeshb; // [rsp+18h] [rbp-38h]
  const CMesh *inputMeshd; // [rsp+18h] [rbp-38h]

  v2 = inputMesh;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  if ( m_nVertexStrideFloats != 0 )
  {
    m_nAttributeCount = this->m_nAttributeCount;
    if ( inputMesh->m_nAttributeCount != m_nAttributeCount )
    {
      Warning("Attribute counts between meshes is inconsistent\n", inputMesh);
      m_nVertexStrideFloats = this->m_nVertexStrideFloats;
      v2 = inputMesh;
    }
    if ( v2->m_nVertexStrideFloats != m_nVertexStrideFloats )
    {
      inputMeshd = v2;
      Warning("Attribute counts between meshes is inconsistent\n");
      m_nVertexStrideFloats = this->m_nVertexStrideFloats;
      v2 = inputMeshd;
    }
  }
  else
  {
    this->m_nVertexStrideFloats = inputMesh->m_nVertexStrideFloats;
    v5 = inputMesh->m_nAttributeCount;
    this->m_nAttributeCount = v5;
    v6 = -1;
    if ( v5 <= 0x330000000000000LL )
      v6 = 40 * v5 + 8;
    v7 = operator new[](v6);
    v2 = inputMesh;
    *v7 = v5;
    m_pAttributes = (v7 + 1);
    if ( v5 != 0 )
    {
      v9 = v5 - 2;
      v10 = (v7 + 1);
      v11 = v7 + 2;
      do
      {
        --v9;
        *v10 = 0;
        v12 = v10 - m_pAttributes;
        v10 += 40;
        *(v11 + v12) = 0;
      }
      while ( v9 != -2 );
    }
    v13 = this->m_nAttributeCount;
    v14 = 0;
    v15 = 0;
    this->m_pAttributes = m_pAttributes;
    if ( v13 > 0 )
    {
      while ( 1 )
      {
        v26 = &m_pAttributes[v14];
        inputMeshb = v2;
        v27 = &v2->m_pAttributes[v14];
        ++v15;
        ++v14;
        CUtlString::operator=(&v26->m_name, &v27->m_name);
        CUtlString::operator=(&v26->m_nameDelta, &v27->m_nameDelta);
        v2 = inputMeshb;
        v26->m_nSemanticIndex = v27->m_nSemanticIndex;
        v26->m_nOffsetFloats = v27->m_nOffsetFloats;
        v26->m_nSizeFloats = v27->m_nSizeFloats;
        v26->m_bDelta = v27->m_bDelta;
        v26->m_bNoCompression = v27->m_bNoCompression;
        v26->m_dmeType = v27->m_dmeType;
        if ( this->m_nAttributeCount <= v15 )
          break;
        m_pAttributes = this->m_pAttributes;
      }
    }
    m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  }
  v30 = v2;
  v16 = v2->m_nVertexCount + this->m_nVertexCount;
  v17 = v2->m_nIndexCount + this->m_nIndexCount;
  v18 = v16 * m_nVertexStrideFloats;
  v19 = 4 * v18;
  if ( v18 > 0x1FC0000000000000LL )
    v19 = -1;
  v20 = operator new[](v19);
  v21 = 4LL * v17;
  if ( v17 > 0x1FC0000000000000LL )
    v21 = -1;
  v22 = operator new[](v21);
  memcpy(v20, this->m_pVerts, 4LL * this->m_nVertexStrideFloats * this->m_nVertexCount);
  memcpy(v22, this->m_pIndices, 4LL * this->m_nIndexCount);
  nCurrentIndex = this->m_nIndexCount;
  memcpy(
    &v20[4 * this->m_nVertexStrideFloats * this->m_nVertexCount],
    v30->m_pVerts,
    4LL * v30->m_nVertexCount * this->m_nVertexStrideFloats);
  if ( v30->m_nIndexCount > 0 )
  {
    v23 = 0;
    v24 = 0;
    do
    {
      ++v24;
      *&v22[4 * nCurrentIndex + v23 * 4] = this->m_nVertexCount + v30->m_pIndices[v23];
      ++v23;
    }
    while ( v30->m_nIndexCount > v24 );
  }
  if ( this->m_pVerts != 0 )
    operator delete[](this->m_pVerts);
  m_pIndices = this->m_pIndices;
  if ( m_pIndices != 0 )
    operator delete[](m_pIndices);
  this->m_pVerts = v20;
  this->m_pIndices = v22;
  this->m_nVertexCount = v16;
  this->m_nIndexCount = v17;
}


// CMesh::RemapBlendIndices  (line 210, @0x00000000031c95e0, libserver.so)  // inlines: GetVertex, LeafCodeInfo_t
// calls: CMesh::GetSkinningDataFields, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "mesh.cpp", "RemapBlendIndices", "remapping vertex %d[w%d] invalid: %d->? >= %d", "remapping vertex %d[w%d] invalid: %d->%d >= %d"
void __fastcall CMesh::RemapBlendIndices(
        CMesh *const this,
        const int *pRemap,
        int nPreRemapBoneCount,
        int nPostRemapBoneCount)
{
  unsigned int *v5; // r14
  __int64 v6; // rdx
  CMesh *v7; // r9
  __int64 v8; // rax
  CMeshVertexAttribute *m_pAttributes; // rcx
  CMeshVertexAttribute *v10; // rdi
  int m_nSizeFloats; // edx
  const int *v12; // rsi
  __int64 v13; // r11
  __int64 v14; // rdi
  int v15; // r8d
  float v16; // xmm0_4
  __int64 v17; // rcx
  __int64 v18; // rax
  int *v19; // rbx
  __int64 v20; // rcx
  int v21; // r13d
  int v22; // r12d
  int v23; // r10d
  char IsChannelEnabled; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r9
  __int64 v30; // r8
  char v31; // al
  int v32; // eax
  unsigned int ia; // [rsp+28h] [rbp-58h]
  unsigned int ib; // [rsp+28h] [rbp-58h]
  LeafCodeInfo_t v37; // [rsp+30h] [rbp-50h] BYREF
  __int64 SkinningDataFields; // 0:rax.8

  LODWORD(v5) = nPreRemapBoneCount;
  SkinningDataFields = CMesh::GetSkinningDataFields(this);
  v6 = SkinningDataFields >> 32;
  if ( SkinningDataFields < 0 )
    return;
  v7 = this;
  v8 = SkinningDataFields;
  m_pAttributes = this->m_pAttributes;
  v10 = &m_pAttributes[v6];
  m_nSizeFloats = v10->m_nSizeFloats;
  if ( this->m_nVertexCount <= 0 )
    return;
  v12 = pRemap;
  v13 = 4LL * v10->m_nOffsetFloats;
  v14 = 4LL * m_pAttributes[v8].m_nOffsetFloats;
  v15 = 0;
  v16 = 0.0;
  do
  {
    v17 = &v7->m_pVerts[v15 * v7->m_nVertexStrideFloats];
    v18 = 0;
    v19 = (v17 + v13);
    v20 = v14 + v17;
    if ( m_nSizeFloats <= 0 )
      goto LABEL_19;
    while ( 1 )
    {
      v21 = v18;
      if ( v16 == *(v20 + 4 * v18) )
      {
        *v19 = 0;
        goto LABEL_8;
      }
      v22 = *v19;
      if ( *v19 < 0 || v22 >= v5 )
        break;
      v23 = v12[v22];
      *v19 = v23;
      if ( v23 >= nPostRemapBoneCount || v23 < 0 )
      {
        v5 = &LOG_GENERAL;
        ia = v15;
        IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4);
        v30 = ia;
        if ( IsChannelEnabled != 0 )
        {
          v32 = *v19;
          v37.m_szFile = "mesh.cpp";
          v37.m_szFunction = "RemapBlendIndices";
          v37.m_nLine = 239;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v37,
            "remapping vertex %d[w%d] invalid: %d->%d >= %d",
            ia,
            v21,
            v22,
            v32,
            nPostRemapBoneCount);
        }
        goto LABEL_16;
      }
LABEL_8:
      ++v18;
      ++v19;
      if ( m_nSizeFloats <= v18 )
        goto LABEL_19;
    }
    ib = v15;
    v31 = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4);
    v30 = ib;
    if ( v31 != 0 )
    {
      v37.m_szFile = "mesh.cpp";
      v37.m_szFunction = "RemapBlendIndices";
      v37.m_nLine = 234;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v37,
        "remapping vertex %d[w%d] invalid: %d->? >= %d",
        ib,
        v21,
        v22,
        v5);
    }
LABEL_16:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v27, v28, v25, v26, v30, v29) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_19:
    ++v15;
  }
  while ( v7->m_nVertexCount > v15 );
}


// CMesh::GetVertexJointWeight  (line 248, @0x00000000031c7460, libserver.so)  // inlines: GetVertex
float __fastcall CMesh::GetVertexJointWeight(
        CMesh *const this,
        const CMesh::SkinningDataFields_t *const skinData,
        int nVertex,
        int nJoint)
{
  __int64 m_nBoneIndices; // rax
  CMeshVertexAttribute *m_pAttributes; // r9
  CMeshVertexAttribute *v6; // r8
  int m_nSizeFloats; // eax
  CMeshVertexAttribute *v8; // r9
  int v9; // esi
  float *v10; // rdi
  __int64 m_nOffsetFloats; // rax
  __int64 v12; // rdx
  int v13; // eax
  float result; // xmm0_4

  m_nBoneIndices = skinData->m_nBoneIndices;
  if ( m_nBoneIndices < 0 )
    return 0.0;
  m_pAttributes = this->m_pAttributes;
  v6 = &m_pAttributes[m_nBoneIndices];
  m_nSizeFloats = v6->m_nSizeFloats;
  if ( m_nSizeFloats <= 1 )
  {
    result = 0.0;
    if ( LODWORD(this->m_pVerts[this->m_nVertexStrideFloats * nVertex + v6->m_nOffsetFloats]) == nJoint )
      return 1.0;
    return result;
  }
  v8 = &m_pAttributes[skinData->m_nBoneWeights];
  v9 = v8->m_nSizeFloats;
  if ( v9 > m_nSizeFloats )
    v9 = v6->m_nSizeFloats;
  if ( v9 <= 0 )
    return 0.0;
  v10 = &this->m_pVerts[this->m_nVertexStrideFloats * nVertex];
  m_nOffsetFloats = v6->m_nOffsetFloats;
  if ( LODWORD(v10[m_nOffsetFloats]) != nJoint )
  {
    v12 = &v10[m_nOffsetFloats + 1];
    v13 = 0;
    while ( ++v13 != v9 )
    {
      v12 += 4;
      if ( *(v12 - 4) == nJoint )
        return v10[v8->m_nOffsetFloats + v13];
    }
    return 0.0;
  }
  v13 = 0;
  return v10[v8->m_nOffsetFloats + v13];
}


// CMesh::GetVertexJointSumWeight  (line 282, @0x00000000031c7520, libserver.so)  // inlines: BitVec_IsBitSet, GetVertex, IsBitSet
float __fastcall CMesh::GetVertexJointSumWeight(
        CMesh *const this,
        const CMesh::SkinningDataFields_t *const skinData,
        int nVertex,
        const CVarBitVec *const jointSet)
{
  __int64 m_nBoneIndices; // rax
  CMeshVertexAttribute *m_pAttributes; // r8
  CMeshVertexAttribute *v7; // rcx
  int m_nSizeFloats; // eax
  float result; // xmm0_4
  CMeshVertexAttribute *v10; // r13
  int v11; // esi
  float *v12; // r14
  float *v13; // rdi
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ecx

  m_nBoneIndices = skinData->m_nBoneIndices;
  if ( m_nBoneIndices < 0 )
    return 0.0;
  m_pAttributes = this->m_pAttributes;
  v7 = &m_pAttributes[m_nBoneIndices];
  m_nSizeFloats = v7->m_nSizeFloats;
  if ( m_nSizeFloats <= 1 )
  {
    result = 0.0;
    v16 = LODWORD(this->m_pVerts[this->m_nVertexStrideFloats * nVertex + v7->m_nOffsetFloats]);
    if ( v16 < jointSet->m_numBits && ((1 << v16) & jointSet->m_pInt[v16 >> 5]) != 0 )
      return 1.0;
  }
  else
  {
    result = 0.0;
    v10 = &m_pAttributes[skinData->m_nBoneWeights];
    v11 = v10->m_nSizeFloats;
    if ( v11 > m_nSizeFloats )
      v11 = v7->m_nSizeFloats;
    if ( v11 > 0 )
    {
      result = 0.0;
      v12 = &this->m_pVerts[this->m_nVertexStrideFloats * nVertex];
      v13 = &v12[v7->m_nOffsetFloats];
      v14 = 0;
      do
      {
        v15 = LODWORD(v13[v14]);
        if ( v15 < jointSet->m_numBits && ((1 << v15) & jointSet->m_pInt[v15 >> 5]) != 0 )
          result = result + v12[v10->m_nOffsetFloats + v14];
        ++v14;
      }
      while ( v11 > v14 );
    }
  }
  return result;
}


// CMesh::CalculateBounds  (line 317, @0x00000000031c76d0, libserver.so)  // inlines: Vector, operator=
// calls: CMesh::FindFirstAttributeOffset
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
bool __fastcall CMesh::CalculateBounds(
        const CMesh *const this,
        Vector *pMinOut,
        Vector *pMaxOut,
        int nStartVertex,
        int nVertexCount)
{
  int FirstAttributeOffset; // eax
  __int64 m_nVertexStrideFloats; // rdi
  float *v12; // rax
  float v13; // xmm4_4
  __int64 v14; // rdi
  int v15; // ecx
  float v16; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm1_4
  float v22; // xmm0_4

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  if ( FirstAttributeOffset < 0 )
    return 0;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  v12 = &this->m_pVerts[m_nVertexStrideFloats * nStartVertex + FirstAttributeOffset];
  if ( nVertexCount == 0 )
    nVertexCount = this->m_nVertexCount;
  if ( nVertexCount <= 0 )
  {
    v13 = 3.4028235e38;
    v16 = -3.4028235e38;
    v17 = 3.4028235e38;
    v18 = 3.4028235e38;
    v19 = -3.4028235e38;
    v20 = -3.4028235e38;
  }
  else
  {
    v13 = 3.4028235e38;
    v14 = 4 * m_nVertexStrideFloats;
    v15 = 0;
    v16 = -3.4028235e38;
    v17 = 3.4028235e38;
    v18 = 3.4028235e38;
    v19 = -3.4028235e38;
    v20 = -3.4028235e38;
    do
    {
      ++v15;
      v16 = fmaxf(*v12, v16);
      v13 = fminf(*v12, v13);
      v21 = fmaxf(v12[1], v19);
      v17 = fminf(v12[1], v17);
      v22 = v12[2];
      v12 = (v12 + v14);
      v19 = v21;
      v20 = fmaxf(v22, v20);
      v18 = fminf(v22, v18);
    }
    while ( v15 != nVertexCount );
  }
  pMinOut->x = v13;
  pMinOut->y = v17;
  pMinOut->z = v18;
  pMaxOut->x = v16;
  pMaxOut->y = v19;
  pMaxOut->z = v20;
  return 1;
}


// CMesh::CalculateBoundsForIndexRange  (line 351, @0x00000000031c7820, libserver.so)  // inlines: GetVertex, operator=
// calls: CMesh::FindFirstAttributeOffset
bool __fastcall CMesh::CalculateBoundsForIndexRange(
        const CMesh *const this,
        Vector *pMinOut,
        Vector *pMaxOut,
        int nStartIndex,
        int nIndexCount)
{
  __int64 v6; // r14
  float v10; // xmm4_4
  float v11; // xmm3_4
  __int64 v12; // rax
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  uint32 v17; // ecx
  float *v18; // rcx
  float v19; // xmm9_4

  v6 = nStartIndex;
  if ( CMesh::FindFirstAttributeOffset(this, "position", 3) < 0 )
    return 0;
  if ( nIndexCount <= 0 )
  {
    v10 = 3.4028235e38;
    v11 = -3.4028235e38;
    v13 = 3.4028235e38;
    v14 = 3.4028235e38;
    v15 = -3.4028235e38;
    v16 = -3.4028235e38;
  }
  else
  {
    v10 = 3.4028235e38;
    v11 = -3.4028235e38;
    v12 = 0;
    v13 = 3.4028235e38;
    v14 = 3.4028235e38;
    v15 = -3.4028235e38;
    v16 = -3.4028235e38;
    do
    {
      v17 = this->m_pIndices[v6 + v12++];
      v18 = &this->m_pVerts[this->m_nVertexStrideFloats * v17];
      v11 = fmaxf(*v18, v11);
      v10 = fminf(*v18, v10);
      v13 = fminf(v18[1], v13);
      v15 = fmaxf(v18[1], v15);
      v19 = v18[2];
      v16 = fmaxf(v19, v16);
      v14 = fminf(v19, v14);
    }
    while ( nIndexCount > v12 );
  }
  pMinOut->x = v10;
  pMinOut->y = v13;
  pMinOut->z = v14;
  pMaxOut->x = v11;
  pMaxOut->y = v15;
  pMaxOut->z = v16;
  return 1;
}


// CMesh::CalculateAvgUvDensityForIndexRange  (line 381, @0x00000000031d0790, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<float>, CrossProduct, Element, EnsureCapacity, FastSqrt, GetVertex, GrowMemory, Length, Purge, RemoveAll, VectorLength, VectorSubtract, __final_insertion_sort<float*>, __lg, __unguarded_insertion_sort<float*>, __unguarded_linear_insert<float*>, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator[], sort<float*>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMesh::FindFirstAttributeOffset, CUtlMemory<float, int>::Purge, CUtlMemory<float, int>::Grow, std::__introsort_loop<float*, long int>, std::__insertion_sort<float*>, sqrtf, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase, _Unwind_Resume
float __fastcall CMesh::CalculateAvgUvDensityForIndexRange(const CMesh *const this, int nStartIndex, int nIndexCount)
{
  int FirstAttributeOffset; // eax
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  float *m_pVerts; // r9
  __int64 v14; // rax
  int m_nVertexStrideFloats; // r8d
  Vector *v16; // rdx
  uint32 *v17; // rdi
  float *v18; // rsi
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // r14
  int v25; // eax
  float *v26; // rax
  int v27; // eax
  float result; // xmm0_4
  float *m_pMemory; // r12
  float *v30; // r13
  unsigned __int64 v31; // rax
  float *v32; // rbx
  float v33; // xmm1_4
  float *v34; // rax
  float *v35; // rdx
  float v36; // xmm0_4
  __int64 v37; // [rsp+30h] [rbp-B0h]
  float v38; // [rsp+3Ch] [rbp-A4h]
  float v39; // [rsp+3Ch] [rbp-A4h]
  int v40; // [rsp+40h] [rbp-A0h]
  CUtlMemory<float,int> v41; // [rsp+48h] [rbp-98h] BYREF
  Vector2D vTex[3]; // [rsp+60h] [rbp-80h] BYREF
  Vector vPos[3]; // [rsp+80h] [rbp-60h] BYREF

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  v6 = FirstAttributeOffset;
  if ( FirstAttributeOffset < 0 )
    return 0.0;
  v7 = CMesh::FindFirstAttributeOffset(this, "tex", 2);
  v8 = v7;
  if ( v7 < 0 )
    return 0.0;
  v40 = 0;
  v41.m_pMemory = 0;
  v41.m_nAllocationCount = 0;
  v41.m_nGrowSize = 0;
  v9 = nIndexCount / 3;
  if ( nIndexCount / 3 <= 0 )
  {
    result = 0.0;
  }
  else
  {
    v41.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v9);
    v10 = 4 * v8;
    v11 = 0;
    v41.m_nAllocationCount = nIndexCount / 3;
    v37 = v10;
    v12 = v6;
    do
    {
      m_pVerts = this->m_pVerts;
      v14 = 0;
      m_nVertexStrideFloats = this->m_nVertexStrideFloats;
      v16 = vPos;
      v17 = &this->m_pIndices[v11];
      do
      {
        ++v16;
        v18 = &m_pVerts[m_nVertexStrideFloats * v17[v14]];
        v16[-1].x = v18[v12];
        v16[-1].y = v18[v12 + 1];
        v16[-1].z = v18[v12 + 2];
        vTex[v14].x = *(v18 + v37);
        vTex[v14++].y = *(v18 + v37 + 4);
      }
      while ( v14 != 3 );
      v19 = ((vPos[0].y - vPos[2].y) * (vPos[1].x - vPos[0].x)) - ((vPos[0].x - vPos[2].x) * (vPos[1].y - vPos[0].y));
      v20 = ((vPos[0].x - vPos[2].x) * (vPos[1].z - vPos[0].z)) - ((vPos[1].x - vPos[0].x) * (vPos[0].z - vPos[2].z));
      v21 = ((vPos[1].y - vPos[0].y) * (vPos[0].z - vPos[2].z)) - ((vPos[1].z - vPos[0].z) * (vPos[0].y - vPos[2].y));
      v22 = fsqrt(((v21 * v21) + (v20 * v20)) + (v19 * v19));
      v23 = fabs(
              (((((vTex[0].y * vTex[2].x) - (vTex[1].x * vTex[0].y)) + (vTex[0].x * vTex[1].y)) - (vTex[1].y * vTex[2].x))
             - (vTex[0].x * vTex[2].y))
            + (vTex[2].y * vTex[1].x))
          * 0.5;
      if ( v23 > 0.0 )
      {
        v38 = fsqrt((v22 * 0.5) / v23);
        v24 = v40;
        v25 = v40;
        if ( v40 == v41.m_nAllocationCount )
        {
          CUtlMemory<float,int>::Grow(&v41, 1);
          v25 = v40;
        }
        v40 = v25 + 1;
        v26 = &v41.m_pMemory[v24];
        if ( v26 != 0 )
          *v26 = v38;
      }
      v11 += 3;
    }
    while ( v11 != 3LL * (v9 - 1) + 3 );
    v27 = v40;
    result = 0.0;
    if ( v40 != 0 )
    {
      m_pMemory = v41.m_pMemory;
      v30 = &v41.m_pMemory[v40];
      if ( v30 != v41.m_pMemory )
      {
        _BitScanReverse64(&v31, (4LL * v40) >> 2);
        std::__introsort_loop<float *,long>(v41.m_pMemory, &v41.m_pMemory[v40], 2 * (63LL - (v31 ^ 0x3F)));
        if ( 4LL * v40 <= 67 )
        {
          std::__insertion_sort<float *>(m_pMemory, v30);
        }
        else
        {
          v32 = m_pMemory + 16;
          std::__insertion_sort<float *>(m_pMemory, m_pMemory + 16);
          if ( v30 != m_pMemory + 16 )
          {
            do
            {
              v33 = *v32;
              v34 = v32 - 1;
              v35 = v32;
              v36 = *(v32 - 1);
              if ( v36 > *v32 )
              {
                while ( 1 )
                {
                  *v35 = v36;
                  v36 = *(v34 - 1);
                  if ( v36 <= v33 )
                    break;
                  v35 = v34--;
                }
              }
              else
              {
                v34 = v32;
              }
              ++v32;
              *v34 = v33;
            }
            while ( v30 != v32 );
          }
        }
        v27 = v40;
        m_pMemory = v41.m_pMemory;
      }
      result = m_pMemory[(v27 - 1) / 5];
    }
  }
  if ( (v41.m_nGrowSize & 0xC0000000) == 0 )
  {
    v39 = result;
    CUtlMemory<float,int>::Purge(&v41);
    result = v39;
    if ( (v41.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<float,int>::Purge(&v41);
      return v39;
    }
  }
  return result;
}


// CMesh::CalculateAdjacency  (line 485, @0x00000000031cb930, libserver.so)  // inlines: CUtlScalarHash, Element, Init, RemoveAll, SmallestPowerOfTwoGreaterOrEqual, VertHashKey, ~CUtlScalarHash
// calls: operator new [], CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Find, operator delete [], CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Insert, _Unwind_Resume
bool __fastcall CMesh::CalculateAdjacency(const CMesh *const this, int *pAdjacencyOut, int nSizeAdjacencyOut)
{
  bool result; // al
  const CMesh *v4; // r14
  int m_nIndexCount; // ecx
  size_t v6; // rdi
  signed int v7; // ebx
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *m_pData; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // r12d
  __int64 v13; // r13
  int v14; // ebx
  uint32 *m_pIndices; // rcx
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // r15d
  UtlHashFastHandle_t v20; // rax
  int v21; // r13d
  __int64 v22; // rbx
  const CMesh *v23; // r12
  int v24; // r14d
  uint32 *v25; // rsi
  int v26; // edi
  int v27; // esi
  int v28; // eax
  unsigned int v29; // esi
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *v30; // rdx
  int m_nTri0; // eax
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *v32; // r12
  int nFaces; // [rsp+4h] [rbp-8Ch]
  __int64 v35; // [rsp+10h] [rbp-80h]
  __int64 v36; // [rsp+10h] [rbp-80h]
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *nIndex; // [rsp+18h] [rbp-78h]
  int v38; // [rsp+30h] [rbp-60h] BYREF
  int nV1; // [rsp+34h] [rbp-5Ch]
  int v40; // [rsp+38h] [rbp-58h]
  int v41; // [rsp+3Ch] [rbp-54h]
  CUtlScalarHash<EdgeHash_t,CDefaultHash32> edgeHash; // [rsp+40h] [rbp-50h] BYREF

  result = 0;
  v4 = this;
  m_nIndexCount = this->m_nIndexCount;
  if ( m_nIndexCount == nSizeAdjacencyOut )
  {
    edgeHash.m_pData = 0;
    v6 = -1;
    edgeHash.m_uiBucketMask = 0;
    edgeHash.m_dataCount = 0;
    v7 = 2
       * (((2 * m_nIndexCount - 1)
         | ((2 * m_nIndexCount - 1) >> 1)
         | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
         | (((2 * m_nIndexCount - 1)
           | ((2 * m_nIndexCount - 1) >> 1)
           | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)
         | (((2 * m_nIndexCount - 1)
           | ((2 * m_nIndexCount - 1) >> 1)
           | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
           | (((2 * m_nIndexCount - 1)
             | ((2 * m_nIndexCount - 1) >> 1)
             | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)) >> 8)
         | (((2 * m_nIndexCount - 1)
           | ((2 * m_nIndexCount - 1) >> 1)
           | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
           | (((2 * m_nIndexCount - 1)
             | ((2 * m_nIndexCount - 1) >> 1)
             | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)
           | (((2 * m_nIndexCount - 1)
             | ((2 * m_nIndexCount - 1) >> 1)
             | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
             | (((2 * m_nIndexCount - 1)
               | ((2 * m_nIndexCount - 1) >> 1)
               | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)) >> 8)) >> 16))
        + 1);
    edgeHash.m_maxData = ((2 * m_nIndexCount - 1)
                        | ((2 * m_nIndexCount - 1) >> 1)
                        | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
                        | (((2 * m_nIndexCount - 1)
                          | ((2 * m_nIndexCount - 1) >> 1)
                          | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)
                        | (((2 * m_nIndexCount - 1)
                          | ((2 * m_nIndexCount - 1) >> 1)
                          | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
                          | (((2 * m_nIndexCount - 1)
                            | ((2 * m_nIndexCount - 1) >> 1)
                            | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)) >> 8)
                        | (((2 * m_nIndexCount - 1)
                          | ((2 * m_nIndexCount - 1) >> 1)
                          | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
                          | (((2 * m_nIndexCount - 1)
                            | ((2 * m_nIndexCount - 1) >> 1)
                            | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)
                          | (((2 * m_nIndexCount - 1)
                            | ((2 * m_nIndexCount - 1) >> 1)
                            | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)
                            | (((2 * m_nIndexCount - 1)
                              | ((2 * m_nIndexCount - 1) >> 1)
                              | (((2 * m_nIndexCount - 1) | ((2 * m_nIndexCount - 1) >> 1)) >> 2)) >> 4)) >> 8)) >> 16))
                       + 1;
    if ( v7 <= 0x660000000000000LL )
      v6 = 20LL * v7;
    m_pData = operator new[](v6);
    edgeHash.m_pData = m_pData;
    edgeHash.m_uiBucketMask = v7 - 1;
    if ( 2 * edgeHash.m_maxData > 0 )
    {
      v9 = 0;
      v10 = 4 * (5LL * (2 * edgeHash.m_maxData - 1) + 5);
      while ( 1 )
      {
        m_pData[v9 / 0x14].m_uiKey = -1;
        v9 += 20LL;
        if ( v9 == v10 )
          break;
        m_pData = edgeHash.m_pData;
      }
    }
    v11 = v4->m_nIndexCount;
    edgeHash.m_dataCount = 0;
    nFaces = v11 / 3;
    if ( v11 / 3 <= 0 )
    {
      v32 = edgeHash.m_pData;
    }
    else
    {
      v35 = 0;
      v12 = 0;
      do
      {
        v13 = v35;
        v14 = 0;
        do
        {
          ++v14;
          m_pIndices = v4->m_pIndices;
          v16 = *(m_pIndices + v13);
          v17 = m_pIndices[3 * v12 + v14 % 3];
          if ( v16 <= v17 )
          {
            v18 = v17;
            v17 = v16;
            v16 = v18;
          }
          v38 = v17;
          nV1 = v16;
          v19 = v16 ^ __ROR4__(v17, 16);
          v40 = v12;
          v41 = -1;
          if ( v19 == -1 )
            v19 = 0;
          v20 = CUtlScalarHash<EdgeHash_t,CDefaultHash32>::Find(&edgeHash, v19, &v38);
          if ( v20 == -1 )
            CUtlScalarHash<EdgeHash_t,CDefaultHash32>::Insert(&edgeHash, v19, &v38);
          else
            edgeHash.m_pData[v20].m_Data.m_nTri1 = v12;
          v13 += 4;
        }
        while ( v14 != 3 );
        v35 += 12;
        ++v12;
      }
      while ( v12 != nFaces );
      v36 = 0;
      v21 = 0;
      nIndex = edgeHash.m_pData;
      do
      {
        v22 = v36;
        v23 = v4;
        v24 = 0;
        do
        {
          ++v24;
          v25 = v23->m_pIndices;
          v26 = *(v25 + v22);
          v27 = v25[3 * v21 + v24 % 3];
          if ( v26 <= v27 )
          {
            v28 = v27;
            v27 = v26;
            v26 = v28;
          }
          v38 = v27;
          v29 = v26 ^ __ROR4__(v27, 16);
          nV1 = v26;
          v40 = -1;
          if ( v29 == -1 )
            v29 = 0;
          v41 = -1;
          v30 = &nIndex[CUtlScalarHash<EdgeHash_t,CDefaultHash32>::Find(&edgeHash, v29, &v38)];
          m_nTri0 = v30->m_Data.m_nTri0;
          if ( m_nTri0 == v21 )
            m_nTri0 = v30->m_Data.m_nTri1;
          *(pAdjacencyOut + v22) = m_nTri0;
          v22 += 4;
        }
        while ( v24 != 3 );
        v36 += 12;
        ++v21;
        v4 = v23;
      }
      while ( v21 != nFaces );
      v32 = nIndex;
    }
    result = 1;
    if ( v32 != 0 )
    {
      operator delete[](v32);
      return 1;
    }
  }
  return result;
}


// CMesh::CalculateIndicentFacesForVertices  (line 573, @0x00000000031ceb30, libserver.so)  // inlines: AddToTail
// calls: CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::InsertBefore
bool __fastcall CMesh::CalculateIndicentFacesForVertices(
        const CMesh *const this,
        CUtlLinkedList<int,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<int,short unsigned int>,short unsigned int> > *pFacesPerVertex,
        int nFacesPerVertexSize)
{
  bool result; // al
  const CMesh *v4; // r8
  __int64 v6; // r15
  uint32 *m_pIndices; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  int nFaces; // [rsp+0h] [rbp-54h]
  const CMesh *v12; // [rsp+4h] [rbp-50h]
  int f[15]; // [rsp+18h] [rbp-3Ch] BYREF

  result = 0;
  v4 = this;
  if ( this->m_nVertexCount == nFacesPerVertexSize )
  {
    f[0] = 0;
    v6 = 0;
    nFaces = this->m_nIndexCount / 3;
    if ( nFaces > 0 )
    {
      do
      {
        m_pIndices = v4->m_pIndices;
        v12 = v4;
        v8 = m_pIndices[v6 + 1];
        v9 = m_pIndices[v6 + 2];
        v10 = m_pIndices[v6];
        v6 += 3;
        CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::InsertBefore(
          &pFacesPerVertex[v10],
          0xFFFFu,
          f);
        CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::InsertBefore(
          &pFacesPerVertex[v8],
          0xFFFFu,
          f);
        CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::InsertBefore(
          &pFacesPerVertex[v9],
          0xFFFFu,
          f);
        v4 = v12;
        ++f[0];
      }
      while ( nFaces > f[0] );
    }
    return 1;
  }
  return result;
}


// CMesh::FindFirstAttributeOffset  (line 595, @0x00000000031c7630, libserver.so)
// calls: CUtlString::Get, V_stristr_fast(char const*,char const*)
// callers: CMesh::CreatePackedVB, CMesh::CalculateBounds, CMesh::CalculateBoundsForIndexRange, CMesh::SkinToBoneIfNotSkinned, CMesh::CalculateWorldSpaceTextureCoordinateProjection, CMesh::ScalePositions, CMesh::CalculateTangentSpaceWorldLengthsPerFace, CMesh::CalculateFaceCenters, RationalizeUVsInPlace, TessellateOnWrappedUV, CMesh::FindFacesWithMultipleWorldSpaceTextureProjections, CMesh::CalculateCurvature (15 total)
int __fastcall CMesh::FindFirstAttributeOffset(const CMesh *const this, const char *pAttributeName, int nFloats)
{
  int v5; // r13d
  __int64 v7; // rbx
  const char *v8; // rax
  CMeshVertexAttribute *v9; // rax

  v5 = 0;
  v7 = 0;
  if ( this->m_nAttributeCount <= 0 )
    return -1;
  while ( 1 )
  {
    v8 = CUtlString::Get(&this->m_pAttributes[v7].m_name);
    if ( V_stristr_fast(v8, pAttributeName) != 0 )
    {
      v9 = &this->m_pAttributes[v7];
      if ( nFloats == 0 || v9->m_nSizeFloats == nFloats )
        break;
    }
    ++v5;
    ++v7;
    if ( this->m_nAttributeCount <= v5 )
      return -1;
  }
  return v9->m_nOffsetFloats;
}


// CMesh::FindFirstDeltaAttributeOffset  (line 611, @0x00000000031c7960, libserver.so)
// calls: CUtlString::Get, V_stricmp_fast, V_stristr_fast(char const*,char const*)
int __fastcall CMesh::FindFirstDeltaAttributeOffset(
        const CMesh *const this,
        const char *pDeltaName,
        const char *pAttributeName,
        int nFloats)
{
  int v7; // r12d
  __int64 v8; // rbx
  CMeshVertexAttribute *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  CMeshVertexAttribute *v12; // rax

  v7 = 0;
  v8 = 0;
  if ( this->m_nAttributeCount <= 0 )
    return -1;
  while ( 1 )
  {
    v9 = &this->m_pAttributes[v8];
    if ( v9->m_bDelta )
    {
      v10 = CUtlString::Get(&v9->m_nameDelta);
      if ( V_stricmp_fast(v10, pDeltaName) == 0 )
      {
        v11 = CUtlString::Get(&this->m_pAttributes[v8].m_name);
        if ( V_stristr_fast(v11, pAttributeName) != 0 )
        {
          v12 = &this->m_pAttributes[v8];
          if ( nFloats == 0 || v12->m_nSizeFloats == nFloats )
            break;
        }
      }
    }
    ++v7;
    ++v8;
    if ( this->m_nAttributeCount <= v7 )
      return -1;
  }
  return v12->m_nOffsetFloats;
}


// CMesh::FindExactAttributeOffset  (line 635, @0x00000000031c7a20, libserver.so)
// calls: CUtlString::Get, V_stristr_fast(char const*,char const*)
int __fastcall CMesh::FindExactAttributeOffset(const CMesh *const this, const char *pAttributeName, int nSemanticIndex)
{
  int v5; // r13d
  __int64 v7; // rbx
  const char *v8; // rax
  CMeshVertexAttribute *v9; // rax

  v5 = 0;
  v7 = 0;
  if ( this->m_nAttributeCount <= 0 )
    return -1;
  while ( 1 )
  {
    v8 = CUtlString::Get(&this->m_pAttributes[v7].m_name);
    if ( V_stristr_fast(v8, pAttributeName) != 0 )
    {
      v9 = &this->m_pAttributes[v7];
      if ( v9->m_nSemanticIndex == nSemanticIndex )
        break;
    }
    ++v5;
    ++v7;
    if ( this->m_nAttributeCount <= v5 )
      return -1;
  }
  return v9->m_nOffsetFloats;
}


// CMesh::RestrideVertexBuffer  (line 651, @0x00000000031c7ac0, libserver.so)  // inlines: GetVertex, V_memcpy, V_memset, memcpy, memset
// calls: operator new [], memset, memcpy, operator delete []
// callers: CMesh::AddAttributes
void __fastcall CMesh::RestrideVertexBuffer(CMesh *const this, int nNewStrideFloats)
{
  int v3; // ebx
  int m_nVertexCount; // eax
  size_t v5; // rdi
  unsigned __int64 v6; // rax
  int m_nVertexStrideFloats; // eax
  int v8; // ebx
  int v9; // r14d
  float *v10; // r9
  float *v11; // rsi
  float *pNewStart; // [rsp+8h] [rbp-38h]

  v3 = nNewStrideFloats;
  m_nVertexCount = this->m_nVertexCount;
  v5 = -1;
  v6 = nNewStrideFloats * m_nVertexCount;
  if ( v6 <= 0x1FC0000000000000LL )
    v5 = 4 * v6;
  pNewStart = operator new[](v5);
  memset(pNewStart, 0, 4LL * v3 * this->m_nVertexCount);
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  if ( v3 > m_nVertexStrideFloats )
    v3 = this->m_nVertexStrideFloats;
  v8 = 4 * v3;
  if ( this->m_nVertexCount > 0 )
  {
    v9 = 0;
    v10 = pNewStart;
    while ( 1 )
    {
      v11 = &this->m_pVerts[v9 * m_nVertexStrideFloats];
      if ( v8 < 0 )
        __debugbreak();
      ++v9;
      v10 = (memcpy(v10, v11, v8) + 4 * nNewStrideFloats);
      if ( this->m_nVertexCount <= v9 )
        break;
      m_nVertexStrideFloats = this->m_nVertexStrideFloats;
    }
  }
  if ( this->m_pVerts != 0 )
    operator delete[](this->m_pVerts);
  this->m_bAllocatedMeshData = 1;
  this->m_pVerts = pNewStart;
  this->m_nVertexStrideFloats = nNewStrideFloats;
}


// CMesh::AddAttributes  (line 671, @0x00000000031c7bc0, libserver.so)  // inlines: CMeshVertexAttribute, CUtlString, operator=, ~CMeshVertexAttribute, ~CUtlString
// calls: operator new [], CUtlString::operator=, CUtlString::FreeMemoryBlock, operator delete [], CMesh::RestrideVertexBuffer
// callers: CMesh::AddAttribute, CMesh::AddExtraVertexStreamsFromMesh, CMesh::SkinToBoneIfNotSkinned, CMesh::CalculateCurvature, CMesh::CalculateTangents, CMesh::CalculateSmoothNormals
void __fastcall CMesh::AddAttributes(CMesh *const this, CMeshVertexAttribute *pAttributes, int nAttributeCount)
{
  int m_nAttributeCount; // r13d
  size_t v5; // rdi
  unsigned __int64 v6; // r13
  _QWORD *v7; // rax
  char *v8; // rdx
  unsigned __int64 v9; // rcx
  signed __int64 v10; // rsi
  int v11; // r15d
  __int64 v12; // r13
  CUtlString *i; // rbx
  char *v14; // r14
  CUtlString *v15; // rdi
  int v16; // r15d
  int m_nVertexStrideFloats; // r13d
  CMeshVertexAttribute *v18; // rbx
  int v19; // eax
  CMeshVertexAttribute *v20; // r14
  const CUtlString *p_m_nameDelta; // rsi
  CMeshVertexAttribute *m_pAttributes; // rdx
  CMeshVertexAttribute *v23; // rbx
  CUtlString *p_m_name; // r15
  char *v25; // rdx
  CMeshVertexAttribute *pNewAttributes; // [rsp+18h] [rbp-38h]

  m_nAttributeCount = this->m_nAttributeCount;
  v5 = -1;
  v6 = nAttributeCount + m_nAttributeCount;
  if ( v6 <= 0x330000000000000LL )
    v5 = 40 * v6 + 8;
  v7 = operator new[](v5);
  *v7 = v6;
  pNewAttributes = (v7 + 1);
  if ( v6 != 0 )
  {
    v8 = (v7 + 1);
    v9 = v6 - 2;
    do
    {
      --v9;
      *v8 = 0;
      v10 = v8 - pNewAttributes;
      v8 += 40;
      *(v7 + v10 + 16) = 0;
    }
    while ( v9 != -2 );
  }
  v11 = 0;
  v12 = -8LL - v7;
  for ( i = (v7 + 1); this->m_nAttributeCount > v11; LODWORD(i[-1].m_pString) = *(v14 + 8) )
  {
    ++v11;
    v14 = this->m_pAttributes + i + v12;
    CUtlString::operator=(i, v14);
    v15 = i + 1;
    i += 5;
    CUtlString::operator=(v15, v14 + 1);
    LODWORD(i[-3].m_pString) = *(v14 + 4);
    HIDWORD(i[-3].m_pString) = *(v14 + 5);
    LODWORD(i[-2].m_pString) = *(v14 + 6);
    BYTE4(i[-2].m_pString) = v14[28];
    BYTE5(i[-2].m_pString) = v14[29];
  }
  v16 = 0;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  v18 = pAttributes;
  if ( nAttributeCount > 0 )
  {
    do
    {
      if ( m_nVertexStrideFloats < v18->m_nSizeFloats + v18->m_nOffsetFloats )
        m_nVertexStrideFloats = v18->m_nSizeFloats + v18->m_nOffsetFloats;
      v19 = v16 + this->m_nAttributeCount;
      ++v16;
      v20 = &pNewAttributes[v19];
      CUtlString::operator=(&v20->m_name, &v18->m_name);
      p_m_nameDelta = &v18->m_nameDelta;
      ++v18;
      CUtlString::operator=(&v20->m_nameDelta, p_m_nameDelta);
      v20->m_nSemanticIndex = v18[-1].m_nSemanticIndex;
      v20->m_nOffsetFloats = v18[-1].m_nOffsetFloats;
      v20->m_nSizeFloats = v18[-1].m_nSizeFloats;
      v20->m_bDelta = v18[-1].m_bDelta;
      v20->m_bNoCompression = v18[-1].m_bNoCompression;
      v20->m_dmeType = v18[-1].m_dmeType;
    }
    while ( v16 != nAttributeCount );
  }
  m_pAttributes = this->m_pAttributes;
  if ( m_pAttributes != 0 )
  {
    v23 = &m_pAttributes[*&m_pAttributes[-1].m_dmeType];
    p_m_name = &v23->m_name;
    while ( p_m_name != m_pAttributes )
    {
      p_m_name -= 5;
      v25 = (p_m_name - v23);
      if ( p_m_name[1].m_pString != 0 )
      {
        CUtlString::FreeMemoryBlock(p_m_name + 1);
        v25 = (p_m_name - v23);
      }
      if ( *&v25[v23] != 0 )
        CUtlString::FreeMemoryBlock(p_m_name);
      m_pAttributes = this->m_pAttributes;
    }
    operator delete[](&p_m_name[-1]);
  }
  this->m_pAttributes = pNewAttributes;
  this->m_nAttributeCount += nAttributeCount;
  if ( this->m_nVertexStrideFloats < m_nVertexStrideFloats )
    CMesh::RestrideVertexBuffer(this, m_nVertexStrideFloats);
}


// CMesh::AddAttribute  (line 698, @0x00000000031c7e10, libserver.so)  // inlines: CMeshVertexAttribute, CUtlString, ~CMeshVertexAttribute, ~CUtlString
// calls: CUtlString::operator=, CMesh::AddAttributes, CUtlString::FreeMemoryBlock, CMeshVertexAttribute::~CMeshVertexAttribute, _Unwind_Resume
// callers: CMesh::SetBlendWeightAndIndexCount
void __fastcall CMesh::AddAttribute(CMesh *const this, const char *pAttributeName, int nSemanticIndex, int nFloats)
{
  int m_nVertexStrideFloats; // eax
  CMeshVertexAttribute attribute; // [rsp+0h] [rbp-50h] BYREF

  attribute.m_name.m_pString = 0;
  attribute.m_nameDelta.m_pString = 0;
  CUtlString::operator=(&attribute.m_name, pAttributeName);
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  attribute.m_nSemanticIndex = nSemanticIndex;
  attribute.m_nSizeFloats = nFloats;
  attribute.m_dmeType = DmAttributeType_t::AT_VECTOR4_ARRAY;
  attribute.m_nOffsetFloats = m_nVertexStrideFloats;
  attribute.m_bDelta = 0;
  attribute.m_bNoCompression = 0;
  CMesh::AddAttributes(this, &attribute, 1);
  if ( attribute.m_nameDelta.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&attribute.m_nameDelta);
  if ( attribute.m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&attribute.m_name);
}


// CMesh::AddExtraVertexStreamsFromMesh  (line 712, @0x00000000031c7ec0, libserver.so)  // inlines: GetVertex, V_memcpy, memcpy
// calls: CMesh::AddAttributes, memcpy
void __fastcall CMesh::AddExtraVertexStreamsFromMesh(CMesh *const this, const CMesh *const otherMesh)
{
  __int64 m_nVertexStrideFloats; // r14
  int m_nVertexCount; // r13d
  __int64 v6; // r14
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  float *v11; // rdi

  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  CMesh::AddAttributes(this, otherMesh->m_pAttributes, otherMesh->m_nAttributeCount);
  m_nVertexCount = otherMesh->m_nVertexCount;
  if ( m_nVertexCount > this->m_nVertexCount )
    m_nVertexCount = this->m_nVertexCount;
  v6 = m_nVertexStrideFloats;
  v7 = 0;
  if ( m_nVertexCount > 0 )
  {
    do
    {
      v8 = otherMesh->m_nVertexStrideFloats;
      v9 = v8;
      v10 = v7 * v8;
      v11 = &this->m_pVerts[v7 * this->m_nVertexStrideFloats + v6];
      ++v7;
      memcpy(v11, &otherMesh->m_pVerts[v10], 4 * v9);
    }
    while ( v7 != m_nVertexCount );
  }
}


// CMesh::SkinToBoneIfNotSkinned  (line 733, @0x00000000031c7f60, libserver.so)  // inlines: CMeshVertexAttribute, CUtlString, GetVertex, ~CMeshVertexAttribute, ~CUtlString
// calls: CMesh::FindFirstAttributeOffset, CUtlString::operator=, CMesh::AddAttributes, CUtlString::FreeMemoryBlock, CMeshVertexAttribute::~CMeshVertexAttribute, _Unwind_Resume
// strings: "blendindices"
void __fastcall CMesh::SkinToBoneIfNotSkinned(CMesh *const this, int nBone)
{
  int m_nVertexStrideFloats; // eax
  int i; // eax
  int v6; // ecx
  CMeshVertexAttribute attribute; // [rsp+0h] [rbp-50h] BYREF

  if ( CMesh::FindFirstAttributeOffset(this, "blendindices", 0) < 0 )
  {
    attribute.m_name.m_pString = 0;
    attribute.m_nameDelta.m_pString = 0;
    CUtlString::operator=(&attribute.m_name, "blendindices");
    m_nVertexStrideFloats = this->m_nVertexStrideFloats;
    attribute.m_nSemanticIndex = 0;
    attribute.m_nSizeFloats = 1;
    attribute.m_dmeType = DmAttributeType_t::AT_INT_ARRAY;
    attribute.m_nOffsetFloats = m_nVertexStrideFloats;
    attribute.m_bDelta = 0;
    attribute.m_bNoCompression = 0;
    CMesh::AddAttributes(this, &attribute, 1);
    for ( i = 0; this->m_nVertexCount > i; LODWORD(this->m_pVerts[v6 + attribute.m_nOffsetFloats]) = nBone )
    {
      v6 = i * this->m_nVertexStrideFloats;
      ++i;
    }
    if ( attribute.m_nameDelta.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&attribute.m_nameDelta);
    if ( attribute.m_name.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&attribute.m_name);
  }
}


// CMesh::SetBlendWeightAndIndexCount  (line 759, @0x00000000031c88a0, libserver.so)  // inlines: GetAttrArray<float>, GetAttrArray<int>
// calls: CMesh::FindFirstAttribute, operator new [], CMesh::RemoveFirstAttribute, CMesh::AddAttribute, operator delete []
// callers: NormalizeBlendWeightsAndIndicesBetweenMeshes
// strings: "blendindices", "blendweights"
void __fastcall CMesh::SetBlendWeightAndIndexCount(CMesh *const this, int nWeightsAndIndices, bool bPreinitialize)
{
  CMeshVertexAttribute *FirstAttribute; // rbx
  CMeshVertexAttribute *v6; // rax
  CMeshVertexAttribute *v7; // rsi
  int m_nSizeFloats; // r12d
  size_t v9; // rdi
  unsigned __int64 v10; // rax
  float *v11; // r10
  int v12; // eax
  int v13; // r8d
  float *v14; // rcx
  __int64 v15; // rdx
  int v16; // ebx
  size_t v17; // rdi
  unsigned __int64 v18; // rax
  float *v19; // r13
  int v20; // ecx
  int v21; // edi
  float *v22; // rdx
  __int64 v23; // r8
  CMeshVertexAttribute *v24; // rax
  int v25; // esi
  int v26; // edi
  float *v27; // rdx
  __int64 v28; // rcx
  float *v29; // rcx
  int i; // edx
  CMeshVertexAttribute *v31; // rax
  int v32; // edi
  int v33; // r8d
  float *v34; // rcx
  __int64 v35; // rdx
  float *v36; // rcx
  int k; // edx
  unsigned __int64 v38; // rcx
  int v39; // r8d
  float *v40; // rdx
  __int64 v41; // rdi
  int v42; // esi
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  float *v46; // rdx
  __int64 v47; // rdi
  int v48; // esi
  __int64 j; // rax
  float *pIndices; // [rsp+10h] [rbp-40h]
  CMeshVertexAttribute *pWeightsAttr; // [rsp+18h] [rbp-38h]
  CMeshVertexAttribute *pWeightsAttra; // [rsp+18h] [rbp-38h]
  CMeshVertexAttribute *pWeightsAttrb; // [rsp+18h] [rbp-38h]

  FirstAttribute = CMesh::FindFirstAttribute(this, "blendindices", 0);
  v6 = CMesh::FindFirstAttribute(this, "blendweights", 0);
  v7 = v6;
  if ( FirstAttribute != 0 )
  {
    pWeightsAttr = v6;
    m_nSizeFloats = nWeightsAndIndices;
    v9 = -1;
    if ( FirstAttribute->m_nSizeFloats <= nWeightsAndIndices )
      m_nSizeFloats = FirstAttribute->m_nSizeFloats;
    v10 = m_nSizeFloats * this->m_nVertexCount;
    if ( v10 <= 0x1FC0000000000000LL )
      v9 = 4 * v10;
    v11 = operator new[](v9);
    v7 = pWeightsAttr;
    if ( this->m_nVertexCount > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = &this->m_pVerts[FirstAttribute->m_nOffsetFloats + (v12 * this->m_nVertexStrideFloats)];
        if ( m_nSizeFloats > 0 )
        {
          v15 = 0;
          do
          {
            v11[v13 + v15] = v14[v15];
            ++v15;
          }
          while ( m_nSizeFloats > v15 );
          v13 += m_nSizeFloats;
        }
        ++v12;
      }
      while ( this->m_nVertexCount > v12 );
    }
    if ( pWeightsAttr != 0 )
      goto LABEL_14;
LABEL_47:
    v16 = 0;
    v19 = 0;
    goto LABEL_25;
  }
  m_nSizeFloats = 0;
  v11 = 0;
  if ( v6 == 0 )
    goto LABEL_47;
LABEL_14:
  v16 = nWeightsAndIndices;
  v17 = -1;
  pIndices = v11;
  pWeightsAttra = v7;
  if ( v7->m_nSizeFloats <= nWeightsAndIndices )
    v16 = v7->m_nSizeFloats;
  v18 = v16 * this->m_nVertexCount;
  if ( v18 <= 0x1FC0000000000000LL )
    v17 = 4 * v18;
  v19 = operator new[](v17);
  v11 = pIndices;
  if ( this->m_nVertexCount > 0 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = &this->m_pVerts[pWeightsAttra->m_nOffsetFloats + (v20 * this->m_nVertexStrideFloats)];
      if ( v16 > 0 )
      {
        v23 = 0;
        do
        {
          v19[v21 + v23] = v22[v23];
          ++v23;
        }
        while ( v16 > v23 );
        v21 += v16;
      }
      ++v20;
    }
    while ( this->m_nVertexCount > v20 );
  }
LABEL_25:
  pWeightsAttrb = v11;
  CMesh::RemoveFirstAttribute(this, "blendindices", 0);
  CMesh::RemoveFirstAttribute(this, "blendweights", 0);
  CMesh::AddAttribute(this, "blendindices", 0, nWeightsAndIndices);
  CMesh::AddAttribute(this, "blendweights", 0, nWeightsAndIndices);
  v24 = CMesh::FindFirstAttribute(this, "blendindices", 0);
  if ( pWeightsAttrb != 0 )
  {
    if ( this->m_nVertexCount > 0 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v27 = &this->m_pVerts[v24->m_nOffsetFloats + (v25 * this->m_nVertexStrideFloats)];
        if ( m_nSizeFloats > 0 )
        {
          v28 = 0;
          do
          {
            v27[v28] = *(&pWeightsAttrb->m_name.m_pString + v26 + v28);
            ++v28;
          }
          while ( m_nSizeFloats > v28 );
          v26 += m_nSizeFloats;
        }
        v29 = &v27[m_nSizeFloats];
        for ( i = m_nSizeFloats; v24->m_nSizeFloats > i; ++v29 )
        {
          *v29 = 0.0;
          ++i;
        }
        ++v25;
      }
      while ( this->m_nVertexCount > v25 );
    }
    operator delete[](pWeightsAttrb);
    v31 = CMesh::FindFirstAttribute(this, "blendweights", 0);
    if ( v19 != 0 )
      goto LABEL_36;
    if ( !bPreinitialize )
      return;
  }
  else
  {
    if ( !bPreinitialize )
    {
      v31 = CMesh::FindFirstAttribute(this, "blendweights", 0);
      if ( v19 == 0 )
        return;
      goto LABEL_36;
    }
    v45 = (4LL * v24->m_nSizeFloats) >> 2;
    v46 = &this->m_pVerts[v24->m_nOffsetFloats];
    if ( this->m_nVertexCount > 0 )
    {
      v47 = 4LL * this->m_nVertexStrideFloats;
      v48 = 0;
      do
      {
        for ( j = 0; v45 > j; ++j )
          v46[j] = 0.0;
        ++v48;
        v46 = (v46 + v47);
      }
      while ( this->m_nVertexCount > v48 );
    }
    v31 = CMesh::FindFirstAttribute(this, "blendweights", 0);
    if ( v19 != 0 )
    {
LABEL_36:
      if ( this->m_nVertexCount > 0 )
      {
        v32 = 0;
        v33 = 0;
        do
        {
          v34 = &this->m_pVerts[v31->m_nOffsetFloats + (v32 * this->m_nVertexStrideFloats)];
          if ( v16 > 0 )
          {
            v35 = 0;
            do
            {
              v34[v35] = v19[v33 + v35];
              ++v35;
            }
            while ( v16 > v35 );
            v33 += v16;
          }
          v36 = &v34[v16];
          for ( k = v16; v31->m_nSizeFloats > k; ++v36 )
          {
            *v36 = 0.0;
            ++k;
          }
          ++v32;
        }
        while ( this->m_nVertexCount > v32 );
      }
      operator delete[](v19);
      return;
    }
  }
  v38 = (4LL * v31->m_nSizeFloats) >> 2;
  v39 = v38;
  v40 = &this->m_pVerts[v31->m_nOffsetFloats];
  if ( this->m_nVertexCount > 0 )
  {
    v41 = 4LL * this->m_nVertexStrideFloats;
    v42 = 0;
    v43 = 4LL * (v38 - 2) + 4;
    do
    {
      v44 = 0;
      *v40 = 1.0;
      if ( v39 > 1 )
      {
        do
        {
          v40[v44 / 4 + 1] = 0.0;
          v44 += 4LL;
        }
        while ( v44 != v43 );
      }
      ++v42;
      v40 = (v40 + v41);
    }
    while ( this->m_nVertexCount > v42 );
  }
}


// CMesh::NormalizeSkinWeights  (line 877, @0x00000000031c83d0, libserver.so)  // inlines: CAttrArray, FindAttrArray<float>, FindAttrArray<int>, GetAttrArray<float>, GetAttrArray<int>, GetSkinIndexArray, GetSkinWeightArray
// calls: CMesh::FindFirstAttribute
// strings: "blendweights", "blendindices"
bool __fastcall CMesh::NormalizeSkinWeights(CMesh *const this)
{
  CMeshVertexAttribute *FirstAttribute; // rax
  int m_nVertexStrideFloats; // r12d
  unsigned __int64 v4; // r13
  float *v5; // r14
  CMeshVertexAttribute *v6; // rcx
  bool result; // al
  int v8; // r8d
  __int64 v9; // rdi
  float *v10; // rcx
  __int64 v11; // rdx
  float v12; // xmm0_4
  float *v13; // rax
  float *v14; // rax
  float v15; // xmm1_4
  float *v16; // rax
  float *v17; // rdx
  int v18; // eax

  FirstAttribute = CMesh::FindFirstAttribute(this, "blendweights", 0);
  if ( FirstAttribute != 0 )
  {
    m_nVertexStrideFloats = this->m_nVertexStrideFloats;
    v4 = (4LL * FirstAttribute->m_nSizeFloats) >> 2;
    v5 = &this->m_pVerts[FirstAttribute->m_nOffsetFloats];
  }
  else
  {
    LODWORD(v4) = 0;
    m_nVertexStrideFloats = 0;
    v5 = 0;
  }
  v6 = CMesh::FindFirstAttribute(this, "blendindices", 0);
  result = 0;
  if ( v6 != 0 && v5 != 0 && &this->m_pVerts[v6->m_nOffsetFloats] != 0 && ((4LL * v6->m_nSizeFloats) >> 2) == v4 )
  {
    if ( v4 == 1 )
    {
      if ( this->m_nVertexCount > 0 )
      {
        v17 = v5;
        v18 = 0;
        do
        {
          *v17 = 1.0;
          ++v18;
          v17 += m_nVertexStrideFloats;
        }
        while ( this->m_nVertexCount > v18 );
        return 1;
      }
    }
    else
    {
      if ( v4 <= 1 )
        return result;
      if ( this->m_nVertexCount > 0 )
      {
        v8 = 0;
        v9 = 4LL * m_nVertexStrideFloats;
        v10 = v5 + 1;
        v11 = &v5[(v4 - 2) + 2];
        do
        {
          while ( 1 )
          {
            v12 = *(v10 - 1);
            v13 = v10;
            do
              v12 = v12 + *v13++;
            while ( v13 != v11 );
            if ( v12 <= 0.00000011920929 )
              break;
            v14 = v10 - 1;
            do
            {
              v15 = *v14++;
              *(v14 - 1) = v15 / v12;
            }
            while ( v14 != &v10[(v4 - 1)] );
            ++v8;
            v10 = (v10 + v9);
            v11 += v9;
            if ( this->m_nVertexCount <= v8 )
              return 1;
          }
          *(v10 - 1) = 1.0;
          v16 = v10;
          do
            *v16++ = 0.0;
          while ( v16 != v11 );
          ++v8;
          v10 = (v10 + v9);
          v11 += v9;
        }
        while ( this->m_nVertexCount > v8 );
      }
    }
    return 1;
  }
  return result;
}


// CMesh::CalculateTangents  (line 926, @0x00000000031cec10, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CMeshVertexAttribute, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<CUtlVector<int> >, CopyConstruct<int>, CrossProduct, Destruct<CUtlVector<int> >, DotProduct, Element, GetVertex, GrowMemory, GrowVector, Init, InsertMultipleBefore, Purge, RemoveAll, operator+=, operator=, operator[], ~CMeshVertexAttribute, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CMesh::FindFirstAttributeOffset, CUtlMemory<Vector, int>::Grow, CalcTriangleTangentSpace, VectorNormalize, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<int, int>::Purge, CUtlMemory<int, int>::Grow, CUtlString::operator=, CMesh::AddAttributes, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Grow, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge (17 total)
// callers: CMesh::CalculateSmoothNormals
// strings: "norm"
// local variable allocation has failed, the output may be wrong!
void __fastcall CMesh::CalculateTangents(CMesh *const this)
{
  int m_nIndexCount; // ecx
  int m_nVertexCount; // ebx
  int v4; // r14d
  __int64 j; // r12
  CUtlVector<int,CUtlMemory<int,int> > *v6; // rbx
  __int64 v7; // r13
  int v8; // eax
  int *v9; // rax
  int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // r13
  float *v13; // r10
  int v14; // r9d
  __int128 *p_tVect; // rdx
  unsigned __int64 k; // rax
  float *v17; // rsi
  __int64 v18; // r14
  int v19; // r13d
  int v20; // edx
  float *m_pVerts; // rax
  CUtlVector<int,CUtlMemory<int,int> > *v22; // rcx
  float *v23; // rbx
  float *v24; // rdi
  float *v25; // rbx
  float v26; // xmm5_4
  __int64 v27; // rax
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  int v33; // esi
  Vector *v34; // rdx
  __int64 v35; // rdx
  Vector *v36; // rdx
  float v37; // xmm7_4
  float v38; // xmm6_4
  float v39; // xmm4_4
  float v40; // xmm8_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  vec_t z; // xmm0_4
  int m_Size; // r12d
  __int64 i; // r13
  char *v46; // rbx
  bool v47; // zf
  int m_nVertexStrideFloats; // eax
  int v49; // eax
  unsigned __int64 v50; // rax
  CUtlVector<int,CUtlMemory<int,int> > *v51; // rdx
  float v52; // xmm0_4
  int nTangentOffset; // [rsp+20h] [rbp-120h]
  int nNormalOffset; // [rsp+24h] [rbp-11Ch]
  int nTexOffset; // [rsp+30h] [rbp-110h]
  int nPositionOffset; // [rsp+38h] [rbp-108h]
  uint32 *pIndices; // [rsp+48h] [rbp-F8h]
  int nFaces; // [rsp+50h] [rbp-F0h]
  Vector *p0; // [rsp+58h] [rbp-E8h]
  CUtlVector<CUtlVector<int,CUtlMemory<int,int> >,CUtlMemory<CUtlVector<int,CUtlMemory<int,int> >,int> > vertToFaceMap; // [rsp+60h] [rbp-E0h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > faceSVect; // [rsp+80h] [rbp-C0h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > faceTVect; // [rsp+A0h] [rbp-A0h] BYREF
  Vector sVect; // [rsp+C0h] [rbp-80h] BYREF
  Vector2D v64; // [rsp+D0h] [rbp-70h] BYREF
  __int128 tVect; // [rsp+E0h] [rbp-60h] OVERLAPPED BYREF
  int v66; // [rsp+F0h] [rbp-50h]
  int v67; // [rsp+F4h] [rbp-4Ch]
  Vector v68; // [rsp+F8h] [rbp-48h] BYREF

  nPositionOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  nNormalOffset = CMesh::FindFirstAttributeOffset(this, "norm", 3);
  nTexOffset = CMesh::FindFirstAttributeOffset(this, "tex", 2);
  if ( nTexOffset == -1 )
    nTexOffset = CMesh::FindFirstAttributeOffset(this, "tex", 3);
  if ( nPositionOffset != -1 && nTexOffset != -1 && nNormalOffset != -1 )
  {
    nTangentOffset = CMesh::FindFirstAttributeOffset(this, "tangent", 4);
    if ( nTangentOffset == -1 )
    {
      m_nVertexStrideFloats = this->m_nVertexStrideFloats;
      tVect = 0u;
      nTangentOffset = m_nVertexStrideFloats;
      CUtlString::operator=(&tVect, "tangent");
      v49 = this->m_nVertexStrideFloats;
      v66 = 0;
      LODWORD(v68.x) = 4;
      LODWORD(v68.z) = 43;
      v67 = v49;
      LOWORD(v68.y) = 0;
      CMesh::AddAttributes(this, &tVect, 1);
      if ( *(&tVect + 1) != 0 )
        CUtlString::FreeMemoryBlock(&tVect + 1);
      if ( tVect != 0 )
        CUtlString::FreeMemoryBlock(&tVect);
    }
    m_nIndexCount = this->m_nIndexCount;
    vertToFaceMap.m_Size = 0;
    vertToFaceMap.m_Memory.m_pMemory = 0;
    m_nVertexCount = this->m_nVertexCount;
    vertToFaceMap.m_Memory.m_nAllocationCount = 0;
    vertToFaceMap.m_Memory.m_nGrowSize = 0;
    nFaces = m_nIndexCount / 3;
    if ( m_nVertexCount != 0 )
    {
      if ( m_nVertexCount > 0 )
      {
        CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Grow(&vertToFaceMap.m_Memory, m_nVertexCount);
        vertToFaceMap.m_Size = m_nVertexCount;
        v50 = 0;
        do
        {
          v51 = &vertToFaceMap.m_Memory.m_pMemory[v50 / 0x18];
          if ( &vertToFaceMap.m_Memory.m_pMemory[v50 / 0x18] != 0 )
          {
            v51->m_Size = 0;
            v51->m_Memory.m_pMemory = 0;
            v51->m_Memory.m_nAllocationCount = 0;
            v51->m_Memory.m_nGrowSize = 0;
          }
          v50 += 24LL;
        }
        while ( v50 != 8 * (3LL * (m_nVertexCount - 1) + 3) );
      }
      else
      {
        vertToFaceMap.m_Size = m_nVertexCount;
      }
    }
    v4 = 0;
    pIndices = this->m_pIndices;
    p0 = pIndices;
    if ( nFaces <= 0 )
    {
      faceSVect.m_Size = 0;
      faceSVect.m_Memory.m_pMemory = 0;
      faceSVect.m_Memory.m_nAllocationCount = 0;
      faceSVect.m_Memory.m_nGrowSize = 0;
      faceTVect.m_Size = 0;
      faceTVect.m_Memory.m_pMemory = 0;
      faceTVect.m_Memory.m_nAllocationCount = 0;
      faceTVect.m_Memory.m_nGrowSize = 0;
      if ( nFaces == 0 )
      {
LABEL_24:
        if ( this->m_nVertexCount > 0 )
        {
          v18 = 0;
          v19 = 0;
          do
          {
            v20 = this->m_nVertexStrideFloats;
            sVect.x = 0.0;
            m_pVerts = this->m_pVerts;
            sVect.y = 0.0;
            v22 = &vertToFaceMap.m_Memory.m_pMemory[v18];
            sVect.z = 0.0;
            *&tVect = 0;
            DWORD2(tVect) = 0;
            v23 = &m_pVerts[v19 * v20];
            v24 = &v23[nNormalOffset];
            v25 = &v23[nTangentOffset];
            if ( vertToFaceMap.m_Memory.m_pMemory[v18].m_Size <= 0 )
            {
              v39 = 0.0;
              v38 = 0.0;
              v32 = 0.0;
              v37 = 0.0;
              v30 = 0.0;
              v31 = 0.0;
            }
            else
            {
              v26 = 0.0;
              v27 = 0;
              v28 = 0.0;
              v29 = 0.0;
              v30 = 0.0;
              v31 = 0.0;
              v32 = 0.0;
              v33 = 0;
              do
              {
                ++v33;
                v34 = &faceSVect.m_Memory.m_pMemory[v22->m_Memory.m_pMemory[v27]];
                v32 = v32 + v34->x;
                sVect.x = v32;
                v31 = v31 + v34->y;
                sVect.y = v31;
                v30 = v30 + v34->z;
                sVect.z = v30;
                v35 = v22->m_Memory.m_pMemory[v27++];
                v36 = &faceTVect.m_Memory.m_pMemory[v35];
                v29 = v29 + v36->x;
                *&tVect = v29;
                v28 = v28 + v36->y;
                *(&tVect + 1) = v28;
                v26 = v26 + v36->z;
                *(&tVect + 2) = v26;
              }
              while ( v22->m_Size > v33 );
              v37 = (v31 * v26) - (v30 * v28);
              v38 = (v30 * v29) - (v26 * v32);
              v39 = (v28 * v32) - (v29 * v31);
            }
            v40 = v24[1];
            v41 = v24[2];
            if ( (((v37 * *v24) + (v38 * v40)) + (v39 * v41)) < 0.0 )
            {
              *&tVect = (v41 * v31) - (v40 * v30);
              *(&tVect + 1) = (v30 * *v24) - (v41 * v32);
              *(&tVect + 2) = (v32 * v24[1]) - (v31 * *v24);
              v52 = v24[2];
              sVect.x = (v24[1] * *(&tVect + 2)) - (*(&tVect + 1) * v52);
              sVect.y = (v52 * *&tVect) - (*(&tVect + 2) * *v24);
              sVect.z = (*(&tVect + 1) * *v24) - (*&tVect * v24[1]);
              VectorNormalize(&sVect);
              VectorNormalize(&tVect);
              *v25 = sVect.x;
              v25[1] = sVect.y;
              z = sVect.z;
              v25[3] = -1.0;
            }
            else
            {
              *&tVect = (v40 * v30) - (v41 * v31);
              *(&tVect + 1) = (v41 * v32) - (v30 * *v24);
              *(&tVect + 2) = (v31 * *v24) - (v32 * v24[1]);
              v42 = v24[2];
              sVect.x = (*(&tVect + 1) * v42) - (v24[1] * *(&tVect + 2));
              sVect.y = (*(&tVect + 2) * *v24) - (v42 * *&tVect);
              sVect.z = (*&tVect * v24[1]) - (*(&tVect + 1) * *v24);
              VectorNormalize(&sVect);
              VectorNormalize(&tVect);
              *v25 = sVect.x;
              v25[1] = sVect.y;
              z = sVect.z;
              v25[3] = 1.0;
            }
            v25[2] = z;
            ++v19;
            ++v18;
          }
          while ( this->m_nVertexCount > v19 );
        }
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&faceTVect);
        if ( (faceTVect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<Vector,int>::Purge(&faceTVect.m_Memory);
          if ( (faceTVect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<Vector,int>::Purge(&faceTVect.m_Memory);
        }
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&faceSVect);
        if ( (faceSVect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<Vector,int>::Purge(&faceSVect.m_Memory);
          if ( (faceSVect.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<Vector,int>::Purge(&faceSVect.m_Memory);
        }
        m_Size = vertToFaceMap.m_Size;
        for ( i = 24LL * vertToFaceMap.m_Size - 24; --m_Size >= 0; i -= 24 )
        {
          v46 = vertToFaceMap.m_Memory.m_pMemory + i;
          v47 = (*(&vertToFaceMap.m_Memory.m_pMemory->m_Memory.m_nGrowSize + i) & 0xC0000000) == 0;
          *(&vertToFaceMap.m_Memory.m_pMemory->CUtlVectorBase<CUtlVector<int,CUtlMemory<int,int> >,CUtlMemory<CUtlVector<int,CUtlMemory<int,int> >,int> >::m_Size
          + i) = 0;
          if ( v47 )
          {
            CUtlMemory<int,int>::Purge((v46 + 8));
            if ( (*(v46 + 5) & 0xC0000000) == 0 )
              CUtlMemory<int,int>::Purge((v46 + 8));
          }
        }
        if ( (vertToFaceMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&vertToFaceMap.m_Memory);
          if ( (vertToFaceMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&vertToFaceMap.m_Memory);
        }
        return;
      }
      faceSVect.m_Size = nFaces;
      v10 = nFaces;
    }
    else
    {
      do
      {
        for ( j = 0; j != 12; j += 4 )
        {
          v6 = &vertToFaceMap.m_Memory.m_pMemory[*(&p0->x + j)];
          v7 = v6->m_Size;
          v8 = v6->m_Size;
          if ( v7 == v6->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&v6->m_Memory, 1);
            v8 = v6->m_Size;
          }
          v6->m_Size = v8 + 1;
          v9 = &v6->m_Memory.m_pMemory[v7];
          if ( v9 != 0 )
            *v9 = v4;
        }
        ++p0;
        ++v4;
      }
      while ( v4 != nFaces );
      faceSVect.m_Size = 0;
      faceSVect.m_Memory.m_pMemory = 0;
      faceSVect.m_Memory.m_nAllocationCount = 0;
      faceSVect.m_Memory.m_nGrowSize = 0;
      faceTVect.m_Size = 0;
      faceTVect.m_Memory.m_pMemory = 0;
      faceTVect.m_Memory.m_nAllocationCount = 0;
      faceTVect.m_Memory.m_nGrowSize = 0;
      CUtlMemory<Vector,int>::Grow(&faceSVect.m_Memory, nFaces);
      faceSVect.m_Size = nFaces;
      v10 = faceTVect.m_Size + nFaces;
      if ( faceTVect.m_Size + nFaces > faceTVect.m_Memory.m_nAllocationCount )
        CUtlMemory<Vector,int>::Grow(&faceTVect.m_Memory, v10 - faceTVect.m_Memory.m_nAllocationCount);
    }
    faceTVect.m_Size = v10;
    if ( nFaces > 0 )
    {
      v11 = 0;
      v12 = nPositionOffset;
      do
      {
        v13 = this->m_pVerts;
        v14 = this->m_nVertexStrideFloats;
        p_tVect = &tVect;
        for ( k = 0; k != 12; k += 4LL )
        {
          p_tVect = (p_tVect + 12);
          v17 = &v13[v14 * pIndices[3 * v11 + k / 4]];
          *(p_tVect - 3) = v17[nPositionOffset];
          *(p_tVect - 2) = v17[v12 + 1];
          *(p_tVect - 1) = v17[v12 + 2];
          *(&sVect.x + 2 * k) = v17[nTexOffset];
          *(&sVect.y + 2 * k) = v17[nTexOffset + 1];
        }
        CalcTriangleTangentSpace(
          &tVect,
          &tVect + 1,
          &v68,
          &sVect,
          &sVect.z,
          &v64,
          &faceSVect.m_Memory.m_pMemory[v11],
          &faceTVect.m_Memory.m_pMemory[v11]);
        ++v11;
      }
      while ( nFaces > v11 );
    }
    goto LABEL_24;
  }
}


// CMesh::CalculateCurvature  (line 1050, @0x00000000031cd1f0, libserver.so)  // inlines: CMeshVertexAttribute, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, GetVertex, LengthSqr, Max<float>, Min<float>, Purge, RemoveAll, VectorSubtract, operator-, operator=, operator[], ~CMeshVertexAttribute, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CMesh::FindFirstAttributeOffset, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue, CUtlMemory<float, int>::Purge, CUtlString::operator=, CMesh::AddAttributes, CUtlString::FreeMemoryBlock, sqrtf, CMeshVertexAttribute::~CMeshVertexAttribute, _Unwind_Resume, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase
// strings: "norm", "curvature"
void __fastcall CMesh::CalculateCurvature(CMesh *const this)
{
  int FirstAttributeOffset; // r13d
  int v3; // eax
  __int64 v4; // r15
  int m_nVertexCount; // esi
  __int64 v6; // r15
  __int64 v7; // r10
  uint32 *m_pIndices; // r13
  float *m_pVerts; // r9
  Vector *v10; // rdx
  __int64 v11; // rax
  int v12; // r8d
  Vector *v13; // rcx
  int v14; // esi
  float *v15; // rsi
  vec_t *v16; // rdi
  vec_t *v17; // rsi
  float y; // xmm12_4
  float x; // xmm8_4
  float v20; // xmm4_4
  float v21; // xmm13_4
  float v22; // xmm10_4
  float z; // xmm11_4
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm14_4
  float v28; // xmm6_4
  __int64 v29; // rax
  __int64 v30; // rcx
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm8_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm1_4
  float v38; // xmm13_4
  float v39; // xmm15_4
  float v40; // xmm12_4
  float v41; // xmm0_4
  __int64 v42; // rdx
  float v43; // xmm0_4
  __int64 v44; // rdx
  int v45; // eax
  int v46; // ecx
  float v47; // xmm0_4
  int v48; // r13d
  int v49; // xmm3_4
  int v50; // xmm5_4
  uint32 *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdi
  __int64 v54; // rsi
  float v55; // xmm4_4
  int v56; // r9d
  int v57; // ecx
  float *v58; // r9
  float v59; // xmm1_4
  float v60; // xmm0_4
  __int64 v61; // rdx
  int i; // eax
  int v63; // esi
  float v64; // xmm0_4
  float v65; // xmm1_4
  int m_nVertexStrideFloats; // eax
  int v67; // eax
  uint32 *v68; // [rsp+50h] [rbp-130h]
  int v69; // [rsp+5Ch] [rbp-124h]
  uint32 *pIndices; // [rsp+68h] [rbp-118h]
  int nCurvatureOffset; // [rsp+78h] [rbp-108h]
  int nFaces; // [rsp+7Ch] [rbp-104h]
  float v73; // [rsp+88h] [rbp-F8h]
  float v74; // [rsp+90h] [rbp-F0h]
  float v75; // [rsp+90h] [rbp-F0h]
  float v76; // [rsp+98h] [rbp-E8h]
  float v77; // [rsp+98h] [rbp-E8h]
  int indices[4]; // [rsp+A0h] [rbp-E0h]
  CUtlVector<float,CUtlMemory<float,int> > curvatureMin; // [rsp+B0h] [rbp-D0h] BYREF
  CUtlVector<float,CUtlMemory<float,int> > curvatureMax; // [rsp+D0h] [rbp-B0h] BYREF
  Vector positions[3]; // [rsp+F0h] [rbp-90h] BYREF
  Vector normals[3]; // [rsp+120h] [rbp-60h] BYREF

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  v3 = CMesh::FindFirstAttributeOffset(this, "norm", 3);
  v4 = v3;
  if ( v3 != -1 && FirstAttributeOffset != -1 )
  {
    nCurvatureOffset = CMesh::FindFirstAttributeOffset(this, "curvature", 1);
    if ( nCurvatureOffset == -1 )
    {
      m_nVertexStrideFloats = this->m_nVertexStrideFloats;
      *&normals[0].x = 0;
      *&normals[0].z = 0;
      nCurvatureOffset = m_nVertexStrideFloats;
      CUtlString::operator=(normals, "curvature");
      v67 = this->m_nVertexStrideFloats;
      normals[1].y = 0.0;
      LODWORD(normals[2].x) = 1;
      LODWORD(normals[2].z) = 35;
      LODWORD(normals[1].z) = v67;
      LOWORD(normals[2].y) = 0;
      CMesh::AddAttributes(this, normals, 1);
      if ( *&normals[0].z != 0 )
        CUtlString::FreeMemoryBlock(&normals[0].z);
      if ( *&normals[0].x != 0 )
        CUtlString::FreeMemoryBlock(normals);
    }
    m_nVertexCount = this->m_nVertexCount;
    curvatureMin.m_Size = 0;
    curvatureMin.m_Memory.m_pMemory = 0;
    curvatureMin.m_Memory.m_nAllocationCount = 0;
    curvatureMin.m_Memory.m_nGrowSize = 0;
    curvatureMax.m_Size = 0;
    curvatureMax.m_Memory.m_pMemory = 0;
    curvatureMax.m_Memory.m_nAllocationCount = 0;
    curvatureMax.m_Memory.m_nGrowSize = 0;
    CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&curvatureMin, m_nVertexCount);
    CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&curvatureMax, this->m_nVertexCount);
    normals[0].x = 3.4028235e38;
    CUtlVectorBase<float,CUtlMemory<float,int>>::FillWithValue(&curvatureMin, &normals[0].x);
    normals[0].x = 0.0;
    CUtlVectorBase<float,CUtlMemory<float,int>>::FillWithValue(&curvatureMax, &normals[0].x);
    nFaces = this->m_nIndexCount / 3;
    pIndices = this->m_pIndices;
    if ( nFaces <= 0 )
    {
      v68 = this->m_pIndices + 3;
      v69 = nFaces - 1;
    }
    else
    {
      v6 = v4;
      v7 = FirstAttributeOffset;
      m_pIndices = this->m_pIndices;
      v68 = pIndices + 3;
      v69 = nFaces - 1;
      do
      {
        m_pVerts = this->m_pVerts;
        v10 = normals;
        v11 = 0;
        v12 = this->m_nVertexStrideFloats;
        v13 = positions;
        do
        {
          v14 = m_pIndices[v11];
          ++v13;
          ++v10;
          indices[v11++] = v14;
          v15 = &m_pVerts[v12 * v14];
          v16 = &v15[v7];
          v17 = &v15[v6];
          v13[-1].x = *v16;
          v13[-1].y = v16[1];
          v13[-1].z = v16[2];
          v10[-1].x = *v17;
          v10[-1].y = v17[1];
          v10[-1].z = v17[2];
        }
        while ( v11 != 3 );
        y = normals[1].y;
        x = positions[1].x;
        v74 = normals[0].y;
        v20 = positions[1].y;
        v21 = normals[1].x;
        v22 = positions[0].x;
        z = normals[1].z;
        v24 = positions[0].y;
        v76 = normals[0].x;
        v25 = positions[0].z;
        v73 = normals[0].z;
        v26 = fsqrt(
                ((((normals[1].x - normals[0].x) * (normals[1].x - normals[0].x))
                + ((normals[1].y - normals[0].y) * (normals[1].y - normals[0].y)))
               + ((normals[1].z - normals[0].z) * (normals[1].z - normals[0].z)))
              / ((((positions[1].x - positions[0].x) * (positions[1].x - positions[0].x))
                + ((positions[1].y - positions[0].y) * (positions[1].y - positions[0].y)))
               + ((positions[1].z - positions[0].z) * (positions[1].z - positions[0].z))));
        v27 = positions[2].x;
        v28 = positions[2].z;
        v29 = indices[0];
        v30 = indices[1];
        v31 = (positions[2].z - positions[1].z) * (positions[2].z - positions[1].z);
        curvatureMin.m_Memory.m_pMemory[v29] = fminf(curvatureMin.m_Memory.m_pMemory[v29], v26);
        curvatureMin.m_Memory.m_pMemory[v30] = fminf(curvatureMin.m_Memory.m_pMemory[v30], v26);
        curvatureMax.m_Memory.m_pMemory[v29] = fmaxf(curvatureMax.m_Memory.m_pMemory[v29], v26);
        v32 = fmaxf(curvatureMax.m_Memory.m_pMemory[v30], v26);
        v33 = v27 - x;
        v34 = positions[2].y;
        curvatureMax.m_Memory.m_pMemory[v30] = v32;
        v35 = v34 - v20;
        v36 = normals[2].x;
        v37 = normals[2].x - v21;
        v38 = normals[2].y;
        v39 = normals[2].y - y;
        v40 = normals[2].z;
        v41 = fsqrt(
                (((v37 * v37) + (v39 * v39)) + ((normals[2].z - z) * (normals[2].z - z)))
              / (((v33 * v33) + (v35 * v35)) + v31));
        curvatureMin.m_Memory.m_pMemory[v30] = fminf(curvatureMin.m_Memory.m_pMemory[v30], v41);
        v42 = indices[2];
        curvatureMin.m_Memory.m_pMemory[v42] = fminf(curvatureMin.m_Memory.m_pMemory[v42], v41);
        curvatureMax.m_Memory.m_pMemory[v30] = fmaxf(curvatureMax.m_Memory.m_pMemory[v30], v41);
        curvatureMax.m_Memory.m_pMemory[v42] = fmaxf(curvatureMax.m_Memory.m_pMemory[v42], v41);
        v43 = fsqrt(
                ((((v76 - v36) * (v76 - v36)) + ((v74 - v38) * (v74 - v38))) + ((v73 - v40) * (v73 - v40)))
              / ((((v22 - v27) * (v22 - v27)) + ((v24 - v34) * (v24 - v34))) + ((v25 - v28) * (v25 - v28))));
        m_pIndices += 3;
        curvatureMin.m_Memory.m_pMemory[v42] = fminf(curvatureMin.m_Memory.m_pMemory[v42], v43);
        curvatureMin.m_Memory.m_pMemory[v29] = fminf(curvatureMin.m_Memory.m_pMemory[v29], v43);
        curvatureMax.m_Memory.m_pMemory[v42] = fmaxf(curvatureMax.m_Memory.m_pMemory[v42], v43);
        curvatureMax.m_Memory.m_pMemory[v29] = fmaxf(curvatureMax.m_Memory.m_pMemory[v29], v43);
      }
      while ( m_pIndices != &pIndices[3 * (nFaces - 1) + 3] );
    }
    if ( this->m_nVertexCount > 0 )
    {
      v44 = 0;
      v45 = 0;
      do
      {
        v46 = v45 * this->m_nVertexStrideFloats;
        ++v45;
        v47 = curvatureMin.m_Memory.m_pMemory[v44] + curvatureMax.m_Memory.m_pMemory[v44];
        ++v44;
        this->m_pVerts[v46 + nCurvatureOffset] = v47 * 0.5;
      }
      while ( this->m_nVertexCount > v45 );
    }
    v48 = 2;
    *&v49 = 2.0;
    v50 = 1065353216;
    do
    {
      v75 = *&v50;
      v77 = *&v49;
      normals[0].x = 0.0;
      CUtlVectorBase<float,CUtlMemory<float,int>>::FillWithValue(&curvatureMin, &normals[0].x);
      normals[0].x = 0.0;
      CUtlVectorBase<float,CUtlMemory<float,int>>::FillWithValue(&curvatureMax, &normals[0].x);
      v51 = pIndices;
      *&v49 = v77;
      v50 = LODWORD(v75);
      if ( nFaces > 0 )
      {
        do
        {
          v51 += 3;
          v52 = *(v51 - 3);
          v53 = *(v51 - 2);
          v54 = *(v51 - 1);
          v55 = this->m_pVerts[v52 * this->m_nVertexStrideFloats + nCurvatureOffset];
          v56 = this->m_nVertexStrideFloats;
          v57 = v54 * v56;
          v58 = &this->m_pVerts[v53 * v56];
          v59 = this->m_pVerts[v57 + nCurvatureOffset];
          v60 = v58[nCurvatureOffset] + v55;
          curvatureMax.m_Memory.m_pMemory[v52] = (v58[nCurvatureOffset] + v59) + curvatureMax.m_Memory.m_pMemory[v52];
          curvatureMin.m_Memory.m_pMemory[v52] = curvatureMin.m_Memory.m_pMemory[v52] + v77;
          curvatureMax.m_Memory.m_pMemory[v53] = (v59 + v55) + curvatureMax.m_Memory.m_pMemory[v53];
          curvatureMin.m_Memory.m_pMemory[v53] = curvatureMin.m_Memory.m_pMemory[v53] + v77;
          curvatureMax.m_Memory.m_pMemory[v54] = v60 + curvatureMax.m_Memory.m_pMemory[v54];
          curvatureMin.m_Memory.m_pMemory[v54] = curvatureMin.m_Memory.m_pMemory[v54] + v77;
        }
        while ( v51 != &v68[3 * v69] );
      }
      v61 = 0;
      for ( i = 0; this->m_nVertexCount > i; this->m_pVerts[v63 + nCurvatureOffset] = v64 / v65 )
      {
        v63 = i * this->m_nVertexStrideFloats;
        ++i;
        v64 = curvatureMax.m_Memory.m_pMemory[v61];
        v65 = fmaxf(v75, curvatureMin.m_Memory.m_pMemory[v61++]);
      }
      --v48;
    }
    while ( v48 != 0 );
    curvatureMax.m_Size = 0;
    if ( (curvatureMax.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<float,int>::Purge(&curvatureMax.m_Memory);
      if ( (curvatureMax.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<float,int>::Purge(&curvatureMax.m_Memory);
    }
    curvatureMin.m_Size = 0;
    if ( (curvatureMin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<float,int>::Purge(&curvatureMin.m_Memory);
      if ( (curvatureMin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<float,int>::Purge(&curvatureMin.m_Memory);
    }
  }
}


// CMesh::CalculateSmoothNormals  (line 1186, @0x00000000031cf670, libserver.so)  // inlines: CMeshVertexAttribute, CUtlString, GetVertex, Init, NormalizeInPlace, operator+=, operator=, ~CMeshVertexAttribute, ~CUtlString
// calls: CMesh::FindFirstAttributeOffset, ComputeTrianglePlane, VectorNormalize, CMesh::CalculateTangents, CUtlString::operator=, CMesh::AddAttributes, CUtlString::FreeMemoryBlock, CMeshVertexAttribute::~CMeshVertexAttribute, _Unwind_Resume
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
// strings: "normal"
void __fastcall CMesh::CalculateSmoothNormals(CMesh *const this)
{
  int FirstAttributeOffset; // r13d
  int i; // eax
  int v4; // ecx
  float *v5; // rdx
  int v6; // edx
  __int64 v7; // r15
  uint32 *m_pIndices; // r13
  float *m_pVerts; // r8
  uint32 *v10; // rsi
  int v11; // edi
  Vector *v12; // rdx
  uint32 v13; // eax
  vec_t *v14; // rax
  __int64 v15; // rcx
  uint32 v16; // eax
  float *v17; // rax
  int j; // r12d
  int v19; // edx
  int m_nVertexStrideFloats; // eax
  int v21; // eax
  int nNormalOffset; // [rsp+Ch] [rbp-B4h]
  uint32 *v23; // [rsp+30h] [rbp-90h]
  float flIntercept; // [rsp+4Ch] [rbp-74h] BYREF
  Vector vecFlatNormal; // [rsp+50h] [rbp-70h] BYREF
  Vector vPos[3]; // [rsp+60h] [rbp-60h] BYREF
  int v27; // [rsp+84h] [rbp-3Ch] BYREF

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  nNormalOffset = CMesh::FindFirstAttributeOffset(this, "normal", 3);
  if ( nNormalOffset == -1 )
  {
    m_nVertexStrideFloats = this->m_nVertexStrideFloats;
    *&vPos[0].x = 0;
    *&vPos[0].z = 0;
    nNormalOffset = m_nVertexStrideFloats;
    CUtlString::operator=(vPos, "normal");
    v21 = this->m_nVertexStrideFloats;
    vPos[1].y = 0.0;
    LODWORD(vPos[2].x) = 3;
    LODWORD(vPos[2].z) = 42;
    LODWORD(vPos[1].z) = v21;
    LOWORD(vPos[2].y) = 0;
    CMesh::AddAttributes(this, vPos, 1);
    if ( *&vPos[0].z != 0 )
      CUtlString::FreeMemoryBlock(&vPos[0].z);
    if ( *&vPos[0].x != 0 )
      CUtlString::FreeMemoryBlock(vPos);
  }
  for ( i = 0; this->m_nVertexCount > i; v5[2] = 0.0 )
  {
    v4 = i * this->m_nVertexStrideFloats;
    ++i;
    v5 = &this->m_pVerts[v4 + nNormalOffset];
    *v5 = 0.0;
    v5[1] = 0.0;
  }
  v6 = this->m_nIndexCount / 3;
  if ( v6 > 0 )
  {
    v23 = &this->m_pIndices[3 * (v6 - 1) + 3];
    v7 = FirstAttributeOffset;
    m_pIndices = this->m_pIndices;
    do
    {
      m_pVerts = this->m_pVerts;
      v10 = m_pIndices;
      v11 = this->m_nVertexStrideFloats;
      v12 = vPos;
      do
      {
        v13 = *v10;
        ++v12;
        ++v10;
        v14 = &m_pVerts[(v11 * v13) + v7];
        v12[-1].x = *v14;
        v12[-1].y = v14[1];
        v12[-1].z = v14[2];
      }
      while ( v12 != &v27 );
      ComputeTrianglePlane(vPos, &vPos[1], &vPos[2], &vecFlatNormal, &flIntercept);
      v15 = 0;
      do
      {
        v16 = m_pIndices[v15++];
        v17 = &this->m_pVerts[this->m_nVertexStrideFloats * v16 + nNormalOffset];
        *v17 = *v17 + vecFlatNormal.x;
        v17[1] = v17[1] + vecFlatNormal.y;
        v17[2] = v17[2] + vecFlatNormal.z;
      }
      while ( v15 != 3 );
      m_pIndices += 3;
    }
    while ( m_pIndices != v23 );
  }
  for ( j = 0; this->m_nVertexCount > j; ++j )
  {
    v19 = j * this->m_nVertexStrideFloats;
    VectorNormalize(&this->m_pVerts[v19 + nNormalOffset]);
  }
  if ( CMesh::FindFirstAttributeOffset(this, "tangent", 4) == -1 )
    CMesh::CalculateTangents(this);
}


// ComputeTextureProjectionFlagsForNormal  (line 1263, @0x00000000031c8060, libserver.so)
// callers: CMesh::CalculateWorldSpaceTextureCoordinateProjection, CMesh::FindFacesWithMultipleWorldSpaceTextureProjections
int __fastcall ComputeTextureProjectionFlagsForNormal(const Vector *const vNormal, bool bAllowXandY)
{
  float v2; // xmm0_4
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  __int64 v6; // rax
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm5_4

  v2 = fabs(vNormal->y);
  v3 = fabs(vNormal->x);
  v4 = fabs(vNormal->z);
  if ( v3 > v2 )
  {
    if ( v3 > v4 )
    {
      v5 = v3;
      goto LABEL_4;
    }
  }
  else if ( v2 > v4 )
  {
    v5 = v2;
    if ( v3 > v2 )
      v5 = v3;
LABEL_4:
    LODWORD(v6) = 4;
    if ( (v5 - v4) >= 0.0099999998 )
    {
      v7 = v5;
      v8 = v5 - v3;
      v9 = v7 - v2;
      if ( bAllowXandY )
      {
        LODWORD(v6) = 2 * (v9 < 0.0099999998);
        if ( v8 < 0.0099999998 )
          LODWORD(v6) = (2 * (v9 < 0.0099999998)) | 1;
      }
      else
      {
        LODWORD(v6) = 2;
        if ( v9 >= 0.0099999998 )
          return v8 < 0.0099999998;
      }
    }
    return v6;
  }
  v5 = v4;
  goto LABEL_4;
}


// CMesh::CalculateWorldSpaceTextureCoordinateProjection  (line 1295, @0x00000000031c8110, libserver.so)  // inlines: GetVertex
// calls: CMesh::FindFirstAttributeOffset, ComputeTextureProjectionFlagsForNormal
// strings: "normal"
void __fastcall CMesh::CalculateWorldSpaceTextureCoordinateProjection(CMesh *const this)
{
  __int64 FirstAttributeOffset; // r14
  __int64 v3; // r13
  int v4; // eax
  __int64 v5; // r14
  int v6; // ebx
  float v7; // xmm0_4
  float *v8; // rdx
  float *v9; // r12
  float *v10; // r13
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-40h]
  __int64 v13; // [rsp+8h] [rbp-38h]

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  v3 = CMesh::FindFirstAttributeOffset(this, "normal", 3);
  v4 = CMesh::FindFirstAttributeOffset(this, "tex", 2);
  if ( FirstAttributeOffset >= 0 && v3 >= 0 && v4 >= 0 && this->m_nVertexCount > 0 )
  {
    v5 = FirstAttributeOffset;
    v6 = 0;
    v13 = v3;
    v12 = v4;
    do
    {
      while ( 1 )
      {
        v8 = &this->m_pVerts[v6 * this->m_nVertexStrideFloats];
        v9 = &v8[v5];
        v10 = &v8[v12];
        v11 = ComputeTextureProjectionFlagsForNormal(&v8[v13], 0);
        if ( v11 != 1 )
          break;
        ++v6;
        *v10 = 0.0078125 * v9[1];
        v10[1] = -v9[2] * 0.0078125;
        if ( this->m_nVertexCount <= v6 )
          return;
      }
      *v10 = 0.0078125 * *v9;
      if ( v11 == 2 )
        v7 = -v9[2];
      else
        v7 = -v9[1];
      v10[1] = v7 * 0.0078125;
      ++v6;
    }
    while ( this->m_nVertexCount > v6 );
  }
}


// CMesh::FindFacesWithMultipleWorldSpaceTextureProjections  (line 1335, @0x00000000031cca00, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, EnsureCapacity, GetVertex, GrowMemory, RemoveAll, memcpy, operator[]
// calls: CMesh::FindFirstAttributeOffset, ComputeTextureProjectionFlagsForNormal, CUtlMemory<int, int>::Grow, memcpy
// strings: "normal"
void __fastcall CMesh::FindFacesWithMultipleWorldSpaceTextureProjections(
        const CMesh *const this,
        CUtlVector<int,CUtlMemory<int,int> > *pOutBlendFaces,
        CUtlVector<int,CUtlMemory<int,int> > *pOutNonBlendFaces)
{
  int FirstAttributeOffset; // eax
  __int64 v6; // rbx
  CUtlVector<int,CUtlMemory<int,int> > *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  float *m_pVerts; // r14
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // r13d
  int v15; // eax
  __int64 v16; // rbx
  __int64 m_Size; // r12
  int v18; // eax
  int *v19; // rax
  __int64 v20; // r12
  int v21; // eax
  int *v22; // rax
  uint32 m_nGrowSize; // eax
  int *v24; // rsi
  __int64 v25; // rax
  CUtlVector<int,CUtlMemory<int,int> > *v26; // r14
  uint32 v27; // eax
  int *v28; // rsi
  __int64 v29; // rax
  int *v30; // r12
  int *v31; // rax
  int *m_pMemory; // r12
  int *v33; // rax
  int nNumFaces; // [rsp+24h] [rbp-4Ch]
  __int64 i; // [rsp+28h] [rbp-48h]
  int iFace; // [rsp+30h] [rbp-40h]
  int m_nVertexStrideFloats; // [rsp+34h] [rbp-3Ch]
  uint32 *v40; // [rsp+38h] [rbp-38h]

  pOutBlendFaces->m_Size = 0;
  pOutNonBlendFaces->m_Size = 0;
  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "normal", 3);
  v6 = FirstAttributeOffset;
  if ( FirstAttributeOffset < 0 )
    return;
  nNumFaces = this->m_nIndexCount / 3;
  if ( nNumFaces > pOutBlendFaces->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = pOutBlendFaces->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = pOutBlendFaces->m_Memory.m_pMemory;
        v33 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * nNumFaces);
        pOutBlendFaces->m_Memory.m_pMemory = v33;
        if ( m_pMemory != 0 )
          memcpy(v33, m_pMemory, 4LL * pOutBlendFaces->m_Memory.m_nAllocationCount);
        pOutBlendFaces->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v24 = pOutBlendFaces->m_Memory.m_pMemory;
        v25 = *g_pMemAlloc;
        if ( v24 != 0 )
          pOutBlendFaces->m_Memory.m_pMemory = (*(v25 + 8))(g_pMemAlloc, v24, 4LL * nNumFaces);
        else
          pOutBlendFaces->m_Memory.m_pMemory = (*v25)(g_pMemAlloc, 4LL * nNumFaces);
      }
      v8 = nNumFaces;
      pOutBlendFaces->m_Memory.m_nAllocationCount = nNumFaces;
      v7 = pOutNonBlendFaces;
      if ( nNumFaces <= pOutNonBlendFaces->m_Memory.m_nAllocationCount )
        goto LABEL_4;
      goto LABEL_24;
    }
  }
  v7 = pOutNonBlendFaces;
  v8 = nNumFaces;
  if ( nNumFaces > pOutNonBlendFaces->m_Memory.m_nAllocationCount )
  {
LABEL_24:
    v26 = v7;
    v27 = v7->m_Memory.m_nGrowSize;
    if ( (v27 & 0x40000000) == 0 )
    {
      if ( (v27 & 0xC0000000) != 0 )
      {
        v30 = pOutNonBlendFaces->m_Memory.m_pMemory;
        v31 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * nNumFaces);
        pOutNonBlendFaces->m_Memory.m_pMemory = v31;
        if ( v30 != 0 )
          memcpy(v31, v30, 4LL * pOutNonBlendFaces->m_Memory.m_nAllocationCount);
        pOutNonBlendFaces->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v28 = v26->m_Memory.m_pMemory;
        v29 = *g_pMemAlloc;
        if ( v28 != 0 )
          v26->m_Memory.m_pMemory = (*(v29 + 8))(g_pMemAlloc, v28, 4 * v8);
        else
          pOutNonBlendFaces->m_Memory.m_pMemory = (*v29)(g_pMemAlloc, 4LL * nNumFaces);
      }
      pOutNonBlendFaces->m_Memory.m_nAllocationCount = nNumFaces;
    }
  }
LABEL_4:
  v9 = 4 * v6;
  v10 = 0;
  for ( i = v9; nNumFaces > v10; v10 = v16 + 1 )
  {
    m_pVerts = this->m_pVerts;
    iFace = v10;
    m_nVertexStrideFloats = this->m_nVertexStrideFloats;
    v40 = &this->m_pIndices[3 * v10];
    v12 = v10;
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = v40[v13++] * m_nVertexStrideFloats;
      v14 |= ComputeTextureProjectionFlagsForNormal((&m_pVerts[v15] + i), 0);
    }
    while ( v13 != 3 );
    v16 = v12;
    if ( (v14 - 1) <= 1 || v14 == 4 )
    {
      m_Size = pOutNonBlendFaces->m_Size;
      v18 = pOutNonBlendFaces->m_Size;
      if ( m_Size == pOutNonBlendFaces->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&pOutNonBlendFaces->m_Memory, 1);
        v18 = pOutNonBlendFaces->m_Size;
      }
      pOutNonBlendFaces->m_Size = v18 + 1;
      v19 = &pOutNonBlendFaces->m_Memory.m_pMemory[m_Size];
      if ( v19 != 0 )
        *v19 = iFace;
    }
    else
    {
      v20 = pOutBlendFaces->m_Size;
      v21 = pOutBlendFaces->m_Size;
      if ( v20 == pOutBlendFaces->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&pOutBlendFaces->m_Memory, 1);
        v21 = pOutBlendFaces->m_Size;
      }
      pOutBlendFaces->m_Size = v21 + 1;
      v22 = &pOutBlendFaces->m_Memory.m_pMemory[v20];
      if ( v22 != 0 )
        *v22 = iFace;
    }
  }
}


// CMesh::ScalePositions  (line 1380, @0x00000000031c82b0, libserver.so)  // inlines: GetVertex, operator*=
// calls: CMesh::FindFirstAttributeOffset
void __fastcall CMesh::ScalePositions(CMesh *const this, float a2, float flScaleX, float flScaleY, float flScaleZ)
{
  int FirstAttributeOffset; // eax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // esi
  float *v10; // rdx

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  if ( FirstAttributeOffset != -1 && this->m_nVertexCount > 0 )
  {
    v7 = 0;
    v8 = FirstAttributeOffset;
    do
    {
      v9 = v7 * this->m_nVertexStrideFloats;
      ++v7;
      v10 = &this->m_pVerts[v9 + v8];
      *v10 = *v10 * a2;
      v10[1] = v10[1] * flScaleX;
      v10[2] = v10[2] * flScaleY;
    }
    while ( this->m_nVertexCount > v7 );
  }
}


// CMesh::FindFirstAttribute  (line 1399, @0x00000000031c8350, libserver.so)
// calls: CUtlString::Get, V_stristr_fast(char const*,char const*)
// callers: CMesh::FindAttrArray<Vector>, CMesh::NormalizeSkinWeights, CMesh::RemoveFirstAttribute, CMesh::SetBlendWeightAndIndexCount, NormalizeBlendWeightsAndIndicesBetweenMeshes
CMeshVertexAttribute *__fastcall CMesh::FindFirstAttribute(CMesh *const this, const char *pAttributeName, int nFloats)
{
  int v5; // r13d
  __int64 v7; // rbx
  const char *v8; // rax
  CMeshVertexAttribute *result; // rax

  v5 = 0;
  v7 = 0;
  if ( this->m_nAttributeCount <= 0 )
    return 0;
  while ( 1 )
  {
    v8 = CUtlString::Get(&this->m_pAttributes[v7].m_name);
    if ( V_stristr_fast(v8, pAttributeName) != 0 )
    {
      result = &this->m_pAttributes[v7];
      if ( nFloats == 0 || result->m_nSizeFloats == nFloats )
        break;
    }
    ++v5;
    ++v7;
    if ( this->m_nAttributeCount <= v5 )
      return 0;
  }
  return result;
}


// CMesh::RemoveFirstAttribute  (line 1415, @0x00000000031c8870, libserver.so)
// calls: CMesh::FindFirstAttribute, CMesh::RemoveAttribute
// callers: CMesh::SetBlendWeightAndIndexCount, CMesh::RemoveTangents, CMesh::RemoveColors
bool __fastcall CMesh::RemoveFirstAttribute(CMesh *const this, const char *pAttributeName, int nFloats)
{
  CMeshVertexAttribute *FirstAttribute; // rax

  FirstAttribute = CMesh::FindFirstAttribute(this, pAttributeName, nFloats);
  return CMesh::RemoveAttribute(this, FirstAttribute);
}


// CMesh::RemoveAttribute  (line 1422, @0x00000000031c8d30, libserver.so)
// calls: CMesh::RemoveAttribute
bool __fastcall CMesh::RemoveAttribute(CMesh *const this, int nAttributeIndex)
{
  return this->m_nAttributeCount > nAttributeIndex
      && CMesh::RemoveAttribute(this, &this->m_pAttributes[nAttributeIndex]);
}


// CMesh::RemoveAttributes  (line 1432, @0x00000000031d22c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GrowMemory, Purge, RemoveAll, RemoveAttribute, Sort, __final_insertion_sort<int*>, __lg, __unguarded_insertion_sort<int*>, __unguarded_linear_insert<int*>, operator[], sort<int*>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<int, int>::Grow, std::__introsort_loop<int*, long int>, std::__insertion_sort<int*>, CMesh::RemoveAttribute, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
bool __fastcall CMesh::RemoveAttributes(CMesh *const this, const CMesh::SkinningDataFields_t *const skinData)
{
  int *m_pMemory; // r15
  int v5; // r13d
  unsigned __int64 v6; // rax
  __int64 i; // r14
  __int64 v8; // rax
  CUtlVector<int,CUtlMemory<int,int> > attrIdx; // [rsp+0h] [rbp-50h] BYREF

  attrIdx.m_Memory.m_pMemory = 0;
  attrIdx.m_Memory.m_nAllocationCount = 0;
  attrIdx.m_Memory.m_nGrowSize = 0;
  CUtlMemory<int,int>::Grow(&attrIdx.m_Memory, 1);
  if ( attrIdx.m_Memory.m_pMemory != 0 )
    *attrIdx.m_Memory.m_pMemory = skinData->m_nBoneIndices;
  if ( attrIdx.m_Memory.m_nAllocationCount == 1 )
    CUtlMemory<int,int>::Grow(&attrIdx.m_Memory, 1);
  m_pMemory = attrIdx.m_Memory.m_pMemory;
  if ( attrIdx.m_Memory.m_pMemory != -4LL )
  {
    attrIdx.m_Memory.m_pMemory[1] = skinData->m_nBoneWeights;
    m_pMemory = attrIdx.m_Memory.m_pMemory;
  }
  v5 = 2;
  if ( m_pMemory + 2 != m_pMemory )
  {
    _BitScanReverse64(&v6, 2u);
    std::__introsort_loop<int *,long>(m_pMemory, m_pMemory + 2, 2 * (63LL - (v6 ^ 0x3F)));
    std::__insertion_sort<int *>(m_pMemory, m_pMemory + 2);
    v5 = 2;
  }
  for ( i = 1; v5 > 0; --i )
  {
    v8 = attrIdx.m_Memory.m_pMemory[i];
    if ( v8 < 0 )
      break;
    if ( this->m_nAttributeCount > v8 )
      CMesh::RemoveAttribute(this, &this->m_pAttributes[v8]);
    --v5;
  }
  if ( (attrIdx.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&attrIdx.m_Memory);
    if ( (attrIdx.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&attrIdx.m_Memory);
  }
  return 1;
}


// CMesh::RemoveAttribute  (line 1456, @0x00000000031c8560, libserver.so)  // inlines: CMeshVertexAttribute, CUtlString, GetVertex, V_memcpy, memcpy, operator=, ~CMeshVertexAttribute, ~CUtlString
// calls: operator new [], CUtlString::operator=, memcpy, CUtlString::FreeMemoryBlock, operator delete []
// callers: CMesh::RemoveFirstAttribute, CMesh::RemoveAttribute, CMesh::RemoveAttributes
bool __fastcall CMesh::RemoveAttribute(CMesh *const this, CMeshVertexAttribute *pAttribute)
{
  int m_nAttributeCount; // eax
  size_t v5; // rdi
  int v6; // r12d
  _QWORD *v7; // rax
  char *v8; // rdx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  signed __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r8d
  int v14; // r14d
  CMeshVertexAttribute *v15; // r13
  int m_nOffsetFloats; // eax
  CMeshVertexAttribute *v17; // r12
  size_t v18; // rdi
  int m_nVertexStrideFloats; // eax
  unsigned __int64 v20; // rax
  int v21; // r14d
  float *v22; // r12
  float *v23; // r13
  CMeshVertexAttribute *m_pAttributes; // rax
  CUtlString *p_m_name; // r12
  float *m_pVerts; // rdi
  bool v27; // zf
  float *pNewVertStart; // [rsp+8h] [rbp-58h]
  char bPostAttribute; // [rsp+10h] [rbp-50h]
  __int64 v31; // [rsp+18h] [rbp-48h]
  int nNewStrideFloats; // [rsp+20h] [rbp-40h]
  int nNewStrideFloatsa; // [rsp+20h] [rbp-40h]
  int a; // [rsp+24h] [rbp-3Ch]
  int aa; // [rsp+24h] [rbp-3Ch]
  CMeshVertexAttribute *pNewAttributes; // [rsp+28h] [rbp-38h]

  if ( pAttribute == 0 )
    return 0;
  nNewStrideFloats = pAttribute->m_nSizeFloats;
  m_nAttributeCount = this->m_nAttributeCount;
  v5 = -1;
  v6 = m_nAttributeCount - 1;
  if ( (m_nAttributeCount - 1) <= 0x330000000000000LL )
    v5 = 40LL * v6 + 8;
  v7 = operator new[](v5);
  *v7 = v6;
  pNewAttributes = (v7 + 1);
  if ( v6 != 0 )
  {
    v8 = (v7 + 1);
    v9 = v6 - 2LL;
    v10 = v7 + 2;
    do
    {
      --v9;
      *v8 = 0;
      v11 = v8 - pNewAttributes;
      v8 += 40;
      *(v10 + v11) = 0;
    }
    while ( v9 != -2 );
  }
  if ( this->m_nAttributeCount > 0 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    bPostAttribute = 0;
    do
    {
      while ( 1 )
      {
        v17 = (this->m_pAttributes + v12);
        if ( v17 != pAttribute )
          break;
        ++v13;
        v12 += 40;
        bPostAttribute = 1;
        if ( this->m_nAttributeCount <= v13 )
          goto LABEL_14;
      }
      v31 = v12;
      a = v13;
      v15 = &pNewAttributes[v14];
      CUtlString::operator=(&v15->m_name, (&this->m_pAttributes->m_name + v12));
      CUtlString::operator=(&v15->m_nameDelta, &v17->m_nameDelta);
      v15->m_nSemanticIndex = v17->m_nSemanticIndex;
      m_nOffsetFloats = v17->m_nOffsetFloats;
      v15->m_nOffsetFloats = m_nOffsetFloats;
      v15->m_nSizeFloats = v17->m_nSizeFloats;
      v15->m_bDelta = v17->m_bDelta;
      v15->m_bNoCompression = v17->m_bNoCompression;
      v15->m_dmeType = v17->m_dmeType;
      if ( bPostAttribute != 0 )
        v15->m_nOffsetFloats = m_nOffsetFloats - nNewStrideFloats;
      v13 = a + 1;
      ++v14;
      v12 = v31 + 40;
    }
    while ( this->m_nAttributeCount > a + 1 );
  }
LABEL_14:
  v18 = -1;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  aa = m_nVertexStrideFloats - pAttribute->m_nOffsetFloats - pAttribute->m_nSizeFloats;
  nNewStrideFloatsa = m_nVertexStrideFloats - nNewStrideFloats;
  v20 = this->m_nVertexCount * nNewStrideFloatsa;
  if ( v20 <= 0x1FC0000000000000LL )
    v18 = 4 * v20;
  pNewVertStart = operator new[](v18);
  if ( this->m_nVertexCount > 0 )
  {
    v21 = 0;
    v22 = pNewVertStart;
    do
    {
      v23 = &this->m_pVerts[v21 * this->m_nVertexStrideFloats];
      memcpy(v22, v23, 4LL * pAttribute->m_nOffsetFloats);
      if ( aa > 0 )
        memcpy(
          &v22[pAttribute->m_nOffsetFloats],
          &v23[pAttribute->m_nSizeFloats + pAttribute->m_nOffsetFloats],
          4LL * aa);
      ++v21;
      v22 += nNewStrideFloatsa;
    }
    while ( this->m_nVertexCount > v21 );
  }
  m_pAttributes = this->m_pAttributes;
  if ( m_pAttributes != 0 )
  {
    p_m_name = &m_pAttributes[*&m_pAttributes[-1].m_dmeType].m_name;
    while ( p_m_name != m_pAttributes )
    {
      p_m_name -= 5;
      if ( p_m_name[1].m_pString != 0 )
        CUtlString::FreeMemoryBlock(p_m_name + 1);
      if ( p_m_name->m_pString != 0 )
        CUtlString::FreeMemoryBlock(p_m_name);
      m_pAttributes = this->m_pAttributes;
    }
    operator delete[](&p_m_name[-1]);
  }
  m_pVerts = this->m_pVerts;
  v27 = this->m_pVerts == 0;
  this->m_pAttributes = pNewAttributes;
  if ( !v27 )
    operator delete[](m_pVerts);
  --this->m_nAttributeCount;
  this->m_pVerts = pNewVertStart;
  this->m_nVertexStrideFloats = nNewStrideFloatsa;
  return 1;
}


// CMesh::RemoveTangents  (line 1526, @0x00000000031c8d60, libserver.so)
// calls: CMesh::RemoveFirstAttribute
void __fastcall CMesh::RemoveTangents(CMesh *const this)
{
  while ( CMesh::RemoveFirstAttribute(this, "tangent", 0) )
    ;
}


// CMesh::RemoveColors  (line 1534, @0x00000000031c8d90, libserver.so)
// calls: CMesh::RemoveFirstAttribute
void __fastcall CMesh::RemoveColors(CMesh *const this)
{
  while ( CMesh::RemoveFirstAttribute(this, "color", 0) )
    ;
}


// CMesh::RemoveUnusedVertices  (line 1542, @0x00000000031cbc90, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<float>, Element, EnsureCapacity, GrowMemory, Purge, RemoveAll, V_memcpy, memcpy, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue, CUtlMemory<float, int>::Grow, memcpy, CUtlMemory<int, int>::Purge, CUtlMemory<float, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CMesh::RemoveUnusedVertices(CMesh *const this)
{
  int m_nVertexCount; // esi
  int m_nVertexStrideFloats; // ebx
  int v4; // ebx
  float *v5; // rax
  __int64 v6; // rcx
  __int64 m_Size; // r12
  int v8; // eax
  uint32 *v9; // r15
  int *v10; // rsi
  int v11; // ebx
  int v12; // eax
  float *v13; // rcx
  float *v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  uint32 *v19; // rsi
  __int64 i; // [rsp+28h] [rbp-88h]
  int src; // [rsp+3Ch] [rbp-74h] BYREF
  CUtlVector<float,CUtlMemory<float,int> > arrNewVerts; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > arrOldToNew; // [rsp+60h] [rbp-50h] BYREF

  arrNewVerts.m_Size = 0;
  m_nVertexCount = this->m_nVertexCount;
  arrNewVerts.m_Memory.m_pMemory = 0;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  arrNewVerts.m_Memory.m_nAllocationCount = 0;
  arrNewVerts.m_Memory.m_nGrowSize = 0;
  v4 = m_nVertexCount * m_nVertexStrideFloats;
  if ( v4 > 0 )
  {
    v5 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v4);
    m_nVertexCount = this->m_nVertexCount;
    arrNewVerts.m_Memory.m_pMemory = v5;
    arrNewVerts.m_Memory.m_nAllocationCount = v4;
  }
  arrOldToNew.m_Size = 0;
  arrOldToNew.m_Memory.m_pMemory = 0;
  arrOldToNew.m_Memory.m_nAllocationCount = 0;
  arrOldToNew.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&arrOldToNew, m_nVertexCount);
  src = -1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::FillWithValue(&arrOldToNew, &src);
  v6 = this->m_nVertexStrideFloats;
  LODWORD(m_Size) = arrNewVerts.m_Size;
  if ( this->m_nIndexCount > 0 )
  {
    i = 0;
    do
    {
      v9 = &this->m_pIndices[i];
      v10 = &arrOldToNew.m_Memory.m_pMemory[*v9];
      if ( *v10 < 0 )
      {
        *v10 = m_Size / v6;
        v6 = this->m_nVertexStrideFloats;
        LODWORD(m_Size) = arrNewVerts.m_Size;
        if ( v6 > 0 )
        {
          m_Size = arrNewVerts.m_Size;
          v11 = 0;
          do
          {
            v14 = &this->m_pVerts[v11 + *v9 * v6];
            v15 = m_Size;
            if ( arrNewVerts.m_Memory.m_nAllocationCount == m_Size )
            {
              CUtlMemory<float,int>::Grow(&arrNewVerts.m_Memory, 1);
              v15 = arrNewVerts.m_Size;
            }
            v12 = v15 + 1;
            arrNewVerts.m_Size = v12;
            v13 = &arrNewVerts.m_Memory.m_pMemory[m_Size];
            if ( v13 != 0 )
            {
              *v13 = *v14;
              m_Size = arrNewVerts.m_Size;
            }
            else
            {
              m_Size = v12;
            }
            v6 = this->m_nVertexStrideFloats;
            ++v11;
          }
          while ( v6 > v11 );
        }
      }
      v8 = i++;
    }
    while ( this->m_nIndexCount > v8 + 1 );
  }
  if ( v6 * this->m_nVertexCount > m_Size )
  {
    v16 = m_Size / v6;
    if ( this->m_nIndexCount > 0 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        ++v18;
        v19 = &this->m_pIndices[v17++];
        *v19 = arrOldToNew.m_Memory.m_pMemory[*v19];
      }
      while ( this->m_nIndexCount > v18 );
      v6 = this->m_nVertexStrideFloats;
    }
    this->m_nVertexCount = v16;
    memcpy(this->m_pVerts, arrNewVerts.m_Memory.m_pMemory, v6 * 4LL * v16);
  }
  arrOldToNew.m_Size = 0;
  if ( (arrOldToNew.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<int,int>::Purge(&arrOldToNew.m_Memory), (arrOldToNew.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    arrNewVerts.m_Size = 0;
    if ( (arrNewVerts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
  }
  else
  {
    CUtlMemory<int,int>::Purge(&arrOldToNew.m_Memory);
    arrNewVerts.m_Size = 0;
    if ( (arrNewVerts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
  }
  CUtlMemory<float,int>::Purge(&arrNewVerts.m_Memory);
  if ( (arrNewVerts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float,int>::Purge(&arrNewVerts.m_Memory);
}


// CalcTriangleTangentSpaceL  (line 1583, @0x00000000031c8dc0, libserver.so)  // inlines: CrossProduct, Init
// callers: CMesh::CalculateTangentSpaceWorldLengthsPerFace
void __fastcall CalcTriangleTangentSpaceL(
        const Vector *const p0,
        const Vector *const p1,
        const Vector *const p2,
        const Vector2D *const t0,
        const Vector2D *const t1,
        const Vector2D *const t2,
        Vector *const sVect,
        Vector *const tVect)
{
  float y; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float x; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm0_4
  double v16; // xmm5_8
  float v17; // xmm9_4
  float v18; // xmm2_4
  float v19; // xmm8_4
  float v20; // xmm10_4
  float v21; // xmm9_4
  float v22; // xmm2_4
  float z; // xmm9_4
  float v24; // xmm7_4
  float v25; // xmm8_4

  sVect->x = 0.0;
  sVect->y = 0.0;
  sVect->z = 0.0;
  tVect->x = 0.0;
  tVect->y = 0.0;
  tVect->z = 0.0;
  y = t0->y;
  v9 = t1->y - y;
  v10 = t1->x - t0->x;
  v11 = t2->y - y;
  v12 = t2->x - t0->x;
  x = p0->x;
  v14 = p2->x;
  v15 = (v10 * v11) - (v9 * v12);
  v16 = fabs(v15);
  if ( v16 > 1.0e-12 )
  {
    v17 = p1->x - x;
    sVect->x = (-((v9 * (v14 - x)) - (v11 * v17)) / v15) + sVect->x;
    tVect->x = (-((v12 * v17) - (v10 * (v14 - x))) / v15) + tVect->x;
    v18 = t0->y;
    v9 = t1->y - v18;
    v11 = t2->y - v18;
    v10 = t1->x - t0->x;
    v12 = t2->x - t0->x;
    v15 = (v10 * v11) - (v9 * v12);
    v16 = fabs(v15);
  }
  v19 = p0->y;
  v20 = p2->y;
  if ( v16 > 1.0e-12 )
  {
    v21 = p1->y - v19;
    sVect->y = (-((v9 * (v20 - v19)) - (v11 * v21)) / v15) + sVect->y;
    tVect->y = (-((v12 * v21) - (v10 * (v20 - v19))) / v15) + tVect->y;
    v22 = t0->y;
    v9 = t1->y - v22;
    v11 = t2->y - v22;
    v10 = t1->x - t0->x;
    v12 = t2->x - t0->x;
    v15 = (v10 * v11) - (v9 * v12);
    v16 = fabs(v15);
  }
  z = p1->z;
  v24 = p0->z;
  v25 = p2->z;
  if ( v16 > 1.0e-12 )
  {
    sVect->z = (-((v9 * (v25 - v24)) - (v11 * (z - v24))) / v15) + sVect->z;
    tVect->z = (-((v12 * (z - v24)) - (v10 * (v25 - v24))) / v15) + tVect->z;
  }
}


// CMesh::CalculateTangentSpaceWorldLengthsPerFace  (line 1626, @0x00000000031c9040, libserver.so)  // inlines: FastSqrt, GetVertex, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CMesh::FindFirstAttributeOffset, CalcTriangleTangentSpaceL, Msg
// strings: "Need valid position and texcoord when creating world space tangent lengths!\n"
__int64 __fastcall CMesh::CalculateTangentSpaceWorldLengthsPerFace(
        CMesh *const this,
        Vector2D *pLengthsOut,
        int nLengthsOut,
        float flMaxWorldPerUV)
{
  int FirstAttributeOffset; // ebx
  unsigned int v8; // ecx
  int v9; // esi
  int v10; // edx
  uint32 *m_pIndices; // r13
  CMesh *v12; // r11
  __int64 v13; // r15
  __int64 v14; // r14
  float *m_pVerts; // r8
  __int64 v16; // rdx
  int m_nVertexStrideFloats; // edi
  Vector *v18; // rcx
  float *v19; // rsi
  vec_t v20; // xmm3_4
  Vector2D *v22; // [rsp+40h] [rbp-C0h]
  CMesh *v23; // [rsp+48h] [rbp-B8h]
  Vector sdir; // [rsp+60h] [rbp-A0h] BYREF
  Vector tdir; // [rsp+70h] [rbp-90h] BYREF
  Vector2D vTex[3]; // [rsp+80h] [rbp-80h] BYREF
  Vector vPos[3]; // [rsp+A0h] [rbp-60h] BYREF

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  v9 = CMesh::FindFirstAttributeOffset(this, "tex", 2);
  if ( v9 == -1 )
    v9 = CMesh::FindFirstAttributeOffset(this, "tex", 3);
  LOBYTE(v8) = FirstAttributeOffset == -1 || v9 == -1;
  if ( v8 != 0 )
  {
    Msg("Need valid position and texcoord when creating world space tangent lengths!\n");
    return 0;
  }
  else
  {
    v10 = this->m_nIndexCount / 3;
    if ( v10 <= nLengthsOut )
    {
      m_pIndices = this->m_pIndices;
      if ( v10 > 0 )
      {
        v22 = &pLengthsOut[(v10 - 1) + 1];
        v12 = this;
        v13 = FirstAttributeOffset;
        v14 = v9;
        do
        {
          m_pVerts = v12->m_pVerts;
          v16 = 0;
          m_nVertexStrideFloats = v12->m_nVertexStrideFloats;
          v18 = vPos;
          do
          {
            ++v18;
            v19 = &m_pVerts[m_nVertexStrideFloats * m_pIndices[v16]];
            v18[-1].x = v19[FirstAttributeOffset];
            v18[-1].y = v19[v13 + 1];
            v18[-1].z = v19[v13 + 2];
            vTex[v16].x = v19[v14];
            vTex[v16++].y = v19[v14 + 1];
          }
          while ( v16 != 3 );
          ++pLengthsOut;
          v23 = v12;
          m_pIndices += 3;
          CalcTriangleTangentSpaceL(vPos, &vPos[1], &vPos[2], vTex, &vTex[1], &vTex[2], &sdir, &tdir);
          v12 = v23;
          v20 = fminf(flMaxWorldPerUV, fsqrt(((sdir.x * sdir.x) + (sdir.y * sdir.y)) + (sdir.z * sdir.z)));
          pLengthsOut[-1].x = v20;
          pLengthsOut[-1].y = v20;
        }
        while ( pLengthsOut != v22 );
      }
      return 1;
    }
  }
  return v8;
}


// CMesh::CalculateFaceCenters  (line 1687, @0x00000000031c92d0, libserver.so)  // inlines: GetVertex, operator+=, operator/=, operator=
// calls: CMesh::FindFirstAttributeOffset, Msg
// strings: "Need valid position to calculate face centers!\n"
bool __fastcall CMesh::CalculateFaceCenters(CMesh *const this, Vector *pCentersOut, int nCentersOut)
{
  int FirstAttributeOffset; // eax
  __int64 v7; // r8
  bool result; // al
  int v9; // edx
  uint32 *m_pIndices; // rdi
  __int64 v11; // r8
  Vector *v12; // rsi
  Vector *v13; // r9
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  uint32 v18; // edx
  float *v19; // rdx

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "position", 3);
  v7 = FirstAttributeOffset;
  if ( FirstAttributeOffset == -1 )
  {
    Msg("Need valid position to calculate face centers!\n");
    return 0;
  }
  else
  {
    result = 0;
    v9 = this->m_nIndexCount / 3;
    if ( v9 <= nCentersOut )
    {
      m_pIndices = this->m_pIndices;
      if ( v9 > 0 )
      {
        v11 = v7;
        v12 = pCentersOut;
        v13 = &pCentersOut[(v9 - 1) + 1];
        do
        {
          v12->x = 0.0;
          v14 = 0;
          v15 = 0.0;
          v12->y = 0.0;
          v16 = 0.0;
          v17 = 0.0;
          v12->z = 0.0;
          do
          {
            v18 = m_pIndices[v14++];
            v19 = &this->m_pVerts[(this->m_nVertexStrideFloats * v18) + v11];
            v17 = v17 + *v19;
            v12->x = v17;
            v16 = v16 + v19[1];
            v12->y = v16;
            v15 = v15 + v19[2];
            v12->z = v15;
          }
          while ( v14 != 3 );
          ++v12;
          m_pIndices += 3;
          v12[-1].x = v17 * 0.33333334;
          v12[-1].y = v16 * 0.33333334;
          v12[-1].z = v15 * 0.33333334;
        }
        while ( v12 != v13 );
      }
      return 1;
    }
  }
  return result;
}


// CMesh::ReverseTriangleWinding  (line 1729, @0x00000000031c9400, libserver.so)  // inlines: Swap<unsigned int>
// callers: ConvexHull3DFromVerts
void __fastcall CMesh::ReverseTriangleWinding(CMesh *const this)
{
  __int64 v1; // rax
  int i; // edx
  uint32 *m_pIndices; // rsi
  uint32 *v4; // rcx
  uint32 *v5; // rsi
  uint32 v6; // r8d

  v1 = 0;
  for ( i = 0; this->m_nIndexCount > i; *v4 = v6 )
  {
    m_pIndices = this->m_pIndices;
    i += 3;
    v4 = &m_pIndices[v1 + 2];
    v5 = &m_pIndices[v1];
    v1 += 3;
    v6 = *v5;
    *v5 = *v4;
  }
}


// CMesh::SplitLongEdges  (line 1738, @0x00000000031cceb0, libserver.so)  // inlines: Purge, RemoveAll, ~CMeshEdgeSplitter, ~CUtlMap, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CMeshEdgeSplitter::CMeshEdgeSplitter, CMeshEdgeSplitter::SplitLongEdges, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int>::Purge, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge, CMeshEdgeSplitter::~CMeshEdgeSplitter, _Unwind_Resume
void __fastcall CMesh::SplitLongEdges(CMesh *const this, double a2, float flMaxLength)
{
  float v3; // xmm1_4
  CMeshEdgeSplitter edgeSplitter; // [rsp+10h] [rbp-B0h] BYREF

  CMeshEdgeSplitter::CMeshEdgeSplitter(&edgeSplitter, this);
  CMeshEdgeSplitter::SplitLongEdges(&edgeSplitter, v3);
  edgeSplitter.m_splitList.m_heap.m_Size = 0;
  if ( (edgeSplitter.m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(&edgeSplitter.m_splitList.m_heap.m_Memory);
    if ( (edgeSplitter.m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(&edgeSplitter.m_splitList.m_heap.m_Memory);
  }
  CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::RemoveAll(&edgeSplitter.m_heSec.m_Tree);
  edgeSplitter.m_heSec.m_Tree.m_FirstFree = -1;
  if ( (edgeSplitter.m_heSec.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
  {
    edgeSplitter.m_heSec.m_Tree.m_LastAlloc.index = -1;
  }
  else
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edgeSplitter.m_heSec.m_Tree.m_Elements);
    edgeSplitter.m_heSec.m_Tree.m_LastAlloc.index = -1;
    if ( (edgeSplitter.m_heSec.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edgeSplitter.m_heSec.m_Tree.m_Elements);
  }
  CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::RemoveAll(&edgeSplitter.m_hePri.m_Tree);
  edgeSplitter.m_hePri.m_Tree.m_FirstFree = -1;
  if ( (edgeSplitter.m_hePri.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edgeSplitter.m_hePri.m_Tree.m_Elements);
    edgeSplitter.m_hePri.m_Tree.m_LastAlloc.index = -1;
    if ( (edgeSplitter.m_hePri.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edgeSplitter.m_hePri.m_Tree.m_Elements);
  }
}


// CMesh::Validate  (line 1744, @0x00000000031c9440, libserver.so)
// callers: CMeshEdgeSplitter::CMeshEdgeSplitter, CMeshEdgeSplitter::SplitLongEdges
void __fastcall CMesh::Validate(CMesh *const this)
{
  ;
}


// CMesh::SetTintColor  (line 1753, @0x00000000031c9450, libserver.so)  // inlines: operator=
void __fastcall CMesh::SetTintColor(CMesh *const this, const Vector4D *const vTintColor)
{
  this->m_bUseTintColor = 1;
  this->m_vTintColor = *vTintColor;
}


// CMesh::GetSkinningDataFields  (line 1759, @0x00000000031c9490, libserver.so)  // inlines: IsJointIndices, IsJointWeight, SkinningDataFields_t
// calls: CUtlString::Get, V_stricmp_fast
// callers: CMesh::RemapBlendIndices, CMesh::GetBlendWeightCount, CMesh::HasSkinningData, CMesh::GetUsedJoints, CMesh::SaveObj, CMesh::GetBoneInfluenceStats, CMesh::GetMostlyAttachedBone, CMeshDisjointSetPartition::PartitionByJoints
// strings: "blendindices", "blendweight", "blendweights"
CMesh::SkinningDataFields_t __fastcall CMesh::GetSkinningDataFields(const CMesh *const this)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  int v4; // r12d
  CMeshVertexAttribute *m_pAttributes; // rax
  CMeshVertexAttribute *v6; // rdi
  const char *v7; // rax
  CMeshVertexAttribute *v8; // r15
  const char *v9; // rax
  const char *v10; // rax
  unsigned int v11; // [rsp+Ch] [rbp-34h]

  if ( this->m_nAttributeCount > 0 )
  {
    v2 = 0xFFFFFFFFLL;
    v3 = 0;
    v4 = 0;
    v11 = -1;
    while ( 1 )
    {
      v8 = &this->m_pAttributes[v3];
      v9 = CUtlString::Get(&v8->m_name);
      if ( V_stricmp_fast(v9, "blendweight") != 0 )
      {
        v10 = CUtlString::Get(&v8->m_name);
        if ( V_stricmp_fast(v10, "blendweights") != 0 )
        {
          v6 = &this->m_pAttributes[v3];
          goto LABEL_6;
        }
      }
      if ( v11 == -1 )
        break;
      m_pAttributes = this->m_pAttributes;
      v6 = &m_pAttributes[v3];
      if ( m_pAttributes[v3].m_nSemanticIndex < m_pAttributes[v11].m_nSemanticIndex )
        goto LABEL_5;
LABEL_6:
      v7 = CUtlString::Get(&v6->m_name);
      if ( V_stricmp_fast(v7, "blendindices") != 0 )
      {
LABEL_10:
        ++v4;
        ++v3;
        if ( this->m_nAttributeCount <= v4 )
          return ((v2 << 32) | v11);
      }
      else
      {
        if ( v2 != -1 )
        {
          if ( this->m_pAttributes[v3].m_nSemanticIndex < this->m_pAttributes[v2].m_nSemanticIndex )
            v2 = v4;
          goto LABEL_10;
        }
        v2 = v4++;
        ++v3;
        if ( this->m_nAttributeCount <= v4 )
          return ((v2 << 32) | v11);
      }
    }
    v6 = &this->m_pAttributes[v3];
LABEL_5:
    v11 = v4;
    goto LABEL_6;
  }
  v2 = 0xFFFFFFFFLL;
  v11 = -1;
  return ((v2 << 32) | v11);
}


// CMesh::GetClothDataFields  (line 1786, @0x00000000031c97f0, libserver.so)  // inlines: ClothDataFields_t, IsClothEnable, IsPositionRemap
// calls: CUtlString::Get, V_stricmp_fast
// strings: "cloth_enable", "dme_position_map"
CMesh::ClothDataFields_t __fastcall CMesh::GetClothDataFields(const CMesh *const this)
{
  unsigned int v2; // r14d
  __int64 v3; // r12
  int v4; // ebx
  __int64 v5; // r15
  const char *v6; // rax
  const char *v7; // rax

  if ( this->m_nAttributeCount <= 0 )
  {
    v2 = -1;
    v5 = 0xFFFFFFFFLL;
  }
  else
  {
    v2 = -1;
    v3 = 0;
    v4 = 0;
    v5 = 0xFFFFFFFFLL;
    do
    {
      v6 = CUtlString::Get(&this->m_pAttributes[v3].m_name);
      if ( V_stricmp_fast(v6, "cloth_enable") == 0 )
        v2 = v4;
      v7 = CUtlString::Get(&this->m_pAttributes[v3].m_name);
      if ( V_stricmp_fast(v7, "dme_position_map") == 0 )
        v5 = v4;
      ++v4;
      ++v3;
    }
    while ( this->m_nAttributeCount > v4 );
  }
  return ((v5 << 32) | v2);
}


// CMesh::GetNormalAttributeIndex  (line 1807, @0x00000000031c98a0, libserver.so)  // inlines: IsNormal
// calls: CUtlString::Get, V_stricmp_fast
// callers: CMesh::SaveObj
// strings: "normal"
int __fastcall CMesh::GetNormalAttributeIndex(const CMesh *const this, int nSemanticIndex)
{
  __int64 v4; // rbx
  int v5; // r12d
  int v6; // r15d
  const char *v7; // rax

  if ( this->m_nAttributeCount <= 0 )
    return -1;
  v4 = 0;
  v5 = 0;
  v6 = -1;
  do
  {
    v7 = CUtlString::Get(&this->m_pAttributes[v4].m_name);
    if ( V_stricmp_fast(v7, "normal") == 0 )
    {
      if ( nSemanticIndex < 0 || this->m_pAttributes[v4].m_nSemanticIndex == nSemanticIndex )
        return v5;
      v6 = -2;
    }
    ++v5;
    ++v4;
  }
  while ( this->m_nAttributeCount > v5 );
  return v6;
}


// CMesh::GetBlendWeightCount  (line 1827, @0x00000000031c9930, libserver.so)
// calls: CMesh::GetSkinningDataFields
int __fastcall CMesh::GetBlendWeightCount(const CMesh *const this)
{
  __int64 v2; // rax
  CMeshVertexAttribute *v3; // rdx
  int result; // eax

  v2 = *&CMesh::GetSkinningDataFields(this) >> 32;
  if ( v2 < 0 )
    return 0;
  v3 = &this->m_pAttributes[v2];
  result = 4;
  if ( v3->m_nSizeFloats <= 4 )
    return v3->m_nSizeFloats;
  return result;
}


// CMesh::HasSkinningData  (line 1844, @0x00000000031c9980, libserver.so)  // inlines: HasSkinningData
// calls: CMesh::GetSkinningDataFields
bool __fastcall CMesh::HasSkinningData(const CMesh *const this)
{
  return CMesh::GetSkinningDataFields(this).m_nBoneIndices >= 0;
}


// AddBoneWeight  (line 1850, @0x00000000031cd000, libserver.so)  // inlines: AddMultipleToTail, InsertMultipleBefore, operator[]
// calls: CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector, CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight
// callers: CMesh::GetMostlyAttachedBone
void __fastcall AddBoneWeight(
        CUtlVector<float,CUtlMemory<float,int> > *const refBoneAttachments,
        int nIndex,
        float a3,
        float flWeight)
{
  __int64 v4; // r12
  int m_Size; // r13d
  __int64 v7; // rax
  float flWeighta; // [rsp+Ch] [rbp-24h]

  v4 = nIndex;
  if ( nIndex >= 0 )
  {
    m_Size = refBoneAttachments->m_Size;
    if ( nIndex >= refBoneAttachments->m_Size )
    {
      if ( nIndex + 1 != m_Size )
      {
        flWeighta = a3;
        CUtlVectorBase<float,CUtlMemory<float,int>>::GrowVector(refBoneAttachments, nIndex + 1 - m_Size);
        CUtlVectorBase<float,CUtlMemory<float,int>>::ShiftElementsRight(refBoneAttachments, m_Size, v4 + 1 - m_Size);
        a3 = flWeighta;
      }
      v7 = m_Size;
      do
        refBoneAttachments->m_Memory.m_pMemory[v7++] = 0.0;
      while ( v7 != m_Size + (v4 - m_Size) + 1 );
    }
    refBoneAttachments->m_Memory.m_pMemory[v4] = a3 + refBoneAttachments->m_Memory.m_pMemory[v4];
  }
}


// CMesh::GetMostlyAttachedBone  (line 1867, @0x00000000031cd0c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMesh::GetSkinningDataFields, AddBoneWeight, CUtlMemory<float, int>::Purge, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase, _Unwind_Resume
int __fastcall CMesh::GetMostlyAttachedBone(const CMesh *const this)
{
  float v2; // xmm1_4
  CMeshVertexAttribute *m_pAttributes; // rcx
  int m_nOffsetFloats; // esi
  CMeshVertexAttribute *v5; // rax
  __int64 v6; // rcx
  int m_nSizeFloats; // edx
  float *m_pVerts; // rax
  int *v9; // r12
  float *v10; // r13
  CUtlVector<float,CUtlMemory<float,int> > arrBoneAttachments; // [rsp+0h] [rbp-40h] BYREF
  __int64 SkinningDataFields; // 0:rax.8

  arrBoneAttachments.m_Size = 0;
  arrBoneAttachments.m_Memory.m_pMemory = 0;
  arrBoneAttachments.m_Memory.m_nAllocationCount = 0;
  arrBoneAttachments.m_Memory.m_nGrowSize = 0;
  SkinningDataFields = CMesh::GetSkinningDataFields(this);
  if ( SkinningDataFields >= 0 )
  {
    m_pAttributes = this->m_pAttributes;
    m_nOffsetFloats = m_pAttributes[SkinningDataFields].m_nOffsetFloats;
    v5 = &m_pAttributes[SkinningDataFields >> 32];
    v6 = v5->m_nOffsetFloats;
    m_nSizeFloats = v5->m_nSizeFloats;
    if ( this->m_nVertexCount > 0 )
    {
      m_pVerts = this->m_pVerts;
      v9 = &this->m_pVerts[v6];
      v10 = &m_pVerts[m_nOffsetFloats];
      if ( m_nSizeFloats > 0 )
      {
        while ( 1 )
          AddBoneWeight(&arrBoneAttachments, *v9, *v10, v2);
      }
    }
  }
  arrBoneAttachments.m_Size = 0;
  CUtlMemory<float,int>::Purge(&arrBoneAttachments.m_Memory);
  if ( (arrBoneAttachments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float,int>::Purge(&arrBoneAttachments.m_Memory);
  return -1;
}


// CMesh::GetBounds  (line 1901, @0x00000000031c99a0, libserver.so)  // inlines: GetVertex, GetVertexPosition, Init, MakeInvalid, operator|=
// calls: AddPointToBounds
AABB_t *__fastcall CMesh::GetBounds(AABB_t *__return_ptr retstr, const CMesh *const this)
{
  Vector *p_m_vMaxBounds; // r14
  int v5; // ebx
  int m_nVertexCount; // eax
  int v7; // edx

  p_m_vMaxBounds = &retstr->m_vMaxBounds;
  v5 = 0;
  m_nVertexCount = this->m_nVertexCount;
  retstr->m_vMinBounds.x = 3.4028235e38;
  retstr->m_vMinBounds.y = 3.4028235e38;
  retstr->m_vMinBounds.z = 3.4028235e38;
  retstr->m_vMaxBounds.x = -3.4028235e38;
  retstr->m_vMaxBounds.y = -3.4028235e38;
  retstr->m_vMaxBounds.z = -3.4028235e38;
  if ( m_nVertexCount > 0 )
  {
    do
    {
      v7 = v5 * this->m_nVertexStrideFloats;
      ++v5;
      AddPointToBounds(&this->m_pVerts[v7], &retstr->m_vMinBounds, p_m_vMaxBounds);
    }
    while ( this->m_nVertexCount > v5 );
  }
  return retstr;
}


// CMesh::HasDeltaData  (line 1913, @0x00000000031c9a30, libserver.so)
// calls: CUtlString::Get, V_stricmp_fast
bool __fastcall CMesh::HasDeltaData(const CMesh *const this, const char *pDeltaName)
{
  int v4; // r12d
  __int64 v5; // rbx
  CMeshVertexAttribute *v6; // rdx
  bool m_bDelta; // r13
  const char *v8; // rax

  v4 = 0;
  v5 = 0;
  if ( this->m_nAttributeCount <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = &this->m_pAttributes[v5];
    m_bDelta = v6->m_bDelta;
    if ( m_bDelta )
    {
      if ( pDeltaName == 0 )
        break;
      v8 = CUtlString::Get(&v6->m_nameDelta);
      if ( V_stricmp_fast(v8, pDeltaName) == 0 )
        break;
    }
    ++v4;
    ++v5;
    if ( this->m_nAttributeCount <= v4 )
      return 0;
  }
  return m_bDelta;
}


// CMesh::GetUsedJoints  (line 1932, @0x00000000031c9ab0, libserver.so)  // inlines: Bitvec_Set, Set
// calls: CMesh::GetSkinningDataFields
bool __fastcall CMesh::GetUsedJoints(CMesh *const this, CVarBitVec *const usedJoints)
{
  CMeshVertexAttribute *m_pAttributes; // rcx
  int v5; // r9d
  CMeshVertexAttribute *v6; // rsi
  int m_nSizeFloats; // edi
  float *v8; // r10
  float *i; // rsi
  int j; // eax
  __int64 v11; // rdx
  __int64 SkinningDataFields; // 0:rax.8

  SkinningDataFields = CMesh::GetSkinningDataFields(this);
  if ( SkinningDataFields < 0 )
    return 0;
  m_pAttributes = this->m_pAttributes;
  v5 = 0;
  v6 = &m_pAttributes[SkinningDataFields >> 32];
  m_nSizeFloats = v6->m_nSizeFloats;
  v8 = &this->m_pVerts[m_pAttributes[SkinningDataFields].m_nOffsetFloats];
  for ( i = &this->m_pVerts[v6->m_nOffsetFloats]; this->m_nVertexCount > v5; ++v5 )
  {
    if ( m_nSizeFloats > 0 )
    {
      for ( j = 0; j != m_nSizeFloats; ++j )
      {
        v11 = j + v5 * this->m_nVertexStrideFloats;
        if ( v8[v11] > 0.0 )
          usedJoints->m_pInt[SLODWORD(i[v11]) >> 5] |= 1 << LODWORD(i[v11]);
      }
    }
  }
  return 1;
}


// CMesh::WriteMeshWireframeToGlViewBuffer  (line 1960, @0x00000000031c9b90, libserver.so)  // inlines: GetVertex, TriangleCount
// calls: CUtlBuffer::Printf, CGlViewBuffer::WriteVertex
// strings: "2\n"
void __fastcall CMesh::WriteMeshWireframeToGlViewBuffer(
        const CMesh *const this,
        CGlViewBuffer *pBuf,
        double a3,
        float flR,
        float flG,
        float flB)
{
  __int64 v6; // r8
  int v7; // r9d
  uint32 *m_pIndices; // rax
  int v11; // r14d
  int v12; // r13d
  int v13; // r12d
  float v14; // xmm3_4
  float v15; // xmm3_4
  float v16; // xmm3_4
  float v17; // xmm3_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  __int64 v20; // [rsp+8h] [rbp-48h]
  int i; // [rsp+10h] [rbp-40h]

  v6 = 0;
  v7 = 0;
  if ( this->m_nIndexCount > 2 )
  {
    do
    {
      m_pIndices = this->m_pIndices;
      i = v7;
      v20 = v6;
      v11 = *(m_pIndices + v6);
      v12 = *(m_pIndices + v6 + 4);
      v13 = *(m_pIndices + v6 + 8);
      CUtlBuffer::Printf(pBuf, "2\n");
      CGlViewBuffer::WriteVertex(pBuf, &this->m_pVerts[v11 * this->m_nVertexStrideFloats], flR, flG, v14);
      CGlViewBuffer::WriteVertex(pBuf, &this->m_pVerts[v12 * this->m_nVertexStrideFloats], flR, flG, v15);
      CUtlBuffer::Printf(pBuf, "2\n");
      CGlViewBuffer::WriteVertex(pBuf, &this->m_pVerts[this->m_nVertexStrideFloats * v12], flR, flG, v16);
      CGlViewBuffer::WriteVertex(pBuf, &this->m_pVerts[v13 * this->m_nVertexStrideFloats], flR, flG, v17);
      CUtlBuffer::Printf(pBuf, "2\n");
      CGlViewBuffer::WriteVertex(pBuf, &this->m_pVerts[this->m_nVertexStrideFloats * v13], flR, flG, v18);
      CGlViewBuffer::WriteVertex(pBuf, &this->m_pVerts[this->m_nVertexStrideFloats * v11], flR, flG, v19);
      v7 = i + 1;
      v6 = v20 + 12;
    }
    while ( i + 1 < this->m_nIndexCount / 3 );
  }
}


// CMesh::GetDeltaNames  (line 1982, @0x00000000031cdcf0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[]
// calls: CUtlString::operator==, CUtlString::Get, CUtlString::Set, CUtlMemory<CUtlString, int>::Grow
void __fastcall CMesh::GetDeltaNames(
        CMesh *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const deltaNames)
{
  int v2; // ecx
  __int64 v5; // r12
  int v6; // ebx
  CMeshVertexAttribute *m_pAttributes; // rax
  CMeshVertexAttribute *v8; // r13
  bool v9; // al
  __int64 m_Size; // rax
  int v11; // ecx
  CUtlString *v12; // r8
  const char *v13; // rax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-40h]
  int nLast; // [rsp+8h] [rbp-38h]
  CUtlString *nLasta; // [rsp+8h] [rbp-38h]
  int nLastb; // [rsp+8h] [rbp-38h]

  v2 = -1;
  v5 = 0;
  v6 = 0;
  p_m_Memory = &deltaNames->m_Memory;
  if ( this->m_nAttributeCount > 0 )
  {
    while ( 1 )
    {
      m_pAttributes = this->m_pAttributes;
      v8 = &m_pAttributes[v5];
      if ( m_pAttributes[v5].m_bDelta )
      {
        if ( v2 == -1 )
          goto LABEL_6;
        nLast = v2;
        v9 = CUtlString::operator==(&v8->m_nameDelta, &m_pAttributes[v2].m_nameDelta);
        v2 = nLast;
        if ( !v9 )
          break;
      }
LABEL_10:
      ++v6;
      ++v5;
      if ( this->m_nAttributeCount <= v6 )
        return;
    }
    v8 = &this->m_pAttributes[v5];
LABEL_6:
    m_Size = deltaNames->m_Size;
    if ( m_Size == deltaNames->m_Memory.m_nAllocationCount )
    {
      nLastb = deltaNames->m_Size;
      CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
      v11 = deltaNames->m_Size;
      m_Size = nLastb;
    }
    else
    {
      v11 = deltaNames->m_Size;
    }
    deltaNames->m_Size = v11 + 1;
    v12 = &deltaNames->m_Memory.m_pMemory[m_Size];
    v2 = v6;
    if ( v12 != 0 )
    {
      v12->m_pString = 0;
      nLasta = v12;
      v13 = CUtlString::Get(&v8->m_nameDelta);
      CUtlString::Set(nLasta, v13);
      v2 = v6;
    }
    goto LABEL_10;
  }
}


// DuplicateMesh  (line 2001, @0x00000000031c9d50, libserver.so)  // inlines: V_memcpy, memcpy, operator=
// calls: CMesh::AllocateMesh, memcpy
void __fastcall DuplicateMesh(CMesh *pMeshOut, const CMesh *const inputMesh)
{
  CMesh::AllocateMesh(
    pMeshOut,
    inputMesh->m_nVertexCount,
    inputMesh->m_nIndexCount,
    inputMesh->m_nVertexStrideFloats,
    inputMesh->m_pAttributes,
    inputMesh->m_nAttributeCount);
  memcpy(pMeshOut->m_pVerts, inputMesh->m_pVerts, 4LL * inputMesh->m_nVertexStrideFloats * inputMesh->m_nVertexCount);
  memcpy(pMeshOut->m_pIndices, inputMesh->m_pIndices, 4LL * inputMesh->m_nIndexCount);
  memcpy(pMeshOut->m_materialName, inputMesh->m_materialName, sizeof(pMeshOut->m_materialName));
  pMeshOut->m_bNoCollapse = inputMesh->m_bNoCollapse;
  pMeshOut->m_bUseTintColor = inputMesh->m_bUseTintColor;
  pMeshOut->m_vTintColor = inputMesh->m_vTintColor;
  pMeshOut->m_pSourceDmeMesh = inputMesh->m_pSourceDmeMesh;
}


// RationalizeUVsInPlace  (line 2017, @0x00000000031c9e30, libserver.so)
// calls: CMesh::FindFirstAttributeOffset, floorf
// callers: RationalizeUVs, TessellateOnWrappedUV
bool __fastcall RationalizeUVsInPlace(CMesh *pMesh)
{
  int FirstAttributeOffset; // eax
  __int64 v3; // rcx
  int m_nVertexCount; // esi
  float *m_pVerts; // rbx
  __int64 m_nVertexStrideFloats; // rdx
  __int64 v8; // rcx
  int v9; // r12d
  __int64 v10; // rsi
  float v11; // xmm0_4
  float *v12; // r14
  __int64 v13; // r8
  float *v14; // rax
  int v15; // edx
  float v16; // xmm1_4
  float *v17; // r9
  float *v18; // r13
  float v19; // xmm0_4
  int v20; // eax
  int v21; // eax
  int nFaces; // [rsp+4h] [rbp-4Ch]
  __int64 v23; // [rsp+8h] [rbp-48h]
  __int64 v24; // [rsp+10h] [rbp-40h]
  float vMinFloor; // [rsp+18h] [rbp-38h]
  float vMinFloor_4; // [rsp+1Ch] [rbp-34h]

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(pMesh, "tex", 2);
  v3 = FirstAttributeOffset;
  if ( FirstAttributeOffset < 0 )
  {
    v21 = CMesh::FindFirstAttributeOffset(pMesh, "tex", 3);
    v3 = v21;
    if ( v21 < 0 )
      return 0;
  }
  m_nVertexCount = pMesh->m_nVertexCount;
  if ( m_nVertexCount != pMesh->m_nIndexCount )
    return 0;
  m_pVerts = pMesh->m_pVerts;
  nFaces = m_nVertexCount / 3;
  if ( m_nVertexCount / 3 > 0 )
  {
    m_nVertexStrideFloats = pMesh->m_nVertexStrideFloats;
    v8 = 4 * v3;
    v9 = 0;
    v10 = v8 + 4;
    while ( 1 )
    {
      v11 = 3.4028235e38;
      v12 = (m_pVerts + v8);
      v13 = 4 * m_nVertexStrideFloats;
      v14 = (m_pVerts + v8);
      v15 = 3;
      v16 = 3.4028235e38;
      do
      {
        v17 = v14;
        v11 = fminf(v11, *v14);
        v14 = (v14 + v13);
        --v15;
        v16 = fminf(v16, *(v17 + v10 - v8));
      }
      while ( v15 != 0 );
      v23 = v10;
      v24 = v8;
      v18 = &m_pVerts[(3 * v13) / 4];
      vMinFloor = v16;
      vMinFloor_4 = floorf(v11);
      v19 = floorf(vMinFloor);
      v10 = v23;
      v20 = 3;
      v8 = v24;
      while ( 1 )
      {
        --v20;
        *v12 = *v12 - vMinFloor_4;
        *(m_pVerts + v23) = *(m_pVerts + v23) - v19;
        m_nVertexStrideFloats = pMesh->m_nVertexStrideFloats;
        m_pVerts += m_nVertexStrideFloats;
        if ( v20 == 0 )
          break;
        v12 = (m_pVerts + v24);
      }
      if ( ++v9 == nFaces )
        break;
      m_pVerts = v18;
    }
  }
  return 1;
}


// RationalizeUVs  (line 2072, @0x00000000031ca050, libserver.so)
// calls: DeIndexMesh, RationalizeUVsInPlace, CMesh::AllocateMesh
bool __fastcall RationalizeUVs(CMesh *pRationalMeshOut, const CMesh *const inputMesh)
{
  int m_nVertexCount; // eax

  m_nVertexCount = inputMesh->m_nVertexCount;
  if ( m_nVertexCount == inputMesh->m_nIndexCount )
    CMesh::AllocateMesh(
      pRationalMeshOut,
      m_nVertexCount,
      m_nVertexCount,
      inputMesh->m_nVertexStrideFloats,
      inputMesh->m_pAttributes,
      inputMesh->m_nAttributeCount);
  else
    DeIndexMesh(pRationalMeshOut, inputMesh);
  return RationalizeUVsInPlace(pRationalMeshOut);
}


// DeIndexMesh  (line 2090, @0x00000000031c9fc0, libserver.so)  // inlines: GetVertex
// calls: CMesh::AllocateMesh, CopyVertex
// callers: RationalizeUVs
void __fastcall DeIndexMesh(CMesh *pMeshOut, const CMesh *const inputMesh)
{
  __int64 v3; // r13
  int v4; // r12d
  float *m_pVerts; // r14

  v3 = 0;
  v4 = 0;
  CMesh::AllocateMesh(
    pMeshOut,
    inputMesh->m_nIndexCount,
    inputMesh->m_nIndexCount,
    inputMesh->m_nVertexStrideFloats,
    inputMesh->m_pAttributes,
    inputMesh->m_nAttributeCount);
  m_pVerts = pMeshOut->m_pVerts;
  if ( inputMesh->m_nIndexCount > 0 )
  {
    do
    {
      CopyVertex(
        m_pVerts,
        &inputMesh->m_pVerts[inputMesh->m_nVertexStrideFloats * inputMesh->m_pIndices[v3]],
        inputMesh->m_nVertexStrideFloats);
      m_pVerts += inputMesh->m_nVertexStrideFloats;
      pMeshOut->m_pIndices[v3++] = v4++;
    }
    while ( inputMesh->m_nIndexCount > v4 );
  }
}


// DeIndexMesh  (line 2105, @0x00000000031ca0b0, libserver.so)  // inlines: GetVertex, V_memcpy, memcpy
// calls: operator new [], CopyVertex, operator delete [], memcpy
void __fastcall DeIndexMesh(CMesh *pMeshInOut, int *pIndices, int nIndices)
{
  int m_nVertexStrideFloats; // eax
  size_t v6; // rdi
  unsigned __int64 v7; // rax
  int v8; // edx
  float *v9; // r14
  int *v10; // rbx
  int v11; // edi
  uint32 *m_pIndices; // rdi
  size_t v13; // rdi
  uint32 *v14; // rax
  float *pOutVerts; // [rsp+8h] [rbp-38h]

  m_nVertexStrideFloats = pMeshInOut->m_nVertexStrideFloats;
  v6 = -1;
  v7 = nIndices * m_nVertexStrideFloats;
  if ( v7 <= 0x1FC0000000000000LL )
    v6 = 4 * v7;
  pOutVerts = operator new[](v6);
  if ( nIndices > 0 )
  {
    v8 = pMeshInOut->m_nVertexStrideFloats;
    v9 = pOutVerts;
    v10 = pIndices;
    do
    {
      v11 = *v10++;
      CopyVertex(v9, &pMeshInOut->m_pVerts[v8 * v11], v8);
      v8 = pMeshInOut->m_nVertexStrideFloats;
      v9 += v8;
    }
    while ( v10 != &pIndices[nIndices - 1 + 1] );
  }
  if ( pMeshInOut->m_pVerts != 0 )
    operator delete[](pMeshInOut->m_pVerts);
  m_pIndices = pMeshInOut->m_pIndices;
  pMeshInOut->m_nVertexCount = nIndices;
  pMeshInOut->m_pVerts = pOutVerts;
  if ( m_pIndices != 0 )
    operator delete[](m_pIndices);
  v13 = 4LL * nIndices;
  if ( nIndices > 0x1FC0000000000000LL )
    v13 = -1;
  v14 = operator new[](v13);
  pMeshInOut->m_pIndices = v14;
  memcpy(v14, pIndices, 4LL * nIndices);
  pMeshInOut->m_nIndexCount = nIndices;
}


// BuildAttributeMapping  (line 2134, @0x00000000031cbf80, libserver.so)
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue, CUtlString::Get, V_stricmp_fast
// callers: ConcatMeshes
bool __fastcall BuildAttributeMapping(
        CMeshVertexAttribute *pAttributeSetA,
        int nNumAttributesA,
        CMeshVertexAttribute *pAttributeSetB,
        int nNumAttributesB,
        CUtlVector<int,CUtlMemory<int,int> > *pOutAttributeMapping)
{
  CMeshVertexAttribute *v9; // r13
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  CMeshVertexAttribute *v12; // rbx
  int v13; // r12d
  int v14; // r9d
  const char *v15; // rax
  int v16; // eax
  __int64 v19; // [rsp+10h] [rbp-60h]
  const char *v20; // [rsp+18h] [rbp-58h]
  int v21; // [rsp+20h] [rbp-50h]
  char bFoundAllAttributes; // [rsp+27h] [rbp-49h]
  int src[13]; // [rsp+3Ch] [rbp-34h] BYREF

  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(pOutAttributeMapping, nNumAttributesA);
  src[0] = -1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::FillWithValue(pOutAttributeMapping, src);
  if ( nNumAttributesA <= 0 )
    return 1;
  v9 = pAttributeSetA;
  v10 = 0;
  v11 = 4LL * (nNumAttributesA - 1) + 4;
  bFoundAllAttributes = 1;
  do
  {
    if ( nNumAttributesB <= 0 )
      goto LABEL_13;
    v12 = pAttributeSetB;
    v13 = 0;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        if ( v9->m_nSizeFloats == v12->m_nSizeFloats && v9->m_nSemanticIndex == v12->m_nSemanticIndex )
        {
          v19 = v11;
          v21 = v14;
          v20 = CUtlString::Get(&v12->m_name);
          v15 = CUtlString::Get(&v9->m_name);
          v16 = V_stricmp_fast(v15, v20);
          v14 = v21;
          v11 = v19;
          if ( v16 == 0 )
            break;
        }
        ++v13;
        ++v12;
        if ( v13 == nNumAttributesB )
          goto LABEL_10;
      }
      ++v12;
      v14 = 1;
      pOutAttributeMapping->m_Memory.m_pMemory[v10 / 4] = v13++;
    }
    while ( v13 != nNumAttributesB );
LABEL_10:
    if ( v14 == 0 )
LABEL_13:
      bFoundAllAttributes = 0;
    v10 += 4LL;
    ++v9;
  }
  while ( v10 != v11 );
  return bFoundAllAttributes;
}


// CopyVertex  (line 2172, @0x00000000031ca1c0, libserver.so)
// callers: ConcatMeshes
void __fastcall CopyVertex(
        float *pOut,
        const float *pIn,
        const CMeshVertexAttribute *pOutAttributes,
        const CMeshVertexAttribute *pInAttruibutes,
        const CUtlVector<int,CUtlMemory<int,int> > *const attributeMap)
{
  unsigned __int64 v5; // r11
  __int64 v6; // rbx
  const CMeshVertexAttribute *v7; // r10
  int i; // eax
  float v9; // xmm0_4
  int v10; // r9d

  if ( attributeMap->m_Size > 0 )
  {
    v5 = 0;
    v6 = 4LL * (attributeMap->m_Size - 1) + 4;
    do
    {
      v7 = &pInAttruibutes[attributeMap->m_Memory.m_pMemory[v5 / 4]];
      for ( i = 0; pOutAttributes->m_nSizeFloats > i; pOut[v10] = v9 )
      {
        v9 = pIn[i + v7->m_nOffsetFloats];
        v10 = i + pOutAttributes->m_nOffsetFloats;
        ++i;
      }
      v5 += 4LL;
      ++pOutAttributes;
    }
    while ( v5 != v6 );
  }
}


// ConcatMeshes  (line 2197, @0x00000000031cf990, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlVector<int> >, Element, GetVertex, Purge, RemoveAll, V_strcpy_safe<260ul>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::SetCount, BuildAttributeMapping, CMesh::AllocateMesh, _V_strncpy, CopyVertex, Warning, CUtlMemory<int, int>::Purge, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge, CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Trying to concatenate meshes with incompatible attribute sets!\n", "Trying to concatenate meshes with different numbers of attributes!\n"
bool __fastcall ConcatMeshes(
        CMesh *pMeshOut,
        CMesh **ppMeshIn,
        int nInputMeshes,
        CMeshVertexAttribute *pAttributeOverride,
        int nAttributeOverrideCount)
{
  CMesh **v6; // rax
  CMesh *v7; // rdx
  CMeshVertexAttribute *v8; // rdx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // r12
  int v12; // r15d
  int v13; // r14d
  CMesh *v14; // rax
  int v15; // r14d
  CMesh *v16; // r15
  int v17; // r12d
  const float *v18; // rsi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rdx
  uint32 *v22; // rax
  uint32 v23; // r10d
  int m_Size; // r12d
  __int64 i; // r13
  char *v27; // rbx
  bool v28; // zf
  int nStrideFloats; // [rsp+8h] [rbp-78h]
  int nCurrentIndex; // [rsp+Ch] [rbp-74h]
  int nAttributes; // [rsp+10h] [rbp-70h]
  __int64 nAttributesa; // [rsp+10h] [rbp-70h]
  bool v34; // [rsp+23h] [rbp-5Dh]
  CMeshVertexAttribute *pAttributes; // [rsp+28h] [rbp-58h]
  CUtlVector<CUtlVector<int,CUtlMemory<int,int> >,CUtlMemory<CUtlVector<int,CUtlMemory<int,int> >,int> > attributeMappingTables; // [rsp+30h] [rbp-50h] BYREF

  pAttributes = pAttributeOverride;
  nAttributes = nAttributeOverrideCount;
  if ( ppMeshIn == 0 || nInputMeshes <= 0 )
    return 0;
  v34 = nAttributeOverrideCount > 0 && pAttributeOverride != 0;
  if ( v34 )
  {
    v8 = pAttributeOverride;
    v9 = 0;
    v10 = 0;
    do
    {
      ++v9;
      v10 += v8->m_nSizeFloats;
      ++v8;
    }
    while ( nAttributeOverrideCount > v9 );
    nStrideFloats = v10;
  }
  else
  {
    pAttributes = (*ppMeshIn)->m_pAttributes;
    nStrideFloats = (*ppMeshIn)->m_nVertexStrideFloats;
    if ( nInputMeshes == 1 )
    {
      nAttributes = (*ppMeshIn)->m_nAttributeCount;
    }
    else
    {
      nAttributes = ppMeshIn[1]->m_nAttributeCount;
      if ( nAttributes != (*ppMeshIn)->m_nAttributeCount )
      {
LABEL_37:
        Warning("Trying to concatenate meshes with different numbers of attributes!\n");
        return v34;
      }
      v6 = ppMeshIn + 2;
      while ( v6 != &ppMeshIn[(nInputMeshes - 2) + 2] )
      {
        v7 = *v6++;
        if ( v7->m_nAttributeCount != nAttributes )
          goto LABEL_37;
      }
    }
  }
  attributeMappingTables.m_Size = 0;
  attributeMappingTables.m_Memory.m_pMemory = 0;
  attributeMappingTables.m_Memory.m_nAllocationCount = 0;
  attributeMappingTables.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CUtlVector<int,CUtlMemory<int,int>>,CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>>::SetCount(
    &attributeMappingTables,
    nInputMeshes);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = ppMeshIn[v11];
    v13 += v14->m_nIndexCount;
    v12 += v14->m_nVertexCount;
    v34 = BuildAttributeMapping(
            pAttributes,
            nAttributes,
            v14->m_pAttributes,
            v14->m_nAttributeCount,
            &attributeMappingTables.m_Memory.m_pMemory[v11]);
    if ( !v34 )
    {
      Warning("Trying to concatenate meshes with incompatible attribute sets!\n");
      goto LABEL_28;
    }
    ++v11;
  }
  while ( nInputMeshes > v11 );
  CMesh::AllocateMesh(pMeshOut, v12, v13, nStrideFloats, pAttributes, nAttributes);
  _V_strncpy(pMeshOut->m_materialName, (*ppMeshIn)->m_materialName, 260);
  nAttributesa = 0;
  v15 = 0;
  for ( nCurrentIndex = 0; ; nCurrentIndex = v20 )
  {
    v16 = ppMeshIn[nAttributesa];
    if ( v16->m_nVertexCount > 0 )
    {
      v17 = 0;
      do
      {
        v18 = &v16->m_pVerts[v17 * v16->m_nVertexStrideFloats];
        v19 = v17 + v15;
        ++v17;
        CopyVertex(
          &pMeshOut->m_pVerts[pMeshOut->m_nVertexStrideFloats * v19],
          v18,
          pAttributes,
          v16->m_pAttributes,
          &attributeMappingTables.m_Memory.m_pMemory[nAttributesa]);
      }
      while ( v16->m_nVertexCount > v17 );
    }
    v20 = nCurrentIndex;
    if ( v16->m_nIndexCount > 0 )
    {
      v21 = 0;
      v20 = nCurrentIndex;
      do
      {
        ++v20;
        v22 = &pMeshOut->m_pIndices[v21];
        v23 = v16->m_pIndices[v21++];
        v22[nCurrentIndex] = v15 + v23;
      }
      while ( v16->m_nIndexCount > v20 - nCurrentIndex );
    }
    ++nAttributesa;
    v15 += v16->m_nVertexCount;
    if ( nInputMeshes <= nAttributesa )
      break;
  }
LABEL_28:
  m_Size = attributeMappingTables.m_Size;
  for ( i = 24LL * attributeMappingTables.m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v27 = attributeMappingTables.m_Memory.m_pMemory + i;
    v28 = (*(&attributeMappingTables.m_Memory.m_pMemory->m_Memory.m_nGrowSize + i) & 0xC0000000) == 0;
    *(&attributeMappingTables.m_Memory.m_pMemory->CUtlVectorBase<CUtlVector<int,CUtlMemory<int,int> >,CUtlMemory<CUtlVector<int,CUtlMemory<int,int> >,int> >::m_Size
    + i) = 0;
    if ( v28 )
    {
      CUtlMemory<int,int>::Purge((v27 + 8));
      if ( (*(v27 + 5) & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge((v27 + 8));
    }
  }
  attributeMappingTables.m_Size = 0;
  if ( (attributeMappingTables.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&attributeMappingTables.m_Memory);
    if ( (attributeMappingTables.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&attributeMappingTables.m_Memory);
  }
  return v34;
}


// NormalizeBlendWeightsAndIndicesBetweenMeshes  (line 2283, @0x00000000031ca240, libserver.so)
// calls: CMesh::FindFirstAttribute, CMesh::SetBlendWeightAndIndexCount
// strings: "blendindices", "blendweights"
void __fastcall NormalizeBlendWeightsAndIndicesBetweenMeshes(CMesh **pMeshList, int nMeshes)
{
  CMesh **v2; // r15
  CMesh **v3; // r14
  CMesh **v4; // r12
  int m_nSizeFloats; // ebx
  CMeshVertexAttribute *FirstAttribute; // r13
  CMeshVertexAttribute *v7; // rax
  int v8; // eax
  CMesh *v9; // rdi

  if ( nMeshes > 0 )
  {
    v2 = pMeshList;
    v3 = &pMeshList[(nMeshes - 1) + 1];
    v4 = pMeshList;
    m_nSizeFloats = 0;
    do
    {
      FirstAttribute = CMesh::FindFirstAttribute(*v4, "blendindices", 0);
      v7 = CMesh::FindFirstAttribute(*v4, "blendweights", 0);
      if ( FirstAttribute != 0 && m_nSizeFloats < FirstAttribute->m_nSizeFloats )
        m_nSizeFloats = FirstAttribute->m_nSizeFloats;
      if ( v7 != 0 )
      {
        v8 = v7->m_nSizeFloats;
        if ( m_nSizeFloats < v8 )
          m_nSizeFloats = v8;
      }
      ++v4;
    }
    while ( v4 != v3 );
    if ( m_nSizeFloats != 0 )
    {
      do
      {
        v9 = *v2++;
        CMesh::SetBlendWeightAndIndexCount(v9, m_nSizeFloats, 0);
      }
      while ( v2 != v3 );
    }
  }
}


// TessellateTriangle  (line 2310, @0x00000000031ca2f0, libserver.so)
// calls: operator new [], LerpVertex, operator delete [], CUtlBuffer::Put
// callers: TessellateOnWrappedUV
// globals: TessellateTriangle(CUtlBuffer *,float const**,int,int)::pCornerTable
void __fastcall TessellateTriangle(
        CUtlBuffer *pOutTriangles,
        const float **ppVertsIn,
        int nTexcoordOffset,
        int nVertexStride)
{
  int v4; // r15d
  int v5; // r11d
  __int64 v8; // rcx
  __m128 v9; // xmm4
  __int64 v10; // rdi
  __int64 v11; // r10
  __m128 i; // xmm2
  int v13; // r9d
  const float *v14; // rax
  const float *v15; // rdx
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  int v20; // eax
  float *v21; // rax
  int v22; // r9d
  size_t v23; // rdi
  float *v24; // r12
  float *v25; // r13
  const float **v26; // r15
  const float **v27; // r14
  const float *v28; // rdx
  const float *v29; // rax
  __m128 v30; // xmm4
  int v31; // ebx
  int nLongestEdge; // [rsp+8h] [rbp-A8h]
  int nLongestEdgea; // [rsp+8h] [rbp-A8h]
  const float **nLongestEdgeb; // [rsp+8h] [rbp-A8h]
  int nCornerVertex; // [rsp+18h] [rbp-98h]
  const float *pVerts0[3]; // [rsp+20h] [rbp-90h] BYREF
  const float *pVerts1[3]; // [rsp+40h] [rbp-70h] BYREF
  const float *pVerts2[3]; // [rsp+60h] [rbp-50h] BYREF

  v4 = -1;
  v5 = -1;
  v8 = 0;
  v9 = 0xBF800000;
  v10 = nTexcoordOffset;
  v11 = v10 * 4 + 4;
  for ( i = 0xBF800000; ; i = v19 )
  {
    v13 = v8;
    v14 = ppVertsIn[v8];
    v15 = ppVertsIn[(v8 + 1) % 3];
    v16 = LODWORD(v15[v10]);
    v17 = *(v15 + v11);
    v16.m128_f32[0] = v16.m128_f32[0] - v14[v10];
    v17.m128_f32[0] = v17.m128_f32[0] - *(v14 + v11);
    v18 = _mm_and_ps(v16, 0x7FFFFFFFu);
    v19 = _mm_and_ps(v17, 0x7FFFFFFFu);
    if ( v18.m128_f32[0] > i.m128_f32[0] )
    {
      v4 = v8;
    }
    else if ( v18.m128_f32[0] > v9.m128_f32[0] )
    {
      v30 = v18;
      v4 = v5;
      v18 = i;
      v5 = v8;
      i = v30;
    }
    else
    {
      v20 = v4;
      v18 = i;
      v4 = v5;
      i = v9;
      v5 = v20;
    }
    if ( v19.m128_f32[0] <= v18.m128_f32[0] )
    {
      if ( v19.m128_f32[0] > i.m128_f32[0] )
      {
        i = v19;
        v13 = v4;
        v19 = v18;
        v4 = v8;
      }
      else
      {
        v13 = v4;
        v19 = v18;
        v4 = v5;
      }
      v18 = i;
    }
    if ( ++v8 == 3 )
      break;
    v5 = v13;
    v9 = v18;
  }
  if ( v19.m128_f32[0] <= 1.0 )
  {
    v31 = 4 * nVertexStride;
    CUtlBuffer::Put(pOutTriangles, *ppVertsIn, v31);
    CUtlBuffer::Put(pOutTriangles, ppVertsIn[1], v31);
    CUtlBuffer::Put(pOutTriangles, ppVertsIn[2], v31);
  }
  else
  {
    nLongestEdge = v13;
    if ( nVertexStride <= 0x1FC0000000000000LL )
    {
      v21 = operator new[](4LL * nVertexStride);
      v23 = 4LL * nVertexStride;
      v22 = nLongestEdge;
    }
    else
    {
      v21 = operator new[](0xFFFFFFFFFFFFFFFFLL);
      v22 = nLongestEdge;
      v23 = -1;
    }
    v24 = v21;
    nLongestEdgea = v22;
    v25 = operator new[](v23);
    nCornerVertex = TessellateTriangle(CUtlBuffer *,float const**,int,int)::pCornerTable[nLongestEdgea][v4];
    v26 = &ppVertsIn[(nCornerVertex + 1) % 3];
    nLongestEdgeb = &ppVertsIn[nCornerVertex];
    LerpVertex(v24, *nLongestEdgeb, *v26, 0.5, nVertexStride);
    v27 = &ppVertsIn[(nCornerVertex + 2) % 3];
    LerpVertex(v25, *v27, *nLongestEdgeb, 0.5, nVertexStride);
    pVerts0[2] = v25;
    pVerts0[1] = v24;
    pVerts0[0] = *nLongestEdgeb;
    TessellateTriangle(pOutTriangles, pVerts0, nTexcoordOffset, nVertexStride);
    v28 = *v26;
    pVerts1[0] = v24;
    pVerts1[1] = v28;
    pVerts1[2] = *v27;
    TessellateTriangle(pOutTriangles, pVerts1, nTexcoordOffset, nVertexStride);
    v29 = *v27;
    pVerts2[0] = v24;
    pVerts2[2] = v25;
    pVerts2[1] = v29;
    TessellateTriangle(pOutTriangles, pVerts2, nTexcoordOffset, nVertexStride);
    if ( v24 != 0 )
      operator delete[](v24);
    if ( v25 != 0 )
      operator delete[](v25);
  }
}


// TessellateOnWrappedUV  (line 2408, @0x00000000031cade0, libserver.so)  // inlines: GetVertex, V_memcpy, memcpy, ~CUtlBuffer, ~CUtlMemory
// calls: CMesh::FindFirstAttributeOffset, CUtlBuffer::CUtlBuffer, TessellateTriangle, CMesh::AllocateMesh, memcpy, RationalizeUVsInPlace, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
bool __fastcall TessellateOnWrappedUV(CMesh *pMeshOut, const CMesh *const inputMesh)
{
  int FirstAttributeOffset; // r14d
  __int64 v5; // rbx
  int v6; // r13d
  uint32 *m_pIndices; // rdx
  int m_nVertexStrideFloats; // ecx
  float *m_pVerts; // rax
  int v10; // ecx
  unsigned __int64 v11; // r13
  __int64 i; // rax
  bool ppVertsIn; // [rsp+0h] [rbp-B0h]
  const float *pVerts[3]; // [rsp+10h] [rbp-A0h] BYREF
  CUtlBuffer triangleBuffer; // [rsp+30h] [rbp-80h] BYREF

  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(inputMesh, "tex", 2);
  if ( FirstAttributeOffset < 0 )
  {
    FirstAttributeOffset = CMesh::FindFirstAttributeOffset(inputMesh, "tex", 3);
    if ( FirstAttributeOffset < 0 )
      return 0;
  }
  CUtlBuffer::CUtlBuffer(&triangleBuffer, 0, 0, 0);
  if ( inputMesh->m_nIndexCount > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      m_pIndices = inputMesh->m_pIndices;
      m_nVertexStrideFloats = inputMesh->m_nVertexStrideFloats;
      m_pVerts = inputMesh->m_pVerts;
      pVerts[0] = &inputMesh->m_pVerts[m_nVertexStrideFloats * m_pIndices[v5]];
      pVerts[1] = &m_pVerts[m_nVertexStrideFloats * m_pIndices[v5 + 1]];
      pVerts[2] = &m_pVerts[m_nVertexStrideFloats * m_pIndices[v5 + 2]];
      TessellateTriangle(&triangleBuffer, pVerts, FirstAttributeOffset, m_nVertexStrideFloats);
      v6 += 3;
      v5 += 3;
    }
    while ( inputMesh->m_nIndexCount > v6 );
  }
  v10 = inputMesh->m_nVertexStrideFloats;
  v11 = triangleBuffer.m_Put / (4LL * v10);
  CMesh::AllocateMesh(pMeshOut, v11, v11, v10, inputMesh->m_pAttributes, inputMesh->m_nAttributeCount);
  if ( triangleBuffer.m_Put < 0 )
    __debugbreak();
  memcpy(pMeshOut->m_pVerts, triangleBuffer.m_Memory.m_pMemory, triangleBuffer.m_Put);
  for ( i = 0; v11 > i; ++i )
    pMeshOut->m_pIndices[i] = i;
  ppVertsIn = RationalizeUVsInPlace(pMeshOut);
  CUtlMemory<unsigned char,int>::Purge(&triangleBuffer.m_Memory);
  return ppVertsIn;
}


// VertexMatches  (line 2446, @0x00000000031ca640, libserver.so)  // inlines: V_memcmp
// calls: memcmp
// callers: WeldVertices
bool __fastcall VertexMatches(const float *pV0, const float *pV1, const float *pEpsilons, int nEpsilons)
{
  const float *v4; // r14
  const float *v7; // rbx
  float v8; // xmm1_4

  if ( nEpsilons <= 0 )
    return 1;
  v4 = &pEpsilons[nEpsilons - 1 + 1];
  v7 = pEpsilons;
  do
  {
    v8 = *v7;
    if ( v8 == 0.0 )
    {
      if ( memcmp(pV0, pV1, 4u) != 0 )
        return 0;
    }
    else if ( fabs(*pV0 - *pV1) > v8 )
    {
      return 0;
    }
    ++v7;
    ++pV0;
    ++pV1;
  }
  while ( v7 != v4 );
  return 1;
}


// WeldVertices  (line 2475, @0x00000000031d0c60, libserver.so)  // inlines: AddToTail, CUtlBlockMemory, CUtlBlockVector, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CVertexKDTree, ConvertToExternalMemory, CopyConstruct<float const*>, Element, FillWithValue, GetVertex, GrowMemory, Init, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, operator[], ~CUtlBlockMemory, ~CUtlBlockVector, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVertexKDTree
// calls: CUtlBlockMemory<float const*, int>::Purge, CVertexKDTree::BuildMidpoint, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount, CVertexKDTree::FindVertsInBox, VertexMatches, CMesh::AllocateMesh, CopyVertex, CUtlMemory<float const*, int>::Purge, CUtlMemory<CVertexKDNode, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<float const*, int>::Grow, __stack_chk_fail (15 total)
// callers: ApplyStandardWeldAndClean
bool __fastcall WeldVertices(CMesh *pMeshOut, const CMesh *const inputMesh, float *pEpsilons, int nEpsilons)
{
  const CMesh *v4; // r12
  bool result; // al
  int m_nVertexCount; // esi
  __int64 v9; // rdx
  int i; // eax
  int v11; // r8d
  unsigned __int64 v12; // rbx
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float *v16; // r13
  vec_t v17; // xmm3_4
  vec_t v18; // xmm2_4
  vec_t v19; // xmm1_4
  const float *v20; // r14
  const CMesh *v21; // r15
  const float **v22; // r13
  const float **v23; // r12
  int m_nVertexStrideFloats; // ecx
  unsigned int v25; // ebx
  unsigned int v26; // edx
  int m_Size; // eax
  const float **v28; // rax
  int v29; // r13d
  __int64 j; // rbx
  __int64 v31; // rax
  int k; // edx
  uint32 m_nGrowSize; // edx
  uint32 v34; // eax
  CMesh *v35; // [rsp+30h] [rbp-310h]
  unsigned __int64 v36; // [rsp+38h] [rbp-308h]
  const float **v37; // [rsp+40h] [rbp-300h]
  float *v38; // [rsp+48h] [rbp-2F8h]
  unsigned int *m_pMemory; // [rsp+50h] [rbp-2F0h]
  int v40; // [rsp+50h] [rbp-2F0h]
  unsigned __int64 v41; // [rsp+58h] [rbp-2E8h]
  Vector mins; // [rsp+60h] [rbp-2E0h] BYREF
  Vector maxs; // [rsp+70h] [rbp-2D0h] BYREF
  CUtlVector<float const*,CUtlMemory<float const*,int> > inOrderVertices; // [rsp+80h] [rbp-2C0h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > remapTable; // [rsp+A0h] [rbp-2A0h] BYREF
  CVertexKDTree searchTree; // [rsp+C0h] [rbp-280h] BYREF
  CUtlVectorFixedGrowable<float const*,64ul> list; // [rsp+F0h] [rbp-250h] BYREF
  unsigned __int64 v48; // [rsp+308h] [rbp-38h]

  v4 = inputMesh;
  v48 = __readfsqword(0x28u);
  result = 0;
  if ( inputMesh->m_nVertexStrideFloats != nEpsilons )
    return result;
  searchTree.m_tree.m_Size = 0;
  memset(&searchTree.m_tree.m_Memory, 0, 20);
  *(&searchTree.m_vertexList.m_Memory + 3) &= 0xF8000000;
  *(&searchTree.m_vertexList.m_Memory + 15) = 0;
  searchTree.m_vertexList.m_Memory.m_pMemory = 0;
  searchTree.m_vertexList.m_Memory.m_nBlocks = 0;
  CUtlBlockMemory<float const*,int>::Purge(&searchTree.m_vertexList.m_Memory);
  *(&searchTree.m_vertexList.m_Memory + 3) = *(&searchTree.m_vertexList.m_Memory + 3) & 0xF8000000 | 0xF;
  *(&searchTree.m_vertexList.m_Memory + 15) = 32;
  CVertexKDTree::BuildMidpoint(&searchTree, v4->m_pVerts, v4->m_nVertexCount, v4->m_nVertexStrideFloats);
  m_nVertexCount = v4->m_nVertexCount;
  inOrderVertices.m_Size = 0;
  inOrderVertices.m_Memory.m_pMemory = 0;
  inOrderVertices.m_Memory.m_nAllocationCount = 0;
  inOrderVertices.m_Memory.m_nGrowSize = 0;
  remapTable.m_Size = 0;
  remapTable.m_Memory.m_pMemory = 0;
  remapTable.m_Memory.m_nAllocationCount = 0;
  remapTable.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(&remapTable, m_nVertexCount);
  v9 = 0;
  for ( i = 0; i < remapTable.m_Size; ++v9 )
  {
    ++i;
    remapTable.m_Memory.m_pMemory[v9] = -1;
  }
  v11 = v4->m_nVertexCount;
  v12 = 0;
  list.m_Size = 0;
  list.m_Memory.m_nAllocationCount = 64;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  list.m_Memory.m_nGrowSize = 0x80000000;
  if ( v11 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v41 = v12;
        if ( remapTable.m_Memory.m_pMemory[v12] == -1 )
        {
          v13 = *pEpsilons;
          v14 = pEpsilons[1];
          v15 = pEpsilons[2];
          v16 = &v4->m_pVerts[v12 * v4->m_nVertexStrideFloats];
          mins.x = *v16 - *pEpsilons;
          mins.y = v16[1] - v14;
          mins.z = v16[2] - v15;
          v17 = v13 + *v16;
          list.m_Size = 0;
          v18 = v14 + v16[1];
          v19 = v15 + v16[2];
          maxs.x = v17;
          maxs.y = v18;
          maxs.z = v19;
          CVertexKDTree::FindVertsInBox(&searchTree, &list, &mins, &maxs, 0);
          if ( list.m_Size <= 0 )
          {
LABEL_14:
            m_pMemory = remapTable.m_Memory.m_pMemory;
          }
          else
          {
            v35 = pMeshOut;
            v20 = v16;
            v38 = pEpsilons;
            v21 = v4;
            v36 = v12;
            v22 = list.m_Memory.m_pMemory;
            m_pMemory = remapTable.m_Memory.m_pMemory;
            v23 = &list.m_Memory.m_pMemory[(list.m_Size - 1) + 1];
            v37 = inOrderVertices.m_Memory.m_pMemory;
            do
            {
              if ( *v22 < v20 )
              {
                m_nVertexStrideFloats = v21->m_nVertexStrideFloats;
                v25 = m_pMemory[((*v22 - v21->m_pVerts) / m_nVertexStrideFloats)];
                if ( VertexMatches(v20, v37[v25], v38, m_nVertexStrideFloats) )
                {
                  v26 = v25;
                  v16 = v20;
                  v4 = v21;
                  v12 = v36;
                  pMeshOut = v35;
                  pEpsilons = v38;
                  m_pMemory[v41] = v26;
                  goto LABEL_14;
                }
              }
              ++v22;
            }
            while ( v22 != v23 );
            v16 = v20;
            v4 = v21;
            v12 = v36;
            pMeshOut = v35;
            pEpsilons = v38;
          }
          if ( m_pMemory[v41] == -1 )
            break;
        }
        if ( v4->m_nVertexCount <= ++v12 )
          goto LABEL_21;
      }
      m_Size = inOrderVertices.m_Size;
      v40 = inOrderVertices.m_Size;
      if ( inOrderVertices.m_Size == inOrderVertices.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<float const*,int>::Grow(&inOrderVertices.m_Memory, 1);
        m_Size = inOrderVertices.m_Size;
      }
      inOrderVertices.m_Size = m_Size + 1;
      v28 = &inOrderVertices.m_Memory.m_pMemory[v40];
      if ( v28 != 0 )
        *v28 = v16;
      remapTable.m_Memory.m_pMemory[v41] = v40;
      ++v12;
    }
    while ( v4->m_nVertexCount > v12 );
  }
LABEL_21:
  v29 = inOrderVertices.m_Size;
  CMesh::AllocateMesh(
    pMeshOut,
    inOrderVertices.m_Size,
    v4->m_nIndexCount,
    v4->m_nVertexStrideFloats,
    v4->m_pAttributes,
    v4->m_nAttributeCount);
  for ( j = 0; v29 > j; ++j )
    CopyVertex(
      &pMeshOut->m_pVerts[j * pMeshOut->m_nVertexStrideFloats],
      inOrderVertices.m_Memory.m_pMemory[j],
      v4->m_nVertexStrideFloats);
  v31 = 0;
  for ( k = 0; v4->m_nIndexCount > k; ++v31 )
  {
    ++k;
    pMeshOut->m_pIndices[v31] = remapTable.m_Memory.m_pMemory[v4->m_pIndices[v31]];
  }
  list.m_Size = 0;
  if ( list.m_Memory.m_nAllocationCount < 0 )
  {
    v34 = list.m_Memory.m_nGrowSize & 0xC0000000;
LABEL_36:
    if ( v34 == 0 )
      CUtlMemory<float const*,int>::Purge(&list.m_Memory);
    goto LABEL_31;
  }
  m_nGrowSize = list.m_Memory.m_nGrowSize;
  v34 = list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_Memory.m_pMemory == &list.m_Memory.m_FixedMemory )
    goto LABEL_36;
  if ( list.m_Memory.m_pMemory != 0 && v34 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    m_nGrowSize = list.m_Memory.m_nGrowSize;
  }
  list.m_Memory.m_nAllocationCount = 64;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  list.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_31:
  remapTable.m_Size = 0;
  if ( (remapTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&remapTable.m_Memory);
    if ( (remapTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&remapTable.m_Memory);
  }
  inOrderVertices.m_Size = 0;
  if ( (inOrderVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<float const*,int>::Purge(&inOrderVertices.m_Memory);
    if ( (inOrderVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float const*,int>::Purge(&inOrderVertices.m_Memory);
  }
  searchTree.m_vertexList.m_Size = 0;
  CUtlBlockMemory<float const*,int>::Purge(&searchTree.m_vertexList.m_Memory);
  CUtlBlockMemory<float const*,int>::Purge(&searchTree.m_vertexList.m_Memory);
  searchTree.m_tree.m_Size = 0;
  if ( (searchTree.m_tree.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CVertexKDNode,int>::Purge(&searchTree.m_tree.m_Memory);
    if ( (searchTree.m_tree.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CVertexKDNode,int>::Purge(&searchTree.m_tree.m_Memory);
  }
  return 1;
}


// CleanMesh  (line 2551, @0x00000000031d1490, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetVertex, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount, CMesh::AllocateMesh, CopyVertex, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: ApplyStandardWeldAndClean
void __fastcall CleanMesh(CMesh *pMeshOut, const CMesh *const inputMesh)
{
  int m_nVertexCount; // esi
  __int64 v5; // rdx
  int i; // eax
  int v7; // esi
  int v8; // edx
  __int64 v9; // rax
  int v10; // edi
  uint32 *m_pIndices; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int *m_pMemory; // r10
  unsigned int *v16; // r9
  unsigned int *v17; // r8
  unsigned int *v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  int j; // r8d
  uint32 *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 k; // r12
  unsigned int v29; // eax
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > indexMap; // [rsp+0h] [rbp-40h] BYREF

  indexMap.m_Size = 0;
  m_nVertexCount = inputMesh->m_nVertexCount;
  indexMap.m_Memory.m_pMemory = 0;
  indexMap.m_Memory.m_nAllocationCount = 0;
  indexMap.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(&indexMap, m_nVertexCount);
  v5 = 0;
  for ( i = 0; inputMesh->m_nVertexCount > i; ++v5 )
  {
    ++i;
    indexMap.m_Memory.m_pMemory[v5] = -1;
  }
  v7 = 0;
  v8 = 0;
  if ( inputMesh->m_nIndexCount > 0 )
  {
    v9 = 0;
    v10 = 0;
    v8 = 0;
    v7 = 0;
    do
    {
      m_pIndices = inputMesh->m_pIndices;
      v12 = m_pIndices[v9];
      v13 = m_pIndices[v9 + 1];
      v14 = m_pIndices[v9 + 2];
      if ( v12 == v13 || v13 == v14 || v12 == v14 )
        goto LABEL_12;
      m_pMemory = indexMap.m_Memory.m_pMemory;
      v16 = &indexMap.m_Memory.m_pMemory[v12];
      if ( *v16 == -1 )
      {
        *v16 = v7++;
        m_pMemory = indexMap.m_Memory.m_pMemory;
        v17 = &indexMap.m_Memory.m_pMemory[v13];
        if ( *v17 != -1 )
        {
LABEL_10:
          v18 = &m_pMemory[v14];
          if ( *v18 == -1 )
            goto LABEL_27;
          goto LABEL_11;
        }
      }
      else
      {
        v17 = &indexMap.m_Memory.m_pMemory[v13];
        if ( *v17 != -1 )
          goto LABEL_10;
      }
      *v17 = v7++;
      v18 = &indexMap.m_Memory.m_pMemory[v14];
      if ( *v18 == -1 )
LABEL_27:
        *v18 = v7++;
LABEL_11:
      v8 += 3;
LABEL_12:
      v10 += 3;
      v9 += 3;
    }
    while ( inputMesh->m_nIndexCount > v10 );
  }
  CMesh::AllocateMesh(
    pMeshOut,
    v7,
    v8,
    inputMesh->m_nVertexStrideFloats,
    inputMesh->m_pAttributes,
    inputMesh->m_nAttributeCount);
  v19 = 0;
  v20 = 0;
  for ( j = 0; inputMesh->m_nIndexCount > v20; v19 += 3 )
  {
    v22 = inputMesh->m_pIndices;
    v23 = v22[v19];
    v24 = v22[v19 + 1];
    v25 = v22[v19 + 2];
    if ( v23 != v24 && v24 != v25 && v23 != v25 )
    {
      v26 = j;
      j += 3;
      v27 = v26;
      pMeshOut->m_pIndices[v26] = indexMap.m_Memory.m_pMemory[v23];
      pMeshOut->m_pIndices[v27 + 1] = indexMap.m_Memory.m_pMemory[v24];
      pMeshOut->m_pIndices[v27 + 2] = indexMap.m_Memory.m_pMemory[v25];
    }
    v20 += 3;
  }
  for ( k = 0; inputMesh->m_nVertexCount > k; ++k )
  {
    v29 = indexMap.m_Memory.m_pMemory[k];
    if ( v29 != -1 )
      CopyVertex(
        &pMeshOut->m_pVerts[pMeshOut->m_nVertexStrideFloats * v29],
        &inputMesh->m_pVerts[k * inputMesh->m_nVertexStrideFloats],
        inputMesh->m_nVertexStrideFloats);
  }
  indexMap.m_Size = 0;
  if ( (indexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&indexMap.m_Memory);
    if ( (indexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&indexMap.m_Memory);
  }
}


// ApplyStandardWeldAndClean  (line 2620, @0x00000000031d1700, libserver.so)  // inlines: StringAfterPrefix<char const>, StringHasPrefix
// calls: operator new [], CUtlString::Get, _V_StringAfterPrefix, CMesh::CMesh, WeldVertices, operator delete [], CMesh::FreeAllMemory, CleanMesh, CMesh::~CMesh, _Unwind_Resume, __stack_chk_fail
// callers: CreatePositionOnlyMeshFromMesh
// strings: "texcoord"
void __fastcall ApplyStandardWeldAndClean(CMesh *pMesh, float a2, float flWeldEpsilon)
{
  unsigned __int64 m_nVertexStrideFloats; // rax
  size_t v5; // rdi
  float *v6; // r12
  float *v7; // rdx
  int i; // eax
  __int64 v9; // r15
  int v10; // r14d
  CMeshVertexAttribute *v11; // r13
  const char *v12; // rax
  int m_nOffsetFloats; // edx
  float *v14; // rcx
  int m_nAttributeCount; // eax
  int v16; // xmm1_4
  __int64 v17; // r15
  int v18; // r14d
  int v19; // xmm2_4
  CMeshVertexAttribute *v20; // r13
  const char *v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  float *v24; // r8
  int v25; // xmm0_4
  int v26; // eax
  __int64 v27; // r8
  int j; // edi
  CMeshVertexAttribute *v29; // rsi
  int v30; // edx
  float *v31; // rcx
  __int64 v32; // rdi
  int v33; // esi
  CMeshVertexAttribute *v34; // rdx
  int v35; // eax
  int v36; // ecx
  int v37; // [rsp+8h] [rbp-1C8h]
  int flWeldEpsilonb; // [rsp+Ch] [rbp-1C4h]
  CMesh tempMesh; // [rsp+10h] [rbp-1C0h] BYREF
  unsigned __int64 v41; // [rsp+198h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  m_nVertexStrideFloats = pMesh->m_nVertexStrideFloats;
  v5 = -1;
  if ( m_nVertexStrideFloats <= 0x1FC0000000000000LL )
    v5 = 4 * m_nVertexStrideFloats;
  v6 = operator new[](v5);
  v7 = v6;
  for ( i = 0; pMesh->m_nVertexStrideFloats > i; ++v7 )
  {
    *v7 = a2;
    ++i;
  }
  v9 = 0;
  v10 = 0;
  if ( pMesh->m_nAttributeCount > 0 )
  {
    do
    {
      v11 = &pMesh->m_pAttributes[v9];
      v12 = CUtlString::Get(&v11->m_name);
      if ( _V_StringAfterPrefix(v12, "texcoord") != 0 )
      {
        m_nOffsetFloats = v11->m_nOffsetFloats;
        if ( m_nOffsetFloats < m_nOffsetFloats + v11->m_nSizeFloats )
        {
          v14 = &v6[m_nOffsetFloats];
          do
          {
            *v14 = 0.00048828125;
            ++m_nOffsetFloats;
            ++v14;
          }
          while ( v11->m_nSizeFloats + v11->m_nOffsetFloats > m_nOffsetFloats );
        }
      }
      m_nAttributeCount = pMesh->m_nAttributeCount;
      ++v10;
      ++v9;
    }
    while ( m_nAttributeCount > v10 );
    if ( m_nAttributeCount > 0 )
    {
      v16 = 1315859240;
      v17 = 0;
      v18 = 0;
      v19 = 1065353216;
      do
      {
        v37 = v19;
        v20 = &pMesh->m_pAttributes[v17];
        flWeldEpsilonb = v16;
        v21 = CUtlString::Get(&v20->m_name);
        v22 = _V_StringAfterPrefix(v21, "tangent");
        v16 = flWeldEpsilonb;
        v19 = v37;
        if ( v22 != 0 )
        {
          v23 = v20->m_nOffsetFloats;
          if ( v23 < v23 + v20->m_nSizeFloats )
          {
            v24 = &v6[v23];
            do
            {
              *v24 = 1000000000.0;
              v25 = flWeldEpsilonb;
              if ( v23 - v20->m_nOffsetFloats == 3 )
                v25 = v37;
              *v24 = v25;
              ++v23;
              ++v24;
            }
            while ( v20->m_nSizeFloats + v20->m_nOffsetFloats > v23 );
          }
        }
        v26 = pMesh->m_nAttributeCount;
        ++v18;
        ++v17;
      }
      while ( v26 > v18 );
      if ( v26 > 0 )
      {
        v27 = 0;
        for ( j = 0; j < v26; ++j )
        {
          v29 = &pMesh->m_pAttributes[v27];
          if ( v29->m_bDelta )
          {
            v30 = v29->m_nOffsetFloats;
            if ( v30 < v30 + v29->m_nSizeFloats )
            {
              v31 = &v6[v30];
              do
              {
                *v31 = 1000000000.0;
                ++v30;
                ++v31;
              }
              while ( v29->m_nSizeFloats + v29->m_nOffsetFloats > v30 );
              v26 = pMesh->m_nAttributeCount;
            }
          }
          ++v27;
        }
        if ( v26 > 0 )
        {
          v32 = 0;
          v33 = 0;
          do
          {
            while ( 1 )
            {
              v34 = &pMesh->m_pAttributes[v32];
              if ( v34->m_dmeType == DmAttributeType_t::AT_INT_ARRAY && v34->m_nSizeFloats > 0 )
                break;
              ++v33;
              ++v32;
              if ( pMesh->m_nAttributeCount <= v33 )
                goto LABEL_36;
            }
            v35 = 0;
            do
            {
              v36 = v35 + v34->m_nOffsetFloats;
              ++v35;
              v6[v36] = 0.0;
            }
            while ( v34->m_nSizeFloats > v35 );
            ++v33;
            ++v32;
          }
          while ( pMesh->m_nAttributeCount > v33 );
        }
      }
    }
  }
LABEL_36:
  CMesh::CMesh(&tempMesh);
  WeldVertices(&tempMesh, pMesh, v6, pMesh->m_nVertexStrideFloats);
  if ( v6 != 0 )
    operator delete[](v6);
  CMesh::FreeAllMemory(pMesh);
  CleanMesh(pMesh, &tempMesh);
  CMesh::FreeAllMemory(&tempMesh);
  CMesh::~CMesh(&tempMesh);
}


// RoundToIngeter  (line 2703, @0x00000000031ca6f0, libserver.so)
// calls: floorf, ceilf
// callers: SnapVertexPositions
float __fastcall RoundToIngeter(float a1, float flVal)
{
  if ( a1 < 0.0 )
    return ceilf(a1 - 0.5);
  else
    return floorf(a1 + 0.5);
}


// SnapVertexPositions  (line 2719, @0x00000000031ca730, libserver.so)  // inlines: GetVertex
// calls: ceilf, RoundToIngeter
void __fastcall SnapVertexPositions(
        CMesh *const mesh,
        Vector vSnapGrid,
        Vector *const vMinBounds,
        Vector *const vMaxBounds,
        float flBoundsThreshold)
{
  int v8; // r12d
  float i; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float *v13; // rbx
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // [rsp+8h] [rbp-58h]
  float v17; // [rsp+Ch] [rbp-54h]
  float flBoundsThresholdb; // [rsp+10h] [rbp-50h]
  float z; // [rsp+14h] [rbp-4Ch]
  float v21; // [rsp+14h] [rbp-4Ch]
  float v22; // [rsp+18h] [rbp-48h]
  float v23; // [rsp+1Ch] [rbp-44h]
  float x_4; // [rsp+24h] [rbp-3Ch]

  v8 = 0;
  x_4 = vSnapGrid.y;
  z = vSnapGrid.z;
  v23 = ceilf(vSnapGrid.x);
  v22 = ceilf(x_4);
  v21 = ceilf(z);
  for ( i = flBoundsThreshold; mesh->m_nVertexCount > v8; ++v8 )
  {
    v13 = &mesh->m_pVerts[v8 * mesh->m_nVertexStrideFloats];
    v14 = *v13;
    v15 = *v13 - i;
    if ( vMinBounds->x > v15 )
    {
      v17 = v13[1];
      v16 = v13[2];
    }
    else
    {
      v15 = v13[1];
      if ( vMinBounds->y <= (v15 - i) )
      {
        if ( vMinBounds->z <= (v13[2] - i) && (v14 + i) <= vMaxBounds->x && (i + v15) <= vMaxBounds->y )
        {
          if ( (i + v13[2]) <= vMaxBounds->z )
            continue;
          v16 = v13[2];
          v17 = v13[1];
        }
        else
        {
          v16 = v13[2];
          v17 = v13[1];
        }
      }
      else
      {
        v17 = v13[1];
        v16 = v13[2];
      }
    }
    flBoundsThresholdb = i;
    *v13 = RoundToIngeter(v14 / v23, v15) * v23;
    v13[1] = RoundToIngeter(v17 / v22, v10) * v22;
    v12 = RoundToIngeter(v16 / v21, v11);
    i = flBoundsThresholdb;
    v13[2] = v12 * v21;
  }
}


// SplitMesh  (line 2745, @0x00000000031d1b70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<int>, Element, GetVertex, GrowMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount, CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::SetCount, CMesh::AllocateMesh, CopyVertex, CUtlMemory<int, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<int, int>::Grow, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32ul, int> >::~CUtlVectorBase, __stack_chk_fail
void __fastcall SplitMesh(
        CUtlVector<CMesh,CUtlMemory<CMesh,int> > *const list,
        const CMesh *const input,
        int nMaxVertex)
{
  int m_nVertexCount; // esi
  __int64 v6; // rdx
  int i; // eax
  int m_nIndexCount; // r13d
  int v9; // r12d
  int v10; // ebx
  uint32 *m_pIndices; // rax
  unsigned int *v12; // rax
  unsigned int v13; // esi
  int v14; // edx
  __int64 m_Size; // r12
  int v16; // eax
  int *v17; // rax
  __int64 v18; // r12
  int v19; // eax
  int *v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rbx
  int v24; // eax
  int *v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  int *v28; // rax
  int v29; // r12d
  __int64 v30; // rdx
  int j; // eax
  __int64 v32; // rbx
  int v33; // eax
  signed int v34; // ecx
  __int64 v35; // r12
  unsigned int v36; // eax
  unsigned int v37; // ecx
  uint32 m_nGrowSize; // edx
  uint32 v39; // eax
  uint32 v40; // edx
  uint32 v41; // eax
  __int64 v42; // [rsp+20h] [rbp-1C0h]
  const uint32 *pIndex; // [rsp+28h] [rbp-1B8h]
  CUtlMemory<int,int> *v44; // [rsp+30h] [rbp-1B0h]
  unsigned int nVertexOut_0; // [rsp+38h] [rbp-1A8h]
  const uint32 *nMaxVertexb; // [rsp+40h] [rbp-1A0h]
  int nIndexOut; // [rsp+48h] [rbp-198h]
  int nIndexOuta; // [rsp+48h] [rbp-198h]
  int nIndexCount; // [rsp+4Ch] [rbp-194h]
  int nIndexCounta; // [rsp+4Ch] [rbp-194h]
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > indexMap; // [rsp+50h] [rbp-190h] BYREF
  CUtlVectorFixedGrowable<int,32ul> indexCount; // [rsp+70h] [rbp-170h] BYREF
  CUtlVectorFixedGrowable<int,32ul> vertexCount; // [rsp+110h] [rbp-D0h] BYREF
  unsigned __int64 v55; // [rsp+1A8h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  m_nVertexCount = input->m_nVertexCount;
  indexMap.m_Size = 0;
  indexMap.m_Memory.m_pMemory = 0;
  indexMap.m_Memory.m_nAllocationCount = 0;
  indexMap.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::SetCount(&indexMap, m_nVertexCount);
  v6 = 0;
  for ( i = 0; input->m_nVertexCount > i; ++v6 )
  {
    ++i;
    indexMap.m_Memory.m_pMemory[v6] = -1;
  }
  m_nIndexCount = input->m_nIndexCount;
  v9 = 0;
  indexCount.m_Memory.m_pMemory = &indexCount.m_Memory.m_FixedMemory;
  v10 = 0;
  indexCount.m_Size = 0;
  vertexCount.m_Memory.m_pMemory = &vertexCount.m_Memory.m_FixedMemory;
  m_pIndices = input->m_pIndices;
  indexCount.m_Memory.m_nAllocationCount = 32;
  indexCount.m_Memory.m_nGrowSize = 0x80000000;
  vertexCount.m_Size = 0;
  pIndex = m_pIndices;
  vertexCount.m_Memory.m_nAllocationCount = 32;
  vertexCount.m_Memory.m_nGrowSize = 0x80000000;
  nIndexCount = 0;
  if ( m_nIndexCount > 0 )
  {
    do
    {
      while ( 1 )
      {
        v12 = &indexMap.m_Memory.m_pMemory[pIndex[v10]];
        if ( *v12 == -1 )
        {
          v13 = nIndexCount++;
          *v12 = v13;
          if ( nIndexCount >= nMaxVertex )
            break;
        }
        ++v10;
        ++v9;
        if ( m_nIndexCount <= v10 )
          goto LABEL_20;
      }
      v14 = v10 % 3;
      v10 -= v10 % 3;
      nIndexOut = v9 - v14;
      m_Size = indexCount.m_Size;
      v16 = indexCount.m_Size;
      if ( indexCount.m_Size == indexCount.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&indexCount.m_Memory, 1);
        v16 = indexCount.m_Size;
      }
      indexCount.m_Size = v16 + 1;
      v17 = &indexCount.m_Memory.m_pMemory[m_Size];
      if ( v17 != 0 )
        *v17 = nIndexOut;
      v18 = vertexCount.m_Size;
      v19 = vertexCount.m_Size;
      if ( vertexCount.m_Size == vertexCount.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&vertexCount.m_Memory, 1);
        v19 = vertexCount.m_Size;
      }
      vertexCount.m_Size = v19 + 1;
      v20 = &vertexCount.m_Memory.m_pMemory[v18];
      if ( v20 != 0 )
        *v20 = nIndexCount;
      if ( input->m_nVertexCount > 0 )
      {
        v21 = 0;
        v22 = 0;
        do
        {
          ++v22;
          indexMap.m_Memory.m_pMemory[v21++] = -1;
        }
        while ( input->m_nVertexCount > v22 );
      }
      nIndexCount = 0;
      v9 = 0;
    }
    while ( m_nIndexCount > v10 );
LABEL_20:
    if ( nIndexCount > 0 && v9 != 0 )
    {
      v23 = indexCount.m_Size;
      v24 = indexCount.m_Size;
      if ( indexCount.m_Size == indexCount.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&indexCount.m_Memory, 1);
        v24 = indexCount.m_Size;
      }
      indexCount.m_Size = v24 + 1;
      v25 = &indexCount.m_Memory.m_pMemory[v23];
      if ( v25 != 0 )
        *v25 = v9;
      v26 = vertexCount.m_Size;
      v27 = vertexCount.m_Size;
      if ( vertexCount.m_Size == vertexCount.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&vertexCount.m_Memory, 1);
        v27 = vertexCount.m_Size;
      }
      vertexCount.m_Size = v27 + 1;
      v28 = &vertexCount.m_Memory.m_pMemory[v26];
      if ( v28 != 0 )
        *v28 = nIndexCount;
    }
    v10 = indexCount.m_Size;
  }
  CUtlVectorBase<CMesh,CUtlMemory<CMesh,int>>::SetCount(list, v10);
  if ( v10 > 0 )
  {
    v29 = 0;
    v44 = 0;
    v42 = 4LL * (v10 - 1) + 4;
    while ( 1 )
    {
      CMesh::AllocateMesh(
        (list->m_Memory.m_pMemory + 96 * v44),
        *(vertexCount.m_Memory.m_pMemory + v44),
        *(indexCount.m_Memory.m_pMemory + v44),
        input->m_nVertexStrideFloats,
        input->m_pAttributes,
        input->m_nAttributeCount);
      v30 = 0;
      nIndexCounta = *(indexCount.m_Memory.m_pMemory + v44);
      for ( j = 0; input->m_nVertexCount > j; ++v30 )
      {
        ++j;
        indexMap.m_Memory.m_pMemory[v30] = -1;
      }
      if ( nIndexCounta <= 0 )
      {
        v33 = v29;
      }
      else
      {
        v32 = 0;
        nVertexOut_0 = 0;
        nMaxVertexb = &pIndex[v29];
        nIndexOuta = v29 + 1;
        do
        {
          v34 = nMaxVertexb[v32];
          v35 = v34;
          v36 = indexMap.m_Memory.m_pMemory[v34];
          if ( v36 == -1 )
          {
            CopyVertex(
              (*(&list->m_Memory.m_pMemory->m_pVerts + 12 * v44)
             + 4LL * (*(&list->m_Memory.m_pMemory->m_nVertexStrideFloats + 24 * v44) * nVertexOut_0)),
              &input->m_pVerts[input->m_nVertexStrideFloats * v34],
              input->m_nVertexStrideFloats);
            v37 = nVertexOut_0++;
            indexMap.m_Memory.m_pMemory[v35] = v37;
            v36 = indexMap.m_Memory.m_pMemory[v35];
          }
          *(*(&list->m_Memory.m_pMemory->m_pIndices + 12 * v44) + 4 * v32) = v36;
          v33 = v32++ + nIndexOuta;
        }
        while ( nIndexCounta > v32 );
      }
      v44 = (v44 + 4);
      if ( v44 == v42 )
        break;
      v29 = v33;
    }
  }
  vertexCount.m_Size = 0;
  if ( vertexCount.m_Memory.m_nAllocationCount < 0 )
  {
    v39 = vertexCount.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = vertexCount.m_Memory.m_nGrowSize;
    v39 = vertexCount.m_Memory.m_nGrowSize & 0xC0000000;
    if ( vertexCount.m_Memory.m_pMemory != &vertexCount.m_Memory.m_FixedMemory )
    {
      if ( vertexCount.m_Memory.m_pMemory != 0 && v39 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = vertexCount.m_Memory.m_nGrowSize;
      }
      vertexCount.m_Memory.m_nAllocationCount = 32;
      vertexCount.m_Memory.m_pMemory = &vertexCount.m_Memory.m_FixedMemory;
      vertexCount.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_49;
    }
  }
  if ( v39 == 0 )
    CUtlMemory<int,int>::Purge(&vertexCount.m_Memory);
LABEL_49:
  indexCount.m_Size = 0;
  if ( indexCount.m_Memory.m_nAllocationCount < 0 )
  {
    v41 = indexCount.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v40 = indexCount.m_Memory.m_nGrowSize;
    v41 = indexCount.m_Memory.m_nGrowSize & 0xC0000000;
    if ( indexCount.m_Memory.m_pMemory != &indexCount.m_Memory.m_FixedMemory )
    {
      if ( indexCount.m_Memory.m_pMemory != 0 && v41 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v40 = indexCount.m_Memory.m_nGrowSize;
      }
      indexCount.m_Memory.m_nAllocationCount = 32;
      indexCount.m_Memory.m_pMemory = &indexCount.m_Memory.m_FixedMemory;
      indexCount.m_Memory.m_nGrowSize = v40 & 0x3FFFFFFF | 0x80000000;
      goto LABEL_55;
    }
  }
  if ( v41 == 0 )
    CUtlMemory<int,int>::Purge(&indexCount.m_Memory);
LABEL_55:
  indexMap.m_Size = 0;
  if ( (indexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&indexMap.m_Memory);
    if ( (indexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&indexMap.m_Memory);
  }
}


// DuplicateMeshFaces  (line 2828, @0x00000000031cc0b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetVertex, Purge, RemoveAll, V_memcpy, memcpy, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue, CMesh::AllocateMesh, CopyVertex, memcpy, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall DuplicateMeshFaces(
        CMesh *pMeshOut,
        const CMesh *const inputMesh,
        const CUtlVector<int,CUtlMemory<int,int> > *const faceList)
{
  int m_nVertexCount; // esi
  int m_Size; // r15d
  unsigned __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r8
  int *v12; // rdx
  __int64 i; // r12
  int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rcx
  bool m_bNoCollapse; // al
  bool v21; // zf
  int src; // [rsp+1Ch] [rbp-54h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vertexRemapTable; // [rsp+20h] [rbp-50h] BYREF

  vertexRemapTable.m_Size = 0;
  m_nVertexCount = inputMesh->m_nVertexCount;
  vertexRemapTable.m_Memory.m_pMemory = 0;
  vertexRemapTable.m_Memory.m_nAllocationCount = 0;
  vertexRemapTable.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&vertexRemapTable, m_nVertexCount);
  src = -1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::FillWithValue(&vertexRemapTable, &src);
  m_Size = faceList->m_Size;
  if ( faceList->m_Size <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 0;
      v11 = 3LL * faceList->m_Memory.m_pMemory[v8 / 4];
      do
      {
        v12 = &vertexRemapTable.m_Memory.m_pMemory[inputMesh->m_pIndices[v10 + v11]];
        if ( *v12 == -1 )
          *v12 = v9++;
        ++v10;
      }
      while ( v10 != 3 );
      v8 += 4LL;
    }
    while ( v8 != 4LL * (m_Size - 1) + 4 );
  }
  CMesh::AllocateMesh(
    pMeshOut,
    v9,
    3 * m_Size,
    inputMesh->m_nVertexStrideFloats,
    inputMesh->m_pAttributes,
    inputMesh->m_nAttributeCount);
  for ( i = 0; inputMesh->m_nVertexCount > i; ++i )
  {
    v14 = vertexRemapTable.m_Memory.m_pMemory[i];
    if ( v14 >= 0 )
      CopyVertex(
        &pMeshOut->m_pVerts[pMeshOut->m_nVertexStrideFloats * v14],
        &inputMesh->m_pVerts[i * inputMesh->m_nVertexStrideFloats],
        inputMesh->m_nVertexStrideFloats);
  }
  if ( m_Size > 0 )
  {
    v15 = 0;
    do
    {
      v16 = 0;
      v17 = 12LL * faceList->m_Memory.m_pMemory[v15 / 4];
      do
      {
        v18 = v16;
        v19 = v16;
        v16 += 4;
        *(&pMeshOut->m_pIndices[3 * v15 / 4] + v19) = vertexRemapTable.m_Memory.m_pMemory[*(inputMesh->m_pIndices
                                                                                          + v18
                                                                                          + v17)];
      }
      while ( v16 != 12 );
      v15 += 4LL;
    }
    while ( v15 != 4LL * (m_Size - 1) + 4 );
  }
  memcpy(pMeshOut->m_materialName, inputMesh->m_materialName, sizeof(pMeshOut->m_materialName));
  m_bNoCollapse = inputMesh->m_bNoCollapse;
  vertexRemapTable.m_Size = 0;
  v21 = (vertexRemapTable.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pMeshOut->m_bNoCollapse = m_bNoCollapse;
  pMeshOut->m_bUseTintColor = inputMesh->m_bUseTintColor;
  pMeshOut->m_vTintColor.x = inputMesh->m_vTintColor.x;
  pMeshOut->m_vTintColor.y = inputMesh->m_vTintColor.y;
  pMeshOut->m_vTintColor.z = inputMesh->m_vTintColor.z;
  pMeshOut->m_vTintColor.w = inputMesh->m_vTintColor.w;
  pMeshOut->m_nCollisionType = inputMesh->m_nCollisionType;
  if ( v21 )
  {
    CUtlMemory<int,int>::Purge(&vertexRemapTable.m_Memory);
    if ( (vertexRemapTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vertexRemapTable.m_Memory);
  }
}


// CMesh::SaveObj  (line 2891, @0x00000000031cc340, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetVertex, GetVertexCount, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: V_vsnprintf, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "wt", "#This file is generated by CMesh::SaveObj() from CMesh with %d indices, %d vertices, %d a, "#It contains connectivity part %d with %d vertices\n", "\ng default\n", "v %g %g %g\n", "s off\ng cMesh\nusemtl initialShadingGroup\n" (8 total)
void CMesh::SaveObj(
        const CMesh *const this,
        const CMeshDisjointSetPartition *const connectivity,
        int nPart,
        IFileSystem *pFileSystem,
        const char *pFileNameFormat,
        ...)
{
  __int64 v9; // r15
  int m_nVertexCount; // esi
  int v11; // eax
  int v12; // r13d
  float *v13; // rax
  __int64 v14; // r14
  int i; // r13d
  uint32 *v16; // rdx
  uint32 v17; // esi
  uint32 v18; // r8d
  uint32 v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  __int64 v23; // [rsp+30h] [rbp-240h]
  int nPartVerts; // [rsp+3Ch] [rbp-234h]
  int src; // [rsp+4Ch] [rbp-224h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > nMeshToPart; // [rsp+50h] [rbp-220h] BYREF
  va_list vl; // [rsp+68h] [rbp-208h] BYREF
  char pName[264]; // [rsp+80h] [rbp-1F0h] BYREF
  unsigned __int64 v29; // [rsp+188h] [rbp-E8h]

  va_start(vl, pFileNameFormat);
  v29 = __readfsqword(0x28u);
  V_vsnprintf(pName, 260, pFileNameFormat, vl);
  v9 = (*(pFileSystem->_vptr_IBaseFileSystem + 2))(&pFileSystem->IBaseFileSystem, pName, "wt", 0);
  (*(pFileSystem->_vptr_IAppSystem + 34))(
    pFileSystem,
    v9,
    "#This file is generated by CMesh::SaveObj() from CMesh with %d indices, %d vertices, %d attributes\n",
    this->m_nIndexCount,
    this->m_nVertexCount,
    this->m_nAttributeCount);
  v23 = nPart;
  nPartVerts = connectivity->m_Parts.m_Memory.m_pMemory[v23].m_nVertexCount;
  (*(pFileSystem->_vptr_IAppSystem + 34))(
    pFileSystem,
    v9,
    "#It contains connectivity part %d with %d vertices\n",
    nPart,
    nPartVerts);
  m_nVertexCount = this->m_nVertexCount;
  nMeshToPart.m_Size = 0;
  nMeshToPart.m_Memory.m_pMemory = 0;
  nMeshToPart.m_Memory.m_nAllocationCount = 0;
  nMeshToPart.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&nMeshToPart, m_nVertexCount);
  src = -1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::FillWithValue(&nMeshToPart, &src);
  v11 = 0;
  if ( nPartVerts > 0 )
  {
    do
    {
      nMeshToPart.m_Memory.m_pMemory[connectivity->m_Indices.m_Memory.m_pMemory[v11
                                                                              + connectivity->m_Parts.m_Memory.m_pMemory[nPart].m_nVertexBegin]] = v11;
      ++v11;
    }
    while ( v11 != nPartVerts );
  }
  (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, v9, "\ng default\n");
  v12 = 0;
  if ( nPartVerts > 0 )
  {
    do
    {
      v13 = &this->m_pVerts[connectivity->m_Indices.m_Memory.m_pMemory[v12
                                                                     + connectivity->m_Parts.m_Memory.m_pMemory[v23].m_nVertexBegin]
                          * this->m_nVertexStrideFloats];
      (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, v9, "v %g %g %g\n", *v13, v13[1], v13[2]);
      ++v12;
    }
    while ( v12 != nPartVerts );
  }
  (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, v9, "s off\ng cMesh\nusemtl initialShadingGroup\n");
  v14 = 0;
  for ( i = 0; this->m_nIndexCount > i; v14 += 3 )
  {
    while ( 1 )
    {
      v16 = &this->m_pIndices[v14];
      v17 = *v16;
      v18 = v16[1];
      v19 = v16[2];
      v20 = nMeshToPart.m_Memory.m_pMemory[v17];
      v21 = nMeshToPart.m_Memory.m_pMemory[v18];
      v22 = nMeshToPart.m_Memory.m_pMemory[v19];
      if ( v20 < 0 || v21 < 0 || v22 < 0 )
        break;
      (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, v9, "f %d %d %d\n", v20 + 1, v21 + 1, v22 + 1);
      i += 3;
      v14 += 3;
      if ( this->m_nIndexCount <= i )
        goto LABEL_12;
    }
    (*(pFileSystem->_vptr_IAppSystem + 34))(
      pFileSystem,
      v9,
      "#f %d %d %d, original mesh: %d %d %d\n",
      v20 + 1,
      v21 + 1,
      v22 + 1,
      v17 + 1,
      v18 + 1,
      v19 + 1);
    i += 3;
  }
LABEL_12:
  (*(pFileSystem->_vptr_IBaseFileSystem + 3))(&pFileSystem->IBaseFileSystem, v9);
  nMeshToPart.m_Size = 0;
  if ( (nMeshToPart.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&nMeshToPart.m_Memory);
    if ( (nMeshToPart.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&nMeshToPart.m_Memory);
  }
}


// CMesh::SaveObj  (line 2942, @0x00000000031ca900, libserver.so)  // inlines: GetVertex, _V_strcpy, strcpy
// calls: V_vsnprintf, CMesh::GetSkinningDataFields, V_snprintf, CMesh::GetNormalAttributeIndex, __stack_chk_fail
// strings: "wt", "#This file is generated by CMesh::SaveObj() from CMesh with %d indices, %d vertices, %d a, "\ng default\n", "v %g %g %g%s\n", "vn %g %g %g\n", "s off\ng cMesh\nusemtl initialShadingGroup\n" (7 total)
void CMesh::SaveObj(const CMesh *const this, IFileSystem *pFileSystem, const char *pFileNameFormat, ...)
{
  __int64 v5; // rax
  int v6; // ebx
  char *v7; // r12
  int m_nVertexStrideFloats; // edx
  float *m_pVerts; // rsi
  CMeshVertexAttribute *v10; // rax
  char *v11; // rdi
  int v12; // ecx
  const CMesh *v13; // r12
  __int64 v14; // r13
  int v15; // r14d
  char *v16; // r15
  int v17; // eax
  char *v18; // rax
  int NormalAttributeIndex; // eax
  __int64 m_nOffsetFloats; // rax
  __int64 v21; // rbx
  int v22; // r12d
  int v23; // edx
  float *v24; // rdx
  int v25; // ebx
  __int64 v26; // r12
  uint32 *v27; // rdx
  IBaseFileSystem *v28; // [rsp+8h] [rbp-348h]
  int v29; // [rsp+1Ch] [rbp-334h]
  IFileSystem *pFileSystema; // [rsp+20h] [rbp-330h]
  FileHandle_t f; // [rsp+28h] [rbp-328h]
  float *v32; // [rsp+30h] [rbp-320h]
  __int64 v33; // [rsp+38h] [rbp-318h]
  va_list vl; // [rsp+48h] [rbp-308h] BYREF
  char pSuffix[256]; // [rsp+60h] [rbp-2F0h] BYREF
  char pName[264]; // [rsp+160h] [rbp-1F0h] BYREF
  unsigned __int64 v37; // [rsp+268h] [rbp-E8h]
  __int64 SkinningDataFields; // 0:rax.8

  va_start(vl, pFileNameFormat);
  v37 = __readfsqword(0x28u);
  V_vsnprintf(pName, 260, pFileNameFormat, vl);
  v28 = &pFileSystem->IBaseFileSystem;
  f = (*(pFileSystem->_vptr_IBaseFileSystem + 2))(&pFileSystem->IBaseFileSystem, pName, "wt", 0);
  (*(pFileSystem->_vptr_IAppSystem + 34))(
    pFileSystem,
    f,
    "#This file is generated by CMesh::SaveObj() from CMesh with %d indices, %d vertices, %d attributes\n",
    this->m_nIndexCount,
    this->m_nVertexCount,
    this->m_nAttributeCount);
  (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, f, "\ng default\n");
  SkinningDataFields = CMesh::GetSkinningDataFields(this);
  if ( this->m_nVertexCount > 0 )
  {
    v5 = SkinningDataFields >> 32;
    v6 = 0;
    pFileSystema = pFileSystem;
    v29 = v5;
    v33 = v5;
    v7 = pSuffix;
    do
    {
      m_nVertexStrideFloats = this->m_nVertexStrideFloats;
      memset(pSuffix, 0, sizeof(pSuffix));
      m_pVerts = this->m_pVerts;
      v32 = &this->m_pVerts[m_nVertexStrideFloats * v6];
      if ( v29 >= 0 )
      {
        strcpy(v7, "# bone");
        v10 = &this->m_pAttributes[v33];
        if ( v10->m_nSizeFloats > 0 )
        {
          v11 = v7;
          v12 = m_nVertexStrideFloats;
          v13 = this;
          v14 = 0;
          v15 = 6;
          v16 = v11;
          while ( 1 )
          {
            v17 = V_snprintf(&v16[v15], (256 - v15), " %d", LODWORD(m_pVerts[v6 * v12 + v14++ + v10->m_nOffsetFloats]));
            v15 += v17;
            v10 = &v13->m_pAttributes[v33];
            if ( v10->m_nSizeFloats <= v14 )
              break;
            m_pVerts = v13->m_pVerts;
            v12 = v13->m_nVertexStrideFloats;
          }
          v18 = v16;
          this = v13;
          v7 = v18;
        }
      }
      ++v6;
      (*(pFileSystema->_vptr_IAppSystem + 34))(pFileSystema, f, "v %g %g %g%s\n", v7, *v32, v32[1], v32[2]);
    }
    while ( this->m_nVertexCount > v6 );
    pFileSystem = pFileSystema;
  }
  NormalAttributeIndex = CMesh::GetNormalAttributeIndex(this, 0);
  if ( NormalAttributeIndex >= 0 )
  {
    m_nOffsetFloats = this->m_pAttributes[NormalAttributeIndex].m_nOffsetFloats;
    if ( this->m_nVertexCount > 0 )
    {
      v21 = m_nOffsetFloats;
      v22 = 0;
      do
      {
        v23 = v22 * this->m_nVertexStrideFloats;
        ++v22;
        v24 = &this->m_pVerts[v23 + v21];
        (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, f, "vn %g %g %g\n", *v24, v24[1], v24[2]);
      }
      while ( this->m_nVertexCount > v22 );
    }
  }
  v25 = 0;
  v26 = 0;
  (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, f, "s off\ng cMesh\nusemtl initialShadingGroup\n");
  if ( this->m_nIndexCount > 0 )
  {
    do
    {
      v27 = &this->m_pIndices[v26];
      v25 += 3;
      v26 += 3;
      (*(pFileSystem->_vptr_IAppSystem + 34))(pFileSystem, f, "f %d %d %d\n", *v27 + 1, v27[1] + 1, v27[2] + 1);
    }
    while ( this->m_nIndexCount > v25 );
  }
  (*(pFileSystem->_vptr_IBaseFileSystem + 3))(v28, f);
}


// CreatePointCloudForMesh  (line 2999, @0x00000000031ce040, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, CrossProduct, Element, FastSqrt, GetVertex, GrowMemory, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator/=, operator[]
// calls: RandomFloat, CUtlMemory<Vector, int>::Grow
void __fastcall CreatePointCloudForMesh(
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pPointsOut,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pNormalsOut,
        CMesh *const meshIn,
        float flUnitAreaPerVertex)
{
  int m_nIndexCount; // esi
  CUtlVector<Vector,CUtlMemory<Vector,int> > *v6; // r14
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *v7; // rax
  __int64 m_Size; // rbx
  uint32 *m_pIndices; // rsi
  int m_nVertexStrideFloats; // edi
  float *v12; // r12
  float *v13; // r13
  float *v14; // r10
  float v15; // xmm2_4
  int v16; // ecx
  float v17; // xmm1_4
  float v18; // xmm10_4
  float v19; // xmm11_4
  float v20; // xmm14_4
  float v21; // xmm12_4
  float v22; // xmm9_4
  float v23; // xmm13_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm14_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm11_4
  float v30; // xmm9_4
  float v31; // xmm12_4
  float v32; // xmm9_4
  Vector *v33; // rcx
  __int64 v34; // rbx
  int v35; // ecx
  float *p_x; // rcx
  float v37; // xmm9_4
  float *v38; // rbx
  float *v39; // r12
  Vector *v40; // rax
  __int64 v41; // r13
  int v42; // eax
  float *v43; // rax
  float v44; // xmm0_4
  __int64 v45; // r13
  int v46; // eax
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  __int64 v50; // [rsp+0h] [rbp-90h]
  CUtlMemory<Vector,int> *v53; // [rsp+18h] [rbp-78h]
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // [rsp+20h] [rbp-70h]
  float *v55; // [rsp+28h] [rbp-68h]
  unsigned __int64 v56; // [rsp+30h] [rbp-60h]
  int nNewPoints; // [rsp+38h] [rbp-58h]
  float v58; // [rsp+3Ch] [rbp-54h]
  float v59; // [rsp+40h] [rbp-50h]
  float v60; // [rsp+44h] [rbp-4Ch]
  float *v61; // [rsp+48h] [rbp-48h]
  float v62; // [rsp+48h] [rbp-48h]
  float v63; // [rsp+48h] [rbp-48h]
  float v64; // [rsp+50h] [rbp-40h]
  float *v65; // [rsp+50h] [rbp-40h]
  float *v66; // [rsp+50h] [rbp-40h]
  float *v67; // [rsp+50h] [rbp-40h]
  float flBary0; // [rsp+58h] [rbp-38h]
  float flBary0b; // [rsp+58h] [rbp-38h]
  float flBary0a; // [rsp+58h] [rbp-38h]
  int p; // [rsp+5Ch] [rbp-34h]

  m_nIndexCount = meshIn->m_nIndexCount;
  if ( m_nIndexCount / 3 > 0 )
  {
    v6 = pNormalsOut;
    v56 = 0;
    v50 = 4 * (3LL * (m_nIndexCount / 3 - 1) + 3);
    p_m_Memory = &pPointsOut->m_Memory;
    v7 = &pNormalsOut->m_Memory;
    v53 = v7;
    do
    {
      m_Size = pPointsOut->m_Size;
      m_pIndices = meshIn->m_pIndices;
      m_nVertexStrideFloats = meshIn->m_nVertexStrideFloats;
      v12 = &meshIn->m_pVerts[m_nVertexStrideFloats * m_pIndices[v56 / 4 + 1]];
      v13 = &meshIn->m_pVerts[m_nVertexStrideFloats * m_pIndices[v56 / 4]];
      v14 = &meshIn->m_pVerts[m_pIndices[v56 / 4 + 2] * m_nVertexStrideFloats];
      v15 = v13[1];
      v16 = pPointsOut->m_Size;
      v17 = v13[2];
      v18 = v12[1] - v15;
      v19 = v14[1] - v15;
      v20 = v12[2] - v17;
      v21 = *v12 - *v13;
      v22 = *v14 - *v13;
      v23 = v14[2] - v17;
      v24 = (v18 * v23) - (v20 * v19);
      v25 = ((*v13 + *v12) + *v14) * 0.33333334;
      v26 = (v20 * v22) - (v23 * v21);
      v27 = ((v15 + v12[1]) + v14[1]) * 0.33333334;
      v28 = ((v17 + v12[2]) + v14[2]) * 0.33333334;
      v29 = (v19 * v21) - (v22 * v18);
      v30 = fsqrt(((v24 * v24) + (v26 * v26)) + (v29 * v29));
      v31 = 1.0 / v30;
      v32 = v30 * 0.5;
      v60 = v24 * v31;
      v59 = v26 * v31;
      v58 = v31 * v29;
      if ( m_Size == pPointsOut->m_Memory.m_nAllocationCount )
      {
        *&nNewPoints = v28;
        v63 = v27;
        flBary0a = ((*v13 + *v12) + *v14) * 0.33333334;
        v66 = &meshIn->m_pVerts[m_pIndices[v56 / 4 + 2] * m_nVertexStrideFloats];
        CUtlMemory<Vector,int>::Grow(p_m_Memory, 1);
        v16 = pPointsOut->m_Size;
        v28 = *&nNewPoints;
        v27 = v63;
        v25 = flBary0a;
        v14 = v66;
      }
      pPointsOut->m_Size = v16 + 1;
      v33 = &pPointsOut->m_Memory.m_pMemory[m_Size];
      if ( v33 != 0 )
      {
        v33->x = v25;
        v33->y = v27;
        v33->z = v28;
      }
      v34 = v6->m_Size;
      v35 = v6->m_Size;
      if ( v34 == v6->m_Memory.m_nAllocationCount )
      {
        v67 = v14;
        CUtlMemory<Vector,int>::Grow(v53, 1);
        v35 = v6->m_Size;
        v14 = v67;
      }
      v6->m_Size = v35 + 1;
      p_x = &v6->m_Memory.m_pMemory[v34].x;
      if ( p_x != 0 )
      {
        *p_x = v60;
        p_x[2] = v58;
        p_x[1] = v59;
      }
      v37 = v32 / flUnitAreaPerVertex;
      if ( v37 > 1.0 && v37 > 0 )
      {
        p = 0;
        v38 = v12;
        v39 = v13;
        do
        {
          v61 = v14;
          flBary0 = RandomFloat(0.0, 1.0);
          v44 = RandomFloat(0.0, 1.0) * (1.0 - flBary0);
          v14 = v61;
          v45 = pPointsOut->m_Size;
          v46 = v45;
          v47 = (((1.0 - flBary0) - v44) * *v61) + ((*v38 * v44) + (*v39 * flBary0));
          v48 = (v61[1] * ((1.0 - flBary0) - v44)) + ((v38[1] * v44) + (v39[1] * flBary0));
          v49 = (((1.0 - flBary0) - v44) * v61[2]) + ((v44 * v38[2]) + (flBary0 * v39[2]));
          if ( v45 == pPointsOut->m_Memory.m_nAllocationCount )
          {
            v55 = v61;
            v62 = (((1.0 - flBary0) - v44) * v61[2]) + ((v44 * v38[2]) + (flBary0 * v39[2]));
            flBary0b = v48;
            v64 = v47;
            CUtlMemory<Vector,int>::Grow(p_m_Memory, 1);
            v46 = pPointsOut->m_Size;
            v14 = v55;
            v49 = v62;
            v48 = flBary0b;
            v47 = v64;
          }
          pPointsOut->m_Size = v46 + 1;
          v40 = &pPointsOut->m_Memory.m_pMemory[v45];
          if ( v40 != 0 )
          {
            v40->x = v47;
            v40->y = v48;
            v40->z = v49;
          }
          v41 = v6->m_Size;
          v42 = v6->m_Size;
          if ( v41 == v6->m_Memory.m_nAllocationCount )
          {
            v65 = v14;
            CUtlMemory<Vector,int>::Grow(v53, 1);
            v42 = v6->m_Size;
            v14 = v65;
          }
          v6->m_Size = v42 + 1;
          v43 = &v6->m_Memory.m_pMemory[v41].x;
          if ( v43 != 0 )
          {
            *v43 = v60;
            v43[1] = v59;
            v43[2] = v58;
          }
          ++p;
        }
        while ( p != v37 );
      }
      v56 += 12LL;
    }
    while ( v56 != v50 );
  }
}


// CMesh::GetBoneInfluenceStats  (line 3058, @0x00000000031cc730, libserver.so)  // inlines: AddToTail, CopyConstruct<float>, CopyConstruct<int>, Element, ExpandAndRef<float>, ExpandAndRef<int>, GetVertex, GrowMemory, RemoveAll, operator[]
// calls: CMesh::GetSkinningDataFields, CUtlMemory<float, int>::Grow, CUtlMemory<int, int>::Grow
bool __fastcall CMesh::GetBoneInfluenceStats(
        CMesh *const this,
        CUtlVector<float,CUtlMemory<float,int> > *const arrJointSumWeights,
        CUtlVector<int,CUtlMemory<int,int> > *const arrJointReferences,
        float flWeightTolerance)
{
  CUtlVector<int,CUtlMemory<int,int> > *v4; // r14
  CUtlVector<float,CUtlMemory<float,int> > *v6; // rbx
  CMeshVertexAttribute *m_pAttributes; // rdi
  CMeshVertexAttribute *v8; // rsi
  int m_nOffsetFloats; // edi
  CUtlVector<float,CUtlMemory<float,int> > *v10; // r13
  CMesh *v11; // rbx
  CUtlVector<int,CUtlMemory<int,int> > *v12; // r15
  CUtlVector<float,CUtlMemory<float,int> > *v13; // rdx
  int v14; // r14d
  CMesh *v15; // r12
  int *v16; // r13
  CUtlVector<int,CUtlMemory<int,int> > *v17; // rcx
  __m128i v18; // xmm0
  int v19; // r8d
  CUtlMemory<float,int> *p_m_Memory; // rbx
  CUtlVector<float,CUtlMemory<float,int> > *v21; // r13
  int v22; // r12d
  int v23; // ecx
  int v24; // edx
  float *m_pMemory; // rax
  float *v26; // rax
  __int64 m_Size; // r15
  int v28; // eax
  CUtlVector<float,CUtlMemory<float,int> > *v29; // rdx
  float v30; // xmm0_4
  CUtlVector<int,CUtlMemory<int,int> > *v31; // rcx
  int v32; // r15d
  int *v33; // r13
  float *v34; // rax
  CUtlVector<int,CUtlMemory<int,int> > *v35; // rbx
  int v36; // edx
  int *v37; // rax
  int *v38; // rax
  __int64 v39; // r12
  int v40; // eax
  __int64 v42; // [rsp+8h] [rbp-78h]
  __int64 v43; // [rsp+10h] [rbp-70h]
  CUtlVector<int,CUtlMemory<int,int> > *v44; // [rsp+18h] [rbp-68h]
  CUtlVector<float,CUtlMemory<float,int> > *v45; // [rsp+18h] [rbp-68h]
  CMesh *v46; // [rsp+20h] [rbp-60h]
  int *v47; // [rsp+28h] [rbp-58h]
  __int64 v48; // [rsp+28h] [rbp-58h]
  __int64 v49; // [rsp+30h] [rbp-50h]
  int v50; // [rsp+38h] [rbp-48h]
  CUtlMemory<int,int> *v51; // [rsp+38h] [rbp-48h]
  int nVert; // [rsp+40h] [rbp-40h]
  int nFirstWeight; // [rsp+48h] [rbp-38h]
  int nWeights; // [rsp+4Ch] [rbp-34h]
  __int64 SkinningDataFields; // 0:rax.8

  v4 = arrJointReferences;
  v6 = arrJointSumWeights;
  arrJointSumWeights->m_Size = 0;
  arrJointReferences->m_Size = 0;
  SkinningDataFields = CMesh::GetSkinningDataFields(this);
  if ( SkinningDataFields < 0 )
    return 0;
  m_pAttributes = this->m_pAttributes;
  if ( SkinningDataFields < 0 )
    nFirstWeight = -1;
  else
    nFirstWeight = m_pAttributes[SkinningDataFields].m_nOffsetFloats;
  v8 = &m_pAttributes[SkinningDataFields >> 32];
  m_nOffsetFloats = v8->m_nOffsetFloats;
  nWeights = v8->m_nSizeFloats;
  if ( this->m_nVertexCount > 0 )
  {
    v10 = v6;
    nVert = 0;
    v11 = this;
    v12 = v4;
    v49 = SkinningDataFields;
    v42 = m_nOffsetFloats;
    v43 = nFirstWeight - m_nOffsetFloats;
    do
    {
      if ( nWeights > 0 )
      {
        v13 = v10;
        v14 = 0;
        v15 = v11;
        v16 = &v11->m_pVerts[v11->m_nVertexStrideFloats * nVert + v42];
        v17 = v12;
        do
        {
          while ( 1 )
          {
            v18 = 0x3F800000u;
            if ( nFirstWeight >= 0 )
            {
              v18 = 0;
              if ( v15->m_pAttributes[v49].m_nSizeFloats > v14 )
                v18 = v16[v43];
            }
            v19 = *v16;
            if ( *v18.m128i_i32 > flWeightTolerance )
              break;
            ++v14;
            ++v16;
            if ( v14 == nWeights )
              goto LABEL_28;
          }
          v47 = v16;
          p_m_Memory = &v13->m_Memory;
          v21 = v13;
          v46 = v15;
          v22 = v19;
          v44 = v17;
          v23 = _mm_cvtsi128_si32(v18);
          while ( 1 )
          {
            m_Size = v21->m_Size;
            if ( v22 < m_Size )
              break;
            while ( 1 )
            {
              v28 = m_Size;
              if ( v21->m_Memory.m_nAllocationCount == m_Size )
              {
                v50 = v23;
                CUtlMemory<float,int>::Grow(p_m_Memory, 1);
                v28 = v21->m_Size;
                v23 = v50;
              }
              v24 = v28 + 1;
              m_pMemory = v21->m_Memory.m_pMemory;
              v21->m_Size = v24;
              v26 = &m_pMemory[m_Size];
              if ( v26 != 0 )
                break;
              m_Size = v24;
              if ( v22 < v24 )
                goto LABEL_20;
            }
            *v26 = 0.0;
          }
LABEL_20:
          v29 = v21;
          v30 = *&v23;
          v31 = v44;
          v32 = v22;
          v33 = v47;
          v45 = v29;
          v34 = &v29->m_Memory.m_pMemory[v22];
          v48 = v22;
          v35 = v31;
          *v34 = v30 + *v34;
          v51 = &v31->m_Memory;
          while ( 1 )
          {
            v39 = v35->m_Size;
            if ( v32 < v39 )
              break;
            while ( 1 )
            {
              v40 = v39;
              if ( v35->m_Memory.m_nAllocationCount == v39 )
              {
                CUtlMemory<int,int>::Grow(v51, 1);
                v40 = v35->m_Size;
              }
              v36 = v40 + 1;
              v37 = v35->m_Memory.m_pMemory;
              v35->m_Size = v36;
              v38 = &v37[v39];
              if ( v38 != 0 )
                break;
              v39 = v36;
              if ( v32 < v36 )
                goto LABEL_27;
            }
            *v38 = 0;
          }
LABEL_27:
          v17 = v35;
          ++v14;
          v16 = v33 + 1;
          v15 = v46;
          v13 = v45;
          ++v35->m_Memory.m_pMemory[v48];
        }
        while ( v14 != nWeights );
LABEL_28:
        v11 = v15;
        v10 = v13;
        v12 = v17;
      }
      ++nVert;
    }
    while ( v11->m_nVertexCount > nVert );
    v6 = v10;
    v4 = v12;
  }
  return v6->m_Size != 0 && v4->m_Size != 0;
}


// CMesh::ComputeVolume  (line 3101, @0x00000000031cad10, libserver.so)  // inlines: GetVertex
float __fastcall CMesh::ComputeVolume(const CMesh *const this)
{
  float result; // xmm0_4
  int m_nIndexCount; // r10d
  float *m_pVerts; // r9
  float v4; // xmm0_4
  int m_nVertexStrideFloats; // r8d
  uint32 *m_pIndices; // rax
  int v7; // edi
  uint32 v8; // edx
  float *v9; // rsi
  float *v10; // rcx
  float *v11; // rdx

  result = 0.0;
  m_nIndexCount = this->m_nIndexCount;
  if ( m_nIndexCount > 0 )
  {
    m_pVerts = this->m_pVerts;
    v4 = 0.0;
    m_nVertexStrideFloats = this->m_nVertexStrideFloats;
    m_pIndices = this->m_pIndices;
    v7 = 0;
    do
    {
      v8 = *m_pIndices;
      v7 += 3;
      m_pIndices += 3;
      v9 = &m_pVerts[m_nVertexStrideFloats * v8];
      v10 = &m_pVerts[m_nVertexStrideFloats * *(m_pIndices - 2)];
      v11 = &m_pVerts[m_nVertexStrideFloats * *(m_pIndices - 1)];
      v4 = v4 + ((((*v10 - *v9) * (v11[1] - v9[1])) - ((v10[1] - v9[1]) * (*v11 - *v9))) * ((v9[2] + v10[2]) + v11[2]));
    }
    while ( v7 < m_nIndexCount );
    return fabs(v4 / 6.0);
  }
  return result;
}


// GetVsSignatureFromResourceHeader  (line 3226, @0x00000000031cb240, libserver.so)  // inlines: As<CSchemaType_DeclaredClass>, CSchemaLoadContext, CSisterResourceBlockLoader, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CallOnUnserializationCallbacks, EnsureTypeIsClassWithBinding, Free, FreeMemory, Get, GetBlock<ResourceEditInfoBlock_t>, GetPtr, GetRawPtr, GetRootObject<VsInputSignature_t>, GetRootObjectOfType, GetRootObjectVoid, GetValue, InternalAs, Load, MemAlloc_FreeAlignedFunc, Purge, RemoveAll, ResolveOffset, Resource_GetBlock<ResourceEditInfoBlock_t>, SchemaMetaGetPtr2, SchemaTypeOf<VsInputSignature_t>, SchemaTypeScope, TakeControlOfObject, TakeControlOfObjects, V_strlen, _V_strcmp, operator char const*, operator[], ~CSchemaLoadContext, ~CSisterResourceBlockLoader, ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: strlen, LoadSisterMaterialResourceForMesh, Resource_GetBlock, CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler, operator delete, CUtlString::FreeMemoryBlock, CUtlBuffer::CUtlBuffer, CUtlBuffer::PutString, CUtlBuffer::SeekGet, CUtlMemory<unsigned char, int>::Purge, CSchemaClassInfo::MetaGetPtr, CUtlMemory<void*, int>::Purge (18 total)
// callers: GetMeshMaterialInfo
// strings: "VSInputSignature", "MUnserializationCallback", "VsInputSignature_t"
// globals: SchemaTypeOf<VsInputSignature_t>(void)::s_pTypeOf
VsInputSignature_t *__fastcall GetVsSignatureFromResourceHeader(
        const char *pMaterialName,
        IResourceCompilerContext *pContext,
        bool bForceCompile)
{
  _DWORD *Block; // rax
  _DWORD *v7; // r12
  int v8; // edx
  int v9; // ecx
  char *v10; // r13
  char *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rsi
  const char *v15; // rsi
  VsInputSignature_t *v16; // r12
  CIntrospectedResourceDataHandler *m_pDataHandler; // rbx
  int v19; // edx
  char *v20; // rax
  const char *v21; // rsi
  char *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r13
  const CSchemaClassInfo *const *v29; // r12
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rax
  void (__fastcall **Ptr)(void *); // rax
  void (__fastcall *v34)(void *); // rax
  __int64 (__fastcall *v35)(ISchemaSystem *, const char *); // rbx
  const char *NameOfModule; // rax
  __int64 v37; // rax
  int v38; // [rsp+1Ch] [rbp-114h] BYREF
  CSisterResourceBlockLoader materialResource; // [rsp+20h] [rbp-110h] BYREF
  CUtlBuffer sigBuf; // [rsp+40h] [rbp-F0h] BYREF
  CSchemaLoadContext ctx; // [rsp+90h] [rbp-A0h] BYREF

  if ( pContext == 0
    || pMaterialName == 0
    || strlen(pMaterialName) <= 0
    || bForceCompile && (*(*pContext + 168LL))(pContext, pMaterialName) == 0 )
  {
    return 0;
  }
  memset(&materialResource, 0, 25);
  LoadSisterMaterialResourceForMesh(&materialResource, pContext, pMaterialName, bForceCompile);
  Block = Resource_GetBlock(materialResource.m_pHeader, 0x49444552u);
  v7 = Block;
  if ( Block != 0 && (v8 = Block[19]) > 0 )
  {
    v9 = Block[18];
    v10 = (Block + 18);
    v11 = 0;
    if ( v9 != 0 )
      v11 = &v10[v9];
    v12 = 0;
    v13 = 8LL * (v8 - 1) + 8;
    while ( 1 )
    {
      v14 = *v11;
      if ( v14 != 0 )
      {
        v15 = &v11[v14];
        if ( v15 != 0 && strcmp(v15, "VSInputSignature") == 0 )
          break;
      }
      v12 += 8;
      v11 += 8;
      if ( v12 == v13 )
        goto LABEL_14;
    }
    CUtlBuffer::CUtlBuffer(&sigBuf, 0, 0, 1);
    v19 = v7[18];
    v20 = 0;
    if ( v19 != 0 )
      v20 = &v10[v19];
    v21 = "";
    v22 = &v20[v12];
    v23 = *(v22 + 1);
    if ( v23 != 0 )
    {
      v24 = &v22[v23 + 4];
      if ( v24 != 0 )
        v21 = v24;
    }
    CUtlBuffer::PutString(&sigBuf, v21);
    CUtlBuffer::SeekGet(&sigBuf, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
    ctx.m_Objects.m_Size = 0;
    memset(&ctx.m_Objects.m_Memory, 0, 20);
    memset(&ctx.m_ObjectTypes.m_Memory, 0, 20);
    memset(&ctx.m_ObjectOwnedByContext.m_Memory, 0, 28);
    ctx.m_ErrorMessage.m_pString = 0;
    ctx.m_nFlags = 0;
    v25 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
    if ( (*(*v25 + 136LL))(v25, 0, &sigBuf, &ctx) == 0 || ctx.m_Objects.m_Size <= 0 )
      goto LABEL_31;
    v27 = 0;
    v28 = 8LL * (ctx.m_Objects.m_Size - 1) + 8;
    do
    {
      v29 = ctx.m_ObjectTypes.m_Memory.m_pMemory[v27 / 8];
      if ( (**v29)(v29) == 5 && ((*v29)->m_StaticFields.m_Data.m_pImplElements)(v29) == 4 )
      {
        Ptr = CSchemaClassInfo::MetaGetPtr(
                v29[6],
                "MUnserializationCallback",
                SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
                0);
        if ( Ptr != 0 )
        {
          v34 = *Ptr;
          if ( v34 != 0 )
            v34(ctx.m_Objects.m_Memory.m_pMemory[v27 / 8]);
        }
      }
      v27 += 8LL;
    }
    while ( v27 != v28 );
    if ( ctx.m_Objects.m_Size <= 0 || ctx.m_pAdditionalAllocation != 0 )
    {
LABEL_31:
      v26 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
      (*(*v26 + 168LL))(v26, &ctx);
      if ( ctx.m_ErrorMessage.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&ctx.m_ErrorMessage);
      ctx.m_ObjectOwnedByContext.m_Size = 0;
      if ( (ctx.m_ObjectOwnedByContext.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<bool,int>::Purge(&ctx.m_ObjectOwnedByContext.m_Memory);
        if ( (ctx.m_ObjectOwnedByContext.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<bool,int>::Purge(&ctx.m_ObjectOwnedByContext.m_Memory);
      }
      ctx.m_ObjectTypes.m_Size = 0;
      if ( (ctx.m_ObjectTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CSchemaType const*,int>::Purge(&ctx.m_ObjectTypes.m_Memory);
        if ( (ctx.m_ObjectTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CSchemaType const*,int>::Purge(&ctx.m_ObjectTypes.m_Memory);
      }
      ctx.m_Objects.m_Size = 0;
      if ( (ctx.m_Objects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<void *,int>::Purge(&ctx.m_Objects.m_Memory);
        if ( (ctx.m_Objects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<void *,int>::Purge(&ctx.m_Objects.m_Memory);
      }
      v16 = 0;
      CUtlMemory<unsigned char,int>::Purge(&sigBuf.m_Memory);
    }
    else
    {
      v38 = 0;
      v30 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
      (*(*v30 + 160LL))(v30, &ctx, 1, &v38);
      v31 = SchemaTypeOf<VsInputSignature_t>(void)::s_pTypeOf;
      if ( (SchemaTypeOf<VsInputSignature_t>(void)::s_pTypeOf != 0
         || (v35 = *(*g_pSchemaSystem + 104LL),
             NameOfModule = GetNameOfModule(),
             v37 = v35(g_pSchemaSystem, NameOfModule),
             v31 = (*(*v37 + 88LL))(v37, "VsInputSignature_t"),
             SchemaTypeOf<VsInputSignature_t>(void)::s_pTypeOf = v31,
             v31 != 0))
        && (**v31)(v31) == 5
        && (*(*v31 + 48LL))(v31) == 4
        && v31[6] != 0 )
      {
        v16 = 0;
        if ( ctx.m_Objects.m_Size > 0 )
          v16 = *ctx.m_Objects.m_Memory.m_pMemory;
        if ( (*(**ctx.m_ObjectTypes.m_Memory.m_pMemory + 88LL))(*ctx.m_ObjectTypes.m_Memory.m_pMemory, v31) == 0 )
          v16 = 0;
      }
      else
      {
        v16 = 0;
      }
      v32 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
      (*(*v32 + 168LL))(v32, &ctx);
      if ( ctx.m_ErrorMessage.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&ctx.m_ErrorMessage);
      ctx.m_ObjectOwnedByContext.m_Size = 0;
      if ( (ctx.m_ObjectOwnedByContext.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<bool,int>::Purge(&ctx.m_ObjectOwnedByContext.m_Memory);
        if ( (ctx.m_ObjectOwnedByContext.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<bool,int>::Purge(&ctx.m_ObjectOwnedByContext.m_Memory);
      }
      ctx.m_ObjectTypes.m_Size = 0;
      if ( (ctx.m_ObjectTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CSchemaType const*,int>::Purge(&ctx.m_ObjectTypes.m_Memory);
        if ( (ctx.m_ObjectTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CSchemaType const*,int>::Purge(&ctx.m_ObjectTypes.m_Memory);
      }
      ctx.m_Objects.m_Size = 0;
      if ( (ctx.m_Objects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<void *,int>::Purge(&ctx.m_Objects.m_Memory);
        if ( (ctx.m_Objects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<void *,int>::Purge(&ctx.m_Objects.m_Memory);
      }
      CUtlMemory<unsigned char,int>::Purge(&sigBuf.m_Memory);
    }
  }
  else
  {
LABEL_14:
    v16 = 0;
  }
  if ( materialResource.m_pHeader != 0 && materialResource.m_bOwnHeader )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((materialResource.m_pHeader & 0xFFFFFFFFFFFFFFF8LL) - 8));
  m_pDataHandler = materialResource.m_pDataHandler;
  materialResource.m_bOwnHeader = 0;
  materialResource.m_pHeader = 0;
  if ( materialResource.m_pDataHandler != 0 )
  {
    CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(materialResource.m_pDataHandler);
    operator delete(m_pDataHandler);
    materialResource.m_pDataHandler = 0;
  }
  if ( materialResource.m_resourceName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&materialResource.m_resourceName);
  return v16;
}


// GetMeshMaterialInfo  (line 3282, @0x00000000031ce520, libserver.so)  // inlines: AddToTail, CSisterResourceBlockLoader, CUtlString, Construct<VsInputSignatureElement_t>, Element, Free, GetPtr, GetRawPtr, GetValue, GrowMemory, IsPresent, LoadInternal, Load_NoRecompile, MemAlloc_FreeAlignedFunc, Purge, ResolveOffset, SchemaMetaGetPtr2, SchemaMetaIsPresent2, Tail, UnserializeIntrospectedDataBlock, UnserializeIntrospectedDataBlock<1952542070ull, MaterialResourceData_t>, V_strcpy_safe<260ul>, V_strcpy_safe<64ul>, VsInputSignatureElement_t, memset, operator char const*, operator[], ~CCopyableUtlVector, ~CSisterResourceBlockLoader, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~VsInputSignature_t
// calls: FixupResourceName, GetVsSignatureFromResourceHeader, CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::AddVectorToTail<CUtlMemory<VsInputSignatureElement_t, int> >, CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::RemoveAll, operator delete, CUtlString::operator=, FindDiskDataClassForResourceType, CIntrospectedResourceDataHandler::GetData, V_stricmp_fast, _V_strncpy, CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler, CUtlString::FreeMemoryBlock (25 total)
// strings: "mapbuilder.nodraw", "mapbuilder.occluder", "PosXYZ", "MResourceVersion", "materials/error.vmat"
bool __fastcall GetMeshMaterialInfo(
        const CMesh *pMesh,
        ShaderInputSignatureDesc_t *pShaderInputDesc,
        bool *const bHasNoDraw,
        bool *const bIsOccluder,
        IResourceCompilerContext *pContext,
        bool bForceCompile)
{
  VsInputSignature_t *VsSignatureFromResourceHeader; // r14
  __int64 v10; // rax
  const ResourceFileHeader_t **v11; // r12
  const CSchemaClassBindingBase *m_pBinding; // rbx
  CIntrospectedResourceDataHandler *m_pDataHandler; // rdi
  int *Data; // rax
  int *v15; // rbx
  __int64 v16; // r12
  char *v17; // r14
  int v18; // edx
  char *v19; // rax
  __int64 v20; // r13
  const char *v21; // rdi
  char *v22; // rax
  __int64 v23; // rdx
  const char *v24; // rdx
  int v25; // edx
  char *v26; // rax
  int v27; // edx
  char *v28; // rax
  const char *v29; // rdi
  char *v30; // rax
  __int64 v31; // rdx
  const char *v32; // rdx
  int v33; // edx
  char *v34; // rax
  int v35; // r13d
  int m_Size; // r13d
  int v37; // ecx
  VsInputSignatureElement_t *m_pMemory; // rax
  int v39; // ecx
  VsInputSignatureElement_t *v40; // rdx
  VsInputSignatureElement_t *v41; // r13
  const ResourceFileHeader_t *m_pHeader; // rdx
  bool v43; // r12
  CIntrospectedResourceDataHandler *v44; // rbx
  __int64 (__fastcall *v46)(IResourceSystem *, const char *, __int64, _QWORD); // r13
  const char *v47; // rax
  const char *v48; // rax
  ResourceId_t v49; // rax
  const CSchemaClassInfo *m_pClassInfo_N; // r12
  uint16 v51; // r13
  char v52; // r14
  CIntrospectedResourceDataHandler *v53; // r12
  bool inited; // al
  uint16 *Ptr; // rax
  uint64 nId; // [rsp+8h] [rbp-188h]
  const ResourceBindingBase_t *hResource; // [rsp+10h] [rbp-180h]
  CSisterResourceBlockLoader material; // [rsp+30h] [rbp-160h] BYREF
  char materialName[264]; // [rsp+50h] [rbp-140h] BYREF
  unsigned __int64 v62; // [rsp+158h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  FixupResourceName(pMesh->m_materialName, 0x74616D76u, materialName, 260);
  if ( pShaderInputDesc != 0 )
  {
    VsSignatureFromResourceHeader = GetVsSignatureFromResourceHeader(materialName, pContext, bForceCompile);
    if ( VsSignatureFromResourceHeader == 0 )
    {
      _V_strncpy(materialName, "materials/error.vmat", 260);
      VsSignatureFromResourceHeader = GetVsSignatureFromResourceHeader(materialName, pContext, bForceCompile);
      if ( VsSignatureFromResourceHeader == 0 )
        return 0;
    }
    CUtlVectorBase<VsInputSignatureElement_t,CUtlMemory<VsInputSignatureElement_t,int>>::AddVectorToTail<CUtlMemory<VsInputSignatureElement_t,int>>(
      &pShaderInputDesc->m_inputElements,
      &VsSignatureFromResourceHeader->m_elems);
    CUtlVectorBase<VsInputSignatureElement_t,CUtlMemory<VsInputSignatureElement_t,int>>::RemoveAll(&VsSignatureFromResourceHeader->m_elems);
    if ( (VsSignatureFromResourceHeader->m_elems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<VsInputSignatureElement_t,int>::Purge(&VsSignatureFromResourceHeader->m_elems.m_Memory);
      if ( (VsSignatureFromResourceHeader->m_elems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<VsInputSignatureElement_t,int>::Purge(&VsSignatureFromResourceHeader->m_elems.m_Memory);
    }
    operator delete(VsSignatureFromResourceHeader);
  }
  memset(&material, 0, 25);
  *bHasNoDraw = 0;
  *bIsOccluder = 0;
  if ( g_pAssetSystem != 0
    && (v10 = (*(*g_pAssetSystem + 184LL))(g_pAssetSystem, materialName)) != 0
    && (v11 = (*(*v10 + 176LL))(v10)) != 0 )
  {
    CUtlString::operator=(&material.m_resourceName, materialName);
    material.m_bOwnHeader = 0;
    material.m_pHeader = *v11;
  }
  else
  {
    CSisterResourceBlockLoader::BlockingLoadResourceFileData(&material, materialName);
  }
  m_pBinding = FindDiskDataClassForResourceType(0x74616D76u)->m_pBinding;
  if ( material.m_pHeader != 0 )
  {
    m_pDataHandler = material.m_pDataHandler;
    if ( material.m_pDataHandler != 0 )
      goto LABEL_11;
    v46 = *(*g_pResourceSystem + 256LL);
    v47 = CUtlString::Get(&material.m_resourceName);
    hResource = v46(g_pResourceSystem, v47, 1952542070, 0);
    v48 = CUtlString::Get(&material.m_resourceName);
    v49.m_Data = ComputeResourceIdFromResourceName(v48).m_Data;
    m_pClassInfo_N = m_pBinding->m_pClassInfo_N;
    v51 = 0;
    v52 = 0;
    nId = v49.m_Data;
    if ( CSchemaClassInfo::MetaIsPresent(
           m_pClassInfo_N,
           "MResourceVersion",
           SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
           0) )
    {
      Ptr = CSchemaClassInfo::MetaGetPtr(
              m_pClassInfo_N,
              "MResourceVersion",
              SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
              0);
      if ( Ptr != 0 )
        v51 = *Ptr;
      v52 = 1;
    }
    v53 = operator new(0x80u);
    CIntrospectedResourceDataHandler::CIntrospectedResourceDataHandler(v53, 0x74616D76u, m_pBinding, 0, v52 & 1, v51);
    material.m_pDataHandler = v53;
    inited = CIntrospectedResourceDataHandler::InitNoFixup(v53, hResource, nId, material.m_pHeader);
    m_pHeader = material.m_pHeader;
    if ( inited )
    {
      m_pDataHandler = material.m_pDataHandler;
LABEL_11:
      Data = CIntrospectedResourceDataHandler::GetData(m_pDataHandler);
      v15 = Data;
      if ( Data != 0 )
      {
        if ( Data[15] > 0 )
        {
          v16 = 0;
          v17 = (Data + 14);
          do
          {
            while ( 1 )
            {
              v18 = v15[14];
              v19 = 0;
              if ( v18 != 0 )
                v19 = &v17[v18];
              v20 = 8 * v16;
              v21 = "";
              v22 = &v19[8 * v16];
              v23 = *v22;
              if ( v23 != 0 )
              {
                v24 = &v22[v23];
                if ( v24 != 0 )
                  v21 = v24;
              }
              if ( V_stricmp_fast(v21, "mapbuilder.nodraw") == 0 )
              {
                v25 = v15[14];
                v26 = 0;
                if ( v25 != 0 )
                  v26 = &v17[v25];
                *bHasNoDraw = *&v26[v20 + 4] != 0;
              }
              v27 = v15[14];
              v28 = 0;
              if ( v27 != 0 )
                v28 = &v17[v27];
              v29 = "";
              v30 = &v28[v20];
              v31 = *v30;
              if ( v31 != 0 )
              {
                v32 = &v30[v31];
                if ( v32 != 0 )
                  v29 = v32;
              }
              if ( V_stricmp_fast(v29, "mapbuilder.occluder") == 0 )
              {
                v33 = v15[14];
                v34 = 0;
                if ( v33 != 0 )
                  v34 = &v17[v33];
                v35 = *&v34[v20 + 4];
                *bIsOccluder = v35 != 0;
                if ( pShaderInputDesc != 0 && v35 != 0 )
                  break;
              }
              if ( v15[15] <= ++v16 )
                goto LABEL_39;
            }
            CUtlVectorBase<VsInputSignatureElement_t,CUtlMemory<VsInputSignatureElement_t,int>>::RemoveAll(&pShaderInputDesc->m_inputElements);
            m_Size = pShaderInputDesc->m_inputElements.m_Size;
            v37 = pShaderInputDesc->m_inputElements.m_Size;
            if ( pShaderInputDesc->m_inputElements.m_Size == pShaderInputDesc->m_inputElements.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<VsInputSignatureElement_t,int>::Grow(&pShaderInputDesc->m_inputElements.m_Memory, 1);
              v37 = pShaderInputDesc->m_inputElements.m_Size;
            }
            m_pMemory = pShaderInputDesc->m_inputElements.m_Memory.m_pMemory;
            v39 = v37 + 1;
            pShaderInputDesc->m_inputElements.m_Size = v39;
            v40 = &m_pMemory[m_Size];
            if ( v40 != 0 )
            {
              v40->m_nD3DSemanticIndex = 0;
              memset(v40, 0, 0x40u);
              memset(v40->m_pSemantic, 0, sizeof(v40->m_pSemantic));
              memset(v40->m_pD3DSemanticName, 0, sizeof(v40->m_pD3DSemanticName));
              v39 = pShaderInputDesc->m_inputElements.m_Size;
              m_pMemory = pShaderInputDesc->m_inputElements.m_Memory.m_pMemory;
            }
            v41 = &m_pMemory[v39 - 1];
            _V_strncpy(v41, "Position", 64);
            _V_strncpy(v41->m_pSemantic, "PosXYZ", 64);
            _V_strncpy(v41->m_pD3DSemanticName, "POSITION", 64);
            v41->m_nD3DSemanticIndex = 0;
            ++v16;
          }
          while ( v15[15] > v16 );
        }
LABEL_39:
        m_pHeader = material.m_pHeader;
        v43 = 1;
      }
      else
      {
        m_pHeader = material.m_pHeader;
        v43 = 0;
      }
      goto LABEL_40;
    }
  }
  else
  {
    m_pHeader = 0;
  }
  v43 = 0;
LABEL_40:
  if ( m_pHeader != 0 && material.m_bOwnHeader )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pHeader & 0xFFFFFFFFFFFFFFF8LL) - 8));
  v44 = material.m_pDataHandler;
  material.m_bOwnHeader = 0;
  material.m_pHeader = 0;
  if ( material.m_pDataHandler != 0 )
  {
    CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(material.m_pDataHandler);
    operator delete(v44);
    material.m_pDataHandler = 0;
  }
  if ( material.m_resourceName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&material.m_resourceName);
  return v43;
}


// LoadSisterMaterialResourceForMesh  (line 3359, @0x00000000031cafa0, libserver.so)  // inlines: Free, LoadInternal, Load_EnsureCompiled, Load_NoRecompile, MemAlloc_FreeAlignedFunc
// calls: GenerateStandardFullPathForResourceName, CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler, operator delete, CUtlString::operator=, CSisterResourceBlockLoader::BlockingLoadResourceFileData, __stack_chk_fail
// callers: GetVsSignatureFromResourceHeader
bool __fastcall LoadSisterMaterialResourceForMesh(
        CSisterResourceBlockLoader *const materialResource,
        IResourceCompilerContext *pContext,
        const char *pMaterialName,
        bool bForceCompile)
{
  char StandardFullPathForResourceName; // r12
  const ResourceFileHeader_t *v10; // rax
  CIntrospectedResourceDataHandler *v11; // r12
  __int64 v12; // rax
  const ResourceFileHeader_t **v13; // r12
  const ResourceFileHeader_t *v14; // rax
  const ResourceFileHeader_t *m_pHeader; // rax
  CIntrospectedResourceDataHandler *m_pDataHandler; // rax
  unsigned __int8 (__fastcall ***v17)(_QWORD); // rax
  __int64 v18; // rax
  const ResourceFileHeader_t **v19; // r14
  CIntrospectedResourceDataHandler *pMem; // [rsp+8h] [rbp-148h]
  char szResourceFullPath[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+118h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  StandardFullPathForResourceName = GenerateStandardFullPathForResourceName(
                                      pMaterialName,
                                      ResourcePathGenerationType_t::RESOURCE_PATH_CONTENT,
                                      szResourceFullPath,
                                      260);
  if ( StandardFullPathForResourceName == 0 )
    goto LABEL_2;
  if ( (*(*pContext + 200LL))(pContext) == 0 || bForceCompile )
  {
    m_pHeader = materialResource->m_pHeader;
    if ( m_pHeader != 0 && materialResource->m_bOwnHeader )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pHeader & 0xFFFFFFFFFFFFFFF8LL) - 8));
    m_pDataHandler = materialResource->m_pDataHandler;
    materialResource->m_bOwnHeader = 0;
    materialResource->m_pHeader = 0;
    if ( m_pDataHandler != 0 )
    {
      pMem = m_pDataHandler;
      CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(m_pDataHandler);
      operator delete(pMem);
      materialResource->m_pDataHandler = 0;
    }
    v17 = (*(*pContext + 168LL))(pContext, pMaterialName);
    if ( v17 != 0 && (**v17)(v17) != 0 )
    {
      if ( g_pAssetSystem != 0 )
      {
        v18 = (*(*g_pAssetSystem + 184LL))(g_pAssetSystem, pMaterialName);
        if ( v18 != 0 )
        {
          v19 = (*(*v18 + 176LL))(v18);
          if ( v19 != 0 )
          {
            CUtlString::operator=(&materialResource->m_resourceName, pMaterialName);
            materialResource->m_bOwnHeader = 0;
            materialResource->m_pHeader = *v19;
            return StandardFullPathForResourceName;
          }
        }
      }
      StandardFullPathForResourceName = CSisterResourceBlockLoader::BlockingLoadResourceFileData(
                                          materialResource,
                                          pMaterialName);
      if ( StandardFullPathForResourceName != 0 )
        return StandardFullPathForResourceName;
    }
    else
    {
      materialResource->m_bOwnHeader = 0;
      materialResource->m_pHeader = 0;
    }
LABEL_2:
    StandardFullPathForResourceName = 0;
    if ( bForceCompile )
      return StandardFullPathForResourceName;
  }
  v10 = materialResource->m_pHeader;
  if ( v10 != 0 && materialResource->m_bOwnHeader )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v10 & 0xFFFFFFFFFFFFFFF8LL) - 8));
  v11 = materialResource->m_pDataHandler;
  materialResource->m_bOwnHeader = 0;
  materialResource->m_pHeader = 0;
  if ( v11 != 0 )
  {
    CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(v11);
    operator delete(v11);
    materialResource->m_pDataHandler = 0;
  }
  if ( g_pAssetSystem == 0 )
    return CSisterResourceBlockLoader::BlockingLoadResourceFileData(materialResource, pMaterialName);
  v12 = (*(*g_pAssetSystem + 184LL))(g_pAssetSystem, pMaterialName);
  if ( v12 == 0 )
    return CSisterResourceBlockLoader::BlockingLoadResourceFileData(materialResource, pMaterialName);
  v13 = (*(*v12 + 176LL))(v12);
  if ( v13 == 0 )
    return CSisterResourceBlockLoader::BlockingLoadResourceFileData(materialResource, pMaterialName);
  CUtlString::operator=(&materialResource->m_resourceName, pMaterialName);
  materialResource->m_bOwnHeader = 0;
  v14 = *v13;
  StandardFullPathForResourceName = 1;
  materialResource->m_pHeader = v14;
  return StandardFullPathForResourceName;
}


// CMesh::IsConvex  (line 3392, @0x00000000031ccd40, libserver.so)  // inlines: Purge, RemoveAll, ~CMeshEdgeSplitter, ~CUtlMap, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CMeshEdgeSplitter::CMeshEdgeSplitter, CMeshEdgeSplitter::GetMinPrimaryHalfEdgeAngle, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::RemoveAll, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int>::Purge, CMeshEdgeSplitter::~CMeshEdgeSplitter, _Unwind_Resume
__int64 __fastcall CMesh::IsConvex(CMesh *const this, __m128i a2, float flTolerance)
{
  float v3; // r12d
  float v4; // xmm1_4
  float MinPrimaryHalfEdgeAngle; // xmm0_4
  CMeshEdgeSplitter edges; // [rsp+0h] [rbp-C0h] BYREF

  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  CMeshEdgeSplitter::CMeshEdgeSplitter(&edges, this);
  if ( edges.m_bNonManifold )
  {
    v3 = 0.0;
    edges.m_splitList.m_heap.m_Size = 0;
    if ( (edges.m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_3;
  }
  else
  {
    MinPrimaryHalfEdgeAngle = CMeshEdgeSplitter::GetMinPrimaryHalfEdgeAngle(&edges, v4);
    edges.m_splitList.m_heap.m_Size = 0;
    LOBYTE(v3) = MinPrimaryHalfEdgeAngle > -v3;
    if ( (edges.m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_3;
  }
  CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(&edges.m_splitList.m_heap.m_Memory);
  if ( (edges.m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(&edges.m_splitList.m_heap.m_Memory);
LABEL_3:
  CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::RemoveAll(&edges.m_heSec.m_Tree);
  edges.m_heSec.m_Tree.m_FirstFree = -1;
  if ( (edges.m_heSec.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
  {
    edges.m_heSec.m_Tree.m_LastAlloc.index = -1;
  }
  else
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edges.m_heSec.m_Tree.m_Elements);
    edges.m_heSec.m_Tree.m_LastAlloc.index = -1;
    if ( (edges.m_heSec.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edges.m_heSec.m_Tree.m_Elements);
  }
  CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::RemoveAll(&edges.m_hePri.m_Tree);
  edges.m_hePri.m_Tree.m_FirstFree = -1;
  if ( (edges.m_hePri.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edges.m_hePri.m_Tree.m_Elements);
    edges.m_hePri.m_Tree.m_LastAlloc.index = -1;
    if ( (edges.m_hePri.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&edges.m_hePri.m_Tree.m_Elements);
  }
  return LODWORD(v3);
}


// CreatePositionOnlyMeshFromMesh  (line 3413, @0x00000000031d1a10, libserver.so)  // inlines: GetTotalIndexSizeInBytes, GetVertex, V_strcpy_safe<260ul>, memcpy, operator=
// calls: operator new, CMesh::CMesh, CMesh::AllocateMesh, _V_strncpy, CopyVertex, memcpy, ApplyStandardWeldAndClean, operator delete, _Unwind_Resume
// globals: g_PositionAttribute
CMesh *__fastcall CreatePositionOnlyMeshFromMesh(CMesh *pSourceMesh, __m128i a2, float flWeldEpsilon)
{
  float v3; // r14d
  CMesh *v5; // r13
  int v6; // ebx
  const float *v7; // rsi
  int v8; // edx
  float v9; // xmm1_4

  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  v5 = operator new(0x180u);
  CMesh::CMesh(v5);
  v6 = 0;
  CMesh::AllocateMesh(v5, pSourceMesh->m_nVertexCount, pSourceMesh->m_nIndexCount, 3, &g_PositionAttribute, 1);
  _V_strncpy(v5->m_materialName, pSourceMesh->m_materialName, 260);
  if ( pSourceMesh->m_nVertexCount > 0 )
  {
    do
    {
      v7 = &pSourceMesh->m_pVerts[v6 * pSourceMesh->m_nVertexStrideFloats];
      v8 = v6 * v5->m_nVertexStrideFloats;
      ++v6;
      CopyVertex(&v5->m_pVerts[v8], v7, 3);
    }
    while ( pSourceMesh->m_nVertexCount > v6 );
  }
  memcpy(v5->m_pIndices, pSourceMesh->m_pIndices, (4 * pSourceMesh->m_nIndexCount));
  v5->m_bNoCollapse = pSourceMesh->m_bNoCollapse;
  v5->m_bUseTintColor = pSourceMesh->m_bUseTintColor;
  v5->m_vTintColor.x = pSourceMesh->m_vTintColor.x;
  v5->m_vTintColor.y = pSourceMesh->m_vTintColor.y;
  v5->m_vTintColor.z = pSourceMesh->m_vTintColor.z;
  v5->m_vTintColor.w = pSourceMesh->m_vTintColor.w;
  ApplyStandardWeldAndClean(v5, v3, v9);
  return v5;
}


// CMesh::BuildIslandMap  (line 3438, @0x00000000031d00d0, libserver.so)  // inlines: AddMultipleToTail, BuildIslandMap, CDisjointSetForest, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureExists, Find, InsertMultipleBefore, Purge, RemoveAll, SetCountNonDestructively, Union, operator[], ~CDisjointSetForest, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDisjointSetForest::Union, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::GrowVector, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::ShiftElementsRight, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::RemoveMultipleFromTail, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue, CUtlMemory<int, int>::Purge, CUtlMemory<CDisjointSetForest::Node_t, int>::Purge, BuildIslandMap, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase
__int64 __fastcall CMesh::BuildIslandMap(
        const CMesh *const this,
        CUtlVector<int,CUtlMemory<int,int> > *const vertToIsland,
        CMesh::CAttrArray<int> posMap)
{
  int v3; // r12d
  uint32 *m_pIndices; // rax
  float v5; // r13d
  int v6; // r14d
  int m_Size; // ebx
  int v8; // r15d
  int v9; // r12d
  CDisjointSetForest::Node_t *m_pMemory; // rax
  int i; // ecx
  int nParent; // edx
  __int64 v13; // rbx
  CDisjointSetForest::Node_t *v14; // rcx
  int v15; // esi
  int j; // esi
  int v17; // ecx
  CDisjointSetForest::Node_t *v18; // rsi
  int v19; // edi
  CDisjointSetForest::Node_t *v20; // rdi
  CDisjointSetForest::Node_t *v21; // rax
  CDisjointSetForest::Node_t *v22; // rax
  int k; // ecx
  int v24; // edx
  CDisjointSetForest::Node_t *v25; // rcx
  int v26; // esi
  float m; // esi
  int v28; // ecx
  CDisjointSetForest::Node_t *v29; // rbx
  int v30; // esi
  CDisjointSetForest::Node_t *v31; // rdi
  CDisjointSetForest::Node_t *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // edi
  float *m_pBase; // r10
  unsigned int v39; // r12d
  int v40; // esi
  int n; // edx
  __int64 v42; // rax
  CDisjointSetForest::Node_t *v43; // rdx
  int v44; // ecx
  int *v45; // rdx
  int v46; // eax
  __int64 v49; // [rsp+28h] [rbp-98h]
  int nTri; // [rsp+34h] [rbp-8Ch]
  int src; // [rsp+4Ch] [rbp-74h] BYREF
  CDisjointSetForest forest; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > posToIsland; // [rsp+70h] [rbp-50h] BYREF

  if ( posMap.m_pBase == 0 )
    return BuildIslandMap(this->m_nVertexCount, this->m_nIndexCount, this->m_pIndices, vertToIsland);
  forest.m_Nodes.m_Size = 0;
  forest.m_Nodes.m_Memory.m_pMemory = 0;
  forest.m_Nodes.m_Memory.m_nAllocationCount = 0;
  forest.m_Nodes.m_Memory.m_nGrowSize = 0;
  if ( this->m_nIndexCount > 0 )
  {
    v3 = 0;
    v49 = 0;
    nTri = 0;
    while ( 1 )
    {
      m_pIndices = this->m_pIndices;
      v5 = posMap.m_pBase[posMap.m_nStride * m_pIndices[v49]];
      v6 = LODWORD(posMap.m_pBase[posMap.m_nStride * m_pIndices[v49 + 1]]);
      m_Size = v3;
      v8 = LODWORD(posMap.m_pBase[posMap.m_nStride * m_pIndices[v49 + 2]]);
      if ( SLODWORD(v5) >= v3 )
      {
        if ( LODWORD(v5) + 1 - v3 > 0 )
        {
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::GrowVector(
            &forest.m_Nodes,
            LODWORD(v5) + 1 - v3);
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::ShiftElementsRight(
            &forest.m_Nodes,
            v3,
            LODWORD(v5) + 1 - v3);
        }
        else if ( LODWORD(v5) + 1 != v3 )
        {
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::RemoveMultipleFromTail(
            &forest.m_Nodes,
            v3 - (LODWORD(v5) + 1));
        }
        v35 = v3;
        do
        {
          forest.m_Nodes.m_Memory.m_pMemory[v35].nRank = 0;
          forest.m_Nodes.m_Memory.m_pMemory[v35++].nParent = v3++;
        }
        while ( LODWORD(v5) + 1 != v3 );
        m_Size = forest.m_Nodes.m_Size;
      }
      v9 = m_Size;
      if ( v6 >= m_Size )
      {
        if ( v6 + 1 - m_Size > 0 )
        {
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::GrowVector(
            &forest.m_Nodes,
            v6 + 1 - m_Size);
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::ShiftElementsRight(
            &forest.m_Nodes,
            m_Size,
            v6 + 1 - m_Size);
        }
        else if ( v6 + 1 != m_Size )
        {
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::RemoveMultipleFromTail(
            &forest.m_Nodes,
            m_Size - (v6 + 1));
        }
        v34 = m_Size;
        do
        {
          forest.m_Nodes.m_Memory.m_pMemory[v34].nRank = 0;
          forest.m_Nodes.m_Memory.m_pMemory[v34++].nParent = m_Size++;
        }
        while ( v6 + 1 != m_Size );
        v9 = forest.m_Nodes.m_Size;
      }
      if ( v8 >= v9 )
      {
        if ( v8 + 1 - v9 > 0 )
        {
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::GrowVector(
            &forest.m_Nodes,
            v8 + 1 - v9);
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::ShiftElementsRight(
            &forest.m_Nodes,
            v9,
            v8 + 1 - v9);
        }
        else if ( v8 + 1 != v9 )
        {
          CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::RemoveMultipleFromTail(
            &forest.m_Nodes,
            v9 - (v8 + 1));
        }
        v33 = v9;
        do
        {
          forest.m_Nodes.m_Memory.m_pMemory[v33].nRank = 0;
          forest.m_Nodes.m_Memory.m_pMemory[v33++].nParent = v9++;
        }
        while ( v8 + 1 != v9 );
      }
      m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
      for ( i = LODWORD(v5); ; i = forest.m_Nodes.m_Memory.m_pMemory[i].nParent )
      {
        nParent = forest.m_Nodes.m_Memory.m_pMemory[i].nParent;
        if ( i == nParent )
          break;
      }
      v13 = SLODWORD(v5);
      v14 = &forest.m_Nodes.m_Memory.m_pMemory[v13];
      v15 = forest.m_Nodes.m_Memory.m_pMemory[v13].nParent;
      if ( LODWORD(v5) != v15 )
      {
        while ( 1 )
        {
          v14->nParent = nParent;
          m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
          v14 = &forest.m_Nodes.m_Memory.m_pMemory[v15];
          if ( v14->nParent == v15 )
            break;
          v15 = v14->nParent;
        }
      }
      for ( j = v6; ; j = m_pMemory[j].nParent )
      {
        v17 = m_pMemory[j].nParent;
        if ( j == v17 )
          break;
      }
      v18 = &m_pMemory[v6];
      v19 = v18->nParent;
      if ( v6 != v19 )
      {
        while ( 1 )
        {
          v18->nParent = v17;
          m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
          v18 = &forest.m_Nodes.m_Memory.m_pMemory[v19];
          if ( v18->nParent == v19 )
            break;
          v19 = v18->nParent;
        }
      }
      v20 = &m_pMemory[nParent];
      v21 = &m_pMemory[v17];
      if ( v20->nRank > v21->nRank )
      {
        v21->nParent = nParent;
      }
      else if ( v20->nRank < v21->nRank )
      {
        v20->nParent = v17;
      }
      else if ( nParent != v17 )
      {
        v21->nParent = nParent;
        ++forest.m_Nodes.m_Memory.m_pMemory[nParent].nRank;
      }
      CDisjointSetForest::Union(&forest, v6, v8);
      v22 = forest.m_Nodes.m_Memory.m_pMemory;
      for ( k = v8; ; k = forest.m_Nodes.m_Memory.m_pMemory[k].nParent )
      {
        v24 = forest.m_Nodes.m_Memory.m_pMemory[k].nParent;
        if ( k == v24 )
          break;
      }
      v25 = &forest.m_Nodes.m_Memory.m_pMemory[v8];
      v26 = v25->nParent;
      if ( v8 != v26 )
      {
        while ( 1 )
        {
          v25->nParent = v24;
          v22 = forest.m_Nodes.m_Memory.m_pMemory;
          v25 = &forest.m_Nodes.m_Memory.m_pMemory[v26];
          if ( v25->nParent == v26 )
            break;
          v26 = v25->nParent;
        }
      }
      for ( m = v5; ; m = *&v22[SLODWORD(m)].nParent )
      {
        v28 = v22[SLODWORD(m)].nParent;
        if ( LODWORD(m) == v28 )
          break;
      }
      v29 = &v22[v13];
      v30 = v29->nParent;
      if ( LODWORD(v5) != v30 )
      {
        while ( 1 )
        {
          v29->nParent = v28;
          v22 = forest.m_Nodes.m_Memory.m_pMemory;
          v29 = &forest.m_Nodes.m_Memory.m_pMemory[v30];
          if ( v29->nParent == v30 )
            break;
          v30 = v29->nParent;
        }
      }
      v31 = &v22[v24];
      v32 = &v22[v28];
      if ( v31->nRank > v32->nRank )
      {
        v32->nParent = v24;
      }
      else if ( v31->nRank < v32->nRank )
      {
        v31->nParent = v28;
      }
      else if ( v24 != v28 )
      {
        v32->nParent = v24;
        ++forest.m_Nodes.m_Memory.m_pMemory[v24].nRank;
      }
      nTri += 3;
      v49 += 3;
      if ( this->m_nIndexCount <= nTri )
        break;
      v3 = forest.m_Nodes.m_Size;
    }
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(vertToIsland, this->m_nVertexCount);
  posToIsland.m_Size = -1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::FillWithValue(vertToIsland, &posToIsland.m_Size);
  posToIsland.m_Size = 0;
  posToIsland.m_Memory.m_pMemory = 0;
  posToIsland.m_Memory.m_nAllocationCount = 0;
  posToIsland.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&posToIsland, forest.m_Nodes.m_Size);
  src = -1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::FillWithValue(&posToIsland, &src);
  if ( this->m_nVertexCount <= 0 )
  {
    v39 = 0;
  }
  else
  {
    v36 = 0;
    v37 = 0;
    m_pBase = posMap.m_pBase;
    v39 = 0;
    do
    {
      v40 = *m_pBase;
      for ( n = *m_pBase; ; n = forest.m_Nodes.m_Memory.m_pMemory[n].nParent )
      {
        v42 = forest.m_Nodes.m_Memory.m_pMemory[n].nParent;
        if ( n == v42 )
          break;
      }
      v43 = &forest.m_Nodes.m_Memory.m_pMemory[v40];
      v44 = v43->nParent;
      if ( v40 != v44 )
      {
        while ( 1 )
        {
          v43->nParent = v42;
          v43 = &forest.m_Nodes.m_Memory.m_pMemory[v44];
          if ( v44 == v43->nParent )
            break;
          v44 = v43->nParent;
        }
      }
      v45 = &posToIsland.m_Memory.m_pMemory[v42];
      v46 = *v45;
      if ( *v45 < 0 )
      {
        *v45 = v39;
        v46 = v39++;
      }
      ++v37;
      m_pBase += posMap.m_nStride;
      vertToIsland->m_Memory.m_pMemory[v36++] = v46;
    }
    while ( this->m_nVertexCount > v37 );
  }
  posToIsland.m_Size = 0;
  if ( (posToIsland.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<int,int>::Purge(&posToIsland.m_Memory), (posToIsland.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    forest.m_Nodes.m_Size = 0;
    if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return v39;
  }
  else
  {
    CUtlMemory<int,int>::Purge(&posToIsland.m_Memory);
    forest.m_Nodes.m_Size = 0;
    if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return v39;
  }
  CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
  if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
  return v39;
}


// BuildIslandMap  (line 3477, @0x00000000031cfcf0, libserver.so)  // inlines: AddMultipleToTail, CDisjointSetForest, CUtlMemory, CUtlVector, CUtlVectorBase, Find, InsertMultipleBefore, Purge, RemoveAll, SetCount, Union, operator[], ~CDisjointSetForest, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDisjointSetForest::Union, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue, CUtlMemory<CDisjointSetForest::Node_t, int>::Purge, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::RemoveMultipleFromTail, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::GrowVector, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::ShiftElementsRight, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CMesh::BuildIslandMap
int __fastcall BuildIslandMap(
        int nVertexCount,
        int nIndexCount,
        uint32 *m_pIndices,
        CUtlVector<int,CUtlMemory<int,int> > *const vertToIsland)
{
  int *v8; // r15
  int v9; // r14d
  int v10; // r9d
  int v11; // edi
  CDisjointSetForest::Node_t *m_pMemory; // rax
  int i; // ecx
  int nParent; // edx
  CDisjointSetForest::Node_t *v15; // rcx
  int v16; // esi
  int j; // esi
  int v18; // ecx
  CDisjointSetForest::Node_t *v19; // rsi
  int v20; // r9d
  CDisjointSetForest::Node_t *v21; // rdi
  CDisjointSetForest::Node_t *v22; // rax
  int v23; // r9d
  int v24; // edi
  CDisjointSetForest::Node_t *v25; // rax
  int k; // ecx
  int v27; // edx
  CDisjointSetForest::Node_t *v28; // rcx
  int v29; // esi
  int m; // esi
  int v31; // ecx
  CDisjointSetForest::Node_t *v32; // rsi
  int v33; // r9d
  CDisjointSetForest::Node_t *v34; // rdi
  CDisjointSetForest::Node_t *v35; // rax
  __int64 v36; // r8
  int result; // eax
  int n; // ecx
  __int64 v39; // rdx
  CDisjointSetForest::Node_t *v40; // rcx
  int v41; // esi
  int *v42; // rcx
  int *v43; // rsi
  int v44; // edx
  __int64 v45; // rax
  int v46; // [rsp+8h] [rbp-68h]
  int src; // [rsp+1Ch] [rbp-54h] BYREF
  CDisjointSetForest forest; // [rsp+20h] [rbp-50h] BYREF

  forest.m_Nodes.m_Size = 0;
  forest.m_Nodes.m_Memory.m_pMemory = 0;
  forest.m_Nodes.m_Memory.m_nAllocationCount = 0;
  forest.m_Nodes.m_Memory.m_nGrowSize = 0;
  if ( nVertexCount > 0 )
  {
    CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::GrowVector(
      &forest.m_Nodes,
      nVertexCount);
    CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::ShiftElementsRight(
      &forest.m_Nodes,
      0,
      nVertexCount);
    v45 = 0;
    do
    {
      forest.m_Nodes.m_Memory.m_pMemory[v45].nRank = 0;
      forest.m_Nodes.m_Memory.m_pMemory[v45].nParent = v45;
      ++v45;
    }
    while ( nVertexCount > v45 );
  }
  else if ( nVertexCount != 0 )
  {
    CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::RemoveMultipleFromTail(
      &forest.m_Nodes,
      -nVertexCount);
  }
  if ( nIndexCount > 0 )
  {
    v8 = (m_pIndices + 1);
    v9 = 0;
    do
    {
      v10 = *(v8 - 1);
      v11 = *v8;
      m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
      for ( i = v10; ; i = forest.m_Nodes.m_Memory.m_pMemory[i].nParent )
      {
        nParent = forest.m_Nodes.m_Memory.m_pMemory[i].nParent;
        if ( i == nParent )
          break;
      }
      v15 = &forest.m_Nodes.m_Memory.m_pMemory[v10];
      v16 = v15->nParent;
      if ( v10 != v16 )
      {
        while ( 1 )
        {
          v15->nParent = nParent;
          m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
          v15 = &forest.m_Nodes.m_Memory.m_pMemory[v16];
          if ( v15->nParent == v16 )
            break;
          v16 = v15->nParent;
        }
      }
      for ( j = v11; ; j = m_pMemory[j].nParent )
      {
        v18 = m_pMemory[j].nParent;
        if ( j == v18 )
          break;
      }
      v19 = &m_pMemory[v11];
      v20 = v19->nParent;
      if ( v11 != v20 )
      {
        while ( 1 )
        {
          v19->nParent = v18;
          m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
          v19 = &forest.m_Nodes.m_Memory.m_pMemory[v20];
          if ( v19->nParent == v20 )
            break;
          v20 = v19->nParent;
        }
      }
      v21 = &m_pMemory[nParent];
      v22 = &m_pMemory[v18];
      if ( v21->nRank > v22->nRank )
      {
        v22->nParent = nParent;
      }
      else if ( v21->nRank < v22->nRank )
      {
        v21->nParent = v18;
      }
      else if ( nParent != v18 )
      {
        v22->nParent = nParent;
        ++forest.m_Nodes.m_Memory.m_pMemory[nParent].nRank;
      }
      CDisjointSetForest::Union(&forest, *v8, v8[1]);
      v23 = v8[1];
      v24 = *(v8 - 1);
      v25 = forest.m_Nodes.m_Memory.m_pMemory;
      for ( k = v23; ; k = forest.m_Nodes.m_Memory.m_pMemory[k].nParent )
      {
        v27 = forest.m_Nodes.m_Memory.m_pMemory[k].nParent;
        if ( k == v27 )
          break;
      }
      v28 = &forest.m_Nodes.m_Memory.m_pMemory[v23];
      v29 = v28->nParent;
      if ( v23 != v29 )
      {
        while ( 1 )
        {
          v28->nParent = v27;
          v25 = forest.m_Nodes.m_Memory.m_pMemory;
          v28 = &forest.m_Nodes.m_Memory.m_pMemory[v29];
          if ( v28->nParent == v29 )
            break;
          v29 = v28->nParent;
        }
      }
      for ( m = v24; ; m = v25[m].nParent )
      {
        v31 = v25[m].nParent;
        if ( m == v31 )
          break;
      }
      v32 = &v25[v24];
      v33 = v32->nParent;
      if ( v24 != v33 )
      {
        while ( 1 )
        {
          v32->nParent = v31;
          v25 = forest.m_Nodes.m_Memory.m_pMemory;
          v32 = &forest.m_Nodes.m_Memory.m_pMemory[v33];
          if ( v32->nParent == v33 )
            break;
          v33 = v32->nParent;
        }
      }
      v34 = &v25[v27];
      v35 = &v25[v31];
      if ( v34->nRank > v35->nRank )
      {
        v35->nParent = v27;
      }
      else if ( v34->nRank < v35->nRank )
      {
        v34->nParent = v31;
      }
      else if ( v27 != v31 )
      {
        v35->nParent = v27;
        ++forest.m_Nodes.m_Memory.m_pMemory[v27].nRank;
      }
      v9 += 3;
      v8 += 3;
    }
    while ( nIndexCount > v9 );
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(vertToIsland, nVertexCount);
  src = -1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::FillWithValue(vertToIsland, &src);
  if ( nVertexCount <= 0 )
  {
    result = 0;
  }
  else
  {
    v36 = 0;
    result = 0;
    do
    {
      for ( n = v36; ; n = forest.m_Nodes.m_Memory.m_pMemory[n].nParent )
      {
        v39 = forest.m_Nodes.m_Memory.m_pMemory[n].nParent;
        if ( n == v39 )
          break;
      }
      v40 = &forest.m_Nodes.m_Memory.m_pMemory[v36];
      v41 = v40->nParent;
      if ( v36 != v41 )
      {
        while ( 1 )
        {
          v40->nParent = v39;
          v40 = &forest.m_Nodes.m_Memory.m_pMemory[v41];
          if ( v41 == v40->nParent )
            break;
          v41 = v40->nParent;
        }
      }
      v42 = vertToIsland->m_Memory.m_pMemory;
      v43 = &v42[v39];
      v44 = *v43;
      if ( *v43 < 0 )
      {
        *v43 = result;
        v44 = result++;
        v42 = vertToIsland->m_Memory.m_pMemory;
      }
      v42[v36++] = v44;
    }
    while ( nVertexCount > v36 );
  }
  forest.m_Nodes.m_Size = 0;
  if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v46 = result;
    CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
    result = v46;
    if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
      return v46;
    }
  }
  return result;
}


// CMesh::BuildIslandMap  (line 3505, @0x00000000031d00b0, libserver.so)
// calls: BuildIslandMap
// callers: CRnHullSeparator::CRnHullSeparator
int __fastcall CMesh::BuildIslandMap(const CMesh *const this, CUtlVector<int,CUtlMemory<int,int> > *const vertToIsland)
{
  return BuildIslandMap(this->m_nVertexCount, this->m_nIndexCount, this->m_pIndices, vertToIsland);
}


// GetMeshVertices  (line 3510, @0x00000000031cddf0, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, Element, EnsureCapacity, GetVertex, GetVertexPosition, GrowMemory, memcpy, operator[]
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Grow, memcpy
void __fastcall GetMeshVertices(CUtlVector<Vector,CUtlMemory<Vector,int> > *const verts, CMesh *pMesh)
{
  int m_nVertexCount; // r12d
  int v5; // eax
  uint32 m_nGrowSize; // edx
  Vector *v7; // rsi
  int v8; // r12d
  Vector *v9; // rax
  __int64 m_Size; // r13
  float *v11; // r14
  int v12; // eax
  Vector *m_pMemory; // r13
  Vector *v14; // rax

  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(verts);
  m_nVertexCount = pMesh->m_nVertexCount;
  v5 = m_nVertexCount;
  if ( m_nVertexCount > verts->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = verts->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = verts->m_Memory.m_pMemory;
        v14 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nVertexCount);
        verts->m_Memory.m_pMemory = v14;
        if ( m_pMemory != 0 )
          memcpy(v14, m_pMemory, 12LL * verts->m_Memory.m_nAllocationCount);
        verts->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v7 = verts->m_Memory.m_pMemory;
        if ( v7 != 0 )
          verts->m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v7, 12LL * m_nVertexCount);
        else
          verts->m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nVertexCount);
      }
      verts->m_Memory.m_nAllocationCount = m_nVertexCount;
      v5 = pMesh->m_nVertexCount;
    }
  }
  v8 = 0;
  if ( v5 > 0 )
  {
    do
    {
      m_Size = verts->m_Size;
      v11 = &pMesh->m_pVerts[v8 * pMesh->m_nVertexStrideFloats];
      v12 = verts->m_Size;
      if ( m_Size == verts->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&verts->m_Memory, 1);
        v12 = verts->m_Size;
      }
      verts->m_Size = v12 + 1;
      v9 = &verts->m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
      {
        *&v9->x = *v11;
        v9->z = v11[2];
      }
      ++v8;
    }
    while ( pMesh->m_nVertexCount > v8 );
  }
}


// GetMeshVertices  (line 3519, @0x00000000031cdf60, libserver.so)  // inlines: AddMultipleToTail, GetVertex, GetVertexPosition, GrowMemory, GrowVector, InsertMultipleBefore, RemoveMultipleFromTail, SetCount, VectorTransform, operator=, operator[]
// calls: VectorTransform, CUtlMemory<Vector, int>::Grow
// callers: CRnHullSeparator::CRnHullSeparator
void __fastcall GetMeshVertices(
        const matrix3x4_t *const xform,
        CMesh *pMesh,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const vertices)
{
  int m_nVertexCount; // ebx
  __int64 v6; // r15
  int v7; // r14d
  int v8; // edi
  float v9; // xmm1_4
  Vector *v10; // rdx
  float v11; // xmm0_4
  int m_nAllocationCount; // eax
  Vector vPosition; // [rsp+20h] [rbp-50h] BYREF
  float v15[16]; // [rsp+30h] [rbp-40h] BYREF

  m_nVertexCount = pMesh->m_nVertexCount;
  if ( m_nVertexCount - vertices->m_Size > 0 )
  {
    m_nAllocationCount = vertices->m_Memory.m_nAllocationCount;
    if ( m_nVertexCount > m_nAllocationCount )
      CUtlMemory<Vector,int>::Grow(&vertices->m_Memory, m_nVertexCount - m_nAllocationCount);
  }
  else if ( pMesh->m_nVertexCount == vertices->m_Size )
  {
    goto LABEL_3;
  }
  vertices->m_Size = m_nVertexCount;
LABEL_3:
  if ( m_nVertexCount > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = v7 * pMesh->m_nVertexStrideFloats;
      ++v7;
      vPosition = *&pMesh->m_pVerts[v8];
      VectorTransform(&vPosition.x, xform, v15);
      v9 = v15[2];
      v10 = &vertices->m_Memory.m_pMemory[v6++];
      v11 = v15[0];
      v10->y = v15[1];
      v10->x = v11;
      v10->z = v9;
    }
    while ( v7 != m_nVertexCount );
  }
}


