
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropDoorRotating::GetEntityClass  (line 48, @0x0000000002370990, libserver.so)
CEntityClass *__cdecl CPropDoorRotating::GetEntityClass()
{
  return g_pEntityCPropDoorRotatingClass;
}


// CPropDoorRotating::Schema_DynamicBinding  (line 48, @0x00000000023709a0, libserver.so)
// globals: CPropDoorRotating::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropDoorRotating::Schema_DynamicBinding(const CPropDoorRotating *const this)
{
  return CPropDoorRotating::s_pSchemaBinding;
}


// CPropDoorRotating::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 48, @0x00000000023709b0, libserver.so)
// globals: CPropDoorRotating::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropDoorRotating::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropDoorRotating::CEntityInstanceEntityClass *const this)
{
  return CPropDoorRotating::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropDoorRotating::CEntityInstanceEntityClass::DestructInstance  (line 48, @0x00000000023709c0, libserver.so)  // inlines: Destruct<CPropDoorRotating>
void __fastcall CPropDoorRotating::CEntityInstanceEntityClass::DestructInstance(
        CPropDoorRotating::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropDoorRotating::CEntityInstanceEntityClass::FreeInstance  (line 48, @0x00000000023709e0, libserver.so)
void __fastcall CPropDoorRotating::CEntityInstanceEntityClass::FreeInstance(
        CPropDoorRotating::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropDoorRotating::CEntityInstanceEntityClass::CanAllocate  (line 48, @0x0000000002370a00, libserver.so)
bool __fastcall CPropDoorRotating::CEntityInstanceEntityClass::CanAllocate(
        const CPropDoorRotating::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropDoorRotating::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 48, @0x0000000002370a10, libserver.so)
// globals: CPropDoorRotating::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropDoorRotating::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropDoorRotating::CEntityInstanceEntityClass *const this)
{
  return CPropDoorRotating::s_pSchemaBinding;
}


// CPropDoorRotating::CEntityInstanceEntityClass::AllocateInstance  (line 48, @0x0000000002372650, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropDoorRotating::CEntityInstanceEntityClass::AllocateInstance(
        CPropDoorRotating::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2416);
  memset(v1, 0, 0x970u);
  return v1;
}


// CPropDoorRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002374d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropDoorRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropDoorRotating::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPropDoorRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002374d80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropDoorRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropDoorRotating::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropDoorRotating::GetEntityClassInfo  (line 48, @0x0000000002376f90, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDynamicProp::GetEntityClassInfo
// callers: CPropDoorRotatingBreakable::GetEntityClassInternal
// strings: "prop_door_rotating", "CPropDoorRotating", "CBasePropDoor"
// globals: `guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo, CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo, `guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo, CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo
CEntityClassInfo *__cdecl CPropDoorRotating::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo != 0 )
    return &CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo) == 0 )
    return &CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo;
  if ( `guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo) != 0 )
  {
    EntityClassInfo = CDynamicProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo,
      "CBasePropDoor",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo,
    "CPropDoorRotating",
    "prop_door_rotating",
    0,
    &CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo);
  __cxa_guard_release(&`guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo);
  return &CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo;
}


// CPropDoorRotating::CEntityInstanceEntityClass::ConstructInstance  (line 48, @0x0000000002377050, libserver.so)  // inlines: CEntityHandle, CHandle, CPropDoorRotating, Construct<CPropDoorRotating>
// calls: CBasePropDoor::CBasePropDoor
CEntityInstance *__fastcall CPropDoorRotating::CEntityInstanceEntityClass::ConstructInstance(
        CPropDoorRotating::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBasePropDoor::CBasePropDoor(p);
    *(p + 603) = -1;
    *p = &off_4097850;
    *(p + 152) = off_4098270;
    *(p + 153) = &off_4098388;
    *(p + 219) = off_40983F0;
  }
  return p;
}


