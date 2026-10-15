
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvInstructorHint::GetEntityClass  (line 14, @0x00000000021df320, libserver.so)
CEntityClass *__cdecl CEnvInstructorHint::GetEntityClass()
{
  return g_pEntityCEnvInstructorHintClass;
}


// CEnvInstructorHint::Schema_DynamicBinding  (line 14, @0x00000000021df330, libserver.so)
// globals: CEnvInstructorHint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvInstructorHint::Schema_DynamicBinding(
        const CEnvInstructorHint *const this)
{
  return CEnvInstructorHint::s_pSchemaBinding;
}


// CEnvInstructorHint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 14, @0x00000000021df340, libserver.so)
// globals: CEnvInstructorHint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvInstructorHint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvInstructorHint::CEntityInstanceEntityClass *const this)
{
  return CEnvInstructorHint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvInstructorHint::CEntityInstanceEntityClass::DestructInstance  (line 14, @0x00000000021df350, libserver.so)  // inlines: Destruct<CEnvInstructorHint>
void __fastcall CEnvInstructorHint::CEntityInstanceEntityClass::DestructInstance(
        CEnvInstructorHint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvInstructorHint::CEntityInstanceEntityClass::FreeInstance  (line 14, @0x00000000021df370, libserver.so)
void __fastcall CEnvInstructorHint::CEntityInstanceEntityClass::FreeInstance(
        CEnvInstructorHint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvInstructorHint::CEntityInstanceEntityClass::CanAllocate  (line 14, @0x00000000021df390, libserver.so)
bool __fastcall CEnvInstructorHint::CEntityInstanceEntityClass::CanAllocate(
        const CEnvInstructorHint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvInstructorHint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 14, @0x00000000021df3a0, libserver.so)
// globals: CEnvInstructorHint::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvInstructorHint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvInstructorHint::CEntityInstanceEntityClass *const this)
{
  return CEnvInstructorHint::s_pSchemaBinding;
}


// CEnvInstructorHint::CEntityInstanceEntityClass::AllocateInstance  (line 14, @0x00000000021e0a80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvInstructorHint::CEntityInstanceEntityClass::AllocateInstance(
        CEnvInstructorHint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 888);
  memset(v1, 0, 0x378u);
  return v1;
}


// CEnvInstructorHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x00000000021e2980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvInstructorHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvInstructorHint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvInstructorHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x00000000021e29a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvInstructorHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvInstructorHint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvInstructorHint::GetEntityClassInternal  (line 14, @0x00000000021eab60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_instructor_hint", "CEnvInstructorHint"
// globals: `guard variable for'CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass, CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass, __dso_handle, CEnvInstructorHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo, CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo
CEntityClass *__cdecl CEnvInstructorHint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass);
    CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass._vptr_CEntityClass = off_40271F0;
    __cxa_guard_release(&`guard variable for'CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass);
    __cxa_atexit(
      CEnvInstructorHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvInstructorHintClass != 0 )
    return &CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass;
  if ( `guard variable for'CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo,
      "CEnvInstructorHint",
      "env_instructor_hint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo);
  }
  CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass.m_pClassInfo = &CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo;
  CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass.m_pBaseClassInfo = CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvInstructorHintClass = &CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass;
  CEnvInstructorHint::GetEntityClassInfo(void)::g_EntityCEnvInstructorHintClassInfo.m_pClass = &CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass;
  CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvInstructorHintClass->m_pComponentOverrides = 0;
  return &CEnvInstructorHint::GetEntityClassInternal(void)::g_EntityCEnvInstructorHintClass;
}


// CEnvInstructorHint::CEntityInstanceEntityClass::ConstructInstance  (line 14, @0x00000000021eacb0, libserver.so)  // inlines: Construct<CEnvInstructorHint>
// calls: CEnvInstructorHint::CEnvInstructorHint
CEntityInstance *__fastcall CEnvInstructorHint::CEntityInstanceEntityClass::ConstructInstance(
        CEnvInstructorHint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvInstructorHint::CEnvInstructorHint(p);
  return p;
}


