// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/rendercomponent.cpp:42
class CEntityComponentHelperFactory_CRenderComponent : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CRenderComponent();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPVSData::CreatePVSNode  (line 27, @0x0000000001eba920, libserver.so)
// calls: operator new
CPVSData *__cdecl CPVSData::CreatePVSNode()
{
  CPVSData *result; // rax

  result = operator new(0x48u);
  result->m_pNext = 0;
  result->m_nPVSFlags = 0;
  result->m_nPVSMasks = 0;
  result->m_masks[0].m_nMask = 1;
  result->m_masks[0].m_nOffset = 0;
  return result;
}


// CRenderComponent::GetEntComponentInfo  (line 42, @0x0000000001eba960, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CRenderComponent
// strings: "CRenderComponentReferenced", "CRenderComponentReferencedPtr"
// globals: CRenderComponent::s_EntComponentInfo, `guard variable for'CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent, CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent
EntComponentInfo_t *__cdecl CRenderComponent::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CRenderComponent::s_EntComponentInfo.m_pName != 0 )
    return &CRenderComponent::s_EntComponentInfo;
  if ( `guard variable for'CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent == 0
    && __cxa_guard_acquire(&`guard variable for'CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent) != 0 )
  {
    CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent.Data1 = 726870532;
    v1 = HashString("CRenderComponent");
    CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CRenderComponent", 0x3501A674u);
    CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent);
  }
  CRenderComponent::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CRenderComponent::s_EntComponentInfo.m_nFlags = 2;
  CRenderComponent::s_EntComponentInfo.m_id = CRenderComponent::GetEntComponentInfo(void)::UUID_CRenderComponent;
  CRenderComponent::s_EntComponentInfo.m_pName = "RenderComponent";
  CRenderComponent::s_EntComponentInfo.m_pCPPClassname = "CRenderComponent";
  CRenderComponent::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CRenderComponentReferenced";
  CRenderComponent::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CRenderComponentReferencedPtr";
  return &CRenderComponent::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CRenderComponent  (line 42, @0x0000000001ebaa80, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CRenderComponent::GetEntComponentInfo, CEntityComponentHelperInit_CEntityComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CRenderComponent::CEntityComponentHelperFactory_CRenderComponent, _GLOBAL__sub_I__unity_components_01.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CRenderComponent(void)::componentHelper, CEntityComponentHelperInit_CRenderComponent(void)::s_bIsInitialized, CEntityComponentHelperInit_CRenderComponent(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CRenderComponent()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CRenderComponent(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CRenderComponent(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CRenderComponent(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CRenderComponent(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CRenderComponent(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CRenderComponent(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FB5190;
    CEntityComponentHelperInit_CRenderComponent(void)::componentHelper.m_pInfo = CRenderComponent::GetEntComponentInfo();
    CEntityComponentHelperInit_CRenderComponent(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CRenderComponent(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CRenderComponent(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CRenderComponent(void)::s_bIsInitialized = 1;
    EntComponentInfo = CRenderComponent::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CEntityComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CRenderComponent(void)::componentHelper.m_nPriority = 0;
  }
  return &CEntityComponentHelperInit_CRenderComponent(void)::componentHelper;
}


// CEntityComponentHelperFactory_CRenderComponent::CEntityComponentHelperFactory_CRenderComponent  (line 42, @0x0000000001ebab60, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CRenderComponent
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CRenderComponent::CEntityComponentHelperFactory_CRenderComponent(
        CEntityComponentHelperFactory_CRenderComponent *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CRenderComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CRenderComponent::CRenderComponent  (line 48, @0x0000000001ebb750, libserver.so)  // inlines: CEntityIndex, CEntityOwnerPtr, CInterpolatedVarArrayBase, CInterpolatedVarBase, CInterpolatedVarHistory, CInterpolatedVarProcedural, CInterpolatedVarProceduralBase, CNetworkVarChainer, CSmartPtr, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, ChangeAccessorFieldPathIndex_t, ClosurePtr, FastDelegate3, FastDelegate4, GetPerPhaseData, GetPhaseCount, Init, PerPhaseData_t, Purge, RemoveAll, SetDataArrayCount, SetIsMemcopyableType, SetMaxCount, V_memset, memset, ~CInterpolatedVarBase, ~CInterpolatedVarProceduralBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IInterpolatedVar
// calls: operator new [], operator delete [], memset, free, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Reset, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::~CInterpolatedVarArrayBase, _Unwind_Resume, CUtlMemory<SceneObjectUpdaterHandle_t__*, int>::Purge
// callers: CEntityComponentHelperReferenced<CRenderComponent>::Allocate, CSchemaClassBinding<CRenderComponent>::Allocate, CSchemaClassBinding<CRenderComponent>::ConstructInPlace, CSchemaClassBinding<CRenderComponent>::AllocateAndCopyConstruct
void __fastcall CRenderComponent::CRenderComponent(CRenderComponent *const this)
{
  CEntityInstance *v2; // rdx
  _WORD *v3; // rax
  int v4; // edx
  int v5; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rcx
  char v7; // cl
  char v8; // si
  bool v9; // al
  char v10; // dl
  EnableRenderingInfo_t *m_pValue; // rdi
  size_t v12; // rdi
  EnableRenderingInfo_t *v13; // rax
  char v14; // di
  int v15; // r15d
  char v16; // cl
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v17; // r12
  int v18; // eax
  __int16 v19; // r13
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  int v21; // eax
  CInterpolatedVarProcedural<EnableRenderingInfo_t> *p_m_iv_enableRendering; // [rsp+8h] [rbp-48h]

  this->__m_pChainEntity.m_PathIndex.m_Value = -1;
  this->__m_pChainEntity.m_pPropagationList = 0;
  this->m_sceneObjectUpdaters.m_Size = 0;
  this->m_sceneObjectUpdaters.m_Memory.m_pMemory = 0;
  this->m_sceneObjectUpdaters.m_Memory.m_nAllocationCount = 0;
  v2 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_sceneObjectUpdaters.m_Memory.m_nGrowSize = 0;
  this->m_iv_enableRendering.m_nEntityIndex.m_Data = -1;
  this->m_pOwner.m_pObj = v2;
  this->__m_pChainEntity.m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
  p_m_iv_enableRendering = &this->m_iv_enableRendering;
  this->m_iv_enableRendering._vptr_IInterpolatedVar = &off_3FB4690;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 34) = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
          + 34)
        & 0xC7
        | 0x10;
  v3 = operator new[](0x28u);
  v3[9] &= 0xFE07u;
  *v3 = 1;
  *(v3 + 16) &= 0xC0u;
  *(v3 + 1) = 0;
  v3 += 4;
  *(v3 + 3) = -1;
  v4 = *(v3 + 2);
  *(v3 + 6) = 0;
  *(v3 + 4) = 0;
  *(v3 + 5) = 0;
  v4 &= 0xFFF81FFF;
  *(v3 + 2) = v4;
  v3[4] = v4 & 0x103F | 0x40;
  *(v3 + 11) = HIBYTE(v4) & 0x81 | 0x10;
  v5 = 0;
  *(v3 + 9) = 16;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 33) &= 0xC0u;
  this->m_iv_enableRendering.m_pPerPhaseData = v3;
  LOBYTE(v3) = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
               + 32);
  this->m_iv_enableRendering.m_pValue = 0;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 34) |= 0xC0u;
  this->m_iv_enableRendering.m_nLooping = 0;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 35) = -4;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 32) = v3 & 0x80 | 0x40;
  while ( 1 )
  {
    v7 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
         + 32);
    v8 = v7 & 0x20;
    if ( v5 >= 2 - ((v7 & 0x20) == 0) )
      break;
    v9 = (v7 & 0x40) != 0;
    if ( v5 != 0 )
    {
      m_pPerPhaseData = 0;
      if ( v8 != 0 )
        m_pPerPhaseData = this->m_iv_enableRendering.m_pPerPhaseData + 1;
    }
    else
    {
      m_pPerPhaseData = this->m_iv_enableRendering.m_pPerPhaseData;
    }
    ++v5;
    *(&m_pPerPhaseData->m_VarHistory + 9) = (16 * v9) | *(&m_pPerPhaseData->m_VarHistory + 9) & 0xEF;
  }
  v10 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
        + 33);
  this->m_iv_enableRendering.m_nEntityIndex.m_Data = -1;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 34) &= 0xF8u;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 32) = v7 & 0x7F;
  this->m_iv_enableRendering.m_readDelegate.m_Closure.m_pthis = 0;
  v10 |= 0xC0u;
  this->m_iv_enableRendering._vptr_IInterpolatedVar = &off_3FB4C30;
  *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
  + 33) = v10;
  this->m_iv_enableRendering.m_readDelegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_iv_enableRendering.m_readDelegate.m_Closure.m_pFunction.__delta = 0;
  this->m_iv_enableRendering.m_writeDelegate.m_Closure.m_pthis = 0;
  this->m_iv_enableRendering.m_writeDelegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_iv_enableRendering.m_writeDelegate.m_Closure.m_pFunction.__delta = 0;
  if ( (v10 & 0x3F) != 1 )
  {
    m_pValue = this->m_iv_enableRendering.m_pValue;
    *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
    + 33) = -63;
    this->m_iv_enableRendering.m_nLooping = 0;
    if ( m_pValue != 0 )
    {
      operator delete[](m_pValue);
      v12 = 4LL
          * (*(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
             + 33)
           & 0x3F);
    }
    else
    {
      v12 = 4;
    }
    v13 = operator new[](v12);
    v14 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
          + 33);
    this->m_iv_enableRendering.m_pValue = v13;
    v15 = 0;
    memset(v13, 0, 4LL * (v14 & 0x3F));
    v16 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
          + 32);
    while ( v15 < 2 - ((v16 & 0x20) == 0) )
    {
      v18 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
            + 33)
          & 0x3F;
      if ( v15 != 0 )
      {
        v17 = 0;
        if ( (v16 & 0x20) != 0 )
          v17 = this->m_iv_enableRendering.m_pPerPhaseData + 1;
      }
      else
      {
        v17 = this->m_iv_enableRendering.m_pPerPhaseData;
      }
      if ( (*(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
            + 33)
          & 0x3F) == 0 )
        v18 = 1;
      v19 = v18;
      if ( v18 != ((*(&v17->m_VarHistory + 4) >> 6) & 0x3F) )
      {
        m_pElements = v17->m_VarHistory.m_pElements;
        *(&v17->m_VarHistory + 5) &= 0xFE07u;
        free(m_pElements);
        v21 = *(&v17->m_VarHistory + 2);
        v17->m_VarHistory.m_pElements = 0;
        v17->m_VarHistory.m_nFreeDataElements = -1;
        v21 &= 0xFFF81FFF;
        *(&v17->m_VarHistory + 2) = v21;
        *(&v17->m_VarHistory + 8) = v21 & 0xC0;
        *(&v17->m_VarHistory + 4) = (v19 << 6) | *(&v17->m_VarHistory + 4) & 0xF03F;
        v16 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
              + 32);
      }
      ++v15;
    }
    CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t>>::Reset(p_m_iv_enableRendering);
  }
  this->m_bIsRenderingWithViewModels = 0;
  this->m_nSplitscreenFlags = 15;
  this->m_changedRenderComponentListIdx = -1;
  this->m_bEnableRendering = 1;
  this->m_bInterpolationReadyToDraw = 1;
  this->m_bHasSchemaRenderAttributes = 0;
}


