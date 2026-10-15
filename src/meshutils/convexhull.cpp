// Reconstructed from DWARF by pahole; not original source.

// src/meshutils/convexhull.cpp:43
class CHullHalfEdge {
	CHullHalfEdge();
	void SetNext(CHullHalfEdge *);
	void GetVerts(int *);
	int GetStartVert();
	int GetIndex();

	// sizeof = 32
};

// src/meshutils/convexhull.cpp:69
class CHullTri {
	float m_flDist;  // +0x84
	int m_nIndex[3];  // +0x88
	int m_nVisitCount;  // +0x94
	const float * m_pMaxVert;  // +0x98
	float m_flMaxDist;  // +0xa0

	CHullTri();
	void Init(int, int, int, const float *, int);
	float VertDist(const float *);
	void SetNeighbors(CHullHalfEdge *, CHullHalfEdge *, CHullHalfEdge *);
	bool IsValid();
	CHullHalfEdge * GetEdge(int);
	~CHullTri();

	// sizeof = 184
};

// src/meshutils/convexhull.cpp:178
class CConvexHullBuilder {
private:

	const float * m_pVerts;  // +0x18a8
	float m_flCoplanarEpsilon;  // +0x18b0
	uint32 m_nVertexStrideFloats;  // +0x18b4
	int m_nVertexCount;  // +0x18b8
	int m_nCurrentVisit;  // +0x18bc
	CConvexHullBuilder(const float *, int, uint32, float);
	void BuildHull();
	void FitOBB(matrix3x4_t &, Vector &);
	void FitOBBFast(matrix3x4_t &, Vector &);
	void GenerateOutputMesh(CMesh *, CMeshVertexAttribute *, int);
	bool IsValid();
	void BuildInitialTetrahedron();
	void BuildHorizonList(CHullTri *, const float *);
	void BuildHorizonList_r(CHullTri *, const float *, int);
	void BuildSilhouette_r(CHullTri *, const Vector &, int);
	void BuildSilhouette(CHullTri *, const Vector &);
	void TransferVerts(CVarBitVecT<unsigned int, 32u> &, CHullTri *, CHullTri *);
	float SupportExtents(const Vector &, float *, float *);
	float SupportExtents_Silhouette(const Vector &, float *, float *);
	void FitOBBToFace(CHullTri *, matrix3x4_t &, Vector &);
	const float * GetVertex(int);
	const Vector * GetVertexPosition(int);
	void NextVisit();
	void AddTriangle(CHullTri *);
	void RemoveTriangle(CHullTri *);
	bool Visit(CHullTri *);
	~CConvexHullBuilder();

