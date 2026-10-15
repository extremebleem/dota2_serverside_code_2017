
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFlexCycler::~CFlexCycler  (line 27, @0x0000000002211190, libserver.so)
// calls: CBaseFlex::~CBaseFlex
void __fastcall CFlexCycler::~CFlexCycler(CFlexCycler *const this)
{
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
}


// CFlexCycler::~CFlexCycler  (line 27, @0x00000000022111b0, libserver.so)  // inlines: ~CFlexCycler
// calls: CBaseFlex::~CBaseFlex, CBaseEntity::operator delete
void __fastcall CFlexCycler::~CFlexCycler(CFlexCycler *const this)
{
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CFlexCycler::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000001fd8230, libserver.so)
// globals: CFlexCycler::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFlexCycler::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFlexCycler::CEntityInstanceEntityClass *const this)
{
  return CFlexCycler::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFlexCycler::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000001fd8240, libserver.so)  // inlines: Destruct<CFlexCycler>
void __fastcall CFlexCycler::CEntityInstanceEntityClass::DestructInstance(
        CFlexCycler::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFlexCycler::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000001fd8260, libserver.so)
void __fastcall CFlexCycler::CEntityInstanceEntityClass::FreeInstance(
        CFlexCycler::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFlexCycler::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000001fd8280, libserver.so)
bool __fastcall CFlexCycler::CEntityInstanceEntityClass::CanAllocate(
        const CFlexCycler::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFlexCycler::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000001fd8290, libserver.so)
// globals: CFlexCycler::s_pSchemaBinding
const ISchemaBinding *__fastcall CFlexCycler::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFlexCycler::CEntityInstanceEntityClass *const this)
{
  return CFlexCycler::s_pSchemaBinding;
}


// CFlexCycler::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000001fd9660, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFlexCycler::CEntityInstanceEntityClass::AllocateInstance(
        CFlexCycler::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 9608);
  memset(v1, 0, 0x2588u);
  return v1;
}


// CFlexCycler::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000001fd9b90, libserver.so)  // inlines: CFlexCycler, CUtlSymbolLarge, Construct<CFlexCycler>
// calls: CBaseFlex::CBaseFlex
CEntityInstance *__fastcall CFlexCycler::CEntityInstanceEntityClass::ConstructInstance(
        CFlexCycler::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseFlex::CBaseFlex(p);
    *(p + 1199) = 0;
    *(p + 2400) = 0;
    *(p + 2397) = 0;
    *p = &off_403CAF0;
  }
  return p;
}


// CFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000001fdabc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFlexCycler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000001fdabe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFlexCycler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFlexCycler::GetEntityClassInfo  (line 30, @0x0000000001fe0090, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseAnimating::GetEntityClassInfo
// callers: CGenericFlexCycler::GetEntityClassInternal
// strings: "CFlexCycler", "baseanimating_overlay", "CBaseAnimatingOverlay"
// globals: `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo, CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo, `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo, CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo
CEntityClassInfo *__cdecl CFlexCycler::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo != 0 )
    return &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo) == 0 )
    return &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo;
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
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo,
    "CFlexCycler",
    0,
    0,
    &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
  __cxa_guard_release(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
  return &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo;
}


// CFlexCycler::GetEntityClassInternal  (line 30, @0x0000000001fe0190, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "CFlexCycler", "baseanimating_overlay", "CBaseAnimatingOverlay"
// globals: `guard variable for'CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass, CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass, __dso_handle, CFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo, CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo, `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo (10 total)
CEntityClass *__cdecl CFlexCycler::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass);
    CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass._vptr_CEntityClass = off_3FD85D0;
    __cxa_guard_release(&`guard variable for'CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass);
    __cxa_atexit(
      CFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass,
      &_dso_handle);
  }
  if ( g_pEntityCFlexCyclerClass != 0 )
    return &CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass;
  if ( `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo) != 0 )
  {
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
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo,
      "CFlexCycler",
      0,
      0,
      &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
    __cxa_guard_release(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
  }
  CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass.m_pClassInfo = &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo;
  CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass.m_pBaseClassInfo = CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo.m_pBaseClassInfo;
  g_pEntityCFlexCyclerClass = &CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass;
  CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo.m_pClass = &CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass;
  CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCFlexCyclerClass->m_pComponentOverrides = 0;
  return &CFlexCycler::GetEntityClassInternal(void)::g_EntityCFlexCyclerClass;
}


// CFlexCycler::GetEntityClass  (line 30, @0x000000000220ec70, libserver.so)
CEntityClass *__cdecl CFlexCycler::GetEntityClass()
{
  return g_pEntityCFlexCyclerClass;
}


// CFlexCycler::Schema_DynamicBinding  (line 30, @0x0000000002211150, libserver.so)
// calls: CFlexCycler::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFlexCycler::Schema_DynamicBinding(const CFlexCycler *const this)
{
  CFlexCycler::Schema_VerifyBindingIsRegistered();
  return CFlexCycler::s_pSchemaBinding;
}


// CFlexCycler::ObjectCaps  (line 35, @0x0000000002210490, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CFlexCycler::ObjectCaps(CFlexCycler *const this)
{
  return CBaseEntity::ObjectCaps(this) | 1;
}


// CFlexCycler::IsAlive  (line 43, @0x000000000220ec80, libserver.so)
bool __fastcall CFlexCycler::IsAlive(CFlexCycler *const this)
{
  return 0;
}


