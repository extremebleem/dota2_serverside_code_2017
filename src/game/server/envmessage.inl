
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMessage::~CMessage  (line 21, @0x00000000022106e0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMessage::~CMessage(CMessage *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CMessage::~CMessage  (line 21, @0x0000000002210700, libserver.so)  // inlines: ~CMessage, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMessage::~CMessage(CMessage *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMessage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x0000000001fd8000, libserver.so)
// globals: CMessage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMessage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMessage::CEntityInstanceEntityClass *const this)
{
  return CMessage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMessage::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x0000000001fd8010, libserver.so)  // inlines: Destruct<CMessage>
void __fastcall CMessage::CEntityInstanceEntityClass::DestructInstance(
        CMessage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMessage::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x0000000001fd8030, libserver.so)
void __fastcall CMessage::CEntityInstanceEntityClass::FreeInstance(
        CMessage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMessage::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x0000000001fd8050, libserver.so)
bool __fastcall CMessage::CEntityInstanceEntityClass::CanAllocate(
        const CMessage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMessage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x0000000001fd8060, libserver.so)
// globals: CMessage::s_pSchemaBinding
const ISchemaBinding *__fastcall CMessage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMessage::CEntityInstanceEntityClass *const this)
{
  return CMessage::s_pSchemaBinding;
}


// CMessage::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x0000000001fd9520, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMessage::CEntityInstanceEntityClass::AllocateInstance(
        CMessage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CMessage::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x0000000001fd9850, libserver.so)  // inlines: CEntityIOOutput, CMessage, CPointEntity, CUtlSymbolLarge, Construct<CMessage>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMessage::CEntityInstanceEntityClass::ConstructInstance(
        CMessage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *(p + 100) = 0;
    *p = &off_402EB90;
    *(p + 101) = off_3F7C190;
  }
  return p;
}


// CMessage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001fdaa80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMessage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMessage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMessage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001fdaaa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMessage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMessage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMessage::GetEntityClassInternal  (line 23, @0x0000000001fded20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "env_message", "CMessage"
// globals: `guard variable for'CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass, CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass, __dso_handle, CMessage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo, CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo
CEntityClass *__cdecl CMessage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass);
    CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass._vptr_CEntityClass = off_3FD7650;
    __cxa_guard_release(&`guard variable for'CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass);
    __cxa_atexit(
      CMessage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass,
      &_dso_handle);
  }
  if ( g_pEntityCMessageClass != 0 )
    return &CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass;
  if ( `guard variable for'CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo,
      "CMessage",
      "env_message",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo);
  }
  CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass.m_pClassInfo = &CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo;
  CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass.m_pBaseClassInfo = CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo.m_pBaseClassInfo;
  g_pEntityCMessageClass = &CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass;
  CMessage::GetEntityClassInfo(void)::g_EntityCMessageClassInfo.m_pClass = &CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass;
  CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMessageClass->m_pComponentOverrides = 0;
  return &CMessage::GetEntityClassInternal(void)::g_EntityCMessageClass;
}


// CMessage::GetEntityClass  (line 23, @0x000000000220df40, libserver.so)
CEntityClass *__cdecl CMessage::GetEntityClass()
{
  return g_pEntityCMessageClass;
}


// CMessage::Schema_DynamicBinding  (line 23, @0x0000000002210f70, libserver.so)
// calls: CMessage::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CMessage::Schema_DynamicBinding(const CMessage *const this)
{
  CMessage::Schema_VerifyBindingIsRegistered();
  return CMessage::s_pSchemaBinding;
}


