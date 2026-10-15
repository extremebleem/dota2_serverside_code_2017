// Reconstructed from DWARF by pahole; not original source.

// src/meshutils/formats.cpp:13
struct ShaderToContentMapping_t {
	const char * m_pShaderSemanticName;  // +0x0
	const char * m_pContentSemanticName;  // +0x8
	int m_nContentSemanticIndex;  // +0x10

	// sizeof = 24
};

// src/meshutils/formats.cpp:160
struct ColorFormatInfo_t {
	int m_nComponents;  // +0x0
	bool m_bSigned;  // +0x4
	bool m_bNormalized;  // +0x5
	bool m_bFloat;  // +0x6

	int m_nBytesPerComponent;  // +0x8
	int m_nTotalBytes;  // +0xc

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_formats.cpp  (line 0, @0x0000000001a6d300, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_formats_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GetColorFormatForSize  (line 63, @0x00000000031c1800, libserver.so)
// globals: g_DefaultFormatTable
ColorFormat_t __fastcall GetColorFormatForSize(int nFloats)
{
  ColorFormat_t result; // eax

  result = ColorFormat_t::COLOR_FORMAT_UNKNOWN;
  if ( nFloats <= 4 )
    return g_DefaultFormatTable[nFloats];
  return result;
}


// GetDefaultColorFormatForAttribute  (line 78, @0x00000000031c1820, libserver.so)  // inlines: GetColorFormatForSize, Length, V_isdigit, V_strlen
// calls: CUtlString::Get, strlen, V_stricmp_fast, CUtlString::SetLength
// callers: CreatePackedInputLayout
// globals: g_DefaultFormatTable
ColorFormat_t __fastcall GetDefaultColorFormatForAttribute(CMeshVertexAttribute *const attr)
{
  const char *v2; // r13
  int v3; // esi
  __int64 v4; // rax
  int v5; // eax
  const char **p_m_pContentSemanticName; // rbx
  int i; // r12d
  __int64 m_nSizeFloats; // rdx
  ColorFormat_t result; // eax

  v2 = CUtlString::Get(&attr->m_name);
  if ( attr->m_name.m_pString != 0 )
  {
    v3 = strlen(attr->m_name.m_pString);
    v4 = v3 - 1LL;
  }
  else
  {
    v4 = -1;
    v3 = 0;
  }
  v5 = v2[v4];
  if ( (v5 - 48) <= 9u )
  {
    attr->m_nSemanticIndex = v5 - 48;
    CUtlString::SetLength(&attr->m_name, v3 - 1);
    v2 = CUtlString::Get(&attr->m_name);
  }
  p_m_pContentSemanticName = &g_pShaderToContentMapping[0].m_pContentSemanticName;
  for ( i = 0; i != 16; ++i )
  {
    if ( V_stricmp_fast(v2, *p_m_pContentSemanticName) == 0 && *(p_m_pContentSemanticName + 2) == attr->m_nSemanticIndex )
      return g_pShaderToContentMapping[i].m_defaultColorFormat;
    p_m_pContentSemanticName += 3;
  }
  m_nSizeFloats = attr->m_nSizeFloats;
  result = ColorFormat_t::COLOR_FORMAT_UNKNOWN;
  if ( m_nSizeFloats <= 4 )
    return g_DefaultFormatTable[m_nSizeFloats];
  return result;
}


// GetContentStreamMapping  (line 107, @0x00000000031c1920, libserver.so)
// calls: V_stricmp_fast
// callers: CreateMaterialSpecificInputLayoutFromPackedInputLayout
// globals: g_pShaderToContentMapping
ShaderToContentMapping_t *__fastcall GetContentStreamMapping(const char *pShaderStreamName)
{
  int v2; // r12d
  ShaderToContentMapping_t *i; // rbx

  v2 = 0;
  for ( i = g_pShaderToContentMapping; V_stricmp_fast(pShaderStreamName, i->m_pShaderSemanticName) != 0; ++i )
  {
    if ( ++v2 == 16 )
      return 0;
  }
  return &g_pShaderToContentMapping[v2];
}


// FindInputLayoutFieldForContentStream  (line 120, @0x00000000031c1990, libserver.so)
// calls: V_stricmp_fast
// callers: CreateMaterialSpecificInputLayoutFromPackedInputLayout
int __fastcall FindInputLayoutFieldForContentStream(
        const RenderInputLayoutField_t *pFieldsIn,
        int nFieldsIn,
        const char *pSemanticName,
        int nSemanticIndex)
{
  int v7; // r12d

  v7 = 0;
  if ( nFieldsIn <= 0 )
    return -1;
  while ( V_stricmp_fast(pFieldsIn, pSemanticName) != 0 || pFieldsIn->m_nSemanticIndex != nSemanticIndex )
  {
    ++v7;
    ++pFieldsIn;
    if ( v7 == nFieldsIn )
      return -1;
  }
  return v7;
}


// CMesh::CalculateInputLayoutFromAttributes  (line 136, @0x00000000031c1a10, libserver.so)  // inlines: GetColorFormatForSize, V_memset, V_strncpy<int>, memset
// calls: memset, CUtlString::Get, _V_strncpy
// callers: CMesh::CreateSimpleUnpackedVBAndIBForMesh
// globals: g_DefaultFormatTable
bool __fastcall CMesh::CalculateInputLayoutFromAttributes(
        const CMesh *const this,
        RenderInputLayoutField_t *pOutFields,
        int *pInOutNumFields)
{
  bool result; // al
  __int64 m_nAttributeCount; // rdx
  RenderInputLayoutField_t *v7; // rbx
  int v8; // eax
  __int64 v9; // r12
  int v10; // r14d
  const char *v11; // rax
  __int64 m_nSizeFloats; // rdx
  ColorFormat_t v13; // eax
  int m_nSemanticIndex; // eax

  result = 0;
  m_nAttributeCount = this->m_nAttributeCount;
  if ( *pInOutNumFields >= m_nAttributeCount )
  {
    v7 = pOutFields;
    memset(pOutFields, 0, 56 * m_nAttributeCount);
    v8 = this->m_nAttributeCount;
    if ( v8 > 0 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = CUtlString::Get(&this->m_pAttributes[v9].m_name);
        _V_strncpy(v7, v11, 32);
        m_nSizeFloats = this->m_pAttributes[v9].m_nSizeFloats;
        v13 = ColorFormat_t::COLOR_FORMAT_UNKNOWN;
        if ( m_nSizeFloats <= 4 )
          v13 = g_DefaultFormatTable[m_nSizeFloats];
        v7->m_Format = v13;
        ++v10;
        ++v7;
        v7[-1].m_nInstanceStepRate = 0;
        v7[-1].m_nOffset = 4 * this->m_pAttributes[v9].m_nOffsetFloats;
        m_nSemanticIndex = this->m_pAttributes[v9].m_nSemanticIndex;
        v7[-1].m_nSlot = 0;
        ++v9;
        v7[-1].m_nSlotType = RenderSlotType_t::RENDER_SLOT_PER_VERTEX;
        v7[-1].m_nSemanticIndex = m_nSemanticIndex;
        v8 = this->m_nAttributeCount;
      }
      while ( v8 > v10 );
    }
    *pInOutNumFields = v8;
    return 1;
  }
  return result;
}


// ConvertFloatToChannel  (line 296, @0x00000000031c1b20, libserver.so)  // inlines: ConvertFloatTo16bits
// calls: Warning
// callers: FillVBForAttribute
// strings: "ConvertFloatToChannel: Trying to convert to a a float to a destation of byte size %d\n", "ConvertFloatToChannel: Trying to convert to a a normalized float to a destation of byte s
void __fastcall ConvertFloatToChannel(
        uint8 *pDest,
        int nDestBytes,
        bool bDestSigned,
        bool bDestNorm,
        bool bDestFloat,
        float flSource)
{
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  int v9; // eax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  __int16 v15; // dx
  __int16 v16; // si
  __int16 v17; // cx
  int v18; // eax
  int v19; // r8d
  int v20; // esi
  int v21; // eax

  if ( bDestFloat )
  {
    if ( nDestBytes == 4 )
    {
      *pDest = flSource;
      return;
    }
    if ( nDestBytes != 2 )
    {
      Warning("ConvertFloatToChannel: Trying to convert to a a float to a destation of byte size %d\n", nDestBytes);
      return;
    }
    if ( flSource > 65504.0 )
    {
      v11 = 0x477FE000u;
    }
    else
    {
      v10 = 0xC77FE000;
      *v10.m128i_i32 = fmaxf(-65504.0, flSource);
      v11 = v10;
    }
    v12 = _mm_cvtsi128_si32(v11);
    v13 = v12 >> 31 << 15;
    v14 = v12 & 0x7FFFFFFF;
    v15 = v12 >> 31 << 15;
    if ( (v12 & 0x7FFFFFFF) != 0 )
    {
      v16 = (_mm_cvtsi128_si32(v11) >> 16) & 0x7F80;
      if ( v16 != 0 )
      {
        if ( v14 == 2139095040 )
          goto LABEL_34;
        if ( v16 != 32640 || (v12 & 0x7FFFFF) == 0 )
        {
LABEL_44:
          v19 = (v12 >> 23);
          v20 = v19 - 127;
          if ( v19 - 127 >= -24 )
          {
            if ( v20 >= -14 )
            {
              if ( v20 <= 15 )
              {
                v15 = ((v12 & 0x7FFFFF) >> 13) | v13 | (((v20 + 15) & 0x1F) << 10);
                goto LABEL_37;
              }
              goto LABEL_34;
            }
          }
          else
          {
            v15 = v12 >> 31 << 15;
          }
          HIBYTE(v15) &= 0x83u;
          if ( (113 - v19 - 1) <= 9 )
            v15 = ((1 << (10 - (113 - v19))) + ((v12 & 0x7FFFFF) >> (113 - v19 + 13))) & 0x3FF | v15 & 0xFC00;
          goto LABEL_37;
        }
      }
      else if ( (v12 & 0x7FFFFF) == 0 )
      {
        if ( v14 == 2139095040 )
        {
LABEL_34:
          v17 = v13 | 0x3FF;
          LOBYTE(v15) = v17;
          HIBYTE(v15) = HIBYTE(v17) | 0x78;
LABEL_37:
          *pDest = v15;
          return;
        }
        goto LABEL_44;
      }
    }
    v15 = v12 >> 31 << 15;
    goto LABEL_37;
  }
  if ( !bDestNorm )
  {
    if ( bDestSigned )
    {
      switch ( nDestBytes )
      {
        case 4:
          v18 = 0x7FFFFFFF;
          if ( flSource <= 2147483600.0 )
          {
            v18 = 0x80000000;
            if ( flSource >= -2147483600.0 )
            {
              *pDest = flSource;
              return;
            }
          }
LABEL_40:
          *pDest = v18;
          return;
        case 2:
          LOWORD(v21) = 0x7FFF;
          if ( flSource <= 32767.0 )
          {
            LOWORD(v21) = 0x8000;
            if ( flSource >= -32768.0 )
              v21 = flSource;
          }
          *pDest = v21;
          return;
        case 1:
          LOBYTE(v9) = 127;
          if ( flSource <= 127.0 )
          {
            LOBYTE(v9) = 0x80;
            if ( flSource >= -128.0 )
              v9 = flSource;
          }
          *pDest = v9;
          return;
        default:
          break;
      }
LABEL_19:
      Warning(
        "ConvertFloatToChannel: Trying to convert to a a normalized float to a destation of byte size %d\n",
        nDestBytes);
      return;
    }
    v7 = 1.0;
    if ( flSource <= 1.0 )
      v7 = fmaxf(0.0, flSource);
    v8 = v7;
    if ( nDestBytes == 4 )
      goto LABEL_39;
LABEL_17:
    if ( nDestBytes == 2 )
    {
      *pDest = (v8 * 65535.0);
      return;
    }
    if ( nDestBytes == 1 )
    {
      *pDest = (v8 * 255.0);
      return;
    }
    goto LABEL_19;
  }
  v6 = 1.0;
  if ( flSource <= 1.0 )
    v6 = fmaxf(-1.0, flSource);
  if ( !bDestSigned )
  {
    v8 = (v6 * 0.5) + 0.5;
    if ( nDestBytes == 4 )
    {
LABEL_39:
      v18 = (v8 * 4294967300.0);
      goto LABEL_40;
    }
    goto LABEL_17;
  }
  switch ( nDestBytes )
  {
    case 4:
      *pDest = (v6 * 2147483600.0);
      break;
    case 2:
      *pDest = (v6 * 32767.0);
      break;
    case 1:
      *pDest = (v6 * 127.0);
      return;
    default:
      goto LABEL_19;
  }
}


// FindShaderInputSignatureElementForAttribute  (line 423, @0x00000000031c1e90, libserver.so)  // inlines: operator[]
// calls: V_stricmp_fast
const VsInputSignatureElement_t *__fastcall FindShaderInputSignatureElementForAttribute(
        const ShaderInputSignatureDesc_t *pShaderInputSignatureDesc,
        const char **ppAttrNames)
{
  unsigned __int64 v3; // r12
  const char **v4; // r15
  const char *v5; // rdi
  const VsInputSignatureElement_t *v6; // r14
  __int64 v8; // [rsp+0h] [rbp-40h]

  if ( pShaderInputSignatureDesc->m_inputElements.m_Size <= 0 )
    return 0;
  v3 = 0;
  v8 = 196 * ((pShaderInputSignatureDesc->m_inputElements.m_Size - 1) + 1LL);
  while ( 1 )
  {
    v4 = ppAttrNames + 1;
    v5 = *ppAttrNames;
    v6 = &pShaderInputSignatureDesc->m_inputElements.m_Memory.m_pMemory[v3 / 0xC4];
    if ( *ppAttrNames != 0 )
      break;
LABEL_8:
    v3 += 196LL;
    if ( v3 == v8 )
      return 0;
  }
  while ( V_stricmp_fast(v5, v6->m_pSemantic) != 0 )
  {
    v5 = *v4++;
    if ( v5 == 0 )
      goto LABEL_8;
  }
  return v6;
}


// CreateMaterialSpecificInputLayoutFromPackedInputLayout  (line 445, @0x00000000031c3270, libserver.so)  // inlines: Element, FillWithValue, V_isdigit, V_strlen, V_strncpy<int>, _V_strcmp, operator[]
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, FindInputLayoutFieldForContentStream, _V_strncpy, GetContentStreamMapping, strlen, __stack_chk_fail
// callers: UpdateInputLayoutForMaterial, CreatePackedInputLayout
// strings: "PerVertexLighting", "curvature"
int __fastcall CreateMaterialSpecificInputLayoutFromPackedInputLayout(
        RenderInputLayoutField_t *pFieldsOut,
        int nMaxFieldsOut,
        const RenderInputLayoutField_t *pFieldsIn,
        int nFieldsIn,
        const CVsInputSignatureVector *pVSInputElements,
        CMesh::InputLayoutToAttributeMap *pMapInputLayoutToAttribute)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r13d
  unsigned __int64 v10; // rbx
  char *m_pSemantic; // r15
  int m_nContentSemanticIndex; // ecx
  int InputLayoutFieldForContentStream; // eax
  const RenderInputLayoutField_t *v14; // rdx
  RenderInputLayoutField_t *v15; // rdi
  VsInputSignatureElement_t *v16; // r12
  ShaderToContentMapping_t *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const RenderInputLayoutField_t *v22; // r12
  int v23; // ebx
  ShaderToContentMapping_t *ContentStreamMapping; // rax
  ShaderToContentMapping_t *v25; // r14
  RenderInputLayoutField_t *v26; // rdi
  __int64 v29; // [rsp+18h] [rbp-88h]
  CMesh::InputLayoutToAttributeMap *pMapInputLayoutToAttributeb; // [rsp+20h] [rbp-80h]
  int nFoundField; // [rsp+38h] [rbp-68h]
  int nFoundFielda; // [rsp+38h] [rbp-68h]
  char pNameWithoutSemantic[32]; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( pMapInputLayoutToAttribute != 0 )
  {
    CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(pMapInputLayoutToAttribute, nFieldsIn);
    if ( pMapInputLayoutToAttribute->m_Size > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        ++v8;
        pMapInputLayoutToAttribute->m_Memory.m_pMemory[v7++] = -1;
      }
      while ( v8 < pMapInputLayoutToAttribute->m_Size );
    }
  }
  v9 = 0;
  if ( pVSInputElements->m_Size <= 0 )
  {
LABEL_18:
    if ( nFieldsIn > 0 )
    {
      v22 = pFieldsIn;
      v23 = 0;
      pMapInputLayoutToAttributeb = pMapInputLayoutToAttribute;
      do
      {
        ContentStreamMapping = GetContentStreamMapping(v22);
        v25 = ContentStreamMapping;
        if ( ContentStreamMapping != 0
          && FindInputLayoutFieldForContentStream(
               pFieldsOut,
               v9,
               ContentStreamMapping->m_pContentSemanticName,
               ContentStreamMapping->m_nContentSemanticIndex) < 0
          && (strcmp(v22, "PerVertexLighting") == 0 || strcmp(v22, "curvature") == 0) )
        {
          v26 = &pFieldsOut[v9];
          v26->m_Format = v22->m_Format;
          v26->m_nInstanceStepRate = v22->m_nInstanceStepRate;
          v26->m_nOffset = v22->m_nOffset;
          v26->m_nSemanticIndex = v25->m_nContentSemanticIndex;
          v26->m_nSlot = v22->m_nSlot;
          v26->m_nSlotType = v22->m_nSlotType;
          _V_strncpy(v26, v25->m_pContentSemanticName, 32);
          if ( pMapInputLayoutToAttributeb != 0 )
            pMapInputLayoutToAttributeb->m_Memory.m_pMemory[v9] = v23;
          if ( nMaxFieldsOut < ++v9 )
            break;
        }
        ++v23;
        ++v22;
      }
      while ( v23 != nFieldsIn );
    }
  }
  else
  {
    v10 = 0;
    v9 = 0;
    v29 = 196 * ((pVSInputElements->m_Size - 1) + 1LL);
    while ( 1 )
    {
      v16 = &pVSInputElements->m_Memory.m_pMemory[v10 / 0xC4];
      m_pSemantic = v16->m_pSemantic;
      v17 = GetContentStreamMapping(v16->m_pSemantic);
      if ( v17 != 0 )
      {
        m_pSemantic = v17->m_pContentSemanticName;
        m_nContentSemanticIndex = v17->m_nContentSemanticIndex;
      }
      else
      {
        if ( v16 == -64LL )
        {
          v20 = -1;
          v19 = 0;
        }
        else
        {
          v18 = strlen(v16->m_pSemantic);
          v19 = v18;
          v20 = v18 - 1LL;
        }
        v21 = v16->m_pSemantic[v20];
        m_nContentSemanticIndex = 0;
        if ( (v21 - 48) <= 9u )
        {
          m_pSemantic = pNameWithoutSemantic;
          nFoundFielda = v21 - 48;
          _V_strncpy(pNameWithoutSemantic, v16->m_pSemantic, v19);
          m_nContentSemanticIndex = nFoundFielda;
        }
      }
      InputLayoutFieldForContentStream = FindInputLayoutFieldForContentStream(
                                           pFieldsIn,
                                           nFieldsIn,
                                           m_pSemantic,
                                           m_nContentSemanticIndex);
      if ( InputLayoutFieldForContentStream >= 0 )
      {
        nFoundField = InputLayoutFieldForContentStream;
        v14 = &pFieldsIn[InputLayoutFieldForContentStream];
        v15 = &pFieldsOut[v9];
        v15->m_Format = v14->m_Format;
        v15->m_nInstanceStepRate = v14->m_nInstanceStepRate;
        v15->m_nOffset = v14->m_nOffset;
        v15->m_nSemanticIndex = v16->m_nD3DSemanticIndex;
        v15->m_nSlot = v14->m_nSlot;
        v15->m_nSlotType = v14->m_nSlotType;
        _V_strncpy(v15, v16->m_pD3DSemanticName, 32);
        if ( pMapInputLayoutToAttribute != 0 )
          pMapInputLayoutToAttribute->m_Memory.m_pMemory[v9] = nFoundField;
        if ( ++v9 > nMaxFieldsOut )
          break;
      }
      v10 += 196LL;
      if ( v10 == v29 )
        goto LABEL_18;
    }
  }
  return v9;
}


