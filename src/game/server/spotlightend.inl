
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSpotlightEnd::~CSpotlightEnd  (line 17, @0x00000000023e92c0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CSpotlightEnd::~CSpotlightEnd(CSpotlightEnd *const this)
{
  this->_vptr_IHandleEntity = &off_40B06F0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CSpotlightEnd::~CSpotlightEnd  (line 17, @0x00000000023e92e0, libserver.so)  // inlines: ~CSpotlightEnd
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CSpotlightEnd::~CSpotlightEnd(CSpotlightEnd *const this)
{
  this->_vptr_IHandleEntity = &off_40B06F0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CSpotlightEnd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000002002c90, libserver.so)
// globals: CSpotlightEnd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSpotlightEnd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSpotlightEnd::CEntityInstanceEntityClass *const this)
{
  return CSpotlightEnd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSpotlightEnd::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000002002ca0, libserver.so)  // inlines: Destruct<CSpotlightEnd>
void __fastcall CSpotlightEnd::CEntityInstanceEntityClass::DestructInstance(
        CSpotlightEnd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSpotlightEnd::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000002002cc0, libserver.so)
void __fastcall CSpotlightEnd::CEntityInstanceEntityClass::FreeInstance(
        CSpotlightEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSpotlightEnd::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000002002ce0, libserver.so)
bool __fastcall CSpotlightEnd::CEntityInstanceEntityClass::CanAllocate(
        const CSpotlightEnd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSpotlightEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000002002cf0, libserver.so)
// globals: CSpotlightEnd::s_pSchemaBinding
const ISchemaBinding *__fastcall CSpotlightEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSpotlightEnd::CEntityInstanceEntityClass *const this)
{
  return CSpotlightEnd::s_pSchemaBinding;
}


// CSpotlightEnd::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000002004ef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSpotlightEnd::CEntityInstanceEntityClass::AllocateInstance(
        CSpotlightEnd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1184);
  memset(v1, 0, 0x4A0u);
  return v1;
}


// CSpotlightEnd::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000002005080, libserver.so)  // inlines: CNetworkVarBase, CSpotlightEnd, Construct<CSpotlightEnd>, EnsureValidValue<float>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CSpotlightEnd::CEntityInstanceEntityClass::ConstructInstance(
        CSpotlightEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 288) = 0;
    *(p + 289) = 0;
    *p = &off_40B06F0;
  }
  return p;
}


// CSpotlightEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002007270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSpotlightEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpotlightEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CSpotlightEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002007290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSpotlightEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpotlightEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSpotlightEnd::GetEntityClassInternal  (line 19, @0x000000000200ea60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "spotlight_end", "CSpotlightEnd"
// globals: `guard variable for'CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass, CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSpotlightEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo, CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo
CEntityClass *__cdecl CSpotlightEnd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass) != 0 )
  {
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_designerName.u.m_Id = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass._vptr_CEntityClass = off_3F79390;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_ComponentOffsets.m_Size = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_AllHelpers.m_Size = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classInputs.m_Size = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classOutputs.m_Size = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_requiredEHandle.m_Index = -1;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_hNetworkSerializer = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pBaseClassInfo = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pClassInfo = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_flags = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_nAllHelpersFlags = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pScriptClassDesc = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pInputs = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_nInputCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pOutputs = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_nOutputCount = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pGameClass = 0;
    CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass._vptr_CEntityClass = off_3FE11B0;
    __cxa_guard_release(&`guard variable for'CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass);
    __cxa_atexit(
      CSpotlightEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass,
      &_dso_handle);
  }
  if ( g_pEntityCSpotlightEndClass != 0 )
    return &CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass;
  if ( `guard variable for'CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo,
      "CSpotlightEnd",
      "spotlight_end",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo);
  }
  CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pClassInfo = &CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo;
  CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pBaseClassInfo = CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo.m_pBaseClassInfo;
  g_pEntityCSpotlightEndClass = &CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass;
  CSpotlightEnd::GetEntityClassInfo(void)::g_EntityCSpotlightEndClassInfo.m_pClass = &CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass;
  CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCSpotlightEndClass->m_pComponentOverrides = 0;
  return &CSpotlightEnd::GetEntityClassInternal(void)::g_EntityCSpotlightEndClass;
}


// CSpotlightEnd::GetEntityClass  (line 19, @0x00000000023e5380, libserver.so)
CEntityClass *__cdecl CSpotlightEnd::GetEntityClass()
{
  return g_pEntityCSpotlightEndClass;
}


// CSpotlightEnd::Schema_DynamicBinding  (line 19, @0x00000000023e9560, libserver.so)
// calls: CSpotlightEnd::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSpotlightEnd::Schema_DynamicBinding(const CSpotlightEnd *const this)
{
  CSpotlightEnd::Schema_VerifyBindingIsRegistered();
  return CSpotlightEnd::s_pSchemaBinding;
}


// CSpotlightEnd::ObjectCaps  (line 25, @0x00000000023e8b80, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CSpotlightEnd::ObjectCaps(CSpotlightEnd *const this)
{
  return CBaseEntity::ObjectCaps(this) & 0x7FFFFF7F | 0x80000000;
}


