
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_rendermesh_old_disk.cpp  (line 0, @0x0000000001a6b520, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_rendermesh_old_disk_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// WriteHandleToExtRef  (line 14, @0x000000000316c710, libserver.so)  // inlines: WriteReference
// calls: ComputeResourceIdFromResourceName, __stack_chk_fail
// callers: CModelBuilder::FillInPermData, CMaterialDrawDescriptor::FillInPermData, CRenderMesh::FillInPermData
void __fastcall WriteHandleToExtRef(ResourceHandle_t hResource, CResourceExtReferenceBase *const extRef)
{
  ResourceIdUnsafe_t m_Data; // rax
  char pResourceName[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v5; // [rsp+108h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  m_Data = 0;
  if ( hResource != 0 )
  {
    (*(*g_pResourceSystem + 328LL))(g_pResourceSystem, hResource, pResourceName, 260);
    m_Data = ComputeResourceIdFromResourceName(pResourceName).m_Data;
  }
  extRef->m_nResourceId = m_Data;
}


// RenderSkeletonData_t::FindBoneIndexByHash  (line 33, @0x000000000316c790, libserver.so)  // inlines: GetPtr, GetRawPtr, ResolveOffset, operator[]
// callers: CModelSkeletonBuilder::AppendRenderMeshSkeleton
int __fastcall RenderSkeletonData_t::FindBoneIndexByHash(const RenderSkeletonData_t *const this, uint32 nBoneHash)
{
  char *v2; // r8
  __int64 m_nOffset; // rax
  int m_nBoneCount; // edx
  int32 v5; // r11d
  CResourceArray<short unsigned int> *p_m_indexHash; // rbx
  char *v7; // r9
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ecx
  char *v11; // rax
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  int result; // eax

  v2 = 0;
  m_nOffset = this->m_bonesHash.m_nOffset;
  m_nBoneCount = this->m_nBoneCount;
  if ( m_nOffset != 0 )
    v2 = &this->m_bonesHash + m_nOffset;
  v5 = this->m_indexHash.m_nOffset;
  p_m_indexHash = &this->m_indexHash;
  v7 = 0;
  if ( v5 != 0 )
    v7 = p_m_indexHash + v5;
  v8 = 0;
  if ( m_nBoneCount > 1 )
  {
    while ( 1 )
    {
      v9 = m_nBoneCount >> 1;
      v10 = v8 + (m_nBoneCount >> 1);
      if ( nBoneHash < *&v2[4 * *&v7[2 * v10]] )
        break;
LABEL_9:
      m_nBoneCount -= v9;
      v8 = v10;
      if ( m_nBoneCount <= 1 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      m_nBoneCount = v9;
      if ( v9 == 1 )
        break;
      v9 >>= 1;
      v10 = v9 + v8;
      if ( *&v2[4 * *&v7[2 * v9 + 2 * v8]] <= nBoneHash )
        goto LABEL_9;
    }
  }
LABEL_10:
  v11 = 0;
  if ( v5 != 0 )
    v11 = p_m_indexHash + v5;
  v12 = *&v11[2 * v8];
  if ( m_nBoneCount != 1 )
    return -1;
  v13 = v12;
  result = -1;
  if ( *&v2[4 * v13] == nBoneHash )
    return *&v7[2 * v8];
  return result;
}


// RenderSkeletonData_t::GetParent  (line 78, @0x000000000316c840, libserver.so)  // inlines: GetPtr, GetRawPtr, ResolveOffset, operator[]
int __fastcall RenderSkeletonData_t::GetParent(const RenderSkeletonData_t *const this, int nBone)
{
  __int64 m_nOffset; // rdx
  char *v3; // rax

  m_nOffset = this->m_boneParents.m_nOffset;
  v3 = 0;
  if ( m_nOffset != 0 )
    v3 = &this->m_boneParents + m_nOffset;
  return *&v3[2 * nBone];
}


// CRenderSkeleton::FillInPermData  (line 86, @0x000000000316e850, libserver.so)  // inlines: AddToTail, Allocate<CResourceString>, Allocate<SkeletonBoneBbox_t>, Allocate<char>, Allocate<float>, Allocate<matrix3x4a_t>, Allocate<short unsigned int>, Allocate<unsigned int>, AllocateUnaligned<CResourceString>, AllocateUnaligned<SkeletonBoneBbox_t>, AllocateUnaligned<char>, AllocateUnaligned<float>, AllocateUnaligned<matrix3x4a_t>, AllocateUnaligned<short unsigned int>, AllocateUnaligned<unsigned int>, CResourcePointer, CResourcePointerBase, CResourceString, CUnlockedResource, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CResourceString>, CopyConstruct<int>, Destruct<CJointIndexData>, Element, GetDataPtr, GetPtr, GetRawPtr, GrowMemory, Purge, RemoveAll, ResolveOffset, SetPtr, SetRawPtr, V_memset, V_strlen, WriteString, memcpy, memset, operator CResourceString*, operator SkeletonBoneBbox_t*, operator char*, operator float*, operator matrix3x4a_t*, operator short unsigned int*, operator unsigned int*, operator=, operator[], ~CJointIndexData, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CResourceStream::Align, CResourceStream::AllocateBytes, CUtlVectorBase<CJointIndexData, CUtlMemory<CJointIndexData, int> >::SetCount, memcpy, CUtlString::operator=, CUtlString::Get, strlen, CUtlString::operator==, Warning, CUtlVectorBase<CJointIndexData, CUtlMemory<CJointIndexData, int> >::Sort, CUtlString::FreeMemoryBlock, CUtlMemory<int, int>::Grow (15 total)
// callers: CRenderMesh::FillInPermData
// strings: "Circular skeleton detected, please tell Sergiy\n"
// globals: CJointIndexData::CompareHash(CJointIndexData const*,CJointIndexData const*), CJointIndexData::CompareString(CJointIndexData const*,CJointIndexData const*)
void __fastcall CRenderSkeleton::FillInPermData(
        const CRenderSkeleton *const this,
        RenderSkeletonData_t *pPermData,
        CResourceStream *pResourceStream)
{
  int m_Size; // r15d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rcx
  uint v8; // edx
  uint v9; // eax
  int32 v10; // eax
  unsigned int v11; // eax
  uint8 *v12; // rcx
  uint v13; // edx
  uint v14; // eax
  int32 v15; // eax
  uint v16; // ebx
  unsigned int v17; // eax
  uint8 *v18; // rcx
  uint v19; // edx
  uint v20; // eax
  int32 v21; // eax
  unsigned int v22; // eax
  uint8 *v23; // rdx
  uint8 *v24; // rcx
  uint v25; // eax
  uint8 *v26; // rax
  int i; // edx
  int32 v28; // ecx
  uint v29; // r12d
  unsigned int v30; // eax
  uint8 *v31; // rcx
  uint v32; // edx
  uint v33; // eax
  int32 v34; // eax
  unsigned int v35; // eax
  uint8 *v36; // rcx
  uint v37; // edx
  uint v38; // eax
  int32 v39; // eax
  unsigned int v40; // eax
  uint8 *v41; // rcx
  uint v42; // edx
  uint v43; // eax
  int32 v44; // eax
  unsigned int v45; // eax
  uint8 *v46; // rcx
  uint v47; // edx
  uint v48; // eax
  int32 v49; // eax
  __int64 v50; // rbx
  unsigned int v51; // eax
  uint8 *v52; // rcx
  uint8 *v53; // rdx
  uint v54; // eax
  void *v55; // rdi
  int32 v56; // edx
  char *v57; // rax
  char *v58; // rax
  int32 v59; // edx
  char *v60; // rax
  char *v61; // rdx
  int32 v62; // eax
  __int64 v63; // rax
  char *v64; // rdx
  char *v65; // rdx
  int32 v66; // ecx
  char *v67; // rdx
  char *v68; // rdx
  int32 v69; // ecx
  char *v70; // rdx
  int32 v71; // ecx
  char *v72; // rdx
  __int64 v73; // rax
  char *v74; // rax
  __int64 v75; // rdx
  char *v76; // rax
  RenderSkeletonBone_t *v77; // r12
  int32 m_nOffset; // edx
  char *v79; // rax
  __int64 v80; // rdi
  const char *v81; // rax
  const char *v82; // r13
  int v83; // eax
  __int64 v84; // r13
  __int64 v85; // r12
  int v86; // ebx
  CJointIndexData *m_pMemory; // rdi
  unsigned __int64 v88; // rax
  int32 v89; // ecx
  char *v90; // rdx
  CJointIndexData *v91; // rdi
  unsigned __int64 v92; // rax
  int32 v93; // ecx
  char *v94; // rdx
  int v95; // ebx
  __int64 j; // r12
  int32 v97; // edx
  char *v98; // rax
  __int64 v99; // rbx
  int v100; // eax
  int *v101; // rax
  CResourceArray<short unsigned int> *p_m_boneParents; // [rsp+20h] [rbp-A0h]
  signed int numBytes; // [rsp+2Ch] [rbp-94h]
  CResourceArray<SkeletonBoneBbox_t> *p_m_bboxes; // [rsp+38h] [rbp-88h]
  __int64 v106; // [rsp+40h] [rbp-80h]
  __int64 v107; // [rsp+40h] [rbp-80h]
  CUtlVector<CJointIndexData,CUtlMemory<CJointIndexData,int> > jointData; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > roots; // [rsp+70h] [rbp-50h] BYREF

  memset(pPermData, 0, sizeof(RenderSkeletonData_t));
  m_Size = this->m_bones.m_Size;
  pPermData->m_nFlags = this->m_nBoneWeightCount & 0xF;
  pPermData->m_nBoneCount = m_Size;
  pPermData->m_nBoneWeightCount = this->m_nBoneWeightCount;
  CResourceStream::Align(pResourceStream, 0x10u, 0);
  CResourceStream::Align(pResourceStream, 0x10u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, 48 * m_Size);
  m_pData = pResourceStream->m_pData;
  v8 = 0;
  v9 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed >= v9 )
    v8 = m_pData + v9;
  v10 = 0;
  if ( m_Size != 0 )
    v10 = v8 - (pPermData + 28);
  pPermData->m_invBindPose.m_nOffset = v10;
  pPermData->m_invBindPose.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 0x10u, 0);
  CResourceStream::Align(pResourceStream, 4u, 0);
  v11 = CResourceStream::AllocateBytes(pResourceStream, 32 * m_Size);
  v12 = pResourceStream->m_pData;
  v13 = 0;
  v14 = v11 - v12;
  if ( pResourceStream->m_nUsed >= v14 )
    v13 = v12 + v14;
  v15 = 0;
  if ( m_Size != 0 )
    v15 = v13 - (pPermData + 36);
  v16 = 4 * m_Size;
  pPermData->m_bboxes.m_nOffset = v15;
  pPermData->m_bboxes.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v17 = CResourceStream::AllocateBytes(pResourceStream, 4 * m_Size);
  v18 = pResourceStream->m_pData;
  v19 = 0;
  v20 = v17 - v18;
  if ( pResourceStream->m_nUsed >= v20 )
    v19 = v18 + v20;
  v21 = 0;
  if ( m_Size != 0 )
    v21 = v19 - (pPermData + 4);
  pPermData->m_bonesHash.m_nOffset = v21;
  pPermData->m_bonesHash.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v22 = CResourceStream::AllocateBytes(pResourceStream, v16);
  v23 = pResourceStream->m_pData;
  v24 = 0;
  v25 = v22 - v23;
  if ( pResourceStream->m_nUsed >= v25 )
    v24 = &v23[v25];
  if ( m_Size != 0 )
  {
    v26 = v24;
    for ( i = 0; i != m_Size; ++i )
    {
      if ( v26 != 0 )
        *v26 = 0;
      v26 += 4;
    }
    v28 = v24 - (pPermData + 56);
  }
  else
  {
    v28 = 0;
  }
  v29 = 2 * m_Size;
  pPermData->m_boneNames.m_nOffset = v28;
  pPermData->m_boneNames.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 2u, 0);
  v30 = CResourceStream::AllocateBytes(pResourceStream, 2 * m_Size);
  v31 = pResourceStream->m_pData;
  v32 = 0;
  v33 = v30 - v31;
  if ( pResourceStream->m_nUsed >= v33 )
    v32 = v31 + v33;
  v34 = 0;
  if ( m_Size != 0 )
    v34 = v32 - (pPermData + 64);
  pPermData->m_boneParents.m_nOffset = v34;
  pPermData->m_boneParents.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 2u, 0);
  v35 = CResourceStream::AllocateBytes(pResourceStream, v29);
  v36 = pResourceStream->m_pData;
  v37 = 0;
  v38 = v35 - v36;
  if ( pResourceStream->m_nUsed >= v38 )
    v37 = v36 + v38;
  v39 = 0;
  if ( m_Size != 0 )
    v39 = v37 - (pPermData + 12);
  pPermData->m_indexNames.m_nOffset = v39;
  pPermData->m_indexNames.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 2u, 0);
  v40 = CResourceStream::AllocateBytes(pResourceStream, v29);
  v41 = pResourceStream->m_pData;
  v42 = 0;
  v43 = v40 - v41;
  if ( pResourceStream->m_nUsed >= v43 )
    v42 = v41 + v43;
  v44 = 0;
  if ( m_Size != 0 )
    v44 = v42 - (pPermData + 20);
  pPermData->m_indexHash.m_nOffset = v44;
  pPermData->m_indexHash.m_nCount = m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v45 = CResourceStream::AllocateBytes(pResourceStream, v16);
  v46 = pResourceStream->m_pData;
  v47 = 0;
  v48 = v45 - v46;
  if ( pResourceStream->m_nUsed >= v48 )
    v47 = v46 + v48;
  v49 = 0;
  if ( m_Size != 0 )
    v49 = v47 - (pPermData + 44);
  jointData.m_Size = 0;
  jointData.m_Memory.m_pMemory = 0;
  jointData.m_Memory.m_nAllocationCount = 0;
  jointData.m_Memory.m_nGrowSize = 0;
  pPermData->m_spheres.m_nOffset = v49;
  pPermData->m_spheres.m_nCount = m_Size;
  CUtlVectorBase<CJointIndexData,CUtlMemory<CJointIndexData,int>>::SetCount(&jointData, m_Size);
  if ( m_Size <= 0 )
  {
    roots.m_Size = 0;
    roots.m_Memory.m_pMemory = 0;
    roots.m_Memory.m_nAllocationCount = 0;
    roots.m_Memory.m_nGrowSize = 0;
LABEL_74:
    Warning("Circular skeleton detected, please tell Sergiy\n");
    goto LABEL_75;
  }
  v50 = 0;
  p_m_boneParents = &pPermData->m_boneParents;
  p_m_bboxes = &pPermData->m_bboxes;
  do
  {
    v77 = &this->m_bones.m_Memory.m_pMemory[v50];
    m_nOffset = pPermData->m_bonesHash.m_nOffset;
    v79 = 0;
    if ( m_nOffset != 0 )
      v79 = &pPermData->m_bonesHash + m_nOffset;
    v80 = v50;
    v106 = 4 * v50;
    *&v79[4 * v50] = this->m_boneHashes.m_Memory.m_pMemory[v50].m_nHashCode;
    jointData.m_Memory.m_pMemory[v80].m_nIndex = v50;
    jointData.m_Memory.m_pMemory[v80].m_hash.m_nHashCode = this->m_boneHashes.m_Memory.m_pMemory[v50].m_nHashCode;
    CUtlString::operator=(&jointData.m_Memory.m_pMemory[v50].m_String, &v77->m_boneName);
    v81 = CUtlString::Get(&v77->m_boneName);
    v82 = v81;
    if ( v81 != 0 && (v83 = strlen(v81)) != 0 )
    {
      numBytes = v83 + 1;
      CResourceStream::Align(pResourceStream, 1u, 0);
      v51 = CResourceStream::AllocateBytes(pResourceStream, numBytes);
      v52 = 0;
      v53 = pResourceStream->m_pData;
      v54 = v51 - v53;
      if ( pResourceStream->m_nUsed >= v54 )
        v52 = &v53[v54];
      v55 = memcpy(v52, v82, numBytes);
    }
    else
    {
      v55 = 0;
    }
    v56 = pPermData->m_boneNames.m_nOffset;
    v57 = 0;
    if ( v56 != 0 )
      v57 = &pPermData->m_boneNames + v56;
    v58 = &v57[v106];
    if ( v55 != 0 )
      *v58 = v55 - v58;
    else
      *v58 = 0;
    v59 = pPermData->m_boneParents.m_nOffset;
    v60 = 0;
    if ( v59 != 0 )
      v60 = p_m_boneParents + v59;
    *&v60[2 * v50] = v50;
    v61 = 0;
    v62 = pPermData->m_bboxes.m_nOffset;
    if ( v62 != 0 )
      v61 = p_m_bboxes + v62;
    v63 = 32 * v50;
    v64 = &v61[32 * v50];
    *v64 = v77->m_bbox.m_vecCenter.x;
    *(v64 + 1) = LODWORD(v77->m_bbox.m_vecCenter.y);
    *(v64 + 2) = LODWORD(v77->m_bbox.m_vecCenter.z);
    v65 = 0;
    v66 = pPermData->m_bboxes.m_nOffset;
    if ( v66 != 0 )
      v65 = p_m_bboxes + v66;
    v67 = &v65[v63];
    *(v67 + 4) = LODWORD(v77->m_bbox.m_vecSize.x);
    *(v67 + 5) = LODWORD(v77->m_bbox.m_vecSize.y);
    *(v67 + 6) = LODWORD(v77->m_bbox.m_vecSize.z);
    v68 = 0;
    v69 = pPermData->m_bboxes.m_nOffset;
    if ( v69 != 0 )
      v68 = p_m_bboxes + v69;
    *&v68[v63 + 12] = 0;
    v70 = 0;
    v71 = pPermData->m_bboxes.m_nOffset;
    if ( v71 != 0 )
      v70 = p_m_bboxes + v71;
    *&v70[v63 + 28] = 0;
    v72 = 0;
    v73 = pPermData->m_invBindPose.m_nOffset;
    if ( v73 != 0 )
      v72 = &pPermData->m_invBindPose + v73;
    v74 = &v72[48 * v50];
    *v74 = *&v77->m_invBindPose.m_flMatVal[0][0];
    *(v74 + 1) = *&v77->m_invBindPose.m_flMatVal[0][2];
    *(v74 + 2) = *&v77->m_invBindPose.m_flMatVal[1][0];
    *(v74 + 3) = *&v77->m_invBindPose.m_flMatVal[1][2];
    *(v74 + 4) = *&v77->m_invBindPose.m_flMatVal[2][0];
    *(v74 + 5) = *&v77->m_invBindPose.m_flMatVal[2][2];
    v75 = pPermData->m_spheres.m_nOffset;
    v76 = 0;
    if ( v75 != 0 )
      v76 = &pPermData->m_spheres + v75;
    ++v50;
    *&v76[v106] = v77->m_flSphereRadius;
  }
  while ( m_Size > v50 );
  roots.m_Size = 0;
  v84 = 0;
  roots.m_Memory.m_pMemory = 0;
  roots.m_Memory.m_nAllocationCount = 0;
  roots.m_Memory.m_nGrowSize = 0;
  v107 = 0;
  do
  {
    while ( 1 )
    {
      if ( *CUtlString::Get(&this->m_bones.m_Memory.m_pMemory[v84].m_parentName) == 0 )
        goto LABEL_109;
      v85 = 0;
      v86 = 0;
      while ( !CUtlString::operator==(
                 &this->m_bones.m_Memory.m_pMemory[v84].m_parentName,
                 &this->m_bones.m_Memory.m_pMemory[v85].m_boneName) )
      {
        ++v86;
        ++v85;
        if ( v86 == m_Size )
          goto LABEL_72;
      }
      v97 = pPermData->m_boneParents.m_nOffset;
      v98 = 0;
      if ( v97 != 0 )
        v98 = p_m_boneParents + v97;
      *&v98[2 * v107] = v86;
      if ( v107 == v86 )
      {
LABEL_109:
        v99 = roots.m_Size;
        v100 = roots.m_Size;
        if ( roots.m_Size == roots.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&roots.m_Memory, 1);
          v100 = roots.m_Size;
        }
        roots.m_Size = v100 + 1;
        v101 = &roots.m_Memory.m_pMemory[v99];
        if ( v101 != 0 )
          break;
      }
LABEL_72:
      ++v107;
      ++v84;
      if ( m_Size <= v107 )
        goto LABEL_73;
    }
    ++v84;
    *v101 = v107++;
  }
  while ( m_Size > v107 );