// CreatePackedInputLayout  (line 572, @0x00000000031c3590, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<RenderInputLayoutField_t>, CopyConstruct<int>, Element, EnsureCapacity, Find, GetColorFormatForSize, GrowMemory, IsJointIndices, IsJointWeight, IsNormal, IsPerVertexLighting, IsPosition, IsTangent, LeafCodeInfo_t, Purge, Remove, RemoveAll, ShiftElementsLeft, V_memmove, V_memset, V_strncpy<int>, memcpy, memmove, memset, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, GetDefaultColorFormatForAttribute, CUtlString::Get, V_stricmp_fast, _V_strncpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, Warning, CUtlMemory<RenderInputLayoutField_t, int>::Grow (21 total)
// callers: CMesh::CreatePackedInputLayout
// strings: "normal", "blendweight", "blendweights", "blendindices", "pervertexlighting", "formats.cpp" (11 total)
// globals: g_bSupport10BitBlendIndices, CreatePackedInputLayout(CMesh const*,CMeshVertexAttribute *,int,PackedInputLayoutInfo_t *,CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_, g_DefaultFormatTable, g_FormatInfo
// local variable allocation has failed, the output may be wrong!
int __fastcall CreatePackedInputLayout(
        const CMesh *pMesh,
        CMeshVertexAttribute *pAttributes,
        int nAttributeCount,
        PackedInputLayoutInfo_t *pInfo,
        CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int> > *const fields,
        CMesh::InputLayoutToAttributeMap *const mapInputLayoutToAttribute,
        const ShaderInputSignatureDesc_t *pShaderInputSignatureDesc,
        bool bSplitPositionIntoSeparateStream,
        bool bUseUncompressedVertices)
{
  CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int> > *v11; // r13
  uint32 m_nGrowSize; // eax
  RenderInputLayoutField_t *v14; // rsi
  __int64 v15; // rax
  uint32 v16; // eax
  int *v17; // rsi
  __int64 v18; // rax
  int v19; // r12d
  _BOOL4 v20; // eax
  ColorFormat_t DefaultColorFormatForAttribute; // r15d
  const char *v22; // rax
  const char *v23; // rax
  unsigned int m_nSemanticIndex; // eax
  const char *v25; // rax
  const char *v26; // rax
  const char *v27; // rax
  int v28; // r15d
  __int64 v29; // rsi
  int m_nVertexCount; // r9d
  int v31; // edi
  unsigned int v32; // r8d
  __int64 v33; // rdx
  float *v34; // rcx
  float *v35; // rax
  int v36; // eax
  const char *v37; // rax
  int m_Size; // r15d
  int v39; // eax
  RenderInputLayoutField_t *v40; // rax
  __int64 v41; // r15
  int v42; // eax
  int *v43; // rax
  const char *v44; // rax
  __int64 v45; // rdx
  ColorFormat_t v46; // eax
  char IsChannelEnabled; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r9
  __int64 v53; // r8
  const char *v54; // rax
  __int64 m_nSizeFloats; // rdx
  ColorFormat_t v56; // eax
  RenderInputLayoutField_t *v57; // r12
  int v58; // eax
  unsigned __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  RenderInputLayoutField_t *v62; // rax
  int v63; // r12d
  CMesh::InputLayoutToAttributeMap *v64; // r8
  CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int> > *v65; // r14
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // r15
  int *v70; // rdx
  int v71; // eax
  int v72; // eax
  __int64 v73; // r13
  __int64 v74; // rbx
  int v75; // eax
  __int64 v76; // rdi
  int v77; // esi
  int result; // eax
  unsigned int v79; // edx
  unsigned int i; // r11d
  unsigned int *m_pSemanticName; // rcx
  unsigned int v82; // r8d
  int m_nTotalBytes; // ecx
  const char *v84; // rax
  RenderInputLayoutField_t *m_pMemory; // r12
  RenderInputLayoutField_t *v86; // rax
  int *v87; // r12
  int *v88; // rax
  bool bHasPackedNormal; // [rsp+2Eh] [rbp-432h]
  CMesh::InputLayoutToAttributeMap *v92; // [rsp+40h] [rbp-420h]
  CMesh::InputLayoutToAttributeMap *v93; // [rsp+40h] [rbp-420h]
  int nOrJointIndices; // [rsp+48h] [rbp-418h]
  CMesh::InputLayoutToAttributeMap inputToInputRemap; // [rsp+50h] [rbp-410h] BYREF
  RenderInputLayoutField_t pMaterialPackedFields[16]; // [rsp+70h] [rbp-3F0h] BYREF
  _BYTE nSlot[56]; // [rsp+3F0h] [rbp-70h] OVERLAPPED BYREF
  unsigned __int64 v98; // [rsp+428h] [rbp-38h]

  v11 = fields;
  nOrJointIndices = nAttributeCount;
  v98 = __readfsqword(0x28u);
  CUtlVectorBase<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int>>::SetCount(fields, 0);
  if ( nAttributeCount > v11->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = v11->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = v11->m_Memory.m_pMemory;
        v86 = (**g_pMemAlloc)(g_pMemAlloc, 56LL * nOrJointIndices);
        v11->m_Memory.m_pMemory = v86;
        if ( m_pMemory != 0 )
          memcpy(v86, m_pMemory, 56LL * v11->m_Memory.m_nAllocationCount);
        v11->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v14 = v11->m_Memory.m_pMemory;
        v15 = *g_pMemAlloc;
        if ( v14 != 0 )
          v11->m_Memory.m_pMemory = (*(v15 + 8))(g_pMemAlloc, v14, 56LL * nAttributeCount);
        else
          v11->m_Memory.m_pMemory = (*v15)(g_pMemAlloc, 56LL * nOrJointIndices);
      }
      v11->m_Memory.m_nAllocationCount = nOrJointIndices;
    }
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(mapInputLayoutToAttribute, 0);
  if ( nOrJointIndices > mapInputLayoutToAttribute->m_Memory.m_nAllocationCount )
  {
    v16 = mapInputLayoutToAttribute->m_Memory.m_nGrowSize;
    if ( (v16 & 0x40000000) == 0 )
    {
      if ( (v16 & 0xC0000000) != 0 )
      {
        v87 = mapInputLayoutToAttribute->m_Memory.m_pMemory;
        v88 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * nOrJointIndices);
        mapInputLayoutToAttribute->m_Memory.m_pMemory = v88;
        if ( v87 != 0 )
          memcpy(v88, v87, 4LL * mapInputLayoutToAttribute->m_Memory.m_nAllocationCount);
        mapInputLayoutToAttribute->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v17 = mapInputLayoutToAttribute->m_Memory.m_pMemory;
        v18 = *g_pMemAlloc;
        if ( v17 != 0 )
          mapInputLayoutToAttribute->m_Memory.m_pMemory = (*(v18 + 8))(g_pMemAlloc, v17, 4LL * nOrJointIndices);
        else
          mapInputLayoutToAttribute->m_Memory.m_pMemory = (*v18)(g_pMemAlloc, 4LL * nOrJointIndices);
      }
      mapInputLayoutToAttribute->m_Memory.m_nAllocationCount = nOrJointIndices;
    }
  }
  if ( pInfo != 0 )
  {
    pInfo->m_bHasUncompressedPerVertexLighting = 0;
    *&pInfo->m_bHasPackedTangentFrame = 0;
  }
  if ( nOrJointIndices > 0 )
  {
    v19 = 0;
    bHasPackedNormal = 0;
    while ( 1 )
    {
      DefaultColorFormatForAttribute = GetDefaultColorFormatForAttribute(pAttributes);
      if ( DefaultColorFormatForAttribute == ColorFormat_t::COLOR_FORMAT_UNKNOWN )
      {
        v22 = CUtlString::Get(&pAttributes->m_name);
        if ( V_stricmp_fast(v22, "normal") == 0 )
          DefaultColorFormatForAttribute = !bUseUncompressedVertices
                                         ? ColorFormat_t::COLOR_FORMAT_R8G8B8A8_UNORM
                                         : ColorFormat_t::COLOR_FORMAT_R32G32B32_FLOAT;
      }
      memset(nSlot, 0, sizeof(nSlot));
      v23 = CUtlString::Get(&pAttributes->m_name);
      _V_strncpy(nSlot, v23, 32);
      m_nSemanticIndex = pAttributes->m_nSemanticIndex;
      *&nSlot[40] = 0;
      *&nSlot[32] = m_nSemanticIndex;
      *&nSlot[48] = 0;
      v25 = CUtlString::Get(&pAttributes->m_name);
      if ( V_stricmp_fast(v25, "blendweight") == 0
        || (v26 = CUtlString::Get(&pAttributes->m_name), V_stricmp_fast(v26, "blendweights") == 0) )
      {
        if ( pAttributes->m_nSizeFloats <= 1 )
          goto LABEL_21;
LABEL_18:
        *&nSlot[36] = 28;
        goto LABEL_19;
      }
      v27 = CUtlString::Get(&pAttributes->m_name);
      if ( V_stricmp_fast(v27, "blendindices") != 0 )
      {
        v44 = CUtlString::Get(&pAttributes->m_name);
        if ( V_stricmp_fast(v44, "pervertexlighting") != 0 )
        {
          if ( bUseUncompressedVertices || pAttributes->m_bNoCompression )
          {
            m_nSizeFloats = pAttributes->m_nSizeFloats;
            v56 = ColorFormat_t::COLOR_FORMAT_UNKNOWN;
            if ( m_nSizeFloats <= 4 )
              v56 = g_DefaultFormatTable[m_nSizeFloats];
            *&nSlot[36] = v56;
            if ( bUseUncompressedVertices )
              goto LABEL_19;
          }
          else
          {
            *&nSlot[36] = DefaultColorFormatForAttribute;
          }
          v54 = CUtlString::Get(&pAttributes->m_name);
          if ( V_stricmp_fast(v54, "normal") != 0 )
          {
            v84 = CUtlString::Get(&pAttributes->m_name);
            if ( V_stricmp_fast(v84, "tangent") == 0 && bHasPackedNormal )
              *&nSlot[36] = 0;
          }
          else
          {
            bHasPackedNormal = 1;
          }
          goto LABEL_19;
        }
        if ( !bUseUncompressedVertices )
        {
          if ( pInfo != 0 )
            pInfo->m_bHasCompressedPerVertexLighting = 1;
          goto LABEL_18;
        }
        if ( pInfo != 0 )
          pInfo->m_bHasUncompressedPerVertexLighting = 1;
        v45 = pAttributes->m_nSizeFloats;
        v46 = ColorFormat_t::COLOR_FORMAT_UNKNOWN;
        if ( v45 <= 4 )
          v46 = g_DefaultFormatTable[v45];
        *&nSlot[36] = v46;
LABEL_19:
        v20 = 0;
        if ( !bSplitPositionIntoSeparateStream )
          goto LABEL_20;
        goto LABEL_47;
      }
      v28 = pAttributes->m_nSizeFloats;
      if ( v28 > 4 )
        goto LABEL_70;
      while ( 1 )
      {
        if ( pMesh == 0 )
          goto LABEL_56;
        v29 = 4;
        if ( v28 <= 4 )
          v29 = v28;
        m_nVertexCount = pMesh->m_nVertexCount;
        if ( m_nVertexCount <= 0 )
          goto LABEL_56;
        v31 = 0;
        v32 = 0;
        v33 = v28 + pAttributes->m_nOffsetFloats;
        v34 = &pMesh->m_pVerts[v33 - 1];
        do
        {
          if ( v29 > 0 )
          {
            v33 = &v34[-(v29 - 1) - 1];
            v35 = v34;
            do
              v32 |= *v35--;
            while ( v33 != v35 );
          }
          ++v31;
          v34 += pMesh->m_nVertexStrideFloats;
        }
        while ( v31 != m_nVertexCount );
        if ( v32 <= 0xFF )
        {
LABEL_56:
          *&nSlot[36] = 30;
          goto LABEL_19;
        }
        if ( g_bSupport10BitBlendIndices && v32 <= 0x3FF )
          break;
        if ( v32 <= 0x7FFF )
          goto LABEL_42;
        pAttributes = &LOG_GENERAL;
        nOrJointIndices = v32;
        IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4);
        v53 = nOrJointIndices;
        if ( IsChannelEnabled != 0 )
        {
          *pMaterialPackedFields[0].m_pSemanticName = "formats.cpp";
          *&pMaterialPackedFields[0].m_pSemanticName[16] = "CreatePackedInputLayout";
          *&pMaterialPackedFields[0].m_pSemanticName[8] = 697;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            pMaterialPackedFields,
            "CMesh Cannot create packed input layout, because the bone indices are out of range (0x%X)\n",
            nOrJointIndices);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v50, v51, v48, v49, v53, v52) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_70:
        Warning("Mesh contains %d blend weights per vertex;  truncating to %d\n", v28, 4);
      }
      if ( v28 == 3 )
      {
        if ( CreatePackedInputLayout(CMesh const*,CMeshVertexAttribute *,int,PackedInputLayoutInfo_t *,CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int>> &,CUtlVector&<int,CUtlMemory<int,int>>,ShaderInputSignatureDesc_t const*,bool,bool)::__executeCount <= 0 )
        {
          ++CreatePackedInputLayout(CMesh const*,CMeshVertexAttribute *,int,PackedInputLayoutInfo_t *,CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int>> &,CUtlVector&<int,CUtlMemory<int,int>>,ShaderInputSignatureDesc_t const*,bool,bool)::__executeCount;
          Warning(
            "Using 10-bit blend indices: are you sure they are supproted on the target hardware?\n",
            v29,
            v33,
            v34);
        }
        *&nSlot[36] = 25;
        goto LABEL_19;
      }
