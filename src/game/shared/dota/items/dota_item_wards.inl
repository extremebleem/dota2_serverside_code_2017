
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_NPC_Observer_Ward::~CDOTA_NPC_Observer_Ward  (line 20, @0x0000000002e22140, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_Observer_Ward::~CDOTA_NPC_Observer_Ward(CDOTA_NPC_Observer_Ward *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_Observer_Ward::~CDOTA_NPC_Observer_Ward  (line 20, @0x0000000002e22190, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_Observer_Ward
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_Observer_Ward::~CDOTA_NPC_Observer_Ward(CDOTA_NPC_Observer_Ward *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_Observer_Ward::GetEntityClass  (line 22, @0x0000000002e20d00, libserver.so)
CEntityClass *__cdecl CDOTA_NPC_Observer_Ward::GetEntityClass()
{
  return g_pEntityCDOTA_NPC_Observer_WardClass;
}


// CDOTA_NPC_Observer_Ward::Schema_DynamicBinding  (line 22, @0x0000000002e20d10, libserver.so)
// globals: CDOTA_NPC_Observer_Ward::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Observer_Ward::Schema_DynamicBinding(
        const CDOTA_NPC_Observer_Ward *const this)
{
  return CDOTA_NPC_Observer_Ward::s_pSchemaBinding;
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x0000000002e20d40, libserver.so)
// globals: CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x0000000002e20d50, libserver.so)  // inlines: Destruct<CDOTA_NPC_Observer_Ward>
void __fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x0000000002e20d70, libserver.so)
void __fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x0000000002e20d90, libserver.so)
bool __fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x0000000002e20da0, libserver.so)
// globals: CDOTA_NPC_Observer_Ward::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Observer_Ward::s_pSchemaBinding;
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x0000000002e21cf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x0000000002e220f0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_Observer_Ward, Construct<CDOTA_NPC_Observer_Ward>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_478F4D0;
    *(p + 236) = &off_4790440;
    *(p + 257) = &off_4790770;
  }
  return p;
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002e23ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002e23ee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_Observer_Ward::GetEntityClassInfo  (line 22, @0x0000000002e25640, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDOTA_BaseNPC::GetEntityClassInfo
// callers: CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal
// strings: "npc_dota_ward_base", "CDOTA_NPC_Observer_Ward", "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo, CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo, `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo
CEntityClassInfo *__cdecl CDOTA_NPC_Observer_Ward::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo != 0 )
    return &CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo) == 0 )
    return &CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo;
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
    &CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo,
    "CDOTA_NPC_Observer_Ward",
    "npc_dota_ward_base",
    0,
    &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo);
  return &CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo;
}


