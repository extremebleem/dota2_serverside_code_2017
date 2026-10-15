// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/lightcomponent.cpp:20
class CEntityComponentHelperFactory_CLightComponent : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CLightComponent();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLightComponent::GetEntComponentInfo  (line 20, @0x0000000001eb8370, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CLightComponent
// strings: "CLightComponentReferenced", "CLightComponentReferencedPtr"
// globals: CLightComponent::s_EntComponentInfo, `guard variable for'CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent, CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent
EntComponentInfo_t *__cdecl CLightComponent::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CLightComponent::s_EntComponentInfo.m_pName != 0 )
    return &CLightComponent::s_EntComponentInfo;
  if ( `guard variable for'CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent == 0
    && __cxa_guard_acquire(&`guard variable for'CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent) != 0 )
  {
    CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent.Data1 = 1107011977;
    v1 = HashString("CLightComponent");
    CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CLightComponent", 0x3501A674u);
    CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent);
  }
  CLightComponent::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CLightComponent::s_EntComponentInfo.m_nFlags = 2;
  CLightComponent::s_EntComponentInfo.m_id = CLightComponent::GetEntComponentInfo(void)::UUID_CLightComponent;
  CLightComponent::s_EntComponentInfo.m_pName = "LightComponent";
  CLightComponent::s_EntComponentInfo.m_pCPPClassname = "CLightComponent";
  CLightComponent::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CLightComponentReferenced";
  CLightComponent::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CLightComponentReferencedPtr";
  return &CLightComponent::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CLightComponent  (line 20, @0x0000000001eb8490, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CLightComponent::GetEntComponentInfo, CEntityComponentHelperInit_CEntityComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CLightComponent::CEntityComponentHelperFactory_CLightComponent, _GLOBAL__sub_I__unity_components_01.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CLightComponent(void)::componentHelper, CEntityComponentHelperInit_CLightComponent(void)::s_bIsInitialized, CEntityComponentHelperInit_CLightComponent(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CLightComponent()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CLightComponent(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CLightComponent(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CLightComponent(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CLightComponent(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CLightComponent(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CLightComponent(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FB5090;
    CEntityComponentHelperInit_CLightComponent(void)::componentHelper.m_pInfo = CLightComponent::GetEntComponentInfo();
    CEntityComponentHelperInit_CLightComponent(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CLightComponent(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CLightComponent(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CLightComponent(void)::s_bIsInitialized = 1;
    EntComponentInfo = CLightComponent::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CEntityComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CLightComponent(void)::componentHelper.m_nPriority = 0;
  }
  return &CEntityComponentHelperInit_CLightComponent(void)::componentHelper;
}


// CEntityComponentHelperFactory_CLightComponent::CEntityComponentHelperFactory_CLightComponent  (line 20, @0x0000000001eb8570, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CLightComponent
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CLightComponent::CEntityComponentHelperFactory_CLightComponent(
        CEntityComponentHelperFactory_CLightComponent *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CLightComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CLightComponent::GetDataDescMap  (line 25, @0x0000000001eb5840, libserver.so)
// globals: CLightComponent::m_DataMap
datamap_t *__fastcall CLightComponent::GetDataDescMap(CLightComponent *const this)
{
  return &CLightComponent::m_DataMap;
}


// CLightComponent::AddDatadescMetadataKeys  (line 25, @0x0000000001eb8590, libserver.so)
void __fastcall CLightComponent::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CLightComponent::GetBaseMap  (line 25, @0x0000000001eb85a0, libserver.so)
datamap_t *__cdecl CLightComponent::GetBaseMap()
{
  return 0;
}


// DataMapInit<CLightComponent>  (line 25, @0x0000000001eb85b0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_components_01.cpp
// globals: `guard variable for'DataMapInit<CLightComponent>(CLightComponent *)::nameHolder, CLightComponent::m_DataMap, DataMapInit<CLightComponent>(CLightComponent *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLightComponent>(CLightComponent *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLightComponent>(CLightComponent *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLightComponent>(CLightComponent *)::nameHolder) != 0 )
  {
    DataMapInit<CLightComponent>(CLightComponent *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLightComponent>(CLightComponent *)::nameHolder.m_pszBase = "CLightComponent";
    DataMapInit<CLightComponent>(CLightComponent *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLightComponent>(CLightComponent *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLightComponent>(CLightComponent *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLightComponent>(CLightComponent *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLightComponent>(CLightComponent *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLightComponent>(CLightComponent *)::nameHolder,
      &_dso_handle);
  }
  CLightComponent::m_DataMap.baseMap = 0;
  CLightComponent::m_DataMap.dataDesc = &DataMapInit<CLightComponent>(CLightComponent *)::dataDesc[1];
  CLightComponent::m_DataMap.dataNumFields = 26;
  return &CLightComponent::m_DataMap;
}


// CLightComponent::CLightComponent  (line 72, @0x0000000001eb8670, libserver.so)  // inlines: CCopyableLock, CEntityOwnerPtr, CNetworkColorBase, CNetworkVarBase, CNetworkVarChainer, CSmartPtr, CThreadFastMutex, CUtlMemory, CUtlSlot, CUtlString, CUtlStringToken, CUtlVector, CUtlVectorBase, CUtlVectorMT, ChangeAccessorFieldPathIndex_t, Color, EnsureValidValue<CUtlString>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Get, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetComponent, SetGreen, SetPtr, SetRed, SetVal, operator CEntityInstance*, operator=, operator=<double>, ~CNetworkVarBase, ~CUtlString
// calls: CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlSlot::~CUtlSlot, _Unwind_Resume, CUtlString::~CUtlString
// callers: CEntityComponentHelperReferenced<CLightComponent>::Allocate
void __fastcall CLightComponent::CLightComponent(CLightComponent *const this)
{
  CEntityInstance *m_pObj; // rdi
  bool v3; // zf
  char *m_pString; // r13
  ILightQuery *v5; // rdi
  CEntityInstance *v6; // rdi
  CUtlString v7; // [rsp+0h] [rbp-30h] BYREF

  this->_vptr_CLightComponent = off_3FB50D0;
  this->m_ConnectedSignallers.m_Size = 0;
  this->m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSignallers.m_ownerID = 0;
  this->m_ConnectedSignallers.m_depth = 0;
  this->m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSignallers.Mutex_t.m_depth = 0;
  m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_pOwner.m_pObj = 0;
  if ( m_pObj != 0 )
  {
    this->m_Color = 0;
    v3 = this->m_Color.m_Value._color[1] == 0;
    this->m_pOwner.m_pObj = m_pObj;
    this->__m_pChainEntity.m_pObj = m_pObj;
    this->__m_pChainEntity.m_PathIndex.m_Value = -1;
    this->__m_pChainEntity.m_pPropagationList = 0;
    this->m_pLightSceneObject = 0;
    this->m_hPrtLight = 0;
    this->m_hQueryLight = 0;
    if ( v3 )
      goto LABEL_6;
    if ( (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 132, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
      m_pObj = this->__m_pChainEntity.m_pObj;
    }
    goto LABEL_5;
  }
  m_pObj = 0;
  this->__m_pChainEntity.m_pObj = 0;
  this->m_Color = 0;
  v3 = this->m_Color.m_Value._color[1] == 0;
  this->__m_pChainEntity.m_PathIndex.m_Value = -1;
  this->__m_pChainEntity.m_pPropagationList = 0;
  this->m_pLightSceneObject = 0;
  this->m_hPrtLight = 0;
  this->m_hQueryLight = 0;
  if ( !v3 )
LABEL_5:
    this->m_Color.m_Value._color[1] = 0;
LABEL_6:
  if ( this->m_Color.m_Value._color[2] != 0 )
  {
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 132, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
      m_pObj = this->__m_pChainEntity.m_pObj;
    }
    this->m_Color.m_Value._color[2] = 0;
  }
  if ( this->m_Color.m_Value._color[3] != 0 )
  {
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 132, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
      m_pObj = this->__m_pChainEntity.m_pObj;
    }
    this->m_Color.m_Value._color[3] = 0;
  }
  this->m_flBrightness.m_Value = 0.0;
  this->m_flBrightnessMult.m_Value = 0.0;
  this->m_flRange.m_Value = 0.0;
  this->m_flFalloff.m_Value = 0.0;
  this->m_flAttenuation0.m_Value = 0.0;
  this->m_flAttenuation1.m_Value = 0.0;
  this->m_flAttenuation2.m_Value = 0.0;
  this->m_flTheta.m_Value = 0.0;
  this->m_flPhi.m_Value = 0.0;
  this->m_lightCookie.m_Value.m_nHashCode = 0;
  this->m_nCascades.m_Value = 0;
  this->m_bCastShadows.m_Value = 0;
  this->m_nShadowWidth.m_Value = 0;
  this->m_nShadowHeight.m_Value = 0;
  this->m_bRenderDiffuse.m_Value = 1;
  if ( m_pObj == 0 )
  {
    this->m_bRenderSpecular.m_Value = 1;
    goto LABEL_21;
  }
  if ( (m_pObj->m_pEntity->m_flags & 0x400) != 0 )
  {
    this->m_bRenderSpecular.m_Value = 1;
  }
  else
  {
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 192, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    m_pObj = this->__m_pChainEntity.m_pObj;
    this->m_bRenderSpecular.m_Value = 1;
    if ( m_pObj == 0 )
      goto LABEL_21;
  }
  if ( (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 193, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
LABEL_21:
  v7.m_pString = 0;
  this->m_nStyle.m_Value = 0;
  this->m_Pattern.m_Value.m_pString = 0;
  CUtlString::Set(&v7, 0);
  m_pString = v7.m_pString;
  if ( this->m_Pattern.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Pattern.m_Value);
  this->m_Pattern.m_Value.m_pString = m_pString;
  this->m_flFadeMinDist.m_Value = 0.0;
  this->m_flFadeMaxDist.m_Value = 0.0;
  this->m_flShadowFadeMinDist.m_Value = 0.0;
  v5 = g_pLightQuery;
  this->m_bEnabled.m_Value = 0;
  this->m_flShadowFadeMaxDist.m_Value = 0.0;
  this->m_bFlicker.m_Value = 0;
  this->m_hQueryLight = (*(v5->_vptr_ILightQuery + 3))(v5);
  if ( this->m_flBrightnessMult.m_Value != 1.0 )
  {
    v6 = this->__m_pChainEntity.m_pObj;
    if ( v6 != 0 && (v6->m_pEntity->m_flags & 0x400) == 0 )
      (*(v6->_vptr_IHandleEntity + 22))(v6, 140, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_flBrightnessMult.m_Value = 1.0;
  }
}


// CLightComponent::~CLightComponent  (line 84, @0x0000000001eb9180, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoLockT, ~CNetworkVarBase, ~CUtlMemory, ~CUtlSlot, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT
// calls: CLightComponent::DestroyLightObject, CUtlString::FreeMemoryBlock, ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CUtlSignaller_Base*, int>::Purge
// callers: CEntityComponentHelperReferenced<CLightComponent>::Free
void __fastcall CLightComponent::~CLightComponent(CLightComponent *const this)
{
  CNetworkVarBase<CUtlString,CLightComponent::NetworkVar_m_Pattern> *p_m_Pattern; // rdi
  signed __int64 CurrentId; // rsi
  __int64 i; // rbx
  CUtlSignaller_Base *v5; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v7; // rdi
  bool v8; // zf

  this->_vptr_CLightComponent = off_3FB50D0;
  CLightComponent::DestroyLightObject(this);
  (*(g_pLightQuery->_vptr_ILightQuery + 4))(g_pLightQuery, this->m_hQueryLight);
  p_m_Pattern = &this->m_Pattern;
  if ( this->m_Pattern.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&p_m_Pattern->m_Value);
  CurrentId = ThreadGetCurrentId(p_m_Pattern);
  if ( CurrentId != this->m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_ConnectedSignallers.m_Size > i; ++i )
  {
    v5 = this->m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v5->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v7 = (v5->m_SlotDeletionDelegate.m_Closure.m_pthis + v5->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v7 - 1);
    (pfn)(v7, &this->CUtlSlot);
  }
  if ( --this->m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>, 0);
  v8 = (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignallers.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
    if ( (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
  }
}


// CLightComponent::Activate  (line 92, @0x0000000001eb9ae0, libserver.so)  // inlines: EntityLightType, GetClassNameAsCStr, String
// calls: V_stricmp_fast, CLightComponent::UpdateQueryLight
// callers: CLightEntity::Activate
// strings: "light_omni", "light_spot", "light_directional", "light_environment"
bool __fastcall CLightComponent::Activate(CLightComponent *const this, CEntityInstance *pEntity)
{
  const char *m_pAsString; // r12
  CEntityIdentity *m_pEntity; // rax
  int v5; // eax
  LightType_t v6; // edx
  int v8; // eax

  m_pAsString = "";
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v5 = V_stricmp_fast(m_pAsString, "light_omni");
  v6 = LightType_t::MATERIAL_LIGHT_POINT;
  if ( v5 != 0 )
  {
    v8 = V_stricmp_fast(m_pAsString, "light_spot");
    v6 = LightType_t::MATERIAL_LIGHT_SPOT;
    if ( v8 != 0 )
    {
      if ( V_stricmp_fast(m_pAsString, "light_directional") != 0
        && V_stricmp_fast(m_pAsString, "light_environment") != 0 )
      {
        v6 = LightType_t::MATERIAL_LIGHT_DISABLE;
      }
      else
      {
        v6 = LightType_t::MATERIAL_LIGHT_DIRECTIONAL;
      }
    }
  }
  this->m_LightType = v6;
  CLightComponent::UpdateQueryLight(this);
  return 1;
}


// CLightComponent::UpdateOnRemove  (line 115, @0x0000000001eb8a90, libserver.so)
// callers: CLightEntity::UpdateOnRemove
void __fastcall CLightComponent::UpdateOnRemove(CLightComponent *const this, CEntityInstance *pEntity)
{
  (*(g_pLightQuery->_vptr_ILightQuery + 5))(g_pLightQuery, this->m_hQueryLight, 0);
}


// CLightComponent::ComputeLightDesc  (line 134, @0x0000000001eb8ac0, libserver.so)  // inlines: GetColumn, Negate, NormalizedSafe, VectorMultiply, operator*, operator=
// calls: SRGBColorToLinearColor, VectorNormalize, LightDesc_t::RecalculateDerivedValues, LightDesc_t::SetupOldStyleAttenuation
// callers: CLightComponent::UpdateSceneObjects, CLightComponent::UpdateQueryLight
void __fastcall CLightComponent::ComputeLightDesc(
        CLightComponent *const this,
        LightDesc_t *const desc,
        const matrix3x4a_t *const xform)
{
  CNetworkColorBase<Color,CLightComponent::NetworkVar_m_Color> *p_m_Color; // rdi
  vec_t v7; // xmm1_4
  vec_t v8; // xmm2_4
  unsigned __int32 v9; // eax
  vec_t v10; // xmm0_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  vec_t x; // xmm3_4
  vec_t z; // xmm0_4
  vec_t y; // xmm2_4
  vec_t v19; // xmm2_4
  vec_t v20; // xmm3_4
  float v21; // xmm0_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm2_4
  float fConstantAttn; // [rsp+8h] [rbp-38h]
  float v26; // [rsp+Ch] [rbp-34h]
  Vector vec; // [rsp+10h] [rbp-30h] BYREF

  p_m_Color = &this->m_Color;
  desc->m_Type = p_m_Color[-1];
  fConstantAttn = *&p_m_Color[2];
  v26 = *&p_m_Color[1];
  vec = SRGBColorToLinearColor(&p_m_Color->m_Value);
  v7 = (vec.z * v26) * fConstantAttn;
  v8 = (vec.x * v26) * fConstantAttn;
  v9 = desc->m_Type & 0xFFFFFFFD;
  v10 = (vec.y * v26) * fConstantAttn;
  desc->m_Color.z = v7;
  desc->m_BounceColor.z = v7;
  desc->m_Color.x = v8;
  desc->m_Color.y = v10;
  desc->m_BounceColor.x = v8;
  desc->m_BounceColor.y = v10;
  if ( v9 == 1 )
    LightDesc_t::SetupOldStyleAttenuation(
      desc,
      this->m_flAttenuation1.m_Value,
      this->m_flAttenuation0.m_Value,
      fConstantAttn);
  desc->m_Range = this->m_flRange.m_Value;
  desc->m_Falloff = this->m_flFalloff.m_Value;
  desc->m_Theta = this->m_flTheta.m_Value;
  desc->m_Phi = this->m_flPhi.m_Value;
  desc->m_bCastShadows = this->m_bCastShadows.m_Value;
  desc->m_nShadowWidth = this->m_nShadowWidth.m_Value;
  desc->m_nShadowHeight = this->m_nShadowHeight.m_Value;
  desc->m_bRenderDiffuse = this->m_bRenderDiffuse.m_Value;
  desc->m_bRenderSpecular = this->m_bRenderSpecular.m_Value;
  desc->m_lightCookie.m_nHashCode = this->m_lightCookie.m_Value.m_nHashCode;
  v11 = xform->m_flMatVal[1][3];
  v12 = xform->m_flMatVal[2][3];
  desc->m_Position.x = xform->m_flMatVal[0][3];
  desc->m_Position.y = v11;
  desc->m_Position.z = v12;
  v13 = xform->m_flMatVal[2][0];
  v14 = xform->m_flMatVal[1][0];
  v15 = xform->m_flMatVal[0][0];
  desc->m_Direction.z = v13;
  desc->m_Direction.y = v14;
  desc->m_Direction.x = v15;
  if ( this->m_LightType == LightType_t::MATERIAL_LIGHT_DIRECTIONAL )
  {
    desc->m_Direction.x = -v15;
    desc->m_Direction.y = -v14;
    desc->m_Direction.z = -v13;
  }
  vec = desc->m_Direction;
  if ( VectorNormalize(&vec) == 0.0 )
  {
    x = 1.0;
    z = 0.0;
    y = 0.0;
  }
  else
  {
    y = vec.y;
    x = vec.x;
    z = vec.z;
  }
  desc->m_Direction.x = x;
  desc->m_Direction.y = y;
  desc->m_Direction.z = z;
  v19 = xform->m_flMatVal[1][2];
  v20 = xform->m_flMatVal[0][2];
  vec.z = xform->m_flMatVal[2][2];
  vec.y = v19;
  vec.x = v20;
  v21 = VectorNormalize(&vec);
  v22 = 0.0;
  if ( v21 == 0.0 )
  {
    v23 = 1.0;
    v24 = 0.0;
  }
  else
  {
    v24 = vec.y;
    v22 = vec.x;
    v23 = vec.z;
  }
  desc->m_vecUp.x = v22;
  desc->m_vecUp.y = v24;
  desc->m_vecUp.z = v23;
  LightDesc_t::RecalculateDerivedValues(desc);
}


// CLightComponent::CreateLightObject  (line 174, @0x0000000001eb9020, libserver.so)  // inlines: GetBool
// calls: CLightComponent::DestroyLightObject, CRenderGameSystem::GetSceneWorld, __cxa_guard_acquire, KeyValues::GetInt, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CLightComponent::UpdateSceneObjects
// strings: "SceneSystem/VrLightBinner"
// globals: `guard variable for'CLightComponent::CreateLightObject(LightDesc_t const&)::s_bUseVrLightBinner, CLightComponent::CreateLightObject(LightDesc_t const&)::s_bUseVrLightBinner
void __fastcall CLightComponent::CreateLightObject(CLightComponent *const this, const LightDesc_t *const lightDesc)
{
  __int64 (__fastcall *v4)(ISceneSystem *, const LightDesc_t *const, ISceneWorld *, _QWORD); // r14
  ISceneWorld *SceneWorld; // rax
  CSceneLightObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  PrtLightHandle_t v9; // rdx
  __int64 v10; // rax
  KeyValues *v11; // rax
  CSceneLightObject *m_pLightSceneObject; // rax

  CLightComponent::DestroyLightObject(this);
  v4 = *(*g_pSceneSystem + 264LL);
  SceneWorld = CRenderGameSystem::GetSceneWorld(g_pRenderGameSystem, 0);
  v6 = v4(g_pSceneSystem, lightDesc, SceneWorld, 0);
  this->m_pLightSceneObject = v6;
  if ( v6 != 0 )
  {
    if ( `guard variable for'CLightComponent::CreateLightObject(LightDesc_t const&)::s_bUseVrLightBinner == 0
      && __cxa_guard_acquire(&`guard variable for'CLightComponent::CreateLightObject(LightDesc_t const&)::s_bUseVrLightBinner) != 0 )
    {
      v11 = (*(g_pApplication->_vptr_IAppSystem + 19))(g_pApplication);
      CLightComponent::CreateLightObject(LightDesc_t const&)::s_bUseVrLightBinner = KeyValues::GetInt(
                                                                                      v11,
                                                                                      "SceneSystem/VrLightBinner",
                                                                                      0) != 0;
      __cxa_guard_release(&`guard variable for'CLightComponent::CreateLightObject(LightDesc_t const&)::s_bUseVrLightBinner);
    }
    if ( this->m_LightType == LightType_t::MATERIAL_LIGHT_DIRECTIONAL
      && !CLightComponent::CreateLightObject(LightDesc_t const&)::s_bUseVrLightBinner )
    {
      m_pLightSceneObject = this->m_pLightSceneObject;
      *(&m_pLightSceneObject->m_bCanBeModified + 2) = LODWORD(lightDesc->m_Range);
      *(&m_pLightSceneObject->m_bCanBeModified + 1) = this->m_nCascades.m_Value;
    }
    v7 = (*(*g_pRenderService + 256LL))(g_pRenderService);
    v9 = 0;
    if ( v7 != 0 )
    {
      v10 = (*(*g_pRenderService + 256LL))(g_pRenderService, v8, 0);
      v9 = (*(*v10 + 64LL))(v10, lightDesc, 1);
    }
    this->m_hPrtLight = v9;
  }
}


// CLightComponent::UpdateLightObject  (line 195, @0x0000000001eb8d60, libserver.so)  // inlines: CSceneLightObjectModifyScope, GetLightDescForModify, SetBounds, UpdateBoundsFromLightDesc, operator=, ~CSceneLightObjectModifyScope
// calls: LightDesc_t::CalculateBounds
// callers: CLightComponent::UpdateSceneObjects
void __fastcall CLightComponent::UpdateLightObject(CLightComponent *const this, const LightDesc_t *const lightDesc)
{
  CSceneLightObject *m_pLightSceneObject; // r12
  LightDesc_t *p_m_lightDesc; // rax
  CSceneLightObject *v6; // rdx
  __int64 v7; // rax
  Vector vMinBounds; // [rsp+0h] [rbp-50h] BYREF
  Vector vMaxBounds; // [rsp+10h] [rbp-40h] BYREF

  m_pLightSceneObject = this->m_pLightSceneObject;
  if ( m_pLightSceneObject != 0 )
  {
    m_pLightSceneObject->m_bCanBeModified = 1;
    p_m_lightDesc = 0;
    v6 = this->m_pLightSceneObject;
    if ( v6->m_bCanBeModified )
      p_m_lightDesc = &v6->m_lightDesc;
    *p_m_lightDesc = *lightDesc;
    if ( !LightDesc_t::CalculateBounds(&m_pLightSceneObject->m_lightDesc, &vMinBounds, &vMaxBounds) )
      (*(*m_pLightSceneObject->m_pWorld + 56LL))(m_pLightSceneObject->m_pWorld, &vMinBounds, &vMaxBounds);
    (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, m_pLightSceneObject, &vMinBounds, &vMaxBounds);
    m_pLightSceneObject->m_bCanBeModified = 0;
  }
  if ( this->m_hPrtLight != 0 )
  {
    v7 = (*(*g_pRenderService + 256LL))(g_pRenderService);
    (*(*v7 + 72LL))(v7, this->m_hPrtLight, lightDesc);
  }
}


// CLightComponent::DestroyLightObject  (line 213, @0x0000000001eb8fb0, libserver.so)
// callers: CLightComponent::CreateLightObject, CLightComponent::~CLightComponent, CLightComponent::UpdateSceneObjects
void __fastcall CLightComponent::DestroyLightObject(CLightComponent *const this)
{
  __int64 v2; // rax

  if ( this->m_pLightSceneObject != 0 )
  {
    (*(*g_pSceneSystem + 136LL))(g_pSceneSystem);
    this->m_pLightSceneObject = 0;
  }
  if ( this->m_hPrtLight != 0 )
  {
    v2 = (*(*g_pRenderService + 256LL))(g_pRenderService);
    if ( v2 != 0 )
      (*(*v2 + 80LL))(v2, this->m_hPrtLight);
    this->m_hPrtLight = 0;
  }
}


// CLightComponent::UpdateSceneObjects  (line 239, @0x0000000001eb92d0, libserver.so)  // inlines: CUtlStringToken, CalcAbsolutePosition, Clear, DisableFadeAndCull, DisableShadowFadeAndCull, EntityToWorldTransform, GetComponent<CBodyComponent>, Init, Lerp<float>, LightDesc_t, LightStyles_BrightnessFromChar, LightStyles_GetBrightnessMultiplier, LightStyles_GetPattern, Load, Max<float>, NodeToWorldTransform, SafeSquare, SetFadeAndCullDistance, SetShadowFadeAndCullDistance, V_strlen, curtime, operator*=, operator[], rendertime
// calls: CGameSceneNode::HasFutureInterpolatedData, CLightComponent::ComputeLightDesc, CUtlString::Get, strlen, floorf, CLightComponent::UpdateLightObject, CLightComponent::DestroyLightObject, sin, CGameSceneNode::CalcAbsolutePositionWhenDirty, CLightComponent::CreateLightObject
// globals: g_DefaultLightstyles
SceneObjectUpdaterRetval_t __fastcall CLightComponent::UpdateSceneObjects(
        CLightComponent *const this,
        const EventClientPreOutput_t *const output,
        bool bIsRenderingEnabled)
{
  float v3; // xmm1_4
  SceneObjectUpdaterRetval_t v4; // r12d
  bool m_Value; // al
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  const matrix3x4a_t *v13; // r15
  __int64 v14; // r15
  const char *v15; // rax
  const char *v16; // r14
  int v17; // esi
  CGlobalVars *v18; // r12
  float v19; // xmm0_4
  int v20; // r8d
  __int64 v21; // rtt
  float v22; // xmm3_4
  __int64 v23; // rdx
  float v24; // xmm2_4
  float v25; // xmm1_4
  CSceneLightObject *m_pLightSceneObject; // rax
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  CSceneLightObject *v32; // rax
  float v33; // xmm3_4
  float v34; // xmm2_4
  CGlobalVars *v36; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v38; // rdx
  FnGlobalVarsWarningFunc v39; // rax
  int v40; // [rsp+8h] [rbp-D8h]
  float nLightStylePatternLength; // [rsp+Ch] [rbp-D4h]
  int nLightStylePatternLengtha; // [rsp+Ch] [rbp-D4h]
  LightDesc_t desc; // [rsp+10h] [rbp-D0h] BYREF

  v4 = SceneObjectUpdaterRetval_t::SCENE_OBJECT_UPDATER_DONE;
  m_Value = this->m_bEnabled.m_Value;
  if ( this->m_bFlicker.m_Value )
  {
    v36 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, output, bIsRenderingEnabled);
      }
      m_Value = sin((50.0 * v36->m_flCurrentTime)) > 0.0;
    }
    else
    {
      m_Value = 0;
    }
    v4 = SceneObjectUpdaterRetval_t::SCENE_OBJECT_UPDATER_SCHEDULE_NEXT_FRAME;
  }
  if ( !m_Value )
  {
    CLightComponent::DestroyLightObject(this);
    return v4;
  }
  m_pEntity = this->m_pOwner.m_pObj->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v10 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v10 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  v12 = *(v11 + 8);
  if ( *(v12 + 260) != 0 )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(*(v11 + 8));
  v13 = (v12 + 16);
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && gpGlobals->m_bInSimulation )
  {
    v38 = gpGlobals->m_pfnWarningFunc;
    if ( v38 != 0 )
      (v38)(0, output, 0.0);
  }
  if ( CGameSceneNode::HasFutureInterpolatedData(*(v11 + 8), v3) )
    v4 = SceneObjectUpdaterRetval_t::SCENE_OBJECT_UPDATER_SCHEDULE_NEXT_FRAME;
  memset(&desc, 0, 60);
  desc.m_bCastShadows = 1;
  desc.m_nShadowWidth = 0;
  desc.m_nShadowHeight = 0;
  desc.m_bRenderDiffuse = 1;
  desc.m_bRenderSpecular = 1;
  memset(&desc.m_Shape, 0, 72);
  CLightComponent::ComputeLightDesc(this, &desc, v13);
  v14 = this->m_nStyle.m_Value;
  v15 = CUtlString::Get(&this->m_Pattern.m_Value);
  v16 = v15;
  if ( v15 == 0 || (v17 = strlen(v15)) == 0 )
  {
    if ( (v14 - 2) > 9 )
      goto LABEL_20;
    v16 = g_DefaultLightstyles[v14];
    if ( v16 != 0 )
      v17 = strlen(g_DefaultLightstyles[v14]);
    else
      v17 = 0;
  }
  v18 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && gpGlobals->m_bInSimulation )
    {
      v39 = gpGlobals->m_pfnWarningFunc;
      if ( v39 != 0 )
      {
        nLightStylePatternLengtha = v17;
        v39(GlobalVarsUsageWarning_t::GV_RENDERTIME_CALLED_DURING_SIMULATION);
        v17 = nLightStylePatternLengtha;
      }
    }
    v40 = v17;
    nLightStylePatternLength = 10.0 * v18->m_flRenderTime;
    v19 = floorf(nLightStylePatternLength);
    v17 = v40;
    v20 = v19 + 1;
    LODWORD(v21) = v19;
    HIDWORD(v21) = v19 >> 31;
    v22 = nLightStylePatternLength - v19;
    v23 = (v21 % v40);
  }
  else
  {
    v23 = 0;
    v20 = 1;
    v22 = 0.0;
  }
  v4 = SceneObjectUpdaterRetval_t::SCENE_OBJECT_UPDATER_SCHEDULE_NEXT_FRAME;
  v24 = (v16[v23] - 97) * 0.083333328;
  v25 = ((((v16[v20 % v17] - 97) * 0.083333328) - v24) * v22) + v24;
  desc.m_Color.x = desc.m_Color.x * v25;
  desc.m_Color.y = desc.m_Color.y * v25;
  desc.m_Color.z = v25 * desc.m_Color.z;
LABEL_20:
  if ( this->m_pLightSceneObject != 0 )
    CLightComponent::UpdateLightObject(this, &desc);
  else
    CLightComponent::CreateLightObject(this, &desc);
  m_pLightSceneObject = this->m_pLightSceneObject;
  if ( m_pLightSceneObject == 0 )
    return v4;
  v27 = this->m_flFadeMaxDist.m_Value;
  v28 = this->m_flFadeMinDist.m_Value;
  if ( v27 > 0.0 )
  {
    if ( v28 < 0.0 )
      v28 = fmaxf(0.0, v28 + v27);
    if ( v28 < 1.0e10 )
    {
      m_pLightSceneObject->m_flStartFadeDistanceSquared = v28 * v28;
      if ( v27 < 1.0e10 )
        goto LABEL_28;
    }
    else
    {
      m_pLightSceneObject->m_flStartFadeDistanceSquared = 3.4028235e38;
      if ( v27 < 1.0e10 )
      {
LABEL_28:
        v29 = v27 * v27;
LABEL_29:
        m_pLightSceneObject->m_flFarCullDistanceSquared = v29;
        goto LABEL_30;
      }
    }
    v29 = 3.4028235e38;
    goto LABEL_29;
  }
  m_pLightSceneObject->m_flStartFadeDistanceSquared = 3.4028235e38;
  m_pLightSceneObject->m_flFarCullDistanceSquared = 3.4028235e38;
LABEL_30:
  v30 = this->m_flShadowFadeMaxDist.m_Value;
  v31 = this->m_flShadowFadeMinDist.m_Value;
  v32 = this->m_pLightSceneObject;
  if ( v30 <= 0.0 )
  {
    v32->m_flShadowFadeMinDistSquared = 3.4028235e38;
    v32->m_flShadowFadeMaxDistSquared = 3.4028235e38;
  }
  else
  {
    if ( v31 >= 0.0 || (v31 = v31 + v30) >= 0.0 )
    {
      if ( v31 < 1.0e10 )
        v33 = v31 * v31;
      else
        v33 = 3.4028235e38;
    }
    else
    {
      v33 = 0.0;
    }
    v32->m_flShadowFadeMinDistSquared = v33;
    if ( v30 >= 1.0e10 )
      v34 = 3.4028235e38;
    else
      v34 = v30 * v30;
    v32->m_flShadowFadeMaxDistSquared = v34;
  }
  return v4;
}


// CLightComponent::OnLightStateChanged  (line 299, @0x0000000001ebf4d0, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, MarkChanged, operator[]
// calls: CLightComponent::UpdateQueryLight, CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
void __fastcall CLightComponent::OnLightStateChanged(CLightComponent *const this)
{
  SceneObjectUpdaterHandle_t m_hUpdater; // r12
  char v3; // al
  __int64 v4; // rax
  unsigned int v5; // r14d
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v6; // r13
  int m_Size; // r15d
  bool v8; // zf
  int v9; // eax
  SceneObjectUpdaterHandle_t *v10; // rax
  int v11; // eax

  m_hUpdater = this->m_hUpdater;
  v3 = *(m_hUpdater + 76);
  if ( (v3 & 2) != 0 && (v3 & 1) != 0 )
  {
    v4 = *(m_hUpdater + 87);
    v5 = g_pRenderGameSystem->m_sceneObjectUpdater.m_pWorkFrameCount[v4];
    if ( v5 != *(m_hUpdater + 20) )
    {
      v6 = &g_pRenderGameSystem->m_sceneObjectUpdater.m_activeItems[v4][v5 & 1];
      m_Size = v6->m_Size;
      v8 = v6->m_Size == g_pRenderGameSystem->m_sceneObjectUpdater.m_activeItems[v4][v5 & 1].m_Memory.m_nAllocationCount;
      v9 = v6->m_Size;
      if ( v8 )
      {
        CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
          &v6->m_Memory,
          1);
        v9 = v6->m_Size;
      }
      v6->m_Size = v9 + 1;
      v10 = &v6->m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
        *v10 = m_hUpdater;
      v11 = *(m_hUpdater + 21);
      *(m_hUpdater + 20) = v5;
      *(m_hUpdater + 21) = m_Size & 0xFFFFFF | v11 & 0xFF000000;
    }
  }
  CLightComponent::UpdateQueryLight(this);
}


// CLightComponent::UpdateQueryLight  (line 307, @0x0000000001eb98f0, libserver.so)  // inlines: CUtlStringToken, CalcAbsolutePosition, Clear, EntityToWorldTransform, GetComponent<CBodyComponent>, GetRootTransform, Init, LightDesc_t, Load, NodeToWorldTransform, operator[]
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty, CLightComponent::ComputeLightDesc
// callers: CLightComponent::Activate, CLightComponent::OnLightStateChanged
void __fastcall CLightComponent::UpdateQueryLight(CLightComponent *const this)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  LightDesc_t desc; // [rsp+0h] [rbp-C0h] BYREF

  desc.m_bCastShadows = 1;
  memset(&desc, 0, 60);
  desc.m_nShadowWidth = 0;
  desc.m_nShadowHeight = 0;
  desc.m_bRenderDiffuse = 1;
  desc.m_bRenderSpecular = 1;
  memset(&desc.m_Shape, 0, 72);
  m_pEntity = this->m_pOwner.m_pObj->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v5 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v5 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v5 = 0;
  }
  v6 = *(v5 + 8);
  if ( *(v6 + 260) != 0 )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(*(v5 + 8));
  CLightComponent::ComputeLightDesc(this, &desc, (v6 + 16));
  (*(g_pLightQuery->_vptr_ILightQuery + 7))(g_pLightQuery, this->m_hQueryLight, &desc);
  (*(g_pLightQuery->_vptr_ILightQuery + 5))(
    g_pLightQuery,
    this->m_hQueryLight,
    this->m_bEnabled.m_Value,
    v7,
    v8,
    v9,
    *&desc.m_Type,
    *&desc.m_Color.y,
    *&desc.m_BounceColor.x,
    *&desc.m_BounceColor.z,
    *&desc.m_Falloff,
    *&desc.m_Attenuation1,
    *&desc.m_Theta,
    *&desc.m_lightCookie.m_nHashCode,
    *&desc.m_nShadowWidth,
    *&desc.m_bRenderDiffuse,
    *&desc.m_flLightSourceDim0,
    *&desc.m_Position.x,
    *&desc.m_Position.z,
    *&desc.m_Direction.y,
    *&desc.m_vecUp.x,
    *&desc.m_vecUp.z,
    *&desc.m_PhiDot,
    *&desc.m_Flags,
    LODWORD(desc.m_RangeSquared));
}