LABEL_42:
      if ( CreatePackedInputLayout(CMesh const*,CMeshVertexAttribute *,int,PackedInputLayoutInfo_t *,CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int>> &,CUtlVector&<int,CUtlMemory<int,int>>,ShaderInputSignatureDesc_t const*,bool,bool)::__executeCount <= 0 )
      {
        ++CreatePackedInputLayout(CMesh const*,CMeshVertexAttribute *,int,PackedInputLayoutInfo_t *,CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int>> &,CUtlVector&<int,CUtlMemory<int,int>>,ShaderInputSignatureDesc_t const*,bool,bool)::__executeCount;
        Msg("Using 16-bit blend indices\n", v29, v33, v34);
      }
      v36 = 38;
      if ( v28 > 2 )
        v36 = 14;
      *&nSlot[36] = v36;
      v20 = 0;
      if ( !bSplitPositionIntoSeparateStream )
      {
LABEL_20:
        if ( *&nSlot[36] != 0 )
          goto LABEL_48;
        goto LABEL_21;
      }
LABEL_47:
      v37 = CUtlString::Get(&pAttributes->m_name);
      v20 = V_stricmp_fast(v37, "position") != 0;
      if ( *&nSlot[36] != 0 )
      {
LABEL_48:
        *&nSlot[44] = v20;
        m_Size = v11->m_Size;
        v39 = v11->m_Size;
        if ( v11->m_Size == v11->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<RenderInputLayoutField_t,int>::Grow(&v11->m_Memory, 1);
          v39 = v11->m_Size;
        }
        v11->m_Size = v39 + 1;
        v40 = &v11->m_Memory.m_pMemory[m_Size];
        if ( v40 != 0 )
          qmemcpy(v40, nSlot, sizeof(RenderInputLayoutField_t));
        v41 = mapInputLayoutToAttribute->m_Size;
        v42 = mapInputLayoutToAttribute->m_Size;
        if ( v41 == mapInputLayoutToAttribute->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&mapInputLayoutToAttribute->m_Memory, 1);
          v42 = mapInputLayoutToAttribute->m_Size;
        }
        mapInputLayoutToAttribute->m_Size = v42 + 1;
        v43 = &mapInputLayoutToAttribute->m_Memory.m_pMemory[v41];
        if ( v43 != 0 )
          *v43 = v19;
      }
