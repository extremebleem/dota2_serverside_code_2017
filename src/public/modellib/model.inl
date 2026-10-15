
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BoneHashPairing_CompareFunc  (line 41, @0x000000000313e8a0 libserver.so, @0x00000000031475d0 libserver.so)
bool __fastcall BoneHashPairing_CompareFunc(const BoneHashPairing_t *const a, const BoneHashPairing_t *const b)
{
  return a->m_nBoneHash == b->m_nBoneHash;
}


// BoneHashPairing_KeyFunc  (line 46, @0x000000000313e8b0 libserver.so, @0x00000000031475e0 libserver.so)
unsigned int __fastcall BoneHashPairing_KeyFunc(const BoneHashPairing_t *const a)
{
  return a->m_nBoneHash;
}


// CModelSkeleton::~CModelSkeleton  (line 52, @0x0000000003145fe0, libserver.so)  // inlines: Destruct<CUtlString>, Destruct<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> > >, Element, Purge, RemoveAll, operator[], ~BoneDict_t, ~CUtlHash, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<BoneHashPairing_t, int>::Purge, CUtlMemory<Quaternion, int>::Purge, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int>::Purge, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<short int, int>::Purge, CUtlMemory<float, int>::Purge, CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge, CUtlMemory<Vector, int>::Purge
// callers: CModel::~CModel, CModel::CModel
void __fastcall CModelSkeleton::~CModelSkeleton(CModelSkeleton *const this)
{
  bool v2; // zf
  int m_Size; // r12d
  __int64 i; // r13
  CUtlString *v5; // rdi
  int v6; // r13d
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v9; // rdi
  __int64 j; // r14
  char *v11; // r12
  CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int> >::CAllocator *p_m_Memory; // r12

  this->m_boneRotParent.m_Size = 0;
  if ( (this->m_boneRotParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    p_m_Memory = &this->m_boneRotParent.m_Memory;
    CUtlMemory<Quaternion,int>::Purge(&this->m_boneRotParent.m_Memory);
    if ( (this->m_boneRotParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Quaternion,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_bonePosParent.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bonePosParent.m_Size = 0;
  if ( v2 )
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
  v2 = (this->m_nParent.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nParent.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<short,int>::Purge(&this->m_nParent.m_Memory);
    if ( (this->m_nParent.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(&this->m_nParent.m_Memory);
  }
  m_Size = this->m_boneName.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_boneName.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_boneName.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_boneName.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_boneName.m_Memory);
    if ( (this->m_boneName.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_boneName.m_Memory);
  }
  v6 = this->m_boneDict.m_Buckets.m_Size;
  if ( this->m_boneDict.m_Buckets.m_Size > 0 )
  {
    v7 = 0;
    v8 = 8 * (3LL * (v6 - 1) + 3);
    do
    {
      while ( 1 )
      {
        v9 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[v7 / 0x18];
        v2 = (v9->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v9->m_Size = 0;
        if ( v2 )
          break;
        v7 += 24LL;
        if ( v7 == v8 )
          goto LABEL_17;
      }
      v7 += 24LL;
      CUtlMemory<BoneHashPairing_t,int>::Purge(&v9->m_Memory);
    }
    while ( v7 != v8 );
LABEL_17:
    v6 = this->m_boneDict.m_Buckets.m_Size;
  }
  for ( j = 24LL * v6 - 24; --v6 >= 0; j -= 24 )
  {
    v11 = this->m_boneDict.m_Buckets.m_Memory.m_pMemory + j;
    v2 = (*(v11 + 5) & 0xC0000000) == 0;
    *v11 = 0;
    if ( v2 )
    {
      CUtlMemory<BoneHashPairing_t,int>::Purge((v11 + 8));
      if ( (*(v11 + 5) & 0xC0000000) == 0 )
        CUtlMemory<BoneHashPairing_t,int>::Purge((v11 + 8));
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


