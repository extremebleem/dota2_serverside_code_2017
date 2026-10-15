
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ConvertOldModelDiskDataToNewFormat<CMorphRectData, MorphRectData_t>  (line 162, @0x000000000316b7c0, libserver.so)  // inlines: AllocZeroUnconstructed<CMorphBundleData>, AllocZeroUnconstructed<CMorphRectData>, ConvertOldModelDiskDataToNewFormat, ConvertOldModelDiskDataToNewFormat<CMorphBundleData, BundleData_t>, ConvertOldModelDiskDataToNewFormat<float>, ConvertOldModelDiskDataToNewFormat<short int>, ConvertToExternalMemory, Element, GetPtr, GetRawPtr, ResolveOffset, V_memset, memset, operator[]
// calls: CUtlScratchMemoryPool::AllocAligned, V_memset, CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >::SetCount, memset, CUtlVectorBase<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >::SetCount, ConvertOldModelDiskDataToNewFormat
// callers: ConvertOldModelDiskDataToNewFormat, CMorphSetData::InitFromV0Data
void __fastcall ConvertOldModelDiskDataToNewFormat<CMorphRectData,MorphRectData_t>(
        CConvertOldDiskCtx *const convertCtx,
        CUtlVector<CMorphRectData,CUtlMemory<CMorphRectData,int> > *pNew,
        const CResourceArray<MorphRectData_t> *pOld)
{
  signed int m_nCount; // ebx
  CMorphRectData *v5; // r14
  CUtlVector<CMorphRectData,CUtlMemory<CMorphRectData,int> > *v6; // rcx
  CMorphRectData *m_pMemory; // rsi
  char *v8; // r12
  char *v9; // r12
  CMorphRectData *v10; // rbx
  int v11; // r14d
  CMorphBundleData *v12; // r15
  CMorphBundleData *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  int v17; // esi
  __int64 v18; // rdx
  const BundleData_t *v19; // rdx
  CMorphBundleData *v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-60h]
  unsigned __int64 v24; // [rsp+18h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-38h]

  m_nCount = pOld->m_nCount;
  if ( m_nCount != 0 )
  {
    v5 = CUtlScratchMemoryPool::AllocAligned(convertCtx->m_pPool, 40 * m_nCount, 8);
    V_memset(v5, 0, 40LL * m_nCount);
    if ( m_nCount < 0 )
      goto LABEL_9;
    v6 = pNew;
    if ( pNew->m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = pNew;
    v5 = 0;
    if ( pNew->m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  m_pMemory = v6->m_Memory.m_pMemory;
  if ( v5 != m_pMemory )
  {
    if ( m_pMemory != 0 && (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    pNew->m_Memory.m_pMemory = v5;
    pNew->m_Memory.m_nAllocationCount = m_nCount;
    pNew->m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_9:
  CUtlVectorBase<CMorphRectData,CUtlMemory<CMorphRectData,int>>::SetCount(pNew, m_nCount);
  if ( m_nCount > 0 )
  {
    v24 = 0;
    v21 = 4 * (5LL * (m_nCount - 1) + 5);
    while ( 1 )
    {
      v8 = 0;
      if ( pOld->m_nOffset != 0 )
        v8 = pOld + pOld->m_nOffset;
      v9 = &v8[v24];
      v10 = &pNew->m_Memory.m_pMemory[v24 / 0x14];
      v10->m_nXLeftDst = *v9;
      v10->m_nYTopDst = *(v9 + 1);
      v10->m_flUWidthSrc = *(v9 + 1);
      v10->m_flVHeightSrc = *(v9 + 2);
      v11 = *(v9 + 4);
      if ( v11 == 0 )
        break;
      v12 = CUtlScratchMemoryPool::AllocAligned(convertCtx->m_pPool, 56 * v11, 8);
      memset(v12, 0, 56LL * v11);
      if ( v11 >= 0 )
        goto LABEL_15;
LABEL_21:
      CUtlVectorBase<CMorphBundleData,CUtlMemory<CMorphBundleData,int>>::SetCount(&v10->m_bundleDatas, v11);
      if ( v11 > 0 )
      {
        v14 = 0;
        v15 = 8 * (3LL * (v11 - 1) + 3);
        v16 = 0;
        v25 = v15;
        do
        {
          v17 = *(v9 + 3);
          v18 = 0;
          if ( v17 != 0 )
            v18 = &v9[v17 + 12];
          v19 = (v14 + v18);
          v20 = &v10->m_bundleDatas.m_Memory.m_pMemory[v16];
          v14 += 24;
          ++v16;
          ConvertOldModelDiskDataToNewFormat(convertCtx, v20, v19);
        }
        while ( v14 != v25 );
      }
      v24 += 20LL;
      if ( v24 == v21 )
        return;
    }
    v12 = 0;
LABEL_15:
    if ( v10->m_bundleDatas.m_Memory.m_nAllocationCount >= 0 )
    {
      v13 = v10->m_bundleDatas.m_Memory.m_pMemory;
      if ( v12 != v13 )
      {
        if ( v13 != 0 && (v10->m_bundleDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v10->m_bundleDatas.m_Memory.m_pMemory = v12;
        v10->m_bundleDatas.m_Memory.m_nAllocationCount = v11;
        v10->m_bundleDatas.m_Memory.m_nGrowSize = 0x40000000;
      }
    }
    goto LABEL_21;
  }
}


