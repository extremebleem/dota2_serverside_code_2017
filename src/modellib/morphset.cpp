
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_morphset.cpp  (line 0, @0x0000000001a6b4c0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_morphset_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CMorphSet::CMorphSet  (line 17, @0x0000000003167480, libserver.so)  // inlines: CUtlIntrusiveList, CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CRenderMesh::ConvertV0MorphSetToRuntime
void __fastcall CMorphSet::CMorphSet(CMorphSet *const this)
{
  this->m_pMorphSetData = 0;
  this->m_controllerMappings.m_Size = 0;
  this->m_controllerMappings.m_Memory.m_pMemory = 0;
  this->m_controllerMappings.m_Memory.m_nAllocationCount = 0;
  this->m_controllerMappings.m_Memory.m_nGrowSize = 0;
  this->m_descMappings.m_Size = 0;
  this->m_descMappings.m_Memory.m_pMemory = 0;
  this->m_descMappings.m_Memory.m_nAllocationCount = 0;
  this->m_descMappings.m_Memory.m_nGrowSize = 0;
  this->m_localToMainControllerIndexes.m_Size = 0;
  this->m_localToMainControllerIndexes.m_Memory.m_pMemory = 0;
  this->m_localToMainControllerIndexes.m_Memory.m_nAllocationCount = 0;
  this->m_localToMainControllerIndexes.m_Memory.m_nGrowSize = 0;
  this->m_localToMainDescIndexes.m_Size = 0;
  this->m_localToMainDescIndexes.m_Memory.m_pMemory = 0;
  this->m_localToMainDescIndexes.m_Memory.m_nAllocationCount = 0;
  this->m_localToMainDescIndexes.m_Memory.m_nGrowSize = 0;
  this->m_morphCompositeSetList.m_pHead = 0;
  this->m_nFrameCount = 0;
  this->m_pOuterMemoryPool = 0;
  this->m_pNext = 0;
}


// CMorphSet::~CMorphSet  (line 24, @0x00000000031692e0, libserver.so)  // inlines: Destruct<CFlexController>, Destruct<CFlexDesc>, Destruct<CFlexRule>, Destruct<CUtlVector<int> >, Element, Purge, RemoveAll, operator[], ~CFlexController, ~CFlexDesc, ~CFlexRule, ~CMorphSetData, ~CStrongHandle, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CFlexOp, int>::Purge, CUtlMemory<CFlexRule, int>::Purge, CUtlString::FreeMemoryBlock, CUtlMemory<CFlexController, int>::Purge, CUtlMemory<CFlexDesc, int>::Purge, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::RemoveAll, CUtlMemory<CMorphData, int>::Purge, operator delete, CUtlMemory<int, int>::Purge, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge, CUtlMemory<FlexControllerMapping_t, int>::Purge (14 total)
// callers: CRenderMesh::~CRenderMesh
void __fastcall CMorphSet::~CMorphSet(CMorphSet *const this)
{
  CMorphSetData *m_pMorphSetData; // rbx
  int m_Size; // r14d
  __int64 i; // r15
  CUtlMemory<CFlexOp,int> *v5; // r13
  bool v6; // zf
  int v7; // r14d
  __int64 j; // r15
  CUtlString *v9; // r13
  int v10; // r13d
  __int64 k; // r14
  CUtlString *v12; // rdi
  int v13; // r13d
  __int64 m; // r14
  char *v15; // rbx
  int v16; // r13d
  __int64 n; // r14
  char *v18; // rbx

  m_pMorphSetData = this->m_pMorphSetData;
  if ( this->m_pMorphSetData != 0 )
  {
    m_Size = m_pMorphSetData->m_FlexRules.m_Size;
    for ( i = 32LL * m_Size - 32; --m_Size >= 0; i -= 32 )
    {
      v5 = (m_pMorphSetData->m_FlexRules.m_Memory.m_pMemory + i);
      v6 = (v5[1].m_nGrowSize & 0xC0000000) == 0;
      v5->m_nAllocationCount = 0;
      if ( v6 )
      {
        CUtlMemory<CFlexOp,int>::Purge(v5 + 1);
        if ( (v5[1].m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CFlexOp,int>::Purge(v5 + 1);
      }
    }
    v6 = (m_pMorphSetData->m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pMorphSetData->m_FlexRules.m_Size = 0;
    if ( v6 )
    {
      CUtlMemory<CFlexRule,int>::Purge(&m_pMorphSetData->m_FlexRules.m_Memory);
      if ( (m_pMorphSetData->m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CFlexRule,int>::Purge(&m_pMorphSetData->m_FlexRules.m_Memory);
    }
    v7 = m_pMorphSetData->m_FlexControllers.m_Size;
    for ( j = 24LL * v7 - 24; --v7 >= 0; j -= 24 )
    {
      v9 = (&m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory->m_szName + j);
      if ( v9[1].m_pString != 0 )
        CUtlString::FreeMemoryBlock(v9 + 1);
      if ( v9->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v9);
    }
    v6 = (m_pMorphSetData->m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pMorphSetData->m_FlexControllers.m_Size = 0;
    if ( v6 )
    {
      CUtlMemory<CFlexController,int>::Purge(&m_pMorphSetData->m_FlexControllers.m_Memory);
      if ( (m_pMorphSetData->m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CFlexController,int>::Purge(&m_pMorphSetData->m_FlexControllers.m_Memory);
    }
    v10 = m_pMorphSetData->m_FlexDesc.m_Size;
    for ( k = 8LL * v10 - 8; --v10 >= 0; k -= 8 )
    {
      v12 = (&m_pMorphSetData->m_FlexDesc.m_Memory.m_pMemory->m_szFacs + k);
      if ( v12->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v12);
    }
    v6 = (m_pMorphSetData->m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pMorphSetData->m_FlexDesc.m_Size = 0;
    if ( v6 )
    {
      CUtlMemory<CFlexDesc,int>::Purge(&m_pMorphSetData->m_FlexDesc.m_Memory);
      if ( (m_pMorphSetData->m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CFlexDesc,int>::Purge(&m_pMorphSetData->m_FlexDesc.m_Memory);
    }
    CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&m_pMorphSetData->m_pTextureAtlas);
    CUtlVectorBase<CMorphData,CUtlMemory<CMorphData,int>>::RemoveAll(&m_pMorphSetData->m_morphDatas);
    if ( (m_pMorphSetData->m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CMorphData,int>::Purge(&m_pMorphSetData->m_morphDatas.m_Memory);
      if ( (m_pMorphSetData->m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CMorphData,int>::Purge(&m_pMorphSetData->m_morphDatas.m_Memory);
    }
    v6 = (m_pMorphSetData->m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pMorphSetData->m_bundleTypes.m_Size = 0;
    if ( v6 )
    {
      CUtlMemory<MorphBundleType_t,int>::Purge(&m_pMorphSetData->m_bundleTypes.m_Memory);
      if ( (m_pMorphSetData->m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<MorphBundleType_t,int>::Purge(&m_pMorphSetData->m_bundleTypes.m_Memory);
    }
    operator delete(m_pMorphSetData);
  }
  this->m_pMorphSetData = 0;
  (*(*g_pMeshSystem + 296LL))(g_pMeshSystem, this->m_pOuterMemoryPool);
  v13 = this->m_localToMainDescIndexes.m_Size;
  this->m_pOuterMemoryPool = 0;
  for ( m = 24LL * v13 - 24; --v13 >= 0; m -= 24 )
  {
    v15 = this->m_localToMainDescIndexes.m_Memory.m_pMemory + m;
    v6 = (*(v15 + 5) & 0xC0000000) == 0;
    *v15 = 0;
    if ( v6 )
    {
      CUtlMemory<int,int>::Purge((v15 + 8));
      if ( (*(v15 + 5) & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge((v15 + 8));
    }
  }
  v6 = (this->m_localToMainDescIndexes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_localToMainDescIndexes.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&this->m_localToMainDescIndexes.m_Memory);
    if ( (this->m_localToMainDescIndexes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&this->m_localToMainDescIndexes.m_Memory);
  }
  v16 = this->m_localToMainControllerIndexes.m_Size;
  for ( n = 24LL * v16 - 24; --v16 >= 0; n -= 24 )
  {
    v18 = this->m_localToMainControllerIndexes.m_Memory.m_pMemory + n;
    v6 = (*(v18 + 5) & 0xC0000000) == 0;
    *v18 = 0;
    if ( v6 )
    {
      CUtlMemory<int,int>::Purge((v18 + 8));
      if ( (*(v18 + 5) & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge((v18 + 8));
    }
  }
  v6 = (this->m_localToMainControllerIndexes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_localToMainControllerIndexes.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&this->m_localToMainControllerIndexes.m_Memory);
    if ( (this->m_localToMainControllerIndexes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Purge(&this->m_localToMainControllerIndexes.m_Memory);
  }
  v6 = (this->m_descMappings.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_descMappings.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<FlexDescMapping_t,int>::Purge(&this->m_descMappings.m_Memory);
    if ( (this->m_descMappings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<FlexDescMapping_t,int>::Purge(&this->m_descMappings.m_Memory);
  }
  v6 = (this->m_controllerMappings.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_controllerMappings.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<FlexControllerMapping_t,int>::Purge(&this->m_controllerMappings.m_Memory);
    if ( (this->m_controllerMappings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<FlexControllerMapping_t,int>::Purge(&this->m_controllerMappings.m_Memory);
  }
}


// CMorphSet::Initialize  (line 36, @0x00000000031687f0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, BuildHandle, CUtlHashDict, CUtlMemory, CUtlStringMap, CUtlVector, CUtlVectorBase, Construct<CUtlVector<int> >, CopyConstruct<CUtlHashDict<const CMorphData*, false, false>::Entry_t>, CopyConstruct<int>, DoFind, Element, EnsureCount, Find, GetBucketIndex, GrowMemory, GrowVector, Insert, InsertMultipleBefore, Purge, RemoveAll, memset, operator char const*, operator const UtlSymId_t, operator(), operator[], ~CUtlMemory, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CUtlString::Get, CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CUtlMemory<int, int>::Grow, CUtlMemory<FlexControllerMapping_t, int>::Grow, memset, CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<false>, CUtlHashDict<const CMorphData*, false, false>::CHash<false> >::CUtlHash, HashString, strcmp, CUtlMemory<FlexDescMapping_t, int>::Grow (21 total)
// callers: CMorphSet::InitFromV0Data
void __fastcall CMorphSet::Initialize(CMorphSet *const this)
{
  CMorphSet *v1; // r14
  __int64 v2; // rdi
  __int64 m_Size; // rbx
  int v4; // eax
  __int64 v5; // rdx
  int *v6; // rbx
  __int64 v7; // rdx
  char *v8; // rax
  CMorphSetData *m_pMorphSetData; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // eax
  int *v13; // rax
  const CUtlString *p_m_szName; // r12
  const char *v15; // rax
  int v16; // r13d
  int v17; // eax
  CMorphSetData *v18; // rdx
  FlexControllerMapping_t *v19; // rax
  const char *v20; // rax
  __int64 v21; // r12
  CMorphSetData *v22; // rax
  const CFlexRule **m_pMemory; // rdi
  size_t v24; // rdx
  int v25; // ebx
  CMorphSetData *v26; // rax
  __int64 v27; // rcx
  int i; // edx
  __int64 v29; // rsi
  CMorphSetData *v30; // rax
  const char *v31; // r12
  unsigned int v32; // eax
  unsigned int v33; // edx
  CUtlVector<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<const CMorphData*,false,false>::Entry_t,int> > *v34; // rax
  __int64 v35; // rbx
  const char **p_pszSymbol; // r13
  int v37; // r15d
  __int64 v38; // rbx
  __int64 v39; // rdx
  int *v40; // rbx
  __int64 v41; // rdx
  char *v42; // rax
  CMorphSetData *v43; // rax
  __int64 v44; // r15
  __int64 v45; // r12
  int v46; // eax
  _DWORD *v47; // rax
  const char *v48; // rax
  int v49; // eax
  __int64 v50; // r12
  int v51; // eax
  int *v52; // rax
  unsigned int v53; // eax
  CUtlVector<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<const CMorphData*,false,false>::Entry_t,int> > *v54; // rax
  int v55; // ebx
  int v56; // r13d
  const char **v57; // r14
  int v58; // r13d
  const CMorphData *value; // rax
  const CFlexRule *v60; // rax
  const char *v61; // rax
  __int64 v62; // r12
  int v63; // r13d
  int v64; // eax
  __int64 v65; // rbx
  bool v66; // zf
  const char **v67; // rbx
  CUtlMemory<int,int> *v68; // [rsp+30h] [rbp-200h]
  CUtlVector<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<const CMorphData*,false,false>::Entry_t,int> > *v69; // [rsp+40h] [rbp-1F0h]
  CMorphSet *v70; // [rsp+48h] [rbp-1E8h]
  int *v71; // [rsp+50h] [rbp-1E0h]
  int v72; // [rsp+58h] [rbp-1D8h]
  unsigned int v73; // [rsp+5Ch] [rbp-1D4h]
  char *pszKey; // [rsp+60h] [rbp-1D0h]
  CUtlSymbolTable *v75; // [rsp+70h] [rbp-1C0h]
  UtlSymId_t *p_id; // [rsp+78h] [rbp-1B8h]
  UtlSymId_t *p_ida; // [rsp+78h] [rbp-1B8h]
  CUtlSymbolTable *v78; // [rsp+80h] [rbp-1B0h]
  CUtlSymbolTable *v79; // [rsp+80h] [rbp-1B0h]
  int nMainDescIndex; // [rsp+88h] [rbp-1A8h]
  int nMainDescIndexa; // [rsp+88h] [rbp-1A8h]
  int j; // [rsp+8Ch] [rbp-1A4h]
  int ja; // [rsp+8Ch] [rbp-1A4h]
  int jb; // [rsp+8Ch] [rbp-1A4h]
  unsigned __int16 v85[8]; // [rsp+90h] [rbp-1A0h] BYREF
  unsigned __int16 v86[8]; // [rsp+A0h] [rbp-190h] BYREF
  unsigned __int16 v87[8]; // [rsp+B0h] [rbp-180h] BYREF
  unsigned __int16 v88[8]; // [rsp+C0h] [rbp-170h] BYREF
  CUtlVector<const CFlexRule*,CUtlMemory<const CFlexRule*,int> > descIndexToFlexRule; // [rsp+D0h] [rbp-160h] BYREF
  CUtlHashDict<const CMorphData*,false,false> mapNameMorphData; // [rsp+F0h] [rbp-140h] BYREF
  CUtlStringMap<int,CUtlSymbolTable> mapNameToControllerIndex; // [rsp+120h] [rbp-110h] BYREF
  CUtlStringMap<int,CUtlSymbolTable> mapNameToDescIndex; // [rsp+190h] [rbp-A0h] BYREF

  v1 = this;
  mapNameToControllerIndex.m_Vector.m_Size = 0;
  mapNameToControllerIndex.m_Vector.m_Memory.m_pMemory = 0;
  mapNameToControllerIndex.m_Vector.m_Memory.m_nAllocationCount = 32;
  mapNameToControllerIndex.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(this);
  mapNameToControllerIndex.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 128);
  CUtlSymbolTable::CUtlSymbolTable(&mapNameToControllerIndex.m_SymbolTable, 0, 32, 1);
  m_Size = v1->m_localToMainControllerIndexes.m_Size;
  v4 = v1->m_localToMainControllerIndexes.m_Size;
  if ( m_Size == v1->m_localToMainControllerIndexes.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Grow(&v1->m_localToMainControllerIndexes.m_Memory, 1);
    v4 = v1->m_localToMainControllerIndexes.m_Size;
  }
  v5 = 3 * m_Size;
  v6 = 0;
  v7 = 8 * v5;
  v1->m_localToMainControllerIndexes.m_Size = v4 + 1;
  v8 = v1->m_localToMainControllerIndexes.m_Memory.m_pMemory + v7;
  if ( v8 != 0 )
  {
    *v8 = 0;
    *(v8 + 1) = 0;
    *(v8 + 4) = 0;
    *(v8 + 5) = 0;
    v6 = (&v1->m_localToMainControllerIndexes.m_Memory.m_pMemory->m_Size + v7);
  }
  m_pMorphSetData = v1->m_pMorphSetData;
  if ( v1->m_pMorphSetData->m_FlexControllers.m_Size > 0 )
  {
    v10 = 0;
    j = 0;
    while ( 1 )
    {
      p_m_szName = &m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v10].m_szName;
      v15 = CUtlString::Get(p_m_szName);
      CUtlSymbolTable::Find(v85, &mapNameToControllerIndex.m_SymbolTable, v15);
      v16 = -1;
      if ( v85[0] == 0xFFFF )
        break;
      v11 = *v6;
      v12 = *v6;
      if ( v11 == v6[4] )
        goto LABEL_17;
LABEL_8:
      *v6 = v12 + 1;
      v13 = (*(v6 + 1) + 4 * v11);
      if ( v13 != 0 )
        *v13 = v16;
      ++j;
      ++v10;
      m_pMorphSetData = v1->m_pMorphSetData;
      if ( v1->m_pMorphSetData->m_FlexControllers.m_Size <= j )
        goto LABEL_21;
    }
    v16 = v1->m_controllerMappings.m_Size;
    v17 = v16;
    if ( v16 == v1->m_controllerMappings.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<FlexControllerMapping_t,int>::Grow(&v1->m_controllerMappings.m_Memory, 1);
      v17 = v1->m_controllerMappings.m_Size;
    }
    v18 = v1->m_pMorphSetData;
    v1->m_controllerMappings.m_Size = v17 + 1;
    v19 = &v1->m_controllerMappings.m_Memory.m_pMemory[v16];
    v19->m_pMorphSetData = v18;
    v19->m_pFlexController = p_m_szName;
    v20 = CUtlString::Get(p_m_szName);
    CUtlSymbolTable::AddString(v87, &mapNameToControllerIndex.m_SymbolTable, v20);
    v21 = v87[0];
    if ( v87[0] >= mapNameToControllerIndex.m_Vector.m_Size )
    {
      nMainDescIndex = v87[0] + 1;
      if ( mapNameToControllerIndex.m_Vector.m_Size < nMainDescIndex )
      {
        if ( v87[0] + 1 > mapNameToControllerIndex.m_Vector.m_Memory.m_nAllocationCount )
          CUtlMemory<int,int>::Grow(
            &mapNameToControllerIndex.m_Vector.m_Memory,
            nMainDescIndex - mapNameToControllerIndex.m_Vector.m_Memory.m_nAllocationCount);
        mapNameToControllerIndex.m_Vector.m_Size = nMainDescIndex;
      }
    }
    mapNameToControllerIndex.m_Vector.m_Memory.m_pMemory[v21] = v16;
    v11 = *v6;
    v12 = *v6;
    if ( v11 != v6[4] )
      goto LABEL_8;
LABEL_17:
    CUtlMemory<int,int>::Grow((v6 + 2), 1);
    v12 = *v6;
    goto LABEL_8;
  }
LABEL_21:
  mapNameToDescIndex.m_Vector.m_Size = 0;
  mapNameToDescIndex.m_Vector.m_Memory.m_pMemory = 0;
  mapNameToDescIndex.m_Vector.m_Memory.m_nAllocationCount = 32;
  mapNameToDescIndex.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(v2);
  mapNameToDescIndex.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                     g_pMemAlloc,
                                                     4LL * mapNameToDescIndex.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&mapNameToDescIndex.m_SymbolTable, 0, 32, 1);
  v22 = v1->m_pMorphSetData;
  m_pMemory = 0;
  v24 = 0;
  descIndexToFlexRule.m_Size = 0;
  descIndexToFlexRule.m_Memory.m_pMemory = 0;
  descIndexToFlexRule.m_Memory.m_nAllocationCount = 0;
  descIndexToFlexRule.m_Memory.m_nGrowSize = 0;
  v25 = v22->m_FlexDesc.m_Size;
  if ( v25 != 0 )
  {
    if ( v25 > 0 )
    {
      CUtlMemory<CFlexRule const*,int>::Grow(&descIndexToFlexRule.m_Memory, v25);
      m_pMemory = descIndexToFlexRule.m_Memory.m_pMemory;
    }
    descIndexToFlexRule.m_Size = v25;
    v24 = 8LL * v25;
  }
  memset(m_pMemory, 0, v24);
  v26 = v1->m_pMorphSetData;
  v27 = 0;
  for ( i = 0; v1->m_pMorphSetData->m_FlexRules.m_Size > i; v26 = v1->m_pMorphSetData )
  {
    v29 = v27;
    ++i;
    v27 += 32;
    descIndexToFlexRule.m_Memory.m_pMemory[*(&v26->m_FlexRules.m_Memory.m_pMemory->m_nFlex + v29)] = (v26->m_FlexRules.m_Memory.m_pMemory + v29);
  }
  CUtlHash<CUtlHashDict<CMorphData const*,false,false>::Entry_t,CUtlHashDict<CMorphData const*,false,false>::CCompare<false>,CUtlHashDict<CMorphData const*,false,false>::CHash<false>>::CUtlHash(
    &mapNameMorphData.m_Elements,
    16,
    0,
    0);
  mapNameMorphData.m_nCount = 0;
  v30 = v1->m_pMorphSetData;
  v78 = 0;
  for ( ja = 0; v1->m_pMorphSetData->m_morphDatas.m_Size > ja; v78 = (v78 + 32) )
  {
    v75 = (v30->m_morphDatas.m_Memory.m_pMemory + v78);
    v31 = CUtlString::Get(v75);
    v32 = HashString(v31);
    if ( mapNameMorphData.m_Elements.m_bPowerOfTwo )
      v33 = mapNameMorphData.m_Elements.m_ModMask & v32;
    else
      v33 = v32 % mapNameMorphData.m_Elements.m_Buckets.m_Size;
    v34 = &mapNameMorphData.m_Elements.m_Buckets.m_Memory.m_pMemory[v33];
    v35 = v34->m_Size;
    p_id = v34;
    if ( v35 <= 0 )
    {
      v37 = 0;
    }
    else
    {
      p_pszSymbol = &v34->m_Memory.m_pMemory->pszSymbol;
      v37 = 0;
      while ( strcmp(*p_pszSymbol, v31) != 0 )
      {
        ++v37;
        p_pszSymbol += 2;
        if ( v37 == v35 )
          goto LABEL_68;
      }
    }
    if ( v35 == v37 )
    {
LABEL_68:
      if ( v35 == *(p_id + 4) )
      {
        CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>::Grow((p_id + 4), 1);
        v64 = *p_id;
      }
      else
      {
        v64 = v35;
      }
      v65 = 16 * v35;
      v66 = *(p_id + 1) + v65 == 0;
      v67 = (*(p_id + 1) + v65);
      *p_id = v64 + 1;
      if ( !v66 )
      {
        *v67 = v31;
        v67[1] = &v75->m_Lookup.m_LessFunc.gap0;
      }
      ++mapNameMorphData.m_nCount;
    }
    ++ja;
    v30 = v1->m_pMorphSetData;
  }
  v38 = v1->m_localToMainDescIndexes.m_Size;
  if ( v38 == v1->m_localToMainDescIndexes.m_Memory.m_nAllocationCount )
    CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>::Grow(&v1->m_localToMainDescIndexes.m_Memory, 1);
  v39 = 3 * v38;
  v40 = 0;
  v41 = 8 * v39;
  ++v1->m_localToMainDescIndexes.m_Size;
  v42 = v1->m_localToMainDescIndexes.m_Memory.m_pMemory + v41;
  if ( v42 != 0 )
  {
    *v42 = 0;
    *(v42 + 1) = 0;
    *(v42 + 4) = 0;
    *(v42 + 5) = 0;
    v40 = (&v1->m_localToMainDescIndexes.m_Memory.m_pMemory->m_Size + v41);
  }
  v43 = v1->m_pMorphSetData;
  if ( v1->m_pMorphSetData->m_FlexDesc.m_Size > 0 )
  {
    v44 = 0;
    jb = 0;
    v68 = (v40 + 2);
    do
    {
      v79 = &v43->m_FlexDesc.m_Memory.m_pMemory[v44];
      v48 = CUtlString::Get(v79);
      CUtlSymbolTable::Find(v86, &mapNameToDescIndex.m_SymbolTable, v48);
      if ( v86[0] != 0xFFFF )
      {
        v45 = *v40;
        v46 = *v40;
        if ( v45 == v40[4] )
        {
          CUtlMemory<int,int>::Grow(v68, 1);
          v46 = *v40;
        }
        *v40 = v46 + 1;
        v47 = (*(v40 + 1) + 4 * v45);
        if ( v47 != 0 )
          *v47 = -1;
        goto LABEL_43;
      }
      v49 = v1->m_descMappings.m_Size;
      nMainDescIndexa = v49;
      if ( v49 == v1->m_descMappings.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<FlexDescMapping_t,int>::Grow(&v1->m_descMappings.m_Memory, 1);
        v49 = v1->m_descMappings.m_Size;
      }
      v1->m_descMappings.m_Size = v49 + 1;
      v50 = *v40;
      v51 = *v40;
      if ( v50 == v40[4] )
      {
        CUtlMemory<int,int>::Grow(v68, 1);
        v51 = *v40;
      }
      *v40 = v51 + 1;
      v52 = (*(v40 + 1) + 4 * v50);
      if ( v52 != 0 )
        *v52 = nMainDescIndexa;
      p_ida = &v1->m_descMappings.m_Memory.m_pMemory[nMainDescIndexa];
      *p_ida = v1;
      pszKey = CUtlString::Get(v79);
      if ( pszKey != 0 )
      {
        v53 = HashString(pszKey);
        if ( mapNameMorphData.m_Elements.m_bPowerOfTwo )
          v73 = mapNameMorphData.m_Elements.m_ModMask & v53;
        else
          v73 = v53 % mapNameMorphData.m_Elements.m_Buckets.m_Size;
        v69 = mapNameMorphData.m_Elements.m_Buckets.m_Memory.m_pMemory;
        v54 = &mapNameMorphData.m_Elements.m_Buckets.m_Memory.m_pMemory[v73];
        v72 = v54->m_Size;
        if ( v54->m_Size <= 0 )
        {
          v58 = 0;
LABEL_59:
          if ( v72 != v58 && (v58 | (v73 << 16)) != 0xFFFFFFFF )
          {
            value = v69[(v58 | (v73 << 16)) >> 16].m_Memory.m_pMemory[v58].value;
            goto LABEL_62;
          }
        }
        else
        {
          v71 = v40;
          v70 = v1;
          v55 = 0;
          v56 = v54->m_Size;
          v57 = &v54->m_Memory.m_pMemory->pszSymbol;
          do
          {
            if ( strcmp(*v57, pszKey) == 0 )
            {
              v58 = v55;
              v1 = v70;
              v40 = v71;
              goto LABEL_59;
            }
            ++v55;
            v57 += 2;
          }
          while ( v55 != v56 );
          v40 = v71;
          v1 = v70;
        }
      }
      value = 0;
LABEL_62:
      *(p_ida + 1) = value;
      v60 = descIndexToFlexRule.m_Memory.m_pMemory[v44];
      *(p_ida + 3) = v79;
      *(p_ida + 2) = v60;
      *(p_ida + 4) = v1->m_localToMainControllerIndexes.m_Memory.m_pMemory;
      *(p_ida + 5) = v1->m_localToMainDescIndexes.m_Memory.m_pMemory;
      v61 = CUtlString::Get(v79);
      CUtlSymbolTable::AddString(v88, &mapNameToDescIndex.m_SymbolTable, v61);
      v62 = v88[0];
      if ( v88[0] >= mapNameToDescIndex.m_Vector.m_Size )
      {
        v63 = v88[0] + 1;
        if ( mapNameToDescIndex.m_Vector.m_Size < v63 )
        {
          if ( v63 > mapNameToDescIndex.m_Vector.m_Memory.m_nAllocationCount )
            CUtlMemory<int,int>::Grow(
              &mapNameToDescIndex.m_Vector.m_Memory,
              v63 - mapNameToDescIndex.m_Vector.m_Memory.m_nAllocationCount);
          mapNameToDescIndex.m_Vector.m_Size = v63;
        }
      }
      mapNameToDescIndex.m_Vector.m_Memory.m_pMemory[v62] = nMainDescIndexa;
LABEL_43:
      ++jb;
      ++v44;
      v43 = v1->m_pMorphSetData;
    }
    while ( v1->m_pMorphSetData->m_FlexDesc.m_Size > jb );
  }
  CUtlHashDict<CMorphData const*,false,false>::~CUtlHashDict(&mapNameMorphData);
  descIndexToFlexRule.m_Size = 0;
  if ( (descIndexToFlexRule.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexRule const*,int>::Purge(&descIndexToFlexRule.m_Memory);
    if ( (descIndexToFlexRule.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexRule const*,int>::Purge(&descIndexToFlexRule.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&mapNameToDescIndex.m_SymbolTable);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&mapNameToDescIndex.m_Vector);
  CUtlSymbolTable::~CUtlSymbolTable(&mapNameToControllerIndex.m_SymbolTable);
  mapNameToControllerIndex.m_Vector.m_Size = 0;
  if ( (mapNameToControllerIndex.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&mapNameToControllerIndex.m_Vector.m_Memory);
    if ( (mapNameToControllerIndex.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&mapNameToControllerIndex.m_Vector.m_Memory);
  }
}


// CMorphSet::RunFlexRules  (line 109, @0x00000000031666e0, libserver.so)  // inlines: Element, Max<float>, Min<float>, RemapValClamped, clamp<float, float>, memset, operator[]
// calls: memset, cosf, sinf, sqrtf
// globals: jpt_31667A5
void __fastcall CMorphSet::RunFlexRules(
        const CMorphSet *const this,
        const int16 *pMainToModelMapping,
        const float *src,
        float *dest)
{
  __int64 v5; // rdi
  const CMorphSet *v6; // r9
  const CMorphSet *v7; // rcx
  const float *v8; // rdx
  const float *v9; // r8
  __int64 v10; // r13
  int v11; // ebx
  char *v12; // rax
  __int64 v13; // r14
  const int16 *v14; // rcx
  __int64 v15; // r15
  char *v16; // r12
  const CMorphSet *v17; // r13
  unsigned int *v18; // rax
  __int64 v19; // kr00_8
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  __int64 v23; // rdx
  float v24; // xmm4_4
  float v25; // xmm2_4
  __m128 v26; // xmm3
  float v27; // xmm0_4
  __m128 v28; // xmm4
  __m128 v29; // xmm1
  float v30; // xmm0_4
  FlexControllerMapping_t *v31; // rdx
  __int64 v32; // r10
  __int64 v33; // rax
  const CFlexController *v34; // r10
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  __m128 v38; // xmm2
  __m128 v39; // xmm0
  float v40; // xmm1_4
  int v41; // eax
  float v42; // xmm3_4
  int v43; // r10d
  __int64 v44; // r11
  __int64 v45; // r10
  const CFlexController *v46; // r11
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  __m128 v50; // xmm4
  __int64 v51; // r11
  __int64 v52; // r10
  const CFlexController *v53; // r11
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm2_4
  __m128 v57; // xmm5
  float v58; // xmm2_4
  float v59; // xmm3_4
  __int64 v60; // rbx
  int v61; // r10d
  float v62; // xmm2_4
  const CFlexController *v63; // rdx
  float v64; // xmm5_4
  float v65; // xmm4_4
  float v66; // xmm6_4
  __m128 v67; // xmm6
  FlexControllerMapping_t *m_pMemory; // rdx
  __int64 v69; // r10
  __int64 v70; // rax
  const CFlexController *m_pFlexController; // r10
  float v72; // xmm2_4
  float max; // xmm1_4
  float min; // xmm0_4
  __m128 v75; // xmm2
  __m128 v76; // xmm0
  float v77; // xmm3_4
  int v78; // eax
  float v79; // xmm2_4
  int v80; // r10d
  __int64 v81; // r11
  __int64 v82; // r10
  const CFlexController *v83; // r11
  float v84; // xmm4_4
  float v85; // xmm2_4
  float v86; // xmm1_4
  __m128 v87; // xmm4
  __int64 v88; // r11
  __int64 v89; // r10
  const CFlexController *v90; // r11
  float v91; // xmm5_4
  float v92; // xmm4_4
  float v93; // xmm1_4
  __m128 v94; // xmm5
  float v95; // xmm1_4
  float v96; // xmm2_4
  float v97; // xmm1_4
  __int64 v98; // rbx
  int v99; // r10d
  const CFlexController *v100; // rdx
  float v101; // xmm5_4
  float v102; // xmm4_4
  float v103; // xmm6_4
  __m128 v104; // xmm6
  int v105; // eax
  float v106; // xmm0_4
  __int64 v107; // rdx
  int v108; // eax
  float v109; // xmm0_4
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdi
  __int64 v113; // rdx
  float v114; // xmm2_4
  float v115; // xmm4_4
  int v116; // eax
  __int64 v117; // rbx
  float v118; // xmm0_4
  float v119; // xmm1_4
  float v120; // xmm3_4
  float v121; // xmm2_4
  float v122; // xmm0_4
  float v123; // xmm2_4
  float v124; // xmm0_4
  float v125; // xmm1_4
  __int64 v126; // rax
  float v127; // xmm1_4
  float v128; // xmm2_4
  __int64 v129; // rax
  int v130; // eax
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rdx
  float v135; // xmm0_4
  __int64 v136; // rdx
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  float v141; // xmm4_4
  float v142; // xmm2_4
  float v143; // xmm1_4
  float v144; // xmm4_4
  float v145; // xmm1_4
  float v146; // xmm2_4
  float v147; // xmm2_4
  float v148; // xmm5_4
  float v149; // xmm4_4
  float v150; // xmm5_4
  float v151; // xmm5_4
  float v152; // xmm4_4
  float v153; // xmm5_4
  float v154; // xmm2_4
  float v155; // xmm1_4
  float v156; // xmm2_4
  float v157; // xmm6_4
  float v158; // xmm1_4
  float v159; // xmm6_4
  float v160; // xmm6_4
  float v161; // xmm4_4
  float v162; // xmm4_4
  float v163; // xmm1_4
  float v164; // xmm1_4
  float v165; // xmm1_4
  const float *v166; // [rsp+0h] [rbp-E0h]
  const float *v167; // [rsp+0h] [rbp-E0h]
  const int16 *v168; // [rsp+8h] [rbp-D8h]
  const int16 *v169; // [rsp+8h] [rbp-D8h]
  const float *srcb; // [rsp+20h] [rbp-C0h]
  const CMorphSet *thisa; // [rsp+28h] [rbp-B8h]
  float stack[44]; // [rsp+30h] [rbp-B0h]

  memset(dest, 0, 4LL * this->m_descMappings.m_Size);
  v6 = this;
  v7 = 0;
  v8 = 0;
  if ( this->m_descMappings.m_Size <= 0 )
    return;
  v9 = src;
LABEL_3:
  v10 = *(&v6->m_descMappings.m_Memory.m_pMemory->m_pFlexRule + v7);
  if ( v10 == 0 )
    goto LABEL_11;
  v11 = 0;
  if ( *(v10 + 8) <= 0 )
    goto LABEL_10;
  v12 = v6->m_descMappings.m_Memory.m_pMemory + v7;
  thisa = v7;
  v13 = 0;
  v14 = pMainToModelMapping;
  srcb = v8;
  v15 = v10;
  v16 = v12;
  v17 = v6;
  while ( 2 )
  {
    v18 = (*(v15 + 16) + 8 * v13);
    v19 = v5;
    v5 = *v18;
    switch ( *v18 )
    {
      case 1u:
        v134 = v11++;
        LODWORD(stack[v134]) = v18[1];
        goto LABEL_8;
      case 2u:
        v5 = *(v16 + 4);
        v132 = *(*(v5 + 8) + 4LL * v18[1]);
        if ( v14 != 0 )
          v132 = v14[v132];
        v133 = v11++;
        stack[v133] = v9[v132];
        goto LABEL_8;
      case 3u:
        v131 = v11++;
        v5 = v18[1];
        stack[v131] = dest[*(*(*(v16 + 5) + 8LL) + 4 * v5)];
        goto LABEL_8;
      case 4u:
        v130 = v11 - 2;
        stack[v130] = stack[v130] + stack[--v11];
        goto LABEL_8;
      case 5u:
        v140 = v11 - 2;
        stack[v140] = stack[v140] - stack[--v11];
        goto LABEL_8;
      case 6u:
        v137 = v11 - 2;
        stack[v137] = stack[v137] * stack[--v11];
        goto LABEL_8;
      case 7u:
        v135 = stack[v11 - 1];
        v136 = v11 - 2;
        if ( fabs(v135) <= 0.0001 )
        {
          stack[v136] = 0.0;
          --v11;
        }
        else
        {
          --v11;
          stack[v136] = stack[v136] / v135;
        }
        goto LABEL_8;
      case 8u:
        stack[v11 - 1] = -stack[v11 - 1];
        goto LABEL_8;
      case 0xDu:
        v139 = v11 - 2;
        stack[v139] = fmaxf(stack[v139], stack[--v11]);
        goto LABEL_8;
      case 0xEu:
        v138 = v11 - 2;
        stack[v138] = fminf(stack[v138], stack[--v11]);
        goto LABEL_8;
      case 0xFu:
        v5 = *(v16 + 4);
        v127 = 1.0;
        v128 = v9[v14[*(*(v5 + 8) + 4LL * v18[1])]] + 1.0;
        if ( v128 >= 0.0 )
        {
          v127 = 0.0;
          if ( v128 <= 1.0 )
            v127 = 1.0 - v128;
        }
        v129 = v11++;
        stack[v129] = v127;
        goto LABEL_8;
      case 0x10u:
        v5 = *(v16 + 4);
        v124 = 0.0;
        v125 = v9[v14[*(*(v5 + 8) + 4LL * v18[1])]];
        if ( v125 >= 0.0 )
        {
          v124 = 1.0;
          if ( v125 <= 1.0 )
            v124 = v125 + 0.0;
        }
        v126 = v11++;
        stack[v126] = v124;
        goto LABEL_8;
      case 0x11u:
        v111 = *(*(v16 + 4) + 8LL);
        v112 = *(v111 + 4LL * stack[v11 - 1]);
        v113 = v14[*(v111 + 4LL * v18[1])];
        v114 = stack[v11 - 2];
        v115 = stack[v11 - 3];
        v116 = v11 - 4;
        v117 = v11 - 5;
        v118 = v9[v14[v112]];
        v5 = v116;
        v119 = stack[v117];
        v120 = stack[v116];
        if ( v119 >= v118 || v118 >= v114 )
        {
          v122 = 0.0;
          goto LABEL_76;
        }
        if ( v120 <= v118 )
        {
          if ( v118 <= v115 )
            goto LABEL_114;
          v163 = v118;
          if ( v114 == v115 )
          {
            v165 = v118 - v114;
            v122 = 0.0;
            if ( v165 < 0.0 )
LABEL_114:
              v122 = 1.0;
          }
          else
          {
            v122 = 0.0;
            v164 = (v163 - v115) / (v114 - v115);
            if ( v164 < 0.0 )
              goto LABEL_114;
            if ( v164 <= 1.0 )
              v122 = 1.0 - v164;
          }
        }
        else if ( v120 == v119 )
        {
          if ( (v118 - v120) >= 0.0 )
            goto LABEL_114;
          v122 = 0.0;
        }
        else
        {
          v121 = v118;
          v122 = 0.0;
          v123 = (v121 - v119) / (v120 - v119);
          if ( v123 >= 0.0 )
          {
            v122 = 1.0;
            if ( v123 <= 1.0 )
              v122 = v123 + 0.0;
          }
        }
LABEL_76:
        stack[v117] = v122 * v9[v113];
        v11 = v116;
        goto LABEL_8;
      case 0x12u:
        v5 = v11 - v18[1];
        if ( v5 + 1 < v11 )
        {
          v5 = v5;
          v108 = v5 + 1;
          v109 = stack[v5];
          do
          {
            v110 = v108++;
            v109 = v109 * stack[v110];
            stack[v5] = v109;
          }
          while ( v108 != v11 );
        }
        v11 = v5 + 1;
        goto LABEL_8;
      case 0x13u:
        v5 = v11 - v18[1];
        v105 = v5 + 1;
        v106 = stack[v5];
        if ( v5 + 1 < v11 )
        {
          do
          {
            v107 = v105++;
            v106 = v106 * stack[v107];
          }
          while ( v105 != v11 );
        }
        v11 = v5;
        stack[v5] = (1.0 - v106) * stack[v5];
        goto LABEL_8;
      case 0x14u:
        v5 = *(*(v16 + 4) + 8LL);
        m_pMemory = v17->m_controllerMappings.m_Memory.m_pMemory;
        v69 = *(v5 + 4LL * v18[1]);
        v70 = v14[v69];
        m_pFlexController = m_pMemory[v69].m_pFlexController;
        v72 = v9[v70];
        max = m_pFlexController->max;
        min = m_pFlexController->min;
        if ( max == min )
        {
          v75.m128_f32[0] = v72 - max;
          v76 = 0;
          v77 = _mm_andnot_ps(_mm_cmple_ss(0LL, v75), 0x3F800000u).m128_f32[0];
        }
        else
        {
          v154 = v72 - min;
          v155 = max - min;
          v76 = 0;
          v156 = v154 / v155;
          if ( v156 < 0.0 )
          {
            v77 = 1.0;
          }
          else
          {
            v77 = 0.0;
            if ( v156 <= 1.0 )
              v77 = 1.0 - v156;
          }
        }
        v78 = v11 - 2;
        v79 = v76.m128_f32[0];
        v80 = stack[v11 - 2];
        if ( v80 >= 0 )
        {
          v81 = *(v5 + 4LL * v80);
          v82 = v14[v81];
          v83 = m_pMemory[v81].m_pFlexController;
          v84 = v9[v82];
          v85 = v83->max;
          v86 = v83->min;
          if ( v85 == v86 )
          {
            v87.m128_f32[0] = v84 - v85;
            LODWORD(v79) = _mm_cmple_ss(v76, v87).m128_u32[0] & 0x3F800000;
          }
          else
          {
            v161 = (v84 - v86) / (v85 - v86);
            v79 = v76.m128_f32[0];
            if ( v76.m128_f32[0] <= v161 )
            {
              v79 = 1.0;
              if ( v161 <= 1.0 )
                v79 = v161 + v76.m128_f32[0];
            }
          }
        }
        v88 = *(v5 + 4LL * stack[v11 - 1]);
        v89 = v14[v88];
        v90 = m_pMemory[v88].m_pFlexController;
        v91 = v9[v89];
        v92 = v90->max;
        v93 = v90->min;
        if ( v92 == v93 )
        {
          v94.m128_f32[0] = v91 - v92;
          LODWORD(v95) = _mm_cmple_ss(v76, v94).m128_u32[0] & 0x3F800000;
        }
        else
        {
          v151 = v91 - v93;
          v152 = v92 - v93;
          v95 = v76.m128_f32[0];
          v153 = v151 / v152;
          if ( v76.m128_f32[0] <= v153 )
          {
            v95 = 1.0;
            if ( v153 <= 1.0 )
              v95 = v153 + v76.m128_f32[0];
          }
        }
        v96 = fmaxf(v79, v95);
        v97 = 1.0;
        v98 = v11 - 3;
        v99 = stack[v98];
        if ( v99 >= 0 )
        {
          v5 = *(v5 + 4LL * v99);
          v100 = m_pMemory[v5].m_pFlexController;
          v101 = v100->max;
          v102 = v100->min;
          v103 = v9[v14[v5]];
          if ( v101 == v102 )
          {
            v104.m128_f32[0] = v103 - v101;
            v97 = _mm_andnot_ps(_mm_cmple_ss(v76, v104), 0x3F800000u).m128_f32[0];
          }
          else
          {
            v157 = (v103 - v102) / (v101 - v102);
            if ( v76.m128_f32[0] > v157 )
            {
              v97 = 1.0;
            }
            else
            {
              v158 = 1.0;
              if ( v157 > 1.0 || (v158 = (v157 + v157) - 1.0, v76.m128_f32[0] <= v158) )
                v97 = 1.0 - v158;
              else
                v97 = 1.0;
            }
          }
        }
        stack[v98] = (v77 * v97) * v96;
        v11 = v78;
        goto LABEL_8;
      case 0x15u:
        v5 = *(*(v16 + 4) + 8LL);
        v31 = v17->m_controllerMappings.m_Memory.m_pMemory;
        v32 = *(v5 + 4LL * v18[1]);
        v33 = v14[v32];
        v34 = v31[v32].m_pFlexController;
        v35 = v9[v33];
        v36 = v34->max;
        v37 = v34->min;
        if ( v36 == v37 )
        {
          v38.m128_f32[0] = v35 - v36;
          v39 = 0;
          LODWORD(v40) = _mm_cmple_ss(0LL, v38).m128_u32[0] & 0x3F800000;
        }
        else
        {
          v145 = v36 - v37;
          v146 = v35 - v37;
          v39 = 0;
          v147 = v146 / v145;
          v40 = 0.0;
          if ( v147 >= 0.0 )
          {
            v40 = 1.0;
            if ( v147 <= 1.0 )
              v40 = v147 + 0.0;
          }
        }
        v41 = v11 - 2;
        v42 = v39.m128_f32[0];
        v43 = stack[v11 - 2];
        if ( v43 >= 0 )
        {
          v44 = *(v5 + 4LL * v43);
          v45 = v14[v44];
          v46 = v31[v44].m_pFlexController;
          v47 = v9[v45];
          v48 = v46->max;
          v49 = v46->min;
          if ( v48 == v49 )
          {
            v50.m128_f32[0] = v47 - v48;
            LODWORD(v42) = _mm_cmple_ss(v39, v50).m128_u32[0] & 0x3F800000;
          }
          else
          {
            v162 = (v47 - v49) / (v48 - v49);
            v42 = v39.m128_f32[0];
            if ( v39.m128_f32[0] <= v162 )
            {
              v42 = 1.0;
              if ( v162 <= 1.0 )
                v42 = v162 + v39.m128_f32[0];
            }
          }
        }
        v51 = *(v5 + 4LL * stack[v11 - 1]);
        v52 = v14[v51];
        v53 = v31[v51].m_pFlexController;
        v54 = v9[v52];
        v55 = v53->max;
        v56 = v53->min;
        if ( v55 == v56 )
        {
          v57.m128_f32[0] = v54 - v55;
          LODWORD(v58) = _mm_cmple_ss(v39, v57).m128_u32[0] & 0x3F800000;
        }
        else
        {
          v148 = v54 - v56;
          v149 = v55 - v56;
          v58 = v39.m128_f32[0];
          v150 = v148 / v149;
          if ( v39.m128_f32[0] <= v150 )
          {
            v58 = 1.0;
            if ( v150 <= 1.0 )
              v58 = v150 + v39.m128_f32[0];
          }
        }
        v59 = fmaxf(v42, v58);
        v60 = v11 - 3;
        v61 = stack[v60];
        v62 = 1.0;
        if ( v61 < 0 )
          goto LABEL_28;
        v5 = *(v5 + 4LL * v61);
        v63 = v31[v5].m_pFlexController;
        v64 = v63->max;
        v65 = v63->min;
        v66 = v9[v14[v5]];
        if ( v64 == v65 )
        {
          v67.m128_f32[0] = v66 - v64;
          LODWORD(v62) = _mm_cmple_ss(v39, v67).m128_u32[0] & 0x3F800000;
          goto LABEL_28;
        }
        v159 = (v66 - v65) / (v64 - v65);
        if ( v39.m128_f32[0] > v159 )
        {
          v160 = -1.0;
LABEL_116:
          v62 = v160 + 1.0;
          goto LABEL_28;
        }
        v62 = 1.0;
        if ( v159 <= 1.0 )
        {
          v160 = (v159 + v159) - 1.0;
          if ( v160 <= v39.m128_f32[0] )
            goto LABEL_116;
        }
LABEL_28:
        stack[v60] = (v40 * v62) * v59;
        v11 = v41;
LABEL_8:
        if ( ++v13 < *(v15 + 8) )
          continue;
        pMainToModelMapping = v14;
        v8 = srcb;
        v6 = v17;
        v7 = thisa;
LABEL_10:
        dest[v8] = stack[0];
LABEL_11:
        v7 = (v7 + 48);
        v8 = (v8 + 1);
        if ( v6->m_descMappings.m_Size > v8 )
          goto LABEL_3;
        return;
      case 0x16u:
        stack[v11 - 1] = fsqrt(stack[v11 - 1]);
        goto LABEL_8;
      case 0x17u:
        v22 = stack[v11 - 4];
        v23 = v11 - 5;
        v24 = stack[v23];
        v25 = stack[v11 - 3];
        v5 = v11 - 2;
        v26 = LODWORD(stack[v5]);
        v27 = stack[v11 - 1];
        if ( v22 == v25 )
        {
          v28.m128_f32[0] = v24 - v25;
          v29 = _mm_cmple_ss(0LL, v28);
          LODWORD(v30) = _mm_andnot_ps(v29, v26).m128_u32[0] | LODWORD(v27) & v29.m128_i32[0];
        }
        else
        {
          v141 = v24 - v22;
          v142 = v25 - v22;
          v143 = 0.0;
          v144 = v141 / v142;
          if ( v144 >= 0.0 )
            v143 = fminf(1.0, v144);
          v30 = ((v27 - v26.m128_f32[0]) * v143) + v26.m128_f32[0];
        }
        stack[v23] = v30;
        v11 -= 4;
        goto LABEL_8;
      case 0x18u:
        v167 = v9;
        v169 = v14;
        v21 = sinf(stack[v11 - 1]);
        v14 = v169;
        v9 = v167;
        stack[v11 - 1] = v21;
        goto LABEL_8;
      case 0x19u:
        v166 = v9;
        v168 = v14;
        v20 = cosf(stack[v11 - 1]);
        v14 = v168;
        v9 = v166;
        stack[v11 - 1] = v20;
        goto LABEL_8;
      default:
        v5 = v19;
        goto LABEL_8;
    }
  }
}


// CMorphSet::ConvertMorphRuleToExpressionString  (line 342, @0x0000000003167530, libserver.so)  // inlines: Append, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, iFlexOp, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount, CUtlString::operator+=, CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlString::Get, V_atoi, CFmtStrN<256, false>::CFmtStrN, CFmtStrN<256, false>::AppendFormat, CUtlMemory<CUtlString, int>::Purge, _Unwind_Resume, __stack_chk_fail
// strings: "COS( ", "<INVALID EXPRESSION>", "SIN( ", "RemapValClamped( ", "SQRT( ", "UPPER_EYELID( " (20 total)
// globals: jpt_3167635
bool __fastcall CMorphSet::ConvertMorphRuleToExpressionString(
        const CMorphSet *const this,
        CUtlString *const sMorphExpression,
        int nRule)
{
  const CFlexRule *m_pFlexRule; // rax
  __int64 v6; // r12
  int v7; // r14d
  __int64 v8; // r13
  bool v9; // r13
  int m_Size; // ebx
  __int64 i; // r12
  __int64 v13; // r13
  const char *v14; // rax
  int v15; // eax
  __int64 v16; // r13
  const char *v17; // rax
  int v18; // eax
  const char *v19; // rax
  int v20; // eax
  const char *v21; // rax
  int v22; // eax
  __int64 v23; // r13
  const char *v24; // rax
  int v25; // eax
  const char *v26; // rax
  int v27; // eax
  const char *v28; // rax
  int v29; // eax
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // r14
  const char *v32; // rax
  char v33; // cl
  char *v34; // rax
  unsigned __int64 v35; // rsi
  const char *v36; // rdx
  const char *v37; // rax
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r14
  const char *v40; // rax
  char v41; // cl
  unsigned __int64 v42; // rsi
  const char *v43; // rdx
  __int64 v44; // r13
  double v45; // xmm1_8
  __int64 v46; // r13
  __int64 v47; // r13
  __int64 v48; // r13
  __int64 v49; // r13
  __int64 v50; // r13
  const char *v51; // rax
  int v52; // eax
  __int64 v53; // r13
  int v55; // [rsp+14h] [rbp-1ACh]
  __int64 v56; // [rsp+18h] [rbp-1A8h]
  int j; // [rsp+28h] [rbp-198h]
  __int64 ja; // [rsp+28h] [rbp-198h]
  FlexDescMapping_t *v60; // [rsp+38h] [rbp-188h]
  CUtlString str; // [rsp+40h] [rbp-180h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > stack; // [rsp+50h] [rbp-170h] BYREF
  CFmtStr sStr; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v64; // [rsp+188h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  stack.m_Size = 0;
  stack.m_Memory.m_pMemory = 0;
  stack.m_Memory.m_nAllocationCount = 0;
  stack.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::SetCount(&stack, 32);
  v60 = &this->m_descMappings.m_Memory.m_pMemory[nRule];
  m_pFlexRule = v60->m_pFlexRule;
  if ( m_pFlexRule != 0 )
  {
    if ( m_pFlexRule->m_FlexOps.m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = &m_pFlexRule->m_FlexOps.m_Memory.m_pMemory[v6];
        switch ( *v8 )
        {
          case 1:
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v7], "");
            CUtlString::operator+=(&stack.m_Memory.m_pMemory[v7], *(v8 + 4), v45);
            goto LABEL_47;
          case 2:
            CUtlString::operator=(
              &stack.m_Memory.m_pMemory[v7],
              &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[*(v8 + 4)].m_szName);
            goto LABEL_47;
          case 3:
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v7], "%");
            CUtlString::operator+=(
              &stack.m_Memory.m_pMemory[v7],
              &this->m_pMorphSetData->m_FlexDesc.m_Memory.m_pMemory[*(v8 + 4)].m_szFacs);
            goto LABEL_47;
          case 4:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "( ");
            v46 = v7 - 2;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v46]);
            CUtlString::operator+=(&str, " + ");
            --v7;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v46 + 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v46], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 5:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "( ");
            v47 = v7 - 2;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v47]);
            CUtlString::operator+=(&str, " - ");
            --v7;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v47 + 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v47], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 6:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "( ");
            v44 = v7 - 2;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v44]);
            CUtlString::operator+=(&str, " * ");
            --v7;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v44 + 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v44], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 7:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "( ");
            v50 = v7 - 2;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v50]);
            CUtlString::operator+=(&str, " / ");
            --v7;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v50 + 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v50], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 8:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "-");
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v7 - 1]);
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v7 - 1], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0xD:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "MAX( ");
            v49 = v7 - 2;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v49]);
            CUtlString::operator+=(&str, ", ");
            --v7;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v49 + 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v49], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0xE:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "MIN( ");
            v48 = v7 - 2;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v48]);
            CUtlString::operator+=(&str, ", ");
            --v7;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v48 + 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v48], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0xF:
            ja = v7;
            CUtlString::operator=(&stack.m_Memory.m_pMemory[ja], "2WAY_0( ");
            goto LABEL_63;
          case 0x10:
            ja = v7;
            CUtlString::operator=(&stack.m_Memory.m_pMemory[ja], "2WAY_1( ");
