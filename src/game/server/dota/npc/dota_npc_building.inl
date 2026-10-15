
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Building::~CDOTA_BaseNPC_Building  (line 11, @0x0000000002983480, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
// callers: CDOTA_BaseNPC_HallofFame::CDOTA_BaseNPC_HallofFame
void __fastcall CDOTA_BaseNPC_Building::~CDOTA_BaseNPC_Building(CDOTA_BaseNPC_Building *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Building::~CDOTA_BaseNPC_Building  (line 11, @0x0000000002984b00, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Building::~CDOTA_BaseNPC_Building(CDOTA_BaseNPC_Building *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Building::GetEntityClass  (line 13, @0x00000000029666e0, libserver.so)
CEntityClass *__cdecl CDOTA_BaseNPC_Building::GetEntityClass()
{
  return g_pEntityCDOTA_BaseNPC_BuildingClass;
}


// CDOTA_BaseNPC_Building::Schema_DynamicBinding  (line 13, @0x00000000029666f0, libserver.so)
// globals: CDOTA_BaseNPC_Building::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Building::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Building *const this)
{
  return CDOTA_BaseNPC_Building::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 13, @0x0000000002966720, libserver.so)
// globals: CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::DestructInstance  (line 13, @0x0000000002966730, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Building>
void __fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::FreeInstance  (line 13, @0x0000000002966750, libserver.so)
void __fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::CanAllocate  (line 13, @0x0000000002966770, libserver.so)
bool __fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 13, @0x0000000002966780, libserver.so)
// globals: CDOTA_BaseNPC_Building::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Building::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::AllocateInstance  (line 13, @0x000000000296a810, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 13, @0x000000000296f9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 13, @0x000000000296fee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Building::GetEntityClassInfo  (line 13, @0x0000000002976240, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseCombatCharacter::GetEntityClassInfo
// callers: CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo, CDOTA_BaseNPC_Tower::GetEntityClassInternal, CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal, CDOTA_BaseNPC_Filler::GetEntityClassInternal, CDOTA_BaseNPC_Healer::GetEntityClassInternal, CDOTA_BaseNPC_Fort::GetEntityClassInternal, CDOTA_BaseNPC_Barracks::GetEntityClassInternal, CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal, CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal, CDOTA_BaseNPC_HallofFame::GetEntityClassInternal, CDOTA_BaseNPC_Shop::GetEntityClassInternal
// strings: "npc_dota_building", "CDOTA_BaseNPC_Building", "npc_dota_base", "CDOTA_BaseNPC", "NextBotCombatCharacter"
// globals: `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo, CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo, `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo, NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_Building::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo != 0 )
    return &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo) == 0 )
    return &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo) != 0 )
  {
    if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo) != 0 )
    {
      EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo,
        "NextBotCombatCharacter",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo,
      "CDOTA_BaseNPC",
      "npc_dota_base",
      0,
      &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo,
    "CDOTA_BaseNPC_Building",
    "npc_dota_building",
    0,
    &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo);
  return &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo;
}


// CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::ConstructInstance  (line 13, @0x00000000029827d0, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Building>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Building::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42DB1F0;
    *(p + 236) = &off_42DC150;
    *(p + 257) = &off_42DC480;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
  }
  return p;
}