LABEL_73:
  if ( roots.m_Size == 0 )
    goto LABEL_74;
LABEL_75:
  CUtlVectorBase<CJointIndexData,CUtlMemory<CJointIndexData,int>>::Sort(&jointData, CJointIndexData::CompareHash);
  if ( m_Size > 0 )
  {
    m_pMemory = jointData.m_Memory.m_pMemory;
    v88 = 0;
    do
    {
      v89 = pPermData->m_indexHash.m_nOffset;
      v90 = 0;
      if ( v89 != 0 )
        v90 = &pPermData->m_indexHash + v89;
      *&v90[v88] = m_pMemory[v88 / 2].m_nIndex;
      v88 += 2LL;
    }
    while ( v88 != 2LL * (m_Size - 1) + 2 );
  }
  CUtlVectorBase<CJointIndexData,CUtlMemory<CJointIndexData,int>>::Sort(&jointData, CJointIndexData::CompareString);
  if ( m_Size > 0 )
  {
    v91 = jointData.m_Memory.m_pMemory;
    v92 = 0;
    do
    {
      v93 = pPermData->m_indexNames.m_nOffset;
      v94 = 0;
      if ( v93 != 0 )
        v94 = &pPermData->m_indexNames + v93;
      *&v94[v92] = v91[v92 / 2].m_nIndex;
      v92 += 2LL;
    }
    while ( v92 != 2LL * (m_Size - 1) + 2 );
  }
  roots.m_Size = 0;
  if ( (roots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&roots.m_Memory);
    if ( (roots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&roots.m_Memory);
  }
  v95 = jointData.m_Size;
  for ( j = 16LL * jointData.m_Size - 16; --v95 >= 0; j -= 16 )
  {
    if ( *(&jointData.m_Memory.m_pMemory->m_String.m_pString + j) != 0 )
      CUtlString::FreeMemoryBlock((&jointData.m_Memory.m_pMemory->m_String + j));
  }
  jointData.m_Size = 0;
  if ( (jointData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CJointIndexData,int>::Purge(&jointData.m_Memory);
    if ( (jointData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CJointIndexData,int>::Purge(&jointData.m_Memory);
  }
}


// CRenderSkeleton::InitFromOldDiskData  (line 219, @0x000000000316da90, libserver.so)  // inlines: AddMultipleToTail, CUtlString, CUtlStringToken, Construct<CUtlStringToken>, Construct<RenderSkeletonBone_t>, GetPtr, GetRawPtr, GrowMemory, GrowVector, InsertMultipleBefore, RenderSkeletonBone_t, ResolveOffset, SkeletonBoneBounds_t, operator char const*, operator=, operator[]
// calls: CUtlString::operator=, CUtlMemory<RenderSkeletonBone_t, int>::Grow, CUtlMemory<CUtlStringToken, int>::Grow, CUtlMemory<int, int>::Grow
// callers: CRenderMesh::InitFromOldDiskData
void __fastcall CRenderSkeleton::InitFromOldDiskData(
        CRenderSkeleton *const this,
        const RenderSkeletonData_t *pPermData)
{
  int m_Size; // r14d
  int m_nBoneCount; // ebx
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ebx
  int32 v9; // edi
  char *v10; // rsi
  char *v11; // rax
  __int64 v12; // rdi
  const char *v13; // rsi
  const char *v14; // rdi
  int32 v15; // esi
  char *v16; // rax
  __int64 v17; // rax
  int v18; // r8d
  int m_nAllocationCount; // eax
  int v20; // r15d
  unsigned __int64 v21; // rdi
  RenderSkeletonBone_t *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  int v25; // ebx
  int v26; // r14d
  int v27; // eax
  int v28; // r15d
  unsigned __int64 v29; // rax
  CUtlStringToken *v30; // rsi
  __int64 v31; // r14
  int32 m_nOffset; // esi
  char *v33; // rax
  __int64 v34; // r15
  const char *v35; // rsi
  char *v36; // rax
  __int64 v37; // rdi
  const char *v38; // rdi
  __int64 v39; // rbx
  int32 v40; // edi
  RenderSkeletonBone_t *v41; // rax
  char *v42; // rsi
  char *v43; // rsi
  char *v44; // rdi
  int32 v45; // eax
  char *v46; // rsi
  RenderSkeletonBone_t *v47; // rax
  vec_t *v48; // rdi
  int32 v49; // eax
  char *v50; // rsi
  RenderSkeletonBone_t *v51; // rax
  char *v52; // rax
  int32 v53; // esi
  RenderSkeletonBone_t *v54; // rbx
  float v55; // xmm0_4
  char *v56; // rax
  int32 v57; // esi
  int v58; // eax
  int v59; // ebx
  int v60; // eax
  int nParenta; // [rsp+28h] [rbp-38h]
  CResourceArray<SkeletonBoneBbox_t> *nParent; // [rsp+28h] [rbp-38h]

  m_Size = this->m_bones.m_Size;
  this->m_nBoneWeightCount = pPermData->m_nBoneWeightCount;
  m_nBoneCount = pPermData->m_nBoneCount;
  if ( pPermData->m_nBoneCount != 0 )
  {
    m_nAllocationCount = this->m_bones.m_Memory.m_nAllocationCount;
    v20 = m_nBoneCount + m_Size;
    if ( m_nBoneCount + m_Size > m_nAllocationCount )
      CUtlMemory<RenderSkeletonBone_t,int>::Grow(&this->m_bones.m_Memory, v20 - m_nAllocationCount);
    this->m_bones.m_Size = v20;
    v21 = 0;
    do
    {
      v22 = &this->m_bones.m_Memory.m_pMemory[m_Size + v21 / 0x60];
      if ( v22 != 0 )
      {
        v22->m_boneName.m_pString = 0;
        v22->m_parentName.m_pString = 0;
        v22->m_flSphereRadius = 0.0;
        *&v22->m_invBindPose.m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
        *&v22->m_invBindPose.m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
        *&v22->m_invBindPose.m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
        *&v22->m_invBindPose.m_flMatVal[1][2] = *&g_MatrixIdentity.m_flMatVal[1][2];
        v23 = *&g_MatrixIdentity.m_flMatVal[2][2];
        *&v22->m_invBindPose.m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
        *&v22->m_invBindPose.m_flMatVal[2][2] = v23;
        v24 = *&vec3_origin.x;
        *&v23 = vec3_origin.z;
        *&v22->m_bbox.m_vecCenter.x = *&vec3_origin.x;
        LODWORD(v22->m_bbox.m_vecCenter.z) = v23;
        *&v22->m_bbox.m_vecSize.x = v24;
        LODWORD(v22->m_bbox.m_vecSize.z) = v23;
      }
      v21 += 96LL;
    }
    while ( v21 != 32 * (3LL * (m_nBoneCount - 1) + 3) );
    v25 = pPermData->m_nBoneCount;
    v26 = this->m_boneHashes.m_Size;
    if ( pPermData->m_nBoneCount != 0 )
    {
      v27 = this->m_boneHashes.m_Memory.m_nAllocationCount;
      v28 = v25 + v26;
      if ( v25 + v26 > v27 )
        CUtlMemory<CUtlStringToken,int>::Grow(&this->m_boneHashes.m_Memory, v28 - v27);
      this->m_boneHashes.m_Size = v28;
      v29 = 0;
      do
      {
        v30 = &this->m_boneHashes.m_Memory.m_pMemory[v26 + v29 / 4];
        if ( v30 != 0 )
          v30->m_nHashCode = 0;
        v29 += 4LL;
      }
      while ( v29 != 4LL * (v25 - 1) + 4 );
      if ( pPermData->m_nBoneCount != 0 )
      {
        v31 = 0;
        nParent = &pPermData->m_bboxes;
        do
        {
          m_nOffset = pPermData->m_boneNames.m_nOffset;
          v33 = 0;
          if ( m_nOffset != 0 )
            v33 = &pPermData->m_boneNames + m_nOffset;
          v34 = v31;
          v35 = "";
          v36 = &v33[4 * v31];
          v37 = *v36;
          if ( v37 != 0 )
          {
            v38 = &v36[v37];
            if ( v38 != 0 )
              v35 = v38;
          }
          v39 = v31;
          CUtlString::operator=(&this->m_bones.m_Memory.m_pMemory[v31].m_boneName, v35);
          v40 = pPermData->m_invBindPose.m_nOffset;
          v41 = &this->m_bones.m_Memory.m_pMemory[v31];
          v42 = 0;
          if ( v40 != 0 )
            v42 = &pPermData->m_invBindPose + v40;
          v43 = &v42[48 * v31];
          *&v41->m_invBindPose.m_flMatVal[0][0] = *v43;
          *&v41->m_invBindPose.m_flMatVal[0][2] = *(v43 + 1);
          *&v41->m_invBindPose.m_flMatVal[1][0] = *(v43 + 2);
          *&v41->m_invBindPose.m_flMatVal[1][2] = *(v43 + 3);
          *&v41->m_invBindPose.m_flMatVal[2][0] = *(v43 + 4);
          v44 = 0;
          *&v41->m_invBindPose.m_flMatVal[2][2] = *(v43 + 5);
          v45 = pPermData->m_bboxes.m_nOffset;
          if ( v45 != 0 )
            v44 = nParent + v45;
          v46 = 0;
          v47 = &this->m_bones.m_Memory.m_pMemory[v39];
          v48 = &v44[32 * v31];
          v47->m_bbox.m_vecCenter.x = *v48;
          v47->m_bbox.m_vecCenter.y = v48[1];
          v47->m_bbox.m_vecCenter.z = v48[2];
          v49 = pPermData->m_bboxes.m_nOffset;
          if ( v49 != 0 )
            v46 = nParent + v49;
          v50 = &v46[32 * v31];
          v51 = &this->m_bones.m_Memory.m_pMemory[v39];
          v51->m_bbox.m_vecSize.x = *(v50 + 4);
          v51->m_bbox.m_vecSize.y = *(v50 + 5);
          v51->m_bbox.m_vecSize.z = *(v50 + 6);
          v52 = 0;
          v53 = pPermData->m_spheres.m_nOffset;
          v54 = &this->m_bones.m_Memory.m_pMemory[v39];
          if ( v53 != 0 )
            v52 = &pPermData->m_spheres + v53;
          v55 = *&v52[4 * v31];
          v56 = 0;
          v54->m_flSphereRadius = v55;
          v57 = pPermData->m_bonesHash.m_nOffset;
          if ( v57 != 0 )
            v56 = &pPermData->m_bonesHash + v57;
          ++v31;
          this->m_boneHashes.m_Memory.m_pMemory[v34].m_nHashCode = *&v56[v34 * 4];
          v58 = pPermData->m_nBoneCount;
        }
        while ( v58 > v31 );
        if ( pPermData->m_nBoneCount != 0 )
        {
          v59 = v58 + this->m_boneParents.m_Size;
          v60 = this->m_boneParents.m_Memory.m_nAllocationCount;
          if ( v59 > v60 )
            CUtlMemory<int,int>::Grow(&this->m_boneParents.m_Memory, v59 - v60);
          this->m_boneParents.m_Size = v59;
        }
      }
    }
  }
  if ( pPermData->m_nBoneCount != 0 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      v15 = pPermData->m_boneParents.m_nOffset;
      v16 = 0;
      if ( v15 != 0 )
        v16 = &pPermData->m_boneParents + v15;
      v17 = *&v16[v6 * 2];
      v18 = v17;
      if ( v17 == v8 )
      {
        this->m_boneParents.m_Memory.m_pMemory[v6] = -1;
      }
      else
      {
        v9 = pPermData->m_boneNames.m_nOffset;
        v10 = 0;
        if ( v9 != 0 )
          v10 = &pPermData->m_boneNames + v9;
        v11 = &v10[4 * v17];
        v12 = *v11;
        v13 = "";
        if ( v12 != 0 )
        {
          v14 = &v11[v12];
          if ( v14 != 0 )
            v13 = v14;
        }
        nParenta = v18;
        CUtlString::operator=(&this->m_bones.m_Memory.m_pMemory[v7].m_parentName, v13);
        this->m_boneParents.m_Memory.m_pMemory[v6] = nParenta;
      }
      ++v8;
      ++v7;
      ++v6;
    }
    while ( pPermData->m_nBoneCount > v8 );
  }
}


// CMaterialDrawDescriptor::InitFromOldDiskData  (line 260, @0x000000000316c860, libserver.so)  // inlines: AddMultipleToTail, CRenderBufferBinding, Construct<CRenderBufferBinding>, ConvertV0DrawPrimitiveFlags, Count, FromUntypedHandleUnchecked, GetHandle, GetPtr, GetRawPtr, GrowVector, InitUntypedUnchecked, InsertMultipleBefore, ResolveOffset, operator&, operator[]
// calls: CMaterialDrawDescriptor::Init, CMaterialDrawDescriptor::SetMaterial
// callers: CSceneObjectData::InitFromOldDiskData
void __fastcall CMaterialDrawDescriptor::InitFromOldDiskData(
        CMaterialDrawDescriptor *const this,
        const MaterialDrawDescriptor_t *pPermDrawDesc)
{
  uint8 m_nFlags; // dl
  __int64 m_Size; // rax
  signed int m_nCount; // r8d
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul> >::CAllocator *p_m_Memory; // rdi
  signed int v8; // edx
  char *v9; // rax
  CResourceArray<RenderBufferBinding_t> *p_m_vertexBuffers; // r9
  __int64 v11; // rax
  signed int i; // edx
  int32 m_nOffset; // esi
  char *v14; // rcx
  char *v15; // rcx
  int32 v16; // esi
  HMaterial hMaterial; // [rsp+10h] [rbp-20h] BYREF

  CMaterialDrawDescriptor::Init(
    this,
    pPermDrawDesc->m_nPrimitiveType,
    pPermDrawDesc->m_nBaseVertex,
    pPermDrawDesc->m_nVertexCount,
    pPermDrawDesc->m_nStartIndex,
    pPermDrawDesc->m_nIndexCount,
    pPermDrawDesc->m_flUvDensity,
    pPermDrawDesc->m_nStartInstance,
    pPermDrawDesc->m_nInstanceCount);
  this->m_bAlphaBlendedMaterial = pPermDrawDesc->m_bAlphaBlendedMaterial;
  m_nFlags = pPermDrawDesc->m_nFlags;
  this->m_nFlags = ((m_nFlags & 0x80) != 0 ? 0x80 : 0)
                 | ((m_nFlags & 0x40) != 0 ? 0x40 : 0)
                 | ((m_nFlags & 0x20) != 0 ? 0x10 : 0)
                 | ((m_nFlags & 0x10) != 0 ? 0x10 : 0)
                 | ((m_nFlags & 8) != 0 ? 8 : 0)
                 | ((m_nFlags & 4) != 0 ? 4 : 0)
                 | m_nFlags & 1
                 | ((m_nFlags & 2) != 0 ? 2 : 0);
  m_Size = this->m_vertexBuffers.m_Size;
  m_nCount = pPermDrawDesc->m_vertexBuffers.m_nCount;
  if ( m_nCount != 0 )
  {
    this->m_vertexBuffers.m_Size = m_nCount + m_Size;
    if ( m_nCount > 0 )
    {
      p_m_Memory = &this->m_vertexBuffers.m_Memory;
      v8 = 0;
      v9 = &this->m_vertexBuffers.m_Memory + 16 * m_Size;
      do
      {
        if ( v9 != 0 )
        {
          *v9 = 0;
          *(v9 + 2) = 0;
        }
        ++v8;
        v9 += 16;
      }
      while ( m_nCount > v8 );
      p_m_vertexBuffers = &pPermDrawDesc->m_vertexBuffers;
      v11 = 0;
      for ( i = 0; i < m_nCount; ++i )
      {
        m_nOffset = pPermDrawDesc->m_vertexBuffers.m_nOffset;
        v14 = 0;
        if ( m_nOffset != 0 )
          v14 = p_m_vertexBuffers + m_nOffset;
        *&p_m_Memory->m_Memory.m_Data[v11] = *&v14[v11];
        v15 = 0;
        v16 = pPermDrawDesc->m_vertexBuffers.m_nOffset;
        if ( v16 != 0 )
          v15 = p_m_vertexBuffers + v16;
        *&p_m_Memory->m_Memory.m_Data[v11 + 8] = *&v15[v11 + 8];
        v11 += 16;
      }
    }
  }
  this->m_indexBuffer.m_hBuffer = pPermDrawDesc->m_indexBuffer.m_hBuffer;
  this->m_indexBuffer.m_nBindOffsetBytes = pPermDrawDesc->m_indexBuffer.m_nBindOffsetBytes;
  hMaterial.m_pBinding = pPermDrawDesc->m_pMaterial.m_hResource;
  CMaterialDrawDescriptor::SetMaterial(this, &hMaterial);
}


// CMaterialDrawDescriptor::FillInPermData  (line 282, @0x000000000316ca10, libserver.so)  // inlines: Allocate<RenderBufferBinding_t>, AllocateUnaligned<RenderBufferBinding_t>, CUnlockedResource, GetDataPtr, GetPtr, GetRawPtr, ResolveOffset, V_memset, memset, operator RenderBufferBinding_t*, operator=, operator[]
// calls: WriteHandleToExtRef, CResourceStream::Align, CResourceStream::AllocateBytes
// callers: CSceneObjectData::FillInPermData
void __fastcall CMaterialDrawDescriptor::FillInPermData(
        const CMaterialDrawDescriptor *const this,
        MaterialDrawDescriptor_t *pPermData,
        CResourceStream *pResourceStream)
{
  CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > *p_m_pMaterial; // rsi
  signed int m_Size; // r13d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v10; // esi
  uint v11; // eax
  int32 v12; // ecx
  __int64 v13; // rax
  CResourceArray<RenderBufferBinding_t> *p_m_vertexBuffers; // r8
  CUtlVectorBase<CRenderBufferBinding,CUtlMemoryFixed<CRenderBufferBinding,4ul> >::CAllocator *p_m_Memory; // rdi
  char *v16; // rdx
  char *v17; // rdx
  int32 m_nOffset; // ecx

  memset(pPermData, 0, sizeof(MaterialDrawDescriptor_t));
  p_m_pMaterial = &pPermData->m_pMaterial;
  LODWORD(p_m_pMaterial[-10].m_nResourceId) = this->m_nBaseVertex;
  HIDWORD(p_m_pMaterial[-10].m_hResource) = this->m_nVertexCount;
  LODWORD(p_m_pMaterial[-9].m_nResourceId) = this->m_nStartIndex;
  HIDWORD(p_m_pMaterial[-9].m_hResource) = this->m_nIndexCount;
  LODWORD(p_m_pMaterial[-8].m_nResourceId) = this->m_nStartInstance;
  HIDWORD(p_m_pMaterial[-8].m_hResource) = this->m_nInstanceCount;
  *&p_m_pMaterial[-7].m_nResourceId = this->m_flUvDensity;
  BYTE4(p_m_pMaterial[-7].m_hResource) = this->m_nPrimitiveType;
  BYTE5(p_m_pMaterial[-7].m_hResource) = this->m_bAlphaBlendedMaterial;
  BYTE6(p_m_pMaterial[-7].m_hResource) = this->m_nFlags;
  *&p_m_pMaterial[-2].m_nResourceId = this->m_indexBuffer;
  WriteHandleToExtRef(this->m_material.m_pBinding, p_m_pMaterial);
  m_Size = this->m_vertexBuffers.m_Size;
  CResourceStream::Align(pResourceStream, 8u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, 16 * m_Size);
  m_pData = pResourceStream->m_pData;
  v10 = 0;
  v11 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed >= v11 )
    v10 = m_pData + v11;
  v12 = 0;
  if ( m_Size != 0 )
    v12 = v10 - (pPermData + 52);
  pPermData->m_vertexBuffers.m_nOffset = v12;
  pPermData->m_vertexBuffers.m_nCount = m_Size;
  if ( m_Size > 0 )
  {
    v13 = 0;
    p_m_vertexBuffers = &pPermData->m_vertexBuffers;
    p_m_Memory = &this->m_vertexBuffers.m_Memory;
    while ( 1 )
    {
      v16 = 0;
      if ( v12 != 0 )
        v16 = p_m_vertexBuffers + v12;
      *&v16[v13] = *&p_m_Memory->m_Memory.m_Data[v13];
      v17 = 0;
      m_nOffset = pPermData->m_vertexBuffers.m_nOffset;
      if ( m_nOffset != 0 )
        v17 = p_m_vertexBuffers + m_nOffset;
      *&v17[v13 + 8] = *&p_m_Memory->m_Memory.m_Data[v13 + 8];
      v13 += 16;
      if ( v13 == 16 * ((m_Size - 1) + 1LL) )
        break;
      v12 = pPermData->m_vertexBuffers.m_nOffset;
    }
  }
}


// CSceneObjectData::FillInPermData  (line 312, @0x000000000316cb60, libserver.so)  // inlines: Allocate<MaterialDrawDescriptor_t>, AllocateUnaligned<MaterialDrawDescriptor_t>, CResourceArray, CResourceArrayBase, CUnlockedResource, Construct<MaterialDrawDescriptor_t>, GetDataPtr, GetPtr, GetRawPtr, MaterialDrawDescriptor_t, ResolveOffset, V_memset, memset, operator MaterialDrawDescriptor_t*, operator=, operator[]
// calls: CResourceStream::Align, CResourceStream::AllocateBytes, CMaterialDrawDescriptor::FillInPermData
// callers: CRenderMesh::FillInPermData
void __fastcall CSceneObjectData::FillInPermData(
        const CSceneObjectData *const this,
        SceneObjectData_t *pPermData,
        CResourceStream *pResourceStream)
{
  signed int m_Size; // ebx
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint8 *v9; // rsi
  uint v10; // eax
  uint8 *v11; // rax
  int i; // ecx
  int32 m_nOffset; // eax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbx
  char *v17; // rsi
  MaterialDrawDescriptor_t *v18; // rsi
  const CMaterialDrawDescriptor *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-38h]

  memset(pPermData, 0, 0x30u);
  pPermData->m_vTintColor.w = 0.0;
  m_Size = this->m_drawCalls.m_Size;
  pPermData->m_vMinBounds.x = this->m_vMinBounds.x;
  pPermData->m_vMinBounds.y = this->m_vMinBounds.y;
  pPermData->m_vMinBounds.z = this->m_vMinBounds.z;
  pPermData->m_vMaxBounds = this->m_vMaxBounds;
  CResourceStream::Align(pResourceStream, 8u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, 88 * m_Size);
  m_pData = pResourceStream->m_pData;
  v9 = 0;
  v10 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed >= v10 )
    v9 = &m_pData[v10];
  if ( m_Size != 0 )
  {
    v11 = v9;
    for ( i = 0; i != m_Size; ++i )
    {
      if ( v11 != 0 )
      {
        *(v11 + 13) = 0;
        *(v11 + 14) = 0;
      }
      v11 += 88;
    }
    m_nOffset = v9 - (pPermData + 28);
  }
  else
  {
    m_nOffset = 0;
  }
  pPermData->m_drawCalls.m_nOffset = m_nOffset;
  pPermData->m_drawCalls.m_nCount = m_Size;
  if ( m_Size > 0 )
  {
    v14 = 0;
    v15 = 11 * ((m_Size - 1) + 1LL);
    v16 = 0;
    v20 = 8 * v15;
    while ( 1 )
    {
      v17 = 0;
      if ( m_nOffset != 0 )
        v17 = &pPermData->m_drawCalls + m_nOffset;
      v18 = &v17[v16];
      v19 = &this->m_drawCalls.m_Memory.m_pMemory[v14];
      v16 += 88;
      ++v14;
      CMaterialDrawDescriptor::FillInPermData(v19, v18, pResourceStream);
      if ( v16 == v20 )
        break;
      m_nOffset = pPermData->m_drawCalls.m_nOffset;
    }
  }
  pPermData->m_vTintColor.x = this->m_vTintColor.x;
  pPermData->m_vTintColor.y = this->m_vTintColor.y;
  pPermData->m_vTintColor.z = this->m_vTintColor.z;
  pPermData->m_vTintColor.w = this->m_vTintColor.w;
}