// CRenderComponent::~CRenderComponent  (line 64, @0x0000000001ebd6e0, libserver.so)  // inlines: CAutoLockT, ClearHistory, Free, GetPerPhaseData, GetPhaseCount, Lock, Purge, Remove, RemoveAll, RemoveRenderComponentFromDirtyList, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT, ~CInterpolatedVarArrayBase, ~CInterpolatedVarBase, ~CInterpolatedVarHistory, ~CInterpolatedVarProcedural, ~CInterpolatedVarProceduralBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IInterpolatedVar, ~PerPhaseData_t
// calls: ThreadGetCurrentId, CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::Unlink, ThreadInterlockedExchange64, free, operator delete [], CUtlMemory<SceneObjectUpdaterHandle_t__*, int>::Purge, CThreadFastMutex::Lock(ulong long,uint)
// callers: CEntityComponentHelperReferenced<CRenderComponent>::Free, CSchemaClassBinding<CRenderComponent>::Deallocate, CSchemaClassBinding<CRenderComponent>::DestructInPlace
void __fastcall CRenderComponent::~CRenderComponent(CRenderComponent *const this)
{
  intp m_changedRenderComponentListIdx; // r13
  CRenderGameSystem *v3; // rbx
  signed __int64 CurrentId; // rsi
  int m_depth; // eax
  char v6; // di
  int v7; // ecx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *m_pPerPhaseData; // rsi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v9; // rax
  int v10; // edx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v11; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v12; // rbx
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v13; // rbx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::PerPhaseData_t *v15; // r13
  int v16; // eax
  EnableRenderingInfo_t *m_pValue; // rdi
  bool v18; // zf

  m_changedRenderComponentListIdx = this->m_changedRenderComponentListIdx;
  if ( m_changedRenderComponentListIdx != -1 )
  {
    v3 = g_pRenderGameSystem;
    CurrentId = ThreadGetCurrentId(this);
    if ( CurrentId != v3->m_changedRenderComponentsMutex.m_ownerID
      && _InterlockedCompareExchange64(&v3->m_changedRenderComponentsMutex, CurrentId, 0) != 0 )
    {
      _mm_pause();
      CThreadFastMutex::Lock(&v3->m_changedRenderComponentsMutex, CurrentId, 0);
    }
    else
    {
      ++v3->m_changedRenderComponentsMutex.m_depth;
    }
    CUtlLinkedList<CRenderComponent *,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>>::Unlink(
      &v3->m_changedRenderComponents,
      m_changedRenderComponentListIdx);
    *(m_changedRenderComponentListIdx + 16) = v3->m_changedRenderComponents.m_FirstFree;
    m_depth = v3->m_changedRenderComponentsMutex.m_depth;
    v3->m_changedRenderComponents.m_FirstFree = m_changedRenderComponentListIdx;
    v3->m_changedRenderComponentsMutex.m_depth = m_depth - 1;
    if ( v3->m_changedRenderComponentsMutex.m_depth == 0 )
      ThreadInterlockedExchange64(&v3->m_changedRenderComponentsMutex, 0);
  }
  v6 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
       + 32);
  v7 = 0;
  this->m_iv_enableRendering._vptr_IInterpolatedVar = &off_3FB4690;
  m_pPerPhaseData = this->m_iv_enableRendering.m_pPerPhaseData;
  while ( v7 < 2 - ((v6 & 0x20) == 0) )
  {
    v9 = m_pPerPhaseData;
    if ( v7 != 0 )
    {
      if ( (v6 & 0x20) == 0 )
        goto LABEL_13;
      v9 = m_pPerPhaseData + 1;
    }
    if ( v9 != 0 )
    {
      v10 = *(&v9->m_VarHistory + 2);
      v9->m_VarHistory.m_nFreeDataElements = -1;
      v10 &= 0xFFF81FFF;
      *(&v9->m_VarHistory + 2) = v10;
      *(&v9->m_VarHistory + 8) = v10 & 0xC0;
      v6 = *(&this->m_iv_enableRendering.CInterpolatedVarArrayBase<EnableRenderingInfo_t,false,true,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >
           + 32);
      m_pPerPhaseData = this->m_iv_enableRendering.m_pPerPhaseData;
    }
LABEL_13:
    ++v7;
  }
  v11 = m_pPerPhaseData;
  if ( m_pPerPhaseData != 0 )
  {
    v12 = &m_pPerPhaseData[*&m_pPerPhaseData[-1].m_flInterpolationAmount];
    if ( m_pPerPhaseData != v12 )
    {
      v13 = v12 - 1;
      do
      {
        m_pElements = v13->m_VarHistory.m_pElements;
        v15 = v13;
        *(&v13->m_VarHistory + 5) &= 0xFE07u;
        --v13;
        free(m_pElements);
        v16 = *(&v13[1].m_VarHistory + 2);
        v13[1].m_VarHistory.m_pElements = 0;
        v13[1].m_VarHistory.m_nFreeDataElements = -1;
        v16 &= 0xFFF81FFF;
        *(&v13[1].m_VarHistory + 2) = v16;
        *(&v13[1].m_VarHistory + 8) = v16 & 0xC0;
        v11 = this->m_iv_enableRendering.m_pPerPhaseData;
      }
      while ( v11 != v15 );
    }
    operator delete[](&v11[-1].m_flInterpolationAmount);
  }
  m_pValue = this->m_iv_enableRendering.m_pValue;
  if ( m_pValue != 0 )
    operator delete[](m_pValue);
  v18 = (this->m_sceneObjectUpdaters.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_sceneObjectUpdaters.m_Size = 0;
  this->m_iv_enableRendering._vptr_IInterpolatedVar = off_3FB4250;
  if ( v18 )
  {
    CUtlMemory<SceneObjectUpdaterHandle_t__ *,int>::Purge(&this->m_sceneObjectUpdaters.m_Memory);
    if ( (this->m_sceneObjectUpdaters.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<SceneObjectUpdaterHandle_t__ *,int>::Purge(&this->m_sceneObjectUpdaters.m_Memory);
  }
}


// CRenderComponent::Activate  (line 73, @0x0000000001ebab80, libserver.so)  // inlines: Count, GetPtr, MetaGetPtr, NumBasesToTraverse, SchemaMetaGetPtr2, _V_strcmp
// calls: CSchemaClassInfo::MetaGetPtr
// strings: "MRenderAttrCount"
void __fastcall CRenderComponent::Activate(CRenderComponent *const this, CEntityInstance *pEntity)
{
  __int64 v3; // r11
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 Ptr; // rax
  bool v8; // al
  unsigned int v9; // edx
  __int64 v10; // r10
  unsigned int v11; // eax
  __int64 v12; // rdx
  const CSchemaClassInfo *const *v13; // r12
  __int64 v14; // r13

  v3 = *(pEntity->Schema_DynamicBinding() + 40);
  if ( v3 == 0 )
    goto LABEL_18;
  v4 = abs32(*(v3 + 136));
  if ( v4 != 0 )
  {
    v5 = *(v3 + 128);
    v6 = v5 + 32LL * (v4 - 1) + 32;
    while ( strcmp(*v5, "MRenderAttrCount") != 0 )
    {
      v5 += 32;
      if ( v5 == v6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v9 = abs32(*(v3 + 152));
    if ( v9 == 0 )
    {
LABEL_14:
      v11 = abs32(*(v3 + 72));
      if ( v11 != 0 )
      {
        v12 = *(v3 + 64);
        v13 = (v12 + 8);
        v14 = v12 + 16LL * (v11 - 1) + 24;
        do
        {
          Ptr = CSchemaClassInfo::MetaGetPtr(
                  *v13,
                  "MRenderAttrCount",
                  SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
                  0);
          if ( Ptr != 0 )
            goto LABEL_7;
          v13 += 2;
        }
        while ( v13 != v14 );
      }
LABEL_18:
      v8 = 0;
      goto LABEL_8;
    }
    v5 = *(v3 + 144);
    v10 = v5 + 32LL * (v9 - 1) + 32;
    while ( strcmp(*v5, "MRenderAttrCount") != 0 )
    {
      v5 += 32;
      if ( v5 == v10 )
        goto LABEL_14;
    }
  }
  Ptr = *(v5 + 24);
  if ( Ptr == 0 )
    goto LABEL_14;
LABEL_7:
  v8 = Ptr >> 16 != 0;
LABEL_8:
  this->m_bHasSchemaRenderAttributes = v8;
}


// CRenderComponent::GetOwnerEntity  (line 85, @0x0000000001ebace0, libserver.so)
CBaseEntity *__fastcall CRenderComponent::GetOwnerEntity(CRenderComponent *const this)
{
  return this->m_pOwner.m_pObj;
}


// CRenderComponent::InstallSceneObjectUpdater  (line 97, @0x0000000001ebacf0, libserver.so)
SceneObjectUpdaterHandle_t __fastcall CRenderComponent::InstallSceneObjectUpdater(
        CRenderComponent *const this,
        CSceneObject *pSceneObject,
        bool bIsRenderingEnabled)
{
  return 0;
}


// CRenderComponent::InstallSceneObjectUpdater  (line 112, @0x0000000001ebad00, libserver.so)
SceneObjectUpdaterHandle_t __fastcall CRenderComponent::InstallSceneObjectUpdater(
        CRenderComponent *const this,
        CGameSceneNode *pSceneNode,
        CSceneObject *pSceneObject,
        float flScale,
        bool bIsRenderingEnabled)
{
  return 0;
}


// CRenderComponent::InstallSceneObjectUpdater  (line 129, @0x0000000001ebad10, libserver.so)
SceneObjectUpdaterHandle_t __fastcall CRenderComponent::InstallSceneObjectUpdater(
        CRenderComponent *const this,
        CSkeletonInstance *pSkeletonInstance,
        CSceneObject *pSceneObject,
        int16 nRigidSceneObjectBone)
{
  return 0;
}


// CRenderComponent::RemoveSceneObjectUpdater  (line 144, @0x0000000001ebad20, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// calls: CRenderGameSystem::RemoveSceneObjectUpdater
void __fastcall CRenderComponent::RemoveSceneObjectUpdater(
        CRenderComponent *const this,
        SceneObjectUpdaterHandle_t hUpdater)
{
  int m_Size; // ecx
  SceneObjectUpdaterHandle_t__ **m_pMemory; // r8
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r13

  m_Size = this->m_sceneObjectUpdaters.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_sceneObjectUpdaters.m_Memory.m_pMemory;
    v5 = 0;
    v6 = 1;
    if ( *m_pMemory == hUpdater )
    {
      v9 = 0;
      v5 = 0;
LABEL_9:
      CRenderGameSystem::RemoveSceneObjectUpdater(g_pRenderGameSystem, hUpdater);
      v7 = this->m_sceneObjectUpdaters.m_Size;
      if ( v7 > 0 )
      {
        v8 = v7 - 1;
        if ( v5 != v8 )
        {
          *(this->m_sceneObjectUpdaters.m_Memory.m_pMemory + v9) = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v8];
          v8 = this->m_sceneObjectUpdaters.m_Size - 1;
        }
        this->m_sceneObjectUpdaters.m_Size = v8;
      }
    }
    else
    {
      while ( ++v5 != m_Size )
      {
        if ( m_pMemory[v6] == hUpdater )
        {
          v9 = v6 * 8;
          goto LABEL_9;
        }
        ++v6;
      }
    }
  }
}


// CRenderComponent::SetRenderingEnabled  (line 164, @0x0000000001ebf170, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, SetEntityRenderingEnabled, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
// callers: CMarkupVolume::Spawn
void __fastcall CRenderComponent::SetRenderingEnabled(CRenderComponent *const this, bool bEnableRendering)
{
  bool m_bEnableRendering; // al
  char m_bInterpolationReadyToDraw; // dl
  char v5; // r14
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // r9d
  CRenderGameSystem *v10; // rcx
  SceneObjectUpdaterHandle_t__ *v11; // r12
  char v12; // dl
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // esi
  SceneObjectUpdaterHandle_t__ **v18; // rax
  int v19; // eax
  int v20; // [rsp+4h] [rbp-4Ch]
  int v21; // [rsp+8h] [rbp-48h]
  unsigned int v22; // [rsp+Ch] [rbp-44h]
  __int64 v23; // [rsp+10h] [rbp-40h]
  int *v24; // [rsp+18h] [rbp-38h]

  m_bEnableRendering = this->m_bEnableRendering;
  if ( m_bEnableRendering != bEnableRendering )
  {
    m_bInterpolationReadyToDraw = 0;
    v5 = bEnableRendering;
    if ( m_bEnableRendering )
      m_bInterpolationReadyToDraw = this->m_bInterpolationReadyToDraw;
    this->m_bEnableRendering = bEnableRendering;
    if ( bEnableRendering )
      v5 = this->m_bInterpolationReadyToDraw;
    if ( m_bInterpolationReadyToDraw != v5 )
    {
      m_Size = this->m_sceneObjectUpdaters.m_Size;
      if ( m_Size > 0 )
      {
        v7 = 0;
        v8 = 8LL * (m_Size - 1) + 8;
        v9 = 2 * (v5 & 1);
        do
        {
          while ( 1 )
          {
            v10 = g_pRenderGameSystem;
            v11 = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v7 / 8];
            v12 = *(v11 + 76);
            if ( v5 != ((v12 & 2) != 0) )
            {
              *(v11 + 76) = v9 | v12 & 0xFD;
              if ( (v9 & 1 | v12 & 1) != 0 )
              {
                v13 = *(v11 + 87);
                v14 = v10->m_sceneObjectUpdater.m_pWorkFrameCount[v13];
                if ( v14 != *(v11 + 20) )
                  break;
              }
            }
            v7 += 8LL;
            if ( v7 == v8 )
              return;
          }
          v15 = &v10->m_sceneObjectUpdater.m_activeItems[v13][v14 & 1];
          v16 = *v15;
          v17 = *v15;
          if ( *v15 == *(v15 + 16) )
          {
            v20 = v9;
            v21 = *v15;
            v22 = v14;
            v23 = v8;
            v24 = v15;
            CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
              (v15 + 8),
              1);
            v15 = v24;
            v9 = v20;
            v16 = v21;
            v14 = v22;
            v17 = *v24;
            v8 = v23;
          }
          *v15 = v17 + 1;
          v18 = (*(v15 + 8) + 8LL * v16);
          if ( v18 != 0 )
            *v18 = v11;
          v19 = *(v11 + 21);
          v7 += 8LL;
          *(v11 + 20) = v14;
          *(v11 + 21) = v16 & 0xFFFFFF | v19 & 0xFF000000;
        }
        while ( v7 != v8 );
      }
    }
  }
}


