
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_physicsresourcehelpers.cpp  (line 0, @0x0000000001a6cfd0, libserver.so)  // inlines: CSceneObjectClassTypeDeclarator, Color, SetColor, __static_initialization_and_destruction_0
// strings: "phys_res"
// globals: UNSPECIFIED_LOGGING_COLOR, s_physResource
void __cdecl GLOBAL__sub_I_physicsresourcehelpers_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  s_physResource.m_pClassName = "phys_res";
  s_physResource.m_nClassID = -1;
}


// VPhysics2ShapeDef_t::GetBbox  (line 22, @0x00000000031a46b0, libserver.so)  // inlines: Count, GetBbox, GetPtr, GetRawPtr, Init, MakeInvalid, Max<float>, Min<float>, ResolveOffset, VectorMax, VectorMin, VectorMultiply, fpmax, fpmin, operator*, operator=, operator[], operator|=
// calls: AddPointToBounds
// callers: CModel::GetPhysicsBounds
AABB_t *__fastcall VPhysics2ShapeDef_t::GetBbox(AABB_t *__return_ptr retstr, const VPhysics2ShapeDef_t *const this)
{
  AABB_t *v2; // r15
  signed int m_nCount; // esi
  char *v4; // rdx
  float v5; // xmm13_4
  float v6; // xmm9_4
  float v7; // xmm11_4
  float v8; // xmm10_4
  float v9; // xmm8_4
  float v10; // xmm7_4
  int v11; // ecx
  float *v12; // rdx
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  signed int v22; // r8d
  char *v23; // rdi
  float x; // xmm13_4
  float y; // xmm11_4
  float z; // xmm10_4
  int32 m_nOffset; // edx
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  int v31; // esi
  float *v32; // rdx
  float v33; // xmm2_4
  float v34; // xmm3_4
  __int64 v35; // rax
  float v36; // xmm15_4
  float v37; // xmm14_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm12_4
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm3_4
  float v45; // xmm2_4
  char *v46; // r9
  int32 v47; // eax
  int v48; // esi
  __int64 v49; // r15
  char *v50; // r14
  int v51; // r12d
  int v52; // edx
  __int64 v53; // rax
  vec_t *v54; // rax
  vec_t v55; // xmm0_4
  vec_t v56; // xmm2_4
  float v57; // xmm5_4
  float v58; // xmm4_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float v62; // xmm0_4
  float v63; // xmm5_4
  float v64; // xmm4_4
  float v65; // xmm3_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  float v68; // xmm0_4
  signed int v69; // r9d
  float v70; // xmm11_4
  float v71; // xmm10_4
  float v72; // xmm9_4
  int32 v73; // edx
  float v74; // xmm8_4
  float v75; // xmm7_4
  float v76; // xmm6_4
  char *v77; // rcx
  int v78; // edi
  char *v79; // rsi
  _DWORD *v80; // rdx
  float v81; // xmm5_4
  signed __int64 v82; // rax
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm4_4
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm0_4
  float v89; // xmm2_4
  float v90; // xmm1_4
  float v91; // xmm0_4
  float *box; // [rsp+8h] [rbp-A8h]
  float box_12; // [rsp+14h] [rbp-9Ch]
  float box_16; // [rsp+18h] [rbp-98h]
  float box_20; // [rsp+1Ch] [rbp-94h]
  float v97; // [rsp+20h] [rbp-90h]
  _BYTE v98[12]; // [rsp+24h] [rbp-8Ch]
  float v99; // [rsp+30h] [rbp-80h]
  signed int v100; // [rsp+34h] [rbp-7Ch]
  __int64 v102; // [rsp+40h] [rbp-70h]
  Vector v; // [rsp+50h] [rbp-60h] BYREF
  Vector v104; // [rsp+60h] [rbp-50h] BYREF
  Vector v105; // [rsp+6Ch] [rbp-44h] BYREF

  v2 = retstr;
  m_nCount = this->m_spheres.m_nCount;
  retstr->m_vMinBounds.x = 3.4028235e38;
  retstr->m_vMinBounds.y = 3.4028235e38;
  retstr->m_vMinBounds.z = 3.4028235e38;
  retstr->m_vMaxBounds.x = -3.4028235e38;
  retstr->m_vMaxBounds.y = -3.4028235e38;
  retstr->m_vMaxBounds.z = -3.4028235e38;
  if ( m_nCount > 0 )
  {
    v4 = 0;
    v5 = -3.4028235e38;
    v6 = 3.4028235e38;
    v7 = -3.4028235e38;
    v8 = -3.4028235e38;
    v9 = 3.4028235e38;
    v10 = 3.4028235e38;
    if ( this->m_spheres.m_nOffset != 0 )
      v4 = this + this->m_spheres.m_nOffset;
    v11 = 0;
    v12 = (v4 + 16);
    while ( 1 )
    {
      v13 = *v12;
      ++v11;
      v12 += 6;
      v14 = *(v12 - 7);
      v15 = *(v12 - 5);
      v16 = fminf(*(v12 - 8) - v15, v10);
      v17 = fminf(v14 - v15, v9);
      v18 = fminf(v13 - v15, v6);
      v19 = fmaxf(*(v12 - 8) + v15, v8);
      retstr->m_vMinBounds.x = v16;
      v20 = fmaxf(v14 + v15, v7);
      retstr->m_vMinBounds.y = v17;
      v21 = fmaxf(v13 + v15, v5);
      retstr->m_vMinBounds.z = v18;
      retstr->m_vMaxBounds.x = v19;
      retstr->m_vMaxBounds.y = v20;
      retstr->m_vMaxBounds.z = v21;
      if ( v11 == m_nCount )
        break;
      v10 = v16;
      v9 = v17;
      v6 = v18;
      v8 = v19;
      v7 = v20;
      v5 = v21;
    }
  }
  v22 = this->m_capsules.m_nCount;
  if ( v22 > 0 )
  {
    v23 = 0;
    x = v2->m_vMinBounds.x;
    y = v2->m_vMinBounds.y;
    z = v2->m_vMinBounds.z;
    m_nOffset = this->m_capsules.m_nOffset;
    v28 = v2->m_vMaxBounds.x;
    v29 = v2->m_vMaxBounds.y;
    v30 = v2->m_vMaxBounds.z;
    if ( m_nOffset != 0 )
      v23 = &this->m_capsules + m_nOffset;
    v31 = 0;
    v32 = (v23 + 16);
    while ( 1 )
    {
      v33 = *v32;
      ++v31;
      v34 = *(v32 - 1);
      v35 = v32 - v23;
      v32 += 9;
      v36 = *(v32 - 6);
      v37 = *(v32 - 7);
      v38 = *(v32 - 8);
      v39 = *&v23[v35 + 16];
      v40 = fminf(fminf(*(v32 - 11), v38) - v39, x);
      v41 = fminf(fminf(v34, v37) - v39, y);
      v42 = fminf(fminf(v33, v36) - v39, z);
      v43 = fmaxf(fmaxf(*(v32 - 11), v38) + v39, v28);
      v2->m_vMinBounds.x = v40;
      v44 = fmaxf(fmaxf(v34, v37) + v39, v29);
      v2->m_vMinBounds.y = v41;
      v45 = fmaxf(fmaxf(v33, v36) + v39, v30);
      v2->m_vMinBounds.z = v42;
      v2->m_vMaxBounds.x = v43;
      v2->m_vMaxBounds.y = v44;
      v2->m_vMaxBounds.z = v45;
      if ( v31 == v22 )
        break;
      x = v40;
      y = v41;
      z = v42;
      v28 = v43;
      v29 = v44;
      v30 = v45;
    }
  }
  if ( this->m_hulls.m_nCount > 0 )
  {
    *&v98[8] = 0;
    v100 = 0;
    v99 = v2->m_vMinBounds.x;
    *v98 = LODWORD(v2->m_vMinBounds.y);
    box = &v2->m_vMinBounds.x;
    v97 = v2->m_vMinBounds.z;
    box_12 = v2->m_vMaxBounds.x;
    box_20 = v2->m_vMaxBounds.y;
    for ( box_16 = v2->m_vMaxBounds.z; ; box_16 = v68 )
    {
      v46 = 0;
      v47 = this->m_hulls.m_nOffset;
      if ( v47 != 0 )
        v46 = &this->m_hulls + v47;
      v104.x = 3.4028235e38;
      v104.y = 3.4028235e38;
      v104.z = 3.4028235e38;
      v105.x = -3.4028235e38;
      v105.y = -3.4028235e38;
      v48 = *&v46[*&v98[4] + 28];
      v105.z = -3.4028235e38;
      if ( v48 <= 0 )
      {
        v59 = 3.4028235e38;
        v62 = -3.4028235e38;
        v61 = -3.4028235e38;
        v58 = 3.4028235e38;
        v57 = 3.4028235e38;
        v60 = -3.4028235e38;
      }
      else
      {
        v49 = 0;
        v102 = &v46[*&v98[4] + 24];
        v50 = &v46[*&v98[4]];
        v51 = 0;
        do
        {
          v52 = *(v50 + 6);
          v53 = 0;
          if ( v52 != 0 )
            v53 = v102 + v52;
          v54 = (v49 + v53);
          ++v51;
          v55 = v54[2];
          v49 += 12;
          v56 = *v54;
          v.y = v54[1];
          v.z = v55;
          v.x = v56;
          AddPointToBounds(&v, &v104, &v105);
        }
        while ( v51 < *(v50 + 7) );
        v57 = v104.x;
        v58 = v104.y;
        v59 = v104.z;
        v60 = v105.x;
        v61 = v105.y;
        v62 = v105.z;
      }
      ++v100;
      v63 = fminf(v57, v99);
      v64 = fminf(v58, *v98);
      v65 = fminf(v59, v97);
      v66 = fmaxf(v60, box_12);
      *box = v63;
      v67 = fmaxf(v61, box_20);
      box[1] = v64;
      v68 = fmaxf(v62, box_16);
      box[2] = v65;
      box[3] = v66;
      *&v98[4] += 156LL;
      box[4] = v67;
      box[5] = v68;
      if ( v100 >= this->m_hulls.m_nCount )
        break;
      v99 = v63;
      *v98 = v64;
      v97 = v65;
      box_12 = v66;
      box_20 = v67;
    }
    v2 = box;
  }
  v69 = this->m_meshes.m_nCount;
  if ( v69 > 0 )
  {
    v70 = v2->m_vMinBounds.x;
    v71 = v2->m_vMinBounds.y;
    v72 = v2->m_vMinBounds.z;
    v73 = this->m_meshes.m_nOffset;
    v74 = v2->m_vMaxBounds.x;
    v75 = v2->m_vMaxBounds.y;
    v76 = v2->m_vMaxBounds.z;
    v77 = 0;
    if ( v73 != 0 )
      v77 = &this->m_meshes + v73;
    v78 = 0;
    v79 = v77 + 20;
    v80 = v77 + 8;
    while ( 1 )
    {
      v81 = *v80;
      ++v78;
      v82 = v80 - (v77 + 8);
      v83 = *(v80 + 1);
      v80 += 19;
      v84 = fminf(v81, v70);
      v85 = fminf(v83, v71);
      v86 = *&v79[v82 + 4];
      v87 = fminf(*(v80 - 17), v72);
      v88 = *&v79[v82 + 8];
      v89 = fmaxf(*&v79[v82], v74);
      v2->m_vMinBounds.x = v84;
      v90 = fmaxf(v86, v75);
      v2->m_vMinBounds.y = v85;
      v91 = fmaxf(v88, v76);
      v2->m_vMinBounds.z = v87;
      v2->m_vMaxBounds.x = v89;
      v2->m_vMaxBounds.y = v90;
      v2->m_vMaxBounds.z = v91;
      if ( v78 == v69 )
        break;
      v70 = v84;
      v71 = v85;
      v72 = v87;
      v74 = v89;
      v75 = v90;
      v76 = v91;
    }
  }
  return v2;
}


// PrintList  (line 45, @0x00000000031a4c70, libserver.so)  // inlines: GetPtr, GetRawPtr, ResolveOffset, V_memcpy, memcpy, operator[]
// calls: strlen, memcpy
void __fastcall PrintList(
        char *pBuffer,
        int nBufferSize,
        const CResourceArray<CResourceString> *const interactAsStrings)
{
  char *v4; // r12
  __int64 v5; // rbx
  bool v6; // zf
  const char *v7; // rax
  const char *v8; // r14
  int v9; // eax
  const char *v10; // rsi
  size_t v11; // r15
  int v12; // r8d
  char *v13; // rcx
  char *v14; // rax
  char *v15; // rax
  __int64 v16; // rdx
  char *pBufferEnd; // [rsp+8h] [rbp-38h]

  v4 = pBuffer;
  pBufferEnd = &pBuffer[nBufferSize];
  if ( interactAsStrings->m_nCount > 0 )
  {
    v5 = 0;
    do
    {
      v14 = 0;
      if ( interactAsStrings->m_nOffset != 0 )
        v14 = interactAsStrings + interactAsStrings->m_nOffset;
      v15 = &v14[4 * v5];
      v16 = *v15;
      if ( v16 == 0 || (v6 = &v15[v16] == 0, v7 = &v15[v16], v8 = v7, v6) )
      {
        v11 = 0;
        v12 = 0;
        v10 = "";
        if ( pBufferEnd < v4 + 3 )
          break;
      }
      else
      {
        v9 = strlen(v7);
        v10 = v8;
        v11 = v9;
        v12 = v9;
        if ( pBufferEnd < &v4[v9 + 3] )
          break;
      }
      v13 = v4;
      if ( v5 != 0 )
      {
        v13 = v4 + 1;
        *v4 = 44;
      }
      if ( v12 < 0 )
        __debugbreak();
      v4 = memcpy(v13, v10, v11) + v11;
      ++v5;
    }
    while ( v5 < interactAsStrings->m_nCount );
  }
  *v4 = 0;
}


