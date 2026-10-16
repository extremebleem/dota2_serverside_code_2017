
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_DataDriven::Schema_DynamicBinding  (line 46, @0x0000000002456010, libserver.so)
// globals: CDOTA_Ability_DataDriven::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DataDriven::Schema_DynamicBinding(
        const CDOTA_Ability_DataDriven *const this)
{
  return CDOTA_Ability_DataDriven::s_pSchemaBinding;
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002456030, libserver.so)
// globals: CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002456040, libserver.so)  // inlines: Destruct<CDOTA_Ability_DataDriven>
void __fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002456060, libserver.so)
void __fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002456080, libserver.so)
bool __fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002456090, libserver.so)
// globals: CDOTA_Ability_DataDriven::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DataDriven::s_pSchemaBinding;
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002457330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1088);
  memset(v1, 0, 0x440u);
  return v1;
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002459230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002459250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x000000000245b590, libserver.so)  // inlines: Construct<CDOTA_Ability_DataDriven>
// calls: CDOTA_Ability_DataDriven::CDOTA_Ability_DataDriven
CEntityInstance *__fastcall CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DataDriven::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Ability_DataDriven::CDOTA_Ability_DataDriven(p);
  return p;
}


// CDOTA_Ability_DataDriven::GetEntityClassInternal  (line 46, @0x0000000002460bf0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_DataDriven>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_01.cpp
// strings: "ability_datadriven", "CDOTA_Ability_DataDriven"
// globals: `guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass, CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo, CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo
CEntityClass *__cdecl CDOTA_Ability_DataDriven::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass) != 0 )
  {
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pClassInfo = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_flags = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pInputs = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_nInputCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pOutputs = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_nOutputCount = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pGameClass = 0;
    CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass._vptr_CEntityClass = off_40D5430;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass);
    __cxa_atexit(
      CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DataDrivenClass != 0 )
    return &CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass;
  if ( `guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo,
      "CDOTA_Ability_DataDriven",
      "ability_datadriven",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo);
  }
  CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pClassInfo = &CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo;
  CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pBaseClassInfo = CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DataDrivenClass = &CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass;
  CDOTA_Ability_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DataDrivenClassInfo.m_pClass = &CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass;
  CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_DataDriven>(0);
  g_pEntityCDOTA_Ability_DataDrivenClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DataDrivenClass;
}


// CDOTA_Ability_DataDriven::IsSharedWithTeammates  (line 61, @0x00000000024560a0, libserver.so)
bool __fastcall CDOTA_Ability_DataDriven::IsSharedWithTeammates(CDOTA_Ability_DataDriven *const this)
{
  return this->m_bIsSharedWithTeammates;
}


// CDOTA_Ability_DataDriven::GetPlaybackRateOverride  (line 114, @0x00000000024560b0, libserver.so)
float __fastcall CDOTA_Ability_DataDriven::GetPlaybackRateOverride(CDOTA_Ability_DataDriven *const this)
{
  return this->m_fAnimationPlaybackRate;
}


// CDOTA_Ability_DataDriven::ProcsMagicStick  (line 115, @0x00000000024560c0, libserver.so)
bool __fastcall CDOTA_Ability_DataDriven::ProcsMagicStick(CDOTA_Ability_DataDriven *const this)
{
  return this->m_bProcsMagicStick;
}


// CDOTA_Ability_DataDriven::GetActionContextName  (line 120, @0x00000000024560d0, libserver.so)  // inlines: GetAbilityName
// strings: "<NoAbilityName>"
const char *__fastcall CDOTA_Ability_DataDriven::GetActionContextName(CDOTA_Ability_DataDriven *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *result; // rax
  const char *m_pszAbilityName; // rdx

  m_pAbilityData = this->m_pAbilityData;
  result = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      return m_pszAbilityName;
  }
  return result;
}


// CDOTA_Ability_DataDriven::GetActionAbility  (line 126, @0x0000000002456110, libserver.so)
CDOTABaseAbility *__fastcall CDOTA_Ability_DataDriven::GetActionAbility(CDOTA_Ability_DataDriven *const this)
{
  return this;
}