// CRenderComponent::SetInterpolationReadyToDraw  (line 190, @0x0000000001ebf310, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, SetEntityRenderingEnabled, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
void __fastcall CRenderComponent::SetInterpolationReadyToDraw(
        CRenderComponent *const this,
        bool bInterpolationReadyToDraw)
{
  bool m_bInterpolationReadyToDraw; // al
  char v4; // al
  int v5; // r14d
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // r9d
  CRenderGameSystem *v10; // rcx
  SceneObjectUpdaterHandle_t__ *v11; // r12
  char v12; // dl
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // esi
  SceneObjectUpdaterHandle_t__ **v18; // rax
  int v19; // eax
  int v20; // [rsp+4h] [rbp-4Ch]
  int v21; // [rsp+8h] [rbp-48h]
  unsigned int v22; // [rsp+Ch] [rbp-44h]
  __int64 v23; // [rsp+10h] [rbp-40h]
  int *v24; // [rsp+18h] [rbp-38h]

  m_bInterpolationReadyToDraw = this->m_bInterpolationReadyToDraw;
  if ( m_bInterpolationReadyToDraw == bInterpolationReadyToDraw )
    return;
  if ( this->m_bEnableRendering )
  {
    this->m_bInterpolationReadyToDraw = bInterpolationReadyToDraw;
    v4 = m_bInterpolationReadyToDraw;
    v5 = 1;
    if ( bInterpolationReadyToDraw )
      goto LABEL_5;
  }
  else
  {
    this->m_bInterpolationReadyToDraw = bInterpolationReadyToDraw;
    v4 = 0;
  }
  v5 = 0;
LABEL_5:
  if ( v4 != v5 )
  {
    m_Size = this->m_sceneObjectUpdaters.m_Size;
    if ( m_Size > 0 )
    {
      v7 = 0;
      v8 = 8LL * (m_Size - 1) + 8;
      v9 = 2 * v5;
      do
      {
        while ( 1 )
        {
          v10 = g_pRenderGameSystem;
          v11 = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v7 / 8];
          v12 = *(v11 + 76);
          if ( v5 != ((v12 & 2) != 0) )
          {
            *(v11 + 76) = v9 | v12 & 0xFD;
            if ( (v9 & 1 | v12 & 1) != 0 )
            {
              v13 = *(v11 + 87);
              v14 = v10->m_sceneObjectUpdater.m_pWorkFrameCount[v13];
              if ( v14 != *(v11 + 20) )
                break;
            }
          }
          v7 += 8LL;
          if ( v7 == v8 )
            return;
        }
        v15 = &v10->m_sceneObjectUpdater.m_activeItems[v13][v14 & 1];
        v16 = *v15;
        v17 = *v15;
        if ( *v15 == *(v15 + 16) )
        {
          v20 = v9;
          v21 = *v15;
          v22 = v14;
          v23 = v8;
          v24 = v15;
          CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
            (v15 + 8),
            1);
          v15 = v24;
          v9 = v20;
          v16 = v21;
          v14 = v22;
          v17 = *v24;
          v8 = v23;
        }
        *v15 = v17 + 1;
        v18 = (*(v15 + 8) + 8LL * v16);
        if ( v18 != 0 )
          *v18 = v11;
        v19 = *(v11 + 21);
        v7 += 8LL;
        *(v11 + 20) = v14;
        *(v11 + 21) = v16 & 0xFFFFFF | v19 & 0xFF000000;
      }
      while ( v7 != v8 );
    }
  }
}


