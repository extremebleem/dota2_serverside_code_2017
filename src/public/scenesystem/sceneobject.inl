
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSceneObject::UpdateDirty  (line 779, @0x0000000001b2c440, libserver.so)
void __fastcall CSceneObject::UpdateDirty(CSceneObject *const this)
{
  ;
}


// ISceneObjectDesc::DrawArray  (line 942, @0x0000000001b2c450, libserver.so)
void __fastcall ISceneObjectDesc::DrawArray(
        ISceneObjectDesc *const this,
        IRenderContext *pCtx,
        CMeshDrawPrimitive_t *pRenderList,
        int nNumRenderablesToDraw,
        const ISceneView *pView,
        ISceneLayer *pLayer,
        SceneSystemPerFrameStats_t *const perFrameStats)
{
  ;
}


// ISceneObjectDesc::DrawArrayExt  (line 945, @0x0000000001b2c460, libserver.so)
void __fastcall ISceneObjectDesc::DrawArrayExt(
        ISceneObjectDesc *const this,
        IRenderContext *pCtx,
        CMeshDrawPrimitive_t *pRenderList,
        int nNumRenderablesToDraw,
        const ISceneView *pView,
        ISceneLayer *pLayer,
        SceneSystemPerFrameStats_t *const perFrameStats,
        const IMaterial2 *pMaterial)
{
  (*this->_vptr_ISceneObjectDesc)(this, pCtx, pRenderList, nNumRenderablesToDraw, pView, pLayer);
}


// ISceneObjectDesc::DrawDebug  (line 953, @0x0000000001b2c470, libserver.so)
void __fastcall ISceneObjectDesc::DrawDebug(
        ISceneObjectDesc *const this,
        IRenderContext *pCtx,
        const CMeshDrawPrimitive_t *pPrimitive,
        const ISceneView *pView,
        ISceneLayer *pLayer,
        int nDebugLevel)
{
  ;
}


// ISceneObjectDesc::DeleteNonPooledObject  (line 961, @0x0000000001b2c480, libserver.so)
void __fastcall ISceneObjectDesc::DeleteNonPooledObject(ISceneObjectDesc *const this, CSceneObject *pObject)
{
  if ( pObject != 0 )
    (*(pObject->_vptr_IGenericInterface + 1))(pObject);
}


// ISceneObjectDesc::SetTextureAttribute  (line 967, @0x0000000001b2c4b0, libserver.so)
void __fastcall ISceneObjectDesc::SetTextureAttribute(
        ISceneObjectDesc *const this,
        CSceneObject *pObj,
        CUtlStringToken nTokenID,
        HRenderTexture txtr)
{
  ;
}


// ISceneObjectDesc::SetIntAttribute  (line 968, @0x0000000001b2c4c0, libserver.so)
void __fastcall ISceneObjectDesc::SetIntAttribute(
        ISceneObjectDesc *const this,
        CSceneObject *pObj,
        CUtlStringToken nTokenID,
        int nValue)
{
  ;
}


// ISceneObjectDesc::SetFloatAttribute  (line 969, @0x0000000001b2c4d0, libserver.so)
void __fastcall ISceneObjectDesc::SetFloatAttribute(
        ISceneObjectDesc *const this,
        CSceneObject *pObj,
        CUtlStringToken nTokenID,
        float nValue)
{
  ;
}


// ISceneObjectDesc::SetBoolAttribute  (line 970, @0x0000000001b2c4e0, libserver.so)
void __fastcall ISceneObjectDesc::SetBoolAttribute(
        ISceneObjectDesc *const this,
        CSceneObject *pObj,
        CUtlStringToken nTokenID,
        bool bValue)
{
  ;
}


// ISceneObjectDesc::OnBeginSubmitDisplayLists  (line 976, @0x0000000001b2c4f0, libserver.so)
void __fastcall ISceneObjectDesc::OnBeginSubmitDisplayLists(ISceneObjectDesc *const this)
{
  ;
}