// CDOTA_BaseNPC_Building::GetEntityClassInternal  (line 13, @0x00000000029879b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseCombatCharacter::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_building", "CDOTA_BaseNPC_Building", "npc_dota_base", "CDOTA_BaseNPC", "NextBotCombatCharacter"
// globals: `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass, CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo, CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo, `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo (11 total)
CEntityClass *__cdecl CDOTA_BaseNPC_Building::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass) != 0 )
  {
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_flags = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pInputs = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass._vptr_CEntityClass = off_42D6130;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_BuildingClass != 0 )
    return &CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass;
  if ( `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo) != 0 )
    {
      if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo) != 0 )
      {
        EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo,
          "NextBotCombatCharacter",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo,
        "CDOTA_BaseNPC",
        "npc_dota_base",
        0,
        &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo,
      "CDOTA_BaseNPC_Building",
      "npc_dota_building",
      0,
      &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo);
  }
  CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pClassInfo = &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo;
  CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pBaseClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_BuildingClass = &CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass;
  CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo.m_pClass = &CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass;
  CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_BuildingClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Building::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BuildingClass;
}


// CDOTA_BaseNPC_Building::GetInvulnCount  (line 31, @0x0000000002966790, libserver.so)
int __fastcall CDOTA_BaseNPC_Building::GetInvulnCount(CDOTA_BaseNPC_Building *const this)
{
  return this->m_iInvulnCount;
}


// CDOTA_BaseNPC_Building::NoTeamMoveTo  (line 33, @0x00000000029667a0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Building::NoTeamMoveTo(CDOTA_BaseNPC_Building *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Tower::~CDOTA_BaseNPC_Tower  (line 142, @0x00000000029844e0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Tower::~CDOTA_BaseNPC_Tower(CDOTA_BaseNPC_Tower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Tower::~CDOTA_BaseNPC_Tower  (line 142, @0x0000000002984c00, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Tower::~CDOTA_BaseNPC_Tower(CDOTA_BaseNPC_Tower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Tower::GetEntityClass  (line 144, @0x00000000029667b0, libserver.so)
CEntityClass *__cdecl CDOTA_BaseNPC_Tower::GetEntityClass()
{
  return g_pEntityCDOTA_BaseNPC_TowerClass;
}


// CDOTA_BaseNPC_Tower::Schema_DynamicBinding  (line 144, @0x00000000029667c0, libserver.so)
// globals: CDOTA_BaseNPC_Tower::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Tower::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Tower *const this)
{
  return CDOTA_BaseNPC_Tower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 144, @0x00000000029667f0, libserver.so)
// globals: CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::DestructInstance  (line 144, @0x0000000002966800, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Tower>
void __fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::FreeInstance  (line 144, @0x0000000002966820, libserver.so)
void __fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::CanAllocate  (line 144, @0x0000000002966840, libserver.so)
bool __fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 144, @0x0000000002966850, libserver.so)
// globals: CDOTA_BaseNPC_Tower::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Tower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::AllocateInstance  (line 144, @0x000000000296a850, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4728);
  memset(v1, 0, 0x1278u);
  return v1;
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 144, @0x000000000296fd40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 144, @0x000000000296ff70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Tower::GetEntityClassInfo  (line 144, @0x0000000002976350, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseCombatCharacter::GetEntityClassInfo
// callers: CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal, CDOTA_BaseNPC_SDKTower::GetEntityClassInternal
// strings: "npc_dota_tower", "CDOTA_BaseNPC_Tower", "npc_dota_building", "CDOTA_BaseNPC_Building", "npc_dota_base", "CDOTA_BaseNPC" (7 total)
// globals: `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo, CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo, `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo, CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo, `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo, NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_Tower::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo != 0 )
    return &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo) == 0 )
    return &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo) != 0 )
    {
      if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo) != 0 )
      {
        EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo,
          "NextBotCombatCharacter",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo,
        "CDOTA_BaseNPC",
        "npc_dota_base",
        0,
        &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo,
      "CDOTA_BaseNPC_Building",
      "npc_dota_building",
      0,
      &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo,
    "CDOTA_BaseNPC_Tower",
    "npc_dota_tower",
    0,
    &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo);
  return &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo;
}


// CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::ConstructInstance  (line 144, @0x0000000002983520, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Tower, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Tower>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42DC4D0;
    *(p + 236) = &off_42DD430;
    *(p + 257) = &off_42DD760;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 587) = off_3F7C190;
    *(p + 1180) = -1;
  }
  return p;
}


