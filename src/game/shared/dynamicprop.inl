
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDynamicProp::~CDynamicProp  (line 25, @0x0000000002092950, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDynamicProp::~CDynamicProp(CDynamicProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDynamicProp::~CDynamicProp  (line 25, @0x0000000002092a20, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDynamicProp::~CDynamicProp(CDynamicProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDynamicProp::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000001ea14e0, libserver.so)  // inlines: Destruct<CDynamicProp>
void __fastcall CDynamicProp::CEntityInstanceEntityClass::DestructInstance(
        CDynamicProp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDynamicProp::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000001ea1500, libserver.so)
void __fastcall CDynamicProp::CEntityInstanceEntityClass::FreeInstance(
        CDynamicProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDynamicProp::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x0000000001ea1520, libserver.so)
bool __fastcall CDynamicProp::CEntityInstanceEntityClass::CanAllocate(
        const CDynamicProp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDynamicProp::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x0000000001ea1bd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDynamicProp::CEntityInstanceEntityClass::AllocateInstance(
        CDynamicProp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1752);
  memset(v1, 0, 0x6D8u);
  return v1;
}


// CDynamicProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x0000000001ea2150, libserver.so)  // inlines: Schema_StaticBinding
// calls: CDynamicProp::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CDynamicProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDynamicProp::CEntityInstanceEntityClass *const this)
{
  CDynamicProp::Schema_VerifyBindingIsRegistered();
  return CDynamicProp::s_pSchemaBinding;
}


// CDynamicProp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000001ea2170, libserver.so)
// calls: CDynamicProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDynamicProp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDynamicProp::CEntityInstanceEntityClass *const this)
{
  CDynamicProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CDynamicProp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDynamicProp::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x0000000001ea2190, libserver.so)  // inlines: Construct<CDynamicProp>
// calls: CDynamicProp::CDynamicProp
CEntityInstance *__fastcall CDynamicProp::CEntityInstanceEntityClass::ConstructInstance(
        CDynamicProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDynamicProp::CDynamicProp(p);
  return p;
}


// CDynamicProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000001ea2870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDynamicProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDynamicProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000001ea2890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDynamicProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDynamicProp::GetEntityClassInfo  (line 27, @0x0000000001fdd8c0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseAnimating::GetEntityClassInfo
// callers: CDynamicPropAlias_dynamic_prop::GetEntityClassInternal, CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal, CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::InitOptionalTables, CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::InitOptionalTables, CPropDoorRotating::GetEntityClassInfo, COrnamentProp::GetEntityClassInternal, CPropDoorRotating::GetEntityClassInternal
// strings: "prop_dynamic", "CDynamicProp", "CBreakableProp", "CBaseProp"
// globals: `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo, CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo, `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo, CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo
CEntityClassInfo *__cdecl CDynamicProp::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo != 0 )
    return &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo) == 0 )
    return &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo;
  if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
        "CBaseProp",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
      "CBreakableProp",
      0,
      0,
      &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo,
    "CDynamicProp",
    "prop_dynamic",
    0,
    &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
  __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
  return &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo;
}


