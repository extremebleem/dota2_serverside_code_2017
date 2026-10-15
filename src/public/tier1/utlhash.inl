
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), unsigned int (*)(const SkeletonInstanceDecalList_t&)>::CUtlHash  (line 99, @0x0000000001fa5090, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, IsPowerOfTwo, SetGrowSize, operator[], ~CUtlVector
// calls: CUtlVectorBase<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, int> >::SetCount, CUtlVectorBase<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >::SetCount, CUtlVectorBase<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDecalGameSystem::CDecalGameSystem
void __fastcall CUtlHash<SkeletonInstanceDecalList_t,bool (*)(SkeletonInstanceDecalList_t const&,SkeletonInstanceDecalList_t const&),unsigned int (*)(SkeletonInstanceDecalList_t const&)>::CUtlHash(
        CUtlHash<SkeletonInstanceDecalList_t,bool (*)(const SkeletonInstanceDecalList_t&,const SkeletonInstanceDecalList_t&),unsigned int (*)(const SkeletonInstanceDecalList_t&)> *const this,
        int bucketCount,
        int growCount,
        int initCount,
        CUtlHash<SkeletonInstanceDecalList_t,bool (*)(const SkeletonInstanceDecalList_t&,const SkeletonInstanceDecalList_t&),unsigned int (*)(const SkeletonInstanceDecalList_t&)>::CompareFunc_t compareFunc,
        CUtlHash<SkeletonInstanceDecalList_t,bool (*)(const SkeletonInstanceDecalList_t&,const SkeletonInstanceDecalList_t&),unsigned int (*)(const SkeletonInstanceDecalList_t&)>::KeyFunc_t keyFunc)
{
  int v9; // ebx
  unsigned __int64 v10; // rbx
  int v11; // r15d
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // [rsp+8h] [rbp-38h]
  int bucketCounta; // [rsp+Ch] [rbp-34h]

  this->m_Buckets.m_Size = 0;
  if ( bucketCount > 0x10000 )
    bucketCount = 0x10000;
  this->m_Buckets.m_Memory.m_pMemory = 0;
  this->m_Buckets.m_Memory.m_nAllocationCount = 0;
  this->m_Buckets.m_Memory.m_nGrowSize = 0;
  v9 = bucketCount;
  this->m_CompareFunc = compareFunc;
  this->m_KeyFunc = keyFunc;
  bucketCounta = bucketCount;
  CUtlVectorBase<CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int>>,CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int>>,int>>::SetCount(
    &this->m_Buckets,
    bucketCount);
  if ( v9 <= 0 )
  {
    v14 = bucketCounta - 1;
  }
  else
  {
    v10 = 0;
    v11 = growCount & 0x3FFFFFFF;
    v14 = bucketCounta - 1;
    do
    {
      CUtlVectorBase<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int>>::SetCount(
        &this->m_Buckets.m_Memory.m_pMemory[v10 / 0x18],
        initCount);
      v12 = v10;
      v10 += 24LL;
      *(&this->m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize + v12) = v11
                                                                         | *(&this->m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize
                                                                           + v12)
                                                                         & 0xC0000000;
    }
    while ( v10 != 8 * (3LL * (bucketCounta - 1) + 3) );
  }
  v13 = 0;
  this->m_bPowerOfTwo = (bucketCounta & v14) == 0;
  if ( (bucketCounta & v14) == 0 )
    v13 = v14;
  this->m_ModMask = v13;
}


// CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs>::CUtlHash  (line 99, @0x0000000002f4ad90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, IsPowerOfTwo, SetGrowSize, operator[], ~CUtlVector
// calls: CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int> >::SetCount, CUtlVectorBase<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >::SetCount, CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGameSaveRestoreInfo::BuildEntityHash, CGameSaveRestoreInfo::CGameSaveRestoreInfo
void __fastcall CUtlHash<CGameSaveRestoreInfo::CHashElement,CGameSaveRestoreInfo::CHashFuncs,CGameSaveRestoreInfo::CHashFuncs>::CUtlHash(
        CUtlHash<CGameSaveRestoreInfo::CHashElement,CGameSaveRestoreInfo::CHashFuncs,CGameSaveRestoreInfo::CHashFuncs> *const this,
        int bucketCount,
        int growCount,
        int initCount)
{
  int v7; // ebx
  unsigned __int64 v8; // rbx
  int v9; // r15d
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // [rsp+8h] [rbp-38h]
  int bucketCounta; // [rsp+Ch] [rbp-34h]

  this->m_Buckets.m_Size = 0;
  if ( bucketCount > 0x10000 )
    bucketCount = 0x10000;
  this->m_Buckets.m_Memory.m_pMemory = 0;
  this->m_Buckets.m_Memory.m_nAllocationCount = 0;
  this->m_Buckets.m_Memory.m_nGrowSize = 0;
  v7 = bucketCount;
  bucketCounta = bucketCount;
  CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>>::SetCount(
    &this->m_Buckets,
    bucketCount);
  if ( v7 <= 0 )
  {
    v12 = bucketCounta - 1;
  }
  else
  {
    v8 = 0;
    v9 = growCount & 0x3FFFFFFF;
    v12 = bucketCounta - 1;
    do
    {
      CUtlVectorBase<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>::SetCount(
        &this->m_Buckets.m_Memory.m_pMemory[v8 / 0x18],
        initCount);
      v10 = v8;
      v8 += 24LL;
      *(&this->m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize + v10) = v9
                                                                         | *(&this->m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize
                                                                           + v10)
                                                                         & 0xC0000000;
    }
    while ( v8 != 8 * (3LL * (bucketCounta - 1) + 3) );
  }
  v11 = 0;
  this->m_bPowerOfTwo = (bucketCounta & v12) == 0;
  if ( (bucketCounta & v12) == 0 )
    v11 = v12;
  this->m_ModMask = v11;
}


// CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)>::CUtlHash  (line 99, @0x00000000031545f0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, GrowMemory, GrowVector, InsertMultipleBefore, IsPowerOfTwo, RemoveMultipleFromTail, SetCount, SetGrowSize, operator[], ~CUtlVector
// calls: CUtlVectorBase<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int> >::SetCount, CUtlMemory<BoneHashPairing_t, int>::Grow, CUtlVectorBase<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModelSkeletonBuilder::CModelSkeletonBuilder, CModelSkeletonSorter::RemapBones
void __fastcall CUtlHash<BoneHashPairing_t,bool (*)(BoneHashPairing_t const&,BoneHashPairing_t const&),unsigned int (*)(BoneHashPairing_t const&)>::CUtlHash(
        CUtlHash<BoneHashPairing_t,bool (*)(const BoneHashPairing_t&,const BoneHashPairing_t&),unsigned int (*)(const BoneHashPairing_t&)> *const this,
        int bucketCount,
        int growCount,
        int initCount,
        CUtlHash<BoneHashPairing_t,bool (*)(const BoneHashPairing_t&,const BoneHashPairing_t&),unsigned int (*)(const BoneHashPairing_t&)>::CompareFunc_t compareFunc,
        CUtlHash<BoneHashPairing_t,bool (*)(const BoneHashPairing_t&,const BoneHashPairing_t&),unsigned int (*)(const BoneHashPairing_t&)>::KeyFunc_t keyFunc)
{
  int v9; // ebx
  unsigned __int64 v10; // rbx
  int v11; // r15d
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v12; // rdx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v13; // r12
  int m_nAllocationCount; // eax
  unsigned int v15; // eax
  unsigned int v16; // [rsp+0h] [rbp-40h]
  int bucketCounta; // [rsp+4h] [rbp-3Ch]

  this->m_Buckets.m_Size = 0;
  if ( bucketCount > 0x10000 )
    bucketCount = 0x10000;
  this->m_Buckets.m_Memory.m_pMemory = 0;
  this->m_Buckets.m_Memory.m_nAllocationCount = 0;
  this->m_Buckets.m_Memory.m_nGrowSize = 0;
  v9 = bucketCount;
  this->m_CompareFunc = compareFunc;
  this->m_KeyFunc = keyFunc;
  bucketCounta = bucketCount;
  CUtlVectorBase<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>>::SetCount(
    &this->m_Buckets,
    bucketCount);
  if ( v9 > 0 )
  {
    v10 = 0;
    v11 = growCount & 0x3FFFFFFF;
    v16 = bucketCounta - 1;
    while ( 1 )
    {
      v13 = &this->m_Buckets.m_Memory.m_pMemory[v10 / 0x18];
      if ( initCount - v13->m_Size > 0 )
        break;
      v12 = &this->m_Buckets.m_Memory.m_pMemory[v10 / 0x18];
      if ( initCount != v13->m_Size )
        goto LABEL_10;
LABEL_6:
      v10 += 24LL;
      v12->m_Memory.m_nGrowSize = v11 | v12->m_Memory.m_nGrowSize & 0xC0000000;
      if ( v10 == 8 * (3LL * (bucketCounta - 1) + 3) )
        goto LABEL_12;
    }
    m_nAllocationCount = v13->m_Memory.m_nAllocationCount;
    if ( initCount > m_nAllocationCount )
      CUtlMemory<BoneHashPairing_t,int>::Grow(&v13->m_Memory, initCount - m_nAllocationCount);
LABEL_10:
    v13->m_Size = initCount;
    v12 = &this->m_Buckets.m_Memory.m_pMemory[v10 / 0x18];
    goto LABEL_6;
  }
  v16 = bucketCounta - 1;
LABEL_12:
  v15 = 0;
  this->m_bPowerOfTwo = (bucketCounta & v16) == 0;
  if ( (bucketCounta & v16) == 0 )
    v15 = v16;
  this->m_ModMask = v15;
}


// CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<false>, CUtlHashDict<const CMorphData*, false, false>::CHash<false> >::CUtlHash  (line 99, @0x000000000316a150, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, GrowMemory, GrowVector, InsertMultipleBefore, IsPowerOfTwo, RemoveMultipleFromTail, SetCount, SetGrowSize, operator[], ~CUtlVector
// calls: CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, int> >::SetCount, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int>::Grow, CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CMorphSet::Initialize
void __fastcall CUtlHash<CUtlHashDict<CMorphData const*,false,false>::Entry_t,CUtlHashDict<CMorphData const*,false,false>::CCompare<false>,CUtlHashDict<CMorphData const*,false,false>::CHash<false>>::CUtlHash(
        CUtlHash<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlHashDict<const CMorphData*,false,false>::CCompare<false>,CUtlHashDict<const CMorphData*,false,false>::CHash<false> > *const this,
        int bucketCount,
        int growCount,
        int initCount)
{
  int v7; // ebx
  unsigned __int64 v8; // rbx
  int v9; // r15d
  CUtlVector<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<const CMorphData*,false,false>::Entry_t,int> > *v10; // rdx
  CUtlVector<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<const CMorphData*,false,false>::Entry_t,int> > *v11; // r12
  int m_nAllocationCount; // eax
  unsigned int v13; // eax
  unsigned int v14; // [rsp+0h] [rbp-40h]
  int bucketCounta; // [rsp+4h] [rbp-3Ch]

  this->m_Buckets.m_Size = 0;
  if ( bucketCount > 0x10000 )
    bucketCount = 0x10000;
  this->m_Buckets.m_Memory.m_pMemory = 0;
  this->m_Buckets.m_Memory.m_nAllocationCount = 0;
  this->m_Buckets.m_Memory.m_nGrowSize = 0;
  v7 = bucketCount;
  bucketCounta = bucketCount;
  CUtlVectorBase<CUtlVector<CUtlHashDict<CMorphData const*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>>,CUtlMemory<CUtlVector<CUtlHashDict<CMorphData const*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>>,int>>::SetCount(
    &this->m_Buckets,
    bucketCount);
  if ( v7 > 0 )
  {
    v8 = 0;
    v9 = growCount & 0x3FFFFFFF;
    v14 = bucketCounta - 1;
    while ( 1 )
    {
      v11 = &this->m_Buckets.m_Memory.m_pMemory[v8 / 0x18];
      if ( initCount - v11->m_Size > 0 )
        break;
      v10 = &this->m_Buckets.m_Memory.m_pMemory[v8 / 0x18];
      if ( initCount != v11->m_Size )
        goto LABEL_10;
LABEL_6:
      v8 += 24LL;
      v10->m_Memory.m_nGrowSize = v9 | v10->m_Memory.m_nGrowSize & 0xC0000000;
      if ( v8 == 8 * (3LL * (bucketCounta - 1) + 3) )
        goto LABEL_12;
    }
    m_nAllocationCount = v11->m_Memory.m_nAllocationCount;
    if ( initCount > m_nAllocationCount )
      CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>::Grow(
        &v11->m_Memory,
        initCount - m_nAllocationCount);
LABEL_10:
    v11->m_Size = initCount;
    v10 = &this->m_Buckets.m_Memory.m_pMemory[v8 / 0x18];
    goto LABEL_6;
  }
  v14 = bucketCounta - 1;
LABEL_12:
  v13 = 0;
  this->m_bPowerOfTwo = (bucketCounta & v14) == 0;
  if ( (bucketCounta & v14) == 0 )
    v13 = v14;
  this->m_ModMask = v13;
}


// CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs>::Purge  (line 214, @0x0000000001b3b480, libserver.so)  // inlines: Purge, RemoveAll, operator[]
// calls: CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int>::Purge
// callers: _GLOBAL__sub_I_stdafx.cpp, _GLOBAL__sub_I_base_clientui_ent.cpp, _GLOBAL__sub_I_point_clientui_world_panel.cpp, _GLOBAL__sub_I_point_clientui_world_text_panel.cpp, _GLOBAL__sub_I_point_clientui_dialog.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I_gamesessionconfiguration_h_schema.gen_cpp, _GLOBAL__sub_I_devtest_hierarchy_cpp_schema.gen_cpp, _GLOBAL__sub_I_decalgamesystem_h_schema.gen_cpp, _GLOBAL__sub_I_plasma_h_schema.gen_cpp, _GLOBAL__sub_I_base_clientui_ent_h_schema.gen_cpp, _GLOBAL__sub_I_point_clientui_world_panel_h_schema.gen_cpp (100 total)
void __fastcall CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t,IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs,IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs>::Purge(
        CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t,IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs,IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs> *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> > *v4; // rax
  bool v5; // zf

  if ( this->m_Buckets.m_Size > 0 )
  {
    v2 = 0;
    v3 = 8 * (3LL * (this->m_Buckets.m_Size - 1) + 3);
    do
    {
      v4 = &this->m_Buckets.m_Memory.m_pMemory[v2 / 0x18];
      v5 = (v4->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v4->m_Size = 0;
      if ( v5 )
        CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int>::Purge(&v4->m_Memory);
      v2 += 24LL;
    }
    while ( v2 != v3 );
  }
}


// CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), unsigned int (*)(const SkeletonInstanceDecalList_t&)>::Purge  (line 214, @0x0000000001f91df0, libserver.so)  // inlines: Purge, RemoveAll, operator[]
// calls: CUtlMemory<SkeletonInstanceDecalList_t, int>::Purge
// callers: CDecalGameSystem::CDecalGameSystem
void __fastcall CUtlHash<SkeletonInstanceDecalList_t,bool (*)(SkeletonInstanceDecalList_t const&,SkeletonInstanceDecalList_t const&),unsigned int (*)(SkeletonInstanceDecalList_t const&)>::Purge(
        CUtlHash<SkeletonInstanceDecalList_t,bool (*)(const SkeletonInstanceDecalList_t&,const SkeletonInstanceDecalList_t&),unsigned int (*)(const SkeletonInstanceDecalList_t&)> *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v4; // rax
  bool v5; // zf

  if ( this->m_Buckets.m_Size > 0 )
  {
    v2 = 0;
    v3 = 8 * (3LL * (this->m_Buckets.m_Size - 1) + 3);
    do
    {
      v4 = &this->m_Buckets.m_Memory.m_pMemory[v2 / 0x18];
      v5 = (v4->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v4->m_Size = 0;
      if ( v5 )
        CUtlMemory<SkeletonInstanceDecalList_t,int>::Purge(&v4->m_Memory);
      v2 += 24LL;
    }
    while ( v2 != v3 );
  }
}


// CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)>::Purge  (line 214, @0x00000000031524f0, libserver.so)  // inlines: Purge, RemoveAll, operator[]
// calls: CUtlMemory<BoneHashPairing_t, int>::Purge
// callers: CModelSkeletonSorter::RemapBones
void __fastcall CUtlHash<BoneHashPairing_t,bool (*)(BoneHashPairing_t const&,BoneHashPairing_t const&),unsigned int (*)(BoneHashPairing_t const&)>::Purge(
        CUtlHash<BoneHashPairing_t,bool (*)(const BoneHashPairing_t&,const BoneHashPairing_t&),unsigned int (*)(const BoneHashPairing_t&)> *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v4; // rax
  bool v5; // zf

  if ( this->m_Buckets.m_Size > 0 )
  {
    v2 = 0;
    v3 = 8 * (3LL * (this->m_Buckets.m_Size - 1) + 3);
    do
    {
      while ( 1 )
      {
        v4 = &this->m_Buckets.m_Memory.m_pMemory[v2 / 0x18];
        v5 = (v4->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v4->m_Size = 0;
        if ( v5 )
          break;
        v2 += 24LL;
        if ( v2 == v3 )
          return;
      }
      v2 += 24LL;
      CUtlMemory<BoneHashPairing_t,int>::Purge(&v4->m_Memory);
    }
    while ( v2 != v3 );
  }
}


// CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequenceMapping::HashValueType::HashFuncs>::Find  (line 263, @0x0000000003163240, libserver.so)  // inlines: BuildHandle, DoFind, HashInt, operator(), operator[]
// calls: MurmurHash2
// callers: CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers
UtlHashHandle_t __fastcall CUtlHash<CActivityToSequenceMapping::HashValueType,CActivityToSequenceMapping::HashValueType::HashFuncs,CActivityToSequenceMapping::HashValueType::HashFuncs>::Find(
        const CUtlHash<CActivityToSequenceMapping::HashValueType,CActivityToSequenceMapping::HashValueType::HashFuncs,CActivityToSequenceMapping::HashValueType::HashFuncs> *const this,
        const CActivityToSequenceMapping::HashValueType *const src)
{
  uint32 v4; // eax
  unsigned int v5; // edx
  CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v6; // rcx
  int m_Size; // edi
  CActivityToSequenceMapping::HashValueType *m_pMemory; // rsi
  CActivityToSequenceMapping::HashValueType *v9; // rsi
  int v10; // ecx
  int key[5]; // [rsp+Ch] [rbp-14h] BYREF

  key[0] = src->activityIdx;
  v4 = MurmurHash2(key, 4, 0x3501A674u);
  if ( this->m_bPowerOfTwo )
    v5 = this->m_ModMask & v4;
  else
    v5 = v4 % this->m_Buckets.m_Size;
  v6 = &this->m_Buckets.m_Memory.m_pMemory[v5];
  m_Size = v6->m_Size;
  if ( v6->m_Size <= 0 )
  {
    if ( m_Size == 0 )
      return -1;
  }
  else
  {
    m_pMemory = v6->m_Memory.m_pMemory;
    if ( m_pMemory->activityIdx != src->activityIdx )
    {
      v9 = m_pMemory + 1;
      v10 = 0;
      while ( ++v10 != m_Size )
      {
        ++v9;
        if ( src->activityIdx == v9[-1].activityIdx )
          return v10 | (v5 << 16);
      }
      return -1;
    }
  }
  v10 = 0;
  return v10 | (v5 << 16);
}


// CUtlScalarHash<int, CDefaultHash32>::Insert  (line 1201, @0x0000000002f20dc0, libserver.so)  // inlines: Grow, HashIntConventional, HashKey32
// calls: operator new [], operator delete []
// callers: CNextbotLodManager::UpdateLodSource
UtlHashFastHandle_t __fastcall CUtlScalarHash<int,CDefaultHash32>::Insert(
        CUtlScalarHash<int,CDefaultHash32> *const this,
        unsigned int uiKey,
        const int *const data)
{
  int m_dataCount; // eax
  int m_maxData; // edx
  unsigned int m_uiBucketMask; // esi
  CUtlScalarHash<int,CDefaultHash32>::HashScalarData_t *v9; // rdx
  signed int i; // ecx
  UtlHashFastHandle_t result; // rax
  __int64 v12; // r8
  int v13; // r14d
  CUtlScalarHash<int,CDefaultHash32>::HashScalarData_t *m_pData; // rax
  int v15; // r12d
  int v16; // r12d
  size_t v17; // rdi
  CUtlScalarHash<int,CDefaultHash32>::HashScalarData_t *v18; // rax
  __int64 v19; // rdx
  const int *p_m_Data; // r12
  __int64 v21; // r14
  unsigned int v22; // esi
  CUtlScalarHash<int,CDefaultHash32>::HashScalarData_t *pMem; // [rsp+8h] [rbp-38h]

  m_dataCount = this->m_dataCount;
  m_maxData = this->m_maxData;
  if ( m_dataCount >= m_maxData )
  {
    v13 = 2 * m_maxData;
    m_pData = this->m_pData;
    v15 = 16;
    if ( 2 * m_maxData >= 16 )
      v15 = 2 * m_maxData;
    this->m_maxData = v15;
    v16 = 2 * v15;
    v17 = -1;
    pMem = m_pData;
    if ( v16 <= 0xFE0000000000000LL )
      v17 = 8LL * v16;
    v18 = operator new[](v17);
    this->m_dataCount = 0;
    this->m_uiBucketMask = v16 - 1;
    v19 = 0;
    for ( this->m_pData = v18; ; v18 = this->m_pData )
    {
      v18[v19++].m_uiKey = -1;
      if ( v16 <= v19 )
        break;
    }
    if ( v13 > 0 )
    {
      p_m_Data = &pMem->m_Data;
      v21 = &pMem[(v13 - 1) + 1].m_Data;
      do
      {
        v22 = *(p_m_Data - 1);
        if ( v22 != -1 )
          CUtlScalarHash<int,CDefaultHash32>::Insert(this, v22, p_m_Data);
        p_m_Data += 2;
      }
      while ( p_m_Data != v21 );
    }
    if ( pMem != 0 )
      operator delete[](pMem);
    m_dataCount = this->m_dataCount;
  }
  m_uiBucketMask = this->m_uiBucketMask;
  this->m_dataCount = m_dataCount + 1;
  v9 = this->m_pData;
  for ( i = m_uiBucketMask
          & (32
           * (32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey)) + 33 * (uiKey - 1431655766) + BYTE1(uiKey) + BYTE2(uiKey))
           + 32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey))
           + 33 * (uiKey - 1431655766)
           + BYTE1(uiKey)
           + BYTE2(uiKey)
           + HIBYTE(uiKey)); ; i = m_uiBucketMask & (i + 1) )
  {
    result = i;
    v12 = i;
    if ( v9[v12].m_uiKey == -1 )
      break;
  }
  v9[i].m_uiKey = uiKey;
  this->m_pData[v12].m_Data = *data;
  return result;
}


// CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Insert  (line 1201, @0x00000000031d2aa0, libserver.so)  // inlines: Grow, HashIntConventional, HashKey32
// calls: operator new [], operator delete []
// callers: CMesh::CalculateAdjacency
UtlHashFastHandle_t __fastcall CUtlScalarHash<EdgeHash_t,CDefaultHash32>::Insert(
        CUtlScalarHash<EdgeHash_t,CDefaultHash32> *const this,
        unsigned int uiKey,
        const EdgeHash_t *const data)
{
  int m_dataCount; // eax
  int m_maxData; // edx
  unsigned int m_uiBucketMask; // esi
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *v9; // rdx
  signed int i; // ecx
  UtlHashFastHandle_t result; // rax
  __int64 v12; // r8
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *v13; // rdx
  __int64 v14; // rdi
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *m_pData; // rax
  int v16; // r14d
  int v17; // r14d
  size_t v18; // rdi
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  const EdgeHash_t *p_m_Data; // r15
  unsigned int m_nTri1; // esi
  int v24; // [rsp+4h] [rbp-3Ch]
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *pMem; // [rsp+8h] [rbp-38h]

  m_dataCount = this->m_dataCount;
  m_maxData = this->m_maxData;
  if ( m_dataCount >= m_maxData )
  {
    m_pData = this->m_pData;
    v16 = 16;
    if ( 2 * m_maxData >= 16 )
      v16 = 2 * m_maxData;
    this->m_maxData = v16;
    v17 = 2 * v16;
    v18 = -1;
    pMem = m_pData;
    if ( v17 <= 0x660000000000000LL )
      v18 = 20LL * v17;
    v24 = 2 * m_maxData;
    v19 = operator new[](v18);
    v20 = 0;
    this->m_uiBucketMask = v17 - 1;
    v21 = 0;
    this->m_pData = v19;
    this->m_dataCount = 0;
    while ( 1 )
    {
      ++v21;
      v19[v20++].m_uiKey = -1;
      if ( v17 <= v21 )
        break;
      v19 = this->m_pData;
    }
    if ( v24 > 0 )
    {
      p_m_Data = &pMem->m_Data;
      do
      {
        m_nTri1 = p_m_Data[-1].m_nTri1;
        if ( m_nTri1 != -1 )
          CUtlScalarHash<EdgeHash_t,CDefaultHash32>::Insert(this, m_nTri1, p_m_Data);
        p_m_Data = (p_m_Data + 20);
      }
      while ( p_m_Data != &pMem[(v24 - 1) + 1].m_Data );
    }
    if ( pMem != 0 )
      operator delete[](pMem);
    m_dataCount = this->m_dataCount;
  }
  m_uiBucketMask = this->m_uiBucketMask;
  this->m_dataCount = m_dataCount + 1;
  v9 = this->m_pData;
  for ( i = m_uiBucketMask
          & (32
           * (32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey)) + 33 * (uiKey - 1431655766) + BYTE1(uiKey) + BYTE2(uiKey))
           + 32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey))
           + 33 * (uiKey - 1431655766)
           + BYTE1(uiKey)
           + BYTE2(uiKey)
           + HIBYTE(uiKey)); ; i = m_uiBucketMask & (i + 1) )
  {
    result = i;
    v12 = i;
    if ( v9[v12].m_uiKey == -1 )
      break;
  }
  v9[i].m_uiKey = uiKey;
  v13 = this->m_pData;
  v14 = *&data->m_nTri0;
  *&v13[v12].m_Data.m_nV0 = *&data->m_nV0;
  *&v13[v12].m_Data.m_nTri0 = v14;
  return result;
}