// OldTranslucencyTypeToNew  (line 333, @0x000000000316cd00, libserver.so)
RenderMeshTranslucencyType_t __fastcall OldTranslucencyTypeToNew(MeshTranslucencyType_t nOld)
{
  return nOld;
}


// CSceneObjectData::InitFromOldDiskData  (line 344, @0x000000000316de90, libserver.so)  // inlines: AddMultipleToTail, Construct<CMaterialDrawDescriptor>, Count, GetPtr, GetRawPtr, GrowMemory, GrowVector, InsertMultipleBefore, ResolveOffset, operator=, operator[]
// calls: CSceneObjectData::Init, CUtlMemory<CMaterialDrawDescriptor, int>::Grow, CMaterialDrawDescriptor::CMaterialDrawDescriptor, CMaterialDrawDescriptor::InitFromOldDiskData
// callers: CSceneObjectData::CSceneObjectData, CRenderMesh::InitFromOldDiskData
void __fastcall CSceneObjectData::InitFromOldDiskData(CSceneObjectData *const this, const SceneObjectData_t *pPermData)
{
  __int64 m_Size; // rbx
  uint32 m_nCount; // eax
  int v6; // r15d
  int m_nAllocationCount; // eax
  CMaterialDrawDescriptor *m_pMemory; // rcx
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r15
  int v13; // ebx
  int32 m_nOffset; // edi
  char *v15; // rsi
  int v16; // [rsp+Ch] [rbp-34h]

  CSceneObjectData::Init(this, &pPermData->m_vMinBounds, &pPermData->m_vMaxBounds, pPermData->m_translucencyType);
  m_Size = this->m_drawCalls.m_Size;
  this->m_vTintColor = pPermData->m_vTintColor;
  m_nCount = pPermData->m_drawCalls.m_nCount;
  v16 = m_nCount;
  if ( m_nCount != 0 )
  {
    v6 = m_nCount + m_Size;
    m_nAllocationCount = this->m_drawCalls.m_Memory.m_nAllocationCount;
    if ( v6 > m_nAllocationCount )
      CUtlMemory<CMaterialDrawDescriptor,int>::Grow(&this->m_drawCalls.m_Memory, v6 - m_nAllocationCount);
    this->m_drawCalls.m_Size = v6;
    if ( v16 > 0 )
    {
      m_pMemory = this->m_drawCalls.m_Memory.m_pMemory;
      v9 = 0;
      v10 = m_Size;
      do
      {
        if ( &m_pMemory[v10] != 0 )
        {
          CMaterialDrawDescriptor::CMaterialDrawDescriptor(&m_pMemory[v10]);
          m_pMemory = this->m_drawCalls.m_Memory.m_pMemory;
        }
        ++v9;
        ++v10;
      }
      while ( v16 > v9 );
      v11 = 0;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        m_nOffset = pPermData->m_drawCalls.m_nOffset;
        v15 = 0;
        if ( m_nOffset != 0 )
          v15 = &pPermData->m_drawCalls + m_nOffset;
        ++v13;
        CMaterialDrawDescriptor::InitFromOldDiskData(&m_pMemory[v11], &v15[v12]);
        v12 += 88;
        ++v11;
        if ( v13 >= v16 )
          break;
        m_pMemory = this->m_drawCalls.m_Memory.m_pMemory;
      }
    }
  }
}