// CDynamicProp::GetEntityClassInternal  (line 27, @0x0000000001fdd9d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "prop_dynamic", "CDynamicProp", "CBreakableProp", "CBaseProp"
// globals: `guard variable for'CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass, CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass, __dso_handle, CDynamicProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo, CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo, `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo, CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo (10 total)
CEntityClass *__cdecl CDynamicProp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass);
    CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass._vptr_CEntityClass = off_3FAF6B0;
    __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass);
    __cxa_atexit(
      CDynamicProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass,
      &_dso_handle);
  }
  if ( g_pEntityCDynamicPropClass != 0 )
    return &CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass;
  if ( `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo) != 0 )
  {
    if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
      {
        EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
          "CBaseProp",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
        "CBreakableProp",
        0,
        0,
        &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
      __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo,
      "CDynamicProp",
      "prop_dynamic",
      0,
      &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
    __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
  }
  CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass.m_pClassInfo = &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo;
  CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass.m_pBaseClassInfo = CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo.m_pBaseClassInfo;
  g_pEntityCDynamicPropClass = &CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass;
  CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo.m_pClass = &CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass;
  CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDynamicPropClass->m_pComponentOverrides = 0;
  return &CDynamicProp::GetEntityClassInternal(void)::g_EntityCDynamicPropClass;
}


// CDynamicProp::GetEntityClass  (line 27, @0x000000000208ed80, libserver.so)
CEntityClass *__cdecl CDynamicProp::GetEntityClass()
{
  return g_pEntityCDynamicPropClass;
}


// CDynamicProp::Schema_DynamicBinding  (line 27, @0x00000000020901a0, libserver.so)
// calls: CDynamicProp::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDynamicProp::Schema_DynamicBinding(const CDynamicProp *const this)
{
  CDynamicProp::Schema_VerifyBindingIsRegistered();
  return CDynamicProp::s_pSchemaBinding;
}


// CDynamicProp::UseServerSideAnimation  (line 44, @0x0000000001ea1530, libserver.so)
bool __fastcall CDynamicProp::UseServerSideAnimation(const CDynamicProp *const this)
{
  return this->m_bAnimateOnServer;
}


// CDynamicPropAlias_dynamic_prop::Schema_DynamicBinding  (line 127, @0x0000000001fd7bf0, libserver.so)
// globals: CDynamicPropAlias_dynamic_prop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDynamicPropAlias_dynamic_prop::Schema_DynamicBinding(
        const CDynamicPropAlias_dynamic_prop *const this)
{
  return CDynamicPropAlias_dynamic_prop::s_pSchemaBinding;
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 127, @0x0000000001fd7c00, libserver.so)
// globals: CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this)
{
  return CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::DestructInstance  (line 127, @0x0000000001fd7c10, libserver.so)  // inlines: Destruct<CDynamicPropAlias_dynamic_prop>
void __fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::DestructInstance(
        CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::FreeInstance  (line 127, @0x0000000001fd7c30, libserver.so)
void __fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::FreeInstance(
        CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::CanAllocate  (line 127, @0x0000000001fd7c50, libserver.so)
bool __fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::CanAllocate(
        const CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 127, @0x0000000001fd7c60, libserver.so)
// globals: CDynamicPropAlias_dynamic_prop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this)
{
  return CDynamicPropAlias_dynamic_prop::s_pSchemaBinding;
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::AllocateInstance  (line 127, @0x0000000001fd92e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::AllocateInstance(
        CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1752);
  memset(v1, 0, 0x6D8u);
  return v1;
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::ConstructInstance  (line 127, @0x0000000001fd9980, libserver.so)  // inlines: CDynamicPropAlias_dynamic_prop, Construct<CDynamicPropAlias_dynamic_prop>
// calls: CDynamicProp::CDynamicProp
CEntityInstance *__fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::ConstructInstance(
        CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDynamicProp::CDynamicProp(p);
    *p = &off_3FD5010;
    *(p + 152) = off_3FD5960;
    *(p + 153) = &off_3FD5A78;
  }
  return p;
}


// CDynamicPropAlias_dynamic_prop::~CDynamicPropAlias_dynamic_prop  (line 127, @0x0000000001fda460, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDynamicPropAlias_dynamic_prop::~CDynamicPropAlias_dynamic_prop(
        CDynamicPropAlias_dynamic_prop *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDynamicPropAlias_dynamic_prop::~CDynamicPropAlias_dynamic_prop  (line 127, @0x0000000001fda4c0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp, ~CDynamicPropAlias_dynamic_prop
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDynamicPropAlias_dynamic_prop::~CDynamicPropAlias_dynamic_prop(
        CDynamicPropAlias_dynamic_prop *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x0000000001fdac60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x0000000001fdac80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDynamicPropAlias_dynamic_prop::GetEntityClassInternal  (line 127, @0x0000000001fddba0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CDynamicProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "dynamic_prop", "CDynamicPropAlias_dynamic_prop"
// globals: `guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass, CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass, __dso_handle, CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo, CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo
CEntityClass *__cdecl CDynamicPropAlias_dynamic_prop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass);
    CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass._vptr_CEntityClass = off_3FD4F90;
    __cxa_guard_release(&`guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass);
    __cxa_atexit(
      CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass,
      &_dso_handle);
  }
  if ( g_pEntityCDynamicPropAlias_dynamic_propClass != 0 )
    return &CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass;
  if ( `guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo) != 0 )
  {
    EntityClassInfo = CDynamicProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo,
      "CDynamicPropAlias_dynamic_prop",
      "dynamic_prop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo);
  }
  CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass.m_pClassInfo = &CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo;
  CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass.m_pBaseClassInfo = CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo.m_pBaseClassInfo;
  g_pEntityCDynamicPropAlias_dynamic_propClass = &CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass;
  CDynamicPropAlias_dynamic_prop::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_dynamic_propClassInfo.m_pClass = &CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass;
  CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDynamicPropAlias_dynamic_propClass->m_pComponentOverrides = 0;
  return &CDynamicPropAlias_dynamic_prop::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_dynamic_propClass;
}