// PrintList  (line 69, @0x00000000031a4d60, libserver.so)  // inlines: V_memcpy, V_strlen, memcpy
// calls: strlen, memcpy
void __fastcall PrintList(char *pBuffer, int nBufferSize, IPhysIntersectionDictionary *pDict, uint64 nLayers)
{
  unsigned __int64 v4; // r15
  char *v7; // rbx
  const char *v8; // rax
  const char *v9; // rsi
  int v10; // eax
  size_t v11; // r14
  int v12; // edx
  __int64 v13; // rax
  char *pBufferEnd; // [rsp+10h] [rbp-40h]
  const char *pStr; // [rsp+18h] [rbp-38h]

  v4 = 0;
  v7 = pBuffer;
  pBufferEnd = &pBuffer[nBufferSize];
  do
  {
    while ( !_bittest64(&nLayers, v4) )
    {
      v4 = (v4 + 1);
      if ( v4 == 64 )
        goto LABEL_12;
    }
    v8 = (*(pDict->_vptr_IPhysIntersectionDictionary + 10))(pDict, v4);
    v9 = v8;
    if ( v8 != 0 )
    {
      pStr = v8;
      v10 = strlen(v8);
      v9 = pStr;
      v11 = v10;
      v12 = v10;
      v13 = v10 + 3LL;
    }
    else
    {
      v13 = 3;
      v11 = 0;
      v12 = 0;
    }
    if ( pBufferEnd < &v7[v13] )
      break;
    if ( pBuffer < v7 )
      *v7++ = 44;
    if ( v12 < 0 )
      __debugbreak();
    v4 = (v4 + 1);
    memcpy(v7, v9, v11);
    v7 += v11;
  }
  while ( v4 != 64 );
LABEL_12:
  *v7 = 0;
}


// ParseInteractionLayerList  (line 97, @0x00000000031a7710, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, Purge, Purge_FixedGrowable, V_strlen, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlTokenizer, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: strlen, CUtlBuffer::CUtlBuffer, CUtlTokenizer::CUtlTokenizer, CUtlTokenizer::SetTokenDelimiters, CUtlTokenReference::CUtlTokenReference, CUtlTokenizer::ConsumeIdentifier, CUtlTokenReference::AsString, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlTokenReference::~CUtlTokenReference, CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll (21 total)
// strings: "(None)", " \t\n\r,;|"
void __fastcall ParseInteractionLayerList(
        const char *pList,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const out)
{
  int v4; // eax
  const char *v5; // rax
  __int64 m_Size; // r12
  int v7; // eax
  CUtlString *v8; // r12
  const char *v9; // rax
  CUtlString v10; // [rsp+10h] [rbp-380h] BYREF
  CUtlTokenReference token; // [rsp+20h] [rbp-370h] BYREF
  CUtlBuffer strBuffer; // [rsp+50h] [rbp-340h] BYREF
  CUtlTokenizer tokenizer; // [rsp+A0h] [rbp-2F0h] BYREF
  unsigned __int64 v14; // [rsp+358h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( pList == 0 || *pList == 0 )
    return;
  v4 = strlen(pList);
  CUtlBuffer::CUtlBuffer(&strBuffer, pList, v4, 9);
  CUtlTokenizer::CUtlTokenizer(&tokenizer, &strBuffer, "(None)");
  CUtlTokenizer::SetTokenDelimiters(&tokenizer, " \t\n\r,;|");
  CUtlTokenReference::CUtlTokenReference(&token);
  while ( CUtlTokenizer::ConsumeIdentifier(&tokenizer, &token) )
  {
    while ( 1 )
    {
      v5 = CUtlTokenReference::AsString(&token);
      v10.m_pString = 0;
      CUtlString::Set(&v10, v5);
      m_Size = out->m_Size;
      v7 = out->m_Size;
      if ( m_Size == out->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&out->m_Memory, 1);
        v7 = out->m_Size;
      }
      out->m_Size = v7 + 1;
      v8 = &out->m_Memory.m_pMemory[m_Size];
      if ( v8 != 0 )
      {
        v8->m_pString = 0;
        v9 = CUtlString::Get(&v10);
        CUtlString::Set(v8, v9);
      }
      if ( v10.m_pString == 0 )
        break;
      CUtlString::FreeMemoryBlock(&v10);
      if ( !CUtlTokenizer::ConsumeIdentifier(&tokenizer, &token) )
        goto LABEL_11;
    }
  }
LABEL_11:
  CUtlTokenReference::~CUtlTokenReference(&token);
  CUtlVectorBase<TokenWarning_t,CUtlMemory<TokenWarning_t,int>>::RemoveAll(&tokenizer.m_Warnings);
  if ( (tokenizer.m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<TokenWarning_t,int>::Purge(&tokenizer.m_Warnings.m_Memory);
    if ( (tokenizer.m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<TokenWarning_t,int>::Purge(&tokenizer.m_Warnings.m_Memory);
      if ( tokenizer.m_Filename.m_pString == 0 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  if ( tokenizer.m_Filename.m_pString != 0 )
LABEL_13:
    CUtlString::FreeMemoryBlock(&tokenizer.m_Filename);
LABEL_14:
  CUtlTokenReference::~CUtlTokenReference(&tokenizer.m_LastConsumedToken);
  CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveAll(&tokenizer.m_LookaheadTokens);
  CUtlMemory<CUtlTokenReference,int>::ConvertToExternalMemory(
    &tokenizer.m_LookaheadTokens.m_Memory,
    &tokenizer.m_LookaheadTokens.m_Memory.m_FixedMemory,
    8,
    0,
    1,
    0x3FFFFFFFu);
  if ( (tokenizer.m_LookaheadTokens.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlTokenReference,int>::Purge(&tokenizer.m_LookaheadTokens.m_Memory);
  CUtlMemory<unsigned char,int>::Purge(&strBuffer.m_Memory);
}


// CreateSphereAggregateData  (line 113, @0x00000000031a8240, libserver.so)  // inlines: AddMultipleToTail, AddRef<CPhysAggregateData>, Allocate<CPhysAggregateData>, Allocate<RnSphereDesc_t>, Allocate<VPhysXBodyPart_t>, Allocate<unsigned int>, AllocateUnaligned<CPhysAggregateData>, AllocateUnaligned<RnSphereDesc_t>, AllocateUnaligned<VPhysXBodyPart_t>, AllocateUnaligned<unsigned int>, CResourceArray, CResourceArrayBase, CResourcePointer, CResourcePointerBase, CSmartPtr, CUnlockedResource, Construct<CPhysAggregateData>, Construct<RnSphereDesc_t>, Construct<VPhysXBodyPart_t>, Detach, EnsureCount, GetDataPtr, GetPtr, InsertMultipleBefore, Release<CPhysAggregateData>, RnSphereDesc_t, RnSphere_t, VPhysXBodyPart_t, VPhysics2ShapeDef_t, Write<unsigned int>, operator CPhysAggregateData*, operator RnSphereDesc_t*, operator VPhysXBodyPart_t*, operator unsigned int*, operator=
// calls: CResourceStreamFixed::CResourceStreamFixed, CResourceStream::Align, CResourceStream::AllocateBytes, CPhysAggregateData::CPhysAggregateData, CPhysAggregateData::AddRef, CPhysAggregateData::Release, CResourceStreamFixed::~CResourceStreamFixed, CUtlVectorBase<const VPhysXBodyPart_t*, CUtlMemoryConservative<const VPhysXBodyPart_t*> >::GrowVector, CUtlVectorBase<const VPhysXBodyPart_t*, CUtlMemoryConservative<const VPhysXBodyPart_t*> >::ShiftElementsRight, _Unwind_Resume
CSmartPtr<CPhysAggregateData,CRefCountAccessor> __fastcall CreateSphereAggregateData(
        float a1,
        float flRadius,
        const CPhysAggregateData **a3)
{
  unsigned int v4; // eax
  uint v5; // eax
  const CPhysAggregateData *v6; // rbx
  int m_Size; // r13d
  unsigned int v8; // eax
  const VPhysXBodyPart_t *v9; // r13
  uint v10; // eax
  uint8 *v11; // rdx
  unsigned int v12; // eax
  uint v13; // eax
  uint8 *v14; // rax
  vec_t z; // edx
  int v16; // edx
  unsigned int v17; // eax
  uint8 *v18; // rdx
  uint v19; // eax
  CResourceStreamFixed stream; // [rsp+10h] [rbp-60h] BYREF

  CResourceStreamFixed::CResourceStreamFixed(&stream, 0x128u);
  CResourceStream::Align(&stream, 0x10u, 0);
  v4 = CResourceStream::AllocateBytes(&stream, 0xC0u);
  v5 = v4 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed < v5 )
  {
    v6 = 0;
  }
  else
  {
    v6 = &stream.m_pData[v5];
    if ( v6 != 0 )
      CPhysAggregateData::CPhysAggregateData(&stream.m_pData[v5], 0);
    m_Size = v6->m_Parts.m_Size;
    if ( m_Size <= 0 )
    {
      CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::GrowVector(
        &v6->m_Parts,
        1 - m_Size);
      CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::ShiftElementsRight(
        &v6->m_Parts,
        m_Size,
        1 - m_Size);
    }
  }
  CResourceStream::Align(&stream, 4u, 0);
  v8 = CResourceStream::AllocateBytes(&stream, 0x4Cu);
  v9 = 0;
  v10 = v8 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v10 )
  {
    v11 = &stream.m_pData[v10];
    v9 = v11;
    if ( v11 != 0 )
    {
      *(v11 + 2) = 0;
      *(v11 + 3) = 0;
      *(v11 + 4) = 0;
      *(v11 + 5) = 0;
      *(v11 + 6) = 0;
      *(v11 + 7) = 0;
      *(v11 + 8) = 0;
      *(v11 + 9) = 0;
      *(v11 + 10) = 0;
      *(v11 + 11) = 0;
      *(v11 + 12) = 0;
      *(v11 + 13) = 0;
      *(v11 + 14) = 0;
    }
  }
  CResourceStream::Align(&stream, 4u, 0);
  v12 = CResourceStream::AllocateBytes(&stream, 0x18u);
  v13 = v12 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed < v13 )
  {
    v16 = 0;
    v14 = 0;
  }
  else
  {
    v14 = &stream.m_pData[v13];
    if ( v14 != 0 )
    {
      *(v14 + 5) = 0;
      z = vec3_origin.z;
      *(v14 + 1) = *&vec3_origin.x;
      *(v14 + 4) = z;
      v16 = v14;
    }
    else
    {
      v16 = 0;
    }
  }
  v9->m_rnShape.m_spheres.m_nCount = 1;
  v9->m_rnShape.m_spheres.m_nOffset = v16 - (v9 + 8);
  *(v14 + 5) = a1;
  *v6->m_Parts.m_Memory.m_pMemory = v9;
  CResourceStream::Align(&stream, 4u, 0);
  v17 = CResourceStream::AllocateBytes(&stream, 4u);
  v18 = 0;
  v19 = v17 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v19 )
    v18 = &stream.m_pData[v19];
  *v18 = 538386455;
  *a3 = 0;
  stream.m_bOwnMemory = 0;
  CPhysAggregateData::AddRef(v6);
  if ( *a3 != 0 )
    CPhysAggregateData::Release(*a3);
  *a3 = v6;
  CResourceStreamFixed::~CResourceStreamFixed(&stream);
  return a3;
}


// CreateBoxAggregateData  (line 132, @0x00000000031a84b0, libserver.so)  // inlines: AddMultipleToTail, AddRef<CPhysAggregateData>, Allocate<CPhysAggregateData>, Allocate<RnHullDesc_t>, Allocate<VPhysXBodyPart_t>, Allocate<short unsigned int>, AllocateUnaligned<CPhysAggregateData>, AllocateUnaligned<RnHullDesc_t>, AllocateUnaligned<VPhysXBodyPart_t>, AllocateUnaligned<short unsigned int>, CResourceArray, CResourceArrayBase, CResourcePointer, CResourcePointerBase, CSmartPtr, CUnlockedResource, Construct<CPhysAggregateData>, Construct<RnHullDesc_t>, Construct<VPhysXBodyPart_t>, Detach, EnsureCount, GetDataPtr, GetPtr, InsertMultipleBefore, Release<CPhysAggregateData>, RnHullDesc_t, RnHull_t, VPhysXBodyPart_t, VPhysics2ShapeDef_t, Write<short unsigned int>, operator CPhysAggregateData*, operator RnHullDesc_t*, operator VPhysXBodyPart_t*, operator short unsigned int*, operator=
// calls: CResourceStreamFixed::CResourceStreamFixed, CResourceStream::Align, CResourceStream::AllocateBytes, CPhysAggregateData::CPhysAggregateData, CPhysAggregateData::AddRef, CPhysAggregateData::Release, CResourceStreamFixed::~CResourceStreamFixed, CUtlVectorBase<const VPhysXBodyPart_t*, CUtlMemoryConservative<const VPhysXBodyPart_t*> >::GrowVector, CUtlVectorBase<const VPhysXBodyPart_t*, CUtlMemoryConservative<const VPhysXBodyPart_t*> >::ShiftElementsRight, _Unwind_Resume
CSmartPtr<CPhysAggregateData,CRefCountAccessor> __fastcall CreateBoxAggregateData(
        const CPhysAggregateData **a1,
        const Vector *const vExtents)
{
  unsigned int v4; // eax
  uint v5; // eax
  const CPhysAggregateData *v6; // r12
  int m_Size; // r13d
  unsigned int v8; // eax
  const VPhysXBodyPart_t *v9; // r13
  uint v10; // eax
  uint8 *v11; // rdx
  unsigned int v12; // eax
  uint v13; // eax
  uint8 *v14; // rax
  int v15; // edx
  unsigned int v16; // eax
  uint8 *v17; // rdx
  uint v18; // eax
  CResourceStreamFixed stream; // [rsp+10h] [rbp-60h] BYREF

  CResourceStreamFixed::CResourceStreamFixed(&stream, 0x2D0u);
  CResourceStream::Align(&stream, 0x10u, 0);
  v4 = CResourceStream::AllocateBytes(&stream, 0xC0u);
  v5 = v4 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed < v5 )
  {
    v6 = 0;
  }
  else
  {
    v6 = &stream.m_pData[v5];
    if ( v6 != 0 )
      CPhysAggregateData::CPhysAggregateData(&stream.m_pData[v5], 0);
    m_Size = v6->m_Parts.m_Size;
    if ( m_Size <= 0 )
    {
      CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::GrowVector(
        &v6->m_Parts,
        1 - m_Size);
      CUtlVectorBase<VPhysXBodyPart_t const*,CUtlMemoryConservative<VPhysXBodyPart_t const*>>::ShiftElementsRight(
        &v6->m_Parts,
        m_Size,
        1 - m_Size);
    }
  }
  CResourceStream::Align(&stream, 4u, 0);
  v8 = CResourceStream::AllocateBytes(&stream, 0x4Cu);
  v9 = 0;
  v10 = v8 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v10 )
  {
    v11 = &stream.m_pData[v10];
    v9 = v11;
    if ( v11 != 0 )
    {
      *(v11 + 2) = 0;
      *(v11 + 3) = 0;
      *(v11 + 4) = 0;
      *(v11 + 5) = 0;
      *(v11 + 6) = 0;
      *(v11 + 7) = 0;
      *(v11 + 8) = 0;
      *(v11 + 9) = 0;
      *(v11 + 10) = 0;
      *(v11 + 11) = 0;
      *(v11 + 12) = 0;
      *(v11 + 13) = 0;
      *(v11 + 14) = 0;
    }
  }
  CResourceStream::Align(&stream, 4u, 0);
  v12 = CResourceStream::AllocateBytes(&stream, 0x9Cu);
  v13 = v12 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed < v13 )
  {
    v15 = 0;
    v14 = 0;
  }
  else
  {
    v14 = &stream.m_pData[v13];
    if ( v14 != 0 )
    {
      *(v14 + 6) = 0;
      v15 = v14;
      *(v14 + 7) = 0;
      *(v14 + 8) = 0;
      *(v14 + 9) = 0;
      *(v14 + 10) = 0;
      *(v14 + 11) = 0;
      *(v14 + 12) = 0;
      *(v14 + 13) = 0;
    }
    else
    {
      v15 = 0;
    }
  }
  v9->m_rnShape.m_hulls.m_nCount = 1;
  v9->m_rnShape.m_hulls.m_nOffset = v15 - (v9 + 24);
  (*(g_pVPhysics2->_vptr_IAppSystem + 28))(g_pVPhysics2, vExtents, &vec3_origin, &stream, v14 + 8);
  *v6->m_Parts.m_Memory.m_pMemory = v9;
  CResourceStream::Align(&stream, 2u, 0);
  v16 = CResourceStream::AllocateBytes(&stream, 2u);
  v17 = 0;
  v18 = v16 - LODWORD(stream.m_pData);
  if ( stream.m_nUsed >= v18 )
    v17 = &stream.m_pData[v18];
  *v17 = 8215;
  *a1 = 0;
  stream.m_bOwnMemory = 0;
  CPhysAggregateData::AddRef(v6);
  if ( *a1 != 0 )
    CPhysAggregateData::Release(*a1);
  *a1 = v6;
  CResourceStreamFixed::~CResourceStreamFixed(&stream);
  return a1;
}