// CRenderComponent::GetSceneObject  (line 209, @0x0000000001ebadc0, libserver.so)  // inlines: operator[]
// calls: CRenderGameSystem::GetSceneObject
CSceneObject *__fastcall CRenderComponent::GetSceneObject(const CRenderComponent *const this, int nIndex)
{
  if ( this->m_sceneObjectUpdaters.m_Size <= nIndex )
    return 0;
  else
    return CRenderGameSystem::GetSceneObject(
             g_pRenderGameSystem,
             this->m_sceneObjectUpdaters.m_Memory.m_pMemory[nIndex]);
}


// CRenderComponent::GetSceneObjectUpdaterHandle  (line 217, @0x0000000001ebadf0, libserver.so)  // inlines: operator[]
SceneObjectUpdaterHandle_t __fastcall CRenderComponent::GetSceneObjectUpdaterHandle(
        const CRenderComponent *const this,
        int nIndex)
{
  SceneObjectUpdaterHandle_t result; // rax

  result = 0;
  if ( this->m_sceneObjectUpdaters.m_Size > nIndex )
    return this->m_sceneObjectUpdaters.m_Memory.m_pMemory[nIndex];
  return result;
}


// CRenderComponent::Connect  (line 267, @0x0000000001ebae10, libserver.so)  // inlines: AddDynamicEntry, AddToTailDynamic, Count, DeallocateDynamic, Element, Get, GetPtr, IsPresent, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, MemAlloc_ReallocAlignedFunc, SchemaMetaGetPtr2, SchemaMetaIsPresent2, SchemaTypeOf<void>, SchemaTypeScope, SetCountDynamic, SetDynamic, V_memcpy, V_memset, V_strncpy<long unsigned int>, memcpy, memset, operator[]
// calls: CSchemaClassInfo::MetaIsPresent, CRenderGameSystem::BuildEntityRenderAttrGatherTable, memcpy, _V_strncpy, CSchemaClassInfo::MetaGetPtr, Plat_IsInDebugSessionRaw, GetNameOfModule, MemAlloc_AllocAlignedFunc
// callers: CBaseModelEntity::Connect
// strings: "MRenderAttrCount", "MRenderAttrOffset"
// globals: SchemaTypeOf<void>(void)::s_pTypeOf
bool __fastcall CRenderComponent::Connect(CRenderComponent *const this, CEntityInstance *pEntity)
{
  __int64 v2; // rax
  __int64 v3; // rax
  const CSchemaClassInfo *v4; // rbx
  const CSchemaClassBindingBase *v5; // r12
  CSchemaType *v6; // r13
  CSchemaClassInfo *m_pClassInfo_N; // rbx
  __int64 v8; // r15
  signed int v9; // edx
  int v10; // r10d
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r9
  void *v13; // r11
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  int *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  CSchemaType *v21; // r12
  int m_nImplLength; // eax
  signed int v23; // r15d
  int v24; // r10d
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r9
  const void *v27; // r11
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  char *v31; // rbx
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 m_pImplElements; // rcx
  int v40; // eax
  __int64 (__fastcall *v41)(ISchemaSystem *, const char *); // r13
  const char *NameOfModule; // rax
  __int64 v43; // rax
  __int64 (__fastcall *v44)(ISchemaSystem *, const char *); // r13
  const char *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  void *v49; // rax
  size_t v50; // rdx
  __int64 v51; // rax
  void *v52; // rax
  size_t v53; // rdx
  _QWORD *v54; // rax
  void *v55; // [rsp+0h] [rbp-70h]
  void *srcb; // [rsp+8h] [rbp-68h]
  void *src; // [rsp+8h] [rbp-68h]
  void *srca; // [rsp+8h] [rbp-68h]
  size_t sizeb; // [rsp+10h] [rbp-60h]
  int size; // [rsp+10h] [rbp-60h]
  int sizea; // [rsp+10h] [rbp-60h]
  int v62; // [rsp+18h] [rbp-58h]
  unsigned __int64 v63; // [rsp+18h] [rbp-58h]
  unsigned __int64 v64; // [rsp+18h] [rbp-58h]
  int v65; // [rsp+18h] [rbp-58h]
  unsigned __int64 v66; // [rsp+18h] [rbp-58h]
  _QWORD *v67; // [rsp+18h] [rbp-58h]
  unsigned __int64 v68; // [rsp+18h] [rbp-58h]
  int v69; // [rsp+18h] [rbp-58h]
  signed int nd; // [rsp+20h] [rbp-50h]
  int ne; // [rsp+20h] [rbp-50h]
  int nf; // [rsp+20h] [rbp-50h]
  int ng; // [rsp+20h] [rbp-50h]
  int nh; // [rsp+20h] [rbp-50h]
  size_t n; // [rsp+20h] [rbp-50h]
  size_t na; // [rsp+20h] [rbp-50h]
  size_t nb; // [rsp+20h] [rbp-50h]
  size_t nc; // [rsp+20h] [rbp-50h]
  intp offset; // [rsp+28h] [rbp-48h]
  int nTableOffset; // [rsp+38h] [rbp-38h] BYREF
  int nAttrCount[13]; // [rsp+3Ch] [rbp-34h] BYREF

  v2 = (*(pEntity->m_pEntity->m_pClass->_vptr_CEntityClass + 7))(pEntity->m_pEntity->m_pClass);
  v3 = (*(*v2 + 8LL))(v2);
  v4 = *(v3 + 40);
  v5 = v3;
  if ( CSchemaClassInfo::MetaIsPresent(
         v4,
         "MRenderAttrCount",
         SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
         0) )
  {
    CSchemaClassInfo::MetaGetPtr(v4, "MRenderAttrCount", SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL, 0);
    CSchemaClassInfo::MetaGetPtr(v4, "MRenderAttrOffset", SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL, 0);
  }
  else
  {
    nTableOffset = -1;
    nAttrCount[0] = 0;
    CRenderGameSystem::BuildEntityRenderAttrGatherTable(g_pRenderGameSystem, v5, &nTableOffset, nAttrCount);
    if ( nAttrCount[0] > 0 )
    {
      v6 = SchemaTypeOf<void>(void)::s_pTypeOf;
      m_pClassInfo_N = v5->m_pClassInfo_N;
      v8 = (nAttrCount[0] << 16) | 0xFFFF;
      offset = (nTableOffset << 16) | 0xFFFF;
      if ( SchemaTypeOf<void>(void)::s_pTypeOf == 0 )
      {
        v41 = *(*g_pSchemaSystem + 104LL);
        NameOfModule = GetNameOfModule();
        v43 = v41(g_pSchemaSystem, NameOfModule);
        v6 = (*(*v43 + 40LL))(v43, 1);
        SchemaTypeOf<void>(void)::s_pTypeOf = v6;
      }
      v9 = abs32(m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
      v10 = v9 + 1;
      v11 = 32LL * v9;
      v12 = v11 + 32;
      if ( m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength < 0 )
      {
        m_pImplElements = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
        if ( m_pImplElements != 0 )
        {
          if ( v11 == -32 )
          {
            nh = v9 + 1;
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pImplElements & 0xFFFFFFFFFFFFFFF8LL) - 8));
            v15 = 0;
            v10 = nh;
            v12 = 0;
          }
          else if ( (m_pImplElements & 7) != 0 )
          {
            ng = v9 + 1;
            v40 = Plat_IsInDebugSessionRaw();
            v10 = ng;
            v12 = v11 + 32;
            if ( v40 != 0 )
              __debugbreak();
            v15 = 0;
          }
          else
          {
            sizea = v9 + 1;
            v67 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
            nb = *((m_pImplElements & 0xFFFFFFFFFFFFFFF8LL) - 8);
            v51 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, nb);
            v15 = v67;
            v12 = v11 + 32;
            v10 = sizea;
            if ( v11 + 32 > v51 + nb - v67 )
            {
              srca = nb;
              v55 = v67;
              v68 = v51 + nb - v67;
              v52 = MemAlloc_AllocAlignedFunc(v11 + 32, 8u);
              v53 = v68;
              nc = v52;
              if ( v68 > v11 + 32 )
                v53 = v11 + 32;
              memcpy(v52, v55, v53);
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, srca);
              v12 = v11 + 32;
              v10 = sizea;
              v15 = nc;
            }
          }
        }
        else
        {
          v69 = v9 + 1;
          v15 = MemAlloc_AllocAlignedFunc(v11 + 32, 8u);
          v12 = v11 + 32;
          v10 = v69;
        }
        m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements = v15;
      }
      else
      {
        v13 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
        if ( v11 == -32 )
        {
          v15 = 0;
        }
        else
        {
          srcb = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
          v62 = v9 + 1;
          nd = v9;
          v14 = (**g_pMemAlloc)(g_pMemAlloc, v11 + 47);
          v9 = nd;
          v10 = v62;
          v12 = v11 + 32;
          v15 = ((v14 + 15) & 0xFFFFFFFFFFFFFFF8LL);
          v13 = srcb;
          *(v15 - 1) = v14;
        }
        m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements = v15;
        if ( v9 != 0 )
        {
          if ( v10 <= v9 )
            v9 = v10;
          v63 = v12;
          ne = v10;
          memcpy(v15, v13, 32LL * v9);
          v15 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
          v10 = ne;
          v12 = v63;
        }
      }
      if ( v11 < v12 )
      {
        v16 = &v15[v11 / 8];
        *v16 = 0;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        v15 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
      }
      v17 = &v15[v11 / 8];
      m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength = -v10;
      if ( v17[2] < 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v17);
      *v17 = 0;
      v17[2] = 0;
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 17);
      *v17 = v18;
      _V_strncpy(v18, "MRenderAttrCount", 17, v19, v20);
      *(v17 + 3) = v8;
      v17[2] = -17;
      *(v17 + 2) = v6;
      v21 = SchemaTypeOf<void>(void)::s_pTypeOf;
      if ( SchemaTypeOf<void>(void)::s_pTypeOf == 0 )
      {
        v44 = *(*g_pSchemaSystem + 104LL);
        v45 = GetNameOfModule();
        v46 = v44(g_pSchemaSystem, v45);
        v21 = (*(*v46 + 40LL))(v46, 1);
        SchemaTypeOf<void>(void)::s_pTypeOf = v21;
      }
      m_nImplLength = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength;
      v23 = abs32(m_nImplLength);
      v24 = v23 + 1;
      v25 = 32LL * v23;
      v26 = v25 + 32;
      if ( m_nImplLength < 0 )
      {
        v37 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
        if ( v37 != 0 )
        {
          if ( v25 == -32 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v37 & 0xFFFFFFFFFFFFFFF8LL) - 8));
            v29 = 0;
            v24 = v23 + 1;
            v26 = 0;
          }
          else if ( (v37 & 7) != 0 )
          {
            v38 = Plat_IsInDebugSessionRaw();
            v29 = 0;
            v24 = v23 + 1;
            v26 = v25 + 32;
            if ( v38 != 0 )
              __debugbreak();
          }
          else
          {
            v65 = v23 + 1;
            v47 = *((v37 & 0xFFFFFFFFFFFFFFF8LL) - 8);
            n = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
            v48 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v47);
            v29 = n;
            v26 = v25 + 32;
            v24 = v65;
            if ( v25 + 32 > v48 + v47 - n )
            {
              size = v65;
              v66 = v48 + v47 - n;
              src = n;
              v49 = MemAlloc_AllocAlignedFunc(v25 + 32, 8u);
              v50 = v66;
              na = v49;
              if ( v66 > v25 + 32 )
                v50 = v25 + 32;
              memcpy(v49, src, v50);
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v47);
              v24 = size;
              v26 = v25 + 32;
              v29 = na;
            }
          }
        }
        else
        {
          v54 = MemAlloc_AllocAlignedFunc(v25 + 32, 8u);
          v26 = v25 + 32;
          v29 = v54;
          v24 = v23 + 1;
        }
        m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements = v29;
      }
      else
      {
        v27 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
        if ( v25 == -32 )
        {
          v29 = 0;
        }
        else
        {
          sizeb = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
          v28 = (**g_pMemAlloc)(g_pMemAlloc, v25 + 47);
          v24 = v23 + 1;
          v26 = v25 + 32;
          v27 = sizeb;
          v29 = ((v28 + 15) & 0xFFFFFFFFFFFFFFF8LL);
          *(v29 - 1) = v28;
        }
        m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements = v29;
        if ( v23 != 0 )
        {
          if ( v24 <= v23 )
            v23 = v24;
          v64 = v26;
          nf = v24;
          memcpy(v29, v27, 32LL * v23);
          v29 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
          v24 = nf;
          v26 = v64;
        }
      }
      if ( v25 < v26 )
      {
        v30 = &v29[v25 / 8];
        *v30 = 0;
        v30[1] = 0;
        v30[2] = 0;
        v30[3] = 0;
        v29 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
      }
      m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength = -v24;
      v31 = &v29[v25 / 8];
      if ( SLODWORD(v29[v25 / 8 + 1]) < 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v31);
      *v31 = 0;
      v32 = g_pMemAlloc;
      *(v31 + 2) = 0;
      v33 = (**v32)(v32, 18);
      *v31 = v33;
      _V_strncpy(v33, "MRenderAttrOffset", 18, v34, v35);
      *(v31 + 2) = -18;
      *(v31 + 2) = v21;
      *(v31 + 3) = offset;
    }
  }
  return 1;
}


