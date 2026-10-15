
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvMicrophone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000001fd8070, libserver.so)
// globals: CEnvMicrophone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvMicrophone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvMicrophone::CEntityInstanceEntityClass *const this)
{
  return CEnvMicrophone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvMicrophone::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000001fd8080, libserver.so)  // inlines: Destruct<CEnvMicrophone>
void __fastcall CEnvMicrophone::CEntityInstanceEntityClass::DestructInstance(
        CEnvMicrophone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvMicrophone::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000001fd80a0, libserver.so)
void __fastcall CEnvMicrophone::CEntityInstanceEntityClass::FreeInstance(
        CEnvMicrophone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvMicrophone::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000001fd80c0, libserver.so)
bool __fastcall CEnvMicrophone::CEntityInstanceEntityClass::CanAllocate(
        const CEnvMicrophone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvMicrophone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000001fd80d0, libserver.so)
// globals: CEnvMicrophone::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvMicrophone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvMicrophone::CEntityInstanceEntityClass *const this)
{
  return CEnvMicrophone::s_pSchemaBinding;
}


// CEnvMicrophone::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000001fd9560, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvMicrophone::CEntityInstanceEntityClass::AllocateInstance(
        CEnvMicrophone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1184);
  memset(v1, 0, 0x4A0u);
  return v1;
}


// CEnvMicrophone::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000001fda290, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CEnvMicrophone, CHandle, CPointEntity, CUtlSymbolLarge, Construct<CEnvMicrophone>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvMicrophone::CEntityInstanceEntityClass::ConstructInstance(
        CEnvMicrophone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 195) = -1;
    *(p + 100) = 0;
    *(p + 202) = -1;
    *(p + 103) = 0;
    *(p + 208) = -1;
    *p = &off_402FA90;
    *(p + 105) = off_3FD2290;
    *(p + 109) = off_3F7C190;
    *(p + 112) = off_3F7C190;
  }
  return p;
}


// CEnvMicrophone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000001fdaad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvMicrophone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvMicrophone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvMicrophone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000001fdaaf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvMicrophone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvMicrophone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvMicrophone::GetEntityClassInternal  (line 40, @0x0000000001fdef90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "env_microphone", "CEnvMicrophone"
// globals: `guard variable for'CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass, CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass, __dso_handle, CEnvMicrophone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo, CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo
CEntityClass *__cdecl CEnvMicrophone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass);
    CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass._vptr_CEntityClass = off_3FD7810;
    __cxa_guard_release(&`guard variable for'CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass);
    __cxa_atexit(
      CEnvMicrophone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvMicrophoneClass != 0 )
    return &CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass;
  if ( `guard variable for'CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo,
      "CEnvMicrophone",
      "env_microphone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo);
  }
  CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass.m_pClassInfo = &CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo;
  CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass.m_pBaseClassInfo = CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvMicrophoneClass = &CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass;
  CEnvMicrophone::GetEntityClassInfo(void)::g_EntityCEnvMicrophoneClassInfo.m_pClass = &CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass;
  CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvMicrophoneClass->m_pComponentOverrides = 0;
  return &CEnvMicrophone::GetEntityClassInternal(void)::g_EntityCEnvMicrophoneClass;
}


// CEnvMicrophone::GetEntityClass  (line 40, @0x000000000220dfe0, libserver.so)
CEntityClass *__cdecl CEnvMicrophone::GetEntityClass()
{
  return g_pEntityCEnvMicrophoneClass;
}


// CEnvMicrophone::Schema_DynamicBinding  (line 40, @0x0000000002210f90, libserver.so)
// calls: CEnvMicrophone::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvMicrophone::Schema_DynamicBinding(const CEnvMicrophone *const this)
{
  CEnvMicrophone::Schema_VerifyBindingIsRegistered();
  return CEnvMicrophone::s_pSchemaBinding;
}