	// sizeof = 6336
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_convexhull.cpp  (line 0, @0x0000000001a6d2d0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_convexhull_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// SupportPoint  (line 18, @0x00000000031bce70, libserver.so)  // inlines: DotProduct
// callers: CConvexHullBuilder::BuildInitialTetrahedron
int __fastcall SupportPoint(
        const Vector *const vDirection,
        const float *pVerts,
        int nVertCount,
        uint32 nVertexStrideFloats)
{
  float x; // xmm5_4
  int result; // eax
  float y; // xmm4_4
  __int64 v7; // rcx
  float z; // xmm3_4
  int v9; // edi
  float v10; // xmm2_4
  float v11; // xmm0_4
  const float *v12; // rsi
  float v13; // xmm2_4

  if ( nVertCount <= 1 )
    return 0;
  x = vDirection->x;
  result = 0;
  y = vDirection->y;
  v7 = nVertexStrideFloats;
  z = vDirection->z;
  v9 = 1;
  v10 = (*pVerts * x) + (pVerts[1] * y);
  v11 = pVerts[2];
  v12 = &pVerts[v7];
  v13 = v10 + (v11 * z);
  do
  {
    if ( (((*v12 * x) + (v12[1] * y)) + (v12[2] * z)) > v13 )
    {
      result = v9;
      v13 = ((*v12 * x) + (v12[1] * y)) + (v12[2] * z);
    }
    ++v9;
    v12 = (v12 + v7 * 4);
  }
  while ( v9 != nVertCount );
  return result;
}


// CHullTri::Init  (line 73, @0x00000000031c09c0, libserver.so)  // inlines: CrossProduct, DotProduct, SetNext, VectorSubtract, operator-, operator=
// calls: VectorNormalize
// callers: CConvexHullBuilder::BuildInitialTetrahedron
void __fastcall CHullTri::Init(
        CHullTri *const this,
        int nV0,
        int nV1,
        int nV2,
        const float *pVerts,
        int nVertexStrideFloats)
{
  Vector *p_m_vNormal; // rdi
  const float *v8; // rax
  const float *v9; // r12
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  const float *v13; // rax
  float v14; // xmm5_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm1_4

  this->m_nIndex[1] = nV1;
  p_m_vNormal = &this->m_vNormal;
  LODWORD(p_m_vNormal[1].y) = nV0;
  LODWORD(p_m_vNormal[2].x) = nV2;
  v8 = &pVerts[nVertexStrideFloats * nV1];
  v9 = &pVerts[nVertexStrideFloats * nV0];
  v10 = *v8;
  v11 = v8[1];
  v12 = v8[2];
  v13 = &pVerts[nVertexStrideFloats * nV2];
  v14 = v9[1];
  v15 = v10 - *v9;
  v16 = *v13 - *v9;
  v17 = v9[2];
  v18 = v11 - v14;
  v19 = v13[1] - v14;
  v20 = v13[2] - v17;
  v21 = v12 - v17;
  p_m_vNormal->y = (v20 * v15) - (v21 * v16);
  p_m_vNormal->x = (v21 * v19) - (v18 * v20);
  p_m_vNormal->z = (v16 * v18) - (v19 * v15);
  VectorNormalize(p_m_vNormal);
  v22 = (*v9 * this->m_vNormal.x) + (v9[1] * this->m_vNormal.y);
  v23 = v9[2];
  this->m_edges[0].m_pTri = this;
  this->m_flMaxDist = 0.0;
  v24 = v23 * this->m_vNormal.z;
  this->m_edges[1].m_pPrev = this->m_edges;
  this->m_pMaxVert = 0;
  this->m_nVisitCount = 0;
  this->m_edges[0].m_pNext = &this->m_edges[1];
  this->m_edges[1].m_pTri = this;
  this->m_edges[2].m_pPrev = &this->m_edges[1];
  this->m_edges[1].m_pNext = &this->m_edges[2];
  this->m_flDist = v22 + v24;
  this->m_edges[2].m_pTri = this;
  this->m_edges[0].m_pPrev = &this->m_edges[2];
  this->m_edges[2].m_pNext = this->m_edges;
}


// CHullHalfEdge::GetVerts  (line 155, @0x00000000031bcf10, libserver.so)
// globals: g_Mod3Table
void __fastcall CHullHalfEdge::GetVerts(CHullHalfEdge *const this, int *nVerts)
{
  signed __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax

  v2 = this - this->m_pTri->m_edges;
  v3 = this->m_pTri->m_nIndex[v2];
  v4 = g_Mod3Table[v2 + 1];
  *nVerts = v3;
  nVerts[1] = this->m_pTri->m_nIndex[v4];
}


// CHullHalfEdge::GetIndex  (line 164, @0x00000000031bcf60, libserver.so)
int __fastcall CHullHalfEdge::GetIndex(CHullHalfEdge *const this)
{
  return this - this->m_pTri->m_edges;
}


// CHullHalfEdge::GetStartVert  (line 171, @0x00000000031bcf80, libserver.so)  // inlines: GetIndex
int __fastcall CHullHalfEdge::GetStartVert(CHullHalfEdge *const this)
{
  return this->m_pTri->m_nIndex[(this - this->m_pTri->m_edges)];
}


// CConvexHullBuilder::~CConvexHullBuilder  (line 178, @0x00000000031c1680, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CClassMemoryPool, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlMemoryPool, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<float const*, int>::ConvertToExternalMemory, CUtlMemory<float const*, int>::Purge, CUtlMemory<CHullTri*, int>::ConvertToExternalMemory, CUtlMemory<CHullTri*, int>::Purge, CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> >::Clear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemory<CHullHalfEdge*, int>::Purge
// callers: ConvexHull3DFromVerts, FitOBBToMesh
void __fastcall CConvexHullBuilder::~CConvexHullBuilder(CConvexHullBuilder *const this)
{
  CUtlVectorBase<float const*,CUtlMemoryFixedGrowable<float const*,256ul,int> >::CAllocator *p_m_Memory; // r12
  int m_nAllocationCount; // r11d
  uint32 m_nGrowSize; // edx
  CHullHalfEdge **m_pMemory; // rsi
  uint32 v6; // eax
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> > *p_m_triPool; // rbx

  p_m_Memory = &this->m_silhouetteVertexList.m_Memory;
  this->m_silhouetteVertexList.m_Size = 0;
  CUtlMemory<float const*,int>::ConvertToExternalMemory(
    &this->m_silhouetteVertexList.m_Memory,
    &this->m_silhouetteVertexList.m_Memory.m_FixedMemory,
    256,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_silhouetteVertexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float const*,int>::Purge(p_m_Memory);
  this->m_removeList.m_Size = 0;
  CUtlMemory<CHullTri *,int>::ConvertToExternalMemory(
    &this->m_removeList.m_Memory,
    &this->m_removeList.m_Memory.m_FixedMemory,
    256,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_removeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHullTri *,int>::Purge(&this->m_removeList.m_Memory);
  m_nAllocationCount = this->m_halfEdgeList.m_Memory.m_nAllocationCount;
  this->m_halfEdgeList.m_Size = 0;
  if ( m_nAllocationCount < 0 )
  {
    v6 = this->m_halfEdgeList.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_halfEdgeList.m_Memory.m_nGrowSize;
    m_pMemory = this->m_halfEdgeList.m_Memory.m_pMemory;
    v6 = m_nGrowSize & 0xC0000000;
    if ( &this->m_halfEdgeList.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v6 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_halfEdgeList.m_Memory.m_nGrowSize;
      }
      this->m_halfEdgeList.m_Memory.m_pMemory = &this->m_halfEdgeList.m_Memory.m_FixedMemory;
      this->m_halfEdgeList.m_Memory.m_nAllocationCount = 256;
      this->m_halfEdgeList.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_11;
    }
  }
  if ( v6 == 0 )
    CUtlMemory<CHullHalfEdge *,int>::Purge(&this->m_halfEdgeList.m_Memory);
LABEL_11:
  p_m_triPool = &this->m_triPool;
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri>>::Clear(p_m_triPool);
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(p_m_triPool);
}


// CConvexHullBuilder::BuildInitialTetrahedron  (line 291, @0x00000000031bde70, libserver.so)  // inlines: AddToDTail<CHullTri>, AddToDTailWithTailPtr<CHullTri>, AddToTail, Alloc, CHullHalfEdge, CHullTri, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CHullTri>, CopyConstruct<float const*>, CrossProduct, DotProduct, Element, GetVertex, GetVertexPosition, GrowMemory, LargestComponent, LengthSqr, RemoveFromDListWithTailPtr<CHullTri>, RemoveNode, SetNeighbors, Vector, VectorSubtract, VertDist, operator-, operator=, operator[]
// calls: SupportPoint, CUtlMemoryPoolBase::Alloc, CHullTri::Init, CUtlMemory<float const*, int>::Grow, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,Color,char const*,...)
// callers: CConvexHullBuilder::BuildHull
// strings: "Convex hull building with 2D data, will fail!\n"
void __fastcall CConvexHullBuilder::BuildInitialTetrahedron(CConvexHullBuilder *const this)
{
  uint32 m_nVertexStrideFloats; // ebx
  int m_nVertexCount; // eax
  const float *m_pVerts; // r14
  int v5; // r13d
  int v6; // r13d
  float *v7; // r9
  float v8; // xmm7_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  float *v11; // rax
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  Vector *p_y; // rdx
  vec_t z; // eax
  int v20; // eax
  float *v21; // r9
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  int v25; // eax
  float *v26; // rax
  float v27; // xmm7_4
  float v28; // xmm6_4
  float v29; // xmm5_4
  int v30; // r12d
  int v31; // eax
  _QWORD *v32; // rax
  CHullTri *v33; // rbx
  char *v34; // rcx
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  CHullTri *v38; // r14
  char *v39; // rcx
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  CHullTri *v42; // rax
  CHullTri *v43; // r10
  CHullHalfEdge *m_edges; // rcx
  CHullHalfEdge *p_m_vNormal; // rdx
  CHullHalfEdge *v46; // rax
  int v47; // esi
  __int64 v48; // r13
  CHullTri *v49; // rax
  CHullHalfEdge *v50; // rdx
  int v51; // ecx
  bool v52; // zf
  float m_flCoplanarEpsilon; // xmm2_4
  CHullTri *m_pHead; // rbx
  int v55; // r13d
  const float *v56; // r12
  float v57; // xmm0_4
  __int64 m_Size; // r14
  int v59; // eax
  const float **v60; // rax
  CHullTri *m_pNext; // rax
  int v62; // esi
  CHullTri *m_pPrev; // rdx
  CHullTri *v64; // rdx
  CHullTri *v65; // rcx
  CHullTri *v66; // rdx
  float v67; // [rsp+10h] [rbp-A0h]
  float *v68; // [rsp+10h] [rbp-A0h]
  __int64 v69; // [rsp+10h] [rbp-A0h]
  float v70; // [rsp+18h] [rbp-98h]
  float x; // [rsp+18h] [rbp-98h]
  __int64 v72; // [rsp+18h] [rbp-98h]
  float v73; // [rsp+20h] [rbp-90h]
  CHullTri *v74; // [rsp+20h] [rbp-90h]
  float v75; // [rsp+30h] [rbp-80h]
  float y; // [rsp+30h] [rbp-80h]
  __int64 v77; // [rsp+30h] [rbp-80h]
  int nVertCount; // [rsp+38h] [rbp-78h]
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> > *nVertCounta; // [rsp+38h] [rbp-78h]
  int i0; // [rsp+44h] [rbp-6Ch]
  float i0a; // [rsp+44h] [rbp-6Ch]
  int i2; // [rsp+48h] [rbp-68h]
  CHullTri *i2a; // [rsp+48h] [rbp-68h]
  float i2b; // [rsp+48h] [rbp-68h]
  Vector vDir; // [rsp+50h] [rbp-60h] BYREF
  Vector vNormal; // [rsp+60h] [rbp-50h] BYREF
  Vector vAxis; // [rsp+70h] [rbp-40h] BYREF

  vDir.x = 1.0;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  vDir.y = 1.0;
  m_nVertexCount = this->m_nVertexCount;
  vDir.z = 1.0;
  m_pVerts = this->m_pVerts;
  v5 = m_nVertexCount;
  nVertCount = m_nVertexCount;
  i0 = SupportPoint(&vDir, m_pVerts, m_nVertexCount, m_nVertexStrideFloats);
  vAxis.x = -1.0;
  vAxis.y = -1.0;
  vAxis.z = -1.0;
  v6 = SupportPoint(&vAxis, m_pVerts, v5, m_nVertexStrideFloats);
  v7 = &m_pVerts[m_nVertexStrideFloats * i0];
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = &m_pVerts[m_nVertexStrideFloats * v6];
  v12 = *v11 - *v7;
  v13 = v11[1] - v9;
  v14 = v11[2] - v10;
  vNormal.z = (*v7 * v13) - (v12 * v9);
  vNormal.y = (v12 * v10) - (v8 * v14);
  vNormal.x = (v9 * v14) - (v10 * v13);
  if ( (((vNormal.x * vNormal.x) + (vNormal.y * vNormal.y)) + (vNormal.z * vNormal.z)) < 0.001 )
  {
    v15 = fabs(v12);
    v16 = fabs(v13);
    v17 = fabs(v14);
    if ( v15 > v16 )
    {
      p_y = &vAxis.y;
      if ( v15 <= v17 )
        p_y = &vAxis;
    }
    else
    {
      p_y = &vAxis.z;
      if ( v16 <= v17 )
        p_y = &vAxis;
    }
    z = vec3_origin.z;
    *&vAxis.x = *&vec3_origin.x;
    vAxis.z = z;
    p_y->x = 1.0;
    vNormal.z = (v13 * vAxis.x) - (v12 * vAxis.y);
    vNormal.y = (v12 * vAxis.z) - (v14 * vAxis.x);
    vNormal.x = (v14 * vAxis.y) - (v13 * vAxis.z);
    if ( (((vNormal.x * vNormal.x) + (vNormal.y * vNormal.y)) + (vNormal.z * vNormal.z)) < 0.001 )
      vNormal = vAxis;
  }
  v67 = v14;
  v70 = v13;
  v75 = v12;
  v20 = SupportPoint(&vNormal, m_pVerts, nVertCount, m_nVertexStrideFloats);
  v21 = &m_pVerts[m_nVertexStrideFloats * i0];
  i2 = v20;
  v22 = v75;
  v23 = v70;
  v24 = v67;
  if ( v6 == v20 || i0 == v20 )
  {
    vAxis.x = -vNormal.x;
    vAxis.y = -vNormal.y;
    vAxis.z = -vNormal.z;
    v25 = SupportPoint(&vAxis, m_pVerts, nVertCount, m_nVertexStrideFloats);
    v21 = &m_pVerts[m_nVertexStrideFloats * i0];
    v24 = v67;
    i2 = v25;
    v23 = v70;
    v22 = v75;
  }
  v68 = v21;
  v26 = &m_pVerts[m_nVertexStrideFloats * i2];
  v27 = *v26 - *v21;
  v28 = v26[1] - v21[1];
  v29 = v26[2] - v21[2];
  vNormal.x = (v24 * v28) - (v23 * v29);
  vAxis.x = -vNormal.x;
  vNormal.y = (v22 * v29) - (v27 * v24);
  vNormal.z = (v23 * v27) - (v22 * v28);
  x = vNormal.x;
  y = vNormal.y;
  vAxis.y = -vNormal.y;
  v73 = vNormal.z;
  vAxis.z = -vNormal.z;
  v30 = SupportPoint(&vAxis, m_pVerts, nVertCount, m_nVertexStrideFloats);
  if ( i0 == v30
    || v30 == v6
    || v30 == i2
    || this->m_flCoplanarEpsilon >= fabs(
                                      (((*v68 * x) + (v68[1] * y)) + (v68[2] * v73))
                                    - (((x * m_pVerts[m_nVertexStrideFloats * v30])
                                      + (y * m_pVerts[m_nVertexStrideFloats * v30 + 1]))
                                     + (v73 * m_pVerts[m_nVertexStrideFloats * v30 + 2]))) )
  {
    v31 = SupportPoint(&vNormal, m_pVerts, nVertCount, m_nVertexStrideFloats);
    v30 = v31;
    if ( (v31 == i2 || v31 == v6 || i0 == v31) && LoggingSystem_IsChannelEnabled(LOG_GENERAL, 0) != 0 )
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_DETAILED,
        -16711681,
        "Convex hull building with 2D data, will fail!\n");
  }
  else
  {
    v62 = i0;
    i0 = i2;
    i2 = v62;
  }
  nVertCounta = &this->m_triPool;
  v32 = CUtlMemoryPoolBase::Alloc(&this->m_triPool);
  v33 = v32;
  if ( v32 != 0 )
  {
    v34 = (v32 + 3);
    *v32 = 0;
    v32[1] = 0;
    v35 = v32 + 15;
    *(v32 + 4) = 0;
    *(v32 + 5) = 0;
    v36 = v32 + 3;
    do
    {
      *v36 = 0;
      v36 += 4;
      *(v36 - 3) = 0;
      *(v36 - 2) = 0;
      *(v36 - 1) = 0;
    }
    while ( v36 != v35 );
    v77 = v34;
  }
  else
  {
    v77 = 24;
  }
  CHullTri::Init(v33, i2, v6, i0, this->m_pVerts, this->m_nVertexStrideFloats);
  v37 = CUtlMemoryPoolBase::Alloc(nVertCounta);
  v38 = v37;
  if ( v37 != 0 )
  {
    v39 = (v37 + 3);
    *v37 = 0;
    v37[1] = 0;
    v40 = v37 + 15;
    *(v37 + 4) = 0;
    *(v37 + 5) = 0;
    v41 = v37 + 3;
    do
    {
      *v41 = 0;
      v41 += 4;
      *(v41 - 3) = 0;
      *(v41 - 2) = 0;
      *(v41 - 1) = 0;
    }
    while ( v41 != v40 );
    v72 = v39;
  }
  else
  {
    v72 = 24;
  }
  CHullTri::Init(v38, i2, v30, v6, this->m_pVerts, this->m_nVertexStrideFloats);
  v42 = CUtlMemoryPoolBase::Alloc(nVertCounta);
  v43 = v42;
  if ( v42 != 0 )
  {
    m_edges = v42->m_edges;
    v42->m_pVerts.m_Size = 0;
    v42->m_pVerts.m_Memory.m_pMemory = 0;
    p_m_vNormal = &v42->m_vNormal;
    v42->m_pVerts.m_Memory.m_nAllocationCount = 0;
    v42->m_pVerts.m_Memory.m_nGrowSize = 0;
    v46 = v42->m_edges;
    do
    {
      v46->m_pTri = 0;
      ++v46;
      v46[-1].m_pNext = 0;
      v46[-1].m_pPrev = 0;
      v46[-1].m_pOpposite = 0;
    }
    while ( v46 != p_m_vNormal );
    v69 = m_edges;
  }
  else
  {
    v69 = 24;
  }
  v47 = v6;
  v48 = 24;
  v74 = v43;
  CHullTri::Init(v43, v47, v30, i0, this->m_pVerts, this->m_nVertexStrideFloats);
  v49 = CUtlMemoryPoolBase::Alloc(nVertCounta);
  if ( v49 != 0 )
  {
    v48 = v49->m_edges;
    v49->m_pVerts.m_Size = 0;
    v49->m_pVerts.m_Memory.m_pMemory = 0;
    v50 = v49->m_edges;
    v49->m_pVerts.m_Memory.m_nAllocationCount = 0;
    v49->m_pVerts.m_Memory.m_nGrowSize = 0;
    do
    {
      v50->m_pTri = 0;
      ++v50;
      v50[-1].m_pNext = 0;
      v50[-1].m_pPrev = 0;
      v50[-1].m_pOpposite = 0;
    }
    while ( v50 != &v49->m_vNormal );
  }
  v51 = i2;
  i2a = v49;
  CHullTri::Init(v49, i0, v30, v51, this->m_pVerts, this->m_nVertexStrideFloats);
  v52 = this->m_faceListVerts.m_pTailPtr == 0;
  v33->m_pNext = 0;
  if ( v52 )
  {
    v33->m_pPrev = 0;
    this->m_faceListVerts.m_pHead = v33;
  }
  else
  {
    v33->m_pPrev = this->m_faceListVerts.m_pTailPtr;
    this->m_faceListVerts.m_pTailPtr->m_pNext = v33;
  }
  this->m_faceListVerts.m_pTailPtr = v33;
  v38->m_pNext = 0;
  v38->m_pPrev = this->m_faceListVerts.m_pTailPtr;
  this->m_faceListVerts.m_pTailPtr->m_pNext = v38;
  this->m_faceListVerts.m_pTailPtr = v38;
  v74->m_pNext = 0;
  v74->m_pPrev = this->m_faceListVerts.m_pTailPtr;
  this->m_faceListVerts.m_pTailPtr->m_pNext = v74;
  this->m_faceListVerts.m_pTailPtr = v74;
  i2a->m_pNext = 0;
  i2a->m_pPrev = this->m_faceListVerts.m_pTailPtr;
  this->m_faceListVerts.m_pTailPtr->m_pNext = i2a;
  this->m_faceListVerts.m_pTailPtr = i2a;
  v38->m_edges[2].m_pOpposite = v77;
  v33->m_edges[0].m_pOpposite = &v38->m_edges[2];
  v74->m_edges[0].m_pOpposite = &v38->m_edges[1];
  v38->m_edges[1].m_pOpposite = v69;
  v74->m_edges[2].m_pOpposite = &v33->m_edges[1];
  v33->m_edges[1].m_pOpposite = &v74->m_edges[2];
  i2a->m_edges[0].m_pOpposite = &v74->m_edges[1];
  v74->m_edges[1].m_pOpposite = v48;
  i2a->m_edges[1].m_pOpposite = v72;
  v38->m_edges[0].m_pOpposite = &i2a->m_edges[1];
  i2a->m_edges[2].m_pOpposite = &v33->m_edges[2];
  v33->m_edges[2].m_pOpposite = &i2a->m_edges[2];
  m_flCoplanarEpsilon = this->m_flCoplanarEpsilon;
  if ( this->m_nVertexCount <= 0 )
  {
    m_pHead = this->m_faceListVerts.m_pHead;
  }
  else
  {
    m_pHead = this->m_faceListVerts.m_pHead;
    v55 = 0;
    do
    {
      if ( m_pHead != 0 )
      {
        do
        {
          while ( 1 )
          {
            v56 = &this->m_pVerts[this->m_nVertexStrideFloats * v55];
            v57 = (((*v56 * m_pHead->m_vNormal.x) + (v56[1] * m_pHead->m_vNormal.y)) + (v56[2] * m_pHead->m_vNormal.z))
                - m_pHead->m_flDist;
            if ( v57 > m_flCoplanarEpsilon )
            {
              m_Size = m_pHead->m_pVerts.m_Size;
              v59 = m_pHead->m_pVerts.m_Size;
              if ( m_Size == m_pHead->m_pVerts.m_Memory.m_nAllocationCount )
              {
                i0a = (((*v56 * m_pHead->m_vNormal.x) + (v56[1] * m_pHead->m_vNormal.y))
                     + (v56[2] * m_pHead->m_vNormal.z))
                    - m_pHead->m_flDist;
                i2b = m_flCoplanarEpsilon;
                CUtlMemory<float const*,int>::Grow(&m_pHead->m_pVerts.m_Memory, 1);
                v59 = m_pHead->m_pVerts.m_Size;
                v57 = i0a;
                m_flCoplanarEpsilon = i2b;
              }
              m_pHead->m_pVerts.m_Size = v59 + 1;
              v60 = &m_pHead->m_pVerts.m_Memory.m_pMemory[m_Size];
              if ( v60 != 0 )
                *v60 = v56;
              if ( v57 > m_pHead->m_flMaxDist )
                break;
            }
            m_pHead = m_pHead->m_pNext;
            if ( m_pHead == 0 )
              goto LABEL_44;
          }
          m_pHead->m_flMaxDist = v57;
          m_pHead->m_pMaxVert = v56;
          m_pHead = m_pHead->m_pNext;
        }
        while ( m_pHead != 0 );
LABEL_44:
        m_pHead = this->m_faceListVerts.m_pHead;
      }
      else
      {
        m_pHead = 0;
      }
      ++v55;
    }
    while ( this->m_nVertexCount > v55 );
  }
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      if ( m_pHead->m_pMaxVert != 0 )
        goto LABEL_50;
      if ( m_pHead == this->m_faceListVerts.m_pTailPtr )
      {
        this->m_faceListVerts.m_pTailPtr = m_pHead->m_pPrev;
        m_pPrev = m_pHead->m_pPrev;
        if ( m_pPrev == 0 )
        {
LABEL_74:
          if ( m_pHead == this->m_faceListVerts.m_pHead )
          {
            v66 = m_pHead->m_pNext;
            this->m_faceListVerts.m_pHead = v66;
            if ( v66 != 0 )
              v66->m_pPrev = 0;
          }
          goto LABEL_59;
        }
      }
      else
      {
        m_pPrev = m_pHead->m_pPrev;
        if ( m_pPrev == 0 )
          goto LABEL_74;
      }
      m_pPrev->m_pNext = m_pHead->m_pNext;
      v64 = m_pHead->m_pNext;
      if ( v64 != 0 )
        v64->m_pPrev = m_pHead->m_pPrev;
LABEL_59:
      m_pHead->m_pPrev = 0;
      m_pHead->m_pNext = 0;
      v65 = this->m_faceListNoVerts.m_pHead;
      if ( v65 != 0 )
      {
        while ( v65->m_pNext != 0 )
          v65 = v65->m_pNext;
        v65->m_pNext = m_pHead;
        m_pHead->m_pPrev = v65;
        m_pHead->m_pNext = 0;
      }
      else
      {
        this->m_faceListNoVerts.m_pHead = m_pHead;
        m_pHead->m_pPrev = 0;
        m_pHead->m_pNext = 0;
      }
LABEL_50:
      if ( m_pNext == 0 )
        return;
      m_pHead = m_pNext;
    }
  }
}


