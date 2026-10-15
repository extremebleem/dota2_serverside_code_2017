
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBuilderModelInfo::~CBuilderModelInfo  (line 37, @0x0000000003151ba0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CModelBuilder::SetModelInfo, CModelBuilder::CModelBuilder
void __fastcall CBuilderModelInfo::~CBuilderModelInfo(CBuilderModelInfo *const this)
{
  if ( this->m_keyValueText.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_keyValueText);
  if ( this->m_sSurfaceProperty.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sSurfaceProperty);
}


// CModelSkeletonBuilder::~CModelSkeletonBuilder  (line 61, @0x0000000003151ce0, libserver.so)  // inlines: Destruct<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> > >, Element, Purge, RemoveAll, operator[], ~BoneDict_t, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll, CUtlMemory<BoneHashPairing_t, int>::Purge, CUtlMemory<Quaternion, int>::Purge, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int>::Purge, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<Vector, int>::Purge, CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge, CUtlMemory<bool, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<short int, int>::Purge (13 total)
// callers: CModelBuilder::CModelBuilder
void __fastcall CModelSkeletonBuilder::~CModelSkeletonBuilder(CModelSkeletonBuilder *const this)
{
  bool v2; // zf
  int m_Size; // r13d
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v6; // rdi
  __int64 i; // r14
  char *v8; // r12
  CUtlVectorBase<bool,CUtlMemory<bool,int> >::CAllocator *p_m_Memory; // r12

  this->m_simBones.m_Size = 0;
  if ( (this->m_simBones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    p_m_Memory = &this->m_simBones.m_Memory;
    CUtlMemory<bool,int>::Purge(&this->m_simBones.m_Memory);
    if ( (this->m_simBones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<bool,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int>>::RemoveAll(&this->m_boneRotParent);
  if ( (this->m_boneRotParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Quaternion,int>::Purge(&this->m_boneRotParent.m_Memory);
    if ( (this->m_boneRotParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Quaternion,int>::Purge(&this->m_boneRotParent.m_Memory);
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_bonePosParent);
  if ( (this->m_bonePosParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_bonePosParent.m_Memory);
    if ( (this->m_bonePosParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_bonePosParent.m_Memory);
  }
  v2 = (this->m_nFlag.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nFlag.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Purge(&this->m_nFlag.m_Memory);
    if ( (this->m_nFlag.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Purge(&this->m_nFlag.m_Memory);
  }
  v2 = (this->m_boneSphere.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_boneSphere.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<float,int>::Purge(&this->m_boneSphere.m_Memory);
    if ( (this->m_boneSphere.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_boneSphere.m_Memory);
  }
  v2 = (this->m_nParentIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nParentIndices.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<short,int>::Purge(&this->m_nParentIndices.m_Memory);
    if ( (this->m_nParentIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(&this->m_nParentIndices.m_Memory);
  }
  v2 = (this->m_nParentHash.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nParentHash.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_nParentHash.m_Memory);
    if ( (this->m_nParentHash.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_nParentHash.m_Memory);
  }
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&this->m_boneName);
  if ( (this->m_boneName.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_boneName.m_Memory);
    if ( (this->m_boneName.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_boneName.m_Memory);
  }
  m_Size = this->m_boneDict.m_Buckets.m_Size;
  if ( this->m_boneDict.m_Buckets.m_Size > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      while ( 1 )
      {
        v6 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
        v2 = (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v6->m_Size = 0;
        if ( v2 )
          break;
        v4 += 24LL;
        if ( v4 == v5 )
          goto LABEL_14;
      }
      v4 += 24LL;
      CUtlMemory<BoneHashPairing_t,int>::Purge(&v6->m_Memory);
    }
    while ( v4 != v5 );
LABEL_14:
    m_Size = this->m_boneDict.m_Buckets.m_Size;
  }
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v8 = this->m_boneDict.m_Buckets.m_Memory.m_pMemory + i;
    v2 = (*(v8 + 5) & 0xC0000000) == 0;
    *v8 = 0;
    if ( v2 )
    {
      CUtlMemory<BoneHashPairing_t,int>::Purge((v8 + 8));
      if ( (*(v8 + 5) & 0xC0000000) == 0 )
        CUtlMemory<BoneHashPairing_t,int>::Purge((v8 + 8));
    }
  }
  v2 = (this->m_boneDict.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_boneDict.m_Buckets.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>::Purge(&this->m_boneDict.m_Buckets.m_Memory);
    if ( (this->m_boneDict.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>::Purge(&this->m_boneDict.m_Buckets.m_Memory);
  }
}


// CModelSkeletonSorter::~CModelSkeletonSorter  (line 132, @0x0000000003151ae0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<bool, int>::Purge, CUtlMemory<int, int>::Purge
// callers: CModelSkeletonBuilder::SortBoneList
void __fastcall CModelSkeletonSorter::~CModelSkeletonSorter(CModelSkeletonSorter *const this)
{
  bool v2; // zf
  CUtlVectorBase<bool,CUtlMemory<bool,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_addedOldBone.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_addedOldBone.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_addedOldBone.m_Memory,
        CUtlMemory<bool,int>::Purge(&this->m_addedOldBone.m_Memory),
        (this->m_addedOldBone.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_mapOldToNew.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapOldToNew.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<bool,int>::Purge(p_m_Memory);
    v2 = (this->m_mapOldToNew.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapOldToNew.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<int,int>::Purge(&this->m_mapOldToNew.m_Memory);
  if ( (this->m_mapOldToNew.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&this->m_mapOldToNew.m_Memory);
    v2 = (this->m_arrSorted.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_arrSorted.m_Size = 0;
    if ( !v2 )
      return;
    goto LABEL_9;
  }
LABEL_3:
  v2 = (this->m_arrSorted.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_arrSorted.m_Size = 0;
  if ( !v2 )
    return;
LABEL_9:
  CUtlMemory<int,int>::Purge(&this->m_arrSorted.m_Memory);
  if ( (this->m_arrSorted.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<int,int>::Purge(&this->m_arrSorted.m_Memory);
}


// CModelBuilder::~CModelBuilder  (line 199, @0x0000000002252620, libserver.so)  // inlines: Destruct<BuilderModelExtPart_t>, Destruct<CBuilderMaterialGroup>, Destruct<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t> >, Destruct<CStrongHandle<InfoForResourceTypeCRenderMesh> >, Destruct<CStrongHandle<InfoForResourceTypeIMaterial2> >, Destruct<CUtlString>, Destruct<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> > >, Destruct<CUtlVector<short int> >, Element, Purge, RemoveAll, operator[], ~BoneDict_t, ~BuilderModelExtPart_t, ~CBuilderMaterialGroup, ~CBuilderModelInfo, ~CModelSkeletonBuilder, ~CStrongHandle, ~CUtlHash, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~ModelPart_t
// calls: CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::RemoveAll, CUtlMemory<short int, int>::Purge, CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CUtlMemory<BoneHashPairing_t, int>::Purge, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Shutdown, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge, CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Purge (30 total)
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
void __fastcall CModelBuilder::~CModelBuilder(CModelBuilder *const this)
{
  int m_Size; // r13d
  __int64 i; // r14
  char *v4; // rbx
  bool v5; // zf
  int v6; // ebx
  __int64 j; // r13
  CUtlString *v8; // rdi
  int v9; // r13d
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v12; // rdi
  __int64 k; // r14
  char *v14; // rbx
  __int64 v15; // r15
  CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int> *v16; // rbx
  int v17; // edx
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rdi
  int v21; // ebx
  __int64 n; // r13
  CUtlString *v23; // rdi
  int v24; // edx
  __int64 v25; // rbx
  unsigned __int64 v26; // r13
  __int64 v27; // rdi
  int v28; // edx
  __int64 v29; // rbx
  unsigned __int64 v30; // r13
  __int64 v31; // rdi
  int v32; // r13d
  __int64 ii; // r14
  char *v34; // rbx
  int v35; // [rsp+Ch] [rbp-34h]
  int m; // [rsp+Ch] [rbp-34h]

  CUtlVectorBase<BuilderModelBoneFlexDriver_t,CUtlMemory<BuilderModelBoneFlexDriver_t,int>>::RemoveAll(&this->m_boneFlexDrivers);
  if ( (this->m_boneFlexDrivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<BuilderModelBoneFlexDriver_t,int>::Purge(&this->m_boneFlexDrivers.m_Memory);
    if ( (this->m_boneFlexDrivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<BuilderModelBoneFlexDriver_t,int>::Purge(&this->m_boneFlexDrivers.m_Memory);
  }
  m_Size = this->m_remappingTables.m_Size;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v4 = this->m_remappingTables.m_Memory.m_pMemory + i;
    v5 = (*(v4 + 5) & 0xC0000000) == 0;
    *v4 = 0;
    if ( v5 )
    {
      CUtlMemory<short,int>::Purge((v4 + 8));
      if ( (*(v4 + 5) & 0xC0000000) == 0 )
        CUtlMemory<short,int>::Purge((v4 + 8));
    }
  }
  v5 = (this->m_remappingTables.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_remappingTables.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlVector<short,CUtlMemory<short,int>>,int>::Purge(&this->m_remappingTables.m_Memory);
    if ( (this->m_remappingTables.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<short,CUtlMemory<short,int>>,int>::Purge(&this->m_remappingTables.m_Memory);
  }
  v5 = (this->m_flexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_flexControllers.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CFlexController const*,int>::Purge(&this->m_flexControllers.m_Memory);
    if ( (this->m_flexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexController const*,int>::Purge(&this->m_flexControllers.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_namedFlexControllers.m_SymbolTable);
  v5 = (this->m_namedFlexControllers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_namedFlexControllers.m_Vector.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<int,int>::Purge(&this->m_namedFlexControllers.m_Vector.m_Memory);
    if ( (this->m_namedFlexControllers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_namedFlexControllers.m_Vector.m_Memory);
  }
  v5 = (this->m_skeletonBuilder.m_simBones.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_simBones.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<bool,int>::Purge(&this->m_skeletonBuilder.m_simBones.m_Memory);
    if ( (this->m_skeletonBuilder.m_simBones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<bool,int>::Purge(&this->m_skeletonBuilder.m_simBones.m_Memory);
  }
  v5 = (this->m_skeletonBuilder.m_boneRotParent.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_boneRotParent.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<Quaternion,int>::Purge(&this->m_skeletonBuilder.m_boneRotParent.m_Memory);
    if ( (this->m_skeletonBuilder.m_boneRotParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Quaternion,int>::Purge(&this->m_skeletonBuilder.m_boneRotParent.m_Memory);
  }
  v5 = (this->m_skeletonBuilder.m_bonePosParent.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_bonePosParent.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_skeletonBuilder.m_bonePosParent.m_Memory);
    if ( (this->m_skeletonBuilder.m_bonePosParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_skeletonBuilder.m_bonePosParent.m_Memory);
  }
  v5 = (this->m_skeletonBuilder.m_nFlag.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_nFlag.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Purge(&this->m_skeletonBuilder.m_nFlag.m_Memory);
    if ( (this->m_skeletonBuilder.m_nFlag.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CModelSkeleton::BoneFlags_t,int>::Purge(&this->m_skeletonBuilder.m_nFlag.m_Memory);
  }
  v5 = (this->m_skeletonBuilder.m_boneSphere.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_boneSphere.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<float,int>::Purge(&this->m_skeletonBuilder.m_boneSphere.m_Memory);
    if ( (this->m_skeletonBuilder.m_boneSphere.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_skeletonBuilder.m_boneSphere.m_Memory);
  }
  v5 = (this->m_skeletonBuilder.m_nParentIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_nParentIndices.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<short,int>::Purge(&this->m_skeletonBuilder.m_nParentIndices.m_Memory);
    if ( (this->m_skeletonBuilder.m_nParentIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(&this->m_skeletonBuilder.m_nParentIndices.m_Memory);
  }
  v5 = (this->m_skeletonBuilder.m_nParentHash.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_nParentHash.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_skeletonBuilder.m_nParentHash.m_Memory);
    if ( (this->m_skeletonBuilder.m_nParentHash.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_skeletonBuilder.m_nParentHash.m_Memory);
  }
  v6 = this->m_skeletonBuilder.m_boneName.m_Size;
  for ( j = 8LL * v6 - 8; --v6 >= 0; j -= 8 )
  {
    v8 = (this->m_skeletonBuilder.m_boneName.m_Memory.m_pMemory + j);
    if ( v8->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v8);
  }
  v5 = (this->m_skeletonBuilder.m_boneName.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_boneName.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_skeletonBuilder.m_boneName.m_Memory);
    if ( (this->m_skeletonBuilder.m_boneName.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_skeletonBuilder.m_boneName.m_Memory);
  }
  v9 = this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Size;
  if ( v9 > 0 )
  {
    v10 = 0;
    v11 = 8 * (3LL * (v9 - 1) + 3);
    do
    {
      while ( 1 )
      {
        v12 = &this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Memory.m_pMemory[v10 / 0x18];
        v5 = (v12->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v12->m_Size = 0;
        if ( v5 )
          break;
        v10 += 24LL;
        if ( v10 == v11 )
          goto LABEL_29;
      }
      v10 += 24LL;
      CUtlMemory<BoneHashPairing_t,int>::Purge(&v12->m_Memory);
    }
    while ( v10 != v11 );
LABEL_29:
    v9 = this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Size;
  }
  for ( k = 24LL * v9 - 24; --v9 >= 0; k -= 24 )
  {
    v14 = this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Memory.m_pMemory + k;
    v5 = (*(v14 + 5) & 0xC0000000) == 0;
    *v14 = 0;
    if ( v5 )
    {
      CUtlMemory<BoneHashPairing_t,int>::Purge((v14 + 8));
      if ( (*(v14 + 5) & 0xC0000000) == 0 )
        CUtlMemory<BoneHashPairing_t,int>::Purge((v14 + 8));
    }
  }
  v5 = (this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>::Purge(&this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Memory);
    if ( (this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>::Purge(&this->m_skeletonBuilder.m_boneDict.m_Buckets.m_Memory);
  }
  v35 = this->m_materialGroups.m_Size;
  v15 = 32LL * v35 - 32;
  for ( m = v35 - 1; m >= 0; --m )
  {
    v16 = (this->m_materialGroups.m_Memory.m_pMemory + v15);
    v17 = v16->m_nAllocationCount - 1;
    if ( v17 >= 0 )
    {
      v18 = 8LL * v17;
      v19 = 8 * (v17 - v17) - 8;
      do
      {
        v20 = v18;
        v18 -= 8;
        CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown((v16[1].m_pMemory + v20));
      }
      while ( v18 != v19 );
    }
    v5 = (v16[1].m_nGrowSize & 0xC0000000) == 0;
    v16->m_nAllocationCount = 0;
    if ( v5 )
    {
      CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>::Purge(v16 + 1);
      if ( (v16[1].m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>::Purge(v16 + 1);
    }
    if ( v16->m_pMemory != 0 )
      CUtlString::FreeMemoryBlock(v16);
    v15 -= 32;
  }
  v5 = (this->m_materialGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_materialGroups.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CBuilderMaterialGroup,int>::Purge(&this->m_materialGroups.m_Memory);
    if ( (this->m_materialGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBuilderMaterialGroup,int>::Purge(&this->m_materialGroups.m_Memory);
  }
  v21 = this->m_meshGroups.m_Size;
  for ( n = 8LL * v21 - 8; --v21 >= 0; n -= 8 )
  {
    v23 = (this->m_meshGroups.m_Memory.m_pMemory + n);
    if ( v23->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v23);
  }
  v5 = (this->m_meshGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_meshGroups.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_meshGroups.m_Memory);
    if ( (this->m_meshGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_meshGroups.m_Memory);
  }
  v5 = (this->m_AnimGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AnimGroups.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CAnimationGroupResource *,int>::Purge(&this->m_AnimGroups.m_Memory);
    if ( (this->m_AnimGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAnimationGroupResource *,int>::Purge(&this->m_AnimGroups.m_Memory);
  }
  v24 = this->m_refAnimGroups.m_Size - 1;
  if ( v24 >= 0 )
  {
    v25 = 8LL * v24;
    v26 = 8 * (v24 - v24) - 8;
    do
    {
      v27 = v25;
      v25 -= 8;
      CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>::Shutdown((this->m_refAnimGroups.m_Memory.m_pMemory
                                                                              + v27));
    }
    while ( v25 != v26 );
  }
  v5 = (this->m_refAnimGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_refAnimGroups.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>,int>::Purge(&this->m_refAnimGroups.m_Memory);
    if ( (this->m_refAnimGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>,int>::Purge(&this->m_refAnimGroups.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&this->m_refPhysicsData);
  v5 = (this->m_lodGroupSwitchDistances.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_lodGroupSwitchDistances.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<float,int>::Purge(&this->m_lodGroupSwitchDistances.m_Memory);
    if ( (this->m_lodGroupSwitchDistances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_lodGroupSwitchDistances.m_Memory);
  }
  v5 = (this->m_refLODGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_refLODGroupMasks.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<unsigned char,int>::Purge(&this->m_refLODGroupMasks.m_Memory);
    if ( (this->m_refLODGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&this->m_refLODGroupMasks.m_Memory);
  }
  v5 = (this->m_refMeshGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_refMeshGroupMasks.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<unsigned long long,int>::Purge(&this->m_refMeshGroupMasks.m_Memory);
    if ( (this->m_refMeshGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned long long,int>::Purge(&this->m_refMeshGroupMasks.m_Memory);
  }
  v28 = this->m_refMeshes.m_Size - 1;
  if ( v28 >= 0 )
  {
    v29 = 8LL * v28;
    v30 = 8 * (v28 - v28) - 8;
    do
    {
      v31 = v29;
      v29 -= 8;
      CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown((this->m_refMeshes.m_Memory.m_pMemory + v31));
    }
    while ( v29 != v30 );
  }
  v5 = (this->m_refMeshes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_refMeshes.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>::Purge(&this->m_refMeshes.m_Memory);
    if ( (this->m_refMeshes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>::Purge(&this->m_refMeshes.m_Memory);
  }
  v32 = this->m_ExtParts.m_Size;
  for ( ii = (v32 << 6) - 64; --v32 >= 0; ii -= 64 )
  {
    v34 = this->m_ExtParts.m_Memory.m_pMemory + ii;
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(v34 + 6);
    if ( *(v34 + 5) != 0 )
      CUtlString::FreeMemoryBlock(v34 + 5);
    if ( *(v34 + 4) != 0 )
      CUtlString::FreeMemoryBlock(v34 + 4);
  }
  v5 = (this->m_ExtParts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExtParts.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<BuilderModelExtPart_t,int>::Purge(&this->m_ExtParts.m_Memory);
    if ( (this->m_ExtParts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<BuilderModelExtPart_t,int>::Purge(&this->m_ExtParts.m_Memory);
  }
  if ( this->m_modelInfo.m_keyValueText.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_modelInfo.m_keyValueText);
  if ( this->m_modelInfo.m_sSurfaceProperty.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_modelInfo.m_sSurfaceProperty);
  if ( this->m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_name);
}


