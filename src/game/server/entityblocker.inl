
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityBlocker::~CEntityBlocker  (line 16, @0x00000000021e1890, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CEntityBlocker::~CEntityBlocker(CEntityBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_4022C70;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEntityBlocker::~CEntityBlocker  (line 16, @0x00000000021e18b0, libserver.so)  // inlines: ~CEntityBlocker
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEntityBlocker::~CEntityBlocker(CEntityBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_4022C70;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEntityBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x0000000001fd7cf0, libserver.so)
// globals: CEntityBlocker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEntityBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEntityBlocker::CEntityInstanceEntityClass *const this)
{
  return CEntityBlocker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEntityBlocker::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x0000000001fd7d00, libserver.so)  // inlines: Destruct<CEntityBlocker>
void __fastcall CEntityBlocker::CEntityInstanceEntityClass::DestructInstance(
        CEntityBlocker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEntityBlocker::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x0000000001fd7d20, libserver.so)
void __fastcall CEntityBlocker::CEntityInstanceEntityClass::FreeInstance(
        CEntityBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEntityBlocker::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x0000000001fd7d40, libserver.so)
bool __fastcall CEntityBlocker::CEntityInstanceEntityClass::CanAllocate(
        const CEntityBlocker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEntityBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x0000000001fd7d50, libserver.so)
// globals: CEntityBlocker::s_pSchemaBinding
const ISchemaBinding *__fastcall CEntityBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEntityBlocker::CEntityInstanceEntityClass *const this)
{
  return CEntityBlocker::s_pSchemaBinding;
}


// CEntityBlocker::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000001fd9360, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEntityBlocker::CEntityInstanceEntityClass::AllocateInstance(
        CEntityBlocker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CEntityBlocker::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x0000000001fd98b0, libserver.so)  // inlines: CEntityBlocker, Construct<CEntityBlocker>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CEntityBlocker::CEntityInstanceEntityClass::ConstructInstance(
        CEntityBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_4022C70;
  }
  return p;
}


// CEntityBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000001fdad50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEntityBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEntityBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000001fdad70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEntityBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEntityBlocker::GetEntityClassInternal  (line 18, @0x0000000001fdde40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "CEntityBlocker"
// globals: `guard variable for'CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass, CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass, __dso_handle, CEntityBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo, CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo
CEntityClass *__cdecl CEntityBlocker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass);
    CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass._vptr_CEntityClass = off_3FD6A10;
    __cxa_guard_release(&`guard variable for'CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass);
    __cxa_atexit(
      CEntityBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass,
      &_dso_handle);
  }
  if ( g_pEntityCEntityBlockerClass != 0 )
    return &CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass;
  if ( `guard variable for'CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo,
      "CEntityBlocker",
      "entity_blocker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo);
  }
  CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass.m_pClassInfo = &CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo;
  CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass.m_pBaseClassInfo = CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo.m_pBaseClassInfo;
  g_pEntityCEntityBlockerClass = &CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass;
  CEntityBlocker::GetEntityClassInfo(void)::g_EntityCEntityBlockerClassInfo.m_pClass = &CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass;
  CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEntityBlockerClass->m_pComponentOverrides = 0;
  return &CEntityBlocker::GetEntityClassInternal(void)::g_EntityCEntityBlockerClass;
}


// CEntityBlocker::Schema_DynamicBinding  (line 18, @0x00000000021e1940, libserver.so)
// calls: CEntityBlocker::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityBlocker::Schema_DynamicBinding(const CEntityBlocker *const this)
{
  CEntityBlocker::Schema_VerifyBindingIsRegistered();
  return CEntityBlocker::s_pSchemaBinding;
}


// CEntityBlocker::PhysicsSolidMaskForEntity  (line 26, @0x00000000021df0b0, libserver.so)
uint64 __fastcall CEntityBlocker::PhysicsSolidMaskForEntity(CEntityBlocker *const this)
{
  return 0x2000;
}


