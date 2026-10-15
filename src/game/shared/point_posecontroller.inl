
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPoseController::~CPoseController  (line 39, @0x000000000233b8f0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPoseController::~CPoseController(CPoseController *const this)
{
  this->_vptr_IHandleEntity = &off_408E5B0;
  CBaseEntity::~CBaseEntity(this);
}


// CPoseController::~CPoseController  (line 39, @0x000000000233b910, libserver.so)  // inlines: ~CPoseController
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPoseController::~CPoseController(CPoseController *const this)
{
  this->_vptr_IHandleEntity = &off_408E5B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPoseController::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000001f0f4c0, libserver.so)
// globals: CPoseController::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPoseController::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPoseController::CEntityInstanceEntityClass *const this)
{
  return CPoseController::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPoseController::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000001f0f4d0, libserver.so)  // inlines: Destruct<CPoseController>
void __fastcall CPoseController::CEntityInstanceEntityClass::DestructInstance(
        CPoseController::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPoseController::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000001f0f4f0, libserver.so)
void __fastcall CPoseController::CEntityInstanceEntityClass::FreeInstance(
        CPoseController::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPoseController::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000001f0f510, libserver.so)
bool __fastcall CPoseController::CEntityInstanceEntityClass::CanAllocate(
        const CPoseController::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPoseController::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000001f0f520, libserver.so)
// globals: CPoseController::s_pSchemaBinding
const ISchemaBinding *__fastcall CPoseController::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPoseController::CEntityInstanceEntityClass *const this)
{
  return CPoseController::s_pSchemaBinding;
}


// CPoseController::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000001f10f90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPoseController::CEntityInstanceEntityClass::AllocateInstance(
        CPoseController::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CPoseController::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000001f11e60, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkArrayBase, CNetworkVarBase, CPoseController, CUtlSymbolLarge, Construct<CPoseController>, EnsureValidValue<PoseController_FModType_t>, EnsureValidValue<bool>, EnsureValidValue<float>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPoseController::CEntityInstanceEntityClass::ConstructInstance(
        CPoseController::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 776) = 0;
    *(p + 195) = 0;
    *(p + 196) = 0;
    *(p + 788) = 0;
    *(p + 198) = 0;
    *p = &off_408E5B0;
    *(p + 199) = 0;
    *(p + 200) = 0;
    *(p + 201) = 0;
    *(p + 202) = 0;
    *(p + 203) = -1;
    *(p + 204) = -1;
    *(p + 205) = -1;
    *(p + 206) = -1;
    *(p + 105) = 0;
    *(p + 106) = 0;
  }
  return p;
}


// CPoseController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000001f12cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPoseController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPoseController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPoseController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000001f12ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPoseController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPoseController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPoseController::GetEntityClassInternal  (line 41, @0x0000000001f19f10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "point_posecontroller", "CPoseController"
// globals: `guard variable for'CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass, CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPoseController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo, CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo
CEntityClass *__cdecl CPoseController::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass) != 0 )
  {
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_designerName.u.m_Id = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass._vptr_CEntityClass = off_3F79390;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_ComponentOffsets.m_Size = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_AllHelpers.m_Size = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classInputs.m_Size = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classOutputs.m_Size = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_requiredEHandle.m_Index = -1;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_hNetworkSerializer = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pBaseClassInfo = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pClassInfo = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_flags = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_nAllHelpersFlags = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pScriptClassDesc = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pInputs = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_nInputCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pOutputs = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_nOutputCount = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pGameClass = 0;
    CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass._vptr_CEntityClass = off_3FC70D0;
    __cxa_guard_release(&`guard variable for'CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass);
    __cxa_atexit(
      CPoseController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass,
      &_dso_handle);
  }
  if ( g_pEntityCPoseControllerClass != 0 )
    return &CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass;
  if ( `guard variable for'CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo,
      "CPoseController",
      "point_posecontroller",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo);
  }
  CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pClassInfo = &CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo;
  CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pBaseClassInfo = CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo.m_pBaseClassInfo;
  g_pEntityCPoseControllerClass = &CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass;
  CPoseController::GetEntityClassInfo(void)::g_EntityCPoseControllerClassInfo.m_pClass = &CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass;
  CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPoseControllerClass->m_pComponentOverrides = 0;
  return &CPoseController::GetEntityClassInternal(void)::g_EntityCPoseControllerClass;
}


// CPoseController::GetEntityClass  (line 41, @0x0000000002339e10, libserver.so)
CEntityClass *__cdecl CPoseController::GetEntityClass()
{
  return g_pEntityCPoseControllerClass;
}


// CPoseController::Schema_DynamicBinding  (line 41, @0x000000000233ba80, libserver.so)
// calls: CPoseController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPoseController::Schema_DynamicBinding(const CPoseController *const this)
{
  CPoseController::Schema_VerifyBindingIsRegistered();
  return CPoseController::s_pSchemaBinding;
}