// CRenderComponent::ReadEnableRendering  (line 314, @0x0000000001ebb540, libserver.so)
void __fastcall CRenderComponent::ReadEnableRendering(
        CRenderComponent *const this,
        EnableRenderingInfo_t *pValue,
        int nCount,
        const IInterpolatedVar *pVar)
{
  ;
}


// CRenderComponent::WriteEnableRendering  (line 322, @0x0000000001ebb550, libserver.so)
void __fastcall CRenderComponent::WriteEnableRendering(
        CRenderComponent *const this,
        const EnableRenderingInfo_t *pValue,
        int nCount,
        const IInterpolatedVar *pVar,
        IVWriteOpType_t opType)
{
  ;
}


// CRenderComponent::MarkChanged  (line 331, @0x0000000001ebf010, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, MarkChanged, operator[]
// calls: CRenderGameSystem::MarkChanged, CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
void __fastcall CRenderComponent::MarkChanged(CRenderComponent *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  SceneObjectUpdaterHandle_t__ *v5; // r12
  char v6; // al
  __int64 v7; // rax
  unsigned int v8; // ecx
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v9; // rax
  int v10; // edx
  int v11; // esi
  SceneObjectUpdaterHandle_t__ **v12; // rax
  int v13; // eax
  int v14; // [rsp+0h] [rbp-40h]
  unsigned int v15; // [rsp+4h] [rbp-3Ch]
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v16; // [rsp+8h] [rbp-38h]

  if ( this->m_bEnableRendering )
  {
    m_Size = this->m_sceneObjectUpdaters.m_Size;
    if ( m_Size != 0 )
    {
      v3 = 0;
      v4 = 8LL * (m_Size - 1) + 8;
      do
      {
        while ( 1 )
        {
          v5 = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v3 / 8];
          v6 = *(v5 + 76);
          if ( (v6 & 2) != 0 && (v6 & 1) != 0 )
          {
            v7 = *(v5 + 87);
            v8 = g_pRenderGameSystem->m_sceneObjectUpdater.m_pWorkFrameCount[v7];
            if ( v8 != *(v5 + 20) )
              break;
          }
          v3 += 8LL;
          if ( v3 == v4 )
            goto LABEL_13;
        }
        v9 = &g_pRenderGameSystem->m_sceneObjectUpdater.m_activeItems[v7][v8 & 1];
        v10 = v9->m_Size;
        v11 = v9->m_Size;
        if ( v9->m_Size == v9->m_Memory.m_nAllocationCount )
        {
          v14 = v9->m_Size;
          v15 = v8;
          v16 = v9;
          CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
            &v9->m_Memory,
            1);
          v9 = v16;
          v10 = v14;
          v8 = v15;
          v11 = v16->m_Size;
        }
        v9->m_Size = v11 + 1;
        v12 = &v9->m_Memory.m_pMemory[v10];
        if ( v12 != 0 )
          *v12 = v5;
        v13 = *(v5 + 21);
        v3 += 8LL;
        *(v5 + 20) = v8;
        *(v5 + 21) = v10 & 0xFFFFFF | v13 & 0xFF000000;
      }
      while ( v3 != v4 );
    }
