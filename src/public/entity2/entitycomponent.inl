
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ComponentUnserializerClassInfo_t::~ComponentUnserializerClassInfo_t  (line 146, @0x0000000001ea3970, libserver.so)  // inlines: Count, Purge, RemoveAll, operator int, ~CUtlMemory, ~CUtlMemoryPool, ~CUtlNonTSHashPreHashedKeys, ~CUtlTSHashBase, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemoryPoolBase::Clear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemory<EntOutput_t, int>::Purge, CUtlMemory<ComponentPostUnserializerInfo_t, int>::Purge, CUtlMemory<ComponentUnserializerPtrToClassInfo_t, int>::Purge
void __fastcall ComponentUnserializerClassInfo_t::~ComponentUnserializerClassInfo_t(
        ComponentUnserializerClassInfo_t *const this)
{
  bool v2; // zf
  volatile int m_value; // eax
  __int64 i; // rdx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *j; // rax
  CUtlVectorBase<EntOutput_t,CUtlMemory<EntOutput_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_outputFields.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_outputFields.m_Memory;
    CUtlMemory<EntOutput_t,int>::Purge(&this->m_outputFields.m_Memory);
    if ( (this->m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<EntOutput_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_postUnserializeHandlers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_postUnserializeHandlers.m_Memory);
    if ( (this->m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_postUnserializeHandlers.m_Memory);
  }
  v2 = (this->m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ptrFields.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_ptrFields.m_Memory);
    if ( (this->m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_ptrFields.m_Memory);
  }
  m_value = this->m_atomicFields.m_EntryMemory.m_BlocksAllocated.m_value;
  this->m_atomicFields.m_bNeedsCommit = 0;
  if ( m_value != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      for ( j = this->m_atomicFields.m_aBuckets[i].m_pFirstUncommitted; j != 0; j = j->m_pNext )
        ;
      this->m_atomicFields.m_aBuckets[i].m_pFirst = 0;
      this->m_atomicFields.m_aBuckets[i].m_pFirstUncommitted = 0;
    }
    CUtlMemoryPoolBase::Clear(&this->m_atomicFields.m_EntryMemory);
  }
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&this->m_atomicFields.m_EntryMemory);
}


// ComponentUnserializerClassInfo_t::ComponentUnserializerClassInfo_t  (line 149, @0x0000000001ec4700, libserver.so)  // inlines: CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ThreadInterlockedExchange, operator=
// calls: CUtlMemoryPoolBase::CUtlMemoryPoolBase
// callers: _GLOBAL__sub_I__unity_components_01.cpp, _GLOBAL__sub_I__unity_source_files_02.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_06.cpp
void __fastcall ComponentUnserializerClassInfo_t::ComponentUnserializerClassInfo_t(
        ComponentUnserializerClassInfo_t *const this)
{
  __int64 i; // rax

  this->m_pBaseClassUnserializer = -1LL;
  CUtlMemoryPoolBase::CUtlMemoryPoolBase(
    &this->m_atomicFields.m_EntryMemory,
    48,
    4,
    8,
    MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
    0);
  this->m_atomicFields.m_ContentionCheck.m_value = 0;
  _InterlockedExchange(&this->m_atomicFields.m_ContentionCheck.m_value, 0);
  this->m_atomicFields.m_bNeedsCommit = 0;
  for ( i = 0; i != 16; ++i )
  {
    this->m_atomicFields.m_aBuckets[i].m_pFirst = 0;
    this->m_atomicFields.m_aBuckets[i].m_pFirstUncommitted = 0;
  }
  this->m_ptrFields.m_Size = 0;
  this->m_ptrFields.m_Memory.m_pMemory = 0;
  this->m_ptrFields.m_Memory.m_nAllocationCount = 0;
  this->m_ptrFields.m_Memory.m_nGrowSize = 0;
  this->m_postUnserializeHandlers.m_Size = 0;
  this->m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
  this->m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
  this->m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
  this->m_outputFields.m_Size = 0;
  this->m_outputFields.m_Memory.m_pMemory = 0;
  this->m_outputFields.m_Memory.m_nAllocationCount = 0;
  this->m_outputFields.m_Memory.m_nGrowSize = 0;
}


