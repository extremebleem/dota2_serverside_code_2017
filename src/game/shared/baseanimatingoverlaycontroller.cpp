// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimatingoverlaycontroller.cpp:24
class CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo  (line 24, @0x000000000206b1d0, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay
// strings: "CBodyComponentBaseAnimatingOverlay", "CBodyComponentBaseAnimatingOverlayReferenced", "CBodyComponentBaseAnimatingOverlayReferencedPtr"
// globals: CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo, `guard variable for'CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay, CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay
EntComponentInfo_t *__cdecl CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_pName != 0 )
    return &CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo;
  if ( `guard variable for'CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay == 0
    && __cxa_guard_acquire(&`guard variable for'CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay) != 0 )
  {
    CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay.Data1 = -1703207362;
    v1 = HashString("CBodyComponentBaseAnimatingOverlay");
    CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CBodyComponentBaseAnimatingOverlay", 0x3501A674u);
    CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay);
  }
  CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_nFlags = 2;
  CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_id = CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimatingOverlay;
  CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_pName = "BodyComponentBaseAnimatingOverlay";
  CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_pCPPClassname = "CBodyComponentBaseAnimatingOverlay";
  CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CBodyComponentBaseAnimati"
                                                                                               "ngOverlayReferenced";
  CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CBodyComponentBaseAnimatingOverlayReferencedPtr";
  return &CBodyComponentBaseAnimatingOverlay::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay  (line 24, @0x000000000206b2f0, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo, CEntityComponentHelperInit_CBodyComponentSkeletonInstance, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay::CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay, _GLOBAL__sub_I__unity_source_files_02.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper, CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::s_bIsInitialized, CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FEE5D0;
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper.m_pInfo = CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo();
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::s_bIsInitialized = 1;
    EntComponentInfo = CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CBodyComponentSkeletonInstance();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper.m_nPriority = 17407;
  }
  return &CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay(void)::componentHelper;
}


// CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay::CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay  (line 24, @0x000000000206b3d0, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay::CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay(
        CEntityComponentHelperFactory_CBodyComponentBaseAnimatingOverlay *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CBaseAnimatingOverlayController::GetDataDescMap  (line 36, @0x0000000002058a90, libserver.so)
// globals: CBaseAnimatingOverlayController::m_DataMap
datamap_t *__fastcall CBaseAnimatingOverlayController::GetDataDescMap(CBaseAnimatingOverlayController *const this)
{
  return &CBaseAnimatingOverlayController::m_DataMap;
}


// CBaseAnimatingOverlayController::AddDatadescMetadataKeys  (line 36, @0x000000000206b3f0, libserver.so)
void __fastcall CBaseAnimatingOverlayController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBaseAnimatingOverlayController::GetBaseMap  (line 36, @0x000000000206b400, libserver.so)
// globals: CBaseAnimatingController::m_DataMap
datamap_t *__cdecl CBaseAnimatingOverlayController::GetBaseMap()
{
  return &CBaseAnimatingController::m_DataMap;
}


// DataMapInit<CBaseAnimatingOverlayController>  (line 36, @0x000000000206b410, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBaseAnimatingOverlayController"
// globals: `guard variable for'DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder, CBaseAnimatingController::m_DataMap, DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::dataDesc, CBaseAnimatingOverlayController::m_DataMap, DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder.m_pszBase = "CBaseAnimatingOverlayController";
    DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder.m_nLenBase = 31;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::nameHolder,
      &_dso_handle);
  }
  CBaseAnimatingOverlayController::m_DataMap.dataNumFields = 1;
  CBaseAnimatingOverlayController::m_DataMap.baseMap = &CBaseAnimatingController::m_DataMap;
  CBaseAnimatingOverlayController::m_DataMap.dataDesc = DataMapInit<CBaseAnimatingOverlayController>(CBaseAnimatingOverlayController *)::dataDesc;
  return &CBaseAnimatingOverlayController::m_DataMap;
}


// CBodyComponentBaseAnimatingOverlay::GetDataDescMap  (line 41, @0x0000000002058aa0, libserver.so)
// globals: CBodyComponentBaseAnimatingOverlay::m_DataMap
datamap_t *__fastcall CBodyComponentBaseAnimatingOverlay::GetDataDescMap(
        CBodyComponentBaseAnimatingOverlay *const this)
{
  return &CBodyComponentBaseAnimatingOverlay::m_DataMap;
}


// CBodyComponentBaseAnimatingOverlay::AddDatadescMetadataKeys  (line 41, @0x000000000206b4d0, libserver.so)
void __fastcall CBodyComponentBaseAnimatingOverlay::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBodyComponentBaseAnimatingOverlay::GetBaseMap  (line 41, @0x000000000206b4e0, libserver.so)
// globals: CBodyComponentSkeletonInstance::m_DataMap
datamap_t *__cdecl CBodyComponentBaseAnimatingOverlay::GetBaseMap()
{
  return &CBodyComponentSkeletonInstance::m_DataMap;
}


// DataMapInit<CBodyComponentBaseAnimatingOverlay>  (line 41, @0x000000000206b4f0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBodyComponentBaseAnimatingOverlay"
// globals: `guard variable for'DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder, CBodyComponentSkeletonInstance::m_DataMap, CBodyComponentBaseAnimatingOverlay::m_DataMap, DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder) != 0 )
  {
    DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder.m_pszBase = "CBodyComponentBaseAnimatingOverlay";
    DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder.m_nLenBase = 34;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::nameHolder,
      &_dso_handle);
  }
  CBodyComponentBaseAnimatingOverlay::m_DataMap.dataNumFields = 1;
  CBodyComponentBaseAnimatingOverlay::m_DataMap.baseMap = &CBodyComponentSkeletonInstance::m_DataMap;
  CBodyComponentBaseAnimatingOverlay::m_DataMap.dataDesc = &DataMapInit<CBodyComponentBaseAnimatingOverlay>(CBodyComponentBaseAnimatingOverlay *)::dataDesc[1];
  return &CBodyComponentBaseAnimatingOverlay::m_DataMap;
}


// CBaseAnimatingOverlayController::CBaseAnimatingOverlayController  (line 47, @0x000000000206b5b0, libserver.so)  // inlines: CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseAnimatingController::CBaseAnimatingController
// callers: CSchemaClassBinding<CBaseAnimatingOverlayController>::Allocate, CSchemaClassBinding<CBaseAnimatingOverlayController>::ConstructInPlace, CSchemaClassBinding<CBaseAnimatingOverlayController>::AllocateAndCopyConstruct, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate
void __fastcall CBaseAnimatingOverlayController::CBaseAnimatingOverlayController(
        CBaseAnimatingOverlayController *const this)
{
  CEntityInstance *v2; // rax

  CBaseAnimatingController::CBaseAnimatingController(this);
  this->_vptr_CSkeletonAnimationController = off_3FEE610;
  this->_vptr_IAnimationStateGraphOwner = &off_3FEE718;
  this->m_AnimOverlay.m_Vector.m_Size = 0;
  this->m_AnimOverlay.m_Vector.m_Memory.m_pMemory = 0;
  this->m_AnimOverlay.m_Vector.m_Memory.m_nAllocationCount = 0;
  v2 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_AnimOverlay.m_PathToVector.m_nCount = 0;
  this->m_AnimOverlay.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
  this->m_AnimOverlay.m_pArraySizeChangedDelegate = 0;
  this->m_AnimOverlay.m_pOwnerEntity.m_pObj = v2;
  this->m_AnimOverlay.m_bIsNetworkVarExcluded = 0;
  this->m_AnimOverlay.m_bResolved = 0;
  this->m_bOrderIsExternallyControlled = 0;
  this->m_bDisableStudioFrameAdvanceHack = 0;
}


// CBaseAnimatingOverlayController::Connect  (line 58, @0x0000000002059960, libserver.so)  // inlines: Connect
// calls: CSequenceTransitioner2::Init
void __fastcall CBaseAnimatingOverlayController::Connect(
        CBaseAnimatingOverlayController *const this,
        CEntityInstance *pEntity)
{
  CSequenceTransitioner2::Init(&this->m_SequenceTransitioner, this);
}


// CBaseAnimatingOverlayController::Spawn  (line 63, @0x0000000002067630, libserver.so)
// calls: CBaseAnimatingController::Spawn
void __fastcall CBaseAnimatingOverlayController::Spawn(
        CBaseAnimatingOverlayController *const this,
        CEntityInstance *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  CBaseAnimatingController::Spawn(this, pEntity, pKeyValues);
}


// CBaseAnimatingOverlayController::Activate  (line 68, @0x0000000002059650, libserver.so)
// calls: CBaseAnimatingController::Activate
void __fastcall CBaseAnimatingOverlayController::Activate(
        CBaseAnimatingOverlayController *const this,
        CEntityInstance *pEntity,
        ActivateType_t activateType)
{
  CBaseAnimatingController::Activate(this, pEntity, activateType);
}


// CBaseAnimatingOverlayController::UpdateOnRemove  (line 73, @0x0000000002084fa0, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_RemoveAll, Path_SetCount, Purge, Resolve, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorBase<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >::RemoveAll, CUtlMemory<CAnimationLayer, int>::Purge, CBaseAnimatingController::UpdateOnRemove, EntityInstanceSetNetworkStateChanged, CUtlVectorEmbeddedNetworkVar<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CBaseAnimatingOverlayController::UpdateOnRemove(
        CBaseAnimatingOverlayController *const this,
        CEntityInstance *pEntity)
{
  CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *p_m_AnimOverlay; // r12
  CEntityInstance *m_pObj; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v7; // rdx
  size_t v8; // rdx
  void **v9; // rsi
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  void (__fastcall *v17)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *, bool *); // [rsp+8h] [rbp-78h]
  LeafCodeInfo_t v18; // [rsp+10h] [rbp-70h] BYREF
  void *src[2]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v20; // [rsp+40h] [rbp-40h]
  char v21; // [rsp+42h] [rbp-3Eh]

  p_m_AnimOverlay = &this->m_AnimOverlay;
  if ( this->m_AnimOverlay.m_Vector.m_Size > 0 )
  {
    if ( !this->m_AnimOverlay.m_bResolved )
    {
      m_pObj = this->m_AnimOverlay.m_pOwnerEntity.m_pObj;
      this->m_AnimOverlay.m_bResolved = 1;
      if ( m_pObj != 0 )
      {
        v17 = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
        v17(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          m_pObj,
          p_m_AnimOverlay,
          &this->m_AnimOverlay.m_bIsNetworkVarExcluded);
        if ( &this->m_AnimOverlay.m_PathToVector != src )
        {
          v7 = v20;
          this->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v7 > 6 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_26;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_26:
              v18.m_szFile = "../../public/tier2/fieldpath.h";
              v18.m_szFunction = "Path_SetCount";
              v18.m_nLine = 442;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v18,
                "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                6);
            }
          }
          this->m_AnimOverlay.m_PathToVector.m_nCount = v7;
          if ( v7 > 0 )
          {
            v8 = 2 * v7;
            v9 = src;
            if ( v21 != 0 )
              v9 = src[0];
            memcpy(&this->m_AnimOverlay.m_PathToVector, v9, v8);
          }
        }
      }
      else
      {
        if ( this->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
          CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1>::Resolve(this);
        this->m_AnimOverlay.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !this->m_AnimOverlay.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(this->m_AnimOverlay.m_pOwnerEntity.m_pObj);
  }
  CUtlVectorBase<CAnimationLayer,CNetworkUtlVector_MemoryType<CAnimationLayer,-1>>::RemoveAll(&p_m_AnimOverlay->m_Vector);
  if ( (this->m_AnimOverlay.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CAnimationLayer,int>::Purge(&this->m_AnimOverlay.m_Vector.m_Memory);
  m_pArraySizeChangedDelegate = this->m_AnimOverlay.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v12 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v12 - 1);
    pfn(v12);
  }
  CBaseAnimatingController::UpdateOnRemove(this, pEntity);
}


// CBaseAnimatingOverlayController::AddLayerInterpolator  (line 120, @0x000000000206b650, libserver.so)
void __fastcall CBaseAnimatingOverlayController::AddLayerInterpolator(
        CBaseAnimatingOverlayController *const this,
        int nLayerIndex)
{
  ;
}


// CBaseAnimatingOverlayController::RemoveLayerInterpolator  (line 188, @0x000000000206b660, libserver.so)
void __fastcall CBaseAnimatingOverlayController::RemoveLayerInterpolator(
        CBaseAnimatingOverlayController *const this,
        int nLayerIndex)
{
  ;
}


// CBaseAnimatingOverlayController::SetOrderIsExternallyControlled  (line 195, @0x000000000206b670, libserver.so)
// callers: CBasePlayerAnimState::Init, CDOTAAnimState::Init
void __fastcall CBaseAnimatingOverlayController::SetOrderIsExternallyControlled(
        CBaseAnimatingOverlayController *const this,
        bool bEnable)
{
  this->m_bOrderIsExternallyControlled = bEnable;
}


// CBaseAnimatingOverlayController::SetDisableStudioFrameAdvanceHack  (line 201, @0x000000000206b680, libserver.so)
// callers: CDOTAAnimState::Init
void __fastcall CBaseAnimatingOverlayController::SetDisableStudioFrameAdvanceHack(
        CBaseAnimatingOverlayController *const this,
        bool bVal)
{
  this->m_bDisableStudioFrameAdvanceHack = bVal;
}


// CBaseAnimatingOverlayController::GetDisableStudioFrameAdvanceHack  (line 206, @0x000000000206b690, libserver.so)
bool __fastcall CBaseAnimatingOverlayController::GetDisableStudioFrameAdvanceHack(
        CBaseAnimatingOverlayController *const this)
{
  return this->m_bDisableStudioFrameAdvanceHack;
}


// CBaseAnimatingOverlayController::OnOverlaysChanged  (line 211, @0x000000000206b6a0, libserver.so)
void __fastcall CBaseAnimatingOverlayController::OnOverlaysChanged(CBaseAnimatingOverlayController *const this)
{
  ;
}


// CBaseAnimatingOverlayController::GetSequenceBounds  (line 252, @0x000000000205bb20, libserver.so)  // inlines: Element, GetModel, VectorMax, VectorMin, fpmax, fpmin, operator CWeakHandle<InfoForResourceTypeCModel>, operator->, operator=, operator[]
// calls: CBaseAnimatingController::GetSequenceBounds, CModel::GetSequenceBounds
void __fastcall CBaseAnimatingOverlayController::GetSequenceBounds(
        const CBaseAnimatingOverlayController *const this,
        Vector *pMins,
        Vector *pMaxs)
{
  int v6; // r12d
  __int64 v7; // rbx
  CAnimationLayer *v8; // rax
  HSequence v9; // esi
  const CModel *m_pData; // rdi
  const ResourceBindingBase_t *m_pBinding; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm2_4
  Vector vMin; // [rsp+10h] [rbp-50h] BYREF
  Vector vMax; // [rsp+20h] [rbp-40h] BYREF

  v6 = 0;
  v7 = 0;
  CBaseAnimatingController::GetSequenceBounds(this, pMins, pMaxs);
  if ( this->m_AnimOverlay.m_Vector.m_Size > 0 )
  {
    do
    {
      v8 = &this->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[v7];
      if ( (v8->m_nFlags & 1) != 0 && v8->m_op.m_flWeight.m_Value.m_Value > 0.0 )
      {
        v9.m_Data = v8->m_op.m_hSequence.m_Value.m_Data;
        m_pData = 0;
        m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
        if ( m_pBinding != 0 )
          m_pData = m_pBinding->m_pData;
        CModel::GetSequenceBounds(m_pData, v9, &vMin, &vMax);
        v12 = fminf(pMins->y, vMin.y);
        v13 = fminf(pMins->x, vMin.x);
        pMins->z = fminf(pMins->z, vMin.z);
        pMins->y = v12;
        pMins->x = v13;
        v14 = fmaxf(pMaxs->y, vMax.y);
        v15 = fmaxf(pMaxs->x, vMax.x);
        pMaxs->z = fmaxf(pMaxs->z, vMax.z);
        pMaxs->y = v14;
        pMaxs->x = v15;
      }
      ++v6;
      ++v7;
    }
    while ( v6 < this->m_AnimOverlay.m_Vector.m_Size );
  }
}


