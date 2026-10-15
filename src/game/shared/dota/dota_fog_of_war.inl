
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFoWBlockerEntity::~CFoWBlockerEntity  (line 23, @0x00000000025558f0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFoWBlockerEntity::~CFoWBlockerEntity(CFoWBlockerEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40F6E70;
  CBaseEntity::~CBaseEntity(this);
}


// CFoWBlockerEntity::~CFoWBlockerEntity  (line 23, @0x0000000002555910, libserver.so)  // inlines: ~CFoWBlockerEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFoWBlockerEntity::~CFoWBlockerEntity(CFoWBlockerEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40F6E70;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFoWBlockerEntity::Schema_DynamicBinding  (line 25, @0x0000000002552610, libserver.so)
// globals: CFoWBlockerEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFoWBlockerEntity::Schema_DynamicBinding(const CFoWBlockerEntity *const this)
{
  return CFoWBlockerEntity::s_pSchemaBinding;
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x0000000002552620, libserver.so)
// globals: CFoWBlockerEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFoWBlockerEntity::CEntityInstanceEntityClass *const this)
{
  return CFoWBlockerEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x0000000002552630, libserver.so)  // inlines: Destruct<CFoWBlockerEntity>
void __fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::DestructInstance(
        CFoWBlockerEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x0000000002552650, libserver.so)
void __fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::FreeInstance(
        CFoWBlockerEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x0000000002552670, libserver.so)
bool __fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::CanAllocate(
        const CFoWBlockerEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x0000000002552680, libserver.so)
// globals: CFoWBlockerEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFoWBlockerEntity::CEntityInstanceEntityClass *const this)
{
  return CFoWBlockerEntity::s_pSchemaBinding;
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x0000000002555410, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::AllocateInstance(
        CFoWBlockerEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x0000000002555660, libserver.so)  // inlines: CFoWBlockerEntity, Construct<CFoWBlockerEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::ConstructInstance(
        CFoWBlockerEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40F6E70;
  }
  return p;
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x00000000025608b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFoWBlockerEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x00000000025608d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFoWBlockerEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFoWBlockerEntity::GetEntityClassInternal  (line 25, @0x0000000002575b90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "ent_fow_blocker_node", "CFoWBlockerEntity"
// globals: `guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass, CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo, CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo
CEntityClass *__cdecl CFoWBlockerEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass) != 0 )
  {
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_designerName.u.m_Id = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass._vptr_CEntityClass = off_3F79390;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Size = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_requiredEHandle.m_Index = -1;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_hNetworkSerializer = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pBaseClassInfo = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pClassInfo = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_flags = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_nAllHelpersFlags = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pScriptClassDesc = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pInputs = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_nInputCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pOutputs = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_nOutputCount = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pGameClass = 0;
    CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass._vptr_CEntityClass = off_40F6D70;
    __cxa_guard_release(&`guard variable for'CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass);
    __cxa_atexit(
      CFoWBlockerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCFoWBlockerEntityClass != 0 )
    return &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
  if ( `guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo,
      "CFoWBlockerEntity",
      "ent_fow_blocker_node",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo);
  }
  CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pClassInfo = &CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo;
  CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pBaseClassInfo = CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCFoWBlockerEntityClass = &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
  CFoWBlockerEntity::GetEntityClassInfo(void)::g_EntityCFoWBlockerEntityClassInfo.m_pClass = &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
  CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFoWBlockerEntityClass->m_pComponentOverrides = 0;
  return &CFoWBlockerEntity::GetEntityClassInternal(void)::g_EntityCFoWBlockerEntityClass;
}


// CFoWRevealerEntity::~CFoWRevealerEntity  (line 30, @0x0000000002555940, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFoWRevealerEntity::~CFoWRevealerEntity(CFoWRevealerEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40F7510;
  CBaseEntity::~CBaseEntity(this);
}


// CFoWRevealerEntity::~CFoWRevealerEntity  (line 30, @0x0000000002555960, libserver.so)  // inlines: ~CFoWRevealerEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFoWRevealerEntity::~CFoWRevealerEntity(CFoWRevealerEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40F7510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFoWRevealerEntity::GetEntityClass  (line 32, @0x0000000002552690, libserver.so)
CEntityClass *__cdecl CFoWRevealerEntity::GetEntityClass()
{
  return g_pEntityCFoWRevealerEntityClass;
}


// CFoWRevealerEntity::Schema_DynamicBinding  (line 32, @0x00000000025526a0, libserver.so)
// globals: CFoWRevealerEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFoWRevealerEntity::Schema_DynamicBinding(
        const CFoWRevealerEntity *const this)
{
  return CFoWRevealerEntity::s_pSchemaBinding;
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x00000000025526b0, libserver.so)
// globals: CFoWRevealerEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFoWRevealerEntity::CEntityInstanceEntityClass *const this)
{
  return CFoWRevealerEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x00000000025526c0, libserver.so)  // inlines: Destruct<CFoWRevealerEntity>
void __fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::DestructInstance(
        CFoWRevealerEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x00000000025526e0, libserver.so)
void __fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::FreeInstance(
        CFoWRevealerEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002552700, libserver.so)
bool __fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::CanAllocate(
        const CFoWRevealerEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002552710, libserver.so)
