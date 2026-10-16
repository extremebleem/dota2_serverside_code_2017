// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimatingcontroller.cpp:40
class CEntityComponentHelperFactory_CBodyComponentBaseAnimating : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CBodyComponentBaseAnimating();

	// sizeof = 1
};

// src/game/shared/baseanimatingcontroller.cpp:497
struct ClientAnimating_t {
	uint16 m_nFlags;  // +0x8
	uint16 m_nTicksSinceLastRender;  // +0xa
	ClientAnimating_t(CBaseAnimatingController *, unsigned int);

	// sizeof = 16
};

// src/game/shared/baseanimatingcontroller.cpp:2869
class CTraceFilterSkipNPCsAndPlayers : public CTraceFilterSimple {
public:

	CTraceFilterSkipNPCsAndPlayers(CTraceFilterSkipNPCsAndPlayers &);
	CTraceFilterSkipNPCsAndPlayers(const CTraceFilterSkipNPCsAndPlayers &);
	CTraceFilterSkipNPCsAndPlayers(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterSkipNPCsAndPlayers();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBodyComponentBaseAnimating::GetEntComponentInfo  (line 40, @0x0000000002064190, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CBodyComponentBaseAnimating
// strings: "CBodyComponentBaseAnimating", "CBodyComponentBaseAnimatingReferenced", "CBodyComponentBaseAnimatingReferencedPtr"
// globals: CBodyComponentBaseAnimating::s_EntComponentInfo, `guard variable for'CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating, CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating
EntComponentInfo_t *__cdecl CBodyComponentBaseAnimating::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CBodyComponentBaseAnimating::s_EntComponentInfo.m_pName != 0 )
    return &CBodyComponentBaseAnimating::s_EntComponentInfo;
  if ( `guard variable for'CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating == 0
    && __cxa_guard_acquire(&`guard variable for'CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating) != 0 )
  {
    CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating.Data1 = 1656206056;
    v1 = HashString("CBodyComponentBaseAnimating");
    CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CBodyComponentBaseAnimating", 0x3501A674u);
    CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating);
  }
  CBodyComponentBaseAnimating::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CBodyComponentBaseAnimating::s_EntComponentInfo.m_nFlags = 2;
  CBodyComponentBaseAnimating::s_EntComponentInfo.m_id = CBodyComponentBaseAnimating::GetEntComponentInfo(void)::UUID_CBodyComponentBaseAnimating;
  CBodyComponentBaseAnimating::s_EntComponentInfo.m_pName = "BodyComponentBaseAnimating";
  CBodyComponentBaseAnimating::s_EntComponentInfo.m_pCPPClassname = "CBodyComponentBaseAnimating";
  CBodyComponentBaseAnimating::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CBodyComponentBaseAnimatingReferenced";
  CBodyComponentBaseAnimating::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CBodyComponentBaseAnimatingReferencedPtr";
  return &CBodyComponentBaseAnimating::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CBodyComponentBaseAnimating  (line 40, @0x00000000020642b0, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CBodyComponentBaseAnimating::GetEntComponentInfo, CEntityComponentHelperInit_CBodyComponentSkeletonInstance, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CBodyComponentBaseAnimating::CEntityComponentHelperFactory_CBodyComponentBaseAnimating, _GLOBAL__sub_I__unity_source_files_02.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper, CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::s_bIsInitialized, CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CBodyComponentBaseAnimating()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FEDB70;
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper.m_pInfo = CBodyComponentBaseAnimating::GetEntComponentInfo();
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::s_bIsInitialized = 1;
    EntComponentInfo = CBodyComponentBaseAnimating::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CBodyComponentSkeletonInstance();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper.m_nPriority = 17407;
  }
  return &CEntityComponentHelperInit_CBodyComponentBaseAnimating(void)::componentHelper;
}


// CEntityComponentHelperFactory_CBodyComponentBaseAnimating::CEntityComponentHelperFactory_CBodyComponentBaseAnimating  (line 40, @0x0000000002064390, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CBodyComponentBaseAnimating
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CBodyComponentBaseAnimating::CEntityComponentHelperFactory_CBodyComponentBaseAnimating(
        CEntityComponentHelperFactory_CBodyComponentBaseAnimating *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CBodyComponentBaseAnimating();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CBodyComponentBaseAnimating::SetAnimationSequence  (line 51, @0x0000000002058980, libserver.so)  // inlines: ResetSequence
void __fastcall CBodyComponentBaseAnimating::SetAnimationSequence(
        CBodyComponentBaseAnimating *const this,
        HSequence hSequence)
{
  (*(this->m_animationController._vptr_CSkeletonAnimationController + 23))(
    &this->m_animationController,
    hSequence.m_Data,
    1);
}


// CBodyComponentBaseAnimating::SetAnimationSequence  (line 59, @0x0000000002059910, libserver.so)
// calls: CBodyComponent::LookupSequence
void __fastcall CBodyComponentBaseAnimating::SetAnimationSequence(
        CBodyComponentBaseAnimating *const this,
        const char *pSequenceName)
{
  HSequence v3; // eax

  v3.m_Data = CBodyComponent::LookupSequence(this, pSequenceName).m_Data;
  if ( v3.m_Data != -1 )
    (*(this->_vptr_CBodyComponent + 1))(this, v3.m_Data);
}


// CBaseAnimatingController::GetDataDescMap  (line 133, @0x00000000020589b0, libserver.so)
// globals: CBaseAnimatingController::m_DataMap
datamap_t *__fastcall CBaseAnimatingController::GetDataDescMap(CBaseAnimatingController *const this)
{
  return &CBaseAnimatingController::m_DataMap;
}


// CBaseAnimatingController::AddDatadescMetadataKeys  (line 133, @0x00000000020643b0, libserver.so)
void __fastcall CBaseAnimatingController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBaseAnimatingController::GetBaseMap  (line 133, @0x00000000020643c0, libserver.so)
datamap_t *__cdecl CBaseAnimatingController::GetBaseMap()
{
  return &CSkeletonAnimationController::m_DataMap;
}


// DataMapInit<CBaseAnimatingController>  (line 133, @0x00000000020643d0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBaseAnimatingController"
// globals: `guard variable for'DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder, CBaseAnimatingController::m_DataMap, DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder.m_pszBase = "CBaseAnimatingController";
    DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::nameHolder,
      &_dso_handle);
  }
  CBaseAnimatingController::m_DataMap.dataNumFields = 25;
  CBaseAnimatingController::m_DataMap.baseMap = &CSkeletonAnimationController::m_DataMap;
  CBaseAnimatingController::m_DataMap.dataDesc = &DataMapInit<CBaseAnimatingController>(CBaseAnimatingController *)::dataDesc[1];
  return &CBaseAnimatingController::m_DataMap;
}


// CBodyComponentBaseAnimating::GetDataDescMap  (line 171, @0x00000000020589c0, libserver.so)
// globals: CBodyComponentBaseAnimating::m_DataMap
datamap_t *__fastcall CBodyComponentBaseAnimating::GetDataDescMap(CBodyComponentBaseAnimating *const this)
{
  return &CBodyComponentBaseAnimating::m_DataMap;
}


// CBodyComponentBaseAnimating::AddDatadescMetadataKeys  (line 171, @0x0000000002064490, libserver.so)
void __fastcall CBodyComponentBaseAnimating::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBodyComponentBaseAnimating::GetBaseMap  (line 171, @0x00000000020644a0, libserver.so)
// globals: CBodyComponentSkeletonInstance::m_DataMap
datamap_t *__cdecl CBodyComponentBaseAnimating::GetBaseMap()
{
  return &CBodyComponentSkeletonInstance::m_DataMap;
}


// DataMapInit<CBodyComponentBaseAnimating>  (line 171, @0x00000000020644b0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBodyComponentBaseAnimating"
// globals: `guard variable for'DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder, CBodyComponentSkeletonInstance::m_DataMap, CBodyComponentBaseAnimating::m_DataMap, DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder) != 0 )
  {
    DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder.m_pszBase = "CBodyComponentBaseAnimating";
    DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder.m_nLenBase = 27;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::nameHolder,
      &_dso_handle);
  }
  CBodyComponentBaseAnimating::m_DataMap.dataNumFields = 1;
  CBodyComponentBaseAnimating::m_DataMap.baseMap = &CBodyComponentSkeletonInstance::m_DataMap;
  CBodyComponentBaseAnimating::m_DataMap.dataDesc = &DataMapInit<CBodyComponentBaseAnimating>(CBodyComponentBaseAnimating *)::dataDesc[1];
  return &CBodyComponentBaseAnimating::m_DataMap;
}


// CBodyComponentSkeletonInstance::GetDataDescMap  (line 175, @0x00000000020589d0, libserver.so)
// globals: CBodyComponentSkeletonInstance::m_DataMap
datamap_t *__fastcall CBodyComponentSkeletonInstance::GetDataDescMap(CBodyComponentSkeletonInstance *const this)
{
  return &CBodyComponentSkeletonInstance::m_DataMap;
}


// CBodyComponentSkeletonInstance::AddDatadescMetadataKeys  (line 175, @0x0000000002064570, libserver.so)
void __fastcall CBodyComponentSkeletonInstance::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBodyComponentSkeletonInstance::GetBaseMap  (line 175, @0x0000000002064580, libserver.so)
datamap_t *__cdecl CBodyComponentSkeletonInstance::GetBaseMap()
{
  return &CBodyComponent::m_DataMap;
}


// DataMapInit<CBodyComponentSkeletonInstance>  (line 175, @0x0000000002064590, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBodyComponentSkeletonInstance"
// globals: `guard variable for'DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder, CBodyComponentSkeletonInstance::m_DataMap, DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder) != 0 )
  {
    DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder.m_pszBase = "CBodyComponentSkeletonInstance";
    DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder.m_nLenBase = 30;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::nameHolder,
      &_dso_handle);
  }
  CBodyComponentSkeletonInstance::m_DataMap.dataNumFields = 1;
  CBodyComponentSkeletonInstance::m_DataMap.baseMap = &CBodyComponent::m_DataMap;
  CBodyComponentSkeletonInstance::m_DataMap.dataDesc = &DataMapInit<CBodyComponentSkeletonInstance>(CBodyComponentSkeletonInstance *)::dataDesc[1];
  return &CBodyComponentSkeletonInstance::m_DataMap;
}


// CBaseAnimatingController::CBaseAnimatingController  (line 180, @0x0000000002064650, libserver.so)  // inlines: CNetworkVarBase, CNetworkedQuantizedFloat, EnsureValidValue<bool>, EnsureValidValue<int>, GetEncoder, GetQuantizedFloatEncoderByIndex, Init<true>, MarkCachedSequenceDataDirty, NetworkStateChanged, NetworkVar_m_baseLayer, Set, operator=, operator=<bool>, operator=<float>, operator=<int>
// calls: CSkeletonAnimationController::CSkeletonAnimationController, CNetworkedSequenceOperation::CNetworkedSequenceOperation, FindOrCreateQuantizedFloatEncoder, CSequenceTransitioner2::CSequenceTransitioner2, CSkeletonAnimationController::~CSkeletonAnimationController, _Unwind_Resume
// callers: CSchemaClassBinding<CBaseAnimatingController>::Allocate, CSchemaClassBinding<CBaseAnimatingController>::ConstructInPlace, CSchemaClassBinding<CBaseAnimatingController>::AllocateAndCopyConstruct, CBaseAnimatingOverlayController::CBaseAnimatingOverlayController, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate
// strings: "m_flPlaybackRate"
void __fastcall CBaseAnimatingController::CBaseAnimatingController(CBaseAnimatingController *const this)
{
  uint16 QuantizedFloatEncoder; // ax
  __int64 v3; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  int (**vptr_CSkeletonAnimationController)(...); // rax
  int m_Value; // eax
  __int64 v8; // rax
  float v9; // xmm0_4
  bool v10; // [rsp+6h] [rbp-1Ah]

  CSkeletonAnimationController::CSkeletonAnimationController(this);
  this->_vptr_CSkeletonAnimationController = off_3FEDBF0;  // vptr: CBaseAnimatingController
  this->_vptr_IAnimationStateGraphOwner = &off_3FEDCF8;
  CNetworkedSequenceOperation::CNetworkedSequenceOperation(&this->m_baseLayer);
  this->m_baseLayer._vptr_CNetworkedSequenceOperation = off_3FEC810;
  QuantizedFloatEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_flPlaybackRate", 511164315, 10, 8, 0.0, 5.0);
  v3 = g_pQuantizedFloatEncoders + 32LL * QuantizedFloatEncoder;
  v4 = *(v3 + 12);
  if ( v4 >= 0.0 )
    v4 = fmaxf(*(v3 + 8), 0.0);
  this->m_flPlaybackRate.m_Value.m_nEncoder = QuantizedFloatEncoder;
  this->m_flPlaybackRate.m_Value.m_Value = v4;
  this->m_flPlaybackRate.m_Value.m_bUnflattened = v10;
  v5 = *(v3 + 12);
  if ( v4 <= v5 )
    v5 = fmaxf(*(v3 + 8), v4);
  vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
  this->m_flPlaybackRate.m_Value.m_Value = v5;
  vptr_CSkeletonAnimationController[27](this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_bClientSideAnimation.m_Value = 0;
  this->m_nNewSequenceParity.m_Value = 0;
  this->m_nResetEventsParity.m_Value = 0;
  CSequenceTransitioner2::CSequenceTransitioner2(&this->m_SequenceTransitioner);
  if ( this->m_bClientSideAnimation.m_Value )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSideAnimation.m_Value = 0;
  }
  m_Value = this->m_nNewSequenceParity.m_Value;
  this->m_bNetworkedAnimationInputsChanged = 0;
  this->m_bNotifyWhenSequenceFinished = 0;
  this->m_bEnableIK = 0;
  this->m_pIk = 0;
  this->m_iIKCounter = 0;
  this->m_flIKGroundContactTime = 0.0;
  this->m_flIKGroundMinHeight = 0.0;
  this->m_flIKGroundMaxHeight = 0.0;
  this->m_flEstIkFloor = 0.0;
  this->m_flEstIkOffset = 0.0;
  this->m_flPrevAnimTime = 0.0;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNewSequenceParity.m_Value = 0;
  }
  if ( this->m_nResetEventsParity.m_Value != 0 )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nResetEventsParity.m_Value = 0;
  }
  this->m_bSequenceFinished = 0;
  this->m_flGroundSpeed = 0.0;
  if ( this->m_flPlaybackRate.m_Value.m_Value != 1.0 )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = g_pQuantizedFloatEncoders + 32LL * this->m_flPlaybackRate.m_Value.m_nEncoder;
    v9 = *(v8 + 12);
    if ( v9 >= 1.0 )
      v9 = fmaxf(*(v8 + 8), 1.0);
    this->m_flPlaybackRate.m_Value.m_Value = v9;
  }
  this->m_bModelHasNoPoseParams = 0;
  this->m_flCachedSequenceCycleRate = -1.0;
  this->m_flCachedGroundSpeed = -1.0;
  this->m_flCachedOneMinusLastVisibleCycle = -1.0;
}


// CBaseAnimatingController::~CBaseAnimatingController  (line 225, @0x0000000002064900, libserver.so)
// calls: CSkeletonAnimationController::~CSkeletonAnimationController
// callers: CSchemaClassBinding<CBaseAnimatingController>::Deallocate, CSchemaClassBinding<CBaseAnimatingController>::DestructInPlace, CSchemaClassBinding<CBaseAnimatingOverlayController>::DestructInPlace, CSchemaClassBinding<CBaseAnimatingOverlayController>::Deallocate
void __fastcall CBaseAnimatingController::~CBaseAnimatingController(CBaseAnimatingController *const this)
{
  this->_vptr_CSkeletonAnimationController = off_3FEDBF0;  // vptr: CBaseAnimatingController
  this->_vptr_IAnimationStateGraphOwner = &off_3FEDCF8;
  CSkeletonAnimationController::~CSkeletonAnimationController(this);
}


// CBaseAnimatingController::SetSkeletonInstance  (line 229, @0x000000000208cdd0, libserver.so)
// calls: CSkeletonAnimationController::SetSkeletonInstance
void __fastcall CBaseAnimatingController::SetSkeletonInstance(
        CBaseAnimatingController *const this,
        CSkeletonInstance *pSkeletonInstance)
{
  CSkeletonAnimationController::SetSkeletonInstance(this, pSkeletonInstance);
}


// CBaseAnimatingController::Connect  (line 234, @0x0000000002059940, libserver.so)
// calls: CSequenceTransitioner2::Init
void __fastcall CBaseAnimatingController::Connect(CBaseAnimatingController *const this, CEntityInstance *pEntity)
{
  CSequenceTransitioner2::Init(&this->m_SequenceTransitioner, this);
}


// CBaseAnimatingController::AddedToEntityDatabase  (line 240, @0x00000000020589e0, libserver.so)
void __fastcall CBaseAnimatingController::AddedToEntityDatabase(
        CBaseAnimatingController *const this,
        CEntityInstance *pEntity)
{
  ;
}


// CBaseAnimatingController::Spawn  (line 249, @0x0000000002067360, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetModelData, GetValue, GetValue<bool>, InitStepHeightAdjust, _V_strcmp, operator const RuntimeClass_t*, operator[]
// calls: CNetworkedSequenceOperation::Spawn, CBaseAnimatingController::ResetSequenceInfo, CEntityKeyValues::HasValue, CSkeletonAnimationController::GetOwnerEntity, CBaseAnimatingController::UseClientSideAnimation, Warning, VariantFieldTypeName
// callers: CBaseAnimatingOverlayController::Spawn
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_20674A6, CEntityKeyValues::sm_EmptyVariant
void __fastcall CBaseAnimatingController::Spawn(
        CBaseAnimatingController *const this,
        CEntityInstance *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdx
  CSkeletonInstance *m_pSkeletonInstance; // rax
  float z; // xmm0_4
  CBaseEntity *OwnerEntity; // rax
  int m_nCount; // ecx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  __int64 v17; // rax
  const char *m_uint64; // rdx
  bool v19; // zf
  const char *v20; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  CNetworkedSequenceOperation::Spawn(&this->m_baseLayer, pEntity, m_pData, pKeyValues);
  this->m_flPrevAnimTime = 0.0;
  CBaseAnimatingController::ResetSequenceInfo(this);
  m_pSkeletonInstance = this->m_pSkeletonInstance;
  this->m_flIKGroundContactTime = 0.0;
  this->m_flIKGroundMinHeight = 0.0;
  this->m_flIKGroundMaxHeight = 0.0;
  z = m_pSkeletonInstance->m_vecOrigin.m_Value.z;
  this->m_flEstIkOffset = 0.0;
  this->m_flEstIkFloor = z;
  if ( CEntityKeyValues::HasValue(pKeyValues, 1168470865) )
  {
    OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
    if ( (*(OwnerEntity->_vptr_IHandleEntity + 43))(OwnerEntity) != 0 )
    {
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      if ( m_nCount > 0 )
      {
        m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
        for ( i = 0; m_nCount > i; ++i )
        {
          if ( m_nAllocated != 0 )
          {
            m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( m_nAllocated > 9 )
              m_pElements = pKeyValues->m_keyHashes.m_pElements;
            if ( m_pElements[i] == 1168470865 )
            {
LABEL_14:
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v14 = pKeyValues->m_keyValues.m_pElements;
              else
                v14 = 0;
              p_m_value = &v14[i].m_value;
              m_type = p_m_value->m_type;
              if ( m_type != 0 )
                goto LABEL_17;
              goto LABEL_19;
            }
          }
          else if ( *(4 * i) == 1168470865 )
          {
            goto LABEL_14;
          }
        }
      }
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
      if ( m_type != 0 )
      {
LABEL_17:
        switch ( m_type )
        {
          case 1:
            LOBYTE(v17) = p_m_value->m_float != 0.0;
            goto LABEL_20;
          case 5:
          case 37:
            v17 = p_m_value->m_int != 0;
            goto LABEL_20;
          case 6:
            LOBYTE(v17) = p_m_value->m_char;
            goto LABEL_20;
          case 26:
          case 33:
            v17 = p_m_value->m_uint64 != 0;
            goto LABEL_20;
          case 30:
            m_uint64 = p_m_value->m_uint64;
            v19 = strcmp(m_uint64, "0") == 0;
            LOBYTE(v17) = !v19;
            if ( v19 )
              goto LABEL_20;
            v19 = strcmp(m_uint64, "false") == 0;
            LOBYTE(v17) = !v19;
            if ( v19 )
              goto LABEL_20;
            v19 = strcmp(m_uint64, "no") == 0;
            LOBYTE(v17) = !v19;
            if ( v19 )
              goto LABEL_20;
            LOBYTE(v17) = 1;
            if ( strcmp(m_uint64, "1") == 0 || strcmp(m_uint64, "true") == 0 || strcmp(m_uint64, "yes") == 0 )
              goto LABEL_20;
            Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
            break;
          case 34:
            LOBYTE(v17) = p_m_value->m_float64 != 0.0;
            goto LABEL_20;
          default:
            v20 = VariantFieldTypeName(m_type);
            Warning("No conversion from %s to bool now\n", v20);
            break;
        }
      }
LABEL_19:
      LOBYTE(v17) = this->m_bClientSideAnimation.m_Value;
LABEL_20:
      CBaseAnimatingController::UseClientSideAnimation(this, v17);
    }
  }
}


// CBaseAnimatingController::Activate  (line 264, @0x0000000002059630, libserver.so)
// calls: CSkeletonAnimationController::GetOwnerEntity
// callers: CBaseAnimatingOverlayController::Activate
void __fastcall CBaseAnimatingController::Activate(
        CBaseAnimatingController *const this,
        CEntityInstance *pEntity,
        ActivateType_t activateType)
{
  CBaseEntity *OwnerEntity; // rax

  this->m_flPrevAnimTime = 0.0;
  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  (*(OwnerEntity->_vptr_IHandleEntity + 38))(OwnerEntity);
}


// CBaseAnimatingController::PostDataUpdate  (line 296, @0x00000000020596a0, libserver.so)  // inlines: DidSequenceNetworkUpdateOccur
// calls: CSkeletonAnimationController::GetOwnerEntity, CBaseEntity::MarkInterpolationLatchFlagsDirty
void __fastcall CBaseAnimatingController::PostDataUpdate(
        CBaseAnimatingController *const this,
        CEntityInstance *pEntity,
        DataUpdateType_t updateType)
{
  bool m_bSequenceChangeNetworked; // r13
  bool m_bNetworkedAnimationInputsChanged; // r15
  CBaseEntity *OwnerEntity; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rsi

  m_bSequenceChangeNetworked = this->m_baseLayer.m_bSequenceChangeNetworked;
  this->m_baseLayer.m_bSequenceChangeNetworked = 0;
  m_bNetworkedAnimationInputsChanged = this->m_bNetworkedAnimationInputsChanged;
  this->m_bNetworkedAnimationInputsChanged = 0;
  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  v7 = (*(OwnerEntity->_vptr_IHandleEntity + 43))(OwnerEntity);
  v8 = v7;
  if ( !m_bSequenceChangeNetworked && !m_bNetworkedAnimationInputsChanged )
  {
    if ( updateType != DataUpdateType_t::DATA_UPDATE_CREATED )
    {
      if ( v7 == 0 )
        return;
      goto LABEL_11;
    }
    CBaseEntity::MarkInterpolationLatchFlagsDirty(OwnerEntity, EInterpolatedVarFlagBits::LATCH_ANIMATION_BIT);
    goto LABEL_7;
  }
  CBaseEntity::MarkInterpolationLatchFlagsDirty(OwnerEntity, EInterpolatedVarFlagBits::LATCH_ANIMATION_BIT);
  if ( !m_bNetworkedAnimationInputsChanged )
  {
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  v9 = 16;
LABEL_8:
  if ( m_bSequenceChangeNetworked )
    v9 = v9 | 0x40;
  (*(this->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pSkeletonInstance, v9);
  if ( v8 != 0 )
  {
LABEL_11:
    if ( m_bSequenceChangeNetworked )
      (*(*v8 + 1784LL))(v8);
  }
}


// CBaseAnimatingController::UpdateOnRemove  (line 357, @0x0000000002084570, libserver.so)  // inlines: Purge, RemoveAll, ~CIKContext, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CUtlVectorBase<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, CUtlMemory<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, int>::Purge, CUtlMemory<ikcontextikrule_t, int>::Purge
// callers: CBaseAnimatingOverlayController::UpdateOnRemove
void __fastcall CBaseAnimatingController::UpdateOnRemove(
        CBaseAnimatingController *const this,
        CEntityInstance *pEntity)
{
  CIKContext *m_pIk; // rbx
  bool v3; // zf

  m_pIk = this->m_pIk;
  if ( m_pIk != 0 )
  {
    v3 = (m_pIk->m_ikLock.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pIk->m_ikLock.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<ikcontextikrule_t,int>::Purge(&m_pIk->m_ikLock.m_Memory);
      if ( (m_pIk->m_ikLock.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<ikcontextikrule_t,int>::Purge(&m_pIk->m_ikLock.m_Memory);
    }
    CUtlVectorBase<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>>::RemoveAll(&m_pIk->m_ikChainRule);
    if ( (m_pIk->m_ikChainRule.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>::Purge(&m_pIk->m_ikChainRule.m_Memory);
      if ( (m_pIk->m_ikChainRule.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>::Purge(&m_pIk->m_ikChainRule.m_Memory);
    }
    m_pIk->m_target.m_Size = 0;
    operator delete(m_pIk);
  }
}


// CBaseAnimatingController::OnSetDormant  (line 363, @0x00000000020589f0, libserver.so)
void __fastcall CBaseAnimatingController::OnSetDormant(
        CBaseAnimatingController *const this,
        CEntityInstance *pEntity,
        EntityDormancyType_t nPrevDormancyType,
        EntityDormancyType_t nDormancyType)
{
  ;
}


// CBaseAnimatingController::OnTeleported  (line 381, @0x0000000002064920, libserver.so)  // inlines: InitStepHeightAdjust
// calls: CIKContext::ClearTargets
// callers: CBaseAnimating::Teleport
void __fastcall CBaseAnimatingController::OnTeleported(CBaseAnimatingController *const this)
{
  CIKContext *m_pIk; // rdi
  CSkeletonInstance *m_pSkeletonInstance; // rax
  float z; // xmm0_4

  m_pIk = this->m_pIk;
  if ( m_pIk != 0 )
    CIKContext::ClearTargets(m_pIk);
  this->m_flIKGroundContactTime = 0.0;
  m_pSkeletonInstance = this->m_pSkeletonInstance;
  this->m_flIKGroundMinHeight = 0.0;
  this->m_flIKGroundMaxHeight = 0.0;
  z = m_pSkeletonInstance->m_vecOrigin.m_Value.z;
  this->m_flEstIkOffset = 0.0;
  this->m_flEstIkFloor = z;
}


// CBaseAnimatingController::UseClientSideAnimation  (line 509, @0x00000000020649d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CBaseAnimating::UseClientSideAnimation, CBaseAnimatingController::Spawn
void __fastcall CBaseAnimatingController::UseClientSideAnimation(
        CBaseAnimatingController *const this,
        bool bUseAnimation)
{
  if ( this->m_bClientSideAnimation.m_Value != bUseAnimation )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSideAnimation.m_Value = bUseAnimation;
  }
}


// CBaseAnimatingController::OnClientSideAnimationChanged  (line 518, @0x0000000002064a60, libserver.so)
void __fastcall CBaseAnimatingController::OnClientSideAnimationChanged(CBaseAnimatingController *const this)
{
  ;
}


// CBaseAnimatingController::ResetClientsideFrame  (line 554, @0x0000000002064a70, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<int>
// calls: CSkeletonAnimationController::GetOwnerEntity, CEntityInstance::IsAuthoritative, CBaseEntity::SetAnimTime, CSequenceTransitioner2::ForcePreviousSequenceIntoTransitionLayer
// callers: CBaseAnimating::ResetClientsideFrame, CBaseAnimatingController::ResetSequenceInfo
void __fastcall CBaseAnimatingController::ResetClientsideFrame(CBaseAnimatingController *const this)
{
  CBaseEntity *OwnerEntity; // rax
  float v3; // xmm1_4
  int m_Value; // eax
  int v5; // r12d
  int v6; // eax
  int v7; // r12d
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  CBaseEntity *v10; // rax
  float v11; // xmm1_4
  FnGlobalVarsWarningFunc v12; // rax
  CGlobalVars *v13; // r12
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  float v15; // [rsp+Ch] [rbp-24h]

  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  if ( !CEntityInstance::IsAuthoritative(OwnerEntity) )
  {
    v13 = gpGlobals;
    if ( gpGlobals == 0 )
    {
LABEL_19:
      CSequenceTransitioner2::ForcePreviousSequenceIntoTransitionLayer(&this->m_SequenceTransitioner, v3);
      return;
    }
LABEL_15:
    if ( !v13->m_bEnableAssertions && !v13->m_bInSimulation )
    {
      m_pfnWarningFunc = v13->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(1);
    }
    goto LABEL_19;
  }
  m_Value = this->m_nNewSequenceParity.m_Value;
  v5 = (m_Value + 1) & 7;
  if ( m_Value != v5 )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNewSequenceParity.m_Value = v5;
  }
  v6 = this->m_nResetEventsParity.m_Value;
  v7 = (v6 + 1) & 7;
  if ( v6 != v7 )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nResetEventsParity.m_Value = v7;
  }
  m_flCurrentTime = 0.0;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v12 = gpGlobals->m_pfnWarningFunc;
      if ( v12 != 0 )
        (v12)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  v15 = m_flCurrentTime;
  v10 = CSkeletonAnimationController::GetOwnerEntity(this);
  if ( CBaseEntity::SetAnimTime(v10, v15, v11, 0) == 0 )
  {
    v13 = gpGlobals;
    if ( gpGlobals == 0 )
      goto LABEL_19;
    goto LABEL_15;
  }
}


// CBaseAnimatingController::ClientSideAnimationChanged  (line 575, @0x0000000002064c00, libserver.so)
void __fastcall CBaseAnimatingController::ClientSideAnimationChanged(CBaseAnimatingController *const this)
{
  ;
}


// CBaseAnimatingController::AddToClientSideAnimationList  (line 596, @0x0000000002064c10, libserver.so)
void __fastcall CBaseAnimatingController::AddToClientSideAnimationList(CBaseAnimatingController *const this)
{
  ;
}


// CBaseAnimatingController::RemoveFromClientSideAnimationList  (line 611, @0x0000000002064c20, libserver.so)
void __fastcall CBaseAnimatingController::RemoveFromClientSideAnimationList(CBaseAnimatingController *const this)
{
  ;
}


// CBaseAnimatingController::UpdateGameAnimations  (line 660, @0x0000000002084a50, libserver.so)  // inlines: Add, AddToTail, CBatchInvalidatePhysicsRecursiveScope, CEntityHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CVProfScope, ConvertToExternalMemory, CopyConstruct<CBaseAnimating*>, Element, EnterScope, FirstEnt, GetAssignedHero, GetBool, GetElapsed, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, GetTimebaseRegister, GrowMemory, InTargetThread, IndexToIdentity, Init, IsEnabled, IsExternallyAllocated, LookupEntity, PLAT_CPU_TIME, Purge, Purge_FixedGrowable, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*, operator[], ~CBatchInvalidatePhysicsRecursiveScope, ~CMicroProfilerGuard, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVProfScope
// calls: CGameSceneNode::BatchCallsToInvalidatePhysicsRecursive, ThreadGetCurrentId, UTIL_PlayerBySlot, CVProfile::ExitScope, CUtlMemory<CBaseAnimating*, int>::Purge, CGameEntitySystem::NextEnt, CUtlMemory<CBaseAnimating*, int>::Grow, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, __stack_chk_fail, CUtlVectorBase<CBaseAnimating*, CUtlMemoryFixedGrowable<CBaseAnimating*, 512ul, int> >::~CUtlVectorBase
// callers: CSource2Server::GameFrame
// strings: "BaseAnimating::UpdateGameAnimation", "Server Animation"
void __cdecl CBaseAnimatingController::UpdateGameAnimations()
{
  __int64 v0; // rdi
  int m_enabled; // r14d
  ThreadId_t m_TargetThreadId; // r12
  unsigned __int64 v3; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  int v5; // ebx
  CBasePlayer *v6; // rax
  CEntityIdentity *v7; // rdx
  __int64 v8; // rsi
  CBasePlayer *v9; // r12
  unsigned __int16 v10; // cx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  CBaseAnimating *m_pInstance; // r12
  __int64 m_Size; // r14
  CBaseAnimating **v16; // rax
  __int64 v17; // r12
  int j; // ebx
  uint32 m_nGrowSize; // edx
  uint32 v20; // eax
  CBaseEntity *i; // rbx
  CBaseAnimating **v22; // rax
  __int64 v23; // rax
  CBaseAnimating *v24; // r12
  __int64 v25; // r14
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v27; // rax
  bool VProf_727; // [rsp+17h] [rbp-1069h]
  CUtlVectorFixedGrowable<CBaseAnimating*,512ul> workList; // [rsp+30h] [rbp-1050h] BYREF
  unsigned __int64 v30; // [rsp+1048h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( skip_update_animations.m_pParent->m_Value.m_nValue == 1 )
    return;
  CGameSceneNode::BatchCallsToInvalidatePhysicsRecursive(1);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_727 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v3 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(v0) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "BaseAnimating::UpdateGameAnimation" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "BaseAnimating::UpdateGameAnimation",
                       0,
                       "Server Animation",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v27 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v27->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v3 + __rdtsc();
  }
  workList.m_Size = 0;
  workList.m_Memory.m_pMemory = &workList.m_Memory.m_FixedMemory;
  workList.m_Memory.m_nAllocationCount = 512;
  workList.m_Memory.m_nGrowSize = 0x80000000;
  if ( dota_server_side_animation_heroesonly.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( gpGlobals->maxClients <= 0 )
      goto LABEL_27;
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = UTIL_PlayerBySlot(v5);
        v9 = v6;
        if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 140))(v6) != 0 )
        {
          if ( v9[1].m_iMaxHealth.m_Value == -1 )
          {
            v10 = 0x7FFF;
            v8 = 0x7FFF;
          }
          else
          {
            v10 = v9[1].m_iMaxHealth.m_Value & 0x7FFF;
            v8 = v10;
          }
          v11 = (v9[1].m_iMaxHealth.m_Value >> 15 << 15) | v10 & 0x7FFF;
          v7 = g_pEntitySystem;
          if ( (v11 + 2) > 1 )
          {
            v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
            if ( v7 != 0 )
            {
              v12 = v8 & 0x1FF;
              v13 = 8 * v12;
              v8 = v12 << 7;
              v7 = (v7 + v8 - v13);
              if ( v7 != 0 && v11 == v7->m_EHandle.m_Index )
              {
                m_pInstance = v7->m_pInstance;
                if ( v7->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && (m_pInstance[1].m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value & 1) != 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 218))(v7->m_pInstance) != 0 )
                {
                  m_Size = workList.m_Size;
                  if ( workList.m_Size == workList.m_Memory.m_nAllocationCount )
                    CUtlMemory<CBaseAnimating *,int>::Grow(&workList.m_Memory, 1);
                  ++workList.m_Size;
                  v16 = &workList.m_Memory.m_pMemory[m_Size];
                  if ( v16 != 0 )
                    break;
                }
              }
            }
          }
        }
        if ( gpGlobals->maxClients <= ++v5 )
          goto LABEL_25;
      }
      *v16 = m_pInstance;
      ++v5;
    }
    while ( gpGlobals->maxClients > v5 );
  }
  else
  {
    for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
          i != 0;
          i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i) )
    {
      v23 = (*(i->_vptr_IHandleEntity + 43))(i);
      v24 = v23;
      if ( v23 != 0 && (*(*v23 + 1744LL))(v23) != 0 )
      {
        v25 = workList.m_Size;
        if ( workList.m_Size == workList.m_Memory.m_nAllocationCount )
          CUtlMemory<CBaseAnimating *,int>::Grow(&workList.m_Memory, 1);
        ++workList.m_Size;
        v22 = &workList.m_Memory.m_pMemory[v25];
        if ( v22 != 0 )
          *v22 = v24;
      }
    }
  }