// EntComponentInfo_t::~EntComponentInfo_t  (line 218, @0x0000000001ec2cc0, libserver.so)  // inlines: Count, Purge, RemoveAll, operator int, ~CUtlMemory, ~CUtlMemoryPool, ~CUtlNonTSHashPreHashedKeys, ~CUtlTSHashBase, ~CUtlVector, ~CUtlVectorBase, ~ComponentUnserializerClassInfo_t
// calls: CUtlMemoryPoolBase::Clear, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemory<EntOutput_t, int>::Purge, CUtlMemory<ComponentPostUnserializerInfo_t, int>::Purge, CUtlMemory<ComponentUnserializerPtrToClassInfo_t, int>::Purge
void __fastcall EntComponentInfo_t::~EntComponentInfo_t(EntComponentInfo_t *const this)
{
  bool v2; // zf
  volatile int m_value; // eax
  __int64 i; // rdx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *j; // rax
  CUtlVectorBase<EntOutput_t,CUtlMemory<EntOutput_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_unserializer.m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_unserializer.m_outputFields.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_unserializer.m_outputFields.m_Memory;
    CUtlMemory<EntOutput_t,int>::Purge(&this->m_unserializer.m_outputFields.m_Memory);
    if ( (this->m_unserializer.m_outputFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<EntOutput_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_unserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_unserializer.m_postUnserializeHandlers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_unserializer.m_postUnserializeHandlers.m_Memory);
    if ( (this->m_unserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentPostUnserializerInfo_t,int>::Purge(&this->m_unserializer.m_postUnserializeHandlers.m_Memory);
  }
  v2 = (this->m_unserializer.m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_unserializer.m_ptrFields.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_unserializer.m_ptrFields.m_Memory);
    if ( (this->m_unserializer.m_ptrFields.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ComponentUnserializerPtrToClassInfo_t,int>::Purge(&this->m_unserializer.m_ptrFields.m_Memory);
  }
  m_value = this->m_unserializer.m_atomicFields.m_EntryMemory.m_BlocksAllocated.m_value;
  this->m_unserializer.m_atomicFields.m_bNeedsCommit = 0;
  if ( m_value != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      for ( j = this->m_unserializer.m_atomicFields.m_aBuckets[i].m_pFirstUncommitted; j != 0; j = j->m_pNext )
        ;
      this->m_unserializer.m_atomicFields.m_aBuckets[i].m_pFirst = 0;
      this->m_unserializer.m_atomicFields.m_aBuckets[i].m_pFirstUncommitted = 0;
    }
    CUtlMemoryPoolBase::Clear(&this->m_unserializer.m_atomicFields.m_EntryMemory);
  }
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&this->m_unserializer.m_atomicFields.m_EntryMemory);
}


// CEntityComponentHelper::Schema_DynamicBinding  (line 712, @0x0000000001ec1ac0, libserver.so)
// calls: CEntityComponentHelper::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelper::Schema_DynamicBinding(
        const CEntityComponentHelper *const this)
{
  CEntityComponentHelper::Schema_VerifyBindingIsRegistered();
  return CEntityComponentHelper::s_pSchemaBinding;
}


// CEntityComponentHelper::Finalize  (line 727, @0x0000000001ec13e0, libserver.so)
void __fastcall CEntityComponentHelper::Finalize(CEntityComponentHelper *const this)
{
  ;
}


// CEntityComponentHelper::Allocate  (line 734, @0x0000000001ec13f0, libserver.so)
bool __fastcall CEntityComponentHelper::Allocate(
        CEntityComponentHelper *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  return 0;
}


// CEntityComponentHelper::Free  (line 735, @0x0000000001ec1400, libserver.so)
void __fastcall CEntityComponentHelper::Free(
        CEntityComponentHelper *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  ;
}


// CEntityComponentHelperReferenced<CBodyComponent>::Allocate  (line 824, @0x0000000001ec22a0, libserver.so)  // inlines: Allocate, CBodyComponent, CEntityOwnerPtr, CNetworkVarChainer, CSmartPtr, ChangeAccessorFieldPathIndex_t, Construct<CBodyComponent>, MemAlloc_InlineCallocMemsetFunc, memset, operator=
bool __fastcall CEntityComponentHelperReferenced<CBodyComponent>::Allocate(
        CEntityComponentHelperReferenced<CBodyComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  _QWORD *v4; // rsi
  CEntityInstance *v5; // rax

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  if ( v4 == 0 )
    goto LABEL_4;
  memset(v4, 0, 0x48u);
  v4[5] = 0;
  *v4 = &off_3FB4F90;
  v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
  if ( CEntitySpawnHelper::gm_pCurEntityPtr != 0 )
  {
    v4[5] = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v4 + 24) = -1;
    v4[7] = 0;
    v4[8] = v5;
LABEL_4:
    *pComponent = v4;
    return 1;
  }
  v4[7] = 0;
  *(v4 + 24) = -1;
  v4[8] = 0;
  *pComponent = v4;
  return 1;
}


// CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>::Allocate  (line 824, @0x0000000001ec2600, libserver.so)  // inlines: Allocate, CBodyComponent, CBodyComponentSkeletonInstance, CEntityOwnerPtr, CNetworkVarChainer, CSmartPtr, ChangeAccessorFieldPathIndex_t, Construct<CBodyComponentSkeletonInstance>, MemAlloc_InlineCallocMemsetFunc, NetworkVar_m_skeletonInstance, Purge, RememberAllocSize, RemoveAll, memset, operator=, ~CBodyComponent, ~CUtlVectorBase, ~CUtlVectorConservative
// calls: memset, CSkeletonInstance::CSkeletonInstance, _Unwind_Resume
bool __fastcall CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>::Allocate(
        CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  char *v4; // rax
  char *v5; // rbx
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rax

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 896);
  v5 = v4;
  if ( v4 != 0 )
  {
    memset(v4, 0, 0x380u);
    *(v5 + 1) = v5 + 80;
    *v5 = &off_3FB4F90;
    *(v5 + 5) = 0;
    v6 = CEntitySpawnHelper::gm_pCurEntityPtr;
    if ( CEntitySpawnHelper::gm_pCurEntityPtr != 0 )
    {
      *(v5 + 5) = CEntitySpawnHelper::gm_pCurEntityPtr;
      *(v5 + 24) = -1;
      *(v5 + 7) = 0;
      *(v5 + 8) = v6;
    }
    else
    {
      *(v5 + 7) = 0;
      *(v5 + 24) = -1;
      *(v5 + 8) = 0;
    }
    *v5 = &off_3FEDD10;
    CSkeletonInstance::CSkeletonInstance((v5 + 80));
    *(v5 + 110) = 0;
    *(v5 + 10) = &off_3FB4550;
    *(v5 + 48) = &off_3FB4640;
    v7 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v5 + 436) = -1;
    *(v5 + 108) = v7;
  }
  *pComponent = v5;
  return 1;
}