// globals: CFoWRevealerEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFoWRevealerEntity::CEntityInstanceEntityClass *const this)
{
  return CFoWRevealerEntity::s_pSchemaBinding;
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002555450, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::AllocateInstance(
        CFoWRevealerEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002555690, libserver.so)  // inlines: CFoWRevealerEntity, Construct<CFoWRevealerEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::ConstructInstance(
        CFoWRevealerEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40F7510;
  }
  return p;
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002560900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFoWRevealerEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002560920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFoWRevealerEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFoWRevealerEntity::GetEntityClassInternal  (line 32, @0x00000000025779a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "ent_fow_revealer", "CFoWRevealerEntity"
// globals: `guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass, CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo, CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo
CEntityClass *__cdecl CFoWRevealerEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass) != 0 )
  {
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_designerName.u.m_Id = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass._vptr_CEntityClass = off_3F79390;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Size = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_requiredEHandle.m_Index = -1;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_hNetworkSerializer = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pBaseClassInfo = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pClassInfo = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_flags = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_nAllHelpersFlags = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pScriptClassDesc = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pInputs = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_nInputCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pOutputs = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_nOutputCount = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pGameClass = 0;
    CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass._vptr_CEntityClass = off_40F6DF0;
    __cxa_guard_release(&`guard variable for'CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass);
    __cxa_atexit(
      CFoWRevealerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCFoWRevealerEntityClass != 0 )
    return &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
  if ( `guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo,
      "CFoWRevealerEntity",
      "ent_fow_revealer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo);
  }
  CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pClassInfo = &CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo;
  CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pBaseClassInfo = CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCFoWRevealerEntityClass = &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
  CFoWRevealerEntity::GetEntityClassInfo(void)::g_EntityCFoWRevealerEntityClassInfo.m_pClass = &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
  CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFoWRevealerEntityClass->m_pComponentOverrides = 0;
  return &CFoWRevealerEntity::GetEntityClassInternal(void)::g_EntityCFoWRevealerEntityClass;
}


// CDOTAFogOfWarSystem::~CDOTAFogOfWarSystem  (line 48, @0x00000000025727f0, libserver.so)  // inlines: Purge, ~CUtlHashtable, ~CUtlMemory
// calls: CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int>::Purge, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int>::Purge, IGameSystem::~IGameSystem
void __fastcall CDOTAFogOfWarSystem::~CDOTAFogOfWarSystem(CDOTAFogOfWarSystem *const this)
{
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *p_m_fowSize; // r12

  p_m_fowSize = &this->m_fowSize;
  this->_vptr_IGameSystem = off_40F7C90;
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::RemoveAll(&this->m_fowSize);
  if ( (this->m_fowSize.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>::Purge(&p_m_fowSize->m_table);
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::RemoveAll(&this->m_fowLookup);
  if ( (this->m_fowLookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>::Purge(&this->m_fowLookup.m_table);
  IGameSystem::~IGameSystem(this);
}


// CDOTAFogOfWarSystem::~CDOTAFogOfWarSystem  (line 48, @0x0000000002572850, libserver.so)  // inlines: Purge, ~CDOTAFogOfWarSystem, ~CUtlHashtable, ~CUtlMemory
// calls: CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int>::Purge, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTAFogOfWarSystem::~CDOTAFogOfWarSystem(CDOTAFogOfWarSystem *const this)
{
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *p_m_fowSize; // r12

  p_m_fowSize = &this->m_fowSize;
  this->_vptr_IGameSystem = off_40F7C90;
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::RemoveAll(&this->m_fowSize);
  if ( (this->m_fowSize.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>::Purge(&p_m_fowSize->m_table);
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::RemoveAll(&this->m_fowLookup);
  if ( (this->m_fowLookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>::Purge(&this->m_fowLookup.m_table);
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTAFogOfWarSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 50, @0x0000000002552720, libserver.so)
void __fastcall CDOTAFogOfWarSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTAFogOfWarSystem *const this)
{
  ;
}


// CDOTAFogOfWarSystem::DoesGameSystemReallocate  (line 50, @0x0000000002552730, libserver.so)
// globals: CDOTAFogOfWarSystem::sm_Factory
bool __fastcall CDOTAFogOfWarSystem::DoesGameSystemReallocate(const CDOTAFogOfWarSystem *const this)
{
  return (*(CDOTAFogOfWarSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAFogOfWarSystem::sm_Factory);
}


// CDOTAFogOfWarSystem::SetGameSystemGlobalPtrs  (line 50, @0x0000000002552750, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAFogOfWarSystem::sm_Factory
void __fastcall CDOTAFogOfWarSystem::SetGameSystemGlobalPtrs(CDOTAFogOfWarSystem *const this, void *pValue)
{
  if ( CDOTAFogOfWarSystem::sm_Factory != 0 )
    (*(CDOTAFogOfWarSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAFogOfWarSystem::sm_Factory, pValue);
}


// CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t::SpawnGroupFoWInfo_t  (line 112, @0x00000000025681e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CFoW::CFoW
// callers: CDOTAFogOfWarSystem::PreSpawnGroupLoad
void __fastcall CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t::SpawnGroupFoWInfo_t(
        CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *const this)
{
  CFoW::CFoW(&this->m_FoW);
  this->m_FOWEntities.m_Size = 0;
  this->m_FOWEntities.m_Memory.m_pMemory = 0;
  this->m_FOWEntities.m_Memory.m_nAllocationCount = 0;
  this->m_FOWEntities.m_Memory.m_nGrowSize = 0;
}


