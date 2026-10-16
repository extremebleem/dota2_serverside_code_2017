
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Courier::Schema_DynamicBinding  (line 43, @0x0000000002ab7040, libserver.so)
// globals: CDOTA_Unit_Courier::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Courier::Schema_DynamicBinding(
        const CDOTA_Unit_Courier *const this)
{
  return CDOTA_Unit_Courier::s_pSchemaBinding;
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002ab7070, libserver.so)
// globals: CDOTA_Unit_Courier::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Courier::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002ab7080, libserver.so)  // inlines: Destruct<CDOTA_Unit_Courier>
void __fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002ab70a0, libserver.so)
void __fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002ab70c0, libserver.so)
bool __fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002ab70d0, libserver.so)
// globals: CDOTA_Unit_Courier::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Courier::s_pSchemaBinding;
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002abe340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4536);
  memset(v1, 0, 0x11B8u);
  return v1;
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002acd030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002acd290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Courier::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002ad6420, libserver.so)  // inlines: Construct<CDOTA_Unit_Courier>
// calls: CDOTA_Unit_Courier::CDOTA_Unit_Courier
CEntityInstance *__fastcall CDOTA_Unit_Courier::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Courier::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Unit_Courier::CDOTA_Unit_Courier(p);
  return p;
}


// CDOTA_Unit_Courier::GetEntityClassInternal  (line 43, @0x0000000002ae6950, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Unit_Courier>, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_courier", "CDOTA_Unit_Courier"
// globals: `guard variable for'CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass, CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass, __dso_handle, CDOTA_Unit_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo, CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo
CEntityClass *__cdecl CDOTA_Unit_Courier::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass);
    CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass._vptr_CEntityClass = off_43CB7B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass);
    __cxa_atexit(
      CDOTA_Unit_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_CourierClass != 0 )
    return &CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass;
  if ( `guard variable for'CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo,
      "CDOTA_Unit_Courier",
      "npc_dota_courier",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo);
  }
  CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass.m_pClassInfo = &CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo;
  CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass.m_pBaseClassInfo = CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_CourierClass = &CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass;
  CDOTA_Unit_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_CourierClassInfo.m_pClass = &CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass;
  CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Unit_Courier>(0);
  g_pEntityCDOTA_Unit_CourierClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_CourierClass;
}


// CDOTA_Unit_Courier::IsInventoryEnabled  (line 105, @0x0000000002ab70e0, libserver.so)
bool __fastcall CDOTA_Unit_Courier::IsInventoryEnabled(CDOTA_Unit_Courier *const this)
{
  return 1;
}


// CDOTA_Unit_Courier::IsFlyingVisually  (line 113, @0x0000000002ab70f0, libserver.so)
bool __fastcall CDOTA_Unit_Courier::IsFlyingVisually(CDOTA_Unit_Courier *const this)
{
  return this->m_bFlyingCourier.m_Value;
}


