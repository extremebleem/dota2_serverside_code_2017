
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_vertexkdtree.cpp  (line 0, @0x0000000001a6ec00, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_vertexkdtree_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CVertexKDTree::FindMidpointIndex  (line 5, @0x0000000003264da0, libserver.so)  // inlines: MajorIndex, MinorIndex, operator[]
// callers: CVertexKDTree::BuildNode
__int64 __fastcall CVertexKDTree::FindMidpointIndex(
        CVertexKDTree *const this,
        int nStart,
        int nCount,
        int nAxis,
        float flSplit)
{
  int v6; // ebx
  __int64 result; // rax
  int v8; // r8d
  __int64 v9; // r13
  const float ***m_pMemory; // r11
  char v11; // cl
  int v12; // r9d
  const float *v13; // r10
  int v14; // edx
  int v15; // r9d
  const float **v16; // rdx
  const float *v17; // r9
  const float **v18; // rdx
  int v19; // ecx
  int v20; // edx
  int v21; // esi
  const float ***v22; // r10
  char v23; // cl
  int v24; // r8d
  const float *v25; // r9
  const float **v26; // rcx
  const float *v27; // r8
  int v28; // r9d
  __int64 v29; // r10

  v6 = nStart + nCount;
  result = (nStart + nCount / 2);
  if ( result < nStart + nCount )
  {
    v8 = nStart + nCount / 2;
    v9 = nAxis;
    do
    {
      while ( 1 )
      {
        m_pMemory = this->m_vertexList.m_Memory.m_pMemory;
        v11 = *(&this->m_vertexList.m_Memory + 15) >> 3;
        v12 = *(&this->m_vertexList.m_Memory + 3) & 0x7FFFFFF;
        v13 = m_pMemory[v8 >> v11][v12 & v8];
        if ( flSplit > v13[v9] )
          break;
        if ( ++v8 == v6 )
          goto LABEL_6;
      }
      v14 = result;
      v15 = result & v12;
      result = (result + 1);
      v16 = &m_pMemory[v14 >> v11][v15];
      v17 = *v16;
      *v16 = v13;
      v18 = this->m_vertexList.m_Memory.m_pMemory[v8 >> (*(&this->m_vertexList.m_Memory + 15) >> 3)];
      v19 = v8++ & *(&this->m_vertexList.m_Memory + 3);
      v18[v19 & 0x7FFFFFF] = v17;
    }
    while ( v8 != v6 );
  }
LABEL_6:
  v20 = result - 1;
  if ( nStart <= result - 1 )
  {
    v21 = nStart - 1;
    do
    {
      while ( 1 )
      {
        v22 = this->m_vertexList.m_Memory.m_pMemory;
        v23 = *(&this->m_vertexList.m_Memory + 15) >> 3;
        v24 = *(&this->m_vertexList.m_Memory + 3) & 0x7FFFFFF;
        v25 = v22[v20 >> v23][v24 & v20];
        if ( v25[nAxis] >= flSplit )
          break;
        if ( --v20 == v21 )
          return result;
      }
      result = (result - 1);
      v26 = &v22[result >> v23][(result & v24)];
      v27 = *v26;
      *v26 = v25;
      v28 = v20 & *(&this->m_vertexList.m_Memory + 3);
      v29 = v20-- >> (*(&this->m_vertexList.m_Memory + 15) >> 3);
      this->m_vertexList.m_Memory.m_pMemory[v29][v28 & 0x7FFFFFF] = v27;
    }
    while ( v20 != v21 );
  }
  return result;
}


// CVertexKDTree::FindVertsInBox  (line 34, @0x00000000032651a0, libserver.so)  // inlines: AddToTail, CopyConstruct<float const*>, Element, GrowMemory, MajorIndex, MinorIndex, operator[]
// calls: CUtlMemory<float const*, int>::Grow
// callers: WeldVertices
void __fastcall CVertexKDTree::FindVertsInBox(
        const CVertexKDTree *const this,
        CUtlVectorFixedGrowable<float const*,64ul> *const list,
        const Vector *const mins,
        const Vector *const maxs,
        int nStartNode)
{
  __int64 i; // rbx
  CVertexKDNode *v10; // rbx
  int32 m_nAxis; // eax
  float m_flSplit; // xmm0_4
  __int64 v13; // r13
  int v14; // r8d
  int v15; // ebx
  CUtlVectorBase<float const*,CUtlMemoryFixedGrowable<float const*,64ul,int> >::CAllocator *p_m_Memory; // r10
  int v17; // r8d
  const float *v18; // r13
  float v19; // xmm0_4
  float v20; // xmm0_4
  __int64 m_Size; // rax
  int v22; // edx
  const float **v23; // rax
  CUtlVectorFixedGrowable<float const*,64ul> *v24; // [rsp+8h] [rbp-48h]
  int v25; // [rsp+10h] [rbp-40h]
  int v26; // [rsp+14h] [rbp-3Ch]
  CUtlVectorFixedGrowable<float const*,64ul> *v27; // [rsp+18h] [rbp-38h]
  CUtlVectorBase<float const*,CUtlMemoryFixedGrowable<float const*,64ul,int> >::CAllocator *v28; // [rsp+18h] [rbp-38h]

  for ( i = nStartNode; ; i = v10->m_nChildren[1] )
  {
    v10 = &this->m_tree.m_Memory.m_pMemory[i];
    m_nAxis = v10->m_nAxis;
    if ( m_nAxis == 255 )
      break;
    m_flSplit = v10->m_flSplit;
    v13 = m_nAxis;
    if ( m_flSplit >= *(&mins->x + m_nAxis) )
    {
      v27 = list;
      CVertexKDTree::FindVertsInBox(this, list, mins, maxs, v10->m_nChildren[0]);
      m_flSplit = v10->m_flSplit;
      list = v27;
    }
    if ( *(&maxs->x + v13) < m_flSplit )
      return;
  }
  v14 = v10->m_nChildren[1];
  v15 = v10->m_nChildren[0];
  if ( v14 > 0 )
  {
    p_m_Memory = &list->m_Memory;
    v17 = v15 + v14;
    do
    {
      v18 = this->m_vertexList.m_Memory.m_pMemory[v15 >> (*(&this->m_vertexList.m_Memory + 15) >> 3)][v15 & *(&this->m_vertexList.m_Memory + 3) & 0x7FFFFFF];
      if ( *v18 >= mins->x && maxs->x >= *v18 )
      {
        v19 = v18[1];
        if ( v19 >= mins->y && maxs->y >= v19 )
        {
          v20 = v18[2];
          if ( v20 >= mins->z && maxs->z >= v20 )
          {
            m_Size = list->m_Size;
            v22 = list->m_Size;
            if ( m_Size == list->m_Memory.m_nAllocationCount )
            {
              v24 = list;
              v25 = v17;
              v26 = list->m_Size;
              v28 = p_m_Memory;
              CUtlMemory<float const*,int>::Grow(p_m_Memory, 1);
              list = v24;
              v17 = v25;
              m_Size = v26;
              p_m_Memory = v28;
              v22 = v24->m_Size;
            }
            list->m_Size = v22 + 1;
            v23 = &list->m_Memory.m_pMemory[m_Size];
            if ( v23 != 0 )
              *v23 = v18;
          }
        }
      }
      ++v15;
    }
    while ( v15 != v17 );
  }
}


// CVertexKDTree::FindVertsInBox  (line 67, @0x0000000003264f30, libserver.so)  // inlines: AddToTail, CopyConstruct<float const*>, Element, MajorIndex, MinorIndex, operator[]
void __fastcall CVertexKDTree::FindVertsInBox(
        const CVertexKDTree *const this,
        CUtlVectorFixed<float const*,64ul> *const list,
        const Vector *const mins,
        const Vector *const maxs,
        int nStartNode)
{
  __int64 v9; // r15
  CVertexKDNode *v10; // r15
  __int64 m_nAxis; // rax
  float m_flSplit; // xmm0_4
  int v13; // esi
  int v14; // eax
  int v15; // esi
  const float *v16; // rdi
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int64 m_Size; // rdx
  int v20; // ecx
  const float **v21; // rdx
  __int64 nAxis; // [rsp+8h] [rbp-38h]

  if ( list->m_Size != 64 )
  {
    v9 = nStartNode;
    while ( 1 )
    {
      v10 = &this->m_tree.m_Memory.m_pMemory[v9];
      m_nAxis = v10->m_nAxis;
      if ( m_nAxis == 255 )
        break;
      m_flSplit = v10->m_flSplit;
      if ( m_flSplit >= *(&mins->x + m_nAxis) )
      {
        nAxis = v10->m_nAxis;
        CVertexKDTree::FindVertsInBox(this, list, mins, maxs, v10->m_nChildren[0]);
        if ( *(&maxs->x + nAxis) < v10->m_flSplit )
          return;
      }
      else if ( *(&maxs->x + m_nAxis) < m_flSplit )
      {
        return;
      }
      v9 = v10->m_nChildren[1];
      if ( list->m_Size == 64 )
        return;
    }
    v13 = v10->m_nChildren[1];
    v14 = v10->m_nChildren[0];
    if ( v13 > 0 )
    {
      v15 = v14 + v13;
      do
      {
        v16 = this->m_vertexList.m_Memory.m_pMemory[v14 >> (*(&this->m_vertexList.m_Memory + 15) >> 3)][v14 & *(&this->m_vertexList.m_Memory + 3) & 0x7FFFFFF];
        if ( *v16 >= mins->x && maxs->x >= *v16 )
        {
          v17 = v16[1];
          if ( v17 >= mins->y && maxs->y >= v17 )
          {
            v18 = v16[2];
            if ( v18 >= mins->z && maxs->z >= v18 )
            {
              m_Size = list->m_Size;
              v20 = m_Size + 1;
              v21 = &list->m_Memory + m_Size;
              list->m_Size = v20;
              if ( v21 != 0 )
              {
                *v21 = v16;
                v20 = list->m_Size;
              }
              if ( v20 == 64 )
                break;
            }
          }
        }
        ++v14;
      }
      while ( v14 != v15 );
    }
  }
}


// CVertexKDTree::ComputeBounds  (line 105, @0x00000000032650b0, libserver.so)  // inlines: MajorIndex, MinorIndex, operator=, operator[]
// callers: CVertexKDTree::BuildNode
void __fastcall CVertexKDTree::ComputeBounds(
        CVertexKDTree *const this,
        Vector *pMins,
        Vector *pMaxs,
        int nStart,
        int nCount)
{
  const float ***m_pMemory; // r10
  char v6; // r11
  int v7; // r9d
  float *v8; // rax
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  int v12; // eax
  int v13; // r8d
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  int v17; // edi
  int v18; // ebx
  const float *v19; // rdi
  float v20; // xmm0_4
  float v21; // xmm0_4

  m_pMemory = this->m_vertexList.m_Memory.m_pMemory;
  v6 = *(&this->m_vertexList.m_Memory + 15) >> 3;
  v7 = *(&this->m_vertexList.m_Memory + 3) & 0x7FFFFFF;
  v8 = m_pMemory[nStart >> v6][v7 & nStart];
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  if ( nCount <= 1 )
  {
    v14 = v8[2];
    v15 = *v8;
    v16 = v8[1];
  }
  else
  {
    v12 = nStart + 1;
    v13 = nStart + nCount;
    v14 = v11;
    v15 = v9;
    v16 = v10;
    do
    {
      v17 = v12;
      v18 = v12++;
      v19 = m_pMemory[v17 >> v6][v7 & v18];
      v9 = fminf(v9, *v19);
      v15 = fmaxf(v15, *v19);
      v20 = v19[1];
      v10 = fminf(v10, v20);
      v16 = fmaxf(v16, v20);
      v21 = v19[2];
      v14 = fminf(v14, v21);
      v11 = fmaxf(v11, v21);
    }
    while ( v12 != v13 );
  }
  if ( pMins != 0 )
  {
    pMins->x = v9;
    pMins->y = v10;
    pMins->z = v14;
  }
  if ( pMaxs != 0 )
  {
    pMaxs->x = v15;
    pMaxs->y = v16;
    pMaxs->z = v11;
  }
}


// CVertexKDTree::BuildNode  (line 137, @0x0000000003265340, libserver.so)  // inlines: AddToTail, GreatestAxis, GrowMemory, InitAsLeaf, InitAsSplit, VectorSubtract, operator-, operator[]
// calls: CVertexKDTree::ComputeBounds, CVertexKDTree::FindMidpointIndex, CUtlMemory<CVertexKDNode, int>::Grow
// callers: CVertexKDTree::BuildMidpoint
int __fastcall CVertexKDTree::BuildNode(CVertexKDTree *const this, int nStart, int nCount)
{
  float y; // xmm1_4
  float x; // xmm4_4
  float v8; // xmm0_4
  int v9; // r12d
  int MidpointIndex; // eax
  float v11; // xmm1_4
  int v12; // r15d
  int v13; // edx
  int v14; // r8d
  int m_Size; // r12d
  int v16; // eax
  CVertexKDNode *v18; // r9
  int v19; // r13d
  int v20; // eax
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rdx
  CVertexKDNode *v24; // rcx
  int nRightCount; // [rsp+4h] [rbp-5Ch]
  int nLeftCounta; // [rsp+8h] [rbp-58h]
  int nLeftCount; // [rsp+8h] [rbp-58h]
  float flSplit; // [rsp+Ch] [rbp-54h]
  float flSplita; // [rsp+Ch] [rbp-54h]
  Vector mins; // [rsp+10h] [rbp-50h] BYREF
  Vector maxs; // [rsp+20h] [rbp-40h] BYREF

  if ( nCount <= 8 )
  {
LABEL_6:
    m_Size = this->m_tree.m_Size;
    v16 = this->m_tree.m_Size;
    if ( this->m_tree.m_Size == this->m_tree.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CVertexKDNode,int>::Grow(&this->m_tree.m_Memory, 1);
      v16 = this->m_tree.m_Size;
    }
    this->m_tree.m_Size = v16 + 1;
    v18 = &this->m_tree.m_Memory.m_pMemory[m_Size];
    v18->m_nAxis = 255;
    v18->m_flSplit = 0.0;
    v18->m_nChildren[0] = nStart;
    v18->m_nChildren[1] = nCount;
    return m_Size;
  }
  CVertexKDTree::ComputeBounds(this, &mins, &maxs, nStart, nCount);
  y = maxs.y;
  x = mins.x;
  v8 = maxs.z - mins.z;
  if ( (maxs.x - mins.x) < (maxs.y - mins.y) )
  {
    if ( (maxs.y - mins.y) > v8 )
    {
      x = mins.y;
      v9 = 1;
      goto LABEL_5;
    }
  }
  else if ( (maxs.x - mins.x) > v8 )
  {
    y = maxs.x;
    v9 = 0;
    goto LABEL_5;
  }
  y = maxs.z;
  v9 = 2;
  x = mins.z;
LABEL_5:
  flSplit = (y + x) * 0.5;
  MidpointIndex = CVertexKDTree::FindMidpointIndex(this, nStart, nCount, v9, flSplit);
  v11 = flSplit;
  v12 = MidpointIndex;
  v13 = MidpointIndex - nStart;
  v14 = nStart + nCount - MidpointIndex;
  if ( v14 == 0 || v13 == 0 )
    goto LABEL_6;
  v19 = this->m_tree.m_Size;
  v20 = this->m_tree.m_Size;
  if ( this->m_tree.m_Size == this->m_tree.m_Memory.m_nAllocationCount )
  {
    nRightCount = v14;
    nLeftCount = v13;
    CUtlMemory<CVertexKDNode,int>::Grow(&this->m_tree.m_Memory, 1);
    v20 = this->m_tree.m_Size;
    v14 = nRightCount;
    v13 = nLeftCount;
    v11 = flSplit;
  }
  this->m_tree.m_Size = v20 + 1;
  flSplita = v11;
  nLeftCounta = v14;
  v21 = CVertexKDTree::BuildNode(this, nStart, v13);
  v22 = CVertexKDTree::BuildNode(this, v12, nLeftCounta);
  v23 = v19;
  v24 = &this->m_tree.m_Memory.m_pMemory[v23];
  v24->m_nAxis = v9;
  v24->m_flSplit = flSplita;
  v24->m_nChildren[0] = -1;
  v24->m_nChildren[1] = -1;
  this->m_tree.m_Memory.m_pMemory[v23].m_nChildren[0] = v21;
  this->m_tree.m_Memory.m_pMemory[v23].m_nChildren[1] = v22;
  return v19;
}


// CVertexKDTree::BuildMidpoint  (line 164, @0x0000000003265560, libserver.so)  // inlines: MajorIndex, MinorIndex, operator[]
// calls: CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> >::SetCount, CVertexKDTree::BuildNode
// callers: WeldVertices
void __fastcall CVertexKDTree::BuildMidpoint(
        CVertexKDTree *const this,
        const float *pVerts,
        int nVertexCount,
        int nVertexStrideFloats)
{
  const float *v8; // rdi
  int v9; // eax
  __int64 v10; // r10
  int v11; // r9d

  CUtlVectorBase<float const*,CUtlBlockMemory<float const*,int>>::SetCount(&this->m_vertexList, nVertexCount);
  if ( nVertexCount > 0 )
  {
    v8 = pVerts;
    v9 = 0;
    do
    {
      v10 = v9 >> (*(&this->m_vertexList.m_Memory + 15) >> 3);
      v11 = v9++ & *(&this->m_vertexList.m_Memory + 3);
      this->m_vertexList.m_Memory.m_pMemory[v10][v11 & 0x7FFFFFF] = v8;
      v8 += nVertexStrideFloats;
    }
    while ( v9 != nVertexCount );
  }
  CVertexKDTree::BuildNode(this, 0, nVertexCount);
}