// CEntityComponentHelperReferenced<CBodyComponentPoint>::Allocate  (line 824, @0x0000000001ec2740, libserver.so)  // inlines: Allocate, CBodyComponent, CBodyComponentPoint, CEntityOwnerPtr, CNetworkVarChainer, CSmartPtr, ChangeAccessorFieldPathIndex_t, Construct<CBodyComponentPoint>, MemAlloc_InlineCallocMemsetFunc, NetworkVar_m_sceneNode, Purge, RememberAllocSize, RemoveAll, memset, operator=, ~CBodyComponent, ~CUtlVectorBase, ~CUtlVectorConservative
// calls: CGameSceneNode::CGameSceneNode, _Unwind_Resume
bool __fastcall CEntityComponentHelperReferenced<CBodyComponentPoint>::Allocate(
        CEntityComponentHelperReferenced<CBodyComponentPoint> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  _QWORD *v4; // rbx
  CEntityInstance *v5; // rax
  CEntityInstance *v6; // rax

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 416);
  if ( v4 != 0 )
  {
    memset(v4, 0, 0x1A0u);
    v4[1] = v4 + 10;
    *v4 = &off_3FB4F90;
    v4[5] = 0;
    v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
    if ( CEntitySpawnHelper::gm_pCurEntityPtr != 0 )
    {
      v4[5] = CEntitySpawnHelper::gm_pCurEntityPtr;
      *(v4 + 24) = -1;
      v4[7] = 0;
      v4[8] = v5;
    }
    else
    {
      v4[7] = 0;
      *(v4 + 24) = -1;
      v4[8] = 0;
    }
    *v4 = &off_3FB4510;
    CGameSceneNode::CGameSceneNode((v4 + 10));
    v4[50] = 0;
    v4[10] = &off_3FB4430;
    v6 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v4 + 196) = -1;
    v4[48] = v6;
  }
  *pComponent = v4;
  return 1;
}


// CEntityComponentHelperReferenced<CLightComponent>::Allocate  (line 824, @0x0000000001ec4bc0, libserver.so)  // inlines: Allocate, Construct<CLightComponent>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CLightComponent::CLightComponent
bool __fastcall CEntityComponentHelperReferenced<CLightComponent>::Allocate(
        CEntityComponentHelperReferenced<CLightComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  CLightComponent *v4; // rbx

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 232);
  if ( v4 != 0 )
  {
    memset(v4, 0, sizeof(CLightComponent));
    CLightComponent::CLightComponent(v4);
  }
  *pComponent = v4;
  return 1;
}


// CEntityComponentHelperReferenced<CRenderComponent>::Allocate  (line 824, @0x0000000001ec50f0, libserver.so)  // inlines: Allocate, Construct<CRenderComponent>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CRenderComponent::CRenderComponent
bool __fastcall CEntityComponentHelperReferenced<CRenderComponent>::Allocate(
        CEntityComponentHelperReferenced<CRenderComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  CRenderComponent *v4; // rbx

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 176);
  if ( v4 != 0 )
  {
    memset(v4, 0, sizeof(CRenderComponent));
    CRenderComponent::CRenderComponent(v4);
  }
  *pComponent = v4;
  return 1;
}


// CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Allocate  (line 824, @0x0000000002092a80, libserver.so)  // inlines: Allocate, CBodyComponentBaseModelEntity, CBodyComponentSkeletonInstance, CEntityOwnerPtr, CNetworkVarChainer, CSmartPtr, ChangeAccessorFieldPathIndex_t, Construct<CBodyComponentBaseModelEntity>, MemAlloc_InlineCallocMemsetFunc, NetworkVar_m_skeletonInstance, memset
// calls: memset, CBodyComponent::CBodyComponent, CSkeletonInstance::CSkeletonInstance, CBodyComponent::~CBodyComponent, _Unwind_Resume
bool __fastcall CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Allocate(
        CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  char *v4; // rax
  char *v5; // rbx
  CEntityInstance *v6; // rdx
  CEntityInstance *v7; // rax

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  v5 = v4;
  if ( v4 != 0 )
  {
    memset(v4, 0, 0x390u);
    CBodyComponent::CBodyComponent(v5, (v5 + 80));
    *v5 = &off_3FEDD10;
    CSkeletonInstance::CSkeletonInstance((v5 + 80));
    *(v5 + 10) = &off_3FB4550;
    *(v5 + 48) = &off_3FB4640;
    *(v5 + 436) = -1;
    *(v5 + 110) = 0;
    *(v5 + 448) = -1;
    *(v5 + 113) = 0;
    v6 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *v5 = &off_3FECB70;
    v7 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v5 + 108) = v6;
    *(v5 + 111) = v7;
  }
  *pComponent = v5;
  return 1;
}


// CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate  (line 824, @0x000000000209b7e0, libserver.so)  // inlines: Allocate, CBodyComponentBaseAnimatingOverlay, CBodyComponentSkeletonInstance, CEntityOwnerPtr, CNetworkVarChainer, CSmartPtr, ChangeAccessorFieldPathIndex_t, Construct<CBodyComponentBaseAnimatingOverlay>, GetSkeletonInstance, MemAlloc_InlineCallocMemsetFunc, NetworkVar_m_animationController, NetworkVar_m_skeletonInstance, Purge, SetSkeletonInstance, memset, ~CBaseAnimatingController, ~CBaseAnimatingOverlayController, ~CBodyComponentSkeletonInstance, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector, ~NetworkVar_m_animationController, ~NetworkVar_m_skeletonInstance
// calls: memset, CBodyComponent::CBodyComponent, CSkeletonInstance::CSkeletonInstance, CBaseAnimatingOverlayController::CBaseAnimatingOverlayController, CSkeletonAnimationController::SetSkeletonInstance, CBodyComponent::~CBodyComponent, _Unwind_Resume, operator delete, CUtlVectorBase<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >::RemoveAll, CSkeletonAnimationController::~CSkeletonAnimationController, CSkeletonInstance::~CSkeletonInstance, CUtlMemory<CAnimationLayer, int>::Purge
bool __fastcall CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate(
        CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rdi
  CSkeletonInstance *v7; // rax

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 1600);
  v5 = v4;
  if ( v4 != 0 )
  {
    memset(v4, 0, 0x640u);
    CBodyComponent::CBodyComponent(v5, (v5 + 80));
    *v5 = &off_3FEDD10;
    CSkeletonInstance::CSkeletonInstance((v5 + 80));
    *(v5 + 110) = 0;
    *(v5 + 10) = &off_3FB4550;
    *(v5 + 48) = &off_3FB4640;
    *(v5 + 108) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v5 + 436) = -1;
    *v5 = &off_3FEE730;
    CBaseAnimatingOverlayController::CBaseAnimatingOverlayController((v5 + 888));
    v6 = *(v5 + 1);
    *(v5 + 199) = 0;
    *(v5 + 111) = off_3FEC970;
    *(v5 + 113) = &off_3FECA78;
    *(v5 + 197) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v5 + 792) = -1;
    v7 = (*(*v6 + 72LL))(v6);
    CSkeletonAnimationController::SetSkeletonInstance((v5 + 888), v7);
  }
  *pComponent = v5;
  return 1;
}


// CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate  (line 824, @0x000000000209b9f0, libserver.so)  // inlines: Allocate, CBodyComponentBaseAnimating, CBodyComponentSkeletonInstance, CEntityOwnerPtr, CNetworkVarChainer, CSmartPtr, ChangeAccessorFieldPathIndex_t, Construct<CBodyComponentBaseAnimating>, GetSkeletonInstance, MemAlloc_InlineCallocMemsetFunc, NetworkVar_m_animationController, NetworkVar_m_skeletonInstance, SetSkeletonInstance, memset, ~CBaseAnimatingController, ~CBodyComponentSkeletonInstance, ~NetworkVar_m_animationController, ~NetworkVar_m_skeletonInstance
// calls: memset, CBodyComponent::CBodyComponent, CSkeletonInstance::CSkeletonInstance, CBaseAnimatingController::CBaseAnimatingController, CSkeletonAnimationController::SetSkeletonInstance, CBodyComponent::~CBodyComponent, _Unwind_Resume, CSkeletonAnimationController::~CSkeletonAnimationController, CSkeletonInstance::~CSkeletonInstance
bool __fastcall CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate(
        CEntityComponentHelperReferenced<CBodyComponentBaseAnimating> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rdi
  CSkeletonInstance *v7; // rax

  v4 = (**g_pMemAlloc)(g_pMemAlloc, 1520);
  v5 = v4;
  if ( v4 != 0 )
  {
    memset(v4, 0, 0x5F0u);
    CBodyComponent::CBodyComponent(v5, (v5 + 80));
    *v5 = &off_3FEDD10;
    CSkeletonInstance::CSkeletonInstance((v5 + 80));
    *(v5 + 10) = &off_3FB4550;
    *(v5 + 48) = &off_3FB4640;
    *(v5 + 436) = -1;
    *(v5 + 110) = 0;
    *(v5 + 108) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *v5 = &off_3FEDBB0;
    CBaseAnimatingController::CBaseAnimatingController((v5 + 888));
    v6 = *(v5 + 1);
    *(v5 + 189) = 0;
    *(v5 + 111) = off_3FEC850;
    *(v5 + 113) = &off_3FEC958;
    *(v5 + 187) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v5 + 752) = -1;
    v7 = (*(*v6 + 72LL))(v6);
    CSkeletonAnimationController::SetSkeletonInstance((v5 + 888), v7);
  }
  *pComponent = v5;
  return 1;
}