LABEL_21:
      ++v19;
      ++pAttributes;
      if ( v19 == nOrJointIndices )
        goto LABEL_82;
    }
  }
  bHasPackedNormal = 0;
LABEL_82:
  if ( pShaderInputSignatureDesc == 0 )
    goto LABEL_101;
  v57 = pMaterialPackedFields;
  inputToInputRemap.m_Size = 0;
  inputToInputRemap.m_Memory.m_pMemory = 0;
  inputToInputRemap.m_Memory.m_nAllocationCount = 0;
  inputToInputRemap.m_Memory.m_nGrowSize = 0;
  memset(pMaterialPackedFields, 0, sizeof(pMaterialPackedFields));
  v58 = CreateMaterialSpecificInputLayoutFromPackedInputLayout(
          pMaterialPackedFields,
          16,
          v11->m_Memory.m_pMemory,
          v11->m_Size,
          &pShaderInputSignatureDesc->m_inputElements,
          &inputToInputRemap);
  if ( v58 > 0 )
  {
    v59 = 0;
    v60 = 4LL * (v58 - 1) + 4;
    do
    {
      ++v57;
      v61 = inputToInputRemap.m_Memory.m_pMemory[v59 / 4];
      v59 += 4LL;
      v62 = &v11->m_Memory.m_pMemory[v61];
      *v62->m_pSemanticName = *v57[-1].m_pSemanticName;
      *&v62->m_pSemanticName[8] = *&v57[-1].m_pSemanticName[8];
      *&v62->m_pSemanticName[16] = *&v57[-1].m_pSemanticName[16];
      *&v62->m_pSemanticName[24] = *&v57[-1].m_pSemanticName[24];
      *&v62->m_nSemanticIndex = *&v57[-1].m_nSemanticIndex;
      *&v62->m_nOffset = *&v57[-1].m_nOffset;
      *&v62->m_nSlotType = *&v57[-1].m_nSlotType;
    }
    while ( v59 != v60 );
  }
  v63 = v11->m_Size - 1;
  if ( v63 >= 0 )
  {
    v64 = mapInputLayoutToAttribute;
    v65 = v11;
    v66 = v63 + 1LL;
    v67 = 8 * v66;
    v68 = 4 * v66;
    v69 = ((v63 + 1LL) << 6) - v67;
    while ( 1 )
    {
      if ( inputToInputRemap.m_Size <= 0 )
        goto LABEL_93;
      if ( v63 != *inputToInputRemap.m_Memory.m_pMemory )
        break;
LABEL_111:
      v73 = v68 - 4;
      v74 = v69 - 56;
LABEL_98:
      --v63;
      v69 = v74;
      v68 = v73;
      if ( v63 == -1 )
      {
        v11 = v65;
        goto LABEL_100;
      }
    }
    v70 = inputToInputRemap.m_Memory.m_pMemory + 1;
    v71 = 0;
    while ( ++v71 != inputToInputRemap.m_Size )
    {
      if ( v63 == *v70++ )
      {
        if ( v71 == -1 )
          break;
        goto LABEL_111;
      }
    }
LABEL_93:
    v72 = v64->m_Size;
    v73 = v68 - 4;
    if ( v64->m_Size - v63 - 1 > 0 )
    {
      v92 = v64;
      memmove(v64->m_Memory.m_pMemory + v73, v64->m_Memory.m_pMemory + v68, 4LL * (v64->m_Size - v63 - 1));
      v64 = v92;
      v72 = v92->m_Size;
    }
    v74 = v69 - 56;
    v64->m_Size = v72 - 1;
    v75 = v65->m_Size;
    if ( v65->m_Size - v63 - 1 > 0 )
    {
      v93 = v64;
      memmove(
        &v65->m_Memory.m_pMemory->m_pSemanticName[v74],
        &v65->m_Memory.m_pMemory->m_pSemanticName[v69],
        56LL * (v65->m_Size - v63 - 1));
      v75 = v65->m_Size;
      v64 = v93;
    }
    v65->m_Size = v75 - 1;
    goto LABEL_98;
  }