// CAttachment::FillInPermData  (line 360, @0x000000000316cd10, libserver.so)  // inlines: Allocate<char>, AllocateUnaligned<char>, CUnlockedResource, GetDataPtr, GetPtr, SetPtr, SetRawPtr, V_strlen, WriteString, memcpy, operator char*, operator=
// calls: CUtlString::Get, strlen, CResourceStream::Align, CResourceStream::AllocateBytes, memcpy
// callers: CRenderMesh::FillInPermData
void __fastcall CAttachment::FillInPermData(
        const CAttachment *const this,
        AttachmentData_t *pPermData,
        CResourceStream *pResourceStream)
{
  const char *v4; // rax
  const char *v5; // rbx
  int v6; // eax
  signed int v7; // r12d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v10; // eax
  void *v11; // rax
  const CAttachment *v12; // r12
  __int64 v13; // rbx
  const CAttachment *v14; // r15
  AttachmentData_t *v15; // r13
  const char *v16; // rax
  int v17; // eax
  unsigned int v18; // eax
  uint8 *v19; // rdx
  uint v20; // eax
  void *v21; // r11
  AttachmentData_t *v22; // rax
  AttachmentData_t *v23; // rcx
  AttachmentData_t *v24; // rsi
  float v25; // xmm0_4
  float v26; // xmm0_4
  AttachmentData_t *v27; // r15
  int v28; // eax
  float v29; // xmm0_4
  void *src; // [rsp+0h] [rbp-70h]
  uint numBytes[2]; // [rsp+8h] [rbp-68h]
  signed int numBytesa; // [rsp+8h] [rbp-68h]
  const CUtlString *m_influenceNames; // [rsp+18h] [rbp-58h]
  AttachmentData_t *v35; // [rsp+20h] [rbp-50h]
  float flTotalWeight; // [rsp+34h] [rbp-3Ch]
  AttachmentData_t *v38; // [rsp+38h] [rbp-38h]

  v4 = CUtlString::Get(&this->m_name);
  v5 = v4;
  if ( v4 == 0 )
    goto LABEL_20;
  v6 = strlen(v4);
  if ( v6 == 0 )
    goto LABEL_20;
  v7 = v6 + 1;
  CResourceStream::Align(pResourceStream, 1u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, v7);
  m_pData = pResourceStream->m_pData;
  v10 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed < v10 )
  {
    memcpy(0, v5, v7);
    goto LABEL_20;
  }
  v11 = memcpy(&m_pData[v10], v5, v7);
  if ( v11 == 0 )
  {
LABEL_20:
    pPermData->m_name.m_nOffset = 0;
    goto LABEL_6;
  }
  pPermData->m_name.m_nOffset = v11 - pPermData;
LABEL_6:
  pPermData->m_nInfluences = this->m_nInfluences;
  if ( this->m_nInfluences == 0 )
    return;
  v38 = pPermData;
  v35 = pPermData;
  v12 = this;
  m_influenceNames = this->m_influenceNames;
  v13 = 0;
  flTotalWeight = 0.0;
  v14 = this;
  v15 = pPermData;
  do
  {
    v16 = CUtlString::Get(m_influenceNames);
    if ( v16 == 0 )
      goto LABEL_22;
    *numBytes = v16;
    v17 = strlen(v16);
    if ( v17 == 0 )
      goto LABEL_22;
    src = *numBytes;
    numBytesa = v17 + 1;
    CResourceStream::Align(pResourceStream, 1u, 0);
    v18 = CResourceStream::AllocateBytes(pResourceStream, numBytesa);
    v19 = pResourceStream->m_pData;
    v20 = v18 - v19;
    if ( pResourceStream->m_nUsed < v20 )
    {
      memcpy(0, src, numBytesa);
LABEL_22:
      v22 = v38->m_influenceNames;
      goto LABEL_23;
    }
    v21 = memcpy(&v19[v20], src, numBytesa);
    v22 = v38->m_influenceNames;
    if ( v21 != 0 )
    {
      v38->m_influenceNames[0].m_nOffset = v21 - v22;
      goto LABEL_13;
    }
LABEL_23:
    v22->m_name.m_nOffset = 0;
LABEL_13:
    v23 = v35;
    v14 = (v14 + 12);
    v12 = (v12 + 16);
    v15 = (v15 + 16);
    v24 = v38;
    v38 = v22;
    ++m_influenceNames;
    v35->m_vInfluenceOffsets[0].x = *(&v14->m_influenceNames[1].m_pString + 1);
    v35 = (v35 + 12);
    v23->m_vInfluenceOffsets[0].y = *&v14->m_influenceNames[2].m_pString;
    v23->m_vInfluenceOffsets[0].z = *(&v14->m_influenceNames[2].m_pString + 1);
    v15->m_vInfluenceOffsets[1].z = v12->m_vInfluenceOffsets[1].z;
    v15->m_vInfluenceOffsets[2].x = v12->m_vInfluenceOffsets[2].x;
    v15->m_vInfluenceOffsets[2].y = v12->m_vInfluenceOffsets[2].y;
    v15->m_vInfluenceOffsets[2].z = v12->m_vInfluenceOffsets[2].z;
    v25 = this->m_influenceWeights[v13];
    v24->m_influenceWeights[0] = v25;
    v26 = v25 + flTotalWeight;
    flTotalWeight = v26;
    pPermData->m_nFlags[v13] = this->m_bInfluenceRootTransform[v13];
    ++v13;
  }
  while ( this->m_nInfluences > v13 );
  if ( v26 > 1.0 && this->m_nInfluences != 0 )
  {
    v27 = pPermData;
    v28 = 0;
    do
    {
      v29 = v27->m_influenceWeights[0];
      ++v28;
      v27 = (v27 + 4);
      v27->m_vInfluenceRotations[2].w = v29 / flTotalWeight;
    }
    while ( this->m_nInfluences > v28 );
  }
}


// CHitBoxSet::FillInPermData  (line 391, @0x000000000316cfd0, libserver.so)  // inlines: Allocate<char>, AllocateUnaligned<char>, CUnlockedResource, GetDataPtr, GetPtr, MakeStringToken, SetPtr, SetRawPtr, V_strlen, WriteString, memcpy, operator char*, operator=
// calls: CUtlString::Get, strlen, CResourceStream::Align, CResourceStream::AllocateBytes, memcpy, MurmurHash2LowerCase, RegisterStringToken
// callers: CHitBoxSet::FillInPermData
void __fastcall CHitBoxSet::FillInPermData(
        const CHitBoxSet *const this,
        HitBox_t *pPermData,
        const CHitBox *pHitBox,
        CResourceStream *pResourceStream,
        int *const nHitBoxIndex)
{
  const char *v9; // rax
  const char *v10; // r15
  int v11; // eax
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v14; // eax
  void *v15; // rax
  const char *v16; // rax
  const char *v17; // r15
  int v18; // eax
  unsigned int v19; // eax
  uint8 *v20; // rdx
  uint v21; // eax
  void *v22; // rax
  const char *v23; // rax
  const char *v24; // r15
  int v25; // eax
  unsigned int v26; // eax
  uint8 *v27; // rdx
  uint v28; // eax
  void *v29; // rax
  const char *v30; // r12
  uint32 v31; // eax
  signed int v32; // [rsp+4h] [rbp-3Ch]
  signed int numBytes; // [rsp+8h] [rbp-38h]
  signed int numBytesa; // [rsp+8h] [rbp-38h]
  uint32 numBytesb; // [rsp+8h] [rbp-38h]

  v9 = CUtlString::Get(&pHitBox->m_name);
  v10 = v9;
  if ( v9 == 0 )
    goto LABEL_20;
  v11 = strlen(v9);
  if ( v11 == 0 )
    goto LABEL_20;
  numBytes = v11 + 1;
  CResourceStream::Align(pResourceStream, 1u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, numBytes);
  m_pData = pResourceStream->m_pData;
  v14 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed < v14 )
  {
    memcpy(0, v10, numBytes);
    goto LABEL_20;
  }
  v15 = memcpy(&m_pData[v14], v10, numBytes);
  if ( v15 == 0 )
  {
LABEL_20:
    pPermData->m_name.m_nOffset = 0;
    goto LABEL_6;
  }
  pPermData->m_name.m_nOffset = v15 - pPermData;
LABEL_6:
  v16 = CUtlString::Get(&pHitBox->m_sSurfaceProperty);
  v17 = v16;
  if ( v16 == 0 )
    goto LABEL_24;
  v18 = strlen(v16);
  if ( v18 == 0 )
    goto LABEL_24;
  numBytesa = v18 + 1;
  CResourceStream::Align(pResourceStream, 1u, 0);
  v19 = CResourceStream::AllocateBytes(pResourceStream, numBytesa);
  v20 = pResourceStream->m_pData;
  v21 = v19 - v20;
  if ( pResourceStream->m_nUsed < v21 )
  {
    memcpy(0, v17, numBytesa);
    goto LABEL_24;
  }
  v22 = memcpy(&v20[v21], v17, numBytesa);
  if ( v22 == 0 )
  {
LABEL_24:
    pPermData->m_sSurfaceProperty.m_nOffset = 0;
    goto LABEL_11;
  }
  pPermData->m_sSurfaceProperty.m_nOffset = v22 - (pPermData + 4);
LABEL_11:
  v23 = CUtlString::Get(&pHitBox->m_sBoneName);
  v24 = v23;
  if ( v23 == 0 )
    goto LABEL_22;
  v25 = strlen(v23);
  if ( v25 == 0 )
    goto LABEL_22;
  v32 = v25 + 1;
  CResourceStream::Align(pResourceStream, 1u, 0);
  v26 = CResourceStream::AllocateBytes(pResourceStream, v32);
  v27 = pResourceStream->m_pData;
  v28 = v26 - v27;
  if ( pResourceStream->m_nUsed < v28 )
  {
    memcpy(0, v24, v32);
    goto LABEL_22;
  }
  v29 = memcpy(&v27[v28], v24, v32);
  if ( v29 == 0 )
  {
LABEL_22:
    pPermData->m_sBoneName.m_nOffset = 0;
    goto LABEL_16;
  }
  pPermData->m_sBoneName.m_nOffset = v29 - (pPermData + 12);
LABEL_16:
  v30 = CUtlString::Get(&pHitBox->m_sBoneName);
  v31 = 0;
  if ( v30 != 0 && *v30 != 0 )
  {
    v31 = MurmurHash2LowerCase(v30, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      numBytesb = v31;
      RegisterStringToken(v31, v30, 0, 1);
      v31 = numBytesb;
    }
  }
  pPermData->m_nBoneNameHash = v31;
  pPermData->m_nGroupId = pHitBox->m_nGroupId;
  pPermData->m_cRenderColor[0] = pHitBox->m_cRenderColor._color[0];
  pPermData->m_cRenderColor[1] = pHitBox->m_cRenderColor._color[1];
  pPermData->m_cRenderColor[2] = pHitBox->m_cRenderColor._color[2];
  pPermData->m_cRenderColor[3] = pHitBox->m_cRenderColor._color[3];
  pPermData->m_nHitBoxIndex = *nHitBoxIndex;
  pPermData->m_vMinBounds.x = pHitBox->m_vMinBounds.x;
  pPermData->m_vMinBounds.y = pHitBox->m_vMinBounds.y;
  pPermData->m_vMinBounds.z = pHitBox->m_vMinBounds.z;
  pPermData->m_vMaxBounds.x = pHitBox->m_vMaxBounds.x;
  pPermData->m_vMaxBounds.y = pHitBox->m_vMaxBounds.y;
  pPermData->m_vMaxBounds.z = pHitBox->m_vMaxBounds.z;
  ++*nHitBoxIndex;
}