// CEntityComponentHelperReferenced<CScriptComponent>::Allocate  (line 824, @0x00000000030d25b0, libserver.so)
bool __fastcall CEntityComponentHelperReferenced<CScriptComponent>::Allocate(
        CEntityComponentHelperReferenced<CScriptComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  return 1;
}


// CEntityComponentHelperReferenced<CBodyComponent>::Free  (line 829, @0x0000000001ec2350, libserver.so)  // inlines: Destruct<CBodyComponent>, Free, Purge, RememberAllocSize, RemoveAll, ~CBodyComponent, ~CUtlVectorBase, ~CUtlVectorConservative
void __fastcall CEntityComponentHelperReferenced<CBodyComponent>::Free(
        CEntityComponentHelperReferenced<CBodyComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi

  v4 = *pComponent;
  if ( *pComponent != 0 )
  {
    *(v4 + 16) = 0;
    *v4 = &off_3FB4F90;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v4 + 24));
    v5 = g_pMemAlloc;
    *(v4 + 32) = 0;
    *(v4 + 24) = 0;
    (*(*v5 + 16LL))(v5, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>::Free  (line 829, @0x0000000001ec2430, libserver.so)  // inlines: Destruct<CBodyComponentSkeletonInstance>, Free, Purge, RememberAllocSize, RemoveAll, ~CBodyComponent, ~CBodyComponentSkeletonInstance, ~CUtlVectorBase, ~CUtlVectorConservative, ~NetworkVar_m_skeletonInstance
// calls: CSkeletonInstance::~CSkeletonInstance
void __fastcall CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>::Free(
        CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rdi

  v4 = *pComponent;
  if ( *pComponent != 0 )
  {
    *v4 = &off_3FEDD10;
    *(v4 + 80) = &off_3FB4550;
    *(v4 + 384) = &off_3FB4640;
    CSkeletonInstance::~CSkeletonInstance((v4 + 80));
    v5 = *(v4 + 24);
    *v4 = &off_3FB4F90;
    *(v4 + 16) = 0;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    v6 = g_pMemAlloc;
    *(v4 + 32) = 0;
    *(v4 + 24) = 0;
    (*(*v6 + 16LL))(v6, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CBodyComponentPoint>::Free  (line 829, @0x0000000001ec24d0, libserver.so)  // inlines: Destruct<CBodyComponentPoint>, Free, Purge, RememberAllocSize, RemoveAll, ~CBodyComponent, ~CBodyComponentPoint, ~CUtlVectorBase, ~CUtlVectorConservative, ~NetworkVar_m_sceneNode
// calls: CGameSceneNode::~CGameSceneNode
void __fastcall CEntityComponentHelperReferenced<CBodyComponentPoint>::Free(
        CEntityComponentHelperReferenced<CBodyComponentPoint> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rdi

  v4 = *pComponent;
  if ( *pComponent != 0 )
  {
    *v4 = &off_3FB4510;
    *(v4 + 80) = &off_3FB4430;
    CGameSceneNode::~CGameSceneNode((v4 + 80));
    v5 = *(v4 + 24);
    *v4 = &off_3FB4F90;
    *(v4 + 16) = 0;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    v6 = g_pMemAlloc;
    *(v4 + 32) = 0;
    *(v4 + 24) = 0;
    (*(*v6 + 16LL))(v6, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CLightComponent>::Free  (line 829, @0x0000000001ec4c10, libserver.so)  // inlines: Destruct<CLightComponent>, Free
// calls: CLightComponent::~CLightComponent
void __fastcall CEntityComponentHelperReferenced<CLightComponent>::Free(
        CEntityComponentHelperReferenced<CLightComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  if ( *pComponent != 0 )
  {
    CLightComponent::~CLightComponent(*pComponent);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CRenderComponent>::Free  (line 829, @0x0000000001ec7290, libserver.so)  // inlines: Destruct<CRenderComponent>, Free
// calls: CRenderComponent::~CRenderComponent
void __fastcall CEntityComponentHelperReferenced<CRenderComponent>::Free(
        CEntityComponentHelperReferenced<CRenderComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  if ( *pComponent != 0 )
  {
    CRenderComponent::~CRenderComponent(*pComponent);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Free  (line 829, @0x00000000020927a0, libserver.so)  // inlines: Destruct<CBodyComponentBaseModelEntity>, Free, ~CBodyComponentBaseModelEntity, ~CBodyComponentSkeletonInstance, ~NetworkVar_m_skeletonInstance
// calls: CSkeletonInstance::~CSkeletonInstance, CBodyComponent::~CBodyComponent
void __fastcall CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Free(
        CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  __int64 v4; // rbx

  v4 = *pComponent;
  if ( *pComponent != 0 )
  {
    *v4 = &off_3FEDD10;
    *(v4 + 80) = &off_3FB4550;
    *(v4 + 384) = &off_3FB4640;
    CSkeletonInstance::~CSkeletonInstance((v4 + 80));
    CBodyComponent::~CBodyComponent(v4);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Free  (line 829, @0x0000000002092810, libserver.so)  // inlines: Destruct<CBodyComponentBaseAnimating>, Free, ~CBaseAnimatingController, ~CBodyComponentBaseAnimating, ~CBodyComponentSkeletonInstance, ~NetworkVar_m_animationController, ~NetworkVar_m_skeletonInstance
// calls: CSkeletonAnimationController::~CSkeletonAnimationController, CSkeletonInstance::~CSkeletonInstance, CBodyComponent::~CBodyComponent
void __fastcall CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Free(
        CEntityComponentHelperReferenced<CBodyComponentBaseAnimating> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  __int64 v4; // rbx

  v4 = *pComponent;
  if ( *pComponent != 0 )
  {
    *v4 = &off_3FEDBB0;
    *(v4 + 888) = off_3FEDBF0;
    *(v4 + 904) = &off_3FEDCF8;
    CSkeletonAnimationController::~CSkeletonAnimationController((v4 + 888));
    *v4 = &off_3FEDD10;
    *(v4 + 80) = &off_3FB4550;
    *(v4 + 384) = &off_3FB4640;
    CSkeletonInstance::~CSkeletonInstance((v4 + 80));
    CBodyComponent::~CBodyComponent(v4);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Free  (line 829, @0x0000000002096db0, libserver.so)  // inlines: Destruct<CBodyComponentBaseAnimatingOverlay>, Free, Purge, ~CBaseAnimatingController, ~CBaseAnimatingOverlayController, ~CBodyComponentBaseAnimatingOverlay, ~CBodyComponentSkeletonInstance, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector, ~NetworkVar_m_animationController, ~NetworkVar_m_skeletonInstance
// calls: operator delete, CUtlVectorBase<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >::RemoveAll, CSkeletonAnimationController::~CSkeletonAnimationController, CSkeletonInstance::~CSkeletonInstance, CBodyComponent::~CBodyComponent, CUtlMemory<CAnimationLayer, int>::Purge
void __fastcall CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Free(
        CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  __int64 v4; // rbx
  void *v5; // rdi

  v4 = *pComponent;
  if ( *pComponent != 0 )
  {
    v5 = *(v4 + 1552);
    *v4 = &off_3FEE730;
    *(v4 + 888) = off_3FEE610;
    *(v4 + 904) = &off_3FEE718;
    operator delete(v5);
    CUtlVectorBase<CAnimationLayer,CNetworkUtlVector_MemoryType<CAnimationLayer,-1>>::RemoveAll((v4 + 1496));
    if ( (*(v4 + 1516) & 0xC0000000) == 0 )
    {
      CUtlMemory<CAnimationLayer,int>::Purge((v4 + 1504));
      if ( (*(v4 + 1516) & 0xC0000000) == 0 )
        CUtlMemory<CAnimationLayer,int>::Purge((v4 + 1504));
    }
    *(v4 + 888) = off_3FEDBF0;
    *(v4 + 904) = &off_3FEDCF8;
    CSkeletonAnimationController::~CSkeletonAnimationController((v4 + 888));
    *v4 = &off_3FEDD10;
    *(v4 + 80) = &off_3FB4550;
    *(v4 + 384) = &off_3FB4640;
    CSkeletonInstance::~CSkeletonInstance((v4 + 80));
    CBodyComponent::~CBodyComponent(v4);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *pComponent);
    *pComponent = 0;
  }
}


// CEntityComponentHelperReferenced<CScriptComponent>::Free  (line 829, @0x00000000030d25c0, libserver.so)
void __fastcall CEntityComponentHelperReferenced<CScriptComponent>::Free(
        CEntityComponentHelperReferenced<CScriptComponent> *const this,
        CEntityIdentity *pEntity,
        void *pComponent)
{
  ;
}


// CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> >::Finalize  (line 855, @0x0000000001ec15b0, libserver.so)
void __fastcall CEntityComponentHelperT<CRenderComponent,CEntityComponentHelperReferenced<CRenderComponent>>::Finalize(
        CEntityComponentHelperT<CRenderComponent,CEntityComponentHelperReferenced<CRenderComponent> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> >::Finalize  (line 855, @0x0000000001ec15c0, libserver.so)
void __fastcall CEntityComponentHelperT<CLightComponent,CEntityComponentHelperReferenced<CLightComponent>>::Finalize(
        CEntityComponentHelperT<CLightComponent,CEntityComponentHelperReferenced<CLightComponent> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> >::Finalize  (line 855, @0x0000000001ec15d0, libserver.so)
void __fastcall CEntityComponentHelperT<CHitboxComponent,CEntityComponentHelperContained<CHitboxComponent>>::Finalize(
        CEntityComponentHelperT<CHitboxComponent,CEntityComponentHelperContained<CHitboxComponent> > *const this)
{
  ;
}


// CEntityComponentHelperT<CBodyComponentPoint, CEntityComponentHelperReferenced<CBodyComponentPoint> >::Finalize  (line 855, @0x0000000001ec15e0, libserver.so)
void __fastcall CEntityComponentHelperT<CBodyComponentPoint,CEntityComponentHelperReferenced<CBodyComponentPoint>>::Finalize(
        CEntityComponentHelperT<CBodyComponentPoint,CEntityComponentHelperReferenced<CBodyComponentPoint> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CBodyComponentSkeletonInstance, CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> >::Finalize  (line 855, @0x0000000001ec15f0, libserver.so)
void __fastcall CEntityComponentHelperT<CBodyComponentSkeletonInstance,CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>>::Finalize(
        CEntityComponentHelperT<CBodyComponentSkeletonInstance,CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CBodyComponent, CEntityComponentHelperReferenced<CBodyComponent> >::Finalize  (line 855, @0x0000000001ec1600, libserver.so)
void __fastcall CEntityComponentHelperT<CBodyComponent,CEntityComponentHelperReferenced<CBodyComponent>>::Finalize(
        CEntityComponentHelperT<CBodyComponent,CEntityComponentHelperReferenced<CBodyComponent> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CBodyComponentBaseModelEntity, CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> >::Finalize  (line 855, @0x000000000208f280, libserver.so)
void __fastcall CEntityComponentHelperT<CBodyComponentBaseModelEntity,CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>>::Finalize(
        CEntityComponentHelperT<CBodyComponentBaseModelEntity,CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CBodyComponentBaseAnimatingOverlay, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay> >::Finalize  (line 855, @0x000000000208f290, libserver.so)
void __fastcall CEntityComponentHelperT<CBodyComponentBaseAnimatingOverlay,CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>>::Finalize(
        CEntityComponentHelperT<CBodyComponentBaseAnimatingOverlay,CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CBodyComponentBaseAnimating, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating> >::Finalize  (line 855, @0x000000000208f2a0, libserver.so)
void __fastcall CEntityComponentHelperT<CBodyComponentBaseAnimating,CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>>::Finalize(
        CEntityComponentHelperT<CBodyComponentBaseAnimating,CEntityComponentHelperReferenced<CBodyComponentBaseAnimating> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CDamageComponent, CEntityComponentHelperContained<CDamageComponent> >::Finalize  (line 855, @0x00000000021b15f0, libserver.so)
void __fastcall CEntityComponentHelperT<CDamageComponent,CEntityComponentHelperContained<CDamageComponent>>::Finalize(
        CEntityComponentHelperT<CDamageComponent,CEntityComponentHelperContained<CDamageComponent> > *const this)
{
  ;
}


// CEntityComponentHelperT<CHealthComponent, CEntityComponentHelperContained<CHealthComponent> >::Finalize  (line 855, @0x000000000227b8a0, libserver.so)
void __fastcall CEntityComponentHelperT<CHealthComponent,CEntityComponentHelperContained<CHealthComponent>>::Finalize(
        CEntityComponentHelperT<CHealthComponent,CEntityComponentHelperContained<CHealthComponent> > *const this)
{
  ;
}


// CEntityComponentHelperT<CScriptComponent, CEntityComponentHelperReferenced<CScriptComponent> >::Finalize  (line 855, @0x00000000030d25a0, libserver.so)
void __fastcall CEntityComponentHelperT<CScriptComponent,CEntityComponentHelperReferenced<CScriptComponent>>::Finalize(
        CEntityComponentHelperT<CScriptComponent,CEntityComponentHelperReferenced<CScriptComponent> > *const this)
{
  this->m_flags |= 3u;
}


// CEntityComponentHelperT<CBodyComponent, CEntityComponentHelperReferenced<CBodyComponent> >::GetSchemaBinding  (line 863, @0x0000000001ec1b60, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBodyComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CBodyComponent,CEntityComponentHelperReferenced<CBodyComponent>>::GetSchemaBinding(
        CEntityComponentHelperT<CBodyComponent,CEntityComponentHelperReferenced<CBodyComponent> > *const this)
{
  CBodyComponent::Schema_VerifyBindingIsRegistered();
  return CBodyComponent::s_pSchemaBinding;
}


// CEntityComponentHelperT<CBodyComponentPoint, CEntityComponentHelperReferenced<CBodyComponentPoint> >::GetSchemaBinding  (line 863, @0x0000000001ec1ba0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBodyComponentPoint::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CBodyComponentPoint,CEntityComponentHelperReferenced<CBodyComponentPoint>>::GetSchemaBinding(
        CEntityComponentHelperT<CBodyComponentPoint,CEntityComponentHelperReferenced<CBodyComponentPoint> > *const this)
{
  CBodyComponentPoint::Schema_VerifyBindingIsRegistered();
  return CBodyComponentPoint::s_pSchemaBinding;
}


// CEntityComponentHelperT<CBodyComponentSkeletonInstance, CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> >::GetSchemaBinding  (line 863, @0x0000000001ec1bc0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBodyComponentSkeletonInstance::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CBodyComponentSkeletonInstance,CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>>::GetSchemaBinding(
        CEntityComponentHelperT<CBodyComponentSkeletonInstance,CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> > *const this)
{
  CBodyComponentSkeletonInstance::Schema_VerifyBindingIsRegistered();
  return CBodyComponentSkeletonInstance::s_pSchemaBinding;
}


// CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> >::GetSchemaBinding  (line 863, @0x0000000001ec1c60, libserver.so)  // inlines: Schema_StaticBinding
// calls: CLightComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CLightComponent,CEntityComponentHelperReferenced<CLightComponent>>::GetSchemaBinding(
        CEntityComponentHelperT<CLightComponent,CEntityComponentHelperReferenced<CLightComponent> > *const this)
{
  CLightComponent::Schema_VerifyBindingIsRegistered();
  return CLightComponent::s_pSchemaBinding;
}


// CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> >::GetSchemaBinding  (line 863, @0x0000000001ec1eb0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CRenderComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CRenderComponent,CEntityComponentHelperReferenced<CRenderComponent>>::GetSchemaBinding(
        CEntityComponentHelperT<CRenderComponent,CEntityComponentHelperReferenced<CRenderComponent> > *const this)
{
  CRenderComponent::Schema_VerifyBindingIsRegistered();
  return CRenderComponent::s_pSchemaBinding;
}


// CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> >::GetSchemaBinding  (line 863, @0x0000000001ec1ed0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CHitboxComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CHitboxComponent,CEntityComponentHelperContained<CHitboxComponent>>::GetSchemaBinding(
        CEntityComponentHelperT<CHitboxComponent,CEntityComponentHelperContained<CHitboxComponent> > *const this)
{
  CHitboxComponent::Schema_VerifyBindingIsRegistered();
  return CHitboxComponent::s_pSchemaBinding;
}


// CEntityComponentHelperT<CBodyComponentBaseAnimating, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating> >::GetSchemaBinding  (line 863, @0x000000000208fbf0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBodyComponentBaseAnimating::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CBodyComponentBaseAnimating,CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>>::GetSchemaBinding(
        CEntityComponentHelperT<CBodyComponentBaseAnimating,CEntityComponentHelperReferenced<CBodyComponentBaseAnimating> > *const this)
{
  CBodyComponentBaseAnimating::Schema_VerifyBindingIsRegistered();
  return CBodyComponentBaseAnimating::s_pSchemaBinding;
}


// CEntityComponentHelperT<CBodyComponentBaseAnimatingOverlay, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay> >::GetSchemaBinding  (line 863, @0x000000000208fc50, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBodyComponentBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CBodyComponentBaseAnimatingOverlay,CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>>::GetSchemaBinding(
        CEntityComponentHelperT<CBodyComponentBaseAnimatingOverlay,CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay> > *const this)
{
  CBodyComponentBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered();
  return CBodyComponentBaseAnimatingOverlay::s_pSchemaBinding;
}


// CEntityComponentHelperT<CBodyComponentBaseModelEntity, CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> >::GetSchemaBinding  (line 863, @0x000000000208fcf0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBodyComponentBaseModelEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CBodyComponentBaseModelEntity,CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>>::GetSchemaBinding(
        CEntityComponentHelperT<CBodyComponentBaseModelEntity,CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> > *const this)
{
  CBodyComponentBaseModelEntity::Schema_VerifyBindingIsRegistered();
  return CBodyComponentBaseModelEntity::s_pSchemaBinding;
}


// CEntityComponentHelperT<CDamageComponent, CEntityComponentHelperContained<CDamageComponent> >::GetSchemaBinding  (line 863, @0x00000000021b2e10, libserver.so)  // inlines: Schema_StaticBinding
// calls: CDamageComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CDamageComponent,CEntityComponentHelperContained<CDamageComponent>>::GetSchemaBinding(
        CEntityComponentHelperT<CDamageComponent,CEntityComponentHelperContained<CDamageComponent> > *const this)
{
  CDamageComponent::Schema_VerifyBindingIsRegistered();
  return CDamageComponent::s_pSchemaBinding;
}


// CEntityComponentHelperT<CHealthComponent, CEntityComponentHelperContained<CHealthComponent> >::GetSchemaBinding  (line 863, @0x000000000227ca00, libserver.so)  // inlines: Schema_StaticBinding
// calls: CHealthComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CHealthComponent,CEntityComponentHelperContained<CHealthComponent>>::GetSchemaBinding(
        CEntityComponentHelperT<CHealthComponent,CEntityComponentHelperContained<CHealthComponent> > *const this)
{
  CHealthComponent::Schema_VerifyBindingIsRegistered();
  return CHealthComponent::s_pSchemaBinding;
}


// CEntityComponentHelperT<CScriptComponent, CEntityComponentHelperReferenced<CScriptComponent> >::GetSchemaBinding  (line 863, @0x00000000030d26b0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CScriptComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityComponentHelperT<CScriptComponent,CEntityComponentHelperReferenced<CScriptComponent>>::GetSchemaBinding(
        CEntityComponentHelperT<CScriptComponent,CEntityComponentHelperReferenced<CScriptComponent> > *const this)
{
  CScriptComponent::Schema_VerifyBindingIsRegistered();
  return CScriptComponent::s_pSchemaBinding;
}


