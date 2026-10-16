
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdollProp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 51, @0x0000000002002580, libserver.so)
// globals: CRagdollProp::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollProp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRagdollProp::CEntityInstanceEntityClass *const this)
{
  return CRagdollProp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRagdollProp::CEntityInstanceEntityClass::DestructInstance  (line 51, @0x0000000002002590, libserver.so)  // inlines: Destruct<CRagdollProp>
void __fastcall CRagdollProp::CEntityInstanceEntityClass::DestructInstance(
        CRagdollProp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRagdollProp::CEntityInstanceEntityClass::FreeInstance  (line 51, @0x00000000020025b0, libserver.so)
void __fastcall CRagdollProp::CEntityInstanceEntityClass::FreeInstance(
        CRagdollProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRagdollProp::CEntityInstanceEntityClass::CanAllocate  (line 51, @0x00000000020025d0, libserver.so)
bool __fastcall CRagdollProp::CEntityInstanceEntityClass::CanAllocate(
        const CRagdollProp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRagdollProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 51, @0x00000000020025e0, libserver.so)
// globals: CRagdollProp::s_pSchemaBinding
const ISchemaBinding *__fastcall CRagdollProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRagdollProp::CEntityInstanceEntityClass *const this)
{
  return CRagdollProp::s_pSchemaBinding;
}


// CRagdollProp::CEntityInstanceEntityClass::AllocateInstance  (line 51, @0x0000000002004b30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRagdollProp::CEntityInstanceEntityClass::AllocateInstance(
        CRagdollProp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4264);
  memset(v1, 0, 0x10A8u);
  return v1;
}


// CRagdollProp::CEntityInstanceEntityClass::ConstructInstance  (line 51, @0x0000000002005170, libserver.so)  // inlines: Construct<CRagdollProp>
// calls: CRagdollProp::CRagdollProp
CEntityInstance *__fastcall CRagdollProp::CEntityInstanceEntityClass::ConstructInstance(
        CRagdollProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CRagdollProp::CRagdollProp(p);
  return p;
}


// CRagdollProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000002007130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRagdollProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRagdollProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000002007150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRagdollProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRagdollProp::GetEntityClassInternal  (line 51, @0x0000000002010fd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "CRagdollProp"
// globals: `guard variable for'CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass, CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRagdollProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo, CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo
CEntityClass *__cdecl CRagdollProp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass) != 0 )
  {
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_designerName.u.m_Id = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass._vptr_CEntityClass = off_3F79390;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_ComponentOffsets.m_Size = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_AllHelpers.m_Size = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classInputs.m_Size = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classOutputs.m_Size = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_requiredEHandle.m_Index = -1;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_hNetworkSerializer = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pBaseClassInfo = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pClassInfo = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_flags = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_nAllHelpersFlags = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pScriptClassDesc = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pInputs = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_nInputCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pOutputs = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_nOutputCount = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pGameClass = 0;
    CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass._vptr_CEntityClass = off_3FDE630;
    __cxa_guard_release(&`guard variable for'CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass);
    __cxa_atexit(
      CRagdollProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass,
      &_dso_handle);
  }
  if ( g_pEntityCRagdollPropClass != 0 )
    return &CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass;
  if ( `guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo,
      "CRagdollProp",
      "prop_ragdoll",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo);
  }
  CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pClassInfo = &CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo;
  CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pBaseClassInfo = CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo.m_pBaseClassInfo;
  g_pEntityCRagdollPropClass = &CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass;
  CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo.m_pClass = &CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass;
  CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCRagdollPropClass->m_pComponentOverrides = 0;
  return &CRagdollProp::GetEntityClassInternal(void)::g_EntityCRagdollPropClass;
}


// CRagdollProp::GetEntityClass  (line 51, @0x0000000002302f50, libserver.so)
CEntityClass *__cdecl CRagdollProp::GetEntityClass()
{
  return g_pEntityCRagdollPropClass;
}


// CRagdollProp::Schema_DynamicBinding  (line 51, @0x0000000002306650, libserver.so)
// calls: CRagdollProp::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CRagdollProp::Schema_DynamicBinding(const CRagdollProp *const this)
{
  CRagdollProp::Schema_VerifyBindingIsRegistered();
  return CRagdollProp::s_pSchemaBinding;
}


// CRagdollProp::GetEntityClassInfo  (line 51, @0x000000000230cd40, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal, CRagdollPropAttached::GetEntityClassInternal, CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::InitOptionalTables
// strings: "CRagdollProp", "baseanimating", "CBaseAnimating", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo, CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CRagdollProp::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo != 0 )
    return &CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo) == 0 )
    return &CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo;
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
    &CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo,
    "CRagdollProp",
    "prop_ragdoll",
    0,
    &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  __cxa_guard_release(&`guard variable for'CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo);
  return &CRagdollProp::GetEntityClassInfo(void)::g_EntityCRagdollPropClassInfo;
}


// CRagdollProp::IsAlive  (line 72, @0x0000000002302f60, libserver.so)
bool __fastcall CRagdollProp::IsAlive(CRagdollProp *const this)
{
  return 0;
}


// CRagdollProp::IsRagdoll  (line 94, @0x0000000002302f70, libserver.so)
bool __fastcall CRagdollProp::IsRagdoll(const CRagdollProp *const this)
{
  return 1;
}


// CRagdollProp::HasActivationRecord  (line 131, @0x0000000002302f80, libserver.so)
bool __fastcall CRagdollProp::HasActivationRecord(CRagdollProp *const this)
{
  return this->m_pActivationRecord != 0;
}


