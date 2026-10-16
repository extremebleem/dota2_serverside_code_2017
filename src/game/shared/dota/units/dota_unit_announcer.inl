
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAnnouncerDescriptor::Schema_DynamicBinding  (line 28, @0x0000000002ab7100, libserver.so)
// globals: CAnnouncerDescriptor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAnnouncerDescriptor::Schema_DynamicBinding(
        const CAnnouncerDescriptor *const this)
{
  return CAnnouncerDescriptor::s_pSchemaBinding;
}


// CDOTA_Unit_Announcer::~CDOTA_Unit_Announcer  (line 46, @0x0000000002ac0270, libserver.so)
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Announcer::~CDOTA_Unit_Announcer(CDOTA_Unit_Announcer *const this)
{
  this->_vptr_IHandleEntity = &off_43CB8D0;
  this->_vptr_INextBotEventResponder = &off_43CC838;
  this->_vptr_CObstructionObject = &off_43CCB68;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Announcer::~CDOTA_Unit_Announcer  (line 46, @0x0000000002ac02b0, libserver.so)  // inlines: ~CDOTA_Unit_Announcer
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Announcer::~CDOTA_Unit_Announcer(CDOTA_Unit_Announcer *const this)
{
  this->_vptr_IHandleEntity = &off_43CB8D0;
  this->_vptr_INextBotEventResponder = &off_43CC838;
  this->_vptr_CObstructionObject = &off_43CCB68;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Announcer::Schema_DynamicBinding  (line 48, @0x0000000002ab7110, libserver.so)
// globals: CDOTA_Unit_Announcer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Announcer::Schema_DynamicBinding(
        const CDOTA_Unit_Announcer *const this)
{
  return CDOTA_Unit_Announcer::s_pSchemaBinding;
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 48, @0x0000000002ab7140, libserver.so)
// globals: CDOTA_Unit_Announcer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Announcer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::DestructInstance  (line 48, @0x0000000002ab7150, libserver.so)  // inlines: Destruct<CDOTA_Unit_Announcer>
void __fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::FreeInstance  (line 48, @0x0000000002ab7170, libserver.so)
void __fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::CanAllocate  (line 48, @0x0000000002ab7190, libserver.so)
bool __fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 48, @0x0000000002ab71a0, libserver.so)
// globals: CDOTA_Unit_Announcer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Announcer::s_pSchemaBinding;
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::AllocateInstance  (line 48, @0x0000000002abe380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::ConstructInstance  (line 48, @0x0000000002abff90, libserver.so)  // inlines: CDOTA_Unit_Announcer, Construct<CDOTA_Unit_Announcer>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_43CB8D0;
    *(p + 236) = &off_43CC838;
    *(p + 257) = &off_43CCB68;
  }
  return p;
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002acb620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Announcer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002accf60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Announcer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Announcer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Announcer::GetEntityClassInternal  (line 48, @0x0000000002ad5a30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_announcer", "CDOTA_Unit_Announcer"
// globals: `guard variable for'CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass, CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass, __dso_handle, CDOTA_Unit_Announcer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo, CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Announcer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass);
    CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass._vptr_CEntityClass = off_43CB850;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass);
    __cxa_atexit(
      CDOTA_Unit_Announcer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_AnnouncerClass != 0 )
    return &CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass;
  if ( `guard variable for'CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo,
      "CDOTA_Unit_Announcer",
      "npc_dota_hero_announcer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo);
  }
  CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass.m_pClassInfo = &CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo;
  CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass.m_pBaseClassInfo = CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_AnnouncerClass = &CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass;
  CDOTA_Unit_Announcer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_AnnouncerClassInfo.m_pClass = &CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass;
  CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_AnnouncerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Announcer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_AnnouncerClass;
}


// CDOTA_Unit_Announcer::ShouldDraw  (line 55, @0x0000000002ab71b0, libserver.so)
bool __fastcall CDOTA_Unit_Announcer::ShouldDraw(CDOTA_Unit_Announcer *const this)
{
  return 0;
}


// CDOTA_Unit_Announcer::IsPartOfFOWSystem  (line 56, @0x0000000002ab71c0, libserver.so)
bool __fastcall CDOTA_Unit_Announcer::IsPartOfFOWSystem(CDOTA_Unit_Announcer *const this)
{
  return 0;
}


// CDOTA_Unit_Announcer::IsKillingSpreeAnnouncer  (line 61, @0x0000000002ab71d0, libserver.so)
bool __fastcall CDOTA_Unit_Announcer::IsKillingSpreeAnnouncer(CDOTA_Unit_Announcer *const this)
{
  return 0;
}


// CDOTA_Unit_Announcer::IsAnnouncer  (line 68, @0x0000000002ab71e0, libserver.so)
bool __fastcall CDOTA_Unit_Announcer::IsAnnouncer(const CDOTA_Unit_Announcer *const this)
{
  return 1;
}