LABEL_100:
  inputToInputRemap.m_Size = 0;
  if ( (inputToInputRemap.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<int,int>::Purge(&inputToInputRemap.m_Memory),
        (inputToInputRemap.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
LABEL_101:
    if ( v11->m_Size <= 0 )
    {
LABEL_120:
      result = 0;
      goto LABEL_107;
    }
  }
  else
  {
    CUtlMemory<int,int>::Purge(&inputToInputRemap.m_Memory);
    if ( v11->m_Size <= 0 )
      goto LABEL_120;
  }
  v76 = 0;
  v77 = 0;
  result = 0;
  v79 = 0;
  for ( i = 0; ; i = v82 )
  {
    m_pSemanticName = v11->m_Memory.m_pMemory[v76].m_pSemanticName;
    v82 = m_pSemanticName[11];
    if ( v82 != i )
      v79 = 0;
    ++v77;
    ++v76;
    m_pSemanticName[10] = v79;
    m_nTotalBytes = g_FormatInfo[m_pSemanticName[9]].m_nTotalBytes;
    v79 += m_nTotalBytes;
    result += m_nTotalBytes;
    if ( v11->m_Size <= v77 )
      break;
  }
LABEL_107:
  if ( pInfo != 0 )
    pInfo->m_bHasPackedTangentFrame = bHasPackedNormal && !bUseUncompressedVertices;
  return result;
}


// CMesh::CreatePackedInputLayout  (line 825, @0x00000000031c40c0, libserver.so)
// calls: CreatePackedInputLayout
int __fastcall CMesh::CreatePackedInputLayout(
        const CMesh *const this,
        PackedInputLayoutInfo_t *pInfo,
        CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int> > *const fields,
        CMesh::InputLayoutToAttributeMap *const mapInputLayoutToAttribute,
        const ShaderInputSignatureDesc_t *pShaderInputSignatureDesc,
        bool bSplitPositionIntoSeparateStream,
        bool bUseUncompressedVertices)
{
  return CreatePackedInputLayout(
           this,
           this->m_pAttributes,
           this->m_nAttributeCount,
           pInfo,
           fields,
           mapInputLayoutToAttribute,
           pShaderInputSignatureDesc,
           bSplitPositionIntoSeparateStream,
           bUseUncompressedVertices);
}


// SetBoneIndexSint16  (line 832, @0x00000000031c1f30, libserver.so)
// calls: Warning
// callers: FillBlendIndices<SetBoneIndexSint16>
// strings: "Joint Indices (%d) Out Of Range for SINT16: Skinning will not work ! \n"
// globals: SetBoneIndexSint16(uchar *,int,uint)::__executeCount
void __fastcall SetBoneIndexSint16(uint8 *pOutput, int nIndex, uint nBoneIndex)
{
  __int64 v3; // r12
  __int16 nBoneIndexa; // [rsp+Ch] [rbp-14h]

  v3 = nIndex;
  if ( nBoneIndex > 0x7FFF && SetBoneIndexSint16(unsigned char *,int,unsigned int)::__executeCount <= 0 )
  {
    nBoneIndexa = nBoneIndex;
    ++SetBoneIndexSint16(unsigned char *,int,unsigned int)::__executeCount;
    Warning("Joint Indices (%d) Out Of Range for SINT16: Skinning will not work ! \n", nBoneIndex);
    *&pOutput[2 * v3] = nBoneIndexa;
  }
  else
  {
    *&pOutput[2 * nIndex] = nBoneIndex;
  }
}


// SetBoneIndexUint8  (line 841, @0x00000000031c2060, libserver.so)
// calls: Warning
// callers: FillVBForAttribute
// strings: "Joint Indices (%d) Out Of Range for UINT8: Skinning will not work ! \n"
// globals: SetBoneIndexUint8(uchar *,int,uint)::__executeCount
void __fastcall SetBoneIndexUint8(uint8 *pOutput, int nIndex, uint nBoneIndex)
{
  __int64 v3; // r12
  uint8 nBoneIndexa; // [rsp+Ch] [rbp-14h]

  v3 = nIndex;
  if ( nBoneIndex > 0xFF && SetBoneIndexUint8(unsigned char *,int,unsigned int)::__executeCount <= 0 )
  {
    nBoneIndexa = nBoneIndex;
    ++SetBoneIndexUint8(unsigned char *,int,unsigned int)::__executeCount;
    Warning("Joint Indices (%d) Out Of Range for UINT8: Skinning will not work ! \n", nBoneIndex);
    pOutput[v3] = nBoneIndexa;
  }
  else
  {
    pOutput[nIndex] = nBoneIndex;
  }
}


// SetBoneIndexUint10  (line 851, @0x00000000031c20c0, libserver.so)
// calls: Warning
// callers: FillVBForAttribute
// strings: "Joint Indices (%d) Out Of Range for UINT10: Skinning will not work ! \n"
// globals: SetBoneIndexUint10(uchar *,int,uint)::__executeCount
void __fastcall SetBoneIndexUint10(uint8 *pOutput, int nIndex, uint nBoneIndex)
{
  char v3; // r12
  uint nBoneIndexa; // [rsp+Ch] [rbp-14h]

  v3 = nIndex;
  if ( nBoneIndex > 0x3FF && SetBoneIndexUint10(unsigned char *,int,unsigned int)::__executeCount <= 0 )
  {
    nBoneIndexa = nBoneIndex;
    ++SetBoneIndexUint10(unsigned char *,int,unsigned int)::__executeCount;
    Warning("Joint Indices (%d) Out Of Range for UINT10: Skinning will not work ! \n", nBoneIndex);
    nBoneIndex = nBoneIndexa;
  }
  *pOutput = (1023 << (-10 * v3 + 22)) & (nBoneIndex << (-10 * v3 + 22)) | *pOutput & ~(1023 << (-10 * v3 + 22));
}


// FillBlendIndices<SetBoneIndexSint16>  (line 866, @0x00000000031c1fa0, libserver.so)
// calls: SetBoneIndexSint16
// callers: FillVBForAttribute
void __fastcall FillBlendIndices<&(SetBoneIndexSint16(unsigned char *,int,unsigned int))>(
        int nBlendWeightCount,
        uint8 *pOutputStream,
        CMeshVertexAttribute *pAttribute,
        const RenderInputLayoutField_t *const inputLayoutField,
        _QWORD *nOutOffset,
        float **const pVertexData)
{
  int v6; // eax
  __int64 v9; // r14
  int v10; // r15d
  int v11; // esi
  uint v12; // ebx
  int v13; // r14d
  __int64 nInputCount; // [rsp+0h] [rbp-50h]
  int nOutOffseta; // [rsp+18h] [rbp-38h]
  int nAttrCount; // [rsp+1Ch] [rbp-34h]

  v6 = pAttribute;
  if ( nBlendWeightCount <= pAttribute )
    v6 = nBlendWeightCount;
  nOutOffseta = inputLayoutField;
  nAttrCount = v6;
  nInputCount = pAttribute;
  if ( v6 <= 0 )
  {
    v12 = 0;
  }
  else
  {
    v9 = 4LL * pAttribute - 4;
    v10 = 0;
    do
    {
      v11 = v10++;
      v12 = *(*nOutOffset + v9);
      v9 -= 4;
      SetBoneIndexSint16(&pOutputStream[nOutOffseta], v11, v12);
    }
    while ( v10 != nAttrCount );
  }
  v13 = nAttrCount;
  if ( nBlendWeightCount > nAttrCount )
  {
    do
      SetBoneIndexSint16(&pOutputStream[nOutOffseta], v13++, v12);
    while ( v13 != nBlendWeightCount );
  }
  *nOutOffset += 4 * nInputCount;
}


// FillVBForAttribute  (line 886, @0x00000000031c2140, libserver.so)  // inlines: Clamp<float>, FillBlendIndices<SetBoneIndexUint10>, FillBlendIndices<SetBoneIndexUint8>, IsColor, IsFinite, IsJointIndices, IsJointWeight, IsNormal, IsPerVertexLighting, LeafCodeInfo_t, Max<float>, PackNormal_UBYTE4, V_memset, memset
// calls: CUtlString::Get, V_stricmp_fast, FillBlendIndices<SetBoneIndexSint16>, floorf, memset, ConvertFloatToChannel, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, SetBoneIndexUint8, SetBoneIndexUint10, Warning (13 total)
// callers: CMesh::CreatePackedVB
// strings: "blendindices", "blendweight", "blendweights", "Infinite Joint Weights encountered: Skinning will not work!\n", "Unnormalized joint weights encountered (%f): Skinning may not work!\n", "normal" (11 total)
// globals: FillVBForAttribute(uchar *,CMeshVertexAttribute *,RenderInputLayoutField_t const&,int &,float *,int &,float *,bool,bool,Vector const&)::__executeCount, g_FormatInfo
void __fastcall FillVBForAttribute(
        uint8 *pOutputStream,
        CMeshVertexAttribute *pAttribute,
        const RenderInputLayoutField_t *const inputLayoutField,
        int *const nOutOffset,
        float *pVertexData,
        int *const nNormalOffset,
        float *pTangent4D,
        bool bCompressNormalAndTangent,
        bool bCompressPerVertexLighting,
        const Vector *const vVertexPosition)
{
  const char *v14; // rax
  float **v15; // r9
  uint32 m_Format; // eax
  const char *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 m_nSizeFloats; // r14
  int v21; // r13d
  float *v22; // rcx
  float v23; // xmm2_4
  __m128i v24; // xmm1
  int v25; // eax
  __int32 *v26; // rdx
  __m128 v27; // xmm3
  __m128i v28; // xmm4
  __int64 v29; // rax
  __m128 v30; // xmm3
  float v31; // xmm0_4
  int v32; // r15d
  float *v33; // rdx
  int v34; // r14d
  float v35; // xmm0_4
  int v36; // ecx
  int v37; // esi
  const char *v38; // rax
  ColorFormatInfo_t *v39; // r14
  int m_nTotalBytes; // r15d
  uint8 *v41; // r12
  const char *v42; // rax
  int v43; // edx
  float *v44; // rsi
  __int64 v45; // rax
  bool v46; // cc
  int m_nComponents; // eax
  int m_nBytesPerComponent; // esi
  unsigned __int64 v49; // r13
  float v50; // xmm0_4
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  int v58; // edx
  int v59; // r13d
  __int64 v60; // rcx
  int v61; // r15d
  int v62; // esi
  uint v63; // r14d
  uint8 *v64; // r12
  __int64 v65; // rax
  int v66; // edx
  int v67; // r13d
  __int64 v68; // rcx
  int v69; // r15d
  int v70; // esi
  uint v71; // r14d
  uint8 *v72; // r12
  int v73; // eax
  __m128i v74; // xmm0
  int v75; // edx
  const char *v76; // rax
  float v77; // xmm2_4
  float v78; // xmm4_4
  float v79; // xmm1_4
  float v80; // xmm11_4
  float v81; // xmm8_4
  float v82; // xmm10_4
  float v83; // xmm5_4
  float v84; // xmm9_4
  float v85; // xmm7_4
  int v86; // edx
  float v87; // xmm13_4
  float v88; // xmm11_4
  float v89; // xmm0_4
  float v90; // xmm7_4
  float v91; // xmm1_4
  float v92; // xmm12_4
  float v93; // xmm10_4
  float v94; // xmm9_4
  int v95; // eax
  uint32 v96; // r8d
  const char *v97; // rax
  int v98; // eax
  int v99; // edi
  float v100; // xmm1_4
  int v101; // edx
  float v102; // xmm1_4
  Elf64_Rela *v103; // rcx
  float v104; // xmm1_4
  float v105; // xmm0_4
  float v106; // [rsp+0h] [rbp-70h]
  __int64 v107; // [rsp+0h] [rbp-70h]
  __int64 v108; // [rsp+0h] [rbp-70h]
  int *nNormalOffsetb; // [rsp+8h] [rbp-68h]
  uint8 *nNormalOffsetc; // [rsp+8h] [rbp-68h]
  uint8 *nNormalOffsetd; // [rsp+8h] [rbp-68h]
  __int32 flSumWeightc; // [rsp+10h] [rbp-60h]
  int flSumWeight; // [rsp+10h] [rbp-60h]
  __int64 flSumWeighta; // [rsp+10h] [rbp-60h]
  __int64 flSumWeightd; // [rsp+10h] [rbp-60h]
  __int64 flSumWeighte; // [rsp+10h] [rbp-60h]
  float flSumWeightf; // [rsp+10h] [rbp-60h]
  __int32 flSumWeightb; // [rsp+10h] [rbp-60h]
  float *pVertexDataa; // [rsp+18h] [rbp-58h] BYREF
  float flTmpColor[4]; // [rsp+20h] [rbp-50h] BYREF
  const char *v122; // [rsp+30h] [rbp-40h]

  pVertexDataa = pVertexData;
  v14 = CUtlString::Get(&pAttribute->m_name);
  if ( V_stricmp_fast(v14, "blendindices") != 0 )
  {
    v17 = CUtlString::Get(&pAttribute->m_name);
    if ( V_stricmp_fast(v17, "blendweight") != 0 )
    {
      v38 = CUtlString::Get(&pAttribute->m_name);
      if ( V_stricmp_fast(v38, "blendweights") != 0 )
      {
        if ( !bCompressNormalAndTangent
          || (v76 = CUtlString::Get(&pAttribute->m_name), V_stricmp_fast(v76, "normal") != 0) )
        {
          if ( bCompressPerVertexLighting )
          {
            v97 = CUtlString::Get(&pAttribute->m_name);
            v98 = V_stricmp_fast(v97, "pervertexlighting");
            if ( v98 == 0 )
            {
              v99 = 0;
              v100 = *pVertexDataa * 255.0;
              if ( v100 >= 0.0 )
              {
                v99 = 255;
                if ( v100 <= 255.0 )
                  v99 = v100;
              }
              v101 = 0;
              v102 = pVertexDataa[1] * 255.0;
              if ( v102 >= 0.0 )
              {
                LOWORD(v101) = -256;
                if ( v102 <= 255.0 )
                  v101 = v102 << 8;
              }
              LODWORD(v103) = 0;
              v104 = pVertexDataa[2] * 255.0;
              if ( v104 >= 0.0 )
              {
                v103 = &stru_FF0000;
                if ( v104 <= 255.0 )
                  LODWORD(v103) = v104 << 16;
              }
              v105 = 255.0 * pVertexDataa[3];
              if ( v105 >= 0.0 )
              {
                v98 = -16777216;
                if ( v105 <= 255.0 )
                  v98 = v105 << 24;
              }
              *&pOutputStream[*nOutOffset] = v98 | v103 | v99 | v101;
              goto LABEL_65;
            }
          }
          v39 = &g_FormatInfo[inputLayoutField->m_Format];
          m_nTotalBytes = v39->m_nTotalBytes;
          if ( m_nTotalBytes > 0 )
          {
            v41 = &pOutputStream[*nOutOffset];
            memset(v41, 0, m_nTotalBytes);
            flSumWeight = pAttribute->m_nSizeFloats;
            v42 = CUtlString::Get(&pAttribute->m_name);
            if ( V_stricmp_fast(v42, "color") != 0 )
            {
              m_nComponents = v39->m_nComponents;
              if ( pAttribute->m_nSizeFloats <= v39->m_nComponents )
                m_nComponents = pAttribute->m_nSizeFloats;
            }
            else
            {
              v43 = 4;
              flTmpColor[0] = 0.0;
              flTmpColor[1] = 0.0;
              flTmpColor[2] = 0.0;
              flTmpColor[3] = 1.0;
              if ( flSumWeight <= 4 )
                v43 = flSumWeight;
              if ( v43 > 0 )
              {
                v44 = pVertexDataa;
                v45 = 0;
                do
                {
                  flTmpColor[v45] = v44[v45];
                  ++v45;
                }
                while ( v43 > v45 );
              }
              v46 = v39->m_nComponents <= 4;
              m_nComponents = 4;
              pVertexDataa = flTmpColor;
              if ( v46 )
                m_nComponents = v39->m_nComponents;
            }
            if ( m_nComponents > 0 )
            {
              m_nBytesPerComponent = v39->m_nBytesPerComponent;
              v49 = 0;
              flSumWeighta = 4LL * (m_nComponents - 1) + 4;
              do
              {
                v50 = pVertexDataa[v49 / 4];
                v49 += 4LL;
                ConvertFloatToChannel(v41, m_nBytesPerComponent, v39->m_bSigned, v39->m_bNormalized, v39->m_bFloat, v50);
                m_nBytesPerComponent = v39->m_nBytesPerComponent;
                v41 += m_nBytesPerComponent;
              }
              while ( v49 != flSumWeighta );
            }
            *nOutOffset += m_nTotalBytes;
          }
        }
        else
        {
          v77 = 0.0;
          *nNormalOffset = *nOutOffset;
          v78 = pVertexDataa[2];
          v79 = pVertexDataa[1];
          if ( *pVertexDataa < 0.0 )
          {
            v81 = -1.0;
            v80 = 1.0;
          }
          else
          {
            v80 = 0.0;
            v81 = 1.0;
          }
          v82 = 0.0;
          v83 = 1.0;
          if ( v79 < 0.0 )
          {
            v82 = 1.0;
            v83 = -1.0;
          }
          v84 = 0.0;
          v85 = 1.0;
          if ( v78 < 0.0 )
          {
            v84 = 1.0;
            v85 = -1.0;
          }
          v86 = ((((((((v79 * v83) / ((v78 * v85) + ((*pVertexDataa * v81) + (v79 * v83)))) * 63.0) * v83) - v82) + 64.0)
                + 128.0) << 8)
              | (((((((((*pVertexDataa * v81) / ((v78 * v85) + ((*pVertexDataa * v81) + (v79 * v83)))) * 63.0) * v81)
                   - v80)
                  + 64.0)
                 * v85)
                - v84)
               + 128.0);
          if ( pTangent4D != 0 )
          {
            v87 = 0.0;
            v88 = 1.0;
            v90 = pTangent4D[2];
            v91 = pTangent4D[1];
            if ( *pTangent4D < 0.0 )
            {
              v88 = -1.0;
              v87 = 1.0;
            }
            v92 = 0.0;
            v93 = 1.0;
            if ( v91 < 0.0 )
            {
              v93 = -1.0;
              v92 = 1.0;
            }
            v94 = 1.0;
            if ( v90 < 0.0 )
            {
              v94 = -1.0;
              v77 = 1.0;
            }
            v89 = *pTangent4D;
            v95 = ((((((((((v89 * v88) / ((v90 * v94) + ((v89 * v88) + (v91 * v93)))) * 63.0) * v88) - v87) + 64.0) * v94)
                   - v77)
                  + 128.0) << 16)
                | ((((((((((v91 * v93) / ((v90 * v94) + ((v89 * v88) + (v91 * v93)))) * 63.0) * v93) - v92) + 64.0)
                    * pTangent4D[3])
                   - ((1.0 - pTangent4D[3]) * 0.5))
                  + 128.0) << 24);
          }
          else
          {
            v95 = 0;
          }
          *&pOutputStream[*nOutOffset] = v86 | v95;
          *nOutOffset += 4;
        }
        return;
      }
    }
    if ( inputLayoutField->m_Format == 35 )
    {
      pOutputStream += *nOutOffset;
      if ( pAttribute->m_nSizeFloats == 2 )
      {
        v74 = *(pVertexDataa + 1);
        *v74.m128i_i32 = *v74.m128i_i32 + *pVertexDataa;
        if ( (_mm_cvtsi128_si32(v74) & 0x7F800000) == 0x7F800000 || *v74.m128i_i32 <= 0.0099999998 )
        {
          *pOutputStream = 0x7FFF;
          *(pOutputStream + 1) = 0x8000;
        }
        else
        {
          v75 = ((*pVertexDataa * 65535.0) / *v74.m128i_i32);
          *(pOutputStream + 1) = v75;
          *pOutputStream = -1 - v75;
        }
        goto LABEL_65;
      }
      nOutOffset = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        *flTmpColor = "formats.cpp";
        v122 = "FillVBForAttribute";
        LODWORD(flTmpColor[2]) = 941;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          flTmpColor,
          "Internal inconsistency between the layout format and attribute is detected.\n"
          "Try changing the number of bones per vertex or the skin weighting, and send Sergiy a repro mesh with this erro"
          "r description.\n");
      }
      goto LABEL_55;
    }
    m_nSizeFloats = pAttribute->m_nSizeFloats;
    if ( m_nSizeFloats <= 3 )
    {
      v23 = 0.0;
      v21 = pAttribute->m_nSizeFloats;
      v24.m128i_i32[0] = 0;
      if ( m_nSizeFloats <= 0 )
        goto LABEL_25;
    }
    else
    {
      v21 = 4;
    }
    v22 = pVertexDataa;
    v19 = m_nSizeFloats;
    v23 = 0.0;
    v24 = 0;
    v25 = 0;
    v26 = &pVertexDataa[m_nSizeFloats - 1];
    do
    {
      v27.m128_i32[0] = *v26;
      ++v25;
      --v26;
      *v24.m128i_i32 = *v24.m128i_i32 + COERCE_FLOAT(_mm_cmplt_ss(0LL, v27).m128_u32[0] & v27.m128_i32[0]);
    }
    while ( v25 < v21 );
    v18 = _mm_cvtsi128_si32(v24) & 0x7F800000;
    if ( m_nSizeFloats > v21 )
    {
      if ( v18 == 2139095040 )
      {
LABEL_87:
        if ( FillVBForAttribute(unsigned char *,CMeshVertexAttribute *,RenderInputLayoutField_t const&,int &,float *,int &,float *,bool,bool,Vector const&)::__executeCount <= 0 )
        {
          ++FillVBForAttribute(unsigned char *,CMeshVertexAttribute *,RenderInputLayoutField_t const&,int &,float *,int &,float *,bool,bool,Vector const&)::__executeCount;
          flSumWeightf = *v24.m128i_i32;
          Warning("Infinite Joint Weights encountered: Skinning will not work!\n", v19, v18);
          *v24.m128i_i32 = flSumWeightf;
          v23 = 0.0;
          v31 = fabs(flSumWeightf - 1.0);
LABEL_26:
          if ( v31 <= 0.1 )
          {
LABEL_29:
            if ( v21 <= 1 )
            {
              pOutputStream[*nOutOffset] = -1;
            }
            else
            {
              v32 = 1;
              v33 = &pVertexDataa[m_nSizeFloats - 2];
              v34 = 255;
              do
              {
                if ( *v33 > v23 )
                  v35 = *v33 * 255.0;
                else
                  v35 = 0.0;
                v106 = v23;
                nNormalOffsetb = v33;
                flSumWeightc = v24.m128i_i32[0];
                v36 = floorf((v35 / *v24.m128i_i32) + 0.5);
                v24.m128i_i32[0] = flSumWeightc;
                v23 = v106;
                if ( v36 > v34 )
                  v36 = v34;
                v37 = v32 + *nOutOffset;
                ++v32;
                v33 = (nNormalOffsetb - 1);
                v34 -= v36;
                pOutputStream[v37] = v36;
              }
              while ( v32 != v21 );
              pOutputStream[*nOutOffset] = v34;
              if ( v21 == 4 )
                goto LABEL_65;
            }
            do
            {
              v73 = v21 + *nOutOffset;
              ++v21;
              pOutputStream[v73] = 0;
            }
            while ( v21 != 4 );
LABEL_65:
            *nOutOffset += 4;
            return;
          }
LABEL_27:
          if ( FillVBForAttribute(unsigned char *,CMeshVertexAttribute *,RenderInputLayoutField_t const&,int &,float *,int &,float *,bool,bool,Vector const&)::__executeCount <= 0 )
          {
            ++FillVBForAttribute(unsigned char *,CMeshVertexAttribute *,RenderInputLayoutField_t const&,int &,float *,int &,float *,bool,bool,Vector const&)::__executeCount;
            flSumWeightb = v24.m128i_i32[0];
            Warning("Unnormalized joint weights encountered (%f): Skinning may not work!\n", v19, v18, *v24.m128i_i32);
            v23 = 0.0;
            v24.m128i_i32[0] = flSumWeightb;
          }
          goto LABEL_29;
        }
LABEL_25:
        v31 = fabs(*v24.m128i_i32 - 1.0);
        goto LABEL_26;
      }
      if ( *v24.m128i_i32 <= 0.00000011920929 )
        goto LABEL_25;
      if ( v21 <= 0 )
      {
        v24.m128i_i32[0] = 0;
        goto LABEL_27;
      }
      v28 = 0;
      v29 = 4LL * m_nSizeFloats - 4;
      v19 = 4 * (m_nSizeFloats - (v21 - 1)) - 8;
      while ( 1 )
      {
        *(v22 + v29) = *(v22 + v29) / *v24.m128i_i32;
        v30.m128_f32[0] = *(pVertexDataa + v29);
        v29 -= 4;
        *v28.m128i_i32 = *v28.m128i_i32 + COERCE_FLOAT(_mm_cmplt_ss(0LL, v30).m128_u32[0] & v30.m128_i32[0]);
        if ( v29 == v19 )
          break;
        v22 = pVertexDataa;
      }
      v24.m128i_i32[0] = v28.m128i_i32[0];
      v18 = _mm_cvtsi128_si32(v28) & 0x7F800000;
    }
    if ( v18 != 2139095040 )
      goto LABEL_25;
    goto LABEL_87;
  }
  m_Format = inputLayoutField->m_Format;
  if ( m_Format == 25 )
  {
    v65 = pAttribute->m_nSizeFloats;
    v66 = *nOutOffset;
    if ( v65 <= 3 )
    {
      v67 = pAttribute->m_nSizeFloats;
      if ( v65 <= 0 )
      {
        v71 = 0;
        v108 = v66;
LABEL_71:
        v72 = &pOutputStream[v108];
        do
          SetBoneIndexUint10(v72, v67++, v71);
        while ( v67 != 4 );
        *nOutOffset += 4;
        return;
      }
    }
    else
    {
      v67 = 4;
    }
    v68 = 4 * v65 - 4;
    v69 = 0;
    v108 = v66;
    nNormalOffsetd = &pOutputStream[v66];
    do
    {
      v70 = v69;
      flSumWeighte = v68;
      ++v69;
      v71 = *(pVertexDataa + v68);
      SetBoneIndexUint10(nNormalOffsetd, v70, v71);
      v68 = flSumWeighte - 4;
    }
    while ( v67 > v69 );
    if ( v67 == 4 )
      goto LABEL_65;
    goto LABEL_71;
  }
  if ( m_Format > 0x19 )
  {
    if ( m_Format == 30 )
      goto LABEL_58;
    if ( m_Format == 38 )
    {
      FillBlendIndices<&(SetBoneIndexSint16(unsigned char *,int,unsigned int))>(
        2,
        pOutputStream,
        pAttribute->m_nSizeFloats,
        *nOutOffset,
        &pVertexDataa,
        v15);
      *nOutOffset += 4;
      return;
    }
    goto LABEL_53;
  }
  if ( m_Format != 14 )
  {
LABEL_53:
    nOutOffset = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v96 = inputLayoutField->m_Format;
      *flTmpColor = "formats.cpp";
      v122 = "FillVBForAttribute";
      LODWORD(flTmpColor[2]) = 924;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        flTmpColor,
        "Invalid input layout field format %d for joint indices\n",
        v96);
    }
