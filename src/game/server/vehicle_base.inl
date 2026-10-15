
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFourWheelServerVehicle::Schema_DynamicBinding  (line 44, @0x0000000002410bf0, libserver.so)
// calls: CFourWheelServerVehicle::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFourWheelServerVehicle::Schema_DynamicBinding(
        const CFourWheelServerVehicle *const this)
{
  CFourWheelServerVehicle::Schema_VerifyBindingIsRegistered();
  return CFourWheelServerVehicle::s_pSchemaBinding;
}


// CFourWheelServerVehicle::~CFourWheelServerVehicle  (line 49, @0x0000000002413870, libserver.so)
// calls: CBaseServerVehicle::~CBaseServerVehicle
void __fastcall CFourWheelServerVehicle::~CFourWheelServerVehicle(CFourWheelServerVehicle *const this)
{
  this->_vptr_IVehicle = &off_40D1C90;
  CBaseServerVehicle::~CBaseServerVehicle(this);
}


// CFourWheelServerVehicle::~CFourWheelServerVehicle  (line 49, @0x0000000002413890, libserver.so)  // inlines: ~CFourWheelServerVehicle
// calls: CBaseServerVehicle::~CBaseServerVehicle, operator delete
void __fastcall CFourWheelServerVehicle::~CFourWheelServerVehicle(CFourWheelServerVehicle *const this)
{
  this->_vptr_IVehicle = &off_40D1C90;
  CBaseServerVehicle::~CBaseServerVehicle(this);
  operator delete(this);
}