// CConvexHullBuilder::BuildHorizonList_r  (line 394, @0x00000000031be940, libserver.so)  // inlines: AddToTail, CopyConstruct<CHullHalfEdge*>, CopyConstruct<CHullTri*>, DotProduct, Element, GetIndex, GrowMemory, RemoveFromDList<CHullTri>, RemoveFromDListWithTailPtr<CHullTri>, RemoveNode, RemoveTriangle, VertDist, Visit, operator[]
// calls: CUtlMemory<CHullTri*, int>::Grow, CUtlMemory<CHullHalfEdge*, int>::Grow
// callers: CConvexHullBuilder::BuildHorizonList
// globals: g_Mod3Table
void __fastcall CConvexHullBuilder::BuildHorizonList_r(
        CConvexHullBuilder *const this,
        CHullTri *pTri,
        const float *pVert,
        int nEdgeStart)
{
  CHullTri *m_pPrev; // rax
  CHullTri *v9; // rax
  __int64 v10; // rbx
  int m_nCurrentVisit; // edx
  CHullHalfEdge *m_pOpposite; // rcx
  CHullTri *m_pTri; // rsi
  __int64 v14; // rbx
  int v15; // eax
  CHullTri **v16; // rax
  __int64 m_Size; // rax
  int v18; // edx
  CHullHalfEdge **v19; // rax
  CHullTri *m_pNext; // rax
  int v21; // [rsp+8h] [rbp-48h]
  int v22; // [rsp+Ch] [rbp-44h]
  CUtlVectorBase<CHullHalfEdge*,CUtlMemoryFixedGrowable<CHullHalfEdge*,256ul,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-40h]
  int pNeighborEdge; // [rsp+18h] [rbp-38h]
  CHullHalfEdge *pNeighborEdgea; // [rsp+18h] [rbp-38h]

  if ( pTri->m_pMaxVert != 0 )
  {
    if ( pTri == this->m_faceListVerts.m_pTailPtr )
      this->m_faceListVerts.m_pTailPtr = pTri->m_pPrev;
    m_pPrev = pTri->m_pPrev;
    if ( m_pPrev != 0 )
      goto LABEL_5;
    if ( pTri != this->m_faceListVerts.m_pHead )
      goto LABEL_7;
    m_pNext = pTri->m_pNext;
    this->m_faceListVerts.m_pHead = m_pNext;
    if ( m_pNext == 0 )
      goto LABEL_7;
LABEL_25:
    m_pNext->m_pPrev = 0;
    goto LABEL_7;
  }
  m_pPrev = pTri->m_pPrev;
  if ( m_pPrev != 0 )
  {
LABEL_5:
    m_pPrev->m_pNext = pTri->m_pNext;
    v9 = pTri->m_pNext;
    if ( v9 != 0 )
      v9->m_pPrev = pTri->m_pPrev;
    goto LABEL_7;
  }
  if ( pTri == this->m_faceListNoVerts.m_pHead )
  {
    m_pNext = pTri->m_pNext;
    this->m_faceListNoVerts.m_pHead = m_pNext;
    if ( m_pNext != 0 )
      goto LABEL_25;
  }
LABEL_7:
  v10 = 0;
  pTri->m_pPrev = 0;
  p_m_Memory = &this->m_halfEdgeList.m_Memory;
  pTri->m_pNext = 0;
  do
  {
    m_nCurrentVisit = this->m_nCurrentVisit;
    m_pOpposite = pTri->m_edges[g_Mod3Table[nEdgeStart + v10]].m_pOpposite;
    m_pTri = m_pOpposite->m_pTri;
    if ( m_pOpposite->m_pTri->m_nVisitCount == m_nCurrentVisit )
    {
      if ( ((((*pVert * m_pTri->m_vNormal.x) + (pVert[1] * m_pTri->m_vNormal.y)) + (pVert[2] * m_pTri->m_vNormal.z))
          - m_pTri->m_flDist) > 0.0 )
        goto LABEL_11;
    }
    else
    {
      m_pTri->m_nVisitCount = m_nCurrentVisit;
      if ( ((((*pVert * m_pTri->m_vNormal.x) + (pVert[1] * m_pTri->m_vNormal.y)) + (pVert[2] * m_pTri->m_vNormal.z))
          - m_pTri->m_flDist) > 0.0 )
      {
        pNeighborEdge = nEdgeStart;
        CConvexHullBuilder::BuildHorizonList_r(this, m_pTri, pVert, m_pOpposite - m_pOpposite->m_pTri->m_edges);
        nEdgeStart = pNeighborEdge;
        goto LABEL_11;
      }
    }
    m_Size = this->m_halfEdgeList.m_Size;
    v18 = this->m_halfEdgeList.m_Size;
    if ( m_Size == this->m_halfEdgeList.m_Memory.m_nAllocationCount )
    {
      v21 = nEdgeStart;
      v22 = this->m_halfEdgeList.m_Size;
      pNeighborEdgea = m_pOpposite;
      CUtlMemory<CHullHalfEdge *,int>::Grow(p_m_Memory, 1);
      v18 = this->m_halfEdgeList.m_Size;
      nEdgeStart = v21;
      m_Size = v22;
      m_pOpposite = pNeighborEdgea;
    }
    this->m_halfEdgeList.m_Size = v18 + 1;
    v19 = &this->m_halfEdgeList.m_Memory.m_pMemory[m_Size];
    if ( v19 != 0 )
      *v19 = m_pOpposite;
LABEL_11:
    ++v10;
  }
  while ( v10 != 3 );
  v14 = this->m_removeList.m_Size;
  v15 = this->m_removeList.m_Size;
  if ( v14 == this->m_removeList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHullTri *,int>::Grow(&this->m_removeList.m_Memory, 1);
    v15 = this->m_removeList.m_Size;
  }
  this->m_removeList.m_Size = v15 + 1;
  v16 = &this->m_removeList.m_Memory.m_pMemory[v14];
  if ( v16 != 0 )
    *v16 = pTri;
}


// CConvexHullBuilder::BuildHorizonList  (line 422, @0x00000000031bec00, libserver.so)  // inlines: NextVisit, RemoveAll, Visit
// calls: CConvexHullBuilder::BuildHorizonList_r
// callers: CConvexHullBuilder::BuildHull
void __fastcall CConvexHullBuilder::BuildHorizonList(
        CConvexHullBuilder *const this,
        CHullTri *pTri,
        const float *pVert)
{
  int m_nCurrentVisit; // eax
  int v4; // eax

  m_nCurrentVisit = this->m_nCurrentVisit;
  this->m_halfEdgeList.m_Size = 0;
  v4 = m_nCurrentVisit + 1;
  this->m_nCurrentVisit = v4;
  if ( v4 != pTri->m_nVisitCount )
    pTri->m_nVisitCount = v4;
  CConvexHullBuilder::BuildHorizonList_r(this, pTri, pVert, 0);
}


// CConvexHullBuilder::BuildSilhouette_r  (line 433, @0x00000000031bd520, libserver.so)  // inlines: AddToTail, CopyConstruct<float const*>, DotProduct, Element, GetIndex, GetStartVert, GetVertex, GrowMemory, Visit, operator[]
// calls: CUtlMemory<float const*, int>::Grow
// callers: CConvexHullBuilder::BuildSilhouette
// globals: g_Mod3Table
void __fastcall CConvexHullBuilder::BuildSilhouette_r(
        CConvexHullBuilder *const this,
        CHullTri *pTri,
        const Vector *const vNormal,
        int nEdgeStart)
{
  __int64 v8; // rbx
  int m_nCurrentVisit; // edx
  CHullHalfEdge *m_pOpposite; // rcx
  CHullTri *m_pTri; // rsi
  const float *v12; // rcx
  __int64 m_Size; // rax
  int v14; // edx
  const float **v15; // rax
  CHullTri *v16; // [rsp+0h] [rbp-50h]
  int v17; // [rsp+Ch] [rbp-44h]
  CUtlVectorBase<float const*,CUtlMemoryFixedGrowable<float const*,256ul,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-40h]
  CHullTri *v19; // [rsp+18h] [rbp-38h]
  const float *v20; // [rsp+18h] [rbp-38h]

  v8 = 0;
  p_m_Memory = &this->m_silhouetteVertexList.m_Memory;
  do
  {
    m_nCurrentVisit = this->m_nCurrentVisit;
    m_pOpposite = pTri->m_edges[g_Mod3Table[nEdgeStart + v8]].m_pOpposite;
    m_pTri = m_pOpposite->m_pTri;
    if ( m_pOpposite->m_pTri->m_nVisitCount == m_nCurrentVisit )
    {
      if ( (((vNormal->x * m_pTri->m_vNormal.x) + (vNormal->y * m_pTri->m_vNormal.y))
          + (vNormal->z * m_pTri->m_vNormal.z)) > 0.0 )
        goto LABEL_5;
    }
    else
    {
      m_pTri->m_nVisitCount = m_nCurrentVisit;
      if ( (((vNormal->x * m_pTri->m_vNormal.x) + (vNormal->y * m_pTri->m_vNormal.y))
          + (vNormal->z * m_pTri->m_vNormal.z)) > 0.0 )
      {
        v19 = pTri;
        CConvexHullBuilder::BuildSilhouette_r(this, m_pTri, vNormal, m_pOpposite - m_pOpposite->m_pTri->m_edges);
        pTri = v19;
        goto LABEL_5;
      }
    }
    v12 = &this->m_pVerts[this->m_nVertexStrideFloats
                        * m_pOpposite->m_pNext->m_pTri->m_nIndex[(m_pOpposite->m_pNext
                                                                - m_pOpposite->m_pNext->m_pTri->m_edges)]];
    m_Size = this->m_silhouetteVertexList.m_Size;
    v14 = this->m_silhouetteVertexList.m_Size;
    if ( m_Size == this->m_silhouetteVertexList.m_Memory.m_nAllocationCount )
    {
      v16 = pTri;
      v17 = this->m_silhouetteVertexList.m_Size;
      v20 = v12;
      CUtlMemory<float const*,int>::Grow(p_m_Memory, 1);
      v14 = this->m_silhouetteVertexList.m_Size;
      pTri = v16;
      m_Size = v17;
      v12 = v20;
    }
    this->m_silhouetteVertexList.m_Size = v14 + 1;
    v15 = &this->m_silhouetteVertexList.m_Memory.m_pMemory[m_Size];
    if ( v15 != 0 )
      *v15 = v12;
LABEL_5:
    ++v8;
  }
  while ( v8 != 3 );
}


// CConvexHullBuilder::BuildSilhouette  (line 458, @0x00000000031bd6d0, libserver.so)  // inlines: NextVisit, RemoveAll, Visit
// calls: CConvexHullBuilder::BuildSilhouette_r
// callers: CConvexHullBuilder::FitOBBToFace
void __fastcall CConvexHullBuilder::BuildSilhouette(
        CConvexHullBuilder *const this,
        CHullTri *pTri,
        const Vector *const vNormal)
{
  int m_nCurrentVisit; // eax
  int v4; // eax

  m_nCurrentVisit = this->m_nCurrentVisit;
  this->m_silhouetteVertexList.m_Size = 0;
  v4 = m_nCurrentVisit + 1;
  this->m_nCurrentVisit = v4;
  if ( v4 != pTri->m_nVisitCount )
    pTri->m_nVisitCount = v4;
  CConvexHullBuilder::BuildSilhouette_r(this, pTri, vNormal, 0);
}


// CConvexHullBuilder::TransferVerts  (line 472, @0x00000000031bd390, libserver.so)  // inlines: AddToTail, BitVec_TestAndSetBit, CopyConstruct<float const*>, DotProduct, Element, GrowMemory, TestAndSet, VertDist, operator[]
// calls: CUtlMemory<float const*, int>::Grow
// callers: CConvexHullBuilder::BuildHull
void __fastcall CConvexHullBuilder::TransferVerts(
        CConvexHullBuilder *const this,
        CVarBitVecT<unsigned int,32u> *const vertWasAdded,
        CHullTri *pRemove,
        CHullTri *pNewTri)
{
  CConvexHullBuilder *v4; // r9
  CUtlMemory<float const*,int> *p_m_Memory; // r11
  __int64 v9; // r13
  int v10; // r12d
  float i; // xmm2_4
  const float *v12; // rbx
  uint32 *v13; // rsi
  uint32 v14; // edx
  int v15; // r8d
  float v16; // xmm0_4
  __int64 m_Size; // rax
  int v18; // edx
  const float **v19; // rax
  CVarBitVecT<unsigned int,32u> *v20; // [rsp+8h] [rbp-58h]
  CConvexHullBuilder *v21; // [rsp+10h] [rbp-50h]
  int v22; // [rsp+1Ch] [rbp-44h]
  float v23; // [rsp+20h] [rbp-40h]
  float v24; // [rsp+24h] [rbp-3Ch]
  CUtlMemory<float const*,int> *v25; // [rsp+28h] [rbp-38h]

  v4 = this;
  p_m_Memory = &pNewTri->m_pVerts.m_Memory;
  v9 = 0;
  v10 = 0;
  for ( i = this->m_flCoplanarEpsilon; pRemove->m_pVerts.m_Size > v10; pNewTri->m_flMaxDist = v16 )
  {
    while ( 1 )
    {
      v12 = pRemove->m_pVerts.m_Memory.m_pMemory[v9];
      v13 = &vertWasAdded->m_pInt[((v12 - v4->m_pVerts) / v4->m_nVertexStrideFloats) >> 5];
      v14 = *v13;
      v15 = 1 << ((v12 - v4->m_pVerts) / v4->m_nVertexStrideFloats);
      *v13 |= v15;
      if ( (v15 & v14) == 0 )
      {
        v16 = (((*v12 * pNewTri->m_vNormal.x) + (v12[1] * pNewTri->m_vNormal.y)) + (v12[2] * pNewTri->m_vNormal.z))
            - pNewTri->m_flDist;
        if ( v16 > i )
        {
          m_Size = pNewTri->m_pVerts.m_Size;
          v18 = pNewTri->m_pVerts.m_Size;
          if ( m_Size == pNewTri->m_pVerts.m_Memory.m_nAllocationCount )
          {
            v20 = vertWasAdded;
            v21 = v4;
            v22 = pNewTri->m_pVerts.m_Size;
            v23 = (((*v12 * pNewTri->m_vNormal.x) + (v12[1] * pNewTri->m_vNormal.y)) + (v12[2] * pNewTri->m_vNormal.z))
                - pNewTri->m_flDist;
            v24 = i;
            v25 = p_m_Memory;
            CUtlMemory<float const*,int>::Grow(p_m_Memory, 1);
            v18 = pNewTri->m_pVerts.m_Size;
            vertWasAdded = v20;
            v4 = v21;
            m_Size = v22;
            v16 = v23;
            i = v24;
            p_m_Memory = v25;
          }
          pNewTri->m_pVerts.m_Size = v18 + 1;
          v19 = &pNewTri->m_pVerts.m_Memory.m_pMemory[m_Size];
          if ( v19 != 0 )
            *v19 = v12;
          if ( v16 > pNewTri->m_flMaxDist )
            break;
        }
      }
      ++v10;
      ++v9;
      if ( pRemove->m_pVerts.m_Size <= v10 )
        return;
    }
    pNewTri->m_pMaxVert = v12;
    ++v10;
    ++v9;
  }
}