LABEL_55:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v53, v54, v51, v52, v55, v56) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_58:
    v57 = pAttribute->m_nSizeFloats;
    v58 = *nOutOffset;
    if ( v57 <= 3 )
    {
      v59 = pAttribute->m_nSizeFloats;
      if ( v57 <= 0 )
      {
        v63 = 0;
        v107 = v58;
LABEL_63:
        v64 = &pOutputStream[v107];
        do
          SetBoneIndexUint8(v64, v59++, v63);
        while ( v59 != 4 );
        goto LABEL_65;
      }
    }
    else
    {
      v59 = 4;
    }
    v60 = 4 * v57 - 4;
    v61 = 0;
    v107 = v58;
    nNormalOffsetc = &pOutputStream[v58];
    do
    {
      v62 = v61;
      flSumWeightd = v60;
      ++v61;
      v63 = *(pVertexDataa + v60);
      SetBoneIndexUint8(nNormalOffsetc, v62, v63);
      v60 = flSumWeightd - 4;
    }
    while ( v61 < v59 );
    if ( v59 == 4 )
      goto LABEL_65;
    goto LABEL_63;
  }
  FillBlendIndices<&(SetBoneIndexSint16(unsigned char *,int,unsigned int))>(
    4,
    pOutputStream,
    pAttribute->m_nSizeFloats,
    *nOutOffset,
    &pVertexDataa,
    v15);
  *nOutOffset += 8;
}