LABEL_25:
  v17 = 0;
  for ( j = 0; workList.m_Size > j; ++v17 )
  {
    (*(workList.m_Memory.m_pMemory[v17]->_vptr_IHandleEntity + 217))(workList.m_Memory.m_pMemory[v17], v8, v7);
    ++j;
  }
LABEL_27:
  if ( workList.m_Memory.m_nAllocationCount < 0 )
  {
    v20 = workList.m_Memory.m_nGrowSize & 0xC0000000;
LABEL_39:
    if ( v20 == 0 )
      CUtlMemory<CBaseAnimating *,int>::Purge(&workList.m_Memory);
    goto LABEL_33;
  }
  m_nGrowSize = workList.m_Memory.m_nGrowSize;
  v20 = workList.m_Memory.m_nGrowSize & 0xC0000000;
  if ( workList.m_Memory.m_pMemory == &workList.m_Memory.m_FixedMemory )
    goto LABEL_39;
  if ( workList.m_Memory.m_pMemory != 0 && v20 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    m_nGrowSize = workList.m_Memory.m_nGrowSize;
  }
  workList.m_Memory.m_nAllocationCount = 512;
  workList.m_Memory.m_pMemory = &workList.m_Memory.m_FixedMemory;
  workList.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_33:
  if ( VProf_727 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  CGameSceneNode::BatchCallsToInvalidatePhysicsRecursive(0);
}


// CBaseAnimatingController::GetAnimTimeInterval  (line 802, @0x0000000002064c30, libserver.so)  // inlines: GetAnimTime, curtime
// calls: CSkeletonAnimationController::GetOwnerEntity
// callers: CBaseAnimating::GetAnimTimeInterval
float __fastcall CBaseAnimatingController::GetAnimTimeInterval(const CBaseAnimatingController *const this)
{
  CBaseEntity *OwnerEntity; // rax
  float m_flCurrentTime; // xmm1_4
  double v4; // xmm0_8
  CGlobalVars *v5; // rbx
  float result; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v8; // xmm1_4
  CGlobalVars *v9; // rbx
  float v10; // xmm1_4
  FnGlobalVarsWarningFunc v11; // rax
  CGlobalVars *v12; // rbx
  FnGlobalVarsWarningFunc v13; // rax
  float v14; // xmm2_4
  CGlobalVars *v15; // rbx
  FnGlobalVarsWarningFunc v16; // rax
  unsigned int flAnimTime; // [rsp+Ch] [rbp-24h]
  int flAnimTimea; // [rsp+Ch] [rbp-24h]
  int flAnimTimeb; // [rsp+Ch] [rbp-24h]
  int flAnimTimec; // [rsp+Ch] [rbp-24h]

  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  m_flCurrentTime = 0.0;
  *&v4 = LODWORD(OwnerEntity->m_flAnimTime.m_Value);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        flAnimTime = LODWORD(v4);
        (m_pfnWarningFunc)(1, *&v4, 0.0);
        *&v4 = flAnimTime;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( m_flCurrentTime > *&v4 )
  {
    v9 = gpGlobals;
    v10 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v11 = gpGlobals->m_pfnWarningFunc;
        if ( v11 != 0 )
        {
          flAnimTimea = LODWORD(v4);
          (v11)(1, v4, 0.0);
          LODWORD(v4) = flAnimTimea;
        }
      }
      v10 = v9->m_flCurrentTime;
    }
    if ( (v10 - *&v4) > 0.2 )
      return 0.2;
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v13 = gpGlobals->m_pfnWarningFunc;
        if ( v13 != 0 )
        {
          flAnimTimeb = LODWORD(v4);
          v13(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          LODWORD(v4) = flAnimTimeb;
        }
      }
      v14 = v12->m_flCurrentTime;
      v8 = 0.0;
    }
    else
    {
      v8 = 0.0;
      v14 = 0.0;
    }
    if ( (v14 - *&v4) >= 0.0 )
    {
      v15 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v16 = gpGlobals->m_pfnWarningFunc;
          if ( v16 != 0 )
          {
            flAnimTimec = LODWORD(v4);
            v16(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            LODWORD(v4) = flAnimTimec;
          }
        }
        v8 = v15->m_flCurrentTime;
      }
      return v8 - *&v4;
    }
    return v8;
  }
  result = *&v4 - this->m_flPrevAnimTime;
  if ( result > 0.2 )
    return 0.2;
  v8 = 0.0;
  if ( result < 0.0 )
    return v8;
  return result;
}


// CBaseAnimatingController::GetInterpolatedTime  (line 823, @0x0000000002064df0, libserver.so)
float __fastcall CBaseAnimatingController::GetInterpolatedTime(const CBaseAnimatingController *const this)
{
  return gpGlobals->realtime;
}


// CBaseAnimatingController::AdvanceSequenceTransitioner  (line 850, @0x0000000002064e10, libserver.so)
// calls: CSequenceTransitioner2::AnimationFrameAdvance
void __fastcall CBaseAnimatingController::AdvanceSequenceTransitioner(
        CBaseAnimatingController *const this,
        double a2,
        float flAnimTime)
{
  CSequenceTransitioner2::AnimationFrameAdvance(&this->m_SequenceTransitioner, flAnimTime);
}


// CBaseAnimatingController::AnimationFrameAdvanceInternal  (line 859, @0x000000000206a240, libserver.so)  // inlines: CAnimationOperationWriter, GetClassNameAsCStr, GetClassname, GetCycle, GetModelData, GetModelPtr, Init, SequenceLoops, SetCycle, SetPrevCycle, String, operator const RuntimeClass_t*, ~CAnimationOperationWriter
// calls: CBaseAnimatingController::IsSequenceLooping, CAnimationOperationWriter::LatchAnimationOperation, CBaseAnimatingController::GetSequenceGroundSpeed, CSequenceTransitioner2::AnimationFrameAdvance, CBaseAnimatingController::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CBaseAnimatingController::GetSequenceName, CSkeletonAnimationController::GetOwnerEntity, CGlobalVarsBase::curtime, Plat_FloatTime, LoggingSystem_Log, CBaseAnimatingController::GetLastVisibleCycle
// callers: CBaseAnimatingController::AnimationFrameAdvanceManual, CBaseAnimatingController::AnimationFrameAdvance
// strings: "SV", "%s:  %f tick(%d) curtime(%f) AnimationFrameAdvanceInternal: %s : %d=[%s] : %6.4f -> %6.4f
void __fastcall CBaseAnimatingController::AnimationFrameAdvanceInternal(
        CBaseAnimatingController *const this,
        const CModel *pModel,
        float a3,
        float flCycleDelta,
        float flAnimTime)
{
  float v7; // xmm2_4
  HSequence v8; // eax
  const ResourceBindingBase_t *v9; // rcx
  const CModel *v10; // rsi
  float v11; // xmm2_4
  char v12; // bl
  float m_Value; // xmm0_4
  float v14; // xmm1_4
  CSkeletonInstance *m_pSkeletonInstance; // rax
  float v16; // xmm3_4
  CEntityInstance *m_pOwner; // rax
  float v18; // xmm1_4
  HSequence v19; // eax
  const char *SequenceName; // r13
  int v21; // r15d
  CBaseEntity *OwnerEntity; // rax
  const char *m_pAsString; // r9
  CEntityIdentity *m_pEntity; // rax
  double v25; // xmm4_8
  double v26; // xmm0_8
  unsigned int tickcount; // r12d
  double v28; // xmm0_8
  CBaseEntity *v29; // rbx
  void (__fastcall *v30)(CBaseEntity *, bool); // r12
  HSequence v31; // eax
  const ResourceBindingBase_t *v32; // rcx
  const CModel *v33; // rsi
  bool IsSequenceLooping; // al
  float LastVisibleCycle; // xmm0_4
  HSequence v36; // eax
  const ResourceBindingBase_t *m_pBinding; // rcx
  const CModel *m_pData; // rsi
  const char *v39; // [rsp+18h] [rbp-80h]
  double v40; // [rsp+20h] [rbp-78h]
  double v41; // [rsp+28h] [rbp-70h]
  double v42; // [rsp+28h] [rbp-70h]
  double v43; // [rsp+30h] [rbp-68h]
  double v44; // [rsp+30h] [rbp-68h]
  float v45; // [rsp+38h] [rbp-60h]
  double v46; // [rsp+38h] [rbp-60h]
  float v47; // [rsp+38h] [rbp-60h]
  float v48; // [rsp+38h] [rbp-60h]
  CEntityInstance *v49; // [rsp+40h] [rbp-58h] BYREF
  CAnimationOperationWriter writer; // [rsp+48h] [rbp-50h]

  v7 = a3 + this->m_baseLayer.m_flCycle.m_Value;
  if ( v7 < 0.0 )
  {
    v48 = a3 + this->m_baseLayer.m_flCycle.m_Value;
    v36.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      m_pData = m_pBinding->m_pData;
    else
      m_pData = 0;
    if ( CBaseAnimatingController::IsSequenceLooping(this, m_pData, v36) )
    {
      v12 = 1;
      v11 = v48 - v48;
    }
    else
    {
      v11 = 0.0;
      v12 = 1;
    }
  }
  else
  {
    v45 = a3 + this->m_baseLayer.m_flCycle.m_Value;
    if ( v7 < 1.0 )
    {
      v12 = 0;
      LastVisibleCycle = CBaseAnimatingController::GetLastVisibleCycle(
                           this,
                           pModel,
                           this->m_flPlaybackRate.m_Value.m_Value,
                           flCycleDelta);
      v11 = v45;
      if ( v45 > LastVisibleCycle )
      {
        this->m_bSequenceFinished = 1;
        v12 = 0;
      }
    }
    else
    {
      v8.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
      v9 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
      if ( v9 != 0 )
        v10 = v9->m_pData;
      else
        v10 = 0;
      if ( CBaseAnimatingController::IsSequenceLooping(this, v10, v8) )
        v11 = v45 - v45;
      else
        v11 = 1.0;
      this->m_bSequenceFinished = 1;
      v12 = 1;
    }
  }
  m_Value = this->m_baseLayer.m_flCycle.m_Value;
  v14 = this->m_baseLayer.m_flPrevCycle.m_Value;
  if ( v11 != m_Value || v11 != v14 )
  {
    m_pSkeletonInstance = this->m_pSkeletonInstance;
    v16 = this->m_baseLayer.m_flWeight.m_Value.m_Value;
    writer.m_pEntity = &this->m_baseLayer;
    *&writer.m_hSequence.m_Data = m_Value;
    writer.m_flPrevCycle = v16;
    m_pOwner = m_pSkeletonInstance->m_pOwner;
    *(&writer.m_pOp + 1) = v14;
    v49 = m_pOwner;
    LODWORD(writer.m_pOp) = this->m_baseLayer.m_hSequence.m_Value.m_Data;
    if ( m_Value != v14 )
      *(&writer.m_pOp + 1) = m_Value;
    if ( v11 != m_Value )
      *&writer.m_hSequence.m_Data = v11;
    CAnimationOperationWriter::LatchAnimationOperation(&v49);
    (*(this->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pSkeletonInstance, 16);
  }
  this->m_flGroundSpeed = CBaseAnimatingController::GetSequenceGroundSpeed(this, pModel);
  CSequenceTransitioner2::AnimationFrameAdvance(&this->m_SequenceTransitioner, v18);
  if ( CBaseAnimatingController::IsSequenceDebugging(this) && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v41 = this->m_flPlaybackRate.m_Value.m_Value;
    v43 = this->m_baseLayer.m_flCycle.m_Value;
    v46 = this->m_baseLayer.m_flPrevCycle.m_Value;
    v19.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    SequenceName = CBaseAnimatingController::GetSequenceName(this, v19);
    v21 = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
    m_pAsString = "";
    m_pEntity = OwnerEntity->m_pEntity;
    v25 = v41;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v39 = m_pAsString;
    v40 = v46;
    v42 = v43;
    v44 = v25;
    *&v26 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v47 = *&v26;
    tickcount = gpGlobals->tickcount;
    v28 = Plat_FloatTime(v26);
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) AnimationFrameAdvanceInternal: %s : %d=[%s] : %6.4f -> %6.4f rate %6.3f\n",
      "SV",
      tickcount,
      v39,
      v28,
      v47,
      v40,
      v42,
      v44,
      v21,
      SequenceName);
  }
  if ( v12 != 0 && this->m_bNotifyWhenSequenceFinished )
  {
    this->m_bNotifyWhenSequenceFinished = 0;
    v29 = CSkeletonAnimationController::GetOwnerEntity(this);
    v30 = *(v29->_vptr_IHandleEntity + 226);
    v31.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    v32 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( v32 != 0 )
      v33 = v32->m_pData;
    else
      v33 = 0;
    IsSequenceLooping = CBaseAnimatingController::IsSequenceLooping(this, v33, v31);
    v30(v29, IsSequenceLooping);
  }
}


// CBaseAnimatingController::AnimationFrameAdvanceManual  (line 936, @0x000000000206a650, libserver.so)  // inlines: CSkipAnimTimeSetScope, GetModelData, GetModelPtr, ModifyAnimTimeSetScope, operator const RuntimeClass_t*, ~CSkipAnimTimeSetScope
// calls: CBaseAnimatingController::GetSequenceCycleRate, CBaseAnimatingController::AnimationFrameAdvanceInternal, _Unwind_Resume
// callers: CBaseAnimating::StudioFrameAdvanceManual
__int64 __fastcall CBaseAnimatingController::AnimationFrameAdvanceManual(
        CBaseAnimatingController *const this,
        float a2,
        float flNextAnimTime,
        float flInterval)
{
  CSkeletonInstance *m_pSkeletonInstance; // r12
  const CModel **m_pBinding; // rax
  const CModel *v7; // r13
  float v8; // xmm0_4
  HSequence v9; // eax
  float SequenceCycleRate; // xmm0_4
  float v11; // xmm2_4

  m_pSkeletonInstance = this->m_pSkeletonInstance;
  m_pBinding = m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  v7 = *m_pBinding;
  if ( *m_pBinding == 0 )
    return 0;
  ++m_pSkeletonInstance->m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
  v8 = a2 - flNextAnimTime;
  this->m_flPrevAnimTime = v8;
  v9.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this, v8, flNextAnimTime, flInterval);
  SequenceCycleRate = CBaseAnimatingController::GetSequenceCycleRate(this, v7, v9);
  CBaseAnimatingController::AnimationFrameAdvanceInternal(
    this,
    v7,
    (SequenceCycleRate * this->m_flPlaybackRate.m_Value.m_Value) * flNextAnimTime,
    a2,
    v11);
  --m_pSkeletonInstance->m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
  return 1;
}


// CBaseAnimatingController::AnimationFrameAdvance  (line 959, @0x000000000206a810, libserver.so)  // inlines: CSkipAnimTimeSetScope, GetModelData, GetModelPtr, ModifyAnimTimeSetScope, operator const RuntimeClass_t*, ~CSkipAnimTimeSetScope
// calls: CModel::IsValidSequence, CBaseAnimatingController::GetSequenceCycleRate, CBaseAnimatingController::AnimationFrameAdvanceInternal, _Unwind_Resume
// callers: CBaseAnimatingOverlayController::AnimationFrameAdvance
__int64 __fastcall CBaseAnimatingController::AnimationFrameAdvance(
        CBaseAnimatingController *const this,
        double a2,
        __m128i flPrevAnimTime,
        double flNextAnimTime,
        AnimationAdvanceType_t type)
{
  CSkeletonInstance *m_pSkeletonInstance; // rbx
  const CModel **m_pBinding; // rax
  const CModel *v8; // r13
  float v9; // r14d
  float v10; // xmm3_4
  int (**vptr_CSkeletonAnimationController)(...); // rax
  HSequence v12; // eax
  __int64 result; // rax
  float SequenceCycleRate; // xmm0_4
  float v15; // xmm2_4
  float flInterval; // [rsp+Ch] [rbp-24h]

  m_pSkeletonInstance = this->m_pSkeletonInstance;
  m_pBinding = m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    v8 = *m_pBinding;
    if ( *m_pBinding != 0 )
    {
      ++m_pSkeletonInstance->m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
      v9 = COERCE_FLOAT(_mm_cvtsi128_si32(flPrevAnimTime));
      if ( this->m_flPrevAnimTime == 0.0 )
        this->m_flPrevAnimTime = *&a2;
      v10 = v9 - *&a2;
      flInterval = v9 - *&a2;
      if ( (v9 - *&a2) <= 0.2 )
      {
        if ( v10 < 0.0 || (*&flNextAnimTime = 981668463, v10 <= 0.001) )
        {
          result = 0;
LABEL_11:
          --m_pSkeletonInstance->m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
          return result;
        }
      }
      else
      {
        flInterval = 0.2;
      }
      if ( type == AnimationAdvanceType_t::ANIM_ADVANCE_CLIENT_SIDE_ANIMATING && *&a2 == 0.0 )
        flInterval = 0.0;
      vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
      this->m_flPrevAnimTime = *&a2;
      v12.m_Data = vptr_CSkeletonAnimationController[24](this, a2, 0.0, flNextAnimTime);
      if ( CModel::IsValidSequence(v8, v12) )
      {
        SequenceCycleRate = CBaseAnimatingController::GetSequenceCycleRate(this, v8);
        CBaseAnimatingController::AnimationFrameAdvanceInternal(
          this,
          v8,
          (SequenceCycleRate * this->m_flPlaybackRate.m_Value.m_Value) * flInterval,
          v9,
          v15);
      }
      result = 1;
      goto LABEL_11;
    }
  }
  return 0;
}


// CBaseAnimatingController::SelectWeightedSequence  (line 1040, @0x0000000002064e30, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: SelectWeightedSequence
// callers: CBaseAnimating::SelectWeightedSequence, CBaseAnimatingOverlayController::AddGesture
HSequence __fastcall CBaseAnimatingController::SelectWeightedSequence(
        const CBaseAnimatingController *const this,
        Activity activity)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  HSequence v5; // eax
  const ResourceBindingBase_t *v6; // rcx
  const CModel *m_pData; // rdi

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || m_pBinding->m_pData == 0 )
    return -1;
  v5.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
  v6 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v6 != 0 )
    m_pData = v6->m_pData;
  else
    m_pData = 0;
  return SelectWeightedSequence(m_pData, activity, v5);
}


// CBaseAnimatingController::SelectWeightedSequence  (line 1050, @0x0000000002064f40, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: SelectWeightedSequence
HSequence __fastcall CBaseAnimatingController::SelectWeightedSequence(
        const CBaseAnimatingController *const this,
        Activity activity,
        HSequence hCurSequence)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return SelectWeightedSequence(*m_pBinding, activity, hCurSequence);
  else
    return SelectWeightedSequence(0, activity, hCurSequence);
}


// CBaseAnimatingController::SelectWeightedSequenceFromModifiers  (line 1058, @0x0000000002064f70, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: SelectWeightedSequenceFromModifiers
// callers: CBaseAnimating::SelectWeightedSequenceFromModifiers
HSequence __fastcall CBaseAnimatingController::SelectWeightedSequenceFromModifiers(
        const CBaseAnimatingController *const this,
        Activity activity,
        const CUtlSymbol *pActivityModifiers,
        int iModifierCount)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return SelectWeightedSequenceFromModifiers(*m_pBinding, activity, pActivityModifiers, iModifierCount);
  else
    return -1;
}


// CBaseAnimatingController::SelectHeaviestSequence  (line 1074, @0x0000000002065000, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: SelectHeaviestSequence
HSequence __fastcall CBaseAnimatingController::SelectHeaviestSequence(
        const CBaseAnimatingController *const this,
        Activity activity)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return SelectHeaviestSequence(*m_pBinding, activity);
  else
    return SelectHeaviestSequence(0, activity);
}


// CBaseAnimatingController::LookupActivity  (line 1086, @0x0000000002065030, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: LookupActivity
Activity __fastcall CBaseAnimatingController::LookupActivity(
        const CBaseAnimatingController *const this,
        const char *pActivityName)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return LookupActivity(*m_pBinding, pActivityName);
  else
    return LookupActivity(0, pActivityName);
}


// CBaseAnimatingController::ResetActivityIndexes  (line 1097, @0x0000000002065060, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: ResetActivityIndexes
void __fastcall CBaseAnimatingController::ResetActivityIndexes(CBaseAnimatingController *const this)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    ResetActivityIndexes(*m_pBinding);
  else
    ResetActivityIndexes(0);
}


// CBaseAnimatingController::ResetEventIndexes  (line 1105, @0x0000000002065090, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: ResetEventIndexes
void __fastcall CBaseAnimatingController::ResetEventIndexes(CBaseAnimatingController *const this)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    ResetEventIndexes(*m_pBinding);
  else
    ResetEventIndexes(0);
}


// CBaseAnimatingController::LookupSequence  (line 1113, @0x00000000020650c0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: LookupSequence
HSequence __fastcall CBaseAnimatingController::LookupSequence(
        const CBaseAnimatingController *const this,
        const char *label)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return LookupSequence(*m_pBinding, label);
  else
    return LookupSequence(0, label);
}


// CBaseAnimatingController::GetSequenceKeyValues  (line 1123, @0x00000000020650f0, libserver.so)  // inlines: CUtlSymbolLarge, GetModelData, GetModelName, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::IsValidSequence, CModel::pSeqdesc, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromBuffer, KeyValues::deleteThis, KeyValues::operator delete, _Unwind_Resume
// callers: CBaseFlex::HandleStartGestureSceneEvent
KeyValues *__fastcall CBaseAnimatingController::GetSequenceKeyValues(
        CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel *const *m_pBinding; // rax
  const CModel *m_pData; // rdi
  const ResourceBindingBase_t *v6; // rax
  const ISequence *v7; // rax
  const char *v8; // r13
  KeyValues *v9; // rbx
  const char *m_pAsString; // rsi
  bool v11; // dl
  KeyValues *result; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || *m_pBinding == 0 || !CModel::IsValidSequence(*m_pBinding, hSequence) )
    return 0;
  m_pData = 0;
  v6 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v6 != 0 )
    m_pData = v6->m_pData;
  v7 = CModel::pSeqdesc(m_pData, hSequence);
  v8 = (*(v7->_vptr_IBaseSequence + 21))(v7);
  if ( v8 == 0 )
    return 0;
  v9 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v9, "");
  m_pAsString = "";
  if ( this->m_pSkeletonInstance->m_modelState.m_ModelName.u.m_Id != 0 )
    m_pAsString = this->m_pSkeletonInstance->m_modelState.m_ModelName.u.m_pAsString;
  v11 = KeyValues::LoadFromBuffer(v9, m_pAsString, v8, 0, 0, 0, 0);
  result = v9;
  if ( !v11 )
  {
    KeyValues::deleteThis(v9);
    return 0;
  }
  return result;
}


// CBaseAnimatingController::GetSequenceMoveYaw  (line 1150, @0x00000000020651f0, libserver.so)  // inlines: GetModelData, GetModelPtr, LengthSqr, operator const RuntimeClass_t*
// calls: GetSequenceLinearMotion, UTIL_VecToYaw
// callers: CBaseAnimating::GetSequenceMoveYaw, CBaseAnimatingController::GetGroundSpeedVelocity
float __fastcall CBaseAnimatingController::GetSequenceMoveYaw(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  CNetworkArrayBase<float,24,CBaseAnimatingController::NetworkVar_m_flPoseParameter> *p_m_flPoseParameter; // rdx
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  Vector vecReturn; // [rsp+0h] [rbp-20h] BYREF

  p_m_flPoseParameter = &this->m_flPoseParameter;
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  GetSequenceLinearMotion(m_pData, hSequence, p_m_flPoseParameter->m_Value, &vecReturn);
  if ( (((vecReturn.x * vecReturn.x) + (vecReturn.y * vecReturn.y)) + (vecReturn.z * vecReturn.z)) <= 0.0 )
    return 99999.0;
  else
    return UTIL_VecToYaw(&vecReturn);
}


