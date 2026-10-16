
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Aegis::~CDOTA_Item_Aegis  (line 34, @0x0000000002d64170, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Aegis::~CDOTA_Item_Aegis(CDOTA_Item_Aegis *const this)
{
  this->_vptr_IHandleEntity = &off_46821D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Aegis::~CDOTA_Item_Aegis  (line 34, @0x0000000002d64190, libserver.so)  // inlines: ~CDOTA_Item_Aegis
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Aegis::~CDOTA_Item_Aegis(CDOTA_Item_Aegis *const this)
{
  this->_vptr_IHandleEntity = &off_46821D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Aegis::Schema_DynamicBinding  (line 36, @0x0000000002d604a0, libserver.so)
// globals: CDOTA_Item_Aegis::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Aegis::Schema_DynamicBinding(const CDOTA_Item_Aegis *const this)
{
  return CDOTA_Item_Aegis::s_pSchemaBinding;
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002d604b0, libserver.so)
// globals: CDOTA_Item_Aegis::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Aegis::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002d604c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Aegis>
void __fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002d604e0, libserver.so)
void __fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002d60500, libserver.so)
bool __fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002d60510, libserver.so)
// globals: CDOTA_Item_Aegis::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Aegis::s_pSchemaBinding;
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002d62270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002d63490, libserver.so)  // inlines: CDOTA_Item_Aegis, Construct<CDOTA_Item_Aegis>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 250) = -1;
    *p = &off_46821D0;
    *(p + 251) = 0;
  }
  return p;
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002d66090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Aegis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002d660b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Aegis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Aegis::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Aegis::GetEntityClassInternal  (line 36, @0x0000000002d69b40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Aegis"
// globals: `guard variable for'CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass, CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass, __dso_handle, CDOTA_Item_Aegis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo, CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo
CEntityClass *__cdecl CDOTA_Item_Aegis::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass);
    CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass._vptr_CEntityClass = off_4682150;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass);
    __cxa_atexit(
      CDOTA_Item_Aegis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_AegisClass != 0 )
    return &CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass;
  if ( `guard variable for'CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo,
      "CDOTA_Item_Aegis",
      "item_aegis",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo);
  }
  CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass.m_pClassInfo = &CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo;
  CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass.m_pBaseClassInfo = CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_AegisClass = &CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass;
  CDOTA_Item_Aegis::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AegisClassInfo.m_pClass = &CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass;
  CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_AegisClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Aegis::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AegisClass;
}


// CDOTA_Item_Aegis::GetIntrinsicModifierName  (line 50, @0x0000000002d60520, libserver.so)
// strings: "modifier_item_aegis"
const char *__fastcall CDOTA_Item_Aegis::GetIntrinsicModifierName(CDOTA_Item_Aegis *const this)
{
  return "modifier_item_aegis";
}


// CDOTA_Item_Aegis::CanUnitPickUp  (line 56, @0x0000000002d60530, libserver.so)
bool __fastcall CDOTA_Item_Aegis::CanUnitPickUp(CDOTA_Item_Aegis *const this, CDOTA_BaseNPC *pUnit)
{
  uint32 m_iUnitType; // edx
  bool result; // al

  m_iUnitType = pUnit->m_iUnitType;
  result = 0;
  if ( (m_iUnitType & 0x100) == 0 )
    return ((m_iUnitType >> 1) ^ 1) & 1;
  return result;
}