// VPhysics2ShapeDef_t::GetTriangulation  (line 151, @0x00000000031a4e30, libserver.so)  // inlines: Add, CCollectorBuffer, Count, GetPtr, GetRawPtr, GetTriangulation, ResolveOffset, VectorAdd, operator+, operator=, operator[]
// calls: RnCapsule_t::GetTriangulation
int __fastcall VPhysics2ShapeDef_t::GetTriangulation(const VPhysics2ShapeDef_t *const this, Vector *pVerts)
{
  __int64 v3; // rbx
  char *v4; // rax
  float *v5; // rax
  Vector *v6; // rcx
  __int64 v7; // rsi
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  Vector *v12; // r11
  Vector *v13; // r10
  Vector *v14; // r9
  Vector *v15; // r8
  Vector *v16; // rdi
  float v17; // xmm1_4
  signed __int64 v18; // rdx
  float v19; // xmm3_4
  float v20; // xmm4_4
  vec_t v21; // xmm10_4
  float v22; // xmm5_4
  vec_t v23; // xmm2_4
  float v24; // xmm6_4
  float v25; // xmm1_4
  float v26; // xmm10_4
  float v27; // xmm1_4
  float v28; // xmm10_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm5_4
  float v32; // xmm1_4
  signed __int64 v33; // rdx
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  int v38; // eax
  int v39; // r15d
  __int64 v40; // r13
  signed int v41; // ebx
  int32 m_nOffset; // ecx
  char *v43; // rax
  int Triangulation; // eax
  char *v45; // rdx
  __int64 v46; // rax
  char *v47; // rdx
  int v48; // r8d
  __int64 v49; // r13
  _DWORD *v50; // r11
  int v51; // r10d
  _DWORD *v52; // r12
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rax
  char *v56; // rcx
  int v57; // ebx
  int v58; // edi
  char *v59; // rsi
  __int64 v60; // rcx
  vec_t *v61; // rdi
  char *v62; // rcx
  __int64 v63; // rcx
  Vector *j; // rax
  char *v65; // r8
  int v66; // r15d
  int v67; // r15d
  __int64 v68; // rsi
  char *v69; // r8
  vec_t *v70; // rsi
  vec_t v71; // xmm0_4
  char *v72; // rsi
  int v73; // r8d
  __int64 v74; // rsi
  char *v75; // r8
  int v76; // r9d
  vec_t *v77; // rsi
  char *v78; // r9
  __int64 v79; // r9
  __int64 v80; // rsi
  __int64 v81; // r15
  char *v82; // r8
  __int64 v83; // rax
  char *v84; // r8
  int v85; // eax
  Vector *v86; // rbx
  __int64 v87; // r11
  int k; // r10d
  int v89; // eax
  __int64 v90; // rdi
  __int64 v91; // rdi
  Vector *v92; // rax
  __int64 v93; // rdx
  int v94; // r9d
  __int64 v95; // rsi
  __int64 v96; // rcx
  vec_t *v97; // rcx
  int v98; // eax
  __int64 v100; // [rsp+8h] [rbp-98h]
  signed int i_0; // [rsp+10h] [rbp-90h]
  int v102; // [rsp+1Ch] [rbp-84h]
  signed int i; // [rsp+20h] [rbp-80h]
  signed int ia; // [rsp+20h] [rbp-80h]
  _DWORD v106[8]; // [rsp+38h] [rbp-68h]
  _DWORD v107[18]; // [rsp+58h] [rbp-48h]

  if ( this->m_spheres.m_nCount <= 0 )
  {
    v102 = 0;
  }
  else
  {
    i = 0;
    v3 = 0;
    do
    {
      v4 = 0;
      if ( this->m_spheres.m_nOffset != 0 )
        v4 = this + this->m_spheres.m_nOffset;
      v5 = &v4[v3];
      if ( pVerts != 0 )
      {
        v6 = pVerts;
        v7 = 0;
        v8 = 0.0;
        v106[0] = 0;
        v9 = 1.0;
        v10 = 1.0;
        v106[1] = -1082130432;
        v11 = 0.0;
        v106[2] = 0;
        v12 = pVerts + 1;
        v106[6] = 1065353216;
        v13 = pVerts + 2;
        v106[7] = 0;
        v14 = pVerts + 3;
        v107[0] = -1082130432;
        v15 = pVerts + 4;
        v107[1] = 0;
        v16 = pVerts + 5;
        v107[2] = 1065353216;
        while ( 1 )
        {
          v17 = v5[5];
          v18 = v6 - pVerts;
          v6 += 6;
          v19 = v11 * v17;
          v20 = v10 * v17;
          v21 = v5[4] + 0.0;
          v22 = v17 * v9;
          v23 = v5[2] - v17;
          v24 = v17 * v8;
          v6[-6].y = v5[3] + 0.0;
          v6[-6].z = v21;
          v6[-6].x = v23;
          v25 = v5[4] + v19;
          v26 = v5[2] + 0.0;
          *(&v12->y + v18) = v5[3] + v20;
          *(&v12->z + v18) = v25;
          *(&v12->x + v18) = v26;
          v27 = v5[4] + v22;
          v28 = v5[2] + 0.0;
          *(&v13->y + v18) = v5[3] + v24;
          *(&v13->z + v18) = v27;
          *(&v13->x + v18) = v28;
          v29 = v5[4] + 0.0;
          v30 = v5[5] + v5[2];
          *(&v14->y + v18) = v5[3] + 0.0;
          *(&v14->z + v18) = v29;
          *(&v14->x + v18) = v30;
          v31 = v22 + v5[4];
          v32 = v5[2] + 0.0;
          *(&v15->y + v18) = v24 + v5[3];
          *(&v15->z + v18) = v31;
          *(&v15->x + v18) = v32;
          v33 = v6 - pVerts;
          v34 = v20 + v5[3];
          v35 = v19 + v5[4];
          *(&v16[-6].x + v33) = v5[2] + 0.0;
          *(&v16[-5] + v33 - 8) = v34;
          *(&v16[-5] + v33 - 4) = v35;
          if ( v7 == 3 )
            break;
          v36 = *&v106[v7];
          v11 = v9;
          v10 = v8;
          v37 = *&v107[v7++];
          v9 = v36;
          v8 = v37;
        }
        pVerts += 24;
      }
      ++i;
      v38 = v3 + 24;
      v3 += 24;
    }
    while ( i < this->m_spheres.m_nCount );
    v102 = v38;
  }
  if ( this->m_capsules.m_nCount > 0 )
  {
    v39 = v102;
    v40 = 0;
    v41 = 0;
    do
    {
      m_nOffset = this->m_capsules.m_nOffset;
      v43 = 0;
      if ( m_nOffset != 0 )
        v43 = &this->m_capsules + m_nOffset;
      Triangulation = RnCapsule_t::GetTriangulation(&v43[v40 + 8], pVerts);
      if ( pVerts != 0 )
        pVerts += Triangulation;
      ++v41;
      v39 += Triangulation;
      v40 += 36;
    }
    while ( v41 < this->m_capsules.m_nCount );
    v102 = v39;
  }
  if ( this->m_hulls.m_nCount > 0 )
  {
    v100 = 0;
    i_0 = 0;
    do
    {
      v45 = 0;
      v46 = this->m_hulls.m_nOffset;
      if ( v46 != 0 )
        v45 = &this->m_hulls + v46;
      v47 = &v45[v100];
      if ( *(v47 + 13) <= 0 )
      {
        v51 = 0;
      }
      else
      {
        v48 = *(v47 + 10);
        v49 = 0;
        v50 = v47 + 40;
        v51 = 0;
        v52 = v47 + 24;
        do
        {
          v53 = *(v47 + 12);
          v54 = 0;
          if ( v53 != 0 )
            v54 = &v47[v53 + 48];
          v55 = *(v54 + v49);
          v56 = 0;
          v57 = v55;
          if ( v48 != 0 )
            v56 = v50 + v48;
          v58 = *(v47 + 6);
          v59 = 0;
          v60 = v56[4 * v55 + 2];
          if ( v58 != 0 )
            v59 = v52 + v58;
          v61 = &v59[12 * v60];
          v62 = 0;
          if ( v48 != 0 )
            v62 = v50 + v48;
          v63 = v62[4 * v55];
          if ( v55 != v63 )
          {
            for ( j = &pVerts[v51 + 2]; ; j += 3 )
            {
              v78 = 0;
              if ( v48 != 0 )
                v78 = v50 + v48;
              v79 = v78[4 * v63];
              v80 = 4 * v63;
              v63 = v79;
              if ( v57 == v79 )
                break;
              if ( pVerts != 0 )
              {
                v65 = 0;
                j[-2].x = *v61;
                j[-2].y = v61[1];
                j[-2].z = v61[2];
                v66 = *(v47 + 10);
                if ( v66 != 0 )
                  v65 = v50 + v66;
                v67 = *(v47 + 6);
                v68 = v65[v80 + 2];
                v69 = 0;
                if ( v67 != 0 )
                  v69 = v52 + v67;
                v70 = &v69[12 * v68];
                j[-1].x = *v70;
                j[-1].y = v70[1];
                v71 = v70[2];
                v72 = 0;
                j[-1].z = v71;
                v73 = *(v47 + 10);
                if ( v73 != 0 )
                  v72 = v50 + v73;
                v74 = v72[4 * v79 + 2];
                v75 = 0;
                v76 = *(v47 + 6);
                if ( v76 != 0 )
                  v75 = v52 + v76;
                v77 = &v75[12 * v74];
                j->x = *v77;
                j->y = v77[1];
                j->z = v77[2];
                v48 = *(v47 + 10);
              }
              v51 += 3;
            }
          }
          ++v49;
        }
        while ( v49 < *(v47 + 13) );
      }
      if ( pVerts != 0 )
        pVerts += v51;
      ++i_0;
      v102 += v51;
      v100 += 156;
    }
    while ( i_0 < this->m_hulls.m_nCount );
  }
  if ( this->m_meshes.m_nCount > 0 )
  {
    v81 = 0;
    ia = 0;
    do
    {
      v82 = 0;
      v83 = this->m_meshes.m_nOffset;
      if ( v83 != 0 )
        v82 = &this->m_meshes + v83;
      v84 = &v82[v81];
      v85 = *(v84 + 13);
      if ( pVerts != 0 )
      {
        if ( v85 > 0 )
        {
          v86 = pVerts;
          v87 = 0;
          for ( k = 0; k < v85; ++k )
          {
            v89 = *(v84 + 12);
            v90 = 0;
            if ( v89 != 0 )
              v90 = &v84[v89 + 48];
            v91 = v87 + v90;
            v92 = v86;
            v93 = 0;
            do
            {
              v94 = *(v84 + 10);
              v95 = 0;
              v96 = *(v91 + v93);
              if ( v94 != 0 )
                v95 = &v84[v94 + 40];
              v93 += 4;
              ++v92;
              v97 = (v95 + 12 * v96);
              v92[-1].x = *v97;
              v92[-1].y = v97[1];
              v92[-1].z = v97[2];
            }
            while ( v93 != 12 );
            v85 = *(v84 + 13);
            v86 += 3;
            v87 += 12;
          }
        }
        v98 = 3 * v85;
        pVerts += v98;
      }
      else
      {
        v98 = 3 * v85;
      }
      ++ia;
      v81 += 76;
      v102 += v98;
    }
    while ( ia < this->m_meshes.m_nCount );
  }
  return v102;
}


