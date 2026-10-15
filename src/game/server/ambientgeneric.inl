
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAmbientGeneric::~CAmbientGeneric  (line 71, @0x0000000002180ec0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CAmbientGeneric::~CAmbientGeneric(CAmbientGeneric *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CAmbientGeneric::~CAmbientGeneric  (line 71, @0x0000000002180ee0, libserver.so)  // inlines: operator delete, ~CAmbientGeneric, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CAmbientGeneric::~CAmbientGeneric(CAmbientGeneric *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CAmbientGeneric::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 73, @0x0000000001fb7800, libserver.so)
// globals: CAmbientGeneric::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAmbientGeneric::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CAmbientGeneric::CEntityInstanceEntityClass *const this)
{
  return CAmbientGeneric::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CAmbientGeneric::CEntityInstanceEntityClass::DestructInstance  (line 73, @0x0000000001fb7810, libserver.so)  // inlines: Destruct<CAmbientGeneric>
void __fastcall CAmbientGeneric::CEntityInstanceEntityClass::DestructInstance(
        CAmbientGeneric::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CAmbientGeneric::CEntityInstanceEntityClass::FreeInstance  (line 73, @0x0000000001fb7830, libserver.so)
void __fastcall CAmbientGeneric::CEntityInstanceEntityClass::FreeInstance(
        CAmbientGeneric::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CAmbientGeneric::CEntityInstanceEntityClass::CanAllocate  (line 73, @0x0000000001fb7850, libserver.so)
bool __fastcall CAmbientGeneric::CEntityInstanceEntityClass::CanAllocate(
        const CAmbientGeneric::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CAmbientGeneric::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 73, @0x0000000001fb7860, libserver.so)
// globals: CAmbientGeneric::s_pSchemaBinding
const ISchemaBinding *__fastcall CAmbientGeneric::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CAmbientGeneric::CEntityInstanceEntityClass *const this)
{
  return CAmbientGeneric::s_pSchemaBinding;
}


// CAmbientGeneric::CEntityInstanceEntityClass::AllocateInstance  (line 73, @0x0000000001fb9aa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CAmbientGeneric::CEntityInstanceEntityClass::AllocateInstance(
        CAmbientGeneric::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CAmbientGeneric::CEntityInstanceEntityClass::ConstructInstance  (line 73, @0x0000000001fb9cd0, libserver.so)  // inlines: CAmbientGeneric, CEntityHandle, CEntityIndex, CHandle, CPointEntity, CUtlSymbolLarge, Construct<CAmbientGeneric>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CAmbientGeneric::CEntityInstanceEntityClass::ConstructInstance(
        CAmbientGeneric::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 112) = 0;
    *(p + 113) = 0;
    *(p + 228) = -1;
    *(p + 229) = -1;
    *(p + 230) = 0;
    *p = &off_4001C50;
    *(p + 231) = -1;
  }
  return p;
}


// CAmbientGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000001fbd670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CAmbientGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAmbientGeneric::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CAmbientGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000001fbd690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CAmbientGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAmbientGeneric::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CAmbientGeneric::GetEntityClassInternal  (line 73, @0x0000000001fcb010, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseEntity>, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "ambient_generic", "CAmbientGeneric"
// globals: `guard variable for'CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass, CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass, __dso_handle, CAmbientGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo, CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo
CEntityClass *__cdecl CAmbientGeneric::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass == 0
    && __cxa_guard_acquire(&`guard variable for'CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass) != 0 )
  {
    CEntityClass::CEntityClass(&CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass);
    CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass._vptr_CEntityClass = off_3FD0810;
    __cxa_guard_release(&`guard variable for'CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass);
    __cxa_atexit(
      CAmbientGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass,
      &_dso_handle);
  }
  if ( g_pEntityCAmbientGenericClass != 0 )
    return &CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass;
  if ( `guard variable for'CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo,
      "CAmbientGeneric",
      "ambient_generic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo);
  }
  CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass.m_pClassInfo = &CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo;
  CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass.m_pBaseClassInfo = CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo.m_pBaseClassInfo;
  g_pEntityCAmbientGenericClass = &CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass;
  CAmbientGeneric::GetEntityClassInfo(void)::g_EntityCAmbientGenericClassInfo.m_pClass = &CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass;
  CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass.m_pScriptClassDesc = GetScriptDesc<CBaseEntity>(0);
  g_pEntityCAmbientGenericClass->m_pComponentOverrides = 0;
  return &CAmbientGeneric::GetEntityClassInternal(void)::g_EntityCAmbientGenericClass;
}


// CAmbientGeneric::GetEntityClass  (line 73, @0x000000000217a520, libserver.so)
CEntityClass *__cdecl CAmbientGeneric::GetEntityClass()
{
  return g_pEntityCAmbientGenericClass;
}


// CAmbientGeneric::Schema_DynamicBinding  (line 73, @0x000000000217b710, libserver.so)
// calls: CAmbientGeneric::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CAmbientGeneric::Schema_DynamicBinding(const CAmbientGeneric *const this)
{
  CAmbientGeneric::Schema_VerifyBindingIsRegistered();
  return CAmbientGeneric::s_pSchemaBinding;
}


