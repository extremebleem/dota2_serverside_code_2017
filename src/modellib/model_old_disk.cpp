
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_model_old_disk.cpp  (line 0, @0x0000000001a6b3c0, libserver.so)  // inlines: CThreadFastMutex, Color, SetColor, __static_initialization_and_destruction_0
// calls: ConCommand::ConCommand, __cxa_atexit
// strings: "model_dump_convert_info", "Print model load-time conversion info"
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors, model_dump_convert_info(CCommandContext const&,CCommand const&), `vtable for'CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>, s_ConversionCountMutex, model_dump_convert_info_command, __dso_handle
void __cdecl GLOBAL__sub_I_model_old_disk_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_AnimOpSourceColors
  g_AnimOpSourceColors[0]._color[0] = -1;
  g_AnimOpSourceColors[0]._color[1] = -1;
  g_AnimOpSourceColors[0]._color[2] = 0;
  g_AnimOpSourceColors[0]._color[3] = -1;
  g_AnimOpSourceColors[1]._color[0] = -36;
  g_AnimOpSourceColors[1]._color[1] = -36;
  g_AnimOpSourceColors[1]._color[2] = -36;
  g_AnimOpSourceColors[1]._color[3] = -1;
  g_AnimOpSourceColors[2]._color[0] = 0;
  g_AnimOpSourceColors[2]._color[1] = -1;
  g_AnimOpSourceColors[2]._color[2] = 50;
  g_AnimOpSourceColors[2]._color[3] = -1;
  g_AnimOpSourceColors[3]._color[0] = -1;
  g_AnimOpSourceColors[3]._color[1] = 50;
  g_AnimOpSourceColors[3]._color[2] = 50;
  g_AnimOpSourceColors[3]._color[3] = -1;
  s_ConversionCountMutex.m_ownerID = 0;
  s_ConversionCountMutex.m_depth = 0;
  ConCommand::ConCommand(
    &model_dump_convert_info_command,
    "model_dump_convert_info",
    model_dump_convert_info,
    "Print model load-time conversion info",
    &`vtable for'CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>,
    0);
  __cxa_atexit(ConCommand::~ConCommand, &model_dump_convert_info_command, &_dso_handle);
}


// model_dump_convert_info  (line 20, @0x0000000003163d90, libserver.so)
// calls: Msg
// strings: "Model conversion: %d conversions in %.3fsec (%.3fms each)\n"
// globals: s_nConversionTotalCount, s_flConversionTotalTime
void __fastcall model_dump_convert_info(const CCommandContext *const ctx, const CCommand *const args)
{
  double v2; // xmm2_8

  if ( s_nConversionTotalCount != 0 )
    v2 = s_nConversionTotalCount;
  else
    v2 = 1.0;
  Msg(
    "Model conversion: %d conversions in %.3fsec (%.3fms each)\n",
    s_nConversionTotalCount,
    s_flConversionTotalTime,
    1000.0 * s_flConversionTotalTime / v2);
}