// FindBodyPartByHash  (line 193, @0x00000000031a5460, libserver.so)
int __fastcall FindBodyPartByHash(uint nHashKey, int nEnd, const uint32 *pBonesHash, const uint16 *pIndexHash)
{
  int result; // eax
  int v5; // r8d
  int v6; // eax
  uint16 v7; // r9

  result = -1;
  if ( nEnd > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (v5 + nEnd) >> 1;
        v7 = pIndexHash[v6];
        if ( pBonesHash[v7] >= nHashKey )
          break;
        v5 = v6 + 1;
        if ( nEnd <= v6 + 1 )
          return -1;
      }
      if ( pBonesHash[v7] <= nHashKey )
        break;
      nEnd = (v5 + nEnd) >> 1;
      if ( v6 <= v5 )
        return -1;
    }
    return v7;
  }
  return result;
}


// CleanupTriangulation  (line 233, @0x00000000031a79c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FillWithValue, Purge, RemoveAll, Swap, V_swap<Vector*>, V_swap<int>, V_swap<unsigned int>, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlMemory<Vector, int>::Purge, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
bool __fastcall CleanupTriangulation(
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const arrVertices,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const arrIndices)
{
  int m_Size; // esi
  __int64 v5; // rdx
  int i; // eax
  __int64 v7; // rdx
  int v8; // eax
  int j; // esi
  int *v10; // rcx
  __int64 v11; // rax
  int k; // ecx
  __int64 v13; // rsi
  Vector *v14; // rdx
  Vector *v15; // rsi
  __int64 v16; // rdx
  int m; // eax
  unsigned int *v18; // rcx
  uint32 m_nGrowSize; // eax
  Vector *m_pMemory; // rcx
  Vector *v21; // rdx
  bool result; // al
  bool v23; // [rsp+Ch] [rbp-64h]
  CUtlVector<int,CUtlMemory<int,int> > mapVerts; // [rsp+10h] [rbp-60h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > newVertices; // [rsp+30h] [rbp-40h] BYREF

  mapVerts.m_Size = 0;
  m_Size = arrVertices->m_Size;
  mapVerts.m_Memory.m_pMemory = 0;
  mapVerts.m_Memory.m_nAllocationCount = 0;
  mapVerts.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&mapVerts, m_Size);
  v5 = 0;
  for ( i = 0; i < mapVerts.m_Size; ++v5 )
  {
    ++i;
    mapVerts.m_Memory.m_pMemory[v5] = -1;
  }
  v7 = 0;
  v8 = 0;
  for ( j = 0; arrIndices->m_Size > v8; ++v7 )
  {
    while ( 1 )
    {
      v10 = &mapVerts.m_Memory.m_pMemory[arrIndices->m_Memory.m_pMemory[v7]];
      if ( *v10 < 0 )
        break;
      ++v8;
      ++v7;
      if ( arrIndices->m_Size <= v8 )
        goto LABEL_8;
    }
    *v10 = j;
    ++v8;
    ++j;
  }
