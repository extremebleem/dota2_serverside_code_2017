
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncDistanceOccluder::~CFuncDistanceOccluder  (line 13, @0x0000000002246fd0, libserver.so)  // inlines: ~CFuncOccluder
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncDistanceOccluder::~CFuncDistanceOccluder(CFuncDistanceOccluder *const this)
{
  this->_vptr_IHandleEntity = &off_4049C30;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncDistanceOccluder::~CFuncDistanceOccluder  (line 13, @0x0000000002246ff0, libserver.so)  // inlines: ~CFuncDistanceOccluder, ~CFuncOccluder
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncDistanceOccluder::~CFuncDistanceOccluder(CFuncDistanceOccluder *const this)
{
  this->_vptr_IHandleEntity = &off_4049C30;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x0000000001fea690, libserver.so)
// globals: CFuncDistanceOccluder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncDistanceOccluder::CEntityInstanceEntityClass *const this)
{
  return CFuncDistanceOccluder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x0000000001fea6a0, libserver.so)  // inlines: Destruct<CFuncDistanceOccluder>
void __fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::DestructInstance(
        CFuncDistanceOccluder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x0000000001fea6c0, libserver.so)
void __fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::FreeInstance(
        CFuncDistanceOccluder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x0000000001fea6e0, libserver.so)
bool __fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::CanAllocate(
        const CFuncDistanceOccluder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x0000000001fea6f0, libserver.so)
// globals: CFuncDistanceOccluder::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncDistanceOccluder::CEntityInstanceEntityClass *const this)
{
  return CFuncDistanceOccluder::s_pSchemaBinding;
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x0000000001febbe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::AllocateInstance(
        CFuncDistanceOccluder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1176);
  memset(v1, 0, 0x498u);
  return v1;
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x0000000001fec250, libserver.so)  // inlines: Construct<CFuncDistanceOccluder>
// calls: CFuncDistanceOccluder::CFuncDistanceOccluder
CEntityInstance *__fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::ConstructInstance(
        CFuncDistanceOccluder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncDistanceOccluder::CFuncDistanceOccluder(p);
  return p;
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x0000000001fecf90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncDistanceOccluder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncDistanceOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x0000000001fecfb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncDistanceOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncDistanceOccluder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncDistanceOccluder::GetEntityClassInternal  (line 15, @0x0000000001ff2e70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncOccluder::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "func_distance_occluder", "CFuncDistanceOccluder"
// globals: `guard variable for'CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass, CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncDistanceOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo, CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo
CEntityClass *__cdecl CFuncDistanceOccluder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass) != 0 )
  {
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_designerName.u.m_Id = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass._vptr_CEntityClass = off_3F79390;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_ComponentOffsets.m_Size = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_AllHelpers.m_Size = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classInputs.m_Size = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classOutputs.m_Size = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_requiredEHandle.m_Index = -1;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_hNetworkSerializer = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pBaseClassInfo = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pClassInfo = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_flags = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_nAllHelpersFlags = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pScriptClassDesc = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pInputs = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_nInputCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pOutputs = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_nOutputCount = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pGameClass = 0;
    CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass._vptr_CEntityClass = off_3FDA1F0;
    __cxa_guard_release(&`guard variable for'CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass);
    __cxa_atexit(
      CFuncDistanceOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncDistanceOccluderClass != 0 )
    return &CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass;
  if ( `guard variable for'CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo) != 0 )
  {
    EntityClassInfo = CFuncOccluder::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo,
      "CFuncDistanceOccluder",
      "func_distance_occluder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo);
  }
  CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pClassInfo = &CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo;
  CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pBaseClassInfo = CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncDistanceOccluderClass = &CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass;
  CFuncDistanceOccluder::GetEntityClassInfo(void)::g_EntityCFuncDistanceOccluderClassInfo.m_pClass = &CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass;
  CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncDistanceOccluderClass->m_pComponentOverrides = 0;
  return &CFuncDistanceOccluder::GetEntityClassInternal(void)::g_EntityCFuncDistanceOccluderClass;
}


// CFuncDistanceOccluder::GetEntityClass  (line 15, @0x00000000022455b0, libserver.so)
CEntityClass *__cdecl CFuncDistanceOccluder::GetEntityClass()
{
  return g_pEntityCFuncDistanceOccluderClass;
}


// CFuncDistanceOccluder::Schema_DynamicBinding  (line 15, @0x0000000002247300, libserver.so)
// calls: CFuncDistanceOccluder::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncDistanceOccluder::Schema_DynamicBinding(
        const CFuncDistanceOccluder *const this)
{
  CFuncDistanceOccluder::Schema_VerifyBindingIsRegistered();
  return CFuncDistanceOccluder::s_pSchemaBinding;
}