// CModelSkeleton::InitFromOldData  (line 56, @0x0000000003164150, libserver.so)  // inlines: Base, CopyArray, Count, GetPtr, GetRawPtr, ResolveOffset, operator=, operator[]
// calls: CUtlVectorBase<short int, CUtlMemory<short int, int> >::CopyArray, CUtlVectorBase<float, CUtlMemory<float, int> >::CopyArray, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::SetCount, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount, CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::SetCount, CUtlString::operator=, CModelSkeleton::Finalize
// callers: CModel::InitFromV0Data
void __fastcall CModelSkeleton::InitFromOldData(CModelSkeleton *const this, const ModelSkeletonData_t *pPermData)
{
  __int64 m_nOffset; // rax
  signed int m_nCount; // ebx
  uint32 v6; // edx
  const __int16 *v7; // rsi
  __int64 v8; // rax
  const float *v9; // rsi
  char *v10; // r15
  __int64 v11; // rdx
  signed int v12; // r14d
  int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // xmm0_4
  _DWORD *v17; // rcx
  __int64 v18; // rax
  char *v19; // r15
  signed int v20; // r14d
  int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // xmm0_4
  _DWORD *v25; // rdx
  __int64 v26; // r15
  unsigned __int64 v27; // rbx
  char *v28; // rax
  const char *v29; // rsi
  char *v30; // rax
  __int64 v31; // rdx
  const char *v32; // rdx
  int32 v33; // edx
  CModelSkeleton::BoneFlags_t *v34; // rcx
  char *v35; // rax
  CModelSkeleton::BoneFlags_t v36; // eax

  m_nOffset = pPermData->m_nParent.m_nOffset;
  m_nCount = pPermData->m_boneName.m_nCount;
  v6 = pPermData->m_nParent.m_nCount;
  v7 = 0;
  if ( m_nOffset != 0 )
    v7 = (&pPermData->m_nParent + m_nOffset);
  CUtlVectorBase<short,CUtlMemory<short,int>>::CopyArray(&this->m_nParent, v7, v6);
  v8 = pPermData->m_boneSphere.m_nOffset;
  v9 = 0;
  if ( v8 != 0 )
    v9 = (&pPermData->m_boneSphere + v8);
  v10 = 0;
  CUtlVectorBase<float,CUtlMemory<float,int>>::CopyArray(&this->m_boneSphere, v9, pPermData->m_boneSphere.m_nCount);
  v11 = pPermData->m_bonePosParent.m_nOffset;
  v12 = pPermData->m_bonePosParent.m_nCount;
  if ( v11 != 0 )
    v10 = &pPermData->m_bonePosParent + v11;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(&this->m_bonePosParent, v12);
  if ( v12 > 0 )
  {
    v13 = v10;
    v14 = 0;
    do
    {
      v15 = v14;
      v16 = *v13;
      v14 += 12;
      v17 = (&this->m_bonePosParent.m_Memory.m_pMemory->x + v15);
      v13 += 3;
      *v17 = v16;
      v17[1] = *(v13 - 2);
      v17[2] = *(v13 - 1);
    }
    while ( v14 != 4 * (3LL * (v12 - 1) + 3) );
  }
  v18 = pPermData->m_boneRotParent.m_nOffset;
  v19 = 0;
  v20 = pPermData->m_boneRotParent.m_nCount;
  if ( v18 != 0 )
    v19 = &pPermData->m_boneRotParent + v18;
  CUtlVectorBase<Quaternion,CUtlMemory<Quaternion,int>>::SetCount(&this->m_boneRotParent, v20);
  if ( v20 > 0 )
  {
    v21 = v19;
    v22 = 0;
    do
    {
      v23 = v22;
      v24 = *v21;
      v22 += 16;
      v25 = (&this->m_boneRotParent.m_Memory.m_pMemory->x + v23);
      v21 += 4;
      *v25 = v24;
      v25[1] = *(v21 - 3);
      v25[2] = *(v21 - 2);
      v25[3] = *(v21 - 1);
    }
    while ( v22 != 16 * ((v20 - 1) + 1LL) );
  }
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::SetCount(&this->m_boneName, m_nCount);
  CUtlVectorBase<CModelSkeleton::BoneFlags_t,CUtlMemory<CModelSkeleton::BoneFlags_t,int>>::SetCount(
    &this->m_nFlag,
    m_nCount);
  if ( m_nCount > 0 )
  {
    v26 = 4LL * (m_nCount - 1) + 4;
    v27 = 0;
    do
    {
      v28 = 0;
      if ( pPermData->m_boneName.m_nOffset != 0 )
        v28 = pPermData + pPermData->m_boneName.m_nOffset;
      v29 = "";
      v30 = &v28[v27];
      v31 = *v30;
      if ( v31 != 0 )
      {
        v32 = &v30[v31];
        if ( v32 != 0 )
          v29 = v32;
      }
      CUtlString::operator=(&this->m_boneName.m_Memory.m_pMemory[v27 / 4], v29);
      v33 = pPermData->m_nFlag.m_nOffset;
      v34 = &this->m_nFlag.m_Memory.m_pMemory[v27 / 4];
      v35 = 0;
      if ( v33 != 0 )
        v35 = &pPermData->m_nFlag + v33;
      v36 = *&v35[v27];
      v27 += 4LL;
      *v34 = v36;
    }
    while ( v27 != v26 );
  }
  CModelSkeleton::Finalize(this);
}