LABEL_13:
    if ( this->m_changedRenderComponentListIdx == -1 )
      this->m_changedRenderComponentListIdx = CRenderGameSystem::MarkChanged(g_pRenderGameSystem, this);
  }
}


// CRenderComponent::UpdateEntityRenderAttrs  (line 347, @0x0000000001ebbb00, libserver.so)  // inlines: AddToHead, AddToHead<CUtlAttributeList<int, 8>::OverflowChunk_t, CUtlAttributeList<int, 8>::OverflowChunk_t>, CUtlAttributeListChunk, Clear, CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, GatherEntityRenderAttrs, Get, GetEntityRenderAttrs, GetOwner, GetPtr, GetRenderAttrGatherTable, Head, OverflowChunk_t, ReplicateIX4<(ESIMDLevel)20u>, SchemaMetaGetPtr2, SetBoolValue, SetFloatValue, SetIntValue, SetValue, SetVector4DValue, SetVectorValue, StoreAlignedIntSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, Vector4D, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, _mm_store_ps, begin, memset, operator CEntityInstance*, operator++
// calls: CSchemaClassInfo::MetaGetPtr, CUtlAttributeList<Vector4D, 4, Vector4D>::SetValue, operator new, GetNewAttributeObjectFromPool
// strings: "MRenderAttrCount", "MRenderAttrOffset"
// globals: jpt_1EBBC21
void __fastcall CRenderComponent::UpdateEntityRenderAttrs(CRenderComponent *const this)
{
  const CSchemaClassInfo *v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rbx
  __m128i v4; // xmm1
  CEntityIdentity *m_pEntity; // r12
  CRenderAttributesDoubleBuffered *m_pRenderAttrs; // r13
  RenderAttrGatherInfo_t *v7; // rcx
  RenderAttrGatherInfo_t *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int nNameHash; // r14d
  void (__fastcall *pUpdaterFunc)(_QWORD, _QWORD, _QWORD); // rax
  int dataType; // eax
  float *v14; // rdx
  __m128i si128; // xmm2
  float v16; // esi
  int v17; // eax
  int v18; // edx
  CUtlAttributeList<int,8,int>::OverflowChunk_t *m_pHead; // rdi
  const __m128i *v20; // rdx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r9d
  const __m128i *v27; // rdx
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rax
  const __m128i *v32; // rdx
  __int64 v33; // rdi
  float v34; // xmm2_4
  double v35; // xmm0_8
  __m128i v36; // xmm2
  int v37; // eax
  int v38; // edx
  CUtlAttributeList<int,8,int>::OverflowChunk_t *v39; // rdi
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  const __m128i *p_m_intAttrs; // rdx
  int v44; // eax
  int v45; // r9d
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  fltx4_0 *v49; // rax
  fltx4_0 *v50; // rdi
  int v51; // edx
  int v52; // edx
  fltx4_0 *v53; // rdi
  int v54; // r9d
  int v55; // r9d
  CRenderAttributesDoubleBuffered *NewAttributeObjectFromPool; // rax
  float v57; // [rsp+Ch] [rbp-94h]
  float v58; // [rsp+Ch] [rbp-94h]
  CEntityInstance *pOwner; // [rsp+28h] [rbp-78h]
  __int64 v61; // [rsp+30h] [rbp-70h]
  int v62; // [rsp+4Ch] [rbp-54h] BYREF
  _BYTE v63[16]; // [rsp+50h] [rbp-50h] BYREF
  float v64; // [rsp+60h] [rbp-40h] BYREF
  vec_t z; // [rsp+64h] [rbp-3Ch]
  vec_t x; // [rsp+68h] [rbp-38h]
  int v67; // [rsp+6Ch] [rbp-34h]
  Vector4D v68; // 0:kr00_16.16
  Vector4D v69; // 0:xmm0_8.8,8:xmm1_8.8

  v1 = *(this->m_pOwner.m_pObj->Schema_DynamicBinding() + 40);
  v2 = CSchemaClassInfo::MetaGetPtr(v1, "MRenderAttrCount", SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL, 0) >> 16;
  if ( v2 == 0 )
    goto LABEL_2;
  v3 = CSchemaClassInfo::MetaGetPtr(v1, "MRenderAttrOffset", SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL, 0) >> 16;
  m_pEntity = this->m_pOwner.m_pObj->m_pEntity;
  pOwner = this->m_pOwner.m_pObj;
  m_pRenderAttrs = m_pEntity->m_pRenderAttrs;
  if ( m_pRenderAttrs == 0 )
  {
    NewAttributeObjectFromPool = GetNewAttributeObjectFromPool();
    m_pEntity->m_pRenderAttrs = NewAttributeObjectFromPool;
    m_pRenderAttrs = NewAttributeObjectFromPool;
  }
  v7 = &CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Memory.m_pMemory[v3];
  if ( v2 <= 0 )
    goto LABEL_2;
  v8 = &CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Memory.m_pMemory[v3];
  v9 = 0;
  v10 = (v2 - 1) + 1LL;
  nNameHash = v7->nNameHash;
  v61 = 16 * v10;
  pUpdaterFunc = v7->pUpdaterFunc;
  if ( pUpdaterFunc == 0 )
    goto LABEL_12;
  while ( 2 )
  {
    pUpdaterFunc(pOwner, v63, &v62);
    dataType = v62;
    v14 = v63;
LABEL_8:
    switch ( dataType )
    {
      case 0:
        si128 = _mm_load_si128(&m_pRenderAttrs->m_attrs.m_intAttrs);
        v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(nNameHash), 0);
        LODWORD(v16) = *v14;
        v17 = _mm_movemask_ps(_mm_cmpeq_epi32(si128, v4));
        if ( v17 != 0 )
        {
          v18 = 0;
        }
        else
        {
          v18 = 4;
          v17 = _mm_movemask_ps(_mm_cmpeq_epi32(
                                  _mm_load_si128(&m_pRenderAttrs->m_attrs.m_intAttrs.m_fixedStorage.m_nFixedKeys[1]),
                                  v4));
          if ( v17 == 0 )
            goto LABEL_15;
        }
        v51 = g_nSIMDBitMaskToIndex[v17] + v18;
        v24 = v51;
        if ( v51 != -1 )
          goto LABEL_66;
LABEL_15:
        m_pHead = m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead;
        if ( m_pHead != 0 )
        {
          v20 = m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead;
          while ( 1 )
          {
            v22 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v20 + 1), v4));
            if ( v22 != 0 )
              break;
            v21 = 4;
            v22 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v20 + 2), v4));
            if ( v22 != 0 )
            {
LABEL_21:
              v23 = g_nSIMDBitMaskToIndex[v22] + v21;
              v24 = v23;
              if ( v23 != -1 )
                goto LABEL_47;
              v20 = v20->m128i_i64[0];
              if ( v20 == 0 )
                goto LABEL_23;
            }
            else
            {
              v20 = v20->m128i_i64[0];
              if ( v20 == 0 )
                goto LABEL_23;
            }
          }
          v21 = 0;
          goto LABEL_21;
        }