// CPropDoorRotating::GetEntityClassInternal  (line 48, @0x000000000237c120, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDynamicProp::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_door_rotating", "CPropDoorRotating", "CBasePropDoor"
// globals: `guard variable for'CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass, CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropDoorRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo, CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo, `guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo (9 total)
CEntityClass *__cdecl CPropDoorRotating::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass) != 0 )
  {
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_designerName.u.m_Id = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass._vptr_CEntityClass = off_3F79390;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_ComponentOffsets.m_Size = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_AllHelpers.m_Size = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classInputs.m_Size = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classOutputs.m_Size = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_requiredEHandle.m_Index = -1;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_hNetworkSerializer = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pBaseClassInfo = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pClassInfo = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_flags = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_nAllHelpersFlags = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pScriptClassDesc = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pInputs = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_nInputCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pOutputs = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_nOutputCount = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pGameClass = 0;
    CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass._vptr_CEntityClass = off_4096B50;
    __cxa_guard_release(&`guard variable for'CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass);
    __cxa_atexit(
      CPropDoorRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropDoorRotatingClass != 0 )
    return &CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass;
  if ( `guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo) != 0 )
  {
    if ( `guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo) != 0 )
    {
      EntityClassInfo = CDynamicProp::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo,
        "CBasePropDoor",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo,
      "CPropDoorRotating",
      "prop_door_rotating",
      0,
      &CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo);
    __cxa_guard_release(&`guard variable for'CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo);
  }
  CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pClassInfo = &CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo;
  CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pBaseClassInfo = CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo.m_pBaseClassInfo;
  g_pEntityCPropDoorRotatingClass = &CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass;
  CPropDoorRotating::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingClassInfo.m_pClass = &CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass;
  CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPropDoorRotatingClass->m_pComponentOverrides = 0;
  return &CPropDoorRotating::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingClass;
}


// CPropDoorRotating::OverridePropdata  (line 96, @0x0000000002370a20, libserver.so)
bool __fastcall CPropDoorRotating::OverridePropdata(CPropDoorRotating *const this)
{
  return 0;
}


// CPropDoorRotatingBreakable::~CPropDoorRotatingBreakable  (line 148, @0x0000000002378990, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >::RemoveAll, CPropDoorRotating::~CPropDoorRotating, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CPropDoorRotatingBreakable::~CPropDoorRotatingBreakable(CPropDoorRotatingBreakable *const this)
{
  this->_vptr_IHandleEntity = &off_4098430;
  this->_vptr_IBreakableWithPropData = off_4098E50;
  this->_vptr_IPlayerPickupVPhysics = &off_4098F68;
  this->_vptr_IGameEventListener2 = off_4098FD0;
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int>>::RemoveAll(&this->m_damageStates);
  if ( (this->m_damageStates.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_damageStates.m_Memory),
        (this->m_damageStates.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CPropDoorRotating::~CPropDoorRotating(this);
  }
  else
  {
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_damageStates.m_Memory);
    CPropDoorRotating::~CPropDoorRotating(this);
  }
}