// CBaseAnimatingController::GetSequenceMoveDist  (line 1173, @0x00000000020652d0, libserver.so)  // inlines: FastSqrt, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: GetSequenceLinearMotion
// callers: CBaseAnimating::GetSequenceMoveDist
float __fastcall CBaseAnimatingController::GetSequenceMoveDist(
        const CBaseAnimatingController *const this,
        const CModel *pStudioHdr,
        HSequence hSequence)
{
  Vector vecReturn; // [rsp+10h] [rbp-10h] BYREF

  GetSequenceLinearMotion(pStudioHdr, hSequence, this->m_flPoseParameter.m_Value, &vecReturn);
  return fsqrt(((vecReturn.x * vecReturn.x) + (vecReturn.y * vecReturn.y)) + (vecReturn.z * vecReturn.z));
}


// CBaseAnimatingController::GetSequenceLinearMotion  (line 1188, @0x0000000002065390, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: GetSequenceLinearMotion
// callers: CBaseAnimating::GetSequenceLinearMotion
void __fastcall CBaseAnimatingController::GetSequenceLinearMotion(
        const CBaseAnimatingController *const this,
        HSequence hSequence,
        Vector *pVec)
{
  CNetworkArrayBase<float,24,CBaseAnimatingController::NetworkVar_m_flPoseParameter> *p_m_flPoseParameter; // r8
  const CModel **m_pBinding; // rax

  p_m_flPoseParameter = &this->m_flPoseParameter;
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    GetSequenceLinearMotion(*m_pBinding, hSequence, p_m_flPoseParameter->m_Value, pVec);
  else
    GetSequenceLinearMotion(0, hSequence, p_m_flPoseParameter->m_Value, pVec);
}


// CBaseAnimatingController::GetSequenceName  (line 1201, @0x0000000002065520, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: GetSequenceName
// callers: CBaseAnimating::GetSequenceName, CBaseAnimatingController::OnNetworkSequenceChanged, CBaseAnimatingController::ResetSequenceInfo, CBaseAnimatingController::AnimationFrameAdvanceInternal, CBaseAnimatingController::SetSequence, CBaseAnimatingOverlayController::AnimationFrameAdvance, CBaseAnimatingController::DispatchAnimEvents, CBaseAnimatingOverlayController::AddLayeredSequence, CSequenceTransitioner2::AddCurrentSequenceToTransition, CSequenceTransitioner2::AnimationFrameAdvance
// strings: "Not Found!", "No model!"
const char *__fastcall CBaseAnimatingController::GetSequenceName(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel **m_pBinding; // rax

  if ( hSequence.m_Data == -1 )
    return "Not Found!";
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return GetSequenceName(*m_pBinding, hSequence);
  else
    return "No model!";
}


// CBaseAnimatingController::GetSequenceActivityName  (line 1221, @0x00000000020655c0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: GetSequenceActivityName
// callers: CBaseAnimating::GetSequenceActivityName
// strings: "Not Found!", "No model!"
const char *__fastcall CBaseAnimatingController::GetSequenceActivityName(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel **m_pBinding; // rax

  if ( hSequence.m_Data == -1 )
    return "Not Found!";
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return GetSequenceActivityName(*m_pBinding, hSequence);
  else
    return "No model!";
}


// CBaseAnimatingController::GetSequenceActivity  (line 1235, @0x0000000002065660, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: GetSequenceActivity
// callers: CBaseAnimating::GetSequenceActivity
Activity __fastcall CBaseAnimatingController::GetSequenceActivity(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel **m_pBinding; // rax

  if ( hSequence.m_Data != -1
    && (m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding) != 0
    && *m_pBinding != 0 )
  {
    return GetSequenceActivity(*m_pBinding, hSequence, 0);
  }
  else
  {
    return -1;
  }
}


// CBaseAnimatingController::FindTransitionSequence  (line 1247, @0x00000000020656f0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: FindTransitionSequence
// callers: CBaseAnimating::FindTransitionSequence
HSequence __fastcall CBaseAnimatingController::FindTransitionSequence(
        const CBaseAnimatingController *const this,
        HSequence hCurrentSequence,
        HSequence hGoalSequence,
        int *piDir)
{
  __int64 v4; // rbp
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  HSequence result; // eax
  HSequence v8; // edx
  int iDir; // [rsp+0h] [rbp-Ch] BYREF
  __int64 v10; // [rsp+4h] [rbp-8h]

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return -1;
  m_pData = m_pBinding->m_pData;
  if ( m_pBinding->m_pData == 0 )
    return -1;
  v10 = v4;
  if ( piDir != 0 )
    return FindTransitionSequence(m_pData, hCurrentSequence, hGoalSequence, piDir);
  iDir = 1;
  v8.m_Data = FindTransitionSequence(m_pData, hCurrentSequence, hGoalSequence, &iDir).m_Data;
  result.m_Data = -1;
  if ( iDir == 1 )
    return v8;
  return result;
}


// CBaseAnimatingController::IsTransitionInterruptible  (line 1266, @0x0000000002058a00, libserver.so)
bool __fastcall CBaseAnimatingController::IsTransitionInterruptible(const CBaseAnimatingController *const this)
{
  return 0;
}


// CBaseAnimatingController::GotoSequence  (line 1275, @0x00000000020657b0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: GotoSequence
bool __fastcall CBaseAnimatingController::GotoSequence(
        const CBaseAnimatingController *const this,
        HSequence hCurrentSequence,
        float flCurrentCycle,
        float flCurrentRate,
        HSequence hGoalSequence,
        HSequence *const hNextSequence,
        float *const flNextCycle,
        int *const iNextDir)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return GotoSequence(
             *m_pBinding,
             hCurrentSequence,
             flCurrentCycle,
             flCurrentRate,
             hGoalSequence,
             hNextSequence,
             flNextCycle,
             iNextDir);
  else
    return GotoSequence(
             0,
             hCurrentSequence,
             flCurrentCycle,
             flCurrentRate,
             hGoalSequence,
             hNextSequence,
             flNextCycle,
             iNextDir);
}


// CBaseAnimatingController::ResetSequenceInfo  (line 1283, @0x0000000002067150, libserver.so)  // inlines: GetBool, GetInt, GetModelData, GetModelPtr, SetSequence, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::IsSequenceDebugging, CBaseAnimatingController::ResetClientsideFrame, CBaseAnimatingController::IsValidSequence, CSkeletonAnimationController::GetOwnerEntity, CEntityDebugGameSystem::HasDebugBitsSet, DevMsg(char const*,...), LoggingSystem_IsChannelEnabled, CBaseAnimatingController::GetSequenceName, CGlobalVarsBase::curtime, Plat_FloatTime, LoggingSystem_Log, CBaseAnimatingController::GetSequenceGroundSpeed
// callers: CBaseAnimating::ResetSequenceInfo, CBaseAnimatingController::Spawn, CBaseAnimatingController::SetSequence
// strings: "ResetSequenceInfo", "SV", "%s:  %f tick(%d) curtime(%f) ResetSequenceInfo seq %d=[%s]\n"
void __fastcall CBaseAnimatingController::ResetSequenceInfo(CBaseAnimatingController *const this)
{
  CSkeletonInstance *m_pSkeletonInstance; // rax
  const CModel **m_pBinding; // rax
  const CModel *v4; // r12
  HSequence v5; // r13d
  CBaseEntity *OwnerEntity; // rax
  HSequence v7; // eax
  const char *SequenceName; // r15
  unsigned int v9; // r14d
  double v10; // xmm0_8
  unsigned int tickcount; // r13d
  double v12; // xmm0_8
  float v13; // [rsp+Ch] [rbp-34h]

  if ( ai_sequence_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
    if ( CEntityDebugGameSystem::HasDebugBitsSet(g_pEntityDebugGameSystem, OwnerEntity, 0x20000u) )
      DevMsg("ResetSequenceInfo");
  }
  this->m_flLastEventCycle = 0.0;
  this->m_bSequenceFinished = 0;
  if ( CBaseAnimatingController::IsSequenceDebugging(this) && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v7.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    SequenceName = CBaseAnimatingController::GetSequenceName(this, v7);
    v9 = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    *&v10 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v13 = *&v10;
    tickcount = gpGlobals->tickcount;
    v12 = Plat_FloatTime(v10);
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) ResetSequenceInfo seq %d=[%s]\n",
      "SV",
      tickcount,
      v9,
      v12,
      v13,
      SequenceName);
  }
  CBaseAnimatingController::ResetClientsideFrame(this);
  m_pSkeletonInstance = this->m_pSkeletonInstance;
  this->m_flGroundSpeed = 0.0;
  m_pBinding = m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    v4 = *m_pBinding;
    if ( *m_pBinding != 0 )
    {
      if ( (*(this->_vptr_CSkeletonAnimationController + 24))(this) == -1 )
        (*(this->_vptr_CSkeletonAnimationController + 23))(this, 0, 0);
      v5.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
      if ( CBaseAnimatingController::IsValidSequence(this, v5) )
        this->m_flGroundSpeed = CBaseAnimatingController::GetSequenceGroundSpeed(this, v4, v5);
    }
  }
}


// CBaseAnimatingController::ResetSequenceLooping  (line 1333, @0x00000000020657e0, libserver.so)
void __fastcall CBaseAnimatingController::ResetSequenceLooping(CBaseAnimatingController *const this)
{
  this->m_bSequenceFinished = 0;
}


// CBaseAnimatingController::OnNetworkedAnimationChanged  (line 1338, @0x00000000020657f0, libserver.so)
void __fastcall CBaseAnimatingController::OnNetworkedAnimationChanged(CBaseAnimatingController *const this)
{
  this->m_bNetworkedAnimationInputsChanged = 1;
}


// CBaseAnimatingController::OnPoseParameterChanged  (line 1343, @0x0000000002065800, libserver.so)  // inlines: OnNetworkedAnimationChanged
void __fastcall CBaseAnimatingController::OnPoseParameterChanged(CBaseAnimatingController *const this)
{
  this->m_bNetworkedAnimationInputsChanged = 1;
}


// CBaseAnimatingController::OnNetworkCycleReset  (line 1348, @0x0000000002066160, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, OnNetworkedAnimationChanged, Set, SetCycle, SetPrevCycle, curtime, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CBaseAnimatingController::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, Plat_FloatTime, LoggingSystem_Log
// callers: CBaseAnimatingController::QueuedOnNetworkCycleReset
// strings: "SV", "%s:  %f tick(%d) curtime(%f) OnNetworkCycleReset set cycle 0.0f\n"
void __fastcall CBaseAnimatingController::OnNetworkCycleReset(CBaseAnimatingController *const this)
{
  float m_Value; // xmm1_4
  float v3; // xmm0_4
  int32 m_Data; // r12d
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm4_4
  bool v8; // zf
  bool v9; // zf
  __int64 v10; // rax
  float v11; // xmm0_4
  double v12; // xmm0_8
  CGlobalVars *v13; // r13
  CGlobalVars *v14; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm1_8
  unsigned int tickcount; // r13d
  double v18; // xmm0_8
  float v19; // [rsp+0h] [rbp-30h]
  float32 v20; // [rsp+4h] [rbp-2Ch]
  float v21; // [rsp+4h] [rbp-2Ch]
  float v22; // [rsp+8h] [rbp-28h]
  float v23; // [rsp+8h] [rbp-28h]
  float v24; // [rsp+8h] [rbp-28h]
  float v25; // [rsp+8h] [rbp-28h]
  double v26; // [rsp+8h] [rbp-28h]

  if ( CBaseAnimatingController::IsSequenceDebugging(this) && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v14 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v14 = gpGlobals;
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    else
    {
      v14 = 0;
      m_flCurrentTime = 0.0;
    }
    tickcount = v14->tickcount;
    v26 = m_flCurrentTime;
    v18 = Plat_FloatTime(v12);
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) OnNetworkCycleReset set cycle 0.0f\n",
      "SV",
      tickcount,
      v18,
      v26);
  }
  m_Value = this->m_baseLayer.m_flPrevCycle.m_Value;
  v3 = 0.0;
  this->m_bNetworkedAnimationInputsChanged = 1;
  m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
  v5 = this->m_baseLayer.m_flWeight.m_Value.m_Value;
  v6 = this->m_baseLayer.m_flCycle.m_Value;
  if ( m_Value == 0.0 )
    v7 = m_Value;
  else
    v7 = 0.0;
  if ( v6 == 0.0 )
    v3 = this->m_baseLayer.m_flCycle.m_Value;
  if ( v7 == m_Value )
  {
    v8 = v6 == v3;
  }
  else
  {
    v19 = v3;
    v20 = this->m_baseLayer.m_flWeight.m_Value.m_Value;
    v22 = v7;
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v3 = v19;
    v8 = this->m_baseLayer.m_flCycle.m_Value == v19;
    v5 = v20;
    this->m_baseLayer.m_flPrevCycle.m_Value = v22;
  }
  if ( v8 )
  {
    if ( this->m_baseLayer.m_hSequence.m_Value.m_Data == m_Data )
    {
LABEL_8:
      v9 = v5 == this->m_baseLayer.m_flWeight.m_Value.m_Value;
      goto LABEL_9;
    }
  }
  else
  {
    v21 = v3;
    v23 = v5;
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = this->m_baseLayer.m_hSequence.m_Value.m_Data == m_Data;
    v5 = v23;
    this->m_baseLayer.m_flCycle.m_Value = v21;
    if ( v8 )
      goto LABEL_8;
  }
  v24 = v5;
  (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = v24;
  this->m_baseLayer.m_hSequence.m_Value.m_Data = m_Data;
  v9 = v24 == this->m_baseLayer.m_flWeight.m_Value.m_Value;
LABEL_9:
  if ( !v9 )
  {
    v25 = v5;
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v10 = g_pQuantizedFloatEncoders + 32LL * this->m_baseLayer.m_flWeight.m_Value.m_nEncoder;
    v11 = *(v10 + 12);
    if ( v25 <= v11 )
      v11 = fmaxf(*(v10 + 8), v25);
    this->m_baseLayer.m_flWeight.m_Value.m_Value = v11;
  }
}


// ControllerFromHandle  (line 1365, @0x000000000205ca80, libserver.so)  // inlines: Get, GetBaseAnimatingController, GetEntityIdentity, GetEntryIndex, GetInstance, GetSkeletonInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CBaseAnimatingController::QueuedSetPlaybackRate, CBaseAnimatingController::QueuedOnNetworkCycleReset, CBaseAnimatingController::QueuedOnNetworkSequenceChanged
// globals: CEntityHandle::gm_pEntityList
CBaseAnimatingController *__fastcall ControllerFromHandle(_DWORD *h)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx
  CBaseAnimatingController *result; // rax
  CEntityInstance *m_pInstance; // rbx
  __int64 v5; // rax

  if ( (*h + 2) <= 1 )
    return 0;
  v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*h >> 9) & 0x3F];
  if ( v1 == 0 )
    return 0;
  v2 = &v1[*h & 0x1FF];
  if ( v2 == 0 || *h != v2->m_EHandle.m_Index )
    return 0;
  m_pInstance = v2->m_pInstance;
  if ( v2->m_pInstance == 0 || (*(m_pInstance->_vptr_IHandleEntity + 43))(v2->m_pInstance) == 0 )
    return 0;
  v5 = (*(m_pInstance->_vptr_IHandleEntity + 43))(m_pInstance);
  result = (*(**(v5 + 184) + 72LL))(*(v5 + 184));
  if ( result != 0 )
    return *&result[1].m_flPoseParameter.m_Value[9];
  return result;
}


// CBaseAnimatingController::QueuedOnNetworkSequenceChanged  (line 1373, @0x0000000002066540, libserver.so)  // inlines: CEntityHandle
// calls: ControllerFromHandle, CBaseAnimatingController::OnNetworkSequenceChanged
void __fastcall CBaseAnimatingController::QueuedOnNetworkSequenceChanged(uint32 *h, HSequence hSequence)
{
  CBaseAnimatingController *v3; // rax
  CEntityHandle ha; // [rsp+0h] [rbp-20h] BYREF

  ha.m_Index = *h;
  v3 = ControllerFromHandle(&ha);
  if ( v3 != 0 )
    CBaseAnimatingController::OnNetworkSequenceChanged(v3, hSequence);
}


// CBaseAnimatingController::QueuedOnNetworkCycleReset  (line 1382, @0x00000000020663d0, libserver.so)  // inlines: CEntityHandle
// calls: ControllerFromHandle, CBaseAnimatingController::OnNetworkCycleReset
void __fastcall CBaseAnimatingController::QueuedOnNetworkCycleReset(uint32 *h)
{
  CBaseAnimatingController *v1; // rax
  CEntityHandle ha; // [rsp+0h] [rbp-10h] BYREF

  ha.m_Index = *h;
  v1 = ControllerFromHandle(&ha);
  if ( v1 != 0 )
    CBaseAnimatingController::OnNetworkCycleReset(v1);
}


// CBaseAnimatingController::QueuedSetPlaybackRate  (line 1391, @0x0000000002065810, libserver.so)  // inlines: CEntityHandle
// calls: ControllerFromHandle
void __fastcall CBaseAnimatingController::QueuedSetPlaybackRate(uint32 *h, float flPlaybackRate)
{
  CBaseAnimatingController *v2; // rax
  CEntityHandle ha; // [rsp+10h] [rbp-10h] BYREF

  ha.m_Index = *h;
  v2 = ControllerFromHandle(&ha);
  if ( v2 != 0 )
    (*(v2->_vptr_CSkeletonAnimationController + 22))(v2, flPlaybackRate);
}


// CBaseAnimatingController::OnClientSideAnimCycleReset  (line 1400, @0x0000000002065850, libserver.so)
void __fastcall CBaseAnimatingController::OnClientSideAnimCycleReset(
        CBaseAnimatingController *const this,
        CEntityInstance *pInstance,
        const int *pnNewValue)
{
  ;
}


// CBaseAnimatingController::SetPlaybackRate  (line 1423, @0x0000000002065dc0, libserver.so)  // inlines: GetEncoder, GetExactEncodeTestCase, GetForModify, GetQuantizedFloatEncoderByIndex, NetworkStateChanged, QuantizeFloat<true, true>, QuantizeInPlace, Set, curtime, operator=, operator=<float>
// calls: CSkeletonAnimationController::GetOwnerEntity, CBaseAnimatingController::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, Plat_FloatTime, LoggingSystem_Log, Warning, CNetworkedQuantizedFloat::QuantizeInPlace
// strings: "SV", "%s:  %f tick(%d) curtime(%f) SetPlaybackRate old(%6.3f) -> (raw %6.3f) quant(%6.3f) \n", "Field %s tried to quantize an out-of-range value (%f, range is %f->%f), clamping.\n", "Field %s tried to quantize an out-of-range value (%f, range is %f->%f) clamping.\n"
void __fastcall CBaseAnimatingController::SetPlaybackRate(CBaseAnimatingController *const this, float a2, float rate)
{
  bool IsSequenceDebugging; // r13
  double v5; // xmm0_8
  double v6; // xmm4_8
  double v7; // xmm3_8
  double v8; // xmm2_8
  CGlobalVars *v9; // rbx
  CGlobalVars *v10; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm1_8
  unsigned int tickcount; // ebx
  double v14; // xmm0_8
  __int64 v15; // rax
  float v16; // xmm0_4
  int (**vptr_CSkeletonAnimationController)(...); // rax
  CNetworkedQuantizedFloat *v18; // rdi
  __int64 m_nEncoder; // r12
  float m_Value; // xmm0_4
  __int64 v21; // r12
  float v22; // xmm1_4
  float v23; // xmm3_4
  CBaseEntity *OwnerEntity; // rax
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  float v28; // xmm2_4
  float32 v29; // xmm0_4
  CBaseAnimatingController *const v30; // rdi
  double v31; // [rsp+0h] [rbp-40h]
  double v32; // [rsp+8h] [rbp-38h]
  double v33; // [rsp+8h] [rbp-38h]
  float flOldRate; // [rsp+10h] [rbp-30h]
  double flOldRatea; // [rsp+10h] [rbp-30h]
  double flOldRateb; // [rsp+10h] [rbp-30h]
  double rateb; // [rsp+18h] [rbp-28h]
  double ratec; // [rsp+18h] [rbp-28h]

  flOldRate = this->m_flPlaybackRate.m_Value.m_Value;
  if ( CSkeletonAnimationController::GetOwnerEntity(this) == 0 )
  {
    if ( a2 == this->m_flPlaybackRate.m_Value.m_Value )
      return;
    IsSequenceDebugging = 0;
LABEL_15:
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v15 = g_pQuantizedFloatEncoders + 32LL * this->m_flPlaybackRate.m_Value.m_nEncoder;
    v16 = *(v15 + 12);
    if ( a2 <= v16 )
      v16 = fmaxf(*(v15 + 8), a2);
    vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
    this->m_flPlaybackRate.m_Value.m_Value = v16;
    vptr_CSkeletonAnimationController[27](this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_nEncoder = this->m_flPlaybackRate.m_Value.m_nEncoder;
    if ( m_nEncoder == 0xFFFF )
    {
      CNetworkedQuantizedFloat::QuantizeInPlace(v18);
      CBaseAnimatingController::OnNetworkCycleReset(v30);
      return;
    }
    m_Value = this->m_flPlaybackRate.m_Value.m_Value;
    v21 = g_pQuantizedFloatEncoders + 32 * m_nEncoder;
    v22 = m_Value;
    if ( (*(v21 + 30) & 1) != 0 )
      goto LABEL_23;
    v23 = *(v21 + 8);
    if ( v23 <= m_Value )
    {
      v22 = *(v21 + 12);
      if ( m_Value <= v22 )
      {
        v26 = 0;
        while ( 1 )
        {
          v27 = 1 << v26;
          if ( ((*(v21 + 29) >> 4) & (1 << v26)) != 0 )
          {
            v28 = *(v21 + 8);
            if ( (v27 & 1) == 0 )
            {
              v28 = *(v21 + 12);
              if ( (v27 & 2) == 0 )
                v28 = 0.0;
            }
            if ( m_Value == v28 )
              break;
          }
          if ( ++v26 == 3 )
          {
            v29 = ((m_Value - v23) * *(v21 + 16)) * *(v21 + 20);
            this->m_flPlaybackRate.m_Value.m_Value = v29;
            v22 = ((*(v21 + 12) - *(v21 + 8)) * v29) + *(v21 + 8);
            goto LABEL_22;
          }
        }
        this->m_flPlaybackRate.m_Value.m_Value = v28;
        v22 = v28;
        goto LABEL_23;
      }
      if ( (*(v21 + 29) & 1) == 0 )
      {
        Warning(
          "Field %s tried to quantize an out-of-range value (%f, range is %f->%f) clamping.\n",
          *v21,
          m_Value,
          v23,
          v22);
        v22 = *(v21 + 12);
      }
    }
    else
    {
      v22 = *(v21 + 8);
      if ( (*(v21 + 29) & 2) == 0 )
      {
        Warning(
          "Field %s tried to quantize an out-of-range value (%f, range is %f->%f), clamping.\n",
          *v21,
          m_Value,
          v23,
          *(v21 + 12));
        v22 = *(v21 + 8);
      }
    }
LABEL_22:
    this->m_flPlaybackRate.m_Value.m_Value = v22;
LABEL_23:
    if ( flOldRate != v22 )
    {
      OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
      v25 = (*(OwnerEntity->_vptr_IHandleEntity + 43))(OwnerEntity);
      if ( v25 != 0 )
        (*(*v25 + 1792LL))(v25);
    }
    goto LABEL_3;
  }
  IsSequenceDebugging = CBaseAnimatingController::IsSequenceDebugging(this);
  if ( a2 != this->m_flPlaybackRate.m_Value.m_Value )
    goto LABEL_15;
LABEL_3:
  if ( IsSequenceDebugging && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v6 = this->m_flPlaybackRate.m_Value.m_Value;
    v7 = a2;
    v8 = flOldRate;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v10 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v32 = flOldRate;
          flOldRatea = a2;
          rateb = v6;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v10 = gpGlobals;
          v8 = v32;
          v7 = flOldRatea;
          v6 = rateb;
        }
        else
        {
          v10 = gpGlobals;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    else
    {
      v10 = 0;
      m_flCurrentTime = 0.0;
    }
    tickcount = v10->tickcount;
    v31 = m_flCurrentTime;
    v33 = v8;
    flOldRateb = v7;
    ratec = v6;
    v14 = Plat_FloatTime(v5);
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) SetPlaybackRate old(%6.3f) -> (raw %6.3f) quant(%6.3f) \n",
      "SV",
      tickcount,
      v14,
      v31,
      v33,
      flOldRateb,
      ratec);
  }
}


// CBaseAnimatingController::OnPlaybackRateChanged  (line 1456, @0x0000000002065860, libserver.so)
void __fastcall CBaseAnimatingController::OnPlaybackRateChanged(
        CBaseAnimatingController *const this,
        CEntityInstance *pInstance,
        const CNetworkedQuantizedFloat *pNewValue)
{
  ;
}


// CBaseAnimatingController::IsSequenceDebugging  (line 1471, @0x0000000002065870, libserver.so)  // inlines: GetInt, entindex
// calls: CSkeletonAnimationController::GetOwnerEntity, CEntityInstance::GetEntityIndex
// callers: CBaseAnimating::IsSequenceDebugging, CBaseAnimatingController::SetPlaybackRate, CBaseAnimatingController::OnNetworkCycleReset, CBaseAnimatingController::OnNetworkSequenceChanged, CBaseAnimatingController::ResetSequenceInfo, CBaseAnimatingController::AnimationFrameAdvanceInternal, CBaseAnimatingController::SetSequence, CBaseAnimatingOverlayController::SetupSequences, CBaseAnimatingController::DispatchAnimEvents, CBaseAnimatingOverlayController::DispatchAnimEvents, CSequenceTransitioner2::AddCurrentSequenceToTransition, CSequenceTransitioner2::AnimationFrameAdvance
bool __fastcall CBaseAnimatingController::IsSequenceDebugging(const CBaseAnimatingController *const this)
{
  int m_nValue; // ebx
  CBaseEntity *OwnerEntity; // rax

  m_nValue = sequence_debug.m_pParent->m_Value.m_nValue;
  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  return CEntityInstance::GetEntityIndex(OwnerEntity).m_Data == m_nValue;
}


// CBaseAnimatingController::OnNetworkSequenceChanged  (line 1490, @0x0000000002066400, libserver.so)  // inlines: MarkCachedSequenceDataDirty, curtime
// calls: CBaseAnimatingController::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CBaseAnimatingController::GetSequenceName, Plat_FloatTime, LoggingSystem_Log
// callers: CBaseAnimatingController::QueuedOnNetworkSequenceChanged
// strings: "SV", "%s:  %f tick(%d) curtime(%f) OnNetworkSequenceChanged seq %d=[%s]\n"
void __fastcall CBaseAnimatingController::OnNetworkSequenceChanged(
        CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const char *SequenceName; // r15
  double v5; // xmm0_8
  CGlobalVars *v6; // r14
  CGlobalVars *v7; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double m_flCurrentTime; // xmm1_8
  unsigned int tickcount; // r14d
  double v11; // xmm0_8
  double v12; // [rsp+8h] [rbp-38h]

  if ( CBaseAnimatingController::IsSequenceDebugging(this) && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    SequenceName = CBaseAnimatingController::GetSequenceName(this, hSequence);
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v7 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v7 = gpGlobals;
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    else
    {
      v7 = 0;
      m_flCurrentTime = 0.0;
    }
    tickcount = v7->tickcount;
    v12 = m_flCurrentTime;
    v11 = Plat_FloatTime(v5);
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) OnNetworkSequenceChanged seq %d=[%s]\n",
      "SV",
      tickcount,
      hSequence.m_Data,
      v11,
      v12,
      SequenceName);
  }
  (*(this->_vptr_CSkeletonAnimationController + 23))(this, hSequence.m_Data, 1);
  this->m_flCachedSequenceCycleRate = -1.0;
  this->m_flCachedGroundSpeed = -1.0;
  this->m_flCachedOneMinusLastVisibleCycle = -1.0;
}


// CBaseAnimatingController::OnBaseLayerSequenceChanged  (line 1506, @0x0000000002066570, libserver.so)
void __fastcall CBaseAnimatingController::OnBaseLayerSequenceChanged(
        CBaseAnimatingController *const this,
        CEntityInstance *pInstance,
        const uint16 *punNewValue)
{
  ;
}


// CBaseAnimatingController::IsValidSequence  (line 1550, @0x0000000002066580, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::IsValidSequence
// callers: CBaseAnimating::IsValidSequence, CBaseAnimatingController::ResetSequenceInfo, CBaseAnimatingController::IsSequenceLooping, CBaseAnimatingController::SetSequence
bool __fastcall CBaseAnimatingController::IsValidSequence(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  return m_pBinding != 0 && *m_pBinding != 0 && CModel::IsValidSequence(*m_pBinding, hSequence);
}