LABEL_23:
        v4.m128i_i64[0] = 0;
        v25 = _mm_movemask_ps(_mm_cmpeq_epi32(si128, 0LL));
        if ( v25 != 0 )
        {
          v26 = 0;
        }
        else
        {
          v26 = 4;
          v25 = _mm_movemask_ps(_mm_cmpeq_epi32(
                                  _mm_load_si128(&m_pRenderAttrs->m_attrs.m_intAttrs.m_fixedStorage.m_nFixedKeys[1]),
                                  0LL));
          if ( v25 == 0 )
          {
LABEL_25:
            if ( m_pHead == 0 )
            {
LABEL_70:
              v58 = v16;
              v49 = operator new(0x50u);
              v16 = v58;
              v32 = &v49[1];
              v49[1].m128_u64[0] = 0;
              v49[1].m128_u64[1] = 0;
              v49[2].m128_u64[0] = 0;
              v49[2].m128_u64[1] = 0;
              if ( &v49[1] != &v49[3] )
              {
                v53 = v49 + 1;
                do
                  *v53++ = Four_Zeros;
                while ( &v49[3] != v53 );
              }
              goto LABEL_63;
            }
            v27 = m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead;
            v4.m128i_i64[0] = 0;
            while ( 1 )
            {
              v29 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v27 + 1), 0LL));
              if ( v29 != 0 )
                break;
              v28 = 4;
              v29 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v27 + 2), 0LL));
              if ( v29 != 0 )
                goto LABEL_31;
LABEL_28:
              v27 = v27->m128i_i64[0];
              if ( v27 == 0 )
                goto LABEL_70;
            }
            v28 = 0;
LABEL_31:
            v30 = g_nSIMDBitMaskToIndex[v29] + v28;
            v31 = v30;
            if ( v30 != -1 )
              goto LABEL_32;
            goto LABEL_28;
          }
        }
        v55 = g_nSIMDBitMaskToIndex[v25] + v26;
        v31 = v55;
        if ( v55 != -1 )
          goto LABEL_76;
        goto LABEL_25;
      case 1:
        v36 = _mm_load_si128(&m_pRenderAttrs->m_attrs.m_intAttrs);
        v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(nNameHash), 0);
        v16 = *v14;
        v37 = _mm_movemask_ps(_mm_cmpeq_epi32(v36, v4));
        if ( v37 != 0 )
        {
          v38 = 0;
        }
        else
        {
          v38 = 4;
          v37 = _mm_movemask_ps(_mm_cmpeq_epi32(
                                  _mm_load_si128(&m_pRenderAttrs->m_attrs.m_intAttrs.m_fixedStorage.m_nFixedKeys[1]),
                                  v4));
          if ( v37 == 0 )
            goto LABEL_40;
        }
        v52 = g_nSIMDBitMaskToIndex[v37] + v38;
        v24 = v52;
        if ( v52 != -1 )
        {
LABEL_66:
          p_m_intAttrs = &m_pRenderAttrs->m_attrs.m_intAttrs;
          goto LABEL_48;
        }
LABEL_40:
        v39 = m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead;
        if ( v39 == 0 )
        {
LABEL_50:
          v4.m128i_i64[0] = 0;
          v44 = _mm_movemask_ps(_mm_cmpeq_epi32(v36, 0LL));
          if ( v44 != 0 )
          {
            v45 = 0;
          }
          else
          {
            v45 = 4;
            v44 = _mm_movemask_ps(_mm_cmpeq_epi32(
                                    _mm_load_si128(&m_pRenderAttrs->m_attrs.m_intAttrs.m_fixedStorage.m_nFixedKeys[1]),
                                    0LL));
            if ( v44 == 0 )
              goto LABEL_52;
          }
          v54 = g_nSIMDBitMaskToIndex[v44] + v45;
          v31 = v54;
          if ( v54 != -1 )
          {
LABEL_76:
            v32 = &m_pRenderAttrs->m_attrs.m_intAttrs;
LABEL_33:
            v33 = v31;
            goto LABEL_34;
          }
LABEL_52:
          if ( v39 != 0 )
          {
            v27 = m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead;
            v4.m128i_i64[0] = 0;
            while ( 1 )
            {
              v47 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v27 + 1), 0LL));
              if ( v47 != 0 )
              {
                v46 = 0;
LABEL_58:
                v48 = g_nSIMDBitMaskToIndex[v47] + v46;
                v31 = v48;
                if ( v48 != -1 )
                {
LABEL_32:
                  v32 = v27 + 1;
                  goto LABEL_33;
                }
                v27 = v27->m128i_i64[0];
                if ( v27 == 0 )
                  break;
              }
              else
              {
                v46 = 4;
                v47 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v27 + 2), 0LL));
                if ( v47 != 0 )
                  goto LABEL_58;
                v27 = v27->m128i_i64[0];
                if ( v27 == 0 )
                  break;
              }
            }
          }
          v57 = v16;
          v49 = operator new(0x50u);
          v16 = v57;
          v32 = &v49[1];
          v49[1].m128_u64[0] = 0;
          v49[1].m128_u64[1] = 0;
          v49[2].m128_u64[0] = 0;
          v49[2].m128_u64[1] = 0;
          if ( &v49[1] != &v49[3] )
          {
            v50 = v49 + 1;
            do
              *v50++ = Four_Zeros;
            while ( &v49[3] != v50 );
          }