// CBaseAnimatingOverlayController::VerifyOrder  (line 274, @0x000000000206b6b0, libserver.so)
void __fastcall CBaseAnimatingOverlayController::VerifyOrder(CBaseAnimatingOverlayController *const this)
{
  ;
}


// CBaseAnimatingOverlayController::OnNewModel  (line 336, @0x0000000002084a40, libserver.so)
// calls: CBaseAnimatingController::OnNewModel
void __fastcall CBaseAnimatingOverlayController::OnNewModel(
        CBaseAnimatingOverlayController *const this,
        const CModel *pOldModel,
        const CModel *pNewModel)
{
  CBaseAnimatingController::OnNewModel(this, pOldModel, pNewModel);
}


// CBaseAnimatingOverlayController::AnimationFrameAdvance  (line 363, @0x000000000206c8e0, libserver.so)  // inlines: CSkipAnimTimeSetScope, ClearFlags, Dead, Dying, GetBool, GetDisableStudioFrameAdvanceHack, GetInt, GetWeight, Init, IsActive, KillMe, ModifyAnimTimeSetScope, SetFlags, SetKillDelay, SetOwner, ~CSkipAnimTimeSetScope
// calls: CBaseAnimatingController::AnimationFrameAdvance, CAnimationLayer::AnimationFrameAdvance, CAnimationLayer::SetWeight, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::Init, CBaseAnimatingOverlayController::FastRemoveLayer, CSkeletonAnimationController::GetOwnerEntity, CEntityDebugGameSystem::HasDebugBitsSet, CBaseAnimatingController::GetSequenceName, Msg, _Unwind_Resume
// strings: "removing %d (%d): %s : %5.3f (%.3f)\n", "%d (%d): %s : %5.3f (%.3f)\n"
__int64 __fastcall CBaseAnimatingOverlayController::AnimationFrameAdvance(
        CBaseAnimatingOverlayController *const this,
        double a2,
        __m128i flPrevAnimTime,
        float flNextAnimTime,
        AnimationAdvanceType_t type)
{
  CSkeletonInstance *m_pSkeletonInstance; // rax
  int m_Size; // r14d
  unsigned int v8; // r12d
  float m_flKillDelay; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  CAnimationLayer *AnimOverlay; // rbx
  int m_nFlags; // eax
  float m_Value; // xmm0_4
  float v18; // xmm1_4
  double v19; // xmm0_8
  CBaseEntity *OwnerEntity; // rax
  const char *SequenceName; // rax
  CBaseEntity *v22; // rax
  int v23; // r15d
  unsigned int i; // ebx
  CAnimationLayer *v25; // rax
  CAnimationLayer *v26; // r12
  double v27; // r14
  const char *v28; // rax
  double v29; // [rsp+8h] [rbp-58h]
  CSkipAnimTimeSetScope sg; // [rsp+10h] [rbp-50h]
  float flNextAnimTimea; // [rsp+18h] [rbp-48h]
  double flNextAnimTimeb; // [rsp+18h] [rbp-48h]
  unsigned __int8 v33; // [rsp+27h] [rbp-39h]
  float flAdvance; // [rsp+28h] [rbp-38h]
  float flAdvancea; // [rsp+28h] [rbp-38h]
  double flAdvanceb; // [rsp+28h] [rbp-38h]

  flNextAnimTimea = *flPrevAnimTime.m128i_i32;
  flAdvance = *&a2;
  v33 = CBaseAnimatingController::AnimationFrameAdvance(this, a2, flPrevAnimTime, a2, type);
  if ( v33 != 0 )
  {
    if ( this->m_bDisableStudioFrameAdvanceHack )
    {
      return this->m_bDisableStudioFrameAdvanceHack;
    }
    else
    {
      m_pSkeletonInstance = this->m_pSkeletonInstance;
      ++m_pSkeletonInstance->m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
      sg.m_pNode = m_pSkeletonInstance;
      if ( (flNextAnimTimea - flAdvance) > 0.2 )
        flAdvancea = 0.2;
      else
        flAdvancea = fmaxf(0.0, flNextAnimTimea - flAdvance);
      m_Size = this->m_AnimOverlay.m_Vector.m_Size;
      if ( m_Size > 0 )
      {
        v8 = 0;
        while ( 1 )
        {
          AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, v8);
          m_nFlags = AnimOverlay->m_nFlags;
          if ( (m_nFlags & 1) != 0 )
            break;
          if ( (m_nFlags & 0x20) != 0 )
          {
            ++v8;
            AnimOverlay->m_nFlags = m_nFlags & 0xFFFFFFDF;
            if ( v8 == m_Size )
              goto LABEL_19;
          }
          else
          {
            if ( AnimOverlay->m_op.m_flWeight.m_Value.m_Value > 0.0 )
            {
              AnimOverlay->m_pOwner = this;
              CAnimationLayer::Init(AnimOverlay);
LABEL_26:
              AnimOverlay->m_nFlags |= 0x20u;
            }
LABEL_15:
            if ( ++v8 == m_Size )
              goto LABEL_19;
          }
        }
        if ( (m_nFlags & 4) == 0 )
          goto LABEL_12;
        m_flKillDelay = AnimOverlay->m_flKillDelay;
        if ( m_flKillDelay > 0.0 )
        {
          v10 = m_flKillDelay - flAdvancea;
          v11 = 1.0;
          if ( v10 <= 1.0 )
            v12 = fmaxf(0.0, v10);
          else
            v12 = 1.0;
          AnimOverlay->m_flKillDelay = v12;
LABEL_12:
          CAnimationLayer::AnimationFrameAdvance(AnimOverlay, flAdvancea, v11);
          if ( AnimOverlay->m_bSequenceFinished && (AnimOverlay->m_nFlags & 2) != 0 )
          {
            CAnimationLayer::SetWeight(AnimOverlay, 0.0, v13, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            AnimOverlay->m_nFlags |= 4u;
          }
          goto LABEL_15;
        }
        m_Value = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
        if ( m_Value != 0.0 )
        {
          v18 = m_Value - (flAdvancea * AnimOverlay->m_flKillRate);
          *&v19 = 1065353216;
          if ( v18 <= 1.0 )
          {
            HIDWORD(v19) = 0;
            *&v19 = fmaxf(0.0, v18);
          }
          CAnimationLayer::SetWeight(AnimOverlay, v19, v18, LayerChangeBehavior_t::LAYER_CHANGE_SUPPPRESS_CALLBACKS);
          goto LABEL_12;
        }
        if ( ai_sequence_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
          if ( CEntityDebugGameSystem::HasDebugBitsSet(g_pEntityDebugGameSystem, OwnerEntity, 0x20000u) )
          {
            flNextAnimTimeb = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
            v29 = AnimOverlay->m_op.m_flCycle.m_Value;
            SequenceName = CBaseAnimatingController::GetSequenceName(this, AnimOverlay->m_op.m_hSequence.m_Value);
            Msg(
              "removing %d (%d): %s : %5.3f (%.3f)\n",
              v8,
              AnimOverlay->m_nOrder.m_Value,
              SequenceName,
              v29,
              flNextAnimTimeb);
          }
        }
        CBaseAnimatingOverlayController::FastRemoveLayer(this, v8);
        goto LABEL_26;
      }
LABEL_19:
      if ( ai_sequence_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        v22 = CSkeletonAnimationController::GetOwnerEntity(this);
        if ( CEntityDebugGameSystem::HasDebugBitsSet(g_pEntityDebugGameSystem, v22, 0x20000u) )
        {
          v23 = this->m_AnimOverlay.m_Vector.m_Size;
          if ( v23 > 0 )
          {
            for ( i = 0; i != v23; ++i )
            {
              v25 = CBaseAnimatingOverlayController::GetAnimOverlay(this, i);
              v26 = v25;
              if ( (v25->m_nFlags & 1) != 0 )
              {
                flAdvanceb = v25->m_op.m_flWeight.m_Value.m_Value;
                v27 = v25->m_op.m_flCycle.m_Value;
                v28 = CBaseAnimatingController::GetSequenceName(this, v25->m_op.m_hSequence.m_Value);
                Msg("%d (%d): %s : %5.3f (%.3f)\n", i, v26->m_nOrder.m_Value, v28, v27, flAdvanceb);
              }
            }
          }
        }
      }
      --sg.m_pNode->m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
    }
  }
  return v33;
}


// CBaseAnimatingOverlayController::DispatchAnimEvents  (line 470, @0x000000000207cde0, libserver.so)  // inlines: GetModelData, GetModelPtr, SetSortAnimTimeList, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::IsSequenceDebugging, GetAnimationEventCount, CBaseAnimatingOverlayController::GetAnimOverlay, CBaseAnimatingController::DetectAnimEvents, CAnimationLayer::DetectAnimEvents, std::make_heap<int*, bool (*)(int const&, int const&)>, std::sort_heap<int*, bool (*)(int const&, int const&)>, EventList_NameForIndex, CSkeletonAnimationController::GetOwnerEntity, CEntityInstance::GetEntityIndex, Msg, __stack_chk_fail
// strings: "sv", "[%s %.3f] Anim Event %d -> '%s'(%d)\n"
// globals: CBaseAnimatingController::SortByEventTime(int const&,int const&), g_pSortAnimEvents
void __fastcall CBaseAnimatingOverlayController::DispatchAnimEvents(
        CBaseAnimatingOverlayController *const this,
        float a2,
        float flAnimTime,
        CBaseEntity *pEventHandlerBase)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r14
  int (**vptr_CSkeletonAnimationController)(...); // rax
  HSequence v8; // eax
  int AnimationEventCount; // eax
  int m_Size; // ebx
  int v11; // r13d
  __int64 v12; // r15
  CAnimationLayer *AnimOverlay; // rax
  float v14; // xmm1_4
  __int64 v15; // r15
  void *v16; // rsp
  int v17; // r14d
  CAnimationLayer *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rsi
  void *v21; // rsp
  int *v22; // rdx
  int i; // eax
  int *v24; // r13
  int *v25; // rbx
  __int64 v26; // r13
  animevent_t *v27; // rbx
  CBaseEntity *OwnerEntity; // rax
  CEntityIndex v29; // eax
  float m_flLastEventAnimTime; // xmm1_4
  void *v31; // rsp
  CBaseEntity *pEventHandlerBaseb; // [rsp+0h] [rbp-60h]
  AnimEventIndex_t v34; // [rsp+8h] [rbp-58h]
  bool bWatch; // [rsp+Fh] [rbp-51h]
  int *pOrder; // [rsp+10h] [rbp-50h] BYREF
  animevent_t *pAnimEvents; // [rsp+18h] [rbp-48h]
  unsigned __int64 v38; // [rsp+28h] [rbp-38h]

  *&pAnimEvents = a2;
  v38 = __readfsqword(0x28u);
  bWatch = CBaseAnimatingController::IsSequenceDebugging(this);
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  *&pOrder = this->m_flLastEventAnimTime;
  if ( *&pOrder == 0.0 )
  {
    *&pOrder = this->m_flPrevAnimTime;
    if ( *&pOrder == 0.0 )
      LODWORD(pOrder) = pAnimEvents;
  }
  vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
  LODWORD(this->m_flLastEventAnimTime) = pAnimEvents;
  v8.m_Data = vptr_CSkeletonAnimationController[24](this);
  AnimationEventCount = GetAnimationEventCount(m_pData, v8);
  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  v11 = AnimationEventCount;
  if ( m_Size <= 0 )
  {
    m_flLastEventAnimTime = this->m_flLastEventAnimTime;
    v31 = alloca(48LL * AnimationEventCount + 32);
    pAnimEvents = (&pOrder & 0xFFFFFFFFFFFFFFEFLL);
    v17 = CBaseAnimatingController::DetectAnimEvents(
            this,
            *&pOrder,
            m_flLastEventAnimTime,
            AnimationEventCount,
            (&pOrder & 0xFFFFFFFFFFFFFFEFLL));
  }
  else
  {
    v12 = 0;
    do
    {
      while ( 1 )
      {
        AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, v12);
        if ( (AnimOverlay->m_nFlags & 1) != 0
          && (this->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[v12].m_nFlags & 0x40) == 0 )
        {
          break;
        }
        if ( m_Size <= ++v12 )
          goto LABEL_10;
      }
      ++v12;
      v11 += GetAnimationEventCount(m_pData, AnimOverlay->m_op.m_hSequence.m_Value);
    }
    while ( m_Size > v12 );
LABEL_10:
    v14 = this->m_flLastEventAnimTime;
    v15 = 0;
    v16 = alloca(48LL * v11 + 32);
    pAnimEvents = (&pOrder & 0xFFFFFFFFFFFFFFEFLL);
    v17 = CBaseAnimatingController::DetectAnimEvents(this, *&pOrder, v14, v11, (&pOrder & 0xFFFFFFFFFFFFFFEFLL));
    do
    {
      while ( 1 )
      {
        v18 = CBaseAnimatingOverlayController::GetAnimOverlay(this, v15);
        if ( (v18->m_nFlags & 1) != 0 && (this->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[v15].m_nFlags & 0x40) == 0 )
          break;
        if ( m_Size <= ++v15 )
          goto LABEL_15;
      }
      ++v15;
      v17 += CAnimationLayer::DetectAnimEvents(v18, pOrder, this->m_flLastEventAnimTime, v11 - v17, &pAnimEvents[v17]);
    }
    while ( m_Size > v15 );
  }