// CBaseAnimatingController::SetCycle  (line 1564, @0x0000000002066600, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, Set, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// callers: CBaseAnimating::SetCycle, CBaseAnimatingController::CopyAnimationDataFrom
void __fastcall CBaseAnimatingController::SetCycle(CBaseAnimatingController *const this, float a2, float flCycle)
{
  int32 m_Data; // r12d
  bool v5; // zf
  float v6; // xmm2_4
  __int64 v7; // rax
  float v8; // xmm0_4
  float m_Value; // [rsp+Ch] [rbp-24h]
  float v11; // [rsp+Ch] [rbp-24h]

  if ( a2 != this->m_baseLayer.m_flCycle.m_Value )
  {
    m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
    m_Value = this->m_baseLayer.m_flWeight.m_Value.m_Value;
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5 = this->m_baseLayer.m_hSequence.m_Value.m_Data == m_Data;
    v6 = m_Value;
    this->m_baseLayer.m_flCycle.m_Value = a2;
    if ( !v5 )
    {
      (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v6 = m_Value;
      this->m_baseLayer.m_hSequence.m_Value.m_Data = m_Data;
    }
    if ( m_Value != this->m_baseLayer.m_flWeight.m_Value.m_Value )
    {
      v11 = v6;
      (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v7 = g_pQuantizedFloatEncoders + 32LL * this->m_baseLayer.m_flWeight.m_Value.m_nEncoder;
      v8 = *(v7 + 12);
      if ( v11 <= v8 )
        v8 = fmaxf(*(v7 + 8), v11);
      this->m_baseLayer.m_flWeight.m_Value.m_Value = v8;
    }
    (*(this->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pSkeletonInstance, 16);
  }
}


// CBaseAnimatingController::SetPrevCycle  (line 1580, @0x00000000020667e0, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, Set, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// callers: CBaseAnimating::SetPrevCycle
void __fastcall CBaseAnimatingController::SetPrevCycle(
        CBaseAnimatingController *const this,
        float a2,
        float flPrevCycle)
{
  int32 m_Data; // r13d
  double v5; // xmm2_8
  double v6; // xmm1_8
  double v7; // xmm0_8
  bool v8; // zf
  double v9; // xmm3_8
  __int64 v10; // rax
  float writer_4; // [rsp+8h] [rbp-28h]
  float writer_8; // [rsp+Ch] [rbp-24h]

  if ( a2 == this->m_baseLayer.m_flPrevCycle.m_Value )
    return;
  writer_4 = this->m_baseLayer.m_flCycle.m_Value;
  m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
  writer_8 = this->m_baseLayer.m_flWeight.m_Value.m_Value;
  (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  *&v6 = LODWORD(writer_4);
  *&v7 = LODWORD(a2);
  v8 = writer_4 == this->m_baseLayer.m_flCycle.m_Value;
  this->m_baseLayer.m_flPrevCycle.m_Value = a2;
  if ( !v8 )
  {
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = this->m_baseLayer.m_hSequence.m_Value.m_Data == m_Data;
    this->m_baseLayer.m_flCycle.m_Value = writer_4;
    if ( v8 )
      goto LABEL_4;
LABEL_12:
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_baseLayer.m_hSequence.m_Value.m_Data = m_Data;
    goto LABEL_4;
  }
  if ( this->m_baseLayer.m_hSequence.m_Value.m_Data != m_Data )
    goto LABEL_12;
LABEL_4:
  *&v9 = LODWORD(writer_8);
  if ( writer_8 != this->m_baseLayer.m_flWeight.m_Value.m_Value )
  {
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(
      &this->m_baseLayer,
      20,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v7,
      v6,
      v5,
      writer_8);
    v10 = g_pQuantizedFloatEncoders + 32LL * this->m_baseLayer.m_flWeight.m_Value.m_nEncoder;
    *&v7 = *(v10 + 12);
    if ( writer_8 <= *&v7 )
    {
      *&v7 = *(v10 + 8);
      *&v7 = fmaxf(*&v7, writer_8);
    }
    this->m_baseLayer.m_flWeight.m_Value.m_Value = *&v7;
  }
  (*(this->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pSkeletonInstance, 16, v7, v6, v5, v9);
}


// CBaseAnimatingController::SetSequenceOverride  (line 1597, @0x0000000002066990, libserver.so)
void __fastcall CBaseAnimatingController::SetSequenceOverride(
        CBaseAnimatingController *const this,
        ISequenceOverride *pOverride)
{
  ;
}


// CBaseAnimatingController::SetSequence  (line 1615, @0x000000000206a960, libserver.so)  // inlines: CAnimationOperationWriter, GetBool, GetClassNameAsCStr, GetClassname, GetInt, GetModelData, GetModelPtr, GetNameByToken, Init, MarkCachedSequenceDataDirty, SequenceLoops, SetSequence, String, curtime, operator const RuntimeClass_t*, operator!=, ~CAnimationOperationWriter
// calls: CBaseAnimatingController::IsValidSequence, CAnimationOperationWriter::LatchAnimationOperation, CBaseAnimatingController::IsSequenceDebugging, CBaseAnimatingController::IsSequenceLooping, CSkeletonAnimationController::GetOwnerEntity, CBaseEntity::SetAnimTime, CGlobalVarsBase::curtime, CSequenceTransitioner2::ForcePreviousSequenceIntoTransitionLayer, LoggingSystem_IsChannelEnabled, Plat_FloatTime, LoggingSystem_Log, CBaseAnimatingController::ResetSequenceInfo (16 total)
// strings: "SV", "%s:  %f tick(%d) curtime(%f) SetSequence(%s) final cycle %6.4f\n", "UNCHANGED", "preserve_cycle", "%s:  %f tick(%d) curtime(%f) SetSequence(%s) seq %d=[%s] %s\n", "ResetSequence : %s: %s -> %s\n"
// globals: s_SequenceBehavior, tokenset_t<SetSequenceBehavior_t>::GetNameByToken(SetSequenceBehavior_t)::unknown
void __fastcall CBaseAnimatingController::SetSequence(
        CBaseAnimatingController *const this,
        HSequence hSequence,
        SetSequenceBehavior_t behavior)
{
  CEntityInstance *m_pOwner; // rdx
  int32 m_Data; // eax
  float m_Value; // xmm0_4
  int v9; // eax
  bool IsSequenceDebugging; // r14
  CSkeletonInstance *m_pSkeletonInstance; // rax
  CEntityInstance *v12; // rdx
  float v13; // xmm0_4
  float v14; // xmm0_4
  const CModel **m_pBinding; // rax
  const CModel *v16; // rsi
  HSequence v17; // eax
  const ResourceBindingBase_t *v18; // rcx
  const CModel *m_pData; // rsi
  char v20; // r15
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v22; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *v24; // rax
  float v25; // xmm1_4
  float v26; // xmm1_4
  CBaseEntity *v27; // rax
  __int64 v28; // r12
  double v29; // xmm0_8
  double v30; // xmm2_8
  const tokenset_t<SetSequenceBehavior_t> *v31; // rax
  const char *v32; // rbx
  CGlobalVars *v33; // r12
  CGlobalVars *v34; // rax
  FnGlobalVarsWarningFunc v35; // rax
  double v36; // xmm1_8
  unsigned int v37; // r12d
  double v38; // xmm0_8
  const char *v39; // r15
  __m128 v40; // xmm0
  double v41; // xmm0_8
  const char *v42; // rax
  const tokenset_t<SetSequenceBehavior_t> *v43; // rax
  __m128 v44; // xmm0
  double v45; // xmm0_8
  CBaseEntity *OwnerEntity; // rax
  const char *SequenceName; // r15
  HSequence v48; // eax
  const char *v49; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *m_pEntity; // rcx
  double v52; // [rsp+18h] [rbp-88h]
  const char *v53; // [rsp+20h] [rbp-80h]
  double v54; // [rsp+28h] [rbp-78h]
  const char *v55; // [rsp+28h] [rbp-78h]
  unsigned int v56; // [rsp+30h] [rbp-70h]
  unsigned int tickcount; // [rsp+30h] [rbp-70h]
  double v58; // [rsp+38h] [rbp-68h]
  const char *v59; // [rsp+38h] [rbp-68h]
  const char *name; // [rsp+38h] [rbp-68h]
  bool bNewSequenceLoops; // [rsp+40h] [rbp-60h]
  bool bNeedResetSequence; // [rsp+48h] [rbp-58h]
  float bNeedResetSequencea; // [rsp+48h] [rbp-58h]
  double bNeedResetSequenceb; // [rsp+48h] [rbp-58h]
  double bNeedResetSequencec; // [rsp+48h] [rbp-58h]
  CAnimationOperationWriter writer; // [rsp+50h] [rbp-50h] BYREF

  if ( !CBaseAnimatingController::IsValidSequence(this, hSequence) )
  {
    if ( this != 0 )
      m_pOwner = this->m_pSkeletonInstance->m_pOwner;
    else
      m_pOwner = 0;
    writer.m_pOp = &this->m_baseLayer;
    m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
    m_Value = this->m_baseLayer.m_flWeight.m_Value.m_Value;
    writer.m_pEntity = m_pOwner;
    writer.m_flWeight = m_Value;
    writer.m_hSequence.m_Data = m_Data;
    if ( m_Data != -1 )
      writer.m_hSequence.m_Data = -1;
    this->m_flGroundSpeed = 0.0;
    writer.m_flPrevCycle = 0.0;
    writer.m_flCycle = 0.0;
    CAnimationOperationWriter::LatchAnimationOperation(&writer);
    return;
  }
  v9 = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
  bNeedResetSequence = hSequence.m_Data != v9;
  if ( hSequence.m_Data != v9 )
  {
    this->m_flCachedSequenceCycleRate = -1.0;
    behavior = SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE;
    this->m_flCachedGroundSpeed = -1.0;
    this->m_flCachedOneMinusLastVisibleCycle = -1.0;
  }
  IsSequenceDebugging = CBaseAnimatingController::IsSequenceDebugging(this);
  m_pSkeletonInstance = this->m_pSkeletonInstance;
  v12 = m_pSkeletonInstance->m_pOwner;
  writer.m_flWeight = this->m_baseLayer.m_flWeight.m_Value.m_Value;
  v13 = this->m_baseLayer.m_flCycle.m_Value;
  writer.m_pOp = &this->m_baseLayer;
  writer.m_flCycle = v13;
  v14 = this->m_baseLayer.m_flPrevCycle.m_Value;
  writer.m_pEntity = v12;
  LODWORD(v12) = this->m_baseLayer.m_hSequence.m_Value.m_Data;
  writer.m_flPrevCycle = v14;
  writer.m_hSequence.m_Data = v12;
  if ( behavior != SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE )
  {
    if ( ai_sequence_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
      if ( CEntityDebugGameSystem::HasDebugBitsSet(g_pEntityDebugGameSystem, OwnerEntity, 0x20000u) )
      {
        SequenceName = CBaseAnimatingController::GetSequenceName(this, hSequence);
        v48.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
        v49 = CBaseAnimatingController::GetSequenceName(this, v48);
        m_pAsString = "";
        m_pEntity = this->m_pSkeletonInstance->m_pOwner->m_pEntity;
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        DevMsg("ResetSequence : %s: %s -> %s\n", m_pAsString, v49, SequenceName);
      }
      m_pSkeletonInstance = this->m_pSkeletonInstance;
    }
    m_pBinding = m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      v16 = *m_pBinding;
    else
      v16 = 0;
    bNewSequenceLoops = CBaseAnimatingController::IsSequenceLooping(this, v16, hSequence);
    v17.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    v18 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( v18 != 0 )
      m_pData = v18->m_pData;
    else
      m_pData = 0;
    v20 = 1;
    if ( CBaseAnimatingController::IsSequenceLooping(this, m_pData, v17) && bNewSequenceLoops )
    {
      this->m_bSequenceFinished = 0;
      v20 = 0;
      behavior = SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE;
    }
    if ( IsSequenceDebugging && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v42 = "UNCHANGED";
      if ( bNeedResetSequence )
        v42 = "changed";
      v55 = v42;
      v53 = CBaseAnimatingController::GetSequenceName(this, hSequence);
      if ( behavior != SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE )
      {
        v43 = s_SequenceBehavior;
        while ( 1 )
        {
          ++v43;
          name = v43->name;
          if ( v43->name == 0 )
            break;
          if ( behavior == v43->token )
            goto LABEL_69;
        }
        name = tokenset_t<SetSequenceBehavior_t>::GetNameByToken(SetSequenceBehavior_t)const::unknown[0];
      }
      else
      {
        name = "preserve_cycle";
      }
LABEL_69:
      v44.m128_f32[0] = CGlobalVarsBase::curtime(gpGlobals, 0);
      v44.m128_u64[0] = _mm_unpacklo_ps(v44, v44).m128_u64[0];
      v52 = v44.m128_f32[0];
      tickcount = gpGlobals->tickcount;
      v45 = Plat_FloatTime(*v44.m128_u64);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "%s:  %f tick(%d) curtime(%f) SetSequence(%s) seq %d=[%s] %s\n",
        "SV",
        tickcount,
        name,
        v45,
        v52,
        hSequence.m_Data,
        v53,
        v55);
    }
    if ( hSequence.m_Data != writer.m_hSequence.m_Data )
      writer.m_hSequence = hSequence;
    if ( behavior == SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE )
    {
      writer.m_flPrevCycle = 0.0;
      writer.m_flCycle = 0.0;
    }
  }
  else
  {
    if ( IsSequenceDebugging && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v39 = "changed";
      if ( !bNeedResetSequence )
        v39 = "UNCHANGED";
      v59 = CBaseAnimatingController::GetSequenceName(this, hSequence);
      v40.m128_f32[0] = CGlobalVarsBase::curtime(gpGlobals, 0);
      v40.m128_u64[0] = _mm_unpacklo_ps(v40, v40).m128_u64[0];
      v54 = v40.m128_f32[0];
      v56 = gpGlobals->tickcount;
      v41 = Plat_FloatTime(*v40.m128_u64);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "%s:  %f tick(%d) curtime(%f) SetSequence(%s) seq %d=[%s] %s\n",
        "SV",
        v56,
        "preserve_cycle",
        v41,
        v54,
        hSequence.m_Data,
        v59,
        v39);
    }
    if ( hSequence.m_Data != writer.m_hSequence.m_Data )
      writer.m_hSequence = hSequence;
    v20 = bNeedResetSequence;
  }
  CAnimationOperationWriter::LatchAnimationOperation(&writer);
  if ( v20 != 0 )
  {
    CBaseAnimatingController::ResetSequenceInfo(this);
    if ( !bNeedResetSequence )
      goto LABEL_40;
  }
  else
  {
    if ( !bNeedResetSequence )
      goto LABEL_40;
    m_flCurrentTime = 0.0;
    v22 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v22->m_flCurrentTime;
    }
    bNeedResetSequencea = m_flCurrentTime;
    v24 = CSkeletonAnimationController::GetOwnerEntity(this);
    if ( CBaseEntity::SetAnimTime(v24, bNeedResetSequencea, v25, 0) == 0 )
    {
      CGlobalVarsBase::curtime(gpGlobals, 0);
      CSequenceTransitioner2::ForcePreviousSequenceIntoTransitionLayer(&this->m_SequenceTransitioner, v26);
    }
  }
  v27 = CSkeletonAnimationController::GetOwnerEntity(this);
  v28 = (*(v27->_vptr_IHandleEntity + 43))(v27);
  (*(this->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pSkeletonInstance, 64);
  if ( v28 != 0 )
    (*(*v28 + 1784LL))(v28);
LABEL_40:
  if ( IsSequenceDebugging && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v30 = this->m_baseLayer.m_flCycle.m_Value;
    if ( behavior != SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE )
    {
      v31 = s_SequenceBehavior;
      while ( 1 )
      {
        ++v31;
        v32 = v31->name;
        if ( v31->name == 0 )
          break;
        if ( behavior == v31->token )
          goto LABEL_47;
      }
      v32 = tokenset_t<SetSequenceBehavior_t>::GetNameByToken(SetSequenceBehavior_t)const::unknown[0];
    }
    else
    {
      v32 = "preserve_cycle";
    }
LABEL_47:
    v33 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v34 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v35 = gpGlobals->m_pfnWarningFunc;
        if ( v35 != 0 )
        {
          bNeedResetSequenceb = v30;
          v35(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v34 = gpGlobals;
          v30 = bNeedResetSequenceb;
        }
        else
        {
          v34 = gpGlobals;
        }
      }
      v36 = v33->m_flCurrentTime;
    }
    else
    {
      v34 = 0;
      v36 = 0.0;
    }
    v37 = v34->tickcount;
    v58 = v36;
    bNeedResetSequencec = v30;
    v38 = Plat_FloatTime(v29);
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) SetSequence(%s) final cycle %6.4f\n",
      "SV",
      v37,
      v32,
      v38,
      v58,
      bNeedResetSequencec);
  }
}


// CBaseAnimatingController::SequenceDuration  (line 1754, @0x00000000020669a0, libserver.so)  // inlines: GetDebugName
// calls: CModel::FirstSequence, CModel::IsValidSequence, DevWarning, CSkeletonAnimationController::GetOwnerEntity, CEntityIdentity::GetDebugName
// callers: CBaseAnimatingController::SequenceDuration
// strings: "CBaseAnimatingController::SequenceDuration( %d ) out of range\n", "CBaseAnimatingController::SequenceDuration( %d ) NULL CModel on %s!\n"
float __fastcall CBaseAnimatingController::SequenceDuration(
        const CBaseAnimatingController *const this,
        const CModel *pModel,
        HSequence hSequence)
{
  CBaseEntity *OwnerEntity; // rax
  const char *DebugName; // rax

  if ( pModel != 0 )
  {
    if ( CModel::FirstSequence(pModel).m_Data == -1 )
    {
      return 0.1;
    }
    else if ( CModel::IsValidSequence(pModel, hSequence) )
    {
      return (*(*g_pAnimationSystem + 168LL))(g_pAnimationSystem, pModel, hSequence.m_Data, &this->m_flPoseParameter);
    }
    else
    {
      DevWarning(&loc_2, "CBaseAnimatingController::SequenceDuration( %d ) out of range\n", hSequence.m_Data);
      return 0.1;
    }
  }
  else
  {
    OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
    DebugName = CEntityIdentity::GetDebugName(OwnerEntity->m_pEntity);
    DevWarning(2, "CBaseAnimatingController::SequenceDuration( %d ) NULL CModel on %s!\n", hSequence.m_Data, DebugName);
    return 0.1;
  }
}


// CBaseAnimatingController::GetSequenceCycleRate  (line 1777, @0x0000000002066a90, libserver.so)
// calls: CModel::IsValidSequence
// callers: CBaseAnimating::GetSequenceCycleRate, CAnimationLayer::AnimationFrameAdvance, CBaseAnimatingController::GetOneMinusLastVisibleCycle, CBaseAnimatingController::GetSequenceCycleRate, CBaseAnimatingController::GetInstantaneousVelocity, CBaseAnimatingController::GetIntervalMovement, CBaseAnimatingController::AnimationFrameAdvanceManual, CSequenceTransitioner2::AddCurrentSequenceToTransition, CSequenceTransitioner2::AnimationFrameAdvance
float __fastcall CBaseAnimatingController::GetSequenceCycleRate(
        const CBaseAnimatingController *const this,
        const CModel *pModel,
        HSequence hSequence)
{
  if ( pModel != 0 && CModel::IsValidSequence(pModel, hSequence) )
    return (*(*g_pAnimationSystem + 144LL))(g_pAnimationSystem, pModel, hSequence.m_Data, &this->m_flPoseParameter);
  else
    return 0.0;
}


// CBaseAnimatingController::GetLastVisibleCycle  (line 1788, @0x0000000002066f20, libserver.so)
// calls: CBaseAnimatingController::GetOneMinusLastVisibleCycle
float __fastcall CBaseAnimatingController::GetLastVisibleCycle(
        const CBaseAnimatingController *const this,
        const CModel *pModel,
        HSequence hSequence,
        float flPlaybackRate)
{
  return 1.0 - (flPlaybackRate * CBaseAnimatingController::GetOneMinusLastVisibleCycle(this, pModel, hSequence));
}


// CBaseAnimatingController::GetOneMinusLastVisibleCycle  (line 1793, @0x0000000002066df0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetModelData, GetModelPtr, GetSequenceCycleRate, String, operator const RuntimeClass_t*
// calls: CModel::IsValidSequence, DevWarning, CModel::pSeqdesc, CBaseAnimatingController::GetSequenceCycleRate
// callers: CBaseAnimatingController::GetLastVisibleCycle
// strings: "CBaseAnimatingController::LastVisibleCycle( %d ) on %s!\n", "CBaseAnimatingController::LastVisibleCycle( %d ) NULL pstudiohdr on %s!\n"
float __fastcall CBaseAnimatingController::GetOneMinusLastVisibleCycle(
        const CBaseAnimatingController *const this,
        const CModel *pModel,
        HSequence hSequence)
{
  const char *v6; // rcx
  CEntityIdentity *v7; // rax
  const char *m_pAsString; // rcx
  CEntityIdentity *m_pEntity; // rax
  const ISequence *v11; // rax
  const ISequence *v12; // rax
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rsi
  float v15; // [rsp+Ch] [rbp-24h]

  if ( hSequence.m_Data == -1 )
    return 0.0;
  if ( pModel == 0 )
  {
    m_pAsString = "";
    m_pEntity = this->m_pSkeletonInstance->m_pOwner->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    DevWarning(
      2,
      "CBaseAnimatingController::LastVisibleCycle( %d ) NULL pstudiohdr on %s!\n",
      hSequence.m_Data,
      m_pAsString);
    return 0.0;
  }
  if ( !CModel::IsValidSequence(pModel, hSequence) )
  {
    v6 = "";
    v7 = this->m_pSkeletonInstance->m_pOwner->m_pEntity;
    if ( v7->m_designerName.u.m_Id != 0 )
      v6 = v7->m_designerName.u.m_pAsString;
    DevWarning(2, "CBaseAnimatingController::LastVisibleCycle( %d ) on %s!\n", hSequence.m_Data, v6);
    return 0.0;
  }
  v11 = CModel::pSeqdesc(pModel, hSequence);
  if ( (*(v11->_vptr_IBaseSequence + 13))(v11) != 0 )
    return 0.0;
  v12 = CModel::pSeqdesc(pModel, hSequence);
  v15 = (*(v12->_vptr_IBaseSequence + 42))(v12);
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  return CBaseAnimatingController::GetSequenceCycleRate(this, m_pData, hSequence) * v15;
}


// CBaseAnimatingController::GetLastVisibleCycle  (line 1820, @0x0000000002066f50, libserver.so)  // inlines: GetLastVisibleCycle, GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::GetOneMinusLastVisibleCycle
// callers: CBaseAnimating::GetLastVisibleCycle
float __fastcall CBaseAnimatingController::GetLastVisibleCycle(
        const CBaseAnimatingController *const this,
        HSequence hSequence,
        float a3,
        float flPlaybackRate)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rsi

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  return 1.0 - (a3 * CBaseAnimatingController::GetOneMinusLastVisibleCycle(this, m_pData, hSequence));
}


// CBaseAnimatingController::GetSequenceGroundSpeed  (line 1825, @0x0000000002067030, libserver.so)  // inlines: FastSqrt, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CModel::IsValidSequence
// callers: CBaseAnimating::GetSequenceGroundSpeed, CBaseAnimatingController::ResetSequenceInfo, CBaseAnimatingController::GetSequenceGroundSpeed
float __fastcall CBaseAnimatingController::GetSequenceGroundSpeed(
        const CBaseAnimatingController *const this,
        const CModel *pModel,
        HSequence hSequence)
{
  float result; // xmm0_4
  double v7; // xmm0_8
  float v8; // xmm4_4
  Vector deltaPos; // [rsp+10h] [rbp-30h] BYREF

  if ( pModel == 0 || !CModel::IsValidSequence(pModel, hSequence) )
    return 0.0;
  v7 = (*(*g_pAnimationSystem + 184LL))(
         g_pAnimationSystem,
         pModel,
         hSequence.m_Data,
         &this->m_flPoseParameter,
         &deltaPos);
  v8 = *&v7;
  result = 0.0;
  if ( v8 > 0.0 )
    return fsqrt(((deltaPos.x * deltaPos.x) + (deltaPos.y * deltaPos.y)) + (deltaPos.z * deltaPos.z)) / v8;
  return result;
}


// CBaseAnimatingController::GetSequenceCycleRate  (line 1851, @0x0000000002067640, libserver.so)  // inlines: GetBool, GetInt
// calls: CBaseAnimatingController::GetSequenceCycleRate
// callers: CBaseAnimatingController::AnimationFrameAdvance
float __fastcall CBaseAnimatingController::GetSequenceCycleRate(
        const CBaseAnimatingController *const this,
        const CModel *pModel)
{
  HSequence v4; // eax
  float result; // xmm0_4

  if ( r_cacheSequenceData.m_pParent->m_Value.m_nValue == 0
    || !this->m_bModelHasNoPoseParams
    || (result = this->m_flCachedSequenceCycleRate) == -1.0 )
  {
    v4.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    result = CBaseAnimatingController::GetSequenceCycleRate(this, pModel, v4);
    this->m_flCachedSequenceCycleRate = result;
  }
  return result;
}


// CBaseAnimatingController::GetLastVisibleCycle  (line 1878, @0x00000000020676b0, libserver.so)  // inlines: GetBool, GetInt
// calls: CBaseAnimatingController::GetOneMinusLastVisibleCycle
// callers: CBaseAnimatingController::AnimationFrameAdvanceInternal
float __fastcall CBaseAnimatingController::GetLastVisibleCycle(
        const CBaseAnimatingController *const this,
        const CModel *pModel,
        float a3,
        float flPlaybackRate)
{
  HSequence v7; // eax
  float OneMinusLastVisibleCycle; // xmm0_4
  float flPlaybackRatea; // [rsp+Ch] [rbp-14h]

  if ( r_cacheSequenceData.m_pParent->m_Value.m_nValue == 0
    || !this->m_bModelHasNoPoseParams
    || (OneMinusLastVisibleCycle = this->m_flCachedOneMinusLastVisibleCycle) == -1.0 )
  {
    flPlaybackRatea = a3;
    v7.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    OneMinusLastVisibleCycle = CBaseAnimatingController::GetOneMinusLastVisibleCycle(this, pModel, v7);
    a3 = flPlaybackRatea;
    this->m_flCachedOneMinusLastVisibleCycle = OneMinusLastVisibleCycle;
  }
  return 1.0 - (a3 * OneMinusLastVisibleCycle);
}


// CBaseAnimatingController::GetSequenceGroundSpeed  (line 1905, @0x0000000002067740, libserver.so)  // inlines: GetBool, GetInt
// calls: CBaseAnimatingController::GetSequenceGroundSpeed
// callers: CBaseAnimatingController::AnimationFrameAdvanceInternal
float __fastcall CBaseAnimatingController::GetSequenceGroundSpeed(
        const CBaseAnimatingController *const this,
        const CModel *pModel)
{
  HSequence v4; // eax
  float result; // xmm0_4

  if ( r_cacheSequenceData.m_pParent->m_Value.m_nValue == 0
    || !this->m_bModelHasNoPoseParams
    || (result = this->m_flCachedGroundSpeed) == -1.0 )
  {
    v4.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    result = CBaseAnimatingController::GetSequenceGroundSpeed(this, pModel, v4);
    this->m_flCachedGroundSpeed = result;
  }
  return result;
}


// CBaseAnimatingController::HasAnimEvent  (line 1936, @0x00000000020677b0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::IsValidSequence, CModel::pSeqdesc, GetEventIndexForSequence
// callers: CBaseAnimating::HasAnimEvent
bool __fastcall CBaseAnimatingController::HasAnimEvent(
        const CBaseAnimatingController *const this,
        HSequence hSequence,
        int nEvent)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v4; // rbx
  bool IsValidSequence; // r15
  int32 m_Data; // esi
  int v9; // r12d
  const ISequence *v10; // r13
  const AnimEvent_t *EventIndexForSequence; // rbx

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    v4 = *m_pBinding;
    if ( *m_pBinding != 0 )
    {
      IsValidSequence = CModel::IsValidSequence(*m_pBinding, hSequence);
      if ( IsValidSequence )
      {
        m_Data = hSequence.m_Data;
        v9 = 0;
        v10 = CModel::pSeqdesc(v4, m_Data);
        EventIndexForSequence = GetEventIndexForSequence(v10);
        while ( v9 < (*(v10->_vptr_IBaseSequence + 22))(v10) )
        {
          ++EventIndexForSequence;
          if ( EventIndexForSequence[-1].event == nEvent )
            return IsValidSequence;
          ++v9;
        }
      }
    }
  }
  return 0;
}