// CMesh::CreatePackedVB  (line 1111, @0x00000000031c2c70, libserver.so)  // inlines: IsValidIndex, Vector, operator=, operator[]
// calls: CMesh::FindFirstAttributeOffset, FillVBForAttribute
int __fastcall CMesh::CreatePackedVB(
        CMesh *const this,
        void *pVertsOut,
        const CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int> > *const inputLayoutFields,
        const CMesh::InputLayoutToAttributeMap *const mapInputLayoutToAttribute,
        int nInputLayoutVertexStride,
        bool bCompressNormalTangent,
        bool bCompressPerVertexLighting,
        EPackedVBFlags_t nPackFlags)
{
  float *m_pVerts; // r14
  int FirstAttributeOffset; // eax
  int m_nVertexCount; // r8d
  const CMesh::InputLayoutToAttributeMap *v14; // rax
  const CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int> > *v15; // r15
  CMesh *v16; // rbx
  const CMesh::InputLayoutToAttributeMap *v17; // r13
  __int64 v18; // r14
  const CMesh::InputLayoutToAttributeMap *v19; // rax
  const CUtlVector<RenderInputLayoutField_t,CUtlMemory<RenderInputLayoutField_t,int> > *v20; // r13
  const CMesh::InputLayoutToAttributeMap *v21; // r15
  int *m_pMemory; // rdx
  CMeshVertexAttribute *v23; // rsi
  const CMesh::InputLayoutToAttributeMap *v24; // rax
  __int64 m_nVertexStrideFloats; // rdx
  float *v26; // rdx
  int nTangentOffset; // [rsp+2Ch] [rbp-94h]
  int v; // [rsp+30h] [rbp-90h]
  float *pVertsIn; // [rsp+58h] [rbp-68h]
  float *pTangent4D; // [rsp+60h] [rbp-60h]
  int nPositionIndex; // [rsp+6Ch] [rbp-54h]
  int nOutOffset; // [rsp+78h] [rbp-48h] BYREF
  int nNormalOffset; // [rsp+7Ch] [rbp-44h] BYREF
  Vector vVertexPosition; // [rsp+80h] [rbp-40h] BYREF

  m_pVerts = this->m_pVerts;
  pVertsIn = this->m_pVerts;
  nPositionIndex = CMesh::FindFirstAttributeOffset(this, "position", 0);
  FirstAttributeOffset = CMesh::FindFirstAttributeOffset(this, "tangent", 4);
  pTangent4D = 0;
  nTangentOffset = FirstAttributeOffset;
  if ( FirstAttributeOffset != -1 )
    pTangent4D = &m_pVerts[FirstAttributeOffset];
  m_nVertexCount = this->m_nVertexCount;
  nOutOffset = 0;
  vVertexPosition.x = 0.0;
  vVertexPosition.y = 0.0;
  vVertexPosition.z = 0.0;
  if ( m_nVertexCount <= 0 )
    return 0;
  v = 0;
  v14 = mapInputLayoutToAttribute;
  v15 = inputLayoutFields;
  v16 = this;
  v17 = v14;
  do
  {
    if ( nPositionIndex >= 0 && nPositionIndex < v17->m_Size )
      vVertexPosition = *&pVertsIn[v16->m_pAttributes[v17->m_Memory.m_pMemory[nPositionIndex]].m_nOffsetFloats];
    v18 = 0;
    if ( v15->m_Size > 0 )
    {
      v19 = v17;
      v20 = v15;
      v21 = v19;
      do
      {
        if ( nPackFlags == EPackedVBFlags_t::PACK_VB_DEFAULT
          || nPositionIndex == v18 && nPackFlags == EPackedVBFlags_t::PACK_VB_POSITION_ONLY
          || v18 != nPositionIndex && nPackFlags == EPackedVBFlags_t::PACK_VB_ALL_BUT_POSITION )
        {
          m_pMemory = v21->m_Memory.m_pMemory;
          nNormalOffset = -1;
          v23 = &v16->m_pAttributes[m_pMemory[v18]];
          FillVBForAttribute(
            pVertsOut,
            v23,
            &v20->m_Memory.m_pMemory[v18],
            &nOutOffset,
            &pVertsIn[v23->m_nOffsetFloats],
            &nNormalOffset,
            pTangent4D,
            bCompressNormalTangent,
            bCompressPerVertexLighting,
            &vVertexPosition);
        }
        ++v18;
      }
      while ( v20->m_Size > v18 );
      v24 = v21;
      v15 = v20;
      v17 = v24;
    }
    m_nVertexStrideFloats = v16->m_nVertexStrideFloats;
    pVertsIn = (pVertsIn + m_nVertexStrideFloats * 4);
    v26 = &pTangent4D[m_nVertexStrideFloats];
    if ( nTangentOffset == -1 )
      v26 = pTangent4D;
    ++v;
    pTangent4D = v26;
  }
  while ( v16->m_nVertexCount > v );
  return nOutOffset;
}


