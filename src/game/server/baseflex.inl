
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseFlex::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000001fb75d0, libserver.so)
// globals: CBaseFlex::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseFlex::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseFlex::CEntityInstanceEntityClass *const this)
{
  return CBaseFlex::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseFlex::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000001fb75e0, libserver.so)  // inlines: Destruct<CBaseFlex>
void __fastcall CBaseFlex::CEntityInstanceEntityClass::DestructInstance(
        CBaseFlex::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseFlex::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000001fb7600, libserver.so)
void __fastcall CBaseFlex::CEntityInstanceEntityClass::FreeInstance(
        CBaseFlex::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseFlex::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000001fb7620, libserver.so)
bool __fastcall CBaseFlex::CEntityInstanceEntityClass::CanAllocate(
        const CBaseFlex::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseFlex::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000001fb7630, libserver.so)
// globals: CBaseFlex::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseFlex::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseFlex::CEntityInstanceEntityClass *const this)
{
  return CBaseFlex::s_pSchemaBinding;
}


// CBaseFlex::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000001fb9960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseFlex::CEntityInstanceEntityClass::AllocateInstance(
        CBaseFlex::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1360);
  memset(v1, 0, 0x550u);
  return v1;
}


// CBaseFlex::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000001fb9e50, libserver.so)  // inlines: Construct<CBaseFlex>
// calls: CBaseFlex::CBaseFlex
CEntityInstance *__fastcall CBaseFlex::CEntityInstanceEntityClass::ConstructInstance(
        CBaseFlex::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseFlex::CBaseFlex(p);
  return p;
}


// CBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000001fbd8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFlex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000001fbd910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFlex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseFlex::GetEntityClassInternal  (line 37, @0x0000000001fcd070, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseFlex>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "baseanimating_overlay", "CBaseAnimatingOverlay"
// globals: `guard variable for'CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass, CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass, __dso_handle, CBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo, CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo
CEntityClass *__cdecl CBaseFlex::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass);
    CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass._vptr_CEntityClass = off_3FD0510;
    __cxa_guard_release(&`guard variable for'CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass);
    __cxa_atexit(
      CBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseFlexClass != 0 )
    return &CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass;
  if ( `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo,
        "CBaseAnimatingOverlay",
        "baseanimating_overlay",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo,
      "CBaseFlex",
      0,
      0,
      &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
  }
  CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass.m_pClassInfo = &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo;
  CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass.m_pBaseClassInfo = CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseFlexClass = &CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass;
  CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo.m_pClass = &CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass;
  CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass.m_pScriptClassDesc = GetScriptDesc<CBaseFlex>(0);
  g_pEntityCBaseFlexClass->m_pComponentOverrides = 0;
  return &CBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexClass;
}


// CBaseFlex::GetEntityClass  (line 37, @0x00000000021796f0, libserver.so)
CEntityClass *__cdecl CBaseFlex::GetEntityClass()
{
  return g_pEntityCBaseFlexClass;
}


// CBaseFlex::Schema_DynamicBinding  (line 37, @0x000000000217b3b0, libserver.so)
// calls: CBaseFlex::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseFlex::Schema_DynamicBinding(const CBaseFlex *const this)
{
  CBaseFlex::Schema_VerifyBindingIsRegistered();
  return CBaseFlex::s_pSchemaBinding;
}


// CBaseFlex::GetEntityClassInfo  (line 37, @0x000000000217d610, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseAnimating::GetEntityClassInfo
// callers: CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal, CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::InitOptionalTables, CGenericFlexCycler::GetEntityClassInfo, NextBotCombatCharacter::GetEntityClassInfo, CEconWearable::GetEntityClassInfo, CEconWearable::GetEntityClassInternal, CFlexExpresser::GetEntityClassInternal, CFlexExpresserShim::GetEntityClassInternal, NextBotCombatCharacter::GetEntityClassInternal
// strings: "baseanimating_overlay", "CBaseAnimatingOverlay"
// globals: `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo, CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo
CEntityClassInfo *__cdecl CBaseFlex::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo != 0 )
    return &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo) == 0 )
    return &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo;
  if ( `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo,
      "CBaseAnimatingOverlay",
      "baseanimating_overlay",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo,
    "CBaseFlex",
    0,
    0,
    &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
  return &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo;
}


// CBaseFlex::HackToMakeAVTable  (line 41, @0x0000000002179700, libserver.so)
void __fastcall CBaseFlex::HackToMakeAVTable(const CBaseFlex *const this)
{
  ;
}


