
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseProp::~CBaseProp  (line 26, @0x0000000002090040, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CBaseProp::~CBaseProp(CBaseProp *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseProp::~CBaseProp  (line 26, @0x0000000002090080, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBaseProp::~CBaseProp(CBaseProp *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseProp::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000001ea0fa0, libserver.so)  // inlines: Destruct<CBaseProp>
void __fastcall CBaseProp::CEntityInstanceEntityClass::DestructInstance(
        CBaseProp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseProp::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000001ea0fc0, libserver.so)
void __fastcall CBaseProp::CEntityInstanceEntityClass::FreeInstance(
        CBaseProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseProp::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000001ea0fe0, libserver.so)
bool __fastcall CBaseProp::CEntityInstanceEntityClass::CanAllocate(
        const CBaseProp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseProp::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000001ea1b50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseProp::CEntityInstanceEntityClass::AllocateInstance(
        CBaseProp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CBaseProp::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000001ea1ed0, libserver.so)  // inlines: CBaseProp, Construct<CBaseProp>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CBaseProp::CEntityInstanceEntityClass::ConstructInstance(
        CBaseProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_3FEFC30;
  }
  return p;
}


// CBaseProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000001ea2020, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseProp::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseProp::CEntityInstanceEntityClass *const this)
{
  CBaseProp::Schema_VerifyBindingIsRegistered();
  return CBaseProp::s_pSchemaBinding;
}


// CBaseProp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000001ea2040, libserver.so)
// calls: CBaseProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseProp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseProp::CEntityInstanceEntityClass *const this)
{
  CBaseProp::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseProp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000001ea27d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000001ea27f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseProp::GetEntityClassInfo  (line 30, @0x0000000001f16880, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CPhysicsProp::GetEntityClassInfo, CPhysicsProp::GetEntityClassInternal
// strings: "CBaseProp", "baseanimating", "CBaseAnimating", "basemodelentity", "CBaseModelEntity", "CBaseEntity" (7 total)
// globals: `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo, CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (10 total)
CEntityClassInfo *__cdecl CBaseProp::GetEntityClassInfo()
{
  if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo != 0 )
    return &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) == 0 )
    return &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo;
  if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
      {
        if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
        {
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
            "CGameEntity",
            0,
            0,
            &g_EntityRootClassInfo);
          __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
          "CBaseEntity",
          0,
          0,
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
      "CBaseAnimating",
      "baseanimating",
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
    "CBaseProp",
    0,
    0,
    &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
  return &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo;
}


// CBaseProp::GetEntityClassInternal  (line 30, @0x0000000001fcc930, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseAnimating>, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CBaseProp"
// globals: `guard variable for'CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass, CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass, __dso_handle, CBaseProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo, CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo
CEntityClass *__cdecl CBaseProp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass);
    CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass._vptr_CEntityClass = off_3FAF5B0;
    __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass);
    __cxa_atexit(
      CBaseProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass,
      &_dso_handle);
  }
  if ( g_pEntityCBasePropClass != 0 )
    return &CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass;
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
  CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass.m_pClassInfo = &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo;
  CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass.m_pBaseClassInfo = CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo.m_pBaseClassInfo;
  g_pEntityCBasePropClass = &CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass;
  CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo.m_pClass = &CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass;
  CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass.m_pScriptClassDesc = GetScriptDesc<CBaseAnimating>(0);
  g_pEntityCBasePropClass->m_pComponentOverrides = 0;
  return &CBaseProp::GetEntityClassInternal(void)::g_EntityCBasePropClass;
}


// CBaseProp::GetEntityClass  (line 30, @0x000000000208ed20, libserver.so)
CEntityClass *__cdecl CBaseProp::GetEntityClass()
{
  return g_pEntityCBasePropClass;
}


// CBaseProp::Schema_DynamicBinding  (line 30, @0x0000000002090160, libserver.so)
// calls: CBaseProp::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseProp::Schema_DynamicBinding(const CBaseProp *const this)
{
  CBaseProp::Schema_VerifyBindingIsRegistered();
  return CBaseProp::s_pSchemaBinding;
}


// CBaseProp::IsAlive  (line 51, @0x0000000001ea0ff0, libserver.so)
bool __fastcall CBaseProp::IsAlive(CBaseProp *const this)
{
  return 0;
}


// CBaseProp::OverridePropdata  (line 52, @0x000000000208ed30, libserver.so)
bool __fastcall CBaseProp::OverridePropdata(CBaseProp *const this)
{
  return 1;
}