// CModelSkeleton::Finalize  (line 85, @0x0000000003163f40, libserver.so)  // inlines: AddToTail, CopyConstruct<BoneHashPairing_t>, DoFind, Element, GrowMemory, Insert, MakeStringToken, operator char const*, operator<<, operator[]
// calls: CUtlString::Get, MurmurHash2LowerCase, RegisterStringToken, CUtlMemory<BoneHashPairing_t, int>::Grow
// callers: CModelSkeletonBuilder::FillInRuntimeData, CModelSkeleton::InitFromOldData
void __fastcall CModelSkeleton::Finalize(CModelSkeleton *const this)
{
  __int64 i; // rax
  const char *v3; // rbx
  uint32 v4; // eax
  unsigned int v5; // eax
  signed int v6; // edx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v7; // r12
  int v8; // ebx
  __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rcx
  CModelSkeleton::BoneFlags_t *v12; // rdx
  __int64 j; // rax
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v14; // rbx
  __int64 v15; // r12
  BoneHashPairing_t *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-60h]
  uint32 v18; // [rsp+0h] [rbp-60h]
  int m_Size; // [rsp+8h] [rbp-58h]
  bool bHasLodFlags; // [rsp+Fh] [rbp-51h]
  __int64 b; // [rsp+10h] [rbp-50h]
  BoneHashPairing_t bonePairing; // [rsp+20h] [rbp-40h] BYREF

  m_Size = this->m_boneName.m_Size;
  for ( i = 0; i != 8; ++i )
    this->m_pBonesPerLod[i] = 0;
  if ( m_Size <= 0 )
    goto LABEL_20;
  b = 0;
  bHasLodFlags = 0;
  do
  {
    v3 = CUtlString::Get(&this->m_boneName.m_Memory.m_pMemory[b]);
    v4 = 0;
    if ( v3 != 0 && *v3 != 0 )
    {
      v4 = MurmurHash2LowerCase(v3, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        v18 = v4;
        RegisterStringToken(v4, v3, 0, 1);
        v4 = v18;
      }
    }
    bonePairing.m_nBoneHash = v4;
    bonePairing.m_nBoneIndex = b;
    v5 = this->m_boneDict.m_KeyFunc(&bonePairing);
    if ( this->m_boneDict.m_bPowerOfTwo )
      v6 = this->m_boneDict.m_ModMask & v5;
    else
      v6 = v5 % this->m_boneDict.m_Buckets.m_Size;
    v17 = v6;
    v7 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[v17];
    v8 = v7->m_Size;
    if ( v7->m_Size <= 0 )
    {
      v10 = 0;
    }
    else
    {
      v9 = 0;
      v10 = 0;
      while ( !this->m_boneDict.m_CompareFunc(&v7->m_Memory.m_pMemory[v9], &bonePairing) )
      {
        ++v10;
        ++v9;
        if ( v10 == v8 )
          goto LABEL_26;
      }
    }
    if ( v8 == v10 )
    {
LABEL_26:
      v14 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[v17];
      v15 = v14->m_Size;
      if ( v15 == v14->m_Memory.m_nAllocationCount )
        CUtlMemory<BoneHashPairing_t,int>::Grow(&v14->m_Memory, 1);
      ++v14->m_Size;
      v16 = &v14->m_Memory.m_pMemory[v15];
      if ( v16 != 0 )
        *v16 = bonePairing;
    }
    v11 = 0;
    v12 = &this->m_nFlag.m_Memory.m_pMemory[b];
    do
    {
      if ( ((1024 << v11) & *v12) != 0 )
      {
        ++this->m_pBonesPerLod[v11];
        bHasLodFlags = 1;
      }
      ++v11;
    }
    while ( v11 != 8 );
    ++b;
  }
  while ( m_Size > b );
  if ( !bHasLodFlags )
  {
LABEL_20:
    for ( j = 0; j != 8; ++j )
      this->m_pBonesPerLod[j] = m_Size;
  }
}


