// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/skeletoninstance.cpp:2202
class CSimSequenceSetup : public ISequenceSetup {
public:

private:

	const uint32 * m_pBonesToSetUp;  // +0x18
	bool m_bHasAddedAnimationDecode;  // +0x20
	CSimSequenceSetup(CSimSequenceSetup &);
	CSimSequenceSetup(const CSimSequenceSetup &);
	CSimSequenceSetup(CAnimationDecodeContext *, CAnimationState *, const uint32 *);
	virtual void AddAnimationDecode(float, int, const CAnimationDecodeOp *, int, const float *, EHANDLE2);

	// vtable[0] AddAnimationDecode
	// sizeof = 40
};

// src/game/shared/skeletoninstance.cpp:2233
class CBoneSetupStatsRecorder {
private:

	bool m_bRecording;  // +0x0

	double m_flStartTime;  // +0x18
	double m_flStopTime;  // +0x20
	uint64 m_CalcAnimationState_nBoneCount;  // +0x28
	uint64 m_CalcParentSpaceState_nBoneCount;  // +0x30
	uint64 m_CalcWorldSpaceBones_nBoneCount;  // +0x38
	uint64 m_CalcAnimationState_nCallCount;  // +0x40
	uint64 m_CalcParentSpaceState_nCallCount;  // +0x48
	uint64 m_CalcWorldSpaceBones_nCallCount;  // +0x50
	CBoneSetupStatsRecorder();
	bool IsRecording();
	void StartRecording(double);
	void AddBones_CalcAnimationState(int);
	void AddBones_CalcParentSpaceState(int);
	void AddBones_CalcWorldSpaceBones(int);
	void AddBones(int, uint64 &, uint64 &);
	void PrintAndResetStats();
	void PrintLine(const char *, uint64, uint64, double);
	void ResetStats();

	// sizeof = 88
};

// src/game/shared/skeletoninstance.cpp:3802
class CSetModelAsyncCallback : public IGameResourceManifestLoadCompletionCallback {
public:

	CSetModelAsyncCallback(CSetModelAsyncCallback &);
	CSetModelAsyncCallback(const CSetModelAsyncCallback &);
	CSetModelAsyncCallback(CSkeletonInstance *);
	virtual void DeleteThis();
	virtual void OnGameResourceManifestLoaded(HGameResourceManifest, int, ResourceHandle_t *);

	// vtable[0] DeleteThis
	// vtable[1] OnGameResourceManifestLoaded
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CModelState::AddDatadescMetadataKeys  (line 55, @0x00000000020b6f70, libserver.so)
void __fastcall CModelState::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CModelState::GetBaseMap  (line 55, @0x00000000020b6f80, libserver.so)
datamap_t *__cdecl CModelState::GetBaseMap()
{
  return 0;
}


// DataMapInit<CModelState>  (line 55, @0x00000000020b6f90, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, GetPhysObjSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
// strings: "CModelState"
// globals: `guard variable for'DataMapInit<CModelState>(CModelState *)::nameHolder, `guard variable for'DataMapInit<CModelState>(CModelState *)::dataDesc, CModelState::m_DataMap, DataMapInit<CModelState>(CModelState *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CModelState>(CModelState *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CModelState>(CModelState *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CModelState>(CModelState *)::nameHolder) != 0 )
  {
    DataMapInit<CModelState>(CModelState *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CModelState>(CModelState *)::nameHolder.m_pszBase = "CModelState";
    DataMapInit<CModelState>(CModelState *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CModelState>(CModelState *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CModelState>(CModelState *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CModelState>(CModelState *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CModelState>(CModelState *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CModelState>(CModelState *)::nameHolder,
      &_dso_handle);
  }
  CModelState::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CModelState>(CModelState *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CModelState>(CModelState *)::dataDesc) != 0 )
  {
    DataMapInit<CModelState>(CModelState *)::dataDesc[3].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSAGGREGATE);
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CModelState>(CModelState *)::dataDesc);
  }
  CModelState::m_DataMap.dataNumFields = 7;
  CModelState::m_DataMap.dataDesc = &DataMapInit<CModelState>(CModelState *)::dataDesc[1];
  return &CModelState::m_DataMap;
}


// CSkeletonInstance::GetDataDescMap  (line 65, @0x000000000209c7e0, libserver.so)
// globals: CSkeletonInstance::m_DataMap
datamap_t *__fastcall CSkeletonInstance::GetDataDescMap(CSkeletonInstance *const this)
{
  return &CSkeletonInstance::m_DataMap;
}


// CSkeletonInstance::AddDatadescMetadataKeys  (line 65, @0x00000000020b70b0, libserver.so)
void __fastcall CSkeletonInstance::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSkeletonInstance::GetBaseMap  (line 65, @0x00000000020b70c0, libserver.so)
// globals: CGameSceneNode::m_DataMap
datamap_t *__cdecl CSkeletonInstance::GetBaseMap()
{
  return &CGameSceneNode::m_DataMap;
}


// DataMapInit<CSkeletonInstance>  (line 65, @0x00000000020b70d0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CSkeletonInstance"
// globals: `guard variable for'DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder, CGameSceneNode::m_DataMap, CSkeletonInstance::m_DataMap, DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSkeletonInstance>(CSkeletonInstance *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder) != 0 )
  {
    DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder.m_pszBase = "CSkeletonInstance";
    DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::nameHolder,
      &_dso_handle);
  }
  CSkeletonInstance::m_DataMap.dataNumFields = 1;
  CSkeletonInstance::m_DataMap.baseMap = &CGameSceneNode::m_DataMap;
  CSkeletonInstance::m_DataMap.dataDesc = &DataMapInit<CSkeletonInstance>(CSkeletonInstance *)::dataDesc[1];
  return &CSkeletonInstance::m_DataMap;
}


// CSkeletonBoneSetupHelper::CSkeletonBoneSetupHelper  (line 133, @0x00000000020d0170, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CWeakHandle
void __fastcall CSkeletonBoneSetupHelper::CSkeletonBoneSetupHelper(
        CSkeletonBoneSetupHelper *const this,
        InterpolatedVarPhase_t ivPhase)
{
  this->m_hModel.m_pBinding = 0;
  this->m_ops.m_Size = 0;
  this->m_ops.m_Memory.m_pMemory = 0;
  this->m_ops.m_Memory.m_nAllocationCount = 0;
  this->m_ops.m_Memory.m_nGrowSize = 0;
  this->m_poseParameters.m_Size = 0;
  this->m_poseParameters.m_Memory.m_pMemory = 0;
  this->m_poseParameters.m_Memory.m_nAllocationCount = 0;
  this->m_poseParameters.m_Memory.m_nGrowSize = 0;
  this->m_overriddenBoneTransforms.m_Size = 0;
  this->m_overriddenBoneTransforms.m_Memory.m_pMemory = 0;
  this->m_overriddenBoneTransforms.m_Memory.m_nAllocationCount = 0;
  this->m_overriddenBoneTransforms.m_Memory.m_nGrowSize = 0;
  this->m_overriddenBoneTransformWeights.m_Size = 0;
  this->m_overriddenBoneTransformWeights.m_Memory.m_pMemory = 0;
  this->m_overriddenBoneTransformWeights.m_Memory.m_nAllocationCount = 0;
  this->m_overriddenBoneTransformWeights.m_Memory.m_nGrowSize = 0;
  this->m_hOwningEntity.m_Index = -1;
  this->m_ivPhase = ivPhase;
}


// CSkeletonBoneSetupHelper::CSkeletonBoneSetupHelper  (line 148, @0x00000000020d0220, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CWeakHandle, Init, operator=
// local variable allocation has failed, the output may be wrong!
void __fastcall CSkeletonBoneSetupHelper::CSkeletonBoneSetupHelper(
        CSkeletonBoneSetupHelper *const this,
        HModel hModel,
        EHANDLE2 nEntIndex,
        InterpolatedVarPhase_t ivPhase)
{
  this->m_hModel.m_pBinding = 0;
  this->m_hOwningEntity.m_Index = -1;
  this->m_ops.m_Size = 0;
  this->m_ops.m_Memory.m_pMemory = 0;
  this->m_ops.m_Memory.m_nAllocationCount = 0;
  this->m_ops.m_Memory.m_nGrowSize = 0;
  this->m_poseParameters.m_Size = 0;
  this->m_poseParameters.m_Memory.m_pMemory = 0;
  this->m_poseParameters.m_Memory.m_nAllocationCount = 0;
  this->m_poseParameters.m_Memory.m_nGrowSize = 0;
  this->m_overriddenBoneTransforms.m_Size = 0;
  this->m_overriddenBoneTransforms.m_Memory.m_pMemory = 0;
  this->m_overriddenBoneTransforms.m_Memory.m_nAllocationCount = 0;
  this->m_overriddenBoneTransforms.m_Memory.m_nGrowSize = 0;
  this->m_overriddenBoneTransformWeights.m_Size = 0;
  this->m_overriddenBoneTransformWeights.m_Memory.m_pMemory = 0;
  this->m_overriddenBoneTransformWeights.m_Memory.m_nAllocationCount = 0;
  this->m_overriddenBoneTransformWeights.m_Memory.m_nGrowSize = 0;
  this->m_ivPhase = ivPhase;
  this->m_hModel.m_pBinding = hModel.m_pBinding->m_pData;
  this->m_hOwningEntity.m_Index = **&nEntIndex.m_Index;
}


// CSkeletonBoneSetupHelper::AddAnimationDecode  (line 164, @0x00000000020e0c50, libserver.so)  // inlines: AddMultipleToTail, CAnimationDecodeOp, Construct<CAnimationDecodeOp>, CopyConstruct<CAnimationDecodeOp>, CopyConstruct<float>, GrowMemory, GrowVector, HSequence, InsertMultipleBefore, ShiftElementsRight
// calls: CUtlMemory<CAnimationDecodeOp, int>::Grow, CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector, CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight
void __fastcall CSkeletonBoneSetupHelper::AddAnimationDecode(
        CSkeletonBoneSetupHelper *const this,
        float flRealTime,
        int nOpCount,
        const CAnimationDecodeOp *pOperations,
        int nPoseParamCount,
        const float *pPoseParameters,
        EHANDLE2 hOwningEntity)
{
  __int64 m_Size; // r15
  __int64 v12; // r12
  int m_nAllocationCount; // ecx
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rdi
  const CAnimationDecodeOp *v17; // rcx
  CAnimationDecodeOp *v18; // r10
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rcx
  float *v24; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  CAnimationDecodeOp *v27; // rax
  const CAnimationDecodeOp *pOperationsa; // [rsp+0h] [rbp-40h]
  int v29; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_ops.m_Size;
  if ( nOpCount == 0 )
    goto LABEL_2;
  m_nAllocationCount = this->m_ops.m_Memory.m_nAllocationCount;
  v14 = nOpCount + m_Size;
  if ( nOpCount + m_Size > m_nAllocationCount )
  {
    pOperationsa = pOperations;
    v29 = nOpCount + m_Size;
    CUtlMemory<CAnimationDecodeOp,int>::Grow(&this->m_ops.m_Memory, v14 - m_nAllocationCount);
    pOperations = pOperationsa;
    v14 = v29;
  }
  this->m_ops.m_Size = v14;
  if ( pOperations == 0 )
  {
    if ( nOpCount > 0 )
    {
      v25 = 0;
      v26 = m_Size;
      do
      {
        v27 = &this->m_ops.m_Memory.m_pMemory[v26];
        if ( v27 != 0 )
        {
          v27->m_hSequence.m_Data = -1;
          v27->m_flCycle = 0.0;
          v27->m_flWeight = 0.0;
          v27->m_source = animopsource_t::ANIM_OP_UNSPECIFIED;
        }
        ++v25;
        ++v26;
      }
      while ( nOpCount > v25 );
    }
LABEL_2:
    v12 = this->m_poseParameters.m_Size;
    if ( nPoseParamCount == 0 )
      return;
    goto LABEL_13;
  }
  if ( nOpCount <= 0 )
    goto LABEL_2;
  v15 = 0;
  v16 = m_Size;
  v17 = &pOperations[-m_Size];
  do
  {
    v18 = &this->m_ops.m_Memory.m_pMemory[v16];
    if ( v18 != 0 )
    {
      v19 = *&v17[v16].m_flWeight;
      *&v18->m_hSequence.m_Data = *&v17[v16].m_hSequence.m_Data;
      *&v18->m_flWeight = v19;
    }
    ++v15;
    ++v16;
  }
  while ( nOpCount > v15 );
  v12 = this->m_poseParameters.m_Size;
  if ( nPoseParamCount != 0 )
  {
LABEL_13:
    CUtlVectorBase<float,CUtlMemory<float,int>>::GrowVector(&this->m_poseParameters, nPoseParamCount);
    CUtlVectorBase<float,CUtlMemory<float,int>>::ShiftElementsRight(&this->m_poseParameters, v12, nPoseParamCount);
    if ( pPoseParameters != 0 && nPoseParamCount > 0 )
    {
      v20 = 4 * v12;
      v21 = v12 + (nPoseParamCount - 1) + 1;
      v22 = -v12;
      v23 = 4 * v21;
      do
      {
        v24 = &this->m_poseParameters.m_Memory.m_pMemory[v20 / 4];
        if ( v24 != 0 )
          *v24 = pPoseParameters[v22 + v20 / 4];
        v20 += 4LL;
      }
      while ( v20 != v23 );
    }
  }
}


// CSkeletonBoneSetupHelper::SetBaseAnimationLayer  (line 341, @0x00000000020dd020, libserver.so)  // inlines: AddToTail, CAnimationDecodeOp, Construct<CAnimationDecodeOp>, GrowMemory, HSequence
// calls: CUtlMemory<CAnimationDecodeOp, int>::Grow
void __fastcall CSkeletonBoneSetupHelper::SetBaseAnimationLayer(
        CSkeletonBoneSetupHelper *const this,
        HSequence hSequence,
        float a3,
        float flCycle)
{
  int m_Size; // eax
  CAnimationDecodeOp *m_pMemory; // rax
  float flCyclea; // [rsp+Ch] [rbp-14h]

  m_Size = this->m_ops.m_Size;
  if ( m_Size == 0 )
  {
    if ( this->m_ops.m_Memory.m_nAllocationCount == 0 )
    {
      flCyclea = a3;
      CUtlMemory<CAnimationDecodeOp,int>::Grow(&this->m_ops.m_Memory, 1);
      m_Size = this->m_ops.m_Size;
      a3 = flCyclea;
    }
    this->m_ops.m_Size = m_Size + 1;
    m_pMemory = this->m_ops.m_Memory.m_pMemory;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_hSequence.m_Data = -1;
      m_pMemory->m_flCycle = 0.0;
      m_pMemory->m_flWeight = 0.0;
      m_pMemory->m_source = animopsource_t::ANIM_OP_UNSPECIFIED;
      m_pMemory = this->m_ops.m_Memory.m_pMemory;
    }
    m_pMemory->m_flWeight = 1.0;
  }
  this->m_ops.m_Memory.m_pMemory->m_hSequence.m_Data = hSequence.m_Data;
  this->m_ops.m_Memory.m_pMemory->m_flCycle = a3;
}


// CSkeletonBoneSetupHelper::SetRootTransform  (line 353, @0x00000000020b7190, libserver.so)
// calls: MatrixCopy
void __fastcall CSkeletonBoneSetupHelper::SetRootTransform(
        CSkeletonBoneSetupHelper *const this,
        const matrix3x4a_t *const rootToWorld)
{
  MatrixCopy(rootToWorld, &this->m_rootToWorld);
}


// CSkeletonBoneSetupHelper::GetRootTransform  (line 358, @0x00000000020b71b0, libserver.so)
const matrix3x4a_t *__fastcall CSkeletonBoneSetupHelper::GetRootTransform(const CSkeletonBoneSetupHelper *const this)
{
  return &this->m_rootToWorld;
}


// CSkeletonBoneSetupHelper::SetBoneTransformOverrides  (line 363, @0x00000000020ec6a0, libserver.so)  // inlines: AddMultipleToTail, Init, InsertMultipleBefore, RemoveMultipleFromTail, ResourceHandleToData<InfoForResourceTypeCModel>, SetCount, operator int, operator=, operator[]
// calls: CModel::NumBones, CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector, CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight
void __fastcall CSkeletonBoneSetupHelper::SetBoneTransformOverrides(
        CSkeletonBoneSetupHelper *const this,
        int nCount,
        const CTransform *pBoneToParentTransforms,
        const float *pWeights)
{
  const ResourceBindingBase_t *m_pBinding; // rdx
  int v9; // eax
  int v10; // r15d
  vec_t *p_w; // r8
  unsigned __int64 v12; // rsi
  vec_t *v13; // r9
  signed __int64 v14; // r9
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  CTransform *v17; // rax
  vec_t v18; // xmm1_4
  vec_t v19; // xmm2_4
  vec_t v20; // xmm3_4
  int elem; // [rsp+4h] [rbp-3Ch]

  m_pBinding = this->m_hModel.m_pBinding;
  if ( this->m_hModel.m_pBinding != 0 && m_pBinding->m_nRefCount.m_value > 0 && m_pBinding->m_pData != 0 )
  {
    v9 = CModel::NumBones(m_pBinding->m_pData);
    if ( v9 <= nCount )
      nCount = v9;
    if ( nCount != 0 )
    {
      CUtlVectorBase<CTransform,CUtlMemory<CTransform,int>>::SetCount(&this->m_overriddenBoneTransforms, nCount);
      v10 = nCount - this->m_overriddenBoneTransformWeights.m_Size;
      if ( v10 > 0 )
      {
        elem = this->m_overriddenBoneTransformWeights.m_Size;
        CUtlVectorBase<float,CUtlMemory<float,int>>::GrowVector(&this->m_overriddenBoneTransformWeights, v10);
        CUtlVectorBase<float,CUtlMemory<float,int>>::ShiftElementsRight(
          &this->m_overriddenBoneTransformWeights,
          elem,
          v10);
      }
      else if ( v10 != 0 )
      {
        this->m_overriddenBoneTransformWeights.m_Size = nCount;
      }
      if ( nCount > 0 )
      {
        p_w = &pBoneToParentTransforms->m_orientation.w;
        v12 = 0;
        do
        {
          v13 = p_w;
          p_w += 8;
          v14 = v13 - &pBoneToParentTransforms->m_orientation;
          v15 = *(pBoneToParentTransforms + v14 - 8);
          v16 = *(pBoneToParentTransforms + v14 - 4);
          v17 = &this->m_overriddenBoneTransforms.m_Memory.m_pMemory[v12 / 4];
          v17->m_vPosition.x = *(pBoneToParentTransforms + v14 - 12);
          v17->m_vPosition.y = v15;
          v17->m_vPosition.z = v16;
          v18 = *(p_w - 8);
          v19 = *(p_w - 9);
          v20 = *(p_w - 10);
          v17->m_orientation.x = *(p_w - 11);
          v17->m_orientation.z = v19;
          v17->m_orientation.y = v20;
          v17->m_orientation.w = v18;
          this->m_overriddenBoneTransformWeights.m_Memory.m_pMemory[v12 / 4] = pWeights[v12 / 4];
          v12 += 4LL;
        }
        while ( v12 != 4LL * (nCount - 1) + 4 );
      }
    }
  }
}


// CSkeletonBoneSetupHelper::GetBoneCount  (line 383, @0x00000000020b71c0, libserver.so)  // inlines: ResourceHandleToData<InfoForResourceTypeCModel>, operator int
// calls: CModel::NumBones
int __fastcall CSkeletonBoneSetupHelper::GetBoneCount(const CSkeletonBoneSetupHelper *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rax

  m_pBinding = this->m_hModel.m_pBinding;
  if ( this->m_hModel.m_pBinding != 0 && m_pBinding->m_nRefCount.m_value > 0 && m_pBinding->m_pData != 0 )
    return CModel::NumBones(m_pBinding->m_pData);
  else
    return 0;
}


// CSkeletonBoneSetupHelper::ComputeWorldSpaceBones  (line 427, @0x00000000020b71f0, libserver.so)  // inlines: BitVec_ClearAll, BitVec_IsBitSet, Bitvec_Set, CWeakHandle, CalcNumIntsForBits, ClearBoneReadableBits, ComputeBonesToSetup, GetNumBones, Init, ResourceHandleToData<InfoForResourceTypeCModel>, V_memset, memset, operator int
// calls: memset, CModel::NumBones, CAnimationState::CAnimationState, CAnimationState::Init, DecodeAnimation, BlendOverrideTransforms, CAnimationState::GetBonesInWorldSpace, CAnimationState::~CAnimationState, CModel::boneFlags, CModel::boneParent, _Unwind_Resume
void __fastcall CSkeletonBoneSetupHelper::ComputeWorldSpaceBones(
        CSkeletonBoneSetupHelper *const this,
        float flRealTime,
        CModelSkeleton::BoneFlags_t boneFlags,
        CWritableBoneAccessor<matrix3x4a_t> *const boneToWorld)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  int v7; // eax
  int m_nBones; // edx
  int v9; // r12d
  uint32 *pBoneRequestBitMask; // rbx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // r13d
  int m_Size; // eax
  __int64 v16; // rcx
  char v17; // r13
  int i; // eax
  uint32 *v19; // rdi
  const CModel *nOverrideCount; // [rsp+38h] [rbp-78h]
  int nOverrideCounta; // [rsp+38h] [rbp-78h]
  HModel hModel; // [rsp+40h] [rbp-70h] BYREF
  CAnimationState animState; // [rsp+50h] [rbp-60h] BYREF

  memset(boneToWorld->m_pReadableBones, 0, 4LL * ((boneToWorld->m_nBones + 31) >> 5));
  m_pBinding = this->m_hModel.m_pBinding;
  if ( this->m_hModel.m_pBinding != 0 && m_pBinding->m_nRefCount.m_value > 0 )
  {
    nOverrideCount = m_pBinding->m_pData;
    if ( m_pBinding->m_pData != 0 )
    {
      v7 = CModel::NumBones(m_pBinding->m_pData);
      m_nBones = boneToWorld->m_nBones;
      if ( v7 <= m_nBones )
        m_nBones = v7;
      v9 = m_nBones;
      if ( m_nBones != 0 )
      {
        pBoneRequestBitMask = boneToWorld->m_pReadableBones;
        v11 = CModel::NumBones(nOverrideCount);
        v12 = v11 + 62;
        v13 = v11 + 31;
        if ( v13 >= 0 )
          v12 = v13;
        memset(pBoneRequestBitMask, 0, 4LL * (v12 >> 5));
        v14 = CModel::NumBones(nOverrideCount) - 1;
        if ( v14 >= 0 )
        {
          do
          {
            if ( ((1 << v14) & pBoneRequestBitMask[v14 >> 5]) == 0
              && (CModel::boneFlags(nOverrideCount, v14) & boneFlags) != 0 )
            {
              pBoneRequestBitMask[v14 >> 5] |= 1 << v14;
              for ( i = CModel::boneParent(nOverrideCount, v14); i >= 0; i = CModel::boneParent(nOverrideCount, i) )
              {
                v19 = &pBoneRequestBitMask[i >> 5];
                if ( ((1 << i) & *v19) != 0 )
                  break;
                *v19 |= 1 << i;
              }
            }
            --v14;
          }
          while ( v14 != -1 );
        }
        m_Size = this->m_overriddenBoneTransformWeights.m_Size;
        if ( v9 <= m_Size )
          m_Size = v9;
        v16 = 0;
        nOverrideCounta = m_Size;
        if ( v9 <= 0 )
        {
LABEL_31:
          v17 = 0;
        }
        else
        {
          while ( ((1 << v16) & pBoneRequestBitMask[v16 >> 5]) == 0
               || v16 < m_Size && this->m_overriddenBoneTransformWeights.m_Memory.m_pMemory[v16] >= 1.0 )
          {
            if ( v9 <= ++v16 )
              goto LABEL_31;
          }
          v17 = 1;
        }
        CAnimationState::CAnimationState(&animState);
        hModel.m_pBinding = this->m_hModel.m_pBinding;
        CAnimationState::Init(&animState, &hModel);
        if ( v17 != 0 )
          DecodeAnimation(
            &animState,
            pBoneRequestBitMask,
            this->m_ops.m_Size,
            this->m_ops.m_Memory.m_pMemory,
            this->m_poseParameters.m_Size,
            this->m_poseParameters.m_Memory.m_pMemory,
            -1,
            pBoneRequestBitMask,
            1u);
        BlendOverrideTransforms(
          &animState,
          nOverrideCounta,
          this->m_overriddenBoneTransforms.m_Memory.m_pMemory,
          this->m_overriddenBoneTransformWeights.m_Memory.m_pMemory,
          pBoneRequestBitMask);
        CAnimationState::GetBonesInWorldSpace(
          &animState,
          &this->m_rootToWorld,
          v9,
          &boneToWorld->m_pBones->matrix3x4_t,
          pBoneRequestBitMask);
        CAnimationState::~CAnimationState(&animState);
      }
    }
  }
}


// ComputeModelSpaceBonesFromParentSpaceBones  (line 477, @0x00000000020b74a0, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, CalcNumIntsForBits, ClearBoneReadableBits, GetBoneForWrite, GetBoneForWriteAndMarkReadable, GetNumBones, Init, IsBoneReadable, MarkBoneReadable, V_memset, memset, operator=, operator[]
// calls: memset, ConcatTransforms, CModel::boneParent
// callers: CSkeletonInstance::BuildInterpolatedTransformations, CSkeletonInstance::BuildTransformations
void __fastcall ComputeModelSpaceBonesFromParentSpaceBones(
        const CModel *pModel,
        const CBoneAccessor<CTransform> *const parentSpaceTransforms,
        CWritableBoneAccessor<CTransform> *const modelSpaceTransforms)
{
  __int64 v5; // r12
  int v6; // ebx
  int m_nBones; // r14d
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  const CTransform *v12; // rcx
  vec_t *v13; // rax
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  vec_t w; // xmm1_4
  vec_t v17; // xmm3_4
  vec_t x; // xmm0_4
  __int64 v20; // [rsp+18h] [rbp-38h]

  v5 = 0;
  v6 = 0;
  memset(modelSpaceTransforms->m_pReadableBones, 0, 4LL * ((modelSpaceTransforms->m_nBones + 31) >> 5));
  m_nBones = modelSpaceTransforms->m_nBones;
  if ( modelSpaceTransforms->m_nBones != 0 )
  {
    while ( 1 )
    {
      if ( parentSpaceTransforms->m_nBones <= v6 )
        goto LABEL_4;
      v8 = v6 >> 5;
      if ( ((1 << v6) & parentSpaceTransforms->m_pReadableBones[v8]) == 0 )
        goto LABEL_4;
      v20 = v8;
      v9 = CModel::boneParent(pModel, v6);
      v10 = 1 << v6;
      if ( v9 >= 0 )
      {
        modelSpaceTransforms->m_pReadableBones[v20] |= v10;
        ConcatTransforms(
          &modelSpaceTransforms->m_pBones[v9],
          &parentSpaceTransforms->m_pBones[v5],
          &modelSpaceTransforms->m_pBones[v5]);
LABEL_4:
        ++v6;
        ++v5;
        if ( v6 >= m_nBones )
          return;
      }
      else
      {
        v11 = v5 * 32;
        v12 = &parentSpaceTransforms->m_pBones[v5];
        ++v6;
        ++v5;
        modelSpaceTransforms->m_pReadableBones[v20] |= v10;
        v13 = (&modelSpaceTransforms->m_pBones->m_vPosition.x + v11);
        y = v12->m_vPosition.y;
        z = v12->m_vPosition.z;
        *v13 = v12->m_vPosition.x;
        v13[1] = y;
        v13[2] = z;
        w = v12->m_orientation.w;
        v17 = v12->m_orientation.y;
        x = v12->m_orientation.x;
        v13[6] = v12->m_orientation.z;
        v13[5] = v17;
        v13[4] = x;
        v13[7] = w;
        if ( v6 >= m_nBones )
          return;
      }
    }
  }
}


// ComputeWorldSpaceBonesFromParentSpaceBone  (line 500, @0x00000000020b75f0, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, GetBoneForWrite, GetBoneForWriteAndMarkReadable, IsBoneReadable, MarkBoneReadable, TransformMatrix, operator[]
// calls: TransformMatrix, ConcatTransforms, CModel::boneParent
// callers: CSkeletonInstance::CalcWorldSpaceBones
void __fastcall ComputeWorldSpaceBonesFromParentSpaceBone(
        const CModel *pModel,
        const matrix3x4a_t *const rootToWorldTransform,
        const CBoneAccessor<CTransform> *const parentSpaceTransforms,
        CompositeParentSpaceTransformType_t transformType,
        CWritableBoneAccessor<matrix3x4a_t> *const worldSpaceTransforms)
{
  int m_nBones; // eax
  __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // edx
  __int64 v11; // r11
  const matrix3x4a_t *v12; // r12
  int v13; // eax
  matrix3x4a_t *v17; // [rsp+20h] [rbp-70h]
  matrix3x4_t v18[2]; // [rsp+30h] [rbp-60h] BYREF

  m_nBones = worldSpaceTransforms->m_nBones;
  if ( m_nBones != 0 )
  {
    v8 = 0;
    v9 = m_nBones - 1;
    while ( 1 )
    {
      if ( (m_nBones <= v8 || ((1 << v8) & worldSpaceTransforms->m_pReadableBones[v8 >> 5]) == 0)
        && parentSpaceTransforms->m_nBones > v8 )
      {
        v10 = 1 << v8;
        v11 = v8 >> 5;
        if ( ((1 << v8) & parentSpaceTransforms->m_pReadableBones[v11]) != 0 )
        {
          if ( transformType != CompositeParentSpaceTransformType_t::COMPOSITE_PARENT_SPACE_TRANSFORMS_IN_PARENT_SPACE
            || (v13 = CModel::boneParent(pModel, v8), v11 = v8 >> 5, v10 = 1 << v8, v13 < 0) )
          {
            v12 = rootToWorldTransform;
          }
          else
          {
            v12 = &worldSpaceTransforms->m_pBones[v13];
          }
          worldSpaceTransforms->m_pReadableBones[v11] |= v10;
          v17 = &worldSpaceTransforms->m_pBones[v8];
          TransformMatrix(&parentSpaceTransforms->m_pBones[v8], v18);
          ConcatTransforms(v12, v18, v17);
        }
      }
      if ( v8 == v9 )
        break;
      m_nBones = worldSpaceTransforms->m_nBones;
      ++v8;
    }
  }
}


// ComputeWorldSpaceBonesFromParentSpaceBone  (line 519, @0x00000000020b7730, libserver.so)  // inlines: GetNumBones, TransformMatrix, operator[]
// calls: TransformMatrix, ConcatTransforms, CModel::boneParent
void __fastcall ComputeWorldSpaceBonesFromParentSpaceBone(
        const CModel *pModel,
        const matrix3x4a_t *const rootToWorldTransform,
        CModelSkeleton::BoneFlags_t *pBoneFlagsIncludingChildren,
        CModelSkeleton::BoneFlags_t boneFlags,
        const CBoneAccessor<CTransform> *const parentSpaceTransforms,
        CompositeParentSpaceTransformType_t transformType,
        matrix3x4a_t *pWorldSpaceTransforms)
{
  __int64 v9; // r13
  matrix3x4a_t *v10; // rbx
  const matrix3x4a_t *v11; // r12
  int v12; // eax
  int nTotalBones; // [rsp+2Ch] [rbp-64h]
  matrix3x4_t v18[2]; // [rsp+30h] [rbp-60h] BYREF

  v9 = 0;
  v10 = pWorldSpaceTransforms;
  nTotalBones = parentSpaceTransforms->m_nBones;
  if ( parentSpaceTransforms->m_nBones != 0 )
  {
    do
    {
      if ( (boneFlags & pBoneFlagsIncludingChildren[v9]) != 0 )
      {
        if ( transformType != CompositeParentSpaceTransformType_t::COMPOSITE_PARENT_SPACE_TRANSFORMS_IN_PARENT_SPACE
          || (v12 = CModel::boneParent(pModel, v9)) < 0 )
        {
          v11 = rootToWorldTransform;
        }
        else
        {
          v11 = &pWorldSpaceTransforms[v12];
        }
        TransformMatrix(&parentSpaceTransforms->m_pBones[v9], v18);
        ConcatTransforms(v11, v18, v10);
      }
      ++v9;
      ++v10;
    }
    while ( nTotalBones > v9 );
  }
}


// CCompositeParentSpaceState::CCompositeParentSpaceState  (line 543, @0x00000000020b7800, libserver.so)
// calls: CAnimationState::CAnimationState
void __fastcall CCompositeParentSpaceState::CCompositeParentSpaceState(CCompositeParentSpaceState *const this)
{
  CAnimationState::CAnimationState(this);
  this->m_pInterpolatedBoneTransformWeights = 0;
  this->m_pInterpolatedBoneTransforms = 0;
  this->m_bHasValidBoneTransformData = 0;
  this->m_bShouldAllocateBoneTransforms = 0;
  this->m_bShouldUseInterpolatedBoneTransforms = 0;
  *(this + 59) = 0;
}


// CCompositeParentSpaceState::~CCompositeParentSpaceState  (line 550, @0x00000000020b7840, libserver.so)
// calls: CAnimationState::~CAnimationState
void __fastcall CCompositeParentSpaceState::~CCompositeParentSpaceState(CCompositeParentSpaceState *const this)
{
  CAnimationState::~CAnimationState(this);
}


// CCompositeParentSpaceState::Realloc  (line 556, @0x00000000020b7850, libserver.so)  // inlines: CWeakHandle, Init
// calls: CAnimationState::Realloc
void __fastcall CCompositeParentSpaceState::Realloc(CCompositeParentSpaceState *const this, HModel hModel)
{
  HModel hModela; // [rsp+0h] [rbp-10h] BYREF

  hModela.m_pBinding = hModel.m_pBinding->m_pData;
  CAnimationState::Realloc(this, &hModela);
}


// CCompositeParentSpaceState::GetTransformType  (line 572, @0x00000000020b7870, libserver.so)
CompositeParentSpaceTransformType_t __fastcall CCompositeParentSpaceState::GetTransformType(
        const CCompositeParentSpaceState *const this)
{
  return *(this + 59);
}


// CCompositeParentSpaceState::SetTransformType  (line 577, @0x00000000020b7880, libserver.so)
void __fastcall CCompositeParentSpaceState::SetTransformType(
        CCompositeParentSpaceState *const this,
        CompositeParentSpaceTransformType_t type)
{
  *(this + 59) = type;
}


// CCompositeParentSpaceState::operator=  (line 582, @0x00000000020b7890, libserver.so)  // inlines: FromUntypedHandleUnchecked, GetModel, InitUntypedUnchecked, SetHasValidBoneTransformData, operator CWeakHandle<InfoForResourceTypeCModel>, operator=
// calls: CAnimationState::Init, CAnimationState::CopyTransformAnimationData, CAnimationState::CopyNonTransformAnimationData
CCompositeParentSpaceState *__fastcall CCompositeParentSpaceState::operator=(
        CCompositeParentSpaceState *const this,
        const CCompositeParentSpaceState *const src)
{
  char m_bHasValidBoneTransformData; // al
  HModel hModel; // [rsp+0h] [rbp-20h] BYREF

  this->m_bShouldAllocateBoneTransforms = src->m_bShouldAllocateBoneTransforms;
  *(this + 59) = *(src + 59);
  if ( !src->m_bHasValidBoneTransformData )
  {
    if ( this->m_bHasValidBoneTransformData )
      this->m_bHasValidBoneTransformData = 0;
    return this;
  }
  if ( src == this )
  {
    m_bHasValidBoneTransformData = 1;
  }
  else
  {
    if ( this->m_hModel.m_pBinding != src->m_hModel.m_pBinding || !this->m_bOwnsMemory )
    {
      this->m_pData = 0;
      this->m_bOwnsMemory = 0;
      this->m_bHasNonTransformAnimationData = 0;
      hModel.m_pBinding = src->m_hModel.m_pBinding;
      CAnimationState::Init(this, &hModel);
    }
    CAnimationState::CopyTransformAnimationData(this, src);
    CAnimationState::CopyNonTransformAnimationData(this, src);
    m_bHasValidBoneTransformData = src->m_bHasValidBoneTransformData;
  }
  if ( this->m_bHasValidBoneTransformData == m_bHasValidBoneTransformData )
    return this;
  this->m_bHasValidBoneTransformData = m_bHasValidBoneTransformData;
  return this;
}


// CCompositeParentSpaceState::operator==  (line 626, @0x00000000020b7950, libserver.so)  // inlines: FloatMakePositive, FloatsAreEqual, GetOrigin, QuaternionsAreEqual, QuaternionsAreEqualInternal, VectorsAreEqual, operator!=
// calls: CModel::GetAnimationStateCount, FloatsAreEqual, frexpf
// callers: CCompositeParentSpaceState::IsIdenticalWithinTolerance
bool __fastcall CCompositeParentSpaceState::operator==(
        const CCompositeParentSpaceState *const this,
        const CCompositeParentSpaceState *const src)
{
  bool m_bHasValidBoneTransformData; // al
  const CModel *const *m_pBinding; // rax
  signed int AnimationStateCount; // eax
  float *m_pData; // rbx
  float *v9; // rsi
  float v10; // xmm1_4
  float v11; // xmm2_4
  float *v12; // r15
  float *v13; // r14
  float *v14; // r12
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // r14d
  float v22; // xmm3_4
  float v23; // xmm3_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  __int64 v26; // rdi
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  __int64 v30; // rax
  float v31; // xmm1_4
  __int64 v32; // rdi
  float v33; // xmm1_4
  float v34; // xmm3_4
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-60h]
  float v40; // [rsp+14h] [rbp-4Ch]
  float v41; // [rsp+18h] [rbp-48h]
  float v42; // [rsp+18h] [rbp-48h]
  float v43; // [rsp+18h] [rbp-48h]
  float x; // [rsp+1Ch] [rbp-44h]
  float xa; // [rsp+1Ch] [rbp-44h]
  float xb; // [rsp+1Ch] [rbp-44h]
  int exponent; // [rsp+28h] [rbp-38h] BYREF
  int v48[13]; // [rsp+2Ch] [rbp-34h] BYREF

  m_bHasValidBoneTransformData = this->m_bHasValidBoneTransformData;
  if ( m_bHasValidBoneTransformData != src->m_bHasValidBoneTransformData )
    return 0;
  if ( m_bHasValidBoneTransformData )
  {
    m_pBinding = this->m_hModel.m_pBinding;
    if ( this->m_hModel.m_pBinding != src->m_hModel.m_pBinding )
      return 0;
    if ( m_pBinding != 0 )
    {
      if ( *(this + 59) != *(src + 59) )
        return 0;
      AnimationStateCount = CModel::GetAnimationStateCount(
                              *m_pBinding,
                              AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
      m_pData = this->m_pData;
      v9 = src->m_pData;
      if ( AnimationStateCount > 0 )
      {
        v10 = v9[2];
        v11 = m_pData[2];
        if ( fabs(*m_pData - *v9) <= 0.001 && fabs(m_pData[1] - v9[1]) <= 0.001 )
        {
          v12 = v9 + 8;
          v13 = src->m_pData;
          v39 = &v9[8 * (AnimationStateCount - 1) + 8];
          v14 = m_pData + 8;
          while ( 1 )
          {
            if ( fabs(v11 - v10) > 0.001 )
              return 0;
            v42 = m_pData[4];
            xa = v13[4];
            v40 = frexpf(v42, &exponent);
            v17 = frexpf(xa, v48);
            if ( exponent > v48[0] )
            {
              if ( exponent < -17 )
                goto LABEL_34;
              v15 = 1LL << (exponent - LOBYTE(v48[0]));
              if ( v15 < 0 )
              {
                v35 = v15 & 1 | ((1LL << (exponent - LOBYTE(v48[0]))) >> 1);
                v16 = v35 + v35;
              }
              else
              {
                v16 = v15;
              }
              v17 = v17 / v16;
            }
            else if ( exponent >= v48[0] )
            {
              if ( exponent == v48[0] && exponent < -17 )
                goto LABEL_34;
            }
            else
            {
              if ( v48[0] < -17 )
                goto LABEL_34;
              v26 = 1LL << (LOBYTE(v48[0]) - exponent);
              if ( v26 < 0 )
              {
                v36 = v26 & 1 | ((1LL << (LOBYTE(v48[0]) - exponent)) >> 1);
                v27 = v36 + v36;
              }
              else
              {
                v27 = v26;
              }
              v40 = v40 / v27;
            }
            if ( fabs(v40 - v17) > 0.001 )
            {
              v18 = v13[5];
              v19 = v42;
              v20 = xa;
LABEL_17:
              x = v18;
              v41 = v13[7];
              v21 = COERCE_FLOAT(_mm_cvtsi128_si32(*(v13 + 6)));
              if ( FloatsAreEqual(v19, -v20, 0.001, v18) == 0
                || FloatsAreEqual(m_pData[5], -x, 0.001, -x) == 0
                || FloatsAreEqual(m_pData[6], -v21, 0.001, v22) == 0
                || FloatsAreEqual(m_pData[7], -v41, 0.001, v23) == 0 )
              {
                return 0;
              }
              goto LABEL_21;
            }
LABEL_34:
            xb = v13[5];
            v43 = frexpf(m_pData[5], &exponent);
            v28 = frexpf(xb, v48);
            if ( exponent <= v48[0] )
            {
              if ( exponent >= v48[0] )
              {
                if ( exponent == v48[0] && exponent < -17 )
                  goto LABEL_48;
              }
              else
              {
                if ( v48[0] < -17 )
                  goto LABEL_48;
                v32 = 1LL << (LOBYTE(v48[0]) - exponent);
                if ( v32 < 0 )
                {
                  v38 = v32 & 1 | ((1LL << (LOBYTE(v48[0]) - exponent)) >> 1);
                  v33 = v38 + v38;
                }
                else
                {
                  v33 = v32;
                }
                v43 = v43 / v33;
              }
            }
            else
            {
              if ( exponent < -17 )
                goto LABEL_48;
              v30 = 1LL << (exponent - LOBYTE(v48[0]));
              if ( v30 < 0 )
              {
                v37 = v30 & 1 | ((1LL << (exponent - LOBYTE(v48[0]))) >> 1);
                v31 = v37 + v37;
              }
              else
              {
                v31 = v30;
              }
              v28 = v28 / v31;
            }
            if ( fabs(v43 - v28) > 0.001 )
            {
              v20 = v13[4];
              v19 = m_pData[4];
              v18 = xb;
              goto LABEL_17;
            }
LABEL_48:
            if ( FloatsAreEqual(m_pData[6], v13[6], 0.001, v29) == 0
              || FloatsAreEqual(m_pData[7], v13[7], 0.001, v34) == 0 )
            {
              v18 = v13[5];
              v20 = v13[4];
              v19 = m_pData[4];
              goto LABEL_17;
            }
LABEL_21:
            if ( v12 == v39 )
              return 1;
            v13 = v12;
            m_pData = v14;
            v24 = v12[1];
            v10 = v12[2];
            v25 = v14[1];
            v11 = v14[2];
            if ( fabs(*v14 - *v12) <= 0.001 )
            {
              v12 += 8;
              v14 += 8;
              if ( fabs(v25 - v24) <= 0.001 )
                continue;
            }
            return 0;
          }
        }
        return 0;
      }
    }
  }
  return 1;
}


// CCompositeParentSpaceState::TransferStateTo  (line 669, @0x00000000020b7e10, libserver.so)
// calls: CAnimationState::TransferStateTo
// callers: CModelState::CopyStateTo
void __fastcall CCompositeParentSpaceState::TransferStateTo(
        CCompositeParentSpaceState *const this,
        CCompositeParentSpaceState *const state)
{
  bool m_bShouldAllocateBoneTransforms; // al
  CCompositeParentSpaceState::InterpolatedBoneTransform_t *m_pInterpolatedBoneTransforms; // rax

  state->m_bHasValidBoneTransformData = this->m_bHasValidBoneTransformData;
  *(state + 59) = *(this + 59);
  m_bShouldAllocateBoneTransforms = this->m_bShouldAllocateBoneTransforms;
  this->m_bHasValidBoneTransformData = 0;
  state->m_bShouldAllocateBoneTransforms = m_bShouldAllocateBoneTransforms;
  state->m_pInterpolatedBoneTransformWeights = this->m_pInterpolatedBoneTransformWeights;
  m_pInterpolatedBoneTransforms = this->m_pInterpolatedBoneTransforms;
  this->m_pInterpolatedBoneTransformWeights = 0;
  state->m_pInterpolatedBoneTransforms = m_pInterpolatedBoneTransforms;
  this->m_pInterpolatedBoneTransforms = 0;
  CAnimationState::TransferStateTo(this, state);
}


// CCompositeParentSpaceState::UpdateInterpolatedDataAllocation  (line 689, @0x00000000020b7e60, libserver.so)
void __fastcall CCompositeParentSpaceState::UpdateInterpolatedDataAllocation(
        CCompositeParentSpaceState *const this,
        bool bForceFree)
{
  ;
}


// CCompositeParentSpaceState::SetShouldAllocateBoneTransforms  (line 732, @0x00000000020b7e70, libserver.so)
void __fastcall CCompositeParentSpaceState::SetShouldAllocateBoneTransforms(
        CCompositeParentSpaceState *const this,
        bool bShouldAllocateBoneTransforms)
{
  if ( this->m_bShouldAllocateBoneTransforms != bShouldAllocateBoneTransforms )
    this->m_bShouldAllocateBoneTransforms = bShouldAllocateBoneTransforms;
}


// CCompositeParentSpaceState::SetHasValidBoneTransformData  (line 740, @0x00000000020b7e80, libserver.so)
void __fastcall CCompositeParentSpaceState::SetHasValidBoneTransformData(
        CCompositeParentSpaceState *const this,
        bool bHasValidBoneTransformData)
{
  if ( this->m_bHasValidBoneTransformData != bHasValidBoneTransformData )
    this->m_bHasValidBoneTransformData = bHasValidBoneTransformData;
}


// CCompositeParentSpaceState::IsIdenticalWithinTolerance  (line 748, @0x00000000020b7e90, libserver.so)
// calls: CCompositeParentSpaceState::operator==
bool __fastcall CCompositeParentSpaceState::IsIdenticalWithinTolerance(
        const CCompositeParentSpaceState *const this,
        const CCompositeParentSpaceState *const src)
{
  return CCompositeParentSpaceState::operator==(this, src);
}


// CCompositeParentSpaceState::GetDebugString  (line 754, @0x00000000020d02e0, libserver.so)  // inlines: CUtlString, GetAnimationDataCount<(AnimationStateType_t)0>, GetModel, ResourceGetName, ResourceGetName<260ul>, String, V_strncpy<int>, operator CWeakHandle<InfoForResourceTypeCModel>, operator->, operator==, strrchr
// calls: _V_strncpy, strrchr, CUtlString::Format, CModel::GetAnimationStateCount, CModel::boneName, V_sprintf_safe<260ul>, CUtlString::operator+=, CUtlString::operator=, __stack_chk_fail, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "Model \"%s\" :\t", "%d (%s) [%.2f] ", "<no bone transform data>", "** ERROR!!! BONE TRANSFORM DATA WITH NO MODEL**!!!!\n"
CUtlString __fastcall CCompositeParentSpaceState::GetDebugString(
        CUtlString *a1,
        const CCompositeParentSpaceState *const this)
{
  ResourceNameHandle_t m_Name; // rax
  const char *m_Id; // rsi
  char *v5; // rax
  char *v6; // rdx
  signed int AnimationStateCount; // r15d
  __int64 v8; // r12
  int v9; // ebx
  int v10; // r14d
  const CModel *v11; // rdi
  const char *v12; // rax
  char pModelName[272]; // [rsp+10h] [rbp-250h] BYREF
  char pBuf[260]; // [rsp+120h] [rbp-140h] BYREF
  unsigned __int64 v17; // [rsp+228h] [rbp-38h]

  a1->m_pString = 0;
  v17 = __readfsqword(0x28u);
  if ( this->m_bHasValidBoneTransformData )
  {
    if ( this->m_hModel.m_pBinding != 0 )
    {
      m_Name = this->m_hModel.m_pBinding->m_Name;
      if ( m_Name != 0 )
      {
        m_Id = "";
        if ( m_Name->m_ResourceNameSymbol.u.m_Id != 0 )
          m_Id = m_Name->m_ResourceNameSymbol.u.m_Id;
        _V_strncpy(pModelName, m_Id, 260);
      }
      else
      {
        _V_strncpy(pModelName, "", 260);
      }
      v5 = strrchr(pModelName, 47);
      v6 = v5 + 1;
      if ( v5 == 0 )
        v6 = pModelName;
      CUtlString::Format(a1, "Model \"%s\" :\t", v6);
      if ( this->m_hModel.m_pBinding != 0 )
      {
        AnimationStateCount = CModel::GetAnimationStateCount(
                                this->m_hModel.m_pBinding->CAnimationState::m_pData,
                                AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
        if ( AnimationStateCount > 0 )
        {
          v8 = 0;
          v9 = 0;
          v10 = 8;
          while ( 1 )
          {
            if ( this->m_pInterpolatedBoneTransformWeights[v8] != 0.0 )
            {
              v11 = this->m_hModel.m_pBinding != 0 ? this->m_hModel.m_pBinding->CAnimationState::m_pData : 0LL;
              v12 = CModel::boneName(v11, v9);
              V_sprintf_safe<260ul>(pBuf, "%d (%s) [%.2f] ", v9, v12, this->m_pInterpolatedBoneTransformWeights[v8]);
              CUtlString::operator+=(a1, pBuf);
              if ( --v10 <= 0 )
                break;
            }
            ++v9;
            ++v8;
            if ( v9 == AnimationStateCount )
              return a1;
          }
          CUtlString::operator+=(a1, "...");
        }
      }
    }
    else
    {
      CUtlString::operator=(a1, "** ERROR!!! BONE TRANSFORM DATA WITH NO MODEL**!!!!\n");
    }
  }
  else
  {
    CUtlString::operator=(a1, "<no bone transform data>");
  }
  return a1;
}


// CCompositeParentSpaceState::GetDebugSpeedString  (line 804, @0x00000000020b7ea0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::operator=, CAnimationState::GetDebugSpeedString, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "<no bone transform data>"
CUtlString __fastcall CCompositeParentSpaceState::GetDebugSpeedString(
        const CCompositeParentSpaceState *const this,
        float flPrevTime,
        float flNextTime,
        const CCompositeParentSpaceState *pPrevValue)
{
  CUtlString out; // [rsp+0h] [rbp-20h] BYREF

  if ( pPrevValue->m_bHasValidBoneTransformData )
  {
    CAnimationState::GetDebugSpeedString(this, flPrevTime, flNextTime, pPrevValue);
  }
  else
  {
    out.m_pString = 0;
    CUtlString::operator=(&out, "<no bone transform data>");
    this->m_hModel.m_pBinding = out.m_pString;
  }
  return this;
}


// CCompositeParentSpaceState::GetInterpolatedBoneTransformWeights  (line 815, @0x00000000020b7f20, libserver.so)
const float *__fastcall CCompositeParentSpaceState::GetInterpolatedBoneTransformWeights(
        const CCompositeParentSpaceState *const this)
{
  return 0;
}


// CCompositeParentSpaceState::GetInterpolatedBoneTransforms  (line 824, @0x00000000020b7f30, libserver.so)
const CCompositeParentSpaceState::InterpolatedBoneTransform_t *__fastcall CCompositeParentSpaceState::GetInterpolatedBoneTransforms(
        const CCompositeParentSpaceState *const this)
{
  return 0;
}


// CCompositeParentSpaceState::CopyBoneTransformWeights  (line 833, @0x00000000020b7f40, libserver.so)
void __fastcall CCompositeParentSpaceState::CopyBoneTransformWeights(
        CCompositeParentSpaceState *const this,
        const CCompositeParentSpaceState *pSrc)
{
  ;
}


// CCompositeParentSpaceState::GetBones  (line 846, @0x00000000020b7f50, libserver.so)  // inlines: CBoneAccessor, GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, operator==
// calls: CModel::GetAnimationStateCount, CModel::GetAnimationStateOffset, CAnimationState::GetReadableBones
// callers: CSkeletonInstance::CalcWorldSpaceBones
CBoneAccessor<CTransform> *__fastcall CCompositeParentSpaceState::GetBones(
        CBoneAccessor<CTransform> *__return_ptr retstr,
        const CCompositeParentSpaceState *const this)
{
  uint16 AnimationStateCount; // r13
  char *m_pData; // r15
  const CTransform *v6; // r14
  const uint32 *ReadableBones; // rax

  if ( this->m_hModel.m_pBinding == 0 )
  {
    AnimationStateCount = 0;
    goto LABEL_6;
  }
  AnimationStateCount = CModel::GetAnimationStateCount(
                          this->m_hModel.m_pBinding->CAnimationState::m_pData,
                          AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
  if ( this->m_hModel.m_pBinding == 0 )
  {
LABEL_6:
    v6 = 0;
    goto LABEL_4;
  }
  m_pData = this->m_pData;
  v6 = &m_pData[CModel::GetAnimationStateOffset(
                  this->m_hModel.m_pBinding->CAnimationState::m_pData,
                  AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
LABEL_4:
  ReadableBones = CAnimationState::GetReadableBones(this);
  retstr->m_pBones = v6;
  retstr->m_pReadableBones = ReadableBones;
  retstr->m_nBones = AnimationStateCount;
  retstr->m_bOwnsMemory = 0;
  return retstr;
}


// CCompositeParentSpaceState::GetBonesForModify  (line 853, @0x00000000020b7fd0, libserver.so)  // inlines: CBoneAccessor, CWritableBoneAccessor, GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, operator==
// calls: CModel::GetAnimationStateCount, CModel::GetAnimationStateOffset, CAnimationState::GetReadableBonesForWrite
// callers: CSkeletonInstance::BuildInterpolatedTransformations, CSkeletonInstance::BuildTransformations
CWritableBoneAccessor<CTransform> *__fastcall CCompositeParentSpaceState::GetBonesForModify(
        CWritableBoneAccessor<CTransform> *__return_ptr retstr,
        CCompositeParentSpaceState *const this)
{
  uint16 AnimationStateCount; // r13
  char *m_pData; // r15
  const CTransform *v6; // r14
  uint32 *v7; // rax

  if ( this->m_hModel.m_pBinding == 0 )
  {
    AnimationStateCount = 0;
    goto LABEL_6;
  }
  AnimationStateCount = CModel::GetAnimationStateCount(
                          this->m_hModel.m_pBinding->CAnimationState::m_pData,
                          AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
  if ( this->m_hModel.m_pBinding == 0 )
  {
LABEL_6:
    v6 = 0;
    goto LABEL_4;
  }
  m_pData = this->m_pData;
  v6 = &m_pData[CModel::GetAnimationStateOffset(
                  this->m_hModel.m_pBinding->CAnimationState::m_pData,
                  AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
LABEL_4:
  v7 = CAnimationState::GetReadableBonesForWrite(this);
  retstr->m_pBones = v6;
  retstr->m_pReadableBones = v7;
  retstr->m_nBones = AnimationStateCount;
  retstr->m_bOwnsMemory = 0;
  return retstr;
}


// CCompositeParentSpaceState::LerpFrom  (line 860, @0x00000000020b8050, libserver.so)  // inlines: CWeakHandle, GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, Init, Realloc, SetHasValidBoneTransformData, memcpy, operator==
// calls: CAnimationState::Realloc, CModel::GetAnimationStateCount, CModel::GetAnimationStateOffset, memcpy, CAnimationState::GetReadableBones, CAnimationState::MarkBonesReadable, CAnimationState::MarkBoneReadable, TransformLerp, CAnimationState::IsBoneReadable
void __fastcall CCompositeParentSpaceState::LerpFrom(
        CCompositeParentSpaceState *const this,
        const CCompositeParentSpaceState *pState1,
        const CCompositeParentSpaceState *pState2,
        float t)
{
  const CCompositeParentSpaceState *v5; // r13
  size_t v7; // r12
  char *m_pData; // r15
  char *v9; // r14
  char *v10; // r15
  char *v11; // rsi
  const uint32 *ReadableBones; // rax
  char *v13; // r12
  char *v14; // r12
  const CTransform *v15; // r15
  char *v16; // r12
  CTransform *v17; // r12
  const CTransform *v18; // rax
  int v19; // r12d
  int v20; // esi
  bool IsBoneReadable; // al
  bool v22; // dl
  signed int AnimationStateCount; // [rsp+8h] [rbp-58h]
  CTransform *q; // [rsp+10h] [rbp-50h]
  CTransform *qt; // [rsp+18h] [rbp-48h]
  CTransform *qta; // [rsp+18h] [rbp-48h]
  HModel hModel; // [rsp+20h] [rbp-40h] BYREF

  v5 = pState2;
  if ( pState1->m_bHasValidBoneTransformData )
  {
    if ( !pState2->m_bHasValidBoneTransformData )
    {
      v5 = pState1;
LABEL_4:
      if ( !this->m_bHasValidBoneTransformData )
        this->m_bHasValidBoneTransformData = 1;
      hModel.m_pBinding = v5->m_hModel.m_pBinding;
      CAnimationState::Realloc(this, &hModel);
      if ( this->m_hModel.m_pBinding != 0 )
      {
        v7 = 32LL
           * CModel::GetAnimationStateCount(
               this->m_hModel.m_pBinding->CAnimationState::m_pData,
               AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
        if ( this->m_hModel.m_pBinding != 0 )
        {
          m_pData = this->m_pData;
          v9 = &m_pData[CModel::GetAnimationStateOffset(
                          this->m_hModel.m_pBinding->CAnimationState::m_pData,
                          AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v7 = 0;
        v9 = 0;
      }
      if ( v5->m_hModel.m_pBinding != 0 )
      {
        v10 = v5->m_pData;
        v11 = &v10[CModel::GetAnimationStateOffset(
                     v5->m_hModel.m_pBinding->CAnimationState::m_pData,
                     AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
      }
      else
      {
        v11 = 0;
      }
      memcpy(v9, v11, v7);
      ReadableBones = CAnimationState::GetReadableBones(v5);
      CAnimationState::MarkBonesReadable(this, ReadableBones);
      return;
    }
    if ( pState2->m_hModel.m_pBinding != 0 )
    {
      v13 = pState2->m_pData;
      qt = &v13[CModel::GetAnimationStateOffset(
                  pState2->m_hModel.m_pBinding->CAnimationState::m_pData,
                  AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      qt = 0;
    }
    if ( pState1->m_hModel.m_pBinding != 0 )
    {
      v14 = pState1->m_pData;
      v15 = &v14[CModel::GetAnimationStateOffset(
                   pState1->m_hModel.m_pBinding->CAnimationState::m_pData,
                   AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      v15 = 0;
    }
    if ( !this->m_bHasValidBoneTransformData )
      this->m_bHasValidBoneTransformData = 1;
    hModel.m_pBinding = pState1->m_hModel.m_pBinding;
    CAnimationState::Realloc(this, &hModel);
    if ( this->m_hModel.m_pBinding != 0 )
    {
      AnimationStateCount = CModel::GetAnimationStateCount(
                              this->m_hModel.m_pBinding->CAnimationState::m_pData,
                              AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
      if ( this->m_hModel.m_pBinding != 0 )
      {
        v16 = this->m_pData;
        v17 = &v16[CModel::GetAnimationStateOffset(
                     this->m_hModel.m_pBinding->CAnimationState::m_pData,
                     AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
      }
      else
      {
        v17 = 0;
      }
      if ( AnimationStateCount > 0 )
      {
        v18 = qt;
        qta = v17;
        v19 = 0;
        q = v18;
        TransformLerp(v15, v18, t, qta);
        while ( 1 )
        {
          IsBoneReadable = CAnimationState::IsBoneReadable(pState1, v19);
          v22 = 0;
          if ( IsBoneReadable )
            v22 = CAnimationState::IsBoneReadable(v5, v19);
          v20 = v19++;
          CAnimationState::MarkBoneReadable(this, v20, v22);
          ++v15;
          ++q;
          ++qta;
          if ( v19 == AnimationStateCount )
            break;
          TransformLerp(v15, q, t, qta);
        }
      }
    }
  }
  else
  {
    if ( pState2->m_bHasValidBoneTransformData )
      goto LABEL_4;
    if ( this->m_bHasValidBoneTransformData )
      this->m_bHasValidBoneTransformData = 0;
  }
}


// CClothSnapshotState::GetDebugString  (line 980, @0x00000000020b82b0, libserver.so)  // inlines: CUtlString
// calls: CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%d nodes"
CUtlString __fastcall CClothSnapshotState::GetDebugString(CUtlString *a1, const CClothSnapshotState *const this)
{
  a1->m_pString = 0;
  CUtlString::Format(a1, "%d nodes", this->m_NodePos.m_Size);
  return a1;
}


// CClothSnapshotState::GetDebugSpeedString  (line 1004, @0x00000000020b8300, libserver.so)  // inlines: CUtlString
// calls: CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%d nodes"
CUtlString __fastcall CClothSnapshotState::GetDebugSpeedString(
        const CClothSnapshotState *const this,
        float flPrevTime,
        float flNextTime,
        const CClothSnapshotState *pPrevValue)
{
  this->m_pFeModel = 0;
  CUtlString::Format(this, "%d nodes", pPrevValue->m_NodePos.m_Size);
  return this;
}


// CClothSnapshotState::LerpFrom  (line 1011, @0x00000000020ecfb0, libserver.so)  // inlines: Init, Lerp<QAngle>, Lerp<Vector>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator==, operator[]
// calls: CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::SetCount, AngleQuaternion, QuaternionSlerp, QuaternionAngles
// callers: CModelState::LoopingLerp_NoCopy, CModelState::Lerp_NoCopy
void __fastcall CClothSnapshotState::LerpFrom(
        CClothSnapshotState *const this,
        const CClothSnapshotState *pState1,
        const CClothSnapshotState *pState2,
        float t)
{
  int m_Size; // r14d
  int v8; // esi
  CUtlVector<VectorAligned,CUtlMemory<VectorAligned,int> > *p_m_NodePos; // rdi
  __int64 v10; // rax
  int v11; // r9d
  float v12; // xmm4_4
  __int64 v13; // rdi
  __int64 v14; // rcx
  VectorAligned *v15; // r8
  float *v16; // rdi
  float *v17; // rcx
  float v18; // xmm5_4
  float v19; // xmm1_4
  float x; // xmm3_4
  float v21; // xmm4_4
  vec_t v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float y; // xmm2_4
  vec_t z; // xmm0_4
  CUtlVector<VectorAligned,CUtlMemory<VectorAligned,int> > *v27; // rdi
  int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // rcx
  _DWORD *v33; // rdx
  int v34; // xmm1_4
  int v35; // xmm0_4
  CUtlVector<VectorAligned,CUtlMemory<VectorAligned,int> > *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rdx
  _DWORD *v41; // rcx
  _DWORD *v42; // rdx
  int v43; // xmm1_4
  int v44; // xmm0_4
  QAngle angles; // [rsp+10h] [rbp-70h] BYREF
  Quaternion outQuat; // [rsp+20h] [rbp-60h] BYREF
  Quaternion q; // [rsp+30h] [rbp-50h] BYREF
  Quaternion qt; // [rsp+40h] [rbp-40h] BYREF

  m_Size = pState1->m_NodePos.m_Size;
  if ( m_Size != 0 )
  {
    v8 = pState2->m_NodePos.m_Size;
    if ( v8 != 0 )
    {
      p_m_NodePos = &this->m_NodePos;
      if ( m_Size <= v8 )
        v8 = m_Size;
      CUtlVectorBase<VectorAligned,CUtlMemory<VectorAligned,int>>::SetCount(p_m_NodePos, v8);
      if ( this->m_NodePos.m_Size > 0 )
      {
        v10 = 0;
        v11 = 0;
        v12 = 1.0 - t;
        do
        {
          v13 = v10 * 16;
          v14 = v10 * 16;
          v15 = &pState2->m_NodePos.m_Memory.m_pMemory[v10];
          ++v11;
          ++v10;
          v16 = (&pState1->m_NodePos.m_Memory.m_pMemory->x + v13);
          v17 = (&this->m_NodePos.m_Memory.m_pMemory->x + v14);
          v18 = *v16 * v12;
          v19 = (v15->z * t) + (v16[2] * v12);
          x = v15->x;
          v17[1] = (v15->y * t) + (v16[1] * v12);
          v17[3] = 0.0;
          v17[2] = v19;
          *v17 = (x * t) + v18;
        }
        while ( this->m_NodePos.m_Size > v11 );
      }
      this->m_pFeModel = pState1->m_pFeModel;
      this->m_hSoftbody = pState1->m_hSoftbody;
      this->m_flTime = (pState1->m_flTime * (1.0 - t)) + (pState2->m_flTime * t);
      v21 = pState1->m_vAbsOrigin.x;
      v22 = ((pState2->m_vAbsOrigin.z - pState1->m_vAbsOrigin.z) * t) + pState1->m_vAbsOrigin.z;
      v23 = pState2->m_vAbsOrigin.x;
      this->m_vAbsOrigin.y = ((pState2->m_vAbsOrigin.y - pState1->m_vAbsOrigin.y) * t) + pState1->m_vAbsOrigin.y;
      this->m_vAbsOrigin.z = v22;
      this->m_vAbsOrigin.x = ((v23 - v21) * t) + v21;
      v24 = pState1->m_vAbsAngles.x;
      if ( v24 == pState2->m_vAbsAngles.x
        && (y = pState1->m_vAbsAngles.y) == pState2->m_vAbsAngles.y
        && pState1->m_vAbsAngles.z == pState2->m_vAbsAngles.z )
      {
        z = pState1->m_vAbsAngles.z;
      }
      else
      {
        AngleQuaternion(&pState1->m_vAbsAngles, &outQuat);
        AngleQuaternion(&pState2->m_vAbsAngles, &q);
        QuaternionSlerp(&outQuat, &q, t, &qt);
        QuaternionAngles(&qt, &angles);
        v24 = angles.x;
        y = angles.y;
        z = angles.z;
      }
      this->m_vAbsAngles.x = v24;
      this->m_vAbsAngles.y = y;
      this->m_vAbsAngles.z = z;
    }
    else
    {
      v36 = &this->m_NodePos;
      if ( v36 != &pState1->m_NodePos )
      {
        CUtlVectorBase<VectorAligned,CUtlMemory<VectorAligned,int>>::SetCount(v36, m_Size);
        if ( m_Size > 0 )
        {
          v37 = 0;
          v38 = 16 * ((m_Size - 1) + 1LL);
          do
          {
            v39 = v37;
            v40 = v37;
            v37 += 16;
            v41 = (&pState1->m_NodePos.m_Memory.m_pMemory->x + v39);
            v42 = (&this->m_NodePos.m_Memory.m_pMemory->x + v40);
            v43 = v41[1];
            v44 = v41[2];
            *v42 = *v41;
            v42[1] = v43;
            v42[2] = v44;
          }
          while ( v37 != v38 );
        }
      }
      this->m_pFeModel = pState1->m_pFeModel;
      this->m_hSoftbody = pState1->m_hSoftbody;
      this->m_flTime = pState1->m_flTime;
      this->m_vAbsAngles.x = pState1->m_vAbsAngles.x;
      this->m_vAbsAngles.y = pState1->m_vAbsAngles.y;
      this->m_vAbsAngles.z = pState1->m_vAbsAngles.z;
      this->m_vAbsOrigin.x = pState1->m_vAbsOrigin.x;
      this->m_vAbsOrigin.y = pState1->m_vAbsOrigin.y;
      this->m_vAbsOrigin.z = pState1->m_vAbsOrigin.z;
    }
  }
  else
  {
    v27 = &this->m_NodePos;
    if ( v27 != &pState2->m_NodePos )
    {
      v28 = pState2->m_NodePos.m_Size;
      CUtlVectorBase<VectorAligned,CUtlMemory<VectorAligned,int>>::SetCount(v27, v28);
      if ( v28 > 0 )
      {
        v29 = 0;
        do
        {
          v30 = v29;
          v31 = v29;
          v29 += 16;
          v32 = (&pState2->m_NodePos.m_Memory.m_pMemory->x + v30);
          v33 = (&this->m_NodePos.m_Memory.m_pMemory->x + v31);
          v34 = v32[1];
          v35 = v32[2];
          *v33 = *v32;
          v33[1] = v34;
          v33[2] = v35;
        }
        while ( v29 != 16 * ((v28 - 1) + 1LL) );
      }
    }
    this->m_pFeModel = pState2->m_pFeModel;
    this->m_hSoftbody = pState2->m_hSoftbody;
    this->m_flTime = pState2->m_flTime;
    this->m_vAbsAngles.x = pState2->m_vAbsAngles.x;
    this->m_vAbsAngles.y = pState2->m_vAbsAngles.y;
    this->m_vAbsAngles.z = pState2->m_vAbsAngles.z;
    this->m_vAbsOrigin.x = pState2->m_vAbsOrigin.x;
    this->m_vAbsOrigin.y = pState2->m_vAbsOrigin.y;
    this->m_vAbsOrigin.z = pState2->m_vAbsOrigin.z;
  }
}


// CClothSnapshotState::LerpHermiteFrom  (line 1047, @0x00000000020ec820, libserver.so)  // inlines: Init, Lerp<QAngle>, Lerp_Hermite<QAngle>, Lerp_Hermite<Vector>, Lerp_Hermite<VectorAligned>, Lerp_Hermite<float>, VectorMultiply, VectorSubtract, operator*, operator+=, operator-, operator=, operator==, operator[]
// calls: CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::SetCount, AngleQuaternion, QuaternionSlerp, QuaternionAngles
// callers: CModelState::LoopingLerp_Hermite_NoCopy, CModelState::Lerp_Hermite_NoCopy
void __fastcall CClothSnapshotState::LerpHermiteFrom(
        CClothSnapshotState *const this,
        const CClothSnapshotState *const current,
        float t,
        const CClothSnapshotState *const p0,
        const CClothSnapshotState *const p1,
        const CClothSnapshotState *const p2)
{
  CUtlVector<VectorAligned,CUtlMemory<VectorAligned,int> > *p_m_NodePos; // rdi
  int m_Size; // esi
  float v13; // xmm13_4
  __int64 v14; // rax
  int v15; // edi
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  VectorAligned *v20; // r9
  VectorAligned *v21; // r11
  VectorAligned *v22; // r10
  float y; // xmm12_4
  float z; // xmm3_4
  float x; // xmm4_4
  VectorAligned *v26; // r9
  float v27; // xmm10_4
  float v28; // xmm4_4
  vec_t v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm10_4
  float v32; // xmm5_4
  float v33; // xmm15_4
  float v34; // xmm4_4
  float v35; // xmm1_4
  float v36; // xmm10_4
  float v37; // xmm6_4
  vec_t v38; // xmm2_4
  float v39; // xmm7_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  vec_t v42; // xmm0_4
  QAngle angles; // [rsp+10h] [rbp-70h] BYREF
  Quaternion outQuat; // [rsp+20h] [rbp-60h] BYREF
  Quaternion q; // [rsp+30h] [rbp-50h] BYREF
  Quaternion qt; // [rsp+40h] [rbp-40h] BYREF

  p_m_NodePos = &this->m_NodePos;
  m_Size = current->m_NodePos.m_Size;
  if ( p0->m_NodePos.m_Size <= m_Size )
    m_Size = p0->m_NodePos.m_Size;
  if ( m_Size > p1->m_NodePos.m_Size )
    m_Size = p1->m_NodePos.m_Size;
  if ( m_Size > p2->m_NodePos.m_Size )
    m_Size = p2->m_NodePos.m_Size;
  CUtlVectorBase<VectorAligned,CUtlMemory<VectorAligned,int>>::SetCount(p_m_NodePos, m_Size);
  v13 = t * t;
  if ( this->m_NodePos.m_Size > 0 )
  {
    v14 = 0;
    v15 = 0;
    v16 = (t * v13) - v13;
    v17 = ((t * v13) * -2.0) + (v13 * 3.0);
    v18 = (((t * v13) + (t * v13)) - (v13 * 3.0)) + 1.0;
    v19 = ((t * v13) - (v13 + v13)) + t;
    do
    {
      v20 = &p2->m_NodePos.m_Memory.m_pMemory[v14];
      ++v15;
      v21 = &p1->m_NodePos.m_Memory.m_pMemory[v14];
      v22 = &p0->m_NodePos.m_Memory.m_pMemory[v14];
      y = v20->y;
      z = v20->z;
      x = v20->x;
      v26 = &this->m_NodePos.m_Memory.m_pMemory[v14++];
      v27 = x * v17;
      v28 = (x - v21->x) * v16;
      v29 = (((v21->z * v18) + (z * v17)) + ((v21->z - v22->z) * v19)) + ((z - v21->z) * v16);
      v30 = (v21->x * v18) + v27;
      v31 = v21->x - v22->x;
      v26->y = (((v21->y * v18) + (y * v17)) + ((v21->y - v22->y) * v19)) + ((y - v21->y) * v16);
      v26->z = v29;
      v26->x = (v30 + (v31 * v19)) + v28;
    }
    while ( this->m_NodePos.m_Size > v15 );
  }
  this->m_pFeModel = current->m_pFeModel;
  v32 = (t * v13) - v13;
  this->m_hSoftbody = current->m_hSoftbody;
  v33 = (-2.0 * (t * v13)) + (3.0 * v13);
  v34 = ((t * v13) - (v13 + v13)) + t;
  v35 = (((t * v13) + (t * v13)) - (3.0 * v13)) + 1.0;
  this->m_flTime = (((p1->m_flTime * v35) + (p2->m_flTime * v33)) + ((p1->m_flTime - p0->m_flTime) * v34))
                 + ((p2->m_flTime - p1->m_flTime) * v32);
  v36 = p2->m_vAbsOrigin.x;
  v37 = p1->m_vAbsOrigin.x;
  v38 = (((p1->m_vAbsOrigin.z * v35) + (p2->m_vAbsOrigin.z * v33)) + ((p1->m_vAbsOrigin.z - p0->m_vAbsOrigin.z) * v34))
      + ((p2->m_vAbsOrigin.z - p1->m_vAbsOrigin.z) * v32);
  v39 = v37 - p0->m_vAbsOrigin.x;
  this->m_vAbsOrigin.y = (((p1->m_vAbsOrigin.y * v35) + (p2->m_vAbsOrigin.y * v33))
                        + ((p1->m_vAbsOrigin.y - p0->m_vAbsOrigin.y) * v34))
                       + ((p2->m_vAbsOrigin.y - p1->m_vAbsOrigin.y) * v32);
  this->m_vAbsOrigin.z = v38;
  this->m_vAbsOrigin.x = (((v35 * v37) + (v33 * v36)) + (v39 * v34)) + ((v36 - v37) * v32);
  v40 = p1->m_vAbsAngles.x;
  if ( v40 == p2->m_vAbsAngles.x
    && (v41 = p1->m_vAbsAngles.y) == p2->m_vAbsAngles.y
    && p1->m_vAbsAngles.z == p2->m_vAbsAngles.z )
  {
    v42 = p1->m_vAbsAngles.z;
  }
  else
  {
    AngleQuaternion(&p1->m_vAbsAngles, &outQuat);
    AngleQuaternion(&p2->m_vAbsAngles, &q);
    QuaternionSlerp(&outQuat, &q, t, &qt);
    QuaternionAngles(&qt, &angles);
    v40 = angles.x;
    v41 = angles.y;
    v42 = angles.z;
  }
  this->m_vAbsAngles.x = v40;
  this->m_vAbsAngles.y = v41;
  this->m_vAbsAngles.z = v42;
}


// CModelState::LoopingLerp_NoCopy  (line 1062, @0x00000000020ed3a0, libserver.so)
// calls: CClothSnapshotState::LerpFrom
void __fastcall CModelState::LoopingLerp_NoCopy(
        CModelState *const this,
        CClothSnapshotState *const output,
        float flPercent,
        const CClothSnapshotState *const from,
        const CClothSnapshotState *const to)
{
  CClothSnapshotState::LerpFrom(output, from, to, flPercent);
}


// CModelState::Lerp_NoCopy  (line 1067, @0x00000000020ed3c0, libserver.so)
// calls: CClothSnapshotState::LerpFrom
void __fastcall CModelState::Lerp_NoCopy(
        CModelState *const this,
        CClothSnapshotState *const output,
        float flPercent,
        const CClothSnapshotState *const from,
        const CClothSnapshotState *const to)
{
  CClothSnapshotState::LerpFrom(output, from, to, flPercent);
}


// CModelState::LoopingLerp_Hermite_NoCopy  (line 1072, @0x00000000020ecc60, libserver.so)
// calls: CClothSnapshotState::LerpHermiteFrom
void __fastcall CModelState::LoopingLerp_Hermite_NoCopy(
        CModelState *const this,
        CClothSnapshotState *const output,
        const CClothSnapshotState *const current,
        float t,
        const CClothSnapshotState *const p0,
        const CClothSnapshotState *const p1,
        const CClothSnapshotState *const p2)
{
  CClothSnapshotState::LerpHermiteFrom(output, current, t, p0, p1, p2);
}


// CModelState::Lerp_Hermite_NoCopy  (line 1077, @0x00000000020ecc80, libserver.so)
// calls: CClothSnapshotState::LerpHermiteFrom
void __fastcall CModelState::Lerp_Hermite_NoCopy(
        CModelState *const this,
        CClothSnapshotState *const output,
        const CClothSnapshotState *const current,
        float t,
        const CClothSnapshotState *const p0,
        const CClothSnapshotState *const p1,
        const CClothSnapshotState *const p2)
{
  CClothSnapshotState::LerpHermiteFrom(output, current, t, p0, p1, p2);
}


// CSkeletonInstance::CSkeletonInstance  (line 1106, @0x00000000020d3120, libserver.so)  // inlines: CNetworkVarBase, CUtlStringToken, EnsureValidValue<unsigned char>, NetworkStateChanged, NetworkVar_m_modelState, Set, operator=<float>, operator=<int>, ~NetworkVar_m_modelState
// calls: CGameSceneNode::CGameSceneNode, CModelState::CModelState, CModelState::~CModelState, CGameSceneNode::~CGameSceneNode, _Unwind_Resume
// callers: CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate
void __fastcall CSkeletonInstance::CSkeletonInstance(CSkeletonInstance *const this)
{
  CSkeletonInstance::NetworkVar_m_modelState *p_m_modelState; // r12
  int (**vptr_CGameSceneNode)(...); // rax
  int (**v4)(...); // rax
  char v5; // al
  bool v6; // zf
  unsigned __int8 m_Value; // al

  p_m_modelState = &this->m_modelState;
  CGameSceneNode::CGameSceneNode(this);
  this->_vptr_CGameSceneNode = &off_3FFC670;
  this->_vptr_ISceneAnimatableProceduralBoneTransforms = &off_3FFC760;
  CModelState::CModelState(p_m_modelState);
  this->m_modelState._vptr_CModelState = &off_3FF42B0;
  vptr_CGameSceneNode = this->_vptr_CGameSceneNode;
  this->m_bIsRenderingEnabled.m_Value = 1;
  vptr_CGameSceneNode[24](this, 720, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->_vptr_CGameSceneNode;
  this->m_bIsAnimationEnabled.m_Value = 1;
  v4[24](this, 721, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = *(this + 722);
  this->m_materialGroup.m_Value.m_nHashCode = 0;
  this->m_nHitboxSet.m_Value = 0;
  this->m_pController = 0;
  this->m_nRenderingOptimization = ERenderingOptimization_t::RENDERING_OPTIMIZATION_NONE;
  this->m_pAttachmentOverride = 0;
  v6 = this->m_flScale.m_Value == 1.0;
  *(this + 722) = v5 & 0xFA;
  if ( v6 )
  {
    *(this + 722) = v5 & 0xF8;
  }
  else
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_nHitboxSet.m_Value;
    this->m_flScale.m_Value = 1.0;
    *(this + 722) &= ~2u;
    if ( m_Value != 0 )
    {
      (*(this->_vptr_CGameSceneNode + 24))(this, 728, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nHitboxSet.m_Value = 0;
    }
  }
  *(this + 722) &= 0xE7u;
  this->m_pBoneTransformOverride = 0;
  this->m_hCurrentlyAsyncLoadingModel = 0;
}


// CSkeletonInstance::~CSkeletonInstance  (line 1121, @0x00000000020dd0c0, libserver.so)  // inlines: ~CJiggleBones, ~CUtlLinkedList, ~CUtlMemory, ~NetworkVar_m_modelState
// calls: CModelState::DestructPhysicsBoneMap, CUtlLinkedList<JiggleData, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<JiggleData, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<JiggleData, short unsigned int>, short unsigned int>::Purge, operator delete, CModelState::~CModelState, CGameSceneNode::~CGameSceneNode
// callers: CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::~NetworkVar_m_skeletonInstance, CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate, CSkeletonInstance::~CSkeletonInstance
void __fastcall CSkeletonInstance::~CSkeletonInstance(CSkeletonInstance *const this)
{
  CSkeletonInstance::NetworkVar_m_modelState *p_m_modelState; // r13
  CJiggleBones *m_pJiggleBones; // r12

  p_m_modelState = &this->m_modelState;
  this->_vptr_CGameSceneNode = &off_3FFC670;
  this->_vptr_ISceneAnimatableProceduralBoneTransforms = &off_3FFC760;
  CModelState::DestructPhysicsBoneMap(&this->m_modelState);
  m_pJiggleBones = this->m_modelState.m_pJiggleBones;
  if ( m_pJiggleBones != 0 )
  {
    CUtlLinkedList<JiggleData,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>>::RemoveAll(&this->m_modelState.m_pJiggleBones->m_jiggleBoneState);
    CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>::Purge(&m_pJiggleBones->m_jiggleBoneState.m_Memory);
    operator delete(m_pJiggleBones);
    this->m_modelState.m_pJiggleBones = 0;
  }
  this->m_modelState._vptr_CModelState = &off_3FF42B0;
  CModelState::~CModelState(p_m_modelState);
  CGameSceneNode::~CGameSceneNode(this);
}


// CSkeletonInstance::~CSkeletonInstance  (line 1121, @0x00000000020dd150, libserver.so)
// calls: CSkeletonInstance::~CSkeletonInstance, operator delete
void __fastcall CSkeletonInstance::~CSkeletonInstance(CSkeletonInstance *const this)
{
  CSkeletonInstance::~CSkeletonInstance(this);
  operator delete(this);
}


// CModelState::CModelState  (line 1134, @0x00000000020d2c50, libserver.so)  // inlines: CClothSnapshotState, CCompositeParentSpaceState, CNetworkVarBase, CSimulationState, CStrongHandle, CThreadSyncValue<>, CUtlMemory, CUtlMemoryConservative, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CUtlVectorConservative, CWeakHandle, EnsureValidValue<signed char>, Init, NetworkStateChanged, Purge, RememberAllocSize, RemoveAll, Set, SetShouldAllocateBoneTransforms, Shutdown, operator=, operator=<VPhysicsMotionType_t>, ~CClothSnapshotState, ~CCompositeParentSpaceState, ~CNetworkVarBase, ~CSimulationState, ~CStrongHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorConservative
// calls: CAnimationState::CAnimationState, CAnimationState::~CAnimationState, _Unwind_Resume, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, operator delete [], CUtlMemory<VectorAligned, int>::Purge
// callers: CSkeletonInstance::CSkeletonInstance, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
// globals: s_nModelStateDebugIndex
void __fastcall CModelState::CModelState(CModelState *const this)
{
  CCompositeParentSpaceState *p_m_compositeParentSpaceState; // r13
  int (**vptr_CModelState)(...); // rax
  int v4; // eax
  int v5; // edx
  int (**v6)(...); // rax
  bool v7; // zf

  p_m_compositeParentSpaceState = &this->m_compositeParentSpaceState;
  this->_vptr_CModelState = off_3FF4270;  // vptr: CModelState
  CAnimationState::CAnimationState(&this->m_animationState);
  CAnimationState::CAnimationState(p_m_compositeParentSpaceState);
  vptr_CModelState = this->_vptr_CModelState;
  this->m_compositeParentSpaceState.m_pInterpolatedBoneTransformWeights = 0;
  this->m_compositeParentSpaceState.m_pInterpolatedBoneTransforms = 0;
  this->m_compositeParentSpaceState.m_bHasValidBoneTransformData = 0;
  this->m_compositeParentSpaceState.m_bShouldAllocateBoneTransforms = 0;
  this->m_compositeParentSpaceState.m_bShouldUseInterpolatedBoneTransforms = 0;
  *(&this->m_compositeParentSpaceState + 59) = 0;
  this->m_simulationState.m_nTotalTransformCount = 0;
  this->m_simulationState.m_nBoneCount = 0;
  this->m_simulationState.m_nAttachmentCount = 0;
  this->m_simulationState.m_pTransforms = 0;
  this->m_simulationState.m_pReadableBones = 0;
  this->m_hModel.m_Value.m_pBinding = 0;
  this->m_ModelName.u.m_Id = 0;
  this->m_hNewModel.m_pBinding = 0;
  this->m_ClothSnapshot.m_pFeModel = 0;
  this->m_ClothSnapshot.m_NodePos.m_Size = 0;
  this->m_ClothSnapshot.m_NodePos.m_Memory.m_pMemory = 0;
  this->m_ClothSnapshot.m_NodePos.m_Memory.m_nAllocationCount = 0;
  this->m_ClothSnapshot.m_NodePos.m_Memory.m_nGrowSize = 0;
  this->m_MeshGroupMask.m_Value = 0;
  vptr_CModelState[2](this, 320, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = s_nModelStateDebugIndex;
  this->m_nIdealMotionType.m_Value = 0;
  this->m_SkeletonBoneToPhysicsBone.m_Size = 0;
  this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory = 0;
  this->m_SkeletonBoneToPhysicsBone.m_Memory.m_nCurAllocSize = 0;
  v5 = v4 + 1;
  this->m_nDebugIndex = v4;
  v6 = this->_vptr_CModelState;
  s_nModelStateDebugIndex = v5;
  this->m_ClothSimBoneMap.m_Size = 0;
  this->m_ClothSimBoneMap.m_Memory.m_pMemory = 0;
  this->m_ClothSimBoneMap.m_Memory.m_nCurAllocSize = 0;
  this->m_bHierarchyBoneFlagsDirty.m_value = 0;
  v6[2](this, 384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v7 = !this->m_compositeParentSpaceState.m_bShouldAllocateBoneTransforms;
  this->m_nIdealMotionType.m_Value = 3;
  this->m_hSceneObjectUpdater = 0;
  this->m_pVPhysicsAggregate = 0;
  this->m_ModelName.u.m_Id = 0;
  this->m_hNewModel.m_pBinding = 0;
  this->m_bHierarchyBoneFlagsDirty.m_value = 0;
  this->m_pBoneFlagsIncludingChildren = 0;
  this->m_bIsJiggleBonesEnabled = 1;
  this->m_pJiggleBones = 0;
  this->m_nForceLOD = -1;
  if ( v7 )
    this->m_compositeParentSpaceState.m_bShouldAllocateBoneTransforms = 1;
  this->m_nClothUpdateFlags = 0;
  this->m_hCloth2 = 0;
  this->m_nTotalBoneCount = 0;
  this->m_nPhysBoneCount = 0;
  this->m_nBoneFlagsAssociatedWithCloth = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  this->m_bHasCloth = 0;
  this->m_bHasProceduralBones = 0;
  this->m_bHasFlexProceduralBones = 0;
}


// CModelState::~CModelState  (line 1166, @0x00000000020d2fd0, libserver.so)  // inlines: Purge, RememberAllocSize, RemoveAll, Shutdown, ~CClothSnapshotState, ~CCompositeParentSpaceState, ~CNetworkVarBase, ~CSimulationState, ~CStrongHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorConservative
// calls: CModelState::CleanupJointState, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, operator delete [], CAnimationState::~CAnimationState, CUtlMemory<VectorAligned, int>::Purge
// callers: CSkeletonInstance::CSkeletonInstance, CSkeletonInstance::~CSkeletonInstance, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
void __fastcall CModelState::~CModelState(CModelState *const this)
{
  _QWORD *v2; // rdi
  __int16 *m_pMemory; // rsi
  bool v4; // zf
  matrix3x4a_t *m_pTransforms; // rdi
  uint32 *m_pReadableBones; // rdi

  this->_vptr_CModelState = off_3FF4270;  // vptr: CModelState
  CModelState::CleanupJointState(this);
  this->m_ClothSimBoneMap.m_Size = 0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_ClothSimBoneMap.m_Memory.m_pMemory);
  v2 = g_pMemAlloc;
  this->m_ClothSimBoneMap.m_Memory.m_nCurAllocSize = 0;
  this->m_ClothSimBoneMap.m_Memory.m_pMemory = 0;
  m_pMemory = this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory;
  this->m_SkeletonBoneToPhysicsBone.m_Size = 0;
  (*(*v2 + 16LL))(v2, m_pMemory);
  v4 = (this->m_ClothSnapshot.m_NodePos.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SkeletonBoneToPhysicsBone.m_Memory.m_nCurAllocSize = 0;
  this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory = 0;
  this->m_ClothSnapshot.m_NodePos.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<VectorAligned,int>::Purge(&this->m_ClothSnapshot.m_NodePos.m_Memory);
    if ( (this->m_ClothSnapshot.m_NodePos.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<VectorAligned,int>::Purge(&this->m_ClothSnapshot.m_NodePos.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_hModel.m_Value);
  m_pTransforms = this->m_simulationState.m_pTransforms;
  if ( m_pTransforms != 0 )
  {
    operator delete[](m_pTransforms);
    this->m_simulationState.m_pTransforms = 0;
  }
  m_pReadableBones = this->m_simulationState.m_pReadableBones;
  if ( m_pReadableBones != 0 )
  {
    operator delete[](m_pReadableBones);
    this->m_simulationState.m_pReadableBones = 0;
  }
  this->m_simulationState.m_nBoneCount = 0;
  this->m_simulationState.m_nAttachmentCount = 0;
  this->m_simulationState.m_nTotalTransformCount = 0;
  CAnimationState::~CAnimationState(&this->m_compositeParentSpaceState);
  CAnimationState::~CAnimationState(&this->m_animationState);
}


// CModelState::CreateInterpolatedVars  (line 1171, @0x00000000020b8350, libserver.so)
void __fastcall CModelState::CreateInterpolatedVars(CModelState *const this)
{
  ;
}


// CModelState::DestroyInterpolatedVars  (line 1181, @0x00000000020b8360, libserver.so)
void __fastcall CModelState::DestroyInterpolatedVars(CModelState *const this)
{
  ;
}


// CSkeletonInstance::Connect  (line 1194, @0x000000000209f910, libserver.so)
// calls: CGameSceneNode::Connect
void __fastcall CSkeletonInstance::Connect(CSkeletonInstance *const this, const char *pName, CEntityInstance *pEntity)
{
  CSkeletonAnimationController *m_pController; // rdi

  CGameSceneNode::Connect(this, pName, pEntity);
  m_pController = this->m_pController;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_CSkeletonAnimationController + 4))(m_pController, pEntity);
}


// CSkeletonInstance::AddedToEntityDatabase  (line 1204, @0x000000000209c7f0, libserver.so)
void __fastcall CSkeletonInstance::AddedToEntityDatabase(CSkeletonInstance *const this, CEntityInstance *pEntity)
{
  CSkeletonAnimationController *m_pController; // rdi

  m_pController = this->m_pController;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_CSkeletonAnimationController + 5))(m_pController, pEntity);
}


// CSkeletonInstance::Spawn  (line 1214, @0x00000000020cf280, libserver.so)
// calls: CGameSceneNode::Spawn
bool __fastcall CSkeletonInstance::Spawn(
        CSkeletonInstance *const this,
        CEntityInstance *pEntity,
        const char *pKeyValuePrefix,
        const CEntityKeyValues *pKeyValues)
{
  bool v7; // al
  CSkeletonAnimationController *m_pController; // rdi
  bool v9; // r14

  v7 = CGameSceneNode::Spawn(this, pEntity, pKeyValuePrefix, pKeyValues);
  m_pController = this->m_pController;
  v9 = v7;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_CSkeletonAnimationController + 6))(m_pController, pEntity, pKeyValues);
  return v9;
}


// CSkeletonInstance::PostInstanceSpawn  (line 1228, @0x00000000020de3d0, libserver.so)  // inlines: AddToTail, CopyConstruct<CSkeletonAnimationController*>, Element, GrowMemory, operator[]
// calls: CGameSceneNode::PostInstanceSpawn, CUtlMemory<CSkeletonAnimationController*, int>::Grow
void __fastcall CSkeletonInstance::PostInstanceSpawn(
        CSkeletonInstance *const this,
        CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > *const animationSetupWork)
{
  __int64 m_Size; // r13
  int v5; // eax
  CSkeletonAnimationController **v6; // rax

  CGameSceneNode::PostInstanceSpawn(this, animationSetupWork);
  if ( this->m_pController != 0 )
  {
    m_Size = animationSetupWork->m_Size;
    v5 = animationSetupWork->m_Size;
    if ( m_Size == animationSetupWork->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CSkeletonAnimationController *,int>::Grow(&animationSetupWork->m_Memory, 1);
      v5 = animationSetupWork->m_Size;
    }
    animationSetupWork->m_Size = v5 + 1;
    v6 = &animationSetupWork->m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      *v6 = this->m_pController;
  }
}


// CSkeletonInstance::PostDataUpdate  (line 1244, @0x00000000020ddc10, libserver.so)  // inlines: AddToTail, CStrongHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CWeakHandle, CalcAbsolutePosition, CleanupModel, ConvertToExternalMemory, CopyConstruct<CGameSceneNode*>, CopyConstruct<CSkeletonAnimationController*>, Element, FromUntypedHandleUnchecked, GetEHandle, GetEntryIndex, GetOwnerEntity, GrowMemory, Init, InitUntypedUnchecked, IsExternallyAllocated, IsNetworked, IsNull, Load, NetworkStateChanged, NodeToWorldTransform, Purge, Purge_FixedGrowable, RemoveAll, Set, SetModel, ThreadInterlockedIncrement, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator!=, operator++, operator=, operator=<CWeakHandle<InfoForResourceTypeCModel> >, operator[], ~CJiggleBones, ~CStrongHandle, ~CUtlLinkedList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CModelState::CModelState, CModelState::CopyStateTo, CStrongHandle<InfoForResourceTypeCModel>::Init, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CModelState::UpdateModelCachedValues, CSkeletonInstance::SetModelNameFromModel, CModelState::SetupJointState, CGameSceneNode::PostDataUpdate, CModelState::UpdateMotionTypeOfAggregate, CBodyGameSystem::QueueExtraPostDataUpdateCallIfNecessary, CModelState::~CModelState, CModelState::SetupModel (26 total)
// strings: "type != DATA_UPDATE_CREATED", "PostDataUpdate", "Assertion Failed in function %s():\n%s"
// globals: CSkeletonInstance::PostDataUpdate(DataUpdateType_t,CUtlVector<CSkeletonAnimationController *,CUtlMemory<CSkeletonAnimationController *,int>> &)::_assertionConst
void __fastcall CSkeletonInstance::PostDataUpdate(
        CSkeletonInstance *const this,
        DataUpdateType_t type,
        CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > *const animationSetupWork)
{
  bool v5; // r15
  CGameSceneNode *i; // rbx
  bool v7; // dl
  CEntityIdentity *m_pEntity; // rax
  const ResourceBinding_t<InfoForResourceTypeCModel> *m_pBinding; // rsi
  const ResourceBindingBase_t *v10; // rsi
  bool v11; // zf
  char v12; // al
  CGameSceneNode *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // cl
  CSkeletonAnimationController *m_pController; // rdi
  void (__fastcall *v18)(CSkeletonAnimationController *, void *, void *); // rcx
  const ResourceBindingBase_t *v19; // rax
  void *m_pData; // rdx
  CEntityInstance *m_pOwner; // rdi
  void (__fastcall *v22)(CEntityInstance *, const ResourceBindingBase_t **, CStrongHandle<InfoForResourceTypeCModel> *); // rax
  CJiggleBones *m_pJiggleBones; // rbx
  CGameSceneNode *m_pChild; // rbx
  CEntityIdentity *v25; // rax
  bool v26; // dl
  __int64 m_Size; // r15
  int v28; // eax
  CGameSceneNode **v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // r15
  CGameSceneNode **v32; // rax
  uint32 v33; // eax
  __int64 v34; // rbx
  int v35; // eax
  CSkeletonAnimationController **v36; // rax
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>,CModelState::NetworkVar_m_hModel> *p_m_hModel; // [rsp+8h] [rbp-318h]
  const ResourceBindingBase_t *v39; // [rsp+20h] [rbp-300h] BYREF
  CStrongHandle<InfoForResourceTypeCModel> v40; // [rsp+30h] [rbp-2F0h] BYREF
  CModelState oldModelState; // [rsp+40h] [rbp-2E0h] BYREF
  CUtlVectorFixedGrowable<CGameSceneNode*,32ul> children; // [rsp+1D0h] [rbp-150h] BYREF
  unsigned __int64 v43; // [rsp+2E8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  CModelState::CModelState(&oldModelState);
  v5 = this->m_modelState.m_hNewModel.m_pBinding != 0;
  if ( type == DataUpdateType_t::DATA_UPDATE_CREATED )
  {
    v40.m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
    CSkeletonInstance::SetModelNameFromModel(this, &v40);
    CModelState::UpdateModelCachedValues(&this->m_modelState);
    CModelState::SetupJointState(&this->m_modelState);
    goto LABEL_25;
  }
  if ( this->m_modelState.m_hNewModel.m_pBinding == 0 )
    goto LABEL_25;
  for ( i = this->m_pChild; i != 0; i = i->m_pNextSibling )
  {
    m_pEntity = i->m_pOwner->m_pEntity;
    if ( (m_pEntity->m_flags & 0x800) != 0 )
    {
      v7 = (m_pEntity->m_flags & 0x40) != 0;
    }
    else
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        goto LABEL_8;
      v7 = (m_pEntity->m_EHandle.m_Index & 0x7FFF) <= 0x3FFF;
    }
    if ( !v7 )
    {
LABEL_8:
      if ( i->m_nHierarchyType != 3 && i->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(i);
    }
  }
  if ( this->m_nHierarchyType == 1 )
    CGameSceneNode::EndHierarchicalAttachment(this, 1);
  CModelState::CopyStateTo(&this->m_modelState, this, &oldModelState);
  m_pBinding = this->m_modelState.m_hNewModel.m_pBinding;
  v40.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeCModel>::Init(&v40, m_pBinding);
  if ( this->m_modelState.m_hModel.m_Value.m_pBinding != v40.m_pBinding )
  {
    (*(this->m_modelState._vptr_CModelState + 2))(&this->m_modelState, 160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    p_m_hModel = &this->m_modelState.m_hModel;
    if ( this->m_modelState.m_hModel.m_Value.m_pBinding != 0 )
      CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&p_m_hModel->m_Value);
    v10 = v40.m_pBinding;
    v11 = v40.m_pBinding == 0;
    this->m_modelState.m_hModel.m_Value = v40;
    if ( !v11 )
    {
      if ( (v10->m_nFlags & 0x20) != 0 )
      {
        (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v10, 2, p_m_hModel);
        v10 = this->m_modelState.m_hModel.m_Value.m_pBinding;
      }
      _InterlockedAdd(&v10->m_nRefCount.m_value, 1u);
    }
  }
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&v40);
  CModelState::UpdateModelCachedValues(&this->m_modelState);
  v40.m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  CSkeletonInstance::SetModelNameFromModel(this, &v40);
  this->m_modelState.m_hNewModel.m_pBinding = 0;
  CModelState::SetupJointState(&this->m_modelState);
  if ( this->m_hParent.m_hOwner.m_Value.m_Index != -1 || this->m_hParent.m_name.m_Value.m_nHashCode != 0 )
    *(&this->CGameSceneNode + 248) |= 1u;
LABEL_25:
  CGameSceneNode::PostDataUpdate(this, type, animationSetupWork);
  if ( v5 )
  {
    if ( type == DataUpdateType_t::DATA_UPDATE_CREATED
      && AssertMsg_ConditionFailed(
           &CSkeletonInstance::PostDataUpdate(DataUpdateType_t,CUtlVector<CSkeletonAnimationController *,CUtlMemory<CSkeletonAnimationController *,int>> &)::_assertionConstants,
           "Assertion Failed in function %s():\n%s") != 0 )
    {
      __debugbreak();
    }
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    CModelState::SetupModel(&this->m_modelState, &oldModelState, this, &this->m_mNodeToWorld);
    m_pController = this->m_pController;
    if ( m_pController != 0 )
    {
      v18 = *(m_pController->_vptr_CSkeletonAnimationController + 17);
      v19 = this->m_modelState.m_hModel.m_Value.m_pBinding;
      if ( v19 != 0 )
        m_pData = v19->m_pData;
      else
        m_pData = 0;
      if ( oldModelState.m_hModel.m_Value.m_pBinding != 0 )
        v18(m_pController, oldModelState.m_hModel.m_Value.m_pBinding->m_pData, m_pData);
      else
        v18(m_pController, 0, m_pData);
    }
    m_pOwner = this->m_pOwner;
    if ( m_pOwner[11]._vptr_IHandleEntity != 0 )
    {
      v22 = *(m_pOwner->_vptr_IHandleEntity + 39);
      v40.m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
      v39 = oldModelState.m_hModel.m_Value.m_pBinding;
      v22(m_pOwner, &v39, &v40);
    }
    m_pJiggleBones = this->m_modelState.m_pJiggleBones;
    if ( m_pJiggleBones != 0 )
    {
      CUtlLinkedList<JiggleData,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>>::RemoveAll(&this->m_modelState.m_pJiggleBones->m_jiggleBoneState);
      CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>::Purge(&m_pJiggleBones->m_jiggleBoneState.m_Memory);
      operator delete(m_pJiggleBones);
      this->m_modelState.m_pJiggleBones = 0;
    }
    CModelState::CleanupPhysics(&oldModelState, this);
    CModelState::CleanupJointState(&oldModelState);
    (*(this->_vptr_CGameSceneNode + 11))(this, 112);
    m_pChild = this->m_pChild;
    children.m_Size = 0;
    children.m_Memory.m_nAllocationCount = 32;
    children.m_Memory.m_nGrowSize = 0x80000000;
    children.m_Memory.m_pMemory = &children.m_Memory.m_FixedMemory;
    if ( m_pChild != 0 )
    {
      while ( 1 )
      {
        if ( m_pChild->m_nHierarchyType == 3 )
          goto LABEL_55;
        v25 = m_pChild->m_pOwner->m_pEntity;
        if ( (v25->m_flags & 0x800) != 0 )
        {
          v26 = (v25->m_flags & 0x40) != 0;
        }
        else
        {
          if ( v25->m_EHandle.m_Index == -1 )
            goto LABEL_61;
          v26 = (v25->m_EHandle.m_Index & 0x7FFF) <= 0x3FFF;
        }
        if ( v26 )
        {
          *(m_pChild + 248) |= 1u;
          CBodyGameSystem::QueueExtraPostDataUpdateCallIfNecessary(g_pBodyGameSystem, m_pChild);
LABEL_55:
          m_pChild = m_pChild->m_pNextSibling;
          if ( m_pChild == 0 )
            goto LABEL_65;
        }
        else
        {
LABEL_61:
          m_Size = children.m_Size;
          v28 = children.m_Size;
          if ( children.m_Size == children.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CGameSceneNode *,int>::Grow(&children.m_Memory, 1);
            v28 = children.m_Size;
          }
          children.m_Size = v28 + 1;
          v29 = &children.m_Memory.m_pMemory[m_Size];
          if ( v29 == 0 )
            goto LABEL_55;
          *v29 = m_pChild;
          m_pChild = m_pChild->m_pNextSibling;
          if ( m_pChild == 0 )
          {
LABEL_65:
            if ( children.m_Size > 0 )
            {
              v30 = 0;
              v31 = 8LL * (children.m_Size - 1) + 8;
              do
              {
                v32 = &children.m_Memory.m_pMemory[v30 / 8];
                children.m_Memory.m_pMemory[v30 / 8]->m_bDirtyAbsTransform.m_value = 0;
                (*((*v32)->_vptr_CGameSceneNode + 16))(*v32, 1);
                v30 += 8LL;
              }
              while ( v30 != v31 );
            }
            break;
          }
        }
      }
    }
    children.m_Size = 0;
    if ( children.m_Memory.m_nAllocationCount < 0 )
    {
      v33 = children.m_Memory.m_nGrowSize & 0xC0000000;
    }
    else
    {
      v33 = children.m_Memory.m_nGrowSize & 0xC0000000;
      if ( children.m_Memory.m_pMemory != &children.m_Memory.m_FixedMemory )
      {
        if ( children.m_Memory.m_pMemory != 0 && v33 == 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        goto LABEL_73;
      }
    }
    if ( v33 == 0 )
      CUtlMemory<CGameSceneNode *,int>::Purge(&children.m_Memory);
LABEL_73:
    if ( type != DataUpdateType_t::DATA_UPDATE_CREATED )
      goto LABEL_27;
    goto LABEL_74;
  }
  if ( type == DataUpdateType_t::DATA_UPDATE_CREATED )
  {
    (*(this->_vptr_CGameSceneNode + 11))(this, 112);
LABEL_74:
    if ( this->m_pController != 0 )
    {
      v34 = animationSetupWork->m_Size;
      v35 = animationSetupWork->m_Size;
      if ( v34 == animationSetupWork->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CSkeletonAnimationController *,int>::Grow(&animationSetupWork->m_Memory, 1);
        v35 = animationSetupWork->m_Size;
      }
      animationSetupWork->m_Size = v35 + 1;
      v36 = &animationSetupWork->m_Memory.m_pMemory[v34];
      if ( v36 != 0 )
        *v36 = this->m_pController;
    }
  }
LABEL_27:
  v12 = *(this + 722);
  if ( (v12 & 2) != 0 )
  {
    *(this + 722) = v12 & 0xFD;
    CModelState::UpdateMotionTypeOfAggregate(&this->m_modelState, 0);
    v13 = this->m_pChild;
    if ( v13 != 0 )
    {
      while ( 1 )
      {
        v14 = (*(v13->_vptr_CGameSceneNode + 9))(v13);
        if ( v14 == 0 )
          goto LABEL_31;
        v15 = *(*(v14 + 64) + 8LL);
        if ( (*(v15 + 48) & 0x800) != 0 )
          break;
        if ( *(v15 + 16) == -1 )
        {
LABEL_37:
          CModelState::UpdateMotionTypeOfAggregate((v14 + 320), 1);
          v13 = v13->m_pNextSibling;
          if ( v13 == 0 )
            goto LABEL_38;
        }
        else
        {
          v16 = (*(v15 + 16) & 0x7FFFu) <= 0x3FFF;
LABEL_36:
          if ( !v16 )
            goto LABEL_37;
          *(v14 + 722) |= 2u;
          CBodyGameSystem::QueueExtraPostDataUpdateCallIfNecessary(g_pBodyGameSystem, v13);
LABEL_31:
          v13 = v13->m_pNextSibling;
          if ( v13 == 0 )
            goto LABEL_38;
        }
      }
      v16 = (*(v15 + 48) & 0x40) != 0;
      goto LABEL_36;
    }
  }
LABEL_38:
  CModelState::~CModelState(&oldModelState);
}


// CSkeletonInstance::OnRestore  (line 1476, @0x00000000020de450, libserver.so)  // inlines: AddToTail, CopyConstruct<CSkeletonAnimationController*>, Element, GrowMemory, operator[]
// calls: CGameSceneNode::OnRestore, CModelState::UpdateMotionTypeOfAggregate, CSkeletonInstance::DirtyHierarchyBoneFlags, CUtlMemory<CSkeletonAnimationController*, int>::Grow
void __fastcall CSkeletonInstance::OnRestore(
        CSkeletonInstance *const this,
        CUtlVector<CSkeletonAnimationController*,CUtlMemory<CSkeletonAnimationController*,int> > *const animationSetupWork)
{
  __int64 m_Size; // r13
  int v5; // eax
  CSkeletonAnimationController **v6; // rax

  CGameSceneNode::OnRestore(this, animationSetupWork);
  if ( this->m_pController != 0 )
  {
    m_Size = animationSetupWork->m_Size;
    v5 = animationSetupWork->m_Size;
    if ( m_Size == animationSetupWork->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CSkeletonAnimationController *,int>::Grow(&animationSetupWork->m_Memory, 1);
      v5 = animationSetupWork->m_Size;
    }
    animationSetupWork->m_Size = v5 + 1;
    v6 = &animationSetupWork->m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      *v6 = this->m_pController;
  }
  CModelState::UpdateMotionTypeOfAggregate(&this->m_modelState, 1);
  CSkeletonInstance::DirtyHierarchyBoneFlags(this);
  (*(this->_vptr_CGameSceneNode + 11))(this, 1152);
}


// CSkeletonInstance::Activate  (line 1494, @0x00000000020d0f20, libserver.so)  // inlines: CWeakHandle, CalcAbsolutePosition, FromUntypedHandleUnchecked, GetBool, GetInt, GetOwnerEntity, InitUntypedUnchecked, Load, NodeToWorldTransform, StaticInvalidHandle, operator CWeakHandle<InfoForResourceTypeCModel>, operator!=, operator!=<CWeakHandle<InfoForResourceTypeCModel> >
// calls: CModelState::SetupModel, CModelState::UpdateModelCachedValues, CModelState::SetupJointState, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CSkeletonInstance::Activate(
        CSkeletonInstance *const this,
        CEntityInstance *pEntity,
        ActivateType_t activateType)
{
  int m_nValue; // eax
  CSkeletonAnimationController *v7; // rdi
  const ResourceBindingBase_t *m_pBinding; // rdx
  CSkeletonAnimationController *m_pController; // rdi
  CEntityInstance *m_pOwner; // rdi
  int (**vptr_IHandleEntity)(...); // rax
  int (*v12)(...); // rax
  __int64 v13; // [rsp+0h] [rbp-40h] BYREF
  const ResourceBindingBase_t *v14; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
  CModelState::SetupModel(&this->m_modelState, 0, this, &this->m_mNodeToWorld);
  CModelState::UpdateModelCachedValues(&this->m_modelState);
  CModelState::SetupJointState(&this->m_modelState);
  m_nValue = test_restoreonnewmodel.m_pParent->m_Value.m_nValue;
  if ( m_nValue != 0 || activateType <= ActivateType_t::ACTIVATE_TYPE_DATAUPDATE_CREATION )
  {
    m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
    {
      m_pController = this->m_pController;
      if ( m_pController != 0 && m_nValue != 2 )
        (*(m_pController->_vptr_CSkeletonAnimationController + 17))(m_pController, 0, m_pBinding->m_pData);
      m_pOwner = this->m_pOwner;
      if ( m_pOwner[11]._vptr_IHandleEntity != 0 )
      {
        vptr_IHandleEntity = m_pOwner->_vptr_IHandleEntity;
        v13 = 0;
        v12 = vptr_IHandleEntity[39];
        v14 = this->m_modelState.m_hModel.m_Value.m_pBinding;
        v12(m_pOwner, &v13, &v14);
      }
    }
  }
  v7 = this->m_pController;
  if ( v7 != 0 )
    (*(v7->_vptr_CSkeletonAnimationController + 7))(v7, pEntity, activateType);
}


// CSkeletonInstance::UpdateOnRemove  (line 1554, @0x00000000020cb120, libserver.so)  // inlines: CleanupModel, DestroySetModelAsyncRequest
// calls: CGameSceneNode::UpdateOnRemove, CModelState::CleanupPhysics
void __fastcall CSkeletonInstance::UpdateOnRemove(CSkeletonInstance *const this, CEntityInstance *pEntity)
{
  CSkeletonAnimationController *m_pController; // rdi

  CGameSceneNode::UpdateOnRemove(this, pEntity);
  if ( this->m_hCurrentlyAsyncLoadingModel != 0 )
  {
    (*(*g_pGameResourceService + 248LL))(g_pGameResourceService);
    this->m_hCurrentlyAsyncLoadingModel = 0;
  }
  CModelState::CleanupPhysics(&this->m_modelState, this);
  m_pController = this->m_pController;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_CSkeletonAnimationController + 8))(m_pController, pEntity);
}


// CModelState::GetBoneComputationMutex  (line 1571, @0x00000000020b8370, libserver.so)
CThreadFastMutex *__fastcall CModelState::GetBoneComputationMutex(const CModelState *const this)
{
  return (this - 56);
}


// CModelState::SetScale  (line 1576, @0x00000000020d0cf0, libserver.so)  // inlines: GetBool, GetInt
// calls: CModelState::CleanupPhysics, CModelState::DoSetupPhysics
// callers: CSkeletonInstance::UpdatePhysicsScale
void __fastcall CModelState::SetScale(CModelState *const this, CSkeletonInstance *pInstance, double a3, float flScale)
{
  double v4; // xmm1_8
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  HPhysicsSoftbody m_hCloth2; // rdi
  double v9; // xmm0_8
  unsigned int flScaleb; // [rsp+Ch] [rbp-14h]
  float flScalea; // [rsp+Ch] [rbp-14h]

  v4 = a3;
  m_pVPhysicsAggregate = pInstance->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    if ( phys_dynamic_scaling.m_pParent->m_Value.m_nValue != 0 )
    {
      flScaleb = LODWORD(a3);
      (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 78))(m_pVPhysicsAggregate);
      *&v4 = flScaleb;
    }
    else
    {
      flScalea = *&a3;
      v9 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 63))(m_pVPhysicsAggregate, a3, a3);
      *&v4 = LODWORD(flScalea);
      if ( fabs(*&v9 - flScalea) > 0.001 )
      {
        CModelState::CleanupPhysics(this, pInstance);
        CModelState::DoSetupPhysics(this, pInstance);
        *&v4 = LODWORD(flScalea);
      }
    }
  }
  m_hCloth2 = this->m_hCloth2;
  if ( m_hCloth2 != 0 )
    (*(*m_hCloth2 + 32LL))(m_hCloth2, v4);
  this->m_nClothUpdateFlags &= ~4u;
}


// CSkeletonInstance::SetClothFrozen  (line 1611, @0x00000000020b8380, libserver.so)
void __fastcall CSkeletonInstance::SetClothFrozen(CSkeletonInstance *const this, bool bFrozen)
{
  HPhysicsSoftbody m_hCloth2; // rdi

  m_hCloth2 = this->m_modelState.m_hCloth2;
  if ( m_hCloth2 != 0 )
    (*(*m_hCloth2 + 824LL))(m_hCloth2, bFrozen);
}


// CSkeletonInstance::SetClothFrozenInLocalSpace  (line 1620, @0x00000000020b83b0, libserver.so)
void __fastcall CSkeletonInstance::SetClothFrozenInLocalSpace(CSkeletonInstance *const this, bool bFrozen)
{
  HPhysicsSoftbody m_hCloth2; // rdi

  m_hCloth2 = this->m_modelState.m_hCloth2;
  if ( m_hCloth2 != 0 )
    (*(*m_hCloth2 + 840LL))(m_hCloth2, bFrozen);
}


// CSkeletonInstance::SetClothDisabled  (line 1629, @0x00000000020b83e0, libserver.so)
void __fastcall CSkeletonInstance::SetClothDisabled(CSkeletonInstance *const this, bool bDisabled)
{
  HPhysicsSoftbody m_hCloth2; // rdi

  m_hCloth2 = this->m_modelState.m_hCloth2;
  if ( m_hCloth2 != 0 )
    (*(*m_hCloth2 + 632LL))(m_hCloth2, bDisabled);
}


// CSkeletonInstance::FlushClothUpdates  (line 1640, @0x00000000020b8410, libserver.so)
// callers: CPhysicsGameSystem::FlushClothUpdates, CPhysicsGameSystem::PullSoftbodyTransforms
void __fastcall CSkeletonInstance::FlushClothUpdates(
        CSkeletonInstance *const this,
        HPhysicsSoftbody hCloth,
        bool bTeleport)
{
  ;
}


// CModelState::SetupRendering  (line 1691, @0x00000000020b8420, libserver.so)
void __fastcall CModelState::SetupRendering(
        CModelState *const this,
        CSkeletonInstance *pInstance,
        const matrix3x4a_t *const rootToWorld,
        SceneObjectUpdaterHandle_t hOldUpdater)
{
  ;
}


// CModelState::ComputeBoneFlagsAssociatedWithCloth  (line 1800, @0x00000000020b84c0, libserver.so)
// calls: CModelState::ComputeBoneFlagsAssociatedWithCloth
// callers: CModelState::ExtendBoneFlags
void __fastcall CModelState::ComputeBoneFlagsAssociatedWithCloth(CModelState *const this)
{
  HPhysicsSoftbody m_hCloth2; // rdi
  const CFeModel *v3; // rax

  m_hCloth2 = this->m_hCloth2;
  if ( m_hCloth2 != 0 )
  {
    v3 = (*(*m_hCloth2 + 64LL))(m_hCloth2);
    CModelState::ComputeBoneFlagsAssociatedWithCloth(this, v3);
  }
}


// CModelState::ComputeBoneFlagsAssociatedWithCloth  (line 1810, @0x00000000020b8430, libserver.so)  // inlines: GetClothParticleToSkeletonBoneIndex, operator|, operator|=
// callers: CModelState::ComputeBoneFlagsAssociatedWithCloth, CModelState::ConstructClothBoneMap
void __fastcall CModelState::ComputeBoneFlagsAssociatedWithCloth(CModelState *const this, const CFeModel *pFeModel)
{
  CModelSkeleton::BoneFlags_t *m_pBoneFlagsIncludingChildren; // r10
  uint16 *m_pNodeToCtrl; // r9
  CModelSkeleton::BoneFlags_t v4; // ecx
  __int16 *v5; // r8
  unsigned int m_nRotLockStaticNodes; // eax
  unsigned int m_nNodeCount; // esi
  __int64 v8; // rdx
  __int64 v9; // rdx

  m_pBoneFlagsIncludingChildren = this->m_pBoneFlagsIncludingChildren;
  if ( m_pBoneFlagsIncludingChildren != 0 )
  {
    m_pNodeToCtrl = pFeModel->m_pNodeToCtrl;
    v4 = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
    v5 = &this->m_ClothSimBoneMap.m_Memory.m_pMemory[this->m_nTotalBoneCount];
    m_nRotLockStaticNodes = pFeModel->m_nRotLockStaticNodes;
    m_nNodeCount = pFeModel->m_nNodeCount;
    if ( m_pNodeToCtrl != 0 )
    {
      for ( ; m_nRotLockStaticNodes < m_nNodeCount; ++m_nRotLockStaticNodes )
      {
        v8 = v5[m_pNodeToCtrl[m_nRotLockStaticNodes]];
        if ( (v8 & 0x8000u) == 0LL )
          v4 |= m_pBoneFlagsIncludingChildren[v8];
      }
      this->m_nBoneFlagsAssociatedWithCloth = v4;
    }
    else
    {
      while ( m_nRotLockStaticNodes < m_nNodeCount )
      {
        v9 = v5[m_nRotLockStaticNodes];
        if ( (v9 & 0x8000u) == 0LL )
          v4 |= m_pBoneFlagsIncludingChildren[v9];
        ++m_nRotLockStaticNodes;
      }
      this->m_nBoneFlagsAssociatedWithCloth = v4;
    }
  }
}


// CModelState::ConstructClothBoneMap  (line 1846, @0x00000000020d04f0, libserver.so)  // inlines: FillWithValue, Purge, RememberAllocSize, RemoveAll, operator const RuntimeClass_t*, operator[]
// calls: CUtlVectorBase<short int, CUtlMemoryConservative<short int> >::SetCount, CModel::FindBoneIndexByHash, CModelState::ComputeBoneFlagsAssociatedWithCloth
// callers: CModelState::OnClothReloaded, CModelState::ConstructPhysicsBoneMap
void __fastcall CModelState::ConstructClothBoneMap(CModelState *const this, const CFeModel *pFeModel)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r14
  int m_nCtrlCount; // r13d
  __int64 v7; // rdx
  int i; // eax
  __int64 v9; // rbx
  int BoneIndexByHash; // eax

  if ( pFeModel != 0 )
  {
    m_pBinding = this->m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      m_pData = m_pBinding->m_pData;
    else
      m_pData = 0;
    m_nCtrlCount = pFeModel->m_nCtrlCount;
    CUtlVectorBase<short,CUtlMemoryConservative<short>>::SetCount(
      &this->m_ClothSimBoneMap,
      m_nCtrlCount + this->m_nTotalBoneCount);
    v7 = 0;
    for ( i = 0; i < this->m_ClothSimBoneMap.m_Size; ++v7 )
    {
      ++i;
      this->m_ClothSimBoneMap.m_Memory.m_pMemory[v7] = -1;
    }
    v9 = 0;
    if ( m_nCtrlCount != 0 )
    {
      do
      {
        BoneIndexByHash = CModel::FindBoneIndexByHash(m_pData, pFeModel->m_pCtrlHash[v9]);
        this->m_ClothSimBoneMap.m_Memory.m_pMemory[v9 + this->m_nTotalBoneCount] = BoneIndexByHash;
        if ( BoneIndexByHash >= 0 )
          this->m_ClothSimBoneMap.m_Memory.m_pMemory[BoneIndexByHash] = v9;
        ++v9;
      }
      while ( m_nCtrlCount > v9 );
    }
    CModelState::ComputeBoneFlagsAssociatedWithCloth(this, pFeModel);
  }
  else
  {
    this->m_nBoneFlagsAssociatedWithCloth = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
    this->m_ClothSimBoneMap.m_Size = 0;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_ClothSimBoneMap.m_Memory.m_pMemory);
    this->m_ClothSimBoneMap.m_Memory.m_nCurAllocSize = 0;
    this->m_ClothSimBoneMap.m_Memory.m_pMemory = 0;
  }
}


// CModelState::ConstructPhysicsBoneMap  (line 1879, @0x00000000020d0690, libserver.so)  // inlines: FillWithValue, GetBoneHash, operator const RuntimeClass_t*, operator[]
// calls: CModelState::DestructPhysicsBoneMap, CModelState::ConstructClothBoneMap, CUtlVectorBase<short int, CUtlMemoryConservative<short int> >::SetCount, CModel::FindBoneIndexByHash
// callers: CModelState::SetupPhysics, CSkeletonInstance::RecomputePhysicsBoneMap
void __fastcall CModelState::ConstructPhysicsBoneMap(CModelState *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  const CModel *m_pData; // r13
  __int64 v5; // rax
  const CFeModel *v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int16 *m_pMemory; // rsi
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // r12d
  int BoneIndexByHash; // eax
  HPhysicsSoftbody m_hCloth2; // rdi
  __int16 *v15; // [rsp+8h] [rbp-38h]

  CModelState::DestructPhysicsBoneMap(this);
  m_pBinding = this->m_hModel.m_Value.m_pBinding;
  m_pVPhysicsAggregate = this->m_pVPhysicsAggregate;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  if ( m_pVPhysicsAggregate != 0 )
  {
    v5 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
    v6 = *(v5 + 144);
    v7 = v5;
    v8 = *(v5 + 32);
    this->m_nPhysBoneCount = v8;
    if ( v8 == 0 )
      goto LABEL_5;
    CUtlVectorBase<short,CUtlMemoryConservative<short>>::SetCount(
      &this->m_SkeletonBoneToPhysicsBone,
      v8 + this->m_nTotalBoneCount);
    m_pMemory = this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory;
    v10 = 0;
    v11 = 0;
    v15 = &m_pMemory[this->m_nTotalBoneCount];
    if ( this->m_SkeletonBoneToPhysicsBone.m_Size > 0 )
    {
      while ( 1 )
      {
        ++v11;
        m_pMemory[v10++] = -1;
        if ( v11 >= this->m_SkeletonBoneToPhysicsBone.m_Size )
          break;
        m_pMemory = this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory;
      }
      v12 = 0;
      if ( this->m_nPhysBoneCount == 0 )
        goto LABEL_5;
    }
    else
    {
      v12 = 0;
      if ( this->m_nPhysBoneCount == 0 )
        goto LABEL_5;
    }
    do
    {
      BoneIndexByHash = CModel::FindBoneIndexByHash(m_pData, *(*(v7 + 24) + 4LL * v12));
      v15[v12] = BoneIndexByHash;
      if ( BoneIndexByHash >= 0 )
        this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory[BoneIndexByHash] = v12;
      ++v12;
    }
    while ( this->m_nPhysBoneCount > v12 );
LABEL_5:
    if ( v6 != 0 )
      goto LABEL_6;
  }
  m_hCloth2 = this->m_hCloth2;
  v6 = 0;
  if ( m_hCloth2 != 0 )
    v6 = (*(*m_hCloth2 + 64LL))(m_hCloth2);
LABEL_6:
  CModelState::ConstructClothBoneMap(this, v6);
}


// CModelState::DestructPhysicsBoneMap  (line 1930, @0x00000000020b8500, libserver.so)  // inlines: Purge, RememberAllocSize, RemoveAll
// callers: CModelState::CleanupPhysics, CModelState::ConstructPhysicsBoneMap, CSkeletonInstance::~CSkeletonInstance
void __fastcall CModelState::DestructPhysicsBoneMap(CModelState *const this)
{
  _QWORD *v2; // rdi
  __int16 *m_pMemory; // rsi

  this->m_SkeletonBoneToPhysicsBone.m_Size = 0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory);
  v2 = g_pMemAlloc;
  this->m_SkeletonBoneToPhysicsBone.m_Memory.m_nCurAllocSize = 0;
  this->m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory = 0;
  m_pMemory = this->m_ClothSimBoneMap.m_Memory.m_pMemory;
  this->m_ClothSimBoneMap.m_Size = 0;
  (*(*v2 + 16LL))(v2, m_pMemory);
  this->m_ClothSimBoneMap.m_Memory.m_nCurAllocSize = 0;
  this->m_ClothSimBoneMap.m_Memory.m_pMemory = 0;
  this->m_nPhysBoneCount = 0;
}


// CModelState::CleanupRendering  (line 1937, @0x00000000020b8590, libserver.so)
void __fastcall CModelState::CleanupRendering(CModelState *const this, CSkeletonInstance *pInstance)
{
  ;
}


// CModelState::SetupPhysics  (line 1963, @0x00000000020d08f0, libserver.so)  // inlines: HasPhysics, SetupPhysics, operator!=
// calls: CModel::HasCollision, CModelState::SetupPhysics
// callers: CModelState::DoSetupPhysics, CModelState::SetupModel
void __fastcall CModelState::SetupPhysics(CModelState *const this, CSkeletonInstance *pInstance, SolidType_t nSolid)
{
  MeshGroupMask_t m_Value; // rax
  const CModel *const *m_pBinding; // rax
  bool HasCollision; // al
  SolidType_t v7; // [rsp-24h] [rbp-24h]
  CSkeletonInstance *v8; // [rsp-20h] [rbp-20h]

  if ( !pInstance->m_bDormant )
  {
    if ( (nSolid - 2) <= 1u || nSolid == SolidType_t::SOLID_CAPSULE )
    {
      m_Value = this->m_MeshGroupMask.m_Value;
LABEL_4:
      if ( this->m_pVPhysicsAggregate == 0 )
        CModelState::SetupPhysics(this, m_Value, pInstance, nSolid, 0);
      return;
    }
    m_pBinding = pInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    v7 = nSolid;
    v8 = pInstance;
    if ( m_pBinding != 0 )
    {
      HasCollision = CModel::HasCollision(*m_pBinding);
      pInstance = v8;
      nSolid = v7;
      if ( HasCollision )
      {
        m_Value = this->m_MeshGroupMask.m_Value;
        if ( !v8->m_bDormant )
          goto LABEL_4;
      }
    }
  }
}


// CModelState::SetupPhysics  (line 1975, @0x00000000020d0810, libserver.so)  // inlines: GetMotionType
// calls: CModelState::UpdateModelCachedValues, Physics_CreateAggregate, CPhysicsGameSystem::NotifyAggregateInitialized, CModelState::ConstructPhysicsBoneMap, CModelState::UpdateMotionTypeOfAggregate
// callers: CModelState::SetupPhysics, CSkeletonInstance::SetupPhysics
void __fastcall CModelState::SetupPhysics(
        CModelState *const this,
        MeshGroupMask_t nMeshGroupMask,
        CSkeletonInstance *pInstance,
        SolidType_t nSolid,
        CPhysAggregateData *pPhysModel)
{
  IPhysAggregateInstance *Aggregate; // rax

  CModelState::UpdateModelCachedValues(this);
  Aggregate = Physics_CreateAggregate(pInstance, nMeshGroupMask, this->m_nIdealMotionType.m_Value, pPhysModel);
  this->m_pVPhysicsAggregate = Aggregate;
  if ( Aggregate != 0 )
  {
    Aggregate->m_bIsAxisAligned = nSolid == SolidType_t::SOLID_BBOX || nSolid == SolidType_t::SOLID_CAPSULE;
    CPhysicsGameSystem::NotifyAggregateInitialized(g_pPhysicsGameSystem, pInstance, this->m_pVPhysicsAggregate);
    CModelState::ConstructPhysicsBoneMap(this);
    CModelState::UpdateMotionTypeOfAggregate(this, 1);
  }
}


// CModelState::SetupPhysics  (line 1975, @0x00000000020d08c0, libserver.so)
// calls: CModelState::SetupPhysics
void __fastcall CModelState::SetupPhysics(
        CModelState *const this,
        MeshGroupMask_t nMeshGroupMask,
        CSkeletonInstance *pInstance,
        SolidType_t nSolid,
        CPhysAggregateData *pPhysModel)
{
  if ( !pInstance->m_bDormant && this->m_pVPhysicsAggregate == 0 )
    CModelState::SetupPhysics(this, nMeshGroupMask, pInstance, nSolid, pPhysModel);
}


// CModelState::ComputeActualMotionType  (line 2014, @0x00000000020b85a0, libserver.so)  // inlines: GetMotionType, GetParentSkeletonInstance
// callers: CModelState::UpdateMotionTypeOfAggregate
VPhysicsMotionType_t __fastcall CModelState::ComputeActualMotionType(const CModelState *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  VPhysicsMotionType_t result; // eax

  v2 = *(this - 31);
  if ( v2 == 0 )
    return this->m_nIdealMotionType.m_Value;
  v3 = (*(*v2 + 72LL))(v2);
  if ( v3 == 0 )
    return this->m_nIdealMotionType.m_Value;
  if ( *(v3 + 536) == 0 )
    return VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED;
  result = CModelState::ComputeActualMotionType((v3 + 320));
  if ( result != VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC || *(this - 69) != 3 )
    return VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED;
  return result;
}


// CModelState::UpdateMotionTypeOfAggregate  (line 2053, @0x00000000020b8610, libserver.so)
// calls: CModelState::ComputeActualMotionType, CPhysicsGameSystem::CreateHierarchyConstraint, CPhysicsGameSystem::MarkChanged, CPhysicsGameSystem::DestroyHierarchyConstraint
// callers: CModelState::SetMotionType, CSkeletonInstance::OnHierarchyChanged, CModelState::SetupPhysics, CSkeletonInstance::PostDataUpdate, CSkeletonInstance::OnRestore
void __fastcall CModelState::UpdateMotionTypeOfAggregate(CModelState *const this, bool bRecursive)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // r14
  VPhysicsMotionType_t v5; // eax
  CSkeletonInstance *v6; // r13
  _QWORD *i; // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  m_pVPhysicsAggregate = this->m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    v5 = CModelState::ComputeActualMotionType(this);
    if ( v5 == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED )
    {
      v6 = (this - 320);
      CPhysicsGameSystem::DestroyHierarchyConstraint(g_pPhysicsGameSystem, (this - 320));
      (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 24))(m_pVPhysicsAggregate, 3);
    }
    else if ( v5 == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED )
    {
      v6 = (this - 320);
      CPhysicsGameSystem::DestroyHierarchyConstraint(g_pPhysicsGameSystem, (this - 320));
      (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 24))(m_pVPhysicsAggregate, 2);
    }
    else if ( ((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 24))(m_pVPhysicsAggregate, 1) & 0xFFFFFFFB) == 0
           || (v9 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 17))(m_pVPhysicsAggregate, 0),
               (*(*v9 + 40LL))(v9) == 2) )
    {
      v6 = (this - 320);
      CPhysicsGameSystem::CreateHierarchyConstraint(g_pPhysicsGameSystem, (this - 320));
    }
    else
    {
      v6 = (this - 320);
      CPhysicsGameSystem::DestroyHierarchyConstraint(g_pPhysicsGameSystem, (this - 320));
    }
    if ( bRecursive )
    {
      for ( i = *(this - 30); i != 0; i = i[11] )
      {
        v8 = (*(*i + 72LL))(i);
        if ( v8 != 0 )
          CModelState::UpdateMotionTypeOfAggregate((v8 + 320), 1);
      }
    }
    CPhysicsGameSystem::MarkChanged(g_pPhysicsGameSystem, v6);
  }
}


// CModelState::SetMotionType  (line 2108, @0x00000000020b8790, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<VPhysicsMotionType_t>
// calls: CModelState::UpdateMotionTypeOfAggregate
// callers: CBodyComponent::SetMotionType, CBaseEntity::PhysicsEnableMotion
void __fastcall CModelState::SetMotionType(CModelState *const this, VPhysicsMotionType_t nMotionType)
{
  char v2; // r12
  char m_Value; // al

  v2 = nMotionType;
  m_Value = this->m_nIdealMotionType.m_Value;
  if ( nMotionType != m_Value )
  {
    if ( m_Value != nMotionType )
    {
      (*(this->_vptr_CModelState + 2))(this, 384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nIdealMotionType.m_Value = v2;
    }
    CModelState::UpdateMotionTypeOfAggregate(this, 1);
  }
}


// CModelState::IsEntityNetworkable  (line 2118, @0x00000000020b87f0, libserver.so)  // inlines: GetEHandle, GetEntryIndex
bool __fastcall CModelState::IsEntityNetworkable(CModelState *const this)
{
  __int64 v1; // rax

  v1 = *(*(this - 32) + 8LL);
  return v1 != 0 && *(v1 + 16) != -1 && (*(v1 + 16) & 0x7FFFu) <= 0x3FFF;
}


// CModelState::CleanupPhysics  (line 2125, @0x00000000020b8830, libserver.so)
// calls: CPhysicsGameSystem::NotifyAggregateShutdown, CBaseEntity::VPhysicsWorld, CModelState::DestructPhysicsBoneMap
// callers: CModelState::CleanupModel, CSkeletonInstance::CleanupPhysics, CSkeletonInstance::UpdateOnRemove, CModelState::SetScale, CSkeletonInstance::OnSetDormant, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate, CModelState::OnMeshGroupMaskChanged
void __fastcall CModelState::CleanupPhysics(CModelState *const this, CSkeletonInstance *pInstance)
{
  IVPhysics2World *v4; // rax

  if ( this->m_pVPhysicsAggregate != 0 )
  {
    CPhysicsGameSystem::NotifyAggregateShutdown(g_pPhysicsGameSystem, pInstance);
    v4 = CBaseEntity::VPhysicsWorld(pInstance->m_pOwner);
    (*(*v4 + 136LL))(v4, this->m_pVPhysicsAggregate);
    this->m_pVPhysicsAggregate = 0;
    CModelState::DestructPhysicsBoneMap(this);
  }
}


// CModelState::CopyStateTo  (line 2136, @0x00000000020d32d0, libserver.so)  // inlines: CStrongHandle, GetHandle, Init, NetworkStateChanged, Set, SetModel, ThreadInterlockedIncrement, TransferStateTo, operator++, operator=, operator=<CWeakHandle<InfoForResourceTypeCModel> >, ~CStrongHandle
// calls: CAnimationState::TransferStateTo, CCompositeParentSpaceState::TransferStateTo, CStrongHandle<InfoForResourceTypeCModel>::Init, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CModelState::UpdateModelCachedValues, _Unwind_Resume
// callers: CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
void __fastcall CModelState::CopyStateTo(
        CModelState *const this,
        CSkeletonInstance *pInstance,
        CModelState *const state)
{
  int m_nTotalTransformCount; // eax
  const ResourceBinding_t<InfoForResourceTypeCModel> *m_pBinding; // rsi
  const ResourceBindingBase_t *v7; // rsi
  bool v8; // zf
  CStrongHandle<InfoForResourceTypeCModel> v9; // [rsp+0h] [rbp-30h] BYREF

  CAnimationState::TransferStateTo(&this->m_animationState, &state->m_animationState);
  CCompositeParentSpaceState::TransferStateTo(&this->m_compositeParentSpaceState, &state->m_compositeParentSpaceState);
  m_nTotalTransformCount = this->m_simulationState.m_nTotalTransformCount;
  v9.m_pBinding = 0;
  state->m_simulationState.m_nTotalTransformCount = m_nTotalTransformCount;
  state->m_simulationState.m_nBoneCount = this->m_simulationState.m_nBoneCount;
  state->m_simulationState.m_nAttachmentCount = this->m_simulationState.m_nAttachmentCount;
  state->m_simulationState.m_pTransforms = this->m_simulationState.m_pTransforms;
  state->m_simulationState.m_pReadableBones = this->m_simulationState.m_pReadableBones;
  m_pBinding = this->m_hModel.m_Value.m_pBinding;
  this->m_simulationState.m_nTotalTransformCount = 0;
  this->m_simulationState.m_nBoneCount = 0;
  this->m_simulationState.m_nAttachmentCount = 0;
  this->m_simulationState.m_pTransforms = 0;
  this->m_simulationState.m_pReadableBones = 0;
  CStrongHandle<InfoForResourceTypeCModel>::Init(&v9, m_pBinding);
  if ( state->m_hModel.m_Value.m_pBinding != v9.m_pBinding )
  {
    (*(state->_vptr_CModelState + 2))(state, 160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( state->m_hModel.m_Value.m_pBinding != 0 )
      CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&state->m_hModel.m_Value);
    v7 = v9.m_pBinding;
    v8 = v9.m_pBinding == 0;
    state->m_hModel.m_Value = v9;
    if ( !v8 )
    {
      if ( (v7->m_nFlags & 0x20) != 0 )
      {
        (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v7, 2, &state->m_hModel);
        v7 = state->m_hModel.m_Value.m_pBinding;
      }
      _InterlockedAdd(&v7->m_nRefCount.m_value, 1u);
    }
  }
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&v9);
  CModelState::UpdateModelCachedValues(state);
  state->m_hSceneObjectUpdater = this->m_hSceneObjectUpdater;
  state->m_pVPhysicsAggregate = this->m_pVPhysicsAggregate;
  if ( state->m_MeshGroupMask.m_Value != this->m_MeshGroupMask.m_Value )
  {
    (*(state->_vptr_CModelState + 2))(state, 320, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    state->m_MeshGroupMask.m_Value = this->m_MeshGroupMask.m_Value;
  }
  if ( state->m_nIdealMotionType.m_Value != this->m_nIdealMotionType.m_Value )
  {
    (*(state->_vptr_CModelState + 2))(state, 384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    state->m_nIdealMotionType.m_Value = this->m_nIdealMotionType.m_Value;
  }
  state->m_nForceLOD = this->m_nForceLOD;
  state->m_hCloth2 = this->m_hCloth2;
  state->m_nClothUpdateFlags = this->m_nClothUpdateFlags;
  this->m_hSceneObjectUpdater = 0;
  this->m_pVPhysicsAggregate = 0;
  this->m_hCloth2 = 0;
  this->m_nClothUpdateFlags = 0;
}


// CModelState::GetRenderBounds  (line 2164, @0x00000000020b88a0, libserver.so)  // inlines: VectorMax, VectorMin, fpmax, fpmin, operator const RuntimeClass_t*, operator=
// calls: CModel::GetNumMeshes, CModel::GetMeshData
// callers: CSkeletonInstance::GetRenderBounds, CSkeletonInstance::GetRenderBoundsWorldSpace
void __fastcall CModelState::GetRenderBounds(const CModelState *const this, Vector *pMins, Vector *pMaxs)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  const CModel *const *m_pBinding; // rax
  const CModel *v8; // r14
  const CRenderMesh *MeshData; // rax
  int v10; // r13d
  const CRenderMesh *v11; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm2_4

  x = vec3_origin.x;
  pMaxs->y = vec3_origin.y;
  z = vec3_origin.z;
  pMaxs->x = x;
  pMaxs->z = z;
  pMins->x = x;
  pMins->y = pMaxs->y;
  pMins->z = pMaxs->z;
  m_pBinding = this->m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    v8 = *m_pBinding;
    if ( *m_pBinding != 0 && CModel::GetNumMeshes(*m_pBinding) != 0 )
    {
      MeshData = CModel::GetMeshData(v8, 0);
      if ( MeshData != 0 )
      {
        v10 = 1;
        pMins->x = MeshData->m_vMinBounds.x;
        pMins->y = MeshData->m_vMinBounds.y;
        pMins->z = MeshData->m_vMinBounds.z;
        pMaxs->x = MeshData->m_vMaxBounds.x;
        pMaxs->y = MeshData->m_vMaxBounds.y;
        pMaxs->z = MeshData->m_vMaxBounds.z;
        while ( v10 < CModel::GetNumMeshes(v8) )
        {
          v11 = CModel::GetMeshData(v8, v10);
          if ( v11 != 0 )
          {
            v12 = fminf(pMins->y, v11->m_vMinBounds.y);
            v13 = fminf(pMins->x, v11->m_vMinBounds.x);
            pMins->z = fminf(pMins->z, v11->m_vMinBounds.z);
            pMins->y = v12;
            pMins->x = v13;
            v14 = fmaxf(pMaxs->y, v11->m_vMaxBounds.y);
            v15 = fmaxf(pMaxs->x, v11->m_vMaxBounds.x);
            pMaxs->z = fmaxf(pMaxs->z, v11->m_vMaxBounds.z);
            pMaxs->y = v14;
            pMaxs->x = v15;
          }
          ++v10;
        }
      }
    }
  }
}


// CSimSequenceSetup::AddAnimationDecode  (line 2210, @0x00000000020f5f80, libserver.so)  // inlines: FromUntypedHandleUnchecked, GetEntryIndex, GetModel, InitUntypedUnchecked, operator CWeakHandle<InfoForResourceTypeCModel>
// calls: CAnimationDecodeContext::AddAnimationDecodeDesc, CAnimationDecodeContext::AddAnimationDecode
void __fastcall CSimSequenceSetup::AddAnimationDecode(
        CSimSequenceSetup *const this,
        float flRealTime,
        int nOpCount,
        const CAnimationDecodeOp *pOperations,
        int nPoseParamCount,
        const float *pPoseParameters,
        _WORD *hOwningEntity)
{
  int nOwningEntityIndex; // eax
  CAnimationDecodeContext *m_pAnimationDecodeContext; // rdi
  const uint32 *m_pBonesToSetUp; // rdx
  HAnimationDecodeDesc v12; // rax
  HModel hModel; // [rsp+20h] [rbp-20h] BYREF

  nOwningEntityIndex = 0x7FFF;
  this->m_bHasAddedAnimationDecode = 1;
  if ( *hOwningEntity != -1 )
    nOwningEntityIndex = *hOwningEntity & 0x7FFF;
  m_pAnimationDecodeContext = this->m_pAnimationDecodeContext;
  m_pBonesToSetUp = this->m_pBonesToSetUp;
  hModel.m_pBinding = this->m_pAnimationState->m_hModel.m_pBinding;
  v12 = CAnimationDecodeContext::AddAnimationDecodeDesc(
          m_pAnimationDecodeContext,
          &hModel,
          flRealTime,
          m_pBonesToSetUp,
          nOpCount,
          pOperations,
          nPoseParamCount,
          pPoseParameters,
          nOwningEntityIndex,
          0,
          1u);
  if ( v12 != 0 )
    CAnimationDecodeContext::AddAnimationDecode(this->m_pAnimationDecodeContext, v12, this->m_pAnimationState, -1);
}


// CC_AnimRecordBoneSetupStats  (line 2347, @0x000000000209f380, libserver.so)  // inlines: CAutoLockT, Lock, ResetStats, StartRecording, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, atof, ~CAutoLockT
// calls: strtod, ThreadGetCurrentId, Plat_FloatTime, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, _Unwind_Resume
// globals: g_boneSetupStatsRecorder
void __fastcall CC_AnimRecordBoneSetupStats(const CCommandContext *const ctx, const CCommand *const args)
{
  signed __int64 CurrentId; // rsi
  double v3; // xmm0_8
  double flRecordingTime; // [rsp+8h] [rbp-18h]

  if ( args->m_nArgc <= 1 )
    flRecordingTime = 1.0;
  else
    flRecordingTime = strtod(args->m_ppArgv[1], 0);
  CurrentId = ThreadGetCurrentId(ctx);
  if ( CurrentId != g_boneSetupStatsRecorder.m_mutex.m_ownerID
    && _InterlockedCompareExchange64(&g_boneSetupStatsRecorder.m_mutex.m_ownerID, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&g_boneSetupStatsRecorder.m_mutex, CurrentId, 0);
  }
  else
  {
    ++g_boneSetupStatsRecorder.m_mutex.m_depth;
  }
  g_boneSetupStatsRecorder.m_bRecording = 1;
  g_boneSetupStatsRecorder.m_flStartTime = Plat_FloatTime(v3);
  g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount = 0;
  g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount = 0;
  g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount = 0;
  g_boneSetupStatsRecorder.m_flStopTime = g_boneSetupStatsRecorder.m_flStartTime + flRecordingTime;
  --g_boneSetupStatsRecorder.m_mutex.m_depth;
  g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount = 0;
  g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount = 0;
  g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount = 0;
  if ( g_boneSetupStatsRecorder.m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(&g_boneSetupStatsRecorder.m_mutex, 0);
}


// BoneFlagsToBitVec  (line 2360, @0x00000000020b8a40, libserver.so)  // inlines: Bitvec_Set
// callers: CSkeletonInstance::CalcAnimationState, CSkeletonInstance::CalcWorldSpaceBones, CSkeletonInstance::CalcParentSpaceState
void __fastcall BoneFlagsToBitVec(
        CModelSkeleton::BoneFlags_t boneFlags,
        const CModelSkeleton::BoneFlags_t *pInstancedBoneFlags,
        int nTotalBones,
        uint32 *pBitVec)
{
  __int64 i; // rcx

  for ( i = 0; nTotalBones > i; ++i )
  {
    if ( (boneFlags & pInstancedBoneFlags[i]) != 0 )
      pBitVec[i >> 5] |= 1 << i;
  }
}


// CSkeletonInstance::GetAnimationProcessingType  (line 2371, @0x00000000020b8a80, libserver.so)
AnimationProcessingType_t __cdecl CSkeletonInstance::GetAnimationProcessingType()
{
  return AnimationProcessingType_t::ANIMATION_PROCESSING_SERVER_SIMULATION;
}


// CSkeletonInstance::AddAnimationDecode  (line 2386, @0x00000000020b8a90, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CSimSequenceSetup, CVProfScope, EnterScope, ExitScope, GetBool, GetElapsed, GetInt, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, operator->, ~CMicroProfilerGuard, ~CVProfScope
// calls: CModel::FirstSequence, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, std::terminate(void), CVProfile::ExitScope
// callers: CSkeletonInstance::CalcAnimationState
// strings: "SetupSequences"
void __fastcall CSkeletonInstance::AddAnimationDecode(
        CSkeletonInstance *const this,
        CAnimationDecodeContext *const animationDecodeContext,
        const uint32 *pBonesToSetUp)
{
  CAnimationState *p_m_animationState; // r15
  CSkeletonAnimationController *m_pController; // r12
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *v8; // rdi
  __int64 v9; // rdi
  int m_enabled; // esi
  __int64 v11; // rdi
  unsigned __int64 v12; // r12
  ThreadId_t v13; // r13
  uint64 v14; // rcx
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  ThreadId_t m_TargetThreadId; // [rsp-20h] [rbp-80h]
  unsigned __int64 v20; // [rsp-18h] [rbp-78h]
  bool v21; // [rsp-9h] [rbp-69h]
  _QWORD (**v22)(CSimSequenceSetup *__hidden, float, int, const CAnimationDecodeOp *, int, const float *, CEntityHandle); // [rsp-8h] [rbp-68h] BYREF
  CSimSequenceSetup setup; // [rsp+0h] [rbp-60h]

  if ( anim_disable.m_pParent->m_Value.m_nValue == 0 )
  {
    p_m_animationState = &this->m_modelState.m_animationState;
    m_pController = this->m_pController;
    if ( this != -336LL && this->m_modelState.m_animationState.m_pData != 0 && m_pController != 0 )
    {
      m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
      v8 = m_pBinding != 0 ? m_pBinding->m_pData : 0LL;
      if ( CModel::FirstSequence(v8).m_Data != -1 )
      {
        m_enabled = g_VProfCurrentProfile.m_enabled;
        v21 = m_enabled != 0;
        if ( m_enabled != 0 )
        {
          v20 = __rdtsc();
          m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
          if ( m_TargetThreadId == ThreadGetCurrentId(v9) )
          {
            m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
            if ( m_pCurNode->m_pszName != "SetupSequences" )
            {
              m_pCurNode = CVProfNode::GetSubNode(
                             g_VProfCurrentProfile.m_pCurNode,
                             "SetupSequences",
                             0,
                             "SetupSequences",
                             4);
              g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
            }
            v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
            v18->m_BudgetFlags |= 4u;
            CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
            g_VProfCurrentProfile.m_fAtRoot = 0;
          }
          m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
          ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
          g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v20 + __rdtsc();
        }
        setup._vptr_ISequenceSetup = animationDecodeContext;
        v22 = &off_3FFC780;
        setup.m_pAnimationDecodeContext = p_m_animationState;
        setup.m_pAnimationState = pBonesToSetUp;
        LOBYTE(setup.m_pBonesToSetUp) = 0;
        (*(m_pController->_vptr_CSkeletonAnimationController + 15))(m_pController, &v22);
        if ( v21 )
        {
          v12 = __rdtsc();
          if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
          {
            v13 = g_VProfCurrentProfile.m_TargetThreadId;
            if ( v13 == ThreadGetCurrentId(v11) )
            {
              if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
              {
                m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
                if ( m_pParent != 0 )
                  g_VProfCurrentProfile.m_pCurNode = m_pParent;
                else
                  m_pParent = g_VProfCurrentProfile.m_pCurNode;
              }
              else
              {
                m_pParent = g_VProfCurrentProfile.m_pCurNode;
              }
              g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
            }
          }
          v14 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
          ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
          g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v14 - v12 + __rdtsc();
        }
      }
    }
  }
}


// CSkeletonInstance::SetupBones  (line 2414, @0x00000000020b9f40, libserver.so)  // inlines: GetAnimationState, GetParentSkeletonInstance, operator&, operator&=
// calls: CSkeletonInstance::CalcAnimationState
// callers: CBodyGameSystem::DecodeAnimationsAtSpawn, CPhysicsGameSystem::PullKinematicTransformsWorker
void __fastcall CSkeletonInstance::SetupBones(
        int nCount,
        CSkeletonInstance **ppSkeletonInstances,
        CModelSkeleton::BoneFlags_t boneFlags,
        bool bSetUpHierarchicalParents)
{
  CModelSkeleton::BoneFlags_t v4; // r13d
  CSkeletonInstance **v6; // r12
  CSkeletonInstance **v7; // r15
  CSkeletonInstance *i; // rbx
  CGameSceneNode *m_pParent; // rdi

  v4 = boneFlags & 0xFFFFF;
  if ( nCount > 0 )
  {
    v6 = ppSkeletonInstances;
    v7 = &ppSkeletonInstances[(nCount - 1) + 1];
    do
    {
      for ( i = *v6; i != 0; i = (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent) )
      {
        CSkeletonInstance::CalcAnimationState(i, v4);
        if ( !bSetUpHierarchicalParents )
          break;
        m_pParent = i->m_pParent;
        if ( m_pParent == 0 )
          break;
      }
      ++v6;
    }
    while ( v6 != v7 );
  }
}


// CSkeletonInstance::SetBoneTransformsInSceneObject  (line 2439, @0x00000000020c7cb0, libserver.so)  // inlines: BitVec_IsBitSet, CBoneAccessor, Cleanup, GetNumBones, GetWorldSpaceBones, GetWorldSpaceState, IsBoneReadable, ~CBoneAccessor
// calls: CSkeletonInstance::CalcWorldSpaceBones, CSkeletonInstance::GetNumFlexControllers, CSkeletonInstance::GetFlexControllerWeights, operator delete [], CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
void __fastcall CSkeletonInstance::SetBoneTransformsInSceneObject(
        CSkeletonInstance *const this,
        CSceneAnimatableObject *pObject,
        LODGroupMask_t nLodGroupMask)
{
  int m_nBoneCount; // edx
  int m_Size; // edi
  __int64 v7; // rax
  int v8; // ecx
  matrix3x4a_t *m_pMemory; // rdx
  int NumFlexControllers; // eax
  int v11; // esi
  matrix3x4a_t *bones; // [rsp+0h] [rbp-30h]
  uint32 *bones_8; // [rsp+8h] [rbp-28h]
  __int16 bones_16; // [rsp+10h] [rbp-20h]

  CSkeletonInstance::CalcWorldSpaceBones(this, &stru_3FC00);
  m_nBoneCount = this->m_modelState.m_simulationState.m_nBoneCount;
  m_Size = m_nBoneCount;
  bones_16 = m_nBoneCount;
  bones_8 = this->m_modelState.m_simulationState.m_pReadableBones;
  bones = this->m_modelState.m_simulationState.m_pTransforms;
  if ( pObject->m_worldSpaceRenderBones.m_Size <= m_nBoneCount )
    m_Size = pObject->m_worldSpaceRenderBones.m_Size;
  v7 = 0;
  v8 = 0;
  if ( m_Size > 0 )
  {
    while ( 1 )
    {
      if ( m_nBoneCount > v8 && ((1 << v8) & bones_8[v8 >> 5]) != 0 )
      {
        m_pMemory = pObject->m_worldSpaceRenderBones.m_Memory.m_pMemory;
        *&m_pMemory[v7].m_flMatVal[0][0] = *&bones[v7].m_flMatVal[0][0];
        *&m_pMemory[v7].m_flMatVal[0][2] = *&bones[v7].m_flMatVal[0][2];
        *&m_pMemory[v7].m_flMatVal[1][0] = *&bones[v7].m_flMatVal[1][0];
        *&m_pMemory[v7].m_flMatVal[1][2] = *&bones[v7].m_flMatVal[1][2];
        *&m_pMemory[v7].m_flMatVal[2][0] = *&bones[v7].m_flMatVal[2][0];
        *&m_pMemory[v7].m_flMatVal[2][2] = *&bones[v7].m_flMatVal[2][2];
      }
      ++v8;
      ++v7;
      if ( v8 == m_Size )
        break;
      LOWORD(m_nBoneCount) = bones_16;
    }
  }
  NumFlexControllers = CSkeletonInstance::GetNumFlexControllers(this);
  if ( NumFlexControllers != 0 )
  {
    v11 = pObject->m_flexControllerWeights.m_Size;
    if ( NumFlexControllers <= v11 )
      v11 = NumFlexControllers;
    CSkeletonInstance::GetFlexControllerWeights(this, v11, pObject->m_flexControllerWeights.m_Memory.m_pMemory);
  }
}


// CSkeletonInstance::ComputeWorldSpaceBonesAtTime  (line 2491, @0x00000000020b8d50, libserver.so)
__int64 __fastcall CSkeletonInstance::ComputeWorldSpaceBonesAtTime(
        CSkeletonInstance *const this,
        float flTime,
        CWritableBoneAccessor<matrix3x4a_t> *const boneToWorld,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  return 0;
}


// CSkeletonInstance::GetAnimationStateParentSpaceTransform  (line 2503, @0x00000000020b9fd0, libserver.so)  // inlines: GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, operator==
// calls: CSkeletonInstance::CalcAnimationState, CModel::GetAnimationStateCount, CModel::GetAnimationStateOffset
// callers: CSkeletonInstance::GetAnimationStateWorldSpaceTransform
const CTransform *__fastcall CSkeletonInstance::GetAnimationStateParentSpaceTransform(
        const CSkeletonInstance *const this,
        int nBoneIndex)
{
  __int64 v2; // r12
  const CModel *const *m_pBinding; // rax
  const CModel *const *v5; // rdx
  char *m_pData; // rbx
  char *v7; // rax

  v2 = nBoneIndex;
  CSkeletonInstance::CalcAnimationState(this, CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS);
  if ( this->m_modelState.m_animationState.m_pData == 0 )
    return &g_TransformIdentity;
  if ( v2 < 0 )
    return &g_TransformIdentity;
  m_pBinding = this->m_modelState.m_animationState.m_hModel.m_pBinding;
  if ( m_pBinding == 0
    || v2 >= CModel::GetAnimationStateCount(*m_pBinding, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS) )
  {
    return &g_TransformIdentity;
  }
  v5 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
  if ( v5 != 0 )
  {
    m_pData = this->m_modelState.m_animationState.m_pData;
    v7 = &m_pData[CModel::GetAnimationStateOffset(*v5, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
  }
  else
  {
    v7 = 0;
  }
  return &v7[32 * v2];
}


// CSkeletonInstance::GetAnimationStateWorldSpaceTransform  (line 2520, @0x00000000020ba050, libserver.so)  // inlines: GetModelData, TransformMatrix, matrix3x4a_t, memcpy, operator const RuntimeClass_t*, operator*, operator=
// calls: CSkeletonInstance::GetAnimationStateParentSpaceTransform, TransformMatrix, CModel::boneParent, ConcatTransforms
// callers: EntityBodyTransform, CPhysicsGameSystem::PushDynamicTransformsWorker
matrix3x4a_t *__fastcall CSkeletonInstance::GetAnimationStateWorldSpaceTransform(
        matrix3x4a_t *__return_ptr retstr,
        const CSkeletonInstance *const this,
        const matrix3x4_t *const rootToWorld,
        int nBoneIndex)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CTransform *AnimationStateParentSpaceTransform; // rax
  int i; // r13d
  const CTransform *v9; // rax
  const CModel *pModel; // [rsp+18h] [rbp-C8h]
  matrix3x4a_t boneToWorld; // [rsp+20h] [rbp-C0h] BYREF
  matrix3x4_t in1; // [rsp+50h] [rbp-90h] BYREF
  matrix3x4_t out; // [rsp+80h] [rbp-60h] BYREF

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && (pModel = m_pBinding->m_pData, m_pBinding->m_pData != 0) )
  {
    AnimationStateParentSpaceTransform = CSkeletonInstance::GetAnimationStateParentSpaceTransform(this, nBoneIndex);
    TransformMatrix(AnimationStateParentSpaceTransform, &out);
    boneToWorld = out;
    for ( i = CModel::boneParent(pModel, nBoneIndex); i >= 0; i = CModel::boneParent(pModel, i) )
    {
      v9 = CSkeletonInstance::GetAnimationStateParentSpaceTransform(this, i);
      TransformMatrix(v9, &in1);
      ConcatTransforms(&in1, &boneToWorld, &out);
      boneToWorld = out;
    }
    ConcatTransforms(rootToWorld, &boneToWorld, &out);
    *retstr = out;
  }
  else
  {
    *retstr = *rootToWorld;
  }
  return retstr;
}


// CSkeletonInstance::GetAnimationStateWorldSpaceTransforms  (line 2542, @0x00000000020ba230, libserver.so)  // inlines: GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationState, GetAnimationStateData<(AnimationStateType_t)0>, GetModelData, operator const RuntimeClass_t*, operator==
// calls: CSkeletonInstance::CalcAnimationState, CModel::GetAnimationStateCount, CModel::GetAnimationStateOffset, CModel::boneParent, TransformMatrix, ConcatTransforms
// callers: CRagdollProp::Spawn
int __fastcall CSkeletonInstance::GetAnimationStateWorldSpaceTransforms(
        const CSkeletonInstance *const this,
        const matrix3x4_t *const rootToWorld,
        int nTransformCount,
        matrix3x4_t *pWorldTransforms,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *const *v8; // rax
  signed int AnimationStateCount; // eax
  const CModel *const *v10; // rdx
  char *m_pData; // rbx
  const CTransform *v12; // r13
  matrix3x4_t *v13; // r12
  int v14; // ebx
  int v15; // r15d
  const matrix3x4_t *v16; // rdi
  uint32 v18; // eax
  int v19; // eax
  const CModel *pModel; // [rsp+8h] [rbp-78h]
  int nTransformCounta; // [rsp+1Ch] [rbp-64h]
  matrix3x4_t mJointToParent; // [rsp+20h] [rbp-60h] BYREF

  nTransformCounta = nTransformCount;
  CSkeletonInstance::CalcAnimationState(this, boneFlags);
  if ( this == -336LL )
    return 0;
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  pModel = m_pBinding->m_pData;
  if ( m_pBinding->m_pData == 0 )
    return 0;
  v8 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
  if ( v8 == 0 )
  {
    v19 = 0;
    if ( nTransformCounta < 0 )
      v19 = nTransformCounta;
    nTransformCounta = v19;
    goto LABEL_19;
  }
  AnimationStateCount = CModel::GetAnimationStateCount(*v8, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
  v10 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
  if ( nTransformCount >= AnimationStateCount )
  {
    if ( v10 == 0 )
    {
      nTransformCounta = 0;
      goto LABEL_19;
    }
    v18 = CModel::GetAnimationStateCount(*v10, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
    v10 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
    nTransformCounta = v18;
  }
  if ( v10 != 0 )
  {
    m_pData = this->m_modelState.m_animationState.m_pData;
    v12 = &m_pData[CModel::GetAnimationStateOffset(*v10, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    goto LABEL_8;
  }
LABEL_19:
  v12 = 0;
LABEL_8:
  if ( nTransformCounta <= 0 )
    return nTransformCounta;
  v13 = pWorldTransforms;
  v14 = 0;
  do
  {
    v15 = CModel::boneParent(pModel, v14);
    TransformMatrix(v12, &mJointToParent);
    v16 = rootToWorld;
    if ( v15 >= 0 )
      v16 = &pWorldTransforms[v15];
    ++v14;
    ConcatTransforms(v16, &mJointToParent, v13);
    ++v12;
    ++v13;
  }
  while ( v14 != nTransformCounta );
  return v14;
}


// CSkeletonInstance::CalcAnimationState  (line 2593, @0x00000000020b9460, libserver.so)  // inlines: Add, AddBones, AddBones_CalcAnimationState, BitVec_AndNot, BitVec_ClearAll, BitVec_CountNewBits, BitVec_IsAnySet, BoneFlagsIndicateBoneMergeIsOccurring, CAutoLockT, CMicroProfilerGuard, CMicroProfilerSample, CUtlScratchMemoryPoolFixedGrowable, CVProfScope, CalcNumIntsForBits, EnterScope, ExitScope, GetElapsed, GetEndMask, GetTimebaseRegister, InTargetThread, IsEnabled, Load, Lock, PLAT_CPU_TIME, PopulationCount, PrintAndResetStats, PrintLine, ResetStats, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, V_memset, memset, operator&, operator|, operator|=, ~CAutoLockT, ~CMicroProfilerGuard, ~CUtlScratchMemoryPoolFixedGrowable, ~CVProfScope
// calls: ThreadGetCurrentId, CModelState::ComputeHierarchyBoneFlags, CUtlScratchMemoryPool::CUtlScratchMemoryPool, CAnimationDecodeContext::CAnimationDecodeContext, CSkeletonInstance::GetNumBones, memset, BoneFlagsToBitVec, CAnimationState::GetReadableBones, CAnimationDecodeContext::~CAnimationDecodeContext, CUtlScratchMemoryPool::~CUtlScratchMemoryPool, ThreadInterlockedExchange64, CVProfNode::ExitScope(void) (24 total)
// callers: CSkeletonInstance::SetupBones, CSkeletonInstance::GetAnimationStateParentSpaceTransform, CSkeletonInstance::GetAnimationStateWorldSpaceTransforms, CSkeletonInstance::GetBoneMergeBoneToRoot, CSkeletonInstance::CalculateWorldTransforms_R, CSkeletonInstance::BuildInterpolatedTransformations, CSkeletonInstance::BuildTransformations
// strings: "CalcAnimationState", "\n################################################################################\n\n", "Bone Setup Stats:\n\n", "Recording duration: %f seconds\n", "Bone/Sec", "Bone/Call" (13 total)
// globals: g_boneSetupStatsRecorder, GetEndMask(int)::bitStringEndMasks
void __fastcall CSkeletonInstance::CalcAnimationState(
        CSkeletonInstance *const this,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  int m_enabled; // ecx
  __int32 v5; // r13d
  signed __int64 CurrentId; // rsi
  int v7; // r15d
  __int64 v8; // rax
  size_t v9; // r15
  signed __int64 v10; // rax
  void *v11; // rsp
  void *v12; // rsp
  const uint32 *v13; // r14
  char *v14; // r13
  const uint32 *ReadableBones; // rax
  unsigned __int64 v16; // rsi
  char *v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // ecx
  _DWORD *v20; // rax
  CAnimationDecodeContext *v21; // rdi
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  ThreadId_t v24; // r13
  uint64 v25; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v27; // r14
  uint64 m_numTimeBaseTicks; // rcx
  ThreadId_t v29; // r13
  char v30; // al
  CVProfNode *m_pParent; // rax
  CAnimationDecodeContext *v32; // r13
  const uint32 *v33; // rax
  unsigned __int64 v34; // rdi
  int v35; // r13d
  int *v36; // rcx
  uint32 v37; // edx
  unsigned int v38; // esi
  int v39; // r15d
  signed __int64 v40; // rsi
  double v41; // xmm0_8
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v43; // rax
  double v44; // xmm0_8
  unsigned int v45; // edx
  double v46; // xmm0_8
  double m_CalcAnimationState_nBoneCount_low; // xmm0_8
  double v48; // xmm1_8
  double m_CalcAnimationState_nCallCount_low; // xmm2_8
  double v50; // xmm0_8
  double m_CalcParentSpaceState_nBoneCount_low; // xmm0_8
  double v52; // xmm1_8
  double m_CalcParentSpaceState_nCallCount_low; // xmm2_8
  double v54; // xmm0_8
  double m_CalcWorldSpaceBones_nBoneCount_low; // xmm0_8
  double v56; // xmm1_8
  double m_CalcWorldSpaceBones_nCallCount_low; // xmm2_8
  double v58; // xmm0_8
  double v59; // xmm0_8
  int v60; // [rsp+Ch] [rbp-10B4h]
  CAnimationState *p_m_animationState; // [rsp+10h] [rbp-10B0h] BYREF
  CAutoLockT<CThreadFastMutex,CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2604; // [rsp+18h] [rbp-10A8h]
  CUtlScratchMemoryPool *pMemStack; // [rsp+20h] [rbp-10A0h]
  CAnimationDecodeContext *p_animationDecodeContext; // [rsp+28h] [rbp-1098h]
  double nTotalBones; // [rsp+30h] [rbp-1090h]
  CModelSkeleton::BoneFlags_t boneFlagsa; // [rsp+38h] [rbp-1088h]
  CVProfScope VProf_2597; // [rsp+3Fh] [rbp-1081h]
  CAnimationDecodeContext animationDecodeContext; // [rsp+40h] [rbp-1080h] BYREF
  CUtlScratchMemoryPoolFixedGrowable<4096> animationScratchMemory; // [rsp+70h] [rbp-1050h] BYREF
  unsigned __int64 v70; // [rsp+1088h] [rbp-38h]

  v70 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_2597.m_bEnabled = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v27 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CalcAnimationState" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CalcAnimationState",
                       0,
                       "CalcAnimationState",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v43 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v43->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v27 + __rdtsc();
  }
  v5 = boneFlags & 0xFFFFF;
  if ( v5 == (v5 & this->m_animationParentSpaceValidBoneFlags.m_value) )
    goto LABEL_24;
  generated_id_2604.m_lock = &this->m_calcAbsPositionMutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_calcAbsPositionMutex.m_ownerID
    && _InterlockedCompareExchange64(&this->m_calcAbsPositionMutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_2604.m_lock, CurrentId, 0);
  }
  else
  {
    ++this->m_calcAbsPositionMutex.m_depth;
  }
  if ( v5 == (v5 & this->m_animationParentSpaceValidBoneFlags.m_value) )
  {
    if ( --this->m_calcAbsPositionMutex.m_depth == 0 )
      ThreadInterlockedExchange64(generated_id_2604.m_lock, 0);
LABEL_24:
    if ( !VProf_2597.m_bEnabled )
      return;
    v23 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0
      || (v24 = g_VProfCurrentProfile.m_TargetThreadId) != ThreadGetCurrentId(this) )
    {
LABEL_28:
      v25 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v25 - v23 + __rdtsc();
      return;
    }
    v30 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
LABEL_35:
    if ( v30 != 0 )
    {
      m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
      if ( m_pParent != 0 )
        g_VProfCurrentProfile.m_pCurNode = m_pParent;
      else
        m_pParent = g_VProfCurrentProfile.m_pCurNode;
    }
    else
    {
      m_pParent = g_VProfCurrentProfile.m_pCurNode;
    }
    g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
    goto LABEL_28;
  }
  boneFlagsa = this->m_animationParentSpaceValidBoneFlags.m_value | v5;
  if ( boneFlagsa != CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS && (boneFlagsa & 0xC0000) != 0 )
    CModelState::ComputeHierarchyBoneFlags(&this->m_modelState);
  pMemStack = &animationScratchMemory;
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(
    &animationScratchMemory,
    4096,
    animationScratchMemory.m_initialAllocationMemory,
    0);
  p_animationDecodeContext = &animationDecodeContext;
  CAnimationDecodeContext::CAnimationDecodeContext(&animationDecodeContext);
  LODWORD(nTotalBones) = CSkeletonInstance::GetNumBones(this);
  v7 = LODWORD(nTotalBones) + 62;
  if ( LODWORD(nTotalBones) + 31 >= 0 )
    v7 = LODWORD(nTotalBones) + 31;
  v8 = (v7 >> 5);
  v9 = 4LL * v8;
  v10 = 16 * ((((4 * v8 + 31) & 0xFFFFFFFF0uLL) + 30) >> 4);
  v11 = alloca(v10);
  v12 = alloca(v10);
  v13 = (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL);
  v14 = (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL);
  memset((&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL), 0, v9);
  BoneFlagsToBitVec(
    boneFlagsa,
    this->m_modelState.m_pBoneFlagsIncludingChildren,
    SLODWORD(nTotalBones),
    (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL));
  p_m_animationState = &this->m_modelState.m_animationState;
  ReadableBones = CAnimationState::GetReadableBones(&this->m_modelState.m_animationState);
  v16 = (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL) + v9;
  v17 = ReadableBones - (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL);
  v18 = &p_m_animationState & 0xFFFFFFFFFFFFFFEFLL;
  if ( v14 >= &v14[v9] )
    goto LABEL_18;
  do
  {
    v19 = *(v13 - v14 + v18) & ~*&v17[v18];
    v18 += 4LL;
    *(v18 - 4) = v19;
  }
  while ( v16 > v18 );
  if ( *v14 != 0 )
  {
LABEL_40:
    CAnimationDecodeContext::Init(
      p_animationDecodeContext,
      AnimationProcessingType_t::ANIMATION_PROCESSING_SERVER_SIMULATION,
      pMemStack);
    v32 = p_animationDecodeContext;
    CSkeletonInstance::AddAnimationDecode(this, p_animationDecodeContext, (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL));
    (*(*g_pAnimationSystem + 104LL))(g_pAnimationSystem, v32);
    if ( (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication) == 0 || !g_boneSetupStatsRecorder.m_bRecording )
      goto LABEL_50;
    v60 = GetEndMask(int)::bitStringEndMasks[LOBYTE(nTotalBones) & 0x1F];
    v33 = CAnimationState::GetReadableBones(p_m_animationState);
    v34 = &v13[v9 / 4 - 1];
    v35 = 0;
    v36 = (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL);
    if ( v13 >= v34 )
    {
      v36 = (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL);
      v35 = 0;
    }
    else
    {
      do
      {
        v37 = *v33;
        ++v36;
        ++v33;
        v38 = (*(v36 - 1) & ~v37) - (((*(v36 - 1) & ~v37) >> 1) & 0x55555555);
        v35 += (16843009
              * (((v38 & 0x33333333)
                + ((v38 >> 2) & 0x33333333)
                + (((v38 & 0x33333333) + ((v38 >> 2) & 0x33333333)) >> 4))
               & 0xF0F0F0F)) >> 24;
      }
      while ( v34 > v36 );
    }
    v39 = *v36;
    LODWORD(nTotalBones) = *v33;
    v40 = ThreadGetCurrentId(v34);
    if ( v40 == g_boneSetupStatsRecorder.m_mutex.m_ownerID
      || _InterlockedCompareExchange64(&g_boneSetupStatsRecorder.m_mutex.m_ownerID, v40, 0) == 0 )
    {
      ++g_boneSetupStatsRecorder.m_mutex.m_depth;
    }
    else
    {
      _mm_pause();
      CThreadFastMutex::Lock(&g_boneSetupStatsRecorder.m_mutex, v40, 0);
    }
    if ( g_boneSetupStatsRecorder.m_bRecording )
    {
      v44 = Plat_FloatTime(v41);
      g_boneSetupStatsRecorder.m_bRecording = g_boneSetupStatsRecorder.m_flStopTime > v44;
      if ( g_boneSetupStatsRecorder.m_flStopTime <= v44 )
      {
        nTotalBones = g_boneSetupStatsRecorder.m_flStopTime - g_boneSetupStatsRecorder.m_flStartTime;
        *&v46 = Msg("\n################################################################################\n\n").m128_u64[0];
        Msg("Bone Setup Stats:\n\n", v46);
        Msg("Recording duration: %f seconds\n", nTotalBones);
        Msg("Function              %10s %10s %10s %10s\n", "Num Bones", "Num Calls", "Bone/Call", "Bone/Sec");
        if ( (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 0x8000000000000000LL) != 0LL )
          m_CalcAnimationState_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 1
                                               | (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount >> 1))
                                              + (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 1
                                               | (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount >> 1));
        else
          m_CalcAnimationState_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount);
        v48 = m_CalcAnimationState_nBoneCount_low / nTotalBones;
        if ( g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount != 0 )
        {
          if ( (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 0x8000000000000000LL) != 0LL )
            m_CalcAnimationState_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount >> 1))
                                                + (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount >> 1));
          else
            m_CalcAnimationState_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount);
          v50 = m_CalcAnimationState_nBoneCount_low / m_CalcAnimationState_nCallCount_low;
        }
        else
        {
          v50 = 0.0;
        }
        Msg(
          "%21s %10llu %10llu %10.1f %10.1f\n",
          "CalcAnimationState  ",
          g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount,
          g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount,
          v50,
          v48);
        if ( (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 0x8000000000000000LL) != 0LL )
          m_CalcParentSpaceState_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount >> 1))
                                                + (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount >> 1));
        else
          m_CalcParentSpaceState_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount);
        v52 = m_CalcParentSpaceState_nBoneCount_low / nTotalBones;
        if ( g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount != 0 )
        {
          if ( (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 0x8000000000000000LL) != 0LL )
            m_CalcParentSpaceState_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 1
                                                   | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount >> 1))
                                                  + (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 1
                                                   | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount >> 1));
          else
            m_CalcParentSpaceState_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount);
          v54 = m_CalcParentSpaceState_nBoneCount_low / m_CalcParentSpaceState_nCallCount_low;
        }
        else
        {
          v54 = 0.0;
        }
        Msg(
          "%21s %10llu %10llu %10.1f %10.1f\n",
          "CalcParentSpaceState",
          g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount,
          g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount,
          v54,
          v52);
        if ( (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 0x8000000000000000LL) != 0LL )
          m_CalcWorldSpaceBones_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 1
                                                | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount >> 1))
                                               + (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 1
                                                | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount >> 1));
        else
          m_CalcWorldSpaceBones_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount);
        v56 = m_CalcWorldSpaceBones_nBoneCount_low / nTotalBones;
        if ( g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount != 0 )
        {
          if ( (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 0x8000000000000000LL) != 0LL )
            m_CalcWorldSpaceBones_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 1
                                                  | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount >> 1))
                                                 + (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 1
                                                  | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount >> 1));
          else
            m_CalcWorldSpaceBones_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount);
          v58 = m_CalcWorldSpaceBones_nBoneCount_low / m_CalcWorldSpaceBones_nCallCount_low;
        }
        else
        {
          v58 = 0.0;
        }
        *&v59 = Msg(
                  "%21s %10llu %10llu %10.1f %10.1f\n",
                  "CalcWorldSpaceBones ",
                  g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount,
                  g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount,
                  v58,
                  v56).m128_u64[0];
        Msg("\n################################################################################\n\n", v59);
        g_boneSetupStatsRecorder.m_bRecording = 0;
        g_boneSetupStatsRecorder.m_flStartTime = 0.0;
        g_boneSetupStatsRecorder.m_flStopTime = 0.0;
        g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount = 0;
        g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount = 0;
        g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount = 0;
        g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount = 0;
        g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount = 0;
        g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount = 0;
      }
      else
      {
        ++g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount;
        v45 = (~LODWORD(nTotalBones) & v39 & v60) - (((~LODWORD(nTotalBones) & v39 & v60) >> 1) & 0x55555555);
        g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount += (v35
                                                                   + ((16843009
                                                                     * (((v45 & 0x33333333)
                                                                       + ((v45 >> 2) & 0x33333333)
                                                                       + (((v45 & 0x33333333) + ((v45 >> 2) & 0x33333333)) >> 4))
                                                                      & 0xF0F0F0F)) >> 24));
      }
      if ( --g_boneSetupStatsRecorder.m_mutex.m_depth != 0 )
        goto LABEL_50;
    }
    else if ( --g_boneSetupStatsRecorder.m_mutex.m_depth != 0 )
    {
LABEL_50:
      CAnimationState::MarkBonesReadable(p_m_animationState, v13);
      goto LABEL_18;
    }
    ThreadInterlockedExchange64(&g_boneSetupStatsRecorder.m_mutex, 0);
    goto LABEL_50;
  }
  v20 = (&p_m_animationState & 0xFFFFFFFFFFFFFFEFLL);
  while ( v16 > ++v20 )
  {
    if ( *v20 != 0 )
      goto LABEL_40;
  }
LABEL_18:
  v21 = p_animationDecodeContext;
  this->m_animationParentSpaceValidBoneFlags.m_value = boneFlagsa;
  CAnimationDecodeContext::~CAnimationDecodeContext(v21);
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(pMemStack);
  if ( --this->m_calcAbsPositionMutex.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_2604.m_lock, 0);
  if ( VProf_2597.m_bEnabled )
  {
    v23 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0 )
      goto LABEL_28;
    v29 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v29 != ThreadGetCurrentId(v22) )
      goto LABEL_28;
    v30 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
    goto LABEL_35;
  }
}


// CSkeletonInstance::CalcParentSpaceState  (line 2659, @0x00000000020c9380, libserver.so)  // inlines: AddBones, AddBones_CalcParentSpaceState, BitVec_CountNewBits, BoneFlagsIndicateBoneMergeIsOccurring, CAutoLockT, CalcNumIntsForBits, GetEndMask, Load, Lock, PopulationCount, PrintAndResetStats, PrintLine, ResetStats, SetHasValidBoneTransformData, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, V_memset, memset, operator&, operator&=, operator|, ~CAutoLockT
// calls: CSkeletonInstance::GetNumBones, ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), Plat_FloatTime, ThreadInterlockedExchange64, CSkeletonInstance::HasNonAnimationDrivenBones, CSkeletonInstance::BuildTransformations, CModelState::ComputeHierarchyBoneFlags, memset, BoneFlagsToBitVec, CAnimationState::GetReadableBones, Msg (14 total)
// callers: CSkeletonInstance::CalcWorldSpaceBones, CSkeletonInstance::ReadParentSpaceState
// strings: "\n################################################################################\n\n", "Bone Setup Stats:\n\n", "Recording duration: %f seconds\n", "Bone/Sec", "Bone/Call", "Num Calls" (12 total)
// globals: g_boneSetupStatsRecorder, GetEndMask(int)::bitStringEndMasks
void __fastcall CSkeletonInstance::CalcParentSpaceState(
        CSkeletonInstance *const this,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  __int64 v4; // rdi
  __int32 v5; // r13d
  signed __int64 CurrentId; // rsi
  double v7; // xmm0_8
  unsigned int v8; // edx
  bool HasNonAnimationDrivenBones; // al
  bool v10; // al
  CModelSkeleton::BoneFlags_t v11; // r15d
  int NumBones; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rsp
  int *v19; // r12
  const uint32 *ReadableBones; // rax
  unsigned __int64 v21; // rdi
  int v22; // esi
  uint32 v23; // edx
  unsigned int v24; // ecx
  int v25; // esi
  uint32 v26; // r12d
  signed __int64 v27; // rsi
  double v28; // xmm0_8
  double v29; // xmm0_8
  double m_CalcAnimationState_nBoneCount_low; // xmm0_8
  double v31; // xmm1_8
  double m_CalcAnimationState_nCallCount_low; // xmm2_8
  double v33; // xmm0_8
  double m_CalcParentSpaceState_nBoneCount_low; // xmm0_8
  double v35; // xmm1_8
  double m_CalcParentSpaceState_nCallCount_low; // xmm2_8
  double v37; // xmm0_8
  double m_CalcWorldSpaceBones_nBoneCount_low; // xmm0_8
  double v39; // xmm1_8
  double m_CalcWorldSpaceBones_nCallCount_low; // xmm2_8
  double v41; // xmm0_8
  double v42; // xmm0_8
  int v43; // [rsp+Ch] [rbp-54h]
  __int64 v44; // [rsp+10h] [rbp-50h] BYREF
  double nTotalBones; // [rsp+18h] [rbp-48h]
  unsigned __int64 v46; // [rsp+28h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  if ( CSkeletonInstance::GetNumBones(this) == 0 )
    return;
  v5 = boneFlags & 0xFFFFF;
  if ( v5 == (v5 & this->m_compositeParentSpaceValidBoneFlags.m_value) )
    return;
  CurrentId = ThreadGetCurrentId(v4);
  if ( CurrentId == this->m_calcAbsPositionMutex.m_ownerID
    || _InterlockedCompareExchange64(&this->m_calcAbsPositionMutex, CurrentId, 0) == 0 )
  {
    ++this->m_calcAbsPositionMutex.m_depth;
  }
  else
  {
    _mm_pause();
    CThreadFastMutex::Lock(&this->m_calcAbsPositionMutex, CurrentId, 0);
  }
  if ( v5 != (v5 & this->m_compositeParentSpaceValidBoneFlags.m_value) )
  {
    if ( v5 != 0xFFFFF && (boneFlags & 0xC0000) != 0 )
      CModelState::ComputeHierarchyBoneFlags(&this->m_modelState);
    v11 = v5 | this->m_compositeParentSpaceValidBoneFlags.m_value;
    if ( (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication) == 0 || !g_boneSetupStatsRecorder.m_bRecording )
      goto LABEL_10;
    NumBones = CSkeletonInstance::GetNumBones(this);
    v13 = NumBones + 62;
    LODWORD(nTotalBones) = NumBones;
    v14 = NumBones + 31;
    if ( v14 >= 0 )
      v13 = v14;
    v15 = v13 >> 5;
    v16 = v15;
    v17 = 4 * v15;
    v44 = v16;
    v18 = alloca(((v17 + 31) & 0xFFFFFFF0) + 16LL);
    v19 = (&v44 & 0xFFFFFFFFFFFFFFEFLL);
    if ( v17 < 0 )
      __debugbreak();
    memset((&v44 & 0xFFFFFFFFFFFFFFEFLL), 0, v17);
    BoneFlagsToBitVec(
      v11,
      this->m_modelState.m_pBoneFlagsIncludingChildren,
      SLODWORD(nTotalBones),
      (&v44 & 0xFFFFFFFFFFFFFFEFLL));
    LODWORD(nTotalBones) = GetEndMask(int)::bitStringEndMasks[LOBYTE(nTotalBones) & 0x1F];
    ReadableBones = CAnimationState::GetReadableBones(&this->m_modelState.m_compositeParentSpaceState);
    v21 = &v19[v44 - 1];
    if ( v19 >= v21 )
    {
      v43 = 0;
    }
    else
    {
      v22 = 0;
      do
      {
        v23 = *ReadableBones;
        ++v19;
        ++ReadableBones;
        v24 = (*(v19 - 1) & ~v23) - (((*(v19 - 1) & ~v23) >> 1) & 0x55555555);
        v22 += (16843009
              * (((v24 & 0x33333333)
                + ((v24 >> 2) & 0x33333333)
                + (((v24 & 0x33333333) + ((v24 >> 2) & 0x33333333)) >> 4))
               & 0xF0F0F0F)) >> 24;
      }
      while ( v21 > v19 );
      v43 = v22;
    }
    v25 = *v19;
    v26 = *ReadableBones;
    LODWORD(v44) = v25;
    v27 = ThreadGetCurrentId(v21);
    if ( v27 != g_boneSetupStatsRecorder.m_mutex.m_ownerID
      && _InterlockedCompareExchange64(&g_boneSetupStatsRecorder.m_mutex.m_ownerID, v27, 0) != 0 )
    {
      _mm_pause();
      CThreadFastMutex::Lock(&g_boneSetupStatsRecorder.m_mutex, v27, 0);
    }
    else
    {
      ++g_boneSetupStatsRecorder.m_mutex.m_depth;
    }
    if ( g_boneSetupStatsRecorder.m_bRecording )
    {
      v7 = Plat_FloatTime(v28);
      g_boneSetupStatsRecorder.m_bRecording = g_boneSetupStatsRecorder.m_flStopTime > v7;
      if ( g_boneSetupStatsRecorder.m_flStopTime <= v7 )
      {
        nTotalBones = g_boneSetupStatsRecorder.m_flStopTime - g_boneSetupStatsRecorder.m_flStartTime;
        *&v29 = Msg("\n################################################################################\n\n").m128_u64[0];
        Msg("Bone Setup Stats:\n\n", v29);
        Msg("Recording duration: %f seconds\n", nTotalBones);
        Msg("Function              %10s %10s %10s %10s\n", "Num Bones", "Num Calls", "Bone/Call", "Bone/Sec");
        if ( (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 0x8000000000000000LL) != 0LL )
          m_CalcAnimationState_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 1
                                               | (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount >> 1))
                                              + (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 1
                                               | (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount >> 1));
        else
          m_CalcAnimationState_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount);
        v31 = m_CalcAnimationState_nBoneCount_low / nTotalBones;
        if ( g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount != 0 )
        {
          if ( (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 0x8000000000000000LL) != 0LL )
            m_CalcAnimationState_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount >> 1))
                                                + (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount >> 1));
          else
            m_CalcAnimationState_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount);
          v33 = m_CalcAnimationState_nBoneCount_low / m_CalcAnimationState_nCallCount_low;
        }
        else
        {
          v33 = 0.0;
        }
        Msg(
          "%21s %10llu %10llu %10.1f %10.1f\n",
          "CalcAnimationState  ",
          g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount,
          g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount,
          v33,
          v31);
        if ( (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 0x8000000000000000LL) != 0LL )
          m_CalcParentSpaceState_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount >> 1))
                                                + (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 1
                                                 | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount >> 1));
        else
          m_CalcParentSpaceState_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount);
        v35 = m_CalcParentSpaceState_nBoneCount_low / nTotalBones;
        if ( g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount != 0 )
        {
          if ( (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 0x8000000000000000LL) != 0LL )
            m_CalcParentSpaceState_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 1
                                                   | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount >> 1))
                                                  + (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 1
                                                   | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount >> 1));
          else
            m_CalcParentSpaceState_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount);
          v37 = m_CalcParentSpaceState_nBoneCount_low / m_CalcParentSpaceState_nCallCount_low;
        }
        else
        {
          v37 = 0.0;
        }
        Msg(
          "%21s %10llu %10llu %10.1f %10.1f\n",
          "CalcParentSpaceState",
          g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount,
          g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount,
          v37,
          v35);
        if ( (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 0x8000000000000000LL) != 0LL )
          m_CalcWorldSpaceBones_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 1
                                                | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount >> 1))
                                               + (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 1
                                                | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount >> 1));
        else
          m_CalcWorldSpaceBones_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount);
        v39 = m_CalcWorldSpaceBones_nBoneCount_low / nTotalBones;
        if ( g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount != 0 )
        {
          if ( (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 0x8000000000000000LL) != 0LL )
            m_CalcWorldSpaceBones_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 1
                                                  | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount >> 1))
                                                 + (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 1
                                                  | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount >> 1));
          else
            m_CalcWorldSpaceBones_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount);
          v41 = m_CalcWorldSpaceBones_nBoneCount_low / m_CalcWorldSpaceBones_nCallCount_low;
        }
        else
        {
          v41 = 0.0;
        }
        *&v42 = Msg(
                  "%21s %10llu %10llu %10.1f %10.1f\n",
                  "CalcWorldSpaceBones ",
                  g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount,
                  g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount,
                  v41,
                  v39).m128_u64[0];
        Msg("\n################################################################################\n\n", v42);
        g_boneSetupStatsRecorder.m_bRecording = 0;
        g_boneSetupStatsRecorder.m_flStartTime = 0.0;
        g_boneSetupStatsRecorder.m_flStopTime = 0.0;
        g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount = 0;
        g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount = 0;
        g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount = 0;
        g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount = 0;
        g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount = 0;
        g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount = 0;
      }
      else
      {
        ++g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount;
        v8 = (~v26 & v44 & LODWORD(nTotalBones)) - (((~v26 & v44 & LODWORD(nTotalBones)) >> 1) & 0x55555555);
        g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount += (v43
                                                                     + ((16843009
                                                                       * (((v8 & 0x33333333)
                                                                         + ((v8 >> 2) & 0x33333333)
                                                                         + (((v8 & 0x33333333) + ((v8 >> 2) & 0x33333333)) >> 4))
                                                                        & 0xF0F0F0F)) >> 24));
      }
      if ( --g_boneSetupStatsRecorder.m_mutex.m_depth != 0 )
        goto LABEL_10;
    }
    else if ( --g_boneSetupStatsRecorder.m_mutex.m_depth != 0 )
    {
      goto LABEL_10;
    }
    ThreadInterlockedExchange64(&g_boneSetupStatsRecorder.m_mutex, 0);
LABEL_10:
    HasNonAnimationDrivenBones = CSkeletonInstance::HasNonAnimationDrivenBones(this);
    if ( HasNonAnimationDrivenBones != this->m_modelState.m_compositeParentSpaceState.m_bHasValidBoneTransformData )
      this->m_modelState.m_compositeParentSpaceState.m_bHasValidBoneTransformData = HasNonAnimationDrivenBones;
    v10 = CSkeletonInstance::BuildTransformations(this, v11);
    this->m_compositeParentSpaceValidBoneFlags.m_value |= v5;
    if ( v10 )
      this->m_compositeWorldSpaceValidBoneFlags.m_value |= v5;
    if ( --this->m_calcAbsPositionMutex.m_depth == 0 )
      ThreadInterlockedExchange64(&this->m_calcAbsPositionMutex, 0);
    return;
  }
  if ( --this->m_calcAbsPositionMutex.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_calcAbsPositionMutex, 0);
}


// CSkeletonInstance::CalcWorldSpaceBones  (line 2753, @0x00000000020c7350, libserver.so)  // inlines: AddBones, AddBones_CalcWorldSpaceBones, BitVec_CountNewBits, BoneFlagsIndicateBoneMergeIsOccurring, CAutoLockT, CBoneAccessor, CWritableBoneAccessor, CalcAbsolutePosition, CalcNumIntsForBits, Cleanup, GetAnimationData<(AnimationStateType_t)1>, GetAnimationStateData<(AnimationStateType_t)1>, GetCompositeParentSpaceTransformType, GetEndMask, GetInt, GetModel, GetModelData, GetTransformType, GetWorldSpaceBonesForModify, Load, Lock, NodeToWorldTransform, PopulationCount, PrintAndResetStats, PrintLine, ResetStats, Store, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, V_memset, memset, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator&, operator&=, operator->, operator==, operator|, ~CAutoLockT, ~CBoneAccessor, ~CWritableBoneAccessor
// calls: CSkeletonInstance::GetNumBones, ThreadGetCurrentId, CModelState::ComputeHierarchyBoneFlags, memset, BoneFlagsToBitVec, CSkeletonInstance::CalcParentSpaceState, CCompositeParentSpaceState::GetBones, ComputeWorldSpaceBonesFromParentSpaceBone, CSkeletonInstance::ApplyIKBones, operator delete [], ThreadInterlockedExchange64, CModel::CalcProceduralBones (25 total)
// callers: CDecalGameSystem::RenderDebuggingData, CDecalGameSystem::UpdateSkinnedEntityDecals, CPhysicsGameSystem::ForceUpdateIfKeyframed, IDebugOverlay::GetSkeletonInstanceWorldTransforms, CBaseAnimating::HitboxToWorldTransforms, CBaseAnimating::DrawVCollide, CSkeletonInstance::SetBoneTransformsInSceneObject, CGameSceneNode::PerformHierarchySetupWork, CSkeletonInstance::BuildTransformations, CSkeletonInstance::CalcWorldSpaceAttachments, CSkeletonInstance::GetWorldSpaceTransform, CSkeletonInstance::SetModel (15 total)
// strings: "skel_constraints_enable", "\n################################################################################\n\n", "Bone Setup Stats:\n\n", "Recording duration: %f seconds\n", "Bone/Sec", "Bone/Call" (13 total)
// globals: `guard variable for'CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable, g_boneSetupStatsRecorder, GetEndMask(int)::bitStringEndMasks, CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable
void __fastcall CSkeletonInstance::CalcWorldSpaceBones(
        CSkeletonInstance *const this,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  __int64 v4; // rdi
  int NumBones; // r14d
  __int32 v6; // r12d
  signed __int64 CurrentId; // rsi
  int v8; // edx
  CModelSkeleton::BoneFlags_t v9; // r15d
  int v10; // edx
  double v11; // rax
  int v12; // edx
  void *v13; // rsp
  unsigned __int64 v14; // r13
  __int64 v15; // rdi
  uint32 *v16; // rdx
  int m_nBoneCount; // eax
  matrix3x4a_t *m_pTransforms; // rcx
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  bool v21; // zf
  int m_depth; // eax
  const ResourceBindingBase_t *v23; // rax
  const CModel *v24; // rdi
  matrix3x4a_t *m_pBones; // rsi
  const float *v26; // rcx
  uint32 *m_pReadableBones; // rsi
  CompositeParentSpaceTransformType_t *v28; // rdx
  unsigned __int64 v29; // r8
  uint32 v30; // eax
  unsigned int v31; // ecx
  uint32 v32; // r14d
  signed __int64 v33; // rsi
  double v34; // xmm0_8
  double v35; // xmm0_8
  unsigned __int32 v36; // edx
  const CModel *const *v37; // rax
  char *v38; // r13
  const ResourceBindingBase_t *v39; // rax
  double v40; // xmm0_8
  double m_CalcAnimationState_nBoneCount_low; // xmm0_8
  double v42; // xmm1_8
  double m_CalcAnimationState_nCallCount_low; // xmm2_8
  double v44; // xmm0_8
  double m_CalcParentSpaceState_nBoneCount_low; // xmm0_8
  double v46; // xmm1_8
  double m_CalcParentSpaceState_nCallCount_low; // xmm2_8
  double v48; // xmm0_8
  double m_CalcWorldSpaceBones_nBoneCount_low; // xmm0_8
  double v50; // xmm1_8
  double m_CalcWorldSpaceBones_nCallCount_low; // xmm2_8
  double v52; // xmm0_8
  double v53; // xmm0_8
  int v54; // [rsp+8h] [rbp-88h]
  int v55; // [rsp+Ch] [rbp-84h]
  CompositeParentSpaceTransformType_t transformType[2]; // [rsp+10h] [rbp-80h] BYREF
  CAutoLockT<CThreadFastMutex,CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2774; // [rsp+18h] [rbp-78h]
  CWritableBoneAccessor<matrix3x4a_t> worldSpaceSimTransforms; // [rsp+20h] [rbp-70h] BYREF
  CBoneAccessor<CTransform> parentSpaceTransforms; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+58h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  NumBones = CSkeletonInstance::GetNumBones(this);
  if ( NumBones != 0 && this->m_modelState.m_nTotalBoneCount != 0 )
  {
    v6 = boneFlags & 0xFFFFF;
    if ( (v6 & this->m_modelState.m_nBoneFlagsAssociatedWithCloth) != 0 )
      v6 |= 8u;
    if ( (v6 & this->m_compositeWorldSpaceValidBoneFlags.m_value) != v6 )
    {
      generated_id_2774.m_lock = &this->m_calcAbsPositionMutex;
      CurrentId = ThreadGetCurrentId(v4);
      if ( CurrentId != this->m_calcAbsPositionMutex.m_ownerID
        && _InterlockedCompareExchange64(&this->m_calcAbsPositionMutex, CurrentId, 0) != 0 )
      {
        _mm_pause();
        CThreadFastMutex::Lock(generated_id_2774.m_lock, CurrentId, 0);
      }
      else
      {
        ++this->m_calcAbsPositionMutex.m_depth;
      }
      if ( (v6 & this->m_compositeWorldSpaceValidBoneFlags.m_value) != v6 )
      {
        if ( v6 != 0xFFFFF && (v6 & 0xC0000) != 0 )
          CModelState::ComputeHierarchyBoneFlags(&this->m_modelState);
        v8 = NumBones + 62;
        v9 = v6 | this->m_compositeWorldSpaceValidBoneFlags.m_value;
        if ( NumBones + 31 >= 0 )
          v8 = NumBones + 31;
        v10 = v8 >> 5;
        *&v11 = v10;
        v12 = 4 * v10;
        *transformType = v11;
        v13 = alloca(((v12 + 31) & 0xFFFFFFF0) + 16LL);
        v14 = transformType & 0xFFFFFFFFFFFFFFEFLL;
        if ( v12 < 0 )
          __debugbreak();
        memset((transformType & 0xFFFFFFFFFFFFFFEFLL), 0, v12);
        BoneFlagsToBitVec(
          v9,
          this->m_modelState.m_pBoneFlagsIncludingChildren,
          NumBones,
          (transformType & 0xFFFFFFFFFFFFFFEFLL));
        if ( (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication) != 0 && g_boneSetupStatsRecorder.m_bRecording )
        {
          m_pReadableBones = this->m_modelState.m_simulationState.m_pReadableBones;
          v28 = (transformType & 0xFFFFFFFFFFFFFFEFLL);
          v54 = GetEndMask(int)::bitStringEndMasks[NumBones & 0x1F];
          v29 = v14 + 4LL * *transformType - 4;
          if ( v14 >= v29 )
          {
            v55 = 0;
          }
          else
          {
            LODWORD(v15) = 0;
            do
            {
              v30 = *m_pReadableBones;
              ++v28;
              ++m_pReadableBones;
              v31 = (*(v28 - 1) & ~v30) - (((*(v28 - 1) & ~v30) >> 1) & 0x55555555);
              v15 = ((16843009
                    * (((v31 & 0x33333333)
                      + ((v31 >> 2) & 0x33333333)
                      + (((v31 & 0x33333333) + ((v31 >> 2) & 0x33333333)) >> 4))
                     & 0xF0F0F0F)) >> 24)
                  + v15;
            }
            while ( v29 > v28 );
            v55 = v15;
          }
          v32 = *m_pReadableBones;
          transformType[0] = *v28;
          v33 = ThreadGetCurrentId(v15);
          if ( v33 == g_boneSetupStatsRecorder.m_mutex.m_ownerID
            || _InterlockedCompareExchange64(&g_boneSetupStatsRecorder.m_mutex.m_ownerID, v33, 0) == 0 )
          {
            ++g_boneSetupStatsRecorder.m_mutex.m_depth;
          }
          else
          {
            _mm_pause();
            CThreadFastMutex::Lock(&g_boneSetupStatsRecorder.m_mutex, v33, 0);
          }
          if ( !g_boneSetupStatsRecorder.m_bRecording )
          {
            if ( --g_boneSetupStatsRecorder.m_mutex.m_depth != 0 )
              goto LABEL_19;
            goto LABEL_54;
          }
          v35 = Plat_FloatTime(v34);
          g_boneSetupStatsRecorder.m_bRecording = g_boneSetupStatsRecorder.m_flStopTime > v35;
          if ( g_boneSetupStatsRecorder.m_flStopTime <= v35 )
          {
            *transformType = g_boneSetupStatsRecorder.m_flStopTime - g_boneSetupStatsRecorder.m_flStartTime;
            *&v40 = Msg("\n################################################################################\n\n").m128_u64[0];
            Msg("Bone Setup Stats:\n\n", v40);
            Msg("Recording duration: %f seconds\n", *transformType);
            Msg("Function              %10s %10s %10s %10s\n", "Num Bones", "Num Calls", "Bone/Call", "Bone/Sec");
            if ( (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 0x8000000000000000LL) != 0LL )
              m_CalcAnimationState_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 1
                                                   | (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount >> 1))
                                                  + (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount & 1
                                                   | (g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount >> 1));
            else
              m_CalcAnimationState_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount);
            v42 = m_CalcAnimationState_nBoneCount_low / *transformType;
            if ( g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount != 0 )
            {
              if ( (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 0x8000000000000000LL) != 0LL )
                m_CalcAnimationState_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 1
                                                     | (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount >> 1))
                                                    + (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount & 1
                                                     | (g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount >> 1));
              else
                m_CalcAnimationState_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount);
              v44 = m_CalcAnimationState_nBoneCount_low / m_CalcAnimationState_nCallCount_low;
            }
            else
            {
              v44 = 0.0;
            }
            Msg(
              "%21s %10llu %10llu %10.1f %10.1f\n",
              "CalcAnimationState  ",
              g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount,
              g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount,
              v44,
              v42);
            if ( (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 0x8000000000000000LL) != 0LL )
              m_CalcParentSpaceState_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 1
                                                     | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount >> 1))
                                                    + (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount & 1
                                                     | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount >> 1));
            else
              m_CalcParentSpaceState_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount);
            v46 = m_CalcParentSpaceState_nBoneCount_low / *transformType;
            if ( g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount != 0 )
            {
              if ( (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 0x8000000000000000LL) != 0LL )
                m_CalcParentSpaceState_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 1
                                                       | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount >> 1))
                                                      + (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount & 1
                                                       | (g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount >> 1));
              else
                m_CalcParentSpaceState_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount);
              v48 = m_CalcParentSpaceState_nBoneCount_low / m_CalcParentSpaceState_nCallCount_low;
            }
            else
            {
              v48 = 0.0;
            }
            Msg(
              "%21s %10llu %10llu %10.1f %10.1f\n",
              "CalcParentSpaceState",
              g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount,
              g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount,
              v48,
              v46);
            if ( (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 0x8000000000000000LL) != 0LL )
              m_CalcWorldSpaceBones_nBoneCount_low = (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 1
                                                    | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount >> 1))
                                                   + (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount & 1
                                                    | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount >> 1));
            else
              m_CalcWorldSpaceBones_nBoneCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount);
            v50 = m_CalcWorldSpaceBones_nBoneCount_low / *transformType;
            if ( g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount != 0 )
            {
              if ( (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 0x8000000000000000LL) != 0LL )
                m_CalcWorldSpaceBones_nCallCount_low = (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 1
                                                      | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount >> 1))
                                                     + (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount & 1
                                                      | (g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount >> 1));
              else
                m_CalcWorldSpaceBones_nCallCount_low = SLODWORD(g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount);
              v52 = m_CalcWorldSpaceBones_nBoneCount_low / m_CalcWorldSpaceBones_nCallCount_low;
            }
            else
            {
              v52 = 0.0;
            }
            *&v53 = Msg(
                      "%21s %10llu %10llu %10.1f %10.1f\n",
                      "CalcWorldSpaceBones ",
                      g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount,
                      g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount,
                      v52,
                      v50).m128_u64[0];
            Msg("\n################################################################################\n\n", v53);
            g_boneSetupStatsRecorder.m_bRecording = 0;
            g_boneSetupStatsRecorder.m_flStartTime = 0.0;
            g_boneSetupStatsRecorder.m_flStopTime = 0.0;
            g_boneSetupStatsRecorder.m_CalcAnimationState_nBoneCount = 0;
            g_boneSetupStatsRecorder.m_CalcParentSpaceState_nBoneCount = 0;
            g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount = 0;
            g_boneSetupStatsRecorder.m_CalcAnimationState_nCallCount = 0;
            g_boneSetupStatsRecorder.m_CalcParentSpaceState_nCallCount = 0;
            g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount = 0;
          }
          else
          {
            ++g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nCallCount;
            v36 = (~v32 & transformType[0] & v54) - (((~v32 & transformType[0] & v54) >> 1) & 0x55555555);
            g_boneSetupStatsRecorder.m_CalcWorldSpaceBones_nBoneCount += (v55
                                                                        + ((16843009
                                                                          * (((v36 & 0x33333333)
                                                                            + ((v36 >> 2) & 0x33333333)
                                                                            + (((v36 & 0x33333333)
                                                                              + ((v36 >> 2) & 0x33333333)) >> 4))
                                                                           & 0xF0F0F0F)) >> 24));
          }
          if ( --g_boneSetupStatsRecorder.m_mutex.m_depth == 0 )
LABEL_54:
            ThreadInterlockedExchange64(&g_boneSetupStatsRecorder.m_mutex, 0);
        }
LABEL_19:
        CSkeletonInstance::CalcParentSpaceState(this, v9);
        v16 = this->m_modelState.m_simulationState.m_pReadableBones;
        worldSpaceSimTransforms.m_bOwnsMemory = 0;
        m_nBoneCount = this->m_modelState.m_simulationState.m_nBoneCount;
        m_pTransforms = this->m_modelState.m_simulationState.m_pTransforms;
        worldSpaceSimTransforms.m_pReadableBones = v16;
        worldSpaceSimTransforms.m_nBones = m_nBoneCount;
        worldSpaceSimTransforms.m_pBones = m_pTransforms;
        CCompositeParentSpaceState::GetBones(&parentSpaceTransforms, &this->m_modelState.m_compositeParentSpaceState);
        transformType[0] = *(&this->m_modelState.m_compositeParentSpaceState + 59);
        if ( this->m_bDirtyAbsTransform.m_value )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
        m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
        m_pData = 0;
        if ( m_pBinding != 0 )
          m_pData = m_pBinding->m_pData;
        ComputeWorldSpaceBonesFromParentSpaceBone(
          m_pData,
          &this->m_mNodeToWorld,
          &parentSpaceTransforms,
          transformType[0],
          &worldSpaceSimTransforms);
        CSkeletonInstance::ApplyIKBones(
          this,
          (transformType & 0xFFFFFFFFFFFFFFEFLL),
          &parentSpaceTransforms,
          &worldSpaceSimTransforms);
        if ( `guard variable for'CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable == 0
          && __cxa_guard_acquire(&`guard variable for'CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable) != 0 )
        {
          ConVarRef::ConVarRef(
            &CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable,
            "skel_constraints_enable");
          __cxa_guard_release(&`guard variable for'CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable);
        }
        if ( this->m_modelState.m_bHasFlexProceduralBones )
        {
          if ( CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable.m_pConVarState->m_Value.m_nValue == 0 )
          {
LABEL_26:
            v21 = !parentSpaceTransforms.m_bOwnsMemory;
            this->m_compositeWorldSpaceValidBoneFlags.m_value |= v6;
            if ( !v21 )
            {
              if ( parentSpaceTransforms.m_pBones != 0 )
                operator delete[](parentSpaceTransforms.m_pBones);
              if ( parentSpaceTransforms.m_pReadableBones != 0 )
                operator delete[](parentSpaceTransforms.m_pReadableBones);
            }
            memset(&parentSpaceTransforms, 0, 19);
            if ( worldSpaceSimTransforms.m_bOwnsMemory )
            {
              if ( worldSpaceSimTransforms.m_pBones != 0 )
                operator delete[](worldSpaceSimTransforms.m_pBones);
              if ( worldSpaceSimTransforms.m_pReadableBones != 0 )
                operator delete[](worldSpaceSimTransforms.m_pReadableBones);
            }
            m_depth = this->m_calcAbsPositionMutex.m_depth;
            memset(&worldSpaceSimTransforms, 0, 19);
            this->m_calcAbsPositionMutex.m_depth = m_depth - 1;
            if ( this->m_calcAbsPositionMutex.m_depth == 0 )
              ThreadInterlockedExchange64(generated_id_2774.m_lock, 0);
            return;
          }
          v37 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
          if ( v37 != 0 )
          {
            v38 = this->m_modelState.m_animationState.m_pData;
            v26 = &v38[CModel::GetAnimationStateOffset(
                         *v37,
                         AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS)];
          }
          else
          {
            v26 = 0;
          }
          v39 = this->m_modelState.m_hModel.m_Value.m_pBinding;
          m_pBones = worldSpaceSimTransforms.m_pBones;
          if ( v39 != 0 )
            v24 = v39->m_pData;
          else
            v24 = 0;
        }
        else
        {
          if ( !this->m_modelState.m_bHasProceduralBones
            || CSkeletonInstance::CalcWorldSpaceBones(CModelSkeleton::BoneFlags_t)::skel_constraints_enable.m_pConVarState->m_Value.m_nValue == 0 )
          {
            goto LABEL_26;
          }
          v23 = this->m_modelState.m_hModel.m_Value.m_pBinding;
          v24 = 0;
          m_pBones = worldSpaceSimTransforms.m_pBones;
          if ( v23 != 0 )
            v24 = v23->m_pData;
          v26 = 0;
        }
        CModel::CalcProceduralBones(v24, m_pBones, 0, v26);
        goto LABEL_26;
      }
      if ( --this->m_calcAbsPositionMutex.m_depth == 0 )
        ThreadInterlockedExchange64(generated_id_2774.m_lock, 0);
    }
  }
}


// CSkeletonInstance::CalcWorldSpaceAttachments  (line 2845, @0x00000000020cb600, libserver.so)  // inlines: CAutoLockT, CBoneAccessor, CalcAbsolutePosition, Cleanup, GetModelData, GetWorldSpaceAttachmentsForModify, GetWorldSpaceBones, GetWorldSpaceState, Load, Lock, NodeToWorldTransform, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator const RuntimeClass_t*, ~CAutoLockT, ~CBoneAccessor
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), CSkeletonInstance::CalcWorldSpaceBones, CModel::SetupAttachments, operator delete [], ThreadInterlockedExchange64, CGameSceneNode::CalcAbsolutePositionWhenDirty, CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CSkeletonInstance::GetWorldSpaceAttachments, CSkeletonInstance::GetAttachment
void __fastcall CSkeletonInstance::CalcWorldSpaceAttachments(CSkeletonInstance *const this)
{
  CThreadFastMutex *p_m_calcAbsPositionMutex; // r12
  signed __int64 CurrentId; // rsi
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r13
  matrix3x4a_t *v6; // r14
  int m_depth; // eax

  if ( !this->m_bDirtyAttachments.m_value )
    return;
  p_m_calcAbsPositionMutex = &this->m_calcAbsPositionMutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId == this->m_calcAbsPositionMutex.m_ownerID
    || _InterlockedCompareExchange64(p_m_calcAbsPositionMutex, CurrentId, 0) == 0 )
  {
    ++this->m_calcAbsPositionMutex.m_depth;
  }
  else
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_calcAbsPositionMutex, CurrentId, 0);
  }
  if ( !this->m_bDirtyAttachments.m_value )
  {
    if ( --this->m_calcAbsPositionMutex.m_depth != 0 )
      return;
LABEL_17:
    ThreadInterlockedExchange64(p_m_calcAbsPositionMutex, 0);
    return;
  }
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    m_pData = m_pBinding->m_pData;
    if ( m_pBinding->m_pData != 0 )
    {
      v6 = &this->m_modelState.m_simulationState.m_pTransforms[this->m_modelState.m_simulationState.m_nBoneCount];
      if ( v6 != 0 )
      {
        if ( this->m_bDirtyAbsTransform.m_value )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
        CSkeletonInstance::CalcWorldSpaceBones(this, CModelSkeleton::BoneFlags_t::FLAG_ATTACHMENT);
        CModel::SetupAttachments(m_pData, this->m_modelState.m_simulationState.m_pTransforms, &this->m_mNodeToWorld, v6);
      }
    }
  }
  m_depth = this->m_calcAbsPositionMutex.m_depth;
  this->m_bDirtyAttachments.m_value = 0;
  this->m_calcAbsPositionMutex.m_depth = m_depth - 1;
  if ( this->m_calcAbsPositionMutex.m_depth == 0 )
    goto LABEL_17;
}


// CSkeletonInstance::GetRootBoneMergeBone  (line 2892, @0x00000000020b8d60, libserver.so)  // inlines: GetBoneMergeInfo
int __fastcall CSkeletonInstance::GetRootBoneMergeBone(const CSkeletonInstance *const this)
{
  BoneMergeInfo_t *m_pBoneMergeList; // rax
  bone_merge_list_t *m_pList; // rdx
  bone_merge_list_t *v3; // rax

  m_pBoneMergeList = this->m_pBoneMergeList;
  if ( m_pBoneMergeList == 0 )
    return -1;
  m_pList = m_pBoneMergeList->m_pList;
  v3 = 0;
  if ( this->m_nHierarchyType == 1 )
    v3 = m_pList;
  return v3->m_nDestIndex;
}


// CSkeletonInstance::GetRootBoneToWorldTransform  (line 2900, @0x00000000020cd240, libserver.so)  // inlines: CalcAbsolutePosition, GetBoneMergeInfo, GetRootBoneMergeBone, Load, NodeToWorldTransform
// calls: CSkeletonInstance::GetNumBones, CSkeletonInstance::GetWorldSpaceTransform, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CSkeletonInstance::GetRootBoneToWorldTransform(
        const CSkeletonInstance *const this,
        matrix3x4a_t *pRootBoneToWorld)
{
  int m_nDestIndex; // esi
  BoneMergeInfo_t *m_pBoneMergeList; // rdx

  if ( CSkeletonInstance::GetNumBones(this) != 0
    && ((m_nDestIndex = 0, this->m_nHierarchyType != 1)
     || (m_pBoneMergeList = this->m_pBoneMergeList) != 0
     && (m_nDestIndex = m_pBoneMergeList->m_pList[0].m_nDestIndex) >= 0) )
  {
    *pRootBoneToWorld = *CSkeletonInstance::GetWorldSpaceTransform(this, m_nDestIndex);
  }
  else
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
    *&pRootBoneToWorld->m_flMatVal[0][0] = *&this->m_mNodeToWorld.m_flMatVal[0][0];
    *&pRootBoneToWorld->m_flMatVal[0][2] = *&this->m_mNodeToWorld.m_flMatVal[0][2];
    *&pRootBoneToWorld->m_flMatVal[1][0] = *&this->m_mNodeToWorld.m_flMatVal[1][0];
    *&pRootBoneToWorld->m_flMatVal[1][2] = *&this->m_mNodeToWorld.m_flMatVal[1][2];
    *&pRootBoneToWorld->m_flMatVal[2][0] = *&this->m_mNodeToWorld.m_flMatVal[2][0];
    *&pRootBoneToWorld->m_flMatVal[2][2] = *&this->m_mNodeToWorld.m_flMatVal[2][2];
  }
}


// CSkeletonInstance::GetBoneMergeBoneToRoot  (line 2925, @0x00000000020ba3b0, libserver.so)  // inlines: FromUntypedHandleUnchecked, GetAnimationData<(AnimationStateType_t)0>, GetAnimationState, GetAnimationStateData<(AnimationStateType_t)0>, GetBoneMergeCount, GetBoneMergeInfo, GetModel, GetRootToBoneMergeTransformForModify, InitUntypedUnchecked, operator CWeakHandle<InfoForResourceTypeCModel>, operator==
// calls: CSkeletonInstance::CalcAnimationState, CModel::GetAnimationStateOffset, CSkeletonInstance::GetNumBones
// callers: CGameSceneNode::ComputeNodeToWorldForHierarchy
void __fastcall CSkeletonInstance::GetBoneMergeBoneToRoot(
        const CSkeletonInstance *const this,
        matrix3x4a_t *pBoneMergeBoneToRoot)
{
  BoneMergeInfo_t *m_pBoneMergeList; // rbx
  char v5; // al
  const CModel *const *m_pBinding; // rdx
  char *m_pData; // r14
  char *v8; // r9
  void (__fastcall *v9)(IAnimationSystem *, const ResourceBindingBase_t **, __int64, bone_merge_list_t *, _QWORD, char *, BoneMergeInfo_t *); // r15
  unsigned int NumBones; // eax
  BoneMergeInfo_t *v11; // rsi
  bone_merge_list_t *m_pList; // rcx
  __int64 m_nCount; // rdx
  __int64 v14; // rax
  char *v15; // [rsp+8h] [rbp-48h]
  const ResourceBindingBase_t *v16; // [rsp+10h] [rbp-40h] BYREF

  if ( this->m_pBoneMergeList != 0 )
  {
    m_pBoneMergeList = 0;
    if ( this->m_nHierarchyType == 1 )
      m_pBoneMergeList = this->m_pBoneMergeList;
    v5 = *(&this->CGameSceneNode + 249);
    if ( (v5 & 4) != 0 )
    {
      *(&this->CGameSceneNode + 249) = v5 & 0xFB;
      CSkeletonInstance::CalcAnimationState(this, CModelSkeleton::BoneFlags_t::FLAG_BONE_MERGE_WRITE);
      m_pBinding = this->m_modelState.m_animationState.m_hModel.m_pBinding;
      if ( m_pBinding != 0 )
      {
        m_pData = this->m_modelState.m_animationState.m_pData;
        v8 = &m_pData[CModel::GetAnimationStateOffset(
                        *m_pBinding,
                        AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
      }
      else
      {
        v8 = 0;
      }
      v15 = v8;
      v9 = *(*g_pAnimationSystem + 232LL);
      NumBones = CSkeletonInstance::GetNumBones(this);
      v11 = this->m_pBoneMergeList;
      m_pList = 0;
      m_nCount = 0;
      if ( v11 != 0 && this->m_nHierarchyType == 1 )
      {
        m_pList = v11->m_pList;
        m_nCount = v11->m_nCount;
      }
      v16 = this->m_modelState.m_hModel.m_Value.m_pBinding;
      v9(g_pAnimationSystem, &v16, m_nCount, m_pList, NumBones, v15, m_pBoneMergeList);
    }
    *&pBoneMergeBoneToRoot->m_flMatVal[0][0] = *&m_pBoneMergeList->m_boneMergeBoneToRoot.m_flMatVal[0][0];
    *&pBoneMergeBoneToRoot->m_flMatVal[0][2] = *&m_pBoneMergeList->m_boneMergeBoneToRoot.m_flMatVal[0][2];
    *&pBoneMergeBoneToRoot->m_flMatVal[1][0] = *&m_pBoneMergeList->m_boneMergeBoneToRoot.m_flMatVal[1][0];
    *&pBoneMergeBoneToRoot->m_flMatVal[1][2] = *&m_pBoneMergeList->m_boneMergeBoneToRoot.m_flMatVal[1][2];
    *&pBoneMergeBoneToRoot->m_flMatVal[2][0] = *&m_pBoneMergeList->m_boneMergeBoneToRoot.m_flMatVal[2][0];
    *&pBoneMergeBoneToRoot->m_flMatVal[2][2] = *&m_pBoneMergeList->m_boneMergeBoneToRoot.m_flMatVal[2][2];
  }
  else
  {
    *&pBoneMergeBoneToRoot->m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
    *&pBoneMergeBoneToRoot->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
    *&pBoneMergeBoneToRoot->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
    v14 = *&g_MatrixIdentity.m_flMatVal[2][2];
    *&pBoneMergeBoneToRoot->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
    *&pBoneMergeBoneToRoot->m_flMatVal[2][2] = v14;
  }
}


// CSkeletonInstance::GetWorldSpaceAttachments  (line 2953, @0x00000000020cb7e0, libserver.so)  // inlines: GetWorldSpaceAttachments
// calls: CSkeletonInstance::CalcWorldSpaceAttachments
const matrix3x4a_t *__fastcall CSkeletonInstance::GetWorldSpaceAttachments(const CSkeletonInstance *const this)
{
  CSkeletonInstance::CalcWorldSpaceAttachments(this);
  return &this->m_modelState.m_simulationState.m_pTransforms[this->m_modelState.m_simulationState.m_nBoneCount];
}


// CSkeletonInstance::CollisionRulesChanged  (line 2959, @0x00000000020b8d90, libserver.so)
// calls: CPhysicsGameSystem::UpdateHierarchyConstraint
// callers: CBaseEntity::CollisionRulesChanged, CGameSceneNode::UpdateEntityForHierarchyChange
void __fastcall CSkeletonInstance::CollisionRulesChanged(
        CSkeletonInstance *const this,
        const RnCollisionAttr_t *const attribute)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  HPhysicsSoftbody m_hCloth2; // rdi

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 23))(m_pVPhysicsAggregate);
    CPhysicsGameSystem::UpdateHierarchyConstraint(g_pPhysicsGameSystem, this, 0);
  }
  m_hCloth2 = this->m_modelState.m_hCloth2;
  if ( m_hCloth2 != 0 )
    (*(*m_hCloth2 + 872LL))(m_hCloth2, attribute);
}


// CSkeletonInstance::LookupBone  (line 2974, @0x00000000020b9060, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::FindBoneIndex
// callers: CBaseAnimating::LookupBone
int __fastcall CSkeletonInstance::LookupBone(const CSkeletonInstance *const this, const char *pBoneName)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::FindBoneIndex(*m_pBinding, pBoneName);
  else
    return -1;
}


// CSkeletonInstance::GetNumBones  (line 2983, @0x00000000020b9090, libserver.so)  // inlines: operator const RuntimeClass_t*
// calls: CModel::NumBones
// callers: CDecalGameSystem::RenderDebuggingData, CDecalGameSystem::UpdateSkinnedEntityDecals, CBaseAnimating::GetNumBones, CBaseAnimating::GetBoneTransform, CBaseAnimating::GetPhysicsBone, IDebugOverlay::GetSkeletonInstanceWorldTransforms, IDebugOverlay::EntitySkeleton, IDebugOverlay::EntityHitboxes, CBaseAnimating::HitboxToWorldTransforms, CSkeletonInstance::CalcAnimationState, CSkeletonInstance::GetBoneMergeBoneToRoot, CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex (16 total)
int __fastcall CSkeletonInstance::GetNumBones(const CSkeletonInstance *const this)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::NumBones(*m_pBinding);
  else
    return 0;
}


// CModelState::ComputeHierarchyBoneFlags  (line 2991, @0x00000000020b91b0, libserver.so)  // inlines: CAutoLockT, GetBoneMergeCount, GetBoneMergeInfo, Load, Lock, SetBoneFlagsIncludingChildren, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator const RuntimeClass_t*, operator&, operator&=, operator|, operator|=, ~CAutoLockT
// calls: ThreadGetCurrentId, CModelState::ExtendBoneFlags, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), _Unwind_Resume
// callers: CSkeletonInstance::CalcAnimationState, CGameSceneNode::OnSetDormant, CSkeletonInstance::UpdateHierarchyBoneFlags, CSkeletonInstance::CalcWorldSpaceBones, CSkeletonInstance::CalcParentSpaceState, CGameSceneNode::FinalizeHierarchyRecursive, CGameSceneNode::PostInstanceSpawn, CSkeletonInstance::OnHierarchyChanged
bool __fastcall CModelState::ComputeHierarchyBoneFlags(CModelState *const this)
{
  bool m_value; // r12
  signed __int64 CurrentId; // rsi
  bool v5; // r14
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r15
  int16 m_nTotalBoneCount; // cx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  char v12; // r13
  __int64 v13; // rdx
  __int64 i; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  int *v17; // rcx
  char v18; // al
  int v19; // edx
  int *v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx

  m_value = this->m_bHierarchyBoneFlagsDirty.m_value;
  if ( !m_value )
    return 1;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != *(this - 7) && _InterlockedCompareExchange64(this - 7, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(this - 56, CurrentId, 0);
  }
  else
  {
    ++*(this - 12);
  }
  v5 = this->m_bHierarchyBoneFlagsDirty.m_value;
  if ( v5 )
  {
    m_pBinding = this->m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      m_pData = m_pBinding->m_pData;
    else
      m_pData = 0;
    m_nTotalBoneCount = this->m_nTotalBoneCount;
    if ( m_nTotalBoneCount > 0 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = v9;
        ++v10;
        v9 += 4;
        *(this->m_pBoneFlagsIncludingChildren + v11) &= 0xFFF3FFFF;
        m_nTotalBoneCount = this->m_nTotalBoneCount;
      }
      while ( m_nTotalBoneCount > v10 );
    }
    v12 = 0;
    if ( (*(this - 72) & 1) == 0 && (*(this - 69) != 1 || *(this - 28) != 0 && *(this - 69) == 1) )
      v12 = 1;
    if ( m_nTotalBoneCount != 0 )
    {
      v13 = *(this - 28);
      if ( v13 != 0 && *(this - 69) == 1 )
      {
        v23 = *(v13 + 48);
        v24 = v13 + 64;
        if ( v23 > 0 )
        {
          v25 = v13 + ((v23 - 1) << 6) + 128;
          do
          {
            v26 = *(v24 + 4);
            v24 += 64;
            this->m_pBoneFlagsIncludingChildren[v26] |= 0x80000u;
          }
          while ( v24 != v25 );
        }
      }
      for ( i = *(this - 30); i != 0; i = *(i + 88) )
      {
        while ( 1 )
        {
          v15 = (*(*i + 72LL))(i);
          v16 = *(i + 96);
          if ( v16 != 0 )
          {
            v17 = 0;
            if ( *(i + 251) == 1 )
              v17 = (v16 + 64);
          }
          else
          {
            v17 = 0;
          }
          if ( v15 == 0 )
            break;
          v18 = *(v15 + 248);
          if ( (v18 & 1) == 0 && (v18 & 2) == 0 )
            break;
          i = *(i + 88);
          v12 = 0;
          if ( i == 0 )
            goto LABEL_32;
        }
        if ( v17 != 0 && v16 != 0 && *(i + 251) == 1 )
        {
          v19 = *(v16 + 48);
          if ( v19 > 0 )
          {
            v20 = v17;
            v21 = &v17[16 * (v19 - 1) + 16];
            do
            {
              v22 = *v20;
              v20 += 16;
              this->m_pBoneFlagsIncludingChildren[v22] |= 0x40000u;
            }
            while ( v20 != v21 );
          }
        }
      }
    }
LABEL_32:
    CModelState::ExtendBoneFlags(this, m_pData);
    m_value = 0;
    if ( v12 != 0 )
    {
      this->m_bHierarchyBoneFlagsDirty.m_value = 0;
      m_value = v5;
    }
  }
  if ( --*(this - 12) == 0 )
    ThreadInterlockedExchange64(this - 56, 0);
  return m_value;
}


// CModelState::ComputeModelBoneFlags  (line 3076, @0x00000000020bb560, libserver.so)  // inlines: SetBoneFlagsIncludingChildren, V_memset, memset, operator|, operator|=
// calls: CSkeletonInstance::DirtyHierarchyBoneFlags, memset, CModel::boneFlags, CModelState::ExtendBoneFlags
// callers: CModelState::SetupJointState
void __fastcall CModelState::ComputeModelBoneFlags(CModelState *const this, const CModel *pModel)
{
  CSkeletonInstance *v4; // rdi
  __int64 i; // rbx

  v4 = (this - 320);
  if ( *(this - 248) != 0 )
    CSkeletonInstance::DirtyHierarchyBoneFlags(v4);
  memset(this->m_pBoneFlagsIncludingChildren, 0, 4LL * this->m_nTotalBoneCount);
  if ( pModel != 0 )
  {
    for ( i = 0; this->m_nTotalBoneCount > i; ++i )
      this->m_pBoneFlagsIncludingChildren[i] |= CModel::boneFlags(pModel, i);
    CModelState::ExtendBoneFlags(this, pModel);
  }
}


// CModelState::ExtendBoneFlags  (line 3100, @0x00000000020b90c0, libserver.so)  // inlines: SetBoneFlagsIncludingChildren, operator[], operator|, operator|=
// calls: CModel::numikchains, CModel::pIKChain, CModel::boneParent, CModelState::ComputeBoneFlagsAssociatedWithCloth
// callers: CModelState::ComputeHierarchyBoneFlags, CModelState::ComputeModelBoneFlags
void __fastcall CModelState::ExtendBoneFlags(CModelState *const this, const CModel *pModel)
{
  int i; // ebx
  const CAnimIKChain *v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // ebx
  __int64 v9; // r14
  int v10; // eax

  if ( pModel != 0 )
  {
    for ( i = 0; i < CModel::numikchains(pModel); ++i )
    {
      v5 = CModel::pIKChain(pModel, i);
      v6 = 0;
      v7 = 1;
      if ( v5->m_linkArray.m_Size > 1 )
      {
        while ( 1 )
        {
          ++v7;
          this->m_pBoneFlagsIncludingChildren[v5->m_linkArray.m_Memory.m_pMemory[v6 + 1].bone] |= this->m_pBoneFlagsIncludingChildren[v5->m_linkArray.m_Memory.m_pMemory[v6].bone];
          if ( v5->m_linkArray.m_Size <= v7 )
            break;
          ++v6;
        }
      }
    }
    v8 = this->m_nTotalBoneCount - 1;
    v9 = v8;
    if ( v8 >= 0 )
    {
      do
      {
        v10 = CModel::boneParent(pModel, v8);
        if ( v10 >= 0 )
          this->m_pBoneFlagsIncludingChildren[v10] |= this->m_pBoneFlagsIncludingChildren[v9];
        --v8;
        --v9;
      }
      while ( v8 != -1 );
    }
    CModelState::ComputeBoneFlagsAssociatedWithCloth(this);
  }
}


// CModelState::SetupJointState  (line 3137, @0x00000000020bb630, libserver.so)  // inlines: CalcNumIntsForBits, FromUntypedHandleUnchecked, Init, InitUntypedUnchecked, NetworkStateChanged, ResourceHandleToData<InfoForResourceTypeCModel>, Set, Shutdown, V_memset, memset, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator int, operator=<long long unsigned int>, operator==, operator==<CWeakHandle<InfoForResourceTypeCModel> >
// calls: CAnimationState::Init, operator delete [], CModel::GetAnimationStateCount, CModel::GetNumAttachments, operator new [], SetIdentityMatrix, memset, CModelState::ComputeModelBoneFlags, CModelState::SetBindPose, CModel::GetDefaultMeshGroupMask
// callers: CSkeletonInstance::Activate, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
void __fastcall CModelState::SetupJointState(CModelState *const this)
{
  const CModel *const *m_pBinding; // rax
  matrix3x4a_t *m_pTransforms; // rdi
  const ResourceBindingBase_t *v4; // r13
  uint32 *m_pReadableBones; // rdi
  const CModel *m_pData; // r12
  int NumAttachments; // eax
  int v8; // eax
  size_t v9; // rdi
  matrix3x4a_t *v10; // rax
  int m_nTotalTransformCount; // r8d
  __int64 v12; // r13
  int v13; // r12d
  matrix3x4a_t *v14; // rdi
  matrix3x4_t *v15; // rdi
  int m_nBoneCount; // eax
  int v17; // edx
  int v18; // eax
  unsigned __int64 v19; // rdx
  size_t v20; // r12
  size_t v21; // rdi
  uint32 *v22; // rax
  const ResourceBindingBase_t *v23; // rax
  const CModel *v24; // r12
  CModelSkeleton::BoneFlags_t *m_pBoneFlagsIncludingChildren; // rdi
  unsigned __int64 m_nTotalBoneCount; // rax
  size_t v27; // rdi
  MeshGroupMask_t DefaultMeshGroupMask; // r12
  HModel hModel; // [rsp+0h] [rbp-30h] BYREF

  m_pBinding = this->m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    if ( this->m_MeshGroupMask.m_Value == 0 )
    {
      DefaultMeshGroupMask = CModel::GetDefaultMeshGroupMask(*m_pBinding);
      if ( DefaultMeshGroupMask != this->m_MeshGroupMask.m_Value )
      {
        (*(this->_vptr_CModelState + 2))(this, 320, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_MeshGroupMask.m_Value = DefaultMeshGroupMask;
      }
      m_pBinding = this->m_hModel.m_Value.m_pBinding;
    }
    hModel.m_pBinding = m_pBinding;
    CAnimationState::Init(&this->m_animationState, &hModel);
    hModel.m_pBinding = this->m_hModel.m_Value.m_pBinding;
    CAnimationState::Init(&this->m_compositeParentSpaceState, &hModel);
    m_pTransforms = this->m_simulationState.m_pTransforms;
    v4 = this->m_hModel.m_Value.m_pBinding;
    if ( m_pTransforms != 0 )
    {
      operator delete[](m_pTransforms);
      this->m_simulationState.m_pTransforms = 0;
    }
    m_pReadableBones = this->m_simulationState.m_pReadableBones;
    if ( m_pReadableBones != 0 )
    {
      operator delete[](m_pReadableBones);
      this->m_simulationState.m_pReadableBones = 0;
    }
    this->m_simulationState.m_nBoneCount = 0;
    m_pData = 0;
    this->m_simulationState.m_nAttachmentCount = 0;
    this->m_simulationState.m_nTotalTransformCount = 0;
    if ( v4 != 0 && v4->m_nRefCount.m_value > 0 )
      m_pData = v4->m_pData;
    this->m_simulationState.m_nBoneCount = CModel::GetAnimationStateCount(
                                             m_pData,
                                             AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
    NumAttachments = CModel::GetNumAttachments(m_pData);
    this->m_simulationState.m_nAttachmentCount = NumAttachments;
    v8 = this->m_simulationState.m_nBoneCount + NumAttachments;
    this->m_simulationState.m_nTotalTransformCount = v8;
    if ( v8 != 0 )
    {
      v9 = -1;
      if ( v8 <= 0x2A8000000000000LL )
        v9 = 48LL * v8;
      v10 = operator new[](v9);
      m_nTotalTransformCount = this->m_simulationState.m_nTotalTransformCount;
      v12 = 0;
      v13 = 0;
      this->m_simulationState.m_pTransforms = v10;
      v14 = v10;
      if ( m_nTotalTransformCount > 0 )
      {
        while ( 1 )
        {
          v15 = &v14[v12];
          ++v13;
          ++v12;
          SetIdentityMatrix(v15);
          if ( v13 >= this->m_simulationState.m_nTotalTransformCount )
            break;
          v14 = this->m_simulationState.m_pTransforms;
        }
      }
      m_nBoneCount = this->m_simulationState.m_nBoneCount;
      v17 = m_nBoneCount + 62;
      v18 = m_nBoneCount + 31;
      if ( v18 >= 0 )
        v17 = v18;
      v19 = v17 >> 5;
      if ( v19 <= 0x1FC0000000000000LL )
      {
        v21 = 4 * v19;
        v20 = 4 * v19;
      }
      else
      {
        v20 = 4 * v19;
        v21 = -1;
      }
      v22 = operator new[](v21);
      this->m_simulationState.m_pReadableBones = v22;
      memset(v22, 0, v20);
    }
    v23 = this->m_hModel.m_Value.m_pBinding;
    if ( v23 != 0 )
      v24 = v23->m_pData;
    else
      v24 = 0;
    m_pBoneFlagsIncludingChildren = this->m_pBoneFlagsIncludingChildren;
    if ( m_pBoneFlagsIncludingChildren != 0 )
      operator delete[](m_pBoneFlagsIncludingChildren);
    m_nTotalBoneCount = this->m_nTotalBoneCount;
    v27 = -1;
    if ( m_nTotalBoneCount <= 0x1FC0000000000000LL )
      v27 = 4 * m_nTotalBoneCount;
    this->m_pBoneFlagsIncludingChildren = operator new[](v27);
    CModelState::ComputeModelBoneFlags(this, v24);
    (*(*(this - 40) + 96LL))(this - 320);
    (*(*(this - 40) + 104LL))(this - 320);
    (*(*(this - 40) + 112LL))(this - 320);
    CModelState::SetBindPose(this);
  }
}


// CModelState::CleanupJointState  (line 3173, @0x00000000020ba530, libserver.so)  // inlines: Shutdown
// calls: operator delete [], CAnimationState::Shutdown
// callers: CModelState::~CModelState, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
void __fastcall CModelState::CleanupJointState(CModelState *const this)
{
  matrix3x4a_t *m_pTransforms; // rdi
  uint32 *m_pReadableBones; // rdi
  CModelSkeleton::BoneFlags_t *m_pBoneFlagsIncludingChildren; // rdi

  m_pTransforms = this->m_simulationState.m_pTransforms;
  if ( m_pTransforms != 0 )
  {
    operator delete[](m_pTransforms);
    this->m_simulationState.m_pTransforms = 0;
  }
  m_pReadableBones = this->m_simulationState.m_pReadableBones;
  if ( m_pReadableBones != 0 )
  {
    operator delete[](m_pReadableBones);
    this->m_simulationState.m_pReadableBones = 0;
  }
  this->m_simulationState.m_nBoneCount = 0;
  this->m_simulationState.m_nAttachmentCount = 0;
  this->m_simulationState.m_nTotalTransformCount = 0;
  CAnimationState::Shutdown(&this->m_compositeParentSpaceState);
  CAnimationState::Shutdown(&this->m_animationState);
  m_pBoneFlagsIncludingChildren = this->m_pBoneFlagsIncludingChildren;
  if ( m_pBoneFlagsIncludingChildren != 0 )
    operator delete[](m_pBoneFlagsIncludingChildren);
  this->m_pBoneFlagsIncludingChildren = 0;
}


// CModelState::DoSetupPhysics  (line 3183, @0x00000000020d0990, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, CalcAbsolutePosition, EnterScope, ExitScope, GetAbsOrigin, GetClassNameAsCStr, GetElapsed, GetEntityNameAsCStr, GetOwnerEntity, GetTimebaseRegister, InTargetThread, IsEnabled, Load, PLAT_CPU_TIME, String, ~CMicroProfilerGuard, ~CVProfScope
// calls: CModelState::SetupPhysics, ThreadGetCurrentId, Warning, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CBaseModelEntity::SetCollisionBoundsFromCurrentModel, CGameSceneNode::CalcAbsolutePositionWhenDirty, CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// callers: CModelState::SetScale, CSkeletonInstance::SetupPhysics, CModelState::SetupModel, CModelState::OnMeshGroupMaskChanged
// strings: "CModelState::SetupModel( %s '%s' @{%g,%g,%g}) cannot look at solid type because the entit, "CModelState::DoSetupPhysics", "Server Physics"
void __fastcall CModelState::DoSetupPhysics(CModelState *const this, CSkeletonInstance *pInstance)
{
  int m_enabled; // r11d
  CBaseModelEntity *m_pOwner; // r13
  CCollisionProperty *m_pCollision; // rdi
  char v7; // r14
  SolidType_t v8; // dl
  unsigned __int64 v9; // r12
  ThreadId_t v10; // r13
  uint64 v11; // rcx
  ThreadId_t m_TargetThreadId; // r14
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  bool VProf_3185; // [rsp+Fh] [rbp-31h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_3185 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v13 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CModelState::DoSetupPhysics" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CModelState::DoSetupPhysics",
                       0,
                       "Server Physics",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    v14 = __rdtsc();
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v13 + (v14 | (HIDWORD(v14) << 32));
    m_pOwner = pInstance->m_pOwner;
    if ( m_pOwner != 0 )
      goto LABEL_3;
LABEL_16:
    if ( pInstance->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(pInstance);
    Warning(
      "CModelState::SetupModel( %s '%s' @{%g,%g,%g}) cannot look at solid type because the entity class is not derived fr"
      "om CBaseEntity\n",
      &stru_10.m_pIdentityChunks[5],
      GetNetworkGroupColor,
      pInstance->m_vecAbsOrigin.x,
      pInstance->m_vecAbsOrigin.y,
      pInstance->m_vecAbsOrigin.z);
    v8 = SolidType_t::SOLID_VPHYSICS;
    v7 = 6;
    goto LABEL_6;
  }
  m_pOwner = pInstance->m_pOwner;
  if ( m_pOwner == 0 )
    goto LABEL_16;
LABEL_3:
  m_pCollision = m_pOwner->m_pCollision;
  if ( m_pCollision != 0 )
  {
    v7 = (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision);
    if ( (v7 - 1) <= 2u || v7 == 6 )
    {
      v8 = v7;
    }
    else
    {
      v8 = SolidType_t::SOLID_CAPSULE;
      if ( v7 != 7 )
      {
        if ( !VProf_3185 )
          return;
        goto LABEL_10;
      }
    }
LABEL_6:
    CModelState::SetupPhysics(this, pInstance, v8);
    if ( v7 == 6 )
      CBaseModelEntity::SetCollisionBoundsFromCurrentModel(m_pOwner);
  }
  if ( !VProf_3185 )
    return;
LABEL_10:
  v9 = __rdtsc();
  if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
  {
    v10 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v10 == ThreadGetCurrentId(m_pCollision) )
    {
      if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
        if ( m_pParent != 0 )
          g_VProfCurrentProfile.m_pCurNode = m_pParent;
        else
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      else
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
    }
  }
  v11 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
  ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v11 - v9 + __rdtsc();
}


// CModelState::OnClothReloaded  (line 3220, @0x00000000020d0650, libserver.so)
// calls: CModelState::ConstructClothBoneMap
// callers: CSkeletonInstance::OnClothReloaded
void __fastcall CModelState::OnClothReloaded(CModelState *const this, HPhysicsSoftbody hSoftbody)
{
  const CFeModel *v3; // rax

  if ( hSoftbody != 0 )
  {
    v3 = (*(*hSoftbody + 64LL))(hSoftbody);
    CModelState::ConstructClothBoneMap(this, v3);
  }
}


// CSkeletonInstance::OnClothReloaded  (line 3229, @0x00000000020dd9f0, libserver.so)  // inlines: CStrongHandle, CWeakHandle, FromUntypedHandleUnchecked, GetHandle, InitUntypedUnchecked, StaticInvalidHandle, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, ~CStrongHandle
// calls: CModel::NumBones, CStrongHandle<InfoForResourceTypeCModel>::Init, CSkeletonInstance::SetModel, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CModelState::OnClothReloaded, _Unwind_Resume
// callers: SoftbodyReloadCallback
void __fastcall CSkeletonInstance::OnClothReloaded(CSkeletonInstance *const this, HPhysicsSoftbody hSoftbody)
{
  const CModel *const *m_pBinding; // rax
  const ResourceBinding_t<InfoForResourceTypeCModel> *v5; // rsi
  HModelStrong hModel; // [rsp+0h] [rbp-40h] BYREF
  HModel v7; // [rsp+10h] [rbp-30h] BYREF

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
  {
    if ( CModel::NumBones(*m_pBinding) != this->m_modelState.m_nTotalBoneCount )
    {
LABEL_4:
      v5 = this->m_modelState.m_hModel.m_Value.m_pBinding;
      hModel.m_pBinding = 0;
      CStrongHandle<InfoForResourceTypeCModel>::Init(&hModel, v5);
      v7.m_pBinding = 0;
      CSkeletonInstance::SetModel(this, &v7);
      v7.m_pBinding = hModel.m_pBinding;
      CSkeletonInstance::SetModel(this, &v7);
      CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&hModel);
      return;
    }
  }
  else if ( this->m_modelState.m_nTotalBoneCount != 0 )
  {
    goto LABEL_4;
  }
  CModelState::OnClothReloaded(&this->m_modelState, hSoftbody);
}


// CModelState::DoSetupCloth  (line 3246, @0x00000000020ba5d0, libserver.so)
void __fastcall CModelState::DoSetupCloth(CModelState *const this, CSkeletonInstance *pInstance)
{
  ;
}


// CModelState::ReadClothSnapshotState  (line 3353, @0x00000000020ecca0, libserver.so)  // inlines: Init, Purge, RemoveAll, operator=, operator[]
// calls: CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::SetCount, CUtlMemory<VectorAligned, int>::Purge
void __fastcall CModelState::ReadClothSnapshotState(
        CModelState *const this,
        CClothSnapshotState *pValue,
        int nCount,
        const IInterpolatedVar *pVar)
{
  HPhysicsSoftbody m_hCloth2; // rdi
  const CFeModel *v7; // r12
  double v8; // xmm0_8
  vec_t v9; // xmm1_4
  vec_t v10; // xmm1_4
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _DWORD *v15; // r8
  _DWORD *v16; // rdx
  int v17; // xmm1_4
  int v18; // xmm0_4
  bool v19; // zf
  double v20; // [rsp+0h] [rbp-30h]

  m_hCloth2 = this->m_hCloth2;
  if ( m_hCloth2 != 0 && (*(*m_hCloth2 + 1192LL))(m_hCloth2, pValue, nCount, pVar) != 0 )
  {
    v7 = (*(*this->m_hCloth2 + 64LL))(this->m_hCloth2);
    CUtlVectorBase<VectorAligned,CUtlMemory<VectorAligned,int>>::SetCount(&pValue->m_NodePos, v7->m_nNodeCount);
    pValue->m_pFeModel = v7;
    pValue->m_hSoftbody = this->m_hCloth2;
    v8 = (*(*this->m_hCloth2 + 216LL))(this->m_hCloth2);
    pValue->m_vAbsOrigin.z = v9;
    *&pValue->m_vAbsOrigin.x = v8;
    v20 = (*(*this->m_hCloth2 + 200LL))(this->m_hCloth2);
    pValue->m_vAbsAngles.z = v10;
    *&pValue->m_vAbsAngles.x = v20;
    v11 = (*(*this->m_hCloth2 + 16LL))(this->m_hCloth2);
    pValue->m_flTime = (*(*v11 + 1240LL))(v11);
    v12 = (*(*this->m_hCloth2 + 272LL))(this->m_hCloth2, 1);
    if ( v7->m_nNodeCount != 0 )
    {
      v13 = 0;
      do
      {
        v14 = v13++;
        v14 *= 16;
        v15 = (v12 + v14);
        v16 = (&pValue->m_NodePos.m_Memory.m_pMemory->x + v14);
        v17 = v15[1];
        v18 = v15[2];
        *v16 = *v15;
        v16[1] = v17;
        v16[2] = v18;
      }
      while ( v7->m_nNodeCount > v13 );
    }
  }
  else
  {
    v19 = (pValue->m_NodePos.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    pValue->m_NodePos.m_Size = 0;
    if ( v19 )
      CUtlMemory<VectorAligned,int>::Purge(&pValue->m_NodePos.m_Memory);
  }
}


// CModelState::WriteClothSnapshotState  (line 3391, @0x00000000020ece20, libserver.so)  // inlines: GetBool, GetInt, Init, SetNodePositionsParams_t, operator=, operator[]
// calls: CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >::SetCount
void __fastcall CModelState::WriteClothSnapshotState(
        CModelState *const this,
        const CClothSnapshotState *pValue,
        int nCount,
        const IInterpolatedVar *pVar,
        IVWriteOpType_t opType)
{
  HPhysicsSoftbody m_hCloth2; // rdi
  vec_t x; // xmm0_4
  VectorAligned *m_pMemory; // rax
  vec_t z; // xmm0_4
  CUtlVector<VectorAligned,CUtlMemory<VectorAligned,int> > *p_m_NodePos; // rdi
  int m_Size; // r13d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rdx
  int v18; // xmm1_4
  int v19; // xmm0_4
  SetNodePositionsParams_t params; // [rsp+0h] [rbp-50h] BYREF

  if ( cloth_iv_store_back.m_pParent->m_Value.m_nValue == 0 )
  {
    p_m_NodePos = &this->m_ClothSnapshot.m_NodePos;
    *&p_m_NodePos[-2].m_Size = pValue->m_pFeModel;
    p_m_NodePos[-2].m_Memory.m_pMemory = pValue->m_hSoftbody;
    *&p_m_NodePos[-2].m_Memory.m_nAllocationCount = pValue->m_vAbsOrigin;
    *(&p_m_NodePos[-1].m_Size + 1) = pValue->m_vAbsAngles;
    p_m_NodePos[-1].m_Memory.m_nAllocationCount = LODWORD(pValue->m_flTime);
    if ( p_m_NodePos != &pValue->m_NodePos )
    {
      m_Size = pValue->m_NodePos.m_Size;
      CUtlVectorBase<VectorAligned,CUtlMemory<VectorAligned,int>>::SetCount(p_m_NodePos, m_Size);
      if ( m_Size > 0 )
      {
        v13 = 0;
        do
        {
          v14 = v13;
          v15 = v13;
          v13 += 16;
          v16 = (&pValue->m_NodePos.m_Memory.m_pMemory->x + v14);
          v17 = (&this->m_ClothSnapshot.m_NodePos.m_Memory.m_pMemory->x + v15);
          v18 = v16[1];
          v19 = v16[2];
          *v17 = *v16;
          v17[1] = v18;
          v17[2] = v19;
        }
        while ( v13 != 16 * ((m_Size - 1) + 1LL) );
      }
    }
    goto LABEL_5;
  }
  if ( pValue->m_NodePos.m_Size > 0 )
  {
    m_hCloth2 = this->m_hCloth2;
    if ( m_hCloth2 != 0 )
    {
      x = pValue->m_vAbsOrigin.x;
      params.nCount = pValue->m_NodePos.m_Size;
      m_pMemory = pValue->m_NodePos.m_Memory.m_pMemory;
      params.nFrame = 1;
      params.vAbsOrigin.x = x;
      params.vAbsOrigin.y = pValue->m_vAbsOrigin.y;
      z = pValue->m_vAbsOrigin.z;
      params.pPos = m_pMemory;
      params.vAbsOrigin.z = z;
      params.vAbsAngles = pValue->m_vAbsAngles;
      (*(*m_hCloth2 + 288LL))(m_hCloth2, &params, nCount, pVar, opType);
LABEL_5:
      (*(*(this - 40) + 88LL))(this - 320, 1024);
    }
  }
}


// CClothSnapshotState::IsIdenticalWithinTolerance  (line 3427, @0x00000000020ba5e0, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
bool __fastcall CClothSnapshotState::IsIdenticalWithinTolerance(
        const CClothSnapshotState *const this,
        const CClothSnapshotState *const other)
{
  int m_Size; // ecx
  bool result; // al
  VectorAligned *m_pMemory; // rax
  VectorAligned *v5; // rdx
  __int64 v6; // rcx

  m_Size = this->m_NodePos.m_Size;
  result = 0;
  if ( m_Size == other->m_NodePos.m_Size )
  {
    if ( m_Size <= 0 )
    {
      return 1;
    }
    else
    {
      m_pMemory = this->m_NodePos.m_Memory.m_pMemory;
      v5 = other->m_NodePos.m_Memory.m_pMemory;
      v6 = &m_pMemory[(m_Size - 1) + 1];
      while ( ((((m_pMemory->x - v5->x) * (m_pMemory->x - v5->x)) + ((m_pMemory->y - v5->y) * (m_pMemory->y - v5->y)))
             + ((m_pMemory->z - v5->z) * (m_pMemory->z - v5->z))) <= 0.0099999998 )
      {
        ++m_pMemory;
        ++v5;
        if ( m_pMemory == v6 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}


// CClothSnapshotState::operator==  (line 3440, @0x00000000020ba670, libserver.so)  // inlines: operator!=, operator[]
bool __fastcall CClothSnapshotState::operator==(
        const CClothSnapshotState *const this,
        const CClothSnapshotState *const other)
{
  bool result; // al
  int m_Size; // r8d
  VectorAligned *m_pMemory; // rdx
  VectorAligned *v5; // rcx
  VectorAligned *v6; // rax
  VectorAligned *v7; // rsi
  __int64 v8; // rdi

  result = 0;
  m_Size = this->m_NodePos.m_Size;
  if ( m_Size == other->m_NodePos.m_Size )
  {
    if ( m_Size <= 0 )
    {
      return 1;
    }
    else
    {
      m_pMemory = other->m_NodePos.m_Memory.m_pMemory;
      v5 = this->m_NodePos.m_Memory.m_pMemory;
      if ( m_pMemory->x == v5->x )
      {
        v6 = m_pMemory + 1;
        v7 = v5 + 1;
        v8 = &m_pMemory[(m_Size - 1) + 1];
        do
        {
          if ( m_pMemory->y != v5->y || m_pMemory->z != v5->z )
            break;
          if ( v6 == v8 )
            return 1;
          m_pMemory = v6;
          v5 = v7;
          ++v6;
          ++v7;
        }
        while ( m_pMemory->x == v5->x );
      }
      return 0;
    }
  }
  return result;
}


// CSkeletonInstance::CopyTransformsToCloth  (line 3454, @0x00000000020ba700, libserver.so)
// callers: CPhysicsGameSystem::PullSoftbodyTransforms
void __fastcall CSkeletonInstance::CopyTransformsToCloth(CSkeletonInstance *const this, HPhysicsSoftbody softbody)
{
  ;
}


// CModelState::SetupModel  (line 3508, @0x00000000020d0e10, libserver.so)  // inlines: GetDormancyType, GetOwnerGameEntity
// calls: CModelState::DoSetupPhysics, AssertMsg_ConditionFailed, CModelState::SetupPhysics
// callers: CSkeletonInstance::Activate, CSkeletonInstance::OnSetDormant, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
// strings: "0 == ( pInstance->GetOwnerGameEntity()->GetEntityIdentity()->GetFlags() & EF_DELETE_IN_PR, "SetupModel", "Assertion Failed in function %s():\n%s", "0 == ( pInstance->GetOwnerGameEntity()->GetEntityIdentity()->GetFlags() & EF_IN_STAGING_L
// globals: CModelState::SetupModel(CModelState*,CSkeletonInstance *,matrix3x4a_t const&)::_assertionConstants
void __fastcall CModelState::SetupModel(
        CModelState *const this,
        CModelState *pOldModelState,
        CSkeletonInstance *pInstance,
        const matrix3x4a_t *const rootToWorld)
{
  uint32 m_flags; // eax
  __int64 v7; // rax
  SolidType_t v8; // al

  m_flags = pInstance->m_pOwner->m_pEntity->m_flags;
  if ( (m_flags & 0x2080) == 0 || (m_flags & 0x80u) == 0 )
  {
    if ( (m_flags & 4) != 0 )
    {
      if ( AssertMsg_ConditionFailed(
             &CModelState::SetupModel(CModelState*,CSkeletonInstance *,matrix3x4a_t const&)::_assertionConstants,
             "Assertion Failed in function %s():\n%s") != 0 )
        __debugbreak();
      m_flags = pInstance->m_pOwner->m_pEntity->m_flags;
    }
    if ( (m_flags & 0x10) != 0
      && AssertMsg_ConditionFailed(
           &CModelState::SetupModel(CModelState*,CSkeletonInstance *,matrix3x4a_t const&)::_assertionConstants,
           "Assertion Failed in function %s():\n%s") != 0 )
    {
      __debugbreak();
    }
    if ( this->m_hModel.m_Value.m_pBinding != 0 )
    {
      CModelState::DoSetupPhysics(this, pInstance);
    }
    else
    {
      v7 = (*(pInstance->m_pOwner->_vptr_IHandleEntity + 29))(
             pInstance->m_pOwner,
             pOldModelState,
             pInstance,
             rootToWorld);
      v8 = (*(*v7 + 56LL))(v7);
      if ( (v8 - 2) <= 1u || v8 == SolidType_t::SOLID_CAPSULE )
        CModelState::SetupPhysics(this, pInstance, v8);
    }
  }
}


// CModelState::CleanupModel  (line 3533, @0x00000000020ba710, libserver.so)
// calls: CModelState::CleanupPhysics
void __fastcall CModelState::CleanupModel(CModelState *const this, CSkeletonInstance *pInstance)
{
  CModelState::CleanupPhysics(this, pInstance);
}


// CModelState::SetBindPose  (line 3542, @0x00000000020ba720, libserver.so)  // inlines: GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, operator->, operator==
// calls: CModel::GetAnimationStateCount, CModel::MasterSkeleton, CModel::GetAnimationStateOffset, CModelSkeleton::GetBindPoseParentTransforms, CModelSkeleton::GetBindPoseWorldTransforms
// callers: CSkeletonInstance::SetBindPose, CModelState::SetupJointState
void __fastcall CModelState::SetBindPose(CModelState *const this)
{
  const CModel *const *m_pBinding; // rax
  uint32 AnimationStateCount; // r14d
  const CModel *const *v4; // rdx
  uint32 v5; // r12d
  const ResourceBindingBase_t *v6; // rax
  const CModel *m_pData; // rdi
  const CModelSkeleton *v8; // r13
  const CModel *const *v9; // rax
  char *v10; // r15
  CTransform *v11; // rdx
  const CModel *const *v12; // rdi
  char *v13; // r14
  CTransform *v14; // rcx

  m_pBinding = this->m_animationState.m_hModel.m_pBinding;
  if ( m_pBinding != 0 )
    AnimationStateCount = CModel::GetAnimationStateCount(
                            *m_pBinding,
                            AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
  else
    AnimationStateCount = 0;
  v4 = this->m_compositeParentSpaceState.m_hModel.m_pBinding;
  if ( v4 != 0 )
  {
    v5 = CModel::GetAnimationStateCount(*v4, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
    if ( v5 != 0 )
    {
      v6 = this->m_hModel.m_Value.m_pBinding;
      if ( v6 != 0 )
        m_pData = v6->m_pData;
      else
        m_pData = 0;
      v8 = CModel::MasterSkeleton(m_pData);
      v9 = this->m_animationState.m_hModel.m_pBinding;
      if ( v9 != 0 )
      {
        v10 = this->m_animationState.m_pData;
        v11 = &v10[CModel::GetAnimationStateOffset(*v9, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
      }
      else
      {
        v11 = 0;
      }
      CModelSkeleton::GetBindPoseParentTransforms(v8, 1.0, AnimationStateCount, v11);
      v12 = this->m_compositeParentSpaceState.m_hModel.m_pBinding;
      if ( v12 != 0 )
      {
        v13 = this->m_compositeParentSpaceState.m_pData;
        v14 = &v13[CModel::GetAnimationStateOffset(*v12, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
      }
      else
      {
        v14 = 0;
      }
      if ( *(&this->m_compositeParentSpaceState + 59) != 0 )
        CModelSkeleton::GetBindPoseWorldTransforms(v8, &g_TransformIdentity, 1.0, v5, v14);
      else
        CModelSkeleton::GetBindPoseParentTransforms(v8, 1.0, v5, v14);
    }
  }
}


// CSkeletonInstance::SetBindPose  (line 3575, @0x00000000020ba890, libserver.so)
// calls: CModelState::SetBindPose
void __fastcall CSkeletonInstance::SetBindPose(CSkeletonInstance *const this)
{
  CModelState::SetBindPose(&this->m_modelState);
  (*(this->_vptr_CGameSceneNode + 11))(this, 16);
}


// CSkeletonInstance::SetModelNameFromModel  (line 3587, @0x00000000020ba8c0, libserver.so)  // inlines: ResourceGetName, ResourceGetName<260ul>, String, V_strncpy<int>, operator!=, operator=
// calls: _V_strncpy, CEntitySystem::AllocPooledString, __stack_chk_fail
// callers: CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
void __fastcall CSkeletonInstance::SetModelNameFromModel(CSkeletonInstance *const this, HModel hModel)
{
  const char **v3; // rax
  const char *v4; // rsi
  UtlSymLargeId_t v5; // [rsp+0h] [rbp-130h]
  char pName[264]; // [rsp+10h] [rbp-120h] BYREF
  unsigned __int64 v7; // [rsp+118h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  if ( hModel.m_pBinding->m_pData != 0 )
  {
    v3 = *(hModel.m_pBinding->m_pData + 1);
    if ( v3 != 0 )
    {
      v4 = "";
      if ( *v3 != 0 )
        v4 = *v3;
      _V_strncpy(pName, v4, 260);
    }
    else
    {
      _V_strncpy(pName, "", 260);
    }
    CEntitySystem::AllocPooledString(g_pEntitySystem, pName);
    this->m_modelState.m_ModelName.u.m_Id = v5;
  }
  else
  {
    this->m_modelState.m_ModelName.u.m_Id = 0;
  }
}


// CSkeletonInstance::SetModel  (line 3607, @0x00000000020dd230, libserver.so)  // inlines: AddToTail, CStrongHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CWeakHandle, CalcAbsolutePosition, CleanupModel, ConvertToExternalMemory, CopyConstruct<CGameSceneNode*>, Element, GetOwnerEntity, GetString, GetWorldSpaceBones, GetWorldSpaceState, GrowMemory, Init, IsValid, Load, NetworkStateChanged, NodeToWorldTransform, Purge, Purge_FixedGrowable, RemoveAll, Set, SetModel, ThreadInterlockedIncrement, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator!=, operator++, operator=, operator=<CWeakHandle<InfoForResourceTypeCModel> >, operator=<long long unsigned int>, operator[], ~CJiggleBones, ~CStrongHandle, ~CUtlLinkedList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CModel::name, V_stristr_fast(char const*,char const*), CUtlMemory<CGameSceneNode*, int>::Grow, CGameSceneNodeHandle::Get, CSkeletonInstance::DirtyHierarchyBoneFlags, CGameSceneNode::EndHierarchicalAttachment, CModelState::CModelState, CModelState::CopyStateTo, CStrongHandle<InfoForResourceTypeCModel>::Init, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CModelState::UpdateModelCachedValues, CSkeletonInstance::SetModelNameFromModel (28 total)
// callers: CBodyComponent::SetModel, CSkeletonInstance::OnClothReloaded, CSkeletonInstance::SetModelAsync, CSkeletonInstance::OnAsyncModelLoaded
// strings: "FCVAR_NEVER_AS_STRING"
// globals: CSkeletonInstance::SetModel(CWeakHandle<InfoForResourceTypeCModel>)::s_nSetModelCounter
void __fastcall CSkeletonInstance::SetModel(CSkeletonInstance *const this, HModel hModel)
{
  char *m_pszString; // rax
  char *v4; // rbx
  const char *v5; // rax
  CGameSceneNode *m_pChild; // rbx
  __int64 v7; // r12
  int v8; // r14d
  int v9; // edx
  CGameSceneNode **v10; // rax
  int m_Size; // eax
  const ResourceBindingBase_t *m_pBinding; // rsi
  bool v13; // zf
  CSkeletonAnimationController *m_pController; // rdi
  void (__fastcall *v15)(CSkeletonAnimationController *, void *, void *); // rcx
  const ResourceBindingBase_t *v16; // rax
  void *m_pData; // rdx
  CGameSceneNode **m_pMemory; // rax
  __int64 v19; // rdx
  CGameSceneNode *v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // r12
  CGameSceneNode *v23; // rdi
  int (**vptr_CGameSceneNode)(...); // rax
  CEntityInstance *m_pOwner; // rdi
  void (__fastcall *v26)(CEntityInstance *, const ResourceBindingBase_t **, CStrongHandle<InfoForResourceTypeCModel> *); // rax
  CJiggleBones *m_pJiggleBones; // rbx
  uint32 v28; // eax
  unsigned __int64 v29; // rbx
  CGameSceneNode *v30; // rdi
  const ResourceBindingBase_t *vptr_CModelState; // rsi
  MeshGroupMask_t DefaultMeshGroupMask; // r12
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>,CModelState::NetworkVar_m_hModel> *p_m_hModel; // [rsp+0h] [rbp-330h]
  bool bUsingBoneMerge; // [rsp+17h] [rbp-319h]
  const ResourceBindingBase_t *hOldModel; // [rsp+18h] [rbp-318h]
  const ResourceBindingBase_t *v37; // [rsp+30h] [rbp-300h] BYREF
  CStrongHandle<InfoForResourceTypeCModel> v38; // [rsp+40h] [rbp-2F0h] BYREF
  CModelState oldModelState; // [rsp+50h] [rbp-2E0h] BYREF
  CUtlVectorFixedGrowable<CGameSceneNode*,32ul> children; // [rsp+1E0h] [rbp-150h] BYREF
  unsigned __int64 v41; // [rsp+2F8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (skel_debug.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( skel_debug.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = skel_debug.m_pParent->m_Value.m_pszString;
  }
  if ( *m_pszString != 0 && hModel.m_pBinding->m_pData != 0 )
  {
    v4 = "FCVAR_NEVER_AS_STRING";
    if ( (skel_debug.m_nFlags & 0x1000) == 0 )
    {
      v4 = "";
      if ( skel_debug.m_pParent->m_Value.m_pszString != 0 )
        v4 = skel_debug.m_pParent->m_Value.m_pszString;
    }
    v5 = CModel::name(*hModel.m_pBinding->m_pData);
    if ( V_stristr_fast(v5, v4) != 0 )
      ++CSkeletonInstance::SetModel(CWeakHandle<InfoForResourceTypeCModel>)::s_nSetModelCounter;
  }
  hOldModel = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( (this->m_pOwner->m_pEntity->m_flags & 2) != 0 )
  {
    CModelState::CleanupJointState(&this->m_modelState);
    oldModelState._vptr_CModelState = 0;
    CStrongHandle<InfoForResourceTypeCModel>::Init(&oldModelState, hModel.m_pBinding->m_pData);
    if ( this->m_modelState.m_hModel.m_Value.m_pBinding != oldModelState._vptr_CModelState )
    {
      (*(this->m_modelState._vptr_CModelState + 2))(&this->m_modelState, 160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( this->m_modelState.m_hModel.m_Value.m_pBinding != 0 )
        CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_modelState.m_hModel.m_Value);
      vptr_CModelState = oldModelState._vptr_CModelState;
      v13 = oldModelState._vptr_CModelState == 0;
      this->m_modelState.m_hModel.m_Value.m_pBinding = oldModelState._vptr_CModelState;
      if ( !v13 )
      {
        if ( (vptr_CModelState->m_nFlags & 0x20) != 0 )
        {
          (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, vptr_CModelState, 2, &this->m_modelState.m_hModel);
          vptr_CModelState = this->m_modelState.m_hModel.m_Value.m_pBinding;
        }
        _InterlockedAdd(&vptr_CModelState->m_nRefCount.m_value, 1u);
      }
    }
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&oldModelState);
    CModelState::UpdateModelCachedValues(&this->m_modelState);
    oldModelState._vptr_CModelState = hModel.m_pBinding->m_pData;
    CSkeletonInstance::SetModelNameFromModel(this, &oldModelState);
    CModelState::SetupJointState(&this->m_modelState);
    if ( hModel.m_pBinding->m_pData != 0 )
    {
      DefaultMeshGroupMask = CModel::GetDefaultMeshGroupMask(*hModel.m_pBinding->m_pData);
      if ( DefaultMeshGroupMask != this->m_modelState.m_MeshGroupMask.m_Value )
      {
        (*(this->m_modelState._vptr_CModelState + 2))(&this->m_modelState, 320, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_modelState.m_MeshGroupMask.m_Value = DefaultMeshGroupMask;
      }
    }
    (*(this->_vptr_CGameSceneNode + 11))(this, 112);
  }
  else if ( hOldModel != hModel.m_pBinding->m_pData )
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    m_pChild = this->m_pChild;
    children.m_Size = 0;
    children.m_Memory.m_nAllocationCount = 32;
    children.m_Memory.m_nGrowSize = 0x80000000;
    children.m_Memory.m_pMemory = &children.m_Memory.m_FixedMemory;
    if ( m_pChild != 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        if ( m_pChild->m_nHierarchyType != 3 )
        {
          m_Size = v7;
          if ( children.m_Memory.m_nAllocationCount == v7 )
          {
            CUtlMemory<CGameSceneNode *,int>::Grow(&children.m_Memory, 1);
            m_Size = children.m_Size;
          }
          v9 = m_Size + 1;
          children.m_Size = m_Size + 1;
          v10 = &children.m_Memory.m_pMemory[v7];
          if ( v10 != 0 )
          {
            *v10 = m_pChild;
            v7 = children.m_Size;
          }
          else
          {
            v7 = v9;
          }
          v8 += m_pChild->m_nHierarchyType == 1;
        }
        m_pChild = m_pChild->m_pNextSibling;
      }
      while ( m_pChild != 0 );
      if ( v7 > 0 )
      {
        v29 = 0;
        do
        {
          v30 = children.m_Memory.m_pMemory[v29 / 8];
          if ( v30->m_bDirtyAbsTransform.m_value )
            CGameSceneNode::CalcAbsolutePositionWhenDirty(v30);
          v29 += 8LL;
        }
        while ( v29 != 8LL * (v7 - 1) + 8 );
      }
    }
    else
    {
      v8 = 0;
      LODWORD(v7) = 0;
    }
    bUsingBoneMerge = this->m_nHierarchyType == 1;
    if ( this->m_nHierarchyType == 1 )
    {
      if ( CGameSceneNodeHandle::Get(&this->m_hParent) != 0 )
        CSkeletonInstance::DirtyHierarchyBoneFlags(this);
      CGameSceneNode::EndHierarchicalAttachment(this, 0);
    }
    CModelState::CModelState(&oldModelState);
    CModelState::CopyStateTo(&this->m_modelState, this, &oldModelState);
    v38.m_pBinding = 0;
    CStrongHandle<InfoForResourceTypeCModel>::Init(&v38, hModel.m_pBinding->m_pData);
    if ( this->m_modelState.m_hModel.m_Value.m_pBinding != v38.m_pBinding )
    {
      (*(this->m_modelState._vptr_CModelState + 2))(&this->m_modelState, 160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      p_m_hModel = &this->m_modelState.m_hModel;
      if ( this->m_modelState.m_hModel.m_Value.m_pBinding != 0 )
        CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&p_m_hModel->m_Value);
      m_pBinding = v38.m_pBinding;
      v13 = v38.m_pBinding == 0;
      this->m_modelState.m_hModel.m_Value = v38;
      if ( !v13 )
      {
        if ( (m_pBinding->m_nFlags & 0x20) != 0 )
        {
          (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, p_m_hModel);
          m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
        }
        _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
      }
    }
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&v38);
    CModelState::UpdateModelCachedValues(&this->m_modelState);
    v38.m_pBinding = hModel.m_pBinding->m_pData;
    CSkeletonInstance::SetModelNameFromModel(this, &v38);
    if ( this->m_modelState.m_MeshGroupMask.m_Value != 0 )
    {
      (*(this->m_modelState._vptr_CModelState + 2))(&this->m_modelState, 320, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_modelState.m_MeshGroupMask.m_Value = 0;
    }
    CModelState::SetupJointState(&this->m_modelState);
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
    CModelState::SetupModel(&this->m_modelState, &oldModelState, this, &this->m_mNodeToWorld);
    m_pController = this->m_pController;
    if ( m_pController != 0 )
    {
      v15 = *(m_pController->_vptr_CSkeletonAnimationController + 17);
      v16 = this->m_modelState.m_hModel.m_Value.m_pBinding;
      if ( v16 != 0 )
        m_pData = v16->m_pData;
      else
        m_pData = 0;
      if ( oldModelState.m_hModel.m_Value.m_pBinding != 0 )
        v15(m_pController, oldModelState.m_hModel.m_Value.m_pBinding->m_pData, m_pData);
      else
        v15(m_pController, 0, m_pData);
    }
    CModelState::CleanupPhysics(&oldModelState, this);
    CModelState::CleanupJointState(&oldModelState);
    if ( bUsingBoneMerge )
      CGameSceneNode::StartHierarchicalAttachment(this);
    (*(this->_vptr_CGameSceneNode + 11))(this, 112);
    if ( v8 > 1 )
      CSkeletonInstance::CalcWorldSpaceBones(this, CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS);
    if ( v7 > 0 )
    {
      m_pMemory = children.m_Memory.m_pMemory;
      v19 = 0;
      do
      {
        v20 = m_pMemory[v19++];
        *(v20 + 248) |= 1u;
      }
      while ( v7 > v19 );
      v21 = 0;
      v22 = 8LL * (v7 - 1) + 8;
      while ( 1 )
      {
        v23 = m_pMemory[v21 / 8];
        *(v23 + 248) &= ~1u;
        v23->m_bDirtyAbsTransform.m_value = 0;
        (*(v23->_vptr_CGameSceneNode + 16))(v23, 0);
        v21 += 8LL;
        if ( v21 == v22 )
          break;
        m_pMemory = children.m_Memory.m_pMemory;
      }
    }
    vptr_CGameSceneNode = this->_vptr_CGameSceneNode;
    this->m_bDirtyAbsTransform.m_value = 0;
    vptr_CGameSceneNode[16](this, 0);
    m_pOwner = this->m_pOwner;
    if ( m_pOwner[11]._vptr_IHandleEntity != 0 )
    {
      v26 = *(m_pOwner->_vptr_IHandleEntity + 39);
      v38.m_pBinding = hModel.m_pBinding->m_pData;
      v37 = hOldModel;
      v26(m_pOwner, &v37, &v38);
    }
    m_pJiggleBones = this->m_modelState.m_pJiggleBones;
    if ( m_pJiggleBones != 0 )
    {
      CUtlLinkedList<JiggleData,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>>::RemoveAll(&this->m_modelState.m_pJiggleBones->m_jiggleBoneState);
      CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>::Purge(&m_pJiggleBones->m_jiggleBoneState.m_Memory);
      operator delete(m_pJiggleBones);
      this->m_modelState.m_pJiggleBones = 0;
    }
    CModelState::~CModelState(&oldModelState);
    children.m_Size = 0;
    v28 = children.m_Memory.m_nGrowSize & 0xC0000000;
    if ( children.m_Memory.m_nAllocationCount < 0 || children.m_Memory.m_pMemory == &children.m_Memory.m_FixedMemory )
    {
      if ( v28 == 0 )
        CUtlMemory<CGameSceneNode *,int>::Purge(&children.m_Memory);
    }
    else if ( children.m_Memory.m_pMemory != 0 && v28 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
}


// CSetModelAsyncCallback::DeleteThis  (line 3807, @0x00000000020f4bb0, libserver.so)
// calls: operator delete
void __fastcall CSetModelAsyncCallback::DeleteThis(CSetModelAsyncCallback *const this)
{
  operator delete(this);
}


// CSetModelAsyncCallback::OnGameResourceManifestLoaded  (line 3808, @0x0000000002116760, libserver.so)  // inlines: CWeakHandle, FromUntypedHandle, InitUntyped
// calls: CSkeletonInstance::OnAsyncModelLoaded
void __fastcall CSetModelAsyncCallback::OnGameResourceManifestLoaded(
        CSetModelAsyncCallback *const this,
        HGameResourceManifest hManifest,
        int nResourceCount,
        ResourceHandle_t *pResourceHandles)
{
  const ResourceBindingBase_t *v6; // rbx
  HModel hModel; // [rsp+0h] [rbp-30h] BYREF

  hModel.m_pBinding = 0;
  v6 = *pResourceHandles;
  if ( *pResourceHandles == 0
    || (*(*g_pResourceHandleUtils + 56LL))(g_pResourceHandleUtils, *pResourceHandles) == 1818520950 )
  {
    hModel.m_pBinding = v6;
  }
  else
  {
    hModel.m_pBinding = 0;
  }
  CSkeletonInstance::OnAsyncModelLoaded(this->m_pOwner, hManifest, &hModel);
}


// CSkeletonInstance::SetModelAsync  (line 3817, @0x00000000020ddac0, libserver.so)  // inlines: CSetModelAsyncCallback, CWeakHandle, DestroySetModelAsyncRequest, FromUntypedHandleUnchecked, StaticInvalidHandle
// calls: operator new, CSkeletonInstance::SetModel
// callers: CBodyComponent::SetModelAsync
// strings: "PortraitBackground"
void __fastcall CSkeletonInstance::SetModelAsync(CSkeletonInstance *const this, const char *pModelName)
{
  void (__fastcall *v3)(IGameResourceService *, HGameResourceManifest, _QWORD *, __int64, const char **, __int64); // r14
  _QWORD *v4; // rax
  const char *pModelNamea; // [rsp+8h] [rbp-38h] BYREF
  HModel hModel; // [rsp+10h] [rbp-30h] BYREF

  pModelNamea = pModelName;
  if ( pModelName != 0 && *pModelName != 0 )
  {
    if ( this->m_hCurrentlyAsyncLoadingModel != 0 )
    {
      (*(*g_pGameResourceService + 248LL))(g_pGameResourceService);
      this->m_hCurrentlyAsyncLoadingModel = 0;
    }
    this->m_hCurrentlyAsyncLoadingModel = (*(*g_pGameResourceService + 208LL))(
                                            g_pGameResourceService,
                                            1,
                                            &pModelNamea,
                                            0,
                                            "PortraitBackground",
                                            0xFFFFFFFFLL);
    v3 = *(*g_pGameResourceService + 224LL);
    v4 = operator new(0x10u);
    *v4 = &off_3FFC7B0;
    v4[1] = this;
    v3(g_pGameResourceService, this->m_hCurrentlyAsyncLoadingModel, v4, 1, &pModelNamea, 1);
  }
  else
  {
    hModel.m_pBinding = 0;
    CSkeletonInstance::SetModel(this, &hModel);
  }
}


// CSkeletonInstance::DestroySetModelAsyncRequest  (line 3833, @0x00000000020ba9a0, libserver.so)
void __fastcall CSkeletonInstance::DestroySetModelAsyncRequest(CSkeletonInstance *const this)
{
  if ( this->m_hCurrentlyAsyncLoadingModel != 0 )
  {
    (*(*g_pGameResourceService + 248LL))(g_pGameResourceService);
    this->m_hCurrentlyAsyncLoadingModel = 0;
  }
}


// CSkeletonInstance::OnAsyncModelLoaded  (line 3842, @0x00000000020ddbc0, libserver.so)  // inlines: CWeakHandle, DestroySetModelAsyncRequest, Init
// calls: CSkeletonInstance::SetModel
// callers: CSetModelAsyncCallback::OnGameResourceManifestLoaded
void __fastcall CSkeletonInstance::OnAsyncModelLoaded(
        CSkeletonInstance *const this,
        HGameResourceManifest hManifest,
        HModel hModel)
{
  HModel hModela; // [rsp+0h] [rbp-20h] BYREF

  hModela.m_pBinding = hModel.m_pBinding->m_pData;
  CSkeletonInstance::SetModel(this, &hModela);
  if ( this->m_hCurrentlyAsyncLoadingModel != 0 )
  {
    (*(*g_pGameResourceService + 248LL))(g_pGameResourceService);
    this->m_hCurrentlyAsyncLoadingModel = 0;
  }
}


// CSkeletonInstance::HasRenderedSinceLastClientTick  (line 3849, @0x00000000020ba9e0, libserver.so)
// callers: CPhysicsGameSystem::PullSoftbodyTransforms
bool __fastcall CSkeletonInstance::HasRenderedSinceLastClientTick(const CSkeletonInstance *const this)
{
  return 0;
}


// CSkeletonInstance::DidRenderLastFrame  (line 3858, @0x00000000020ba9f0, libserver.so)
bool __fastcall CSkeletonInstance::DidRenderLastFrame(const CSkeletonInstance *const this)
{
  return 0;
}


// CSkeletonInstance::GetInterpolatedSimulationBones  (line 3868, @0x00000000020baa00, libserver.so)
const CCompositeParentSpaceState::InterpolatedBoneTransform_t *__fastcall CSkeletonInstance::GetInterpolatedSimulationBones(
        const CSkeletonInstance *const this)
{
  return 0;
}


// CSkeletonInstance::HasAllocatedInterpolatedSimulationBones  (line 3879, @0x00000000020baa10, libserver.so)
bool __fastcall CSkeletonInstance::HasAllocatedInterpolatedSimulationBones(const CSkeletonInstance *const this)
{
  return 0;
}


// CSkeletonInstance::SetupPhysics  (line 3888, @0x00000000020d0df0, libserver.so)
// calls: CModelState::DoSetupPhysics
// callers: SetupAndConnectPhysics, CPhysSaveRestoreBlockHandler::Restore
void __fastcall CSkeletonInstance::SetupPhysics(CSkeletonInstance *const this)
{
  CModelState::DoSetupPhysics(&this->m_modelState, this);
}


// CSkeletonInstance::SetupPhysics  (line 3894, @0x00000000020d1100, libserver.so)  // inlines: SetupPhysics
// calls: CModelState::SetupPhysics
void __fastcall CSkeletonInstance::SetupPhysics(
        CSkeletonInstance *const this,
        SolidType_t nSolid,
        CPhysAggregateData *pPhysModelCustom)
{
  if ( !this->m_bDormant && this->m_modelState.m_pVPhysicsAggregate == 0 )
    CModelState::SetupPhysics(
      &this->m_modelState,
      this->m_modelState.m_MeshGroupMask.m_Value,
      this,
      nSolid,
      pPhysModelCustom);
}


// CSkeletonInstance::CleanupPhysics  (line 3901, @0x00000000020baa20, libserver.so)
// calls: CModelState::CleanupPhysics
// callers: CBaseEntity::VPhysicsDestroyObject, CDOTA_BaseNPC::Spawn
void __fastcall CSkeletonInstance::CleanupPhysics(CSkeletonInstance *const this)
{
  CModelState::CleanupPhysics(&this->m_modelState, this);
}


// CSkeletonInstance::CleanupCloth  (line 3907, @0x00000000020baa40, libserver.so)
void __fastcall CSkeletonInstance::CleanupCloth(CSkeletonInstance *const this)
{
  ;
}


// CModelState::CleanupCloth  (line 3912, @0x00000000020baa50, libserver.so)
void __fastcall CModelState::CleanupCloth(CModelState *const this, CSkeletonInstance *pInstance)
{
  ;
}


// CModelState::OnModelChanged  (line 3925, @0x00000000020baa60, libserver.so)  // inlines: Init, operator=
void __fastcall CModelState::OnModelChanged(CModelState *const this, CEntityInstance *pInstance, const HModel *pModel)
{
  this->m_hNewModel = pModel->m_pBinding;
}


// CSkeletonInstance::SetAnimationController  (line 3934, @0x00000000020baa70, libserver.so)
// calls: AssertMsg_ConditionFailed
// callers: CSkeletonAnimationController::SetSkeletonInstance
// strings: "CSkeletonInstance::SetAnimationController can only be called once!\n"
// globals: CSkeletonInstance::SetAnimationController(CSkeletonAnimationController *)::_assertionConstants
void __fastcall CSkeletonInstance::SetAnimationController(
        CSkeletonInstance *const this,
        CSkeletonAnimationController *pController)
{
  if ( this->m_pController != 0
    && AssertMsg_ConditionFailed(
         &CSkeletonInstance::SetAnimationController(CSkeletonAnimationController *)::_assertionConstants,
         "CSkeletonInstance::SetAnimationController can only be called once!\n") != 0 )
  {
    __debugbreak();
  }
  this->m_pController = pController;
}


// CSkeletonInstance::OnSetDormant  (line 3940, @0x00000000020d1030, libserver.so)  // inlines: CalcAbsolutePosition, CleanupModel, Load, NodeToWorldTransform
// calls: CGameSceneNode::OnSetDormant, CModelState::SetupModel, CModelState::CleanupPhysics, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CSkeletonInstance::OnSetDormant(
        CSkeletonInstance *const this,
        CEntityInstance *pEntity,
        EntityDormancyType_t nPrevDormancyType,
        EntityDormancyType_t nDormancyType)
{
  bool v8; // r15
  CSkeletonAnimationController *m_pController; // rdi

  v8 = nDormancyType == EntityDormancyType_t::ENTITY_DORMANT;
  CGameSceneNode::OnSetDormant(this, pEntity, nPrevDormancyType, nDormancyType);
  if ( v8 != (nPrevDormancyType == EntityDormancyType_t::ENTITY_DORMANT) )
  {
    if ( v8 )
    {
      CModelState::CleanupPhysics(&this->m_modelState, this);
    }
    else
    {
      if ( this->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
      CModelState::SetupModel(&this->m_modelState, 0, this, &this->m_mNodeToWorld);
    }
  }
  m_pController = this->m_pController;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_CSkeletonAnimationController + 9))(m_pController, pEntity, nPrevDormancyType, nDormancyType);
}


// CSkeletonInstance::SetRenderingEnabled  (line 3971, @0x00000000020de8b0, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, NetworkStateChanged, Set, SetRenderingEnabled, operator=<bool>, operator[]
// calls: CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
// callers: CSkeletonInstance::OnRenderingEnableChanged
void __fastcall CSkeletonInstance::SetRenderingEnabled(CSkeletonInstance *const this, bool bEnabled)
{
  SceneObjectUpdaterHandle_t m_hSceneObjectUpdater; // r12
  CRenderGameSystem *v5; // rcx
  char v6; // al
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rbx
  int v10; // r14d
  bool v11; // zf
  int v12; // eax
  SceneObjectUpdaterHandle_t *v13; // rax
  int v14; // eax

  if ( this->m_bIsRenderingEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 720, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsRenderingEnabled.m_Value = bEnabled;
    m_hSceneObjectUpdater = this->m_modelState.m_hSceneObjectUpdater;
    if ( m_hSceneObjectUpdater != 0 )
    {
      v5 = g_pRenderGameSystem;
      if ( (m_hSceneObjectUpdater[19] & 1) != bEnabled )
      {
        v6 = bEnabled | m_hSceneObjectUpdater[19] & 0xFE;
        *(m_hSceneObjectUpdater + 76) = v6;
        if ( (v6 & 2) != 0 )
        {
          v7 = *(m_hSceneObjectUpdater + 87);
          v8 = v5->m_sceneObjectUpdater.m_pWorkFrameCount[v7];
          if ( v8 != *(m_hSceneObjectUpdater + 20) )
          {
            v9 = &v5->m_sceneObjectUpdater.m_activeItems[v7][v8 & 1];
            v10 = *v9;
            v11 = *v9 == v5->m_sceneObjectUpdater.m_activeItems[v7][v8 & 1].m_Memory.m_nAllocationCount;
            v12 = *v9;
            if ( v11 )
            {
              CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
                (v9 + 8),
                1);
              v12 = *v9;
            }
            *v9 = v12 + 1;
            v13 = (*(v9 + 8) + 8LL * v10);
            if ( v13 != 0 )
              *v13 = m_hSceneObjectUpdater;
            v14 = *(m_hSceneObjectUpdater + 21);
            *(m_hSceneObjectUpdater + 20) = v8;
            *(m_hSceneObjectUpdater + 21) = v10 & 0xFFFFFF | v14 & 0xFF000000;
          }
        }
      }
    }
  }
}


// CSkeletonInstance::SetAnimationEnabled  (line 3985, @0x00000000020baae0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CSkeletonInstance::SetAnimationEnabled(CSkeletonInstance *const this, bool bEnabled)
{
  if ( this->m_bIsAnimationEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 721, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsAnimationEnabled.m_Value = bEnabled;
  }
}


// CSkeletonInstance::IsAnimationEnabled  (line 3990, @0x00000000020bab20, libserver.so)
bool __fastcall CSkeletonInstance::IsAnimationEnabled(const CSkeletonInstance *const this)
{
  return this->m_bIsAnimationEnabled.m_Value;
}


// CSkeletonInstance::OnRenderingEnableChanged  (line 3996, @0x00000000020de9d0, libserver.so)
// calls: CSkeletonInstance::SetRenderingEnabled
void __fastcall CSkeletonInstance::OnRenderingEnableChanged(
        CSkeletonInstance *const this,
        CEntityInstance *pInstance,
        const bool *pEnable)
{
  CSkeletonInstance::SetRenderingEnabled(this, *pEnable);
}


// CSkeletonInstance::OnMaterialGroupChanged  (line 4001, @0x00000000020bac00, libserver.so)
// calls: CSkeletonInstance::SetMaterialGroup
void __fastcall CSkeletonInstance::OnMaterialGroupChanged(
        CSkeletonInstance *const this,
        CEntityInstance *pInstance,
        const CUtlStringToken *pMaterialGroup)
{
  CSkeletonInstance::SetMaterialGroup(this, pMaterialGroup->m_nHashCode);
}


// CModelState::OnMeshGroupMaskChanged  (line 4006, @0x00000000020de620, libserver.so)  // inlines: AddToActiveWorkList, AddToTail, CopyConstruct<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*>, Element, GrowMemory, HasPhysics, MarkChanged, NetworkStateChanged, Set, operator!=, operator=<long long unsigned int>, operator[]
// calls: CModelState::UpdateModelCachedValues, CRenderGameSystem::SetMeshGroupMask, CModel::HasCollision, CPhysicsGameSystem::SetPhysGroupMask, CModelState::CleanupPhysics, CModelState::DoSetupPhysics, CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Grow
// callers: CSkeletonInstance::SetMeshGroupMask, CSkeletonInstance::SetSingleMeshGroup
void __fastcall CModelState::OnMeshGroupMaskChanged(
        CModelState *const this,
        CEntityInstance *pEntityInstance,
        const MeshGroupMask_t *pMask)
{
  MeshGroupMask_t v6; // r12
  SceneObjectUpdaterHandle_t m_hSceneObjectUpdater; // rsi
  SceneObjectUpdaterHandle_t v8; // r14
  char v9; // al
  const CModel *const *m_pBinding; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  const RnCollisionAttr_t *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r15d
  CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t*,int> > *v16; // r12
  int m_Size; // eax
  int v18; // edx
  SceneObjectUpdaterHandle_t *v19; // rdx
  int v20; // [rsp+Ch] [rbp-34h]

  if ( *pMask != this->m_MeshGroupMask.m_Value )
  {
    CModelState::UpdateModelCachedValues(this);
    v6 = *pMask;
    if ( v6 != this->m_MeshGroupMask.m_Value )
    {
      (*(this->_vptr_CModelState + 2))(this, 320, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_MeshGroupMask.m_Value = v6;
    }
    m_hSceneObjectUpdater = this->m_hSceneObjectUpdater;
    if ( m_hSceneObjectUpdater != 0 )
    {
      CRenderGameSystem::SetMeshGroupMask(g_pRenderGameSystem, m_hSceneObjectUpdater, this->m_MeshGroupMask.m_Value);
      v8 = this->m_hSceneObjectUpdater;
      v9 = *(v8 + 76);
      if ( (v9 & 2) != 0 && (v9 & 1) != 0 )
      {
        v14 = *(v8 + 87);
        v15 = g_pRenderGameSystem->m_sceneObjectUpdater.m_pWorkFrameCount[v14];
        if ( v15 != *(v8 + 20) )
        {
          v16 = &g_pRenderGameSystem->m_sceneObjectUpdater.m_activeItems[v14][v15 & 1];
          m_Size = v16->m_Size;
          v18 = v16->m_Size;
          if ( v16->m_Size == v16->m_Memory.m_nAllocationCount )
          {
            v20 = v16->m_Size;
            CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Grow(
              &v16->m_Memory,
              1);
            v18 = v16->m_Size;
            m_Size = v20;
          }
          v16->m_Size = v18 + 1;
          v19 = &v16->m_Memory.m_pMemory[m_Size];
          if ( v19 != 0 )
            *v19 = v8;
          *(v8 + 20) = v15;
          *(v8 + 21) = m_Size & 0xFFFFFF | v8[21] & 0xFF000000;
        }
      }
    }
    m_pBinding = this->m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 && CModel::HasCollision(*m_pBinding) )
    {
      if ( this->m_pVPhysicsAggregate != 0 )
      {
        if ( pEntityInstance != 0 )
        {
          v11 = (*(pEntityInstance->_vptr_IHandleEntity + 29))(pEntityInstance);
          if ( (*(*v11 + 56LL))(v11) == 6 )
          {
            v12 = (*(pEntityInstance->_vptr_IHandleEntity + 29))(pEntityInstance);
            v13 = (*(*v12 + 104LL))(v12);
            if ( !CPhysicsGameSystem::SetPhysGroupMask(
                    g_pPhysicsGameSystem,
                    (this - 320),
                    this->m_MeshGroupMask.m_Value,
                    v13) )
              CModelState::CleanupPhysics(this, (this - 320));
          }
        }
      }
      else
      {
        CModelState::DoSetupPhysics(this, (this - 320));
      }
    }
  }
}


// CModelState::OnMotionTypeChanged  (line 4043, @0x00000000020bab30, libserver.so)
void __fastcall CModelState::OnMotionTypeChanged(CModelState *const this)
{
  *(this + 402) |= 2u;
}


// CModelState::UpdateModelCachedValues  (line 4050, @0x00000000020bab40, libserver.so)  // inlines: operator const RuntimeClass_t*
// calls: CModel::MasterSkeleton, CModelSkeleton::NumBones, CModel::GetNumProceduralBones, CModel::NumFlexControllers
// callers: CModelState::SetupPhysics, CSkeletonInstance::Activate, CModelState::CopyStateTo, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate, CModelState::OnMeshGroupMaskChanged
void __fastcall CModelState::UpdateModelCachedValues(CModelState *const this)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v3; // r12
  const CModelSkeleton *v4; // rax

  m_pBinding = this->m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && (v3 = *m_pBinding, *m_pBinding != 0) )
  {
    v4 = CModel::MasterSkeleton(*m_pBinding);
    this->m_nTotalBoneCount = CModelSkeleton::NumBones(v4);
    if ( CModel::GetNumProceduralBones(v3) > 0 )
    {
      this->m_bHasProceduralBones = 1;
      this->m_bHasFlexProceduralBones = CModel::NumFlexControllers(v3) > 0;
      return;
    }
  }
  else
  {
    this->m_nTotalBoneCount = 0;
  }
  this->m_bHasProceduralBones = 0;
  this->m_bHasFlexProceduralBones = 0;
}


// CSkeletonInstance::SetSingleMeshGroup  (line 4066, @0x00000000020de860, libserver.so)  // inlines: GetModelData, SetMeshGroupMask, operator const RuntimeClass_t*
// calls: CModel::GetMaskForMeshGroup, CModelState::OnMeshGroupMaskChanged
// callers: CBodyComponent::SetBodyGroup
void __fastcall CSkeletonInstance::SetSingleMeshGroup(CSkeletonInstance *const this, CUtlStringToken nId)
{
  const CModel *const *m_pBinding; // rax
  MeshGroupMask_t MaskForMeshGroup; // rax
  CEntityInstance *m_pOwner; // rsi
  MeshGroupMask_t pMask[3]; // [rsp+8h] [rbp-18h] BYREF

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
  {
    MaskForMeshGroup = CModel::GetMaskForMeshGroup(*m_pBinding, nId);
    m_pOwner = this->m_pOwner;
    pMask[0] = MaskForMeshGroup;
    CModelState::OnMeshGroupMaskChanged(&this->m_modelState, m_pOwner, pMask);
  }
}


// CSkeletonInstance::SetMeshGroupMask  (line 4076, @0x00000000020de830, libserver.so)
// calls: CModelState::OnMeshGroupMaskChanged
// callers: CBaseAnimating::SetBody
void __fastcall CSkeletonInstance::SetMeshGroupMask(CSkeletonInstance *const this, MeshGroupMask_t mask)
{
  MeshGroupMask_t maska; // [rsp+8h] [rbp-8h] BYREF

  maska = mask;
  CModelState::OnMeshGroupMaskChanged(&this->m_modelState, this->m_pOwner, &maska);
}


// CSkeletonInstance::SetMaterialGroup  (line 4081, @0x00000000020babc0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<CUtlStringToken>
// callers: CBodyComponent::SetMaterialGroup, CBaseAnimating::SetSkin, CSkeletonInstance::OnMaterialGroupChanged
void __fastcall CSkeletonInstance::SetMaterialGroup(CSkeletonInstance *const this, CUtlStringToken nId)
{
  if ( this->m_materialGroup.m_Value.m_nHashCode != nId.m_nHashCode )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 724, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_materialGroup.m_Value = nId;
  }
}


// CSkeletonInstance::GetMeshGroupMask  (line 4093, @0x00000000020bac10, libserver.so)
// callers: CBaseAnimating::SetBody, CBaseAnimating::GetBody
MeshGroupMask_t __fastcall CSkeletonInstance::GetMeshGroupMask(const CSkeletonInstance *const this)
{
  return this->m_modelState.m_MeshGroupMask.m_Value;
}


// CSkeletonInstance::ForceLOD  (line 4102, @0x00000000020bac20, libserver.so)
void __fastcall CSkeletonInstance::ForceLOD(CSkeletonInstance *const this, int nLOD)
{
  if ( this->m_modelState.m_nForceLOD != nLOD )
    this->m_modelState.m_nForceLOD = nLOD;
}


// CSkeletonInstance::SetAttachmentOverride  (line 4118, @0x00000000020bac40, libserver.so)
void __fastcall CSkeletonInstance::SetAttachmentOverride(CSkeletonInstance *const this, IAttachmentOverride *pOverride)
{
  this->m_pAttachmentOverride = pOverride;
}


// CSkeletonInstance::IsAttachmentOverridden  (line 4123, @0x00000000020bac50, libserver.so)
bool __fastcall CSkeletonInstance::IsAttachmentOverridden(
        const CSkeletonInstance *const this,
        AttachmentHandle_t hAttachment)
{
  __int64 v2; // rbp
  bool result; // al
  IAttachmentOverride *m_pAttachmentOverride; // rdi
  bool bOk; // [rsp+1h] [rbp-39h] BYREF
  matrix3x4_t tmp; // [rsp+2h] [rbp-38h] BYREF
  __int64 v7; // [rsp+32h] [rbp-8h]

  result = 0;
  if ( hAttachment != 0 )
  {
    m_pAttachmentOverride = this->m_pAttachmentOverride;
    if ( m_pAttachmentOverride != 0 )
    {
      v7 = v2;
      return (*(m_pAttachmentOverride->_vptr_IAttachmentOverride + 1))(m_pAttachmentOverride, hAttachment, &tmp, &bOk) == 0;
    }
  }
  return result;
}


// CSkeletonInstance::GetAttachmentCount  (line 4139, @0x00000000020bac90, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::GetNumAttachments
// callers: CBaseAnimating::GetAttachmentCount
int __fastcall CSkeletonInstance::GetAttachmentCount(const CSkeletonInstance *const this)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::GetNumAttachments(*m_pBinding);
  else
    return 0;
}


// CSkeletonInstance::LookupAttachment  (line 4147, @0x00000000020bacc0, libserver.so)  // inlines: operator==
// calls: CModel::GetAttachmentHandle
// callers: CBodyComponent::LookupAttachment, CBaseAnimating::LookupAttachment, CGameSceneNode::StartHierarchicalAttachment, CSkeletonInstance::DetermineHierarchyAttachType, CSkeletonInstance::LookupAttachment, CGameSceneNode::ComputeBoneOrAttachmentToWorld, CConstraintAnchor::Spawn
AttachmentHandle_t __fastcall CSkeletonInstance::LookupAttachment(
        const CSkeletonInstance *const this,
        CUtlStringToken nAttachmentName)
{
  IAttachmentOverride *m_pAttachmentOverride; // rdi
  const CModel *const *m_pBinding; // rax
  AttachmentHandle_t hOverride[17]; // [rsp+Fh] [rbp-11h] BYREF

  m_pAttachmentOverride = this->m_pAttachmentOverride;
  if ( m_pAttachmentOverride != 0
    && m_pAttachmentOverride->LookupOverrideAttachment(nAttachmentName.m_nHashCode,
         hOverride) == 0 )
  {
    return hOverride[0];
  }
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return CModel::GetAttachmentHandle(*m_pBinding, nAttachmentName);
  else
    return 0;
}


// CSkeletonInstance::FirstAttachmentHandle  (line 4162, @0x00000000020bb220, libserver.so)  // inlines: operator==
// calls: CModel::FirstAttachmentHandle
AttachmentHandle_t __fastcall CSkeletonInstance::FirstAttachmentHandle(const CSkeletonInstance *const this)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return CModel::FirstAttachmentHandle(*m_pBinding);
  else
    return 0;
}


// CSkeletonInstance::NextAttachmentHandle  (line 4169, @0x00000000020bb250, libserver.so)  // inlines: operator==
// calls: CModel::NextAttachmentHandle
AttachmentHandle_t __fastcall CSkeletonInstance::NextAttachmentHandle(
        const CSkeletonInstance *const this,
        AttachmentHandle_t hAttachment)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return CModel::NextAttachmentHandle(*m_pBinding, hAttachment);
  else
    return 0;
}


// CSkeletonInstance::GetAttachmentName  (line 4176, @0x00000000020bb280, libserver.so)  // inlines: operator==
// calls: CModel::GetAttachmentName
// strings: "no model"
const char *__fastcall CSkeletonInstance::GetAttachmentName(
        const CSkeletonInstance *const this,
        AttachmentHandle_t hAttachment)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return CModel::GetAttachmentName(*m_pBinding, hAttachment);
  else
    return "no model";
}


// CSkeletonInstance::GetAttachmentNameToken  (line 4183, @0x00000000020bb2b0, libserver.so)  // inlines: operator==
// calls: CModel::GetAttachmentNameToken
// callers: CBaseAnimating::GetAttachmentNameToken
CUtlStringToken __fastcall CSkeletonInstance::GetAttachmentNameToken(
        const CSkeletonInstance *const this,
        AttachmentHandle_t hAttachment)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    LODWORD(m_pBinding) = CModel::GetAttachmentNameToken(*m_pBinding, hAttachment);
  return m_pBinding;
}


// CSkeletonInstance::SetupAttachmentTransform  (line 4190, @0x00000000020bb2d0, libserver.so)  // inlines: operator==
// calls: CModel::SetupAttachmentTransform, SetIdentityTransform
// callers: CBodyComponent::SetupAttachmentTransform
void __fastcall CSkeletonInstance::SetupAttachmentTransform(
        const CSkeletonInstance *const this,
        AttachmentHandle_t hAttachment,
        CTransform *const worldSpaceRootTransform,
        CTransform *pWorldSpaceBoneTransformsIn,
        CTransform *pWorldSpaceTransformOut)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    CModel::SetupAttachmentTransform(
      *m_pBinding,
      hAttachment,
      worldSpaceRootTransform,
      pWorldSpaceBoneTransformsIn,
      pWorldSpaceTransformOut);
  else
    SetIdentityTransform(pWorldSpaceTransformOut);
}


// CSkeletonInstance::LookupAttachment  (line 4206, @0x00000000020bb300, libserver.so)  // inlines: GetModelData, MakeStringToken, operator const RuntimeClass_t*
// calls: CSkeletonInstance::LookupAttachment, MurmurHash2LowerCase, RegisterStringToken
// callers: CBaseAnimating::LookupAttachment, CBaseAnimating::ScriptLookupAttachment, CSkeletonInstance::GetAttachment, CSkeletonInstance::GetAttachmentLocal
AttachmentHandle_t __fastcall CSkeletonInstance::LookupAttachment(
        const CSkeletonInstance *const this,
        const char *pAttachmentName)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  CUtlStringToken v5; // esi
  uint32 v7; // eax
  uint32 v8; // [rsp+Ch] [rbp-14h]

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || m_pBinding->m_pData == 0 )
    return 0;
  v5.m_nHashCode = 0;
  if ( pAttachmentName != 0 && *pAttachmentName != 0 )
  {
    v7 = MurmurHash2LowerCase(pAttachmentName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v8 = v7;
      RegisterStringToken(v7, pAttachmentName, 0, 1);
      v5.m_nHashCode = v8;
    }
    else
    {
      v5.m_nHashCode = v7;
    }
  }
  return CSkeletonInstance::LookupAttachment(this, v5);
}


// CSkeletonInstance::GetAttachment  (line 4223, @0x00000000020cbb50, libserver.so)  // inlines: GetAttachment, MatrixGetColumn, operator=
// calls: CSkeletonInstance::LookupAttachment, CSkeletonInstance::GetAttachment
// callers: CBaseAnimating::GetAttachment
bool __fastcall CSkeletonInstance::GetAttachment(
        const CSkeletonInstance *const this,
        const char *szName,
        Vector *const absOrigin)
{
  AttachmentHandle_t v5; // al
  bool result; // al
  matrix3x4_t attachmentToWorld; // [rsp+0h] [rbp-40h] BYREF

  v5 = CSkeletonInstance::LookupAttachment(this, szName);
  result = CSkeletonInstance::GetAttachment(this, v5, &attachmentToWorld);
  absOrigin->x = attachmentToWorld.m_flMatVal[0][3];
  absOrigin->y = attachmentToWorld.m_flMatVal[1][3];
  absOrigin->z = attachmentToWorld.m_flMatVal[2][3];
  return result;
}


// CSkeletonInstance::GetAttachment  (line 4228, @0x00000000020cbc00, libserver.so)
// calls: CSkeletonInstance::LookupAttachment, CSkeletonInstance::GetAttachment
// callers: CBaseAnimating::GetAttachment
bool __fastcall CSkeletonInstance::GetAttachment(
        const CSkeletonInstance *const this,
        const char *szName,
        Vector *const absOrigin,
        QAngle *const absAngles)
{
  AttachmentHandle_t v7; // al

  v7 = CSkeletonInstance::LookupAttachment(this, szName);
  return CSkeletonInstance::GetAttachment(this, v7, absOrigin, absAngles);
}


// CSkeletonInstance::GetAttachment  (line 4238, @0x00000000020cbb10, libserver.so)  // inlines: MatrixGetColumn, operator=
// calls: CSkeletonInstance::GetAttachment
// callers: CBaseAnimating::GetAttachment
bool __fastcall CSkeletonInstance::GetAttachment(
        const CSkeletonInstance *const this,
        AttachmentHandle_t iAttachment,
        Vector *const absOrigin)
{
  bool result; // al
  matrix3x4_t attachmentToWorld; // [rsp+0h] [rbp-40h] BYREF

  result = CSkeletonInstance::GetAttachment(this, iAttachment, &attachmentToWorld);
  absOrigin->x = attachmentToWorld.m_flMatVal[0][3];
  absOrigin->y = attachmentToWorld.m_flMatVal[1][3];
  absOrigin->z = attachmentToWorld.m_flMatVal[2][3];
  return result;
}


// CSkeletonInstance::GetAttachment  (line 4246, @0x00000000020cbba0, libserver.so)  // inlines: MatrixAngles, MatrixPosition
// calls: CSkeletonInstance::GetAttachment, MatrixAngles
// callers: CBaseAnimating::GetAttachment, CSkeletonInstance::GetAttachment
bool __fastcall CSkeletonInstance::GetAttachment(
        const CSkeletonInstance *const this,
        AttachmentHandle_t iAttachment,
        Vector *const absOrigin,
        QAngle *const absAngles)
{
  bool Attachment; // r13
  matrix3x4_t attachmentToWorld; // [rsp+0h] [rbp-50h] BYREF

  Attachment = CSkeletonInstance::GetAttachment(this, iAttachment, &attachmentToWorld);
  MatrixAngles(&attachmentToWorld, absAngles);
  absOrigin->x = attachmentToWorld.m_flMatVal[0][3];
  absOrigin->y = attachmentToWorld.m_flMatVal[1][3];
  absOrigin->z = attachmentToWorld.m_flMatVal[2][3];
  return Attachment;
}


// CSkeletonInstance::GetAttachment  (line 4261, @0x00000000020cb810, libserver.so)  // inlines: CalcAbsolutePosition, GetModelData, GetWorldSpaceAttachments, Load, NodeToWorldTransform, operator const RuntimeClass_t*
// calls: MatrixCopy, CModel::GetNumAttachments, CSkeletonInstance::CalcWorldSpaceAttachments, CModel::GetSimAttachmentTransformIndex, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseAnimating::GetAttachment, CGameSceneNode::ComputeNodeToWorldForHierarchy, CSkeletonInstance::GetAttachment, CSkeletonInstance::GetAttachmentLocal, CGameSceneNode::ComputeBoneOrAttachmentToWorld
bool __fastcall CSkeletonInstance::GetAttachment(
        const CSkeletonInstance *const this,
        AttachmentHandle_t iAttachment,
        matrix3x4_t *const attachmentToWorld)
{
  IAttachmentOverride *m_pAttachmentOverride; // rdi
  const CModel *const *m_pBinding; // rax
  const CModel *v8; // r14
  matrix3x4a_t *v10; // r15
  int SimAttachmentTransformIndex; // eax
  bool bOk[49]; // [rsp+Fh] [rbp-31h] BYREF

  m_pAttachmentOverride = this->m_pAttachmentOverride;
  if ( m_pAttachmentOverride != 0
    && (*(m_pAttachmentOverride->_vptr_IAttachmentOverride + 1))(
         m_pAttachmentOverride,
         iAttachment,
         attachmentToWorld,
         bOk) == 0 )
  {
    return bOk[0];
  }
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && (v8 = *m_pBinding, *m_pBinding != 0) )
  {
    if ( iAttachment != 0
      && iAttachment <= CModel::GetNumAttachments(*m_pBinding)
      && (CSkeletonInstance::CalcWorldSpaceAttachments(this),
          v10 = &this->m_modelState.m_simulationState.m_pTransforms[this->m_modelState.m_simulationState.m_nBoneCount],
          (SimAttachmentTransformIndex = CModel::GetSimAttachmentTransformIndex(v8, iAttachment)) >= 0) )
    {
      MatrixCopy(&v10[SimAttachmentTransformIndex], attachmentToWorld);
      return 1;
    }
    else
    {
      if ( this->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
      MatrixCopy(&this->m_mNodeToWorld, attachmentToWorld);
      return 1;
    }
  }
  else
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
    MatrixCopy(&this->m_mNodeToWorld, attachmentToWorld);
    return 0;
  }
}


// CSkeletonInstance::GetAttachmentBoneCount  (line 4299, @0x00000000020bb3a0, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::GetNumAttachments, CModel::GetAttachmentBoneCount
// callers: CBaseAnimating::GetAttachmentBoneCount
int __fastcall CSkeletonInstance::GetAttachmentBoneCount(
        const CSkeletonInstance *const this,
        AttachmentHandle_t hAttachment)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v3; // rbx

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  v3 = *m_pBinding;
  if ( hAttachment != 0 && v3 != 0 && hAttachment <= CModel::GetNumAttachments(*m_pBinding) )
    return CModel::GetAttachmentBoneCount(v3, hAttachment);
  else
    return 0;
}


// CSkeletonInstance::GetAttachmentBone  (line 4310, @0x00000000020bb400, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::GetNumAttachments, CModel::GetAttachmentBone
// callers: CBaseAnimating::GetAttachmentBone
int __fastcall CSkeletonInstance::GetAttachmentBone(
        const CSkeletonInstance *const this,
        AttachmentHandle_t hAttachment,
        int nIndex)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v4; // rbx

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  v4 = *m_pBinding;
  if ( hAttachment != 0 && v4 != 0 && hAttachment <= CModel::GetNumAttachments(*m_pBinding) )
    return CModel::GetAttachmentBone(v4, hAttachment, nIndex);
  else
    return 0;
}


// CSkeletonInstance::GetAttachment  (line 4327, @0x00000000020cbd10, libserver.so)
// calls: CSkeletonInstance::LookupAttachment, CSkeletonInstance::GetAttachment
// callers: CBaseAnimating::GetAttachment
bool __fastcall CSkeletonInstance::GetAttachment(
        const CSkeletonInstance *const this,
        const char *szName,
        Vector *const absOrigin,
        Vector *forward,
        Vector *right,
        Vector *up)
{
  AttachmentHandle_t v9; // al

  v9 = CSkeletonInstance::LookupAttachment(this, szName);
  return CSkeletonInstance::GetAttachment(this, v9, absOrigin, forward, right, up);
}


// CSkeletonInstance::GetAttachment  (line 4332, @0x00000000020cbc40, libserver.so)  // inlines: MatrixGetColumn, MatrixPosition, operator=
// calls: CSkeletonInstance::GetAttachment
// callers: CBaseAnimating::GetAttachment, CSkeletonInstance::GetAttachment
bool __fastcall CSkeletonInstance::GetAttachment(
        const CSkeletonInstance *const this,
        AttachmentHandle_t iAttachment,
        Vector *const absOrigin,
        Vector *forward,
        Vector *right,
        Vector *up)
{
  bool result; // al
  matrix3x4_t attachmentToWorld; // [rsp+0h] [rbp-50h] BYREF

  result = CSkeletonInstance::GetAttachment(this, iAttachment, &attachmentToWorld);
  absOrigin->x = attachmentToWorld.m_flMatVal[0][3];
  absOrigin->y = attachmentToWorld.m_flMatVal[1][3];
  absOrigin->z = attachmentToWorld.m_flMatVal[2][3];
  if ( forward != 0 )
  {
    forward->x = attachmentToWorld.m_flMatVal[0][0];
    forward->y = attachmentToWorld.m_flMatVal[1][0];
    forward->z = attachmentToWorld.m_flMatVal[2][0];
  }
  if ( right != 0 )
  {
    right->x = attachmentToWorld.m_flMatVal[0][1];
    right->y = attachmentToWorld.m_flMatVal[1][1];
    right->z = attachmentToWorld.m_flMatVal[2][1];
  }
  if ( up != 0 )
  {
    up->x = attachmentToWorld.m_flMatVal[0][2];
    up->y = attachmentToWorld.m_flMatVal[1][2];
    up->z = attachmentToWorld.m_flMatVal[2][2];
  }
  return result;
}


// CSkeletonInstance::GetAttachmentLocal  (line 4358, @0x00000000020cbdd0, libserver.so)  // inlines: MatrixPosition
// calls: CSkeletonInstance::GetAttachmentLocal
// callers: CBaseAnimating::GetAttachmentLocal
bool __fastcall CSkeletonInstance::GetAttachmentLocal(
        const CSkeletonInstance *const this,
        AttachmentHandle_t iAttachment,
        Vector *const origin)
{
  bool result; // al
  matrix3x4_t attachmentToEntity; // [rsp+0h] [rbp-40h] BYREF

  result = CSkeletonInstance::GetAttachmentLocal(this, iAttachment, &attachmentToEntity);
  origin->x = attachmentToEntity.m_flMatVal[0][3];
  origin->y = attachmentToEntity.m_flMatVal[1][3];
  origin->z = attachmentToEntity.m_flMatVal[2][3];
  return result;
}


// CSkeletonInstance::GetAttachmentLocal  (line 4367, @0x00000000020cbe70, libserver.so)
// calls: CSkeletonInstance::LookupAttachment, CSkeletonInstance::GetAttachmentLocal
// callers: CBaseAnimating::GetAttachmentLocal
bool __fastcall CSkeletonInstance::GetAttachmentLocal(
        const CSkeletonInstance *const this,
        const char *szName,
        Vector *const origin,
        QAngle *const angles)
{
  AttachmentHandle_t v7; // al

  v7 = CSkeletonInstance::LookupAttachment(this, szName);
  return CSkeletonInstance::GetAttachmentLocal(this, v7, origin, angles);
}


// CSkeletonInstance::GetAttachmentLocal  (line 4372, @0x00000000020cbe10, libserver.so)  // inlines: MatrixAngles, MatrixPosition
// calls: CSkeletonInstance::GetAttachmentLocal, MatrixAngles
// callers: CBaseAnimating::GetAttachmentLocal, CSkeletonInstance::GetAttachmentLocal
bool __fastcall CSkeletonInstance::GetAttachmentLocal(
        const CSkeletonInstance *const this,
        AttachmentHandle_t iAttachment,
        Vector *const origin,
        QAngle *const angles)
{
  bool AttachmentLocal; // r13
  matrix3x4_t attachmentToEntity; // [rsp+0h] [rbp-50h] BYREF

  AttachmentLocal = CSkeletonInstance::GetAttachmentLocal(this, iAttachment, &attachmentToEntity);
  MatrixAngles(&attachmentToEntity, angles);
  origin->x = attachmentToEntity.m_flMatVal[0][3];
  origin->y = attachmentToEntity.m_flMatVal[1][3];
  origin->z = attachmentToEntity.m_flMatVal[2][3];
  return AttachmentLocal;
}


// CSkeletonInstance::GetAttachmentLocal  (line 4381, @0x00000000020cbd60, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform
// calls: CSkeletonInstance::GetAttachment, CGameSceneNode::CalcAbsolutePositionWhenDirty, MatrixInvert, ConcatTransforms
// callers: CBaseAnimating::GetAttachmentLocal, CSkeletonInstance::GetAttachmentLocal
bool __fastcall CSkeletonInstance::GetAttachmentLocal(
        const CSkeletonInstance *const this,
        AttachmentHandle_t iAttachment,
        matrix3x4_t *const attachmentToLocal)
{
  bool Attachment; // r15
  matrix3x4_t attachmentToWorld; // [rsp+0h] [rbp-90h] BYREF
  matrix3x4_t worldToEntity; // [rsp+30h] [rbp-60h] BYREF

  Attachment = CSkeletonInstance::GetAttachment(this, iAttachment, &attachmentToWorld);
  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
  MatrixInvert(&this->m_mNodeToWorld, &worldToEntity);
  ConcatTransforms(&worldToEntity, &attachmentToWorld, attachmentToLocal);
  return Attachment;
}


// CSkeletonInstance::DirtyHierarchyBoneFlags  (line 4391, @0x00000000020bb470, libserver.so)  // inlines: Load, Store, operator&
// callers: CGameSceneNode::FinalizeHierarchyUpdaterPostSpawn, CModelState::ComputeModelBoneFlags, CGameSceneNode::OnSetDormant, CSkeletonInstance::UpdateHierarchyBoneFlags, CGameSceneNode::FinalizeHierarchyRecursive, CGameSceneNode::PostInstanceSpawn, CSkeletonInstance::OnHierarchyChanged, CSkeletonInstance::SetModel, CSkeletonInstance::OnRestore
void __fastcall CSkeletonInstance::DirtyHierarchyBoneFlags(CSkeletonInstance *const this)
{
  if ( this->m_animationParentSpaceValidBoneFlags.m_value != CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS )
    this->m_animationParentSpaceValidBoneFlags.m_value &= 0xFFF3FFFF;
  if ( this->m_compositeParentSpaceValidBoneFlags.m_value != CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS )
    this->m_compositeParentSpaceValidBoneFlags.m_value &= 0xFFF3FFFF;
  if ( this->m_compositeWorldSpaceValidBoneFlags.m_value != CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS )
    this->m_compositeWorldSpaceValidBoneFlags.m_value &= 0xFFF3FFFF;
  this->m_modelState.m_bHierarchyBoneFlagsDirty.m_value = 1;
}


// CSkeletonInstance::UpdateHierarchyBoneFlags  (line 4413, @0x00000000020bb9f0, libserver.so)
// calls: CSkeletonInstance::DirtyHierarchyBoneFlags, CModelState::ComputeHierarchyBoneFlags
void __fastcall CSkeletonInstance::UpdateHierarchyBoneFlags(
        CSkeletonInstance *const this,
        bool bMarkHierarchyBoneFlagsDirty)
{
  if ( bMarkHierarchyBoneFlagsDirty )
    CSkeletonInstance::DirtyHierarchyBoneFlags(this);
  CModelState::ComputeHierarchyBoneFlags(&this->m_modelState);
}


// CSkeletonInstance::OnHierarchyChanged  (line 4423, @0x00000000020cb1f0, libserver.so)  // inlines: GetOwnerEntity, GetOwnerGameEntity, UpdateHierarchyBoneFlags
// calls: CGameSceneNodeHandle::Get, CSkeletonInstance::DirtyHierarchyBoneFlags, CGameSceneNode::OnHierarchyChanged, CModelState::ComputeHierarchyBoneFlags, CModelState::UpdateMotionTypeOfAggregate
void __fastcall CSkeletonInstance::OnHierarchyChanged(CSkeletonInstance *const this, bool bInPostDataUpdate)
{
  CGameSceneNode *v4; // rax
  __int64 v5; // rax
  CGameSceneNode *m_pParent; // rdi
  CSkeletonInstance *v7; // r13
  bool v8; // r15
  CSkeletonInstance *v9; // r12
  bool v10; // al
  CGameSceneNode *v11; // rdi
  __int64 v12; // rax
  uint8 m_nHierarchyType; // al
  CEntityInstance *v14; // r12
  __int64 v15; // rax
  CEntityInstance *m_pOwner; // r12
  __int64 v17; // rax

  if ( this->m_nHierarchyType != 0 && (*(this + 722) & 1) != 0 )
  {
    m_pOwner = this->m_pOwner;
    if ( m_pOwner != 0 && (*(m_pOwner->_vptr_IHandleEntity + 29))(this->m_pOwner) != 0 )
    {
      v17 = (*(m_pOwner->_vptr_IHandleEntity + 29))(m_pOwner);
      (*(*v17 + 136LL))(v17);
    }
    *(this + 722) &= ~1u;
  }
  if ( CGameSceneNodeHandle::Get(&this->m_hParent) != 0 )
  {
    v4 = CGameSceneNodeHandle::Get(&this->m_hParent);
    v5 = (*(v4->_vptr_CGameSceneNode + 9))(v4);
    m_pParent = this->m_pParent;
    v7 = v5;
    v8 = v5 != 0;
    if ( m_pParent != 0 )
      goto LABEL_5;
  }
  else
  {
    m_pParent = this->m_pParent;
    v8 = 0;
    v7 = 0;
    if ( m_pParent != 0 )
    {
LABEL_5:
      v9 = (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent);
      CSkeletonInstance::DirtyHierarchyBoneFlags(this);
      if ( v9 != 0 )
      {
        CSkeletonInstance::DirtyHierarchyBoneFlags(v9);
        v10 = v7 != v9;
      }
      else
      {
        v10 = v7 != 0;
      }
      if ( !v10 )
        goto LABEL_8;
      goto LABEL_27;
    }
  }
  v9 = 0;
  CSkeletonInstance::DirtyHierarchyBoneFlags(this);
  if ( v8 )
  {
LABEL_27:
    if ( v8 )
      CSkeletonInstance::DirtyHierarchyBoneFlags(v7);
  }
LABEL_8:
  CGameSceneNode::OnHierarchyChanged(this, bInPostDataUpdate);
  CModelState::ComputeHierarchyBoneFlags(&this->m_modelState);
  if ( v9 != 0 )
    CModelState::ComputeHierarchyBoneFlags(&v9->m_modelState);
  v11 = this->m_pParent;
  if ( v11 != 0 )
  {
    v12 = (*(v11->_vptr_CGameSceneNode + 9))(v11);
    if ( v12 != v9 && v12 != 0 )
      CModelState::ComputeHierarchyBoneFlags((v12 + 320));
  }
  m_nHierarchyType = this->m_nHierarchyType;
  if ( m_nHierarchyType != 0
    && (m_nHierarchyType == 1
     || (*(this->m_pParent->CGameSceneNode::m_pOwner->_vptr_IHandleEntity + 140))(this->m_pParent->CGameSceneNode::m_pOwner) != 0) )
  {
    v14 = this->m_pOwner;
    if ( v14 != 0 && (*(v14->_vptr_IHandleEntity + 29))(this->m_pOwner) != 0 )
    {
      v15 = (*(v14->_vptr_IHandleEntity + 29))(v14);
      *(this + 722) = (*(*v15 + 144LL))(v15) & 1 | *(this + 722) & 0xFE;
    }
  }
  CModelState::UpdateMotionTypeOfAggregate(&this->m_modelState, 1);
}


// CSkeletonInstance::DetermineHierarchyAttachType  (line 4504, @0x00000000020bb190, libserver.so)  // inlines: DetermineHierarchyAttachType, GetModelData, operator const RuntimeClass_t*
// calls: CSkeletonInstance::LookupAttachment, CModel::MasterSkeleton, CModelSkeleton::FindBoneIndexByHash
HierarchyType_t __fastcall CSkeletonInstance::DetermineHierarchyAttachType(
        const CSkeletonInstance *const this,
        CUtlStringToken nBoneOrAttachName)
{
  HierarchyType_t result; // eax
  AttachmentHandle_t v5; // dl
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  const CModelSkeleton *v8; // rax

  result = HierarchyType_t::HIERARCHY_ABSORIGIN;
  if ( nBoneOrAttachName.m_nHashCode != 0 && nBoneOrAttachName.m_nHashCode != -454460638 )
  {
    result = HierarchyType_t::HIERARCHY_NONE;
    if ( this->m_modelState.m_hModel.m_Value.m_pBinding != 0 )
    {
      result = HierarchyType_t::HIERARCHY_BONE_MERGE;
      if ( nBoneOrAttachName.m_nHashCode != 479676646 )
      {
        v5 = CSkeletonInstance::LookupAttachment(this, nBoneOrAttachName);
        result = HierarchyType_t::HIERARCHY_ATTACHMENT;
        if ( v5 == 0 )
        {
          m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
          if ( m_pBinding != 0 )
            m_pData = m_pBinding->m_pData;
          else
            m_pData = 0;
          v8 = CModel::MasterSkeleton(m_pData);
          return ~(CModelSkeleton::FindBoneIndexByHash(v8, nBoneOrAttachName.m_nHashCode) >> 31) & 4;
        }
      }
    }
  }
  return result;
}


// CSkeletonInstance::SetVelocity  (line 4533, @0x00000000020bba20, libserver.so)
// callers: CBodyComponent::SetVelocity
void __fastcall CSkeletonInstance::SetVelocity(CSkeletonInstance *const this, const Vector *const vVelocity)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 8))(m_pVPhysicsAggregate, vVelocity);
}


// CSkeletonInstance::SetAngularVelocity  (line 4542, @0x00000000020bba50, libserver.so)
// callers: CBodyComponent::SetAngularVelocity
void __fastcall CSkeletonInstance::SetAngularVelocity(CSkeletonInstance *const this, const Vector *const vAngVel)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 42))(m_pVPhysicsAggregate, vAngVel);
}


// CSkeletonInstance::SetAnimationParentSpaceStateDirty  (line 4551, @0x000000000209d570, libserver.so)  // inlines: SetAnimationParentSpaceStateDirty
// calls: CAnimationState::GetReadableBones, CAnimationState::MarkAllBonesUnreadable
void __fastcall CSkeletonInstance::SetAnimationParentSpaceStateDirty(CSkeletonInstance *const this)
{
  CAnimationState *p_m_animationState; // rbx

  p_m_animationState = &this->m_modelState.m_animationState;
  this->m_animationParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  if ( CAnimationState::GetReadableBones(&this->m_modelState.m_animationState) != 0 )
    CAnimationState::MarkAllBonesUnreadable(p_m_animationState);
}


// CSkeletonInstance::SetCompositeParentSpaceStateDirty  (line 4562, @0x000000000209d5b0, libserver.so)  // inlines: SetCompositeParentSpaceStateDirty
// calls: CAnimationState::GetReadableBones, CAnimationState::MarkAllBonesUnreadable
void __fastcall CSkeletonInstance::SetCompositeParentSpaceStateDirty(CSkeletonInstance *const this)
{
  CCompositeParentSpaceState *p_m_compositeParentSpaceState; // rbx

  p_m_compositeParentSpaceState = &this->m_modelState.m_compositeParentSpaceState;
  this->m_compositeParentSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  if ( CAnimationState::GetReadableBones(&this->m_modelState.m_compositeParentSpaceState) != 0 )
    CAnimationState::MarkAllBonesUnreadable(p_m_compositeParentSpaceState);
}


// CSkeletonInstance::SetCompositeWorldSpaceStateDirty  (line 4573, @0x000000000209fbe0, libserver.so)  // inlines: BitVec_ClearAll, CalcNumIntsForBits, MarkAllBonesDirty, SetCompositeWorldSpaceStateDirty, V_memset, memset
// calls: memset
void __fastcall CSkeletonInstance::SetCompositeWorldSpaceStateDirty(CSkeletonInstance *const this)
{
  uint32 *m_pReadableBones; // rdi
  int m_nBoneCount; // eax
  int v4; // edx
  int v5; // eax

  this->m_compositeWorldSpaceValidBoneFlags.m_value = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  m_pReadableBones = this->m_modelState.m_simulationState.m_pReadableBones;
  if ( m_pReadableBones != 0 )
  {
    m_nBoneCount = this->m_modelState.m_simulationState.m_nBoneCount;
    v4 = m_nBoneCount + 62;
    v5 = m_nBoneCount + 31;
    if ( v5 >= 0 )
      v4 = v5;
    memset(m_pReadableBones, 0, 4LL * (v4 >> 5));
  }
}


// CSkeletonInstance::InvalidatePhysicsRecursive  (line 4584, @0x00000000020dc690, libserver.so)
// calls: CGameSceneNode::InvalidatePhysicsRecursive
void __fastcall CSkeletonInstance::InvalidatePhysicsRecursive(CSkeletonInstance *const this, uint32 nChangeFlags)
{
  uint32 v2; // eax

  if ( this->m_pBoneTransformOverride != 0 )
  {
    v2 = nChangeFlags;
    if ( (nChangeFlags & 7) != 0 )
    {
      LOBYTE(v2) = nChangeFlags | 0x80;
      nChangeFlags = v2;
    }
  }
  CGameSceneNode::InvalidatePhysicsRecursive(this, nChangeFlags);
}


// CSkeletonInstance::PerformInvalidatePhysicsRecursive  (line 4598, @0x00000000020da960, libserver.so)  // inlines: curtime
// calls: CPhysicsGameSystem::MarkChanged, CPhysicsGameSystem::QueueScaleChanged, CGameSceneNode::PerformInvalidatePhysicsRecursive, CRenderGameSystem::IsSuppressingLatchSimulationState, CSkeletonInstance::HasNonAnimationDrivenBones, CBaseEntity::SetSimulationTime, CBaseEntity::MarkInterpolationLatchFlagsDirty
void __fastcall CSkeletonInstance::PerformInvalidatePhysicsRecursive(
        CSkeletonInstance *const this,
        uint32 nChangeFlags)
{
  HPhysicsSoftbody m_hCloth2; // rdi
  double v5; // xmm1_8
  CBaseEntity *m_pOwner; // r14
  CGlobalVars *v7; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v9; // xmm0_8

  if ( (nChangeFlags & 0xD0) != 0
    && !CRenderGameSystem::IsSuppressingLatchSimulationState()
    && CSkeletonInstance::HasNonAnimationDrivenBones(this) )
  {
    m_pOwner = this->m_pOwner;
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v9 = LODWORD(v7->m_flCurrentTime);
    }
    else
    {
      v9 = 0.0;
    }
    CBaseEntity::SetSimulationTime(m_pOwner, v9, v5);
  }
  if ( (nChangeFlags & 0xD3) != 0 && this->m_modelState.m_pVPhysicsAggregate != 0 )
    CPhysicsGameSystem::MarkChanged(g_pPhysicsGameSystem, nChangeFlags, this);
  if ( (nChangeFlags & 4) != 0 && this->m_modelState.m_pVPhysicsAggregate != 0 )
    CPhysicsGameSystem::QueueScaleChanged(g_pPhysicsGameSystem, this);
  m_hCloth2 = this->m_modelState.m_hCloth2;
  if ( m_hCloth2 != 0 )
  {
    this->m_modelState.m_nClothUpdateFlags |= nChangeFlags & 7;
    if ( (nChangeFlags & 0x400) != 0
      && (*(*m_hCloth2 + 616LL))(m_hCloth2) != 0
      && !CRenderGameSystem::IsSuppressingLatchSimulationState() )
    {
      CBaseEntity::MarkInterpolationLatchFlagsDirty(
        this->m_pOwner,
        EInterpolatedVarFlagBits::LATCH_CLIENT_AUTHORITATIVE_BIT);
    }
  }
  CGameSceneNode::PerformInvalidatePhysicsRecursive(this, nChangeFlags);
}


// CSkeletonInstance::UpdatePhysicsScale  (line 4667, @0x00000000020d0db0, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsScale, Load
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty, CModelState::SetScale
// callers: CPhysicsGameSystem::ProcessScaleChanges
void __fastcall CSkeletonInstance::UpdatePhysicsScale(CSkeletonInstance *const this)
{
  float v1; // xmm1_4

  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this);
  CModelState::SetScale(&this->m_modelState, this, COERCE_DOUBLE(LODWORD(this->m_flAbsScale)), v1);
}


// CSkeletonInstance::LookupSequence  (line 4676, @0x00000000020bba80, libserver.so)  // inlines: operator==
// calls: CModel::LookupSequence
// callers: CBodyComponent::LookupSequence, CSkeletonAnimationController::SetSequence, CSkeletonAnimationController::SequenceDuration
HSequence __fastcall CSkeletonInstance::LookupSequence(const CSkeletonInstance *const this, const char *pSequenceName)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return CModel::LookupSequence(*m_pBinding, pSequenceName);
  else
    return -1;
}


// CSkeletonInstance::GetWorldSpaceTransform  (line 4683, @0x00000000020cbeb0, libserver.so)  // inlines: CBoneAccessor, CalcAbsolutePosition, Cleanup, GetWorldSpaceBones, GetWorldSpaceState, Load, NodeToWorldTransform, operator[], ~CBoneAccessor
// calls: CSkeletonInstance::CalcWorldSpaceBones, operator delete [], CGameSceneNode::CalcAbsolutePositionWhenDirty, CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CPhysicsGameSystem::TeleportToAnimationState, CBaseAnimating::GetBoneTransform, CGameSceneNode::ComputeBoneOrAttachmentToWorld, CSkeletonInstance::GetRootBoneToWorldTransform, CSkeletonInstance::GetWorldSpaceTransform
const matrix3x4a_t *__fastcall CSkeletonInstance::GetWorldSpaceTransform(
        const CSkeletonInstance *const this,
        int nJointIndex)
{
  matrix3x4a_t *m_pTransforms; // rax

  CSkeletonInstance::CalcWorldSpaceBones(this, CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS);
  m_pTransforms = this->m_modelState.m_simulationState.m_pTransforms;
  if ( m_pTransforms != 0 )
    return &m_pTransforms[nJointIndex];
  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
  return &this->m_mNodeToWorld;
}


// CSkeletonInstance::GetWorldSpaceTransform  (line 4699, @0x00000000020cd320, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::FindBoneIndex, CSkeletonInstance::GetWorldSpaceTransform
bool __fastcall CSkeletonInstance::GetWorldSpaceTransform(
        const CSkeletonInstance *const this,
        const char *pJointName,
        matrix3x4a_t *pJointTransform)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  int BoneIndex; // eax
  bool v8; // dl

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  BoneIndex = CModel::FindBoneIndex(m_pData, pJointName);
  v8 = 0;
  if ( BoneIndex >= 0 )
  {
    *pJointTransform = *CSkeletonInstance::GetWorldSpaceTransform(this, BoneIndex);
    return 1;
  }
  return v8;
}


// CSkeletonInstance::GetWorldSpaceTransform  (line 4709, @0x00000000020c9c90, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CPhysicsGameSystem::SetPhysGroupMask
void __fastcall CSkeletonInstance::GetWorldSpaceTransform(
        const CSkeletonInstance *const this,
        matrix3x4a_t *pTransform)
{
  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
  *&pTransform->m_flMatVal[0][0] = *&this->m_mNodeToWorld.m_flMatVal[0][0];
  *&pTransform->m_flMatVal[0][2] = *&this->m_mNodeToWorld.m_flMatVal[0][2];
  *&pTransform->m_flMatVal[1][0] = *&this->m_mNodeToWorld.m_flMatVal[1][0];
  *&pTransform->m_flMatVal[1][2] = *&this->m_mNodeToWorld.m_flMatVal[1][2];
  *&pTransform->m_flMatVal[2][0] = *&this->m_mNodeToWorld.m_flMatVal[2][0];
  *&pTransform->m_flMatVal[2][2] = *&this->m_mNodeToWorld.m_flMatVal[2][2];
}


// CSkeletonInstance::GetRenderBounds  (line 4714, @0x00000000020c9cf0, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform, VectorSubtract, operator-, operator=
// calls: CRenderGameSystem::IsRenderingWithViewModels, CGameSceneNode::CalcAbsolutePositionWhenDirty, CModelState::GetRenderBounds
// callers: CBodyComponent::GetRenderBounds, CSkeletonInstance::OBBMins, CSkeletonInstance::OBBMaxs
void __fastcall CSkeletonInstance::GetRenderBounds(const CSkeletonInstance *const this, Vector *pMins, Vector *pMaxs)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // r14
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  vec_t v11; // xmm2_4
  CSkeletonAnimationController *m_pController; // rdi
  float v13; // [rsp+4h] [rbp-4Ch]
  float v14; // [rsp+8h] [rbp-48h]
  float v15; // [rsp+Ch] [rbp-44h]
  AABB_t aabb; // [rsp+10h] [rbp-40h] BYREF

  if ( g_pRenderGameSystem != 0
    && CRenderGameSystem::IsRenderingWithViewModels(g_pRenderGameSystem, this->m_modelState.m_hSceneObjectUpdater) )
  {
    pMins->x = -256.0;
    pMins->y = -256.0;
    pMins->z = -256.0;
    pMaxs->x = 256.0;
    pMaxs->y = 256.0;
    pMaxs->z = 256.0;
  }
  else
  {
    m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
    if ( m_pVPhysicsAggregate != 0
      && ((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 25))(this->m_modelState.m_pVPhysicsAggregate) & 2) != 0 )
    {
      if ( this->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
      v13 = this->m_mNodeToWorld.m_flMatVal[0][3];
      v14 = this->m_mNodeToWorld.m_flMatVal[1][3];
      v15 = this->m_mNodeToWorld.m_flMatVal[2][3];
      (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 44))(m_pVPhysicsAggregate, &aabb);
      v7 = aabb.m_vMinBounds.z - v15;
      v8 = aabb.m_vMinBounds.x - v13;
      pMins->y = aabb.m_vMinBounds.y - v14;
      y = aabb.m_vMaxBounds.y;
      pMins->z = v7;
      z = aabb.m_vMaxBounds.z;
      pMins->x = v8;
      v11 = aabb.m_vMaxBounds.x - v13;
      pMaxs->y = y - v14;
      pMaxs->z = z - v15;
      pMaxs->x = v11;
    }
    else
    {
      m_pController = this->m_pController;
      if ( m_pController != 0 )
        (*(m_pController->_vptr_CSkeletonAnimationController + 25))(m_pController, pMins, pMaxs);
      else
        CModelState::GetRenderBounds(&this->m_modelState, pMins, pMaxs);
    }
  }
}


// CSkeletonInstance::GetRenderBoundsWorldSpace  (line 4751, @0x00000000020c9eb0, libserver.so)  // inlines: CalcAbsolutePosition, DistTo, FastSqrt, Length, Load, NodeToWorldTransform, VectorAdd, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator+, operator+=, operator-=, operator=
// calls: CRenderGameSystem::IsRenderingWithViewModels, TransformAABB, CGameSceneNode::CalcAbsolutePositionWhenDirty, CModelState::GetRenderBounds
// callers: CBodyComponent::GetRenderBoundsWorldSpace
void __fastcall CSkeletonInstance::GetRenderBoundsWorldSpace(
        const CSkeletonInstance *const this,
        Vector *pMins,
        Vector *pMaxs)
{
  float v6; // xmm2_4
  float v7; // xmm1_4
  vec_t v8; // xmm3_4
  IPhysAggregateInstance *m_pVPhysicsAggregate; // r14
  CSkeletonAnimationController *m_pController; // rdi
  CGameSceneNode *m_pParent; // rdi
  const CSkeletonInstance *v12; // rax
  float v13; // xmm0_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  Vector vMins; // [rsp+10h] [rbp-60h] BYREF
  AABB_t aabb; // [rsp+20h] [rbp-50h] BYREF

  if ( CRenderGameSystem::IsRenderingWithViewModels(g_pRenderGameSystem, this->m_modelState.m_hSceneObjectUpdater) )
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
    v6 = this->m_mNodeToWorld.m_flMatVal[1][3];
    v7 = this->m_mNodeToWorld.m_flMatVal[2][3];
    v8 = this->m_mNodeToWorld.m_flMatVal[0][3] + 256.0;
    pMins->x = this->m_mNodeToWorld.m_flMatVal[0][3] - 256.0;
    pMins->y = v6 - 256.0;
    pMins->z = v7 - 256.0;
    pMaxs->x = v8;
    pMaxs->y = v6 + 256.0;
    pMaxs->z = v7 + 256.0;
  }
  else
  {
    m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
    if ( m_pVPhysicsAggregate != 0
      && ((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 25))(this->m_modelState.m_pVPhysicsAggregate) & 2) != 0 )
    {
      (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 44))(m_pVPhysicsAggregate, &aabb);
      *pMins = aabb.m_vMinBounds;
      *pMaxs = aabb.m_vMaxBounds;
    }
    else
    {
      m_pController = this->m_pController;
      if ( m_pController != 0 )
        (*(m_pController->_vptr_CSkeletonAnimationController + 25))(m_pController, &vMins, &aabb);
      else
        CModelState::GetRenderBounds(&this->m_modelState, &vMins, &aabb.m_vMinBounds);
      if ( this->m_nHierarchyType == 1 && (m_pParent = this->m_pParent) != 0 )
      {
        v12 = (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent);
        CSkeletonInstance::GetRenderBoundsWorldSpace(v12, pMins, pMaxs);
        v13 = fsqrt(
                (((aabb.m_vMinBounds.x - vMins.x) * (aabb.m_vMinBounds.x - vMins.x))
               + ((aabb.m_vMinBounds.y - vMins.y) * (aabb.m_vMinBounds.y - vMins.y)))
              + ((aabb.m_vMinBounds.z - vMins.z) * (aabb.m_vMinBounds.z - vMins.z)));
        pMins->x = pMins->x - v13;
        pMins->y = pMins->y - v13;
        pMins->z = pMins->z - v13;
        pMaxs->x = pMaxs->x + v13;
        v14 = pMaxs->y + v13;
        v15 = v13 + pMaxs->z;
        pMaxs->y = v14;
        pMaxs->z = v15;
      }
      else
      {
        if ( this->m_bDirtyAbsTransform.m_value )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
        TransformAABB(&this->m_mNodeToWorld, &vMins, &aabb.m_vMinBounds, pMins, pMaxs);
      }
    }
  }
}


// CSkeletonInstance::OBBMins  (line 4825, @0x00000000020ca160, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform, VectorSubtract, operator-
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty, CSkeletonInstance::GetRenderBounds
// callers: CBodyComponent::OBBMins
Vector __fastcall CSkeletonInstance::OBBMins(const CSkeletonInstance *const this)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  vec_t v3; // xmm0_4
  vec_t v4; // xmm2_4
  Vector mins; // [rsp+10h] [rbp-50h] BYREF
  Vector v8; // [rsp+20h] [rbp-40h]
  Vector maxs; // [rsp+30h] [rbp-30h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 43))(m_pVPhysicsAggregate, &maxs);
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
    v3 = maxs.z - this->m_mNodeToWorld.m_flMatVal[2][3];
    v4 = maxs.x - this->m_mNodeToWorld.m_flMatVal[0][3];
    v8.y = maxs.y - this->m_mNodeToWorld.m_flMatVal[1][3];
    v8.z = v3;
    v8.x = v4;
  }
  else
  {
    CSkeletonInstance::GetRenderBounds(this, &mins, &maxs);
    v8 = mins;
  }
  *&result.x = *&v8.x;
  result.z = v8.z;
  return result;
}


// CSkeletonInstance::OBBMaxs  (line 4842, @0x00000000020ca200, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform, VectorSubtract, operator-
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty, CSkeletonInstance::GetRenderBounds
// callers: CBodyComponent::OBBMaxs
Vector __fastcall CSkeletonInstance::OBBMaxs(const CSkeletonInstance *const this)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  vec_t v3; // xmm0_4
  vec_t v4; // xmm2_4
  Vector mins; // [rsp+10h] [rbp-50h] BYREF
  Vector v8; // [rsp+20h] [rbp-40h]
  Vector maxs; // [rsp+30h] [rbp-30h] BYREF
  float v10; // [rsp+3Ch] [rbp-24h]
  float v11; // [rsp+40h] [rbp-20h]
  float v12; // [rsp+44h] [rbp-1Ch]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 43))(m_pVPhysicsAggregate, &maxs);
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
    v3 = v12 - this->m_mNodeToWorld.m_flMatVal[2][3];
    v4 = v10 - this->m_mNodeToWorld.m_flMatVal[0][3];
    v8.y = v11 - this->m_mNodeToWorld.m_flMatVal[1][3];
    v8.z = v3;
    v8.x = v4;
  }
  else
  {
    CSkeletonInstance::GetRenderBounds(this, &mins, &maxs);
    v8 = maxs;
  }
  *&result.x = *&v8.x;
  result.z = v8.z;
  return result;
}


// CSkeletonInstance::GetOBB  (line 4859, @0x00000000020ca2a0, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform, VectorSubtract, operator-, operator=
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBodyComponent::GetOBB
void __fastcall CSkeletonInstance::GetOBB(const CSkeletonInstance *const this, Vector *pMins, Vector *pMaxs)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  vec_t v10; // xmm0_4
  vec_t v11; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  vec_t v14; // xmm2_4
  vec_t x; // xmm0_4
  vec_t v16; // xmm1_4
  AABB_t bbox; // [rsp+0h] [rbp-40h] BYREF

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 43))(m_pVPhysicsAggregate, &bbox);
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
    v7 = this->m_mNodeToWorld.m_flMatVal[0][3];
    v8 = this->m_mNodeToWorld.m_flMatVal[1][3];
    v9 = this->m_mNodeToWorld.m_flMatVal[2][3];
    v10 = bbox.m_vMinBounds.z - v9;
    v11 = bbox.m_vMinBounds.x - v7;
    pMins->y = bbox.m_vMinBounds.y - v8;
    y = bbox.m_vMaxBounds.y;
    pMins->z = v10;
    z = bbox.m_vMaxBounds.z;
    pMins->x = v11;
    v14 = bbox.m_vMaxBounds.x - v7;
    pMaxs->y = y - v8;
    pMaxs->z = z - v9;
    pMaxs->x = v14;
  }
  else
  {
    x = vec3_origin.x;
    pMaxs->y = vec3_origin.y;
    v16 = vec3_origin.z;
    pMaxs->x = x;
    pMaxs->z = v16;
    pMins->x = x;
    pMins->y = pMaxs->y;
    pMins->z = pMaxs->z;
  }
}


// CSkeletonInstance::GetWorldSpaceAABB  (line 4875, @0x00000000020ca3b0, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform, operator=
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBodyComponent::GetWorldSpaceAABB
void __fastcall CSkeletonInstance::GetWorldSpaceAABB(const CSkeletonInstance *const this, Vector *pMins, Vector *pMaxs)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  AABB_t bbox; // [rsp+0h] [rbp-40h] BYREF

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 43))(m_pVPhysicsAggregate, &bbox);
    *pMins = bbox.m_vMinBounds;
    *pMaxs = bbox.m_vMaxBounds;
  }
  else
  {
    if ( this->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
    v7 = this->m_mNodeToWorld.m_flMatVal[0][3];
    v8 = this->m_mNodeToWorld.m_flMatVal[1][3];
    v9 = this->m_mNodeToWorld.m_flMatVal[2][3];
    pMaxs->x = v7;
    pMaxs->y = v8;
    pMaxs->z = v9;
    pMins->x = v7;
    pMins->y = pMaxs->y;
    pMins->z = pMaxs->z;
  }
}


// CSkeletonInstance::GetHitboxSetList  (line 4891, @0x00000000020bbb30, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::GetHitboxSetsForMeshGroupMask
int __fastcall CSkeletonInstance::GetHitboxSetList(
        const CSkeletonInstance *const this,
        CHitboxSetList *const list,
        CUtlStringToken hitboxSetName)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  const CModel *m_pData; // rdi

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  CModel::GetHitboxSetsForMeshGroupMask(m_pData, list, this->m_modelState.m_MeshGroupMask.m_Value, hitboxSetName);
  return list->m_Size;
}


// CSkeletonInstance::GetHitBoxList  (line 4899, @0x00000000020bbb80, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::GetHitboxesForMeshGroupMask
// callers: CSkeletonInstance::GetPoseSpaceHitboxBounds, CSkeletonInstance::GetHitBoxListAndTransforms
int __fastcall CSkeletonInstance::GetHitBoxList(
        const CSkeletonInstance *const this,
        CHitboxList *const list,
        CUtlStringToken hitboxSetName)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || *m_pBinding == 0 )
    return 0;
  CModel::GetHitboxesForMeshGroupMask(*m_pBinding, list, this->m_modelState.m_MeshGroupMask.m_Value, hitboxSetName);
  return list->m_Size;
}


// CSkeletonInstance::GetHitBoxListAndTransforms  (line 4911, @0x00000000020e6c60, libserver.so)  // inlines: CBoneAccessor, CalcAbsolutePosition, Cleanup, GetModelData, GetWorldSpaceBones, GetWorldSpaceState, Load, MatrixMultiply, NodeToWorldTransform, SetOrigin, operator const RuntimeClass_t*, operator[], ~CBoneAccessor
// calls: CSkeletonInstance::GetHitBoxList, CSkeletonInstance::CalcWorldSpaceBones, CGameSceneNode::CalcAbsolutePositionWhenDirty, CUtlVectorBase<matrix3x4a_t, CUtlMemoryFixedGrowable<matrix3x4a_t, 32ul, int> >::SetCount, CModel::GetBoneIndexForHitbox, ConcatTransforms, operator delete [], CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CSkeletonInstance::GetWorldSpaceHitboxBounds, CSkeletonInstance::DebugShowHitboxes, CSkeletonInstance::TraceRayAgainstHitboxes, CSkeletonInstance::SweepShapeAgainstHitboxes
int __fastcall CSkeletonInstance::GetHitBoxListAndTransforms(
        const CSkeletonInstance *const this,
        CHitboxList *const hitboxes,
        CHitboxTransformList *const transforms,
        CUtlStringToken hitboxSetName)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  char v7; // al
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  matrix3x4a_t *v11; // rdx
  matrix3x4a_t *v12; // rax
  int BoneIndexForHitbox; // eax
  HitBoxAndMesh_t *m_pMemory; // rdx
  const CHitBox *m_pHitBox; // r13
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // rax
  float *v19; // rax
  matrix3x4a_t *v20; // rax
  int nHitBoxes; // [rsp+4h] [rbp-7Ch]
  __int64 v22; // [rsp+10h] [rbp-70h]
  const CModel *pModel; // [rsp+18h] [rbp-68h]
  matrix3x4a_t *p_m_mNodeToWorld; // [rsp+28h] [rbp-58h]
  matrix3x4a_t *bones; // [rsp+30h] [rbp-50h]

  nHitBoxes = CSkeletonInstance::GetHitBoxList(this, hitboxes, hitboxSetName);
  if ( nHitBoxes == 0 )
    return 0;
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
  {
    pModel = m_pBinding->m_pData;
    v7 = (*(pModel->_vptr_CModel + 4))(pModel);
  }
  else
  {
    pModel = 0;
    v7 = (*(loc_0 + 32LL))(0);
  }
  if ( v7 == 0 )
    return 0;
  CSkeletonInstance::CalcWorldSpaceBones(this, CModelSkeleton::BoneFlags_t::FLAG_HITBOX);
  bones = this->m_modelState.m_simulationState.m_pTransforms;
  if ( this->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(&this->CGameSceneNode);
  CUtlVectorBase<matrix3x4a_t,CUtlMemoryFixedGrowable<matrix3x4a_t,32ul,int>>::SetCount(transforms, nHitBoxes);
  if ( nHitBoxes > 0 )
  {
    v9 = 0;
    v10 = 0;
    v22 = 16 * ((nHitBoxes - 1) + 1LL);
    while ( 1 )
    {
      BoneIndexForHitbox = CModel::GetBoneIndexForHitbox(pModel, &hitboxes->m_Memory.m_pMemory[v10 / 0x10]);
      m_pMemory = hitboxes->m_Memory.m_pMemory;
      m_pHitBox = m_pMemory[v10 / 0x10].m_pHitBox;
      if ( !m_pHitBox->m_bForcedTransform )
        break;
      if ( BoneIndexForHitbox < 0 )
      {
        v20 = transforms->m_Memory.m_pMemory;
        *&v20[v9].m_flMatVal[0][0] = *&this->m_mNodeToWorld.m_flMatVal[0][0];
        *&v20[v9].m_flMatVal[0][2] = *&this->m_mNodeToWorld.m_flMatVal[0][2];
        *&v20[v9].m_flMatVal[1][0] = *&this->m_mNodeToWorld.m_flMatVal[1][0];
        *&v20[v9].m_flMatVal[1][2] = *&this->m_mNodeToWorld.m_flMatVal[1][2];
        *&v20[v9].m_flMatVal[2][0] = *&this->m_mNodeToWorld.m_flMatVal[2][0];
        *&v20[v9].m_flMatVal[2][2] = *&this->m_mNodeToWorld.m_flMatVal[2][2];
        p_m_mNodeToWorld = &this->m_mNodeToWorld;
      }
      else
      {
        p_m_mNodeToWorld = &bones[BoneIndexForHitbox];
        ConcatTransforms(
          &this->m_mNodeToWorld,
          &m_pMemory[v10 / 0x10].m_pHitBox->m_forcedTransform,
          &transforms->m_Memory.m_pMemory[v9]);
      }
      if ( m_pHitBox->m_bTranslationOnly )
      {
        v10 += 16LL;
        v16 = p_m_mNodeToWorld->m_flMatVal[1][3];
        v17 = p_m_mNodeToWorld->m_flMatVal[2][3];
        v18 = v9 * 48;
        ++v9;
        v19 = (transforms->m_Memory.m_pMemory + v18);
        v19[3] = p_m_mNodeToWorld->m_flMatVal[0][3];
        v19[7] = v16;
        v19[11] = v17;
        if ( v10 == v22 )
          return nHitBoxes;
      }
      else
      {
LABEL_13:
        v10 += 16LL;
        ++v9;
        if ( v10 == v22 )
          return nHitBoxes;
      }
    }
    v11 = &this->m_mNodeToWorld;
    if ( BoneIndexForHitbox >= 0 )
      v11 = &bones[BoneIndexForHitbox];
    v12 = transforms->m_Memory.m_pMemory;
    *&v12[v9].m_flMatVal[0][0] = *&v11->m_flMatVal[0][0];
    *&v12[v9].m_flMatVal[0][2] = *&v11->m_flMatVal[0][2];
    *&v12[v9].m_flMatVal[1][0] = *&v11->m_flMatVal[1][0];
    *&v12[v9].m_flMatVal[1][2] = *&v11->m_flMatVal[1][2];
    *&v12[v9].m_flMatVal[2][0] = *&v11->m_flMatVal[2][0];
    *&v12[v9].m_flMatVal[2][2] = *&v11->m_flMatVal[2][2];
    goto LABEL_13;
  }
  return nHitBoxes;
}


// CSkeletonInstance::GetWorldSpaceHitboxBounds  (line 4967, @0x00000000020e6ef0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, TransformAABB, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: ClearBounds, CSkeletonInstance::GetHitBoxListAndTransforms, TransformAABB, AddPointToBounds, CUtlMemory<HitBoxAndMesh_t, int>::Purge, CUtlMemory<matrix3x4a_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<matrix3x4a_t, CUtlMemoryFixedGrowable<matrix3x4a_t, 32ul, int> >::~CUtlVectorBase, CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume
bool __fastcall CSkeletonInstance::GetWorldSpaceHitboxBounds(
        const CSkeletonInstance *const this,
        Vector *pMins,
        Vector *pMaxs,
        CUtlStringToken hitboxSetName)
{
  __int64 v6; // rbx
  int v7; // r12d
  bool v8; // bl
  uint32 m_nGrowSize; // eax
  uint32 v10; // edx
  uint32 v11; // edx
  Vector vMins; // [rsp+30h] [rbp-8C0h] BYREF
  Vector vMaxs; // [rsp+40h] [rbp-8B0h] BYREF
  Vector vBoxMins; // [rsp+50h] [rbp-8A0h] BYREF
  Vector vBoxMaxs; // [rsp+60h] [rbp-890h] BYREF
  CHitboxList list; // [rsp+70h] [rbp-880h] BYREF
  CHitboxTransformList transforms; // [rsp+290h] [rbp-660h] BYREF
  unsigned __int64 v21; // [rsp+8B8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  ClearBounds(&vMins, &vMaxs);
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  list.m_Size = 0;
  list.m_Memory.m_nAllocationCount = 32;
  list.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Size = 0;
  transforms.m_Memory.m_nAllocationCount = 32;
  transforms.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
  if ( CSkeletonInstance::GetHitBoxListAndTransforms(this, &list, &transforms, hitboxSetName) != 0 )
  {
    if ( list.m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        TransformAABB(
          &transforms.m_Memory.m_pMemory[v6],
          &list.m_Memory.m_pMemory[v6].m_pHitBox->m_vMinBounds,
          &list.m_Memory.m_pMemory[v6].m_pHitBox->m_vMaxBounds,
          &vBoxMins,
          &vBoxMaxs);
        AddPointToBounds(&vBoxMins, &vMins, &vMaxs);
        AddPointToBounds(&vBoxMaxs, &vMins, &vMaxs);
        ++v7;
        ++v6;
      }
      while ( list.m_Size > v7 );
    }
    v8 = 1;
    *pMins = vMins;
    *pMaxs = vMaxs;
  }
  else
  {
    v8 = 0;
    *pMins = vMins;
    *pMaxs = vMaxs;
  }
  transforms.m_Size = 0;
  if ( transforms.m_Memory.m_nAllocationCount < 0 )
  {
    v10 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = transforms.m_Memory.m_nGrowSize;
    v10 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
    if ( transforms.m_Memory.m_pMemory != &transforms.m_Memory.m_FixedMemory )
    {
      if ( transforms.m_Memory.m_pMemory != 0 && v10 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = transforms.m_Memory.m_nGrowSize;
      }
      transforms.m_Memory.m_nAllocationCount = 32;
      transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
      transforms.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_12;
    }
  }
  if ( v10 == 0 )
    CUtlMemory<matrix3x4a_t,int>::Purge(&transforms.m_Memory);
LABEL_12:
  list.m_Size = 0;
  v11 = list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_Memory.m_nAllocationCount < 0 || list.m_Memory.m_pMemory == &list.m_Memory.m_FixedMemory )
  {
    if ( v11 == 0 )
      CUtlMemory<HitBoxAndMesh_t,int>::Purge(&list.m_Memory);
  }
  else if ( list.m_Memory.m_pMemory != 0 && v11 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v8;
}


// CSkeletonInstance::GetPoseSpaceHitboxBounds  (line 4998, @0x00000000020d1160, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetModelData, Purge, Purge_FixedGrowable, RemoveAll, TransformAABB, operator const RuntimeClass_t*, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: ClearBounds, CModel::NumBones, CModel::GetBindPoseWorldTransforms, CSkeletonInstance::GetHitBoxList, TransformAABB, AddPointToBounds, CModel::GetBoneIndexForHitbox, AssertMsg_ConditionFailed, CUtlMemory<HitBoxAndMesh_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Bone index %d for hitbox %d is out of bounds (%u bones)"
// globals: CSkeletonInstance::GetPoseSpaceHitboxBounds(Vector *,Vector *,matrix3x4a_t const*,CUtlStringToken)::__executeCount, CSkeletonInstance::GetPoseSpaceHitboxBounds(Vector *,Vector *,matrix3x4a_t const*,CUtlStringToken)::_assertionConstants
bool __fastcall CSkeletonInstance::GetPoseSpaceHitboxBounds(
        const CSkeletonInstance *const this,
        Vector *pMins,
        Vector *pMaxs,
        const matrix3x4a_t *pRootTransform,
        CUtlStringToken hitboxSetName)
{
  const CModel **m_pBinding; // rax
  void *v9; // rsp
  __int64 v10; // rbx
  const matrix3x4a_t *v11; // rdi
  const Vector *p_m_vMaxBounds; // rdx
  const Vector *p_m_vMinBounds; // rsi
  Vector *v14; // r12
  HitBoxAndMesh_t *v15; // rsi
  const CHitBox *m_pHitBox; // r12
  int BoneIndexForHitbox; // eax
  uint32 v18; // eax
  Vector *pMaxsa; // [rsp+10h] [rbp-2D0h] BYREF
  Vector *pMinsa; // [rsp+18h] [rbp-2C8h]
  char v21; // [rsp+27h] [rbp-2B9h]
  const matrix3x4a_t *pRootTransforma; // [rsp+28h] [rbp-2B8h]
  matrix3x4a_t *pTransforms; // [rsp+30h] [rbp-2B0h]
  Vector *vecMinsOut; // [rsp+38h] [rbp-2A8h]
  int v25; // [rsp+40h] [rbp-2A0h]
  uint nBoneCount; // [rsp+44h] [rbp-29Ch]
  const CModel *pModel; // [rsp+48h] [rbp-298h]
  Vector vMins; // [rsp+50h] [rbp-290h] BYREF
  Vector vMaxs; // [rsp+60h] [rbp-280h] BYREF
  Vector vBoxMins; // [rsp+70h] [rbp-270h] BYREF
  Vector vBoxMaxs; // [rsp+80h] [rbp-260h] BYREF
  CHitboxList list; // [rsp+90h] [rbp-250h] BYREF
  unsigned __int64 v33; // [rsp+2A8h] [rbp-38h]

  pMinsa = pMins;
  v33 = __readfsqword(0x28u);
  pMaxsa = pMaxs;
  pRootTransforma = pRootTransform;
  ClearBounds(&vMins, &vMaxs);
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || (pModel = *m_pBinding) == 0 )
  {
    v21 = 0;
    *pMinsa = vMins;
    *pMaxsa = vMaxs;
    return v21;
  }
  v21 = (*(pModel->_vptr_CModel + 4))(pModel);
  if ( v21 == 0 )
  {
    *pMinsa = vMins;
    *pMaxsa = vMaxs;
    return v21;
  }
  nBoneCount = CModel::NumBones(pModel);
  v9 = alloca(16 * ((48 * nBoneCount + 46) >> 4));
  pTransforms = (&pMaxsa & 0xFFFFFFFFFFFFFFEFLL);
  CModel::GetBindPoseWorldTransforms(pModel, pRootTransforma, nBoneCount, (&pMaxsa & 0xFFFFFFFFFFFFFFEFLL));
  list.m_Size = 0;
  list.m_Memory.m_nAllocationCount = 32;
  list.m_Memory.m_nGrowSize = 0x80000000;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  if ( CSkeletonInstance::GetHitBoxList(this, &list, hitboxSetName) != 0 )
  {
    if ( list.m_Size > 0 )
    {
      v10 = 0;
      vecMinsOut = &vBoxMins;
      do
      {
        v25 = v10;
        v15 = &list.m_Memory.m_pMemory[v10];
        m_pHitBox = v15->m_pHitBox;
        BoneIndexForHitbox = CModel::GetBoneIndexForHitbox(pModel, v15);
        if ( nBoneCount <= BoneIndexForHitbox )
        {
          if ( CSkeletonInstance::GetPoseSpaceHitboxBounds(Vector *,Vector *,matrix3x4a_t const*,CUtlStringToken)const::__executeCount <= 0 )
          {
            ++CSkeletonInstance::GetPoseSpaceHitboxBounds(Vector *,Vector *,matrix3x4a_t const*,CUtlStringToken)const::__executeCount;
            if ( AssertMsg_ConditionFailed(
                   &CSkeletonInstance::GetPoseSpaceHitboxBounds(Vector *,Vector *,matrix3x4a_t const*,CUtlStringToken)const::_assertionConstants,
                   "Bone index %d for hitbox %d is out of bounds (%u bones)") != 0 )
              __debugbreak();
          }
        }
        else if ( BoneIndexForHitbox >= 0 )
        {
          v11 = &pTransforms[BoneIndexForHitbox];
          goto LABEL_11;
        }
        v11 = pRootTransforma;
LABEL_11:
        p_m_vMaxBounds = &m_pHitBox->m_vMaxBounds;
        p_m_vMinBounds = &m_pHitBox->m_vMinBounds;
        v14 = vecMinsOut;
        TransformAABB(v11, p_m_vMinBounds, p_m_vMaxBounds, vecMinsOut, &vBoxMaxs);
        AddPointToBounds(v14, &vMins, &vMaxs);
        AddPointToBounds(&vBoxMaxs, &vMins, &vMaxs);
        ++v10;
      }
      while ( list.m_Size > v10 );
    }
    *pMinsa = vMins;
    *pMaxsa = vMaxs;
  }
  else
  {
    v21 = 0;
    *pMinsa = vMins;
    *pMaxsa = vMaxs;
  }
  list.m_Size = 0;
  v18 = list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_Memory.m_nAllocationCount < 0 || list.m_Memory.m_pMemory == &list.m_Memory.m_FixedMemory )
  {
    if ( v18 == 0 )
      CUtlMemory<HitBoxAndMesh_t,int>::Purge(&list.m_Memory);
  }
  else if ( list.m_Memory.m_pMemory != 0 && v18 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v21;
}


// CSkeletonInstance::DebugShowHitboxes  (line 5071, @0x00000000020e72b0, libserver.so)  // inlines: AddBoxOverlay, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, LargestComponentValue, MatrixAngles, Purge, Purge_FixedGrowable, RemoveAll, VectorMultiply, operator*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSkeletonInstance::GetHitBoxListAndTransforms, MatrixAngles, CUtlMemory<HitBoxAndMesh_t, int>::Purge, CUtlMemory<matrix3x4a_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<matrix3x4a_t, CUtlMemoryFixedGrowable<matrix3x4a_t, 32ul, int> >::~CUtlVectorBase, CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CHitboxSystem::DebugDrawHitboxes
void __fastcall CSkeletonInstance::DebugShowHitboxes(
        const CSkeletonInstance *const this,
        CUtlStringToken hitboxSetName,
        Color boxColor)
{
  __int64 v4; // r12
  int v5; // r13d
  const CHitBox *m_pHitBox; // rbx
  IDebugOverlay *v7; // r14
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  __int64 v11; // rax
  float v12; // xmm1_4
  float x; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  void (__fastcall *v16)(IDebugOverlay *, Vector *, _DWORD *, float *, QAngle *, _QWORD, double, int, int, unsigned int); // rax
  float v17; // xmm1_4
  float v18; // xmm0_4
  uint32 m_nGrowSize; // edx
  uint32 v20; // eax
  uint32 v21; // eax
  unsigned int v22; // [rsp+48h] [rbp-8E8h]
  int v23; // [rsp+4Ch] [rbp-8E4h]
  int v24; // [rsp+50h] [rbp-8E0h]
  unsigned int v25; // [rsp+54h] [rbp-8DCh]
  Vector v26; // [rsp+60h] [rbp-8D0h] BYREF
  QAngle angles; // [rsp+70h] [rbp-8C0h] BYREF
  _DWORD v28[4]; // [rsp+80h] [rbp-8B0h] BYREF
  float v29[4]; // [rsp+90h] [rbp-8A0h] BYREF
  Vector v30; // [rsp+A0h] [rbp-890h] BYREF
  CHitboxList list; // [rsp+B0h] [rbp-880h] BYREF
  CHitboxTransformList transforms; // [rsp+2D0h] [rbp-660h] BYREF
  unsigned __int64 v33; // [rsp+8F8h] [rbp-38h]

  list.m_Size = 0;
  v33 = __readfsqword(0x28u);
  list.m_Memory.m_nAllocationCount = 32;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  list.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Size = 0;
  transforms.m_Memory.m_nAllocationCount = 32;
  transforms.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
  if ( CSkeletonInstance::GetHitBoxListAndTransforms(this, &list, &transforms, hitboxSetName) != 0 && list.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    v25 = HIBYTE(*&boxColor);
    v24 = boxColor._color[2];
    v23 = boxColor._color[1];
    v22 = boxColor._color[0];
    while ( 1 )
    {
      m_pHitBox = list.m_Memory.m_pMemory[v4].m_pHitBox;
      v7 = g_pDebugOverlay;
      MatrixAngles(&transforms.m_Memory.m_pMemory[v4], &angles, &v26, &v30);
      v8 = fabs(v30.x);
      v9 = fabs(v30.y);
      v10 = fabs(v30.z);
      if ( v8 <= v9 )
        break;
      if ( v8 > v10 )
        goto LABEL_6;
LABEL_9:
      v11 = *v7;
      v12 = m_pHitBox->m_vMaxBounds.z * v10;
      x = m_pHitBox->m_vMaxBounds.x;
      v29[1] = m_pHitBox->m_vMaxBounds.y * v10;
      v29[2] = v12;
      v14 = x * v10;
      v15 = m_pHitBox->m_vMinBounds.y * v10;
      v16 = *(v11 + 368);
      v17 = m_pHitBox->m_vMinBounds.z * v10;
      v18 = v10 * m_pHitBox->m_vMinBounds.x;
      v29[0] = v14;
      *v28 = v18;
      *&v28[1] = v15;
      *&v28[2] = v17;
      v16(v7, &v26, v28, v29, &angles, v22, 0.0, v23, v24, v25);
      ++v5;
      ++v4;
      if ( list.m_Size <= v5 )
        goto LABEL_10;
    }
    if ( v9 <= v10 )
      goto LABEL_9;
    v10 = v9;
    if ( v8 <= v9 )
      goto LABEL_9;
LABEL_6:
    v10 = v8;
    goto LABEL_9;
  }
LABEL_10:
  transforms.m_Size = 0;
  if ( transforms.m_Memory.m_nAllocationCount < 0 )
  {
    v20 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = transforms.m_Memory.m_nGrowSize;
    v20 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
    if ( transforms.m_Memory.m_pMemory != &transforms.m_Memory.m_FixedMemory )
    {
      if ( transforms.m_Memory.m_pMemory != 0 && v20 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = transforms.m_Memory.m_nGrowSize;
      }
      transforms.m_Memory.m_nAllocationCount = 32;
      transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
      transforms.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_16;
    }
  }
  if ( v20 == 0 )
    CUtlMemory<matrix3x4a_t,int>::Purge(&transforms.m_Memory);
LABEL_16:
  list.m_Size = 0;
  v21 = list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_Memory.m_nAllocationCount < 0 || list.m_Memory.m_pMemory == &list.m_Memory.m_FixedMemory )
  {
    if ( v21 == 0 )
      CUtlMemory<HitBoxAndMesh_t,int>::Purge(&list.m_Memory);
  }
  else if ( list.m_Memory.m_pMemory != 0 && v21 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CSkeletonInstance::TraceRayAgainstHitboxes  (line 5086, @0x00000000020e76b0, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModelData, GetSerialNumber, IndexToIdentity, Init, IsExternallyAllocated, IsValid, LookupEntity, MakeStringToken, MatrixInvert, Purge, Purge_FixedGrowable, RemoveAll, SetEndPoint, SetEntityId, SetFraction, SetNormal, SetSurfaceProperties, TransformVectorByInverse, VectorAdd, VectorITransform, VectorMultiply, VectorRotate, VectorTransform, operator CBaseEntity*, operator CGameEntity*, operator const RuntimeClass_t*, operator*, operator+, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSkeletonInstance::GetHitBoxListAndTransforms, MatrixInvert, VectorTransform, VectorRotate, IntersectRayWithBox, CModel::GetBoneIndexForHitbox, CUtlString::Get, IntersectRayWithOBB, VectorITransform, CUtlMemory<HitBoxAndMesh_t, int>::Purge, CUtlMemory<matrix3x4a_t, int>::Purge, MurmurHash2LowerCase (17 total)
// callers: CHitboxSystem::TestHitboxes, CHitboxComponent::TestRay, CHitboxSystem::TestHitboxesMultiple
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CSkeletonInstance::TraceRayAgainstHitboxes(
        CSkeletonInstance *const this,
        const Ray_t *const ray,
        CGameTrace *pResults,
        CUtlStringToken hitboxSetName,
        const int *pHitgroupTable,
        int nTableCount)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  const CHitBox *m_pHitBox; // r13
  bool v11; // al
  int32 m_nGroupId; // edx
  unsigned int v13; // r15d
  const int *v14; // rax
  bool startsolid; // al
  float fraction; // xmm7_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm0_4
  vec_t v19; // xmm2_4
  const CHitBox *v20; // rax
  const char *v21; // rax
  uint32 v22; // r13d
  const char *v23; // r12
  __int64 v24; // rax
  CEntityIdentity *m_pEntity; // rax
  int v26; // edx
  unsigned __int64 m_Index_low; // rcx
  uint32 v28; // eax
  uint32 v29; // r12d
  CEntityIdentity *v30; // rsi
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v32; // rdx
  __int64 v33; // rax
  uint64 *v34; // rax
  bool v35; // bl
  uint32 m_nGrowSize; // eax
  uint32 v37; // edx
  uint32 v38; // edx
  CBaseEntity *v40; // rax
  const CModel *pModel; // [rsp+20h] [rbp-970h]
  uint nRayPriority_0; // [rsp+38h] [rbp-958h]
  float flRayFraction; // [rsp+3Ch] [rbp-954h]
  vec_t y; // [rsp+44h] [rbp-94Ch]
  vec_t x; // [rsp+48h] [rbp-948h]
  vec_t z; // [rsp+4Ch] [rbp-944h]
  Vector vLocalStart; // [rsp+70h] [rbp-920h] BYREF
  Vector v52; // [rsp+80h] [rbp-910h] BYREF
  Vector vLocalDelta; // [rsp+90h] [rbp-900h] BYREF
  EHANDLE2 ownerEntity; // [rsp+A0h] [rbp-8F0h] BYREF
  vec_t v55; // [rsp+A4h] [rbp-8ECh]
  vec_t v56; // [rsp+A8h] [rbp-8E8h]
  CBaseTrace tmp; // [rsp+D0h] [rbp-8C0h] BYREF
  CHitboxList list; // [rsp+110h] [rbp-880h] BYREF
  CHitboxTransformList transforms; // [rsp+330h] [rbp-660h] BYREF
  unsigned __int64 v60; // [rsp+958h] [rbp-38h]

  pResults->fraction = 1.0;
  pResults->startsolid = 0;
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  v60 = __readfsqword(0x28u);
  if ( m_pBinding != 0 )
    pModel = m_pBinding->m_pData;
  else
    pModel = 0;
  list.m_Size = 0;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  list.m_Memory.m_nAllocationCount = 32;
  list.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Size = 0;
  transforms.m_Memory.m_nAllocationCount = 32;
  transforms.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
  if ( CSkeletonInstance::GetHitBoxListAndTransforms(this, &list, &transforms, hitboxSetName) == 0 || list.m_Size <= 0 )
    goto LABEL_35;
  v8 = 0;
  v9 = 0;
  flRayFraction = 1.0;
  nRayPriority_0 = nTableCount;
  do
  {
    m_pHitBox = list.m_Memory.m_pMemory[v9].m_pHitBox;
    if ( ray->m_IsRay )
    {
      MatrixInvert(&transforms.m_Memory.m_pMemory[v8], &ownerEntity);
      VectorTransform(&ray->m_Start.x, &ownerEntity, &vLocalStart.x);
      VectorRotate(&ray->m_Delta.x, &ownerEntity, &v52.x);
      vLocalDelta = v52;
      v11 = IntersectRayWithBox(
              &vLocalStart,
              &vLocalDelta,
              &m_pHitBox->m_vMinBounds,
              &m_pHitBox->m_vMaxBounds,
              0.0,
              &tmp,
              0);
      x = tmp.endpos.x;
      y = tmp.endpos.y;
      z = tmp.endpos.z;
      if ( !v11 )
        goto LABEL_19;
    }
    else
    {
      if ( !IntersectRayWithOBB(
              ray,
              &transforms.m_Memory.m_pMemory[v8],
              &m_pHitBox->m_vMinBounds,
              &m_pHitBox->m_vMaxBounds,
              0.0,
              &tmp) )
        goto LABEL_19;
      VectorITransform(&tmp.endpos.x, &transforms.m_Memory.m_pMemory[v8], &vLocalDelta.x);
      x = vLocalDelta.x;
      y = vLocalDelta.y;
      z = vLocalDelta.z;
    }
    if ( nTableCount > 0 )
    {
      m_nGroupId = m_pHitBox->m_nGroupId;
      if ( *pHitgroupTable == m_nGroupId )
      {
        v13 = 0;
        goto LABEL_14;
      }
      v13 = 0;
      v14 = pHitgroupTable + 1;
      while ( ++v13 != nTableCount )
      {
        if ( *v14++ == m_nGroupId )
          goto LABEL_14;
      }
    }
    v13 = nTableCount;
LABEL_14:
    if ( flRayFraction > tmp.fraction || v13 < nRayPriority_0 )
    {
      pResults->hitboxBoneIndex = CModel::GetBoneIndexForHitbox(pModel, &list.m_Memory.m_pMemory[v9]);
      startsolid = tmp.startsolid;
      fraction = tmp.fraction;
      pResults->m_pHitbox = m_pHitBox;
      flRayFraction = fraction;
      pResults->boneLocalPos.x = x;
      pResults->boneLocalPos.y = y;
      pResults->boneLocalPos.z = z;
      if ( startsolid )
      {
        pResults->plane.normal.x = 1.0;
        pResults->plane.normal.y = 0.0;
        pResults->plane.normal.z = 0.0;
        pResults->plane.dist = 0.0;
        pResults->boneLocalNormal = vec3_origin;
      }
      else
      {
        VectorRotate(&tmp.plane.normal.x, &transforms.m_Memory.m_pMemory[v8], &ownerEntity.m_Index);
        startsolid = tmp.startsolid;
        LODWORD(pResults->plane.normal.x) = ownerEntity.m_Index;
        pResults->plane.normal.y = v55;
        pResults->plane.normal.z = v56;
        pResults->boneLocalNormal = tmp.plane.normal;
      }
      pResults->startsolid = startsolid;
      nRayPriority_0 = v13;
    }
LABEL_19:
    ++v8;
    ++v9;
  }
  while ( list.m_Size > v9 );
  if ( flRayFraction >= 1.0 )
  {
LABEL_35:
    v35 = 0;
    goto LABEL_36;
  }
  pResults->startpos.x = ray->m_Start.x;
  pResults->startpos.y = ray->m_Start.y;
  v17 = ray->m_Start.z;
  pResults->fraction = flRayFraction;
  pResults->startpos.z = v17;
  v18 = (ray->m_Delta.z * flRayFraction) + ray->m_Start.z;
  v19 = (flRayFraction * ray->m_Delta.x) + ray->m_Start.x;
  v20 = pResults->m_pHitbox;
  pResults->endpos.y = (ray->m_Delta.y * flRayFraction) + ray->m_Start.y;
  pResults->endpos.z = v18;
  pResults->endpos.x = v19;
  v21 = CUtlString::Get(&v20->m_sSurfaceProperty);
  v22 = 0;
  v23 = v21;
  if ( v21 != 0 && *v21 != 0 )
  {
    v22 = MurmurHash2LowerCase(v21, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
      RegisterStringToken(v22, v23, 0, 1);
  }
  v24 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  pResults->m_pSurfaceProperties = (*(*v24 + 16LL))(v24, v22, 0);
  m_pEntity = this->m_pOwner->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    m_Index_low = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
    {
      m_Index_low = LOWORD(m_pEntity->m_EHandle.m_Index);
      LOWORD(m_Index_low) = m_Index_low & 0x7FFF;
    }
    LOWORD(ownerEntity.m_Index) = m_Index_low | ownerEntity.m_Index & 0x8000;
    v28 = (v26 << 15) | ownerEntity.m_Index & 0x7FFF;
    ownerEntity.m_Index = v28;
    v29 = v28;
    if ( v28 != -1 )
    {
      if ( v28 == -2 )
        goto LABEL_49;
      v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
      if ( v30 == 0 )
        goto LABEL_49;
      m_pInstance = 0;
      v32 = &v30[m_Index_low & 0x1FF];
      if ( v32 != 0 && v28 == v32->m_EHandle.m_Index )
      {
        m_pInstance = v32->m_pInstance;
        v40 = v32->m_pInstance;
      }
      else
      {
        v40 = 0;
      }
      pResults->m_pEnt = v40;
      if ( m_pInstance != 0 )
      {
        v33 = (*(m_pInstance->_vptr_IHandleEntity + 29))(m_pInstance);
        v34 = (*(*v33 + 104LL))(v33);
        pResults->m_ShapeAttributes.m_nInteractsAs = *v34;
        pResults->m_ShapeAttributes.m_nInteractsWith = v34[1];
        pResults->m_ShapeAttributes.m_nInteractsExclude = v34[2];
        *&pResults->m_ShapeAttributes.m_nEntityId = v34[3];
      }
LABEL_50:
      pResults->m_ShapeAttributes.m_nEntityId = v29;
      v35 = 1;
LABEL_36:
      transforms.m_Size = 0;
      if ( transforms.m_Memory.m_nAllocationCount < 0 )
      {
        v37 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
      }
      else
      {
        m_nGrowSize = transforms.m_Memory.m_nGrowSize;
        v37 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
        if ( transforms.m_Memory.m_pMemory != &transforms.m_Memory.m_FixedMemory )
        {
          if ( transforms.m_Memory.m_pMemory != 0 && v37 == 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
            m_nGrowSize = transforms.m_Memory.m_nGrowSize;
          }
          transforms.m_Memory.m_nAllocationCount = 32;
          transforms.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
          transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
          goto LABEL_42;
        }
      }
      if ( v37 == 0 )
        CUtlMemory<matrix3x4a_t,int>::Purge(&transforms.m_Memory);
LABEL_42:
      list.m_Size = 0;
      v38 = list.m_Memory.m_nGrowSize & 0xC0000000;
      if ( list.m_Memory.m_nAllocationCount < 0 || list.m_Memory.m_pMemory == &list.m_Memory.m_FixedMemory )
      {
        if ( v38 == 0 )
          CUtlMemory<HitBoxAndMesh_t,int>::Purge(&list.m_Memory);
      }
      else if ( list.m_Memory.m_pMemory != 0 && v38 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
      return v35;
    }
  }
  v29 = -1;
LABEL_49:
  pResults->m_pEnt = 0;
  goto LABEL_50;
}


// CSkeletonInstance::SweepShapeAgainstHitboxes  (line 5191, @0x00000000020e7f60, libserver.so)  // inlines: AABB_t, CGameSweep, CTransform, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, DidHit, DotProduct, GetBbox, GetModelData, GetNormal, GetOwnerEntity, Init, Interpolate, IsEmpty, IsExternallyAllocated, MakeInvalid, MakeStringToken, MatrixQuaternion, Normalize, Overlaps, Purge, Purge_FixedGrowable, RemoveAll, RnPlane_t, RnSweptTransform_t, ToQuaternion, TransformAABB, TransformPoint, VectorAdd, VectorAligned, VectorMax, VectorMin, VectorMultiply, VectorSubtract, WriteDirect, fpmax, fpmin, operator const RuntimeClass_t*, operator&=, operator*, operator+, operator-, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSkeletonInstance::GetHitBoxListAndTransforms, TransformLerp, QuaternionDotProduct, CUtlString::Get, CModel::GetBoneIndexForHitbox, QuaternionNormalize, VectorNormalize, TransformAABB, MatrixNormalize, MatrixQuaternion, CUtlMemory<RnIteration_t, int>::Purge, MurmurHash2LowerCase (20 total)
// callers: CGamePhysicsQueryInterface::SweepShapeAgainstEntity
bool __fastcall CSkeletonInstance::SweepShapeAgainstHitboxes(
        CSkeletonInstance *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        CGameSweep *pResults,
        CUtlStringToken hitboxSetName)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  const ResourceBindingBase_t *m_pBinding; // rax
  int v14; // r14d
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm10_4
  float v20; // xmm13_4
  float v21; // xmm15_4
  float v22; // xmm12_4
  float v23; // xmm11_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float m_flRadius; // xmm0_4
  __int64 v29; // rdx
  vec_t v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 i; // r12
  const char *v34; // rax
  const char *v35; // r14
  __int64 v36; // rax
  __m128i v37; // xmm7
  float v38; // ebx
  void (__fastcall *v39)(RnDistanceQueryResult_t *, IVPhysics2 *, Quaternion *, HPhysicsShape, Quaternion *, HPhysicsShape, float); // r14
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  vec_t v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm3_4
  vec_t v47; // xmm0_4
  float v48; // xmm2_4
  matrix3x4a_t *v49; // r13
  const CHitBox *m_pHitBox; // rbx
  float v51; // xmm3_4
  float v52; // xmm5_4
  float v53; // xmm2_4
  float v54; // xmm4_4
  vec_t v55; // xmm2_4
  vec_t v56; // xmm0_4
  vec_t v57; // xmm1_4
  __int64 (__fastcall *v58)(IVPhysics2 *, RnSweptTransform_t *, HPhysicsShape, RnSweptTransform_t *, HPhysicsShape, Quaternion *); // rax
  float v59; // r14^4
  bool v60; // bl
  uint32 m_nGrowSize; // eax
  uint32 v62; // edx
  uint32 v63; // edx
  const CModel *pModel; // [rsp+18h] [rbp-C68h]
  HPhysicsShape hSphereShapeZeroRadius; // [rsp+20h] [rbp-C60h]
  HPhysicsShape hSphereShape; // [rsp+40h] [rbp-C40h]
  float v69; // [rsp+60h] [rbp-C20h]
  __int64 vLocalMin; // [rsp+64h] [rbp-C1Ch]
  float v71; // [rsp+70h] [rbp-C10h]
  float v72; // [rsp+70h] [rbp-C10h]
  float hBoxShape; // [rsp+78h] [rbp-C08h]
  HPhysicsShape hBoxShapea; // [rsp+78h] [rbp-C08h]
  uint32 v75; // [rsp+90h] [rbp-BF0h]
  float v76; // [rsp+90h] [rbp-BF0h]
  float v77; // [rsp+94h] [rbp-BECh]
  float v78; // [rsp+98h] [rbp-BE8h]
  float v79; // [rsp+9Ch] [rbp-BE4h]
  float v80; // [rsp+A0h] [rbp-BE0h]
  float swept_aabb; // [rsp+A4h] [rbp-BDCh]
  float swept_aabb_4; // [rsp+A8h] [rbp-BD8h]
  Vector vec; // [rsp+D0h] [rbp-BB0h] BYREF
  AABB_t hitbox_aabb; // [rsp+E0h] [rbp-BA0h] BYREF
  RnDistanceQueryResult_t query; // [rsp+100h] [rbp-B80h] BYREF
  Quaternion q; // [rsp+120h] [rbp-B60h] BYREF
  Quaternion v87; // [rsp+130h] [rbp-B50h] BYREF
  Quaternion v88; // [rsp+140h] [rbp-B40h] BYREF
  Quaternion v89; // [rsp+150h] [rbp-B30h] BYREF
  matrix3x4_t in; // [rsp+160h] [rbp-B20h] BYREF
  matrix3x4_t out; // [rsp+190h] [rbp-AF0h] BYREF
  RnSweptTransform_t sphere_sweep; // [rsp+1C0h] [rbp-AC0h] BYREF
  RnSweptTransform_t box_sweep; // [rsp+200h] [rbp-A80h] BYREF
  RnHullBox_t box; // [rsp+240h] [rbp-A40h] BYREF
  CHitboxList list; // [rsp+400h] [rbp-880h] BYREF
  CHitboxTransformList transforms; // [rsp+620h] [rbp-660h] BYREF
  unsigned __int64 v97; // [rsp+C48h] [rbp-38h]

  v97 = __readfsqword(0x28u);
  pResults->m_pEntity = 0;
  pResults->m_pSurfaceProperties = 0;
  pResults->m_hBody = 0;
  pResults->m_hShape = 0;
  x = vec3_origin.x;
  pResults->m_pHitbox = 0;
  y = vec3_origin.y;
  pResults->m_nHitboxBone = -1;
  z = vec3_origin.z;
  pResults->m_flHitTime = 1.0;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  pResults->m_vHitPoint.x = x;
  pResults->m_vHitPoint.y = y;
  pResults->m_vHitPoint.z = z;
  pResults->m_vHitNormal.x = x;
  pResults->m_vHitNormal.y = y;
  pResults->m_vHitNormal.z = z;
  list.m_Size = 0;
  list.m_Memory.m_nAllocationCount = 32;
  list.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Size = 0;
  transforms.m_Memory.m_nAllocationCount = 32;
  transforms.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
  if ( CSkeletonInstance::GetHitBoxListAndTransforms(this, &list, &transforms, hitboxSetName) != 0 )
  {
    m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      pModel = m_pBinding->m_pData;
    else
      pModel = 0;
    v14 = 0;
    swept_aabb_4 = -3.4028235e38;
    swept_aabb = -3.4028235e38;
    v80 = -3.4028235e38;
    v79 = 3.4028235e38;
    v77 = 3.4028235e38;
    v78 = 3.4028235e38;
    do
    {
      box.m_flMaxAngularRadius = 0.0;
      TransformLerp(xform1, xform2, v14 * 0.0625, &box);
      v15 = *&box.m_Vertices.m_nOffset;
      ++v14;
      v16 = *&box.m_Vertices.m_nCount;
      v17 = sphere->m_vCenter.y;
      v18 = sphere->m_vCenter.z;
      v19 = (v15 + v15) * *&box.m_Planes.m_nOffset;
      v20 = *&box.m_Vertices.m_nOffset * (*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount);
      v21 = 1.0 - (v15 * (v15 + v15));
      v22 = (v16 + v16) * v16;
      v23 = (v15 + v15) * *&box.m_Vertices.m_nCount;
      v24 = ((((v19 - ((*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Vertices.m_nCount))
             * sphere->m_vCenter.x)
            + box.m_vCentroid.z)
           + (((*&box.m_Planes.m_nOffset * (v16 + v16)) + v20) * v17))
          + ((v21 - v22) * v18);
      v25 = (*&box.m_Planes.m_nOffset + *&box.m_Planes.m_nOffset) * *&box.m_Planes.m_nOffset;
      v26 = ((((v23 + ((*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Planes.m_nOffset))
             * sphere->m_vCenter.x)
            + box.m_vCentroid.y)
           + ((v21 - v25) * v17))
          + (((*&box.m_Planes.m_nOffset * (v16 + v16)) - v20) * v18);
      v27 = (((((1.0 - v22) - v25) * sphere->m_vCenter.x) + box.m_vCentroid.x)
           + ((v23 - ((*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Planes.m_nOffset)) * v17))
          + ((v19 + ((*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Vertices.m_nCount)) * v18);
      m_flRadius = sphere->m_flRadius;
      v79 = fminf(v79, v24 - m_flRadius);
      v77 = fminf(v77, v26 - m_flRadius);
      swept_aabb_4 = fmaxf(swept_aabb_4, v24 + m_flRadius);
      v80 = fmaxf(v80, v27 + m_flRadius);
      v78 = fminf(v78, v27 - m_flRadius);
      swept_aabb = fmaxf(swept_aabb, v26 + m_flRadius);
    }
    while ( v14 != 17 );
    hSphereShape = (*(g_pVPhysics2->_vptr_IAppSystem + 20))(g_pVPhysics2, sphere);
    hSphereShapeZeroRadius = (*(g_pVPhysics2->_vptr_IAppSystem + 20))(g_pVPhysics2, sphere, 0.0);
    v29 = *&xform1->m_orientation.z;
    *&sphere_sweep.m_vPosition1.x = *&xform1->m_vPosition.x;
    v30 = xform1->m_vPosition.z;
    *&sphere_sweep.m_qOrientation1.z = v29;
    v31 = *&xform2->m_orientation.z;
    sphere_sweep.m_vPosition1.z = v30;
    v32 = *&xform2->m_vPosition.x;
    *&sphere_sweep.m_qOrientation2.z = v31;
    *&sphere_sweep.m_vPosition2.x = v32;
    sphere_sweep.m_vPosition2.z = xform2->m_vPosition.z;
    *&sphere_sweep.m_qOrientation1.x = *&xform1->m_orientation.x;
    *&sphere_sweep.m_qOrientation2.x = *&xform2->m_orientation.x;
    if ( QuaternionDotProduct(&sphere_sweep.m_qOrientation1, &sphere_sweep.m_qOrientation2) < 0.0 )
    {
      sphere_sweep.m_qOrientation2.w = -sphere_sweep.m_qOrientation2.w;
      sphere_sweep.m_qOrientation2.z = -sphere_sweep.m_qOrientation2.z;
      sphere_sweep.m_qOrientation2.y = -sphere_sweep.m_qOrientation2.y;
      sphere_sweep.m_qOrientation2.x = -sphere_sweep.m_qOrientation2.x;
    }
    if ( list.m_Size > 0 )
    {
      for ( i = 0; i < list.m_Size; ++i )
      {
        v49 = &transforms.m_Memory.m_pMemory[i];
        m_pHitBox = list.m_Memory.m_pMemory[i].m_pHitBox;
        vLocalMin = *&m_pHitBox->m_vMinBounds.x;
        v72 = m_pHitBox->m_vMinBounds.z;
        v69 = m_pHitBox->m_vMaxBounds.x;
        hBoxShape = m_pHitBox->m_vMaxBounds.y;
        v76 = m_pHitBox->m_vMaxBounds.z;
        *&box.m_vCentroid.x = vLocalMin;
        box.m_vCentroid.z = v72;
        box.m_flMaxAngularRadius = v69;
        *&box.m_Vertices.m_nOffset = hBoxShape;
        *&box.m_Vertices.m_nCount = v76;
        TransformAABB(
          v49,
          &box.m_vCentroid,
          &box.m_flMaxAngularRadius,
          &hitbox_aabb.m_vMinBounds,
          &hitbox_aabb.m_vMaxBounds);
        v51 = fmaxf(v77, hitbox_aabb.m_vMinBounds.y);
        v52 = fmaxf(v79, hitbox_aabb.m_vMinBounds.z);
        v53 = fminf(swept_aabb, hitbox_aabb.m_vMaxBounds.y);
        v54 = fminf(swept_aabb_4, hitbox_aabb.m_vMaxBounds.z);
        if ( fmaxf(v78, hitbox_aabb.m_vMinBounds.x) < fminf(v80, hitbox_aabb.m_vMaxBounds.x) && v51 < v53 && v52 < v54 )
        {
          v55 = (*&vLocalMin + v69) * 0.5;
          v56 = (v72 + v76) * 0.5;
          v57 = (hBoxShape + *(&vLocalMin + 1)) * 0.5;
          box.m_vCentroid.x = v55;
          box.m_vCentroid.z = v56;
          box.m_vCentroid.y = v57;
          box.m_BoxVertices[0].x = v55 + (v69 - v55);
          box.m_BoxVertices[0].z = v56 + (v76 - v56);
          box.m_BoxVertices[0].y = v57 + (hBoxShape - v57);
          box.m_BoxVertices[1].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[1].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[1].x = v55 - (v69 - v55);
          box.m_BoxVertices[2].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[2].y = v57 - (hBoxShape - v57);
          box.m_BoxVertices[2].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[3].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[3].y = box.m_BoxVertices[2].y;
          box.m_BoxVertices[3].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[4].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[4].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[4].z = v56 - (v76 - v56);
          box.m_BoxVertices[5].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[5].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[5].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[6].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[6].y = box.m_BoxVertices[2].y;
          box.m_BoxVertices[6].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[7].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[7].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[7].y = box.m_BoxVertices[2].y;
          box.m_BoxPlanes[0].m_vNormal.y = -0.0;
          box.m_BoxPlanes[0].m_vNormal.z = -0.0;
          box.m_BoxPlanes[2].m_vNormal.x = -0.0;
          box.m_BoxPlanes[2].m_vNormal.z = -0.0;
          box.m_BoxPlanes[4].m_vNormal.x = -0.0;
          box.m_BoxPlanes[4].m_vNormal.y = -0.0;
          box.m_Vertices.m_nOffset = 132;
          box.m_Vertices.m_nCount = 8;
          box.m_BoxPlanes[0].m_vNormal.x = -1.0;
          box.m_BoxEdges[0].m_nNext = 2;
          box.m_BoxPlanes[0].m_flOffset = ((*(&vLocalMin + 1) * -0.0) - *&vLocalMin) + (v72 * -0.0);
          box.m_BoxPlanes[1].m_vNormal.x = 1.0;
          box.m_BoxPlanes[1].m_vNormal.y = 0.0;
          box.m_BoxPlanes[1].m_vNormal.z = 0.0;
          box.m_BoxPlanes[2].m_vNormal.y = -1.0;
          box.m_BoxPlanes[3].m_vNormal.x = 0.0;
          box.m_BoxPlanes[2].m_flOffset = ((*&vLocalMin * -0.0) - *(&vLocalMin + 1)) + (v72 * -0.0);
          box.m_BoxPlanes[1].m_flOffset = (v69 + (0.0 * hBoxShape)) + (0.0 * v76);
          box.m_BoxPlanes[3].m_vNormal.y = 1.0;
          box.m_BoxPlanes[3].m_vNormal.z = 0.0;
          box.m_BoxPlanes[4].m_vNormal.z = -1.0;
          box.m_BoxPlanes[5].m_vNormal.x = 0.0;
          box.m_BoxPlanes[5].m_vNormal.y = 0.0;
          box.m_BoxPlanes[5].m_vNormal.z = 1.0;
          box.m_Planes.m_nOffset = 220;
          box.m_BoxEdges[0].m_nTwin = 1;
          box.m_Planes.m_nCount = 6;
          box.m_BoxPlanes[3].m_flOffset = (hBoxShape + (0.0 * v69)) + (0.0 * v76);
          box.m_BoxPlanes[5].m_flOffset = ((0.0 * hBoxShape) + (0.0 * v69)) + v76;
          box.m_BoxPlanes[4].m_flOffset = ((*(&vLocalMin + 1) * -0.0) + (*&vLocalMin * -0.0)) - v72;
          box.m_BoxEdges[0].m_nOrigin = 2;
          box.m_BoxEdges[0].m_nFace = 0;
          box.m_BoxEdges[1].m_nNext = 17;
          box.m_BoxEdges[1].m_nTwin = 0;
          box.m_BoxEdges[1].m_nOrigin = 1;
          box.m_BoxEdges[1].m_nFace = 5;
          box.m_BoxEdges[2].m_nNext = 4;
          box.m_BoxEdges[2].m_nTwin = 3;
          box.m_BoxEdges[2].m_nOrigin = 1;
          box.m_BoxEdges[2].m_nFace = 0;
          box.m_BoxEdges[3].m_nNext = 20;
          box.m_BoxEdges[3].m_nTwin = 2;
          box.m_BoxEdges[3].m_nOrigin = 5;
          box.m_BoxEdges[3].m_nFace = 3;
          box.m_BoxEdges[4].m_nNext = 6;
          box.m_BoxEdges[4].m_nTwin = 5;
          box.m_BoxEdges[4].m_nOrigin = 5;
          box.m_BoxEdges[4].m_nFace = 0;
          box.m_BoxEdges[5].m_nNext = 23;
          box.m_BoxEdges[5].m_nTwin = 4;
          box.m_BoxEdges[5].m_nOrigin = 6;
          box.m_BoxEdges[5].m_nFace = 4;
          box.m_BoxEdges[6].m_nNext = 0;
          box.m_BoxEdges[6].m_nTwin = 7;
          box.m_BoxEdges[6].m_nOrigin = 6;
          box.m_BoxEdges[6].m_nFace = 0;
          box.m_BoxEdges[7].m_nNext = 18;
          box.m_BoxEdges[7].m_nTwin = 6;
          box.m_BoxEdges[7].m_nOrigin = 2;
          box.m_BoxEdges[7].m_nFace = 2;
          strcpy(&box.m_BoxEdges[8], "\n\t");
          box.m_BoxEdges[8].m_nFace = 1;
          box.m_BoxEdges[9].m_nNext = 21;
          box.m_BoxEdges[9].m_nTwin = 8;
          box.m_BoxEdges[9].m_nOrigin = 3;
          box.m_BoxEdges[9].m_nFace = 5;
          box.m_BoxEdges[10].m_nNext = 12;
          box.m_BoxEdges[10].m_nTwin = 11;
          box.m_BoxEdges[10].m_nOrigin = 3;
          box.m_BoxEdges[10].m_nFace = 1;
          box.m_BoxEdges[11].m_nNext = 16;
          box.m_BoxEdges[11].m_nTwin = 10;
          box.m_BoxEdges[11].m_nOrigin = 7;
          box.m_BoxEdges[11].m_nFace = 2;
          box.m_BoxEdges[12].m_nNext = 14;
          box.m_BoxEdges[12].m_nTwin = 13;
          box.m_BoxEdges[12].m_nOrigin = 7;
          box.m_BoxEdges[12].m_nFace = 1;
          box.m_BoxEdges[13].m_nNext = 19;
          box.m_BoxEdges[13].m_nTwin = 12;
          box.m_BoxEdges[13].m_nOrigin = 4;
          box.m_BoxEdges[13].m_nFace = 4;
          box.m_BoxEdges[14].m_nNext = 8;
          box.m_BoxEdges[14].m_nTwin = 15;
          box.m_BoxEdges[14].m_nOrigin = 4;
          box.m_BoxEdges[14].m_nFace = 1;
          box.m_BoxEdges[15].m_nNext = 22;
          box.m_BoxEdges[15].m_nTwin = 14;
          box.m_BoxEdges[15].m_nOrigin = 0;
          box.m_BoxEdges[15].m_nFace = 3;
          box.m_BoxEdges[16].m_nNext = 7;
          box.m_BoxEdges[16].m_nTwin = 17;
          box.m_BoxEdges[16].m_nOrigin = 3;
          box.m_BoxEdges[16].m_nFace = 2;
          box.m_BoxEdges[17].m_nNext = 9;
          box.m_BoxEdges[17].m_nTwin = 16;
          box.m_BoxEdges[17].m_nOrigin = 2;
          box.m_BoxEdges[17].m_nFace = 5;
          box.m_BoxEdges[18].m_nNext = 11;
          box.m_BoxEdges[18].m_nTwin = 19;
          box.m_BoxEdges[18].m_nOrigin = 6;
          box.m_BoxEdges[18].m_nFace = 2;
          box.m_BoxEdges[19].m_nNext = 5;
          box.m_BoxEdges[19].m_nTwin = 18;
          box.m_BoxEdges[19].m_nOrigin = 7;
          box.m_BoxEdges[19].m_nFace = 4;
          box.m_BoxEdges[20].m_nNext = 15;
          box.m_BoxEdges[20].m_nTwin = 21;
          box.m_BoxEdges[20].m_nOrigin = 1;
          box.m_BoxEdges[20].m_nFace = 3;
          box.m_BoxEdges[21].m_nNext = 1;
          box.m_BoxEdges[21].m_nTwin = 20;
          box.m_BoxEdges[21].m_nOrigin = 0;
          box.m_BoxEdges[21].m_nFace = 5;
          box.m_BoxEdges[22].m_nNext = 3;
          box.m_BoxEdges[22].m_nTwin = 23;
          box.m_BoxEdges[22].m_nOrigin = 4;
          box.m_BoxEdges[22].m_nFace = 3;
          box.m_BoxEdges[23].m_nNext = 13;
          box.m_BoxEdges[23].m_nTwin = 22;
          box.m_BoxEdges[23].m_nOrigin = 5;
          box.m_BoxEdges[23].m_nFace = 4;
          box.m_Edges.m_nOffset = 308;
          box.m_Edges.m_nCount = 24;
          box.m_BoxFaces[0].m_nEdge = 0;
          box.m_BoxFaces[1].m_nEdge = 8;
          box.m_BoxFaces[2].m_nEdge = 16;
          box.m_BoxFaces[3].m_nEdge = 20;
          box.m_BoxFaces[4].m_nEdge = 19;
          box.m_BoxFaces[5].m_nEdge = 21;
          box.m_Faces.m_nOffset = 396;
          *&box.m_Bounds.m_vMinBounds.x = vLocalMin;
          box.m_Faces.m_nCount = 6;
          box.m_Bounds.m_vMinBounds.z = v72;
          box.m_Bounds.m_vMaxBounds.x = v69;
          box.m_Bounds.m_vMaxBounds.y = hBoxShape;
          box.m_Bounds.m_vMaxBounds.z = v76;
          hBoxShapea = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, &box);
          in = v49->matrix3x4_t;
          out = v49->matrix3x4_t;
          MatrixNormalize(&in, &in);
          MatrixNormalize(&out, &out);
          box_sweep.m_vPosition1.x = in.m_flMatVal[0][3];
          box_sweep.m_vPosition1.y = in.m_flMatVal[1][3];
          box_sweep.m_vPosition1.z = in.m_flMatVal[2][3];
          box_sweep.m_vPosition2.x = out.m_flMatVal[0][3];
          box_sweep.m_vPosition2.y = out.m_flMatVal[1][3];
          box_sweep.m_vPosition2.z = out.m_flMatVal[2][3];
          MatrixQuaternion(&in, &q);
          box_sweep.m_qOrientation1 = q;
          MatrixQuaternion(&out, &v88);
          box_sweep.m_qOrientation2 = v88;
          if ( QuaternionDotProduct(&box_sweep.m_qOrientation1, &box_sweep.m_qOrientation2) < 0.0 )
          {
            box_sweep.m_qOrientation2.w = -box_sweep.m_qOrientation2.w;
            box_sweep.m_qOrientation2.z = -box_sweep.m_qOrientation2.z;
            box_sweep.m_qOrientation2.y = -box_sweep.m_qOrientation2.y;
            box_sweep.m_qOrientation2.x = -box_sweep.m_qOrientation2.x;
          }
          v58 = *(g_pVPhysics2->_vptr_IAppSystem + 26);
          v88.x = 0.0;
          *&v88.z = 0;
          v89.x = 0.0;
          v89.y = 0.0;
          LODWORD(v59) = v58(g_pVPhysics2, &sphere_sweep, hSphereShape, &box_sweep, hBoxShapea, &v88) >> 32;
          v88.x = 0.0;
          if ( (LODWORD(v89.y) & 0xC0000000) == 0 )
          {
            CUtlMemory<RnIteration_t,int>::Purge(&v88.z);
            if ( (LODWORD(v89.y) & 0xC0000000) == 0 )
              CUtlMemory<RnIteration_t,int>::Purge(&v88.z);
          }
          v71 = v59;
          if ( pResults->m_flHitTime > v59 )
          {
            v34 = CUtlString::Get(&m_pHitBox->m_sSurfaceProperty);
            v75 = 0;
            v35 = v34;
            if ( v34 != 0 && *v34 != 0 )
            {
              v75 = MurmurHash2LowerCase(v34, 0x31415926u);
              if ( g_bUpdateStringTokenDatabase )
                RegisterStringToken(v75, v35, 0, 1);
            }
            pResults->m_pEntity = this->m_pOwner;
            v36 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
            pResults->m_pSurfaceProperties = (*(*v36 + 16LL))(v36, v75, 0);
            pResults->m_pHitbox = m_pHitBox;
            pResults->m_nHitboxBone = CModel::GetBoneIndexForHitbox(pModel, &list.m_Memory.m_pMemory[i]);
            pResults->m_flHitTime = v71;
            if ( v71 <= 0.0 )
              break;
            v37 = 0x3F800000u;
            *v37.m128i_i32 = 1.0 - v71;
            v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
            v39 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
            v88.y = (box_sweep.m_vPosition2.y * v71) + ((1.0 - v71) * box_sweep.m_vPosition1.y);
            v88.w = 0.0;
            v88.z = (box_sweep.m_vPosition2.z * v71) + (v38 * box_sweep.m_vPosition1.z);
            v88.x = (box_sweep.m_vPosition2.x * v71) + (v38 * box_sweep.m_vPosition1.x);
            v89.w = (box_sweep.m_qOrientation2.w * v71) + (v38 * box_sweep.m_qOrientation1.w);
            v89.z = (box_sweep.m_qOrientation2.z * v71) + (v38 * box_sweep.m_qOrientation1.z);
            v89.y = (box_sweep.m_qOrientation2.y * v71) + (v38 * box_sweep.m_qOrientation1.y);
            v89.x = (box_sweep.m_qOrientation2.x * v71) + (v38 * box_sweep.m_qOrientation1.x);
            QuaternionNormalize(&v89);
            q.w = 0.0;
            q.y = (sphere_sweep.m_vPosition2.y * v71) + (v38 * sphere_sweep.m_vPosition1.y);
            q.z = (sphere_sweep.m_vPosition2.z * v71) + (v38 * sphere_sweep.m_vPosition1.z);
            q.x = (sphere_sweep.m_vPosition2.x * v71) + (v38 * sphere_sweep.m_vPosition1.x);
            v87.w = (sphere_sweep.m_qOrientation2.w * v71) + (v38 * sphere_sweep.m_qOrientation1.w);
            v87.z = (sphere_sweep.m_qOrientation2.z * v71) + (v38 * sphere_sweep.m_qOrientation1.z);
            v87.y = (sphere_sweep.m_qOrientation2.y * v71) + (v38 * sphere_sweep.m_qOrientation1.y);
            v87.x = (sphere_sweep.m_qOrientation2.x * v71) + (v38 * sphere_sweep.m_qOrientation1.x);
            v40 = QuaternionNormalize(&v87);
            v39(&query, g_pVPhysics2, &q, hSphereShapeZeroRadius, &v88, hBoxShapea, v40);
            v41 = query.m_vPoint1.y;
            v42 = query.m_vPoint2.y;
            v43 = query.m_vPoint1.z;
            pResults->m_vHitPoint.y = query.m_vPoint1.y;
            v44 = v42 - v41;
            v45 = query.m_vPoint2.z;
            v46 = query.m_vPoint1.x;
            pResults->m_vHitPoint.z = v43;
            v47 = v45 - v43;
            v48 = query.m_vPoint2.x;
            pResults->m_vHitPoint.x = v46;
            vec.y = v44;
            vec.z = v47;
            vec.x = v48 - v46;
            VectorNormalize(&vec);
            pResults->m_vHitNormal = vec;
          }
          (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hBoxShapea);
        }
      }
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hSphereShapeZeroRadius);
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hSphereShape);
  }
  transforms.m_Size = 0;
  v60 = pResults->m_flHitTime < 1.0;
  if ( transforms.m_Memory.m_nAllocationCount < 0 )
  {
    v62 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = transforms.m_Memory.m_nGrowSize;
    v62 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
    if ( transforms.m_Memory.m_pMemory != &transforms.m_Memory.m_FixedMemory )
    {
      if ( transforms.m_Memory.m_pMemory != 0 && v62 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = transforms.m_Memory.m_nGrowSize;
      }
      transforms.m_Memory.m_nAllocationCount = 32;
      transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
      transforms.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_34;
    }
  }
  if ( v62 == 0 )
    CUtlMemory<matrix3x4a_t,int>::Purge(&transforms.m_Memory);
LABEL_34:
  list.m_Size = 0;
  v63 = list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_Memory.m_nAllocationCount < 0 || list.m_Memory.m_pMemory == &list.m_Memory.m_FixedMemory )
  {
    if ( v63 == 0 )
      CUtlMemory<HitBoxAndMesh_t,int>::Purge(&list.m_Memory);
  }
  else if ( list.m_Memory.m_pMemory != 0 && v63 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v60;
}


// CSkeletonInstance::SweepShapeAgainstHitboxes  (line 5277, @0x00000000020e96d0, libserver.so)  // inlines: AABB_t, CGameSweep, CTransform, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, DidHit, DotProduct, GetBbox, GetModelData, GetNormal, GetOwnerEntity, Init, Interpolate, IsEmpty, IsExternallyAllocated, MakeInvalid, MakeStringToken, MatrixQuaternion, Normalize, Overlaps, Purge, Purge_FixedGrowable, RemoveAll, RnPlane_t, RnSweptTransform_t, ToQuaternion, TransformAABB, TransformPoint, VectorAdd, VectorAligned, VectorMax, VectorMin, VectorMultiply, VectorSubtract, WriteDirect, fpmax, fpmin, operator const RuntimeClass_t*, operator&=, operator*, operator+, operator-, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSkeletonInstance::GetHitBoxListAndTransforms, TransformLerp, QuaternionDotProduct, CUtlString::Get, CModel::GetBoneIndexForHitbox, QuaternionNormalize, VectorNormalize, TransformAABB, MatrixNormalize, MatrixQuaternion, CUtlMemory<RnIteration_t, int>::Purge, MurmurHash2LowerCase (20 total)
// callers: CGamePhysicsQueryInterface::SweepShapeAgainstEntity
bool __fastcall CSkeletonInstance::SweepShapeAgainstHitboxes(
        CSkeletonInstance *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        CGameSweep *pResults,
        CUtlStringToken hitboxSetName)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  const ResourceBindingBase_t *m_pBinding; // rax
  int v14; // r12d
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm11_4
  float v19; // xmm10_4
  float v20; // xmm14_4
  float v21; // xmm13_4
  float v22; // xmm12_4
  float v23; // xmm5_4
  float v24; // xmm9_4
  float v25; // xmm10_4
  float v26; // xmm6_4
  float v27; // xmm11_4
  float v28; // xmm0_4
  float v29; // xmm13_4
  float v30; // xmm8_4
  float v31; // xmm1_4
  float v32; // xmm7_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float v35; // xmm2_4
  float v36; // xmm14_4
  float v37; // xmm0_4
  float v38; // xmm12_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm6_4
  float v42; // xmm13_4
  float m_flRadius; // xmm0_4
  float v44; // xmm9_4
  float v45; // xmm7_4
  float v46; // xmm14_4
  __int64 v47; // rdx
  vec_t v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 i; // r12
  const char *v52; // rax
  const char *v53; // r14
  __int64 v54; // rax
  __m128i v55; // xmm6
  float v56; // ebx
  void (__fastcall *v57)(RnDistanceQueryResult_t *, IVPhysics2 *, Quaternion *, HPhysicsShape, Quaternion *, HPhysicsShape, float); // r14
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  vec_t v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm3_4
  vec_t v65; // xmm0_4
  float v66; // xmm2_4
  matrix3x4a_t *v67; // r13
  const CHitBox *m_pHitBox; // rbx
  float v69; // xmm3_4
  float v70; // xmm5_4
  float v71; // xmm2_4
  float v72; // xmm4_4
  vec_t v73; // xmm1_4
  vec_t v74; // xmm2_4
  vec_t v75; // xmm0_4
  __int64 (__fastcall *v76)(IVPhysics2 *, RnSweptTransform_t *, HPhysicsShape, RnSweptTransform_t *, HPhysicsShape, Quaternion *); // rax
  float v77; // r14^4
  bool v78; // bl
  uint32 m_nGrowSize; // eax
  uint32 v80; // edx
  uint32 v81; // edx
  const CModel *pModel; // [rsp+18h] [rbp-C68h]
  HPhysicsShape hCapsuleShapeZeroRadius; // [rsp+20h] [rbp-C60h]
  HPhysicsShape hCapsuleShape; // [rsp+40h] [rbp-C40h]
  float vLocalMax; // [rsp+60h] [rbp-C20h]
  float v89; // [rsp+70h] [rbp-C10h]
  float v90; // [rsp+70h] [rbp-C10h]
  float hBoxShape; // [rsp+78h] [rbp-C08h]
  HPhysicsShape hBoxShapea; // [rsp+78h] [rbp-C08h]
  float v93; // [rsp+80h] [rbp-C00h]
  uint32 v94; // [rsp+90h] [rbp-BF0h]
  float v95; // [rsp+90h] [rbp-BF0h]
  float v96; // [rsp+94h] [rbp-BECh]
  float v97; // [rsp+98h] [rbp-BE8h]
  float v98; // [rsp+9Ch] [rbp-BE4h]
  float swept_aabb; // [rsp+A0h] [rbp-BE0h]
  float swept_aabb_4; // [rsp+A4h] [rbp-BDCh]
  float swept_aabb_8; // [rsp+A8h] [rbp-BD8h]
  Vector vec; // [rsp+D0h] [rbp-BB0h] BYREF
  AABB_t hitbox_aabb; // [rsp+E0h] [rbp-BA0h] BYREF
  RnDistanceQueryResult_t query; // [rsp+100h] [rbp-B80h] BYREF
  Quaternion q; // [rsp+120h] [rbp-B60h] BYREF
  Quaternion v106; // [rsp+130h] [rbp-B50h] BYREF
  Quaternion v107; // [rsp+140h] [rbp-B40h] BYREF
  Quaternion v108; // [rsp+150h] [rbp-B30h] BYREF
  matrix3x4_t in; // [rsp+160h] [rbp-B20h] BYREF
  matrix3x4_t out; // [rsp+190h] [rbp-AF0h] BYREF
  RnSweptTransform_t capsule_sweep; // [rsp+1C0h] [rbp-AC0h] BYREF
  RnSweptTransform_t box_sweep; // [rsp+200h] [rbp-A80h] BYREF
  RnHullBox_t box; // [rsp+240h] [rbp-A40h] BYREF
  CHitboxList list; // [rsp+400h] [rbp-880h] BYREF
  CHitboxTransformList transforms; // [rsp+620h] [rbp-660h] BYREF
  unsigned __int64 v116; // [rsp+C48h] [rbp-38h]
  CResourceArray<Vector> vLocalMax_4; // 0:^64.8

  v116 = __readfsqword(0x28u);
  pResults->m_pEntity = 0;
  pResults->m_pSurfaceProperties = 0;
  pResults->m_hBody = 0;
  pResults->m_hShape = 0;
  x = vec3_origin.x;
  pResults->m_pHitbox = 0;
  y = vec3_origin.y;
  pResults->m_nHitboxBone = -1;
  z = vec3_origin.z;
  pResults->m_flHitTime = 1.0;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  pResults->m_vHitPoint.x = x;
  pResults->m_vHitPoint.y = y;
  pResults->m_vHitPoint.z = z;
  pResults->m_vHitNormal.x = x;
  pResults->m_vHitNormal.y = y;
  pResults->m_vHitNormal.z = z;
  list.m_Size = 0;
  list.m_Memory.m_nAllocationCount = 32;
  list.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Size = 0;
  transforms.m_Memory.m_nAllocationCount = 32;
  transforms.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
  if ( CSkeletonInstance::GetHitBoxListAndTransforms(this, &list, &transforms, hitboxSetName) != 0 )
  {
    m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      pModel = m_pBinding->m_pData;
    else
      pModel = 0;
    v14 = 0;
    swept_aabb_8 = -3.4028235e38;
    swept_aabb_4 = -3.4028235e38;
    swept_aabb = -3.4028235e38;
    v98 = 3.4028235e38;
    v96 = 3.4028235e38;
    v97 = 3.4028235e38;
    do
    {
      box.m_flMaxAngularRadius = 0.0;
      TransformLerp(xform1, xform2, v14++ * 0.0625, &box);
      v15 = *&box.m_Vertices.m_nOffset;
      v16 = capsule->m_vCenter[0].z;
      v17 = *&box.m_Vertices.m_nOffset * (*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount);
      v18 = (v15 + v15) * *&box.m_Planes.m_nOffset;
      v19 = (*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Vertices.m_nCount;
      v20 = (*&box.m_Vertices.m_nCount + *&box.m_Vertices.m_nCount) * *&box.m_Vertices.m_nCount;
      v21 = (v15 + v15) * *&box.m_Vertices.m_nCount;
      v22 = (*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Planes.m_nOffset;
      v23 = (*&box.m_Planes.m_nOffset * (*&box.m_Vertices.m_nCount + *&box.m_Vertices.m_nCount)) - v17;
      v24 = v18 - v19;
      v25 = v19 + v18;
      v93 = (*&box.m_Planes.m_nOffset * (*&box.m_Vertices.m_nCount + *&box.m_Vertices.m_nCount)) + v17;
      v26 = 1.0 - (v15 * (v15 + v15));
      v27 = capsule->m_vCenter[1].z;
      v28 = v21 + v22;
      v29 = v21 - v22;
      v30 = (v26 - v20) * v27;
      v31 = (((v24 * capsule->m_vCenter[0].x) + box.m_vCentroid.z) + (v93 * capsule->m_vCenter[0].y))
          + ((v26 - v20) * v16);
      v32 = v28;
      v33 = (*&box.m_Planes.m_nOffset + *&box.m_Planes.m_nOffset) * *&box.m_Planes.m_nOffset;
      v34 = v26 - v33;
      v35 = (((capsule->m_vCenter[0].x * v32) + box.m_vCentroid.y) + (capsule->m_vCenter[0].y * v34)) + (v16 * v23);
      v36 = (1.0 - v20) - v33;
      v37 = capsule->m_vCenter[1].y;
      v38 = v93 * v37;
      v39 = (((capsule->m_vCenter[0].x * v36) + box.m_vCentroid.x) + (capsule->m_vCenter[0].y * v29)) + (v16 * v25);
      v40 = capsule->m_vCenter[1].x;
      v41 = v34 * v37;
      v42 = v29 * v37;
      m_flRadius = capsule->m_flRadius;
      v44 = (((v24 * v40) + box.m_vCentroid.z) + v38) + v30;
      v45 = (((v32 * v40) + box.m_vCentroid.y) + v41) + (v23 * v27);
      v46 = (((v36 * v40) + box.m_vCentroid.x) + v42) + (v25 * v27);
      v98 = fminf(v98, fminf(v31 - m_flRadius, v44 - m_flRadius));
      v96 = fminf(v96, fminf(v35 - m_flRadius, v45 - m_flRadius));
      v97 = fminf(v97, fminf(v39 - m_flRadius, v46 - m_flRadius));
      swept_aabb_8 = fmaxf(swept_aabb_8, fmaxf(m_flRadius + v31, m_flRadius + v44));
      swept_aabb_4 = fmaxf(swept_aabb_4, fmaxf(m_flRadius + v35, m_flRadius + v45));
      swept_aabb = fmaxf(swept_aabb, fmaxf(m_flRadius + v39, m_flRadius + v46));
    }
    while ( v14 != 17 );
    hCapsuleShape = (*(g_pVPhysics2->_vptr_IAppSystem + 21))(g_pVPhysics2, capsule, &capsule->m_vCenter[1]);
    hCapsuleShapeZeroRadius = (*(g_pVPhysics2->_vptr_IAppSystem + 21))(
                                g_pVPhysics2,
                                capsule,
                                &capsule->m_vCenter[1],
                                0.0);
    v47 = *&xform1->m_orientation.z;
    *&capsule_sweep.m_vPosition1.x = *&xform1->m_vPosition.x;
    v48 = xform1->m_vPosition.z;
    *&capsule_sweep.m_qOrientation1.z = v47;
    v49 = *&xform2->m_orientation.z;
    capsule_sweep.m_vPosition1.z = v48;
    v50 = *&xform2->m_vPosition.x;
    *&capsule_sweep.m_qOrientation2.z = v49;
    *&capsule_sweep.m_vPosition2.x = v50;
    capsule_sweep.m_vPosition2.z = xform2->m_vPosition.z;
    *&capsule_sweep.m_qOrientation1.x = *&xform1->m_orientation.x;
    *&capsule_sweep.m_qOrientation2.x = *&xform2->m_orientation.x;
    if ( QuaternionDotProduct(&capsule_sweep.m_qOrientation1, &capsule_sweep.m_qOrientation2) < 0.0 )
    {
      capsule_sweep.m_qOrientation2.w = -capsule_sweep.m_qOrientation2.w;
      capsule_sweep.m_qOrientation2.z = -capsule_sweep.m_qOrientation2.z;
      capsule_sweep.m_qOrientation2.y = -capsule_sweep.m_qOrientation2.y;
      capsule_sweep.m_qOrientation2.x = -capsule_sweep.m_qOrientation2.x;
    }
    if ( list.m_Size > 0 )
    {
      for ( i = 0; i < list.m_Size; ++i )
      {
        v67 = &transforms.m_Memory.m_pMemory[i];
        m_pHitBox = list.m_Memory.m_pMemory[i].m_pHitBox;
        v95 = m_pHitBox->m_vMinBounds.x;
        v90 = m_pHitBox->m_vMinBounds.y;
        vLocalMax = m_pHitBox->m_vMinBounds.z;
        hBoxShape = m_pHitBox->m_vMaxBounds.x;
        vLocalMax_4 = *&m_pHitBox->m_vMaxBounds.y;
        box.m_vCentroid.x = v95;
        box.m_vCentroid.y = v90;
        box.m_vCentroid.z = vLocalMax;
        box.m_flMaxAngularRadius = hBoxShape;
        box.m_Vertices = vLocalMax_4;
        TransformAABB(
          v67,
          &box.m_vCentroid,
          &box.m_flMaxAngularRadius,
          &hitbox_aabb.m_vMinBounds,
          &hitbox_aabb.m_vMaxBounds);
        v69 = fmaxf(v96, hitbox_aabb.m_vMinBounds.y);
        v70 = fmaxf(v98, hitbox_aabb.m_vMinBounds.z);
        v71 = fminf(swept_aabb_4, hitbox_aabb.m_vMaxBounds.y);
        v72 = fminf(swept_aabb_8, hitbox_aabb.m_vMaxBounds.z);
        if ( fmaxf(v97, hitbox_aabb.m_vMinBounds.x) < fminf(swept_aabb, hitbox_aabb.m_vMaxBounds.x)
          && v69 < v71
          && v70 < v72 )
        {
          v73 = (v90 + *&vLocalMax_4.m_nOffset) * 0.5;
          v74 = (hBoxShape + v95) * 0.5;
          v75 = (*&vLocalMax_4.m_nCount + vLocalMax) * 0.5;
          box.m_vCentroid.y = v73;
          box.m_vCentroid.x = v74;
          box.m_vCentroid.z = v75;
          box.m_BoxVertices[0].y = v73 + (*&vLocalMax_4.m_nOffset - v73);
          box.m_BoxVertices[1].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[0].z = v75 + (*&vLocalMax_4.m_nCount - v75);
          box.m_BoxVertices[1].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[0].x = v74 + (hBoxShape - v74);
          box.m_BoxVertices[1].x = v74 - (hBoxShape - v74);
          box.m_BoxVertices[2].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[2].y = v73 - (*&vLocalMax_4.m_nOffset - v73);
          box.m_BoxVertices[2].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[3].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[3].y = box.m_BoxVertices[2].y;
          box.m_BoxVertices[3].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[4].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[4].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[4].z = v75 - (*&vLocalMax_4.m_nCount - v75);
          box.m_BoxVertices[5].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[5].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[5].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[6].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[6].y = box.m_BoxVertices[2].y;
          box.m_BoxVertices[6].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[7].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[7].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[7].y = box.m_BoxVertices[2].y;
          box.m_BoxPlanes[0].m_vNormal.y = -0.0;
          box.m_BoxPlanes[0].m_vNormal.z = -0.0;
          box.m_BoxPlanes[2].m_vNormal.x = -0.0;
          box.m_BoxPlanes[2].m_vNormal.z = -0.0;
          box.m_BoxPlanes[4].m_vNormal.x = -0.0;
          box.m_BoxPlanes[4].m_vNormal.y = -0.0;
          box.m_BoxEdges[0].m_nNext = 2;
          box.m_Vertices.m_nOffset = 132;
          box.m_Vertices.m_nCount = 8;
          box.m_BoxPlanes[0].m_vNormal.x = -1.0;
          box.m_BoxPlanes[1].m_vNormal.x = 1.0;
          box.m_BoxPlanes[0].m_flOffset = ((v90 * -0.0) - v95) + (vLocalMax * -0.0);
          box.m_BoxPlanes[1].m_vNormal.y = 0.0;
          box.m_BoxPlanes[2].m_flOffset = ((v95 * -0.0) - v90) + (vLocalMax * -0.0);
          box.m_BoxPlanes[1].m_vNormal.z = 0.0;
          box.m_BoxPlanes[2].m_vNormal.y = -1.0;
          box.m_BoxPlanes[3].m_vNormal.x = 0.0;
          box.m_BoxPlanes[3].m_vNormal.y = 1.0;
          box.m_BoxPlanes[1].m_flOffset = (hBoxShape + (0.0 * *&vLocalMax_4.m_nOffset)) + (0.0 * *&vLocalMax_4.m_nCount);
          box.m_BoxPlanes[3].m_vNormal.z = 0.0;
          box.m_BoxPlanes[4].m_vNormal.z = -1.0;
          box.m_BoxPlanes[5].m_vNormal.x = 0.0;
          box.m_BoxPlanes[5].m_vNormal.y = 0.0;
          box.m_BoxPlanes[5].m_vNormal.z = 1.0;
          box.m_Planes.m_nOffset = 220;
          box.m_BoxEdges[0].m_nTwin = 1;
          box.m_Planes.m_nCount = 6;
          box.m_BoxPlanes[3].m_flOffset = (*&vLocalMax_4.m_nOffset + (0.0 * hBoxShape)) + (0.0 * *&vLocalMax_4.m_nCount);
          box.m_BoxPlanes[5].m_flOffset = ((0.0 * *&vLocalMax_4.m_nOffset) + (0.0 * hBoxShape)) + *&vLocalMax_4.m_nCount;
          box.m_BoxPlanes[4].m_flOffset = ((v90 * -0.0) + (v95 * -0.0)) - vLocalMax;
          box.m_BoxEdges[0].m_nOrigin = 2;
          box.m_BoxEdges[0].m_nFace = 0;
          box.m_BoxEdges[1].m_nNext = 17;
          box.m_BoxEdges[1].m_nTwin = 0;
          box.m_BoxEdges[1].m_nOrigin = 1;
          box.m_BoxEdges[1].m_nFace = 5;
          box.m_BoxEdges[2].m_nNext = 4;
          box.m_BoxEdges[2].m_nTwin = 3;
          box.m_BoxEdges[2].m_nOrigin = 1;
          box.m_BoxEdges[2].m_nFace = 0;
          box.m_BoxEdges[3].m_nNext = 20;
          box.m_BoxEdges[3].m_nTwin = 2;
          box.m_BoxEdges[3].m_nOrigin = 5;
          box.m_BoxEdges[3].m_nFace = 3;
          box.m_BoxEdges[4].m_nNext = 6;
          box.m_BoxEdges[4].m_nTwin = 5;
          box.m_BoxEdges[4].m_nOrigin = 5;
          box.m_BoxEdges[4].m_nFace = 0;
          box.m_BoxEdges[5].m_nNext = 23;
          box.m_BoxEdges[5].m_nTwin = 4;
          box.m_BoxEdges[5].m_nOrigin = 6;
          box.m_BoxEdges[5].m_nFace = 4;
          box.m_BoxEdges[6].m_nNext = 0;
          box.m_BoxEdges[6].m_nTwin = 7;
          box.m_BoxEdges[6].m_nOrigin = 6;
          box.m_BoxEdges[6].m_nFace = 0;
          box.m_BoxEdges[7].m_nNext = 18;
          box.m_BoxEdges[7].m_nTwin = 6;
          box.m_BoxEdges[7].m_nOrigin = 2;
          box.m_BoxEdges[7].m_nFace = 2;
          strcpy(&box.m_BoxEdges[8], "\n\t");
          box.m_BoxEdges[8].m_nFace = 1;
          box.m_BoxEdges[9].m_nNext = 21;
          box.m_BoxEdges[9].m_nTwin = 8;
          box.m_BoxEdges[9].m_nOrigin = 3;
          box.m_BoxEdges[9].m_nFace = 5;
          box.m_BoxEdges[10].m_nNext = 12;
          box.m_BoxEdges[10].m_nTwin = 11;
          box.m_BoxEdges[10].m_nOrigin = 3;
          box.m_BoxEdges[10].m_nFace = 1;
          box.m_BoxEdges[11].m_nNext = 16;
          box.m_BoxEdges[11].m_nTwin = 10;
          box.m_BoxEdges[11].m_nOrigin = 7;
          box.m_BoxEdges[11].m_nFace = 2;
          box.m_BoxEdges[12].m_nNext = 14;
          box.m_BoxEdges[12].m_nTwin = 13;
          box.m_BoxEdges[12].m_nOrigin = 7;
          box.m_BoxEdges[12].m_nFace = 1;
          box.m_BoxEdges[13].m_nNext = 19;
          box.m_BoxEdges[13].m_nTwin = 12;
          box.m_BoxEdges[13].m_nOrigin = 4;
          box.m_BoxEdges[13].m_nFace = 4;
          box.m_BoxEdges[14].m_nNext = 8;
          box.m_BoxEdges[14].m_nTwin = 15;
          box.m_BoxEdges[14].m_nOrigin = 4;
          box.m_BoxEdges[14].m_nFace = 1;
          box.m_BoxEdges[15].m_nNext = 22;
          box.m_BoxEdges[15].m_nTwin = 14;
          box.m_BoxEdges[15].m_nOrigin = 0;
          box.m_BoxEdges[15].m_nFace = 3;
          box.m_BoxEdges[16].m_nNext = 7;
          box.m_BoxEdges[16].m_nTwin = 17;
          box.m_BoxEdges[16].m_nOrigin = 3;
          box.m_BoxEdges[16].m_nFace = 2;
          box.m_BoxEdges[17].m_nNext = 9;
          box.m_BoxEdges[17].m_nTwin = 16;
          box.m_BoxEdges[17].m_nOrigin = 2;
          box.m_BoxEdges[17].m_nFace = 5;
          box.m_BoxEdges[18].m_nNext = 11;
          box.m_BoxEdges[18].m_nTwin = 19;
          box.m_BoxEdges[18].m_nOrigin = 6;
          box.m_BoxEdges[18].m_nFace = 2;
          box.m_BoxEdges[19].m_nNext = 5;
          box.m_BoxEdges[19].m_nTwin = 18;
          box.m_BoxEdges[19].m_nOrigin = 7;
          box.m_BoxEdges[19].m_nFace = 4;
          box.m_BoxEdges[20].m_nNext = 15;
          box.m_BoxEdges[20].m_nTwin = 21;
          box.m_BoxEdges[20].m_nOrigin = 1;
          box.m_BoxEdges[20].m_nFace = 3;
          box.m_BoxEdges[21].m_nNext = 1;
          box.m_BoxEdges[21].m_nTwin = 20;
          box.m_BoxEdges[21].m_nOrigin = 0;
          box.m_BoxEdges[21].m_nFace = 5;
          box.m_BoxEdges[22].m_nNext = 3;
          box.m_BoxEdges[22].m_nTwin = 23;
          box.m_BoxEdges[22].m_nOrigin = 4;
          box.m_BoxEdges[22].m_nFace = 3;
          box.m_BoxEdges[23].m_nNext = 13;
          box.m_BoxEdges[23].m_nTwin = 22;
          box.m_BoxEdges[23].m_nOrigin = 5;
          box.m_BoxEdges[23].m_nFace = 4;
          box.m_Edges.m_nOffset = 308;
          box.m_Edges.m_nCount = 24;
          box.m_BoxFaces[0].m_nEdge = 0;
          box.m_BoxFaces[1].m_nEdge = 8;
          box.m_BoxFaces[2].m_nEdge = 16;
          box.m_BoxFaces[3].m_nEdge = 20;
          box.m_BoxFaces[4].m_nEdge = 19;
          box.m_BoxFaces[5].m_nEdge = 21;
          box.m_Faces.m_nOffset = 396;
          box.m_Bounds.m_vMinBounds.x = v95;
          box.m_Faces.m_nCount = 6;
          box.m_Bounds.m_vMinBounds.y = v90;
          box.m_Bounds.m_vMinBounds.z = vLocalMax;
          box.m_Bounds.m_vMaxBounds.x = hBoxShape;
          *&box.m_Bounds.m_vMaxBounds.y = vLocalMax_4;
          hBoxShapea = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, &box);
          in = v67->matrix3x4_t;
          out = v67->matrix3x4_t;
          MatrixNormalize(&in, &in);
          MatrixNormalize(&out, &out);
          box_sweep.m_vPosition1.x = in.m_flMatVal[0][3];
          box_sweep.m_vPosition1.y = in.m_flMatVal[1][3];
          box_sweep.m_vPosition1.z = in.m_flMatVal[2][3];
          box_sweep.m_vPosition2.x = out.m_flMatVal[0][3];
          box_sweep.m_vPosition2.y = out.m_flMatVal[1][3];
          box_sweep.m_vPosition2.z = out.m_flMatVal[2][3];
          MatrixQuaternion(&in, &q);
          box_sweep.m_qOrientation1 = q;
          MatrixQuaternion(&out, &v107);
          box_sweep.m_qOrientation2 = v107;
          if ( QuaternionDotProduct(&box_sweep.m_qOrientation1, &box_sweep.m_qOrientation2) < 0.0 )
          {
            box_sweep.m_qOrientation2.w = -box_sweep.m_qOrientation2.w;
            box_sweep.m_qOrientation2.z = -box_sweep.m_qOrientation2.z;
            box_sweep.m_qOrientation2.y = -box_sweep.m_qOrientation2.y;
            box_sweep.m_qOrientation2.x = -box_sweep.m_qOrientation2.x;
          }
          v76 = *(g_pVPhysics2->_vptr_IAppSystem + 26);
          v107.x = 0.0;
          *&v107.z = 0;
          v108.x = 0.0;
          v108.y = 0.0;
          LODWORD(v77) = v76(g_pVPhysics2, &capsule_sweep, hCapsuleShape, &box_sweep, hBoxShapea, &v107) >> 32;
          v107.x = 0.0;
          if ( (LODWORD(v108.y) & 0xC0000000) == 0 )
          {
            CUtlMemory<RnIteration_t,int>::Purge(&v107.z);
            if ( (LODWORD(v108.y) & 0xC0000000) == 0 )
              CUtlMemory<RnIteration_t,int>::Purge(&v107.z);
          }
          v89 = v77;
          if ( pResults->m_flHitTime > v77 )
          {
            v52 = CUtlString::Get(&m_pHitBox->m_sSurfaceProperty);
            v94 = 0;
            v53 = v52;
            if ( v52 != 0 && *v52 != 0 )
            {
              v94 = MurmurHash2LowerCase(v52, 0x31415926u);
              if ( g_bUpdateStringTokenDatabase )
                RegisterStringToken(v94, v53, 0, 1);
            }
            pResults->m_pEntity = this->m_pOwner;
            v54 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
            pResults->m_pSurfaceProperties = (*(*v54 + 16LL))(v54, v94, 0);
            pResults->m_pHitbox = m_pHitBox;
            pResults->m_nHitboxBone = CModel::GetBoneIndexForHitbox(pModel, &list.m_Memory.m_pMemory[i]);
            pResults->m_flHitTime = v89;
            if ( v89 <= 0.0 )
              break;
            v55 = 0x3F800000u;
            *v55.m128i_i32 = 1.0 - v89;
            v56 = COERCE_FLOAT(_mm_cvtsi128_si32(v55));
            v57 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
            v107.y = (box_sweep.m_vPosition2.y * v89) + ((1.0 - v89) * box_sweep.m_vPosition1.y);
            v107.w = 0.0;
            v107.z = (box_sweep.m_vPosition2.z * v89) + (v56 * box_sweep.m_vPosition1.z);
            v107.x = (box_sweep.m_vPosition2.x * v89) + (v56 * box_sweep.m_vPosition1.x);
            v108.w = (box_sweep.m_qOrientation2.w * v89) + (v56 * box_sweep.m_qOrientation1.w);
            v108.z = (box_sweep.m_qOrientation2.z * v89) + (v56 * box_sweep.m_qOrientation1.z);
            v108.y = (box_sweep.m_qOrientation2.y * v89) + (v56 * box_sweep.m_qOrientation1.y);
            v108.x = (box_sweep.m_qOrientation2.x * v89) + (v56 * box_sweep.m_qOrientation1.x);
            QuaternionNormalize(&v108);
            q.w = 0.0;
            q.y = (capsule_sweep.m_vPosition2.y * v89) + (v56 * capsule_sweep.m_vPosition1.y);
            q.z = (capsule_sweep.m_vPosition2.z * v89) + (v56 * capsule_sweep.m_vPosition1.z);
            q.x = (capsule_sweep.m_vPosition2.x * v89) + (v56 * capsule_sweep.m_vPosition1.x);
            v106.w = (capsule_sweep.m_qOrientation2.w * v89) + (v56 * capsule_sweep.m_qOrientation1.w);
            v106.z = (capsule_sweep.m_qOrientation2.z * v89) + (v56 * capsule_sweep.m_qOrientation1.z);
            v106.y = (capsule_sweep.m_qOrientation2.y * v89) + (v56 * capsule_sweep.m_qOrientation1.y);
            v106.x = (capsule_sweep.m_qOrientation2.x * v89) + (v56 * capsule_sweep.m_qOrientation1.x);
            v58 = QuaternionNormalize(&v106);
            v57(&query, g_pVPhysics2, &q, hCapsuleShapeZeroRadius, &v107, hBoxShapea, v58);
            v59 = query.m_vPoint1.y;
            v60 = query.m_vPoint2.y;
            v61 = query.m_vPoint1.z;
            pResults->m_vHitPoint.y = query.m_vPoint1.y;
            v62 = v60 - v59;
            v63 = query.m_vPoint2.z;
            v64 = query.m_vPoint1.x;
            pResults->m_vHitPoint.z = v61;
            v65 = v63 - v61;
            v66 = query.m_vPoint2.x;
            pResults->m_vHitPoint.x = v64;
            vec.y = v62;
            vec.z = v65;
            vec.x = v66 - v64;
            VectorNormalize(&vec);
            pResults->m_vHitNormal = vec;
          }
          (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hBoxShapea);
        }
      }
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hCapsuleShapeZeroRadius);
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hCapsuleShape);
  }
  transforms.m_Size = 0;
  v78 = pResults->m_flHitTime < 1.0;
  if ( transforms.m_Memory.m_nAllocationCount < 0 )
  {
    v80 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = transforms.m_Memory.m_nGrowSize;
    v80 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
    if ( transforms.m_Memory.m_pMemory != &transforms.m_Memory.m_FixedMemory )
    {
      if ( transforms.m_Memory.m_pMemory != 0 && v80 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = transforms.m_Memory.m_nGrowSize;
      }
      transforms.m_Memory.m_nAllocationCount = 32;
      transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
      transforms.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_34;
    }
  }
  if ( v80 == 0 )
    CUtlMemory<matrix3x4a_t,int>::Purge(&transforms.m_Memory);
LABEL_34:
  list.m_Size = 0;
  v81 = list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_Memory.m_nAllocationCount < 0 || list.m_Memory.m_pMemory == &list.m_Memory.m_FixedMemory )
  {
    if ( v81 == 0 )
      CUtlMemory<HitBoxAndMesh_t,int>::Purge(&list.m_Memory);
  }
  else if ( list.m_Memory.m_pMemory != 0 && v81 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v78;
}


// CSkeletonInstance::SweepShapeAgainstHitboxes  (line 5363, @0x00000000020eaf20, libserver.so)  // inlines: AABB_t, CGameSweep, CTransform, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, DidHit, DotProduct, GetBbox, GetModelData, GetNormal, GetOwnerEntity, GetPtr, GetRawPtr, Init, Interpolate, IsEmpty, IsExternallyAllocated, MakeInvalid, MakeStringToken, MatrixQuaternion, Normalize, Overlaps, Purge, Purge_FixedGrowable, RemoveAll, ResolveOffset, RnPlane_t, RnSweptTransform_t, ToQuaternion, TransformAABB, TransformPoint, VectorAdd, VectorAligned, VectorMax, VectorMin, VectorMultiply, VectorSubtract, WriteDirect, fpmax, fpmin, operator const RuntimeClass_t*, operator&=, operator*, operator+, operator-, operator=, operator[], operator|=, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSkeletonInstance::GetHitBoxListAndTransforms, TransformLerp, AddPointToBounds, QuaternionDotProduct, CUtlString::Get, CModel::GetBoneIndexForHitbox, QuaternionNormalize, VectorNormalize, TransformAABB, MatrixNormalize, MatrixQuaternion, CUtlMemory<RnIteration_t, int>::Purge (20 total)
// callers: CGamePhysicsQueryInterface::SweepShapeAgainstEntity
bool __fastcall CSkeletonInstance::SweepShapeAgainstHitboxes(
        CSkeletonInstance *const this,
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const hull,
        CGameSweep *pResults,
        CUtlStringToken hitboxSetName)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  const ResourceBindingBase_t *m_pBinding; // rax
  signed int m_nCount; // edi
  __int64 v13; // r12
  signed int v14; // ebx
  int32 m_nOffset; // edx
  char *v16; // rax
  float v17; // xmm1_4
  float *v18; // rax
  float v19; // xmm10_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm12_4
  float v24; // xmm11_4
  float v25; // xmm14_4
  float v26; // xmm10_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm4_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  __int64 v36; // rdx
  vec_t v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r12
  int j; // r13d
  const char *v42; // rax
  const char *v43; // r14
  __int64 v44; // rax
  HitBoxAndMesh_t *v45; // rsi
  __m128i v46; // xmm5
  float v47; // ebx
  void (__fastcall *v48)(RnDistanceQueryResult_t *, IVPhysics2 *, Quaternion *, HPhysicsShape, Quaternion *, HPhysicsShape, float); // r14
  float v49; // xmm0_4
  float v50; // xmm2_4
  vec_t v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm3_4
  vec_t v54; // xmm0_4
  float v55; // xmm2_4
  matrix3x4a_t *v56; // r14
  const CHitBox *m_pHitBox; // rbx
  float v58; // xmm3_4
  float v59; // xmm5_4
  float v60; // xmm2_4
  float v61; // xmm4_4
  vec_t v62; // xmm1_4
  vec_t v63; // xmm2_4
  vec_t v64; // xmm0_4
  __int64 (__fastcall *v65)(IVPhysics2 *, RnSweptTransform_t *, HPhysicsShape, RnSweptTransform_t *, HPhysicsShape, Quaternion *, CHitboxList *); // rax
  float v66; // r14^4
  bool v67; // bl
  uint32 m_nGrowSize; // eax
  uint32 v69; // edx
  CHitboxList *p_list; // [rsp+0h] [rbp-C70h]
  const CModel *pModel; // [rsp+10h] [rbp-C60h]
  HPhysicsShape hHullShape; // [rsp+30h] [rbp-C40h]
  float v76; // [rsp+54h] [rbp-C1Ch]
  uint32 vLocalMaxa; // [rsp+58h] [rbp-C18h]
  float vLocalMaxb; // [rsp+58h] [rbp-C18h]
  float xform1b; // [rsp+60h] [rbp-C10h]
  int i; // [rsp+68h] [rbp-C08h]
  float ia; // [rsp+68h] [rbp-C08h]
  float ib; // [rsp+68h] [rbp-C08h]
  float v85; // [rsp+78h] [rbp-BF8h]
  float v86; // [rsp+7Ch] [rbp-BF4h]
  float v87; // [rsp+80h] [rbp-BF0h]
  float v88; // [rsp+84h] [rbp-BECh]
  float v89; // [rsp+88h] [rbp-BE8h]
  float hBoxShape; // [rsp+8Ch] [rbp-BE4h]
  float hBoxShape_4; // [rsp+90h] [rbp-BE0h]
  HPhysicsShape hBoxShape_4a; // [rsp+90h] [rbp-BE0h]
  float v; // [rsp+98h] [rbp-BD8h]
  Vector vec; // [rsp+C0h] [rbp-BB0h] BYREF
  AABB_t hitbox_aabb; // [rsp+D0h] [rbp-BA0h] BYREF
  RnDistanceQueryResult_t query; // [rsp+F0h] [rbp-B80h] BYREF
  Quaternion q; // [rsp+110h] [rbp-B60h] BYREF
  Quaternion v98; // [rsp+120h] [rbp-B50h] BYREF
  Quaternion v99; // [rsp+130h] [rbp-B40h] BYREF
  Quaternion v100; // [rsp+140h] [rbp-B30h] BYREF
  matrix3x4_t out; // [rsp+150h] [rbp-B20h] BYREF
  matrix3x4_t in; // [rsp+180h] [rbp-AF0h] BYREF
  RnSweptTransform_t hull_sweep; // [rsp+1B0h] [rbp-AC0h] BYREF
  RnSweptTransform_t box_sweep; // [rsp+1F0h] [rbp-A80h] BYREF
  RnHullBox_t box; // [rsp+230h] [rbp-A40h] BYREF
  CHitboxList list; // [rsp+3F0h] [rbp-880h] BYREF
  CHitboxTransformList transforms; // [rsp+610h] [rbp-660h] BYREF
  unsigned __int64 v108; // [rsp+C38h] [rbp-38h]

  v108 = __readfsqword(0x28u);
  pResults->m_pEntity = 0;
  x = vec3_origin.x;
  pResults->m_pSurfaceProperties = 0;
  y = vec3_origin.y;
  pResults->m_hBody = 0;
  z = vec3_origin.z;
  pResults->m_hShape = 0;
  p_list = &list;
  pResults->m_pHitbox = 0;
  pResults->m_nHitboxBone = -1;
  pResults->m_flHitTime = 1.0;
  pResults->m_vHitPoint.x = x;
  pResults->m_vHitPoint.y = y;
  pResults->m_vHitPoint.z = z;
  pResults->m_vHitNormal.x = x;
  pResults->m_vHitNormal.y = y;
  pResults->m_vHitNormal.z = z;
  list.m_Size = 0;
  list.m_Memory.m_nAllocationCount = 32;
  list.m_Memory.m_nGrowSize = 0x80000000;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  transforms.m_Size = 0;
  transforms.m_Memory.m_nAllocationCount = 32;
  transforms.m_Memory.m_nGrowSize = 0x80000000;
  transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
  if ( CSkeletonInstance::GetHitBoxListAndTransforms(this, &list, &transforms, hitboxSetName) != 0 )
  {
    m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
      pModel = m_pBinding->m_pData;
    else
      pModel = 0;
    hBoxShape = -3.4028235e38;
    v89 = -3.4028235e38;
    v88 = -3.4028235e38;
    v87 = 3.4028235e38;
    v85 = 3.4028235e38;
    v86 = 3.4028235e38;
    i = 0;
    do
    {
      box.m_flMaxAngularRadius = 0.0;
      TransformLerp(xform1, xform2, i * 0.0625, &box);
      box_sweep.m_vPosition1.x = 3.4028235e38;
      m_nCount = hull->m_Vertices.m_nCount;
      box_sweep.m_vPosition1.y = 3.4028235e38;
      box_sweep.m_vPosition1.z = 3.4028235e38;
      box_sweep.m_vPosition2.x = -3.4028235e38;
      box_sweep.m_vPosition2.y = -3.4028235e38;
      box_sweep.m_vPosition2.z = -3.4028235e38;
      if ( m_nCount <= 0 )
      {
        v30 = -3.4028235e38;
        v33 = 3.4028235e38;
        v31 = -3.4028235e38;
        v32 = -3.4028235e38;
        v34 = 3.4028235e38;
        v35 = 3.4028235e38;
      }
      else
      {
        v13 = 0;
        v14 = 0;
        do
        {
          m_nOffset = hull->m_Vertices.m_nOffset;
          v16 = 0;
          if ( m_nOffset != 0 )
            v16 = &hull->m_Vertices + m_nOffset;
          v17 = *&box.m_Vertices.m_nOffset;
          v18 = &v16[v13];
          v19 = *&box.m_Vertices.m_nCount;
          v20 = *v18;
          v21 = v18[1];
          v22 = v18[2];
          v23 = *&box.m_Planes.m_nOffset * (v19 + v19);
          v24 = *&box.m_Vertices.m_nOffset * (*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount);
          v25 = 1.0 - (v17 * (v17 + v17));
          v26 = (v19 + v19) * v19;
          v27 = *&box.m_Vertices.m_nCount * (v17 + v17);
          v28 = (*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Planes.m_nOffset;
          v29 = (*&box.m_Planes.m_nOffset + *&box.m_Planes.m_nOffset) * *&box.m_Planes.m_nOffset;
          hull_sweep.m_vPosition1.z = ((((((v17 + v17) * *&box.m_Planes.m_nOffset)
                                        - ((*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount)
                                         * *&box.m_Vertices.m_nCount))
                                       * *v18)
                                      + box.m_vCentroid.z)
                                     + ((v23 + v24) * v21))
                                    + ((v25 - v26) * v22);
          hull_sweep.m_vPosition1.y = ((((v27 + v28) * v20) + box.m_vCentroid.y) + ((v25 - v29) * v21))
                                    + ((v23 - v24) * v22);
          hull_sweep.m_vPosition1.x = (((((1.0 - v26) - v29) * v20) + box.m_vCentroid.x) + ((v27 - v28) * v21))
                                    + ((((v17 + v17) * *&box.m_Planes.m_nOffset)
                                      + ((*&box.m_Planes.m_nCount + *&box.m_Planes.m_nCount) * *&box.m_Vertices.m_nCount))
                                     * v22);
          AddPointToBounds(&hull_sweep.m_vPosition1, &box_sweep.m_vPosition1, &box_sweep.m_vPosition2);
          ++v14;
          v13 += 12;
        }
        while ( v14 < hull->m_Vertices.m_nCount );
        v30 = box_sweep.m_vPosition2.x;
        v31 = box_sweep.m_vPosition2.y;
        v32 = box_sweep.m_vPosition2.z;
        v33 = box_sweep.m_vPosition1.x;
        v34 = box_sweep.m_vPosition1.y;
        v35 = box_sweep.m_vPosition1.z;
      }
      ++i;
      v87 = fminf(v87, v35);
      v86 = fminf(v86, v33);
      v89 = fmaxf(v89, v31);
      v85 = fminf(v85, v34);
      v88 = fmaxf(v88, v30);
      hBoxShape = fmaxf(hBoxShape, v32);
    }
    while ( i != 17 );
    hHullShape = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, hull);
    v36 = *&xform1->m_orientation.z;
    *&hull_sweep.m_vPosition1.x = *&xform1->m_vPosition.x;
    v37 = xform1->m_vPosition.z;
    *&hull_sweep.m_qOrientation1.z = v36;
    v38 = *&xform2->m_orientation.z;
    hull_sweep.m_vPosition1.z = v37;
    v39 = *&xform2->m_vPosition.x;
    *&hull_sweep.m_qOrientation2.z = v38;
    *&hull_sweep.m_vPosition2.x = v39;
    hull_sweep.m_vPosition2.z = xform2->m_vPosition.z;
    *&hull_sweep.m_qOrientation1.x = *&xform1->m_orientation.x;
    *&hull_sweep.m_qOrientation2.x = *&xform2->m_orientation.x;
    if ( QuaternionDotProduct(&hull_sweep.m_qOrientation1, &hull_sweep.m_qOrientation2) < 0.0 )
    {
      hull_sweep.m_qOrientation2.w = -hull_sweep.m_qOrientation2.w;
      hull_sweep.m_qOrientation2.z = -hull_sweep.m_qOrientation2.z;
      hull_sweep.m_qOrientation2.y = -hull_sweep.m_qOrientation2.y;
      hull_sweep.m_qOrientation2.x = -hull_sweep.m_qOrientation2.x;
    }
    if ( list.m_Size > 0 )
    {
      v40 = 0;
      for ( j = 0; list.m_Size > j; ++j )
      {
        v56 = &transforms.m_Memory.m_pMemory[v40];
        m_pHitBox = list.m_Memory.m_pMemory[v40].m_pHitBox;
        xform1b = m_pHitBox->m_vMinBounds.x;
        v = m_pHitBox->m_vMinBounds.y;
        v76 = m_pHitBox->m_vMinBounds.z;
        hBoxShape_4 = m_pHitBox->m_vMaxBounds.x;
        vLocalMaxb = m_pHitBox->m_vMaxBounds.y;
        ib = m_pHitBox->m_vMaxBounds.z;
        box.m_vCentroid.x = xform1b;
        box.m_vCentroid.y = v;
        box.m_vCentroid.z = v76;
        box.m_flMaxAngularRadius = hBoxShape_4;
        *&box.m_Vertices.m_nOffset = vLocalMaxb;
        *&box.m_Vertices.m_nCount = ib;
        TransformAABB(
          v56,
          &box.m_vCentroid,
          &box.m_flMaxAngularRadius,
          &hitbox_aabb.m_vMinBounds,
          &hitbox_aabb.m_vMaxBounds);
        v58 = fmaxf(v85, hitbox_aabb.m_vMinBounds.y);
        v59 = fmaxf(v87, hitbox_aabb.m_vMinBounds.z);
        v60 = fminf(v89, hitbox_aabb.m_vMaxBounds.y);
        v61 = fminf(hBoxShape, hitbox_aabb.m_vMaxBounds.z);
        if ( fmaxf(v86, hitbox_aabb.m_vMinBounds.x) < fminf(v88, hitbox_aabb.m_vMaxBounds.x) && v58 < v60 && v59 < v61 )
        {
          v62 = (v + vLocalMaxb) * 0.5;
          v63 = (hBoxShape_4 + xform1b) * 0.5;
          v64 = (ib + v76) * 0.5;
          box.m_vCentroid.y = v62;
          box.m_vCentroid.x = v63;
          box.m_vCentroid.z = v64;
          box.m_BoxVertices[0].y = v62 + (vLocalMaxb - v62);
          box.m_BoxVertices[1].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[0].z = v64 + (ib - v64);
          box.m_BoxVertices[1].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[0].x = v63 + (hBoxShape_4 - v63);
          box.m_BoxVertices[1].x = v63 - (hBoxShape_4 - v63);
          box.m_BoxVertices[2].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[2].y = v62 - (vLocalMaxb - v62);
          box.m_BoxVertices[2].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[3].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[3].y = box.m_BoxVertices[2].y;
          box.m_BoxVertices[3].z = box.m_BoxVertices[0].z;
          box.m_BoxVertices[4].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[4].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[4].z = v64 - (ib - v64);
          box.m_BoxVertices[5].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[5].y = box.m_BoxVertices[0].y;
          box.m_BoxVertices[5].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[6].x = box.m_BoxVertices[1].x;
          box.m_BoxVertices[6].y = box.m_BoxVertices[2].y;
          box.m_BoxVertices[6].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[7].x = box.m_BoxVertices[0].x;
          box.m_BoxVertices[7].z = box.m_BoxVertices[4].z;
          box.m_BoxVertices[7].y = box.m_BoxVertices[2].y;
          box.m_BoxPlanes[0].m_vNormal.y = -0.0;
          box.m_BoxPlanes[0].m_vNormal.z = -0.0;
          box.m_BoxPlanes[2].m_vNormal.x = -0.0;
          box.m_BoxPlanes[2].m_vNormal.z = -0.0;
          box.m_BoxPlanes[4].m_vNormal.x = -0.0;
          box.m_BoxPlanes[4].m_vNormal.y = -0.0;
          box.m_BoxEdges[0].m_nNext = 2;
          box.m_Vertices.m_nOffset = 132;
          box.m_Vertices.m_nCount = 8;
          box.m_BoxPlanes[0].m_vNormal.x = -1.0;
          box.m_BoxPlanes[1].m_vNormal.x = 1.0;
          box.m_BoxPlanes[0].m_flOffset = ((v * -0.0) - xform1b) + (v76 * -0.0);
          box.m_BoxPlanes[1].m_vNormal.y = 0.0;
          box.m_BoxPlanes[2].m_flOffset = ((xform1b * -0.0) - v) + (v76 * -0.0);
          box.m_BoxPlanes[1].m_vNormal.z = 0.0;
          box.m_BoxPlanes[2].m_vNormal.y = -1.0;
          box.m_BoxPlanes[3].m_vNormal.x = 0.0;
          box.m_BoxPlanes[3].m_vNormal.y = 1.0;
          box.m_BoxPlanes[1].m_flOffset = (hBoxShape_4 + (0.0 * vLocalMaxb)) + (0.0 * ib);
          box.m_BoxPlanes[3].m_vNormal.z = 0.0;
          box.m_BoxPlanes[4].m_vNormal.z = -1.0;
          box.m_BoxPlanes[5].m_vNormal.x = 0.0;
          box.m_BoxPlanes[5].m_vNormal.y = 0.0;
          box.m_BoxPlanes[5].m_vNormal.z = 1.0;
          box.m_Planes.m_nOffset = 220;
          box.m_BoxEdges[0].m_nTwin = 1;
          box.m_Planes.m_nCount = 6;
          box.m_BoxPlanes[3].m_flOffset = (vLocalMaxb + (0.0 * hBoxShape_4)) + (0.0 * ib);
          box.m_BoxPlanes[5].m_flOffset = ((0.0 * vLocalMaxb) + (0.0 * hBoxShape_4)) + ib;
          box.m_BoxPlanes[4].m_flOffset = ((v * -0.0) + (xform1b * -0.0)) - v76;
          box.m_BoxEdges[0].m_nOrigin = 2;
          box.m_BoxEdges[0].m_nFace = 0;
          box.m_BoxEdges[1].m_nNext = 17;
          box.m_BoxEdges[1].m_nTwin = 0;
          box.m_BoxEdges[1].m_nOrigin = 1;
          box.m_BoxEdges[1].m_nFace = 5;
          box.m_BoxEdges[2].m_nNext = 4;
          box.m_BoxEdges[2].m_nTwin = 3;
          box.m_BoxEdges[2].m_nOrigin = 1;
          box.m_BoxEdges[2].m_nFace = 0;
          box.m_BoxEdges[3].m_nNext = 20;
          box.m_BoxEdges[3].m_nTwin = 2;
          box.m_BoxEdges[3].m_nOrigin = 5;
          box.m_BoxEdges[3].m_nFace = 3;
          box.m_BoxEdges[4].m_nNext = 6;
          box.m_BoxEdges[4].m_nTwin = 5;
          box.m_BoxEdges[4].m_nOrigin = 5;
          box.m_BoxEdges[4].m_nFace = 0;
          box.m_BoxEdges[5].m_nNext = 23;
          box.m_BoxEdges[5].m_nTwin = 4;
          box.m_BoxEdges[5].m_nOrigin = 6;
          box.m_BoxEdges[5].m_nFace = 4;
          box.m_BoxEdges[6].m_nNext = 0;
          box.m_BoxEdges[6].m_nTwin = 7;
          box.m_BoxEdges[6].m_nOrigin = 6;
          box.m_BoxEdges[6].m_nFace = 0;
          box.m_BoxEdges[7].m_nNext = 18;
          box.m_BoxEdges[7].m_nTwin = 6;
          box.m_BoxEdges[7].m_nOrigin = 2;
          box.m_BoxEdges[7].m_nFace = 2;
          strcpy(&box.m_BoxEdges[8], "\n\t");
          box.m_BoxEdges[8].m_nFace = 1;
          box.m_BoxEdges[9].m_nNext = 21;
          box.m_BoxEdges[9].m_nTwin = 8;
          box.m_BoxEdges[9].m_nOrigin = 3;
          box.m_BoxEdges[9].m_nFace = 5;
          box.m_BoxEdges[10].m_nNext = 12;
          box.m_BoxEdges[10].m_nTwin = 11;
          box.m_BoxEdges[10].m_nOrigin = 3;
          box.m_BoxEdges[10].m_nFace = 1;
          box.m_BoxEdges[11].m_nNext = 16;
          box.m_BoxEdges[11].m_nTwin = 10;
          box.m_BoxEdges[11].m_nOrigin = 7;
          box.m_BoxEdges[11].m_nFace = 2;
          box.m_BoxEdges[12].m_nNext = 14;
          box.m_BoxEdges[12].m_nTwin = 13;
          box.m_BoxEdges[12].m_nOrigin = 7;
          box.m_BoxEdges[12].m_nFace = 1;
          box.m_BoxEdges[13].m_nNext = 19;
          box.m_BoxEdges[13].m_nTwin = 12;
          box.m_BoxEdges[13].m_nOrigin = 4;
          box.m_BoxEdges[13].m_nFace = 4;
          box.m_BoxEdges[14].m_nNext = 8;
          box.m_BoxEdges[14].m_nTwin = 15;
          box.m_BoxEdges[14].m_nOrigin = 4;
          box.m_BoxEdges[14].m_nFace = 1;
          box.m_BoxEdges[15].m_nNext = 22;
          box.m_BoxEdges[15].m_nTwin = 14;
          box.m_BoxEdges[15].m_nOrigin = 0;
          box.m_BoxEdges[15].m_nFace = 3;
          box.m_BoxEdges[16].m_nNext = 7;
          box.m_BoxEdges[16].m_nTwin = 17;
          box.m_BoxEdges[16].m_nOrigin = 3;
          box.m_BoxEdges[16].m_nFace = 2;
          box.m_BoxEdges[17].m_nNext = 9;
          box.m_BoxEdges[17].m_nTwin = 16;
          box.m_BoxEdges[17].m_nOrigin = 2;
          box.m_BoxEdges[17].m_nFace = 5;
          box.m_BoxEdges[18].m_nNext = 11;
          box.m_BoxEdges[18].m_nTwin = 19;
          box.m_BoxEdges[18].m_nOrigin = 6;
          box.m_BoxEdges[18].m_nFace = 2;
          box.m_BoxEdges[19].m_nNext = 5;
          box.m_BoxEdges[19].m_nTwin = 18;
          box.m_BoxEdges[19].m_nOrigin = 7;
          box.m_BoxEdges[19].m_nFace = 4;
          box.m_BoxEdges[20].m_nNext = 15;
          box.m_BoxEdges[20].m_nTwin = 21;
          box.m_BoxEdges[20].m_nOrigin = 1;
          box.m_BoxEdges[20].m_nFace = 3;
          box.m_BoxEdges[21].m_nNext = 1;
          box.m_BoxEdges[21].m_nTwin = 20;
          box.m_BoxEdges[21].m_nOrigin = 0;
          box.m_BoxEdges[21].m_nFace = 5;
          box.m_BoxEdges[22].m_nNext = 3;
          box.m_BoxEdges[22].m_nTwin = 23;
          box.m_BoxEdges[22].m_nOrigin = 4;
          box.m_BoxEdges[22].m_nFace = 3;
          box.m_BoxEdges[23].m_nNext = 13;
          box.m_BoxEdges[23].m_nTwin = 22;
          box.m_BoxEdges[23].m_nOrigin = 5;
          box.m_BoxEdges[23].m_nFace = 4;
          box.m_Edges.m_nOffset = 308;
          box.m_Edges.m_nCount = 24;
          box.m_BoxFaces[0].m_nEdge = 0;
          box.m_BoxFaces[1].m_nEdge = 8;
          box.m_BoxFaces[2].m_nEdge = 16;
          box.m_BoxFaces[3].m_nEdge = 20;
          box.m_BoxFaces[4].m_nEdge = 19;
          box.m_BoxFaces[5].m_nEdge = 21;
          box.m_Faces.m_nOffset = 396;
          box.m_Bounds.m_vMinBounds.x = xform1b;
          box.m_Faces.m_nCount = 6;
          box.m_Bounds.m_vMinBounds.y = v;
          box.m_Bounds.m_vMinBounds.z = v76;
          box.m_Bounds.m_vMaxBounds.x = hBoxShape_4;
          box.m_Bounds.m_vMaxBounds.y = vLocalMaxb;
          box.m_Bounds.m_vMaxBounds.z = ib;
          hBoxShape_4a = (*(g_pVPhysics2->_vptr_IAppSystem + 22))(g_pVPhysics2, &box);
          out = v56->matrix3x4_t;
          in = v56->matrix3x4_t;
          MatrixNormalize(&out, &out);
          MatrixNormalize(&in, &in);
          box_sweep.m_vPosition1.x = out.m_flMatVal[0][3];
          box_sweep.m_vPosition1.y = out.m_flMatVal[1][3];
          box_sweep.m_vPosition1.z = out.m_flMatVal[2][3];
          box_sweep.m_vPosition2.x = in.m_flMatVal[0][3];
          box_sweep.m_vPosition2.y = in.m_flMatVal[1][3];
          box_sweep.m_vPosition2.z = in.m_flMatVal[2][3];
          MatrixQuaternion(&out, &q);
          box_sweep.m_qOrientation1 = q;
          MatrixQuaternion(&in, &v99);
          box_sweep.m_qOrientation2 = v99;
          if ( QuaternionDotProduct(&box_sweep.m_qOrientation1, &box_sweep.m_qOrientation2) < 0.0 )
          {
            box_sweep.m_qOrientation2.w = -box_sweep.m_qOrientation2.w;
            box_sweep.m_qOrientation2.z = -box_sweep.m_qOrientation2.z;
            box_sweep.m_qOrientation2.y = -box_sweep.m_qOrientation2.y;
            box_sweep.m_qOrientation2.x = -box_sweep.m_qOrientation2.x;
          }
          v65 = *(g_pVPhysics2->_vptr_IAppSystem + 26);
          v99.x = 0.0;
          *&v99.z = 0;
          v100.x = 0.0;
          v100.y = 0.0;
          LODWORD(v66) = v65(g_pVPhysics2, &hull_sweep, hHullShape, &box_sweep, hBoxShape_4a, &v99, p_list) >> 32;
          v99.x = 0.0;
          if ( (LODWORD(v100.y) & 0xC0000000) == 0 )
          {
            CUtlMemory<RnIteration_t,int>::Purge(&v99.z);
            if ( (LODWORD(v100.y) & 0xC0000000) == 0 )
              CUtlMemory<RnIteration_t,int>::Purge(&v99.z);
          }
          ia = v66;
          if ( pResults->m_flHitTime > v66 )
          {
            v42 = CUtlString::Get(&m_pHitBox->m_sSurfaceProperty);
            vLocalMaxa = 0;
            v43 = v42;
            if ( v42 != 0 && *v42 != 0 )
            {
              vLocalMaxa = MurmurHash2LowerCase(v42, 0x31415926u);
              if ( g_bUpdateStringTokenDatabase )
                RegisterStringToken(vLocalMaxa, v43, 0, 1);
            }
            pResults->m_pEntity = this->m_pOwner;
            v44 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
            pResults->m_pSurfaceProperties = (*(*v44 + 16LL))(v44, vLocalMaxa, 0);
            v45 = &list.m_Memory.m_pMemory[v40];
            pResults->m_pHitbox = m_pHitBox;
            pResults->m_nHitboxBone = CModel::GetBoneIndexForHitbox(pModel, v45);
            pResults->m_flHitTime = ia;
            if ( ia <= 0.0 )
              break;
            v46 = _mm_cvtsi32_si128(0x3F800000u);
            *v46.m128i_i32 = *v46.m128i_i32 - ia;
            v47 = COERCE_FLOAT(_mm_cvtsi128_si32(v46));
            v48 = *(g_pVPhysics2->_vptr_IAppSystem + 27);
            v99.w = 0.0;
            v99.y = (box_sweep.m_vPosition2.y * ia) + (*v46.m128i_i32 * box_sweep.m_vPosition1.y);
            v99.z = (box_sweep.m_vPosition2.z * ia) + (*v46.m128i_i32 * box_sweep.m_vPosition1.z);
            v99.x = (box_sweep.m_vPosition2.x * ia) + (*v46.m128i_i32 * box_sweep.m_vPosition1.x);
            v100.w = (box_sweep.m_qOrientation2.w * ia) + (*v46.m128i_i32 * box_sweep.m_qOrientation1.w);
            v100.z = (box_sweep.m_qOrientation2.z * ia) + (*v46.m128i_i32 * box_sweep.m_qOrientation1.z);
            v100.y = (box_sweep.m_qOrientation2.y * ia) + (*v46.m128i_i32 * box_sweep.m_qOrientation1.y);
            v100.x = (box_sweep.m_qOrientation2.x * ia) + (*v46.m128i_i32 * box_sweep.m_qOrientation1.x);
            QuaternionNormalize(&v100);
            q.w = 0.0;
            q.y = (hull_sweep.m_vPosition2.y * ia) + (v47 * hull_sweep.m_vPosition1.y);
            q.z = (hull_sweep.m_vPosition2.z * ia) + (v47 * hull_sweep.m_vPosition1.z);
            q.x = (hull_sweep.m_vPosition2.x * ia) + (v47 * hull_sweep.m_vPosition1.x);
            v98.w = (hull_sweep.m_qOrientation2.w * ia) + (v47 * hull_sweep.m_qOrientation1.w);
            v98.z = (hull_sweep.m_qOrientation2.z * ia) + (v47 * hull_sweep.m_qOrientation1.z);
            v98.y = (hull_sweep.m_qOrientation2.y * ia) + (v47 * hull_sweep.m_qOrientation1.y);
            v98.x = (hull_sweep.m_qOrientation2.x * ia) + (v47 * hull_sweep.m_qOrientation1.x);
            v49 = QuaternionNormalize(&v98);
            v48(&query, g_pVPhysics2, &q, hHullShape, &v99, hBoxShape_4a, v49);
            v50 = query.m_vPoint1.z;
            v51 = query.m_vPoint2.y - query.m_vPoint1.y;
            pResults->m_vHitPoint.y = query.m_vPoint1.y;
            v52 = query.m_vPoint2.z;
            v53 = query.m_vPoint1.x;
            pResults->m_vHitPoint.z = v50;
            v54 = v52 - v50;
            v55 = query.m_vPoint2.x;
            pResults->m_vHitPoint.x = v53;
            vec.y = v51;
            vec.z = v54;
            vec.x = v55 - v53;
            VectorNormalize(&vec);
            pResults->m_vHitNormal = vec;
          }
          (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hBoxShape_4a);
        }
        ++v40;
      }
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 24))(g_pVPhysics2, hHullShape);
  }
  transforms.m_Size = 0;
  v67 = pResults->m_flHitTime < 1.0;
  if ( transforms.m_Memory.m_nAllocationCount < 0 )
  {
    v69 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = transforms.m_Memory.m_nGrowSize;
    v69 = transforms.m_Memory.m_nGrowSize & 0xC0000000;
    if ( transforms.m_Memory.m_pMemory != &transforms.m_Memory.m_FixedMemory )
    {
      if ( transforms.m_Memory.m_pMemory != 0 && v69 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = transforms.m_Memory.m_nGrowSize;
      }
      transforms.m_Memory.m_nAllocationCount = 32;
      transforms.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      transforms.m_Memory.m_pMemory = &transforms.m_Memory.m_FixedMemory;
      goto LABEL_41;
    }
  }
  if ( v69 == 0 )
    CUtlMemory<matrix3x4a_t,int>::Purge(&transforms.m_Memory);
LABEL_41:
  CUtlVectorBase<HitBoxAndMesh_t,CUtlMemoryFixedGrowable<HitBoxAndMesh_t,32ul,int>>::~CUtlVectorBase(p_list);
  return v67;
}


// CSkeletonInstance::GetHitboxByIndex  (line 5447, @0x00000000020bbbd0, libserver.so)  // inlines: Element, GetModelData, operator const RuntimeClass_t*, operator[]
// calls: CModel::GetMeshData
const CHitBox *__fastcall CSkeletonInstance::GetHitboxByIndex(CSkeletonInstance *const this, int nIndex)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  const CRenderMesh *MeshData; // rax
  int m_NumElements; // edx
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v8; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v9; // rdx
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v10; // rcx

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  MeshData = CModel::GetMeshData(m_pData, 0);
  if ( MeshData == 0 )
    return 0;
  m_NumElements = MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements <= 0 )
    return 0;
  m_pMemory = MeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory;
  if ( nIndex > m_pMemory->m_Data.elem.m_HitBoxes.m_Size )
  {
    v8 = m_pMemory + 1;
    v9 = &v8[m_NumElements - 1];
    while ( v8 != v9 )
    {
      v10 = v8++;
      if ( v8[-1].m_Data.elem.m_HitBoxes.m_Size >= nIndex )
        return &v10->m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[nIndex];
    }
    return 0;
  }
  v10 = m_pMemory;
  return &v10->m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[nIndex];
}


// CSkeletonInstance::SetHitboxSet  (line 5471, @0x00000000020bbc70, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CBaseAnimating::SetHitboxSet, CSkeletonInstance::SetHitboxSetByName
void __fastcall CSkeletonInstance::SetHitboxSet(CSkeletonInstance *const this, int nSetNum)
{
  unsigned __int8 v2; // r12

  v2 = nSetNum;
  if ( nSetNum != this->m_nHitboxSet.m_Value )
  {
    (*(this->_vptr_CGameSceneNode + 24))(this, 728, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nHitboxSet.m_Value = v2;
  }
}


// CSkeletonInstance::SetHitboxSetByName  (line 5494, @0x00000000020bbcb0, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: FindHitboxSetByName, CSkeletonInstance::SetHitboxSet
void __fastcall CSkeletonInstance::SetHitboxSetByName(CSkeletonInstance *const this, const char *pSetName)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  int HitboxSetByName; // eax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  HitboxSetByName = FindHitboxSetByName(m_pData, pSetName);
  CSkeletonInstance::SetHitboxSet(this, HitboxSetByName);
}


// CSkeletonInstance::GetHitboxSet  (line 5500, @0x00000000020bbcf0, libserver.so)
// callers: CBaseAnimating::GetHitboxSet, IDebugOverlay::EntityHitboxes
int __fastcall CSkeletonInstance::GetHitboxSet(const CSkeletonInstance *const this)
{
  return this->m_nHitboxSet.m_Value;
}


// CSkeletonInstance::GetHitboxSetName  (line 5505, @0x00000000020bbd00, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: GetHitboxSetName
// callers: CHitboxSystem::TestHitboxes, CBaseAnimating::GetHitboxSetName
const char *__fastcall CSkeletonInstance::GetHitboxSetName(const CSkeletonInstance *const this)
{
  const CModel **m_pBinding; // rax
  int m_Value; // esi

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  m_Value = this->m_nHitboxSet.m_Value;
  if ( m_pBinding != 0 )
    return GetHitboxSetName(*m_pBinding, m_Value);
  else
    return GetHitboxSetName(0, m_Value);
}


// CSkeletonInstance::GetHitboxSetCount  (line 5511, @0x00000000020bbd30, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: GetHitboxSetCount
int __fastcall CSkeletonInstance::GetHitboxSetCount(const CSkeletonInstance *const this)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return GetHitboxSetCount(*m_pBinding);
  else
    return GetHitboxSetCount(0);
}


// CSkeletonInstance::IsRigidSkeleton  (line 5517, @0x00000000020bbd60, libserver.so)  // inlines: operator const RuntimeClass_t*, operator->, operator==
// calls: CModel::HasSkinnedMeshes, CModel::NumFlexControllers, CModel::FirstSequence, CModel::NumBones
bool __fastcall CSkeletonInstance::IsRigidSkeleton(const CSkeletonInstance *const this)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v3; // r12
  const ResourceBindingBase_t *v5; // rax
  const CModel *m_pData; // rdi

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 1;
  v3 = *m_pBinding;
  if ( !CModel::HasSkinnedMeshes(*m_pBinding) )
    return 1;
  if ( CModel::NumFlexControllers(v3) != 0
    || this->m_bIsAnimationEnabled.m_Value
    && this->m_pController != 0
    && CModel::FirstSequence(v3).m_Data != -1
    && this->m_modelState.m_animationState.m_pData != 0 )
  {
    return 0;
  }
  v5 = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v5 != 0 )
    m_pData = v5->m_pData;
  else
    m_pData = 0;
  return CModel::NumBones(m_pData) == 0;
}


// CSkeletonInstance::GetNumFlexControllers  (line 5553, @0x00000000020bbe00, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::GetAnimationStateCount
// callers: CBaseAnimating::GetNumFlexControllers, CSkeletonInstance::GetFlexControllerWeights, CSkeletonInstance::SetBoneTransformsInSceneObject
int __fastcall CSkeletonInstance::GetNumFlexControllers(const CSkeletonInstance *const this)
{
  const CModel *const *m_pBinding; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && *m_pBinding != 0 )
    return CModel::GetAnimationStateCount(*m_pBinding, AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS);
  else
    return 0;
}


// CSkeletonInstance::GetFlexControllerName  (line 5562, @0x00000000020bbe30, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*, pszName
// calls: CModel::GetFlexController, CUtlString::Get
// callers: CBaseAnimating::GetFlexControllerName
const char *__fastcall CSkeletonInstance::GetFlexControllerName(
        const CSkeletonInstance *const this,
        LocalFlexController_t iFlexController)
{
  const CModel *const *m_pBinding; // rax
  const CFlexController *FlexController; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || *m_pBinding == 0 )
    return 0;
  FlexController = CModel::GetFlexController(*m_pBinding, iFlexController);
  return CUtlString::Get(&FlexController->m_szName);
}


// CSkeletonInstance::GetFlexControllerType  (line 5572, @0x00000000020bbe70, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*, pszType
// calls: CModel::GetFlexController, CUtlString::Get
// callers: CBaseAnimating::GetFlexControllerType
const char *__fastcall CSkeletonInstance::GetFlexControllerType(
        const CSkeletonInstance *const this,
        LocalFlexController_t iFlexController)
{
  const CModel *const *m_pBinding; // rax
  const CFlexController *FlexController; // rax

  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 || *m_pBinding == 0 )
    return 0;
  FlexController = CModel::GetFlexController(*m_pBinding, iFlexController);
  return CUtlString::Get(&FlexController->m_szType);
}


// CSkeletonInstance::GetFlexControllerWeights  (line 5638, @0x00000000020bbeb0, libserver.so)  // inlines: CUtlString, GetAnimationData<(AnimationStateType_t)1>, GetAnimationDataCount<(AnimationStateType_t)1>, GetAnimationStateData<(AnimationStateType_t)1>, GetModelData, curtime, operator const RuntimeClass_t*, operator++, operator==, ~CUtlString
// calls: CSkeletonInstance::GetNumFlexControllers, CModel::GetAnimationStateCount, CModel::GetFlexController, CUtlString::FreeMemoryBlock, CModel::GetAnimationStateOffset, _Unwind_Resume
// callers: CSkeletonInstance::SetBoneTransformsInSceneObject
int __fastcall CSkeletonInstance::GetFlexControllerWeights(
        const CSkeletonInstance *const this,
        int nCount,
        float *pFlexWeights)
{
  int v6; // r14d
  int NumFlexControllers; // eax
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *const *v9; // rax
  char *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 v12; // rbx
  LocalFlexController_t v13; // esi
  signed int i; // r12d
  float v15; // xmm0_4
  bool v16; // zf
  int result; // eax
  const CModel *const *v18; // rax
  char *m_pData; // rbx
  signed int AnimationStateCount; // [rsp+14h] [rbp-4Ch]
  const CModel *pModel; // [rsp+18h] [rbp-48h]
  CUtlString s; // [rsp+20h] [rbp-40h] BYREF

  v6 = nCount;
  NumFlexControllers = CSkeletonInstance::GetNumFlexControllers(this);
  if ( NumFlexControllers <= nCount )
    v6 = NumFlexControllers;
  if ( v6 == 0 )
    return 0;
  m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
    return 0;
  pModel = m_pBinding->m_pData;
  if ( m_pBinding->m_pData == 0 )
    return 0;
  v9 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
  if ( v9 != 0 )
  {
    v10 = 0;
    AnimationStateCount = CModel::GetAnimationStateCount(
                            *v9,
                            AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS);
    if ( AnimationStateCount != 0 )
    {
      v18 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
      if ( v18 != 0 )
      {
        m_pData = this->m_modelState.m_animationState.m_pData;
        v10 = &m_pData[CModel::GetAnimationStateOffset(
                         *v18,
                         AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS)];
      }
    }
  }
  else
  {
    AnimationStateCount = 0;
    v10 = 0;
  }
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  if ( v6 <= 0 )
    return v6;
  v12 = 0;
  v13 = 0;
  for ( i = 0; ; ++i )
  {
    s.m_pString = 0;
    CModel::GetFlexController(pModel, v13);
    v15 = 0.0;
    if ( v10 != 0 && AnimationStateCount > i )
      v15 = *&v10[v12 * 4];
    v16 = s.m_pString == 0;
    pFlexWeights[v12] = v15;
    if ( !v16 )
      CUtlString::FreeMemoryBlock(&s);
    result = i + 1;
    ++v12;
    v13 = i + 1;
    if ( i + 1 == v6 )
      break;
  }
  return result;
}


// CSkeletonInstance::RecomputePhysicsBoneMap  (line 5718, @0x00000000020d1140, libserver.so)
// calls: CModelState::ConstructPhysicsBoneMap
// callers: CPhysicsGameSystem::SetPhysGroupMask
void __fastcall CSkeletonInstance::RecomputePhysicsBoneMap(CSkeletonInstance *const this)
{
  CModelState::ConstructPhysicsBoneMap(&this->m_modelState);
}


// CSkeletonInstance::GetPhysicsBoneCount  (line 5723, @0x00000000020bc060, libserver.so)
int __fastcall CSkeletonInstance::GetPhysicsBoneCount(const CSkeletonInstance *const this)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  int result; // eax

  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  result = 0;
  if ( m_pVPhysicsAggregate != 0 )
    return *((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate) + 32);
  return result;
}


// CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex  (line 5729, @0x00000000020bc090, libserver.so)
// calls: CSkeletonInstance::GetNumBones
// callers: EntityBodyTransform, CPhysicsGameSystem::TeleportToAnimationState, CPhysicsGameSystem::PushDynamicTransformsWorker
int16 __fastcall CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex(
        const CSkeletonInstance *const this,
        int nPhysicsBoneIndex)
{
  int NumBones; // r8d
  int16 result; // ax
  __int16 *m_pMemory; // rcx
  int v7; // edx
  int v8; // eax
  __int16 *v9; // rcx
  int v10; // edi

  NumBones = CSkeletonInstance::GetNumBones(this);
  result = -1;
  if ( NumBones > 0 )
  {
    m_pMemory = this->m_modelState.m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory;
    v7 = 0;
    v8 = *m_pMemory;
    v9 = m_pMemory + 1;
    if ( v8 == nPhysicsBoneIndex )
    {
      return 0;
    }
    else
    {
      do
      {
        if ( ++v7 == NumBones )
          return -1;
        v10 = *v9++;
      }
      while ( v10 != nPhysicsBoneIndex );
      return v7;
    }
  }
  return result;
}


// CSkeletonInstance::EnableJiggleBones  (line 5744, @0x00000000020dd170, libserver.so)  // inlines: curtime, ~CJiggleBones, ~CUtlLinkedList, ~CUtlMemory
// calls: CUtlLinkedList<JiggleData, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<JiggleData, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<JiggleData, short unsigned int>, short unsigned int>::Purge, operator delete, CBaseEntity::SetSimulationTime
void __fastcall CSkeletonInstance::EnableJiggleBones(CSkeletonInstance *const this, bool bEnable)
{
  double v2; // xmm1_8
  CJiggleBones *m_pJiggleBones; // r12
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_modelState.m_bIsJiggleBonesEnabled != bEnable )
  {
    this->m_modelState.m_bIsJiggleBonesEnabled = bEnable;
    if ( !bEnable )
    {
      m_pJiggleBones = this->m_modelState.m_pJiggleBones;
      if ( m_pJiggleBones != 0 )
      {
        CUtlLinkedList<JiggleData,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>>::RemoveAll(&this->m_modelState.m_pJiggleBones->m_jiggleBoneState);
        CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>::Purge(&m_pJiggleBones->m_jiggleBoneState.m_Memory);
        operator delete(m_pJiggleBones);
        this->m_modelState.m_pJiggleBones = 0;
      }
    }
    v5 = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v5 = LODWORD(v6->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(this->m_pOwner, v5, v2);
    (*(this->_vptr_CGameSceneNode + 11))(this, 128);
  }
}


// CSkeletonInstance::SetBoneTransformOverride  (line 5765, @0x00000000020bc100, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetSimulationTime
// callers: CGenericFlexCycler::TickProceduralBoneTransform, CGenericFlexCycler::UseProceduralBonesThink
void __fastcall CSkeletonInstance::SetBoneTransformOverride(
        CSkeletonInstance *const this,
        IBoneTransformOverride *pBoneTransformOverride)
{
  double v2; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_pBoneTransformOverride != pBoneTransformOverride )
  {
    this->m_pBoneTransformOverride = pBoneTransformOverride;
    v4 = 0.0;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v4 = LODWORD(v5->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(this->m_pOwner, v4, v2);
    (*(this->_vptr_CGameSceneNode + 11))(this, 128);
  }
}


// CSkeletonInstance::HasNonAnimationDrivenBones  (line 5779, @0x00000000020bc190, libserver.so)  // inlines: GetBoneMergeInfo
// callers: CSkeletonInstance::BuildTransformations, CSkeletonInstance::CalcParentSpaceState, CSkeletonInstance::ReadParentSpaceState, CSkeletonInstance::PerformInvalidatePhysicsRecursive
bool __fastcall CSkeletonInstance::HasNonAnimationDrivenBones(const CSkeletonInstance *const this)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rdi
  __int64 v3; // rax
  bool result; // al

  if ( this->m_modelState.m_hModel.m_Value.m_pBinding == 0 )
    return 0;
  if ( this->m_pBoneMergeList != 0 && this->m_nHierarchyType == 1 )
    return 1;
  m_pVPhysicsAggregate = this->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    v3 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
    if ( v3 != 0 && *(v3 + 32) > 1 )
      return 1;
  }
  result = 1;
  if ( this->m_modelState.m_pJiggleBones == 0 )
    return this->m_pBoneTransformOverride != 0;
  return result;
}


// CSkeletonInstance::BuildInterpolatedTransformations  (line 5825, @0x00000000020c6ae0, libserver.so)  // inlines: Alloc, CBoneAccessor, CTransform, CWritableBoneAccessor, CalcNumIntsForBits, Cleanup, GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationParentSpaceBones, GetAnimationState, GetAnimationStateData<(AnimationStateType_t)0>, GetModelData, GetTransformType, Init, IsAnyBoneFlagsIncludingChildrenSet, VectorAligned, operator const RuntimeClass_t*, operator=, operator==, operator[], ~CBoneAccessor, ~CWritableBoneAccessor
// calls: CCompositeParentSpaceState::GetBonesForModify, CSkeletonInstance::CalcAnimationState, CModel::GetAnimationStateOffset, CAnimationState::GetReadableBones, CModel::GetAnimationStateCount, ComputeModelSpaceBonesFromParentSpaceBones, operator delete [], CAnimationState::CopyTransformAnimationData, CAnimationState::MarkBoneReadable, CAnimationState::IsBoneReadable, TransformLerp, operator new [] (14 total)
void __fastcall CSkeletonInstance::BuildInterpolatedTransformations(
        CSkeletonInstance *const this,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  const CModel *const *m_pBinding; // rax
  char *m_pData; // r14
  const CTransform *v5; // r13
  const uint32 *ReadableBones; // rax
  const CModel *const *v7; // rdx
  const uint32 *v8; // r12
  uint16 AnimationStateCount; // ax
  const ResourceBindingBase_t *v10; // rax
  const CModel *v11; // rdi
  const CModel *const *v12; // rax
  const CModel *const *v13; // rax
  char *v14; // rbx
  char *v15; // r14
  __int64 v16; // rdx
  _DWORD *v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  _DWORD *p_x; // rdi
  int v23; // xmm2_4
  int v24; // xmm1_4
  int v25; // xmm1_4
  int v26; // xmm2_4
  int v27; // xmm3_4
  int v28; // xmm0_4
  float v29; // xmm0_4
  const CTransform *m_pBones; // rdi
  int v31; // xmm2_4
  int v32; // xmm1_4
  const CModel *const *v33; // rax
  const CModel *const *v34; // rax
  uint16 v35; // ax
  const CTransform *v36; // rax
  __int64 v37; // rcx
  const CTransform *v38; // rdx
  const CModel *const *v39; // rax
  const CModel *const *v40; // rax
  uint16 v41; // ax
  const ResourceBindingBase_t *v42; // rax
  const CModel *v43; // rdi
  const uint32 *m_pReadableBones; // rcx
  const CTransform *v45; // rax
  uint16 m_nBones; // dx
  uint16 v47; // [rsp+Ch] [rbp-E4h]
  uint16 v48; // [rsp+Ch] [rbp-E4h]
  uint16 v49; // [rsp+Ch] [rbp-E4h]
  uint16 v50; // [rsp+Ch] [rbp-E4h]
  char *v51; // [rsp+10h] [rbp-E0h]
  const CTransform *v52; // [rsp+10h] [rbp-E0h]
  char *v53; // [rsp+10h] [rbp-E0h]
  const CTransform *v54; // [rsp+10h] [rbp-E0h]
  const CTransform *v55; // [rsp+10h] [rbp-E0h]
  const CTransform *v56; // [rsp+10h] [rbp-E0h]
  const uint32 *v57; // [rsp+18h] [rbp-D8h]
  const uint32 *v58; // [rsp+18h] [rbp-D8h]
  CAnimationState *v59; // [rsp+18h] [rbp-D8h]
  CAnimationState *v60; // [rsp+18h] [rbp-D8h]
  size_t v61; // [rsp+20h] [rbp-D0h]
  size_t nSize; // [rsp+30h] [rbp-C0h]
  int v63; // [rsp+48h] [rbp-A8h]
  signed int v65; // [rsp+50h] [rbp-A0h]
  CCompositeParentSpaceState *p_m_compositeParentSpaceState; // [rsp+58h] [rbp-98h]
  CWritableBoneAccessor<CTransform> animationModelSpaceTransforms; // [rsp+60h] [rbp-90h] BYREF
  CWritableBoneAccessor<CTransform> modelSpaceTransforms; // [rsp+80h] [rbp-70h] BYREF
  CBoneAccessor<CTransform> parentSpaceTransforms; // [rsp+A0h] [rbp-50h] BYREF

  v63 = *(&this->m_modelState.m_compositeParentSpaceState + 59);
  if ( !this->m_modelState.m_compositeParentSpaceState.m_bHasValidBoneTransformData )
  {
    if ( *(&this->m_modelState.m_compositeParentSpaceState + 59) != 0 )
    {
      CCompositeParentSpaceState::GetBonesForModify(
        &modelSpaceTransforms,
        &this->m_modelState.m_compositeParentSpaceState);
      CSkeletonInstance::CalcAnimationState(this, boneFlags);
      m_pBinding = this->m_modelState.m_animationState.m_hModel.m_pBinding;
      if ( m_pBinding != 0 )
      {
        m_pData = this->m_modelState.m_animationState.m_pData;
        v5 = &m_pData[CModel::GetAnimationStateOffset(
                        *m_pBinding,
                        AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
      }
      else
      {
        v5 = 0;
      }
      ReadableBones = CAnimationState::GetReadableBones(&this->m_modelState.m_animationState);
      v7 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
      v8 = ReadableBones;
      if ( v7 != 0 )
        AnimationStateCount = CModel::GetAnimationStateCount(
                                *v7,
                                AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
      else
        AnimationStateCount = 0;
      parentSpaceTransforms.m_nBones = AnimationStateCount;
      v10 = this->m_modelState.m_hModel.m_Value.m_pBinding;
      parentSpaceTransforms.m_pBones = v5;
      parentSpaceTransforms.m_pReadableBones = v8;
      parentSpaceTransforms.m_bOwnsMemory = 0;
      if ( v10 != 0 )
        v11 = v10->m_pData;
      else
        v11 = 0;
      ComputeModelSpaceBonesFromParentSpaceBones(v11, &parentSpaceTransforms, &modelSpaceTransforms);
      if ( parentSpaceTransforms.m_bOwnsMemory )
      {
        if ( parentSpaceTransforms.m_pBones != 0 )
          operator delete[](parentSpaceTransforms.m_pBones);
        if ( parentSpaceTransforms.m_pReadableBones != 0 )
          operator delete[](parentSpaceTransforms.m_pReadableBones);
      }
      if ( modelSpaceTransforms.m_bOwnsMemory )
      {
        if ( modelSpaceTransforms.m_pBones != 0 )
          operator delete[](modelSpaceTransforms.m_pBones);
        if ( modelSpaceTransforms.m_pReadableBones != 0 )
          operator delete[](modelSpaceTransforms.m_pReadableBones);
      }
    }
    else
    {
      CSkeletonInstance::CalcAnimationState(this, boneFlags);
      CAnimationState::CopyTransformAnimationData(
        &this->m_modelState.m_compositeParentSpaceState,
        &this->m_modelState.m_animationState);
    }
    this->m_compositeParentSpaceValidBoneFlags.m_value = this->m_animationParentSpaceValidBoneFlags.m_value;
    return;
  }
  p_m_compositeParentSpaceState = &this->m_modelState.m_compositeParentSpaceState;
  v12 = this->m_modelState.m_compositeParentSpaceState.m_hModel.m_pBinding;
  memset(&animationModelSpaceTransforms, 0, 19);
  memset(&modelSpaceTransforms, 0, 19);
  if ( v12 != 0 )
  {
    v65 = CModel::GetAnimationStateCount(*v12, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
    v13 = this->m_modelState.m_compositeParentSpaceState.m_hModel.m_pBinding;
    if ( v13 != 0 )
    {
      v14 = this->m_modelState.m_compositeParentSpaceState.m_pData;
      v15 = &v14[CModel::GetAnimationStateOffset(*v13, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      v15 = 0;
    }
    if ( v65 > 0 )
    {
      v16 = -1;
      v17 = v15 + 16;
      v18 = 32LL * v65;
      if ( v65 > 0x3F8000000000000LL )
        v18 = -1;
      nSize = v18;
      v19 = (v65 + 31) >> 5;
      if ( v19 <= 0x1FC0000000000000LL )
        v16 = 4 * v19;
      v20 = 0;
      v21 = 0;
      v61 = v16;
      do
      {
        if ( CAnimationState::IsBoneReadable(p_m_compositeParentSpaceState, v21)
          || (boneFlags & this->m_modelState.m_pBoneFlagsIncludingChildren[v21]) == 0 )
        {
          goto LABEL_34;
        }
        v29 = *(v20 + 32);
        if ( v29 == 1.0 )
        {
          v31 = *(v20 + 4);
          v32 = *(v20 + 8);
          *v15 = *v20;
          *(v15 + 1) = v31;
          *(v15 + 2) = v32;
          v25 = *(v20 + 28);
          v26 = *(v20 + 24);
          v27 = *(v20 + 20);
          v28 = *(v20 + 16);
        }
        else
        {
          m_pBones = modelSpaceTransforms.m_pBones;
          if ( modelSpaceTransforms.m_pBones == 0 )
          {
            if ( v63 != 0 )
            {
              if ( animationModelSpaceTransforms.m_bOwnsMemory )
              {
                if ( animationModelSpaceTransforms.m_pBones != 0 )
                  operator delete[](animationModelSpaceTransforms.m_pBones);
                if ( animationModelSpaceTransforms.m_pReadableBones != 0 )
                  operator delete[](animationModelSpaceTransforms.m_pReadableBones);
              }
              memset(&animationModelSpaceTransforms, 0, 19);
              v36 = operator new[](nSize);
              v37 = v65 - 2LL;
              v38 = v36;
              do
              {
                --v37;
                v38->m_vPosition.w = 0.0;
                ++v38;
              }
              while ( v37 != -2 );
              animationModelSpaceTransforms.m_pBones = v36;
              animationModelSpaceTransforms.m_pReadableBones = operator new[](v61);
              animationModelSpaceTransforms.m_bOwnsMemory = 1;
              animationModelSpaceTransforms.m_nBones = v65;
              CSkeletonInstance::CalcAnimationState(this, boneFlags);
              v39 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
              if ( v39 != 0 )
              {
                v53 = this->m_modelState.m_animationState.m_pData;
                v54 = &v53[CModel::GetAnimationStateOffset(
                             *v39,
                             AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
              }
              else
              {
                v54 = 0;
              }
              v58 = CAnimationState::GetReadableBones(&this->m_modelState.m_animationState);
              v40 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
              if ( v40 != 0 )
                v41 = CModel::GetAnimationStateCount(*v40, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
              else
                v41 = 0;
              parentSpaceTransforms.m_nBones = v41;
              v42 = this->m_modelState.m_hModel.m_Value.m_pBinding;
              parentSpaceTransforms.m_bOwnsMemory = 0;
              parentSpaceTransforms.m_pBones = v54;
              parentSpaceTransforms.m_pReadableBones = v58;
              if ( v42 != 0 )
                v43 = v42->m_pData;
              else
                v43 = 0;
              ComputeModelSpaceBonesFromParentSpaceBones(v43, &parentSpaceTransforms, &animationModelSpaceTransforms);
              if ( parentSpaceTransforms.m_bOwnsMemory )
              {
                if ( parentSpaceTransforms.m_pBones != 0 )
                  operator delete[](parentSpaceTransforms.m_pBones);
                if ( parentSpaceTransforms.m_pReadableBones != 0 )
                  operator delete[](parentSpaceTransforms.m_pReadableBones);
              }
              m_pReadableBones = animationModelSpaceTransforms.m_pReadableBones;
              v45 = animationModelSpaceTransforms.m_pBones;
              m_nBones = animationModelSpaceTransforms.m_nBones;
              if ( modelSpaceTransforms.m_bOwnsMemory )
              {
                if ( modelSpaceTransforms.m_pBones != 0 )
                {
                  v49 = animationModelSpaceTransforms.m_nBones;
                  v55 = animationModelSpaceTransforms.m_pBones;
                  v59 = animationModelSpaceTransforms.m_pReadableBones;
                  operator delete[](modelSpaceTransforms.m_pBones);
                  m_nBones = v49;
                  v45 = v55;
                  m_pReadableBones = v59;
                }
                if ( modelSpaceTransforms.m_pReadableBones != 0 )
                {
                  v50 = m_nBones;
                  v56 = v45;
                  v60 = m_pReadableBones;
                  operator delete[](modelSpaceTransforms.m_pReadableBones);
                  m_nBones = v50;
                  v45 = v56;
                  m_pReadableBones = v60;
                }
              }
              modelSpaceTransforms.m_bOwnsMemory = 0;
              m_pBones = v45;
              modelSpaceTransforms.m_pBones = v45;
              modelSpaceTransforms.m_pReadableBones = m_pReadableBones;
              modelSpaceTransforms.m_nBones = m_nBones;
              v29 = *(v20 + 32);
            }
            else
            {
              CSkeletonInstance::CalcAnimationState(this, boneFlags);
              v33 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
              if ( v33 != 0 )
              {
                v51 = this->m_modelState.m_animationState.m_pData;
                v52 = &v51[CModel::GetAnimationStateOffset(
                             *v33,
                             AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
              }
              else
              {
                v52 = 0;
              }
              v57 = CAnimationState::GetReadableBones(&this->m_modelState.m_animationState);
              v34 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
              if ( v34 != 0 )
                v35 = CModel::GetAnimationStateCount(*v34, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
              else
                v35 = 0;
              if ( modelSpaceTransforms.m_bOwnsMemory )
              {
                if ( modelSpaceTransforms.m_pBones != 0 )
                {
                  v47 = v35;
                  operator delete[](modelSpaceTransforms.m_pBones);
                  v35 = v47;
                }
                if ( modelSpaceTransforms.m_pReadableBones != 0 )
                {
                  v48 = v35;
                  operator delete[](modelSpaceTransforms.m_pReadableBones);
                  v35 = v48;
                }
              }
              modelSpaceTransforms.m_bOwnsMemory = 0;
              modelSpaceTransforms.m_nBones = v35;
              modelSpaceTransforms.m_pBones = v52;
              m_pBones = v52;
              modelSpaceTransforms.m_pReadableBones = v57;
              v29 = *(v20 + 32);
            }
          }
          if ( v29 != 0.0 )
          {
            TransformLerp(&m_pBones[v21], v20, v29, v15);
            CAnimationState::MarkBoneReadable(p_m_compositeParentSpaceState, v21);
            goto LABEL_34;
          }
          p_x = &m_pBones[v21].m_vPosition.x;
          v23 = p_x[1];
          v24 = p_x[2];
          *v15 = *p_x;
          *(v15 + 1) = v23;
          *(v15 + 2) = v24;
          v25 = p_x[7];
          v26 = p_x[6];
          v27 = p_x[5];
          v28 = p_x[4];
        }
        *v17 = v28;
        v17[1] = v27;
        v17[2] = v26;
        v17[3] = v25;
        CAnimationState::MarkBoneReadable(p_m_compositeParentSpaceState, v21);
LABEL_34:
        ++v21;
        v20 += 48;
        v15 += 32;
        v17 += 8;
      }
      while ( v65 > v21 );
    }
    if ( modelSpaceTransforms.m_bOwnsMemory )
    {
      if ( modelSpaceTransforms.m_pBones != 0 )
        operator delete[](modelSpaceTransforms.m_pBones);
      if ( modelSpaceTransforms.m_pReadableBones != 0 )
        operator delete[](modelSpaceTransforms.m_pReadableBones);
    }
  }
  memset(&modelSpaceTransforms, 0, 19);
  if ( animationModelSpaceTransforms.m_bOwnsMemory )
  {
    if ( animationModelSpaceTransforms.m_pBones != 0 )
      operator delete[](animationModelSpaceTransforms.m_pBones);
    if ( animationModelSpaceTransforms.m_pReadableBones != 0 )
      operator delete[](animationModelSpaceTransforms.m_pReadableBones);
  }
}


// CSkeletonInstance::BuildTransformations  (line 5933, @0x00000000020c81f0, libserver.so)  // inlines: Add, BitVec_IsBitSet, Bitvec_Set, CBoneAccessor, CMicroProfilerGuard, CMicroProfilerSample, CWritableBoneAccessor, CalcAbsolutePosition, Cleanup, FindBoneMerge, GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationParentSpaceBones, GetAnimationState, GetAnimationStateData<(AnimationStateType_t)0>, GetBoneForWrite, GetBoneForWriteAndMarkReadable, GetBoneMergeInfo, GetElapsed, GetModelData, GetTimebaseRegister, GetTransformType, GetWorldSpaceBones, GetWorldSpaceBonesForModify, GetWorldSpaceState, Init, IsAnyBoneFlagsIncludingChildrenSet, IsBoneReadable, Load, MarkBoneReadable, NodeToWorldTransform, PLAT_CPU_TIME, ScaleMatrix3x3, SetBoneAndMarkReadable, memcpy, operator const RuntimeClass_t*, operator=, operator==, operator[], ~CBoneAccessor, ~CMicroProfilerGuard, ~CWritableBoneAccessor
// calls: CSkeletonInstance::HasNonAnimationDrivenBones, CCompositeParentSpaceState::GetBonesForModify, CSkeletonInstance::CalcAnimationState, CModel::GetAnimationStateOffset, CAnimationState::GetReadableBones, CModel::GetAnimationStateCount, ComputeModelSpaceBonesFromParentSpaceBones, operator delete [], CAnimationState::CopyTransformAnimationData, CSkeletonInstance::GetNumBones, CModel::boneParent, TransformMatrix (22 total)
// callers: CSkeletonInstance::CalcParentSpaceState
// globals: miniprofiler_BuildTransformations, miniprofiler_BuildTransformationMatrix
// local variable allocation has failed, the output may be wrong!
bool __fastcall CSkeletonInstance::BuildTransformations(
        CSkeletonInstance *const this,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  const CModel *const *m_pBinding; // rax
  char *m_pData; // r13
  char *v5; // r13
  const uint32 *ReadableBones; // r12
  const CModel *const *v7; // rax
  __int16 AnimationStateCount; // ax
  const ResourceBindingBase_t *v9; // rax
  const CModel *v10; // rdi
  bool v11; // di
  __int64 v13; // rdx
  int NumBones; // r13d
  const CModel **v15; // rax
  CSkeletonInstance *v16; // rcx
  BoneMergeInfo_t *m_pBoneMergeList; // rax
  const bone_merge_list_t *m_pList; // rbx
  IBoneTransformOverride *m_pBoneTransformOverride; // rdi
  int v20; // eax
  void *v21; // rsp
  const uint32 *v22; // r14
  const CTransform *v23; // r15
  uint16 v24; // r12
  uint32 *v25; // r14
  matrix3x4a_t *v26; // r15
  int m_nBoneCount; // r12d
  __int64 v28; // r15
  int v29; // r12d
  __int64 v30; // r14
  const CTransform *v31; // r13
  const uint32 *v32; // r14
  int v33; // r14d
  unsigned __int64 v34; // rdx
  int v35; // r12d
  __int64 m_nCount; // rax
  CGameSceneNode *m_pParent; // rdi
  CSkeletonInstance *v38; // r12
  const uint32 *m_pReadableBones; // r14
  const matrix3x4a_t *m_pTransforms; // r15
  IBoneTransformOverride *v41; // rdi
  int v42; // eax
  int16 v43; // ax
  __int64 v44; // rax
  __int64 v45; // r12
  const CTransform *m_pBones; // r12
  CTransform *v47; // rax
  const CTransform *v48; // r14
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  vec_t w; // xmm1_4
  vec_t v52; // xmm3_4
  vec_t x; // xmm0_4
  int v54; // ecx
  int v55; // eax
  __int64 v56; // r13
  matrix3x4_t *v57; // r14
  unsigned __int64 v58; // rcx
  CSkeletonInstance *v59; // r12
  const CModel *const *v60; // rax
  char *v61; // r12
  const CModel *const *v62; // rax
  uint16 v63; // ax
  matrix3x4_t *v64; // rdi
  unsigned __int64 v65; // rcx
  float m_flAbsScale; // xmm1_4
  char *v67; // rcx
  matrix3x4_t *v68; // rsi
  matrix3x4_t *v69; // rdx
  __int64 i; // rax
  float v71; // xmm0_4
  matrix3x4a_t *v72; // rax
  uint16 v73; // [rsp+10h] [rbp-260h]
  uint16 v74; // [rsp+10h] [rbp-260h]
  matrix3x4a_t *v75; // [rsp+10h] [rbp-260h]
  IPhysAggregateInstance *m_pVPhysicsAggregate; // [rsp+20h] [rbp-250h] BYREF
  CBoneAccessor<CTransform> *p_animationParentTransforms; // [rsp+28h] [rbp-248h]
  void *pScratchData; // [rsp+30h] [rbp-240h]
  matrix3x4_t *p_transform; // [rsp+38h] [rbp-238h]
  const int16 *pBoneToPhysicsBone; // [rsp+40h] [rbp-230h]
  unsigned __int64 v81; // [rsp+48h] [rbp-228h]
  matrix3x4_t *in; // [rsp+50h] [rbp-220h]
  const CModel *pModel; // [rsp+58h] [rbp-218h]
  bool bComputedWorldToSkeletonInstance; // [rsp+66h] [rbp-20Ah]
  bool bComputeWorldSpaceBones; // [rsp+67h] [rbp-209h]
  CAnimationState *p_m_animationState; // [rsp+68h] [rbp-208h]
  const bone_merge_list_t *pEndBoneMerge; // [rsp+70h] [rbp-200h]
  CTransform *currentParentTransform; // [rsp+78h] [rbp-1F8h]
  unsigned __int64 v89; // [rsp+80h] [rbp-1F0h]
  matrix3x4_t *out; // [rsp+88h] [rbp-1E8h]
  int v91; // [rsp+90h] [rbp-1E0h]
  CModelSkeleton::BoneFlags_t boneFlagsa; // [rsp+94h] [rbp-1DCh]
  __int64 v93; // [rsp+98h] [rbp-1D8h]
  CSkeletonInstance *thisa; // [rsp+A0h] [rbp-1D0h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-1C8h]
  bool bScratchMemoryValid; // [rsp+BFh] [rbp-1B1h] BYREF
  CBoneAccessor<matrix3x4a_t> boneMergeWorldSpaceBones; // [rsp+C0h] [rbp-1B0h] BYREF
  CBoneAccessor<CTransform> animationParentTransforms; // [rsp+E0h] [rbp-190h] BYREF
  CWritableBoneAccessor<CTransform> outputParentTransforms; // [rsp+100h] [rbp-170h] BYREF
  CWritableBoneAccessor<matrix3x4a_t> outputWorldTransforms; // [rsp+120h] [rbp-150h] BYREF
  matrix3x4a_t worldToSkeletonInstance; // [rsp+140h] [rbp-130h] BYREF
  matrix3x4a_t worldToParent; // [rsp+170h] [rbp-100h] BYREF
  matrix3x4a_t mParentTransform; // [rsp+1A0h] [rbp-D0h] BYREF
  __m256i modelSpaceTransforms; // [rsp+1D0h] [rbp-A0h] OVERLAPPED BYREF
  __int128 v105; // [rsp+1F0h] [rbp-80h]
  matrix3x4a_t transform; // [rsp+200h] [rbp-70h] BYREF
  unsigned __int64 v107; // [rsp+238h] [rbp-38h]

  thisa = this;
  v107 = __readfsqword(0x28u);
  boneFlagsa = boneFlags;
  v81 = __rdtsc();
  if ( !CSkeletonInstance::HasNonAnimationDrivenBones(this) )
  {
    if ( *(&this->m_modelState.m_compositeParentSpaceState + 59) != 0 )
    {
      CCompositeParentSpaceState::GetBonesForModify(
        &modelSpaceTransforms,
        &thisa->m_modelState.m_compositeParentSpaceState);
      CSkeletonInstance::CalcAnimationState(thisa, boneFlagsa);
      m_pBinding = thisa->m_modelState.m_animationState.m_hModel.m_pBinding;
      if ( m_pBinding != 0 )
      {
        m_pData = thisa->m_modelState.m_animationState.m_pData;
        v5 = &m_pData[CModel::GetAnimationStateOffset(
                        *m_pBinding,
                        AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
      }
      else
      {
        v5 = 0;
      }
      ReadableBones = CAnimationState::GetReadableBones(&thisa->m_modelState.m_animationState);
      v7 = thisa->m_modelState.m_animationState.m_hModel.m_pBinding;
      if ( v7 != 0 )
        AnimationStateCount = CModel::GetAnimationStateCount(
                                *v7,
                                AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
      else
        AnimationStateCount = 0;
      LOWORD(transform.m_flMatVal[1][0]) = AnimationStateCount;
      *&transform.m_flMatVal[0][0] = v5;
      *&transform.m_flMatVal[0][2] = ReadableBones;
      BYTE2(transform.m_flMatVal[1][0]) = 0;
      v9 = thisa->m_modelState.m_hModel.m_Value.m_pBinding;
      if ( v9 != 0 )
        v10 = v9->m_pData;
      else
        v10 = 0;
      p_transform = &transform;
      ComputeModelSpaceBonesFromParentSpaceBones(v10, &transform, &modelSpaceTransforms);
      if ( BYTE2(transform.m_flMatVal[1][0]) != 0 )
      {
        if ( *&transform.m_flMatVal[0][0] != 0 )
          operator delete[](*&transform.m_flMatVal[0][0]);
        if ( *&transform.m_flMatVal[0][2] != 0 )
          operator delete[](*&transform.m_flMatVal[0][2]);
      }
      if ( modelSpaceTransforms.m256i_i8[18] != 0 )
      {
        if ( modelSpaceTransforms.m256i_i64[0] != 0 )
          operator delete[](modelSpaceTransforms.m256i_i64[0]);
        if ( modelSpaceTransforms.m256i_i64[1] != 0 )
          operator delete[](modelSpaceTransforms.m256i_i64[1]);
      }
    }
    else
    {
      CSkeletonInstance::CalcAnimationState(thisa, boneFlagsa);
      CAnimationState::CopyTransformAnimationData(
        &thisa->m_modelState.m_compositeParentSpaceState,
        &thisa->m_modelState.m_animationState);
    }
    v11 = 0;
    thisa->m_compositeParentSpaceValidBoneFlags.m_value = thisa->m_animationParentSpaceValidBoneFlags.m_value;
    goto LABEL_21;
  }
  bComputeWorldSpaceBones = thisa->m_pBoneTransformOverride != 0;
  NumBones = CSkeletonInstance::GetNumBones(thisa);
  v15 = thisa->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( v15 != 0 )
    pModel = *v15;
  else
    pModel = 0;
  m_pVPhysicsAggregate = thisa->m_modelState.m_pVPhysicsAggregate;
  pBoneToPhysicsBone = thisa->m_modelState.m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory;
  v16 = thisa;
  m_pBoneMergeList = thisa->m_pBoneMergeList;
  if ( m_pBoneMergeList != 0 && thisa->m_nHierarchyType == 1 )
  {
    m_pList = m_pBoneMergeList->m_pList;
    m_nCount = m_pBoneMergeList->m_nCount;
    m_pParent = thisa->m_pParent;
    memset(&boneMergeWorldSpaceBones, 0, 19);
    pEndBoneMerge = &m_pList[m_nCount];
    v38 = (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent);
    CSkeletonInstance::CalcWorldSpaceBones(v38, CModelSkeleton::BoneFlags_t::FLAG_BONE_MERGE_READ);
    m_pReadableBones = v38->m_modelState.m_simulationState.m_pReadableBones;
    m_pTransforms = v38->m_modelState.m_simulationState.m_pTransforms;
    LODWORD(v38) = v38->m_modelState.m_simulationState.m_nBoneCount;
    boneMergeWorldSpaceBones.m_bOwnsMemory = 0;
    boneMergeWorldSpaceBones.m_pBones = m_pTransforms;
    boneMergeWorldSpaceBones.m_pReadableBones = m_pReadableBones;
    boneMergeWorldSpaceBones.m_nBones = v38;
  }
  else
  {
    m_pList = 0;
    memset(&boneMergeWorldSpaceBones, 0, 19);
    pEndBoneMerge = 0;
  }
  bScratchMemoryValid = 0;
  m_pBoneTransformOverride = thisa->m_pBoneTransformOverride;
  if ( m_pBoneTransformOverride != 0
    && (v20 = (*(m_pBoneTransformOverride->_vptr_IBoneTransformOverride + 1))(m_pBoneTransformOverride, thisa, v13, v16),
        v21 = alloca(((v20 + 31) & 0xFFFFFFF0) + 16LL),
        v20 != 0) )
  {
    pScratchData = (&m_pVPhysicsAggregate & 0xFFFFFFFFFFFFFFEFLL);
    if ( !thisa->m_bDirtyAbsTransform.m_value )
      goto LABEL_30;
  }
  else
  {
    pScratchData = 0;
    if ( !thisa->m_bDirtyAbsTransform.m_value )
      goto LABEL_30;
  }
  CGameSceneNode::CalcAbsolutePositionWhenDirty(thisa);
LABEL_30:
  memset(&animationParentTransforms, 0, 19);
  in = &thisa->m_mNodeToWorld;
  memset(&outputParentTransforms, 0, 19);
  memset(&outputWorldTransforms, 0, 19);
  p_transform = &transform;
  CCompositeParentSpaceState::GetBonesForModify(&transform, &thisa->m_modelState.m_compositeParentSpaceState);
  v22 = *&transform.m_flMatVal[0][2];
  v23 = *&transform.m_flMatVal[0][0];
  v24 = LOWORD(transform.m_flMatVal[1][0]);
  if ( outputParentTransforms.m_bOwnsMemory )
  {
    if ( outputParentTransforms.m_pBones != 0 )
      operator delete[](outputParentTransforms.m_pBones);
    if ( outputParentTransforms.m_pReadableBones != 0 )
      operator delete[](outputParentTransforms.m_pReadableBones);
  }
  outputParentTransforms.m_bOwnsMemory = 0;
  outputParentTransforms.m_pBones = v23;
  outputParentTransforms.m_pReadableBones = v22;
  outputParentTransforms.m_nBones = v24;
  if ( BYTE2(transform.m_flMatVal[1][0]) != 0 )
  {
    if ( *&transform.m_flMatVal[0][0] != 0 )
      operator delete[](*&transform.m_flMatVal[0][0]);
    if ( *&transform.m_flMatVal[0][2] != 0 )
      operator delete[](*&transform.m_flMatVal[0][2]);
  }
  v25 = thisa->m_modelState.m_simulationState.m_pReadableBones;
  v26 = thisa->m_modelState.m_simulationState.m_pTransforms;
  m_nBoneCount = thisa->m_modelState.m_simulationState.m_nBoneCount;
  if ( outputWorldTransforms.m_bOwnsMemory )
  {
    if ( outputWorldTransforms.m_pBones != 0 )
      operator delete[](outputWorldTransforms.m_pBones);
    if ( outputWorldTransforms.m_pReadableBones != 0 )
      operator delete[](outputWorldTransforms.m_pReadableBones);
  }
  outputWorldTransforms.m_bOwnsMemory = 0;
  outputWorldTransforms.m_pBones = v26;
  outputWorldTransforms.m_pReadableBones = v25;
  outputWorldTransforms.m_nBones = m_nBoneCount;
  v91 = *(&thisa->m_modelState.m_compositeParentSpaceState + 59);
  if ( NumBones > 0 )
  {
    v28 = 0;
    bComputedWorldToSkeletonInstance = 0;
    v95 = 0;
    v93 = 3LL * (NumBones - 1) + 3;
    v93 *= 16;
    out = &mParentTransform;
    p_animationParentTransforms = &animationParentTransforms;
    while ( 1 )
    {
      if ( v28 < outputParentTransforms.m_nBones )
      {
        v29 = 1 << v28;
        v30 = v28 >> 5;
        if ( ((1 << v28) & outputParentTransforms.m_pReadableBones[v30]) != 0 )
        {
          if ( bComputeWorldSpaceBones )
          {
            v31 = &outputParentTransforms.m_pBones[v28];
            if ( v91 != 0 )
              LODWORD(v89) = -1;
            else
              LODWORD(v89) = CModel::boneParent(pModel, v28);
            TransformMatrix(v31, out);
            v32 = &outputWorldTransforms.m_pReadableBones[v30];
            if ( (v89 & 0x80000000) != 0LL )
            {
              *v32 |= v29;
              ConcatTransforms(in, out, &outputWorldTransforms.m_pBones[v95 / 0x30].matrix3x4_t);
            }
            else
            {
              *v32 |= v29;
              ConcatTransforms(
                &outputWorldTransforms.m_pBones[v89],
                out,
                &outputWorldTransforms.m_pBones[v95 / 0x30].matrix3x4_t);
            }
          }
          goto LABEL_53;
        }
      }
      if ( (boneFlagsa & thisa->m_modelState.m_pBoneFlagsIncludingChildren[v28]) != 0 )
        break;
LABEL_53:
      v95 += 48LL;
      ++v28;
      if ( v95 == v93 )
      {
        if ( outputWorldTransforms.m_bOwnsMemory )
        {
          if ( outputWorldTransforms.m_pBones != 0 )
            operator delete[](outputWorldTransforms.m_pBones);
          if ( outputWorldTransforms.m_pReadableBones != 0 )
            operator delete[](outputWorldTransforms.m_pReadableBones);
        }
        goto LABEL_105;
      }
    }
    v89 = __rdtsc();
    currentParentTransform = &outputParentTransforms.m_pBones[v28];
    if ( m_pList != pEndBoneMerge )
    {
      while ( v28 > m_pList->m_nDestIndex )
      {
        if ( pEndBoneMerge == ++m_pList )
          goto LABEL_70;
      }
      if ( v28 == m_pList->m_nDestIndex )
      {
        v33 = 1 << v28;
        v34 = v95;
        p_m_animationState = (4LL * (v28 >> 5));
        *(outputWorldTransforms.m_pReadableBones + p_m_animationState) |= 1 << v28;
        ConcatTransforms(
          &boneMergeWorldSpaceBones.m_pBones[m_pList->m_nSourceIndex],
          &m_pList->m_mSourceToDestTransform,
          (&outputWorldTransforms.m_pBones->matrix3x4_t + v34));
        ++m_pList;
        v35 = 2;
        goto LABEL_62;
      }
    }
LABEL_70:
    v41 = thisa->m_pBoneTransformOverride;
    if ( v41 == 0 )
      goto LABEL_74;
    v42 = v41->GetBoneTransformOverride(thisa,
            v28,
            &outputParentTransforms,
            &outputWorldTransforms,
            &bScratchMemoryValid,
            pScratchData,
            p_transform);
    v35 = v42;
    switch ( v42 )
    {
      case 2:
        v33 = 1 << v28;
        v58 = v95;
        p_m_animationState = (4LL * (v28 >> 5));
        *(outputWorldTransforms.m_pReadableBones + p_m_animationState) |= 1 << v28;
        *(outputWorldTransforms.m_pBones + v58) = transform;
        goto LABEL_62;
      case 1:
        MatrixTransform(p_transform, currentParentTransform);
        break;
      case 0:
LABEL_74:
        if ( pBoneToPhysicsBone == 0
          || m_pVPhysicsAggregate == 0
          || (v43 = pBoneToPhysicsBone[v28]) < 0
          || (v44 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 10))(m_pVPhysicsAggregate, v43),
              v45 = v44,
              v44 == 0)
          || (*(*v44 + 40LL))(v44) != 2 )
        {
          m_pBones = animationParentTransforms.m_pBones;
          if ( animationParentTransforms.m_pBones == 0 )
          {
            v59 = thisa;
            CSkeletonInstance::CalcAnimationState(thisa, boneFlagsa);
            v60 = v59->m_modelState.m_animationState.m_hModel.m_pBinding;
            p_m_animationState = &v59->m_modelState.m_animationState;
            if ( v60 != 0 )
            {
              v61 = v59->m_modelState.m_animationState.m_pData;
              m_pBones = &v61[CModel::GetAnimationStateOffset(
                                *v60,
                                AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
            }
            else
            {
              m_pBones = 0;
            }
            p_m_animationState = CAnimationState::GetReadableBones(p_m_animationState);
            v62 = thisa->m_modelState.m_animationState.m_hModel.m_pBinding;
            if ( v62 != 0 )
              v63 = CModel::GetAnimationStateCount(*v62, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
            else
              v63 = 0;
            if ( animationParentTransforms.m_bOwnsMemory )
            {
              if ( animationParentTransforms.m_pBones != 0 )
              {
                v73 = v63;
                operator delete[](animationParentTransforms.m_pBones);
                v63 = v73;
              }
              if ( animationParentTransforms.m_pReadableBones != 0 )
              {
                v74 = v63;
                operator delete[](animationParentTransforms.m_pReadableBones);
                v63 = v74;
              }
            }
            animationParentTransforms.m_bOwnsMemory = 0;
            animationParentTransforms.m_pBones = m_pBones;
            animationParentTransforms.m_nBones = v63;
            animationParentTransforms.m_pReadableBones = p_m_animationState;
          }
          v47 = currentParentTransform;
          v48 = &m_pBones[v28];
          y = v48->m_vPosition.y;
          z = v48->m_vPosition.z;
          currentParentTransform->m_vPosition.x = v48->m_vPosition.x;
          v47->m_vPosition.y = y;
          v47->m_vPosition.z = z;
          w = v48->m_orientation.w;
          v52 = v48->m_orientation.y;
          x = v48->m_orientation.x;
          v47->m_orientation.z = v48->m_orientation.z;
          v47->m_orientation.y = v52;
          v33 = 1 << v28;
          v54 = v91;
          v47->m_orientation.x = x;
          v47->m_orientation.w = w;
          p_m_animationState = (4LL * (v28 >> 5));
          *(outputParentTransforms.m_pReadableBones + p_m_animationState) |= 1 << v28;
          if ( v54 != 0 )
          {
LABEL_81:
            if ( v91 == 1 && CModel::boneParent(pModel, v28) >= 0 )
            {
              v55 = CModel::boneParent(pModel, v28);
              ConcatTransforms(&outputParentTransforms.m_pBones[v55], currentParentTransform, currentParentTransform);
            }
            v56 = -1;
            goto LABEL_85;
          }
          v35 = 1;
LABEL_90:
          v56 = CModel::boneParent(pModel, v28);
          if ( v35 != 1 )
          {
            if ( v56 < 0 )
              goto LABEL_64;
            if ( v56 >= outputWorldTransforms.m_nBones
              || ((1 << v56) & outputWorldTransforms.m_pReadableBones[v56 >> 5]) == 0 )
            {
              CSkeletonInstance::CalculateWorldTransforms_R(
                thisa,
                pModel,
                in,
                boneFlagsa,
                v56,
                p_animationParentTransforms,
                &outputParentTransforms,
                &outputWorldTransforms);
            }
            MatrixInvert(&outputWorldTransforms.m_pBones[v56], &worldToParent);
            v57 = out;
            ConcatTransforms(&worldToParent, &outputWorldTransforms.m_pBones[v95 / 0x30], out);
            MatrixTransform(v57, currentParentTransform);
LABEL_96:
            ++miniprofiler_BuildTransformationMatrix.m_numCalls;
            miniprofiler_BuildTransformationMatrix.m_numTimeBaseTicks = miniprofiler_BuildTransformationMatrix.m_numTimeBaseTicks
                                                                      - v89
                                                                      + __rdtsc();
            goto LABEL_53;
          }
LABEL_85:
          if ( bComputeWorldSpaceBones )
          {
            TransformMatrix(currentParentTransform, out);
            *(outputWorldTransforms.m_pReadableBones + p_m_animationState) |= v33;
            if ( v56 < 0 )
              ConcatTransforms(in, out, &outputWorldTransforms.m_pBones[v95 / 0x30].matrix3x4_t);
            else
              ConcatTransforms(
                &outputWorldTransforms.m_pBones[v56],
                out,
                &outputWorldTransforms.m_pBones[v95 / 0x30].matrix3x4_t);
          }
          goto LABEL_96;
        }
        v33 = 1 << v28;
        v64 = p_transform;
        p_m_animationState = (4LL * (v28 >> 5));
        *(outputWorldTransforms.m_pReadableBones + p_m_animationState) |= 1 << v28;
        v75 = &outputWorldTransforms.m_pBones[v95 / 0x30];
        (*(*v45 + 440LL))(v64, v45);
        TransformMatrix(p_transform, v75);
        v65 = v95;
        m_flAbsScale = thisa->m_flAbsScale;
        *(outputWorldTransforms.m_pReadableBones + p_m_animationState) |= 1 << v28;
        v67 = outputWorldTransforms.m_pBones + v65;
        if ( m_flAbsScale == 1.0 )
        {
          modelSpaceTransforms = *v67;
          v105 = *(v67 + 2);
        }
        else
        {
          v68 = p_transform + 1;
          v69 = p_transform;
          do
          {
            for ( i = 0; i != 3; ++i )
              v69->m_flMatVal[0][i] = *&v67[i * 4] * m_flAbsScale;
            v71 = *(v67 + 3);
            v69 = (v69 + 16);
            v67 += 16;
            v69[-1].m_flMatVal[2][3] = v71;
          }
          while ( v69 != v68 );
          modelSpaceTransforms = *&transform.m_flMatVal[0][0];
          v105 = *&transform.m_flMatVal[2][0];
        }
        v35 = 2;
        *(outputWorldTransforms.m_pReadableBones + p_m_animationState) |= v33;
        v72 = &outputWorldTransforms.m_pBones[v95 / 0x30];
        *&v72->m_flMatVal[0][0] = modelSpaceTransforms;
        *&v72->m_flMatVal[2][0] = v105;
LABEL_62:
        *(outputParentTransforms.m_pReadableBones + p_m_animationState) |= v33;
        if ( v91 != 0 )
        {
          if ( v35 != 1 )
          {
LABEL_64:
            if ( !bComputedWorldToSkeletonInstance )
              MatrixInvert(in, &worldToSkeletonInstance);
            ConcatTransforms(&worldToSkeletonInstance, &outputWorldTransforms.m_pBones[v95 / 0x30], out);
            MatrixTransform(out, currentParentTransform);
            bComputedWorldToSkeletonInstance = 1;
            goto LABEL_96;
          }
          goto LABEL_81;
        }
        goto LABEL_90;
      default:
        break;
    }
    v33 = 1 << v28;
    p_m_animationState = (4LL * (v28 >> 5));
    goto LABEL_62;
  }
LABEL_105:
  memset(&outputWorldTransforms, 0, 19);
  if ( outputParentTransforms.m_bOwnsMemory )
  {
    if ( outputParentTransforms.m_pBones != 0 )
      operator delete[](outputParentTransforms.m_pBones);
    if ( outputParentTransforms.m_pReadableBones != 0 )
      operator delete[](outputParentTransforms.m_pReadableBones);
  }
  memset(&outputParentTransforms, 0, 19);
  if ( animationParentTransforms.m_bOwnsMemory )
  {
    if ( animationParentTransforms.m_pBones != 0 )
      operator delete[](animationParentTransforms.m_pBones);
    if ( animationParentTransforms.m_pReadableBones != 0 )
      operator delete[](animationParentTransforms.m_pReadableBones);
  }
  memset(&animationParentTransforms, 0, 19);
  if ( boneMergeWorldSpaceBones.m_bOwnsMemory )
  {
    if ( boneMergeWorldSpaceBones.m_pBones != 0 )
      operator delete[](boneMergeWorldSpaceBones.m_pBones);
    if ( boneMergeWorldSpaceBones.m_pReadableBones != 0 )
      operator delete[](boneMergeWorldSpaceBones.m_pReadableBones);
  }
  v11 = bComputeWorldSpaceBones;
LABEL_21:
  ++miniprofiler_BuildTransformations.m_numCalls;
  miniprofiler_BuildTransformations.m_numTimeBaseTicks = miniprofiler_BuildTransformations.m_numTimeBaseTicks
                                                       - v81
                                                       + __rdtsc();
  return v11;
}


// CSkeletonInstance::ApplyIKBones  (line 6239, @0x00000000020bc220, libserver.so)  // inlines: GetBool, GetInt, GetOwnerEntity, curtime
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseAnimatingController::UpdateIK
// callers: CSkeletonInstance::CalcWorldSpaceBones
void __fastcall CSkeletonInstance::ApplyIKBones(
        CSkeletonInstance *const this,
        uint32 *pReadableBoneBitset,
        CBoneAccessor<CTransform> *const parentSpaceSimTransforms,
        CWritableBoneAccessor<matrix3x4a_t> *const worldSpaceSimTransforms)
{
  CEntityInstance *m_pOwner; // rdi
  CBaseAnimating *v8; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v11; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CBaseAnimatingController *v13; // [rsp-30h] [rbp-30h]

  if ( enable_ik.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pOwner = this->m_pOwner;
    if ( m_pOwner != 0 )
    {
      v8 = (*(m_pOwner->_vptr_IHandleEntity + 43))(m_pOwner);
      if ( v8 != 0 )
      {
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v8);
        if ( BaseAnimatingController != 0 )
        {
          m_flCurrentTime = 0.0;
          v11 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v13 = BaseAnimatingController;
                (m_pfnWarningFunc)(1, 0.0);
                BaseAnimatingController = v13;
              }
            }
            m_flCurrentTime = v11->m_flCurrentTime;
          }
          CBaseAnimatingController::UpdateIK(
            BaseAnimatingController,
            pReadableBoneBitset,
            parentSpaceSimTransforms->m_pBones,
            worldSpaceSimTransforms->m_pBones,
            worldSpaceSimTransforms->m_nBones,
            m_flCurrentTime);
        }
      }
    }
  }
}


// CSkeletonInstance::ApplyClothBones  (line 6263, @0x00000000020bc2f0, libserver.so)
void __fastcall CSkeletonInstance::ApplyClothBones(
        CSkeletonInstance *const this,
        CWritableBoneAccessor<matrix3x4a_t> *const worldSpaceSimTransforms)
{
  ;
}


// CSkeletonInstance::CalculateWorldTransforms_R  (line 6377, @0x00000000020bc300, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, Cleanup, GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationParentSpaceBones, GetAnimationState, GetAnimationStateData<(AnimationStateType_t)0>, GetBoneForWrite, GetBoneForWriteAndMarkReadable, Init, IsBoneReadable, MarkBoneReadable, SetBoneAndMarkReadable, operator=, operator==, operator[]
// calls: CModel::boneParent, TransformMatrix, ConcatTransforms, CSkeletonInstance::CalcAnimationState, CModel::GetAnimationStateOffset, CAnimationState::GetReadableBones, CModel::GetAnimationStateCount, operator delete []
// callers: CSkeletonInstance::BuildTransformations
void __fastcall CSkeletonInstance::CalculateWorldTransforms_R(
        CSkeletonInstance *const this,
        const CModel *pModel,
        const matrix3x4a_t *const skeletonInstanceToWorld,
        CModelSkeleton::BoneFlags_t boneFlags,
        int iBone,
        CBoneAccessor<CTransform> *const animationParentTransforms,
        CWritableBoneAccessor<CTransform> *const outputParentTransforms,
        CWritableBoneAccessor<matrix3x4a_t> *const outputWorldTransforms)
{
  int v8; // ebx
  const CTransform *m_pBones; // rcx
  __int64 v10; // r15
  __int64 v11; // r14
  vec_t *p_x; // rcx
  CTransform *v13; // rax
  vec_t v14; // xmm2_4
  vec_t v15; // xmm1_4
  vec_t v16; // xmm1_4
  vec_t v17; // xmm3_4
  vec_t v18; // xmm0_4
  int v19; // eax
  const matrix3x4a_t *v20; // rdx
  const matrix3x4a_t *v21; // r10
  CAnimationState *p_m_animationState; // rcx
  const matrix3x4a_t *v23; // rdx
  const CModel *const *m_pBinding; // rax
  int v25; // r8d
  CBoneAccessor<CTransform> *v26; // r9
  char *m_pData; // r14
  uint32 AnimationStateOffset; // eax
  const CTransform *v29; // r14
  const uint32 *ReadableBones; // rax
  const CModel *const *v31; // rax
  uint16 AnimationStateCount; // ax
  uint32 *m_pReadableBones; // rdi
  CBoneAccessor<CTransform> *v34; // [rsp+10h] [rbp-A0h]
  CBoneAccessor<CTransform> *v35; // [rsp+10h] [rbp-A0h]
  CBoneAccessor<CTransform> *v36; // [rsp+18h] [rbp-98h]
  int v37; // [rsp+18h] [rbp-98h]
  int v38; // [rsp+18h] [rbp-98h]
  CBoneAccessor<CTransform> *animationParentTransformsa; // [rsp+20h] [rbp-90h]
  CBoneAccessor<CTransform> *animationParentTransformsb; // [rsp+20h] [rbp-90h]
  int animationParentTransformsc; // [rsp+20h] [rbp-90h]
  const matrix3x4a_t *animationParentTransformsd; // [rsp+20h] [rbp-90h]
  const matrix3x4a_t *animationParentTransformse; // [rsp+20h] [rbp-90h]
  __int64 iBonea; // [rsp+38h] [rbp-78h]
  int iBoneb; // [rsp+38h] [rbp-78h]
  const matrix3x4a_t *iBonec; // [rsp+38h] [rbp-78h]
  uint16 iBoned; // [rsp+38h] [rbp-78h]
  uint16 iBonee; // [rsp+38h] [rbp-78h]
  const matrix3x4a_t *parentToWorldb; // [rsp+40h] [rbp-70h]
  int parentToWorldc; // [rsp+40h] [rbp-70h]
  const matrix3x4a_t *parentToWorldd; // [rsp+40h] [rbp-70h]
  const matrix3x4a_t *parentToWorld; // [rsp+40h] [rbp-70h]
  const uint32 *parentToWorlda; // [rsp+40h] [rbp-70h]
  matrix3x4a_t mParentTransform; // [rsp+50h] [rbp-60h] BYREF

  if ( iBone >= 0
    && iBone < outputParentTransforms->m_nBones
    && (v8 = 1 << iBone, v10 = iBone >> 5, ((1 << iBone) & outputParentTransforms->m_pReadableBones[v10]) != 0) )
  {
    v11 = iBone;
    iBonea = iBone;
  }
  else
  {
    v8 = 1 << iBone;
    m_pBones = animationParentTransforms->m_pBones;
    v10 = iBone >> 5;
    if ( animationParentTransforms->m_pBones == 0 )
    {
      animationParentTransformsb = animationParentTransforms;
      iBoneb = iBone;
      parentToWorld = skeletonInstanceToWorld;
      CSkeletonInstance::CalcAnimationState(this, boneFlags);
      p_m_animationState = &this->m_modelState.m_animationState;
      v23 = parentToWorld;
      m_pBinding = this->m_modelState.m_animationState.m_hModel.m_pBinding;
      v25 = iBoneb;
      v26 = animationParentTransformsb;
      if ( m_pBinding != 0 )
      {
        m_pData = this->m_modelState.m_animationState.m_pData;
        AnimationStateOffset = CModel::GetAnimationStateOffset(
                                 *m_pBinding,
                                 AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
        p_m_animationState = &this->m_modelState.m_animationState;
        v23 = parentToWorld;
        v25 = iBoneb;
        v29 = &m_pData[AnimationStateOffset];
        v26 = animationParentTransformsb;
      }
      else
      {
        v29 = 0;
      }
      v36 = v26;
      animationParentTransformsc = v25;
      iBonec = v23;
      ReadableBones = CAnimationState::GetReadableBones(p_m_animationState);
      skeletonInstanceToWorld = iBonec;
      parentToWorlda = ReadableBones;
      iBone = animationParentTransformsc;
      animationParentTransforms = v36;
      v31 = this->m_modelState.m_animationState.m_hModel.m_pBinding;
      if ( v31 != 0 )
      {
        AnimationStateCount = CModel::GetAnimationStateCount(
                                *v31,
                                AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
        skeletonInstanceToWorld = iBonec;
        iBone = animationParentTransformsc;
        animationParentTransforms = v36;
      }
      else
      {
        AnimationStateCount = 0;
      }
      if ( animationParentTransforms->m_bOwnsMemory )
      {
        if ( animationParentTransforms->m_pBones != 0 )
        {
          v34 = animationParentTransforms;
          v37 = iBone;
          animationParentTransformsd = skeletonInstanceToWorld;
          iBoned = AnimationStateCount;
          operator delete[](animationParentTransforms->m_pBones);
          animationParentTransforms = v34;
          iBone = v37;
          skeletonInstanceToWorld = animationParentTransformsd;
          AnimationStateCount = iBoned;
        }
        m_pReadableBones = animationParentTransforms->m_pReadableBones;
        if ( m_pReadableBones != 0 )
        {
          v35 = animationParentTransforms;
          v38 = iBone;
          animationParentTransformse = skeletonInstanceToWorld;
          iBonee = AnimationStateCount;
          operator delete[](m_pReadableBones);
          animationParentTransforms = v35;
          iBone = v38;
          skeletonInstanceToWorld = animationParentTransformse;
          AnimationStateCount = iBonee;
        }
      }
      animationParentTransforms->m_bOwnsMemory = 0;
      m_pBones = v29;
      animationParentTransforms->m_pBones = v29;
      animationParentTransforms->m_nBones = AnimationStateCount;
      animationParentTransforms->m_pReadableBones = parentToWorlda;
    }
    v11 = iBone;
    p_x = &m_pBones[iBone].m_vPosition.x;
    iBonea = iBone;
    outputParentTransforms->m_pReadableBones[v10] |= v8;
    v13 = &outputParentTransforms->m_pBones[iBonea];
    v14 = p_x[1];
    v15 = p_x[2];
    v13->m_vPosition.x = *p_x;
    v13->m_vPosition.y = v14;
    v13->m_vPosition.z = v15;
    v16 = p_x[7];
    v17 = p_x[5];
    v18 = p_x[4];
    v13->m_orientation.z = p_x[6];
    v13->m_orientation.y = v17;
    v13->m_orientation.x = v18;
    v13->m_orientation.w = v16;
  }
  parentToWorldb = skeletonInstanceToWorld;
  animationParentTransformsa = animationParentTransforms;
  v19 = CModel::boneParent(pModel, iBone);
  v20 = parentToWorldb;
  v21 = parentToWorldb;
  if ( v19 >= 0 )
  {
    if ( v19 >= outputWorldTransforms->m_nBones || ((1 << v19) & outputWorldTransforms->m_pReadableBones[v19 >> 5]) == 0 )
    {
      parentToWorldc = v19;
      CSkeletonInstance::CalculateWorldTransforms_R(
        this,
        pModel,
        v20,
        boneFlags,
        v19,
        animationParentTransformsa,
        outputParentTransforms,
        outputWorldTransforms);
      v19 = parentToWorldc;
    }
    v21 = &outputWorldTransforms->m_pBones[v19];
  }
  parentToWorldd = v21;
  TransformMatrix(&outputParentTransforms->m_pBones[iBonea], &mParentTransform);
  outputWorldTransforms->m_pReadableBones[v10] |= v8;
  ConcatTransforms(parentToWorldd, &mParentTransform, &outputWorldTransforms->m_pBones[v11].matrix3x4_t);
}


// CSkeletonInstance::ReadParentSpaceState  (line 6416, @0x00000000020c9a70, libserver.so)  // inlines: CWeakHandle, GetCompositeParentSpaceState, Init, Realloc, SetHasValidBoneTransformData
// calls: CSkeletonInstance::HasNonAnimationDrivenBones, CSkeletonInstance::CalcParentSpaceState, CAnimationState::Realloc, CAnimationState::CopyTransformAnimationData
void __fastcall CSkeletonInstance::ReadParentSpaceState(
        CSkeletonInstance *const this,
        CCompositeParentSpaceState *pValue,
        int nCount,
        const IInterpolatedVar *pVar)
{
  HModel hModel; // [rsp+0h] [rbp-30h] BYREF

  *(this + 722) |= 4u;
  if ( CSkeletonInstance::HasNonAnimationDrivenBones(this) )
  {
    CSkeletonInstance::CalcParentSpaceState(this, CModelSkeleton::BoneFlags_t::FLAG_ALL_BONE_FLAGS);
    *(this + 722) &= ~4u;
    if ( !pValue->m_bHasValidBoneTransformData )
      pValue->m_bHasValidBoneTransformData = 1;
    hModel.m_pBinding = this->m_modelState.m_hModel.m_Value.m_pBinding;
    CAnimationState::Realloc(pValue, &hModel);
    CAnimationState::CopyTransformAnimationData(pValue, &this->m_modelState.m_compositeParentSpaceState);
  }
  else
  {
    *(this + 722) &= ~4u;
    if ( pValue->m_bHasValidBoneTransformData )
      pValue->m_bHasValidBoneTransformData = 0;
  }
}


// CSkeletonInstance::WriteParentSpaceState  (line 6446, @0x00000000020bc6a0, libserver.so)  // inlines: SetHasValidBoneTransformData
void __fastcall CSkeletonInstance::WriteParentSpaceState(
        CSkeletonInstance *const this,
        const CCompositeParentSpaceState *pValue,
        int nCount,
        const IInterpolatedVar *pVar,
        IVWriteOpType_t opType)
{
  bool m_bHasValidBoneTransformData; // al

  this->m_modelState.m_compositeParentSpaceState.m_bShouldUseInterpolatedBoneTransforms = 0;
  if ( pValue->m_bHasValidBoneTransformData )
  {
    (*(this->_vptr_CGameSceneNode + 11))(this, 128, nCount, pVar, opType);
    m_bHasValidBoneTransformData = pValue->m_bHasValidBoneTransformData;
    if ( m_bHasValidBoneTransformData != this->m_modelState.m_compositeParentSpaceState.m_bHasValidBoneTransformData )
      this->m_modelState.m_compositeParentSpaceState.m_bHasValidBoneTransformData = m_bHasValidBoneTransformData;
  }
  else if ( this->m_modelState.m_compositeParentSpaceState.m_bHasValidBoneTransformData )
  {
    this->m_modelState.m_compositeParentSpaceState.m_bHasValidBoneTransformData = 0;
    (*(this->_vptr_CGameSceneNode + 11))(this, 128, nCount, pVar, opType);
  }
}


// CSkeletonInstance::HasCloth  (line 6511, @0x00000000020bc710, libserver.so)
bool __fastcall CSkeletonInstance::HasCloth(const CSkeletonInstance *const this)
{
  return 0;
}


// CSkeletonInstance::HasActiveCloth  (line 6525, @0x00000000020bc720, libserver.so)
bool __fastcall CSkeletonInstance::HasActiveCloth(const CSkeletonInstance *const this)
{
  return 0;
}


