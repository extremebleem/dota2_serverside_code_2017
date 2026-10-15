
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RenderSkeletonBone_t::~RenderSkeletonBone_t  (line 94, @0x0000000003179700, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSchemaUtlVectorManipulator<CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >, RenderSkeletonBone_t>::SwapItems
void __fastcall RenderSkeletonBone_t::~RenderSkeletonBone_t(RenderSkeletonBone_t *const this)
{
  if ( this->m_parentName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_parentName);
  if ( this->m_boneName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_boneName);
}


// CRenderSkeleton::~CRenderSkeleton  (line 106, @0x00000000031590b0, libserver.so)  // inlines: Destruct<RenderSkeletonBone_t>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~RenderSkeletonBone_t
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<CUtlStringToken, int>::Purge, CUtlMemory<RenderSkeletonBone_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CRenderSkeleton::~CRenderSkeleton(CRenderSkeleton *const this)
{
  bool v2; // zf
  int m_Size; // r12d
  __int64 i; // r13
  CUtlString *v5; // rbx
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // rbx

  v2 = (this->m_boneParents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_boneParents.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_boneParents.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_boneParents.m_Memory);
    if ( (this->m_boneParents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_boneHashes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_boneHashes.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlStringToken,int>::Purge(&this->m_boneHashes.m_Memory);
    if ( (this->m_boneHashes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlStringToken,int>::Purge(&this->m_boneHashes.m_Memory);
  }
  m_Size = this->m_bones.m_Size;
  for ( i = 96LL * this->m_bones.m_Size - 96; --m_Size >= 0; i -= 96 )
  {
    v5 = (&this->m_bones.m_Memory.m_pMemory->m_boneName + i);
    if ( v5[1].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5 + 1);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_bones.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bones.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<RenderSkeletonBone_t,int>::Purge(&this->m_bones.m_Memory);
    if ( (this->m_bones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<RenderSkeletonBone_t,int>::Purge(&this->m_bones.m_Memory);
  }
}


// CMaterialDrawDescriptor::~CMaterialDrawDescriptor  (line 158, @0x0000000003179260, libserver.so)  // inlines: Purge, RemoveAll, ~CStrongHandle, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown
// callers: CSchemaUtlVectorManipulator<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >, CMaterialDrawDescriptor>::SwapItems
void __fastcall CMaterialDrawDescriptor::~CMaterialDrawDescriptor(CMaterialDrawDescriptor *const this)
{
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_material);
  this->m_vertexBuffers.m_Size = 0;
}


// CAttachment::~CAttachment  (line 272, @0x0000000003159490, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CUtlDict<CAttachment, int>::Insert, CRenderMesh::FindOrAddAttachment
void __fastcall CAttachment::~CAttachment(CAttachment *const this)
{
  CUtlString *m_influenceNames; // r13
  Vector *m_vInfluenceOffsets; // r12
  CUtlString *v4; // r14
  CUtlString *v5; // rbx

  m_influenceNames = this->m_influenceNames;
  if ( this != -8LL )
  {
    m_vInfluenceOffsets = this->m_vInfluenceOffsets;
    v4 = &this->m_influenceNames[2];
    v5 = this->m_vInfluenceOffsets;
    do
    {
      if ( *(&v4[1].m_pString + --v5 - m_vInfluenceOffsets) != 0 )
        CUtlString::FreeMemoryBlock(v5);
    }
    while ( m_influenceNames != v5 );
  }
  if ( this->m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_name);
}


// CAttachment::CAttachment  (line 272, @0x000000000315a7d0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall CAttachment::CAttachment(CAttachment *const this, __int64 a2)
{
  const CUtlString *v3; // r15
  __int64 v4; // r13
  const char *v6; // rax
  CUtlString *m_influenceNames; // rbx
  const char *v8; // rax
  Vector *m_vInfluenceOffsets; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  Quaternion *m_vInfluenceRotations; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx

  v3 = (a2 + 8);
  v4 = 2;
  this->m_name.m_pString = 0;
  v6 = CUtlString::Get(a2);
  CUtlString::Set(&this->m_name, v6);
  m_influenceNames = this->m_influenceNames;
  do
  {
    m_influenceNames->m_pString = 0;
    v8 = CUtlString::Get(v3);
    CUtlString::Set(m_influenceNames, v8);
    --v4;
    ++m_influenceNames;
    ++v3;
  }
  while ( v4 != -1 );
  m_vInfluenceOffsets = this->m_vInfluenceOffsets;
  v10 = 0;
  v11 = a2 + 32;
  do
  {
    *&m_vInfluenceOffsets[v10].x = *(v11 + v10 * 12);
    m_vInfluenceOffsets[v10].z = *(v11 + v10 * 12 + 8);
    ++v10;
  }
  while ( v10 != 3 );
  m_vInfluenceRotations = this->m_vInfluenceRotations;
  v13 = 0;
  v14 = a2 + 68;
  do
  {
    v15 = *(v14 + v13 * 16 + 8);
    *&m_vInfluenceRotations[v13].x = *(v14 + v13 * 16);
    *&m_vInfluenceRotations[v13++].z = v15;
  }
  while ( v13 != 3 );
  *this->m_influenceWeights = *(a2 + 116);
  this->m_influenceWeights[2] = *(a2 + 124);
  *this->m_bInfluenceRootTransform = *(a2 + 128);
  this->m_bInfluenceRootTransform[2] = *(a2 + 130);
  this->m_nInfluences = *(a2 + 131);
}


// CHitBox::~CHitBox  (line 301, @0x0000000003179e20, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSchemaUtlVectorManipulator<CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >, CHitBox>::SwapItems
void __fastcall CHitBox::~CHitBox(CHitBox *const this)
{
  if ( this->m_sBoneName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sBoneName);
  if ( this->m_sSurfaceProperty.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sSurfaceProperty);
  if ( this->m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_name);
}


// CHitBoxSet::~CHitBoxSet  (line 364, @0x0000000003159e10, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::RemoveAll, CUtlMemory<CHitBox, int>::Purge
// callers: CUtlDict<CHitBoxSet, int>::Insert, CRenderMesh::FindOrAddHitBoxSet, CSchemaUtlVectorManipulator<CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >, CHitBoxSet>::SwapItems
void __fastcall CHitBoxSet::~CHitBoxSet(CHitBoxSet *const this)
{
  if ( this->m_SourceFilename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SourceFilename);
  CUtlVectorBase<CHitBox,CUtlMemory<CHitBox,int>>::RemoveAll(&this->m_HitBoxes);
  if ( (this->m_HitBoxes.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHitBox,int>::Purge(&this->m_HitBoxes.m_Memory),
        (this->m_HitBoxes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    if ( this->m_name.m_pString == 0 )
      return;
    goto LABEL_5;
  }
  CUtlMemory<CHitBox,int>::Purge(&this->m_HitBoxes.m_Memory);
  if ( this->m_name.m_pString != 0 )
LABEL_5:
    CUtlString::FreeMemoryBlock(&this->m_name);
}


