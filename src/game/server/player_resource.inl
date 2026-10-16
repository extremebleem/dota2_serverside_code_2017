
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerResource::~CPlayerResource  (line 17, @0x000000000233b850, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPlayerResource::~CPlayerResource(CPlayerResource *const this)
{
  this->_vptr_IHandleEntity = &off_408B170;
  CBaseEntity::~CBaseEntity(this);
}


// CPlayerResource::~CPlayerResource  (line 17, @0x000000000233b870, libserver.so)  // inlines: ~CPlayerResource
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPlayerResource::~CPlayerResource(CPlayerResource *const this)
{
  this->_vptr_IHandleEntity = &off_408B170;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPlayerResource::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x00000000020025f0, libserver.so)
// globals: CPlayerResource::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPlayerResource::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPlayerResource::CEntityInstanceEntityClass *const this)
{
  return CPlayerResource::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPlayerResource::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000002002600, libserver.so)  // inlines: Destruct<CPlayerResource>
void __fastcall CPlayerResource::CEntityInstanceEntityClass::DestructInstance(
        CPlayerResource::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPlayerResource::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000002002620, libserver.so)
void __fastcall CPlayerResource::CEntityInstanceEntityClass::FreeInstance(
        CPlayerResource::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPlayerResource::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000002002640, libserver.so)
bool __fastcall CPlayerResource::CEntityInstanceEntityClass::CanAllocate(
        const CPlayerResource::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPlayerResource::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000002002650, libserver.so)
// globals: CPlayerResource::s_pSchemaBinding
const ISchemaBinding *__fastcall CPlayerResource::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPlayerResource::CEntityInstanceEntityClass *const this)
{
  return CPlayerResource::s_pSchemaBinding;
}


// CPlayerResource::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000002004b70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPlayerResource::CEntityInstanceEntityClass::AllocateInstance(
        CPlayerResource::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2240);
  memset(v1, 0, 0x8C0u);
  return v1;
}


// CPlayerResource::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000002005040, libserver.so)  // inlines: CPlayerResource, Construct<CPlayerResource>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPlayerResource::CEntityInstanceEntityClass::ConstructInstance(
        CPlayerResource::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_408B170;
  }
  return p;
}


// CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002007310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPlayerResource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002007330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPlayerResource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPlayerResource::GetEntityClassInternal  (line 19, @0x000000000200e710, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp, _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPlayerResource"
// globals: `guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass, CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo, CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo
CEntityClass *__cdecl CPlayerResource::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass) != 0 )
  {
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_designerName.u.m_Id = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass._vptr_CEntityClass = off_3F79390;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_requiredEHandle.m_Index = -1;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_hNetworkSerializer = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pBaseClassInfo = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pClassInfo = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_flags = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_nAllHelpersFlags = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pScriptClassDesc = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pInputs = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_nInputCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pOutputs = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_nOutputCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pGameClass = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass._vptr_CEntityClass = off_3FDE6B0;
    __cxa_guard_release(&`guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass);
    __cxa_atexit(
      CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass,
      &_dso_handle);
  }
  if ( g_pEntityCPlayerResourceClass != 0 )
    return &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
  if ( `guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo,
      "CPlayerResource",
      "player_manager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo);
  }
  CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pClassInfo = &CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo;
  CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pBaseClassInfo = CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo.m_pBaseClassInfo;
  g_pEntityCPlayerResourceClass = &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
  CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo.m_pClass = &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
  CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPlayerResourceClass->m_pComponentOverrides = 0;
  return &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
}


// CPlayerResource::GetEntityClass  (line 19, @0x0000000002339800, libserver.so)
CEntityClass *__cdecl CPlayerResource::GetEntityClass()
{
  return g_pEntityCPlayerResourceClass;
}


// CPlayerResource::Schema_DynamicBinding  (line 19, @0x000000000233b940, libserver.so)
// calls: CPlayerResource::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPlayerResource::Schema_DynamicBinding(const CPlayerResource *const this)
{
  CPlayerResource::Schema_VerifyBindingIsRegistered();
  return CPlayerResource::s_pSchemaBinding;
}


// CPlayerResource::ObjectCaps  (line 26, @0x000000000233b590, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPlayerResource::ObjectCaps(CPlayerResource *const this)
{
  return CBaseEntity::ObjectCaps(this) | 0x80000000;
}