// CBaseAnimatingController::DetectAnimEvents  (line 1954, @0x0000000002069dc0, libserver.so)  // inlines: AnimEventDetectionQuery_t, GetCycle, GetModel, GetModelData, GetModelPtr, HSequence, SequenceLoops, curtime, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::IsSequenceLooping, CBaseEntity::InPrediction, CEntityInstance::GetEntityIndex, GetAnimationEvents, CBaseEntity::IsFirstTimePredicted
// callers: CBaseAnimatingController::DispatchAnimEvents, CBaseAnimatingOverlayController::DispatchAnimEvents
int __fastcall CBaseAnimatingController::DetectAnimEvents(
        CBaseAnimatingController *const this,
        float flStartAnimTime,
        float flEndAnimTime,
        int nMaxEventCount,
        animevent_t *pAnimEvents)
{
  float v8; // r15d
  const ResourceBindingBase_t *m_pBinding; // rax
  int v10; // r14d
  HSequence v11; // eax
  const ResourceBindingBase_t *v12; // rcx
  const CModel *m_pData; // rsi
  bool IsSequenceLooping; // al
  bool v15; // zf
  bool v17; // al
  float v18; // xmm1_4
  CSkeletonInstance *m_pSkeletonInstance; // rax
  const CModel *v20; // rax
  int32 v21; // eax
  CEntityInstance *m_pOwner; // rdi
  CGlobalVars *v23; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool IsFirstTimePredicted; // al
  float flEndAnimTimea; // [rsp+Ch] [rbp-74h]
  float flEndAnimTimeb; // [rsp+Ch] [rbp-74h]
  float flEndAnimTimec; // [rsp+Ch] [rbp-74h]
  AnimEventDetectionQuery_t query; // [rsp+10h] [rbp-70h] BYREF

  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flLastEventCycle)));
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  v10 = _mm_cvtsi128_si32(LODWORD(this->m_baseLayer.m_flCycle.m_Value));
  if ( m_pBinding != 0
    && m_pBinding->m_pData != 0
    && ((flEndAnimTimea = flEndAnimTime,
         v11.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this),
         (v12 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding) == 0)
      ? (m_pData = 0)
      : (m_pData = v12->m_pData),
        (IsSequenceLooping = CBaseAnimatingController::IsSequenceLooping(this, m_pData, v11),
         flEndAnimTime = flEndAnimTimea,
         !IsSequenceLooping)
     && this->m_bSequenceFinished) )
  {
    v15 = this->m_flPlaybackRate.m_Value.m_Value == 0.0;
    v10 = _mm_cvtsi128_si32(0x3F8147AEu);
    LODWORD(this->m_flLastEventCycle) = v10;
  }
  else
  {
    v15 = this->m_flPlaybackRate.m_Value.m_Value == 0.0;
    LODWORD(this->m_flLastEventCycle) = v10;
  }
  if ( v15 )
    return 0;
  flEndAnimTimeb = flEndAnimTime;
  v17 = CBaseEntity::InPrediction();
  v18 = flEndAnimTimeb;
  if ( v17 )
  {
    IsFirstTimePredicted = CBaseEntity::IsFirstTimePredicted();
    v18 = flEndAnimTimeb;
    if ( !IsFirstTimePredicted )
      return 0;
  }
  m_pSkeletonInstance = this->m_pSkeletonInstance;
  query.m_hSequence.m_Data = -1;
  query.m_pSkeletonInstance = m_pSkeletonInstance;
  v20 = m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v20 != 0 )
    v20 = v20->_vptr_CModel;
  query.m_pModel = v20;
  flEndAnimTimec = v18;
  v21 = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
  query.m_flStartCycle = v8;
  query.m_hSequence.m_Data = v21;
  LODWORD(query.m_flEndCycle) = v10;
  query.m_flStartAnimTime = flStartAnimTime;
  query.m_flEndAnimTime = flEndAnimTimec;
  m_pOwner = query.m_pSkeletonInstance->m_pOwner;
  query.m_nOrder = 0x80000000;
  query.m_bIsServerDLL = 1;
  query.m_nEntityIndex = CEntityInstance::GetEntityIndex(m_pOwner).m_Data;
  v23 = gpGlobals;
  query.m_nTickcount = gpGlobals->tickcount;
  if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  query.m_flCurrentTime = v23->m_flCurrentTime;
  return GetAnimationEvents(&query, nMaxEventCount, pAnimEvents);
}


// CBaseAnimatingController::SetSortAnimTimeList  (line 1996, @0x00000000020678a0, libserver.so)
// globals: g_pSortAnimEvents
void __fastcall CBaseAnimatingController::SetSortAnimTimeList(const animevent_t *pAnimEvents)
{
  g_pSortAnimEvents = pAnimEvents;
}


// CBaseAnimatingController::SortByEventTime  (line 2001, @0x0000000002058a10, libserver.so)
// globals: g_pSortAnimEvents
bool __fastcall CBaseAnimatingController::SortByEventTime(const int *const left, const int *const right)
{
  const animevent_t *v2; // rdx
  float eventtime; // xmm0_4
  const animevent_t *v4; // rax
  float v5; // xmm1_4

  v2 = &g_pSortAnimEvents[*left];
  eventtime = v2->eventtime;
  v4 = &g_pSortAnimEvents[*right];
  v5 = v4->eventtime;
  if ( eventtime == v5 )
    return v2->m_nOrder < v4->m_nOrder;
  else
    return v5 > eventtime;
}


// CBaseAnimatingController::DetectAnimEventReset  (line 2015, @0x00000000020678b0, libserver.so)
void __fastcall CBaseAnimatingController::DetectAnimEventReset(CBaseAnimatingController *const this)
{
  ;
}


// CBaseAnimatingController::DispatchAnimEvents  (line 2059, @0x000000000207c780, libserver.so)  // inlines: AnimEventIndex_t, GetClassNameAsCStr, GetClassname, GetModelData, GetModelPtr, SetSortAnimTimeList, String, curtime, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::IsSequenceDebugging, GetAnimationEventCount, CBaseAnimatingController::DetectAnimEvents, std::make_heap<int*, bool (*)(int const&, int const&)>, std::sort_heap<int*, bool (*)(int const&, int const&)>, Msg, LoggingSystem_IsChannelEnabled, EventList_NameForIndex, CBaseAnimatingController::GetSequenceName, CSkeletonAnimationController::GetOwnerEntity, Plat_FloatTime, LoggingSystem_Log (14 total)
// strings: "sv", "[%s %.3f] Sound event skipped because %i sound events were fired at once!\n", "SV", "%s:  %f tick(%d) curtime(%f) DispatchAnimEvents: %s : %d=[%s] : [event '%s', time %6.4f] , "%s:  %f tick(%d) curtime(%f) DispatchAnimEvents: %s : %d=[%s] : %d events in range cycle 
// globals: CBaseAnimatingController::SortByEventTime(int const&,int const&), g_pSortAnimEvents
void __fastcall CBaseAnimatingController::DispatchAnimEvents(
        CBaseAnimatingController *const this,
        float a2,
        float flAnimTime,
        CBaseEntity *pEventHandlerBase)
{
  bool IsSequenceDebugging; // al
  double v7; // xmm0_8
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r12
  float m_flLastEventAnimTime; // xmm2_4
  int (**vptr_CSkeletonAnimationController)(...); // rax
  float m_flLastEventCycle; // xmm5_4
  HSequence v13; // eax
  int AnimationEventCount; // eax
  float v15; // xmm1_4
  void *v16; // rsp
  int v17; // r12d
  __int64 v18; // r15
  __int64 v19; // rsi
  void *v20; // rsp
  int *v21; // rdx
  int i; // eax
  int *v23; // r14
  int *v24; // rbx
  __int64 v25; // r14
  char v26; // r12
  unsigned int v27; // ebx
  animevent_t *v28; // r13
  AnimEventIndex_t v29; // edi
  double eventtime; // xmm2_8
  HSequence v31; // eax
  CBaseEntity *v32; // rax
  double v33; // xmm0_8
  const char *v34; // r9
  double v35; // xmm2_8
  CEntityIdentity *v36; // rax
  double v37; // xmm3_8
  double v38; // xmm4_8
  CGlobalVars *v39; // rax
  CGlobalVars *v40; // rdx
  double m_flCurrentTime; // xmm1_8
  int tickcount; // r8d
  double v43; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  int (**v45)(...); // rax
  HSequence v46; // eax
  int v47; // r14d
  CBaseEntity *OwnerEntity; // rax
  const char *m_pAsString; // r9
  CEntityIdentity *m_pEntity; // rax
  double v51; // xmm0_8
  double v52; // xmm0_8
  __int64 v53; // [rsp+0h] [rbp-D0h]
  double v54; // [rsp+18h] [rbp-B8h]
  const char *v55; // [rsp+20h] [rbp-B0h]
  const char *v56; // [rsp+20h] [rbp-B0h]
  double v57; // [rsp+28h] [rbp-A8h]
  CGlobalVars *v58; // [rsp+28h] [rbp-A8h]
  double v59; // [rsp+30h] [rbp-A0h] BYREF
  double v60; // [rsp+38h] [rbp-98h]
  double v61; // [rsp+40h] [rbp-90h]
  double v62; // [rsp+48h] [rbp-88h]
  const char *SequenceName; // [rsp+50h] [rbp-80h]
  double m_Value; // [rsp+58h] [rbp-78h]
  float flStartCycle; // [rsp+64h] [rbp-6Ch]
  double v66; // [rsp+68h] [rbp-68h]
  const CBaseAnimatingController *bWatch; // [rsp+70h] [rbp-60h]
  const char *nEventCount; // [rsp+78h] [rbp-58h]
  int *pOrder; // [rsp+80h] [rbp-50h]
  animevent_t *pAnimEvents; // [rsp+88h] [rbp-48h]
  unsigned __int64 v71; // [rsp+98h] [rbp-38h]

  *&pAnimEvents = a2;
  v71 = __readfsqword(0x28u);
  IsSequenceDebugging = CBaseAnimatingController::IsSequenceDebugging(this);
  *&v7 = pAnimEvents;
  LOBYTE(bWatch) = IsSequenceDebugging;
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  m_flLastEventAnimTime = this->m_flLastEventAnimTime;
  if ( m_flLastEventAnimTime == 0.0 )
  {
    m_flLastEventAnimTime = this->m_flPrevAnimTime;
    if ( m_flLastEventAnimTime == 0.0 )
      m_flLastEventAnimTime = *&pAnimEvents;
  }
  vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
  *&pOrder = m_flLastEventAnimTime;
  m_flLastEventCycle = this->m_flLastEventCycle;
  LODWORD(this->m_flLastEventAnimTime) = pAnimEvents;
  flStartCycle = m_flLastEventCycle;
  v13.m_Data = vptr_CSkeletonAnimationController[24](this, v7, 0.0);
  AnimationEventCount = GetAnimationEventCount(m_pData, v13);
  v15 = this->m_flLastEventAnimTime;
  v16 = alloca(48LL * AnimationEventCount + 32);
  pAnimEvents = (&v59 & 0xFFFFFFFFFFFFFFEFLL);
  v17 = CBaseAnimatingController::DetectAnimEvents(
          this,
          *&pOrder,
          v15,
          AnimationEventCount,
          (&v59 & 0xFFFFFFFFFFFFFFEFLL));
  if ( pEventHandlerBase == 0 )
    pEventHandlerBase = CSkeletonAnimationController::GetOwnerEntity(this);
  v18 = (*(pEventHandlerBase->_vptr_IHandleEntity + 43))(pEventHandlerBase);
  if ( v18 != 0 )
  {
    v19 = v17;
    v20 = alloca(((v19 * 4 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    pOrder = (&v59 & 0xFFFFFFFFFFFFFFEFLL);
    *(&v59 & 0xFFFFFFFFFFFFFFEFLL) = 0;
    if ( v17 > 1 )
    {
      v21 = ((&v59 & 0xFFFFFFFFFFFFFFEFLL) + 4);
      for ( i = 1; i != v17; ++i )
        *v21++ = i;
      v23 = pOrder;
      v24 = &pOrder[v19];
      g_pSortAnimEvents = pAnimEvents;
      std::make_heap<int *,bool (*)(int const&,int const&)>(
        pOrder,
        &pOrder[v19],
        CBaseAnimatingController::SortByEventTime);
      std::sort_heap<int *,bool (*)(int const&,int const&)>(v23, v24, CBaseAnimatingController::SortByEventTime);
      g_pSortAnimEvents = 0;
    }
    if ( bWatch != 0 && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v45 = this->_vptr_CSkeletonAnimationController;
      m_Value = this->m_baseLayer.m_flCycle.m_Value;
      v66 = flStartCycle;
      v46.m_Data = v45[24](this);
      nEventCount = CBaseAnimatingController::GetSequenceName(this, v46);
      v47 = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
      OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
      *&m_pAsString = COERCE_DOUBLE("");
      m_pEntity = OwnerEntity->m_pEntity;
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v61 = *&m_pAsString;
      v62 = v66;
      SequenceName = *&m_Value;
      *&v51 = CGlobalVarsBase::curtime(gpGlobals, 0);
      LODWORD(v66) = LODWORD(v51);
      LODWORD(m_Value) = gpGlobals->tickcount;
      v52 = Plat_FloatTime(v51);
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "%s:  %f tick(%d) curtime(%f) DispatchAnimEvents: %s : %d=[%s] : %d events in range cycle %6.4f -> %6.4f\n",
        "SV",
        LODWORD(m_Value),
        *&v61,
        v52,
        *&v66,
        v62,
        *&SequenceName,
        v47,
        nEventCount,
        v17);
    }
    if ( v17 > 0 )
    {
      LODWORD(nEventCount) = v17;
      v25 = 0;
      v26 = bWatch;
      v27 = 0;
      bWatch = this;
      while ( 1 )
      {
        v28 = &pAnimEvents[pOrder[v25]];
        if ( v26 != 0 )
        {
          v66 = COERCE_DOUBLE(&LOG_SERVER);
          if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
          {
            v29.m_Data = v28->event;
            eventtime = v28->eventtime;
            v60 = flStartCycle;
            v61 = eventtime;
            v59 = bWatch->m_baseLayer.m_flCycle.m_Value;
            m_Value = COERCE_DOUBLE(EventList_NameForIndex(v29));
            v31.m_Data = (*(bWatch->_vptr_CSkeletonAnimationController + 24))(bWatch);
            SequenceName = CBaseAnimatingController::GetSequenceName(bWatch, v31);
            LODWORD(v62) = (*(bWatch->_vptr_CSkeletonAnimationController + 24))(bWatch);
            v32 = CSkeletonAnimationController::GetOwnerEntity(bWatch);
            v34 = "";
            v35 = v61;
            v36 = v32->m_pEntity;
            v37 = v60;
            v38 = v59;
            if ( v36->m_designerName.u.m_Id != 0 )
              v34 = v36->m_designerName.u.m_pAsString;
            v39 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              v40 = gpGlobals;
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                if ( m_pfnWarningFunc != 0 )
                {
                  v56 = v34;
                  v58 = gpGlobals;
                  v59 = v61;
                  v61 = v38;
                  m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                  v34 = v56;
                  v35 = v59;
                  v37 = v60;
                  v40 = gpGlobals;
                  v38 = v61;
                  v39 = v58;
                }
                else
                {
                  v40 = gpGlobals;
                }
              }
              m_flCurrentTime = v39->m_flCurrentTime;
            }
            else
            {
              v40 = 0;
              m_flCurrentTime = 0.0;
            }
            tickcount = v40->tickcount;
            v54 = m_flCurrentTime;
            v55 = v34;
            v57 = v35;
            v59 = v37;
            v60 = v38;
            LODWORD(v61) = tickcount;
            v43 = Plat_FloatTime(v33);
            LODWORD(v53) = LODWORD(v62);
            LoggingSystem_Log(
              **&v66,
              1,
              "%s:  %f tick(%d) curtime(%f) DispatchAnimEvents: %s : %d=[%s] : [event '%s', time %6.4f] cycle %6.4f -> %6.4f\n",
              "SV",
              LODWORD(v61),
              v55,
              v43,
              v54,
              v57,
              v59,
              v60,
              v53,
              SequenceName,
              *&m_Value);
          }
        }
        if ( (v28->event - 15) > 2 && v28->event != 162 )
          break;
        if ( ++v27 <= 8 )
          break;
        if ( v26 != 0 )
        {
          ++v25;
          Msg("[%s %.3f] Sound event skipped because %i sound events were fired at once!\n", "sv", v27, v28->eventtime);
          if ( nEventCount <= v25 )
            return;
        }
        else
        {
LABEL_18:
          if ( nEventCount <= ++v25 )
            return;
        }
      }
      v28->m_bHandledByScript = (*(*v18 + 1840LL))(v18, v28);
      if ( (*(*v18 + 1848LL))(v18, v28) != 0 )
        v28->m_bHandledByScript = 1;
      (*(*v18 + 1832LL))(v18, v28);
      goto LABEL_18;
    }
  }
}


// CBaseAnimatingController::SetPoseParameter  (line 2175, @0x0000000002067f10, libserver.so)
// calls: CBaseAnimatingController::LookupPoseParameter, CBaseAnimatingController::SetPoseParameter
// callers: CBaseAnimating::SetPoseParameter
float __fastcall CBaseAnimatingController::SetPoseParameter(
        CBaseAnimatingController *const this,
        const char *szName,
        float a3,
        float flValue)
{
  int v5; // eax
  float v6; // xmm1_4

  v5 = CBaseAnimatingController::LookupPoseParameter(this, szName);
  return CBaseAnimatingController::SetPoseParameter(this, v5, a3, v6);
}


// CBaseAnimatingController::SetPoseParameter  (line 2182, @0x00000000020678c0, libserver.so)  // inlines: GetModelData, GetModelPtr, NetworkStateChanged, Set, operator const RuntimeClass_t*
// calls: CModel::EncodePoseParameter, CModel::GetNumPoseParameters, memcmp
// callers: CBaseAnimating::SetPoseParameter, CBaseAnimatingController::SetPoseParameter, CBaseAnimatingController::OnNewModel
float __fastcall CBaseAnimatingController::SetPoseParameter(
        CBaseAnimatingController *const this,
        int iParameter,
        float result,
        float flValue)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v6; // r12
  int NumPoseParameters; // eax
  float *v9; // r12
  int v10; // eax
  float v11; // xmm0_4
  float flValuea; // [rsp+Ch] [rbp-34h]
  float flValueb; // [rsp+Ch] [rbp-34h]
  float flNormalizedValue[9]; // [rsp+1Ch] [rbp-24h] BYREF

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    v6 = *m_pBinding;
    if ( *m_pBinding != 0 )
    {
      result = CModel::EncodePoseParameter(*m_pBinding, iParameter, result, flNormalizedValue);
      if ( iParameter >= 0 )
      {
        flValuea = result;
        NumPoseParameters = CModel::GetNumPoseParameters(v6);
        result = flValuea;
        if ( iParameter < NumPoseParameters )
        {
          v9 = (this + 4 * iParameter);
          if ( v9[23] != flNormalizedValue[0] )
          {
            v10 = memcmp(&this->m_flPoseParameter.m_Value[iParameter], flNormalizedValue, 4u);
            v11 = flValuea;
            if ( v10 != 0 )
            {
              (*(this->_vptr_CSkeletonAnimationController + 27))(this, 92, iParameter, 0xFFFFFFFFLL, flValuea);
              v11 = flValuea;
              v9[23] = flNormalizedValue[0];
            }
            flValueb = v11;
            (*(this->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pSkeletonInstance, 16);
            return flValueb;
          }
        }
      }
    }
  }
  return result;
}


// CBaseAnimatingController::GetNumPoseParameters  (line 2205, @0x0000000002067a50, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::GetNumPoseParameters
// callers: CBaseAnimating::GetNumPoseParameters, CBaseAnimatingController::SetupSequences, CBaseAnimatingOverlayController::SetupSequences
int __fastcall CBaseAnimatingController::GetNumPoseParameters(const CBaseAnimatingController *const this)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::GetNumPoseParameters(*m_pBinding);
  else
    return 0;
}


// CBaseAnimatingController::GetPoseParameterArray  (line 2211, @0x0000000002067c40, libserver.so)
const float *__fastcall CBaseAnimatingController::GetPoseParameterArray(const CBaseAnimatingController *const this)
{
  return this->m_flPoseParameter.m_Value;
}


// CBaseAnimatingController::GetPoseParameter  (line 2221, @0x0000000002067fa0, libserver.so)
// calls: CBaseAnimatingController::LookupPoseParameter, CBaseAnimatingController::GetPoseParameter
// callers: CBaseAnimating::GetPoseParameter
float __fastcall CBaseAnimatingController::GetPoseParameter(
        const CBaseAnimatingController *const this,
        const char *szName)
{
  int v3; // eax

  v3 = CBaseAnimatingController::LookupPoseParameter(this, szName);
  return CBaseAnimatingController::GetPoseParameter(this, v3);
}


// CBaseAnimatingController::GetPoseParameter  (line 2226, @0x0000000002067c50, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::GetNumPoseParameters, CModel::DecodePoseParameter
// callers: CBaseAnimating::GetPoseParameter, CBaseAnimatingController::GetPoseParameter
float __fastcall CBaseAnimatingController::GetPoseParameter(const CBaseAnimatingController *const this, int iParameter)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v3; // r12
  float v5; // xmm1_4

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0
    && (v3 = *m_pBinding, *m_pBinding != 0)
    && iParameter >= 0
    && iParameter < CModel::GetNumPoseParameters(*m_pBinding) )
  {
    return CModel::DecodePoseParameter(v3, iParameter, v5);
  }
  else
  {
    return 0.0;
  }
}


// CBaseAnimatingController::GetPoseParameterNormalized  (line 2244, @0x0000000002067d10, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::GetNumPoseParameters
// callers: CBaseAnimating::GetPoseParameterNormalized
float __fastcall CBaseAnimatingController::GetPoseParameterNormalized(
        const CBaseAnimatingController *const this,
        int iParameter)
{
  __int64 v3; // rbx
  const CModel *const *m_pBinding; // rax

  v3 = iParameter;
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 && iParameter >= 0 && iParameter < CModel::GetNumPoseParameters(*m_pBinding) )
    return this->m_flPoseParameter.m_Value[v3];
  else
    return 0.0;
}


// CBaseAnimatingController::GetPoseParameterRange  (line 2262, @0x0000000002067db0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::GetNumPoseParameters, CModel::pPoseParameter
// callers: CBaseAnimating::GetPoseParameterRange
bool __fastcall CBaseAnimatingController::GetPoseParameterRange(
        const CBaseAnimatingController *const this,
        int nIndex,
        float *const flMinValue,
        float *const flMaxValue)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rbx
  const PoseParamDesc_t *v8; // rax
  float m_end; // xmm0_4

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0
    && (m_pData = m_pBinding->m_pData, m_pBinding->m_pData != 0)
    && nIndex >= 0
    && nIndex < CModel::GetNumPoseParameters(m_pData) )
  {
    v8 = CModel::pPoseParameter(m_pData, nIndex);
    *flMinValue = v8->m_start;
    m_end = v8->m_end;
    *flMaxValue = m_end;
    return 1;
  }
  else
  {
    *flMinValue = 0.0;
    *flMaxValue = 1.0;
    return 0;
  }
}


// CBaseAnimatingController::LookupPoseParameter  (line 2282, @0x0000000002067e90, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::LookupPoseParameter
// callers: CBaseAnimating::LookupPoseParameter, CBaseAnimatingController::SetPoseParameter, CBaseAnimatingController::GetPoseParameter, CBaseAnimatingController::HasPoseParameter
int __fastcall CBaseAnimatingController::LookupPoseParameter(
        const CBaseAnimatingController *const this,
        const char *pPoseParameterName)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::LookupPoseParameter(*m_pBinding, pPoseParameterName);
  else
    return -1;
}


// CBaseAnimatingController::HasPoseParameter  (line 2293, @0x0000000002068110, libserver.so)
// calls: CBaseAnimatingController::LookupPoseParameter, CBaseAnimatingController::HasPoseParameter
// callers: CBaseAnimating::HasPoseParameter
bool __fastcall CBaseAnimatingController::HasPoseParameter(
        const CBaseAnimatingController *const this,
        HSequence hSequence,
        const char *szName)
{
  int v5; // eax

  v5 = CBaseAnimatingController::LookupPoseParameter(this, szName);
  return v5 != -1 && CBaseAnimatingController::HasPoseParameter(this, hSequence, v5);
}


// CBaseAnimatingController::HasPoseParameter  (line 2306, @0x0000000002068020, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::pSeqdesc
// callers: CBaseAnimating::HasPoseParameter, CBaseAnimatingController::HasPoseParameter
bool __fastcall CBaseAnimatingController::HasPoseParameter(
        const CBaseAnimatingController *const this,
        HSequence hSequence,
        int iParameter)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r12
  int i; // ebx
  const ISequence *v8; // rax
  const ISequence *v9; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  m_pData = m_pBinding->m_pData;
  if ( m_pBinding->m_pData != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v9 = CModel::pSeqdesc(m_pData, hSequence);
      if ( i >= (*(v9->_vptr_IBaseSequence + 33))(v9) )
        break;
      v8 = CModel::pSeqdesc(m_pData, hSequence);
      if ( (*(v8->_vptr_IBaseSequence + 34))(v8, i) == iParameter )
        return 1;
    }
  }
  return 0;
}


// CBaseAnimatingController::EdgeLimitPoseParameter  (line 2329, @0x00000000020681a0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::GetNumPoseParameters, CModel::pPoseParameter, RangeCompressor
// callers: CBaseAnimating::EdgeLimitPoseParameter
float __fastcall CBaseAnimatingController::EdgeLimitPoseParameter(
        const CBaseAnimatingController *const this,
        int iParameter,
        float result,
        float flValue,
        float flBase)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v6; // r12
  int NumPoseParameters; // eax
  float v9; // xmm1_4
  const PoseParamDesc_t *v10; // rax
  float m_end; // xmm2_4
  float flValuea; // [rsp+8h] [rbp-18h]
  float flValueb; // [rsp+8h] [rbp-18h]
  float flBaseb; // [rsp+Ch] [rbp-14h]

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    v6 = *m_pBinding;
    if ( *m_pBinding != 0 && iParameter >= 0 )
    {
      flValuea = result;
      NumPoseParameters = CModel::GetNumPoseParameters(*m_pBinding);
      result = flValuea;
      v9 = flValue;
      if ( iParameter < NumPoseParameters )
      {
        flBaseb = flValuea;
        flValueb = v9;
        v10 = CModel::pPoseParameter(v6, iParameter);
        result = flBaseb;
        if ( v10->m_loop == 0.0 )
        {
          m_end = v10->m_end;
          if ( v10->m_start != m_end )
            return RangeCompressor(v10->m_start, m_end, flValueb, v10->m_start);
        }
      }
    }
  }
  return result;
}


// CBaseAnimatingController::SetIKGroundContactInfo  (line 2348, @0x00000000020682b0, libserver.so)  // inlines: curtime
void __fastcall CBaseAnimatingController::SetIKGroundContactInfo(
        CBaseAnimatingController *const this,
        double a2,
        float minHeight,
        float maxHeight)
{
  float m_flCurrentTime; // xmm2_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v8; // [rsp-18h] [rbp-20h]
  int v9; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v8 = minHeight;
        v9 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, minHeight, 0.0);
        minHeight = v8;
        LODWORD(a2) = v9;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  this->m_flIKGroundContactTime = m_flCurrentTime;
  this->m_flIKGroundMinHeight = *&a2;
  this->m_flIKGroundMaxHeight = minHeight;
}


// CBaseAnimatingController::InitStepHeightAdjust  (line 2358, @0x0000000002068330, libserver.so)
void __fastcall CBaseAnimatingController::InitStepHeightAdjust(CBaseAnimatingController *const this)
{
  CSkeletonInstance *m_pSkeletonInstance; // rax
  float z; // xmm1_4

  m_pSkeletonInstance = this->m_pSkeletonInstance;
  this->m_flIKGroundContactTime = 0.0;
  this->m_flIKGroundMinHeight = 0.0;
  this->m_flIKGroundMaxHeight = 0.0;
  z = m_pSkeletonInstance->m_vecOrigin.m_Value.z;
  this->m_flEstIkOffset = 0.0;
  this->m_flEstIkFloor = z;
}


// CBaseAnimatingController::EnableIK  (line 2370, @0x0000000002084700, libserver.so)
// calls: CBaseAnimatingController::ResetIK
void __fastcall CBaseAnimatingController::EnableIK(CBaseAnimatingController *const this, bool bEnable)
{
  if ( this->m_bEnableIK != bEnable )
  {
    this->m_bEnableIK = bEnable;
    if ( !bEnable )
      CBaseAnimatingController::ResetIK(this);
  }
}


