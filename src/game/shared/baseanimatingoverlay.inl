
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAnimatingOverlay::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000001f0eee0, libserver.so)  // inlines: Destruct<CBaseAnimatingOverlay>
void __fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::DestructInstance(
        CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000001f0ef00, libserver.so)
void __fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::FreeInstance(
        CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000001f0ef20, libserver.so)
bool __fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::CanAllocate(
        const CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000001f10cd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::AllocateInstance(
        CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000001f11050, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this)
{
  CBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered();
  return CBaseAnimatingOverlay::s_pSchemaBinding;
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000001f11070, libserver.so)
// calls: CBaseAnimatingOverlay::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this)
{
  CBaseAnimatingOverlay::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseAnimatingOverlay::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000001f11090, libserver.so)  // inlines: Construct<CBaseAnimatingOverlay>
// calls: CBaseAnimatingOverlay::CBaseAnimatingOverlay
CEntityInstance *__fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::ConstructInstance(
        CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseAnimatingOverlay::CBaseAnimatingOverlay(p);
  return p;
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001f12950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseAnimatingOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001f12970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseAnimatingOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseAnimatingOverlay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseAnimatingOverlay::GetEntityClassInfo  (line 28, @0x0000000001fc3f50, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CBaseCombatCharacter::GetEntityClassInfo, CBaseCombatCharacter::GetEntityClassInternal
// strings: "baseanimating_overlay", "CBaseAnimatingOverlay", "baseanimating", "CBaseAnimating"
// globals: `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo, CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo
CEntityClassInfo *__cdecl CBaseAnimatingOverlay::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo != 0 )
    return &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo) == 0 )
    return &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo;
  if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
      "CBaseAnimating",
      "baseanimating",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo,
    "CBaseAnimatingOverlay",
    "baseanimating_overlay",
    0,
    &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
  return &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo;
}


// CBaseAnimatingOverlay::GetEntityClassInternal  (line 28, @0x0000000001fcc7e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseAnimating>, CBaseAnimatingOverlay::SetupEntClassComponentOverrides, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "baseanimating_overlay", "CBaseAnimatingOverlay"
// globals: `guard variable for'CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass, CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass, __dso_handle, CBaseAnimatingOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo, CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo
CEntityClass *__cdecl CBaseAnimatingOverlay::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass);
    CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass._vptr_CEntityClass = off_3FC4FD0;
    __cxa_guard_release(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass);
    __cxa_atexit(
      CBaseAnimatingOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseAnimatingOverlayClass != 0 )
    return &CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass;
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
  CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass.m_pClassInfo = &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo;
  CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass.m_pBaseClassInfo = CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseAnimatingOverlayClass = &CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass;
  CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo.m_pClass = &CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass;
  CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass.m_pScriptClassDesc = GetScriptDesc<CBaseAnimating>(0);
  CBaseAnimatingOverlay::SetupEntClassComponentOverrides(g_pEntityCBaseAnimatingOverlayClass);
  return &CBaseAnimatingOverlay::GetEntityClassInternal(void)::g_EntityCBaseAnimatingOverlayClass;
}


// CBaseAnimatingOverlay::GetEntityClass  (line 28, @0x000000000208eae0, libserver.so)
CEntityClass *__cdecl CBaseAnimatingOverlay::GetEntityClass()
{
  return g_pEntityCBaseAnimatingOverlayClass;
}


// CBaseAnimatingOverlay::Schema_DynamicBinding  (line 28, @0x000000000208fe20, libserver.so)
// calls: CBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseAnimatingOverlay::Schema_DynamicBinding(
        const CBaseAnimatingOverlay *const this)
{
  CBaseAnimatingOverlay::Schema_VerifyBindingIsRegistered();
  return CBaseAnimatingOverlay::s_pSchemaBinding;
}


// CBaseAnimatingOverlay::GetBaseAnimatingOverlay  (line 46, @0x000000000208eaf0, libserver.so)
CBaseAnimatingOverlay *__fastcall CBaseAnimatingOverlay::GetBaseAnimatingOverlay(CBaseAnimatingOverlay *const this)
{
  return this;
}


// CBaseAnimatingOverlay::GetBaseAnimatingOverlay  (line 47, @0x000000000208eb00, libserver.so)
const CBaseAnimatingOverlay *__fastcall CBaseAnimatingOverlay::GetBaseAnimatingOverlay(
        const CBaseAnimatingOverlay *const this)
{
  return this;
}


// CBaseAnimatingOverlay::HackToMakeAVTable  (line 117, @0x000000000208eb10, libserver.so)
void __fastcall CBaseAnimatingOverlay::HackToMakeAVTable(const CBaseAnimatingOverlay *const this)
{
  ;
}