// CGenericFlexCycler::~CGenericFlexCycler  (line 70, @0x00000000022111e0, libserver.so)  // inlines: ~CFlexCycler
// calls: CBaseFlex::~CBaseFlex
void __fastcall CGenericFlexCycler::~CGenericFlexCycler(CGenericFlexCycler *const this)
{
  this->_vptr_IBoneTransformOverride = &off_403E4A0;
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
}


// CGenericFlexCycler::~CGenericFlexCycler  (line 70, @0x0000000002211210, libserver.so)  // inlines: ~CFlexCycler, ~CGenericFlexCycler
// calls: CBaseFlex::~CBaseFlex, CBaseEntity::operator delete
void __fastcall CGenericFlexCycler::~CGenericFlexCycler(CGenericFlexCycler *const this)
{
  this->_vptr_IBoneTransformOverride = &off_403E4A0;
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CGenericFlexCycler::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 75, @0x0000000001fd82a0, libserver.so)
// globals: CGenericFlexCycler::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGenericFlexCycler::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGenericFlexCycler::CEntityInstanceEntityClass *const this)
{
  return CGenericFlexCycler::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGenericFlexCycler::CEntityInstanceEntityClass::DestructInstance  (line 75, @0x0000000001fd82b0, libserver.so)  // inlines: Destruct<CGenericFlexCycler>
void __fastcall CGenericFlexCycler::CEntityInstanceEntityClass::DestructInstance(
        CGenericFlexCycler::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGenericFlexCycler::CEntityInstanceEntityClass::FreeInstance  (line 75, @0x0000000001fd82d0, libserver.so)
void __fastcall CGenericFlexCycler::CEntityInstanceEntityClass::FreeInstance(
        CGenericFlexCycler::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGenericFlexCycler::CEntityInstanceEntityClass::CanAllocate  (line 75, @0x0000000001fd82f0, libserver.so)
bool __fastcall CGenericFlexCycler::CEntityInstanceEntityClass::CanAllocate(
        const CGenericFlexCycler::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGenericFlexCycler::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 75, @0x0000000001fd8300, libserver.so)
// globals: CGenericFlexCycler::s_pSchemaBinding
const ISchemaBinding *__fastcall CGenericFlexCycler::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGenericFlexCycler::CEntityInstanceEntityClass *const this)
{
  return CGenericFlexCycler::s_pSchemaBinding;
}


// CGenericFlexCycler::CEntityInstanceEntityClass::AllocateInstance  (line 75, @0x0000000001fd96a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGenericFlexCycler::CEntityInstanceEntityClass::AllocateInstance(
        CGenericFlexCycler::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 9680);
  memset(v1, 0, 0x25D0u);
  return v1;
}


// CGenericFlexCycler::CEntityInstanceEntityClass::ConstructInstance  (line 75, @0x0000000001fd9be0, libserver.so)  // inlines: Construct<CGenericFlexCycler>
// calls: CGenericFlexCycler::CGenericFlexCycler
CEntityInstance *__fastcall CGenericFlexCycler::CEntityInstanceEntityClass::ConstructInstance(
        CGenericFlexCycler::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CGenericFlexCycler::CGenericFlexCycler(p);
  return p;
}


// CGenericFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 75, @0x0000000001fdac10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGenericFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGenericFlexCycler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGenericFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 75, @0x0000000001fdac30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGenericFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGenericFlexCycler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGenericFlexCycler::GetEntityClassInternal  (line 75, @0x0000000001fe0360, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CFlexCycler::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "cycler_flex", "CGenericFlexCycler"
// globals: `guard variable for'CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass, CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass, __dso_handle, CGenericFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo, CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo
CEntityClass *__cdecl CGenericFlexCycler::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass);
    CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass._vptr_CEntityClass = off_3FD8650;
    __cxa_guard_release(&`guard variable for'CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass);
    __cxa_atexit(
      CGenericFlexCycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass,
      &_dso_handle);
  }
  if ( g_pEntityCGenericFlexCyclerClass != 0 )
    return &CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass;
  if ( `guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo) != 0 )
  {
    EntityClassInfo = CFlexCycler::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo,
      "CGenericFlexCycler",
      "cycler_flex",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo);
  }
  CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass.m_pClassInfo = &CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo;
  CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass.m_pBaseClassInfo = CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo.m_pBaseClassInfo;
  g_pEntityCGenericFlexCyclerClass = &CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass;
  CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo.m_pClass = &CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass;
  CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCGenericFlexCyclerClass->m_pComponentOverrides = 0;
  return &CGenericFlexCycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerClass;
}


// CGenericFlexCycler::Schema_DynamicBinding  (line 75, @0x0000000002211170, libserver.so)
// calls: CGenericFlexCycler::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGenericFlexCycler::Schema_DynamicBinding(
        const CGenericFlexCycler *const this)
{
  CGenericFlexCycler::Schema_VerifyBindingIsRegistered();
  return CGenericFlexCycler::s_pSchemaBinding;
}


// CGenericFlexCycler::GetEntityClassInfo  (line 75, @0x00000000022189d0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseFlex::GetEntityClassInfo
// callers: CGenericFlexCyclerAlias_cycler::GetEntityClassInternal, CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::InitOptionalTables
// strings: "cycler_flex", "CGenericFlexCycler", "CFlexCycler"
// globals: `guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo, CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo, `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo, CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo
CEntityClassInfo *__cdecl CGenericFlexCycler::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo != 0 )
    return &CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo) == 0 )
    return &CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo;
  if ( `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFlex::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo,
      "CFlexCycler",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo,
    "CGenericFlexCycler",
    "cycler_flex",
    0,
    &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
  __cxa_guard_release(&`guard variable for'CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo);
  return &CGenericFlexCycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerClassInfo;
}