LABEL_8:
  if ( j == arrVertices->m_Size )
  {
    result = 0;
  }
  else
  {
    newVertices.m_Size = 0;
    newVertices.m_Memory.m_pMemory = 0;
    newVertices.m_Memory.m_nAllocationCount = 0;
    newVertices.m_Memory.m_nGrowSize = 0;
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(&newVertices, j);
    v11 = 0;
    for ( k = 0; arrVertices->m_Size > k; ++v11 )
    {
      v13 = mapVerts.m_Memory.m_pMemory[v11];
      if ( v13 >= 0 )
      {
        v14 = &arrVertices->m_Memory.m_pMemory[v11];
        v15 = &newVertices.m_Memory.m_pMemory[v13];
        v15->x = v14->x;
        v15->y = v14->y;
        v15->z = v14->z;
      }
      ++k;
    }
    v16 = 0;
    for ( m = 0; arrIndices->m_Size > m; *v18 = mapVerts.m_Memory.m_pMemory[*v18] )
    {
      ++m;
      v18 = &arrIndices->m_Memory.m_pMemory[v16++];
    }
    m_nGrowSize = arrVertices->m_Memory.m_nGrowSize;
    m_pMemory = newVertices.m_Memory.m_pMemory;
    arrVertices->m_Memory.m_nGrowSize = newVertices.m_Memory.m_nGrowSize;
    v21 = arrVertices->m_Memory.m_pMemory;
    newVertices.m_Memory.m_nGrowSize = m_nGrowSize;
    arrVertices->m_Memory.m_pMemory = m_pMemory;
    newVertices.m_Memory.m_pMemory = v21;
    LODWORD(v21) = arrVertices->m_Memory.m_nAllocationCount;
    arrVertices->m_Memory.m_nAllocationCount = newVertices.m_Memory.m_nAllocationCount;
    newVertices.m_Memory.m_nAllocationCount = v21;
    LODWORD(v21) = newVertices.m_Size;
    newVertices.m_Size = 0;
    arrVertices->m_Size = v21;
    if ( (m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&newVertices.m_Memory);
      if ( (newVertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector,int>::Purge(&newVertices.m_Memory);
        result = 1;
        mapVerts.m_Size = 0;
        if ( (mapVerts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          return result;
        goto LABEL_21;
      }
    }
    result = 1;
  }
  mapVerts.m_Size = 0;
  if ( (mapVerts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return result;
LABEL_21:
  v23 = result;
  CUtlMemory<int,int>::Purge(&mapVerts.m_Memory);
  result = v23;
  if ( (mapVerts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&mapVerts.m_Memory);
    return v23;
  }
  return result;
}


// FillTriangles  (line 274, @0x00000000031a54c0, libserver.so)  // inlines: AdvanceVertex, Index, Position, Position<Vector>, operator=, operator|=
// calls: AddPointToBounds
void __fastcall FillTriangles(
        int nTriangleCount,
        const uint32 *pIndexBase,
        const Vector *pVertexBase,
        AABB_t *const bbox,
        CVertexData<VertexPos_t> *const vb,
        CIndexData<unsigned int> *const ib)
{
  const uint32 *v8; // rax
  signed int v9; // r15d
  const uint32 *v10; // r11
  signed int v11; // edi
  signed int v12; // esi
  signed int v13; // r10d
  unsigned int *m_pMemory; // r10
  int v15; // ecx
  bool v16; // zf
  unsigned int *v17; // rcx
  int v18; // edi
  signed int v20; // r14d
  VertexPos_t *v21; // rdx
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  __int64 m_nVertexCount; // rcx
  VertexPos_t *v25; // rdx
  Vector vertex1; // [rsp+10h] [rbp-40h] BYREF

  if ( nTriangleCount <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = pIndexBase;
    v9 = 0;
    v10 = &pIndexBase[3 * (nTriangleCount - 1) + 3];
    do
    {
      v11 = v8[1];
      v12 = v8[2];
      v13 = *v8;
      if ( v11 >= *v8 )
        v13 = v8[1];
      if ( v13 < v12 )
        v13 = v8[2];
      if ( v9 < v13 )
        v9 = v13;
      if ( ib->m_pMemory != 0 )
      {
        ib->m_pMemory[ib->m_nIndexCount] = *v8;
        m_pMemory = ib->m_pMemory;
        v15 = ib->m_nIndexIncrement + ib->m_nIndexCount;
        v16 = ib->m_pMemory == 0;
        ib->m_nIndexCount = v15;
        if ( !v16 )
        {
          m_pMemory[v15] = v11;
          v17 = ib->m_pMemory;
          v18 = ib->m_nIndexIncrement + ib->m_nIndexCount;
          v16 = ib->m_pMemory == 0;
          ib->m_nIndexCount = v18;
          if ( !v16 )
          {
            v17[v18] = v12;
            ib->m_nIndexCount += ib->m_nIndexIncrement;
          }
        }
      }
      v8 += 3;
    }
    while ( v8 != v10 );
  }
  v20 = 0;
  do
  {
    vertex1 = *pVertexBase;
    AddPointToBounds(&vertex1, &bbox->m_vMinBounds, &bbox->m_vMaxBounds);
    v21 = vb->m_pMemory;
    x = vertex1.x;
    vb->m_Scratch.m_vecPos.y = vertex1.y;
    z = vertex1.z;
    vb->m_Scratch.m_vecPos.x = x;
    vb->m_Scratch.m_vecPos.z = z;
    if ( v21 != 0 )
    {
      m_nVertexCount = vb->m_nVertexCount;
      if ( vb->m_nVertexIncrement == 0 || m_nVertexCount < vb->m_nMaxVertexCount )
      {
        v25 = &v21[m_nVertexCount];
        v25->m_vecPos.x = x;
        v25->m_vecPos.y = vb->m_Scratch.m_vecPos.y;
        v25->m_vecPos.z = vb->m_Scratch.m_vecPos.z;
        vb->m_nVertexCount += vb->m_nVertexIncrement;
      }
    }
    ++v20;
    ++pVertexBase;
  }
  while ( v9 >= v20 );
}


// FillTriangles  (line 301, @0x00000000031a5630, libserver.so)  // inlines: AdvanceVertex, AsUint32, Color3ub, Index, Init, Position, Position<Vector>, operator=, operator|=
// calls: AddPointToBounds
// callers: CreatePhysicsBodySceneObject
void __fastcall FillTriangles(
        int nTriangleCount,
        const uint32 *pIndexBase,
        const Vector *pVertexBase,
        AABB_t *const bbox,
        CVertexData<VertexColorPos_t> *const vb,
        CIndexData<unsigned int> *const ib)
{
  const uint32 *v6; // rax
  int v7; // r13d
  const uint32 *v10; // r10
  signed int v11; // edi
  signed int v12; // esi
  signed int v13; // r8d
  unsigned int *m_pMemory; // r8
  int v15; // ecx
  bool v16; // zf
  unsigned int *v17; // rcx
  int v18; // edi
  int v20; // r14d
  VertexColorPos_t *v21; // rsi
  vec_t y; // xmm1_4
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  __int64 m_nVertexCount; // rdx
  VertexColorPos_t *v26; // rdx
  Vector vertex1; // [rsp+0h] [rbp-48h] BYREF

  if ( nTriangleCount > 0 )
  {
    v6 = pIndexBase;
    v7 = -1;
    v10 = &pIndexBase[3 * (nTriangleCount - 1) + 3];
    do
    {
      v11 = v6[1];
      v12 = v6[2];
      v13 = *v6;
      if ( v11 >= *v6 )
        v13 = v6[1];
      if ( v13 < v12 )
        v13 = v6[2];
      if ( v7 < v13 )
        v7 = v13;
      if ( ib->m_pMemory != 0 )
      {
        ib->m_pMemory[ib->m_nIndexCount] = *v6;
        m_pMemory = ib->m_pMemory;
        v15 = ib->m_nIndexIncrement + ib->m_nIndexCount;
        v16 = ib->m_pMemory == 0;
        ib->m_nIndexCount = v15;
        if ( !v16 )
        {
          m_pMemory[v15] = v11;
          v17 = ib->m_pMemory;
          v18 = ib->m_nIndexIncrement + ib->m_nIndexCount;
          v16 = ib->m_pMemory == 0;
          ib->m_nIndexCount = v18;
          if ( !v16 )
          {
            v17[v18] = v12;
            ib->m_nIndexCount += ib->m_nIndexIncrement;
          }
        }
      }
      v6 += 3;
    }
    while ( v6 != v10 );
    if ( v7 != -1 )
    {
      v20 = 0;
      do
      {
        vertex1 = *pVertexBase;
        AddPointToBounds(&vertex1, &bbox->m_vMinBounds, &bbox->m_vMaxBounds);
        v21 = vb->m_pMemory;
        vb->m_Scratch.m_color.r = -1;
        y = vertex1.y;
        vb->m_Scratch.m_color.g = -1;
        x = vertex1.x;
        vb->m_Scratch.m_color.b = -1;
        vb->m_Scratch.m_vecPos.y = y;
        z = vertex1.z;
        vb->m_Scratch.m_vecPos.x = x;
        vb->m_Scratch.m_vecPos.z = z;
        vb->m_Scratch.m_color.a = -1;
        if ( v21 != 0 )
        {
          m_nVertexCount = vb->m_nVertexCount;
          if ( vb->m_nVertexIncrement == 0 || m_nVertexCount < vb->m_nMaxVertexCount )
          {
            v26 = &v21[m_nVertexCount];
            v26->m_vecPos.x = x;
            v26->m_vecPos.y = vb->m_Scratch.m_vecPos.y;
            v26->m_vecPos.z = vb->m_Scratch.m_vecPos.z;
            v26->m_color.color = vb->m_Scratch.m_color.color;
            vb->m_nVertexCount += vb->m_nVertexIncrement;
          }
        }
        ++v20;
        ++pVertexBase;
      }
      while ( v20 <= v7 );
    }
  }
}


// FillTriangles  (line 329, @0x00000000031a57b0, libserver.so)  // inlines: AdvanceVertex, AsUint32, Color, CrossProduct, DotProduct, Index, Normal, Normal<Vector>, NormalizeInPlace, Normalized, Position, Position<Vector>, SetUV0, TangentBasis, TexCoord, TexCoord2f, TexCoord2f<int, float, float>, VectorSubtract, operator-, operator=, operator|=
// calls: VectorNormalize, AddPointToBounds
void __fastcall FillTriangles(
        int nTriangleCount,
        const uint32 *pIndexBase,
        const VertexPositionColor_t *pVertexBase,
        AABB_t *const bbox,
        CVertexData<VertexUVPosColorNormalAndTangent_t> *const vb,
        CIndexData<unsigned int> *const ib)
{
  __m128 v7; // xmm10
  Vector *p_m_vMaxBounds; // r14
  unsigned int v9; // r15d
  vec_t v14; // xmm0_4
  uint32 v15; // esi
  __int64 v16; // rsi
  VertexUVPosColorNormalAndTangent_t *v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned int *m_pMemory; // rsi
  int v22; // edx
  bool v23; // zf
  unsigned int *v24; // rsi
  int v25; // edx
  __int64 v26; // rdx
  float v27; // xmm4_4
  vec_t v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  vec_t v31; // xmm12_4
  vec_t v32; // xmm13_4
  __m128 v33; // xmm0
  __m128 v34; // xmm7
  uint32 color; // edx
  VertexUVPosColorNormalAndTangent_t *v36; // rdx
  __int64 m_nVertexCount; // rsi
  VertexUVPosColorNormalAndTangent_t *v38; // rdx
  vec_t v39; // xmm7_4
  vec_t v40; // xmm12_4
  vec_t v41; // xmm13_4
  __m128 v42; // xmm7
  uint32 v43; // esi
  __int64 v44; // rsi
  VertexUVPosColorNormalAndTangent_t *v45; // rdx
  vec_t v46; // xmm7_4
  vec_t v47; // xmm8_4
  vec_t v48; // xmm9_4
  const uint32 *v49; // [rsp-48h] [rbp-D0h]
  int v50; // [rsp-40h] [rbp-C8h]
  const VertexPositionColor_t *v51; // [rsp-38h] [rbp-C0h]
  const VertexPositionColor_t *v52; // [rsp-30h] [rbp-B8h]
  const VertexPositionColor_t *v53; // [rsp-28h] [rbp-B0h]
  const VertexPositionColor_t *v54; // [rsp-20h] [rbp-A8h]
  float v55; // [rsp-18h] [rbp-A0h]
  float x; // [rsp-14h] [rbp-9Ch]
  float v57; // [rsp-10h] [rbp-98h]
  float z; // [rsp-Ch] [rbp-94h]
  float y; // [rsp-8h] [rbp-90h]
  float v60; // [rsp-4h] [rbp-8Ch]
  Vector vertex1; // [rsp+0h] [rbp-88h] BYREF
  Vector vertex2; // [rsp+10h] [rbp-78h] BYREF
  Vector vertex3; // [rsp+20h] [rbp-68h] BYREF
  Vector normal; // [rsp+30h] [rbp-58h] BYREF
  Vector v65; // [rsp+40h] [rbp-48h] BYREF

  if ( nTriangleCount > 0 )
  {
    v7.m128_i32[0] = 0;
    p_m_vMaxBounds = &bbox->m_vMaxBounds;
    v9 = 0;
    v50 = 3 * nTriangleCount;
    do
    {
      v18 = *pIndexBase;
      v19 = *(pIndexBase + 1);
      v20 = *(pIndexBase + 2);
      if ( ib->m_pMemory != 0 )
      {
        ib->m_pMemory[ib->m_nIndexCount] = v9;
        m_pMemory = ib->m_pMemory;
        v22 = ib->m_nIndexIncrement + ib->m_nIndexCount;
        v23 = ib->m_pMemory == 0;
        ib->m_nIndexCount = v22;
        if ( !v23 )
        {
          m_pMemory[v22] = v9 + 1;
          v24 = ib->m_pMemory;
          v25 = ib->m_nIndexIncrement + ib->m_nIndexCount;
          v23 = ib->m_pMemory == 0;
          ib->m_nIndexCount = v25;
          if ( !v23 )
          {
            v24[v25] = v9 + 2;
            ib->m_nIndexCount += ib->m_nIndexIncrement;
          }
        }
      }
      v49 = pIndexBase;
      v51 = &pVertexBase[v18];
      v52 = &pVertexBase[v19];
      vertex1 = v51->m_vPosition;
      v53 = pVertexBase;
      v54 = &pVertexBase[v20];
      vertex2 = v52->m_vPosition;
      v26 = *&v54->m_vPosition.x;
      v65.x = vertex2.x - vertex1.x;
      v65.y = vertex2.y - vertex1.y;
      *&vertex3.x = v26;
      *&v26 = v54->m_vPosition.z;
      v65.z = vertex2.z - vertex1.z;
      LODWORD(vertex3.z) = v26;
      normal.x = ((vertex2.y - vertex1.y) * (*&v26 - vertex1.z)) - ((vertex2.z - vertex1.z) * (vertex3.y - vertex1.y));
      normal.y = ((vertex2.z - vertex1.z) * (vertex3.x - vertex1.x)) - ((*&v26 - vertex1.z) * (vertex2.x - vertex1.x));
      normal.z = ((vertex3.y - vertex1.y) * (vertex2.x - vertex1.x))
               - ((vertex3.x - vertex1.x) * (vertex2.y - vertex1.y));
      VectorNormalize(&v65);
      x = v65.x;
      y = v65.y;
      z = v65.z;
      v55 = (normal.x * v65.y) - (normal.y * v65.x);
      v57 = (normal.z * v65.x) - (normal.x * v65.z);
      v60 = (normal.y * v65.z) - (normal.z * v65.y);
      VectorNormalize(&normal);
      AddPointToBounds(&vertex1, &bbox->m_vMinBounds, p_m_vMaxBounds);
      AddPointToBounds(&vertex2, &bbox->m_vMinBounds, p_m_vMaxBounds);
      AddPointToBounds(&vertex3, &bbox->m_vMinBounds, p_m_vMaxBounds);
      v27 = normal.z;
      vb->m_Scratch.m_vecUV.x = 0.0;
      vb->m_Scratch.m_vecUV.y = 0.0;
      v28 = vertex1.z;
      vb->m_Scratch.m_vecNormal.z = v27;
      v29 = normal.y;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.z = z;
      vb->m_Scratch.m_vecPos.z = v28;
      v33 = LODWORD(z);
      v30 = normal.x;
      vb->m_Scratch.m_vecNormal.y = v29;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.y = y;
      v31 = vertex1.x;
      vb->m_Scratch.m_vecNormal.x = v30;
      vb->m_Scratch.m_vecPos.x = v31;
      v32 = vertex1.y;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.x = x;
      vb->m_Scratch.m_vecPos.y = v32;
      pVertexBase = v53;
      v33.m128_f32[0] = ((((v33.m128_f32[0] * v29) - (v27 * y)) * v60) + (((v27 * x) - (v30 * v33.m128_f32[0])) * v57))
                      + (((v30 * y) - (v29 * x)) * v55);
      v34 = _mm_cmplt_ss(v33, 0);
      LODWORD(vb->m_Scratch.m_vTangentUOs_flTangentVSign.w) = _mm_andnot_ps(v34, 0x3F800000u).m128_u32[0]
                                                            | v34.m128_i32[0] & 0xBF800000;
      color = v51->m_Color.color;
      vb->m_Scratch.m_vecUV.x = v31;
      vb->m_Scratch.m_vecUV.y = v32;
      vb->m_Scratch.m_color.color = color;
      v36 = vb->m_pMemory;
      if ( v36 != 0 )
      {
        m_nVertexCount = vb->m_nVertexCount;
        if ( vb->m_nVertexIncrement == 0 || m_nVertexCount < vb->m_nMaxVertexCount )
        {
          v38 = &v36[m_nVertexCount];
          v38->m_vecPos.x = v31;
          v30 = normal.x;
          v38->m_vecPos.y = vb->m_Scratch.m_vecPos.y;
          v29 = normal.y;
          v38->m_vecPos.z = vb->m_Scratch.m_vecPos.z;
          v27 = normal.z;
          v38->m_vecUV.x = vb->m_Scratch.m_vecUV.x;
          v38->m_vecUV.y = vb->m_Scratch.m_vecUV.y;
          v38->m_color.color = vb->m_Scratch.m_color.color;
          v38->m_vecNormal.x = vb->m_Scratch.m_vecNormal.x;
          v38->m_vecNormal.y = vb->m_Scratch.m_vecNormal.y;
          v38->m_vecNormal.z = vb->m_Scratch.m_vecNormal.z;
          v38->m_vTangentUOs_flTangentVSign.x = vb->m_Scratch.m_vTangentUOs_flTangentVSign.x;
          v38->m_vTangentUOs_flTangentVSign.y = vb->m_Scratch.m_vTangentUOs_flTangentVSign.y;
          v38->m_vTangentUOs_flTangentVSign.z = vb->m_Scratch.m_vTangentUOs_flTangentVSign.z;
          v38->m_vTangentUOs_flTangentVSign.w = vb->m_Scratch.m_vTangentUOs_flTangentVSign.w;
          v33 = LODWORD(z);
          vb->m_nVertexCount += vb->m_nVertexIncrement;
          v36 = vb->m_pMemory;
          v33.m128_f32[0] = ((((z * v29) - (v27 * y)) * v60) + (((v27 * x) - (z * v30)) * v57))
                          + (((y * v30) - (x * v29)) * v55);
        }
      }
      v39 = vertex2.z;
      vb->m_Scratch.m_vecUV.x = 0.0;
      v40 = vertex2.x;
      vb->m_Scratch.m_vecUV.y = 1.0;
      vb->m_Scratch.m_vecPos.z = v39;
      v41 = vertex2.y;
      v42 = _mm_cmplt_ss(v33, v7);
      vb->m_Scratch.m_vecPos.x = v40;
      vb->m_Scratch.m_vecPos.y = v41;
      vb->m_Scratch.m_vecNormal.x = v30;
      vb->m_Scratch.m_vecNormal.y = v29;
      vb->m_Scratch.m_vecNormal.z = v27;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.x = x;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.y = y;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.z = z;
      LODWORD(vb->m_Scratch.m_vTangentUOs_flTangentVSign.w) = _mm_andnot_ps(v42, 0x3F800000u).m128_u32[0]
                                                            | v42.m128_i32[0] & 0xBF800000;
      v43 = v52->m_Color.color;
      vb->m_Scratch.m_vecUV.x = v40;
      vb->m_Scratch.m_vecUV.y = v41;
      vb->m_Scratch.m_color.color = v43;
      if ( v36 != 0 )
      {
        v44 = vb->m_nVertexCount;
        if ( vb->m_nVertexIncrement == 0 || v44 < vb->m_nMaxVertexCount )
        {
          v45 = &v36[v44];
          v45->m_vecPos.x = v40;
          v30 = normal.x;
          v45->m_vecPos.y = vb->m_Scratch.m_vecPos.y;
          v29 = normal.y;
          v45->m_vecPos.z = vb->m_Scratch.m_vecPos.z;
          v27 = normal.z;
          v45->m_vecUV.x = vb->m_Scratch.m_vecUV.x;
          v45->m_vecUV.y = vb->m_Scratch.m_vecUV.y;
          v45->m_color.color = vb->m_Scratch.m_color.color;
          v45->m_vecNormal.x = vb->m_Scratch.m_vecNormal.x;
          v45->m_vecNormal.y = vb->m_Scratch.m_vecNormal.y;
          v45->m_vecNormal.z = vb->m_Scratch.m_vecNormal.z;
          v45->m_vTangentUOs_flTangentVSign.x = vb->m_Scratch.m_vTangentUOs_flTangentVSign.x;
          v45->m_vTangentUOs_flTangentVSign.y = vb->m_Scratch.m_vTangentUOs_flTangentVSign.y;
          v45->m_vTangentUOs_flTangentVSign.z = vb->m_Scratch.m_vTangentUOs_flTangentVSign.z;
          v45->m_vTangentUOs_flTangentVSign.w = vb->m_Scratch.m_vTangentUOs_flTangentVSign.w;
          vb->m_nVertexCount += vb->m_nVertexIncrement;
          v36 = vb->m_pMemory;
          v33.m128_f32[0] = ((((z * v29) - (v27 * y)) * v60) + (((v27 * x) - (z * v30)) * v57))
                          + (((y * v30) - (v29 * x)) * v55);
        }
      }
      v46 = vertex3.x;
      vb->m_Scratch.m_vecNormal.x = v30;
      v47 = vertex3.y;
      vb->m_Scratch.m_vecNormal.y = v29;
      v48 = vertex3.z;
      vb->m_Scratch.m_vecPos.x = v46;
      vb->m_Scratch.m_vecPos.y = v47;
      vb->m_Scratch.m_vecPos.z = v48;
      vb->m_Scratch.m_vecNormal.z = v27;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.x = x;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.y = y;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.z = z;
      if ( v33.m128_f32[0] >= 0.0 )
        v14 = 1.0;
      else
        v14 = -1.0;
      vb->m_Scratch.m_vecUV.x = 1.0;
      vb->m_Scratch.m_vecUV.y = 0.0;
      vb->m_Scratch.m_vTangentUOs_flTangentVSign.w = v14;
      v15 = v54->m_Color.color;
      vb->m_Scratch.m_vecUV.x = v46;
      vb->m_Scratch.m_vecUV.y = v47;
      vb->m_Scratch.m_color.color = v15;
      if ( v36 != 0 )
      {
        v16 = vb->m_nVertexCount;
        if ( vb->m_nVertexIncrement == 0 || v16 < vb->m_nMaxVertexCount )
        {
          v17 = &v36[v16];
          v17->m_vecPos.x = v46;
          v17->m_vecPos.y = vb->m_Scratch.m_vecPos.y;
          v17->m_vecPos.z = vb->m_Scratch.m_vecPos.z;
          v17->m_vecUV.x = vb->m_Scratch.m_vecUV.x;
          v17->m_vecUV.y = vb->m_Scratch.m_vecUV.y;
          v17->m_color.color = vb->m_Scratch.m_color.color;
          v17->m_vecNormal.x = vb->m_Scratch.m_vecNormal.x;
          v17->m_vecNormal.y = vb->m_Scratch.m_vecNormal.y;
          v17->m_vecNormal.z = vb->m_Scratch.m_vecNormal.z;
          v17->m_vTangentUOs_flTangentVSign.x = vb->m_Scratch.m_vTangentUOs_flTangentVSign.x;
          v17->m_vTangentUOs_flTangentVSign.y = vb->m_Scratch.m_vTangentUOs_flTangentVSign.y;
          v17->m_vTangentUOs_flTangentVSign.z = vb->m_Scratch.m_vTangentUOs_flTangentVSign.z;
          v17->m_vTangentUOs_flTangentVSign.w = vb->m_Scratch.m_vTangentUOs_flTangentVSign.w;
          vb->m_nVertexCount += vb->m_nVertexIncrement;
        }
      }
      v9 += 3;
      pIndexBase = v49 + 3;
    }
    while ( v9 != v50 );
  }
}


// CreatePhysicsBodySceneObject  (line 385, @0x00000000031a6400, libserver.so)  // inlines: CAutoLockT, CIndexData, CIndexDataBase, CRenderContextPtr, CRenderContextPtr<>, CTSInputLayoutCreator, CThreadSyncValue<>, CVertexData, CVertexDataBase, CWeakHandle, CalcClassID, Clear, ClearIndexFields, ClearVertexFields, CreateLayout, GetLayout, Init, InitPreallocated, IsInitialized, Load, Lock, MakeInvalid, Release, RenderTargetDesc_t, SetObjectClass, Store, TakeOwnership, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator int, operator=, ~CAutoLockT, ~CIndexData, ~CRenderContextPtr, ~CVertexData
// calls: FillTriangles, CIndexData<unsigned int>::Release, CVertexData<VertexColorPos_t>::Release, ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, __cxa_guard_acquire, __cxa_guard_release, Warning, _Unwind_Resume
// strings: "vb phys", "physib", "ptestbed", "WARNING: Trying to create a CRenderContextPtr without a valid context.\n", "VertexColorPos_t"
// globals: `guard variable for'VertexColorPos_t::GetLayout(void)::inputLayoutCreator, VertexColorPos_t::GetLayout(void)::inputLayoutCreator, s_physResource
CSceneObject *__fastcall CreatePhysicsBodySceneObject(
        ISceneWorld *pSceneWorld,
        HMaterial hMaterial,
        int nTriangleCount,
        const uint32 *pIndexBase,
        int nVertexCount,
        const Vector *pVertexBase)
{
  IRenderDevice *v7; // r15
  __int64 i; // rax
  __int64 v9; // rax
  IRenderContext *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rax
  __int64 (__fastcall *v15)(ISceneSystem *, ISceneWorld *, VertexBufferHandle_t, IndexBufferHandle_t, _QWORD *, _QWORD, unsigned int, AABB_t *, Vector *, int, _QWORD, int); // rax
  __int64 v16; // r13
  uint8 m_nClassID; // al
  signed __int64 CurrentId; // rsi
  unsigned int v20; // [rsp+34h] [rbp-1ECh]
  CIndexData<unsigned int> *v21; // [rsp+38h] [rbp-1E8h]
  CVertexData<VertexColorPos_t> *v24; // [rsp+50h] [rbp-1D0h]
  unsigned int nIndexCount; // [rsp+68h] [rbp-1B8h]
  VertexColorPos_t *v29; // [rsp+70h] [rbp-1B0h] BYREF
  unsigned int *v30; // [rsp+80h] [rbp-1A0h] BYREF
  VertexColorPos_t *m_pMemory; // [rsp+90h] [rbp-190h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp-180h] BYREF
  AABB_t bbox; // [rsp+B0h] [rbp-170h] BYREF
  _DWORD v34[2]; // [rsp+D0h] [rbp-150h] BYREF
  const char *v35; // [rsp+D8h] [rbp-148h]
  char *v36; // [rsp+E0h] [rbp-140h]
  _DWORD v37[2]; // [rsp+F0h] [rbp-130h] BYREF
  const char *v38; // [rsp+F8h] [rbp-128h]
  const char *v39; // [rsp+100h] [rbp-120h]
  CIndexData<unsigned int> ib; // [rsp+110h] [rbp-110h] BYREF
  CVertexData<VertexColorPos_t> vb; // [rsp+140h] [rbp-E0h] BYREF
  _QWORD v42[20]; // [rsp+180h] [rbp-A0h] BYREF

  if ( nTriangleCount == 0 )
    return 0;
  memset(v42, 0, 64);
  v7 = g_pRenderDevice;
  for ( i = 0; i != 8; ++i )
  {
    v42[i] = 0;
    *(&v42[9] + i * 4) = 0;
  }
  v42[13] &= 0xFE00000000000000LL;
  v42[8] = 0;
  v9 = (*(*v7 + 368LL))(v7, 0, 0, 0);
  v10 = v9;
  if ( v9 != 0 )
    (*(*v9 + 8LL))(v9, v42);
  else
    Warning("WARNING: Trying to create a CRenderContextPtr without a valid context.\n");
  vb.m_pRenderContext = v10;
  bbox.m_vMinBounds.x = 3.4028235e38;
  bbox.m_vMinBounds.y = 3.4028235e38;
  bbox.m_vMinBounds.z = 3.4028235e38;
  bbox.m_vMaxBounds.x = -3.4028235e38;
  nIndexCount = 3 * nTriangleCount;
  bbox.m_vMaxBounds.y = -3.4028235e38;
  bbox.m_vMaxBounds.z = -3.4028235e38;
  vb.m_nMaxVertexCount = 0;
  vb.m_pMemory = 0;
  *(&vb.CVertexDataBase<VertexColorPos_t> + 11) &= 0xC0000000;
  v35 = "vb phys";
  *(&vb.CVertexDataBase<VertexColorPos_t> + 47) = 0;
  vb.m_nVertexCount = 0;
  vb.m_nVertexIncrement = 0;
  v34[1] = 16;
  v34[0] = nVertexCount;
  v36 = "testbed";
  v11 = (*(v10->_vptr_IRenderContext + 78))(v10);
  v24 = *(*v11 + 264LL);
  if ( `guard variable for'VertexColorPos_t::GetLayout(void)::inputLayoutCreator == 0
    && __cxa_guard_acquire(&`guard variable for'VertexColorPos_t::GetLayout(void)::inputLayoutCreator) != 0 )
  {
    VertexColorPos_t::GetLayout(void)::inputLayoutCreator = 0;
    __cxa_guard_release(&`guard variable for'VertexColorPos_t::GetLayout(void)::inputLayoutCreator);
  }
  if ( VertexColorPos_t::GetLayout(void)::inputLayoutCreator != 0 )
  {
    v12 = dword_4D802A0;
  }
  else
  {
    memset(v42, 0, 0x70u);
    LODWORD(v42[12]) = 12;
    v42[0] = 0x6E6F697469736F70LL;
    v42[7] = 0x726F6C6F63LL;
    HIDWORD(v42[4]) = 6;
    HIDWORD(v42[11]) = 28;
    v21 = (*(*g_pRenderDevice + 216LL))(g_pRenderDevice);
    CurrentId = ThreadGetCurrentId();
    if ( CurrentId == v21->m_pMemory || _InterlockedCompareExchange64(v21, CurrentId, 0) == 0 )
    {
      ++v21->m_nIndexCount;
    }
    else
    {
      _mm_pause();
      CThreadFastMutex::Lock(v21, CurrentId, 0);
    }
    if ( VertexColorPos_t::GetLayout(void)::inputLayoutCreator == 0 )
    {
      dword_4D802A0 = (*(*g_pRenderDevice + 184LL))(g_pRenderDevice, "VertexColorPos_t", 2, v42);
      VertexColorPos_t::GetLayout(void)::inputLayoutCreator = 1;
    }
    v12 = dword_4D802A0;
    if ( --v21->m_nIndexCount == 0 )
    {
      v20 = v12;
      ThreadInterlockedExchange64(v21, 0);
      v12 = v20;
    }
  }
  v13 = nVertexCount & 0x3FFFFFFF;
  vb.m_hVertexBuffer = (v24)(v11, 0, v34, v12);
  vb.m_nMaxVertexCount = 0;
  vb.m_pMemory = 0;
  vb.m_nVertexCount = 0;
  vb.m_nVertexIncrement = 0;
  *(&vb.CVertexDataBase<VertexColorPos_t> + 11) = v13 | *(&vb.CVertexDataBase<VertexColorPos_t> + 11) & 0xC0000000;
  *(&vb.CVertexDataBase<VertexColorPos_t> + 47) = *(&vb.CVertexDataBase<VertexColorPos_t> + 47) & 0x3F | 0x40;
  if ( (*(vb.m_pRenderContext->_vptr_IRenderContext + 51))(vb.m_pRenderContext, vb.m_hVertexBuffer, (16 * v13), &v29) != 0 )
  {
    vb.m_nVertexIncrement = 1;
    vb.m_pMemory = v29;
  }
  else
  {
    vb.m_nVertexIncrement = 0;
    v13 = 0;
    vb.m_pMemory = 0;
  }
  vb.m_nMaxVertexCount = v13;
  vb.m_nVertexCount = 0;
  ib.m_pMemory = 0;
  ib.m_nIndexCount = 0;
  ib.m_nIndexIncrement = 0;
  *(&ib.CIndexDataBase<unsigned int> + 7) &= 0xC0000000;
  v38 = "physib";
  *(&ib.CIndexDataBase<unsigned int> + 31) = 0;
  ib.m_hIndexBuffer = 0;
  ib.m_pRenderContext = v10;
  v37[1] = 4;
  v37[0] = 3 * nTriangleCount;
  v39 = "ptestbed";
  v14 = (*(v10->_vptr_IRenderContext + 78))(v10);
  ib.m_hIndexBuffer = (*(*v14 + 280LL))(v14, 0, v37);
  *(&ib.CIndexDataBase<unsigned int> + 7) = nIndexCount & 0x3FFFFFFF
                                          | *(&ib.CIndexDataBase<unsigned int> + 7) & 0xC0000000;
  *(&ib.CIndexDataBase<unsigned int> + 31) = *(&ib.CIndexDataBase<unsigned int> + 31) & 0x3F | 0x40;
  if ( (*(ib.m_pRenderContext->_vptr_IRenderContext + 49))(
         ib.m_pRenderContext,
         ib.m_hIndexBuffer,
         (12 * nTriangleCount),
         &v30) != 0 )
  {
    ib.m_nIndexIncrement = 1;
    ib.m_pMemory = v30;
  }
  else
  {
    ib.m_nIndexIncrement = 0;
    ib.m_pMemory = 0;
  }
  ib.m_nIndexCount = 0;
  FillTriangles(nTriangleCount, pIndexBase, pVertexBase, &bbox, &vb, &ib);
  if ( *(&vb.CVertexDataBase<VertexColorPos_t> + 47) >= 0 && vb.m_pMemory != 0 )
  {
    m_pMemory = vb.m_pMemory;
    (*(vb.m_pRenderContext->_vptr_IRenderContext + 52))(
      vb.m_pRenderContext,
      vb.m_hVertexBuffer,
      (16 * vb.m_nVertexCount),
      &m_pMemory);
    vb.m_pMemory = 0;
  }
  vb.m_nVertexCount = 0;
  vb.m_nVertexIncrement = 0;
  vb.m_nMaxVertexCount = 0;
  if ( *(&ib.CIndexDataBase<unsigned int> + 31) >= 0 && ib.m_pMemory != 0 )
  {
    v32 = ib.m_pMemory;
    (*(ib.m_pRenderContext->_vptr_IRenderContext + 50))(
      ib.m_pRenderContext,
      ib.m_hIndexBuffer,
      (4 * ib.m_nIndexCount),
      &v32);
    ib.m_pMemory = 0;
  }
  ib.m_nIndexCount = 0;
  ib.m_nIndexIncrement = 0;
  v15 = *(*g_pSceneSystem + 104LL);
  v42[0] = hMaterial.m_pBinding->m_pData;
  *(&ib.CIndexDataBase<unsigned int> + 31) &= ~0x40u;
  *(&vb.CVertexDataBase<VertexColorPos_t> + 47) &= ~0x40u;
  v16 = v15(
          g_pSceneSystem,
          pSceneWorld,
          vb.m_hVertexBuffer,
          ib.m_hIndexBuffer,
          v42,
          nIndexCount,
          nIndexCount,
          &bbox,
          &bbox.m_vMaxBounds,
          5,
          0,
          1);
  m_nClassID = s_physResource.m_nClassID;
  if ( s_physResource.m_nClassID == 0xFF )
  {
    m_nClassID = (*(*g_pSceneSystem + 760LL))(g_pSceneSystem, s_physResource.m_pClassName);
    s_physResource.m_nClassID = m_nClassID;
  }
  (*(*g_pSceneSystem + 768LL))(g_pSceneSystem, v16, m_nClassID);
  CIndexData<unsigned int>::Release(&ib);
  CVertexData<VertexColorPos_t>::Release(&vb);
  (*(v10->_vptr_IRenderContext + 6))(v10);
  (*(*v7 + 384LL))(v7, v10);
  return v16;
}


// CreatePhysicsEdgeSceneObject  (line 413, @0x00000000031a6c70, libserver.so)  // inlines: AdvanceVertex, AsUint32, CAutoLockT, CIndexData, CIndexDataBase, CRenderContextPtr, CRenderContextPtr<>, CTSInputLayoutCreator, CThreadSyncValue<>, CVertexData, CVertexDataBase, CWeakHandle, CalcClassID, Clear, ClearIndexFields, ClearVertexFields, Color3ub, CreateLayout, GetLayout, Index, Init, InitPreallocated, IsInitialized, Load, Lock, MakeInvalid, Position, Position<Vector>, Release, RenderTargetDesc_t, SetObjectClass, StartPoint, Store, TakeOwnership, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator int, operator=, operator|=, ~CAutoLockT, ~CIndexData, ~CRenderContextPtr, ~CVertexData
// calls: AddPointToBounds, CIndexData<unsigned int>::Release, CVertexData<VertexWireFrame_t>::Release, ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, __cxa_guard_acquire, __cxa_guard_release, Warning, _Unwind_Resume
// strings: "vb phys", "physib", "ptestbed", "WARNING: Trying to create a CRenderContextPtr without a valid context.\n", "VertexWireFrame_t"
// globals: `guard variable for'VertexWireFrame_t::GetLayout(void)::inputLayoutCreator, VertexWireFrame_t::GetLayout(void)::inputLayoutCreator, s_physResource
CSceneObject *__fastcall CreatePhysicsEdgeSceneObject(
        ISceneWorld *pSceneWorld,
        HMaterial hMaterial,
        int nEdgeCount,
        const uint32 *pIndexBase,
        unsigned int nVertexCount,
        const Vector *pVertexBase)
{
  __int64 i; // rax
  __int64 v8; // rax
  IRenderContext *v9; // r15
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, _DWORD *, __int64); // r13
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  const Vector *v15; // rbx
  vec_t x; // xmm0_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  VertexWireFrame_t *v19; // rax
  const uint32 *v20; // rax
  unsigned int v21; // edi
  int v22; // edx
  unsigned int v23; // edi
  int v24; // edx
  __int64 (__fastcall *v25)(ISceneSystem *, ISceneWorld *, VertexBufferHandle_t, IndexBufferHandle_t, _QWORD *, _QWORD, int, AABB_t *, Vector *, int, _QWORD, int); // r10
  void *m_pData; // rax
  __int64 v27; // r12
  __int64 v29; // r12
  signed __int64 CurrentId; // rsi
  unsigned int v31; // [rsp+3Ch] [rbp-264h]
  IRenderDevice *pRenderContext; // [rsp+58h] [rbp-248h]
  VertexWireFrame_t *v38; // [rsp+70h] [rbp-230h] BYREF
  unsigned int *v39; // [rsp+80h] [rbp-220h] BYREF
  VertexWireFrame_t *m_pMemory; // [rsp+90h] [rbp-210h] BYREF
  unsigned int *v41; // [rsp+A0h] [rbp-200h] BYREF
  AABB_t bbox; // [rsp+B0h] [rbp-1F0h] BYREF
  _DWORD v43[2]; // [rsp+D0h] [rbp-1D0h] BYREF
  const char *v44; // [rsp+D8h] [rbp-1C8h]
  char *v45; // [rsp+E0h] [rbp-1C0h]
  _DWORD v46[2]; // [rsp+F0h] [rbp-1B0h] BYREF
  const char *v47; // [rsp+F8h] [rbp-1A8h]
  const char *v48; // [rsp+100h] [rbp-1A0h]
  CIndexData<unsigned int> ib; // [rsp+110h] [rbp-190h] BYREF
  CVertexData<VertexWireFrame_t> vb; // [rsp+140h] [rbp-160h] BYREF
  _QWORD v51[34]; // [rsp+190h] [rbp-110h] BYREF

  if ( nEdgeCount == 0 )
    return 0;
  memset(v51, 0, 64);
  pRenderContext = g_pRenderDevice;
  for ( i = 0; i != 8; ++i )
  {
    v51[i] = 0;
    *(&v51[9] + i * 4) = 0;
  }
  v51[13] &= 0xFE00000000000000LL;
  v51[8] = 0;
  v8 = (*(*pRenderContext + 368LL))(pRenderContext, 0, 0, 0);
  v9 = v8;
  if ( v8 != 0 )
    (*(*v8 + 8LL))(v8, v51);
  else
    Warning("WARNING: Trying to create a CRenderContextPtr without a valid context.\n");
  vb.m_pRenderContext = v9;
  bbox.m_vMinBounds.x = 3.4028235e38;
  bbox.m_vMinBounds.y = 3.4028235e38;
  bbox.m_vMinBounds.z = 3.4028235e38;
  bbox.m_vMaxBounds.x = -3.4028235e38;
  *(&vb.CVertexDataBase<VertexWireFrame_t> + 17) &= 0xC0000000;
  bbox.m_vMaxBounds.y = -3.4028235e38;
  bbox.m_vMaxBounds.z = -3.4028235e38;
  *(&vb.CVertexDataBase<VertexWireFrame_t> + 71) = 0;
  v43[0] = nVertexCount;
  v44 = "vb phys";
  vb.m_nMaxVertexCount = 0;
  vb.m_pMemory = 0;
  vb.m_nVertexCount = 0;
  vb.m_nVertexIncrement = 0;
  v43[1] = 40;
  v45 = "testbed";
  v10 = (*(v9->_vptr_IRenderContext + 78))(v9);
  v11 = *(*v10 + 264LL);
  if ( `guard variable for'VertexWireFrame_t::GetLayout(void)::inputLayoutCreator == 0
    && __cxa_guard_acquire(&`guard variable for'VertexWireFrame_t::GetLayout(void)::inputLayoutCreator) != 0 )
  {
    VertexWireFrame_t::GetLayout(void)::inputLayoutCreator = 0;
    __cxa_guard_release(&`guard variable for'VertexWireFrame_t::GetLayout(void)::inputLayoutCreator);
  }
  if ( VertexWireFrame_t::GetLayout(void)::inputLayoutCreator != 0 )
  {
    v12 = dword_4D80298;
  }
  else
  {
    memset(v51, 0, 0xE0u);
    LODWORD(v51[19]) = 28;
    v51[0] = 0x6E6F697469736F70LL;
    v51[7] = 0x6C616D726F6ELL;
    v51[14] = 0x64726F6F63786574LL;
    v51[21] = 0x726F6C6F63LL;
    LODWORD(v51[12]) = 16;
    LODWORD(v51[26]) = 12;
    HIDWORD(v51[4]) = 6;
    HIDWORD(v51[18]) = 6;
    HIDWORD(v51[11]) = 6;
    HIDWORD(v51[25]) = 28;
    v29 = (*(*g_pRenderDevice + 216LL))(g_pRenderDevice);
    CurrentId = ThreadGetCurrentId();
    if ( CurrentId == *v29 || _InterlockedCompareExchange64(v29, CurrentId, 0) == 0 )
    {
      ++*(v29 + 8);
    }
    else
    {
      _mm_pause();
      CThreadFastMutex::Lock(v29, CurrentId, 0);
    }
    if ( VertexWireFrame_t::GetLayout(void)::inputLayoutCreator == 0 )
    {
      dword_4D80298 = (*(*g_pRenderDevice + 184LL))(g_pRenderDevice, "VertexWireFrame_t", 4, v51);
      VertexWireFrame_t::GetLayout(void)::inputLayoutCreator = 1;
    }
    v12 = dword_4D80298;
    if ( --*(v29 + 8) == 0 )
    {
      v31 = v12;
      ThreadInterlockedExchange64(v29, 0);
      v12 = v31;
    }
  }
  vb.m_hVertexBuffer = v11(v10, 0, v43, v12);
  vb.m_nMaxVertexCount = 0;
  vb.m_pMemory = 0;
  vb.m_nVertexCount = 0;
  vb.m_nVertexIncrement = 0;
  v13 = nVertexCount & 0x3FFFFFFF;
  *(&vb.CVertexDataBase<VertexWireFrame_t> + 17) = nVertexCount & 0x3FFFFFFF
                                                 | *(&vb.CVertexDataBase<VertexWireFrame_t> + 17) & 0xC0000000;
  *(&vb.CVertexDataBase<VertexWireFrame_t> + 71) = *(&vb.CVertexDataBase<VertexWireFrame_t> + 71) & 0x3F | 0x40;
  if ( (*(vb.m_pRenderContext->_vptr_IRenderContext + 51))(
         vb.m_pRenderContext,
         vb.m_hVertexBuffer,
         40 * (nVertexCount & 0x3FFFFFFF),
         &v38) != 0 )
  {
    vb.m_nVertexIncrement = 1;
    vb.m_pMemory = v38;
  }
  else
  {
    vb.m_nVertexIncrement = 0;
    v13 = 0;
    vb.m_pMemory = 0;
  }
  vb.m_nMaxVertexCount = v13;
  vb.m_nVertexCount = 0;
  ib.m_pMemory = 0;
  ib.m_nIndexCount = 0;
  ib.m_nIndexIncrement = 0;
  HIDWORD(ib.m_hIndexBuffer) = 0;
  ib.m_pRenderContext = v9;
  v46[1] = 4;
  v46[0] = 3 * nEdgeCount;
  *(&ib.CIndexDataBase<unsigned int> + 28) = *(&ib.CIndexDataBase<unsigned int> + 7) & 0xC0000000;
  v47 = "physib";
  *(&ib.CIndexDataBase<unsigned int> + 31) = 0;
  v48 = "ptestbed";
  v14 = (*(v9->_vptr_IRenderContext + 78))(v9);
  ib.m_hIndexBuffer = (*(*v14 + 280LL))(v14, 0, v46);
  *(&ib.CIndexDataBase<unsigned int> + 7) = (3 * nEdgeCount) & 0x3FFFFFFF
                                          | *(&ib.CIndexDataBase<unsigned int> + 7) & 0xC0000000;
  *(&ib.CIndexDataBase<unsigned int> + 31) = *(&ib.CIndexDataBase<unsigned int> + 31) & 0x3F | 0x40;
  if ( (*(ib.m_pRenderContext->_vptr_IRenderContext + 49))(
         ib.m_pRenderContext,
         ib.m_hIndexBuffer,
         (12 * nEdgeCount),
         &v39) != 0 )
  {
    ib.m_nIndexIncrement = 1;
    ib.m_pMemory = v39;
  }
  else
  {
    ib.m_nIndexIncrement = 0;
    ib.m_pMemory = 0;
  }
  ib.m_nIndexCount = 0;
  if ( nVertexCount > 0 )
  {
    v15 = pVertexBase;
    do
    {
      AddPointToBounds(v15, &bbox.m_vMinBounds, &bbox.m_vMaxBounds);
      vb.m_Scratch.m_color.color = -1;
      x = v15->x;
      y = v15->y;
      z = v15->z;
      vb.m_Scratch.m_vecPos.x = x;
      vb.m_Scratch.m_vecPos.y = y;
      vb.m_Scratch.m_vecPos.z = z;
      vb.m_Scratch.m_vecStartPoint.x = x;
      vb.m_Scratch.m_vecStartPoint.y = y;
      vb.m_Scratch.m_vecStartPoint.z = z;
      vb.m_Scratch.m_vecNormal.x = 0.0;
      vb.m_Scratch.m_vecNormal.y = 0.0;
      vb.m_Scratch.m_vecNormal.z = 1.0;
      if ( vb.m_pMemory != 0 && (vb.m_nVertexIncrement == 0 || vb.m_nVertexCount < vb.m_nMaxVertexCount) )
      {
        v19 = &vb.m_pMemory[vb.m_nVertexCount];
        v19->m_vecPos.x = x;
        v19->m_vecPos.y = vb.m_Scratch.m_vecPos.y;
        v19->m_vecPos.z = vb.m_Scratch.m_vecPos.z;
        v19->m_color.color = vb.m_Scratch.m_color.color;
        v19->m_vecNormal = vb.m_Scratch.m_vecNormal;
        v19->m_vecStartPoint = vb.m_Scratch.m_vecStartPoint;
        vb.m_nVertexCount += vb.m_nVertexIncrement;
      }
      ++v15;
    }
    while ( v15 != &pVertexBase[nVertexCount] );
  }
  if ( nEdgeCount > 0 )
  {
    v20 = pIndexBase;
    do
    {
      if ( ib.m_pMemory != 0 )
      {
        ib.m_pMemory[ib.m_nIndexCount] = *v20;
        v21 = *v20;
        v22 = ib.m_nIndexIncrement + ib.m_nIndexCount;
        ib.m_nIndexCount += ib.m_nIndexIncrement;
        if ( ib.m_pMemory != 0 )
        {
          ib.m_pMemory[v22] = v21;
          v23 = v20[1];
          v24 = ib.m_nIndexIncrement + ib.m_nIndexCount;
          ib.m_nIndexCount += ib.m_nIndexIncrement;
          if ( ib.m_pMemory != 0 )
          {
            ib.m_pMemory[v24] = v23;
            ib.m_nIndexCount += ib.m_nIndexIncrement;
          }
        }
      }
      v20 += 2;
    }
    while ( v20 != &pIndexBase[2 * (nEdgeCount - 1) + 2] );
  }
  if ( *(&vb.CVertexDataBase<VertexWireFrame_t> + 71) >= 0 && vb.m_pMemory != 0 )
  {
    m_pMemory = vb.m_pMemory;
    (*(vb.m_pRenderContext->_vptr_IRenderContext + 52))(
      vb.m_pRenderContext,
      vb.m_hVertexBuffer,
      (40 * vb.m_nVertexCount),
      &m_pMemory);
    vb.m_pMemory = 0;
  }
  vb.m_nVertexCount = 0;
  vb.m_nVertexIncrement = 0;
  vb.m_nMaxVertexCount = 0;
  if ( *(&ib.CIndexDataBase<unsigned int> + 31) >= 0 && ib.m_pMemory != 0 )
  {
    v41 = ib.m_pMemory;
    (*(ib.m_pRenderContext->_vptr_IRenderContext + 50))(
      ib.m_pRenderContext,
      ib.m_hIndexBuffer,
      (4 * ib.m_nIndexCount),
      &v41);
    ib.m_pMemory = 0;
  }
  ib.m_nIndexCount = 0;
  ib.m_nIndexIncrement = 0;
  v25 = *(*g_pSceneSystem + 104LL);
  m_pData = hMaterial.m_pBinding->m_pData;
  *(&ib.CIndexDataBase<unsigned int> + 31) &= ~0x40u;
  *(&vb.CVertexDataBase<VertexWireFrame_t> + 71) &= ~0x40u;
  v51[0] = m_pData;
  v27 = v25(
          g_pSceneSystem,
          pSceneWorld,
          vb.m_hVertexBuffer,
          ib.m_hIndexBuffer,
          v51,
          nVertexCount,
          3 * nEdgeCount,
          &bbox,
          &bbox.m_vMaxBounds,
          5,
          0,
          1);
  if ( s_physResource.m_nClassID == 0xFF )
    s_physResource.m_nClassID = (*(*g_pSceneSystem + 760LL))(g_pSceneSystem, s_physResource.m_pClassName);
  (*(*g_pSceneSystem + 768LL))(g_pSceneSystem, v27);
  CIndexData<unsigned int>::Release(&ib);
  CVertexData<VertexWireFrame_t>::Release(&vb);
  (*(v9->_vptr_IRenderContext + 6))(v9);
  (*(*pRenderContext + 384LL))(pRenderContext, v9);
  return v27;
}


// ComputeOrthographicAreasAndDeleteShape  (line 453, @0x00000000031a5fc0, libserver.so)  // inlines: CShapeCastResult, GetSize, SetToIdentity, SmallestComponentValue, Vector, VectorSubtract, operator-, operator=
// calls: SetIdentityMatrix
Vector __fastcall ComputeOrthographicAreasAndDeleteShape(HPhysicsShape hShape)
{
  float v2; // xmm4_4
  float v3; // xmm2_4
  float v4; // xmm3_4
  __int64 v5; // r8
  float *v6; // r13
  HPhysicsShape v7; // rax
  int v8; // r14d
  float *v9; // r15
  HPhysicsShape v10; // r12
  IPhysicsShape *v11; // rax
  float *v12; // r12
  int v13; // r13d
  float *v14; // r14
  int v15; // r15d
  IPhysicsShape *v16; // rbx
  __int64 v17; // r11
  float v18; // xmm0_4
  int v19; // r15d
  __int64 v20; // rdi
  float v23; // [rsp+8h] [rbp-138h]
  int u; // [rsp+Ch] [rbp-134h]
  float flSphereRadius; // [rsp+20h] [rbp-120h]
  float v26; // [rsp+24h] [rbp-11Ch]
  __int64 nAxis; // [rsp+30h] [rbp-110h]
  float v28; // [rsp+38h] [rbp-108h]
  Vector vSize; // [rsp+50h] [rbp-F0h]
  Vector vAreaFractions; // [rsp+60h] [rbp-E0h]
  Vector vRayStart; // [rsp+70h] [rbp-D0h] BYREF
  Vector vRayDelta; // [rsp+80h] [rbp-C0h] BYREF
  AABB_t bbox; // [rsp+90h] [rbp-B0h] BYREF
  matrix3x4_t tm; // [rsp+B0h] [rbp-90h] BYREF
  CShapeCastResult hit; // [rsp+E0h] [rbp-60h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  SetIdentityMatrix(&tm);
  (*(*hShape + 424LL))(&bbox, hShape, &tm);
  vAreaFractions.x = 0.0;
  vAreaFractions.y = 0.0;
  vAreaFractions.z = 0.0;
  vSize.x = bbox.m_vMaxBounds.x - bbox.m_vMinBounds.x;
  v2 = fabs(bbox.m_vMaxBounds.x - bbox.m_vMinBounds.x);
  vSize.y = bbox.m_vMaxBounds.y - bbox.m_vMinBounds.y;
  v3 = fabs(bbox.m_vMaxBounds.y - bbox.m_vMinBounds.y);
  vSize.z = bbox.m_vMaxBounds.z - bbox.m_vMinBounds.z;
  v4 = fabs(bbox.m_vMaxBounds.z - bbox.m_vMinBounds.z);
  if ( v3 <= v2 )
  {
    if ( v4 <= v3 )
      goto LABEL_3;
    v4 = v3;
    if ( v3 <= v2 )
      goto LABEL_3;
  }
  else if ( v4 <= v2 )
  {
LABEL_3:
    v26 = bbox.m_vMaxBounds.x - bbox.m_vMinBounds.x;
    nAxis = 0;
    flSphereRadius = v4 * 0.0625;
    while ( 1 )
    {
      u = 0;
      v23 = *(&vSize.x + (nAxis + 1) % 3);
      v5 = 4LL * ((nAxis + 2) % 3);
      v6 = (&vRayStart.x + v5);
      v7 = hShape;
      v28 = *(&vSize.x + v5);
      v8 = 0;
      v9 = &vRayStart.x + (nAxis + 1) % 3;
      v10 = v7;
      do
      {
        v11 = v10;
        v12 = v6;
        v13 = v8;
        v14 = v9;
        v15 = 0;
        v16 = v11;
        do
        {
          hit.m_flHitTime = 1.0;
          hit.m_vHitPoint.x = 0.0;
          hit.m_vHitPoint.y = 0.0;
          hit.m_bStartInSolid = 0;
          *&vRayStart.x = *&bbox.m_vMinBounds.x;
          vRayDelta.x = 0.0;
          vRayDelta.y = 0.0;
          v17 = *v16;
          hit.m_vHitPoint.z = 0.0;
          vRayStart.z = bbox.m_vMinBounds.z;
          v18 = (0.125 * (u * v23)) + *v14;
          hit.m_vHitNormal.x = 0.0;
          vRayDelta.z = 0.0;
          *(&vRayDelta.x + nAxis) = v26;
          *v14 = v18;
          hit.m_vHitNormal.y = 0.0;
          hit.m_vHitNormal.z = 0.0;
          hit.m_nTriangle = -1;
          hit.m_pMaterial = 0;
          *v12 = ((v15 * v28) * 0.125) + *v12;
          (*(v17 + 224))(v16, &hit, &vRayStart, &vRayDelta, flSphereRadius, 1.0);
          if ( hit.m_flHitTime < 1.0 )
            ++v13;
          ++v15;
        }
        while ( v15 != 9 );
        ++u;
        v9 = v14;
        v8 = v13;
        v6 = v12;
        v10 = v16;
      }
      while ( u != 9 );
      v19 = v8;
      hShape = v16;
      v20 = nAxis++;
      *(&vAreaFractions.x + v20) = v19 / 81.0;
      if ( nAxis == 3 )
        break;
      v26 = *(&vSize.x + nAxis);
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, v16);
    *&result.x = *&vAreaFractions.x;
    result.z = vAreaFractions.z;
    return result;
  }
  v4 = v2;
  goto LABEL_3;
}


// CRnHullSeparator::CRnHullSeparator  (line 491, @0x00000000031a80d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetMeshVertices, CMesh::BuildIslandMap, CRnHullSeparator::Init, CUtlMemory<Vector, int>::Purge, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<RnHull_t*, int>::Purge
void __fastcall CRnHullSeparator::CRnHullSeparator(
        CRnHullSeparator *const this,
        const matrix3x4_t *const xform,
        CMesh *pMesh)
{
  int v5; // eax
  CUtlVector<Vector,CUtlMemory<Vector,int> > vertices; // [rsp+0h] [rbp-60h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vertToIsland; // [rsp+20h] [rbp-40h] BYREF

  this->m_Size = 0;
  this->m_Memory.m_pMemory = 0;
  this->m_Memory.m_nAllocationCount = 0;
  this->m_Memory.m_nGrowSize = 0;
  vertices.m_Size = 0;
  vertices.m_Memory.m_pMemory = 0;
  vertices.m_Memory.m_nAllocationCount = 0;
  vertices.m_Memory.m_nGrowSize = 0;
  vertToIsland.m_Size = 0;
  vertToIsland.m_Memory.m_pMemory = 0;
  vertToIsland.m_Memory.m_nAllocationCount = 0;
  vertToIsland.m_Memory.m_nGrowSize = 0;
  GetMeshVertices(xform, pMesh, &vertices);
  v5 = CMesh::BuildIslandMap(pMesh, &vertToIsland);
  CRnHullSeparator::Init(this, &vertices, &vertToIsland, v5);
  vertToIsland.m_Size = 0;
  if ( (vertToIsland.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&vertToIsland.m_Memory);
    if ( (vertToIsland.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vertToIsland.m_Memory);
  }
  vertices.m_Size = 0;
  if ( (vertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&vertices.m_Memory);
    if ( (vertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&vertices.m_Memory);
  }
}


// CRnHullSeparator::Init  (line 502, @0x00000000031a7c40, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<RnHull_t*>, Element, FillWithValue, GrowMemory, Purge, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlMemory<RnHull_t*, int>::Grow, CUtlMemory<Vector, int>::Purge, CUtlMemory<int, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CRnHullSeparator::CRnHullSeparator
void __fastcall CRnHullSeparator::Init(
        CRnHullSeparator *const this,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const vertices,
        const CUtlVector<int,CUtlMemory<int,int> > *const vertToIsland,
        int nIslandCount)
{
  __int64 v8; // rdx
  int i; // eax
  __int64 v10; // rdx
  int j; // eax
  __int64 v12; // rsi
  int v13; // edx
  unsigned __int64 v14; // rax
  int m_Size; // r15d
  unsigned __int64 v16; // rax
  int v17; // esi
  unsigned __int64 v18; // rdx
  int k; // esi
  int *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  vec_t *v23; // rax
  Vector *v24; // rcx
  unsigned __int64 v25; // rbx
  RnHull_t **v26; // rax
  __int64 v27; // r14
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // [rsp+28h] [rbp-B8h]
  CUtlVector<int,CUtlMemory<int,int> > islandToVertCount; // [rsp+30h] [rbp-B0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > islandRunningIndex; // [rsp+50h] [rbp-90h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > islandRunningIndexEnd; // [rsp+70h] [rbp-70h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > islandVertices; // [rsp+90h] [rbp-50h] BYREF

  islandToVertCount.m_Size = 0;
  islandToVertCount.m_Memory.m_pMemory = 0;
  islandToVertCount.m_Memory.m_nAllocationCount = 0;
  islandToVertCount.m_Memory.m_nGrowSize = 0;
  islandRunningIndex.m_Size = 0;
  islandRunningIndex.m_Memory.m_pMemory = 0;
  islandRunningIndex.m_Memory.m_nAllocationCount = 0;
  islandRunningIndex.m_Memory.m_nGrowSize = 0;
  islandRunningIndexEnd.m_Size = 0;
  islandRunningIndexEnd.m_Memory.m_pMemory = 0;
  islandRunningIndexEnd.m_Memory.m_nAllocationCount = 0;
  islandRunningIndexEnd.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&islandToVertCount, nIslandCount);
  v8 = 0;
  for ( i = 0; i < islandToVertCount.m_Size; ++v8 )
  {
    ++i;
    islandToVertCount.m_Memory.m_pMemory[v8] = 0;
  }
  v10 = 0;
  for ( j = 0; vertToIsland->m_Size > j; ++islandToVertCount.m_Memory.m_pMemory[v12] )
  {
    ++j;
    v12 = vertToIsland->m_Memory.m_pMemory[v10++];
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&islandRunningIndex, nIslandCount);
  if ( nIslandCount > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      islandRunningIndex.m_Memory.m_pMemory[v14 / 4] = v13;
      v13 += islandToVertCount.m_Memory.m_pMemory[v14 / 4];
      v14 += 4LL;
    }
    while ( v14 != 4LL * (nIslandCount - 1) + 4 );
  }
  m_Size = islandRunningIndex.m_Size;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&islandRunningIndexEnd, islandRunningIndex.m_Size);
  if ( m_Size > 0 )
  {
    v16 = 0;
    do
    {
      islandRunningIndexEnd.m_Memory.m_pMemory[v16 / 4] = islandRunningIndex.m_Memory.m_pMemory[v16 / 4];
      v16 += 4LL;
    }
    while ( v16 != 4LL * (m_Size - 1) + 4 );
  }
  v17 = vertices->m_Size;
  islandVertices.m_Size = 0;
  islandVertices.m_Memory.m_pMemory = 0;
  islandVertices.m_Memory.m_nAllocationCount = 0;
  islandVertices.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(&islandVertices, v17);
  v18 = 0;
  for ( k = 0; vertices->m_Size > k; v24->z = v23[2] )
  {
    ++k;
    v20 = &islandRunningIndexEnd.m_Memory.m_pMemory[vertToIsland->m_Memory.m_pMemory[v18 / 4]];
    v21 = *v20;
    *v20 = v21 + 1;
    v22 = 3 * v18;
    v18 += 4LL;
    v23 = (&vertices->m_Memory.m_pMemory->x + v22);
    v24 = &islandVertices.m_Memory.m_pMemory[v21];
    v24->x = *v23;
    v24->y = v23[1];
  }
  if ( nIslandCount > 0 )
  {
    v25 = 0;
    v30 = 4LL * (nIslandCount - 1) + 4;
    do
    {
      v27 = (*(g_pVPhysics2->_vptr_IAppSystem + 31))(
              g_pVPhysics2,
              islandToVertCount.m_Memory.m_pMemory[v25 / 4],
              &islandVertices.m_Memory.m_pMemory[islandRunningIndex.m_Memory.m_pMemory[v25 / 4]],
              0,
              0,
              0);
      if ( v27 != 0 )
      {
        v28 = this->m_Size;
        v29 = this->m_Size;
        if ( v28 == this->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<RnHull_t *,int>::Grow(&this->m_Memory, 1);
          v29 = this->m_Size;
        }
        this->m_Size = v29 + 1;
        v26 = &this->m_Memory.m_pMemory[v28];
        if ( v26 != 0 )
          *v26 = v27;
      }
      v25 += 4LL;
    }
    while ( v25 != v30 );
  }
  islandVertices.m_Size = 0;
  if ( (islandVertices.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<Vector,int>::Purge(&islandVertices.m_Memory), (islandVertices.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    islandRunningIndexEnd.m_Size = 0;
    if ( (islandRunningIndexEnd.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_23;
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&islandVertices.m_Memory);
    islandRunningIndexEnd.m_Size = 0;
    if ( (islandRunningIndexEnd.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_23;
  }
  CUtlMemory<int,int>::Purge(&islandRunningIndexEnd.m_Memory);
  if ( (islandRunningIndexEnd.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<int,int>::Purge(&islandRunningIndexEnd.m_Memory);
LABEL_23:
  islandRunningIndex.m_Size = 0;
  if ( (islandRunningIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&islandRunningIndex.m_Memory);
    if ( (islandRunningIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&islandRunningIndex.m_Memory);
  }
  islandToVertCount.m_Size = 0;
  if ( (islandToVertCount.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&islandToVertCount.m_Memory);
    if ( (islandToVertCount.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&islandToVertCount.m_Memory);
  }
}


// CRnHullSeparator::DestroyHulls  (line 542, @0x00000000031a63a0, libserver.so)  // inlines: RemoveAll
void __fastcall CRnHullSeparator::DestroyHulls(CRnHullSeparator *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  RnHull_t *v4; // rsi

  if ( this->m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_Memory.m_pMemory[v2++];
      (*(g_pVPhysics2->_vptr_IAppSystem + 33))(g_pVPhysics2, v4, 0, 0);
    }
    while ( this->m_Size > v3 );
  }
  this->m_Size = 0;
}


