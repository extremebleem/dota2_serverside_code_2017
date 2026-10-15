
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropHMDAvatar::~CPropHMDAvatar  (line 24, @0x00000000023775d0, libserver.so)
// calls: CPropVRTrackedObject::~CPropVRTrackedObject
void __fastcall CPropHMDAvatar::~CPropHMDAvatar(CPropHMDAvatar *const this)
{
  this->_vptr_IHandleEntity = &off_4099530;
  this->_vptr_IVRFlyListener = &off_4099D70;
  CPropVRTrackedObject::~CPropVRTrackedObject(this);
}


// CPropHMDAvatar::~CPropHMDAvatar  (line 24, @0x0000000002377600, libserver.so)  // inlines: ~CPropHMDAvatar
// calls: CPropVRTrackedObject::~CPropVRTrackedObject, CBaseEntity::operator delete
void __fastcall CPropHMDAvatar::~CPropHMDAvatar(CPropHMDAvatar *const this)
{
  this->_vptr_IHandleEntity = &off_4099530;
  this->_vptr_IVRFlyListener = &off_4099D70;
  CPropVRTrackedObject::~CPropVRTrackedObject(this);
  CBaseEntity::operator delete(this);
}


// CPropHMDAvatar::GetEntityClass  (line 26, @0x0000000002370ad0, libserver.so)
CEntityClass *__cdecl CPropHMDAvatar::GetEntityClass()
{
  return g_pEntityCPropHMDAvatarClass;
}


// CPropHMDAvatar::Schema_DynamicBinding  (line 26, @0x0000000002370ae0, libserver.so)
// globals: CPropHMDAvatar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropHMDAvatar::Schema_DynamicBinding(const CPropHMDAvatar *const this)
{
  return CPropHMDAvatar::s_pSchemaBinding;
}


// CPropHMDAvatar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x0000000002370af0, libserver.so)
// globals: CPropHMDAvatar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropHMDAvatar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropHMDAvatar::CEntityInstanceEntityClass *const this)
{
  return CPropHMDAvatar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropHMDAvatar::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x0000000002370b00, libserver.so)  // inlines: Destruct<CPropHMDAvatar>
void __fastcall CPropHMDAvatar::CEntityInstanceEntityClass::DestructInstance(
        CPropHMDAvatar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropHMDAvatar::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x0000000002370b20, libserver.so)
void __fastcall CPropHMDAvatar::CEntityInstanceEntityClass::FreeInstance(
        CPropHMDAvatar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropHMDAvatar::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x0000000002370b40, libserver.so)
bool __fastcall CPropHMDAvatar::CEntityInstanceEntityClass::CanAllocate(
        const CPropHMDAvatar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropHMDAvatar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x0000000002370b50, libserver.so)
// globals: CPropHMDAvatar::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropHMDAvatar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropHMDAvatar::CEntityInstanceEntityClass *const this)
{
  return CPropHMDAvatar::s_pSchemaBinding;
}


// CPropHMDAvatar::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x00000000023726d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropHMDAvatar::CEntityInstanceEntityClass::AllocateInstance(
        CPropHMDAvatar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1368);
  memset(v1, 0, 0x558u);
  return v1;
}


// CPropHMDAvatar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000002374cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropHMDAvatar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropHMDAvatar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPropHMDAvatar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000002374ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropHMDAvatar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropHMDAvatar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropHMDAvatar::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x0000000002377800, libserver.so)  // inlines: Construct<CPropHMDAvatar>
// calls: CPropHMDAvatar::CPropHMDAvatar
CEntityInstance *__fastcall CPropHMDAvatar::CEntityInstanceEntityClass::ConstructInstance(
        CPropHMDAvatar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPropHMDAvatar::CPropHMDAvatar(p);
  return p;
}


// CPropHMDAvatar::GetEntityClassInternal  (line 26, @0x000000000237f1a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CPropHMDAvatar>, CPropVRTrackedObject::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_hmd_avatar", "CPropHMDAvatar"
// globals: `guard variable for'CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass, CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropHMDAvatar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo, CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo
CEntityClass *__cdecl CPropHMDAvatar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass) != 0 )
  {
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_designerName.u.m_Id = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass._vptr_CEntityClass = off_3F79390;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_ComponentOffsets.m_Size = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_AllHelpers.m_Size = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classInputs.m_Size = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classOutputs.m_Size = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_requiredEHandle.m_Index = -1;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_hNetworkSerializer = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pBaseClassInfo = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pClassInfo = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_flags = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_nAllHelpersFlags = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pScriptClassDesc = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pInputs = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_nInputCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pOutputs = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_nOutputCount = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pGameClass = 0;
    CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass._vptr_CEntityClass = off_4099430;
    __cxa_guard_release(&`guard variable for'CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass);
    __cxa_atexit(
      CPropHMDAvatar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropHMDAvatarClass != 0 )
    return &CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass;
  if ( `guard variable for'CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo) != 0 )
  {
    EntityClassInfo = CPropVRTrackedObject::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo,
      "CPropHMDAvatar",
      "prop_hmd_avatar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo);
  }
  CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pClassInfo = &CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo;
  CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pBaseClassInfo = CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo.m_pBaseClassInfo;
  g_pEntityCPropHMDAvatarClass = &CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass;
  CPropHMDAvatar::GetEntityClassInfo(void)::g_EntityCPropHMDAvatarClassInfo.m_pClass = &CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass;
  CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass.m_pScriptClassDesc = GetScriptDesc<CPropHMDAvatar>(0);
  g_pEntityCPropHMDAvatarClass->m_pComponentOverrides = 0;
  return &CPropHMDAvatar::GetEntityClassInternal(void)::g_EntityCPropHMDAvatarClass;
}


// CPropHMDAvatar::IsHMDAvatar  (line 31, @0x0000000002370b60, libserver.so)
bool __fastcall CPropHMDAvatar::IsHMDAvatar(const CPropHMDAvatar *const this)
{
  return 1;
}


// CPropHMDAvatar::GetCollisionMins  (line 57, @0x0000000002370b70, libserver.so)
Vector __fastcall CPropHMDAvatar::GetCollisionMins(const CPropHMDAvatar *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = -2.0;
  *&result.x = 0xC0000000C0000000LL;
  return result;
}


// CPropHMDAvatar::GetCollisionMaxs  (line 58, @0x0000000002370b90, libserver.so)
Vector __fastcall CPropHMDAvatar::GetCollisionMaxs(const CPropHMDAvatar *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = 2.0;
  *&result.x = 0x4000000040000000LL;
  return result;
}