// CUtlScalarHash<void const*, CDefaultHash32>::Insert  (line 1201, @0x000000000326d5c0, libserver.so)  // inlines: Grow, HashIntConventional, HashKey32
// calls: operator new [], operator delete []
// callers: CSchemaVisitorBase::TraverseClass
UtlHashFastHandle_t __fastcall CUtlScalarHash<void const*,CDefaultHash32>::Insert(
        CUtlScalarHash<void const*,CDefaultHash32> *const this,
        unsigned int uiKey,
        const void *const *const data)
{
  int m_dataCount; // eax
  int m_maxData; // edx
  unsigned int m_uiBucketMask; // esi
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *v9; // rdx
  signed int i; // ecx
  UtlHashFastHandle_t result; // rax
  __int64 v12; // r8
  int v13; // r14d
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *m_pData; // rax
  int v15; // r12d
  int v16; // r12d
  size_t v17; // rdi
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const void *const *p_m_Data; // r12
  __int64 v22; // r14
  unsigned int v23; // esi
  CUtlScalarHash<void const*,CDefaultHash32>::HashScalarData_t *pMem; // [rsp+8h] [rbp-38h]

  m_dataCount = this->m_dataCount;
  m_maxData = this->m_maxData;
  if ( m_dataCount >= m_maxData )
  {
    v13 = 2 * m_maxData;
    m_pData = this->m_pData;
    v15 = 16;
    if ( 2 * m_maxData >= 16 )
      v15 = 2 * m_maxData;
    this->m_maxData = v15;
    v16 = 2 * v15;
    v17 = -1;
    pMem = m_pData;
    if ( v16 <= 0x7F0000000000000LL )
      v17 = 16LL * v16;
    v18 = operator new[](v17);
    this->m_dataCount = 0;
    this->m_uiBucketMask = v16 - 1;
    v19 = 0;
    for ( this->m_pData = v18; ; v18 = this->m_pData )
    {
      v20 = v19++;
      v18[v20].m_uiKey = -1;
      if ( v16 <= v19 )
        break;
    }
    if ( v13 > 0 )
    {
      p_m_Data = &pMem->m_Data;
      v22 = &pMem[(v13 - 1) + 1].m_Data;
      do
      {
        v23 = *(p_m_Data - 2);
        if ( v23 != -1 )
          CUtlScalarHash<void const*,CDefaultHash32>::Insert(this, v23, p_m_Data);
        p_m_Data += 2;
      }
      while ( p_m_Data != v22 );
    }
    if ( pMem != 0 )
      operator delete[](pMem);
    m_dataCount = this->m_dataCount;
  }
  m_uiBucketMask = this->m_uiBucketMask;
  this->m_dataCount = m_dataCount + 1;
  v9 = this->m_pData;
  for ( i = m_uiBucketMask
          & (32
           * (32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey)) + 33 * (uiKey - 1431655766) + BYTE1(uiKey) + BYTE2(uiKey))
           + 32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey))
           + 33 * (uiKey - 1431655766)
           + BYTE1(uiKey)
           + BYTE2(uiKey)
           + HIBYTE(uiKey)); ; i = m_uiBucketMask & (i + 1) )
  {
    result = i;
    v12 = i;
    if ( v9[v12].m_uiKey == -1 )
      break;
  }
  v9[i].m_uiKey = uiKey;
  this->m_pData[v12].m_Data = *data;
  return result;
}


// CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Find  (line 1284, @0x00000000031d29e0, libserver.so)  // inlines: HashIntConventional, HashKey32, operator==
// callers: CMesh::CalculateAdjacency
UtlHashFastHandle_t __fastcall CUtlScalarHash<EdgeHash_t,CDefaultHash32>::Find(
        const CUtlScalarHash<EdgeHash_t,CDefaultHash32> *const this,
        unsigned int uiKey,
        const EdgeHash_t *const dataRecord)
{
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *m_pData; // r9
  unsigned int m_uiBucketMask; // r10d
  signed int v5; // ecx
  CUtlScalarHash<EdgeHash_t,CDefaultHash32>::HashScalarData_t *v6; // r8
  UtlHashFastHandle_t result; // rax
  unsigned int m_uiKey; // edi

  m_pData = this->m_pData;
  if ( m_pData == 0 )
    return -1;
  m_uiBucketMask = this->m_uiBucketMask;
  v5 = this->m_uiBucketMask
     & (32 * (32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey)) + 33 * (uiKey - 1431655766) + BYTE1(uiKey) + BYTE2(uiKey))
      + 32 * (33 * (uiKey - 1431655766) + BYTE1(uiKey))
      + 33 * (uiKey - 1431655766)
      + BYTE1(uiKey)
      + BYTE2(uiKey)
      + HIBYTE(uiKey));
  v6 = &m_pData[v5];
  result = -1;
  m_uiKey = v6->m_uiKey;
  if ( v6->m_uiKey != -1 )
  {
    while ( uiKey != m_uiKey || v6->m_Data.m_nV0 != dataRecord->m_nV0 || dataRecord->m_nV1 != v6->m_Data.m_nV1 )
    {
      v5 = m_uiBucketMask & (v5 + 1);
      v6 = &m_pData[v5];
      m_uiKey = v6->m_uiKey;
      if ( v6->m_uiKey == -1 )
        return -1;
    }
    return v5;
  }
  return result;
}


