
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncTrackTrain::~CFuncTrackTrain  (line 59, @0x00000000023e9310, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncTrackTrain::~CFuncTrackTrain(CFuncTrackTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40BBB70;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncTrackTrain::~CFuncTrackTrain  (line 59, @0x00000000023e9330, libserver.so)  // inlines: ~CFuncTrackTrain
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncTrackTrain::~CFuncTrackTrain(CFuncTrackTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40BBB70;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncTrackTrain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 61, @0x0000000002019200, libserver.so)
// globals: CFuncTrackTrain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrackTrain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncTrackTrain::CEntityInstanceEntityClass *const this)
{
  return CFuncTrackTrain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncTrackTrain::CEntityInstanceEntityClass::DestructInstance  (line 61, @0x0000000002019210, libserver.so)  // inlines: Destruct<CFuncTrackTrain>
void __fastcall CFuncTrackTrain::CEntityInstanceEntityClass::DestructInstance(
        CFuncTrackTrain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncTrackTrain::CEntityInstanceEntityClass::FreeInstance  (line 61, @0x0000000002019230, libserver.so)
void __fastcall CFuncTrackTrain::CEntityInstanceEntityClass::FreeInstance(
        CFuncTrackTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncTrackTrain::CEntityInstanceEntityClass::CanAllocate  (line 61, @0x0000000002019250, libserver.so)
bool __fastcall CFuncTrackTrain::CEntityInstanceEntityClass::CanAllocate(
        const CFuncTrackTrain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncTrackTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 61, @0x0000000002019260, libserver.so)
// globals: CFuncTrackTrain::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncTrackTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncTrackTrain::CEntityInstanceEntityClass *const this)
{
  return CFuncTrackTrain::s_pSchemaBinding;
}


// CFuncTrackTrain::CEntityInstanceEntityClass::AllocateInstance  (line 61, @0x000000000201ac80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncTrackTrain::CEntityInstanceEntityClass::AllocateInstance(
        CFuncTrackTrain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1384);
  memset(v1, 0, 0x568u);
  return v1;
}


// CFuncTrackTrain::CEntityInstanceEntityClass::ConstructInstance  (line 61, @0x000000000201af00, libserver.so)  // inlines: Construct<CFuncTrackTrain>
// calls: CFuncTrackTrain::CFuncTrackTrain
CEntityInstance *__fastcall CFuncTrackTrain::CEntityInstanceEntityClass::ConstructInstance(
        CFuncTrackTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncTrackTrain::CFuncTrackTrain(p);
  return p;
}


// CFuncTrackTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x000000000201dce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncTrackTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrackTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncTrackTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x000000000201dd00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncTrackTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrackTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncTrackTrain::GetEntityClassInternal  (line 61, @0x0000000002023040, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "func_tracktrain", "CFuncTrackTrain"
// globals: `guard variable for'CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass, CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncTrackTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo, CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo
CEntityClass *__cdecl CFuncTrackTrain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass) != 0 )
  {
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_designerName.u.m_Id = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass._vptr_CEntityClass = off_3F79390;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_ComponentOffsets.m_Size = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_AllHelpers.m_Size = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classInputs.m_Size = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classOutputs.m_Size = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_requiredEHandle.m_Index = -1;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_hNetworkSerializer = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pBaseClassInfo = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pClassInfo = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_flags = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_nAllHelpersFlags = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pScriptClassDesc = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pInputs = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_nInputCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pOutputs = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_nOutputCount = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pGameClass = 0;
    CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass._vptr_CEntityClass = off_3FE3410;
    __cxa_guard_release(&`guard variable for'CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass);
    __cxa_atexit(
      CFuncTrackTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncTrackTrainClass != 0 )
    return &CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass;
  if ( `guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo,
      "CFuncTrackTrain",
      "func_tracktrain",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo);
  }
  CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pClassInfo = &CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo;
  CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pBaseClassInfo = CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncTrackTrainClass = &CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass;
  CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo.m_pClass = &CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass;
  CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncTrackTrainClass->m_pComponentOverrides = 0;
  return &CFuncTrackTrain::GetEntityClassInternal(void)::g_EntityCFuncTrackTrainClass;
}


// CFuncTrackTrain::GetEntityClass  (line 61, @0x00000000023e56d0, libserver.so)
CEntityClass *__cdecl CFuncTrackTrain::GetEntityClass()
{
  return g_pEntityCFuncTrackTrainClass;
}


// CFuncTrackTrain::Schema_DynamicBinding  (line 61, @0x00000000023e95c0, libserver.so)
// calls: CFuncTrackTrain::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncTrackTrain::Schema_DynamicBinding(const CFuncTrackTrain *const this)
{
  CFuncTrackTrain::Schema_VerifyBindingIsRegistered();
  return CFuncTrackTrain::s_pSchemaBinding;
}


// CFuncTrackTrain::ObjectCaps  (line 122, @0x00000000023e8be0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CFuncTrackTrain::ObjectCaps(CFuncTrackTrain *const this)
{
  return CBaseEntity::ObjectCaps(this) | ((this->m_spawnflags.m_Value & 2) == 0 ? 0x18 : 0);
}


// CFuncTrackTrain::IsBaseTrain  (line 131, @0x00000000023e56e0, libserver.so)
bool __fastcall CFuncTrackTrain::IsBaseTrain(const CFuncTrackTrain *const this)
{
  return 1;
}