// CModel::InitFromV0Data  (line 145, @0x0000000003164340, libserver.so)  // inlines: Base, CAutoLockT, CResourceNameGetter<InfoForResourceTypeAnimationGroupResourceData_t>, CUtlKeyValuePair<const ResourceBindingBase_t*>, Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>, const ResourceBindingBase_t*>, CopyArray, Count, DoInsert<const ResourceBindingBase_t*>, DoLookup<const ResourceBindingBase_t*>, End, Find, GetData, GetHandle, GetPtr, GetRawPtr, GetResourceName, GetResourceName<512ul>, GetSeconds, HasElement, Init, Insert, IsValid, Lock, PLAT_CPU_TIME, RegisterNewSubresource, ResolveOffset, ResourceGetName, Sample, SetHashCode, Start, String, ThreadInterlockedAssignIf64, ThreadInterlockedIncrement, ThreadPause, TryLockInline, Unlock, V_strncpy<int>, operator char const*, operator(), operator++, operator=, operator[], ~CAutoLockT
// calls: CUtlString::operator=, CUtlVectorBase<CModelExtPart, CUtlMemory<CModelExtPart, int> >::SetCount, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int> >::SetCount, CRenderMesh::ConvertV0MorphSetToRuntime, CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown, CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::SetCount, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::CopyArray, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CUtlVectorBase<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >::SetCount, CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoInsertUnconstructed (29 total)
// globals: s_ConversionCountMutex, s_nConversionTotalCount, s_flConversionTotalTime
void __fastcall CModel::InitFromV0Data(
        CModel *const this,
        CConvertOldDiskCtx *const convertCtx,
        const PermModelData_t *pOldModel)
{
  CModel *v3; // r13
  const char *v4; // rsi
  __int64 m_nOffset; // rax
  const char *v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  const char *v9; // rax
  const char *v10; // rsi
  __int64 v11; // rax
  const char *v12; // rax
  signed int m_nCount; // ebx
  __int64 v14; // r12
  __int64 v15; // rax
  CUtlString *v16; // rbx
  char *v17; // rdx
  CModelExtPart *v18; // r15
  int32 v19; // eax
  char *v20; // r13
  const char *v21; // rsi
  vec_t v22; // xmm2_4
  vec_t v23; // xmm1_4
  vec_t v24; // xmm1_4
  vec_t v25; // xmm3_4
  vec_t v26; // xmm0_4
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  const ResourceBindingBase_t *m_pBinding; // r14
  signed int v31; // ebx
  unsigned __int64 v32; // r15
  __int64 v33; // rbx
  CRenderMesh *const *v34; // rdx
  char *v35; // rdx
  int32 v36; // ecx
  const ResourceBindingBase_t *v37; // r14
  CStrongHandle<InfoForResourceTypeCRenderMesh> *v38; // r12
  char *v39; // rbx
  signed int v40; // r12d
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  char *v43; // r12
  signed int v44; // ebx
  __int64 v45; // rax
  __int64 i; // rax
  const float *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  const ResourceBindingBase_t **v50; // rax
  const ResourceBindingBase_t *v51; // rbx
  signed int v52; // ebx
  CUtlString *v53; // r12
  CConvertOldDiskCtx *v54; // rbx
  unsigned int v55; // edx
  unsigned int v56; // eax
  unsigned int v57; // r14d
  int inserted; // eax
  CConvertOldDiskCtx *v59; // rcx
  __int64 v60; // rax
  const char **m_pPool; // rax
  const char *v62; // rsi
  int32 v63; // edx
  char *v64; // rax
  CConvertOldDiskCtx *v65; // rcx
  CModelMemoryPool *m_pModelPool; // r15
  signed int v67; // ebx
  unsigned __int64 v68; // r14
  __int64 v69; // rbx
  int32 v70; // edx
  char *v71; // rax
  const char *v72; // rsi
  char *v73; // rax
  __int64 v74; // rdx
  const char *v75; // rdx
  CUtlString *v76; // rdi
  signed int v77; // ebx
  char *v78; // rbx
  char *v79; // r12
  int32 v80; // eax
  char *v81; // rbx
  const char *v82; // rsi
  __int64 v83; // rax
  const char *v84; // rax
  int v85; // r13d
  CUtlString *v86; // r15
  int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // r13
  __int64 *v90; // r14
  int v91; // eax
  __int64 v92; // rax
  const __int16 *v93; // rsi
  char *v94; // rbx
  signed int v95; // r12d
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  signed int v98; // ebx
  char *v99; // rbx
  int32 v100; // eax
  char *v101; // rbx
  const char *v102; // rsi
  __int64 v103; // rax
  const char *v104; // rax
  int v105; // r13d
  CModel *v106; // r15
  __int64 v107; // r13
  __int64 v108; // r12
  char *v109; // r14
  int v110; // eax
  const char *v111; // rsi
  _DWORD *v112; // r12
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rbx
  signed __int64 CurrentId; // rsi
  __int64 CPUFrequency; // rax
  double v118; // xmm0_8
  double v119; // xmm6_8
  CFastTimer timer; // [rsp+0h] [rbp-290h]
  CModel *v121; // [rsp+10h] [rbp-280h]
  CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *p_m_HandledSubResources; // [rsp+18h] [rbp-278h]
  CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *v123; // [rsp+18h] [rbp-278h]
  CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *v124; // [rsp+18h] [rbp-278h]
  __int64 v125; // [rsp+20h] [rbp-270h]
  __int64 v126; // [rsp+20h] [rbp-270h]
  __int64 (__fastcall *v127)(IAnimationSystem *, CConvertOldDiskCtx *, CModelMemoryPool *, _BYTE *); // [rsp+28h] [rbp-268h]
  __int64 v128; // [rsp+28h] [rbp-268h]
  CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *v129; // [rsp+28h] [rbp-268h]
  CConvertOldDiskCtx *convertCtxb; // [rsp+30h] [rbp-260h]
  CConvertOldDiskCtx *convertCtxc; // [rsp+30h] [rbp-260h]
  CConvertOldDiskCtx *convertCtxd; // [rsp+30h] [rbp-260h]
  CConvertOldDiskCtx *convertCtxe; // [rsp+30h] [rbp-260h]
  CModel *thisa; // [rsp+40h] [rbp-250h]
  CModel *thisc; // [rsp+40h] [rbp-250h]
  CModel *thisb; // [rsp+40h] [rbp-250h]
  CUtlString *v139; // [rsp+48h] [rbp-248h]
  CUtlString *v140; // [rsp+48h] [rbp-248h]
  CUtlString *v141; // [rsp+48h] [rbp-248h]
  CUtlString *v142; // [rsp+48h] [rbp-248h]
  double v143; // [rsp+48h] [rbp-248h]
  _BYTE v144[520]; // [rsp+50h] [rbp-240h] BYREF
  unsigned __int64 v145; // [rsp+258h] [rbp-38h]

  v3 = this;
  v145 = __readfsqword(0x28u);
  v4 = "";
  timer.m_Duration.m_Int64 = __rdtsc();
  m_nOffset = pOldModel->m_name.m_nOffset;
  if ( m_nOffset != 0 )
  {
    v6 = pOldModel + m_nOffset;
    if ( v6 != 0 )
      v4 = v6;
  }
  CUtlString::operator=(&this->m_name, v4);
  v7 = "";
  v3->m_nInherentFlags = pOldModel->m_modelInfo.m_nFlags;
  v3->m_vHullMin.x = pOldModel->m_modelInfo.m_vHullMin.x;
  v3->m_vHullMin.y = pOldModel->m_modelInfo.m_vHullMin.y;
  v3->m_vHullMin.z = pOldModel->m_modelInfo.m_vHullMin.z;
  v3->m_vHullMax.x = pOldModel->m_modelInfo.m_vHullMax.x;
  v3->m_vHullMax.y = pOldModel->m_modelInfo.m_vHullMax.y;
  v3->m_vHullMax.z = pOldModel->m_modelInfo.m_vHullMax.z;
  v3->m_vViewMin.x = pOldModel->m_modelInfo.m_vViewMin.x;
  v3->m_vViewMin.y = pOldModel->m_modelInfo.m_vViewMin.y;
  v3->m_vViewMin.z = pOldModel->m_modelInfo.m_vViewMin.z;
  v3->m_vViewMax.x = pOldModel->m_modelInfo.m_vViewMax.x;
  v3->m_vViewMax.y = pOldModel->m_modelInfo.m_vViewMax.y;
  v3->m_vViewMax.z = pOldModel->m_modelInfo.m_vViewMax.z;
  v3->m_flMass = pOldModel->m_modelInfo.m_flMass;
  v3->m_vEyePosition.x = pOldModel->m_modelInfo.m_vEyePosition.x;
  v3->m_vEyePosition.y = pOldModel->m_modelInfo.m_vEyePosition.y;
  v3->m_vEyePosition.z = pOldModel->m_modelInfo.m_vEyePosition.z;
  v3->m_flMaxEyeDeflection = pOldModel->m_modelInfo.m_flMaxEyeDeflection;
  v8 = pOldModel->m_modelInfo.m_sSurfaceProperty.m_nOffset;
  if ( v8 != 0 )
  {
    v9 = &pOldModel->m_modelInfo.m_sSurfaceProperty + v8;
    if ( v9 != 0 )
      v7 = v9;
  }
  CUtlString::operator=(&v3->m_sSurfaceProperty, v7);
  v10 = "";
  v11 = pOldModel->m_modelInfo.m_keyValueText.m_nOffset;
  if ( v11 != 0 )
  {
    v12 = &pOldModel->m_modelInfo.m_keyValueText + v11;
    if ( v12 != 0 )
      v10 = v12;
  }
  CUtlString::operator=(&v3->m_keyValueText, v10);
  m_nCount = pOldModel->m_ExtParts.m_nCount;
  CUtlVectorBase<CModelExtPart,CUtlMemory<CModelExtPart,int>>::SetCount(&v3->m_ExtParts, m_nCount);
  if ( m_nCount > 0 )
  {
    v14 = 0;
    thisa = v3;
    v15 = (m_nCount - 1) + 1LL;
    v16 = 0;
    v139 = (v15 << 6);
    do
    {
      v17 = 0;
      v18 = (thisa->m_ExtParts.m_Memory.m_pMemory + v16);
      v19 = pOldModel->m_ExtParts.m_nOffset;
      if ( v19 != 0 )
        v17 = &pOldModel->m_ExtParts + v19;
      v20 = &v17[v14];
      v21 = "";
      v22 = *&v17[v14 + 4];
      v23 = *&v17[v14 + 8];
      v18->m_Transform.m_vPosition.x = *&v17[v14];
      v18->m_Transform.m_vPosition.y = v22;
      v18->m_Transform.m_vPosition.z = v23;
      v24 = *&v17[v14 + 28];
      v25 = *&v17[v14 + 20];
      v26 = *&v17[v14 + 16];
      v18->m_Transform.m_orientation.z = *&v17[v14 + 24];
      v18->m_Transform.m_orientation.y = v25;
      v18->m_Transform.m_orientation.x = v26;
      v18->m_Transform.m_orientation.w = v24;
      v27 = *&v17[v14 + 32];
      if ( v27 != 0 )
      {
        v28 = &v20[v27 + 32];
        if ( v28 != 0 )
          v21 = v28;
      }
      CUtlString::operator=(&v18->m_Name, v21);
      v29 = v18->m_refModel.m_pBinding == 0;
      v18->m_nParent = *(v20 + 9);
      m_pBinding = *(v20 + 5);
      if ( !v29 )
        CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&v18->m_refModel);
      v18->m_refModel.m_pBinding = m_pBinding;
      if ( m_pBinding != 0 )
      {
        if ( (m_pBinding->m_nFlags & 0x20) != 0 )
        {
          (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, &v18->m_refModel);
          m_pBinding = v18->m_refModel.m_pBinding;
        }
        _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
      }
      v16 += 8;
      v14 += 48;
    }
    while ( v16 != v139 );
    v3 = thisa;
  }
  v31 = pOldModel->m_refMeshes.m_nCount;
  CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>,CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>>::SetCount(
    &v3->m_refMeshes,
    v31);
  if ( v31 > 0 )
  {
    v32 = 0;
    v33 = 8LL * (v31 - 1) + 8;
    do
    {
      v35 = 0;
      v36 = pOldModel->m_refMeshes.m_nOffset;
      if ( v36 != 0 )
        v35 = &pOldModel->m_refMeshes + v36;
      v37 = *&v35[v32];
      v38 = &v3->m_refMeshes.m_Memory.m_pMemory[v32 / 8];
      if ( v38->m_pBinding != 0 )
        CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown(&v3->m_refMeshes.m_Memory.m_pMemory[v32 / 8]);
      v38->m_pBinding = v37;
      if ( v37 != 0 )
      {
        if ( (v37->m_nFlags & 0x20) != 0 )
        {
          (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v37, 2, v38);
          v37 = v38->m_pBinding;
        }
        _InterlockedAdd(&v37->m_nRefCount.m_value, 1u);
      }
      v34 = v3->m_refMeshes.m_Memory.m_pMemory[v32 / 8].m_pBinding;
      if ( v34 != 0 )
        CRenderMesh::ConvertV0MorphSetToRuntime(*v34, convertCtx);
      v32 += 8LL;
    }
    while ( v32 != v33 );
  }
  v39 = 0;
  v40 = pOldModel->m_refMeshGroupMasks.m_nCount;
  v41 = pOldModel->m_refMeshGroupMasks.m_nOffset;
  if ( v41 != 0 )
    v39 = &pOldModel->m_refMeshGroupMasks + v41;
  CUtlVectorBase<unsigned long long,CUtlMemory<unsigned long long,int>>::SetCount(&v3->m_refMeshGroupMasks, v40);
  if ( v40 > 0 )
  {
    v42 = 0;
    do
    {
      v3->m_refMeshGroupMasks.m_Memory.m_pMemory[v42 / 8] = *&v39[v42];
      v42 += 8LL;
    }
    while ( v42 != 8LL * (v40 - 1) + 8 );
  }
  v43 = 0;
  v44 = pOldModel->m_refLODGroupMasks.m_nCount;
  v45 = pOldModel->m_refLODGroupMasks.m_nOffset;
  if ( v45 != 0 )
    v43 = &pOldModel->m_refLODGroupMasks + v45;
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::SetCount(&v3->m_refLODGroupMasks, v44);
  for ( i = 0; v44 > i; ++i )
    v3->m_refLODGroupMasks.m_Memory.m_pMemory[i] = v43[i];
  v47 = 0;
  v48 = pOldModel->m_lodGroupSwitchDistances.m_nOffset;
  if ( v48 != 0 )
    v47 = (&pOldModel->m_lodGroupSwitchDistances + v48);
  CUtlVectorBase<float,CUtlMemory<float,int>>::CopyArray(
    &v3->m_lodGroupSwitchDistances,
    v47,
    pOldModel->m_lodGroupSwitchDistances.m_nCount);
  if ( pOldModel->m_refPhysicsData.m_nCount != 0 )
  {
    v49 = pOldModel->m_refPhysicsData.m_nOffset;
    v50 = 0;
    if ( v49 != 0 )
      v50 = (&pOldModel->m_refPhysicsData + v49);
    v51 = *v50;
    if ( v3->m_refPhysicsData.m_pBinding != 0 )
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&v3->m_refPhysicsData);
    v3->m_refPhysicsData.m_pBinding = v51;
    if ( v51 != 0 )
    {
      if ( (v51->m_nFlags & 0x20) != 0 )
      {
        (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v51, 2, &v3->m_refPhysicsData);
        v51 = v3->m_refPhysicsData.m_pBinding;
      }
      _InterlockedAdd(&v51->m_nRefCount.m_value, 1u);
    }
  }
  v52 = pOldModel->m_refAnimGroups.m_nCount;
  CUtlVectorBase<CAnimationGroupResource *,CUtlMemory<CAnimationGroupResource *,int>>::SetCount(&v3->m_AnimGroups, v52);
  if ( v52 > 0 )
  {
    v53 = 0;
    v140 = (8LL * (v52 - 1) + 8);
    v54 = convertCtx;
    p_m_HandledSubResources = &convertCtx->m_HandledSubResources;
    do
    {
      while ( 1 )
      {
        v63 = pOldModel->m_refAnimGroups.m_nOffset;
        v64 = 0;
        if ( v63 != 0 )
          v64 = &pOldModel->m_refAnimGroups + v63;
        v65 = *(&v53->m_pString + v64);
        if ( v65 != 0 )
        {
          m_pModelPool = v65->m_pModelPool;
          if ( v65->m_pModelPool != 0 )
            break;
        }
        *(v3->m_AnimGroups.m_Memory.m_pMemory + v53) = 0;
LABEL_73:
        if ( ++v53 == v140 )
          goto LABEL_74;
      }
      v55 = 33 * (((4097 * v65 + 2127912214) >> 19) ^ (4097 * v65 + 2127912214) ^ 0xC761C23C);
      v56 = 9 * ((v55 - 369570787) ^ ((v55 + 374761393) << 9)) - 42973499;
      v57 = HIWORD(v56) ^ v56 ^ 0xB55A4F09;
      if ( v54->m_HandledSubResources.m_nUsed != 0 )
      {
        convertCtxe = v65;
        v91 = CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::DoLookup<ResourceBindingBase_t const*>(
                p_m_HandledSubResources,
                v65,
                v57,
                v65);
        v65 = convertCtxe;
        if ( v91 != -1 )
        {
          *(v3->m_AnimGroups.m_Memory.m_pMemory + v53) = 0;
          goto LABEL_73;
        }
      }
      convertCtxb = v65;
      inserted = CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::DoInsertUnconstructed(
                   p_m_HandledSubResources,
                   v57,
                   1);
      v59 = convertCtxb;
      v60 = &v54->m_HandledSubResources.m_table.m_pMemory[inserted];
      if ( v60 != -4 )
        *(v60 + 4) = convertCtxb;
      convertCtxc = (v3->m_AnimGroups.m_Memory.m_pMemory + v53);
      v127 = *(*g_pAnimationSystem + 376LL);
      m_pPool = v59->m_pPool;
      if ( m_pPool != 0 )
      {
        v62 = "";
        if ( *m_pPool != 0 )
          v62 = *m_pPool;
        _V_strncpy(v144, v62, 512);
      }
      else
      {
        _V_strncpy(v144, "", 512);
      }
      ++v53;
      convertCtxc->m_pModelPool = v127(g_pAnimationSystem, v54, m_pModelPool, v144);
    }
    while ( v53 != v140 );
  }