// CConvexHullBuilder::SupportExtents  (line 497, @0x00000000031bcfa0, libserver.so)  // inlines: DotProduct
// callers: CConvexHullBuilder::FitOBBToFace, CConvexHullBuilder::FitOBBFast
float __fastcall CConvexHullBuilder::SupportExtents(
        const CConvexHullBuilder *const this,
        const Vector *const vDirection,
        float *pMin,
        float *pMax)
{
  const float *m_pVerts; // rax
  float x; // xmm4_4
  float y; // xmm5_4
  float z; // xmm6_4
  __int64 m_nVertexStrideFloats; // r8
  int m_nVertexCount; // edi
  __int64 v10; // r8
  float v11; // xmm0_4
  float v12; // xmm1_4
  float *v13; // rax
  float v14; // xmm0_4
  float v15; // xmm2_4
  int v16; // esi
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm1_4

  m_pVerts = this->m_pVerts;
  x = vDirection->x;
  y = vDirection->y;
  z = vDirection->z;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  m_nVertexCount = this->m_nVertexCount;
  v10 = m_nVertexStrideFloats;
  v11 = (*m_pVerts * vDirection->x) + (m_pVerts[1] * y);
  v12 = m_pVerts[2];
  v13 = &m_pVerts[v10];
  v14 = v11 + (v12 * z);
  v15 = v14;
  if ( m_nVertexCount > 1 )
  {
    v16 = 1;
    do
    {
      ++v16;
      v17 = (*v13 * x) + (v13[1] * y);
      v18 = v13[2];
      v13 = (v13 + v10 * 4);
      v19 = v17 + (v18 * z);
      v14 = fmaxf(v14, v19);
      v15 = fminf(v15, v19);
    }
    while ( v16 != m_nVertexCount );
  }
  if ( pMin != 0 )
    *pMin = v15;
  if ( pMax != 0 )
    *pMax = v14;
  return v14 - v15;
}


// CConvexHullBuilder::SupportExtents_Silhouette  (line 525, @0x00000000031bcdb0, libserver.so)  // inlines: DotProduct
// callers: CConvexHullBuilder::SupportExtents_Silhouette, CConvexHullBuilder::FitOBBToFace
float __fastcall CConvexHullBuilder::SupportExtents_Silhouette(
        CConvexHullBuilder *const this,
        const Vector *const vDirection,
        float *pMin,
        float *pMax)
{
  const float **m_pMemory; // r8
  float x; // xmm4_4
  float y; // xmm5_4
  float z; // xmm6_4
  int m_Size; // esi
  float v9; // xmm0_4
  float **v10; // rax
  float v11; // xmm2_4
  __int64 v12; // rdi
  float *v13; // rsi
  float v14; // xmm1_4

  m_pMemory = this->m_silhouetteVertexList.m_Memory.m_pMemory;
  x = vDirection->x;
  y = vDirection->y;
  z = vDirection->z;
  m_Size = this->m_silhouetteVertexList.m_Size;
  v9 = ((**m_pMemory * x) + ((*m_pMemory)[1] * y)) + ((*m_pMemory)[2] * z);
  if ( m_Size <= 1 )
  {
    v11 = ((**m_pMemory * x) + ((*m_pMemory)[1] * y)) + ((*m_pMemory)[2] * z);
  }
  else
  {
    v10 = (m_pMemory + 1);
    v11 = ((**m_pMemory * x) + ((*m_pMemory)[1] * y)) + ((*m_pMemory)[2] * z);
    v12 = &m_pMemory[(m_Size - 2) + 2];
    do
    {
      v13 = *v10++;
      v14 = ((*v13 * x) + (v13[1] * y)) + (v13[2] * z);
      v9 = fmaxf(v9, v14);
      v11 = fminf(v11, v14);
    }
    while ( v10 != v12 );
  }
  if ( pMin != 0 )
    *pMin = v11;
  if ( pMax != 0 )
    *pMax = v9;
  return v9 - v11;
}


// CConvexHullBuilder::SupportExtents_Silhouette  (line 525, @0x00000000031bd050, libserver.so)
// calls: CConvexHullBuilder::SupportExtents_Silhouette
float __fastcall CConvexHullBuilder::SupportExtents_Silhouette(
        CConvexHullBuilder *const this,
        const Vector *const vDirection,
        float *pMin,
        float *pMax)
{
  if ( this->m_silhouetteVertexList.m_Size != 0 )
    return CConvexHullBuilder::SupportExtents_Silhouette(this, vDirection, pMin, pMax);
  else
    return 0.0;
}


