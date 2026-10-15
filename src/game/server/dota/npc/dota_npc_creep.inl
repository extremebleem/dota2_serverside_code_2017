
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Creep::~CDOTA_BaseNPC_Creep  (line 16, @0x0000000002983180, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Creep::~CDOTA_BaseNPC_Creep(CDOTA_BaseNPC_Creep *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Creep::~CDOTA_BaseNPC_Creep  (line 16, @0x00000000029831c0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Creep::~CDOTA_BaseNPC_Creep(CDOTA_BaseNPC_Creep *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Creep::GetEntityClass  (line 18, @0x0000000002966300, libserver.so)
CEntityClass *__cdecl CDOTA_BaseNPC_Creep::GetEntityClass()
{
  return g_pEntityCDOTA_BaseNPC_CreepClass;
}


// CDOTA_BaseNPC_Creep::Schema_DynamicBinding  (line 18, @0x0000000002966310, libserver.so)
// globals: CDOTA_BaseNPC_Creep::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep *const this)
{
  return CDOTA_BaseNPC_Creep::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x0000000002966340, libserver.so)
// globals: CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x0000000002966350, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Creep>
void __fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x0000000002966370, libserver.so)
void __fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x0000000002966390, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x00000000029663a0, libserver.so)
// globals: CDOTA_BaseNPC_Creep::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x000000000296a690, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x000000000296fa80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x000000000296fb80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Creep::GetEntityClassInfo  (line 18, @0x0000000002975f50, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDOTA_BaseNPC::GetEntityClassInfo
// callers: CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal, CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal, CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal, CDOTA_BaseNPC_Creature::GetEntityClassInternal, CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal, CDOTA_Unit_Nian::GetEntityClassInternal, CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal, CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal, CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal, CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal, CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal, CDOTA_Unit_VisageFamiliar::GetEntityClassInternal (13 total)
// strings: "npc_dota_creep", "CDOTA_BaseNPC_Creep", "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_Creep::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo != 0 )
    return &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo) == 0 )
    return &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo,
      "CDOTA_BaseNPC_Additive",
      "npc_dota_base_additive",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo,
    "CDOTA_BaseNPC_Creep",
    "npc_dota_creep",
    0,
    &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  return &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo;
}


// CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x0000000002982640, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creep, Construct<CDOTA_BaseNPC_Creep>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = 0;
    *p = &off_42ED090;
    *(p + 236) = &off_42EDFF0;
    *(p + 257) = &off_42EE320;
  }
  return p;
}


// CDOTA_BaseNPC_Creep::GetEntityClassInternal  (line 18, @0x0000000002986240, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDOTA_BaseNPC::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_creep", "CDOTA_BaseNPC_Creep", "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass, CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo (9 total)
CEntityClass *__cdecl CDOTA_BaseNPC_Creep::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass) != 0 )
  {
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_flags = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pInputs = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass._vptr_CEntityClass = off_42D5E30;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_CreepClass != 0 )
    return &CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass;
  if ( `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo,
        "CDOTA_BaseNPC_Additive",
        "npc_dota_base_additive",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo,
      "CDOTA_BaseNPC_Creep",
      "npc_dota_creep",
      0,
      &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  }
  CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pClassInfo = &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo;
  CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pBaseClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_CreepClass = &CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass;
  CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo.m_pClass = &CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass;
  CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPC_CreepClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Creep::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreepClass;
}


// CDOTA_BaseNPC_Creep::Event_Killed  (line 28, @0x00000000029902b0, libserver.so)  // inlines: AddDeny, AddKill, AddLastHit, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::Event_Killed
// globals: CEntityHandle::gm_pEntityList, iLastHits, iKills, iDenies
void __fastcall CDOTA_BaseNPC_Creep::Event_Killed(CDOTA_BaseNPC_Creep *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[info->m_hAttacker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( HIBYTE(m_pInstance[7].m_CScriptComponent) == this->m_iTeamNum.m_Value )
              ++iDenies;
            else
              ++iLastHits;
          }
          else
          {
            ++iKills;
          }
        }
      }
    }
  }
  CDOTA_BaseNPC::Event_Killed(this, info);
}


// CDOTA_BaseNPC_Creep_Lane::~CDOTA_BaseNPC_Creep_Lane  (line 63, @0x0000000002983220, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Creep_Lane::~CDOTA_BaseNPC_Creep_Lane(CDOTA_BaseNPC_Creep_Lane *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Creep_Lane::~CDOTA_BaseNPC_Creep_Lane  (line 63, @0x0000000002983260, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Lane
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Creep_Lane::~CDOTA_BaseNPC_Creep_Lane(CDOTA_BaseNPC_Creep_Lane *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Creep_Lane::Schema_DynamicBinding  (line 65, @0x00000000029663b0, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Lane::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Lane::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Lane *const this)
{
  return CDOTA_BaseNPC_Creep_Lane::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 65, @0x00000000029663e0, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::DestructInstance  (line 65, @0x00000000029663f0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Creep_Lane>
void __fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::FreeInstance  (line 65, @0x0000000002966410, libserver.so)
void __fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::CanAllocate  (line 65, @0x0000000002966430, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 65, @0x0000000002966440, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Lane::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Lane::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::AllocateInstance  (line 65, @0x000000000296a6d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4544);
  memset(v1, 0, 0x11C0u);
  return v1;
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x000000000296fac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x000000000296fc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo  (line 65, @0x0000000002976020, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDOTA_BaseNPC::GetEntityClassInfo
// callers: CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal
// strings: "npc_dota_creep_lane", "CDOTA_BaseNPC_Creep_Lane", "npc_dota_creep", "CDOTA_BaseNPC_Creep", "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo, CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo, `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo != 0 )
    return &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo) == 0 )
    return &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo,
        "CDOTA_BaseNPC_Additive",
        "npc_dota_base_additive",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo,
      "CDOTA_BaseNPC_Creep",
      "npc_dota_creep",
      0,
      &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo,
    "CDOTA_BaseNPC_Creep_Lane",
    "npc_dota_creep_lane",
    0,
    &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo);
  return &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo;
}


// CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::ConstructInstance  (line 65, @0x0000000002984300, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creep, CDOTA_BaseNPC_Creep_Lane, Construct<CDOTA_BaseNPC_Creep_Lane>, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::~CDOTA_BaseNPC, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = 0;
    *p = &off_42F0930;
    *(p + 236) = &off_42F1890;
    *(p + 257) = &off_42F1BC0;
    CountdownTimer::CountdownTimer(p + 188);
  }
  return p;
}


// CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal  (line 65, @0x00000000029865d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_creep_lane", "CDOTA_BaseNPC_Creep_Lane"
// globals: `guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass, CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo, CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass) != 0 )
  {
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_flags = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pInputs = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass._vptr_CEntityClass = off_42D5EB0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Creep_LaneClass != 0 )
    return &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass;
  if ( `guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo,
      "CDOTA_BaseNPC_Creep_Lane",
      "npc_dota_creep_lane",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo);
  }
  CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pClassInfo = &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo;
  CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pBaseClassInfo = CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Creep_LaneClass = &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass;
  CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClassInfo.m_pClass = &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass;
  CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPC_Creep_LaneClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Creep_Lane::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_LaneClass;
}


// CDOTA_BaseNPC_Creep_Siege::~CDOTA_BaseNPC_Creep_Siege  (line 124, @0x00000000029832c0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Lane
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Creep_Siege::~CDOTA_BaseNPC_Creep_Siege(CDOTA_BaseNPC_Creep_Siege *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Creep_Siege::~CDOTA_BaseNPC_Creep_Siege  (line 124, @0x00000000029842a0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Lane, ~CDOTA_BaseNPC_Creep_Siege
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Creep_Siege::~CDOTA_BaseNPC_Creep_Siege(CDOTA_BaseNPC_Creep_Siege *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Creep_Siege::Schema_DynamicBinding  (line 126, @0x0000000002966450, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Siege::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Siege::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Siege *const this)
{
  return CDOTA_BaseNPC_Creep_Siege::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 126, @0x0000000002966480, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::DestructInstance  (line 126, @0x0000000002966490, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Creep_Siege>
void __fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::FreeInstance  (line 126, @0x00000000029664b0, libserver.so)
void __fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::CanAllocate  (line 126, @0x00000000029664d0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 126, @0x00000000029664e0, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Siege::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Siege::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::AllocateInstance  (line 126, @0x000000000296a710, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4544);
  memset(v1, 0, 0x11C0u);
  return v1;
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 126, @0x000000000296fb40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 126, @0x000000000296fca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::ConstructInstance  (line 126, @0x00000000029843a0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creep, CDOTA_BaseNPC_Creep_Lane, CDOTA_BaseNPC_Creep_Siege, Construct<CDOTA_BaseNPC_Creep_Siege>, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::~CDOTA_BaseNPC, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = 0;
    *p = &off_42F0930;
    *(p + 236) = &off_42F1890;
    *(p + 257) = &off_42F1BC0;
    CountdownTimer::CountdownTimer(p + 188);
    *p = &off_42EE370;
    *(p + 236) = &off_42EF2D0;
    *(p + 257) = &off_42EF600;
  }
  return p;
}


// CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal  (line 126, @0x0000000002986920, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_creep_siege", "CDOTA_BaseNPC_Creep_Siege"
// globals: `guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass, CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo, CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass) != 0 )
  {
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_flags = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pInputs = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass._vptr_CEntityClass = off_42D5F30;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Creep_SiegeClass != 0 )
    return &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass;
  if ( `guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo,
      "CDOTA_BaseNPC_Creep_Siege",
      "npc_dota_creep_siege",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo);
  }
  CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pClassInfo = &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo;
  CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pBaseClassInfo = CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Creep_SiegeClass = &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass;
  CDOTA_BaseNPC_Creep_Siege::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClassInfo.m_pClass = &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass;
  CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPC_Creep_SiegeClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Creep_Siege::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_SiegeClass;
}


// CDOTA_BaseNPC_Creep_Neutral::~CDOTA_BaseNPC_Creep_Neutral  (line 135, @0x0000000002983300, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Creep_Neutral::~CDOTA_BaseNPC_Creep_Neutral(CDOTA_BaseNPC_Creep_Neutral *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Creep_Neutral::~CDOTA_BaseNPC_Creep_Neutral  (line 135, @0x0000000002983340, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Neutral
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Creep_Neutral::~CDOTA_BaseNPC_Creep_Neutral(CDOTA_BaseNPC_Creep_Neutral *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Creep_Neutral::Schema_DynamicBinding  (line 137, @0x00000000029664f0, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Neutral::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Neutral::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Neutral *const this)
{
  return CDOTA_BaseNPC_Creep_Neutral::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 137, @0x0000000002966520, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::DestructInstance  (line 137, @0x0000000002966530, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Creep_Neutral>
void __fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::FreeInstance  (line 137, @0x0000000002966550, libserver.so)
void __fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::CanAllocate  (line 137, @0x0000000002966570, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 137, @0x0000000002966580, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Neutral::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Neutral::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::AllocateInstance  (line 137, @0x000000000296a750, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4536);
  memset(v1, 0, 0x11B8u);
  return v1;
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 137, @0x000000000296fae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 137, @0x000000000296fbe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::ConstructInstance  (line 137, @0x0000000002984080, libserver.so)  // inlines: Construct<CDOTA_BaseNPC_Creep_Neutral>
// calls: CDOTA_BaseNPC_Creep_Neutral::CDOTA_BaseNPC_Creep_Neutral
CEntityInstance *__fastcall CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_BaseNPC_Creep_Neutral::CDOTA_BaseNPC_Creep_Neutral(p);
  return p;
}


// CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal  (line 137, @0x0000000002986c70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_creep_neutral", "CDOTA_BaseNPC_Creep_Neutral"
// globals: `guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass, CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo, CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass) != 0 )
  {
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_flags = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pInputs = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass._vptr_CEntityClass = off_42D5FB0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Creep_NeutralClass != 0 )
    return &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass;
  if ( `guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo,
      "CDOTA_BaseNPC_Creep_Neutral",
      "npc_dota_creep_neutral",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo);
  }
  CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pClassInfo = &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo;
  CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pBaseClassInfo = CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Creep_NeutralClass = &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass;
  CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClassInfo.m_pClass = &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass;
  CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPC_Creep_NeutralClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Creep_Neutral::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_NeutralClass;
}


// CDOTA_BaseNPC_Creep_Talking::~CDOTA_BaseNPC_Creep_Talking  (line 160, @0x00000000029833a0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Creep_Talking::~CDOTA_BaseNPC_Creep_Talking(CDOTA_BaseNPC_Creep_Talking *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Creep_Talking::~CDOTA_BaseNPC_Creep_Talking  (line 160, @0x00000000029833e0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Creep_Talking::~CDOTA_BaseNPC_Creep_Talking(CDOTA_BaseNPC_Creep_Talking *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Creep_Talking::Schema_DynamicBinding  (line 162, @0x0000000002966590, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Talking::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Talking::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Talking *const this)
{
  return CDOTA_BaseNPC_Creep_Talking::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 162, @0x00000000029665c0, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::DestructInstance  (line 162, @0x00000000029665d0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Creep_Talking>
void __fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::FreeInstance  (line 162, @0x00000000029665f0, libserver.so)
void __fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::CanAllocate  (line 162, @0x0000000002966610, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 162, @0x0000000002966620, libserver.so)
// globals: CDOTA_BaseNPC_Creep_Talking::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creep_Talking::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::AllocateInstance  (line 162, @0x000000000296a790, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 162, @0x000000000296fb00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 162, @0x000000000296fc70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo  (line 162, @0x0000000002976130, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDOTA_BaseNPC::GetEntityClassInfo
// callers: CDOTA_Unit_Roquelaire::GetEntityClassInternal
// strings: "npc_dota_talking_creep", "CDOTA_BaseNPC_Creep_Talking", "npc_dota_creep", "CDOTA_BaseNPC_Creep", "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo, CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo, `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo != 0 )
    return &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo) == 0 )
    return &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo,
        "CDOTA_BaseNPC_Additive",
        "npc_dota_base_additive",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo,
      "CDOTA_BaseNPC_Creep",
      "npc_dota_creep",
      0,
      &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo,
    "CDOTA_BaseNPC_Creep_Talking",
    "npc_dota_talking_creep",
    0,
    &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo);
  return &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo;
}


// CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::ConstructInstance  (line 162, @0x00000000029826a0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creep, CDOTA_BaseNPC_Creep_Talking, Construct<CDOTA_BaseNPC_Creep_Talking>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = 0;
    *p = &off_42F1C10;
    *(p + 236) = &off_42F2B78;
    *(p + 257) = &off_42F2EA8;
  }
  return p;
}


// CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal  (line 162, @0x0000000002986fc0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_talking_creep", "CDOTA_BaseNPC_Creep_Talking"
// globals: `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass, CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo, CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass) != 0 )
  {
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_flags = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pInputs = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass._vptr_CEntityClass = off_42D6030;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Creep_TalkingClass != 0 )
    return &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass;
  if ( `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo,
      "CDOTA_BaseNPC_Creep_Talking",
      "npc_dota_talking_creep",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo);
  }
  CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pClassInfo = &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo;
  CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pBaseClassInfo = CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Creep_TalkingClass = &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass;
  CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo.m_pClass = &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass;
  CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPC_Creep_TalkingClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClass;
}


// CDOTA_BaseNPC_Creep_Talking::GetBeastName  (line 168, @0x0000000002966630, libserver.so)
const char *__fastcall CDOTA_BaseNPC_Creep_Talking::GetBeastName(CDOTA_BaseNPC_Creep_Talking *const this)
{
  return "none";
}


// CDOTA_Unit_Roquelaire::~CDOTA_Unit_Roquelaire  (line 175, @0x0000000002983440, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Roquelaire::~CDOTA_Unit_Roquelaire(CDOTA_Unit_Roquelaire *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Roquelaire::~CDOTA_Unit_Roquelaire  (line 175, @0x0000000002984240, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking, ~CDOTA_Unit_Roquelaire
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Roquelaire::~CDOTA_Unit_Roquelaire(CDOTA_Unit_Roquelaire *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Roquelaire::Schema_DynamicBinding  (line 177, @0x0000000002966640, libserver.so)
// globals: CDOTA_Unit_Roquelaire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Roquelaire::Schema_DynamicBinding(
        const CDOTA_Unit_Roquelaire *const this)
{
  return CDOTA_Unit_Roquelaire::s_pSchemaBinding;
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 177, @0x0000000002966670, libserver.so)
// globals: CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::DestructInstance  (line 177, @0x0000000002966680, libserver.so)  // inlines: Destruct<CDOTA_Unit_Roquelaire>
void __fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::FreeInstance  (line 177, @0x00000000029666a0, libserver.so)
void __fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::CanAllocate  (line 177, @0x00000000029666c0, libserver.so)
bool __fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 177, @0x00000000029666d0, libserver.so)
// globals: CDOTA_Unit_Roquelaire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Roquelaire::s_pSchemaBinding;
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::AllocateInstance  (line 177, @0x000000000296a7d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 177, @0x000000000296fb60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 177, @0x000000000296fcd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::ConstructInstance  (line 177, @0x0000000002982770, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creep, CDOTA_BaseNPC_Creep_Talking, CDOTA_Unit_Roquelaire, CNetworkVarBase, Construct<CDOTA_Unit_Roquelaire>, EnsureValidValue<float>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = 0;
    *p = &off_42F2F10;
    *(p + 236) = &off_42F3E78;
    *(p + 257) = &off_42F41A8;
    *(p + 1127) = 0;
  }
  return p;
}


// CDOTA_Unit_Roquelaire::GetEntityClassInternal  (line 177, @0x0000000002987310, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_roquelaire", "CDOTA_Unit_Roquelaire"
// globals: `guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass, CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo, CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo
CEntityClass *__cdecl CDOTA_Unit_Roquelaire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass) != 0 )
  {
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pClassInfo = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_flags = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pInputs = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_nInputCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pOutputs = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_nOutputCount = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pGameClass = 0;
    CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass._vptr_CEntityClass = off_42D60B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass);
    __cxa_atexit(
      CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_RoquelaireClass != 0 )
    return &CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass;
  if ( `guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo,
      "CDOTA_Unit_Roquelaire",
      "npc_dota_roquelaire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo);
  }
  CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pClassInfo = &CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo;
  CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pBaseClassInfo = CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_RoquelaireClass = &CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass;
  CDOTA_Unit_Roquelaire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoquelaireClassInfo.m_pClass = &CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass;
  CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_Unit_RoquelaireClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Roquelaire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoquelaireClass;
}