LABEL_15:
  if ( pEventHandlerBase == 0 )
    pEventHandlerBase = CSkeletonAnimationController::GetOwnerEntity(this);
  v19 = (*(pEventHandlerBase->_vptr_IHandleEntity + 43))(pEventHandlerBase);
  if ( v19 != 0 )
  {
    v20 = v17;
    v21 = alloca(((v20 * 4 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    pOrder = (&pOrder & 0xFFFFFFFFFFFFFFEFLL);
    *(&pOrder & 0xFFFFFFFFFFFFFFEFLL) = 0;
    if ( v17 <= 1 )
    {
      if ( v17 <= 0 )
        return;
    }
    else
    {
      v22 = ((&pOrder & 0xFFFFFFFFFFFFFFEFLL) + 4);
      for ( i = 1; i != v17; ++i )
        *v22++ = i;
      v24 = pOrder;
      v25 = &pOrder[v20];
      g_pSortAnimEvents = pAnimEvents;
      std::make_heap<int *,bool (*)(int const&,int const&)>(
        pOrder,
        &pOrder[v20],
        CBaseAnimatingController::SortByEventTime);
      std::sort_heap<int *,bool (*)(int const&,int const&)>(v24, v25, CBaseAnimatingController::SortByEventTime);
      g_pSortAnimEvents = 0;
    }
    v26 = 0;
    do
    {
      v27 = &pAnimEvents[pOrder[v26]];
      if ( bWatch )
      {
        v34.m_Data = v27->event;
        pEventHandlerBaseb = EventList_NameForIndex(v27->event);
        OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
        v29.m_Data = CEntityInstance::GetEntityIndex(OwnerEntity).m_Data;
        Msg("[%s %.3f] Anim Event %d -> '%s'(%d)\n", "sv", v29.m_Data, pEventHandlerBaseb, v34.m_Data, v27->eventtime);
      }
      v27->m_bHandledByScript = (*(*v19 + 1840LL))(v19, v27);
      if ( (*(*v19 + 1848LL))(v19, v27) != 0 )
        v27->m_bHandledByScript = 1;
      ++v26;
      (*(*v19 + 1832LL))(v19, v27);
    }
    while ( v17 > v26 );
  }
}


// CBaseAnimatingOverlayController::GatherSequences  (line 559, @0x00000000020888f0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CAnimationDecodeOp, CopyConstruct<CAnimationDecodeOp>, Element, GetOrder, GetPlaybackRate, GetPrevCycle, GrowMemory, HSequence, operator[]
// calls: CBaseAnimatingController::GatherSequences, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::GetOperation, CUtlMemory<TransitioningLaterMetaInfo_t, int>::Grow, CUtlMemory<CAnimationDecodeOp, int>::Grow
void __fastcall CBaseAnimatingOverlayController::GatherSequences(
        const CBaseAnimatingOverlayController *const this,
        CUtlVector<CAnimationDecodeOp,CUtlMemory<CAnimationDecodeOp,int> > *const ops,
        CUtlVector<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> > *const meta)
{
  int m_Size; // r13d
  int *v6; // rbx
  int *v7; // rax
  int i; // r14d
  const CAnimationLayer *AnimOverlay; // rax
  __int64 m_Value; // rax
  int *v11; // r13
  const CAnimationLayer *v12; // rax
  const CAnimationLayer *v13; // r14
  int v14; // eax
  int v15; // esi
  __int64 v16; // rcx
  bool v17; // zf
  CAnimationDecodeOp *v18; // rcx
  __int64 v19; // rcx
  int v20; // esi
  TransitioningLaterMetaInfo_t *v21; // rcx
  int v22; // [rsp+Ch] [rbp-A4h]
  int v23; // [rsp+Ch] [rbp-A4h]
  CAnimationDecodeOp layerOp; // [rsp+30h] [rbp-80h] BYREF
  int layer[28]; // [rsp+40h] [rbp-70h] BYREF

  CBaseAnimatingController::GatherSequences(this, ops, meta);
  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v6 = &layer[m_Size - 1 + 1];
    v7 = layer;
    do
      *v7++ = 15;
    while ( v7 != v6 );
    for ( i = 0; i != m_Size; ++i )
    {
      AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, i);
      if ( (AnimOverlay->m_nFlags & 1) != 0 )
      {
        m_Value = AnimOverlay->m_nOrder.m_Value;
        if ( m_Size > m_Value && m_Value >= 0 )
          layer[m_Value] = i;
      }
    }
    v11 = layer;
    do
    {
      if ( *v11 != 15 )
      {
        v12 = CBaseAnimatingOverlayController::GetAnimOverlay(this, *v11);
        layerOp.m_hSequence.m_Data = -1;
        v13 = v12;
        layerOp.m_flCycle = 0.0;
        layerOp.m_flWeight = 0.0;
        layerOp.m_source = animopsource_t::ANIM_OP_UNSPECIFIED;
        CAnimationLayer::GetOperation(v12, &layerOp);
        if ( layerOp.m_flWeight != 0.0 && layerOp.m_hSequence.m_Data != -1 )
        {
          v14 = ops->m_Size;
          if ( ops->m_Size == ops->m_Memory.m_nAllocationCount )
          {
            v23 = ops->m_Size;
            CUtlMemory<CAnimationDecodeOp,int>::Grow(&ops->m_Memory, 1);
            v15 = ops->m_Size;
            v14 = v23;
          }
          else
          {
            v15 = ops->m_Size;
          }
          v16 = v14;
          v17 = &ops->m_Memory.m_pMemory[v16] == 0;
          v18 = &ops->m_Memory.m_pMemory[v16];
          ops->m_Size = v15 + 1;
          if ( !v17 )
            *v18 = layerOp;
          v19 = meta->m_Size;
          v20 = meta->m_Size;
          if ( v19 == meta->m_Memory.m_nAllocationCount )
          {
            v22 = meta->m_Size;
            CUtlMemory<TransitioningLaterMetaInfo_t,int>::Grow(&meta->m_Memory, 1);
            v20 = meta->m_Size;
            v19 = v22;
          }
          meta->m_Size = v20 + 1;
          v21 = &meta->m_Memory.m_pMemory[v19];
          v21->m_flStartTime = v13->m_flLayerAnimtime;
          v21->m_flPlaybackRate = v13->m_flPlaybackRate.m_Value.m_Value;
          v21->m_flPrevCycle = v13->m_op.m_flPrevCycle.m_Value;
        }
      }
      ++v11;
    }
    while ( v11 != v6 );
  }
}


// CBaseAnimatingOverlayController::SetupSequences  (line 612, @0x0000000002077b50, libserver.so)  // inlines: CEntityHandle, GetBool, GetEHandle, GetEntryIndex, GetInt, GetInterpolatedTime, GetOperation, GetOrder, GetSerialNumber, Init, IsInSimulation, entindex, simorrendertime
// calls: CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::GetOperation, CGameSceneNode::GetOwnerEntity, CBaseAnimatingController::IsSequenceDebugging, CBaseAnimatingController::GetNumPoseParameters, CGlobalVarsBase::curtime, CEntityInstance::GetEntityIndex, CFmtStrN<256, false>::CFmtStrN, CBaseAnimatingController::DescribeSequences, CSequenceTransitioner2::GetDecodeOperations, __stack_chk_fail
// strings: "[%d] Decode %.3f: "
// globals: CBaseAnimatingOverlayController::SetupSequences(ISequenceSetup *)::neutral_parameters_initialized, CBaseAnimatingOverlayController::SetupSequences(ISequenceSetup *)::neutral_pose_parameters
void __fastcall CBaseAnimatingOverlayController::SetupSequences(
        CBaseAnimatingOverlayController *const this,
        ISequenceSetup *pSetup)
{
  int m_Size; // r13d
  float m_Value; // xmm0_4
  __int64 v5; // rdx
  void *v6; // rsp
  void *v7; // rsp
  unsigned __int64 v8; // rcx
  int32 m_Data; // eax
  int *v10; // rbx
  int *v11; // rax
  int j; // r15d
  CAnimationLayer *AnimOverlay; // rax
  __int64 v14; // rax
  int *v15; // r13
  CAnimationLayer *v16; // rax
  __int64 v17; // r15
  CAnimationDecodeOp *v18; // r14
  CBaseEntity *OwnerEntity; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v21; // r13d
  int v22; // eax
  __int16 v23; // cx
  unsigned int NumPoseParameters; // eax
  CNetworkArrayBase<float,24,CBaseAnimatingController::NetworkVar_m_flPoseParameter> *p_m_flPoseParameter; // r8
  bool *v26; // rdx
  int (*v27)(...); // r10
  CEntityIndex v28; // eax
  int DecodeOperations; // eax
  __int64 i; // rdx
  float pSources; // [rsp+8h] [rbp-1B8h]
  _BYTE v33[4]; // [rsp+10h] [rbp-1B0h] BYREF
  int nOpCount; // [rsp+14h] [rbp-1ACh]
  CAnimationDecodeOp *pOps; // [rsp+18h] [rbp-1A8h]
  int v36[4]; // [rsp+20h] [rbp-1A0h] BYREF
  int layer[16]; // [rsp+30h] [rbp-190h] BYREF
  CFmtStr prefix; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v39; // [rsp+188h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  nOpCount = 1;
  m_Value = this->m_baseLayer.m_flCycle.m_Value;
  v5 = m_Size + 31;
  v6 = alloca(16 * v5 + 32);
  v7 = alloca(((4 * v5 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  pOps = (v33 & 0xFFFFFFFFFFFFFFEFLL);
  v8 = v33 & 0xFFFFFFFFFFFFFFEFLL;
  *(v8 + 4) = m_Value;
  *(v8 + 8) = this->m_baseLayer.m_flWeight.m_Value.m_Value;
  m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
  *(v8 + 12) = 0;
  *v8 = m_Data;
  *(v33 & 0xFFFFFFFFFFFFFFEFLL) = 0;
  if ( anim_sequence_transitioner.m_pParent->m_Value.m_nValue != 0 )
  {
    DecodeOperations = CSequenceTransitioner2::GetDecodeOperations(&this->m_SequenceTransitioner, 30, (v8 + 16), 0);
    for ( i = 0; DecodeOperations > i; ++i )
      *(&loc_2 + 4 * i + (v33 & 0xFFFFFFFFFFFFFFEFLL) + 2) = 2;
    nOpCount = DecodeOperations + 1;
  }
  if ( m_Size > 0 )
  {
    v10 = &layer[m_Size - 1 + 1];
    v11 = layer;
    do
      *v11++ = 15;
    while ( v11 != v10 );
    for ( j = 0; j != m_Size; ++j )
    {
      AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, j);
      if ( (AnimOverlay->m_nFlags & 1) != 0 )
      {
        v14 = AnimOverlay->m_nOrder.m_Value;
        if ( m_Size > v14 && v14 >= 0 )
          layer[v14] = j;
      }
    }
    v15 = layer;
    do
    {
      if ( *v15 != 15 )
      {
        v16 = CBaseAnimatingOverlayController::GetAnimOverlay(this, *v15);
        v17 = nOpCount;
        v18 = &pOps[nOpCount];
        CAnimationLayer::GetOperation(v16, v18);
        if ( v18->m_flWeight != 0.0 && v18->m_hSequence.m_Data != -1 )
        {
          ++nOpCount;
          *((v33 & 0xFFFFFFFFFFFFFFEFLL) + 4 * v17) = 1;
        }
      }
      ++v15;
    }
    while ( v10 != v15 );
  }
  OwnerEntity = CGameSceneNode::GetOwnerEntity(this->m_pSkeletonInstance);
  if ( OwnerEntity == 0 )
  {
    v21 = -1;
    if ( pOps->m_hSequence.m_Data != -1 )
      goto LABEL_24;
    goto LABEL_35;
  }
  if ( CBaseAnimatingController::IsSequenceDebugging(this)
    && sequence_debug_verbose.m_pParent->m_Value.m_nValue != 0
    && (gpGlobals == 0 || gpGlobals->m_bInSimulation) )
  {
    pSources = CGlobalVarsBase::curtime(gpGlobals, 0);
    v28.m_Data = CEntityInstance::GetEntityIndex(OwnerEntity).m_Data;
    CFmtStrN<256,false>::CFmtStrN(&prefix, "[%d] Decode %.3f: ", v28.m_Data, pSources);
    CBaseAnimatingController::DescribeSequences(this, prefix.m_szBuf);
  }
  m_pEntity = OwnerEntity->m_pEntity;
  v21 = -1;
  if ( m_pEntity != 0 )
  {
    v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v23 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v36[0]) = v23 | v36[0] & 0x8000;
    v36[0] = (v22 << 15) | v36[0] & 0x7FFF;
    v21 = v36[0];
  }
  if ( pOps->m_hSequence.m_Data == -1 )
  {
LABEL_35:
    ++pOps;
    --nOpCount;
  }
LABEL_24:
  NumPoseParameters = CBaseAnimatingController::GetNumPoseParameters(this);
  p_m_flPoseParameter = &this->m_flPoseParameter;
  if ( anim_noposeparameters.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( !CBaseAnimatingOverlayController::SetupSequences(ISequenceSetup *)::neutral_parameters_initialized )
    {
      CBaseAnimatingOverlayController::SetupSequences(ISequenceSetup *)::neutral_parameters_initialized = 1;
      v26 = CBaseAnimatingOverlayController::SetupSequences(ISequenceSetup *)::neutral_pose_parameters;
      do
      {
        *v26 = 1056964608;
        v26 += 4;
      }
      while ( v26 != &CBaseAnimatingOverlayController::SetupSequences(ISequenceSetup *)::neutral_parameters_initialized );
    }
    p_m_flPoseParameter = CBaseAnimatingOverlayController::SetupSequences(ISequenceSetup *)::neutral_pose_parameters;
  }
  v27 = *pSetup->_vptr_ISequenceSetup;
  v36[0] = v21;
  v27(pSetup, nOpCount, pOps, NumPoseParameters, p_m_flPoseParameter, v36, gpGlobals->realtime);
}


// CBaseAnimatingOverlayController::SetupAnimationHistoryContext  (line 719, @0x0000000002058ab0, libserver.so)
void __fastcall CBaseAnimatingOverlayController::SetupAnimationHistoryContext(
        CBaseAnimatingOverlayController *const this,
        ISkeletonAnimationHistoryContext *pContext)
{
  ;
}


// CBaseAnimatingOverlayController::AddGestureSequence  (line 738, @0x000000000208a930, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::AddLayeredSequence, CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::SetLayerAutokill
// callers: CBaseAnimatingOverlay::AddGestureSequence, CBaseAnimatingOverlayController::AddGestureSequence, CBaseAnimatingOverlayController::AddGesture
int __fastcall CBaseAnimatingOverlayController::AddGestureSequence(
        CBaseAnimatingOverlayController *const this,
        HSequence hSequence,
        bool bAutokill)
{
  int v5; // eax
  int v6; // ebx

  v5 = CBaseAnimatingOverlayController::AddLayeredSequence(this, hSequence, 0);
  v6 = v5;
  if ( v5 < 0 || v5 >= this->m_AnimOverlay.m_Vector.m_Size || !CBaseAnimatingOverlayController::IsValidLayer(this, v5) )
    return v6;
  CBaseAnimatingOverlayController::SetLayerAutokill(this, v6, bAutokill);
  return v6;
}


// CBaseAnimatingOverlayController::AddGestureSequence  (line 750, @0x000000000208a9d0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: LookupSequence, CBaseAnimatingOverlayController::AddGestureSequence
int __fastcall CBaseAnimatingOverlayController::AddGestureSequence(
        CBaseAnimatingOverlayController *const this,
        const char *pSequenceName,
        bool bAutokill)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  HSequence v7; // eax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  v7.m_Data = LookupSequence(m_pData, pSequenceName).m_Data;
  return CBaseAnimatingOverlayController::AddGestureSequence(this, v7, bAutokill);
}


// CBaseAnimatingOverlayController::AddGestureSequence  (line 756, @0x000000000208aae0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: LookupSequence, CBaseAnimatingOverlayController::AddGestureSequence
__int64 __fastcall CBaseAnimatingOverlayController::AddGestureSequence(
        CBaseAnimatingOverlayController *const this,
        const char *pSequenceName,
        float flDuration,
        bool bAutokill)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  HSequence v8; // eax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  v8.m_Data = LookupSequence(m_pData, pSequenceName).m_Data;
  return CBaseAnimatingOverlayController::AddGestureSequence(this, v8, flDuration, bAutokill);
}


// CBaseAnimatingOverlayController::AddGestureSequence  (line 767, @0x000000000208aa20, libserver.so)
// calls: CBaseAnimatingOverlayController::AddGestureSequence, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetPlaybackRate
// callers: CBaseAnimatingOverlay::AddGestureSequence, CBaseAnimatingOverlayController::AddGestureSequence
__int64 __fastcall CBaseAnimatingOverlayController::AddGestureSequence(
        CBaseAnimatingOverlayController *const this,
        HSequence hSequence,
        float flDuration,
        bool autokill)
{
  int v6; // r12d
  CAnimationLayer *AnimOverlay; // rax
  double v8; // xmm1_8
  unsigned int flDurationb; // [rsp+Ch] [rbp-24h]

  v6 = CBaseAnimatingOverlayController::AddGestureSequence(this, hSequence, autokill);
  if ( v6 >= 0 && flDuration > 0.0 )
  {
    *&flDurationb = (*(this->_vptr_CSkeletonAnimationController + 21))(this, hSequence.m_Data) / flDuration;
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, v6);
    CAnimationLayer::SetPlaybackRate(AnimOverlay, COERCE_DOUBLE(flDurationb), v8);
  }
  return v6;
}


// CBaseAnimatingOverlayController::AddGesture  (line 785, @0x000000000208ab40, libserver.so)  // inlines: ActivityList_NameForIndex, CUtlSymbolLarge, GetModelName, IsPlayingGesture, SetActivity
// calls: CBaseAnimatingOverlayController::FindGestureLayer, CBaseAnimatingController::SelectWeightedSequence, CBaseAnimatingOverlayController::AddGestureSequence, CBaseAnimatingOverlayController::GetAnimOverlay, DevMsg(char const*,...)
// callers: CBaseAnimatingOverlay::AddGesture, CBaseAnimatingOverlayController::AddGesture, CBaseAnimatingOverlayController::RestartGesture
// strings: "CBaseAnimatingOverlayController::AddGesture:  model %s missing activity %s\n", "ACT_INVALID"
int __fastcall CBaseAnimatingOverlayController::AddGesture(
        CBaseAnimatingOverlayController *const this,
        Activity activity,
        bool bAutokill)
{
  int GestureLayer; // ebx
  HSequence v8; // eax
  int v9; // eax
  int v10; // ebx
  const char *v11; // rdx
  CSkeletonInstance *m_pSkeletonInstance; // rax
  const char *m_pAsString; // rsi

  GestureLayer = CBaseAnimatingOverlayController::FindGestureLayer(this, activity);
  if ( GestureLayer != -1 )
    return GestureLayer;
  v8.m_Data = CBaseAnimatingController::SelectWeightedSequence(this, activity).m_Data;
  GestureLayer = v8.m_Data;
  if ( v8.m_Data == -1 )
  {
    if ( g_pAnimationSystem == 0 || (v11 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, activity)) == 0 )
      v11 = "ACT_INVALID";
    m_pSkeletonInstance = this->m_pSkeletonInstance;
    m_pAsString = "";
    if ( m_pSkeletonInstance->m_modelState.m_ModelName.u.m_Id != 0 )
      m_pAsString = m_pSkeletonInstance->m_modelState.m_ModelName.u.m_pAsString;
    DevMsg("CBaseAnimatingOverlayController::AddGesture:  model %s missing activity %s\n", m_pAsString, v11);
    return GestureLayer;
  }
  v9 = CBaseAnimatingOverlayController::AddGestureSequence(this, v8, bAutokill);
  GestureLayer = -1;
  if ( v9 == -1 )
    return GestureLayer;
  v10 = v9;
  CBaseAnimatingOverlayController::GetAnimOverlay(this, v9)->m_nActivity = activity;
  return v10;
}