// CMesh::CreateSimpleUnpackedVBAndIBForMesh  (line 1166, @0x00000000031c2ed0, libserver.so)  // inlines: CRenderContextPtr, CRenderContextPtr<>, CWeakHandle, Clear, Init, InitPreallocated, Release, RenderTargetDesc_t, V_memcpy, memcpy, operator=, ~CRenderContextPtr
// calls: CMesh::CalculateInputLayoutFromAttributes, memcpy, Warning, _Unwind_Resume
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
// strings: "WARNING: Trying to create a CRenderContextPtr without a valid context.\n"
void __fastcall CMesh::CreateSimpleUnpackedVBAndIBForMesh(
        const CMesh *const this,
        VertexBufferHandle_t *pVBOut,
        IndexBufferHandle_t *pIBOut)
{
  IRenderDevice *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  int m_nVertexStrideFloats; // eax
  int v9; // r14d
  int m_nVertexCount; // eax
  int v11; // r14d
  int m_nIndexCount; // r14d
  int v13; // eax
  IndexBufferHandle_t__ *v14; // r14
  int nIndexDataSize; // [rsp+0h] [rbp-790h]
  VertexBufferHandle_t__ *hVB; // [rsp+18h] [rbp-778h]
  int nFields; // [rsp+2Ch] [rbp-764h] BYREF
  LockDesc_t bufferLock; // [rsp+30h] [rbp-760h] BYREF
  BufferDesc_t bufferDesc; // [rsp+40h] [rbp-750h] BYREF
  LockDesc_t bufferLock_0; // [rsp+60h] [rbp-730h] BYREF
  __int64 v23; // [rsp+68h] [rbp-728h]
  __int64 v24; // [rsp+70h] [rbp-720h]
  __int64 v25; // [rsp+78h] [rbp-718h]
  __int64 v26; // [rsp+80h] [rbp-710h]
  __int64 v27; // [rsp+88h] [rbp-708h]
  __int64 v28; // [rsp+90h] [rbp-700h]
  __int64 v29; // [rsp+98h] [rbp-6F8h]
  __int64 v30; // [rsp+A0h] [rbp-6F0h]
  _BYTE v31[39]; // [rsp+A8h] [rbp-6E8h]
  char v32; // [rsp+CFh] [rbp-6C1h]

  bufferLock_0.m_pMemory = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v4 = g_pRenderDevice;
  v5 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  do
  {
    *(&bufferLock_0.m_pMemory + 2 * v5) = 0;
    *&v31[v5] = 0;
    v5 += 4;
  }
  while ( v5 != 32 );
  v32 &= ~1u;
  v30 = 0;
  *&v31[32] = 0;
  *&v31[36] = 0;
  v31[38] = 0;
  v6 = (*(*v4 + 368LL))(v4, 0, 0, 0);
  v7 = v6;
  if ( v6 != 0 )
    (*(*v6 + 8LL))(v6, &bufferLock_0);
  else
    Warning("WARNING: Trying to create a CRenderContextPtr without a valid context.\n");
  bufferDesc.m_pDebugName = 0;
  m_nVertexStrideFloats = this->m_nVertexStrideFloats;
  bufferDesc.m_pBudgetGroupName = 0;
  hVB = 0;
  v9 = 4 * m_nVertexStrideFloats;
  m_nVertexCount = this->m_nVertexCount;
  bufferDesc.m_nElementSizeInBytes = v9;
  v11 = m_nVertexCount * v9;
  bufferDesc.m_nElementCount = m_nVertexCount;
  if ( v11 != 0 )
  {
    nFields = 32;
    CMesh::CalculateInputLayoutFromAttributes(this, &bufferLock_0, &nFields);
    hVB = (*(*g_pRenderDevice + 256LL))(g_pRenderDevice, 0, &bufferDesc, nFields, &bufferLock_0);
    (*(*v7 + 408LL))(v7, hVB, v11);
    if ( v11 < 0 )
      __debugbreak();
    memcpy(bufferLock.m_pMemory, this->m_pVerts, v11);
    (*(*v7 + 416LL))(v7, hVB, v11, &bufferLock);
  }
  bufferDesc.m_nElementSizeInBytes = 4;
  m_nIndexCount = this->m_nIndexCount;
  bufferDesc.m_pDebugName = 0;
  bufferDesc.m_pBudgetGroupName = 0;
  v13 = 4 * m_nIndexCount;
  bufferDesc.m_nElementCount = m_nIndexCount;
  v14 = 0;
  nIndexDataSize = v13;
  if ( v13 != 0 )
  {
    v14 = (*(*g_pRenderDevice + 280LL))(g_pRenderDevice, 0, &bufferDesc);
    (*(*v7 + 392LL))(v7, v14, nIndexDataSize, &bufferLock_0);
    if ( nIndexDataSize < 0 )
      __debugbreak();
    memcpy(bufferLock_0.m_pMemory, this->m_pIndices, nIndexDataSize);
    (*(*v7 + 400LL))(v7, v14, nIndexDataSize, &bufferLock_0);
  }
  *pVBOut = hVB;
  *pIBOut = v14;
  (*(*v7 + 48LL))(v7);
  (*(*v4 + 384LL))(v4, v7);
}


// CreatePackedIB  (line 1219, @0x00000000031c3230, libserver.so)
void __fastcall CreatePackedIB(void *pIndicesOut, uint32 *pIndicesIn, int nIndices)
{
  __int64 i; // rax

  for ( i = 0; nIndices > i; ++i )
    *(pIndicesOut + i) = pIndicesIn[i];
}


// ByteSwapVB  (line 1231, @0x00000000031c3260, libserver.so)
void __fastcall ByteSwapVB(
        uint8 *pVBData,
        int nVertices,
        RenderInputLayoutField_t *pInputLayoutFields,
        int nFields,
        int nVertexStrideBytes)
{
  ;
}


