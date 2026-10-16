
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CShatterGlassShardPhysics::~CShatterGlassShardPhysics  (line 69, @0x00000000022486f0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CShatterGlassShardPhysics::~CShatterGlassShardPhysics(CShatterGlassShardPhysics *const this)
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


// CShatterGlassShardPhysics::~CShatterGlassShardPhysics  (line 69, @0x0000000002248760, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp, ~CShatterGlassShardPhysics
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CShatterGlassShardPhysics::~CShatterGlassShardPhysics(CShatterGlassShardPhysics *const this)
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


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 71, @0x0000000001f0f3e0, libserver.so)
// globals: CShatterGlassShardPhysics::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this)
{
  return CShatterGlassShardPhysics::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::DestructInstance  (line 71, @0x0000000001f0f3f0, libserver.so)  // inlines: Destruct<CShatterGlassShardPhysics>
void __fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::DestructInstance(
        CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::FreeInstance  (line 71, @0x0000000001f0f410, libserver.so)
void __fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::FreeInstance(
        CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::CanAllocate  (line 71, @0x0000000001f0f430, libserver.so)
bool __fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::CanAllocate(
        const CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 71, @0x0000000001f0f440, libserver.so)
// globals: CShatterGlassShardPhysics::s_pSchemaBinding
const ISchemaBinding *__fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this)
{
  return CShatterGlassShardPhysics::s_pSchemaBinding;
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::AllocateInstance  (line 71, @0x0000000001f10f10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::AllocateInstance(
        CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1968);
  memset(v1, 0, 0x7B0u);
  return v1;
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::ConstructInstance  (line 71, @0x0000000001f11220, libserver.so)  // inlines: CShatterGlassShardPhysics, Construct<CShatterGlassShardPhysics>
// calls: CPhysicsProp::CPhysicsProp
CEntityInstance *__fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::ConstructInstance(
        CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysicsProp::CPhysicsProp(p);
    *p = &off_404A9B0;
    *(p + 152) = off_404B338;
    *(p + 153) = &off_404B450;
    *(p + 202) = &off_404B4B8;
  }
  return p;
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000001f12a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CShatterGlassShardPhysics::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000001f12ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CShatterGlassShardPhysics::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CShatterGlassShardPhysics::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CShatterGlassShardPhysics::GetEntityClassInternal  (line 71, @0x0000000001f19030, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CPhysicsProp::InitScriptDesc, CPhysicsProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "shatterglass_shard", "CShatterGlassShardPhysics"
// globals: `guard variable for'CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass, CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CShatterGlassShardPhysics::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo, CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo
CEntityClass *__cdecl CShatterGlassShardPhysics::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass) != 0 )
  {
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_designerName.u.m_Id = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass._vptr_CEntityClass = off_3F79390;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_ComponentOffsets.m_Size = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_AllHelpers.m_Size = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classInputs.m_Size = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classOutputs.m_Size = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_requiredEHandle.m_Index = -1;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_hNetworkSerializer = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pBaseClassInfo = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pClassInfo = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_flags = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_nAllHelpersFlags = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pScriptClassDesc = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pInputs = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_nInputCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pOutputs = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_nOutputCount = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pGameClass = 0;
    CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass._vptr_CEntityClass = off_3FC6390;
    __cxa_guard_release(&`guard variable for'CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass);
    __cxa_atexit(
      CShatterGlassShardPhysics::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass,
      &_dso_handle);
  }
  if ( g_pEntityCShatterGlassShardPhysicsClass != 0 )
    return &CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass;
  if ( `guard variable for'CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo) != 0 )
  {
    EntityClassInfo = CPhysicsProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo,
      "CShatterGlassShardPhysics",
      "shatterglass_shard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo);
  }
  CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pClassInfo = &CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo;
  CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pBaseClassInfo = CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo.m_pBaseClassInfo;
  g_pEntityCShatterGlassShardPhysicsClass = &CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass;
  CShatterGlassShardPhysics::GetEntityClassInfo(void)::g_EntityCShatterGlassShardPhysicsClassInfo.m_pClass = &CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass;
  CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass.m_pScriptClassDesc = CPhysicsProp::InitScriptDesc();
  g_pEntityCShatterGlassShardPhysicsClass->m_pComponentOverrides = 0;
  return &CShatterGlassShardPhysics::GetEntityClassInternal(void)::g_EntityCShatterGlassShardPhysicsClass;
}


// CShatterGlassShardPhysics::Schema_DynamicBinding  (line 71, @0x0000000002247510, libserver.so)
// calls: CShatterGlassShardPhysics::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CShatterGlassShardPhysics::Schema_DynamicBinding(
        const CShatterGlassShardPhysics *const this)
{
  CShatterGlassShardPhysics::Schema_VerifyBindingIsRegistered();
  return CShatterGlassShardPhysics::s_pSchemaBinding;
}


// CFuncShatterglass::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 211, @0x0000000001f0f450, libserver.so)
// globals: CFuncShatterglass::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncShatterglass::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncShatterglass::CEntityInstanceEntityClass *const this)
{
  return CFuncShatterglass::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncShatterglass::CEntityInstanceEntityClass::DestructInstance  (line 211, @0x0000000001f0f460, libserver.so)  // inlines: Destruct<CFuncShatterglass>
void __fastcall CFuncShatterglass::CEntityInstanceEntityClass::DestructInstance(
        CFuncShatterglass::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncShatterglass::CEntityInstanceEntityClass::FreeInstance  (line 211, @0x0000000001f0f480, libserver.so)
void __fastcall CFuncShatterglass::CEntityInstanceEntityClass::FreeInstance(
        CFuncShatterglass::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncShatterglass::CEntityInstanceEntityClass::CanAllocate  (line 211, @0x0000000001f0f4a0, libserver.so)
bool __fastcall CFuncShatterglass::CEntityInstanceEntityClass::CanAllocate(
        const CFuncShatterglass::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncShatterglass::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 211, @0x0000000001f0f4b0, libserver.so)
// globals: CFuncShatterglass::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncShatterglass::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncShatterglass::CEntityInstanceEntityClass *const this)
{
  return CFuncShatterglass::s_pSchemaBinding;
}


// CFuncShatterglass::CEntityInstanceEntityClass::AllocateInstance  (line 211, @0x0000000001f10f50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncShatterglass::CEntityInstanceEntityClass::AllocateInstance(
        CFuncShatterglass::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1456);
  memset(v1, 0, 0x5B0u);
  return v1;
}


// CFuncShatterglass::CEntityInstanceEntityClass::ConstructInstance  (line 211, @0x0000000001f11280, libserver.so)  // inlines: Construct<CFuncShatterglass>
// calls: CFuncShatterglass::CFuncShatterglass
CEntityInstance *__fastcall CFuncShatterglass::CEntityInstanceEntityClass::ConstructInstance(
        CFuncShatterglass::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncShatterglass::CFuncShatterglass(p);
  return p;
}


// CFuncShatterglass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 211, @0x0000000001f12b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncShatterglass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncShatterglass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncShatterglass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 211, @0x0000000001f12ba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncShatterglass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncShatterglass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncShatterglass::GetEntityClassInternal  (line 211, @0x0000000001f188c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "func_shatterglass", "CFuncShatterglass", "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass, CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncShatterglass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo, CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo (13 total)
CEntityClass *__cdecl CFuncShatterglass::GetEntityClassInternal()
{
  if ( `guard variable for'CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass) != 0 )
  {
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_designerName.u.m_Id = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass._vptr_CEntityClass = off_3F79390;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_ComponentOffsets.m_Size = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_AllHelpers.m_Size = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classInputs.m_Size = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classOutputs.m_Size = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_requiredEHandle.m_Index = -1;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_hNetworkSerializer = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pBaseClassInfo = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pClassInfo = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_flags = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_nAllHelpersFlags = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pScriptClassDesc = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pInputs = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_nInputCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pOutputs = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_nOutputCount = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pGameClass = 0;
    CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass._vptr_CEntityClass = off_3FC6410;
    __cxa_guard_release(&`guard variable for'CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass);
    __cxa_atexit(
      CFuncShatterglass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncShatterglassClass != 0 )
    return &CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass;
  if ( `guard variable for'CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
      {
        if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
        {
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
            "CGameEntity",
            0,
            0,
            &g_EntityRootClassInfo);
          __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
          "CBaseEntity",
          0,
          0,
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo,
      "CFuncShatterglass",
      "func_shatterglass",
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo);
  }
  CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pClassInfo = &CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo;
  CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pBaseClassInfo = CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncShatterglassClass = &CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass;
  CFuncShatterglass::GetEntityClassInfo(void)::g_EntityCFuncShatterglassClassInfo.m_pClass = &CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass;
  CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncShatterglassClass->m_pComponentOverrides = 0;
  return &CFuncShatterglass::GetEntityClassInternal(void)::g_EntityCFuncShatterglassClass;
}


// CFuncShatterglass::GetEntityClass  (line 211, @0x0000000002245b20, libserver.so)
CEntityClass *__cdecl CFuncShatterglass::GetEntityClass()
{
  return g_pEntityCFuncShatterglassClass;
}


// CFuncShatterglass::Schema_DynamicBinding  (line 211, @0x0000000002247530, libserver.so)
// calls: CFuncShatterglass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncShatterglass::Schema_DynamicBinding(const CFuncShatterglass *const this)
{
  CFuncShatterglass::Schema_VerifyBindingIsRegistered();
  return CFuncShatterglass::s_pSchemaBinding;
}


// CFuncShatterglass::InputHit  (line 243, @0x0000000002253060, libserver.so)
// calls: CFuncShatterglass::InputHit
void __fastcall CFuncShatterglass::InputHit(CFuncShatterglass *const this, inputdata_t *const data)
{
  CFuncShatterglass::InputHit(this);
}


// CFuncShatterglass::InputRestore  (line 245, @0x0000000002253070, libserver.so)  // inlines: StartRestore
// calls: CFuncShatterglass::Init
void __fastcall CFuncShatterglass::InputRestore(CFuncShatterglass *const this, inputdata_t *const data)
{
  if ( this->m_bBroken )
  {
    this->m_flRestoreStartTime = 0.0;
    CFuncShatterglass::Init(this);
  }
}


// CFuncShatterglass::InputRestoreSlow  (line 246, @0x0000000002253090, libserver.so)
// calls: CFuncShatterglass::StartRestoreSlow
void __fastcall CFuncShatterglass::InputRestoreSlow(CFuncShatterglass *const this, inputdata_t *const data)
{
  CFuncShatterglass::StartRestoreSlow(this);
}


