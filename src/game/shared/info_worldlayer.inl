
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoWorldLayer::GetEntityClass  (line 28, @0x0000000001eeac80, libserver.so)
CEntityClass *__cdecl CInfoWorldLayer::GetEntityClass()
{
  return g_pEntityCInfoWorldLayerClass;
}


// CInfoWorldLayer::Schema_DynamicBinding  (line 28, @0x0000000001eeac90, libserver.so)
// globals: CInfoWorldLayer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoWorldLayer::Schema_DynamicBinding(const CInfoWorldLayer *const this)
{
  return CInfoWorldLayer::s_pSchemaBinding;
}


// CInfoWorldLayer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000001eeaca0, libserver.so)
// globals: CInfoWorldLayer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoWorldLayer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoWorldLayer::CEntityInstanceEntityClass *const this)
{
  return CInfoWorldLayer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoWorldLayer::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000001eeacb0, libserver.so)  // inlines: Destruct<CInfoWorldLayer>
void __fastcall CInfoWorldLayer::CEntityInstanceEntityClass::DestructInstance(
        CInfoWorldLayer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoWorldLayer::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000001eeacd0, libserver.so)
void __fastcall CInfoWorldLayer::CEntityInstanceEntityClass::FreeInstance(
        CInfoWorldLayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoWorldLayer::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000001eeacf0, libserver.so)
bool __fastcall CInfoWorldLayer::CEntityInstanceEntityClass::CanAllocate(
        const CInfoWorldLayer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoWorldLayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000001eead00, libserver.so)
// globals: CInfoWorldLayer::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoWorldLayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoWorldLayer::CEntityInstanceEntityClass *const this)
{
  return CInfoWorldLayer::s_pSchemaBinding;
}


// CInfoWorldLayer::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000001eec160, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoWorldLayer::CEntityInstanceEntityClass::AllocateInstance(
        CInfoWorldLayer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 824);
  memset(v1, 0, 0x338u);
  return v1;
}


// CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001eee0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoWorldLayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001eee0f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoWorldLayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoWorldLayer::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000001ef1b40, libserver.so)  // inlines: Construct<CInfoWorldLayer>
// calls: CInfoWorldLayer::CInfoWorldLayer
CEntityInstance *__fastcall CInfoWorldLayer::CEntityInstanceEntityClass::ConstructInstance(
        CInfoWorldLayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CInfoWorldLayer::CInfoWorldLayer(p);
  return p;
}


// CInfoWorldLayer::GetEntityClassInternal  (line 28, @0x0000000001ef5510, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "info_world_layer", "CInfoWorldLayer"
// globals: `guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass, CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo, CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo
CEntityClass *__cdecl CInfoWorldLayer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass) != 0 )
  {
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_designerName.u.m_Id = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass._vptr_CEntityClass = off_3F79390;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_requiredEHandle.m_Index = -1;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_hNetworkSerializer = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pBaseClassInfo = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pClassInfo = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_flags = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_nAllHelpersFlags = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pScriptClassDesc = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pInputs = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_nInputCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pOutputs = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_nOutputCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pGameClass = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass._vptr_CEntityClass = off_3FBE570;
    __cxa_guard_release(&`guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass);
    __cxa_atexit(
      CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoWorldLayerClass != 0 )
    return &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
  if ( `guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo,
      "CInfoWorldLayer",
      "info_world_layer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo);
  }
  CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pClassInfo = &CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo;
  CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pBaseClassInfo = CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoWorldLayerClass = &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
  CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo.m_pClass = &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
  CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoWorldLayerClass->m_pComponentOverrides = 0;
  return &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
}