// CPropVehicle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 90, @0x00000000020192a0, libserver.so)
// globals: CPropVehicle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropVehicle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropVehicle::CEntityInstanceEntityClass *const this)
{
  return CPropVehicle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropVehicle::CEntityInstanceEntityClass::DestructInstance  (line 90, @0x00000000020192b0, libserver.so)  // inlines: Destruct<CPropVehicle>
void __fastcall CPropVehicle::CEntityInstanceEntityClass::DestructInstance(
        CPropVehicle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropVehicle::CEntityInstanceEntityClass::FreeInstance  (line 90, @0x00000000020192d0, libserver.so)
void __fastcall CPropVehicle::CEntityInstanceEntityClass::FreeInstance(
        CPropVehicle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropVehicle::CEntityInstanceEntityClass::CanAllocate  (line 90, @0x00000000020192f0, libserver.so)
bool __fastcall CPropVehicle::CEntityInstanceEntityClass::CanAllocate(
        const CPropVehicle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropVehicle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 90, @0x0000000002019300, libserver.so)
// globals: CPropVehicle::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropVehicle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropVehicle::CEntityInstanceEntityClass *const this)
{
  return CPropVehicle::s_pSchemaBinding;
}


// CPropVehicle::CEntityInstanceEntityClass::AllocateInstance  (line 90, @0x000000000201acc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropVehicle::CEntityInstanceEntityClass::AllocateInstance(
        CPropVehicle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1608);
  memset(v1, 0, 0x648u);
  return v1;
}


// CPropVehicle::CEntityInstanceEntityClass::ConstructInstance  (line 90, @0x000000000201af30, libserver.so)  // inlines: Construct<CPropVehicle>
// calls: CPropVehicle::CPropVehicle
CEntityInstance *__fastcall CPropVehicle::CEntityInstanceEntityClass::ConstructInstance(
        CPropVehicle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPropVehicle::CPropVehicle(p);
  return p;
}


// CPropVehicle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x000000000201dbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropVehicle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVehicle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPropVehicle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x000000000201dc10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropVehicle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVehicle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropVehicle::GetEntityClassInfo  (line 90, @0x000000000201ff80, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseAnimating::GetEntityClassInfo
// callers: CPropVehicleDriveable::GetEntityClassInternal
// strings: "prop_vehicle", "CPropVehicle", "CBaseProp"
// globals: `guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo, CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo, `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo, CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo
CEntityClassInfo *__cdecl CPropVehicle::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo != 0 )
    return &CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo) == 0 )
    return &CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo;
  if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
      "CBaseProp",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo,
    "CPropVehicle",
    "prop_vehicle",
    0,
    &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
  __cxa_guard_release(&`guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo);
  return &CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo;
}


// CPropVehicle::GetEntityClassInternal  (line 90, @0x0000000002022610, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "prop_vehicle", "CPropVehicle", "CBaseProp"
// globals: `guard variable for'CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass, CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropVehicle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo, CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo, `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo (9 total)
CEntityClass *__cdecl CPropVehicle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass) != 0 )
  {
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_designerName.u.m_Id = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass._vptr_CEntityClass = off_3F79390;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_ComponentOffsets.m_Size = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_AllHelpers.m_Size = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classInputs.m_Size = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classOutputs.m_Size = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_requiredEHandle.m_Index = -1;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_hNetworkSerializer = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pBaseClassInfo = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pClassInfo = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_flags = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_nAllHelpersFlags = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pScriptClassDesc = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pInputs = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_nInputCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pOutputs = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_nOutputCount = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pGameClass = 0;
    CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass._vptr_CEntityClass = off_3FE4130;
    __cxa_guard_release(&`guard variable for'CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass);
    __cxa_atexit(
      CPropVehicle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropVehicleClass != 0 )
    return &CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass;
  if ( `guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
        "CBaseProp",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo,
      "CPropVehicle",
      "prop_vehicle",
      0,
      &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    __cxa_guard_release(&`guard variable for'CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo);
  }
  CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pClassInfo = &CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo;
  CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pBaseClassInfo = CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo.m_pBaseClassInfo;
  g_pEntityCPropVehicleClass = &CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass;
  CPropVehicle::GetEntityClassInfo(void)::g_EntityCPropVehicleClassInfo.m_pClass = &CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass;
  CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPropVehicleClass->m_pComponentOverrides = 0;
  return &CPropVehicle::GetEntityClassInternal(void)::g_EntityCPropVehicleClass;
}


// CPropVehicle::GetEntityClass  (line 90, @0x00000000024102a0, libserver.so)
CEntityClass *__cdecl CPropVehicle::GetEntityClass()
{
  return g_pEntityCPropVehicleClass;
}


// CPropVehicle::Schema_DynamicBinding  (line 90, @0x0000000002410c10, libserver.so)
// calls: CPropVehicle::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPropVehicle::Schema_DynamicBinding(const CPropVehicle *const this)
{
  CPropVehicle::Schema_VerifyBindingIsRegistered();
  return CPropVehicle::s_pSchemaBinding;
}


// CPropVehicle::DampenEyePosition  (line 114, @0x00000000024102b0, libserver.so)
void __fastcall CPropVehicle::DampenEyePosition(
        CPropVehicle *const this,
        Vector *const vecVehicleEyePos,
        QAngle *const vecVehicleEyeAngles)
{
  ;
}


// CPropVehicle::GetUprightStrength  (line 139, @0x00000000024102c0, libserver.so)
float __fastcall CPropVehicle::GetUprightStrength(CPropVehicle *const this)
{
  return 8.0;
}


// CPropVehicle::GetUprightTime  (line 140, @0x00000000024102d0, libserver.so)
float __fastcall CPropVehicle::GetUprightTime(CPropVehicle *const this)
{
  return 5.0;
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 186, @0x0000000002019310, libserver.so)
// globals: CPropVehicleDriveable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropVehicleDriveable::CEntityInstanceEntityClass *const this)
{
  return CPropVehicleDriveable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::DestructInstance  (line 186, @0x0000000002019320, libserver.so)  // inlines: Destruct<CPropVehicleDriveable>
void __fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::DestructInstance(
        CPropVehicleDriveable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::FreeInstance  (line 186, @0x0000000002019340, libserver.so)
void __fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::FreeInstance(
        CPropVehicleDriveable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::CanAllocate  (line 186, @0x0000000002019360, libserver.so)
bool __fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::CanAllocate(
        const CPropVehicleDriveable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 186, @0x0000000002019370, libserver.so)
// globals: CPropVehicleDriveable::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropVehicleDriveable::CEntityInstanceEntityClass *const this)
{
  return CPropVehicleDriveable::s_pSchemaBinding;
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::AllocateInstance  (line 186, @0x000000000201ad00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::AllocateInstance(
        CPropVehicleDriveable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1864);
  memset(v1, 0, 0x748u);
  return v1;
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::ConstructInstance  (line 186, @0x000000000201af60, libserver.so)  // inlines: Construct<CPropVehicleDriveable>
// calls: CPropVehicleDriveable::CPropVehicleDriveable
CEntityInstance *__fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::ConstructInstance(
        CPropVehicleDriveable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPropVehicleDriveable::CPropVehicleDriveable(p);
  return p;
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 186, @0x000000000201dc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVehicleDriveable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPropVehicleDriveable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 186, @0x000000000201dc60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropVehicleDriveable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropVehicleDriveable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropVehicleDriveable::GetEntityClassInternal  (line 186, @0x00000000020236e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CPropVehicle::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "prop_vehicle_driveable", "CPropVehicleDriveable"
// globals: `guard variable for'CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass, CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropVehicleDriveable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo, CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo
CEntityClass *__cdecl CPropVehicleDriveable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass) != 0 )
  {
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_designerName.u.m_Id = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass._vptr_CEntityClass = off_3F79390;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_ComponentOffsets.m_Size = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_AllHelpers.m_Size = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classInputs.m_Size = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classOutputs.m_Size = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_requiredEHandle.m_Index = -1;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_hNetworkSerializer = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pBaseClassInfo = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pClassInfo = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_flags = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_nAllHelpersFlags = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pScriptClassDesc = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pInputs = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_nInputCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pOutputs = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_nOutputCount = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pGameClass = 0;
    CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass._vptr_CEntityClass = off_3FE41B0;
    __cxa_guard_release(&`guard variable for'CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass);
    __cxa_atexit(
      CPropVehicleDriveable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropVehicleDriveableClass != 0 )
    return &CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass;
  if ( `guard variable for'CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo) != 0 )
  {
    EntityClassInfo = CPropVehicle::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo,
      "CPropVehicleDriveable",
      "prop_vehicle_driveable",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo);
  }
  CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pClassInfo = &CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo;
  CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pBaseClassInfo = CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo.m_pBaseClassInfo;
  g_pEntityCPropVehicleDriveableClass = &CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass;
  CPropVehicleDriveable::GetEntityClassInfo(void)::g_EntityCPropVehicleDriveableClassInfo.m_pClass = &CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass;
  CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPropVehicleDriveableClass->m_pComponentOverrides = 0;
  return &CPropVehicleDriveable::GetEntityClassInternal(void)::g_EntityCPropVehicleDriveableClass;
}


// CPropVehicleDriveable::GetEntityClass  (line 186, @0x00000000024102e0, libserver.so)
CEntityClass *__cdecl CPropVehicleDriveable::GetEntityClass()
{
  return g_pEntityCPropVehicleDriveableClass;
}


// CPropVehicleDriveable::Schema_DynamicBinding  (line 186, @0x0000000002410c30, libserver.so)
// calls: CPropVehicleDriveable::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPropVehicleDriveable::Schema_DynamicBinding(
        const CPropVehicleDriveable *const this)
{
  CPropVehicleDriveable::Schema_VerifyBindingIsRegistered();
  return CPropVehicleDriveable::s_pSchemaBinding;
}


