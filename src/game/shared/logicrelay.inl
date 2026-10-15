
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicRelay::~CLogicRelay  (line 15, @0x00000000020f5ea0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicRelay::~CLogicRelay(CLogicRelay *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicRelay::~CLogicRelay  (line 15, @0x00000000020f5ec0, libserver.so)  // inlines: ~CLogicRelay, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicRelay::~CLogicRelay(CLogicRelay *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicRelay::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 17, @0x0000000001feab80, libserver.so)
// globals: CLogicRelay::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicRelay::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicRelay::CEntityInstanceEntityClass *const this)
{
  return CLogicRelay::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicRelay::CEntityInstanceEntityClass::DestructInstance  (line 17, @0x0000000001feab90, libserver.so)  // inlines: Destruct<CLogicRelay>
void __fastcall CLogicRelay::CEntityInstanceEntityClass::DestructInstance(
        CLogicRelay::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicRelay::CEntityInstanceEntityClass::FreeInstance  (line 17, @0x0000000001feabb0, libserver.so)
void __fastcall CLogicRelay::CEntityInstanceEntityClass::FreeInstance(
        CLogicRelay::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicRelay::CEntityInstanceEntityClass::CanAllocate  (line 17, @0x0000000001feabd0, libserver.so)
bool __fastcall CLogicRelay::CEntityInstanceEntityClass::CanAllocate(
        const CLogicRelay::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicRelay::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 17, @0x0000000001feabe0, libserver.so)
// globals: CLogicRelay::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicRelay::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicRelay::CEntityInstanceEntityClass *const this)
{
  return CLogicRelay::s_pSchemaBinding;
}


// CLogicRelay::CEntityInstanceEntityClass::AllocateInstance  (line 17, @0x0000000001febea0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicRelay::CEntityInstanceEntityClass::AllocateInstance(
        CLogicRelay::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CLogicRelay::CEntityInstanceEntityClass::ConstructInstance  (line 17, @0x0000000001fec380, libserver.so)  // inlines: Construct<CLogicRelay>
// calls: CLogicRelay::CLogicRelay
CEntityInstance *__fastcall CLogicRelay::CEntityInstanceEntityClass::ConstructInstance(
        CLogicRelay::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CLogicRelay::CLogicRelay(p);
  return p;
}


// CLogicRelay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x0000000001fecc70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicRelay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicRelay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLogicRelay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x0000000001fecc90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicRelay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicRelay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicRelay::GetEntityClassInternal  (line 17, @0x0000000001ff3f40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "CLogicRelay"
// globals: `guard variable for'CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass, CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CLogicRelay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo, CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo
CEntityClass *__cdecl CLogicRelay::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass) != 0 )
  {
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_designerName.u.m_Id = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass._vptr_CEntityClass = off_3F79390;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_ComponentOffsets.m_Size = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_AllHelpers.m_Size = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_atomicFields,
      4);
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classInputs.m_Size = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classInputs.m_Memory.m_pMemory = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classOutputs.m_Size = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_requiredEHandle.m_Index = -1;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_hNetworkSerializer = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pBaseClassInfo = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pClassInfo = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_flags = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_nAllHelpersFlags = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pScriptClassDesc = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pInputs = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_nInputCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pOutputs = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_nOutputCount = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pGameClass = 0;
    CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass._vptr_CEntityClass = off_3FDC810;
    __cxa_guard_release(&`guard variable for'CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass);
    __cxa_atexit(
      CLogicRelay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicRelayClass != 0 )
    return &CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass;
  if ( `guard variable for'CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo,
      "CLogicRelay",
      "logic_relay",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo);
  }
  CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pClassInfo = &CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo;
  CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pBaseClassInfo = CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicRelayClass = &CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass;
  CLogicRelay::GetEntityClassInfo(void)::g_EntityCLogicRelayClassInfo.m_pClass = &CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass;
  CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicRelayClass->m_pComponentOverrides = 0;
  return &CLogicRelay::GetEntityClassInternal(void)::g_EntityCLogicRelayClass;
}


// CLogicRelay::GetEntityClass  (line 17, @0x00000000020f1700, libserver.so)
CEntityClass *__cdecl CLogicRelay::GetEntityClass()
{
  return g_pEntityCLogicRelayClass;
}


// CLogicRelay::Schema_DynamicBinding  (line 17, @0x00000000020f5ef0, libserver.so)
// calls: CLogicRelay::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CLogicRelay::Schema_DynamicBinding(const CLogicRelay *const this)
{
  CLogicRelay::Schema_VerifyBindingIsRegistered();
  return CLogicRelay::s_pSchemaBinding;
}