// ISceneObjectDesc::OnFinishingSubmissionOfDisplayLists  (line 979, @0x0000000001b2c500, libserver.so)
void __fastcall ISceneObjectDesc::OnFinishingSubmissionOfDisplayLists(ISceneObjectDesc *const this)
{
  ;
}


// ISceneObjectDesc::PostDisplayListSubmissionCleanup  (line 980, @0x0000000001b2c510, libserver.so)
void __fastcall ISceneObjectDesc::PostDisplayListSubmissionCleanup(ISceneObjectDesc *const this)
{
  ;
}


// ISceneObjectDesc::ModifySortKey  (line 982, @0x0000000001b2c520, libserver.so)
uint32 __fastcall ISceneObjectDesc::ModifySortKey(
        ISceneObjectDesc *const this,
        const CSceneObject *pObject,
        uint32 nOriginalSortKey,
        const ISceneView *pView,
        ISceneLayer *pLayer)
{
  return nOriginalSortKey;
}


// ISceneObjectDesc::HasProperty  (line 988, @0x0000000001b2c530, libserver.so)
bool __fastcall ISceneObjectDesc::HasProperty(const ISceneObjectDesc *const this, CUtlStringToken nToken)
{
  return 0;
}


// ISceneObjectDesc::UpdateBoundingBoxToMatchTransform  (line 990, @0x0000000001b2c540, libserver.so)
void __fastcall ISceneObjectDesc::UpdateBoundingBoxToMatchTransform(ISceneObjectDesc *const this, CSceneObject *pObj)
{
  ;
}