// CDynamicPropAlias_prop_dynamic_override::Schema_DynamicBinding  (line 128, @0x0000000001fd7c70, libserver.so)
// globals: CDynamicPropAlias_prop_dynamic_override::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDynamicPropAlias_prop_dynamic_override::Schema_DynamicBinding(
        const CDynamicPropAlias_prop_dynamic_override *const this)
{
  return CDynamicPropAlias_prop_dynamic_override::s_pSchemaBinding;
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 128, @0x0000000001fd7c80, libserver.so)
// globals: CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this)
{
  return CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::DestructInstance  (line 128, @0x0000000001fd7c90, libserver.so)  // inlines: Destruct<CDynamicPropAlias_prop_dynamic_override>
void __fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::DestructInstance(
        CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::FreeInstance  (line 128, @0x0000000001fd7cb0, libserver.so)
void __fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::FreeInstance(
        CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::CanAllocate  (line 128, @0x0000000001fd7cd0, libserver.so)
bool __fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::CanAllocate(
        const CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 128, @0x0000000001fd7ce0, libserver.so)
// globals: CDynamicPropAlias_prop_dynamic_override::s_pSchemaBinding
const ISchemaBinding *__fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this)
{
  return CDynamicPropAlias_prop_dynamic_override::s_pSchemaBinding;
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::AllocateInstance  (line 128, @0x0000000001fd9320, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::AllocateInstance(
        CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1752);
  memset(v1, 0, 0x6D8u);
  return v1;
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::ConstructInstance  (line 128, @0x0000000001fd99d0, libserver.so)  // inlines: CDynamicPropAlias_prop_dynamic_override, Construct<CDynamicPropAlias_prop_dynamic_override>
// calls: CDynamicProp::CDynamicProp
CEntityInstance *__fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::ConstructInstance(
        CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDynamicProp::CDynamicProp(p);
    *p = &off_3FD5B70;
    *(p + 152) = off_3FD64C0;
    *(p + 153) = &off_3FD65D8;
  }
  return p;
}


// CDynamicPropAlias_prop_dynamic_override::~CDynamicPropAlias_prop_dynamic_override  (line 128, @0x0000000001fda400, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDynamicPropAlias_prop_dynamic_override::~CDynamicPropAlias_prop_dynamic_override(
        CDynamicPropAlias_prop_dynamic_override *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDynamicPropAlias_prop_dynamic_override::~CDynamicPropAlias_prop_dynamic_override  (line 128, @0x0000000001fda520, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp, ~CDynamicPropAlias_prop_dynamic_override
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDynamicPropAlias_prop_dynamic_override::~CDynamicPropAlias_prop_dynamic_override(
        CDynamicPropAlias_prop_dynamic_override *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 128, @0x0000000001fdacb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 128, @0x0000000001fdacd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal  (line 128, @0x0000000001fddcf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CDynamicProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "prop_dynamic_override", "CDynamicPropAlias_prop_dynamic_override"
// globals: `guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass, CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass, __dso_handle, CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo, CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo
CEntityClass *__cdecl CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass);
    CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass._vptr_CEntityClass = off_3FD5AF0;
    __cxa_guard_release(&`guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass);
    __cxa_atexit(
      CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass,
      &_dso_handle);
  }
  if ( g_pEntityCDynamicPropAlias_prop_dynamic_overrideClass != 0 )
    return &CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass;
  if ( `guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo) != 0 )
  {
    EntityClassInfo = CDynamicProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo,
      "CDynamicPropAlias_prop_dynamic_override",
      "prop_dynamic_override",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo);
  }
  CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass.m_pClassInfo = &CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo;
  CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass.m_pBaseClassInfo = CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo.m_pBaseClassInfo;
  g_pEntityCDynamicPropAlias_prop_dynamic_overrideClass = &CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass;
  CDynamicPropAlias_prop_dynamic_override::GetEntityClassInfo(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClassInfo.m_pClass = &CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass;
  CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDynamicPropAlias_prop_dynamic_overrideClass->m_pComponentOverrides = 0;
  return &CDynamicPropAlias_prop_dynamic_override::GetEntityClassInternal(void)::g_EntityCDynamicPropAlias_prop_dynamic_overrideClass;
}


// CDynamicProp::OverridePropdata  (line 132, @0x0000000001ea1540, libserver.so)
bool __fastcall CDynamicProp::OverridePropdata(CDynamicProp *const this)
{
  return this->m_bIsOverrideProp;
}


// CDynamicProp::UpdateOnRemove  (line 139, @0x0000000001ea2210, libserver.so)
// calls: CBreakableProp::UpdateOnRemove
void __fastcall CDynamicProp::UpdateOnRemove(CDynamicProp *const this)
{
  CBreakableProp::UpdateOnRemove(this);
}


// CDynamicProp::InputStartGlowing  (line 146, @0x0000000002090200, libserver.so)  // inlines: ForceStartGlowing
// calls: CGlowProperty::SetGlowState
void __fastcall CDynamicProp::InputStartGlowing(CDynamicProp *const this, inputdata_t *const inputdata)
{
  CGlowProperty::SetGlowState(&this->m_Glow, 3);
}


// CDynamicProp::InputStopGlowing  (line 153, @0x0000000002090220, libserver.so)  // inlines: ForceStopGlowing
// calls: CGlowProperty::SetGlowState
void __fastcall CDynamicProp::InputStopGlowing(CDynamicProp *const this, inputdata_t *const inputdata)
{
  CGlowProperty::SetGlowState(&this->m_Glow, 0);
}


// CDynamicProp::InputSetDefaultAnimation  (line 160, @0x0000000002092e20, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2092E51, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDynamicProp::InputSetDefaultAnimation(CDynamicProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_iszDefaultAnim.u.m_Id = v8;
}


// CDynamicProp::InputSetPlaybackRate  (line 167, @0x0000000002092c60, libserver.so)  // inlines: Float, GetBaseAnimatingController, GetSkeletonInstance, SetPlaybackRate, operator float
void __fastcall CDynamicProp::InputSetPlaybackRate(CDynamicProp *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  __int64 v3; // rax
  float v4; // [rsp+Ch] [rbp-4h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v4 = m_float64;
  v3 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v3 != 0 )
    (*(**(v3 + 736) + 176LL))(*(v3 + 736), v4);
  else
    (*(loc_0 + 176LL))(v4);
}


// CDynamicProp::InputDisableCollision  (line 174, @0x000000000208ed90, libserver.so)
void __fastcall CDynamicProp::InputDisableCollision(CDynamicProp *const this, inputdata_t *const inputdata)
{
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision, inputdata);
}


// CDynamicProp::InputEnableCollision  (line 181, @0x000000000208edb0, libserver.so)
void __fastcall CDynamicProp::InputEnableCollision(CDynamicProp *const this, inputdata_t *const inputdata)
{
  (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision, inputdata);
}


// CDynamicProp::InputTurnOn  (line 189, @0x00000000020901c0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDynamicProp::InputTurnOn(CDynamicProp *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CDynamicProp::InputTurnOff  (line 197, @0x000000000208ffb0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDynamicProp::InputTurnOff(CDynamicProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity::AddEffects(this, 32);
}


