
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointTemplate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 49, @0x00000000020029f0, libserver.so)
// globals: CPointTemplate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointTemplate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointTemplate::CEntityInstanceEntityClass *const this)
{
  return CPointTemplate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointTemplate::CEntityInstanceEntityClass::DestructInstance  (line 49, @0x0000000002002a00, libserver.so)  // inlines: Destruct<CPointTemplate>
void __fastcall CPointTemplate::CEntityInstanceEntityClass::DestructInstance(
        CPointTemplate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointTemplate::CEntityInstanceEntityClass::FreeInstance  (line 49, @0x0000000002002a20, libserver.so)
void __fastcall CPointTemplate::CEntityInstanceEntityClass::FreeInstance(
        CPointTemplate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointTemplate::CEntityInstanceEntityClass::CanAllocate  (line 49, @0x0000000002002a40, libserver.so)
bool __fastcall CPointTemplate::CEntityInstanceEntityClass::CanAllocate(
        const CPointTemplate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointTemplate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 49, @0x0000000002002a50, libserver.so)
// globals: CPointTemplate::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointTemplate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointTemplate::CEntityInstanceEntityClass *const this)
{
  return CPointTemplate::s_pSchemaBinding;
}


// CPointTemplate::CEntityInstanceEntityClass::AllocateInstance  (line 49, @0x0000000002004d70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointTemplate::CEntityInstanceEntityClass::AllocateInstance(
        CPointTemplate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 904);
  memset(v1, 0, 0x388u);
  return v1;
}


// CPointTemplate::CEntityInstanceEntityClass::ConstructInstance  (line 49, @0x0000000002005230, libserver.so)  // inlines: Construct<CPointTemplate>
// calls: CPointTemplate::CPointTemplate
CEntityInstance *__fastcall CPointTemplate::CEntityInstanceEntityClass::ConstructInstance(
        CPointTemplate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointTemplate::CPointTemplate(p);
  return p;
}


// CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002006e10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointTemplate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002006e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointTemplate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointTemplate::GetEntityClassInternal  (line 49, @0x0000000002011a00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CPointTemplate>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CServerOnlyEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp, _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_template", "CPointTemplate", "CLogicalEntity"
// globals: `guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass, CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo, CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo (9 total)
CEntityClass *__cdecl CPointTemplate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass) != 0 )
  {
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_designerName.u.m_Id = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass._vptr_CEntityClass = off_3F79390;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_requiredEHandle.m_Index = -1;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_hNetworkSerializer = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pBaseClassInfo = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pClassInfo = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_flags = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_nAllHelpersFlags = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pScriptClassDesc = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pInputs = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_nInputCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pOutputs = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_nOutputCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pGameClass = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass._vptr_CEntityClass = off_3FDFF50;
    __cxa_guard_release(&`guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass);
    __cxa_atexit(
      CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointTemplateClass != 0 )
    return &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
  if ( `guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo) != 0 )
  {
    if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
    {
      EntityClassInfo = CServerOnlyEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
        "CLogicalEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo,
      "CPointTemplate",
      "point_template",
      0,
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo);
  }
  CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pClassInfo = &CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo;
  CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pBaseClassInfo = CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo.m_pBaseClassInfo;
  g_pEntityCPointTemplateClass = &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
  CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo.m_pClass = &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
  CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pScriptClassDesc = GetScriptDesc<CPointTemplate>(0);
  g_pEntityCPointTemplateClass->m_pComponentOverrides = 0;
  return &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
}


// CPointTemplate::GetEntityClass  (line 49, @0x0000000002339ec0, libserver.so)
CEntityClass *__cdecl CPointTemplate::GetEntityClass()
{
  return g_pEntityCPointTemplateClass;
}


// CPointTemplate::Schema_DynamicBinding  (line 49, @0x000000000233bac0, libserver.so)
// calls: CPointTemplate::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPointTemplate::Schema_DynamicBinding(const CPointTemplate *const this)
{
  CPointTemplate::Schema_VerifyBindingIsRegistered();
  return CPointTemplate::s_pSchemaBinding;
}


// CPointTemplate::GetDesiredSpawnGroupType  (line 81, @0x0000000002339ed0, libserver.so)
PointTemplateOwnerSpawnGroupType_t __fastcall CPointTemplate::GetDesiredSpawnGroupType(CPointTemplate *const this)
{
  return this->m_ownerSpawnGroupType;
}


// CPointTemplate::ForcePrecacheSpawnGroupLump  (line 86, @0x0000000002339ee0, libserver.so)
bool __fastcall CPointTemplate::ForcePrecacheSpawnGroupLump(const CPointTemplate *const this)
{
  return 0;
}