// CDOTA_NPC_Observer_Ward::GetEntityClassInternal  (line 22, @0x0000000002e26e30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDOTA_BaseNPC::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "npc_dota_ward_base", "CDOTA_NPC_Observer_Ward", "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass, CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo, CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo, `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo (9 total)
CEntityClass *__cdecl CDOTA_NPC_Observer_Ward::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass) != 0 )
  {
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_designerName.u.m_Id = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass._vptr_CEntityClass = off_3F79390;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_AllHelpers.m_Size = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classInputs.m_Size = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classOutputs.m_Size = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_requiredEHandle.m_Index = -1;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_hNetworkSerializer = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pBaseClassInfo = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pClassInfo = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_flags = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_nAllHelpersFlags = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pScriptClassDesc = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pInputs = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_nInputCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pOutputs = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_nOutputCount = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pGameClass = 0;
    CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass._vptr_CEntityClass = off_478C850;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass);
    __cxa_atexit(
      CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_Observer_WardClass != 0 )
    return &CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass;
  if ( `guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo) != 0 )
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
      &CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo,
      "CDOTA_NPC_Observer_Ward",
      "npc_dota_ward_base",
      0,
      &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo);
  }
  CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pClassInfo = &CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo;
  CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pBaseClassInfo = CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_Observer_WardClass = &CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass;
  CDOTA_NPC_Observer_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_WardClassInfo.m_pClass = &CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass;
  CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_Observer_WardClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_Observer_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_WardClass;
}


// CDOTA_NPC_Observer_Ward::WantsToSaveWithLifetime  (line 38, @0x0000000002e20db0, libserver.so)
bool __fastcall CDOTA_NPC_Observer_Ward::WantsToSaveWithLifetime(CDOTA_NPC_Observer_Ward *const this)
{
  return 1;
}


// CDOTA_NPC_Observer_Ward_TrueSight::~CDOTA_NPC_Observer_Ward_TrueSight  (line 72, @0x0000000002e221f0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_Observer_Ward
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::~CDOTA_NPC_Observer_Ward_TrueSight(
        CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_Observer_Ward_TrueSight::~CDOTA_NPC_Observer_Ward_TrueSight  (line 72, @0x0000000002e22240, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_Observer_Ward, ~CDOTA_NPC_Observer_Ward_TrueSight
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::~CDOTA_NPC_Observer_Ward_TrueSight(
        CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClass  (line 74, @0x0000000002e20dc0, libserver.so)
CEntityClass *__cdecl CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClass()
{
  return g_pEntityCDOTA_NPC_Observer_Ward_TrueSightClass;
}


// CDOTA_NPC_Observer_Ward_TrueSight::Schema_DynamicBinding  (line 74, @0x0000000002e20dd0, libserver.so)
// globals: CDOTA_NPC_Observer_Ward_TrueSight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::Schema_DynamicBinding(
        const CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  return CDOTA_NPC_Observer_Ward_TrueSight::s_pSchemaBinding;
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 74, @0x0000000002e20e00, libserver.so)
// globals: CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::DestructInstance  (line 74, @0x0000000002e20e10, libserver.so)  // inlines: Destruct<CDOTA_NPC_Observer_Ward_TrueSight>
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::FreeInstance  (line 74, @0x0000000002e20e30, libserver.so)
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::CanAllocate  (line 74, @0x0000000002e20e50, libserver.so)
bool __fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 74, @0x0000000002e20e60, libserver.so)
// globals: CDOTA_NPC_Observer_Ward_TrueSight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Observer_Ward_TrueSight::s_pSchemaBinding;
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::AllocateInstance  (line 74, @0x0000000002e21d30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4520);
  memset(v1, 0, 0x11A8u);
  return v1;
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::ConstructInstance  (line 74, @0x0000000002e23890, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_Observer_Ward, CDOTA_NPC_Observer_Ward_TrueSight, CEntityHandle, Construct<CDOTA_NPC_Observer_Ward_TrueSight>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1128) = -1;
    *p = &off_47907D0;
    *(p + 236) = &off_4791740;
    *(p + 257) = &off_4791A70;
    *(p + 1129) = -1;
  }
  return p;
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000002e23ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000002e23f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal  (line 74, @0x0000000002e27510, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_NPC_Observer_Ward::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "npc_dota_ward_base_truesight", "CDOTA_NPC_Observer_Ward_TrueSight"
// globals: `guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass, CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo, CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo
CEntityClass *__cdecl CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass) != 0 )
  {
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_designerName.u.m_Id = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass._vptr_CEntityClass = off_3F79390;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_AllHelpers.m_Size = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classInputs.m_Size = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classOutputs.m_Size = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_requiredEHandle.m_Index = -1;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_hNetworkSerializer = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pBaseClassInfo = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pClassInfo = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_flags = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_nAllHelpersFlags = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pScriptClassDesc = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pInputs = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_nInputCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pOutputs = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_nOutputCount = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pGameClass = 0;
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass._vptr_CEntityClass = off_478C8D0;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass);
    __cxa_atexit(
      CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_Observer_Ward_TrueSightClass != 0 )
    return &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass;
  if ( `guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_NPC_Observer_Ward::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo,
      "CDOTA_NPC_Observer_Ward_TrueSight",
      "npc_dota_ward_base_truesight",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo);
  }
  CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pClassInfo = &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo;
  CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pBaseClassInfo = CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_Observer_Ward_TrueSightClass = &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass;
  CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClassInfo.m_pClass = &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass;
  CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_Observer_Ward_TrueSightClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Observer_Ward_TrueSightClass;
}


// CDOTA_NoWardTrigger::~CDOTA_NoWardTrigger  (line 92, @0x0000000002e238f0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_NoWardTrigger::~CDOTA_NoWardTrigger(CDOTA_NoWardTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_NoWardTrigger::~CDOTA_NoWardTrigger  (line 92, @0x0000000002e23970, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CDOTA_NoWardTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_NoWardTrigger::~CDOTA_NoWardTrigger(CDOTA_NoWardTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NoWardTrigger::Schema_DynamicBinding  (line 94, @0x0000000002e20e70, libserver.so)
// globals: CDOTA_NoWardTrigger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NoWardTrigger::Schema_DynamicBinding(
        const CDOTA_NoWardTrigger *const this)
{
  return CDOTA_NoWardTrigger::s_pSchemaBinding;
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 94, @0x0000000002e20e80, libserver.so)
// globals: CDOTA_NoWardTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NoWardTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::DestructInstance  (line 94, @0x0000000002e20e90, libserver.so)  // inlines: Destruct<CDOTA_NoWardTrigger>
void __fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::FreeInstance  (line 94, @0x0000000002e20eb0, libserver.so)
void __fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::CanAllocate  (line 94, @0x0000000002e20ed0, libserver.so)
bool __fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 94, @0x0000000002e20ee0, libserver.so)
// globals: CDOTA_NoWardTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NoWardTrigger::s_pSchemaBinding;
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 94, @0x0000000002e21d70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 94, @0x0000000002e222a0, libserver.so)  // inlines: CDOTA_NoWardTrigger, Construct<CDOTA_NoWardTrigger>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_478EA90;
  }
  return p;
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002e239f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NoWardTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002e23a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NoWardTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NoWardTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NoWardTrigger::GetEntityClassInternal  (line 94, @0x0000000002e28c40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseToggle::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "trigger_no_wards", "CDOTA_NoWardTrigger", "CBaseTrigger"
// globals: `guard variable for'CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass, CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_NoWardTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo, CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo, `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo (9 total)
CEntityClass *__cdecl CDOTA_NoWardTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass) != 0 )
  {
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_designerName.u.m_Id = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_AllHelpers.m_Size = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classInputs.m_Size = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classOutputs.m_Size = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_hNetworkSerializer = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pBaseClassInfo = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pClassInfo = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_flags = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_nAllHelpersFlags = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pScriptClassDesc = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pInputs = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_nInputCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pOutputs = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_nOutputCount = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pGameClass = 0;
    CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass._vptr_CEntityClass = off_478C950;
    __cxa_guard_release(&`guard variable for'CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass);
    __cxa_atexit(
      CDOTA_NoWardTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NoWardTriggerClass != 0 )
    return &CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass;
  if ( `guard variable for'CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseToggle::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
        "CBaseTrigger",
        "trigger",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo,
      "CDOTA_NoWardTrigger",
      "trigger_no_wards",
      0,
      &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo);
  }
  CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pClassInfo = &CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo;
  CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pBaseClassInfo = CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NoWardTriggerClass = &CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass;
  CDOTA_NoWardTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_NoWardTriggerClassInfo.m_pClass = &CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass;
  CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCDOTA_NoWardTriggerClass->m_pComponentOverrides = 0;
  return &CDOTA_NoWardTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_NoWardTriggerClass;
}