// CConvexHullBuilder::BuildHull  (line 620, @0x00000000031bf130, libserver.so)  // inlines: AddToDHead<CHullTri>, AddToDTailWithTailPtr<CHullTri>, AddToHead, AddToTail, AddTriangle, Alloc, AllocInts, CBitVecT, CHullHalfEdge, CHullTri, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CVarBitVecBase, CVarBitVecT, CalcNumIntsForBits, ClearAll, Construct<CHullTri>, CopyConstruct<CHullTri*>, CrossProduct, Destruct<CHullTri>, DotProduct, Element, Free, FreeInts, GetVerts, GrowMemory, Head, Init, Purge, Purge_FixedGrowable, RemoveAll, SetNeighbors, SetNext, VectorSubtract, memset, operator-, operator=, operator[], ~CBitVecT, ~CHullTri, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVarBitVecBase, ~CVarBitVecT
// calls: CConvexHullBuilder::BuildInitialTetrahedron, memset, CConvexHullBuilder::BuildHorizonList, CUtlMemoryPoolBase::Alloc, VectorNormalize, CConvexHullBuilder::TransferVerts, CUtlMemoryPoolBase::Free, CUtlMemory<float const*, int>::Purge, CUtlMemory<CHullTri*, int>::Grow, CUtlMemory<CHullTri*, int>::ConvertToExternalMemory, CUtlMemory<CHullTri*, int>::Purge, _Unwind_Resume (13 total)
// callers: ConvexHull3DFromVerts, FitOBBToMesh
// globals: g_Mod3Table
void __fastcall CConvexHullBuilder::BuildHull(CConvexHullBuilder *const this)
{
  unsigned int m_nVertexCount; // edx
  int v3; // eax
  int v4; // edx
  signed int v5; // eax
  uint32 *v6; // rax
  __int64 m_numInts; // rdx
  unsigned int *m_FixedStorage; // rdi
  CHullTri *m_pHead; // rsi
  int m_Size; // r11d
  CHullHalfEdge *v11; // rax
  CHullTri *m_pTri; // rdx
  __int64 v13; // rax
  int v14; // r14d
  int v15; // r15d
  char *v16; // rax
  CHullTri *v17; // r12
  Vector *v18; // rdi
  Vector *v19; // rax
  uint32 m_nVertexStrideFloats; // edx
  const float *m_pVerts; // rax
  int v22; // ecx
  int v23; // r15d
  int v24; // edx
  float *v25; // r14
  float *v26; // rcx
  float *v27; // rax
  float v28; // xmm5_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  uint32 *m_pInt; // rdi
  float v37; // xmm0_4
  float v38; // xmm1_4
  __int64 v39; // r14
  __int64 v40; // rdx
  float v41; // xmm1_4
  __int64 v42; // r14
  CHullTri **v43; // rax
  bool v44; // zf
  __int64 j; // r12
  CHullTri *v46; // r14
  CHullTri *v47; // rax
  int v48; // edi
  __int64 v49; // rsi
  int v50; // ecx
  CHullTri **m_pMemory; // r8
  CHullTri *v52; // r9
  CHullTri *v53; // rax
  CHullHalfEdge *v54; // r10
  CHullTri *v55; // rdx
  CHullHalfEdge *v56; // r9
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri> > *p_m_triPool; // [rsp+18h] [rbp-288h]
  __int64 v58; // [rsp+20h] [rbp-280h]
  int v59; // [rsp+28h] [rbp-278h]
  int i; // [rsp+2Ch] [rbp-274h]
  CVarBitVecT<unsigned int,32u> vertWasAdded; // [rsp+30h] [rbp-270h] BYREF
  CUtlVectorFixedGrowable<CHullTri*,64ul> addedList; // [rsp+50h] [rbp-250h] BYREF
  unsigned __int64 v63; // [rsp+268h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  CConvexHullBuilder::BuildInitialTetrahedron(this);
  m_nVertexCount = this->m_nVertexCount;
  vertWasAdded.m_pInt = 0;
  v3 = m_nVertexCount + 62;
  vertWasAdded.m_numBits = m_nVertexCount;
  v4 = m_nVertexCount + 31;
  if ( v4 >= 0 )
    v3 = v4;
  v5 = v3 >> 5;
  vertWasAdded.m_numInts = v5;
  if ( v5 != 0 )
  {
    if ( v5 <= 1 )
    {
      m_FixedStorage = vertWasAdded.m_FixedStorage;
      m_numInts = v5;
      vertWasAdded.m_pInt = vertWasAdded.m_FixedStorage;
    }
    else
    {
      v6 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v5);
      m_numInts = vertWasAdded.m_numInts;
      vertWasAdded.m_pInt = v6;
      m_FixedStorage = v6;
    }
  }
  else
  {
    m_numInts = 0;
    m_FixedStorage = 0;
  }
  memset(m_FixedStorage, 0, 4 * m_numInts);
  m_pHead = this->m_faceListVerts.m_pHead;
  if ( this->m_faceListVerts.m_pHead != 0 )
  {
    p_m_triPool = &this->m_triPool;
    do
    {
      v59 = (m_pHead->m_pMaxVert - this->m_pVerts) / this->m_nVertexStrideFloats;
      CConvexHullBuilder::BuildHorizonList(this, m_pHead, m_pHead->m_pMaxVert);
      addedList.m_Size = 0;
      m_Size = this->m_halfEdgeList.m_Size;
      addedList.m_Memory.m_nAllocationCount = 64;
      addedList.m_Memory.m_nGrowSize = 0x80000000;
      addedList.m_Memory.m_pMemory = &addedList.m_Memory.m_FixedMemory;
      if ( m_Size > 0 )
      {
        v58 = 0;
        i = 0;
        do
        {
          v11 = this->m_halfEdgeList.m_Memory.m_pMemory[v58];
          m_pTri = v11->m_pTri;
          v13 = v11 - v11->m_pTri->m_edges;
          v14 = m_pTri->m_nIndex[v13];
          v15 = m_pTri->m_nIndex[g_Mod3Table[v13 + 1]];
          v16 = CUtlMemoryPoolBase::Alloc(p_m_triPool);
          v17 = v16;
          if ( v16 != 0 )
          {
            *v16 = 0;
            v18 = (v16 + 120);
            *(v16 + 1) = 0;
            v19 = (v16 + 24);
            v19[-1].y = 0.0;
            v19[-1].z = 0.0;
            do
            {
              *&v19->x = 0;
              v19 = (v19 + 32);
              *&v19[-2].x = 0;
              *&v19[-2].z = 0;
              *&v19[-1].y = 0;
            }
            while ( v19 != v18 );
          }
          else
          {
            v18 = (&stru_10 + 104);
          }
          m_nVertexStrideFloats = this->m_nVertexStrideFloats;
          m_pVerts = this->m_pVerts;
          v17->m_nIndex[1] = v15;
          v17->m_nIndex[2] = v14;
          v17->m_nIndex[0] = v59;
          v22 = m_nVertexStrideFloats * v59;
          v23 = m_nVertexStrideFloats * v15;
          v24 = v14 * m_nVertexStrideFloats;
          v25 = &m_pVerts[v22];
          v26 = &m_pVerts[v23];
          v27 = &m_pVerts[v24];
          v28 = v25[1];
          v29 = *v26 - *v25;
          v30 = *v27 - *v25;
          v31 = v25[2];
          v32 = v26[1] - v28;
          v33 = v27[1] - v28;
          v34 = v26[2] - v31;
          v35 = v27[2] - v31;
          v17->m_vNormal.x = (v34 * v33) - (v32 * v35);
          v17->m_vNormal.y = (v35 * v29) - (v34 * v30);
          v17->m_vNormal.z = (v30 * v32) - (v33 * v29);
          VectorNormalize(v18);
          m_pInt = vertWasAdded.m_pInt;
          v37 = (*v25 * v17->m_vNormal.x) + (v25[1] * v17->m_vNormal.y);
          v38 = v25[2];
          v17->m_edges[1].m_pNext = &v17->m_edges[2];
          v17->m_edges[0].m_pPrev = &v17->m_edges[2];
          v39 = 0;
          v40 = vertWasAdded.m_numInts;
          v41 = v38 * v17->m_vNormal.z;
          v17->m_flMaxDist = 0.0;
          v17->m_pMaxVert = 0;
          v17->m_nVisitCount = 0;
          v17->m_edges[0].m_pTri = v17;
          v17->m_edges[1].m_pPrev = v17->m_edges;
          v17->m_edges[0].m_pNext = &v17->m_edges[1];
          v17->m_edges[1].m_pTri = v17;
          v17->m_flDist = v37 + v41;
          v17->m_edges[2].m_pPrev = &v17->m_edges[1];
          v17->m_edges[2].m_pTri = v17;
          v17->m_edges[2].m_pNext = v17->m_edges;
          memset(m_pInt, 0, 4 * v40);
          if ( this->m_removeList.m_Size > 0 )
          {
            do
              CConvexHullBuilder::TransferVerts(this, &vertWasAdded, this->m_removeList.m_Memory.m_pMemory[v39++], v17);
            while ( this->m_removeList.m_Size > v39 );
          }
          v42 = addedList.m_Size;
          if ( addedList.m_Size == addedList.m_Memory.m_nAllocationCount )
            CUtlMemory<CHullTri *,int>::Grow(&addedList.m_Memory, 1);
          ++addedList.m_Size;
          v43 = &addedList.m_Memory.m_pMemory[v42];
          if ( v43 != 0 )
            *v43 = v17;
          if ( v17->m_pMaxVert != 0 )
          {
            v44 = this->m_faceListVerts.m_pTailPtr == 0;
            v17->m_pNext = 0;
            if ( v44 )
            {
              v17->m_pPrev = 0;
              this->m_faceListVerts.m_pHead = v17;
            }
            else
            {
              v17->m_pPrev = this->m_faceListVerts.m_pTailPtr;
              this->m_faceListVerts.m_pTailPtr->m_pNext = v17;
            }
            this->m_faceListVerts.m_pTailPtr = v17;
          }
          else
          {
            v17->m_pNext = this->m_faceListNoVerts.m_pHead;
            v47 = this->m_faceListNoVerts.m_pHead;
            if ( v47 != 0 )
              v47->m_pPrev = v17;
            v17->m_pPrev = 0;
            this->m_faceListNoVerts.m_pHead = v17;
          }
          ++i;
          ++v58;
        }
        while ( this->m_halfEdgeList.m_Size > i );
      }
      for ( j = 0; this->m_removeList.m_Size > j; ++j )
      {
        v46 = this->m_removeList.m_Memory.m_pMemory[j];
        if ( v46 != 0 )
        {
          v44 = (v46->m_pVerts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
          v46->m_pVerts.m_Size = 0;
          if ( v44 )
          {
            CUtlMemory<float const*,int>::Purge(&v46->m_pVerts.m_Memory);
            if ( (v46->m_pVerts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<float const*,int>::Purge(&v46->m_pVerts.m_Memory);
          }
        }
        CUtlMemoryPoolBase::Free(p_m_triPool, v46);
      }
      v48 = addedList.m_Size;
      v49 = 0;
      v50 = 0;
      m_pMemory = addedList.m_Memory.m_pMemory;
      this->m_removeList.m_Size = 0;
      v52 = m_pMemory[v48 - 1];
      if ( v48 > 0 )
      {
        do
        {
          v53 = m_pMemory[++v50 % v48];
          v54 = this->m_halfEdgeList.m_Memory.m_pMemory[v49];
          v55 = m_pMemory[v49++];
          v55->m_edges[0].m_pOpposite = &v52->m_edges[2];
          v52->m_edges[2].m_pOpposite = v55->m_edges;
          v56 = &v55->m_edges[1];
          v55 = (v55 + 88);
          v55[-1].m_pPrev = v54;
          v54->m_pOpposite = v56;
          v55->m_edges[0].m_pTri = v53->m_edges;
          v53->m_edges[0].m_pOpposite = v55;
          v52 = m_pMemory[v49 - 1];
        }
        while ( v50 != v48 );
      }
      addedList.m_Size = 0;
      CUtlMemory<CHullTri *,int>::ConvertToExternalMemory(
        &addedList.m_Memory,
        &addedList.m_Memory.m_FixedMemory,
        64,
        0,
        1,
        0x3FFFFFFFu);
      if ( (addedList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHullTri *,int>::Purge(&addedList.m_Memory);
      m_pHead = this->m_faceListVerts.m_pHead;
    }
    while ( this->m_faceListVerts.m_pHead != 0 );
  }
  if ( vertWasAdded.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vertWasAdded.m_pInt);
}


// CConvexHullBuilder::GenerateOutputMesh  (line 697, @0x00000000031bf850, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FillWithValue, GetVertex, Head, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CMesh::AllocateMesh, CopyVertex, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: ConvexHull3DFromVerts
void __fastcall CConvexHullBuilder::GenerateOutputMesh(
        CConvexHullBuilder *const this,
        CMesh *pOutMesh,
        CMeshVertexAttribute *pAttribute,
        int nAttributes)
{
  int m_nVertexCount; // esi
  __int64 v8; // rdx
  int i; // eax
  int v10; // r8d
  int v11; // esi
  int v12; // edx
  CHullTri *m_pHead; // rcx
  __int64 j; // rax
  int *v15; // rdx
  __int64 v16; // rcx
  int k; // eax
  CHullTri *v18; // r13
  __int64 v19; // r14
  __int64 m; // rbx
  int v21; // ecx
  __int64 v22; // r12
  int v23; // eax
  int nOutVert; // [rsp+1Ch] [rbp-54h]
  CUtlVector<int,CUtlMemory<int,int> > vertexMap; // [rsp+20h] [rbp-50h] BYREF

  m_nVertexCount = this->m_nVertexCount;
  vertexMap.m_Size = 0;
  vertexMap.m_Memory.m_pMemory = 0;
  vertexMap.m_Memory.m_nAllocationCount = 0;
  vertexMap.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&vertexMap, m_nVertexCount);
  v8 = 0;
  for ( i = 0; i < vertexMap.m_Size; ++v8 )
  {
    ++i;
    vertexMap.m_Memory.m_pMemory[v8] = -1;
  }
  v10 = 0;
  v11 = 0;
  v12 = 0;
  m_pHead = this->m_faceListNoVerts.m_pHead;
  if ( m_pHead != 0 )
  {
    do
    {
      for ( j = 0; j != 3; ++j )
      {
        v15 = &vertexMap.m_Memory.m_pMemory[m_pHead->m_nIndex[j]];
        if ( *v15 < 0 )
          *v15 = v11++;
      }
      m_pHead = m_pHead->m_pNext;
      ++v10;
    }
    while ( m_pHead != 0 );
    v12 = 3 * v10;
  }
  v16 = 0;
  for ( k = 0; k < vertexMap.m_Size; ++v16 )
  {
    ++k;
    vertexMap.m_Memory.m_pMemory[v16] = -1;
  }
  CMesh::AllocateMesh(pOutMesh, v11, v12, this->m_nVertexStrideFloats, pAttribute, nAttributes);
  v18 = this->m_faceListNoVerts.m_pHead;
  if ( v18 != 0 )
  {
    v19 = 0;
    nOutVert = 0;
    do
    {
      for ( m = 0; m != 3; ++m )
      {
        v21 = v18->m_nIndex[m];
        v22 = v21;
        v23 = vertexMap.m_Memory.m_pMemory[v21];
        if ( v23 < 0 )
        {
          CopyVertex(
            &pOutMesh->m_pVerts[pOutMesh->m_nVertexStrideFloats * nOutVert],
            &this->m_pVerts[this->m_nVertexStrideFloats * v21],
            this->m_nVertexStrideFloats);
          vertexMap.m_Memory.m_pMemory[v22] = nOutVert++;
          v23 = vertexMap.m_Memory.m_pMemory[v22];
        }
        pOutMesh->m_pIndices[v19 + m] = v23;
      }
      v18 = v18->m_pNext;
      v19 += 3;
    }
    while ( v18 != 0 );
  }
  vertexMap.m_Size = 0;
  if ( (vertexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&vertexMap.m_Memory);
    if ( (vertexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vertexMap.m_Memory);
  }
}


// CConvexHullBuilder::FitOBBToFace  (line 739, @0x00000000031bd710, libserver.so)  // inlines: CrossProduct, MatrixSetColumn, SetColumn, SupportExtents_Silhouette, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator[]
// calls: CConvexHullBuilder::BuildSilhouette, VectorNormalize, CConvexHullBuilder::SupportExtents, CConvexHullBuilder::SupportExtents_Silhouette
// callers: CConvexHullBuilder::FitOBBFast, CConvexHullBuilder::FitOBB
void __fastcall CConvexHullBuilder::FitOBBToFace(
        CConvexHullBuilder *const this,
        CHullTri *pTri,
        matrix3x4_t *const xform,
        Vector *const vExtents)
{
  CConvexHullBuilder *v4; // r15
  int m_Size; // ebx
  float x; // xmm5_4
  CConvexHullBuilder *v9; // r13
  __int64 v10; // r15
  float y; // xmm6_4
  float z; // xmm3_4
  int v13; // eax
  float v14; // xmm8_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  const float **m_pMemory; // rsi
  float *v18; // rcx
  float *v19; // rax
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  int v23; // eax
  __int64 v24; // rdx
  const float **v25; // rsi
  float *v26; // rcx
  float *v27; // rax
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm1_4
  vec_t v34; // xmm0_4
  vec_t v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  float v39; // xmm9_4
  float v40; // xmm2_4
  float v41; // xmm7_4
  float v42; // xmm1_4
  float v43; // xmm4_4
  float v44; // xmm0_4
  float v45; // xmm8_4
  float v46; // xmm8_4
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm0_4
  float v50; // xmm4_4
  float v51; // xmm0_4
  matrix3x4_t *vNormalX; // [rsp+8h] [rbp-A8h]
  float vNormalXa; // [rsp+8h] [rbp-A8h]
  const Vector *vDirection; // [rsp+18h] [rbp-98h]
  int nMinEdge; // [rsp+30h] [rbp-80h]
  int nMinEdgea; // [rsp+30h] [rbp-80h]
  float flMinPerimeter; // [rsp+34h] [rbp-7Ch]
  float flMinPerimetera; // [rsp+34h] [rbp-7Ch]
  Vector vNormalY; // [rsp+40h] [rbp-70h] BYREF
  Vector vNormalZ; // [rsp+50h] [rbp-60h] BYREF
  Vector vNormalY_0; // [rsp+60h] [rbp-50h] BYREF
  Vector vNormalZ_0; // [rsp+70h] [rbp-40h] BYREF

  v4 = this;
  vDirection = &pTri->m_vNormal;
  CConvexHullBuilder::BuildSilhouette(this, pTri, &pTri->m_vNormal);
  m_Size = v4->m_silhouetteVertexList.m_Size;
  if ( m_Size <= 0 )
  {
    y = pTri->m_vNormal.y;
    v24 = 0;
    x = pTri->m_vNormal.x;
    z = pTri->m_vNormal.z;
    v23 = 1;
  }
  else
  {
    x = pTri->m_vNormal.x;
    vNormalX = xform;
    v9 = v4;
    v10 = 0;
    y = pTri->m_vNormal.y;
    flMinPerimeter = 3.4028235e38;
    z = pTri->m_vNormal.z;
    nMinEdge = 0;
    do
    {
      while ( 1 )
      {
        m_pMemory = v9->m_silhouetteVertexList.m_Memory.m_pMemory;
        v18 = m_pMemory[v10];
        v19 = m_pMemory[(v10 + 1) % m_Size];
        v20 = v19[1] - v18[1];
        v21 = v19[2] - v18[2];
        v22 = *v19 - *v18;
        vNormalY_0.x = (v21 * y) - (v20 * z);
        vNormalY_0.y = (z * v22) - (v21 * x);
        vNormalY_0.z = (x * v20) - (v22 * y);
        if ( VectorNormalize(&vNormalY_0) >= 0.0009765625 )
          break;
        ++v10;
        x = pTri->m_vNormal.x;
        y = pTri->m_vNormal.y;
        z = pTri->m_vNormal.z;
        if ( m_Size <= v10 )
          goto LABEL_12;
      }
      v13 = 0;
      v14 = 0.0;
      if ( v9->m_silhouetteVertexList.m_Size != 0 )
      {
        v51 = CConvexHullBuilder::SupportExtents_Silhouette(v9, &vNormalY_0, 0, 0);
        v13 = v9->m_silhouetteVertexList.m_Size;
        v14 = v51;
      }
      y = pTri->m_vNormal.y;
      z = pTri->m_vNormal.z;
      x = pTri->m_vNormal.x;
      vNormalZ_0.x = (y * vNormalY_0.z) - (vNormalY_0.y * z);
      vNormalZ_0.y = (vNormalY_0.x * z) - (vNormalY_0.z * x);
      v15 = 0.0;
      vNormalZ_0.z = (vNormalY_0.y * x) - (vNormalY_0.x * y);
      if ( v13 != 0 )
      {
        v15 = CConvexHullBuilder::SupportExtents_Silhouette(v9, &vNormalZ_0, 0, 0);
        x = pTri->m_vNormal.x;
        y = pTri->m_vNormal.y;
        z = pTri->m_vNormal.z;
      }
      v16 = v15 + v14;
      if ( flMinPerimeter > v16 )
      {
        flMinPerimeter = v16;
        nMinEdge = v10;
      }
      ++v10;
    }
    while ( m_Size > v10 );
LABEL_12:
    v4 = v9;
    xform = vNormalX;
    v23 = nMinEdge + 1;
    v24 = nMinEdge;
  }
  v25 = v4->m_silhouetteVertexList.m_Memory.m_pMemory;
  *&nMinEdgea = x;
  vNormalXa = z;
  flMinPerimetera = y;
  v26 = v25[v24];
  v27 = v25[v23 % m_Size];
  v28 = v27[1] - v26[1];
  v29 = v27[2] - v26[2];
  v30 = *v27 - *v26;
  vNormalY.x = (v29 * y) - (v28 * z);
  vNormalY.y = (v30 * z) - (v29 * x);
  vNormalY.z = (v28 * x) - (v30 * y);
  VectorNormalize(&vNormalY);
  v31 = pTri->m_vNormal.y;
  v32 = pTri->m_vNormal.x;
  v33 = pTri->m_vNormal.z;
  vNormalZ.x = (v31 * vNormalY.z) - (vNormalY.y * v33);
  vNormalZ.y = (v33 * vNormalY.x) - (vNormalY.z * v32);
  vNormalZ.z = (vNormalY.y * v32) - (vNormalY.x * v31);
  VectorNormalize(&vNormalZ);
  xform->m_flMatVal[0][1] = vNormalY.x;
  xform->m_flMatVal[1][1] = vNormalY.y;
  xform->m_flMatVal[2][1] = vNormalY.z;
  xform->m_flMatVal[0][2] = vNormalZ.x;
  v34 = vNormalZ.y;
  xform->m_flMatVal[0][0] = *&nMinEdgea;
  xform->m_flMatVal[1][2] = v34;
  v35 = vNormalZ.z;
  xform->m_flMatVal[1][0] = flMinPerimetera;
  xform->m_flMatVal[2][0] = vNormalXa;
  xform->m_flMatVal[2][2] = v35;
  CConvexHullBuilder::SupportExtents(v4, vDirection, &vNormalY_0.x, &vNormalZ_0.x);
  v36 = vNormalXa;
  v37 = flMinPerimetera;
  v38 = *&nMinEdgea;
  if ( v4->m_silhouetteVertexList.m_Size != 0 )
  {
    CConvexHullBuilder::SupportExtents_Silhouette(v4, &vNormalY, &vNormalY_0.y, &vNormalZ_0.y);
    v38 = *&nMinEdgea;
    v37 = flMinPerimetera;
    v36 = vNormalXa;
    if ( v4->m_silhouetteVertexList.m_Size != 0 )
    {
      CConvexHullBuilder::SupportExtents_Silhouette(v4, &vNormalZ, &vNormalY_0.z, &vNormalZ_0.z);
      v36 = vNormalXa;
      v37 = flMinPerimetera;
      v38 = *&nMinEdgea;
    }
  }
  v39 = vNormalZ_0.x;
  v40 = (vNormalY_0.y + vNormalZ_0.y) * 0.5;
  v41 = vNormalZ_0.z;
  v42 = (vNormalY_0.x + vNormalZ_0.x) * 0.5;
  v43 = (vNormalY_0.z + vNormalZ_0.z) * 0.5;
  v44 = vNormalZ.z;
  vExtents->y = vNormalZ_0.y - v40;
  v45 = vNormalY.y * v40;
  vExtents->x = v39 - v42;
  v46 = v45 + (v37 * v42);
  v47 = vNormalY.z;
  vExtents->z = v41 - v43;
  v48 = (vNormalZ.y * v43) + v46;
  v49 = (v44 * v43) + ((v47 * v40) + (v36 * v42));
  v50 = (v43 * vNormalZ.x) + ((v40 * vNormalY.x) + (v42 * v38));
  xform->m_flMatVal[1][3] = v48;
  xform->m_flMatVal[2][3] = v49;
  xform->m_flMatVal[0][3] = v50;
}


// CConvexHullBuilder::FitOBBFast  (line 795, @0x00000000031bdce0, libserver.so)  // inlines: Head
// calls: CConvexHullBuilder::SupportExtents, CConvexHullBuilder::FitOBBToFace
void __fastcall CConvexHullBuilder::FitOBBFast(
        CConvexHullBuilder *const this,
        matrix3x4_t *const xform,
        Vector *const vExtents)
{
  CHullTri *m_pHead; // r14
  float v5; // xmm0_4
  CHullTri *m_pNext; // r15
  float v7; // xmm0_4
  float flExtentX; // [rsp+1Ch] [rbp-44h]
  float flMinX; // [rsp+20h] [rbp-40h] BYREF
  float flMaxX; // [rsp+24h] [rbp-3Ch] BYREF
  float flMinTest; // [rsp+28h] [rbp-38h] BYREF
  float flMaxTest[13]; // [rsp+2Ch] [rbp-34h] BYREF

  m_pHead = this->m_faceListNoVerts.m_pHead;
  if ( m_pHead != 0 )
  {
    v5 = CConvexHullBuilder::SupportExtents(this, &m_pHead->m_vNormal, &flMinX, &flMaxX);
    m_pNext = m_pHead->m_pNext;
    for ( flExtentX = v5; m_pNext != 0; m_pNext = m_pNext->m_pNext )
    {
      v7 = CConvexHullBuilder::SupportExtents(this, &m_pNext->m_vNormal, &flMinTest, flMaxTest);
      if ( flExtentX > v7 )
      {
        flExtentX = v7;
        m_pHead = m_pNext;
        flMinX = flMinTest;
        flMaxX = flMaxTest[0];
      }
    }
    CConvexHullBuilder::FitOBBToFace(this, m_pHead, xform, vExtents);
  }
}


// CConvexHullBuilder::FitOBB  (line 822, @0x00000000031bdda0, libserver.so)  // inlines: Head
// calls: CConvexHullBuilder::FitOBBToFace
// callers: FitOBBToMesh
void __fastcall CConvexHullBuilder::FitOBB(
        CConvexHullBuilder *const this,
        matrix3x4_t *const xform,
        Vector *const vExtents)
{
  CHullTri *m_pHead; // r15
  CHullTri *v5; // r14
  float flMinSurfacearea; // [rsp+1Ch] [rbp-74h]
  Vector vTmpExtents; // [rsp+20h] [rbp-70h] BYREF
  matrix3x4_t tmpXform; // [rsp+30h] [rbp-60h] BYREF

  m_pHead = this->m_faceListNoVerts.m_pHead;
  if ( m_pHead != 0 )
  {
    v5 = 0;
    flMinSurfacearea = 1.0e24;
    do
    {
      CConvexHullBuilder::FitOBBToFace(this, m_pHead, &tmpXform, &vTmpExtents);
      if ( flMinSurfacearea > (((vTmpExtents.x * vTmpExtents.y) + (vTmpExtents.x * vTmpExtents.z))
                             + (vTmpExtents.z * vTmpExtents.y)) )
      {
        flMinSurfacearea = ((vTmpExtents.x * vTmpExtents.y) + (vTmpExtents.x * vTmpExtents.z))
                         + (vTmpExtents.z * vTmpExtents.y);
        v5 = m_pHead;
      }
      m_pHead = m_pHead->m_pNext;
    }
    while ( m_pHead != 0 );
  }
  else
  {
    v5 = 0;
  }
  CConvexHullBuilder::FitOBBToFace(this, v5, xform, vExtents);
}


// ConvexHull3DFromVerts  (line 844, @0x00000000031bfd60, libserver.so)  // inlines: CClassMemoryPool, CConvexHullBuilder, CUtlIntrusiveDList, CUtlIntrusiveDListWithTailPtr, CUtlIntrusiveList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlMemoryPool, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CClassMemoryPool, ~CConvexHullBuilder, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlMemoryPool, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemoryPoolBase::CUtlMemoryPoolBase, CConvexHullBuilder::BuildHull, CConvexHullBuilder::GenerateOutputMesh, CMesh::ReverseTriangleWinding, CUtlMemory<float const*, int>::ConvertToExternalMemory, CUtlMemory<float const*, int>::Purge, CUtlMemory<CHullTri*, int>::ConvertToExternalMemory, CUtlMemory<CHullTri*, int>::Purge, CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> >::Clear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemory<CHullHalfEdge*, int>::Purge, __stack_chk_fail (14 total)
// callers: ConvexHullPartitioned, ConvexHull3D
__int64 __fastcall ConvexHull3DFromVerts(
        CMesh *pOutMesh,
        const float *pVertices,
        int nVertexCount,
        uint32 nVertexStrideFloats,
        float flCoplanarEpsilon,
        CMeshVertexAttribute *pAttributes,
        int nAttributeCount)
{
  int m_nVertexCount; // r13d
  uint32 m_nGrowSize; // eax
  uint32 v13; // edx
  CConvexHullBuilder builder; // [rsp+10h] [rbp-1900h] BYREF
  unsigned __int64 v19; // [rsp+18D8h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  builder.m_faceListVerts.m_pHead = 0;
  builder.m_faceListVerts.m_pTailPtr = 0;
  builder.m_faceListNoVerts.m_pHead = 0;
  CUtlMemoryPoolBase::CUtlMemoryPoolBase(
    &builder.m_triPool,
    184,
    128,
    8,
    MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_FAST,
    0);
  builder.m_halfEdgeList.m_Memory.m_pMemory = &builder.m_halfEdgeList.m_Memory.m_FixedMemory;
  builder.m_removeList.m_Memory.m_pMemory = &builder.m_removeList.m_Memory.m_FixedMemory;
  builder.m_halfEdgeList.m_Size = 0;
  builder.m_halfEdgeList.m_Memory.m_nAllocationCount = 256;
  builder.m_halfEdgeList.m_Memory.m_nGrowSize = 0x80000000;
  builder.m_removeList.m_Size = 0;
  builder.m_removeList.m_Memory.m_nAllocationCount = 256;
  builder.m_removeList.m_Memory.m_nGrowSize = 0x80000000;
  builder.m_silhouetteVertexList.m_Size = 0;
  builder.m_silhouetteVertexList.m_Memory.m_nAllocationCount = 256;
  builder.m_silhouetteVertexList.m_Memory.m_nGrowSize = 0x80000000;
  builder.m_silhouetteVertexList.m_Memory.m_pMemory = &builder.m_silhouetteVertexList.m_Memory.m_FixedMemory;
  builder.m_pVerts = pVertices;
  builder.m_flCoplanarEpsilon = flCoplanarEpsilon;
  builder.m_nVertexStrideFloats = nVertexStrideFloats;
  builder.m_nVertexCount = nVertexCount;
  builder.m_nCurrentVisit = 0;
  CConvexHullBuilder::BuildHull(&builder);
  CConvexHullBuilder::GenerateOutputMesh(&builder, pOutMesh, pAttributes, nAttributeCount);
  CMesh::ReverseTriangleWinding(pOutMesh);
  m_nVertexCount = pOutMesh->m_nVertexCount;
  builder.m_silhouetteVertexList.m_Size = 0;
  LOBYTE(m_nVertexCount) = m_nVertexCount > 0;
  CUtlMemory<float const*,int>::ConvertToExternalMemory(
    &builder.m_silhouetteVertexList.m_Memory,
    &builder.m_silhouetteVertexList.m_Memory.m_FixedMemory,
    256,
    0,
    1,
    0x3FFFFFFFu);
  if ( (builder.m_silhouetteVertexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float const*,int>::Purge(&builder.m_silhouetteVertexList.m_Memory);
  builder.m_removeList.m_Size = 0;
  CUtlMemory<CHullTri *,int>::ConvertToExternalMemory(
    &builder.m_removeList.m_Memory,
    &builder.m_removeList.m_Memory.m_FixedMemory,
    256,
    0,
    1,
    0x3FFFFFFFu);
  if ( (builder.m_removeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHullTri *,int>::Purge(&builder.m_removeList.m_Memory);
  builder.m_halfEdgeList.m_Size = 0;
  if ( builder.m_halfEdgeList.m_Memory.m_nAllocationCount < 0 )
  {
    v13 = builder.m_halfEdgeList.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = builder.m_halfEdgeList.m_Memory.m_nGrowSize;
    v13 = builder.m_halfEdgeList.m_Memory.m_nGrowSize & 0xC0000000;
    if ( builder.m_halfEdgeList.m_Memory.m_pMemory != &builder.m_halfEdgeList.m_Memory.m_FixedMemory )
    {
      if ( builder.m_halfEdgeList.m_Memory.m_pMemory != 0 && v13 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = builder.m_halfEdgeList.m_Memory.m_nGrowSize;
      }
      builder.m_halfEdgeList.m_Memory.m_nAllocationCount = 256;
      builder.m_halfEdgeList.m_Memory.m_pMemory = &builder.m_halfEdgeList.m_Memory.m_FixedMemory;
      builder.m_halfEdgeList.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_11;
    }
  }
  if ( v13 == 0 )
    CUtlMemory<CHullHalfEdge *,int>::Purge(&builder.m_halfEdgeList.m_Memory);
LABEL_11:
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri>>::Clear(&builder.m_triPool);
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&builder.m_triPool);
  return m_nVertexCount;
}


// ConvexHullPartitioned  (line 854, @0x00000000031c0050, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetVertex, GetVertexCount, Purge, RemoveAll, V_memcpy, memcpy, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMesh::CMesh, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount, memcpy, ConvexHull3DFromVerts, CMesh::AppendMesh, CMesh::~CMesh, Warning, CUtlMemory<float, int>::Purge, __stack_chk_fail, _Unwind_Resume
// callers: ConvexHull3D
// strings: "Convex hull building failed on part %d/%d with %d verts\n"
__int64 __fastcall ConvexHullPartitioned(
        CMeshDisjointSetPartition *const connectivity,
        const CMesh *const mesh,
        CMesh *pOutMesh,
        float flCoplanarEpsilon)
{
  int m_nVertexCount; // esi
  int v7; // esi
  __int64 v8; // r14
  CMeshDisjointSetPartition::Part_t *m_pMemory; // rsi
  int v10; // r15d
  int v11; // r13d
  int m_nVertexStrideFloats; // eax
  float *v13; // rdi
  int v14; // ecx
  CMesh *p_partMesh; // rdi
  int nPart; // [rsp+28h] [rbp-1E8h]
  int nPartsAppended; // [rsp+2Ch] [rbp-1E4h]
  CUtlVector<float,CUtlMemory<float,int> > partVerts; // [rsp+30h] [rbp-1E0h] BYREF
  CMesh partMesh; // [rsp+50h] [rbp-1C0h] BYREF
  unsigned __int64 v23; // [rsp+1D8h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( connectivity->m_Parts.m_Size <= 1 )
  {
    LODWORD(mesh) = 0;
  }
  else
  {
    CMesh::CMesh(&partMesh);
    m_nVertexCount = mesh->m_nVertexCount;
    partVerts.m_Size = 0;
    partVerts.m_Memory.m_pMemory = 0;
    partVerts.m_Memory.m_nAllocationCount = 0;
    v7 = mesh->m_nVertexStrideFloats * m_nVertexCount;
    partVerts.m_Memory.m_nGrowSize = 0;
    CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&partVerts, v7);
    if ( connectivity->m_Parts.m_Size <= 0 )
    {
      LODWORD(mesh) = 0;
    }
    else
    {
      nPart = 0;
      v8 = 0;
      nPartsAppended = 0;
      do
      {
        m_pMemory = connectivity->m_Parts.m_Memory.m_pMemory;
        v10 = 0;
        v11 = m_pMemory[v8].m_nVertexCount;
        if ( v11 > 0 )
        {
          while ( 1 )
          {
            m_nVertexStrideFloats = mesh->m_nVertexStrideFloats;
            v13 = &partVerts.m_Memory.m_pMemory[m_nVertexStrideFloats * v10];
            v14 = v10 + m_pMemory[v8].m_nVertexBegin;
            ++v10;
            memcpy(
              v13,
              &mesh->m_pVerts[connectivity->m_Indices.m_Memory.m_pMemory[v14] * m_nVertexStrideFloats],
              4LL * m_nVertexStrideFloats);
            if ( v10 == v11 )
              break;
            m_pMemory = connectivity->m_Parts.m_Memory.m_pMemory;
          }
        }
        p_partMesh = &partMesh;
        if ( nPartsAppended == 0 )
          p_partMesh = pOutMesh;
        if ( ConvexHull3DFromVerts(
               p_partMesh,
               partVerts.m_Memory.m_pMemory,
               v11,
               mesh->m_nVertexStrideFloats,
               flCoplanarEpsilon,
               mesh->m_pAttributes,
               mesh->m_nAttributeCount) != 0 )
        {
          if ( nPartsAppended != 0 )
            CMesh::AppendMesh(pOutMesh, &partMesh);
          ++nPartsAppended;
        }
        else
        {
          Warning("Convex hull building failed on part %d/%d with %d verts\n", nPart, connectivity->m_Parts.m_Size, v11);
        }
        ++nPart;
        ++v8;
      }
      while ( nPart < connectivity->m_Parts.m_Size );
      LOBYTE(mesh) = nPartsAppended > 0;
    }
    partVerts.m_Size = 0;
    if ( (partVerts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<float,int>::Purge(&partVerts.m_Memory);
      if ( (partVerts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<float,int>::Purge(&partVerts.m_Memory);
    }
    CMesh::~CMesh(&partMesh);
  }
  return mesh;
}


// ConvexHull3D  (line 891, @0x00000000031c0310, libserver.so)  // inlines: CMeshDisjointSetPartition, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CMeshDisjointSetPartition, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMeshDisjointSetPartition::CMeshDisjointSetPartition, ConvexHullPartitioned, ConvexHull3DFromVerts, CMesh::AllocateMesh, CUtlMemory<CMeshDisjointSetPartition::Part_t, int>::Purge, CMeshDisjointSetPartition::PartitionByJoints, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >::~CUtlVectorBase, _Unwind_Resume
__int64 __fastcall ConvexHull3D(CMesh *pOutMesh, const CMesh *const inputMesh, float flCoplanarEpsilon, uint32 nFlags)
{
  char v6; // r13
  __int64 result; // rax
  unsigned int flCoplanarEpsilonb; // [rsp+Ch] [rbp-64h]
  unsigned int flCoplanarEpsilonc; // [rsp+Ch] [rbp-64h]
  unsigned int flCoplanarEpsilond; // [rsp+Ch] [rbp-64h]
  CMeshDisjointSetPartition connectivity; // [rsp+10h] [rbp-60h] BYREF

  if ( inputMesh->m_nVertexCount == 0 || inputMesh->m_nIndexCount == 0 )
  {
    CMesh::AllocateMesh(pOutMesh, 0, 0, inputMesh->m_nVertexStrideFloats, 0, 0);
    return 0;
  }
  v6 = nFlags;
  if ( (nFlags & 2) == 0 )
    goto LABEL_4;
  connectivity.m_Parts.m_Size = 0;
  memset(&connectivity.m_Parts.m_Memory, 0, 20);
  connectivity.m_Indices.m_Memory.m_pMemory = 0;
  connectivity.m_Indices.m_Memory.m_nAllocationCount = 0;
  connectivity.m_Indices.m_Memory.m_nGrowSize = 0;
  if ( !CMeshDisjointSetPartition::PartitionByJoints(&connectivity, inputMesh)
    || (result = ConvexHullPartitioned(&connectivity, inputMesh, pOutMesh, flCoplanarEpsilon)) == 0 )
  {
    connectivity.m_Indices.m_Size = 0;
    if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
      if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
    }
    connectivity.m_Parts.m_Size = 0;
    if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&connectivity.m_Parts.m_Memory);
      if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&connectivity.m_Parts.m_Memory);
    }
LABEL_4:
    if ( (v6 & 1) == 0 )
      return ConvexHull3DFromVerts(
               pOutMesh,
               inputMesh->m_pVerts,
               inputMesh->m_nVertexCount,
               inputMesh->m_nVertexStrideFloats,
               flCoplanarEpsilon,
               inputMesh->m_pAttributes,
               inputMesh->m_nAttributeCount);
    CMeshDisjointSetPartition::CMeshDisjointSetPartition(&connectivity, inputMesh);
    result = ConvexHullPartitioned(&connectivity, inputMesh, pOutMesh, flCoplanarEpsilon);
    connectivity.m_Indices.m_Size = 0;
    if ( result == 0 )
    {
      if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
        if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
      }
      connectivity.m_Parts.m_Size = 0;
      if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&connectivity.m_Parts.m_Memory);
        if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&connectivity.m_Parts.m_Memory);
      }
      return ConvexHull3DFromVerts(
               pOutMesh,
               inputMesh->m_pVerts,
               inputMesh->m_nVertexCount,
               inputMesh->m_nVertexStrideFloats,
               flCoplanarEpsilon,
               inputMesh->m_pAttributes,
               inputMesh->m_nAttributeCount);
    }
    if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      flCoplanarEpsilonc = result;
      CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
      result = flCoplanarEpsilonc;
      if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
        result = flCoplanarEpsilonc;
      }
    }
    connectivity.m_Parts.m_Size = 0;
    if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      flCoplanarEpsilonb = result;
      CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&connectivity.m_Parts.m_Memory);
      result = flCoplanarEpsilonb;
      if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_14;
    }
    return result;
  }
  connectivity.m_Indices.m_Size = 0;
  if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    flCoplanarEpsilond = result;
    CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
    result = flCoplanarEpsilond;
    if ( (connectivity.m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&connectivity.m_Indices.m_Memory);
      result = flCoplanarEpsilond;
    }
  }
  connectivity.m_Parts.m_Size = 0;
  if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    flCoplanarEpsilonb = result;
    CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&connectivity.m_Parts.m_Memory);
    result = flCoplanarEpsilonb;
    if ( (connectivity.m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
LABEL_14:
      CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&connectivity.m_Parts.m_Memory);
      return flCoplanarEpsilonb;
    }
  }
  return result;
}