// CBaseAnimatingOverlayController::AddGesture  (line 815, @0x000000000208ac50, libserver.so)
// calls: CBaseAnimatingOverlayController::AddGesture, CBaseAnimatingOverlayController::SetLayerDuration
__int64 __fastcall CBaseAnimatingOverlayController::AddGesture(
        CBaseAnimatingOverlayController *const this,
        Activity activity,
        float flDuration,
        bool bAutokill)
{
  unsigned int v5; // r12d
  float v6; // xmm1_4

  v5 = CBaseAnimatingOverlayController::AddGesture(this, activity, bAutokill);
  CBaseAnimatingOverlayController::SetLayerDuration(this, v5, flDuration, v6);
  return v5;
}


// CBaseAnimatingOverlayController::SetLayerDuration  (line 828, @0x000000000206b830, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetPlaybackRate
// callers: CBaseAnimatingOverlay::SetLayerDuration, CBaseAnimatingOverlayController::AddGesture, CBaseAnimatingOverlay::AddGesture
void __fastcall CBaseAnimatingOverlayController::SetLayerDuration(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        float a3,
        float flDuration)
{
  CAnimationLayer *AnimOverlay; // rbx
  double v7; // xmm0_8

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer)
    && a3 > 0.0 )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    v7 = (*(this->_vptr_CSkeletonAnimationController + 21))(this, AnimOverlay->m_op.m_hSequence.m_Value.m_Data);
    *&v7 = *&v7 / a3;
    CAnimationLayer::SetPlaybackRate(AnimOverlay, v7, COERCE_DOUBLE(LODWORD(a3)));
  }
}


// CBaseAnimatingOverlayController::GetLayerDuration  (line 843, @0x000000000206cc40, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::GetLayerDuration
float __fastcall CBaseAnimatingOverlayController::GetLayerDuration(
        const CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  double v4; // xmm0_8
  const CAnimationLayer *AnimOverlay; // rbx
  float v7; // [rsp-14h] [rbp-1Ch]

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    if ( AnimOverlay->m_flPlaybackRate.m_Value.m_Value == 0.0 )
    {
      v4 = (*(this->_vptr_CSkeletonAnimationController + 21))(this, AnimOverlay->m_op.m_hSequence.m_Value.m_Data);
    }
    else
    {
      v7 = 1.0 - AnimOverlay->m_op.m_flCycle.m_Value;
      *&v4 = (v7 * (*(this->_vptr_CSkeletonAnimationController + 21))(
                     this,
                     AnimOverlay->m_op.m_hSequence.m_Value.m_Data))
           / AnimOverlay->m_flPlaybackRate.m_Value.m_Value;
    }
  }
  else
  {
    LODWORD(v4) = 0;
  }
  return *&v4;
}


// CBaseAnimatingOverlayController::AddLayeredSequence  (line 862, @0x000000000208a690, libserver.so)  // inlines: CAnimationOperationWriter, GetBool, GetInt, GetModelData, GetModelPtr, GetOrder, Init, IsValidLayer, SetActivity, SetCycle, SetLastEventCheck, SetPrevCycle, SetSequence, SetSequenceFinished, SetWeight, curtime, operator const RuntimeClass_t*, ~CAnimationOperationWriter
// calls: CBaseAnimatingOverlayController::AllocateLayer, CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetPlaybackRate, CBaseAnimatingController::IsSequenceLooping, CAnimationLayer::SetLooping, CAnimationOperationWriter::LatchAnimationOperation, CSkeletonAnimationController::GetOwnerEntity, CEntityDebugGameSystem::HasDebugBitsSet, CBaseAnimatingController::GetSequenceName, Msg, _Unwind_Resume
// callers: CBaseAnimatingOverlay::AddLayeredSequence, CBaseAnimatingOverlayController::AddGestureSequence
// strings: "%5.3f:%s: adding layer %d (order %d): %s : cycle %5.3f (weight %5.3f)\n"
int __fastcall CBaseAnimatingOverlayController::AddLayeredSequence(
        CBaseAnimatingOverlayController *const this,
        HSequence hSequence,
        int iPriority)
{
  int Layer; // eax
  int v6; // ebx
  CAnimationLayer *AnimOverlay; // r13
  CSkeletonInstance *m_pSkeletonInstance; // rax
  float m_Value; // xmm0_4
  double v11; // xmm1_8
  float v12; // xmm2_4
  CEntityInstance *m_pOwner; // rax
  bool v14; // zf
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *v16; // rsi
  bool IsSequenceLooping; // al
  CBaseEntity *OwnerEntity; // rax
  const char *SequenceName; // rax
  int v20; // ecx
  const char *v21; // r8
  double v22; // xmm1_8
  double v23; // xmm2_8
  CGlobalVars *v24; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  int v27; // [rsp+4h] [rbp-5Ch]
  const char *v28; // [rsp+8h] [rbp-58h]
  double v29; // [rsp+10h] [rbp-50h]
  double v30; // [rsp+10h] [rbp-50h]
  double v31; // [rsp+18h] [rbp-48h]
  double v32; // [rsp+18h] [rbp-48h]
  CAnimationOperationWriter writer; // [rsp+20h] [rbp-40h] BYREF

  Layer = CBaseAnimatingOverlayController::AllocateLayer(this, iPriority);
  v6 = Layer;
  if ( Layer < 0
    || Layer >= this->m_AnimOverlay.m_Vector.m_Size
    || !CBaseAnimatingOverlayController::IsValidLayer(this, Layer) )
  {
    return v6;
  }
  AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, v6);
  m_pSkeletonInstance = this->m_pSkeletonInstance;
  m_Value = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
  *&v11 = LODWORD(AnimOverlay->m_op.m_flCycle.m_Value);
  writer.m_pOp = &AnimOverlay->m_op;
  writer.m_flWeight = m_Value;
  v12 = AnimOverlay->m_op.m_flPrevCycle.m_Value;
  m_pOwner = m_pSkeletonInstance->m_pOwner;
  writer.m_flCycle = *&v11;
  writer.m_flPrevCycle = v12;
  writer.m_pEntity = m_pOwner;
  writer.m_hSequence.m_Data = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
  if ( *&v11 != 0.0 )
    writer.m_flCycle = 0.0;
  if ( v12 != 0.0 )
    writer.m_flPrevCycle = 0.0;
  CAnimationLayer::SetPlaybackRate(AnimOverlay, COERCE_DOUBLE(1065353216), v11);
  v14 = writer.m_hSequence.m_Data == hSequence.m_Data;
  AnimOverlay->m_nActivity = -1;
  if ( !v14 )
    writer.m_hSequence = hSequence;
  writer.m_flPrevCycle = 0.0;
  writer.m_flCycle = 0.0;
  if ( writer.m_flWeight != 1.0 )
    writer.m_flWeight = 1.0;
  AnimOverlay->m_bSequenceFinished = 0;
  AnimOverlay->m_flLastEventCycle = 0.0;
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  v16 = m_pBinding != 0 ? m_pBinding->m_pData : 0LL;
  IsSequenceLooping = CBaseAnimatingController::IsSequenceLooping(this, v16, hSequence);
  CAnimationLayer::SetLooping(AnimOverlay, IsSequenceLooping);
  CAnimationOperationWriter::LatchAnimationOperation(&writer);
  if ( ai_sequence_debug.m_pParent->m_Value.m_nValue == 0 )
    return v6;
  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  if ( !CEntityDebugGameSystem::HasDebugBitsSet(g_pEntityDebugGameSystem, OwnerEntity, 0x20000u) )
    return v6;
  v29 = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
  v31 = AnimOverlay->m_op.m_flCycle.m_Value;
  SequenceName = CBaseAnimatingController::GetSequenceName(this, AnimOverlay->m_op.m_hSequence.m_Value);
  v20 = AnimOverlay->m_nOrder.m_Value;
  v21 = SequenceName;
  v22 = v31;
  v23 = v29;
  v24 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v27 = AnimOverlay->m_nOrder.m_Value;
        v28 = v21;
        v30 = v31;
        v32 = v23;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v20 = v27;
        v21 = v28;
        v22 = v30;
        v23 = v32;
      }
    }
    m_flCurrentTime = v24->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  Msg(
    "%5.3f:%s: adding layer %d (order %d): %s : cycle %5.3f (weight %5.3f)\n",
    m_flCurrentTime,
    "S",
    v6,
    v20,
    v21,
    v22,
    v23);
  return v6;
}


// CBaseAnimatingOverlayController::IsValidLayer  (line 900, @0x000000000206b7b0, libserver.so)  // inlines: IsActive
// calls: CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlay::IsValidLayer, CBaseAnimatingOverlayController::SetLayerDuration, CBaseAnimatingOverlayController::SetLayerPlaybackRate, CBaseAnimatingOverlayController::SetLayerAutokill, CBaseAnimatingOverlayController::SetLayerNoRestore, CBaseAnimatingOverlayController::SetLayerNoEvents, CBaseAnimatingOverlayController::SetLayerAutofadeDisabled, CBaseAnimatingOverlayController::SetLayerActivity, CBaseAnimatingOverlayController::RemoveLayer, CBaseAnimatingOverlayController::SetLayerCycle, CBaseAnimatingOverlayController::SetLayerWeight (23 total)
bool __fastcall CBaseAnimatingOverlayController::IsValidLayer(
        const CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  return CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer)->m_nFlags & 1;
}


// CBaseAnimatingOverlayController::IsValidLayer  (line 900, @0x000000000206b7d0, libserver.so)
// calls: CBaseAnimatingOverlayController::IsValidLayer
bool __fastcall CBaseAnimatingOverlayController::IsValidLayer(
        const CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  return iLayer >= 0
      && iLayer < this->m_AnimOverlay.m_Vector.m_Size
      && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer);
}


// CBaseAnimatingOverlayController::AllocateLayer  (line 910, @0x000000000208a480, libserver.so)  // inlines: GetOrder, IsActive, MarkActive, SetFlags, SetPriority, curtime
// calls: CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetOrder, CBaseAnimatingOverlayController::AddOverlays
// callers: CBaseAnimatingOverlayController::AddLayeredSequence
int __fastcall CBaseAnimatingOverlayController::AllocateLayer(
        CBaseAnimatingOverlayController *const this,
        int iPriority)
{
  int m_Size; // r12d
  int v5; // r13d
  int v6; // r14d
  int v7; // eax
  CAnimationLayer *AnimOverlay; // rax
  int m_nFlags; // ecx
  int v10; // r14d
  int i; // r12d
  CAnimationLayer *v12; // rax
  int m_Value; // esi
  CAnimationLayer *v14; // rax
  CAnimationLayer *v15; // r12
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v17; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int iNumOpen; // [rsp+8h] [rbp-38h]
  int iOpenLayer; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  if ( m_Size <= 0 )
  {
    v5 = 0;
    iNumOpen = 0;
    goto LABEL_35;
  }
  iNumOpen = 0;
  v5 = 0;
  v6 = 0;
  iOpenLayer = -1;
  do
  {
    while ( 1 )
    {
      AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, v6);
      m_nFlags = AnimOverlay->m_nFlags;
      if ( (m_nFlags & 1) != 0 )
      {
        if ( AnimOverlay->m_nPriority <= iPriority )
        {
          v7 = AnimOverlay->m_nOrder.m_Value + 1;
          if ( v5 < v7 )
            v5 = v7;
        }
        goto LABEL_6;
      }
      if ( (m_nFlags & 0x20) == 0 )
        break;
LABEL_6:
      if ( ++v6 == m_Size )
        goto LABEL_11;
    }
    if ( iOpenLayer == -1 )
    {
      iOpenLayer = v6;
      goto LABEL_6;
    }
    ++iNumOpen;
    ++v6;
  }
  while ( v6 != m_Size );
LABEL_11:
  if ( iOpenLayer == -1 )
  {
    if ( v6 > 14 )
      return iOpenLayer;
LABEL_35:
    iOpenLayer = CBaseAnimatingOverlayController::AddOverlays(this, 1);
  }
  if ( iNumOpen != 0 || this->m_AnimOverlay.m_Vector.m_Size > 14 )
  {
    if ( !this->m_bOrderIsExternallyControlled )
    {
LABEL_15:
      v10 = this->m_AnimOverlay.m_Vector.m_Size;
      if ( v10 > 0 )
      {
        for ( i = 0; i != v10; ++i )
        {
          while ( 1 )
          {
            v12 = CBaseAnimatingOverlayController::GetAnimOverlay(this, i);
            m_Value = v12->m_nOrder.m_Value;
            if ( m_Value <= 14 && v5 <= m_Value )
              break;
            if ( ++i == v10 )
              goto LABEL_21;
          }
          CAnimationLayer::SetOrder(v12, m_Value + 1, LayerChangeBehavior_t::LAYER_CHANGE_SUPPPRESS_CALLBACKS);
        }
      }
    }
  }
  else
  {
    iOpenLayer = CBaseAnimatingOverlayController::AddOverlays(this, 1);
    if ( !this->m_bOrderIsExternallyControlled )
      goto LABEL_15;
  }
LABEL_21:
  v14 = CBaseAnimatingOverlayController::GetAnimOverlay(this, iOpenLayer);
  v14->m_nFlags = 1;
  v15 = v14;
  if ( !this->m_bOrderIsExternallyControlled )
    CAnimationLayer::SetOrder(v14, v5, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  v15->m_nPriority = iPriority;
  m_flCurrentTime = 0.0;
  v17 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v17->m_flCurrentTime;
  }
  v15->m_flLastAccess = m_flCurrentTime;
  return iOpenLayer;
}