// CHitBoxSet::FillInPermData  (line 413, @0x000000000316d2c0, libserver.so)  // inlines: Allocate<HitBox_t>, Allocate<char>, AllocateUnaligned<HitBox_t>, AllocateUnaligned<char>, CResourcePointer, CResourcePointerBase, CResourceString, CUnlockedResource, Construct<HitBox_t>, GetDataPtr, GetPtr, GetRawPtr, HitBox_t, ResolveOffset, SetPtr, SetRawPtr, V_strlen, WriteString, memcpy, operator HitBox_t*, operator char*, operator=, operator[]
// calls: CUtlString::Get, strlen, CResourceStream::Align, CResourceStream::AllocateBytes, memcpy, CHitBoxSet::FillInPermData
// callers: CRenderMesh::FillInPermData
void __fastcall CHitBoxSet::FillInPermData(
        const CHitBoxSet *const this,
        HitBoxSet_t *pPermData,
        CResourceStream *pResourceStream,
        int *const nHitBoxIndex)
{
  const char *v7; // rax
  const char *v8; // r14
  int v9; // eax
  signed int v10; // r15d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v13; // eax
  void *v14; // rax
  const char *v15; // rax
  const char *v16; // r14
  int v17; // eax
  signed int v18; // r15d
  unsigned int v19; // eax
  uint8 *v20; // rdx
  uint v21; // eax
  void *v22; // rax
  signed int m_Size; // r14d
  unsigned int v24; // eax
  uint8 *v25; // rdx
  uint8 *v26; // rcx
  uint v27; // eax
  uint8 *v28; // rax
  int i; // edx
  int32 m_nOffset; // ecx
  unsigned __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  char *v35; // rsi
  const CHitBox *v36; // rdx
  HitBox_t *v37; // rsi
  __int64 v39; // [rsp+18h] [rbp-38h]
  __int64 v40; // [rsp+18h] [rbp-38h]

  v7 = CUtlString::Get(&this->m_name);
  v8 = v7;
  if ( v7 == 0 )
    goto LABEL_27;
  v9 = strlen(v7);
  if ( v9 == 0 )
    goto LABEL_27;
  v10 = v9 + 1;
  CResourceStream::Align(pResourceStream, 1u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, v10);
  m_pData = pResourceStream->m_pData;
  v13 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed < v13 )
  {
    memcpy(0, v8, v10);
    goto LABEL_27;
  }
  v14 = memcpy(&m_pData[v13], v8, v10);
  if ( v14 == 0 )
  {
LABEL_27:
    pPermData->m_name.m_nOffset = 0;
    goto LABEL_6;
  }
  pPermData->m_name.m_nOffset = v14 - pPermData;
LABEL_6:
  v15 = CUtlString::Get(&this->m_SourceFilename);
  v16 = v15;
  if ( v15 != 0 )
  {
    v17 = strlen(v15);
    if ( v17 != 0 )
    {
      v18 = v17 + 1;
      CResourceStream::Align(pResourceStream, 1u, 0);
      v19 = CResourceStream::AllocateBytes(pResourceStream, v18);
      v20 = pResourceStream->m_pData;
      v21 = v19 - v20;
      if ( pResourceStream->m_nUsed < v21 )
      {
        memcpy(0, v16, v18);
      }
      else
      {
        v22 = memcpy(&v20[v21], v16, v18);
        if ( v22 != 0 )
        {
          pPermData->m_SourceFilename.m_nOffset = v22 - (pPermData + 4);
          goto LABEL_11;
        }
      }
    }
  }
  pPermData->m_SourceFilename.m_nOffset = 0;
LABEL_11:
  m_Size = this->m_HitBoxes.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v24 = CResourceStream::AllocateBytes(pResourceStream, 56 * m_Size);
  v25 = pResourceStream->m_pData;
  v26 = 0;
  v27 = v24 - v25;
  if ( pResourceStream->m_nUsed >= v27 )
    v26 = &v25[v27];
  if ( m_Size != 0 )
  {
    v28 = v26;
    for ( i = 0; i != m_Size; ++i )
    {
      if ( v28 != 0 )
      {
        *v28 = 0;
        *(v28 + 1) = 0;
        *(v28 + 3) = 0;
      }
      v28 += 56;
    }
    m_nOffset = v26 - (pPermData + 8);
  }
  else
  {
    m_nOffset = 0;
  }
  pPermData->m_hitboxes.m_nOffset = m_nOffset;
  pPermData->m_hitboxes.m_nCount = m_Size;
  if ( m_Size > 0 )
  {
    v31 = 0;
    v32 = (m_Size - 1) + 1LL;
    v33 = 8 * v32;
    v39 = v32 << 7;
    v34 = 0;
    v40 = v39 - v33;
    while ( 1 )
    {
      v35 = 0;
      v36 = &this->m_HitBoxes.m_Memory.m_pMemory[v31 / 0x78];
      if ( m_nOffset != 0 )
        v35 = &pPermData->m_hitboxes + m_nOffset;
      v37 = &v35[v34];
      v31 += 120LL;
      v34 += 56;
      CHitBoxSet::FillInPermData(this, v37, v36, pResourceStream, nHitBoxIndex);
      if ( v31 == v40 )
        break;
      m_nOffset = pPermData->m_hitboxes.m_nOffset;
    }
  }
}