LABEL_63:
          v49->m128_u64[0] = m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead;
          v33 = 0;
          m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead = v49;
          v31 = 0;
LABEL_34:
          v32->m128i_i32[v33] = nNameHash;
          *&v32[2].m128i_i32[v31] = v16;
          goto LABEL_10;
        }
        v20 = m_pRenderAttrs->m_attrs.m_intAttrs.m_pOverflow.m_pHead;
        while ( 1 )
        {
          v41 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v20 + 1), v4));
          if ( v41 != 0 )
            break;
          v40 = 4;
          v41 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v20 + 2), v4));
          if ( v41 != 0 )
            goto LABEL_46;
LABEL_43:
          v20 = v20->m128i_i64[0];
          if ( v20 == 0 )
            goto LABEL_50;
        }
        v40 = 0;
LABEL_46:
        v42 = g_nSIMDBitMaskToIndex[v41] + v40;
        v24 = v42;
        if ( v42 == -1 )
          goto LABEL_43;
LABEL_47:
        p_m_intAttrs = v20 + 1;
LABEL_48:
        *&p_m_intAttrs[2].m128i_i32[v24] = v16;
LABEL_10:
        v9 += 16;
        ++v8;
        if ( v9 != v61 )
        {
          pUpdaterFunc = v8->pUpdaterFunc;
          nNameHash = v8->nNameHash;
          if ( pUpdaterFunc != 0 )
            continue;
LABEL_12:
          dataType = v8->dataType;
          v14 = (pOwner + v8->nByteOffset);
          v62 = dataType;
          goto LABEL_8;
        }
LABEL_2:
        this->m_changedRenderComponentListIdx = -1;
        return;
      case 2:
        *&v35 = *v14;
        v64 = *&v35;
        z = *&v35;
        x = *&v35;
        goto LABEL_36;
      case 3:
        v35 = *v14;
        v64 = *&v35;
        z = *&v35;
        x = *&v35;
        goto LABEL_36;
      case 4:
        *&v69.z = *(v14 + 1);
        *&v69.x = *(v14 + 2);
        v64 = *v14;
        z = v69.z;
        x = v69.x;
        v67 = 0;
        CUtlAttributeList<Vector4D,4,Vector4D>::SetValue(&m_pRenderAttrs->m_attrs.m_vec4Attrs, nNameHash, v69, &v64);
        goto LABEL_10;
      case 5:
        v34 = v14[1];
        v4.m128i_i64[0] = *(v14 + 2);
        *&v35 = *(v14 + 3);
        v64 = *v14;
        z = v34;
        x = *v4.m128i_i32;
LABEL_36:
        v67 = LODWORD(v35);
        *&v68.x = v35;
        LODWORD(v68.z) = v4.m128i_i32[0];
        LODWORD(v68.w) = v4.m128i_i32[1];
        CUtlAttributeList<Vector4D,4,Vector4D>::SetValue(&m_pRenderAttrs->m_attrs.m_vec4Attrs, nNameHash, v68, &v64);
        goto LABEL_10;
      default:
        goto LABEL_10;
    }
  }
}


// CRenderComponent::HasSchemaRenderAttributes  (line 364, @0x0000000001ebb560, libserver.so)
// callers: CRenderGameSystem::MarkChanged
bool __fastcall CRenderComponent::HasSchemaRenderAttributes(CRenderComponent *const this)
{
  return this->m_bHasSchemaRenderAttributes;
}


// CRenderComponent::RenderWithViewModels  (line 369, @0x0000000001ebb570, libserver.so)
// calls: CRenderGameSystem::RenderWithViewModels
void __fastcall CRenderComponent::RenderWithViewModels(CRenderComponent *const this, bool bIsViewModel)
{
  int m_Size; // eax
  bool m_bIsRenderingWithViewModels; // dl
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  SceneObjectUpdaterHandle_t v7; // rsi

  m_Size = this->m_sceneObjectUpdaters.m_Size;
  this->m_bIsRenderingWithViewModels = bIsViewModel;
  if ( m_Size != 0 )
  {
    m_bIsRenderingWithViewModels = bIsViewModel;
    v5 = 0;
    v6 = 8LL * (m_Size - 1) + 8;
    while ( 1 )
    {
      v7 = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v5 / 8];
      v5 += 8LL;
      CRenderGameSystem::RenderWithViewModels(g_pRenderGameSystem, v7, m_bIsRenderingWithViewModels);
      if ( v5 == v6 )
        break;
      m_bIsRenderingWithViewModels = this->m_bIsRenderingWithViewModels;
    }
  }
}


// CRenderComponent::EnableSplitscreenRendering  (line 380, @0x0000000001ebb5e0, libserver.so)
void __fastcall CRenderComponent::EnableSplitscreenRendering(CRenderComponent *const this, uint32 nSplitScreenFlags)
{
  int m_Size; // eax
  __int64 m_nSplitscreenFlags; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  SceneObjectUpdaterHandle_t__ *v7; // rsi

  if ( this->m_nSplitscreenFlags != nSplitScreenFlags )
  {
    m_Size = this->m_sceneObjectUpdaters.m_Size;
    this->m_nSplitscreenFlags = nSplitScreenFlags;
    if ( m_Size != 0 )
    {
      m_nSplitscreenFlags = nSplitScreenFlags;
      v5 = 0;
      v6 = 8LL * (m_Size - 1) + 8;
      while ( 1 )
      {
        v7 = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v5 / 8];
        v5 += 8LL;
        (*(g_pRenderGameSystem->_vptr_IGameSystem + 40))(g_pRenderGameSystem, v7, m_nSplitscreenFlags);
        if ( v5 == v6 )
          break;
        m_nSplitscreenFlags = this->m_nSplitscreenFlags;
      }
    }
  }
}


// CRenderComponent::LatchRenderingEnabled  (line 400, @0x0000000001ebb650, libserver.so)
void __fastcall CRenderComponent::LatchRenderingEnabled(CRenderComponent *const this)
{
  ;
}


// CRenderComponent::IsRenderingWithViewModels  (line 409, @0x0000000001ebb660, libserver.so)
bool __fastcall CRenderComponent::IsRenderingWithViewModels(CRenderComponent *const this)
{
  return this->m_bIsRenderingWithViewModels;
}


// CRenderComponent::SetColorTint  (line 414, @0x0000000001ebb670, libserver.so)
// calls: CRenderGameSystem::SetSceneObjectColorTint
void __fastcall CRenderComponent::SetColorTint(CRenderComponent *const this, const Vector4D *const vTint)
{
  int m_Size; // eax
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  SceneObjectUpdaterHandle_t v7; // rsi

  m_Size = this->m_sceneObjectUpdaters.m_Size;
  if ( m_Size != 0 )
  {
    v5 = 8LL * (m_Size - 1) + 8;
    v6 = 0;
    do
    {
      v7 = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v6 / 8];
      v6 += 8LL;
      CRenderGameSystem::SetSceneObjectColorTint(g_pRenderGameSystem, v7, vTint);
    }
    while ( v6 != v5 );
  }
}


// CRenderComponent::SetLightGroup  (line 423, @0x0000000001ebb6e0, libserver.so)
// calls: CRenderGameSystem::SetSceneObjectLightGroup
void __fastcall CRenderComponent::SetLightGroup(CRenderComponent *const this, CUtlStringToken lightGroup)
{
  int m_Size; // eax
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  SceneObjectUpdaterHandle_t v7; // rsi

  m_Size = this->m_sceneObjectUpdaters.m_Size;
  if ( m_Size != 0 )
  {
    v5 = 8LL * (m_Size - 1) + 8;
    v6 = 0;
    do
    {
      v7 = this->m_sceneObjectUpdaters.m_Memory.m_pMemory[v6 / 8];
      v6 += 8LL;
      CRenderGameSystem::SetSceneObjectLightGroup(g_pRenderGameSystem, v7, lightGroup);
    }
    while ( v6 != v5 );
  }
}