// ISceneObjectDesc::GeneratePrimitives  (line 1046, @0x0000000001b2cd50, libserver.so)  // inlines: AddToTail, CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, GetIntValue, GetStateOverride<const CSceneSystemStencilState*, CSceneObjectStateOverideEntry<const CSceneSystemStencilState*> >, GetStencilStateOverride, GetValueOrDefault, GrowMemory, Head, InitForObject, ReplicateIX4<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, V_memset, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, memset, operator++, operator=, operator[]
// calls: CUtlMemory<CMeshDrawPrimitive_t, int>::Grow
void __fastcall ISceneObjectDesc::GeneratePrimitives(
        ISceneObjectDesc *const this,
        CSceneObject *pObject,
        __m128 flAlphaFadeModulation,
        LODGroupMask_t lodGroupMask,
        CMeshPrimitiveOutputBuffer *const outBuf,
        CSceneObjectStateOverideEntry<const CSceneSystemStencilState*> *pView,
        ISceneLayer *pLayer,
        __m128i flWorldAreaToScreenArea,
        uint32 nSortKey,
        GeneratePrimitivesFlags_t nGPFlags,
        int nRequiredTextureSizeFallback)
{
  __int64 m_Size; // r12
  int v13; // eax
  const CSceneSystemStencilState *m_overrideValue; // rdx
  CMeshDrawPrimitive_t *v15; // r12
  CSceneObjectExtraData_t *m_pExtraData; // rax
  CSceneObjectStateOverideEntry<const CSceneSystemStencilState*> *m_pMemory; // rdi
  int v18; // esi
  const __m128i *p_m_intAttrs; // rcx
  int v20; // eax
  int v21; // edx
  const __m128i *i; // rdx
  int v23; // r10d
  int v24; // eax
  int v25; // r10d
  __int64 v26; // rax
  __int32 v27; // eax
  __int16 v28; // ax
  ISceneSystem *v29; // rdi
  uint8 v30; // al
  int v31; // edx
  ISceneLayer *pLayera; // [rsp+0h] [rbp-30h]
  CMeshPrimitiveOutputBuffer *outBufa; // [rsp+8h] [rbp-28h]

  m_Size = outBuf->m_outputPrimitives.m_Size;
  v13 = outBuf->m_outputPrimitives.m_Size;
  if ( m_Size == outBuf->m_outputPrimitives.m_Memory.m_nAllocationCount )
  {
    pLayera = pLayer;
    outBufa = outBuf;
    CUtlMemory<CMeshDrawPrimitive_t,int>::Grow(&outBuf->m_outputPrimitives.m_Memory, 1);
    outBuf = outBufa;
    pLayer = pLayera;
    v13 = outBufa->m_outputPrimitives.m_Size;
  }
  m_overrideValue = 0;
  outBuf->m_outputPrimitives.m_Size = v13 + 1;
  v15 = &outBuf->m_outputPrimitives.m_Memory.m_pMemory[m_Size];
  v15->m_pObject = pObject;
  v15->m_pMaterial = 0;
  m_pExtraData = pObject->m_pExtraData;
  if ( m_pExtraData != 0 )
  {
    m_pMemory = m_pExtraData->m_stencilOverrideList.m_Memory.m_pMemory;
    v18 = m_pExtraData->m_stencilOverrideList.m_Size - 1;
    if ( v18 >= 0 )
    {
      pView = 0;
      while ( m_pMemory->m_nIntAttributeMatch.m_nHashCode == 0 )
      {
        if ( pView == 0 )
          pView = m_pMemory;
LABEL_8:
        --v18;
        ++m_pMemory;
        if ( v18 == -1 )
        {
          if ( pView != 0 )
            m_overrideValue = pView->m_overrideValue;
          else
            m_overrideValue = 0;
          goto LABEL_24;
        }
      }
      p_m_intAttrs = &pLayer->m_Attrs.m_intAttrs;
      flWorldAreaToScreenArea = _mm_shuffle_epi32(_mm_cvtsi32_si128(m_pMemory->m_nIntAttributeMatch.m_nHashCode), 0);
      while ( 1 )
      {
        flAlphaFadeModulation = _mm_cmpeq_epi32(_mm_load_si128(p_m_intAttrs), flWorldAreaToScreenArea);
        v20 = _mm_movemask_ps(flAlphaFadeModulation);
        if ( v20 != 0 )
        {
          v21 = 0;
        }
        else
        {
          v21 = 4;
          flAlphaFadeModulation = _mm_cmpeq_epi32(_mm_load_si128(p_m_intAttrs + 1), flWorldAreaToScreenArea);
          v20 = _mm_movemask_ps(flAlphaFadeModulation);
          if ( v20 == 0 )
            goto LABEL_13;
        }
        v31 = g_nSIMDBitMaskToIndex[v20] + v21;
        v26 = v31;
        if ( v31 != -1 )
        {
LABEL_21:
          v27 = p_m_intAttrs[2].m128i_i32[v26];
          goto LABEL_22;
        }
LABEL_13:
        for ( i = p_m_intAttrs[4].m128i_i64[1]; i != 0; i = i->m128i_i64[0] )
        {
          flAlphaFadeModulation = _mm_cmpeq_epi32(_mm_load_si128(i + 1), flWorldAreaToScreenArea);
          v24 = _mm_movemask_ps(flAlphaFadeModulation);
          if ( v24 != 0 )
          {
            v23 = 0;
          }
          else
          {
            v23 = 4;
            flAlphaFadeModulation = _mm_cmpeq_epi32(_mm_load_si128(i + 2), flWorldAreaToScreenArea);
            v24 = _mm_movemask_ps(flAlphaFadeModulation);
            if ( v24 == 0 )
              continue;
          }
          v25 = g_nSIMDBitMaskToIndex[v24] + v23;
          v26 = v25;
          if ( v25 != -1 )
          {
            p_m_intAttrs = i + 1;
            goto LABEL_21;
          }
        }
        p_m_intAttrs = p_m_intAttrs[4].m128i_i64[0];
        if ( p_m_intAttrs == 0 )
        {
          v27 = 0;
LABEL_22:
          if ( m_pMemory->m_nMatchValue == v27 )
          {
            m_overrideValue = m_pMemory->m_overrideValue;
            break;
          }
          goto LABEL_8;
        }
      }
    }
  }
LABEL_24:
  v28 = -1;
  if ( nRequiredTextureSizeFallback <= 65534 )
    v28 = nRequiredTextureSizeFallback;
  v15->m_nBatchFlags = 0;
  v15->m_pStencilStateOverride = m_overrideValue;
  v15->m_nRequiredTextureSize = v28;
  v15->m_nLightProbeVolumeId = -1;
  v15->m_pBakedLightingInfo = 0;
  v15->m_nEnvironmentMapId = -1;
  v15->m_nSortKey = nSortKey;
  v15->m_pTransform = &pObject->m_transform;
  *v15->m_perInstanceBakedLightingParams = 0;
  v15->m_vRGBAModulation.x = 1.0;
  v15->m_vRGBAModulation.y = 1.0;
  v29 = g_pSceneSystem;
  v15->m_nDrawCall = 0;
  v15->m_vRGBAModulation.z = 1.0;
  v15->m_vRGBAModulation.w = 1.0;
  v15->m_pMeshInstance = 0;
  v30 = (*(*v29 + 1112LL))(
          v29,
          pObject,
          m_overrideValue,
          0xFFFFFFFFLL,
          pView,
          pLayer,
          *flAlphaFadeModulation.m128_u64,
          *flWorldAreaToScreenArea.m128i_i64);
  v15->m_pMaterial = 0;
  v15->m_nObjectClassSettings = v30;
}


