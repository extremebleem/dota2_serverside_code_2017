
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_morphset_old_disk.cpp  (line 0, @0x0000000001a6b4f0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_morphset_old_disk_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ConvertOldModelDiskDataToNewFormat  (line 14, @0x000000000316a470, libserver.so)
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        MorphFlexControllerRemapType_t *pNew,
        const RenderMeshFlexControllerRemapType_t *pOld)
{
  *pNew = *pOld;
}


// ConvertOldModelDiskDataToNewFormat  (line 23, @0x000000000316a480, libserver.so)
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        MorphBundleType_t *pNew,
        const BundleType_t *pOld)
{
  *pNew = *pOld;
}


// ConvertOldModelDiskDataToNewFormat  (line 32, @0x000000000316a490, libserver.so)
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CMorphSetData::LookupType_t *pNew,
        const MorphSetData_t::LookupType_t *pOld)
{
  *pNew = *pOld;
}


// ConvertOldModelDiskDataToNewFormat  (line 39, @0x000000000316a4a0, libserver.so)
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CMorphSetData::EncodingType_t *pNew,
        const MorphSetData_t::EncodingType_t *pOld)
{
  *pNew = *pOld;
}


// ConvertOldModelDiskDataToNewFormat  (line 46, @0x000000000316a560, libserver.so)  // inlines: AllocZeroUnconstructed<float>, ConvertOldModelDiskDataToNewFormat<float, float>, ConvertOldModelDiskDataToNewFormat<float>, ConvertToExternalMemory, Element, GetPtr, GetRawPtr, ResolveOffset, V_memset, memset
// calls: CUtlScratchMemoryPool::AllocAligned, memset, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount
// callers: ConvertOldModelDiskDataToNewFormat, ConvertOldModelDiskDataToNewFormat<CMorphRectData, MorphRectData_t>
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CMorphBundleData *pNew,
        const BundleData_t *pOld)
{
  signed int m_nCount; // r14d
  float *v7; // r15
  float *m_pMemory; // rsi
  unsigned __int64 v9; // rax
  int32 m_nOffset; // ecx
  char *v11; // rdx
  signed int v12; // r14d
  float *v13; // r13
  float *v14; // rsi
  unsigned __int64 v15; // rax
  int32 v16; // ecx
  char *v17; // rdx
  void *v18; // [rsp+8h] [rbp-38h]

  pNew->m_flULeftSrc = pOld->m_flULeftSrc;
  pNew->m_flVTopSrc = pOld->m_flVTopSrc;
  m_nCount = pOld->m_offsets.m_nCount;
  if ( m_nCount != 0 )
  {
    v18 = CUtlScratchMemoryPool::AllocAligned(convertCtx->m_pPool, 4 * m_nCount, 4);
    memset(v18, 0, 4LL * m_nCount);
    v7 = v18;
    if ( m_nCount < 0 || pNew->m_offsets.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  else
  {
    v7 = 0;
    if ( pNew->m_offsets.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  m_pMemory = pNew->m_offsets.m_Memory.m_pMemory;
  if ( v7 != m_pMemory )
  {
    if ( m_pMemory != 0 && (pNew->m_offsets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    pNew->m_offsets.m_Memory.m_pMemory = v7;
    pNew->m_offsets.m_Memory.m_nAllocationCount = m_nCount;
    pNew->m_offsets.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_9:
  CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&pNew->m_offsets, m_nCount);
  if ( m_nCount > 0 )
  {
    v9 = 0;
    do
    {
      m_nOffset = pOld->m_offsets.m_nOffset;
      v11 = 0;
      if ( m_nOffset != 0 )
        v11 = &pOld->m_offsets + m_nOffset;
      pNew->m_offsets.m_Memory.m_pMemory[v9 / 4] = *&v11[v9];
      v9 += 4LL;
    }
    while ( v9 != 4LL * (m_nCount - 1) + 4 );
  }
  v12 = pOld->m_ranges.m_nCount;
  if ( v12 != 0 )
  {
    v13 = CUtlScratchMemoryPool::AllocAligned(convertCtx->m_pPool, 4 * v12, 4);
    memset(v13, 0, 4LL * v12);
    if ( v12 < 0 || pNew->m_ranges.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_22;
  }
  else
  {
    v13 = 0;
    if ( pNew->m_ranges.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_22;
  }
  v14 = pNew->m_ranges.m_Memory.m_pMemory;
  if ( v13 != v14 )
  {
    if ( v14 != 0 && (pNew->m_ranges.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    pNew->m_ranges.m_Memory.m_pMemory = v13;
    pNew->m_ranges.m_Memory.m_nAllocationCount = v12;
    pNew->m_ranges.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_22:
  CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&pNew->m_ranges, v12);
  if ( v12 > 0 )
  {
    v15 = 0;
    do
    {
      v16 = pOld->m_ranges.m_nOffset;
      v17 = 0;
      if ( v16 != 0 )
        v17 = &pOld->m_ranges + v16;
      pNew->m_ranges.m_Memory.m_pMemory[v15 / 4] = *&v17[v15];
      v15 += 4LL;
    }
    while ( v15 != 4LL * (v12 - 1) + 4 );
  }
}


// ConvertOldModelDiskDataToNewFormat  (line 54, @0x000000000316a780, libserver.so)  // inlines: AllocZeroUnconstructed<CMorphBundleData>, ConvertOldModelDiskDataToNewFormat<CMorphBundleData, BundleData_t>, ConvertOldModelDiskDataToNewFormat<float>, ConvertOldModelDiskDataToNewFormat<short int>, ConvertToExternalMemory, Element, GetPtr, GetRawPtr, ResolveOffset, V_memset, memset, operator[]
// calls: CUtlScratchMemoryPool::AllocAligned, memset, CUtlVectorBase<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >::SetCount, ConvertOldModelDiskDataToNewFormat
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CMorphRectData *pNew,
        const MorphRectData_t *pOld)
{
  signed int m_nCount; // r14d
  CMorphBundleData *v7; // r15
  CMorphBundleData *m_pMemory; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  int32 m_nOffset; // esi
  char *v13; // rdx
  const BundleData_t *v14; // rdx
  CMorphBundleData *v15; // rsi
  CMorphBundleData *v16; // [rsp+8h] [rbp-38h]
  __int64 v17; // [rsp+8h] [rbp-38h]

  pNew->m_nXLeftDst = pOld->m_nXLeftDst;
  pNew->m_nYTopDst = pOld->m_nYTopDst;
  pNew->m_flUWidthSrc = pOld->m_flUWidthSrc;
  pNew->m_flVHeightSrc = pOld->m_flVHeightSrc;
  m_nCount = pOld->m_bundleDatas.m_nCount;
  if ( m_nCount != 0 )
  {
    v16 = CUtlScratchMemoryPool::AllocAligned(convertCtx->m_pPool, 56 * m_nCount, 8);
    memset(v16, 0, 56LL * m_nCount);
    v7 = v16;
    if ( m_nCount < 0 || pNew->m_bundleDatas.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  else
  {
    v7 = 0;
    if ( pNew->m_bundleDatas.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  m_pMemory = pNew->m_bundleDatas.m_Memory.m_pMemory;
  if ( v7 != m_pMemory )
  {
    if ( m_pMemory != 0 && (pNew->m_bundleDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    pNew->m_bundleDatas.m_Memory.m_pMemory = v7;
    pNew->m_bundleDatas.m_Memory.m_nAllocationCount = m_nCount;
    pNew->m_bundleDatas.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_9:
  CUtlVectorBase<CMorphBundleData,CUtlMemory<CMorphBundleData,int>>::SetCount(&pNew->m_bundleDatas, m_nCount);
  if ( m_nCount > 0 )
  {
    v9 = 0;
    v10 = 8 * (3LL * (m_nCount - 1) + 3);
    v11 = 0;
    v17 = v10;
    do
    {
      m_nOffset = pOld->m_bundleDatas.m_nOffset;
      v13 = 0;
      if ( m_nOffset != 0 )
        v13 = &pOld->m_bundleDatas + m_nOffset;
      v14 = &v13[v9];
      v15 = &pNew->m_bundleDatas.m_Memory.m_pMemory[v11];
      v9 += 24;
      ++v11;
      ConvertOldModelDiskDataToNewFormat(convertCtx, v15, v14);
    }
    while ( v9 != v17 );
  }
}


// ConvertOldModelDiskDataToNewFormat  (line 63, @0x000000000316a8f0, libserver.so)  // inlines: ConvertOldModelDiskDataToNewFormat, GetPtr, GetRawPtr, ResolveOffset
// calls: CUtlString::Set, ConvertOldModelDiskDataToNewFormat<CMorphRectData, MorphRectData_t>
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CMorphData *pNew,
        const MorphData_t *pOld)
{
  const char *v5; // rsi
  __int64 m_nOffset; // rax
  const char *v8; // rax

  v5 = "";
  m_nOffset = pOld->m_name.m_nOffset;
  if ( m_nOffset != 0 )
  {
    v8 = pOld + m_nOffset;
    if ( v8 != 0 )
      v5 = v8;
  }
  CUtlString::Set(&pNew->m_name, v5);
  ConvertOldModelDiskDataToNewFormat<CMorphRectData,MorphRectData_t>(
    convertCtx,
    &pNew->m_morphRectDatas,
    &pOld->m_morphRectDatas);
}


// ConvertOldModelDiskDataToNewFormat  (line 69, @0x000000000316a4b0, libserver.so)  // inlines: ConvertOldModelDiskDataToNewFormat, GetPtr, GetRawPtr, ResolveOffset
// calls: CUtlString::Set
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CFlexDesc *pNew,
        const FlexDesc_t *pOld)
{
  __int64 m_nOffset; // rcx
  const char *v5; // rsi
  const char *v6; // rcx

  m_nOffset = pOld->m_szFacs.m_nOffset;
  v5 = "";
  if ( m_nOffset != 0 )
  {
    v6 = pOld + m_nOffset;
    if ( v6 != 0 )
      v5 = v6;
  }
  CUtlString::Set(&pNew->m_szFacs, v5);
}


// ConvertOldModelDiskDataToNewFormat  (line 74, @0x000000000316a4e0, libserver.so)  // inlines: ConvertOldModelDiskDataToNewFormat, ConvertOldModelDiskDataToNewFormat<float>, GetPtr, GetRawPtr, ResolveOffset
// calls: CUtlString::Set
// callers: CMorphSetData::InitFromV0Data
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CFlexController *pNew,
        const FlexController_t *pOld)
{
  __int64 m_nOffset; // rax
  const char *v5; // rsi
  const char *v7; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  const char *v10; // rax

  m_nOffset = pOld->m_szName.m_nOffset;
  v5 = "";
  if ( m_nOffset != 0 )
  {
    v7 = pOld + m_nOffset;
    if ( v7 != 0 )
      v5 = v7;
  }
  CUtlString::Set(&pNew->m_szName, v5);
  v8 = pOld->m_szType.m_nOffset;
  v9 = "";
  if ( v8 != 0 )
  {
    v10 = &pOld->m_szType + v8;
    if ( v10 != 0 )
      v9 = v10;
  }
  CUtlString::Set(&pNew->m_szType, v9);
  pNew->min = pOld->min;
  pNew->max = pOld->max;
}


// ConvertOldModelDiskDataToNewFormat  (line 83, @0x000000000316a940, libserver.so)  // inlines: AllocZeroUnconstructed<CFlexOp>, ConvertOldModelDiskDataToNewFormat, ConvertOldModelDiskDataToNewFormat<CFlexOp, FlexOp_t>, ConvertOldModelDiskDataToNewFormat<int>, ConvertToExternalMemory, Element, GetPtr, GetRawPtr, ResolveOffset, V_memset, memset, operator[]
// calls: CUtlScratchMemoryPool::AllocAligned, memset, CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::SetCount
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CFlexRule *pNew,
        const FlexRule_t *pOld)
{
  signed int m_nCount; // r13d
  CFlexOp *v6; // r14
  CFlexOp *m_pMemory; // rsi
  __int64 v8; // rax
  int32 m_nOffset; // ecx
  char *v10; // rdi
  char *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx

  pNew->m_nFlex = pOld->m_nFlex;
  m_nCount = pOld->m_FlexOps.m_nCount;
  if ( m_nCount != 0 )
  {
    v6 = CUtlScratchMemoryPool::AllocAligned(convertCtx->m_pPool, 8 * m_nCount, 4);
    memset(v6, 0, 8LL * m_nCount);
    if ( m_nCount < 0 || pNew->m_FlexOps.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0;
    if ( pNew->m_FlexOps.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  m_pMemory = pNew->m_FlexOps.m_Memory.m_pMemory;
  if ( v6 != m_pMemory )
  {
    if ( m_pMemory != 0 && (pNew->m_FlexOps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    pNew->m_FlexOps.m_Memory.m_pMemory = v6;
    pNew->m_FlexOps.m_Memory.m_nAllocationCount = m_nCount;
    pNew->m_FlexOps.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_9:
  CUtlVectorBase<CFlexOp,CUtlMemory<CFlexOp,int>>::SetCount(&pNew->m_FlexOps, m_nCount);
  if ( m_nCount > 0 )
  {
    v8 = 0;
    do
    {
      m_nOffset = pOld->m_FlexOps.m_nOffset;
      v10 = 0;
      if ( m_nOffset != 0 )
        v10 = &pOld->m_FlexOps + m_nOffset;
      v11 = &v10[v8];
      v12 = v8;
      v8 += 8;
      v13 = (pNew->m_FlexOps.m_Memory.m_pMemory + v12);
      *v13 = *v11;
      v13[1] = *(v11 + 1);
    }
    while ( v8 != 8LL * (m_nCount - 1) + 8 );
  }
}


// ConvertOldModelDiskDataToNewFormat  (line 89, @0x000000000316a550, libserver.so)
void __fastcall ConvertOldModelDiskDataToNewFormat(
        CConvertOldDiskCtx *const convertCtx,
        CFlexOp *pNew,
        const FlexOp_t *pOld)
{
  *pNew = *pOld;
}


// CMorphSetData::InitFromV0Data  (line 124, @0x000000000316aa70, libserver.so)  // inlines: AllocZeroUnconstructed<CFlexController>, AllocZeroUnconstructed<CFlexDesc>, AllocZeroUnconstructed<CFlexOp>, AllocZeroUnconstructed<CFlexRule>, AllocZeroUnconstructed<CMorphData>, AllocZeroUnconstructed<MorphBundleType_t>, ConvertOldModelDiskDataToNewFormat, ConvertOldModelDiskDataToNewFormat<CFlexController, FlexController_t>, ConvertOldModelDiskDataToNewFormat<CFlexDesc, FlexDesc_t>, ConvertOldModelDiskDataToNewFormat<CFlexOp, FlexOp_t>, ConvertOldModelDiskDataToNewFormat<CFlexRule, FlexRule_t>, ConvertOldModelDiskDataToNewFormat<CMorphData, MorphData_t>, ConvertOldModelDiskDataToNewFormat<InfoForResourceTypeCTextureBase>, ConvertOldModelDiskDataToNewFormat<MorphBundleType_t, BundleType_t>, ConvertOldModelDiskDataToNewFormat<int>, ConvertToExternalMemory, Element, GetHandle, GetPtr, GetRawPtr, Init, ResolveOffset, ThreadInterlockedIncrement, V_memset, memset, operator++, operator=, operator[]
// calls: CUtlScratchMemoryPool::AllocAligned, V_memset, CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >::SetCount, CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::SetCount, CUtlString::Set, ConvertOldModelDiskDataToNewFormat<CMorphRectData, MorphRectData_t>, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::SetCount, CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::SetCount, ConvertOldModelDiskDataToNewFormat, CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::SetCount, memset (13 total)
// callers: CModelBuilder::AppendFlexControllersFromOldData, CModelBuilder::CreateRemappingTableForMeshFromOldData, CMorphSet::InitFromV0Data
void __fastcall CMorphSetData::InitFromV0Data(
        CMorphSetData *const this,
        CConvertOldDiskCtx *const convertCtx,
        const MorphSetData_t *pMorphSetData,
        bool bIncludeTextureHandle)
{
  CConvertOldDiskCtx *v4; // r14
  CMorphSetData *v6; // rbx
  signed int m_nCount; // r15d
  CMorphSetData *v8; // r13
  MorphBundleType_t *m_pMemory; // rsi
  unsigned __int64 v10; // rax
  int32 m_nOffset; // ecx
  char *v12; // rdx
  signed int v13; // r13d
  CMorphData *v14; // r15
  CMorphData *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  int32 v19; // esi
  char *v20; // rdx
  char *v21; // rbx
  __int64 v22; // rdi
  const char *v23; // rsi
  CMorphData *v24; // r14
  const char *v25; // rdi
  CUtlString *p_m_name; // rdi
  signed int v27; // r13d
  CMorphSetData *v28; // r15
  CFlexDesc *v29; // rsi
  __int64 v30; // r13
  unsigned __int64 v31; // r15
  int32 v32; // edx
  char *v33; // rax
  const char *v34; // rsi
  char *v35; // rax
  __int64 v36; // rdx
  const char *v37; // rdx
  signed int v38; // r13d
  CMorphSetData *v39; // r15
  CFlexController *v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rax
  CMorphSetData *v43; // r13
  int32 v44; // esi
  char *v45; // rdx
  const FlexController_t *v46; // rdx
  CFlexController *v47; // rsi
  signed int v48; // r13d
  CMorphSetData *v49; // r15
  CFlexRule *v50; // rsi
  __int64 v51; // rbx
  char *v52; // r9
  int32 v53; // eax
  char *v54; // r14
  char *v55; // r13
  int v56; // r12d
  CConvertOldDiskCtx *v57; // r15
  CConvertOldDiskCtx *v58; // rsi
  __int64 v59; // rax
  int v60; // edx
  __int64 v61; // rcx
  _DWORD *v62; // rcx
  __int64 v63; // rdx
  _DWORD *v64; // rdx
  ResourceIdUnsafe_t m_nResourceId; // r13
  CResourceArray<FlexRule_t> *p_m_FlexRules; // [rsp+8h] [rbp-68h]
  CConvertOldDiskCtx *v67; // [rsp+10h] [rbp-60h]
  const MorphSetData_t *pMorphSetDatab; // [rsp+18h] [rbp-58h]
  CMorphSetData *v70; // [rsp+20h] [rbp-50h]
  __int64 v71; // [rsp+28h] [rbp-48h]
  __int64 v72; // [rsp+28h] [rbp-48h]
  CConvertOldDiskCtx *convertCtxa; // [rsp+30h] [rbp-40h]
  CConvertOldDiskCtx *convertCtxb; // [rsp+30h] [rbp-40h]
  CMorphSetData *thisd; // [rsp+38h] [rbp-38h]
  CMorphSetData *thisa; // [rsp+38h] [rbp-38h]
  CMorphSetData *thise; // [rsp+38h] [rbp-38h]
  CMorphSetData *thisf; // [rsp+38h] [rbp-38h]
  CMorphSetData *thisb; // [rsp+38h] [rbp-38h]
  CMorphSetData *thisg; // [rsp+38h] [rbp-38h]
  CMorphSetData *thisc; // [rsp+38h] [rbp-38h]

  v4 = convertCtx;
  v6 = this;
  this->m_nWidth = pMorphSetData->m_nWidth;
  this->m_nHeight = pMorphSetData->m_nHeight;
  this->m_nLookupType = pMorphSetData->m_nLookupType;
  this->m_nEncodingType = pMorphSetData->m_nEncodingType;
  m_nCount = pMorphSetData->m_bundleTypes.m_nCount;
  if ( m_nCount != 0 )
  {
    thisd = CUtlScratchMemoryPool::AllocAligned(convertCtx->m_pPool, 4 * m_nCount, 4);
    V_memset(thisd, 0, 4LL * m_nCount);
    v8 = thisd;
    if ( m_nCount < 0 || v6->m_bundleTypes.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  else
  {
    v8 = 0;
    if ( this->m_bundleTypes.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_9;
  }
  m_pMemory = v6->m_bundleTypes.m_Memory.m_pMemory;
  if ( v8 != m_pMemory )
  {
    if ( m_pMemory != 0 && (v6->m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    v6->m_bundleTypes.m_Memory.m_pMemory = v8;
    v6->m_bundleTypes.m_Memory.m_nAllocationCount = m_nCount;
    v6->m_bundleTypes.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_9:
  CUtlVectorBase<MorphBundleType_t,CUtlMemory<MorphBundleType_t,int>>::SetCount(&v6->m_bundleTypes, m_nCount);
  if ( m_nCount > 0 )
  {
    v10 = 0;
    do
    {
      m_nOffset = pMorphSetData->m_bundleTypes.m_nOffset;
      v12 = 0;
      if ( m_nOffset != 0 )
        v12 = &pMorphSetData->m_bundleTypes + m_nOffset;
      v6->m_bundleTypes.m_Memory.m_pMemory[v10 / 4] = *&v12[v10];
      v10 += 4LL;
    }
    while ( v10 != 4LL * (m_nCount - 1) + 4 );
  }
  v13 = pMorphSetData->m_morphDatas.m_nCount;
  if ( v13 != 0 )
  {
    v14 = CUtlScratchMemoryPool::AllocAligned(v4->m_pPool, 32 * v13, 8);
    V_memset(v14, 0, 32LL * v13);
    if ( v13 < 0 || v6->m_morphDatas.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_22;
  }
  else
  {
    v14 = 0;
    if ( v6->m_morphDatas.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_22;
  }
  v15 = v6->m_morphDatas.m_Memory.m_pMemory;
  if ( v14 != v15 )
  {
    if ( v15 != 0 && (v6->m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    v6->m_morphDatas.m_Memory.m_pMemory = v14;
    v6->m_morphDatas.m_Memory.m_nAllocationCount = v13;
    v6->m_morphDatas.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_22:
  CUtlVectorBase<CMorphData,CUtlMemory<CMorphData,int>>::SetCount(&v6->m_morphDatas, v13);
  if ( v13 > 0 )
  {
    v16 = 0;
    thisa = v6;
    convertCtxa = v4;
    v17 = 4 * (3LL * (v13 - 1) + 3);
    v18 = 0;
    v71 = v17;
    do
    {
      v19 = pMorphSetData->m_morphDatas.m_nOffset;
      v20 = 0;
      if ( v19 != 0 )
        v20 = &pMorphSetData->m_morphDatas + v19;
      v21 = &v20[v18];
      v22 = *&v20[v18];
      v23 = "";
      v24 = &thisa->m_morphDatas.m_Memory.m_pMemory[v16];
      if ( v22 != 0 )
      {
        v25 = &v21[v22];
        if ( v25 != 0 )
          v23 = v25;
      }
      p_m_name = &thisa->m_morphDatas.m_Memory.m_pMemory[v16].m_name;
      v18 += 12;
      ++v16;
      CUtlString::Set(p_m_name, v23);
      ConvertOldModelDiskDataToNewFormat<CMorphRectData,MorphRectData_t>(convertCtxa, &v24->m_morphRectDatas, (v21 + 4));
    }
    while ( v18 != v71 );
    v6 = thisa;
    v4 = convertCtxa;
  }
  if ( !bIncludeTextureHandle )
  {
    if ( v6->m_pTextureAtlas.m_pBinding != 0 )
      CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&v6->m_pTextureAtlas);
    v6->m_pTextureAtlas.m_pBinding = 0;
    goto LABEL_35;
  }
  m_nResourceId = pMorphSetData->m_pTextureAtlas.m_nResourceId;
  if ( v6->m_pTextureAtlas.m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&v6->m_pTextureAtlas);
  v6->m_pTextureAtlas.m_pBinding = m_nResourceId;
  if ( m_nResourceId == 0 )
  {
LABEL_35:
    v27 = pMorphSetData->m_FlexDesc.m_nCount;
    if ( v27 != 0 )
      goto LABEL_36;
    goto LABEL_98;
  }
  if ( (*(m_nResourceId + 16) & 0x20) != 0 )
  {
    (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_nResourceId, 2, &v6->m_pTextureAtlas);
    m_nResourceId = v6->m_pTextureAtlas.m_pBinding;
  }
  _InterlockedAdd((m_nResourceId + 24), 1u);
  v27 = pMorphSetData->m_FlexDesc.m_nCount;
  if ( v27 != 0 )
  {
LABEL_36:
    thise = CUtlScratchMemoryPool::AllocAligned(v4->m_pPool, 8 * v27, 8);
    V_memset(thise, 0, 8LL * v27);
    v28 = thise;
    if ( v27 < 0 || v6->m_FlexDesc.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_43;
    goto LABEL_38;
  }
LABEL_98:
  v28 = 0;
  if ( v6->m_FlexDesc.m_Memory.m_nAllocationCount >= 0 )
  {
LABEL_38:
    v29 = v6->m_FlexDesc.m_Memory.m_pMemory;
    if ( v28 != v29 )
    {
      if ( v29 != 0 && (v6->m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v6->m_FlexDesc.m_Memory.m_pMemory = v28;
      v6->m_FlexDesc.m_Memory.m_nAllocationCount = v27;
      v6->m_FlexDesc.m_Memory.m_nGrowSize = 0x40000000;
    }
  }
LABEL_43:
  CUtlVectorBase<CFlexDesc,CUtlMemory<CFlexDesc,int>>::SetCount(&v6->m_FlexDesc, v27);
  if ( v27 > 0 )
  {
    v30 = 4LL * (v27 - 1) + 4;
    v31 = 0;
    do
    {
      v32 = pMorphSetData->m_FlexDesc.m_nOffset;
      v33 = 0;
      if ( v32 != 0 )
        v33 = &pMorphSetData->m_FlexDesc + v32;
      v34 = "";
      v35 = &v33[v31];
      v36 = *v35;
      if ( v36 != 0 )
      {
        v37 = &v35[v36];
        if ( v37 != 0 )
          v34 = v37;
      }
      CUtlString::Set(&v6->m_FlexDesc.m_Memory.m_pMemory[v31 / 4].m_szFacs, v34);
      v31 += 4LL;
    }
    while ( v31 != v30 );
  }
  v38 = pMorphSetData->m_FlexControllers.m_nCount;
  if ( v38 != 0 )
  {
    thisf = CUtlScratchMemoryPool::AllocAligned(v4->m_pPool, 24 * v38, 8);
    V_memset(thisf, 0, 24LL * v38);
    v39 = thisf;
    if ( v38 < 0 || v6->m_FlexControllers.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_59;
  }
  else
  {
    v39 = 0;
    if ( v6->m_FlexControllers.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_59;
  }
  v40 = v6->m_FlexControllers.m_Memory.m_pMemory;
  if ( v39 != v40 )
  {
    if ( v40 != 0 && (v6->m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    v6->m_FlexControllers.m_Memory.m_pMemory = v39;
    v6->m_FlexControllers.m_Memory.m_nAllocationCount = v38;
    v6->m_FlexControllers.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_59:
  CUtlVectorBase<CFlexController,CUtlMemory<CFlexController,int>>::SetCount(&v6->m_FlexControllers, v38);
  if ( v38 > 0 )
  {
    v41 = 0;
    v42 = 4 * (5LL * (v38 - 1) + 5);
    v43 = 0;
    thisb = v42;
    do
    {
      v44 = pMorphSetData->m_FlexControllers.m_nOffset;
      v45 = 0;
      if ( v44 != 0 )
        v45 = &pMorphSetData->m_FlexControllers + v44;
      v46 = &v45[v43];
      v47 = &v6->m_FlexControllers.m_Memory.m_pMemory[v41];
      v43 = (v43 + 20);
      ++v41;
      ConvertOldModelDiskDataToNewFormat(v4, v47, v46);
    }
    while ( v43 != thisb );
  }
  v48 = pMorphSetData->m_FlexRules.m_nCount;
  if ( v48 != 0 )
  {
    thisg = CUtlScratchMemoryPool::AllocAligned(v4->m_pPool, 32 * v48, 8);
    V_memset(thisg, 0, 32LL * v48);
    v49 = thisg;
    if ( v48 < 0 || v6->m_FlexRules.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_72;
  }
  else
  {
    v49 = 0;
    if ( v6->m_FlexRules.m_Memory.m_nAllocationCount < 0 )
      goto LABEL_72;
  }
  v50 = v6->m_FlexRules.m_Memory.m_pMemory;
  if ( v49 != v50 )
  {
    if ( v50 != 0 && (v6->m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    v6->m_FlexRules.m_Memory.m_pMemory = v49;
    v6->m_FlexRules.m_Memory.m_nAllocationCount = v48;
    v6->m_FlexRules.m_Memory.m_nGrowSize = 0x40000000;
  }
LABEL_72:
  CUtlVectorBase<CFlexRule,CUtlMemory<CFlexRule,int>>::SetCount(&v6->m_FlexRules, v48);
  if ( v48 > 0 )
  {
    v70 = v6;
    p_m_FlexRules = &pMorphSetData->m_FlexRules;
    thisc = 0;
    v72 = 4 * (3LL * (v48 - 1) + 3);
    v51 = 0;
    v67 = v4;
    pMorphSetDatab = pMorphSetData;
    while ( 1 )
    {
      v52 = 0;
      v53 = pMorphSetDatab->m_FlexRules.m_nOffset;
      if ( v53 != 0 )
        v52 = p_m_FlexRules + v53;
      v54 = &v52[v51];
      v55 = v70->m_FlexRules.m_Memory.m_pMemory + thisc;
      *v55 = *&v52[v51];
      v56 = *&v52[v51 + 8];
      if ( v56 == 0 )
        break;
      convertCtxb = CUtlScratchMemoryPool::AllocAligned(v67->m_pPool, 8 * v56, 4);
      memset(convertCtxb, 0, 8LL * v56);
      v57 = convertCtxb;
      if ( v56 >= 0 )
        goto LABEL_78;
LABEL_84:
      CUtlVectorBase<CFlexOp,CUtlMemory<CFlexOp,int>>::SetCount((v55 + 8), v56);
      if ( v56 > 0 )
      {
        v59 = 0;
        do
        {
          v60 = *(v54 + 1);
          v61 = 0;
          if ( v60 != 0 )
            v61 = &v54[v60 + 4];
          v62 = (v59 + v61);
          v63 = v59;
          v59 += 8;
          v64 = (*(v55 + 2) + v63);
          *v64 = *v62;
          v64[1] = v62[1];
        }
        while ( v59 != 8LL * (v56 - 1) + 8 );
      }
      thisc = (thisc + 32);
      v51 += 12;
      if ( v51 == v72 )
        return;
    }
    v57 = 0;
LABEL_78:
    if ( *(v55 + 6) >= 0 )
    {
      v58 = *(v55 + 2);
      if ( v57 != v58 )
      {
        if ( v58 != 0 && (*(v55 + 7) & 0xC0000000) == 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        *(v55 + 2) = v57;
        *(v55 + 6) = v56;
        *(v55 + 7) = 0x40000000;
      }
    }
    goto LABEL_84;
  }
}


// CMorphSet::InitFromV0Data  (line 151, @0x000000000316b1e0, libserver.so)
// calls: operator new, CMorphSetData::InitFromV0Data, CMorphSet::Initialize
// callers: CRenderMesh::ConvertV0MorphSetToRuntime
void __fastcall CMorphSet::InitFromV0Data(
        CMorphSet *const this,
        CConvertOldDiskCtx *const convertCtx,
        const MorphSetData_t *pMorphSetData,
        const char *pResourceName)
{
  CModelMemoryPool *m_pModelPool; // rsi
  CMorphSetData *v8; // rax

  m_pModelPool = convertCtx->m_pModelPool;
  this->m_pOuterMemoryPool = m_pModelPool;
  (*(*g_pMeshSystem + 288LL))(g_pMeshSystem, m_pModelPool, pMorphSetData, pResourceName);
  v8 = operator new(0x90u);
  memset(v8, 0, sizeof(CMorphSetData));
  this->m_pMorphSetData = v8;
  CMorphSetData::InitFromV0Data(v8, convertCtx, pMorphSetData, 1);
  CMorphSet::Initialize(this);
}


