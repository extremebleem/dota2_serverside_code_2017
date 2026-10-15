
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropVRHand::~CPropVRHand  (line 41, @0x0000000002377640, libserver.so)  // inlines: Purge, RemoveAll, ~CInteractionManager, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CPropVRTrackedObject::~CPropVRTrackedObject, CUtlMemory<prevent_interaction_t, int>::Purge, CUtlMemory<CHandle<CBaseVRHandAttachment>, int>::Purge
void __fastcall CPropVRHand::~CPropVRHand(CPropVRHand *const this)
{
  bool v2; // zf
  CUtlVectorBase<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InteractionMgr.m_vecPreventionEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4099F10;
  this->_vptr_IVRFlyListener = &off_409A798;
  this->m_InteractionMgr.m_vecPreventionEntities.m_Size = 0;
  this->m_InteractionMgr._vptr_CInteractionManager = &off_4022A80;
  if ( v2 )
  {
    p_m_Memory = &this->m_InteractionMgr.m_vecPreventionEntities.m_Memory;
    CUtlMemory<prevent_interaction_t,int>::Purge(&this->m_InteractionMgr.m_vecPreventionEntities.m_Memory);
    if ( (this->m_InteractionMgr.m_vecPreventionEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<prevent_interaction_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_hAttachments.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hAttachments.m_Vector.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CHandle<CBaseVRHandAttachment>,int>::Purge(&this->m_hAttachments.m_Vector.m_Memory),
        (this->m_hAttachments.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CPropVRTrackedObject::~CPropVRTrackedObject(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseVRHandAttachment>,int>::Purge(&this->m_hAttachments.m_Vector.m_Memory);
    CPropVRTrackedObject::~CPropVRTrackedObject(this);
  }
}


// CPropVRHand::~CPropVRHand  (line 41, @0x0000000002377710, libserver.so)  // inlines: Purge, RemoveAll, ~CInteractionManager, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CPropVRHand, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CPropVRTrackedObject::~CPropVRTrackedObject, CBaseEntity::operator delete, CUtlMemory<prevent_interaction_t, int>::Purge, CUtlMemory<CHandle<CBaseVRHandAttachment>, int>::Purge
void __fastcall CPropVRHand::~CPropVRHand(CPropVRHand *const this)
{
  bool v2; // zf
  CUtlVectorBase<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InteractionMgr.m_vecPreventionEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4099F10;
  this->_vptr_IVRFlyListener = &off_409A798;
  this->m_InteractionMgr.m_vecPreventionEntities.m_Size = 0;
  this->m_InteractionMgr._vptr_CInteractionManager = &off_4022A80;
  if ( v2 )
  {
    p_m_Memory = &this->m_InteractionMgr.m_vecPreventionEntities.m_Memory;
    CUtlMemory<prevent_interaction_t,int>::Purge(&this->m_InteractionMgr.m_vecPreventionEntities.m_Memory);
    if ( (this->m_InteractionMgr.m_vecPreventionEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<prevent_interaction_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_hAttachments.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hAttachments.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseVRHandAttachment>,int>::Purge(&this->m_hAttachments.m_Vector.m_Memory);
    if ( (this->m_hAttachments.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseVRHandAttachment>,int>::Purge(&this->m_hAttachments.m_Vector.m_Memory);
  }
  CPropVRTrackedObject::~CPropVRTrackedObject(this);
  CBaseEntity::operator delete(this);
}


// CPropVRHand::GetEntityClass  (line 43, @0x0000000002370bb0, libserver.so)
CEntityClass *__cdecl CPropVRHand::GetEntityClass()
{
  return g_pEntityCPropVRHandClass;
}


// CPropVRHand::Schema_DynamicBinding  (line 43, @0x0000000002370bc0, libserver.so)
// globals: CPropVRHand::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropVRHand::Schema_DynamicBinding(const CPropVRHand *const this)
{
  return CPropVRHand::s_pSchemaBinding;
}


// CPropVRHand::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002370bd0, libserver.so)
// globals: CPropVRHand::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropVRHand::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropVRHand::CEntityInstanceEntityClass *const this)
{
  return CPropVRHand::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropVRHand::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002370be0, libserver.so)  // inlines: Destruct<CPropVRHand>
void __fastcall CPropVRHand::CEntityInstanceEntityClass::DestructInstance(
        CPropVRHand::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropVRHand::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002370c00, libserver.so)
void __fastcall CPropVRHand::CEntityInstanceEntityClass::FreeInstance(
        CPropVRHand::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropVRHand::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002370c20, libserver.so)
bool __fastcall CPropVRHand::CEntityInstanceEntityClass::CanAllocate(
        const CPropVRHand::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropVRHand::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002370c30, libserver.so)
// globals: CPropVRHand::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropVRHand::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropVRHand::CEntityInstanceEntityClass *const this)
{
  return CPropVRHand::s_pSchemaBinding;
}


// CPropVRHand::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002372710, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropVRHand::CEntityInstanceEntityClass::AllocateInstance(
        CPropVRHand::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1712);
  memset(v1, 0, 0x6B0u);
  return v1;
}


// CPropVRHand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002374d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropVRHand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVRHand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPropVRHand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002374d30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropVRHand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVRHand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropVRHand::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002377830, libserver.so)  // inlines: Construct<CPropVRHand>
// calls: CPropVRHand::CPropVRHand
CEntityInstance *__fastcall CPropVRHand::CEntityInstanceEntityClass::ConstructInstance(
        CPropVRHand::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPropVRHand::CPropVRHand(p);
  return p;
}


// CPropVRHand::GetEntityClassInternal  (line 43, @0x000000000237f4f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CPropVRHand>, CPropVRTrackedObject::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_vr_hand", "CPropVRHand"
// globals: `guard variable for'CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass, CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropVRHand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo, CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo
CEntityClass *__cdecl CPropVRHand::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass) != 0 )
  {
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_designerName.u.m_Id = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass._vptr_CEntityClass = off_3F79390;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_ComponentOffsets.m_Size = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_AllHelpers.m_Size = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classInputs.m_Size = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classOutputs.m_Size = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_requiredEHandle.m_Index = -1;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_hNetworkSerializer = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pBaseClassInfo = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pClassInfo = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_flags = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_nAllHelpersFlags = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pScriptClassDesc = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pInputs = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_nInputCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pOutputs = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_nOutputCount = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pGameClass = 0;
    CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass._vptr_CEntityClass = off_40994B0;
    __cxa_guard_release(&`guard variable for'CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass);
    __cxa_atexit(
      CPropVRHand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropVRHandClass != 0 )
    return &CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass;
  if ( `guard variable for'CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo) != 0 )
  {
    EntityClassInfo = CPropVRTrackedObject::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo,
      "CPropVRHand",
      "prop_vr_hand",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo);
  }
  CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pClassInfo = &CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo;
  CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pBaseClassInfo = CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo.m_pBaseClassInfo;
  g_pEntityCPropVRHandClass = &CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass;
  CPropVRHand::GetEntityClassInfo(void)::g_EntityCPropVRHandClassInfo.m_pClass = &CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass;
  CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass.m_pScriptClassDesc = GetScriptDesc<CPropVRHand>(0);
  g_pEntityCPropVRHandClass->m_pComponentOverrides = 0;
  return &CPropVRHand::GetEntityClassInternal(void)::g_EntityCPropVRHandClass;
}


// CPropVRHand::GetActiveHandAttachment  (line 58, @0x0000000002374b70, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseVRHandAttachment*
CBaseVRHandAttachment *__fastcall CPropVRHand::GetActiveHandAttachment(CPropVRHand *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseVRHandAttachment *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hActiveHandAttachment.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hActiveHandAttachment.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hActiveHandAttachment.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CPropVRHand::GetCollisionMins  (line 69, @0x0000000002370c40, libserver.so)
Vector __fastcall CPropVRHand::GetCollisionMins(const CPropVRHand *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = -6.0;
  *&result.x = 0xC0C00000C0C00000LL;
  return result;
}


// CPropVRHand::GetCollisionMaxs  (line 70, @0x0000000002370c60, libserver.so)
Vector __fastcall CPropVRHand::GetCollisionMaxs(const CPropVRHand *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = 6.0;
  *&result.x = 0x40C0000040C00000LL;
  return result;
}


// CPropVRHand::OnEntityDropped  (line 102, @0x0000000002370c80, libserver.so)
void __fastcall CPropVRHand::OnEntityDropped(CPropVRHand *const this, CBaseEntity *pDroppedEntity)
{
  ;
}


// CPropVRHand::OnEntityPickedUp  (line 103, @0x0000000002370c90, libserver.so)
void __fastcall CPropVRHand::OnEntityPickedUp(CPropVRHand *const this, CBaseEntity *pPickedUpEntity)
{
  ;
}


// CPropVRHand::UpdateAnimation  (line 141, @0x0000000002370ca0, libserver.so)
void __fastcall CPropVRHand::UpdateAnimation(CPropVRHand *const this)
{
  ;
}