// CSceneObject::~CSceneObject  (line 1079, @0x0000000001b2c550, libserver.so)  // inlines: ~IGenericInterface
void __fastcall CSceneObject::~CSceneObject(CSceneObject *const this)
{
  this->_vptr_IGenericInterface = off_3F794B0;  // vptr: CSceneObject
  (*(*g_pSceneSystem + 800LL))(g_pSceneSystem, this);
  this->_vptr_IGenericInterface = off_3F79210;  // vptr: IGenericInterface
}


// CSceneObject::~CSceneObject  (line 1079, @0x0000000001b2c590, libserver.so)  // inlines: ~CSceneObject, ~IGenericInterface
// calls: operator delete
void __fastcall CSceneObject::~CSceneObject(CSceneObject *const this)
{
  this->_vptr_IGenericInterface = off_3F794B0;  // vptr: CSceneObject
  (*(*g_pSceneSystem + 800LL))(g_pSceneSystem, this);
  this->_vptr_IGenericInterface = off_3F79210;  // vptr: IGenericInterface
  operator delete(this);
}


// ISceneObjectDescBase<CHeightMapSceneObject>::DeleteNonPooledObject  (line 2073, @0x0000000002553760, libserver.so)
void __fastcall ISceneObjectDescBase<CHeightMapSceneObject>::DeleteNonPooledObject(
        ISceneObjectDescBase<CHeightMapSceneObject> *const this,
        CSceneObject *pObject)
{
  if ( pObject != 0 )
    (*(pObject->_vptr_IGenericInterface + 1))(pObject);
}


// CSceneObjectAutoPtrBase<CGlowHelperSceneObject>::Delete  (line 2626, @0x000000000227ed90, libserver.so)  // inlines: Detach
// callers: CGlowProperty::CGlowProperty
void __fastcall CSceneObjectAutoPtrBase<CGlowHelperSceneObject>::Delete(
        CSceneObjectAutoPtrBase<CGlowHelperSceneObject> *const this)
{
  CGlowHelperSceneObject *m_p; // rsi

  m_p = this->m_p;
  this->m_p = 0;
  if ( m_p != 0 )
    (*(*g_pSceneSystem + 136LL))(g_pSceneSystem);
}