LABEL_63:
            CUtlString::operator+=(
              &stack.m_Memory.m_pMemory[ja],
              &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[*(v8 + 4)].m_szName);
            CUtlString::operator+=(&stack.m_Memory.m_pMemory[ja], " )");
LABEL_47:
            ++v7;
            break;
          case 0x11:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "NWAY( ");
            v51 = CUtlString::Get(&stack.m_Memory.m_pMemory[v7 - 1]);
            v52 = V_atoi(v51);
            CUtlString::operator+=(&str, &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v52].m_szName);
            CUtlString::operator+=(&str, ", ");
            CUtlString::operator+=(
              &str,
              &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[*(v8 + 4)].m_szName);
            CUtlString::operator+=(&str, ", ");
            v53 = 8LL * (v7 - 1) - 32;
            CUtlString::operator+=(&str, (stack.m_Memory.m_pMemory + v53));
            CUtlString::operator+=(&str, ", ");
            v7 -= 4;
            CUtlString::operator+=(&str, (stack.m_Memory.m_pMemory + v53 + 8));
            CUtlString::operator+=(&str, ", ");
            CUtlString::operator+=(&str, (stack.m_Memory.m_pMemory + v53 + 16));
            CUtlString::operator+=(&str, ", ");
            CUtlString::operator+=(&str, (stack.m_Memory.m_pMemory + v53 + 24));
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=((stack.m_Memory.m_pMemory + v53), &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0x12:
            v55 = v7 - *(v8 + 4);
            v56 = v55;
            v37 = CUtlString::Get(&stack.m_Memory.m_pMemory[v56]);
            CFmtStrN<256,false>::CFmtStrN(&sStr, "COMBO( %s", v37);
            j = v55 + 1;
            if ( v55 + 1 < v7 )
            {
              v38 = 8LL * j;
              v39 = 8 * (j + (v7 - 2 - v55) + 1);
              do
              {
                v40 = CUtlString::Get(&stack.m_Memory.m_pMemory[v38 / 8]);
                CFmtStrN<256,false>::AppendFormat(&sStr, ", %s", v40);
                v38 += 8LL;
              }
              while ( v38 != v39 );
            }
            v41 = 32;
            v34 = &sStr.m_szBuf[sStr.m_nLength];
            v42 = &v34[256 - sStr.m_nLength - 1];
            v43 = " )";
            if ( v34 < v42 )
            {
              do
              {
                *v34++ = v41;
                ++v43;
                if ( v34 == v42 )
                  break;
                v41 = *v43;
              }
              while ( *v43 != 0 );
            }
            goto LABEL_35;
          case 0x13:
            j = v7 - *(v8 + 4);
            v56 = j;
            v28 = CUtlString::Get(&stack.m_Memory.m_pMemory[v56]);
            CFmtStrN<256,false>::CFmtStrN(&sStr, "DOMINATE( %s", v28);
            v29 = j + 1;
            if ( j + 1 < v7 )
            {
              v30 = 8LL * v29;
              v31 = 8 * (v29 + (v7 - 2 - j) + 1);
              do
              {
                v32 = CUtlString::Get(&stack.m_Memory.m_pMemory[v30 / 8]);
                CFmtStrN<256,false>::AppendFormat(&sStr, ", %s", v32);
                v30 += 8LL;
              }
              while ( v30 != v31 );
            }
            v33 = 32;
            v34 = &sStr.m_szBuf[sStr.m_nLength];
            v35 = &v34[256 - sStr.m_nLength - 1];
            v36 = " )";
            if ( v34 < v35 )
            {
              do
              {
                *v34++ = v33;
                ++v36;
                if ( v34 == v35 )
                  break;
                v33 = *v36;
              }
              while ( *v36 != 0 );
            }
LABEL_35:
            *v34 = 0;
            sStr.m_nLength = v34 - sStr.m_szBuf;
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v56], sStr.m_szBuf);
            v7 = j;
            break;
          case 0x14:
            str.m_pString = 0;
            CUtlString::operator=(&str, "LOWER_EYELID( ");
            CUtlString::operator+=(
              &str,
              &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[*(v8 + 4)].m_szName);
            CUtlString::operator+=(&str, ", ");
            v21 = CUtlString::Get(&stack.m_Memory.m_pMemory[v7 - 1]);
            v22 = V_atoi(v21);
            CUtlString::operator+=(&str, &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v22].m_szName);
            CUtlString::operator+=(&str, ", ");
            v23 = 8LL * (v7 - 1) - 8;
            v7 -= 2;
            v24 = CUtlString::Get((stack.m_Memory.m_pMemory + v23));
            v25 = V_atoi(v24);
            CUtlString::operator+=(&str, &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v25].m_szName);
            CUtlString::operator+=(&str, ", ");
            v23 -= 8;
            v26 = CUtlString::Get((stack.m_Memory.m_pMemory + v23));
            v27 = V_atoi(v26);
            CUtlString::operator+=(&str, &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v27].m_szName);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=((stack.m_Memory.m_pMemory + v23), &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0x15:
            str.m_pString = 0;
            CUtlString::operator=(&str, "UPPER_EYELID( ");
            CUtlString::operator+=(
              &str,
              &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[*(v8 + 4)].m_szName);
            CUtlString::operator+=(&str, ", ");
            v14 = CUtlString::Get(&stack.m_Memory.m_pMemory[v7 - 1]);
            v15 = V_atoi(v14);
            CUtlString::operator+=(&str, &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v15].m_szName);
            CUtlString::operator+=(&str, ", ");
            v16 = 8LL * (v7 - 1) - 8;
            v7 -= 2;
            v17 = CUtlString::Get((stack.m_Memory.m_pMemory + v16));
            v18 = V_atoi(v17);
            CUtlString::operator+=(&str, &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v18].m_szName);
            CUtlString::operator+=(&str, ", ");
            v16 -= 8;
            v19 = CUtlString::Get((stack.m_Memory.m_pMemory + v16));
            v20 = V_atoi(v19);
            CUtlString::operator+=(&str, &this->m_pMorphSetData->m_FlexControllers.m_Memory.m_pMemory[v20].m_szName);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=((stack.m_Memory.m_pMemory + v16), &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0x16:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "SQRT( ");
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v7 - 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v7 - 1], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0x17:
            str.m_pString = 0;
            CUtlString::operator=(&str, "RemapValClamped( ");
            v13 = v7 - 5;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v13]);
            CUtlString::operator+=(&str, ", ");
            v7 -= 4;
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v13 + 1]);
            CUtlString::operator+=(&str, ", ");
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v13 + 2]);
            CUtlString::operator+=(&str, ", ");
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v13 + 3]);
            CUtlString::operator+=(&str, ", ");
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v13 + 4]);
            CUtlString::operator+=(&str, ", ");
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v13], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0x18:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "SIN( ");
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v7 - 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v7 - 1], &str);
            if ( str.m_pString != 0 )
              goto LABEL_6;
            break;
          case 0x19:
            str.m_pString = 0;
            CUtlString::operator+=(&str, "COS( ");
            CUtlString::operator+=(&str, &stack.m_Memory.m_pMemory[v7 - 1]);
            CUtlString::operator+=(&str, " )");
            CUtlString::operator=(&stack.m_Memory.m_pMemory[v7 - 1], &str);
            if ( str.m_pString != 0 )
LABEL_6:
              CUtlString::FreeMemoryBlock(&str);
            break;
          default:
            break;
        }
        ++v6;
        m_pFlexRule = v60->m_pFlexRule;
      }
      while ( m_pFlexRule->m_FlexOps.m_Size > v6 );
      if ( v7 == 1 )
      {
        CUtlString::operator=(sMorphExpression, stack.m_Memory.m_pMemory);
        v9 = 1;
        goto LABEL_11;
      }
    }
    CUtlString::operator=(sMorphExpression, "<INVALID EXPRESSION>");
  }
  else
  {
    CUtlString::operator=(sMorphExpression, "<NO EXPRESSION>");
  }
  v9 = 0;
LABEL_11:
  m_Size = stack.m_Size;
  for ( i = 8LL * stack.m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    if ( *(&stack.m_Memory.m_pMemory->m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((stack.m_Memory.m_pMemory + i));
  }
  stack.m_Size = 0;
  if ( (stack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&stack.m_Memory);
    if ( (stack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&stack.m_Memory);
  }
  return v9;
}