// CPropVehicleDriveable::ObjectCaps  (line 198, @0x0000000002410890, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPropVehicleDriveable::ObjectCaps(CPropVehicleDriveable *const this)
{
  return CBaseEntity::ObjectCaps(this) | 1;
}


// CPropVehicleDriveable::IsVehicleBodyInWater  (line 224, @0x00000000024102f0, libserver.so)
bool __fastcall CPropVehicleDriveable::IsVehicleBodyInWater(CPropVehicleDriveable *const this)
{
  return 0;
}


// CPropVehicleDriveable::GetDriver  (line 233, @0x0000000002411d40, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, operator CBaseEntity*, operator CBasePlayer*, operator bool
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CPropVehicleDriveable::GetDriver(CPropVehicleDriveable *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx

  m_Index = this->m_hNPCDriver.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hNPCDriver.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hNPCDriver.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index )
        return v3->m_pInstance;
    }
  }
  if ( this->m_hPlayer.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hPlayer.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hPlayer.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  result = 0;
  if ( v6 + 2 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v5 & 0x1FF];
      if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
        return v9->m_pInstance;
    }
  }
  return result;
}


// CPropVehicleDriveable::ItemPostFrame  (line 234, @0x0000000002410300, libserver.so)
void __fastcall CPropVehicleDriveable::ItemPostFrame(CPropVehicleDriveable *const this, CBasePlayer *pPlayer)
{
  ;
}


// CPropVehicleDriveable::ProcessMovement  (line 236, @0x0000000002410320, libserver.so)
void __fastcall CPropVehicleDriveable::ProcessMovement(
        CPropVehicleDriveable *const this,
        CBasePlayer *pPlayer,
        CMoveData *pMoveData)
{
  ;
}


// CPropVehicleDriveable::FinishMove  (line 237, @0x0000000002410340, libserver.so)
void __fastcall CPropVehicleDriveable::FinishMove(
        CPropVehicleDriveable *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        CMoveData *move)
{
  ;
}