// CBaseAnimatingOverlayController::SetLayerPriority  (line 999, @0x000000000206c620, libserver.so)  // inlines: GetOrder, IsValidLayer, MarkActive, SetPriority, curtime
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetOrder
// callers: CBaseAnimatingOverlay::SetLayerPriority
void __fastcall CBaseAnimatingOverlayController::SetLayerPriority(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        int iPriority)
{
  int m_Size; // r13d
  int i; // r15d
  CAnimationLayer *AnimOverlay; // rax
  int m_Value; // esi
  int j; // r15d
  CAnimationLayer *v11; // rax
  int v12; // eax
  int k; // r15d
  CAnimationLayer *v14; // rax
  int v15; // esi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v17; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int iNewOrder; // [rsp+4h] [rbp-3Ch]
  CAnimationLayer *pLayer; // [rsp+8h] [rbp-38h]

  if ( iLayer >= 0 )
  {
    m_Size = this->m_AnimOverlay.m_Vector.m_Size;
    if ( iLayer < m_Size && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
    {
      pLayer = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
      if ( pLayer->m_nPriority != iPriority )
      {
        if ( !this->m_bOrderIsExternallyControlled )
        {
          if ( m_Size <= 0 )
          {
            CAnimationLayer::SetOrder(pLayer, 0, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          }
          else
          {
            for ( i = 0; i != m_Size; ++i )
            {
              while ( 1 )
              {
                AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, i);
                if ( (AnimOverlay->m_nFlags & 1) != 0 )
                {
                  m_Value = AnimOverlay->m_nOrder.m_Value;
                  if ( m_Value > pLayer->m_nOrder.m_Value )
                    break;
                }
                if ( ++i == m_Size )
                  goto LABEL_13;
              }
              CAnimationLayer::SetOrder(
                AnimOverlay,
                m_Value - 1,
                LayerChangeBehavior_t::LAYER_CHANGE_SUPPPRESS_CALLBACKS);
            }
LABEL_13:
            iNewOrder = 0;
            for ( j = 0; j != m_Size; ++j )
            {
              v11 = CBaseAnimatingOverlayController::GetAnimOverlay(this, j);
              if ( j != iLayer && (v11->m_nFlags & 1) != 0 && iPriority >= v11->m_nPriority )
              {
                v12 = v11->m_nOrder.m_Value + 1;
                if ( iNewOrder >= v12 )
                  v12 = iNewOrder;
                iNewOrder = v12;
              }
            }
            for ( k = 0; k != m_Size; ++k )
            {
              while ( 1 )
              {
                v14 = CBaseAnimatingOverlayController::GetAnimOverlay(this, k);
                if ( k != iLayer && (v14->m_nFlags & 1) != 0 )
                {
                  v15 = v14->m_nOrder.m_Value;
                  if ( v15 >= iNewOrder )
                    break;
                }
                if ( ++k == m_Size )
                  goto LABEL_27;
              }
              CAnimationLayer::SetOrder(v14, v15 + 1, LayerChangeBehavior_t::LAYER_CHANGE_SUPPPRESS_CALLBACKS);
            }
LABEL_27:
            CAnimationLayer::SetOrder(pLayer, iNewOrder, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          }
        }
        m_flCurrentTime = 0.0;
        pLayer->m_nPriority = iPriority;
        v17 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          m_flCurrentTime = v17->m_flCurrentTime;
        }
        pLayer->m_flLastAccess = m_flCurrentTime;
      }
    }
  }
}


// CBaseAnimatingOverlayController::FindGestureLayer  (line 1066, @0x000000000206cd20, libserver.so)  // inlines: IsActive
// calls: CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::FindGestureLayer, CBaseAnimatingOverlayController::IsPlayingGesture, CBaseAnimatingOverlay::IsPlayingGesture, CBaseAnimatingOverlayController::RemoveGesture, CBaseAnimatingOverlayController::AddGesture, CBaseAnimatingOverlayController::RestartGesture
int __fastcall CBaseAnimatingOverlayController::FindGestureLayer(
        const CBaseAnimatingOverlayController *const this,
        Activity activity)
{
  int result; // eax
  int m_Size; // r13d
  int v6; // ebx
  const CAnimationLayer *AnimOverlay; // rax
  int m_nFlags; // edx
  Activity m_nActivity; // eax

  result = -1;
  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, v6);
      m_nFlags = AnimOverlay->m_nFlags;
      if ( (m_nFlags & 1) != 0 && (m_nFlags & 4) == 0 )
      {
        m_nActivity = AnimOverlay->m_nActivity;
        if ( m_nActivity != -1 && m_nActivity == activity )
          break;
      }
      if ( ++v6 == m_Size )
        return -1;
    }
    return v6;
  }
  return result;
}


// CBaseAnimatingOverlayController::IsPlayingGesture  (line 1093, @0x000000000206cdc0, libserver.so)
// calls: CBaseAnimatingOverlayController::FindGestureLayer
bool __fastcall CBaseAnimatingOverlayController::IsPlayingGesture(
        const CBaseAnimatingOverlayController *const this,
        Activity activity)
{
  return CBaseAnimatingOverlayController::FindGestureLayer(this, activity) != -1;
}


// CBaseAnimatingOverlayController::RestartGesture  (line 1102, @0x000000000208ace0, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetCycle, SetLastEventCheck, SetPrevCycle, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CBaseAnimatingOverlayController::FindGestureLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CBaseAnimatingOverlayController::AddGesture
// callers: CBaseAnimatingOverlay::RestartGesture
void __fastcall CBaseAnimatingOverlayController::RestartGesture(
        CBaseAnimatingOverlayController *const this,
        Activity activity,
        bool bAddIfMissing,
        bool bAutoKill)
{
  int GestureLayer; // eax
  CAnimationLayer *AnimOverlay; // rax
  float m_Value; // xmm2_4
  CAnimationLayer::NetworkVar_m_op *p_m_op; // r13
  CAnimationLayer *v12; // rbx
  int32 m_Data; // r12d
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  bool v17; // zf
  bool v18; // zf
  __int64 v19; // rax
  float v20; // xmm0_4
  float v21; // [rsp+8h] [rbp-28h]
  float v22; // [rsp+8h] [rbp-28h]
  float v23; // [rsp+Ch] [rbp-24h]
  float v24; // [rsp+Ch] [rbp-24h]
  float v25; // [rsp+Ch] [rbp-24h]
  float v26; // [rsp+Ch] [rbp-24h]

  GestureLayer = CBaseAnimatingOverlayController::FindGestureLayer(this, activity);
  if ( GestureLayer != -1 )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, GestureLayer);
    m_Value = AnimOverlay->m_op.m_flCycle.m_Value;
    p_m_op = &AnimOverlay->m_op;
    v12 = AnimOverlay;
    m_Data = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
    v14 = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
    v15 = AnimOverlay->m_op.m_flPrevCycle.m_Value;
    if ( m_Value == 0.0 )
      v16 = AnimOverlay->m_op.m_flCycle.m_Value;
    else
      v16 = 0.0;
    AnimOverlay->m_flLastEventCycle = 0.0;
    if ( v15 == 0.0 )
    {
      v17 = v16 == m_Value;
    }
    else
    {
      v21 = v14;
      v23 = v16;
      (*(AnimOverlay->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v16 = v23;
      v17 = v23 == v12->m_op.m_flCycle.m_Value;
      v14 = v21;
      v12->m_op.m_flPrevCycle.m_Value = 0.0;
    }
    if ( v17 )
    {
      if ( v12->m_op.m_hSequence.m_Value.m_Data == m_Data )
      {
LABEL_7:
        v18 = v14 == v12->m_op.m_flWeight.m_Value.m_Value;
        goto LABEL_8;
      }
    }
    else
    {
      v22 = v14;
      v24 = v16;
      (*(v12->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17 = v12->m_op.m_hSequence.m_Value.m_Data == m_Data;
      v14 = v22;
      v12->m_op.m_flCycle.m_Value = v24;
      if ( v17 )
        goto LABEL_7;
    }
    v25 = v14;
    (*(v12->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v14 = v25;
    v12->m_op.m_hSequence.m_Value.m_Data = m_Data;
    v18 = v25 == v12->m_op.m_flWeight.m_Value.m_Value;
LABEL_8:
    if ( !v18 )
    {
      v26 = v14;
      (*(v12->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v19 = g_pQuantizedFloatEncoders + 32LL * v12->m_op.m_flWeight.m_Value.m_nEncoder;
      v20 = *(v19 + 12);
      if ( v26 <= v20 )
        v20 = fmaxf(*(v19 + 8), v26);
      v12->m_op.m_flWeight.m_Value.m_Value = v20;
    }
    return;
  }
  if ( bAddIfMissing )
    CBaseAnimatingOverlayController::AddGesture(this, activity, bAutoKill);
}


// CBaseAnimatingOverlayController::RemoveGesture  (line 1125, @0x000000000206ce10, libserver.so)
// calls: CBaseAnimatingOverlayController::FindGestureLayer, CBaseAnimatingOverlayController::RemoveLayer
// callers: CBaseAnimatingOverlay::RemoveGesture
void __fastcall CBaseAnimatingOverlayController::RemoveGesture(
        CBaseAnimatingOverlayController *const this,
        Activity activity)
{
  int GestureLayer; // eax
  float v4; // xmm2_4

  GestureLayer = CBaseAnimatingOverlayController::FindGestureLayer(this, activity);
  if ( GestureLayer != -1 )
    CBaseAnimatingOverlayController::RemoveLayer(this, GestureLayer, 0.2, 0.0, v4);
}


// CBaseAnimatingOverlayController::RemoveAllGestures  (line 1137, @0x000000000206bcb0, libserver.so)
// calls: CBaseAnimatingOverlayController::RemoveLayer
// callers: CBaseAnimatingOverlay::RemoveAllGestures
void __fastcall CBaseAnimatingOverlayController::RemoveAllGestures(CBaseAnimatingOverlayController *const this)
{
  float v1; // xmm2_4
  int i; // ebx
  int v4; // esi

  for ( i = 0; i < this->m_AnimOverlay.m_Vector.m_Size; ++i )
  {
    v4 = i;
    CBaseAnimatingOverlayController::RemoveLayer(this, v4, 0.2, 0.0, v1);
  }
}


// CBaseAnimatingOverlayController::SetLayerCycle  (line 1148, @0x000000000206bd20, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, IsValidLayer, LatchAnimationOperation, MarkActive, NetworkStateChanged, Set, SetCycle, curtime, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
// callers: CBaseAnimatingOverlay::SetLayerCycle
void __fastcall CBaseAnimatingOverlayController::SetLayerCycle(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        float a3,
        float flCycle)
{
  CAnimationLayer *AnimOverlay; // rax
  float v7; // xmm0_4
  CAnimationLayer *v8; // r13
  float v9; // xmm1_4
  CAnimationLayer::NetworkVar_m_op *p_m_op; // rbx
  float m_Value; // xmm2_4
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  double v15; // xmm0_8
  __int64 v16; // rax
  float v17; // xmm1_4
  float flCycleb; // [rsp+Ch] [rbp-44h]
  CAnimationLayer::NetworkVar_m_op *writer_8; // [rsp+18h] [rbp-38h]
  int32 writer_16; // [rsp+20h] [rbp-30h]
  float writer_20; // [rsp+24h] [rbp-2Ch]
  float writer_24; // [rsp+28h] [rbp-28h]
  float writer_28; // [rsp+2Ch] [rbp-24h]

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    v7 = a3;
    v8 = AnimOverlay;
    if ( !AnimOverlay->m_bLooping.m_Value )
    {
      v9 = 1.0;
      if ( a3 <= 1.0 )
        v9 = fmaxf(0.0, a3);
      v7 = v9;
    }
    p_m_op = &AnimOverlay->m_op;
    writer_8 = &AnimOverlay->m_op;
    m_Value = AnimOverlay->m_op.m_flPrevCycle.m_Value;
    writer_28 = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
    writer_20 = m_Value;
    writer_24 = AnimOverlay->m_op.m_flCycle.m_Value;
    writer_16 = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
    if ( v7 != writer_24 )
      writer_24 = v7;
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          p_m_op = writer_8;
          m_Value = writer_20;
        }
      }
      m_flCurrentTime = v12->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v8->m_flLastAccess = m_flCurrentTime;
    if ( m_Value != p_m_op->m_flPrevCycle.m_Value )
    {
      flCycleb = m_Value;
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      p_m_op->m_flPrevCycle.m_Value = flCycleb;
      p_m_op = writer_8;
    }
    *&v15 = LODWORD(writer_24);
    if ( writer_24 != p_m_op->m_flCycle.m_Value )
    {
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v15 = LODWORD(writer_24);
      p_m_op->m_flCycle.m_Value = writer_24;
      p_m_op = writer_8;
    }
    if ( p_m_op->m_hSequence.m_Value.m_Data != writer_16 )
    {
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v15);
      p_m_op->m_hSequence.m_Value.m_Data = writer_16;
      p_m_op = writer_8;
    }
    if ( writer_28 != p_m_op->m_flWeight.m_Value.m_Value )
    {
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v16 = g_pQuantizedFloatEncoders + 32LL * p_m_op->m_flWeight.m_Value.m_nEncoder;
      v17 = *(v16 + 12);
      if ( writer_28 <= v17 )
        v17 = fmaxf(*(v16 + 8), writer_28);
      p_m_op->m_flWeight.m_Value.m_Value = v17;
    }
  }
}


// CBaseAnimatingOverlayController::SetLayerCycle  (line 1168, @0x000000000206bfa0, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, IsValidLayer, LatchAnimationOperation, MarkActive, NetworkStateChanged, Set, SetCycle, SetLastEventCheck, SetPrevCycle, curtime, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
// callers: CBaseAnimatingOverlay::SetLayerCycle
void __fastcall CBaseAnimatingOverlayController::SetLayerCycle(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        float a3,
        float flCycle,
        float flPrevCycle)
{
  CAnimationLayer *AnimOverlay; // rax
  float v8; // xmm0_4
  CAnimationLayer *v9; // r12
  float v10; // xmm1_4
  float v11; // xmm2_4
  CAnimationLayer::NetworkVar_m_op *p_m_op; // rbx
  CGlobalVars *v13; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  double v16; // xmm0_8
  __int64 v17; // rax
  float v18; // xmm1_4
  CAnimationLayer::NetworkVar_m_op *writer_8; // [rsp+18h] [rbp-38h]
  int32 writer_16; // [rsp+20h] [rbp-30h]
  float writer_20; // [rsp+24h] [rbp-2Ch]
  float writer_24; // [rsp+28h] [rbp-28h]
  float writer_28; // [rsp+2Ch] [rbp-24h]

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    v8 = a3;
    v9 = AnimOverlay;
    v10 = flCycle;
    if ( !AnimOverlay->m_bLooping.m_Value )
    {
      v11 = 1.0;
      if ( a3 <= 1.0 )
        v8 = fmaxf(0.0, a3);
      else
        v8 = 1.0;
      if ( flCycle <= 1.0 )
        v11 = fmaxf(0.0, flCycle);
      v10 = v11;
    }
    p_m_op = &AnimOverlay->m_op;
    writer_8 = &AnimOverlay->m_op;
    writer_24 = AnimOverlay->m_op.m_flCycle.m_Value;
    writer_28 = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
    writer_20 = AnimOverlay->m_op.m_flPrevCycle.m_Value;
    writer_16 = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
    if ( v8 != writer_24 )
      writer_24 = v8;
    if ( v10 != AnimOverlay->m_op.m_flPrevCycle.m_Value )
      writer_20 = v10;
    AnimOverlay->m_flLastEventCycle = v10;
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          p_m_op = writer_8;
        }
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v9->m_flLastAccess = m_flCurrentTime;
    if ( writer_20 != p_m_op->m_flPrevCycle.m_Value )
    {
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      p_m_op->m_flPrevCycle.m_Value = writer_20;
      p_m_op = writer_8;
    }
    *&v16 = LODWORD(writer_24);
    if ( writer_24 != p_m_op->m_flCycle.m_Value )
    {
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v16 = LODWORD(writer_24);
      p_m_op->m_flCycle.m_Value = writer_24;
      p_m_op = writer_8;
    }
    if ( p_m_op->m_hSequence.m_Value.m_Data != writer_16 )
    {
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v16);
      p_m_op->m_hSequence.m_Value.m_Data = writer_16;
      p_m_op = writer_8;
    }
    if ( writer_28 != p_m_op->m_flWeight.m_Value.m_Value )
    {
      (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17 = g_pQuantizedFloatEncoders + 32LL * p_m_op->m_flWeight.m_Value.m_nEncoder;
      v18 = *(v17 + 12);
      if ( writer_28 <= v18 )
        v18 = fmaxf(*(v17 + 8), writer_28);
      p_m_op->m_flWeight.m_Value.m_Value = v18;
    }
  }
}


// CBaseAnimatingOverlayController::GetLayerCycle  (line 1190, @0x000000000206ce70, libserver.so)  // inlines: GetCycle, IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::GetLayerCycle
float __fastcall CBaseAnimatingOverlayController::GetLayerCycle(
        const CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  float result; // xmm0_4
  bool IsValidLayer; // al

  result = 0.0;
  if ( iLayer >= 0 )
  {
    result = 0.0;
    if ( iLayer < this->m_AnimOverlay.m_Vector.m_Size )
    {
      IsValidLayer = CBaseAnimatingOverlayController::IsValidLayer(this, iLayer);
      result = 0.0;
      if ( IsValidLayer )
        return CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer)->m_op.m_flCycle.m_Value;
    }
  }
  return result;
}


