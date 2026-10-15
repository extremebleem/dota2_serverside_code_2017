
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_SimpleObstruction::GetEntityClass  (line 29, @0x000000000269d740, libserver.so)
CEntityClass *__cdecl CDOTA_SimpleObstruction::GetEntityClass()
{
  return g_pEntityCDOTA_SimpleObstructionClass;
}


// CDOTA_SimpleObstruction::Schema_DynamicBinding  (line 29, @0x000000000269d750, libserver.so)
// globals: CDOTA_SimpleObstruction::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_SimpleObstruction::Schema_DynamicBinding(
        const CDOTA_SimpleObstruction *const this)
{
  return CDOTA_SimpleObstruction::s_pSchemaBinding;
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x000000000269d770, libserver.so)
// globals: CDOTA_SimpleObstruction::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this)
{
  return CDOTA_SimpleObstruction::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x000000000269d780, libserver.so)  // inlines: Destruct<CDOTA_SimpleObstruction>
void __fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x000000000269d7a0, libserver.so)
void __fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x000000000269d7c0, libserver.so)
bool __fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x000000000269d7d0, libserver.so)
// globals: CDOTA_SimpleObstruction::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this)
{
  return CDOTA_SimpleObstruction::s_pSchemaBinding;
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x00000000026a05c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000026a6120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000026a6140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_SimpleObstruction::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x00000000026abb40, libserver.so)  // inlines: Construct<CDOTA_SimpleObstruction>
// calls: CDOTA_SimpleObstruction::CDOTA_SimpleObstruction
CEntityInstance *__fastcall CDOTA_SimpleObstruction::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_SimpleObstruction::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_SimpleObstruction::CDOTA_SimpleObstruction(p);
  return p;
}


// CDOTA_SimpleObstruction::GetEntityClassInternal  (line 29, @0x00000000026b3ba0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_SimpleObstruction>, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "point_simple_obstruction", "CDOTA_SimpleObstruction"
// globals: `guard variable for'CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass, CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_SimpleObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo, CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo
CEntityClass *__cdecl CDOTA_SimpleObstruction::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass) != 0 )
  {
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_designerName.u.m_Id = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass._vptr_CEntityClass = off_3F79390;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_AllHelpers.m_Size = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classInputs.m_Size = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classOutputs.m_Size = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_requiredEHandle.m_Index = -1;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_hNetworkSerializer = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pBaseClassInfo = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pClassInfo = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_flags = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_nAllHelpersFlags = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pScriptClassDesc = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pInputs = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_nInputCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pOutputs = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_nOutputCount = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pGameClass = 0;
    CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass._vptr_CEntityClass = off_4177C90;
    __cxa_guard_release(&`guard variable for'CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass);
    __cxa_atexit(
      CDOTA_SimpleObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_SimpleObstructionClass != 0 )
    return &CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass;
  if ( `guard variable for'CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo,
      "CDOTA_SimpleObstruction",
      "point_simple_obstruction",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo);
  }
  CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pClassInfo = &CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo;
  CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pBaseClassInfo = CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_SimpleObstructionClass = &CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass;
  CDOTA_SimpleObstruction::GetEntityClassInfo(void)::g_EntityCDOTA_SimpleObstructionClassInfo.m_pClass = &CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass;
  CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_SimpleObstruction>(0);
  g_pEntityCDOTA_SimpleObstructionClass->m_pComponentOverrides = 0;
  return &CDOTA_SimpleObstruction::GetEntityClassInternal(void)::g_EntityCDOTA_SimpleObstructionClass;
}


// CDOTA_SimpleObstruction::GetObstructionCollisionPadding  (line 55, @0x000000000269d7e0, libserver.so)
float __fastcall CDOTA_SimpleObstruction::GetObstructionCollisionPadding(CDOTA_SimpleObstruction *const this)
{
  return 0.0;
}


// CDOTA_SimpleObstruction::GetObstructionRelationshipClass  (line 56, @0x000000000269d800, libserver.so)
ObstructionRelationshipClass_t __fastcall CDOTA_SimpleObstruction::GetObstructionRelationshipClass(
        CDOTA_SimpleObstruction *const this)
{
  return ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE;
}


// CDOTA_SimpleObstruction::GetObstructionQuerySetClass  (line 57, @0x000000000269d820, libserver.so)
ObstructionQuerySetClass_t __fastcall CDOTA_SimpleObstruction::GetObstructionQuerySetClass(
        CDOTA_SimpleObstruction *const this)
{
  return ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC;
}


// CDOTA_SimpleObstruction::GetObstructionBaseEntity  (line 58, @0x000000000269d840, libserver.so)
CBaseEntity *__fastcall CDOTA_SimpleObstruction::GetObstructionBaseEntity(CDOTA_SimpleObstruction *const this)
{
  return this;
}


// CDOTA_SimpleObstruction::GetObstructionName  (line 59, @0x000000000269d860, libserver.so)
// strings: "point_simple_obstruction"
const char *__fastcall CDOTA_SimpleObstruction::GetObstructionName(CDOTA_SimpleObstruction *const this)
{
  return "point_simple_obstruction";
}


// CDOTA_SimpleObstruction::GetObstructionType  (line 60, @0x000000000269d880, libserver.so)
ObstructionType_t __fastcall CDOTA_SimpleObstruction::GetObstructionType(CDOTA_SimpleObstruction *const this)
{
  return ObstructionType_t::cObstructionTypeSquare;
}