// CRenderMesh::InitFromOldDiskData  (line 440, @0x000000000316dfd0, libserver.so)  // inlines: AddConstraint<CAimConstraint>, AddConstraint<CMorphConstraint>, AddConstraint<COrientConstraint>, AddConstraint<CPointConstraint>, AddConstraint<CTiltTwistConstraint>, AddConstraint<CTwistConstraint>, AddMultipleToTail, AddToTail, CHitBox, CUtlString, Color, Construct<CHitBox>, Construct<CSceneObjectData>, CopyConstruct<CBaseConstraint*>, Count, Element, GetHandle, GetPtr, GetRawPtr, GrowMemory, GrowVector, Init, InsertMultipleBefore, MakeStringToken, ResolveOffset, SetBoneName, SetColor, SetName, ThreadInterlockedIncrement, operator++, operator=, operator[], ~CUtlString
// calls: CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown, CRenderMesh::FindOrAddAttachment, CUtlString::Set, CRenderMesh::FindOrAddHitBoxSet, CUtlMemory<CHitBox, int>::Grow, SetIdentityMatrix, MurmurHash2LowerCase, RegisterStringToken, operator new, CMorphConstraint::CMorphConstraint, CRenderSkeleton::InitFromOldDiskData, CTiltTwistConstraint::CTiltTwistConstraint (23 total)
// globals: jpt_316E58D
void __fastcall CRenderMesh::InitFromOldDiskData(CRenderMesh *const this, const PermRenderMeshData_t *pPermData)
{
  signed int m_nCount; // r12d
  __int64 m_Size; // rbx
  ResourceIdUnsafe_t m_nResourceId; // rbx
  signed int v5; // eax
  char *v6; // r13
  int32 m_nOffset; // eax
  char *v8; // r13
  const char *v9; // rsi
  __int64 v10; // rax
  const char *v11; // rax
  CAttachment *v12; // rax
  uint8 v13; // dl
  CHitBoxSet *v14; // r9
  char *v15; // r12
  char *v16; // r15
  CUtlString *m_influenceNames; // r10
  CAttachment *v18; // r8
  CAttachment *v19; // r14
  __int64 v20; // rbx
  CAttachment *v21; // r13
  __int64 m_pString_high; // rdx
  const char *v23; // rsi
  const char *v24; // rdx
  signed int v25; // eax
  char *v26; // r14
  int32 v27; // eax
  char *v28; // r14
  const char *v29; // rsi
  __int64 v30; // rax
  const char *v31; // rax
  CHitBoxSet *v32; // rax
  const char *v33; // rsi
  CHitBoxSet *v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // r12
  int v39; // ebx
  int v40; // eax
  CHitBox *v41; // r8
  __int64 v42; // r12
  int i; // r15d
  CHitBox *v44; // rbx
  __int64 v45; // rdx
  vec_t z; // eax
  __int64 v47; // rbx
  char *v48; // r12
  const char *v49; // r15
  uint32 v50; // eax
  char v51; // cl
  char v52; // si
  int v53; // eax
  char *v54; // r9
  const char *v55; // rsi
  const char *v56; // r13
  CHitBox *v57; // r14
  __int64 v58; // rax
  const char *v59; // rax
  __int64 v60; // rax
  const char *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  CUtlString *p_m_sBoneName; // rdi
  signed int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // r14
  char *v68; // r12
  int32 v69; // eax
  char *v70; // r12
  CTwistConstraint *v71; // r15
  __int64 v72; // rax
  int v73; // edx
  CBaseConstraint **v74; // rax
  CResourcePointer<RenderSkeletonData_t> *p_m_skeleton; // rdx
  __int64 v76; // rax
  int m_nAllocationCount; // eax
  int v78; // r13d
  CSceneObjectData *m_pMemory; // rax
  signed int v80; // r13d
  __int64 v81; // rbx
  __int64 v82; // rbx
  char *v83; // rdx
  const SceneObjectData_t *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // [rsp+8h] [rbp-78h]
  __int64 v87; // [rsp+10h] [rbp-70h]
  __int64 v88; // [rsp+10h] [rbp-70h]
  const AttachmentData_t *diskAttach; // [rsp+18h] [rbp-68h]
  uint32 diskAttacha; // [rsp+18h] [rbp-68h]
  CAttachment *v93; // [rsp+30h] [rbp-50h]
  __int64 v94; // [rsp+30h] [rbp-50h]
  CHitBoxSet *v95; // [rsp+38h] [rbp-48h]
  int *v96; // [rsp+38h] [rbp-48h]
  int v97; // [rsp+38h] [rbp-48h]
  CHitBoxSet *pHitBoxSeta; // [rsp+40h] [rbp-40h]
  CHitBoxSet *pHitBoxSet; // [rsp+40h] [rbp-40h]
  CUtlString *v100; // [rsp+48h] [rbp-38h]
  int v101; // [rsp+48h] [rbp-38h]

  m_nCount = pPermData->m_sceneObjects.m_nCount;
  m_Size = this->m_sceneObjects.m_Size;
  if ( m_nCount != 0 )
  {
    m_nAllocationCount = this->m_sceneObjects.m_Memory.m_nAllocationCount;
    v78 = m_nCount + m_Size;
    if ( m_nCount + m_Size > m_nAllocationCount )
      CUtlMemory<CSceneObjectData,int>::Grow(&this->m_sceneObjects.m_Memory, v78 - m_nAllocationCount);
    this->m_sceneObjects.m_Size = v78;
    if ( m_nCount > 0 )
    {
      m_pMemory = this->m_sceneObjects.m_Memory.m_pMemory;
      v80 = 0;
      v81 = m_Size;
      do
      {
        if ( &m_pMemory[v81] != 0 )
        {
          CSceneObjectData::CSceneObjectData(&m_pMemory[v81]);
          m_pMemory = this->m_sceneObjects.m_Memory.m_pMemory;
        }
        ++v80;
        ++v81;
      }
      while ( m_nCount > v80 );
      v82 = 0;
      while ( 1 )
      {
        v83 = 0;
        if ( pPermData->m_sceneObjects.m_nOffset != 0 )
          v83 = pPermData + pPermData->m_sceneObjects.m_nOffset;
        v84 = &v83[52 * v82];
        v85 = v82++;
        CSceneObjectData::InitFromOldDiskData(&m_pMemory[v85], v84);
        if ( m_nCount <= v82 )
          break;
        m_pMemory = this->m_sceneObjects.m_Memory.m_pMemory;
      }
    }
  }
  m_nResourceId = pPermData->m_pMorphSet.m_nResourceId;
  if ( this->m_hV0MorphSet.m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeMorphSetData_t>::Shutdown(&this->m_hV0MorphSet);
  this->m_hV0MorphSet.m_pBinding = m_nResourceId;
  if ( m_nResourceId != 0 )
  {
    if ( (*(m_nResourceId + 16) & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_nResourceId, 2, &this->m_hV0MorphSet);
      m_nResourceId = this->m_hV0MorphSet.m_pBinding;
    }
    _InterlockedAdd((m_nResourceId + 24), 1u);
  }
  v5 = pPermData->m_attachments.m_nCount;
  if ( v5 > 0 )
  {
    v87 = 0;
    v86 = 116 * ((v5 - 1) + 1LL);
    do
    {
      v6 = 0;
      m_nOffset = pPermData->m_attachments.m_nOffset;
      if ( m_nOffset != 0 )
        v6 = &pPermData->m_attachments + m_nOffset;
      v8 = &v6[v87];
      v9 = "";
      v10 = *v8;
      if ( v10 != 0 )
      {
        v11 = &v8[v10];
        if ( v11 != 0 )
          v9 = v11;
      }
      v12 = CRenderMesh::FindOrAddAttachment(this, v9, 0);
      v13 = v8[115];
      v12->m_nInfluences = v13;
      if ( v13 != 0 )
      {
        v14 = v8;
        v15 = v8;
        v16 = v8;
        diskAttach = v8;
        m_influenceNames = v12->m_influenceNames;
        v18 = v12;
        v19 = v12;
        v20 = 0;
        v21 = v12;
        do
        {
          m_pString_high = SHIDWORD(v14->m_name.m_pString);
          v23 = "";
          if ( m_pString_high != 0 )
          {
            v24 = &v14->m_name.m_pString + m_pString_high + 4;
            if ( v24 != 0 )
              v23 = v24;
          }
          v93 = v18;
          v16 += 12;
          v95 = v14;
          v15 += 16;
          v19 = (v19 + 16);
          pHitBoxSeta = (&v14->m_name.m_pString + 4);
          v100 = m_influenceNames;
          CUtlString::Set(m_influenceNames, v23);
          v93->m_vInfluenceOffsets[0].x = *(v16 + 1);
          v18 = (&v93->m_influenceNames[0].m_pString + 4);
          v93->m_vInfluenceOffsets[0].y = *(v16 + 2);
          v93->m_vInfluenceOffsets[0].z = *(v16 + 3);
          m_influenceNames = v100 + 1;
          v19->m_vInfluenceOffsets[1].z = *(v15 + 9);
          v19->m_vInfluenceOffsets[2].x = *(v15 + 10);
          v19->m_vInfluenceOffsets[2].y = *(v15 + 11);
          v19->m_vInfluenceOffsets[2].z = *(v15 + 12);
          v14 = pHitBoxSeta;
          v21->m_influenceWeights[v20] = *(&v95[2].m_name.m_pString + 1);
          v21->m_bInfluenceRootTransform[v20] = diskAttach->m_nFlags[v20] & 1;
          ++v20;
        }
        while ( v21->m_nInfluences > v20 );
      }
      v87 += 116;
    }
    while ( v87 != v86 );
  }
  v25 = pPermData->m_hitboxsets.m_nCount;
  if ( v25 > 0 )
  {
    v94 = 0;
    v88 = 16 * ((v25 - 1) + 1LL);
    while ( 1 )
    {
      v26 = 0;
      v27 = pPermData->m_hitboxsets.m_nOffset;
      if ( v27 != 0 )
        v26 = &pPermData->m_hitboxsets + v27;
      v28 = &v26[v94];
      v29 = "";
      v30 = *v28;
      if ( v30 != 0 )
      {
        v31 = &v28[v30];
        if ( v31 != 0 )
          v29 = v31;
      }
      v32 = CRenderMesh::FindOrAddHitBoxSet(this, v29, 0);
      v33 = "";
      v34 = v32;
      v35 = *(v28 + 1);
      if ( v35 != 0 )
      {
        v36 = &v28[v35 + 4];
        if ( v36 != 0 )
          v33 = v36;
      }
      CUtlString::Set(&v34->m_SourceFilename, v33);
      v37 = *(v28 + 3);
      v38 = v34->m_HitBoxes.m_Size;
      v101 = v37;
      if ( v37 != 0 )
      {
        v39 = v37 + v38;
        v40 = v34->m_HitBoxes.m_Memory.m_nAllocationCount;
        if ( v39 > v40 )
          CUtlMemory<CHitBox,int>::Grow(&v34->m_HitBoxes.m_Memory, v39 - v40);
        v34->m_HitBoxes.m_Size = v39;
        if ( v101 > 0 )
          break;
      }
LABEL_24:
      v94 += 16;
      if ( v94 == v88 )
        goto LABEL_58;
    }
    v41 = v34->m_HitBoxes.m_Memory.m_pMemory;
    v42 = v38;
    for ( i = 0; i < v101; ++i )
    {
      v44 = &v41[v42];
      if ( &v41[v42] != 0 )
      {
        v44->m_cRenderColor._color[0] = -1;
        v44->m_name.m_pString = 0;
        v44->m_sSurfaceProperty.m_pString = 0;
        v44->m_sBoneName.m_pString = 0;
        v45 = *&vec3_origin.x;
        v44->m_nBoneNameHash = 0;
        z = vec3_origin.z;
        v44->m_nGroupId = 0;
        v44->m_cRenderColor._color[1] = -1;
        v44->m_cRenderColor._color[2] = -1;
        v44->m_cRenderColor._color[3] = -1;
        v44->m_nHitBoxIndex = 0;
        *&v44->m_vMinBounds.x = v45;
        v44->m_vMinBounds.z = z;
        *&v44->m_vMaxBounds.x = v45;
        v44->m_vMaxBounds.z = z;
        v44->m_bForcedTransform = 0;
        v44->m_bTranslationOnly = 0;
        v44->m_bVisible = 0;
        v44->m_bSelected = 0;
        SetIdentityMatrix(&v44->m_forcedTransform);
        v41 = v34->m_HitBoxes.m_Memory.m_pMemory;
      }
      ++v42;
    }
    v47 = 0;
    pHitBoxSet = v34;
    v96 = (v28 + 8);
    v48 = v28;
    while ( 1 )
    {
      v53 = *(v48 + 2);
      v54 = 0;
      if ( v53 != 0 )
        v54 = v96 + v53;
      v55 = "";
      v56 = &v54[56 * v47];
      v57 = &v41[v47];
      v58 = *v56;
      if ( v58 != 0 )
      {
        v59 = &v56[v58];
        if ( v59 != 0 )
          v55 = v59;
      }
      CUtlString::Set(&v57->m_name, v55);
      v60 = *(v56 + 1);
      v61 = "";
      if ( v60 != 0 )
      {
        v62 = &v56[v60 + 4];
        if ( v62 != 0 )
          v61 = v62;
      }
      CUtlString::Set(&v57->m_sSurfaceProperty, v61);
      v63 = *(v56 + 3);
      p_m_sBoneName = &v57->m_sBoneName;
      if ( v63 == 0 || (v49 = &v56[v63 + 12], &v56[v63] == -12LL) )
      {
        CUtlString::Set(p_m_sBoneName, "");
        v49 = "";
        v50 = 0;
        if ( asc_32DB004[2] == 0 )
          goto LABEL_44;
      }
      else
      {
        CUtlString::Set(p_m_sBoneName, &v56[v63 + 12]);
        v50 = 0;
        if ( *v49 == 0 )
          goto LABEL_44;
      }
      v50 = MurmurHash2LowerCase(v49, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        diskAttacha = v50;
        RegisterStringToken(v50, v49, 0, 1);
        v50 = diskAttacha;
      }
LABEL_44:
      v57->m_nBoneNameHash = v50;
      ++v47;
      v57->m_nGroupId = *(v56 + 2);
      v51 = v56[21];
      v52 = v56[20];
      *&v57->m_cRenderColor._color[2] = *(v56 + 11);
      v57->m_cRenderColor._color[1] = v51;
      v57->m_cRenderColor._color[0] = v52;
      v57->m_vMinBounds.x = *(v56 + 7);
      v57->m_vMinBounds.y = *(v56 + 8);
      v57->m_vMinBounds.z = *(v56 + 9);
      v57->m_vMaxBounds.x = *(v56 + 10);
      v57->m_vMaxBounds.y = *(v56 + 11);
      v57->m_vMaxBounds.z = *(v56 + 12);
      v57->m_nHitBoxIndex = *(v56 + 12);
      if ( v101 <= v47 )
        goto LABEL_24;
      v41 = pHitBoxSet->m_HitBoxes.m_Memory.m_pMemory;
    }
  }
LABEL_58:
  v65 = pPermData->m_boneConstraints.m_nCount;
  if ( v65 > 0 )
  {
    v66 = 0;
    v67 = 32 * (3LL * (v65 - 1) + 3);
    do
    {
      v68 = 0;
      v69 = pPermData->m_boneConstraints.m_nOffset;
      if ( v69 != 0 )
        v68 = &pPermData->m_boneConstraints + v69;
      v70 = &v68[v66];
      switch ( *(v70 + 1) )
      {
        case 2:
          v71 = operator new(0x78u);
          CTwistConstraint::CTwistConstraint(v71);
          goto LABEL_64;
        case 3:
          v71 = operator new(0x68u);
          CAimConstraint::CAimConstraint(v71);
          goto LABEL_64;
        case 4:
          v71 = operator new(0x50u);
          CPointConstraint::CPointConstraint(v71);
          goto LABEL_64;
        case 6:
          v71 = operator new(0x50u);
          COrientConstraint::COrientConstraint(v71);
          goto LABEL_64;
        case 9:
          v71 = operator new(0x88u);
          CTiltTwistConstraint::CTiltTwistConstraint(v71);
          v72 = this->m_constraints.m_Size;
          v73 = this->m_constraints.m_Size;
          if ( v72 == this->m_constraints.m_Memory.m_nAllocationCount )
            goto LABEL_73;
          goto LABEL_65;
        case 0xA:
          v71 = operator new(0x90u);
          CMorphConstraint::CMorphConstraint(v71);
LABEL_64:
          v72 = this->m_constraints.m_Size;
          v73 = this->m_constraints.m_Size;
          if ( v72 == this->m_constraints.m_Memory.m_nAllocationCount )
          {
LABEL_73:
            v97 = v72;
            CUtlMemory<CBaseConstraint *,int>::Grow(&this->m_constraints.m_Memory, 1);
            v73 = this->m_constraints.m_Size;
            v72 = v97;
          }
LABEL_65:
          this->m_constraints.m_Size = v73 + 1;
          v74 = &this->m_constraints.m_Memory.m_pMemory[v72];
          if ( v74 != 0 )
            *v74 = v71;
          (*(v71->_vptr_CBaseConstraint + 6))(v71, v70);
          break;
        default:
          break;
      }
      v66 += 96;
    }
    while ( v66 != v67 );
  }
  p_m_skeleton = &pPermData->m_skeleton;
  v76 = pPermData->m_skeleton.m_nOffset;
  if ( v76 != 0 && (p_m_skeleton + v76) != 0 )
    CRenderSkeleton::InitFromOldDiskData(&this->m_skeleton, (p_m_skeleton + v76));
}


// CRenderMesh::FillInPermData  (line 544, @0x000000000316f210, libserver.so)  // inlines: Allocate<AttachmentData_t>, Allocate<BaseConstraint_t>, Allocate<HitBoxSet_t>, Allocate<RenderSkeletonData_t>, Allocate<SceneObjectData_t>, AllocateUnaligned<AttachmentData_t>, AllocateUnaligned<BaseConstraint_t>, AllocateUnaligned<HitBoxSet_t>, AllocateUnaligned<RenderSkeletonData_t>, AllocateUnaligned<SceneObjectData_t>, AttachmentData_t, BaseConstraint_t, CResourceArray, CResourceArrayBase, CResourcePointer, CResourcePointerBase, CResourceString, CUnlockedResource, Construct<AttachmentData_t>, Construct<BaseConstraint_t>, Construct<HitBoxSet_t>, Construct<RenderSkeletonData_t>, Construct<SceneObjectData_t>, Element, GetDataPtr, GetPtr, GetRawPtr, HitBoxSet_t, RenderSkeletonData_t, ResolveOffset, SceneObjectData_t, SetRawPtr, V_memset, memset, operator AttachmentData_t*, operator BaseConstraint_t*, operator HitBoxSet_t*, operator RenderSkeletonData_t*, operator SceneObjectData_t*, operator=, operator[]
// calls: CResourceStream::Align, CResourceStream::AllocateBytes, CSceneObjectData::FillInPermData, WriteHandleToExtRef, CRenderSkeleton::GetBoneCount, CRenderSkeleton::FillInPermData, CAttachment::FillInPermData, CHitBoxSet::FillInPermData
// callers: CRenderMesh::CompileToPermDataPointer
void __fastcall CRenderMesh::FillInPermData(
        const CRenderMesh *const this,
        PermRenderMeshData_t *pPermData,
        CResourceStream *pResourceStream)
{
  signed int m_Size; // r14d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint8 *v9; // rcx
  uint v10; // eax
  uint8 *v11; // rax
  int i; // edx
  int32 m_nOffset; // edx
  __int64 v14; // r15
  int *v15; // r14
  __int64 v16; // rax
  __int64 v17; // r15
  char *v18; // rsi
  SceneObjectData_t *v19; // rsi
  const CSceneObjectData *v20; // rdi
  unsigned int v21; // eax
  uint8 *v22; // rdx
  uint v23; // eax
  uint8 *v24; // rax
  int32 v25; // eax
  signed int m_NumElements; // r14d
  unsigned int v27; // eax
  uint8 *v28; // rdx
  uint8 *v29; // rcx
  uint v30; // eax
  uint8 *v31; // rax
  int j; // edx
  int32 v33; // edx
  int *v34; // r15
  __int64 v35; // rax
  __int64 v36; // r14
  char *v37; // rsi
  AttachmentData_t *v38; // rsi
  UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v39; // rdi
  signed int v40; // r14d
  unsigned int v41; // eax
  uint8 *v42; // rdx
  uint8 *v43; // rcx
  uint v44; // eax
  uint8 *v45; // rax
  int k; // edx
  int32 v47; // ecx
  __int64 v48; // r15
  char *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  signed int v52; // r14d
  unsigned int v53; // eax
  uint8 *v54; // rdx
  uint8 *v55; // rcx
  uint v56; // eax
  char *v57; // rax
  int m; // edx
  char *v59; // rsi
  int32 v60; // ecx
  unsigned __int64 v61; // r15
  __int64 v62; // r14
  CBaseConstraint *v63; // rdi
  char *v64; // rdx
  __int64 v65; // rcx
  int *v66; // [rsp+8h] [rbp-48h]
  int *v67; // [rsp+8h] [rbp-48h]
  int nHitBoxIndex[13]; // [rsp+1Ch] [rbp-34h] BYREF

  memset(pPermData, 0, sizeof(PermRenderMeshData_t));
  m_Size = this->m_sceneObjects.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, 52 * m_Size);
  m_pData = pResourceStream->m_pData;
  v9 = 0;
  v10 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed >= v10 )
    v9 = &m_pData[v10];
  if ( m_Size != 0 )
  {
    v11 = v9;
    for ( i = 0; i != m_Size; ++i )
    {
      if ( v11 != 0 )
      {
        *(v11 + 7) = 0;
        *(v11 + 8) = 0;
      }
      v11 += 52;
    }
    m_nOffset = v9 - pPermData;
  }
  else
  {
    m_nOffset = 0;
  }
  pPermData->m_sceneObjects.m_nOffset = m_nOffset;
  pPermData->m_sceneObjects.m_nCount = m_Size;
  if ( m_Size > 0 )
  {
    v14 = 13 * ((m_Size - 1) + 1LL);
    v15 = 0;
    v16 = 4 * v14;
    v17 = 0;
    v66 = v16;
    while ( 1 )
    {
      v18 = 0;
      if ( m_nOffset != 0 )
        v18 = pPermData + m_nOffset;
      v19 = &v18[v15];
      v20 = &this->m_sceneObjects.m_Memory.m_pMemory[v17];
      v15 += 13;
      ++v17;
      CSceneObjectData::FillInPermData(v20, v19, pResourceStream);
      if ( v15 == v66 )
        break;
      m_nOffset = pPermData->m_sceneObjects.m_nOffset;
    }
  }
  WriteHandleToExtRef(this->m_hV0MorphSet.m_pBinding, &pPermData->m_pMorphSet);
  if ( CRenderSkeleton::GetBoneCount(&this->m_skeleton) > 0 )
  {
    CResourceStream::Align(pResourceStream, 4u, 0);
    v21 = CResourceStream::AllocateBytes(pResourceStream, 0x48u);
    v22 = pResourceStream->m_pData;
    v23 = v21 - v22;
    if ( pResourceStream->m_nUsed >= v23 && (v24 = &v22[v23]) != 0 )
    {
      *(v24 + 1) = 0;
      *(v24 + 2) = 0;
      *(v24 + 3) = 0;
      *(v24 + 4) = 0;
      *(v24 + 5) = 0;
      *(v24 + 6) = 0;
      *(v24 + 7) = 0;
      *(v24 + 8) = 0;
      *(v24 + 9) = 0;
      *(v24 + 10) = 0;
      *(v24 + 11) = 0;
      *(v24 + 12) = 0;
      *(v24 + 14) = 0;
      *(v24 + 15) = 0;
      *(v24 + 16) = 0;
      *(v24 + 17) = 0;
      v25 = v24 - (pPermData + 16);
      pPermData->m_skeleton.m_nOffset = v25;
      if ( v25 != 0 )
      {
        CRenderSkeleton::FillInPermData(&this->m_skeleton, (&pPermData->m_skeleton + v25), pResourceStream);
        goto LABEL_20;
      }
    }
    else
    {
      pPermData->m_skeleton.m_nOffset = 0;
    }
    CRenderSkeleton::FillInPermData(&this->m_skeleton, 0, pResourceStream);
  }
