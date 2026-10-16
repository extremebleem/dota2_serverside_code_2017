
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsProp::~CPhysicsProp  (line 21, @0x0000000002373e80, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPhysicsProp::~CPhysicsProp(CPhysicsProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysicsProp::~CPhysicsProp  (line 21, @0x00000000023741f0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPhysicsProp::~CPhysicsProp(CPhysicsProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsProp::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x0000000001f0f390, libserver.so)  // inlines: Destruct<CPhysicsProp>
void __fastcall CPhysicsProp::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsProp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsProp::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x0000000001f0f3b0, libserver.so)
void __fastcall CPhysicsProp::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsProp::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x0000000001f0f3d0, libserver.so)
bool __fastcall CPhysicsProp::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsProp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsProp::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x0000000001f10ed0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsProp::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsProp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1960);
  memset(v1, 0, 0x7A8u);
  return v1;
}


// CPhysicsProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x0000000001f111b0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CPhysicsProp::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CPhysicsProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsProp::CEntityInstanceEntityClass *const this)
{
  CPhysicsProp::Schema_VerifyBindingIsRegistered();
  return CPhysicsProp::s_pSchemaBinding;
}


// CPhysicsProp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x0000000001f111d0, libserver.so)
// calls: CPhysicsProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPhysicsProp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsProp::CEntityInstanceEntityClass *const this)
{
  CPhysicsProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CPhysicsProp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsProp::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x0000000001f111f0, libserver.so)  // inlines: Construct<CPhysicsProp>
// calls: CPhysicsProp::CPhysicsProp
CEntityInstance *__fastcall CPhysicsProp::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPhysicsProp::CPhysicsProp(p);
  return p;
}


// CPhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001f12a40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001f12a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsProp::GetEntityClassInfo  (line 23, @0x0000000001f16a10, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseProp::GetEntityClassInfo
// callers: CShatterGlassShardPhysics::GetEntityClassInternal, CPhysicsPropAlias_physics_prop::GetEntityClassInternal, CPhysicsPropOverride::GetEntityClassInternal, CPhysicsPropRespawnable::GetEntityClassInternal, CPhysicsPropMultiplayer::GetEntityClassInternal, CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::InitOptionalTables
// strings: "Physics Prop", "prop_physics", "CPhysicsProp", "CBreakableProp"
// globals: `guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo, CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo, `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo
CEntityClassInfo *__cdecl CPhysicsProp::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo != 0 )
    return &CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo) == 0 )
    return &CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo;
  if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) != 0 )
  {
    EntityClassInfo = CBaseProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
      "CBreakableProp",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo,
    "CPhysicsProp",
    "prop_physics",
    "Physics Prop",
    &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
  __cxa_guard_release(&`guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo);
  return &CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo;
}


// CPhysicsProp::GetEntityClassInternal  (line 23, @0x0000000002011670, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CPhysicsProp>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseProp::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "Physics Prop", "prop_physics", "CPhysicsProp", "CBreakableProp"
// globals: `guard variable for'CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass, CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo, CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo, `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo (9 total)
CEntityClass *__cdecl CPhysicsProp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass) != 0 )
  {
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_designerName.u.m_Id = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass._vptr_CEntityClass = off_3F79390;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_AllHelpers.m_Size = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classInputs.m_Size = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classOutputs.m_Size = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_requiredEHandle.m_Index = -1;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_hNetworkSerializer = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pBaseClassInfo = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pClassInfo = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_flags = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_nAllHelpersFlags = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pScriptClassDesc = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pInputs = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_nInputCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pOutputs = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_nOutputCount = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pGameClass = 0;
    CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass._vptr_CEntityClass = off_3FC6310;
    __cxa_guard_release(&`guard variable for'CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass);
    __cxa_atexit(
      CPhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsPropClass != 0 )
    return &CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass;
  if ( `guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo) != 0 )
  {
    if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) != 0 )
    {
      EntityClassInfo = CBaseProp::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
        "CBreakableProp",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo,
      "CPhysicsProp",
      "prop_physics",
      "Physics Prop",
      &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo);
  }
  CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pClassInfo = &CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo;
  CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pBaseClassInfo = CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsPropClass = &CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass;
  CPhysicsProp::GetEntityClassInfo(void)::g_EntityCPhysicsPropClassInfo.m_pClass = &CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass;
  CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass.m_pScriptClassDesc = GetScriptDesc<CPhysicsProp>(0);
  g_pEntityCPhysicsPropClass->m_pComponentOverrides = 0;
  return &CPhysicsProp::GetEntityClassInternal(void)::g_EntityCPhysicsPropClass;
}


// CPhysicsProp::GetEntityClass  (line 23, @0x0000000002370930, libserver.so)
CEntityClass *__cdecl CPhysicsProp::GetEntityClass()
{
  return g_pEntityCPhysicsPropClass;
}


// CPhysicsProp::Schema_DynamicBinding  (line 23, @0x0000000002372fb0, libserver.so)
// calls: CPhysicsProp::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPhysicsProp::Schema_DynamicBinding(const CPhysicsProp *const this)
{
  CPhysicsProp::Schema_VerifyBindingIsRegistered();
  return CPhysicsProp::s_pSchemaBinding;
}


// CPhysicsProp::GetId  (line 104, @0x0000000002246ce0, libserver.so)
// calls: CEntityInstance::GetEntityIndex
int32 __fastcall CPhysicsProp::GetId(const CPhysicsProp *const this)
{
  return CEntityInstance::GetEntityIndex(this).m_Data;
}


// CPhysicsProp::GetUsePriority  (line 258, @0x0000000002244f10, libserver.so)
UsePriorityType __fastcall CPhysicsProp::GetUsePriority(CPhysicsProp *const this, CBaseEntity *pActivator)
{
  return UsePriorityType::USE_PRIORITY_LOW;
}


