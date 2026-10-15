
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_DataDriven::Schema_DynamicBinding  (line 37, @0x00000000025c56c0, libserver.so)
// globals: CDOTA_Item_DataDriven::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DataDriven::Schema_DynamicBinding(
        const CDOTA_Item_DataDriven *const this)
{
  return CDOTA_Item_DataDriven::s_pSchemaBinding;
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x00000000025c56e0, libserver.so)
// globals: CDOTA_Item_DataDriven::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DataDriven::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x00000000025c56f0, libserver.so)  // inlines: Destruct<CDOTA_Item_DataDriven>
void __fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x00000000025c5710, libserver.so)
void __fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x00000000025c5730, libserver.so)
bool __fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x00000000025c5740, libserver.so)
// globals: CDOTA_Item_DataDriven::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DataDriven::s_pSchemaBinding;
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x00000000025c74f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1176);
  memset(v1, 0, 0x498u);
  return v1;
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x00000000025cb6a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x00000000025cb6c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_DataDriven::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x00000000025d1d40, libserver.so)  // inlines: Construct<CDOTA_Item_DataDriven>
// calls: CDOTA_Item_DataDriven::CDOTA_Item_DataDriven
CEntityInstance *__fastcall CDOTA_Item_DataDriven::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_DataDriven::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Item_DataDriven::CDOTA_Item_DataDriven(p);
  return p;
}


// CDOTA_Item_DataDriven::GetEntityClassInternal  (line 37, @0x00000000025d68c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item_DataDriven>, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "item_datadriven", "CDOTA_Item_DataDriven"
// globals: `guard variable for'CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass, CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass, __dso_handle, CDOTA_Item_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo, CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo
CEntityClass *__cdecl CDOTA_Item_DataDriven::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass);
    CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass._vptr_CEntityClass = off_410ED70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass);
    __cxa_atexit(
      CDOTA_Item_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_DataDrivenClass != 0 )
    return &CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass;
  if ( `guard variable for'CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo,
      "CDOTA_Item_DataDriven",
      "item_datadriven",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo);
  }
  CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass.m_pClassInfo = &CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo;
  CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass.m_pBaseClassInfo = CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_DataDrivenClass = &CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass;
  CDOTA_Item_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DataDrivenClassInfo.m_pClass = &CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass;
  CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item_DataDriven>(0);
  g_pEntityCDOTA_Item_DataDrivenClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DataDrivenClass;
}


// CDOTA_Item_DataDriven::IsSharedWithTeammates  (line 52, @0x00000000025c5750, libserver.so)
bool __fastcall CDOTA_Item_DataDriven::IsSharedWithTeammates(CDOTA_Item_DataDriven *const this)
{
  return this->m_bIsSharedWithTeammates;
}


// CDOTA_Item_DataDriven::GetPlaybackRateOverride  (line 106, @0x00000000025c5760, libserver.so)
float __fastcall CDOTA_Item_DataDriven::GetPlaybackRateOverride(CDOTA_Item_DataDriven *const this)
{
  return this->m_fAnimationPlaybackRate;
}


// CDOTA_Item_DataDriven::ProcsMagicStick  (line 107, @0x00000000025c5770, libserver.so)
bool __fastcall CDOTA_Item_DataDriven::ProcsMagicStick(CDOTA_Item_DataDriven *const this)
{
  return this->m_bProcsMagicStick;
}


// CDOTA_Item_DataDriven::GetActionContextName  (line 112, @0x00000000025c5780, libserver.so)  // inlines: GetAbilityName
// strings: "<NoAbilityName>"
const char *__fastcall CDOTA_Item_DataDriven::GetActionContextName(CDOTA_Item_DataDriven *const this)
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


// CDOTA_Item_DataDriven::GetActionAbility  (line 119, @0x00000000025c57c0, libserver.so)
CDOTABaseAbility *__fastcall CDOTA_Item_DataDriven::GetActionAbility(CDOTA_Item_DataDriven *const this)
{
  return this;
}