LABEL_20:
  m_NumElements = this->m_attachments.m_Elements.m_Tree.m_NumElements;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v27 = CResourceStream::AllocateBytes(pResourceStream, 116 * m_NumElements);
  v28 = pResourceStream->m_pData;
  v29 = 0;
  v30 = v27 - v28;
  if ( pResourceStream->m_nUsed >= v30 )
    v29 = &v28[v30];
  if ( m_NumElements != 0 )
  {
    v31 = v29;
    for ( j = 0; j != m_NumElements; ++j )
    {
      if ( v31 != 0 )
      {
        *v31 = 0;
        *(v31 + 1) = 0;
        *(v31 + 2) = 0;
        *(v31 + 3) = 0;
      }
      v31 += 116;
    }
    v33 = v29 - (pPermData + 20);
  }
  else
  {
    v33 = 0;
  }
  pPermData->m_attachments.m_nOffset = v33;
  pPermData->m_attachments.m_nCount = m_NumElements;
  if ( m_NumElements > 0 )
  {
    v34 = 0;
    v35 = 116 * ((m_NumElements - 1) + 1LL);
    v36 = 0;
    v67 = v35;
    while ( 1 )
    {
      v37 = 0;
      if ( v33 != 0 )
        v37 = &pPermData->m_attachments + v33;
      v38 = &v37[v34];
      v39 = &this->m_attachments.m_Elements.m_Tree.m_Elements.m_pMemory[v36];
      v34 += 29;
      ++v36;
      CAttachment::FillInPermData(&v39->m_Data.elem, v38, pResourceStream);
      if ( v34 == v67 )
        break;
      v33 = pPermData->m_attachments.m_nOffset;
    }
  }
  v40 = this->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
  nHitBoxIndex[0] = 0;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v41 = CResourceStream::AllocateBytes(pResourceStream, 16 * v40);
  v42 = pResourceStream->m_pData;
  v43 = 0;
  v44 = v41 - v42;
  if ( pResourceStream->m_nUsed >= v44 )
    v43 = &v42[v44];
  if ( v40 != 0 )
  {
    v45 = v43;
    for ( k = 0; k != v40; ++k )
    {
      if ( v45 != 0 )
      {
        *v45 = 0;
        *(v45 + 1) = 0;
        *(v45 + 2) = 0;
        *(v45 + 3) = 0;
      }
      v45 += 16;
    }
    v47 = v43 - (pPermData + 28);
  }
  else
  {
    v47 = 0;
  }
  pPermData->m_hitboxsets.m_nOffset = v47;
  pPermData->m_hitboxsets.m_nCount = v40;
  if ( v40 > 0 )
  {
    v48 = 0;
    while ( 1 )
    {
      v49 = 0;
      if ( v47 != 0 )
        v49 = &pPermData->m_hitboxsets + v47;
      v50 = v48;
      v51 = v48++;
      CHitBoxSet::FillInPermData(
        &this->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v50].m_Data.elem,
        &v49[16 * v51],
        pResourceStream,
        nHitBoxIndex);
      if ( v40 <= v48 )
        break;
      v47 = pPermData->m_hitboxsets.m_nOffset;
    }
  }
  v52 = this->m_constraints.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v53 = CResourceStream::AllocateBytes(pResourceStream, 96 * v52);
  v54 = pResourceStream->m_pData;
  v55 = 0;
  v56 = v53 - v54;
  if ( pResourceStream->m_nUsed >= v56 )
    v55 = &v54[v56];
  if ( v52 != 0 )
  {
    v57 = v55;
    for ( m = 0; m != v52; ++m )
    {
      if ( v57 != 0 )
      {
        *v57 = 0;
        v59 = (v57 - v55);
        *(v57 + 20) = 0;
        *&v59[v55 + 84] = 0;
        *(v57 + 22) = 0;
        *&v59[v55 + 92] = 0;
      }
      v57 += 96;
    }
    v60 = v55 - (pPermData + 36);
  }
  else
  {
    v60 = 0;
  }
  pPermData->m_boneConstraints.m_nOffset = v60;
  pPermData->m_boneConstraints.m_nCount = v52;
  if ( v52 > 0 )
  {
    v61 = 0;
    v62 = 8LL * (v52 - 1) + 8;
    while ( 1 )
    {
      v63 = this->m_constraints.m_Memory.m_pMemory[v61 / 8];
      v64 = 0;
      if ( v60 != 0 )
        v64 = &pPermData->m_boneConstraints + v60;
      v65 = 3 * v61;
      v61 += 8LL;
      (*(v63->_vptr_CBaseConstraint + 5))(v63, &v64[4 * v65], pResourceStream);
      if ( v61 == v62 )
        break;
      v60 = pPermData->m_boneConstraints.m_nOffset;
    }
  }
}


// CRenderMesh::CompileToPermDataPointer  (line 598, @0x000000000316f730, libserver.so)  // inlines: Allocate<PermRenderMeshData_t>, AllocateUnaligned<PermRenderMeshData_t>, CResourceArray, CResourceArrayBase, CResourcePointer, CResourcePointerBase, CUnlockedResource, Construct<PermRenderMeshData_t>, GetDataPtr, GetPtr, PermRenderMeshData_t, operator PermRenderMeshData_t*
// calls: CResourceStream::Align, CResourceStream::AllocateBytes, CRenderMesh::FillInPermData
PermRenderMeshData_t *__fastcall CRenderMesh::CompileToPermDataPointer(
        const CRenderMesh *const this,
        CResourceStream *pResourceStream)
{
  PermRenderMeshData_t *v4; // rbx
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v7; // eax
  bool v9; // zf
  PermRenderMeshData_t *v10; // rdx

  if ( pResourceStream == 0 )
    return 0;
  v4 = 0;
  CResourceStream::Align(pResourceStream, 8u, 0);
  Bytes = CResourceStream::AllocateBytes(pResourceStream, 0x40u);
  m_pData = pResourceStream->m_pData;
  v7 = Bytes - m_pData;
  if ( pResourceStream->m_nUsed >= v7 )
  {
    v9 = &m_pData[v7] == 0;
    v10 = &m_pData[v7];
    v4 = v10;
    if ( !v9 )
    {
      v10->m_sceneObjects.m_nOffset = 0;
      v10->m_sceneObjects.m_nCount = 0;
      v10->m_skeleton.m_nOffset = 0;
      v10->m_attachments.m_nOffset = 0;
      v10->m_attachments.m_nCount = 0;
      v10->m_hitboxsets.m_nOffset = 0;
      v10->m_hitboxsets.m_nCount = 0;
      v10->m_boneConstraints.m_nOffset = 0;
      v10->m_boneConstraints.m_nCount = 0;
      v10->m_vertexBuffers.m_nOffset = 0;
      v10->m_vertexBuffers.m_nCount = 0;
      v10->m_indexBuffers.m_nOffset = 0;
      v10->m_indexBuffers.m_nCount = 0;
    }
  }
  CRenderMesh::FillInPermData(this, v4, pResourceStream);
  return v4;
}


// NewConstraintTypeToOld  (line 616, @0x000000000316d530, libserver.so)
ConstraintType_t __fastcall NewConstraintTypeToOld(BoneConstraintType_t nNew)
{
  return nNew;
}


// CBaseConstraint::FillInPermData  (line 635, @0x000000000316d540, libserver.so)  // inlines: Allocate<ConstraintSlave_t>, Allocate<ConstraintTarget_t>, Allocate<char>, AllocateUnaligned<ConstraintSlave_t>, AllocateUnaligned<ConstraintTarget_t>, AllocateUnaligned<char>, CUnlockedResource, GetDataPtr, GetPtr, GetRawPtr, Init, ResolveOffset, SetPtr, SetRawPtr, V_memcpy, V_strlen, WriteString, memcpy, operator ConstraintSlave_t*, operator ConstraintTarget_t*, operator char*, operator=
// calls: CUtlString::Get, strlen, CResourceStream::Align, CResourceStream::AllocateBytes, memcpy
// callers: CAimConstraint::FillInPermData, CTwistConstraint::FillInPermData, CTiltTwistConstraint::FillInPermData
void __fastcall CBaseConstraint::FillInPermData(
        const CBaseConstraint *const this,
        BaseConstraint_t *pPermData,
        CResourceStream *pResourceStream)
{
  const char *v6; // rax
  const char *v7; // r14
  int v8; // eax
  signed int v9; // r15d
  unsigned int Bytes; // eax
  uint8 *m_pData; // rdx
  uint v12; // eax
  void *v13; // rax
  vec_t z; // xmm0_4
  __int64 m_Size; // r14
  unsigned int v16; // eax
  uint8 *v17; // rdx
  uint v18; // ecx
  uint v19; // eax
  int32 v20; // ecx
  size_t v21; // rdx
  CConstraintSlave *m_pMemory; // rsi
  char *v23; // rdi
  __int64 v24; // r14
  unsigned int v25; // eax
  uint8 *v26; // rdx
  uint v27; // ecx
  uint v28; // eax
  int32 v29; // eax
  char *v30; // rdi

  v6 = CUtlString::Get(&this->m_name);
  v7 = v6;
  if ( v6 != 0 )
  {
    v8 = strlen(v6);
    if ( v8 != 0 )
    {
      v9 = v8 + 1;
      CResourceStream::Align(pResourceStream, 1u, 0);
      Bytes = CResourceStream::AllocateBytes(pResourceStream, v9);
      m_pData = pResourceStream->m_pData;
      v12 = Bytes - m_pData;
      if ( pResourceStream->m_nUsed < v12 )
      {
        memcpy(0, v7, v9);
      }
      else
      {
        v13 = memcpy(&m_pData[v12], v7, v9);
        if ( v13 != 0 )
        {
          pPermData->m_name.m_nOffset = v13 - pPermData;
          goto LABEL_6;
        }
      }
    }
  }
  pPermData->m_name.m_nOffset = 0;
LABEL_6:
  pPermData->m_nConstraintType = (*(this->_vptr_CBaseConstraint + 4))(this);
  pPermData->m_vUpVector.x = this->m_vUpVector.x;
  pPermData->m_vUpVector.y = this->m_vUpVector.y;
  z = this->m_vUpVector.z;
  pPermData->m_qAimOffset.x = 0.0;
  pPermData->m_qAimOffset.y = 0.0;
  pPermData->m_vUpVector.z = z;
  pPermData->m_qAimOffset.z = 0.0;
  pPermData->m_qAimOffset.w = 1.0;
  pPermData->m_nTargetUpBoneHash = 0;
  pPermData->m_nUpType = 0;
  pPermData->m_bInverse = 0;
  pPermData->m_qParentBindRotation.x = 0.0;
  pPermData->m_qParentBindRotation.y = 0.0;
  pPermData->m_qParentBindRotation.z = 0.0;
  pPermData->m_qParentBindRotation.w = 1.0;
  pPermData->m_qChildBindRotation.x = 0.0;
  pPermData->m_qChildBindRotation.y = 0.0;
  pPermData->m_qChildBindRotation.z = 0.0;
  pPermData->m_qChildBindRotation.w = 1.0;
  m_Size = this->m_slaves.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v16 = CResourceStream::AllocateBytes(pResourceStream, 36 * m_Size);
  v17 = pResourceStream->m_pData;
  v18 = 0;
  v19 = v16 - v17;
  if ( pResourceStream->m_nUsed >= v19 )
    v18 = v17 + v19;
  if ( m_Size != 0 )
  {
    pPermData->m_slaves.m_nCount = m_Size;
    v20 = v18 - (pPermData + 80);
    pPermData->m_slaves.m_nOffset = v20;
    v21 = 36 * m_Size;
    m_pMemory = this->m_slaves.m_Memory.m_pMemory;
    if ( v20 != 0 )
      v23 = &pPermData->m_slaves + v20;
    else
      v23 = 0;
  }
  else
  {
    pPermData->m_slaves.m_nOffset = 0;
    v21 = 0;
    v23 = 0;
    pPermData->m_slaves.m_nCount = 0;
    m_pMemory = this->m_slaves.m_Memory.m_pMemory;
  }
  memcpy(v23, m_pMemory, v21);
  v24 = this->m_targets.m_Size;
  CResourceStream::Align(pResourceStream, 4u, 0);
  v25 = CResourceStream::AllocateBytes(pResourceStream, 40 * v24);
  v26 = pResourceStream->m_pData;
  v27 = 0;
  v28 = v25 - v26;
  if ( pResourceStream->m_nUsed >= v28 )
    v27 = v26 + v28;
  if ( v24 != 0 )
  {
    pPermData->m_targets.m_nCount = v24;
    v29 = v27 - (pPermData + 88);
    pPermData->m_targets.m_nOffset = v29;
    if ( v27 == pPermData + 88 )
      v30 = 0;
    else
      v30 = &pPermData->m_targets + v29;
    memcpy(v30, this->m_targets.m_Memory.m_pMemory, 40 * v24);
  }
  else
  {
    pPermData->m_targets.m_nOffset = 0;
    pPermData->m_targets.m_nCount = 0;
    memcpy(0, this->m_targets.m_Memory.m_pMemory, 0);
  }
}


