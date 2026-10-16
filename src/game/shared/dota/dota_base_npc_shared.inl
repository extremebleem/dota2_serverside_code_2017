
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Brewmaster_PrimalSplit::~CDOTA_Ability_Brewmaster_PrimalSplit  (line 29, @0x0000000002ba0450, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::~CDOTA_Ability_Brewmaster_PrimalSplit(
        CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  this->_vptr_IHandleEntity = &off_44A46B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_PrimalSplit::~CDOTA_Ability_Brewmaster_PrimalSplit  (line 29, @0x0000000002ba0470, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_PrimalSplit
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::~CDOTA_Ability_Brewmaster_PrimalSplit(
        CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  this->_vptr_IHandleEntity = &off_44A46B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x00000000024974c0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x00000000024974d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_PrimalSplit>
void __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x00000000024974f0, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002497510, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002497520, libserver.so)
// globals: CDOTA_Ability_Brewmaster_PrimalSplit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_PrimalSplit::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x00000000024993c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x000000000249c650, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_PrimalSplit, CEntityHandle, CNetworkHandleBase, CNetworkVarBase, Construct<CDOTA_Ability_Brewmaster_PrimalSplit>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *(p + 229) = -1;
    *(p + 230) = -1;
    *p = &off_44A46B0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x000000000249d9f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x000000000249da10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal  (line 31, @0x00000000024a7700, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "brewmaster_primal_split", "CDOTA_Ability_Brewmaster_PrimalSplit"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass, CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo, CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass) != 0 )
  {
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pClassInfo = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_flags = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pInputs = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_nInputCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pOutputs = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_nOutputCount = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pGameClass = 0;
    CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass._vptr_CEntityClass = off_40DD470;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_PrimalSplitClass != 0 )
    return &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo,
      "CDOTA_Ability_Brewmaster_PrimalSplit",
      "brewmaster_primal_split",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo);
  }
  CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo;
  CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_PrimalSplitClass = &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass;
  CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass;
  CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_PrimalSplitClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_PrimalSplit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PrimalSplitClass;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::Schema_DynamicBinding  (line 31, @0x0000000002ba2220, libserver.so)
// calls: CDOTA_Ability_Brewmaster_PrimalSplit::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_PrimalSplit::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  CDOTA_Ability_Brewmaster_PrimalSplit::Schema_VerifyBindingIsRegistered();
  return CDOTA_Ability_Brewmaster_PrimalSplit::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::GetAssociatedSecondaryAbilities  (line 37, @0x0000000002b8d620, libserver.so)
// strings: "brewmaster_thunder_clap;brewmaster_drunken_haze;brewmaster_drunken_brawler"
const char *__fastcall CDOTA_Ability_Brewmaster_PrimalSplit::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  return "brewmaster_thunder_clap;brewmaster_drunken_haze;brewmaster_drunken_brawler";
}


// CDOTA_Ability_Brewmaster_PrimalSplit::SpeakTrigger  (line 39, @0x0000000002b8d630, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::SpeakTrigger(
        CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_START_ACTION_PHASE;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::GetConceptRecipientType  (line 40, @0x0000000002b8d640, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::GetConceptRecipientType(
        CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  return 4;
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 70, @0x0000000002497530, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::DestructInstance  (line 70, @0x0000000002497540, libserver.so)  // inlines: Destruct<CDOTA_Ability_DeathProphet_Exorcism>
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::FreeInstance  (line 70, @0x0000000002497560, libserver.so)
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::CanAllocate  (line 70, @0x0000000002497580, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 70, @0x0000000002497590, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Exorcism::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_Exorcism::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::AllocateInstance  (line 70, @0x0000000002499400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::ConstructInstance  (line 70, @0x000000000249c460, libserver.so)  // inlines: CDOTA_Ability_DeathProphet_Exorcism, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_DeathProphet_Exorcism>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
    *p = &off_43EE4B0;
  }
  return p;
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 70, @0x000000000249da40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 70, @0x000000000249da60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal  (line 70, @0x00000000024a7a50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "death_prophet_exorcism", "CDOTA_Ability_DeathProphet_Exorcism"
// globals: `guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass, CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo, CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo
CEntityClass *__cdecl CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass) != 0 )
  {
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pClassInfo = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_flags = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pInputs = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_nInputCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pOutputs = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_nOutputCount = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pGameClass = 0;
    CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass._vptr_CEntityClass = off_40DD4F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass);
    __cxa_atexit(
      CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DeathProphet_ExorcismClass != 0 )
    return &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass;
  if ( `guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo,
      "CDOTA_Ability_DeathProphet_Exorcism",
      "death_prophet_exorcism",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo);
  }
  CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pClassInfo = &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo;
  CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pBaseClassInfo = CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DeathProphet_ExorcismClass = &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass;
  CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClassInfo.m_pClass = &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass;
  CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DeathProphet_ExorcismClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DeathProphet_Exorcism::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_ExorcismClass;
}


// CDOTA_Ability_DeathProphet_Exorcism::Schema_DynamicBinding  (line 70, @0x0000000002ac6510, libserver.so)
// calls: CDOTA_Ability_DeathProphet_Exorcism::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_Exorcism::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  CDOTA_Ability_DeathProphet_Exorcism::Schema_VerifyBindingIsRegistered();
  return CDOTA_Ability_DeathProphet_Exorcism::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Exorcism::GetConceptRecipientType  (line 80, @0x0000000002ab8420, libserver.so)
int __fastcall CDOTA_Ability_DeathProphet_Exorcism::GetConceptRecipientType(
        CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  return 4;
}


// CDOTA_Ability_DeathProphet_Exorcism::GetAssociatedSecondaryAbilities  (line 82, @0x0000000002ab8430, libserver.so)
// strings: "death_prophet_witchcraft"
const char *__fastcall CDOTA_Ability_DeathProphet_Exorcism::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  return "death_prophet_witchcraft";
}