// FitOBBToMesh  (line 926, @0x00000000031c0660, libserver.so)  // inlines: CClassMemoryPool, CConvexHullBuilder, CUtlIntrusiveDList, CUtlIntrusiveDListWithTailPtr, CUtlIntrusiveList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlMemoryPool, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, operator=, ~CClassMemoryPool, ~CConvexHullBuilder, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlMemoryPool, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemoryPoolBase::CUtlMemoryPoolBase, CConvexHullBuilder::BuildHull, CConvexHullBuilder::FitOBB, CUtlMemory<float const*, int>::ConvertToExternalMemory, CUtlMemory<float const*, int>::Purge, CUtlMemory<CHullTri*, int>::ConvertToExternalMemory, CUtlMemory<CHullTri*, int>::Purge, CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> >::Clear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemory<CHullHalfEdge*, int>::Purge, __stack_chk_fail, CConvexHullBuilder::~CConvexHullBuilder (13 total)
// callers: CalcOOBB2d
__int64 __fastcall FitOBBToMesh(
        matrix3x4_t *pCenter,
        Vector *pExtents,
        const CMesh *const inputMesh,
        float flCoplanarEpsilon)
{
  float *m_pVerts; // rax
  uint32 m_nVertexStrideFloats; // r15d
  int m_nVertexCount; // r14d
  unsigned int v9; // edx
  unsigned int v10; // r14d
  vec_t x; // xmm0_4
  uint32 m_nGrowSize; // edx
  uint32 v13; // eax
  const float *v16; // [rsp+8h] [rbp-1948h]
  Vector vExtents; // [rsp+10h] [rbp-1940h] BYREF
  matrix3x4_t xform; // [rsp+20h] [rbp-1930h] BYREF
  CConvexHullBuilder builder; // [rsp+50h] [rbp-1900h] BYREF
  unsigned __int64 v20; // [rsp+1918h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  m_pVerts = inputMesh->m_pVerts;
  builder.m_faceListVerts.m_pHead = 0;
  builder.m_faceListVerts.m_pTailPtr = 0;
  m_nVertexStrideFloats = inputMesh->m_nVertexStrideFloats;
  builder.m_faceListNoVerts.m_pHead = 0;
  m_nVertexCount = inputMesh->m_nVertexCount;
  v16 = m_pVerts;
  CUtlMemoryPoolBase::CUtlMemoryPoolBase(
    &builder.m_triPool,
    184,
    128,
    8,
    MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_FAST,
    0);
  builder.m_nVertexStrideFloats = m_nVertexStrideFloats;
  builder.m_halfEdgeList.m_Memory.m_pMemory = &builder.m_halfEdgeList.m_Memory.m_FixedMemory;
  builder.m_removeList.m_Memory.m_pMemory = &builder.m_removeList.m_Memory.m_FixedMemory;
  builder.m_halfEdgeList.m_Size = 0;
  builder.m_halfEdgeList.m_Memory.m_nAllocationCount = 256;
  builder.m_halfEdgeList.m_Memory.m_nGrowSize = 0x80000000;
  builder.m_removeList.m_Size = 0;
  builder.m_removeList.m_Memory.m_nAllocationCount = 256;
  builder.m_removeList.m_Memory.m_nGrowSize = 0x80000000;
  builder.m_silhouetteVertexList.m_Size = 0;
  builder.m_silhouetteVertexList.m_Memory.m_nAllocationCount = 256;
  builder.m_silhouetteVertexList.m_Memory.m_nGrowSize = 0x80000000;
  builder.m_silhouetteVertexList.m_Memory.m_pMemory = &builder.m_silhouetteVertexList.m_Memory.m_FixedMemory;
  builder.m_pVerts = v16;
  builder.m_flCoplanarEpsilon = flCoplanarEpsilon;
  builder.m_nVertexCount = m_nVertexCount;
  builder.m_nCurrentVisit = 0;
  CConvexHullBuilder::BuildHull(&builder);
  CConvexHullBuilder::FitOBB(&builder, &xform, &vExtents);
  LOBYTE(v9) = pExtents != 0 && pCenter != 0;
  v10 = v9;
  if ( v9 != 0 )
  {
    x = vExtents.x;
    *pCenter = xform;
    pExtents->x = x;
    pExtents->y = vExtents.y;
    pExtents->z = vExtents.z;
  }
  builder.m_silhouetteVertexList.m_Size = 0;
  CUtlMemory<float const*,int>::ConvertToExternalMemory(
    &builder.m_silhouetteVertexList.m_Memory,
    &builder.m_silhouetteVertexList.m_Memory.m_FixedMemory,
    256,
    0,
    1,
    0x3FFFFFFFu);
  if ( (builder.m_silhouetteVertexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float const*,int>::Purge(&builder.m_silhouetteVertexList.m_Memory);
  builder.m_removeList.m_Size = 0;
  CUtlMemory<CHullTri *,int>::ConvertToExternalMemory(
    &builder.m_removeList.m_Memory,
    &builder.m_removeList.m_Memory.m_FixedMemory,
    256,
    0,
    1,
    0x3FFFFFFFu);
  if ( (builder.m_removeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHullTri *,int>::Purge(&builder.m_removeList.m_Memory);
  builder.m_halfEdgeList.m_Size = 0;
  if ( builder.m_halfEdgeList.m_Memory.m_nAllocationCount < 0 )
  {
    v13 = builder.m_halfEdgeList.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = builder.m_halfEdgeList.m_Memory.m_nGrowSize;
    v13 = builder.m_halfEdgeList.m_Memory.m_nGrowSize & 0xC0000000;
    if ( builder.m_halfEdgeList.m_Memory.m_pMemory != &builder.m_halfEdgeList.m_Memory.m_FixedMemory )
    {
      if ( builder.m_halfEdgeList.m_Memory.m_pMemory != 0 && v13 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = builder.m_halfEdgeList.m_Memory.m_nGrowSize;
      }
      builder.m_halfEdgeList.m_Memory.m_nAllocationCount = 256;
      builder.m_halfEdgeList.m_Memory.m_pMemory = &builder.m_halfEdgeList.m_Memory.m_FixedMemory;
      builder.m_halfEdgeList.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_13;
    }
  }
  if ( v13 == 0 )
    CUtlMemory<CHullHalfEdge *,int>::Purge(&builder.m_halfEdgeList.m_Memory);
LABEL_13:
  CClassMemoryPool<CHullTri,CUtlMemoryPool<CHullTri>>::Clear(&builder.m_triPool);
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&builder.m_triPool);
  return v10;
}


// CSGInsidePoint  (line 944, @0x00000000031bd070, libserver.so)  // inlines: DotProduct, VectorMultiply, operator*, operator-=
// callers: CSGPlaneList
Vector __fastcall CSGInsidePoint(VPlane *pPlanes, int planeCount)
{
  float x; // xmm7_4
  float y; // xmm6_4
  VPlane *v5; // rax
  float v6; // xmm3_4
  float v7; // xmm4_4
  float z; // xmm2_4
  float v9; // xmm0_4
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  x = vec3_origin.x;
  y = vec3_origin.y;
  result.z = vec3_origin.z;
  if ( planeCount > 0 )
  {
    v5 = &pPlanes[(planeCount - 1) + 1];
    do
    {
      while ( 1 )
      {
        v6 = pPlanes->m_Normal.y;
        v7 = pPlanes->m_Normal.x;
        z = pPlanes->m_Normal.z;
        v9 = (((x * pPlanes->m_Normal.x) + (v6 * y)) + (z * result.z)) - pPlanes->m_Dist;
        if ( v9 < 0.0 )
          break;
        if ( ++pPlanes == v5 )
          goto LABEL_6;
      }
      ++pPlanes;
      x = x - (v7 * v9);
      y = y - (v6 * v9);
      result.z = result.z - (v9 * z);
    }
    while ( pPlanes != v5 );
  }
LABEL_6:
  *&result.x = __PAIR64__(LODWORD(y), LODWORD(x));
  return result;
}


// TranslatePlaneList  (line 959, @0x00000000031bd120, libserver.so)  // inlines: DotProduct
// callers: CSGPlaneList
void __fastcall TranslatePlaneList(VPlane *pPlanes, int planeCount, const Vector *const offset)
{
  VPlane *v3; // rax

  if ( planeCount > 0 )
  {
    v3 = &pPlanes[(planeCount - 1) + 1];
    do
    {
      ++pPlanes;
      pPlanes[-1].m_Dist = (((offset->x * pPlanes[-1].m_Normal.x) + (offset->y * pPlanes[-1].m_Normal.y))
                          + (offset->z * pPlanes[-1].m_Normal.z))
                         + pPlanes[-1].m_Dist;
    }
    while ( pPlanes != v3 );
  }
}


// InvertPlanes  (line 967, @0x00000000031bd180, libserver.so)  // inlines: operator*=
// callers: HullFromPlanes
void __fastcall InvertPlanes(VPlane *pPlaneList, int nPlaneCount)
{
  VPlane *v2; // rax
  float x; // xmm1_4

  if ( nPlaneCount > 0 )
  {
    v2 = &pPlaneList[(nPlaneCount - 1) + 1];
    do
    {
      x = pPlaneList->m_Normal.x;
      ++pPlaneList;
      pPlaneList[-1].m_Normal.x = -x;
      pPlaneList[-1].m_Normal.y = -pPlaneList[-1].m_Normal.y;
      pPlaneList[-1].m_Normal.z = -pPlaneList[-1].m_Normal.z;
      pPlaneList[-1].m_Dist = -pPlaneList[-1].m_Dist;
    }
    while ( pPlaneList != v2 );
  }
}


// ClipPolygon  (line 977, @0x00000000031bd1e0, libserver.so)  // inlines: DotProduct, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// callers: CSGPlaneList
__int64 __fastcall ClipPolygon(
        const Vector *pInput,
        Vector *pOutput,
        const VPlane *pPlane,
        int nverts,
        float flCoplanarEpsilon)
{
  const Vector *v5; // r8
  Vector *v6; // rax
  int v7; // r10d
  float v8; // xmm0_4
  char *v9; // r9
  int v10; // r11d
  float *v11; // r9
  float y; // xmm5_4
  float z; // xmm4_4
  float m_Dist; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float x; // xmm5_4
  vec_t v22; // xmm2_4
  vec_t v23; // xmm1_4
  float v24; // xmm3_4

  if ( nverts <= 0 )
    return 0;
  v5 = pInput;
  v6 = pOutput;
  v7 = 1;
  v8 = -flCoplanarEpsilon;
  do
  {
    while ( 1 )
    {
      if ( nverts - 1 <= v7 - 1 )
      {
        v10 = v7;
        v9 = 0;
      }
      else
      {
        v9 = v5 + 12LL - pInput;
        v10 = v7;
      }
      v11 = &v9[pInput];
      y = pPlane->m_Normal.y;
      z = pPlane->m_Normal.z;
      m_Dist = pPlane->m_Dist;
      v15 = (((v5->x * pPlane->m_Normal.x) + (v5->y * y)) + (v5->z * z)) - m_Dist;
      v16 = (((pPlane->m_Normal.x * *v11) + (y * v11[1])) + (z * v11[2])) - m_Dist;
      if ( v15 >= v8 )
      {
        v6->x = v5->x;
        v6->y = v5->y;
        v6->z = v5->z;
        ++v6;
        if ( v15 < 0.0 )
          v15 = 0.0;
      }
      if ( (v15 * v16) < 0.0 )
        break;
      ++v5;
      ++v7;
      if ( nverts <= v10 )
        return -1431655765 * ((v6 - pOutput) >> 2);
    }
    v17 = v16 - v15;
    v18 = v15;
    v19 = v5->y;
    ++v6;
    ++v5;
    ++v7;
    v20 = -v18 / v17;
    x = v5[-1].x;
    v22 = ((v11[1] - v19) * v20) + v19;
    v23 = ((v11[2] - v5[-1].z) * v20) + v5[-1].z;
    v24 = *v11;
    v6[-1].y = v22;
    v6[-1].z = v23;
    v6[-1].x = ((v24 - x) * v20) + x;
  }
  while ( nverts > v10 );
  return -1431655765 * ((v6 - pOutput) >> 2);
}


// CSGPlaneList  (line 999, @0x00000000031bec30, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, CopyConstruct<unsigned int>, Element, GrowMemory, VectorAdd, operator+, operator-, operator[]
// calls: CSGInsidePoint, TranslatePlaneList, PolyFromPlane, ClipPolygon, CUtlMemory<unsigned int, int>::Grow, CUtlMemory<Vector, int>::Grow
// callers: HullFromPlanes
void __fastcall CSGPlaneList(
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const verts,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const index,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *trianglePlaneIndices,
        VPlane *pPlaneList,
        int nPlaneCount,
        float flCoplanarEpsilon)
{
  float v10; // xmm2_4
  int v11; // r15d
  int v12; // eax
  VPlane *v13; // rbx
  Vector *v14; // r13
  const VPlane *v15; // rdx
  Vector *v16; // rdx
  int v17; // r15d
  int v18; // r13d
  unsigned int *m_pMemory; // rcx
  int v20; // eax
  int *v21; // rcx
  int v22; // ecx
  int v23; // r12d
  unsigned int v24; // r8d
  unsigned int *v25; // rsi
  int v26; // r12d
  unsigned int *v27; // rax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int *v30; // rax
  __int64 v31; // r12
  int v32; // eax
  unsigned int *v33; // rax
  __int64 v34; // r12
  int v35; // eax
  float x; // xmm3_4
  float y; // xmm4_4
  float *p_x; // r12
  float z; // xmm5_4
  __int64 j; // r13
  float *v41; // rax
  int v42; // eax
  float v43; // xmm1_4
  float v44; // xmm0_4
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *indexa; // [rsp+20h] [rbp-CB0h]
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *v46; // [rsp+30h] [rbp-CA0h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > *vertsa; // [rsp+38h] [rbp-C98h]
  int nVertCount; // [rsp+48h] [rbp-C88h]
  int v50; // [rsp+4Ch] [rbp-C84h]
  float v51; // [rsp+4Ch] [rbp-C84h]
  float v52; // [rsp+50h] [rbp-C80h]
  unsigned int v53; // [rsp+54h] [rbp-C7Ch]
  float v54; // [rsp+54h] [rbp-C7Ch]
  VPlane *normal; // [rsp+58h] [rbp-C78h]
  Vector *pVertsOut; // [rsp+60h] [rbp-C70h]
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int> >::CAllocator *p_m_Memory; // [rsp+68h] [rbp-C68h]
  int m_Size; // [rsp+78h] [rbp-C58h]
  float v61; // [rsp+78h] [rbp-C58h]
  int v62; // [rsp+7Ch] [rbp-C54h]
  float v63; // [rsp+7Ch] [rbp-C54h]
  int v64; // [rsp+80h] [rbp-C50h]
  float v65; // [rsp+80h] [rbp-C50h]
  int i; // [rsp+84h] [rbp-C4Ch]
  Vector *pTmp; // [rsp+88h] [rbp-C48h]
  Vector vVertBuffer0[128]; // [rsp+A0h] [rbp-C30h] BYREF
  Vector vVertBuffer1[128]; // [rsp+6A0h] [rbp-630h] BYREF
  Vector v70; // 0:kr00_12.12

  v70 = CSGInsidePoint(pPlaneList, nPlaneCount);
  vVertBuffer1[0].x = -v70.x;
  vVertBuffer1[0].y = -v70.y;
  vVertBuffer1[0].z = -v70.z;
  TranslatePlaneList(pPlaneList, nPlaneCount, vVertBuffer1);
  if ( nPlaneCount > 0 )
  {
    normal = pPlaneList;
    pTmp = vVertBuffer0;
    p_m_Memory = &index->m_Memory;
    i = 0;
    pVertsOut = vVertBuffer1;
    v46 = &verts->m_Memory;
    vertsa = verts;
    indexa = index;
    do
    {
      v11 = 0;
      v12 = PolyFromPlane(pTmp, &normal->m_Normal, normal->m_Dist, 9000.0, v10);
      v13 = pPlaneList;
      v14 = pVertsOut;
      do
      {
        while ( i == v11 || v12 <= 2 )
        {
          ++v11;
          ++v13;
          if ( v11 == nPlaneCount )
            goto LABEL_8;
        }
        v15 = v13;
        ++v11;
        ++v13;
        v12 = ClipPolygon(pTmp, v14, v15, v12, flCoplanarEpsilon);
        v16 = pTmp;
        pTmp = v14;
        v14 = v16;
      }
      while ( v11 != nPlaneCount );
LABEL_8:
      pVertsOut = v14;
      if ( v12 > 2 )
      {
        nVertCount = v12;
        v64 = v12 - 2;
        v17 = 0;
        m_Size = vertsa->m_Size;
        v18 = vertsa->m_Size + 1;
        v62 = vertsa->m_Size + 2;
        do
        {
          if ( trianglePlaneIndices != 0 )
          {
            v31 = trianglePlaneIndices->m_Size;
            v32 = trianglePlaneIndices->m_Size;
            if ( v31 == trianglePlaneIndices->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<unsigned int,int>::Grow(&trianglePlaneIndices->m_Memory, 1);
              v32 = trianglePlaneIndices->m_Size;
            }
            trianglePlaneIndices->m_Size = v32 + 1;
            v33 = &trianglePlaneIndices->m_Memory.m_pMemory[v31];
            if ( v33 != 0 )
              *v33 = i;
          }
          v34 = indexa->m_Size;
          v35 = indexa->m_Size;
          if ( v34 == indexa->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<unsigned int,int>::Grow(p_m_Memory, 1);
            v35 = indexa->m_Size;
          }
          m_pMemory = indexa->m_Memory.m_pMemory;
          v20 = v35 + 1;
          indexa->m_Size = v20;
          v21 = &m_pMemory[v34];
          if ( v21 != 0 )
          {
            *v21 = m_Size;
            v20 = indexa->m_Size;
          }
          v22 = v17;
          v23 = v20;
          v24 = v18 + v17;
          if ( indexa->m_Memory.m_nAllocationCount == v20 )
          {
            v50 = v20;
            CUtlMemory<unsigned int,int>::Grow(p_m_Memory, 1);
            v23 = indexa->m_Size;
            v20 = v50;
            v22 = v17;
            v24 = v18 + v17;
          }
          v25 = indexa->m_Memory.m_pMemory;
          v26 = v23 + 1;
          indexa->m_Size = v26;
          v27 = &v25[v20];
          if ( v27 != 0 )
          {
            *v27 = v24;
            v26 = indexa->m_Size;
          }
          v28 = v62 + v22;
          v29 = v26;
          if ( indexa->m_Memory.m_nAllocationCount == v26 )
          {
            v53 = v28;
            CUtlMemory<unsigned int,int>::Grow(p_m_Memory, 1);
            v29 = indexa->m_Size;
            v28 = v53;
          }
          indexa->m_Size = v29 + 1;
          v30 = &indexa->m_Memory.m_pMemory[v26];
          if ( v30 != 0 )
            *v30 = v28;
          ++v17;
        }
        while ( v64 > v17 );
        x = v70.x;
        y = v70.y;
        p_x = &pTmp->x;
        z = v70.z;
        for ( j = vertsa->m_Size; ; j = vertsa->m_Size )
        {
          v42 = j;
          v10 = *p_x + x;
          v43 = p_x[1] + y;
          v44 = p_x[2] + z;
          if ( vertsa->m_Memory.m_nAllocationCount == j )
          {
            v51 = z;
            v52 = y;
            v54 = x;
            v61 = p_x[2] + z;
            v63 = p_x[1] + y;
            v65 = *p_x + x;
            CUtlMemory<Vector,int>::Grow(v46, 1);
            v42 = vertsa->m_Size;
            z = v51;
            y = v52;
            x = v54;
            v44 = v61;
            v43 = v63;
            v10 = v65;
          }
          vertsa->m_Size = v42 + 1;
          v41 = &vertsa->m_Memory.m_pMemory[j].x;
          if ( v41 != 0 )
          {
            *v41 = v10;
            v41[1] = v43;
            v41[2] = v44;
          }
          p_x += 3;
          if ( p_x == &pTmp[(nVertCount - 1) + 1] )
            break;
        }
      }
      ++i;
      ++normal;
    }
    while ( i != nPlaneCount );
  }
}


// HullFromPlanes  (line 1062, @0x00000000031bfa90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Init, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<VPlane, CUtlMemory<VPlane, int> >::SetCount, InvertPlanes, CSGPlaneList, CMesh::AllocateAndCopyMesh, CUtlMemory<Vector, int>::Purge, CUtlMemory<VPlane, int>::Purge, CUtlMemory<unsigned int, int>::Purge, _Unwind_Resume
void __fastcall HullFromPlanes(
        CMesh *pOutMesh,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *pTrianglePlaneIndices,
        vec_t *pPlanesInput,
        int nPlaneCount,
        int nPlaneStrideFloats,
        float flCoplanarEpsilon)
{
  __int64 v6; // r15
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  VPlane *v13; // rdx
  vec_t v14; // xmm1_4
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  CUtlVector<VPlane,CUtlMemory<VPlane,int> > planes; // [rsp+30h] [rbp-90h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > verts; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > index; // [rsp+70h] [rbp-50h] BYREF

  v6 = nPlaneStrideFloats;
  planes.m_Size = 0;
  planes.m_Memory.m_pMemory = 0;
  planes.m_Memory.m_nAllocationCount = 0;
  planes.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<VPlane,CUtlMemory<VPlane,int>>::SetCount(&planes, nPlaneCount);
  if ( nPlaneCount > 0 )
  {
    v10 = 4 * v6;
    v11 = 0;
    v12 = 16 * ((nPlaneCount - 1) + 1LL);
    do
    {
      v13 = &planes.m_Memory.m_pMemory[v11 / 0x10];
      v14 = pPlanesInput[2];
      v15 = pPlanesInput[1];
      v13->m_Normal.x = *pPlanesInput;
      v13->m_Normal.y = v15;
      v13->m_Normal.z = v14;
      v16 = pPlanesInput[3];
      pPlanesInput = (pPlanesInput + v10);
      planes.m_Memory.m_pMemory[v11 / 0x10].m_Dist = v16;
      v11 += 16LL;
    }
    while ( v11 != v12 );
  }
  InvertPlanes(planes.m_Memory.m_pMemory, planes.m_Size);
  verts.m_Size = 0;
  verts.m_Memory.m_pMemory = 0;
  verts.m_Memory.m_nAllocationCount = 0;
  verts.m_Memory.m_nGrowSize = 0;
  index.m_Size = 0;
  index.m_Memory.m_pMemory = 0;
  index.m_Memory.m_nAllocationCount = 0;
  index.m_Memory.m_nGrowSize = 0;
  CSGPlaneList(&verts, &index, pTrianglePlaneIndices, planes.m_Memory.m_pMemory, planes.m_Size, flCoplanarEpsilon);
  if ( verts.m_Size != 0 )
    CMesh::AllocateAndCopyMesh(
      pOutMesh,
      verts.m_Size,
      &verts.m_Memory.m_pMemory->x,
      3,
      index.m_Size,
      index.m_Memory.m_pMemory,
      3,
      0,
      0);
  index.m_Size = 0;
  if ( (index.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&index.m_Memory);
    if ( (index.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&index.m_Memory);
  }
  verts.m_Size = 0;
  if ( (verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&verts.m_Memory);
    if ( (verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&verts.m_Memory);
  }
  planes.m_Size = 0;
  if ( (planes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<VPlane,int>::Purge(&planes.m_Memory);
    if ( (planes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<VPlane,int>::Purge(&planes.m_Memory);
  }
}


