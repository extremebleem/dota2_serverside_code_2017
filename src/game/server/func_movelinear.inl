
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncMoveLinear::~CFuncMoveLinear  (line 17, @0x0000000002246e90, libserver.so)  // inlines: ~CBaseToggle
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncMoveLinear::~CFuncMoveLinear(CFuncMoveLinear *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncMoveLinear::~CFuncMoveLinear  (line 17, @0x0000000002246eb0, libserver.so)  // inlines: ~CBaseToggle, ~CFuncMoveLinear
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncMoveLinear::~CFuncMoveLinear(CFuncMoveLinear *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncMoveLinear::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000001fea700, libserver.so)
// globals: CFuncMoveLinear::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncMoveLinear::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncMoveLinear::CEntityInstanceEntityClass *const this)
{
  return CFuncMoveLinear::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncMoveLinear::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000001fea710, libserver.so)  // inlines: Destruct<CFuncMoveLinear>
void __fastcall CFuncMoveLinear::CEntityInstanceEntityClass::DestructInstance(
        CFuncMoveLinear::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncMoveLinear::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000001fea730, libserver.so)
void __fastcall CFuncMoveLinear::CEntityInstanceEntityClass::FreeInstance(
        CFuncMoveLinear::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncMoveLinear::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000001fea750, libserver.so)
bool __fastcall CFuncMoveLinear::CEntityInstanceEntityClass::CanAllocate(
        const CFuncMoveLinear::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncMoveLinear::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000001fea760, libserver.so)
// globals: CFuncMoveLinear::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncMoveLinear::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncMoveLinear::CEntityInstanceEntityClass *const this)
{
  return CFuncMoveLinear::s_pSchemaBinding;
}


// CFuncMoveLinear::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000001febc20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncMoveLinear::CEntityInstanceEntityClass::AllocateInstance(
        CFuncMoveLinear::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1392);
  memset(v1, 0, 0x570u);
  return v1;
}


// CFuncMoveLinear::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000001fec280, libserver.so)  // inlines: CEntityIOOutput, CFuncMoveLinear, CUtlSymbolLarge, Construct<CFuncMoveLinear>
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CFuncMoveLinear::CEntityInstanceEntityClass::ConstructInstance(
        CFuncMoveLinear::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseToggle::CBaseToggle(p);
    *(p + 162) = 0;
    *(p + 163) = 0;
    *(p + 164) = 0;
    *p = &off_40492F0;
    *(p + 168) = off_3F7C190;
    *(p + 171) = off_3F7C190;
  }
  return p;
}


// CFuncMoveLinear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000001fecd60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncMoveLinear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncMoveLinear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncMoveLinear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000001fecd80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncMoveLinear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncMoveLinear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncMoveLinear::GetEntityClassInternal  (line 19, @0x0000000001ff4c80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "func_movelinear", "CFuncMoveLinear", "CBaseToggle"
// globals: `guard variable for'CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass, CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncMoveLinear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo, CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo (9 total)
CEntityClass *__cdecl CFuncMoveLinear::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass) != 0 )
  {
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_designerName.u.m_Id = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass._vptr_CEntityClass = off_3F79390;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_ComponentOffsets.m_Size = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_AllHelpers.m_Size = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classInputs.m_Size = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classOutputs.m_Size = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_requiredEHandle.m_Index = -1;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_hNetworkSerializer = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pBaseClassInfo = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pClassInfo = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_flags = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_nAllHelpersFlags = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pScriptClassDesc = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pInputs = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_nInputCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pOutputs = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_nOutputCount = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pGameClass = 0;
    CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass._vptr_CEntityClass = off_3FDA3B0;
    __cxa_guard_release(&`guard variable for'CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass);
    __cxa_atexit(
      CFuncMoveLinear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncMoveLinearClass != 0 )
    return &CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass;
  if ( `guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo,
      "CFuncMoveLinear",
      "func_movelinear",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo);
  }
  CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pClassInfo = &CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo;
  CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pBaseClassInfo = CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncMoveLinearClass = &CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass;
  CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo.m_pClass = &CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass;
  CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncMoveLinearClass->m_pComponentOverrides = 0;
  return &CFuncMoveLinear::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearClass;
}


// CFuncMoveLinear::GetEntityClass  (line 19, @0x0000000002245a10, libserver.so)
CEntityClass *__cdecl CFuncMoveLinear::GetEntityClass()
{
  return g_pEntityCFuncMoveLinearClass;
}


// CFuncMoveLinear::Schema_DynamicBinding  (line 19, @0x0000000002247410, libserver.so)
// calls: CFuncMoveLinear::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncMoveLinear::Schema_DynamicBinding(const CFuncMoveLinear *const this)
{
  CFuncMoveLinear::Schema_VerifyBindingIsRegistered();
  return CFuncMoveLinear::s_pSchemaBinding;
}


// CFuncMoveLinear::GetEntityClassInfo  (line 19, @0x000000000224bc70, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CFuncWaterAnalog::GetEntityClassInternal, CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal, CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::InitOptionalTables
// strings: "func_movelinear", "CFuncMoveLinear", "CBaseToggle"
// globals: `guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo, CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CFuncMoveLinear::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo != 0 )
    return &CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo) == 0 )
    return &CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo;
  if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
      "CBaseToggle",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo,
    "CFuncMoveLinear",
    "func_movelinear",
    0,
    &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  __cxa_guard_release(&`guard variable for'CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo);
  return &CFuncMoveLinear::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearClassInfo;
}