// CBaseAnimatingOverlayController::SetLayerPlaybackRate  (line 1202, @0x000000000206b8e0, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetPlaybackRate
// callers: CBaseAnimatingOverlay::SetLayerPlaybackRate
void __fastcall CBaseAnimatingOverlayController::SetLayerPlaybackRate(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        float a3,
        float flPlaybackRate)
{
  CAnimationLayer *AnimOverlay; // rax
  double v7; // xmm1_8

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    CAnimationLayer::SetPlaybackRate(AnimOverlay, COERCE_DOUBLE(LODWORD(a3)), v7);
  }
}


// CBaseAnimatingOverlayController::SetLayerWeight  (line 1216, @0x000000000206c270, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, IsValidLayer, LatchAnimationOperation, MarkActive, NetworkStateChanged, Set, SetWeight, curtime, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
// callers: CBaseAnimatingOverlay::SetLayerWeight
void __fastcall CBaseAnimatingOverlayController::SetLayerWeight(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        float a3,
        float flWeight)
{
  float v6; // xmm1_4
  CAnimationLayer *AnimOverlay; // rax
  CAnimationLayer::NetworkVar_m_op *p_m_op; // rbx
  CAnimationLayer *v9; // r12
  float m_Value; // xmm2_4
  CGlobalVars *v11; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  float v14; // xmm0_4
  bool v15; // zf
  int32 v16; // r12d
  __int64 v17; // rax
  float v18; // xmm1_4
  float flWeightb; // [rsp+Ch] [rbp-44h]
  float flWeightc; // [rsp+Ch] [rbp-44h]
  float flWeightd; // [rsp+Ch] [rbp-44h]
  CAnimationLayer::NetworkVar_m_op *writer_8; // [rsp+18h] [rbp-38h]
  int32 writer_16; // [rsp+20h] [rbp-30h]
  float writer_20; // [rsp+24h] [rbp-2Ch]
  float writer_24; // [rsp+28h] [rbp-28h]
  float writer_28; // [rsp+2Ch] [rbp-24h]

  if ( iLayer < 0
    || iLayer >= this->m_AnimOverlay.m_Vector.m_Size
    || !CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    return;
  }
  v6 = 1.0;
  if ( a3 <= 1.0 )
    v6 = fmaxf(0.0, a3);
  flWeightb = v6;
  AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
  p_m_op = &AnimOverlay->m_op;
  v9 = AnimOverlay;
  writer_8 = &AnimOverlay->m_op;
  writer_28 = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
  writer_24 = AnimOverlay->m_op.m_flCycle.m_Value;
  m_Value = AnimOverlay->m_op.m_flPrevCycle.m_Value;
  writer_20 = m_Value;
  writer_16 = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
  if ( flWeightb != writer_28 )
    writer_28 = flWeightb;
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        p_m_op = writer_8;
        m_Value = writer_20;
      }
    }
    m_flCurrentTime = v11->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v9->m_flLastAccess = m_flCurrentTime;
  if ( m_Value == p_m_op->m_flPrevCycle.m_Value )
  {
    v14 = writer_24;
    v15 = writer_24 == p_m_op->m_flCycle.m_Value;
  }
  else
  {
    flWeightc = m_Value;
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    p_m_op->m_flPrevCycle.m_Value = flWeightc;
    p_m_op = writer_8;
    v14 = writer_24;
    v15 = writer_24 == writer_8->m_flCycle.m_Value;
  }
  if ( v15 )
  {
    v16 = writer_16;
    if ( p_m_op->m_hSequence.m_Value.m_Data == writer_16 )
      goto LABEL_19;
  }
  else
  {
    flWeightd = v14;
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    p_m_op->m_flCycle.m_Value = flWeightd;
    p_m_op = writer_8;
    v16 = writer_16;
    if ( writer_8->m_hSequence.m_Value.m_Data == writer_16 )
      goto LABEL_19;
  }
  (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  p_m_op->m_hSequence.m_Value.m_Data = v16;
  p_m_op = writer_8;
LABEL_19:
  if ( writer_28 != p_m_op->m_flWeight.m_Value.m_Value )
  {
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v17 = g_pQuantizedFloatEncoders + 32LL * p_m_op->m_flWeight.m_Value.m_nEncoder;
    v18 = *(v17 + 12);
    if ( writer_28 <= v18 )
      v18 = fmaxf(*(v17 + 8), writer_28);
    p_m_op->m_flWeight.m_Value.m_Value = v18;
  }
}


// CBaseAnimatingOverlayController::GetLayerWeight  (line 1233, @0x000000000206cef0, libserver.so)  // inlines: GetWeight, IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::GetLayerWeight
float __fastcall CBaseAnimatingOverlayController::GetLayerWeight(
        const CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  float result; // xmm0_4
  bool IsValidLayer; // al

  result = 0.0;
  if ( iLayer >= 0 )
  {
    result = 0.0;
    if ( iLayer < this->m_AnimOverlay.m_Vector.m_Size )
    {
      IsValidLayer = CBaseAnimatingOverlayController::IsValidLayer(this, iLayer);
      result = 0.0;
      if ( IsValidLayer )
        return CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer)->m_op.m_flWeight.m_Value.m_Value;
    }
  }
  return result;
}


// CBaseAnimatingOverlayController::SetLayerAutokill  (line 1246, @0x000000000206b970, libserver.so)  // inlines: ClearFlags, IsValidLayer, SetFlags
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::SetLayerAutokill, CBaseAnimatingOverlayController::AddGestureSequence
void __fastcall CBaseAnimatingOverlayController::SetLayerAutokill(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        bool bAutokill)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    if ( bAutokill )
      AnimOverlay->m_nFlags |= 2u;
    else
      AnimOverlay->m_nFlags &= ~2u;
  }
}


// CBaseAnimatingOverlayController::SetLayerLooping  (line 1266, @0x000000000206c530, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetLooping
// callers: CBaseAnimatingOverlay::SetLayerLooping
void __fastcall CBaseAnimatingOverlayController::SetLayerLooping(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        bool bLooping)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    CAnimationLayer::SetLooping(AnimOverlay, bLooping);
  }
}


// CBaseAnimatingOverlayController::SetLayerNoRestore  (line 1279, @0x000000000206ba00, libserver.so)  // inlines: ClearFlags, IsValidLayer, SetFlags
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::SetLayerNoRestore
void __fastcall CBaseAnimatingOverlayController::SetLayerNoRestore(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        bool bNoRestore)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    if ( bNoRestore )
      AnimOverlay->m_nFlags |= 8u;
    else
      AnimOverlay->m_nFlags &= ~8u;
  }
}


// CBaseAnimatingOverlayController::SetLayerNoEvents  (line 1298, @0x000000000206ba90, libserver.so)  // inlines: ClearFlags, IsValidLayer, SetFlags
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::SetLayerNoEvents
void __fastcall CBaseAnimatingOverlayController::SetLayerNoEvents(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        bool bNoEvents)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    if ( bNoEvents )
      AnimOverlay->m_nFlags |= 0x40u;
    else
      AnimOverlay->m_nFlags &= ~0x40u;
  }
}


// CBaseAnimatingOverlayController::SetLayerAutofadeDisabled  (line 1314, @0x000000000206bb20, libserver.so)  // inlines: ClearFlags, IsValidLayer, SetAutofadeDisabled, SetFlags
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
void __fastcall CBaseAnimatingOverlayController::SetLayerAutofadeDisabled(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        bool bDisable)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    if ( bDisable )
      AnimOverlay->m_nFlags |= 0x80u;
    else
      AnimOverlay->m_nFlags &= ~0x80u;
  }
}


// CBaseAnimatingOverlayController::GetLayerActivity  (line 1326, @0x000000000206cf70, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::GetLayerActivity
Activity __fastcall CBaseAnimatingOverlayController::GetLayerActivity(
        const CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    return CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer)->m_nActivity;
  }
  else
  {
    return -1;
  }
}


// CBaseAnimatingOverlayController::SetLayerActivity  (line 1337, @0x000000000206bb90, libserver.so)  // inlines: IsValidLayer, SetActivity
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
void __fastcall CBaseAnimatingOverlayController::SetLayerActivity(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        Activity nActivity)
{
  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer)->m_nActivity = nActivity;
  }
}


// CBaseAnimatingOverlayController::GetLayerSequence  (line 1351, @0x000000000206cff0, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::GetLayerSequence
HSequence __fastcall CBaseAnimatingOverlayController::GetLayerSequence(
        const CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    return CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer)->m_op.m_hSequence.m_Value.m_Data;
  }
  else
  {
    return -1;
  }
}


// CBaseAnimatingOverlayController::SetLayerSequence  (line 1363, @0x000000000206c5c0, libserver.so)  // inlines: IsValidLayer
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetSequence
void __fastcall CBaseAnimatingOverlayController::SetLayerSequence(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        HSequence hSequence,
        SetSequenceBehavior_t behavior)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    CAnimationLayer::SetSequence(AnimOverlay, hSequence, behavior, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  }
}


// CBaseAnimatingOverlayController::RemoveLayer  (line 1376, @0x000000000206bbe0, libserver.so)  // inlines: IsValidLayer, KillMe, SetFlags, SetKillDelay, SetKillRate
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::RemoveLayer, CBaseAnimatingOverlayController::RemoveAllGestures, CBaseAnimatingOverlayController::RemoveGesture
void __fastcall CBaseAnimatingOverlayController::RemoveLayer(
        CBaseAnimatingOverlayController *const this,
        int iLayer,
        float a3,
        float flKillRate,
        float flKillDelay)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( iLayer >= 0
    && iLayer < this->m_AnimOverlay.m_Vector.m_Size
    && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
  {
    AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
    if ( a3 <= 0.0 )
      AnimOverlay->m_flKillRate = 100.0;
    else
      AnimOverlay->m_flKillRate = AnimOverlay->m_op.m_flWeight.m_Value.m_Value / a3;
    AnimOverlay->m_nFlags |= 4u;
    AnimOverlay->m_flKillDelay = flKillRate;
  }
}


// CBaseAnimatingOverlayController::FastRemoveLayer  (line 1396, @0x000000000206c810, libserver.so)  // inlines: GetOrder, Init, IsValidLayer, SetOwner
// calls: CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetAnimOverlay, CAnimationLayer::SetOrder, CAnimationLayer::Init
// callers: CBaseAnimatingOverlay::FastRemoveLayer, CBaseAnimatingOverlayController::AnimationFrameAdvance
void __fastcall CBaseAnimatingOverlayController::FastRemoveLayer(
        CBaseAnimatingOverlayController *const this,
        int iLayer)
{
  int m_Size; // r13d
  CAnimationLayer *AnimOverlay; // r14
  int i; // ebx
  CAnimationLayer *v7; // rax
  int m_Value; // esi

  if ( iLayer >= 0 )
  {
    m_Size = this->m_AnimOverlay.m_Vector.m_Size;
    if ( iLayer < m_Size && CBaseAnimatingOverlayController::IsValidLayer(this, iLayer) )
    {
      AnimOverlay = CBaseAnimatingOverlayController::GetAnimOverlay(this, iLayer);
      if ( !this->m_bOrderIsExternallyControlled && m_Size > 0 )
      {
        for ( i = 0; i != m_Size; ++i )
        {
          v7 = CBaseAnimatingOverlayController::GetAnimOverlay(this, i);
          if ( (v7->m_nFlags & 1) != 0 )
          {
            m_Value = v7->m_nOrder.m_Value;
            if ( m_Value > AnimOverlay->m_nOrder.m_Value )
              CAnimationLayer::SetOrder(v7, m_Value - 1, LayerChangeBehavior_t::LAYER_CHANGE_SUPPPRESS_CALLBACKS);
          }
        }
      }
      AnimOverlay->m_pOwner = this;
      CAnimationLayer::Init(AnimOverlay);
    }
  }
}


// CBaseAnimatingOverlayController::GetNumAnimOverlays  (line 1420, @0x000000000206b6c0, libserver.so)
int __fastcall CBaseAnimatingOverlayController::GetNumAnimOverlays(const CBaseAnimatingOverlayController *const this)
{
  return this->m_AnimOverlay.m_Vector.m_Size;
}


