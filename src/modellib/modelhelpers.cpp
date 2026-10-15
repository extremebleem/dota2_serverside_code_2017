
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_modelhelpers.cpp  (line 0, @0x0000000001a6b060, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_modelhelpers_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GetMDLBoundingBox  (line 19, @0x0000000003154b00, libserver.so)  // inlines: Init, ResourceHandleToData<InfoForResourceTypeCModel>, VectorCompare, VectorMax, VectorMin, fpmax, fpmin, operator int, operator=, operator==
// calls: CModel::view_bbmin, CModel::view_bbmax, CModel::pSeqdesc, CModel::hull_min, CModel::hull_max, _Unwind_Resume
// callers: GetMDLRadius, GetMDLBoundingSphere
void __fastcall GetMDLBoundingBox(Vector *pMins, Vector *pMaxs, HModel h, HSequence nSequence)
{
  const CModel *v6; // r13
  const CModel **m_pData; // rax
  const ISequence *v9; // rax
  __int64 v10; // xmm0_8
  vec_t z; // xmm1_4
  Vector vSeqMin; // [rsp+0h] [rbp-50h] BYREF
  Vector vSeqMax; // [rsp+10h] [rbp-40h] BYREF
  Vector v14; // 0:kr00_12.12
  Vector v15; // 0:kr14_12.12
  Vector v16; // 0:kr20_12.12
  Vector v17; // 0:kr34_12.12
  Vector v18; // 0:kr40_12.12
  Vector v19; // 0:kr54_12.12
  Vector v20; // 0:kr60_12.12
  Vector v21; // 0:kr74_12.12

  if ( h.m_pBinding->m_pData != 0 )
  {
    pMins->x = 3.4028235e38;
    v6 = 0;
    pMins->y = 3.4028235e38;
    pMins->z = 0.0;
    pMaxs->x = -3.4028235e38;
    pMaxs->y = -3.4028235e38;
    pMaxs->z = 0.0;
    m_pData = h.m_pBinding->m_pData;
    if ( h.m_pBinding->m_pData != 0 && *(m_pData + 6) > 0 )
      v6 = *m_pData;
    v14 = CModel::view_bbmin(v6);
    vSeqMin = v14;
    if ( v14.x == vec3_origin.x
      && vSeqMin.y == vec3_origin.y
      && v14.z == vec3_origin.z
      && (v17 = CModel::view_bbmax(v6), vSeqMax = v17, v17.x == vec3_origin.x)
      && vSeqMax.y == vec3_origin.y
      && v17.z == vec3_origin.z )
    {
      v18 = CModel::hull_min(v6);
      vSeqMin = v18;
      if ( v18.x == vec3_origin.x && vSeqMin.y == vec3_origin.y && v18.z == vec3_origin.z )
      {
        v21 = CModel::hull_max(v6);
        vSeqMax = v21;
        if ( v21.x == vec3_origin.x && vSeqMax.y == vec3_origin.y && v21.z == vec3_origin.z )
          goto LABEL_8;
      }
      v19 = CModel::hull_min(v6);
      *&vSeqMax.x = *&v19.x;
      pMins->z = v19.z;
      vSeqMax.z = v19.z;
      pMins->x = v19.x;
      pMins->y = vSeqMax.y;
      v20 = CModel::hull_max(v6);
      v10 = *&v20.x;
      z = v20.z;
    }
    else
    {
      v15 = CModel::view_bbmin(v6);
      *&vSeqMax.x = *&v15.x;
      pMins->z = v15.z;
      vSeqMax.z = v15.z;
      pMins->x = v15.x;
      pMins->y = vSeqMax.y;
      v16 = CModel::view_bbmax(v6);
      v10 = *&v16.x;
      z = v16.z;
    }
    *&vSeqMax.x = v10;
    vSeqMax.z = z;
    pMaxs->z = z;
    LODWORD(pMaxs->x) = v10;
    pMaxs->y = vSeqMax.y;
LABEL_8:
    v9 = CModel::pSeqdesc(v6, nSequence);
    (*(v9->_vptr_IBaseSequence + 24))(v9, &vSeqMin, &vSeqMax);
    pMins->x = fminf(vSeqMin.x, pMins->x);
    pMins->y = fminf(vSeqMin.y, pMins->y);
    pMins->z = fminf(vSeqMin.z, pMins->z);
    pMaxs->x = fmaxf(vSeqMax.x, pMaxs->x);
    pMaxs->y = fmaxf(vSeqMax.y, pMaxs->y);
    pMaxs->z = fmaxf(vSeqMax.z, pMaxs->z);
    return;
  }
  pMins->x = 0.0;
  pMins->y = 0.0;
  pMins->z = 0.0;
  pMaxs->x = 0.0;
  pMaxs->y = 0.0;
  pMaxs->z = 0.0;
}


// GetMDLRadius  (line 57, @0x0000000003154e00, libserver.so)  // inlines: CWeakHandle, FastSqrt, Init, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: GetMDLBoundingBox
float __fastcall GetMDLRadius(HModel h, HSequence nSequence)
{
  HModel ha; // [rsp+10h] [rbp-30h] BYREF
  Vector vecMins; // [rsp+20h] [rbp-20h] BYREF
  Vector vecMaxs; // [rsp+30h] [rbp-10h] BYREF

  ha.m_pBinding = h.m_pBinding->m_pData;
  GetMDLBoundingBox(&vecMins, &vecMaxs, &ha, nSequence);
  return fmaxf(
           fsqrt(((vecMins.x * vecMins.x) + (vecMins.y * vecMins.y)) + (vecMins.z * vecMins.z)),
           fsqrt(((vecMaxs.x * vecMaxs.x) + (vecMaxs.y * vecMaxs.y)) + (vecMaxs.z * vecMaxs.z)));
}


// GetMDLBoundingSphere  (line 74, @0x0000000003154e90, libserver.so)  // inlines: CWeakHandle, DistTo, FastSqrt, Init, Length, VectorAdd, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=
// calls: GetMDLBoundingBox
void __fastcall GetMDLBoundingSphere(Vector *pVecCenter, float *pRadius, HModel h, HSequence nSequence)
{
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t v8; // xmm5_4
  vec_t v9; // xmm4_4
  vec_t v10; // xmm3_4
  float v11; // xmm0_4
  HModel ha; // [rsp+10h] [rbp-40h] BYREF
  Vector vecMins; // [rsp+20h] [rbp-30h] BYREF
  Vector vecMaxs; // [rsp+30h] [rbp-20h] BYREF

  ha.m_pBinding = h.m_pBinding->m_pData;
  GetMDLBoundingBox(&vecMins, &vecMaxs, &ha, nSequence);
  y = vecMaxs.y;
  z = vecMaxs.z;
  v8 = (vecMins.x + vecMaxs.x) * 0.5;
  v9 = (vecMins.y + vecMaxs.y) * 0.5;
  v10 = (vecMins.z + vecMaxs.z) * 0.5;
  v11 = vecMaxs.x - v8;
  pVecCenter->x = v8;
  pVecCenter->y = v9;
  pVecCenter->z = v10;
  *pRadius = fsqrt(((v11 * v11) + ((y - v9) * (y - v9))) + ((z - v10) * (z - v10)));
}


// FindSequencePoseParameters  (line 87, @0x0000000003154f50, libserver.so)
// calls: CModel::pSeqdesc
void __fastcall FindSequencePoseParameters(const CModel *hdr, HSequence nSequence, bool *pPoseParameters, int nCount)
{
  CModel::pSeqdesc(hdr, nSequence);
}


// Model_CalcDefaultPoseParameters  (line 135, @0x0000000003154f60, libserver.so)
// calls: CModel::GetNumPoseParameters, CModel::pPoseParameter
void __fastcall Model_CalcDefaultPoseParameters(const CModel *pModel, float *pPoseParameter, int nCount)
{
  int NumPoseParameters; // eax
  int v7; // r12d
  __int64 i; // rbx
  const PoseParamDesc_t *v9; // rax
  float m_end; // xmm2_4

  NumPoseParameters = CModel::GetNumPoseParameters(pModel);
  v7 = NumPoseParameters;
  if ( NumPoseParameters <= nCount )
    nCount = NumPoseParameters;
  for ( i = 0; nCount > i; ++i )
  {
    while ( 1 )
    {
      pPoseParameter[i] = 0.5;
      if ( v7 > i )
      {
        v9 = CModel::pPoseParameter(pModel, i);
        if ( v9->m_start < 0.0 )
        {
          m_end = v9->m_end;
          if ( m_end > 0.0 )
            break;
        }
      }
      if ( nCount <= ++i )
        return;
    }
    pPoseParameter[i] = -v9->m_start / (m_end - v9->m_start);
  }
}


// Model_FindRandomAttachment  (line 162, @0x0000000003155000, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<unsigned char>, GrowMemory, Purge, RemoveAll, _V_strstr, operator[], strstr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CModel::FirstAttachmentHandle, CModel::NextAttachmentHandle, CModel::GetAttachmentName, strstr, CUtlMemory<unsigned char, int>::Grow, RandomInt, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// callers: Studio_FindRandomAttachment
AttachmentHandle_t __fastcall Model_FindRandomAttachment(const CModel *pModel, const char *pAttachmentName)
{
  AttachmentHandle_t i; // bl
  bool v5; // zf
  unsigned __int8 *v6; // r12
  const char *AttachmentName; // rax
  int m_Size; // eax
  AttachmentHandle_t result; // al
  AttachmentHandle_t v10; // [rsp+8h] [rbp-58h]
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > matchingAttachments; // [rsp+10h] [rbp-50h] BYREF

  if ( pModel == 0 )
    return 0;
  matchingAttachments.m_Size = 0;
  matchingAttachments.m_Memory.m_pMemory = 0;
  matchingAttachments.m_Memory.m_nAllocationCount = 0;
  matchingAttachments.m_Memory.m_nGrowSize = 0;
  for ( i = CModel::FirstAttachmentHandle(pModel); i != 0; i = CModel::NextAttachmentHandle(pModel, i) )
  {
    AttachmentName = CModel::GetAttachmentName(pModel, i);
    if ( strstr(AttachmentName, pAttachmentName) != 0 )
    {
      m_Size = matchingAttachments.m_Size;
      if ( matchingAttachments.m_Size == matchingAttachments.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<unsigned char,int>::Grow(&matchingAttachments.m_Memory, 1);
        m_Size = matchingAttachments.m_Size;
      }
      v5 = &matchingAttachments.m_Memory.m_pMemory[matchingAttachments.m_Size] == 0;
      v6 = &matchingAttachments.m_Memory.m_pMemory[matchingAttachments.m_Size];
      matchingAttachments.m_Size = m_Size + 1;
      if ( !v5 )
        *v6 = i;
    }
  }
  if ( matchingAttachments.m_Size <= 0 )
  {
    if ( (matchingAttachments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<unsigned char,int>::Purge(&matchingAttachments.m_Memory);
      if ( (matchingAttachments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned char,int>::Purge(&matchingAttachments.m_Memory);
    }
    return 0;
  }
  result = matchingAttachments.m_Memory.m_pMemory[RandomInt(0, (matchingAttachments.m_Size - 1))];
  if ( (matchingAttachments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v10 = result;
    CUtlMemory<unsigned char,int>::Purge(&matchingAttachments.m_Memory);
    result = v10;
    if ( (matchingAttachments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<unsigned char,int>::Purge(&matchingAttachments.m_Memory);
      return v10;
    }
  }
  return result;
}


