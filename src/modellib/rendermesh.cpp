// Reconstructed from DWARF by pahole; not original source.

// src/modellib/rendermesh.cpp:13
struct RenderMeshKeyToFlagMap_t {
	const char * m_pKey;  // +0x0

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_rendermesh.cpp  (line 0, @0x0000000001a6b090, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_rendermesh_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CRenderSkeleton::CRenderSkeleton  (line 65, @0x0000000003156780, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CRenderMesh::CRenderMesh, CSchemaClassBinding<CRenderSkeleton>::Allocate, CSchemaClassBinding<CRenderSkeleton>::ConstructInPlace, CSchemaClassBinding<CRenderSkeleton>::AllocateAndCopyConstruct
void __fastcall CRenderSkeleton::CRenderSkeleton(CRenderSkeleton *const this)
{
  this->m_bones.m_Size = 0;
  this->m_bones.m_Memory.m_pMemory = 0;
  this->m_bones.m_Memory.m_nAllocationCount = 0;
  this->m_bones.m_Memory.m_nGrowSize = 0;
  this->m_boneHashes.m_Size = 0;
  this->m_boneHashes.m_Memory.m_pMemory = 0;
  this->m_boneHashes.m_Memory.m_nAllocationCount = 0;
  this->m_boneHashes.m_Memory.m_nGrowSize = 0;
  this->m_boneParents.m_Size = 0;
  this->m_boneParents.m_Memory.m_pMemory = 0;
  this->m_boneParents.m_Memory.m_nAllocationCount = 0;
  this->m_boneParents.m_Memory.m_nGrowSize = 0;
  this->m_nBoneWeightCount = 4;
}


// CRenderSkeleton::AddBone  (line 70, @0x0000000003157070, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlStringToken>, CopyConstruct<RenderSkeletonBone_t>, Element, GrowMemory, MakeStringToken, RenderSkeletonBone_t, operator[], ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, MurmurHash2LowerCase, CUtlMemory<CUtlStringToken, int>::Grow, CUtlMemory<RenderSkeletonBone_t, int>::Grow, RegisterStringToken, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CRenderMesh::AddBone
int __fastcall CRenderSkeleton::AddBone(CRenderSkeleton *const this, RenderSkeletonBone_t *const bone)
{
  int m_Size; // r14d
  int v5; // eax
  RenderSkeletonBone_t *v6; // rbx
  const char *v7; // rax
  const char *v8; // rax
  RenderSkeletonBone_t *v9; // rdi
  uint32 v10; // r12d
  const char *v11; // rax
  const char *v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  CUtlStringToken *v15; // rdx
  uint32 v17; // eax
  uint32 v18; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_bones.m_Size;
  v5 = this->m_bones.m_Size;
  if ( this->m_bones.m_Size == this->m_bones.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<RenderSkeletonBone_t,int>::Grow(&this->m_bones.m_Memory, 1);
    v5 = this->m_bones.m_Size;
  }
  this->m_bones.m_Size = v5 + 1;
  v6 = &this->m_bones.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    v6->m_boneName.m_pString = 0;
    v7 = CUtlString::Get(&bone->m_boneName);
    CUtlString::Set(&v6->m_boneName, v7);
    v6->m_parentName.m_pString = 0;
    v8 = CUtlString::Get(&bone->m_parentName);
    CUtlString::Set(&v6->m_parentName, v8);
    *&v6->m_invBindPose.m_flMatVal[0][0] = *&bone->m_invBindPose.m_flMatVal[0][0];
    *&v6->m_invBindPose.m_flMatVal[0][2] = *&bone->m_invBindPose.m_flMatVal[0][2];
    *&v6->m_invBindPose.m_flMatVal[1][0] = *&bone->m_invBindPose.m_flMatVal[1][0];
    *&v6->m_invBindPose.m_flMatVal[1][2] = *&bone->m_invBindPose.m_flMatVal[1][2];
    *&v6->m_invBindPose.m_flMatVal[2][0] = *&bone->m_invBindPose.m_flMatVal[2][0];
    *&v6->m_invBindPose.m_flMatVal[2][2] = *&bone->m_invBindPose.m_flMatVal[2][2];
    *&v6->m_bbox.m_vecCenter.x = *&bone->m_bbox.m_vecCenter.x;
    *&v6->m_bbox.m_vecCenter.z = *&bone->m_bbox.m_vecCenter.z;
    *&v6->m_bbox.m_vecSize.y = *&bone->m_bbox.m_vecSize.y;
    v6->m_flSphereRadius = bone->m_flSphereRadius;
  }
  v9 = bone;
  v10 = 0;
  v11 = CUtlString::Get(&v9->m_boneName);
  v12 = v11;
  if ( v11 == 0 || *v11 == 0 )
  {
    v13 = this->m_boneHashes.m_Size;
    v14 = this->m_boneHashes.m_Size;
    if ( v13 != this->m_boneHashes.m_Memory.m_nAllocationCount )
      goto LABEL_8;
    goto LABEL_14;
  }
  v17 = MurmurHash2LowerCase(v11, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v18 = v17;
    RegisterStringToken(v17, v12, 0, 1);
    v17 = v18;
  }
  v13 = this->m_boneHashes.m_Size;
  v10 = v17;
  v14 = this->m_boneHashes.m_Size;
  if ( v13 == this->m_boneHashes.m_Memory.m_nAllocationCount )
  {
LABEL_14:
    CUtlMemory<CUtlStringToken,int>::Grow(&this->m_boneHashes.m_Memory, 1);
    v14 = this->m_boneHashes.m_Size;
  }
LABEL_8:
  this->m_boneHashes.m_Size = v14 + 1;
  v15 = &this->m_boneHashes.m_Memory.m_pMemory[v13];
  if ( v15 != 0 )
    v15->m_nHashCode = v10;
  return m_Size;
}


// CRenderSkeleton::RemoveBones  (line 78, @0x00000000031582a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<RenderSkeletonBone_t>, Element, Purge, RemoveAll, Swap, V_swap<CUtlStringToken*>, V_swap<RenderSkeletonBone_t*>, V_swap<int*>, V_swap<int>, V_swap<unsigned int>, operator=, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~RenderSkeletonBone_t
// calls: CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::SetCount, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::SetCount, CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlStringToken, int>::Purge, CUtlMemory<RenderSkeletonBone_t, int>::Purge, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase, CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CRenderSkeleton::RemoveBones(
        CRenderSkeleton *const this,
        const CUtlVector<int,CUtlMemory<int,int> > *const oldToNew,
        const CUtlVector<int,CUtlMemory<int,int> > *const newToOld)
{
  int m_Size; // esi
  int v6; // esi
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // r14
  RenderSkeletonBone_t *v10; // rbx
  RenderSkeletonBone_t *v11; // r12
  int v12; // eax
  __int64 v13; // rax
  uint32 m_nGrowSize; // eax
  RenderSkeletonBone_t *m_pMemory; // rax
  CUtlStringToken *v16; // rax
  int *v17; // rdx
  int *v18; // rcx
  int v19; // r12d
  __int64 i; // r13
  CUtlString *v21; // rbx
  __int64 v23; // [rsp+18h] [rbp-A8h]
  int nNew; // [rsp+24h] [rbp-9Ch]
  CUtlVector<RenderSkeletonBone_t,CUtlMemory<RenderSkeletonBone_t,int> > newBones; // [rsp+30h] [rbp-90h] BYREF
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > newHashes; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > newParents; // [rsp+70h] [rbp-50h] BYREF

  m_Size = newToOld->m_Size;
  newBones.m_Size = 0;
  newBones.m_Memory.m_pMemory = 0;
  newBones.m_Memory.m_nAllocationCount = 0;
  newBones.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<RenderSkeletonBone_t,CUtlMemory<RenderSkeletonBone_t,int>>::SetCount(&newBones, m_Size);
  v6 = newToOld->m_Size;
  newHashes.m_Size = 0;
  newHashes.m_Memory.m_pMemory = 0;
  newHashes.m_Memory.m_nAllocationCount = 0;
  newHashes.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::SetCount(&newHashes, v6);
  v7 = this->m_bones.m_Size;
  newParents.m_Size = 0;
  newParents.m_Memory.m_pMemory = 0;
  newParents.m_Memory.m_nAllocationCount = 0;
  newParents.m_Memory.m_nGrowSize = 0;
  if ( this->m_boneParents.m_Size == v7 )
    CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&newParents, newToOld->m_Size);
  v8 = 0;
  v23 = 0;
  for ( nNew = 0; newToOld->m_Size > nNew; ++v23 )
  {
    v9 = newToOld->m_Memory.m_pMemory[v8];
    newHashes.m_Memory.m_pMemory[v8].m_nHashCode = this->m_boneHashes.m_Memory.m_pMemory[v9].m_nHashCode;
    v10 = &this->m_bones.m_Memory.m_pMemory[v9];
    v11 = &newBones.m_Memory.m_pMemory[v23];
    CUtlString::operator=(&newBones.m_Memory.m_pMemory[v23].m_boneName, &v10->m_boneName);
    CUtlString::operator=(&v11->m_parentName, &v10->m_parentName);
    *&v11->m_invBindPose.m_flMatVal[0][0] = *&v10->m_invBindPose.m_flMatVal[0][0];
    *&v11->m_invBindPose.m_flMatVal[0][2] = *&v10->m_invBindPose.m_flMatVal[0][2];
    *&v11->m_invBindPose.m_flMatVal[1][0] = *&v10->m_invBindPose.m_flMatVal[1][0];
    *&v11->m_invBindPose.m_flMatVal[1][2] = *&v10->m_invBindPose.m_flMatVal[1][2];
    *&v11->m_invBindPose.m_flMatVal[2][0] = *&v10->m_invBindPose.m_flMatVal[2][0];
    *&v11->m_invBindPose.m_flMatVal[2][2] = *&v10->m_invBindPose.m_flMatVal[2][2];
    v12 = newParents.m_Size;
    v11->m_bbox.m_vecCenter.x = v10->m_bbox.m_vecCenter.x;
    v11->m_bbox.m_vecCenter.y = v10->m_bbox.m_vecCenter.y;
    v11->m_bbox.m_vecCenter.z = v10->m_bbox.m_vecCenter.z;
    v11->m_bbox.m_vecSize.x = v10->m_bbox.m_vecSize.x;
    v11->m_bbox.m_vecSize.y = v10->m_bbox.m_vecSize.y;
    v11->m_bbox.m_vecSize.z = v10->m_bbox.m_vecSize.z;
    v11->m_flSphereRadius = v10->m_flSphereRadius;
    if ( v12 != 0 )
    {
      v13 = this->m_boneParents.m_Memory.m_pMemory[v9];
      if ( v13 < 0 || v13 >= oldToNew->m_Size )
        newParents.m_Memory.m_pMemory[v8] = -1;
      else
        newParents.m_Memory.m_pMemory[v8] = oldToNew->m_Memory.m_pMemory[v13];
    }
    ++nNew;
    ++v8;
  }
  m_nGrowSize = this->m_bones.m_Memory.m_nGrowSize;
  this->m_bones.m_Memory.m_nGrowSize = newBones.m_Memory.m_nGrowSize;
  newBones.m_Memory.m_nGrowSize = m_nGrowSize;
  m_pMemory = this->m_bones.m_Memory.m_pMemory;
  this->m_bones.m_Memory.m_pMemory = newBones.m_Memory.m_pMemory;
  newBones.m_Memory.m_pMemory = m_pMemory;
  LODWORD(m_pMemory) = this->m_bones.m_Memory.m_nAllocationCount;
  this->m_bones.m_Memory.m_nAllocationCount = newBones.m_Memory.m_nAllocationCount;
  newBones.m_Memory.m_nAllocationCount = m_pMemory;
  LODWORD(m_pMemory) = this->m_bones.m_Size;
  this->m_bones.m_Size = newBones.m_Size;
  newBones.m_Size = m_pMemory;
  LODWORD(m_pMemory) = this->m_boneHashes.m_Memory.m_nGrowSize;
  this->m_boneHashes.m_Memory.m_nGrowSize = newHashes.m_Memory.m_nGrowSize;
  newHashes.m_Memory.m_nGrowSize = m_pMemory;
  v16 = this->m_boneHashes.m_Memory.m_pMemory;
  this->m_boneHashes.m_Memory.m_pMemory = newHashes.m_Memory.m_pMemory;
  newHashes.m_Memory.m_pMemory = v16;
  LODWORD(v16) = this->m_boneHashes.m_Memory.m_nAllocationCount;
  this->m_boneHashes.m_Memory.m_nAllocationCount = newHashes.m_Memory.m_nAllocationCount;
  newHashes.m_Memory.m_nAllocationCount = v16;
  LODWORD(v16) = this->m_boneHashes.m_Size;
  this->m_boneHashes.m_Size = newHashes.m_Size;
  newHashes.m_Size = v16;
  LODWORD(v16) = this->m_boneParents.m_Memory.m_nGrowSize;
  this->m_boneParents.m_Memory.m_nGrowSize = newParents.m_Memory.m_nGrowSize;
  v17 = this->m_boneParents.m_Memory.m_pMemory;
  v18 = newParents.m_Memory.m_pMemory;
  newParents.m_Memory.m_nGrowSize = v16;
  newParents.m_Memory.m_pMemory = v17;
  LODWORD(v17) = this->m_boneParents.m_Memory.m_nAllocationCount;
  this->m_boneParents.m_Memory.m_pMemory = v18;
  LODWORD(v18) = newParents.m_Memory.m_nAllocationCount;
  newParents.m_Memory.m_nAllocationCount = v17;
  LODWORD(v17) = newParents.m_Size;
  this->m_boneParents.m_Memory.m_nAllocationCount = v18;
  newParents.m_Size = 0;
  this->m_boneParents.m_Size = v17;
  if ( (v16 & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&newParents.m_Memory);
    if ( (newParents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&newParents.m_Memory);
  }
  newHashes.m_Size = 0;
  if ( (newHashes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlStringToken,int>::Purge(&newHashes.m_Memory);
    if ( (newHashes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlStringToken,int>::Purge(&newHashes.m_Memory);
  }
  v19 = newBones.m_Size;
  for ( i = 96LL * newBones.m_Size - 96; --v19 >= 0; i -= 96 )
  {
    v21 = (&newBones.m_Memory.m_pMemory->m_boneName + i);
    if ( *(&newBones.m_Memory.m_pMemory->m_parentName.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock(v21 + 1);
    if ( v21->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v21);
  }
  newBones.m_Size = 0;
  if ( (newBones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<RenderSkeletonBone_t,int>::Purge(&newBones.m_Memory);
    if ( (newBones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<RenderSkeletonBone_t,int>::Purge(&newBones.m_Memory);
  }
}


// CRenderSkeleton::GetBoneCount  (line 115, @0x0000000003155530, libserver.so)
// callers: CModel::AllMeshesSkinnedToOneBone, CModelSkeletonBuilder::AppendRenderMeshSkeleton, CModelBuilder::CreateRemappingTableForMesh, CRenderMesh::FillInPermData
int __fastcall CRenderSkeleton::GetBoneCount(const CRenderSkeleton *const this)
{
  return this->m_bones.m_Size;
}


// CRenderSkeleton::GetBone  (line 120, @0x0000000003155540, libserver.so)  // inlines: operator[]
// callers: CModelSkeletonBuilder::AppendRenderMeshSkeleton
const RenderSkeletonBone_t *__fastcall CRenderSkeleton::GetBone(const CRenderSkeleton *const this, int nBone)
{
  return &this->m_bones.m_Memory.m_pMemory[nBone];
}


// CRenderSkeleton::GetBone  (line 125, @0x0000000003155560, libserver.so)  // inlines: operator[]
RenderSkeletonBone_t *__fastcall CRenderSkeleton::GetBone(CRenderSkeleton *const this, int nBone)
{
  return &this->m_bones.m_Memory.m_pMemory[nBone];
}


// CRenderSkeleton::SetBoneWeightCount  (line 130, @0x0000000003155580, libserver.so)
void __fastcall CRenderSkeleton::SetBoneWeightCount(CRenderSkeleton *const this, int nWeightCount)
{
  this->m_nBoneWeightCount = nWeightCount;
}


// CRenderSkeleton::FindBoneIndex  (line 135, @0x0000000003155590, libserver.so)
// callers: CModelSkeletonBuilder::AppendRenderMeshSkeleton, CRenderSkeleton::FindBoneIndex
int __fastcall CRenderSkeleton::FindBoneIndex(const CRenderSkeleton *const this, uint32 nBoneHash)
{
  int m_Size; // ecx
  int result; // eax
  CUtlStringToken *m_pMemory; // rdx

  m_Size = this->m_boneHashes.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_boneHashes.m_Memory.m_pMemory;
    result = 0;
    if ( m_pMemory->m_nHashCode != nBoneHash )
    {
      while ( ++result != m_Size )
      {
        ++m_pMemory;
        if ( m_pMemory->m_nHashCode == nBoneHash )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CRenderSkeleton::FindBoneIndex  (line 146, @0x00000000031555d0, libserver.so)  // inlines: MakeStringToken
// calls: CRenderSkeleton::FindBoneIndex, MurmurHash2LowerCase, RegisterStringToken
// callers: CRenderSkeleton::GetParent
int __fastcall CRenderSkeleton::FindBoneIndex(const CRenderSkeleton *const this, const char *pBoneName)
{
  uint32 v5; // eax
  uint32 v6; // esi
  uint32 v7; // [rsp+Ch] [rbp-14h]

  if ( pBoneName == 0 || *pBoneName == 0 )
    return CRenderSkeleton::FindBoneIndex(this, 0);
  v5 = MurmurHash2LowerCase(pBoneName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v7 = v5;
    RegisterStringToken(v5, pBoneName, 0, 1);
    v6 = v7;
  }
  else
  {
    v6 = v5;
  }
  return CRenderSkeleton::FindBoneIndex(this, v6);
}


// CRenderSkeleton::GetParent  (line 151, @0x0000000003155650, libserver.so)  // inlines: GetBone, operator[]
// calls: CUtlString::Get, CRenderSkeleton::FindBoneIndex
// callers: CModelSkeletonBuilder::AppendRenderMeshSkeleton
int __fastcall CRenderSkeleton::GetParent(const CRenderSkeleton *const this, int nBone)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_bones.m_Memory.m_pMemory[nBone].m_parentName);
  return CRenderSkeleton::FindBoneIndex(this, v3);
}


// CRenderSkeleton::TransferPostLoadFn  (line 156, @0x0000000003157250, libserver.so)  // inlines: MakeStringToken, operator[]
// calls: CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::SetCount, CUtlString::Get, MurmurHash2LowerCase, RegisterStringToken
// callers: CRenderSkeleton::KV3TransferLoad_CRenderSkeleton
void __fastcall CRenderSkeleton::TransferPostLoadFn(CRenderSkeleton *const this, CKV3TransferLoadContext *pContext)
{
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > *p_m_boneHashes; // rdi
  int m_Size; // ebx
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  CUtlStringToken *v7; // r14
  const char *v8; // r12
  uint32 v9; // eax
  uint32 v10; // [rsp+Ch] [rbp-34h]

  p_m_boneHashes = &this->m_boneHashes;
  m_Size = p_m_boneHashes[-1].m_Size;
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::SetCount(p_m_boneHashes, m_Size);
  if ( m_Size > 0 )
  {
    v5 = 4LL * (m_Size - 1) + 4;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_boneHashes.m_Memory.m_pMemory[v6 / 4];
        v8 = CUtlString::Get(&this->m_bones.m_Memory.m_pMemory[v6 / 4].m_boneName);
        v9 = 0;
        if ( v8 != 0 && *v8 != 0 )
        {
          v9 = MurmurHash2LowerCase(v8, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
            break;
        }
        v6 += 4LL;
        v7->m_nHashCode = v9;
        if ( v6 == v5 )
          return;
      }
      v10 = v9;
      v6 += 4LL;
      RegisterStringToken(v9, v8, 0, 1);
      v7->m_nHashCode = v10;
    }
    while ( v6 != v5 );
  }
}


// CMaterialDrawDescriptor::CMaterialDrawDescriptor  (line 170, @0x0000000003155690, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CStrongHandle, CUtlMemoryFixed, CUtlVectorBase, CUtlVectorFixed, V_memset, Vector, memset
// calls: Plat_IsInDebugSessionRaw
// callers: CSceneObjectData::AddDrawCall, CSceneObjectData::InitFromOldDiskData, CSchemaClassBinding<CMaterialDrawDescriptor>::ConstructInPlace, CSchemaClassBinding<CMaterialDrawDescriptor>::Allocate, CSchemaClassBinding<CMaterialDrawDescriptor>::AllocateAndCopyConstruct, CSchemaUtlVectorManipulator<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >, CMaterialDrawDescriptor>::SwapItems, CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >, CMaterialDrawDescriptor>::InsertMultipleBefore
void __fastcall CMaterialDrawDescriptor::CMaterialDrawDescriptor(CMaterialDrawDescriptor *const this)
{
  CIntHandle32<RenderInputLayout_t__handle*> *m_hInputLayoutHandle; // r12
  CIntHandle32<RenderInputLayout_t__handle*> *v3; // rbx
  CIntHandle32<RenderInputLayout_t__handle*> *v4; // rax

  m_hInputLayoutHandle = this->m_hInputLayoutHandle;
  this->m_nPrimitiveType = RenderPrimitiveType_t::RENDER_PRIM_TRIANGLES;
  this->m_nBaseVertex = 0;
  this->m_nVertexCount = 0;
  this->m_nStartIndex = 0;
  this->m_nIndexCount = 0;
  this->m_nStartInstance = 0;
  this->m_nInstanceCount = 0;
  this->m_flUvDensity = 0.0;
  this->m_nFlags = RenderMeshDrawPrimitiveFlags_t::RENDERMESH_DRAW_FLAGS_NONE;
  this->m_vTintColor.x = 1.0;
  this->m_vTintColor.y = 1.0;
  this->m_vTintColor.z = 1.0;
  this->m_bAlphaBlendedMaterial = 0;
  this->m_pBakedLightingInfo = 0;
  this->m_vertexBuffers.m_Size = 0;
  if ( (this & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  *this->m_perInstanceBakedLightingParams = 0;
  v3 = &this->m_hInputLayoutHandle[5];
  v4 = m_hInputLayoutHandle;
  *&v3[23].m_Handle = -1;
  *&v3[25].m_Handle = 0;
  *&v3[19].m_Handle = 0;
  for ( v3[21].m_Handle = 0; v3 != v4; ++v4 )
    v4->m_Handle = -1;
}


// CMaterialDrawDescriptor::CMaterialDrawDescriptor  (line 182, @0x0000000003155770, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CStrongHandle, CUtlMemoryFixed, CUtlVectorBase, CUtlVectorFixed, V_memset, Vector, memset
// calls: Plat_IsInDebugSessionRaw
void __fastcall CMaterialDrawDescriptor::CMaterialDrawDescriptor(
        CMaterialDrawDescriptor *const this,
        RenderPrimitiveType_t nPrimType,
        int32 nBaseVertex,
        int32 nVertexCount,
        int32 nStartIndex,
        int32 nIndexCount)
{
  CIntHandle32<RenderInputLayout_t__handle*> *m_hInputLayoutHandle; // r12
  CIntHandle32<RenderInputLayout_t__handle*> *v8; // rbx
  CIntHandle32<RenderInputLayout_t__handle*> *v9; // rax

  m_hInputLayoutHandle = this->m_hInputLayoutHandle;
  this->m_nPrimitiveType = nPrimType;
  this->m_nBaseVertex = nBaseVertex;
  this->m_nVertexCount = nVertexCount;
  this->m_nStartIndex = nStartIndex;
  this->m_nIndexCount = nIndexCount;
  this->m_nStartInstance = 0;
  this->m_nInstanceCount = 0;
  this->m_flUvDensity = 0.0;
  this->m_nFlags = RenderMeshDrawPrimitiveFlags_t::RENDERMESH_DRAW_FLAGS_NONE;
  this->m_vTintColor.x = 1.0;
  this->m_vTintColor.y = 1.0;
  this->m_vTintColor.z = 1.0;
  this->m_bAlphaBlendedMaterial = 0;
  this->m_pBakedLightingInfo = 0;
  this->m_vertexBuffers.m_Size = 0;
  if ( (this & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  *this->m_perInstanceBakedLightingParams = 0;
  v8 = &this->m_hInputLayoutHandle[5];
  v9 = m_hInputLayoutHandle;
  *&v8[23].m_Handle = -1;
  *&v8[25].m_Handle = 0;
  *&v8[19].m_Handle = 0;
  for ( v8[21].m_Handle = 0; v8 != v9; ++v9 )
    v9->m_Handle = -1;
}


// CMaterialDrawDescriptor::CMaterialDrawDescriptor  (line 195, @0x0000000003155840, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CStrongHandle, CUtlMemoryFixed, CUtlVectorBase, CUtlVectorFixed, V_memset, Vector, memset
// calls: Plat_IsInDebugSessionRaw
void __fastcall CMaterialDrawDescriptor::CMaterialDrawDescriptor(
        CMaterialDrawDescriptor *const this,
        RenderPrimitiveType_t nPrimType,
        int32 nBaseVertex,
        int32 nVertexCount,
        int32 nStartIndex,
        int32 nIndexCount,
        float32 flUvDensity,
        int32 nStartInstance,
        int32 nInstanceCount)
{
  CIntHandle32<RenderInputLayout_t__handle*> *m_hInputLayoutHandle; // r12
  CIntHandle32<RenderInputLayout_t__handle*> *v11; // rbx
  CIntHandle32<RenderInputLayout_t__handle*> *v12; // rax

  m_hInputLayoutHandle = this->m_hInputLayoutHandle;
  this->m_nPrimitiveType = nPrimType;
  this->m_nBaseVertex = nBaseVertex;
  this->m_nVertexCount = nVertexCount;
  this->m_nStartInstance = nStartInstance;
  this->m_nStartIndex = nStartIndex;
  this->m_nIndexCount = nIndexCount;
  this->m_flUvDensity = flUvDensity;
  this->m_nInstanceCount = nInstanceCount;
  this->m_nFlags = RenderMeshDrawPrimitiveFlags_t::RENDERMESH_DRAW_FLAGS_NONE;
  this->m_vTintColor.x = 1.0;
  this->m_vTintColor.y = 1.0;
  this->m_vTintColor.z = 1.0;
  this->m_bAlphaBlendedMaterial = 0;
  this->m_pBakedLightingInfo = 0;
  this->m_vertexBuffers.m_Size = 0;
  if ( (this & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  *this->m_perInstanceBakedLightingParams = 0;
  v11 = &this->m_hInputLayoutHandle[5];
  v12 = m_hInputLayoutHandle;
  *&v11[23].m_Handle = -1;
  *&v11[25].m_Handle = 0;
  *&v11[19].m_Handle = 0;
  for ( v11[21].m_Handle = 0; v11 != v12; ++v12 )
    v12->m_Handle = -1;
}


// CMaterialDrawDescriptor::CMaterialDrawDescriptor  (line 208, @0x0000000003156c30, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CStrongHandle, CUtlMemoryFixed, CUtlVectorBase, CUtlVectorFixed, Purge, RemoveAll, ~CStrongHandle, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CMaterialDrawDescriptor::Init, Plat_IsInDebugSessionRaw, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, _Unwind_Resume
// callers: CSceneObjectData::Init, CSceneObjectData::AddDrawCall
void __fastcall CMaterialDrawDescriptor::CMaterialDrawDescriptor(
        CMaterialDrawDescriptor *const this,
        const CMaterialDrawDescriptor *const other)
{
  int v3; // eax
  const CMaterialDrawDescriptor *othera; // [rsp+8h] [rbp-18h]

  this->m_vertexBuffers.m_Size = 0;
  if ( (this & 7) != 0 )
  {
    othera = other;
    v3 = Plat_IsInDebugSessionRaw();
    other = othera;
    if ( v3 != 0 )
      __debugbreak();
  }
  this->m_indexBuffer.m_hBuffer = 0;
  this->m_indexBuffer.m_nBindOffsetBytes = 0;
  this->m_material.m_pBinding = 0;
  CMaterialDrawDescriptor::Init(this, other);
  this->m_pOriginalDrawCallPtr = -1LL;
}


// CMaterialDrawDescriptor::operator=  (line 214, @0x0000000003156b80, libserver.so)
// calls: CMaterialDrawDescriptor::Init
// callers: CSchemaClassBinding<CMaterialDrawDescriptor>::AllocateAndCopyConstruct, CSchemaClassBinding<CMaterialDrawDescriptor>::Copy, CSchemaUtlVectorManipulator<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >, CMaterialDrawDescriptor>::SwapItems, CAtomicManipulator<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > >::Copy, CSchemaClassBinding<CSceneObjectData>::Copy, CAtomicManipulator<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > >::AllocateAndCopy, CSchemaClassBinding<CSceneObjectData>::AllocateAndCopyConstruct, CSchemaUtlVectorManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul>, CSceneObjectData>::SwapItems, CAtomicManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul> >::AllocateAndCopy, CAtomicManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul> >::Copy
CMaterialDrawDescriptor *__fastcall CMaterialDrawDescriptor::operator=(
        CMaterialDrawDescriptor *const this,
        const CMaterialDrawDescriptor *const other)
{
  CMaterialDrawDescriptor::Init(this, other);
  this->m_pOriginalDrawCallPtr = -1LL;
  return this;
}


// CMaterialDrawDescriptor::Init  (line 221, @0x0000000003155910, libserver.so)
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CMaterialDrawDescriptor::Init(
        CMaterialDrawDescriptor *const this,
        RenderPrimitiveType_t nPrimType,
        int32 nBaseVertex,
        int32 nVertexCount,
        int32 nStartIndex,
        int32 nIndexCount)
{
  this->m_nPrimitiveType = nPrimType;
  this->m_nBaseVertex = nBaseVertex;
  this->m_nVertexCount = nVertexCount;
  this->m_nStartIndex = nStartIndex;
  this->m_nIndexCount = nIndexCount;
}


// CMaterialDrawDescriptor::Init  (line 230, @0x0000000003155930, libserver.so)
// callers: CMaterialDrawDescriptor::InitFromOldDiskData
void __fastcall CMaterialDrawDescriptor::Init(
        CMaterialDrawDescriptor *const this,
        RenderPrimitiveType_t nPrimType,
        int32 nBaseVertex,
        int32 nVertexCount,
        int32 nStartIndex,
        int32 nIndexCount,
        float32 flUvDensity,
        int32 nStartInstance,
        int32 nInstanceCount)
{
  this->m_nPrimitiveType = nPrimType;
  this->m_nBaseVertex = nBaseVertex;
  this->m_nVertexCount = nVertexCount;
  this->m_nStartIndex = nStartIndex;
  this->m_nIndexCount = nIndexCount;
  this->m_nStartInstance = nStartInstance;
  this->m_flUvDensity = flUvDensity;
  this->m_nInstanceCount = nInstanceCount;
}


// CMaterialDrawDescriptor::Init  (line 242, @0x0000000003156a10, libserver.so)  // inlines: CopyArray, Init, ThreadInterlockedIncrement, V_memcpy, memcpy, operator++, operator=
// calls: CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4ul> >::SetCount, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown
// callers: CMaterialDrawDescriptor::operator=, CMaterialDrawDescriptor::CMaterialDrawDescriptor
void __fastcall CMaterialDrawDescriptor::Init(
        CMaterialDrawDescriptor *const this,
        const CMaterialDrawDescriptor *const other)
{
  __int64 i; // rax
  int m_Size; // r14d
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul> >::CAllocator *p_m_Memory; // r13
  __int64 v7; // rax
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul> >::CAllocator *v8; // rdx
  bool v9; // zf
  const ResourceBindingBase_t *m_pBinding; // rsi

  this->m_nPrimitiveType = other->m_nPrimitiveType;
  this->m_nBaseVertex = other->m_nBaseVertex;
  this->m_nVertexCount = other->m_nVertexCount;
  this->m_nStartIndex = other->m_nStartIndex;
  this->m_nIndexCount = other->m_nIndexCount;
  this->m_nStartInstance = other->m_nStartInstance;
  this->m_nInstanceCount = other->m_nInstanceCount;
  this->m_nFlags = other->m_nFlags;
  this->m_flUvDensity = other->m_flUvDensity;
  this->m_bAlphaBlendedMaterial = other->m_bAlphaBlendedMaterial;
  this->m_vTintColor = other->m_vTintColor;
  *this->m_perInstanceBakedLightingParams = *other->m_perInstanceBakedLightingParams;
  this->m_pBakedLightingInfo = other->m_pBakedLightingInfo;
  for ( i = 0; i != 5; ++i )
    this->m_hInputLayoutHandle[i].m_Handle = other->m_hInputLayoutHandle[i].m_Handle;
  m_Size = other->m_vertexBuffers.m_Size;
  p_m_Memory = &other->m_vertexBuffers.m_Memory;
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul>>::SetCount(
    &this->m_vertexBuffers,
    m_Size);
  if ( m_Size > 0 )
  {
    v7 = 0;
    v8 = &this->m_vertexBuffers.m_Memory;
    do
    {
      *&v8->m_Memory.m_Data[v7] = *&p_m_Memory->m_Memory.m_Data[v7];
      *&v8->m_Memory.m_Data[v7 + 8] = *&p_m_Memory->m_Memory.m_Data[v7 + 8];
      v7 += 16;
    }
    while ( v7 != 16 * ((m_Size - 1) + 1LL) );
  }
  v9 = this->m_material.m_pBinding == 0;
  this->m_indexBuffer.m_hBuffer = other->m_indexBuffer.m_hBuffer;
  this->m_indexBuffer.m_nBindOffsetBytes = other->m_indexBuffer.m_nBindOffsetBytes;
  if ( !v9 )
    CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_material);
  m_pBinding = other->m_material.m_pBinding;
  this->m_material.m_pBinding = m_pBinding;
  if ( m_pBinding != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, &this->m_material);
      m_pBinding = this->m_material.m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CMaterialDrawDescriptor::SetFlags  (line 269, @0x0000000003155960, libserver.so)
void __fastcall CMaterialDrawDescriptor::SetFlags(
        CMaterialDrawDescriptor *const this,
        RenderMeshDrawPrimitiveFlags_t nFlags)
{
  this->m_nFlags = nFlags;
}


// CMaterialDrawDescriptor::SetMaterial  (line 274, @0x0000000003156bb0, libserver.so)  // inlines: GetBinding, Init, ThreadInterlockedIncrement, operator++, operator=
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CMaterialDrawDescriptor::InitFromOldDiskData
void __fastcall CMaterialDrawDescriptor::SetMaterial(CMaterialDrawDescriptor *const this, HMaterial hMaterial)
{
  HMaterialStrong *p_m_material; // r13
  ResourceBindingBase_t *m_pData; // r12
  const ResourceBindingBase_t *m_pBinding; // rsi

  p_m_material = &this->m_material;
  m_pData = hMaterial.m_pBinding->m_pData;
  if ( this->m_material.m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_material);
  this->m_material.m_pBinding = m_pData;
  if ( m_pData != 0 )
  {
    m_pBinding = m_pData;
    if ( (m_pData->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pData, 2, p_m_material);
      m_pBinding = this->m_material.m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CMaterialDrawDescriptor::GetMaterial  (line 279, @0x0000000003155970, libserver.so)  // inlines: FromUntypedHandleUnchecked, InitUntypedUnchecked, operator CWeakHandle<InfoForResourceTypeIMaterial2>
// callers: CModel::GetAllMaterials
HMaterial __fastcall CMaterialDrawDescriptor::GetMaterial(
        const ResourceBindingBase_t **a1,
        const CMaterialDrawDescriptor *const this)
{
  *a1 = this->m_material.m_pBinding;
  return a1;
}


// CMaterialDrawDescriptor::AddVertexBuffer  (line 284, @0x0000000003155d50, libserver.so)
// calls: CMaterialDrawDescriptor::AddVertexBuffer
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CMaterialDrawDescriptor::AddVertexBuffer(
        CMaterialDrawDescriptor *const this,
        VertexBufferHandle_t hVB,
        uint32 nBindOffsetBytes)
{
  CMaterialDrawDescriptor::AddVertexBuffer(this, hVB, nBindOffsetBytes);
}


// CMaterialDrawDescriptor::SetIndexBuffer  (line 289, @0x0000000003155990, libserver.so)  // inlines: SetIndexBuffer
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CMaterialDrawDescriptor::SetIndexBuffer(
        CMaterialDrawDescriptor *const this,
        IndexBufferHandle_t hIB,
        uint32 nBindOffsetBytes)
{
  this->m_indexBuffer.m_hBuffer = hIB;
  this->m_indexBuffer.m_nBindOffsetBytes = nBindOffsetBytes;
}


// UpdateInputLayoutForMaterial  (line 297, @0x00000000031559b0, libserver.so)  // inlines: V_memset, memset
// calls: memset, CreateMaterialSpecificInputLayoutFromPackedInputLayout
// callers: CMaterialDrawDescriptor::UpdateInputLayouts
RenderInputLayout_t __fastcall UpdateInputLayoutForMaterial(
        RenderInputLayout_t hInputLayout,
        const CVsInputSignatureVector *pVSSignature)
{
  int v4; // r14d
  const RenderInputLayoutField_t *v5; // r15
  unsigned int v6; // eax
  int nFieldCount; // [rsp+4h] [rbp-3BCh] BYREF
  const RenderInputLayoutField_t *pFields; // [rsp+8h] [rbp-3B8h] BYREF
  RenderInputLayoutField_t pFieldsOut[16]; // [rsp+10h] [rbp-3B0h] BYREF

  if ( pVSSignature == 0 )
    return hInputLayout;
  pFields = 0;
  nFieldCount = 0;
  (*(*g_pRenderDevice + 208LL))(g_pRenderDevice, hInputLayout.m_Handle, &pFields, &nFieldCount);
  v4 = nFieldCount;
  if ( nFieldCount == 0 )
    return hInputLayout;
  v5 = pFields;
  if ( pFields == 0 )
    return hInputLayout;
  memset(pFieldsOut, 0, sizeof(pFieldsOut));
  v6 = CreateMaterialSpecificInputLayoutFromPackedInputLayout(pFieldsOut, 16, v5, v4, pVSSignature, 0);
  return (*(*g_pRenderDevice + 184LL))(g_pRenderDevice, 0, v6, pFieldsOut);
}


// CMaterialDrawDescriptor::UpdateInputLayouts  (line 316, @0x0000000003155a90, libserver.so)  // inlines: CRenderContextPtr, CRenderContextPtr<>, CWeakHandle, Clear, GetHandle, Init, InitPreallocated, Release, RenderTargetDesc_t, ResourceHandleToData<IMaterial2>, operator int, operator&, operator=, ~CRenderContextPtr
// calls: UpdateInputLayoutForMaterial, Warning, _Unwind_Resume, __stack_chk_fail
// callers: CSceneObjectData::UpdateInputLayouts
// strings: "WARNING: Trying to create a CRenderContextPtr without a valid context.\n"
void __fastcall CMaterialDrawDescriptor::UpdateInputLayouts(CMaterialDrawDescriptor *const this)
{
  __int64 v1; // rsi
  RenderMeshDrawPrimitiveFlags_t m_nFlags; // eax
  const ResourceBindingBase_t *m_pBinding; // rax
  __int64 m_value; // rdx
  __int64 i; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  int m_Size; // eax
  void *v9; // rsp
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul> >::CAllocator *p_m_Memory; // rbx
  unsigned int v11; // r13d
  unsigned __int8 *v12; // r14
  RenderInputLayout_t v13; // eax
  RenderInputLayout_t v14; // eax
  __int64 v15; // rdx
  IRenderDevice *v16; // [rsp+8h] [rbp-C8h]
  CMaterialDrawDescriptor *thisa; // [rsp+10h] [rbp-C0h] BYREF
  const CVsInputSignatureVector *pVSSignature; // [rsp+18h] [rbp-B8h]
  _QWORD v19[13]; // [rsp+20h] [rbp-B0h] BYREF
  int v20; // [rsp+88h] [rbp-48h]
  __int16 v21; // [rsp+8Ch] [rbp-44h]
  char v22; // [rsp+8Eh] [rbp-42h]
  char v23; // [rsp+8Fh] [rbp-41h]
  unsigned __int64 v24; // [rsp+98h] [rbp-38h]

  thisa = this;
  v24 = __readfsqword(0x28u);
  m_nFlags = this->m_nFlags;
  if ( (m_nFlags & 4) == 0 )
  {
    pVSSignature = 0;
    if ( (m_nFlags & 8) != 0 )
    {
      m_pBinding = this->m_material.m_pBinding;
      if ( m_pBinding != 0 )
      {
        m_value = m_pBinding->m_nRefCount.m_value;
        if ( m_value > 0 && m_pBinding->m_pData != 0 )
          pVSSignature = (*(*m_pBinding->m_pData + 40LL))(m_pBinding->m_pData, v1, m_value, 0);
      }
    }
    memset(v19, 0, 64);
    v16 = g_pRenderDevice;
    for ( i = 0; i != 8; ++i )
    {
      v19[i] = 0;
      *(&v19[9] + i * 4) = 0;
    }
    v20 = 0;
    v23 &= ~1u;
    v21 = 0;
    v19[8] = 0;
    v22 = 0;
    v6 = (*(*v16 + 368LL))(v16, 0, 0, 0);
    v7 = v6;
    if ( v6 != 0 )
      (*(*v6 + 8LL))(v6, v19);
    else
      Warning("WARNING: Trying to create a CRenderContextPtr without a valid context.\n");
    m_Size = thisa->m_vertexBuffers.m_Size;
    v9 = alloca(((4LL * m_Size + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    if ( m_Size <= 0 )
    {
      v11 = 0;
    }
    else
    {
      p_m_Memory = &thisa->m_vertexBuffers.m_Memory;
      v11 = 0;
      v12 = &thisa->m_vertexBuffers.m_Memory.m_Memory.m_Data[16 * (m_Size - 1) + 16];
      do
      {
        v13.m_Handle = (*(*v7 + 352LL))(v7, *p_m_Memory->m_Memory.m_Data);
        if ( v13.m_Handle != -1 )
        {
          v14.m_Handle = UpdateInputLayoutForMaterial(v13, pVSSignature).m_Handle;
          v15 = v11++;
          *((&thisa & 0xFFFFFFFFFFFFFFEFLL) + 4 * v15) = v14;
        }
        p_m_Memory = (p_m_Memory + 16);
      }
      while ( p_m_Memory != v12 );
    }
    (*(*g_pRenderDevice + 200LL))(g_pRenderDevice, 5, thisa->m_hInputLayoutHandle, v11, &thisa & 0xFFFFFFFFFFFFFFEFLL);
    (*(*v7 + 48LL))(v7);
    (*(*v16 + 384LL))(v16, v7);
  }
}


// CMaterialDrawDescriptor::AddVertexBuffer  (line 359, @0x0000000003155d10, libserver.so)  // inlines: AddToTail, CRenderBufferBinding, Construct<CRenderBufferBinding>, Element, operator[]
// callers: CMaterialDrawDescriptor::AddVertexBuffer
void __fastcall CMaterialDrawDescriptor::AddVertexBuffer(
        CMaterialDrawDescriptor *const this,
        uint64 nVB,
        uint32 nBindOffsetBytes)
{
  __int64 m_Size; // rax
  int v4; // ecx
  char *v5; // rax

  m_Size = this->m_vertexBuffers.m_Size;
  v4 = m_Size + 1;
  v5 = &this->m_vertexBuffers.m_Memory + 16 * m_Size;
  this->m_vertexBuffers.m_Size = v4;
  if ( v5 != 0 )
  {
    *v5 = 0;
    *(v5 + 2) = 0;
  }
  *v5 = nVB;
  *(v5 + 2) = nBindOffsetBytes;
}


// CMaterialDrawDescriptor::SetIndexBuffer  (line 366, @0x0000000003155d60, libserver.so)
void __fastcall CMaterialDrawDescriptor::SetIndexBuffer(
        CMaterialDrawDescriptor *const this,
        uint64 nIB,
        uint32 nBindOffsetBytes)
{
  this->m_indexBuffer.m_hBuffer = nIB;
  this->m_indexBuffer.m_nBindOffsetBytes = nBindOffsetBytes;
}


// CMaterialDrawDescriptor::TransferPostSaveFn  (line 372, @0x00000000031567f0, libserver.so)  // inlines: SetKV3RenderMeshFlags, operator&
// calls: KeyValues3::FindOrCreateMember, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>, KeyValues3::SetMemberBool
// callers: CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor
// strings: "m_vertexBuffers"
// globals: RENDER_MESH_KEY_TO_FLAG_MAP
void __fastcall CMaterialDrawDescriptor::TransferPostSaveFn(
        const CMaterialDrawDescriptor *const this,
        CKV3TransferSaveContext *pContext)
{
  KeyValues3 *Member; // rax
  int m_Size; // r12d
  KeyValues3 *v6; // r13
  int v7; // r15d
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul> >::CAllocator *p_m_Memory; // rbx
  int v9; // esi
  KeyValues3 *ArrayElement; // rax
  RenderMeshKeyToFlagMap_t *v11; // rbx
  RenderMeshDrawPrimitiveFlags_t m_nFlags; // r13d
  const char *m_pKey; // rsi
  KeyValues3 *m_pTargetObject; // [rsp+8h] [rbp-58h]
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul> >::CAllocator *v16; // [rsp+28h] [rbp-38h] BYREF

  m_pTargetObject = pContext->m_pTargetObject;
  Member = KeyValues3::FindOrCreateMember(m_pTargetObject, "m_vertexBuffers", 0);
  m_Size = this->m_vertexBuffers.m_Size;
  v6 = Member;
  KeyValues3::SetArrayElementCount(Member, m_Size);
  if ( m_Size > 0 )
  {
    v7 = 0;
    p_m_Memory = &this->m_vertexBuffers.m_Memory;
    do
    {
      v9 = v7++;
      ArrayElement = KeyValues3::GetArrayElement(v6, v9);
      v16 = p_m_Memory;
      p_m_Memory = (p_m_Memory + 16);
      CKV3TransferSaveContext::SaveClassPointer<CRenderBufferBinding const>(pContext, &v16, ArrayElement);
    }
    while ( v7 != m_Size );
  }
  v11 = RENDER_MESH_KEY_TO_FLAG_MAP;
  m_nFlags = this->m_nFlags;
  do
  {
    while ( v11->m_nFlag != (m_nFlags & v11->m_nFlag) )
    {
      if ( ++v11 == &unk_4A6EF30 )
        return;
    }
    m_pKey = v11->m_pKey;
    ++v11;
    KeyValues3::SetMemberBool(m_pTargetObject, m_pKey, 1, 0);
  }
  while ( v11 != &unk_4A6EF30 );
}


// CMaterialDrawDescriptor::TransferPostLoadFn  (line 388, @0x00000000031568e0, libserver.so)  // inlines: FindMember, GetRenderMeshFlagsFromKV3, LoadClassInstance<CRenderBufferBinding>, operator|, operator|=
// calls: KeyValues3::FindMember, KeyValues3::GetArrayElementCount, CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4ul> >::SetCount, KeyValues3::GetArrayElement, CKV3TransferLoadContext::PushSource, CRenderBufferBinding::KV3TransferLoad, CKV3TransferLoadContext::PopSource, ConvertV1MeshFlags, KeyValues3::GetMemberBool
// callers: CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor
// strings: "m_vertexBuffers", "m_nFlags"
// globals: RENDER_MESH_KEY_TO_FLAG_MAP
void __fastcall CMaterialDrawDescriptor::TransferPostLoadFn(
        CMaterialDrawDescriptor *const this,
        CKV3TransferLoadContext *pContext)
{
  KeyValues3 *Member; // rax
  const KeyValues3 *v4; // r13
  int ArrayElementCount; // eax
  int v6; // r14d
  CRenderBufferBinding *p_m_Memory; // r12
  int v8; // r15d
  int v9; // esi
  const KeyValues3 *ArrayElement; // rax
  KeyValues3 *v11; // rax
  RenderMeshDrawPrimitiveFlags_t v12; // eax
  RenderMeshKeyToFlagMap_t *v13; // rbx
  RenderMeshDrawPrimitiveFlags_t v14; // r12d
  KeyValues3 *m_pSourceObject; // [rsp+8h] [rbp-38h]

  m_pSourceObject = pContext->m_pSourceObject;
  Member = KeyValues3::FindMember(m_pSourceObject, "m_vertexBuffers", 0);
  v4 = Member;
  if ( Member != 0 )
  {
    ArrayElementCount = KeyValues3::GetArrayElementCount(Member);
    v6 = ArrayElementCount;
    if ( ArrayElementCount != 0 )
    {
      CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul>>::SetCount(
        &this->m_vertexBuffers,
        ArrayElementCount);
      p_m_Memory = &this->m_vertexBuffers.m_Memory;
      v8 = 0;
      if ( v6 > 0 )
      {
        do
        {
          v9 = v8++;
          ArrayElement = KeyValues3::GetArrayElement(v4, v9);
          CKV3TransferLoadContext::PushSource(pContext, ArrayElement);
          CRenderBufferBinding::KV3TransferLoad(p_m_Memory++, pContext);
          CKV3TransferLoadContext::PopSource(pContext);
        }
        while ( v8 != v6 );
      }
      v11 = KeyValues3::FindMember(m_pSourceObject, "m_nFlags", 0);
      if ( v11 != 0 )
      {
        v12 = ConvertV1MeshFlags(v11);
      }
      else
      {
        v13 = RENDER_MESH_KEY_TO_FLAG_MAP;
        v14 = RenderMeshDrawPrimitiveFlags_t::RENDERMESH_DRAW_FLAGS_NONE;
        do
        {
          if ( KeyValues3::GetMemberBool(m_pSourceObject, v13->m_pKey, 0, 0) )
            v14 |= v13->m_nFlag;
          ++v13;
        }
        while ( v13 != &unk_4A6EF30 );
        v12 = v14;
      }
      this->m_nFlags = v12;
    }
  }
}


// CSceneObjectData::CSceneObjectData  (line 419, @0x0000000003155d80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Vector, Vector4D
// callers: CRenderMesh::AddSceneObject, CRenderMesh::InitFromOldDiskData, CSchemaClassBinding<CSceneObjectData>::ConstructInPlace, CSchemaClassBinding<CSceneObjectData>::Allocate, CSchemaClassBinding<CSceneObjectData>::AllocateAndCopyConstruct, CSchemaUtlVectorManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul>, CSceneObjectData>::SwapItems, CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1ul, int> >::SetCount, CSchemaUtlVectorManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul>, CSceneObjectData>::InsertMultipleBefore
void __fastcall CSceneObjectData::CSceneObjectData(CSceneObjectData *const this)
{
  this->m_translucencyType = RenderMeshTranslucencyType_t::RENDERMESH_TRANSLUCENCY_FULLY_OPAQUE;
  this->m_vMinBounds.x = 3.4028235e38;
  this->m_vMinBounds.y = 3.4028235e38;
  this->m_vMinBounds.z = 3.4028235e38;
  this->m_drawCalls.m_Size = 0;
  this->m_vMaxBounds.x = -3.4028235e38;
  this->m_vMaxBounds.y = -3.4028235e38;
  this->m_vMaxBounds.z = -3.4028235e38;
  this->m_drawCalls.m_Memory.m_pMemory = 0;
  this->m_drawCalls.m_Memory.m_nAllocationCount = 0;
  this->m_drawCalls.m_Memory.m_nGrowSize = 0;
  this->m_vTintColor.x = 0.0;
  this->m_vTintColor.y = 0.0;
  this->m_vTintColor.z = 0.0;
  this->m_vTintColor.w = 0.0;
}


// CSceneObjectData::CSceneObjectData  (line 424, @0x0000000003155df0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Vector4D
void __fastcall CSceneObjectData::CSceneObjectData(
        CSceneObjectData *const this,
        const Vector *const vMinBounds,
        const Vector *const vMaxBounds,
        RenderMeshTranslucencyType_t nTranslucencyType)
{
  vec_t z; // eax

  this->m_vMinBounds = *vMinBounds;
  *&this->m_vMaxBounds.x = *&vMaxBounds->x;
  z = vMaxBounds->z;
  this->m_translucencyType = nTranslucencyType;
  this->m_drawCalls.m_Size = 0;
  this->m_drawCalls.m_Memory.m_pMemory = 0;
  this->m_drawCalls.m_Memory.m_nAllocationCount = 0;
  this->m_vMaxBounds.z = z;
  this->m_drawCalls.m_Memory.m_nGrowSize = 0;
  this->m_vTintColor.x = 0.0;
  this->m_vTintColor.y = 0.0;
  this->m_vTintColor.z = 0.0;
  this->m_vTintColor.w = 0.0;
}


// CSceneObjectData::CSceneObjectData  (line 430, @0x0000000003157320, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ~CUtlVector
// calls: CSceneObjectData::InitFromOldDiskData, CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CSceneObjectData::CSceneObjectData(CSceneObjectData *const this, const SceneObjectData_t *pPermData)
{
  this->m_drawCalls.m_Size = 0;
  this->m_drawCalls.m_Memory.m_pMemory = 0;
  this->m_drawCalls.m_Memory.m_nAllocationCount = 0;
  this->m_drawCalls.m_Memory.m_nGrowSize = 0;
  CSceneObjectData::InitFromOldDiskData(this, pPermData);
}


// CSceneObjectData::Init  (line 435, @0x0000000003156cd0, libserver.so)  // inlines: AddVectorToTail<CUtlMemory<CMaterialDrawDescriptor, int> >, CopyConstruct<CMaterialDrawDescriptor>, EnsureCapacity, memcpy, operator=, operator[]
// calls: CMaterialDrawDescriptor::CMaterialDrawDescriptor, memcpy
// callers: CSceneObjectData::CSceneObjectData, CRenderMesh::AddSceneObject
void __fastcall CSceneObjectData::Init(CSceneObjectData *const this, const CSceneObjectData *const other)
{
  __int64 m_Size; // r14
  int v5; // r12d
  int v6; // r15d
  uint32 m_nGrowSize; // eax
  CMaterialDrawDescriptor *m_pMemory; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r14
  CMaterialDrawDescriptor *v13; // rdi
  CMaterialDrawDescriptor *v14; // rax
  CMaterialDrawDescriptor *src; // [rsp+8h] [rbp-38h]

  m_Size = this->m_drawCalls.m_Size;
  this->m_vMinBounds = other->m_vMinBounds;
  this->m_vMaxBounds = other->m_vMaxBounds;
  this->m_translucencyType = other->m_translucencyType;
  this->m_vTintColor = other->m_vTintColor;
  v5 = other->m_drawCalls.m_Size;
  if ( v5 != 0 )
  {
    v6 = m_Size + v5;
    if ( m_Size + v5 > this->m_drawCalls.m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = this->m_drawCalls.m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          src = this->m_drawCalls.m_Memory.m_pMemory;
          v14 = (**g_pMemAlloc)(g_pMemAlloc, 200LL * v6);
          this->m_drawCalls.m_Memory.m_pMemory = v14;
          if ( src != 0 )
            memcpy(v14, src, 200LL * this->m_drawCalls.m_Memory.m_nAllocationCount);
          this->m_drawCalls.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          m_pMemory = this->m_drawCalls.m_Memory.m_pMemory;
          if ( m_pMemory != 0 )
            this->m_drawCalls.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 200LL * v6);
          else
            this->m_drawCalls.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 200LL * v6);
        }
        this->m_drawCalls.m_Memory.m_nAllocationCount = v6;
        v6 = v5 + this->m_drawCalls.m_Size;
      }
    }
    this->m_drawCalls.m_Size = v6;
    if ( v5 > 0 )
    {
      v9 = 5LL * (v5 - 1) + 5;
      v10 = 0;
      v11 = 40 * v9;
      v12 = m_Size;
      do
      {
        v13 = &this->m_drawCalls.m_Memory.m_pMemory[v10 / 0xC8 + v12];
        if ( v13 != 0 )
          CMaterialDrawDescriptor::CMaterialDrawDescriptor(v13, &other->m_drawCalls.m_Memory.m_pMemory[v10 / 0xC8]);
        v10 += 200LL;
      }
      while ( v10 != v11 );
    }
  }
}


// CSceneObjectData::CSceneObjectData  (line 444, @0x0000000003157370, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ~CUtlVector
// calls: CSceneObjectData::Init, CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CSceneObjectData::CSceneObjectData(CSceneObjectData *const this, const CSceneObjectData *pOther)
{
  this->m_drawCalls.m_Size = 0;
  this->m_drawCalls.m_Memory.m_pMemory = 0;
  this->m_drawCalls.m_Memory.m_nAllocationCount = 0;
  this->m_drawCalls.m_Memory.m_nGrowSize = 0;
  CSceneObjectData::Init(this, pOther);
}


// CSceneObjectData::~CSceneObjectData  (line 449, @0x00000000031573c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::RemoveAll, CUtlMemory<CMaterialDrawDescriptor, int>::Purge
// callers: CSchemaClassBinding<CSceneObjectData>::Deallocate, CSchemaClassBinding<CSceneObjectData>::DestructInPlace, CSchemaUtlVectorManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul>, CSceneObjectData>::RemoveMultiple, CAtomicManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul> >::Deallocate, CSchemaUtlVectorManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul>, CSceneObjectData>::DeallocateUtlVector, CSchemaUtlVectorManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul>, CSceneObjectData>::SwapItems, CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1ul, int> >::SetCount
void __fastcall CSceneObjectData::~CSceneObjectData(CSceneObjectData *const this)
{
  CUtlVectorBase<CMaterialDrawDescriptor,CUtlMemory<CMaterialDrawDescriptor,int>>::RemoveAll(&this->m_drawCalls);
  if ( (this->m_drawCalls.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CMaterialDrawDescriptor,int>::Purge(&this->m_drawCalls.m_Memory);
    if ( (this->m_drawCalls.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMaterialDrawDescriptor,int>::Purge(&this->m_drawCalls.m_Memory);
  }
}


// CSceneObjectData::Init  (line 453, @0x0000000003155e50, libserver.so)  // inlines: SetBounds, SetTranslucencyType, operator=
// callers: CSceneObjectData::InitFromOldDiskData
void __fastcall CSceneObjectData::Init(
        CSceneObjectData *const this,
        const Vector *const vMinBounds,
        const Vector *const vMaxBounds,
        RenderMeshTranslucencyType_t nTranslucencyType)
{
  vec_t z; // xmm0_4

  this->m_vMinBounds = *vMinBounds;
  this->m_vMaxBounds.x = vMaxBounds->x;
  this->m_vMaxBounds.y = vMaxBounds->y;
  z = vMaxBounds->z;
  this->m_translucencyType = nTranslucencyType;
  this->m_vMaxBounds.z = z;
}


// CSceneObjectData::SetBounds  (line 459, @0x0000000003155ea0, libserver.so)  // inlines: operator=
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CSceneObjectData::SetBounds(
        CSceneObjectData *const this,
        const Vector *const vMinBounds,
        const Vector *const vMaxBounds)
{
  this->m_vMinBounds = *vMinBounds;
  this->m_vMaxBounds = *vMaxBounds;
}


// CSceneObjectData::AddBounds  (line 465, @0x0000000003155ee0, libserver.so)  // inlines: VectorMax, VectorMin, fpmax, fpmin, operator=
void __fastcall CSceneObjectData::AddBounds(
        CSceneObjectData *const this,
        const Vector *const vMinBounds,
        const Vector *const vMaxBounds)
{
  vec_t v3; // xmm1_4
  vec_t v4; // xmm2_4
  vec_t v5; // xmm1_4
  vec_t v6; // xmm2_4

  v3 = fminf(vMinBounds->y, this->m_vMinBounds.y);
  v4 = fminf(vMinBounds->x, this->m_vMinBounds.x);
  this->m_vMinBounds.z = fminf(vMinBounds->z, this->m_vMinBounds.z);
  this->m_vMinBounds.y = v3;
  this->m_vMinBounds.x = v4;
  v5 = fmaxf(vMaxBounds->y, this->m_vMaxBounds.y);
  v6 = fmaxf(vMaxBounds->x, this->m_vMaxBounds.x);
  this->m_vMaxBounds.z = fmaxf(vMaxBounds->z, this->m_vMaxBounds.z);
  this->m_vMaxBounds.y = v5;
  this->m_vMaxBounds.x = v6;
}


// CSceneObjectData::SetTranslucencyType  (line 472, @0x0000000003155f40, libserver.so)
void __fastcall CSceneObjectData::SetTranslucencyType(
        CSceneObjectData *const this,
        RenderMeshTranslucencyType_t nTranslucencyType)
{
  this->m_translucencyType = nTranslucencyType;
}


// CSceneObjectData::AddDrawCall  (line 477, @0x0000000003157410, libserver.so)  // inlines: AddToTail, CopyConstruct<CMaterialDrawDescriptor>, Element, GrowMemory, operator[]
// calls: CMaterialDrawDescriptor::CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int>::Grow
void __fastcall CSceneObjectData::AddDrawCall(CSceneObjectData *const this, CMaterialDrawDescriptor *const drawCall)
{
  __int64 m_Size; // r12
  int v5; // eax
  CMaterialDrawDescriptor *v6; // rdi

  m_Size = this->m_drawCalls.m_Size;
  v5 = this->m_drawCalls.m_Size;
  if ( m_Size == this->m_drawCalls.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CMaterialDrawDescriptor,int>::Grow(&this->m_drawCalls.m_Memory, 1);
    v5 = this->m_drawCalls.m_Size;
  }
  this->m_drawCalls.m_Size = v5 + 1;
  v6 = &this->m_drawCalls.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    CMaterialDrawDescriptor::CMaterialDrawDescriptor(v6, drawCall);
}


// CSceneObjectData::AddDrawCall  (line 482, @0x0000000003157490, libserver.so)  // inlines: AddToTail, Construct<CMaterialDrawDescriptor>, Element, GrowMemory, operator[]
// calls: CMaterialDrawDescriptor::CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int>::Grow
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
CMaterialDrawDescriptor *__fastcall CSceneObjectData::AddDrawCall(CSceneObjectData *const this)
{
  __int64 m_Size; // r12
  int v3; // eax
  CMaterialDrawDescriptor *result; // rax
  __int64 v5; // r12
  CMaterialDrawDescriptor *v6; // rdi

  m_Size = this->m_drawCalls.m_Size;
  v3 = this->m_drawCalls.m_Size;
  if ( m_Size == this->m_drawCalls.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CMaterialDrawDescriptor,int>::Grow(&this->m_drawCalls.m_Memory, 1);
    v3 = this->m_drawCalls.m_Size;
  }
  this->m_drawCalls.m_Size = v3 + 1;
  result = 0;
  v5 = m_Size;
  v6 = &this->m_drawCalls.m_Memory.m_pMemory[v5];
  if ( v6 != 0 )
  {
    CMaterialDrawDescriptor::CMaterialDrawDescriptor(v6);
    return &this->m_drawCalls.m_Memory.m_pMemory[v5];
  }
  return result;
}


// CSceneObjectData::SetTintColor  (line 487, @0x0000000003155f50, libserver.so)  // inlines: operator=
void __fastcall CSceneObjectData::SetTintColor(CSceneObjectData *const this, Vector4D *const vTint)
{
  this->m_vTintColor = *vTint;
}


// CSceneObjectData::UpdateInputLayouts  (line 492, @0x0000000003155f80, libserver.so)  // inlines: operator[]
// calls: CMaterialDrawDescriptor::UpdateInputLayouts
void __fastcall CSceneObjectData::UpdateInputLayouts(CSceneObjectData *const this)
{
  int m_Size; // eax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rdi

  m_Size = this->m_drawCalls.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 40 * (5LL * (m_Size - 1) + 5);
    do
    {
      v5 = v3;
      v3 += 200;
      CMaterialDrawDescriptor::UpdateInputLayouts((this->m_drawCalls.m_Memory.m_pMemory + v5));
    }
    while ( v3 != v4 );
  }
}


// CAttachment::CAttachment  (line 504, @0x0000000003155fe0, libserver.so)  // inlines: CUtlString, Init
// callers: CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlDict<CAttachment, int>::Insert, CRenderMesh::FindOrAddAttachment, CSchemaClassBinding<CAttachment>::Allocate, CSchemaClassBinding<CAttachment>::ConstructInPlace, CSchemaClassBinding<CAttachment>::AllocateAndCopyConstruct
void __fastcall CAttachment::CAttachment(CAttachment *const this)
{
  CAttachment *v1; // rcx
  CAttachment *v2; // rax
  __int64 v3; // rdx

  v1 = this;
  v2 = this;
  this->m_name.m_pString = 0;
  v3 = 0;
  this->m_influenceNames[0].m_pString = 0;
  this->m_influenceNames[1].m_pString = 0;
  this->m_influenceNames[2].m_pString = 0;
  this->m_nInfluences = 0;
  do
  {
    v1->m_vInfluenceOffsets[0].x = 0.0;
    v2 = (v2 + 16);
    v1 = (v1 + 12);
    LODWORD(v1->m_influenceNames[2].m_pString) = 0;
    HIDWORD(v1->m_influenceNames[2].m_pString) = 0;
    v2->m_vInfluenceOffsets[1].z = 0.0;
    v2->m_vInfluenceOffsets[2].x = 0.0;
    v2->m_vInfluenceOffsets[2].y = 0.0;
    v2->m_vInfluenceOffsets[2].z = 1.0;
    this->m_influenceWeights[v3] = 0.0;
    this->m_bInfluenceRootTransform[v3++] = 0;
  }
  while ( v3 != 3 );
}


// CAttachment::SetName  (line 515, @0x0000000003156070, libserver.so)
// calls: CUtlString::operator=
void __fastcall CAttachment::SetName(CAttachment *const this, const char *pName)
{
  CUtlString::operator=(&this->m_name, pName);
}


// CAttachment::AddInfluence  (line 520, @0x0000000003156080, libserver.so)  // inlines: operator=
// calls: CUtlString::operator=
__int64 __fastcall CAttachment::AddInfluence(
        CAttachment *const this,
        const char *pName,
        const Vector *const vOffset,
        const Quaternion *const vRotation,
        float flWeight,
        bool bRootTransform)
{
  __int64 result; // rax
  __int64 m_nInfluences; // rcx
  vec_t *v11; // rdx
  uint8 v12; // al

  result = 0;
  m_nInfluences = this->m_nInfluences;
  if ( m_nInfluences <= 2u )
  {
    CUtlString::operator=(&this->m_influenceNames[m_nInfluences], pName);
    this->m_vInfluenceOffsets[this->m_nInfluences] = *vOffset;
    v11 = &this->m_vInfluenceOffsets[2].z + 4 * this->m_nInfluences;
    v11[1] = vRotation->x;
    v11[2] = vRotation->y;
    v11[3] = vRotation->z;
    v11[4] = vRotation->w;
    v12 = this->m_nInfluences;
    this->m_influenceWeights[v12] = flWeight;
    this->m_bInfluenceRootTransform[v12] = bRootTransform;
    this->m_nInfluences = v12 + 1;
    return 1;
  }
  return result;
}


// CAttachment::TransferPostLoadFn  (line 535, @0x0000000003156170, libserver.so)  // inlines: FindMember, FindSourceMember
// calls: KeyValues3::FindMember, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetStringRaw, V_stricmp_fast
// callers: CAttachment::KV3TransferLoad_CAttachment
// strings: "m_influenceFlags", "ATTACHMENT_INFLUENCE_FLAGS_NONE"
void __fastcall CAttachment::TransferPostLoadFn(CAttachment *const this, CKV3TransferLoadContext *pContext)
{
  KeyValues3 *Member; // rax
  const KeyValues3 *v4; // r13
  int ArrayElementCount; // r14d
  int v6; // ebx
  const KeyValues3 *ArrayElement; // rax
  const char *StringRaw; // rax

  Member = KeyValues3::FindMember(pContext->m_pSourceObject, "m_influenceFlags", 2124513674);
  v4 = Member;
  if ( Member != 0 )
  {
    ArrayElementCount = KeyValues3::GetArrayElementCount(Member);
    if ( ArrayElementCount > 0 )
    {
      v6 = 0;
      do
      {
        ArrayElement = KeyValues3::GetArrayElement(v4, v6);
        StringRaw = KeyValues3::GetStringRaw(ArrayElement, 0);
        this->m_bInfluenceRootTransform[0] = V_stricmp_fast(StringRaw, "ATTACHMENT_INFLUENCE_FLAGS_NONE") != 0;
        ++v6;
        this = (this + 1);
      }
      while ( v6 <= 2 && ArrayElementCount > v6 );
    }
  }
}


// CHitBoxSet::CHitBoxSet  (line 552, @0x0000000003156200, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase
// callers: CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlDict<CHitBoxSet, int>::Insert, CRenderMesh::FindOrAddHitBoxSet, CSchemaClassBinding<CHitBoxSet>::ConstructInPlace, CSchemaClassBinding<CHitBoxSet>::Allocate, CSchemaClassBinding<CHitBoxSet>::AllocateAndCopyConstruct, CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >, CHitBoxSet>::InsertMultipleBefore, CSchemaUtlVectorManipulator<CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >, CHitBoxSet>::SwapItems
void __fastcall CHitBoxSet::CHitBoxSet(CHitBoxSet *const this)
{
  this->m_name.m_pString = 0;
  this->m_HitBoxes.m_Size = 0;
  this->m_HitBoxes.m_Memory.m_pMemory = 0;
  this->m_HitBoxes.m_Memory.m_nAllocationCount = 0;
  this->m_HitBoxes.m_Memory.m_nGrowSize = 0;
  this->m_SourceFilename.m_pString = 0;
}


// CHitBoxSet::CHitBoxSet  (line 556, @0x00000000031574f0, libserver.so)  // inlines: AddToTail, CHitBox, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CHitBox>, Element, GrowMemory, Purge, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::operator=, CUtlString::Get, CUtlString::Set, CUtlMemory<CHitBox, int>::Grow, CUtlString::FreeMemoryBlock, CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::RemoveAll, _Unwind_Resume, CUtlMemory<CHitBox, int>::Purge
// callers: CHitBoxSetList::CHitBoxSetList, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode
void __fastcall CHitBoxSet::CHitBoxSet(CHitBoxSet *const this, const CHitBoxSet *const src)
{
  __int64 v4; // r15
  int i; // r14d
  CHitBox *v6; // rbx
  __int64 v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  __int64 m_Size; // rbx
  CHitBox *v12; // r12
  int v13; // eax

  this->m_name.m_pString = 0;
  this->m_HitBoxes.m_Size = 0;
  this->m_HitBoxes.m_Memory.m_pMemory = 0;
  this->m_HitBoxes.m_Memory.m_nAllocationCount = 0;
  this->m_HitBoxes.m_Memory.m_nGrowSize = 0;
  this->m_SourceFilename.m_pString = 0;
  CUtlString::operator=(&this->m_name, &src->m_name);
  v4 = 0;
  for ( i = 0; src->m_HitBoxes.m_Size > i; ++v4 )
  {
    m_Size = this->m_HitBoxes.m_Size;
    v12 = &src->m_HitBoxes.m_Memory.m_pMemory[v4];
    v13 = this->m_HitBoxes.m_Size;
    if ( m_Size == this->m_HitBoxes.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHitBox,int>::Grow(&this->m_HitBoxes.m_Memory, 1);
      v13 = this->m_HitBoxes.m_Size;
    }
    this->m_HitBoxes.m_Size = v13 + 1;
    v6 = &this->m_HitBoxes.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
    {
      *&v6->m_forcedTransform.m_flMatVal[0][0] = *&v12->m_forcedTransform.m_flMatVal[0][0];
      *&v6->m_forcedTransform.m_flMatVal[0][2] = *&v12->m_forcedTransform.m_flMatVal[0][2];
      *&v6->m_forcedTransform.m_flMatVal[1][0] = *&v12->m_forcedTransform.m_flMatVal[1][0];
      *&v6->m_forcedTransform.m_flMatVal[1][2] = *&v12->m_forcedTransform.m_flMatVal[1][2];
      *&v6->m_forcedTransform.m_flMatVal[2][0] = *&v12->m_forcedTransform.m_flMatVal[2][0];
      v7 = *&v12->m_forcedTransform.m_flMatVal[2][2];
      v6->m_name.m_pString = 0;
      *&v6->m_forcedTransform.m_flMatVal[2][2] = v7;
      v8 = CUtlString::Get(&v12->m_name);
      CUtlString::Set(&v6->m_name, v8);
      v6->m_sSurfaceProperty.m_pString = 0;
      v9 = CUtlString::Get(&v12->m_sSurfaceProperty);
      CUtlString::Set(&v6->m_sSurfaceProperty, v9);
      v6->m_sBoneName.m_pString = 0;
      v10 = CUtlString::Get(&v12->m_sBoneName);
      CUtlString::Set(&v6->m_sBoneName, v10);
      v6->m_nBoneNameHash = v12->m_nBoneNameHash;
      v6->m_nGroupId = v12->m_nGroupId;
      v6->m_cRenderColor = v12->m_cRenderColor;
      v6->m_nHitBoxIndex = v12->m_nHitBoxIndex;
      *&v6->m_vMinBounds.x = *&v12->m_vMinBounds.x;
      v6->m_vMinBounds.z = v12->m_vMinBounds.z;
      *&v6->m_vMaxBounds.x = *&v12->m_vMaxBounds.x;
      v6->m_vMaxBounds.z = v12->m_vMaxBounds.z;
      v6->m_bForcedTransform = v12->m_bForcedTransform;
      v6->m_bTranslationOnly = v12->m_bTranslationOnly;
      v6->m_bVisible = v12->m_bVisible;
      v6->m_bSelected = v12->m_bSelected;
    }
    ++i;
  }
  CUtlString::operator=(&this->m_SourceFilename, &src->m_SourceFilename);
}


// CHitBoxSet::SetName  (line 566, @0x0000000003156240, libserver.so)  // inlines: MakeStringToken
// calls: CUtlString::operator=, MurmurHash2LowerCase, RegisterStringToken
// callers: CRenderMesh::FindOrAddHitBoxSet
void __fastcall CHitBoxSet::SetName(CHitBoxSet *const this, const char *pName)
{
  uint32 v4; // eax
  uint32 v5; // [rsp+Ch] [rbp-14h]

  CUtlString::operator=(&this->m_name, pName);
  v4 = 0;
  if ( pName != 0 && *pName != 0 && (v4 = MurmurHash2LowerCase(pName, 0x31415926u), g_bUpdateStringTokenDatabase) )
  {
    v5 = v4;
    RegisterStringToken(v4, pName, 0, 1);
    this->m_nNameHash = v5;
  }
  else
  {
    this->m_nNameHash = v4;
  }
}


// CHitBoxSet::AddHitBox  (line 572, @0x00000000031577c0, libserver.so)  // inlines: AddToTail, CHitBox, CUtlString, Color, Construct<CHitBox>, Element, GrowMemory, SetColor, SetName, operator[], ~CUtlString
// calls: SetIdentityMatrix, CUtlString::Set, CUtlMemory<CHitBox, int>::Grow, CUtlString::FreeMemoryBlock, _Unwind_Resume
CHitBox *__fastcall CHitBoxSet::AddHitBox(CHitBoxSet *const this, const char *pName)
{
  __int64 m_Size; // r13
  int v5; // eax
  __int64 v6; // r13
  CHitBox *v7; // rbx
  __int64 v8; // rdx
  vec_t z; // eax
  CHitBox *v10; // r13

  m_Size = this->m_HitBoxes.m_Size;
  v5 = this->m_HitBoxes.m_Size;
  if ( m_Size == this->m_HitBoxes.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHitBox,int>::Grow(&this->m_HitBoxes.m_Memory, 1);
    v5 = this->m_HitBoxes.m_Size;
  }
  this->m_HitBoxes.m_Size = v5 + 1;
  v6 = m_Size;
  v7 = &this->m_HitBoxes.m_Memory.m_pMemory[v6];
  if ( v7 != 0 )
  {
    v7->m_name.m_pString = 0;
    v7->m_nHitBoxIndex = 0;
    v7->m_sSurfaceProperty.m_pString = 0;
    v7->m_sBoneName.m_pString = 0;
    v7->m_nBoneNameHash = 0;
    v8 = *&vec3_origin.x;
    v7->m_nGroupId = 0;
    z = vec3_origin.z;
    v7->m_cRenderColor._color[0] = -1;
    v7->m_cRenderColor._color[1] = -1;
    v7->m_cRenderColor._color[2] = -1;
    v7->m_cRenderColor._color[3] = -1;
    *&v7->m_vMinBounds.x = v8;
    v7->m_vMinBounds.z = z;
    *&v7->m_vMaxBounds.x = v8;
    v7->m_vMaxBounds.z = z;
    v7->m_bForcedTransform = 0;
    v7->m_bTranslationOnly = 0;
    v7->m_bVisible = 0;
    v7->m_bSelected = 0;
    SetIdentityMatrix(&v7->m_forcedTransform);
    v10 = &this->m_HitBoxes.m_Memory.m_pMemory[v6];
  }
  else
  {
    v10 = 0;
  }
  CUtlString::Set(&v10->m_name, pName);
  return v10;
}


// CHitBoxSet::numhitboxes  (line 579, @0x00000000031562b0, libserver.so)
// callers: CBaseAnimating::GetHitboxBone, CBaseAnimating::GetHitboxesFrontside, CBaseAnimating::HitboxToWorldTransforms, CBaseAnimating::GetGlobalHitboxIndexFromSetIndex, CBaseServerVehicle::GetEntryAnimForPoint
int __fastcall CHitBoxSet::numhitboxes(const CHitBoxSet *const this)
{
  return this->m_HitBoxes.m_Size;
}


// CHitBoxSet::pHitbox  (line 584, @0x00000000031562c0, libserver.so)  // inlines: operator[]
// callers: CBaseAnimating::GetHitboxBone, CBaseAnimating::GetHitboxesFrontside, CBaseAnimating::GetGlobalHitboxIndexFromSetIndex, CBaseServerVehicle::GetEntryAnimForPoint
const CHitBox *__fastcall CHitBoxSet::pHitbox(const CHitBoxSet *const this, int nIndex)
{
  return &this->m_HitBoxes.m_Memory.m_pMemory[nIndex];
}


// CHitBoxSetList::CHitBoxSetList  (line 589, @0x00000000031562e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CSchemaClassBinding<CHitBoxSetList>::Allocate, CSchemaClassBinding<CHitBoxSetList>::ConstructInPlace, CSchemaClassBinding<CHitBoxSetList>::AllocateAndCopyConstruct
void __fastcall CHitBoxSetList::CHitBoxSetList(CHitBoxSetList *const this)
{
  this->m_HitBoxSets.m_Size = 0;
  this->m_HitBoxSets.m_Memory.m_pMemory = 0;
  this->m_HitBoxSets.m_Memory.m_nAllocationCount = 0;
  this->m_HitBoxSets.m_Memory.m_nGrowSize = 0;
}


// CHitBoxSetList::CHitBoxSetList  (line 593, @0x0000000003157900, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHitBoxSet>, Element, GrowMemory, operator[], ~CUtlVector
// calls: CHitBoxSet::CHitBoxSet, CUtlMemory<CHitBoxSet, int>::Grow, CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CHitBoxSetList::CHitBoxSetList(CHitBoxSetList *const this, const CHitBoxSetList *const src)
{
  __int64 v4; // r14
  int m_nAllocationCount; // edx
  __int64 v6; // r12
  int v7; // r13d
  CHitBoxSet *v8; // rdi
  int m_Size; // eax
  CUtlVectorBase<CHitBoxSet,CUtlMemory<CHitBoxSet,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-40h]
  CHitBoxSet *v11; // [rsp+8h] [rbp-38h]

  this->m_HitBoxSets.m_Size = 0;
  this->m_HitBoxSets.m_Memory.m_pMemory = 0;
  this->m_HitBoxSets.m_Memory.m_nAllocationCount = 0;
  this->m_HitBoxSets.m_Memory.m_nGrowSize = 0;
  if ( src->m_HitBoxSets.m_Size > 0 )
  {
    v4 = 0;
    m_nAllocationCount = 0;
    v6 = 0;
    v7 = 0;
    p_m_Memory = &this->m_HitBoxSets.m_Memory;
    while ( 1 )
    {
      v11 = &src->m_HitBoxSets.m_Memory.m_pMemory[v4];
      m_Size = v6;
      if ( v6 == m_nAllocationCount )
      {
        CUtlMemory<CHitBoxSet,int>::Grow(p_m_Memory, 1);
        m_Size = this->m_HitBoxSets.m_Size;
      }
      this->m_HitBoxSets.m_Size = m_Size + 1;
      v8 = &this->m_HitBoxSets.m_Memory.m_pMemory[v6];
      if ( v8 != 0 )
        CHitBoxSet::CHitBoxSet(v8, v11);
      ++v7;
      ++v4;
      if ( src->m_HitBoxSets.m_Size <= v7 )
        break;
      v6 = this->m_HitBoxSets.m_Size;
      m_nAllocationCount = this->m_HitBoxSets.m_Memory.m_nAllocationCount;
    }
  }
}


// CHitBoxSetList::MakeSetVisible  (line 601, @0x0000000003156310, libserver.so)  // inlines: String, operator[]
// calls: CUtlString::Get, V_stricmp_fast
void __fastcall CHitBoxSetList::MakeSetVisible(CHitBoxSetList *const this, const char *pSetName)
{
  __int64 v2; // r14
  __int64 v4; // r13
  int v5; // r15d
  CHitBoxSet *v6; // rbx
  const char *v7; // rax
  int i; // [rsp+Ch] [rbp-34h]

  v2 = 0;
  for ( i = 0; this->m_HitBoxSets.m_Size > i; ++v2 )
  {
    v4 = 0;
    v5 = 0;
    v6 = &this->m_HitBoxSets.m_Memory.m_pMemory[v2];
    if ( v6->m_HitBoxes.m_Size > 0 )
    {
      do
      {
        v7 = CUtlString::Get(&v6->m_name);
        v6->m_HitBoxes.m_Memory.m_pMemory[v4].m_bVisible = V_stricmp_fast(v7, pSetName) == 0;
        ++v5;
        ++v4;
      }
      while ( v6->m_HitBoxes.m_Size > v5 );
    }
    ++i;
  }
}


// CHitBoxSetList::MakeBoxSelected  (line 616, @0x00000000031563b0, libserver.so)  // inlines: String, operator[]
// calls: CUtlString::Get, V_stricmp_fast
void __fastcall CHitBoxSetList::MakeBoxSelected(CHitBoxSetList *const this, const char *pSetName, const char *pBoxName)
{
  __int64 v3; // r12
  int v4; // r15d
  CHitBoxSet *v5; // r14
  CHitBox *v6; // rbx
  const char *v7; // rax
  int v8; // r13d
  const char *v9; // rax
  __int64 v11; // [rsp+10h] [rbp-50h]
  int i; // [rsp+1Ch] [rbp-44h]

  v11 = 0;
  for ( i = 0; this->m_HitBoxSets.m_Size > i; ++v11 )
  {
    v3 = 0;
    v4 = 0;
    v5 = &this->m_HitBoxSets.m_Memory.m_pMemory[v11];
    if ( v5->m_HitBoxes.m_Size > 0 )
    {
      do
      {
        v6 = &v5->m_HitBoxes.m_Memory.m_pMemory[v3];
        v7 = CUtlString::Get(&v5->m_name);
        v8 = V_stricmp_fast(v7, pSetName);
        v9 = CUtlString::Get(&v6->m_name);
        ++v4;
        ++v3;
        v6->m_bSelected = (v8 == 0) & (V_stricmp_fast(v9, pBoxName) == 0);
      }
      while ( v5->m_HitBoxes.m_Size > v4 );
    }
    ++i;
  }
}


// CRenderMesh::CRenderMesh  (line 636, @0x0000000003157b90, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CStrongHandle, CUtlDict, CUtlMap, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlRBTree, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ResetDbgInfo, SetCompareType, SetLessFunc, Vector, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: CRenderSkeleton::CRenderSkeleton, Plat_IsInDebugSessionRaw, CUtlMemory<CSceneObjectData, int>::Purge, _Unwind_Resume
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CSchemaClassBinding<CRenderMesh>::Allocate, CSchemaClassBinding<CRenderMesh>::ConstructInPlace, CSchemaClassBinding<CRenderMesh>::AllocateAndCopyConstruct
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CRenderMesh::CRenderMesh(CRenderMesh *const this)
{
  AlignedByteArray_t<1ul,CSceneObjectData> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_sceneObjects.m_Memory.m_FixedMemory;
  this->m_sceneObjects.m_Size = 0;
  this->m_sceneObjects.m_Memory.m_pMemory = 0;
  this->m_sceneObjects.m_Memory.m_nAllocationCount = 1;
  this->m_sceneObjects.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_sceneObjects.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_constraints.m_Size = 0;
  this->m_constraints.m_Memory.m_pMemory = 0;
  this->m_constraints.m_Memory.m_nAllocationCount = 0;
  this->m_constraints.m_Memory.m_nGrowSize = 0;
  CRenderSkeleton::CRenderSkeleton(&this->m_skeleton);
  this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_attachments.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_attachments.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_attachments.m_Elements.m_Tree.m_Root = -1;
  this->m_attachments.m_Elements.m_Tree.m_NumElements = 0;
  this->m_attachments.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_attachments.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_attachments.m_Elements.m_Tree.m_pElements = 0;
  this->m_attachments.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_hitboxsets.m_Elements.m_Tree.m_Root = -1;
  this->m_hitboxsets.m_Elements.m_Tree.m_NumElements = 0;
  this->m_hitboxsets.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_hitboxsets.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_hitboxsets.m_Elements.m_Tree.m_pElements = 0;
  this->m_hitboxsets.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_hV0MorphSet.m_pBinding = 0;
  this->m_pMorphSet = 0;
  this->m_vMinBounds.x = 3.4028235e38;
  this->m_vMinBounds.y = 3.4028235e38;
  this->m_vMinBounds.z = 3.4028235e38;
  this->m_vMaxBounds.x = -3.4028235e38;
  this->m_vMaxBounds.y = -3.4028235e38;
  this->m_vMaxBounds.z = -3.4028235e38;
  this->m_nVertexBuffers = 0;
  this->m_nIndexBuffers = 0;
  this->m_pVBHandles = 0;
  this->m_pIBHandles = 0;
  this->m_pIsCPUVB = 0;
  this->m_pIsCPUIB = 0;
  this->m_translucencyType = RenderMeshTranslucencyType_t::RENDERMESH_TRANSLUCENCY_FULLY_OPAQUE;
  this->m_traceDataList.m_Size = 0;
  this->m_traceDataList.m_Memory.m_pMemory = 0;
  this->m_traceDataList.m_Memory.m_nAllocationCount = 0;
  this->m_traceDataList.m_Memory.m_nGrowSize = 0;
}


// CRenderMesh::~CRenderMesh  (line 649, @0x0000000003157db0, libserver.so)  // inlines: ConvertToExternalMemory, Destruct<CSceneObjectData>, Destruct<RenderSkeletonBone_t>, Element, IsExternallyAllocated, Purge, PurgeAndDeleteElements, Purge_FixedGrowable, RemoveAll, operator[], ~CBaseConstraint, ~CRenderSkeleton, ~CSceneObjectData, ~CStrongHandle, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlRBTree, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~RenderSkeletonBone_t
// calls: operator delete [], CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::RemoveAll, CUtlString::FreeMemoryBlock, operator delete, CUtlMemory<CConstraintSlave, int>::Purge, CUtlMemory<CConstraintTarget, int>::Purge, CUtlMemory<CBaseConstraint*, int>::Purge, CMorphSet::~CMorphSet, CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown, CUtlDict<CHitBoxSet, int>::Purge, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge (22 total)
// callers: CSchemaClassBinding<CRenderMesh>::Deallocate, CSchemaClassBinding<CRenderMesh>::DestructInPlace
void __fastcall CRenderMesh::~CRenderMesh(CRenderMesh *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  TraceDataForDraw_t *v5; // rax
  TraceVertex_t *m_pTraceTriangleVertices; // rdi
  int *m_pTraceTriangleIndices; // rdi
  int *m_pTraceTriangleIndexRemapping; // rdi
  __int64 v9; // r15
  int v10; // r13d
  CBaseConstraint *v11; // r12
  bool v12; // zf
  CMorphSet *m_pMorphSet; // r12
  int v14; // r13d
  __int64 i; // r14
  CUtlString *v16; // r12
  int v17; // r13d
  __int64 j; // r14
  char *v19; // r12
  int m_nAllocationCount; // eax
  uint32 m_nGrowSize; // edx
  CRenderMesh *m_pMemory; // rsi
  uint32 v23; // eax

  m_Size = this->m_traceDataList.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 56 * ((m_Size - 1) + 1LL);
    do
    {
      v5 = &this->m_traceDataList.m_Memory.m_pMemory[v3 / 0x38];
      m_pTraceTriangleVertices = v5->m_pTraceTriangleVertices;
      if ( m_pTraceTriangleVertices != 0 )
      {
        operator delete[](m_pTraceTriangleVertices);
        v5 = &this->m_traceDataList.m_Memory.m_pMemory[v3 / 0x38];
      }
      m_pTraceTriangleIndices = v5->m_pTraceTriangleIndices;
      if ( m_pTraceTriangleIndices != 0 )
      {
        operator delete[](m_pTraceTriangleIndices);
        v5 = &this->m_traceDataList.m_Memory.m_pMemory[v3 / 0x38];
      }
      m_pTraceTriangleIndexRemapping = v5->m_pTraceTriangleIndexRemapping;
      if ( m_pTraceTriangleIndexRemapping != 0 )
        operator delete[](m_pTraceTriangleIndexRemapping);
      v3 += 56LL;
    }
    while ( v3 != v4 );
  }
  v9 = 0;
  v10 = 0;
  CUtlVectorBase<TraceDataForDraw_t,CUtlMemory<TraceDataForDraw_t,int>>::RemoveAll(&this->m_traceDataList);
  if ( this->m_constraints.m_Size > 0 )
  {
    do
    {
      v11 = this->m_constraints.m_Memory.m_pMemory[v9];
      if ( v11 != 0 )
      {
        v11->m_targets.m_Size = 0;
        v12 = (v11->m_targets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v11->_vptr_CBaseConstraint = &off_47C6F70;
        if ( v12 )
        {
          CUtlMemory<CConstraintTarget,int>::Purge(&v11->m_targets.m_Memory);
          if ( (v11->m_targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CConstraintTarget,int>::Purge(&v11->m_targets.m_Memory);
        }
        v12 = (v11->m_slaves.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v11->m_slaves.m_Size = 0;
        if ( v12 )
        {
          CUtlMemory<CConstraintSlave,int>::Purge(&v11->m_slaves.m_Memory);
          if ( (v11->m_slaves.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CConstraintSlave,int>::Purge(&v11->m_slaves.m_Memory);
        }
        if ( v11->m_name.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v11->m_name);
        operator delete(v11);
      }
      ++v10;
      ++v9;
    }
    while ( v10 < this->m_constraints.m_Size );
  }
  v12 = (this->m_constraints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_constraints.m_Size = 0;
  if ( v12 )
    CUtlMemory<CBaseConstraint *,int>::Purge(&this->m_constraints.m_Memory);
  m_pMorphSet = this->m_pMorphSet;
  if ( m_pMorphSet != 0 )
  {
    CMorphSet::~CMorphSet(this->m_pMorphSet);
    operator delete(m_pMorphSet);
  }
  this->m_pMorphSet = 0;
  CUtlVectorBase<TraceDataForDraw_t,CUtlMemory<TraceDataForDraw_t,int>>::RemoveAll(&this->m_traceDataList);
  if ( (this->m_traceDataList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<TraceDataForDraw_t,int>::Purge(&this->m_traceDataList.m_Memory);
    if ( (this->m_traceDataList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<TraceDataForDraw_t,int>::Purge(&this->m_traceDataList.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown(&this->m_hV0MorphSet);
  CUtlDict<CHitBoxSet,int>::Purge(&this->m_hitboxsets);
  CUtlRBTree<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_hitboxsets.m_Elements.m_Tree);
  if ( (this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_hitboxsets.m_Elements.m_Tree.m_Elements);
  CUtlDict<CAttachment,int>::Purge(&this->m_attachments);
  CUtlRBTree<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_attachments.m_Elements.m_Tree);
  if ( (this->m_attachments.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_attachments.m_Elements.m_Tree.m_Elements);
  v12 = (this->m_skeleton.m_boneParents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeleton.m_boneParents.m_Size = 0;
  if ( v12 )
  {
    CUtlMemory<int,int>::Purge(&this->m_skeleton.m_boneParents.m_Memory);
    if ( (this->m_skeleton.m_boneParents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_skeleton.m_boneParents.m_Memory);
  }
  v12 = (this->m_skeleton.m_boneHashes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeleton.m_boneHashes.m_Size = 0;
  if ( v12 )
  {
    CUtlMemory<CUtlStringToken,int>::Purge(&this->m_skeleton.m_boneHashes.m_Memory);
    if ( (this->m_skeleton.m_boneHashes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlStringToken,int>::Purge(&this->m_skeleton.m_boneHashes.m_Memory);
  }
  v14 = this->m_skeleton.m_bones.m_Size;
  for ( i = 96LL * v14 - 96; --v14 >= 0; i -= 96 )
  {
    v16 = (&this->m_skeleton.m_bones.m_Memory.m_pMemory->m_boneName + i);
    if ( v16[1].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v16 + 1);
    if ( v16->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v16);
  }
  v12 = (this->m_skeleton.m_bones.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeleton.m_bones.m_Size = 0;
  if ( !v12
    || (CUtlMemory<RenderSkeletonBone_t,int>::Purge(&this->m_skeleton.m_bones.m_Memory),
        (this->m_skeleton.m_bones.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v12 = (this->m_constraints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_constraints.m_Size = 0;
    if ( !v12 )
      goto LABEL_43;
  }
  else
  {
    CUtlMemory<RenderSkeletonBone_t,int>::Purge(&this->m_skeleton.m_bones.m_Memory);
    v12 = (this->m_constraints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_constraints.m_Size = 0;
    if ( !v12 )
      goto LABEL_43;
  }
  CUtlMemory<CBaseConstraint *,int>::Purge(&this->m_constraints.m_Memory);
  if ( (this->m_constraints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CBaseConstraint *,int>::Purge(&this->m_constraints.m_Memory);
LABEL_43:
  v17 = this->m_sceneObjects.m_Size;
  for ( j = 72LL * this->m_sceneObjects.m_Size - 72; --v17 >= 0; j -= 72 )
  {
    v19 = this->m_sceneObjects.m_Memory.m_pMemory + j;
    CUtlVectorBase<CMaterialDrawDescriptor,CUtlMemory<CMaterialDrawDescriptor,int>>::RemoveAll((v19 + 32));
    if ( (*(v19 + 13) & 0xC0000000) == 0 )
    {
      CUtlMemory<CMaterialDrawDescriptor,int>::Purge((v19 + 40));
      if ( (*(v19 + 13) & 0xC0000000) == 0 )
        CUtlMemory<CMaterialDrawDescriptor,int>::Purge((v19 + 40));
    }
  }
  m_nAllocationCount = this->m_sceneObjects.m_Memory.m_nAllocationCount;
  this->m_sceneObjects.m_Size = 0;
  if ( m_nAllocationCount < 0 )
  {
    v23 = this->m_sceneObjects.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_sceneObjects.m_Memory.m_nGrowSize;
    m_pMemory = this->m_sceneObjects.m_Memory.m_pMemory;
    v23 = m_nGrowSize & 0xC0000000;
    if ( &this->m_sceneObjects.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v23 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_sceneObjects.m_Memory.m_nGrowSize;
      }
      this->m_sceneObjects.m_Memory.m_pMemory = &this->m_sceneObjects.m_Memory.m_FixedMemory;
      this->m_sceneObjects.m_Memory.m_nAllocationCount = 1;
      this->m_sceneObjects.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      return;
    }
  }
  if ( v23 == 0 )
    CUtlMemory<CSceneObjectData,int>::Purge(&this->m_sceneObjects.m_Memory);
}


// CRenderMesh::UpdateBounds  (line 678, @0x0000000003156490, libserver.so)  // inlines: Init, VectorMax, VectorMin, fpmax, fpmin
void __fastcall CRenderMesh::UpdateBounds(CRenderMesh *const this)
{
  int m_Size; // eax
  float v2; // xmm6_4
  float v3; // xmm7_4
  CSceneObjectData *m_pMemory; // rsi
  float v5; // xmm11_4
  float v6; // xmm10_4
  float v7; // xmm9_4
  float v8; // xmm8_4
  __int64 v9; // r8
  float *p_x; // rax
  Vector *p_m_vMaxBounds; // rcx
  float v12; // xmm5_4
  float *v13; // rdx
  signed __int64 v14; // rdx
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4

  m_Size = this->m_sceneObjects.m_Size;
  if ( this->m_sceneObjects.m_Size != 0 )
  {
    v2 = 3.4028235e38;
    v3 = -3.4028235e38;
    this->m_vMinBounds.x = 3.4028235e38;
    this->m_vMinBounds.y = 3.4028235e38;
    this->m_vMinBounds.z = 3.4028235e38;
    this->m_vMaxBounds.x = -3.4028235e38;
    this->m_vMaxBounds.y = -3.4028235e38;
    this->m_vMaxBounds.z = -3.4028235e38;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_sceneObjects.m_Memory.m_pMemory;
      v5 = -3.4028235e38;
      v6 = -3.4028235e38;
      v7 = 3.4028235e38;
      v8 = 3.4028235e38;
      v9 = &m_pMemory[(m_Size - 1) + 1];
      p_x = &m_pMemory->m_vMinBounds.x;
      p_m_vMaxBounds = &m_pMemory->m_vMaxBounds;
      while ( 1 )
      {
        v12 = *p_x;
        v13 = p_x;
        p_x += 18;
        v14 = v13 - m_pMemory;
        v15 = fminf(v12, v8);
        this->m_vMinBounds.x = v15;
        v16 = fminf(*(p_x - 17), v7);
        this->m_vMinBounds.y = v16;
        v17 = fminf(*(p_x - 16), v2);
        this->m_vMinBounds.z = v17;
        v18 = fmaxf(*(&p_m_vMaxBounds->x + v14), v6);
        this->m_vMaxBounds.x = v18;
        v19 = fmaxf(*(&p_m_vMaxBounds->y + v14), v5);
        this->m_vMaxBounds.y = v19;
        v20 = fmaxf(*(&p_m_vMaxBounds->z + v14), v3);
        this->m_vMaxBounds.z = v20;
        if ( p_x == v9 )
          break;
        v8 = v15;
        v7 = v16;
        v2 = v17;
        v6 = v18;
        v5 = v19;
        v3 = v20;
      }
    }
  }
  else
  {
    this->m_vMinBounds.x = 0.0;
    this->m_vMinBounds.y = 0.0;
    this->m_vMinBounds.z = 0.0;
    this->m_vMaxBounds.x = 0.0;
    this->m_vMaxBounds.y = 0.0;
    this->m_vMaxBounds.z = 0.0;
  }
}


// CRenderMesh::GetBounds  (line 698, @0x00000000031565f0, libserver.so)  // inlines: operator=
// callers: CModel::GetMeshBounds
void __fastcall CRenderMesh::GetBounds(
        const CRenderMesh *const this,
        Vector *const vMinBounds,
        Vector *const vMaxBounds)
{
  *vMinBounds = this->m_vMinBounds;
  *vMaxBounds = this->m_vMaxBounds;
}


// CRenderMesh::GetMorphSet  (line 704, @0x0000000003156650, libserver.so)
// callers: CModelBuilder::AppendFlexControllers
const CMorphSet *__fastcall CRenderMesh::GetMorphSet(const CRenderMesh *const this)
{
  return this->m_pMorphSet;
}


// CRenderMesh::GetMorphSetData  (line 710, @0x0000000003156660, libserver.so)  // inlines: GetMorphSet
// callers: CModelBuilder::AppendSkeletonsFromChildResources
const CMorphSetData *__fastcall CRenderMesh::GetMorphSetData(const CRenderMesh *const this)
{
  CMorphSet *m_pMorphSet; // rax

  m_pMorphSet = this->m_pMorphSet;
  if ( m_pMorphSet != 0 )
    return m_pMorphSet->m_pMorphSetData;
  else
    return 0;
}


// CRenderMesh::GetNumFlexDescs  (line 720, @0x0000000003156680, libserver.so)  // inlines: GetMorphSet
int __fastcall CRenderMesh::GetNumFlexDescs(const CRenderMesh *const this)
{
  CMorphSet *m_pMorphSet; // rdx
  int result; // eax

  m_pMorphSet = this->m_pMorphSet;
  result = 0;
  if ( m_pMorphSet != 0 )
    return m_pMorphSet->m_descMappings.m_Size;
  return result;
}


// CRenderMesh::GetNumFlexControllers  (line 730, @0x00000000031566a0, libserver.so)  // inlines: GetMorphSet
int __fastcall CRenderMesh::GetNumFlexControllers(const CRenderMesh *const this)
{
  CMorphSet *m_pMorphSet; // rdx
  int result; // eax

  m_pMorphSet = this->m_pMorphSet;
  result = 0;
  if ( m_pMorphSet != 0 )
    return m_pMorphSet->m_controllerMappings.m_Size;
  return result;
}


// CRenderMesh::GetTranslucencyType  (line 740, @0x00000000031566c0, libserver.so)
RenderMeshTranslucencyType_t __fastcall CRenderMesh::GetTranslucencyType(const CRenderMesh *const this)
{
  return this->m_translucencyType;
}


// CRenderMesh::GetNumBones  (line 745, @0x00000000031566d0, libserver.so)
int __fastcall CRenderMesh::GetNumBones(const CRenderMesh *const this)
{
  return this->m_skeleton.m_bones.m_Size;
}


// CRenderMesh::GetNumRemapIndices  (line 750, @0x00000000031566e0, libserver.so)  // inlines: GetMorphSet, GetNumFlexControllers
int __fastcall CRenderMesh::GetNumRemapIndices(const CRenderMesh *const this)
{
  CMorphSet *m_pMorphSet; // rdx
  int m_Size; // eax

  m_pMorphSet = this->m_pMorphSet;
  m_Size = 0;
  if ( m_pMorphSet != 0 )
    m_Size = m_pMorphSet->m_controllerMappings.m_Size;
  return this->m_skeleton.m_bones.m_Size + m_Size;
}


// CRenderMesh::InstancePartitionIndex  (line 757, @0x0000000003156700, libserver.so)
int __fastcall CRenderMesh::InstancePartitionIndex(CRenderMesh *const this, CMeshInstance *pInstance)
{
  return (pInstance >> 4) & 0x1F;
}


// CRenderMesh::AddSceneObject  (line 763, @0x00000000031579d0, libserver.so)  // inlines: AddToTail, Construct<CSceneObjectData>, Element, GrowMemory, operator[]
// calls: CSceneObjectData::CSceneObjectData, CSceneObjectData::Init, CUtlMemory<CSceneObjectData, int>::Grow
void __fastcall CRenderMesh::AddSceneObject(CRenderMesh *const this, CSceneObjectData *const sceneObject)
{
  __int64 m_Size; // r12
  int v5; // eax
  __int64 v6; // r12
  CSceneObjectData *v7; // rax
  CSceneObjectData *v8; // rdi

  m_Size = this->m_sceneObjects.m_Size;
  v5 = this->m_sceneObjects.m_Size;
  if ( m_Size == this->m_sceneObjects.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CSceneObjectData,int>::Grow(&this->m_sceneObjects.m_Memory, 1);
    v5 = this->m_sceneObjects.m_Size;
  }
  v6 = m_Size;
  this->m_sceneObjects.m_Size = v5 + 1;
  v7 = 0;
  v8 = &this->m_sceneObjects.m_Memory.m_pMemory[v6];
  if ( v8 != 0 )
  {
    CSceneObjectData::CSceneObjectData(v8);
    v7 = &this->m_sceneObjects.m_Memory.m_pMemory[v6];
  }
  CSceneObjectData::Init(v7, sceneObject);
}


// CRenderMesh::AddSceneObject  (line 770, @0x0000000003157a50, libserver.so)  // inlines: AddToTail, Construct<CSceneObjectData>, Element, GrowMemory, operator[]
// calls: CSceneObjectData::CSceneObjectData, CUtlMemory<CSceneObjectData, int>::Grow
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
CSceneObjectData *__fastcall CRenderMesh::AddSceneObject(CRenderMesh *const this)
{
  __int64 m_Size; // r12
  int v3; // eax
  __int64 v4; // r12
  CSceneObjectData *result; // rax
  CSceneObjectData *v6; // rdi

  m_Size = this->m_sceneObjects.m_Size;
  v3 = this->m_sceneObjects.m_Size;
  if ( m_Size == this->m_sceneObjects.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CSceneObjectData,int>::Grow(&this->m_sceneObjects.m_Memory, 1);
    v3 = this->m_sceneObjects.m_Size;
  }
  v4 = m_Size;
  this->m_sceneObjects.m_Size = v3 + 1;
  result = 0;
  v6 = &this->m_sceneObjects.m_Memory.m_pMemory[v4];
  if ( v6 != 0 )
  {
    CSceneObjectData::CSceneObjectData(v6);
    return &this->m_sceneObjects.m_Memory.m_pMemory[v4];
  }
  return result;
}


// CRenderMesh::FindOrAddAttachment  (line 775, @0x0000000003158c40, libserver.so)  // inlines: Element, Find, LeftChild, Node_t, RightChild, SetName, operator(), operator[], ~CAttachment, ~CUtlString, ~Node_t
// calls: CAttachment::CAttachment, CUtlString::FreeMemoryBlock, CUtlDict<CAttachment, int>::Insert, CUtlString::operator=, CAttachment::~CAttachment, _Unwind_Resume
// callers: CRenderMesh::InitFromOldDiskData
CAttachment *__fastcall CRenderMesh::FindOrAddAttachment(CRenderMesh *const this, const char *pName, bool *pDidAdd)
{
  __int64 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  unsigned __int64 v7; // rbx
  CAttachment *m_vInfluenceOffsets; // r15
  __int64 v9; // rbx
  int v11; // eax
  const char *v14; // [rsp+10h] [rbp-C0h] BYREF
  CAttachment v15; // [rsp+18h] [rbp-B8h] BYREF

  if ( pName == 0 )
    goto LABEL_20;
  CAttachment::CAttachment(&v15);
  m_Root = this->m_attachments.m_Elements.m_Tree.m_Root;
  v14 = pName;
  if ( m_Root == -1 )
  {
LABEL_8:
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = m_Root;
        if ( !this->m_attachments.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v14, &m_pMemory[v7].m_Data) )
          break;
        m_pMemory = this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_8;
      }
      if ( !this->m_attachments.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data,
              &v14) )
        break;
      m_pMemory = this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v7].m_Right;
      if ( m_Root == -1 )
        goto LABEL_8;
    }
  }
  m_vInfluenceOffsets = v15.m_vInfluenceOffsets;
  do
  {
    m_vInfluenceOffsets = (m_vInfluenceOffsets - 8);
    if ( m_vInfluenceOffsets->m_name.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&m_vInfluenceOffsets->m_name);
  }
  while ( m_vInfluenceOffsets != v15.m_influenceNames );
  if ( v15.m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v15.m_name);
  if ( m_Root == -1 )
  {
LABEL_20:
    v11 = CUtlDict<CAttachment,int>::Insert(&this->m_attachments, pName);
    if ( pDidAdd != 0 )
      *pDidAdd = 1;
    v9 = v11;
    CUtlString::operator=(&this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem.m_name, pName);
  }
  else
  {
    if ( pDidAdd != 0 )
      *pDidAdd = 0;
    v9 = m_Root;
  }
  return &this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
}


// CRenderMesh::FindOrAddHitBoxSet  (line 793, @0x0000000003158de0, libserver.so)  // inlines: Element, Find, LeftChild, Node_t, Purge, RightChild, operator(), operator[], ~CHitBoxSet, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~Node_t
// calls: CHitBoxSet::CHitBoxSet, CUtlString::FreeMemoryBlock, CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::RemoveAll, CUtlMemory<CHitBox, int>::Purge, CUtlDict<CHitBoxSet, int>::Insert, CHitBoxSet::SetName, CHitBoxSet::~CHitBoxSet, _Unwind_Resume
// callers: CRenderMesh::InitFromOldDiskData
CHitBoxSet *__fastcall CRenderMesh::FindOrAddHitBoxSet(CRenderMesh *const this, const char *pName, bool *pDidAdd)
{
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  int v10; // eax
  const char *v13; // [rsp+10h] [rbp-70h] BYREF
  CHitBoxSet v14[2]; // [rsp+18h] [rbp-68h] BYREF

  if ( pName == 0 )
    goto LABEL_21;
  CHitBoxSet::CHitBoxSet(v14);
  v13 = pName;
  m_Root = this->m_hitboxsets.m_Elements.m_Tree.m_Root;
  if ( m_Root == -1 )
  {
LABEL_8:
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = m_Root;
        if ( !this->m_hitboxsets.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v13, &m_pMemory[v7].m_Data) )
          break;
        m_pMemory = this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_8;
      }
      if ( !this->m_hitboxsets.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data,
              &v13) )
        break;
      m_pMemory = this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v7].m_Right;
      if ( m_Root == -1 )
        goto LABEL_8;
    }
  }
  if ( v14[0].m_SourceFilename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v14[0].m_SourceFilename);
  CUtlVectorBase<CHitBox,CUtlMemory<CHitBox,int>>::RemoveAll(&v14[0].m_HitBoxes);
  if ( (v14[0].m_HitBoxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHitBox,int>::Purge(&v14[0].m_HitBoxes.m_Memory);
    if ( (v14[0].m_HitBoxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHitBox,int>::Purge(&v14[0].m_HitBoxes.m_Memory);
  }
  if ( v14[0].m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v14[0].m_name);
  if ( m_Root == -1 )
  {
LABEL_21:
    v10 = CUtlDict<CHitBoxSet,int>::Insert(&this->m_hitboxsets, pName);
    if ( pDidAdd != 0 )
      *pDidAdd = 1;
    v8 = v10;
    CHitBoxSet::SetName(&this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem, pName);
  }
  else
  {
    if ( pDidAdd != 0 )
      *pDidAdd = 0;
    v8 = m_Root;
  }
  return &this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
}


// CRenderMesh::SetMorphSet_V0Internal  (line 812, @0x0000000003156eb0, libserver.so)  // inlines: GetBinding, Init, ThreadInterlockedIncrement, operator++, operator=
// calls: CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown
void __fastcall CRenderMesh::SetMorphSet_V0Internal(CRenderMesh *const this, HMorphSet_Internal hMorphSet)
{
  HMorphSet_InternalStrong *p_m_hV0MorphSet; // r13
  ResourceBindingBase_t *m_pData; // r12
  const ResourceBindingBase_t *m_pBinding; // rsi

  p_m_hV0MorphSet = &this->m_hV0MorphSet;
  m_pData = hMorphSet.m_pBinding->m_pData;
  if ( this->m_hV0MorphSet.m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown(&this->m_hV0MorphSet);
  this->m_hV0MorphSet.m_pBinding = m_pData;
  if ( m_pData != 0 )
  {
    m_pBinding = m_pData;
    if ( (m_pData->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pData, 2, p_m_hV0MorphSet);
      m_pBinding = this->m_hV0MorphSet.m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
}


// CRenderMesh::ConvertV0MorphSetToRuntime  (line 817, @0x0000000003156f30, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeMorphSetData_t>, GetData, GetResourceName, GetResourceName<512ul>, Init, ResourceGetName, String, V_strncpy<int>, operator=
// calls: operator new, CMorphSet::CMorphSet, _V_strncpy, CMorphSet::InitFromV0Data, CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: CModel::InitFromV0Data
void __fastcall CRenderMesh::ConvertV0MorphSetToRuntime(CRenderMesh *const this, CConvertOldDiskCtx *const convertCtx)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  CMorphSet *v5; // r12
  const ResourceBindingBase_t *v6; // rax
  const char **m_Name; // rax
  const char *v8; // rsi
  const ResourceBindingBase_t *v9; // rax
  const MorphSetData_t *m_pData; // rdx
  char pResourceName[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v12; // [rsp+208h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  m_pBinding = this->m_hV0MorphSet.m_pBinding;
  if ( m_pBinding != 0 && m_pBinding->m_pData != 0 )
  {
    v5 = operator new(0x88u);
    CMorphSet::CMorphSet(v5);
    v6 = this->m_hV0MorphSet.m_pBinding;
    this->m_pMorphSet = v5;
    if ( v6 != 0 && (m_Name = v6->m_Name) != 0 )
    {
      v8 = "";
      if ( *m_Name != 0 )
        v8 = *m_Name;
      _V_strncpy(pResourceName, v8, 512);
    }
    else
    {
      _V_strncpy(pResourceName, "", 512);
    }
    v9 = this->m_hV0MorphSet.m_pBinding;
    if ( v9 != 0 )
      m_pData = v9->m_pData;
    else
      m_pData = 0;
    CMorphSet::InitFromV0Data(this->m_pMorphSet, convertCtx, m_pData, pResourceName);
    if ( this->m_hV0MorphSet.m_pBinding != 0 )
      CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown(&this->m_hV0MorphSet);
    this->m_hV0MorphSet.m_pBinding = 0;
  }
}


// CRenderMesh::AddBone  (line 827, @0x0000000003157240, libserver.so)
// calls: CRenderSkeleton::AddBone
void __fastcall CRenderMesh::AddBone(CRenderMesh *const this, RenderSkeletonBone_t *const bone)
{
  CRenderSkeleton::AddBone(&this->m_skeleton, bone);
}


// CRenderMesh::BuildHitboxIndices  (line 832, @0x0000000003156710, libserver.so)
void __fastcall CRenderMesh::BuildHitboxIndices(CRenderMesh *const this)
{
  int m_NumElements; // eax
  unsigned __int64 v2; // rsi
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // r9
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  int m_Size; // r8d
  int v8; // r8d
  __int64 v9; // rdx

  m_NumElements = this->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements > 0 )
  {
    v2 = 0;
    v3 = 9LL * (m_NumElements - 1) + 9;
    v4 = 0;
    v5 = 8 * v3;
    do
    {
      m_pMemory = this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Size = m_pMemory[v2 / 0x48].m_Data.elem.m_HitBoxes.m_Size;
      if ( m_Size > 0 )
      {
        v8 = v4 + m_Size;
        v9 = 0;
        while ( 1 )
        {
          m_pMemory[v2 / 0x48].m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[v9++].m_nHitBoxIndex = v4++;
          if ( v4 == v8 )
            break;
          m_pMemory = this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
        }
      }
      v2 += 72LL;
    }
    while ( v2 != v5 );
  }
}


// SaveUtlDict<CAttachment>  (line 849, @0x000000000315a470, libserver.so)  // inlines: Element, First, FirstInorder, GetElementName, Key, LeftChild, Next, NextInorder, operator[]
// calls: KeyValues3::FindOrCreateMember, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::SetMemberString, CKV3TransferSaveContext::SaveClassPointer<const CAttachment>, CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder
// callers: CRenderMesh::TransferPostSaveFn
void __fastcall SaveUtlDict<CAttachment>(
        const CUtlDict<CAttachment,int> *pDict,
        const char *pName,
        CKV3TransferSaveContext *pContext)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rsi
  __int64 v7; // r15
  int m_Left; // ecx
  __int64 v9; // r15
  KeyValues3 *ArrayElement; // r13
  KeyValues3 *Member; // rax
  KeyValues3 *pDictList; // [rsp+8h] [rbp-48h]
  const CAttachment *p_elem; // [rsp+18h] [rbp-38h] BYREF

  pDictList = KeyValues3::FindOrCreateMember(pContext->m_pTargetObject, pName, 0);
  KeyValues3::SetArrayElementCount(pDictList, pDict->m_Elements.m_Tree.m_NumElements);
  m_Root = pDict->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = pDict->m_Elements.m_Tree.m_Elements.m_pMemory;
    v7 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( m_pMemory[m_Left].m_Left != -1 )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
      v7 = m_Left;
    }
    while ( 1 )
    {
      v9 = v7;
      ArrayElement = KeyValues3::GetArrayElement(pDictList, m_Root);
      KeyValues3::SetMemberString(ArrayElement, "key", pDict->m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data.key, 0);
      Member = KeyValues3::FindOrCreateMember(ArrayElement, "value", 0);
      p_elem = &pDict->m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
      CKV3TransferSaveContext::SaveClassPointer<CAttachment const>(pContext, &p_elem, Member);
      m_Root = CUtlRBTree<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &pDict->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      v7 = m_Root;
    }
  }
}


// SaveUtlDict<CHitBoxSet>  (line 849, @0x000000000315a630, libserver.so)  // inlines: Element, First, FirstInorder, GetElementName, Key, LeftChild, Next, NextInorder, operator[]
// calls: KeyValues3::FindOrCreateMember, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::SetMemberString, CKV3TransferSaveContext::SaveClassPointer<const CHitBoxSet>, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder
// callers: CRenderMesh::TransferPostSaveFn
void __fastcall SaveUtlDict<CHitBoxSet>(
        const CUtlDict<CHitBoxSet,int> *pDict,
        const char *pName,
        CKV3TransferSaveContext *pContext)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rsi
  __int64 v7; // r15
  int m_Left; // ecx
  __int64 v9; // r15
  KeyValues3 *ArrayElement; // r13
  KeyValues3 *Member; // rax
  KeyValues3 *pDictList; // [rsp+8h] [rbp-48h]
  const CHitBoxSet *p_elem; // [rsp+18h] [rbp-38h] BYREF

  pDictList = KeyValues3::FindOrCreateMember(pContext->m_pTargetObject, pName, 0);
  KeyValues3::SetArrayElementCount(pDictList, pDict->m_Elements.m_Tree.m_NumElements);
  m_Root = pDict->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = pDict->m_Elements.m_Tree.m_Elements.m_pMemory;
    v7 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( m_pMemory[m_Left].m_Left != -1 )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
      v7 = m_Left;
    }
    while ( 1 )
    {
      v9 = v7;
      ArrayElement = KeyValues3::GetArrayElement(pDictList, m_Root);
      KeyValues3::SetMemberString(ArrayElement, "key", pDict->m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data.key, 0);
      Member = KeyValues3::FindOrCreateMember(ArrayElement, "value", 0);
      p_elem = &pDict->m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
      CKV3TransferSaveContext::SaveClassPointer<CHitBoxSet const>(pContext, &p_elem, Member);
      m_Root = CUtlRBTree<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &pDict->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      v7 = m_Root;
    }
  }
}


// CRenderMesh::TransferPostSaveFn  (line 867, @0x0000000003157ab0, libserver.so)  // inlines: CreateTargetMember, FindInterface<IKV3TransferInterface_ResourceSave>, SaveValue<CStrongHandle<InfoForResourceTypeMorphSetData_t> >, SaveValueDirect<CStrongHandle<InfoForResourceTypeMorphSetData_t> >, SaveValueToMember<CStrongHandle<InfoForResourceTypeMorphSetData_t> >
// calls: SaveUtlDict<CAttachment>, SaveUtlDict<CHitBoxSet>, KeyValues3::FindMember, CKV3TransferContextBase::NoteFailure, CKV3TransferContextBase::FindInterfaceVoid, KeyValues3::SetMemberToNull
// callers: CRenderMesh::KV3TransferSave_CRenderMesh
// strings: "m_attachments", "m_hitboxsets", "m_morphSet", "Double-save to Member '%s'"
void __fastcall CRenderMesh::TransferPostSaveFn(const CRenderMesh *const this, CKV3TransferSaveContext *pContext)
{
  KeyValues3 *Member; // r13
  void *InterfaceVoid; // rax

  SaveUtlDict<CAttachment>(&this->m_attachments, "m_attachments", pContext);
  SaveUtlDict<CHitBoxSet>(&this->m_hitboxsets, "m_hitboxsets", pContext);
  Member = KeyValues3::FindMember(pContext->m_pTargetObject, "m_morphSet", 2134144873);
  if ( Member != 0 )
    CKV3TransferContextBase::NoteFailure(pContext, "Double-save to Member '%s'", "m_morphSet");
  else
    Member = KeyValues3::SetMemberToNull(pContext->m_pTargetObject, "m_morphSet", 2134144873);
  InterfaceVoid = CKV3TransferContextBase::FindInterfaceVoid(pContext, 0x53534552u);
  (*(*InterfaceVoid + 8LL))(InterfaceVoid, pContext, Member, 0x66726F6D76LL, &this->m_hV0MorphSet);
}


// LoadUtlDict<CAttachment>  (line 879, @0x000000000315bb60, libserver.so)  // inlines: Element, FindMember, LoadClassInstance<CAttachment>, operator[]
// calls: KeyValues3::FindMember, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetMemberString, CUtlDict<CAttachment, int>::Insert, CKV3TransferLoadContext::PushSource, CAttachment::KV3TransferLoad, CKV3TransferLoadContext::PopSource, __stack_chk_fail
// callers: CRenderMesh::TransferPostLoadFn
void __fastcall LoadUtlDict<CAttachment>(
        CUtlDict<CAttachment,int> *pDict,
        const char *pName,
        CKV3TransferLoadContext *pContext)
{
  KeyValues3 *Member; // rax
  int v6; // ebx
  KeyValues3 *ArrayElement; // r15
  KeyValues3 *v8; // r15
  int ArrayElementCount; // [rsp+Ch] [rbp-154h]
  const KeyValues3 *pDictList; // [rsp+10h] [rbp-150h]
  CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::ElemType_t *valueType; // [rsp+18h] [rbp-148h]
  char pKeyName[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+128h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  Member = KeyValues3::FindMember(pContext->m_pSourceObject, pName, 0);
  pDictList = Member;
  if ( Member != 0 )
  {
    v6 = 0;
    ArrayElementCount = KeyValues3::GetArrayElementCount(Member);
    if ( ArrayElementCount > 0 )
    {
      do
      {
        ArrayElement = KeyValues3::GetArrayElement(pDictList, v6);
        KeyValues3::GetMemberString(ArrayElement, "key", pKeyName, 260, "", 0);
        v8 = KeyValues3::FindMember(ArrayElement, "value", 0);
        if ( v8 != 0 )
        {
          valueType = &pDict->m_Elements.m_Tree.m_Elements.m_pMemory[CUtlDict<CAttachment,int>::Insert(pDict, pKeyName)].m_Data.elem;
          CKV3TransferLoadContext::PushSource(pContext, v8);
          CAttachment::KV3TransferLoad(valueType, pContext);
          CKV3TransferLoadContext::PopSource(pContext);
        }
        ++v6;
      }
      while ( v6 != ArrayElementCount );
    }
  }
}


// LoadUtlDict<CHitBoxSet>  (line 879, @0x000000000315c2b0, libserver.so)  // inlines: Element, FindMember, LoadClassInstance<CHitBoxSet>, operator[]
// calls: KeyValues3::FindMember, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetMemberString, CUtlDict<CHitBoxSet, int>::Insert, CKV3TransferLoadContext::PushSource, CHitBoxSet::KV3TransferLoad, CKV3TransferLoadContext::PopSource, __stack_chk_fail
// callers: CRenderMesh::TransferPostLoadFn
void __fastcall LoadUtlDict<CHitBoxSet>(
        CUtlDict<CHitBoxSet,int> *pDict,
        const char *pName,
        CKV3TransferLoadContext *pContext)
{
  KeyValues3 *Member; // rax
  int v6; // ebx
  KeyValues3 *ArrayElement; // r15
  KeyValues3 *v8; // r15
  int ArrayElementCount; // [rsp+Ch] [rbp-154h]
  const KeyValues3 *pDictList; // [rsp+10h] [rbp-150h]
  CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::ElemType_t *valueType; // [rsp+18h] [rbp-148h]
  char pKeyName[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+128h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  Member = KeyValues3::FindMember(pContext->m_pSourceObject, pName, 0);
  pDictList = Member;
  if ( Member != 0 )
  {
    v6 = 0;
    ArrayElementCount = KeyValues3::GetArrayElementCount(Member);
    if ( ArrayElementCount > 0 )
    {
      do
      {
        ArrayElement = KeyValues3::GetArrayElement(pDictList, v6);
        KeyValues3::GetMemberString(ArrayElement, "key", pKeyName, 260, "", 0);
        v8 = KeyValues3::FindMember(ArrayElement, "value", 0);
        if ( v8 != 0 )
        {
          valueType = &pDict->m_Elements.m_Tree.m_Elements.m_pMemory[CUtlDict<CHitBoxSet,int>::Insert(pDict, pKeyName)].m_Data.elem;
          CKV3TransferLoadContext::PushSource(pContext, v8);
          CHitBoxSet::KV3TransferLoad(valueType, pContext);
          CKV3TransferLoadContext::PopSource(pContext);
        }
        ++v6;
      }
      while ( v6 != ArrayElementCount );
    }
  }
}


// CRenderMesh::TransferPostLoadFn  (line 909, @0x0000000003158f90, libserver.so)  // inlines: FindInterface<IKV3TransferInterface_ResourceLoad>, FindMember, FindSourceMember, LoadValue<CStrongHandle<InfoForResourceTypeMorphSetData_t> >, LoadValueDirect<CStrongHandle<InfoForResourceTypeMorphSetData_t> >, LoadValueFromMember<CStrongHandle<InfoForResourceTypeMorphSetData_t> >
// calls: LoadUtlDict<CAttachment>, LoadUtlDict<CHitBoxSet>, KeyValues3::FindMember, CKV3TransferContextBase::FindInterfaceVoid, KeyValues3::KeyValues3, KeyValues3::~KeyValues3, __stack_chk_fail, _Unwind_Resume
// callers: CRenderMesh::KV3TransferLoad_CRenderMesh
// strings: "m_attachments", "m_hitboxsets", "m_morphSet"
void __fastcall CRenderMesh::TransferPostLoadFn(CRenderMesh *const this, CKV3TransferLoadContext *pContext)
{
  KeyValues3 *Member; // r13
  void *InterfaceVoid; // rax
  void *v6; // rax
  KeyValues3 v7; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  LoadUtlDict<CAttachment>(&this->m_attachments, "m_attachments", pContext);
  LoadUtlDict<CHitBoxSet>(&this->m_hitboxsets, "m_hitboxsets", pContext);
  Member = KeyValues3::FindMember(pContext->m_pSourceObject, "m_morphSet", 2134144873);
  if ( Member != 0 )
  {
    InterfaceVoid = CKV3TransferContextBase::FindInterfaceVoid(pContext, 0x4C534552u);
    (*(*InterfaceVoid + 8LL))(InterfaceVoid, pContext, Member, 0x66726F6D76LL, &this->m_hV0MorphSet);
  }
  else
  {
    KeyValues3::KeyValues3(&v7);
    v6 = CKV3TransferContextBase::FindInterfaceVoid(pContext, 0x4C534552u);
    (*(*v6 + 8LL))(v6, pContext, &v7, 0x66726F6D76LL, &this->m_hV0MorphSet);
    KeyValues3::~KeyValues3(&v7);
  }
}


// TraceDataForDraw_t::GetUnRemappedVerticesAndIndices  (line 920, @0x0000000003158740, libserver.so)  // inlines: AllocSize, CopyArray, V_memset, memset, operator=, operator[]
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >::SetCount, memset
void __fastcall TraceDataForDraw_t::GetUnRemappedVerticesAndIndices(
        const TraceDataForDraw_t_0 *const this,
        CUtlVector<TraceVertex_t,CUtlMemory<TraceVertex_t,int> > *const outVertices,
        CUtlVector<int,CUtlMemory<int,int> > *const outIndices)
{
  int v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // r8d
  TraceVertex_t *v10; // rsi
  TraceVertex_t *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int m_nTraceVertices; // r15d
  TraceVertex_t *m_pTraceTriangleVertices; // r14
  Vector4D *p_m_vTangent; // rdi
  TraceVertex_t *v17; // rsi
  Vector *p_m_vNormal; // r8
  Vector2D *p_m_vTexcoord; // r9
  TraceVertex_t *v20; // rax
  vec_t x; // xmm0_4
  signed __int64 v22; // rax
  char *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  int m_nTraceTriangles; // eax
  int *m_pTraceTriangleIndices; // rbx
  int v28; // r12d
  unsigned __int64 v29; // rax

  if ( this->m_pTraceTriangleIndexRemapping != 0 )
  {
    v6 = 3 * this->m_nTraceTriangles;
    CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(outIndices, v6);
    CUtlVectorBase<TraceVertex_t,CUtlMemory<TraceVertex_t,int>>::SetCount(
      outVertices,
      this->m_nUnRemappedTraceVertexCount);
    memset(outVertices->m_Memory.m_pMemory, 0, 80LL * outVertices->m_Memory.m_nAllocationCount);
    if ( v6 > 0 )
    {
      v7 = 0;
      do
      {
        v8 = this->m_pTraceTriangleIndices[v7 / 4];
        v9 = this->m_pTraceTriangleIndexRemapping[v8];
        v10 = &this->m_pTraceTriangleVertices[v8];
        v11 = &outVertices->m_Memory.m_pMemory[v9];
        v11->m_vPosition.x = v10->m_vPosition.x;
        v11->m_vPosition.y = v10->m_vPosition.y;
        v11->m_vPosition.z = v10->m_vPosition.z;
        v11->m_vNormal.x = v10->m_vNormal.x;
        v11->m_vNormal.y = v10->m_vNormal.y;
        v11->m_vNormal.z = v10->m_vNormal.z;
        v11->m_vTangent.x = v10->m_vTangent.x;
        v11->m_vTangent.y = v10->m_vTangent.y;
        v11->m_vTangent.z = v10->m_vTangent.z;
        v11->m_vTangent.w = v10->m_vTangent.w;
        v11->m_vTexcoord.x = v10->m_vTexcoord.x;
        v11->m_vTexcoord.y = v10->m_vTexcoord.y;
        v12 = *&v10->m_nBoneIndices[2];
        *v11->m_nBoneIndices = *v10->m_nBoneIndices;
        *&v11->m_nBoneIndices[2] = v12;
        v13 = *&v10->m_flBoneWeights[2];
        *v11->m_flBoneWeights = *v10->m_flBoneWeights;
        *&v11->m_flBoneWeights[2] = v13;
        outIndices->m_Memory.m_pMemory[v7 / 4] = v9;
        v7 += 4LL;
      }
      while ( v7 != 4LL * (v6 - 1) + 4 );
    }
  }
  else
  {
    m_nTraceVertices = this->m_nTraceVertices;
    m_pTraceTriangleVertices = this->m_pTraceTriangleVertices;
    CUtlVectorBase<TraceVertex_t,CUtlMemory<TraceVertex_t,int>>::SetCount(outVertices, m_nTraceVertices);
    if ( m_nTraceVertices > 0 )
    {
      p_m_vTangent = &m_pTraceTriangleVertices->m_vTangent;
      v17 = m_pTraceTriangleVertices;
      p_m_vNormal = &m_pTraceTriangleVertices->m_vNormal;
      p_m_vTexcoord = &m_pTraceTriangleVertices->m_vTexcoord;
      do
      {
        v20 = v17;
        x = v17->m_vPosition.x;
        ++v17;
        v22 = v20 - m_pTraceTriangleVertices;
        p_m_vTangent += 5;
        v23 = outVertices->m_Memory.m_pMemory + v22;
        *v23 = x;
        *(v23 + 1) = LODWORD(v17[-1].m_vPosition.y);
        *(v23 + 2) = LODWORD(v17[-1].m_vPosition.z);
        *(v23 + 3) = *(&p_m_vNormal->x + v22);
        *(v23 + 4) = *(&p_m_vNormal->y + v22);
        *(v23 + 5) = *(&p_m_vNormal->z + v22);
        *(v23 + 6) = LODWORD(p_m_vTangent[-5].x);
        *(v23 + 7) = LODWORD(p_m_vTangent[-5].y);
        *(v23 + 8) = LODWORD(p_m_vTangent[-5].z);
        *(v23 + 9) = LODWORD(p_m_vTangent[-5].w);
        *(v23 + 10) = *(&p_m_vTexcoord->x + v22);
        *(v23 + 11) = *(&p_m_vTexcoord->y + v22);
        v24 = *&v17[-1].m_nBoneIndices[2];
        *(v23 + 6) = *v17[-1].m_nBoneIndices;
        *(v23 + 7) = v24;
        v25 = *&v17[-1].m_flBoneWeights[2];
        *(v23 + 8) = *v17[-1].m_flBoneWeights;
        *(v23 + 9) = v25;
      }
      while ( v17 != &m_pTraceTriangleVertices[(m_nTraceVertices - 1) + 1] );
    }
    m_nTraceTriangles = this->m_nTraceTriangles;
    m_pTraceTriangleIndices = this->m_pTraceTriangleIndices;
    v28 = 3 * m_nTraceTriangles;
    CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(outIndices, 3 * m_nTraceTriangles);
    if ( v28 > 0 )
    {
      v29 = 0;
      do
      {
        outIndices->m_Memory.m_pMemory[v29 / 4] = m_pTraceTriangleIndices[v29 / 4];
        v29 += 4LL;
      }
      while ( v29 != 4LL * (v28 - 1) + 4 );
    }
  }
}


// RuntimeBuffersInfo_t::BufferInfo_t::InitFromVBIBBlock  (line 943, @0x0000000003158a00, libserver.so)  // inlines: Base, GetPtr, GetRawPtr, ResolveOffset, V_memcpy, memcpy, operator[]
// calls: CUtlVectorBase<RenderInputLayoutField_t, CUtlMemoryFixedGrowable<RenderInputLayoutField_t, 4ul, int> >::SetCount
// callers: RuntimeBuffersInfo_t::InitFromVBIBBlockHeader
void __fastcall RuntimeBuffersInfo_t::BufferInfo_t::InitFromVBIBBlock(
        RuntimeBuffersInfo_t::BufferInfo_t *const this,
        const RenderMeshBufferData_t *pSrcBuffer)
{
  const uint8 *v4; // rax
  __int64 m_nOffset; // rdx
  signed int m_nCount; // r13d
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  int32 v9; // r8d
  char *v10; // rax
  RenderInputLayoutField_t *v11; // rdx
  char *v12; // rax
  int v13; // eax

  this->m_nElementCount = pSrcBuffer->m_nElementCount;
  this->m_nElementSizeInBytes = pSrcBuffer->m_nElementSizeInBytes;
  v4 = 0;
  m_nOffset = pSrcBuffer->m_pData.m_nOffset;
  if ( m_nOffset != 0 )
    v4 = &pSrcBuffer->m_pData + m_nOffset;
  this->m_pData = v4;
  this->m_nDataSize = pSrcBuffer->m_pData.m_nCount;
  m_nCount = pSrcBuffer->m_inputLayoutFields.m_nCount;
  CUtlVectorBase<RenderInputLayoutField_t,CUtlMemoryFixedGrowable<RenderInputLayoutField_t,4ul,int>>::SetCount(
    &this->m_inputLayoutFields,
    m_nCount);
  if ( m_nCount > 0 )
  {
    v7 = 0;
    v8 = 56 * ((m_nCount - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v9 = pSrcBuffer->m_inputLayoutFields.m_nOffset;
        v10 = 0;
        v11 = &this->m_inputLayoutFields.m_Memory.m_pMemory[v7 / 0x38];
        if ( v9 != 0 )
          v10 = &pSrcBuffer->m_inputLayoutFields + v9;
        v12 = &v10[v7];
        *v11->m_pSemanticName = *v12;
        *&v11->m_pSemanticName[8] = *(v12 + 1);
        *&v11->m_pSemanticName[16] = *(v12 + 2);
        *&v11->m_pSemanticName[24] = *(v12 + 3);
        v11->m_nSemanticIndex = *(v12 + 8);
        v11->m_Format = *(v12 + 9);
        v11->m_nOffset = *(v12 + 10);
        v11->m_nSlot = *(v12 + 11);
        v11->m_nInstanceStepRate = *(v12 + 13);
        v13 = *(v12 + 12);
        if ( v13 == 0 )
          break;
        v7 += 56LL;
        v11->m_nSlotType = 2 * (v13 == 1) - 1;
        if ( v7 == v8 )
          return;
      }
      v7 += 56LL;
      v11->m_nSlotType = RenderSlotType_t::RENDER_SLOT_PER_VERTEX;
    }
    while ( v7 != v8 );
  }
}


// RuntimeBuffersInfo_t::InitFromVBIBBlockHeader  (line 982, @0x0000000003158b30, libserver.so)  // inlines: GetPtr, GetRawPtr, ResolveOffset, operator[]
// calls: CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1ul, int> >::SetCount, RuntimeBuffersInfo_t::BufferInfo_t::InitFromVBIBBlock
void __fastcall RuntimeBuffersInfo_t::InitFromVBIBBlockHeader(
        RuntimeBuffersInfo_t *const this,
        const VBIBBlockHeader_t *pHeader)
{
  signed int m_nCount; // ebx
  uint32 v5; // r15d
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rsi
  RuntimeBuffersInfo_t::BufferInfo_t *v10; // rdi
  const RenderMeshBufferData_t *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rbx
  int32 m_nOffset; // edx
  char *v15; // rsi
  RuntimeBuffersInfo_t::BufferInfo_t *v16; // rdi
  const RenderMeshBufferData_t *v17; // rsi
  int v18; // [rsp+4h] [rbp-3Ch]

  m_nCount = pHeader->m_vertexBuffers.m_nCount;
  v5 = pHeader->m_indexBuffers.m_nCount;
  v18 = v5;
  CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t,CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t,1ul,int>>::SetCount(
    &this->m_VertexBuffers,
    m_nCount);
  CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t,CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t,1ul,int>>::SetCount(
    &this->m_IndexBuffers,
    v5);
  if ( m_nCount > 0 )
  {
    v6 = 0;
    v7 = 272 * ((m_nCount - 1) + 1LL);
    v8 = 0;
    do
    {
      v9 = 0;
      v10 = &this->m_VertexBuffers.m_Memory.m_pMemory[v8 / 0x110];
      if ( pHeader->m_vertexBuffers.m_nOffset != 0 )
        v9 = pHeader + pHeader->m_vertexBuffers.m_nOffset;
      v11 = &v9[v6];
      v8 += 272LL;
      v6 += 24;
      RuntimeBuffersInfo_t::BufferInfo_t::InitFromVBIBBlock(v10, v11);
    }
    while ( v8 != v7 );
  }
  if ( v18 > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      m_nOffset = pHeader->m_indexBuffers.m_nOffset;
      v15 = 0;
      v16 = &this->m_IndexBuffers.m_Memory.m_pMemory[v13];
      if ( m_nOffset != 0 )
        v15 = &pHeader->m_indexBuffers + m_nOffset;
      v17 = &v15[v12];
      ++v13;
      v12 += 24;
      RuntimeBuffersInfo_t::BufferInfo_t::InitFromVBIBBlock(v16, v17);
    }
    while ( v13 != (v18 - 1) + 1LL );
  }
}


