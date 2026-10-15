
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropVRTrackedObject::GetEntityClass  (line 35, @0x0000000002370670, libserver.so)
CEntityClass *__cdecl CPropVRTrackedObject::GetEntityClass()
{
  return g_pEntityCPropVRTrackedObjectClass;
}


// CPropVRTrackedObject::Schema_DynamicBinding  (line 35, @0x0000000002370680, libserver.so)
// globals: CPropVRTrackedObject::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropVRTrackedObject::Schema_DynamicBinding(
        const CPropVRTrackedObject *const this)
{
  return CPropVRTrackedObject::s_pSchemaBinding;
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002370690, libserver.so)
// globals: CPropVRTrackedObject::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropVRTrackedObject::CEntityInstanceEntityClass *const this)
{
  return CPropVRTrackedObject::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x00000000023706a0, libserver.so)  // inlines: Destruct<CPropVRTrackedObject>
void __fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::DestructInstance(
        CPropVRTrackedObject::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x00000000023706c0, libserver.so)
void __fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::FreeInstance(
        CPropVRTrackedObject::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x00000000023706e0, libserver.so)
bool __fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::CanAllocate(
        const CPropVRTrackedObject::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x00000000023706f0, libserver.so)
// globals: CPropVRTrackedObject::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropVRTrackedObject::CEntityInstanceEntityClass *const this)
{
  return CPropVRTrackedObject::s_pSchemaBinding;
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002372590, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::AllocateInstance(
        CPropVRTrackedObject::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1328);
  memset(v1, 0, 0x530u);
  return v1;
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002374c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVRTrackedObject::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002374c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVRTrackedObject::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropVRTrackedObject::GetEntityClassInfo  (line 35, @0x0000000002376c40, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CPropHMDAvatar::GetEntityClassInternal, CPropVRHand::GetEntityClassInternal
// strings: "prop_vr_tracked_object", "CPropVRTrackedObject", "baseanimating", "CBaseAnimating", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo, CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CPropVRTrackedObject::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo != 0 )
    return &CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo) == 0 )
    return &CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo;
  if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
      "CBaseAnimating",
      "baseanimating",
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo,
    "CPropVRTrackedObject",
    "prop_vr_tracked_object",
    0,
    &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  __cxa_guard_release(&`guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo);
  return &CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo;
}


// CPropVRTrackedObject::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x00000000023777d0, libserver.so)  // inlines: Construct<CPropVRTrackedObject>
// calls: CPropVRTrackedObject::CPropVRTrackedObject
CEntityInstance *__fastcall CPropVRTrackedObject::CEntityInstanceEntityClass::ConstructInstance(
        CPropVRTrackedObject::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPropVRTrackedObject::CPropVRTrackedObject(p);
  return p;
}


// CPropVRTrackedObject::GetEntityClassInternal  (line 35, @0x000000000237b6f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_vr_tracked_object", "CPropVRTrackedObject"
// globals: `guard variable for'CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass, CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropVRTrackedObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo, CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo
CEntityClass *__cdecl CPropVRTrackedObject::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass) != 0 )
  {
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_designerName.u.m_Id = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass._vptr_CEntityClass = off_3F79390;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_ComponentOffsets.m_Size = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_AllHelpers.m_Size = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classInputs.m_Size = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classOutputs.m_Size = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_requiredEHandle.m_Index = -1;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_hNetworkSerializer = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pBaseClassInfo = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pClassInfo = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_flags = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_nAllHelpersFlags = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pScriptClassDesc = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pInputs = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_nInputCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pOutputs = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_nOutputCount = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pGameClass = 0;
    CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass._vptr_CEntityClass = off_4094B30;
    __cxa_guard_release(&`guard variable for'CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass);
    __cxa_atexit(
      CPropVRTrackedObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropVRTrackedObjectClass != 0 )
    return &CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass;
  if ( `guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo,
      "CPropVRTrackedObject",
      "prop_vr_tracked_object",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo);
  }
  CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pClassInfo = &CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo;
  CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pBaseClassInfo = CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo.m_pBaseClassInfo;
  g_pEntityCPropVRTrackedObjectClass = &CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass;
  CPropVRTrackedObject::GetEntityClassInfo(void)::g_EntityCPropVRTrackedObjectClassInfo.m_pClass = &CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass;
  CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPropVRTrackedObjectClass->m_pComponentOverrides = 0;
  return &CPropVRTrackedObject::GetEntityClassInternal(void)::g_EntityCPropVRTrackedObjectClass;
}


// CPropVRTrackedObject::IsSafeLocationForObject  (line 58, @0x0000000002370700, libserver.so)
bool __fastcall CPropVRTrackedObject::IsSafeLocationForObject(
        const CPropVRTrackedObject *const this,
        const Vector *const vGoal,
        const QAngle *const qGoal)
{
  return 1;
}


// CPropVRTrackedObject::GetMaxForce  (line 59, @0x0000000002370710, libserver.so)
float __fastcall CPropVRTrackedObject::GetMaxForce(const CPropVRTrackedObject *const this)
{
  return 0.0;
}


// CPropVRTrackedObject::GetMaxTorque  (line 60, @0x0000000002370720, libserver.so)
float __fastcall CPropVRTrackedObject::GetMaxTorque(const CPropVRTrackedObject *const this)
{
  return 0.0;
}


// CPropVRTrackedObject::GetCollisionMins  (line 65, @0x0000000002370730, libserver.so)
Vector __fastcall CPropVRTrackedObject::GetCollisionMins(const CPropVRTrackedObject *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = -4.0;
  *&result.x = 0xC0800000C0800000LL;
  return result;
}


// CPropVRTrackedObject::GetCollisionMaxs  (line 66, @0x0000000002370750, libserver.so)
Vector __fastcall CPropVRTrackedObject::GetCollisionMaxs(const CPropVRTrackedObject *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = 4.0;
  *&result.x = 0x4080000040800000LL;
  return result;
}


// CPropVRTrackedObject::GetJointFrequency  (line 79, @0x0000000002370770, libserver.so)
float __fastcall CPropVRTrackedObject::GetJointFrequency(const CPropVRTrackedObject *const this)
{
  return 0.0;
}