// CPropDoorRotatingBreakable::~CPropDoorRotatingBreakable  (line 148, @0x0000000002378b20, libserver.so)  // inlines: Purge, ~CPropDoorRotatingBreakable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >::RemoveAll, CPropDoorRotating::~CPropDoorRotating, CBaseEntity::operator delete, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CPropDoorRotatingBreakable::~CPropDoorRotatingBreakable(CPropDoorRotatingBreakable *const this)
{
  this->_vptr_IHandleEntity = &off_4098430;
  this->_vptr_IBreakableWithPropData = off_4098E50;
  this->_vptr_IPlayerPickupVPhysics = &off_4098F68;
  this->_vptr_IGameEventListener2 = off_4098FD0;
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int>>::RemoveAll(&this->m_damageStates);
  if ( (this->m_damageStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_damageStates.m_Memory);
    if ( (this->m_damageStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_damageStates.m_Memory);
  }
  CPropDoorRotating::~CPropDoorRotating(this);
  CBaseEntity::operator delete(this);
}


// CPropDoorRotatingBreakable::GetEntityClass  (line 153, @0x0000000002370a30, libserver.so)
CEntityClass *__cdecl CPropDoorRotatingBreakable::GetEntityClass()
{
  return g_pEntityCPropDoorRotatingBreakableClass;
}


// CPropDoorRotatingBreakable::Schema_DynamicBinding  (line 153, @0x0000000002370a40, libserver.so)
// globals: CPropDoorRotatingBreakable::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropDoorRotatingBreakable::Schema_DynamicBinding(
        const CPropDoorRotatingBreakable *const this)
{
  return CPropDoorRotatingBreakable::s_pSchemaBinding;
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 153, @0x0000000002370a50, libserver.so)
// globals: CPropDoorRotatingBreakable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this)
{
  return CPropDoorRotatingBreakable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::DestructInstance  (line 153, @0x0000000002370a60, libserver.so)  // inlines: Destruct<CPropDoorRotatingBreakable>
void __fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::DestructInstance(
        CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::FreeInstance  (line 153, @0x0000000002370a80, libserver.so)
void __fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::FreeInstance(
        CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::CanAllocate  (line 153, @0x0000000002370aa0, libserver.so)
bool __fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::CanAllocate(
        const CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 153, @0x0000000002370ab0, libserver.so)
// globals: CPropDoorRotatingBreakable::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this)
{
  return CPropDoorRotatingBreakable::s_pSchemaBinding;
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::AllocateInstance  (line 153, @0x0000000002372690, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::AllocateInstance(
        CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2448);
  memset(v1, 0, 0x990u);
  return v1;
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002374db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002375140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropDoorRotatingBreakable::CEntityInstanceEntityClass::ConstructInstance  (line 153, @0x00000000023770c0, libserver.so)  // inlines: CEntityHandle, CHandle, CPropDoorRotating, CPropDoorRotatingBreakable, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CPropDoorRotatingBreakable>
// calls: CBasePropDoor::CBasePropDoor
CEntityInstance *__fastcall CPropDoorRotatingBreakable::CEntityInstanceEntityClass::ConstructInstance(
        CPropDoorRotatingBreakable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBasePropDoor::CBasePropDoor(p);
    *(p + 603) = -1;
    *p = &off_4098430;
    *(p + 152) = off_4098E50;
    *(p + 153) = &off_4098F68;
    *(p + 219) = off_4098FD0;
    *(p + 606) = 0;
    *(p + 304) = 0;
    *(p + 610) = 0;
    *(p + 611) = 0;
  }
  return p;
}


// CPropDoorRotatingBreakable::GetEntityClassInternal  (line 153, @0x000000000237cb50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CPropDoorRotating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPropDoorRotatingBreakable"
// globals: `guard variable for'CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass, CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropDoorRotatingBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo, CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo
CEntityClass *__cdecl CPropDoorRotatingBreakable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass) != 0 )
  {
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_designerName.u.m_Id = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass._vptr_CEntityClass = off_3F79390;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_ComponentOffsets.m_Size = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_AllHelpers.m_Size = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classInputs.m_Size = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classOutputs.m_Size = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_requiredEHandle.m_Index = -1;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_hNetworkSerializer = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pBaseClassInfo = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pClassInfo = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_flags = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_nAllHelpersFlags = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pScriptClassDesc = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pInputs = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_nInputCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pOutputs = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_nOutputCount = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pGameClass = 0;
    CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass._vptr_CEntityClass = off_4096BD0;
    __cxa_guard_release(&`guard variable for'CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass);
    __cxa_atexit(
      CPropDoorRotatingBreakable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropDoorRotatingBreakableClass != 0 )
    return &CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass;
  if ( `guard variable for'CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo) != 0 )
  {
    EntityClassInfo = CPropDoorRotating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo,
      "CPropDoorRotatingBreakable",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo);
  }
  CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pClassInfo = &CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo;
  CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pBaseClassInfo = CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo.m_pBaseClassInfo;
  g_pEntityCPropDoorRotatingBreakableClass = &CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass;
  CPropDoorRotatingBreakable::GetEntityClassInfo(void)::g_EntityCPropDoorRotatingBreakableClassInfo.m_pClass = &CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass;
  CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPropDoorRotatingBreakableClass->m_pComponentOverrides = 0;
  return &CPropDoorRotatingBreakable::GetEntityClassInternal(void)::g_EntityCPropDoorRotatingBreakableClass;
}


