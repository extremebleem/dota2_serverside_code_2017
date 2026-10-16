
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Creature::~CDOTA_BaseNPC_Creature  (line 95, @0x0000000002983e50, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<CreatureAbilityData_t, int>::Purge, CUtlMemory<CreatureStateData_t, int>::Purge, CUtlMemory<ItemDropData_t, int>::Purge
void __fastcall CDOTA_BaseNPC_Creature::~CDOTA_BaseNPC_Creature(CDOTA_BaseNPC_Creature *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecAttachWearableItemDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_42EB950;
  this->_vptr_INextBotEventResponder = &off_42EC958;
  this->m_vecAttachWearableItemDefs.m_Size = 0;
  this->_vptr_CObstructionObject = &off_42ECC88;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecAttachWearableItemDefs.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecAttachWearableItemDefs.m_Memory);
    if ( (this->m_vecAttachWearableItemDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_vItemDropData.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vItemDropData.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ItemDropData_t,int>::Purge(&this->m_vItemDropData.m_Memory);
    if ( (this->m_vItemDropData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ItemDropData_t,int>::Purge(&this->m_vItemDropData.m_Memory);
  }
  v2 = (this->m_vEscapeAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vEscapeAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vEscapeAbilities.m_Memory);
    if ( (this->m_vEscapeAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vEscapeAbilities.m_Memory);
  }
  v2 = (this->m_vDefensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vDefensiveAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vDefensiveAbilities.m_Memory);
    if ( (this->m_vDefensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vDefensiveAbilities.m_Memory);
  }
  v2 = (this->m_vOffensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vOffensiveAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vOffensiveAbilities.m_Memory);
    if ( (this->m_vOffensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vOffensiveAbilities.m_Memory);
  }
  v2 = (this->m_vCreatureStates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vCreatureStates.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureStateData_t,int>::Purge(&this->m_vCreatureStates.m_Memory);
    if ( (this->m_vCreatureStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureStateData_t,int>::Purge(&this->m_vCreatureStates.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Creature::~CDOTA_BaseNPC_Creature  (line 95, @0x0000000002985460, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creature, ~CDOTA_BaseNPC_Creep, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<CreatureAbilityData_t, int>::Purge, CUtlMemory<CreatureStateData_t, int>::Purge, CUtlMemory<ItemDropData_t, int>::Purge
void __fastcall CDOTA_BaseNPC_Creature::~CDOTA_BaseNPC_Creature(CDOTA_BaseNPC_Creature *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecAttachWearableItemDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_42EB950;
  this->_vptr_INextBotEventResponder = &off_42EC958;
  this->m_vecAttachWearableItemDefs.m_Size = 0;
  this->_vptr_CObstructionObject = &off_42ECC88;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecAttachWearableItemDefs.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecAttachWearableItemDefs.m_Memory);
    if ( (this->m_vecAttachWearableItemDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_vItemDropData.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vItemDropData.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ItemDropData_t,int>::Purge(&this->m_vItemDropData.m_Memory);
    if ( (this->m_vItemDropData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ItemDropData_t,int>::Purge(&this->m_vItemDropData.m_Memory);
  }
  v2 = (this->m_vEscapeAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vEscapeAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vEscapeAbilities.m_Memory);
    if ( (this->m_vEscapeAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vEscapeAbilities.m_Memory);
  }
  v2 = (this->m_vDefensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vDefensiveAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vDefensiveAbilities.m_Memory);
    if ( (this->m_vDefensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vDefensiveAbilities.m_Memory);
  }
  v2 = (this->m_vOffensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vOffensiveAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vOffensiveAbilities.m_Memory);
    if ( (this->m_vOffensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vOffensiveAbilities.m_Memory);
  }
  v2 = (this->m_vCreatureStates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vCreatureStates.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureStateData_t,int>::Purge(&this->m_vCreatureStates.m_Memory);
    if ( (this->m_vCreatureStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureStateData_t,int>::Purge(&this->m_vCreatureStates.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Creature::Schema_DynamicBinding  (line 97, @0x00000000029675d0, libserver.so)
// globals: CDOTA_BaseNPC_Creature::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creature::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creature *const this)
{
  return CDOTA_BaseNPC_Creature::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 97, @0x0000000002967600, libserver.so)
// globals: CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::DestructInstance  (line 97, @0x0000000002967610, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Creature>
void __fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::FreeInstance  (line 97, @0x0000000002967630, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::CanAllocate  (line 97, @0x0000000002967650, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 97, @0x0000000002967660, libserver.so)
// globals: CDOTA_BaseNPC_Creature::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Creature::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::AllocateInstance  (line 97, @0x000000000296acd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4816);
  memset(v1, 0, 0x12D0u);
  return v1;
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 97, @0x000000000296fb20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 97, @0x000000000296fc10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::ConstructInstance  (line 97, @0x00000000029840e0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creature, CDOTA_BaseNPC_Creep, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_BaseNPC_Creature>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = 0;
    *p = &off_42EB950;
    *(p + 236) = &off_42EC958;
    *(p + 257) = &off_42ECC88;
    *(p + 1128) = 0;
    *(p + 565) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1156) = 0;
    *(p + 579) = 0;
    *(p + 1160) = 0;
    *(p + 1161) = 0;
    *(p + 1164) = 0;
    *(p + 583) = 0;
    *(p + 1168) = 0;
    *(p + 1169) = 0;
    *(p + 1172) = 0;
    *(p + 587) = 0;
    *(p + 1176) = 0;
    *(p + 1177) = 0;
    *(p + 1192) = 0;
    *(p + 597) = 0;
    *(p + 1196) = 0;
    *(p + 1197) = 0;
    *(p + 1198) = 0;
    *(p + 600) = 0;
    *(p + 1202) = 0;
    *(p + 1203) = 0;
    *(p + 4508) = 0;
  }
  return p;
}


// CDOTA_BaseNPC_Creature::GetEntityClassInternal  (line 97, @0x000000000298af80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Creature>, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_creature", "CDOTA_BaseNPC_Creature"
// globals: `guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass, CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo, CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Creature::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass) != 0 )
  {
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_flags = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pInputs = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass._vptr_CEntityClass = off_42EB8D0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_CreatureClass != 0 )
    return &CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass;
  if ( `guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo,
      "CDOTA_BaseNPC_Creature",
      "npc_dota_creature",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo);
  }
  CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pClassInfo = &CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo;
  CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pBaseClassInfo = CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_CreatureClass = &CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass;
  CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo.m_pClass = &CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass;
  CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Creature>(0);
  g_pEntityCDOTA_BaseNPC_CreatureClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Creature::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_CreatureClass;
}


// CDOTA_BaseNPC_Creature::IsConsideredHero  (line 111, @0x0000000002967670, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creature::IsConsideredHero(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_bIsChampion;
}


// CDOTA_BaseNPC_Creature::SetChampion  (line 113, @0x0000000002967680, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetChampion(CDOTA_BaseNPC_Creature *const this, bool bIsChampion)
{
  this->m_bIsChampion = bIsChampion;
}


// CDOTA_BaseNPC_Creature::IsChampion  (line 114, @0x0000000002967690, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creature::IsChampion(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_bIsChampion;
}


// CDOTA_BaseNPC_Creature::UnitCanRespawn  (line 116, @0x00000000029676a0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creature::UnitCanRespawn(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_bCanRespawn;
}


// CDOTA_BaseNPC_Creature::UsedGestureBasedAttackAnimation  (line 117, @0x00000000029676b0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creature::UsedGestureBasedAttackAnimation(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_bUsesGestureBasedAttackAnimation;
}


// CDOTA_BaseNPC_Creature::IsHybridFlyer  (line 118, @0x00000000029676c0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Creature::IsHybridFlyer(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_bIsHybridFlyer;
}


// CDOTA_BaseNPC_Creature::GetPermanentDesire  (line 140, @0x00000000029676d0, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetPermanentDesire(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nPermanentDesire;
}


// CDOTA_BaseNPC_Creature::GetCreatureDesire  (line 141, @0x00000000029676e0, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetCreatureDesire(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nCreatureDesire;
}


// CDOTA_BaseNPC_Creature::GetHPGain  (line 146, @0x00000000029676f0, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetHPGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nHPGain;
}


// CDOTA_BaseNPC_Creature::GetManaGain  (line 147, @0x0000000002967700, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetManaGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nManaGain;
}


// CDOTA_BaseNPC_Creature::GetHPRegenGain  (line 148, @0x0000000002967710, libserver.so)
float __fastcall CDOTA_BaseNPC_Creature::GetHPRegenGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_flHPRegenGain;
}


// CDOTA_BaseNPC_Creature::GetManaRegenGain  (line 149, @0x0000000002967720, libserver.so)
float __fastcall CDOTA_BaseNPC_Creature::GetManaRegenGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_flManaRegenGain;
}


// CDOTA_BaseNPC_Creature::GetDamageGain  (line 150, @0x0000000002967730, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetDamageGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nDamageGain;
}


// CDOTA_BaseNPC_Creature::GetArmorGain  (line 151, @0x0000000002967740, libserver.so)
float __fastcall CDOTA_BaseNPC_Creature::GetArmorGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_flArmorGain;
}


// CDOTA_BaseNPC_Creature::GetMagicResistanceGain  (line 152, @0x0000000002967750, libserver.so)
float __fastcall CDOTA_BaseNPC_Creature::GetMagicResistanceGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_flMagicResistGain;
}


// CDOTA_BaseNPC_Creature::GetDisableResistanceGain  (line 153, @0x0000000002967760, libserver.so)
float __fastcall CDOTA_BaseNPC_Creature::GetDisableResistanceGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_flDisableResistGain;
}


// CDOTA_BaseNPC_Creature::GetAttackTimeGain  (line 154, @0x0000000002967770, libserver.so)
float __fastcall CDOTA_BaseNPC_Creature::GetAttackTimeGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_flAttackTimeGain;
}


// CDOTA_BaseNPC_Creature::GetMoveSpeedGain  (line 155, @0x0000000002967780, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetMoveSpeedGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nMoveSpeedGain;
}


// CDOTA_BaseNPC_Creature::GetBountyGain  (line 156, @0x0000000002967790, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetBountyGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nBountyGain;
}


// CDOTA_BaseNPC_Creature::GetXPGain  (line 157, @0x00000000029677a0, libserver.so)
int __fastcall CDOTA_BaseNPC_Creature::GetXPGain(CDOTA_BaseNPC_Creature *const this)
{
  return this->m_nXPGain;
}


// CDOTA_BaseNPC_Creature::SetHPGain  (line 158, @0x00000000029677b0, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetHPGain(CDOTA_BaseNPC_Creature *const this, int nHPGain)
{
  this->m_nHPGain = nHPGain;
}


// CDOTA_BaseNPC_Creature::SetManaGain  (line 159, @0x00000000029677c0, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetManaGain(CDOTA_BaseNPC_Creature *const this, int nManaGain)
{
  this->m_nManaGain = nManaGain;
}


// CDOTA_BaseNPC_Creature::SetHPRegenGain  (line 160, @0x00000000029677d0, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetHPRegenGain(
        CDOTA_BaseNPC_Creature *const this,
        float a2,
        float flHPRegenGain)
{
  this->m_flHPRegenGain = a2;
}


// CDOTA_BaseNPC_Creature::SetManaRegenGain  (line 161, @0x00000000029677e0, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetManaRegenGain(
        CDOTA_BaseNPC_Creature *const this,
        float a2,
        float flManaRegenGain)
{
  this->m_flManaRegenGain = a2;
}


// CDOTA_BaseNPC_Creature::SetDamageGain  (line 162, @0x00000000029677f0, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetDamageGain(CDOTA_BaseNPC_Creature *const this, int nDamageGain)
{
  this->m_nDamageGain = nDamageGain;
}


// CDOTA_BaseNPC_Creature::SetArmorGain  (line 163, @0x0000000002967800, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetArmorGain(CDOTA_BaseNPC_Creature *const this, float a2, float flArmorGain)
{
  this->m_flArmorGain = a2;
}


// CDOTA_BaseNPC_Creature::SetMagicResistanceGain  (line 164, @0x0000000002967810, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetMagicResistanceGain(
        CDOTA_BaseNPC_Creature *const this,
        float a2,
        float flMagicResistanceGain)
{
  this->m_flMagicResistGain = a2;
}


// CDOTA_BaseNPC_Creature::SetDisableResistanceGain  (line 165, @0x0000000002967820, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetDisableResistanceGain(
        CDOTA_BaseNPC_Creature *const this,
        float a2,
        float flDisableResistanceGain)
{
  this->m_flDisableResistGain = a2;
}


// CDOTA_BaseNPC_Creature::SetAttackTimeGain  (line 166, @0x0000000002967830, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetAttackTimeGain(
        CDOTA_BaseNPC_Creature *const this,
        float a2,
        float flAttackTimeGain)
{
  this->m_flAttackTimeGain = a2;
}


// CDOTA_BaseNPC_Creature::SetMoveSpeedGain  (line 167, @0x0000000002967840, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetMoveSpeedGain(CDOTA_BaseNPC_Creature *const this, int nMoveSpeedGain)
{
  this->m_nMoveSpeedGain = nMoveSpeedGain;
}


// CDOTA_BaseNPC_Creature::SetBountyGain  (line 168, @0x0000000002967850, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetBountyGain(CDOTA_BaseNPC_Creature *const this, int nBountyGain)
{
  this->m_nBountyGain = nBountyGain;
}


// CDOTA_BaseNPC_Creature::SetXPGain  (line 169, @0x0000000002967860, libserver.so)
void __fastcall CDOTA_BaseNPC_Creature::SetXPGain(CDOTA_BaseNPC_Creature *const this, int nXPGain)
{
  this->m_nXPGain = nXPGain;
}


