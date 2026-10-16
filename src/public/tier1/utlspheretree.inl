
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlSphereTree::~CUtlSphereTree  (line 316, @0x0000000001f77cf0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CUtlSphereTree::Node, int>::Purge
void __fastcall CUtlSphereTree::~CUtlSphereTree(CUtlSphereTree *const this)
{
  bool v2; // zf
  CUtlVectorBase<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CUtlSphereTree = off_3FCF010;  // vptr: CUtlSphereTree
  this->m_Nodes.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Nodes.m_Memory;
    CUtlMemory<CUtlSphereTree::Node,int>::Purge(&this->m_Nodes.m_Memory);
    if ( (this->m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSphereTree::Node,int>::Purge(p_m_Memory);
  }
}


// CUtlSphereTree::~CUtlSphereTree  (line 316, @0x0000000001f77dd0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlSphereTree, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CUtlSphereTree::Node, int>::Purge
void __fastcall CUtlSphereTree::~CUtlSphereTree(CUtlSphereTree *const this)
{
  bool v2; // zf
  CUtlVectorBase<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CUtlSphereTree = off_3FCF010;  // vptr: CUtlSphereTree
  this->m_Nodes.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_Nodes.m_Memory,
        CUtlMemory<CUtlSphereTree::Node,int>::Purge(&this->m_Nodes.m_Memory),
        (this->m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<CUtlSphereTree::Node,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CUtlSphereTree::NewNode  (line 356, @0x000000000325b210, libserver.so)  // inlines: AddToTail, FreelistPop, GrowMemory, Ptr, Ref, Vector4D, operator->, operator=, operator[]
// calls: CUtlMemory<CUtlSphereTree::Node, int>::Grow
// callers: CUtlSphereTree::Insert
// write access to const memory has been detected, the output may be wrong!
CUtlSphereTree::NodeRef __fastcall CUtlSphereTree::NewNode(
        CUtlSphereTree *const this,
        const void *pData,
        const Sphere_t *bounds)
{
  int m_FreelistHead; // r12d
  vec_t w; // xmm0_4
  vec_t z; // xmm1_4
  vec_t y; // xmm2_4
  vec_t x; // xmm3_4
  __int64 v12; // rax
  CUtlSphereTree::Node *v13; // rcx
  CUtlSphereTree::Node *v14; // rax
  int m_Size; // eax
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *p_m_Nodes; // [rsp+8h] [rbp-28h]
  CUtlSphereTree::NodeRef result; // 0:eax.4,8:rdx.8

  result.pNodes = &this->m_Nodes;
  m_FreelistHead = this->m_FreelistHead;
  if ( m_FreelistHead < 0 )
  {
    m_FreelistHead = this->m_Nodes.m_Size;
    m_Size = m_FreelistHead;
    if ( m_FreelistHead == this->m_Nodes.m_Memory.m_nAllocationCount )
    {
      p_m_Nodes = &this->m_Nodes;
      CUtlMemory<CUtlSphereTree::Node,int>::Grow(&this->m_Nodes.m_Memory, 1);
      m_Size = this->m_Nodes.m_Size;
      result.pNodes = p_m_Nodes;
    }
    ++this->m_NumNodesInTree;
    this->m_Nodes.m_Size = m_Size + 1;
    if ( bounds != 0 )
      goto LABEL_3;
  }
  else
  {
    this->m_FreelistHead = LODWORD(this->m_Nodes.m_Memory.m_pMemory[m_FreelistHead].bounds.x);
    ++this->m_NumNodesInTree;
    if ( bounds != 0 )
    {
LABEL_3:
      w = bounds->w;
      z = bounds->z;
      y = bounds->y;
      x = bounds->x;
      goto LABEL_4;
    }
  }
  w = 0.0;
  z = 0.0;
  y = 0.0;
  x = 0.0;
LABEL_4:
  if ( m_FreelistHead < 0 )
  {
    loc_0 = LODWORD(x);
    v14 = 0;
    *(&loc_2 + 2) = y;
    *&stru_8.gap0 = z;
    *&stru_C.gap0 = w;
    *&stru_10.m_Lock.gap0 = -1;
    *(&stru_10.CThreadLockableObject<CThreadNullMutex> + 1) = -1;
    stru_10.m_pIdentityChunks[0] = pData;
  }
  else
  {
    v12 = m_FreelistHead;
    v13 = &result.pNodes->m_Memory.m_pMemory[v12];
    v13->bounds.x = x;
    v13->bounds.y = y;
    v13->bounds.z = z;
    v13->bounds.w = w;
    result.pNodes->m_Memory.m_pMemory[v12].deepIndex = -1;
    result.pNodes->m_Memory.m_pMemory[v12].shallowIndex = -1;
    result.pNodes->m_Memory.m_pMemory[v12].pData = pData;
    v14 = &result.pNodes->m_Memory.m_pMemory[v12];
  }
  v14->maxDepth = 0;
  result.nodeIndex = m_FreelistHead;
  return result;
}


// CUtlSphereTree::SetNodeChildren  (line 382, @0x00000000032592f0, libserver.so)  // inlines: AddSpheres, Deep, NormalizeInPlace, Ptr, Shallow, Vector4D, VectorMultiply, VectorSubtract, operator*, operator-, operator->, operator=, operator[]
// calls: VectorNormalize
// callers: CUtlSphereTree::RebalanceSubtrees, CUtlSphereTree::Remove_R, CUtlSphereTree::Insert
void __fastcall CUtlSphereTree::SetNodeChildren(
        CUtlSphereTree *const this,
        CUtlSphereTree::NodeRef *const node,
        const CUtlSphereTree::NodeRef *const childA,
        const CUtlSphereTree::NodeRef *const childB)
{
  CUtlSphereTree::Node *v4; // rax
  int maxDepth; // r8d
  CUtlSphereTree::Node *v7; // rdi
  int nodeIndex; // eax
  __int64 v9; // r9
  bool v10; // di
  CUtlSphereTree::Node *v11; // r8
  CUtlSphereTree::Node *v12; // rax
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *pNodes; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r13
  vec_t v23; // xmm1_4
  vec_t v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  __int64 v32; // rdx
  CUtlSphereTree::Node *v33; // rax
  __int64 v34; // rax
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  CUtlSphereTree::Node *v39; // rax
  __int64 v40; // rdx
  float v41; // [rsp+8h] [rbp-38h]
  float v42; // [rsp+Ch] [rbp-34h]
  Vector vec; // [rsp+10h] [rbp-30h] BYREF

  v4 = 0;
  if ( childA->nodeIndex >= 0 )
    v4 = &childA->pNodes->m_Memory.m_pMemory[childA->nodeIndex];
  maxDepth = v4->maxDepth;
  v7 = 0;
  nodeIndex = childB->nodeIndex;
  if ( childB->nodeIndex >= 0 )
    v7 = &childB->pNodes->m_Memory.m_pMemory[nodeIndex];
  v9 = node->nodeIndex;
  v10 = maxDepth > v7->maxDepth;
  v11 = 0;
  if ( v9 >= 0 )
    v11 = &node->pNodes->m_Memory.m_pMemory[v9];
  if ( v10 )
    nodeIndex = childA->nodeIndex;
  v11->deepIndex = nodeIndex;
  v12 = 0;
  v13 = node->nodeIndex;
  if ( v13 >= 0 )
    v12 = &node->pNodes->m_Memory.m_pMemory[v13];
  if ( v10 )
    v14 = childB->nodeIndex;
  else
    v14 = childA->nodeIndex;
  v12->shallowIndex = v14;
  v15 = 0;
  v16 = node->nodeIndex;
  pNodes = node->pNodes;
  if ( v16 >= 0 )
    v15 = &pNodes->m_Memory.m_pMemory[v16];
  v18 = *(v15 + 20);
  v19 = 0;
  if ( v18 >= 0 )
    v19 = &pNodes->m_Memory.m_pMemory[v18];
  v20 = 0;
  if ( v16 >= 0 )
    v20 = &pNodes->m_Memory.m_pMemory[v16];
  v21 = *(v20 + 16);
  v22 = 0;
  if ( v21 >= 0 )
    v22 = &pNodes->m_Memory.m_pMemory[v21];
  v23 = *(v22 + 4) - *(v19 + 4);
  v24 = *(v22 + 8) - *(v19 + 8);
  v25 = *(v22 + 12);
  vec.x = *v22 - *v19;
  v26 = *(v19 + 12);
  vec.y = v23;
  v41 = v25;
  v42 = v26;
  vec.z = v24;
  v27 = VectorNormalize(&vec);
  if ( fabs(v41 - v42) <= v27 )
  {
    v28 = ((v41 + v42) + v27) * 0.5;
    v30 = (vec.y * (v28 - v42)) + *(v19 + 4);
    v31 = (vec.x * (v28 - v42)) + *v19;
    v29 = ((v28 - v42) * vec.z) + *(v19 + 8);
  }
  else
  {
    if ( v41 > v42 )
      v19 = v22;
    v28 = *(v19 + 12);
    v29 = *(v19 + 8);
    v30 = *(v19 + 4);
    v31 = *v19;
  }
  v32 = node->nodeIndex;
  v33 = 0;
  if ( v32 >= 0 )
    v33 = &node->pNodes->m_Memory.m_pMemory[v32];
  v33->bounds.x = v31;
  v33->bounds.y = v30;
  v33->bounds.z = v29;
  v33->bounds.w = v28;
  v34 = node->nodeIndex;
  v35 = node->pNodes;
  if ( v34 < 0 )
    v36 = 0;
  else
    v36 = &v35->m_Memory.m_pMemory[v34];
  v37 = *(v36 + 16);
  v38 = 0;
  if ( v37 >= 0 )
    v38 = &v35->m_Memory.m_pMemory[v37];
  *(v36 + 32) = *(v38 + 32) + 1;
  v39 = 0;
  v40 = node->nodeIndex;
  if ( v40 >= 0 )
    v39 = &node->pNodes->m_Memory.m_pMemory[v40];
  v39->pData = 0;
}


// CUtlSphereTree::Insert  (line 392, @0x000000000325b630, libserver.so)  // inlines: AddSpheres, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, ComputePairingCost, CopyNode, Cost, Deep, FastSqrt, IsLeaf, IsSubtreeBalanced, Length, NormalizeInPlace, Ptr, Purge, RebalanceSubtrees, Ref, RemoveAll, Shallow, Vector4D, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator->, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CUtlSphereTree::FindPathToClosestLeaf_R, CUtlSphereTree::NewNode, CUtlSphereTree::SetNodeChildren, CUtlSphereTree::RebalanceSubtrees, CUtlSphereTree::ComputePairingCost, VectorNormalize, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CFoW::InsertViewerIntoTree
void __fastcall CUtlSphereTree::Insert(CUtlSphereTree *const this, const void *pData, const Sphere_t *bounds)
{
  __int64 m_PrevInsertedNode; // rdx
  CUtlSphereTree::Node *m_pMemory; // rax
  float x; // xmm2_4
  CUtlSphereTree::Node *v9; // rdx
  float y; // xmm1_4
  float z; // xmm3_4
  int v12; // eax
  CUtlSphereTree::Node *v13; // rcx
  CUtlSphereTree::Node *v14; // rsi
  vec_t v15; // xmm0_4
  int deepIndex; // edi
  bool v17; // cc
  int v18; // r14d
  __int64 v19; // rax
  CUtlSphereTree::Node *v20; // rax
  int shallowIndex; // edx
  int v22; // eax
  CUtlSphereTree::Node *v23; // rax
  CUtlSphereTree::Node *v24; // rcx
  __int64 v25; // rsi
  CUtlSphereTree::Node *v26; // rcx
  int maxDepth; // edi
  CUtlSphereTree::Node *v28; // rcx
  __int64 v29; // rsi
  CUtlSphereTree::Node *v30; // rcx
  CUtlSphereTree::Node *v31; // rcx
  __int64 nodeIndex; // rdx
  CUtlSphereTree::Node *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  CUtlSphereTree::Node *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r10
  CUtlSphereTree::Node *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // r9
  CUtlSphereTree::Node *v45; // rsi
  __int64 v46; // r8
  CUtlSphereTree::Node *v47; // rsi
  __int64 v48; // rcx
  int v49; // esi
  signed int v50; // ebx
  int v51; // eax
  const CUtlSphereTree::NodeRef *v52; // r13
  int v53; // eax
  float v54; // xmm0_4
  float *p_x; // r13
  __int64 v56; // rax
  vec_t v57; // xmm1_4
  vec_t v58; // xmm0_4
  vec_t w; // xmm6_4
  float v60; // xmm0_4
  float v61; // xmm5_4
  float v62; // xmm4_4
  float v63; // xmm3_4
  float v64; // xmm1_4
  __int64 v65; // rax
  __int64 v66; // rdx
  float v67; // xmm1_4
  float v68; // xmm0_4
  vec_t v69; // xmm5_4
  float v70; // xmm7_4
  float v71; // xmm0_4
  float *v72; // rax
  float v73; // xmm1_4
  CUtlSphereTree::NodeRef *v74; // r13
  float v75; // xmm0_4
  float v76; // xmm2_4
  CUtlSphereTree::Node *v77; // rdx
  int v78; // ecx
  __int64 v79; // rdx
  _BOOL8 v80; // rbx
  __int64 v81; // rdx
  int v82; // ecx
  CUtlSphereTree::Node *v83; // rdx
  _BOOL4 v84; // eax
  float v85; // xmm0_4
  CUtlSphereTree::NodeRef *v86; // [rsp+10h] [rbp-240h]
  float v87; // [rsp+24h] [rbp-22Ch]
  CUtlSphereTree::Node *v88; // [rsp+28h] [rbp-228h]
  float v89; // [rsp+28h] [rbp-228h]
  int pair1A; // [rsp+30h] [rbp-220h]
  CUtlSphereTree::NodeRef *v91; // [rsp+38h] [rbp-218h]
  char v92; // [rsp+38h] [rbp-218h]
  float v93; // [rsp+40h] [rbp-210h]
  float v94; // [rsp+40h] [rbp-210h]
  float v95; // [rsp+44h] [rbp-20Ch]
  int v96; // [rsp+50h] [rbp-200h]
  int v97; // [rsp+54h] [rbp-1FCh]
  __int64 v98; // [rsp+60h] [rbp-1F0h]
  float minDist; // [rsp+7Ch] [rbp-1D4h] BYREF
  Vector v100; // [rsp+80h] [rbp-1D0h] BYREF
  Vector v101; // [rsp+90h] [rbp-1C0h] BYREF
  CUtlSphereTree::NodeRef sibling; // [rsp+A0h] [rbp-1B0h] BYREF
  CUtlSphereTree::NodeRef newSibling; // [rsp+B0h] [rbp-1A0h] BYREF
  CUtlSphereTree::NodeRef newNode; // [rsp+C0h] [rbp-190h] BYREF
  CUtlSphereTree::NodeRef sibling2; // [rsp+D0h] [rbp-180h] BYREF
  CUtlSphereTree::NodeRef v106; // [rsp+E0h] [rbp-170h] BYREF
  CUtlSphereTree::NodeRef v107; // [rsp+F0h] [rbp-160h] BYREF
  float v108; // [rsp+100h] [rbp-150h] BYREF
  float v109; // [rsp+104h] [rbp-14Ch]
  float v110; // [rsp+108h] [rbp-148h]
  float v111; // [rsp+10Ch] [rbp-144h]
  _DWORD v112[3]; // [rsp+110h] [rbp-140h] BYREF
  float v113; // [rsp+11Ch] [rbp-134h]
  CUtlSphereTree::NodeRef v114; // [rsp+120h] [rbp-130h] BYREF
  int v115; // [rsp+130h] [rbp-120h]
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *pNodes; // [rsp+138h] [rbp-118h]
  CUtlSphereTree::NodeRef v117; // [rsp+140h] [rbp-110h] BYREF
  int v118; // [rsp+150h] [rbp-100h]
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v119; // [rsp+158h] [rbp-F8h]
  int v120; // [rsp+160h] [rbp-F0h]
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v121; // [rsp+168h] [rbp-E8h]
  int v122; // [rsp+170h] [rbp-E0h]
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v123; // [rsp+178h] [rbp-D8h]
  CUtlVectorFixedGrowableCompat<int,32ul> path; // [rsp+180h] [rbp-D0h] BYREF
  unsigned __int64 v125; // [rsp+218h] [rbp-38h]
  CUtlSphereTree::NodeRef v126; // 0:kr00_16.16
  CUtlSphereTree::NodeRef v127; // 0:esi.4,8:rdx.8

  v125 = __readfsqword(0x28u);
  if ( this->m_NumNodesInTree != 0 )
  {
    minDist = 3.4028235e38;
    m_PrevInsertedNode = this->m_PrevInsertedNode;
    m_pMemory = this->m_Nodes.m_Memory.m_pMemory;
    if ( m_PrevInsertedNode < 0 )
    {
      x = bounds->x;
      y = bounds->y;
      z = bounds->z;
    }
    else
    {
      x = bounds->x;
      v9 = &m_pMemory[m_PrevInsertedNode];
      y = bounds->y;
      z = bounds->z;
      if ( v9->deepIndex < 0 )
      {
        v85 = fsqrt(
                (((v9->bounds.x - x) * (v9->bounds.x - x)) + ((v9->bounds.y - y) * (v9->bounds.y - y)))
              + ((v9->bounds.z - z) * (v9->bounds.z - z)));
        minDist = fmaxf(1.1 * v85, v85 + 0.001);
      }
    }
    v127.nodeIndex = 0;
    path.m_Memory.m_pMemory = &path.m_FixedMemory;
    path.m_Memory.m_nAllocationCount = 32;
    v127.pNodes = &this->m_Nodes;
    path.m_Memory.m_nGrowSize = 0x80000000;
    path.m_Size = 0;
    CUtlSphereTree::FindPathToClosestLeaf_R(
      this,
      v127,
      bounds,
      fsqrt(
        (((m_pMemory->bounds.x - x) * (m_pMemory->bounds.x - x))
       + ((m_pMemory->bounds.y - y) * (m_pMemory->bounds.y - y)))
      + ((m_pMemory->bounds.z - z) * (m_pMemory->bounds.z - z))),
      &minDist,
      &path);
    v12 = *path.m_Memory.m_pMemory;
    sibling.pNodes = &this->m_Nodes;
    sibling.nodeIndex = v12;
    v126 = CUtlSphereTree::NewNode(this, 0, 0);
    v13 = 0;
    if ( sibling.nodeIndex >= 0 )
      v13 = &sibling.pNodes->m_Memory.m_pMemory[sibling.nodeIndex];
    v14 = 0;
    if ( v126.nodeIndex >= 0 )
      v14 = &v126.pNodes->m_Memory.m_pMemory[v126.nodeIndex];
    v14->bounds.x = v13->bounds.x;
    v15 = v13->bounds.y;
    newSibling.nodeIndex = v126.nodeIndex;
    v14->bounds.y = v15;
    v14->bounds.z = v13->bounds.z;
    v14->bounds.w = v13->bounds.w;
    deepIndex = v13->deepIndex;
    newSibling.pNodes = v126.pNodes;
    v14->deepIndex = deepIndex;
    v14->shallowIndex = v13->shallowIndex;
    v14->pData = v13->pData;
    v14->maxDepth = v13->maxDepth;
    newNode = CUtlSphereTree::NewNode(this, pData, bounds);
    CUtlSphereTree::SetNodeChildren(this, &sibling, &newNode, &newSibling);
    CUtlSphereTree::RebalanceSubtrees(this, &sibling, 1);
    v17 = path.m_Size <= 1;
    this->m_PrevInsertedNode = newNode.nodeIndex;
    if ( !v17 )
    {
      v18 = 1;
      v98 = 1;
      do
      {
        v19 = path.m_Memory.m_pMemory[v98];
        sibling2.pNodes = &this->m_Nodes;
        sibling2.nodeIndex = v19;
        if ( v19 < 0 )
        {
          v117.pNodes = &this->m_Nodes;
          v117.nodeIndex = 1;
          v20 = 0;
        }
        else
        {
          v20 = &this->m_Nodes.m_Memory.m_pMemory[v19];
          shallowIndex = v20->shallowIndex;
          v117.pNodes = &this->m_Nodes;
          v117.nodeIndex = shallowIndex;
        }
        v22 = v20->deepIndex;
        v114.pNodes = &this->m_Nodes;
        v114.nodeIndex = v22;
        CUtlSphereTree::SetNodeChildren(this, &sibling2, &v114, &v117);
        v23 = 0;
        if ( sibling2.nodeIndex >= 0 )
          v23 = &sibling2.pNodes->m_Memory.m_pMemory[sibling2.nodeIndex];
        if ( v23->deepIndex >= 0 )
        {
          v24 = 0;
          if ( sibling2.nodeIndex >= 0 )
            v24 = &sibling2.pNodes->m_Memory.m_pMemory[sibling2.nodeIndex];
          v25 = v24->deepIndex;
          v26 = 0;
          if ( v25 >= 0 )
            v26 = &sibling2.pNodes->m_Memory.m_pMemory[v25];
          maxDepth = v26->maxDepth;
          v28 = 0;
          if ( sibling2.nodeIndex >= 0 )
            v28 = &sibling2.pNodes->m_Memory.m_pMemory[sibling2.nodeIndex];
          v29 = v28->shallowIndex;
          v30 = 0;
          if ( v29 >= 0 )
            v30 = &sibling2.pNodes->m_Memory.m_pMemory[v29];
          if ( maxDepth > v30->maxDepth + 1 )
          {
            if ( sibling2.nodeIndex < 0 )
            {
              v106.pNodes = sibling2.pNodes;
              v106.nodeIndex = 1;
              v33 = 0;
            }
            else
            {
              v31 = sibling2.pNodes->m_Memory.m_pMemory;
              v106.pNodes = sibling2.pNodes;
              nodeIndex = sibling2.nodeIndex;
              LODWORD(v31) = v31[nodeIndex].shallowIndex;
              v33 = &sibling2.pNodes->m_Memory.m_pMemory[nodeIndex];
              v106.nodeIndex = v31;
            }
            v34 = v33->deepIndex;
            v107.pNodes = sibling2.pNodes;
            v107.nodeIndex = v34;
            if ( v34 < 0 )
            {
              v36 = 1;
              v37 = 0;
              v114.pNodes = sibling2.pNodes;
              v114.nodeIndex = 1;
            }
            else
            {
              v35 = v34;
              v36 = sibling2.pNodes->m_Memory.m_pMemory[v35].shallowIndex;
              v114.pNodes = sibling2.pNodes;
              v114.nodeIndex = v36;
              v37 = &sibling2.pNodes->m_Memory.m_pMemory[v35];
            }
            v38 = v37->deepIndex;
            pNodes = sibling2.pNodes;
            v115 = v38;
            if ( v36 < 0 )
            {
              v40 = 1;
              v41 = 0;
              v117.pNodes = sibling2.pNodes;
              v117.nodeIndex = 1;
            }
            else
            {
              v39 = v36;
              v40 = sibling2.pNodes->m_Memory.m_pMemory[v39].shallowIndex;
              v117.pNodes = sibling2.pNodes;
              v117.nodeIndex = v40;
              v41 = &sibling2.pNodes->m_Memory.m_pMemory[v39];
            }
            v42 = v41->deepIndex;
            v119 = sibling2.pNodes;
            v118 = v42;
            if ( v38 < 0 )
            {
              v44 = 1;
              v45 = 0;
              v121 = sibling2.pNodes;
              v120 = 1;
            }
            else
            {
              v43 = v38;
              v44 = sibling2.pNodes->m_Memory.m_pMemory[v43].shallowIndex;
              v121 = sibling2.pNodes;
              v120 = v44;
              v45 = &sibling2.pNodes->m_Memory.m_pMemory[v43];
            }
            v46 = v45->deepIndex;
            v47 = 0;
            v123 = sibling2.pNodes;
            v122 = v46;
            if ( v36 >= 0 )
              v47 = &v114.pNodes->m_Memory.m_pMemory[v36];
            v48 = 0;
            v49 = v47->maxDepth;
            if ( v38 >= 0 )
              v48 = &pNodes->m_Memory.m_pMemory[v38];
            v97 = 12;
            pair1A = 1;
            if ( v49 == *(v48 + 32) )
            {
              v77 = 0;
              if ( v40 >= 0 )
                v77 = &v117.pNodes->m_Memory.m_pMemory[v40];
              v78 = v77->maxDepth;
              v79 = 0;
              if ( v42 >= 0 )
                v79 = &v119->m_Memory.m_pMemory[v42];
              v80 = v78 >= *(v79 + 32);
              v81 = 0;
              if ( v44 >= 0 )
                v81 = &v121->m_Memory.m_pMemory[v44];
              v82 = *(v81 + 32);
              v83 = 0;
              if ( v46 >= 0 )
                v83 = &sibling2.pNodes->m_Memory.m_pMemory[v46];
              pair1A = 3;
              v84 = (2 * v80 + 13) ^ 8;
              if ( v82 >= v83->maxDepth )
                v84 = 2 * v80 + 13;
              v97 = v84;
            }
            v50 = 0;
            v96 = -1;
            v95 = 3.4028235e38;
            v91 = &v114;
            do
            {
              v51 = pair1A;
              if ( _bittest(&v51, v50) )
              {
                p_x = 0;
                v86 = &v114 + (v50 ^ 1);
                v56 = v91->nodeIndex;
                if ( v56 >= 0 )
                  p_x = &v91->pNodes->m_Memory.m_pMemory[v56].bounds.x;
                v88 = 0;
                if ( v106.nodeIndex >= 0 )
                  v88 = &v106.pNodes->m_Memory.m_pMemory[v106.nodeIndex];
                v87 = p_x[3];
                v57 = v88->bounds.y - p_x[1];
                v58 = v88->bounds.z - p_x[2];
                w = v88->bounds.w;
                v100.x = v88->bounds.x - *p_x;
                v100.y = v57;
                v93 = w;
                v100.z = v58;
                v60 = VectorNormalize(&v100);
                if ( fabs(v93 - v87) <= v60 )
                {
                  v94 = ((v93 + v87) + v60) * 0.5;
                  v75 = (v100.x * (v94 - v87)) + *p_x;
                  v76 = (v100.y * (v94 - v87)) + p_x[1];
                  v63 = ((v94 - v87) * v100.z) + p_x[2];
                  v111 = v94;
                  v108 = v75;
                  v61 = v75;
                  v109 = v76;
                  v62 = v76;
                  v110 = v63;
                }
                else
                {
                  if ( v93 > v87 )
                    p_x = &v88->bounds.x;
                  v61 = *p_x;
                  v62 = p_x[1];
                  v63 = p_x[2];
                  v108 = *p_x;
                  v64 = p_x[3];
                  v109 = v62;
                  v110 = v63;
                  v111 = v64;
                  v94 = v64;
                }
                v65 = 0;
                v66 = v86->nodeIndex;
                if ( v66 >= 0 )
                  v65 = &v86->pNodes->m_Memory.m_pMemory[v66];
                v67 = *(v65 + 4);
                v68 = *(v65 + 8);
                v69 = v61 - *v65;
                v112[0] = *v65;
                v70 = *(v65 + 12);
                *&v112[1] = v67;
                *&v112[2] = v68;
                v89 = v70;
                v113 = v70;
                v101.x = v69;
                v101.y = v62 - v67;
                v101.z = v63 - v68;
                v71 = VectorNormalize(&v101);
                if ( fabs(v94 - v89) <= v71 )
                {
                  v73 = ((v94 + v89) + v71) * 0.5;
                }
                else
                {
                  v72 = v112;
                  if ( v94 > v89 )
                    v72 = &v108;
                  v73 = v72[3];
                }
                if ( v95 > ((((v111 * v111) * v111) + ((v113 * v113) * v113)) + ((v73 * v73) * v73)) )
                {
                  v96 = v50;
                  v95 = (((v111 * v111) * v111) + ((v113 * v113) * v113)) + ((v73 * v73) * v73);
                }
              }
              ++v91;
              ++v50;
            }
            while ( v50 != 2 );
            v52 = &v117;
            LOBYTE(v50) = 0;
            v92 = 1;
            do
            {
              v53 = v97;
              if ( _bittest(&v53, v50) )
              {
                v54 = CUtlSphereTree::ComputePairingCost(this, &v106, v52, &v114 + ((v50 >> 1) ^ 1), &v117 + (v50 ^ 1));
                if ( v95 > v54 )
                {
                  v96 = v50;
                  v95 = v54;
                  v92 = 0;
                }
              }
              ++v50;
              ++v52;
            }
            while ( v50 != 4 );
            if ( v92 != 0 )
            {
              CUtlSphereTree::SetNodeChildren(this, &v107, &v106, &v114 + v96);
              CUtlSphereTree::SetNodeChildren(this, &sibling2, &v107, &v114 + (v96 ^ 1));
            }
            else
            {
              v74 = &v114 + (v96 >> 1);
              CUtlSphereTree::SetNodeChildren(this, &v107, &v114 + ((v96 >> 1) ^ 1), &v117 + (v96 ^ 1));
              CUtlSphereTree::SetNodeChildren(this, v74, &v106, &v117 + v96);
              CUtlSphereTree::SetNodeChildren(this, &sibling2, &v107, v74);
            }
          }
        }
        ++v98;
        ++v18;
      }
      while ( path.m_Size > v18 );
    }
    path.m_Size = 0;
    if ( (path.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&path.m_Memory);
      if ( (path.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&path.m_Memory);
    }
  }
  else
  {
    CUtlSphereTree::NewNode(this, pData, bounds);
  }
}


// CUtlSphereTree::FindPathToClosestLeaf_R  (line 455, @0x000000000325b390, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Deep, Element, FastSqrt, GrowMemory, IsLeaf, Length, Ptr, RemoveAll, Shallow, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator->, operator[]
// calls: CUtlMemory<int, int>::Grow
// callers: CUtlSphereTree::Insert
void __fastcall CUtlSphereTree::FindPathToClosestLeaf_R(
        const CUtlSphereTree *const this,
        CUtlSphereTree::NodeRef node,
        const Vector *const pos,
        float nodeDist,
        float *const minDist,
        CUtlVector<int,CUtlMemory<int,int> > *const path)
{
  const CUtlSphereTree *v6; // r10
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *pNodes; // r12
  int nodeIndex; // ebx
  float v12; // xmm2_4
  CUtlSphereTree::Node *v13; // rax
  float v14; // xmm3_4
  __int64 m_Size; // r12
  int v16; // eax
  int *v17; // rax
  __int64 deepIndex; // rdx
  float *p_x; // rax
  float v20; // xmm3_4
  float y; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // rax
  float z; // xmm5_4
  float v26; // xmm0_4
  __int64 v27; // rdx
  float *v28; // rax
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm4_4
  __int64 v32; // rax
  float v33; // xmm1_4
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  float shallowDist; // [rsp+0h] [rbp-40h]
  float prevMinDist; // [rsp+4h] [rbp-3Ch]
  float thisa; // [rsp+8h] [rbp-38h]
  CUtlSphereTree::NodeRef v45; // 0:esi.4,8:rdx.8
  CUtlSphereTree::NodeRef v46; // 0:esi.4,8:rdx.8

  v6 = this;
  pNodes = node.pNodes;
  nodeIndex = node.nodeIndex;
  v12 = *minDist;
  if ( node.nodeIndex < 0 )
  {
    v13 = 0;
    goto LABEL_12;
  }
  v13 = &node.pNodes->m_Memory.m_pMemory[node.nodeIndex];
  if ( v13->deepIndex >= 0 )
  {
LABEL_12:
    deepIndex = v13->deepIndex;
    p_x = 0;
    if ( deepIndex >= 0 )
      p_x = &pNodes->m_Memory.m_pMemory[deepIndex].bounds.x;
    v20 = p_x[1];
    y = pos->y;
    v22 = *p_x - pos->x;
    v23 = p_x[2];
    v24 = 0;
    z = pos->z;
    v26 = fsqrt(((v22 * v22) + ((v20 - y) * (v20 - y))) + ((v23 - z) * (v23 - z)));
    if ( node.nodeIndex >= 0 )
      v24 = &pNodes->m_Memory.m_pMemory[node.nodeIndex];
    v27 = *(v24 + 20);
    v28 = 0;
    if ( v27 >= 0 )
      v28 = &pNodes->m_Memory.m_pMemory[v27].bounds.x;
    v29 = v28[2];
    v30 = *v28 - pos->x;
    v31 = v28[1];
    v32 = 0;
    v33 = fsqrt(((v30 * v30) + ((v31 - y) * (v31 - y))) + ((v29 - z) * (v29 - z)));
    if ( node.nodeIndex >= 0 )
      v32 = &pNodes->m_Memory.m_pMemory[node.nodeIndex];
    v34 = *(v32 + 16);
    v35 = 0;
    if ( v34 >= 0 )
      v35 = &pNodes->m_Memory.m_pMemory[v34];
    if ( v12 > (v26 - *(v35 + 12)) )
    {
      v40 = 0;
      if ( node.nodeIndex >= 0 )
        v40 = &pNodes->m_Memory.m_pMemory[node.nodeIndex];
      v46.nodeIndex = *(v40 + 16);
      v46.pNodes = pNodes;
      shallowDist = v33;
      prevMinDist = *minDist;
      CUtlSphereTree::FindPathToClosestLeaf_R(this, v46, pos, v26, minDist, path);
      v14 = *minDist;
      v6 = this;
      v12 = prevMinDist;
      v33 = shallowDist;
    }
    else
    {
      v14 = *minDist;
    }
    v36 = 0;
    if ( nodeIndex >= 0 )
      v36 = &pNodes->m_Memory.m_pMemory[nodeIndex];
    v37 = *(v36 + 20);
    v38 = 0;
    if ( v37 >= 0 )
      v38 = &pNodes->m_Memory.m_pMemory[v37];
    if ( v14 > (v33 - *(v38 + 12)) )
    {
      v39 = 0;
      if ( nodeIndex >= 0 )
        v39 = &pNodes->m_Memory.m_pMemory[nodeIndex];
      v45.nodeIndex = *(v39 + 20);
      v45.pNodes = pNodes;
      thisa = v12;
      CUtlSphereTree::FindPathToClosestLeaf_R(v6, v45, pos, v33, minDist, path);
      v14 = *minDist;
      v12 = thisa;
    }
    goto LABEL_5;
  }
  if ( nodeDist >= v12 )
    return;
  path->m_Size = 0;
  v14 = nodeDist;
  *minDist = nodeDist;
LABEL_5:
  if ( v12 > v14 )
  {
    m_Size = path->m_Size;
    v16 = path->m_Size;
    if ( m_Size == path->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&path->m_Memory, 1);
      v16 = path->m_Size;
    }
    path->m_Size = v16 + 1;
    v17 = &path->m_Memory.m_pMemory[m_Size];
    if ( v17 != 0 )
      *v17 = nodeIndex;
  }
}


// CUtlSphereTree::Remove_R  (line 508, @0x000000000325a4a0, libserver.so)  // inlines: Deep, FreelistPush, IsLeaf, IsSubtreeBalanced, NodeHasData, Ptr, RebalanceSubtrees, Shallow, operator*, operator->, operator=, operator==, operator[]
// calls: CUtlSphereTree::SetNodeChildren, CUtlSphereTree::ComputePairingCost
// callers: CFoW::RemoveViewerFromTree
int __fastcall CUtlSphereTree::Remove_R(
        CUtlSphereTree *const this,
        CUtlSphereTree::NodeRef *const node,
        const void *pData,
        const Sphere_t *bounds)
{
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *pNodes; // r9
  __int64 nodeIndex; // rsi
  CUtlSphereTree::Node *m_pMemory; // rdx
  __int64 v10; // rax
  __int64 deepIndex; // rdi
  CUtlSphereTree::Node *v12; // rax
  __int64 shallowIndex; // r8
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v14; // rcx
  __int64 v15; // r11
  int v16; // eax
  CUtlSphereTree::NodeRef *p_deepChild; // r10
  int v18; // edx
  CUtlSphereTree::Node *v19; // rax
  int v20; // r15d
  CUtlSphereTree::Node *v21; // rax
  int result; // eax
  __int64 v23; // r11
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  int *v27; // rsi
  int v28; // eax
  bool v29; // zf
  int *v30; // rsi
  __int64 v31; // rdx
  CUtlSphereTree::Node *v32; // rax
  __int64 v33; // rcx
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rcx
  int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rcx
  CUtlSphereTree::Node *v41; // rcx
  __int64 v42; // rdx
  CUtlSphereTree::Node *v43; // rdx
  __int64 v44; // rdx
  CUtlSphereTree::Node *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  CUtlSphereTree::Node *v48; // rdx
  __int64 v49; // rdx
  CUtlSphereTree::Node *v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r8
  CUtlSphereTree::Node *v53; // rsi
  __int64 v54; // r9
  __int64 v55; // rsi
  __int64 v56; // rdi
  CUtlSphereTree::Node *v57; // rsi
  __int64 v58; // r11
  CUtlSphereTree::Node *v59; // rsi
  CUtlSphereTree::Node *v60; // rcx
  int maxDepth; // esi
  int v62; // r14d
  int v63; // r13d
  float v64; // xmm1_4
  CUtlSphereTree::NodeRef *v65; // r9
  signed int v66; // r14d
  int v67; // r12d
  CUtlSphereTree::NodeRef *v68; // r13
  char v69; // bl
  float v70; // xmm0_4
  __int64 v71; // r13
  CUtlSphereTree::NodeRef *v72; // r14
  float v73; // xmm0_4
  CUtlSphereTree::Node *v74; // rdx
  int v75; // ecx
  __int64 v76; // rdx
  _BOOL4 v77; // r13d
  __int64 v78; // rdx
  int v79; // ecx
  __int64 v80; // rdx
  CUtlSphereTree::NodeRef *nodea; // [rsp+0h] [rbp-100h]
  float v82; // [rsp+Ch] [rbp-F4h]
  CUtlSphereTree::NodeRef *v83; // [rsp+10h] [rbp-F0h]
  float v84; // [rsp+10h] [rbp-F0h]
  int v85; // [rsp+18h] [rbp-E8h]
  CUtlSphereTree::NodeRef *v86; // [rsp+18h] [rbp-E8h]
  CUtlSphereTree::NodeRef deepChild; // [rsp+30h] [rbp-D0h] BYREF
  CUtlSphereTree::NodeRef shallowChild; // [rsp+40h] [rbp-C0h] BYREF
  CUtlSphereTree::NodeRef pair1A; // [rsp+50h] [rbp-B0h] BYREF
  CUtlSphereTree::NodeRef v91; // [rsp+60h] [rbp-A0h] BYREF
  CUtlSphereTree::NodeRef pair1B; // [rsp+70h] [rbp-90h] BYREF
  CUtlSphereTree::NodeRef v93; // [rsp+80h] [rbp-80h] BYREF
  CUtlSphereTree::NodeRef v94; // [rsp+90h] [rbp-70h] BYREF
  int v95; // [rsp+A0h] [rbp-60h]
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v96; // [rsp+A8h] [rbp-58h]
  int v97; // [rsp+B0h] [rbp-50h]
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v98; // [rsp+B8h] [rbp-48h]
  int v99; // [rsp+C0h] [rbp-40h]
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *v100; // [rsp+C8h] [rbp-38h]

  pNodes = node->pNodes;
  nodeIndex = node->nodeIndex;
  if ( nodeIndex < 0 )
  {
    deepIndex = 4063235;
    v12 = 0;
    deepChild.pNodes = pNodes;
    deepChild.nodeIndex = 4063235;
  }
  else
  {
    m_pMemory = pNodes->m_Memory.m_pMemory;
    deepChild.pNodes = pNodes;
    v10 = nodeIndex;
    deepIndex = m_pMemory[v10].deepIndex;
    v12 = &pNodes->m_Memory.m_pMemory[v10];
    deepChild.nodeIndex = deepIndex;
  }
  shallowIndex = v12->shallowIndex;
  v14 = pNodes;
  shallowChild.pNodes = pNodes;
  v15 = deepIndex;
  v16 = 0;
  p_deepChild = &deepChild;
  shallowChild.nodeIndex = shallowIndex;
  v18 = shallowIndex;
  while ( 1 )
  {
    if ( v15 >= 0 )
    {
      v23 = &p_deepChild->pNodes->m_Memory.m_pMemory[v15];
      if ( pData != *(v23 + 24) )
        goto LABEL_6;
    }
    else
    {
      if ( pData != GetNetworkGroupColor )
        goto LABEL_6;
      v23 = 0;
    }
    if ( bounds->x == *v23 && bounds->y == *(v23 + 4) && bounds->z == *(v23 + 8) && bounds->w == *(v23 + 12) )
      break;
LABEL_6:
    if ( ++v16 == 2 )
    {
      v19 = 0;
      if ( deepIndex >= 0 )
        v19 = &deepChild.pNodes->m_Memory.m_pMemory[deepIndex];
      v20 = -1;
      if ( v19->deepIndex >= 0 )
      {
        v20 = CUtlSphereTree::Remove_R(this, &deepChild, pData, bounds);
        if ( v20 >= 0 )
          goto LABEL_38;
        shallowIndex = shallowChild.nodeIndex;
      }
      v21 = 0;
      if ( shallowIndex >= 0 )
        v21 = &shallowChild.pNodes->m_Memory.m_pMemory[shallowIndex];
      if ( v21->deepIndex >= 0 )
        v20 = CUtlSphereTree::Remove_R(this, &shallowChild, pData, bounds);
      result = v20;
      if ( v20 < 0 )
        return result;
LABEL_38:
      CUtlSphereTree::SetNodeChildren(this, node, &deepChild, &shallowChild);
      v31 = node->nodeIndex;
      v32 = 0;
      if ( v31 >= 0 )
        v32 = &node->pNodes->m_Memory.m_pMemory[v31];
      if ( v32->deepIndex >= 0 )
      {
        v33 = 0;
        v34 = node->pNodes;
        if ( v31 >= 0 )
          v33 = &v34->m_Memory.m_pMemory[v31];
        v35 = *(v33 + 16);
        v36 = 0;
        if ( v35 >= 0 )
          v36 = &v34->m_Memory.m_pMemory[v35];
        v37 = *(v36 + 32);
        v38 = 0;
        if ( v31 >= 0 )
          v38 = &v34->m_Memory.m_pMemory[v31];
        v39 = *(v38 + 20);
        v40 = 0;
        if ( v39 >= 0 )
          v40 = &v34->m_Memory.m_pMemory[v39];
        if ( v37 > *(v40 + 32) + 1 )
        {
          if ( v31 < 0 )
          {
            pair1A.pNodes = node->pNodes;
            pair1A.nodeIndex = 1;
            v43 = 0;
          }
          else
          {
            v41 = v34->m_Memory.m_pMemory;
            pair1A.pNodes = node->pNodes;
            v42 = v31;
            LODWORD(v41) = v41[v42].shallowIndex;
            v43 = &v34->m_Memory.m_pMemory[v42];
            pair1A.nodeIndex = v41;
          }
          v44 = v43->deepIndex;
          v91.pNodes = v34;
          v91.nodeIndex = v44;
          if ( v44 < 0 )
          {
            v47 = 1;
            v48 = 0;
            pair1B.pNodes = v34;
            pair1B.nodeIndex = 1;
          }
          else
          {
            v45 = v34->m_Memory.m_pMemory;
            pair1B.pNodes = v34;
            v46 = v44;
            v47 = v45[v46].shallowIndex;
            v48 = &v34->m_Memory.m_pMemory[v46];
            pair1B.nodeIndex = v47;
          }
          v49 = v48->deepIndex;
          v93.pNodes = v34;
          v93.nodeIndex = v49;
          if ( v47 < 0 )
          {
            v52 = 1;
            v53 = 0;
            v94.pNodes = v34;
            v94.nodeIndex = 1;
          }
          else
          {
            v50 = v34->m_Memory.m_pMemory;
            v94.pNodes = v34;
            v51 = v47;
            v52 = v50[v51].shallowIndex;
            v53 = &v34->m_Memory.m_pMemory[v51];
            v94.nodeIndex = v52;
          }
          v54 = v53->deepIndex;
          v96 = v34;
          v95 = v54;
          if ( v49 < 0 )
          {
            v56 = 1;
            v57 = 0;
            v98 = v34;
            v97 = 1;
          }
          else
          {
            v55 = v49;
            v56 = v34->m_Memory.m_pMemory[v55].shallowIndex;
            v98 = v34;
            v97 = v56;
            v57 = &v34->m_Memory.m_pMemory[v55];
          }
          v58 = v57->deepIndex;
          v59 = 0;
          v100 = v34;
          v99 = v58;
          if ( v47 >= 0 )
            v59 = &pair1B.pNodes->m_Memory.m_pMemory[v47];
          v60 = 0;
          maxDepth = v59->maxDepth;
          if ( v49 >= 0 )
            v60 = &v93.pNodes->m_Memory.m_pMemory[v49];
          v62 = 0;
          v63 = 12;
          if ( maxDepth == v60->maxDepth )
          {
            v74 = 0;
            if ( v52 >= 0 )
              v74 = &v94.pNodes->m_Memory.m_pMemory[v52];
            v75 = v74->maxDepth;
            v76 = 0;
            if ( v54 >= 0 )
              v76 = &v96->m_Memory.m_pMemory[v54];
            v77 = v75 >= *(v76 + 32);
            v78 = 0;
            v63 = 2 * v77 + 13;
            if ( v56 >= 0 )
              v78 = &v98->m_Memory.m_pMemory[v56];
            v79 = *(v78 + 32);
            v80 = 0;
            if ( v58 >= 0 )
              v80 = &v34->m_Memory.m_pMemory[v58];
            v62 = 1;
            if ( v79 < *(v80 + 32) )
              v63 ^= 8u;
          }
          v85 = 0;
          v64 = CUtlSphereTree::ComputePairingCost(this, &pair1A, &pair1B, &v93, 0);
          if ( v64 >= 3.4028235e38 )
          {
            v85 = -1;
            v64 = 3.4028235e38;
          }
          if ( v62 != 0 )
          {
            v84 = v64;
            v73 = CUtlSphereTree::ComputePairingCost(this, &pair1A, &v93, &pair1B, 0);
            v64 = v84;
            if ( v84 > v73 )
            {
              v85 = 1;
              v64 = v73;
            }
          }
          v65 = &v94;
          v66 = 0;
          v67 = v63;
          nodea = node;
          v68 = &v94;
          v69 = 1;
          do
          {
            if ( _bittest(&v67, v66) )
            {
              v82 = v64;
              v83 = v65;
              v70 = CUtlSphereTree::ComputePairingCost(this, &pair1A, v68, &pair1B + ((v66 >> 1) ^ 1), &v65[v66 ^ 1]);
              v64 = v82;
              v65 = v83;
              if ( v82 > v70 )
              {
                v85 = v66;
                v64 = v70;
                v69 = 0;
              }
            }
            ++v66;
            ++v68;
          }
          while ( v66 != 4 );
          if ( v69 != 0 )
          {
            CUtlSphereTree::SetNodeChildren(this, &v91, &pair1A, &pair1B + v85);
            CUtlSphereTree::SetNodeChildren(this, nodea, &v91, &pair1B + (v85 ^ 1));
          }
          else
          {
            v71 = v85;
            v86 = v65;
            v72 = &pair1B + (v71 >> 1);
            CUtlSphereTree::SetNodeChildren(this, &v91, &pair1B + ((v71 >> 1) ^ 1), &v65[(v71 ^ 1)]);
            CUtlSphereTree::SetNodeChildren(this, v72, &pair1A, &v86[v71]);
            CUtlSphereTree::SetNodeChildren(this, nodea, &v91, v72);
          }
        }
      }
      return v20;
    }
    if ( v16 != 0 )
    {
      v14 = deepChild.pNodes;
      v18 = deepIndex;
      v15 = shallowIndex;
      p_deepChild = &shallowChild;
    }
    else
    {
      v18 = shallowIndex;
      v14 = pNodes;
      v15 = deepIndex;
      p_deepChild = &deepChild;
    }
  }
  v24 = 0;
  if ( v18 >= 0 )
    v24 = &v14->m_Memory.m_pMemory[v18];
  v25 = 0;
  if ( nodeIndex >= 0 )
    v25 = &pNodes->m_Memory.m_pMemory[nodeIndex];
  *v25 = *v24;
  *(v25 + 4) = *(v24 + 4);
  *(v25 + 8) = *(v24 + 8);
  *(v25 + 12) = *(v24 + 12);
  *(v25 + 16) = *(v24 + 16);
  *(v25 + 20) = *(v24 + 20);
  *(v25 + 24) = *(v24 + 24);
  *(v25 + 32) = *(v24 + 32);
  v26 = p_deepChild->nodeIndex;
  if ( this->m_PrevInsertedNode == v26 )
    this->m_PrevInsertedNode = -1;
  v27 = 0;
  if ( v26 >= 0 )
    v27 = &p_deepChild->pNodes->m_Memory.m_pMemory[v26];
  *v27 = this->m_FreelistHead;
  v28 = p_deepChild->nodeIndex;
  --this->m_NumNodesInTree;
  v29 = v18 == this->m_PrevInsertedNode;
  this->m_FreelistHead = v28;
  if ( v29 )
    this->m_PrevInsertedNode = -1;
  v30 = 0;
  if ( v18 >= 0 )
    v30 = &v14->m_Memory.m_pMemory[v18];
  *v30 = v28;
  --this->m_NumNodesInTree;
  this->m_FreelistHead = v18;
  return p_deepChild->nodeIndex;
}


// CUtlSphereTree::RebalanceSubtrees  (line 586, @0x0000000003259590, libserver.so)  // inlines: AddSpheres, ComputePairingCost, Cost, Deep, IsLeaf, IsSubtreeBalanced, NormalizeInPlace, Ptr, Shallow, Vector4D, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator->, operator[]
// calls: CUtlSphereTree::SetNodeChildren, VectorNormalize
// callers: CUtlSphereTree::Insert
void __fastcall CUtlSphereTree::RebalanceSubtrees(
        CUtlSphereTree *const this,
        CUtlSphereTree::NodeRef *const node,
        bool bInserting)
{
  CUtlSphereTree::Node *v3; // rax
  __int64 nodeIndex; // rdx
  __int64 v7; // rcx
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *pNodes; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  CUtlSphereTree::Node *m_pMemory; // rcx
  __int64 v16; // rdx
  CUtlSphereTree::Node *v17; // rdx
  __int64 deepIndex; // rdx
  CUtlSphereTree::Node *v19; // rcx
  __int64 v20; // rdx
  __int64 shallowIndex; // rcx
  CUtlSphereTree::Node *v22; // rdx
  __int64 v23; // rdx
  CUtlSphereTree::Node *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r10
  CUtlSphereTree::Node *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r11
  CUtlSphereTree::Node *v31; // rsi
  __int64 v32; // r9
  CUtlSphereTree::Node *v33; // rsi
  CUtlSphereTree::Node *v34; // rcx
  int maxDepth; // r13d
  int v36; // ebx
  int v37; // esi
  signed int v38; // r15d
  CUtlSphereTree::NodeRef *v39; // r13
  int v40; // ebx
  int v41; // ebx
  CUtlSphereTree::NodeRef *v42; // r12
  __int64 v43; // rcx
  CUtlSphereTree::NodeRef *v44; // r14
  __int64 v45; // rdx
  CUtlSphereTree::Node *v46; // rcx
  Vector *v47; // r13
  vec_t v48; // xmm0_4
  vec_t v49; // xmm4_4
  vec_t v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rcx
  vec_t v58; // xmm0_4
  vec_t v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm4_4
  float v62; // xmm0_4
  vec_t *v63; // rdx
  float v64; // xmm5_4
  float v65; // xmm6_4
  float v66; // xmm3_4
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm0_4
  float v73; // xmm3_4
  __int64 v74; // rdx
  __int64 v75; // rax
  CUtlSphereTree::Node *v76; // rdx
  vec_t v77; // xmm0_4
  vec_t v78; // xmm3_4
  vec_t w; // xmm1_4
  float v80; // xmm4_4
  float v81; // xmm0_4
  float *p_x; // rax
  float v83; // xmm0_4
  float v84; // xmm7_4
  float v85; // xmm3_4
  float v86; // xmm1_4
  __int64 v87; // rdx
  float *v88; // rax
  vec_t v89; // xmm0_4
  vec_t v90; // xmm7_4
  vec_t v91; // xmm3_4
  float v92; // xmm0_4
  Vector *p_vec; // rax
  float x; // xmm1_4
  CUtlSphereTree::NodeRef *v95; // rbx
  float v96; // xmm2_4
  CUtlSphereTree::Node *v97; // rdx
  int v98; // ecx
  CUtlSphereTree::Node *v99; // rdx
  _BOOL4 v100; // ebx
  CUtlSphereTree::Node *v101; // rdx
  int v102; // ecx
  __int64 v103; // rdx
  CUtlSphereTree::NodeRef *nodea; // [rsp+8h] [rbp-138h]
  CUtlSphereTree *thisa; // [rsp+10h] [rbp-130h]
  CUtlSphereTree::NodeRef *v106; // [rsp+18h] [rbp-128h]
  float v107; // [rsp+18h] [rbp-128h]
  CUtlSphereTree::NodeRef *v108; // [rsp+18h] [rbp-128h]
  float v109; // [rsp+24h] [rbp-11Ch]
  float v110; // [rsp+24h] [rbp-11Ch]
  float v111; // [rsp+24h] [rbp-11Ch]
  float v112; // [rsp+28h] [rbp-118h]
  vec_t *v113; // [rsp+28h] [rbp-118h]
  float v114; // [rsp+28h] [rbp-118h]
  CUtlSphereTree::Node *v115; // [rsp+30h] [rbp-110h]
  float *v116; // [rsp+30h] [rbp-110h]
  float v117; // [rsp+30h] [rbp-110h]
  CUtlSphereTree::Node *v118; // [rsp+30h] [rbp-110h]
  float v119; // [rsp+30h] [rbp-110h]
  Vector *v120; // [rsp+38h] [rbp-108h]
  float v121; // [rsp+38h] [rbp-108h]
  Vector *v122; // [rsp+38h] [rbp-108h]
  float v123; // [rsp+38h] [rbp-108h]
  char nephewBest; // [rsp+40h] [rbp-100h]
  int greatNephewMask; // [rsp+48h] [rbp-F8h]
  int bestIndex; // [rsp+50h] [rbp-F0h]
  float minCost; // [rsp+54h] [rbp-ECh]
  Vector v128; // [rsp+60h] [rbp-E0h] BYREF
  CUtlSphereTree::NodeRef shallowChild; // [rsp+70h] [rbp-D0h] BYREF
  CUtlSphereTree::NodeRef deepChild; // [rsp+80h] [rbp-C0h] BYREF
  float v131; // [rsp+90h] [rbp-B0h] BYREF
  float v132; // [rsp+94h] [rbp-ACh]
  float v133; // [rsp+98h] [rbp-A8h]
  float v134; // [rsp+9Ch] [rbp-A4h]
  Vector vec; // [rsp+A0h] [rbp-A0h] BYREF
  float v136; // [rsp+ACh] [rbp-94h]
  CUtlSphereTree::NodeRef nephews[2]; // [rsp+B0h] [rbp-90h] BYREF
  CUtlSphereTree::NodeRef greatNephews[4]; // [rsp+D0h] [rbp-70h] BYREF

  v3 = 0;
  nodeIndex = node->nodeIndex;
  if ( nodeIndex >= 0 )
    v3 = &node->pNodes->m_Memory.m_pMemory[nodeIndex];
  if ( v3->deepIndex >= 0 )
  {
    v7 = 0;
    pNodes = node->pNodes;
    if ( nodeIndex >= 0 )
      v7 = &pNodes->m_Memory.m_pMemory[nodeIndex];
    v9 = *(v7 + 16);
    v10 = 0;
    if ( v9 >= 0 )
      v10 = &pNodes->m_Memory.m_pMemory[v9];
    v11 = *(v10 + 32);
    v12 = 0;
    if ( nodeIndex >= 0 )
      v12 = &pNodes->m_Memory.m_pMemory[nodeIndex];
    v13 = *(v12 + 20);
    v14 = 0;
    if ( v13 >= 0 )
      v14 = &pNodes->m_Memory.m_pMemory[v13];
    if ( v11 > *(v14 + 32) + 1 )
    {
      if ( nodeIndex < 0 )
      {
        shallowChild.pNodes = node->pNodes;
        shallowChild.nodeIndex = 1;
        v17 = 0;
      }
      else
      {
        m_pMemory = pNodes->m_Memory.m_pMemory;
        shallowChild.pNodes = node->pNodes;
        v16 = nodeIndex;
        LODWORD(m_pMemory) = m_pMemory[v16].shallowIndex;
        v17 = &pNodes->m_Memory.m_pMemory[v16];
        shallowChild.nodeIndex = m_pMemory;
      }
      deepIndex = v17->deepIndex;
      deepChild.pNodes = pNodes;
      deepChild.nodeIndex = deepIndex;
      if ( deepIndex < 0 )
      {
        shallowIndex = 1;
        v22 = 0;
        nephews[0].pNodes = pNodes;
        nephews[0].nodeIndex = 1;
      }
      else
      {
        v19 = pNodes->m_Memory.m_pMemory;
        nephews[0].pNodes = pNodes;
        v20 = deepIndex;
        shallowIndex = v19[v20].shallowIndex;
        v22 = &pNodes->m_Memory.m_pMemory[v20];
        nephews[0].nodeIndex = shallowIndex;
      }
      v23 = v22->deepIndex;
      nephews[1].pNodes = pNodes;
      nephews[1].nodeIndex = v23;
      if ( shallowIndex < 0 )
      {
        v26 = 1;
        v27 = 0;
        greatNephews[0].pNodes = pNodes;
        greatNephews[0].nodeIndex = 1;
      }
      else
      {
        v24 = pNodes->m_Memory.m_pMemory;
        greatNephews[0].pNodes = pNodes;
        v25 = shallowIndex;
        v26 = v24[v25].shallowIndex;
        v27 = &pNodes->m_Memory.m_pMemory[v25];
        greatNephews[0].nodeIndex = v26;
      }
      v28 = v27->deepIndex;
      greatNephews[1].pNodes = pNodes;
      greatNephews[1].nodeIndex = v28;
      if ( v23 < 0 )
      {
        v30 = 1;
        v31 = 0;
        greatNephews[2].pNodes = pNodes;
        greatNephews[2].nodeIndex = 1;
      }
      else
      {
        v29 = v23;
        v30 = pNodes->m_Memory.m_pMemory[v29].shallowIndex;
        greatNephews[2].pNodes = pNodes;
        greatNephews[2].nodeIndex = v30;
        v31 = &pNodes->m_Memory.m_pMemory[v29];
      }
      v32 = v31->deepIndex;
      v33 = 0;
      greatNephews[3].pNodes = pNodes;
      greatNephews[3].nodeIndex = v32;
      if ( shallowIndex >= 0 )
        v33 = &nephews[0].pNodes->m_Memory.m_pMemory[shallowIndex];
      v34 = 0;
      maxDepth = v33->maxDepth;
      if ( v23 >= 0 )
        v34 = &nephews[1].pNodes->m_Memory.m_pMemory[v23];
      v36 = 12;
      v37 = 1;
      if ( maxDepth == v34->maxDepth )
      {
        v97 = 0;
        if ( v26 >= 0 )
          v97 = &greatNephews[0].pNodes->m_Memory.m_pMemory[v26];
        v98 = v97->maxDepth;
        v99 = 0;
        if ( v28 >= 0 )
          v99 = &greatNephews[1].pNodes->m_Memory.m_pMemory[v28];
        v100 = v98 >= v99->maxDepth;
        v101 = 0;
        v36 = 2 * v100 + 13;
        if ( v30 >= 0 )
          v101 = &greatNephews[2].pNodes->m_Memory.m_pMemory[v30];
        v102 = v101->maxDepth;
        v103 = 0;
        if ( v32 >= 0 )
          v103 = &pNodes->m_Memory.m_pMemory[v32];
        v37 = 3;
        if ( v102 < *(v103 + 32) )
          v36 ^= 8u;
      }
      greatNephewMask = v36;
      v38 = 0;
      v39 = nephews;
      v40 = v37;
      bestIndex = -1;
      minCost = 3.4028235e38;
      do
      {
        if ( _bittest(&v40, v38) )
        {
          v74 = v39->nodeIndex;
          v75 = 0;
          if ( v74 >= 0 )
            v75 = &v39->pNodes->m_Memory.m_pMemory[v74];
          v76 = 0;
          if ( shallowChild.nodeIndex >= 0 )
            v76 = &shallowChild.pNodes->m_Memory.m_pMemory[shallowChild.nodeIndex];
          v108 = &nephews[v38 ^ 1];
          v118 = v76;
          v122 = v75;
          v77 = v76->bounds.z - *(v75 + 8);
          v78 = v76->bounds.x - *v75;
          w = v76->bounds.w;
          v80 = *(v75 + 12);
          vec.y = v76->bounds.y - *(v75 + 4);
          v111 = w;
          v114 = v80;
          vec.x = v78;
          vec.z = v77;
          v81 = VectorNormalize(&vec);
          p_x = &v122->x;
          if ( fabs(v111 - v114) <= v81 )
          {
            v86 = ((v111 + v114) + v81) * 0.5;
            v83 = (vec.x * (v86 - v114)) + v122->x;
            v96 = (vec.y * (v86 - v114)) + v122->y;
            v85 = ((v86 - v114) * vec.z) + v122->z;
            v134 = v86;
            v131 = v83;
            v132 = v96;
            v84 = v96;
            v133 = v85;
          }
          else
          {
            if ( v111 > v114 )
              p_x = &v118->bounds.x;
            v83 = *p_x;
            v131 = *p_x;
            v84 = p_x[1];
            v132 = v84;
            v85 = p_x[2];
            v133 = v85;
            v86 = p_x[3];
            v134 = v86;
          }
          v87 = v108->nodeIndex;
          v88 = 0;
          if ( v87 >= 0 )
            v88 = &v108->pNodes->m_Memory.m_pMemory[v87].bounds.x;
          v119 = v86;
          v89 = v83 - *v88;
          v90 = v84 - v88[1];
          v91 = v85 - v88[2];
          v136 = v88[3];
          v123 = v136;
          v128.z = v91;
          v128.x = v89;
          v128.y = v90;
          v92 = VectorNormalize(&v128);
          if ( fabs(v119 - v123) <= v92 )
          {
            x = ((v119 + v123) + v92) * 0.5;
          }
          else
          {
            p_vec = &v131;
            if ( v119 <= v123 )
              p_vec = &vec;
            x = p_vec[1].x;
          }
          if ( minCost > ((((v134 * v134) * v134) + ((v136 * v136) * v136)) + ((x * x) * x)) )
          {
            bestIndex = v38;
            minCost = (((v134 * v134) * v134) + ((v136 * v136) * v136)) + ((x * x) * x);
          }
        }
        ++v38;
        ++v39;
      }
      while ( v38 != 2 );
      v41 = greatNephewMask;
      LOBYTE(v38) = 0;
      thisa = this;
      v42 = greatNephews;
      nephewBest = 1;
      nodea = node;
      do
      {
        if ( _bittest(&v41, v38) )
        {
          v43 = v42->nodeIndex;
          v44 = &nephews[(v38 >> 1) ^ 1];
          v45 = 0;
          if ( v43 >= 0 )
            v45 = &v42->pNodes->m_Memory.m_pMemory[v43];
          v46 = 0;
          if ( shallowChild.nodeIndex >= 0 )
            v46 = &shallowChild.pNodes->m_Memory.m_pMemory[shallowChild.nodeIndex];
          v47 = &vec;
          v106 = &greatNephews[v38 ^ 1];
          v115 = v46;
          v120 = v45;
          v48 = v46->bounds.z - *(v45 + 8);
          v49 = v46->bounds.x - *v45;
          v50 = v46->bounds.w;
          v51 = *(v45 + 12);
          vec.y = v46->bounds.y - *(v45 + 4);
          v109 = v50;
          v112 = v51;
          vec.x = v49;
          vec.z = v48;
          v52 = VectorNormalize(&vec);
          v53 = &v120->x;
          if ( fabs(v109 - v112) <= v52 )
          {
            v70 = ((v109 + v112) + v52) * 0.5;
            v71 = (vec.y * (v70 - v112)) + v120->y;
            v72 = (vec.z * (v70 - v112)) + v120->z;
            v73 = ((v70 - v112) * vec.x) + v120->x;
            v134 = v70;
            v132 = v71;
            v133 = v72;
            v131 = v73;
          }
          else
          {
            if ( v109 > v112 )
              v53 = &v115->bounds.x;
            v131 = *v53;
            v132 = v53[1];
            v133 = v53[2];
            v134 = v53[3];
          }
          v54 = v106->nodeIndex;
          v55 = 0;
          if ( v54 >= 0 )
            v55 = &v106->pNodes->m_Memory.m_pMemory[v54];
          v56 = v44->nodeIndex;
          v57 = 0;
          if ( v56 >= 0 )
            v57 = &v44->pNodes->m_Memory.m_pMemory[v56];
          v113 = v57;
          v116 = v55;
          v58 = *(v57 + 8) - *(v55 + 8);
          v59 = *v57 - *v55;
          v60 = *(v57 + 12);
          v61 = *(v55 + 12);
          v128.y = *(v57 + 4) - *(v55 + 4);
          v107 = v60;
          v110 = v61;
          v128.x = v59;
          v128.z = v58;
          v62 = VectorNormalize(&v128);
          v63 = v116;
          if ( fabs(v107 - v110) <= v62 )
          {
            v67 = ((v107 + v110) + v62) * 0.5;
            v64 = (v128.x * (v67 - v110)) + *v116;
            v65 = (v128.y * (v67 - v110)) + v116[1];
            v66 = ((v67 - v110) * v128.z) + v116[2];
            v136 = v67;
            vec.x = v64;
            vec.y = v65;
            vec.z = v66;
          }
          else
          {
            if ( v107 > v110 )
              v63 = v113;
            v64 = *v63;
            vec.x = *v63;
            v65 = v63[1];
            vec.y = v65;
            v66 = v63[2];
            vec.z = v66;
            v67 = v63[3];
            v136 = v67;
          }
          v117 = v67;
          v121 = v134;
          v128.z = v133 - v66;
          v128.x = v131 - v64;
          v128.y = v132 - v65;
          v68 = VectorNormalize(&v128);
          if ( fabs(v121 - v117) <= v68 )
          {
            v69 = ((v117 + v121) + v68) * 0.5;
          }
          else
          {
            if ( v121 > v117 )
              v47 = &v131;
            v69 = v47[1].x;
          }
          if ( minCost > ((((v134 * v134) * v134) + ((v136 * v136) * v136)) + ((v69 * v69) * v69)) )
          {
            bestIndex = v38;
            minCost = (((v134 * v134) * v134) + ((v136 * v136) * v136)) + ((v69 * v69) * v69);
            nephewBest = 0;
          }
        }
        ++v38;
        ++v42;
      }
      while ( v38 != 4 );
      if ( nephewBest != 0 )
      {
        CUtlSphereTree::SetNodeChildren(thisa, &deepChild, &shallowChild, &nephews[bestIndex]);
        CUtlSphereTree::SetNodeChildren(thisa, nodea, &deepChild, &nephews[bestIndex ^ 1]);
      }
      else
      {
        v95 = &nephews[bestIndex >> 1];
        CUtlSphereTree::SetNodeChildren(thisa, &deepChild, &nephews[(bestIndex >> 1) ^ 1], &greatNephews[bestIndex ^ 1]);
        CUtlSphereTree::SetNodeChildren(thisa, v95, &shallowChild, &greatNephews[bestIndex]);
        CUtlSphereTree::SetNodeChildren(thisa, nodea, &deepChild, v95);
      }
    }
  }
}


// CUtlSphereTree::ComputePairingCost  (line 730, @0x000000000325a140, libserver.so)  // inlines: AddSpheres, Cost, NormalizeInPlace, Ptr, Vector4D, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator->, operator[]
// calls: VectorNormalize
// callers: CUtlSphereTree::Remove_R, CUtlSphereTree::Insert
float __fastcall CUtlSphereTree::ComputePairingCost(
        const CUtlSphereTree *const this,
        const CUtlSphereTree::NodeRef *const pair1A,
        const CUtlSphereTree::NodeRef *const pair1B,
        const CUtlSphereTree::NodeRef *const pair2A,
        const CUtlSphereTree::NodeRef *pair2B)
{
  CUtlSphereTree::Node *v7; // rbx
  __int64 nodeIndex; // rax
  __int64 v9; // rax
  CUtlSphereTree::Node *v10; // r12
  vec_t v11; // xmm0_4
  vec_t v12; // xmm3_4
  vec_t w; // xmm2_4
  vec_t v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm8_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm2_4
  __int64 v20; // rax
  CUtlSphereTree::Node *v21; // rbx
  __int64 v22; // rax
  CUtlSphereTree::Node *v23; // r12
  vec_t v24; // xmm0_4
  vec_t v25; // xmm4_4
  vec_t v26; // xmm1_4
  vec_t v27; // xmm5_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float x; // xmm4_4
  float y; // xmm3_4
  float z; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  __int64 v36; // rdx
  CUtlSphereTree::Node *v37; // rax
  float v38; // [rsp+8h] [rbp-68h]
  float v39; // [rsp+Ch] [rbp-64h]
  float v40; // [rsp+14h] [rbp-5Ch]
  float v41; // [rsp+18h] [rbp-58h]
  float v42; // [rsp+18h] [rbp-58h]
  float v43; // [rsp+18h] [rbp-58h]
  float v44; // [rsp+1Ch] [rbp-54h]
  float v45; // [rsp+1Ch] [rbp-54h]
  float v46; // [rsp+1Ch] [rbp-54h]
  Vector vec; // [rsp+20h] [rbp-50h] BYREF
  Sphere_t pair1Sphere; // [rsp+30h] [rbp-40h]

  v7 = 0;
  nodeIndex = pair1B->nodeIndex;
  if ( nodeIndex >= 0 )
    v7 = &pair1B->pNodes->m_Memory.m_pMemory[nodeIndex];
  v9 = pair1A->nodeIndex;
  v10 = 0;
  if ( v9 >= 0 )
    v10 = &pair1A->pNodes->m_Memory.m_pMemory[v9];
  v11 = v10->bounds.z - v7->bounds.z;
  v12 = v10->bounds.x - v7->bounds.x;
  w = v10->bounds.w;
  v14 = v7->bounds.w;
  vec.y = v10->bounds.y - v7->bounds.y;
  v41 = w;
  v44 = v14;
  vec.x = v12;
  vec.z = v11;
  v15 = VectorNormalize(&vec);
  if ( fabs(v41 - v44) <= v15 )
  {
    v19 = ((v41 + v44) + v15) * 0.5;
    pair1Sphere.w = v19;
    v16 = (vec.x * (v19 - v44)) + v7->bounds.x;
    v17 = (vec.y * (v19 - v44)) + v7->bounds.y;
    v18 = ((v19 - v44) * vec.z) + v7->bounds.z;
    pair1Sphere.x = v16;
    pair1Sphere.y = v17;
    pair1Sphere.z = v18;
    if ( pair2B != 0 )
    {
LABEL_9:
      v20 = pair2B->nodeIndex;
      v21 = 0;
      if ( v20 >= 0 )
        v21 = &pair2B->pNodes->m_Memory.m_pMemory[v20];
      v22 = pair2A->nodeIndex;
      v23 = 0;
      if ( v22 >= 0 )
        v23 = &pair2A->pNodes->m_Memory.m_pMemory[v22];
      v38 = v17;
      v39 = v19;
      v40 = v18;
      v24 = v23->bounds.z - v21->bounds.z;
      v25 = v23->bounds.x - v21->bounds.x;
      v26 = v23->bounds.w;
      v27 = v21->bounds.w;
      vec.y = v23->bounds.y - v21->bounds.y;
      v42 = v26;
      v45 = v27;
      vec.x = v25;
      vec.z = v24;
      v28 = VectorNormalize(&vec);
      v18 = v40;
      v19 = v39;
      v17 = v38;
      if ( fabs(v42 - v45) > v28 )
      {
        if ( v42 > v45 )
          v21 = v23;
        z = v21->bounds.z;
        y = v21->bounds.y;
        x = v21->bounds.x;
        v29 = v21->bounds.w;
      }
      else
      {
        v29 = ((v42 + v45) + v28) * 0.5;
        x = (vec.x * (v29 - v45)) + v21->bounds.x;
        y = (vec.y * (v29 - v45)) + v21->bounds.y;
        z = ((v29 - v45) * vec.z) + v21->bounds.z;
      }
      goto LABEL_15;
    }
  }
  else
  {
    if ( v41 > v44 )
      v7 = v10;
    v16 = v7->bounds.x;
    v17 = v7->bounds.y;
    v18 = v7->bounds.z;
    pair1Sphere.x = v7->bounds.x;
    v19 = v7->bounds.w;
    pair1Sphere.y = v17;
    pair1Sphere.z = v18;
    pair1Sphere.w = v19;
    if ( pair2B != 0 )
      goto LABEL_9;
  }
  v36 = pair2A->nodeIndex;
  v37 = 0;
  if ( v36 >= 0 )
    v37 = &pair2A->pNodes->m_Memory.m_pMemory[v36];
  z = v37->bounds.z;
  y = v37->bounds.y;
  x = v37->bounds.x;
  v29 = v37->bounds.w;
LABEL_15:
  v43 = v19;
  v46 = v29;
  vec.y = v17 - y;
  vec.x = v16 - x;
  vec.z = v18 - z;
  v33 = VectorNormalize(&vec);
  if ( fabs(v43 - v46) <= v33 )
    v34 = ((v46 + v43) + v33) * 0.5;
  else
    v34 = fmaxf(v43, v46);
  return (((v43 * v43) * v43) + ((v46 * v46) * v46)) + ((v34 * v34) * v34);
}


// CUtlSphereTree::IntersectWithSphere_R  (line 851, @0x000000000325ae30, libserver.so)  // inlines: AddToTail, CopyConstruct<void*>, Deep, Element, GrowMemory, IsLeaf, LengthSqr, Ptr, Shallow, SpheresIntersect, VectorSubtract, operator-, operator->, operator[]
// calls: CUtlMemory<void*, int>::Grow
// callers: CFoW::DirtyViewers
void __fastcall CUtlSphereTree::IntersectWithSphere_R(
        const CUtlSphereTree *const this,
        const CUtlSphereTree::NodeRef *const node,
        const Sphere_t *const sphere,
        bool bPartial,
        CUtlVector<void*,CUtlMemory<void*,int> > *const result,
        int *const count,
        float distSq)
{
  const CUtlSphereTree *v7; // r10
  CUtlSphereTree::Node *v12; // rdx
  __int64 nodeIndex; // rax
  int v15; // edx
  CUtlSphereTree::Node *v16; // rdx
  __int64 m_Size; // rbx
  void *pData; // r12
  int v19; // eax
  void **v20; // rax
  CUtlSphereTree::Node *v21; // rdx
  float v22; // xmm1_4
  float v23; // xmm2_4
  __int64 v24; // rdx
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *pNodes; // rsi
  __int64 v26; // rcx
  float *p_x; // rdx
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4
  float v31; // xmm1_4
  float w; // xmm1_4
  __int64 v33; // rdx
  __int64 v34; // rcx
  float *v35; // rdx
  float v36; // xmm0_4
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  CUtlSphereTree::NodeRef v42; // [rsp+10h] [rbp-40h] BYREF

  v7 = this;
  v12 = 0;
  nodeIndex = node->nodeIndex;
  if ( nodeIndex >= 0 )
    v12 = &node->pNodes->m_Memory.m_pMemory[nodeIndex];
  if ( v12->deepIndex >= 0 )
  {
    v24 = 0;
    pNodes = node->pNodes;
    if ( nodeIndex >= 0 )
      v24 = &pNodes->m_Memory.m_pMemory[nodeIndex];
    v26 = *(v24 + 16);
    p_x = 0;
    if ( v26 >= 0 )
      p_x = &pNodes->m_Memory.m_pMemory[v26].bounds.x;
    x = sphere->x;
    y = sphere->y;
    z = sphere->z;
    v31 = (((sphere->x - *p_x) * (sphere->x - *p_x)) + ((y - p_x[1]) * (y - p_x[1]))) + ((z - p_x[2]) * (z - p_x[2]));
    if ( ((p_x[3] + sphere->w) * (p_x[3] + sphere->w)) >= v31 )
    {
      v39 = 0;
      if ( nodeIndex >= 0 )
        v39 = &pNodes->m_Memory.m_pMemory[nodeIndex];
      v40 = *(v39 + 16);
      v42.pNodes = node->pNodes;
      v42.nodeIndex = v40;
      CUtlSphereTree::IntersectWithSphere_R(this, &v42, sphere, bPartial, result, count, v31);
      x = sphere->x;
      y = sphere->y;
      z = sphere->z;
      w = sphere->w;
      pNodes = node->pNodes;
      nodeIndex = node->nodeIndex;
      v7 = this;
    }
    else
    {
      w = sphere->w;
    }
    v33 = 0;
    if ( nodeIndex >= 0 )
      v33 = &pNodes->m_Memory.m_pMemory[nodeIndex];
    v34 = *(v33 + 20);
    v35 = 0;
    if ( v34 >= 0 )
      v35 = &pNodes->m_Memory.m_pMemory[v34].bounds.x;
    v36 = (((x - *v35) * (x - *v35)) + ((y - v35[1]) * (y - v35[1]))) + ((z - v35[2]) * (z - v35[2]));
    if ( ((w + v35[3]) * (w + v35[3])) >= v36 )
    {
      v37 = 0;
      if ( nodeIndex >= 0 )
        v37 = &pNodes->m_Memory.m_pMemory[nodeIndex];
      v38 = *(v37 + 20);
      v42.pNodes = pNodes;
      v42.nodeIndex = v38;
      CUtlSphereTree::IntersectWithSphere_R(v7, &v42, sphere, bPartial, result, count, v36);
    }
  }
  else
  {
    if ( bPartial )
      goto LABEL_5;
    v21 = 0;
    if ( nodeIndex >= 0 )
      v21 = &node->pNodes->m_Memory.m_pMemory[nodeIndex];
    v22 = sphere->w;
    v23 = v21->bounds.w;
    if ( v23 <= v22 && distSq <= ((v22 - v23) * (v22 - v23)) )
    {
LABEL_5:
      v15 = *count;
      if ( *count > 0 )
      {
        v16 = 0;
        if ( nodeIndex >= 0 )
          v16 = &node->pNodes->m_Memory.m_pMemory[nodeIndex];
        m_Size = result->m_Size;
        pData = v16->pData;
        v19 = result->m_Size;
        if ( m_Size == result->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<void *,int>::Grow(&result->m_Memory, 1);
          v19 = result->m_Size;
        }
        result->m_Size = v19 + 1;
        v20 = &result->m_Memory.m_pMemory[m_Size];
        if ( v20 != 0 )
          *v20 = pData;
        v15 = *count;
      }
      *count = v15 - 1;
    }
  }
}