// CBaseAnimatingOverlayController::SetNumAnimOverlays  (line 1425, @0x000000000208af30, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Destruct<CAnimationLayer>, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, RemoveMultiple, RemoveOverlays, Resolve, Set, ShiftElementsLeft, V_memcpy, V_memmove, memcpy, memmove, operator CEntityInstance*, operator(), operator=, operator[], ~CAnimationLayer
// calls: GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CSkeletonAnimationController::GetOwnerEntity, CBaseEntity::InvalidatePhysicsRecursive, memmove, EntityInstanceSetNetworkStateChanged, CUtlVectorEmbeddedNetworkVar<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, -1>::Resolve (14 total)
// callers: CBaseAnimatingOverlay::SetNumAnimOverlays
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CBaseAnimatingOverlayController::SetNumAnimOverlays(
        CBaseAnimatingOverlayController *const this,
        int num)
{
  CEntityInstance *m_pObj; // r15
  CBaseAnimatingOverlayController *v3; // rbx
  CEntityInstance *m_Size; // r12
  unsigned __int64 p_path; // r13
  LeafCodeInfo_t *v6; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v8; // rax
  void **v9; // rsi
  int v10; // edx
  __int64 v11; // rax
  int v12; // edx
  bool v13; // zf
  FlattenedSerializerHandle_t v14; // rax
  __int64 v15; // rax
  void **v16; // rsi
  CEntityInstance *v17; // rcx
  FlattenedSerializerHandle_t v18; // rax
  __int64 m_szFunction_low; // rdx
  size_t v20; // rdx
  const char *m_szFile; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *m_pPaths; // rsi
  int16 v25; // dx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v31; // rdx
  ChangeAccessorFieldPathIndex_t v32; // ax
  CEntityInstance *v33; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v36; // rdi
  CBaseEntity *OwnerEntity; // rax
  const LeafCodeInfo_t *v38; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+0h] [rbp-E0h]
  CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *p_m_AnimOverlay; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v41)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *, bool *); // [rsp+18h] [rbp-C8h]
  void (__fastcall *v42)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *, bool *); // [rsp+20h] [rbp-C0h]
  CEntityInstance *v43; // [rsp+20h] [rbp-C0h]
  ChangeAccessorFieldPathIndex_t *v44; // [rsp+20h] [rbp-C0h]
  void **dest; // [rsp+28h] [rbp-B8h]
  void *src[2]; // [rsp+30h] [rbp-B0h] BYREF
  __int16 v47; // [rsp+40h] [rbp-A0h]
  char v48; // [rsp+42h] [rbp-9Eh]
  void *v49[2]; // [rsp+50h] [rbp-90h] BYREF
  __int16 v50; // [rsp+60h] [rbp-80h]
  char v51; // [rsp+62h] [rbp-7Eh]
  CFieldPath path; // [rsp+70h] [rbp-70h] BYREF
  LeafCodeInfo_t v53; // [rsp+90h] [rbp-50h] BYREF

  v3 = this;
  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  if ( num != m_Size )
  {
    if ( num > m_Size )
    {
      CBaseAnimatingOverlayController::AddOverlays(this, num - m_Size);
LABEL_60:
      OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(v3);
      CBaseEntity::InvalidatePhysicsRecursive(OwnerEntity, 32);
      return;
    }
    p_path = (m_Size - num);
    p_m_AnimOverlay = &this->m_AnimOverlay;
    if ( p_path > m_Size )
      p_path = m_Size;
    v6 = (m_Size - p_path);
    if ( !this->m_AnimOverlay.m_bResolved )
    {
      m_pObj = this->m_AnimOverlay.m_pOwnerEntity.m_pObj;
      this->m_AnimOverlay.m_bResolved = 1;
      if ( m_pObj != 0 )
      {
        v42 = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
        dest = src;
        v42(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          m_pObj,
          p_m_AnimOverlay,
          &v3->m_AnimOverlay.m_bIsNetworkVarExcluded);
        this = &v3->m_AnimOverlay.m_PathToVector;
        if ( &v3->m_AnimOverlay.m_PathToVector != src )
        {
          v8 = v47;
          v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v8 > 6 )
            goto LABEL_74;
          v3->m_AnimOverlay.m_PathToVector.m_nCount = v8;
          if ( v8 > 0 )
          {
            v9 = src;
            if ( v48 != 0 )
              v9 = src[0];
            memcpy(this, v9, 2 * v8);
          }
        }
      }
      else
      {
        if ( this->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_68;
        this->m_AnimOverlay.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(v3->m_AnimOverlay.m_pOwnerEntity.m_pObj);
    v10 = m_Size - 1;
    if ( v6 <= m_Size - 1 )
    {
      v11 = 136LL * v10;
      do
      {
        this = off_3FEC7F0;
        v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[v11 / 0x88]._vptr_CAnimationLayer = off_3FEC7F0;
        v11 -= 136;
      }
      while ( v11 != 136 * (v10 - (v10 - v6)) - 136 );
    }
    v12 = v3->m_AnimOverlay.m_Vector.m_Size;
    if ( v12 - m_Size > 0 && p_path > 0 )
    {
      memmove(
        &v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[m_Size - p_path],
        &v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[m_Size],
        136LL * (v3->m_AnimOverlay.m_Vector.m_Size - m_Size));
      v12 = v3->m_AnimOverlay.m_Vector.m_Size;
    }
    v13 = !v3->m_AnimOverlay.m_bResolved;
    v3->m_AnimOverlay.m_Vector.m_Size = v12 - p_path;
    if ( !v13 )
    {
LABEL_27:
      if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded && v3->m_AnimOverlay.m_Vector.m_Size > 0 )
      {
        m_Size = 0;
        LODWORD(m_pObj) = 0;
        p_m_bIsNetworkVarExcluded = &v3->m_AnimOverlay.m_bIsNetworkVarExcluded;
        v6 = &v53;
        dest = &v3->m_AnimOverlay.m_PathToVector;
        p_path = &path;
        goto LABEL_30;
      }
LABEL_56:
      m_pArraySizeChangedDelegate = v3->m_AnimOverlay.m_pArraySizeChangedDelegate;
      if ( m_pArraySizeChangedDelegate != 0 )
      {
        pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
        v36 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis
             + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v36 - 1);
        pfn(v36);
      }
      goto LABEL_60;
    }
    m_Size = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
    v3->m_AnimOverlay.m_bResolved = 1;
    if ( m_Size != 0 )
    {
      v6 = *(*g_pFlattenedSerializers + 272LL);
      v14 = GetNetworkSerializerForEntityInstance(m_Size);
      p_path = v49;
      (v6)(v49, g_pFlattenedSerializers, v14, m_Size, p_m_AnimOverlay, &v3->m_AnimOverlay.m_bIsNetworkVarExcluded);
      this = &v3->m_AnimOverlay.m_PathToVector;
      if ( &v3->m_AnimOverlay.m_PathToVector == v49 )
        goto LABEL_27;
      v15 = v50;
      v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
      if ( v15 <= 6 )
      {
        v3->m_AnimOverlay.m_PathToVector.m_nCount = v15;
        if ( v15 > 0 )
        {
          v16 = v49;
          if ( v51 != 0 )
            v16 = v49[0];
          memcpy(this, v16, 2 * v15);
        }
        goto LABEL_27;
      }
LABEL_74:
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v53.m_nLine = 442;
        v53.m_szFile = "../../public/tier2/fieldpath.h";
        v53.m_szFunction = "Path_SetCount";
        v38 = &v53;
LABEL_76:
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          v38,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      while ( 1 )
      {
LABEL_46:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v28, v29, v26, v27) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_49:
        v25 = m_pObj;
LABEL_50:
        m_nCount = path.m_nCount;
        if ( path.m_nCount <= 5 )
          break;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v53.m_szFile = "../../public/tier2/fieldpath.h";
          v53.m_szFunction = "Path_AddToTail";
          v53.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v53,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      this = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
      ++path.m_nCount;
      *(p_path + 2 * m_nCount) = v25;
      v31 = (v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory + m_Size);
      if ( this != 0 )
      {
        v44 = (v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory + m_Size);
        v32.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
        v31 = v44;
        v44[8].m_Value = v32.m_Value;
      }
      else
      {
        v31[8].m_Value = -1;
      }
      v33 = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
      if ( v33 != *&v31[4].m_Value )
        *&v31[4].m_Value = v33;
      while ( 1 )
      {
        LODWORD(m_pObj) = m_pObj + 1;
        m_Size = (m_Size + 136);
        if ( m_pObj >= v3->m_AnimOverlay.m_Vector.m_Size )
          goto LABEL_56;
LABEL_30:
        if ( !v3->m_AnimOverlay.m_bResolved )
        {
          v17 = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
          v3->m_AnimOverlay.m_bResolved = 1;
          if ( v17 != 0 )
          {
            v43 = v17;
            v41 = *(*g_pFlattenedSerializers + 272LL);
            v18 = GetNetworkSerializerForEntityInstance(v17);
            v41(v6, g_pFlattenedSerializers, v18, v43, p_m_AnimOverlay, p_m_bIsNetworkVarExcluded);
            if ( dest != v6 )
            {
              m_szFunction_low = SLOWORD(v53.m_szFunction);
              v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
              if ( m_szFunction_low > 6 )
              {
                v3 = &LOG_GENERAL;
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
                  goto LABEL_46;
                *&path.u.m_FixedPaths[4].m_nValue = 442;
                path.u.m_pPaths = "../../public/tier2/fieldpath.h";
                *&path.m_nCount = "Path_SetCount";
                v38 = &path;
                goto LABEL_76;
              }
              v3->m_AnimOverlay.m_PathToVector.m_nCount = m_szFunction_low;
              if ( m_szFunction_low > 0 )
              {
                v20 = 2 * m_szFunction_low;
                m_szFile = v6;
                if ( BYTE2(v53.m_szFunction) != 0 )
                  m_szFile = v53.m_szFile;
                memcpy(dest, m_szFile, v20);
              }
            }
          }
          else
          {
            if ( v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
              goto LABEL_68;
            v3->m_AnimOverlay.m_PathToVector.m_nCount = 0;
          }
        }
        if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded )
        {
          v22 = v3->m_AnimOverlay.m_PathToVector.m_nCount;
          path.m_bUsingExternalPaths = 0;
          path.m_nCount = 0;
          if ( v22 > 6 )
            goto LABEL_74;
          path.m_nCount = v22;
          if ( v22 <= 0 )
            goto LABEL_49;
          v23 = 2 * v22;
          if ( v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
            m_pPaths = v3->m_AnimOverlay.m_PathToVector.u.m_pPaths;
          else
            m_pPaths = dest;
          __memcpy_chk(p_path, m_pPaths, v23, 24);
          v25 = m_pObj;
          if ( !path.m_bUsingExternalPaths )
            goto LABEL_50;
          v3 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v53.m_szFile = "../../public/tier2/fieldpath.h";
            v53.m_szFunction = "Path_AddToTail";
            v53.m_nLine = 428;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v53,
              "Path_AddToTail failed for read only CFieldPath");
          }
          goto LABEL_46;
        }
      }
    }
    if ( !v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
    {
      v3->m_AnimOverlay.m_PathToVector.m_nCount = 0;
      goto LABEL_27;
    }
LABEL_68:
    CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1>::Resolve(this);
  }
}


// CBaseAnimatingOverlayController::GetAnimOverlay  (line 1448, @0x000000000206b6d0, libserver.so)  // inlines: Element, operator[]
// callers: CBaseAnimatingOverlay::GetAnimOverlay, CBaseAnimatingOverlay::SetOverlayPrevEventCycle, CBaseAnimatingOverlayController::SetLayerDuration, CBaseAnimatingOverlayController::SetLayerPlaybackRate, CBaseAnimatingOverlayController::SetLayerAutokill, CBaseAnimatingOverlayController::SetLayerNoRestore, CBaseAnimatingOverlayController::SetLayerNoEvents, CBaseAnimatingOverlayController::SetLayerAutofadeDisabled, CBaseAnimatingOverlayController::SetLayerActivity, CBaseAnimatingOverlayController::RemoveLayer, CBaseAnimatingOverlayController::SetLayerCycle, CBaseAnimatingOverlayController::SetLayerWeight (24 total)
CAnimationLayer *__fastcall CBaseAnimatingOverlayController::GetAnimOverlay(
        CBaseAnimatingOverlayController *const this,
        int iIndex)
{
  CAnimationLayer *result; // rax

  result = 0;
  if ( iIndex >= 0 && iIndex < this->m_AnimOverlay.m_Vector.m_Size )
    return &this->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[iIndex];
  return result;
}


// CBaseAnimatingOverlayController::GetAnimOverlay  (line 1456, @0x000000000206b760, libserver.so)  // inlines: Element, operator[]
// callers: CBaseAnimatingOverlay::GetAnimOverlay, CBaseAnimatingOverlayController::IsValidLayer, CBaseAnimatingOverlayController::GetLayerDuration, CBaseAnimatingOverlayController::FindGestureLayer, CBaseAnimatingOverlayController::GetLayerCycle, CBaseAnimatingOverlayController::GetLayerWeight, CBaseAnimatingOverlayController::GetLayerActivity, CBaseAnimatingOverlayController::GetLayerSequence, CBaseAnimatingOverlayController::HasActiveLayer, CBaseAnimatingOverlayController::GatherSequences
const CAnimationLayer *__fastcall CBaseAnimatingOverlayController::GetAnimOverlay(
        const CBaseAnimatingOverlayController *const this,
        int iIndex)
{
  const CAnimationLayer *result; // rax

  result = 0;
  if ( iIndex >= 0 && iIndex < this->m_AnimOverlay.m_Vector.m_Size )
    return &this->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[iIndex];
  return result;
}


// CBaseAnimatingOverlayController::AddOverlays  (line 1464, @0x0000000002089da0, libserver.so)  // inlines: AddMultipleToTail, AssignPathIdToElement, CFieldPath, Clear, Construct<CAnimationLayer>, Element, Get, GetPathData, GrowMemory, GrowVector, Init, InsertMultipleBefore, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Resolve, Set, SetOwner, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator[]
// calls: GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CAnimationLayer::Init, CUtlVectorEmbeddedNetworkVar<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, -1>::Resolve, CUtlMemory<CAnimationLayer, int>::Grow, CAnimationLayer::CAnimationLayer (13 total)
// callers: CBaseAnimatingOverlayController::AllocateLayer, CBaseAnimatingOverlayController::SetNumAnimOverlays
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
int __fastcall CBaseAnimatingOverlayController::AddOverlays(CBaseAnimatingOverlayController *const this, int nCount)
{
  LeafCodeInfo_t *v2; // r13
  CBaseAnimatingOverlayController *v3; // rbx
  CEntityInstance *m_pObj; // r12
  void (__fastcall *v5)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *, bool *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  const CFieldPath *p_path; // r14
  __int64 v8; // rax
  void **v9; // rsi
  FlattenedSerializerHandle_t v10; // rax
  __int64 v11; // rax
  void **v12; // rsi
  CEntityInstance *v13; // rcx
  FlattenedSerializerHandle_t v14; // rax
  __int64 m_szFunction_low; // rdx
  size_t v16; // rdx
  const char *m_szFile; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  CFieldPath *m_pPaths; // rsi
  int16 v21; // cx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 m_nCount; // rax
  CEntityInstance *v27; // rdi
  ChangeAccessorFieldPathIndex_t *v28; // rdx
  ChangeAccessorFieldPathIndex_t v29; // ax
  CEntityInstance *v30; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v33; // rdi
  __int64 v34; // r12
  unsigned __int64 v35; // r13
  __int64 v36; // rdi
  CAnimationLayer *v37; // rdi
  int v39; // r12d
  int m_nAllocationCount; // eax
  int v41; // r14d
  __int64 v42; // r12
  const LeafCodeInfo_t *v43; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+8h] [rbp-E8h]
  CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *p_m_AnimOverlay; // [rsp+10h] [rbp-E0h]
  int nCounta; // [rsp+18h] [rbp-D8h]
  int m_Size; // [rsp+1Ch] [rbp-D4h]
  void (__fastcall *v48)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *, bool *); // [rsp+28h] [rbp-C8h]
  CEntityInstance *v49; // [rsp+30h] [rbp-C0h]
  ChangeAccessorFieldPathIndex_t *v50; // [rsp+30h] [rbp-C0h]
  CFieldPath *dest; // [rsp+38h] [rbp-B8h]
  void *src[2]; // [rsp+40h] [rbp-B0h] BYREF
  __int16 v53; // [rsp+50h] [rbp-A0h]
  char v54; // [rsp+52h] [rbp-9Eh]
  void *v55[2]; // [rsp+60h] [rbp-90h] BYREF
  __int16 v56; // [rsp+70h] [rbp-80h]
  char v57; // [rsp+72h] [rbp-7Eh]
  CFieldPath path; // [rsp+80h] [rbp-70h] BYREF
  LeafCodeInfo_t v59; // [rsp+A0h] [rbp-50h] BYREF

  v2 = nCount;
  v3 = this;
  p_m_AnimOverlay = &this->m_AnimOverlay;
  if ( !this->m_AnimOverlay.m_bResolved )
  {
    m_pObj = this->m_AnimOverlay.m_pOwnerEntity.m_pObj;
    this->m_AnimOverlay.m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v5 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      p_path = src;
      v5(
        src,
        g_pFlattenedSerializers,
        NetworkSerializerForEntityInstance,
        m_pObj,
        p_m_AnimOverlay,
        &v3->m_AnimOverlay.m_bIsNetworkVarExcluded);
      this = &v3->m_AnimOverlay.m_PathToVector;
      if ( &v3->m_AnimOverlay.m_PathToVector != src )
      {
        v8 = v53;
        v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v8 > 6 )
          goto LABEL_80;
        v3->m_AnimOverlay.m_PathToVector.m_nCount = v8;
        if ( v8 > 0 )
        {
          v9 = src;
          if ( v54 != 0 )
            v9 = src[0];
          memcpy(this, v9, 2 * v8);
        }
      }
    }
    else
    {
      if ( this->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
        goto LABEL_62;
      this->m_AnimOverlay.m_PathToVector.m_nCount = 0;
    }
  }
  if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(v3->m_AnimOverlay.m_pOwnerEntity.m_pObj);
  m_Size = v3->m_AnimOverlay.m_Vector.m_Size;
  if ( v2 != 0 )
  {
    v39 = v2 + m_Size;
    m_nAllocationCount = v3->m_AnimOverlay.m_Vector.m_Memory.m_nAllocationCount;
    if ( v2 + m_Size > m_nAllocationCount )
      CUtlMemory<CAnimationLayer,int>::Grow(&v3->m_AnimOverlay.m_Vector.m_Memory, v39 - m_nAllocationCount);
    v3->m_AnimOverlay.m_Vector.m_Size = v39;
    if ( v2 > 0 )
    {
      v41 = 0;
      v42 = m_Size;
      do
      {
        this = &v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[v42];
        if ( this != 0 )
          CAnimationLayer::CAnimationLayer(this);
        ++v41;
        ++v42;
      }
      while ( v2 > v41 );
    }
  }
  if ( v3->m_AnimOverlay.m_bResolved )
  {
LABEL_20:
    if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded && v3->m_AnimOverlay.m_Vector.m_Size > 0 )
    {
      m_pObj = 0;
      LODWORD(v5) = 0;
      p_m_bIsNetworkVarExcluded = &v3->m_AnimOverlay.m_bIsNetworkVarExcluded;
      nCounta = v2;
      v2 = &v59;
      dest = &v3->m_AnimOverlay.m_PathToVector;
      p_path = &path;
      goto LABEL_23;
    }
    goto LABEL_50;
  }
  m_pObj = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
  v3->m_AnimOverlay.m_bResolved = 1;
  if ( m_pObj == 0 )
  {
    if ( !v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
    {
      v3->m_AnimOverlay.m_PathToVector.m_nCount = 0;
      goto LABEL_20;
    }
LABEL_62:
    CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1>::Resolve(this);
  }
  v5 = *(*g_pFlattenedSerializers + 272LL);
  v10 = GetNetworkSerializerForEntityInstance(m_pObj);
  p_path = v55;
  v5(v55, g_pFlattenedSerializers, v10, m_pObj, p_m_AnimOverlay, &v3->m_AnimOverlay.m_bIsNetworkVarExcluded);
  this = &v3->m_AnimOverlay.m_PathToVector;
  if ( &v3->m_AnimOverlay.m_PathToVector == v55 )
    goto LABEL_20;
  v11 = v56;
  v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
  if ( v11 <= 6 )
  {
    v3->m_AnimOverlay.m_PathToVector.m_nCount = v11;
    if ( v11 > 0 )
    {
      v12 = v55;
      if ( v57 != 0 )
        v12 = v55[0];
      memcpy(this, v12, 2 * v11);
    }
    goto LABEL_20;
  }
LABEL_80:
  v3 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v59.m_nLine = 442;
    v59.m_szFile = "../../public/tier2/fieldpath.h";
    v59.m_szFunction = "Path_SetCount";
    v43 = &v59;
LABEL_77:
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      v43,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
  while ( 1 )
  {
LABEL_39:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v24, v25, v22, v23) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_42:
    v21 = v5;
LABEL_43:
    m_nCount = path.m_nCount;
    if ( path.m_nCount <= 5 )
      break;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v59.m_szFile = "../../public/tier2/fieldpath.h";
      v59.m_szFunction = "Path_AddToTail";
      v59.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v59,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
  }
  v27 = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
  ++path.m_nCount;
  v28 = (v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory + m_pObj);
  p_path->u.m_FixedPaths[m_nCount].m_nValue = v21;
  if ( v27 != 0 )
  {
    v50 = v28;
    v29.m_Value = EntityInstanceAddChangeAccessorPath(v27, p_path).m_Value;
    v28 = v50;
    v50[8].m_Value = v29.m_Value;
  }
  else
  {
    this = 0xFFFFFFFFLL;
    v28[8].m_Value = -1;
  }
  v30 = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
  if ( v30 != *&v28[4].m_Value )
    *&v28[4].m_Value = v30;
  while ( 1 )
  {
    LODWORD(v5) = v5 + 1;
    m_pObj = (m_pObj + 136);
    if ( v5 >= v3->m_AnimOverlay.m_Vector.m_Size )
      break;
LABEL_23:
    if ( !v3->m_AnimOverlay.m_bResolved )
    {
      v13 = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
      v3->m_AnimOverlay.m_bResolved = 1;
      if ( v13 != 0 )
      {
        v49 = v13;
        v48 = *(*g_pFlattenedSerializers + 272LL);
        v14 = GetNetworkSerializerForEntityInstance(v13);
        v48(v2, g_pFlattenedSerializers, v14, v49, p_m_AnimOverlay, p_m_bIsNetworkVarExcluded);
        if ( dest != v2 )
        {
          m_szFunction_low = SLOWORD(v59.m_szFunction);
          v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( m_szFunction_low > 6 )
          {
            v3 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_39;
            *&path.u.m_FixedPaths[4].m_nValue = 442;
            path.u.m_pPaths = "../../public/tier2/fieldpath.h";
            *&path.m_nCount = "Path_SetCount";
            v43 = &path;
            goto LABEL_77;
          }
          v3->m_AnimOverlay.m_PathToVector.m_nCount = m_szFunction_low;
          if ( m_szFunction_low > 0 )
          {
            v16 = 2 * m_szFunction_low;
            m_szFile = v2;
            if ( BYTE2(v59.m_szFunction) != 0 )
              m_szFile = v59.m_szFile;
            memcpy(dest, m_szFile, v16);
          }
        }
      }
      else
      {
        if ( v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_62;
        v3->m_AnimOverlay.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded )
    {
      v18 = v3->m_AnimOverlay.m_PathToVector.m_nCount;
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v18 > 6 )
        goto LABEL_80;
      path.m_nCount = v18;
      if ( v18 <= 0 )
        goto LABEL_42;
      v19 = 2 * v18;
      if ( v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = v3->m_AnimOverlay.m_PathToVector.u.m_pPaths;
      else
        m_pPaths = dest;
      __memcpy_chk(p_path, m_pPaths, v19, 24);
      v21 = v5;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_43;
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v59.m_szFile = "../../public/tier2/fieldpath.h";
        v59.m_szFunction = "Path_AddToTail";
        v59.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v59,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_39;
    }
  }
  LODWORD(v2) = nCounta;
LABEL_50:
  m_pArraySizeChangedDelegate = v3->m_AnimOverlay.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v33 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v33 - 1);
    pfn(v33);
  }
  if ( v2 > 0 )
  {
    v34 = 136LL * m_Size;
    v35 = 136 * (m_Size + (v2 - 1) + 1);
    do
    {
      v36 = v34;
      v34 += 136;
      v37 = (v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory + v36);
      v37->m_pOwner = v3;
      CAnimationLayer::Init(v37);
    }
    while ( v34 != v35 );
  }
  return m_Size;
}


