
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncRotating::~CFuncRotating  (line 20, @0x00000000021b29a0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncRotating::~CFuncRotating(CFuncRotating *const this)
{
  this->_vptr_IHandleEntity = &off_400C870;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncRotating::~CFuncRotating  (line 20, @0x00000000021b29c0, libserver.so)  // inlines: ~CFuncRotating
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncRotating::~CFuncRotating(CFuncRotating *const this)
{
  this->_vptr_IHandleEntity = &off_400C870;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncRotating::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x0000000001fea770, libserver.so)
// globals: CFuncRotating::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncRotating::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncRotating::CEntityInstanceEntityClass *const this)
{
  return CFuncRotating::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncRotating::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x0000000001fea780, libserver.so)  // inlines: Destruct<CFuncRotating>
void __fastcall CFuncRotating::CEntityInstanceEntityClass::DestructInstance(
        CFuncRotating::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncRotating::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x0000000001fea7a0, libserver.so)
void __fastcall CFuncRotating::CEntityInstanceEntityClass::FreeInstance(
        CFuncRotating::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncRotating::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x0000000001fea7c0, libserver.so)
bool __fastcall CFuncRotating::CEntityInstanceEntityClass::CanAllocate(
        const CFuncRotating::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncRotating::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x0000000001fea7d0, libserver.so)
// globals: CFuncRotating::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncRotating::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncRotating::CEntityInstanceEntityClass *const this)
{
  return CFuncRotating::s_pSchemaBinding;
}


// CFuncRotating::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x0000000001febc60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncRotating::CEntityInstanceEntityClass::AllocateInstance(
        CFuncRotating::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1248);
  memset(v1, 0, 0x4E0u);
  return v1;
}


// CFuncRotating::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x0000000001fec060, libserver.so)  // inlines: CFuncRotating, CUtlSymbolLarge, Construct<CFuncRotating>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncRotating::CEntityInstanceEntityClass::ConstructInstance(
        CFuncRotating::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 149) = 0;
    *p = &off_400C870;
  }
  return p;
}


// CFuncRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000001fecfe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncRotating::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000001fed000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncRotating::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncRotating::GetEntityClassInternal  (line 22, @0x0000000001ff3860, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "func_rotating", "CFuncRotating"
// globals: `guard variable for'CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass, CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo, CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo
CEntityClass *__cdecl CFuncRotating::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass) != 0 )
  {
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_designerName.u.m_Id = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass._vptr_CEntityClass = off_3F79390;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_ComponentOffsets.m_Size = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_AllHelpers.m_Size = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classInputs.m_Size = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classOutputs.m_Size = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_requiredEHandle.m_Index = -1;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_hNetworkSerializer = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pBaseClassInfo = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pClassInfo = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_flags = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_nAllHelpersFlags = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pScriptClassDesc = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pInputs = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_nInputCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pOutputs = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_nOutputCount = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pGameClass = 0;
    CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass._vptr_CEntityClass = off_3FDA6B0;
    __cxa_guard_release(&`guard variable for'CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass);
    __cxa_atexit(
      CFuncRotating::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncRotatingClass != 0 )
    return &CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass;
  if ( `guard variable for'CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo,
      "CFuncRotating",
      "func_rotating",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo);
  }
  CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pClassInfo = &CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo;
  CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pBaseClassInfo = CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncRotatingClass = &CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass;
  CFuncRotating::GetEntityClassInfo(void)::g_EntityCFuncRotatingClassInfo.m_pClass = &CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass;
  CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncRotatingClass->m_pComponentOverrides = 0;
  return &CFuncRotating::GetEntityClassInternal(void)::g_EntityCFuncRotatingClass;
}


// CFuncRotating::GetEntityClass  (line 22, @0x00000000021b0cb0, libserver.so)
CEntityClass *__cdecl CFuncRotating::GetEntityClass()
{
  return g_pEntityCFuncRotatingClass;
}


// CFuncRotating::Schema_DynamicBinding  (line 22, @0x00000000021b2b50, libserver.so)
// calls: CFuncRotating::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncRotating::Schema_DynamicBinding(const CFuncRotating *const this)
{
  CFuncRotating::Schema_VerifyBindingIsRegistered();
  return CFuncRotating::s_pSchemaBinding;
}