// CBaseConstraint::InitFromOldDiskData  (line 664, @0x000000000316f810, libserver.so)  // inlines: GetPtr, GetRawPtr, ResolveOffset, operator=, operator[]
// calls: CUtlString::Set, CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::SetCount, CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::SetCount
// callers: CAimConstraint::InitFromOldDiskData, CTwistConstraint::InitFromOldDiskData, CTiltTwistConstraint::InitFromOldDiskData
void __fastcall CBaseConstraint::InitFromOldDiskData(CBaseConstraint *const this, const BaseConstraint_t *pPermData)
{
  __int64 m_nOffset; // rax
  const char *v5; // rsi
  const char *v6; // rax
  signed int m_nCount; // r13d
  CResourceArray<ConstraintSlave_t> *p_m_slaves; // rdi
  unsigned __int64 v9; // rax
  int32 v10; // ecx
  char *v11; // rdx
  char *v12; // rdx
  int32 v13; // ecx
  char *v14; // rcx
  int32 v15; // edx
  float *v16; // rcx
  CConstraintSlave *v17; // rdx
  vec_t v18; // xmm0_4
  char *v19; // rcx
  int32 v20; // edx
  unsigned __int64 v21; // rdx
  char *v22; // rcx
  _DWORD *v23; // rdx
  signed int v24; // r13d
  CResourceArray<ConstraintTarget_t> *p_m_targets; // rdi
  unsigned __int64 v26; // rax
  int32 v27; // ecx
  char *v28; // rdx
  char *v29; // rdx
  int32 v30; // ecx
  char *v31; // rcx
  int32 v32; // edx
  float *v33; // rcx
  CConstraintTarget *v34; // rdx
  vec_t v35; // xmm0_4
  char *v36; // rcx
  int32 v37; // edx
  char *v38; // rcx
  CConstraintTarget *v39; // rdx
  char *v40; // rdx
  int32 v41; // ecx
  CConstraintTarget *v42; // r8
  char v43; // dl

  m_nOffset = pPermData->m_name.m_nOffset;
  v5 = "";
  if ( m_nOffset != 0 )
  {
    v6 = pPermData + m_nOffset;
    if ( v6 != 0 )
      v5 = v6;
  }
  CUtlString::Set(&this->m_name, v5);
  this->m_vUpVector.x = pPermData->m_vUpVector.x;
  this->m_vUpVector.y = pPermData->m_vUpVector.y;
  this->m_vUpVector.z = pPermData->m_vUpVector.z;
  m_nCount = pPermData->m_slaves.m_nCount;
  CUtlVectorBase<CConstraintSlave,CUtlMemory<CConstraintSlave,int>>::SetCount(&this->m_slaves, m_nCount);
  if ( m_nCount > 0 )
  {
    p_m_slaves = &pPermData->m_slaves;
    v9 = 0;
    do
    {
      v10 = pPermData->m_slaves.m_nOffset;
      v11 = 0;
      if ( v10 != 0 )
        v11 = p_m_slaves + v10;
      this->m_slaves.m_Memory.m_pMemory[v9 / 0x24].m_nBoneHash = *&v11[v9];
      v12 = 0;
      v13 = pPermData->m_slaves.m_nOffset;
      if ( v13 != 0 )
        v12 = p_m_slaves + v13;
      v14 = 0;
      this->m_slaves.m_Memory.m_pMemory[v9 / 0x24].m_flWeight = *&v12[v9 + 4];
      v15 = pPermData->m_slaves.m_nOffset;
      if ( v15 != 0 )
        v14 = p_m_slaves + v15;
      v16 = &v14[v9];
      v17 = &this->m_slaves.m_Memory.m_pMemory[v9 / 0x24];
      v17->m_vBasePosition.x = v16[2];
      v17->m_vBasePosition.y = v16[3];
      v18 = v16[4];
      v19 = 0;
      v17->m_vBasePosition.z = v18;
      v20 = pPermData->m_slaves.m_nOffset;
      if ( v20 != 0 )
        v19 = p_m_slaves + v20;
      v21 = v9;
      v22 = &v19[v9];
      v9 += 36LL;
      v23 = (&this->m_slaves.m_Memory.m_pMemory->m_nBoneHash + v21);
      v23[5] = *(v22 + 5);
      v23[6] = *(v22 + 6);
      v23[7] = *(v22 + 7);
      v23[8] = *(v22 + 8);
    }
    while ( v9 != 4 * (9LL * (m_nCount - 1) + 9) );
  }
  v24 = pPermData->m_targets.m_nCount;
  CUtlVectorBase<CConstraintTarget,CUtlMemory<CConstraintTarget,int>>::SetCount(&this->m_targets, v24);
  if ( v24 > 0 )
  {
    p_m_targets = &pPermData->m_targets;
    v26 = 0;
    do
    {
      v27 = pPermData->m_targets.m_nOffset;
      v28 = 0;
      if ( v27 != 0 )
        v28 = p_m_targets + v27;
      this->m_targets.m_Memory.m_pMemory[v26 / 0x28].m_nBoneHash = *&v28[v26];
      v29 = 0;
      v30 = pPermData->m_targets.m_nOffset;
      if ( v30 != 0 )
        v29 = p_m_targets + v30;
      v31 = 0;
      this->m_targets.m_Memory.m_pMemory[v26 / 0x28].m_flWeight = *&v29[v26 + 4];
      v32 = pPermData->m_targets.m_nOffset;
      if ( v32 != 0 )
        v31 = p_m_targets + v32;
      v33 = &v31[v26];
      v34 = &this->m_targets.m_Memory.m_pMemory[v26 / 0x28];
      v34->m_vOffset.x = v33[2];
      v34->m_vOffset.y = v33[3];
      v35 = v33[4];
      v36 = 0;
      v34->m_vOffset.z = v35;
      v37 = pPermData->m_targets.m_nOffset;
      if ( v37 != 0 )
        v36 = p_m_targets + v37;
      v38 = &v36[v26];
      v39 = &this->m_targets.m_Memory.m_pMemory[v26 / 0x28];
      v39->m_qOffset.x = *(v38 + 5);
      v39->m_qOffset.y = *(v38 + 6);
      v39->m_qOffset.z = *(v38 + 7);
      v39->m_qOffset.w = *(v38 + 8);
      v40 = 0;
      v41 = pPermData->m_targets.m_nOffset;
      v42 = &this->m_targets.m_Memory.m_pMemory[v26 / 0x28];
      if ( v41 != 0 )
        v40 = p_m_targets + v41;
      v43 = v40[v26 + 36];
      v26 += 40LL;
      v42->m_bIsAttachment = v43;
    }
    while ( v26 != 8 * (5LL * (v24 - 1) + 5) );
  }
}


// CAimConstraint::FillInPermData  (line 692, @0x000000000316d7c0, libserver.so)  // inlines: operator=
// calls: CBaseConstraint::FillInPermData
void __fastcall CAimConstraint::FillInPermData(
        const CAimConstraint *const this,
        BaseConstraint_t *pPermData,
        CResourceStream *pResourceStream)
{
  CBaseConstraint::FillInPermData(this, pPermData, pResourceStream);
  pPermData->m_qAimOffset = this->m_qAimOffset;
  pPermData->m_nUpType = this->m_nUpType;
}


// CAimConstraint::InitFromOldDiskData  (line 699, @0x000000000316fa90, libserver.so)  // inlines: operator=
// calls: CBaseConstraint::InitFromOldDiskData
void __fastcall CAimConstraint::InitFromOldDiskData(CAimConstraint *const this, const BaseConstraint_t *pPermData)
{
  CBaseConstraint::InitFromOldDiskData(this, pPermData);
  this->m_qAimOffset = pPermData->m_qAimOffset;
  this->m_nUpType = pPermData->m_nUpType;
}


// CTwistConstraint::FillInPermData  (line 707, @0x000000000316d810, libserver.so)  // inlines: operator=
// calls: CBaseConstraint::FillInPermData
void __fastcall CTwistConstraint::FillInPermData(
        const CTwistConstraint *const this,
        BaseConstraint_t *pPermData,
        CResourceStream *pResourceStream)
{
  CBaseConstraint::FillInPermData(this, pPermData, pResourceStream);
  pPermData->m_bInverse = this->m_bInverse;
  pPermData->m_qParentBindRotation = this->m_qParentBindRotation;
  pPermData->m_qChildBindRotation = this->m_qChildBindRotation;
}


// CTwistConstraint::InitFromOldDiskData  (line 715, @0x000000000316fae0, libserver.so)  // inlines: operator=
// calls: CBaseConstraint::InitFromOldDiskData
void __fastcall CTwistConstraint::InitFromOldDiskData(CTwistConstraint *const this, const BaseConstraint_t *pPermData)
{
  CBaseConstraint::InitFromOldDiskData(this, pPermData);
  this->m_bInverse = pPermData->m_bInverse;
  this->m_qParentBindRotation = pPermData->m_qParentBindRotation;
  this->m_qChildBindRotation = pPermData->m_qChildBindRotation;
}


// CTiltTwistConstraint::FillInPermData  (line 724, @0x000000000316d890, libserver.so)
// calls: CBaseConstraint::FillInPermData
void __fastcall CTiltTwistConstraint::FillInPermData(
        const CTiltTwistConstraint *const this,
        BaseConstraint_t *pPermData,
        CResourceStream *pResourceStream)
{
  CBaseConstraint::FillInPermData(this, pPermData, pResourceStream);
  pPermData->m_nTargetUpBoneHash = this->m_nTargetAxis;
  pPermData->m_nUpType = this->m_nSlaveAxis;
}


// CTiltTwistConstraint::InitFromOldDiskData  (line 734, @0x000000000316fb60, libserver.so)  // inlines: QuaternionInvert, operator=
// calls: CBaseConstraint::InitFromOldDiskData, QuaternionInvert
void __fastcall CTiltTwistConstraint::InitFromOldDiskData(
        CTiltTwistConstraint *const this,
        const BaseConstraint_t *pPermData)
{
  Quaternion q; // [rsp+0h] [rbp-20h] BYREF

  CBaseConstraint::InitFromOldDiskData(this, pPermData);
  this->m_nTargetAxis = pPermData->m_nTargetUpBoneHash;
  this->m_nSlaveAxis = pPermData->m_nUpType;
  if ( this->m_targets.m_Size != 0 )
  {
    QuaternionInvert(&this->m_targets.m_Memory.m_pMemory->m_qOffset, &q);
    this->m_qBindInverseParentSpace = q;
  }
}


// RuntimeBuffersInfo_t::BufferInfo_t::InitFromV0Info  (line 752, @0x000000000316fbe0, libserver.so)  // inlines: Base, GetPtr, GetRawPtr, ResolveOffset, V_memcpy, memcpy, operator[]
// calls: CUtlVectorBase<RenderInputLayoutField_t, CUtlMemoryFixedGrowable<RenderInputLayoutField_t, 4ul, int> >::SetCount
// callers: RuntimeBuffersInfo_t::InitFromV0Info
void __fastcall RuntimeBuffersInfo_t::BufferInfo_t::InitFromV0Info(
        RuntimeBuffersInfo_t::BufferInfo_t *const this,
        const OnDiskBufferData_t *pSrcBuffer)
{
  const uint8 *v4; // rax
  __int64 m_nOffset; // rdx
  signed int m_nCount; // r13d
  __int64 v7; // rcx
  int32 v8; // r8d
  char *v9; // rdx
  RenderInputLayoutField_t *v10; // rax
  char *v11; // rdx

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
    do
    {
      v8 = pSrcBuffer->m_inputLayoutFields.m_nOffset;
      v9 = 0;
      v10 = &this->m_inputLayoutFields.m_Memory.m_pMemory[v7];
      if ( v8 != 0 )
        v9 = &pSrcBuffer->m_inputLayoutFields + v8;
      v11 = &v9[v7 * 56];
      ++v7;
      *v10->m_pSemanticName = *v11;
      *&v10->m_pSemanticName[8] = *(v11 + 1);
      *&v10->m_pSemanticName[16] = *(v11 + 2);
      *&v10->m_pSemanticName[24] = *(v11 + 3);
      v10->m_nSemanticIndex = *(v11 + 8);
      v10->m_Format = *(v11 + 9);
      v10->m_nOffset = *(v11 + 10);
      v10->m_nSlot = *(v11 + 11);
      v10->m_nSlotType = *(v11 + 12);
      v10->m_nInstanceStepRate = *(v11 + 13);
    }
    while ( v7 != (m_nCount - 1) + 1LL );
  }
}


// RuntimeBuffersInfo_t::InitFromV0Info  (line 780, @0x000000000316fce0, libserver.so)  // inlines: GetPtr, GetRawPtr, ResolveOffset, operator[]
// calls: CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1ul, int> >::SetCount, RuntimeBuffersInfo_t::BufferInfo_t::InitFromV0Info
void __fastcall RuntimeBuffersInfo_t::InitFromV0Info(
        RuntimeBuffersInfo_t *const this,
        const PermRenderMeshData_t *pPermDiskData)
{
  signed int m_nCount; // ebx
  uint32 v5; // r14d
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  int32 m_nOffset; // ecx
  char *v10; // rsi
  RuntimeBuffersInfo_t::BufferInfo_t *v11; // rdi
  const OnDiskBufferData_t *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbx
  int32 v15; // edx
  char *v16; // rsi
  RuntimeBuffersInfo_t::BufferInfo_t *v17; // rdi
  const OnDiskBufferData_t *v18; // rsi
  int v19; // [rsp+4h] [rbp-3Ch]

  m_nCount = pPermDiskData->m_vertexBuffers.m_nCount;
  v5 = pPermDiskData->m_indexBuffers.m_nCount;
  v19 = v5;
  CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t,CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t,1ul,int>>::SetCount(
    &this->m_VertexBuffers,
    m_nCount);
  CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t,CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t,1ul,int>>::SetCount(
    &this->m_IndexBuffers,
    v5);
  if ( m_nCount > 0 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 272 * ((m_nCount - 1) + 1LL);
    do
    {
      m_nOffset = pPermDiskData->m_vertexBuffers.m_nOffset;
      v10 = 0;
      v11 = &this->m_VertexBuffers.m_Memory.m_pMemory[v7 / 0x110];
      if ( m_nOffset != 0 )
        v10 = &pPermDiskData->m_vertexBuffers + m_nOffset;
      v12 = &v10[v6];
      v7 += 272LL;
      v6 += 24;
      RuntimeBuffersInfo_t::BufferInfo_t::InitFromV0Info(v11, v12);
    }
    while ( v7 != v8 );
  }
  if ( v19 > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = pPermDiskData->m_indexBuffers.m_nOffset;
      v16 = 0;
      v17 = &this->m_IndexBuffers.m_Memory.m_pMemory[v14];
      if ( v15 != 0 )
        v16 = &pPermDiskData->m_indexBuffers + v15;
      v18 = &v16[v13];
      ++v14;
      v13 += 24;
      RuntimeBuffersInfo_t::BufferInfo_t::InitFromV0Info(v17, v18);
    }
    while ( v14 != (v19 - 1) + 1LL );
  }
}


// ConvertV1MeshFlags  (line 806, @0x000000000316d8c0, libserver.so)  // inlines: ConvertV0DrawPrimitiveFlags, _V_strcmp, operator&
// calls: KeyValues3::GetType, KeyValues3::GetInt64, KeyValues3::GetStringRaw, strcmp
// callers: CMaterialDrawDescriptor::TransferPostLoadFn
// strings: "MESH_DRAW_FLAGS_NONE", "MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH", "MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT", "MESH_DRAW_FLAGS_IS_OCCLUDER", "MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL", "MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING" (9 total)
RenderMeshDrawPrimitiveFlags_t __fastcall ConvertV1MeshFlags(const KeyValues3 *pFlagsKey)
{
  char Int64; // al
  RenderMeshDrawPrimitiveFlags_t v3; // edx
  const char *StringRaw; // rax
  const char *v6; // rbx
  int v7; // eax

  if ( KeyValues3::GetType(pFlagsKey) == KeyValues3Type_t::KEYVALUES3_TYPE_STRING )
  {
    StringRaw = KeyValues3::GetStringRaw(pFlagsKey, 0);
    v6 = StringRaw;
    v3 = RenderMeshDrawPrimitiveFlags_t::RENDERMESH_DRAW_FLAGS_NONE;
    if ( strcmp(StringRaw, "MESH_DRAW_FLAGS_NONE") != 0 )
    {
      LOBYTE(v3) = 1;
      if ( strcmp(StringRaw, "MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH") != 0 )
      {
        LOBYTE(v3) = 2;
        if ( strcmp(StringRaw, "MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT") != 0 )
        {
          LOBYTE(v3) = 4;
          if ( strcmp(StringRaw, "MESH_DRAW_FLAGS_IS_OCCLUDER") != 0 )
          {
            LOBYTE(v3) = 8;
            if ( strcmp(StringRaw, "MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL") != 0 )
            {
              LOBYTE(v3) = 16;
              if ( strcmp(StringRaw, "MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING") != 0
                && strcmp(StringRaw, "MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING") != 0 )
              {
                v7 = strcmp(StringRaw, "MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS");
                v3 = RenderMeshDrawPrimitiveFlags_t::RENDERMESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS;
                if ( v7 != 0 )
                  return strcmp(v6, "MESH_DRAW_FLAGS_DRAW_LAST") == 0 ? 0x80 : 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    Int64 = KeyValues3::GetInt64(pFlagsKey);
    return (Int64 < 0 ? 0x80 : 0)
         | ((Int64 & 0x40) != 0 ? 0x40 : 0)
         | ((Int64 & 0x20) != 0 ? 0x10 : 0)
         | ((Int64 & 0x10) != 0 ? 0x10 : 0)
         | ((Int64 & 8) != 0 ? 8 : 0)
         | ((Int64 & 4) != 0 ? 4 : 0)
         | Int64 & 1
         | ((Int64 & 2) != 0 ? 2 : 0);
  }
  return v3;
}


