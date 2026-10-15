
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSoundEnt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 218, @0x0000000002002510, libserver.so)
// globals: CSoundEnt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSoundEnt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSoundEnt::CEntityInstanceEntityClass *const this)
{
  return CSoundEnt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSoundEnt::CEntityInstanceEntityClass::DestructInstance  (line 218, @0x0000000002002520, libserver.so)  // inlines: Destruct<CSoundEnt>
void __fastcall CSoundEnt::CEntityInstanceEntityClass::DestructInstance(
        CSoundEnt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSoundEnt::CEntityInstanceEntityClass::FreeInstance  (line 218, @0x0000000002002540, libserver.so)
void __fastcall CSoundEnt::CEntityInstanceEntityClass::FreeInstance(
        CSoundEnt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSoundEnt::CEntityInstanceEntityClass::CanAllocate  (line 218, @0x0000000002002560, libserver.so)
bool __fastcall CSoundEnt::CEntityInstanceEntityClass::CanAllocate(
        const CSoundEnt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSoundEnt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 218, @0x0000000002002570, libserver.so)
// globals: CSoundEnt::s_pSchemaBinding
const ISchemaBinding *__fastcall CSoundEnt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSoundEnt::CEntityInstanceEntityClass *const this)
{
  return CSoundEnt::s_pSchemaBinding;
}


// CSoundEnt::CEntityInstanceEntityClass::AllocateInstance  (line 218, @0x0000000002004af0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSoundEnt::CEntityInstanceEntityClass::AllocateInstance(
        CSoundEnt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 7448);
  memset(v1, 0, 0x1D18u);
  return v1;
}


// CSoundEnt::CEntityInstanceEntityClass::ConstructInstance  (line 218, @0x0000000002005140, libserver.so)  // inlines: Construct<CSoundEnt>
// calls: CSoundEnt::CSoundEnt
CEntityInstance *__fastcall CSoundEnt::CEntityInstanceEntityClass::ConstructInstance(
        CSoundEnt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CSoundEnt::CSoundEnt(p);
  return p;
}


// CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 218, @0x0000000002006fa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSoundEnt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 218, @0x0000000002006fc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSoundEnt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSoundEnt::GetEntityClassInternal  (line 218, @0x000000000200e3c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp, _GLOBAL__sub_I__unity_base_11.cpp
// strings: "soundent", "CSoundEnt"
// globals: `guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass, CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo, CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo
CEntityClass *__cdecl CSoundEnt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass) != 0 )
  {
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_designerName.u.m_Id = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass._vptr_CEntityClass = off_3F79390;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_requiredEHandle.m_Index = -1;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_hNetworkSerializer = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pBaseClassInfo = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pClassInfo = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_flags = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_nAllHelpersFlags = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pScriptClassDesc = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pInputs = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_nInputCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pOutputs = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_nOutputCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pGameClass = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass._vptr_CEntityClass = off_3FDE5B0;
    __cxa_guard_release(&`guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass);
    __cxa_atexit(
      CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass,
      &_dso_handle);
  }
  if ( g_pEntityCSoundEntClass != 0 )
    return &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
  if ( `guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo,
      "CSoundEnt",
      "soundent",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo);
  }
  CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pClassInfo = &CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo;
  CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pBaseClassInfo = CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo.m_pBaseClassInfo;
  g_pEntityCSoundEntClass = &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
  CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo.m_pClass = &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
  CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCSoundEntClass->m_pComponentOverrides = 0;
  return &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
}


// CSoundEnt::GetEntityClass  (line 218, @0x00000000023a8b50, libserver.so)
CEntityClass *__cdecl CSoundEnt::GetEntityClass()
{
  return g_pEntityCSoundEntClass;
}


// CSoundEnt::Schema_DynamicBinding  (line 218, @0x00000000023aab80, libserver.so)
// calls: CSoundEnt::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSoundEnt::Schema_DynamicBinding(const CSoundEnt *const this)
{
  CSoundEnt::Schema_VerifyBindingIsRegistered();
  return CSoundEnt::s_pSchemaBinding;
}


// CSoundEnt::ObjectCaps  (line 234, @0x00000000023aab50, libserver.so)  // inlines: ObjectCaps
// calls: CBaseEntity::ObjectCaps
int __fastcall CSoundEnt::ObjectCaps(CSoundEnt *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