// CBaseAnimatingController::ResetIK  (line 2385, @0x0000000002084630, libserver.so)  // inlines: Purge, RemoveAll, ~CIKContext, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CUtlVectorBase<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, CUtlMemory<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, int> >::RemoveAll, operator delete, CUtlMemory<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, int>::Purge, CUtlMemory<ikcontextikrule_t, int>::Purge
// callers: CBaseAnimatingController::EnableIK, CBaseAnimating::EnableIK, CBaseAnimatingController::OnNewModel
void __fastcall CBaseAnimatingController::ResetIK(CBaseAnimatingController *const this)
{
  CIKContext *m_pIk; // rbx
  bool v3; // zf

  m_pIk = this->m_pIk;
  if ( m_pIk != 0 )
  {
    v3 = (m_pIk->m_ikLock.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pIk->m_ikLock.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<ikcontextikrule_t,int>::Purge(&m_pIk->m_ikLock.m_Memory);
      if ( (m_pIk->m_ikLock.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<ikcontextikrule_t,int>::Purge(&m_pIk->m_ikLock.m_Memory);
    }
    CUtlVectorBase<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>>::RemoveAll(&m_pIk->m_ikChainRule);
    if ( (m_pIk->m_ikChainRule.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>::Purge(&m_pIk->m_ikChainRule.m_Memory);
      if ( (m_pIk->m_ikChainRule.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>::Purge(&m_pIk->m_ikChainRule.m_Memory);
    }
    m_pIk->m_target.m_Size = 0;
    operator delete(m_pIk);
    this->m_pIk = 0;
  }
}


// Studio_BuildMatrices  (line 2394, @0x0000000002068370, libserver.so)  // inlines: ToMatrix, TransformMatrix, VectorScale
// calls: CModel::NumBones, AngleMatrix, ConcatTransforms, TransformMatrix, CModel::boneParent
// callers: CBaseAnimatingController::UpdateIK
void __fastcall Studio_BuildMatrices(
        const CModel *pModel,
        const QAngle *const angles,
        const Vector *const origin,
        const CTransform *xforms,
        float flScale,
        matrix3x4_t *bonetoworld)
{
  int v6; // r15d
  int i; // ebx
  int v10; // r14d
  int v11; // ebx
  int v12; // r14d
  int v13; // eax
  matrix3x4_t *v14; // rdx
  matrix3x4_t bonematrix; // [rsp+30h] [rbp-10C0h] BYREF
  matrix3x4_t rotationmatrix; // [rsp+60h] [rbp-1090h] BYREF
  matrix3x4_t v21; // [rsp+90h] [rbp-1060h] BYREF
  int chain[1036]; // [rsp+C0h] [rbp-1030h]

  v6 = 0;
  for ( i = CModel::NumBones(pModel); ; chain[i - v6] = v10 )
  {
    v10 = v6++;
    if ( v10 >= CModel::NumBones(pModel) )
      break;
  }
  AngleMatrix(angles, origin, &rotationmatrix);
  if ( flScale < 0.99999988 || flScale > 1.0000001 )
  {
    rotationmatrix.m_flMatVal[0][0] = rotationmatrix.m_flMatVal[0][0] * flScale;
    rotationmatrix.m_flMatVal[0][1] = rotationmatrix.m_flMatVal[0][1] * flScale;
    rotationmatrix.m_flMatVal[0][2] = rotationmatrix.m_flMatVal[0][2] * flScale;
    rotationmatrix.m_flMatVal[1][0] = rotationmatrix.m_flMatVal[1][0] * flScale;
    rotationmatrix.m_flMatVal[1][1] = rotationmatrix.m_flMatVal[1][1] * flScale;
    rotationmatrix.m_flMatVal[1][2] = rotationmatrix.m_flMatVal[1][2] * flScale;
    rotationmatrix.m_flMatVal[2][0] = rotationmatrix.m_flMatVal[2][0] * flScale;
    rotationmatrix.m_flMatVal[2][1] = rotationmatrix.m_flMatVal[2][1] * flScale;
    rotationmatrix.m_flMatVal[2][2] = rotationmatrix.m_flMatVal[2][2] * flScale;
  }
  v11 = i - 1;
  if ( v11 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v12 = chain[v11];
        TransformMatrix(&xforms[v12], &v21);
        bonematrix = v21;
        v13 = CModel::boneParent(pModel, v12);
        v14 = &bonetoworld[v12];
        if ( v13 == -1 )
          break;
        --v11;
        ConcatTransforms(&bonetoworld[v13], &bonematrix, v14);
        if ( v11 == -1 )
          return;
      }
      --v11;
      ConcatTransforms(&rotationmatrix, &bonematrix, v14);
    }
    while ( v11 != -1 );
  }
}


// DrawBone  (line 2453, @0x0000000002068610, libserver.so)  // inlines: MatrixPosition
// calls: CModel::boneParent, NDebugOverlay::HorzArrow, CModel::boneName, ISceneViewDebugOverlays::Text
// callers: DrawRawSkeleton
void __fastcall DrawBone(
        const CModel *pModel,
        matrix3x4_t *boneToWorld,
        int boneIndex,
        bool noDepthTest,
        float duration,
        int r,
        int g,
        int b,
        bool bNames)
{
  vec_t *v10; // rax
  vec_t *v14; // r13
  const char *v15; // rax
  Vector p1; // [rsp+20h] [rbp-50h] BYREF
  Vector p2; // [rsp+30h] [rbp-40h] BYREF

  v10 = &boneToWorld[boneIndex];
  p1.x = v10[3];
  p1.y = v10[7];
  p1.z = v10[11];
  if ( CModel::boneParent(pModel, boneIndex) != -1 )
  {
    v14 = &boneToWorld[CModel::boneParent(pModel, boneIndex)];
    p2.x = v14[3];
    p2.y = v14[7];
    p2.z = v14[11];
    NDebugOverlay::HorzArrow(&p1, &p2, 1.0, r, g, b, 1, noDepthTest, duration);
    if ( bNames )
    {
      v15 = CModel::boneName(pModel, boneIndex);
      ISceneViewDebugOverlays::Text(debugoverlay, &p1, duration, "%d: %s", boneIndex, v15);
    }
  }
}


// DrawRawSkeleton  (line 2471, @0x0000000002068740, libserver.so)
// calls: DrawBone, CModel::NumBones
void __fastcall DrawRawSkeleton(
        const CModel *pModel,
        matrix3x4_t *boneToWorld,
        bool noDepthTest,
        float duration,
        int r,
        int g,
        int b,
        bool bNames)
{
  int i; // ebx
  int v12; // edx

  for ( i = 0; i < CModel::NumBones(pModel); ++i )
  {
    v12 = i;
    DrawBone(pModel, boneToWorld, v12, noDepthTest, duration, r, g, b, bNames);
  }
}


// DrawIKChains  (line 2479, @0x00000000020687c0, libserver.so)
void __fastcall DrawIKChains(
        const CModel *pModel,
        matrix3x4_t *boneToWorld,
        bool noDepthTest,
        float duration,
        int r,
        int g,
        int b)
{
  ;
}


// CBaseAnimatingController::UpdateIK  (line 2498, @0x0000000002075ac0, libserver.so)  // inlines: AllocInts, BitVec_IsBitSet, Bitvec_Set, CBitVecT, CBoneBitList, CTransform, CVarBitVecBase, CVarBitVecT, CalcAbsolutePosition, ClearAll, FreeInts, FromUntypedHandleUnchecked, GetAbsAngles, GetAbsOrigin, GetAbsScale, GetCycle, GetModel, GetModelData, GetModelPtr, Init, InitUntypedUnchecked, Load, SetDebugOverlay, VectorAdd, VectorAligned, memset, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator+, operator=, ~CBitVecT, ~CBoneBitList, ~CVarBitVecBase, ~CVarBitVecT
// calls: CModel::numikchains, CModel::pIKChain, CModel::NumBones, CGameSceneNode::CalcAbsolutePositionWhenDirty, AngleMatrix, CIKContext::Init, CAnimationBlendList::CAnimationBlendList, CIKContext::AddDependencies, CIKContext::UpdateTargets, CGlobalVarsBase::curtime, CBaseAnimatingController::CalculateIKLocks, CIKContext::SolveDependencies (17 total)
// callers: CSkeletonInstance::ApplyIKBones
void __fastcall CBaseAnimatingController::UpdateIK(
        CBaseAnimatingController *const this,
        uint32 *pReadableBonesBitSet,
        const CTransform *pParentSpaceBones,
        matrix3x4a_t *pBoneToWorld,
        int nNumBones,
        float flCurrentTime)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v8; // r12
  int v11; // r14d
  const CAnimIKChain *v12; // rax
  CTransform *v13; // rax
  __int64 v14; // r15
  int v15; // r14d
  CTransform *v16; // rcx
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t v19; // xmm3_4
  vec_t y; // xmm2_4
  vec_t v21; // xmm1_4
  vec_t w; // xmm0_4
  float m_flEstIkOffset; // xmm0_4
  CSkeletonInstance *m_pSkeletonInstance; // rbx
  bool v25; // zf
  vec_t v26; // xmm0_4
  vec_t v27; // xmm2_4
  CSkeletonInstance *v28; // rbx
  float v29; // r14d
  int32 v30; // xmm1_4
  float v31; // xmm0_4
  CSkeletonInstance *v32; // rbx
  vec_t v33; // xmm0_4
  vec_t v34; // xmm2_4
  int m_iIKCounter; // ecx
  CIKContext *m_pIk; // rdi
  HSequence v37; // eax
  float m_Value; // r14d
  HSequence v39; // eax
  double v40; // xmm0_8
  float v41; // xmm1_4
  CSkeletonInstance *v42; // rbx
  float m_flAbsScale; // xmm0_4
  CSkeletonInstance *v44; // rbx
  vec_t v45; // xmm2_4
  vec_t v46; // xmm1_4
  CIKContext *v47; // r14
  CTransform *flScale; // [rsp+38h] [rbp-8198h]
  float flScaleb; // [rsp+38h] [rbp-8198h]
  float flScalea; // [rsp+38h] [rbp-8198h]
  uint32 nSolveableIKChains; // [rsp+4Ch] [rbp-8184h] BYREF
  Vector adjOrigin; // [rsp+50h] [rbp-8180h] BYREF
  QAngle angles; // [rsp+60h] [rbp-8170h] BYREF
  matrix3x4a_t mNodeToWorld; // [rsp+70h] [rbp-8160h] BYREF
  CAnimationBlendList blendList; // [rsp+A0h] [rbp-8130h] BYREF
  CBoneBitList boneComputed; // [rsp+110h] [rbp-80C0h] BYREF
  CTransform xforms[1024]; // [rsp+1A0h] [rbp-8030h] BYREF
  char v60; // [rsp+81A0h] [rbp-30h] BYREF

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    v8 = *m_pBinding;
    if ( *m_pBinding != 0 && CModel::numikchains(*m_pBinding) != 0 )
    {
      v11 = 0;
      nSolveableIKChains = 0;
      while ( v11 < CModel::numikchains(v8) )
      {
        v12 = CModel::pIKChain(v8, v11);
        if ( v12->m_linkArray.m_Size != 0
          && ((1 << v12->m_linkArray.m_Memory.m_pMemory->bone)
            & pReadableBonesBitSet[v12->m_linkArray.m_Memory.m_pMemory->bone >> 5]) != 0 )
        {
          *(&nSolveableIKChains + (v11 >> 5)) |= 1 << v11;
        }
        ++v11;
      }
      if ( this->m_pIk == 0 )
      {
        v47 = operator new(0x1110u);
        CIKContext::CIKContext(v47);
        this->m_pIk = v47;
        v47->m_pDebugOverlay = debugoverlay;
      }
      v13 = xforms;
      do
      {
        v13->m_vPosition.w = 0.0;
        ++v13;
      }
      while ( v13 != &v60 );
      v14 = 0;
      v15 = 0;
      v16 = xforms;
      while ( 1 )
      {
        flScale = v16;
        if ( v15 >= CModel::NumBones(v8) )
          break;
        ++v15;
        v16 = flScale + 1;
        z = pParentSpaceBones[v14].m_vPosition.z;
        x = pParentSpaceBones[v14].m_vPosition.x;
        flScale->m_vPosition.y = pParentSpaceBones[v14].m_vPosition.y;
        v19 = pParentSpaceBones[v14].m_orientation.x;
        flScale->m_vPosition.z = z;
        flScale->m_vPosition.x = x;
        y = pParentSpaceBones[v14].m_orientation.y;
        xforms[v14].m_orientation.x = v19;
        v21 = pParentSpaceBones[v14].m_orientation.z;
        w = pParentSpaceBones[v14].m_orientation.w;
        *(&xforms[0].m_orientation.y + v14 * 32) = y;
        *(&xforms[0].m_orientation.z + v14 * 32) = v21;
        *(&xforms[0].m_orientation.w + v14 * 32) = w;
        ++v14;
      }
      m_flEstIkOffset = this->m_flEstIkOffset;
      m_pSkeletonInstance = this->m_pSkeletonInstance;
      if ( m_pSkeletonInstance->m_bDirtyAbsTransform.m_value )
      {
        flScalea = this->m_flEstIkOffset;
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pSkeletonInstance);
        m_flEstIkOffset = flScalea;
      }
      v25 = this->m_pIk == 0;
      v26 = m_flEstIkOffset + m_pSkeletonInstance->m_vecAbsOrigin.z;
      v27 = m_pSkeletonInstance->m_vecAbsOrigin.x + 0.0;
      adjOrigin.y = m_pSkeletonInstance->m_vecAbsOrigin.y + 0.0;
      adjOrigin.z = v26;
      adjOrigin.x = v27;
      if ( !v25 )
      {
        boneComputed.m_numInts = 32;
        v28 = this->m_pSkeletonInstance;
        boneComputed.m_numBits = 1024;
        boneComputed.m_pInt = boneComputed.m_FixedStorage;
        v29 = this->m_flEstIkOffset;
        memset(boneComputed.m_FixedStorage, 0, sizeof(boneComputed.m_FixedStorage));
        ++this->m_iIKCounter;
        if ( v28->m_bDirtyAbsTransform.m_value )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(v28);
        *&v30 = v29 + v28->m_vecAbsOrigin.z;
        v31 = v28->m_vecAbsOrigin.x + 0.0;
        *(&blendList.m_pModel + 1) = v28->m_vecAbsOrigin.y + 0.0;
        v32 = this->m_pSkeletonInstance;
        blendList.m_hSequenceArray[0].m_Data = v30;
        *&blendList.m_pModel = v31;
        if ( v32->m_bDirtyAbsTransform.m_value )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(v32);
        v33 = v32->m_angAbsRotation.z;
        v34 = v32->m_angAbsRotation.x;
        angles.y = v32->m_angAbsRotation.y;
        angles.z = v33;
        angles.x = v34;
        AngleMatrix(&angles, &blendList, &mNodeToWorld);
        m_iIKCounter = this->m_iIKCounter;
        m_pIk = this->m_pIk;
        blendList.m_pModel = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
        CIKContext::Init(m_pIk, &blendList, &mNodeToWorld, flCurrentTime, m_iIKCounter);
        v37.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
        CAnimationBlendList::CAnimationBlendList(&blendList, v8, v37, this->m_flPoseParameter.m_Value);
        m_Value = this->m_baseLayer.m_flCycle.m_Value;
        v39.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
        CIKContext::AddDependencies(this->m_pIk, v39, m_Value, &blendList, 1.0);
        CIKContext::UpdateTargets(this->m_pIk, &nSolveableIKChains, xforms, pBoneToWorld);
        *&v40 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseAnimatingController::CalculateIKLocks(this, v40, v41);
        CIKContext::SolveDependencies(this->m_pIk, &nSolveableIKChains, xforms, pBoneToWorld);
        if ( boneComputed.m_numInts > 0x20u )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, boneComputed.m_pInt);
      }
      v42 = this->m_pSkeletonInstance;
      if ( v42->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pSkeletonInstance);
      m_flAbsScale = v42->m_flAbsScale;
      v44 = this->m_pSkeletonInstance;
      if ( v44->m_bDirtyAbsTransform.m_value )
      {
        flScaleb = m_flAbsScale;
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pSkeletonInstance);
        m_flAbsScale = flScaleb;
      }
      v45 = v44->m_angAbsRotation.z;
      v46 = v44->m_angAbsRotation.x;
      *(&boneComputed.m_numInts + 1) = v44->m_angAbsRotation.y;
      *&boneComputed.m_pInt = v45;
      *&boneComputed.m_numBits = v46;
      Studio_BuildMatrices(v8, &boneComputed, &adjOrigin, xforms, m_flAbsScale, pBoneToWorld);
    }
  }
}


// CBaseAnimatingController::GetSequenceBounds  (line 2751, @0x000000000205ad30, libserver.so)  // inlines: GetModel, Init, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*
// calls: CModel::GetSequenceBounds
// callers: CBaseAnimatingOverlayController::GetSequenceBounds
void __fastcall CBaseAnimatingController::GetSequenceBounds(
        const CBaseAnimatingController *const this,
        Vector *pMins,
        Vector *pMaxs)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
  {
    CModel::GetSequenceBounds(*m_pBinding, this->m_baseLayer.m_hSequence.m_Value, pMins, pMaxs);
  }
  else
  {
    pMins->x = 0.0;
    pMins->y = 0.0;
    pMins->z = 0.0;
    pMaxs->x = 0.0;
    pMaxs->y = 0.0;
    pMaxs->z = 0.0;
  }
}


// CBaseAnimatingController::UpdateStepOrigin  (line 2776, @0x00000000020687d0, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsOrigin, GetBool, GetInt, Load, VectorSubtract, curtime, operator-
// calls: CSkeletonAnimationController::GetOwnerEntity, CBaseEntity::GetGroundEntity, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseEntity::StepSimulationThink
void __fastcall CBaseAnimatingController::UpdateStepOrigin(CBaseAnimatingController *const this)
{
  CSkeletonInstance *m_pSkeletonInstance; // r12
  float m_flIKGroundContactTime; // xmm0_4
  CGlobalVars *v4; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // xmm1_4
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v8; // r13
  CBaseEntity *GroundEntity; // rax
  float v10; // xmm2_4
  float m_flIKGroundMinHeight; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float m_flEstIkFloor; // xmm1_4
  float v17; // xmm2_4
  float v18; // [rsp+8h] [rbp-28h]
  float v19; // [rsp+8h] [rbp-28h]
  float bias; // [rsp+Ch] [rbp-24h]
  float biasa; // [rsp+Ch] [rbp-24h]
  float biasb; // [rsp+Ch] [rbp-24h]
  float biasc; // [rsp+Ch] [rbp-24h]

  m_pSkeletonInstance = this->m_pSkeletonInstance;
  if ( npc_height_adjust.m_pParent->m_Value.m_nValue != 0 )
  {
    m_flIKGroundContactTime = this->m_flIKGroundContactTime;
    if ( m_flIKGroundContactTime <= 0.2 )
      goto LABEL_3;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          bias = this->m_flIKGroundContactTime;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          m_flIKGroundContactTime = bias;
        }
      }
      v6 = v4->m_flCurrentTime - 0.2;
    }
    else
    {
      v6 = -0.2;
    }
    if ( m_flIKGroundContactTime <= v6 )
      goto LABEL_3;
    OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
    v8 = OwnerEntity;
    if ( (OwnerEntity->m_fFlags.m_Value & 0xC00) != 0 )
      goto LABEL_3;
    if ( m_pSkeletonInstance->m_pParent != 0 )
      goto LABEL_3;
    if ( CBaseEntity::GetGroundEntity(OwnerEntity) == 0 )
      goto LABEL_3;
    GroundEntity = CBaseEntity::GetGroundEntity(v8);
    if ( (*(GroundEntity->_vptr_IHandleEntity + 174))(GroundEntity) != 0 )
      goto LABEL_3;
    if ( m_pSkeletonInstance->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pSkeletonInstance);
    v10 = 0.0;
    if ( (m_pSkeletonInstance->m_vecAbsOrigin.z - m_pSkeletonInstance->m_vecOrigin.m_Value.z) != 0.0 )
    {
LABEL_3:
      this->m_flEstIkOffset = 0.5 * this->m_flEstIkOffset;
      this->m_flEstIkFloor = m_pSkeletonInstance->m_vecOrigin.m_Value.z;
    }
    else
    {
      m_flIKGroundMinHeight = this->m_flIKGroundMinHeight;
      v12 = (0.2 * this->m_flEstIkFloor) + (0.80000001 * m_flIKGroundMinHeight);
      v13 = this->m_flIKGroundMaxHeight - m_flIKGroundMinHeight;
      this->m_flEstIkFloor = v12;
      v14 = v13 - 18.0;
      if ( v14 > 18.0 )
        v15 = 18.0;
      else
        v15 = fmaxf(0.0, v14);
      if ( m_pSkeletonInstance->m_bDirtyAbsTransform.m_value )
      {
        v18 = v12;
        biasa = v15;
        CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pSkeletonInstance);
        v10 = 0.0;
        v12 = v18;
        v15 = biasa;
      }
      if ( (v12 - m_pSkeletonInstance->m_vecAbsOrigin.z) <= 0.0 )
      {
        m_flEstIkFloor = this->m_flEstIkFloor;
        if ( m_pSkeletonInstance->m_bDirtyAbsTransform.m_value )
        {
          v19 = this->m_flEstIkFloor;
          biasb = v15;
          CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pSkeletonInstance);
          m_flEstIkFloor = v19;
          v15 = biasb;
        }
        v10 = v15 - 18.0;
        if ( (v15 - 18.0) <= (m_flEstIkFloor - m_pSkeletonInstance->m_vecAbsOrigin.z) )
        {
          v17 = this->m_flEstIkFloor;
          if ( m_pSkeletonInstance->m_bDirtyAbsTransform.m_value )
          {
            biasc = this->m_flEstIkFloor;
            CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pSkeletonInstance);
            v17 = biasc;
          }
          v10 = v17 - m_pSkeletonInstance->m_vecAbsOrigin.z;
        }
      }
      this->m_flEstIkOffset = v10;
    }
  }
  else
  {
    this->m_flEstIkOffset = 0.0;
    this->m_flEstIkFloor = m_pSkeletonInstance->m_vecOrigin.m_Value.z;
  }
}


// CBaseAnimatingController::UpdateIKLocks  (line 2837, @0x0000000002068ac0, libserver.so)  // inlines: GetEnt, operator[]
// calls: CIKTarget::IsActive, CIKTarget::GetOwner, CGameEntitySystem::GetBaseEntity, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEntityInstance::GetEntityIndex, CIKTarget::UpdateOwner
void __fastcall CBaseAnimatingController::UpdateIKLocks(
        CBaseAnimatingController *const this,
        double a2,
        float flCurrentTime)
{
  CIKContext *m_pIk; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  CIKTarget *v7; // r12
  int Owner; // eax
  CBaseEntity *BaseEntity; // rax
  const CBaseEntity *v10; // r15
  CEntityIndex v11; // eax
  QAngle *angles; // [rsp+0h] [rbp-40h]
  Vector *pos; // [rsp+8h] [rbp-38h]

  m_pIk = this->m_pIk;
  if ( m_pIk != 0 && m_pIk->m_target.m_Size > 0 )
  {
    v5 = 0;
    v6 = 352 * ((m_pIk->m_target.m_Size - 1) + 1LL);
    while ( 1 )
    {
      v7 = &m_pIk->m_target.m_Memory.m_Memory.m_Data[v5];
      if ( CIKTarget::IsActive(v7)
        && CIKTarget::GetOwner(v7) != -1
        && (Owner = CIKTarget::GetOwner(v7),
            BaseEntity = CGameEntitySystem::GetBaseEntity(g_pGameEntitySystem, Owner),
            v10 = BaseEntity,
            BaseEntity != 0) )
      {
        v5 += 352;
        angles = CBaseEntity::GetAbsAngles(BaseEntity);
        pos = CBaseEntity::GetAbsOrigin(v10);
        v11.m_Data = CEntityInstance::GetEntityIndex(v10).m_Data;
        CIKTarget::UpdateOwner(v7, v11.m_Data, pos, angles);
        if ( v5 == v6 )
          return;
      }
      else
      {
        v5 += 352;
        if ( v5 == v6 )
          return;
      }
      m_pIk = this->m_pIk;
    }
  }
}


// CTraceFilterSkipNPCsAndPlayers::~CTraceFilterSkipNPCsAndPlayers  (line 2869, @0x000000000208f190, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterSkipNPCsAndPlayers::~CTraceFilterSkipNPCsAndPlayers(
        CTraceFilterSkipNPCsAndPlayers *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
}


// CTraceFilterSkipNPCsAndPlayers::~CTraceFilterSkipNPCsAndPlayers  (line 2869, @0x000000000208f590, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterSkipNPCsAndPlayers
// calls: operator delete
void __fastcall CTraceFilterSkipNPCsAndPlayers::~CTraceFilterSkipNPCsAndPlayers(
        CTraceFilterSkipNPCsAndPlayers *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
  operator delete(this);
}


// CTraceFilterSkipNPCsAndPlayers::ShouldHitEntity  (line 2877, @0x0000000002090490, libserver.so)  // inlines: IsNextBot
// calls: CTraceFilterSimple::ShouldHitEntity, CBaseEntity::GetMoveParent
bool __fastcall CTraceFilterSkipNPCsAndPlayers::ShouldHitEntity(
        CTraceFilterSkipNPCsAndPlayers *const this,
        CBaseEntity *pEntity)
{
  CBaseEntity *MoveParent; // rbx
  bool ShouldHitEntity; // r12

  MoveParent = pEntity;
  ShouldHitEntity = CTraceFilterSimple::ShouldHitEntity(this, pEntity);
  if ( ShouldHitEntity )
  {
    while ( MoveParent != 0 )
    {
      if ( (*(MoveParent->_vptr_IHandleEntity + 153))(MoveParent) != 0
        || MoveParent->m_bIsNPC
        || (*(MoveParent->_vptr_IHandleEntity + 140))(MoveParent) != 0
        || MoveParent->m_bIsDOTANPC )
      {
        return 0;
      }
      MoveParent = CBaseEntity::GetMoveParent(MoveParent);
    }
  }
  return ShouldHitEntity;
}


// IKTraceRay  (line 2905, @0x0000000002068bb0, libserver.so)  // inlines: EnableInteractsWith, GetBool, GetInt, TraceRay
// calls: CGamePhysicsQueryInterface::TraceRay, NDebugOverlay::Trace
// callers: CBaseAnimatingController::CalculateIKLocks
bool __fastcall IKTraceRay(
        const Ray_t *const ray,
        uint64 mask,
        CTraceFilterSkipNPCsAndPlayers *pTraceFilter,
        trace_t *pTrace)
{
  bool result; // al
  float v7; // xmm1_4
  bool v8; // [rsp+Ch] [rbp-14h]

  pTraceFilter->m_attr.m_nInteractsWith |= mask;
  result = CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, ray, pTraceFilter, pTrace);
  if ( debug_draw_footik_traces.m_pParent->m_Value.m_nValue != 0 )
  {
    v8 = result;
    NDebugOverlay::Trace(ray, pTrace, v7);
    return v8;
  }
  return result;
}