LABEL_74:
  v67 = pOldModel->m_meshGroups.m_nCount;
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::SetCount(&v3->m_meshGroups, v67);
  if ( v67 > 0 )
  {
    v68 = 0;
    v69 = 4LL * (v67 - 1) + 4;
    do
    {
      v70 = pOldModel->m_meshGroups.m_nOffset;
      v71 = 0;
      if ( v70 != 0 )
        v71 = &pOldModel->m_meshGroups + v70;
      v72 = "";
      v73 = &v71[v68];
      v74 = *v73;
      if ( v74 != 0 )
      {
        v75 = &v73[v74];
        if ( v75 != 0 )
          v72 = v75;
      }
      v76 = &v3->m_meshGroups.m_Memory.m_pMemory[v68 / 4];
      v68 += 4LL;
      CUtlString::operator=(v76, v72);
    }
    while ( v68 != v69 );
  }
  v77 = pOldModel->m_materialGroups.m_nCount;
  CUtlVectorBase<CModelMaterialGroup,CUtlMemory<CModelMaterialGroup,int>>::SetCount(&v3->m_materialGroups, v77);
  if ( v77 > 0 )
  {
    v128 = 0;
    convertCtxd = 0;
    v123 = v3;
    v125 = 32 * ((v77 - 1) + 1LL);
    do
    {
      v78 = 0;
      v79 = convertCtxd + *&v123[9].m_table.m_nAllocationCount;
      v80 = pOldModel->m_materialGroups.m_nOffset;
      if ( v80 != 0 )
        v78 = &pOldModel->m_materialGroups + v80;
      v81 = &v78[v128];
      v82 = "";
      v83 = *v81;
      if ( v83 != 0 )
      {
        v84 = &v81[v83];
        if ( v84 != 0 )
          v82 = v84;
      }
      CUtlString::operator=((convertCtxd + *&v123[9].m_table.m_nAllocationCount), v82);
      v85 = *(v81 + 2);
      CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>>::SetCount(
        (v79 + 8),
        v85);
      if ( v85 > 0 )
      {
        v86 = 0;
        v141 = (8LL * (v85 - 1) + 8);
        do
        {
          v87 = *(v81 + 1);
          v88 = 0;
          if ( v87 != 0 )
            v88 = &v81[v87 + 4];
          v89 = *(&v86->m_pString + v88);
          v90 = (v86 + *(v79 + 2));
          if ( *v90 != 0 )
            CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown((v86 + *(v79 + 2)));
          *v90 = v89;
          if ( v89 != 0 )
          {
            if ( (*(v89 + 16) & 0x20) != 0 )
            {
              (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v89, 2, v90);
              v89 = *v90;
            }
            _InterlockedAdd((v89 + 24), 1u);
          }
          ++v86;
        }
        while ( v86 != v141 );
      }
      convertCtxd = (convertCtxd + 32);
      v128 += 12;
    }
    while ( convertCtxd != v125 );
    v3 = v123;
  }
  v3->m_nDefaultMeshGroupMask = pOldModel->m_nDefaultMeshGroupMask;
  CModelSkeleton::InitFromOldData(&v3->m_modelSkeleton, &pOldModel->m_modelSkeleton);
  v92 = pOldModel->m_remappingTable.m_nOffset;
  v93 = 0;
  if ( v92 != 0 )
    v93 = (&pOldModel->m_remappingTable + v92);
  v94 = 0;
  CUtlVectorBase<short,CUtlMemory<short,int>>::CopyArray(
    &v3->m_remappingTable,
    v93,
    pOldModel->m_remappingTable.m_nCount);
  v95 = pOldModel->m_remappingTableStarts.m_nCount;
  v96 = pOldModel->m_remappingTableStarts.m_nOffset;
  if ( v96 != 0 )
    v94 = &pOldModel->m_remappingTableStarts + v96;
  CUtlVectorBase<unsigned short,CUtlMemory<unsigned short,int>>::SetCount(&v3->m_remappingTableStarts, v95);
  if ( v95 > 0 )
  {
    v97 = 0;
    do
    {
      v3->m_remappingTableStarts.m_Memory.m_pMemory[v97 / 2] = *&v94[v97];
      v97 += 2LL;
    }
    while ( v97 != 2LL * (v95 - 1) + 2 );
  }
  v98 = pOldModel->m_boneFlexDrivers.m_nCount;
  CUtlVectorBase<CBoneFlexDriver,CUtlMemory<CBoneFlexDriver,int>>::SetCount(&v3->m_boneFlexDrivers, v98);
  if ( v98 > 0 )
  {
    v126 = 0;
    v129 = 0;
    v121 = v3;
    v124 = (8 * (5LL * (v98 - 1) + 5));
    do
    {
      v99 = 0;
      v142 = (&v121->m_boneFlexDrivers.m_Memory.m_pMemory->m_boneName + v129);
      v100 = pOldModel->m_boneFlexDrivers.m_nOffset;
      if ( v100 != 0 )
        v99 = &pOldModel->m_boneFlexDrivers + v100;
      v101 = &v99[v126];
      v102 = "";
      v103 = *v101;
      if ( v103 != 0 )
      {
        v104 = &v101[v103];
        if ( v104 != 0 )
          v102 = v104;
      }
      CUtlString::operator=(v142, v102);
      LODWORD(v142[1].m_pString) = *(v101 + 1);
      v105 = *(v101 + 3);
      CUtlVectorBase<CBoneFlexDriverControl,CUtlMemory<CBoneFlexDriverControl,int>>::SetCount(&v142[2], v105);
      if ( v105 > 0 )
      {
        v106 = 0;
        thisc = ((v105 - 1) + 1LL);
        v107 = 0;
        thisb = (32LL * thisc);
        do
        {
          v108 = 0;
          v109 = &v142[3].m_pString[v106];
          v110 = *(v101 + 2);
          if ( v110 != 0 )
            v108 = &v101[v110 + 8];
          v111 = "";
          v112 = (v107 + v108);
          *v109 = *v112;
          v113 = v112[1];
          if ( v113 != 0 )
          {
            v114 = v112 + v113 + 4;
            if ( v114 != 0 )
              v111 = v114;
          }
          v106 = (v106 + 32);
          v107 += 20;
          CUtlString::operator=(v109 + 1, v111);
          *(v109 + 4) = v112[2];
          *(v109 + 5) = v112[3];
          *(v109 + 6) = v112[4];
        }
        while ( v106 != thisb );
      }
      v129 = (v129 + 40);
      v126 += 16;
    }
    while ( v129 != v124 );
  }
  v115 = __rdtsc() - timer.m_Duration.m_Int64;
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != s_ConversionCountMutex.m_ownerID
    && _InterlockedCompareExchange64(&s_ConversionCountMutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&s_ConversionCountMutex, CurrentId, 0);
    ++s_nConversionTotalCount;
    if ( v115 >= 0 )
      goto LABEL_130;
  }
  else
  {
    ++s_nConversionTotalCount;
    ++s_ConversionCountMutex.m_depth;
    if ( v115 >= 0 )
    {
LABEL_130:
      v143 = v115;
      goto LABEL_131;
    }
  }
  v119 = (v115 & 1 | (v115 >> 1));
  v143 = v119 + v119;
LABEL_131:
  CPUFrequency = Plat_GetCPUFrequency();
  if ( CPUFrequency < 0 )
    v118 = (CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1));
  else
    v118 = CPUFrequency;
  --s_ConversionCountMutex.m_depth;
  s_flConversionTotalTime = s_flConversionTotalTime + v143 / v118;
  if ( s_ConversionCountMutex.m_depth == 0 )
    ThreadInterlockedExchange64(&s_ConversionCountMutex, 0);
}