// CDOTA_BaseNPC_Tower::GetEntityClassInternal  (line 144, @0x0000000002987d90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_tower", "CDOTA_BaseNPC_Tower"
// globals: `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass, CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo, CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Tower::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass) != 0 )
  {
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_flags = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pInputs = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass._vptr_CEntityClass = off_42D61B0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_TowerClass != 0 )
    return &CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass;
  if ( `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo,
      "CDOTA_BaseNPC_Tower",
      "npc_dota_tower",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo);
  }
  CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pClassInfo = &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo;
  CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pBaseClassInfo = CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_TowerClass = &CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass;
  CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo.m_pClass = &CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass;
  CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_TowerClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Tower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_TowerClass;
}


// CDOTA_BaseNPC_Tower::SetAttacking  (line 154, @0x0000000002982160, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, SetAttacking, operator=, operator=<CBaseEntity*>
// calls: CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
void __fastcall CDOTA_BaseNPC_Tower::SetAttacking(CDOTA_BaseNPC_Tower *const this, CBaseEntity *pAttackTarget)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // si
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-20h] BYREF

  if ( pAttackTarget != 0 && (m_pEntity = pAttackTarget->m_pEntity) != 0 )
  {
    v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hAttackTarget.m_Index) = v6 | this->m_hAttackTarget.m_Index & 0x8000;
    this->m_hAttackTarget.m_Index = (v5 << 15) | this->m_hAttackTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAttackTarget.m_Index = -1;
  }
  CHandle<CBaseEntity>::CHandle(&b, pAttackTarget);
  if ( operator!=<CBaseEntity>(&this->m_hTowerAttackTarget.m_Value, &b) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4720, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hTowerAttackTarget.m_Value = b;
  }
}


// CDOTA_BaseNPC_Filler::~CDOTA_BaseNPC_Filler  (line 178, @0x0000000002984550, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Filler::~CDOTA_BaseNPC_Filler(CDOTA_BaseNPC_Filler *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Filler::~CDOTA_BaseNPC_Filler  (line 178, @0x0000000002984e00, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Filler, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Filler::~CDOTA_BaseNPC_Filler(CDOTA_BaseNPC_Filler *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Filler::Schema_DynamicBinding  (line 180, @0x0000000002966860, libserver.so)
// globals: CDOTA_BaseNPC_Filler::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Filler::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Filler *const this)
{
  return CDOTA_BaseNPC_Filler::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 180, @0x0000000002966890, libserver.so)
// globals: CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::DestructInstance  (line 180, @0x00000000029668a0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Filler>
void __fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::FreeInstance  (line 180, @0x00000000029668c0, libserver.so)
void __fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::CanAllocate  (line 180, @0x00000000029668e0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 180, @0x00000000029668f0, libserver.so)
// globals: CDOTA_BaseNPC_Filler::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Filler::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::AllocateInstance  (line 180, @0x000000000296a890, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 180, @0x000000000296fd80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 180, @0x000000000296ffd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::ConstructInstance  (line 180, @0x00000000029828f0, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Filler, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Filler>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42DD7B0;
    *(p + 236) = &off_42DE710;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_42DEA40;
  }
  return p;
}


// CDOTA_BaseNPC_Filler::GetEntityClassInternal  (line 180, @0x0000000002989500, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_filler", "CDOTA_BaseNPC_Filler"
// globals: `guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass, CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo, CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Filler::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass) != 0 )
  {
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_flags = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pInputs = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass._vptr_CEntityClass = off_42D6230;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_FillerClass != 0 )
    return &CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass;
  if ( `guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo,
      "CDOTA_BaseNPC_Filler",
      "npc_dota_filler",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo);
  }
  CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pClassInfo = &CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo;
  CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pBaseClassInfo = CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_FillerClass = &CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass;
  CDOTA_BaseNPC_Filler::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FillerClassInfo.m_pClass = &CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass;
  CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_FillerClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Filler::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FillerClass;
}


// CDOTA_BaseNPC_Healer::~CDOTA_BaseNPC_Healer  (line 187, @0x0000000002984630, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Healer::~CDOTA_BaseNPC_Healer(CDOTA_BaseNPC_Healer *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Healer::~CDOTA_BaseNPC_Healer  (line 187, @0x0000000002984e80, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Healer, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Healer::~CDOTA_BaseNPC_Healer(CDOTA_BaseNPC_Healer *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Healer::Schema_DynamicBinding  (line 189, @0x0000000002966900, libserver.so)
// globals: CDOTA_BaseNPC_Healer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Healer::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Healer *const this)
{
  return CDOTA_BaseNPC_Healer::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 189, @0x0000000002966930, libserver.so)
// globals: CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::DestructInstance  (line 189, @0x0000000002966940, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Healer>
void __fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::FreeInstance  (line 189, @0x0000000002966960, libserver.so)
void __fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::CanAllocate  (line 189, @0x0000000002966980, libserver.so)
bool __fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 189, @0x0000000002966990, libserver.so)
// globals: CDOTA_BaseNPC_Healer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Healer::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::AllocateInstance  (line 189, @0x000000000296a8d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 189, @0x000000000296fdc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 189, @0x0000000002970030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::ConstructInstance  (line 189, @0x0000000002982b30, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Healer, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Healer>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42DEA90;
    *(p + 236) = &off_42DF9F0;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_42DFD20;
  }
  return p;
}


// CDOTA_BaseNPC_Healer::GetEntityClassInternal  (line 189, @0x0000000002989850, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_healer", "CDOTA_BaseNPC_Healer"
// globals: `guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass, CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo, CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Healer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass) != 0 )
  {
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_flags = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pInputs = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass._vptr_CEntityClass = off_42D62B0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_HealerClass != 0 )
    return &CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass;
  if ( `guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo,
      "CDOTA_BaseNPC_Healer",
      "npc_dota_healer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo);
  }
  CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pClassInfo = &CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo;
  CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pBaseClassInfo = CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_HealerClass = &CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass;
  CDOTA_BaseNPC_Healer::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HealerClassInfo.m_pClass = &CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass;
  CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_HealerClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Healer::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HealerClass;
}


// CDOTA_BaseNPC_Healer::NoTeamMoveTo  (line 193, @0x00000000029669a0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Healer::NoTeamMoveTo(CDOTA_BaseNPC_Healer *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Healer::IsShrine  (line 194, @0x00000000029669b0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Healer::IsShrine(const CDOTA_BaseNPC_Healer *const this)
{
  return 1;
}


// CDOTA_BaseNPC_RespawningTower::~CDOTA_BaseNPC_RespawningTower  (line 202, @0x0000000002984940, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_RespawningTower::~CDOTA_BaseNPC_RespawningTower(
        CDOTA_BaseNPC_RespawningTower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_RespawningTower::~CDOTA_BaseNPC_RespawningTower  (line 202, @0x0000000002985000, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_RespawningTower, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_RespawningTower::~CDOTA_BaseNPC_RespawningTower(
        CDOTA_BaseNPC_RespawningTower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_RespawningTower::Schema_DynamicBinding  (line 204, @0x00000000029669c0, libserver.so)
// globals: CDOTA_BaseNPC_RespawningTower::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_RespawningTower::Schema_DynamicBinding(
        const CDOTA_BaseNPC_RespawningTower *const this)
{
  return CDOTA_BaseNPC_RespawningTower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 204, @0x00000000029669f0, libserver.so)
// globals: CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::DestructInstance  (line 204, @0x0000000002966a00, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_RespawningTower>
void __fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::FreeInstance  (line 204, @0x0000000002966a20, libserver.so)
void __fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::CanAllocate  (line 204, @0x0000000002966a40, libserver.so)
bool __fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 204, @0x0000000002966a50, libserver.so)
// globals: CDOTA_BaseNPC_RespawningTower::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_RespawningTower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::AllocateInstance  (line 204, @0x000000000296a910, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4728);
  memset(v1, 0, 0x1278u);
  return v1;
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 204, @0x000000000296fe20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 204, @0x00000000029700c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::ConstructInstance  (line 204, @0x0000000002983660, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_RespawningTower, CDOTA_BaseNPC_Tower, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_RespawningTower>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *(p + 587) = off_3F7C190;
    *p = &off_42D63B0;
    *(p + 236) = &off_42D7310;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 1180) = -1;
    *(p + 257) = &off_42D7640;
  }
  return p;
}


// CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal  (line 204, @0x00000000029880e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Tower::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_respawning_tower", "CDOTA_BaseNPC_RespawningTower"
// globals: `guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass, CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo, CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass) != 0 )
  {
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_flags = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pInputs = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_nInputCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pOutputs = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pGameClass = 0;
    CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass._vptr_CEntityClass = off_42D6330;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass);
    __cxa_atexit(
      CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_RespawningTowerClass != 0 )
    return &CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass;
  if ( `guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Tower::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo,
      "CDOTA_BaseNPC_RespawningTower",
      "npc_dota_respawning_tower",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo);
  }
  CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pClassInfo = &CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo;
  CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pBaseClassInfo = CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_RespawningTowerClass = &CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass;
  CDOTA_BaseNPC_RespawningTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClassInfo.m_pClass = &CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass;
  CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_RespawningTowerClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_RespawningTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_RespawningTowerClass;
}


// CDOTA_BaseNPC_RespawningTower::UnitCanRespawn  (line 206, @0x0000000002966a60, libserver.so)
bool __fastcall CDOTA_BaseNPC_RespawningTower::UnitCanRespawn(CDOTA_BaseNPC_RespawningTower *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Fort::~CDOTA_BaseNPC_Fort  (line 212, @0x00000000029846a0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Fort::~CDOTA_BaseNPC_Fort(CDOTA_BaseNPC_Fort *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Fort::~CDOTA_BaseNPC_Fort  (line 212, @0x0000000002984f00, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Fort, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Fort::~CDOTA_BaseNPC_Fort(CDOTA_BaseNPC_Fort *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Fort::Schema_DynamicBinding  (line 214, @0x0000000002966a70, libserver.so)
// globals: CDOTA_BaseNPC_Fort::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Fort::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Fort *const this)
{
  return CDOTA_BaseNPC_Fort::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 214, @0x0000000002966aa0, libserver.so)
// globals: CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::DestructInstance  (line 214, @0x0000000002966ab0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Fort>
void __fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::FreeInstance  (line 214, @0x0000000002966ad0, libserver.so)
void __fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::CanAllocate  (line 214, @0x0000000002966af0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 214, @0x0000000002966b00, libserver.so)
// globals: CDOTA_BaseNPC_Fort::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Fort::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::AllocateInstance  (line 214, @0x000000000296a950, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 214, @0x000000000296fe00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 214, @0x0000000002970090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::ConstructInstance  (line 214, @0x0000000002982a10, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Fort, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Fort>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42E1050;
    *(p + 236) = &off_42E1FB0;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_42E22E0;
  }
  return p;
}


// CDOTA_BaseNPC_Fort::GetEntityClassInternal  (line 214, @0x0000000002989ba0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_fort", "CDOTA_BaseNPC_Fort"
// globals: `guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass, CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo, CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Fort::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass) != 0 )
  {
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_flags = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pInputs = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass._vptr_CEntityClass = off_42D7690;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_FortClass != 0 )
    return &CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass;
  if ( `guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo,
      "CDOTA_BaseNPC_Fort",
      "npc_dota_fort",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo);
  }
  CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pClassInfo = &CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo;
  CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pBaseClassInfo = CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_FortClass = &CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass;
  CDOTA_BaseNPC_Fort::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_FortClassInfo.m_pClass = &CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass;
  CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_FortClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Fort::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_FortClass;
}


// CDOTA_BaseNPC_Barracks::~CDOTA_BaseNPC_Barracks  (line 228, @0x0000000002984710, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Barracks::~CDOTA_BaseNPC_Barracks(CDOTA_BaseNPC_Barracks *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Barracks::~CDOTA_BaseNPC_Barracks  (line 228, @0x0000000002984c80, libserver.so)  // inlines: ~CDOTA_BaseNPC_Barracks, ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Barracks::~CDOTA_BaseNPC_Barracks(CDOTA_BaseNPC_Barracks *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Barracks::Schema_DynamicBinding  (line 230, @0x0000000002966b10, libserver.so)
// globals: CDOTA_BaseNPC_Barracks::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Barracks::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Barracks *const this)
{
  return CDOTA_BaseNPC_Barracks::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 230, @0x0000000002966b40, libserver.so)
// globals: CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::DestructInstance  (line 230, @0x0000000002966b50, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Barracks>
void __fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::FreeInstance  (line 230, @0x0000000002966b70, libserver.so)
void __fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::CanAllocate  (line 230, @0x0000000002966b90, libserver.so)
bool __fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 230, @0x0000000002966ba0, libserver.so)
// globals: CDOTA_BaseNPC_Barracks::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Barracks::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::AllocateInstance  (line 230, @0x000000000296a990, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 230, @0x000000000296fd20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 230, @0x000000000296ff10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::ConstructInstance  (line 230, @0x0000000002982d70, libserver.so)  // inlines: CDOTA_BaseNPC_Barracks, CDOTA_BaseNPC_Building, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Barracks>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42DFD70;
    *(p + 236) = &off_42E0CD0;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_42E1000;
  }
  return p;
}


// CDOTA_BaseNPC_Barracks::GetEntityClassInternal  (line 230, @0x0000000002989ef0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_barracks", "CDOTA_BaseNPC_Barracks"
// globals: `guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass, CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo, CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Barracks::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass) != 0 )
  {
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_flags = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pInputs = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass._vptr_CEntityClass = off_42D7710;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_BarracksClass != 0 )
    return &CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass;
  if ( `guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo,
      "CDOTA_BaseNPC_Barracks",
      "npc_dota_barracks",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo);
  }
  CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pClassInfo = &CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo;
  CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pBaseClassInfo = CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_BarracksClass = &CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass;
  CDOTA_BaseNPC_Barracks::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BarracksClassInfo.m_pClass = &CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass;
  CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_BarracksClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Barracks::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_BarracksClass;
}


// CDOTA_BaseNPC_SDKTower::~CDOTA_BaseNPC_SDKTower  (line 241, @0x0000000002984860, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_SDKTower::~CDOTA_BaseNPC_SDKTower(CDOTA_BaseNPC_SDKTower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_SDKTower::~CDOTA_BaseNPC_SDKTower  (line 241, @0x0000000002985080, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_SDKTower, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_SDKTower::~CDOTA_BaseNPC_SDKTower(CDOTA_BaseNPC_SDKTower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_SDKTower::Schema_DynamicBinding  (line 243, @0x0000000002966bb0, libserver.so)
// globals: CDOTA_BaseNPC_SDKTower::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_SDKTower::Schema_DynamicBinding(
        const CDOTA_BaseNPC_SDKTower *const this)
{
  return CDOTA_BaseNPC_SDKTower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 243, @0x0000000002966be0, libserver.so)
// globals: CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::DestructInstance  (line 243, @0x0000000002966bf0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_SDKTower>
void __fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::FreeInstance  (line 243, @0x0000000002966c10, libserver.so)
void __fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::CanAllocate  (line 243, @0x0000000002966c30, libserver.so)
bool __fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 243, @0x0000000002966c40, libserver.so)
// globals: CDOTA_BaseNPC_SDKTower::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_SDKTower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::AllocateInstance  (line 243, @0x000000000296a9d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4728);
  memset(v1, 0, 0x1278u);
  return v1;
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 243, @0x000000000296fe40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 243, @0x00000000029700f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::ConstructInstance  (line 243, @0x00000000029837a0, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_SDKTower, CDOTA_BaseNPC_Tower, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_SDKTower>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *(p + 587) = off_3F7C190;
    *p = &off_42E3610;
    *(p + 236) = &off_42E4570;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 1180) = -1;
    *(p + 257) = &off_42E48A0;
  }
  return p;
}


// CDOTA_BaseNPC_SDKTower::GetEntityClassInternal  (line 243, @0x0000000002988430, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Tower::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_sdk_tower", "CDOTA_BaseNPC_SDKTower"
// globals: `guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass, CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo, CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_SDKTower::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass) != 0 )
  {
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_flags = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pInputs = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_nInputCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pOutputs = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pGameClass = 0;
    CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass._vptr_CEntityClass = off_42D7790;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass);
    __cxa_atexit(
      CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_SDKTowerClass != 0 )
    return &CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass;
  if ( `guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Tower::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo,
      "CDOTA_BaseNPC_SDKTower",
      "npc_dota_sdk_tower",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo);
  }
  CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pClassInfo = &CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo;
  CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pBaseClassInfo = CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_SDKTowerClass = &CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass;
  CDOTA_BaseNPC_SDKTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_SDKTowerClassInfo.m_pClass = &CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass;
  CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_SDKTowerClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_SDKTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_SDKTowerClass;
}


// CDOTA_BaseNPC_HoldoutTower::~CDOTA_BaseNPC_HoldoutTower  (line 253, @0x00000000029848d0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_HoldoutTower::~CDOTA_BaseNPC_HoldoutTower(CDOTA_BaseNPC_HoldoutTower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_HoldoutTower::~CDOTA_BaseNPC_HoldoutTower  (line 253, @0x0000000002984f80, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HoldoutTower, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower::~CDOTA_BaseNPC_HoldoutTower(CDOTA_BaseNPC_HoldoutTower *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower::GetEntityClass  (line 255, @0x0000000002966c50, libserver.so)
CEntityClass *__cdecl CDOTA_BaseNPC_HoldoutTower::GetEntityClass()
{
  return g_pEntityCDOTA_BaseNPC_HoldoutTowerClass;
}


// CDOTA_BaseNPC_HoldoutTower::Schema_DynamicBinding  (line 255, @0x0000000002966c60, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower *const this)
{
  return CDOTA_BaseNPC_HoldoutTower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 255, @0x0000000002966c90, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::DestructInstance  (line 255, @0x0000000002966ca0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_HoldoutTower>
void __fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::FreeInstance  (line 255, @0x0000000002966cc0, libserver.so)
void __fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::CanAllocate  (line 255, @0x0000000002966ce0, libserver.so)
bool __fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 255, @0x0000000002966cf0, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::AllocateInstance  (line 255, @0x000000000296aa10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4728);
  memset(v1, 0, 0x1278u);
  return v1;
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 255, @0x000000000296fe60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 255, @0x0000000002970120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo  (line 255, @0x00000000029764b0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDOTA_BaseNPC_Building::GetEntityClassInfo
// callers: CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal, CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal, CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal
// strings: "npc_dota_holdout_tower", "CDOTA_BaseNPC_HoldoutTower", "npc_dota_tower", "CDOTA_BaseNPC_Tower"
// globals: `guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo, CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo, `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo, CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo != 0 )
    return &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo) == 0 )
    return &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo,
      "CDOTA_BaseNPC_Tower",
      "npc_dota_tower",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo,
    "CDOTA_BaseNPC_HoldoutTower",
    "npc_dota_holdout_tower",
    0,
    &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo);
  return &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo;
}


// CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::ConstructInstance  (line 255, @0x00000000029838e0, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_HoldoutTower, CDOTA_BaseNPC_Tower, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_HoldoutTower>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *(p + 587) = off_3F7C190;
    *p = &off_42E2330;
    *(p + 236) = &off_42E3290;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 1180) = -1;
    *(p + 257) = &off_42E35C0;
  }
  return p;
}


// CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal  (line 255, @0x0000000002988780, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDOTA_BaseNPC_Building::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_holdout_tower", "CDOTA_BaseNPC_HoldoutTower", "npc_dota_tower", "CDOTA_BaseNPC_Tower"
// globals: `guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass, CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo, CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo, `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo (9 total)
CEntityClass *__cdecl CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass) != 0 )
  {
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_flags = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pInputs = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_nInputCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pOutputs = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pGameClass = 0;
    CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass._vptr_CEntityClass = off_42D7810;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass);
    __cxa_atexit(
      CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_HoldoutTowerClass != 0 )
    return &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass;
  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo,
        "CDOTA_BaseNPC_Tower",
        "npc_dota_tower",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo,
      "CDOTA_BaseNPC_HoldoutTower",
      "npc_dota_holdout_tower",
      0,
      &CDOTA_BaseNPC_Tower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_TowerClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo);
  }
  CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pClassInfo = &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo;
  CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pBaseClassInfo = CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_HoldoutTowerClass = &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass;
  CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClassInfo.m_pClass = &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass;
  CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_HoldoutTowerClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_HoldoutTower::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTowerClass;
}


// CDOTA_BaseNPC_HoldoutTower::UnitCanRespawn  (line 270, @0x0000000002966d00, libserver.so)
bool __fastcall CDOTA_BaseNPC_HoldoutTower::UnitCanRespawn(CDOTA_BaseNPC_HoldoutTower *const this)
{
  return 1;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::~CDOTA_BaseNPC_HoldoutTower_LightFast  (line 277, @0x0000000002984a20, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HoldoutTower, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::~CDOTA_BaseNPC_HoldoutTower_LightFast(
        CDOTA_BaseNPC_HoldoutTower_LightFast *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::~CDOTA_BaseNPC_HoldoutTower_LightFast  (line 277, @0x00000000029851f0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HoldoutTower, ~CDOTA_BaseNPC_HoldoutTower_LightFast, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::~CDOTA_BaseNPC_HoldoutTower_LightFast(
        CDOTA_BaseNPC_HoldoutTower_LightFast *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::Schema_DynamicBinding  (line 279, @0x0000000002966d10, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_LightFast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower_LightFast *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_LightFast::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 279, @0x0000000002966d40, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::DestructInstance  (line 279, @0x0000000002966d50, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_HoldoutTower_LightFast>
void __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::FreeInstance  (line 279, @0x0000000002966d70, libserver.so)
void __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::CanAllocate  (line 279, @0x0000000002966d90, libserver.so)
bool __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 279, @0x0000000002966da0, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_LightFast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_LightFast::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::AllocateInstance  (line 279, @0x000000000296aa50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4728);
  memset(v1, 0, 0x1278u);
  return v1;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 279, @0x000000000296fea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 279, @0x0000000002970180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::ConstructInstance  (line 279, @0x0000000002983b60, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_HoldoutTower, CDOTA_BaseNPC_HoldoutTower_LightFast, CDOTA_BaseNPC_Tower, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_HoldoutTower_LightFast>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *(p + 587) = off_3F7C190;
    *p = &off_42E48F0;
    *(p + 236) = &off_42E5850;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 1180) = -1;
    *(p + 257) = &off_42E5B80;
  }
  return p;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal  (line 279, @0x0000000002988b10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_holdout_tower_lightfast", "CDOTA_BaseNPC_HoldoutTower_LightFast"
// globals: `guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass, CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo, CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass) != 0 )
  {
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_flags = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pInputs = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_nInputCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pOutputs = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pGameClass = 0;
    CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass._vptr_CEntityClass = off_42D7890;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass);
    __cxa_atexit(
      CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_HoldoutTower_LightFastClass != 0 )
    return &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass;
  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo,
      "CDOTA_BaseNPC_HoldoutTower_LightFast",
      "npc_dota_holdout_tower_lightfast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo);
  }
  CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pClassInfo = &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo;
  CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pBaseClassInfo = CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_HoldoutTower_LightFastClass = &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass;
  CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClassInfo.m_pClass = &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass;
  CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_HoldoutTower_LightFastClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_HoldoutTower_LightFast::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_LightFastClass;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::~CDOTA_BaseNPC_HoldoutTower_HeavySlow  (line 289, @0x0000000002984a90, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HoldoutTower, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::~CDOTA_BaseNPC_HoldoutTower_HeavySlow(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::~CDOTA_BaseNPC_HoldoutTower_HeavySlow  (line 289, @0x00000000029852f0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HoldoutTower, ~CDOTA_BaseNPC_HoldoutTower_HeavySlow, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::~CDOTA_BaseNPC_HoldoutTower_HeavySlow(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::Schema_DynamicBinding  (line 291, @0x0000000002966db0, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_HeavySlow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower_HeavySlow *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_HeavySlow::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 291, @0x0000000002966de0, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::DestructInstance  (line 291, @0x0000000002966df0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_HoldoutTower_HeavySlow>
void __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::FreeInstance  (line 291, @0x0000000002966e10, libserver.so)
void __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::CanAllocate  (line 291, @0x0000000002966e30, libserver.so)
bool __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 291, @0x0000000002966e40, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_HeavySlow::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_HeavySlow::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::AllocateInstance  (line 291, @0x000000000296aa90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4728);
  memset(v1, 0, 0x1278u);
  return v1;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 291, @0x000000000296fec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 291, @0x00000000029701b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::ConstructInstance  (line 291, @0x0000000002983a20, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_HoldoutTower, CDOTA_BaseNPC_HoldoutTower_HeavySlow, CDOTA_BaseNPC_Tower, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_HoldoutTower_HeavySlow>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *(p + 587) = off_3F7C190;
    *p = &off_42E5BD0;
    *(p + 236) = &off_42E6B30;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 1180) = -1;
    *(p + 257) = &off_42E6E60;
  }
  return p;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal  (line 291, @0x0000000002988e60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_holdout_tower_heavyslow", "CDOTA_BaseNPC_HoldoutTower_HeavySlow"
// globals: `guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass, CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo, CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass) != 0 )
  {
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_flags = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pInputs = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_nInputCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pOutputs = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pGameClass = 0;
    CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass._vptr_CEntityClass = off_42D7910;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass);
    __cxa_atexit(
      CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass != 0 )
    return &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass;
  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo,
      "CDOTA_BaseNPC_HoldoutTower_HeavySlow",
      "npc_dota_holdout_tower_heavyslow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo);
  }
  CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pClassInfo = &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo;
  CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pBaseClassInfo = CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass = &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass;
  CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClassInfo.m_pClass = &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass;
  CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_HeavySlowClass;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::~CDOTA_BaseNPC_HoldoutTower_ReduceSpeed  (line 301, @0x00000000029849b0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HoldoutTower, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::~CDOTA_BaseNPC_HoldoutTower_ReduceSpeed(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::~CDOTA_BaseNPC_HoldoutTower_ReduceSpeed  (line 301, @0x0000000002985270, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HoldoutTower, ~CDOTA_BaseNPC_HoldoutTower_ReduceSpeed, ~CDOTA_BaseNPC_Tower, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::~CDOTA_BaseNPC_HoldoutTower_ReduceSpeed(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::Schema_DynamicBinding  (line 303, @0x0000000002966e50, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower_ReduceSpeed *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 303, @0x0000000002966e80, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::DestructInstance  (line 303, @0x0000000002966e90, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_HoldoutTower_ReduceSpeed>
void __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::FreeInstance  (line 303, @0x0000000002966eb0, libserver.so)
void __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::CanAllocate  (line 303, @0x0000000002966ed0, libserver.so)
bool __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 303, @0x0000000002966ee0, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::AllocateInstance  (line 303, @0x000000000296aad0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4728);
  memset(v1, 0, 0x1278u);
  return v1;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 303, @0x000000000296fe80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 303, @0x0000000002970150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::ConstructInstance  (line 303, @0x0000000002983ca0, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_HoldoutTower, CDOTA_BaseNPC_HoldoutTower_ReduceSpeed, CDOTA_BaseNPC_Tower, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_HoldoutTower_ReduceSpeed>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *(p + 587) = off_3F7C190;
    *p = &off_42E6EB0;
    *(p + 236) = &off_42E7E10;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 1180) = -1;
    *(p + 257) = &off_42E8140;
  }
  return p;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal  (line 303, @0x00000000029891b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_holdout_tower_reducespeed", "CDOTA_BaseNPC_HoldoutTower_ReduceSpeed"
// globals: `guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass, CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo, CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass) != 0 )
  {
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_flags = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pInputs = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_nInputCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pOutputs = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pGameClass = 0;
    CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass._vptr_CEntityClass = off_42D7990;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass);
    __cxa_atexit(
      CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass != 0 )
    return &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass;
  if ( `guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_HoldoutTower::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo,
      "CDOTA_BaseNPC_HoldoutTower_ReduceSpeed",
      "npc_dota_holdout_tower_reducespeed",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo);
  }
  CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pClassInfo = &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo;
  CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pBaseClassInfo = CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass = &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass;
  CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClassInfo.m_pClass = &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass;
  CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HoldoutTower_ReduceSpeedClass;
}


// CDOTA_BaseNPC_Effigy_Statue::~CDOTA_BaseNPC_Effigy_Statue  (line 334, @0x0000000002984780, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Effigy_Statue::~CDOTA_BaseNPC_Effigy_Statue(CDOTA_BaseNPC_Effigy_Statue *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Effigy_Statue::~CDOTA_BaseNPC_Effigy_Statue  (line 334, @0x0000000002984d80, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Effigy_Statue, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Effigy_Statue::~CDOTA_BaseNPC_Effigy_Statue(CDOTA_BaseNPC_Effigy_Statue *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Effigy_Statue::Schema_DynamicBinding  (line 336, @0x0000000002966ef0, libserver.so)
// globals: CDOTA_BaseNPC_Effigy_Statue::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Effigy_Statue::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Effigy_Statue *const this)
{
  return CDOTA_BaseNPC_Effigy_Statue::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 336, @0x0000000002966f20, libserver.so)
// globals: CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::DestructInstance  (line 336, @0x0000000002966f30, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Effigy_Statue>
void __fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::FreeInstance  (line 336, @0x0000000002966f50, libserver.so)
void __fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::CanAllocate  (line 336, @0x0000000002966f70, libserver.so)
bool __fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 336, @0x0000000002966f80, libserver.so)
// globals: CDOTA_BaseNPC_Effigy_Statue::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Effigy_Statue::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::AllocateInstance  (line 336, @0x000000000296ab10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 336, @0x000000000296fda0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 336, @0x0000000002970000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::ConstructInstance  (line 336, @0x0000000002982e90, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Effigy_Statue, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Effigy_Statue>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42E8190;
    *(p + 236) = &off_42E90F0;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_42E9420;
  }
  return p;
}


// CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal  (line 336, @0x000000000298a240, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_effigy_statue", "CDOTA_BaseNPC_Effigy_Statue"
// globals: `guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass, CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo, CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass) != 0 )
  {
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_flags = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pInputs = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass._vptr_CEntityClass = off_42D7A10;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Effigy_StatueClass != 0 )
    return &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass;
  if ( `guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo,
      "CDOTA_BaseNPC_Effigy_Statue",
      "npc_dota_effigy_statue",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo);
  }
  CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pClassInfo = &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo;
  CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pBaseClassInfo = CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Effigy_StatueClass = &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass;
  CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClassInfo.m_pClass = &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass;
  CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_Effigy_StatueClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Effigy_Statue::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_StatueClass;
}


// CDOTA_BaseNPC_Effigy_BattleCup::~CDOTA_BaseNPC_Effigy_BattleCup  (line 354, @0x00000000029845c0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::~CDOTA_BaseNPC_Effigy_BattleCup(
        CDOTA_BaseNPC_Effigy_BattleCup *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Effigy_BattleCup::~CDOTA_BaseNPC_Effigy_BattleCup  (line 354, @0x0000000002984b80, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_Effigy_BattleCup, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::~CDOTA_BaseNPC_Effigy_BattleCup(
        CDOTA_BaseNPC_Effigy_BattleCup *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Effigy_BattleCup::Schema_DynamicBinding  (line 356, @0x0000000002966f90, libserver.so)
// globals: CDOTA_BaseNPC_Effigy_BattleCup::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Effigy_BattleCup::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Effigy_BattleCup *const this)
{
  return CDOTA_BaseNPC_Effigy_BattleCup::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 356, @0x0000000002966fc0, libserver.so)
// globals: CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::DestructInstance  (line 356, @0x0000000002966fd0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Effigy_BattleCup>
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::FreeInstance  (line 356, @0x0000000002966ff0, libserver.so)
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::CanAllocate  (line 356, @0x0000000002967010, libserver.so)
bool __fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 356, @0x0000000002967020, libserver.so)
// globals: CDOTA_BaseNPC_Effigy_BattleCup::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Effigy_BattleCup::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::AllocateInstance  (line 356, @0x000000000296ab50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 356, @0x000000000296fd60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 356, @0x000000000296ffa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::ConstructInstance  (line 356, @0x0000000002982c50, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Effigy_BattleCup, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_BaseNPC_Effigy_BattleCup>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_42E9470;
    *(p + 236) = &off_42EA3D0;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_42EA700;
  }
  return p;
}


// CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal  (line 356, @0x000000000298a590, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_effigy_battle_cup", "CDOTA_BaseNPC_Effigy_BattleCup"
// globals: `guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass, CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo, CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass) != 0 )
  {
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_flags = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pInputs = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass._vptr_CEntityClass = off_42D7A90;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Effigy_BattleCupClass != 0 )
    return &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass;
  if ( `guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo,
      "CDOTA_BaseNPC_Effigy_BattleCup",
      "npc_dota_effigy_battle_cup",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo);
  }
  CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pClassInfo = &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo;
  CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pBaseClassInfo = CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Effigy_BattleCupClass = &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass;
  CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClassInfo.m_pClass = &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass;
  CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_Effigy_BattleCupClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Effigy_BattleCup::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Effigy_BattleCupClass;
}