// CBaseAnimatingController::CalculateIKLocks  (line 2917, @0x0000000002074ba0, libserver.so)  // inlines: CGameTrace, CTraceFilterSkipNPCsAndPlayers, CalcAbsolutePosition, ConvertToExternalMemory, DidHit, DidHitNonWorldEntity, DotProduct, FastSqrt, GetAbsAngles, GetCollisionGroup, GetCollisionGroup_Inline, GetColumn, Init, Length, LengthSqr, Load, MatrixGetColumn, NextEntity, NodeToWorldTransform, NormalizeInPlace, Purge, Purge_FixedGrowable, Ray_t, RemoveAll, RnCollisionAttr_t, Vector, VectorAdd, VectorAligned, VectorLength, VectorMA, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator*, operator*=, operator+, operator-, operator=, operator[], ~CEntitySphereQuery, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSkeletonAnimationController::GetOwnerEntity, CTraceFilterSimple::CTraceFilterSimple, CGameTrace::Init, CIKTarget::IsActive, CEntitySphereQuery::CEntitySphereQuery, CEntitySphereQuery::GetCurrentEntity, CBaseAnimating::LookupAttachment, CBaseAnimating::GetAttachment, CIKTarget::SetPos, CIKTarget::SetAngles, IKTraceRay, CIKTarget::ClearOwner (28 total)
// callers: CBaseAnimatingController::UpdateIK
void __fastcall CBaseAnimatingController::CalculateIKLocks(
        CBaseAnimatingController *const this,
        double a2,
        float currentTime)
{
  CIKContext *m_pIk; // rax
  int m_Size; // ebx
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // r12d
  CBaseEntity *OwnerEntity; // rax
  CSkeletonInstance *m_pSkeletonInstance; // r12
  __int64 v9; // r14
  CIKTarget *v10; // r12
  float v11; // xmm1_4
  int type; // eax
  CBaseEntity *CurrentEntity; // rax
  const CBaseAnimating *v14; // rax
  const CBaseAnimating *v15; // rbx
  AttachmentHandle_t v16; // si
  __m128i v17; // xmm0
  int v18; // ebx
  float floor; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float height; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm8_4
  float v32; // xmm7_4
  float radius; // xmm1_4
  float v34; // xmm5_4
  bool v35; // cl
  float v36; // xmm9_4
  float v37; // xmm6_4
  float v38; // xmm12_4
  float v39; // xmm11_4
  CBaseEntity *v40; // rax
  uint64 v41; // rax
  float v42; // xmm1_4
  uint32 v43; // eax
  CSkeletonInstance *v44; // rbx
  vec_t x; // xmm4_4
  vec_t y; // xmm3_4
  vec_t z; // xmm2_4
  vec_t v48; // xmm3_4
  vec_t v49; // xmm0_4
  float v50; // xmm0_4
  void (__fastcall *v51)(ISceneViewDebugOverlays *, Ray_t *, QAngle *, __int64, _QWORD, _QWORD, double, _DWORD, _DWORD); // rax
  void (__fastcall *v52)(ISceneViewDebugOverlays *, Ray_t *, QAngle *, _QWORD, __int64, _QWORD, double, _DWORD, _DWORD); // rax
  CSkeletonInstance *v53; // rbx
  const Vector *AbsOrigin; // rbx
  CEntityIndex v55; // eax
  float v56; // xmm0_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm5_4
  float v62; // xmm2_4
  float v63; // [rsp+24h] [rbp-125Ch]
  float v64; // [rsp+28h] [rbp-1258h]
  float v65; // [rsp+2Ch] [rbp-1254h]
  float v66; // [rsp+38h] [rbp-1248h]
  float v67; // [rsp+3Ch] [rbp-1244h]
  __int64 v68; // [rsp+40h] [rbp-1240h]
  float absAngles; // [rsp+58h] [rbp-1228h]
  float v71; // [rsp+60h] [rbp-1220h]
  float flDist; // [rsp+64h] [rbp-121Ch]
  float flDista; // [rsp+64h] [rbp-121Ch]
  float rb; // [rsp+68h] [rbp-1218h]
  float r; // [rsp+68h] [rbp-1218h]
  vec_t ra; // [rsp+68h] [rbp-1218h]
  const QAngle *rc; // [rsp+68h] [rbp-1218h]
  Vector estGround; // [rsp+70h] [rbp-1210h] BYREF
  Vector p1; // [rsp+80h] [rbp-1200h] BYREF
  Vector p2; // [rsp+90h] [rbp-11F0h] BYREF
  Vector tmp; // [rsp+A0h] [rbp-11E0h] BYREF
  Vector start; // [rsp+B0h] [rbp-11D0h] BYREF
  Vector origin; // [rsp+C0h] [rbp-11C0h] BYREF
  QAngle angles; // [rsp+D0h] [rbp-11B0h] BYREF
  CTraceFilterSkipNPCsAndPlayers traceFilter; // [rsp+E0h] [rbp-11A0h] BYREF
  Ray_t ray; // [rsp+120h] [rbp-1160h] BYREF
  trace_t trace; // [rsp+170h] [rbp-1110h] BYREF
  CEntitySphereQuery sphere; // [rsp+220h] [rbp-1060h] BYREF
  unsigned __int64 v89; // [rsp+1248h] [rbp-38h]

  v89 = __readfsqword(0x28u);
  m_pIk = this->m_pIk;
  if ( m_pIk != 0 )
  {
    m_Size = m_pIk->m_target.m_Size;
    if ( m_pIk->m_target.m_Size != 0 )
    {
      ray.m_Start.w = 0.0;
      ray.m_Delta.w = 0.0;
      ray.m_StartOffset.w = 0.0;
      ray.m_Extents.w = 0.0;
      m_pCollision = CSkeletonAnimationController::GetOwnerEntity(this)->m_pCollision;
      if ( m_pCollision != 0 )
        m_Value = m_pCollision->m_CollisionGroup.m_Value;
      else
        m_Value = 4;
      OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
      CTraceFilterSimple::CTraceFilterSimple(&traceFilter, OwnerEntity, m_Value, 0);
      m_pSkeletonInstance = this->m_pSkeletonInstance;
      traceFilter._vptr_CTraceFilter = off_3FEDD50;
      if ( m_pSkeletonInstance->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pSkeletonInstance);
      v71 = m_pSkeletonInstance->m_mNodeToWorld.m_flMatVal[2][2];
      v67 = m_pSkeletonInstance->m_mNodeToWorld.m_flMatVal[1][2];
      v66 = m_pSkeletonInstance->m_mNodeToWorld.m_flMatVal[0][2];
      v65 = m_pSkeletonInstance->m_mNodeToWorld.m_flMatVal[2][3];
      v64 = m_pSkeletonInstance->m_mNodeToWorld.m_flMatVal[1][3];
      v63 = m_pSkeletonInstance->m_mNodeToWorld.m_flMatVal[0][3];
      if ( m_Size > 0 )
      {
        v9 = 0;
        v68 = 352 * ((m_Size - 1) + 1LL);
        while ( 1 )
        {
          while ( 1 )
          {
            memset(&trace.m_ShapeAttributes, 0, 31);
            trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
            CGameTrace::Init(&trace);
            v10 = &this->m_pIk->m_target.m_Memory.m_Memory.m_Data[v9];
            if ( CIKTarget::IsActive(v10) )
              break;
LABEL_29:
            v9 += 352;
            if ( v9 == v68 )
              return;
          }
          type = v10->type;
          if ( type == 3 )
          {
            floor = v10->est.floor;
            v20 = v10->est.pos.y - v64;
            v21 = v10->est.pos.z - v65;
            estGround.x = (v66 * floor) + (((v10->est.pos.x - v63) - ((v66 * (v10->est.pos.x - v63)) * v66)) + v63);
            estGround.y = (v67 * floor) + ((v20 - ((v67 * v20) * v67)) + v64);
            height = v10->est.height;
            v23 = v66 * height;
            v24 = v67 * height;
            v25 = v71 * height;
            v26 = -height;
            estGround.z = (floor * v71) + ((v21 - ((v71 * v21) * v71)) + v65);
            v27 = v23 + estGround.x;
            v28 = v24 + estGround.y;
            v29 = v25 + estGround.z;
            v30 = (v66 * v26) + estGround.x;
            p1.x = v27;
            v31 = (v67 * v26) + estGround.y;
            p1.y = v28;
            v32 = (v26 * v71) + estGround.z;
            radius = v10->est.radius;
            p1.z = v29;
            p2.x = v30;
            p2.y = v31;
            p2.z = v32;
            if ( radius <= 1.0 )
            {
              v36 = 1.0;
              v35 = 0;
              v38 = -1.0;
              v37 = 0.0;
              v39 = -0.0;
              v34 = 1.0;
              radius = 1.0;
              flDista = -1.0;
            }
            else
            {
              flDista = -radius;
              v34 = (radius + radius) * 0.5;
              v35 = (((v34 * v34) + (v34 * v34)) + (v34 * v34)) < 0.000001;
              v36 = ((radius + radius) + 0.0) * 0.5;
              v37 = (radius - radius) * 0.5;
              v38 = -v36;
              v39 = -v37;
            }
            r = radius;
            ray.m_Extents.x = v34;
            ray.m_Delta.x = v30 - v27;
            ray.m_Delta.y = v31 - v28;
            ray.m_Delta.z = v32 - v29;
            ray.m_Extents.y = v34;
            ray.m_Extents.z = v34;
            ray.m_IsRay = v35;
            ray.m_Start.x = v27 + v37;
            ray.m_Start.y = v28 + v37;
            ray.m_Start.z = v29 + v36;
            ray.m_StartOffset.x = v39;
            ray.m_StartOffset.y = v39;
            ray.m_StartOffset.z = v38;
            ray.m_flRadius = 0.0;
            ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                           + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
            v40 = CSkeletonAnimationController::GetOwnerEntity(this);
            v41 = (*(v40->_vptr_IHandleEntity + 123))(v40);
            IKTraceRay(&ray, v41, &traceFilter, &trace);
            if ( trace.m_pEnt != 0 && trace.m_pEnt->m_MoveType.m_Value == MoveType_t::MOVETYPE_PUSH )
            {
              absAngles = r;
              rc = CBaseEntity::GetAbsAngles(trace.m_pEnt);
              AbsOrigin = CBaseEntity::GetAbsOrigin(trace.m_pEnt);
              v55.m_Data = CEntityInstance::GetEntityIndex(trace.m_pEnt).m_Data;
              CIKTarget::SetOwner(v10, v55.m_Data, AbsOrigin, rc);
              v42 = absAngles;
            }
            else
            {
              CIKTarget::ClearOwner(v10);
              v42 = r;
            }
            if ( !trace.startsolid )
              goto LABEL_26;
            ra = v42;
            v48 = estGround.x - v10->trace.closest.x;
            v49 = estGround.z - v10->trace.closest.z;
            tmp.y = estGround.y - v10->trace.closest.y;
            tmp.x = v48;
            tmp.z = v49;
            VectorNormalize(&tmp);
            angles.z = 1.0;
            angles.x = ra;
            angles.y = ra;
            origin.x = flDista;
            origin.y = flDista;
            origin.z = 0.0;
            v50 = v10->est.height;
            start.y = estGround.y - (tmp.y * v50);
            start.z = estGround.z - (tmp.z * v50);
            start.x = estGround.x - (v50 * tmp.x);
            Ray_t::Init(&ray, &start, &estGround, &origin, &angles);
            v51 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 51);
            angles.x = ray.m_Start.x + ray.m_Delta.x;
            angles.y = ray.m_Start.y + ray.m_Delta.y;
            angles.z = ray.m_Start.z + ray.m_Delta.z;
            v51(debugoverlay, &ray, &angles, 255, 0, 0, 0.0, 0, 0);
            IKTraceRay(&ray, 0x87001u, &traceFilter, &trace);
            if ( !trace.startsolid )
            {
              v57 = v10->est.height;
              angles.x = ra;
              v58 = -v57;
              angles.y = ra;
              p1 = trace.endpos;
              angles.z = 1.0;
              origin.x = flDista;
              origin.y = flDista;
              p2.x = (v66 * v58) + trace.endpos.x;
              origin.z = 0.0;
              p2.y = (v67 * v58) + trace.endpos.y;
              p2.z = (v58 * v71) + trace.endpos.z;
              Ray_t::Init(&ray, &p1, &p2, &origin, &angles);
              IKTraceRay(&ray, 0x87001u, &traceFilter, &trace);
            }
            v52 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 51);
            angles.z = ray.m_Start.z + ray.m_Delta.z;
            angles.x = ray.m_Start.x + ray.m_Delta.x;
            angles.y = ray.m_Start.y + ray.m_Delta.y;
            v52(debugoverlay, &ray, &angles, 0, 255, 0, 0.0, 0, 0);
            if ( trace.startsolid )
            {
              if ( trace.m_ShapeAttributes.m_nEntityId != 0x8000 )
                goto LABEL_28;
              CIKTarget::SetPos(v10, &trace.endpos);
              v53 = this->m_pSkeletonInstance;
              if ( v53->m_bDirtyAbsTransform.m_value )
                CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pSkeletonInstance);
              v9 += 352;
              CIKTarget::SetAngles(v10, &v53->m_angAbsRotation);
              CIKTarget::SetOnWorld(v10, 1);
              if ( v9 == v68 )
                return;
            }
            else
            {
LABEL_26:
              if ( trace.m_ShapeAttributes.m_nEntityId == 0x8000 )
              {
                v56 = ((v66 * trace.plane.normal.x) + (v67 * trace.plane.normal.y)) + (v71 * trace.plane.normal.z);
                if ( v56 < 0.83200002 )
                {
                  v59 = trace.plane.normal.x - (v66 * v56);
                  v60 = trace.plane.normal.y - (v67 * v56);
                  v61 = trace.plane.normal.z - (v56 * v71);
                  v62 = fsqrt(0.30777597 / (((v59 * v59) + (v60 * v60)) + (v61 * v61)));
                  trace.plane.normal.x = (v59 * v62) + (v66 * 0.83200002);
                  trace.plane.normal.y = (v60 * v62) + (v67 * 0.83200002);
                  trace.plane.normal.z = (v62 * v61) + (0.83200002 * v71);
                }
                CIKTarget::SetPosWithNormalOffset(v10, &trace.endpos, &trace.plane.normal);
                CIKTarget::SetNormal(v10, &trace.plane.normal);
                CIKTarget::SetOnWorld(v10, 1);
                x = estGround.x;
                y = estGround.y;
                z = estGround.z;
                if ( (((v66 * estGround.x) + (v67 * estGround.y)) + (v71 * estGround.z)) <= (((v10->est.pos.x * v66)
                                                                                            + (v10->est.pos.y * v67))
                                                                                           + (v10->est.pos.z * v71)) )
                  goto LABEL_29;
              }
              else
              {
                if ( trace.fraction >= 1.0 )
                  goto LABEL_28;
                CIKTarget::SetPos(v10, &trace.endpos);
                v44 = this->m_pSkeletonInstance;
                if ( v44->m_bDirtyAbsTransform.m_value )
                  CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pSkeletonInstance);
                CIKTarget::SetAngles(v10, &v44->m_angAbsRotation);
                x = estGround.x;
                y = estGround.y;
                z = estGround.z;
                if ( (((v66 * estGround.x) + (v67 * estGround.y)) + (v71 * estGround.z)) <= (((v10->est.pos.x * v66)
                                                                                            + (v10->est.pos.y * v67))
                                                                                           + (v10->est.pos.z * v71)) )
                  goto LABEL_29;
              }
              v9 += 352;
              v10->est.pos.x = x;
              v10->est.pos.y = y;
              v10->est.pos.z = z;
              if ( v9 == v68 )
                return;
            }
          }
          else
          {
            if ( type != 5 )
              goto LABEL_29;
            flDist = v10->est.radius;
            CEntitySphereQuery::CEntitySphereQuery(&sphere, &v10->est.pos, v11);
            while ( 1 )
            {
              CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
              if ( CurrentEntity == 0 )
                break;
              v14 = (*(CurrentEntity->_vptr_IHandleEntity + 43))(CurrentEntity);
              v15 = v14;
              if ( v14 != 0 )
              {
                v16 = CBaseAnimating::LookupAttachment(v14, v10->offset.pAttachmentName);
                if ( v16 != 0 )
                {
                  CBaseAnimating::GetAttachment(v15, v16, &origin, &angles);
                  rb = (((v10->est.pos.x - origin.x) * (v10->est.pos.x - origin.x))
                      + ((v10->est.pos.y - origin.y) * (v10->est.pos.y - origin.y)))
                     + ((v10->est.pos.z - origin.z) * (v10->est.pos.z - origin.z));
                  v17 = LODWORD(rb);
                  *v17.m128i_i32 = fsqrt(rb);
                  *&v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
                  if ( *v17.m128i_i32 < flDist )
                  {
                    CIKTarget::SetPos(v10, &origin);
                    CIKTarget::SetAngles(v10, &angles);
                    flDist = *&v18;
                  }
                }
              }
              ++sphere.m_listIndex;
            }
            sphere.m_results.m_list.m_Size = 0;
            v43 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
            if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount < 0
              || sphere.m_results.m_list.m_Memory.m_pMemory == &sphere.m_results.m_list.m_Memory.m_FixedMemory )
            {
              if ( v43 == 0 )
                CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
            }
            else if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v43 == 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
            }
            if ( flDist >= v10->est.radius )
            {
LABEL_28:
              CIKTarget::IKFailed(v10);
              goto LABEL_29;
            }
            v9 += 352;
            if ( v9 == v68 )
              return;
          }
        }
      }
    }
  }
}


// AdjustTransformForScale  (line 3134, @0x0000000002068c10, libserver.so)  // inlines: MatrixSetColumn, SetColumn, VectorScale, operator*=, operator+=, operator-=
void __fastcall AdjustTransformForScale(
        matrix3x4_t *const rootTransform,
        const Vector *const adjOrigin,
        float a3,
        float flModelScale)
{
  float z; // xmm3_4
  float x; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm0_4

  if ( a3 < 0.99999988 || a3 > 1.0000001 )
  {
    z = adjOrigin->z;
    x = adjOrigin->x;
    v6 = rootTransform->m_flMatVal[2][3] - z;
    rootTransform->m_flMatVal[1][3] = ((rootTransform->m_flMatVal[1][3] - adjOrigin->y) * a3) + adjOrigin->y;
    v7 = (v6 * a3) + z;
    v8 = rootTransform->m_flMatVal[0][3];
    rootTransform->m_flMatVal[2][3] = v7;
    rootTransform->m_flMatVal[0][0] = rootTransform->m_flMatVal[0][0] * a3;
    v9 = rootTransform->m_flMatVal[0][1] * a3;
    rootTransform->m_flMatVal[0][3] = ((v8 - x) * a3) + x;
    rootTransform->m_flMatVal[0][1] = v9;
    rootTransform->m_flMatVal[0][2] = rootTransform->m_flMatVal[0][2] * a3;
    rootTransform->m_flMatVal[1][0] = rootTransform->m_flMatVal[1][0] * a3;
    rootTransform->m_flMatVal[1][1] = rootTransform->m_flMatVal[1][1] * a3;
    rootTransform->m_flMatVal[1][2] = rootTransform->m_flMatVal[1][2] * a3;
    rootTransform->m_flMatVal[2][0] = rootTransform->m_flMatVal[2][0] * a3;
    v10 = rootTransform->m_flMatVal[2][1] * a3;
    v11 = a3 * rootTransform->m_flMatVal[2][2];
    rootTransform->m_flMatVal[2][1] = v10;
    rootTransform->m_flMatVal[2][2] = v11;
  }
}


// CBaseAnimatingController::GetBlendedLinearVelocity  (line 3157, @0x0000000002068d00, libserver.so)  // inlines: GetModelData, GetModelPtr, Vector, VectorMultiply, VectorScale, operator const RuntimeClass_t*
// calls: GetSequenceLinearMotionAndDuration
// callers: CBaseAnimating::SetMovementPoseParams
void __fastcall CBaseAnimatingController::GetBlendedLinearVelocity(CBaseAnimatingController *const this, Vector *pVec)
{
  CNetworkArrayBase<float,24,CBaseAnimatingController::NetworkVar_m_flPoseParameter> *p_m_flPoseParameter; // r13
  int (**vptr_CSkeletonAnimationController)(...); // rax
  HSequence v6; // eax
  const ResourceBindingBase_t *m_pBinding; // rcx
  const CModel *m_pData; // rdi
  float SequenceLinearMotionAndDuration; // xmm0_4
  vec_t v10; // xmm1_4
  Vector vecDist; // [rsp+0h] [rbp-30h] BYREF

  p_m_flPoseParameter = &this->m_flPoseParameter;
  vecDist.x = 0.0;
  vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
  vecDist.y = 0.0;
  vecDist.z = 0.0;
  v6.m_Data = vptr_CSkeletonAnimationController[24](this);
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  SequenceLinearMotionAndDuration = GetSequenceLinearMotionAndDuration(
                                      m_pData,
                                      v6,
                                      p_m_flPoseParameter->m_Value,
                                      &vecDist);
  if ( SequenceLinearMotionAndDuration > 0.0 )
  {
    pVec->x = vecDist.x * (1.0 / SequenceLinearMotionAndDuration);
    v10 = (1.0 / SequenceLinearMotionAndDuration) * vecDist.z;
    pVec->y = vecDist.y * (1.0 / SequenceLinearMotionAndDuration);
    pVec->z = v10;
  }
}


// CBaseAnimatingController::CopySequenceTransitions  (line 3179, @0x0000000002069290, libserver.so)
// calls: CSequenceTransitioner2::CopyFrom
void __fastcall CBaseAnimatingController::CopySequenceTransitions(
        CBaseAnimatingController *const this,
        CBaseAnimatingController *pCopyFrom)
{
  CSequenceTransitioner2::CopyFrom(&this->m_SequenceTransitioner, &pCopyFrom->m_SequenceTransitioner);
}


// CBaseAnimatingController::SetupSequences  (line 3185, @0x0000000002067ab0, libserver.so)  // inlines: CAnimationDecodeOp, CEntityHandle, GetEHandle, GetEntryIndex, GetInterpolatedTime, GetOperation, GetSerialNumber, HSequence, Init
// calls: CSkeletonAnimationController::GetOwnerEntity, CBaseAnimatingController::GetNumPoseParameters, CSequenceTransitioner2::GetDecodeOperations
void __fastcall CBaseAnimatingController::SetupSequences(CBaseAnimatingController *const this, ISequenceSetup *pSetup)
{
  int v3; // r12d
  CBaseEntity *OwnerEntity; // rax
  CEntityIdentity *m_pEntity; // rax
  int v7; // edx
  __int16 v8; // cx
  CAnimationDecodeOp *v9; // r14
  CAnimationDecodeOp *v10; // rax
  int32 m_Data; // eax
  unsigned int v12; // r15d
  float m_Value; // xmm0_4
  int (*v14)(...); // r10
  unsigned int NumPoseParameters; // eax
  int (*v16)(...); // [rsp+8h] [rbp-248h]
  int v17[4]; // [rsp+10h] [rbp-240h] BYREF
  CAnimationDecodeOp op[32]; // [rsp+20h] [rbp-230h] BYREF
  char v19; // [rsp+220h] [rbp-30h] BYREF

  v3 = -1;
  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  if ( OwnerEntity != 0 )
  {
    m_pEntity = OwnerEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(op[0].m_hSequence.m_Data) = v8 | op[0].m_hSequence.m_Data & 0x8000;
      v3 = (v7 << 15) | op[0].m_hSequence.m_Data & 0x7FFF;
    }
  }
  v9 = op;
  v10 = op;
  do
  {
    v10->m_hSequence.m_Data = -1;
    ++v10;
    v10[-1].m_flCycle = 0.0;
    v10[-1].m_flWeight = 0.0;
    v10[-1].m_source = animopsource_t::ANIM_OP_UNSPECIFIED;
  }
  while ( v10 != &v19 );
  m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
  v12 = 1;
  op[0].m_source = animopsource_t::ANIM_OP_BASELAYER;
  op[0].m_flCycle = this->m_baseLayer.m_flCycle.m_Value;
  m_Value = this->m_baseLayer.m_flWeight.m_Value.m_Value;
  op[0].m_hSequence.m_Data = m_Data;
  op[0].m_flWeight = m_Value;
  if ( anim_sequence_transitioner.m_pParent->m_Value.m_nValue != 0 )
    v12 = CSequenceTransitioner2::GetDecodeOperations(&this->m_SequenceTransitioner, 31, &op[1], 0) + 1;
  if ( op[0].m_hSequence.m_Data == -1 )
  {
    --v12;
    v9 = &op[1];
  }
  v14 = *pSetup->_vptr_ISequenceSetup;
  v17[0] = v3;
  v16 = v14;
  NumPoseParameters = CBaseAnimatingController::GetNumPoseParameters(this);
  v16(pSetup, v12, v9, NumPoseParameters, &this->m_flPoseParameter, v17, gpGlobals->realtime);
}


// CBaseAnimatingController::SetupAnimationHistoryContext  (line 3227, @0x0000000002058a60, libserver.so)
void __fastcall CBaseAnimatingController::SetupAnimationHistoryContext(
        CBaseAnimatingController *const this,
        ISkeletonAnimationHistoryContext *pContext)
{
  ;
}


// CBaseAnimatingController::GetNumFlexControllers  (line 3263, @0x00000000020692b0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::NumFlexControllers
LocalFlexController_t __fastcall CBaseAnimatingController::GetNumFlexControllers(CBaseAnimatingController *const this)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::NumFlexControllers(*m_pBinding);
  else
    return 0;
}


// CBaseAnimatingController::GetFlexDescFacs  (line 3273, @0x00000000020692e0, libserver.so)
const char *__fastcall CBaseAnimatingController::GetFlexDescFacs(CBaseAnimatingController *const this, int iFlexDesc)
{
  return 0;
}


// CBaseAnimatingController::GetFlexControllerName  (line 3290, @0x00000000020692f0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::GetFlexControllerName
const char *__fastcall CBaseAnimatingController::GetFlexControllerName(
        CBaseAnimatingController *const this,
        LocalFlexController_t iFlexController)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::GetFlexControllerName(*m_pBinding, iFlexController);
  else
    return 0;
}


// CBaseAnimatingController::GetFlexControllerType  (line 3299, @0x0000000002069320, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CModel::GetFlexControllerType
const char *__fastcall CBaseAnimatingController::GetFlexControllerType(
        CBaseAnimatingController *const this,
        LocalFlexController_t iFlexController)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::GetFlexControllerType(*m_pBinding, iFlexController);
  else
    return 0;
}


// CBaseAnimatingController::GetGroundSpeedVelocity  (line 3312, @0x0000000002069350, libserver.so)  // inlines: GetLocalAngles, GetModelData, GetModelPtr, VectorMultiply, operator const RuntimeClass_t*, operator*, operator=
// calls: CBaseAnimatingController::GetSequenceMoveYaw, AngleVectorsForward
// callers: CBaseAnimating::GetGroundSpeedVelocity
Vector __fastcall CBaseAnimatingController::GetGroundSpeedVelocity(const CBaseAnimatingController *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  HSequence v3; // eax
  float SequenceMoveYaw; // xmm0_4
  CSkeletonInstance *m_pSkeletonInstance; // rax
  float m_flGroundSpeed; // xmm0_4
  vec_t z; // eax
  QAngle vecAngles; // [rsp+10h] [rbp-40h] BYREF
  Vector vecVelocity; // [rsp+20h] [rbp-30h] BYREF
  Vector v12; // [rsp+30h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && m_pBinding->m_pData != 0 )
  {
    v3.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
    SequenceMoveYaw = CBaseAnimatingController::GetSequenceMoveYaw(this, v3);
    m_pSkeletonInstance = this->m_pSkeletonInstance;
    vecAngles.x = 0.0;
    vecAngles.z = 0.0;
    vecAngles.y = SequenceMoveYaw + m_pSkeletonInstance->m_angRotation.m_Value.y;
    AngleVectorsForward(&vecAngles, &vecVelocity);
    m_flGroundSpeed = this->m_flGroundSpeed;
    vecVelocity.z = vecVelocity.z * m_flGroundSpeed;
    *&vecVelocity.x = __PAIR64__(vecVelocity.y * m_flGroundSpeed, m_flGroundSpeed * vecVelocity.x);
    v12 = vecVelocity;
  }
  else
  {
    z = vec3_origin.z;
    *&v12.x = *&vec3_origin.x;
    v12.z = z;
  }
  *&result.x = *&v12.x;
  result.z = v12.z;
  return result;
}


// CBaseAnimatingController::GetInstantaneousVelocity  (line 3337, @0x0000000002069460, libserver.so)  // inlines: FastSqrt, GetCycle, GetModelData, GetModelPtr, GetPlaybackRate, GetSequenceCycleRate, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator const RuntimeClass_t*, operator*=
// calls: CBaseAnimatingController::GetSequenceCycleRate, CModel::pSeqdesc
// callers: CBaseAnimating::GetInstantaneousVelocity
float __fastcall CBaseAnimatingController::GetInstantaneousVelocity(
        const CBaseAnimatingController *const this,
        double a2,
        float flInterval)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r12
  HSequence v6; // eax
  const ResourceBindingBase_t *v7; // rcx
  const CModel *v8; // rsi
  HSequence v9; // eax
  const ISequence *v10; // rax
  float v11; // xmm1_4
  float m_Value; // [rsp+8h] [rbp-28h]
  float flNextCycle; // [rsp+Ch] [rbp-24h]
  float flNextCyclea; // [rsp+Ch] [rbp-24h]
  Vector vecVelocity; // [rsp+10h] [rbp-20h] BYREF

  flNextCycle = *&a2;
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0.0;
  m_pData = m_pBinding->m_pData;
  if ( m_pBinding->m_pData == 0 )
    return 0.0;
  m_Value = this->m_baseLayer.m_flCycle.m_Value;
  v6.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this, a2, flInterval);
  v7 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v7 != 0 )
    v8 = v7->m_pData;
  else
    v8 = 0;
  flNextCyclea = ((CBaseAnimatingController::GetSequenceCycleRate(this, v8, v6) * flNextCycle)
                * this->m_flPlaybackRate.m_Value.m_Value)
               + m_Value;
  v9.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
  v10 = CModel::pSeqdesc(m_pData, v9);
  (*(v10->_vptr_IBaseSequence + 59))(v10, &this->m_flPoseParameter, &vecVelocity, flNextCyclea);
  v11 = this->m_flPlaybackRate.m_Value.m_Value;
  return fsqrt(
           (((vecVelocity.x * v11) * (vecVelocity.x * v11)) + ((vecVelocity.y * v11) * (vecVelocity.y * v11)))
         + ((v11 * vecVelocity.z) * (v11 * vecVelocity.z)));
}


// CBaseAnimatingController::GetEntryVelocity  (line 3356, @0x00000000020695b0, libserver.so)  // inlines: FastSqrt, GetModelData, GetModelPtr, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator const RuntimeClass_t*
// calls: CModel::pSeqdesc
// callers: CBaseAnimating::GetEntryVelocity
float __fastcall CBaseAnimatingController::GetEntryVelocity(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel *const *m_pBinding; // rax
  const ISequence *v4; // rax
  Vector vecVelocity; // [rsp+10h] [rbp-20h] BYREF

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || *m_pBinding == 0 )
    return 0.0;
  v4 = CModel::pSeqdesc(*m_pBinding, hSequence);
  (*(v4->_vptr_IBaseSequence + 59))(v4, &this->m_flPoseParameter, &vecVelocity, 0.0);
  return fsqrt(((vecVelocity.x * vecVelocity.x) + (vecVelocity.y * vecVelocity.y)) + (vecVelocity.z * vecVelocity.z));
}


// CBaseAnimatingController::GetExitVelocity  (line 3370, @0x0000000002069690, libserver.so)  // inlines: FastSqrt, GetModelData, GetModelPtr, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator const RuntimeClass_t*
// calls: CModel::pSeqdesc
// callers: CBaseAnimating::GetExitVelocity
float __fastcall CBaseAnimatingController::GetExitVelocity(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel *const *m_pBinding; // rax
  const ISequence *v4; // rax
  Vector vecVelocity; // [rsp+10h] [rbp-20h] BYREF

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || *m_pBinding == 0 )
    return 0.0;
  v4 = CModel::pSeqdesc(*m_pBinding, hSequence);
  (*(v4->_vptr_IBaseSequence + 59))(v4, &this->m_flPoseParameter, &vecVelocity, 1.0);
  return fsqrt(((vecVelocity.x * vecVelocity.x) + (vecVelocity.y * vecVelocity.y)) + (vecVelocity.z * vecVelocity.z));
}


