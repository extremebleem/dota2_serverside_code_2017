
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_LoopingSound::~CDOTA_Unit_LoopingSound  (line 25, @0x0000000002b19c20, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_LoopingSound::~CDOTA_Unit_LoopingSound(CDOTA_Unit_LoopingSound *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_LoopingSound::~CDOTA_Unit_LoopingSound  (line 25, @0x0000000002b19c70, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_LoopingSound
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_LoopingSound::~CDOTA_Unit_LoopingSound(CDOTA_Unit_LoopingSound *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_LoopingSound::Schema_DynamicBinding  (line 27, @0x0000000002b157a0, libserver.so)
// globals: CDOTA_Unit_LoopingSound::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_LoopingSound::Schema_DynamicBinding(
        const CDOTA_Unit_LoopingSound *const this)
{
  return CDOTA_Unit_LoopingSound::s_pSchemaBinding;
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000002b157d0, libserver.so)
// globals: CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000002b157e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_LoopingSound>
void __fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000002b15800, libserver.so)
void __fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x0000000002b15820, libserver.so)
bool __fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x0000000002b15830, libserver.so)
// globals: CDOTA_Unit_LoopingSound::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_LoopingSound::s_pSchemaBinding;
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x0000000002b18ff0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4768);
  memset(v1, 0, 0x12A0u);
  return v1;
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x0000000002b19960, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_Unit_LoopingSound, CNetworkVarBase, Construct<CDOTA_Unit_LoopingSound>, EnsureValidValue<int>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1190) = 0;
    *p = &off_445D9D0;
    *(p + 236) = &off_445E930;
    *(p + 257) = &off_445EC60;
  }
  return p;
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002b22740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002b228d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_LoopingSound::GetEntityClassInternal  (line 27, @0x0000000002b2b550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_looping_sound", "CDOTA_Unit_LoopingSound"
// globals: `guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass, CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass, __dso_handle, CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo, CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo
CEntityClass *__cdecl CDOTA_Unit_LoopingSound::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass);
    CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass._vptr_CEntityClass = off_445D950;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass);
    __cxa_atexit(
      CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_LoopingSoundClass != 0 )
    return &CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass;
  if ( `guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo,
      "CDOTA_Unit_LoopingSound",
      "npc_dota_looping_sound",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo);
  }
  CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass.m_pClassInfo = &CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo;
  CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass.m_pBaseClassInfo = CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_LoopingSoundClass = &CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass;
  CDOTA_Unit_LoopingSound::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_LoopingSoundClassInfo.m_pClass = &CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass;
  CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_LoopingSoundClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_LoopingSound::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_LoopingSoundClass;
}