// CPropVehicleDriveable::SetVehicleEntryAnim  (line 240, @0x0000000002411780, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CPropVehicleDriveable::SetVehicleEntryAnim(CPropVehicleDriveable *const this, bool bOn)
{
  if ( this->m_bEnterAnimOn.m_Value != bOn )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnterAnimOn.m_Value = bOn;
  }
}


// CPropVehicleDriveable::SetVehicleExitAnim  (line 241, @0x0000000002411ba0, libserver.so)  // inlines: NetworkStateChanged, Set, operator!=, operator=, operator=<bool>
void __fastcall CPropVehicleDriveable::SetVehicleExitAnim(
        CPropVehicleDriveable *const this,
        bool bOn,
        Vector vecEyeExitEndpoint)
{
  float y; // xmm0_4
  vec_t v6; // [rsp+4h] [rbp-2Ch]
  vec_t z; // [rsp+8h] [rbp-28h]
  vec_t v8; // [rsp+Ch] [rbp-24h]
  vec_t v9; // [rsp+Ch] [rbp-24h]
  float x; // [rsp+10h] [rbp-20h]

  x = vecEyeExitEndpoint.x;
  y = vecEyeExitEndpoint.y;
  if ( this->m_bExitAnimOn.m_Value != bOn )
  {
    z = vecEyeExitEndpoint.z;
    v8 = vecEyeExitEndpoint.y;
    (*(this->_vptr_IHandleEntity + 22))(this, 1853, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vecEyeExitEndpoint.z = z;
    this->m_bExitAnimOn.m_Value = bOn;
    y = v8;
  }
  if ( bOn
    && (x != this->m_vecEyeExitEndpoint.m_Value.x
     || y != this->m_vecEyeExitEndpoint.m_Value.y
     || vecEyeExitEndpoint.z != this->m_vecEyeExitEndpoint.m_Value.z) )
  {
    v6 = vecEyeExitEndpoint.z;
    v9 = y;
    (*(this->_vptr_IHandleEntity + 22))(this, 1808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecEyeExitEndpoint.m_Value.x = x;
    this->m_vecEyeExitEndpoint.m_Value.y = v9;
    this->m_vecEyeExitEndpoint.m_Value.z = v6;
  }
}


// CPropVehicleDriveable::AllowBlockedExit  (line 244, @0x0000000002410360, libserver.so)
bool __fastcall CPropVehicleDriveable::AllowBlockedExit(
        CPropVehicleDriveable *const this,
        CBaseCombatCharacter *pPassenger,
        int nRole)
{
  return 1;
}


// CPropVehicleDriveable::AllowMidairExit  (line 245, @0x0000000002410380, libserver.so)
bool __fastcall CPropVehicleDriveable::AllowMidairExit(
        CPropVehicleDriveable *const this,
        CBaseCombatCharacter *pPassenger,
        int nRole)
{
  return 0;
}


// CPropVehicleDriveable::PreExitVehicle  (line 246, @0x00000000024103a0, libserver.so)
void __fastcall CPropVehicleDriveable::PreExitVehicle(
        CPropVehicleDriveable *const this,
        CBaseCombatCharacter *pPassenger,
        int nRole)
{
  ;
}


// CPropVehicleDriveable::GetVehicleScriptName  (line 248, @0x00000000024103c0, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CPropVehicleDriveable::GetVehicleScriptName(UtlSymLargeId_t *a1, CPropVehicleDriveable *const this)
{
  *a1 = this->m_vehicleScript.u.m_Id;
  return a1;
}


// CPropVehicleDriveable::PassengerShouldReceiveDamage  (line 250, @0x00000000024103f0, libserver.so)
bool __fastcall CPropVehicleDriveable::PassengerShouldReceiveDamage(
        CPropVehicleDriveable *const this,
        CTakeDamageInfo *const info)
{
  return 1;
}


// CPropVehicleDriveable::GetServerVehicle  (line 253, @0x0000000002410410, libserver.so)
IServerVehicle *__fastcall CPropVehicleDriveable::GetServerVehicle(CPropVehicleDriveable *const this)
{
  return this->m_pServerVehicle;
}


// CPropVehicleDriveable::ShouldThink  (line 257, @0x0000000002410420, libserver.so)
bool __fastcall CPropVehicleDriveable::ShouldThink(CPropVehicleDriveable *const this)
{
  return (*(this->_vptr_IHandleEntity + 262))(this) != 0;
}