// CBaseAnimatingController::GetIntervalMovement  (line 3387, @0x0000000002069fb0, libserver.so)  // inlines: GetCycle, GetLocalAngles, GetModelData, GetModelPtr, GetSequenceCycleRate, Init, SequenceLoops, VectorAdd, operator const RuntimeClass_t*, operator+, operator=
// calls: CBaseAnimatingController::GetSequenceCycleRate, CBaseAnimatingController::IsSequenceLooping, VectorYawRotate
__int64 __fastcall CBaseAnimatingController::GetIntervalMovement(
        CBaseAnimatingController *const this,
        float flIntervalUsed,
        bool *const bMoveSeqFinished,
        Vector *const newPosition,
        QAngle *const newAngles)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  void *m_pData; // r15
  HSequence v11; // eax
  const ResourceBindingBase_t *v12; // rcx
  const CModel *v13; // rsi
  HSequence v14; // eax
  const ResourceBindingBase_t *v15; // rcx
  const CModel *v16; // rsi
  bool IsSequenceLooping; // al
  int v18; // xmm1_4
  unsigned int v19; // eax
  __int64 result; // rax
  float v21; // xmm1_4
  CSkeletonInstance *v22; // rdx
  CSkeletonInstance *v23; // rdx
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CSkeletonInstance *m_pSkeletonInstance; // rdx
  vec_t v27; // xmm1_4
  vec_t v28; // xmm2_4
  __int64 (__fastcall *v29)(IAnimationSystem *, void *, _QWORD, CNetworkArrayBase<float,24,CBaseAnimatingController::NetworkVar_m_flPoseParameter> *, Vector *, QAngle *, float, float); // [rsp+0h] [rbp-60h]
  float v30; // [rsp+8h] [rbp-58h]
  float flNextCyclea; // [rsp+Ch] [rbp-54h]
  float flNextCycleb; // [rsp+Ch] [rbp-54h]
  unsigned int flNextCyclec; // [rsp+Ch] [rbp-54h]
  Vector deltaPos; // [rsp+10h] [rbp-50h] BYREF
  QAngle deltaAngles; // [rsp+20h] [rbp-40h] BYREF

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  m_pData = m_pBinding->m_pData;
  if ( m_pBinding->m_pData == 0 )
    return 0;
  v11.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
  v12 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v12 != 0 )
    v13 = v12->m_pData;
  else
    v13 = 0;
  flNextCyclea = ((flIntervalUsed * CBaseAnimatingController::GetSequenceCycleRate(this, v13, v11))
                * this->m_flPlaybackRate.m_Value.m_Value)
               + this->m_baseLayer.m_flCycle.m_Value;
  v14.m_Data = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
  v15 = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v15 != 0 )
    v16 = v15->m_pData;
  else
    v16 = 0;
  IsSequenceLooping = CBaseAnimatingController::IsSequenceLooping(this, v16, v14);
  v18 = LODWORD(flNextCyclea);
  if ( IsSequenceLooping || flNextCyclea <= 1.0 )
  {
    *bMoveSeqFinished = 0;
  }
  else
  {
    *bMoveSeqFinished = 1;
    v18 = 1065353216;
  }
  v30 = *&v18;
  flNextCycleb = this->m_baseLayer.m_flCycle.m_Value;
  v29 = *(*g_pAnimationSystem + 160LL);
  v19 = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
  result = v29(g_pAnimationSystem, m_pData, v19, &this->m_flPoseParameter, &deltaPos, &deltaAngles, flNextCycleb, v30);
  if ( result != 0 )
  {
    flNextCyclec = result;
    VectorYawRotate(&deltaPos, v21, &deltaPos);
    m_pSkeletonInstance = this->m_pSkeletonInstance;
    v27 = m_pSkeletonInstance->m_vecOrigin.m_Value.y + deltaPos.y;
    v28 = m_pSkeletonInstance->m_vecOrigin.m_Value.x + deltaPos.x;
    newPosition->z = m_pSkeletonInstance->m_vecOrigin.m_Value.z + deltaPos.z;
    newPosition->y = v27;
    newPosition->x = v28;
    newAngles->y = 0.0;
    newAngles->x = 0.0;
    newAngles->z = 0.0;
    newAngles->y = this->m_pSkeletonInstance->m_angRotation.m_Value.y + deltaAngles.y;
    return flNextCyclec;
  }
  else
  {
    v22 = this->m_pSkeletonInstance;
    newPosition->x = v22->m_vecOrigin.m_Value.x;
    newPosition->y = v22->m_vecOrigin.m_Value.y;
    newPosition->z = v22->m_vecOrigin.m_Value.z;
    v23 = this->m_pSkeletonInstance;
    y = v23->m_angRotation.m_Value.y;
    z = v23->m_angRotation.m_Value.z;
    newAngles->x = v23->m_angRotation.m_Value.x;
    newAngles->y = y;
    newAngles->z = z;
  }
  return result;
}


// CBaseAnimatingController::GetSequenceMovement  (line 3433, @0x0000000002069770, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// callers: CBaseAnimating::GetSequenceMovement
bool __fastcall CBaseAnimatingController::GetSequenceMovement(
        const CBaseAnimatingController *const this,
        HSequence hSequence,
        float fromCycle,
        float toCycle,
        Vector *const deltaPosition,
        QAngle *const deltaAngles)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  void *m_pData; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  return m_pBinding != 0
      && (m_pData = m_pBinding->m_pData) != 0
      && (*(*g_pAnimationSystem + 160LL))(
           g_pAnimationSystem,
           m_pData,
           hSequence.m_Data,
           &this->m_flPoseParameter,
           deltaPosition,
           deltaAngles,
           fromCycle,
           toCycle);
}


// CBaseAnimatingController::GetMovementFrame  (line 3447, @0x0000000002069840, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
float __fastcall CBaseAnimatingController::GetMovementFrame(
        const CBaseAnimatingController *const this,
        double a2,
        float flDist)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  void *m_pData; // r12
  float (__fastcall *v6)(IAnimationSystem *, void *, _QWORD, CNetworkArrayBase<float,24,CBaseAnimatingController::NetworkVar_m_flPoseParameter> *, float); // r14
  unsigned int v7; // eax
  float flDista; // [rsp+Ch] [rbp-24h]

  flDista = *&a2;
  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0.0;
  m_pData = m_pBinding->m_pData;
  if ( m_pBinding->m_pData == 0 )
    return 0.0;
  v6 = *(*g_pAnimationSystem + 200LL);
  v7 = (*(this->_vptr_CSkeletonAnimationController + 24))(this, a2, flDist);
  return v6(g_pAnimationSystem, m_pData, v7, &this->m_flPoseParameter, flDista);
}


// CBaseAnimatingController::HasMovement  (line 3462, @0x00000000020698c0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
bool __fastcall CBaseAnimatingController::HasMovement(const CBaseAnimatingController *const this, HSequence hSequence)
{
  __int64 v2; // rbp
  const ResourceBindingBase_t *m_pBinding; // rax
  void *m_pData; // rax
  Vector deltaPos; // [rsp+0h] [rbp-28h] BYREF
  QAngle deltaAngles; // [rsp+10h] [rbp-18h] BYREF
  __int64 v8; // [rsp+20h] [rbp-8h]

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  m_pData = m_pBinding->m_pData;
  if ( m_pData == 0 )
    return 0;
  v8 = v2;
  return (*(*g_pAnimationSystem + 160LL))(
           g_pAnimationSystem,
           m_pData,
           hSequence.m_Data,
           &this->m_flPoseParameter,
           &deltaPos,
           &deltaAngles,
           0.0,
           1.0);
}


// CBaseAnimatingController::SetPoseParameterInterpolatorLooping  (line 3477, @0x0000000002069920, libserver.so)
void __fastcall CBaseAnimatingController::SetPoseParameterInterpolatorLooping(
        CBaseAnimatingController *const this,
        const CModel *pNewModel)
{
  ;
}


// CBaseAnimatingController::OnNewModel  (line 3509, @0x0000000002084790, libserver.so)  // inlines: GetSequence, IsProcessingQueuedActivatesAndPostDataUpdates, MarkCachedSequenceDataDirty, SetSequence, V_memcpy, V_memset, memcpy, memset
// calls: CModel::GetNumPoseParameters, CSequenceTransitioner2::Reset, memset, memcpy, CModel::GetPoseParameterName, CModel::LookupPoseParameter, CBaseAnimatingController::SetPoseParameter, CSkeletonAnimationController::GetOwnerEntity, CBaseAnimatingController::ResetIK, CModel::FirstSequence, CModel::GetSequenceName, CModel::LookupSequence (13 total)
// callers: CBaseAnimatingOverlayController::OnNewModel
void __fastcall CBaseAnimatingController::OnNewModel(
        CBaseAnimatingController *const this,
        const CModel *pOldModel,
        const CModel *pNewModel)
{
  int NumPoseParameters; // eax
  size_t v6; // r15
  int v7; // ebx
  void *v8; // rsp
  unsigned __int64 v9; // r13
  float v10; // xmm1_4
  size_t v11; // rdx
  void *v12; // rsp
  __int64 v13; // r15
  const char *PoseParameterName; // rax
  int v15; // eax
  __int64 v16; // r15
  int v17; // esi
  CBaseEntity *OwnerEntity; // rax
  __int64 m_Data; // rsi
  const char *SequenceName; // rax
  HSequence v21; // eax
  int (**vptr_CSkeletonAnimationController)(...); // rcx
  __int64 v23; // rsi
  CBaseAnimatingController *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // [rsp+2h] [rbp-60h] BYREF
  float *pOldPoseParams; // [rsp+12h] [rbp-50h]
  const CModel *pOldModela; // [rsp+1Ah] [rbp-48h]
  _QWORD v29[8]; // [rsp+22h] [rbp-40h] BYREF

  pOldModela = pOldModel;
  v29[1] = __readfsqword(0x28u);
  this->m_flCachedSequenceCycleRate = -1.0;
  this->m_flCachedGroundSpeed = -1.0;
  this->m_flCachedOneMinusLastVisibleCycle = -1.0;
  if ( pNewModel != 0 )
  {
    NumPoseParameters = CModel::GetNumPoseParameters(pNewModel);
    v6 = NumPoseParameters;
    v7 = NumPoseParameters;
    this->m_bModelHasNoPoseParams = NumPoseParameters == 0;
    CSequenceTransitioner2::Reset(&this->m_SequenceTransitioner);
    v8 = alloca(((v6 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v9 = v29 & 0xFFFFFFFFFFFFFFEFLL;
    memset((v29 & 0xFFFFFFFFFFFFFFEFLL), 0, v6);
    if ( pOldModela == 0 )
    {
      if ( v7 <= 0 )
        goto LABEL_12;
      goto LABEL_8;
    }
  }
  else
  {
    this->m_bModelHasNoPoseParams = 1;
    v7 = 0;
    CSequenceTransitioner2::Reset(&this->m_SequenceTransitioner);
    v9 = &v26 & 0xFFFFFFFFFFFFFFEFLL;
    if ( pOldModela == 0 )
      goto LABEL_12;
  }
  v11 = 4LL * CModel::GetNumPoseParameters(pOldModela);
  v12 = alloca(((v11 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  pOldPoseParams = (v29 & 0xFFFFFFFFFFFFFFEFLL);
  memcpy((v29 & 0xFFFFFFFFFFFFFFEFLL), &this->m_flPoseParameter, v11);
  if ( v7 <= 0 )
    goto LABEL_12;
  v13 = 0;
  do
  {
    PoseParameterName = CModel::GetPoseParameterName(pNewModel, v13);
    v15 = CModel::LookupPoseParameter(pOldModela, PoseParameterName);
    if ( v15 >= 0 )
    {
      CBaseAnimatingController::SetPoseParameter(this, v13, pOldPoseParams[v15], v10);
      *(v13 + v9) = 1;
    }
    ++v13;
  }
  while ( v7 > v13 );
LABEL_8:
  v16 = 0;
  do
  {
    while ( *(v16 + v9) != 0 )
    {
      if ( v7 <= ++v16 )
        goto LABEL_12;
    }
    v17 = v16++;
    CBaseAnimatingController::SetPoseParameter(this, v17, 0.0, v10);
  }
  while ( v7 > v16 );
LABEL_12:
  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  (*(OwnerEntity->_vptr_IHandleEntity + 38))(OwnerEntity);
  CBaseAnimatingController::ResetIK(this);
  if ( *(&stru_19F20.r_offset + g_pEntitySystem) == 0 )
  {
    if ( pNewModel != 0 )
    {
      if ( CModel::FirstSequence(pNewModel).m_Data == -1 || pOldModela == 0 )
      {
        v25 = (*(this->_vptr_CSkeletonAnimationController + 24))(this);
        vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
        v23 = v25;
        v24 = this;
      }
      else
      {
        m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
        if ( m_Data == -1 )
        {
          (*(this->_vptr_CSkeletonAnimationController + 23))(this, m_Data, 0);
          return;
        }
        SequenceName = CModel::GetSequenceName(pOldModela, m_Data);
        v21.m_Data = CModel::LookupSequence(pNewModel, SequenceName).m_Data;
        vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
        v23 = v21.m_Data;
        v24 = this;
      }
      vptr_CSkeletonAnimationController[23](v24, v23, 0);
    }
    else
    {
      (*(this->_vptr_CSkeletonAnimationController + 23))(this, 0xFFFFFFFFLL, 0);
    }
  }
}


// InitPose  (line 3675, @0x0000000002069930, libserver.so)  // inlines: Init, InitFromQuaternion, operator=
// calls: CModel::bonePosParentSpace, CModel::boneRotParentSpace, CModel::NumBones
void __fastcall InitPose(const CModel *pModel, CTransform *xforms)
{
  int v3; // r13d
  QuaternionAligned *p_m_orientation; // r12
  CTransform *v5; // rbx
  int v6; // esi
  Vector v7; // 0:kr00_12.12

  v3 = 0;
  p_m_orientation = &xforms->m_orientation;
  v5 = xforms;
  while ( v3 < CModel::NumBones(pModel) )
  {
    p_m_orientation += 2;
    v7 = CModel::bonePosParentSpace(pModel, v3);
    v6 = v3++;
    ++v5;
    p_m_orientation[-2] = CModel::boneRotParentSpace(pModel, v6);
    v5[-1].m_vPosition.x = v7.x;
    v5[-1].m_vPosition.w = 0.0;
    v5[-1].m_vPosition.y = v7.y;
    v5[-1].m_vPosition.z = v7.z;
  }
}


// CalcBoneAdj  (line 3690, @0x0000000002069a00, libserver.so)
void __fastcall CalcBoneAdj(const CModel *pStudioHdr, CTransform *xforms, const float *controllers)
{
  ;
}


// CBaseAnimatingController::CopyAnimationDataFrom  (line 3776, @0x0000000002069a10, libserver.so)  // inlines: SetSequence
// calls: CBaseAnimatingController::SetCycle
void __fastcall CBaseAnimatingController::CopyAnimationDataFrom(
        CBaseAnimatingController *const this,
        CBaseAnimatingController *pSource)
{
  float v2; // xmm1_4
  unsigned int v5; // eax

  CBaseAnimatingController::SetCycle(this, pSource->m_baseLayer.m_flCycle.m_Value, v2);
  v5 = (*(pSource->_vptr_CSkeletonAnimationController + 24))(pSource);
  (*(this->_vptr_CSkeletonAnimationController + 23))(this, v5, 0);
}


// CBaseAnimatingController::IsSequenceLooping  (line 3786, @0x0000000002069a50, libserver.so)
// calls: CBaseAnimatingController::IsValidSequence, CModel::IsSequenceLooping
// callers: CBaseAnimating::IsSequenceLooping, CBaseAnimating::SequenceLoops, CAnimationLayer::DetectAnimEvents, CBaseAnimatingController::DetectAnimEvents, CBaseAnimatingController::GetIntervalMovement, CBaseAnimatingController::AnimationFrameAdvanceInternal, CBaseAnimatingController::SetSequence, CBaseAnimatingOverlayController::AddLayeredSequence, CSequenceTransitioner2::AddCurrentSequenceToTransition, CSequenceTransitioner2::AnimationFrameAdvance
bool __fastcall CBaseAnimatingController::IsSequenceLooping(
        const CBaseAnimatingController *const this,
        const CModel *pModel,
        HSequence hSequence)
{
  return CBaseAnimatingController::IsValidSequence(this, hSequence) && CModel::IsSequenceLooping(pModel, hSequence);
}


// CBaseAnimatingController::UpdateParameters  (line 3794, @0x0000000002059660, libserver.so)
// calls: CSkeletonAnimationController::GetOwnerEntity
void __fastcall CBaseAnimatingController::UpdateParameters(
        const CBaseAnimatingController *const this,
        IAnimParameterListInstance *pParams)
{
  CBaseEntity *OwnerEntity; // rax

  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this);
  (*(OwnerEntity->_vptr_IHandleEntity + 145))(OwnerEntity, pParams);
}


// CBaseAnimatingController::GatherSequences  (line 3799, @0x00000000020886f0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, AddToTailGetPtr, CAnimationDecodeOp, Construct<CAnimationDecodeOp>, Element, GetAnimTime, GetBool, GetInt, GetOperation, GetPrevCycle, GrowMemory, GrowVector, HSequence, InsertMultipleBefore, operator[]
// calls: CSkeletonAnimationController::GetOwnerEntity, CSequenceTransitioner2::GetDecodeOperationsCount, CSequenceTransitioner2::GetDecodeOperations, CUtlMemory<TransitioningLaterMetaInfo_t, int>::Grow, CUtlMemory<CAnimationDecodeOp, int>::Grow
// callers: CBaseAnimatingOverlayController::GatherSequences
void __fastcall CBaseAnimatingController::GatherSequences(
        const CBaseAnimatingController *const this,
        CUtlVector<CAnimationDecodeOp,CUtlMemory<CAnimationDecodeOp,int> > *const ops,
        CUtlVector<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> > *const meta)
{
  int m_Size; // r14d
  int v7; // eax
  CAnimationDecodeOp *m_pMemory; // rax
  CAnimationDecodeOp *v9; // rdx
  int32 m_Data; // edx
  __int64 v11; // r14
  int v12; // eax
  TransitioningLaterMetaInfo_t *v13; // r14
  CSequenceTransitioner2 *p_m_SequenceTransitioner; // r12
  int DecodeOperationsCount; // eax
  __int64 v16; // r15
  int m_nAllocationCount; // edx
  int v18; // r14d
  CAnimationDecodeOp *v19; // rdx
  __int64 v20; // rcx
  CAnimationDecodeOp *v21; // r8
  int nTransitionCount; // [rsp+Ch] [rbp-34h]

  m_Size = ops->m_Size;
  v7 = ops->m_Size;
  if ( ops->m_Size == ops->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CAnimationDecodeOp,int>::Grow(&ops->m_Memory, 1);
    v7 = ops->m_Size;
  }
  ops->m_Size = v7 + 1;
  m_pMemory = ops->m_Memory.m_pMemory;
  v9 = &m_pMemory[m_Size];
  if ( v9 != 0 )
  {
    v9->m_hSequence.m_Data = -1;
    v9->m_flCycle = 0.0;
    v9->m_flWeight = 0.0;
    v9->m_source = animopsource_t::ANIM_OP_UNSPECIFIED;
    m_pMemory = ops->m_Memory.m_pMemory;
  }
  m_pMemory->m_flCycle = this->m_baseLayer.m_flCycle.m_Value;
  m_pMemory->m_flWeight = this->m_baseLayer.m_flWeight.m_Value.m_Value;
  m_Data = this->m_baseLayer.m_hSequence.m_Value.m_Data;
  m_pMemory->m_source = animopsource_t::ANIM_OP_BASELAYER;
  m_pMemory->m_hSequence.m_Data = m_Data;
  v11 = meta->m_Size;
  v12 = meta->m_Size;
  if ( v11 == meta->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<TransitioningLaterMetaInfo_t,int>::Grow(&meta->m_Memory, 1);
    v12 = meta->m_Size;
  }
  meta->m_Size = v12 + 1;
  v13 = &meta->m_Memory.m_pMemory[v11];
  v13->m_flPlaybackRate = this->m_flPlaybackRate.m_Value.m_Value;
  v13->m_flStartTime = CSkeletonAnimationController::GetOwnerEntity(this)->m_flAnimTime.m_Value;
  v13->m_flPrevCycle = this->m_baseLayer.m_flPrevCycle.m_Value;
  if ( anim_sequence_transitioner.m_pParent->m_Value.m_nValue != 0 )
  {
    p_m_SequenceTransitioner = &this->m_SequenceTransitioner;
    DecodeOperationsCount = CSequenceTransitioner2::GetDecodeOperationsCount(p_m_SequenceTransitioner);
    if ( DecodeOperationsCount > 0 )
    {
      v16 = ops->m_Size;
      m_nAllocationCount = ops->m_Memory.m_nAllocationCount;
      v18 = DecodeOperationsCount + v16;
      if ( DecodeOperationsCount + v16 > m_nAllocationCount )
      {
        nTransitionCount = DecodeOperationsCount;
        CUtlMemory<CAnimationDecodeOp,int>::Grow(&ops->m_Memory, v18 - m_nAllocationCount);
        DecodeOperationsCount = nTransitionCount;
      }
      v19 = ops->m_Memory.m_pMemory;
      ops->m_Size = v18;
      v20 = v16;
      do
      {
        v21 = &v19[v20];
        if ( &v19[v20] != 0 )
        {
          v21->m_hSequence.m_Data = -1;
          v21->m_flCycle = 0.0;
          v21->m_flWeight = 0.0;
          v21->m_source = animopsource_t::ANIM_OP_UNSPECIFIED;
          v19 = ops->m_Memory.m_pMemory;
        }
        ++v20;
      }
      while ( v20 != v16 + (DecodeOperationsCount - 1) + 1 );
      CSequenceTransitioner2::GetDecodeOperations(p_m_SequenceTransitioner, DecodeOperationsCount, &v19[v16], meta);
    }
  }
}


// CBaseAnimatingController::DescribeSequences  (line 3833, @0x0000000002077590, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Color, DescribeOp, GetModel, GetNameByToken, GetRaw, GetSpewSourceName, Purge, RemoveAll, SetColor, String, curtime, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CGameSceneNode::GetOwnerEntity, LoggingSystem_IsChannelEnabled, CUtlString::Format, CModel::IsValidSequence, CModel::GetSequenceName, CUtlString::Get, CUtlString::FreeMemoryBlock, Plat_FloatTime, LoggingSystem_Log(int,LoggingSeverity_t,Color,char const*,...), CUtlMemory<CAnimationDecodeOp, int>::Purge, CUtlMemory<TransitioningLaterMetaInfo_t, int>::Purge, __cxa_guard_acquire (16 total)
// callers: CBaseAnimatingOverlayController::SetupSequences, CDOTAAnimState::ResetSlotActivity, CDOTAAnimState::FadeAndDestroySlot, CDOTAAnimState::AddToGestureSlot, CDOTAAnimState::RestartGesture, CDOTAAnimState::UpdateGestureLayer, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTABody::StartAnimation, TE_UnitAnimation
// strings: "%% 4d=[%%%d.%ds] at cycle %%6.4f weight %%5.3f", "SV", "%s:  %f tick(%d) curtime(%f) %24.24s %d:  %s prevcycle %6.4f start %8.3f rate %6.3f [%s]\
// globals: CBaseAnimatingController::DescribeSequences(char const*)::alternate, `guard variable for'CBaseAnimatingController::DescribeSequences(char const*)::s_SpewColors, CBaseAnimatingController::DescribeSequences(char const*)::s_SpewColors, g_AnimOpSources, tokenset_t<animopsource_t>::GetNameByToken(animopsource_t)::unknown
void __fastcall CBaseAnimatingController::DescribeSequences(
        CBaseAnimatingController *const this,
        const char *pSpewPrefix)
{
  int (**vptr_CSkeletonAnimationController)(...); // rax
  char v4; // al
  __int64 v5; // r14
  int v6; // r15d
  CAnimationDecodeOp *m_pMemory; // r12
  TransitioningLaterMetaInfo_t *v8; // r13
  const char *name; // rbx
  CAnimationDecodeOp *v10; // r12
  animopsource_t m_source; // edx
  tokenset_t<animopsource_t> *v12; // rax
  float *p_m_flPlaybackRate; // r13
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r13
  const char *SequenceName; // r13
  HSequence v17; // r12d
  const char *v18; // rax
  const char *v19; // r13
  double v20; // xmm0_8
  CGlobalVars *v21; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v23; // rax
  unsigned int tickcount; // r12d
  double v25; // xmm0_8
  __int64 v26; // [rsp+8h] [rbp-118h]
  Color *clr; // [rsp+48h] [rbp-D8h]
  double m_flCycle; // [rsp+50h] [rbp-D0h]
  double m_flWeight; // [rsp+58h] [rbp-C8h]
  double m_flCurrentTime; // [rsp+58h] [rbp-C8h]
  double v33; // [rsp+60h] [rbp-C0h]
  double v34; // [rsp+68h] [rbp-B8h]
  double v35; // [rsp+70h] [rbp-B0h]
  __int64 v36; // [rsp+88h] [rbp-98h]
  CUtlString v37; // [rsp+90h] [rbp-90h] BYREF
  CUtlString v38[2]; // [rsp+A0h] [rbp-80h] BYREF
  CUtlVector<CAnimationDecodeOp,CUtlMemory<CAnimationDecodeOp,int> > ops; // [rsp+B0h] [rbp-70h] BYREF
  CUtlVector<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> > meta; // [rsp+D0h] [rbp-50h] BYREF

  vptr_CSkeletonAnimationController = this->_vptr_CSkeletonAnimationController;
  ops.m_Size = 0;
  ops.m_Memory.m_pMemory = 0;
  ops.m_Memory.m_nAllocationCount = 0;
  ops.m_Memory.m_nGrowSize = 0;
  meta.m_Size = 0;
  meta.m_Memory.m_pMemory = 0;
  meta.m_Memory.m_nAllocationCount = 0;
  meta.m_Memory.m_nGrowSize = 0;
  vptr_CSkeletonAnimationController[30](this, &ops, &meta);
  if ( CGameSceneNode::GetOwnerEntity(this->m_pSkeletonInstance) != 0 )
  {
    v4 = ++CBaseAnimatingController::DescribeSequences(char const*)::alternate;
    if ( `guard variable for'CBaseAnimatingController::DescribeSequences(char const*)::s_SpewColors == 0 )
    {
      if ( __cxa_guard_acquire(&`guard variable for'CBaseAnimatingController::DescribeSequences(char const*)::s_SpewColors) != 0 )
      {
        CBaseAnimatingController::DescribeSequences(char const*)::s_SpewColors[0][0]._color[0] = 0;
        byte_4AF5D51 = -1;
        byte_4AF5D52 = 0;
        byte_4AF5D53 = -1;
        byte_4AF5D54 = 0;
        byte_4AF5D55 = -56;
        byte_4AF5D56 = 75;
        byte_4AF5D57 = -1;
        byte_4AF5D58 = 63;
        byte_4AF5D59 = 127;
        byte_4AF5D5A = -1;
        byte_4AF5D5B = -1;
        byte_4AF5D5C = 63;
        byte_4AF5D5D = -64;
        byte_4AF5D5E = -31;
        byte_4AF5D5F = -1;
        __cxa_guard_release(&`guard variable for'CBaseAnimatingController::DescribeSequences(char const*)::s_SpewColors);
      }
      v4 = CBaseAnimatingController::DescribeSequences(char const*)::alternate;
    }
    clr = &CBaseAnimatingController::DescribeSequences(char const*)::s_SpewColors[1][v4 & 1];
    if ( ops.m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      v36 = 0;
      while ( 1 )
      {
        m_pMemory = ops.m_Memory.m_pMemory;
        v8 = meta.m_Memory.m_pMemory;
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
          break;
LABEL_26:
        ++v36;
        ++v6;
        ++v5;
        if ( ops.m_Size <= v6 )
          goto LABEL_27;
      }
      name = g_AnimOpSources[0].name;
      v10 = &m_pMemory[v36];
      m_source = v10->m_source;
      if ( g_AnimOpSources[0].name != 0 )
      {
        if ( m_source == g_AnimOpSources[0].token )
        {
LABEL_12:
          p_m_flPlaybackRate = &v8[v5].m_flPlaybackRate;
          v35 = *p_m_flPlaybackRate;
          v34 = p_m_flPlaybackRate[1];
          v33 = p_m_flPlaybackRate[2];
          m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
          if ( m_pBinding != 0 )
            m_pData = m_pBinding->m_pData;
          else
            m_pData = 0;
          v38[0].m_pString = 0;
          CUtlString::Format(v38, "%% 4d=[%%%d.%ds] at cycle %%6.4f weight %%5.3f", 40, 40);
          v37.m_pString = 0;
          m_flWeight = v10->m_flWeight;
          m_flCycle = v10->m_flCycle;
          if ( CModel::IsValidSequence(m_pData, v10->m_hSequence) )
            SequenceName = CModel::GetSequenceName(m_pData, v10->m_hSequence);
          else
            SequenceName = "invalid";
          v17.m_Data = v10->m_hSequence.m_Data;
          v18 = CUtlString::Get(v38);
          CUtlString::Format(&v37, v18, v17.m_Data, SequenceName, m_flCycle, m_flWeight);
          if ( v38[0].m_pString != 0 )
            CUtlString::FreeMemoryBlock(v38);
          v19 = CUtlString::Get(&v37);
          v21 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( gpGlobals->m_bEnableAssertions
              || gpGlobals->m_bInSimulation
              || (m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc) == 0 )
            {
              v23 = gpGlobals;
            }
            else
            {
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v23 = gpGlobals;
            }
            m_flCurrentTime = v21->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
            v23 = 0;
          }
          tickcount = v23->tickcount;
          v25 = Plat_FloatTime(v20);
          LODWORD(v26) = v6;
          LoggingSystem_Log(
            LOG_SERVER,
            LoggingSeverity_t::LS_MESSAGE,
            *clr,
            "%s:  %f tick(%d) curtime(%f) %24.24s %d:  %s prevcycle %6.4f start %8.3f rate %6.3f [%s]\n",
            "SV",
            tickcount,
            v25,
            m_flCurrentTime,
            v33,
            v34,
            v35,
            pSpewPrefix,
            v26,
            v19,
            name);
          if ( v37.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v37);
          goto LABEL_26;
        }
        v12 = g_AnimOpSources;
        while ( 1 )
        {
          ++v12;
          name = v12->name;
          if ( v12->name == 0 )
            break;
          if ( m_source == v12->token )
            goto LABEL_12;
        }
      }
      name = tokenset_t<animopsource_t>::GetNameByToken(animopsource_t)const::unknown;
      goto LABEL_12;
    }
LABEL_27:
    meta.m_Size = 0;
    if ( (meta.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<TransitioningLaterMetaInfo_t,int>::Purge(&meta.m_Memory);
      if ( (meta.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<TransitioningLaterMetaInfo_t,int>::Purge(&meta.m_Memory);
    }
    ops.m_Size = 0;
    if ( (ops.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CAnimationDecodeOp,int>::Purge(&ops.m_Memory);
      if ( (ops.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CAnimationDecodeOp,int>::Purge(&ops.m_Memory);
    }
  }
  else
  {
    meta.m_Size = 0;
    if ( (meta.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<TransitioningLaterMetaInfo_t,int>::Purge(&meta.m_Memory);
      if ( (meta.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<TransitioningLaterMetaInfo_t,int>::Purge(&meta.m_Memory);
    }
    CUtlVectorBase<CAnimationDecodeOp,CUtlMemory<CAnimationDecodeOp,int>>::~CUtlVectorBase(&ops);
  }
}