// CBaseAnimatingOverlayController::RemoveOverlays  (line 1495, @0x000000000206d070, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Destruct<CAnimationLayer>, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, RemoveMultiple, Resolve, Set, ShiftElementsLeft, V_memcpy, V_memmove, memcpy, memmove, operator CEntityInstance*, operator(), operator=, operator[], ~CAnimationLayer
// calls: GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, -1>::Resolve, memmove, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CBaseAnimatingOverlayController::RemoveOverlays(
        CBaseAnimatingOverlayController *const this,
        int nCount)
{
  CEntityInstance *m_pObj; // r15
  CBaseAnimatingOverlayController *v3; // rbx
  CEntityInstance *m_Size; // r12
  LeafCodeInfo_t *v5; // r14
  const CFieldPath *p_path; // r13
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v8; // rax
  void **v9; // rsi
  int v10; // edx
  __int64 v11; // rax
  int v12; // edx
  bool v13; // zf
  FlattenedSerializerHandle_t v14; // rax
  __int64 v15; // rax
  void **v16; // rsi
  CEntityInstance *v17; // rcx
  FlattenedSerializerHandle_t v18; // rax
  __int64 m_szFunction_low; // rdx
  size_t v20; // rdx
  const char *m_szFile; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *m_pPaths; // rsi
  int16 v25; // dx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 m_nCount; // rax
  ChangeAccessorFieldPathIndex_t *v31; // rdx
  ChangeAccessorFieldPathIndex_t v32; // ax
  CEntityInstance *v33; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v36; // rdi
  const LeafCodeInfo_t *v37; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+0h] [rbp-E0h]
  CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *p_m_AnimOverlay; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v40)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *, bool *); // [rsp+18h] [rbp-C8h]
  void (__fastcall *v41)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1> *, bool *); // [rsp+20h] [rbp-C0h]
  CEntityInstance *v42; // [rsp+20h] [rbp-C0h]
  ChangeAccessorFieldPathIndex_t *v43; // [rsp+20h] [rbp-C0h]
  void **dest; // [rsp+28h] [rbp-B8h]
  void *src[2]; // [rsp+30h] [rbp-B0h] BYREF
  __int16 v46; // [rsp+40h] [rbp-A0h]
  char v47; // [rsp+42h] [rbp-9Eh]
  void *v48[2]; // [rsp+50h] [rbp-90h] BYREF
  __int16 v49; // [rsp+60h] [rbp-80h]
  char v50; // [rsp+62h] [rbp-7Eh]
  CFieldPath path; // [rsp+70h] [rbp-70h] BYREF
  LeafCodeInfo_t v52; // [rsp+90h] [rbp-50h] BYREF

  v3 = this;
  p_m_AnimOverlay = &this->m_AnimOverlay;
  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  if ( m_Size <= nCount )
    nCount = this->m_AnimOverlay.m_Vector.m_Size;
  v5 = (this->m_AnimOverlay.m_Vector.m_Size - nCount);
  p_path = nCount;
  if ( !this->m_AnimOverlay.m_bResolved )
  {
    m_pObj = this->m_AnimOverlay.m_pOwnerEntity.m_pObj;
    this->m_AnimOverlay.m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v41 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      dest = src;
      v41(
        src,
        g_pFlattenedSerializers,
        NetworkSerializerForEntityInstance,
        m_pObj,
        p_m_AnimOverlay,
        &v3->m_AnimOverlay.m_bIsNetworkVarExcluded);
      this = &v3->m_AnimOverlay.m_PathToVector;
      if ( &v3->m_AnimOverlay.m_PathToVector != src )
      {
        v8 = v46;
        v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v8 > 6 )
          goto LABEL_72;
        v3->m_AnimOverlay.m_PathToVector.m_nCount = v8;
        if ( v8 > 0 )
        {
          v9 = src;
          if ( v47 != 0 )
            v9 = src[0];
          memcpy(this, v9, 2 * v8);
        }
      }
    }
    else
    {
      if ( this->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
        goto LABEL_63;
      this->m_AnimOverlay.m_PathToVector.m_nCount = 0;
    }
  }
  if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(v3->m_AnimOverlay.m_pOwnerEntity.m_pObj);
  v10 = m_Size - 1;
  if ( v5 <= m_Size - 1 )
  {
    v11 = 136LL * v10;
    do
    {
      this = off_3FEC7F0;
      v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[v11 / 0x88]._vptr_CAnimationLayer = off_3FEC7F0;
      v11 -= 136;
    }
    while ( v11 != 136 * (v10 - (v10 - v5)) - 136 );
  }
  v12 = v3->m_AnimOverlay.m_Vector.m_Size;
  if ( v12 - v5 - p_path > 0 && p_path > 0 )
  {
    memmove(
      &v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[v5],
      &v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory[m_Size],
      136LL * (v3->m_AnimOverlay.m_Vector.m_Size - v5 - p_path));
    v12 = v3->m_AnimOverlay.m_Vector.m_Size;
  }
  v13 = !v3->m_AnimOverlay.m_bResolved;
  v3->m_AnimOverlay.m_Vector.m_Size = v12 - p_path;
  if ( !v13 )
  {
LABEL_25:
    if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded && v3->m_AnimOverlay.m_Vector.m_Size > 0 )
    {
      m_Size = 0;
      LODWORD(m_pObj) = 0;
      p_m_bIsNetworkVarExcluded = &v3->m_AnimOverlay.m_bIsNetworkVarExcluded;
      v5 = &v52;
      dest = &v3->m_AnimOverlay.m_PathToVector;
      p_path = &path;
      goto LABEL_28;
    }
    goto LABEL_54;
  }
  m_Size = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
  v3->m_AnimOverlay.m_bResolved = 1;
  if ( m_Size == 0 )
  {
    if ( !v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
    {
      v3->m_AnimOverlay.m_PathToVector.m_nCount = 0;
      goto LABEL_25;
    }
LABEL_63:
    CUtlVectorEmbeddedNetworkVar<CAnimationLayer,CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay,-1>::Resolve(this);
  }
  v5 = *(*g_pFlattenedSerializers + 272LL);
  v14 = GetNetworkSerializerForEntityInstance(m_Size);
  p_path = v48;
  (v5)(v48, g_pFlattenedSerializers, v14, m_Size, p_m_AnimOverlay, &v3->m_AnimOverlay.m_bIsNetworkVarExcluded);
  this = &v3->m_AnimOverlay.m_PathToVector;
  if ( &v3->m_AnimOverlay.m_PathToVector == v48 )
    goto LABEL_25;
  v15 = v49;
  v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
  if ( v15 <= 6 )
  {
    v3->m_AnimOverlay.m_PathToVector.m_nCount = v15;
    if ( v15 > 0 )
    {
      v16 = v48;
      if ( v50 != 0 )
        v16 = v48[0];
      memcpy(this, v16, 2 * v15);
    }
    goto LABEL_25;
  }
LABEL_72:
  v3 = &LOG_GENERAL;
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v52.m_nLine = 442;
    v52.m_szFile = "../../public/tier2/fieldpath.h";
    v52.m_szFunction = "Path_SetCount";
    v37 = &v52;
LABEL_74:
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      v37,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
  while ( 1 )
  {
LABEL_44:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v28, v29, v26, v27) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_47:
    v25 = m_pObj;
LABEL_48:
    m_nCount = path.m_nCount;
    if ( path.m_nCount <= 5 )
      break;
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v52.m_szFile = "../../public/tier2/fieldpath.h";
      v52.m_szFunction = "Path_AddToTail";
      v52.m_nLine = 425;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v52,
        "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
  }
  this = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
  ++path.m_nCount;
  p_path->u.m_FixedPaths[m_nCount].m_nValue = v25;
  v31 = (v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory + m_Size);
  if ( this != 0 )
  {
    v43 = (v3->m_AnimOverlay.m_Vector.m_Memory.m_pMemory + m_Size);
    v32.m_Value = EntityInstanceAddChangeAccessorPath(this, p_path).m_Value;
    v31 = v43;
    v43[8].m_Value = v32.m_Value;
  }
  else
  {
    v31[8].m_Value = -1;
  }
  v33 = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
  if ( v33 != *&v31[4].m_Value )
    *&v31[4].m_Value = v33;
  while ( 1 )
  {
    LODWORD(m_pObj) = m_pObj + 1;
    m_Size = (m_Size + 136);
    if ( m_pObj >= v3->m_AnimOverlay.m_Vector.m_Size )
      break;
LABEL_28:
    if ( !v3->m_AnimOverlay.m_bResolved )
    {
      v17 = v3->m_AnimOverlay.m_pOwnerEntity.m_pObj;
      v3->m_AnimOverlay.m_bResolved = 1;
      if ( v17 != 0 )
      {
        v42 = v17;
        v40 = *(*g_pFlattenedSerializers + 272LL);
        v18 = GetNetworkSerializerForEntityInstance(v17);
        v40(v5, g_pFlattenedSerializers, v18, v42, p_m_AnimOverlay, p_m_bIsNetworkVarExcluded);
        if ( dest != v5 )
        {
          m_szFunction_low = SLOWORD(v52.m_szFunction);
          v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( m_szFunction_low > 6 )
          {
            v3 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_44;
            *&path.u.m_FixedPaths[4].m_nValue = 442;
            path.u.m_pPaths = "../../public/tier2/fieldpath.h";
            *&path.m_nCount = "Path_SetCount";
            v37 = &path;
            goto LABEL_74;
          }
          v3->m_AnimOverlay.m_PathToVector.m_nCount = m_szFunction_low;
          if ( m_szFunction_low > 0 )
          {
            v20 = 2 * m_szFunction_low;
            m_szFile = v5;
            if ( BYTE2(v52.m_szFunction) != 0 )
              m_szFile = v52.m_szFile;
            memcpy(dest, m_szFile, v20);
          }
        }
      }
      else
      {
        if ( v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_63;
        v3->m_AnimOverlay.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !v3->m_AnimOverlay.m_bIsNetworkVarExcluded )
    {
      v22 = v3->m_AnimOverlay.m_PathToVector.m_nCount;
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v22 > 6 )
        goto LABEL_72;
      path.m_nCount = v22;
      if ( v22 <= 0 )
        goto LABEL_47;
      v23 = 2 * v22;
      if ( v3->m_AnimOverlay.m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = v3->m_AnimOverlay.m_PathToVector.u.m_pPaths;
      else
        m_pPaths = dest;
      __memcpy_chk(p_path, m_pPaths, v23, 24);
      v25 = m_pObj;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_48;
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v52.m_szFile = "../../public/tier2/fieldpath.h";
        v52.m_szFunction = "Path_AddToTail";
        v52.m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v52,
          "Path_AddToTail failed for read only CFieldPath");
      }
      goto LABEL_44;
    }
  }
LABEL_54:
  m_pArraySizeChangedDelegate = v3->m_AnimOverlay.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v36 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v36 - 1);
    pfn(v36);
  }
}


// CBaseAnimatingOverlayController::HasActiveLayer  (line 1521, @0x000000000206d740, libserver.so)
// calls: CBaseAnimatingOverlayController::GetAnimOverlay
// callers: CBaseAnimatingOverlay::HasActiveLayer
bool __fastcall CBaseAnimatingOverlayController::HasActiveLayer(const CBaseAnimatingOverlayController *const this)
{
  int m_Size; // r13d
  int v3; // ebx

  m_Size = this->m_AnimOverlay.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v3 = 0;
  while ( (CBaseAnimatingOverlayController::GetAnimOverlay(this, v3)->m_nFlags & 1) == 0 )
  {
    if ( ++v3 == m_Size )
      return 0;
  }
  return 1;
}


